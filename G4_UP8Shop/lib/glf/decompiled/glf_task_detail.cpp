#include "Core/Utils/DecompTypes.h"
#include "glf_task_detail.h"

// ----------------------------------------------------------------------------
// Function: glf::task_detail::GetGroup  (binary VA: 0xcc4940)
// Original: glf::task_detail::GetGroup
// ----------------------------------------------------------------------------
int glf::task_detail::GetGroup()
{
  return *(uint32_t *)glf::TlsNode::GetValue((glf::TlsNode::Self *)&dword_20DF6E0, true);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::SetGroup  (binary VA: 0xcc4970)
// Original: glf::task_detail::SetGroup
// ----------------------------------------------------------------------------
int glf::task_detail::SetGroup(glf::task_detail::Self *self)
{
  int *Value;
  int result;

  Value = (int *)glf::TlsNode::GetValue((glf::TlsNode::Self *)&dword_20DF6E0, true);
  result = *Value;
  *Value = (int)(uintptr_t)(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::GrabGroup  (binary VA: 0xcc49b0)
// Original: glf::task_detail::GrabGroup
// ----------------------------------------------------------------------------
int glf::task_detail::GrabGroup()
{
  int Group;
  int v1;
  int i;

  Group = glf::task_detail::GetGroup();
  v1 = Group;
  if ( Group != 0 )
  {
    for ( i = Group; i != 0; i = *(uint32_t *)(i + 48) )
    {
      __sync_add_and_fetch((volatile int32_t *)(i + 40), 1u);
      if ( __sync_fetch_and_add((volatile int32_t *)(i + 44), 1u) != 0 )
        break;
      glf::TaskCondition::Start((glf::TaskCondition::Self *)i);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::DropGroup  (binary VA: 0xcc4a10)
// Original: glf::task_detail::DropGroup
// ----------------------------------------------------------------------------
glf::TaskCondition::Self * glf::task_detail::DropGroup(glf::TaskCondition::Self *a1)
{
  glf::TaskCondition::Self *result;
  glf::TaskCondition::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  glf::TaskCondition::Self *v7;
  glf::TaskCondition::Self *v8;

  result = a1;
  if ( a1 != nullptr )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)a1 + 11, 0xFFFFFFFF) == 1 )
    {
      glf::TaskCondition::Stop(a1);
      if ( *((uint32_t *)a1 + 12) != 0 )
        glf::task_detail::Group::TaskCompleted(*((glf::task_detail::Group::Self **)a1 + 12));
    }
    result = (glf::TaskCondition::Self *)__sync_fetch_and_add((volatile int32_t *)a1 + 10, 0xFFFFFFFF);
    if ( result == (glf::TaskCondition::Self *)((char *)&dword_0 + 1) )
    {
      v2 = *((glf::TaskCondition::Self **)a1 + 13);
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
      glf::TaskCondition::Destroy(a1);
      return (glf::TaskCondition::Self *)glf::freeEphemeralAllocation(a1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::Wait  (binary VA: 0xcc4b80)
// Original: glf::task_detail::Wait
// ----------------------------------------------------------------------------
void glf::task_detail::Wait(glf::TaskCondition::Self *a1)
{
  if ( a1 != nullptr )
    glf::TaskCondition::Wait(a1);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::GetCondition  (binary VA: 0xcc4bb0)
// Original: glf::task_detail::GetCondition
// ----------------------------------------------------------------------------
glf::task_detail::Self * glf::task_detail::GetCondition(glf::task_detail::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::Group::Destroy  (binary VA: 0xcc5080)
// Original: glf::task_detail::Group::~Group
// ----------------------------------------------------------------------------
void glf::task_detail::Group::Destroy(glf::task_detail::Group::Self *self)
{
  glf::TaskCondition::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  glf::TaskCondition::Self *v6;
  glf::TaskCondition::Self *v7;

  v1 = *((glf::TaskCondition::Self **)self + 13);
  v6 = v1;
  if ( v1 != nullptr )
  {
    while ( 1 )
    {
      v7 = *((glf::TaskCondition::Self **)v1 + 14);
      if ( __sync_fetch_and_add((volatile int32_t *)v6 + 10, 0xFFFFFFFF) == 1 )
      {
        v2 = *((uint32_t *)v6 + 13);
        if ( v2 != 0 )
        {
          while ( 1 )
          {
            v5 = *(uint32_t *)(v2 + 56);
            if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 40), 0xFFFFFFFF) == 1 )
            {
              v3 = *(uint32_t *)(v2 + 52);
              if ( v3 != 0 )
              {
                while ( 1 )
                {
                  v4 = *(uint32_t *)(v3 + 56);
                  if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 40), 0xFFFFFFFF) == 1 )
                  {
                    glf::task_detail::Group::Destroy((glf::task_detail::Group::Self *)v3);
                    glf::freeEphemeralAllocation((glf::Self *)v3);
                  }
                  if ( v4 == 0 )
                    break;
                  v3 = v4;
                }
              }
              glf::TaskCondition::Destroy((glf::TaskCondition::Self *)v2);
              glf::freeEphemeralAllocation((glf::Self *)v2);
            }
            if ( v5 == 0 )
              break;
            v2 = v5;
          }
        }
        glf::TaskCondition::Destroy(v6);
        glf::freeEphemeralAllocation(v6);
      }
      if ( v7 == nullptr )
        break;
      v6 = v7;
      v1 = v7;
    }
  }
  glf::TaskCondition::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::Group::TaskCompleted  (binary VA: 0xcc5180)
// Original: glf::task_detail::Group::TaskCompleted
// ----------------------------------------------------------------------------
int32_t glf::task_detail::Group::TaskCompleted(glf::task_detail::Group::Self *self)
{
  int32_t result;
  glf::TaskCondition::Self **v2;
  glf::Self *v3;
  int v4;
  int v5;
  volatile int32_t *v6;
  glf::TaskCondition::Self **v7;
  glf::Self *v8;
  int v9;
  int v10;
  volatile int32_t *v11;
  glf::TaskCondition::Self *v12;
  glf::Self *v13;
  int v14;
  int v15;
  volatile int32_t *v16;
  volatile int32_t *v17;
  int v18;
  int v19;
  int v20;
  volatile int32_t *v21;
  glf::Self *v22;
  glf::Self *v23;
  glf::Self *v24;
  glf::Self *v25;
  glf::Self *v26;
  glf::Self *v27;
  glf::TaskCondition::Self *v28;
  glf::TaskCondition::Self *v29;
  glf::TaskCondition::Self *v30;
  glf::TaskCondition::Self *v31;
  glf::TaskCondition::Self *v32;
  glf::TaskCondition::Self *v33;
  glf::TaskCondition::Self *v34;
  glf::TaskCondition::Self *v35;
  glf::TaskCondition::Self *v36;

  if ( __sync_fetch_and_add((volatile int32_t *)self + 11, 0xFFFFFFFF) == 1 )
  {
    glf::TaskCondition::Stop(self);
    v6 = *((volatile int32_t **)self + 12);
    v35 = (glf::TaskCondition::Self *)v6;
    if ( v6 != nullptr )
    {
      if ( __sync_fetch_and_add(v6 + 11, 0xFFFFFFFF) == 1 )
      {
        glf::TaskCondition::Stop((glf::TaskCondition::Self *)v6);
        v11 = *((volatile int32_t **)v35 + 12);
        v34 = (glf::TaskCondition::Self *)v11;
        if ( v11 != nullptr )
        {
          if ( __sync_fetch_and_add(v11 + 11, 0xFFFFFFFF) == 1 )
          {
            glf::TaskCondition::Stop((glf::TaskCondition::Self *)v11);
            v16 = *((volatile int32_t **)v34 + 12);
            v27 = (glf::Self *)v16;
            if ( v16 != nullptr )
            {
              if ( __sync_fetch_and_add(v16 + 11, 0xFFFFFFFF) == 1 )
              {
                glf::TaskCondition::Stop((glf::TaskCondition::Self *)v16);
                v17 = *((volatile int32_t **)v27 + 12);
                v31 = (glf::TaskCondition::Self *)v17;
                if ( v17 != nullptr )
                {
                  if ( __sync_fetch_and_add(v17 + 11, 0xFFFFFFFF) == 1 )
                  {
                    glf::TaskCondition::Stop((glf::TaskCondition::Self *)v17);
                    v18 = *((uint32_t *)v31 + 12);
                    if ( v18 != 0 )
                    {
                      if ( __sync_fetch_and_add((volatile int32_t *)(v18 + 44), 0xFFFFFFFF) == 1 )
                      {
                        glf::TaskCondition::Stop((glf::TaskCondition::Self *)v18);
                        v19 = *(uint32_t *)(v18 + 48);
                        if ( v19 != 0 )
                        {
                          if ( __sync_fetch_and_add((volatile int32_t *)(v19 + 44), 0xFFFFFFFF) == 1 )
                          {
                            glf::TaskCondition::Stop((glf::TaskCondition::Self *)v19);
                            v20 = *(uint32_t *)(v19 + 48);
                            if ( v20 != 0 )
                            {
                              if ( __sync_fetch_and_add((volatile int32_t *)(v20 + 44), 0xFFFFFFFF) == 1 )
                              {
                                glf::TaskCondition::Stop((glf::TaskCondition::Self *)v20);
                                v21 = *(volatile int32_t **)(v20 + 48);
                                if ( v21 != nullptr )
                                {
                                  if ( __sync_fetch_and_add(v21 + 11, 0xFFFFFFFF) == 1 )
                                  {
                                    v23 = (glf::Self *)v21;
                                    glf::TaskCondition::Stop((glf::TaskCondition::Self *)v21);
                                    v21 = (volatile int32_t *)v23;
                                    if ( *((uint32_t *)v23 + 12) != 0 )
                                    {
                                      glf::task_detail::Group::TaskCompleted(*((glf::task_detail::Group::Self **)v23 + 12));
                                      v21 = (volatile int32_t *)v23;
                                    }
                                  }
                                  if ( __sync_fetch_and_add(v21 + 10, 0xFFFFFFFF) == 1 )
                                  {
                                    v22 = (glf::Self *)v21;
                                    glf::task_detail::Group::Destroy((glf::task_detail::Group::Self *)v21);
                                    glf::freeEphemeralAllocation(v22);
                                  }
                                }
                              }
                              if ( __sync_fetch_and_add((volatile int32_t *)(v20 + 40), 0xFFFFFFFF) == 1 )
                              {
                                glf::task_detail::Group::Destroy((glf::task_detail::Group::Self *)v20);
                                glf::freeEphemeralAllocation((glf::Self *)v20);
                              }
                            }
                          }
                          if ( __sync_fetch_and_add((volatile int32_t *)(v19 + 40), 0xFFFFFFFF) == 1 )
                          {
                            glf::task_detail::Group::Destroy((glf::task_detail::Group::Self *)v19);
                            glf::freeEphemeralAllocation((glf::Self *)v19);
                          }
                        }
                      }
                      if ( __sync_fetch_and_add((volatile int32_t *)(v18 + 40), 0xFFFFFFFF) == 1 )
                      {
                        glf::task_detail::Group::Destroy((glf::task_detail::Group::Self *)v18);
                        glf::freeEphemeralAllocation((glf::Self *)v18);
                      }
                    }
                  }
                  if ( __sync_fetch_and_add((volatile int32_t *)v31 + 10, 0xFFFFFFFF) == 1 )
                  {
                    glf::task_detail::Group::Destroy((glf::task_detail::Group::Self *)(v31));
                    glf::freeEphemeralAllocation(v31);
                  }
                }
              }
              if ( __sync_fetch_and_add((volatile int32_t *)v27 + 10, 0xFFFFFFFF) == 1 )
              {
                glf::task_detail::Group::Destroy((glf::task_detail::Group::Self *)(v27));
                glf::freeEphemeralAllocation(v27);
              }
            }
          }
          if ( __sync_fetch_and_add((volatile int32_t *)v34 + 10, 0xFFFFFFFF) == 1 )
          {
            v12 = *((glf::TaskCondition::Self **)v34 + 13);
            v30 = v12;
            if ( v12 != nullptr )
            {
              while ( 1 )
              {
                v36 = *((glf::TaskCondition::Self **)v12 + 14);
                if ( __sync_fetch_and_add((volatile int32_t *)v30 + 10, 0xFFFFFFFF) == 1 )
                {
                  v13 = *((glf::Self **)v30 + 13);
                  if ( v13 != nullptr )
                  {
                    while ( 1 )
                    {
                      v26 = *((glf::Self **)v13 + 14);
                      if ( __sync_fetch_and_add((volatile int32_t *)v13 + 10, 0xFFFFFFFF) == 1 )
                      {
                        v14 = *((uint32_t *)v13 + 13);
                        if ( v14 != 0 )
                        {
                          while ( 1 )
                          {
                            v15 = *(uint32_t *)(v14 + 56);
                            if ( __sync_fetch_and_add((volatile int32_t *)(v14 + 40), 0xFFFFFFFF) == 1 )
                            {
                              glf::task_detail::Group::Destroy((glf::task_detail::Group::Self *)v14);
                              glf::freeEphemeralAllocation((glf::Self *)v14);
                            }
                            if ( v15 == 0 )
                              break;
                            v14 = v15;
                          }
                        }
                        glf::TaskCondition::Destroy(v13);
                        glf::freeEphemeralAllocation(v13);
                      }
                      if ( v26 == nullptr )
                        break;
                      v13 = v26;
                    }
                  }
                  glf::TaskCondition::Destroy(v30);
                  glf::freeEphemeralAllocation(v30);
                }
                if ( v36 == nullptr )
                  break;
                v30 = v36;
                v12 = v36;
              }
            }
            glf::TaskCondition::Destroy(v34);
            glf::freeEphemeralAllocation(v34);
          }
        }
      }
      if ( __sync_fetch_and_add((volatile int32_t *)v35 + 10, 0xFFFFFFFF) == 1 )
      {
        v7 = *((glf::TaskCondition::Self ***)v35 + 13);
        v29 = (glf::TaskCondition::Self *)v7;
        if ( v7 != nullptr )
        {
          while ( 1 )
          {
            v33 = v7[14];
            if ( __sync_fetch_and_add((volatile int32_t *)v29 + 10, 0xFFFFFFFF) == 1 )
            {
              v8 = *((glf::Self **)v29 + 13);
              if ( v8 != nullptr )
              {
                while ( 1 )
                {
                  v25 = *((glf::Self **)v8 + 14);
                  if ( __sync_fetch_and_add((volatile int32_t *)v8 + 10, 0xFFFFFFFF) == 1 )
                  {
                    v9 = *((uint32_t *)v8 + 13);
                    if ( v9 != 0 )
                    {
                      while ( 1 )
                      {
                        v10 = *(uint32_t *)(v9 + 56);
                        if ( __sync_fetch_and_add((volatile int32_t *)(v9 + 40), 0xFFFFFFFF) == 1 )
                        {
                          glf::task_detail::Group::Destroy((glf::task_detail::Group::Self *)v9);
                          glf::freeEphemeralAllocation((glf::Self *)v9);
                        }
                        if ( v10 == 0 )
                          break;
                        v9 = v10;
                      }
                    }
                    glf::TaskCondition::Destroy(v8);
                    glf::freeEphemeralAllocation(v8);
                  }
                  if ( v25 == nullptr )
                    break;
                  v8 = v25;
                }
              }
              glf::TaskCondition::Destroy(v29);
              glf::freeEphemeralAllocation(v29);
            }
            if ( v33 == nullptr )
              break;
            v29 = v33;
            v7 = (glf::TaskCondition::Self **)v33;
          }
        }
        glf::TaskCondition::Destroy(v35);
        glf::freeEphemeralAllocation(v35);
      }
    }
  }
  result = __sync_fetch_and_add((volatile int32_t *)self + 10, 0xFFFFFFFF);
  if ( result == 1 && self != nullptr )
  {
    v2 = *((glf::TaskCondition::Self ***)self + 13);
    v28 = (glf::TaskCondition::Self *)v2;
    if ( v2 != nullptr )
    {
      while ( 1 )
      {
        v32 = v2[14];
        if ( __sync_fetch_and_add((volatile int32_t *)v28 + 10, 0xFFFFFFFF) == 1 )
        {
          v3 = *((glf::Self **)v28 + 13);
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v24 = *((glf::Self **)v3 + 14);
              if ( __sync_fetch_and_add((volatile int32_t *)v3 + 10, 0xFFFFFFFF) == 1 )
              {
                v4 = *((uint32_t *)v3 + 13);
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
                glf::TaskCondition::Destroy(v3);
                glf::freeEphemeralAllocation(v3);
              }
              if ( v24 == nullptr )
                break;
              v3 = v24;
            }
          }
          glf::TaskCondition::Destroy(v28);
          glf::freeEphemeralAllocation(v28);
        }
        if ( v32 == nullptr )
          break;
        v28 = v32;
        v2 = (glf::TaskCondition::Self **)v32;
      }
    }
    glf::TaskCondition::Destroy(self);
    return glf::freeEphemeralAllocation(self);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_bi_bind_t_void_mfi_mf1_v_7167f8::Destroy  (binary VA: 0xd7e0b0)
// Original: glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::collada::CMeshSceneNode,unsigned int>,boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode*>,boost::_bi::value<unsigned int>>>>::~TRunnable
// ----------------------------------------------------------------------------
void glf::task_detail::TRunnable_bi_bind_t_void_mfi_mf1_v_7167f8::Destroy(glf::task_detail::TRunnable<boost::_bi::bind_t<void, boost::_mfi::mf1<void, glitch::collada::CMeshSceneNode::Self, unsigned int>, boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode::Self*>, boost::_bi::value<unsigned int>>>> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204AB80);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_bi_bind_t_void_mfi_mf1_v_7167f8::Run  (binary VA: 0xd7e190)
// Original: glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::collada::CMeshSceneNode,unsigned int>,boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode*>,boost::_bi::value<unsigned int>>>>::Run
// ----------------------------------------------------------------------------
int glf::task_detail::TRunnable_bi_bind_t_void_mfi_mf1_v_7167f8::Run(glf::task_detail::TRunnable<boost::_bi::bind_t<void, boost::_mfi::mf1<void, glitch::collada::CMeshSceneNode::Self, unsigned int>, boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode::Self*>, boost::_bi::value<unsigned int>>>> *self)
{
  char *v1;

  v1 = *((char **)self + 1);
  if ( ((uint8_t)(uintptr_t)v1 & 1) != 0 )
    v1 = *(char **)&v1[*(uint32_t *)(*((uint32_t *)self + 2) + *((uint32_t *)self + 3)) - 1];
  return ((int (*)(int, uint32_t))v1)(*((uint32_t *)self + 2) + *((uint32_t *)self + 3), *((uint32_t *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_bi_bind_t_void_mfi_mf1_v_7167f8::Destroy_ead7e2f0  (binary VA: 0xd7e2f0)
// Original: glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::collada::CMeshSceneNode,unsigned int>,boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode*>,boost::_bi::value<unsigned int>>>>::~TRunnable
// ----------------------------------------------------------------------------
void glf::task_detail::TRunnable_bi_bind_t_void_mfi_mf1_v_7167f8::Destroy_ead7e2f0(glf::task_detail::TRunnable<boost::_bi::bind_t<void, boost::_mfi::mf1<void, glitch::collada::CMeshSceneNode::Self, unsigned int>, boost::_bi::list2<boost::_bi::value<glitch::collada::CMeshSceneNode::Self*>, boost::_bi::value<unsigned int>>>> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204AB80);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_video_SGenerateMipmaps_155e15::Destroy  (binary VA: 0xe542a0)
// Original: glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps>::~TRunnable
// ----------------------------------------------------------------------------
void glf::task_detail::TRunnable_video_SGenerateMipmaps_155e15::Destroy(glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204AB80);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_video_SGenerateMipmaps_155e15::Destroy_eae544f0  (binary VA: 0xe544f0)
// Original: glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps>::~TRunnable
// ----------------------------------------------------------------------------
void glf::task_detail::TRunnable_video_SGenerateMipmaps_155e15::Destroy_eae544f0(glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204AB80);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_video_SGenerateMipmaps_155e15::Run  (binary VA: 0xe772c0)
// Original: glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps>::Run
// ----------------------------------------------------------------------------
int glf::task_detail::TRunnable_video_SGenerateMipmaps_155e15::Run(glf::task_detail::TRunnable<glitch::video::SGenerateMipmaps> *self)
{
  uint8_t *v1;
  int result;

  v1 = *((uint8_t **)self + 2);
  result = glitch::video::ITexture::generateMipmaps(*((glitch::video::ITexture::Self **)self + 1));
  *v1 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_bi_bind_t_void_mfi_mf1_v_54ba88::Destroy  (binary VA: 0xf76750)
// Original: glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::scene::CSceneManager,glitch::scene::ISceneNode *>,boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager*>,boost::_bi::value<glitch::scene::ISceneNode *>>>>::~TRunnable
// ----------------------------------------------------------------------------
void glf::task_detail::TRunnable_bi_bind_t_void_mfi_mf1_v_54ba88::Destroy(glf::task_detail::TRunnable<boost::_bi::bind_t<void, boost::_mfi::mf1<void, glitch::scene::CSceneManager::Self, glitch::scene::ISceneNode::Self *>, boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager::Self*>, boost::_bi::value<glitch::scene::ISceneNode::Self *>>>> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204AB80);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_scene_SRemoveNodeTask_d48344::Run  (binary VA: 0xf767b0)
// Original: glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask>::Run
// ----------------------------------------------------------------------------
int glf::task_detail::TRunnable_scene_SRemoveNodeTask_d48344::Run(glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask> *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 1) + 140))(*((uint32_t *)self + 1));
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_scene_SAddChildTask_519fb4::Run  (binary VA: 0xf767d0)
// Original: glf::task_detail::TRunnable<glitch::scene::SAddChildTask>::Run
// ----------------------------------------------------------------------------
int glf::task_detail::TRunnable_scene_SAddChildTask_519fb4::Run(glf::task_detail::TRunnable<glitch::scene::SAddChildTask> *self)
{
  return (*(int (**)(uint32_t, char *))(**((uint32_t **)self + 1) + 112))(*((uint32_t *)self + 1), (char *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_bi_bind_t_void_mfi_mf1_v_54ba88::Run  (binary VA: 0xf767f0)
// Original: glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::scene::CSceneManager,glitch::scene::ISceneNode *>,boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager*>,boost::_bi::value<glitch::scene::ISceneNode *>>>>::Run
// ----------------------------------------------------------------------------
int glf::task_detail::TRunnable_bi_bind_t_void_mfi_mf1_v_54ba88::Run(glf::task_detail::TRunnable<boost::_bi::bind_t<void, boost::_mfi::mf1<void, glitch::scene::CSceneManager::Self, glitch::scene::ISceneNode::Self *>, boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager::Self*>, boost::_bi::value<glitch::scene::ISceneNode::Self *>>>> *self)
{
  char *v1;

  v1 = *((char **)self + 1);
  if ( ((uint8_t)(uintptr_t)v1 & 1) != 0 )
    v1 = *(char **)&v1[*(uint32_t *)(*((uint32_t *)self + 2) + *((uint32_t *)self + 3)) - 1];
  return ((int (*)(int, uint32_t))v1)(*((uint32_t *)self + 2) + *((uint32_t *)self + 3), *((uint32_t *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_bi_bind_t_void_mfi_mf1_v_54ba88::Destroy_eaf76860  (binary VA: 0xf76860)
// Original: glf::task_detail::TRunnable<boost::_bi::bind_t<void,boost::_mfi::mf1<void,glitch::scene::CSceneManager,glitch::scene::ISceneNode *>,boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager*>,boost::_bi::value<glitch::scene::ISceneNode *>>>>::~TRunnable
// ----------------------------------------------------------------------------
void glf::task_detail::TRunnable_bi_bind_t_void_mfi_mf1_v_54ba88::Destroy_eaf76860(glf::task_detail::TRunnable<boost::_bi::bind_t<void, boost::_mfi::mf1<void, glitch::scene::CSceneManager::Self, glitch::scene::ISceneNode::Self *>, boost::_bi::list2<boost::_bi::value<glitch::scene::CSceneManager::Self*>, boost::_bi::value<glitch::scene::ISceneNode::Self *>>>> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204AB80);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_scene_SAddChildTask_519fb4::Destroy  (binary VA: 0xf76d80)
// Original: glf::task_detail::TRunnable<glitch::scene::SAddChildTask>::~TRunnable
// ----------------------------------------------------------------------------
void glf::task_detail::TRunnable_scene_SAddChildTask_519fb4::Destroy(glf::task_detail::TRunnable<glitch::scene::SAddChildTask> *self)
{
  uint32_t *v1;
  uint32_t *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208C928);
  v1 = *((uint32_t **)self + 2);
  if ( v1 != nullptr )
    sub_5459C0((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 16)));
  v2 = *((uint32_t **)self + 1);
  if ( v2 != nullptr )
    sub_5459C0((uint32_t *)((char *)v2 + *(uint32_t *)(*v2 - 16)));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204AB80);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_scene_SRemoveNodeTask_d48344::Destroy  (binary VA: 0xf76df0)
// Original: glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask>::~TRunnable
// ----------------------------------------------------------------------------
void glf::task_detail::TRunnable_scene_SRemoveNodeTask_d48344::Destroy(glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask> *self)
{
  uint32_t *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208C948);
  v1 = *((uint32_t **)self + 1);
  if ( v1 != nullptr )
    sub_5459C0((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 16)));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204AB80);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_scene_SRemoveNodeTask_d48344::Destroy_eaf76eb0  (binary VA: 0xf76eb0)
// Original: glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask>::~TRunnable
// ----------------------------------------------------------------------------
void glf::task_detail::TRunnable_scene_SRemoveNodeTask_d48344::Destroy_eaf76eb0(glf::task_detail::TRunnable<glitch::scene::SRemoveNodeTask> *self)
{
  uint32_t *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208C948);
  v1 = *((uint32_t **)self + 1);
  if ( v1 != nullptr )
    sub_5459C0((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 16)));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204AB80);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_scene_SAddChildTask_519fb4::Destroy_eaf76f10  (binary VA: 0xf76f10)
// Original: glf::task_detail::TRunnable<glitch::scene::SAddChildTask>::~TRunnable
// ----------------------------------------------------------------------------
void glf::task_detail::TRunnable_scene_SAddChildTask_519fb4::Destroy_eaf76f10(glf::task_detail::TRunnable<glitch::scene::SAddChildTask> *self)
{
  uint32_t *v1;
  uint32_t *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208C928);
  v1 = *((uint32_t **)self + 2);
  if ( v1 != nullptr )
    sub_5459C0((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 16)));
  v2 = *((uint32_t **)self + 1);
  if ( v2 != nullptr )
    sub_5459C0((uint32_t *)((char *)v2 + *(uint32_t *)(*v2 - 16)));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204AB80);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_gameswf_TextureTask_acd580::Destroy  (binary VA: 0x1180e20)
// Original: glf::task_detail::TRunnable<gameswf::TextureTask>::~TRunnable
// ----------------------------------------------------------------------------
void glf::task_detail::TRunnable_gameswf_TextureTask_acd580::Destroy(glf::task_detail::TRunnable<gameswf::TextureTask> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204AB80);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_gameswf_TextureTask_acd580::Destroy_ea1180e40  (binary VA: 0x1180e40)
// Original: glf::task_detail::TRunnable<gameswf::TextureTask>::~TRunnable
// ----------------------------------------------------------------------------
void glf::task_detail::TRunnable_gameswf_TextureTask_acd580::Destroy_ea1180e40(glf::task_detail::TRunnable<gameswf::TextureTask> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_204AB80);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::task_detail::TRunnable_gameswf_TextureTask_acd580::Run  (binary VA: 0x11811e0)
// Original: glf::task_detail::TRunnable<gameswf::TextureTask>::Run
// ----------------------------------------------------------------------------
int glf::task_detail::TRunnable_gameswf_TextureTask_acd580::Run(glf::task_detail::TRunnable<gameswf::TextureTask> *self)
{
  return gameswf::ASLoaderManager::process(*((gameswf::ASLoaderManager::Self **)self + 1), *((Request **)self + 2));
}


