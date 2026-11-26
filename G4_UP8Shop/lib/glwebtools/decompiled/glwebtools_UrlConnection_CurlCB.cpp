#include "Core/Utils/DecompTypes.h"
#include "glwebtools_UrlConnection_CurlCB.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection_CurlCB::HeaderWriteCB  (binary VA: 0x13ef5e0)
// Original: glwebtools::UrlConnection_CurlCB::HeaderWriteCB
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection_CurlCB::HeaderWriteCB(glwebtools::UrlConnection_CurlCB::Self *self, void *a2, unsigned int a3, unsigned int a4)
{
  int result;

  result = 0;
  if ( a4 != 0 )
    return G4_VCALL<int>(a4, 8, self, a3 * (uint32_t)(uintptr_t)(a2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection_CurlCB::DataWriteCB  (binary VA: 0x13ef610)
// Original: glwebtools::UrlConnection_CurlCB::DataWriteCB
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection_CurlCB::DataWriteCB(glwebtools::UrlConnection_CurlCB::Self *self, char *a2, unsigned int a3, unsigned int a4)
{
  int result;

  result = 0;
  if ( a4 != 0 )
    return G4_VCALL<int>(a4, 12, self, a3 * (uint32_t)(uintptr_t)(a2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection_CurlCB::ProgressCB  (binary VA: 0x13ef6e0)
// Original: glwebtools::UrlConnection_CurlCB::ProgressCB
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection_CurlCB::ProgressCB(glwebtools::UrlConnection_CurlCB::Self *self)
{
  int result;

  result = 0;
  if ( self != nullptr )
  {
    result = -1;
    if ( *((uint8_t *)self + 4) == 0 )
    {
      result = 0;
      if ( *((uint32_t *)self + 8) != 0 )
      {
        if ( glwebtools::SystemClock::GetMilliseconds() - *(uint64_t *)((char *)self + 36) <= *((unsigned int *)self + 8) )
          return 0;
        else
          return -1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection_CurlCB::DataWrite  (binary VA: 0x13ef8d0)
// Original: glwebtools::UrlConnection_CurlCB::DataWrite
// ----------------------------------------------------------------------------
size_t glwebtools::UrlConnection_CurlCB::DataWrite(glwebtools::UrlConnection_CurlCB::Self *self, void *a2, size_t a3)
{
  size_t v3;
  uint64_t Milliseconds; // rax
  bool v5;
  int v6;
  int v7;
  glwebtools::MutableData::Self *v9;
  int v10;
  size_t v11;
  glwebtools::MutableData::Self *v12;

  v3 = 0;
  Milliseconds = glwebtools::SystemClock::GetMilliseconds();
  v5 = *((uint8_t *)self + 4) == 0;
  *(uint64_t *)((char *)self + 36) = Milliseconds;
  if ( v5 )
  {
    v6 = *((uint32_t *)self + 6);
    if ( v6 != 0 )
    {
      v7 = G4_VCALL<int>(v6, 24, a2, a3);
      *((uint32_t *)self + 5) += v7;
      if ( v7 == a3 )
        return v7;
    }
    else if ( *((uint8_t *)self + 16) != 0 )
    {
      v11 = *((uint32_t *)self + 6);
      v12 = (glwebtools::MutableData::Self *)sub_4EBE70(0x14u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      glwebtools::MutableData::MutableData(v12, (glwebtools::Self *)&word_10);
      v3 = v11;
      if ( v12 != nullptr )
      {
        v3 = v11;
        if ( (uint8_t)glwebtools::MutableData::AppendData(v12, a2, a3) != 0 )
        {
          *((uint32_t *)self + 5) += a3;
          glwebtools::Mutex::Lock((glwebtools::UrlConnection_CurlCB::Self *)((char *)self + 44));
          v10 = sub_4EBE70(0xCu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
          if ( v10 != -8 )
            *(uint32_t *)(v10 + 8) = (uint32_t)(uintptr_t)(v12);
          sub_1901920(v10, (char *)self + 52);
          v3 = a3;
          glwebtools::Mutex::Unlock((glwebtools::UrlConnection_CurlCB::Self *)((char *)self + 44));
        }
      }
    }
    else
    {
      v9 = *((glwebtools::MutableData::Self **)self + 7);
      if ( v9 != nullptr && (uint8_t)glwebtools::MutableData::AppendData(v9, a2, a3) != 0 )
      {
        *((uint32_t *)self + 5) += a3;
        return a3;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection_CurlCB::Reset  (binary VA: 0x13efbd0)
// Original: glwebtools::UrlConnection_CurlCB::Reset
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection_CurlCB::Reset(glwebtools::UrlConnection_CurlCB::Self *self)
{
  glwebtools::UrlConnection_CurlCB::Self *v1;
  int v2;
  void (***v3)(uint32_t);
  glwebtools::UrlConnection_CurlCB::Self **v4;
  glwebtools::UrlConnection_CurlCB::Self *v5;
  glwebtools::UrlConnection_CurlCB::Self *v6;
  uint32_t *i;
  void (***v8)(uint32_t, char *);
  int v9;
  typedef char *_g4_t_v11;
  typedef glwebtools::Mutex::Self *_g4_t_v12;
  typedef char _g4_t_v13;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v12)) > _g4_s1 ? (24u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (47u + sizeof(_g4_t_v13)) > _g4_s2 ? (47u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 47u);

  v1 = self;
  v2 = *((uint32_t *)self + 6);
  if ( v2 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v2 + 12))(*((uint32_t *)self + 6));
    v3 = *((void (****)(uint32_t))self + 6);
    if ( v3 != nullptr )
    {
      (**v3)(*((uint32_t *)self + 6));
      sub_4EBEE0(*((uint32_t *)self + 6));
    }
    *((uint32_t *)self + 6) = 0;
  }
  v4 = *((glwebtools::UrlConnection_CurlCB::Self ***)self + 2);
  v12 = (glwebtools::Mutex::Self *)((glwebtools::UrlConnection_CurlCB::Self *)((char *)self + 8));
  if ( v4 != (glwebtools::UrlConnection_CurlCB::Self **)((char *)self + 8) )
  {
    while ( 1 )
    {
      v5 = v4[2];
      v6 = *v4;
      if ( (uint32_t *)((char *)v5 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v5 - 1, 0xFFFFFFFF) <= 0 )
      {
        v11 = &v13;
        g4_std::string::Rep::M_destroy((char *)v5 - 12);
      }
      sub_4EBEE0((int)(uintptr_t)(v4));
      if ( v6 == (glwebtools::UrlConnection_CurlCB::Self *)((char *)self + 8) )
        break;
      v4 = (glwebtools::UrlConnection_CurlCB::Self **)v6;
    }
    v1 = self;
  }
  *((uint8_t *)v1 + 4) = 0;
  *((uint32_t *)v1 + 2) = (uint32_t)(uintptr_t)(v12);
  *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v12);
  *((uint32_t *)v1 + 7) = 0;
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 8) = 600000;
  *(uint64_t *)((char *)v1 + 36) = glwebtools::SystemClock::GetMilliseconds();
  glwebtools::Mutex::Lock((glwebtools::UrlConnection_CurlCB::Self *)((char *)v1 + 44));
  for ( i = *((uint32_t **)v1 + 13); i != (uint32_t *)((char *)v1 + 52); i = *((uint32_t **)v1 + 13) )
  {
    v8 = (void (***)(uint32_t, char *))i[2];
    if ( v8 != nullptr )
    {
      (**v8)((uint32_t)(uintptr_t)(v8), v11);
      sub_4EBEE0((int)(uintptr_t)(v8));
    }
    v9 = *((uint32_t *)v1 + 13);
    sub_1901940(v9);
    sub_4EBEE0(v9);
  }
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((glwebtools::UrlConnection_CurlCB::Self *)((char *)v1 + 44)));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection_CurlCB::HeaderWrite  (binary VA: 0x13efd10)
// Original: glwebtools::UrlConnection_CurlCB::HeaderWrite
// ----------------------------------------------------------------------------
unsigned int glwebtools::UrlConnection_CurlCB::HeaderWrite(glwebtools::UrlConnection_CurlCB::Self *self, uint8_t *a2, unsigned int a3)
{
  uint8_t *v3;
  unsigned int result;
  int v5;
  char v6;
  char *v7;
  int v8;
  char *v9;
  char **v10;
  char *v11;
  char *v12;
  typedef int _g4_t_v13;
  typedef const void *_g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (9u + sizeof(_g4_t_v13)) > _g4_s0 ? (9u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 9u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);

  v3 = a2;
  *(uint64_t *)((char *)self + 36) = glwebtools::SystemClock::GetMilliseconds();
  result = 0;
  if ( a3 != 0 && a2 != nullptr && *((uint8_t *)self + 4) == 0 )
  {
    v5 = a3;
    while ( (uint8_t)(*v3 - 32) > 0x5Eu || *v3 == 32 )
    {
      ++v3;
      if ( --v5 == 0 )
        goto LABEL_9;
    }
    do
    {
      v6 = v3[v5 - 1];
      if ( (uint8_t)(v6 - 32) <= 0x5Eu && v6 != 32 )
        break;
      --v5;
    }
    while ( v5 != 0 );
LABEL_9:
    sub_193A970((int)(uintptr_t)(v14), v3, v5, (int)(uintptr_t)(&v13));
    if ( memcmp(v14[0], "HTTP", 4u) == 0 )
    {
      v7 = (char *)self + 8;
      v10 = *((char ***)self + 2);
      if ( (char **)((char *)self + 8) != v10 )
      {
        while ( 1 )
        {
          v11 = v10[2];
          v12 = *v10;
          if ( v11 - 12 != (char *)dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)v11 - 1, 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11 - 12);
          }
          sub_4EBEE0((int)(uintptr_t)(v10));
          if ( v7 == v12 )
            break;
          v10 = (char **)v12;
        }
      }
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v7);
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v7);
    }
    else
    {
      v7 = (char *)self + 8;
    }
    v8 = sub_4EBE70(0xCu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    if ( v8 != -8 )
      g4_std::string::construct_copy(v8 + 8, v14);
    sub_1901920(v8, v7);
    result = a3;
    v9 = (char *)v14[0] - 12;
    if ( (char *)v14[0] - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v14[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
      return a3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection_CurlCB::Destroy  (binary VA: 0x13f0240)
// Original: glwebtools::UrlConnection_CurlCB::~UrlConnection_CurlCB
// ----------------------------------------------------------------------------
void glwebtools::UrlConnection_CurlCB::Destroy(glwebtools::UrlConnection_CurlCB::Self *self)
{
  glwebtools::UrlConnection_CurlCB::Self *v1;
  int v2;
  void (***v3)(uint32_t);
  char **v4;
  char *v5;
  char *v6;
  uint32_t *v7;
  uint32_t *v8;
  void (***v9)(uint32_t, char *);
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  char **v13;
  char *v14;
  char *v15;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef glwebtools::Mutex::Self *_g4_t_v18;
  typedef glwebtools::Mutex::Self *_g4_t_v19;
  typedef char _g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v17)) > _g4_s1 ? (24u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v19)) > _g4_s3 ? (28u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (46u + sizeof(_g4_t_v20)) > _g4_s4 ? (46u + sizeof(_g4_t_v20)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 46u);

  v1 = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094D40);
  v2 = *((uint32_t *)self + 6);
  if ( v2 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v2 + 12))(*((uint32_t *)self + 6));
    v3 = *((void (****)(uint32_t))self + 6);
    if ( v3 != nullptr )
    {
      (**v3)(*((uint32_t *)self + 6));
      sub_4EBEE0(*((uint32_t *)self + 6));
    }
    *((uint32_t *)self + 6) = 0;
  }
  v4 = *((char ***)self + 2);
  v17 = (char *)self + 8;
  if ( v4 != (char **)((char *)self + 8) )
  {
    while ( 1 )
    {
      v5 = v4[2];
      v6 = *v4;
      if ( v5 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v5 - 1, 0xFFFFFFFF) <= 0 )
      {
        v16 = &v20;
        g4_std::string::Rep::M_destroy(v5 - 12);
      }
      sub_4EBEE0((int)(uintptr_t)(v4));
      if ( v6 == v17 )
        break;
      v4 = (char **)v6;
    }
    v1 = self;
  }
  *((uint8_t *)v1 + 4) = 0;
  *((uint32_t *)v1 + 2) = (uint32_t)(uintptr_t)(v17);
  *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v17);
  *((uint32_t *)v1 + 7) = 0;
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 8) = 600000;
  v7 = (uint32_t *)((char *)v1 + 52);
  *(uint64_t *)((char *)v1 + 36) = glwebtools::SystemClock::GetMilliseconds();
  v18 = (glwebtools::Mutex::Self *)((glwebtools::UrlConnection_CurlCB::Self *)((char *)v1 + 44));
  glwebtools::Mutex::Lock((glwebtools::UrlConnection_CurlCB::Self *)((char *)v1 + 44));
  v8 = *((uint32_t **)v1 + 13);
  if ( v8 != (uint32_t *)((char *)v1 + 52) )
  {
    do
    {
      v9 = (void (***)(uint32_t, char *))v8[2];
      if ( v9 != nullptr )
      {
        (**v9)((uint32_t)(uintptr_t)(v9), v16);
        sub_4EBEE0((int)(uintptr_t)(v9));
      }
      v10 = *((uint32_t *)v1 + 13);
      sub_1901940(v10);
      sub_4EBEE0(v10);
      v8 = *((uint32_t **)v1 + 13);
    }
    while ( v8 != v7 );
  }
  glwebtools::Mutex::Unlock(v18);
  v11 = *((uint32_t **)v1 + 13);
  if ( v11 != v7 )
  {
    while ( 1 )
    {
      v12 = (uint32_t *)*v11;
      sub_4EBEE0((int)(uintptr_t)(v11));
      if ( v12 == v7 )
        break;
      v11 = v12;
    }
  }
  glwebtools::Mutex::Destroy(v18);
  v13 = *((char ***)v1 + 2);
  if ( v13 != (char **)v17 )
  {
    v19 = (glwebtools::Mutex::Self *)(v1);
    while ( 1 )
    {
      v14 = v13[2];
      v15 = *v13;
      if ( v14 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v14 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14 - 12);
      }
      sub_4EBEE0((int)(uintptr_t)(v13));
      if ( v15 == v17 )
        break;
      v13 = (char **)v15;
    }
    v1 = (glwebtools::UrlConnection_CurlCB::Self *)(v19);
  }
  opDelete(v1);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection_CurlCB::Destroy_ea13f0420  (binary VA: 0x13f0420)
// Original: glwebtools::UrlConnection_CurlCB::~UrlConnection_CurlCB
// ----------------------------------------------------------------------------
void glwebtools::UrlConnection_CurlCB::Destroy_ea13f0420(glwebtools::UrlConnection_CurlCB::Self *self)
{
  glwebtools::UrlConnection_CurlCB::Self *v1;
  int v2;
  void (***v3)(uint32_t);
  char **v4;
  char *v5;
  char *v6;
  uint32_t *v7;
  uint32_t *v8;
  void (***v9)(uint32_t, char *);
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  char **v13;
  char *v14;
  char *v15;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef glwebtools::Mutex::Self *_g4_t_v18;
  typedef char _g4_t_v19;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v17)) > _g4_s1 ? (24u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (46u + sizeof(_g4_t_v19)) > _g4_s3 ? (46u + sizeof(_g4_t_v19)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 46u);

  v1 = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094D40);
  v2 = *((uint32_t *)self + 6);
  if ( v2 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v2 + 12))(*((uint32_t *)self + 6));
    v3 = *((void (****)(uint32_t))self + 6);
    if ( v3 != nullptr )
    {
      (**v3)(*((uint32_t *)self + 6));
      sub_4EBEE0(*((uint32_t *)self + 6));
    }
    *((uint32_t *)self + 6) = 0;
  }
  v4 = *((char ***)self + 2);
  v17 = (char *)self + 8;
  if ( v4 != (char **)((char *)self + 8) )
  {
    while ( 1 )
    {
      v5 = v4[2];
      v6 = *v4;
      if ( v5 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v5 - 1, 0xFFFFFFFF) <= 0 )
      {
        v16 = &v19;
        g4_std::string::Rep::M_destroy(v5 - 12);
      }
      sub_4EBEE0((int)(uintptr_t)(v4));
      if ( v6 == v17 )
        break;
      v4 = (char **)v6;
    }
    v1 = self;
  }
  *((uint8_t *)v1 + 4) = 0;
  *((uint32_t *)v1 + 2) = (uint32_t)(uintptr_t)(v17);
  *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v17);
  *((uint32_t *)v1 + 7) = 0;
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 8) = 600000;
  v7 = (uint32_t *)((char *)v1 + 52);
  *(uint64_t *)((char *)v1 + 36) = glwebtools::SystemClock::GetMilliseconds();
  v18 = (glwebtools::Mutex::Self *)((glwebtools::UrlConnection_CurlCB::Self *)((char *)v1 + 44));
  glwebtools::Mutex::Lock((glwebtools::UrlConnection_CurlCB::Self *)((char *)v1 + 44));
  v8 = *((uint32_t **)v1 + 13);
  if ( v8 != (uint32_t *)((char *)v1 + 52) )
  {
    do
    {
      v9 = (void (***)(uint32_t, char *))v8[2];
      if ( v9 != nullptr )
      {
        (**v9)((uint32_t)(uintptr_t)(v9), v16);
        sub_4EBEE0((int)(uintptr_t)(v9));
      }
      v10 = *((uint32_t *)v1 + 13);
      sub_1901940(v10);
      sub_4EBEE0(v10);
      v8 = *((uint32_t **)v1 + 13);
    }
    while ( v8 != v7 );
  }
  glwebtools::Mutex::Unlock(v18);
  v11 = *((uint32_t **)v1 + 13);
  if ( v11 != v7 )
  {
    while ( 1 )
    {
      v12 = (uint32_t *)*v11;
      sub_4EBEE0((int)(uintptr_t)(v11));
      if ( v12 == v7 )
        break;
      v11 = v12;
    }
  }
  glwebtools::Mutex::Destroy(v18);
  v13 = *((char ***)v1 + 2);
  if ( v13 != (char **)v17 )
  {
    while ( 1 )
    {
      v14 = v13[2];
      v15 = *v13;
      if ( v14 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v14 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14 - 12);
      }
      sub_4EBEE0((int)(uintptr_t)(v13));
      if ( v15 == v17 )
        break;
      v13 = (char **)v15;
    }
  }
}


