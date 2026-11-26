#include "Core/Utils/DecompTypes.h"
#include "glf_TaskGroupScope.h"

// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_TaskGroupScope.cpp
// Library: glf | Module: glf_TaskGroupScope
// Binary Address Span: 0xcc4bc0 .. 0xcc5000 (9 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xcc4bc0 (size: 15 bytes)
// Symbol:    _ZN3glf14TaskGroupScopeC2Ev
// Demangled: glf::TaskGroupScope::TaskGroupScope(void)
// ============================================================================
// Alternative name is '_ZN3glf14TaskGroupScopeC1Ev'
struct glf::TaskGroupScope::Self *glf::TaskGroupScope::TaskGroupScope(glf::TaskGroupScope::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glf::TaskGroupScope::Destroy  (binary VA: 0xcc4bd0)
// Original: glf::TaskGroupScope::~TaskGroupScope
// ----------------------------------------------------------------------------
void glf::TaskGroupScope::Destroy(glf::TaskCondition::Self **self)
{
  glf::TaskCondition::Self *v1;
  glf::TaskCondition::Self *v2;
  glf::TaskCondition::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  glf::TaskCondition::Self *v8;
  glf::TaskCondition::Self *v9;
  glf::TaskCondition::Self *v10;

  v1 = *self;
  v10 = *self;
  if ( *self != nullptr )
  {
    v2 = *self;
    if ( __sync_fetch_and_add((volatile int32_t *)v1 + 10, 0xFFFFFFFF) == 1 )
    {
      v3 = *((glf::TaskCondition::Self **)v1 + 13);
      v8 = *((glf::TaskCondition::Self **)v2 + 13);
      if ( v3 != nullptr )
      {
        while ( 1 )
        {
          v9 = *((glf::TaskCondition::Self **)v3 + 14);
          if ( __sync_fetch_and_add((volatile int32_t *)v8 + 10, 0xFFFFFFFF) == 1 )
          {
            v4 = *((uint32_t *)v8 + 13);
            if ( v4 != 0 )
            {
              while ( 1 )
              {
                v7 = *(uint32_t *)(v4 + 56);
                if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 40), 0xFFFFFFFF) == 1 )
                {
                  v5 = *(uint32_t *)(v4 + 52);
                  if ( v5 != 0 )
                  {
                    while ( 1 )
                    {
                      v6 = *(uint32_t *)(v5 + 56);
                      if ( __sync_fetch_and_add((volatile int32_t *)(v5 + 40), 0xFFFFFFFF) == 1 )
                      {
                        glf::task_detail::Group::Destroy((glf::task_detail::Group::Self *)v5);
                        glf::freeEphemeralAllocation((glf::Self *)v5);
                      }
                      if ( v6 == 0 )
                        break;
                      v5 = v6;
                    }
                  }
                  glf::TaskCondition::Destroy((glf::TaskCondition::Self *)v4);
                  glf::freeEphemeralAllocation((glf::Self *)v4);
                }
                if ( v7 == 0 )
                  break;
                v4 = v7;
              }
            }
            glf::TaskCondition::Destroy(v8);
            glf::freeEphemeralAllocation(v8);
          }
          if ( v9 == nullptr )
            break;
          v8 = v9;
          v3 = v9;
        }
      }
      glf::TaskCondition::Destroy(v10);
      glf::freeEphemeralAllocation(v10);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glf::TaskGroupScope::Push  (binary VA: 0xcc4d10)
// Original: glf::TaskGroupScope::Push
// ----------------------------------------------------------------------------
int glf::TaskGroupScope::Push(glf::TaskGroupScope::Self *self)
{
  int v1;
  int Group;
  int *EphemeralAllocation;

  v1 = *(uint32_t *)self;
  if ( *(uint32_t *)self == 0 )
  {
    EphemeralAllocation = glf::allocateEphemeralAllocation((glf::Self *)off_3C);
    glf::TaskCondition::Construct((glf::TaskCondition::Self *)EphemeralAllocation);
    EphemeralAllocation[10] = 0;
    EphemeralAllocation[11] = 0;
    EphemeralAllocation[12] = 0;
    EphemeralAllocation[13] = 0;
    EphemeralAllocation[14] = 0;
    *(uint32_t *)self = (uint32_t)(uintptr_t)(EphemeralAllocation);
    __sync_add_and_fetch(EphemeralAllocation + 10, 1u);
    v1 = *(uint32_t *)self;
  }
  Group = glf::task_detail::GetGroup();
  if ( Group != 0 )
  {
    *(uint32_t *)(v1 + 48) = Group;
    *(uint32_t *)(v1 + 56) = *(uint32_t *)(Group + 52);
    *(uint32_t *)(Group + 52) = v1;
    __sync_add_and_fetch((volatile int32_t *)(v1 + 40), 1u);
  }
  __sync_add_and_fetch((volatile int32_t *)(v1 + 40), 1u);
  return glf::task_detail::SetGroup((glf::task_detail::Self *)v1);
}

// ----------------------------------------------------------------------------
// Function: glf::TaskGroupScope::Pop  (binary VA: 0xcc4dc0)
// Original: glf::TaskGroupScope::Pop
// ----------------------------------------------------------------------------
int32_t glf::TaskGroupScope::Pop()
{
  uint32_t *Value;
  int32_t result;
  glf::TaskCondition::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  glf::TaskCondition::Self *v7;
  glf::TaskCondition::Self *v8;
  glf::TaskCondition::Self *Group;

  Group = (glf::TaskCondition::Self *)glf::task_detail::GetGroup();
  Value = (uint32_t *)(glf::TlsNode::GetValue((glf::TlsNode::Self *)&dword_20DF6E0, true));
  result = *(uint32_t *)(glf::task_detail::GetGroup() + 48);
  *Value = result;
  if ( Group != nullptr )
  {
    result = __sync_fetch_and_add((volatile int32_t *)Group + 10, 0xFFFFFFFF);
    if ( result == 1 )
    {
      v2 = *((glf::TaskCondition::Self **)Group + 13);
      v7 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v8 = *((glf::TaskCondition::Self **)v2 + 14);
          if ( __sync_fetch_and_add((volatile int32_t *)v7 + 10, 0xFFFFFFFF) == 1 )
          {
            v3 = *((uint32_t *)v7 + 13);
            if ( v3 != 0 )
            {
              while ( 1 )
              {
                v6 = *(uint32_t *)(v3 + 56);
                if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 40), 0xFFFFFFFF) == 1 )
                {
                  v4 = *(uint32_t *)(v3 + 52);
                  if ( v4 != 0 )
                  {
                    while ( 1 )
                    {
                      v5 = *(uint32_t *)(v4 + 56);
                      if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 40), 0xFFFFFFFF) == 1 )
                      {
                        glf::task_detail::Group::Destroy((glf::task_detail::Group::Self *)v4);
                        glf::freeEphemeralAllocation((glf::Self *)v4);
                      }
                      if ( v5 == 0 )
                        break;
                      v4 = v5;
                    }
                  }
                  glf::TaskCondition::Destroy((glf::TaskCondition::Self *)v3);
                  glf::freeEphemeralAllocation((glf::Self *)v3);
                }
                if ( v6 == 0 )
                  break;
                v3 = v6;
              }
            }
            glf::TaskCondition::Destroy(v7);
            glf::freeEphemeralAllocation(v7);
          }
          if ( v8 == nullptr )
            break;
          v7 = v8;
          v2 = v8;
        }
      }
      glf::TaskCondition::Destroy(Group);
      return glf::freeEphemeralAllocation(Group);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskGroupScope::GetGroup  (binary VA: 0xcc4f20)
// Original: glf::TaskGroupScope::GetGroup
// ----------------------------------------------------------------------------
int glf::TaskGroupScope::GetGroup(glf::TaskGroupScope::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskGroupScope::HasPendingTask  (binary VA: 0xcc4f30)
// Original: glf::TaskGroupScope::HasPendingTask
// ----------------------------------------------------------------------------
bool glf::TaskGroupScope::HasPendingTask(glf::TaskGroupScope::Self *self, glf::task_detail::Group::Self *a2)
{
  bool result;
  int v3;

  result = false;
  if ( a2 != nullptr )
  {
    v3 = *((uint32_t *)a2 + 11);
    _mm_mfence();
    return v3 != 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskGroupScope::HasPendingTask  (binary VA: 0xcc4f50)
// Original: glf::TaskGroupScope::HasPendingTask
// ----------------------------------------------------------------------------
bool glf::TaskGroupScope::HasPendingTask(glf::TaskGroupScope::Self *self)
{
  return glf::TaskGroupScope::HasPendingTask(self, *(glf::task_detail::Group::Self **)self);
}

// ----------------------------------------------------------------------------
// Function: glf::TaskGroupScope::WaitAndConsumeRegisteredHandler  (binary VA: 0xcc4f80)
// Original: glf::TaskGroupScope::WaitAndConsumeRegisteredHandler
// ----------------------------------------------------------------------------
bool glf::TaskGroupScope::WaitAndConsumeRegisteredHandler(glf::TaskGroupScope::Self *self)
{
  glf::TaskCondition::Self *i;
  glf::TaskDirector::Self *Instance;
  glf::TaskDirector::Self *v3;
  glf::TaskDirector::Self *v4;
  bool result;

  for ( i = (glf::TaskCondition::Self *)glf::TaskGroupScope::GetGroup(self);
        ;
        glf::TaskDirector::RemoveContitionFromRegisteredHandler(v4, i) )
  {
    result = glf::TaskGroupScope::HasPendingTask(self, i);
    if ( !result )
      break;
    Instance = (glf::TaskDirector::Self *)glf::TaskDirector::GetInstance();
    glf::TaskDirector::AddContitionToRegisteredHandler(Instance, i);
    v3 = (glf::TaskDirector::Self *)glf::TaskDirector::GetInstance();
    glf::TaskDirector::ConsumeRegisteredHandler(v3);
    glf::TaskCondition::Wait(i);
    v4 = (glf::TaskDirector::Self *)glf::TaskDirector::GetInstance();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskGroupScope::Wait  (binary VA: 0xcc5000)
// Original: glf::TaskGroupScope::Wait
// ----------------------------------------------------------------------------
bool glf::TaskGroupScope::Wait(glf::TaskGroupScope::Self *self)
{
  glf::TaskCondition::Self *i;
  bool result;

  for ( i = (glf::TaskCondition::Self *)glf::TaskGroupScope::GetGroup(self); ; glf::TaskCondition::Wait(i) )
  {
    result = glf::TaskGroupScope::HasPendingTask(self, i);
    if ( !result )
      break;
  }
  return result;
}


