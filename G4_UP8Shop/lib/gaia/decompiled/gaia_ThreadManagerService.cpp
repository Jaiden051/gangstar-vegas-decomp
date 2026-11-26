#include "Core/Utils/DecompTypes.h"
#include "gaia_ThreadManagerService.h"

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::AddRequest  (binary VA: 0x14d3b70)
// Original: gaia::ThreadManagerService::AddRequest
// ----------------------------------------------------------------------------
int gaia::ThreadManagerService::AddRequest(gaia::ThreadManagerService::Self *self, gaia::ThreadManagerRequest::Self *a2)
{
  uint32_t *src;
  int v3;
  unsigned int v5;
  size_t v6;
  size_t v7;
  char *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  void *v13;
  char *v14;
  size_t v15;
  size_t v16;
  size_t v17;
  int v18;
  int v19;
  int v20;
  char *v21;
  char *dest;

  glwebtools::Mutex::Lock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  src = *((uint32_t **)self + 4);
  if ( src == *((uint32_t **)self + 5) )
  {
    v5 = ((int)(uintptr_t)(src) - *((uint32_t *)self + 3)) >> 2;
    v6 = 4;
    if ( v5 != 0 )
    {
      v6 = 0xFFFFFFFC;
      if ( v5 <= 2 * v5 && 2 * v5 <= 0x3FFFFFFF )
        v6 = 8 * v5;
    }
    v15 = v6;
    v18 = ((int)(uintptr_t)(src) - *((uint32_t *)self + 3)) >> 2;
    dest = (char *)opNew(v6);
    v7 = v15;
    v8 = &dest[4 * v18];
    if ( v8 != nullptr )
      *(uint32_t *)v8 = (uint32_t)(uintptr_t)(a2);
    v9 = 0;
    v10 = ((int)(uintptr_t)(src) - *((uint32_t *)self + 3)) >> 2;
    if ( v10 != 0 )
    {
      v19 = 4 * v10;
      memmove(dest, *((const void **)self + 3), 4 * v10);
      v9 = v19;
      v7 = v15;
    }
    v21 = &dest[v9 + 4];
    v11 = 0;
    v12 = (*((uint32_t *)self + 4) - (int)(uintptr_t)(src)) >> 2;
    if ( v12 != 0 )
    {
      v16 = v7;
      v20 = 4 * v12;
      memmove(v21, src, 4 * v12);
      v11 = v20;
      v7 = v16;
    }
    v13 = *((void **)self + 3);
    v14 = &v21[v11];
    if ( v13 != nullptr )
    {
      v17 = v7;
      opDelete(v13);
      v7 = v17;
    }
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v14);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(dest);
    *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dest[v7]);
  }
  else
  {
    v3 = 0;
    if ( src != nullptr )
    {
      *src = (uint32_t)(uintptr_t)(a2);
      v3 = *((uint32_t *)self + 4);
    }
    *((uint32_t *)self + 4) = v3 + 4;
  }
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gaia::ThreadManagerService::Self *)((char *)self + 24)));
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::CanStartRequest  (binary VA: 0x14d3e20)
// Original: gaia::ThreadManagerService::CanStartRequest
// ----------------------------------------------------------------------------
unsigned int gaia::ThreadManagerService::CanStartRequest(gaia::ThreadManagerService::Self *self)
{
  unsigned int v1;
  unsigned int v2;

  v1 = 0;
  glwebtools::Mutex::Lock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  if ( *((uint32_t *)self + 2) < *((uint32_t *)self + 1) )
  {
    v2 = (unsigned int)(*((uint32_t *)self + 4) - *((uint32_t *)self + 3)) >> 2;
    LOBYTE(v2) = v2 != 0;
    v1 = v2;
  }
  glwebtools::Mutex::Unlock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::CheckThreadsStatus  (binary VA: 0x14d3e90)
// Original: gaia::ThreadManagerService::CheckThreadsStatus
// ----------------------------------------------------------------------------
int gaia::ThreadManagerService::CheckThreadsStatus(gaia::ThreadManagerService::Self *self)
{
  int v1;
  int v2;
  int State;
  glwebtools::Thread::Self **v4;
  uint32_t *v6;
  int v7;
  int v8;
  const void *src;
  int v10;
  int v11;
  int v12;
  int v13;
  void *v14;
  char *v15;
  unsigned int v16;
  uint32_t *v17;
  glwebtools::Thread::Self *v18;
  void *v19;
  int v20;
  int v21;
  char *v22;
  unsigned int v23;
  char *v24;
  char *v25;
  int v26;
  char *dest;

  glwebtools::Mutex::Lock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  if ( *((int *)self + 1) > 0 )
  {
    v1 = 0;
    do
    {
      v2 = 4 * v1;
      if ( *(uint32_t *)(*((uint32_t *)self + 11) + 4 * v1) != 0
        && glwebtools::Thread::GetState(*(glwebtools::Thread::Self **)(*((uint32_t *)self + 8) + 4 * v1)) != 2 )
      {
        State = glwebtools::Thread::GetState(*(glwebtools::Thread::Self **)(*((uint32_t *)self + 8) + 4 * v1));
        if ( State == 3 )
        {
          v6 = *((uint32_t **)self + 4);
          v17 = (uint32_t *)(v2 + *((uint32_t *)self + 11));
          if ( v6 == *((uint32_t **)self + 5) )
          {
            v8 = ((int)(uintptr_t)(v6) - *((uint32_t *)self + 3)) >> 2;
            v26 = 4;
            v23 = v8;
            if ( v8 != 0 )
            {
              v16 = 2 * v8;
              if ( v23 > v16 || v16 > 0x3FFFFFFF )
                v26 = -4;
              else
                v26 = 8 * v23;
            }
            v19 = *((void **)self + 4);
            dest = (char *)opNew(v26);
            src = v19;
            v24 = &dest[4 * v23];
            if ( v24 != nullptr )
              *(uint32_t *)v24 = *v17;
            v10 = 0;
            v11 = ((int)(uintptr_t)(v19) - *((uint32_t *)self + 3)) >> 2;
            if ( v11 != 0 )
            {
              v20 = 4 * v11;
              memmove(dest, *((const void **)self + 3), 4 * v11);
              v10 = v20;
              src = v19;
            }
            v25 = &dest[v10 + 4];
            v12 = 0;
            v13 = (*((uint32_t *)self + 4) - (int)(uintptr_t)(src)) >> 2;
            if ( v13 != 0 )
            {
              v21 = 4 * v13;
              memmove(v25, src, 4 * v13);
              v12 = v21;
            }
            v14 = *((void **)self + 3);
            v15 = &v25[v12];
            if ( v14 != nullptr )
            {
              v22 = v15;
              opDelete(v14);
              v15 = v22;
            }
            *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v15);
            *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(dest);
            *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dest[v26]);
          }
          else
          {
            LOBYTE(State) = 0;
            if ( v6 != nullptr )
            {
              *v6 = *(uint32_t *)(v2 + *((uint32_t *)self + 11));
              State = *((uint32_t *)self + 4);
            }
            *((uint32_t *)self + 4) = State + 4;
          }
        }
        if ( glwebtools::Thread::GetState(*(glwebtools::Thread::Self **)(*((uint32_t *)self + 8) + 4 * v1)) == 1 )
        {
          glwebtools::Thread::Join(*(pthread_t ***)(*((uint32_t *)self + 8) + 4 * v1));
          v7 = *(uint32_t *)(*((uint32_t *)self + 11) + 4 * v1);
          if ( v7 != 0 )
            (*(void (**)(uint32_t))(*(uint32_t *)v7 + 4))(*(uint32_t *)(*((uint32_t *)self + 11) + 4 * v1));
        }
        v4 = (glwebtools::Thread::Self **)(*((uint32_t *)self + 8) + v2);
        if ( *v4 != nullptr )
        {
          v18 = *v4;
          glwebtools::Thread::Destroy(*v4);
          opDelete(v18);
          v4 = (glwebtools::Thread::Self **)(v2 + *((uint32_t *)self + 8));
        }
        *v4 = nullptr;
        *(uint32_t *)(*((uint32_t *)self + 11) + 4 * v1) = 0;
        --*((uint32_t *)self + 2);
      }
      ++v1;
    }
    while ( *((uint32_t *)self + 1) > v1 );
  }
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gaia::ThreadManagerService::Self *)((char *)self + 24)));
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::GetNumberOfRunningThread  (binary VA: 0x14d4100)
// Original: gaia::ThreadManagerService::GetNumberOfRunningThread
// ----------------------------------------------------------------------------
int gaia::ThreadManagerService::GetNumberOfRunningThread(gaia::ThreadManagerService::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  v1 = *((uint32_t *)self + 2);
  glwebtools::Mutex::Unlock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::GetNumberOfRequest  (binary VA: 0x14d41f0)
// Original: gaia::ThreadManagerService::GetNumberOfRequest
// ----------------------------------------------------------------------------
int gaia::ThreadManagerService::GetNumberOfRequest(gaia::ThreadManagerService::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  v1 = *((uint32_t *)self + 2) + ((*((uint32_t *)self + 4) - *((uint32_t *)self + 3)) >> 2);
  glwebtools::Mutex::Unlock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::CancelAllIdleRequests  (binary VA: 0x14d42b0)
// Original: gaia::ThreadManagerService::CancelAllIdleRequests
// ----------------------------------------------------------------------------
int gaia::ThreadManagerService::CancelAllIdleRequests(gaia::ThreadManagerService::Self *self)
{
  int v1;
  unsigned int v2;
  uint32_t *v3;

  glwebtools::Mutex::Lock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  v1 = *((uint32_t *)self + 3);
  if ( (unsigned int)(*((uint32_t *)self + 4) - v1) >> 2 != 0 )
  {
    v2 = 0;
    do
    {
      gaia::ThreadManagerRequest::TriggerCallback(*(gaia::ThreadManagerRequest::Self **)(v1 + 4 * v2));
      v3 = (uint32_t *)(*((uint32_t *)self + 3) + 4 * v2);
      if ( *v3 != 0 )
      {
        G4_VCALL<void>(*v3, 4);
        v3 = (uint32_t *)(*((uint32_t *)self + 3) + 4 * v2);
      }
      *v3 = 0;
      v1 = *((uint32_t *)self + 3);
      ++v2;
    }
    while ( v2 < (*((uint32_t *)self + 4) - v1) >> 2 );
  }
  *((uint32_t *)self + 4) = v1;
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gaia::ThreadManagerService::Self *)((char *)self + 24)));
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::DiscardAllPendingRequests  (binary VA: 0x14d43b0)
// Original: gaia::ThreadManagerService::DiscardAllPendingRequests
// ----------------------------------------------------------------------------
int gaia::ThreadManagerService::DiscardAllPendingRequests(gaia::ThreadManagerService::Self *self)
{
  int v1;
  unsigned int v2;
  uint32_t *v3;

  glwebtools::Mutex::Lock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  v1 = *((uint32_t *)self + 3);
  if ( (unsigned int)(*((uint32_t *)self + 4) - v1) >> 2 != 0 )
  {
    v2 = 0;
    do
    {
      gaia::ThreadManagerRequest::TriggerCallback(*(gaia::ThreadManagerRequest::Self **)(v1 + 4 * v2));
      v3 = (uint32_t *)(*((uint32_t *)self + 3) + 4 * v2);
      if ( *v3 != 0 )
      {
        G4_VCALL<void>(*v3, 4);
        v3 = (uint32_t *)(*((uint32_t *)self + 3) + 4 * v2);
      }
      *v3 = 0;
      v1 = *((uint32_t *)self + 3);
      ++v2;
    }
    while ( v2 < (*((uint32_t *)self + 4) - v1) >> 2 );
  }
  *((uint32_t *)self + 4) = v1;
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gaia::ThreadManagerService::Self *)((char *)self + 24)));
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::Destroy  (binary VA: 0x14d4450)
// Original: gaia::ThreadManagerService::~ThreadManagerService
// ----------------------------------------------------------------------------
void gaia::ThreadManagerService::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2095E80));
  while ( gaia::ThreadManagerService::GetNumberOfRunningThread((gaia::ThreadManagerService::Self *)self) != 0 )
  {
    gaia::ThreadManagerService::DiscardAllPendingRequests((gaia::ThreadManagerService::Self *)self);
    gaia::ThreadManagerService::CheckThreadsStatus((gaia::ThreadManagerService::Self *)self);
  }
  if ( *(self + 11) != nullptr )
    opDelete(*(self + 11));
  if ( *(self + 8) != nullptr )
    opDelete(*(self + 8));
  glwebtools::Mutex::Destroy((glwebtools::Mutex::Self *)(self + 6));
  if ( *(self + 3) != nullptr )
    opDelete(*(self + 3));
  *self = &off_2049608;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::Destroy_ea14d44e0  (binary VA: 0x14d44e0)
// Original: gaia::ThreadManagerService::~ThreadManagerService
// ----------------------------------------------------------------------------
void gaia::ThreadManagerService::Destroy_ea14d44e0(void **self)
{
  gaia::ThreadManagerService::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::CancelIdleRequestForOpCode  (binary VA: 0x14d4520)
// Original: gaia::ThreadManagerService::CancelIdleRequestForOpCode
// ----------------------------------------------------------------------------
int gaia::ThreadManagerService::CancelIdleRequestForOpCode(gaia::ThreadManagerService::Self *self, int a2)
{
  gaia::ThreadManagerRequest::Self **v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  gaia::ThreadManagerRequest::Self **v6;
  char *v7;
  int v8;
  bool v9;
  uint32_t *v10;
  char *v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  size_t v16;
  unsigned int v17;
  size_t v18;
  char *v19;
  int v20;
  int v21;
  size_t n;
  typedef size_t _g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef int _g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef uint8_t *_g4_t_src;
  typedef uint32_t *_g4_t_dest;
  typedef uint32_t *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef char *_g4_t_v31;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_src)) > _g4_s4 ? (16u + sizeof(_g4_t_src)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_dest)) > _g4_s5 ? (24u + sizeof(_g4_t_dest)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v29)) > _g4_s6 ? (36u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v30)) > _g4_s7 ? (40u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v31)) > _g4_s8 ? (44u + sizeof(_g4_t_v31)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 16u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);

  glwebtools::Mutex::Lock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  v2 = *((gaia::ThreadManagerRequest::Self ***)self + 3);
  v3 = 0;
  v4 = (unsigned int)(*((uint32_t *)self + 4) - (uint32_t)(uintptr_t)(v2)) >> 2;
  v29 = nullptr;
  v30 = nullptr;
  v31 = nullptr;
  src = nullptr;
  if ( v4 != 0 )
  {
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v8 = 4 * v5;
        v9 = gaia::ThreadManagerRequest::GetOperationCode(v2[v5]) == a2;
        v2 = *((gaia::ThreadManagerRequest::Self ***)self + 3);
        if ( !v9 )
          break;
        gaia::ThreadManagerRequest::TriggerCallback(v2[v5]);
        v10 = (uint32_t *)(*((uint32_t *)self + 3) + v8);
        if ( *v10 != 0 )
        {
          G4_VCALL<void>(*v10, 4);
          v10 = (uint32_t *)(v8 + *((uint32_t *)self + 3));
        }
        *v10 = 0;
        v2 = *((gaia::ThreadManagerRequest::Self ***)self + 3);
        ++v5;
        v3 = (*((uint32_t *)self + 4) - (int)(uintptr_t)(v2)) >> 2;
        if ( v5 >= v3 )
          goto LABEL_12;
      }
      v6 = &v2[v8 / 4u];
      v7 = v30;
      if ( v30 == v31 )
      {
        v16 = 4;
        v17 = (v30 - (char *)(src)) >> 2;
        if ( v17 != 0 )
        {
          if ( v17 > 2 * v17 || 2 * v17 > 0x3FFFFFFF )
            v16 = 0xFFFFFFFC;
          else
            v16 = 8 * v17;
        }
        v23 = v16;
        v25 = (v30 - (char *)(src)) >> 2;
        dest = (uint32_t *)opNew(v16);
        v18 = v23;
        if ( &dest[v25] != nullptr )
          dest[v25] = (uint32_t)(uintptr_t)(*v6);
        if ( v25 != 0 )
        {
          memmove(dest, src, 4 * v25);
          v18 = v23;
        }
        if ( src != nullptr )
        {
          v24 = v18;
          opDelete(src);
          v18 = v24;
        }
        v30 = (char *)&dest[v25 + 1];
        v29 = dest;
        v31 = (char *)dest + v18;
        v2 = *((gaia::ThreadManagerRequest::Self ***)self + 3);
        src = (uint8_t *)(dest);
      }
      else
      {
        if ( v30 != nullptr )
        {
          *(uint32_t *)v30 = (uint32_t)(uintptr_t)(*v6);
          v2 = *((gaia::ThreadManagerRequest::Self ***)self + 3);
        }
        v30 = v7 + 4;
      }
      ++v5;
      v3 = (*((uint32_t *)self + 4) - (int)(uintptr_t)(v2)) >> 2;
    }
    while ( v5 < v3 );
  }
LABEL_12:
  if ( &v29 != (uint32_t **)((char *)self + 12) )
  {
    v11 = v30;
    v12 = (v30 - (char *)(src)) >> 2;
    v13 = (*((uint32_t *)self + 5) - (int)(uintptr_t)(v2)) >> 2;
    if ( v12 > v13 )
    {
      if ( v12 != 0 )
      {
        if ( v12 > 0x3FFFFFFF )
          sub_18FFEE0(v13, v3);
        v26 = 4 * v12;
        v19 = (char *)opNew(4 * v12);
        memmove(v19, src, 4 * v12);
      }
      else
      {
        v26 = 0;
        v19 = nullptr;
      }
      if ( *((uint32_t *)self + 3) != 0 )
        opDelete(*((void **)self + 3));
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v19);
      v14 = (int)(uintptr_t)(&v19[v26]);
      *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&v19[v26]);
    }
    else if ( v12 > v3 )
    {
      if ( v3 != 0 )
        memmove(v2, src, 4 * v3);
      v20 = *((uint32_t *)self + 3);
      v21 = (v11 - (char *)(&src[(*((uint32_t *)self + 4) - v20) & 0xFFFFFFFC])) >> 2;
      if ( v21 != 0 )
      {
        memmove(*((void **)self + 4), &src[(*((uint32_t *)self + 4) - v20) & 0xFFFFFFFC], 4 * v21);
        v14 = *((uint32_t *)self + 3) + 4 * v12;
      }
      else
      {
        v14 = v20 + 4 * v12;
      }
    }
    else if ( v12 != 0 )
    {
      n = 4 * v12;
      memmove(v2, src, n);
      v14 = *((uint32_t *)self + 3) + n;
    }
    else
    {
      v14 = *((uint32_t *)self + 3);
    }
    *((uint32_t *)self + 4) = v14;
  }
  if ( src != nullptr )
    opDelete(src);
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gaia::ThreadManagerService::Self *)((char *)self + 24)));
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::IsRequestForOpCode  (binary VA: 0x14d48d0)
// Original: gaia::ThreadManagerService::IsRequestForOpCode
// ----------------------------------------------------------------------------
int gaia::ThreadManagerService::IsRequestForOpCode(gaia::ThreadManagerService::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;

  glwebtools::Mutex::Lock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  if ( *((int *)self + 1) > 0 )
  {
    v2 = 0;
    while ( *(uint32_t *)(*((uint32_t *)self + 8) + 4 * v2) == 0
         || *(uint32_t *)(*((uint32_t *)self + 11) + 4 * v2) == 0
         || gaia::ThreadManagerRequest::GetOperationCode(*(gaia::ThreadManagerRequest::Self **)(*((uint32_t *)self + 11) + 4 * v2)) != a2 )
    {
      if ( *((uint32_t *)self + 1) <= ++v2 )
        goto LABEL_7;
    }
    goto LABEL_11;
  }
LABEL_7:
  v3 = *((uint32_t *)self + 3);
  v4 = 0;
  if ( (unsigned int)(*((uint32_t *)self + 4) - v3) >> 2 != 0 )
  {
    v5 = 0;
    while ( a2 != gaia::ThreadManagerRequest::GetOperationCode(*(gaia::ThreadManagerRequest::Self **)(v3 + 4 * v5)) )
    {
      v3 = *((uint32_t *)self + 3);
      if ( ++v5 >= (unsigned int)((*((uint32_t *)self + 4) - v3) >> 2) )
      {
        v4 = 0;
        goto LABEL_12;
      }
    }
LABEL_11:
    v4 = 1;
  }
LABEL_12:
  glwebtools::Mutex::Unlock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::Construct  (binary VA: 0x14e3b40)
// Original: gaia::ThreadManagerService::ThreadManagerService
// ----------------------------------------------------------------------------
void gaia::ThreadManagerService::Construct(gaia::ThreadManagerService::Self *self, int a2)
{
  unsigned int v2;
  const void *src;
  size_t n;
  char *dest;
  char *v6;
  void *v7;
  typedef char *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095E80);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  glwebtools::Mutex::Construct((gaia::ThreadManagerService::Self *)((char *)self + 24));
  v2 = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 1) = a2;
  *((uint32_t *)self + 2) = 0;
  v10[0] = 0;
  if ( a2 != 0 )
  {
    g4_std::vector_glwebtools_Thread_27f4e7::M_fill_insert((int)(uintptr_t)(self) + 32, nullptr, a2, (int)(uintptr_t)(v10));
    v2 = *((uint32_t *)self + 1);
  }
  g4_std::vector_gaia_ThreadManagerReques_53a3c6::resize((gaia::ThreadManagerService::Self *)((char *)self + 44), v2, nullptr);
  src = *((const void **)self + 3);
  if ( (unsigned int)(*((uint32_t *)self + 5) - (uint32_t)(uintptr_t)(src)) <= 0x18F )
  {
    n = (*((uint32_t *)self + 4) - (int)(uintptr_t)(src)) >> 2;
    dest = (char *)opNew(0x190u);
    v6 = dest;
    if ( n != 0 )
    {
      n *= 4;
      v8 = dest;
      memmove(dest, src, n);
      v6 = v8;
    }
    v7 = *((void **)self + 3);
    if ( v7 != nullptr )
    {
      v9 = v6;
      opDelete(v7);
      v6 = v9;
    }
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v6);
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&v6[n]);
    *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v6 + 400);
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::StartRequest  (binary VA: 0x14e9060)
// Original: gaia::ThreadManagerService::StartRequest
// ----------------------------------------------------------------------------
int gaia::ThreadManagerService::StartRequest(gaia::ThreadManagerService::Self *self)
{
  int v1;
  void *v2;
  void *v3;
  gaia::ThreadManagerRequest::Self **dest;
  char *v5;
  const void *src;
  gaia::ThreadManagerRequest::Self *v7;
  int RequestType;
  void *AsyncRequest;
  uint32_t *v10;
  int v11;
  int v12;
  glwebtools::Thread::Self **v13;
  void *GaiaRequest;
  void *v16;
  glwebtools::Mutex::Self *v17;
  glwebtools::Thread::Self *v18;
  glwebtools::Thread::Self *v19;
  int v20;

  v17 = (glwebtools::Mutex::Self *)((gaia::ThreadManagerService::Self *)((char *)self + 24));
  glwebtools::Mutex::Lock((gaia::ThreadManagerService::Self *)((char *)self + 24));
  v18 = *((glwebtools::Thread::Self **)self + 3);
  v1 = (*((uint32_t *)self + 4) - (int)(uintptr_t)(v18)) >> 2;
  v20 = *((uint32_t *)self + 4);
  if ( v1 == 0 || *((uint32_t *)self + 2) >= *((uint32_t *)self + 1) )
    return glwebtools::Mutex::Unlock(v17);
  if ( v1 > 0 )
  {
    while ( 1 )
    {
      v2 = (void *)opNew(4 * v1, (const std::nothrow_t *)&std::nothrow);
      if ( v2 != nullptr )
        break;
      v1 >>= 1;
      if ( v1 == 0 )
        goto LABEL_26;
    }
    v16 = v2;
    g4_std::stable_sort_adaptive_Request(
      v18,
      v20,
      v2,
      v1,
      (int)(uintptr_t)(gaia::ComparePriorities));
    v3 = v16;
  }
  else
  {
LABEL_26:
    g4_std_compat::inplace_stable_sort(
      v18,
      v20,
      (int)(uintptr_t)(gaia::ComparePriorities));
    v3 = nullptr;
  }
  opDelete(v3, (const std::nothrow_t *)&std::nothrow);
  dest = *((gaia::ThreadManagerRequest::Self ***)self + 3);
  v5 = *((char **)self + 4);
  src = dest + 1;
  v7 = *dest;
  if ( v5 != (char *)(dest + 1) )
    goto LABEL_14;
  while ( 1 )
  {
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v5 - 4);
    if ( (uint8_t)gaia::ThreadManagerRequest::IsCanceled(v7) == 0 )
      break;
    gaia::ThreadManagerRequest::TriggerCallback(v7);
    if ( v7 != nullptr )
      G4_VCALL<void>(v7, 4);
    v5 = *((char **)self + 4);
    dest = *((gaia::ThreadManagerRequest::Self ***)self + 3);
    if ( (unsigned int)(v5 - (char *)dest) >> 2 == 0 )
      return glwebtools::Mutex::Unlock(v17);
    src = dest + 1;
    v7 = *dest;
    if ( v5 != (char *)(dest + 1) )
    {
LABEL_14:
      if ( (v5 - (char *)((uint8_t *)src)) >> 2 != 0 )
      {
        memmove(dest, src, 4 * ((v5 - (char *)((uint8_t *)src)) >> 2));
        v5 = *((char **)self + 4);
      }
    }
  }
  RequestType = gaia::ThreadManagerRequest::GetRequestType(v7);
  if ( RequestType != 0 )
  {
    if ( RequestType == 1 )
    {
      GaiaRequest = (void *)gaia::ThreadManagerRequest::GetGaiaRequest(v7);
      v19 = (glwebtools::Thread::Self *)opNew(0x18u);
      glwebtools::Thread::Construct(
        v19,
        (void (*)(void *, void *))gaia::Gaia::PerformAsyncActionDataContainerPtr,
        self,
        GaiaRequest,
        "Thread from ThreadManager");
    }
    else
    {
      v19 = nullptr;
    }
  }
  else
  {
    AsyncRequest = (void *)gaia::ThreadManagerRequest::GetAsyncRequest(v7);
    v19 = (glwebtools::Thread::Self *)opNew(0x18u);
    glwebtools::Thread::Construct(
      v19,
      (void (*)(void *, void *))gaia::Gaia::PerformAsyncAction,
      self,
      AsyncRequest,
      "Thread from ThreadManager");
  }
  glwebtools::Thread::Start(v19);
  if ( *((int *)self + 1) > 0 )
  {
    v10 = *((uint32_t **)self + 8);
    if ( *v10 != 0 )
    {
      v11 = 0;
      while ( ++v11 != *((uint32_t *)self + 1) )
      {
        v12 = 4 * v11;
        v13 = (glwebtools::Thread::Self **)&v10[v11];
        if ( *v13 == nullptr )
          goto LABEL_29;
      }
    }
    else
    {
      v13 = *((glwebtools::Thread::Self ***)self + 8);
      v12 = 0;
LABEL_29:
      *v13 = v19;
      *(uint32_t *)(*((uint32_t *)self + 11) + v12) = (uint32_t)(uintptr_t)(v7);
    }
  }
  ++*((uint32_t *)self + 2);
  return glwebtools::Mutex::Unlock(v17);
}

// ----------------------------------------------------------------------------
// Function: gaia::ThreadManagerService::Update  (binary VA: 0x14e9310)
// Original: gaia::ThreadManagerService::Update
// ----------------------------------------------------------------------------
unsigned int gaia::ThreadManagerService::Update(gaia::ThreadManagerService::Self *self)
{
  unsigned int result;

  gaia::ThreadManagerService::CheckThreadsStatus(self);
  result = gaia::ThreadManagerService::CanStartRequest(self);
  if ( (uint8_t)result != 0 )
    return gaia::ThreadManagerService::StartRequest(self);
  return result;
}


