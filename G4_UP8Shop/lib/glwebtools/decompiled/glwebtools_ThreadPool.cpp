#include "Core/Utils/DecompTypes.h"
#include "glwebtools_ThreadPool.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::Terminate  (binary VA: 0x13ea1d0)
// Original: glwebtools::ThreadPool::Terminate
// ----------------------------------------------------------------------------
void glwebtools::ThreadPool::Terminate(glwebtools::ThreadPool::Self *self)
{
  glwebtools::JobRunner::Self **v1;
  glwebtools::ThreadPool::Self *v2;

  v1 = *(glwebtools::JobRunner::Self ***)self;
  if ( *(glwebtools::ThreadPool::Self **)self != self )
  {
    do
    {
      if ( v1[2] != nullptr )
      {
        glwebtools::JobRunner::Destroy(v1[2]);
        sub_4EBEE0((int)(uintptr_t)(v1[2]));
        v1[2] = nullptr;
      }
      v1 = (glwebtools::JobRunner::Self **)*v1;
    }
    while ( v1 != (glwebtools::JobRunner::Self **)self );
    v1 = (glwebtools::JobRunner::Self **)*v1;
  }
  if ( v1 != (glwebtools::JobRunner::Self **)self )
  {
    while ( 1 )
    {
      v2 = (glwebtools::ThreadPool::Self *)(*v1);
      opDelete(v1);
      if ( v2 == self )
        break;
      v1 = (glwebtools::JobRunner::Self **)v2;
    }
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 2) = 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::Destroy  (binary VA: 0x13ea260)
// Original: glwebtools::ThreadPool::~ThreadPool
// ----------------------------------------------------------------------------
void glwebtools::ThreadPool::Destroy(glwebtools::ThreadPool::Self *self)
{
  glwebtools::ThreadPool::Self **v1;
  glwebtools::ThreadPool::Self *v2;

  glwebtools::ThreadPool::Terminate(self);
  v1 = *(glwebtools::ThreadPool::Self ***)self;
  if ( *(glwebtools::ThreadPool::Self **)self != self )
  {
    while ( 1 )
    {
      v2 = *v1;
      opDelete(v1);
      if ( v2 == self )
        break;
      v1 = (glwebtools::ThreadPool::Self **)v2;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::IsInitialized  (binary VA: 0x13ea2a0)
// Original: glwebtools::ThreadPool::IsInitialized
// ----------------------------------------------------------------------------
bool glwebtools::ThreadPool::IsInitialized(glwebtools::ThreadPool::Self *self)
{
  bool result;

  result = true;
  if ( *((uint32_t *)self + 2) == 0 )
    return *((uint32_t *)self + 3) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::WaitingThreadCount  (binary VA: 0x13ea2c0)
// Original: glwebtools::ThreadPool::WaitingThreadCount
// ----------------------------------------------------------------------------
int glwebtools::ThreadPool::WaitingThreadCount(glwebtools::JobRunner::Self ***self)
{
  int v1;
  glwebtools::JobRunner::Self **i;
  bool IsWaiting;

  v1 = 0;
  if ( glwebtools::ThreadPool::IsInitialized((glwebtools::ThreadPool::Self *)self) )
  {
    for ( i = *self; i != (glwebtools::JobRunner::Self **)self; v1 -= !IsWaiting - 1 )
    {
      IsWaiting = glwebtools::JobRunner::IsWaiting(i[2]);
      i = (glwebtools::JobRunner::Self **)*i;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::AvailableThreadCount  (binary VA: 0x13ea320)
// Original: glwebtools::ThreadPool::AvailableThreadCount
// ----------------------------------------------------------------------------
int glwebtools::ThreadPool::AvailableThreadCount(glwebtools::ThreadPool::Self *self)
{
  int v1;
  int v3;
  glwebtools::JobRunner::Self **v4;
  unsigned int v5;
  glwebtools::JobRunner::Self **v6;
  unsigned int v7;
  int i;

  v1 = 0;
  if ( glwebtools::ThreadPool::IsInitialized(self) )
  {
    v3 = glwebtools::ThreadPool::WaitingThreadCount((glwebtools::JobRunner::Self ***)self);
    v4 = *(glwebtools::JobRunner::Self ***)self;
    v5 = 0;
    v1 = v3;
    if ( self != *(glwebtools::ThreadPool::Self **)self )
    {
      v6 = *(glwebtools::JobRunner::Self ***)self;
      do
      {
        v6 = (glwebtools::JobRunner::Self **)*v6;
        ++v5;
      }
      while ( self != (glwebtools::ThreadPool::Self *)v6 );
    }
    v7 = *((uint32_t *)self + 3);
    if ( v7 > v5 )
    {
      for ( i = 0; self != (glwebtools::ThreadPool::Self *)v4; ++i )
        v4 = (glwebtools::JobRunner::Self **)*v4;
      return v7 + v1 - i;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::StartedThreadCount  (binary VA: 0x13ea3b0)
// Original: glwebtools::ThreadPool::StartedThreadCount
// ----------------------------------------------------------------------------
int glwebtools::ThreadPool::StartedThreadCount(glwebtools::JobRunner::Self ***self)
{
  int v1;
  glwebtools::JobRunner::Self **i;
  bool IsIdle;

  v1 = 0;
  if ( glwebtools::ThreadPool::IsInitialized((glwebtools::ThreadPool::Self *)self) )
  {
    for ( i = *self; i != (glwebtools::JobRunner::Self **)self; v1 += !IsIdle )
    {
      IsIdle = glwebtools::JobRunner::IsIdle(i[2]);
      i = (glwebtools::JobRunner::Self **)*i;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::Size  (binary VA: 0x13ea410)
// Original: glwebtools::ThreadPool::Size
// ----------------------------------------------------------------------------
int glwebtools::ThreadPool::Size(glwebtools::ThreadPool::Self *self)
{
  bool IsInitialized;
  int v2;
  glwebtools::ThreadPool::Self *v3;
  int v4;

  IsInitialized = glwebtools::ThreadPool::IsInitialized(self);
  v2 = 0;
  if ( IsInitialized )
  {
    v3 = *(glwebtools::ThreadPool::Self **)self;
    if ( self != *(glwebtools::ThreadPool::Self **)self )
    {
      v4 = 0;
      do
      {
        v3 = *(glwebtools::ThreadPool::Self **)v3;
        ++v4;
      }
      while ( self != v3 );
      return v4;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::Idle  (binary VA: 0x13ea460)
// Original: glwebtools::ThreadPool::Idle
// ----------------------------------------------------------------------------
int glwebtools::ThreadPool::Idle(glwebtools::ThreadPool::Self *self)
{
  bool IsInitialized;
  int v2;
  glwebtools::JobRunner::Self **v3;

  IsInitialized = glwebtools::ThreadPool::IsInitialized(self);
  v2 = 1;
  if ( !IsInitialized )
    return v2;
  v3 = *(glwebtools::JobRunner::Self ***)self;
  if ( *(glwebtools::ThreadPool::Self **)self == self )
    return v2;
  do
  {
    if ( glwebtools::JobRunner::IsRunning(v3[2]) )
      return 0;
    v3 = (glwebtools::JobRunner::Self **)*v3;
  }
  while ( v3 != (glwebtools::JobRunner::Self **)self );
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::Update  (binary VA: 0x13ea4d0)
// Original: glwebtools::ThreadPool::Update
// ----------------------------------------------------------------------------
int glwebtools::ThreadPool::Update(glwebtools::ThreadPool::Self *self, uint64_t a2, bool a3)
{
  glwebtools::JobRunner::Self **v3;
  glwebtools::ThreadPool::Self *v4;
  unsigned int v5;
  char IsIdleForMoreThan;
  glwebtools::ThreadPool::Self *v7;
  uint64_t v9; // rax
  unsigned int v10; // xmm0_4
  glwebtools::ThreadPool::Self *v11;
  int v12;
  glwebtools::JobRunner::Self *v13;
  glwebtools::JobRunner::Self *v14;

  v3 = *(glwebtools::JobRunner::Self ***)self;
  if ( self != *(glwebtools::ThreadPool::Self **)self )
  {
    v4 = *(glwebtools::ThreadPool::Self **)self;
    v5 = 0;
    do
    {
      v4 = *(glwebtools::ThreadPool::Self **)v4;
      ++v5;
    }
    while ( self != v4 );
    if ( *((uint32_t *)self + 2) < v5 && a3 )
    {
      if ( *(uint64_t *)((char *)self + 28) != 0 )
      {
        v9 = a2 + *(uint64_t *)((char *)self + 28);
        v10 = *((uint32_t *)self + 5);
        *(uint64_t *)((char *)self + 28) = v9;
        if ( v9 > v10 )
        {
          while ( self != (glwebtools::ThreadPool::Self *)v3 )
          {
            while ( glwebtools::JobRunner::IsWaiting(v3[2]) )
            {
              if ( v3[2] != nullptr )
              {
                glwebtools::JobRunner::Destroy(v3[2]);
                sub_4EBEE0((int)(uintptr_t)(v3[2]));
              }
              v11 = (glwebtools::ThreadPool::Self *)(*v3);
              sub_1901940(v3);
              opDelete(v3);
              v12 = *((uint32_t *)self + 5);
              *((uint32_t *)self + 7) = 0;
              *((uint32_t *)self + 8) = 0;
              if ( v12 == 0 )
              {
                v3 = (glwebtools::JobRunner::Self **)v11;
                if ( self != v11 )
                  continue;
              }
              goto LABEL_22;
            }
            v3 = (glwebtools::JobRunner::Self **)*v3;
          }
LABEL_22:
          v3 = *(glwebtools::JobRunner::Self ***)self;
        }
      }
      else
      {
        *(uint64_t *)((char *)self + 28) = a2;
      }
      while ( self != (glwebtools::ThreadPool::Self *)v3 )
      {
        while ( 1 )
        {
          IsIdleForMoreThan = glwebtools::JobRunner::IsIdleForMoreThan(v3[2], 0);
          v13 = v3[2];
          if ( IsIdleForMoreThan == 0 )
            break;
          glwebtools::JobRunner::Update(v13, a2);
          if ( (uint8_t)glwebtools::JobRunner::IsIdleForMoreThan(
                                  v3[2],
g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*((uint32_t *)self + 6)), 0)) == 0 )
            goto LABEL_24;
          if ( v3[2] != nullptr )
          {
            glwebtools::JobRunner::Destroy(v3[2]);
            sub_4EBEE0((int)(uintptr_t)(v3[2]));
          }
          v7 = (glwebtools::ThreadPool::Self *)(*v3);
          sub_1901940(v3);
          v14 = (glwebtools::JobRunner::Self *)v3;
          v3 = (glwebtools::JobRunner::Self **)v7;
          opDelete(v14);
          if ( self == v7 )
            return 0;
        }
        glwebtools::JobRunner::Update(v13, a2);
LABEL_24:
        v3 = (glwebtools::JobRunner::Self **)*v3;
      }
    }
  }
  return 0;
}



// ============================================================================
// Address:   0x13ea6a0 (size: 39 bytes)
// Symbol:    _ZN10glwebtools10ThreadPool16CreationSettingsC1Ev
// Demangled: glwebtools::ThreadPool::CreationSettings::CreationSettings(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools10ThreadPool16CreationSettingsC2Ev'
struct glwebtools::ThreadPool::CreationSettings::Self *glwebtools::ThreadPool::CreationSettings::Construct(
        glwebtools::ThreadPool::CreationSettings::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 3;
  *((uint32_t *)self + 2) = 2;
  *((uint32_t *)self + 3) = 1000;
  *((uint32_t *)self + 4) = 1000;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::Construct  (binary VA: 0x13ea6d0)
// Original: glwebtools::ThreadPool::ThreadPool
// ----------------------------------------------------------------------------
glwebtools::ThreadPool::Self * glwebtools::ThreadPool::Construct(glwebtools::ThreadPool::Self *self)
{
  glwebtools::ThreadPool::Self *result;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(self);
  result = (glwebtools::ThreadPool::Self *)(glwebtools::ThreadPool::CreationSettings::Construct((glwebtools::ThreadPool::CreationSettings::Self *)((char *)self + 8)));
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::CreationSettings::Construct  (binary VA: 0x13ea720)
// Original: glwebtools::ThreadPool::CreationSettings::CreationSettings
// ----------------------------------------------------------------------------
uint32_t * glwebtools::ThreadPool::CreationSettings::Construct(uint32_t *a1, int a2, int a3, int a4, int a5, int a6)
{
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  a1[3] = a5;
  a1[4] = a6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::AddThread  (binary VA: 0x13ea750)
// Original: glwebtools::ThreadPool::AddThread
// ----------------------------------------------------------------------------
int glwebtools::ThreadPool::AddThread(glwebtools::ThreadPool::Self *self)
{
  glwebtools::ThreadPool::Self *v1;
  int i;
  int v3;
  void *v4;
  char *v5;
  uint32_t *v6;
  glwebtools::ThreadPool::Self *v8;
  int v9;
  int v10;
  glwebtools::ThreadPool::Self *v11;
  int j;
  bool v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef glwebtools::Job::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef char *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int (**_g4_t_v22)(int);
  typedef int _g4_t_v23;
  typedef int (**_g4_t_v24)(int);
  typedef uint32_t _g4_t_v25[3];
  typedef int _g4_t_v26;
  typedef void *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[4];
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t _g4_t_v33[29];
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v19)) > _g4_s4 ? (24u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v20)) > _g4_s5 ? (28u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v21)) > _g4_s6 ? (32u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v22)) > _g4_s7 ? (36u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v23)) > _g4_s8 ? (40u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v24)) > _g4_s9 ? (44u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v25)) > _g4_s10 ? (48u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v26)) > _g4_s11 ? (60u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v27)) > _g4_s12 ? (64u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v28)) > _g4_s13 ? (68u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v29)) > _g4_s14 ? (72u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v30)) > _g4_s15 ? (76u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v31)) > _g4_s16 ? (80u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v32)) > _g4_s17 ? (84u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v33)) > _g4_s18 ? (88u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (204u + sizeof(_g4_t_v34)) > _g4_s19 ? (204u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (205u + sizeof(_g4_t_v35)) > _g4_s20 ? (205u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (208u + sizeof(_g4_t_v36)) > _g4_s21 ? (208u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (212u + sizeof(_g4_t_v37)) > _g4_s22 ? (212u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (216u + sizeof(_g4_t_v38)) > _g4_s23 ? (216u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (220u + sizeof(_g4_t_v39)) > _g4_s24 ? (220u + sizeof(_g4_t_v39)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 88u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 204u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 205u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 208u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 212u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 216u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 220u);

  sub_1900810(v33);
  v33[28] = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v33[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v39 = 0;
  v22 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v22 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v23 = 0;
  sub_19119D0((char *)&v22 + (uint32_t)(uintptr_t)(*(v22 - 3)), 0);
  v24 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v25[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v25[-1] + (uint32_t)(uintptr_t)(*(v24 - 3)), 0);
  v22 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v22 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v25[1] = 0;
  v22 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v25[2] = 0;
  v26 = 0;
  v33[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v27 = nullptr;
  v28 = 0;
  v24 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v29 = 0;
  v25[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v30);
  v31 = 24;
  v25[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v32 = &dword_213B814;
  sub_19119D0(v33, v25);
  v1 = *(glwebtools::ThreadPool::Self **)self;
  for ( i = 0; self != v1; ++i )
    v1 = *(glwebtools::ThreadPool::Self **)v1;
  v15 = i;
  g4_std_compat::ostream_write(&v24, "Worker Thread[", 14);
  v3 = (int)(uintptr_t)(sub_192D8B0(&v24, v15));
  g4_std_compat::ostream_write(v3, "]", 1);
  v19 = (char *)&dword_213B814;
  if ( v28 == 0 )
  {
    g4_std::string::assign_str(&v19, &v32);
    goto LABEL_6;
  }
  if ( v28 > (unsigned int)v26 )
  {
    sub_11A9950(&v21, v27, (uint8_t *)v28);
    g4_std::string::assign_str(&v19, &v21);
    v4 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      goto LABEL_14;
    }
  }
  else
  {
    sub_11A9950(&v20, v27, (uint8_t *)v26);
    g4_std::string::assign_str(&v19, &v20);
    v4 = (void *)(v20 - 12);
    if ( (uint32_t *)(v20 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
    {
LABEL_14:
      g4_std::string::Rep::M_destroy(v4);
    }
  }
LABEL_6:
  v17 = (glwebtools::Job::Self *)sub_4EBE70(0x40u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  glwebtools::JobRunner::Construct(v17, &v19);
  v5 = v19 - 12;
  if ( v19 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v19 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  if ( v17 != nullptr )
  {
    v16 = glwebtools::JobRunner::Start(v17);
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v16) )
    {
      v8 = *(glwebtools::ThreadPool::Self **)self;
      v18 = 1;
      if ( self != *(glwebtools::ThreadPool::Self **)self )
      {
        v9 = 0;
        do
        {
          v8 = *(glwebtools::ThreadPool::Self **)v8;
          ++v9;
        }
        while ( self != v8 );
        v18 = v9 + 1;
      }
      v10 = opNew(0xCu);
      if ( v10 != -8 )
        *(uint32_t *)(v10 + 8) = (uint32_t)(uintptr_t)(v17);
      sub_1901920(v10, self);
      v11 = *(glwebtools::ThreadPool::Self **)self;
      for ( j = 0; self != v11; ++j )
        v11 = *(glwebtools::ThreadPool::Self **)v11;
      v13 = j == v18;
      v14 = 0;
      if ( !v13 )
        v14 = -2147483643;
      v16 = v14;
    }
    else
    {
      glwebtools::JobRunner::Destroy(v17);
      sub_4EBEE0((int)(uintptr_t)(v17));
    }
  }
  else
  {
    v16 = -2147483643;
  }
  v22 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v33[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v24 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v25[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v6 = v32 - 3;
  if ( v32 - 3 != dword_213B808 && __sync_fetch_and_add(v32 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v6);
  v25[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v30);
  v22 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v22 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v24 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v25[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v22 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v22 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v23 = 0;
  v33[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v33);
  return v16;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::Signal  (binary VA: 0x13eacd0)
// Original: glwebtools::ThreadPool::Signal
// ----------------------------------------------------------------------------
unsigned int glwebtools::ThreadPool::Signal(glwebtools::ThreadPool::Self *self, const glwebtools::Job::Self *a2)
{
  int v2;
  glwebtools::JobRunner::Self **v3;
  unsigned int i;

  v2 = -2147483645;
  if ( !glwebtools::ThreadPool::IsInitialized(self) )
    return v2;
  v3 = *(glwebtools::JobRunner::Self ***)self;
  if ( *(glwebtools::ThreadPool::Self **)self != self )
  {
    do
    {
      if ( glwebtools::JobRunner::IsWaiting(v3[2]) )
        return glwebtools::JobRunner::Signal(v3[2], a2);
      v3 = (glwebtools::JobRunner::Self **)*v3;
    }
    while ( v3 != (glwebtools::JobRunner::Self **)self );
    v3 = (glwebtools::JobRunner::Self **)*v3;
  }
  for ( i = 0; self != (glwebtools::ThreadPool::Self *)v3; ++i )
    v3 = (glwebtools::JobRunner::Self **)*v3;
  v2 = -2147483642;
  if ( *((uint32_t *)self + 3) <= i )
    return v2;
  v2 = glwebtools::ThreadPool::AddThread(self);
  if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v2) )
    return v2;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  return glwebtools::JobRunner::Signal(*(glwebtools::JobRunner::Self **)(*((uint32_t *)self + 1) + 8), a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ThreadPool::Initialize  (binary VA: 0x13eada0)
// Original: glwebtools::ThreadPool::Initialize
// ----------------------------------------------------------------------------
int glwebtools::ThreadPool::Initialize(glwebtools::ThreadPool::Self *self, const glwebtools::ThreadPool::CreationSettings::Self *a2)
{
  int result;
  unsigned int v3;

  if ( *(uint32_t *)a2 != 0 || (result = -2147483639, *((uint32_t *)a2 + 1) != 0) )
  {
    glwebtools::ThreadPool::Terminate(self);
    if ( *(uint32_t *)a2 != 0 )
    {
      v3 = 0;
      do
      {
        ++v3;
        glwebtools::ThreadPool::AddThread(self);
      }
      while ( *(uint32_t *)a2 > v3 );
    }
    *((uint32_t *)self + 7) = 0;
    *((uint32_t *)self + 8) = 0;
    *((uint32_t *)self + 2) = *(uint32_t *)a2;
    *((uint32_t *)self + 3) = *((uint32_t *)a2 + 1);
    *((uint32_t *)self + 4) = *((uint32_t *)a2 + 2);
    *((uint32_t *)self + 5) = *((uint32_t *)a2 + 3);
    *((uint32_t *)self + 6) = *((uint32_t *)a2 + 4);
    return 0;
  }
  return result;
}


