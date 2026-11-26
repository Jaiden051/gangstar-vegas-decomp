#include "Core/Utils/DecompTypes.h"
#include "gameswf_VideoHandler.h"

// ----------------------------------------------------------------------------
// Function: gameswf::VideoHandler::Destroy  (binary VA: 0x118de20)
// Original: gameswf::VideoHandler::~VideoHandler
// ----------------------------------------------------------------------------
void gameswf::VideoHandler::Destroy(pthread_mutex_t **self)
{
  pthread_mutex_t **v1;
  gameswf::VideoHandler::Self *v2;
  gameswf::VideoHandler::Self *v3;
  char *v4;
  gameswf::VideoHandler::Self *v5;

  v1 = self;
  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_2091978);
  if ( gameswf::s_render_handler != nullptr )
  {
    (*(void (**)(uint32_t *))(*gameswf::s_render_handler + 152))((uint32_t *)(gameswf::s_render_handler));
    v1 = self;
  }
  v5 = (gameswf::VideoHandler::Self *)(v1 + 34);
  do
  {
    if ( v5 != (gameswf::VideoHandler::Self *)&dword_18 )
    {
      v2 = (gameswf::VideoHandler::Self *)((char *)v5 - 12);
      v3 = (gameswf::VideoHandler::Self *)((char *)v5 - 12);
      v4 = (char *)v5 - 16;
      do
      {
        if ( *(uint32_t *)&v4[v3 - v2] != 0 )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)&v4[v3 - v2]);
        v3 = (gameswf::VideoHandler::Self *)((char *)v3 - 4);
      }
      while ( (gameswf::VideoHandler::Self *)((char *)v5 - 24) != v3 );
    }
    v5 = (gameswf::VideoHandler::Self *)((char *)v5 - 28);
  }
  while ( self + 13 != (pthread_mutex_t **)v5 );
  glf::Mutex::Destroy(self + 10);
  gameswf::RefCounted::Destroy((gameswf::RefCounted::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoHandler::Destroy_ea118def0  (binary VA: 0x118def0)
// Original: gameswf::VideoHandler::~VideoHandler
// ----------------------------------------------------------------------------
void gameswf::VideoHandler::Destroy_ea118def0(pthread_mutex_t **self)
{
  gameswf::VideoHandler::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x118df50 (size: 66 bytes)
// Symbol:    _ZN7gameswf12VideoHandler14BufferedBitmapC2Ev
// Demangled: gameswf::VideoHandler::BufferedBitmap::BufferedBitmap(void)
// ============================================================================
// Alternative name is '_ZN7gameswf12VideoHandler14BufferedBitmapC1Ev'
gameswf::VideoHandler::BufferedBitmap::Self *gameswf::VideoHandler::BufferedBitmap::Construct(
        gameswf::VideoHandler::BufferedBitmap::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&unk_1B15112);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: gameswf::VideoHandler::Construct  (binary VA: 0x118dfa0)
// Original: gameswf::VideoHandler::VideoHandler
// ----------------------------------------------------------------------------
gameswf::VideoHandler::Self * gameswf::VideoHandler::Construct(pthread_mutex_t **self)
{
  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)self);
  *(self + 3) = nullptr;
  *self = (pthread_mutex_t *)((uint32_t)(uintptr_t)&off_2091978);
  *(self + 4) = nullptr;
  *(self + 5) = nullptr;
  glf::Mutex::Construct(self + 10, 1);
  *(self + 12) = (pthread_mutex_t *)(self + 20);
  *(self + 11) = (pthread_mutex_t *)(self + 13);
  gameswf::VideoHandler::BufferedBitmap::Construct((gameswf::VideoHandler::BufferedBitmap::Self *)(self + 13));
  gameswf::VideoHandler::BufferedBitmap::Construct((gameswf::VideoHandler::BufferedBitmap::Self *)(self + 20));
  gameswf::VideoHandler::BufferedBitmap::Construct((gameswf::VideoHandler::BufferedBitmap::Self *)(self + 27));
  *(self + 34) = nullptr;
  *(self + 35) = nullptr;
  *(self + 36) = nullptr;
  *(self + 37) = nullptr;
  *(self + 38) = nullptr;
  *(self + 39) = nullptr;
  *(self + 40) = nullptr;
  *(self + 13) = (pthread_mutex_t *)&a0[2];
  *(self + 20) = (pthread_mutex_t *)"1";
  *(self + 27) = (pthread_mutex_t *)"2";
  return (gameswf::VideoHandler::Self *)"2";
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoHandler::updateVideo  (binary VA: 0x118e510)
// Original: gameswf::VideoHandler::updateVideo
// ----------------------------------------------------------------------------
int gameswf::VideoHandler::updateVideo(int a1, uint32_t *a2)
{
  int v2;
  int i;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  glf::Mutex::Lock((pthread_mutex_t **)(a1 + 40));
  v2 = a2[1];
  *(uint32_t *)(a1 + 20) = a2[2];
  *(uint32_t *)(a1 + 16) = v2;
  *(uint32_t *)(a1 + 24) = a2[15];
  *(uint32_t *)(a1 + 28) = a2[16];
  *(uint32_t *)(a1 + 32) = a2[17];
  *(uint32_t *)(a1 + 36) = a2[18];
  for ( i = 0; i != 12; i += 4 )
  {
    *(uint32_t *)(a1 + i * 2 + 140) = 1;
    if ( (int)a2[i + 4] > 1 )
    {
      v4 = 1;
      do
      {
        v4 *= 2;
        *(uint32_t *)(a1 + i * 2 + 140) = v4;
      }
      while ( a2[i + 4] > v4 );
    }
    *(uint32_t *)(a1 + i * 2 + 144) = 1;
    if ( (int)a2[i + 5] > 1 )
    {
      v5 = 1;
      do
      {
        v5 *= 2;
        *(uint32_t *)(a1 + i * 2 + 144) = v5;
      }
      while ( a2[i + 5] > v5 );
    }
  }
  v6 = *(uint32_t *)(a1 + 44);
  v7 = *(uint32_t *)(v6 + 4);
  if ( *(uint32_t *)(v6 + 16) != 0
    && v7 != 0
    && (v13 = *(uint32_t *)(v6 + 4), (*(int (**)(int))(*(uint32_t *)v7 + 52))(v7) == *(uint32_t *)(a1 + 140))
    && (*(int (**)(int))(*(uint32_t *)v13 + 56))(v13) == *(uint32_t *)(a1 + 144)
    && (v9 = *(uint32_t *)(a1 + 44), v10 = *(uint32_t *)(v9 + 8), *(uint32_t *)(v9 + 20) != 0)
    && v10 != 0
    && (v14 = *(uint32_t *)(v9 + 8), (*(int (**)(int))(*(uint32_t *)v10 + 52))(v10) == *(uint32_t *)(a1 + 148))
    && (*(int (**)(int))(*(uint32_t *)v14 + 56))(v14) == *(uint32_t *)(a1 + 152)
    && (v11 = *(uint32_t *)(a1 + 44), v12 = *(uint32_t *)(v11 + 12), *(uint32_t *)(v11 + 24) != 0)
    && v12 != 0
    && (v15 = *(uint32_t *)(v11 + 12), (*(int (**)(int))(*(uint32_t *)v12 + 52))(v12) == *(uint32_t *)(a1 + 156))
    && (*(int (**)(int))(*(uint32_t *)v15 + 56))(v15) == *(uint32_t *)(a1 + 160) )
  {
    gameswf::YCrCbToTexture(a2, (char **)(*(uint32_t *)(a1 + 44) + 16), (void **)(a1 + 140));
    *(uint32_t *)(a1 + 12) = 3;
  }
  else
  {
    *(uint32_t *)(a1 + 12) = 1;
  }
  glf::Mutex::Unlock((pthread_mutex_t **)(a1 + 40));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoHandler::reinit  (binary VA: 0x118e6c0)
// Original: gameswf::VideoHandler::reinit
// ----------------------------------------------------------------------------
int gameswf::VideoHandler::reinit(pthread_mutex_t **self)
{
  glf::Mutex::Lock(self + 10);
  *(self + 3) = nullptr;
  return glf::Mutex::Unlock(self + 10);
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoHandler::createBitmaps  (binary VA: 0x118eab0)
// Original: gameswf::VideoHandler::createBitmaps
// ----------------------------------------------------------------------------
int gameswf::VideoHandler::createBitmaps(gameswf::VideoHandler::Self *self)
{
  int result;
  int VideoBitmapAlpha;
  int v3;
  gameswf::RefCounted::Self *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  gameswf::RefCounted::Self *v9;
  void *v10;
  int v11;
  int v12;
  int v13;
  gameswf::RefCounted::Self *v14;
  void *v15;
  char *v16;
  int v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char *_g4_t_v23;
  typedef const char *_g4_t_v24;
  typedef char _g4_t_s[60];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v22)) > _g4_s4 ? (20u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v23)) > _g4_s5 ? (24u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v24)) > _g4_s6 ? (28u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_s)) > _g4_s7 ? (32u + sizeof(_g4_t_s)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 32u);

  result = gameswf::s_videoBufferSize;
  if ( (int)gameswf::s_videoBufferSize > 0 )
  {
    v22 = 0;
    v24 = "VideoY";
    do
    {
      v23 = (char *)self + 28 * v22 + 48;
      v16 = (char *)self + 28 * v22 + 52;
      v17 = *((uint32_t *)self + 7 * v22 + 14);
      if ( v17 == 0
        || (*(int (**)(uint32_t))(*(uint32_t *)v17 + 52))(*((uint32_t *)self + 7 * v22 + 14)) != *((uint32_t *)self + 35)
        || G4_VCALL<int>(v17, 56) != *((uint32_t *)self + 36) )
      {
        v18 = *((uint32_t *)self + 7 * v22 + 13);
        sprintf(s, "%s#%s");
        VideoBitmapAlpha = gameswf::createVideoBitmapAlpha(
                             (int *)self + 35,
                             s,
                             (int)(uintptr_t)(v24),
                             v18,
                             v21,
                             v22,
                             (int)(uintptr_t)(v23),
                             (int)(uintptr_t)(v24),
                             *(int *)s,
                             *(int *)&s[4],
                             s[8],
                             *(int *)&s[12],
                             *(int *)&s[16],
                             *(gameswf::Self **)&s[20],
                             *(int *)&s[24]);
        v3 = *((uint32_t *)v16 + 1);
        v4 = (gameswf::RefCounted::Self *)VideoBitmapAlpha;
        if ( VideoBitmapAlpha != v3 )
        {
          if ( v3 != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v16 + 1));
          v3 = 0;
          *((uint32_t *)v16 + 1) = (uint32_t)(uintptr_t)(v4);
          if ( v4 != nullptr )
          {
            gameswf::RefCounted::addRef(v4);
            v3 = *((uint32_t *)v16 + 1);
          }
        }
        v5 = (void *)G4_VCALL<int>(v3, 28);
        *((uint32_t *)v16 + 4) = (uint32_t)(uintptr_t)(v5);
        memset(v5, 128, *((uint32_t *)self + 36) * *((uint32_t *)self + 35));
        (*(void (**)(uint32_t))(**((uint32_t **)v16 + 1) + 32))(*((uint32_t *)v16 + 1));
      }
      v6 = *((uint32_t *)v16 + 2);
      if ( v6 == 0
        || (*(int (**)(uint32_t))(*(uint32_t *)v6 + 52))(*((uint32_t *)v16 + 2)) != *((uint32_t *)self + 37)
        || G4_VCALL<int>(v6, 56) != *((uint32_t *)self + 38) )
      {
        v19 = *((uint32_t *)v23 + 1);
        sprintf(s, "%s#%s");
        v7 = gameswf::createVideoBitmapAlpha(
               (int *)self + 37,
               s,
               (int)(uintptr_t)("VideoCb"),
               v19,
               v21,
               v22,
               (int)(uintptr_t)(v23),
               (int)(uintptr_t)(v24),
               *(int *)s,
               *(int *)&s[4],
               s[8],
               *(int *)&s[12],
               *(int *)&s[16],
               *(gameswf::Self **)&s[20],
               *(int *)&s[24]);
        v8 = *((uint32_t *)v16 + 2);
        v9 = (gameswf::RefCounted::Self *)v7;
        if ( v7 != v8 )
        {
          if ( v8 != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v16 + 2));
          v8 = 0;
          *((uint32_t *)v16 + 2) = (uint32_t)(uintptr_t)(v9);
          if ( v9 != nullptr )
          {
            gameswf::RefCounted::addRef(v9);
            v8 = *((uint32_t *)v16 + 2);
          }
        }
        v10 = (void *)G4_VCALL<int>(v8, 28);
        *((uint32_t *)v16 + 5) = (uint32_t)(uintptr_t)(v10);
        memset(v10, 128, *((uint32_t *)self + 38) * *((uint32_t *)self + 37));
        (*(void (**)(uint32_t))(**((uint32_t **)v16 + 2) + 32))(*((uint32_t *)v16 + 2));
      }
      v11 = *((uint32_t *)v16 + 3);
      if ( v11 == 0
        || (*(int (**)(uint32_t))(*(uint32_t *)v11 + 52))(*((uint32_t *)v16 + 3)) != *((uint32_t *)self + 39)
        || G4_VCALL<int>(v11, 56) != *((uint32_t *)self + 40) )
      {
        v20 = *((uint32_t *)v23 + 1);
        sprintf(s, "%s#%s");
        v12 = gameswf::createVideoBitmapAlpha(
                (int *)self + 39,
                s,
                (int)(uintptr_t)("VideoCr"),
                v20,
                v21,
                v22,
                (int)(uintptr_t)(v23),
                (int)(uintptr_t)(v24),
                *(int *)s,
                *(int *)&s[4],
                s[8],
                *(int *)&s[12],
                *(int *)&s[16],
                *(gameswf::Self **)&s[20],
                *(int *)&s[24]);
        v13 = *((uint32_t *)v16 + 3);
        v14 = (gameswf::RefCounted::Self *)v12;
        if ( v12 != v13 )
        {
          if ( v13 != 0 )
            gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)v16 + 3));
          v13 = 0;
          *((uint32_t *)v16 + 3) = (uint32_t)(uintptr_t)(v14);
          if ( v14 != nullptr )
          {
            gameswf::RefCounted::addRef(v14);
            v13 = *((uint32_t *)v16 + 3);
          }
        }
        v15 = (void *)G4_VCALL<int>(v13, 28);
        *((uint32_t *)v16 + 6) = (uint32_t)(uintptr_t)(v15);
        memset(v15, 128, *((uint32_t *)self + 40) * *((uint32_t *)self + 39));
        (*(void (**)(uint32_t))(**((uint32_t **)v16 + 3) + 32))(*((uint32_t *)v16 + 3));
      }
      result = ++v22;
    }
    while ( gameswf::s_videoBufferSize > v22 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::VideoHandler::display  (binary VA: 0x118edb0)
// Original: gameswf::VideoHandler::display
// ----------------------------------------------------------------------------
void gameswf::VideoHandler::display(pthread_mutex_t **self, const gameswf::Matrix::Self *a2, const gameswf::Rect::Self *a3, const gameswf::Color::Self *a4)
{
  int v4;
  float v5; // xmm3_4
  float v6; // xmm2_4
  int v7;
  int v8;
  float v9[4];

  if ( *(self + 4) != nullptr && *(self + 5) != nullptr )
  {
    glf::Mutex::Lock(self + 10);
    v4 = (int)(uintptr_t)(*(self + 3));
    if ( v4 == 1 )
    {
      gameswf::VideoHandler::createBitmaps((gameswf::VideoHandler::Self *)self);
      *(self + 3) = nullptr;
    }
    else if ( v4 == 3 )
    {
      G4_VCALL<void>(G4_MUTEX_COUNT((*(self + 11))), 28);
      G4_VCALL<void>(G4_MUTEX_COUNT((*(self + 11))), 32);
      G4_VCALL<void>(G4_MUTEX_OWNER((*(self + 11))), 28);
      G4_VCALL<void>(G4_MUTEX_OWNER((*(self + 11))), 32);
      G4_VCALL<void>(G4_MUTEX_KIND((*(self + 11))), 28);
      G4_VCALL<void>(G4_MUTEX_KIND((*(self + 11))), 32);
      *(self + 12) = *(self + 11);
      v7 = (int)(uintptr_t)(&G4_MUTEX_LOCK((*(self + 34)))) + 1;
      *(self + 3) = (pthread_mutex_t *)(&dword_0 + 2);
      v8 = v7 % gameswf::s_videoBufferSize;
      *(self + 34) = (pthread_mutex_t *)(v7 % gameswf::s_videoBufferSize);
      *(self + 11) = (pthread_mutex_t *)(self + 7 * v8 + 13);
    }
    glf::Mutex::Unlock(self + 10);
    if ( *(self + 3) == (pthread_mutex_t *)((char *)&dword_0 + 2) )
    {
      v5 = (float)(int)(uintptr_t)(*(self + 35));
      v6 = (float)(int)(uintptr_t)(*(self + 36));
      v9[0] = (float)(*((float *)self + 6) + 1.0) / v5;
      v9[2] = (float)(*((float *)self + 8) + 1.0) / v6;
      v9[1] = (float)(*((float *)self + 7) - 1.0) / v5;
      v9[3] = (float)(*((float *)self + 9) - 1.0) / v6;
      if ( gameswf::s_render_handler != nullptr )
      {
        gameswf::RenderHandler::flush((gameswf::RenderHandler::Self *)gameswf::s_render_handler);
        if ( gameswf::s_render_handler != nullptr )
          (*(void (**)(uint32_t *, const gameswf::Matrix::Self *, unsigned int, int, int, const gameswf::Rect::Self *, float *, uint32_t))(*gameswf::s_render_handler + 112))(
            (uint32_t *)(gameswf::s_render_handler),
            a2,
            G4_MUTEX_COUNT((*(self + 12))),
            G4_MUTEX_OWNER((*(self + 12))),
            G4_MUTEX_KIND((*(self + 12))),
            a3,
            v9,
            *(uint32_t *)a4);
      }
    }
  }
}


