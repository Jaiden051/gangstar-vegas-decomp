#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASLoaderManager.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoaderManager::Construct  (binary VA: 0x117d4f0)
// Original: gameswf::ASLoaderManager::ASLoaderManager
// ----------------------------------------------------------------------------
pthread_mutex_t ** gameswf::ASLoaderManager::Construct(gameswf::ASLoaderManager::Self *self, gameswf::Player::Self *a2)
{
  gameswf::Self *WeakProxy;
  pthread_mutex_t **result;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  if ( a2 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
    sub_7E5ED0((gameswf::Self **)self, WeakProxy);
  }
  else
  {
    sub_7E5ED0((gameswf::Self **)self, nullptr);
  }
  result = glf::Mutex::Construct((pthread_mutex_t **)self + 2, 1);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint8_t *)self + 28) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoaderManager::Destroy  (binary VA: 0x117d580)
// Original: gameswf::ASLoaderManager::~ASLoaderManager
// ----------------------------------------------------------------------------
void gameswf::ASLoaderManager::Destroy(gameswf::ASLoaderManager::Self *self)
{
  glf::TaskManager::Self *v1;
  int v2;
  glf::task_detail::Self **v3;
  glf::TaskDirector::Self *Instance;
  int32_t v5;
  int v6;
  int i;
  int v8;
  int v9;
  int32_t v10;
  gameswf::Self *v11;
  bool v12;
  int v13;
  uint32_t *v14;
  int v15;
  gameswf::Self *v16;
  gameswf::Self *v17;
  glf::TaskManager::Self *v18;
  int v19;
  void *v20;
  char v21;

  do
  {
    while ( 1 )
    {
      v1 = (glf::TaskManager::Self *)dword_20D5420;
      if ( dword_20D5420 == 0 )
      {
LABEL_38:
        while ( __sync_val_compare_and_swap(&dword_20D5430, (int32_t)(uintptr_t)(v1), 1) != 0 )
          glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
        v1 = (glf::TaskManager::Self *)dword_20D5420;
        if ( dword_20D5420 == 0 )
        {
          v1 = (glf::TaskManager::Self *)opNew(0xE8u);
          glf::TaskManager::Construct(v1);
          _mm_mfence();
          dword_20D5420 = (int)(uintptr_t)(v1);
        }
        dword_20D5430 = 0;
      }
      v2 = glf::TaskManager::Pop(v1);
      v3 = (glf::task_detail::Self **)v2;
      if ( v2 == 0 )
        break;
      while ( 1 )
      {
        v21 = *(uint8_t *)(v2 + 24);
        glf::Task::Start(v3);
        if ( v21 == 0 )
          break;
        (*((void (**)(glf::task_detail::Self **))*v3 + 1))(v3);
        v1 = (glf::TaskManager::Self *)dword_20D5420;
        if ( dword_20D5420 == 0 )
          goto LABEL_38;
        v2 = glf::TaskManager::Pop((glf::TaskManager::Self *)dword_20D5420);
        v3 = (glf::task_detail::Self **)v2;
        if ( v2 == 0 )
          goto LABEL_6;
      }
    }
LABEL_6:
    Instance = (glf::TaskDirector::Self *)glf::TaskDirector::GetInstance();
  }
  while ( (uint8_t)glf::TaskDirector::ConsumeRegisteredHandler(Instance) != 0 );
  while ( 1 )
  {
    v5 = dword_20D5420;
    if ( dword_20D5420 == 0 )
      break;
    if ( *(uint32_t *)(dword_20D5420 + 224) == 0 )
      goto LABEL_11;
LABEL_8:
    glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
  }
  while ( __sync_val_compare_and_swap(&dword_20D5430, v5, 1) != 0 )
    glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
  v18 = (glf::TaskManager::Self *)dword_20D5420;
  if ( dword_20D5420 == 0 )
  {
    v18 = (glf::TaskManager::Self *)opNew(0xE8u);
    glf::TaskManager::Construct(v18);
    _mm_mfence();
    dword_20D5420 = (int)(uintptr_t)(v18);
  }
  v19 = *((uint32_t *)v18 + 56);
  dword_20D5430 = 0;
  if ( v19 != 0 )
    goto LABEL_8;
LABEL_11:
  v6 = *((uint32_t *)self + 4);
  if ( v6 > 0 )
  {
    for ( i = 0; i < v6; ++i )
    {
      v8 = *(uint32_t *)(*((uint32_t *)self + 3) + 4 * i);
      if ( v8 != 0 )
      {
        v9 = *(uint32_t *)(v8 + 28);
        if ( v9 != 0 )
        {
          while ( 1 )
          {
            v10 = *(uint32_t *)(v9 + 4);
            _mm_mfence();
            if ( v10 == 2 )
            {
              if ( *(uint16_t *)(v9 + 32) == 0xFFFF )
                goto LABEL_17;
              glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v9);
            }
            else
            {
              if ( v10 == 1 )
              {
                G4_VCALL<void>(v9, 4, v20);
                break;
              }
LABEL_17:
              if ( v10 == __sync_val_compare_and_swap((volatile int32_t *)(v9 + 4), v10, v10 - 1) )
                break;
            }
          }
        }
        v11 = *(gameswf::Self **)(v8 + 20);
        if ( v11 != nullptr )
        {
          v12 = (*(uint16_t *)v11)-- == 1;
          if ( v12 )
            gameswf::free_internal(v11);
        }
        if ( *(uint8_t *)v8 == 0xFF && (*(uint8_t *)(v8 + 19) & 1) != 0 )
          gameswf::free_internal(*(gameswf::Self **)(v8 + 12));
        v20 = nullptr;
        gameswf::free_internal((gameswf::Self *)v8);
        v6 = *((uint32_t *)self + 4);
      }
    }
  }
  if ( v6 < 0 )
  {
    v13 = 4 * v6;
    do
    {
      v14 = (uint32_t *)(*((uint32_t *)self + 3) + v13);
      if ( v14 != nullptr )
        *v14 = 0;
      v13 += 4;
      ++v6;
    }
    while ( v6 != 0 );
  }
  v15 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 4) = 0;
  if ( v15 == 0 )
  {
    v16 = *((gameswf::Self **)self + 3);
    *((uint32_t *)self + 5) = 0;
    if ( v16 != nullptr )
      gameswf::free_internal(v16);
    *((uint32_t *)self + 3) = 0;
  }
  glf::Mutex::Destroy((pthread_mutex_t **)self + 2);
  v17 = *(gameswf::Self **)self;
  if ( *(uint32_t *)self != 0 )
  {
    v12 = (*(uint16_t *)v17)-- == 1;
    if ( v12 )
      gameswf::free_internal(v17);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoaderManager::addRequest  (binary VA: 0x117d890)
// Original: gameswf::ASLoaderManager::addRequest
// ----------------------------------------------------------------------------
uint32_t * gameswf::ASLoaderManager::addRequest(gameswf::ASLoaderManager::Self *self, const gameswf::String::Self *a2, gameswf::ASLoader::Self *a3)
{
  int v3;
  gameswf::Self *WeakProxy;
  int *v5;
  int *EphemeralAllocation;
  glf::TaskManager::Self *v7;
  uint32_t *result;
  bool v9;

  v3 = opNew(0x24u);
  sub_7763C0((gameswf::String::Self *)v3, (char *)a2);
  *(uint32_t *)(v3 + 20) = 0;
  *(uint32_t *)(v3 + 24) = (uint32_t)(uintptr_t)(a3);
  if ( a3 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a3);
    sub_7E5ED0((gameswf::Self **)(v3 + 20), WeakProxy);
  }
  else
  {
    sub_7E5ED0((gameswf::Self **)(v3 + 20), nullptr);
  }
  *(uint32_t *)(v3 + 28) = 0;
  *(uint8_t *)(v3 + 32) = 0;
  v5 = glf::Task::opNew((glf::Task::Self *)dword_24);
  *v5 = (int)((uint32_t)(uintptr_t)&off_206E678);
  v5[3] = 0;
  *((uint8_t *)v5 + 16) = 0;
  v5[5] = 0;
  *((uint8_t *)v5 + 24) = 1;
  v5[7] = 0;
  v5[8] = 0;
  EphemeralAllocation = glf::allocateEphemeralAllocation((glf::Self *)&byte_9[3]);
  if ( EphemeralAllocation != nullptr )
  {
    EphemeralAllocation[2] = v3;
    *EphemeralAllocation = (int)((uint32_t)(uintptr_t)&off_2091718);
    EphemeralAllocation[1] = (int)(uintptr_t)(self);
  }
  v5[7] = (int)(uintptr_t)(EphemeralAllocation);
  v5[8] = glf::task_detail::GrabGroup();
  v7 = (glf::TaskManager::Self *)dword_20D5420;
  if ( dword_20D5420 == 0 )
  {
    while ( __sync_val_compare_and_swap(&dword_20D5430, (int32_t)(uintptr_t)(v7), 1) != 0 )
      glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
    v7 = (glf::TaskManager::Self *)dword_20D5420;
    if ( dword_20D5420 == 0 )
    {
      v7 = (glf::TaskManager::Self *)opNew(0xE8u);
      glf::TaskManager::Construct(v7);
      _mm_mfence();
      dword_20D5420 = (int)(uintptr_t)(v7);
    }
    v9 = *((uint8_t *)v7 + 228) == 0;
    dword_20D5430 = 0;
    if ( !v9 )
      goto LABEL_7;
    return glf::TaskManager::Push(v7, (glf::Task::Self *)v5, true);
  }
  if ( *(uint8_t *)(dword_20D5420 + 228) == 0 )
    return glf::TaskManager::Push(v7, (glf::Task::Self *)v5, true);
LABEL_7:
  result = (uint32_t *)glf::Task::Start((glf::task_detail::Self **)v5);
  if ( *((uint8_t *)v5 + 24) != 0 )
    return (uint32_t *)G4_VCALL<int>(v5, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoaderManager::advance  (binary VA: 0x117da40)
// Original: gameswf::ASLoaderManager::advance
// ----------------------------------------------------------------------------
int gameswf::ASLoaderManager::advance(pthread_mutex_t **self)
{
  int v1;
  gameswf::RefCounted::Self **v2;
  int v3;
  int v4;
  int32_t v5;
  int v6;
  int32_t v7;
  gameswf::Self *v8;
  int v10;
  int v11;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  glf::Mutex::Lock(self + 2);
  if ( (int)(uintptr_t)(*(self + 4)) > 0 )
  {
    v14 = 4;
    v13 = 0;
    while ( 1 )
    {
      v1 = *(&G4_MUTEX_LOCK((*(self + 3))) + v13);
      v2 = *(gameswf::RefCounted::Self ***)(v1 + 24);
      if ( v2 == nullptr )
        goto LABEL_14;
      v3 = *(uint32_t *)(v1 + 20);
      if ( *(uint8_t *)(v3 + 2) != 0 )
      {
        v15[0] = *(uint32_t *)(v1 + 28);
        if ( v15[0] != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v15[0] + 4), 1u);
          v2 = *(gameswf::RefCounted::Self ***)(v1 + 24);
          if ( v2 == nullptr )
            goto LABEL_10;
          v3 = *(uint32_t *)(v1 + 20);
        }
        if ( *(uint8_t *)(v3 + 2) == 0 )
        {
          sub_7E5ED0((gameswf::Self **)(v1 + 20), nullptr);
          *(uint32_t *)(v1 + 24) = 0;
          v2 = nullptr;
        }
LABEL_10:
        gameswf::ASLoader::loadComplete(v2, v15);
        v4 = v15[0];
        if ( v15[0] == 0 )
          goto LABEL_14;
        while ( 1 )
        {
          v5 = *(uint32_t *)(v4 + 4);
          _mm_mfence();
          if ( v5 == 2 )
          {
            if ( *(uint16_t *)(v4 + 32) == 0xFFFF )
              goto LABEL_13;
            glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v4);
          }
          else
          {
            if ( v5 == 1 )
            {
              G4_VCALL<void>(v4, 4);
              goto LABEL_14;
            }
LABEL_13:
            if ( v5 == __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v5, v5 - 1) )
              goto LABEL_14;
          }
        }
      }
      sub_7E5ED0((gameswf::Self **)(v1 + 20), nullptr);
      *(uint32_t *)(v1 + 24) = 0;
LABEL_14:
      v6 = *(uint32_t *)(v1 + 28);
      if ( v6 != 0 )
      {
        while ( 1 )
        {
          v7 = *(uint32_t *)(v6 + 4);
          _mm_mfence();
          if ( v7 == 2 )
          {
            if ( *(uint16_t *)(v6 + 32) == 0xFFFF )
              goto LABEL_17;
            glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v6);
          }
          else
          {
            if ( v7 == 1 )
            {
              G4_VCALL<void>(v6, 4);
              break;
            }
LABEL_17:
            if ( v7 == __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v7, v7 - 1) )
              break;
          }
        }
      }
      v8 = *(gameswf::Self **)(v1 + 20);
      if ( v8 != nullptr && (*(uint16_t *)v8)-- == 1 )
        gameswf::free_internal(v8);
      if ( *(uint8_t *)v1 == 0xFF && (*(uint8_t *)(v1 + 19) & 1) != 0 )
        gameswf::free_internal(*(gameswf::Self **)(v1 + 12));
      gameswf::free_internal((gameswf::Self *)v1);
      v10 = (int)(uintptr_t)(*(self + 4));
      if ( v10 == 1 )
        break;
      memmove(&G4_MUTEX_LOCK((*(self + 3))) + v13, (char *)*(self + 3) + v14, 4 * (v10 - 1 - v13));
      ++v13;
      v11 = (int)(uintptr_t)(*(self + 4)) - 1;
      v14 += 4;
      *(self + 4) = (pthread_mutex_t *)v11;
      if ( v13 >= v11 )
        return glf::Mutex::Unlock(self + 2);
    }
    *(self + 4) = nullptr;
  }
  return glf::Mutex::Unlock(self + 2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoaderManager::process  (binary VA: 0x117dcc0)
// Original: gameswf::ASLoaderManager::process
// ----------------------------------------------------------------------------
int gameswf::ASLoaderManager::process(gameswf::ASLoaderManager::Self *self, Request *a2)
{
  pthread_mutex_t **v2;
  char *v3;
  gameswf::Player::Self *v4;
  struct _RequestRec *v5;
  Request v6;
  int v7;
  int v8;
  char *v9;
  char *v10;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef struct _RequestRec *_g4_t_v17;
  typedef struct _RequestRec *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v16)) > _g4_s3 ? (8u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v2 = (pthread_mutex_t **)((char *)self + 8);
  glf::Mutex::Lock((pthread_mutex_t **)self + 2);
  *((uint8_t *)self + 28) = 1;
  glf::Mutex::Unlock((pthread_mutex_t **)self + 2);
  if ( *((uint8_t *)a2 + 32) != 0 )
    goto LABEL_9;
  v3 = (char *)a2 + 1;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v4 = *((gameswf::Player::Self **)self + 1);
    v3 = (char *)a2[3];
    if ( v4 != nullptr )
    {
LABEL_4:
      if ( *(uint8_t *)(*(uint32_t *)self + 2) == 0 )
      {
        v15 = v3;
        sub_7E5ED0((gameswf::Self **)self, nullptr);
        *((uint32_t *)self + 1) = 0;
        v4 = nullptr;
        v3 = v15;
      }
    }
  }
  else
  {
    v4 = *((gameswf::Player::Self **)self + 1);
    if ( v4 != nullptr )
      goto LABEL_4;
  }
  gameswf::loadTexture((gameswf::Self *)&v17, v4, v3);
  v5 = nullptr;
  v18 = v17;
  if ( v17 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)&v17->widget, 1u);
    v5 = v18;
  }
  v6 = a2[7];
  a2[7] = v5;
  v18 = (struct _RequestRec *)(v6);
  sub_5ED480((int *)&v18);
  sub_5ED480((int *)&v17);
LABEL_9:
  glf::Mutex::Lock(v2);
  v7 = *((uint32_t *)self + 4);
  v13 = *((uint32_t *)self + 5);
  v8 = v7 + 1;
  if ( v7 + 1 <= v13 || *((uint32_t *)self + 6) != 0 )
  {
    v9 = *((char **)self + 3);
  }
  else
  {
    v12 = v8 + (v8 >> 1);
    *((uint32_t *)self + 5) = v12;
    if ( v12 != 0 )
    {
      v16 = v7 + 1;
      if ( *((uint32_t *)self + 3) != 0 )
        v9 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 3), 4 * v12, 4 * v13);
      else
        v9 = (char *)gameswf::malloc_internal(4 * v12);
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v9);
      v7 = *((uint32_t *)self + 4);
      v8 = v16;
    }
    else
    {
      if ( *((uint32_t *)self + 3) != 0 )
      {
        v14 = v7 + 1;
        gameswf::free_internal(*((gameswf::Self **)self + 3));
        v7 = *((uint32_t *)self + 4);
        v8 = v14;
      }
      *((uint32_t *)self + 3) = 0;
      v9 = nullptr;
    }
  }
  v10 = &v9[4 * v7];
  if ( v10 != nullptr )
    *(uint32_t *)v10 = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 4) = v8;
  *((uint8_t *)self + 28) = 0;
  return glf::Mutex::Unlock(v2);
}


