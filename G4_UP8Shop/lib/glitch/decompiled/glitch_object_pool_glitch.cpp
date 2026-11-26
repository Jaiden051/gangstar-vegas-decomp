#include "Core/Utils/DecompTypes.h"
#include "glitch_object_pool_glitch.h"

// ----------------------------------------------------------------------------
// Function: boost::object_pool_streaming_lod_cache_SLod_a10701::Destroy  (binary VA: 0xcf1bd0)
// Original: boost::object_pool<glitch::streaming::lod_cache::SLodTreeNode,boost::default_user_allocator_new_delete,true>::~object_pool
// ----------------------------------------------------------------------------
void boost::object_pool_streaming_lod_cache_SLod_a10701::Destroy(boost::object_pool<glitch::streaming::lod_cache::SLodTreeNode, boost::default_user_allocator_new_delete, true> *self)
{
  char *v1;
  unsigned int v2;
  int v3;
  char *v4;
  char *v5;
  char *v6;
  char *v7;

  v1 = *((char **)self + 1);
  if ( v1 != nullptr )
  {
    v2 = *((uint32_t *)self + 3);
    if ( v2 <= 3 )
    {
      v2 = 4;
    }
    else if ( (v2 & 3) != 0 )
    {
      v2 = *((uint32_t *)self + 3) + 4 - (*((uint32_t *)self + 3) & 3);
    }
    v3 = *((uint32_t *)self + 2);
    while ( 1 )
    {
      v4 = &v1[v3 - 4];
      v3 = *(uint32_t *)v4;
      v5 = *((char **)v4 - 1);
      v6 = v4 - 4;
      if ( v6 != v1 )
      {
        v7 = v1;
        do
          v7 += v2;
        while ( v6 != v7 );
      }
      opDeleteArray(v1);
      if ( v5 == nullptr )
        break;
      v1 = v5;
    }
    *((uint32_t *)self + 1) = 0;
  }
  else
  {
    boost::pool_default_user_allocator_n_6ecb77::Destroy(self);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::object_pool_streaming_lod_cache_SLod_20c39d::Destroy  (binary VA: 0xcf1c70)
// Original: boost::object_pool<glitch::streaming::lod_cache::SLodNode,boost::default_user_allocator_new_delete,true>::~object_pool
// ----------------------------------------------------------------------------
void boost::object_pool_streaming_lod_cache_SLod_20c39d::Destroy(boost::object_pool<glitch::streaming::lod_cache::SLodNode, boost::default_user_allocator_new_delete, true> *self)
{
  char *v1;
  unsigned int v2;
  int v3;
  char *v4;
  char *v5;
  char *v6;
  char *v7;

  v1 = *((char **)self + 1);
  if ( v1 != nullptr )
  {
    v2 = *((uint32_t *)self + 3);
    if ( v2 <= 3 )
    {
      v2 = 4;
    }
    else if ( (v2 & 3) != 0 )
    {
      v2 = *((uint32_t *)self + 3) + 4 - (*((uint32_t *)self + 3) & 3);
    }
    v3 = *((uint32_t *)self + 2);
    while ( 1 )
    {
      v4 = &v1[v3 - 4];
      v3 = *(uint32_t *)v4;
      v5 = *((char **)v4 - 1);
      v6 = v4 - 4;
      if ( v6 != v1 )
      {
        v7 = v1;
        do
          v7 += v2;
        while ( v6 != v7 );
      }
      opDeleteArray(v1);
      if ( v5 == nullptr )
        break;
      v1 = v5;
    }
    *((uint32_t *)self + 1) = 0;
  }
  else
  {
    boost::pool_default_user_allocator_n_6ecb77::Destroy(self);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::object_pool_streaming_lod_cache_SLod_c777be::Destroy  (binary VA: 0xcf1d10)
// Original: boost::object_pool<glitch::streaming::lod_cache::SLodObject,boost::default_user_allocator_new_delete,true>::~object_pool
// ----------------------------------------------------------------------------
void boost::object_pool_streaming_lod_cache_SLod_c777be::Destroy(boost::object_pool<glitch::streaming::lod_cache::SLodObject, boost::default_user_allocator_new_delete, true> *self)
{
  char *v1;
  unsigned int v2;
  int i;
  void **v4;
  char *v5;
  char *v6;
  int v7;
  int v8;
  char *v9;
  int v10;

  v1 = *((char **)self + 1);
  if ( v1 != nullptr )
  {
    v2 = *((uint32_t *)self + 3);
    v8 = v2;
    if ( v2 <= 3 )
    {
      v8 = 4;
    }
    else if ( (v2 & 3) != 0 )
    {
      v8 = *((uint32_t *)self + 3) + 4 - (*((uint32_t *)self + 3) & 3);
    }
    v6 = *(char **)self;
    for ( i = *((uint32_t *)self + 2); ; i = v10 )
    {
      v10 = *(uint32_t *)&v1[i - 4];
      v9 = *(char **)&v1[i - 8];
      v7 = (int)(uintptr_t)(&v1[i - 8]);
      if ( (char *)v7 != v1 )
      {
        v4 = (void **)v1;
        do
        {
          while ( v4 == (void **)v6 )
          {
            v5 = (char *)*v4;
            v4 = (void **)((char *)v4 + v8);
            v6 = v5;
            if ( (void **)v7 == v4 )
              goto LABEL_19;
          }
          if ( v4[16] != nullptr )
            opDeleteArray(v4[16]);
          if ( v4[15] != nullptr )
            opDeleteArray(v4[15]);
          if ( v4[9] != nullptr )
            opDeleteArray(v4[9]);
          if ( v4[8] != nullptr )
            opDeleteArray(v4[8]);
          v4 = (void **)((char *)v4 + v8);
        }
        while ( (void **)v7 != v4 );
      }
LABEL_19:
      opDeleteArray(v1);
      if ( v9 == nullptr )
        break;
      v1 = v9;
    }
    *((uint32_t *)self + 1) = 0;
  }
  else
  {
    boost::pool_default_user_allocator_n_6ecb77::Destroy(self);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::object_pool_streaming_lod_cache_SCom_b55736::Destroy  (binary VA: 0xcf1e50)
// Original: boost::object_pool<glitch::streaming::lod_cache::SCommandState,boost::default_user_allocator_new_delete,true>::~object_pool
// ----------------------------------------------------------------------------
void boost::object_pool_streaming_lod_cache_SCom_b55736::Destroy(boost::object_pool<glitch::streaming::lod_cache::SCommandState, boost::default_user_allocator_new_delete, true> *self)
{
  unsigned int v1;
  glf::SpinLock::Self *v2;
  uint32_t *v3;
  int v4;
  int v5;
  char *v6;
  char *v7;
  int *v8;
  int v9;
  uint32_t *v10;
  volatile int32_t *v11;
  char *v12;
  int *v13;
  int v14;
  uint32_t *v15;
  volatile int32_t *v16;
  glf::SpinLock::Self *v17;
  glf::SpinLock::Self *v18;
  glf::SpinLock::Self *v19;
  glf::SpinLock::Self *v20;
  glf::SpinLock::Self *v21;
  glf::SpinLock::Self *v22;
  char *v23;
  char **v24;
  char *v25;
  char *v26;
  int v27;
  char *v28;
  char *v29;
  int v30;
  uint32_t *v31;
  int v32;

  v28 = *((char **)self + 1);
  if ( v28 != nullptr )
  {
    v1 = *((uint32_t *)self + 3);
    v27 = v1;
    if ( v1 <= 3 )
    {
      v27 = 4;
    }
    else if ( (v1 & 3) != 0 )
    {
      v27 = *((uint32_t *)self + 3) + 4 - (*((uint32_t *)self + 3) & 3);
    }
    v2 = (glf::SpinLock::Self *)&dword_20D6D00;
    v3 = *((uint32_t **)self + 1);
    v4 = *((uint32_t *)self + 2);
    v29 = *(char **)self;
    while ( 1 )
    {
      v32 = *(uint32_t *)((char *)v3 + v4 - 4);
      v31 = *(uint32_t **)((char *)v3 + v4 - 8);
      v30 = (int)(uintptr_t)(v3) + v4 - 8;
      if ( v28 != (char *)v30 )
      {
        v25 = v28;
        v26 = v28 + 12;
        v24 = (char **)(v28 + 12);
        do
        {
          if ( v25 == v29 )
          {
            v29 = *(char **)v25;
          }
          else
          {
            v5 = v25 - v28;
            v23 = v25 + 12;
            v6 = *((char **)v25 + 3);
            v7 = v28 + 8;
            if ( v6 != nullptr && v25 + 12 != v6 )
            {
              if ( v2 != nullptr )
              {
                while ( 1 )
                {
                  v8 = (int *)v24[1];
                  v9 = *v8;
                  if ( *v8 != 0 )
                  {
                    v10 = (uint32_t *)v8[1];
                    *v10 = v9;
                    *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10);
                  }
                  --*(uint32_t *)&v7[v5];
                  v11 = (volatile int32_t *)v8[2];
                  *v8 = 0;
                  v8[1] = 0;
                  if ( v11 != nullptr )
                  {
                    v17 = v2;
                    sub_5459C0(v11);
                    v2 = v17;
                  }
                  if ( byte_20D6CFC == 0 )
                  {
                    byte_20D6CFC = 1;
                    v18 = v2;
                    glf::SpinLock::Construct(v2);
                    v2 = v18;
                    *((uint32_t *)v18 + 1) = 0;
                    *((uint32_t *)v18 + 2) = 0;
                    *((uint32_t *)v18 + 3) = 0;
                    *((uint32_t *)v18 + 4) = 16;
                    *((uint32_t *)v18 + 5) = 32;
                    *((uint32_t *)v18 + 6) = 32;
                    *((uint32_t *)v18 + 7) = 0;
                  }
                  v19 = v2;
                  glf::SpinLock::Lock((volatile int32_t **)v2);
                  *v8 = *((uint32_t *)v19 + 1);
                  *((uint32_t *)v19 + 1) = (uint32_t)(uintptr_t)(v8);
                  glf::SpinLock::Unlock(v19);
                  v2 = v19;
                  v6 = *(char **)&v26[v5];
                  if ( v6 == nullptr )
                    break;
                  if ( v6 == v23 )
                    goto LABEL_20;
                }
              }
              else
              {
                while ( 1 )
                {
                  v13 = (int *)v24[1];
                  v14 = *v13;
                  if ( *v13 != 0 )
                  {
                    v15 = (uint32_t *)v13[1];
                    *v15 = v14;
                    *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(v15);
                  }
                  --*(uint32_t *)&v7[v5];
                  v16 = (volatile int32_t *)v13[2];
                  *v13 = 0;
                  v13[1] = 0;
                  if ( v16 != nullptr )
                  {
                    v21 = v2;
                    sub_5459C0(v16);
                    v2 = v21;
                  }
                  if ( byte_20D6CFC == 0 )
                    byte_20D6CFC = 1;
                  v22 = v2;
                  glf::SpinLock::Lock(nullptr);
                  *v13 = (int)(uintptr_t)(loc_4);
                  *((uint32_t *)v22 + 1) = (uint32_t)(uintptr_t)(v13);
                  glf::SpinLock::Unlock(nullptr);
                  v2 = v22;
                  v6 = *(char **)&v26[v5];
                  if ( v6 == nullptr )
                    break;
                  if ( v6 == v23 )
                    goto LABEL_20;
                }
              }
              v6 = nullptr;
            }
LABEL_20:
            if ( v23 != v6 )
            {
              while ( 1 )
              {
                v12 = *(char **)v6;
                *((uint32_t *)v6 + 1) = 0;
                *(uint32_t *)v6 = 0;
                if ( v23 == v12 )
                  break;
                v6 = v12;
              }
            }
            *v24 = v23;
            v24[1] = v23;
            *(uint32_t *)&v7[v5] = 0;
          }
          v25 += v27;
          v24 = (char **)((char *)v24 + v27);
        }
        while ( (char *)v30 != v25 );
      }
      v20 = v2;
      opDeleteArray(v28);
      v2 = v20;
      if ( v31 == nullptr )
        break;
      v3 = v31;
      v4 = v32;
      v28 = (char *)v31;
    }
    *((uint32_t *)self + 1) = 0;
  }
  else
  {
    boost::pool_default_user_allocator_n_6ecb77::Destroy(self);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::object_pool_streaming_CModifierStrea_56dc82::Destroy  (binary VA: 0xcf2390)
// Original: boost::object_pool<glitch::streaming::CModifierStreamingModule::SObject,boost::default_user_allocator_new_delete,true>::~object_pool
// ----------------------------------------------------------------------------
void boost::object_pool_streaming_CModifierStrea_56dc82::Destroy(boost::object_pool<glitch::streaming::CModifierStreamingModule::SObject, boost::default_user_allocator_new_delete, true> *self)
{
  unsigned int v1;
  char *v2;
  char *v3;
  int *v4;
  int v5;
  char *v6;
  char *v7;
  char *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  char *v12;
  char *v13;
  int v14;

  v12 = *((char **)self + 1);
  if ( v12 != nullptr )
  {
    v1 = *((uint32_t *)self + 3);
    v11 = v1;
    if ( v1 <= 3 )
    {
      v11 = 4;
    }
    else if ( (v1 & 3) != 0 )
    {
      v11 = *((uint32_t *)self + 3) + 4 - (*((uint32_t *)self + 3) & 3);
    }
    v2 = *(char **)self;
    v14 = *((uint32_t *)self + 2);
    v3 = *((char **)self + 1);
    while ( 1 )
    {
      v4 = (int *)&v3[v14 - 4];
      v5 = *v4;
      v6 = *(char **)&v3[v14 - 8];
      v7 = (char *)(v4 - 1);
      v14 = v5;
      v13 = v6;
      if ( v7 != v12 )
      {
        v8 = v12;
        do
        {
          while ( v8 == v2 )
          {
            v2 = *(char **)v8;
            v8 += v11;
            if ( v7 == v8 )
              goto LABEL_14;
          }
          v9 = *((uint32_t **)v8 + 11);
          v10 = *((uint32_t **)v8 + 6);
          *v10 = *v9;
          *v9 = (uint32_t)(uintptr_t)(v10);
          if ( v8[32] != 0 && *((uint32_t *)v8 + 6) != 0 )
            opDeleteArray(*((void **)v8 + 6));
          v8 += v11;
        }
        while ( v7 != v8 );
      }
LABEL_14:
      if ( v12 != nullptr )
        opDeleteArray(v12);
      if ( v13 == nullptr )
        break;
      v3 = v13;
      v12 = v13;
    }
    *((uint32_t *)self + 1) = 0;
  }
  else
  {
    boost::pool_default_user_allocator_n_6ecb77::Destroy(self);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::object_pool_streaming_CSegmentStream_8a80f0::Destroy  (binary VA: 0xcf2680)
// Original: boost::object_pool<glitch::streaming::CSegmentStreamingModule::SUpdateInfo,boost::default_user_allocator_new_delete,true>::~object_pool
// ----------------------------------------------------------------------------
void boost::object_pool_streaming_CSegmentStream_8a80f0::Destroy(boost::object_pool<glitch::streaming::CSegmentStreamingModule::SUpdateInfo, boost::default_user_allocator_new_delete, true> *self)
{
  unsigned int v1;
  int *v2;
  uint32_t *v3;
  int *v4;
  int v5;
  uint32_t *v6;
  int *v7;
  int *v8;
  int **v9;
  int *v10;
  uint32_t *v11;
  int v12;
  int v13;

  v10 = *((int **)self + 1);
  if ( v10 != nullptr )
  {
    v1 = *((uint32_t *)self + 3);
    v13 = v1;
    if ( v1 <= 3 )
    {
      v13 = 4;
    }
    else if ( (v1 & 3) != 0 )
    {
      v13 = *((uint32_t *)self + 3) + 4 - (*((uint32_t *)self + 3) & 3);
    }
    v2 = *(int **)self;
    v12 = *((uint32_t *)self + 2);
    v3 = *((uint32_t **)self + 1);
    while ( 1 )
    {
      v4 = (int *)((uint32_t *)((char *)v3 + v12 - 4));
      v5 = *v4;
      v6 = *(uint32_t **)((char *)v3 + v12 - 8);
      v7 = v4 - 1;
      v12 = v5;
      v11 = v6;
      if ( v7 != v10 )
      {
        v8 = v10;
        do
        {
          while ( v8 != v2 )
          {
            v9 = (int **)(v8 + 1);
            v8 = (int *)((char *)v8 + v13);
            glitch::streaming::SResourceWeakPtr::decrement(v9);
            if ( v7 == v8 )
              goto LABEL_11;
          }
          v2 = (int *)*v8;
          v8 = (int *)((char *)v8 + v13);
        }
        while ( v7 != v8 );
      }
LABEL_11:
      if ( v10 != nullptr )
        opDeleteArray(v10);
      if ( v11 == nullptr )
        break;
      v3 = v11;
      v10 = (int *)(v11);
    }
    *((uint32_t *)self + 1) = 0;
  }
  else
  {
    boost::pool_default_user_allocator_n_6ecb77::Destroy(self);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::object_pool_aabbox3d_float_memory_SD_e33e50::Destroy  (binary VA: 0xcf28c0)
// Original: boost::object_pool<glitch::core::aabbox3d<float>,glitch::memory::SDefaultPoolAllocator,true>::~object_pool
// ----------------------------------------------------------------------------
void boost::object_pool_aabbox3d_float_memory_SD_e33e50::Destroy(boost::object_pool<glitch::core::aabbox3d<float>, glitch::memory::SDefaultPoolAllocator, true> *self)
{
  char *v1;
  unsigned int v2;
  int v3;
  char *v4;
  char *v5;
  char *v6;
  char *v7;

  v1 = *((char **)self + 1);
  if ( v1 != nullptr )
  {
    v2 = *((uint32_t *)self + 3);
    if ( v2 <= 3 )
    {
      v2 = 4;
    }
    else if ( (v2 & 3) != 0 )
    {
      v2 = *((uint32_t *)self + 3) + 4 - (*((uint32_t *)self + 3) & 3);
    }
    v3 = *((uint32_t *)self + 2);
    while ( 1 )
    {
      v4 = &v1[v3 - 4];
      v3 = *(uint32_t *)v4;
      v5 = *((char **)v4 - 1);
      v6 = v4 - 4;
      if ( v6 != v1 )
      {
        v7 = v1;
        do
          v7 += v2;
        while ( v6 != v7 );
      }
      opDeleteArray(v1);
      if ( v5 == nullptr )
        break;
      v1 = v5;
    }
    *((uint32_t *)self + 1) = 0;
  }
  else
  {
    sub_6025A0(self);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::object_pool_io_CGlfReadFile_SAsyncRe_0c0e94::Destroy  (binary VA: 0xf0b570)
// Original: boost::object_pool<glitch::io::CGlfReadFile::SAsyncReadDesc,glitch::memory::SDefaultPoolAllocator,true>::~object_pool
// ----------------------------------------------------------------------------
void boost::object_pool_io_CGlfReadFile_SAsyncRe_0c0e94::Destroy(boost::object_pool<glitch::io::CGlfReadFile::SAsyncReadDesc, glitch::memory::SDefaultPoolAllocator, true> *self)
{
  char *v1;
  unsigned int v2;
  int v3;
  char *v4;
  char *v5;
  char *v6;
  char *v7;

  v1 = *((char **)self + 1);
  if ( v1 != nullptr )
  {
    v2 = *((uint32_t *)self + 3);
    if ( v2 <= 3 )
    {
      v2 = 4;
    }
    else if ( (v2 & 3) != 0 )
    {
      v2 = *((uint32_t *)self + 3) + 4 - (*((uint32_t *)self + 3) & 3);
    }
    v3 = *((uint32_t *)self + 2);
    while ( 1 )
    {
      v4 = &v1[v3 - 4];
      v3 = *(uint32_t *)v4;
      v5 = *((char **)v4 - 1);
      v6 = v4 - 4;
      if ( v6 != v1 )
      {
        v7 = v1;
        do
          v7 += v2;
        while ( v6 != v7 );
      }
      opDeleteArray(v1);
      if ( v5 == nullptr )
        break;
      v1 = v5;
    }
    *((uint32_t *)self + 1) = 0;
  }
  else
  {
    sub_6025A0(self);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::object_pool_scene_SLodNode_memory_SD_66c027::Destroy  (binary VA: 0xf7c9c0)
// Original: boost::object_pool<glitch::scene::SLodNode,glitch::memory::SDefaultPoolAllocator,true>::~object_pool
// ----------------------------------------------------------------------------
void boost::object_pool_scene_SLodNode_memory_SD_66c027::Destroy(boost::object_pool<glitch::scene::SLodNode, glitch::memory::SDefaultPoolAllocator, true> *self)
{
  unsigned int v1;
  glitch::scene::SLodNode *v2;
  glitch::scene::SLodNode *v3;
  int *v4;
  int v5;
  glitch::scene::SLodNode *v6;
  glitch::scene::SLodNode *v7;
  glitch::scene::SLodNode *v8;
  glitch::scene::SLodNode *v9;
  glitch::scene::SLodNode *v10;
  glitch::scene::SLodNode *v11;
  int v12;
  int v13;

  v10 = *((glitch::scene::SLodNode **)self + 1);
  if ( v10 != nullptr )
  {
    v1 = *((uint32_t *)self + 3);
    v13 = v1;
    if ( v1 <= 3 )
    {
      v13 = 4;
    }
    else if ( (v1 & 3) != 0 )
    {
      v13 = *((uint32_t *)self + 3) + 4 - (*((uint32_t *)self + 3) & 3);
    }
    v2 = *(glitch::scene::SLodNode **)self;
    v12 = *((uint32_t *)self + 2);
    v3 = *((glitch::scene::SLodNode **)self + 1);
    while ( 1 )
    {
      v4 = (int *)((char *)v3 + v12 - 4);
      v5 = *v4;
      v6 = *(glitch::scene::SLodNode **)((char *)v3 + v12 - 8);
      v7 = (glitch::scene::SLodNode *)(v4 - 1);
      v12 = v5;
      v11 = v6;
      if ( v7 != v10 )
      {
        v8 = v10;
        do
        {
          while ( v8 != v2 )
          {
            v9 = v8;
            v8 = (glitch::scene::SLodNode *)((char *)v8 + v13);
            g4_noop_dtor(v9);
            if ( v7 == v8 )
              goto LABEL_11;
          }
          v2 = *(glitch::scene::SLodNode **)v8;
          v8 = (glitch::scene::SLodNode *)((char *)v8 + v13);
        }
        while ( v7 != v8 );
      }
LABEL_11:
      if ( v10 != nullptr )
        opDeleteArray(v10);
      if ( v11 == nullptr )
        break;
      v3 = v11;
      v10 = v11;
    }
    *((uint32_t *)self + 1) = 0;
  }
  else
  {
    sub_6025A0(self);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::object_pool_CContinuousAllocator_SNo_d1ad97::construct  (binary VA: 0xf80730)
// Original: boost::object_pool<glitch::core::CContinuousAllocator::SNode,glitch::memory::SDefaultPoolAllocator,true>::construct
// ----------------------------------------------------------------------------
uint32_t * boost::object_pool_CContinuousAllocator_SNo_d1ad97::construct(boost::object_pool<glitch::core::CContinuousAllocator::SNode, glitch::memory::SDefaultPoolAllocator, true> *self)
{
  uint32_t *result;

  result = *(uint32_t **)self;
  if ( *(uint32_t *)self != 0 )
  {
    *(uint32_t *)self = *result;
LABEL_3:
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    *((uint8_t *)result + 16) = 0;
    *((uint8_t *)result + 17) = 1;
    return result;
  }
  result = sub_609270((int)(uintptr_t)(self));
  if ( result != nullptr )
    goto LABEL_3;
  return result;
}


