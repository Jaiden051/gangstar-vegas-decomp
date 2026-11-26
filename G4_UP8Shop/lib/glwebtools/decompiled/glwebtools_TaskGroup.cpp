#include "Core/Utils/DecompTypes.h"
#include "glwebtools_TaskGroup.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::Construct  (binary VA: 0x13e9200)
// Original: glwebtools::TaskGroup::TaskGroup
// ----------------------------------------------------------------------------
pthread_mutex_t ** glwebtools::TaskGroup::Construct(glwebtools::TaskGroup::Self *self)
{
  pthread_mutex_t **result;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(self);
  glwebtools::ThreadPool::Construct((glwebtools::TaskGroup::Self *)((char *)self + 8));
  result = glwebtools::Mutex::Construct((glwebtools::TaskGroup::Self *)((char *)self + 48));
  *((uint32_t *)self + 14) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::PushTask  (binary VA: 0x13e9250)
// Original: glwebtools::TaskGroup::PushTask
// ----------------------------------------------------------------------------
glwebtools::Task::Self * glwebtools::TaskGroup::PushTask(glwebtools::TaskGroup::Self *self, unsigned int *a2, const glwebtools::Job::Self *a3, int a4)
{
  char IsInitialized;
  int v5;
  int v6;
  typedef glwebtools::Task::Self *_g4_t_v8;
  typedef uint32_t _g4_t_v9[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  glwebtools::Mutex::Lock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  IsInitialized = glwebtools::ThreadPool::IsInitialized((glwebtools::TaskGroup::Self *)((char *)self + 8));
  v5 = -2147483641;
  if ( IsInitialized != 0 )
  {
    if ( a2 != nullptr )
    {
      glwebtools::Task::Construct((glwebtools::Task::Self *)v9);
      v6 = *((uint32_t *)self + 14) + 1;
      v9[4] = a4;
      *((uint32_t *)self + 14) = v6;
      v9[0] = *(uint32_t *)a3;
      v9[1] = *((uint32_t *)a3 + 1);
      v9[2] = *((uint32_t *)a3 + 2);
      v9[3] = v6;
      *a2 = v6;
      v5 = glwebtools::TaskQueue::PushTask(self, (const glwebtools::Task::Self *)v9);
    }
    else
    {
      v5 = -2147483646;
    }
  }
  v8 = (glwebtools::Task::Self *)v5;
  glwebtools::Mutex::Unlock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  return v8;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::RemoveTask  (binary VA: 0x13e9320)
// Original: glwebtools::TaskGroup::RemoveTask
// ----------------------------------------------------------------------------
int glwebtools::TaskGroup::RemoveTask(glwebtools::TaskGroup::Self *self, unsigned int a2)
{
  int v2;

  v2 = -2147483641;
  glwebtools::Mutex::Lock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  if ( (uint8_t)glwebtools::ThreadPool::IsInitialized((glwebtools::TaskGroup::Self *)((char *)self + 8)) != 0 )
    v2 = glwebtools::TaskQueue::RemoveTask(self, a2);
  glwebtools::Mutex::Unlock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::IsScheduled  (binary VA: 0x13e93a0)
// Original: glwebtools::TaskGroup::IsScheduled
// ----------------------------------------------------------------------------
int glwebtools::TaskGroup::IsScheduled(glwebtools::TaskGroup::Self *self, unsigned int a2)
{
  int IsScheduled;

  IsScheduled = 0;
  glwebtools::Mutex::Lock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  if ( (uint8_t)glwebtools::ThreadPool::IsInitialized((glwebtools::TaskGroup::Self *)((char *)self + 8)) != 0 )
    IsScheduled = glwebtools::TaskQueue::IsScheduled(self, a2);
  glwebtools::Mutex::Unlock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  return IsScheduled;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::Initialize  (binary VA: 0x13e9410)
// Original: glwebtools::TaskGroup::Initialize
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::TaskGroup::Initialize(glwebtools::TaskGroup::Self *self, const glwebtools::ThreadPool::CreationSettings::Self *a2)
{
  glwebtools::Self *v2;

  glwebtools::Mutex::Lock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  v2 = (glwebtools::Self *)glwebtools::ThreadPool::Initialize((glwebtools::TaskGroup::Self *)((char *)self + 8), a2);
  if ( glwebtools::IsOperationSuccess(v2) )
  {
    v2 = nullptr;
    glwebtools::TaskQueue::Clear(self);
    *((uint32_t *)self + 14) = 0;
  }
  glwebtools::Mutex::Unlock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::Terminate  (binary VA: 0x13e9490)
// Original: glwebtools::TaskGroup::Terminate
// ----------------------------------------------------------------------------
int glwebtools::TaskGroup::Terminate(glwebtools::TaskGroup::Self *self)
{
  glwebtools::Mutex::Lock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  glwebtools::ThreadPool::Terminate((glwebtools::TaskGroup::Self *)((char *)self + 8));
  glwebtools::TaskQueue::Clear(self);
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((glwebtools::TaskGroup::Self *)((char *)self + 48)));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::Destroy  (binary VA: 0x13e94f0)
// Original: glwebtools::TaskGroup::~TaskGroup
// ----------------------------------------------------------------------------
void glwebtools::TaskGroup::Destroy(glwebtools::TaskGroup::Self *self)
{
  glwebtools::TaskGroup::Self **v1;
  glwebtools::TaskGroup::Self *v2;

  glwebtools::TaskGroup::Terminate(self);
  glwebtools::Mutex::Destroy((glwebtools::TaskGroup::Self *)((char *)self + 48));
  glwebtools::ThreadPool::Destroy((glwebtools::TaskGroup::Self *)((char *)self + 8));
  v1 = *(glwebtools::TaskGroup::Self ***)self;
  if ( *(glwebtools::TaskGroup::Self **)self != self )
  {
    while ( 1 )
    {
      v2 = *v1;
      opDelete(v1);
      if ( v2 == self )
        break;
      v1 = (glwebtools::TaskGroup::Self **)v2;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::IsInitialized  (binary VA: 0x13e9550)
// Original: glwebtools::TaskGroup::IsInitialized
// ----------------------------------------------------------------------------
int glwebtools::TaskGroup::IsInitialized(glwebtools::TaskGroup::Self *self)
{
  uint8_t IsInitialized;

  glwebtools::Mutex::Lock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  IsInitialized = glwebtools::ThreadPool::IsInitialized((glwebtools::TaskGroup::Self *)((char *)self + 8));
  glwebtools::Mutex::Unlock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  return IsInitialized;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::Update  (binary VA: 0x13e95b0)
// Original: glwebtools::TaskGroup::Update
// ----------------------------------------------------------------------------
int glwebtools::TaskGroup::Update(glwebtools::TaskGroup::Self *self, uint64_t a2)
{
  int v2;
  bool v3;
  int v5;
  glwebtools::Self *v6;
  glwebtools::Self *v7;
  uint32_t *v8;
  void **v9;
  void **v10;
  void **v11;
  void **v12;
  typedef glwebtools::ThreadPool::Self *_g4_t_v13;
  typedef void *_g4_t_v14[2];
  typedef int _g4_t_v15[3];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v14)) > _g4_s1 ? (24u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v15)) > _g4_s2 ? (32u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v16)) > _g4_s3 ? (44u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v17)) > _g4_s4 ? (48u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v18)) > _g4_s5 ? (52u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v19)) > _g4_s6 ? (56u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v20)) > _g4_s7 ? (60u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  v2 = -2147483641;
  glwebtools::Mutex::Lock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  v13 = (glwebtools::ThreadPool::Self *)((glwebtools::TaskGroup::Self *)((char *)self + 8));
  if ( (uint8_t)glwebtools::ThreadPool::IsInitialized((glwebtools::TaskGroup::Self *)((char *)self + 8)) != 0 )
  {
    v3 = glwebtools::TaskQueue::Empty(self);
    v2 = glwebtools::ThreadPool::Update(v13, a2, v3);
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v2) )
    {
      v2 = 0;
      if ( !glwebtools::TaskQueue::Empty(self) )
      {
        v14[0] = v14;
        v14[1] = v14;
        v5 = glwebtools::ThreadPool::AvailableThreadCount(v13);
        if ( v5 != 0 )
        {
          while ( 1 )
          {
            glwebtools::Task::Construct((glwebtools::Task::Self *)&v16);
            v6 = (glwebtools::Self *)glwebtools::TaskQueue::PopTask(self, (glwebtools::Task::Self *)&v16);
            if ( !glwebtools::IsOperationSuccess(v6) )
              break;
            v15[0] = v16;
            v15[1] = v17;
            v15[2] = v18;
            if ( (uint8_t)glwebtools::Job::IsSet((glwebtools::Job::Self *)v15) != 0 )
            {
              v7 = (glwebtools::Self *)glwebtools::ThreadPool::Signal(v13, (const glwebtools::Job::Self *)v15);
              if ( !glwebtools::IsOperationSuccess(v7) )
              {
                v8 = (uint32_t *)opNew(0x1Cu);
                if ( v8 != (uint32_t *)-8 )
                {
                  v8[2] = v16;
                  v8[3] = v17;
                  v8[4] = v18;
                  v8[5] = v19;
                  v8[6] = v20;
                }
                sub_1901920(v8, v14);
              }
            }
            if ( !glwebtools::TaskQueue::Empty(self) && --v5 != 0 )
              continue;
            goto LABEL_15;
          }
          v11 = (void **)v14[0];
          v2 = (int)(uintptr_t)(v6);
          if ( v14[0] != v14 )
          {
            while ( 1 )
            {
              v12 = (void **)*v11;
              opDelete(v11);
              if ( v12 == v14 )
                break;
              v11 = v12;
            }
            v2 = (int)(uintptr_t)(v6);
          }
        }
        else
        {
LABEL_15:
          v2 = 0;
          if ( v14[0] != v14 )
          {
            glwebtools::TaskQueue::Reschedule((int *)self, (uint32_t *)v14[0], v14);
            v9 = (void **)v14[0];
            if ( v14[0] != v14 )
            {
              while ( 1 )
              {
                v10 = (void **)*v9;
                opDelete(v9);
                if ( v10 == v14 )
                  break;
                v9 = v10;
              }
              v2 = 0;
            }
          }
        }
      }
    }
  }
  glwebtools::Mutex::Unlock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::Size  (binary VA: 0x13e9800)
// Original: glwebtools::TaskGroup::Size
// ----------------------------------------------------------------------------
int glwebtools::TaskGroup::Size(glwebtools::TaskGroup::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  v1 = glwebtools::TaskQueue::Size(self);
  glwebtools::Mutex::Unlock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::Empty  (binary VA: 0x13e9850)
// Original: glwebtools::TaskGroup::Empty
// ----------------------------------------------------------------------------
bool glwebtools::TaskGroup::Empty(glwebtools::TaskGroup::Self *self)
{
  bool v2;

  glwebtools::Mutex::Lock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  v2 = glwebtools::TaskQueue::Empty(self);
  glwebtools::Mutex::Unlock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::Completed  (binary VA: 0x13e98b0)
// Original: glwebtools::TaskGroup::Completed
// ----------------------------------------------------------------------------
int glwebtools::TaskGroup::Completed(glwebtools::TaskGroup::Self *self)
{
  int v1;
  int v2;

  v1 = 0;
  glwebtools::Mutex::Lock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  if ( glwebtools::TaskQueue::Empty(self) )
  {
    v2 = glwebtools::ThreadPool::Idle((glwebtools::TaskGroup::Self *)((char *)self + 8));
    LOBYTE(v2) = (uint8_t)v2 != 0;
    v1 = v2;
  }
  glwebtools::Mutex::Unlock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskGroup::SomeThreadStarted  (binary VA: 0x13e9920)
// Original: glwebtools::TaskGroup::SomeThreadStarted
// ----------------------------------------------------------------------------
int glwebtools::TaskGroup::SomeThreadStarted(glwebtools::TaskGroup::Self *self)
{
  int v1;
  int v2;

  glwebtools::Mutex::Lock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  v1 = glwebtools::ThreadPool::StartedThreadCount((glwebtools::TaskGroup::Self *)((char *)self + 8));
  LOBYTE(v1) = v1 != 0;
  v2 = v1;
  glwebtools::Mutex::Unlock((glwebtools::TaskGroup::Self *)((char *)self + 48));
  return v2;
}


