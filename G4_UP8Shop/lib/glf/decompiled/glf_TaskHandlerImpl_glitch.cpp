#include "Core/Utils/DecompTypes.h"
#include "glf_TaskHandlerImpl_glitch.h"

// ----------------------------------------------------------------------------
// Function: glf::TaskHandlerImpl_SCENE_NODE_TASK_7a79e0::IsEquivalent  (binary VA: 0xcef230)
// Original: glf::TaskHandlerImpl<glitch::SCENE_NODE_TASK>::IsEquivalent
// ----------------------------------------------------------------------------
bool glf::TaskHandlerImpl_SCENE_NODE_TASK_7a79e0::IsEquivalent(int a1, int a2)
{
  int v2;

  v2 = G4_VCALL<int>(a1, 16);
  return v2 == G4_VCALL<int>(a2, 16);
}

// ----------------------------------------------------------------------------
// Function: glf::TaskHandlerImpl_SCENE_NODE_TASK_7a79e0::GetTaskManagerPtr  (binary VA: 0xcef9b0)
// Original: glf::TaskHandlerImpl<glitch::SCENE_NODE_TASK>::GetTaskManagerPtr
// ----------------------------------------------------------------------------
glf::TaskManager::Self * glf::TaskHandlerImpl_SCENE_NODE_TASK_7a79e0::GetTaskManagerPtr()
{
  glf::TaskManager::Self *result;
  glf::TaskManager::Self *v1;

  result = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
  if ( g4_fnstatic_0452fd96fc == 0 )
  {
    while ( __sync_val_compare_and_swap(&g4_fnstatic_e7b3943d0f, 0, 1) != 0 )
      glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
    result = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
    {
      v1 = (glf::TaskManager::Self *)opNew(0xE8u);
      glf::TaskManager::Construct(v1);
      _mm_mfence();
      result = v1;
      g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v1);
    }
    g4_fnstatic_e7b3943d0f = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskHandlerImpl_SCENE_NODE_TASK_7a79e0::AddCondition  (binary VA: 0xcefa60)
// Original: glf::TaskHandlerImpl<glitch::SCENE_NODE_TASK>::AddCondition
// ----------------------------------------------------------------------------
void glf::TaskHandlerImpl_SCENE_NODE_TASK_7a79e0::AddCondition(glf::TaskHandlerImpl<glitch::SCENE_NODE_TASK> *self, glf::TaskCondition::Self *a2)
{
  volatile int32_t **v2;
  glf::TaskManager::Self *v3;
  glf::TaskManager::Self *v4;
  glf::TaskManager::Self *v5;

  if ( a2 != nullptr )
  {
    v2 = (volatile int32_t **)g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
    {
      while ( __sync_val_compare_and_swap(&g4_fnstatic_e7b3943d0f, 0, 1) != 0 )
        glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
      v2 = (volatile int32_t **)g4_fnstatic_0452fd96fc;
      if ( g4_fnstatic_0452fd96fc == 0 )
      {
        v4 = (glf::TaskManager::Self *)opNew(0xE8u);
        glf::TaskManager::Construct(v4);
        _mm_mfence();
        v2 = (volatile int32_t **)v4;
        g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v4);
      }
      g4_fnstatic_e7b3943d0f = 0;
    }
    glf::TaskManager::AddTaskCondition(v2, a2);
    v3 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
    {
      while ( __sync_val_compare_and_swap(&g4_fnstatic_e7b3943d0f, 0, 1) != 0 )
        glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
      v3 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
      if ( g4_fnstatic_0452fd96fc == 0 )
      {
        v5 = (glf::TaskManager::Self *)opNew(0xE8u);
        glf::TaskManager::Construct(v5);
        _mm_mfence();
        v3 = v5;
        g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v5);
      }
      g4_fnstatic_e7b3943d0f = 0;
    }
    glf::TaskCondition::AddTaskManager(a2, v3);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::TaskHandlerImpl_SCENE_NODE_TASK_7a79e0::RemoveCondition  (binary VA: 0xcefb80)
// Original: glf::TaskHandlerImpl<glitch::SCENE_NODE_TASK>::RemoveCondition
// ----------------------------------------------------------------------------
void glf::TaskHandlerImpl_SCENE_NODE_TASK_7a79e0::RemoveCondition(glf::TaskHandlerImpl<glitch::SCENE_NODE_TASK> *self, glf::TaskCondition::Self *a2)
{
  volatile int32_t **v2;
  glf::TaskManager::Self *v3;
  glf::TaskManager::Self *v4;
  glf::TaskManager::Self *v5;

  if ( a2 != nullptr )
  {
    v2 = (volatile int32_t **)g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
    {
      while ( __sync_val_compare_and_swap(&g4_fnstatic_e7b3943d0f, 0, 1) != 0 )
        glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
      v2 = (volatile int32_t **)g4_fnstatic_0452fd96fc;
      if ( g4_fnstatic_0452fd96fc == 0 )
      {
        v4 = (glf::TaskManager::Self *)opNew(0xE8u);
        glf::TaskManager::Construct(v4);
        _mm_mfence();
        v2 = (volatile int32_t **)v4;
        g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v4);
      }
      g4_fnstatic_e7b3943d0f = 0;
    }
    glf::TaskManager::RemoveTaskCondition(v2, a2);
    v3 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
    {
      while ( __sync_val_compare_and_swap(&g4_fnstatic_e7b3943d0f, 0, 1) != 0 )
        glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
      v3 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
      if ( g4_fnstatic_0452fd96fc == 0 )
      {
        v5 = (glf::TaskManager::Self *)opNew(0xE8u);
        glf::TaskManager::Construct(v5);
        _mm_mfence();
        v3 = v5;
        g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v5);
      }
      g4_fnstatic_e7b3943d0f = 0;
    }
    glf::TaskCondition::RemoveTaskManager(a2, v3);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::TaskHandlerImpl_SCENE_NODE_TASK_7a79e0::Destroy  (binary VA: 0xcefe00)
// Original: glf::TaskHandlerImpl<glitch::SCENE_NODE_TASK>::~TaskHandlerImpl
// ----------------------------------------------------------------------------
void glf::TaskHandlerImpl_SCENE_NODE_TASK_7a79e0::Destroy(glf::TaskHandlerImpl<glitch::SCENE_NODE_TASK> *self)
{
  glf::TaskCondition::Self *v1;
  volatile int32_t **v2;
  glf::TaskManager::Self *v3;
  glf::TaskManager::Self *v4;
  glf::TaskManager::Self *v5;

  v1 = *((glf::TaskCondition::Self **)self + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206F108);
  if ( v1 != nullptr )
  {
    v2 = (volatile int32_t **)g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
    {
      while ( __sync_val_compare_and_swap(&g4_fnstatic_e7b3943d0f, 0, 1) != 0 )
        glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
      v2 = (volatile int32_t **)g4_fnstatic_0452fd96fc;
      if ( g4_fnstatic_0452fd96fc == 0 )
      {
        v4 = (glf::TaskManager::Self *)opNew(0xE8u);
        glf::TaskManager::Construct(v4);
        _mm_mfence();
        v2 = (volatile int32_t **)v4;
        g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v4);
      }
      g4_fnstatic_e7b3943d0f = 0;
    }
    glf::TaskManager::RemoveTaskCondition(v2, v1);
    v3 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
    {
      while ( __sync_val_compare_and_swap(&g4_fnstatic_e7b3943d0f, 0, 1) != 0 )
        glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
      v3 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
      if ( g4_fnstatic_0452fd96fc == 0 )
      {
        v5 = (glf::TaskManager::Self *)opNew(0xE8u);
        glf::TaskManager::Construct(v5);
        _mm_mfence();
        v3 = v5;
        g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v5);
      }
      g4_fnstatic_e7b3943d0f = 0;
    }
    glf::TaskCondition::RemoveTaskManager(v1, v3);
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059FC8);
}

// ----------------------------------------------------------------------------
// Function: glf::TaskHandlerImpl_SCENE_NODE_TASK_7a79e0::Destroy_eacf00a0  (binary VA: 0xcf00a0)
// Original: glf::TaskHandlerImpl<glitch::SCENE_NODE_TASK>::~TaskHandlerImpl
// ----------------------------------------------------------------------------
void glf::TaskHandlerImpl_SCENE_NODE_TASK_7a79e0::Destroy_eacf00a0(glf::TaskHandlerImpl<glitch::SCENE_NODE_TASK> *self)
{
  glf::TaskCondition::Self *v1;
  volatile int32_t **v2;
  glf::TaskManager::Self *v3;
  glf::TaskManager::Self *v4;
  glf::TaskManager::Self *v5;

  v1 = *((glf::TaskCondition::Self **)self + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206F108);
  if ( v1 != nullptr )
  {
    v2 = (volatile int32_t **)g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
    {
      while ( __sync_val_compare_and_swap(&g4_fnstatic_e7b3943d0f, 0, 1) != 0 )
        glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
      v2 = (volatile int32_t **)g4_fnstatic_0452fd96fc;
      if ( g4_fnstatic_0452fd96fc == 0 )
      {
        v4 = (glf::TaskManager::Self *)opNew(0xE8u);
        glf::TaskManager::Construct(v4);
        _mm_mfence();
        v2 = (volatile int32_t **)v4;
        g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v4);
      }
      g4_fnstatic_e7b3943d0f = 0;
    }
    glf::TaskManager::RemoveTaskCondition(v2, v1);
    v3 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
    {
      while ( __sync_val_compare_and_swap(&g4_fnstatic_e7b3943d0f, 0, 1) != 0 )
        glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
      v3 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
      if ( g4_fnstatic_0452fd96fc == 0 )
      {
        v5 = (glf::TaskManager::Self *)opNew(0xE8u);
        glf::TaskManager::Construct(v5);
        _mm_mfence();
        v3 = v5;
        g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v5);
      }
      g4_fnstatic_e7b3943d0f = 0;
    }
    glf::TaskCondition::RemoveTaskManager(v1, v3);
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2059FC8);
  opDelete(self);
}


