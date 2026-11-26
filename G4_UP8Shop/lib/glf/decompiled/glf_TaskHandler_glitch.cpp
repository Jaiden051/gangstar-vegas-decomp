#include "Core/Utils/DecompTypes.h"
#include "glf_TaskHandler_glitch.h"

// ----------------------------------------------------------------------------
// Function: glf::TaskHandler_SCENE_NODE_TASK_1597f6::Consume  (binary VA: 0xcef8a0)
// Original: glf::TaskHandler<glitch::SCENE_NODE_TASK>::Consume
// ----------------------------------------------------------------------------
int glf::TaskHandler_SCENE_NODE_TASK_1597f6::Consume(glf::TaskHandler<glitch::SCENE_NODE_TASK> *self)
{
  int32_t v2;
  int v3;
  glf::task_detail::Self **v4;
  glf::TaskManager::Self *v6;
  char v7;
  int64_t v8; // 0:esi.4,4:edi.4

  v8 = *((uint64_t *)self + 2) + glf::GetMicroseconds();
  while ( 1 )
  {
    v2 = g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
      break;
    v3 = glf::TaskManager::Pop(g4_fnstatic_0452fd96fc);
    v4 = (glf::task_detail::Self **)v3;
    if ( v3 == 0 )
      return 0;
LABEL_4:
    v7 = *(uint8_t *)(v3 + 24);
    glf::Task::Start(v4);
    if ( v7 != 0 )
      (*((void (**)(glf::task_detail::Self **))*v4 + 1))(v4);
    if ( v8 <= glf::GetMicroseconds() )
      return 1;
  }
  while ( __sync_val_compare_and_swap(&g4_fnstatic_e7b3943d0f, v2, 1) != 0 )
    glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
  v6 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
  if ( g4_fnstatic_0452fd96fc == 0 )
  {
    v6 = (glf::TaskManager::Self *)opNew(0xE8u);
    glf::TaskManager::Construct(v6);
    _mm_mfence();
    g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v6);
  }
  g4_fnstatic_e7b3943d0f = 0;
  v3 = glf::TaskManager::Pop(v6);
  v4 = (glf::task_detail::Self **)v3;
  if ( v3 != 0 )
    goto LABEL_4;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskHandler_SCENE_NODE_TASK_1597f6::Destroy  (binary VA: 0xcefca0)
// Original: glf::TaskHandler<glitch::SCENE_NODE_TASK>::~TaskHandler
// ----------------------------------------------------------------------------
void glf::TaskHandler_SCENE_NODE_TASK_1597f6::Destroy(glf::TaskHandler<glitch::SCENE_NODE_TASK> *self)
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

// ----------------------------------------------------------------------------
// Function: glf::TaskHandler_SCENE_NODE_TASK_1597f6::Destroy_eaceff50  (binary VA: 0xceff50)
// Original: glf::TaskHandler<glitch::SCENE_NODE_TASK>::~TaskHandler
// ----------------------------------------------------------------------------
void glf::TaskHandler_SCENE_NODE_TASK_1597f6::Destroy_eaceff50(glf::TaskHandler<glitch::SCENE_NODE_TASK> *self)
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


