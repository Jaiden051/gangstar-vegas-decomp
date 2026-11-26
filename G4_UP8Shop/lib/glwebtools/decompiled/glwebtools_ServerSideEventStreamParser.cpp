#include "Core/Utils/DecompTypes.h"
#include "glwebtools_ServerSideEventStreamParser.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventStreamParser::ClearBuffer  (binary VA: 0x1406020)
// Original: glwebtools::ServerSideEventStreamParser::ClearBuffer
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEventStreamParser::ClearBuffer(glwebtools::ServerSideEventStreamParser::Self *self)
{
  int result;

  result = (int)(uintptr_t)(g4_std::string::clear((char *)self + 12, 0, *(uint32_t *)(*((uint32_t *)self + 3) - 12), 0));
  *((uint8_t *)self + 56) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventStreamParser::PushField  (binary VA: 0x1406080)
// Original: glwebtools::ServerSideEventStreamParser::PushField
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::ServerSideEventStreamParser::PushField(glwebtools::ServerSideEventStreamParser::Self *self)
{
  glwebtools::Self *v1;

  if ( *(uint32_t *)(*((uint32_t *)self + 3) - 12) == 0
    || (v1 = (glwebtools::Self *)glwebtools::ServerSideEventParser::PushField(self, (char *)self + 12),
        glwebtools::IsOperationSuccess(v1)) )
  {
    v1 = nullptr;
    glwebtools::ServerSideEventStreamParser::ClearBuffer(self);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventStreamParser::HasEvent  (binary VA: 0x14060f0)
// Original: glwebtools::ServerSideEventStreamParser::HasEvent
// ----------------------------------------------------------------------------
bool glwebtools::ServerSideEventStreamParser::HasEvent(glwebtools::ServerSideEventStreamParser::Self *self)
{
  return *((uint32_t *)self + 10) != *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventStreamParser::PopEvent  (binary VA: 0x1406100)
// Original: glwebtools::ServerSideEventStreamParser::PopEvent
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEventStreamParser::PopEvent(void **self, glwebtools::ServerSideEvent::Self *a2)
{
  bool HasEvent;
  int v3;
  int v4;
  char v5;
  char v6;
  char v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v15;
  uint32_t *v16;
  void **v17;
  char *v18;

  HasEvent = glwebtools::ServerSideEventStreamParser::HasEvent((glwebtools::ServerSideEventStreamParser::Self *)self);
  v3 = -2147483645;
  if ( !HasEvent )
    return v3;
  v4 = (int)(uintptr_t)(*(self + 6));
  sub_1937C90(v4, a2);
  v5 = *(uint8_t *)(v4 + 6);
  *(uint8_t *)(v4 + 6) = *((uint8_t *)a2 + 6);
  *((uint8_t *)a2 + 6) = v5;
  sub_1937C90(v4 + 8, (char *)a2 + 8);
  v6 = *(uint8_t *)(v4 + 14);
  *(uint8_t *)(v4 + 14) = *((uint8_t *)a2 + 14);
  *((uint8_t *)a2 + 14) = v6;
  sub_1937C90(v4 + 16, (char *)a2 + 16);
  v7 = *(uint8_t *)(v4 + 22);
  *(uint8_t *)(v4 + 22) = *((uint8_t *)a2 + 22);
  *((uint8_t *)a2 + 22) = v7;
  v8 = *(uint32_t *)(v4 + 24);
  *(uint32_t *)(v4 + 24) = *((uint32_t *)a2 + 6);
  *((uint32_t *)a2 + 6) = v8;
  LOBYTE(v8) = *(uint8_t *)(v4 + 30);
  *(uint8_t *)(v4 + 30) = *((uint8_t *)a2 + 30);
  *((uint8_t *)a2 + 30) = v8;
  v9 = (uint32_t *)(*(self + 6));
  v10 = v9[4];
  v11 = (uint32_t *)(v10 - 12);
  if ( v9 != (uint32_t *)((char *)*(self + 8) - 32) )
  {
    if ( v11 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v11);
    v12 = v9[2];
    if ( (uint32_t *)(v12 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v12 - 12));
    }
    v13 = (uint32_t *)(*v9 - 12);
    if ( v13 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v9 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v13);
    *(self + 6) = (char *)*(self + 6) + 32;
    return 0;
  }
  if ( v11 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v11);
  v15 = v9[2];
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v15 - 12));
  }
  v16 = (uint32_t *)(*v9 - 12);
  if ( v16 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v9 - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v16);
  opDelete(*(self + 7));
  v17 = (void **)((char *)*(self + 9) + 4);
  *(self + 9) = v17;
  v18 = (char *)*v17;
  *(self + 7) = *v17;
  *(self + 6) = v18;
  *(self + 8) = v18 + 512;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventStreamParser::IsFeeding  (binary VA: 0x1406330)
// Original: glwebtools::ServerSideEventStreamParser::IsFeeding
// ----------------------------------------------------------------------------
bool glwebtools::ServerSideEventStreamParser::IsFeeding(glwebtools::ServerSideEventStreamParser::Self *self)
{
  return *((uint8_t *)self + 56) != 13 && *((uint8_t *)self + 56) != 10;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventStreamParser::Clear  (binary VA: 0x1406350)
// Original: glwebtools::ServerSideEventStreamParser::Clear
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEventStreamParser::Clear(glwebtools::ServerSideEventStreamParser::Self *self)
{
  char *v1;
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  unsigned int v13;
  void **v14;
  void *v15;
  uint32_t *v17;
  int v18;
  int v19;
  uint32_t *v20;
  char *v21;
  int v22;
  int v23;
  int v24;
  char **v25;
  uint32_t *v26;
  unsigned int v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  int v31;
  int v32;

  glwebtools::ServerSideEventParser::Clear(self);
  v26 = *((uint32_t **)self + 6);
  v32 = *((uint32_t *)self + 7);
  v30 = *((uint32_t **)self + 8);
  v31 = *((uint32_t *)self + 9);
  v29 = *((uint32_t **)self + 10);
  v28 = *((uint32_t **)self + 11);
  v27 = *((uint32_t *)self + 13);
  if ( v27 > v31 + 4 )
  {
    v25 = (char **)(v31 + 4);
    do
    {
      v21 = *v25;
      v1 = *v25;
      v22 = (int)(uintptr_t)(*v25 + 512);
      v24 = (int)(uintptr_t)(*v25 + 16);
      v23 = (int)(uintptr_t)(*v25 + 8);
      do
      {
        v2 = *(uint32_t *)(v1 - v21 + v24);
        if ( (uint32_t *)(v2 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v2 - 12));
        }
        v3 = *(uint32_t *)(v1 - v21 + v23);
        if ( (uint32_t *)(v3 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v3 - 12));
        }
        v4 = (uint32_t *)(*(uint32_t *)v1 - 12);
        if ( v4 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v1 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v4);
        }
        v1 += 32;
      }
      while ( v1 != (char *)v22 );
      ++v25;
    }
    while ( v27 > (unsigned int)(uintptr_t)(v25) );
  }
  if ( v31 == v27 )
  {
    if ( v26 != v29 )
    {
      v17 = v26;
      do
      {
        v18 = v17[4];
        if ( (uint32_t *)(v18 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v18 - 12));
        }
        v19 = v17[2];
        if ( (uint32_t *)(v19 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v19 - 12));
        }
        v20 = (uint32_t *)(*v17 - 12);
        if ( v20 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v17 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v20);
        v17 += 8;
      }
      while ( v29 != v17 );
    }
  }
  else
  {
    if ( v26 != v30 )
    {
      v5 = v26;
      do
      {
        v6 = v5[4];
        if ( (uint32_t *)(v6 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v6 - 12));
        }
        v7 = v5[2];
        if ( (uint32_t *)(v7 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v7 - 12));
        }
        v8 = (uint32_t *)(*v5 - 12);
        if ( v8 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v5 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v8);
        v5 += 8;
      }
      while ( v30 != v5 );
    }
    if ( v29 != v28 )
    {
      v9 = v28;
      do
      {
        v10 = v9[4];
        if ( (uint32_t *)(v10 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v10 - 12));
        }
        v11 = v9[2];
        if ( (uint32_t *)(v11 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v11 - 12));
        }
        v12 = (uint32_t *)(*v9 - 12);
        if ( v12 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v9 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v12);
        v9 += 8;
      }
      while ( v29 != v9 );
    }
  }
  v13 = *((uint32_t *)self + 13) + 4;
  if ( v31 + 4 < v13 )
  {
    v14 = (void **)(v31 + 4);
    do
    {
      v15 = *v14++;
      opDelete(v15);
    }
    while ( v13 > (unsigned int)(uintptr_t)(v14) );
  }
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(v26);
  *((uint32_t *)self + 11) = v32;
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v30);
  *((uint32_t *)self + 13) = v31;
  return glwebtools::ServerSideEventStreamParser::ClearBuffer(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventStreamParser::Construct  (binary VA: 0x1406800)
// Original: glwebtools::ServerSideEventStreamParser::ServerSideEventStreamParser
// ----------------------------------------------------------------------------
glwebtools::ServerSideEventStreamParser::Self * glwebtools::ServerSideEventStreamParser::Construct(glwebtools::ServerSideEventStreamParser::Self *self)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 5) = 8;
  v1 = opNew(0x20u);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = v1;
  v3 = (int *)(v1 + ((2 * v2 - 2) & 0xFFFFFFFC));
  *v3 = opNew(0x200u);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v3);
  v4 = *v3;
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)self + 7) = v4;
  *((uint32_t *)self + 8) = v4 + 512;
  v5 = *v3;
  *((uint32_t *)self + 6) = v4;
  *((uint32_t *)self + 11) = v5;
  *((uint32_t *)self + 10) = v5;
  *((uint32_t *)self + 12) = v5 + 512;
  return (glwebtools::ServerSideEventStreamParser::Self *)glwebtools::ServerSideEventStreamParser::Clear(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventStreamParser::PushEvent  (binary VA: 0x14068e0)
// Original: glwebtools::ServerSideEventStreamParser::PushEvent
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::ServerSideEventStreamParser::PushEvent(glwebtools::ServerSideEventStreamParser::Self *self)
{
  glwebtools::Self *v1;
  glwebtools::Self *v2;
  int v3;
  int v4;
  char v5;
  char v6;
  uint32_t *v7;
  uint32_t *v8;
  void *v9;
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef char _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef char _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char _g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (6u + sizeof(_g4_t_v12)) > _g4_s1 ? (6u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (14u + sizeof(_g4_t_v14)) > _g4_s3 ? (14u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v15)) > _g4_s4 ? (16u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (22u + sizeof(_g4_t_v16)) > _g4_s5 ? (22u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v17)) > _g4_s6 ? (24u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (30u + sizeof(_g4_t_v18)) > _g4_s7 ? (30u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 6u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 14u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 22u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 30u);

  if ( *(uint32_t *)(*((uint32_t *)self + 3) - 12) == 0
    || (v1 = glwebtools::ServerSideEventStreamParser::PushField(self), glwebtools::IsOperationSuccess(v1)) )
  {
    if ( (uint8_t)glwebtools::ServerSideEventParser::HasEvent(self) != 0 )
    {
      v12 = 0;
      v14 = 0;
      v16 = 0;
      v18 = 0;
      v11 = (int)(uintptr_t)(&dword_213B814);
      v13 = &dword_213B814;
      v15 = &dword_213B814;
      v2 = (glwebtools::Self *)glwebtools::ServerSideEventParser::PopEvent(self, (glwebtools::ServerSideEvent::Self *)&v11);
      if ( glwebtools::IsOperationSuccess(v2) )
      {
        v3 = *((uint32_t *)self + 10);
        if ( v3 == *((uint32_t *)self + 12) - 32 )
        {
          g4_std::deque_glwebtools_ServerSideEve_87f268::M_push_back_aux(
            (glwebtools::ServerSideEventStreamParser::Self *)((char *)self + 16),
            (const glwebtools::ServerSideEvent::Self *)&v11);
        }
        else
        {
          v4 = 0;
          if ( v3 != 0 )
          {
            *(uint32_t *)v3 = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v3, &v11);
            v5 = v12;
            *(uint32_t *)(v3 + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
            *(uint8_t *)(v3 + 6) = v5;
            g4_std::string::assign_str(v3 + 8, &v13);
            v6 = v14;
            *(uint32_t *)(v3 + 16) = (uint32_t)(uintptr_t)(&dword_213B814);
            *(uint8_t *)(v3 + 14) = v6;
            g4_std::string::assign_str(v3 + 16, &v15);
            *(uint8_t *)(v3 + 22) = v16;
            *(uint32_t *)(v3 + 24) = v17;
            *(uint8_t *)(v3 + 30) = v18;
            v4 = *((uint32_t *)self + 10);
          }
          *((uint32_t *)self + 10) = v4 + 32;
        }
      }
      glwebtools::ServerSideEventStreamParser::ClearBuffer(self);
      v7 = v15 - 3;
      if ( v15 - 3 != dword_213B808 && __sync_fetch_and_add(v15 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v7);
      v8 = v13 - 3;
      if ( v13 - 3 != dword_213B808 && __sync_fetch_and_add(v13 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v8);
      v9 = (void *)(v11 - 12);
      if ( (uint32_t *)(v11 - 12) == dword_213B808 )
      {
        return nullptr;
      }
      else
      {
        v1 = nullptr;
        if ( __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v9);
      }
    }
    else
    {
      v1 = nullptr;
      glwebtools::ServerSideEventStreamParser::ClearBuffer(self);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventStreamParser::Push  (binary VA: 0x1406af0)
// Original: glwebtools::ServerSideEventStreamParser::Push
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::ServerSideEventStreamParser::Push(glwebtools::ServerSideEventStreamParser::Self *self, char a2)
{
  glwebtools::Self *v2;
  int v4;
  int v5;
  int v6;
  int v7;
  glwebtools::Self *v8;

  if ( glwebtools::ServerSideEventStreamParser::IsFeeding(self) )
  {
    if ( a2 == 10 || a2 == 13 )
    {
      v2 = nullptr;
      *((uint8_t *)self + 56) = a2;
      return v2;
    }
    goto LABEL_9;
  }
  if ( *((uint8_t *)self + 56) != 13 )
  {
    v8 = (glwebtools::Self *)(self);
    if ( a2 != 10 && a2 != 13 )
    {
LABEL_8:
      v2 = glwebtools::ServerSideEventStreamParser::PushField((glwebtools::ServerSideEventStreamParser::Self *)(v8));
      if ( !glwebtools::IsOperationSuccess(v2) )
        return v2;
LABEL_9:
      v4 = *((uint32_t *)self + 3);
      v5 = *(uint32_t *)(v4 - 12);
      v6 = v5 + 1;
      if ( (unsigned int)(v5 + 1) > *(uint32_t *)(v4 - 8) || *(int *)(v4 - 4) > 0 )
      {
        sub_1939B80((char *)self + 12, v5 + 1);
        v4 = *((uint32_t *)self + 3);
        v5 = *(uint32_t *)(v4 - 12);
      }
      *(uint8_t *)(v4 + v5) = a2;
      v7 = *((uint32_t *)self + 3);
      if ( (uint32_t *)(v7 - 12) != dword_213B808 )
      {
        *(uint32_t *)(v7 - 12) = v6;
        *(uint32_t *)(v7 - 4) = 0;
        *(uint8_t *)(v7 + v6) = 0;
      }
      return nullptr;
    }
    return glwebtools::ServerSideEventStreamParser::PushEvent((glwebtools::ServerSideEventStreamParser::Self *)(v8));
  }
  if ( a2 != 10 )
  {
    v8 = (glwebtools::Self *)(self);
    if ( a2 != 13 )
      goto LABEL_8;
    return glwebtools::ServerSideEventStreamParser::PushEvent((glwebtools::ServerSideEventStreamParser::Self *)(v8));
  }
  v2 = glwebtools::ServerSideEventStreamParser::PushField(self);
  if ( glwebtools::IsOperationSuccess(v2) )
  {
    *((uint8_t *)self + 56) = 10;
    return nullptr;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventStreamParser::PushStream  (binary VA: 0x1406c30)
// Original: glwebtools::ServerSideEventStreamParser::PushStream
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::ServerSideEventStreamParser::PushStream(glwebtools::ServerSideEventStreamParser::Self *a1, char **a2)
{
  glwebtools::Self *v2;
  char *v3;

  v2 = nullptr;
  v3 = *a2;
  if ( *((uint32_t *)*a2 - 3) != 0 )
  {
    while ( 1 )
    {
      v2 = glwebtools::ServerSideEventStreamParser::Push(a1, *v3);
      if ( !glwebtools::IsOperationSuccess(v2) )
        break;
      if ( ++v3 == &(*a2)[*((uint32_t *)*a2 - 3)] )
        return nullptr;
    }
  }
  return v2;
}


