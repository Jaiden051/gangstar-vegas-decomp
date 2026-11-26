#include "Core/Utils/DecompTypes.h"
#include "iap_internal.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: g4_std::set_string_f21c9c::erase  (binary VA: 0x14c76c0)
// Original: std::set<std::string>::erase
// ----------------------------------------------------------------------------
char * g4_std::set_string_f21c9c::erase(uint32_t *a1, void **a2)
{
  uint32_t *v2;
  uint32_t *s1;
  size_t n;
  size_t v5;
  int v6;
  int v7;
  size_t i;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v14;
  size_t v15;
  size_t v16;
  size_t v17;
  int v18;
  size_t v19;
  size_t v20;
  size_t v21;
  int v22;
  int v23;
  size_t v24;
  size_t v25;
  size_t v26;
  size_t v27;
  size_t v28;
  void *s2;
  char *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;

  v34 = a1 + 1;
  v33 = a1 + 1;
  v31 = a1 + 1;
  v35 = (uint32_t *)a1[2];
  if ( v35 != nullptr )
  {
    v2 = (uint32_t *)a1[2];
    s2 = *a2;
    v27 = *((uint32_t *)*a2 - 3);
    while ( 1 )
    {
      while ( 1 )
      {
        s1 = (uint32_t *)v2[4];
        n = v27;
        v5 = *(s1 - 3);
        if ( v5 <= v27 )
          n = *(s1 - 3);
        v24 = n;
        v6 = memcmp(s1, s2, n);
        if ( v6 == 0 )
          v6 = v5 - v27;
        if ( v6 >= 0 )
          break;
        v2 = (uint32_t *)v2[3];
        if ( v2 == nullptr )
          goto LABEL_13;
      }
      v7 = memcmp(s2, s1, v24);
      if ( v7 == 0 )
        v7 = v27 - v5;
      if ( v7 >= 0 )
        break;
      v31 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
      {
LABEL_13:
        v33 = v31;
        goto LABEL_14;
      }
    }
    v14 = v2[3];
    v15 = v27;
    v33 = v31;
    v28 = v2[2];
    if ( v14 != 0 )
    {
      v32 = v2;
      do
      {
        while ( 1 )
        {
          v16 = v15;
          v17 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
          if ( v17 <= v15 )
            v16 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
          v18 = memcmp(s2, *(const void **)(v14 + 16), v16);
          if ( v18 == 0 )
            v18 = v15 - v17;
          if ( v18 >= 0 )
            break;
          v33 = (uint32_t *)v14;
          v14 = *(uint32_t *)(v14 + 8);
          if ( v14 == 0 )
            goto LABEL_31;
        }
        v14 = *(uint32_t *)(v14 + 12);
      }
      while ( v14 != 0 );
LABEL_31:
      v2 = v32;
    }
    v31 = v2;
    if ( v28 != 0 )
    {
      v19 = v28;
      do
      {
        v20 = *(uint32_t *)(*(uint32_t *)(v19 + 16) - 12);
        v21 = v20;
        if ( v15 <= v20 )
          v21 = v15;
        v22 = v20 - v15;
        v23 = memcmp(*(const void **)(v19 + 16), s2, v21);
        if ( v23 == 0 )
          v23 = v22;
        if ( v23 >= 0 )
        {
          v31 = (uint32_t *)v19;
          v19 = *(uint32_t *)(v19 + 8);
        }
        else
        {
          v19 = *(uint32_t *)(v19 + 12);
        }
      }
      while ( v19 != 0 );
    }
  }
LABEL_14:
  v30 = (char *)a1[5];
  if ( (uint32_t *)a1[3] == v31 && v34 == v33 )
  {
    g4_std::Rb_tree_string_string_Identity_s_127648::M_erase(
      (int)(uintptr_t)(a1),
      v35);
    a1[3] = (uint32_t)(uintptr_t)(v34);
    a1[2] = 0;
    a1[4] = (uint32_t)(uintptr_t)(v34);
    a1[5] = 0;
  }
  else if ( v33 == v31 )
  {
    return nullptr;
  }
  else
  {
    for ( i = (size_t)v31; ; i = (size_t)v9 )
    {
      v25 = i;
      v9 = (uint32_t *)sub_19048E0(i);
      v10 = (uint32_t *)sub_1904AE0(v25, v34);
      v11 = v10[4];
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        v26 = (size_t)v10;
        g4_std::string::Rep::M_destroy((void *)(v11 - 12));
        v10 = (uint32_t *)v26;
      }
      opDelete(v10);
      v12 = a1[5] - 1;
      a1[5] = v12;
      if ( v33 == v9 )
        break;
    }
    v30 -= v12;
  }
  return v30;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase  (binary VA: 0x14c7970)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,long>,std::_Select1st<std::pair<std::string const,long>>,std::less<std::string>,std::allocator<std::pair<std::string const,long>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(int a1, void **a2)
{
  void **v2;
  volatile int32_t *v3;
  void **v4;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
        a1,
        v2[3]);
      v3 = (volatile int32_t *)v2[4];
      v4 = (void **)v2[2];
      if ( v3 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v3 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)(v3 - 3));
      opDelete(v2);
      if ( v4 == nullptr )
        break;
      v2 = v4;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_string_long_9c4ea6::erase  (binary VA: 0x14c79f0)
// Original: std::map<std::string,long>::erase
// ----------------------------------------------------------------------------
char * g4_std::map_string_long_9c4ea6::erase(uint32_t *a1, void **a2)
{
  uint32_t *v2;
  uint32_t *s1;
  size_t n;
  size_t v5;
  int v6;
  int v7;
  size_t i;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v14;
  size_t v15;
  size_t v16;
  size_t v17;
  int v18;
  size_t v19;
  size_t v20;
  size_t v21;
  int v22;
  int v23;
  size_t v24;
  size_t v25;
  size_t v26;
  size_t v27;
  size_t v28;
  void *s2;
  char *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  void **v35;

  v34 = a1 + 1;
  v33 = a1 + 1;
  v31 = a1 + 1;
  v35 = (void **)a1[2];
  if ( v35 != nullptr )
  {
    v2 = (uint32_t *)a1[2];
    s2 = *a2;
    v27 = *((uint32_t *)*a2 - 3);
    while ( 1 )
    {
      while ( 1 )
      {
        s1 = (uint32_t *)v2[4];
        n = v27;
        v5 = *(s1 - 3);
        if ( v5 <= v27 )
          n = *(s1 - 3);
        v24 = n;
        v6 = memcmp(s1, s2, n);
        if ( v6 == 0 )
          v6 = v5 - v27;
        if ( v6 >= 0 )
          break;
        v2 = (uint32_t *)v2[3];
        if ( v2 == nullptr )
          goto LABEL_13;
      }
      v7 = memcmp(s2, s1, v24);
      if ( v7 == 0 )
        v7 = v27 - v5;
      if ( v7 >= 0 )
        break;
      v31 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
      {
LABEL_13:
        v33 = v31;
        goto LABEL_14;
      }
    }
    v14 = v2[3];
    v15 = v27;
    v33 = v31;
    v28 = v2[2];
    if ( v14 != 0 )
    {
      v32 = v2;
      do
      {
        while ( 1 )
        {
          v16 = v15;
          v17 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
          if ( v17 <= v15 )
            v16 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
          v18 = memcmp(s2, *(const void **)(v14 + 16), v16);
          if ( v18 == 0 )
            v18 = v15 - v17;
          if ( v18 >= 0 )
            break;
          v33 = (uint32_t *)v14;
          v14 = *(uint32_t *)(v14 + 8);
          if ( v14 == 0 )
            goto LABEL_31;
        }
        v14 = *(uint32_t *)(v14 + 12);
      }
      while ( v14 != 0 );
LABEL_31:
      v2 = v32;
    }
    v31 = v2;
    if ( v28 != 0 )
    {
      v19 = v28;
      do
      {
        v20 = *(uint32_t *)(*(uint32_t *)(v19 + 16) - 12);
        v21 = v20;
        if ( v15 <= v20 )
          v21 = v15;
        v22 = v20 - v15;
        v23 = memcmp(*(const void **)(v19 + 16), s2, v21);
        if ( v23 == 0 )
          v23 = v22;
        if ( v23 >= 0 )
        {
          v31 = (uint32_t *)v19;
          v19 = *(uint32_t *)(v19 + 8);
        }
        else
        {
          v19 = *(uint32_t *)(v19 + 12);
        }
      }
      while ( v19 != 0 );
    }
  }
LABEL_14:
  v30 = (char *)a1[5];
  if ( (uint32_t *)a1[3] == v31 && v34 == v33 )
  {
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
      (int)(uintptr_t)(a1),
      v35);
    a1[3] = (uint32_t)(uintptr_t)(v34);
    a1[2] = 0;
    a1[4] = (uint32_t)(uintptr_t)(v34);
    a1[5] = 0;
  }
  else if ( v33 == v31 )
  {
    return nullptr;
  }
  else
  {
    for ( i = (size_t)v31; ; i = (size_t)v9 )
    {
      v25 = i;
      v9 = (uint32_t *)sub_19048E0(i);
      v10 = (uint32_t *)sub_1904AE0(v25, v34);
      v11 = v10[4];
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        v26 = (size_t)v10;
        g4_std::string::Rep::M_destroy((void *)(v11 - 12));
        v10 = (uint32_t *)v26;
      }
      opDelete(v10);
      v12 = a1[5] - 1;
      a1[5] = v12;
      if ( v33 == v9 )
        break;
    }
    v30 -= v12;
  }
  return v30;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_erase  (binary VA: 0x14c7ca0)
// Original: std::_Rb_tree<gaia::BaseServiceManager::Credentials,std::pair<gaia::BaseServiceManager::Credentials const,gaia::Janus::JanusToken>,std::_Select1st<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Janus::JanusToken>>,std::less<gaia::BaseServiceManager::Credentials>,std::allocator<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Janus::JanusToken>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_erase(int a1, char *a2)
{
  char *v2;
  char *v3;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_erase(
        a1,
        *((void **)v2 + 3));
      v3 = *((char **)v2 + 2);
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
        (int)(uintptr_t)(v2 + 112),
        *((void ***)v2 + 30));
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
        (int)(uintptr_t)(v2 + 88),
        *((void ***)v2 + 24));
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
        (int)(uintptr_t)(v2 + 64),
        *((void ***)v2 + 18));
      g4_std::string::Destroy(v2 + 60);
      g4_std::string::Destroy(v2 + 56);
      gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)(v2 + 32));
      g4_std::string::Destroy(v2 + 28);
      g4_std::string::Destroy(v2 + 24);
      g4_std::string::Destroy(v2 + 20);
      opDelete(v2);
      if ( v3 == nullptr )
        break;
      v2 = v3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::deque_gaia_ServiceRequest_b3f9d1::push_back  (binary VA: 0x14c7d70)
// Original: std::deque<gaia::ServiceRequest *>::push_back
// ----------------------------------------------------------------------------
gaia::ServiceRequest::Self ** g4_std::deque_gaia_ServiceRequest_b3f9d1::push_back(std::deque<gaia::ServiceRequest::Self *> *self, gaia::ServiceRequest::Self **a2)
{
  gaia::ServiceRequest::Self **result;
  int v3;
  char *v4;
  int v5;
  unsigned int v6;
  gaia::ServiceRequest::Self **v7;
  gaia::ServiceRequest::Self ***v8;
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

  result = *((gaia::ServiceRequest::Self ***)self + 6);
  if ( result == (gaia::ServiceRequest::Self **)(*((uint32_t *)self + 8) - 4) )
  {
    v4 = *((char **)self + 9);
    v5 = *(uint32_t *)self;
    v6 = *((uint32_t *)self + 1);
    if ( v6 - ((int)(uintptr_t)(&v4[-*(uint32_t *)self]) >> 2) <= 1 )
    {
      v26 = *((int **)self + 5);
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
        src = *((void **)self + 5);
        v12 = (*((uint32_t *)self + 9) + 4 - (int)(uintptr_t)(src)) >> 2;
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
        opDelete(*(void **)self);
        *((uint32_t *)self + 1) = v9;
        *(uint32_t *)self = v24;
        v13 = v20;
      }
      *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v13);
      v14 = *v13;
      *((uint32_t *)self + 3) = *v13;
      *((uint32_t *)self + 4) = v14 + 512;
      v4 = (char *)&v13[v28 - 1];
      *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v4);
      v15 = *(uint32_t *)v4;
      *((uint32_t *)self + 7) = *(uint32_t *)v4;
      *((uint32_t *)self + 8) = v15 + 512;
    }
    *((uint32_t *)v4 + 1) = opNew(0x200u);
    v7 = *((gaia::ServiceRequest::Self ***)self + 6);
    if ( v7 != nullptr )
      *v7 = *a2;
    v8 = (gaia::ServiceRequest::Self ***)(*((uint32_t *)self + 9) + 4);
    *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v8);
    result = *v8;
    *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(*v8);
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(result);
    *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(result + 128);
  }
  else
  {
    v3 = 0;
    if ( result != nullptr )
    {
      *result = *a2;
      v3 = *((uint32_t *)self + 6);
    }
    *((uint32_t *)self + 6) = v3 + 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_string_Identity_s_127648::M_insert  (binary VA: 0x14c7fb0)
// Original: std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_string_Identity_s_127648::M_insert(int *a1, int a2, int a3, int a4, const void **a5)
{
  unsigned int v5;
  int v6;
  size_t v8;
  size_t n;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  size_t v14;

  LOBYTE(v5) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v8 = *((uint32_t *)*a5 - 3);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v14 = n;
    if ( n > v8 )
      n = *((uint32_t *)*a5 - 3);
    v10 = memcmp(*a5, *(const void **)(a4 + 16), n);
    v11 = v8 - v14;
    if ( v10 != 0 )
      v11 = v10;
    v5 = v11 >> 31;
  }
  v6 = opNew(0x14u);
  if ( v6 != -16 )
  {
    v12 = v6;
    g4_std::string::construct_copy(v6 + 16, a5);
    v6 = v12;
  }
  v13 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy  (binary VA: 0x14c80b0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,long>,std::_Select1st<std::pair<std::string const,long>>,std::less<std::string>,std::allocator<std::pair<std::string const,long>>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(int a1, uint32_t *a2, int a3)
{
  int v3;
  int *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v10;

  v10 = (uint32_t *)opNew(0x18u);
  if ( v10 != (uint32_t *)-16 )
  {
    g4_std::string::construct_copy(v10 + 4, a2 + 4);
    v10[5] = a2[5];
  }
  *v10 = *a2;
  v10[2] = 0;
  v10[3] = 0;
  v10[1] = a3;
  v3 = a2[3];
  if ( v3 != 0 )
    v10[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
               a1,
               (uint32_t *)(uintptr_t)(v3),
               v10));
  v4 = (int *)a2[2];
  v5 = v10;
  if ( v4 != nullptr )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)opNew(0x18u);
      if ( v6 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v6 + 4, v4 + 4);
        v6[5] = v4[5];
      }
      v7 = *v4;
      v6[2] = 0;
      *v6 = v7;
      v6[3] = 0;
      v5[2] = (uint32_t)(uintptr_t)(v6);
      v6[1] = (uint32_t)(uintptr_t)(v5);
      v8 = v4[3];
      if ( v8 != 0 )
        v6[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
                  a1,
                  (uint32_t *)(uintptr_t)(v8),
                  v6));
      v4 = (int *)v4[2];
      if ( v4 == nullptr )
        break;
      v5 = v6;
    }
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Deque_base_gaia_ServiceRequest_c68e26::M_initialize_map  (binary VA: 0x14c81c0)
// Original: std::_Deque_base<gaia::ServiceRequest *>::_M_initialize_map
// ----------------------------------------------------------------------------
int g4_std::Deque_base_gaia_ServiceRequest_c68e26::M_initialize_map(std::_Deque_base<gaia::ServiceRequest::Self *> *self, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  int v5;
  int *v6;
  unsigned int v7;
  int *v8;
  int v9;
  int v10;
  int result;
  int *v12;

  v2 = (a2 >> 7) + 1;
  v3 = (a2 >> 7) + 3;
  if ( v3 < 8 )
    v3 = 8;
  *((uint32_t *)self + 1) = v3;
  v4 = opNew(4 * v3);
  v5 = *((uint32_t *)self + 1);
  *(uint32_t *)self = v4;
  v6 = (int *)(v4 + 4 * ((v5 - v2) >> 1));
  v12 = v6;
  v7 = (unsigned int)(uintptr_t)(&v6[v2]);
  if ( (unsigned int)(uintptr_t)(v6) < v7 )
  {
    v8 = v6;
    do
      *v8++ = opNew(0x200u);
    while ( v7 > (unsigned int)(uintptr_t)(v8) );
  }
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v12);
  v9 = *v12;
  *((uint32_t *)self + 3) = *v12;
  *((uint32_t *)self + 4) = v9 + 512;
  *((uint32_t *)self + 9) = v7 - 4;
  v10 = *(uint32_t *)(v7 - 4);
  *((uint32_t *)self + 2) = v9;
  *((uint32_t *)self + 7) = v10;
  *((uint32_t *)self + 8) = v10 + 512;
  result = v10 + 4 * (a2 & 0x7F);
  *((uint32_t *)self + 6) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert  (binary VA: 0x14c8270)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,long>,std::_Select1st<std::pair<std::string const,long>>,std::less<std::string>,std::allocator<std::pair<std::string const,long>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert(int *a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5;
  int v6;
  size_t v8;
  size_t n;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  size_t v14;

  LOBYTE(v5) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v8 = *(uint32_t *)(*(uint32_t *)a5 - 12);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v14 = n;
    if ( n > v8 )
      n = *(uint32_t *)(*(uint32_t *)a5 - 12);
    v10 = memcmp(*(const void **)a5, *(const void **)(a4 + 16), n);
    v11 = v8 - v14;
    if ( v10 != 0 )
      v11 = v10;
    v5 = v11 >> 31;
  }
  v6 = opNew(0x18u);
  if ( v6 != -16 )
  {
    v12 = v6;
    g4_std::string::construct_copy(v6 + 16, a5);
    v6 = v12;
    *(uint32_t *)(v12 + 20) = *(uint32_t *)(a5 + 4);
  }
  v13 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert_unique  (binary VA: 0x14c8360)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,long>,std::_Select1st<std::pair<std::string const,long>>,std::less<std::string>,std::allocator<std::pair<std::string const,long>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert_unique(int a1, int a2, void **a3)
{
  int v3;
  size_t v4;
  int v5;
  uint32_t *v6;
  size_t v7;
  size_t n;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  typedef size_t _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef void *_g4_t_s1;
  typedef int _g4_t_v23[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_s1)) > _g4_s4 ? (24u + sizeof(_g4_t_s1)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);

  if ( *(uint32_t *)(a2 + 8) == 0 )
  {
    v11 = a2 + 4;
    goto LABEL_17;
  }
  v3 = *(uint32_t *)(a2 + 8);
  s1 = *a3;
  v4 = *((uint32_t *)*a3 - 3);
  while ( 1 )
  {
    v6 = *(uint32_t **)(v3 + 16);
    v7 = *(v6 - 3);
    n = v7;
    v19 = v3;
    if ( v4 <= v7 )
      n = v4;
    v18 = n;
    v9 = memcmp(s1, *(const void **)(v3 + 16), n);
    if ( v9 == 0 )
      v9 = v4 - v7;
    if ( v9 >= 0 )
      break;
    v5 = *(uint32_t *)(v19 + 8);
    v21 = 1;
    if ( v5 == 0 )
      goto LABEL_11;
LABEL_4:
    v3 = v5;
  }
  v5 = *(uint32_t *)(v19 + 12);
  v21 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = v19;
  v12 = v10;
  v13 = v18;
  v14 = v19;
  if ( v21 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( v11 == *(uint32_t *)(a2 + 12) )
  {
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert(
      v23,
      a2,
      0,
      v11,
      (int)(uintptr_t)(a3));
  }
  else
  {
    v14 = sub_19048F0(v11);
    s1 = *a3;
    v4 = *((uint32_t *)*a3 - 3);
    v12 = *(uint32_t **)(v14 + 16);
    v13 = v4;
    v7 = *(v12 - 3);
    if ( v7 <= v4 )
      v13 = *(v12 - 3);
LABEL_12:
    v20 = v14;
    v15 = v7 - v4;
    v16 = memcmp(v12, s1, v13);
    if ( v16 != 0 )
      v15 = v16;
    if ( v15 >= 0 )
    {
      *(uint32_t *)a1 = v20;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert(
      v23,
      a2,
      0,
      v11,
      (int)(uintptr_t)(a3));
  }
  *(uint32_t *)a1 = v23[0];
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert_unique  (binary VA: 0x14c84e0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,long>,std::_Select1st<std::pair<std::string const,long>>,std::less<std::string>,std::allocator<std::pair<std::string const,long>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert_unique(int *a1, int *a2, int a3, const void **a4)
{
  size_t v4;
  size_t n;
  size_t v6;
  int v7;
  int v8;
  const void **v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;
  size_t v18;
  int v19;
  int v20;
  int v21;
  size_t v22;
  size_t v23;
  size_t v24;
  int v25;
  int v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef void *_g4_t_v30;
  typedef const void **_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef void *_g4_t_s1;
  typedef int _g4_t_v34[5];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v27)) > _g4_s0 ? (12u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v28)) > _g4_s1 ? (16u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v29)) > _g4_s2 ? (36u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v30)) > _g4_s3 ? (44u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v31)) > _g4_s4 ? (44u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v32)) > _g4_s5 ? (44u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_s1)) > _g4_s6 ? (48u + sizeof(_g4_t_s1)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v34)) > _g4_s7 ? (56u + sizeof(_g4_t_v34)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);

  if ( (int *)a3 == a2 + 1 )
  {
    if ( a2[5] != 0 )
    {
      v21 = a2[4];
      v22 = *(uint32_t *)(*(uint32_t *)(v21 + 16) - 12);
      v23 = *((uint32_t *)*a4 - 3);
      v24 = v22;
      if ( v23 <= v22 )
        v24 = *((uint32_t *)*a4 - 3);
      v25 = v22 - v23;
      v26 = memcmp(*(const void **)(v21 + 16), *a4, v24);
      if ( v26 == 0 )
        v26 = v25;
      if ( v26 < 0 )
      {
        v27 = v21;
        v28 = (int)(uintptr_t)(a4);
        goto LABEL_36;
      }
    }
LABEL_33:
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert_unique(
      (int)(uintptr_t)(v34),
      (int)(uintptr_t)(a2),
      (void **)a4);
    *a1 = v34[0];
    return a1;
  }
  s1 = (void *)*a4;
  v4 = *((uint32_t *)*a4 - 3);
  n = v4;
  v6 = *(uint32_t *)(*(uint32_t *)(a3 + 16) - 12);
  v30 = *(void **)(a3 + 16);
  if ( v6 <= v4 )
    n = *(uint32_t *)(*(uint32_t *)(a3 + 16) - 12);
  v29 = n;
  v7 = memcmp(s1, *(const void **)(a3 + 16), n);
  if ( v7 == 0 )
    v7 = v4 - v6;
  if ( v7 < 0 )
  {
    v8 = a2[3];
    if ( v8 == a3 )
    {
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v8,
        a2[3],
        (int)(uintptr_t)(a4));
      return a1;
    }
    v9 = (const void **)sub_1904940(a3);
    v10 = v4;
    v11 = *((uint32_t *)v9[4] - 3);
    v31 = v9;
    if ( v11 <= v4 )
      v10 = *((uint32_t *)v9[4] - 3);
    v12 = v11 - v4;
    v13 = memcmp(v9[4], s1, v10);
    if ( v13 != 0 )
      v12 = v13;
    if ( v12 < 0 )
    {
      v28 = (int)(uintptr_t)(a4);
      if ( v31[3] != nullptr )
      {
        g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert(
          a1,
          (int)(uintptr_t)(a2),
          a3,
          a3,
          (int)(uintptr_t)(a4));
        return a1;
      }
      v27 = (int)(uintptr_t)(v31);
LABEL_36:
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        v27,
        v28);
      return a1;
    }
    goto LABEL_33;
  }
  v15 = v6 - v4;
  v16 = memcmp(v30, s1, v29);
  if ( v16 != 0 )
    v15 = v16;
  if ( v15 >= 0 )
  {
    *a1 = a3;
    return a1;
  }
  if ( a2[4] == a3 )
  {
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a2[4],
      (int)(uintptr_t)(a4));
    return a1;
  }
  v17 = sub_19048E0(a3);
  v18 = v4;
  v32 = *(void **)(*(uint32_t *)(v17 + 16) - 12);
  if ( (unsigned int)(uintptr_t)(v32) <= v4 )
    v18 = *(uint32_t *)(*(uint32_t *)(v17 + 16) - 12);
  v19 = memcmp(s1, *(const void **)(v17 + 16), v18);
  v20 = v4 - (uint32_t)(uintptr_t)(v32);
  if ( v19 != 0 )
    v20 = v19;
  if ( v20 >= 0 )
    goto LABEL_33;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v17,
      v17,
      (int)(uintptr_t)(a4));
  else
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      0,
      a3,
      (int)(uintptr_t)(a4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert  (binary VA: 0x14c91a0)
// Original: std::_Rb_tree<gaia::BaseServiceManager::Credentials,std::pair<gaia::BaseServiceManager::Credentials const,gaia::Janus::JanusToken>,std::_Select1st<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Janus::JanusToken>>,std::less<gaia::BaseServiceManager::Credentials>,std::allocator<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Janus::JanusToken>>>::_M_insert_
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *i;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *j;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *k;
  char v17;

  v17 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v17 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x88u);
  v6 = (uint32_t *)v5;
  if ( v5 != -16 )
  {
    *(uint32_t *)(v5 + 16) = *a5;
    g4_std::string::construct_copy(v5 + 20, a5 + 1);
    g4_std::string::construct_copy(v6 + 6, a5 + 2);
    g4_std::string::construct_copy(v6 + 7, a5 + 3);
    Json::Value::Construct((Json::Value::Self *)(v6 + 8), (const Json::Value::Self *)(a5 + 4));
    v6[12] = a5[8];
    v6[13] = a5[9];
    g4_std::string::construct_copy(v6 + 14, a5 + 10);
    g4_std::string::construct_copy(v6 + 15, a5 + 11);
    v6[17] = 0;
    v6[18] = 0;
    v6[21] = 0;
    v6[19] = (uint32_t)(uintptr_t)(v6 + 17);
    v6[20] = (uint32_t)(uintptr_t)(v6 + 17);
    v7 = (uint32_t *)a5[14];
    if ( v7 != nullptr )
    {
      v8 = g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
             (int)(uintptr_t)(v6 + 16),
             v7,
             (int)(uintptr_t)(v6 + 17));
      v6[18] = (uint32_t)(uintptr_t)(v8);
      for ( i = v8; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      v6[19] = (uint32_t)(uintptr_t)(i);
      while ( v8[3] != 0 )
        v8 = (uint32_t *)v8[3];
      v6[20] = (uint32_t)(uintptr_t)(v8);
      v6[21] = a5[17];
    }
    v6[23] = 0;
    v6[24] = 0;
    v6[27] = 0;
    v6[25] = (uint32_t)(uintptr_t)(v6 + 23);
    v6[26] = (uint32_t)(uintptr_t)(v6 + 23);
    v10 = (uint32_t *)a5[20];
    if ( v10 != nullptr )
    {
      v11 = g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
              (int)(uintptr_t)(v6 + 22),
              v10,
              (int)(uintptr_t)(v6 + 23));
      v6[24] = (uint32_t)(uintptr_t)(v11);
      for ( j = v11; j[2] != 0; j = (uint32_t *)j[2] )
        ;
      v6[25] = (uint32_t)(uintptr_t)(j);
      while ( v11[3] != 0 )
        v11 = (uint32_t *)v11[3];
      v6[26] = (uint32_t)(uintptr_t)(v11);
      v6[27] = a5[23];
    }
    v6[29] = 0;
    v6[30] = 0;
    v6[33] = 0;
    v6[31] = (uint32_t)(uintptr_t)(v6 + 29);
    v6[32] = (uint32_t)(uintptr_t)(v6 + 29);
    v13 = (uint32_t *)a5[26];
    if ( v13 != nullptr )
    {
      v14 = g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
              (int)(uintptr_t)(v6 + 28),
              v13,
              (int)(uintptr_t)(v6 + 29));
      v6[30] = (uint32_t)(uintptr_t)(v14);
      for ( k = v14; k[2] != 0; k = (uint32_t *)k[2] )
        ;
      v6[31] = (uint32_t)(uintptr_t)(k);
      while ( v14[3] != 0 )
        v14 = (uint32_t *)v14[3];
      v6[32] = (uint32_t)(uintptr_t)(v14);
      v6[33] = a5[29];
    }
  }
  sub_1904970(v17, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert_unique  (binary VA: 0x14c9410)
// Original: std::_Rb_tree<gaia::BaseServiceManager::Credentials,std::pair<gaia::BaseServiceManager::Credentials const,gaia::Janus::JanusToken>,std::_Select1st<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Janus::JanusToken>>,std::less<gaia::BaseServiceManager::Credentials>,std::allocator<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Janus::JanusToken>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  uint32_t v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v3[4] >= v4 )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)(v3),
      (uint32_t *)(a3));
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( v7[4] < *a3 )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert_unique  (binary VA: 0x14c94f0)
// Original: std::_Rb_tree<gaia::BaseServiceManager::Credentials,std::pair<gaia::BaseServiceManager::Credentials const,gaia::Janus::JanusToken>,std::_Select1st<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Janus::JanusToken>>,std::less<gaia::BaseServiceManager::Credentials>,std::allocator<std::pair<gaia::BaseServiceManager::Credentials const,gaia::Janus::JanusToken>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= *a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert(
        (uint32_t *)(a1),
        (int)(uintptr_t)(a2),
        v5,
        v5,
        (uint32_t *)(a4));
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert(
          (uint32_t *)(a1),
          (int)(uintptr_t)(a2),
          a3,
          a3,
          (uint32_t *)(a4));
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert(
        (uint32_t *)(a1),
        (int)(uintptr_t)(a2),
        0,
        v6,
        (uint32_t *)(v9));
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert_unique(
      (int)(uintptr_t)(v12),
      (int)(uintptr_t)(a2),
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert(
      (uint32_t *)(a1),
      (int)(uintptr_t)(a2),
      v8,
      v8,
      (uint32_t *)(a4));
  else
    g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert(
      (uint32_t *)(a1),
      (int)(uintptr_t)(a2),
      0,
      a3,
      (uint32_t *)(a4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_gaia_BaseServiceManager_2de1d3::opIndex  (binary VA: 0x14c9680)
// Original: std::map<gaia::BaseServiceManager::Credentials,gaia::Janus::JanusToken>::operator[]
// ----------------------------------------------------------------------------
int g4_std::map_gaia_BaseServiceManager_2de1d3::opIndex(uint32_t *a1, int *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  uint32_t *v5;
  int *i;
  uint32_t *v7;
  int *j;
  uint32_t *v9;
  int *k;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[29];
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[4];
  typedef uint8_t _g4_t_v16[4];
  typedef uint8_t _g4_t_v17[4];
  typedef uint8_t _g4_t_v18[16];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[4];
  typedef uint8_t _g4_t_v22[4];
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef void *_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef void *_g4_t_v31;
  typedef int *_g4_t_v32;
  typedef int *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef void *_g4_t_v37;
  typedef int *_g4_t_v38;
  typedef int *_g4_t_v39;
  typedef int _g4_t_v40;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v13)) > _g4_s1 ? (20u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (136u + sizeof(_g4_t_v14)) > _g4_s2 ? (136u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (140u + sizeof(_g4_t_v15)) > _g4_s3 ? (140u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (144u + sizeof(_g4_t_v16)) > _g4_s4 ? (144u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (148u + sizeof(_g4_t_v17)) > _g4_s5 ? (148u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (152u + sizeof(_g4_t_v18)) > _g4_s6 ? (152u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (168u + sizeof(_g4_t_v19)) > _g4_s7 ? (168u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (172u + sizeof(_g4_t_v20)) > _g4_s8 ? (172u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (176u + sizeof(_g4_t_v21)) > _g4_s9 ? (176u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (180u + sizeof(_g4_t_v22)) > _g4_s10 ? (180u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (184u + sizeof(_g4_t_v23)) > _g4_s11 ? (184u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (188u + sizeof(_g4_t_v24)) > _g4_s12 ? (188u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (192u + sizeof(_g4_t_v25)) > _g4_s13 ? (192u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (196u + sizeof(_g4_t_v26)) > _g4_s14 ? (196u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (200u + sizeof(_g4_t_v27)) > _g4_s15 ? (200u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (204u + sizeof(_g4_t_v28)) > _g4_s16 ? (204u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (208u + sizeof(_g4_t_v29)) > _g4_s17 ? (208u + sizeof(_g4_t_v29)) : _g4_s17,
    _g4_s19 = (212u + sizeof(_g4_t_v30)) > _g4_s18 ? (212u + sizeof(_g4_t_v30)) : _g4_s18,
    _g4_s20 = (216u + sizeof(_g4_t_v31)) > _g4_s19 ? (216u + sizeof(_g4_t_v31)) : _g4_s19,
    _g4_s21 = (220u + sizeof(_g4_t_v32)) > _g4_s20 ? (220u + sizeof(_g4_t_v32)) : _g4_s20,
    _g4_s22 = (224u + sizeof(_g4_t_v33)) > _g4_s21 ? (224u + sizeof(_g4_t_v33)) : _g4_s21,
    _g4_s23 = (228u + sizeof(_g4_t_v34)) > _g4_s22 ? (228u + sizeof(_g4_t_v34)) : _g4_s22,
    _g4_s24 = (232u + sizeof(_g4_t_v35)) > _g4_s23 ? (232u + sizeof(_g4_t_v35)) : _g4_s23,
    _g4_s25 = (236u + sizeof(_g4_t_v36)) > _g4_s24 ? (236u + sizeof(_g4_t_v36)) : _g4_s24,
    _g4_s26 = (240u + sizeof(_g4_t_v37)) > _g4_s25 ? (240u + sizeof(_g4_t_v37)) : _g4_s25,
    _g4_s27 = (244u + sizeof(_g4_t_v38)) > _g4_s26 ? (244u + sizeof(_g4_t_v38)) : _g4_s26,
    _g4_s28 = (248u + sizeof(_g4_t_v39)) > _g4_s27 ? (248u + sizeof(_g4_t_v39)) : _g4_s27,
    _g4_s29 = (252u + sizeof(_g4_t_v40)) > _g4_s28 ? (252u + sizeof(_g4_t_v40)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 136u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 140u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 144u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 148u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 152u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 168u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 172u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 176u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 180u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 184u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 188u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 192u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 196u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 200u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 204u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 208u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 212u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 216u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 220u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 224u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 228u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 232u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 236u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 240u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 244u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 248u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 252u);

  v2 = (uint32_t *)a1[2];
  if ( v2 == nullptr )
  {
    v4 = (int)(uintptr_t)(a1 + 1);
LABEL_8:
    memset(v13, 0, sizeof(v13));
    v13[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    v13[1] = (uint32_t)(uintptr_t)(&dword_213B814);
    v13[2] = (uint32_t)(uintptr_t)(&dword_213B814);
    gaia::BaseJSONServiceResponse::Construct((gaia::BaseJSONServiceResponse::Self *)&v13[3]);
    v13[9] = (uint32_t)(uintptr_t)(&dword_213B814);
    v13[10] = (uint32_t)(uintptr_t)(&dword_213B814);
    v13[14] = (uint32_t)(uintptr_t)(&v13[12]);
    v13[15] = (uint32_t)(uintptr_t)(&v13[12]);
    v13[20] = (uint32_t)(uintptr_t)(&v13[18]);
    v13[21] = (uint32_t)(uintptr_t)(&v13[18]);
    v13[26] = (uint32_t)(uintptr_t)(&v13[24]);
    v13[27] = (uint32_t)(uintptr_t)(&v13[24]);
    v14 = *a2;
    v13[12] = 0;
    v13[13] = 0;
    v13[16] = 0;
    v13[18] = 0;
    v13[19] = 0;
    v13[22] = 0;
    v13[24] = 0;
    v13[25] = 0;
    v13[28] = 0;
    g4_std::string::construct_copy(v15, v13);
    g4_std::string::construct_copy(v16, &v13[1]);
    g4_std::string::construct_copy(v17, &v13[2]);
    Json::Value::Construct((Json::Value::Self *)v18, (const Json::Value::Self *)&v13[3]);
    v19 = v13[7];
    v20 = v13[8];
    g4_std::string::construct_copy(v21, &v13[9]);
    g4_std::string::construct_copy(v22, &v13[10]);
    v24 = 0;
    v25 = nullptr;
    v28 = 0;
    v26 = &v24;
    v27 = &v24;
    if ( v13[13] != 0 )
    {
      v5 = g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
             (int)(uintptr_t)(&v23),
             (uint32_t *)v13[13],
             (int)(uintptr_t)(&v24));
      v25 = v5;
      for ( i = (int *)(v5); i[2] != 0; i = (int *)i[2] )
        ;
      v26 = i;
      while ( v5[3] != 0 )
        v5 = (uint32_t *)v5[3];
      v27 = (int *)(v5);
      v28 = v13[16];
    }
    v30 = 0;
    v31 = nullptr;
    v34 = 0;
    v32 = &v30;
    v33 = &v30;
    if ( v13[19] != 0 )
    {
      v7 = g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
             (int)(uintptr_t)(&v29),
             (uint32_t *)v13[19],
             (int)(uintptr_t)(&v30));
      v31 = v7;
      for ( j = (int *)(v7); j[2] != 0; j = (int *)j[2] )
        ;
      v32 = j;
      while ( v7[3] != 0 )
        v7 = (uint32_t *)v7[3];
      v33 = (int *)(v7);
      v34 = v13[22];
    }
    v36 = 0;
    v37 = nullptr;
    v40 = 0;
    v38 = &v36;
    v39 = &v36;
    if ( v13[25] != 0 )
    {
      v9 = g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
             (int)(uintptr_t)(&v35),
             (uint32_t *)v13[25],
             (int)(uintptr_t)(&v36));
      v37 = v9;
      for ( k = (int *)(v9); k[2] != 0; k = (int *)k[2] )
        ;
      v38 = k;
      while ( v9[3] != 0 )
        v9 = (uint32_t *)v9[3];
      v39 = (int *)(v9);
      v40 = v13[28];
    }
    g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_insert_unique(
      &v12,
      a1,
      v4,
      &v14);
    v4 = v12;
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
      (int)(uintptr_t)(&v35),
      (void **)v37);
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
      (int)(uintptr_t)(&v29),
      (void **)v31);
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
      (int)(uintptr_t)(&v23),
      (void **)v25);
    g4_std::string::Destroy(v22);
    g4_std::string::Destroy(v21);
    gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v18);
    g4_std::string::Destroy(v17);
    g4_std::string::Destroy(v16);
    g4_std::string::Destroy(v15);
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
      (int)(uintptr_t)(&v13[23]),
      (void **)v13[25]);
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
      (int)(uintptr_t)(&v13[17]),
      (void **)v13[19]);
    g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
      (int)(uintptr_t)(&v13[11]),
      (void **)v13[13]);
    g4_std::string::Destroy(&v13[10]);
    g4_std::string::Destroy(&v13[9]);
    gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)&v13[3]);
    g4_std::string::Destroy(&v13[2]);
    g4_std::string::Destroy(&v13[1]);
    g4_std::string::Destroy(v13);
    return v4 + 20;
  }
  v3 = *a2;
  v4 = (int)(uintptr_t)(a1 + 1);
  do
  {
    while ( v2[4] >= v3 )
    {
      v4 = (int)(uintptr_t)(v2);
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  if ( a1 + 1 == (uint32_t *)v4 || *(uint32_t *)(v4 + 16) > v3 )
    goto LABEL_8;
  return v4 + 20;
}

// ----------------------------------------------------------------------------
// Function: sub_14C9B80  (binary VA: 0x14c9b80)
// Original: sub_14C9B80
// ----------------------------------------------------------------------------
int sub_14C9B80()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (6u + sizeof(_g4_t_v8)) > _g4_s0 ? (6u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v11)) > _g4_s3 ? (16u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v12)) > _g4_s4 ? (20u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v13)) > _g4_s5 ? (24u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v14)) > _g4_s6 ? (28u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v15)) > _g4_s7 ? (32u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v16)) > _g4_s8 ? (36u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v17)) > _g4_s9 ? (40u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v18)) > _g4_s10 ? (44u + sizeof(_g4_t_v18)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 6u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  sub_1900D70(&unk_2119CA0);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119CA0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119CA4), "UNKNOWN", (int)(uintptr_t)(&v8));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119CA4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119CA8), "IMEI", (int)(uintptr_t)(&v8) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119CA8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2119CAC), "HDIDFV", (int)(uintptr_t)(&v9));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2119CAC, &unk_20D1280);
  gaia::Hermes::CreateTransportsVector((gaia::Hermes::Self *)&gaia::Hermes::s_transportsVector);
  __cxa_atexit((void (*)(void *))g4_std::vector_string_86c307::Destroy, &gaia::Hermes::s_transportsVector, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 2);
  sub_14AA000(gaia::Osiris::s_OsirisGroupModifyFieldTypeVector, 2u, v0, (int)(uintptr_t)(&v12));
  g4_std::string::Destroy(&v12);
  sub_1938F10(gaia::Osiris::s_OsirisGroupModifyFieldTypeVector[0], "inc");
  sub_1938F10(gaia::Osiris::s_OsirisGroupModifyFieldTypeVector[0] + 4, "dec");
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_string_86c307::Destroy,
    gaia::Osiris::s_OsirisGroupModifyFieldTypeVector,
    &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 3);
  sub_14AA000(gaia::Osiris::s_OsirisGroupTypesVector, 2u, v1, (int)(uintptr_t)(&v13));
  g4_std::string::Destroy(&v13);
  sub_1938F10(gaia::Osiris::s_OsirisGroupTypesVector[0], "group");
  sub_1938F10(gaia::Osiris::s_OsirisGroupTypesVector[0] + 4, "clan");
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_string_86c307::Destroy,
    gaia::Osiris::s_OsirisGroupTypesVector,
    &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v11));
  sub_14AA000(gaia::Osiris::s_OsirisConnectionsVector, 2u, v2, (int)(uintptr_t)(&v14));
  g4_std::string::Destroy(&v14);
  sub_1938F10(gaia::Osiris::s_OsirisConnectionsVector[0], "friend");
  sub_1938F10(gaia::Osiris::s_OsirisConnectionsVector[0] + 4, "neighbor");
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_string_86c307::Destroy,
    gaia::Osiris::s_OsirisConnectionsVector,
    &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 1);
  sub_14AA000(gaia::Osiris::s_OsirisRequestTypesVector, 4u, v3, (int)(uintptr_t)(&v15));
  g4_std::string::Destroy(&v15);
  sub_1938F10(gaia::Osiris::s_OsirisRequestTypesVector[0], "connection_approval");
  sub_1938F10(gaia::Osiris::s_OsirisRequestTypesVector[0] + 4, "membership_approval");
  sub_1938F10(gaia::Osiris::s_OsirisRequestTypesVector[0] + 8, "group_invitation");
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_string_86c307::Destroy,
    gaia::Osiris::s_OsirisRequestTypesVector,
    &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 2);
  sub_14AA000(gaia::Osiris::s_OsirisGroupMembershipVector, 4u, v4, (int)(uintptr_t)(&v16));
  g4_std::string::Destroy(&v16);
  sub_1938F10(gaia::Osiris::s_OsirisGroupMembershipVector[0], "open");
  sub_1938F10(gaia::Osiris::s_OsirisGroupMembershipVector[0] + 4, "owner_approved");
  sub_1938F10(gaia::Osiris::s_OsirisGroupMembershipVector[0] + 8, "private");
  sub_1938F10(gaia::Osiris::s_OsirisGroupMembershipVector[0] + 12, "member_approved");
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_string_86c307::Destroy,
    gaia::Osiris::s_OsirisGroupMembershipVector,
    &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 3);
  sub_14AA000(gaia::Osiris::s_OsirisWallPostObjectTypesVector, 4u, v5, (int)(uintptr_t)(&v17));
  g4_std::string::Destroy(&v17);
  sub_1938F10(gaia::Osiris::s_OsirisWallPostObjectTypesVector[0], "accounts");
  sub_1938F10(gaia::Osiris::s_OsirisWallPostObjectTypesVector[0] + 4, "groups");
  sub_1938F10(gaia::Osiris::s_OsirisWallPostObjectTypesVector[0] + 8, "events");
  sub_1938F10(gaia::Osiris::s_OsirisWallPostObjectTypesVector[0] + 12, "game_objects");
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_string_86c307::Destroy,
    gaia::Osiris::s_OsirisWallPostObjectTypesVector,
    &unk_20D1280);
  v18[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  sub_14AA000(gaia::Osiris::s_OsirisTournamentDeliveryTypeVector, 2u, v6, (int)(uintptr_t)(v18));
  g4_std::string::Destroy(v18);
  sub_1938F10(gaia::Osiris::s_OsirisTournamentDeliveryTypeVector[0], "hermes");
  sub_1938F10(gaia::Osiris::s_OsirisTournamentDeliveryTypeVector[0] + 4, "on_demand");
  __cxa_atexit(
    (void (*)(void *))g4_std::vector_string_86c307::Destroy,
    gaia::Osiris::s_OsirisTournamentDeliveryTypeVector,
    &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&gaia::Seshat::k_visibility_private), "private", (int)(uintptr_t)(&v9) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::Seshat::k_visibility_private, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&gaia::Seshat::k_visibility_public_read), "public", (int)(uintptr_t)(&v9) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::Seshat::k_visibility_public_read, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&gaia::Seshat::k_visibility_public_write), "public_write", (int)(uintptr_t)(&v9) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::Seshat::k_visibility_public_write, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&gaia::Seshat::k_visibility_restricted), "restricted", (int)(uintptr_t)(&v10));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::Seshat::k_visibility_restricted, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&gaia::Seshat::k_visibility_none), (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::Seshat::k_visibility_none, &unk_20D1280);
  gaia::Seshat::s_visibilityVector[0] = 0;
  gaia::Seshat::s_visibilityVector[1] = 0;
  gaia::Seshat::s_visibilityVector[2] = 0;
  g4_std::vector_string_86c307::push_back(gaia::Seshat::s_visibilityVector, (int)(uintptr_t)(&gaia::Seshat::k_visibility_private));
  g4_std::vector_string_86c307::push_back(gaia::Seshat::s_visibilityVector, (int)(uintptr_t)(&gaia::Seshat::k_visibility_public_read));
  g4_std::vector_string_86c307::push_back(gaia::Seshat::s_visibilityVector, (int)(uintptr_t)(&gaia::Seshat::k_visibility_public_write));
  g4_std::vector_string_86c307::push_back(gaia::Seshat::s_visibilityVector, (int)(uintptr_t)(&gaia::Seshat::k_visibility_restricted));
  g4_std::vector_string_86c307::push_back(gaia::Seshat::s_visibilityVector, (int)(uintptr_t)(&gaia::Seshat::k_visibility_none));
  return __cxa_atexit(
           (void (*)(void *))g4_std::vector_string_86c307::Destroy,
           gaia::Seshat::s_visibilityVector,
           &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_14CA240  (binary VA: 0x14ca240)
// Original: sub_14CA240
// ----------------------------------------------------------------------------
uint32_t * sub_14CA240(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2037DE0);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_14CA260  (binary VA: 0x14ca260)
// Original: sub_14CA260
// ----------------------------------------------------------------------------
void sub_14CA260(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_2037DE0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_14CA4F0  (binary VA: 0x14ca4f0)
// Original: sub_14CA4F0
// ----------------------------------------------------------------------------
void sub_14CA4F0(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  Json::Value::Self **v4;
  Json::Value::Self *v5;
  int v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  void *v9;
  void **v10;
  unsigned int v11;
  void *v12;
  Json::Value::Self **v13;
  Json::Value::Self *v14;
  int v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  void *v18;
  void **v19;
  unsigned int v20;
  void *v21;
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
  unsigned int v32;
  unsigned int v33;
  int v34;
  int v35;
  Json::Value::Self *v36;
  Json::Value::Self *v37;
  Json::Value::Self *v38;
  Json::Value::Self *v39;
  Json::Value::Self *v40;
  Json::Value::Self *v41;
  Json::Value::Self *v42;
  Json::Value::Self *v43;
  uint32_t *v44;

  v1 = a1;
  *a1 = (uint32_t)(uintptr_t)(&off_2037DF0);
  v2 = sub_B7A8A0();
  G4_VCALL<void>(v2, 92, 0);
  v3 = sub_B7A8A0();
  G4_VCALL<void>(v3, 88, 0);
  v36 = (Json::Value::Self *)a1[19];
  v40 = (Json::Value::Self *)a1[20];
  v32 = a1[22];
  v38 = (Json::Value::Self *)a1[15];
  v42 = (Json::Value::Self *)a1[17];
  v34 = a1[18];
  if ( v32 > v34 + 4 )
  {
    v4 = (Json::Value::Self **)(v34 + 4);
    do
    {
      v5 = *v4;
      v6 = (int)(uintptr_t)(*v4) + 512;
      do
      {
        v24 = v5;
        v5 = (Json::Value::Self *)((char *)v5 + 16);
        Json::Value::Destroy(v24);
      }
      while ( v5 != (Json::Value::Self *)v6 );
      ++v4;
    }
    while ( v32 > (unsigned int)(uintptr_t)(v4) );
    v1 = a1;
  }
  if ( v32 == v34 )
  {
    if ( v36 != v38 )
    {
      v22 = v38;
      do
      {
        v30 = v22;
        v22 = (Json::Value::Self *)((char *)v22 + 16);
        Json::Value::Destroy(v30);
      }
      while ( v36 != v22 );
    }
  }
  else
  {
    if ( v38 != v42 )
    {
      v7 = v38;
      do
      {
        v25 = v7;
        v7 = (Json::Value::Self *)((char *)v7 + 16);
        Json::Value::Destroy(v25);
      }
      while ( v42 != v7 );
    }
    if ( v36 != v40 )
    {
      v8 = v40;
      do
      {
        v26 = v8;
        v8 = (Json::Value::Self *)((char *)v8 + 16);
        Json::Value::Destroy(v26);
      }
      while ( v36 != v8 );
    }
  }
  v9 = (void *)v1[13];
  if ( v9 != nullptr )
  {
    v10 = (void **)v1[18];
    v11 = v1[22] + 4;
    if ( v11 > (unsigned int)(uintptr_t)(v10) )
    {
      do
      {
        v12 = *v10++;
        opDelete(v12);
      }
      while ( v11 > (unsigned int)(uintptr_t)(v10) );
      v9 = (void *)v1[13];
    }
    opDelete(v9);
  }
  v37 = (Json::Value::Self *)v1[9];
  v41 = (Json::Value::Self *)v1[10];
  v33 = v1[12];
  v39 = (Json::Value::Self *)v1[5];
  v43 = (Json::Value::Self *)v1[7];
  v35 = v1[8];
  if ( v33 > v35 + 4 )
  {
    v44 = v1;
    v13 = (Json::Value::Self **)(v35 + 4);
    do
    {
      v14 = *v13;
      v15 = (int)(uintptr_t)(*v13) + 512;
      do
      {
        v27 = v14;
        v14 = (Json::Value::Self *)((char *)v14 + 16);
        Json::Value::Destroy(v27);
      }
      while ( v14 != (Json::Value::Self *)v15 );
      ++v13;
    }
    while ( v33 > (unsigned int)(uintptr_t)(v13) );
    v1 = v44;
  }
  if ( v33 == v35 )
  {
    if ( v37 != v39 )
    {
      v23 = v39;
      do
      {
        v31 = v23;
        v23 = (Json::Value::Self *)((char *)v23 + 16);
        Json::Value::Destroy(v31);
      }
      while ( v37 != v23 );
    }
  }
  else
  {
    if ( v39 != v43 )
    {
      v16 = v39;
      do
      {
        v28 = v16;
        v16 = (Json::Value::Self *)((char *)v16 + 16);
        Json::Value::Destroy(v28);
      }
      while ( v43 != v16 );
    }
    if ( v37 != v41 )
    {
      v17 = v41;
      do
      {
        v29 = v17;
        v17 = (Json::Value::Self *)((char *)v17 + 16);
        Json::Value::Destroy(v29);
      }
      while ( v37 != v17 );
    }
  }
  v18 = (void *)v1[3];
  if ( v18 != nullptr )
  {
    v19 = (void **)v1[8];
    v20 = v1[12] + 4;
    if ( v20 > (unsigned int)(uintptr_t)(v19) )
    {
      do
      {
        v21 = *v19++;
        opDelete(v21);
      }
      while ( v20 > (unsigned int)(uintptr_t)(v19) );
      v18 = (void *)v1[3];
    }
    opDelete(v18);
  }
  glwebtools::Mutex::Destroy((glwebtools::Mutex::Self *)(v1 + 1));
  *v1 = (uint32_t)(uintptr_t)(&off_2037DE0);
  opDelete(v1);
}



// ============================================================================
// Address:   0x14ca790 (size: 660 bytes)
// Symbol:    sub_14CA790
// Demangled: sub_14CA790
// ============================================================================
int (**sub_14CA790(uint32_t *a1))(int)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  Json::Value::Self **v4;
  Json::Value::Self *v5;
  int v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  void *v9;
  void **v10;
  unsigned int v11;
  void *v12;
  Json::Value::Self **v13;
  Json::Value::Self *v14;
  int v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  void *v18;
  void **v19;
  unsigned int v20;
  void *v21;
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
  unsigned int v33;
  unsigned int v34;
  int v35;
  int v36;
  Json::Value::Self *v37;
  Json::Value::Self *v38;
  Json::Value::Self *v39;
  Json::Value::Self *v40;
  Json::Value::Self *v41;
  Json::Value::Self *v42;
  Json::Value::Self *v43;
  Json::Value::Self *v44;
  uint32_t *v45;

  v1 = a1;
  *a1 = (uint32_t)(uintptr_t)(&off_2037DF0);
  v2 = sub_B7A8A0();
  G4_VCALL<void>(v2, 92, 0);
  v3 = sub_B7A8A0();
  G4_VCALL<void>(v3, 88, 0);
  v37 = (Json::Value::Self *)a1[19];
  v41 = (Json::Value::Self *)a1[20];
  v33 = a1[22];
  v39 = (Json::Value::Self *)a1[15];
  v43 = (Json::Value::Self *)a1[17];
  v35 = a1[18];
  if ( v33 > v35 + 4 )
  {
    v4 = (Json::Value::Self **)(v35 + 4);
    do
    {
      v5 = *v4;
      v6 = (int)(uintptr_t)(*v4) + 512;
      do
      {
        v25 = v5;
        v5 = (Json::Value::Self *)((char *)v5 + 16);
        Json::Value::Destroy(v25);
      }
      while ( v5 != (Json::Value::Self *)v6 );
      ++v4;
    }
    while ( v33 > (unsigned int)(uintptr_t)(v4) );
    v1 = a1;
  }
  if ( v33 == v35 )
  {
    if ( v37 != v39 )
    {
      v23 = v39;
      do
      {
        v31 = v23;
        v23 = (Json::Value::Self *)((char *)v23 + 16);
        Json::Value::Destroy(v31);
      }
      while ( v37 != v23 );
    }
  }
  else
  {
    if ( v39 != v43 )
    {
      v7 = v39;
      do
      {
        v26 = v7;
        v7 = (Json::Value::Self *)((char *)v7 + 16);
        Json::Value::Destroy(v26);
      }
      while ( v43 != v7 );
    }
    if ( v37 != v41 )
    {
      v8 = v41;
      do
      {
        v27 = v8;
        v8 = (Json::Value::Self *)((char *)v8 + 16);
        Json::Value::Destroy(v27);
      }
      while ( v37 != v8 );
    }
  }
  v9 = (void *)v1[13];
  if ( v9 != nullptr )
  {
    v10 = (void **)v1[18];
    v11 = v1[22] + 4;
    if ( v11 > (unsigned int)(uintptr_t)(v10) )
    {
      do
      {
        v12 = *v10++;
        opDelete(v12);
      }
      while ( v11 > (unsigned int)(uintptr_t)(v10) );
      v9 = (void *)v1[13];
    }
    opDelete(v9);
  }
  v38 = (Json::Value::Self *)v1[9];
  v42 = (Json::Value::Self *)v1[10];
  v34 = v1[12];
  v40 = (Json::Value::Self *)v1[5];
  v44 = (Json::Value::Self *)v1[7];
  v36 = v1[8];
  if ( v34 > v36 + 4 )
  {
    v45 = v1;
    v13 = (Json::Value::Self **)(v36 + 4);
    do
    {
      v14 = *v13;
      v15 = (int)(uintptr_t)(*v13) + 512;
      do
      {
        v28 = v14;
        v14 = (Json::Value::Self *)((char *)v14 + 16);
        Json::Value::Destroy(v28);
      }
      while ( v14 != (Json::Value::Self *)v15 );
      ++v13;
    }
    while ( v34 > (unsigned int)(uintptr_t)(v13) );
    v1 = v45;
  }
  if ( v34 == v36 )
  {
    if ( v38 != v40 )
    {
      v24 = v40;
      do
      {
        v32 = v24;
        v24 = (Json::Value::Self *)((char *)v24 + 16);
        Json::Value::Destroy(v32);
      }
      while ( v38 != v24 );
    }
  }
  else
  {
    if ( v40 != v44 )
    {
      v16 = v40;
      do
      {
        v29 = v16;
        v16 = (Json::Value::Self *)((char *)v16 + 16);
        Json::Value::Destroy(v29);
      }
      while ( v44 != v16 );
    }
    if ( v38 != v42 )
    {
      v17 = v42;
      do
      {
        v30 = v17;
        v17 = (Json::Value::Self *)((char *)v17 + 16);
        Json::Value::Destroy(v30);
      }
      while ( v38 != v17 );
    }
  }
  v18 = (void *)v1[3];
  if ( v18 != nullptr )
  {
    v19 = (void **)v1[8];
    v20 = v1[12] + 4;
    if ( v20 > (unsigned int)(uintptr_t)(v19) )
    {
      do
      {
        v21 = *v19++;
        opDelete(v21);
      }
      while ( v20 > (unsigned int)(uintptr_t)(v19) );
      v18 = (void *)v1[3];
    }
    opDelete(v18);
  }
  glwebtools::Mutex::Destroy((glwebtools::Mutex::Self *)(v1 + 1));
  *v1 = (uint32_t)(uintptr_t)(&off_2037DE0);
  return (int (**)(int))(uintptr_t)(&off_2037DE0);
}
// ----------------------------------------------------------------------------
// Function: gid::GlobalDeviceIDManager::callbackFunct  (binary VA: 0x14cf870)
// Original: gid::GlobalDeviceIDManager::callbackFunct
// ----------------------------------------------------------------------------
int gid::GlobalDeviceIDManager::callbackFunct(gaia::GaiaRequest::Self *a1)
{
  int Caller;

  Caller = gaia::GaiaRequest::GetCaller(a1);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(Caller + 12));
  *(uint32_t *)(Caller + 8) = 3;
  *(uint8_t *)(Caller + 21) = 0;
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(Caller + 12));
}

// ----------------------------------------------------------------------------
// Function: Get_Model  (binary VA: 0x14d1b40)
// Original: Get_Model
// ----------------------------------------------------------------------------
int Get_Model(int a1)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(&v2));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Get_Country  (binary VA: 0x14d1b90)
// Original: Get_Country
// ----------------------------------------------------------------------------
int Get_Country(int a1)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(&v2));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Get_Language  (binary VA: 0x14d1be0)
// Original: Get_Language
// ----------------------------------------------------------------------------
int Get_Language(int a1)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(&v2));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: Get_Carrier  (binary VA: 0x14d1c30)
// Original: Get_Carrier
// ----------------------------------------------------------------------------
int Get_Carrier(int a1)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(&v2));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gid::GlobalDeviceIDManager::ShutDown  (binary VA: 0x14d1c80)
// Original: gid::GlobalDeviceIDManager::ShutDown
// ----------------------------------------------------------------------------
int gid::GlobalDeviceIDManager::ShutDown(gid::GlobalDeviceIDManager::Self *self)
{
  glwebtools::Mutex::Lock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12));
  while ( *((uint8_t *)self + 21) != 0 )
    gaia::GaiaRequest::Cancel((gid::GlobalDeviceIDManager::Self *)((char *)self + 24));
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12)));
}

// ----------------------------------------------------------------------------
// Function: gid::GlobalDeviceIDManager::IsInitialized  (binary VA: 0x14d1cf0)
// Original: gid::GlobalDeviceIDManager::IsInitialized
// ----------------------------------------------------------------------------
int gid::GlobalDeviceIDManager::IsInitialized(gid::GlobalDeviceIDManager::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12));
  v1 = *((uint8_t *)self + 4);
  glwebtools::Mutex::Unlock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gid::GlobalDeviceIDManager::GetSynchedDeviceIds  (binary VA: 0x14d1d40)
// Original: gid::GlobalDeviceIDManager::GetSynchedDeviceIds
// ----------------------------------------------------------------------------
int gid::GlobalDeviceIDManager::GetSynchedDeviceIds(gid::GlobalDeviceIDManager::Self *self, gid::DeviceIds::Self *a2)
{
  int v2;

  glwebtools::Mutex::Lock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12));
  g4_std::string::assign_str(a2, (char *)self + 92);
  g4_std::string::assign_str((char *)a2 + 4, (char *)self + 96);
  g4_std::string::assign_str((char *)a2 + 8, (char *)self + 100);
  g4_std::string::assign_str((char *)a2 + 12, (char *)self + 104);
  g4_std::string::assign_str((char *)a2 + 16, (char *)self + 108);
  g4_std::string::assign_str((char *)a2 + 20, (char *)self + 112);
  g4_std::string::assign_str((char *)a2 + 24, (char *)self + 116);
  g4_std::string::assign_str((char *)a2 + 28, (char *)self + 120);
  g4_std::string::assign_str((char *)a2 + 32, (char *)self + 124);
  g4_std::string::assign_str((char *)a2 + 36, (char *)self + 128);
  g4_std::string::assign_str((char *)a2 + 40, (char *)self + 132);
  g4_std::string::assign_str((char *)a2 + 44, (char *)self + 136);
  v2 = 700;
  g4_std::string::assign_str((char *)a2 + 48, (char *)self + 140);
  if ( *((uint32_t *)self + 2) == 5 )
    v2 = *((uint8_t *)self + 20) == 0 ? 0x2BC : 0;
  glwebtools::Mutex::Unlock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gid::GlobalDeviceIDManager::Construct  (binary VA: 0x14d20c0)
// Original: gid::GlobalDeviceIDManager::GlobalDeviceIDManager
// ----------------------------------------------------------------------------
gid::GlobalDeviceIDManager::Self * gid::GlobalDeviceIDManager::Construct(gid::GlobalDeviceIDManager::Self *self)
{
  float v1; // xmm0_4
  int v3[3];

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095E50);
  *((uint8_t *)self + 4) = 0;
  *((uint32_t *)self + 2) = 0;
  glwebtools::Mutex::Construct((gid::GlobalDeviceIDManager::Self *)((char *)self + 12));
  *((uint8_t *)self + 20) = 0;
  *((uint8_t *)self + 21) = 0;
  gaia::GaiaRequest::Construct((gid::GlobalDeviceIDManager::Self *)((char *)self + 24));
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 26) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 27) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 30) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 34) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 35) = (uint32_t)(uintptr_t)(&dword_213B814);
  v1 = (float)clock() * 0.000001f;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 1097859072;
  *((float *)self + 36) = v1;
  return (gid::GlobalDeviceIDManager::Self *)g4_std::string::construct_from_cstr((int)(uintptr_t)(self) + 156, "1.1.2", (int)(uintptr_t)(v3));
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::GetBundleId  (binary VA: 0x14d30a0)
// Original: SecureStorageManager::GetBundleId
// ----------------------------------------------------------------------------
void * SecureStorageManager::GetBundleId()
{
  return &unk_1B15112;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::SaveValueToUserDefaults  (binary VA: 0x14d30c0)
// Original: SecureStorageManager::SaveValueToUserDefaults
// ----------------------------------------------------------------------------
int SecureStorageManager::SaveValueToUserDefaults(SecureStorageManager::Self *self, const char *a2, const char *a3)
{
  int result;

  if ( a3 == nullptr )
    return 2;
  result = 1;
  if ( a2 == nullptr )
    return 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::GetValueFromUserDefaults  (binary VA: 0x14d30e0)
// Original: SecureStorageManager::GetValueFromUserDefaults
// ----------------------------------------------------------------------------
SecureStorageManager::Self * SecureStorageManager::GetValueFromUserDefaults(SecureStorageManager::Self *self, const char *a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(&v3));
  return self;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::DeleteValueFromUserDefaults  (binary VA: 0x14d3130)
// Original: SecureStorageManager::DeleteValueFromUserDefaults
// ----------------------------------------------------------------------------
int SecureStorageManager::DeleteValueFromUserDefaults(SecureStorageManager::Self *self, const char *a2)
{
  return a2 == nullptr ? 2 : 0;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::SaveValueToKeychain  (binary VA: 0x14d3140)
// Original: SecureStorageManager::SaveValueToKeychain
// ----------------------------------------------------------------------------
int SecureStorageManager::SaveValueToKeychain(SecureStorageManager::Self *self, DataSharingGangstar::Self *a2, DataSharingGangstar::Self *a3)
{
  if ( a3 == nullptr || a2 == nullptr )
    return 2;
  DataSharingGangstar_setSharedValue(a2, a3);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::SaveValueToSharedKeychain  (binary VA: 0x14d3180)
// Original: SecureStorageManager::SaveValueToSharedKeychain
// ----------------------------------------------------------------------------
int SecureStorageManager::SaveValueToSharedKeychain(SecureStorageManager::Self *self, DataSharingGangstar::Self *a2, DataSharingGangstar::Self *a3)
{
  if ( a3 != nullptr && a2 != nullptr )
    return SecureStorageManager::SaveValueToKeychain(self, a2, a3);
  else
    return 2;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::SaveValueToLocalKeychain  (binary VA: 0x14d31e0)
// Original: SecureStorageManager::SaveValueToLocalKeychain
// ----------------------------------------------------------------------------
int SecureStorageManager::SaveValueToLocalKeychain(SecureStorageManager::Self *self, DataSharingGangstar::Self *a2, DataSharingGangstar::Self *a3)
{
  if ( a3 != nullptr && a2 != nullptr )
    return SecureStorageManager::SaveValueToKeychain(self, a2, a3);
  else
    return 2;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::GetValueFromKeychain  (binary VA: 0x14d3240)
// Original: SecureStorageManager::GetValueFromKeychain
// ----------------------------------------------------------------------------
SecureStorageManager::Self * SecureStorageManager::GetValueFromKeychain(SecureStorageManager::Self *self, const char *a2, DataSharingGangstar::Self *a3)
{
  int v4[4];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(v4));
  if ( a3 != nullptr )
  {
    DataSharingGangstar_getSharedValue((DataSharingGangstar::Self *)((char *)v4 + 1), a3);
    g4_std::string::assign_str(self, (char *)v4 + 1);
    g4_std::string::Destroy((char *)v4 + 1);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::GetValueFromSharedKeychain  (binary VA: 0x14d32d0)
// Original: SecureStorageManager::GetValueFromSharedKeychain
// ----------------------------------------------------------------------------
SecureStorageManager::Self * SecureStorageManager::GetValueFromSharedKeychain(SecureStorageManager::Self *self, char *a2, DataSharingGangstar::Self *a3)
{
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  if ( a3 != nullptr )
    SecureStorageManager::GetValueFromKeychain(self, a2, a3);
  else
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(&v4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::GetValueFromLocalKeychain  (binary VA: 0x14d3350)
// Original: SecureStorageManager::GetValueFromLocalKeychain
// ----------------------------------------------------------------------------
SecureStorageManager::Self * SecureStorageManager::GetValueFromLocalKeychain(SecureStorageManager::Self *self, char *a2, DataSharingGangstar::Self *a3)
{
  void *v3;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (10u + sizeof(_g4_t_v5)) > _g4_s0 ? (10u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 10u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), (char *)&unk_1B15112, (int)(uintptr_t)(&v5));
  if ( a3 != nullptr )
    SecureStorageManager::GetValueFromKeychain(self, a2, a3);
  else
    g4_std::string::construct_copy(self, v6);
  v3 = (void *)(v6[0] - 12);
  if ( (uint32_t *)(v6[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::DeleteValueFromKeychain  (binary VA: 0x14d3410)
// Original: SecureStorageManager::DeleteValueFromKeychain
// ----------------------------------------------------------------------------
int SecureStorageManager::DeleteValueFromKeychain(SecureStorageManager::Self *self, DataSharingGangstar::Self *a2)
{
  int result;

  result = 2;
  if ( a2 != nullptr )
  {
    DataSharingGangstar_deleteSharedValue(a2);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::DeleteValueFromSharedKeychain  (binary VA: 0x14d3440)
// Original: SecureStorageManager::DeleteValueFromSharedKeychain
// ----------------------------------------------------------------------------
int SecureStorageManager::DeleteValueFromSharedKeychain(SecureStorageManager::Self *self, DataSharingGangstar::Self *a2)
{
  int result;

  result = 2;
  if ( a2 != nullptr )
    return SecureStorageManager::DeleteValueFromKeychain(self, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::DeleteValueFromLocalKeychain  (binary VA: 0x14d3480)
// Original: SecureStorageManager::DeleteValueFromLocalKeychain
// ----------------------------------------------------------------------------
int SecureStorageManager::DeleteValueFromLocalKeychain(SecureStorageManager::Self *self, DataSharingGangstar::Self *a2)
{
  int result;

  result = 2;
  if ( a2 != nullptr )
    return SecureStorageManager::DeleteValueFromKeychain(self, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gid::DeviceIds::CollectDeviceIdentifiers  (binary VA: 0x14d5f50)
// Original: gid::DeviceIds::CollectDeviceIdentifiers
// ----------------------------------------------------------------------------
int gid::DeviceIds::CollectDeviceIdentifiers(gid::DeviceIds::Self *self)
{
  typedef uint8_t _g4_t_v2[4];
  typedef uint8_t _g4_t_v3[4];
  typedef uint8_t _g4_t_v4[4];
  typedef uint8_t _g4_t_v5[4];
  typedef uint8_t _g4_t_v6[4];
  typedef uint8_t _g4_t_v7[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v4)) > _g4_s2 ? (16u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v5)) > _g4_s3 ? (20u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v6)) > _g4_s4 ? (24u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v7)) > _g4_s5 ? (28u + sizeof(_g4_t_v7)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  g4_std_compat::string_assign((int)(uintptr_t)(self), "android", 7u);
  Gaia_GetFirmware((int)(uintptr_t)(v2));
  g4_std::string::assign_str((char *)self + 4, v2);
  g4_std::string::Destroy(v2);
  Gaia_GetAndroidID((int)(uintptr_t)(v3));
  g4_std::string::assign_str((char *)self + 36, v3);
  g4_std::string::Destroy(v3);
  Gaia_GetSerial((int)(uintptr_t)(v4));
  g4_std::string::assign_str((char *)self + 32, v4);
  g4_std::string::Destroy(v4);
  identifiers::GetCurrentHDIDFV((identifiers::Self *)v5);
  g4_std::string::assign_str((char *)self + 16, v5);
  g4_std::string::Destroy(v5);
  Gaia_GetImei((int)(uintptr_t)(v6));
  g4_std::string::assign_str((char *)self + 28, v6);
  g4_std::string::Destroy(v6);
  Gaia_GetMacAddress((int)(uintptr_t)(v7));
  g4_std::string::assign_str((char *)self + 20, v7);
  return ((g4_std::string::Destroy(v7)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: gid::GlobalDeviceIDManager::Initialize  (binary VA: 0x14d6080)
// Original: gid::GlobalDeviceIDManager::Initialize
// ----------------------------------------------------------------------------
int gid::GlobalDeviceIDManager::Initialize(gid::GlobalDeviceIDManager::Self *self)
{
  glwebtools::Mutex::Lock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12));
  gid::DeviceIds::CollectDeviceIdentifiers((gid::DeviceIds::Self *)((gid::GlobalDeviceIDManager::Self *)((char *)self + 92)));
  *((uint8_t *)self + 4) = 1;
  glwebtools::Mutex::Unlock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::Construct  (binary VA: 0x14da290)
// Original: SecureStorageManager::SecureStorageManager
// ----------------------------------------------------------------------------
void SecureStorageManager::Construct(SecureStorageManager::Self *self)
{
  typedef int _g4_t_v1;
  typedef int _g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (2u + sizeof(_g4_t_v1)) > _g4_s0 ? (2u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v2)) > _g4_s1 ? (4u + sizeof(_g4_t_v2)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v3)) > _g4_s2 ? (8u + sizeof(_g4_t_v3)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v4)) > _g4_s3 ? (12u + sizeof(_g4_t_v4)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 2u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v4), ".com.gameloft.SingleSignonGames", (int)(uintptr_t)(&v1) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "A4QBZ46HAP", (int)(uintptr_t)(&v1));
  sub_134F3A0(&v2);
  g4_std::string::Destroy(&v3);
  g4_std::string::Destroy(v4);
  g4_std::string::Destroy(&v2);
}

// ----------------------------------------------------------------------------
// Function: SecureStorageManager::GetInstance  (binary VA: 0x14da330)
// Original: SecureStorageManager::GetInstance
// ----------------------------------------------------------------------------
SecureStorageManager::Self * SecureStorageManager::GetInstance()
{
  SecureStorageManager::Self *result;
  SecureStorageManager::Self *v1;

  result = (SecureStorageManager::Self *)SecureStorageManager::s_instance;
  if ( SecureStorageManager::s_instance == 0 )
  {
    v1 = (SecureStorageManager::Self *)opNew(8u);
    SecureStorageManager::Construct(v1);
    SecureStorageManager::s_instance = (uintptr_t)(uintptr_t)(v1);
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: LoginManager::SetAppId  (binary VA: 0x14da4a0)
// Original: LoginManager::SetAppId
// ----------------------------------------------------------------------------
int LoginManager::SetAppId(LoginManager::Self *self, char *a2)
{
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef uint8_t _g4_t_v6[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (2u + sizeof(_g4_t_v3)) > _g4_s0 ? (2u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v5)) > _g4_s2 ? (8u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v6)) > _g4_s3 ? (12u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 2u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), ".com.gameloft.SingleSignonGames", (int)(uintptr_t)(&v3) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), a2, (int)(uintptr_t)(&v3));
  sub_134F3A0(v6);
  g4_std::string::assign_str(self, v6);
  g4_std::string::Destroy(v6);
  g4_std::string::Destroy(&v4);
  return ((g4_std::string::Destroy(&v5)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: LoginManager::Construct  (binary VA: 0x14da550)
// Original: LoginManager::LoginManager
// ----------------------------------------------------------------------------
void LoginManager::Construct(LoginManager::Self *self)
{
  typedef int _g4_t_v1;
  typedef int _g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (2u + sizeof(_g4_t_v1)) > _g4_s0 ? (2u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v2)) > _g4_s1 ? (4u + sizeof(_g4_t_v2)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v3)) > _g4_s2 ? (8u + sizeof(_g4_t_v3)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v4)) > _g4_s3 ? (12u + sizeof(_g4_t_v4)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 2u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v4), ".com.gameloft.SingleSignonGames", (int)(uintptr_t)(&v1) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "A4QBZ46HAP", (int)(uintptr_t)(&v1));
  sub_134F3A0((int)(uintptr_t)(&v2), (int)(uintptr_t)(&v3), (int)(uintptr_t)(v4));
  g4_std::string::assign_str(self, &v2);
  g4_std::string::Destroy(&v2);
  g4_std::string::Destroy(&v3);
  g4_std::string::Destroy(v4);
}

// ----------------------------------------------------------------------------
// Function: LoginManager::GetInstance  (binary VA: 0x14da640)
// Original: LoginManager::GetInstance
// ----------------------------------------------------------------------------
LoginManager::Self * LoginManager::GetInstance()
{
  LoginManager::Self *result;
  LoginManager::Self *v1;

  result = (LoginManager::Self *)LoginManager::s_instance;
  if ( LoginManager::s_instance == 0 )
  {
    v1 = (LoginManager::Self *)opNew(0x1Cu);
    LoginManager::Construct(v1);
    LoginManager::s_instance = (uintptr_t)(uintptr_t)(v1);
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gid::GlobalDeviceIDManager::Update  (binary VA: 0x14db360)
// Original: gid::GlobalDeviceIDManager::Update
// ----------------------------------------------------------------------------
int gid::GlobalDeviceIDManager::Update(gid::GlobalDeviceIDManager::Self *self)
{
  float v1; // xmm0_4
  int v2;
  float v3; // xmm1_4
  float v4; // xmm1_4
  Json::Value::Self *v6;
  Json::Value::Self *v7;
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
  int Instance;
  int ResponseCode;
  char v21;
  float v22; // xmm0_4
  int v23;
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[16];
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
  typedef uint8_t _g4_t_v37[80];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v25)) > _g4_s1 ? (28u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v26)) > _g4_s2 ? (44u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v27)) > _g4_s3 ? (60u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v28)) > _g4_s4 ? (76u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (92u + sizeof(_g4_t_v29)) > _g4_s5 ? (92u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (108u + sizeof(_g4_t_v30)) > _g4_s6 ? (108u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (124u + sizeof(_g4_t_v31)) > _g4_s7 ? (124u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (140u + sizeof(_g4_t_v32)) > _g4_s8 ? (140u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (156u + sizeof(_g4_t_v33)) > _g4_s9 ? (156u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (172u + sizeof(_g4_t_v34)) > _g4_s10 ? (172u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (188u + sizeof(_g4_t_v35)) > _g4_s11 ? (188u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (204u + sizeof(_g4_t_v36)) > _g4_s12 ? (204u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (220u + sizeof(_g4_t_v37)) > _g4_s13 ? (220u + sizeof(_g4_t_v37)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 108u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 124u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 140u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 156u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 172u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 188u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 204u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 220u);

  glwebtools::Mutex::Lock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12));
  if ( *((uint8_t *)self + 4) != 0 )
  {
    v1 = (float)clock() * 0.000001f;
    v2 = *((uint32_t *)self + 2);
    v3 = *((float *)self + 36);
    *((float *)self + 36) = v1;
    switch ( v2 )
    {
      case 0:
        goto LABEL_19;
      case 1:
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v37);
        gaia::GaiaRequest::opAssign((gid::GlobalDeviceIDManager::Self *)((char *)self + 24), (const gaia::GaiaRequest::Self *)v37);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v37);
        Json::Value::Construct((int)(uintptr_t)(v24), (uint32_t *)self + 39);
        v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A290);
        Json::Value::opAssign(v6, (const Json::Value::Self *)v24);
        Json::Value::Destroy((Json::Value::Self *)v24);
        Json::Value::Construct((int)(uintptr_t)(v25), (uint32_t *)self + 23);
        v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A294);
        Json::Value::opAssign(v7, (const Json::Value::Self *)v25);
        Json::Value::Destroy((Json::Value::Self *)v25);
        Json::Value::Construct((int)(uintptr_t)(v26), (uint32_t *)self + 24);
        v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A298);
        Json::Value::opAssign(v8, (const Json::Value::Self *)v26);
        Json::Value::Destroy((Json::Value::Self *)v26);
        Json::Value::Construct((int)(uintptr_t)(v27), (uint32_t *)self + 25);
        v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A29C);
        Json::Value::opAssign(v9, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        Json::Value::Construct((int)(uintptr_t)(v28), (uint32_t *)self + 26);
        v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A2A0);
        Json::Value::opAssign(v10, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((int)(uintptr_t)(v29), (uint32_t *)self + 27);
        v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A2A4);
        Json::Value::opAssign(v11, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        Json::Value::Construct((int)(uintptr_t)(v30), (uint32_t *)self + 28);
        v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A2A8);
        Json::Value::opAssign(v12, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((int)(uintptr_t)(v31), (uint32_t *)self + 29);
        v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A2AC);
        Json::Value::opAssign(v13, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((int)(uintptr_t)(v32), (uint32_t *)self + 30);
        v14 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A2B0);
        Json::Value::opAssign(v14, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((int)(uintptr_t)(v33), (uint32_t *)self + 31);
        v15 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A2B4);
        Json::Value::opAssign(v15, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        Json::Value::Construct((int)(uintptr_t)(v34), (uint32_t *)self + 32);
        v16 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A2B8);
        Json::Value::opAssign(v16, (const Json::Value::Self *)v34);
        Json::Value::Destroy((Json::Value::Self *)v34);
        Json::Value::Construct((int)(uintptr_t)(v35), (uint32_t *)self + 33);
        v17 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A2BC);
        Json::Value::opAssign(v17, (const Json::Value::Self *)v35);
        Json::Value::Destroy((Json::Value::Self *)v35);
        Json::Value::Construct((int)(uintptr_t)(v36), (uint32_t *)self + 35);
        v18 = (Json::Value::Self *)gaia::GaiaRequest::opIndex((int)(uintptr_t)(self) + 24, &dword_211A2C0);
        Json::Value::opAssign(v18, (const Json::Value::Self *)v36);
        Json::Value::Destroy((Json::Value::Self *)v36);
        *((uint8_t *)self + 21) = 1;
        gaia::GaiaRequest::SetRunAsynchronous(
          (gid::GlobalDeviceIDManager::Self *)((char *)self + 24),
          (void (__high *)(gaia::GaiaRequest::Self))gid::GlobalDeviceIDManager::callbackFunct,
          self);
        Instance = gaia::Gaia::GetInstance();
        if ( gaia::Gaia_GlobalDeviceID::AssignGlobalId(
               *(gaia::Gaia_GlobalDeviceID::Self **)(Instance + 592),
               (gid::GlobalDeviceIDManager::Self *)((char *)self + 24)) != 0 )
        {
          v23 = *((uint32_t *)self + 38);
          *((uint32_t *)self + 2) = 4;
          *((uint32_t *)self + 37) = v23;
        }
        else
        {
          *((uint32_t *)self + 2) = 2;
        }
        break;
      case 3:
        ResponseCode = gaia::GaiaRequest::GetResponseCode((gid::GlobalDeviceIDManager::Self *)((char *)self + 24));
        v21 = 0;
        if ( ResponseCode == 0 )
        {
          ResponseCode = gaia::GaiaRequest::GetResponse((int)(uintptr_t)(self) + 24, (int)(uintptr_t)(self) + 136);
          *((uint8_t *)self + 20) = 1;
          *((uint32_t *)self + 2) = 5;
          v21 = 1;
        }
        if ( (unsigned int)(ResponseCode - 400) <= 0x63 )
        {
          *((uint32_t *)self + 2) = 5;
          v21 = 1;
        }
        if ( ResponseCode == -303 || ResponseCode == 606 )
        {
          *((uint8_t *)self + 20) = 0;
          *((uint32_t *)self + 2) = 5;
          v21 = 1;
        }
        if ( (unsigned int)(ResponseCode - 500) > 0x63 )
        {
          if ( v21 == 0 )
          {
            *((uint32_t *)self + 37) = 1123024896;
            *((uint32_t *)self + 2) = 4;
          }
        }
        else
        {
          v22 = *((float *)self + 38);
          *((uint32_t *)self + 2) = 4;
          *((float *)self + 37) = v22;
          *((float *)self + 38) = fminf(v22 + 5.0, 300.0);
        }
        break;
      case 4:
        v4 = *((float *)self + 37) - (float)(v1 - v3);
        *((float *)self + 37) = v4;
        if ( v4 > 0.0 )
          return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12)));
LABEL_19:
        *((uint32_t *)self + 2) = 1;
        return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12)));
      default:
        return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12)));
    }
  }
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gid::GlobalDeviceIDManager::Self *)((char *)self + 12)));
}

// ----------------------------------------------------------------------------
// Function: gid::GlobalDeviceIDManager::Destroy  (binary VA: 0x14db960)
// Original: gid::GlobalDeviceIDManager::~GlobalDeviceIDManager
// ----------------------------------------------------------------------------
void gid::GlobalDeviceIDManager::Destroy(gid::GlobalDeviceIDManager::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095E50);
  gid::GlobalDeviceIDManager::ShutDown(self);
  g4_std::string::Destroy((char *)self + 156);
  g4_std::string::Destroy((char *)self + 140);
  g4_std::string::Destroy((char *)self + 136);
  g4_std::string::Destroy((char *)self + 132);
  g4_std::string::Destroy((char *)self + 128);
  g4_std::string::Destroy((char *)self + 124);
  g4_std::string::Destroy((char *)self + 120);
  g4_std::string::Destroy((char *)self + 116);
  g4_std::string::Destroy((char *)self + 112);
  g4_std::string::Destroy((char *)self + 108);
  g4_std::string::Destroy((char *)self + 104);
  g4_std::string::Destroy((char *)self + 100);
  g4_std::string::Destroy((char *)self + 96);
  g4_std::string::Destroy((char *)self + 92);
  gaia::GaiaRequest::Destroy((gid::GlobalDeviceIDManager::Self *)((char *)self + 24));
  glwebtools::Mutex::Destroy((gid::GlobalDeviceIDManager::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095FC8);
}

// ----------------------------------------------------------------------------
// Function: gid::GlobalDeviceIDManager::Destroy_ea14dba60  (binary VA: 0x14dba60)
// Original: gid::GlobalDeviceIDManager::~GlobalDeviceIDManager
// ----------------------------------------------------------------------------
void gid::GlobalDeviceIDManager::Destroy_ea14dba60(gid::GlobalDeviceIDManager::Self *self)
{
  gid::GlobalDeviceIDManager::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: LoginManager::DeleteCredentials  (binary VA: 0x14deee0)
// Original: LoginManager::DeleteCredentials
// ----------------------------------------------------------------------------
int LoginManager::DeleteCredentials(int a1, int a2)
{
  int *v2;
  int *v3;
  typedef char *_g4_t_v5;
  typedef char *_g4_t_v6;
  typedef uint8_t *_g4_t_v7;
  typedef uint8_t *_g4_t_v8;
  typedef int *_g4_t_v9;
  typedef int *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef DataSharing::Self *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef DataSharing::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int (**_g4_t_v22)(int);
  typedef uint32_t _g4_t_v23[3];
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[4];
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef uint32_t _g4_t_v31[29];
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v8)) > _g4_s3 ? (8u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v9)) > _g4_s4 ? (16u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v10)) > _g4_s5 ? (16u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (46u + sizeof(_g4_t_v11)) > _g4_s6 ? (46u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (51u + sizeof(_g4_t_v12)) > _g4_s7 ? (51u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v13)) > _g4_s8 ? (56u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v14)) > _g4_s9 ? (60u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v15)) > _g4_s10 ? (64u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v16)) > _g4_s11 ? (68u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v17)) > _g4_s12 ? (72u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v18)) > _g4_s13 ? (76u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v19)) > _g4_s14 ? (80u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v20)) > _g4_s15 ? (84u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v21)) > _g4_s16 ? (88u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v22)) > _g4_s17 ? (92u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v23)) > _g4_s18 ? (96u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v24)) > _g4_s19 ? (108u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v25)) > _g4_s20 ? (112u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v26)) > _g4_s21 ? (116u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v27)) > _g4_s22 ? (120u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v28)) > _g4_s23 ? (124u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v29)) > _g4_s24 ? (128u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v30)) > _g4_s25 ? (132u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v31)) > _g4_s26 ? (136u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (252u + sizeof(_g4_t_v32)) > _g4_s27 ? (252u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (253u + sizeof(_g4_t_v33)) > _g4_s28 ? (253u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (256u + sizeof(_g4_t_v34)) > _g4_s29 ? (256u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (260u + sizeof(_g4_t_v35)) > _g4_s30 ? (260u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (264u + sizeof(_g4_t_v36)) > _g4_s31 ? (264u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (268u + sizeof(_g4_t_v37)) > _g4_s32 ? (268u + sizeof(_g4_t_v37)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 46u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 51u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 108u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 112u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 116u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 120u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 132u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 136u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 252u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 253u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 256u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 260u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 264u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 268u);

  sub_1900810(v31);
  v31[28] = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v31[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v37 = 0;
  v22 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v23[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0((char *)&v23[-1] + (uint32_t)(uintptr_t)(*(v22 - 3)), 0);
  v23[1] = 0;
  v23[2] = 0;
  v24 = 0;
  v25 = nullptr;
  v26 = 0;
  v27 = 0;
  v22 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v31[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v23[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v28);
  v29 = 16;
  v23[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v30 = &dword_213B814;
  sub_19119D0(v31, v23);
  g4_std::ostream::op_shl_int(&v22, a2);
  v13 = &dword_213B814;
  if ( v26 != 0 )
  {
    if ( v26 > (unsigned int)v24 )
    {
      v7 = (uint8_t *)v26;
      v5 = v25;
      v2 = (int *)&v19;
    }
    else
    {
      v7 = (uint8_t *)v24;
      v5 = v25;
      v2 = &v18;
    }
    v9 = v2;
    sub_11A9950(v2, v5, v7);
    g4_std::string::assign_str(&v13, v9);
    g4_std::string::Destroy(v9);
  }
  else
  {
    g4_std::string::assign_str(&v13, &v30);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12) + 1, "user-", (int)(uintptr_t)(&v11));
  sub_134F3A0((int)(uintptr_t)(&v14), (int)(uintptr_t)(&v12) + 1, (int)(uintptr_t)(&v13));
  DataSharing_deleteSharedValue(v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy((char *)&v12 + 1);
  g4_std::string::Destroy(&v13);
  v16 = &dword_213B814;
  if ( v26 != 0 )
  {
    if ( v26 <= (unsigned int)v24 )
    {
      v8 = (uint8_t *)v24;
      v6 = v25;
      v3 = (int *)&v20;
    }
    else
    {
      v8 = (uint8_t *)v26;
      v6 = v25;
      v3 = &v21;
    }
    v10 = v3;
    sub_11A9950(v3, v6, v8);
    g4_std::string::assign_str(&v16, v10);
    g4_std::string::Destroy(v10);
  }
  else
  {
    g4_std::string::assign_str(&v16, &v30);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "pass-", (int)(uintptr_t)(&v11) + 1);
  sub_134F3A0((int)(uintptr_t)(&v17), (int)(uintptr_t)(&v15), (int)(uintptr_t)(&v16));
  DataSharing_deleteSharedValue(v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v16);
  v22 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v31[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v23[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  g4_std::string::Destroy(&v30);
  v23[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v28);
  v22 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v23[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  v31[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(v31);
}

// ----------------------------------------------------------------------------
// Function: LoginManager::GetSessionCredentials  (binary VA: 0x14e6020)
// Original: LoginManager::GetSessionCredentials
// ----------------------------------------------------------------------------
uint32_t * LoginManager::GetSessionCredentials(int a1, int a2)
{
  uint32_t *v2;
  uint32_t *result;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  typedef uint32_t *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[2];
  typedef char _g4_t_v12[4];
  typedef uint8_t _g4_t_v13[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v9)) > _g4_s1 ? (26u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v12)) > _g4_s4 ? (40u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v13)) > _g4_s5 ? (44u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 26u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  v2 = *(uint32_t **)(a1 + 12);
  result = nullptr;
  if ( v2 != nullptr )
  {
    v4 = *(uint32_t **)(a1 + 12);
    v5 = (uint32_t *)(a1 + 8);
    v6 = (uint32_t *)(a1 + 8);
    do
    {
      while ( v4[4] >= a2 )
      {
        v6 = v4;
        v4 = (uint32_t *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_6;
      }
      v4 = (uint32_t *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_6:
    result = nullptr;
    if ( v5 != v6 )
    {
      result = v4;
      if ( v6[4] <= a2 )
      {
        v7 = (uint32_t *)(a1 + 8);
        do
        {
          while ( a2 <= v2[4] )
          {
            v7 = v2;
            v2 = (uint32_t *)v2[2];
            if ( v2 == nullptr )
              goto LABEL_12;
          }
          v2 = (uint32_t *)v2[3];
        }
        while ( v2 != nullptr );
LABEL_12:
        if ( v5 == v7 || a2 < v7[4] )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v9));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), (char *)&unk_1B15112, (int)(uintptr_t)(&v9) + 1);
          v11[1] = a2;
          g4_std::string::construct_copy(v12, &v10);
          g4_std::string::construct_copy(v13, v11);
          g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert_unique(&v8);
          v7 = v8;
          g4_std::string::Destroy(v13);
          g4_std::string::Destroy(v12);
          g4_std::string::Destroy(v11);
          g4_std::string::Destroy(&v10);
        }
        return v7 + 5;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: LoginManager::GetCredentials  (binary VA: 0x14e6180)
// Original: LoginManager::GetCredentials
// ----------------------------------------------------------------------------
int LoginManager::GetCredentials(int a1, int a2, int a3, int a4)
{
  uint32_t *SessionCredentials;
  uint32_t *v5;
  int *v7;
  int *v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef DataSharing::Self *_g4_t_v12;
  typedef uint8_t _g4_t_v13[4];
  typedef int _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef DataSharing::Self *_g4_t_v16;
  typedef uint8_t _g4_t_v17[4];
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int (**_g4_t_v22)(int);
  typedef uint32_t _g4_t_v23[3];
  typedef int _g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[4];
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef uint32_t _g4_t_v31[29];
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (6u + sizeof(_g4_t_v9)) > _g4_s0 ? (6u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (11u + sizeof(_g4_t_v10)) > _g4_s1 ? (11u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v16)) > _g4_s7 ? (36u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v17)) > _g4_s8 ? (40u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v18)) > _g4_s9 ? (44u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v19)) > _g4_s10 ? (48u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v20)) > _g4_s11 ? (52u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v21)) > _g4_s12 ? (56u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v22)) > _g4_s13 ? (60u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v23)) > _g4_s14 ? (64u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v24)) > _g4_s15 ? (76u + sizeof(_g4_t_v24)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v25)) > _g4_s16 ? (80u + sizeof(_g4_t_v25)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v26)) > _g4_s17 ? (84u + sizeof(_g4_t_v26)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v27)) > _g4_s18 ? (88u + sizeof(_g4_t_v27)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v28)) > _g4_s19 ? (92u + sizeof(_g4_t_v28)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v29)) > _g4_s20 ? (96u + sizeof(_g4_t_v29)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v30)) > _g4_s21 ? (100u + sizeof(_g4_t_v30)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v31)) > _g4_s22 ? (104u + sizeof(_g4_t_v31)) : _g4_s22,
    _g4_s24 = (220u + sizeof(_g4_t_v32)) > _g4_s23 ? (220u + sizeof(_g4_t_v32)) : _g4_s23,
    _g4_s25 = (221u + sizeof(_g4_t_v33)) > _g4_s24 ? (221u + sizeof(_g4_t_v33)) : _g4_s24,
    _g4_s26 = (224u + sizeof(_g4_t_v34)) > _g4_s25 ? (224u + sizeof(_g4_t_v34)) : _g4_s25,
    _g4_s27 = (228u + sizeof(_g4_t_v35)) > _g4_s26 ? (228u + sizeof(_g4_t_v35)) : _g4_s26,
    _g4_s28 = (232u + sizeof(_g4_t_v36)) > _g4_s27 ? (232u + sizeof(_g4_t_v36)) : _g4_s27,
    _g4_s29 = (236u + sizeof(_g4_t_v37)) > _g4_s28 ? (236u + sizeof(_g4_t_v37)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 6u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 11u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 104u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 220u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 221u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 224u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 228u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 232u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 236u);

  SessionCredentials = LoginManager::GetSessionCredentials(a1, a2);
  if ( SessionCredentials != nullptr )
  {
    v5 = SessionCredentials + 1;
    g4_std::string::assign_str(a3, SessionCredentials);
    g4_std::string::assign_str(a4, v5);
  }
  else
  {
    sub_1900810(v31);
    v31[28] = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v31[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v37 = 0;
    v22 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(uint32_t *)((char *)&v23[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
    sub_19119D0((char *)&v23[-1] + (uint32_t)(uintptr_t)(*(v22 - 3)), 0);
    v23[1] = 0;
    v23[2] = 0;
    v24 = 0;
    v25 = nullptr;
    v26 = 0;
    v27 = 0;
    v22 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v31[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v23[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v28);
    v29 = 16;
    v23[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v30 = &dword_213B814;
    sub_19119D0(v31, v23);
    g4_std::ostream::op_shl_int(&v22, a2);
    v11 = &dword_213B814;
    if ( v26 != 0 )
    {
      if ( v26 > (unsigned int)v24 )
      {
        v7 = &v19;
        sub_11A9950(&v19, v25, (uint8_t *)v26);
      }
      else
      {
        v7 = &v18;
        sub_11A9950(&v18, v25, (uint8_t *)v24);
      }
      g4_std::string::assign_str(&v11, v7);
      g4_std::string::Destroy(v7);
    }
    else
    {
      g4_std::string::assign_str(&v11, &v30);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10) + 1, "user-", (int)(uintptr_t)(&v9));
    sub_134F3A0((int)(uintptr_t)(&v12), (int)(uintptr_t)(&v10) + 1, (int)(uintptr_t)(&v11));
    DataSharing_getSharedValue((DataSharing::Self *)v13, v12);
    g4_std::string::assign_str(a3, v13);
    g4_std::string::Destroy(v13);
    g4_std::string::Destroy(&v12);
    g4_std::string::Destroy((char *)&v10 + 1);
    g4_std::string::Destroy(&v11);
    v15 = &dword_213B814;
    if ( v26 != 0 )
    {
      if ( v26 <= (unsigned int)v24 )
      {
        v8 = &v20;
        sub_11A9950(&v20, v25, (uint8_t *)v24);
      }
      else
      {
        v8 = &v21;
        sub_11A9950(&v21, v25, (uint8_t *)v26);
      }
      g4_std::string::assign_str(&v15, v8);
      g4_std::string::Destroy(v8);
    }
    else
    {
      g4_std::string::assign_str(&v15, &v30);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "pass-", (int)(uintptr_t)(&v9) + 1);
    sub_134F3A0((int)(uintptr_t)(&v16), (int)(uintptr_t)(&v14), (int)(uintptr_t)(&v15));
    DataSharing_getSharedValue((DataSharing::Self *)v17, v16);
    g4_std::string::assign_str(a4, v17);
    g4_std::string::Destroy(v17);
    g4_std::string::Destroy(&v16);
    g4_std::string::Destroy(&v14);
    g4_std::string::Destroy(&v15);
    v22 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v31[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v23[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    g4_std::string::Destroy(&v30);
    v23[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v28);
    v22 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(uint32_t *)((char *)&v23[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
    v31[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v31);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: LoginManager::SaveSessionCredentials  (binary VA: 0x14e6680)
// Original: LoginManager::SaveSessionCredentials
// ----------------------------------------------------------------------------
int LoginManager::SaveSessionCredentials(int a1, int a2, int a3, int a4)
{
  uint32_t *v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[2];
  typedef char _g4_t_v11[4];
  typedef uint8_t _g4_t_v12[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v8)) > _g4_s1 ? (26u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v10)) > _g4_s3 ? (32u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v11)) > _g4_s4 ? (40u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v12)) > _g4_s5 ? (44u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 26u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  v4 = *(uint32_t **)(a1 + 12);
  v5 = (uint32_t *)(a1 + 8);
  if ( v4 == nullptr )
    goto LABEL_8;
  do
  {
    while ( a2 <= v4[4] )
    {
      v5 = v4;
      v4 = (uint32_t *)v4[2];
      if ( v4 == nullptr )
        goto LABEL_6;
    }
    v4 = (uint32_t *)v4[3];
  }
  while ( v4 != nullptr );
LABEL_6:
  if ( (uint32_t *)(a1 + 8) == v5 || a2 < v5[4] )
  {
LABEL_8:
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), (char *)&unk_1B15112, (int)(uintptr_t)(&v8));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 1);
    v10[1] = a2;
    g4_std::string::construct_copy(v11, &v9);
    g4_std::string::construct_copy(v12, v10);
    g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert_unique(&v7);
    v5 = v7;
    g4_std::string::Destroy(v12);
    g4_std::string::Destroy(v11);
    g4_std::string::Destroy(v10);
    g4_std::string::Destroy(&v9);
  }
  g4_std::string::assign_str(v5 + 5, a3);
  return (int)(uintptr_t)(g4_std::string::assign_str(v5 + 6, a4));
}

// ----------------------------------------------------------------------------
// Function: LoginManager::SaveCredentials  (binary VA: 0x14e67d0)
// Original: LoginManager::SaveCredentials
// ----------------------------------------------------------------------------
int LoginManager::SaveCredentials(int a1, int a2, DataSharing::Self **a3, DataSharing::Self **a4, char a5)
{
  int *v6;
  typedef DataSharing::Self *_g4_t_v7;
  typedef uint8_t *_g4_t_v8;
  typedef int *_g4_t_v9;
  typedef DataSharing::Self *_g4_t_v10;
  typedef DataSharing::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef DataSharing::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef DataSharing::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int (**_g4_t_v23)(int);
  typedef uint32_t _g4_t_v24[3];
  typedef int _g4_t_v25;
  typedef void *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[4];
  typedef int _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef uint32_t _g4_t_v32[29];
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v10)) > _g4_s3 ? (40u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v11)) > _g4_s4 ? (44u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (62u + sizeof(_g4_t_v12)) > _g4_s5 ? (62u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (67u + sizeof(_g4_t_v13)) > _g4_s6 ? (67u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v14)) > _g4_s7 ? (72u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v15)) > _g4_s8 ? (76u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v16)) > _g4_s9 ? (80u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v17)) > _g4_s10 ? (84u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v18)) > _g4_s11 ? (88u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v19)) > _g4_s12 ? (92u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v20)) > _g4_s13 ? (96u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v21)) > _g4_s14 ? (100u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v22)) > _g4_s15 ? (104u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v23)) > _g4_s16 ? (108u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v24)) > _g4_s17 ? (112u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v25)) > _g4_s18 ? (124u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v26)) > _g4_s19 ? (128u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v27)) > _g4_s20 ? (132u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v28)) > _g4_s21 ? (136u + sizeof(_g4_t_v28)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v29)) > _g4_s22 ? (140u + sizeof(_g4_t_v29)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v30)) > _g4_s23 ? (144u + sizeof(_g4_t_v30)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v31)) > _g4_s24 ? (148u + sizeof(_g4_t_v31)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v32)) > _g4_s25 ? (152u + sizeof(_g4_t_v32)) : _g4_s25,
    _g4_s27 = (268u + sizeof(_g4_t_v33)) > _g4_s26 ? (268u + sizeof(_g4_t_v33)) : _g4_s26,
    _g4_s28 = (269u + sizeof(_g4_t_v34)) > _g4_s27 ? (269u + sizeof(_g4_t_v34)) : _g4_s27,
    _g4_s29 = (272u + sizeof(_g4_t_v35)) > _g4_s28 ? (272u + sizeof(_g4_t_v35)) : _g4_s28,
    _g4_s30 = (276u + sizeof(_g4_t_v36)) > _g4_s29 ? (276u + sizeof(_g4_t_v36)) : _g4_s29,
    _g4_s31 = (280u + sizeof(_g4_t_v37)) > _g4_s30 ? (280u + sizeof(_g4_t_v37)) : _g4_s30,
    _g4_s32 = (284u + sizeof(_g4_t_v38)) > _g4_s31 ? (284u + sizeof(_g4_t_v38)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 62u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 67u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 112u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 128u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 132u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 136u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 140u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 144u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 148u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 152u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 268u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 269u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 272u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 276u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 280u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 284u);

  LoginManager::SaveSessionCredentials(a1, a2, (int)(uintptr_t)(a3), (int)(uintptr_t)(a4));
  if ( a5 != 0 )
  {
    sub_1900810(v32);
    v32[28] = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v32[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v38 = 0;
    v23 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(uint32_t *)((char *)&v24[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
    sub_19119D0((char *)&v24[-1] + (uint32_t)(uintptr_t)(*(v23 - 3)), 0);
    v24[1] = 0;
    v24[2] = 0;
    v25 = 0;
    v26 = nullptr;
    v27 = 0;
    v28 = 0;
    v23 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v32[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v24[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v29);
    v30 = 16;
    v24[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v31 = &dword_213B814;
    sub_19119D0(v32, v24);
    g4_std::ostream::op_shl_int(&v23, a2);
    v11 = *a3;
    v14 = &dword_213B814;
    if ( v27 != 0 )
    {
      if ( v27 > (unsigned int)v25 )
      {
        sub_11A9950(&v20, v26, (uint8_t *)v27);
        g4_std::string::assign_str(&v14, &v20);
        g4_std::string::Destroy(&v20);
      }
      else
      {
        sub_11A9950(&v19, v26, (uint8_t *)v25);
        g4_std::string::assign_str(&v14, &v19);
        g4_std::string::Destroy(&v19);
      }
    }
    else
    {
      g4_std::string::assign_str(&v14, &v31);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13) + 1, "user-", (int)(uintptr_t)(&v12));
    sub_134F3A0((int)(uintptr_t)(&v15), (int)(uintptr_t)(&v13) + 1, (int)(uintptr_t)(&v14));
    DataSharing_setSharedValue(v15, v11);
    g4_std::string::Destroy(&v15);
    g4_std::string::Destroy((char *)&v13 + 1);
    g4_std::string::Destroy(&v14);
    if ( g4_std::string::compare((int)(uintptr_t)(a4), (char *)&unk_1B15112) != 0 )
    {
      v17 = &dword_213B814;
      v10 = *a4;
      if ( v27 != 0 )
      {
        if ( v27 <= (unsigned int)v25 )
        {
          v8 = (uint8_t *)v25;
          v7 = (DataSharing::Self *)v26;
          v6 = (int *)&v21;
        }
        else
        {
          v8 = (uint8_t *)v27;
          v7 = (DataSharing::Self *)v26;
          v6 = &v22;
        }
        v9 = v6;
        sub_11A9950(v6, v7, v8);
        g4_std::string::assign_str(&v17, v9);
        g4_std::string::Destroy(v9);
      }
      else
      {
        g4_std::string::assign_str(&v17, &v31);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "pass-", (int)(uintptr_t)(&v12) + 1);
      sub_134F3A0((int)(uintptr_t)(&v18), (int)(uintptr_t)(&v16), (int)(uintptr_t)(&v17));
      DataSharing_setSharedValue(v18, v10);
      g4_std::string::Destroy(&v18);
      g4_std::string::Destroy(&v16);
      g4_std::string::Destroy(&v17);
    }
    v23 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v32[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v24[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    g4_std::string::Destroy(&v31);
    v24[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v29);
    v23 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(uint32_t *)((char *)&v24[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
    v32[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v32);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_14E7800  (binary VA: 0x14e7800)
// Original: sub_14E7800
// ----------------------------------------------------------------------------
void sub_14E7800(int a1)
{
  int v1;
  glwebtools::Mutex::Self *v2;
  gaia::CrmManager::Self *Instance;
  int *v4;
  int v5;
  typedef Json::Value::Self *_g4_t_v6;
  typedef void (*_g4_t_v7)(gaia::CrmManager::Self *, int, int, uint8_t *);
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[16];
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v10)) > _g4_s4 ? (64u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);

  if ( a1 == 1 )
  {
    v1 = dword_2119E4C;
    v2 = (glwebtools::Mutex::Self *)(dword_2119E4C + 4);
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(dword_2119E4C + 4));
    if ( *(uint32_t *)(v1 + 36) == *(uint32_t *)(v1 + 20) )
    {
      Json::Value::Construct((int)(uintptr_t)(v8), nullptr);
    }
    else
    {
      Json::Value::Construct((Json::Value::Self *)v9, *(const Json::Value::Self **)(v1 + 20));
      v6 = *(Json::Value::Self **)(v1 + 20);
      if ( v6 == (Json::Value::Self *)(*(uint32_t *)(v1 + 28) - 16) )
      {
        Json::Value::Destroy(v6);
        opDelete(*(void **)(v1 + 24));
        v4 = (int *)(*(uint32_t *)(v1 + 32) + 4);
        *(uint32_t *)(v1 + 32) = (uint32_t)(uintptr_t)(v4);
        v5 = *v4;
        *(uint32_t *)(v1 + 24) = *v4;
        *(uint32_t *)(v1 + 20) = v5;
        *(uint32_t *)(v1 + 28) = v5 + 512;
      }
      else
      {
        Json::Value::Destroy(v6);
        *(uint32_t *)(v1 + 20) += 16;
      }
      Json::Value::Construct((Json::Value::Self *)v8, (const Json::Value::Self *)v9);
      Json::Value::Destroy((Json::Value::Self *)v9);
    }
    glwebtools::Mutex::Unlock(v2);
    if ( Json::Value::type((Json::Value::Self *)v8) != 0 )
    {
      Instance = gaia::CrmManager::GetInstance();
      v7 = *(void (**)(gaia::CrmManager::Self *, int, int, uint8_t *))(*(uint32_t *)Instance + 8);
      Json::Value::Construct((Json::Value::Self *)v10, (const Json::Value::Self *)v8);
      v7(Instance, 12, 1, v10);
      Json::Value::Destroy((Json::Value::Self *)v10);
    }
    Json::Value::Destroy((Json::Value::Self *)v8);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_14E7960  (binary VA: 0x14e7960)
// Original: sub_14E7960
// ----------------------------------------------------------------------------
void sub_14E7960(int a1)
{
  int v1;
  glwebtools::Mutex::Self *v2;
  gaia::CrmManager::Self *Instance;
  int *v4;
  int v5;
  typedef Json::Value::Self *_g4_t_v6;
  typedef void (*_g4_t_v7)(gaia::CrmManager::Self *, int, int, uint8_t *);
  typedef uint8_t _g4_t_v8[16];
  typedef uint8_t _g4_t_v9[16];
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v9)) > _g4_s3 ? (48u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v10)) > _g4_s4 ? (64u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);

  if ( a1 == 1 )
  {
    v1 = dword_2119E4C;
    v2 = (glwebtools::Mutex::Self *)(dword_2119E4C + 4);
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(dword_2119E4C + 4));
    if ( *(uint32_t *)(v1 + 76) == *(uint32_t *)(v1 + 60) )
    {
      Json::Value::Construct((int)(uintptr_t)(v8), nullptr);
    }
    else
    {
      Json::Value::Construct((Json::Value::Self *)v9, *(const Json::Value::Self **)(v1 + 60));
      v6 = *(Json::Value::Self **)(v1 + 60);
      if ( v6 == (Json::Value::Self *)(*(uint32_t *)(v1 + 68) - 16) )
      {
        Json::Value::Destroy(v6);
        opDelete(*(void **)(v1 + 64));
        v4 = (int *)(*(uint32_t *)(v1 + 72) + 4);
        *(uint32_t *)(v1 + 72) = (uint32_t)(uintptr_t)(v4);
        v5 = *v4;
        *(uint32_t *)(v1 + 64) = *v4;
        *(uint32_t *)(v1 + 60) = v5;
        *(uint32_t *)(v1 + 68) = v5 + 512;
      }
      else
      {
        Json::Value::Destroy(v6);
        *(uint32_t *)(v1 + 60) += 16;
      }
      Json::Value::Construct((Json::Value::Self *)v8, (const Json::Value::Self *)v9);
      Json::Value::Destroy((Json::Value::Self *)v9);
    }
    glwebtools::Mutex::Unlock(v2);
    if ( Json::Value::type((Json::Value::Self *)v8) != 0 )
    {
      Instance = gaia::CrmManager::GetInstance();
      v7 = *(void (**)(gaia::CrmManager::Self *, int, int, uint8_t *))(*(uint32_t *)Instance + 8);
      Json::Value::Construct((Json::Value::Self *)v10, (const Json::Value::Self *)v8);
      v7(Instance, 12, 1, v10);
      Json::Value::Destroy((Json::Value::Self *)v10);
    }
    Json::Value::Destroy((Json::Value::Self *)v8);
  }
}

// ----------------------------------------------------------------------------
// Function: splashScreenFuncGlot  (binary VA: 0x14e7ac0)
// Original: splashScreenFuncGlot
// ----------------------------------------------------------------------------
int splashScreenFuncGlot(char *a1)
{
  gaia::CrmManager::Self *Instance;
  uint32_t *v2;
  size_t n;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  size_t v19;
  const Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  typedef Json::Value::Self *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef void (*_g4_t_v27)(gaia::CrmManager::Self *, int, int, uint8_t *);
  typedef size_t _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef uint8_t _g4_t_s1[5];
  typedef void *_g4_t_v31;
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
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[44];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v25)) > _g4_s2 ? (4u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v26)) > _g4_s3 ? (8u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v27)) > _g4_s4 ? (8u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v28)) > _g4_s5 ? (8u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v29)) > _g4_s6 ? (12u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (23u + sizeof(_g4_t_s1)) > _g4_s7 ? (23u + sizeof(_g4_t_s1)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v31)) > _g4_s8 ? (28u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v32)) > _g4_s9 ? (32u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v33)) > _g4_s10 ? (48u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v34)) > _g4_s11 ? (64u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v35)) > _g4_s12 ? (80u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v36)) > _g4_s13 ? (96u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v37)) > _g4_s14 ? (112u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v38)) > _g4_s15 ? (128u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v39)) > _g4_s16 ? (144u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (160u + sizeof(_g4_t_v40)) > _g4_s17 ? (160u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (176u + sizeof(_g4_t_v41)) > _g4_s18 ? (176u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (192u + sizeof(_g4_t_v42)) > _g4_s19 ? (192u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (208u + sizeof(_g4_t_v43)) > _g4_s20 ? (208u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (224u + sizeof(_g4_t_v44)) > _g4_s21 ? (224u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v45)) > _g4_s22 ? (240u + sizeof(_g4_t_v45)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 23u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 128u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 144u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 160u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 176u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 192u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 208u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 224u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 240u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&s1[1]), a1, (int)(uintptr_t)(s1));
  Json::Value::Construct((int)(uintptr_t)(v32), nullptr);
  Instance = gaia::CrmManager::GetInstance();
  v2 = (uint32_t *)((char *)Instance + 36);
  v29 = (uint32_t *)((char *)Instance + 32);
  if ( g4_std::string::compare((int)(uintptr_t)(Instance) + 36, (char *)&unk_1B15112) == 0 && g4_std::string::compare((int)(uintptr_t)(v29), (char *)&unk_1B15112) == 0 )
    goto LABEL_9;
  v26 = *(uint32_t *)(*(uint32_t *)&s1[1] - 12);
  n = v26;
  if ( *((uint32_t *)gaia::k_szQuit - 3) <= v26 )
    n = *((uint32_t *)gaia::k_szQuit - 3);
  v23 = *((Json::Value::Self **)gaia::k_szQuit - 3);
  if ( memcmp(*(const void **)&s1[1], gaia::k_szQuit, n) != 0 || (Json::Value::Self *)v26 != v23 )
  {
    Json::Value::Construct((Json::Value::Self *)v39, 51854);
    v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v32, &gaia::k_szType);
    Json::Value::opAssign(v13, (const Json::Value::Self *)v39);
    Json::Value::Destroy((Json::Value::Self *)v39);
    Json::Value::Construct((int)(uintptr_t)(v40), (char *)&loc_6 + 1);
    v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v32, &gaia::k_szData);
    Json::Value::opAssign(v14, (const Json::Value::Self *)v40);
    Json::Value::Destroy((Json::Value::Self *)v40);
    Json::Value::Construct((int)(uintptr_t)(v41), v2);
    v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v32, &gaia::k_szData);
    v16 = (Json::Value::Self *)Json::Value::opIndex(v15, (char **)&gaia::k_szPopupId);
    Json::Value::opAssign(v16, (const Json::Value::Self *)v41);
    Json::Value::Destroy((Json::Value::Self *)v41);
    Json::Value::Construct((int)(uintptr_t)(v42), v29);
    v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v32, &gaia::k_szData);
    v18 = (Json::Value::Self *)Json::Value::opIndex(v17, &gaia::k_szPointcutId);
    Json::Value::opAssign(v18, (const Json::Value::Self *)v42);
    Json::Value::Destroy((Json::Value::Self *)v42);
    sub_193A6F0(&v31, &s1[1], 0, 4);
    v24 = *((char **)v31 - 3);
    v28 = *((uint32_t *)gaia::k_szGoto - 3);
    v19 = (size_t)v24;
    if ( v28 <= (unsigned int)(uintptr_t)(v24) )
      v19 = *((uint32_t *)gaia::k_szGoto - 3);
    if ( memcmp(v31, gaia::k_szGoto, v19) == 0 )
    {
      g4_std::string::Destroy(&v31);
      if ( v24 == (char *)v28 )
      {
        v20 = (const Json::Value::Self *)v43;
        Json::Value::Construct((Json::Value::Self *)v43, 52453);
LABEL_15:
        v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v32, &gaia::k_szData);
        v22 = (Json::Value::Self *)Json::Value::opIndex(v21, &gaia::k_szClickType);
        Json::Value::opAssign(v22, v20);
        Json::Value::Destroy(v20);
        v25 = *(char **)(*(uint32_t *)Instance + 8);
        Json::Value::Construct((Json::Value::Self *)v45, (const Json::Value::Self *)v32);
        ((void (*)(gaia::CrmManager::Self *, int, int, uint8_t *))v25)(Instance, 12, 1, v45);
        Json::Value::Destroy((Json::Value::Self *)v45);
        goto LABEL_9;
      }
    }
    else
    {
      g4_std::string::Destroy(&v31);
    }
    v20 = (const Json::Value::Self *)v44;
    Json::Value::Construct((Json::Value::Self *)v44, 52454);
    goto LABEL_15;
  }
  Json::Value::Construct((Json::Value::Self *)v33, 51854);
  v4 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v32, &gaia::k_szType);
  Json::Value::opAssign(v4, (const Json::Value::Self *)v33);
  Json::Value::Destroy((Json::Value::Self *)v33);
  Json::Value::Construct((int)(uintptr_t)(v34), (char *)&loc_6 + 1);
  v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v32, &gaia::k_szData);
  Json::Value::opAssign(v5, (const Json::Value::Self *)v34);
  Json::Value::Destroy((Json::Value::Self *)v34);
  Json::Value::Construct((int)(uintptr_t)(v35), v2);
  v6 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v32, &gaia::k_szData);
  v7 = (Json::Value::Self *)Json::Value::opIndex(v6, (char **)&gaia::k_szPopupId);
  Json::Value::opAssign(v7, (const Json::Value::Self *)v35);
  Json::Value::Destroy((Json::Value::Self *)v35);
  Json::Value::Construct((int)(uintptr_t)(v36), v29);
  v8 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v32, &gaia::k_szData);
  v9 = (Json::Value::Self *)Json::Value::opIndex(v8, &gaia::k_szPointcutId);
  Json::Value::opAssign(v9, (const Json::Value::Self *)v36);
  Json::Value::Destroy((Json::Value::Self *)v36);
  Json::Value::Construct((Json::Value::Self *)v37, 52455);
  v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v32, &gaia::k_szData);
  v11 = (Json::Value::Self *)Json::Value::opIndex(v10, &gaia::k_szClickType);
  Json::Value::opAssign(v11, (const Json::Value::Self *)v37);
  Json::Value::Destroy((Json::Value::Self *)v37);
  v27 = *(void (**)(gaia::CrmManager::Self *, int, int, uint8_t *))(*(uint32_t *)Instance + 8);
  Json::Value::Construct((Json::Value::Self *)v38, (const Json::Value::Self *)v32);
  v27(Instance, 12, 1, v38);
  Json::Value::Destroy((Json::Value::Self *)v38);
  if ( g4_std_compat::string_find(v2, gaia::k_szTags, 0, *((uint32_t *)gaia::k_szTags - 3)) != -1 )
    gaia::CrmManager::DownloadOfflineWS((int)(uintptr_t)(Instance), v2);
  g4_std_compat::string_assign((int)(uintptr_t)(v2), &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(v29), &unk_1B15112, 0);
LABEL_9:
  Json::Value::Destroy((Json::Value::Self *)v32);
  return ((g4_std::string::Destroy(&s1[1])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ISingleton_gid_GlobalDeviceIDManage_49a2ac::Destroy  (binary VA: 0x14e9d10)
// Original: ISingleton<gid::GlobalDeviceIDManager>::~ISingleton
// ----------------------------------------------------------------------------
void ISingleton_gid_GlobalDeviceIDManage_49a2ac::Destroy(ISingleton<gid::GlobalDeviceIDManager::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095FC8);
}

// ----------------------------------------------------------------------------
// Function: ISingleton_gaia_DataCenterManager_b79c39::Destroy  (binary VA: 0x14e9d30)
// Original: ISingleton<gaia::DataCenterManager>::~ISingleton
// ----------------------------------------------------------------------------
void ISingleton_gaia_DataCenterManager_b79c39::Destroy(ISingleton<gaia::DataCenterManager::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096008);
}

// ----------------------------------------------------------------------------
// Function: ISingleton_gaia_DataCenterManager_b79c39::Destroy_ea14ea0a0  (binary VA: 0x14ea0a0)
// Original: ISingleton<gaia::DataCenterManager>::~ISingleton
// ----------------------------------------------------------------------------
void ISingleton_gaia_DataCenterManager_b79c39::Destroy_ea14ea0a0(ISingleton<gaia::DataCenterManager::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096008);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: ISingleton_gid_GlobalDeviceIDManage_49a2ac::Destroy_ea14ea0d0  (binary VA: 0x14ea0d0)
// Original: ISingleton<gid::GlobalDeviceIDManager>::~ISingleton
// ----------------------------------------------------------------------------
void ISingleton_gid_GlobalDeviceIDManage_49a2ac::Destroy_ea14ea0d0(ISingleton<gid::GlobalDeviceIDManager::Self> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095FC8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: CrmGlotEvent::Destroy  (binary VA: 0x14ea250)
// Original: CrmGlotEvent::~CrmGlotEvent
// ----------------------------------------------------------------------------
void CrmGlotEvent::Destroy(CrmGlotEvent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095FA8);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: CrmGlotEvent::Destroy_ea14ea440  (binary VA: 0x14ea440)
// Original: CrmGlotEvent::~CrmGlotEvent
// ----------------------------------------------------------------------------
void CrmGlotEvent::Destroy_ea14ea440(CrmGlotEvent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095FA8);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: CrmGlotEvent::SetEventKeyPairs  (binary VA: 0x14eb000)
// Original: CrmGlotEvent::SetEventKeyPairs
// ----------------------------------------------------------------------------
int CrmGlotEvent::SetEventKeyPairs(glotv3::Event::Self *a1, int a2, uint8_t **a3, uint8_t **a4, void *a5, uint8_t **a6, uint8_t **a7, uint8_t **a8, void *a9, void *a10)
{
  int result;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  int v16;
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef void *_g4_t_v31[7];
  typedef uint32_t *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef void *_g4_t_v37[7];
  typedef uint32_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef void *_g4_t_v43[7];
  typedef uint32_t *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v21)) > _g4_s1 ? (24u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v22)) > _g4_s2 ? (28u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v23)) > _g4_s3 ? (32u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v24)) > _g4_s4 ? (36u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v25)) > _g4_s5 ? (40u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v26)) > _g4_s6 ? (44u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v27)) > _g4_s7 ? (48u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v28)) > _g4_s8 ? (52u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v29)) > _g4_s9 ? (56u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v30)) > _g4_s10 ? (60u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v31)) > _g4_s11 ? (64u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v32)) > _g4_s12 ? (92u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v33)) > _g4_s13 ? (96u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v34)) > _g4_s14 ? (100u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v35)) > _g4_s15 ? (104u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v36)) > _g4_s16 ? (108u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v37)) > _g4_s17 ? (112u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (140u + sizeof(_g4_t_v38)) > _g4_s18 ? (140u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v39)) > _g4_s19 ? (144u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (148u + sizeof(_g4_t_v40)) > _g4_s20 ? (148u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (152u + sizeof(_g4_t_v41)) > _g4_s21 ? (152u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v42)) > _g4_s22 ? (156u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (160u + sizeof(_g4_t_v43)) > _g4_s23 ? (160u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (188u + sizeof(_g4_t_v44)) > _g4_s24 ? (188u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (192u + sizeof(_g4_t_v45)) > _g4_s25 ? (192u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (196u + sizeof(_g4_t_v46)) > _g4_s26 ? (196u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (200u + sizeof(_g4_t_v47)) > _g4_s27 ? (200u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (204u + sizeof(_g4_t_v48)) > _g4_s28 ? (204u + sizeof(_g4_t_v48)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 92u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 140u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 144u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 148u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 152u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 156u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 160u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 188u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 192u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 196u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 200u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 204u);

  result = 0;
  if ( a2 == 51853 )
  {
    glotv3::Event::setEventType(a1, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_CA84)->st_size + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "campaign_id", (int)(uintptr_t)(&v21));
    glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v23, a3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "click_type_redirection", (int)(uintptr_t)(&v21) + 1);
    glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v24, a4);
    v31[2] = &dword_0 + 2;
    v31[6] = nullptr;
    v32 = nullptr;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v33 = 2048;
    v35 = opNew(1u);
    v36 = v35;
    v20 = v33;
    v11 = (uint32_t *)(malloc(v33 + 12));
    v11[1] = 0;
    *v11 = v20;
    v11[2] = (uint32_t)(uintptr_t)(v32);
    v32 = v11;
    v31[0] = a5;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "offline", (int)(uintptr_t)(&v21) + 2);
    glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v25, (glotv3::EventValue::Self *)v31);
    g4_std::string::Destroy(&v25);
    glotv3::EventValue::Destroy(v31);
    g4_std::string::Destroy(&v24);
    g4_std::string::Destroy(&v23);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "pointcut_arguments", (int)(uintptr_t)(&v21) + 3);
    glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v26, a6);
    g4_std::string::Destroy(&v26);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "pointcut_id", (int)(uintptr_t)(&v22));
    glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v27, a7);
    g4_std::string::Destroy(&v27);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "popup_id", (int)(uintptr_t)(&v22) + 1);
    glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v28, a8);
    g4_std::string::Destroy(&v28);
    v39 = 2048;
    v37[2] = &dword_0 + 2;
    v37[6] = nullptr;
    v38 = nullptr;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v12 = opNew(1u);
    v13 = v39;
    v41 = v12;
    v42 = v12;
    v14 = (uint32_t *)(malloc(v39 + 12));
    v15 = v38;
    *v14 = v13;
    v14[2] = (uint32_t)(uintptr_t)(v15);
    v14[1] = 0;
    v38 = v14;
    v37[0] = a9;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "popup_type", (int)(uintptr_t)(&v22) + 2);
    glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v29, (glotv3::EventValue::Self *)v37);
    g4_std::string::Destroy(&v29);
    glotv3::EventValue::Destroy(v37);
    v45 = 2048;
    v43[2] = &dword_0 + 2;
    v43[6] = nullptr;
    v44 = nullptr;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v16 = opNew(1u);
    v17 = v45;
    v47 = v16;
    v48 = v16;
    v18 = (uint32_t *)(malloc(v45 + 12));
    v19 = v44;
    *v18 = v17;
    v18[2] = (uint32_t)(uintptr_t)(v19);
    v18[1] = 0;
    v44 = v18;
    v43[0] = a10;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "priority", (int)(uintptr_t)(&v22) + 3);
    glotv3::Event::addKeyPair((int)(uintptr_t)(a1), (uint8_t **)&v30, (glotv3::EventValue::Self *)v43);
    g4_std::string::Destroy(&v30);
    glotv3::EventValue::Destroy(v43);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::ExtractMandatoryField_string_5d9116  (binary VA: 0x14eb470)
// Original: gaia::ExtractMandatoryField<std::string>
// ----------------------------------------------------------------------------
int gaia::ExtractMandatoryField_string_5d9116(Json::Value::Self *a1, int a2, const char **a3, int a4)
{
  int v4;
  Json::Value::Self *v5;
  uint8_t v7[4];

  v4 = -34;
  v5 = (Json::Value::Self *)Json::Value::opIndex(a1, a3);
  if ( !Json::Value::isNull(v5) && Json::Value::isConvertibleTo(v5, a2) != 0 )
  {
    Json::Value::asString((Json::Value::Self *)v7, (int)(uintptr_t)(v5));
    g4_std::string::assign_str(a4, v7);
    v4 = 0;
    g4_std::string::Destroy(v7);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gaia::ExtractOptionalField_int_id_85ac4a  (binary VA: 0x14eb510)
// Original: gaia::ExtractOptionalField<int>
// ----------------------------------------------------------------------------
int gaia::ExtractOptionalField_int_id_85ac4a(Json::Value::Self *a1, int a2, const char **a3, int *a4)
{
  int v4;
  Json::Value::Self *v5;

  v4 = 0;
  v5 = (Json::Value::Self *)Json::Value::opIndex(a1, a3);
  if ( !Json::Value::isNull(v5) && Json::Value::isConvertibleTo(v5, a2) != 0 )
  {
    v4 = 1;
    *a4 = Json::Value::asInt(v5);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gaia::ExtractOptionalField_string_601e68  (binary VA: 0x14eb5a0)
// Original: gaia::ExtractOptionalField<std::string>
// ----------------------------------------------------------------------------
int gaia::ExtractOptionalField_string_601e68(Json::Value::Self *a1, int a2, const char **a3, int a4)
{
  int v4;
  Json::Value::Self *v5;
  uint8_t v7[4];

  v4 = 0;
  v5 = (Json::Value::Self *)Json::Value::opIndex(a1, a3);
  if ( !Json::Value::isNull(v5) && Json::Value::isConvertibleTo(v5, a2) != 0 )
  {
    Json::Value::asString((Json::Value::Self *)v7, (int)(uintptr_t)(v5));
    g4_std::string::assign_str(a4, v7);
    v4 = 1;
    g4_std::string::Destroy(v7);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: g4_std::deque_unsigned_int_482b01::erase  (binary VA: 0x14eb860)
// Original: std::deque<unsigned int>::erase
// ----------------------------------------------------------------------------
int * g4_std::deque_unsigned_int_482b01::erase(int *a1, uint32_t *a2, int *a3, int *a4)
{
  uint8_t *v4;
  char *src;
  void **v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  uint8_t *v19;
  int v20;
  void **v21;
  int v22;
  bool v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  char *dest;
  int v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  uint32_t *v34;
  void **v35;
  void *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v42;
  void **v43;
  void *v44;
  unsigned int v45;
  unsigned int v46;
  void *v47;
  int v48;
  char *v49;
  int v50;
  int v51;
  char *v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  uint8_t *v59;
  char *v60;
  char *v61;
  unsigned int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int *v68;
  int *v69;
  int v70;
  int v71;
  int v72;
  signed int v73;
  int v74;
  int v75;
  int v76;
  char *v77;
  uint32_t *v78;

  v4 = (uint8_t *)*a3;
  src = (char *)*a4;
  if ( *a3 == *a4 )
  {
    *a1 = (int)(uintptr_t)(v4);
    a1[1] = a3[1];
    a1[2] = a3[2];
    a1[3] = a3[3];
    return a1;
  }
  v59 = (uint8_t *)a2[2];
  v77 = (char *)a2[6];
  if ( v4 != v59 || src != (char *)a2[6] )
  {
    v68 = (int *)a3[3];
    v69 = (int *)a4[3];
    v51 = a3[2];
    v66 = a4[1];
    v63 = a3[1];
    v75 = a2[4];
    v74 = ((int)(uintptr_t)(&src[-v66]) >> 2) + ((v69 - v68 - 1) << 7) + ((v51 - (int)(uintptr_t)(v4)) >> 2);
    v6 = (void **)a2[5];
    v7 = (v75 - (int)(uintptr_t)(v59)) >> 2;
    v73 = v7 + (((((char *)v68 - (char *)v6) >> 2) - 1) << 7) + ((int)(uintptr_t)(&v4[-v63]) >> 2);
    v78 = (uint32_t *)a2[9];
    v70 = a2[7];
    v8 = (int)(uintptr_t)(&v77[-v70]) >> 2;
    if ( v73 <= (unsigned int)(v8 + (((void **)v78 - v6 - 1) << 7) + v7 - v74) >> 1 )
    {
      if ( v4 != v59 && v73 > 0 )
      {
        v9 = v7 + (((((char *)v68 - (char *)v6) >> 2) - 1) << 7) + ((int)(uintptr_t)(&v4[-v63]) >> 2);
        v57 = *a4;
        v10 = *a3;
        while ( 1 )
        {
          v11 = (v10 - v63) >> 2;
          v52 = (char *)v10;
          v12 = (v57 - v66) >> 2;
          v13 = v11;
          v60 = (char *)v10;
          if ( v11 == 0 )
          {
            v13 = 128;
            v60 = (char *)(*(v68 - 1) + 512);
            v52 = v60;
          }
          v76 = (v57 - v66) >> 2;
          v71 = v57;
          if ( v12 == 0 )
          {
            v76 = 128;
            v71 = *(v69 - 1) + 512;
          }
          if ( v13 > v9 )
            v13 = v9;
          if ( v13 > v76 )
            v13 = v76;
          v61 = &v60[-4 * v13];
          if ( (v52 - v61) >> 2 != 0 )
          {
            v50 = v9;
            v48 = v10;
            memmove((void *)(v71 - 4 * ((v52 - v61) >> 2)), v61, 4 * ((v52 - v61) >> 2));
            v10 = v48;
            v14 = -v13;
            v15 = v11 - v13;
            v9 = v50;
            v53 = -v13;
            if ( v15 < 0 )
            {
LABEL_61:
              v16 = ((unsigned int)v15 >> 7) | 0xFE000000;
              goto LABEL_20;
            }
          }
          else
          {
            v14 = -v13;
            v15 = v11 - v13;
            v53 = -v13;
            if ( v15 < 0 )
              goto LABEL_61;
          }
          v10 += 4 * v14;
          if ( v15 > 127 )
          {
            v16 = v15 >> 7;
LABEL_20:
            v68 += v16;
            v63 = *v68;
            v10 = *v68 + 4 * (v15 - (v16 << 7));
          }
          v17 = v12 - v13;
          if ( v17 < 0 )
          {
            v18 = ((unsigned int)v17 >> 7) | 0xFE000000;
            goto LABEL_24;
          }
          if ( v17 <= 127 )
          {
            v9 -= v13;
            v57 += 4 * v53;
            if ( v9 <= 0 )
              goto LABEL_25;
          }
          else
          {
            v18 = v17 >> 7;
LABEL_24:
            v9 -= v13;
            v69 += v18;
            v66 = *v69;
            v57 = *v69 + 4 * (v17 - (v18 << 7));
            if ( v9 <= 0 )
            {
LABEL_25:
              v59 = (uint8_t *)a2[2];
              v75 = a2[4];
              v6 = (void **)a2[5];
              break;
            }
          }
        }
      }
      v19 = (uint8_t *)a2[3];
      v20 = v74 + ((v59 - v19) >> 2);
      if ( v20 < 0 )
      {
        v46 = ((unsigned int)v20 >> 7) | 0xFE000000;
      }
      else
      {
        if ( v20 <= 127 )
        {
          v21 = v6;
          v54 = (int)(uintptr_t)(&v59[4 * v74]);
          goto LABEL_29;
        }
        v46 = v20 >> 7;
      }
      v21 = &v6[v46];
      v19 = (uint8_t *)(*v21);
      v75 = (int)(uintptr_t)(*v21) + 512;
      v54 = (int)(uintptr_t)(*v21) + 4 * (v20 - (v46 << 7));
      while ( v6 < v21 )
      {
        v47 = *v6++;
        opDelete(v47);
      }
LABEL_29:
      a2[2] = v54;
      a2[3] = (uint32_t)(uintptr_t)(v19);
      v22 = (v54 - (int)(uintptr_t)(v19)) >> 2;
      v23 = v73 + v22 < 0;
      v24 = v73 + v22;
      a2[4] = v75;
      a2[5] = (uint32_t)(uintptr_t)(v21);
      if ( v23 )
      {
LABEL_30:
        v25 = ((unsigned int)v24 >> 7) | 0xFE000000;
        goto LABEL_65;
      }
LABEL_57:
      if ( v24 <= 127 )
      {
        v39 = v54 + 4 * v73;
        v40 = v75;
LABEL_59:
        *a1 = v39;
        a1[1] = (int)(uintptr_t)(v19);
        a1[2] = v40;
        a1[3] = (int)(uintptr_t)(v21);
        return a1;
      }
      v25 = v24 >> 7;
LABEL_65:
      v21 += v25;
      v19 = (uint8_t *)(*v21);
      v40 = (int)(uintptr_t)(*v21) + 512;
      v39 = (int)(uintptr_t)(*v21) + 4 * (v24 - (v25 << 7));
      goto LABEL_59;
    }
    if ( src != v77 )
    {
      v58 = a4[2];
      v26 = v8 + ((v78 - (uint32_t *)(v69) - 1) << 7);
      if ( v26 + ((v58 - (int)(uintptr_t)(src)) >> 2) > 0 )
      {
        v27 = v26 + ((v58 - (int)(uintptr_t)(src)) >> 2);
        dest = (char *)*a3;
        while ( 1 )
        {
          v31 = (v51 - (int)(uintptr_t)(dest)) >> 2;
          if ( v31 > (v58 - (int)(uintptr_t)(src)) >> 2 )
            v31 = (v58 - (int)(uintptr_t)(src)) >> 2;
          if ( v31 > v27 )
            v31 = v27;
          v32 = 4 * v31;
          if ( (4 * v31) >> 2 != 0 )
          {
            v49 = dest;
            memmove(dest, src, 4 * ((4 * v31) >> 2));
            v32 = 4 * v31;
            dest = v49;
            v72 = v31 + ((int)(uintptr_t)(&src[-v66]) >> 2);
            if ( v72 < 0 )
            {
LABEL_49:
              v62 = ((unsigned int)v72 >> 7) | 0xFE000000;
              goto LABEL_37;
            }
          }
          else
          {
            v72 = v31 + ((int)(uintptr_t)(&src[-v66]) >> 2);
            if ( v72 < 0 )
              goto LABEL_49;
          }
          src += 4 * v31;
          if ( v72 > 127 )
          {
            v62 = v72 >> 7;
LABEL_37:
            v69 += v62;
            v66 = *v69;
            v58 = *v69 + 512;
            src = (char *)(*v69 + 4 * (v72 - (v62 << 7)));
          }
          v29 = v31 + ((int)(uintptr_t)(&dest[-v63]) >> 2);
          if ( v29 < 0 )
          {
            v30 = ((unsigned int)v29 >> 7) | 0xFE000000;
            goto LABEL_41;
          }
          dest += v32;
          if ( v29 > 127 )
          {
            v30 = v29 >> 7;
LABEL_41:
            v68 += v30;
            v63 = *v68;
            v51 = *v68 + 512;
            dest = (char *)(*v68 + 4 * (v29 - (v30 << 7)));
          }
          v27 -= v31;
          if ( v27 <= 0 )
          {
            v77 = (char *)a2[6];
            v70 = a2[7];
            v78 = (uint32_t *)a2[9];
            v8 = (int)(uintptr_t)(&v77[-v70]) >> 2;
            break;
          }
        }
      }
    }
    v33 = v8 - v74;
    v55 = a2[8];
    if ( v33 < 0 )
    {
      v45 = ((unsigned int)v33 >> 7) | 0xFE000000;
    }
    else
    {
      if ( v33 <= 127 )
      {
        v34 = v78;
        v64 = (int)(uintptr_t)(&v77[-4 * v74]);
        goto LABEL_54;
      }
      v45 = v33 >> 7;
    }
    v34 = &v78[v45];
    v70 = *v34;
    v55 = *v34 + 512;
    v64 = *v34 + 4 * (v33 - (v45 << 7));
LABEL_54:
    v35 = (void **)(v34 + 1);
    if ( v78 + 1 > v34 + 1 )
    {
      do
      {
        v36 = *v35++;
        opDelete(v36);
      }
      while ( v78 + 1 > (uint32_t *)(uintptr_t)(v35) );
    }
    a2[7] = v70;
    v37 = a2[2];
    a2[8] = v55;
    a2[9] = (uint32_t)(uintptr_t)(v34);
    v54 = v37;
    v19 = (uint8_t *)a2[3];
    a2[6] = v64;
    v38 = (v37 - (int)(uintptr_t)(v19)) >> 2;
    v23 = v73 + v38 < 0;
    v24 = v73 + v38;
    v75 = a2[4];
    v21 = (void **)a2[5];
    if ( v23 )
      goto LABEL_30;
    goto LABEL_57;
  }
  v56 = a2[5];
  v67 = a2[4];
  v42 = a2[9] + 4;
  v43 = (void **)(v56 + 4);
  v65 = a2[3];
  if ( v42 > v56 + 4 )
  {
    do
    {
      v44 = *v43++;
      opDelete(v44);
    }
    while ( v42 > (unsigned int)(uintptr_t)(v43) );
  }
  a2[9] = v56;
  a2[7] = v65;
  a2[8] = v67;
  a2[6] = (uint32_t)(uintptr_t)(v4);
  *a1 = (int)(uintptr_t)(v4);
  a1[1] = a2[7];
  a1[2] = a2[8];
  a1[3] = a2[9];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_gaia_ThreadManagerReques_53a3c6::resize  (binary VA: 0x14ec000)
// Original: std::vector<gaia::ThreadManagerRequest *>::resize
// ----------------------------------------------------------------------------
char * g4_std::vector_gaia_ThreadManagerReques_53a3c6::resize(std::vector<gaia::ThreadManagerRequest::Self *> *self, unsigned int a2, gaia::ThreadManagerRequest::Self *a3)
{
  uint32_t *src;
  char *result;
  gaia::ThreadManagerRequest::Self *v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  bool v9;
  unsigned int v10;
  gaia::ThreadManagerRequest::Self **v11;
  unsigned int v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  char *v18;
  char *v19;
  unsigned int v20;
  char *dest;
  int v22;

  src = *((uint32_t **)self + 1);
  result = *(char **)self;
  v5 = a3;
  v6 = ((int)(uintptr_t)(src) - *(uint32_t *)self) >> 2;
  if ( a2 > v6 )
  {
    v7 = a2 - v6;
    if ( a2 == v6 )
      return result;
    if ( v7 <= (*((uint32_t *)self + 2) - (int)(uintptr_t)(src)) >> 2 )
    {
      result = (char *)(a2 - v6);
      do
      {
        --result;
        *src++ = (uint32_t)(uintptr_t)(a3);
      }
      while ( result != nullptr );
      *((uint32_t *)self + 1) += 4 * v7;
      return result;
    }
    if ( v7 > 0x3FFFFFFF - v6 )
      sub_1900180("vector::_M_fill_insert");
    v8 = (*((uint32_t *)self + 1) - *(uint32_t *)self) >> 2;
    v22 = -4;
    if ( v7 >= v6 )
      v8 = a2 - v6;
    v9 = __CFADD__(v6, v8);
    v10 = v6 + v8;
    if ( !v9 && v10 <= 0x3FFFFFFF )
    {
      v22 = 0;
      dest = nullptr;
      if ( v10 == 0 )
      {
LABEL_15:
        v11 = (gaia::ThreadManagerRequest::Self **)&dest[4 * v6];
        v12 = v7;
        do
        {
          --v12;
          *v11++ = v5;
        }
        while ( v12 != 0 );
        v13 = 0;
        v14 = ((int)(uintptr_t)(src) - *(uint32_t *)self) >> 2;
        if ( v14 != 0 )
        {
          v13 = 4 * v14;
          v20 = v7;
          memmove(dest, *(const void **)self, 4 * v14);
          v7 = v20;
        }
        v15 = &dest[4 * v7 + v13];
        v16 = 0;
        v17 = (*((uint32_t *)self + 1) - (int)(uintptr_t)(src)) >> 2;
        if ( v17 != 0 )
        {
          v16 = 4 * v17;
          v19 = v15;
          memmove(v15, src, 4 * v17);
          v15 = v19;
        }
        v18 = &v15[v16];
        if ( *(uint32_t *)self != 0 )
          opDelete(*(void **)self);
        *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v18);
        *(uint32_t *)self = (uint32_t)(uintptr_t)(dest);
        *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dest[v22]);
        return &dest[v22];
      }
      v22 = 4 * v10;
    }
    dest = (char *)opNew(v22);
    v7 = a2 - v6;
    v5 = a3;
    goto LABEL_15;
  }
  if ( a2 < v6 )
  {
    result += 4 * a2;
    *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_gaia_CrmImpressionLimit_bdda80::M_insert_aux  (binary VA: 0x14ec1b0)
// Original: std::vector<gaia::CrmImpressionLimit>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_gaia_CrmImpressionLimit_bdda80::M_insert_aux(int a1, uint32_t *src, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint8_t *v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  char *dest;
  int v14;
  int v15;
  int v16;
  char *v17;
  int v18;
  int v19;
  char *v20;
  char *v21;
  char *v22;
  char *v23;
  char *v24;
  int v25;
  char *v26;
  int v27;

  v3 = *(uint32_t **)(a1 + 4);
  if ( v3 != *(uint32_t **)(a1 + 8) )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      v5 = *(v3 - 1);
      *v3 = *(v3 - 2);
      v3[1] = v5;
      v4 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v4 + 8;
    v6 = (v4 - 8 - (int)(uintptr_t)(src)) >> 3;
    v7 = *a3;
    v8 = a3[1];
    if ( v6 != 0 )
      memmove((void *)(v4 - 8 * v6), src, 8 * v6);
    *src = v7;
    src[1] = v8;
    return;
  }
  v9 = *(uint8_t **)a1;
  v10 = ((int)(uintptr_t)(v3) - *(uint32_t *)a1) >> 3;
  if ( v10 != 0 )
  {
    v11 = 2 * v10;
    if ( v10 > 2 * v10 || v11 > 0x1FFFFFFF )
    {
      v27 = -8;
      v12 = ((char *)src - (char *)(v9)) >> 3;
    }
    else
    {
      v27 = 16 * v10;
      dest = nullptr;
      v12 = ((char *)src - (char *)(v9)) >> 3;
      if ( v11 == 0 )
        goto LABEL_11;
    }
  }
  else
  {
    v27 = 8;
    v12 = ((char *)src - (char *)(v9)) >> 3;
  }
  v25 = v12;
  dest = (char *)opNew(v27);
  v12 = v25;
LABEL_11:
  v21 = &dest[8 * v12];
  if ( v21 != nullptr )
  {
    v14 = a3[1];
    *(uint32_t *)v21 = *a3;
    *((uint32_t *)v21 + 1) = v14;
  }
  v15 = 0;
  v16 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 3;
  if ( v16 != 0 )
  {
    v15 = 8 * v16;
    v23 = dest;
    memmove(dest, *(const void **)a1, 8 * v16);
    dest = v23;
  }
  v17 = &dest[v15 + 8];
  v18 = 0;
  v19 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(src)) >> 3;
  if ( v19 != 0 )
  {
    v18 = 8 * v19;
    v26 = v17;
    v24 = dest;
    memmove(v17, src, 8 * v19);
    dest = v24;
    v17 = v26;
  }
  v20 = &v17[v18];
  if ( *(uint32_t *)a1 != 0 )
  {
    v22 = dest;
    opDelete(*(void **)a1);
    dest = v22;
  }
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(dest);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v20);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&dest[v27]);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_7bd88c::M_erase  (binary VA: 0x14ec380)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<gaia::CrmFatigueGroup>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<gaia::CrmFatigueGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<gaia::CrmFatigueGroup>>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_7bd88c::M_erase(int a1, void **a2)
{
  void **v2;
  uint32_t *v3;
  void **v4;
  bool v5;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_string_pair_string_const_7bd88c::M_erase(
        a1,
        v2[3]);
      v3 = (uint32_t *)(v2[6]);
      v4 = (void **)v2[2];
      if ( v3 != nullptr )
      {
        v5 = v3[1]-- == 1;
        if ( v5 )
        {
          G4_VCALL<void>(v3, 8);
          v5 = v3[2]-- == 1;
          if ( v5 )
            G4_VCALL<void>(v3, 12);
        }
      }
      g4_std::string::Destroy(v2 + 4);
      opDelete(v2);
      if ( v4 == nullptr )
        break;
      v2 = v4;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_gaia_DataCenterConfig_0a0a5c::M_insert_aux  (binary VA: 0x14ecba0)
// Original: std::vector<gaia::DataCenterConfig>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_gaia_DataCenterConfig_0a0a5c::M_insert_aux(int *a1, gaia::DataCenterConfig::Self *a2, char *a3)
{
  int *v3;
  gaia::DataCenterConfig::Self *v4;
  uint8_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  bool v12;
  gaia::DataCenterConfig::Self *v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  char *v17;
  gaia::DataCenterConfig::Self *v18;
  uint8_t *v19;
  uint8_t *v20;
  gaia::DataCenterConfig::Self *v21;
  gaia::DataCenterConfig::Self *v22;
  uint8_t *v23;
  gaia::DataCenterConfig::Self *v24;
  typedef gaia::DataCenterConfig::Self *_g4_t_v25;
  typedef uint8_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int *_g4_t_v35;
  typedef size_t _g4_t_v36;
  typedef char _g4_t_v37[4];
  typedef char _g4_t_v38[4];
  typedef char _g4_t_v39[4];
  typedef char _g4_t_v40[4];
  typedef uint8_t _g4_t_v41[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v26)) > _g4_s1 ? (24u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v27)) > _g4_s2 ? (24u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v28)) > _g4_s3 ? (24u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v30)) > _g4_s5 ? (28u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v31)) > _g4_s6 ? (28u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v32)) > _g4_s7 ? (32u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v33)) > _g4_s8 ? (32u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v34)) > _g4_s9 ? (36u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v35)) > _g4_s10 ? (36u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v36)) > _g4_s11 ? (40u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v37)) > _g4_s12 ? (48u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v38)) > _g4_s13 ? (52u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v39)) > _g4_s14 ? (56u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v40)) > _g4_s15 ? (60u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v41)) > _g4_s16 ? (64u + sizeof(_g4_t_v41)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);

  v3 = a1;
  v4 = a2;
  v5 = (uint8_t *)a1[1];
  if ( v5 != (uint8_t *)a1[2] )
  {
    v6 = 0;
    if ( v5 != nullptr )
    {
      *v5 = *(v5 - 32);
      v26 = v5;
      g4_std::string::construct_copy(v5 + 4, v5 - 28);
      g4_std::string::construct_copy(v26 + 8, v26 - 24);
      g4_std::string::construct_copy(v26 + 12, v26 - 20);
      Json::Value::Construct((Json::Value::Self *)(v26 + 16), (const Json::Value::Self *)(v26 - 16));
      v6 = a1[1];
    }
    a1[1] = v6 + 32;
    v37[0] = *a3;
    g4_std::string::construct_copy(v38, a3 + 4);
    g4_std::string::construct_copy(v39, a3 + 8);
    g4_std::string::construct_copy(v40, a3 + 12);
    Json::Value::Construct((Json::Value::Self *)v41, (const Json::Value::Self *)(a3 + 16));
    v7 = a1[1];
    v30 = v7;
    v8 = v7 - 64;
    v9 = (v7 - 64 - (int)(uintptr_t)(a2)) >> 5;
    if ( v9 > 0 )
    {
      v10 = v7 - 32;
      v32 = v8;
      v34 = v9;
      v11 = v30 - 96;
      while ( 1 )
      {
        *(uint8_t *)(v10 - 32 - v30 + v32 + 64) = *(uint8_t *)(v10 - 32 - v30 + v11 + 64);
        v27 = v11;
        g4_std::string::assign_str(v10 - 28, v10 - 60);
        g4_std::string::assign_str(v10 - 24, v10 - 56);
        g4_std::string::assign_str(v10 - 20, v10 - 52);
        Json::Value::opAssign((Json::Value::Self *)(v10 - 16), (const Json::Value::Self *)(v10 - 48));
        v12 = v34-- == 1;
        v11 = v27;
        if ( v12 )
          break;
        v10 -= 32;
      }
    }
    *(uint8_t *)a2 = v37[0];
    g4_std::string::assign_str((char *)a2 + 4, v38);
    g4_std::string::assign_str((char *)a2 + 8, v39);
    g4_std::string::assign_str((char *)a2 + 12, v40);
    Json::Value::opAssign((gaia::DataCenterConfig::Self *)((char *)a2 + 16), (const Json::Value::Self *)v41);
    gaia::DataCenterConfig::Destroy((gaia::DataCenterConfig::Self *)v37);
    return;
  }
  v13 = (gaia::DataCenterConfig::Self *)*a1;
  v14 = (int)(uintptr_t)(&v5[-*a1]) >> 5;
  if ( v14 != 0 )
  {
    v15 = 2 * v14;
    if ( v14 > 2 * v14 || v15 > 0x7FFFFFF )
    {
      v36 = 0xFFFFFFE0;
      v16 = (a2 - v13) >> 5;
    }
    else
    {
      v36 = v14 << 6;
      v16 = (a2 - v13) >> 5;
      if ( v15 == 0 )
      {
        v33 = 32;
        v31 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v36 = 32;
    v16 = (a2 - v13) >> 5;
  }
  v28 = v16;
  v31 = opNew(v36);
  v33 = v31 + 32;
  v16 = v28;
LABEL_13:
  v17 = (char *)(v31 + 32 * v16);
  if ( v17 != nullptr )
  {
    *v17 = *a3;
    v29 = v17;
    g4_std::string::construct_copy(v17 + 4, a3 + 4);
    g4_std::string::construct_copy(v29 + 8, a3 + 8);
    g4_std::string::construct_copy(v29 + 12, a3 + 12);
    Json::Value::Construct((Json::Value::Self *)(v29 + 16), (const Json::Value::Self *)(a3 + 16));
  }
  v18 = (gaia::DataCenterConfig::Self *)*a1;
  if ( (gaia::DataCenterConfig::Self *)*a1 != a2 )
  {
    v19 = (uint8_t *)v31;
    do
    {
      if ( v19 != nullptr )
      {
        *v19 = *(uint8_t *)v18;
        g4_std::string::construct_copy(v19 + 4, (char *)v18 + 4);
        g4_std::string::construct_copy(v19 + 8, (char *)v18 + 8);
        g4_std::string::construct_copy(v19 + 12, (char *)v18 + 12);
        Json::Value::Construct((Json::Value::Self *)(v19 + 16), (gaia::DataCenterConfig::Self *)((char *)v18 + 16));
      }
      v18 = (gaia::DataCenterConfig::Self *)((char *)v18 + 32);
      v19 += 32;
    }
    while ( v18 != a2 );
    v4 = a2;
    v20 = v19 + 32;
    v3 = a1;
    v33 = (int)(uintptr_t)(v20);
  }
  v21 = (gaia::DataCenterConfig::Self *)v3[1];
  if ( v21 != a2 )
  {
    v35 = v3;
    v22 = (gaia::DataCenterConfig::Self *)v3[1];
    v23 = (uint8_t *)v33;
    do
    {
      if ( v23 != nullptr )
      {
        *v23 = *(uint8_t *)v4;
        g4_std::string::construct_copy(v23 + 4, (char *)v4 + 4);
        g4_std::string::construct_copy(v23 + 8, (char *)v4 + 8);
        g4_std::string::construct_copy(v23 + 12, (char *)v4 + 12);
        Json::Value::Construct((Json::Value::Self *)(v23 + 16), (gaia::DataCenterConfig::Self *)((char *)v4 + 16));
      }
      v4 = (gaia::DataCenterConfig::Self *)((char *)v4 + 32);
      v23 += 32;
    }
    while ( v22 != v4 );
    v3 = v35;
    v33 = (int)(uintptr_t)(v23);
    v21 = (gaia::DataCenterConfig::Self *)v35[1];
  }
  v24 = (gaia::DataCenterConfig::Self *)*v3;
  if ( (gaia::DataCenterConfig::Self *)*v3 != v21 )
  {
    do
    {
      v25 = v24;
      v24 = (gaia::DataCenterConfig::Self *)((char *)v24 + 32);
      gaia::DataCenterConfig::Destroy(v25);
    }
    while ( v24 != v21 );
    v24 = (gaia::DataCenterConfig::Self *)*v3;
  }
  if ( v24 != nullptr )
    opDelete(v24);
  *v3 = v31;
  v3[1] = v33;
  v3[2] = v36 + v31;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_erase  (binary VA: 0x14ed400)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>>,std::_Select1st<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>>>,std::less<int>,std::allocator<std::pair<int const,std::vector<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<Json::Value>::SCallback>>>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_erase(int a1, void **a2)
{
  void **v2;
  void **v3;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      g4_std::Rb_tree_int_pair_int_const_vecto_b93fdb::M_erase(
        a1,
        (void **)(v2[3]));
      v3 = (void **)v2[2];
      if ( v2[5] != nullptr )
        opDelete(v2[5]);
      opDelete(v2);
      if ( v3 == nullptr )
        break;
      v2 = v3;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Deque_base_unsigned_int_f0086f::M_initialize_map  (binary VA: 0x14ed4e0)
// Original: std::_Deque_base<unsigned int>::_M_initialize_map
// ----------------------------------------------------------------------------
int g4_std::Deque_base_unsigned_int_f0086f::M_initialize_map(std::_Deque_base<unsigned int> *self, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  int v5;
  int *v6;
  unsigned int v7;
  int *v8;
  int v9;
  int v10;
  int result;
  int *v12;

  v2 = (a2 >> 7) + 1;
  v3 = (a2 >> 7) + 3;
  if ( v3 < 8 )
    v3 = 8;
  *((uint32_t *)self + 1) = v3;
  v4 = opNew(4 * v3);
  v5 = *((uint32_t *)self + 1);
  *(uint32_t *)self = v4;
  v6 = (int *)(v4 + 4 * ((v5 - v2) >> 1));
  v12 = v6;
  v7 = (unsigned int)(uintptr_t)(&v6[v2]);
  if ( (unsigned int)(uintptr_t)(v6) < v7 )
  {
    v8 = v6;
    do
      *v8++ = opNew(0x200u);
    while ( v7 > (unsigned int)(uintptr_t)(v8) );
  }
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v12);
  v9 = *v12;
  *((uint32_t *)self + 3) = *v12;
  *((uint32_t *)self + 4) = v9 + 512;
  *((uint32_t *)self + 9) = v7 - 4;
  v10 = *(uint32_t *)(v7 - 4);
  *((uint32_t *)self + 2) = v9;
  *((uint32_t *)self + 7) = v10;
  *((uint32_t *)self + 8) = v10 + 512;
  result = v10 + 4 * (a2 & 0x7F);
  *((uint32_t *)self + 6) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Deque_base_Json_Value_e60cac::M_initialize_map  (binary VA: 0x14ed590)
// Original: std::_Deque_base<Json::Value>::_M_initialize_map
// ----------------------------------------------------------------------------
int g4_std::Deque_base_Json_Value_e60cac::M_initialize_map(std::_Deque_base<Json::Value::Self> *self, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  int v5;
  int *v6;
  unsigned int v7;
  int *v8;
  int v9;
  int v10;
  int result;
  int *v12;

  v2 = (a2 >> 5) + 1;
  v3 = (a2 >> 5) + 3;
  if ( v3 < 8 )
    v3 = 8;
  *((uint32_t *)self + 1) = v3;
  v4 = opNew(4 * v3);
  v5 = *((uint32_t *)self + 1);
  *(uint32_t *)self = v4;
  v6 = (int *)(v4 + 4 * ((v5 - v2) >> 1));
  v12 = v6;
  v7 = (unsigned int)(uintptr_t)(&v6[v2]);
  if ( (unsigned int)(uintptr_t)(v6) < v7 )
  {
    v8 = v6;
    do
      *v8++ = opNew(0x200u);
    while ( v7 > (unsigned int)(uintptr_t)(v8) );
  }
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v12);
  v9 = *v12;
  *((uint32_t *)self + 3) = *v12;
  *((uint32_t *)self + 4) = v9 + 512;
  *((uint32_t *)self + 9) = v7 - 4;
  v10 = *(uint32_t *)(v7 - 4);
  *((uint32_t *)self + 2) = v9;
  *((uint32_t *)self + 7) = v10;
  result = v10 + 16 * (a2 & 0x1F);
  *((uint32_t *)self + 6) = result;
  *((uint32_t *)self + 8) = v10 + 512;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_7bd88c::M_insert  (binary VA: 0x14ed650)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<gaia::CrmFatigueGroup>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<gaia::CrmFatigueGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<gaia::CrmFatigueGroup>>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_7bd88c::M_insert(int *a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5;
  int v6;
  int v7;
  size_t v9;
  size_t n;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  size_t v15;

  LOBYTE(v5) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v9 = *(uint32_t *)(*(uint32_t *)a5 - 12);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v15 = n;
    if ( n > v9 )
      n = *(uint32_t *)(*(uint32_t *)a5 - 12);
    v11 = memcmp(*(const void **)a5, *(const void **)(a4 + 16), n);
    v12 = v9 - v15;
    if ( v11 != 0 )
      v12 = v11;
    v5 = v12 >> 31;
  }
  v6 = opNew(0x1Cu);
  if ( v6 != -16 )
  {
    v13 = v6;
    g4_std::string::construct_copy(v6 + 16, a5);
    v6 = v13;
    *(uint32_t *)(v13 + 20) = *(uint32_t *)(a5 + 4);
    v7 = *(uint32_t *)(a5 + 8);
    *(uint32_t *)(v13 + 24) = v7;
    if ( v7 != 0 )
      ++*(uint32_t *)(v7 + 4);
  }
  v14 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v14;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::find_if_Deque_iterator_unsigned_9d8b9b  (binary VA: 0x14ed760)
// Original: std::__find_if<std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>,boost::_bi::bind_t<bool,boost::_mfi::cmf2<bool,gaia::CrmFatigueGroup,unsigned int,int>,boost::_bi::list3<boost::_bi::value<gaia::CrmFatigueGroup*>,boost::arg<1>,boost::_bi::value<int>>>>
// ----------------------------------------------------------------------------
int ** g4_std::find_if_Deque_iterator_unsigned_9d8b9b(int **a1, int **a2, int *a3, char *a4, int a5, int a6, int a7)
{
  int *v7;
  uint8_t (*v8)(uint32_t *, int, int);
  int v9;
  uint32_t *v10;
  int v11;
  uint8_t (*v12)(uint32_t *, int, int);
  bool v13;
  int *v14;
  int *v15;
  int v16;
  uint8_t (*v17)(uint32_t *, int, int);
  int *v18;
  int v19;
  uint8_t (*v20)(uint32_t *, int, int);
  int v21;
  uint8_t (*v22)(uint32_t *, int, int);
  int *v23;
  int **v24;
  int **v25;
  int **v26;
  int *v27;
  int v28;
  uint32_t *v29;
  int v31;
  uint8_t (*v32)(uint32_t *, int, int);
  int *v33;
  int *v34;
  int *v35;
  int *v36;
  int *v37;
  int *v38;
  int *v39;
  int *v40;
  int *v41;
  int v42;
  int v43;
  uint8_t (*v44)(int, int, int);
  int v45;

  v7 = *a2;
  v8 = (uint8_t (*)(uint32_t *, int, int))a4;
  v41 = (int *)*a3;
  v9 = ((*a3 - a3[1]) >> 2) + ((((a3[3] - (int)(uintptr_t)(a2[3])) >> 2) - 1) << 7) + a2[2] - *a2;
  v45 = v9 >> 2;
  if ( v9 >> 2 > 0 )
  {
    v10 = (uint32_t *)(a5 + a6);
    while ( 1 )
    {
      v21 = *v7;
      v22 = (uint8_t (*)(uint32_t *, int, int))a4;
      if ( ((uint8_t)(uintptr_t)(a4) & 1) != 0 )
        v22 = *(uint8_t (**)(uint32_t *, int, int))&a4[*v10 - 1];
      v13 = v22(v10, v21, a7) == 0;
      v14 = *a2;
      if ( !v13 )
        goto LABEL_33;
      v23 = v14 + 1;
      v13 = v23 == a2[2];
      *a2 = v23;
      if ( v13 )
      {
        v24 = (int **)(a2[3] + 1);
        a2[3] = (int *)v24;
        v23 = *v24;
        a2[1] = *v24;
        *a2 = v23;
        a2[2] = v23 + 128;
      }
      v11 = *v23;
      v12 = (uint8_t (*)(uint32_t *, int, int))a4;
      if ( ((uint8_t)(uintptr_t)(a4) & 1) != 0 )
        v12 = *(uint8_t (**)(uint32_t *, int, int))&a4[*v10 - 1];
      v13 = v12(v10, v11, a7) == 0;
      v14 = *a2;
      if ( !v13 )
        goto LABEL_33;
      v15 = v14 + 1;
      v13 = v15 == a2[2];
      *a2 = v15;
      if ( v13 )
      {
        v25 = (int **)(a2[3] + 1);
        a2[3] = (int *)v25;
        v15 = *v25;
        a2[1] = *v25;
        *a2 = v15;
        a2[2] = v15 + 128;
      }
      v16 = *v15;
      v17 = (uint8_t (*)(uint32_t *, int, int))a4;
      if ( ((uint8_t)(uintptr_t)(a4) & 1) != 0 )
        v17 = *(uint8_t (**)(uint32_t *, int, int))&a4[*v10 - 1];
      v13 = v17(v10, v16, a7) == 0;
      v14 = *a2;
      if ( !v13 )
        goto LABEL_33;
      v18 = v14 + 1;
      v13 = v18 == a2[2];
      *a2 = v18;
      if ( v13 )
      {
        v26 = (int **)(a2[3] + 1);
        a2[3] = (int *)v26;
        v18 = *v26;
        a2[1] = *v26;
        *a2 = v18;
        a2[2] = v18 + 128;
      }
      v19 = *v18;
      v20 = (uint8_t (*)(uint32_t *, int, int))a4;
      if ( ((uint8_t)(uintptr_t)(a4) & 1) != 0 )
        v20 = *(uint8_t (**)(uint32_t *, int, int))&a4[*v10 - 1];
      v13 = v20(v10, v19, a7) == 0;
      v14 = *a2;
      if ( !v13 )
        goto LABEL_33;
      v7 = v14 + 1;
      v13 = v7 == a2[2];
      *a2 = v7;
      if ( v13 )
      {
        v27 = a2[3];
        v13 = v45-- == 1;
        a2[3] = v27 + 1;
        v7 = (int *)v27[1];
        a2[1] = v7;
        *a2 = v7;
        a2[2] = v7 + 128;
        if ( v13 )
        {
LABEL_24:
          v41 = (int *)*a3;
          v9 = a2[2] - v7 + ((*a3 - a3[1]) >> 2) + ((((a3[3] - (int)(uintptr_t)(a2[3])) >> 2) - 1) << 7);
          break;
        }
      }
      else if ( --v45 == 0 )
      {
        goto LABEL_24;
      }
    }
  }
  if ( v9 == 2 )
  {
    v31 = (uint8_t)(uintptr_t)(a4) & 1;
    v29 = (uint32_t *)(a5 + a6);
LABEL_36:
    v43 = *v7;
    v32 = (uint8_t (*)(uint32_t *, int, int))a4;
    if ( v31 != 0 )
      v32 = *(uint8_t (**)(uint32_t *, int, int))&a4[*v29 - 1];
    v42 = v31;
    v13 = v32(v29, v43, a7) == 0;
    v28 = v42;
    v33 = *a2;
    if ( !v13 )
    {
      *a1 = v33;
      a1[1] = a2[1];
      a1[2] = a2[2];
      a1[3] = a2[3];
      return a1;
    }
    v7 = v33 + 1;
    v13 = v7 == a2[2];
    *a2 = v7;
    if ( v13 )
    {
      v36 = a2[3] + 1;
      a2[3] = v36;
      v7 = (int *)*v36;
      a2[1] = (int *)*v36;
      *a2 = v7;
      a2[2] = v7 + 128;
    }
    goto LABEL_30;
  }
  if ( v9 == 3 )
  {
    v29 = (uint32_t *)(a5 + a6);
    if ( ((uint8_t)(uintptr_t)(a4) & 1) != 0 )
      v44 = *(uint8_t (**)(int, int, int))&a4[*v29 - 1];
    else
      v44 = (uint8_t (*)(int, int, int))a4;
    v13 = v44(a5 + a6, *v7, a7) == 0;
    v31 = (uint8_t)(uintptr_t)(a4) & 1;
    v34 = *a2;
    if ( !v13 )
    {
      *a1 = v34;
      a1[1] = a2[1];
      a1[2] = a2[2];
      a1[3] = a2[3];
      return a1;
    }
    v7 = v34 + 1;
    v13 = v7 == a2[2];
    *a2 = v7;
    if ( v13 )
    {
      v37 = a2[3] + 1;
      a2[3] = v37;
      v7 = (int *)*v37;
      a2[1] = (int *)*v37;
      *a2 = v7;
      a2[2] = v7 + 128;
    }
    goto LABEL_36;
  }
  if ( v9 != 1 )
    goto LABEL_28;
  v28 = (uint8_t)(uintptr_t)(a4) & 1;
  v29 = (uint32_t *)(a5 + a6);
LABEL_30:
  if ( v28 != 0 )
    v8 = *(uint8_t (**)(uint32_t *, int, int))&a4[*v29 - 1];
  v13 = v8(v29, *v7, a7) == 0;
  v14 = *a2;
  if ( !v13 )
  {
LABEL_33:
    *a1 = v14;
    a1[1] = a2[1];
    a1[2] = a2[2];
    a1[3] = a2[3];
    return a1;
  }
  v35 = v14 + 1;
  v13 = v35 == a2[2];
  *a2 = v35;
  if ( v13 )
  {
    v38 = a2[3] + 1;
    a2[3] = v38;
    v39 = (int *)*v38;
    v40 = (int *)*a3;
    a2[1] = (int *)*v38;
    *a2 = v39;
    v41 = v40;
    a2[2] = v39 + 128;
  }
  else
  {
    v41 = (int *)*a3;
  }
LABEL_28:
  *a1 = v41;
  a1[1] = (int *)a3[1];
  a1[2] = (int *)a3[2];
  a1[3] = (int *)a3[3];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_glwebtools_Thread_27f4e7::M_fill_insert  (binary VA: 0x14edbb0)
// Original: std::vector<glwebtools::Thread *>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_glwebtools_Thread_27f4e7::M_fill_insert(int a1, char *src, unsigned int a3, int *a4)
{
  char *v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  uint32_t *v8;
  char *dest;
  int v10;
  char *v11;
  uint8_t *v12;
  unsigned int v13;
  unsigned int v14;
  bool v15;
  unsigned int v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  unsigned int i;
  int v22;
  int v23;
  char *v24;
  int v25;
  int v26;
  char *v27;
  int v28;
  int v29;
  char *v30;
  char *v31;
  int v32;
  char *v33;
  int v34;
  char *v35;
  char *v36;
  int v37;
  char *v38;

  if ( a3 == 0 )
    return;
  v4 = *(char **)(a1 + 4);
  if ( a3 <= (*(uint32_t *)(a1 + 8) - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v6 = (v4 - src) >> 2;
    if ( a3 < v6 )
    {
      v28 = 4 * a3;
      v29 = *(uint32_t *)(a1 + 4);
      v38 = &v4[-4 * a3];
      if ( (int)(4 * a3) >> 2 != 0 )
      {
        v36 = *(char **)(a1 + 4);
        memmove(v4, v38, 4 * (v28 >> 2));
        v29 = *(uint32_t *)(a1 + 4);
        v4 = v36;
      }
      *(uint32_t *)(a1 + 4) = v28 + v29;
      if ( (v38 - src) >> 2 != 0 )
        memmove(&v4[-4 * ((v38 - src) >> 2)], src, 4 * ((v38 - src) >> 2));
      v30 = &src[v28];
      if ( v30 != src )
      {
        v31 = src;
        do
        {
          *(uint32_t *)v31 = v5;
          v31 += 4;
        }
        while ( v30 != v31 );
      }
    }
    else
    {
      v7 = a3 - v6;
      v8 = *(uint32_t **)(a1 + 4);
      if ( a3 != v6 )
      {
        do
        {
          --v7;
          *v8++ = v5;
        }
        while ( v7 != 0 );
        v8 = *(uint32_t **)(a1 + 4);
      }
      dest = (char *)&v8[a3 - v6];
      v10 = 0;
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(dest);
      if ( v6 != 0 )
      {
        v10 = 4 * v6;
        v35 = v4;
        memmove(dest, src, 4 * v6);
        dest = *(char **)(a1 + 4);
        v4 = v35;
      }
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&dest[v10]);
      if ( v4 != src )
      {
        v11 = src;
        do
        {
          *(uint32_t *)v11 = v5;
          v11 += 4;
        }
        while ( v4 != v11 );
      }
    }
    return;
  }
  v12 = *(uint8_t **)a1;
  v13 = (int)(uintptr_t)(&v4[-*(uint32_t *)a1]) >> 2;
  if ( a3 > 0x3FFFFFFF - v13 )
    sub_1900180("vector::_M_fill_insert");
  v14 = a3;
  if ( v13 >= a3 )
    v14 = v13;
  v15 = __CFADD__(v14, v13);
  v16 = v14 + v13;
  if ( v15 || v16 > 0x3FFFFFFF )
  {
    v37 = -4;
    v17 = (src - (char *)(v12)) >> 2;
  }
  else
  {
    v17 = (src - (char *)(v12)) >> 2;
    if ( v16 == 0 )
    {
      v37 = 0;
      v18 = nullptr;
      goto LABEL_20;
    }
    v37 = 4 * v16;
  }
  v32 = v17;
  v18 = (char *)opNew(v37);
  v17 = v32;
LABEL_20:
  v19 = &v18[4 * v17];
  v20 = *a4;
  for ( i = a3; i != 0; --i )
  {
    *(uint32_t *)v19 = v20;
    v19 += 4;
  }
  v22 = 0;
  v23 = (int)(uintptr_t)(&src[-*(uint32_t *)a1]) >> 2;
  if ( v23 != 0 )
  {
    v34 = 4 * v23;
    memmove(v18, *(const void **)a1, 4 * v23);
    v22 = v34;
  }
  v24 = &v18[4 * a3 + v22];
  v25 = 0;
  v26 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(src)) >> 2;
  if ( v26 != 0 )
  {
    v25 = 4 * v26;
    v33 = v24;
    memmove(v24, src, 4 * v26);
    v24 = v33;
  }
  v27 = &v24[v25];
  if ( *(uint32_t *)a1 != 0 )
    opDelete(*(void **)a1);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v18);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v27);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&v18[v37]);
}



// ============================================================================
// Address:   0x14ede50 (size: 197 bytes)
// Symbol:    _ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPPN4gaia20ThreadManagerRequestESt6vectorIS4_SaIS4_EEEEPFbS4_S4_EEvT_SC_T0_
// Demangled: void std::__insertion_sort<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *)>(__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *))
// ============================================================================
void g4_std_compat::insertion_sort_08db33(
        uint32_t *src,
        uint32_t *a2,
        uint8_t (*a3)(int, uint32_t))
{
  uint32_t *v3;
  int v4;
  uint32_t *i;
  uint32_t *v6;
  int v7;
  uint32_t *v8;

  if ( a2 != src && src + 1 != a2 )
  {
    v8 = src + 1;
    do
    {
      v3 = v8;
      if ( a3(*v8, *src) != 0 )
      {
        v6 = v8 + 1;
        v7 = *v8;
        if ( v8 - src != 0 )
          memmove(&v6[-(v8 - src)], src, 4 * (v8 - src));
        *src = v7;
      }
      else
      {
        v4 = *v8;
        for ( i = v8 - 1; a3(v4, *i) != 0; --i )
        {
          *v3 = *i;
          v3 = i;
        }
        *v3 = v4;
        v6 = v8 + 1;
      }
      v8 = v6;
    }
    while ( v6 != a2 );
  }
}


// ============================================================================
// Address:   0x14edf20 (size: 1340 bytes)
// Symbol:    _ZSt19__move_median_firstIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrISsEESt6vectorIS4_SaIS4_EEEEPFbS4_S4_EEvT_SC_SC_T0_
// Demangled: void std::__move_median_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>))
// ============================================================================
template <>
int std::__move_median_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>>>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)>(
        int *a1,
        int *a2,
        int *a3,
        int (*a4)(int *, int *))
{
  uint8_t v4;
  uint32_t *v5;
  bool v6;
  uint32_t *v7;
  uint8_t v8;
  uint32_t *v9;
  uint32_t *v10;
  int result;
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  uint8_t v15;
  uint32_t *v16;
  char v17;
  uint32_t *v18;
  uint32_t *v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint8_t _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef uint8_t _g4_t_v29;
  typedef uint8_t _g4_t_v30;
  typedef uint8_t _g4_t_v31;
  typedef uint8_t _g4_t_v32;
  typedef uint8_t _g4_t_v33;
  typedef uint8_t _g4_t_v34;
  typedef uint8_t _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v20)) > _g4_s0 ? (8u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v23)) > _g4_s3 ? (8u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v24)) > _g4_s4 ? (8u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v25)) > _g4_s5 ? (8u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v26)) > _g4_s6 ? (8u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v27)) > _g4_s7 ? (8u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v28)) > _g4_s8 ? (8u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v29)) > _g4_s9 ? (8u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v30)) > _g4_s10 ? (12u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v31)) > _g4_s11 ? (12u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v32)) > _g4_s12 ? (12u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v33)) > _g4_s13 ? (12u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v34)) > _g4_s14 ? (12u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v35)) > _g4_s15 ? (12u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v36)) > _g4_s16 ? (12u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v37)) > _g4_s17 ? (12u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (16u + sizeof(_g4_t_v38)) > _g4_s18 ? (16u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (20u + sizeof(_g4_t_v39)) > _g4_s19 ? (20u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (24u + sizeof(_g4_t_v40)) > _g4_s20 ? (24u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v41)) > _g4_s21 ? (28u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v42)) > _g4_s22 ? (32u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v43)) > _g4_s23 ? (36u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v44)) > _g4_s24 ? (40u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v45)) > _g4_s25 ? (44u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v46)) > _g4_s26 ? (48u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v47)) > _g4_s27 ? (52u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v48)) > _g4_s28 ? (56u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v49)) > _g4_s29 ? (60u + sizeof(_g4_t_v49)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v50)) > _g4_s30 ? (64u + sizeof(_g4_t_v50)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v51)) > _g4_s31 ? (68u + sizeof(_g4_t_v51)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v52)) > _g4_s32 ? (72u + sizeof(_g4_t_v52)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v53)) > _g4_s33 ? (76u + sizeof(_g4_t_v53)) : _g4_s33,
    _g4_s35 = (80u + sizeof(_g4_t_v54)) > _g4_s34 ? (80u + sizeof(_g4_t_v54)) : _g4_s34,
    _g4_s36 = (84u + sizeof(_g4_t_v55)) > _g4_s35 ? (84u + sizeof(_g4_t_v55)) : _g4_s35,
    _g4_s37 = (88u + sizeof(_g4_t_v56)) > _g4_s36 ? (88u + sizeof(_g4_t_v56)) : _g4_s36,
    _g4_s38 = (92u + sizeof(_g4_t_v57)) > _g4_s37 ? (92u + sizeof(_g4_t_v57)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 68u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 92u);

  v40 = *a2;
  v41 = (uint32_t *)a2[1];
  if ( v41 != nullptr )
    ++v41[1];
  v38 = *a1;
  v39 = (uint32_t *)a1[1];
  if ( v39 != nullptr )
    ++v39[1];
  v4 = a4(&v38, &v40);
  v5 = v39;
  if ( v39 != nullptr )
  {
    v6 = v39[1]-- == 1;
    if ( v6 )
    {
      v20 = v5;
      v30 = v4;
      G4_VCALL<void>(v5, 8);
      v6 = v20[2]-- == 1;
      v4 = v30;
      if ( v6 )
      {
        (*(void (**)(uint32_t, uint32_t *))(*v20 + 12))(v30, v20);
        v4 = v30;
      }
    }
  }
  v7 = v41;
  if ( v41 != nullptr )
  {
    v6 = v41[1]-- == 1;
    if ( v6 )
    {
      v21 = v7;
      v31 = v4;
      G4_VCALL<void>(v7, 8);
      v6 = v21[2]-- == 1;
      v4 = v31;
      if ( v6 )
      {
        (*(void (**)(uint32_t, uint32_t *))(*v21 + 12))(v31, v21);
        v4 = v31;
      }
    }
  }
  if ( v4 == 0 )
  {
    v52 = *a3;
    v53 = a3[1];
    if ( v53 != 0 )
      ++*(uint32_t *)(v53 + 4);
    v50 = *a1;
    v51 = (uint32_t *)a1[1];
    if ( v51 != nullptr )
      ++v51[1];
    v15 = a4(&v50, &v52);
    v16 = v51;
    if ( v51 != nullptr )
    {
      v6 = v51[1]-- == 1;
      if ( v6 )
      {
        v24 = v16;
        v34 = v15;
        G4_VCALL<void>(v16, 8);
        v6 = v24[2]-- == 1;
        v15 = v34;
        if ( v6 )
        {
          (*(void (**)(uint32_t, uint32_t *))(*v24 + 12))(v34, v24);
          v15 = v34;
        }
      }
    }
    result = v53;
    if ( v53 != 0 )
    {
      v6 = (*(uint32_t *)(v53 + 4))-- == 1;
      if ( v6 )
      {
        v25 = (uint32_t *)result;
        v35 = v15;
        G4_VCALL<void>(result, 8);
        result = (int)(uintptr_t)v25;
        v6 = v25[2]-- == 1;
        v15 = v35;
        if ( v6 )
        {
          result = (*(int (**)(uint32_t, uint32_t *))(*v25 + 12))(v35, v25);
          v15 = v35;
        }
      }
    }
    if ( v15 != 0 )
      return result;
    v56 = *a3;
    v57 = (uint32_t *)a3[1];
    if ( v57 != nullptr )
      ++v57[1];
    v54 = *a2;
    v55 = (uint32_t *)a2[1];
    if ( v55 != nullptr )
      ++v55[1];
    v17 = a4(&v54, &v56);
    v18 = v55;
    if ( v55 != nullptr )
    {
      v6 = v55[1]-- == 1;
      if ( v6 )
      {
        v28 = v17;
        v37 = v18;
        G4_VCALL<void>(v18, 8);
        v6 = v37[2]-- == 1;
        v17 = v28;
        if ( v6 )
        {
          G4_VCALL<void>(v37, 12);
          v17 = v28;
        }
      }
    }
    v19 = v57;
    if ( v57 != nullptr )
    {
      v6 = v57[1]-- == 1;
      if ( v6 )
      {
        v27 = v17;
        v36 = v19;
        G4_VCALL<void>(v19, 8);
        v6 = v36[2]-- == 1;
        v17 = v27;
        if ( v6 )
        {
          G4_VCALL<void>(v36, 12);
          v17 = v27;
        }
      }
    }
    v6 = v17 == 0;
    v14 = *a1;
    if ( !v6 )
      goto LABEL_29;
LABEL_49:
    *a1 = *a2;
    *a2 = v14;
    result = a2[1];
    a2[1] = a1[1];
    a1[1] = result;
    return result;
  }
  v44 = *a3;
  v45 = (uint32_t *)a3[1];
  if ( v45 != nullptr )
    ++v45[1];
  v42 = *a2;
  v43 = (uint32_t *)a2[1];
  if ( v43 != nullptr )
    ++v43[1];
  v8 = a4(&v42, &v44);
  v9 = v43;
  if ( v43 != nullptr )
  {
    v6 = v43[1]-- == 1;
    if ( v6 )
    {
      v22 = v9;
      v32 = v8;
      G4_VCALL<void>(v9, 8);
      v6 = v22[2]-- == 1;
      v8 = v32;
      if ( v6 )
      {
        (*(void (**)(uint32_t, uint32_t *))(*v22 + 12))(v32, v22);
        v8 = v32;
      }
    }
  }
  v10 = v45;
  if ( v45 != nullptr )
  {
    v6 = v45[1]-- == 1;
    if ( v6 )
    {
      v23 = v10;
      v33 = v8;
      G4_VCALL<void>(v10, 8);
      v6 = v23[2]-- == 1;
      v8 = v33;
      if ( v6 )
      {
        (*(void (**)(uint32_t, uint32_t *))(*v23 + 12))(v33, v23);
        v8 = v33;
      }
    }
  }
  if ( v8 != 0 )
  {
    v14 = *a1;
    goto LABEL_49;
  }
  v48 = *a3;
  v49 = (uint32_t *)a3[1];
  if ( v49 != nullptr )
    ++v49[1];
  v46 = *a1;
  v47 = (uint32_t *)a1[1];
  if ( v47 != nullptr )
    ++v47[1];
  result = a4(&v46, &v48);
  v12 = v47;
  if ( v47 != nullptr )
  {
    v6 = v47[1]-- == 1;
    if ( v6 )
    {
      v29 = result;
      G4_VCALL<void>(v12, 8);
      v6 = v12[2]-- == 1;
      result = v29;
      if ( v6 )
      {
        G4_VCALL<void>(v12, 12);
        result = v29;
      }
    }
  }
  v13 = v49;
  if ( v49 != nullptr )
  {
    v6 = v49[1]-- == 1;
    if ( v6 )
    {
      v26 = result;
      G4_VCALL<void>(v13, 8);
      v6 = v13[2]-- == 1;
      result = v26;
      if ( v6 )
      {
        G4_VCALL<void>(v13, 12);
        result = v26;
      }
    }
  }
  if ( (uint8_t)result != 0 )
  {
    v14 = *a1;
LABEL_29:
    *a1 = *a3;
    *a3 = v14;
    result = a3[1];
    a3[1] = a1[1];
    a1[1] = result;
  }
  return result;
}


// ============================================================================
// Address:   0x14ee460 (size: 684 bytes)
// Symbol:    _ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrISsEESt6vectorIS4_SaIS4_EEEES4_PFbS4_S4_EET_SC_SC_RKT0_T1_
// Demangled: __gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>> std::__unguarded_partition<__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,boost::shared_ptr<std::string>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,boost::shared_ptr<std::string> const&,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>))
// ============================================================================
template <>
int **std::__unguarded_partition<__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>>>,boost::shared_ptr<std::string>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)>(
        int **a1,
        int *a2,
        int *a3,
        int *a4,
        int (*a5)(int *, int *))
{
  int *v5;
  uint32_t *v6;
  bool v7;
  char v8;
  uint32_t *v9;
  int *v10;
  uint32_t *v11;
  int *v12;
  char v13;
  uint32_t *v14;
  int v15;
  int v16;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v23)) > _g4_s5 ? (16u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v24)) > _g4_s6 ? (16u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v25)) > _g4_s7 ? (16u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v27)) > _g4_s8 ? (24u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v29)) > _g4_s9 ? (32u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v30)) > _g4_s10 ? (36u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v31)) > _g4_s11 ? (40u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v32)) > _g4_s12 ? (44u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v33)) > _g4_s13 ? (48u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v34)) > _g4_s14 ? (52u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v35)) > _g4_s15 ? (56u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v36)) > _g4_s16 ? (60u + sizeof(_g4_t_v36)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);

  while ( 1 )
  {
    v5 = a2;
    do
    {
      while ( 1 )
      {
        v27 = v5;
        v31 = *a4;
        v32 = (uint32_t *)a4[1];
        if ( v32 != nullptr )
          ++v32[1];
        v29 = *v5;
        v30 = (uint32_t *)v5[1];
        if ( v30 != nullptr )
          ++v30[1];
        v8 = a5(&v29, &v31);
        v9 = v30;
        if ( v30 != nullptr )
        {
          v7 = v30[1]-- == 1;
          if ( v7 )
          {
            v18 = v8;
            v22 = v9;
            G4_VCALL<void>(v9, 8);
            v7 = v22[2]-- == 1;
            v8 = v18;
            if ( v7 )
            {
              G4_VCALL<void>(v22, 12);
              v8 = v18;
            }
          }
        }
        v6 = v32;
        if ( v32 != nullptr )
        {
          v7 = v32[1]-- == 1;
          if ( v7 )
          {
            v19 = v8;
            v23 = v6;
            G4_VCALL<void>(v6, 8);
            v7 = v23[2]-- == 1;
            v8 = v19;
            if ( v7 )
              break;
          }
        }
        v5 += 2;
        if ( v8 == 0 )
          goto LABEL_15;
      }
      G4_VCALL<void>(v23, 12);
      v5 += 2;
    }
    while ( v19 != 0 );
LABEL_15:
    v10 = a3 - 2;
    do
    {
      while ( 1 )
      {
        v35 = *v10;
        v12 = v10;
        v36 = (uint32_t *)v10[1];
        if ( v36 != nullptr )
          ++v36[1];
        v33 = *a4;
        v34 = (uint32_t *)a4[1];
        if ( v34 != nullptr )
          ++v34[1];
        v13 = a5(&v33, &v35);
        v14 = v34;
        if ( v34 != nullptr )
        {
          v7 = v34[1]-- == 1;
          if ( v7 )
          {
            v20 = v13;
            v24 = v14;
            G4_VCALL<void>(v14, 8);
            v7 = v24[2]-- == 1;
            v13 = v20;
            if ( v7 )
            {
              G4_VCALL<void>(v24, 12);
              v13 = v20;
            }
          }
        }
        v11 = v36;
        if ( v36 != nullptr )
        {
          v7 = v36[1]-- == 1;
          if ( v7 )
          {
            v21 = v13;
            v25 = v11;
            G4_VCALL<void>(v11, 8);
            v7 = v25[2]-- == 1;
            v13 = v21;
            if ( v7 )
              break;
          }
        }
        v10 -= 2;
        if ( v13 == 0 )
          goto LABEL_29;
      }
      G4_VCALL<void>(v25, 12);
      v10 -= 2;
    }
    while ( v21 != 0 );
LABEL_29:
    if ( v12 <= v27 )
      break;
    a3 = v12;
    v15 = *v27;
    *v27 = *v12;
    *v12 = v15;
    v16 = v12[1];
    v12[1] = v27[1];
    v27[1] = v16;
    a2 = v27 + 2;
  }
  *a1 = v27;
  return a1;
}


// ============================================================================
// Address:   0x14ee710 (size: 573 bytes)
// Symbol:    _ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrISsEESt6vectorIS4_SaIS4_EEEEPFbS4_S4_EEvT_T0_
// Demangled: void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>))
// ============================================================================
static int g4_compat_def_2(
        uint32_t *a1,
        int (*a2)(int *, int *))
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *i;
  int result;
  bool v6;
  int v7;
  uint32_t *v8;
  uint8_t v9;
  uint32_t *v10;
  uint32_t *v11;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint8_t _g4_t_v16;
  typedef uint8_t _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v15)) > _g4_s3 ? (8u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v16)) > _g4_s4 ? (12u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v17)) > _g4_s5 ? (12u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v18)) > _g4_s6 ? (24u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v19)) > _g4_s7 ? (28u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v20)) > _g4_s8 ? (32u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v21)) > _g4_s9 ? (36u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v22)) > _g4_s10 ? (40u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v23)) > _g4_s11 ? (44u + sizeof(_g4_t_v23)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);

  v2 = (uint32_t *)a1[1];
  v19 = *a1;
  if ( v2 != nullptr )
    ++v2[1];
  v3 = a1;
  for ( i = a1 - 2; ; i -= 2 )
  {
    v22 = *i;
    v18 = i;
    v23 = i[1];
    if ( v23 != 0 )
      ++*(uint32_t *)(v23 + 4);
    v20 = v19;
    v21 = v2;
    if ( v2 != nullptr )
      ++v2[1];
    v9 = a2(&v20, &v22);
    v10 = v21;
    if ( v21 != nullptr )
    {
      v6 = v21[1]-- == 1;
      if ( v6 )
      {
        v13 = v10;
        v16 = v9;
        G4_VCALL<void>(v10, 8);
        v6 = v13[2]-- == 1;
        v9 = v16;
        if ( v6 )
        {
          (*(void (**)(uint32_t, uint32_t *))(*v13 + 12))(v16, v13);
          v9 = v16;
        }
      }
    }
    result = v23;
    if ( v23 != 0 )
    {
      v6 = (*(uint32_t *)(v23 + 4))-- == 1;
      if ( v6 )
      {
        v14 = (uint32_t *)result;
        v17 = v9;
        G4_VCALL<void>(result, 8);
        result = (int)(uintptr_t)v14;
        v6 = v14[2]-- == 1;
        v9 = v17;
        if ( v6 )
          break;
      }
    }
    if ( v9 == 0 )
      goto LABEL_22;
LABEL_7:
    v12 = *i;
    v7 = i[1];
    if ( v7 != 0 )
      ++*(uint32_t *)(v7 + 4);
    v8 = (uint32_t *)v3[1];
    *v3 = v12;
    v3[1] = v7;
    if ( v8 != nullptr )
    {
      v6 = v8[1]-- == 1;
      if ( v6 )
      {
        v15 = v8;
        G4_VCALL<void>(v8, 8);
        v6 = v15[2]-- == 1;
        if ( v6 )
          G4_VCALL<void>(v15, 12);
      }
    }
    v3 = v18;
  }
  result = (*(int (**)(uint32_t, uint32_t *))(*v14 + 12))(v17, v14);
  if ( v17 != 0 )
    goto LABEL_7;
LABEL_22:
  if ( v2 != nullptr )
    ++v2[1];
  v11 = (uint32_t *)v3[1];
  *v3 = v19;
  v3[1] = (uint32_t)(uintptr_t)v2;
  if ( v11 != nullptr )
  {
    result = v11[1] - 1;
    v6 = v11[1] == 1;
    v11[1] = result;
    if ( v6 )
    {
      G4_VCALL<void>(v11, 8);
      result = v11[2] - 1;
      v6 = v11[2] == 1;
      v11[2] = result;
      if ( v6 )
        result = G4_VCALL<int>(v11, 12);
    }
  }
  if ( v2 != nullptr )
  {
    result = v2[1] - 1;
    v6 = v2[1] == 1;
    v2[1] = result;
    if ( v6 )
    {
      G4_VCALL<void>(v2, 8);
      result = v2[2] - 1;
      v6 = v2[2] == 1;
      v2[2] = result;
      if ( v6 )
        return G4_VCALL<int>(v2, 12);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x14ee950 (size: 747 bytes)
// Symbol:    _ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrISsEESt6vectorIS4_SaIS4_EEEEPFbS4_S4_EEvT_SC_T0_
// Demangled: void std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>))
// ============================================================================
void g4_std_compat::insertion_sort_b55e4c(
        int *a1,
        int *a2,
        int (*a3)(int *, int *))
{
  int v3;
  char v4;
  uint32_t *v5;
  char v6;
  bool v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  char *v12;
  int v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef int *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v25)) > _g4_s8 ? (36u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v26)) > _g4_s9 ? (44u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v27)) > _g4_s10 ? (48u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v28)) > _g4_s11 ? (52u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v29)) > _g4_s12 ? (56u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v30)) > _g4_s13 ? (60u + sizeof(_g4_t_v30)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);

  if ( a2 != a1 )
  {
    v3 = (int)(uintptr_t)(a1 + 2);
    if ( a1 + 2 != a2 )
    {
      v21 = -v3;
      do
      {
        v29 = *a1;
        v30 = (uint32_t *)a1[1];
        if ( v30 != nullptr )
          ++v30[1];
        v27 = *(uint32_t *)v3;
        v28 = *(uint32_t **)(v3 + 4);
        if ( v28 != nullptr )
          ++v28[1];
        v4 = a3(&v27, &v29);
        v5 = v28;
        v6 = v4;
        if ( v28 != nullptr )
        {
          v7 = v28[1]-- == 1;
          if ( v7 )
          {
            v20 = v4;
            G4_VCALL<void>(v5, 8);
            v7 = v5[2]-- == 1;
            v6 = v20;
            if ( v7 )
            {
              G4_VCALL<void>(v5, 12);
              v6 = v20;
            }
          }
        }
        v8 = v30;
        if ( v30 != nullptr
          && (v7 = v30[1] == 1, --v30[1], v7)
          && (v19 = v6, G4_VCALL<void>(v8, 8), v7 = v8[2] == 1, --v8[2], v6 = v19, v7) )
        {
          G4_VCALL<void>(v8, 12);
          if ( v19 != 0 )
          {
LABEL_13:
            v26 = *(uint32_t *)v3;
            v9 = *(uint32_t **)(v3 + 4);
            v22 = v9;
            if ( v9 != nullptr )
              ++v9[1];
            v25 = (int *)(v3 + 8);
            if ( (v3 - (int)(uintptr_t)a1) >> 3 > 0 )
            {
              v10 = (uint32_t *)(v3 + 8);
              v23 = (uint32_t *)(v3 - 8);
              v24 = (uint32_t *)(v3 - 4);
              v11 = (uint32_t *)(v3 + 4);
              v17 = (v3 - (int)(uintptr_t)a1) >> 3;
              do
              {
                while ( 1 )
                {
                  v10 -= 2;
                  v12 = (char *)v10 + v21;
                  v13 = *(uint32_t *)((char *)v23 + (uintptr_t)v10 + v21);
                  v14 = *(uint32_t *)((char *)v24 + (uintptr_t)v10 + v21);
                  if ( v14 != 0 )
                    ++*(uint32_t *)(v14 + 4);
                  *v10 = v13;
                  v15 = *(uint32_t **)((char *)v11 + (uintptr_t)v12);
                  *(uint32_t *)((char *)v11 + (uintptr_t)v12) = v14;
                  if ( v15 != nullptr )
                  {
                    v7 = v15[1]-- == 1;
                    if ( v7 )
                    {
                      v18 = v11;
                      G4_VCALL<void>(v15, 8);
                      v7 = v15[2]-- == 1;
                      v11 = v18;
                      if ( v7 )
                        break;
                    }
                  }
                  if ( --v17 == 0 )
                    goto LABEL_24;
                }
                (*(void (**)(uint32_t *, uint32_t *))(*v15 + 12))(v18, v15);
                v7 = v17-- == 1;
                v11 = v18;
              }
              while ( !v7 );
            }
LABEL_24:
            if ( v22 != nullptr )
              ++v22[1];
            v16 = (uint32_t *)a1[1];
            *a1 = v26;
            a1[1] = (int)(uintptr_t)v22;
            if ( v16 != nullptr )
            {
              v7 = v16[1]-- == 1;
              if ( v7 )
              {
                G4_VCALL<void>(v16, 8);
                v7 = v16[2]-- == 1;
                if ( v7 )
                  G4_VCALL<void>(v16, 12);
              }
            }
            if ( v22 != nullptr )
            {
              v7 = v22[1]-- == 1;
              if ( v7 )
              {
                G4_VCALL<void>(v22, 8);
                v7 = v22[2]-- == 1;
                if ( v7 )
                  G4_VCALL<void>(v22, 12);
              }
            }
            goto LABEL_30;
          }
        }
        else if ( v6 != 0 )
        {
          goto LABEL_13;
        }
        g4_std_compat::unguarded_linear_insert(
          (uint32_t *)v3,
          a3);
        v25 = (int *)(v3 + 8);
LABEL_30:
        v3 = (int)(uintptr_t)v25;
        v21 -= 8;
      }
      while ( v25 != a2 );
    }
  }
}


// ============================================================================
// Address:   0x14eec40 (size: 1340 bytes)
// Symbol:    _ZSt19__move_median_firstIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrIN4gaia9CrmActionEEESt6vectorIS6_SaIS6_EEEEPFbNS3_IKS5_EESD_EEvT_SG_SG_T0_
// Demangled: void std::__move_median_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>))
// ============================================================================
template <>
int std::__move_median_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction::Self> *,std::vector<boost::shared_ptr<gaia::CrmAction::Self>>>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>)>(
        int *a1,
        int *a2,
        int *a3,
        int (*a4)(int *, int *))
{
  uint8_t v4;
  uint32_t *v5;
  bool v6;
  uint32_t *v7;
  uint8_t v8;
  uint32_t *v9;
  uint32_t *v10;
  int result;
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  uint8_t v15;
  uint32_t *v16;
  char v17;
  uint32_t *v18;
  uint32_t *v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint8_t _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef uint8_t _g4_t_v29;
  typedef uint8_t _g4_t_v30;
  typedef uint8_t _g4_t_v31;
  typedef uint8_t _g4_t_v32;
  typedef uint8_t _g4_t_v33;
  typedef uint8_t _g4_t_v34;
  typedef uint8_t _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v20)) > _g4_s0 ? (8u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v23)) > _g4_s3 ? (8u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v24)) > _g4_s4 ? (8u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v25)) > _g4_s5 ? (8u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v26)) > _g4_s6 ? (8u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v27)) > _g4_s7 ? (8u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v28)) > _g4_s8 ? (8u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v29)) > _g4_s9 ? (8u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v30)) > _g4_s10 ? (12u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v31)) > _g4_s11 ? (12u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v32)) > _g4_s12 ? (12u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v33)) > _g4_s13 ? (12u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v34)) > _g4_s14 ? (12u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v35)) > _g4_s15 ? (12u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v36)) > _g4_s16 ? (12u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v37)) > _g4_s17 ? (12u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (16u + sizeof(_g4_t_v38)) > _g4_s18 ? (16u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (20u + sizeof(_g4_t_v39)) > _g4_s19 ? (20u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (24u + sizeof(_g4_t_v40)) > _g4_s20 ? (24u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v41)) > _g4_s21 ? (28u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v42)) > _g4_s22 ? (32u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v43)) > _g4_s23 ? (36u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v44)) > _g4_s24 ? (40u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v45)) > _g4_s25 ? (44u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v46)) > _g4_s26 ? (48u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v47)) > _g4_s27 ? (52u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v48)) > _g4_s28 ? (56u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v49)) > _g4_s29 ? (60u + sizeof(_g4_t_v49)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v50)) > _g4_s30 ? (64u + sizeof(_g4_t_v50)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v51)) > _g4_s31 ? (68u + sizeof(_g4_t_v51)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v52)) > _g4_s32 ? (72u + sizeof(_g4_t_v52)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v53)) > _g4_s33 ? (76u + sizeof(_g4_t_v53)) : _g4_s33,
    _g4_s35 = (80u + sizeof(_g4_t_v54)) > _g4_s34 ? (80u + sizeof(_g4_t_v54)) : _g4_s34,
    _g4_s36 = (84u + sizeof(_g4_t_v55)) > _g4_s35 ? (84u + sizeof(_g4_t_v55)) : _g4_s35,
    _g4_s37 = (88u + sizeof(_g4_t_v56)) > _g4_s36 ? (88u + sizeof(_g4_t_v56)) : _g4_s36,
    _g4_s38 = (92u + sizeof(_g4_t_v57)) > _g4_s37 ? (92u + sizeof(_g4_t_v57)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 68u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 92u);

  v40 = *a2;
  v41 = (uint32_t *)a2[1];
  if ( v41 != nullptr )
    ++v41[1];
  v38 = *a1;
  v39 = (uint32_t *)a1[1];
  if ( v39 != nullptr )
    ++v39[1];
  v4 = a4(&v38, &v40);
  v5 = v39;
  if ( v39 != nullptr )
  {
    v6 = v39[1]-- == 1;
    if ( v6 )
    {
      v20 = v5;
      v30 = v4;
      G4_VCALL<void>(v5, 8);
      v6 = v20[2]-- == 1;
      v4 = v30;
      if ( v6 )
      {
        (*(void (**)(uint32_t, uint32_t *))(*v20 + 12))(v30, v20);
        v4 = v30;
      }
    }
  }
  v7 = v41;
  if ( v41 != nullptr )
  {
    v6 = v41[1]-- == 1;
    if ( v6 )
    {
      v21 = v7;
      v31 = v4;
      G4_VCALL<void>(v7, 8);
      v6 = v21[2]-- == 1;
      v4 = v31;
      if ( v6 )
      {
        (*(void (**)(uint32_t, uint32_t *))(*v21 + 12))(v31, v21);
        v4 = v31;
      }
    }
  }
  if ( v4 == 0 )
  {
    v52 = *a3;
    v53 = a3[1];
    if ( v53 != 0 )
      ++*(uint32_t *)(v53 + 4);
    v50 = *a1;
    v51 = (uint32_t *)a1[1];
    if ( v51 != nullptr )
      ++v51[1];
    v15 = a4(&v50, &v52);
    v16 = v51;
    if ( v51 != nullptr )
    {
      v6 = v51[1]-- == 1;
      if ( v6 )
      {
        v24 = v16;
        v34 = v15;
        G4_VCALL<void>(v16, 8);
        v6 = v24[2]-- == 1;
        v15 = v34;
        if ( v6 )
        {
          (*(void (**)(uint32_t, uint32_t *))(*v24 + 12))(v34, v24);
          v15 = v34;
        }
      }
    }
    result = v53;
    if ( v53 != 0 )
    {
      v6 = (*(uint32_t *)(v53 + 4))-- == 1;
      if ( v6 )
      {
        v25 = (uint32_t *)result;
        v35 = v15;
        G4_VCALL<void>(result, 8);
        result = (int)(uintptr_t)v25;
        v6 = v25[2]-- == 1;
        v15 = v35;
        if ( v6 )
        {
          result = (*(int (**)(uint32_t, uint32_t *))(*v25 + 12))(v35, v25);
          v15 = v35;
        }
      }
    }
    if ( v15 != 0 )
      return result;
    v56 = *a3;
    v57 = (uint32_t *)a3[1];
    if ( v57 != nullptr )
      ++v57[1];
    v54 = *a2;
    v55 = (uint32_t *)a2[1];
    if ( v55 != nullptr )
      ++v55[1];
    v17 = a4(&v54, &v56);
    v18 = v55;
    if ( v55 != nullptr )
    {
      v6 = v55[1]-- == 1;
      if ( v6 )
      {
        v28 = v17;
        v37 = v18;
        G4_VCALL<void>(v18, 8);
        v6 = v37[2]-- == 1;
        v17 = v28;
        if ( v6 )
        {
          G4_VCALL<void>(v37, 12);
          v17 = v28;
        }
      }
    }
    v19 = v57;
    if ( v57 != nullptr )
    {
      v6 = v57[1]-- == 1;
      if ( v6 )
      {
        v27 = v17;
        v36 = v19;
        G4_VCALL<void>(v19, 8);
        v6 = v36[2]-- == 1;
        v17 = v27;
        if ( v6 )
        {
          G4_VCALL<void>(v36, 12);
          v17 = v27;
        }
      }
    }
    v6 = v17 == 0;
    v14 = *a1;
    if ( !v6 )
      goto LABEL_29;
LABEL_49:
    *a1 = *a2;
    *a2 = v14;
    result = a2[1];
    a2[1] = a1[1];
    a1[1] = result;
    return result;
  }
  v44 = *a3;
  v45 = (uint32_t *)a3[1];
  if ( v45 != nullptr )
    ++v45[1];
  v42 = *a2;
  v43 = (uint32_t *)a2[1];
  if ( v43 != nullptr )
    ++v43[1];
  v8 = a4(&v42, &v44);
  v9 = v43;
  if ( v43 != nullptr )
  {
    v6 = v43[1]-- == 1;
    if ( v6 )
    {
      v22 = v9;
      v32 = v8;
      G4_VCALL<void>(v9, 8);
      v6 = v22[2]-- == 1;
      v8 = v32;
      if ( v6 )
      {
        (*(void (**)(uint32_t, uint32_t *))(*v22 + 12))(v32, v22);
        v8 = v32;
      }
    }
  }
  v10 = v45;
  if ( v45 != nullptr )
  {
    v6 = v45[1]-- == 1;
    if ( v6 )
    {
      v23 = v10;
      v33 = v8;
      G4_VCALL<void>(v10, 8);
      v6 = v23[2]-- == 1;
      v8 = v33;
      if ( v6 )
      {
        (*(void (**)(uint32_t, uint32_t *))(*v23 + 12))(v33, v23);
        v8 = v33;
      }
    }
  }
  if ( v8 != 0 )
  {
    v14 = *a1;
    goto LABEL_49;
  }
  v48 = *a3;
  v49 = (uint32_t *)a3[1];
  if ( v49 != nullptr )
    ++v49[1];
  v46 = *a1;
  v47 = (uint32_t *)a1[1];
  if ( v47 != nullptr )
    ++v47[1];
  result = a4(&v46, &v48);
  v12 = v47;
  if ( v47 != nullptr )
  {
    v6 = v47[1]-- == 1;
    if ( v6 )
    {
      v29 = result;
      G4_VCALL<void>(v12, 8);
      v6 = v12[2]-- == 1;
      result = v29;
      if ( v6 )
      {
        G4_VCALL<void>(v12, 12);
        result = v29;
      }
    }
  }
  v13 = v49;
  if ( v49 != nullptr )
  {
    v6 = v49[1]-- == 1;
    if ( v6 )
    {
      v26 = result;
      G4_VCALL<void>(v13, 8);
      v6 = v13[2]-- == 1;
      result = v26;
      if ( v6 )
      {
        G4_VCALL<void>(v13, 12);
        result = v26;
      }
    }
  }
  if ( (uint8_t)result != 0 )
  {
    v14 = *a1;
LABEL_29:
    *a1 = *a3;
    *a3 = v14;
    result = a3[1];
    a3[1] = a1[1];
    a1[1] = result;
  }
  return result;
}


// ============================================================================
// Address:   0x14ef180 (size: 684 bytes)
// Symbol:    _ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrIN4gaia9CrmActionEEESt6vectorIS6_SaIS6_EEEES6_PFbNS3_IKS5_EESD_EET_SG_SG_RKT0_T1_
// Demangled: __gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>> std::__unguarded_partition<__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,boost::shared_ptr<gaia::CrmAction>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,boost::shared_ptr<gaia::CrmAction> const&,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>))
// ============================================================================
template <>
int **std::__unguarded_partition<__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction::Self> *,std::vector<boost::shared_ptr<gaia::CrmAction::Self>>>,boost::shared_ptr<gaia::CrmAction::Self>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>)>(
        int **a1,
        int *a2,
        int *a3,
        int *a4,
        int (*a5)(int *, int *))
{
  int *v5;
  uint32_t *v6;
  bool v7;
  char v8;
  uint32_t *v9;
  int *v10;
  uint32_t *v11;
  int *v12;
  char v13;
  uint32_t *v14;
  int v15;
  int v16;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v23)) > _g4_s5 ? (16u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v24)) > _g4_s6 ? (16u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v25)) > _g4_s7 ? (16u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v27)) > _g4_s8 ? (24u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v29)) > _g4_s9 ? (32u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v30)) > _g4_s10 ? (36u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v31)) > _g4_s11 ? (40u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v32)) > _g4_s12 ? (44u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v33)) > _g4_s13 ? (48u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v34)) > _g4_s14 ? (52u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v35)) > _g4_s15 ? (56u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v36)) > _g4_s16 ? (60u + sizeof(_g4_t_v36)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);

  while ( 1 )
  {
    v5 = a2;
    do
    {
      while ( 1 )
      {
        v27 = v5;
        v31 = *a4;
        v32 = (uint32_t *)a4[1];
        if ( v32 != nullptr )
          ++v32[1];
        v29 = *v5;
        v30 = (uint32_t *)v5[1];
        if ( v30 != nullptr )
          ++v30[1];
        v8 = a5(&v29, &v31);
        v9 = v30;
        if ( v30 != nullptr )
        {
          v7 = v30[1]-- == 1;
          if ( v7 )
          {
            v18 = v8;
            v22 = v9;
            G4_VCALL<void>(v9, 8);
            v7 = v22[2]-- == 1;
            v8 = v18;
            if ( v7 )
            {
              G4_VCALL<void>(v22, 12);
              v8 = v18;
            }
          }
        }
        v6 = v32;
        if ( v32 != nullptr )
        {
          v7 = v32[1]-- == 1;
          if ( v7 )
          {
            v19 = v8;
            v23 = v6;
            G4_VCALL<void>(v6, 8);
            v7 = v23[2]-- == 1;
            v8 = v19;
            if ( v7 )
              break;
          }
        }
        v5 += 2;
        if ( v8 == 0 )
          goto LABEL_15;
      }
      G4_VCALL<void>(v23, 12);
      v5 += 2;
    }
    while ( v19 != 0 );
LABEL_15:
    v10 = a3 - 2;
    do
    {
      while ( 1 )
      {
        v35 = *v10;
        v12 = v10;
        v36 = (uint32_t *)v10[1];
        if ( v36 != nullptr )
          ++v36[1];
        v33 = *a4;
        v34 = (uint32_t *)a4[1];
        if ( v34 != nullptr )
          ++v34[1];
        v13 = a5(&v33, &v35);
        v14 = v34;
        if ( v34 != nullptr )
        {
          v7 = v34[1]-- == 1;
          if ( v7 )
          {
            v20 = v13;
            v24 = v14;
            G4_VCALL<void>(v14, 8);
            v7 = v24[2]-- == 1;
            v13 = v20;
            if ( v7 )
            {
              G4_VCALL<void>(v24, 12);
              v13 = v20;
            }
          }
        }
        v11 = v36;
        if ( v36 != nullptr )
        {
          v7 = v36[1]-- == 1;
          if ( v7 )
          {
            v21 = v13;
            v25 = v11;
            G4_VCALL<void>(v11, 8);
            v7 = v25[2]-- == 1;
            v13 = v21;
            if ( v7 )
              break;
          }
        }
        v10 -= 2;
        if ( v13 == 0 )
          goto LABEL_29;
      }
      G4_VCALL<void>(v25, 12);
      v10 -= 2;
    }
    while ( v21 != 0 );
LABEL_29:
    if ( v12 <= v27 )
      break;
    a3 = v12;
    v15 = *v27;
    *v27 = *v12;
    *v12 = v15;
    v16 = v12[1];
    v12[1] = v27[1];
    v27[1] = v16;
    a2 = v27 + 2;
  }
  *a1 = v27;
  return a1;
}


// ============================================================================
// Address:   0x14ef430 (size: 573 bytes)
// Symbol:    _ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrIN4gaia9CrmActionEEESt6vectorIS6_SaIS6_EEEEPFbNS3_IKS5_EESD_EEvT_T0_
// Demangled: void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>))
// ============================================================================
static int g4_compat_def_3(
        uint32_t *a1,
        int (*a2)(int *, int *))
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *i;
  int result;
  bool v6;
  int v7;
  uint32_t *v8;
  uint8_t v9;
  uint32_t *v10;
  uint32_t *v11;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint8_t _g4_t_v16;
  typedef uint8_t _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v15)) > _g4_s3 ? (8u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v16)) > _g4_s4 ? (12u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v17)) > _g4_s5 ? (12u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v18)) > _g4_s6 ? (24u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v19)) > _g4_s7 ? (28u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v20)) > _g4_s8 ? (32u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v21)) > _g4_s9 ? (36u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v22)) > _g4_s10 ? (40u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v23)) > _g4_s11 ? (44u + sizeof(_g4_t_v23)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);

  v2 = (uint32_t *)a1[1];
  v19 = *a1;
  if ( v2 != nullptr )
    ++v2[1];
  v3 = a1;
  for ( i = a1 - 2; ; i -= 2 )
  {
    v22 = *i;
    v18 = i;
    v23 = i[1];
    if ( v23 != 0 )
      ++*(uint32_t *)(v23 + 4);
    v20 = v19;
    v21 = v2;
    if ( v2 != nullptr )
      ++v2[1];
    v9 = a2(&v20, &v22);
    v10 = v21;
    if ( v21 != nullptr )
    {
      v6 = v21[1]-- == 1;
      if ( v6 )
      {
        v13 = v10;
        v16 = v9;
        G4_VCALL<void>(v10, 8);
        v6 = v13[2]-- == 1;
        v9 = v16;
        if ( v6 )
        {
          (*(void (**)(uint32_t, uint32_t *))(*v13 + 12))(v16, v13);
          v9 = v16;
        }
      }
    }
    result = v23;
    if ( v23 != 0 )
    {
      v6 = (*(uint32_t *)(v23 + 4))-- == 1;
      if ( v6 )
      {
        v14 = (uint32_t *)result;
        v17 = v9;
        G4_VCALL<void>(result, 8);
        result = (int)(uintptr_t)v14;
        v6 = v14[2]-- == 1;
        v9 = v17;
        if ( v6 )
          break;
      }
    }
    if ( v9 == 0 )
      goto LABEL_22;
LABEL_7:
    v12 = *i;
    v7 = i[1];
    if ( v7 != 0 )
      ++*(uint32_t *)(v7 + 4);
    v8 = (uint32_t *)v3[1];
    *v3 = v12;
    v3[1] = v7;
    if ( v8 != nullptr )
    {
      v6 = v8[1]-- == 1;
      if ( v6 )
      {
        v15 = v8;
        G4_VCALL<void>(v8, 8);
        v6 = v15[2]-- == 1;
        if ( v6 )
          G4_VCALL<void>(v15, 12);
      }
    }
    v3 = v18;
  }
  result = (*(int (**)(uint32_t, uint32_t *))(*v14 + 12))(v17, v14);
  if ( v17 != 0 )
    goto LABEL_7;
LABEL_22:
  if ( v2 != nullptr )
    ++v2[1];
  v11 = (uint32_t *)v3[1];
  *v3 = v19;
  v3[1] = (uint32_t)(uintptr_t)v2;
  if ( v11 != nullptr )
  {
    result = v11[1] - 1;
    v6 = v11[1] == 1;
    v11[1] = result;
    if ( v6 )
    {
      G4_VCALL<void>(v11, 8);
      result = v11[2] - 1;
      v6 = v11[2] == 1;
      v11[2] = result;
      if ( v6 )
        result = G4_VCALL<int>(v11, 12);
    }
  }
  if ( v2 != nullptr )
  {
    result = v2[1] - 1;
    v6 = v2[1] == 1;
    v2[1] = result;
    if ( v6 )
    {
      G4_VCALL<void>(v2, 8);
      result = v2[2] - 1;
      v6 = v2[2] == 1;
      v2[2] = result;
      if ( v6 )
        return G4_VCALL<int>(v2, 12);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x14ef670 (size: 747 bytes)
// Symbol:    _ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrIN4gaia9CrmActionEEESt6vectorIS6_SaIS6_EEEEPFbNS3_IKS5_EESD_EEvT_SG_T0_
// Demangled: void std::__insertion_sort<__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>))
// ============================================================================
void g4_std_compat::insertion_sort_bd9356(
        int *a1,
        int *a2,
        int (*a3)(int *, int *))
{
  int v3;
  char v4;
  uint32_t *v5;
  char v6;
  bool v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  char *v12;
  int v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef int *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v25)) > _g4_s8 ? (36u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v26)) > _g4_s9 ? (44u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v27)) > _g4_s10 ? (48u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v28)) > _g4_s11 ? (52u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v29)) > _g4_s12 ? (56u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v30)) > _g4_s13 ? (60u + sizeof(_g4_t_v30)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);

  if ( a2 != a1 )
  {
    v3 = (int)(uintptr_t)(a1 + 2);
    if ( a1 + 2 != a2 )
    {
      v21 = -v3;
      do
      {
        v29 = *a1;
        v30 = (uint32_t *)a1[1];
        if ( v30 != nullptr )
          ++v30[1];
        v27 = *(uint32_t *)v3;
        v28 = *(uint32_t **)(v3 + 4);
        if ( v28 != nullptr )
          ++v28[1];
        v4 = a3(&v27, &v29);
        v5 = v28;
        v6 = v4;
        if ( v28 != nullptr )
        {
          v7 = v28[1]-- == 1;
          if ( v7 )
          {
            v20 = v4;
            G4_VCALL<void>(v5, 8);
            v7 = v5[2]-- == 1;
            v6 = v20;
            if ( v7 )
            {
              G4_VCALL<void>(v5, 12);
              v6 = v20;
            }
          }
        }
        v8 = v30;
        if ( v30 != nullptr
          && (v7 = v30[1] == 1, --v30[1], v7)
          && (v19 = v6, G4_VCALL<void>(v8, 8), v7 = v8[2] == 1, --v8[2], v6 = v19, v7) )
        {
          G4_VCALL<void>(v8, 12);
          if ( v19 != 0 )
          {
LABEL_13:
            v26 = *(uint32_t *)v3;
            v9 = *(uint32_t **)(v3 + 4);
            v22 = v9;
            if ( v9 != nullptr )
              ++v9[1];
            v25 = (int *)(v3 + 8);
            if ( (v3 - (int)(uintptr_t)a1) >> 3 > 0 )
            {
              v10 = (uint32_t *)(v3 + 8);
              v23 = (uint32_t *)(v3 - 8);
              v24 = (uint32_t *)(v3 - 4);
              v11 = (uint32_t *)(v3 + 4);
              v17 = (v3 - (int)(uintptr_t)a1) >> 3;
              do
              {
                while ( 1 )
                {
                  v10 -= 2;
                  v12 = (char *)v10 + v21;
                  v13 = *(uint32_t *)((char *)v23 + (uintptr_t)v10 + v21);
                  v14 = *(uint32_t *)((char *)v24 + (uintptr_t)v10 + v21);
                  if ( v14 != 0 )
                    ++*(uint32_t *)(v14 + 4);
                  *v10 = v13;
                  v15 = *(uint32_t **)((char *)v11 + (uintptr_t)v12);
                  *(uint32_t *)((char *)v11 + (uintptr_t)v12) = v14;
                  if ( v15 != nullptr )
                  {
                    v7 = v15[1]-- == 1;
                    if ( v7 )
                    {
                      v18 = v11;
                      G4_VCALL<void>(v15, 8);
                      v7 = v15[2]-- == 1;
                      v11 = v18;
                      if ( v7 )
                        break;
                    }
                  }
                  if ( --v17 == 0 )
                    goto LABEL_24;
                }
                (*(void (**)(uint32_t *, uint32_t *))(*v15 + 12))(v18, v15);
                v7 = v17-- == 1;
                v11 = v18;
              }
              while ( !v7 );
            }
LABEL_24:
            if ( v22 != nullptr )
              ++v22[1];
            v16 = (uint32_t *)a1[1];
            *a1 = v26;
            a1[1] = (int)(uintptr_t)v22;
            if ( v16 != nullptr )
            {
              v7 = v16[1]-- == 1;
              if ( v7 )
              {
                G4_VCALL<void>(v16, 8);
                v7 = v16[2]-- == 1;
                if ( v7 )
                  G4_VCALL<void>(v16, 12);
              }
            }
            if ( v22 != nullptr )
            {
              v7 = v22[1]-- == 1;
              if ( v7 )
              {
                G4_VCALL<void>(v22, 8);
                v7 = v22[2]-- == 1;
                if ( v7 )
                  G4_VCALL<void>(v22, 12);
              }
            }
            goto LABEL_30;
          }
        }
        else if ( v6 != 0 )
        {
          goto LABEL_13;
        }
        g4_std_compat::unguarded_linear_insert(
          (uint32_t *)v3,
          a3);
        v25 = (int *)(v3 + 8);
LABEL_30:
        v3 = (int)(uintptr_t)v25;
        v21 -= 8;
      }
      while ( v25 != a2 );
    }
  }
}
// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert  (binary VA: 0x14ef960)
// Original: std::_Rb_tree<CredentialsType,std::pair<CredentialsType const,LoginManager::SessionCredentials>,std::_Select1st<std::pair<CredentialsType const,LoginManager::SessionCredentials>>,std::less<CredentialsType>,std::allocator<std::pair<CredentialsType const,LoginManager::SessionCredentials>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int v7;
  int v8;
  char v9;

  v9 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v9 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x1Cu);
  if ( v5 != -16 )
  {
    *(uint32_t *)(v5 + 16) = *a5;
    v7 = v5;
    g4_std::string::construct_copy(v5 + 20, a5 + 1);
    g4_std::string::construct_copy(v7 + 24, a5 + 2);
    v5 = v7;
  }
  v8 = v5;
  sub_1904970(v9, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert_unique  (binary VA: 0x14efa60)
// Original: std::_Rb_tree<CredentialsType,std::pair<CredentialsType const,LoginManager::SessionCredentials>,std::_Select1st<std::pair<CredentialsType const,LoginManager::SessionCredentials>>,std::less<CredentialsType>,std::allocator<std::pair<CredentialsType const,LoginManager::SessionCredentials>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  int v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v3[4] >= v4 )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)v3,
      (uint32_t *)a3);
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( v7[4] < *a3 )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)v7;
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert_unique  (binary VA: 0x14efb40)
// Original: std::_Rb_tree<CredentialsType,std::pair<CredentialsType const,LoginManager::SessionCredentials>,std::_Select1st<std::pair<CredentialsType const,LoginManager::SessionCredentials>>,std::less<CredentialsType>,std::allocator<std::pair<CredentialsType const,LoginManager::SessionCredentials>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= *a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert(
        a1,
        (int)(uintptr_t)a2,
        v5,
        v5,
        (uint32_t *)a4);
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert(
          a1,
          (int)(uintptr_t)a2,
          a3,
          a3,
          (uint32_t *)a4);
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert(
        a1,
        (int)(uintptr_t)a2,
        0,
        v6,
        (uint32_t *)v9);
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert_unique(
      (int)(uintptr_t)v12,
      (int)(uintptr_t)a2,
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert(
      a1,
      (int)(uintptr_t)a2,
      v8,
      v8,
      (uint32_t *)a4);
  else
    g4_std::Rb_tree_CredentialsType_pair_Cre_f6ca5d::M_insert(
      a1,
      (int)(uintptr_t)a2,
      0,
      a3,
      (uint32_t *)a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert  (binary VA: 0x14efcd0)
// Original: std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int v7;
  int v8;
  char v9;

  v9 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v9 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x18u);
  if ( v5 != -16 )
  {
    *(uint32_t *)(v5 + 16) = *a5;
    v7 = v5;
    g4_std::string::construct_copy(v5 + 20, a5 + 1);
    v5 = v7;
  }
  v8 = v5;
  sub_1904970(v9, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert_unique  (binary VA: 0x14efdb0)
// Original: std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert_unique(int a1, int a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  int v10[8];

  v3 = *(uint32_t **)(a2 + 8);
  if ( v3 == nullptr )
  {
    v3 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v3[4] )
      goto LABEL_9;
LABEL_13:
    g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert(
      v10,
      a2,
      0,
      (int)(uintptr_t)v3,
      (uint32_t *)a3);
    v9 = v10[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( v3 == *(uint32_t **)(a2 + 12) )
    goto LABEL_13;
  v7 = (uint32_t *)sub_19048F0(v3);
  if ( *a3 > v7[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)v7;
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert_unique  (binary VA: 0x14efe90)
// Original: std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int *v4;
  int v5;
  int v6;
  int v8;
  typedef int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);

  v4 = a4;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_16;
    v6 = a2[4];
    if ( *(uint32_t *)(v6 + 16) >= *a4 )
      goto LABEL_16;
    goto LABEL_18;
  }
  if ( *a4 < *(uint32_t *)(a3 + 16) )
  {
    v5 = a2[3];
    if ( v5 == a3 )
    {
      g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert(
        a1,
        (int)(uintptr_t)a2,
        v5,
        v5,
        (uint32_t *)a4);
      return a1;
    }
    v10 = *a4;
    v6 = sub_1904940(a3);
    v4 = a4;
    if ( v10 > *(uint32_t *)(v6 + 16) )
    {
      v9 = a4;
      if ( *(uint32_t *)(v6 + 12) != 0 )
      {
        g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert(
          a1,
          (int)(uintptr_t)a2,
          a3,
          a3,
          (uint32_t *)a4);
        return a1;
      }
LABEL_19:
      g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert(
        a1,
        (int)(uintptr_t)a2,
        0,
        v6,
        (uint32_t *)v9);
      return a1;
    }
LABEL_16:
    g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert_unique(
      (int)(uintptr_t)v12,
      (int)(uintptr_t)a2,
      v4);
    *a1 = v12[0];
    return a1;
  }
  if ( *a4 <= *(uint32_t *)(a3 + 16) )
  {
    *a1 = a3;
    return a1;
  }
  v6 = a2[4];
  if ( v6 == a3 )
  {
LABEL_18:
    v9 = a4;
    goto LABEL_19;
  }
  v11 = *a4;
  v8 = sub_19048E0(a3);
  v4 = a4;
  if ( v11 >= *(uint32_t *)(v8 + 16) )
    goto LABEL_16;
  if ( *(uint32_t *)(a3 + 12) != 0 )
    g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert(
      a1,
      (int)(uintptr_t)a2,
      v8,
      v8,
      (uint32_t *)a4);
  else
    g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_insert(
      a1,
      (int)(uintptr_t)a2,
      0,
      a3,
      (uint32_t *)a4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::rotate_gnu_cxx_normal_iterator_0ac33c  (binary VA: 0x14f02c0)
// Original: std::__rotate<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *>>>
// ----------------------------------------------------------------------------
void g4_std::rotate_gnu_cxx_normal_iterator_0ac33c(int *a1, int *a2, int *a3)
{
  int *dest;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int *v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int *v23;

  dest = a1;
  if ( a2 != a1 && a3 != a2 )
  {
    v22 = a3 - a1;
    v4 = a2 - a1;
    if ( v22 - v4 == v4 )
    {
      v15 = a2;
      do
      {
        v16 = *dest;
        *dest++ = *v15;
        *v15++ = v16;
      }
      while ( a2 != dest );
    }
    else
    {
      v20 = v22 - v4;
      if ( v22 - v4 <= v4 )
        goto LABEL_13;
      while ( v4 != 1 )
      {
        if ( v20 > 0 )
        {
          v5 = v20;
          v6 = &dest[v4];
          v7 = 0;
          v21 = v4;
          do
          {
            v8 = dest[v7];
            dest[v7] = v6[v7];
            v6[v7++] = v8;
          }
          while ( v7 != v5 );
          v4 = v21;
          dest += v7;
        }
        if ( v22 % v4 == 0 )
          return;
        v20 = v4;
        for ( v4 -= v22 % v4; ; v4 = v22 % v20 )
        {
          v22 = v20;
          v20 -= v4;
          if ( v20 > v4 )
            break;
LABEL_13:
          if ( v20 == 1 )
          {
            v17 = &dest[v22];
            v18 = (4 * v22 - 4) >> 2;
            v19 = *(v17 - 1);
            if ( v18 != 0 )
              memmove(&v17[-v18], dest, 4 * v18);
            *dest = v19;
            return;
          }
          v9 = &dest[v22];
          dest = &v9[-v20];
          if ( v4 > 0 )
          {
            v10 = &v9[-v20];
            v11 = 0;
            v23 = v10;
            do
            {
              ++v11;
              v12 = *(v10 - 1);
              *(v10 - 1) = *(v9 - 1);
              *(v9 - 1) = v12;
              --v10;
              --v9;
            }
            while ( v11 != v4 );
            dest = &v23[-v11];
          }
          if ( v22 % v20 == 0 )
            return;
        }
      }
      v13 = *dest;
      v14 = (4 * v22 - 4) >> 2;
      if ( v14 != 0 )
        memmove(dest, dest + 1, 4 * v14);
      dest[v22 - 1] = v13;
    }
  }
}



// ============================================================================
// Address:   0x14f0490 (size: 580 bytes)
// Symbol:    _ZSt22__merge_without_bufferIN9__gnu_cxx17__normal_iteratorIPPN4gaia20ThreadManagerRequestESt6vectorIS4_SaIS4_EEEEiPFbS4_S4_EEvT_SC_SC_T0_SD_T1_
// Demangled: void std::__merge_without_buffer<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,int,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *)>(__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,int,int,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *))
// ============================================================================
template <>
void std::__merge_without_buffer<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest::Self **,std::vector<gaia::ThreadManagerRequest::Self *>>,int,bool (*)(gaia::ThreadManagerRequest::Self *,gaia::ThreadManagerRequest::Self *)>(
        int *a1,
        int *a2,
        int a3,
        int a4,
        int a5,
        uint8_t (*a6)(int, int))
{
  int v6;
  int *v7;
  int *v8;
  int v9;
  int *v10;
  uint8_t v11;
  int v12;
  int *v13;
  int *v14;
  int *v15;
  int v16;
  int *v17;
  uint8_t v18;
  int v19;
  int *v20;
  int *v21;
  int *v22;
  int *v23;
  int *v24;
  int v25;
  int v26;

  if ( a5 != 0 && a4 != 0 )
  {
    if ( a5 + a4 == 2 )
    {
      if ( a6(*a2, *a1) != 0 )
      {
        v19 = *a1;
        *a1 = *a2;
        *a2 = v19;
      }
    }
    else
    {
      if ( a4 > a5 )
      {
        v26 = a4 / 2;
        v16 = (a3 - (int)(uintptr_t)a2) >> 2;
        v13 = &a1[a4 / 2];
        v14 = a2;
        v24 = a2;
        if ( v16 > 0 )
        {
          do
          {
            v17 = &v24[v16 >> 1];
            v22 = v13;
            v18 = a6(*v17, *v13);
            v13 = v22;
            if ( v18 != 0 )
            {
              v24 = v17 + 1;
              v16 = v16 - (v16 >> 1) - 1;
            }
            else
            {
              v16 >>= 1;
            }
          }
          while ( v16 > 0 );
          v14 = v24;
        }
        v7 = v24;
        v25 = v14 - a2;
        v12 = v25;
      }
      else
      {
        v6 = a2 - a1;
        v25 = a5 / 2;
        v23 = a1;
        v7 = &a2[a5 / 2];
        v26 = 0;
        if ( v6 > 0 )
        {
          v8 = &a2[a5 / 2];
          do
          {
            while ( 1 )
            {
              v9 = v6 >> 1;
              v10 = &v23[v6 >> 1];
              v20 = v8;
              v11 = a6(*v8, *v10);
              v8 = v20;
              if ( v11 != 0 )
                break;
              v6 = v6 - v9 - 1;
              v23 = v10 + 1;
              if ( v6 <= 0 )
                goto LABEL_10;
            }
            v6 >>= 1;
          }
          while ( v9 > 0 );
LABEL_10:
          v7 = v20;
          v26 = v23 - a1;
        }
        v12 = v7 - a2;
        v13 = v23;
      }
      v21 = v13;
      g4_std::rotate_gnu_cxx_normal_iterator_0ac33c(
        v13,
        a2,
        v7);
      v15 = &v21[v12];
      std::__merge_without_buffer<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest::Self **,std::vector<gaia::ThreadManagerRequest::Self *>>,int,bool (*)(gaia::ThreadManagerRequest::Self *,gaia::ThreadManagerRequest::Self *)>(
        a1,
        v21,
        v15,
        v26,
        v25,
        a6);
      std::__merge_without_buffer<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest::Self **,std::vector<gaia::ThreadManagerRequest::Self *>>,int,bool (*)(gaia::ThreadManagerRequest::Self *,gaia::ThreadManagerRequest::Self *)>(
        v15,
        v7,
        a3,
        a4 - v26,
        a5 - v25,
        a6);
    }
  }
}


// ============================================================================
// Address:   0x14f06e0 (size: 190 bytes)
// Symbol:    _ZSt21__inplace_stable_sortIN9__gnu_cxx17__normal_iteratorIPPN4gaia20ThreadManagerRequestESt6vectorIS4_SaIS4_EEEEPFbS4_S4_EEvT_SC_T0_
// Demangled: void std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *)>(__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *))
// ============================================================================
static void g4_compat_def_4(
        char *a1,
        char *a2,
        uint8_t (*a3)(int, int))
{
  char *v3;

  if ( a2 - a1 <= 59 )
  {
    g4_std_compat::insertion_sort_08db33(
      a1,
      a2,
      a3);
  }
  else
  {
    v3 = &a1[4 * ((a2 - a1) >> 3)];
    g4_std_compat::inplace_stable_sort(
      a1,
      (int)(uintptr_t)v3,
      (int)(uintptr_t)a3);
    g4_std_compat::inplace_stable_sort(
      v3,
      (int)(uintptr_t)a2,
      (int)(uintptr_t)a3);
    std::__merge_without_buffer<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest::Self **,std::vector<gaia::ThreadManagerRequest::Self *>>,int,bool (*)(gaia::ThreadManagerRequest::Self *,gaia::ThreadManagerRequest::Self *)>(
      (int *)a1,
      (int *)v3,
      (int)(uintptr_t)a2,
      (4 * ((a2 - a1) >> 3)) >> 2,
      (a2 - v3) >> 2,
      a3);
  }
}


// ============================================================================
// Address:   0x14f07a0 (size: 1399 bytes)
// Symbol:    _ZSt16__merge_adaptiveIN9__gnu_cxx17__normal_iteratorIPPN4gaia20ThreadManagerRequestESt6vectorIS4_SaIS4_EEEEiS5_PFbS4_S4_EEvT_SC_SC_T0_SD_T1_SD_T2_
// Demangled: void std::__merge_adaptive<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,int,gaia::ThreadManagerRequest **,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *)>(__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,int,int,gaia::ThreadManagerRequest **,int,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *))
// ============================================================================
void g4_std::merge_adaptive_Request_7859(
        int *src,
        int *a2,
        int *a3,
        int a4,
        int a5,
        char *dest,
        int a7,
        uint8_t (*a8)(int, int))
{
  char *v8;
  int v9;
  int *v10;
  int *v11;
  int v12;
  int *v13;
  uint8_t v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int *v21;
  int *v22;
  int v23;
  int v24;
  char *v25;
  char *v26;
  int v27;
  size_t n;
  int v29;
  char *v30;
  char *v31;
  char *v32;
  int *i;
  int v34;
  int v35;
  char *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int *v41;
  int *v42;
  int *v43;
  int *v44;
  int *v45;
  int *v46;
  int *v47;
  int *v48;
  int *v49;
  char *v50;
  int *v51;
  int v52;
  int v53;

  v8 = dest;
  if ( a4 > a7 || a4 > a5 )
  {
    if ( a5 <= a7 )
    {
      v29 = a3 - a2;
      if ( v29 != 0 )
        memmove(dest, a2, 4 * v29);
      v30 = &dest[4 * v29];
      if ( a2 != src )
      {
        if ( dest == v30 )
          return;
        v31 = (char *)(a2 - 1);
        v32 = v30 - 4;
        for ( i = a3 - 1; ; --i )
        {
          if ( a8(*(uint32_t *)v32, *(uint32_t *)v31) != 0 )
          {
            *i = *(uint32_t *)v31;
            if ( v31 == (char *)src )
            {
              v38 = (v32 + 4 - dest) >> 2;
              if ( v38 != 0 )
                memmove(&i[-v38], dest, 4 * v38);
              return;
            }
            v31 -= 4;
          }
          else
          {
            *i = *(uint32_t *)v32;
            if ( dest == v32 )
              return;
            v32 -= 4;
          }
        }
      }
      v40 = (v30 - dest) >> 2;
      if ( v40 != 0 )
        memmove(&a3[-v40], dest, 4 * v40);
    }
    else
    {
      if ( a4 <= a5 )
      {
        v17 = a2 - src;
        v52 = a5 / 2;
        v51 = src;
        v53 = 0;
        v49 = &a2[a5 / 2];
        if ( v17 > 0 )
        {
          do
          {
            while ( 1 )
            {
              v18 = v17 >> 1;
              v19 = &v51[v17 >> 1];
              if ( a8(*v49, *v19) != 0 )
                break;
              v17 = v17 - v18 - 1;
              v51 = v19 + 1;
              if ( v17 <= 0 )
                goto LABEL_21;
            }
            v17 >>= 1;
          }
          while ( v18 > 0 );
LABEL_21:
          v8 = dest;
          v53 = v51 - src;
        }
        v10 = v51;
      }
      else
      {
        v53 = a4 / 2;
        v9 = a3 - a2;
        v10 = &src[a4 / 2];
        v11 = a2;
        v49 = a2;
        if ( v9 > 0 )
        {
          do
          {
            while ( 1 )
            {
              v12 = v9 >> 1;
              v13 = &v49[v9 >> 1];
              v41 = v10;
              v14 = a8(*v13, *v10);
              v10 = v41;
              if ( v14 == 0 )
                break;
              v9 = v9 - v12 - 1;
              v49 = v13 + 1;
              if ( v9 <= 0 )
                goto LABEL_9;
            }
            v9 >>= 1;
          }
          while ( v12 > 0 );
LABEL_9:
          v8 = dest;
          v11 = v49;
        }
        v52 = v11 - a2;
      }
      v15 = a4 - v53;
      if ( v52 > a7 || v52 >= v15 )
      {
        if ( a7 < v15 )
        {
          v43 = v10;
          g4_std::rotate_gnu_cxx_normal_iterator_0ac33c(
            v10,
            a2,
            v49);
          v10 = v43;
          v16 = (int *)((char *)v43 + (((char *)v49 - (char *)a2) & 0xFFFFFFFC));
        }
        else
        {
          v16 = v49;
          if ( v15 != 0 )
          {
            v24 = a2 - v10;
            if ( v24 != 0 )
            {
              v47 = v10;
              memmove(v8, v10, 4 * v24);
              v10 = v47;
            }
            v25 = &v8[4 * v24];
            if ( v49 - a2 != 0 )
            {
              v48 = v10;
              memmove(v10, a2, 4 * (v49 - a2));
              v10 = v48;
            }
            v26 = v25;
            v16 = v49;
            v27 = (v26 - v8) >> 2;
            if ( v27 != 0 )
            {
              n = 4 * v27;
              v42 = v10;
              v16 = &v49[n / 0xFFFFFFFC];
              memmove(&v49[n / 0xFFFFFFFC], v8, n);
              v10 = v42;
            }
          }
        }
      }
      else
      {
        v16 = v10;
        if ( v52 != 0 )
        {
          v34 = 0;
          v35 = v49 - a2;
          if ( v35 != 0 )
          {
            v34 = 4 * v35;
            v46 = v10;
            memmove(v8, a2, 4 * v35);
            v10 = v46;
          }
          v36 = &v8[v34];
          if ( a2 - v10 != 0 )
          {
            v45 = v10;
            memmove(&v49[-(a2 - v10)], v10, 4 * (a2 - v10));
            v10 = v45;
          }
          v37 = (v36 - v8) >> 2;
          if ( v37 != 0 )
          {
            v39 = v37;
            v44 = v10;
            memmove(v10, v8, 4 * v37);
            v10 = v44;
            v16 = &v44[v39];
          }
          else
          {
            v16 = v10;
          }
        }
      }
      g4_std::merge_adaptive_Request_7859(
        src,
        v10,
        v16,
        v53,
        v52,
        v8,
        a7,
        a8);
      g4_std::merge_adaptive_Request_7859(
        v16,
        v49,
        a3,
        v15,
        a5 - v52,
        v8,
        a7,
        a8);
    }
  }
  else
  {
    v20 = a2 - src;
    if ( v20 != 0 )
    {
      memmove(dest, src, 4 * v20);
      v50 = &dest[4 * v20];
      if ( dest != v50 )
      {
        v21 = a2;
        v22 = src;
        if ( a3 == a2 )
        {
LABEL_59:
          if ( (v50 - v8) >> 2 != 0 )
            memmove(v22, v8, 4 * ((v50 - v8) >> 2));
        }
        else
        {
          while ( 1 )
          {
            if ( a8(*v21, *(uint32_t *)v8) != 0 )
            {
              v23 = *v21++;
            }
            else
            {
              v23 = *(uint32_t *)v8;
              v8 += 4;
            }
            *v22 = v23;
            if ( v8 == v50 )
              break;
            ++v22;
            if ( v21 == a3 )
              goto LABEL_59;
          }
        }
      }
    }
  }
}


// ============================================================================
// Address:   0x14f0df0 (size: 200 bytes)
// Symbol:    _ZSt12__move_mergeIPPN4gaia20ThreadManagerRequestES3_N9__gnu_cxx17__normal_iteratorIS3_St6vectorIS2_SaIS2_EEEEPFbS2_S2_EET1_T_SD_T0_SE_SC_T2_
// Demangled: __gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>> std::__move_merge<gaia::ThreadManagerRequest **,gaia::ThreadManagerRequest **,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *)>(gaia::ThreadManagerRequest **,gaia::ThreadManagerRequest **,gaia::ThreadManagerRequest **,gaia::ThreadManagerRequest **,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *))
// ============================================================================
static uint32_t *g4_compat_def_5(
        uint32_t *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        uint32_t *a6,
        uint8_t (*a7)(int, int))
{
  int *v7;
  int v10;
  int v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v18;

  v7 = a4;
  if ( a4 != a5 )
  {
    while ( a2 != a3 )
    {
      if ( a7(*v7, *a2) != 0 )
      {
        v10 = *v7++;
        *a6++ = v10;
        if ( v7 == a5 )
          break;
      }
      else
      {
        v11 = *a2++;
        *a6++ = v11;
        if ( v7 == a5 )
          break;
      }
    }
  }
  v12 = 0;
  v13 = a3 - a2;
  if ( v13 != 0 )
  {
    v18 = 4 * v13;
    memmove(a6, a2, 4 * v13);
    v12 = v18;
  }
  v14 = (char *)a6 + v12;
  v15 = 0;
  v16 = a5 - v7;
  if ( v16 != 0 )
  {
    v15 = 4 * v16;
    memmove(v14, v7, 4 * v16);
  }
  *a1 = (uint32_t)(uintptr_t)&v14[v15];
  return a1;
}


// ============================================================================
// Address:   0x14f0ec0 (size: 534 bytes)
// Symbol:    _ZSt24__merge_sort_with_bufferIN9__gnu_cxx17__normal_iteratorIPPN4gaia20ThreadManagerRequestESt6vectorIS4_SaIS4_EEEES5_PFbS4_S4_EEvT_SC_T0_T1_
// Demangled: void std::__merge_sort_with_buffer<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,gaia::ThreadManagerRequest **,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *)>(__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,gaia::ThreadManagerRequest **,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *))
// ============================================================================
void g4_std::merge_sort_with_buffer_Request(
        char *a1,
        char *a2,
        char *a3,
        uint8_t (*a4)(int, int))
{
  uint32_t *v4;
  uint32_t *i;
  char *v6;
  int *j;
  int *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int *v12;
  int *k;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v19)) > _g4_s5 ? (20u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v20)) > _g4_s6 ? (28u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);

  v19 = (a2 - a1) >> 2;
  v4 = (uint32_t *)a1;
  if ( a2 - a1 > 27 )
  {
    for ( i = (uint32_t *)a1; ; i = v4 )
    {
      v4 = i + 7;
      g4_std_compat::insertion_sort_08db33(
        i,
        i + 7,
        a4);
      if ( a2 - (char *)v4 <= 27 )
        break;
    }
  }
  g4_std_compat::insertion_sort_08db33(
    v4,
    a2,
    a4);
  if ( v19 > 7 )
  {
    v16 = 7;
    v18 = (int *)&a3[4 * v19];
    do
    {
      v17 = 2 * v16;
      if ( v19 < 2 * v16 )
      {
        v9 = (a2 - a1) >> 2;
        v6 = a3;
        v8 = (int *)a1;
      }
      else
      {
        v6 = a3;
        v14 = 2 * v16;
        for ( j = (int *)a1; ; j = v8 )
        {
          v8 = &j[v14];
          v6 = (char *)(uintptr_t)g4_std_compat::move_merge(
                 j,
                 &j[v14 - v16],
                 &j[v14 - v16],
                 &j[v14],
                 v6,
                 a4);
          v9 = (a2 - (char *)v8) >> 2;
          if ( v17 > v9 )
            break;
        }
      }
      if ( v9 > v16 )
        v9 = v16;
      g4_std_compat::move_merge(
        v8,
        &v8[v9],
        &v8[v9],
        (int *)a2,
        v6,
        a4);
      v10 = (a2 - a1) >> 2;
      v11 = (uint32_t *)a1;
      v16 *= 4;
      v12 = (int *)a3;
      if ( 2 * v17 <= v19 )
      {
        v15 = 2 * v17;
        for ( k = (int *)a3; ; k = v12 )
        {
          v12 = &k[v15];
          g4_std_compat::move_merge(
            v20,
            k,
            &k[v15 - v17],
            &k[v15 - v17],
            &k[v15],
            v11,
            a4);
          v11 = (uint32_t *)v20[0];
          v10 = v18 - v12;
          if ( v16 > v10 )
            break;
        }
      }
      if ( v10 > v17 )
        v10 = v17;
      g4_std_compat::move_merge(
        v20,
        v12,
        &v12[v10],
        &v12[v10],
        v18,
        v11,
        a4);
    }
    while ( v19 > v16 );
  }
}


// ============================================================================
// Address:   0x14f10e0 (size: 289 bytes)
// Symbol:    _ZSt22__stable_sort_adaptiveIN9__gnu_cxx17__normal_iteratorIPPN4gaia20ThreadManagerRequestESt6vectorIS4_SaIS4_EEEES5_iPFbS4_S4_EEvT_SC_T0_T1_T2_
// Demangled: void std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,gaia::ThreadManagerRequest **,int,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *)>(__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest **,std::vector<gaia::ThreadManagerRequest *,std::allocator<gaia::ThreadManagerRequest *>>>,gaia::ThreadManagerRequest **,int,bool (*)(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *))
// ============================================================================
void g4_std::stable_sort_adaptive_Request(
        char *a1,
        char *a2,
        void *a3,
        int a4,
        uint8_t (*a5)(int, int))
{
  int v5;
  char *v6;

  v5 = (((a2 - a1) >> 2) + 1) / 2;
  v6 = &a1[4 * v5];
  if ( v5 > a4 )
  {
    g4_std::stable_sort_adaptive_Request(
      a1,
      v6,
      a3,
      a4,
      a5);
    g4_std::stable_sort_adaptive_Request(
      v6,
      a2,
      a3,
      a4,
      a5);
  }
  else
  {
    g4_std::merge_sort_with_buffer_Request(
      a1,
      v6,
      (char *)a3,
      a5);
    g4_std::merge_sort_with_buffer_Request(
      v6,
      a2,
      (char *)a3,
      a5);
  }
  g4_std::merge_adaptive_Request_7859(
    (int *)a1,
    (int *)v6,
    (int *)a2,
    (v6 - a1) >> 2,
    (a2 - v6) >> 2,
    (char *)a3,
    a4,
    a5);
}


// ============================================================================
// Address:   0x14f1210 (size: 1188 bytes)
// Symbol:    _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrISsEESt6vectorIS4_SaIS4_EEEEiS4_PFbS4_S4_EEvT_T0_SD_T1_T2_
// Demangled: void std::__adjust_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,int,boost::shared_ptr<std::string>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,int,int,boost::shared_ptr<std::string>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>))
// ============================================================================
uint32_t *g4_std::adjust_heap_str(
        int a1,
        int a2,
        int a3,
        int *a4,
        int (*a5)(int *, int *))
{
  int v5;
  int v6;
  int *v7;
  int *v8;
  uint32_t *v9;
  uint32_t *v10;
  bool v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  int i;
  uint32_t *v20;
  uint32_t *result;
  uint32_t *v22;
  int v23;
  int *v24;
  char v25;
  uint32_t *v26;
  uint32_t *v27;
  int v28;
  uint32_t *v29;
  int v30;
  uint32_t *v31;
  int *v32;
  uint32_t *v33;
  int v34;
  int v35;
  uint32_t *v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef char _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v37)) > _g4_s0 ? (0u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v38)) > _g4_s1 ? (28u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v39)) > _g4_s2 ? (28u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v40)) > _g4_s3 ? (28u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v41)) > _g4_s4 ? (28u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v42)) > _g4_s5 ? (32u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v43)) > _g4_s6 ? (32u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v44)) > _g4_s7 ? (32u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v45)) > _g4_s8 ? (32u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v46)) > _g4_s9 ? (36u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v47)) > _g4_s10 ? (36u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v48)) > _g4_s11 ? (40u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v49)) > _g4_s12 ? (40u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v50)) > _g4_s13 ? (44u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v51)) > _g4_s14 ? (48u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v52)) > _g4_s15 ? (52u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v53)) > _g4_s16 ? (56u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v54)) > _g4_s17 ? (60u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v55)) > _g4_s18 ? (64u + sizeof(_g4_t_v55)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v56)) > _g4_s19 ? (68u + sizeof(_g4_t_v56)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v57)) > _g4_s20 ? (72u + sizeof(_g4_t_v57)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v58)) > _g4_s21 ? (76u + sizeof(_g4_t_v58)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);

  v5 = a2;
  v50 = (a3 - 1) / 2;
  if ( a2 < v50 )
  {
    do
    {
      v6 = 2 * v5 + 1;
      v46 = 2 * v5 + 2;
      v7 = (int *)(a1 + 8 * v6);
      v53 = *v7;
      v54 = (uint32_t *)v7[1];
      if ( v54 != nullptr )
        ++v54[1];
      v8 = (int *)(a1 + 8 * v46);
      v51 = *v8;
      v52 = (uint32_t *)v8[1];
      if ( v52 != nullptr )
        ++v52[1];
      v48 = a5(&v51, &v53);
      v9 = v52;
      v10 = (uint32_t *)(a1 + 8 * v46);
      if ( v52 != nullptr )
      {
        v11 = v52[1]-- == 1;
        if ( v11 )
        {
          v43 = v9;
          G4_VCALL<void>(v9, 8);
          v11 = v43[2]-- == 1;
          v10 = (uint32_t *)(a1 + 8 * v46);
          if ( v11 )
          {
            G4_VCALL<void>(v43, 12);
            v10 = (uint32_t *)(a1 + 8 * v46);
          }
        }
      }
      v12 = v54;
      if ( v54 != nullptr )
      {
        v11 = v54[1]-- == 1;
        if ( v11 )
        {
          v42 = v12;
          v38 = v10;
          G4_VCALL<void>(v12, 8);
          v11 = v42[2]-- == 1;
          v10 = v38;
          if ( v11 )
          {
            G4_VCALL<void>(v42, 12);
            v10 = v38;
          }
        }
      }
      if ( v48 == 0 )
      {
        v6 = 2 * v5 + 2;
        v7 = (int *)v10;
      }
      v13 = v7[1];
      v14 = (uint32_t *)(a1 + 8 * v5);
      v15 = *v7;
      if ( v13 != 0 )
        ++*(uint32_t *)(v13 + 4);
      v16 = (uint32_t *)v14[1];
      *v14 = v15;
      v14[1] = v13;
      if ( v16 != nullptr
        && (v11 = v16[1] == 1, --v16[1], v11)
        && (G4_VCALL<void>(v16, 8), v11 = v16[2] == 1, --v16[2], v11) )
      {
        v23 = *v16;
        v37 = v16;
        v5 = v6;
        (*(void (**)(uint32_t *))(v23 + 12))(v37);
      }
      else
      {
        v5 = v6;
      }
    }
    while ( v5 < v50 );
  }
  if ( (a3 & 1) == 0 )
  {
    v17 = (a3 - 2) / 2;
    if ( v17 == v5 )
    {
      v5 = 2 * v5 + 1;
      v32 = (int *)(a1 + 8 * v5);
      v33 = (uint32_t *)(a1 + 8 * v17);
      v34 = v32[1];
      v35 = *v32;
      if ( v34 != 0 )
        ++*(uint32_t *)(v34 + 4);
      *v33 = v35;
      v36 = (uint32_t *)v33[1];
      v33[1] = v34;
      if ( v36 != nullptr )
      {
        v11 = v36[1]-- == 1;
        if ( v11 )
        {
          G4_VCALL<void>(v36, 8);
          v11 = v36[2]-- == 1;
          if ( v11 )
            G4_VCALL<void>(v36, 12);
        }
      }
    }
  }
  v49 = *a4;
  v18 = (uint32_t *)a4[1];
  if ( v18 != nullptr )
    ++v18[1];
  v47 = v18;
  for ( i = (v5 - 1) / 2; a2 < v5; i = (i - 1) / 2 )
  {
    v57 = v49;
    v58 = v47;
    if ( v47 != nullptr )
      ++v47[1];
    v24 = (int *)(a1 + 8 * i);
    v55 = *v24;
    v56 = (uint32_t *)v24[1];
    if ( v56 != nullptr )
      ++v56[1];
    v25 = a5(&v55, &v57);
    v26 = v56;
    if ( v56 != nullptr )
    {
      v11 = v56[1]-- == 1;
      if ( v11 )
      {
        v44 = v26;
        v39 = v25;
        G4_VCALL<void>(v26, 8);
        v11 = v44[2]-- == 1;
        v25 = v39;
        if ( v11 )
        {
          G4_VCALL<void>(v44, 12);
          v25 = v39;
        }
      }
    }
    v27 = v58;
    if ( v58 != nullptr )
    {
      v11 = v58[1]-- == 1;
      if ( v11 )
      {
        v45 = v27;
        v40 = v25;
        G4_VCALL<void>(v27, 8);
        v11 = v45[2]-- == 1;
        v25 = v40;
        if ( v11 )
        {
          G4_VCALL<void>(v45, 12);
          v25 = v40;
        }
      }
    }
    if ( v25 == 0 )
      break;
    v28 = *v24;
    v29 = (uint32_t *)(a1 + 8 * v5);
    v30 = v24[1];
    if ( v30 != 0 )
      ++*(uint32_t *)(v30 + 4);
    v31 = (uint32_t *)v29[1];
    *v29 = v28;
    v29[1] = v30;
    if ( v31 != nullptr )
    {
      v11 = v31[1]-- == 1;
      if ( v11 )
      {
        G4_VCALL<void>(v31, 8);
        v11 = v31[2]-- == 1;
        if ( v11 )
          G4_VCALL<void>(v31, 12);
      }
    }
    v5 = i;
  }
  v20 = v47;
  result = (uint32_t *)(a1 + 8 * v5);
  if ( v47 != nullptr )
    ++v47[1];
  v22 = (uint32_t *)result[1];
  *result = v49;
  result[1] = (uint32_t)(uintptr_t)v47;
  if ( v22 != nullptr )
  {
    result = (uint32_t *)(uintptr_t)(v22[1] - 1);
    v11 = v22[1] == 1;
    v22[1] = (uint32_t)(uintptr_t)result;
    if ( v11 )
    {
      G4_VCALL<void>(v22, 8);
      result = (uint32_t *)(uintptr_t)(v22[2] - 1);
      v11 = v22[2] == 1;
      v22[2] = (uint32_t)(uintptr_t)result;
      v20 = v47;
      if ( v11 )
      {
        result = (uint32_t *)(uintptr_t)G4_VCALL<int>(v22, 12);
        v20 = v47;
      }
    }
  }
  if ( v20 != nullptr )
  {
    result = (uint32_t *)(uintptr_t)(v20[1] - 1);
    v11 = v20[1] == 1;
    v20[1] = (uint32_t)(uintptr_t)result;
    if ( v11 )
    {
      v41 = v20;
      G4_VCALL<void>(v20, 8);
      result = (uint32_t *)(v41[2] - 1);
      v11 = v41[2] == 1;
      v41[2] = (uint32_t)(uintptr_t)result;
      if ( v11 )
        return (uint32_t *)G4_VCALL<int>(v41, 12);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x14f16c0 (size: 1110 bytes)
// Symbol:    _ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrISsEESt6vectorIS4_SaIS4_EEEEPFbS4_S4_EEvT_SC_SC_T0_
// Demangled: void std::__heap_select<__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>))
// ============================================================================
void g4_std::heap_select_str(
        int a1,
        int *a2,
        unsigned int a3,
        int (*a4)(int *, int *))
{
  int *v4;
  int v5;
  int i;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  bool v10;
  int *v11;
  uint32_t *v12;
  char *v13;
  uint8_t v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint8_t _g4_t_v27;
  typedef uint8_t _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v24)) > _g4_s3 ? (8u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v25)) > _g4_s4 ? (8u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v26)) > _g4_s5 ? (8u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v27)) > _g4_s6 ? (12u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v28)) > _g4_s7 ? (12u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v29)) > _g4_s8 ? (16u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v30)) > _g4_s9 ? (20u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v31)) > _g4_s10 ? (20u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v32)) > _g4_s11 ? (32u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v33)) > _g4_s12 ? (36u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v34)) > _g4_s13 ? (40u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v35)) > _g4_s14 ? (44u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v36)) > _g4_s15 ? (48u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v37)) > _g4_s16 ? (52u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v38)) > _g4_s17 ? (56u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v39)) > _g4_s18 ? (60u + sizeof(_g4_t_v39)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);

  v4 = (int *)a1;
  v5 = (int)(uintptr_t)a2 - a1;
  if ( (int)(uintptr_t)a2 - a1 <= 15 )
    goto LABEL_16;
  v30 = v5 >> 3;
  for ( i = ((v5 >> 3) - 2) >> 1; ; --i )
  {
    v7 = *(uint32_t **)(a1 + 4 + 8 * i);
    v8 = *(uint32_t *)(a1 + 8 * i);
    if ( v7 != nullptr )
    {
      ++v7[1];
      v36 = v8;
      v37 = v7;
      ++v7[1];
    }
    else
    {
      v36 = *(uint32_t *)(a1 + 8 * i);
      v37 = nullptr;
    }
    g4_std::adjust_heap_str(
      a1,
      i,
      v30,
      &v36,
      a4);
    v9 = v37;
    if ( v37 != nullptr )
    {
      v10 = v37[1]-- == 1;
      if ( v10 )
      {
        G4_VCALL<void>(v9, 8);
        v10 = v9[2]-- == 1;
        if ( v10 )
          break;
      }
    }
    if ( i == 0 )
      goto LABEL_14;
LABEL_8:
    if ( v7 != nullptr )
    {
      v10 = v7[1]-- == 1;
      if ( v10 )
      {
        G4_VCALL<void>(v7, 8);
        v10 = v7[2]-- == 1;
        if ( v10 )
          G4_VCALL<void>(v7, 12);
      }
    }
  }
  G4_VCALL<void>(v9, 12);
  if ( i != 0 )
    goto LABEL_8;
LABEL_14:
  v4 = (int *)a1;
  if ( v7 != nullptr )
  {
    v10 = v7[1]-- == 1;
    if ( v10 )
    {
      G4_VCALL<void>(v7, 8);
      v10 = v7[2]-- == 1;
      if ( v10 )
        G4_VCALL<void>(v7, 12);
    }
  }
LABEL_16:
  if ( a3 > (unsigned int)(uintptr_t)a2 )
  {
    v11 = a2;
    v29 = (uint32_t *)(a2 + 1);
    do
    {
      while ( 1 )
      {
        v34 = *v4;
        v35 = (uint32_t *)v4[1];
        if ( v35 != nullptr )
          ++v35[1];
        v13 = (char *)((char *)v11 - (char *)a2);
        v32 = *v11;
        v33 = (uint32_t *)v11[1];
        if ( v33 != nullptr )
          ++v33[1];
        v14 = a4(&v32, &v34);
        v15 = v33;
        if ( v33 != nullptr )
        {
          v10 = v33[1]-- == 1;
          if ( v10 )
          {
            v22 = v15;
            v27 = v14;
            G4_VCALL<void>(v15, 8);
            v10 = v22[2]-- == 1;
            v14 = v27;
            if ( v10 )
            {
              (*(void (**)(uint32_t, uint32_t *))(*v22 + 12))(v27, v22);
              v14 = v27;
            }
          }
        }
        v12 = v35;
        if ( v35 != nullptr )
        {
          v10 = v35[1]-- == 1;
          if ( v10 )
          {
            v23 = v12;
            v28 = v14;
            G4_VCALL<void>(v12, 8);
            v10 = v23[2]-- == 1;
            v14 = v28;
            if ( v10 )
              break;
          }
        }
        if ( v14 != 0 )
          goto LABEL_32;
LABEL_21:
        v11 += 2;
        if ( a3 <= (unsigned int)(uintptr_t)v11 )
          return;
      }
      (*(void (**)(uint32_t, uint32_t *))(*v23 + 12))(v28, v23);
      if ( v28 == 0 )
        goto LABEL_21;
LABEL_32:
      v31 = *v11;
      v16 = *(uint32_t **)((char *)v29 + (uint32_t)(uintptr_t)v13);
      if ( v16 != nullptr )
        ++v16[1];
      v17 = v4[1];
      v18 = *v4;
      if ( v17 != 0 )
        ++*(uint32_t *)(v17 + 4);
      *v11 = v18;
      v21 = *(uint32_t **)((char *)v29 + (uint32_t)(uintptr_t)v13);
      *(uint32_t *)((char *)v29 + (uint32_t)(uintptr_t)v13) = v17;
      if ( v21 != nullptr )
      {
        v10 = v21[1]-- == 1;
        if ( v10 )
        {
          v26 = v16;
          G4_VCALL<void>(v21, 8);
          v10 = v21[2]-- == 1;
          v16 = v26;
          if ( v10 )
          {
            G4_VCALL<void>(v21, 12);
            v16 = v26;
          }
        }
      }
      v38 = v31;
      v39 = v16;
      if ( v16 != nullptr )
        ++v16[1];
      v24 = v16;
      g4_std::adjust_heap_str(
        (int)(uintptr_t)v4,
        0,
        ((int)(uintptr_t)a2 - a1) >> 3,
        &v38,
        a4);
      v19 = v39;
      v20 = v24;
      if ( v39 != nullptr )
      {
        v10 = v39[1]-- == 1;
        if ( v10 )
        {
          G4_VCALL<void>(v19, 8);
          v10 = v19[2]-- == 1;
          v20 = v24;
          if ( v10 )
          {
            G4_VCALL<void>(v19, 12);
            v20 = v24;
          }
        }
      }
      if ( v20 == nullptr )
        goto LABEL_21;
      v10 = v20[1]-- == 1;
      if ( !v10 )
        goto LABEL_21;
      v25 = v20;
      G4_VCALL<void>(v20, 8);
      v10 = v25[2]-- == 1;
      if ( !v10 )
        goto LABEL_21;
      v11 += 2;
      G4_VCALL<void>(v25, 12);
    }
    while ( a3 > (unsigned int)(uintptr_t)v11 );
  }
}


// ============================================================================
// Address:   0x14f1b20 (size: 598 bytes)
// Symbol:    _ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrISsEESt6vectorIS4_SaIS4_EEEEiPFbS4_S4_EEvT_SC_T0_T1_
// Demangled: void std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,int,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>,std::allocator<boost::shared_ptr<std::string>>>>,int,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>))
// ============================================================================
int g4_std_compat::introsort_loop_1daf8b(
        int *a1,
        int *a2,
        int a3,
        int (*a4)(int *, int *))
{
  int *v4;
  int v5;
  int result;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  bool v11;
  uint32_t *v12;
  typedef int *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int *_g4_t_v15;
  typedef int *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v19)) > _g4_s6 ? (40u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v20)) > _g4_s7 ? (44u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v4 = a2;
  v5 = a3;
  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 135 )
  {
    if ( a3 != 0 )
    {
      while ( 1 )
      {
        --v5;
        std::__move_median_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>>>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)>(
          a1,
          &a1[2 * (result >> 4)],
          v4 - 2,
          a4);
        std::__unguarded_partition<__gnu_cxx::__normal_iterator<boost::shared_ptr<std::string> *,std::vector<boost::shared_ptr<std::string>>>,boost::shared_ptr<std::string>,bool (*)(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)>(
          &v18,
          a1 + 2,
          v4,
          a1,
          a4);
        v15 = v18;
        g4_std_compat::introsort_loop_1daf8b(
          v18,
          v4,
          v5,
          a4);
        v4 = v15;
        result = (char *)v15 - (char *)a1;
        if ( (char *)v15 - (char *)a1 <= 135 )
          break;
        if ( v5 == 0 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      g4_std::heap_select_str(
        (int)(uintptr_t)a1,
        v4,
        (unsigned int)(uintptr_t)v4,
        a4);
      v16 = v4;
      while ( 1 )
      {
        result = (char *)v16 - (char *)a1;
        if ( (char *)v16 - (char *)a1 <= 15 )
          break;
        v16 -= 2;
        v7 = (char *)v16 - (char *)v4;
        v13 = v4 - 1;
        v8 = (uint32_t *)v16[1];
        v17 = *v16;
        if ( v8 != nullptr )
          ++v8[1];
        v9 = a1[1];
        v14 = *a1;
        if ( v9 != 0 )
          ++*(uint32_t *)(v9 + 4);
        *v16 = v14;
        v10 = *(uint32_t **)((char *)v13 + v7 + 8);
        *(int *)((char *)v13 + v7 + 8) = v9;
        if ( v10 != nullptr )
        {
          v11 = v10[1]-- == 1;
          if ( v11 )
          {
            G4_VCALL<void>(v10, 8);
            v11 = v10[2]-- == 1;
            if ( v11 )
              G4_VCALL<void>(v10, 12);
          }
        }
        v19 = v17;
        v20 = v8;
        if ( v8 != nullptr )
          ++v8[1];
        g4_std::adjust_heap_str(
          (int)(uintptr_t)a1,
          0,
          ((char *)v16 - (char *)a1) >> 3,
          &v19,
          a4);
        v12 = v20;
        if ( v20 != nullptr )
        {
          v11 = v20[1]-- == 1;
          if ( v11 )
          {
            G4_VCALL<void>(v12, 8);
            v11 = v12[2]-- == 1;
            if ( v11 )
              G4_VCALL<void>(v12, 12);
          }
        }
        if ( v8 != nullptr )
        {
          v11 = v8[1]-- == 1;
          if ( v11 )
          {
            G4_VCALL<void>(v8, 8);
            v11 = v8[2]-- == 1;
            if ( v11 )
              G4_VCALL<void>(v8, 12);
          }
        }
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0x14f1d80 (size: 1188 bytes)
// Symbol:    _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrIN4gaia9CrmActionEEESt6vectorIS6_SaIS6_EEEEiS6_PFbNS3_IKS5_EESD_EEvT_T0_SH_T1_T2_
// Demangled: void std::__adjust_heap<__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,int,boost::shared_ptr<gaia::CrmAction>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,int,int,boost::shared_ptr<gaia::CrmAction>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>))
// ============================================================================
uint32_t *g4_std::adjust_heap_CrmAction(
        int a1,
        int a2,
        int a3,
        int *a4,
        int (*a5)(int *, int *))
{
  int v5;
  int v6;
  int *v7;
  int *v8;
  uint32_t *v9;
  uint32_t *v10;
  bool v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  int i;
  uint32_t *v20;
  uint32_t *result;
  uint32_t *v22;
  int v23;
  int *v24;
  char v25;
  uint32_t *v26;
  uint32_t *v27;
  int v28;
  uint32_t *v29;
  int v30;
  uint32_t *v31;
  int *v32;
  uint32_t *v33;
  int v34;
  int v35;
  uint32_t *v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef char _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v37)) > _g4_s0 ? (0u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v38)) > _g4_s1 ? (28u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v39)) > _g4_s2 ? (28u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v40)) > _g4_s3 ? (28u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v41)) > _g4_s4 ? (28u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v42)) > _g4_s5 ? (32u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v43)) > _g4_s6 ? (32u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v44)) > _g4_s7 ? (32u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v45)) > _g4_s8 ? (32u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v46)) > _g4_s9 ? (36u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v47)) > _g4_s10 ? (36u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v48)) > _g4_s11 ? (40u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v49)) > _g4_s12 ? (40u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v50)) > _g4_s13 ? (44u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v51)) > _g4_s14 ? (48u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v52)) > _g4_s15 ? (52u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v53)) > _g4_s16 ? (56u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v54)) > _g4_s17 ? (60u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v55)) > _g4_s18 ? (64u + sizeof(_g4_t_v55)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v56)) > _g4_s19 ? (68u + sizeof(_g4_t_v56)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v57)) > _g4_s20 ? (72u + sizeof(_g4_t_v57)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v58)) > _g4_s21 ? (76u + sizeof(_g4_t_v58)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);

  v5 = a2;
  v50 = (a3 - 1) / 2;
  if ( a2 < v50 )
  {
    do
    {
      v6 = 2 * v5 + 1;
      v46 = 2 * v5 + 2;
      v7 = (int *)(a1 + 8 * v6);
      v53 = *v7;
      v54 = (uint32_t *)v7[1];
      if ( v54 != nullptr )
        ++v54[1];
      v8 = (int *)(a1 + 8 * v46);
      v51 = *v8;
      v52 = (uint32_t *)v8[1];
      if ( v52 != nullptr )
        ++v52[1];
      v48 = a5(&v51, &v53);
      v9 = v52;
      v10 = (uint32_t *)(a1 + 8 * v46);
      if ( v52 != nullptr )
      {
        v11 = v52[1]-- == 1;
        if ( v11 )
        {
          v43 = v9;
          G4_VCALL<void>(v9, 8);
          v11 = v43[2]-- == 1;
          v10 = (uint32_t *)(a1 + 8 * v46);
          if ( v11 )
          {
            G4_VCALL<void>(v43, 12);
            v10 = (uint32_t *)(a1 + 8 * v46);
          }
        }
      }
      v12 = v54;
      if ( v54 != nullptr )
      {
        v11 = v54[1]-- == 1;
        if ( v11 )
        {
          v42 = v12;
          v38 = v10;
          G4_VCALL<void>(v12, 8);
          v11 = v42[2]-- == 1;
          v10 = v38;
          if ( v11 )
          {
            G4_VCALL<void>(v42, 12);
            v10 = v38;
          }
        }
      }
      if ( v48 == 0 )
      {
        v6 = 2 * v5 + 2;
        v7 = (int *)v10;
      }
      v13 = v7[1];
      v14 = (uint32_t *)(a1 + 8 * v5);
      v15 = *v7;
      if ( v13 != 0 )
        ++*(uint32_t *)(v13 + 4);
      v16 = (uint32_t *)v14[1];
      *v14 = v15;
      v14[1] = v13;
      if ( v16 != nullptr
        && (v11 = v16[1] == 1, --v16[1], v11)
        && (G4_VCALL<void>(v16, 8), v11 = v16[2] == 1, --v16[2], v11) )
      {
        v23 = *v16;
        v37 = v16;
        v5 = v6;
        (*(void (**)(uint32_t *))(v23 + 12))(v37);
      }
      else
      {
        v5 = v6;
      }
    }
    while ( v5 < v50 );
  }
  if ( (a3 & 1) == 0 )
  {
    v17 = (a3 - 2) / 2;
    if ( v17 == v5 )
    {
      v5 = 2 * v5 + 1;
      v32 = (int *)(a1 + 8 * v5);
      v33 = (uint32_t *)(a1 + 8 * v17);
      v34 = v32[1];
      v35 = *v32;
      if ( v34 != 0 )
        ++*(uint32_t *)(v34 + 4);
      *v33 = v35;
      v36 = (uint32_t *)v33[1];
      v33[1] = v34;
      if ( v36 != nullptr )
      {
        v11 = v36[1]-- == 1;
        if ( v11 )
        {
          G4_VCALL<void>(v36, 8);
          v11 = v36[2]-- == 1;
          if ( v11 )
            G4_VCALL<void>(v36, 12);
        }
      }
    }
  }
  v49 = *a4;
  v18 = (uint32_t *)a4[1];
  if ( v18 != nullptr )
    ++v18[1];
  v47 = v18;
  for ( i = (v5 - 1) / 2; a2 < v5; i = (i - 1) / 2 )
  {
    v57 = v49;
    v58 = v47;
    if ( v47 != nullptr )
      ++v47[1];
    v24 = (int *)(a1 + 8 * i);
    v55 = *v24;
    v56 = (uint32_t *)v24[1];
    if ( v56 != nullptr )
      ++v56[1];
    v25 = a5(&v55, &v57);
    v26 = v56;
    if ( v56 != nullptr )
    {
      v11 = v56[1]-- == 1;
      if ( v11 )
      {
        v44 = v26;
        v39 = v25;
        G4_VCALL<void>(v26, 8);
        v11 = v44[2]-- == 1;
        v25 = v39;
        if ( v11 )
        {
          G4_VCALL<void>(v44, 12);
          v25 = v39;
        }
      }
    }
    v27 = v58;
    if ( v58 != nullptr )
    {
      v11 = v58[1]-- == 1;
      if ( v11 )
      {
        v45 = v27;
        v40 = v25;
        G4_VCALL<void>(v27, 8);
        v11 = v45[2]-- == 1;
        v25 = v40;
        if ( v11 )
        {
          G4_VCALL<void>(v45, 12);
          v25 = v40;
        }
      }
    }
    if ( v25 == 0 )
      break;
    v28 = *v24;
    v29 = (uint32_t *)(a1 + 8 * v5);
    v30 = v24[1];
    if ( v30 != 0 )
      ++*(uint32_t *)(v30 + 4);
    v31 = (uint32_t *)v29[1];
    *v29 = v28;
    v29[1] = v30;
    if ( v31 != nullptr )
    {
      v11 = v31[1]-- == 1;
      if ( v11 )
      {
        G4_VCALL<void>(v31, 8);
        v11 = v31[2]-- == 1;
        if ( v11 )
          G4_VCALL<void>(v31, 12);
      }
    }
    v5 = i;
  }
  v20 = v47;
  result = (uint32_t *)(a1 + 8 * v5);
  if ( v47 != nullptr )
    ++v47[1];
  v22 = (uint32_t *)result[1];
  *result = v49;
  result[1] = (uint32_t)(uintptr_t)v47;
  if ( v22 != nullptr )
  {
    result = (uint32_t *)(uintptr_t)(v22[1] - 1);
    v11 = v22[1] == 1;
    v22[1] = (uint32_t)(uintptr_t)result;
    if ( v11 )
    {
      G4_VCALL<void>(v22, 8);
      result = (uint32_t *)(uintptr_t)(v22[2] - 1);
      v11 = v22[2] == 1;
      v22[2] = (uint32_t)(uintptr_t)result;
      v20 = v47;
      if ( v11 )
      {
        result = (uint32_t *)(uintptr_t)G4_VCALL<int>(v22, 12);
        v20 = v47;
      }
    }
  }
  if ( v20 != nullptr )
  {
    result = (uint32_t *)(uintptr_t)(v20[1] - 1);
    v11 = v20[1] == 1;
    v20[1] = (uint32_t)(uintptr_t)result;
    if ( v11 )
    {
      v41 = v20;
      G4_VCALL<void>(v20, 8);
      result = (uint32_t *)(v41[2] - 1);
      v11 = v41[2] == 1;
      v41[2] = (uint32_t)(uintptr_t)result;
      if ( v11 )
        return (uint32_t *)G4_VCALL<int>(v41, 12);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x14f2230 (size: 1110 bytes)
// Symbol:    _ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrIN4gaia9CrmActionEEESt6vectorIS6_SaIS6_EEEEPFbNS3_IKS5_EESD_EEvT_SG_SG_T0_
// Demangled: void std::__heap_select<__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>))
// ============================================================================
void g4_std::heap_select_CrmAction(
        int a1,
        int *a2,
        unsigned int a3,
        int (*a4)(int *, int *))
{
  int *v4;
  int v5;
  int i;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  bool v10;
  int *v11;
  uint32_t *v12;
  char *v13;
  uint8_t v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint8_t _g4_t_v27;
  typedef uint8_t _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v24)) > _g4_s3 ? (8u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v25)) > _g4_s4 ? (8u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v26)) > _g4_s5 ? (8u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v27)) > _g4_s6 ? (12u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v28)) > _g4_s7 ? (12u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v29)) > _g4_s8 ? (16u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v30)) > _g4_s9 ? (20u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v31)) > _g4_s10 ? (20u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v32)) > _g4_s11 ? (32u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v33)) > _g4_s12 ? (36u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v34)) > _g4_s13 ? (40u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v35)) > _g4_s14 ? (44u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v36)) > _g4_s15 ? (48u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v37)) > _g4_s16 ? (52u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v38)) > _g4_s17 ? (56u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v39)) > _g4_s18 ? (60u + sizeof(_g4_t_v39)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);

  v4 = (int *)a1;
  v5 = (int)(uintptr_t)a2 - a1;
  if ( (int)(uintptr_t)a2 - a1 <= 15 )
    goto LABEL_16;
  v30 = v5 >> 3;
  for ( i = ((v5 >> 3) - 2) >> 1; ; --i )
  {
    v7 = *(uint32_t **)(a1 + 4 + 8 * i);
    v8 = *(uint32_t *)(a1 + 8 * i);
    if ( v7 != nullptr )
    {
      ++v7[1];
      v36 = v8;
      v37 = v7;
      ++v7[1];
    }
    else
    {
      v36 = *(uint32_t *)(a1 + 8 * i);
      v37 = nullptr;
    }
    g4_std::adjust_heap_CrmAction(
      a1,
      i,
      v30,
      &v36,
      a4);
    v9 = v37;
    if ( v37 != nullptr )
    {
      v10 = v37[1]-- == 1;
      if ( v10 )
      {
        G4_VCALL<void>(v9, 8);
        v10 = v9[2]-- == 1;
        if ( v10 )
          break;
      }
    }
    if ( i == 0 )
      goto LABEL_14;
LABEL_8:
    if ( v7 != nullptr )
    {
      v10 = v7[1]-- == 1;
      if ( v10 )
      {
        G4_VCALL<void>(v7, 8);
        v10 = v7[2]-- == 1;
        if ( v10 )
          G4_VCALL<void>(v7, 12);
      }
    }
  }
  G4_VCALL<void>(v9, 12);
  if ( i != 0 )
    goto LABEL_8;
LABEL_14:
  v4 = (int *)a1;
  if ( v7 != nullptr )
  {
    v10 = v7[1]-- == 1;
    if ( v10 )
    {
      G4_VCALL<void>(v7, 8);
      v10 = v7[2]-- == 1;
      if ( v10 )
        G4_VCALL<void>(v7, 12);
    }
  }
LABEL_16:
  if ( a3 > (unsigned int)(uintptr_t)a2 )
  {
    v11 = a2;
    v29 = (uint32_t *)(a2 + 1);
    do
    {
      while ( 1 )
      {
        v34 = *v4;
        v35 = (uint32_t *)v4[1];
        if ( v35 != nullptr )
          ++v35[1];
        v13 = (char *)((char *)v11 - (char *)a2);
        v32 = *v11;
        v33 = (uint32_t *)v11[1];
        if ( v33 != nullptr )
          ++v33[1];
        v14 = a4(&v32, &v34);
        v15 = v33;
        if ( v33 != nullptr )
        {
          v10 = v33[1]-- == 1;
          if ( v10 )
          {
            v22 = v15;
            v27 = v14;
            G4_VCALL<void>(v15, 8);
            v10 = v22[2]-- == 1;
            v14 = v27;
            if ( v10 )
            {
              (*(void (**)(uint32_t, uint32_t *))(*v22 + 12))(v27, v22);
              v14 = v27;
            }
          }
        }
        v12 = v35;
        if ( v35 != nullptr )
        {
          v10 = v35[1]-- == 1;
          if ( v10 )
          {
            v23 = v12;
            v28 = v14;
            G4_VCALL<void>(v12, 8);
            v10 = v23[2]-- == 1;
            v14 = v28;
            if ( v10 )
              break;
          }
        }
        if ( v14 != 0 )
          goto LABEL_32;
LABEL_21:
        v11 += 2;
        if ( a3 <= (unsigned int)(uintptr_t)v11 )
          return;
      }
      (*(void (**)(uint32_t, uint32_t *))(*v23 + 12))(v28, v23);
      if ( v28 == 0 )
        goto LABEL_21;
LABEL_32:
      v31 = *v11;
      v16 = *(uint32_t **)((char *)v29 + (uint32_t)(uintptr_t)v13);
      if ( v16 != nullptr )
        ++v16[1];
      v17 = v4[1];
      v18 = *v4;
      if ( v17 != 0 )
        ++*(uint32_t *)(v17 + 4);
      *v11 = v18;
      v21 = *(uint32_t **)((char *)v29 + (uint32_t)(uintptr_t)v13);
      *(uint32_t *)((char *)v29 + (uint32_t)(uintptr_t)v13) = v17;
      if ( v21 != nullptr )
      {
        v10 = v21[1]-- == 1;
        if ( v10 )
        {
          v26 = v16;
          G4_VCALL<void>(v21, 8);
          v10 = v21[2]-- == 1;
          v16 = v26;
          if ( v10 )
          {
            G4_VCALL<void>(v21, 12);
            v16 = v26;
          }
        }
      }
      v38 = v31;
      v39 = v16;
      if ( v16 != nullptr )
        ++v16[1];
      v24 = v16;
      g4_std::adjust_heap_CrmAction(
        (int)(uintptr_t)v4,
        0,
        ((int)(uintptr_t)a2 - a1) >> 3,
        &v38,
        a4);
      v19 = v39;
      v20 = v24;
      if ( v39 != nullptr )
      {
        v10 = v39[1]-- == 1;
        if ( v10 )
        {
          G4_VCALL<void>(v19, 8);
          v10 = v19[2]-- == 1;
          v20 = v24;
          if ( v10 )
          {
            G4_VCALL<void>(v19, 12);
            v20 = v24;
          }
        }
      }
      if ( v20 == nullptr )
        goto LABEL_21;
      v10 = v20[1]-- == 1;
      if ( !v10 )
        goto LABEL_21;
      v25 = v20;
      G4_VCALL<void>(v20, 8);
      v10 = v25[2]-- == 1;
      if ( !v10 )
        goto LABEL_21;
      v11 += 2;
      G4_VCALL<void>(v25, 12);
    }
    while ( a3 > (unsigned int)(uintptr_t)v11 );
  }
}


// ============================================================================
// Address:   0x14f2690 (size: 598 bytes)
// Symbol:    _ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPN5boost10shared_ptrIN4gaia9CrmActionEEESt6vectorIS6_SaIS6_EEEEiPFbNS3_IKS5_EESD_EEvT_SG_T0_T1_
// Demangled: void std::__introsort_loop<__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,int,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>)>(__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction> *,std::vector<boost::shared_ptr<gaia::CrmAction>,std::allocator<boost::shared_ptr<gaia::CrmAction>>>>,int,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>))
// ============================================================================
int g4_std_compat::introsort_loop_3714e6(
        int *a1,
        int *a2,
        int a3,
        int (*a4)(int *, int *))
{
  int *v4;
  int v5;
  int result;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  bool v11;
  uint32_t *v12;
  typedef int *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int *_g4_t_v15;
  typedef int *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v19)) > _g4_s6 ? (40u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v20)) > _g4_s7 ? (44u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v4 = a2;
  v5 = a3;
  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 135 )
  {
    if ( a3 != 0 )
    {
      while ( 1 )
      {
        --v5;
        std::__move_median_first<__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction::Self> *,std::vector<boost::shared_ptr<gaia::CrmAction::Self>>>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>)>(
          a1,
          &a1[2 * (result >> 4)],
          v4 - 2,
          a4);
        std::__unguarded_partition<__gnu_cxx::__normal_iterator<boost::shared_ptr<gaia::CrmAction::Self> *,std::vector<boost::shared_ptr<gaia::CrmAction::Self>>>,boost::shared_ptr<gaia::CrmAction::Self>,bool (*)(boost::shared_ptr<gaia::CrmAction::Self const>,boost::shared_ptr<gaia::CrmAction::Self const>)>(
          &v18,
          a1 + 2,
          v4,
          a1,
          a4);
        v15 = v18;
        g4_std_compat::introsort_loop_3714e6(
          v18,
          v4,
          v5,
          a4);
        v4 = v15;
        result = (char *)v15 - (char *)a1;
        if ( (char *)v15 - (char *)a1 <= 135 )
          break;
        if ( v5 == 0 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      g4_std::heap_select_CrmAction(
        (int)(uintptr_t)a1,
        v4,
        (unsigned int)(uintptr_t)v4,
        a4);
      v16 = v4;
      while ( 1 )
      {
        result = (char *)v16 - (char *)a1;
        if ( (char *)v16 - (char *)a1 <= 15 )
          break;
        v16 -= 2;
        v7 = (char *)v16 - (char *)v4;
        v13 = v4 - 1;
        v8 = (uint32_t *)v16[1];
        v17 = *v16;
        if ( v8 != nullptr )
          ++v8[1];
        v9 = a1[1];
        v14 = *a1;
        if ( v9 != 0 )
          ++*(uint32_t *)(v9 + 4);
        *v16 = v14;
        v10 = *(uint32_t **)((char *)v13 + v7 + 8);
        *(int *)((char *)v13 + v7 + 8) = v9;
        if ( v10 != nullptr )
        {
          v11 = v10[1]-- == 1;
          if ( v11 )
          {
            G4_VCALL<void>(v10, 8);
            v11 = v10[2]-- == 1;
            if ( v11 )
              G4_VCALL<void>(v10, 12);
          }
        }
        v19 = v17;
        v20 = v8;
        if ( v8 != nullptr )
          ++v8[1];
        g4_std::adjust_heap_CrmAction(
          (int)(uintptr_t)a1,
          0,
          ((char *)v16 - (char *)a1) >> 3,
          &v19,
          a4);
        v12 = v20;
        if ( v20 != nullptr )
        {
          v11 = v20[1]-- == 1;
          if ( v11 )
          {
            G4_VCALL<void>(v12, 8);
            v11 = v12[2]-- == 1;
            if ( v11 )
              G4_VCALL<void>(v12, 12);
          }
        }
        if ( v8 != nullptr )
        {
          v11 = v8[1]-- == 1;
          if ( v11 )
          {
            G4_VCALL<void>(v8, 8);
            v11 = v8[2]-- == 1;
            if ( v11 )
              G4_VCALL<void>(v8, 12);
          }
        }
      }
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_14F28F0  (binary VA: 0x14f28f0)
// Original: sub_14F28F0
// ----------------------------------------------------------------------------
int * sub_14F28F0()
{
  int64_t v0; // rax
  int v1;
  int v2;
  int v3;
  int *result;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v11)) > _g4_s6 ? (32u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v15)) > _g4_s10 ? (48u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v16)) > _g4_s11 ? (52u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v17)) > _g4_s12 ? (56u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v18)) > _g4_s13 ? (60u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v19)) > _g4_s14 ? (64u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v20)) > _g4_s15 ? (68u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v21)) > _g4_s16 ? (72u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v22)) > _g4_s17 ? (76u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v23)) > _g4_s18 ? (80u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v24)) > _g4_s19 ? (84u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v25)) > _g4_s20 ? (88u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v26)) > _g4_s21 ? (92u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v27)) > _g4_s22 ? (96u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v28)) > _g4_s23 ? (100u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v29)) > _g4_s24 ? (104u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v30)) > _g4_s25 ? (108u + sizeof(_g4_t_v30)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 108u);

  sub_1900D70(&unk_211A2D4);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A2D4, &unk_20D1280);
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    dword_20D3F50 = (int)(uintptr_t)"static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A2D8, "UNKNOWN", (int)(uintptr_t)&v5);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A2D8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A2DC, "IMEI", (int)(uintptr_t)&v5 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A2DC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A2E0, "HDIDFV", (int)(uintptr_t)&v5 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A2E0, &unk_20D1280);
  dword_211A2E4 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_211A2E8 = v0;
  dword_211A2EC = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  dword_211A2F0 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)&off_20492E8;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_211A2F4 = (int)(uintptr_t)&dword_20D3F60;
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)&off_2049328;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_211A2F8 = (int)(uintptr_t)&dword_20D3F78;
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)&off_2049368;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_211A2FC = (int)(uintptr_t)&dword_20D3F88;
  dword_211A300 = (int)(uintptr_t)&dword_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A300, &unk_20D1280);
  dword_211A304 = (int)(uintptr_t)&dword_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A304, &unk_20D1280);
  dword_211A308 = (int)(uintptr_t)&dword_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A308, &unk_20D1280);
  dword_211A30C = (int)(uintptr_t)&dword_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A30C, &unk_20D1280);
  dword_211A310 = (int)(uintptr_t)&dword_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A310, &unk_20D1280);
  dword_211A314 = (int)(uintptr_t)&dword_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A314, &unk_20D1280);
  dword_211A318 = (int)(uintptr_t)&dword_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A318, &unk_20D1280);
  dword_211A31C = (int)(uintptr_t)&dword_213B814;
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A31C, &unk_20D1280);
  dword_211A320 = opNewArray(0x10u);
  glwebtools::Mutex::Construct((glwebtools::Mutex::Self *)&gaia::CrmManager::m_mutex);
  __cxa_atexit((void (*)(void *))glwebtools::Mutex::Destroy, &gaia::CrmManager::m_mutex, &unk_20D1280);
  glwebtools::Mutex::Construct((glwebtools::Mutex::Self *)&gaia::CrmManager::m_initializationMutex);
  __cxa_atexit((void (*)(void *))glwebtools::Mutex::Destroy, &gaia::CrmManager::m_initializationMutex, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szNA, (char *)&unk_1B15112, (int)(uintptr_t)&v5 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szNA, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szID, "id", (int)(uintptr_t)&v6);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szID, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szCampaignID, "campaign_id", (int)(uintptr_t)&v6 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szCampaignID, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szImpressions, "impressions", (int)(uintptr_t)&v6 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szImpressions, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szPriority, "priority", (int)(uintptr_t)&v6 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szPriority, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szOffline, "offline", (int)(uintptr_t)&v7);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szOffline, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szFatigueGroup, "fatigue_group", (int)(uintptr_t)&v7 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szFatigueGroup, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szFrequency, "frequency", (int)(uintptr_t)&v7 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szFrequency, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szPointcuts, "pointcuts", (int)(uintptr_t)&v7 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szPointcuts, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szLimit, "limit", (int)(uintptr_t)&v8);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szLimit, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szMax, "max", (int)(uintptr_t)&v8 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szMax, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szInterval, "interval", (int)(uintptr_t)&v8 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szInterval, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szType, "type", (int)(uintptr_t)&v8 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szType, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szPopup, "popup", (int)(uintptr_t)&v9);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szPopup, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szAdNonGamePopups, "ad_non_game_popups", (int)(uintptr_t)&v9 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szAdNonGamePopups, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szAd3rdParty, "ad_3rd_party", (int)(uintptr_t)&v9 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szAd3rdParty, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szGiveObject, "give_object", (int)(uintptr_t)&v9 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szGiveObject, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szGLAdsBanner, "show_ad_banner", (int)(uintptr_t)&v10);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szGLAdsBanner, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szGLAdsInterstitial, "show_ad", (int)(uintptr_t)&v10 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szGLAdsInterstitial, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szGLAdsButton, "show_ad_button", (int)(uintptr_t)&v10 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szGLAdsButton, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szPointcutArgs, "action_args", (int)(uintptr_t)&v10 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szPointcutArgs, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szLocationType, "location_type", (int)(uintptr_t)&v11);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szLocationType, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_displayTime, "display_time", (int)(uintptr_t)&v11 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_displayTime, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_cooldown, "cooldown", (int)(uintptr_t)&v11 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_cooldown, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szPopupAdsLocation, "ads_location", (int)(uintptr_t)&v11 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szPopupAdsLocation, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szPointcutName, "pointcut_name", (int)(uintptr_t)&v12);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szPointcutName, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szLaunchUrl, "launch_url", (int)(uintptr_t)&v12 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szLaunchUrl, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szLaunchStore, "launch_store", (int)(uintptr_t)&v12 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szLaunchStore, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szLogEvent, "log_event", (int)(uintptr_t)&v12 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szLogEvent, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szCrmActionType, "crm_action_type", (int)(uintptr_t)&v13);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szCrmActionType, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szPopupId, "popup_id", (int)(uintptr_t)&v13 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szPopupId, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szTags_, "tags_", (int)(uintptr_t)&v13 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szTags_, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szItem, "item", (int)(uintptr_t)&v13 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szItem, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szQuantity, "quantity", (int)(uintptr_t)&v14);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szQuantity, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szUrl, "url", (int)(uintptr_t)&v14 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szUrl, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szTags, "tags", (int)(uintptr_t)&v14 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szTags, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szCheckingOfflineValue, "checking_offline_value", (int)(uintptr_t)&v14 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szCheckingOfflineValue, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szTrue, "true", (int)(uintptr_t)&v15);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szTrue, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szCheckingIsPopupAvailable, "checking_is_popup_available", (int)(uintptr_t)&v15 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szCheckingIsPopupAvailable, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szPointcutId, "pointcut_id", (int)(uintptr_t)&v15 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szPointcutId, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szFatigueGroupLimitFailed, "fatigue_group_limit_Failed", (int)(uintptr_t)&v15 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szFatigueGroupLimitFailed, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szPopupNotAvailable, "popup_not_available", (int)(uintptr_t)&v16);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szPopupNotAvailable, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szPopupCooldownNotReady, "popup_cooldown_not_ready", (int)(uintptr_t)&v16 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szPopupCooldownNotReady, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szPointcutArguments, "pointcut_arguments", (int)(uintptr_t)&v16 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szPointcutArguments, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szData, "data", (int)(uintptr_t)&v16 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szData, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szRewardName, "reward_name", (int)(uintptr_t)&v17);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szRewardName, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szRewardAmount, "reward_amount", (int)(uintptr_t)&v17 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szRewardAmount, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szName, "name", (int)(uintptr_t)&v17 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szName, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szConditions, "conditions", (int)(uintptr_t)&v17 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szConditions, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szQuit, "quit", (int)(uintptr_t)&v18);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szQuit, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szGoto, "goto", (int)(uintptr_t)&v18 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szGoto, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szClickType, "click_type", (int)(uintptr_t)&v18 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szClickType, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szRequestShowPopup, "request_show_popup", (int)(uintptr_t)&v18 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szRequestShowPopup, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szRequestShowPopupCompleted, "request_show_popup_completed", (int)(uintptr_t)&v19);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szRequestShowPopupCompleted, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szRequestReturnedCompleted, "request_returned_completed", (int)(uintptr_t)&v19 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szRequestReturnedCompleted, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szIsAvailableRequestForID, "IsAvailable_request_for_id", (int)(uintptr_t)&v19 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szIsAvailableRequestForID, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szIsAvailableRequest, "is_available_request", (int)(uintptr_t)&v19 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szIsAvailableRequest, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szIsWSOnScreenReqForID, "is_ws_on_screen_request_for_id", (int)(uintptr_t)&v20);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szIsWSOnScreenReqForID, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szDownloadReqForID, "download_request_for_id", (int)(uintptr_t)&v20 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szDownloadReqForID, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szDownloadRequest, "download_request", (int)(uintptr_t)&v20 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szDownloadRequest, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szGroupName, "GroupName", (int)(uintptr_t)&v20 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szGroupName, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szEventOffline, "offline", (int)(uintptr_t)&v21);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szEventOffline, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szConfigObject, "config_object", (int)(uintptr_t)&v21 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szConfigObject, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szCampaignList, "campaign_list", (int)(uintptr_t)&v21 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szCampaignList, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szFatigueGroups, "fatigue_groups", (int)(uintptr_t)&v21 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szFatigueGroups, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szPointcutActions, "pointcut_actions", (int)(uintptr_t)&v22);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szPointcutActions, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szEnterSection, "enter_section", (int)(uintptr_t)&v22 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szEnterSection, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szSection, "section", (int)(uintptr_t)&v22 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szSection, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szLocation, "location", (int)(uintptr_t)&v22 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szLocation, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szEvent, "event", (int)(uintptr_t)&v23);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szEvent, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szActionType, "action_type", (int)(uintptr_t)&v23 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szActionType, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szAction, "action", (int)(uintptr_t)&v23 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szAction, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&gaia::k_szOldWSLib, "old_ws_library", (int)(uintptr_t)&v23 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &gaia::k_szOldWSLib, &unk_20D1280);
  glwebtools::Mutex::Construct((glwebtools::Mutex::Self *)&gaia::GaiaRequest::s_IDMutex);
  __cxa_atexit((void (*)(void *))glwebtools::Mutex::Destroy, &gaia::GaiaRequest::s_IDMutex, &unk_20D1280);
  glwebtools::Mutex::Construct((glwebtools::Mutex::Self *)&gaia::GameloftID::s_mutex);
  __cxa_atexit((void (*)(void *))glwebtools::Mutex::Destroy, &gaia::GameloftID::s_mutex, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A324, "global_device_id", (int)(uintptr_t)&v24);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A324, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A294, "device_type", (int)(uintptr_t)&v24 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A294, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A328, "device_id_type", (int)(uintptr_t)&v24 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A328, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A298, "device_version", (int)(uintptr_t)&v24 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A298, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A290, "source_version", (int)(uintptr_t)&v25);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A290, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A2A0, "idfv", (int)(uintptr_t)&v25 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A2A0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A29C, "idfa", (int)(uintptr_t)&v25 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A29C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A2B8, "aid", (int)(uintptr_t)&v25 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A2B8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A2A8, (char *)&off_1B6EB3F, (int)(uintptr_t)&v26);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A2A8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A2AC, "macw32", (int)(uintptr_t)&v26 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A2AC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A2A4, "hdidfv", (int)(uintptr_t)&v26 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A2A4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A2B0, "imei", (int)(uintptr_t)&v26 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A2B0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A2BC, "udid", (int)(uintptr_t)&v27);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A2BC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A2B4, "sn", (int)(uintptr_t)&v27 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A2B4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A32C, "gdid", (int)(uintptr_t)&v27 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A32C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A2C0, "phid", (int)(uintptr_t)&v27 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A2C0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A330, "username", (int)(uintptr_t)&v28);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A330, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A334, "password", (int)(uintptr_t)&v28 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A334, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A338, "credential_type", (int)(uintptr_t)&v28 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A338, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A33C, "credentialsToLinkTo", (int)(uintptr_t)&v28 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A33C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A340, "if_exists", (int)(uintptr_t)&v29);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A340, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A344, "accountType", (int)(uintptr_t)&v29 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A344, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A348, "X-GL-mimetype", (int)(uintptr_t)&v29 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A348, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A34C, "json", (int)(uintptr_t)&v29 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A34C, &unk_20D1280);
  glwebtools::Mutex::Construct((glwebtools::Mutex::Self *)&gaia::ThreadManager::s_mutex);
  __cxa_atexit((void (*)(void *))glwebtools::Mutex::Destroy, &gaia::ThreadManager::s_mutex, &unk_20D1280);
  glwebtools::Mutex::Construct((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfile);
  __cxa_atexit((void (*)(void *))glwebtools::Mutex::Destroy, &gaia::UserProfile::s_mutexProfile, &unk_20D1280);
  glwebtools::Mutex::Construct((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexProfileString);
  __cxa_atexit((void (*)(void *))glwebtools::Mutex::Destroy, &gaia::UserProfile::s_mutexProfileString, &unk_20D1280);
  glwebtools::Mutex::Construct((glwebtools::Mutex::Self *)&gaia::UserProfile::s_mutexConflictedAccount);
  __cxa_atexit((void (*)(void *))glwebtools::Mutex::Destroy, &gaia::UserProfile::s_mutexConflictedAccount, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A2C4, "installcheck.tstmp", (int)(uintptr_t)&v30);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A2C4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A2C8, "applist.json", (int)(uintptr_t)&v30 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A2C8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A2CC, "applist.etag", (int)(uintptr_t)&v30 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A2CC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&dword_211A2D0, "InstalledAppsToCheck_Android", (int)(uintptr_t)&v30 + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_211A2D0, &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)"static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]";
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)"static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]";
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)"static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]";
  }
  if ( g4_guard_428b4911e2[0] == 0 )
  {
    g4_guard_428b4911e2[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<CrmGlotEvent::Self>>::ti_ = (void *)"static char const* boost::detail::sp_ty"
                                                                                 "peid_<T>::name() [with T = boost::detai"
                                                                                 "l::sp_ms_deleter<CrmGlotEvent>]";
  }

  if ( g4_guard_7133db00ed[0] == 0 )
  {
    g4_guard_7133db00ed[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<gaia::CrmAction::Self>>::ti_ = (void *)"static char const* boost::detail::sp"
                                                                                    "_typeid_<T>::name() [with T = boost:"
                                                                                    ":detail::sp_ms_deleter<gaia::CrmAction::Self>]";
  }
  if ( g4_guard_3f6e144c2d[0] == 0 )
  {
    g4_guard_3f6e144c2d[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<gaia::CrmFatigueGroup::Self>>::ti_ = (void *)"static char const* boost::deta"
                                                                                          "il::sp_typeid_<T>::name() [wit"
                                                                                          "h T = boost::detail::sp_ms_del"
                                                                                          "eter<gaia::CrmFatigueGroup::Self>]";
  }
  if ( g4_guard_aa87aef00f[0] == 0 )
  {
    g4_guard_aa87aef00f[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<std::string>>::ti_ = (void *)"static char const* boost::detail::sp_typ"
                                                                                "eid_<T>::name() [with T = boost::detail:"
                                                                                ":sp_ms_deleter<std::basic_string<char> >]";
  }
  if ( g4_guard_828804b13f[0] == 0 )
  {
    g4_guard_828804b13f[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfLog::Self>>::ti_ = (void *)"static char const* boost::detail:"
                                                                                       ":sp_typeid_<T>::name() [with T = "
                                                                                       "boost::detail::sp_ms_deleter<glot"
                                                                                       "v3::EventOfLog>]";
  }
  result = (int *)&byte_20D3F20;
// ----------------------------------------------------------------------------
// Function: if_id_ov2  (binary VA: 0x0)
// Original: if
// ----------------------------------------------------------------------------
if (byte_20D3F20 == 0)
{
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)"static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]";
  }

  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_14F4FE0  (binary VA: 0x14f4fe0)
// Original: sub_14F4FE0
// ----------------------------------------------------------------------------
int * sub_14F4FE0(int *a1, uint32_t *a2, uint32_t *a3, unsigned int *a4)
{
  uint32_t *v4;
  unsigned int v5;
  uint32_t *v6;
  int v7;
  unsigned int v8;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  uint32_t *v14;
  unsigned int v15;
  uint32_t *v16;
  char v17;
  uint32_t *v18;
  char v19;
  unsigned int v20;
  unsigned int v21;
  char v22; // bp
  unsigned int v23;
  uint32_t *v24;
  uint32_t *v25;
  char v26;
  unsigned int v27;
  unsigned int v28;
  uint32_t *v29;
  uint32_t *v30;
  char v31; // bp
  int v32;
  unsigned int v33;
  uint32_t *v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  bool v38;
  int v39;
  unsigned int v40;
  int v41;
  char v42;
  uint32_t *v43;
  int v44;
  char v45;
  uint32_t *v48;
  uint32_t *v49;
  uint32_t *v50;
  char v51;
  uint32_t *v52;
  char v53;
  uint32_t *v54;
  unsigned int v55;

  v4 = a3;
  v48 = a2 + 1;
  if ( a3 == a2 + 1 )
  {
    v13 = a2[5];
    if ( v13 != 0 )
    {
      v14 = (uint32_t *)a2[4];
      v50 = v14;
      if ( v14[4] < *a4 )
      {
        v42 = v14 == a3;
        v7 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
        if ( v7 != -16 )
        {
          v28 = *a4;
          *(uint32_t *)(v7 + 20) = a4[1];
          *(uint32_t *)(v7 + 16) = v28;
        }
        sub_1904970(v42, v7, v50, a3);
        goto LABEL_9;
      }
    }
    v4 = (uint32_t *)a2[2];
    if ( v4 != nullptr )
    {
      v15 = *a4;
      while ( 1 )
      {
        v13 = v4[4];
        if ( v13 > v15 )
        {
          v16 = (uint32_t *)v4[2];
          v17 = 1;
        }
        else
        {
          v16 = (uint32_t *)v4[3];
          v17 = 0;
        }
        if ( v16 == nullptr )
          break;
        v4 = v16;
      }
      v55 = v4[4];
      v52 = v4;
      if ( v17 == 0 )
        goto LABEL_42;
    }
    else
    {
      v4 = v48;
    }
    if ( (uint32_t *)a2[3] == v4 )
    {
      v38 = true;
      if ( v48 != v4 )
        v38 = *a4 < v4[4];
      goto LABEL_83;
    }
    v30 = (uint32_t *)sub_19048F0(v4);
    v55 = v13;
    v52 = v4;
    v15 = *a4;
    v13 = v30[4];
    v4 = v30;
LABEL_42:
    if ( v13 < v15 )
    {
      v22 = 1;
      if ( v48 != v52 )
        v22 = v55 > v15;
      v4 = (uint32_t *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
      if ( v4 != (uint32_t *)-16 )
      {
        v23 = *a4;
        v4[5] = a4[1];
        v4[4] = v23;
      }
      sub_1904970(v22, v4, v52, v48);
      ++a2[5];
    }
    goto LABEL_17;
  }
  v5 = *a4;
  if ( *a4 >= a3[4] )
  {
    if ( *a4 <= a3[4] )
    {
LABEL_17:
      *a1 = (int)(uintptr_t)v4;
      return a1;
    }
    if ( a3 == (uint32_t *)a2[4] )
    {
      v7 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
      if ( v7 == -16 )
        goto LABEL_71;
      goto LABEL_70;
    }
    v10 = sub_19048E0(a3);
    if ( v5 < *(uint32_t *)(v10 + 16) )
    {
      if ( a3[3] != 0 )
      {
        v41 = v10;
        v11 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
        v4 = (uint32_t *)v11;
        if ( v11 != -16 )
        {
          v12 = a4[1];
          *(uint32_t *)(v11 + 16) = *a4;
          *(uint32_t *)(v11 + 20) = v12;
        }
        sub_1904970(1, v11, v41, v48);
        ++a2[5];
        goto LABEL_17;
      }
      v7 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
      if ( v7 == -16 )
      {
LABEL_71:
        sub_1904970(0, v7, a3, v48);
LABEL_9:
        ++a2[5];
        *a1 = v7;
        return a1;
      }
LABEL_70:
      v35 = *a4;
      *(uint32_t *)(v7 + 20) = a4[1];
      *(uint32_t *)(v7 + 16) = v35;
      goto LABEL_71;
    }
    v24 = (uint32_t *)a2[2];
    if ( v24 != nullptr )
    {
      while ( 1 )
      {
        v27 = v24[4];
        if ( v5 < v27 )
        {
          v25 = (uint32_t *)v24[2];
          v26 = 1;
        }
        else
        {
          v25 = (uint32_t *)v24[3];
          v26 = 0;
        }
        if ( v25 == nullptr )
          break;
        v24 = v25;
      }
      v34 = v24;
      if ( v26 == 0 )
        goto LABEL_67;
    }
    else
    {
      v24 = v48;
    }
    if ( (uint32_t *)a2[3] != v24 )
    {
      v34 = (uint32_t *)sub_19048F0(v24);
      v27 = v34[4];
LABEL_67:
      if ( v5 <= v27 )
      {
LABEL_68:
        *a1 = (int)(uintptr_t)v34;
        return a1;
      }
    }
    v53 = 1;
    if ( v48 != v24 )
      v53 = v5 < v24[4];
    v36 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
    if ( v36 != -16 )
    {
      v37 = *a4;
      *(uint32_t *)(v36 + 20) = a4[1];
      *(uint32_t *)(v36 + 16) = v37;
    }
    v44 = v36;
    sub_1904970(v53, v36, v24, v48);
    ++a2[5];
    v34 = (uint32_t *)v44;
    goto LABEL_68;
  }
  v49 = (uint32_t *)a2[3];
  if ( a3 == v49 )
  {
LABEL_6:
    v7 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
    if ( v7 != -16 )
    {
      v8 = *a4;
      *(uint32_t *)(v7 + 20) = a4[1];
      *(uint32_t *)(v7 + 16) = v8;
    }
    sub_1904970(1, v7, a3, v48);
    goto LABEL_9;
  }
  v6 = (uint32_t *)sub_1904940(a3);
  if ( v5 <= v6[4] )
  {
    v4 = (uint32_t *)a2[2];
    if ( v4 != nullptr )
    {
      while ( 1 )
      {
        v20 = v4[4];
        if ( v5 < v20 )
        {
          v18 = (uint32_t *)v4[2];
          v19 = 1;
        }
        else
        {
          v18 = (uint32_t *)v4[3];
          v19 = 0;
        }
        if ( v18 == nullptr )
          break;
        v4 = v18;
      }
      v54 = v4;
      if ( v19 == 0 )
      {
LABEL_35:
        if ( v5 > v20 )
        {
          v51 = 1;
          if ( v48 != v54 )
            v51 = v5 < v54[4];
          v4 = (uint32_t *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
          if ( v4 != (uint32_t *)-16 )
          {
            v21 = *a4;
            v4[5] = a4[1];
            v4[4] = v21;
          }
          sub_1904970(v51, v4, v54, v48);
          ++a2[5];
        }
        goto LABEL_17;
      }
    }
    else
    {
      v4 = v48;
    }
    if ( v49 != v4 )
    {
      v29 = (uint32_t *)sub_19048F0(v4);
      v20 = v29[4];
      v54 = v4;
      v4 = v29;
      goto LABEL_35;
    }
    v38 = true;
    if ( v48 != v4 )
      v38 = v5 < v4[4];
LABEL_83:
    v45 = v38;
    v39 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
    if ( v39 != -16 )
    {
      v40 = *a4;
      *(uint32_t *)(v39 + 20) = a4[1];
      *(uint32_t *)(v39 + 16) = v40;
    }
    sub_1904970(v45, v39, v4, v48);
    v4 = (uint32_t *)v39;
    ++a2[5];
    goto LABEL_17;
  }
  if ( v6[3] != 0 )
    goto LABEL_6;
  v43 = v6;
  v31 = v48 == v6;
  v32 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
  if ( v32 != -16 )
  {
    v33 = *a4;
    *(uint32_t *)(v32 + 20) = a4[1];
    *(uint32_t *)(v32 + 16) = v33;
  }
  sub_1904970(v31, v32, v43, v48);
  ++a2[5];
  *a1 = v32;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_int_pair_unsign_743ce8::M_erase  (binary VA: 0x14face0)
// Original: std::_Rb_tree<unsigned int,std::pair<unsigned int const,void (*)(iap::Store &,iap::EventCommandResultData const*)>,std::_Select1st<std::pair<unsigned int const,void (*)(iap::Store &,iap::EventCommandResultData const*)>>,std::less<unsigned int>,glwebtools::SAllocator<std::pair<unsigned int const,void (*)(iap::Store &,iap::EventCommandResultData const*)>,(glwebtools::MemHint)4>>::_M_erase
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_unsigned_int_pair_unsign_743ce8::M_erase(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;

  result = a2;
  if ( a2 != 0 )
  {
    while ( 1 )
    {
      v3 = *(uint32_t *)(a2 + 12);
      v22 = v3;
      if ( v3 != 0 )
      {
        while ( 1 )
        {
          v4 = *(uint32_t *)(v3 + 12);
          v23 = v4;
          if ( v4 != 0 )
          {
            while ( 1 )
            {
              v5 = *(uint32_t *)(v4 + 12);
              v24 = v5;
              if ( v5 != 0 )
              {
                while ( 1 )
                {
                  v6 = *(uint32_t *)(v5 + 12);
                  v25 = v6;
                  if ( v6 != 0 )
                  {
                    while ( 1 )
                    {
                      v7 = *(uint32_t *)(v6 + 12);
                      v26 = v7;
                      if ( v7 != 0 )
                      {
                        while ( 1 )
                        {
                          v8 = *(uint32_t *)(v7 + 12);
                          v21 = v8;
                          if ( v8 != 0 )
                          {
                            while ( 1 )
                            {
                              v9 = *(uint32_t *)(v8 + 12);
                              v20 = v9;
                              if ( v9 != 0 )
                              {
                                while ( 1 )
                                {
                                  v10 = *(uint32_t *)(v9 + 12);
                                  if ( v10 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_unsigned_int_pair_unsign_743ce8::M_erase(
                                        a1,
                                        *(uint32_t *)(v10 + 12));
                                      v11 = *(uint32_t *)(v10 + 8);
                                      sub_4EBEE0(v10);
                                      if ( v11 == 0 )
                                        break;
                                      v10 = v11;
                                    }
                                  }
                                  v12 = *(uint32_t *)(v20 + 8);
                                  sub_4EBEE0(v20);
                                  if ( v12 == 0 )
                                    break;
                                  v20 = v12;
                                  v9 = v12;
                                }
                              }
                              v13 = *(uint32_t *)(v21 + 8);
                              sub_4EBEE0(v21);
                              if ( v13 == 0 )
                                break;
                              v21 = v13;
                              v8 = v13;
                            }
                          }
                          v14 = *(uint32_t *)(v26 + 8);
                          sub_4EBEE0(v26);
                          if ( v14 == 0 )
                            break;
                          v26 = v14;
                          v7 = v14;
                        }
                      }
                      v15 = *(uint32_t *)(v25 + 8);
                      sub_4EBEE0(v25);
                      if ( v15 == 0 )
                        break;
                      v25 = v15;
                      v6 = v15;
                    }
                  }
                  v16 = *(uint32_t *)(v24 + 8);
                  sub_4EBEE0(v24);
                  if ( v16 == 0 )
                    break;
                  v24 = v16;
                  v5 = v16;
                }
              }
              v17 = *(uint32_t *)(v23 + 8);
              sub_4EBEE0(v23);
              if ( v17 == 0 )
                break;
              v23 = v17;
              v4 = v17;
            }
          }
          v18 = *(uint32_t *)(v22 + 8);
          sub_4EBEE0(v22);
          if ( v18 == 0 )
            break;
          v22 = v18;
          v3 = v18;
        }
      }
      v19 = *(uint32_t *)(a2 + 8);
      result = sub_4EBEE0(a2);
      if ( v19 == 0 )
        break;
      a2 = v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase  (binary VA: 0x14fae90)
// Original: std::_Rb_tree<iap::Rule,iap::Rule,std::_Identity<iap::Rule>,std::less<iap::Rule>,glwebtools::SAllocator<iap::Rule,(glwebtools::MemHint)4>>::_M_erase
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(int a1, uint32_t *a2)
{
  uint32_t *result;
  uint32_t *i;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  uint32_t *v30;
  int v31;
  int v32;
  int *v33;
  int v34;
  uint32_t *v35;
  int v36;
  int v37;
  int v38;
  uint32_t *v39;
  int v40;
  uint32_t *v41;
  int v42;
  int v43;
  uint32_t *v44;
  int v45;
  uint32_t *v46;
  int v47;
  int v48;
  uint32_t *v49;
  int v50;
  uint32_t *v51;
  int v52;
  int v53;
  uint32_t *v54;
  int v55;
  uint32_t *v56;
  int v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;
  uint32_t *v62;
  uint32_t *v63;
  uint32_t *v64;
  uint32_t *v65;
  uint32_t *v66;
  uint32_t *v67;
  int *v68;
  uint32_t *v69;
  uint32_t *v70;
  uint32_t *v71;
  uint32_t *v72;
  uint32_t *v73;
  uint32_t *v74;
  uint32_t *v75;
  uint32_t *v76;
  uint32_t *v77;
  uint32_t *v78;
  uint32_t *v79;
  uint32_t *v80;
  uint32_t *v81;
  uint32_t *v82;
  uint32_t *v83;

  result = a2;
  if ( a2 != nullptr )
  {
    for ( i = a2; ; i = v66 )
    {
      v4 = (uint32_t *)i[3];
      v78 = v4;
      if ( v4 != nullptr )
        break;
LABEL_135:
      v66 = (uint32_t *)a2[2];
      v72 = (uint32_t *)a2[6];
      v53 = a2[5];
      if ( v72 != (uint32_t *)v53 )
      {
        v54 = (uint32_t *)a2[5];
        do
        {
          v55 = v54[1];
          if ( (uint32_t *)(v55 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v55 - 12));
          }
          v56 = (uint32_t *)(*v54 - 12);
          if ( v56 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v54 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v56);
          v54 += 2;
        }
        while ( v72 != v54 );
        v53 = a2[5];
      }
      if ( v53 != 0 )
        sub_4EBEE0(v53);
      v57 = a2[4];
      if ( (uint32_t *)(v57 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v57 - 12));
      }
      sub_4EBEE0((int)(uintptr_t)a2);
      result = v66;
      if ( v66 == nullptr )
        return result;
      a2 = v66;
    }
    while ( 1 )
    {
      v5 = (uint32_t *)v4[3];
      v79 = v5;
      if ( v5 != nullptr )
        break;
LABEL_118:
      v65 = (uint32_t *)v78[2];
      v71 = (uint32_t *)v78[6];
      v48 = v78[5];
      if ( v71 != (uint32_t *)v48 )
      {
        v49 = (uint32_t *)v78[5];
        do
        {
          v50 = v49[1];
          if ( (uint32_t *)(v50 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v50 - 12));
          }
          v51 = (uint32_t *)(*v49 - 12);
          if ( v51 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v49 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v51);
          v49 += 2;
        }
        while ( v71 != v49 );
        v48 = v78[5];
      }
      if ( v48 != 0 )
        sub_4EBEE0(v48);
      v52 = v78[4];
      if ( (uint32_t *)(v52 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v52 - 12));
      }
      sub_4EBEE0((int)(uintptr_t)v78);
      if ( v65 == nullptr )
        goto LABEL_135;
      v78 = v65;
      v4 = v65;
    }
    while ( 1 )
    {
      v6 = (uint32_t *)v5[3];
      v80 = v6;
      if ( v6 != nullptr )
        break;
LABEL_107:
      v64 = (uint32_t *)v79[2];
      v70 = (uint32_t *)v79[6];
      v43 = v79[5];
      if ( v70 != (uint32_t *)v43 )
      {
        v44 = (uint32_t *)v79[5];
        do
        {
          v45 = v44[1];
          if ( (uint32_t *)(v45 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v45 - 12));
          }
          v46 = (uint32_t *)(*v44 - 12);
          if ( v46 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v44 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v46);
          v44 += 2;
        }
        while ( v70 != v44 );
        v43 = v79[5];
      }
      if ( v43 != 0 )
        sub_4EBEE0(v43);
      v47 = v79[4];
      if ( (uint32_t *)(v47 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v47 - 12));
      }
      sub_4EBEE0((int)(uintptr_t)v79);
      if ( v64 == nullptr )
        goto LABEL_118;
      v79 = v64;
      v5 = v64;
    }
    while ( 1 )
    {
      v7 = (uint32_t *)v6[3];
      v81 = v7;
      if ( v7 != nullptr )
        break;
LABEL_94:
      v63 = (uint32_t *)v80[2];
      v69 = (uint32_t *)v80[6];
      v38 = v80[5];
      if ( v69 != (uint32_t *)v38 )
      {
        v39 = (uint32_t *)v80[5];
        do
        {
          v40 = v39[1];
          if ( (uint32_t *)(v40 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v40 - 12));
          }
          v41 = (uint32_t *)(*v39 - 12);
          if ( v41 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v39 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v41);
          v39 += 2;
        }
        while ( v69 != v39 );
        v38 = v80[5];
      }
      if ( v38 != 0 )
        sub_4EBEE0(v38);
      v42 = v80[4];
      if ( (uint32_t *)(v42 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v42 - 12));
      }
      sub_4EBEE0((int)(uintptr_t)v80);
      if ( v63 == nullptr )
        goto LABEL_107;
      v80 = v63;
      v6 = v63;
    }
    while ( 1 )
    {
      v8 = (uint32_t *)v7[3];
      v82 = v8;
      if ( v8 != nullptr )
      {
        while ( 1 )
        {
          v9 = (uint32_t *)v8[3];
          v83 = v9;
          if ( v9 != nullptr )
          {
            while ( 1 )
            {
              v10 = (uint32_t *)v9[3];
              v77 = v10;
              if ( v10 != nullptr )
              {
                while ( 1 )
                {
                  v11 = (uint32_t *)v10[3];
                  v73 = v11;
                  if ( v11 != nullptr )
                  {
                    while ( 1 )
                    {
                      g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
                        a1,
                        v11[3]);
                      v76 = (uint32_t *)v73[2];
                      v58 = (uint32_t *)v73[6];
                      v12 = v73[5];
                      if ( v58 != (uint32_t *)v12 )
                      {
                        v13 = (uint32_t *)v73[5];
                        do
                        {
                          v14 = v13[1];
                          if ( (uint32_t *)(v14 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v14 - 12));
                          }
                          v15 = (uint32_t *)(*v13 - 12);
                          if ( v15 != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(*v13 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy(v15);
                          }
                          v13 += 2;
                        }
                        while ( v58 != v13 );
                        v12 = v73[5];
                      }
                      if ( v12 != 0 )
                        sub_4EBEE0(v12);
                      v16 = v73[4];
                      if ( (uint32_t *)(v16 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v16 - 12));
                      }
                      sub_4EBEE0((int)(uintptr_t)v73);
                      if ( v76 == nullptr )
                        break;
                      v73 = v76;
                      v11 = v76;
                    }
                  }
                  v74 = (uint32_t *)v77[2];
                  v59 = (uint32_t *)v77[6];
                  v17 = v77[5];
                  if ( v59 != (uint32_t *)v17 )
                  {
                    v18 = (uint32_t *)v77[5];
                    do
                    {
                      v19 = v18[1];
                      if ( (uint32_t *)(v19 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v19 - 12));
                      }
                      v20 = (uint32_t *)(*v18 - 12);
                      if ( v20 != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(*v18 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy(v20);
                      }
                      v18 += 2;
                    }
                    while ( v59 != v18 );
                    v17 = v77[5];
                  }
                  if ( v17 != 0 )
                    sub_4EBEE0(v17);
                  v21 = v77[4];
                  if ( (uint32_t *)(v21 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v21 - 12));
                  }
                  sub_4EBEE0((int)(uintptr_t)v77);
                  if ( v74 == nullptr )
                    break;
                  v77 = v74;
                  v10 = v74;
                }
              }
              v75 = (uint32_t *)v83[2];
              v60 = (uint32_t *)v83[6];
              v22 = v83[5];
              if ( v60 != (uint32_t *)v22 )
              {
                v23 = (uint32_t *)v83[5];
                do
                {
                  v24 = v23[1];
                  if ( (uint32_t *)(v24 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v24 - 12));
                  }
                  v25 = (uint32_t *)(*v23 - 12);
                  if ( v25 != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(*v23 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v25);
                  }
                  v23 += 2;
                }
                while ( v60 != v23 );
                v22 = v83[5];
              }
              if ( v22 != 0 )
                sub_4EBEE0(v22);
              v26 = v83[4];
              if ( (uint32_t *)(v26 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v26 - 12));
              }
              sub_4EBEE0((int)(uintptr_t)v83);
              if ( v75 == nullptr )
                break;
              v83 = v75;
              v9 = v75;
            }
          }
          v61 = (uint32_t *)v82[2];
          v67 = (uint32_t *)v82[6];
          v27 = v82[5];
          if ( v67 != (uint32_t *)v27 )
          {
            v28 = (uint32_t *)v82[5];
            do
            {
              v29 = v28[1];
              if ( (uint32_t *)(v29 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v29 - 12));
              }
              v30 = (uint32_t *)(*v28 - 12);
              if ( v30 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v28 - 4), 0xFFFFFFFF) <= 0 )
                g4_std::string::Rep::M_destroy(v30);
              v28 += 2;
            }
            while ( v67 != v28 );
            v27 = v82[5];
          }
          if ( v27 != 0 )
            sub_4EBEE0(v27);
          v31 = v82[4];
          if ( (uint32_t *)(v31 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v31 - 12));
          }
          sub_4EBEE0((int)(uintptr_t)v82);
          if ( v61 == nullptr )
            break;
          v82 = v61;
          v8 = v61;
        }
      }
      v62 = (uint32_t *)v81[2];
      v68 = (int *)v81[6];
      v32 = v81[5];
      if ( v68 != (int *)v32 )
        break;
LABEL_89:
      if ( v32 != 0 )
        sub_4EBEE0(v32);
      v37 = v81[4];
      if ( (uint32_t *)(v37 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v37 - 12));
      }
      sub_4EBEE0((int)(uintptr_t)v81);
      if ( v62 == nullptr )
        goto LABEL_94;
      v81 = v62;
      v7 = v62;
    }
    v33 = (int *)v81[5];
    while ( 1 )
    {
      while ( 1 )
      {
        v36 = v33[1];
        if ( (uint32_t *)(v36 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
        {
          break;
        }
        v34 = *v33;
        v35 = (uint32_t *)(*v33 - 12);
        if ( v35 != dword_213B808 )
          goto LABEL_86;
LABEL_82:
        v33 += 2;
        if ( v68 == v33 )
          goto LABEL_88;
      }
      g4_std::string::Rep::M_destroy((void *)(v36 - 12));
      v34 = *v33;
      v35 = (uint32_t *)(*v33 - 12);
      if ( v35 == dword_213B808 )
        goto LABEL_82;
LABEL_86:
      if ( __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) > 0 )
        goto LABEL_82;
      v33 += 2;
      g4_std::string::Rep::M_destroy(v35);
      if ( v68 == v33 )
      {
LABEL_88:
        v32 = v81[5];
        goto LABEL_89;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_cfc3ba::M_erase  (binary VA: 0x14fb920)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,iap::ServiceFactoryBase *>,std::_Select1st<std::pair<std::string const,iap::ServiceFactoryBase *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,iap::ServiceFactoryBase *>,(glwebtools::MemHint)4>>::_M_erase
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_cfc3ba::M_erase(int a1, int a2)
{
  int result;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;

  result = a2;
  if ( a2 != 0 )
  {
    while ( 1 )
    {
      v24 = *(uint32_t **)(result + 12);
      if ( v24 != nullptr )
      {
        while ( 1 )
        {
          v25 = (uint32_t *)v24[3];
          if ( v25 != nullptr )
          {
            while ( 1 )
            {
              v26 = (uint32_t *)v25[3];
              if ( v26 != nullptr )
              {
                while ( 1 )
                {
                  v27 = (uint32_t *)v26[3];
                  if ( v27 != nullptr )
                  {
                    while ( 1 )
                    {
                      v28 = (uint32_t *)v27[3];
                      if ( v28 != nullptr )
                      {
                        while ( 1 )
                        {
                          v23 = (uint32_t *)v28[3];
                          if ( v23 != nullptr )
                          {
                            while ( 1 )
                            {
                              v22 = (uint32_t *)v23[3];
                              if ( v22 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v3 = (uint32_t *)v22[3];
                                  if ( v3 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_cfc3ba::M_erase(
                                        a1,
                                        v3[3]);
                                      v4 = v3[4];
                                      v5 = (uint32_t *)v3[2];
                                      if ( (uint32_t *)(v4 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v4 - 12));
                                      }
                                      sub_4EBEE0((int)(uintptr_t)v3);
                                      if ( v5 == nullptr )
                                        break;
                                      v3 = v5;
                                    }
                                  }
                                  v6 = v22[4];
                                  v7 = (uint32_t *)v22[2];
                                  if ( (uint32_t *)(v6 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
                                  }
                                  sub_4EBEE0((int)(uintptr_t)v22);
                                  if ( v7 == nullptr )
                                    break;
                                  v22 = v7;
                                }
                              }
                              v8 = v23[4];
                              v9 = (uint32_t *)v23[2];
                              if ( (uint32_t *)(v8 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v8 - 12));
                              }
                              sub_4EBEE0((int)(uintptr_t)v23);
                              if ( v9 == nullptr )
                                break;
                              v23 = v9;
                            }
                          }
                          v10 = v28[4];
                          v11 = (uint32_t *)v28[2];
                          if ( (uint32_t *)(v10 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v10 - 12));
                          }
                          sub_4EBEE0((int)(uintptr_t)v28);
                          if ( v11 == nullptr )
                            break;
                          v28 = v11;
                        }
                      }
                      v12 = v27[4];
                      v13 = (uint32_t *)v27[2];
                      if ( (uint32_t *)(v12 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v12 - 12));
                      }
                      sub_4EBEE0((int)(uintptr_t)v27);
                      if ( v13 == nullptr )
                        break;
                      v27 = v13;
                    }
                  }
                  v16 = v26[4];
                  v17 = (uint32_t *)v26[2];
                  if ( (uint32_t *)(v16 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v16 - 12));
                  }
                  sub_4EBEE0((int)(uintptr_t)v26);
                  if ( v17 == nullptr )
                    break;
                  v26 = v17;
                }
              }
              v18 = v25[4];
              v19 = (uint32_t *)v25[2];
              if ( (uint32_t *)(v18 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v18 - 12));
              }
              sub_4EBEE0((int)(uintptr_t)v25);
              if ( v19 == nullptr )
                break;
              v25 = v19;
            }
          }
          v14 = v24[4];
          v15 = (uint32_t *)v24[2];
          if ( (uint32_t *)(v14 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v14 - 12));
          }
          sub_4EBEE0((int)(uintptr_t)v24);
          if ( v15 == nullptr )
            break;
          v24 = v15;
        }
      }
      v20 = *(uint32_t *)(a2 + 16);
      v21 = *(uint32_t *)(a2 + 8);
      if ( (uint32_t *)(v20 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v20 - 12));
      }
      result = sub_4EBEE0(a2);
      if ( v21 == 0 )
        break;
      a2 = v21;
      result = v21;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_26d452::M_erase  (binary VA: 0x14fbd00)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,iap::Service *>,std::_Select1st<std::pair<std::string const,iap::Service *>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,iap::Service *>,(glwebtools::MemHint)4>>::_M_erase
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_26d452::M_erase(int a1, int a2)
{
  int result;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;

  result = a2;
  if ( a2 != 0 )
  {
    while ( 1 )
    {
      v24 = *(uint32_t **)(result + 12);
      if ( v24 != nullptr )
      {
        while ( 1 )
        {
          v25 = (uint32_t *)v24[3];
          if ( v25 != nullptr )
          {
            while ( 1 )
            {
              v26 = (uint32_t *)v25[3];
              if ( v26 != nullptr )
              {
                while ( 1 )
                {
                  v27 = (uint32_t *)v26[3];
                  if ( v27 != nullptr )
                  {
                    while ( 1 )
                    {
                      v28 = (uint32_t *)v27[3];
                      if ( v28 != nullptr )
                      {
                        while ( 1 )
                        {
                          v23 = (uint32_t *)v28[3];
                          if ( v23 != nullptr )
                          {
                            while ( 1 )
                            {
                              v22 = (uint32_t *)v23[3];
                              if ( v22 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v3 = (uint32_t *)v22[3];
                                  if ( v3 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_26d452::M_erase(
                                        a1,
                                        v3[3]);
                                      v4 = v3[4];
                                      v5 = (uint32_t *)v3[2];
                                      if ( (uint32_t *)(v4 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v4 - 12));
                                      }
                                      sub_4EBEE0((int)(uintptr_t)v3);
                                      if ( v5 == nullptr )
                                        break;
                                      v3 = v5;
                                    }
                                  }
                                  v6 = v22[4];
                                  v7 = (uint32_t *)v22[2];
                                  if ( (uint32_t *)(v6 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
                                  }
                                  sub_4EBEE0((int)(uintptr_t)v22);
                                  if ( v7 == nullptr )
                                    break;
                                  v22 = v7;
                                }
                              }
                              v8 = v23[4];
                              v9 = (uint32_t *)v23[2];
                              if ( (uint32_t *)(v8 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v8 - 12));
                              }
                              sub_4EBEE0((int)(uintptr_t)v23);
                              if ( v9 == nullptr )
                                break;
                              v23 = v9;
                            }
                          }
                          v10 = v28[4];
                          v11 = (uint32_t *)v28[2];
                          if ( (uint32_t *)(v10 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v10 - 12));
                          }
                          sub_4EBEE0((int)(uintptr_t)v28);
                          if ( v11 == nullptr )
                            break;
                          v28 = v11;
                        }
                      }
                      v12 = v27[4];
                      v13 = (uint32_t *)v27[2];
                      if ( (uint32_t *)(v12 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v12 - 12));
                      }
                      sub_4EBEE0((int)(uintptr_t)v27);
                      if ( v13 == nullptr )
                        break;
                      v27 = v13;
                    }
                  }
                  v16 = v26[4];
                  v17 = (uint32_t *)v26[2];
                  if ( (uint32_t *)(v16 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v16 - 12));
                  }
                  sub_4EBEE0((int)(uintptr_t)v26);
                  if ( v17 == nullptr )
                    break;
                  v26 = v17;
                }
              }
              v18 = v25[4];
              v19 = (uint32_t *)v25[2];
              if ( (uint32_t *)(v18 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v18 - 12));
              }
              sub_4EBEE0((int)(uintptr_t)v25);
              if ( v19 == nullptr )
                break;
              v25 = v19;
            }
          }
          v14 = v24[4];
          v15 = (uint32_t *)v24[2];
          if ( (uint32_t *)(v14 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v14 - 12));
          }
          sub_4EBEE0((int)(uintptr_t)v24);
          if ( v15 == nullptr )
            break;
          v24 = v15;
        }
      }
      v20 = *(uint32_t *)(a2 + 16);
      v21 = *(uint32_t *)(a2 + 8);
      if ( (uint32_t *)(v20 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v20 - 12));
      }
      result = sub_4EBEE0(a2);
      if ( v21 == 0 )
        break;
      a2 = v21;
      result = v21;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_iap_RuleSet_iap_RuleSet_86d84f::M_erase  (binary VA: 0x14fc0e0)
// Original: std::_Rb_tree<iap::RuleSet,iap::RuleSet,std::_Identity<iap::RuleSet>,std::less<iap::RuleSet>,glwebtools::SAllocator<iap::RuleSet,(glwebtools::MemHint)4>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_iap_RuleSet_iap_RuleSet_86d84f::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
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
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  uint32_t *v27;
  int v28;
  uint32_t *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint32_t *v34;
  int v35;
  uint32_t *v36;
  int v37;
  int v38;
  int v39;
  int *v40;
  int v41;
  uint32_t *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  uint32_t *v47;
  int v48;
  uint32_t *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  uint32_t *v55;
  int v56;
  uint32_t *v57;
  int v58;
  int v59;
  int v60;
  int v61;
  uint32_t *v62;
  int v63;
  uint32_t *v64;
  int v65;
  int v66;
  int v67;
  int v68;
  uint32_t *v69;
  int v70;
  uint32_t *v71;
  int v72;
  int v73;
  int v74;
  uint32_t *v75;
  uint32_t *v76;
  uint32_t *v77;
  uint32_t *v78;
  uint32_t *v79;
  uint32_t *v80;
  uint32_t *v81;
  uint32_t *v82;
  uint32_t *v83;
  uint32_t *v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  uint32_t *v91;
  uint32_t *v92;
  uint32_t *v93;
  int *v94;
  uint32_t *v95;
  uint32_t *v96;
  uint32_t *v97;
  uint32_t *v98;
  uint32_t *v99;
  uint32_t *v100;
  uint32_t *v101;
  uint32_t *v102;
  uint32_t *v103;
  uint32_t *v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  uint32_t *v111;
  uint32_t *v112;
  uint32_t *v113;
  uint32_t *v114;
  uint32_t *v115;
  uint32_t *v116;
  uint32_t *v117;
  uint32_t *v118;

  if ( a2 == nullptr )
    return;
  v2 = a2;
  while ( 2 )
  {
    v3 = (uint32_t *)v2[3];
    v112 = v3;
    if ( v3 == nullptr )
      goto LABEL_134;
    while ( 2 )
    {
      v4 = (uint32_t *)v3[3];
      v113 = v4;
      if ( v4 == nullptr )
        goto LABEL_158;
      while ( 2 )
      {
        v5 = (uint32_t *)v4[3];
        v114 = v5;
        if ( v5 == nullptr )
          goto LABEL_64;
        while ( 2 )
        {
          v6 = (uint32_t *)v5[3];
          v115 = v6;
          if ( v6 == nullptr )
            goto LABEL_100;
          while ( 2 )
          {
            v7 = (uint32_t *)v6[3];
            v116 = v7;
            if ( v7 != nullptr )
            {
              while ( 1 )
              {
                v8 = (uint32_t *)v7[3];
                v117 = v8;
                if ( v8 != nullptr )
                {
                  while ( 1 )
                  {
                    v9 = (uint32_t *)v8[3];
                    v118 = v9;
                    if ( v9 != nullptr )
                    {
                      while ( 1 )
                      {
                        v10 = (uint32_t *)v9[3];
                        v103 = v10;
                        if ( v10 != nullptr )
                        {
                          while ( 1 )
                          {
                            g4_std::Rb_tree_iap_RuleSet_iap_RuleSet_86d84f::M_erase(
                              a1,
                              v10[3]);
                            v111 = (uint32_t *)v103[2];
                            v11 = (uint32_t *)v103[7];
                            v91 = v11;
                            if ( v11 != nullptr )
                            {
                              while ( 1 )
                              {
                                g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
                                  (int)(uintptr_t)(v103 + 5),
                                  (uint32_t *)v11[3]);
                                v99 = (uint32_t *)v91[2];
                                v75 = (uint32_t *)v91[6];
                                v12 = v91[5];
                                if ( v75 != (uint32_t *)v12 )
                                {
                                  v13 = (uint32_t *)v91[5];
                                  do
                                  {
                                    v14 = v13[1];
                                    if ( (uint32_t *)(v14 - 12) != dword_213B808
                                      && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
                                    {
                                      g4_std::string::Rep::M_destroy((void *)(v14 - 12));
                                    }
                                    v15 = (uint32_t *)(*v13 - 12);
                                    if ( v15 != dword_213B808
                                      && __sync_fetch_and_add((volatile int32_t *)(*v13 - 4), 0xFFFFFFFF) <= 0 )
                                    {
                                      g4_std::string::Rep::M_destroy(v15);
                                    }
                                    v13 += 2;
                                  }
                                  while ( v75 != v13 );
                                  v12 = v91[5];
                                }
                                if ( v12 != 0 )
                                  sub_4EBEE0(v12);
                                v16 = v91[4];
                                if ( (uint32_t *)(v16 - 12) != dword_213B808
                                  && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
                                {
                                  g4_std::string::Rep::M_destroy((void *)(v16 - 12));
                                }
                                sub_4EBEE0((int)(uintptr_t)v91);
                                if ( v99 == nullptr )
                                  break;
                                v91 = v99;
                                v11 = v99;
                              }
                            }
                            v17 = v103[4];
                            if ( (uint32_t *)(v17 - 12) != dword_213B808
                              && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
                            {
                              g4_std::string::Rep::M_destroy((void *)(v17 - 12));
                            }
                            sub_4EBEE0((int)(uintptr_t)v103);
                            if ( v111 == nullptr )
                              break;
                            v103 = v111;
                            v10 = v111;
                          }
                        }
                        v104 = (uint32_t *)v118[2];
                        v18 = (uint32_t *)v118[7];
                        v92 = v18;
                        if ( v18 != nullptr )
                        {
                          while ( 1 )
                          {
                            g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
                              (int)(uintptr_t)(v118 + 5),
                              (uint32_t *)v18[3]);
                            v100 = (uint32_t *)v92[2];
                            v76 = (uint32_t *)v92[6];
                            v19 = v92[5];
                            if ( v76 != (uint32_t *)v19 )
                            {
                              v20 = (uint32_t *)v92[5];
                              do
                              {
                                v21 = v20[1];
                                if ( (uint32_t *)(v21 - 12) != dword_213B808
                                  && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
                                {
                                  g4_std::string::Rep::M_destroy((void *)(v21 - 12));
                                }
                                v22 = (uint32_t *)(*v20 - 12);
                                if ( v22 != dword_213B808
                                  && __sync_fetch_and_add((volatile int32_t *)(*v20 - 4), 0xFFFFFFFF) <= 0 )
                                {
                                  g4_std::string::Rep::M_destroy(v22);
                                }
                                v20 += 2;
                              }
                              while ( v76 != v20 );
                              v19 = v92[5];
                            }
                            if ( v19 != 0 )
                              sub_4EBEE0(v19);
                            v23 = v92[4];
                            if ( (uint32_t *)(v23 - 12) != dword_213B808
                              && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
                            {
                              g4_std::string::Rep::M_destroy((void *)(v23 - 12));
                            }
                            sub_4EBEE0((int)(uintptr_t)v92);
                            if ( v100 == nullptr )
                              break;
                            v92 = v100;
                            v18 = v100;
                          }
                        }
                        v24 = v118[4];
                        if ( (uint32_t *)(v24 - 12) != dword_213B808
                          && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
                        {
                          g4_std::string::Rep::M_destroy((void *)(v24 - 12));
                        }
                        sub_4EBEE0((int)(uintptr_t)v118);
                        if ( v104 == nullptr )
                          break;
                        v118 = v104;
                        v9 = v104;
                      }
                    }
                    v101 = (uint32_t *)v117[2];
                    v25 = (uint32_t *)v117[7];
                    v77 = v25;
                    if ( v25 != nullptr )
                    {
                      while ( 1 )
                      {
                        g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
                          (int)(uintptr_t)(v117 + 5),
                          (uint32_t *)v25[3]);
                        v102 = (uint32_t *)v77[2];
                        v84 = (uint32_t *)v77[6];
                        v26 = v77[5];
                        if ( v84 != (uint32_t *)v26 )
                        {
                          v27 = (uint32_t *)v77[5];
                          do
                          {
                            v28 = v27[1];
                            if ( (uint32_t *)(v28 - 12) != dword_213B808
                              && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
                            {
                              g4_std::string::Rep::M_destroy((void *)(v28 - 12));
                            }
                            v29 = (uint32_t *)(*v27 - 12);
                            if ( v29 != dword_213B808
                              && __sync_fetch_and_add((volatile int32_t *)(*v27 - 4), 0xFFFFFFFF) <= 0 )
                            {
                              g4_std::string::Rep::M_destroy(v29);
                            }
                            v27 += 2;
                          }
                          while ( v84 != v27 );
                          v26 = v77[5];
                        }
                        if ( v26 != 0 )
                          sub_4EBEE0(v26);
                        v30 = v77[4];
                        if ( (uint32_t *)(v30 - 12) != dword_213B808
                          && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
                        {
                          g4_std::string::Rep::M_destroy((void *)(v30 - 12));
                        }
                        sub_4EBEE0((int)(uintptr_t)v77);
                        if ( v102 == nullptr )
                          break;
                        v77 = v102;
                        v25 = v102;
                      }
                    }
                    v31 = v117[4];
                    if ( (uint32_t *)(v31 - 12) != dword_213B808
                      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
                    {
                      g4_std::string::Rep::M_destroy((void *)(v31 - 12));
                    }
                    sub_4EBEE0((int)(uintptr_t)v117);
                    if ( v101 == nullptr )
                      break;
                    v117 = v101;
                    v8 = v101;
                  }
                }
                v83 = (uint32_t *)v116[2];
                v67 = v116[7];
                if ( v67 != 0 )
                {
                  while ( 1 )
                  {
                    g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
                      (int)(uintptr_t)(v116 + 5),
                      *(uint32_t **)(v67 + 12));
                    v68 = *(uint32_t *)(v67 + 20);
                    v90 = *(uint32_t *)(v67 + 8);
                    v98 = *(uint32_t **)(v67 + 24);
                    if ( v98 != (uint32_t *)v68 )
                    {
                      v110 = v67;
                      v69 = *(uint32_t **)(v67 + 20);
                      do
                      {
                        v70 = v69[1];
                        if ( (uint32_t *)(v70 - 12) != dword_213B808
                          && __sync_fetch_and_add((volatile int32_t *)(v70 - 4), 0xFFFFFFFF) <= 0 )
                        {
                          g4_std::string::Rep::M_destroy((void *)(v70 - 12));
                        }
                        v71 = (uint32_t *)(*v69 - 12);
                        if ( v71 != dword_213B808
                          && __sync_fetch_and_add((volatile int32_t *)(*v69 - 4), 0xFFFFFFFF) <= 0 )
                        {
                          g4_std::string::Rep::M_destroy(v71);
                        }
                        v69 += 2;
                      }
                      while ( v98 != v69 );
                      v67 = v110;
                      v68 = *(uint32_t *)(v110 + 20);
                    }
                    if ( v68 != 0 )
                      sub_4EBEE0(v68);
                    v72 = *(uint32_t *)(v67 + 16);
                    if ( (uint32_t *)(v72 - 12) == dword_213B808
                      || __sync_fetch_and_add((volatile int32_t *)(v72 - 4), 0xFFFFFFFF) > 0 )
                    {
                      sub_4EBEE0(v67);
                      if ( v90 == 0 )
                        break;
                    }
                    else
                    {
                      g4_std::string::Rep::M_destroy((void *)(v72 - 12));
                      sub_4EBEE0(v67);
                      if ( v90 == 0 )
                        break;
                    }
                    v67 = v90;
                  }
                }
                v73 = v116[4];
                if ( (uint32_t *)(v73 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v73 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy((void *)(v73 - 12));
                }
                sub_4EBEE0((int)(uintptr_t)v116);
                if ( v83 == nullptr )
                  break;
                v116 = v83;
                v7 = v83;
              }
            }
            v79 = (uint32_t *)v115[2];
            v38 = v115[7];
            if ( v38 == 0 )
              goto LABEL_125;
            while ( 2 )
            {
              g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
                (int)(uintptr_t)(v115 + 5),
                *(uint32_t **)(v38 + 12));
              v39 = *(uint32_t *)(v38 + 20);
              v86 = *(uint32_t *)(v38 + 8);
              v94 = *(int **)(v38 + 24);
              if ( v94 == (int *)v39 )
                goto LABEL_95;
              v106 = v38;
              v40 = *(int **)(v38 + 20);
              do
              {
                while ( 1 )
                {
                  v43 = v40[1];
                  if ( (uint32_t *)(v43 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    break;
                  }
                  v41 = *v40;
                  v42 = (uint32_t *)(*v40 - 12);
                  if ( v42 != dword_213B808 )
                    goto LABEL_92;
LABEL_88:
                  v40 += 2;
                  if ( v94 == v40 )
                    goto LABEL_94;
                }
                g4_std::string::Rep::M_destroy((void *)(v43 - 12));
                v41 = *v40;
                v42 = (uint32_t *)(*v40 - 12);
                if ( v42 == dword_213B808 )
                  goto LABEL_88;
LABEL_92:
                if ( __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) > 0 )
                  goto LABEL_88;
                v40 += 2;
                g4_std::string::Rep::M_destroy(v42);
              }
              while ( v94 != v40 );
LABEL_94:
              v38 = v106;
              v39 = *(uint32_t *)(v106 + 20);
LABEL_95:
              if ( v39 != 0 )
                sub_4EBEE0(v39);
              v44 = *(uint32_t *)(v38 + 16);
              if ( (uint32_t *)(v44 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v44 - 12));
              }
              sub_4EBEE0(v38);
              if ( v86 != 0 )
              {
                v38 = v86;
                continue;
              }
              break;
            }
LABEL_125:
            v52 = v115[4];
            if ( (uint32_t *)(v52 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v52 - 12));
            }
            sub_4EBEE0((int)(uintptr_t)v115);
            if ( v79 != nullptr )
            {
              v115 = v79;
              v6 = v79;
              continue;
            }
            break;
          }
LABEL_100:
          v80 = (uint32_t *)v114[2];
          v45 = v114[7];
          if ( v45 != 0 )
          {
            while ( 1 )
            {
              g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
                (int)(uintptr_t)(v114 + 5),
                *(uint32_t **)(v45 + 12));
              v46 = *(uint32_t *)(v45 + 20);
              v87 = *(uint32_t *)(v45 + 8);
              v95 = *(uint32_t **)(v45 + 24);
              if ( v95 != (uint32_t *)v46 )
              {
                v107 = v45;
                v47 = *(uint32_t **)(v45 + 20);
                do
                {
                  v48 = v47[1];
                  if ( (uint32_t *)(v48 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v48 - 12));
                  }
                  v49 = (uint32_t *)(*v47 - 12);
                  if ( v49 != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(*v47 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v49);
                  }
                  v47 += 2;
                }
                while ( v95 != v47 );
                v45 = v107;
                v46 = *(uint32_t *)(v107 + 20);
              }
              if ( v46 != 0 )
                sub_4EBEE0(v46);
              v50 = *(uint32_t *)(v45 + 16);
              if ( (uint32_t *)(v50 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v50 - 12));
              }
              sub_4EBEE0(v45);
              if ( v87 == 0 )
                break;
              v45 = v87;
            }
          }
          v51 = v114[4];
          if ( (uint32_t *)(v51 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v51 - 12));
          }
          sub_4EBEE0((int)(uintptr_t)v114);
          if ( v80 != nullptr )
          {
            v114 = v80;
            v5 = v80;
            continue;
          }
          break;
        }
LABEL_64:
        v78 = (uint32_t *)v113[2];
        v32 = v113[7];
        if ( v32 != 0 )
        {
          while ( 1 )
          {
            g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
              (int)(uintptr_t)(v113 + 5),
              *(uint32_t **)(v32 + 12));
            v33 = *(uint32_t *)(v32 + 20);
            v85 = *(uint32_t *)(v32 + 8);
            v93 = *(uint32_t **)(v32 + 24);
            if ( v93 != (uint32_t *)v33 )
            {
              v105 = v32;
              v34 = *(uint32_t **)(v32 + 20);
              do
              {
                v35 = v34[1];
                if ( (uint32_t *)(v35 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy((void *)(v35 - 12));
                }
                v36 = (uint32_t *)(*v34 - 12);
                if ( v36 != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(*v34 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v36);
                }
                v34 += 2;
              }
              while ( v93 != v34 );
              v32 = v105;
              v33 = *(uint32_t *)(v105 + 20);
            }
            if ( v33 != 0 )
              sub_4EBEE0(v33);
            v37 = *(uint32_t *)(v32 + 16);
            if ( (uint32_t *)(v37 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v37 - 12));
            }
            sub_4EBEE0(v32);
            if ( v85 == 0 )
              break;
            v32 = v85;
          }
        }
        v74 = v113[4];
        if ( (uint32_t *)(v74 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v74 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v74 - 12));
        }
        sub_4EBEE0((int)(uintptr_t)v113);
        if ( v78 != nullptr )
        {
          v113 = v78;
          v4 = v78;
          continue;
        }
        break;
      }
LABEL_158:
      v82 = (uint32_t *)v112[2];
      v60 = v112[7];
      if ( v60 != 0 )
      {
        while ( 1 )
        {
          g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
            (int)(uintptr_t)(v112 + 5),
            *(uint32_t **)(v60 + 12));
          v61 = *(uint32_t *)(v60 + 20);
          v89 = *(uint32_t *)(v60 + 8);
          v97 = *(uint32_t **)(v60 + 24);
          if ( v97 != (uint32_t *)v61 )
          {
            v109 = v60;
            v62 = *(uint32_t **)(v60 + 20);
            do
            {
              v63 = v62[1];
              if ( (uint32_t *)(v63 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v63 - 12));
              }
              v64 = (uint32_t *)(*v62 - 12);
              if ( v64 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v62 - 4), 0xFFFFFFFF) <= 0 )
                g4_std::string::Rep::M_destroy(v64);
              v62 += 2;
            }
            while ( v97 != v62 );
            v60 = v109;
            v61 = *(uint32_t *)(v109 + 20);
          }
          if ( v61 != 0 )
            sub_4EBEE0(v61);
          v65 = *(uint32_t *)(v60 + 16);
          if ( (uint32_t *)(v65 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v65 - 12));
          }
          sub_4EBEE0(v60);
          if ( v89 == 0 )
            break;
          v60 = v89;
        }
      }
      v66 = v112[4];
      if ( (uint32_t *)(v66 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v66 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v66 - 12));
      }
      sub_4EBEE0((int)(uintptr_t)v112);
      if ( v82 != nullptr )
      {
        v112 = v82;
        v3 = v82;
        continue;
      }
      break;
    }
LABEL_134:
    v81 = (uint32_t *)a2[2];
    v53 = a2[7];
    if ( v53 != 0 )
    {
      while ( 1 )
      {
        g4_std::Rb_tree_iap_Rule_iap_Rule_Identi_1dae33::M_erase(
          (int)(uintptr_t)(a2 + 5),
          *(uint32_t **)(v53 + 12));
        v54 = *(uint32_t *)(v53 + 20);
        v88 = *(uint32_t *)(v53 + 8);
        v96 = *(uint32_t **)(v53 + 24);
        if ( v96 != (uint32_t *)v54 )
        {
          v108 = v53;
          v55 = *(uint32_t **)(v53 + 20);
          do
          {
            v56 = v55[1];
            if ( (uint32_t *)(v56 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v56 - 12));
            }
            v57 = (uint32_t *)(*v55 - 12);
            if ( v57 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v55 - 4), 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy(v57);
            v55 += 2;
          }
          while ( v96 != v55 );
          v53 = v108;
          v54 = *(uint32_t *)(v108 + 20);
        }
        if ( v54 != 0 )
          sub_4EBEE0(v54);
        v58 = *(uint32_t *)(v53 + 16);
        if ( (uint32_t *)(v58 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v58 - 12));
        }
        sub_4EBEE0(v53);
        if ( v88 == 0 )
          break;
        v53 = v88;
      }
    }
    v59 = a2[4];
    if ( (uint32_t *)(v59 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v59 - 12));
    }
    sub_4EBEE0((int)(uintptr_t)a2);
    if ( v81 != nullptr )
    {
      a2 = v81;
      v2 = v81;
      continue;
    }
    break;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_14FCFE0  (binary VA: 0x14fcfe0)
// Original: sub_14FCFE0
// ----------------------------------------------------------------------------
int sub_14FCFE0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_211A394);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A394, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A398, "UNKNOWN", (int)(uintptr_t)&v1 + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A398, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A39C, "IMEI", (int)(uintptr_t)&v1 + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A39C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&unk_211A3A0, "HDIDFV", (int)(uintptr_t)&v1);
  return __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211A3A0, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy  (binary VA: 0x15007f0)
// Original: std::_Rb_tree<glwebtools::CustomAttribute,glwebtools::CustomAttribute,std::_Identity<glwebtools::CustomAttribute>,std::less<glwebtools::CustomAttribute>,glwebtools::SAllocator<glwebtools::CustomAttribute,(glwebtools::MemHint)4>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(int a1, uint32_t *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  uint32_t *i;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int *v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *j;
  int v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;
  int v22;
  int *v23;
  uint32_t *v24;
  uint32_t *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  uint32_t *v31;
  uint32_t *v32;
  int v33;
  int *v34;
  uint32_t *v35;
  uint32_t *v36;
  int v37;
  int v38;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  uint32_t *v48;
  uint32_t *v49;
  uint32_t *v50;
  int *v51;
  uint32_t *v52;

  v52 = (uint32_t *)sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
  if ( v52 != (uint32_t *)-16 )
  {
    g4_std::string::construct_copy(v52 + 4, a2 + 4);
    glwebtools::CustomArgument::Construct(
      (glwebtools::CustomArgument::Self *)(v52 + 5),
      (const glwebtools::CustomArgument::Self *)(a2 + 5));
  }
  *v52 = *a2;
  v52[3] = 0;
  v52[2] = 0;
  v52[1] = a3;
  v3 = a2;
  v4 = (uint32_t *)a2[3];
  if ( v4 != nullptr )
  {
    v48 = (uint32_t *)sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
    if ( v48 != (uint32_t *)-16 )
    {
      g4_std::string::construct_copy(v48 + 4, v4 + 4);
      glwebtools::CustomArgument::Construct(
        (glwebtools::CustomArgument::Self *)(v48 + 5),
        (const glwebtools::CustomArgument::Self *)(v4 + 5));
    }
    *v48 = *v4;
    v48[2] = 0;
    v48[3] = 0;
    v48[1] = (uint32_t)(uintptr_t)(v52);
    v5 = v4[3];
    if ( v5 != 0 )
      v48[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                 a1,
                 v5,
                 v48);
    v46 = (uint32_t *)v4[2];
    if ( v46 != nullptr )
    {
      for ( i = v48; ; i = v40 )
      {
        v7 = sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
        v40 = (uint32_t *)v7;
        if ( v7 != -16 )
        {
          g4_std::string::construct_copy(v7 + 16, v46 + 4);
          glwebtools::CustomArgument::Construct(
            (glwebtools::CustomArgument::Self *)(v40 + 5),
            (const glwebtools::CustomArgument::Self *)(v46 + 5));
        }
        v8 = *v46;
        v40[3] = 0;
        *v40 = v8;
        v40[2] = 0;
        i[2] = (uint32_t)(uintptr_t)(v40);
        v40[1] = (uint32_t)(uintptr_t)(i);
        v9 = v46;
        v10 = (uint32_t *)v46[3];
        if ( v10 != nullptr )
        {
          v43 = (uint32_t *)sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
          if ( v43 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v43 + 4, v10 + 4);
            glwebtools::CustomArgument::Construct(
              (glwebtools::CustomArgument::Self *)(v43 + 5),
              (const glwebtools::CustomArgument::Self *)(v10 + 5));
          }
          *v43 = *v10;
          v43[2] = 0;
          v43[3] = 0;
          v43[1] = (uint32_t)(uintptr_t)(v40);
          v11 = v10[3];
          if ( v11 != 0 )
            v43[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                       a1,
                       v11,
                       v43);
          v12 = (int *)v10[2];
          v13 = v43;
          if ( v12 != nullptr )
          {
            while ( 1 )
            {
              v14 = (uint32_t *)sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
              if ( v14 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v14 + 4, v12 + 4);
                glwebtools::CustomArgument::Construct(
                  (glwebtools::CustomArgument::Self *)(v14 + 5),
                  (const glwebtools::CustomArgument::Self *)(v12 + 5));
              }
              v15 = *v12;
              v14[2] = 0;
              *v14 = v15;
              v14[3] = 0;
              v13[2] = (uint32_t)(uintptr_t)(v14);
              v14[1] = (uint32_t)(uintptr_t)(v13);
              v16 = v12[3];
              if ( v16 != 0 )
                v14[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                           a1,
                           v16,
                           v14);
              v12 = (int *)v12[2];
              if ( v12 == nullptr )
                break;
              v13 = v14;
            }
          }
          v40[3] = (uint32_t)(uintptr_t)(v43);
          v9 = v46;
        }
        v46 = (uint32_t *)v9[2];
        if ( v46 == nullptr )
          break;
      }
    }
    v52[3] = (uint32_t)(uintptr_t)(v48);
    v3 = a2;
  }
  v51 = (int *)v3[2];
  if ( v51 != nullptr )
  {
    for ( j = v52; ; j = v49 )
    {
      v49 = (uint32_t *)sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
      if ( v49 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v49 + 4, v51 + 4);
        glwebtools::CustomArgument::Construct(
          (glwebtools::CustomArgument::Self *)(v49 + 5),
          (const glwebtools::CustomArgument::Self *)(v51 + 5));
      }
      v18 = *v51;
      v49[3] = 0;
      *v49 = v18;
      v49[2] = 0;
      j[2] = (uint32_t)(uintptr_t)(v49);
      v49[1] = (uint32_t)(uintptr_t)(j);
      v41 = (uint32_t *)v51[3];
      if ( v41 != nullptr )
      {
        v19 = sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
        v50 = (uint32_t *)v19;
        if ( v19 != -16 )
        {
          g4_std::string::construct_copy(v19 + 16, v41 + 4);
          glwebtools::CustomArgument::Construct(
            (glwebtools::CustomArgument::Self *)(v50 + 5),
            (const glwebtools::CustomArgument::Self *)(v41 + 5));
        }
        *v50 = *v41;
        v50[3] = 0;
        v50[2] = 0;
        v50[1] = (uint32_t)(uintptr_t)(v49);
        v20 = v41;
        v21 = (uint32_t *)v41[3];
        if ( v21 != nullptr )
        {
          v44 = (uint32_t *)sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
          if ( v44 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v44 + 4, v21 + 4);
            glwebtools::CustomArgument::Construct(
              (glwebtools::CustomArgument::Self *)(v44 + 5),
              (const glwebtools::CustomArgument::Self *)(v21 + 5));
          }
          *v44 = *v21;
          v44[2] = 0;
          v44[3] = 0;
          v44[1] = (uint32_t)(uintptr_t)(v50);
          v22 = v21[3];
          if ( v22 != 0 )
            v44[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                       a1,
                       v22,
                       v44);
          v23 = (int *)v21[2];
          v24 = v44;
          if ( v23 != nullptr )
          {
            while ( 1 )
            {
              v25 = (uint32_t *)sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
              if ( v25 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v25 + 4, v23 + 4);
                glwebtools::CustomArgument::Construct(
                  (glwebtools::CustomArgument::Self *)(v25 + 5),
                  (const glwebtools::CustomArgument::Self *)(v23 + 5));
              }
              v26 = *v23;
              v25[2] = 0;
              *v25 = v26;
              v25[3] = 0;
              v24[2] = (uint32_t)(uintptr_t)(v25);
              v25[1] = (uint32_t)(uintptr_t)(v24);
              v27 = v23[3];
              if ( v27 != 0 )
                v25[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                           a1,
                           v27,
                           v25);
              v23 = (int *)v23[2];
              if ( v23 == nullptr )
                break;
              v24 = v25;
            }
          }
          v50[3] = (uint32_t)(uintptr_t)(v44);
          v20 = v41;
        }
        v28 = v50;
        v47 = (uint32_t *)v20[2];
        if ( v47 != nullptr )
        {
          while ( 1 )
          {
            v29 = sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
            v42 = (uint32_t *)v29;
            if ( v29 != -16 )
            {
              g4_std::string::construct_copy(v29 + 16, v47 + 4);
              glwebtools::CustomArgument::Construct(
                (glwebtools::CustomArgument::Self *)(v42 + 5),
                (const glwebtools::CustomArgument::Self *)(v47 + 5));
            }
            v30 = *v47;
            v42[3] = 0;
            *v42 = v30;
            v42[2] = 0;
            v28[2] = (uint32_t)(uintptr_t)(v42);
            v42[1] = (uint32_t)(uintptr_t)(v28);
            v31 = v47;
            v32 = (uint32_t *)v47[3];
            if ( v32 != nullptr )
            {
              v45 = (uint32_t *)sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
              if ( v45 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v45 + 4, v32 + 4);
                glwebtools::CustomArgument::Construct(
                  (glwebtools::CustomArgument::Self *)(v45 + 5),
                  (const glwebtools::CustomArgument::Self *)(v32 + 5));
              }
              *v45 = *v32;
              v45[2] = 0;
              v45[3] = 0;
              v45[1] = (uint32_t)(uintptr_t)(v42);
              v33 = v32[3];
              if ( v33 != 0 )
                v45[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                           a1,
                           v33,
                           v45);
              v34 = (int *)v32[2];
              v35 = v45;
              if ( v34 != nullptr )
              {
                while ( 1 )
                {
                  v36 = (uint32_t *)sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
                  if ( v36 != (uint32_t *)-16 )
                  {
                    g4_std::string::construct_copy(v36 + 4, v34 + 4);
                    glwebtools::CustomArgument::Construct(
                      (glwebtools::CustomArgument::Self *)(v36 + 5),
                      (const glwebtools::CustomArgument::Self *)(v34 + 5));
                  }
                  v37 = *v34;
                  v36[2] = 0;
                  *v36 = v37;
                  v36[3] = 0;
                  v35[2] = (uint32_t)(uintptr_t)(v36);
                  v36[1] = (uint32_t)(uintptr_t)(v35);
                  v38 = v34[3];
                  if ( v38 != 0 )
                    v36[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                               a1,
                               v38,
                               v36);
                  v34 = (int *)v34[2];
                  if ( v34 == nullptr )
                    break;
                  v35 = v36;
                }
              }
              v42[3] = (uint32_t)(uintptr_t)(v45);
              v31 = v47;
            }
            v47 = (uint32_t *)v31[2];
            if ( v47 == nullptr )
              break;
            v28 = v42;
          }
        }
        v49[3] = (uint32_t)(uintptr_t)(v50);
      }
      v51 = (int *)v51[2];
      if ( v51 == nullptr )
        break;
    }
  }
  return v52;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_iap_BillingMethod_glwebt_16743f::M_insert_aux  (binary VA: 0x1501010)
// Original: std::vector<iap::BillingMethod,glwebtools::SAllocator<iap::BillingMethod,(glwebtools::MemHint)4>>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_iap_BillingMethod_glwebt_16743f::M_insert_aux(int *a1, int a2, int a3)
{
  int v3;
  char v4;
  char v5;
  char v6;
  int64_t v7; // xmm0_8
  char v8;
  int64_t v9; // xmm0_8
  char v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *i;
  int *v14;
  int v15;
  char v16;
  int64_t v17; // xmm0_8
  char v18;
  int64_t v19; // xmm0_8
  char v20;
  uint32_t *v21;
  uint32_t *v22;
  int *j;
  int k;
  int v25;
  int v26;
  int v27;
  int v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  char v32;
  char v33;
  uint32_t *v34;
  bool v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  int v39;
  unsigned int v40;
  int v41;
  int v42;
  int v43;
  char v44;
  char v45;
  char v46;
  char v47;
  char v48;
  uint32_t *v49;
  uint32_t *v50;
  uint32_t *m;
  int v52;
  int v53;
  uint32_t *v54;
  uint32_t *v55;
  uint32_t *n;
  int v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *ii;
  uint32_t *v61;
  int v62;
  typedef uint32_t *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef size_t _g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint32_t (**_g4_t_v78)(iap::BillingMethod::Self *, const glwebtools::JsonReader::Self *);
  typedef uint32_t *_g4_t_v79;
  typedef char _g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef char _g4_t_v82;
  typedef uint32_t *_g4_t_v83;
  typedef char _g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef char _g4_t_v86;
  typedef int64_t _g4_t_v87 __attribute__((aligned(1)));
  typedef char _g4_t_v88;
  typedef uint32_t *_g4_t_v89;
  typedef char _g4_t_v90;
  typedef int64_t _g4_t_v91;
  typedef char _g4_t_v92;
  typedef uint32_t *_g4_t_v93;
  typedef char _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef uint32_t *_g4_t_v99;
  typedef int *_g4_t_v100;
  typedef int *_g4_t_v101;
  typedef int _g4_t_v102;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v63)) > _g4_s0 ? (0u + sizeof(_g4_t_v63)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v64)) > _g4_s1 ? (44u + sizeof(_g4_t_v64)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v65)) > _g4_s2 ? (48u + sizeof(_g4_t_v65)) : _g4_s2,
    _g4_s4 = (104u + sizeof(_g4_t_v66)) > _g4_s3 ? (104u + sizeof(_g4_t_v66)) : _g4_s3,
    _g4_s5 = (108u + sizeof(_g4_t_v67)) > _g4_s4 ? (108u + sizeof(_g4_t_v67)) : _g4_s4,
    _g4_s6 = (116u + sizeof(_g4_t_v68)) > _g4_s5 ? (116u + sizeof(_g4_t_v68)) : _g4_s5,
    _g4_s7 = (124u + sizeof(_g4_t_v69)) > _g4_s6 ? (124u + sizeof(_g4_t_v69)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v70)) > _g4_s7 ? (128u + sizeof(_g4_t_v70)) : _g4_s7,
    _g4_s9 = (128u + sizeof(_g4_t_v71)) > _g4_s8 ? (128u + sizeof(_g4_t_v71)) : _g4_s8,
    _g4_s10 = (132u + sizeof(_g4_t_v72)) > _g4_s9 ? (132u + sizeof(_g4_t_v72)) : _g4_s9,
    _g4_s11 = (132u + sizeof(_g4_t_v73)) > _g4_s10 ? (132u + sizeof(_g4_t_v73)) : _g4_s10,
    _g4_s12 = (132u + sizeof(_g4_t_v74)) > _g4_s11 ? (132u + sizeof(_g4_t_v74)) : _g4_s11,
    _g4_s13 = (136u + sizeof(_g4_t_v75)) > _g4_s12 ? (136u + sizeof(_g4_t_v75)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v76)) > _g4_s13 ? (136u + sizeof(_g4_t_v76)) : _g4_s13,
    _g4_s15 = (136u + sizeof(_g4_t_v77)) > _g4_s14 ? (136u + sizeof(_g4_t_v77)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v78)) > _g4_s15 ? (144u + sizeof(_g4_t_v78)) : _g4_s15,
    _g4_s17 = (148u + sizeof(_g4_t_v79)) > _g4_s16 ? (148u + sizeof(_g4_t_v79)) : _g4_s16,
    _g4_s18 = (154u + sizeof(_g4_t_v80)) > _g4_s17 ? (154u + sizeof(_g4_t_v80)) : _g4_s17,
    _g4_s19 = (156u + sizeof(_g4_t_v81)) > _g4_s18 ? (156u + sizeof(_g4_t_v81)) : _g4_s18,
    _g4_s20 = (162u + sizeof(_g4_t_v82)) > _g4_s19 ? (162u + sizeof(_g4_t_v82)) : _g4_s19,
    _g4_s21 = (164u + sizeof(_g4_t_v83)) > _g4_s20 ? (164u + sizeof(_g4_t_v83)) : _g4_s20,
    _g4_s22 = (170u + sizeof(_g4_t_v84)) > _g4_s21 ? (170u + sizeof(_g4_t_v84)) : _g4_s21,
    _g4_s23 = (172u + sizeof(_g4_t_v85)) > _g4_s22 ? (172u + sizeof(_g4_t_v85)) : _g4_s22,
    _g4_s24 = (178u + sizeof(_g4_t_v86)) > _g4_s23 ? (178u + sizeof(_g4_t_v86)) : _g4_s23,
    _g4_s25 = (180u + sizeof(_g4_t_v87)) > _g4_s24 ? (180u + sizeof(_g4_t_v87)) : _g4_s24,
    _g4_s26 = (190u + sizeof(_g4_t_v88)) > _g4_s25 ? (190u + sizeof(_g4_t_v88)) : _g4_s25,
    _g4_s27 = (192u + sizeof(_g4_t_v89)) > _g4_s26 ? (192u + sizeof(_g4_t_v89)) : _g4_s26,
    _g4_s28 = (198u + sizeof(_g4_t_v90)) > _g4_s27 ? (198u + sizeof(_g4_t_v90)) : _g4_s27,
    _g4_s29 = (200u + sizeof(_g4_t_v91)) > _g4_s28 ? (200u + sizeof(_g4_t_v91)) : _g4_s28,
    _g4_s30 = (210u + sizeof(_g4_t_v92)) > _g4_s29 ? (210u + sizeof(_g4_t_v92)) : _g4_s29,
    _g4_s31 = (212u + sizeof(_g4_t_v93)) > _g4_s30 ? (212u + sizeof(_g4_t_v93)) : _g4_s30,
    _g4_s32 = (218u + sizeof(_g4_t_v94)) > _g4_s31 ? (218u + sizeof(_g4_t_v94)) : _g4_s31,
    _g4_s33 = (220u + sizeof(_g4_t_v95)) > _g4_s32 ? (220u + sizeof(_g4_t_v95)) : _g4_s32,
    _g4_s34 = (224u + sizeof(_g4_t_v96)) > _g4_s33 ? (224u + sizeof(_g4_t_v96)) : _g4_s33,
    _g4_s35 = (228u + sizeof(_g4_t_v97)) > _g4_s34 ? (228u + sizeof(_g4_t_v97)) : _g4_s34,
    _g4_s36 = (232u + sizeof(_g4_t_v98)) > _g4_s35 ? (232u + sizeof(_g4_t_v98)) : _g4_s35,
    _g4_s37 = (236u + sizeof(_g4_t_v99)) > _g4_s36 ? (236u + sizeof(_g4_t_v99)) : _g4_s36,
    _g4_s38 = (240u + sizeof(_g4_t_v100)) > _g4_s37 ? (240u + sizeof(_g4_t_v100)) : _g4_s37,
    _g4_s39 = (244u + sizeof(_g4_t_v101)) > _g4_s38 ? (244u + sizeof(_g4_t_v101)) : _g4_s38,
    _g4_s40 = (248u + sizeof(_g4_t_v102)) > _g4_s39 ? (248u + sizeof(_g4_t_v102)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 0u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 104u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 108u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 116u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 124u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 128u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 128u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 132u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 132u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 132u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 136u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 136u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 136u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 144u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 148u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 154u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 156u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 162u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 164u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 170u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 172u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 178u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 180u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 190u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 192u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 198u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 200u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 210u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 212u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 218u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 220u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 224u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 228u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 232u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 236u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 240u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 244u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 248u);

  v3 = a1[1];
  if ( v3 != a1[2] )
  {
    if ( v3 != 0 )
    {
      *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_2096048);
      *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
      g4_std::string::assign_str(v3 + 4, v3 - 104);
      v4 = *(uint8_t *)(v3 - 98);
      *(uint32_t *)(v3 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
      *(uint8_t *)(v3 + 10) = v4;
      g4_std::string::assign_str(v3 + 12, v3 - 96);
      v5 = *(uint8_t *)(v3 - 90);
      *(uint32_t *)(v3 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
      *(uint8_t *)(v3 + 18) = v5;
      g4_std::string::assign_str(v3 + 20, v3 - 88);
      v6 = *(uint8_t *)(v3 - 82);
      *(uint32_t *)(v3 + 28) = (uint32_t)(uintptr_t)(&dword_213B814);
      *(uint8_t *)(v3 + 26) = v6;
      g4_std::string::assign_str(v3 + 28, v3 - 80);
      v7 = *(uint64_t *)(v3 - 72);
      *(uint8_t *)(v3 + 34) = *(uint8_t *)(v3 - 74);
      v8 = *(uint8_t *)(v3 - 62);
      *(uint32_t *)(v3 + 48) = (uint32_t)(uintptr_t)(&dword_213B814);
      *(uint64_t *)(v3 + 36) = v7;
      *(uint8_t *)(v3 + 46) = v8;
      g4_std::string::assign_str(v3 + 48, v3 - 60);
      v9 = *(uint64_t *)(v3 - 52);
      *(uint8_t *)(v3 + 54) = *(uint8_t *)(v3 - 54);
      v10 = *(uint8_t *)(v3 - 42);
      *(uint32_t *)(v3 + 68) = (uint32_t)(uintptr_t)(&dword_213B814);
      *(uint64_t *)(v3 + 56) = v9;
      *(uint8_t *)(v3 + 66) = v10;
      g4_std::string::assign_str(v3 + 68, v3 - 40);
      *(uint8_t *)(v3 + 74) = *(uint8_t *)(v3 - 34);
      g4_std::string::construct_copy(v3 + 76, v3 - 32);
      g4_std::string::construct_copy(v3 + 80, v3 - 28);
      v11 = *(uint32_t **)(v3 - 16);
      *(uint32_t *)(v3 + 88) = 0;
      *(uint32_t *)(v3 + 92) = 0;
      *(uint32_t *)(v3 + 104) = 0;
      *(uint32_t *)(v3 + 96) = v3 + 88;
      *(uint32_t *)(v3 + 100) = v3 + 88;
      if ( v11 != nullptr )
      {
        v12 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                v3 + 84,
                v11,
                v3 + 88);
        *(uint32_t *)(v3 + 92) = (uint32_t)(uintptr_t)(v12);
        for ( i = v12; i[2] != 0; i = (uint32_t *)i[2] )
          ;
        *(uint32_t *)(v3 + 96) = (uint32_t)(uintptr_t)(i);
        while ( v12[3] != 0 )
          v12 = (uint32_t *)v12[3];
        *(uint32_t *)(v3 + 100) = (uint32_t)(uintptr_t)(v12);
        v14 = a1;
        *(uint32_t *)(v3 + 104) = *(uint32_t *)(v3 - 4);
        v15 = a1[1];
      }
      else
      {
        v14 = a1;
        v15 = a1[1];
      }
    }
    else
    {
      v15 = 0;
      v14 = a1;
    }
    v14[1] = v15 + 108;
    v78 = (uint32_t (**)(iap::BillingMethod::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2096048));
    v79 = &dword_213B814;
    g4_std::string::assign_str(&v79, a3 + 4);
    v80 = *(uint8_t *)(a3 + 10);
    v81 = &dword_213B814;
    g4_std::string::assign_str(&v81, a3 + 12);
    v82 = *(uint8_t *)(a3 + 18);
    v83 = &dword_213B814;
    g4_std::string::assign_str(&v83, a3 + 20);
    v16 = *(uint8_t *)(a3 + 26);
    v85 = &dword_213B814;
    v84 = v16;
    g4_std::string::assign_str(&v85, a3 + 28);
    v17 = *(uint64_t *)(a3 + 36);
    v86 = *(uint8_t *)(a3 + 34);
    v18 = *(uint8_t *)(a3 + 46);
    v89 = &dword_213B814;
    v88 = v18;
    v87 = v17;
    g4_std::string::assign_str(&v89, a3 + 48);
    v19 = *(uint64_t *)(a3 + 56);
    v90 = *(uint8_t *)(a3 + 54);
    v20 = *(uint8_t *)(a3 + 66);
    v93 = &dword_213B814;
    v92 = v20;
    v91 = v19;
    g4_std::string::assign_str(&v93, a3 + 68);
    v94 = *(uint8_t *)(a3 + 74);
    g4_std::string::construct_copy(&v95, a3 + 76);
    g4_std::string::construct_copy(&v96, a3 + 80);
    v21 = *(uint32_t **)(a3 + 92);
    v98 = 0;
    v99 = nullptr;
    v102 = 0;
    v100 = &v98;
    v101 = &v98;
    if ( v21 != nullptr )
    {
      v22 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
              (int)(uintptr_t)&v97,
              v21,
              (int)(uintptr_t)&v98);
      v99 = v22;
      for ( j = (int *)(v22); j[2] != 0; j = (int *)j[2] )
        ;
      v100 = j;
      while ( v22[3] != 0 )
        v22 = (uint32_t *)v22[3];
      v101 = (int *)(v22);
      v102 = *(uint32_t *)(a3 + 104);
    }
    v72 = a1[1];
    v75 = 1749801491 * ((v72 - 216 - a2) >> 2);
    if ( v75 > 0 )
    {
      for ( k = v72 - 108; ; k = v28 )
      {
        v64 = k - 108;
        g4_std::string::assign_str(k - 104, k - 212);
        v25 = k - 108 - v72;
        *(uint8_t *)(v64 - 212 + 222) = *(uint8_t *)(v64 - 320 + 222);
        g4_std::string::assign_str(k - 96, k - 204);
        *(uint8_t *)(v25 + v72 - 204 + 222) = *(uint8_t *)(v25 + v72 - 312 + 222);
        g4_std::string::assign_str(k - 88, k - 196);
        *(uint8_t *)(v25 + v72 - 196 + 222) = *(uint8_t *)(v25 + v72 - 304 + 222);
        g4_std::string::assign_str(k - 80, k - 188);
        *(uint8_t *)(v25 + v72 - 188 + 222) = *(uint8_t *)(v25 + v72 - 296 + 222);
        *(uint64_t *)(v64 + 36) = *(uint64_t *)(v64 - 72);
        *(uint8_t *)(v25 + v72 - 180 + 226) = *(uint8_t *)(v25 + v72 - 288 + 226);
        g4_std::string::assign_str(k - 60, k - 168);
        *(uint8_t *)(v25 + v72 - 168 + 222) = *(uint8_t *)(v25 + v72 - 276 + 222);
        *(uint64_t *)(v64 + 56) = *(uint64_t *)(v64 - 52);
        *(uint8_t *)(v25 + v72 - 160 + 226) = *(uint8_t *)(v25 + v72 - 268 + 226);
        g4_std::string::assign_str(k - 40, k - 148);
        *(uint8_t *)(v25 + v72 - 148 + 222) = *(uint8_t *)(v25 + v72 - 256 + 222);
        g4_std::string::assign_str(k - 32, k - 140);
        g4_std::string::assign_str(k - 28, k - 136);
        v26 = k - 24;
        v27 = k - 20;
        v65 = v26;
        g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
          v26,
          *(uint32_t **)(v64 + 92));
        v28 = v64;
        *(uint32_t *)(v64 + 96) = v27;
        *(uint32_t *)(v64 + 92) = 0;
        *(uint32_t *)(v64 + 100) = v27;
        *(uint32_t *)(v25 + v72 - 132 + 236) = 0;
        v29 = *(uint32_t **)(v64 - 16);
        if ( v29 != nullptr )
        {
          v30 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                  v65,
                  v29,
                  v27);
          v28 = v64;
          v31 = v30;
          *(uint32_t *)(v64 + 92) = (uint32_t)(uintptr_t)(v30);
          while ( v31[2] != 0 )
            v31 = (uint32_t *)v31[2];
          *(uint32_t *)(v64 + 96) = (uint32_t)(uintptr_t)(v31);
          while ( v30[3] != 0 )
            v30 = (uint32_t *)v30[3];
          *(uint32_t *)(v64 + 100) = (uint32_t)(uintptr_t)(v30);
          *(uint32_t *)(v64 - 132 + 236) = *(uint32_t *)(v64 - 216 + 212);
        }
        if ( --v75 == 0 )
          break;
      }
    }
    g4_std::string::assign_str(a2 + 4, &v79);
    *(uint8_t *)(a2 + 10) = v80;
    g4_std::string::assign_str(a2 + 12, &v81);
    *(uint8_t *)(a2 + 18) = v82;
    g4_std::string::assign_str(a2 + 20, &v83);
    *(uint8_t *)(a2 + 26) = v84;
    g4_std::string::assign_str(a2 + 28, &v85);
    v32 = v86;
    *(uint64_t *)(a2 + 36) = v87;
    *(uint8_t *)(a2 + 34) = v32;
    *(uint8_t *)(a2 + 46) = v88;
    g4_std::string::assign_str(a2 + 48, &v89);
    v33 = v90;
    *(uint64_t *)(a2 + 56) = v91;
    *(uint8_t *)(a2 + 54) = v33;
    *(uint8_t *)(a2 + 66) = v92;
    g4_std::string::assign_str(a2 + 68, &v93);
    *(uint8_t *)(a2 + 74) = v94;
    g4_std::string::assign_str(a2 + 76, &v95);
    g4_std::string::assign_str(a2 + 80, &v96);
    if ( (int *)(a2 + 84) != &v97 )
    {
      g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
        a2 + 84,
        *(uint32_t **)(a2 + 92));
      v34 = v99;
      v35 = v99 == nullptr;
      *(uint32_t *)(a2 + 96) = a2 + 88;
      *(uint32_t *)(a2 + 92) = 0;
      *(uint32_t *)(a2 + 100) = a2 + 88;
      *(uint32_t *)(a2 + 104) = 0;
      if ( !v35 )
      {
        v36 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                a2 + 84,
                v34,
                a2 + 88);
        v37 = v36;
        *(uint32_t *)(a2 + 92) = (uint32_t)(uintptr_t)(v36);
        while ( v37[2] != 0 )
          v37 = (uint32_t *)v37[2];
        *(uint32_t *)(a2 + 96) = (uint32_t)(uintptr_t)(v37);
        while ( v36[3] != 0 )
          v36 = (uint32_t *)v36[3];
        *(uint32_t *)(a2 + 100) = (uint32_t)(uintptr_t)(v36);
        *(uint32_t *)(a2 + 104) = v102;
      }
    }
    iap::BillingMethod::Destroy((iap::BillingMethod::Self *)&v78);
    return;
  }
  v38 = (uint32_t *)*a1;
  v39 = (v3 - *a1) >> 2;
  if ( 1749801491 * v39 == 0 )
  {
    v66 = 108;
    v41 = 1749801491 * ((a2 - (int)(uintptr_t)v38) >> 2);
    v42 = sub_4EBE70(0x6Cu, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
    goto LABEL_47;
  }
  v40 = -795364314 * v39;
  if ( 1749801491 * v39 > (unsigned int)(-795364314 * v39) || v40 > 0x25ED097 )
  {
    v66 = 0xFFFFFFB4;
    v41 = 1749801491 * ((a2 - (int)(uintptr_t)v38) >> 2);
LABEL_46:
    v42 = sub_4EBE70(v66, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
LABEL_47:
    v69 = v42;
    v68 = v42 + 108;
    goto LABEL_48;
  }
  v66 = 8 * v39;
  v41 = 1749801491 * ((a2 - (int)(uintptr_t)v38) >> 2);
  if ( v40 != 0 )
    goto LABEL_46;
  v68 = 108;
  v69 = 0;
LABEL_48:
  v43 = v69 + 108 * v41;
  if ( v43 != 0 )
  {
    *(uint32_t *)v43 = ((uint32_t)(uintptr_t)&off_2096048);
    *(uint32_t *)(v43 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
    g4_std::string::assign_str(v43 + 4, a3 + 4);
    v44 = *(uint8_t *)(a3 + 10);
    *(uint32_t *)(v43 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint8_t *)(v43 + 10) = v44;
    g4_std::string::assign_str(v43 + 12, a3 + 12);
    v45 = *(uint8_t *)(a3 + 18);
    *(uint32_t *)(v43 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint8_t *)(v43 + 18) = v45;
    g4_std::string::assign_str(v43 + 20, a3 + 20);
    v46 = *(uint8_t *)(a3 + 26);
    *(uint32_t *)(v43 + 28) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint8_t *)(v43 + 26) = v46;
    g4_std::string::assign_str(v43 + 28, a3 + 28);
    *(uint8_t *)(v43 + 34) = *(uint8_t *)(a3 + 34);
    *(uint64_t *)(v43 + 36) = *(uint64_t *)(a3 + 36);
    v47 = *(uint8_t *)(a3 + 46);
    *(uint32_t *)(v43 + 48) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint8_t *)(v43 + 46) = v47;
    g4_std::string::assign_str(v43 + 48, a3 + 48);
    *(uint8_t *)(v43 + 54) = *(uint8_t *)(a3 + 54);
    *(uint64_t *)(v43 + 56) = *(uint64_t *)(a3 + 56);
    v48 = *(uint8_t *)(a3 + 66);
    *(uint32_t *)(v43 + 68) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint8_t *)(v43 + 66) = v48;
    g4_std::string::assign_str(v43 + 68, a3 + 68);
    *(uint8_t *)(v43 + 74) = *(uint8_t *)(a3 + 74);
    g4_std::string::construct_copy(v43 + 76, a3 + 76);
    g4_std::string::construct_copy(v43 + 80, a3 + 80);
    *(uint32_t *)(v43 + 88) = 0;
    *(uint32_t *)(v43 + 92) = 0;
    *(uint32_t *)(v43 + 104) = 0;
    *(uint32_t *)(v43 + 96) = v43 + 88;
    *(uint32_t *)(v43 + 100) = v43 + 88;
    v49 = *(uint32_t **)(a3 + 92);
    if ( v49 != nullptr )
    {
      v50 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
              v43 + 84,
              v49,
              v43 + 88);
      *(uint32_t *)(v43 + 92) = (uint32_t)(uintptr_t)(v50);
      for ( m = v50; m[2] != 0; m = (uint32_t *)m[2] )
        ;
      *(uint32_t *)(v43 + 96) = (uint32_t)(uintptr_t)(m);
      while ( v50[3] != 0 )
        v50 = (uint32_t *)v50[3];
      *(uint32_t *)(v43 + 100) = (uint32_t)(uintptr_t)(v50);
      *(uint32_t *)(v43 + 104) = *(uint32_t *)(a3 + 104);
    }
  }
  if ( *a1 != a2 )
  {
    v76 = *a1;
    v52 = v69;
    do
    {
      if ( v52 != 0 )
      {
        v73 = v52 - v69;
        *(uint32_t *)v52 = ((uint32_t)(uintptr_t)&off_2096048);
        *(uint32_t *)(v52 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v52 + 4, v76 + 4);
        *(uint8_t *)(v73 + v69 + 4 + 6) = *(uint8_t *)(v76 + 10);
        *(uint32_t *)(v52 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v52 + 12, v76 + 12);
        *(uint8_t *)(v73 + v69 + 12 + 6) = *(uint8_t *)(v76 + 18);
        *(uint32_t *)(v52 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v52 + 20, v76 + 20);
        *(uint8_t *)(v73 + v69 + 20 + 6) = *(uint8_t *)(v76 + 26);
        *(uint32_t *)(v52 + 28) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v52 + 28, v76 + 28);
        *(uint8_t *)(v73 + v69 + 28 + 6) = *(uint8_t *)(v76 + 34);
        *(uint64_t *)(v52 + 36) = *(uint64_t *)(v76 + 36);
        *(uint8_t *)(v69 + v73 + 46) = *(uint8_t *)(v76 + 46);
        *(uint32_t *)(v52 + 48) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v52 + 48, v76 + 48);
        *(uint8_t *)(v73 + v69 + 48 + 6) = *(uint8_t *)(v76 + 54);
        *(uint64_t *)(v52 + 56) = *(uint64_t *)(v76 + 56);
        *(uint8_t *)(v69 + v73 + 66) = *(uint8_t *)(v76 + 66);
        *(uint32_t *)(v52 + 68) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v52 + 68, v76 + 68);
        *(uint8_t *)(v73 + v69 + 68 + 6) = *(uint8_t *)(v76 + 74);
        g4_std::string::construct_copy(v52 + 76, v76 + 76);
        g4_std::string::construct_copy(v52 + 80, v76 + 80);
        v70 = v69 + 84;
        v53 = v69 + 84;
        *(uint32_t *)(v73 + v70 + 4) = 0;
        *(uint32_t *)(v73 + v70 + 8) = 0;
        *(uint32_t *)(v73 + v70 + 20) = 0;
        *(uint32_t *)(v73 + v53 + 12) = v52 + 88;
        *(uint32_t *)(v73 + v53 + 16) = v52 + 88;
        v54 = *(uint32_t **)(v76 + 92);
        if ( v54 != nullptr )
        {
          v55 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                  v52 + 84,
                  v54,
                  v52 + 88);
          *(uint32_t *)(v52 + 92) = (uint32_t)(uintptr_t)(v55);
          for ( n = v55; n[2] != 0; n = (uint32_t *)n[2] )
            ;
          *(uint32_t *)(v52 + 96) = (uint32_t)(uintptr_t)(n);
          while ( v55[3] != 0 )
            v55 = (uint32_t *)v55[3];
          *(uint32_t *)(v52 + 100) = (uint32_t)(uintptr_t)(v55);
          *(uint32_t *)(v73 + v70 + 20) = *(uint32_t *)(v76 + 104);
        }
      }
      v76 += 108;
      v52 += 108;
    }
    while ( v76 != a2 );
    v68 = v52 + 108;
  }
  v57 = v68;
  v67 = (uint32_t *)a1[1];
  if ( v67 != (uint32_t *)a2 )
  {
    v77 = a2;
    do
    {
      if ( v57 != 0 )
      {
        v74 = v57 - v68;
        *(uint32_t *)v57 = ((uint32_t)(uintptr_t)&off_2096048);
        *(uint32_t *)(v57 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v57 + 4, v77 + 4);
        *(uint8_t *)(v74 + v68 + 4 + 6) = *(uint8_t *)(v77 + 10);
        *(uint32_t *)(v57 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v57 + 12, v77 + 12);
        *(uint8_t *)(v74 + v68 + 12 + 6) = *(uint8_t *)(v77 + 18);
        *(uint32_t *)(v57 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v57 + 20, v77 + 20);
        *(uint8_t *)(v74 + v68 + 20 + 6) = *(uint8_t *)(v77 + 26);
        *(uint32_t *)(v57 + 28) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v57 + 28, v77 + 28);
        *(uint8_t *)(v74 + v68 + 28 + 6) = *(uint8_t *)(v77 + 34);
        *(uint64_t *)(v57 + 36) = *(uint64_t *)(v77 + 36);
        *(uint8_t *)(v68 + v74 + 46) = *(uint8_t *)(v77 + 46);
        *(uint32_t *)(v57 + 48) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v57 + 48, v77 + 48);
        *(uint8_t *)(v74 + v68 + 48 + 6) = *(uint8_t *)(v77 + 54);
        *(uint64_t *)(v57 + 56) = *(uint64_t *)(v77 + 56);
        *(uint8_t *)(v68 + v74 + 66) = *(uint8_t *)(v77 + 66);
        *(uint32_t *)(v57 + 68) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v57 + 68, v77 + 68);
        *(uint8_t *)(v74 + v68 + 68 + 6) = *(uint8_t *)(v77 + 74);
        g4_std::string::construct_copy(v57 + 76, v77 + 76);
        g4_std::string::construct_copy(v57 + 80, v77 + 80);
        v71 = v68 + 84;
        *(uint32_t *)(v74 + v71 + 4) = 0;
        *(uint32_t *)(v74 + v71 + 8) = 0;
        *(uint32_t *)(v74 + v71 + 20) = 0;
        *(uint32_t *)(v74 + v71 + 12) = v57 + 88;
        *(uint32_t *)(v74 + v71 + 16) = v57 + 88;
        v58 = *(uint32_t **)(v77 + 92);
        if ( v58 != nullptr )
        {
          v59 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                  v57 + 84,
                  v58,
                  v57 + 88);
          *(uint32_t *)(v57 + 92) = (uint32_t)(uintptr_t)(v59);
          for ( ii = v59; ii[2] != 0; ii = (uint32_t *)ii[2] )
            ;
          *(uint32_t *)(v57 + 96) = (uint32_t)(uintptr_t)(ii);
          while ( v59[3] != 0 )
            v59 = (uint32_t *)v59[3];
          *(uint32_t *)(v57 + 100) = (uint32_t)(uintptr_t)(v59);
          *(uint32_t *)(v74 + v71 + 20) = *(uint32_t *)(v77 + 104);
        }
      }
      v77 += 108;
      v57 += 108;
    }
    while ( v67 != (uint32_t *)v77 );
    v67 = (uint32_t *)a1[1];
  }
  v61 = (uint32_t *)*a1;
  if ( (uint32_t *)*a1 != v67 )
  {
    do
    {
      v62 = *v61;
      v63 = v61;
      v61 += 27;
      (*(void (**)(uint32_t *))(v62 + 16))(v63);
    }
    while ( v61 != v67 );
    v61 = (uint32_t *)*a1;
  }
  if ( v61 != nullptr )
    sub_4EBEE0((int)(uintptr_t)v61);
  *a1 = v69;
  a1[1] = v57;
  a1[2] = v66 + v69;
}

// ----------------------------------------------------------------------------
// Function: sub_15022F0  (binary VA: 0x15022f0)
// Original: sub_15022F0
// ----------------------------------------------------------------------------
int sub_15022F0()
{
  sub_1900D70(&unk_211A3A4);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3A4, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_1505A00  (binary VA: 0x1505a00)
// Original: sub_1505A00
// ----------------------------------------------------------------------------
int sub_1505A00()
{
  sub_1900D70(&unk_211A3A8);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3A8, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_b505e5::M_erase  (binary VA: 0x1507cd0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_b505e5::M_erase(int a1, uint32_t *a2)
{
  uint32_t *i;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  uint32_t *v26;
  int v27;
  int v28;
  uint32_t *v29;
  int v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;

  if ( a2 != nullptr )
  {
    for ( i = a2; ; i = v29 )
    {
      v33 = (uint32_t *)i[3];
      if ( v33 != nullptr )
      {
        while ( 1 )
        {
          v34 = (uint32_t *)v33[3];
          if ( v34 != nullptr )
          {
            while ( 1 )
            {
              v35 = (uint32_t *)v34[3];
              if ( v35 != nullptr )
              {
                while ( 1 )
                {
                  v36 = (uint32_t *)v35[3];
                  if ( v36 != nullptr )
                  {
                    while ( 1 )
                    {
                      v37 = (uint32_t *)v36[3];
                      if ( v37 != nullptr )
                      {
                        while ( 1 )
                        {
                          v32 = (uint32_t *)v37[3];
                          if ( v32 != nullptr )
                          {
                            while ( 1 )
                            {
                              v31 = (uint32_t *)v32[3];
                              if ( v31 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v3 = (uint32_t *)v31[3];
                                  if ( v3 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_b505e5::M_erase(
                                        a1,
                                        v3[3]);
                                      v4 = v3[5];
                                      v5 = (uint32_t *)v3[2];
                                      if ( (uint32_t *)(v4 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v4 - 12));
                                      }
                                      v6 = v3[4];
                                      if ( (uint32_t *)(v6 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v6 - 12));
                                      }
                                      sub_4EBEE0((int)(uintptr_t)v3);
                                      if ( v5 == nullptr )
                                        break;
                                      v3 = v5;
                                    }
                                  }
                                  v7 = v31[5];
                                  v8 = (uint32_t *)v31[2];
                                  if ( (uint32_t *)(v7 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
                                  }
                                  v9 = v31[4];
                                  if ( (uint32_t *)(v9 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v9 - 12));
                                  }
                                  sub_4EBEE0((int)(uintptr_t)v31);
                                  if ( v8 == nullptr )
                                    break;
                                  v31 = v8;
                                }
                              }
                              v10 = v32[5];
                              v11 = (uint32_t *)v32[2];
                              if ( (uint32_t *)(v10 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v10 - 12));
                              }
                              v12 = v32[4];
                              if ( (uint32_t *)(v12 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v12 - 12));
                              }
                              sub_4EBEE0((int)(uintptr_t)v32);
                              if ( v11 == nullptr )
                                break;
                              v32 = v11;
                            }
                          }
                          v13 = v37[5];
                          v14 = (uint32_t *)v37[2];
                          if ( (uint32_t *)(v13 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v13 - 12));
                          }
                          v15 = v37[4];
                          if ( (uint32_t *)(v15 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v15 - 12));
                          }
                          sub_4EBEE0((int)(uintptr_t)v37);
                          if ( v14 == nullptr )
                            break;
                          v37 = v14;
                        }
                      }
                      v16 = v36[5];
                      v17 = (uint32_t *)v36[2];
                      if ( (uint32_t *)(v16 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v16 - 12));
                      }
                      v18 = v36[4];
                      if ( (uint32_t *)(v18 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v18 - 12));
                      }
                      sub_4EBEE0((int)(uintptr_t)v36);
                      if ( v17 == nullptr )
                        break;
                      v36 = v17;
                    }
                  }
                  v19 = v35[5];
                  v20 = (uint32_t *)v35[2];
                  if ( (uint32_t *)(v19 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v19 - 12));
                  }
                  v21 = v35[4];
                  if ( (uint32_t *)(v21 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v21 - 12));
                  }
                  sub_4EBEE0((int)(uintptr_t)v35);
                  if ( v20 == nullptr )
                    break;
                  v35 = v20;
                }
              }
              v22 = v34[5];
              v23 = (uint32_t *)v34[2];
              if ( (uint32_t *)(v22 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v22 - 12));
              }
              v24 = v34[4];
              if ( (uint32_t *)(v24 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v24 - 12));
              }
              sub_4EBEE0((int)(uintptr_t)v34);
              if ( v23 == nullptr )
                break;
              v34 = v23;
            }
          }
          v25 = v33[5];
          v26 = (uint32_t *)v33[2];
          if ( (uint32_t *)(v25 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v25 - 12));
          }
          v27 = v33[4];
          if ( (uint32_t *)(v27 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v27 - 12));
          }
          sub_4EBEE0((int)(uintptr_t)v33);
          if ( v26 == nullptr )
            break;
          v33 = v26;
        }
      }
      v28 = a2[5];
      v29 = (uint32_t *)a2[2];
      if ( (uint32_t *)(v28 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v28 - 12));
      }
      v30 = a2[4];
      if ( (uint32_t *)(v30 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v30 - 12));
      }
      sub_4EBEE0((int)(uintptr_t)a2);
      if ( v29 == nullptr )
        break;
      a2 = v29;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy  (binary VA: 0x1508280)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,glwebtools::SAllocator<std::pair<std::string const,std::string>,(glwebtools::MemHint)4>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(int a1, uint32_t *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  uint32_t *i;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int *v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *j;
  int v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;
  int v22;
  int *v23;
  uint32_t *v24;
  uint32_t *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  uint32_t *v31;
  uint32_t *v32;
  int v33;
  int *v34;
  uint32_t *v35;
  uint32_t *v36;
  int v37;
  int v38;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  uint32_t *v48;
  uint32_t *v49;
  uint32_t *v50;
  int *v51;
  uint32_t *v52;

  v52 = (uint32_t *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
  if ( v52 != (uint32_t *)-16 )
  {
    g4_std::string::construct_copy(v52 + 4, a2 + 4);
    g4_std::string::construct_copy(v52 + 5, a2 + 5);
  }
  *v52 = *a2;
  v52[3] = 0;
  v52[2] = 0;
  v52[1] = a3;
  v3 = a2;
  v4 = (uint32_t *)a2[3];
  if ( v4 != nullptr )
  {
    v48 = (uint32_t *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
    if ( v48 != (uint32_t *)-16 )
    {
      g4_std::string::construct_copy(v48 + 4, v4 + 4);
      g4_std::string::construct_copy(v48 + 5, v4 + 5);
    }
    *v48 = *v4;
    v48[2] = 0;
    v48[3] = 0;
    v48[1] = (uint32_t)(uintptr_t)(v52);
    v5 = v4[3];
    if ( v5 != 0 )
      v48[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                 a1,
                 v5,
                 v48);
    v46 = (uint32_t *)v4[2];
    if ( v46 != nullptr )
    {
      for ( i = v48; ; i = v40 )
      {
        v7 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
        v40 = (uint32_t *)v7;
        if ( v7 != -16 )
        {
          g4_std::string::construct_copy(v7 + 16, v46 + 4);
          g4_std::string::construct_copy(v40 + 5, v46 + 5);
        }
        v8 = *v46;
        v40[3] = 0;
        *v40 = v8;
        v40[2] = 0;
        i[2] = (uint32_t)(uintptr_t)(v40);
        v40[1] = (uint32_t)(uintptr_t)(i);
        v9 = v46;
        v10 = (uint32_t *)v46[3];
        if ( v10 != nullptr )
        {
          v43 = (uint32_t *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
          if ( v43 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v43 + 4, v10 + 4);
            g4_std::string::construct_copy(v43 + 5, v10 + 5);
          }
          *v43 = *v10;
          v43[2] = 0;
          v43[3] = 0;
          v43[1] = (uint32_t)(uintptr_t)(v40);
          v11 = v10[3];
          if ( v11 != 0 )
            v43[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                       a1,
                       v11,
                       v43);
          v12 = (int *)v10[2];
          v13 = v43;
          if ( v12 != nullptr )
          {
            while ( 1 )
            {
              v14 = (uint32_t *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
              if ( v14 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v14 + 4, v12 + 4);
                g4_std::string::construct_copy(v14 + 5, v12 + 5);
              }
              v15 = *v12;
              v14[2] = 0;
              *v14 = v15;
              v14[3] = 0;
              v13[2] = (uint32_t)(uintptr_t)(v14);
              v14[1] = (uint32_t)(uintptr_t)(v13);
              v16 = v12[3];
              if ( v16 != 0 )
                v14[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                           a1,
                           v16,
                           v14);
              v12 = (int *)v12[2];
              if ( v12 == nullptr )
                break;
              v13 = v14;
            }
          }
          v40[3] = (uint32_t)(uintptr_t)(v43);
          v9 = v46;
        }
        v46 = (uint32_t *)v9[2];
        if ( v46 == nullptr )
          break;
      }
    }
    v52[3] = (uint32_t)(uintptr_t)(v48);
    v3 = a2;
  }
  v51 = (int *)v3[2];
  if ( v51 != nullptr )
  {
    for ( j = v52; ; j = v49 )
    {
      v49 = (uint32_t *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
      if ( v49 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v49 + 4, v51 + 4);
        g4_std::string::construct_copy(v49 + 5, v51 + 5);
      }
      v18 = *v51;
      v49[3] = 0;
      *v49 = v18;
      v49[2] = 0;
      j[2] = (uint32_t)(uintptr_t)(v49);
      v49[1] = (uint32_t)(uintptr_t)(j);
      v41 = (uint32_t *)v51[3];
      if ( v41 != nullptr )
      {
        v19 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
        v50 = (uint32_t *)v19;
        if ( v19 != -16 )
        {
          g4_std::string::construct_copy(v19 + 16, v41 + 4);
          g4_std::string::construct_copy(v50 + 5, v41 + 5);
        }
        *v50 = *v41;
        v50[3] = 0;
        v50[2] = 0;
        v50[1] = (uint32_t)(uintptr_t)(v49);
        v20 = v41;
        v21 = (uint32_t *)v41[3];
        if ( v21 != nullptr )
        {
          v44 = (uint32_t *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
          if ( v44 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v44 + 4, v21 + 4);
            g4_std::string::construct_copy(v44 + 5, v21 + 5);
          }
          *v44 = *v21;
          v44[2] = 0;
          v44[3] = 0;
          v44[1] = (uint32_t)(uintptr_t)(v50);
          v22 = v21[3];
          if ( v22 != 0 )
            v44[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                       a1,
                       v22,
                       v44);
          v23 = (int *)v21[2];
          v24 = v44;
          if ( v23 != nullptr )
          {
            while ( 1 )
            {
              v25 = (uint32_t *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
              if ( v25 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v25 + 4, v23 + 4);
                g4_std::string::construct_copy(v25 + 5, v23 + 5);
              }
              v26 = *v23;
              v25[2] = 0;
              *v25 = v26;
              v25[3] = 0;
              v24[2] = (uint32_t)(uintptr_t)(v25);
              v25[1] = (uint32_t)(uintptr_t)(v24);
              v27 = v23[3];
              if ( v27 != 0 )
                v25[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                           a1,
                           v27,
                           v25);
              v23 = (int *)v23[2];
              if ( v23 == nullptr )
                break;
              v24 = v25;
            }
          }
          v50[3] = (uint32_t)(uintptr_t)(v44);
          v20 = v41;
        }
        v28 = v50;
        v47 = (uint32_t *)v20[2];
        if ( v47 != nullptr )
        {
          while ( 1 )
          {
            v29 = sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
            v42 = (uint32_t *)v29;
            if ( v29 != -16 )
            {
              g4_std::string::construct_copy(v29 + 16, v47 + 4);
              g4_std::string::construct_copy(v42 + 5, v47 + 5);
            }
            v30 = *v47;
            v42[3] = 0;
            *v42 = v30;
            v42[2] = 0;
            v28[2] = (uint32_t)(uintptr_t)(v42);
            v42[1] = (uint32_t)(uintptr_t)(v28);
            v31 = v47;
            v32 = (uint32_t *)v47[3];
            if ( v32 != nullptr )
            {
              v45 = (uint32_t *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
              if ( v45 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v45 + 4, v32 + 4);
                g4_std::string::construct_copy(v45 + 5, v32 + 5);
              }
              *v45 = *v32;
              v45[2] = 0;
              v45[3] = 0;
              v45[1] = (uint32_t)(uintptr_t)(v42);
              v33 = v32[3];
              if ( v33 != 0 )
                v45[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                           a1,
                           v33,
                           v45);
              v34 = (int *)v32[2];
              v35 = v45;
              if ( v34 != nullptr )
              {
                while ( 1 )
                {
                  v36 = (uint32_t *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
                  if ( v36 != (uint32_t *)-16 )
                  {
                    g4_std::string::construct_copy(v36 + 4, v34 + 4);
                    g4_std::string::construct_copy(v36 + 5, v34 + 5);
                  }
                  v37 = *v34;
                  v36[2] = 0;
                  *v36 = v37;
                  v36[3] = 0;
                  v35[2] = (uint32_t)(uintptr_t)(v36);
                  v36[1] = (uint32_t)(uintptr_t)(v35);
                  v38 = v34[3];
                  if ( v38 != 0 )
                    v36[3] = (uint32_t)(uintptr_t)g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                               a1,
                               v38,
                               v36);
                  v34 = (int *)v34[2];
                  if ( v34 == nullptr )
                    break;
                  v35 = v36;
                }
              }
              v42[3] = (uint32_t)(uintptr_t)(v45);
              v31 = v47;
            }
            v47 = (uint32_t *)v31[2];
            if ( v47 == nullptr )
              break;
            v28 = v42;
          }
        }
        v49[3] = (uint32_t)(uintptr_t)(v50);
      }
      v51 = (int *)v51[2];
      if ( v51 == nullptr )
        break;
    }
  }
  return v52;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_iap_PromotionLegacy_glwe_1e255d::M_insert_aux  (binary VA: 0x1508aa0)
// Original: std::vector<iap::PromotionLegacy,glwebtools::SAllocator<iap::PromotionLegacy,(glwebtools::MemHint)4>>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_iap_PromotionLegacy_glwe_1e255d::M_insert_aux(int *a1, unsigned int a2, int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *i;
  int *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  int *j;
  int k;
  int v26;
  int v27;
  int v28;
  unsigned int n;
  char *v30;
  uint32_t *v31;
  uint32_t *v32;
  int v33;
  int v34;
  uint32_t *v35;
  uint32_t *ii;
  int v37;
  int v38;
  int v39;
  int m;
  int v41;
  int v42;
  unsigned int v43;
  int v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  int v48;
  char *v49;
  char *v50;
  int v51;
  int v52;
  int v53;
  uint32_t *v54;
  unsigned int v55;
  int v56;
  uint32_t *v57;
  uint32_t *jj;
  int v59;
  int v60;
  int v61;
  int v62;
  char *v63;
  int v64;
  uint32_t *v65;
  uint32_t *v66;
  uint32_t *v67;
  uint32_t *v68;
  int v69;
  unsigned int v70;
  unsigned int v71;
  int v72;
  size_t v73;
  int v74;
  int v75;
  int v76;
  unsigned int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  uint32_t *v82;
  uint32_t *v83;
  uint32_t *kk;
  int v85;
  int v86;
  unsigned int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  uint32_t *v92;
  uint32_t *v93;
  uint32_t *mm;
  int v95;
  unsigned int v96;
  char *v97;
  unsigned int v98;
  int v99;
  int v100;
  unsigned int v101;
  int v102;
  int v103;
  int v104;
  uint32_t *v105;
  uint32_t *v106;
  uint32_t *nn;
  uint32_t *v108;
  int v109;
  typedef uint32_t *_g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef unsigned int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef uint32_t *_g4_t_v124;
  typedef uint32_t *_g4_t_v125;
  typedef char *_g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef uint32_t *_g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef unsigned int _g4_t_v138;
  typedef uint32_t *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef unsigned int _g4_t_v145;
  typedef unsigned int _g4_t_v146;
  typedef unsigned int _g4_t_v147;
  typedef uint32_t *_g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef int _g4_t_v151;
  typedef int _g4_t_v152;
  typedef int _g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef char *_g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef unsigned int _g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int _g4_t_v170;
  typedef unsigned int _g4_t_v171;
  typedef unsigned int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef int _g4_t_v174;
  typedef char *_g4_t_v175;
  typedef int _g4_t_v176;
  typedef unsigned int _g4_t_v177;
  typedef uint32_t *_g4_t_v178;
  typedef uint32_t (**_g4_t_v179)(iap::PromotionLegacy::Self *, const glwebtools::JsonReader::Self *);
  typedef int _g4_t_v180;
  typedef char _g4_t_v181;
  typedef uint32_t *_g4_t_v182;
  typedef char _g4_t_v183;
  typedef uint32_t *_g4_t_v184;
  typedef char _g4_t_v185;
  typedef int _g4_t_v186;
  typedef char _g4_t_v187;
  typedef int _g4_t_v188;
  typedef int _g4_t_v189;
  typedef int _g4_t_v190;
  typedef int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef uint32_t *_g4_t_v193;
  typedef int *_g4_t_v194;
  typedef int *_g4_t_v195;
  typedef int _g4_t_v196;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v110)) > _g4_s0 ? (0u + sizeof(_g4_t_v110)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v111)) > _g4_s1 ? (4u + sizeof(_g4_t_v111)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v112)) > _g4_s2 ? (4u + sizeof(_g4_t_v112)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v113)) > _g4_s3 ? (4u + sizeof(_g4_t_v113)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v114)) > _g4_s4 ? (4u + sizeof(_g4_t_v114)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v115)) > _g4_s5 ? (40u + sizeof(_g4_t_v115)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v116)) > _g4_s6 ? (40u + sizeof(_g4_t_v116)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v117)) > _g4_s7 ? (40u + sizeof(_g4_t_v117)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v118)) > _g4_s8 ? (40u + sizeof(_g4_t_v118)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v119)) > _g4_s9 ? (40u + sizeof(_g4_t_v119)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v120)) > _g4_s10 ? (40u + sizeof(_g4_t_v120)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v121)) > _g4_s11 ? (40u + sizeof(_g4_t_v121)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v122)) > _g4_s12 ? (40u + sizeof(_g4_t_v122)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v123)) > _g4_s13 ? (40u + sizeof(_g4_t_v123)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v124)) > _g4_s14 ? (40u + sizeof(_g4_t_v124)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v125)) > _g4_s15 ? (40u + sizeof(_g4_t_v125)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v126)) > _g4_s16 ? (40u + sizeof(_g4_t_v126)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v127)) > _g4_s17 ? (44u + sizeof(_g4_t_v127)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v128)) > _g4_s18 ? (72u + sizeof(_g4_t_v128)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v129)) > _g4_s19 ? (76u + sizeof(_g4_t_v129)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v130)) > _g4_s20 ? (80u + sizeof(_g4_t_v130)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v131)) > _g4_s21 ? (84u + sizeof(_g4_t_v131)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v132)) > _g4_s22 ? (88u + sizeof(_g4_t_v132)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v133)) > _g4_s23 ? (88u + sizeof(_g4_t_v133)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v134)) > _g4_s24 ? (88u + sizeof(_g4_t_v134)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v135)) > _g4_s25 ? (88u + sizeof(_g4_t_v135)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v136)) > _g4_s26 ? (92u + sizeof(_g4_t_v136)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v137)) > _g4_s27 ? (96u + sizeof(_g4_t_v137)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v138)) > _g4_s28 ? (96u + sizeof(_g4_t_v138)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v139)) > _g4_s29 ? (100u + sizeof(_g4_t_v139)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v140)) > _g4_s30 ? (100u + sizeof(_g4_t_v140)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v141)) > _g4_s31 ? (100u + sizeof(_g4_t_v141)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v142)) > _g4_s32 ? (100u + sizeof(_g4_t_v142)) : _g4_s32,
    _g4_s34 = (100u + sizeof(_g4_t_v143)) > _g4_s33 ? (100u + sizeof(_g4_t_v143)) : _g4_s33,
    _g4_s35 = (100u + sizeof(_g4_t_v144)) > _g4_s34 ? (100u + sizeof(_g4_t_v144)) : _g4_s34,
    _g4_s36 = (100u + sizeof(_g4_t_v145)) > _g4_s35 ? (100u + sizeof(_g4_t_v145)) : _g4_s35,
    _g4_s37 = (104u + sizeof(_g4_t_v146)) > _g4_s36 ? (104u + sizeof(_g4_t_v146)) : _g4_s36,
    _g4_s38 = (104u + sizeof(_g4_t_v147)) > _g4_s37 ? (104u + sizeof(_g4_t_v147)) : _g4_s37,
    _g4_s39 = (108u + sizeof(_g4_t_v148)) > _g4_s38 ? (108u + sizeof(_g4_t_v148)) : _g4_s38,
    _g4_s40 = (108u + sizeof(_g4_t_v149)) > _g4_s39 ? (108u + sizeof(_g4_t_v149)) : _g4_s39,
    _g4_s41 = (108u + sizeof(_g4_t_v150)) > _g4_s40 ? (108u + sizeof(_g4_t_v150)) : _g4_s40,
    _g4_s42 = (108u + sizeof(_g4_t_v151)) > _g4_s41 ? (108u + sizeof(_g4_t_v151)) : _g4_s41,
    _g4_s43 = (108u + sizeof(_g4_t_v152)) > _g4_s42 ? (108u + sizeof(_g4_t_v152)) : _g4_s42,
    _g4_s44 = (108u + sizeof(_g4_t_v153)) > _g4_s43 ? (108u + sizeof(_g4_t_v153)) : _g4_s43,
    _g4_s45 = (112u + sizeof(_g4_t_v154)) > _g4_s44 ? (112u + sizeof(_g4_t_v154)) : _g4_s44,
    _g4_s46 = (112u + sizeof(_g4_t_v155)) > _g4_s45 ? (112u + sizeof(_g4_t_v155)) : _g4_s45,
    _g4_s47 = (112u + sizeof(_g4_t_v156)) > _g4_s46 ? (112u + sizeof(_g4_t_v156)) : _g4_s46,
    _g4_s48 = (112u + sizeof(_g4_t_v157)) > _g4_s47 ? (112u + sizeof(_g4_t_v157)) : _g4_s47,
    _g4_s49 = (112u + sizeof(_g4_t_v158)) > _g4_s48 ? (112u + sizeof(_g4_t_v158)) : _g4_s48,
    _g4_s50 = (112u + sizeof(_g4_t_v159)) > _g4_s49 ? (112u + sizeof(_g4_t_v159)) : _g4_s49,
    _g4_s51 = (112u + sizeof(_g4_t_v160)) > _g4_s50 ? (112u + sizeof(_g4_t_v160)) : _g4_s50,
    _g4_s52 = (116u + sizeof(_g4_t_v161)) > _g4_s51 ? (116u + sizeof(_g4_t_v161)) : _g4_s51,
    _g4_s53 = (116u + sizeof(_g4_t_v162)) > _g4_s52 ? (116u + sizeof(_g4_t_v162)) : _g4_s52,
    _g4_s54 = (116u + sizeof(_g4_t_v163)) > _g4_s53 ? (116u + sizeof(_g4_t_v163)) : _g4_s53,
    _g4_s55 = (116u + sizeof(_g4_t_v164)) > _g4_s54 ? (116u + sizeof(_g4_t_v164)) : _g4_s54,
    _g4_s56 = (116u + sizeof(_g4_t_v165)) > _g4_s55 ? (116u + sizeof(_g4_t_v165)) : _g4_s55,
    _g4_s57 = (116u + sizeof(_g4_t_v166)) > _g4_s56 ? (116u + sizeof(_g4_t_v166)) : _g4_s56,
    _g4_s58 = (116u + sizeof(_g4_t_v167)) > _g4_s57 ? (116u + sizeof(_g4_t_v167)) : _g4_s57,
    _g4_s59 = (116u + sizeof(_g4_t_v168)) > _g4_s58 ? (116u + sizeof(_g4_t_v168)) : _g4_s58,
    _g4_s60 = (116u + sizeof(_g4_t_v169)) > _g4_s59 ? (116u + sizeof(_g4_t_v169)) : _g4_s59,
    _g4_s61 = (116u + sizeof(_g4_t_v170)) > _g4_s60 ? (116u + sizeof(_g4_t_v170)) : _g4_s60,
    _g4_s62 = (120u + sizeof(_g4_t_v171)) > _g4_s61 ? (120u + sizeof(_g4_t_v171)) : _g4_s61,
    _g4_s63 = (120u + sizeof(_g4_t_v172)) > _g4_s62 ? (120u + sizeof(_g4_t_v172)) : _g4_s62,
    _g4_s64 = (120u + sizeof(_g4_t_v173)) > _g4_s63 ? (120u + sizeof(_g4_t_v173)) : _g4_s63,
    _g4_s65 = (120u + sizeof(_g4_t_v174)) > _g4_s64 ? (120u + sizeof(_g4_t_v174)) : _g4_s64,
    _g4_s66 = (120u + sizeof(_g4_t_v175)) > _g4_s65 ? (120u + sizeof(_g4_t_v175)) : _g4_s65,
    _g4_s67 = (120u + sizeof(_g4_t_v176)) > _g4_s66 ? (120u + sizeof(_g4_t_v176)) : _g4_s66,
    _g4_s68 = (120u + sizeof(_g4_t_v177)) > _g4_s67 ? (120u + sizeof(_g4_t_v177)) : _g4_s67,
    _g4_s69 = (120u + sizeof(_g4_t_v178)) > _g4_s68 ? (120u + sizeof(_g4_t_v178)) : _g4_s68,
    _g4_s70 = (144u + sizeof(_g4_t_v179)) > _g4_s69 ? (144u + sizeof(_g4_t_v179)) : _g4_s69,
    _g4_s71 = (148u + sizeof(_g4_t_v180)) > _g4_s70 ? (148u + sizeof(_g4_t_v180)) : _g4_s70,
    _g4_s72 = (154u + sizeof(_g4_t_v181)) > _g4_s71 ? (154u + sizeof(_g4_t_v181)) : _g4_s71,
    _g4_s73 = (156u + sizeof(_g4_t_v182)) > _g4_s72 ? (156u + sizeof(_g4_t_v182)) : _g4_s72,
    _g4_s74 = (162u + sizeof(_g4_t_v183)) > _g4_s73 ? (162u + sizeof(_g4_t_v183)) : _g4_s73,
    _g4_s75 = (164u + sizeof(_g4_t_v184)) > _g4_s74 ? (164u + sizeof(_g4_t_v184)) : _g4_s74,
    _g4_s76 = (170u + sizeof(_g4_t_v185)) > _g4_s75 ? (170u + sizeof(_g4_t_v185)) : _g4_s75,
    _g4_s77 = (172u + sizeof(_g4_t_v186)) > _g4_s76 ? (172u + sizeof(_g4_t_v186)) : _g4_s76,
    _g4_s78 = (178u + sizeof(_g4_t_v187)) > _g4_s77 ? (178u + sizeof(_g4_t_v187)) : _g4_s77,
    _g4_s79 = (180u + sizeof(_g4_t_v188)) > _g4_s78 ? (180u + sizeof(_g4_t_v188)) : _g4_s78,
    _g4_s80 = (184u + sizeof(_g4_t_v189)) > _g4_s79 ? (184u + sizeof(_g4_t_v189)) : _g4_s79,
    _g4_s81 = (188u + sizeof(_g4_t_v190)) > _g4_s80 ? (188u + sizeof(_g4_t_v190)) : _g4_s80,
    _g4_s82 = (192u + sizeof(_g4_t_v191)) > _g4_s81 ? (192u + sizeof(_g4_t_v191)) : _g4_s81,
    _g4_s83 = (196u + sizeof(_g4_t_v192)) > _g4_s82 ? (196u + sizeof(_g4_t_v192)) : _g4_s82,
    _g4_s84 = (200u + sizeof(_g4_t_v193)) > _g4_s83 ? (200u + sizeof(_g4_t_v193)) : _g4_s83,
    _g4_s85 = (204u + sizeof(_g4_t_v194)) > _g4_s84 ? (204u + sizeof(_g4_t_v194)) : _g4_s84,
    _g4_s86 = (208u + sizeof(_g4_t_v195)) > _g4_s85 ? (208u + sizeof(_g4_t_v195)) : _g4_s85,
    _g4_s87 = (212u + sizeof(_g4_t_v196)) > _g4_s86 ? (212u + sizeof(_g4_t_v196)) : _g4_s86
  };
  alignas(16) uint8_t _g4_sf[_g4_s87];
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 0u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 4u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 4u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 4u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 4u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 40u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 40u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 40u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 40u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 40u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 40u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 40u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 40u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 40u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 40u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 40u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 40u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 44u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 72u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 76u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 80u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 84u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 88u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 88u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 88u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 88u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 92u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 96u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 96u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 100u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 100u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 100u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 100u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 100u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 100u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 100u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 104u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 104u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 108u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 108u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 108u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 108u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 108u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 108u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 112u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 112u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 112u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 112u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 112u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 112u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 112u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 116u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 116u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 116u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 116u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 116u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 116u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 116u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 116u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 116u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 116u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 120u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 120u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 120u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 120u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 120u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 120u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 120u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 120u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 144u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 148u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 154u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 156u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 162u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 164u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 170u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 172u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 178u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 180u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 184u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 188u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 192u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 196u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 200u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 204u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 208u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 212u);

  v3 = a3;
  v4 = a1[1];
  if ( v4 != a1[2] )
  {
    if ( v4 != 0 )
    {
      *(uint32_t *)(v4 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
      *(uint32_t *)v4 = (uint32_t)(uintptr_t)(&off_2096100);
      *(uint32_t *)(v4 + 4) = *(uint32_t *)(v4 - 68);
      *(uint8_t *)(v4 + 10) = *(uint8_t *)(v4 - 62);
      g4_std::string::assign_str(v4 + 12, v4 - 60);
      *(uint8_t *)(v4 + 18) = *(uint8_t *)(v4 - 54);
      *(uint32_t *)(v4 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
      g4_std::string::assign_str(v4 + 20, v4 - 52);
      v5 = *(uint32_t *)(v4 - 32);
      *(uint8_t *)(v4 + 26) = *(uint8_t *)(v4 - 46);
      *(uint32_t *)(v4 + 28) = *(uint32_t *)(v4 - 44);
      v6 = *(uint32_t *)(v4 - 36);
      v171 = v5;
      *(uint8_t *)(v4 + 34) = *(uint8_t *)(v4 - 38);
      *(uint32_t *)(v4 + 36) = 0;
      v7 = (int)(v5 - v6) >> 2;
      *(uint32_t *)(v4 + 40) = 0;
      *(uint32_t *)(v4 + 44) = 0;
      if ( v7 != 0 )
      {
        if ( v7 > 0x3FFFFFFF )
          goto LABEL_233;
        v115 = 4 * v7;
        v8 = opNew(4 * v7);
        v9 = v115;
        v171 = *(uint32_t *)(v4 - 32);
        v6 = *(uint32_t *)(v4 - 36);
      }
      else
      {
        v9 = 0;
        v8 = 0;
      }
      *(uint32_t *)(v4 + 36) = v8;
      *(uint32_t *)(v4 + 40) = v8;
      *(uint32_t *)(v4 + 44) = v8 + v9;
      if ( v6 != v171 )
      {
        v154 = v4;
        v10 = v8;
        v11 = v6;
        do
        {
          if ( v10 != 0 )
            g4_std::string::construct_copy(v10, v11);
          v10 += 4;
          v11 += 4;
        }
        while ( v171 != v11 );
        v8 = v10;
        v3 = a3;
        v4 = v154;
      }
      v12 = *(uint32_t **)(v4 - 16);
      *(uint32_t *)(v4 + 40) = v8;
      *(uint32_t *)(v4 + 52) = 0;
      *(uint32_t *)(v4 + 56) = 0;
      *(uint32_t *)(v4 + 68) = 0;
      *(uint32_t *)(v4 + 60) = v4 + 52;
      *(uint32_t *)(v4 + 64) = v4 + 52;
      if ( v12 != nullptr )
      {
        v13 = g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                v4 + 48,
                v12,
                v4 + 52);
        *(uint32_t *)(v4 + 56) = (uint32_t)(uintptr_t)(v13);
        for ( i = v13; i[2] != 0; i = (uint32_t *)i[2] )
          ;
        *(uint32_t *)(v4 + 60) = (uint32_t)(uintptr_t)(i);
        while ( v13[3] != 0 )
          v13 = (uint32_t *)v13[3];
        *(uint32_t *)(v4 + 64) = (uint32_t)(uintptr_t)(v13);
        v15 = a1;
        *(uint32_t *)(v4 + 68) = *(uint32_t *)(v4 - 4);
        v16 = a1[1];
      }
      else
      {
        v15 = a1;
        v16 = a1[1];
      }
    }
    else
    {
      v16 = 0;
      v15 = a1;
    }
    v15[1] = v16 + 72;
    v179 = reinterpret_cast<std::remove_reference<decltype(v179)>::type>(&off_2096100);
    v180 = *(uint32_t *)(v3 + 4);
    v182 = &dword_213B814;
    v181 = *(uint8_t *)(v3 + 10);
    g4_std::string::assign_str(&v182, v3 + 12);
    v183 = *(uint8_t *)(v3 + 18);
    v184 = &dword_213B814;
    g4_std::string::assign_str(&v184, v3 + 20);
    v5 = *(uint32_t *)(v3 + 40);
    v185 = *(uint8_t *)(v3 + 26);
    v186 = *(uint32_t *)(v3 + 28);
    v172 = v5;
    v187 = *(uint8_t *)(v3 + 34);
    v17 = *(uint32_t *)(v3 + 36);
    v188 = 0;
    v6 = (int)(v5 - v17) >> 2;
    v189 = 0;
    v190 = 0;
    if ( v6 != 0 )
    {
      if ( v6 > 0x3FFFFFFF )
        goto LABEL_233;
      v116 = 4 * v6;
      v18 = opNew(4 * v6);
      v172 = *(uint32_t *)(v3 + 40);
      v19 = v116;
      v17 = *(uint32_t *)(v3 + 36);
    }
    else
    {
      v19 = 0;
      v18 = 0;
    }
    v188 = v18;
    v189 = v18;
    v190 = v18 + v19;
    if ( v172 != v17 )
    {
      v161 = v3;
      v20 = v18;
      v21 = v17;
      do
      {
        if ( v20 != 0 )
          g4_std::string::construct_copy(v20, v21);
        v20 += 4;
        v21 += 4;
      }
      while ( v172 != v21 );
      v18 = v20;
      v3 = v161;
    }
    v22 = *(uint32_t **)(v3 + 56);
    v189 = v18;
    v192 = 0;
    v193 = nullptr;
    v196 = 0;
    v194 = &v192;
    v195 = &v192;
    if ( v22 != nullptr )
    {
      v23 = g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
              (int)(uintptr_t)&v191,
              v22,
              (int)(uintptr_t)&v192);
      v193 = v23;
      for ( j = (int *)(v23); j[2] != 0; j = (int *)j[2] )
        ;
      v194 = j;
      while ( v23[3] != 0 )
        v23 = (uint32_t *)v23[3];
      v195 = (int *)(v23);
      v196 = *(uint32_t *)(v3 + 68);
    }
    v136 = a1[1];
    v137 = 954437177 * ((int)(v136 - 144 - a2) >> 3);
    if ( v137 > 0 )
    {
      v173 = v136 - 72;
      for ( k = v136 - 72; ; v173 = k )
      {
        k -= 72;
        v26 = k - v136;
        *(uint32_t *)(k + 4) = *(uint32_t *)(k - 68);
        *(uint8_t *)(k - 140 + 150) = *(uint8_t *)(k - 212 + 150);
        g4_std::string::assign_str(v173 - 60, v173 - 132);
        *(uint8_t *)(v26 + v136 - 132 + 150) = *(uint8_t *)(v26 + v136 - 204 + 150);
        g4_std::string::assign_str(v173 - 52, v173 - 124);
        *(uint8_t *)(v26 + v136 - 124 + 150) = *(uint8_t *)(v26 + v136 - 196 + 150);
        *(uint32_t *)(k + 28) = *(uint32_t *)(k - 44);
        *(uint8_t *)(v26 + v136 - 116 + 150) = *(uint8_t *)(v26 + v136 - 188 + 150);
        v6 = *(uint32_t *)(k - 36);
        v148 = *(uint32_t **)(k + 36);
        v155 = *(uint32_t *)(k - 32);
        v5 = (int)(v155 - v6) >> 2;
        v162 = v5;
        if ( v5 > (*(uint32_t *)(k + 44) - (int)(uintptr_t)v148) >> 2 )
        {
          if ( v5 != 0 )
          {
            if ( v5 > 0x3FFFFFFF )
              goto LABEL_233;
            v118 = *(uint32_t *)(k - 36);
            v151 = 4 * v5;
            v163 = opNew(4 * v5);
            v6 = v118;
          }
          else
          {
            v151 = 0;
            v163 = 0;
          }
          if ( v6 != v155 )
          {
            v142 = k;
            v135 = k - v136;
            v43 = v6;
            v44 = v163;
            do
            {
              if ( v44 != 0 )
                g4_std::string::construct_copy(v44, v43);
              v43 += 4;
              v44 += 4;
            }
            while ( v155 != v43 );
            k = v142;
            v26 = v135;
          }
          v158 = v136 - 108;
          v45 = *(uint32_t **)(v26 + v136 - 108 + 144);
          if ( *(uint32_t **)(v26 + v136 - 108 + 148) != v45 )
          {
            v143 = k;
            v46 = *(uint32_t **)(v26 + v136 - 108 + 148);
            do
            {
              v47 = (uint32_t *)(*v45 - 12);
              if ( v47 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v45 - 4), 0xFFFFFFFF) <= 0 )
              {
                v125 = v45;
                g4_std::string::Rep::M_destroy(v47);
                v45 = v125;
              }
              ++v45;
            }
            while ( v46 != v45 );
            k = v143;
            v45 = *(uint32_t **)(v26 + v158 + 144);
          }
          if ( v45 != nullptr )
            opDelete(v45);
          v33 = v136 - 108;
          *(uint32_t *)(v26 + v158 + 144) = v163;
          v34 = v151 + v163;
          *(uint32_t *)(v26 + v158 + 152) = v151 + v163;
        }
        else
        {
          v139 = *(uint32_t **)(k + 40);
          v27 = v139 - v148;
          if ( v5 > v27 )
          {
            v157 = v136 - 108;
            v149 = v136 - 180;
            v37 = *(uint32_t *)(k - 36) + 4 * v27;
            if ( v27 > 0 )
            {
              v133 = k;
              v38 = *(uint32_t *)(k - 36);
              v39 = *(uint32_t *)(v26 + v136 - 108 + 144);
              v140 = v26;
              for ( m = v27; m != 0; --m )
              {
                v112 = v38;
                v117 = v39;
                v38 += 4;
                g4_std::string::assign_str(v39, v112);
                v39 = v117 + 4;
              }
              k = v133;
              v26 = v140;
              v37 = *(uint32_t *)(v140 + v149 + 144) + ((*(uint32_t *)(v133 + 40) - *(uint32_t *)(v133 + 36)) & 0xFFFFFFFC);
            }
            v150 = *(uint32_t *)(v26 + v149 + 148);
            if ( v37 == v150 )
            {
              v33 = v136 - 108;
              v34 = *(uint32_t *)(v26 + v157 + 144) + 4 * v162;
            }
            else
            {
              v141 = k;
              v134 = v26;
              v41 = v37;
              v42 = *(uint32_t *)(v26 + v157 + 148);
              do
              {
                if ( v42 != 0 )
                  g4_std::string::construct_copy(v42, v41);
                v41 += 4;
                v42 += 4;
              }
              while ( v150 != v41 );
              v26 = v134;
              k = v141;
              v33 = v136 - 108;
              v34 = *(uint32_t *)(v134 + v157 + 144) + 4 * v162;
            }
          }
          else
          {
            if ( (int)v5 > 0 )
            {
              v132 = k;
              v127 = k - v136;
              v156 = (char *)v148 - v6;
              v28 = *(uint32_t *)(k - 36);
              for ( n = v5; n != 0; --n )
              {
                v111 = v28;
                v30 = &v156[v28];
                v28 += 4;
                g4_std::string::assign_str(v30, v111);
              }
              k = v132;
              v26 = v127;
              v148 += v162;
            }
            v31 = v148;
            if ( v139 == v148 )
            {
              v34 = *(uint32_t *)(v26 + v136 - 108 + 144) + 4 * v162;
              v33 = v136 - 108;
            }
            else
            {
              do
              {
                v32 = (uint32_t *)(*v31 - 12);
                if ( v32 != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(*v31 - 4), 0xFFFFFFFF) <= 0 )
                {
                  v124 = v31;
                  g4_std::string::Rep::M_destroy(v32);
                  v31 = v124;
                }
                ++v31;
              }
              while ( v139 != v31 );
              v33 = v136 - 108;
              v34 = *(uint32_t *)(v26 + v136 - 108 + 144) + 4 * v162;
            }
          }
        }
        *(uint32_t *)(v26 + v33 + 148) = v34;
        if ( v173 - 24 != k - 24 )
        {
          g4_std::Rb_tree_string_pair_string_const_b505e5::M_erase(
            v173 - 24,
            *(uint32_t **)(k + 56));
          *(uint32_t *)(k + 56) = 0;
          *(uint32_t *)(k + 60) = v173 - 20;
          *(uint32_t *)(k + 64) = v173 - 20;
          *(uint32_t *)(v26 + v136 - 96 + 164) = 0;
          if ( *(uint32_t *)(k - 16) != 0 )
          {
            v35 = g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                    v173 - 24,
                    *(uint32_t **)(k - 16),
                    v173 - 20);
            *(uint32_t *)(k + 56) = (uint32_t)(uintptr_t)(v35);
            for ( ii = v35; ii[2] != 0; ii = (uint32_t *)ii[2] )
              ;
            *(uint32_t *)(k + 60) = (uint32_t)(uintptr_t)(ii);
            while ( v35[3] != 0 )
              v35 = (uint32_t *)v35[3];
            *(uint32_t *)(k + 64) = (uint32_t)(uintptr_t)(v35);
            *(uint32_t *)(v26 + v136 - 96 + 164) = *(uint32_t *)(v136 - 144 + v26 + 140);
          }
        }
        if ( --v137 == 0 )
          break;
      }
    }
    *(uint32_t *)(a2 + 4) = v180;
    *(uint8_t *)(a2 + 10) = v181;
    g4_std::string::assign_str(a2 + 12, &v182);
    *(uint8_t *)(a2 + 18) = v183;
    g4_std::string::assign_str(a2 + 20, &v184);
    *(uint8_t *)(a2 + 26) = v185;
    *(uint32_t *)(a2 + 28) = v186;
    *(uint8_t *)(a2 + 34) = v187;
    if ( (uint32_t (***)(iap::PromotionLegacy::Self *, const glwebtools::JsonReader::Self *))a2 == &v179 )
      goto LABEL_99;
    v5 = a2;
    v48 = v188;
    v174 = v189;
    v6 = (v189 - v188) >> 2;
    v49 = *(char **)(a2 + 36);
    v164 = v6;
    if ( v6 <= (*(uint32_t *)(a2 + 44) - (int)(uintptr_t)v49) >> 2 )
    {
      v50 = *(char **)(a2 + 40);
      v51 = (v50 - v49) >> 2;
      if ( v164 > (unsigned int)v51 )
      {
        v59 = v188 + 4 * v51;
        if ( v51 > 0 )
        {
          v60 = *(uint32_t *)(a2 + 36);
          v61 = (*(uint32_t *)(a2 + 40) - (int)(uintptr_t)v49) >> 2;
          do
          {
            v114 = v48;
            v120 = v60;
            v48 += 4;
            g4_std::string::assign_str(v60, v114);
            v60 = v120 + 4;
            --v61;
          }
          while ( v61 != 0 );
          v50 = *(char **)(a2 + 40);
          v174 = v189;
          v49 = *(char **)(a2 + 36);
          v59 = v188 + ((v50 - v49) & 0xFFFFFFFC);
        }
        if ( v174 == v59 )
        {
          v56 = (int)(uintptr_t)&v49[4 * v164];
          v55 = a2;
        }
        else
        {
          v62 = v59;
          v63 = v50;
          do
          {
            if ( v63 != nullptr )
              g4_std::string::construct_copy(v63, v62);
            v62 += 4;
            v63 += 4;
          }
          while ( v174 != v62 );
          v55 = a2;
          v56 = *(uint32_t *)(a2 + 36) + 4 * v164;
        }
      }
      else
      {
        if ( v164 > 0 )
        {
          v52 = *(uint32_t *)(a2 + 36);
          v152 = v52;
          v175 = *(char **)(a2 + 40);
          v53 = (v189 - v188) >> 2;
          do
          {
            v113 = v48;
            v119 = v52;
            v48 += 4;
            g4_std::string::assign_str(v52, v113);
            v52 = v119 + 4;
            --v53;
          }
          while ( v53 != 0 );
          v50 = v175;
          v49 = (char *)(v152 + 4 * v164);
        }
        for ( ; v50 != v49; v49 += 4 )
        {
          v54 = (uint32_t *)(*(uint32_t *)v49 - 12);
          if ( v54 != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v49 - 4), 0xFFFFFFFF) <= 0 )
          {
            v126 = v50;
            g4_std::string::Rep::M_destroy(v54);
            v50 = v126;
          }
        }
        v55 = a2;
        v56 = *(uint32_t *)(a2 + 36) + 4 * v164;
      }
LABEL_98:
      *(uint32_t *)(v55 + 40) = v56;
LABEL_99:
      if ( (int *)(a2 + 48) != &v191 )
      {
        g4_std::Rb_tree_string_pair_string_const_b505e5::M_erase(
          a2 + 48,
          *(uint32_t **)(a2 + 56));
        *(uint32_t *)(a2 + 60) = a2 + 52;
        *(uint32_t *)(a2 + 56) = 0;
        *(uint32_t *)(a2 + 64) = a2 + 52;
        *(uint32_t *)(a2 + 68) = 0;
        if ( v193 != nullptr )
        {
          v57 = g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                  a2 + 48,
                  v193,
                  a2 + 52);
          *(uint32_t *)(a2 + 56) = (uint32_t)(uintptr_t)(v57);
          for ( jj = v57; jj[2] != 0; jj = (uint32_t *)jj[2] )
            ;
          *(uint32_t *)(a2 + 60) = (uint32_t)(uintptr_t)(jj);
          while ( v57[3] != 0 )
            v57 = (uint32_t *)v57[3];
          *(uint32_t *)(a2 + 64) = (uint32_t)(uintptr_t)(v57);
          *(uint32_t *)(a2 + 68) = v196;
        }
      }
      iap::PromotionLegacy::Destroy((iap::PromotionLegacy::Self *)&v179);
      return;
    }
    if ( v6 == 0 )
    {
      v159 = 0;
      v165 = 0;
      goto LABEL_126;
    }
    if ( v6 <= 0x3FFFFFFF )
    {
      v159 = 4 * v6;
      v165 = opNew(4 * v6);
LABEL_126:
      if ( v48 != v174 )
      {
        v64 = v165;
        do
        {
          if ( v64 != 0 )
            g4_std::string::construct_copy(v64, v48);
          v48 += 4;
          v64 += 4;
        }
        while ( v174 != v48 );
      }
      v65 = *(uint32_t **)(a2 + 40);
      v66 = *(uint32_t **)(a2 + 36);
      if ( v65 != v66 )
      {
        do
        {
          v67 = (uint32_t *)(*v66 - 12);
          if ( v67 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v66 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v67);
          ++v66;
        }
        while ( v65 != v66 );
        v66 = *(uint32_t **)(a2 + 36);
      }
      if ( v66 != nullptr )
        opDelete(v66);
      v55 = a2;
      *(uint32_t *)(a2 + 36) = v165;
      v56 = v159 + v165;
      *(uint32_t *)(a2 + 44) = v159 + v165;
      goto LABEL_98;
    }
LABEL_233:
    sub_18FFEE0(v5, v6);
  }
  v68 = (uint32_t *)*a1;
  v69 = (v4 - *a1) >> 3;
  v70 = 954437177 * v69;
  if ( 954437177 * v69 == 0 )
  {
    v71 = 1;
    v72 = 954437177 * ((int)(a2 - (uint32_t)(uintptr_t)v68) >> 3);
    goto LABEL_215;
  }
  v71 = 1908874354 * v69;
  v72 = 954437177 * ((int)(a2 - (uint32_t)(uintptr_t)v68) >> 3);
  if ( v70 > 2 * v70 || v71 > 0x38E38E3 )
  {
    v73 = 0xFFFFFFD8;
    v128 = 59652323;
LABEL_142:
    v160 = sub_4EBE70(v73, 4, (int)(uintptr_t)&unk_1B15112, (int)(uintptr_t)&unk_1B15112, 0);
    v74 = v160;
    goto LABEL_143;
  }
  if ( v71 != 0 )
  {
LABEL_215:
    v128 = v71;
    v73 = 72 * v71;
    goto LABEL_142;
  }
  v160 = 0;
  v128 = 0;
  v74 = 0;
LABEL_143:
  v75 = v74 + 72 * v72;
  if ( v75 != 0 )
  {
    *(uint32_t *)v75 = (uint32_t)(uintptr_t)(&off_2096100);
    *(uint32_t *)(v75 + 4) = *(uint32_t *)(a3 + 4);
    *(uint8_t *)(v75 + 10) = *(uint8_t *)(a3 + 10);
    *(uint32_t *)(v75 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
    g4_std::string::assign_str(v75 + 12, a3 + 12);
    *(uint8_t *)(v75 + 18) = *(uint8_t *)(a3 + 18);
    *(uint32_t *)(v75 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
    g4_std::string::assign_str(v75 + 20, a3 + 20);
    *(uint8_t *)(v75 + 26) = *(uint8_t *)(a3 + 26);
    *(uint32_t *)(v75 + 28) = *(uint32_t *)(a3 + 28);
    *(uint8_t *)(v75 + 34) = *(uint8_t *)(a3 + 34);
    v76 = *(uint32_t *)(a3 + 40) - *(uint32_t *)(a3 + 36);
    *(uint32_t *)(v75 + 36) = 0;
    v77 = v76 >> 2;
    *(uint32_t *)(v75 + 40) = 0;
    *(uint32_t *)(v75 + 44) = 0;
    if ( v77 != 0 )
    {
      if ( v77 > 0x3FFFFFFF )
        goto LABEL_233;
      v121 = 4 * v77;
      v78 = opNew(4 * v77);
      v79 = v121;
    }
    else
    {
      v79 = 0;
      v78 = 0;
    }
    *(uint32_t *)(v75 + 36) = v78;
    *(uint32_t *)(v75 + 40) = v78;
    *(uint32_t *)(v75 + 44) = v78 + v79;
    v176 = *(uint32_t *)(a3 + 40);
    if ( v176 != *(uint32_t *)(a3 + 36) )
    {
      v166 = v75;
      v80 = v78;
      v81 = *(uint32_t *)(a3 + 36);
      do
      {
        if ( v80 != 0 )
          g4_std::string::construct_copy(v80, v81);
        v80 += 4;
        v81 += 4;
      }
      while ( v176 != v81 );
      v78 = v80;
      v3 = a3;
      v75 = v166;
    }
    *(uint32_t *)(v75 + 40) = v78;
    *(uint32_t *)(v75 + 52) = 0;
    *(uint32_t *)(v75 + 56) = 0;
    *(uint32_t *)(v75 + 68) = 0;
    *(uint32_t *)(v75 + 60) = v75 + 52;
    *(uint32_t *)(v75 + 64) = v75 + 52;
    v82 = *(uint32_t **)(v3 + 56);
    if ( v82 != nullptr )
    {
      v83 = g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
              v75 + 48,
              v82,
              v75 + 52);
      *(uint32_t *)(v75 + 56) = (uint32_t)(uintptr_t)(v83);
      for ( kk = v83; kk[2] != 0; kk = (uint32_t *)kk[2] )
        ;
      *(uint32_t *)(v75 + 60) = (uint32_t)(uintptr_t)(kk);
      while ( v83[3] != 0 )
        v83 = (uint32_t *)v83[3];
      *(uint32_t *)(v75 + 64) = (uint32_t)(uintptr_t)(v83);
      *(uint32_t *)(v75 + 68) = *(uint32_t *)(v3 + 68);
    }
  }
  if ( *a1 == a2 )
  {
    v129 = v160;
    v95 = v160;
  }
  else
  {
    v177 = *a1;
    v85 = v160;
    do
    {
      if ( v85 != 0 )
      {
        v86 = v85 - v160;
        *(uint32_t *)v85 = (uint32_t)(uintptr_t)(&off_2096100);
        *(uint32_t *)(v85 + 4) = *(uint32_t *)(v177 + 4);
        *(uint8_t *)(v85 + 10) = *(uint8_t *)(v177 + 10);
        *(uint32_t *)(v85 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v85 + 12, v177 + 12);
        *(uint8_t *)(v86 + v160 + 12 + 6) = *(uint8_t *)(v177 + 18);
        *(uint32_t *)(v85 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v85 + 20, v177 + 20);
        *(uint8_t *)(v86 + v160 + 20 + 6) = *(uint8_t *)(v177 + 26);
        *(uint32_t *)(v85 + 28) = *(uint32_t *)(v177 + 28);
        v5 = v177;
        *(uint8_t *)(v160 + v86 + 34) = *(uint8_t *)(v177 + 34);
        v6 = v160 + 36;
        v87 = (*(uint32_t *)(v5 + 40) - *(uint32_t *)(v5 + 36)) >> 2;
        *(uint32_t *)(v85 + 36) = 0;
        v146 = v6;
        *(uint32_t *)(v86 + v6 + 4) = 0;
        *(uint32_t *)(v86 + v6 + 8) = 0;
        if ( v87 != 0 )
        {
          if ( v87 > 0x3FFFFFFF )
            goto LABEL_233;
          v122 = 4 * v87;
          v88 = opNew(4 * v87);
          v89 = v122;
        }
        else
        {
          v89 = 0;
          v88 = 0;
        }
        *(uint32_t *)(v86 + v146 + 8) = v88 + v89;
        *(uint32_t *)(v86 + v146) = v88;
        *(uint32_t *)(v86 + v146 + 4) = v88;
        v167 = *(uint32_t *)(v177 + 40);
        if ( v167 != *(uint32_t *)(v177 + 36) )
        {
          v144 = v85;
          v131 = v85 - v160;
          v90 = *(uint32_t *)(v177 + 36);
          v91 = v88;
          do
          {
            if ( v91 != 0 )
              g4_std::string::construct_copy(v91, v90);
            v91 += 4;
            v90 += 4;
          }
          while ( v167 != v90 );
          v88 = v91;
          v85 = v144;
          v86 = v131;
        }
        *(uint32_t *)(v86 + v146 + 4) = v88;
        v168 = v160 + 48;
        *(uint32_t *)(v86 + v168 + 4) = 0;
        *(uint32_t *)(v86 + v168 + 8) = 0;
        *(uint32_t *)(v86 + v168 + 20) = 0;
        *(uint32_t *)(v86 + v168 + 12) = v85 + 52;
        *(uint32_t *)(v86 + v168 + 16) = v85 + 52;
        v92 = *(uint32_t **)(v177 + 56);
        if ( v92 != nullptr )
        {
          v93 = g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                  v85 + 48,
                  v92,
                  v85 + 52);
          *(uint32_t *)(v85 + 56) = (uint32_t)(uintptr_t)(v93);
          for ( mm = v93; mm[2] != 0; mm = (uint32_t *)mm[2] )
            ;
          *(uint32_t *)(v85 + 60) = (uint32_t)(uintptr_t)(mm);
          while ( v93[3] != 0 )
            v93 = (uint32_t *)v93[3];
          *(uint32_t *)(v85 + 64) = (uint32_t)(uintptr_t)(v93);
          *(uint32_t *)(v86 + v168 + 20) = *(uint32_t *)(v177 + 68);
        }
      }
      v177 += 72;
      v85 += 72;
    }
    while ( v177 != a2 );
    v129 = v85;
    v95 = v85;
  }
  v153 = v95 + 72;
  v130 = (uint32_t *)a1[1];
  if ( v130 == (uint32_t *)a2 )
  {
    v178 = (uint32_t *)(v95 + 72);
  }
  else
  {
    v96 = a2;
    v178 = (uint32_t *)(v95 + 72);
    do
    {
      if ( v178 != nullptr )
      {
        v97 = (char *)v178 - v129;
        *v178 = (uint32_t)(uintptr_t)(&off_2096100);
        v178[1] = *(uint32_t *)(v96 + 4);
        v138 = v96 - a2;
        v97[v153 - 62] = *(uint8_t *)(v96 + 10);
        *(uint32_t *)&v97[v153 - 60] = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v178 + 3, v96 + 12);
        v97[v153 - 54] = *(uint8_t *)(v96 + 18);
        *(uint32_t *)&v97[v153 - 52] = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v178 + 5, v96 + 20);
        v97[v153 - 46] = *(uint8_t *)(v96 + 26);
        v178[7] = *(uint32_t *)(v96 + 28);
        v6 = v96 - a2;
        v97[v153 - 38] = *(uint8_t *)(v96 + 34);
        v5 = v153 + 36;
        v98 = (*(uint32_t *)(v96 + 40) - *(uint32_t *)(v96 + 36)) >> 2;
        v147 = v5;
        *(uint32_t *)&v97[v5 - 72] = 0;
        *(uint32_t *)&v97[v5 - 68] = 0;
        *(uint32_t *)&v97[v5 - 64] = 0;
        if ( v98 != 0 )
        {
          if ( v98 > 0x3FFFFFFF )
            goto LABEL_233;
          v123 = 4 * v98;
          v99 = opNew(4 * v98);
          v100 = v123;
        }
        else
        {
          v100 = 0;
          v99 = 0;
        }
        v101 = v147;
        *(uint32_t *)&v97[v147 - 72] = v99;
        *(uint32_t *)&v97[v147 - 68] = v99;
        *(uint32_t *)&v97[v147 - 64] = v99 + v100;
        v169 = *(uint32_t *)(v96 + 40);
        v102 = *(uint32_t *)(v96 + 36);
        if ( v169 != v102 )
        {
          v145 = v96;
          v103 = v99;
          v104 = v102;
          do
          {
            if ( v103 != 0 )
              g4_std::string::construct_copy(v103, v104);
            v103 += 4;
            v104 += 4;
          }
          while ( v169 != v104 );
          v99 = v103;
          v97 = (char *)v178 - v129;
          v96 = v145;
          v101 = v147;
        }
        *(uint32_t *)&v97[v101 - 68] = v99;
        v170 = v153 + 48;
        *(uint32_t *)&v97[v170 - 68] = 0;
        *(uint32_t *)&v97[v170 - 64] = 0;
        *(uint32_t *)&v97[v170 - 52] = 0;
        *(uint32_t *)&v97[v170 - 60] = (uint32_t)(uintptr_t)(v178 + 13);
        *(uint32_t *)&v97[v170 - 56] = (uint32_t)(uintptr_t)(v178 + 13);
        v105 = *(uint32_t **)(v96 + 56);
        if ( v105 != nullptr )
        {
          v106 = g4_std::Rb_tree_string_pair_string_const_b505e5::M_copy(
                   (int)(uintptr_t)(v178 + 12),
                   v105,
                   (int)(uintptr_t)(v178 + 13));
          v178[14] = (uint32_t)(uintptr_t)(v106);
          for ( nn = v106; nn[2] != 0; nn = (uint32_t *)nn[2] )
            ;
          v178[15] = (uint32_t)(uintptr_t)(nn);
          while ( v106[3] != 0 )
            v106 = (uint32_t *)v106[3];
          v178[16] = (uint32_t)(uintptr_t)(v106);
          *(uint32_t *)&v97[v170 - 52] = *(uint32_t *)(v138 + a2 + 68);
        }
      }
      v96 += 72;
      v178 += 18;
    }
    while ( v130 != (uint32_t *)v96 );
    v130 = (uint32_t *)a1[1];
  }
  v108 = (uint32_t *)*a1;
  if ( (uint32_t *)*a1 != v130 )
  {
    do
    {
      v109 = *v108;
      v110 = v108;
      v108 += 18;
      (*(void (**)(uint32_t *))(v109 + 8))(v110);
    }
    while ( v108 != v130 );
    v108 = (uint32_t *)*a1;
  }
  if ( v108 != nullptr )
    sub_4EBEE0((int)(uintptr_t)v108);
  *a1 = v160;
  a1[1] = (int)(uintptr_t)v178;
  a1[2] = v160 + 72 * v128;
}

// ----------------------------------------------------------------------------
// Function: sub_1509F70  (binary VA: 0x1509f70)
// Original: sub_1509F70
// ----------------------------------------------------------------------------
int sub_1509F70()
{
  sub_1900D70(&unk_211A3AC);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3AC, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gnu_cxx_normal_iterator_3b841c  (binary VA: 0x15101f0)
// Original: std::__insertion_sort<__gnu_cxx::__normal_iterator<iap::StoreItemLegacy *,std::vector<iap::StoreItemLegacy,glwebtools::SAllocator<iap::StoreItemLegacy,(glwebtools::MemHint)4>>>,iap::ComparatorWrapper>
// ----------------------------------------------------------------------------
void g4_std::insertion_sort_gnu_cxx_normal_iterator_3b841c(iap::StoreItemLegacy::Self *a1, iap::StoreItemLegacy::Self *a2, int a3)
{
  int v3;
  iap::StoreItemLegacy::Self *v4;
  iap::StoreItemLegacy::Self *v5;
  iap::StoreItemLegacy::Self *v6;
  iap::StoreItemLegacy::Self *v7;
  iap::StoreItemLegacy::Self *v8;
  char v9;
  typedef iap::StoreItemLegacy::Self *_g4_t_v10;
  typedef iap::StoreItemLegacy::Self *_g4_t_v11;
  typedef uint8_t _g4_t_v12[172];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  if ( a2 != a1 && (iap::StoreItemLegacy::Self *)((char *)a1 + 144) != a2 )
  {
    v11 = (iap::StoreItemLegacy::Self *)((char *)a1 + 144);
    do
    {
      v10 = v11;
      if ( G4_VCALL<uint8_t>(a3, 8, v11, a1) != 0 )
      {
        iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v12, v11);
        v3 = 954437177 * ((v11 - a1) >> 4);
        v4 = (iap::StoreItemLegacy::Self *)((char *)v11 + 144);
        if ( v3 > 0 )
        {
          v5 = v11;
          do
          {
            v6 = (iap::StoreItemLegacy::Self *)((char *)v5 - 144);
            iap::StoreItemLegacy::opAssign(v5, (iap::StoreItemLegacy::Self *)((char *)v5 - 144));
            --v3;
            v5 = v6;
          }
          while ( v3 != 0 );
          v4 = (iap::StoreItemLegacy::Self *)((char *)v11 + 144);
        }
        iap::StoreItemLegacy::opAssign(a1, (const iap::StoreItemLegacy::Self *)v12);
        iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v12);
      }
      else
      {
        iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v12, v11);
        v7 = (iap::StoreItemLegacy::Self *)((char *)v11 - 144);
        while ( 1 )
        {
          v8 = v7;
          v9 = G4_VCALL<int>(a3, 8, v12, v7);
          v7 = (iap::StoreItemLegacy::Self *)((char *)v7 - 144);
          if ( v9 == 0 )
            break;
          iap::StoreItemLegacy::opAssign(v10, v8);
          v10 = v8;
        }
        iap::StoreItemLegacy::opAssign(v10, (const iap::StoreItemLegacy::Self *)v12);
        iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v12);
        v4 = (iap::StoreItemLegacy::Self *)((char *)v11 + 144);
      }
      v11 = v4;
    }
    while ( v4 != a2 );
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::make_heap_gnu_cxx_normal_iterator_33a860  (binary VA: 0x1510390)
// Original: std::make_heap<__gnu_cxx::__normal_iterator<iap::StoreItemLegacy *,std::vector<iap::StoreItemLegacy,glwebtools::SAllocator<iap::StoreItemLegacy,(glwebtools::MemHint)4>>>,iap::ComparatorWrapper>
// ----------------------------------------------------------------------------
void g4_std::make_heap_gnu_cxx_normal_iterator_33a860(int a1, int a2, int a3)
{
  int v3;
  const iap::StoreItemLegacy::Self *i;
  int v5;
  int v6;
  int v7;
  int v8;
  int j;
  typedef int _g4_t_v10;
  typedef iap::StoreItemLegacy::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef iap::StoreItemLegacy::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef iap::StoreItemLegacy::Self *_g4_t_v19;
  typedef uint8_t _g4_t_v20[144];
  typedef uint8_t _g4_t_v21[144];
  typedef uint8_t _g4_t_v22[172];
  enum : size_t {
    _g4_s0 = 576u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v14)) > _g4_s4 ? (20u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v15)) > _g4_s5 ? (24u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v16)) > _g4_s6 ? (28u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v17)) > _g4_s7 ? (32u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v18)) > _g4_s8 ? (36u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v19)) > _g4_s9 ? (40u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v20)) > _g4_s10 ? (48u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (192u + sizeof(_g4_t_v21)) > _g4_s11 ? (192u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (336u + sizeof(_g4_t_v22)) > _g4_s12 ? (336u + sizeof(_g4_t_v22)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 192u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 336u);

  if ( a2 - a1 > 287 )
  {
    v3 = 954437177 * ((a2 - a1) >> 4);
    v17 = v3 & 1;
    v15 = (v3 - 1) >> 1;
    v16 = (v3 - 2) >> 1;
    v14 = v16;
    v18 = 2 * v16 + 1;
    v19 = (iap::StoreItemLegacy::Self *)(a1 + 144 * v16);
    v13 = v19;
    for ( i = v19; ; i = v13 )
    {
      iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v20, i);
      iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v21, (const iap::StoreItemLegacy::Self *)v20);
      v5 = v14;
      if ( v14 < v15 )
      {
        v6 = a3;
        v7 = v14;
        while ( 1 )
        {
          v8 = 2 * (v7 + 1);
          v5 = v8 - 1;
          v10 = v7;
          i = (const iap::StoreItemLegacy::Self *)(a1 + 144 * (v8 - 1));
          v11 = (iap::StoreItemLegacy::Self *)(a1 + 288 * (v7 + 1));
          if ( (*(uint8_t (**)(int, iap::StoreItemLegacy::Self *, const iap::StoreItemLegacy::Self *))(*(uint32_t *)v6 + 8))(
                 a3,
                 v11,
                 i) == 0 )
          {
            i = v11;
            v5 = v8;
          }
          iap::StoreItemLegacy::opAssign((iap::StoreItemLegacy::Self *)(a1 + 144 * v10), i);
          if ( v5 >= v15 )
            break;
          v7 = v5;
          v6 = a3;
        }
      }
      if ( v17 == 0 && v16 == v5 )
      {
        iap::StoreItemLegacy::opAssign(v19, (const iap::StoreItemLegacy::Self *)(a1 + 144 * v18));
        i = (const iap::StoreItemLegacy::Self *)(a1 + 144 * v18);
        v5 = 2 * v16 + 1;
      }
      iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v22, (const iap::StoreItemLegacy::Self *)v21);
      if ( v14 < v5 )
      {
        v12 = v5;
        for ( j = (v5 - 1) / 2; ; j = (j - 1) / 2 )
        {
          i = (const iap::StoreItemLegacy::Self *)(a1 + 144 * j);
          if ( G4_VCALL<uint8_t>(a3, 8, i, v22) == 0 )
            break;
          iap::StoreItemLegacy::opAssign((iap::StoreItemLegacy::Self *)(a1 + 144 * v12), i);
          if ( v14 >= j )
            goto LABEL_13;
          v12 = j;
        }
        i = (const iap::StoreItemLegacy::Self *)(a1 + 144 * v12);
      }
LABEL_13:
      iap::StoreItemLegacy::opAssign(i, (const iap::StoreItemLegacy::Self *)v22);
      iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v22);
      iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v21);
      v13 = (iap::StoreItemLegacy::Self *)((char *)v13 - 144);
      if ( v14 == 0 )
        break;
      --v14;
      iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v20);
    }
    iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v20);
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::pop_heap_gnu_cxx_normal_iterator_23454c  (binary VA: 0x1510650)
// Original: std::__pop_heap<__gnu_cxx::__normal_iterator<iap::StoreItemLegacy *,std::vector<iap::StoreItemLegacy,glwebtools::SAllocator<iap::StoreItemLegacy,(glwebtools::MemHint)4>>>,iap::ComparatorWrapper>
// ----------------------------------------------------------------------------
void g4_std::pop_heap_gnu_cxx_normal_iterator_23454c(iap::StoreItemLegacy::Self *a1, int a2, iap::StoreItemLegacy::Self *a3, int a4)
{
  int v4;
  const iap::StoreItemLegacy::Self *v5;
  int v6;
  int i;
  int v8;
  int v9;
  int v10;
  int j;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef iap::StoreItemLegacy::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[144];
  typedef uint8_t _g4_t_v19[144];
  typedef uint8_t _g4_t_v20[172];
  enum : size_t {
    _g4_s0 = 544u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v13)) > _g4_s1 ? (0u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v14)) > _g4_s2 ? (0u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v15)) > _g4_s3 ? (4u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v16)) > _g4_s4 ? (8u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v17)) > _g4_s5 ? (12u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v18)) > _g4_s6 ? (16u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (160u + sizeof(_g4_t_v19)) > _g4_s7 ? (160u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (304u + sizeof(_g4_t_v20)) > _g4_s8 ? (304u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 160u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 304u);

  iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v18, a3);
  v4 = 0;
  iap::StoreItemLegacy::opAssign(a3, a1);
  iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v19, (const iap::StoreItemLegacy::Self *)v18);
  v5 = a1;
  v6 = a4;
  v17 = 954437177 * ((a2 - (int)(uintptr_t)a1) >> 4);
  if ( (v17 - 1) / 2 > 0 )
  {
    for ( i = 0; ; i = v4 )
    {
      v8 = 2 * (i + 1);
      v4 = v8 - 1;
      v12 = i;
      v5 = (iap::StoreItemLegacy::Self *)((char *)a1 + 144 * v8 - 144);
      v15 = (iap::StoreItemLegacy::Self *)((char *)a1 + 288 * i + 288);
      if ( G4_VCALL<uint8_t>(a4, 8, v15, v5) == 0 )
      {
        v5 = v15;
        v4 = v8;
      }
      iap::StoreItemLegacy::opAssign((iap::StoreItemLegacy::Self *)((char *)a1 + 144 * v12), v5);
      if ( v4 >= (v17 - 1) / 2 )
        break;
    }
    v6 = a4;
  }
  if ( (v17 & 1) == 0 && v4 == (v17 - 2) / 2 )
  {
    v4 = 2 * v4 + 1;
    v14 = v6;
    iap::StoreItemLegacy::opAssign(v5, (iap::StoreItemLegacy::Self *)((char *)a1 + 144 * v4));
    iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v20, (const iap::StoreItemLegacy::Self *)v19);
    v9 = v14;
  }
  else
  {
    v13 = v6;
    iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v20, (const iap::StoreItemLegacy::Self *)v19);
    v9 = v13;
    if ( v4 <= 0 )
      goto LABEL_11;
  }
  v16 = v4;
  v10 = v9;
  for ( j = (v4 - 1) >> 1; ; j = (j - 1) / 2 )
  {
    v5 = (iap::StoreItemLegacy::Self *)((char *)a1 + 144 * j);
    if ( G4_VCALL<uint8_t>(v10, 8, v5, v20) == 0 )
      break;
    iap::StoreItemLegacy::opAssign((iap::StoreItemLegacy::Self *)((char *)a1 + 144 * v16), v5);
    if ( j == 0 )
      goto LABEL_11;
    v16 = j;
  }
  v5 = (iap::StoreItemLegacy::Self *)((char *)a1 + 144 * v16);
LABEL_11:
  iap::StoreItemLegacy::opAssign(v5, (const iap::StoreItemLegacy::Self *)v20);
  iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v20);
  iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v19);
  iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v18);
}



// ============================================================================
// Address:   0x15108e0 (size: 144 bytes)
// Symbol:    _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPN3iap15StoreItemLegacyESt6vectorIS3_N10glwebtools10SAllocatorIS3_LNS6_7MemHintE4EEEEEESB_EvT_T0_
// Demangled: void std::iter_swap<__gnu_cxx::__normal_iterator<iap::StoreItemLegacy *,std::vector<iap::StoreItemLegacy,glwebtools::SAllocator<iap::StoreItemLegacy,(glwebtools::MemHint)4>>>,__gnu_cxx::__normal_iterator<iap::StoreItemLegacy *,std::vector<iap::StoreItemLegacy,glwebtools::SAllocator<iap::StoreItemLegacy,(glwebtools::MemHint)4>>>>(__gnu_cxx::__normal_iterator<iap::StoreItemLegacy *,std::vector<iap::StoreItemLegacy,glwebtools::SAllocator<iap::StoreItemLegacy,(glwebtools::MemHint)4>>>,__gnu_cxx::__normal_iterator<iap::StoreItemLegacy *,std::vector<iap::StoreItemLegacy,glwebtools::SAllocator<iap::StoreItemLegacy,(glwebtools::MemHint)4>>>)
// ============================================================================
void g4_std_compat::iter_swap_95dcb0(
        iap::StoreItemLegacy::Self *a1,
        iap::StoreItemLegacy::Self *a2)
{
  uint8_t v2[156];

  iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v2, a1);
  iap::StoreItemLegacy::opAssign(a1, a2);
  iap::StoreItemLegacy::opAssign(a2, (const iap::StoreItemLegacy::Self *)v2);
  iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v2);
}
// ----------------------------------------------------------------------------
// Function: g4_std::unguarded_partition_pivot_gnu_cxx_normal_iterator_a24134  (binary VA: 0x1510970)
// Original: std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<iap::StoreItemLegacy *,std::vector<iap::StoreItemLegacy,glwebtools::SAllocator<iap::StoreItemLegacy,(glwebtools::MemHint)4>>>,iap::ComparatorWrapper>
// ----------------------------------------------------------------------------
iap::StoreItemLegacy::Self ** g4_std::unguarded_partition_pivot_gnu_cxx_normal_iterator_a24134(iap::StoreItemLegacy::Self **a1, iap::StoreItemLegacy::Self *a2, iap::StoreItemLegacy::Self *a3, int *a4)
{
  iap::StoreItemLegacy::Self *v4;
  iap::StoreItemLegacy::Self *v5;
  bool v6;
  int v7;
  iap::StoreItemLegacy::Self *i;
  iap::StoreItemLegacy::Self *v9;
  char v10;
  iap::StoreItemLegacy::Self *v11;
  typedef char *_g4_t_v13;
  typedef iap::StoreItemLegacy::Self *_g4_t_v14;
  typedef iap::StoreItemLegacy::Self *_g4_t_v15;
  typedef uint8_t _g4_t_v16[172];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v15)) > _g4_s2 ? (24u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);

  v15 = a3;
  v4 = (iap::StoreItemLegacy::Self *)((char *)a3 - 144);
  v5 = (iap::StoreItemLegacy::Self *)((char *)a2 + 144 * (954437177 * ((a3 - a2) >> 4) / 2));
  v6 = G4_VCALL<uint8_t>(a4, 8, a2, v5) == 0;
  v7 = *a4;
  v13 = (char *)a3 - 144;
  if ( !v6 )
  {
    if ( (*(uint8_t (**)(int *, iap::StoreItemLegacy::Self *, char *))(v7 + 8))(a4, v5, v13) != 0 )
      goto LABEL_3;
    if ( G4_VCALL<uint8_t>(a4, 8, a2, v4) == 0 )
      goto LABEL_4;
LABEL_12:
    g4_std_compat::iter_swap_95dcb0(
      a2,
      v4);
    goto LABEL_4;
  }
  if ( (*(uint8_t (**)(int *, iap::StoreItemLegacy::Self *, char *))(v7 + 8))(a4, a2, v13) == 0 )
  {
    if ( G4_VCALL<uint8_t>(a4, 8, v5, v4) != 0 )
      goto LABEL_12;
LABEL_3:
    g4_std_compat::iter_swap_95dcb0(
      a2,
      v5);
  }
LABEL_4:
  for ( i = (iap::StoreItemLegacy::Self *)((char *)a2 + 144); ; i = (iap::StoreItemLegacy::Self *)((char *)v9 + 144) )
  {
    do
    {
      v9 = i;
      v10 = G4_VCALL<int>(a4, 8, i, a2);
      i = (iap::StoreItemLegacy::Self *)((char *)v9 + 144);
    }
    while ( v10 != 0 );
    v11 = (iap::StoreItemLegacy::Self *)((char *)v15 - 144);
    do
    {
      v15 = v11;
      v14 = v11;
      v11 = (iap::StoreItemLegacy::Self *)((char *)v11 - 144);
    }
    while ( G4_VCALL<uint8_t>(a4, 8, a2, v14) != 0 );
    if ( v9 >= v15 )
      break;
    iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v16, v9);
    iap::StoreItemLegacy::opAssign(v9, v15);
    iap::StoreItemLegacy::opAssign(v15, (const iap::StoreItemLegacy::Self *)v16);
    iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v16);
  }
  *a1 = v9;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_f50785  (binary VA: 0x1510b60)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<iap::StoreItemLegacy *,std::vector<iap::StoreItemLegacy,glwebtools::SAllocator<iap::StoreItemLegacy,(glwebtools::MemHint)4>>>,int,iap::ComparatorWrapper>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gnu_cxx_normal_iterator_f50785(iap::StoreItemLegacy::Self *a1, iap::StoreItemLegacy::Self *a2, int a3, int *a4)
{
  iap::StoreItemLegacy::Self *v4;
  int result;
  int *v6;
  const iap::StoreItemLegacy::Self *v7;
  iap::StoreItemLegacy::Self *v8;
  const iap::StoreItemLegacy::Self *v9;
  iap::StoreItemLegacy::Self *v10;
  iap::StoreItemLegacy::Self *i;
  iap::StoreItemLegacy::Self *v12;
  bool v13;
  int v14;
  iap::StoreItemLegacy::Self *j;
  iap::StoreItemLegacy::Self *v16;
  char v17;
  iap::StoreItemLegacy::Self *v18;
  char v19;
  iap::StoreItemLegacy::Self *v20;
  int *k;
  iap::StoreItemLegacy::Self *v22;
  int v23;
  const iap::StoreItemLegacy::Self *v24;
  int v25;
  const iap::StoreItemLegacy::Self *v26;
  int v27;
  iap::StoreItemLegacy::Self *v28;
  iap::StoreItemLegacy::Self *v29;
  typedef iap::StoreItemLegacy::Self *_g4_t_v30;
  typedef iap::StoreItemLegacy::Self *_g4_t_v31;
  typedef iap::StoreItemLegacy::Self *_g4_t_v32;
  typedef iap::StoreItemLegacy::Self *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef iap::StoreItemLegacy::Self *_g4_t_v38;
  typedef iap::StoreItemLegacy::Self *_g4_t_v39;
  typedef iap::StoreItemLegacy::Self *_g4_t_v40;
  typedef iap::StoreItemLegacy::Self *_g4_t_v41;
  typedef iap::StoreItemLegacy::Self *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef iap::StoreItemLegacy::Self *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef iap::StoreItemLegacy::Self *_g4_t_v46;
  typedef iap::StoreItemLegacy::Self *_g4_t_v47;
  typedef iap::StoreItemLegacy::Self *_g4_t_v48;
  typedef iap::StoreItemLegacy::Self *_g4_t_v49;
  typedef iap::StoreItemLegacy::Self *_g4_t_v50;
  typedef int *_g4_t_v51;
  typedef iap::StoreItemLegacy::Self *_g4_t_v52;
  typedef iap::StoreItemLegacy::Self *_g4_t_v53;
  typedef iap::StoreItemLegacy::Self *_g4_t_v54;
  typedef iap::StoreItemLegacy::Self *_g4_t_v55;
  typedef iap::StoreItemLegacy::Self *_g4_t_v56;
  typedef iap::StoreItemLegacy::Self *_g4_t_v57;
  typedef iap::StoreItemLegacy::Self *_g4_t_v58[42];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v31)) > _g4_s1 ? (0u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v32)) > _g4_s2 ? (0u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v33)) > _g4_s3 ? (4u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v34)) > _g4_s4 ? (12u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v35)) > _g4_s5 ? (16u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v36)) > _g4_s6 ? (20u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v37)) > _g4_s7 ? (24u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v38)) > _g4_s8 ? (28u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v39)) > _g4_s9 ? (32u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v40)) > _g4_s10 ? (36u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v41)) > _g4_s11 ? (40u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v42)) > _g4_s12 ? (44u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v43)) > _g4_s13 ? (48u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v44)) > _g4_s14 ? (52u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v45)) > _g4_s15 ? (56u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v46)) > _g4_s16 ? (60u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v47)) > _g4_s17 ? (60u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v48)) > _g4_s18 ? (60u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v49)) > _g4_s19 ? (64u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v50)) > _g4_s20 ? (64u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v51)) > _g4_s21 ? (64u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v52)) > _g4_s22 ? (64u + sizeof(_g4_t_v52)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v53)) > _g4_s23 ? (64u + sizeof(_g4_t_v53)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v54)) > _g4_s24 ? (68u + sizeof(_g4_t_v54)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v55)) > _g4_s25 ? (72u + sizeof(_g4_t_v55)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v56)) > _g4_s26 ? (88u + sizeof(_g4_t_v56)) : _g4_s26,
    _g4_s28 = (100u + sizeof(_g4_t_v57)) > _g4_s27 ? (100u + sizeof(_g4_t_v57)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v58)) > _g4_s28 ? (104u + sizeof(_g4_t_v58)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 100u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 104u);

  v58[38] = (iap::StoreItemLegacy::Self *)&a1;
  v4 = a2;
  v38 = a1;
  result = a2 - a1;
  v37 = a3;
  v6 = a4;
  if ( a2 - a1 > 2447 )
  {
    if ( a3 != 0 )
    {
      do
      {
        --v37;
        g4_std::unguarded_partition_pivot_gnu_cxx_normal_iterator_a24134(
          &v55,
          v38,
          v4,
          v6);
        v7 = v55;
        v39 = v55;
        if ( v4 - v55 <= 2447 )
        {
          v4 = v55;
          goto LABEL_66;
        }
        if ( v37 == 0 )
        {
          v29 = v55;
          v48 = v55;
          v53 = v55;
          goto LABEL_62;
        }
        v8 = v4;
        v36 = v37;
        do
        {
          --v36;
          v30 = v8;
          g4_std::unguarded_partition_pivot_gnu_cxx_normal_iterator_a24134(
            &v56,
            v39,
            v8,
            v6);
          v9 = v56;
          v42 = v56;
          if ( v30 - v56 <= 2447 )
          {
            v8 = v56;
          }
          else
          {
            if ( v36 != 0 )
            {
              v10 = v30;
              v46 = v30;
              v33 = (iap::StoreItemLegacy::Self *)((char *)v56 + 144);
              v35 = v36;
              for ( i = v30; ; i = v40 )
              {
                --v35;
                v12 = (iap::StoreItemLegacy::Self *)((char *)i - 144);
                v49 = (iap::StoreItemLegacy::Self *)((char *)v42 + 144 * (954437177 * ((v10 - v42) >> 4) / 2));
                v13 = G4_VCALL<uint8_t>(v6, 8, v42, v49) == 0;
                v14 = *v6;
                if ( v13 )
                {
                  if ( (*(uint8_t (**)(int *, const iap::StoreItemLegacy::Self *, iap::StoreItemLegacy::Self *))(v14 + 8))(
                         v6,
                         v42,
                         v12) == 0 )
                  {
                    if ( G4_VCALL<uint8_t>(v6, 8, v49, v12) == 0 )
                    {
LABEL_75:
                      g4_std_compat::iter_swap_95dcb0(
                        v42,
                        v49);
                      goto LABEL_12;
                    }
LABEL_74:
                    g4_std_compat::iter_swap_95dcb0(
                      v42,
                      v12);
                  }
                }
                else
                {
                  if ( (*(uint8_t (**)(int *, iap::StoreItemLegacy::Self *, iap::StoreItemLegacy::Self *))(v14 + 8))(
                         v6,
                         v49,
                         v12) != 0 )
                    goto LABEL_75;
                  if ( G4_VCALL<uint8_t>(v6, 8, v42, v12) != 0 )
                    goto LABEL_74;
                }
LABEL_12:
                v50 = v46;
                for ( j = v33; ; j = (iap::StoreItemLegacy::Self *)((char *)v40 + 144) )
                {
                  do
                  {
                    v16 = j;
                    v17 = G4_VCALL<int>(v6, 8, j, v42);
                    j = (iap::StoreItemLegacy::Self *)((char *)v16 + 144);
                  }
                  while ( v17 != 0 );
                  v40 = v16;
                  v18 = (iap::StoreItemLegacy::Self *)((char *)v50 - 144);
                  do
                  {
                    v50 = v18;
                    v19 = G4_VCALL<int>(v6, 8, v42, v18);
                    v18 = (iap::StoreItemLegacy::Self *)((char *)v18 - 144);
                  }
                  while ( v19 != 0 );
                  if ( v40 >= v50 )
                    break;
                  iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v58, v40);
                  iap::StoreItemLegacy::opAssign(v40, v50);
                  iap::StoreItemLegacy::opAssign(v50, (const iap::StoreItemLegacy::Self *)v58);
                  iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v58);
                }
                if ( v46 - v40 > 2447 )
                {
                  v20 = v46;
                  if ( v35 != 0 )
                  {
                    v51 = v6;
                    v34 = v35;
                    for ( k = v6; ; k = v51 )
                    {
                      --v34;
                      g4_std::unguarded_partition_pivot_gnu_cxx_normal_iterator_a24134(
                        &v57,
                        v40,
                        v20,
                        k);
                      v41 = v57;
                      if ( v20 - v57 > 2447 )
                      {
                        if ( v34 != 0 )
                        {
                          v22 = v20;
                          v43 = v34;
                          while ( 1 )
                          {
                            --v43;
                            g4_std::unguarded_partition_pivot_gnu_cxx_normal_iterator_a24134(
                              v58,
                              v41,
                              v22,
                              v51);
                            v44 = v58[0];
                            if ( v22 - v58[0] > 2447 )
                            {
                              if ( v43 != 0 )
                              {
                                v45 = v43;
                                while ( 1 )
                                {
                                  --v45;
                                  g4_std::unguarded_partition_pivot_gnu_cxx_normal_iterator_a24134(
                                    &v54,
                                    v44,
                                    v22,
                                    v51);
                                  v47 = v54;
                                  if ( v22 - v54 > 2447 )
                                  {
                                    v23 = v45;
                                    if ( v45 != 0 )
                                    {
                                      while ( 1 )
                                      {
                                        --v23;
                                        g4_std::unguarded_partition_pivot_gnu_cxx_normal_iterator_a24134(
                                          &v54,
                                          v47,
                                          v22,
                                          v51);
                                        v31 = v54;
                                        g4_std::introsort_loop_gnu_cxx_normal_iterator_f50785(
                                          v54,
                                          v22,
                                          v23,
                                          v51);
                                        v22 = v31;
                                        if ( v31 - v47 <= 2447 )
                                          break;
                                        if ( v23 == 0 )
                                          goto LABEL_43;
                                      }
                                    }
                                    else
                                    {
LABEL_43:
                                      g4_std::make_heap_gnu_cxx_normal_iterator_33a860(
                                        (int)(uintptr_t)v47,
                                        (int)(uintptr_t)v22,
                                        (int)(uintptr_t)v51);
                                      do
                                      {
                                        v22 = (iap::StoreItemLegacy::Self *)((char *)v22 - 144);
                                        g4_std::pop_heap_gnu_cxx_normal_iterator_23454c(
                                          v47,
                                          (int)(uintptr_t)v22,
                                          v22,
                                          (int)(uintptr_t)v51);
                                      }
                                      while ( v22 - v47 > 287 );
                                    }
                                  }
                                  if ( v47 - v44 <= 2447 )
                                    break;
                                  v22 = v47;
                                  if ( v45 == 0 )
                                    goto LABEL_34;
                                }
                              }
                              else
                              {
LABEL_34:
                                g4_std::make_heap_gnu_cxx_normal_iterator_33a860(
                                  (int)(uintptr_t)v44,
                                  (int)(uintptr_t)v22,
                                  (int)(uintptr_t)v51);
                                do
                                {
                                  v22 = (iap::StoreItemLegacy::Self *)((char *)v22 - 144);
                                  g4_std::pop_heap_gnu_cxx_normal_iterator_23454c(
                                    v44,
                                    (int)(uintptr_t)v22,
                                    v22,
                                    (int)(uintptr_t)v51);
                                }
                                while ( v22 - v44 > 287 );
                              }
                            }
                            if ( v44 - v41 <= 2447 )
                              break;
                            v22 = v44;
                            if ( v43 == 0 )
                              goto LABEL_38;
                          }
                        }
                        else
                        {
                          v22 = v20;
LABEL_38:
                          g4_std::make_heap_gnu_cxx_normal_iterator_33a860(
                            (int)(uintptr_t)v41,
                            (int)(uintptr_t)v22,
                            (int)(uintptr_t)v51);
                          do
                          {
                            v22 = (iap::StoreItemLegacy::Self *)((char *)v22 - 144);
                            g4_std::pop_heap_gnu_cxx_normal_iterator_23454c(
                              v41,
                              (int)(uintptr_t)v22,
                              v22,
                              (int)(uintptr_t)v51);
                          }
                          while ( v22 - v41 > 287 );
                        }
                      }
                      if ( v41 - v40 <= 2447 )
                      {
                        v6 = v51;
                        goto LABEL_47;
                      }
                      if ( v34 == 0 )
                        break;
                      v20 = v41;
                    }
                    v6 = v51;
                    v20 = v41;
                  }
                  g4_std::make_heap_gnu_cxx_normal_iterator_33a860(
                    (int)(uintptr_t)v40,
                    (int)(uintptr_t)v20,
                    (int)(uintptr_t)v6);
                  do
                  {
                    v20 = (iap::StoreItemLegacy::Self *)((char *)v20 - 144);
                    g4_std::pop_heap_gnu_cxx_normal_iterator_23454c(
                      v40,
                      (int)(uintptr_t)v20,
                      v20,
                      (int)(uintptr_t)v6);
                  }
                  while ( v20 - v40 > 287 );
                }
LABEL_47:
                if ( v40 - v42 <= 2447 )
                {
                  v9 = v56;
                  v8 = v56;
                  goto LABEL_59;
                }
                if ( v35 == 0 )
                {
                  v24 = v56;
                  v25 = (int)(uintptr_t)v40;
                  v52 = v56;
                  goto LABEL_55;
                }
                v10 = v40;
                v46 = v40;
              }
            }
            v40 = v30;
            v52 = v56;
            v24 = v56;
            v25 = (int)(uintptr_t)v30;
LABEL_55:
            g4_std::make_heap_gnu_cxx_normal_iterator_33a860(
              (int)(uintptr_t)v42,
              v25,
              (int)(uintptr_t)v6);
            v26 = v24;
            v27 = (int)(uintptr_t)v6;
            v28 = v40;
            do
            {
              v28 = (iap::StoreItemLegacy::Self *)((char *)v28 - 144);
              v32 = const_cast<iap::StoreItemLegacy::Self *>(v26);
              g4_std::pop_heap_gnu_cxx_normal_iterator_23454c(
                v42,
                (int)(uintptr_t)v28,
                v28,
                v27);
              v26 = v32;
            }
            while ( v28 - v42 > 287 );
            v6 = (int *)v27;
            v9 = v52;
            v8 = v32;
          }
LABEL_59:
          if ( v9 - v39 <= 2447 )
          {
            v7 = v55;
            v4 = v55;
            goto LABEL_66;
          }
        }
        while ( v36 != 0 );
        v4 = v8;
        v53 = v55;
        v48 = v55;
        v29 = v39;
LABEL_62:
        g4_std::make_heap_gnu_cxx_normal_iterator_33a860(
          (int)(uintptr_t)v29,
          (int)(uintptr_t)v4,
          (int)(uintptr_t)v6);
        do
        {
          v4 = (iap::StoreItemLegacy::Self *)((char *)v4 - 144);
          g4_std::pop_heap_gnu_cxx_normal_iterator_23454c(
            v39,
            (int)(uintptr_t)v4,
            v4,
            (int)(uintptr_t)v6);
        }
        while ( v4 - v39 > 287 );
        v7 = v48;
        v4 = v53;
LABEL_66:
        result = v7 - v38;
        if ( result <= 2447 )
          return result;
      }
      while ( v37 != 0 );
    }
    g4_std::make_heap_gnu_cxx_normal_iterator_33a860(
      (int)(uintptr_t)v38,
      (int)(uintptr_t)v4,
      (int)(uintptr_t)v6);
    do
    {
      v4 = (iap::StoreItemLegacy::Self *)((char *)v4 - 144);
      g4_std::pop_heap_gnu_cxx_normal_iterator_23454c(
        v38,
        (int)(uintptr_t)v4,
        v4,
        (int)(uintptr_t)v6);
      result = v4 - v38;
    }
    while ( v4 - v38 > 287 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1511450  (binary VA: 0x1511450)
// Original: sub_1511450
// ----------------------------------------------------------------------------
int sub_1511450()
{
  sub_1900D70(&unk_211A3B0);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3B0, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_15131F0  (binary VA: 0x15131f0)
// Original: sub_15131F0
// ----------------------------------------------------------------------------
int sub_15131F0()
{
  sub_1900D70(&unk_211A3B4);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3B4, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_1514480  (binary VA: 0x1514480)
// Original: sub_1514480
// ----------------------------------------------------------------------------
int sub_1514480()
{
  sub_1900D70(&unk_211A3B8);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3B8, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_1514E50  (binary VA: 0x1514e50)
// Original: sub_1514E50
// ----------------------------------------------------------------------------
int sub_1514E50()
{
  sub_1900D70(&unk_211A3BC);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3BC, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_1515760  (binary VA: 0x1515760)
// Original: sub_1515760
// ----------------------------------------------------------------------------
int sub_1515760()
{
  sub_1900D70(&unk_211A3C0);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3C0, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_LogInfo  (binary VA: 0x1517d80)
// Original: InAppBilling_LogInfo
// ----------------------------------------------------------------------------
int InAppBilling_LogInfo(int a1, int a2, char *a3)
{
  int v3;
  int result;
  void *v5;
  int Instance;
  void *v7;
  typedef iap::IAPLog::Self *_g4_t_v8;
  typedef iap::IAPLog::Self *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v9)) > _g4_s1 ? (0u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v10)) > _g4_s2 ? (52u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v11)) > _g4_s3 ? (56u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v12)) > _g4_s4 ? (60u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);

  if ( (unsigned int)(a2 - 3) <= 1 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)&v11, "%s", (int)(uintptr_t)&v10);
    Instance = (int)(uintptr_t)(iap::IAPLog::GetInstance(v9));
    iap::IAPLog::LogInfo(Instance, a1, a2, (const char **)&v11, a3);
    result = v11;
    v7 = (void *)(v11 - 12);
    if ( (uint32_t *)(v11 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
      return 0;
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)v12, a3, (int)(uintptr_t)&v10 + 1);
    v3 = (int)(uintptr_t)(iap::IAPLog::GetInstance(v8));
    iap::IAPLog::LogInfo(v3, a1, a2, (const char **)v12);
    result = v12[0];
    v5 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_151A3D0  (binary VA: 0x151a3d0)
// Original: sub_151A3D0
// ----------------------------------------------------------------------------
int sub_151A3D0(int a1, uint32_t *a2, const void **a3)
{
  size_t v3;
  uint32_t *v4;
  size_t v5;
  size_t i;
  size_t v7;
  uint32_t *v8;
  size_t v9;
  size_t n;
  int v11;
  uint32_t *v12;
  size_t v13;
  size_t v14;
  uint32_t *v15;
  int v16;
  int v17;
  size_t v19;
  unsigned int v20;
  size_t v21;
  size_t v22;
  size_t v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  size_t v28;
  size_t v29;
  unsigned int v30;
  int v31;
  size_t v32;
  char v33;
  void *s1;
  size_t v37;
  size_t v38;
  uint32_t *v39;

  v3 = a2[2];
  v4 = a2 + 1;
  v39 = v4;
  if ( v3 == 0 )
  {
    v13 = (size_t)v4;
    goto LABEL_17;
  }
  s1 = (void *)*a3;
  v5 = *((uint32_t *)*a3 - 3);
  for ( i = v3; ; i = v7 )
  {
    v8 = *(uint32_t **)(i + 16);
    v9 = *(v8 - 3);
    n = v9;
    v32 = i;
    if ( v5 <= v9 )
      n = v5;
    v37 = n;
    v11 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v11 == 0 )
      v11 = v5 - v9;
    if ( v11 >= 0 )
      break;
    v7 = *(uint32_t *)(v32 + 8);
    v33 = 1;
    if ( v7 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v7 = *(uint32_t *)(v32 + 12);
  v33 = 0;
  if ( v7 != 0 )
    goto LABEL_4;
LABEL_11:
  v12 = v8;
  v13 = v32;
  v14 = v37;
  v15 = v12;
  v38 = v32;
  if ( v33 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( a2[3] == v13 )
  {
    LOBYTE(v20) = 1;
    if ( v39 != (uint32_t *)v13 )
    {
      v21 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v22 = *((uint32_t *)*a3 - 3);
      v23 = v22;
      if ( v21 <= v22 )
        v23 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v24 = v22 - v21;
      v25 = memcmp(*a3, *(const void **)(v13 + 16), v23);
      if ( v25 == 0 )
        v25 = v24;
      v20 = v25 >> 31;
    }
    v26 = opNew(0x9Cu);
    if ( v26 != -16 )
    {
      g4_std::string::construct_copy(v26 + 16, a3);
      iap::BillingMethodAndroid::Construct(
        (iap::BillingMethodAndroid::Self *)(v26 + 20),
        (const iap::BillingMethodAndroid::Self *)(a3 + 1));
    }
    sub_1904970(v20, v26, v13, v39);
  }
  else
  {
    v19 = sub_19048F0(v13);
    v15 = *(uint32_t **)(v19 + 16);
    v38 = v13;
    v13 = v19;
    v9 = *(v15 - 3);
    s1 = (void *)*a3;
    v5 = *((uint32_t *)*a3 - 3);
    v14 = v5;
    if ( v9 <= v5 )
      v14 = *(v15 - 3);
LABEL_12:
    v16 = memcmp(v15, s1, v14);
    v17 = v9 - v5;
    if ( v16 != 0 )
      v17 = v16;
    if ( v17 >= 0 )
    {
      *(uint32_t *)a1 = v13;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    LOBYTE(v27) = 1;
    if ( v39 != (uint32_t *)v38 )
    {
      v28 = *(uint32_t *)(*(uint32_t *)(v38 + 16) - 12);
      v29 = v28;
      if ( v5 <= v28 )
        v29 = v5;
      v30 = v5 - v28;
      v31 = memcmp(s1, *(const void **)(v38 + 16), v29);
      if ( v31 != 0 )
        v30 = v31;
      v27 = v30 >> 31;
    }
    v26 = opNew(0x9Cu);
    if ( v26 != -16 )
    {
      g4_std::string::construct_copy(v26 + 16, a3);
      iap::BillingMethodAndroid::Construct(
        (iap::BillingMethodAndroid::Self *)(v26 + 20),
        (const iap::BillingMethodAndroid::Self *)(a3 + 1));
    }
    sub_1904970(v27, v26, v38, v39);
  }
  ++a2[5];
  *(uint32_t *)a1 = v26;
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_151A630  (binary VA: 0x151a630)
// Original: sub_151A630
// ----------------------------------------------------------------------------
int * sub_151A630(int *a1, uint32_t *a2, int a3, const void **a4)
{
  const void *s2;
  uint32_t *s1;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  int v11;
  size_t v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  size_t v17;
  size_t v18;
  int v19;
  int v20;
  uint32_t *v21;
  size_t v22;
  size_t v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  char v31;
  int v32;
  int v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef const void *_g4_t_v38;
  typedef const void *_g4_t_v39;
  typedef size_t _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef size_t _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v34)) > _g4_s0 ? (4u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v35)) > _g4_s1 ? (4u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v36)) > _g4_s2 ? (4u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v37)) > _g4_s3 ? (8u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v38)) > _g4_s4 ? (8u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v39)) > _g4_s5 ? (8u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v42)) > _g4_s6 ? (24u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v43)) > _g4_s7 ? (24u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v44)) > _g4_s8 ? (24u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v45)) > _g4_s9 ? (28u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v46)) > _g4_s10 ? (28u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v47)) > _g4_s11 ? (32u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v48)) > _g4_s12 ? (36u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v49)) > _g4_s13 ? (36u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v50)) > _g4_s14 ? (40u + sizeof(_g4_t_v50)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);

  v45 = (size_t)(a2 + 1);
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] != 0 )
    {
      v44 = a2[4];
      v21 = *(uint32_t **)(v44 + 16);
      v22 = *((uint32_t *)*a4 - 3);
      v23 = *(v21 - 3);
      if ( v22 <= v23 )
        v23 = *((uint32_t *)*a4 - 3);
      v39 = *a4;
      v35 = *(v21 - 3);
      v46 = v23;
      v24 = memcmp(*(const void **)(v44 + 16), *a4, v23);
      if ( v24 == 0 )
        v24 = v35 - v22;
      if ( v24 < 0 )
      {
        LOBYTE(v25) = 1;
        if ( a3 != v44 )
        {
          v26 = memcmp(v39, v21, v46);
          v27 = v22 - v35;
          if ( v26 == 0 )
            v26 = v27;
          v25 = v26 >> 31;
        }
        v15 = opNew(0x9Cu);
        if ( v15 != -16 )
        {
          g4_std::string::construct_copy(v15 + 16, a4);
          iap::BillingMethodAndroid::Construct(
            (iap::BillingMethodAndroid::Self *)(v15 + 20),
            (const iap::BillingMethodAndroid::Self *)(a4 + 1));
        }
        sub_1904970(v25, v15, v44, a3);
        goto LABEL_31;
      }
    }
  }
  else
  {
    s2 = *a4;
    s1 = *(uint32_t **)(a3 + 16);
    v6 = *((uint32_t *)*a4 - 3);
    n = v6;
    if ( *(s1 - 3) <= v6 )
      n = *(s1 - 3);
    v34 = *(s1 - 3);
    v37 = n;
    v8 = memcmp(*a4, *(const void **)(a3 + 16), n);
    v42 = v8;
    v47 = v6 - v34;
    if ( v8 == 0 )
      v8 = v6 - v34;
    if ( v8 < 0 )
    {
      if ( a3 != a2[3] )
      {
        v11 = sub_1904940(a3);
        v12 = v6;
        v48 = v11;
        v13 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        v38 = *(const void **)(v11 + 16);
        if ( v13 <= v6 )
          v12 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        v43 = v12;
        v14 = memcmp(*(const void **)(v11 + 16), s2, v12);
        if ( v14 == 0 )
          v14 = v13 - v6;
        if ( v14 >= 0 )
          goto LABEL_39;
        if ( *(uint32_t *)(v48 + 12) == 0 )
        {
          LOBYTE(v28) = 1;
          if ( v45 != v48 )
          {
            v29 = v6 - v13;
            v30 = memcmp(s2, v38, v43);
            if ( v30 == 0 )
              v30 = v29;
            v28 = v30 >> 31;
          }
          v36 = v28;
          v15 = opNew(0x9Cu);
          v31 = v36;
          if ( v15 != -16 )
          {
            g4_std::string::construct_copy(v15 + 16, a4);
            iap::BillingMethodAndroid::Construct(
              (iap::BillingMethodAndroid::Self *)(v15 + 20),
              (const iap::BillingMethodAndroid::Self *)(a4 + 1));
            v31 = v36;
          }
          sub_1904970(v31, v15, v48, v45);
          goto LABEL_31;
        }
      }
      v15 = opNew(0x9Cu);
      if ( v15 != -16 )
      {
        g4_std::string::construct_copy(v15 + 16, a4);
        iap::BillingMethodAndroid::Construct(
          (iap::BillingMethodAndroid::Self *)(v15 + 20),
          (const iap::BillingMethodAndroid::Self *)(a4 + 1));
      }
      sub_1904970(1, v15, a3, v45);
      goto LABEL_31;
    }
    v9 = memcmp(s1, s2, v37);
    if ( v9 == 0 )
      v9 = v34 - v6;
    if ( v9 >= 0 )
    {
      *a1 = a3;
      return a1;
    }
    v16 = a2[4];
    if ( a3 == v16 )
    {
      v33 = v42;
      if ( v42 == 0 )
        v33 = v6 - v34;
      v15 = opNew(0x9Cu);
      if ( v15 != -16 )
      {
        g4_std::string::construct_copy(v15 + 16, a4);
        iap::BillingMethodAndroid::Construct(
          (iap::BillingMethodAndroid::Self *)(v15 + 20),
          (const iap::BillingMethodAndroid::Self *)(a4 + 1));
      }
      sub_1904970(v33 < 0, v15, v16, v45);
      goto LABEL_31;
    }
    v49 = sub_19048E0(a3);
    v17 = v6;
    v18 = *(uint32_t *)(*(uint32_t *)(v49 + 16) - 12);
    if ( v18 <= v6 )
      v17 = *(uint32_t *)(*(uint32_t *)(v49 + 16) - 12);
    v19 = v6 - v18;
    v20 = memcmp(s2, *(const void **)(v49 + 16), v17);
    if ( v20 != 0 )
      v19 = v20;
    if ( v19 < 0 )
    {
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v15 = opNew(0x9Cu);
        if ( v15 != -16 )
        {
          g4_std::string::construct_copy(v15 + 16, a4);
          iap::BillingMethodAndroid::Construct(
            (iap::BillingMethodAndroid::Self *)(v15 + 20),
            (const iap::BillingMethodAndroid::Self *)(a4 + 1));
        }
        sub_1904970(1, v15, v49, v45);
      }
      else
      {
        v32 = v42;
        if ( v42 == 0 )
          v32 = v47;
        v15 = opNew(0x9Cu);
        if ( v15 != -16 )
        {
          g4_std::string::construct_copy(v15 + 16, a4);
          iap::BillingMethodAndroid::Construct(
            (iap::BillingMethodAndroid::Self *)(v15 + 20),
            (const iap::BillingMethodAndroid::Self *)(a4 + 1));
        }
        sub_1904970(v32 < 0, v15, a3, v45);
      }
LABEL_31:
      ++a2[5];
      *a1 = v15;
      return a1;
    }
  }
LABEL_39:
  sub_151A3D0((int)(uintptr_t)v50, a2, a4);
  *a1 = v50[0];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_151AB20  (binary VA: 0x151ab20)
// Original: sub_151AB20
// ----------------------------------------------------------------------------
iap::BillingMethodAndroid::Self * sub_151AB20(iap::BillingMethodAndroid::Self *a1, int a2)
{
  void *v2;
  int v3;
  size_t v4;
  size_t v5;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  size_t v13;
  size_t v14;
  size_t v15;
  int v16;
  int v17;
  size_t v18;
  size_t v19;
  int v20;
  void *v21;
  volatile int32_t *v23;
  typedef size_t _g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef char *_g4_t_v31;
  typedef const void *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35[4];
  typedef int _g4_t_v36[3];
  typedef int _g4_t_v37;
  typedef uint32_t _g4_t_v38[22];
  typedef uint32_t _g4_t_v39[5];
  typedef uint32_t _g4_t_v40[9];
  typedef uint32_t _g4_t_v41[37];
  typedef volatile int32_t *_g4_t_v42;
  typedef uint8_t _g4_t_v43[148];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v25)) > _g4_s1 ? (8u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v28)) > _g4_s2 ? (24u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v29)) > _g4_s3 ? (28u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v30)) > _g4_s4 ? (28u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v31)) > _g4_s5 ? (32u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v32)) > _g4_s6 ? (32u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v33)) > _g4_s7 ? (36u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (49u + sizeof(_g4_t_v34)) > _g4_s8 ? (49u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v35)) > _g4_s9 ? (56u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v36)) > _g4_s10 ? (72u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v37)) > _g4_s11 ? (84u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v38)) > _g4_s12 ? (88u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (176u + sizeof(_g4_t_v39)) > _g4_s13 ? (176u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (196u + sizeof(_g4_t_v40)) > _g4_s14 ? (196u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (232u + sizeof(_g4_t_v41)) > _g4_s15 ? (232u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (380u + sizeof(_g4_t_v42)) > _g4_s16 ? (380u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (384u + sizeof(_g4_t_v43)) > _g4_s17 ? (384u + sizeof(_g4_t_v43)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 49u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 176u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 196u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 232u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 380u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 384u);

  BYTE2(v38[2]) = 0;
  BYTE2(v38[4]) = 0;
  v39[2] = (uint32_t)(uintptr_t)v39;
  v38[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v38[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  v38[5] = (uint32_t)(uintptr_t)(&dword_213B814);
  v38[7] = (uint32_t)(uintptr_t)(&dword_213B814);
  v38[12] = (uint32_t)(uintptr_t)(&dword_213B814);
  v38[17] = (uint32_t)(uintptr_t)(&dword_213B814);
  v38[19] = (uint32_t)(uintptr_t)(&dword_213B814);
  v38[20] = (uint32_t)(uintptr_t)(&dword_213B814);
  v39[3] = (uint32_t)(uintptr_t)v39;
  v40[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  BYTE2(v38[6]) = 0;
  v38[0] = ((uint32_t)(uintptr_t)&off_20966C8);
  BYTE2(v38[8]) = 0;
  BYTE2(v38[11]) = 0;
  BYTE2(v38[13]) = 0;
  BYTE2(v38[16]) = 0;
  BYTE2(v38[18]) = 0;
  v39[0] = 0;
  v39[1] = 0;
  v39[4] = 0;
  BYTE2(v40[1]) = 0;
  v40[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  BYTE2(v40[3]) = 0;
  memset(&v40[4], 0, 12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&v37, "NA", (int)(uintptr_t)&v34 + 2);
  g4_std::string::assign_str(v40, &v37);
  BYTE2(v40[1]) = 1;
  v2 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v28 = a2 + 108;
  g4_std::string::construct_from_cstr((int)(uintptr_t)v36, "legacy", (int)(uintptr_t)&v34 + 1);
  v3 = *(uint32_t *)(a2 + 112);
  if ( v3 == 0 )
  {
    v31 = (char *)v36[0];
LABEL_37:
    v29 = a2 + 108;
    goto LABEL_17;
  }
  v31 = (char *)v36[0];
  v29 = a2 + 108;
  v4 = *(uint32_t *)(v36[0] - 12);
  do
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
      v6 = v5;
      v24 = v4;
      if ( v4 <= v5 )
        v6 = v4;
      v7 = memcmp(*(const void **)(v3 + 16), v31, v6);
      v4 = v24;
      v8 = v5 - v24;
      if ( v7 == 0 )
        v7 = v8;
      if ( v7 < 0 )
        break;
      v29 = v3;
      v3 = *(uint32_t *)(v3 + 8);
      if ( v3 == 0 )
        goto LABEL_11;
    }
    v3 = *(uint32_t *)(v3 + 12);
  }
  while ( v3 != 0 );
LABEL_11:
  if ( v28 == v29 )
    goto LABEL_37;
  v9 = *(uint32_t *)(*(uint32_t *)(v29 + 16) - 12);
  v10 = v9;
  if ( v24 <= v9 )
    v10 = v24;
  v11 = memcmp(v31, *(const void **)(v29 + 16), v10);
  if ( v11 == 0 )
    v11 = v24 - v9;
  if ( v11 < 0 )
    goto LABEL_37;
LABEL_17:
  if ( v31 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v31 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v31 - 12);
  if ( v28 == v29 )
  {
    iap::BillingMethodAndroid::Construct(a1, (const iap::BillingMethodAndroid::Self *)v38);
    goto LABEL_35;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)v35, "legacy", (int)(uintptr_t)&v34);
  v12 = *(uint32_t *)(a2 + 112);
  if ( v12 != 0 )
  {
    v32 = (const void *)v35[0];
    v13 = *(uint32_t *)(v35[0] - 12);
    v30 = a2 + 108;
    do
    {
      while ( 1 )
      {
        v14 = v13;
        v15 = *(uint32_t *)(*(uint32_t *)(v12 + 16) - 12);
        v25 = v13;
        if ( v15 <= v13 )
          v14 = *(uint32_t *)(*(uint32_t *)(v12 + 16) - 12);
        v16 = memcmp(*(const void **)(v12 + 16), v32, v14);
        v13 = v25;
        v17 = v15 - v25;
        if ( v16 == 0 )
          v16 = v17;
        if ( v16 < 0 )
          break;
        v30 = v12;
        v12 = *(uint32_t *)(v12 + 8);
        if ( v12 == 0 )
          goto LABEL_28;
      }
      v12 = *(uint32_t *)(v12 + 12);
    }
    while ( v12 != 0 );
LABEL_28:
    if ( v28 != v30 )
    {
      v18 = v25;
      v19 = *(uint32_t *)(*(uint32_t *)(v30 + 16) - 12);
      if ( v19 <= v25 )
        v18 = *(uint32_t *)(*(uint32_t *)(v30 + 16) - 12);
      v20 = memcmp(v32, *(const void **)(v30 + 16), v18);
      if ( v20 == 0 )
        v20 = v25 - v19;
      if ( v20 >= 0 )
        goto LABEL_34;
    }
  }
  else
  {
    v30 = a2 + 108;
  }
  memset(v41, 0, 0x88u);
  v41[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v41[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  v41[5] = (uint32_t)(uintptr_t)(&dword_213B814);
  v41[7] = (uint32_t)(uintptr_t)(&dword_213B814);
  v41[12] = (uint32_t)(uintptr_t)(&dword_213B814);
  v41[17] = (uint32_t)(uintptr_t)(&dword_213B814);
  v41[19] = (uint32_t)(uintptr_t)(&dword_213B814);
  v41[20] = (uint32_t)(uintptr_t)(&dword_213B814);
  v41[24] = (uint32_t)(uintptr_t)(&v41[22]);
  v41[25] = (uint32_t)(uintptr_t)(&v41[22]);
  v41[27] = (uint32_t)(uintptr_t)(&dword_213B814);
  v41[29] = (uint32_t)(uintptr_t)(&dword_213B814);
  v41[0] = ((uint32_t)(uintptr_t)&off_20966C8);
  g4_std::string::construct_copy(&v42, v35);
  iap::BillingMethodAndroid::Construct(
    (iap::BillingMethodAndroid::Self *)v43,
    (const iap::BillingMethodAndroid::Self *)v41);
  sub_151A630(&v33, (uint32_t *)(a2 + 104), v30, (const void **)&v42);
  v30 = v33;
  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v43);
  v23 = v42 - 3;
  if ( v42 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v42 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v23);
  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v41);
LABEL_34:
  iap::BillingMethodAndroid::Construct(a1, (const iap::BillingMethodAndroid::Self *)(v30 + 20));
  v21 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v21);
  }
LABEL_35:
  iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v38);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_151CD20  (binary VA: 0x151cd20)
// Original: sub_151CD20
// ----------------------------------------------------------------------------
int sub_151CD20(int a1, glwebtools::Json::Value::Self *a2, int a3)
{
  int v3;
  int v4;
  void *v5;
  void *v6;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  int v16;
  size_t v17;
  size_t v18;
  size_t v19;
  int v20;
  int v21;
  const glwebtools::Json::Value::Self *v22;
  glwebtools::Self *v23;
  void *v24;
  const glwebtools::Json::Value::Self *v25;
  int v26;
  size_t v27;
  size_t v28;
  int v29;
  uint32_t *v30;
  uint32_t *v31;
  const glwebtools::Json::Value::Self *v32;
  int v33;
  const glwebtools::Json::Value::Self *v34;
  int v35;
  void *v36;
  volatile int32_t *v37;
  const glwebtools::Json::Value::Self *v38;
  int v39;
  int v40;
  int v41;
  typedef int _g4_t_v42;
  typedef size_t _g4_t_n;
  typedef glwebtools::Self *_g4_t_na;
  typedef glwebtools::Self *_g4_t_nb;
  typedef void *_g4_t_s2;
  typedef uint8_t *_g4_t_s2a;
  typedef glwebtools::JsonReader::Self *_g4_t_v50;
  typedef char _g4_t_v51[28];
  typedef glwebtools::JsonReader::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55[3];
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint8_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef uint8_t *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77[2];
  typedef uint8_t _g4_t_v78[8];
  typedef uint8_t _g4_t_v79[16];
  typedef uint8_t _g4_t_v80[16];
  typedef char *_g4_t_v81[11];
  typedef char *_g4_t_v82;
  typedef uint32_t *_g4_t_v83;
  typedef char _g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef char _g4_t_v86;
  typedef uint32_t *_g4_t_v87;
  typedef char _g4_t_v88;
  typedef uint32_t *_g4_t_v89;
  typedef char _g4_t_v90;
  typedef int64_t _g4_t_v91;
  typedef char _g4_t_v92;
  typedef uint32_t *_g4_t_v93;
  typedef char _g4_t_v94;
  typedef int64_t _g4_t_v95 __attribute__((aligned(1)));
  typedef char _g4_t_v96;
  typedef uint32_t *_g4_t_v97;
  typedef char _g4_t_v98;
  typedef uint32_t *_g4_t_v99;
  typedef uint32_t *_g4_t_v100;
  typedef char _g4_t_v101;
  typedef int _g4_t_v102;
  typedef uint32_t *_g4_t_v103;
  typedef int *_g4_t_v104;
  typedef int *_g4_t_v105;
  typedef int _g4_t_v106;
  typedef uint32_t *_g4_t_v107;
  typedef char _g4_t_v108;
  typedef uint32_t *_g4_t_v109;
  typedef char _g4_t_v110;
  typedef uint32_t _g4_t_v111[5];
  typedef uint32_t _g4_t_v112[37];
  typedef volatile int32_t *_g4_t_v113;
  typedef uint32_t _g4_t_v114[40];
  enum : size_t {
    _g4_s0 = 944u,
    _g4_s1 = (12u + sizeof(_g4_t_v42)) > _g4_s0 ? (12u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_n)) > _g4_s1 ? (32u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_na)) > _g4_s2 ? (32u + sizeof(_g4_t_na)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_nb)) > _g4_s3 ? (32u + sizeof(_g4_t_nb)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_s2)) > _g4_s4 ? (60u + sizeof(_g4_t_s2)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_s2a)) > _g4_s5 ? (60u + sizeof(_g4_t_s2a)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v50)) > _g4_s6 ? (76u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v51)) > _g4_s7 ? (84u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v52)) > _g4_s8 ? (112u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (130u + sizeof(_g4_t_v53)) > _g4_s9 ? (130u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (132u + sizeof(_g4_t_v54)) > _g4_s10 ? (132u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (148u + sizeof(_g4_t_v55)) > _g4_s11 ? (148u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v56)) > _g4_s12 ? (160u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (164u + sizeof(_g4_t_v57)) > _g4_s13 ? (164u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (168u + sizeof(_g4_t_v58)) > _g4_s14 ? (168u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (180u + sizeof(_g4_t_v59)) > _g4_s15 ? (180u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (184u + sizeof(_g4_t_v60)) > _g4_s16 ? (184u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (196u + sizeof(_g4_t_v61)) > _g4_s17 ? (196u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (200u + sizeof(_g4_t_v62)) > _g4_s18 ? (200u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (212u + sizeof(_g4_t_v63)) > _g4_s19 ? (212u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (216u + sizeof(_g4_t_v64)) > _g4_s20 ? (216u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (228u + sizeof(_g4_t_v65)) > _g4_s21 ? (228u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (232u + sizeof(_g4_t_v66)) > _g4_s22 ? (232u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (244u + sizeof(_g4_t_v67)) > _g4_s23 ? (244u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (248u + sizeof(_g4_t_v68)) > _g4_s24 ? (248u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (260u + sizeof(_g4_t_v69)) > _g4_s25 ? (260u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (264u + sizeof(_g4_t_v70)) > _g4_s26 ? (264u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (276u + sizeof(_g4_t_v71)) > _g4_s27 ? (276u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (280u + sizeof(_g4_t_v72)) > _g4_s28 ? (280u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (292u + sizeof(_g4_t_v73)) > _g4_s29 ? (292u + sizeof(_g4_t_v73)) : _g4_s29,
    _g4_s31 = (296u + sizeof(_g4_t_v74)) > _g4_s30 ? (296u + sizeof(_g4_t_v74)) : _g4_s30,
    _g4_s32 = (308u + sizeof(_g4_t_v75)) > _g4_s31 ? (308u + sizeof(_g4_t_v75)) : _g4_s31,
    _g4_s33 = (312u + sizeof(_g4_t_v76)) > _g4_s32 ? (312u + sizeof(_g4_t_v76)) : _g4_s32,
    _g4_s34 = (328u + sizeof(_g4_t_v77)) > _g4_s33 ? (328u + sizeof(_g4_t_v77)) : _g4_s33,
    _g4_s35 = (336u + sizeof(_g4_t_v78)) > _g4_s34 ? (336u + sizeof(_g4_t_v78)) : _g4_s34,
    _g4_s36 = (344u + sizeof(_g4_t_v79)) > _g4_s35 ? (344u + sizeof(_g4_t_v79)) : _g4_s35,
    _g4_s37 = (360u + sizeof(_g4_t_v80)) > _g4_s36 ? (360u + sizeof(_g4_t_v80)) : _g4_s36,
    _g4_s38 = (376u + sizeof(_g4_t_v81)) > _g4_s37 ? (376u + sizeof(_g4_t_v81)) : _g4_s37,
    _g4_s39 = (420u + sizeof(_g4_t_v82)) > _g4_s38 ? (420u + sizeof(_g4_t_v82)) : _g4_s38,
    _g4_s40 = (424u + sizeof(_g4_t_v83)) > _g4_s39 ? (424u + sizeof(_g4_t_v83)) : _g4_s39,
    _g4_s41 = (430u + sizeof(_g4_t_v84)) > _g4_s40 ? (430u + sizeof(_g4_t_v84)) : _g4_s40,
    _g4_s42 = (432u + sizeof(_g4_t_v85)) > _g4_s41 ? (432u + sizeof(_g4_t_v85)) : _g4_s41,
    _g4_s43 = (438u + sizeof(_g4_t_v86)) > _g4_s42 ? (438u + sizeof(_g4_t_v86)) : _g4_s42,
    _g4_s44 = (440u + sizeof(_g4_t_v87)) > _g4_s43 ? (440u + sizeof(_g4_t_v87)) : _g4_s43,
    _g4_s45 = (446u + sizeof(_g4_t_v88)) > _g4_s44 ? (446u + sizeof(_g4_t_v88)) : _g4_s44,
    _g4_s46 = (448u + sizeof(_g4_t_v89)) > _g4_s45 ? (448u + sizeof(_g4_t_v89)) : _g4_s45,
    _g4_s47 = (454u + sizeof(_g4_t_v90)) > _g4_s46 ? (454u + sizeof(_g4_t_v90)) : _g4_s46,
    _g4_s48 = (456u + sizeof(_g4_t_v91)) > _g4_s47 ? (456u + sizeof(_g4_t_v91)) : _g4_s47,
    _g4_s49 = (466u + sizeof(_g4_t_v92)) > _g4_s48 ? (466u + sizeof(_g4_t_v92)) : _g4_s48,
    _g4_s50 = (468u + sizeof(_g4_t_v93)) > _g4_s49 ? (468u + sizeof(_g4_t_v93)) : _g4_s49,
    _g4_s51 = (474u + sizeof(_g4_t_v94)) > _g4_s50 ? (474u + sizeof(_g4_t_v94)) : _g4_s50,
    _g4_s52 = (476u + sizeof(_g4_t_v95)) > _g4_s51 ? (476u + sizeof(_g4_t_v95)) : _g4_s51,
    _g4_s53 = (486u + sizeof(_g4_t_v96)) > _g4_s52 ? (486u + sizeof(_g4_t_v96)) : _g4_s52,
    _g4_s54 = (488u + sizeof(_g4_t_v97)) > _g4_s53 ? (488u + sizeof(_g4_t_v97)) : _g4_s53,
    _g4_s55 = (494u + sizeof(_g4_t_v98)) > _g4_s54 ? (494u + sizeof(_g4_t_v98)) : _g4_s54,
    _g4_s56 = (496u + sizeof(_g4_t_v99)) > _g4_s55 ? (496u + sizeof(_g4_t_v99)) : _g4_s55,
    _g4_s57 = (500u + sizeof(_g4_t_v100)) > _g4_s56 ? (500u + sizeof(_g4_t_v100)) : _g4_s56,
    _g4_s58 = (504u + sizeof(_g4_t_v101)) > _g4_s57 ? (504u + sizeof(_g4_t_v101)) : _g4_s57,
    _g4_s59 = (508u + sizeof(_g4_t_v102)) > _g4_s58 ? (508u + sizeof(_g4_t_v102)) : _g4_s58,
    _g4_s60 = (512u + sizeof(_g4_t_v103)) > _g4_s59 ? (512u + sizeof(_g4_t_v103)) : _g4_s59,
    _g4_s61 = (516u + sizeof(_g4_t_v104)) > _g4_s60 ? (516u + sizeof(_g4_t_v104)) : _g4_s60,
    _g4_s62 = (520u + sizeof(_g4_t_v105)) > _g4_s61 ? (520u + sizeof(_g4_t_v105)) : _g4_s61,
    _g4_s63 = (524u + sizeof(_g4_t_v106)) > _g4_s62 ? (524u + sizeof(_g4_t_v106)) : _g4_s62,
    _g4_s64 = (528u + sizeof(_g4_t_v107)) > _g4_s63 ? (528u + sizeof(_g4_t_v107)) : _g4_s63,
    _g4_s65 = (534u + sizeof(_g4_t_v108)) > _g4_s64 ? (534u + sizeof(_g4_t_v108)) : _g4_s64,
    _g4_s66 = (536u + sizeof(_g4_t_v109)) > _g4_s65 ? (536u + sizeof(_g4_t_v109)) : _g4_s65,
    _g4_s67 = (542u + sizeof(_g4_t_v110)) > _g4_s66 ? (542u + sizeof(_g4_t_v110)) : _g4_s66,
    _g4_s68 = (544u + sizeof(_g4_t_v111)) > _g4_s67 ? (544u + sizeof(_g4_t_v111)) : _g4_s67,
    _g4_s69 = (564u + sizeof(_g4_t_v112)) > _g4_s68 ? (564u + sizeof(_g4_t_v112)) : _g4_s68,
    _g4_s70 = (712u + sizeof(_g4_t_v113)) > _g4_s69 ? (712u + sizeof(_g4_t_v113)) : _g4_s69,
    _g4_s71 = (716u + sizeof(_g4_t_v114)) > _g4_s70 ? (716u + sizeof(_g4_t_v114)) : _g4_s70
  };
  alignas(16) uint8_t _g4_sf[_g4_s71];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 32u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 32u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 32u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 60u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 84u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 112u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 130u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 132u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 148u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 160u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 164u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 168u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 180u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 184u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 196u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 200u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 212u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 216u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 228u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 232u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 244u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 248u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 260u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 264u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 276u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 280u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 292u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 296u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 308u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 312u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 328u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 336u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 344u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 360u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 376u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 420u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 424u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 430u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 432u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 438u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 440u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 446u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 448u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 454u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 456u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 466u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 468u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 474u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 476u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 486u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 488u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 494u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 496u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 500u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 504u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 508u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 512u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 516u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 520u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 524u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 528u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 534u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 536u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 542u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 544u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 564u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 712u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 716u);

  v3 = a1 + 52;
  v114[36] = (uint32_t)(uintptr_t)(&a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&v67, "locale", (int)(uintptr_t)&v54 + 2);
  v68 = v3;
  g4_std::string::construct_copy(&v69, &v67);
  v70 = v68;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0 )
  {
    if ( (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
    {
      if ( glwebtools::Json::Value::isMember(a2, (char **)&v69) )
      {
        v34 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v69);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)&v82, v34);
        v35 = v70;
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)&v82) != 0 )
        {
          v55[0] = (int)(uintptr_t)&dword_213B814;
          v4 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)&v82, (int)(uintptr_t)v55);
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v4) )
          {
            v4 = 0;
            g4_std::string::assign_str(v35, v55);
            *(uint8_t *)(v35 + 6) = 1;
          }
          v36 = (void *)(v55[0] - 12);
          if ( (uint32_t *)(v55[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v55[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v36);
          }
        }
        else
        {
          v4 = 0;
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v82);
      }
      else
      {
        v4 = 0;
      }
    }
    else
    {
      v4 = 0;
    }
  }
  else
  {
    v4 = 0;
  }
  v5 = (void *)(v69 - 12);
  if ( (uint32_t *)(v69 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v67 - 12);
  if ( (uint32_t *)(v67 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  if ( v4 == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)&v65, "tracking_uid", (int)(uintptr_t)&v54 + 1);
    v66 = (uint8_t *)(a1 + 60);
    g4_std::string::construct_copy(&v71, &v65);
    v72 = v66;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
      && glwebtools::Json::Value::isMember(a2, (char **)&v71) )
    {
      v22 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v71);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)&v82, v22);
      s2a = v72;
      if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)&v82) != 0 )
      {
        v55[0] = (int)(uintptr_t)&dword_213B814;
        v23 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)&v82, (int)(uintptr_t)v55);
        if ( glwebtools::IsOperationSuccess(v23) )
        {
          g4_std::string::assign_str(s2a, v55);
          s2a[6] = 1;
        }
        else
        {
          v4 = (int)(uintptr_t)v23;
        }
        v24 = (void *)(v55[0] - 12);
        if ( (uint32_t *)(v55[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v55[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v24);
        }
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v82);
    }
    v8 = (void *)(v71 - 12);
    if ( (uint32_t *)(v71 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v71 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    v9 = (void *)(v65 - 12);
    if ( (uint32_t *)(v65 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    if ( v4 == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v63, "amount", (int)(uintptr_t)&v54);
      v64 = a1 + 68;
      g4_std::string::construct_copy(&v57, &v63);
      v58 = v64;
      v4 = -2147483645;
      if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
        && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
      {
        LOWORD(v4) = 2;
        if ( glwebtools::Json::Value::isMember(a2, (char **)&v57) )
        {
          v32 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v57);
          glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)&v82, v32);
          v33 = v58;
          v4 = glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)&v82, &v56);
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v4) )
          {
            v4 = 0;
            *(uint32_t *)v33 = v56;
            *(uint8_t *)(v33 + 6) = 1;
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v82);
        }
      }
      v10 = (void *)(v57 - 12);
      if ( (uint32_t *)(v57 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
      }
      v11 = (void *)(v63 - 12);
      if ( (uint32_t *)(v63 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v11);
      }
      if ( v4 == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)&v61, "base_amount", (int)(uintptr_t)&v53 + 1);
        v62 = a1 + 76;
        g4_std::string::construct_copy(&v73, &v61);
        v74 = v62;
        if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
          && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
          && glwebtools::Json::Value::isMember(a2, (char **)&v73) )
        {
          v25 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v73);
          glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)&v82, v25);
          v26 = v74;
          if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)&v82) != 0 )
          {
            na = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)&v82, &v56);
            if ( glwebtools::IsOperationSuccess(na) )
            {
              v40 = v56;
              *(uint8_t *)(v26 + 6) = 1;
              *(uint32_t *)v26 = v40;
            }
            else
            {
              v4 = (int)(uintptr_t)na;
            }
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v82);
        }
        v12 = (void *)(v73 - 12);
        if ( (uint32_t *)(v73 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v73 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
        }
        v13 = (void *)(v61 - 12);
        if ( (uint32_t *)(v61 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v13);
        }
        if ( v4 == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)&v59, "promo_amount", (int)(uintptr_t)&v53);
          v60 = a1 + 84;
          g4_std::string::construct_copy(&v75, &v59);
          v76 = v60;
          if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
            && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
            && glwebtools::Json::Value::isMember(a2, (char **)&v75) )
          {
            v38 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v75);
            glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)&v82, v38);
            v39 = v76;
            if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)&v82) != 0 )
            {
              nb = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)&v82, &v56);
              if ( glwebtools::IsOperationSuccess(nb) )
              {
                v41 = v56;
                *(uint8_t *)(v39 + 6) = 1;
                *(uint32_t *)v39 = v41;
              }
              else
              {
                v4 = (int)(uintptr_t)nb;
              }
            }
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v82);
          }
          v14 = (void *)(v75 - 12);
          if ( (uint32_t *)(v75 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v75 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v14);
          }
          v15 = (void *)(v59 - 12);
          if ( (uint32_t *)(v59 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v15);
          }
          if ( v4 == 0 )
          {
            glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v79, a2, "billing_methods");
            glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v77);
            while ( 1 )
            {
              glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v78);
              if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                                      (glwebtools::JsonReader::Iterator::Self *)v77,
                                      (const glwebtools::JsonReader::Iterator::Self *)v78) == 0 )
              {
                v4 = -2147483642;
                if ( *(uint8_t *)(a1 + 10) != 0 && *(uint32_t *)(*(uint32_t *)(a1 + 4) - 12) != 0 )
                {
                  v81[6] = "locale";
                  v81[7] = "tracking_uid";
                  v81[0] = "id";
                  v81[8] = "amount";
                  v81[1] = "virtual_cash_type";
                  v81[2] = "description";
                  v81[3] = "title";
                  v81[4] = "preview";
                  v81[5] = "type";
                  v81[9] = "base_amount";
                  v81[10] = "promo_amount";
                  v4 = glwebtools::JsonReader::exclude(
                         a2,
                         (const char **)v81,
                         (const char **)&v82,
                         (glwebtools::JSONObject::Self *)(a1 + 92));
                }
                glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v79);
                return v4;
              }
              v104 = &v102;
              v105 = &v102;
              v84 = 0;
              v86 = 0;
              v88 = 0;
              v90 = 0;
              v83 = &dword_213B814;
              v85 = &dword_213B814;
              v87 = &dword_213B814;
              v89 = &dword_213B814;
              v93 = &dword_213B814;
              v97 = &dword_213B814;
              v82 = (char *)((uint32_t)(uintptr_t)&off_20966C8);
              v99 = &dword_213B814;
              v100 = &dword_213B814;
              v107 = &dword_213B814;
              v109 = &dword_213B814;
              v92 = 0;
              v94 = 0;
              v96 = 0;
              v98 = 0;
              v102 = 0;
              v103 = nullptr;
              v106 = 0;
              v108 = 0;
              v110 = 0;
              memset(v111, 0, 12);
              iap::BillingMethodAndroid::Clear((iap::BillingMethodAndroid::Self *)&v82);
              glwebtools::JsonReader::Iterator::opMul(
                (glwebtools::JsonReader::Iterator::Self *)v80,
                (glwebtools::Json::ValueIteratorBase::Self *)v77);
              if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v80) != 0 )
                (*(void (**)(char **, uint8_t *, int))v82)(&v82, v80, v42);
              glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v80);
              v16 = *(uint32_t *)(a1 + 112);
              if ( v16 == 0 )
                break;
              s2 = v85;
              v50 = (glwebtools::JsonReader::Self *)(a1 + 108);
              v17 = *(v85 - 3);
              do
              {
                v18 = *(uint32_t *)(*(uint32_t *)(v16 + 16) - 12);
                v19 = v18;
                n = v17;
                if ( v17 <= v18 )
                  v19 = v17;
                v20 = memcmp(*(const void **)(v16 + 16), s2, v19);
                v17 = n;
                v21 = v18 - n;
                if ( v20 == 0 )
                  v20 = v21;
                if ( v20 >= 0 )
                {
                  v50 = (glwebtools::JsonReader::Self *)v16;
                  v16 = *(uint32_t *)(v16 + 8);
                }
                else
                {
                  v16 = *(uint32_t *)(v16 + 12);
                }
              }
              while ( v16 != 0 );
              if ( v50 == (glwebtools::JsonReader::Self *)(a1 + 108) )
                goto LABEL_83;
              v27 = *(uint32_t *)(*((uint32_t *)v50 + 4) - 12);
              v28 = v27;
              if ( n <= v27 )
                v28 = n;
              v29 = memcmp(s2, *((const void **)v50 + 4), v28);
              if ( v29 == 0 )
                v29 = n - v27;
              if ( v29 < 0 )
                goto LABEL_83;
LABEL_58:
              g4_std::string::assign_str((char *)v50 + 24, &v83);
              *((uint8_t *)v50 + 30) = v84;
              g4_std::string::assign_str((char *)v50 + 32, &v85);
              *((uint8_t *)v50 + 38) = v86;
              g4_std::string::assign_str((char *)v50 + 40, &v87);
              *((uint8_t *)v50 + 46) = v88;
              g4_std::string::assign_str((char *)v50 + 48, &v89);
              *((uint8_t *)v50 + 54) = v90;
              *((uint64_t *)v50 + 7) = v91;
              *((uint8_t *)v50 + 66) = v92;
              g4_std::string::assign_str((char *)v50 + 68, &v93);
              *((uint8_t *)v50 + 74) = v94;
              *(uint64_t *)((char *)v50 + 76) = v95;
              *((uint8_t *)v50 + 86) = v96;
              g4_std::string::assign_str((char *)v50 + 88, &v97);
              *((uint8_t *)v50 + 94) = v98;
              g4_std::string::assign_str((char *)v50 + 96, &v99);
              g4_std::string::assign_str((char *)v50 + 100, &v100);
              if ( (char *)v50 + 104 != &v101 )
              {
                g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_erase(
                  (int)(uintptr_t)v50 + 104,
                  *((uint32_t **)v50 + 28));
                *((uint32_t *)v50 + 29) = (uint32_t)(uintptr_t)((char *)v50 + 108);
                *((uint32_t *)v50 + 28) = 0;
                *((uint32_t *)v50 + 30) = (uint32_t)(uintptr_t)((char *)v50 + 108);
                *((uint32_t *)v50 + 31) = 0;
                if ( v103 != nullptr )
                {
                  v30 = g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                          (int)(uintptr_t)v50 + 104,
                          v103,
                          (int)(uintptr_t)v50 + 108);
                  v31 = v30;
                  *((uint32_t *)v50 + 28) = (uint32_t)(uintptr_t)(v30);
                  while ( v31[2] != 0 )
                    v31 = (uint32_t *)v31[2];
                  *((uint32_t *)v50 + 29) = (uint32_t)(uintptr_t)(v31);
                  while ( v30[3] != 0 )
                    v30 = (uint32_t *)v30[3];
                  *((uint32_t *)v50 + 30) = (uint32_t)(uintptr_t)(v30);
                  *((uint32_t *)v50 + 31) = v106;
                }
              }
              g4_std::string::assign_str((char *)v50 + 128, &v107);
              *((uint8_t *)v50 + 134) = v108;
              g4_std::string::assign_str((char *)v50 + 136, &v109);
              *((uint8_t *)v50 + 142) = v110;
              g4_std::vector_pair_string_glwebtools_J_91bc19::opAssign(
                (std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *)((char *)v50 + 144),
                (const std::vector<std::pair<std::string, glwebtools::JSONValue::Self>> *)v111);
              if ( *(uint8_t *)(a1 + 10) == 0 || *(uint32_t *)(*(uint32_t *)(a1 + 4) - 12) == 0 )
              {
                g4_std::string::assign_str(a1 + 4, &v107);
                *(uint8_t *)(a1 + 10) = v108;
              }
              iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)&v82);
              v42 = 0;
              glwebtools::JsonReader::Iterator::opInc(
                (glwebtools::JsonReader::Iterator::Self *)v51,
                (glwebtools::JsonReader::Iterator::Self *)v77);
            }
            v50 = (glwebtools::JsonReader::Self *)(a1 + 108);
LABEL_83:
            memset(v112, 0, 0x88u);
            v112[24] = (uint32_t)(uintptr_t)(&v112[22]);
            v112[25] = (uint32_t)(uintptr_t)(&v112[22]);
            v112[1] = (uint32_t)(uintptr_t)(&dword_213B814);
            v112[3] = (uint32_t)(uintptr_t)(&dword_213B814);
            v112[5] = (uint32_t)(uintptr_t)(&dword_213B814);
            v112[7] = (uint32_t)(uintptr_t)(&dword_213B814);
            v112[12] = (uint32_t)(uintptr_t)(&dword_213B814);
            v112[17] = (uint32_t)(uintptr_t)(&dword_213B814);
            v112[19] = (uint32_t)(uintptr_t)(&dword_213B814);
            v112[0] = ((uint32_t)(uintptr_t)&off_20966C8);
            v112[20] = (uint32_t)(uintptr_t)(&dword_213B814);
            v112[27] = (uint32_t)(uintptr_t)(&dword_213B814);
            v112[29] = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::construct_copy(&v113, &v85);
            iap::BillingMethodAndroid::Construct(
              (iap::BillingMethodAndroid::Self *)v114,
              (const iap::BillingMethodAndroid::Self *)v112);
            sub_151A630((int *)&v52, (uint32_t *)(a1 + 104), (int)(uintptr_t)v50, (const void **)&v113);
            v50 = v52;
            iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v114);
            v37 = v113 - 3;
            if ( v113 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v113 - 1, 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy((void *)v37);
            iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v112);
            goto LABEL_58;
          }
        }
      }
    }
  }
  return v4;
}


