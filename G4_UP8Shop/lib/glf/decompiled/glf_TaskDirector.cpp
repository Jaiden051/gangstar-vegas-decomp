#include "Core/Utils/DecompTypes.h"
#include "glf_TaskDirector.h"

extern "C" uintptr_t g4_compat_map_int_list_index(void *map_ptr, const int *key_ptr);

// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_TaskDirector.cpp
// Library: glf | Module: glf_TaskDirector
// Binary Address Span: 0xcc3470 .. 0xcc3990 (12 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xcc3470 (size: 40 bytes)
// Symbol:    _ZN3glf12TaskDirectorC2Ev
// Demangled: glf::TaskDirector::TaskDirector(void)
// ============================================================================
// Alternative name is '_ZN3glf12TaskDirectorC1Ev'
struct glf::TaskDirector::Self *glf::TaskDirector::TaskDirector(glf::TaskDirector::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)((char *)self + 12);
  return self;
}
// ----------------------------------------------------------------------------
// Function: glf::TaskDirector::GetInstance  (binary VA: 0xcc34a0)
// Original: glf::TaskDirector::GetInstance
// ----------------------------------------------------------------------------
int glf::TaskDirector::GetInstance()
{
  int result;
  glf::TaskDirector::Self *v1;

  result = glf::TaskDirector::s_TaskDirectorInstance;
  if ( glf::TaskDirector::s_TaskDirectorInstance == 0 )
  {
    while ( __sync_val_compare_and_swap(glf::TaskDirector::s_Lock, 0, 1) != 0 )
      glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
    if ( glf::TaskDirector::s_TaskDirectorInstance == 0 )
    {
      v1 = (glf::TaskDirector::Self *)opNew(0x20u);
      glf::TaskDirector::TaskDirector(v1);
      _mm_mfence();
      glf::TaskDirector::s_TaskDirectorInstance = (uintptr_t)(uintptr_t)(v1);
    }
    _mm_mfence();
    glf::TaskDirector::s_Lock[0] = 0;
    return glf::TaskDirector::s_TaskDirectorInstance;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskDirector::CleanUp  (binary VA: 0xcc3550)
// Original: glf::TaskDirector::CleanUp
// ----------------------------------------------------------------------------
bool glf::TaskDirector::CleanUp(glf::TaskDirector::Self *self)
{
  glf::Thread::Self **v1;
  glf::Thread::Self *v2;
  glf::TaskDirector::Self *v3;
  glf::Thread::Self *v5;

  v1 = *(glf::Thread::Self ***)self;
  if ( *(glf::TaskDirector::Self **)self != self )
  {
    do
    {
      while ( glf::Thread::GetStatus(v1[2]) != 3 )
      {
        v1 = (glf::Thread::Self **)*v1;
        if ( self == (glf::TaskDirector::Self *)v1 )
          goto LABEL_8;
      }
      glf::Thread::Join((pthread_t *)v1[2]);
      v2 = v1[2];
      if ( v2 != nullptr )
        (*(void (**)(glf::Thread::Self *))(*(uint32_t *)v2 + 4))(v1[2]);
      v3 = (glf::TaskDirector::Self *)(*v1);
      sub_1901940(v1);
      v5 = (glf::Thread::Self *)v1;
      v1 = (glf::Thread::Self **)v3;
      opDelete(v5);
    }
    while ( self != v3 );
LABEL_8:
    v1 = *(glf::Thread::Self ***)self;
  }
  return v1 == (glf::Thread::Self **)self;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskDirector::StopThread  (binary VA: 0xcc35d0)
// Original: glf::TaskDirector::StopThread
// ----------------------------------------------------------------------------
bool glf::TaskDirector::StopThread(glf::TaskDirector::Self *a1, int a2, char a3)
{
  int v3;
  int v4;
  bool result;

  if ( *(int *)(a2 + 128) > 0 )
  {
    v3 = 0;
    do
    {
      glf::TaskThreadImpl::Stop(*(glf::TaskThreadImpl::Self **)(a2 + 4 * v3));
      v4 = opNew(0xCu);
      if ( v4 != -8 )
        *(uint32_t *)(v4 + 8) = *(uint32_t *)(a2 + 4 * v3);
      ++v3;
      sub_1901920(v4, a1);
    }
    while ( *(uint32_t *)(a2 + 128) > v3 );
  }
  *(uint32_t *)(a2 + 128) = 0;
  result = glf::TaskDirector::CleanUp(a1);
  if ( a3 != 0 && !result )
  {
    do
      result = glf::TaskDirector::CleanUp(a1);
    while ( !result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskDirector::RemoveUnused  (binary VA: 0xcc3680)
// Original: glf::TaskDirector::RemoveUnused
// ----------------------------------------------------------------------------
bool glf::TaskDirector::RemoveUnused(glf::TaskDirector::Self *self)
{
  return glf::TaskDirector::CleanUp(self);
}

// ----------------------------------------------------------------------------
// Function: glf::TaskDirector::IsEquivalentHandlerRegistered  (binary VA: 0xcc36b0)
// Original: glf::TaskDirector::IsEquivalentHandlerRegistered
// ----------------------------------------------------------------------------
int glf::TaskDirector::IsEquivalentHandlerRegistered(int a1, int a2)
{
  signed int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int **v6;
  int **v7;

  v2 = pthread_self();
  v3 = 0;
  v4 = *(uint32_t **)(a1 + 16);
  if ( v4 == nullptr )
    return v3;
  v5 = (uint32_t *)(a1 + 12);
  do
  {
    while ( v2 <= (int)v4[4] )
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
  v3 = 0;
  if ( (uint32_t *)(a1 + 12) == v5 )
    return v3;
  if ( v2 < (int)v5[4] )
    return v3;
  v6 = (int **)v5[5];
  v7 = (int **)(v5 + 5);
  if ( v6 == v7 )
    return v3;
  do
  {
    if ( (*(uint8_t (**)(int *, int))(*v6[2] + 12))(v6[2], a2) != 0 )
      return 1;
    v6 = (int **)*v6;
  }
  while ( v7 != v6 );
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskDirector::RemoveContitionFromRegisteredHandler  (binary VA: 0xcc3750)
// Original: glf::TaskDirector::RemoveContitionFromRegisteredHandler
// ----------------------------------------------------------------------------
uint32_t * glf::TaskDirector::RemoveContitionFromRegisteredHandler(glf::TaskDirector::Self *self, glf::TaskCondition::Self *a2)
{
  uint32_t *result;
  uint32_t *v3;
  uint32_t *v4;
  int v5[8];

  v5[0] = pthread_self();
  result = (uint32_t *)g4_compat_map_int_list_index(
                       (char *)self + 8,
                       v5);
  v3 = (uint32_t *)*result;
  v4 = result;
  if ( (uint32_t *)*result != result )
  {
    do
    {
      result = (uint32_t *)G4_VCALL<int>(v3[2], 24, a2);
      v3 = (uint32_t *)*v3;
    }
    while ( v4 != v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskDirector::AddContitionToRegisteredHandler  (binary VA: 0xcc37b0)
// Original: glf::TaskDirector::AddContitionToRegisteredHandler
// ----------------------------------------------------------------------------
uint32_t * glf::TaskDirector::AddContitionToRegisteredHandler(glf::TaskDirector::Self *self, glf::TaskCondition::Self *a2)
{
  uint32_t *result;
  uint32_t *v3;
  uint32_t *v4;
  int v5[8];

  v5[0] = pthread_self();
  result = (uint32_t *)g4_compat_map_int_list_index(
                       (char *)self + 8,
                       v5);
  v3 = (uint32_t *)*result;
  v4 = result;
  if ( (uint32_t *)*result != result )
  {
    do
    {
      result = (uint32_t *)G4_VCALL<int>(v3[2], 20, a2);
      v3 = (uint32_t *)*v3;
    }
    while ( v4 != v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskDirector::ConsumeRegisteredHandler  (binary VA: 0xcc3810)
// Original: glf::TaskDirector::ConsumeRegisteredHandler
// ----------------------------------------------------------------------------
int glf::TaskDirector::ConsumeRegisteredHandler(glf::TaskDirector::Self *self)
{
  int v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int v7[8];

  v1 = 0;
  v7[0] = pthread_self();
  v2 = (uint32_t *)g4_compat_map_int_list_index(
                   (char *)self + 8,
                   v7);
  v3 = (uint32_t *)*v2;
  v4 = v2;
  if ( (uint32_t *)*v2 != v2 )
  {
    do
    {
      v5 = G4_VCALL<int>(v3[2], 8);
      v3 = (uint32_t *)*v3;
      v1 |= v5;
    }
    while ( v4 != v3 );
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glf::TaskDirector::UnregisterHandler  (binary VA: 0xcc3870)
// Original: glf::TaskDirector::UnregisterHandler
// ----------------------------------------------------------------------------
void glf::TaskDirector::UnregisterHandler(int a1, int a2, int a3)
{
  uint32_t **v3;
  uint32_t *v4;
  uint32_t **v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t **v9;

  v3 = (uint32_t **)g4_compat_map_int_list_index(
                    (void *)(uintptr_t)(a1 + 8),
                    &a3);
  v4 = *v3;
  v5 = v3;
  if ( *v3 != (uint32_t *)(v3) )
  {
    v6 = a2;
    v9 = v5;
    while ( 1 )
    {
      v7 = (uint32_t *)*v4;
      if ( v4[2] != v6 )
        goto LABEL_3;
      if ( &a2 == (int *)(v4 + 2) )
        break;
      v8 = v6;
      sub_1901940(v4);
      opDelete(v4);
      v6 = v8;
      if ( v5 == (uint32_t **)(v7) )
      {
LABEL_8:
        if ( v5 != v9 )
        {
          sub_1901940(v9);
          opDelete(v9);
        }
        return;
      }
LABEL_4:
      v4 = v7;
    }
    v9 = (uint32_t **)v4;
LABEL_3:
    if ( v5 == (uint32_t **)(v7) )
      goto LABEL_8;
    goto LABEL_4;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::TaskDirector::RegisterHandler  (binary VA: 0xcc3920)
// Original: glf::TaskDirector::RegisterHandler
// ----------------------------------------------------------------------------
int glf::TaskDirector::RegisterHandler(int a1, int a2, ...)
{
  int v2;
  int v3;
  va_list va;

  va_start(va, a2);
  int va_key = va_arg(va, int);
  va_end(va);
  v2 = (int)g4_compat_map_int_list_index(
         (void *)(uintptr_t)(a1 + 8),
         &va_key);
  v3 = opNew(0xCu);
  if ( v3 != -8 )
    *(uint32_t *)(v3 + 8) = a2;
  return sub_1901920(v3, v2);
}

// ----------------------------------------------------------------------------
// Function: glf::TaskDirector::Destroy  (binary VA: 0xcc3990)
// Original: glf::TaskDirector::~TaskDirector
// ----------------------------------------------------------------------------
void glf::TaskDirector::Destroy(glf::TaskDirector::Self *self)
{
  int v1;
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
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  glf::TaskDirector::Self *v28;
  glf::TaskDirector::Self *v29;
  int v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;

  v32 = *((uint32_t **)self + 4);
  if ( v32 != nullptr )
  {
    while ( 1 )
    {
      v33 = (uint32_t *)v32[3];
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
                          v38 = (uint32_t *)v37[3];
                          if ( v38 != nullptr )
                          {
                            while ( 1 )
                            {
                              v31 = (uint32_t *)v38[3];
                              if ( v31 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v1 = v31[3];
                                  if ( v1 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      std::_Rb_tree<long,std::pair<long const,std::list<glf::TaskHandlerBase::Self *>>,std::_Select1st<std::pair<long const,std::list<glf::TaskHandlerBase::Self *>>>,std::less<long>,std::allocator<std::pair<long const,std::list<glf::TaskHandlerBase::Self *>>>>::_M_erase(
                                        (int)(uintptr_t)(self) + 8,
                                        *(void **)(v1 + 12));
                                      v2 = *(uint32_t **)(v1 + 20);
                                      v30 = *(uint32_t *)(v1 + 8);
                                      if ( v2 != (uint32_t *)(v1 + 20) )
                                      {
                                        while ( 1 )
                                        {
                                          v3 = (uint32_t *)*v2;
                                          opDelete(v2);
                                          if ( v3 == (uint32_t *)(v1 + 20) )
                                            break;
                                          v2 = v3;
                                        }
                                      }
                                      opDelete((void *)v1);
                                      if ( v30 == 0 )
                                        break;
                                      v1 = v30;
                                    }
                                  }
                                  v4 = (uint32_t *)v31[2];
                                  v5 = (uint32_t *)v31[5];
                                  if ( v5 != v31 + 5 )
                                  {
                                    while ( 1 )
                                    {
                                      v6 = (uint32_t *)*v5;
                                      opDelete(v5);
                                      if ( v6 == v31 + 5 )
                                        break;
                                      v5 = v6;
                                    }
                                  }
                                  opDelete(v31);
                                  if ( v4 == nullptr )
                                    break;
                                  v31 = v4;
                                }
                              }
                              v7 = (uint32_t *)v38[5];
                              v8 = (uint32_t *)v38[2];
                              if ( v7 != v38 + 5 )
                              {
                                while ( 1 )
                                {
                                  v9 = (uint32_t *)*v7;
                                  opDelete(v7);
                                  if ( v9 == v38 + 5 )
                                    break;
                                  v7 = v9;
                                }
                              }
                              opDelete(v38);
                              if ( v8 == nullptr )
                                break;
                              v38 = v8;
                            }
                          }
                          v10 = (uint32_t *)v37[5];
                          v11 = (uint32_t *)v37[2];
                          if ( v10 != v37 + 5 )
                          {
                            while ( 1 )
                            {
                              v12 = (uint32_t *)*v10;
                              opDelete(v10);
                              if ( v12 == v37 + 5 )
                                break;
                              v10 = v12;
                            }
                          }
                          opDelete(v37);
                          if ( v11 == nullptr )
                            break;
                          v37 = v11;
                        }
                      }
                      v13 = (uint32_t *)v36[5];
                      v14 = (uint32_t *)v36[2];
                      if ( v13 != v36 + 5 )
                      {
                        while ( 1 )
                        {
                          v15 = (uint32_t *)*v13;
                          opDelete(v13);
                          if ( v15 == v36 + 5 )
                            break;
                          v13 = v15;
                        }
                      }
                      opDelete(v36);
                      if ( v14 == nullptr )
                        break;
                      v36 = v14;
                    }
                  }
                  v16 = (uint32_t *)v35[5];
                  v17 = (uint32_t *)v35[2];
                  if ( v16 != v35 + 5 )
                  {
                    while ( 1 )
                    {
                      v18 = (uint32_t *)*v16;
                      opDelete(v16);
                      if ( v18 == v35 + 5 )
                        break;
                      v16 = v18;
                    }
                  }
                  opDelete(v35);
                  if ( v17 == nullptr )
                    break;
                  v35 = v17;
                }
              }
              v19 = (uint32_t *)v34[5];
              v20 = (uint32_t *)v34[2];
              if ( v19 != v34 + 5 )
              {
                while ( 1 )
                {
                  v21 = (uint32_t *)*v19;
                  opDelete(v19);
                  if ( v21 == v34 + 5 )
                    break;
                  v19 = v21;
                }
              }
              opDelete(v34);
              if ( v20 == nullptr )
                break;
              v34 = v20;
            }
          }
          v22 = (uint32_t *)v33[5];
          v23 = (uint32_t *)v33[2];
          if ( v22 != v33 + 5 )
          {
            while ( 1 )
            {
              v24 = (uint32_t *)*v22;
              opDelete(v22);
              if ( v24 == v33 + 5 )
                break;
              v22 = v24;
            }
          }
          opDelete(v33);
          if ( v23 == nullptr )
            break;
          v33 = v23;
        }
      }
      v25 = (uint32_t *)v32[5];
      v26 = (uint32_t *)v32[2];
      if ( v25 != v32 + 5 )
      {
        while ( 1 )
        {
          v27 = (uint32_t *)*v25;
          opDelete(v25);
          if ( v27 == v32 + 5 )
            break;
          v25 = v27;
        }
      }
      opDelete(v32);
      if ( v26 == nullptr )
        break;
      v32 = v26;
    }
  }
  v28 = *(glf::TaskDirector::Self **)self;
  if ( *(glf::TaskDirector::Self **)self != self )
  {
    while ( 1 )
    {
      v29 = *(glf::TaskDirector::Self **)v28;
      opDelete(v28);
      if ( v29 == self )
        break;
      v28 = v29;
    }
  }
}


