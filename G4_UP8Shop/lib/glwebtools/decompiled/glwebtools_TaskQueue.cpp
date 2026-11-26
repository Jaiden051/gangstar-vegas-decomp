#include "Core/Utils/DecompTypes.h"
#include "glwebtools_TaskQueue.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskQueue::PushTask  (binary VA: 0x13e8f40)
// Original: glwebtools::TaskQueue::PushTask
// ----------------------------------------------------------------------------
int glwebtools::TaskQueue::PushTask(glwebtools::TaskQueue::Self *self, const glwebtools::Task::Self *a2)
{
  glwebtools::TaskQueue::Self *v2;
  int v3;
  uint32_t *v4;

  v2 = *(glwebtools::TaskQueue::Self **)self;
  if ( *(glwebtools::TaskQueue::Self **)self != self )
  {
    v3 = *((uint32_t *)a2 + 4);
    if ( v3 <= *((uint32_t *)v2 + 6) )
    {
      do
        v2 = *(glwebtools::TaskQueue::Self **)v2;
      while ( self != v2 && v3 <= *((uint32_t *)v2 + 6) );
    }
  }
  v4 = (uint32_t *)opNew(0x1Cu);
  if ( v4 != (uint32_t *)-8 )
  {
    v4[2] = *(uint32_t *)a2;
    v4[3] = *((uint32_t *)a2 + 1);
    v4[4] = *((uint32_t *)a2 + 2);
    v4[5] = *((uint32_t *)a2 + 3);
    v4[6] = *((uint32_t *)a2 + 4);
  }
  sub_1901920(v4, v2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskQueue::Reschedule  (binary VA: 0x13e8fc0)
// Original: glwebtools::TaskQueue::Reschedule
// ----------------------------------------------------------------------------
int glwebtools::TaskQueue::Reschedule(int *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  void **v5;
  void **v6;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  v3 = a2;
  v9[0] = v9;
  v9[1] = v9;
  v8 = *a1;
  if ( a3 != a2 )
  {
    do
    {
      v4 = (uint32_t *)opNew(0x1Cu);
      if ( v4 != (uint32_t *)-8 )
      {
        v4[2] = v3[2];
        v4[3] = v3[3];
        v4[4] = v3[4];
        v4[5] = v3[5];
        v4[6] = v3[6];
      }
      sub_1901920(v4, v9);
      v3 = (uint32_t *)*v3;
    }
    while ( v3 != a3 );
    if ( v9[0] != v9 )
    {
      sub_19018A0(v8, v9[0], v9);
      v5 = (void **)v9[0];
      if ( v9[0] != v9 )
      {
        while ( 1 )
        {
          v6 = (void **)*v5;
          opDelete(v5);
          if ( v6 == v9 )
            break;
          v5 = v6;
        }
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskQueue::PopTask  (binary VA: 0x13e9080)
// Original: glwebtools::TaskQueue::PopTask
// ----------------------------------------------------------------------------
int glwebtools::TaskQueue::PopTask(glwebtools::TaskQueue::Self *self, glwebtools::Task::Self *a2)
{
  glwebtools::TaskQueue::Self *v2;
  glwebtools::TaskQueue::Self *v3;
  glwebtools::TaskQueue::Self *v4;

  v2 = *(glwebtools::TaskQueue::Self **)self;
  if ( self != *(glwebtools::TaskQueue::Self **)self )
  {
    v3 = *(glwebtools::TaskQueue::Self **)self;
    do
      v3 = *(glwebtools::TaskQueue::Self **)v3;
    while ( self != v3 );
    *(uint32_t *)a2 = *((uint32_t *)v2 + 2);
    *((uint32_t *)a2 + 1) = *((uint32_t *)v2 + 3);
    *((uint32_t *)a2 + 2) = *((uint32_t *)v2 + 4);
    *((uint32_t *)a2 + 3) = *((uint32_t *)v2 + 5);
    *((uint32_t *)a2 + 4) = *((uint32_t *)v2 + 6);
    v4 = *(glwebtools::TaskQueue::Self **)self;
    sub_1901940(*(uint32_t *)self);
    opDelete(v4);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskQueue::RemoveTask  (binary VA: 0x13e90f0)
// Original: glwebtools::TaskQueue::RemoveTask
// ----------------------------------------------------------------------------
int glwebtools::TaskQueue::RemoveTask(glwebtools::TaskQueue::Self *self, unsigned int a2)
{
  int result;
  glwebtools::TaskQueue::Self *v3;

  result = -2147483631;
  v3 = *(glwebtools::TaskQueue::Self **)self;
  if ( *(glwebtools::TaskQueue::Self **)self != self )
  {
    do
    {
      if ( a2 == *((uint32_t *)v3 + 5) )
      {
        sub_1901940(v3);
        opDelete(v3);
        return 0;
      }
      v3 = *(glwebtools::TaskQueue::Self **)v3;
    }
    while ( v3 != self );
    return -2147483631;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskQueue::IsScheduled  (binary VA: 0x13e9150)
// Original: glwebtools::TaskQueue::IsScheduled
// ----------------------------------------------------------------------------
int glwebtools::TaskQueue::IsScheduled(glwebtools::TaskQueue::Self *self, unsigned int a2)
{
  int result;
  glwebtools::TaskQueue::Self *v3;

  result = 0;
  v3 = *(glwebtools::TaskQueue::Self **)self;
  if ( *(glwebtools::TaskQueue::Self **)self != self )
  {
    result = 1;
    if ( a2 != *((uint32_t *)v3 + 5) )
    {
      do
      {
        v3 = *(glwebtools::TaskQueue::Self **)v3;
        if ( v3 == self )
          return 0;
      }
      while ( a2 != *((uint32_t *)v3 + 5) );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskQueue::Clear  (binary VA: 0x13e9190)
// Original: glwebtools::TaskQueue::Clear
// ----------------------------------------------------------------------------
void glwebtools::TaskQueue::Clear(glwebtools::TaskQueue::Self *self)
{
  glwebtools::TaskQueue::Self *v1;
  glwebtools::TaskQueue::Self *v2;

  v1 = *(glwebtools::TaskQueue::Self **)self;
  if ( *(glwebtools::TaskQueue::Self **)self != self )
  {
    while ( 1 )
    {
      v2 = *(glwebtools::TaskQueue::Self **)v1;
      opDelete(v1);
      if ( v2 == self )
        break;
      v1 = v2;
    }
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskQueue::Size  (binary VA: 0x13e91d0)
// Original: glwebtools::TaskQueue::Size
// ----------------------------------------------------------------------------
int glwebtools::TaskQueue::Size(glwebtools::TaskQueue::Self *self)
{
  int result;
  glwebtools::TaskQueue::Self *i;

  result = 0;
  for ( i = *(glwebtools::TaskQueue::Self **)self; self != i; ++result )
    i = *(glwebtools::TaskQueue::Self **)i;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::TaskQueue::Empty  (binary VA: 0x13e91f0)
// Original: glwebtools::TaskQueue::Empty
// ----------------------------------------------------------------------------
bool glwebtools::TaskQueue::Empty(glwebtools::TaskQueue::Self *self)
{
  return *(uint32_t *)self == (uint32_t)(uintptr_t)(self);
}


