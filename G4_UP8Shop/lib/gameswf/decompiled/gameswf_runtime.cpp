#include "Core/Utils/DecompTypes.h"
#include "gameswf_runtime.h"

// ----------------------------------------------------------------------------
// Function: gameswf::assertMessage  (binary VA: 0x1066500)
// Original: gameswf::assertMessage
// ----------------------------------------------------------------------------
void gameswf::assertMessage()
{
  dword_0 = 666;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getHostInterface  (binary VA: 0x1066520)
// Original: gameswf::getHostInterface
// ----------------------------------------------------------------------------
int gameswf::getHostInterface()
{
  return dword_20E2CF0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::setRenderMode  (binary VA: 0x1066540)
// Original: gameswf::setRenderMode
// ----------------------------------------------------------------------------
int gameswf::setRenderMode(int a1)
{
  return (*(int (**)(uint32_t *, int))(*gameswf::s_render_handler + 44))((uint32_t *)(gameswf::s_render_handler), a1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::createContext  (binary VA: 0x10665f0)
// Original: gameswf::createContext
// ----------------------------------------------------------------------------
int gameswf::createContext(int a1)
{
  int v1;
  gameswf::GlyphProvider::Self *v2;
  uint32_t *v3;
  uint32_t *v4;
  gameswf::TextShaper::Self *v5;

  v1 = opNew(0x30u, 0);
  gameswf::PlayerContext::PlayerContext((gameswf::PlayerContext::Self *)v1);
  v2 = (gameswf::GlyphProvider::Self *)opNew(0x2Cu, 0);
  gameswf::GlyphProvider::Construct(v2, *(uint32_t *)(a1 + 40), *(uint32_t *)(a1 + 44), *(float *)(a1 + 56));
  *(uint32_t *)(v1 + 12) = (uint32_t)(uintptr_t)(v2);
  v3 = (uint32_t *)opNew(0xCu, 0);
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v4 = *(uint32_t **)(v1 + 12);
  *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v3);
  gameswf::FaceProvider::Init(v3, *v4);
  *(uint32_t *)(*(uint32_t *)(v1 + 12) + 40) = *(uint32_t *)(v1 + 16);
  v5 = (gameswf::TextShaper::Self *)opNew(0x38u, 0);
  *(uint32_t *)v5 = 0;
  *((uint32_t *)v5 + 1) = 0;
  *((uint32_t *)v5 + 2) = 0;
  *((uint32_t *)v5 + 3) = 0;
  *((uint32_t *)v5 + 4) = 0;
  *((uint32_t *)v5 + 5) = 0;
  *((uint32_t *)v5 + 6) = 0;
  *((uint32_t *)v5 + 7) = 0;
  *((uint32_t *)v5 + 8) = 0;
  *((uint32_t *)v5 + 9) = 0;
  *((uint32_t *)v5 + 10) = 0;
  *((uint32_t *)v5 + 11) = 0;
  *((uint32_t *)v5 + 12) = 0;
  *((uint32_t *)v5 + 13) = 0;
  *(uint32_t *)(v1 + 20) = (uint32_t)(uintptr_t)(v5);
  gameswf::TextShaper::Init(v5, *(gameswf::FaceProvider::Self **)(v1 + 16));
  *(uint32_t *)(v1 + 44) = *(uint32_t *)a1;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::initialize  (binary VA: 0x1066740)
// Original: gameswf::initialize
// ----------------------------------------------------------------------------
void gameswf::initialize(int a1)
{
  gameswf::Self *v1;
  gameswf::Self *v2;

  if ( dword_20E2D00 == 0 )
  {
    dword_20E2CF0 = *(uint32_t *)(a1 + 36);
    gameswf::s_render_handler = (uint32_t *)gameswf::createRenderHandler(a1);
    v1 = (gameswf::Self *)gameswf::s_render_handler;
    (*(void (**)(void))(*gameswf::s_render_handler + 148))();
    gameswf::standardMethodMapInit(v1);
    gameswf::standardPropertyMapInit(v2);
    dword_20E2D00 = gameswf::createContext(a1);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::getDefaultContext  (binary VA: 0x10667d0)
// Original: gameswf::getDefaultContext
// ----------------------------------------------------------------------------
int gameswf::getDefaultContext()
{
  return dword_20E2D00;
}

// ----------------------------------------------------------------------------
// Function: gameswf::clearGlyphTextureCaches  (binary VA: 0x10667f0)
// Original: gameswf::clearGlyphTextureCaches
// ----------------------------------------------------------------------------
gameswf::TextureCache::Self * gameswf::clearGlyphTextureCaches(gameswf::Self *self)
{
  gameswf::Self *DefaultContext;
  gameswf::TextureCache::Self *result;

  DefaultContext = self;
  if ( self == nullptr )
    DefaultContext = (gameswf::Self *)gameswf::getDefaultContext();
  result = *((gameswf::TextureCache::Self **)DefaultContext + 3);
  if ( result != nullptr )
  {
    result = *((gameswf::TextureCache::Self **)result + 9);
    if ( result != nullptr )
      return (gameswf::TextureCache::Self *)gameswf::TextureCache::reset(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::clearFonts  (binary VA: 0x1066840)
// Original: gameswf::clearFonts
// ----------------------------------------------------------------------------
void gameswf::clearFonts(gameswf::Self *self)
{
  int v1;
  gameswf::Self **v2;
  gameswf::Self **v3;
  int v4;
  int v5;
  gameswf::Self **v6;
  int v7;
  gameswf::TextureCache::Self *v8;
  int v9;
  int v10;
  gameswf::CharacterHandle::Self *v11;
  int v12;
  int v13;
  int v14;
  typedef unsigned int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef gameswf::Self *_g4_t_DefaultContext;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef gameswf::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[8];
  typedef void *_g4_t_v27;
  typedef gameswf::Self *_g4_t_v28;
  typedef int16_t _g4_t_v29;
  typedef int16_t _g4_t_v30;
  typedef uint32_t _g4_t_v31[15];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v16)) > _g4_s1 ? (32u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v18)) > _g4_s3 ? (36u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_DefaultContext)) > _g4_s4 ? (40u + sizeof(_g4_t_DefaultContext)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v21)) > _g4_s6 ? (44u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v22)) > _g4_s7 ? (48u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v23)) > _g4_s8 ? (52u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v24)) > _g4_s9 ? (56u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v25)) > _g4_s10 ? (60u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v26)) > _g4_s11 ? (64u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v27)) > _g4_s12 ? (72u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v28)) > _g4_s13 ? (76u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v29)) > _g4_s14 ? (80u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (82u + sizeof(_g4_t_v30)) > _g4_s15 ? (82u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v31)) > _g4_s16 ? (92u + sizeof(_g4_t_v31)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_DefaultContext &DefaultContext = *reinterpret_cast<_g4_t_DefaultContext *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 82u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);

  v31[11] = (uint32_t)(uintptr_t)(&self);
  DefaultContext = self;
  if ( self == nullptr )
    DefaultContext = (gameswf::Self *)gameswf::getDefaultContext();
  v1 = 0;
  v26[0] = 1;
  v29 = -1;
  v26[1] = 0;
  v22 = nullptr;
  HIBYTE(v30) = ((uint16_t)(v30 | 0x7F) >> 8) | 1;
  v23 = 0;
  v24 = 0;
  LOBYTE(v30) = 127;
  v25 = 0;
  if ( *((int *)DefaultContext + 7) > 0 )
  {
    v20 = 0;
    v2 = &v22;
    do
    {
      v16 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)DefaultContext + 6) + 4 * v20) + 208);
      gameswf::RenderFX::getRootHandle((gameswf::RenderFX::Self *)v31);
      gameswf::RenderFX::findCharacters(v16, (int)(uintptr_t)(v2), (gameswf::CharacterHandle::Self *)v31, nullptr, 16);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v31);
      v1 = (int)(uintptr_t)(v2[1]);
      if ( v1 > 0 )
      {
        v3 = v2;
        v4 = 0;
        v5 = 0;
        v6 = v3;
        do
        {
          v17 = (int)(uintptr_t)(v6);
          v18 = v4;
          gameswf::CharacterHandle::setText((gameswf::Self *)((char *)*v6 + v4), (const gameswf::String::Self *)v26);
          v6 = (gameswf::Self **)v17;
          ++v5;
          v4 = v18 + 36;
          v1 = *(uint32_t *)(v17 + 4);
        }
        while ( v1 > v5 );
        v2 = (gameswf::Self **)v17;
      }
      ++v20;
    }
    while ( *((uint32_t *)DefaultContext + 7) > v20 );
  }
  v7 = *((uint32_t *)DefaultContext + 3);
  if ( v7 != 0 )
  {
    v8 = *(gameswf::TextureCache::Self **)(v7 + 36);
    if ( v8 != nullptr )
    {
      gameswf::TextureCache::reset(v8);
      v1 = v23;
    }
  }
  if ( v1 <= 0 )
  {
    if ( v1 < 0 )
    {
      v13 = v1;
      v14 = 36 * v1;
      do
      {
        if ( (gameswf::Self *)((char *)v22 + v14) != nullptr )
          gameswf::CharacterHandle::Construct((gameswf::Self *)((char *)v22 + v14), nullptr);
        v14 += 36;
        ++v13;
      }
      while ( v13 != 0 );
    }
  }
  else
  {
    v9 = 0;
    v21 = v1;
    v10 = 0;
    do
    {
      ++v9;
      v11 = (gameswf::CharacterHandle::Self *)((gameswf::Self *)((char *)v22 + v10));
      v10 += 36;
      gameswf::CharacterHandle::Destroy(v11);
    }
    while ( v9 != v21 );
  }
  v23 = 0;
  if ( v25 == 0 )
  {
    v12 = v24;
    v24 = 0;
    if ( v22 != nullptr )
      gameswf::free_internal(v22, (void *)(36 * v12), v15);
    v22 = nullptr;
  }
  if ( v26[0] == 0xFF && (v30 & 0x100) != 0 )
    gameswf::free_internal(v28, v27, v15);
}

// ----------------------------------------------------------------------------
// Function: gameswf::destroyContext  (binary VA: 0x1066a90)
// Original: gameswf::destroyContext
// ----------------------------------------------------------------------------
int gameswf::destroyContext(gameswf::Self *self)
{
  int result;
  unsigned int v2;

  if ( self != nullptr )
  {
    (**(void (***)(gameswf::Self *))self)(self);
    return gameswf::free_internal(self, nullptr, v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::finalize  (binary VA: 0x1066ae0)
// Original: gameswf::finalize
// ----------------------------------------------------------------------------
int gameswf::finalize()
{
  gameswf::Self *v0;
  gameswf::Self *v2;
  gameswf::Self *v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  unsigned int v7;

  gameswf::destroyContext((gameswf::Self *)dword_20E2D00);
  dword_20E2D00 = 0;
  v0 = (gameswf::Self *)gameswf::s_render_handler;
  if ( gameswf::s_render_handler != nullptr )
  {
    (*(void (**)(uint32_t *))*gameswf::s_render_handler)((uint32_t *)(gameswf::s_render_handler));
    gameswf::free_internal(v0, nullptr, v7);
    gameswf::s_render_handler = nullptr;
  }
  gameswf::clearsTagLoaders(v2);
  gameswf::clearStandardFNames(v3);
  gameswf::clearStandardMethodMap(v4);
  gameswf::clearStandardPropertyMap(v5);
  return (int)(uintptr_t)(gameswf::clearDisasm(v6));
}

// ----------------------------------------------------------------------------
// Function: gameswf::getGameSwfVersion  (binary VA: 0x1066b70)
// Original: gameswf::getGameSwfVersion
// ----------------------------------------------------------------------------
const char * gameswf::getGameSwfVersion()
{
  return "UNKNOWN";
}

// ----------------------------------------------------------------------------
// Function: gameswf::getProfilingData  (binary VA: 0x1066b90)
// Original: gameswf::getProfilingData
// ----------------------------------------------------------------------------
uint32_t * gameswf::getProfilingData(uint32_t *a1)
{
  *a1 = gameswf::s_profilingData;
  a1[1] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20E2CE4));
  a1[2] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20E2CE8));
  a1[3] = (uint32_t)(uintptr_t)((*(uint32_t *)unk_20E2CEC));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::initMemoryAllocator  (binary VA: 0x1066c80)
// Original: gameswf::initMemoryAllocator
// ----------------------------------------------------------------------------
void gameswf::initMemoryAllocator()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::closeMemoryAllocator  (binary VA: 0x1066c90)
// Original: gameswf::closeMemoryAllocator
// ----------------------------------------------------------------------------
void gameswf::closeMemoryAllocator()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::dumpMemoryAllocator  (binary VA: 0x1066ca0)
// Original: gameswf::dumpMemoryAllocator
// ----------------------------------------------------------------------------
void gameswf::dumpMemoryAllocator()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::malloc_internal  (binary VA: 0x1066cb0)
// Original: gameswf::malloc_internal
// ----------------------------------------------------------------------------
int gameswf::malloc_internal(size_t a1)
{
  return sub_4EBF10(a1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::malloc_internal  (binary VA: 0x1066ce0)
// Original: gameswf::malloc_internal
// ----------------------------------------------------------------------------
int gameswf::malloc_internal(size_t a1, int a2, int a3, int a4)
{
  return sub_4EBF50(a1, 0, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::free_internal  (binary VA: 0x1066d20)
// Original: gameswf::free_internal
// ----------------------------------------------------------------------------
int gameswf::free_internal(gameswf::Self *self)
{
  return sub_4EBF90((int)(uintptr_t)(self));
}

// ----------------------------------------------------------------------------
// Function: gameswf::realloc_internal  (binary VA: 0x1066d50)
// Original: gameswf::realloc_internal
// ----------------------------------------------------------------------------
void * gameswf::realloc_internal(gameswf::Self *src, size_t a2, size_t a3)
{
  size_t n;
  void *dest;

  n = a2;
  dest = (void *)gameswf::malloc_internal(a2);
  if ( a3 <= a2 )
    n = a3;
  memcpy(dest, src, n);
  gameswf::free_internal(src);
  return dest;
}

// ----------------------------------------------------------------------------
// Function: gameswf::realloc_internal  (binary VA: 0x1066dd0)
// Original: gameswf::realloc_internal
// ----------------------------------------------------------------------------
void * gameswf::realloc_internal(gameswf::Self *src, size_t a2, size_t a3, int a4, int a5, int a6)
{
  size_t n;
  void *dest;

  n = a2;
  dest = (void *)gameswf::malloc_internal(a2, a4, a5, a6);
  if ( a3 <= a2 )
    n = a3;
  memcpy(dest, src, n);
  gameswf::free_internal(src);
  return dest;
}

// ----------------------------------------------------------------------------
// Function: opNew_ea1066e60  (binary VA: 0x1066e60)
// Original: operator new
// ----------------------------------------------------------------------------
int opNew_ea1066e60(size_t a1)
{
  return gameswf::malloc_internal(a1);
}

// ----------------------------------------------------------------------------
// Function: opNew  (binary VA: 0x1066ec0)
// Original: operator new
// ----------------------------------------------------------------------------
int opNew(size_t a1, int a2, int a3, int a4)
{
  return gameswf::malloc_internal(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::stringPrintf  (binary VA: 0x1067ae0)
// Original: gameswf::stringPrintf
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::stringPrintf(gameswf::Self *self, char *format, char __varargs)
{
  char *v3; // kr00_4
  gameswf::Self *v4;
  int v5;
  typedef const char *_g4_t_arg;
  typedef char _g4_t_s[512];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (12u + sizeof(_g4_t_arg)) > _g4_s0 ? (12u + sizeof(_g4_t_arg)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_s)) > _g4_s1 ? (28u + sizeof(_g4_t_s)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_arg &arg = *reinterpret_cast<_g4_t_arg *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 28u);

  vsnprintf(s, 0x1F4u, format, &__varargs);
  *(uint8_t *)self = 1;
  *((uint8_t *)self + 1) = 0;
  v3 = &s[strlen(s)];
  gameswf::String::resize(self, v3 - s);
  v4 = (gameswf::Self *)((char *)self + 1);
  if ( *(uint8_t *)self == 0xFF )
    v4 = *((gameswf::Self **)self + 3);
  gameswf::Strcpy_s(v4, (char *)(v3 - s + 1), (gameswf::Self *)s, arg);
  v5 = *((uint32_t *)self + 4) | 0x7FFFFF;
  *((uint32_t *)self + 4) = v5;
  *((uint8_t *)self + 18) = BYTE2(v5) & 0x7F;
  *((uint8_t *)self + 19) = HIBYTE(v5) | 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::validateTypes  (binary VA: 0x1067c90)
// Original: gameswf::validateTypes
// ----------------------------------------------------------------------------
char gameswf::validateTypes()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::decodeNextUnicodeCharacter  (binary VA: 0x106aa60)
// Original: gameswf::decodeNextUnicodeCharacter
// ----------------------------------------------------------------------------
int16_t gameswf::decodeNextUnicodeCharacter(char **self)
{
  char *v1;
  unsigned int v2;
  char v3; // si
  char v4;
  char v5; // di
  char v6;
  char v7;
  char v8;
  char v9;
  char v10;
  char v11;
  char v12; // di
  char v13;
  char v14;
  char v15; // di
  char v16;
  char v17;
  char v18;
  char v19; // di
  char v20;
  char v21;
  char v22;
  char v24;
  char v25;
  char v26;
  char v27;
  char v28;
  char v29;

  v1 = *self;
  LOWORD(v2) = 0;
  v3 = **self;
  if ( v3 != 0 )
  {
    *self = v1 + 1;
    if ( v3 < 0 )
    {
      if ( (v3 & 0xE0) == 0xC0 )
      {
        v10 = v1[1];
        if ( v10 != 0 )
        {
          LOWORD(v2) = -3;
          if ( (v10 & 0xC0) == 0x80 )
          {
            *self = v1 + 2;
            v2 = v10 & 0x3F | ((v3 & 0x1F) << 6);
            if ( v2 <= 0x7F )
              LOWORD(v2) = -3;
          }
        }
      }
      else if ( (v3 & 0xF0) == 0xE0 )
      {
        v11 = v1[1];
        if ( v11 != 0 )
        {
          v12 = v1[1];
          LOWORD(v2) = -3;
          if ( (v11 & 0xC0) == 0x80 )
          {
            *self = v1 + 2;
            LOWORD(v2) = 0;
            v13 = v1[2];
            if ( v13 != 0 )
            {
              LOWORD(v2) = -3;
              if ( (v13 & 0xC0) == 0x80 )
              {
                *self = v1 + 3;
                v2 = v13 & 0x3F | ((v12 & 0x3F) << 6) | (uint16_t)(v3 << 12);
                if ( v2 <= 0x7FF || v2 - 55296 <= 0x7FF )
                {
                  LOWORD(v2) = -3;
                }
                else if ( v2 - 65534 <= 1 )
                {
                  LOWORD(v2) = -3;
                }
              }
            }
          }
        }
      }
      else if ( (v3 & 0xF8) == 0xF0 )
      {
        v14 = v1[1];
        if ( v14 != 0 )
        {
          v15 = v1[1];
          LOWORD(v2) = -3;
          if ( (v14 & 0xC0) == 0x80 )
          {
            *self = v1 + 2;
            LOWORD(v2) = 0;
            v16 = v1[2];
            if ( v16 != 0 )
            {
              LOWORD(v2) = -3;
              v25 = v1[2];
              if ( (v16 & 0xC0) == 0x80 )
              {
                *self = v1 + 3;
                LOWORD(v2) = 0;
                v17 = v1[3];
                if ( v17 != 0 )
                {
                  LOWORD(v2) = -3;
                  if ( (v17 & 0xC0) == 0x80 )
                  {
                    *self = v1 + 4;
                    v2 = ((v25 & 0x3F) << 6) | v17 & 0x3F | ((v15 & 0x3F) << 12) | ((v3 & 7) << 18);
                    if ( v2 <= 0xFFFF )
                      LOWORD(v2) = -3;
                  }
                }
              }
            }
          }
        }
      }
      else if ( (v3 & 0xFC) == 0xF8 )
      {
        v18 = v1[1];
        if ( v18 != 0 )
        {
          v19 = v1[1];
          LOWORD(v2) = -3;
          if ( (v18 & 0xC0) == 0x80 )
          {
            *self = v1 + 2;
            LOWORD(v2) = 0;
            v20 = v1[2];
            if ( v20 != 0 )
            {
              LOWORD(v2) = -3;
              v26 = v1[2];
              if ( (v20 & 0xC0) == 0x80 )
              {
                *self = v1 + 3;
                LOWORD(v2) = 0;
                v21 = v1[3];
                if ( v21 != 0 )
                {
                  LOWORD(v2) = -3;
                  v28 = v1[3];
                  if ( (v21 & 0xC0) == 0x80 )
                  {
                    *self = v1 + 4;
                    LOWORD(v2) = 0;
                    v22 = v1[4];
                    if ( v22 != 0 )
                    {
                      LOWORD(v2) = -3;
                      if ( (v22 & 0xC0) == 0x80 )
                      {
                        *self = v1 + 5;
                        v2 = ((v28 & 0x3F) << 6)
                           | ((v26 & 0x3F) << 12)
                           | v22 & 0x3F
                           | ((v19 & 0x3F) << 18)
                           | ((v3 & 3) << 24);
                        if ( v2 <= 0x1FFFFF )
                          LOWORD(v2) = -3;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        LOWORD(v2) = -3;
        if ( (v3 & 0xFE) == 0xFC )
        {
          LOWORD(v2) = 0;
          v4 = v1[1];
          if ( v4 != 0 )
          {
            v5 = v1[1];
            LOWORD(v2) = -3;
            if ( (v4 & 0xC0) == 0x80 )
            {
              *self = v1 + 2;
              LOWORD(v2) = 0;
              v6 = v1[2];
              if ( v6 != 0 )
              {
                LOWORD(v2) = -3;
                v24 = v1[2];
                if ( (v6 & 0xC0) == 0x80 )
                {
                  *self = v1 + 3;
                  LOWORD(v2) = 0;
                  v7 = v1[3];
                  if ( v7 != 0 )
                  {
                    LOWORD(v2) = -3;
                    v27 = v1[3];
                    if ( (v7 & 0xC0) == 0x80 )
                    {
                      *self = v1 + 4;
                      LOWORD(v2) = 0;
                      v8 = v1[4];
                      if ( v8 != 0 )
                      {
                        LOWORD(v2) = -3;
                        v29 = v1[4];
                        if ( (v8 & 0xC0) == 0x80 )
                        {
                          *self = v1 + 5;
                          LOWORD(v2) = 0;
                          v9 = v1[5];
                          if ( v9 != 0 )
                          {
                            LOWORD(v2) = -3;
                            if ( (v9 & 0xC0) == 0x80 )
                            {
                              *self = v1 + 6;
                              v2 = ((v29 & 0x3F) << 6)
                                 | ((v27 & 0x3F) << 12)
                                 | ((v24 & 0x3F) << 18)
                                 | v9 & 0x3F
                                 | ((v5 & 0x3F) << 24)
                                 | ((v3 & 1) << 30);
                              if ( v2 <= 0x3FFFFFF )
                                LOWORD(v2) = -3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      LOWORD(v2) = v3;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::encodeUnicodeCharacter  (binary VA: 0x106af30)
// Original: gameswf::encodeUnicodeCharacter
// ----------------------------------------------------------------------------
unsigned int gameswf::encodeUnicodeCharacter(gameswf::Self *self, char *a2, unsigned int a3)
{
  unsigned int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  result = a3;
  if ( a3 <= 0x7F )
  {
    v6 = *(uint32_t *)a2;
    *((uint8_t *)self + v6) = a3;
    *(uint32_t *)a2 = v6 + 1;
  }
  else if ( a3 <= 0x7FF )
  {
    v5 = *(uint32_t *)a2;
    result = a3 & 0x3F | 0xFFFFFF80;
    *((uint8_t *)self + v5) = (a3 >> 6) | 0xC0;
    *((uint8_t *)self + v5 + 1) = result;
    *(uint32_t *)a2 = v5 + 2;
  }
  else if ( a3 <= 0xFFFF )
  {
    v8 = *(uint32_t *)a2;
    *((uint8_t *)self + v8) = (a3 >> 12) | 0xE0;
    result = a3 & 0x3F | 0xFFFFFF80;
    *((uint8_t *)self + v8 + 2) = result;
    *((uint8_t *)self + v8 + 1) = (a3 >> 6) & 0x3F | 0x80;
    *(uint32_t *)a2 = v8 + 3;
  }
  else if ( a3 <= 0x1FFFFF )
  {
    v7 = *(uint32_t *)a2;
    *((uint8_t *)self + v7) = (a3 >> 18) | 0xF0;
    *((uint8_t *)self + v7 + 1) = (a3 >> 12) & 0x3F | 0x80;
    result = a3 & 0x3F | 0xFFFFFF80;
    *((uint8_t *)self + v7 + 3) = result;
    *((uint8_t *)self + v7 + 2) = (a3 >> 6) & 0x3F | 0x80;
    *(uint32_t *)a2 = v7 + 4;
  }
  else if ( a3 <= 0x3FFFFFF )
  {
    v9 = *(uint32_t *)a2;
    *((uint8_t *)self + v9) = HIBYTE(a3) | 0xF8;
    *((uint8_t *)self + v9 + 1) = (a3 >> 18) & 0x3F | 0x80;
    *((uint8_t *)self + v9 + 2) = (a3 >> 12) & 0x3F | 0x80;
    result = a3 & 0x3F | 0xFFFFFF80;
    *((uint8_t *)self + v9 + 4) = result;
    *((uint8_t *)self + v9 + 3) = (a3 >> 6) & 0x3F | 0x80;
    *(uint32_t *)a2 = v9 + 5;
  }
  else if ( (a3 & 0x80000000) == 0 )
  {
    v4 = *(uint32_t *)a2;
    *((uint8_t *)self + v4) = (a3 >> 30) | 0xFC;
    *((uint8_t *)self + v4 + 1) = HIBYTE(a3) & 0x3F | 0x80;
    *((uint8_t *)self + v4 + 2) = (a3 >> 18) & 0x3F | 0x80;
    *((uint8_t *)self + v4 + 3) = (a3 >> 12) & 0x3F | 0x80;
    result = a3 & 0x3F | 0xFFFFFF80;
    *((uint8_t *)self + v4 + 5) = result;
    *((uint8_t *)self + v4 + 4) = (a3 >> 6) & 0x3F | 0x80;
    *(uint32_t *)a2 = v4 + 6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Strnlen_s  (binary VA: 0x106b130)
// Original: gameswf::Strnlen_s
// ----------------------------------------------------------------------------
const char * gameswf::Strnlen_s(gameswf::Self *self, const char *a2)
{
  const char *result;
  int v3;

  result = a2;
  if ( a2 != nullptr )
  {
    v3 = 0;
    if ( *(uint8_t *)self != 0 )
    {
      while ( (const char *)++v3 != a2 )
      {
        if ( *((uint8_t *)self + v3) == 0 )
          return (const char *)(v3 + 1);
      }
    }
    else
    {
      return (const char *)((uint8_t *)(&dword_0 + 1));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Strcpy_s  (binary VA: 0x106b170)
// Original: gameswf::Strcpy_s
// ----------------------------------------------------------------------------
int gameswf::Strcpy_s(gameswf::Self *self, char *a2, gameswf::Self *src)
{
  int v3;

  v3 = 34;
  if ( a2 != nullptr && self != nullptr && src != nullptr )
  {
    if ( a2 >= gameswf::Strnlen_s(src, a2) )
    {
      v3 = 0;
      strcpy((char *)self, (const char *)src);
    }
    else
    {
      *(uint8_t *)self = 0;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Strncpy_s  (binary VA: 0x106b200)
// Original: gameswf::Strncpy_s
// ----------------------------------------------------------------------------
int gameswf::Strncpy_s(gameswf::Self *self, char *a2, unsigned int a3, char *a4)
{
  int result;
  gameswf::Self *v5;
  const char *v6;
  char i;

  result = 1;
  v5 = self;
  if ( a4 <= a2 && self != nullptr && a3 != 0 )
  {
    v6 = nullptr;
    if ( a4 != nullptr )
    {
      for ( i = *(uint8_t *)a3; i != 0; i = v6[a3] )
      {
        ++v6;
        *(uint8_t *)v5 = i;
        v5 = (gameswf::Self *)((char *)v5 + 1);
        if ( v6 == a4 )
          break;
      }
    }
    result = 0;
    if ( a2 > v6 )
      *(uint8_t *)v5 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getNAN  (binary VA: 0x106b260)
// Original: gameswf::getNAN
// ----------------------------------------------------------------------------
long double gameswf::getNAN()
{
  return NAN;
}

// ----------------------------------------------------------------------------
// Function: gameswf::call_method  (binary VA: 0x106c2d0)
// Original: gameswf::call_method
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::call_method(gameswf::Self *self, const gameswf::ASValue::Self *a2, gameswf::ASEnvironment::Self *a3, const gameswf::ASValue::Self *a4, int a5, int a6, char *a7)
{
  int *v7;
  int v8;
  void (*v9)(int *, uint32_t *);
  int v10;
  uint32_t v12[10];

  *(uint8_t *)self = 0;
  *((uint8_t *)self + 1) = 0;
  v7 = (int *)gameswf::ASValue::toFunction(a2);
  if ( v7 != nullptr )
  {
    v8 = *v7;
    v12[0] = (uint32_t)(uintptr_t)(self);
    v12[2] = (uint32_t)(uintptr_t)(a4);
    v9 = *(void (**)(int *, uint32_t *))(v8 + 104);
    v12[3] = (uint32_t)(uintptr_t)(a3);
    v12[4] = a5;
    v12[5] = a6;
    v12[6] = (uint32_t)(uintptr_t)(a7);
    v10 = 0;
    if ( *(uint8_t *)a4 == 5 )
      v10 = *((uint32_t *)a4 + 1);
    v12[1] = v10;
    v9(v7, v12);
  }
  else if ( *(uint8_t *)a2 != 0 )
  {
    gameswf::logError((gameswf::Self *)"error in call_method(): method '%s' is not a function\n", a7);
  }
  else
  {
    gameswf::logError((gameswf::Self *)"error in call_method(): method '%s' is undefined\n", a7);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::call_method  (binary VA: 0x106c3a0)
// Original: gameswf::call_method
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::call_method(gameswf::Self *self, gameswf::ASEnvironment::Self *a2, gameswf::ASObject::Self *a3, char *a4, const gameswf::ASValue::Self *a5, int a6)
{
  gameswf::ASEnvironment::Self *v6;
  int v7;
  gameswf::ASValue::Self *v8;
  int v9;
  gameswf::Self *v10;
  gameswf::ASValue::Self *v11;
  int v12;
  int v13;
  gameswf::Self *v14;
  size_t v15;
  gameswf::Self *v16;
  gameswf::Self *v17;
  int MemberIndex;
  int v19;
  gameswf::ASValue::Self *v20;
  gameswf::ASValue::Self *v21;
  gameswf::ASValue::Self *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  uint8_t *v27;
  int v28;
  int v29;
  gameswf::Self **v30;
  gameswf::RefCounted::Self *v31;
  gameswf::Self *v33;
  int v34;
  int v36;
  uint32_t *v37;
  typedef gameswf::ASValue::Self *_g4_t_v38;
  typedef gameswf::ASValue::Self *_g4_t_v39;
  typedef gameswf::ASValue::Self *_g4_t_v40;
  typedef gameswf::ASValue::Self *_g4_t_v41;
  typedef gameswf::ASValue::Self *_g4_t_v42;
  typedef gameswf::ASValue::Self *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef gameswf::ASValue::Self *_g4_t_v45;
  typedef gameswf::Self *_g4_t_v46;
  typedef gameswf::RefCounted::Self *_g4_t_v47;
  typedef char *_g4_t_s;
  typedef int _g4_t_sa;
  typedef gameswf::Self *_g4_t_v50;
  typedef gameswf::ASValue::Self *_g4_t_v51;
  typedef gameswf::ASValue::Self *_g4_t_v52;
  typedef gameswf::ASValue::Self *_g4_t_v53;
  typedef uint8_t _g4_t_v54[16];
  typedef uint8_t _g4_t_v55[4];
  typedef gameswf::RefCounted::Self *_g4_t_v56;
  typedef uint8_t _g4_t_v57[12];
  typedef gameswf::Self *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef char _g4_t_v62;
  typedef char _g4_t_v63;
  typedef gameswf::Self *_g4_t_v64;
  typedef int16_t _g4_t_v65;
  typedef char _g4_t_v66;
  typedef char _g4_t_v67;
  typedef char _g4_t_v68;
  typedef char _g4_t_v69;
  typedef gameswf::Self *_g4_t_v70;
  typedef int16_t _g4_t_v71;
  typedef char _g4_t_v72;
  typedef char _g4_t_v73;
  typedef unsigned int _g4_t_v74[2];
  typedef gameswf::Self *_g4_t_v75;
  typedef int16_t _g4_t_v76;
  typedef char _g4_t_v77;
  typedef char _g4_t_v78;
  typedef gameswf::Self **_g4_t_v79;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v39)) > _g4_s1 ? (0u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v40)) > _g4_s2 ? (0u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v41)) > _g4_s3 ? (0u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v42)) > _g4_s4 ? (0u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v43)) > _g4_s5 ? (0u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v44)) > _g4_s6 ? (4u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v45)) > _g4_s7 ? (8u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v46)) > _g4_s8 ? (12u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v47)) > _g4_s9 ? (16u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_s)) > _g4_s10 ? (20u + sizeof(_g4_t_s)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_sa)) > _g4_s11 ? (20u + sizeof(_g4_t_sa)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v50)) > _g4_s12 ? (24u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v51)) > _g4_s13 ? (28u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v52)) > _g4_s14 ? (28u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v53)) > _g4_s15 ? (28u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v54)) > _g4_s16 ? (32u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v55)) > _g4_s17 ? (48u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v56)) > _g4_s18 ? (52u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v57)) > _g4_s19 ? (68u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v58)) > _g4_s20 ? (80u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v59)) > _g4_s21 ? (84u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v60)) > _g4_s22 ? (88u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v61)) > _g4_s23 ? (92u + sizeof(_g4_t_v61)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v62)) > _g4_s24 ? (96u + sizeof(_g4_t_v62)) : _g4_s24,
    _g4_s26 = (97u + sizeof(_g4_t_v63)) > _g4_s25 ? (97u + sizeof(_g4_t_v63)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v64)) > _g4_s26 ? (108u + sizeof(_g4_t_v64)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v65)) > _g4_s27 ? (112u + sizeof(_g4_t_v65)) : _g4_s27,
    _g4_s29 = (114u + sizeof(_g4_t_v66)) > _g4_s28 ? (114u + sizeof(_g4_t_v66)) : _g4_s28,
    _g4_s30 = (115u + sizeof(_g4_t_v67)) > _g4_s29 ? (115u + sizeof(_g4_t_v67)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v68)) > _g4_s30 ? (128u + sizeof(_g4_t_v68)) : _g4_s30,
    _g4_s32 = (129u + sizeof(_g4_t_v69)) > _g4_s31 ? (129u + sizeof(_g4_t_v69)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v70)) > _g4_s32 ? (140u + sizeof(_g4_t_v70)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v71)) > _g4_s33 ? (144u + sizeof(_g4_t_v71)) : _g4_s33,
    _g4_s35 = (146u + sizeof(_g4_t_v72)) > _g4_s34 ? (146u + sizeof(_g4_t_v72)) : _g4_s34,
    _g4_s36 = (147u + sizeof(_g4_t_v73)) > _g4_s35 ? (147u + sizeof(_g4_t_v73)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v74)) > _g4_s36 ? (160u + sizeof(_g4_t_v74)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v75)) > _g4_s37 ? (172u + sizeof(_g4_t_v75)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v76)) > _g4_s38 ? (176u + sizeof(_g4_t_v76)) : _g4_s38,
    _g4_s40 = (178u + sizeof(_g4_t_v77)) > _g4_s39 ? (178u + sizeof(_g4_t_v77)) : _g4_s39,
    _g4_s41 = (179u + sizeof(_g4_t_v78)) > _g4_s40 ? (179u + sizeof(_g4_t_v78)) : _g4_s40,
    _g4_s42 = (200u + sizeof(_g4_t_v79)) > _g4_s41 ? (200u + sizeof(_g4_t_v79)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 20u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 68u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 80u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 92u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 96u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 97u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 108u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 112u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 114u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 115u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 128u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 129u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 140u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 144u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 146u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 147u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 160u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 172u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 176u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 178u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 179u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 200u);

  v79 = &self;
  v6 = a2;
  v46 = self;
  v47 = (gameswf::RefCounted::Self *)(a3);
  v7 = *((uint32_t *)a2 + 1);
  v8 = (gameswf::ASValue::Self *)(a6 - 1);
  s = a4;
  v44 = v7 - 1;
  if ( a6 - 1 >= 0 )
  {
    v51 = (gameswf::ASValue::Self *)((const gameswf::ASValue::Self *)((char *)a5 + 12 * (uint32_t)(uintptr_t)(v8)));
    v9 = v7 + 1;
    v45 = *((gameswf::ASValue::Self **)a2 + 2);
    if ( v7 + 1 > (int)(uintptr_t)(v45) )
      goto LABEL_8;
LABEL_3:
    v10 = *(gameswf::Self **)v6;
    while ( 1 )
    {
      v11 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v10 + 12 * v7));
      if ( v11 != nullptr )
      {
        *(uint8_t *)v11 = 0;
        *((uint8_t *)v11 + 1) = 0;
        v38 = v8;
        gameswf::ASValue::opAssign(v11, v51);
        v8 = v38;
      }
      v8 = (gameswf::ASValue::Self *)((char *)v8 - 1);
      v51 = (gameswf::ASValue::Self *)((char *)v51 - 12);
      *((uint32_t *)v6 + 1) = v9;
      if ( v8 == (gameswf::ASValue::Self *)-1 )
        break;
      v7 = v9;
      v45 = *((gameswf::ASValue::Self **)v6 + 2);
      if ( ++v9 <= (int)(uintptr_t)(v45) )
        goto LABEL_3;
LABEL_8:
      if ( *((uint32_t *)v6 + 3) != 0 )
        goto LABEL_3;
      v12 = v9 + (v9 >> 1);
      *((uint32_t *)v6 + 2) = v12;
      if ( v12 != 0 )
      {
        v42 = v8;
        if ( *(uint32_t *)v6 != 0 )
          v10 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v6, 12 * v12, 12 * (uint32_t)(uintptr_t)(v45));
        else
          v10 = (gameswf::Self *)gameswf::malloc_internal(12 * v12);
        *(uint32_t *)v6 = (uint32_t)(uintptr_t)(v10);
        v7 = *((uint32_t *)v6 + 1);
        v8 = v42;
      }
      else
      {
        if ( *(uint32_t *)v6 != 0 )
        {
          v39 = v8;
          gameswf::free_internal(*(gameswf::Self **)v6);
          v7 = *((uint32_t *)v6 + 1);
          v8 = v39;
        }
        *(uint32_t *)v6 = 0;
        v10 = nullptr;
      }
    }
  }
  v13 = *((uint32_t *)v6 + 53);
  v58 = nullptr;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v54[0] = 0;
  v54[1] = 0;
  if ( v13 != 0 )
  {
    v14 = *((gameswf::Self **)v6 + 52);
    if ( *((uint8_t *)v14 + 2) == 0 )
    {
      if ( (*(uint16_t *)v14)-- == 1 )
        gameswf::free_internal(v14);
      *((uint32_t *)v6 + 52) = 0;
      *((uint32_t *)v6 + 53) = 0;
      v13 = 0;
    }
  }
  if ( *(uint8_t *)(v13 + 232) != 0 )
  {
    v68 = 1;
    v69 = 0;
    if ( s != nullptr )
    {
      v15 = strlen(s);
      gameswf::String::resize((gameswf::String::Self *)&v68, v15);
      v16 = (gameswf::Self *)&v69;
      if ( v68 == -1 )
        v16 = v70;
      gameswf::Strcpy_s(v16, (char *)(v15 + 1), (gameswf::Self *)s);
      v71 = -1;
      v62 = 1;
      v72 = 127;
      v73 |= 1u;
      v63 = 0;
      v40 = (gameswf::ASValue::Self *)strlen(s);
      gameswf::String::resize((gameswf::String::Self *)&v62, (int)(uintptr_t)(v40));
      v17 = (gameswf::Self *)&v63;
      if ( v62 == -1 )
        v17 = v64;
      gameswf::Strcpy_s(v17, (char *)v40 + 1, (gameswf::Self *)s);
    }
    else
    {
      v71 = -1;
      v62 = 1;
      v72 = 127;
      v73 |= 1u;
      v63 = 0;
    }
    v65 = -1;
    v66 = 127;
    v67 |= 1u;
    MemberIndex = gameswf::ASObject::getMemberIndex(v47, (const gameswf::String::Self *)&v62);
    gameswf::ASObject::getMemberAt(v47, MemberIndex, (const gameswf::String::Self *)&v68, (gameswf::ASValue::Self *)v54);
    if ( v62 == -1 && (v67 & 1) != 0 )
      gameswf::free_internal(v64);
    if ( v68 == -1 && (v73 & 1) != 0 )
      gameswf::free_internal(v70);
  }
  else
  {
    LOWORD(v74[0]) = 1;
    if ( s != nullptr )
    {
      v43 = (gameswf::ASValue::Self *)strlen(s);
      gameswf::String::resize((gameswf::String::Self *)v74, (int)(uintptr_t)(v43));
      v33 = (gameswf::Self *)((char *)v74 + 1);
      if ( LOBYTE(v74[0]) == 0xFF )
        v33 = v75;
      gameswf::Strcpy_s(v33, (char *)v43 + 1, (gameswf::Self *)s);
    }
    v76 = -1;
    v77 = 127;
    v78 |= 1u;
    gameswf::ASEnvironment::getVariable(v57);
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v54, (const gameswf::ASValue::Self *)v57);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v57);
    if ( LOBYTE(v74[0]) == 0xFF && (v78 & 1) != 0 )
      gameswf::free_internal(v75);
  }
  v19 = *((uint32_t *)v6 + 1) - 1;
  v55[0] = 5;
  v52 = (gameswf::ASValue::Self *)(v19 - v44);
  v55[1] = 0;
  v56 = v47;
  if ( v47 != nullptr )
    gameswf::RefCounted::addRef(v47);
  gameswf::call_method(v46, (const gameswf::ASValue::Self *)v54, v6, (const gameswf::ASValue::Self *)v55, (int)(uintptr_t)(v52), v19, s);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v55);
  v20 = *((gameswf::ASValue::Self **)v6 + 1);
  v21 = (gameswf::ASValue::Self *)(v20 - v52);
  sa = v20 - v52;
  if ( (int)(uintptr_t)(v20) > v20 - v52 )
  {
    v53 = *((gameswf::ASValue::Self **)v6 + 1);
    v50 = (gameswf::Self *)(v6);
    v22 = v21;
    v23 = 12 * (uint32_t)(uintptr_t)(v21);
    do
    {
      v24 = v23;
      v22 = (gameswf::ASValue::Self *)((char *)v22 + 1);
      v23 += 12;
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(*(uint32_t *)v50 + v24));
    }
    while ( v22 != v53 );
    v20 = v53;
    v6 = (gameswf::ASEnvironment::Self *)(v50);
  }
  if ( sa != 0 )
  {
    v25 = *((uint32_t *)v6 + 2);
    if ( sa > v25 && *((uint32_t *)v6 + 3) == 0 )
    {
      v34 = sa + (sa >> 1);
      *((uint32_t *)v6 + 2) = v34;
      if ( v34 != 0 )
      {
        if ( *(uint32_t *)v6 != 0 )
          *(uint32_t *)v6 = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)v6, 12 * v34, 12 * v25));
        else
          *(uint32_t *)v6 = gameswf::malloc_internal(12 * v34);
      }
      else
      {
        if ( *(uint32_t *)v6 != 0 )
          gameswf::free_internal(*(gameswf::Self **)v6);
        *(uint32_t *)v6 = 0;
      }
    }
  }
  v26 = 12 * (uint32_t)(uintptr_t)(v20);
  if ( (int)(uintptr_t)(v20) < sa )
  {
    do
    {
      v27 = (uint8_t *)(*(uint32_t *)v6 + v26);
      if ( v27 != nullptr )
      {
        *v27 = 0;
        v27[1] = 0;
      }
      v20 = (gameswf::ASValue::Self *)((char *)v20 + 1);
      v26 += 12;
    }
    while ( v20 != (gameswf::ASValue::Self *)sa );
  }
  *((uint32_t *)v6 + 1) = sa;
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v54);
  v28 = v59;
  if ( v59 <= 0 )
  {
    if ( v59 < 0 )
    {
      v36 = 8 * v59;
      do
      {
        v37 = (uint32_t *)((char *)v58 + v36);
        if ( (gameswf::Self *)((char *)v58 + v36) != nullptr )
        {
          *v37 = 0;
          v37[1] = 0;
        }
        v36 += 8;
        ++v28;
      }
      while ( v28 != 0 );
    }
  }
  else
  {
    v29 = 0;
    v30 = &v58;
    do
    {
      v31 = *((gameswf::RefCounted::Self **)*v30 + 2 * v29);
      if ( v31 != nullptr )
      {
        v41 = (gameswf::ASValue::Self *)v30;
        gameswf::RefCounted::dropRef(v31);
        v30 = (gameswf::Self **)v41;
      }
      ++v29;
    }
    while ( v29 != v28 );
  }
  v59 = 0;
  if ( v61 == 0 )
  {
    v60 = 0;
    if ( v58 != nullptr )
      gameswf::free_internal(v58);
  }
  return v46;
}

// ----------------------------------------------------------------------------
// Function: gameswf::do_init_action_loader  (binary VA: 0x106ce00)
// Original: gameswf::do_init_action_loader
// ----------------------------------------------------------------------------
int gameswf::do_init_action_loader(gameswf::Self *self, gameswf::Stream::Self *a2, uint32_t *a3)
{
  int U16;
  int v4;
  gameswf::Self *v5;
  uint32_t *v6;
  gameswf::MemBuf::Self ***v7;
  uint32_t *v10;
  uint32_t *v11;
  gameswf::MemBuf::Self ***v12;

  U16 = (uint16_t)gameswf::Stream::readU16(self);
  v4 = a3[6];
  if ( v4 != 0 )
  {
    v5 = (gameswf::Self *)a3[5];
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      if ( (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      a3[5] = 0;
      a3[6] = 0;
      v4 = 0;
    }
  }
  v6 = (uint32_t *)gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(v4 + 76), 0x10u);
  v7 = (gameswf::MemBuf::Self ***)(v6 + 1);
  if ( v6 != nullptr )
  {
    *v6 = ((uint32_t)(uintptr_t)&off_208E0C8);
    v10 = v6;
    v12 = (gameswf::MemBuf::Self ***)(v6 + 1);
    gameswf::ActionBuffer::Construct((gameswf::ActionBuffer::Self *)(v6 + 1));
    v7 = v12;
    v6 = v10;
  }
  v11 = v6;
  gameswf::ActionBuffer::read(v7, self);
  return G4_VCALL<int>(a3, 132, U16, v11);
}

// ----------------------------------------------------------------------------
// Function: gameswf::do_action_loader  (binary VA: 0x106cf00)
// Original: gameswf::do_action_loader
// ----------------------------------------------------------------------------
int gameswf::do_action_loader(gameswf::Self *self, gameswf::Stream::Self *a2, uint32_t *a3)
{
  int v3;
  gameswf::Self *v4;
  uint32_t *v5;
  gameswf::ActionBuffer::Self *v6;

  v3 = a3[6];
  if ( v3 != 0 )
  {
    v4 = (gameswf::Self *)a3[5];
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      a3[5] = 0;
      a3[6] = 0;
      v3 = 0;
    }
  }
  v5 = (uint32_t *)gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(v3 + 76), 0x10u);
  v6 = (gameswf::ActionBuffer::Self *)(v5 + 1);
  if ( v5 != nullptr )
  {
    *v5 = ((uint32_t)(uintptr_t)&off_208E0C8);
    gameswf::ActionBuffer::Construct(v6);
  }
  gameswf::ActionBuffer::read((gameswf::MemBuf::Self ***)v6, self);
  return G4_VCALL<int>(a3, 128, v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::clearStandardFNames  (binary VA: 0x106d390)
// Original: gameswf::clearStandardFNames
// ----------------------------------------------------------------------------
void gameswf::clearStandardFNames()
{
  int v0;
  int v1;
  int v2;
  int v3;
  uint32_t v4;
  int v5;
  int v6;
  int v7;

  v0 = dword_20E2D64;
  if ( (int32_t)dword_20E2D64 <= 0 )
  {
    if ( (int32_t)dword_20E2D64 < 0 )
    {
      v6 = 20 * dword_20E2D64;
      do
      {
        v4 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_28D64)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4)) + v6;
        if ( v4 != 0 )
        {
          v5 = *(uint32_t *)(v4 + 16);
          *(uint8_t *)v4 = 1;
          v5 |= 0x7FFFFFu;
          *(uint8_t *)(v4 + 1) = 0;
          *(uint32_t *)(v4 + 16) = v5;
          *(uint8_t *)(v4 + 18) = BYTE2(v5) & 0x7F;
          *(uint8_t *)(v4 + 19) = HIBYTE(v5) | 1;
        }
        v6 += 20;
        ++v0;
      }
      while ( v0 != 0 );
    }
  }
  else
  {
    v1 = 0;
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_28D64)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4)) + v1;
        if ( *(uint8_t *)v3 == 0xFF && (*(uint8_t *)(v3 + 19) & 1) != 0 )
          break;
        ++v2;
        v1 += 20;
        if ( v2 == v0 )
          goto LABEL_7;
      }
      ++v2;
      v7 = v1;
      gameswf::free_internal(*(gameswf::Self **)(v3 + 12));
      v1 = v7 + 20;
    }
    while ( v2 != v0 );
  }
LABEL_7:
  dword_20E2D64 = 0;
  if ( dword_20E2D6C == 0 )
  {
    dword_20E2D68 = 0;
    if ( dword_20E2D60 != 0 )
      gameswf::free_internal((gameswf::Self *)dword_20E2D60);
    dword_20E2D60 = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::beginAS3Profiling  (binary VA: 0x1071080)
// Original: gameswf::beginAS3Profiling
// ----------------------------------------------------------------------------
void gameswf::beginAS3Profiling()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::endAS3Profiling  (binary VA: 0x1071090)
// Original: gameswf::endAS3Profiling
// ----------------------------------------------------------------------------
void gameswf::endAS3Profiling()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::as3FunctionCall  (binary VA: 0x1072b30)
// Original: gameswf::as3FunctionCall
// ----------------------------------------------------------------------------
int gameswf::as3FunctionCall(int a1)
{
  gameswf::ASValue::Self *v1;
  int result;
  gameswf::RefCounted::Self *v3;
  int v4;
  gameswf::Self *v5;
  gameswf::Self *WeakProxy;
  gameswf::Self *v7;
  bool v8;
  int v9;
  gameswf::ASValue::Self *v10;
  gameswf::ASValue::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  gameswf::RefCounted::Self *v17;
  typedef int _g4_t_v18;
  typedef gameswf::ASValue::Self *_g4_t_v19;
  typedef gameswf::ASValue::Self *_g4_t_v20;
  typedef gameswf::ASValue::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[4];
  typedef gameswf::RefCounted::Self *_g4_t_v29;
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef gameswf::RefCounted::Self *_g4_t_v32;
  typedef uint8_t _g4_t_v33[12];
  typedef uint8_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint8_t _g4_t_v38[144];
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef char _g4_t_v44;
  typedef char _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef gameswf::Self *_g4_t_v50[10];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v21)) > _g4_s3 ? (8u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v22)) > _g4_s4 ? (12u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v23)) > _g4_s5 ? (12u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v24)) > _g4_s6 ? (16u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v25)) > _g4_s7 ? (20u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v26)) > _g4_s8 ? (24u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v27)) > _g4_s9 ? (32u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v28)) > _g4_s10 ? (36u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v29)) > _g4_s11 ? (40u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v30)) > _g4_s12 ? (52u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (53u + sizeof(_g4_t_v31)) > _g4_s13 ? (53u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v32)) > _g4_s14 ? (56u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v33)) > _g4_s15 ? (72u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v34)) > _g4_s16 ? (84u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v35)) > _g4_s17 ? (88u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v36)) > _g4_s18 ? (92u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v37)) > _g4_s19 ? (96u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v38)) > _g4_s20 ? (100u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (244u + sizeof(_g4_t_v39)) > _g4_s21 ? (244u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (248u + sizeof(_g4_t_v40)) > _g4_s22 ? (248u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (252u + sizeof(_g4_t_v41)) > _g4_s23 ? (252u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (256u + sizeof(_g4_t_v42)) > _g4_s24 ? (256u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (260u + sizeof(_g4_t_v43)) > _g4_s25 ? (260u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (264u + sizeof(_g4_t_v44)) > _g4_s26 ? (264u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (265u + sizeof(_g4_t_v45)) > _g4_s27 ? (265u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (276u + sizeof(_g4_t_v46)) > _g4_s28 ? (276u + sizeof(_g4_t_v46)) : _g4_s28,
    _g4_s30 = (280u + sizeof(_g4_t_v47)) > _g4_s29 ? (280u + sizeof(_g4_t_v47)) : _g4_s29,
    _g4_s31 = (284u + sizeof(_g4_t_v48)) > _g4_s30 ? (284u + sizeof(_g4_t_v48)) : _g4_s30,
    _g4_s32 = (288u + sizeof(_g4_t_v49)) > _g4_s31 ? (288u + sizeof(_g4_t_v49)) : _g4_s31,
    _g4_s33 = (292u + sizeof(_g4_t_v50)) > _g4_s32 ? (292u + sizeof(_g4_t_v50)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 53u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 88u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 92u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 96u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 100u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 244u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 248u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 252u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 256u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 260u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 264u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 265u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 276u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 280u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 284u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 288u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 292u);

  v50[6] = (gameswf::Self *)&a1;
  v1 = (gameswf::ASValue::Self *)a1;
  result = *(uint32_t *)(a1 + 16);
  if ( result > 0 )
  {
    v3 = *(gameswf::RefCounted::Self **)(a1 + 4);
    v28[0] = 5;
    v28[1] = 0;
    v29 = v3;
    if ( v3 != nullptr )
      gameswf::RefCounted::addRef(v3);
    if ( (uint8_t)gameswf::ASValue::isFunction((gameswf::ASValue::Self *)v28) != 0 )
    {
      v4 = *((uint32_t *)v1 + 3);
      v25 = *((uint32_t *)v1 + 4);
      v26 = v25 - 1;
      v5 = *(gameswf::Self **)(v4 + 212);
      if ( v5 != nullptr && *(uint8_t *)(*(uint32_t *)(v4 + 208) + 2) == 0 )
      {
        sub_7E5ED0((gameswf::Self **)(v4 + 208), nullptr);
        *(uint32_t *)(v4 + 212) = 0;
        v5 = nullptr;
      }
      v34 = nullptr;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      if ( v26 <= 8 )
      {
        v36 = 8;
        v34 = v38;
        v37 = 1;
      }
      v38[96] = 0;
      v38[97] = 0;
      v38[108] = 0;
      v38[109] = 0;
      v38[120] = 0;
      v38[121] = 0;
      v38[132] = 0;
      v38[133] = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v50[0] = nullptr;
      v50[1] = v5;
      if ( v5 != nullptr )
      {
        WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v5);
        v7 = v50[0];
        if ( WeakProxy != v50[0] )
        {
          if ( v50[0] != nullptr )
          {
            v8 = (*(uint16_t *)v50[0])-- == 1;
            if ( v8 )
            {
              v19 = (gameswf::ASValue::Self *)(WeakProxy);
              gameswf::free_internal(v7);
              WeakProxy = (gameswf::Self *)(v19);
            }
          }
          v50[0] = WeakProxy;
          if ( WeakProxy != nullptr )
            ++*(uint16_t *)WeakProxy;
        }
      }
      else
      {
        sub_7E5ED0(v50, nullptr);
      }
      if ( v25 <= 1 )
      {
        v14 = v35;
      }
      else
      {
        v24 = v35;
        v9 = v35;
        v10 = v1;
        v18 = v25 - 1;
        while ( 1 )
        {
          v12 = *((uint32_t *)v10 + 5);
          v27 = **((uint32_t **)v10 + 3);
          v13 = v9 + 1;
          if ( v9 + 1 > v36 )
          {
            v21 = v10;
            v22 = *((uint32_t *)v10 + 5);
            gameswf::array_gameswf_ASValue_3ea8a1::reserve((gameswf::array<gameswf::ASValue::Self> *)&v34, v13 + (v13 >> 1));
            v9 = v35;
            v12 = v22;
            v10 = v21;
          }
          v11 = (gameswf::ASValue::Self *)&v34[12 * v9];
          if ( v11 != nullptr )
          {
            *(uint8_t *)v11 = 0;
            *((uint8_t *)v11 + 1) = 0;
            v20 = v10;
            gameswf::ASValue::opAssign(v11, (const gameswf::ASValue::Self *)(v27 + 12 * (v12 - v18)));
            v10 = v20;
          }
          v8 = v18-- == 1;
          v35 = v13;
          if ( v8 )
            break;
          v9 = v13;
        }
        v1 = v10;
        v14 = v25 + v24 - 1;
      }
      v15 = v14 - 1;
      v16 = **((uint32_t **)v1 + 3) + 12 * *((uint32_t *)v1 + 5);
      if ( *(uint8_t *)v16 == 5 )
      {
        v17 = *(gameswf::RefCounted::Self **)(v16 + 4);
        v30 = 5;
        v31 = 0;
        v32 = v17;
        if ( v17 != nullptr )
        {
          v23 = v15;
          gameswf::RefCounted::addRef(v17);
          v15 = v23;
        }
      }
      else
      {
        v30 = 5;
        v31 = 0;
        v32 = nullptr;
      }
      gameswf::call_method(
        (gameswf::Self *)v33,
        (const gameswf::ASValue::Self *)v28,
        (gameswf::ASEnvironment::Self *)&v34,
        (const gameswf::ASValue::Self *)&v30,
        v26,
        v15,
        "call");
      gameswf::ASValue::opAssign(*(gameswf::ASValue::Self **)v1, (const gameswf::ASValue::Self *)v33);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v33);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v30);
      gameswf::ASEnvironment::Destroy((gameswf::ASEnvironment::Self *)&v34);
    }
    return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::readVU30  (binary VA: 0x1087750)
// Original: gameswf::readVU30
// ----------------------------------------------------------------------------
char gameswf::readVU30(gameswf::Self *self, int *a2)
{
  char result;
  int v3;
  int v4;
  int v5;
  int v6;

  result = 1;
  v3 = *(uint8_t *)a2;
  *(uint32_t *)self = v3;
  if ( (v3 & 0x80u) != 0 )
  {
    result = 2;
    v4 = v3 & 0x7F | (*((uint8_t *)a2 + 1) << 7);
    *(uint32_t *)self = v4;
    if ( (v4 & 0x4000) != 0 )
    {
      v5 = (*((uint8_t *)a2 + 2) << 14) | v4 & 0x3FFF;
      result = 3;
      *(uint32_t *)self = v5;
      if ( (v5 & 0x200000) != 0 )
      {
        v6 = (*((uint8_t *)a2 + 3) << 21) | v5 & 0x1FFFFF;
        result = 4;
        *(uint32_t *)self = v6;
        if ( (v6 & 0x10000000) != 0 )
        {
          *(uint32_t *)self = (*((uint8_t *)a2 + 4) << 28) | v6 & 0xFFFFFFF;
          return 5;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::clearDisasm  (binary VA: 0x1087e60)
// Original: gameswf::clearDisasm
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::clearDisasm()
{
  gameswf::Self *result;
  int i;
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  gameswf::Self *v8;
  int v9;

  result = (gameswf::Self *)dword_20E4F00;
  if ( dword_20E4F00 != 0 )
  {
    v9 = *(uint32_t *)(dword_20E4F00 + 4);
    if ( v9 >= 0 )
    {
      for ( i = 0; i <= v9; ++i )
      {
        v2 = (uint32_t *)((char *)result + 32 * i + 8);
        if ( *v2 != -2 )
        {
          v3 = *((uint32_t *)result + 8 * i + 7);
          v4 = (uint32_t *)((char *)result + 32 * i + 24);
          if ( v3 < 0 )
          {
            v5 = 4 * v3;
            do
            {
              v6 = (uint32_t *)(*v4 + v5);
              if ( v6 != nullptr )
                *v6 = 0;
              v5 += 4;
              ++v3;
            }
            while ( v3 != 0 );
          }
          v7 = v2[7];
          v2[5] = 0;
          if ( v7 == 0 )
          {
            v8 = (gameswf::Self *)v2[4];
            v2[6] = 0;
            if ( v8 != nullptr )
              gameswf::free_internal(v8);
            v2[4] = 0;
          }
          *v2 = -2;
          v2[1] = 0;
          result = (gameswf::Self *)dword_20E4F00;
        }
      }
    }
    result = (gameswf::Self *)gameswf::free_internal(result);
    dword_20E4F00 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::log_disasm  (binary VA: 0x1087f50)
// Original: gameswf::log_disasm
// ----------------------------------------------------------------------------
int gameswf::log_disasm(gameswf::Self *self)
{
  int v1;
  char *v2;
  int *v3;
  int v4;
  int v5;
  int result;
  int v7;
  int v8;
  const char *v9;
  int i;
  const char *v11;
  unsigned int v12;
  size_t v13;
  int v14;
  int16_t v15;
  size_t v16;
  const char *v17;
  int v18;
  const char *s;
  int v20;
  int v21;
  uint8_t j;
  int v23;
  uint8_t v24;
  const char *v25;
  const char *v26;
  const char *v27;
  const char *v28;
  const char *v29;
  const char *v30;
  const char *v31;
  const char *v32;
  size_t v33;
  int v34;
  int v35;
  gameswf::Self *v36;
  gameswf::Self *v37;

  v1 = 0;
  v2 = nullptr;
  v3 = (int *)&unk_20C3DE0;
  v4 = *(uint8_t *)self;
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == v4 )
      break;
    v3 += 3;
    if ( v5 == 0 )
      goto LABEL_6;
LABEL_3:
    ++v1;
  }
  v3 += 3;
  v2 = (char *)&unk_20C3DE0 + 12 * v1;
  if ( v5 != 0 )
    goto LABEL_3;
LABEL_6:
  if ( v2 != nullptr )
  {
    gameswf::logMsg((gameswf::Self *)"%-15s", *((const char **)v2 + 1));
    result = *((uint32_t *)v2 + 2);
  }
  else
  {
    gameswf::logMsg((gameswf::Self *)"<unknown>[0x%02X]", (const char *)*(uint8_t *)self);
    result = 2;
  }
  if ( (v4 & 0x80) == 0 )
    return gameswf::logMsg((gameswf::Self *)&a0[1], v25);
  v7 = *(uint16_t *)((char *)self + 1);
  switch ( result )
  {
    case 2:
      if ( *(uint16_t *)((char *)self + 1) != 0 )
      {
        v8 = 0;
        do
        {
          v9 = (const char *)*((uint8_t *)self + v8++ + 3);
          gameswf::logMsg((gameswf::Self *)" 0x%02X", v9);
        }
        while ( v8 != v7 );
      }
      return gameswf::logMsg((gameswf::Self *)&a0[1], v25);
    case 1:
      gameswf::logMsg((gameswf::Self *)" \"", v25);
      if ( v7 > 0 )
      {
        for ( i = 0; i != v7; ++i )
        {
          v11 = (const char *)*((uint8_t *)self + i + 3);
          gameswf::logMsg((gameswf::Self *)"%c", v11);
        }
      }
      return gameswf::logMsg((gameswf::Self *)"\"\n", v26);
    case 3:
      return gameswf::logMsg((gameswf::Self *)" %d\n", (const char *)*((uint8_t *)self + 3));
    case 4:
      return gameswf::logMsg((gameswf::Self *)" %d\n", (const char *)*(uint16_t *)((char *)self + 3));
    case 5:
      v12 = *(uint16_t *)((char *)self + 3);
      if ( (v12 & 0x8000) != 0 )
        v12 = *(uint16_t *)((char *)self + 3) | 0xFFFF8000;
      return gameswf::logMsg((gameswf::Self *)" %d\n", (const char *)v12);
    case 6:
      result = gameswf::logMsg((gameswf::Self *)&a0[1], v25);
      if ( v7 > 0 )
      {
        v20 = 0;
        do
        {
          v34 = *((uint8_t *)self + v20 + 3);
          gameswf::logMsg((gameswf::Self *)"\t\t", v28);
          result = v34;
          v21 = v20 + 1;
          if ( v34 != 0 )
          {
            switch ( v34 )
            {
              case 1:
                v20 += 5;
                result = gameswf::logMsg(
                           (gameswf::Self *)"(float) %f\n",
                           (const char *)COERCE_UNSIGNED_INT64(*(float *)((char *)self + v21 + 3)),
                           (uint32_t)HIDWORD(COERCE_UNSIGNED_INT64(*(float *)((char *)self + v21 + 3))));
                break;
              case 2:
                ++v20;
                result = gameswf::logMsg((gameswf::Self *)"NULL\n", v28);
                break;
              case 3:
                ++v20;
                result = gameswf::logMsg((gameswf::Self *)"undef\n", v28);
                break;
              case 4:
                v20 += 2;
                result = gameswf::logMsg((gameswf::Self *)"reg[%d]\n", (const char *)*((uint8_t *)self + v21 + 3));
                break;
              case 5:
                v20 += 2;
                result = gameswf::logMsg((gameswf::Self *)"bool(%d)\n", (const char *)*((uint8_t *)self + v21 + 3));
                break;
              case 6:
                v20 += 9;
                result = gameswf::logMsg((gameswf::Self *)"(double) %f\n", *(const char **)((char *)self + v21 + 7));
                break;
              case 7:
                v20 += 5;
                result = gameswf::logMsg(
                           (gameswf::Self *)"(int) %d\n",
                           (const char *)((*((uint8_t *)self + v21 + 6) << 24)
                                        | *((uint8_t *)self + v21 + 3)
                                        | (*((uint8_t *)self + v21 + 5) << 16)
                                        | (*((uint8_t *)self + v21 + 4) << 8)));
                break;
              case 8:
                v20 += 2;
                result = gameswf::logMsg(
                           (gameswf::Self *)"dict_lookup[%d]\n",
                           (const char *)*((uint8_t *)self + v21 + 3));
                break;
              case 9:
                v20 += 3;
                result = gameswf::logMsg(
                           (gameswf::Self *)"dict_lookup_lg[%d]\n",
                           (const char *)*(uint16_t *)((char *)self + v21 + 3));
                break;
              default:
                ++v20;
                break;
            }
          }
          else
          {
            gameswf::logMsg((gameswf::Self *)"\"", v28);
            for ( j = *((uint8_t *)self + v21 + 3); j != 0; j = *((uint8_t *)self + v21 + 3) )
            {
              ++v21;
              gameswf::logMsg((gameswf::Self *)"%c", (const char *)j);
            }
            v20 = v21 + 1;
            result = gameswf::logMsg((gameswf::Self *)"\"\n", v29);
          }
        }
        while ( v7 > v20 );
      }
      break;
    case 7:
      v36 = (gameswf::Self *)*(uint16_t *)((char *)self + 3);
      result = gameswf::logMsg((gameswf::Self *)" [%d]\n", (const char *)v36);
      if ( (int)(uintptr_t)(v36) > 0 )
      {
        v37 = nullptr;
        v23 = 2;
        do
        {
          gameswf::logMsg((gameswf::Self *)"\t\t", v30);
          gameswf::logMsg((gameswf::Self *)"\"", v31);
          v24 = *((uint8_t *)self + v23 + 3);
          if ( v24 != 0 )
          {
            if ( v7 > v23 )
            {
              while ( 1 )
              {
                ++v23;
                gameswf::logMsg((gameswf::Self *)"%c", (const char *)v24);
                v24 = *((uint8_t *)self + v23 + 3);
                if ( v24 == 0 )
                  break;
                if ( v23 == v7 )
                  goto LABEL_64;
              }
            }
            else
            {
LABEL_64:
              gameswf::logMsg((gameswf::Self *)"<disasm error -- length exceeded>\n", v32);
            }
          }
          ++v23;
          result = gameswf::logMsg((gameswf::Self *)"\"\n", v32);
          v37 = (gameswf::Self *)((char *)v37 + 1);
        }
        while ( v37 != v36 );
      }
      break;
    case 8:
      v13 = strlen((const char *)self + 3);
      v14 = *(uint16_t *)((char *)self + v13 + 4);
      gameswf::logMsg(
        (gameswf::Self *)"\n\t\tname = '%s', arg_count = %d, reg_count = %d\n",
        (const char *)self + 3,
        v14,
        *((uint8_t *)self + v13 + 6));
      v15 = *(uint16_t *)((char *)self + v13 + 7);
      gameswf::logMsg(
        (gameswf::Self *)"\t\t        pg = %d\n"
                   "\t\t        pp = %d\n"
                   "\t\t        pr = %d\n"
                   "\t\tss = %d, ps = %d\n"
                   "\t\tsa = %d, pa = %d\n"
                   "\t\tst = %d, pt = %d\n",
        (const char *)((v15 & 0x100) != 0),
        (v15 & 0x80u) != 0,
        (v15 & 0x40) != 0,
        (v15 & 0x20) != 0,
        (v15 & 0x10) != 0,
        (v15 & 8) != 0,
        (v15 & 4) != 0,
        (v15 & 2) != 0,
        v15 & 1);
      v16 = v13 + 6;
      if ( v14 > 0 )
      {
        v17 = nullptr;
        v35 = v14;
        do
        {
          v18 = *((uint8_t *)self + v16 + 3);
          s = (char *)self + v16 + 4;
          v27 = v17++;
          v33 = v16 + 1 + strlen(s) + 1;
          gameswf::logMsg((gameswf::Self *)"\t\targ[%d] - reg[%d] - '%s'\n", v27, v18, s);
          v16 = v33;
        }
        while ( v17 != (const char *)v35 );
      }
      return gameswf::logMsg(
               (gameswf::Self *)"\t\tfunction length = %d\n",
               (const char *)*(uint16_t *)((char *)self + v16 + 3));
    default:
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::initDisasm  (binary VA: 0x108c4a0)
// Original: gameswf::initDisasm
// ----------------------------------------------------------------------------
int gameswf::initDisasm()
{
  int result;

  if ( dword_20E4F00 == 0 || (result = *(uint32_t *)dword_20E4F00, *(uint32_t *)dword_20E4F00 == 0) )
    sub_1088630();
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getAS3FunctionLocation  (binary VA: 0x108c4d0)
// Original: gameswf::getAS3FunctionLocation
// ----------------------------------------------------------------------------
int gameswf::getAS3FunctionLocation(uint32_t *a1, uint32_t *a2, gameswf::Self **a3, gameswf::Self *a4)
{
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int result;
  int v13;
  int v14;
  int v15;
  gameswf::Self *v16;
  int v17;
  uint32_t *v18;
  int v19;
  gameswf::String::Self *v20;
  int v21;
  gameswf::Self *v22;
  char *v23;
  gameswf::Self *v24;
  int v25;
  int v26;
  int v27;
  char *v28;
  int v29;
  int v30;
  int v31;
  typedef gameswf::String::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef const char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef gameswf::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v32)) > _g4_s0 ? (12u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v33)) > _g4_s1 ? (24u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v34)) > _g4_s2 ? (28u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v35)) > _g4_s3 ? (28u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v36)) > _g4_s4 ? (32u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v37)) > _g4_s5 ? (48u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v38)) > _g4_s6 ? (52u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v39)) > _g4_s7 ? (56u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v40)) > _g4_s8 ? (60u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v41)) > _g4_s9 ? (64u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v42)) > _g4_s10 ? (68u + sizeof(_g4_t_v42)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);

  gameswf::initDisasm();
  v33 = 0;
  while ( 1 )
  {
    v4 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_2AF04)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
    v36 = (const char *)*(uint8_t *)(*a1 + v33);
    v38 = 0;
    v39 = nullptr;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    if ( v4 == 0 )
      goto LABEL_69;
    v5 = ((((((HIBYTE(v36) + 352988219) << 6) + 0xFFFF * (HIBYTE(v36) + 352988219) + BYTE2(v36)) << 6)
         + 0xFFFF * (((HIBYTE(v36) + 352988219) << 6) + 0xFFFF * (HIBYTE(v36) + 352988219) + BYTE2(v36))
         + BYTE1(v36)) << 6)
       + 0xFFFF
       * (((((HIBYTE(v36) + 352988219) << 6) + 0xFFFF * (HIBYTE(v36) + 352988219) + BYTE2(v36)) << 6)
        + 0xFFFF * (((HIBYTE(v36) + 352988219) << 6) + 0xFFFF * (HIBYTE(v36) + 352988219) + BYTE2(v36))
        + BYTE1(v36))
       + (uint8_t)(uintptr_t)(v36);
    v34 = *(uint32_t *)(v4 + 4);
    v6 = v5 & v34;
    v7 = (int *)(v4 + 32 * (v5 & v34) + 8);
    if ( *v7 == -2 )
      goto LABEL_69;
    v8 = *(uint32_t *)(v4 + 32 * (v5 & v34) + 12);
    if ( v6 != (v8 & v34) )
      goto LABEL_69;
    while ( v8 != ((((((HIBYTE(v36) + 352988219) << 6) + 0xFFFF * (HIBYTE(v36) + 352988219) + BYTE2(v36)) << 6)
                  + 0xFFFF * (((HIBYTE(v36) + 352988219) << 6) + 0xFFFF * (HIBYTE(v36) + 352988219) + BYTE2(v36))
                  + BYTE1(v36)) << 6)
                + 0xFFFF
                * (((((HIBYTE(v36) + 352988219) << 6) + 0xFFFF * (HIBYTE(v36) + 352988219) + BYTE2(v36)) << 6)
                 + 0xFFFF * (((HIBYTE(v36) + 352988219) << 6) + 0xFFFF * (HIBYTE(v36) + 352988219) + BYTE2(v36))
                 + BYTE1(v36))
                + (uint8_t)(uintptr_t)(v36)
         || v36 != (const char *)v7[2] )
    {
      v6 = *v7;
      if ( *v7 == -1 )
        goto LABEL_69;
      v7 = (int *)(v4 + 32 * v6 + 8);
      v8 = *(uint32_t *)(v4 + 32 * v6 + 12);
    }
    if ( v6 < 0 )
    {
LABEL_69:
      gameswf::logMsg((gameswf::Self *)":\tunknown opcode 0x%02X\n", v36);
      ++v33;
      v14 = v40;
LABEL_25:
      if ( v14 < 0 )
      {
        v15 = 4 * v14;
        do
        {
          if ( (gameswf::Self *)((char *)v39 + v15) != nullptr )
            *(uint32_t *)((char *)v39 + v15) = 0;
          v15 += 4;
          ++v14;
        }
        while ( v14 != 0 );
      }
      goto LABEL_16;
    }
    v9 = v4 + 32 * v6 + 8;
    v10 = *(uint32_t *)(v4 + 32 * v6 + 28);
    v38 = *(uint32_t *)(v9 + 12);
    v11 = (uint32_t *)(v9 + 16);
    if ( v10 > 0 )
      break;
    v40 = v10;
    if ( v36 != (const char *)(uintptr_t)(uint8_t *)&dword_F0 + 1 )
      goto LABEL_13;
LABEL_39:
    gameswf::readVU30((gameswf::Self *)&v37, (int *)(*a1 + v33 + 1));
    v10 = v40;
    v20 = *(gameswf::String::Self **)(*(uint32_t *)(a2[43] + 16) + 4 * *(uint32_t *)(a2[29] + 4 * v37));
    if ( a3 != (gameswf::Self **)v20 )
    {
      if ( *(uint8_t *)v20 == 0xFF )
        v21 = *((uint32_t *)v20 + 1) - 1;
      else
        v21 = *(char *)v20 - 1;
      gameswf::String::resize((gameswf::String::Self *)a3, v21);
      v22 = (gameswf::Self *)((gameswf::String::Self *)((char *)v20 + 1));
      if ( *(uint8_t *)v20 == 0xFF )
        v22 = *((gameswf::Self **)v20 + 3);
      LOBYTE(v23) = *(uint8_t *)a3;
      if ( *(uint8_t *)a3 == 0xFF )
      {
        v23 = (char *)a3[1];
        v24 = a3[3];
      }
      else
      {
        v23 = (char *)(char)(uintptr_t)(v23);
        v24 = (gameswf::Self *)((char *)a3 + 1);
      }
      gameswf::Strcpy_s(v24, v23, v22);
      v35 = *((uint32_t *)v20 + 4);
      if ( (uint8_t *)(v35 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *(uint8_t *)v20 == 0xFF )
        {
          v28 = *((char **)v20 + 3);
          v29 = *((uint32_t *)v20 + 1) - 1;
        }
        else
        {
          v28 = (char *)v20 + 1;
          v29 = *(char *)v20 - 1;
        }
        v25 = 5381;
        if ( v29 > 0 )
        {
          v32 = v20;
          do
          {
            --v29;
            v30 = 33 * v25;
            v31 = (uint8_t)v28[v29] + 32;
            if ( (uint8_t)(v28[v29] - 65) > 0x19u )
              v31 = (uint8_t)v28[v29];
            v25 = v30 ^ v31;
          }
          while ( v29 != 0 );
          v20 = v32;
          v25 = v25 << 9 >> 9;
        }
        *((uint32_t *)v20 + 4) = v25 & 0x7FFFFF | v35 & 0xFF800000;
      }
      else
      {
        v25 = v35 << 9 >> 9;
      }
      a3[4] = (gameswf::Self *)(v25 & 0x7FFFFF | (unsigned int)(uintptr_t)(a3[4]) & 0xFF800000);
      v10 = v40;
    }
LABEL_14:
    if ( v10 != 0 )
    {
      v13 = sub_10877F0((int)(uintptr_t)(&v38), a2, *a1 + v33);
      v14 = v40;
      v33 += v13;
      goto LABEL_25;
    }
    ++v33;
LABEL_16:
    v40 = 0;
    if ( v42 == 0 )
    {
      v41 = 0;
      if ( v39 != nullptr )
        gameswf::free_internal(v39);
      v39 = nullptr;
    }
    if ( (int)(a1[1] << 8) >> 8 <= v33 || v33 > 63 )
      return 0;
  }
  v41 = v10 + (v10 >> 1);
  v16 = (gameswf::Self *)gameswf::malloc_internal(4 * v41);
  v39 = v16;
  v17 = 0;
  while ( 1 )
  {
    v18 = (uint32_t *)((char *)v16 + 4 * v17);
    if ( v18 != nullptr )
      *v18 = 0;
    if ( ++v17 == v10 )
      break;
    v16 = v39;
  }
  v40 = v17;
  v19 = 0;
  do
  {
    *((uint32_t *)v39 + v19) = *(uint32_t *)(*v11 + 4 * v19);
    ++v19;
    v10 = v40;
  }
  while ( v19 < v40 );
  if ( v36 == (const char *)(uintptr_t)(uint8_t *)&dword_F0 + 1 )
    goto LABEL_39;
LABEL_13:
  if ( v36 != (const char *)&dword_F0 )
    goto LABEL_14;
  gameswf::readVU30(a4, (int *)(*a1 + v33 + 1));
  v26 = v40;
  if ( v40 < 0 )
  {
    v27 = 4 * v40;
    do
    {
      if ( (gameswf::Self *)((char *)v39 + v27) != nullptr )
        *(uint32_t *)((char *)v39 + v27) = 0;
      v27 += 4;
      ++v26;
    }
    while ( v26 != 0 );
  }
  v40 = 0;
  result = 1;
  if ( v42 == 0 )
  {
    v41 = 0;
    if ( v39 != nullptr )
    {
      gameswf::free_internal(v39);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::log_disasm_avm2  (binary VA: 0x108c9b0)
// Original: gameswf::log_disasm_avm2
// ----------------------------------------------------------------------------
int gameswf::log_disasm_avm2(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int result;
  int v14;
  int v15;
  int v16;
  gameswf::Self *v17;
  int v18;
  uint32_t *v19;
  int v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef const char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v22)) > _g4_s1 ? (20u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v23)) > _g4_s2 ? (28u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v24)) > _g4_s3 ? (48u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v25)) > _g4_s4 ? (52u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v26)) > _g4_s5 ? (56u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v27)) > _g4_s6 ? (60u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v28)) > _g4_s7 ? (64u + sizeof(_g4_t_v28)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);

  gameswf::initDisasm();
  v22 = 0;
  v2 = a1;
  do
  {
    v3 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_2AF04)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4));
    v23 = (const char *)*(uint8_t *)(*v2 + v22);
    v24 = 0;
    v25 = nullptr;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    if ( v3 == 0 )
      goto LABEL_36;
    v4 = (((((HIBYTE(v23) + 352988219) << 6) + 0xFFFF * (HIBYTE(v23) + 352988219) + BYTE2(v23)) << 6)
        + 0xFFFF * (((HIBYTE(v23) + 352988219) << 6) + 0xFFFF * (HIBYTE(v23) + 352988219) + BYTE2(v23))
        + BYTE1(v23)) << 6;
    v21 = v4
        + 0xFFFF
        * (((((HIBYTE(v23) + 352988219) << 6) + 0xFFFF * (HIBYTE(v23) + 352988219) + BYTE2(v23)) << 6)
         + 0xFFFF * (((HIBYTE(v23) + 352988219) << 6) + 0xFFFF * (HIBYTE(v23) + 352988219) + BYTE2(v23))
         + BYTE1(v23))
        + (uint8_t)(uintptr_t)(v23);
    v5 = *(uint32_t *)(v3 + 4);
    v6 = v5 & v21;
    v7 = (int *)(v3 + 32 * (v5 & v21) + 8);
    if ( *v7 == -2 )
      goto LABEL_36;
    v8 = *(uint32_t *)(v3
                   + 32
                   * (v5
                    & (v4
                     + 0xFFFF
                     * (((((HIBYTE(v23) + 352988219) << 6) + 0xFFFF * (HIBYTE(v23) + 352988219) + BYTE2(v23)) << 6)
                      + 0xFFFF * (((HIBYTE(v23) + 352988219) << 6) + 0xFFFF * (HIBYTE(v23) + 352988219) + BYTE2(v23))
                      + BYTE1(v23))
                     + (uint8_t)(uintptr_t)(v23)))
                   + 12);
    if ( v6 != (v8 & v5) )
      goto LABEL_36;
    while ( v8 != v21 || v23 != (const char *)v7[2] )
    {
      v6 = *v7;
      if ( *v7 == -1 )
        goto LABEL_36;
      v7 = (int *)(v3 + 32 * v6 + 8);
      v8 = *(uint32_t *)(v3 + 32 * v6 + 12);
    }
    if ( v6 >= 0 )
    {
      v9 = v3 + 32 * v6 + 8;
      v10 = *(uint32_t *)(v9 + 20);
      v11 = *(uint32_t *)(v9 + 12);
      v24 = v11;
      v12 = (uint32_t *)(v9 + 16);
      if ( v10 > 0 )
      {
        v27 = v10 + (v10 >> 1);
        v17 = (gameswf::Self *)gameswf::malloc_internal(4 * v27);
        v25 = v17;
        v18 = 0;
        while ( 1 )
        {
          v19 = (uint32_t *)((char *)v17 + 4 * v18);
          if ( v19 != nullptr )
            *v19 = 0;
          if ( ++v18 == v10 )
            break;
          v17 = v25;
        }
        v26 = v18;
        v20 = 0;
        do
        {
          *((uint32_t *)v25 + v20) = *(uint32_t *)(*v12 + 4 * v20);
          ++v20;
        }
        while ( v20 < v26 );
        v11 = v24;
      }
      else
      {
        v26 = v10;
      }
      printf(":%03d:\t%s\n", v22, v11);
      if ( v26 == 0 )
      {
        ++v22;
        goto LABEL_15;
      }
      v14 = sub_10877F0((int)(uintptr_t)(&v24), a2, *a1 + v22);
      v15 = v26;
      v22 += v14;
    }
    else
    {
LABEL_36:
      gameswf::logMsg((gameswf::Self *)":\tunknown opcode 0x%02X\n", v23);
      ++v22;
      v15 = v26;
    }
    if ( v15 < 0 )
    {
      v16 = 4 * v15;
      do
      {
        if ( (gameswf::Self *)((char *)v25 + v16) != nullptr )
          *(uint32_t *)((char *)v25 + v16) = 0;
        v16 += 4;
        ++v15;
      }
      while ( v15 != 0 );
    }
LABEL_15:
    v26 = 0;
    if ( v28 == 0 )
    {
      v27 = 0;
      if ( v25 != nullptr )
        gameswf::free_internal(v25);
      v25 = nullptr;
    }
    v2 = a1;
    result = (int)(a1[1] << 8) >> 8;
  }
  while ( result > v22 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::get_disasm_avm2  (binary VA: 0x108cc70)
// Original: gameswf::get_disasm_avm2
// ----------------------------------------------------------------------------
const char * gameswf::get_disasm_avm2(gameswf::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  const char *result;
  int v7;

  gameswf::initDisasm();
  if ( dword_20E4F00 == 0 )
    return "?";
  v1 = 65599
     * (((BYTE2(self) + 65599 * (HIBYTE(self) + 352988219)) << 6)
      + BYTE1(self)
      + 0xFFFF * (BYTE2(self) + 65599 * (HIBYTE(self) + 352988219)))
     + (uint8_t)(uintptr_t)(self);
  v7 = *(uint32_t *)(dword_20E4F00 + 4);
  v2 = v1 & v7;
  v3 = 32 * (v1 & v7);
  v4 = dword_20E4F00 + v3 + 8;
  if ( *(uint32_t *)v4 == -2 )
    return "?";
  v5 = *(uint32_t *)(dword_20E4F00 + v3 + 12);
  result = "?";
  if ( v2 != (v5 & v7) )
    return result;
  while ( v1 != v5 || *(gameswf::Self **)(v4 + 8) != self )
  {
    v2 = *(uint32_t *)v4;
    if ( *(uint32_t *)v4 == -1 )
      return "?";
    v4 = dword_20E4F00 + 32 * v2 + 8;
    v5 = *(uint32_t *)(dword_20E4F00 + 32 * v2 + 12);
  }
  if ( v2 < 0 || v7 < v2 )
    return "?";
  else
    return *(const char **)(dword_20E4F00 + 32 * v2 + 20);
}

// ----------------------------------------------------------------------------
// Function: gameswf::get_file_type  (binary VA: 0x10912c0)
// Original: gameswf::get_file_type
// ----------------------------------------------------------------------------
int gameswf::get_file_type(gameswf::Self *self)
{
  gameswf::Self *v1;
  size_t v2;
  char *v3;
  gameswf::Self *v4;
  char v5;
  int v6;
  int v7;
  int v8;
  int v9;
  gameswf::Self *v10;
  char *v11;
  gameswf::Self *v12;
  int v13;
  unsigned int v14;
  gameswf::String::Self *v15;
  gameswf::String::Self *v16;
  gameswf::Self *v18;
  int v19;
  int v20;
  int v21;
  typedef char _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef int16_t _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  typedef uint8_t _g4_t_v30[3];
  typedef char *_g4_t_v31;
  typedef gameswf::String::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef uint8_t _g4_t_v35[3];
  typedef int _g4_t_v36;
  typedef gameswf::Self *_g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef gameswf::Self **_g4_t_v39;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (10u + sizeof(_g4_t_v22)) > _g4_s0 ? (10u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v25)) > _g4_s3 ? (24u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v26)) > _g4_s4 ? (28u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (30u + sizeof(_g4_t_v27)) > _g4_s5 ? (30u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (31u + sizeof(_g4_t_v28)) > _g4_s6 ? (31u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v29)) > _g4_s7 ? (44u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (45u + sizeof(_g4_t_v30)) > _g4_s8 ? (45u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v31)) > _g4_s9 ? (48u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v32)) > _g4_s10 ? (56u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v33)) > _g4_s11 ? (60u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v34)) > _g4_s12 ? (76u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (77u + sizeof(_g4_t_v35)) > _g4_s13 ? (77u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v36)) > _g4_s14 ? (80u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v37)) > _g4_s15 ? (88u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v38)) > _g4_s16 ? (92u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v39)) > _g4_s17 ? (116u + sizeof(_g4_t_v39)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 10u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 30u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 31u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 45u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 77u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 88u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 92u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 116u);

  v39 = &self;
  v1 = self;
  LOWORD(v23) = 1;
  if ( self == nullptr )
  {
    v26 = -1;
    v27 = 127;
    v28 |= 1u;
    v5 = 1;
LABEL_5:
    v6 = v5 - 1;
    goto LABEL_6;
  }
  v2 = strlen((const char *)self);
  v3 = (char *)(v2 + 1);
  gameswf::String::resize((gameswf::String::Self *)&v23, v2);
  v4 = (gameswf::Self *)((char *)&v23 + 1);
  if ( (uint8_t)v23 == 0xFF )
    v4 = v25;
  gameswf::Strcpy_s(v4, v3, v1);
  v26 = -1;
  v5 = v23;
  v27 = 127;
  v28 |= 1u;
  if ( (uint8_t)v23 != 0xFF )
    goto LABEL_5;
  v6 = v24 - 1;
LABEL_6:
  v7 = 0;
  if ( v6 > 4 )
  {
    if ( v5 == -1 )
      v8 = v24 - 1;
    else
      v8 = v5 - 1;
    gameswf::String::substringUTF8((gameswf::String::Self *)&v34, (int)(uintptr_t)(&v23), v8 - 4, v8);
    v29 = 1;
    v30[0] = 0;
    if ( v34 == -1 )
      v9 = v36 - 1;
    else
      v9 = v34 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v29, v9);
    v10 = (gameswf::Self *)v35;
    if ( v34 == -1 )
      v10 = v37;
    if ( v29 == -1 )
    {
      v11 = v31;
      v12 = (gameswf::Self *)(v32);
    }
    else
    {
      v11 = (char *)v29;
      v12 = (gameswf::Self *)v30;
    }
    gameswf::Strcpy_s(v12, v11, v10);
    if ( (uint8_t *)(v38 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v22 = v34;
      if ( v34 == -1 )
      {
        v18 = v37;
        v19 = v36 - 1;
      }
      else
      {
        v18 = (gameswf::Self *)v35;
        v19 = v34 - 1;
      }
      v13 = 5381;
      if ( v19 > 0 )
      {
        do
        {
          --v19;
          v20 = 33 * v13;
          v21 = *((uint8_t *)v18 + v19) + 32;
          if ( (uint8_t)(*((uint8_t *)v18 + v19) - 65) > 0x19u )
            v21 = *((uint8_t *)v18 + v19);
          v13 = v20 ^ v21;
        }
        while ( v19 != 0 );
        v13 = v13 << 9 >> 9;
      }
      v38 = v13 & 0x7FFFFF | v38 & 0xFF800000;
    }
    else
    {
      v22 = v34;
      v13 = (int)(v38 << 9) >> 9;
    }
    v14 = v13 & 0x7FFFFF | v33 & 0xFF800000;
    LOWORD(v33) = v13;
    BYTE2(v33) = BYTE2(v14) & 0x7F;
    HIBYTE(v33) = HIBYTE(v14) | 1;
    if ( v22 == -1 && (v38 & 0x1000000) != 0 )
      gameswf::free_internal(v37);
    v15 = (gameswf::String::Self *)v30;
    v16 = (gameswf::String::Self *)v30;
    if ( v29 == -1 )
      v16 = v32;
    v7 = 1;
    if ( gameswf::String::stricmp(v16, ".swf") != 0 )
    {
      if ( v29 == -1 )
        v15 = v32;
      v7 = gameswf::String::stricmp(v15, ".jpg") == 0 ? 2 : 0;
    }
    if ( v29 == -1 && (v33 & 0x1000000) != 0 )
      gameswf::free_internal(v32);
    v5 = v23;
  }
  if ( v5 != -1 || (v28 & 1) == 0 )
    return v7;
  gameswf::free_internal(v25);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getFullURL  (binary VA: 0x1091630)
// Original: gameswf::getFullURL
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::getFullURL(gameswf::Self *self, const gameswf::String::Self *a2, gameswf::Self *a3)
{
  char *s;
  int v4;
  int v5;
  gameswf::Self *v6;
  char *v7;
  gameswf::Self *v8;
  int v9;
  char v10; // bp
  size_t v11;
  int v12;
  char *v13;
  char *v14;
  char *v16;
  gameswf::Self *v17;
  int v18;
  char *v19;
  int v20;
  int v21;
  int v22;

  s = (char *)a3;
  v4 = *((uint32_t *)self + 4);
  *(uint8_t *)self = 1;
  v4 |= 0x7FFFFFu;
  *((uint8_t *)self + 1) = 0;
  *((uint32_t *)self + 4) = v4;
  *((uint8_t *)self + 18) = BYTE2(v4) & 0x7F;
  *((uint8_t *)self + 19) = HIBYTE(v4) | 1;
  if ( *((uint8_t *)a3 + 1) == 58 || *(uint8_t *)a3 == 47 )
  {
    gameswf::String::resize(self, 0);
    LOBYTE(v16) = *(uint8_t *)self;
    if ( *(uint8_t *)self == 0xFF )
    {
      v16 = *((char **)self + 1);
      v17 = *((gameswf::Self **)self + 3);
    }
    else
    {
      v16 = (char *)(char)(uintptr_t)(v16);
      v17 = (gameswf::Self *)((char *)self + 1);
    }
    gameswf::Strcpy_s(v17, v16, (gameswf::Self *)&unk_1B15112);
    *((uint32_t *)self + 4) |= 0x7FFFFFu;
    v10 = *(uint8_t *)self;
    v11 = strlen((const char *)a3);
    if ( v10 == -1 )
      goto LABEL_20;
LABEL_13:
    v12 = v10 - 1;
    goto LABEL_14;
  }
  if ( self == (gameswf::Self *)(uintptr_t)(a2) )
  {
    v10 = 1;
    v11 = strlen((const char *)a3);
    goto LABEL_13;
  }
  if ( *(uint8_t *)a2 == 0xFF )
    v5 = *((uint32_t *)a2 + 1) - 1;
  else
    v5 = *(char *)a2 - 1;
  gameswf::String::resize(self, v5);
  v6 = (gameswf::Self *)((const gameswf::String::Self *)((char *)a2 + 1));
  if ( *(uint8_t *)a2 == 0xFF )
    v6 = *((gameswf::Self **)a2 + 3);
  LOBYTE(v7) = *(uint8_t *)self;
  if ( *(uint8_t *)self == 0xFF )
  {
    v7 = *((char **)self + 1);
    v8 = *((gameswf::Self **)self + 3);
  }
  else
  {
    v7 = (char *)(char)(uintptr_t)(v7);
    v8 = (gameswf::Self *)((char *)self + 1);
  }
  gameswf::Strcpy_s(v8, v7, v6);
  v22 = *((uint32_t *)a2 + 4);
  if ( (uint8_t *)(v22 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *(uint8_t *)a2 == 0xFF )
    {
      v19 = *((char **)a2 + 3);
      v18 = *((uint32_t *)a2 + 1) - 1;
    }
    else
    {
      v18 = *(char *)a2 - 1;
      v19 = (char *)a2 + 1;
    }
    v9 = 5381;
    if ( v18 > 0 )
    {
      do
      {
        --v18;
        v20 = 33 * v9;
        v21 = (uint8_t)v19[v18] + 32;
        if ( (uint8_t)(v19[v18] - 65) > 0x19u )
          v21 = (uint8_t)v19[v18];
        v9 = v20 ^ v21;
      }
      while ( v18 != 0 );
      s = (char *)a3;
      v9 = v9 << 9 >> 9;
    }
    *((uint32_t *)a2 + 4) = v9 & 0x7FFFFF | v22 & 0xFF800000;
  }
  else
  {
    v9 = v22 << 9 >> 9;
  }
  *((uint32_t *)self + 4) = v9 & 0x7FFFFF | *((uint32_t *)self + 4) & 0xFF800000;
  v10 = *(uint8_t *)self;
  v11 = strlen(s);
  if ( v10 != -1 )
    goto LABEL_13;
LABEL_20:
  v12 = *((uint32_t *)self + 1) - 1;
LABEL_14:
  gameswf::String::resize(self, v12 + v11);
  LOBYTE(v13) = *(uint8_t *)self;
  if ( *(uint8_t *)self == 0xFF )
  {
    v13 = *((char **)self + 1);
    v14 = *((char **)self + 3);
  }
  else
  {
    v13 = (char *)(char)(uintptr_t)(v13);
    v14 = (char *)self + 1;
  }
  gameswf::Strcpy_s((gameswf::Self *)&v14[v12], v13, (gameswf::Self *)s);
  *((uint32_t *)self + 4) |= 0x7FFFFFu;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::nextSlashOrDot  (binary VA: 0x10918e0)
// Original: gameswf::nextSlashOrDot
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::nextSlashOrDot(gameswf::Self *self)
{
  gameswf::Self *result;
  char v2;

  result = nullptr;
  v2 = *(uint8_t *)self;
  if ( *(uint8_t *)self != 0 )
  {
    result = self;
    do
    {
      while ( v2 == 46 && *((uint8_t *)result + 1) == 46 )
      {
        result = (gameswf::Self *)((char *)result + 2);
        v2 = *(uint8_t *)result;
        if ( *(uint8_t *)result == 0 )
          return nullptr;
      }
      if ( (uint8_t)(v2 - 46) <= 1u )
        return result;
      result = (gameswf::Self *)((char *)result + 1);
      v2 = *(uint8_t *)result;
    }
    while ( *(uint8_t *)result != 0 );
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::readFilterList  (binary VA: 0x1094a00)
// Original: gameswf::readFilterList
// ----------------------------------------------------------------------------
int gameswf::readFilterList(long double a1, __m128i a2, gameswf::Self *self, gameswf::Stream::Self *a4)
{
  uint8_t U8;
  int result;
  int v6;
  gameswf::Self *v7;
  gameswf::Stream::Self *v8;
  int v9;
  int v10;
  int v11;
  void *v12;
  uint8_t v13; // si
  int v14;
  int i;
  uint8_t v16;
  int v17;
  int v18;
  int v19;
  float S8; // xmm0_4
  int v21;
  int v22;
  int v23;
  void *v24;
  uint8_t v25;
  int v26;
  int v27;
  int v28;
  gameswf::Stream::Self *v29;
  uint8_t v30;
  gameswf::Stream::Self *v31;
  char *v32;
  gameswf::Self *v33;
  char *v34;
  gameswf::Self *v35;
  typedef unsigned int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef uint8_t _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef gameswf::Color::Self *_g4_t_v46;
  typedef gameswf::Color::Self *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef int _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_UInt;
  typedef int _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef uint8_t _g4_t_v74[4];
  typedef char _g4_t_v75;
  typedef char _g4_t_v76;
  typedef char _g4_t_v77;
  typedef char _g4_t_v78;
  typedef float _g4_t_v79[31];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_v36)) > _g4_s0 ? (12u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v37)) > _g4_s1 ? (12u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v38)) > _g4_s2 ? (12u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v39)) > _g4_s3 ? (16u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v40)) > _g4_s4 ? (16u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v41)) > _g4_s5 ? (16u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v42)) > _g4_s6 ? (16u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v43)) > _g4_s7 ? (16u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v44)) > _g4_s8 ? (16u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v45)) > _g4_s9 ? (16u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v46)) > _g4_s10 ? (20u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v47)) > _g4_s11 ? (20u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v48)) > _g4_s12 ? (24u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v49)) > _g4_s13 ? (28u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v50)) > _g4_s14 ? (32u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v51)) > _g4_s15 ? (36u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v52)) > _g4_s16 ? (36u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v53)) > _g4_s17 ? (40u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v54)) > _g4_s18 ? (44u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v55)) > _g4_s19 ? (44u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v56)) > _g4_s20 ? (48u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v57)) > _g4_s21 ? (52u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v58)) > _g4_s22 ? (56u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v59)) > _g4_s23 ? (56u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v60)) > _g4_s24 ? (60u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v61)) > _g4_s25 ? (60u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v62)) > _g4_s26 ? (64u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_UInt)) > _g4_s27 ? (68u + sizeof(_g4_t_UInt)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v64)) > _g4_s28 ? (72u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v65)) > _g4_s29 ? (76u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v66)) > _g4_s30 ? (80u + sizeof(_g4_t_v66)) : _g4_s30,
    _g4_s32 = (84u + sizeof(_g4_t_v67)) > _g4_s31 ? (84u + sizeof(_g4_t_v67)) : _g4_s31,
    _g4_s33 = (88u + sizeof(_g4_t_v68)) > _g4_s32 ? (88u + sizeof(_g4_t_v68)) : _g4_s32,
    _g4_s34 = (92u + sizeof(_g4_t_v69)) > _g4_s33 ? (92u + sizeof(_g4_t_v69)) : _g4_s33,
    _g4_s35 = (96u + sizeof(_g4_t_v70)) > _g4_s34 ? (96u + sizeof(_g4_t_v70)) : _g4_s34,
    _g4_s36 = (100u + sizeof(_g4_t_v71)) > _g4_s35 ? (100u + sizeof(_g4_t_v71)) : _g4_s35,
    _g4_s37 = (104u + sizeof(_g4_t_v72)) > _g4_s36 ? (104u + sizeof(_g4_t_v72)) : _g4_s36,
    _g4_s38 = (108u + sizeof(_g4_t_v73)) > _g4_s37 ? (108u + sizeof(_g4_t_v73)) : _g4_s37,
    _g4_s39 = (120u + sizeof(_g4_t_v74)) > _g4_s38 ? (120u + sizeof(_g4_t_v74)) : _g4_s38,
    _g4_s40 = (124u + sizeof(_g4_t_v75)) > _g4_s39 ? (124u + sizeof(_g4_t_v75)) : _g4_s39,
    _g4_s41 = (125u + sizeof(_g4_t_v76)) > _g4_s40 ? (125u + sizeof(_g4_t_v76)) : _g4_s40,
    _g4_s42 = (126u + sizeof(_g4_t_v77)) > _g4_s41 ? (126u + sizeof(_g4_t_v77)) : _g4_s41,
    _g4_s43 = (127u + sizeof(_g4_t_v78)) > _g4_s42 ? (127u + sizeof(_g4_t_v78)) : _g4_s42,
    _g4_s44 = (128u + sizeof(_g4_t_v79)) > _g4_s43 ? (128u + sizeof(_g4_t_v79)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 56u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_UInt &UInt = *reinterpret_cast<_g4_t_UInt *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 72u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 76u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 84u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 88u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 92u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 96u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 100u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 104u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 108u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 120u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 124u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 125u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 126u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 127u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 128u);

  U8 = gameswf::Stream::readU8(self);
  result = U8;
  if ( *((uint32_t *)a4 + 4) != 0 )
  {
    if ( U8 == 0 )
      return result;
    goto LABEL_6;
  }
  v6 = *((uint32_t *)a4 + 3);
  *((uint32_t *)a4 + 3) = U8;
  if ( U8 != 0 )
  {
    v7 = *((gameswf::Self **)a4 + 1);
    v39 = U8;
    if ( v7 != nullptr )
      *((uint32_t *)a4 + 1) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v7, 96 * U8, 96 * v6));
    else
      *((uint32_t *)a4 + 1) = gameswf::malloc_internal(96 * U8);
    U8 = v39;
LABEL_6:
    v48 = 1;
    v49 = U8 + 1;
    do
    {
      result = gameswf::Stream::readU8(self);
      switch ( (char)result )
      {
        case 0:
          v43 = (uint8_t)result;
          v75 = -1;
          v76 = -1;
          v77 = -1;
          v78 = -1;
          gameswf::Color::read_rgba((gameswf::Color::Self *)&v75, self);
          LOBYTE(v79[1]) = v77;
          BYTE1(v79[1]) = v76;
          BYTE2(v79[1]) = v75;
          HIBYTE(v79[1]) = v78;
          gameswf::Stream::readFixed(self);
          v50 = a1;
          gameswf::Stream::readFixed(self);
          v56 = a1;
          gameswf::Stream::readFixed(self);
          v53 = a1;
          gameswf::Stream::readFixed(self);
          v79[3] = a1;
          *(float *)g4_m128_ptr<int32_t>(a2) = (float)(char)gameswf::Stream::readS8(self);
          v57 = _mm_cvtsi128_si32(a2);
          LOBYTE(v79[5]) = gameswf::Stream::readBool(self);
          BYTE1(v79[5]) = gameswf::Stream::readBool(self);
          BYTE2(v79[5]) = gameswf::Stream::readBool(self);
          UInt = gameswf::Stream::readUInt(self, 5);
          v30 = gameswf::Stream::readU8(self);
          v9 = v43;
          v62 = v30;
          v8 = a4;
          v10 = *((uint32_t *)a4 + 2);
          v11 = *((uint32_t *)a4 + 3);
          v46 = (gameswf::Color::Self *)(v10 + 1);
          if ( v10 + 1 <= v11 )
            goto LABEL_9;
          v29 = a4;
          if ( *((uint32_t *)a4 + 4) != 0 )
            goto LABEL_39;
          goto LABEL_42;
        case 1:
          v42 = (uint8_t)result;
          gameswf::Stream::readFixed(self);
          v50 = a1;
          gameswf::Stream::readFixed(self);
          v56 = a1;
          v64 = gameswf::Stream::readUInt(self, 5);
          gameswf::Stream::readUInt(self, 3);
          v29 = a4;
          v9 = v42;
          v10 = *((uint32_t *)a4 + 2);
          v11 = *((uint32_t *)a4 + 3);
          v46 = (gameswf::Color::Self *)(v10 + 1);
          if ( v10 + 1 <= v11 )
            goto LABEL_39;
          goto LABEL_50;
        case 2:
          v41 = (uint8_t)result;
          v75 = -1;
          v76 = -1;
          v77 = -1;
          v78 = -1;
          gameswf::Color::read_rgba((gameswf::Color::Self *)&v75, self);
          LOBYTE(v79[1]) = v77;
          BYTE1(v79[1]) = v76;
          BYTE2(v79[1]) = v75;
          HIBYTE(v79[1]) = v78;
          gameswf::Stream::readFixed(self);
          v50 = a1;
          gameswf::Stream::readFixed(self);
          v56 = a1;
          S8 = (float)(char)gameswf::Stream::readS8(self);
          v53 = S8;
          LOBYTE(v79[3]) = gameswf::Stream::readBool(self);
          BYTE1(v79[3]) = gameswf::Stream::readBool(self);
          BYTE2(v79[3]) = gameswf::Stream::readBool(self);
          v57 = gameswf::Stream::readUInt(self, 5);
          gameswf::Stream::readU8(self);
          v21 = v41;
          v22 = *((uint32_t *)a4 + 2);
          v23 = *((uint32_t *)a4 + 3);
          v47 = (gameswf::Color::Self *)(v22 + 1);
          if ( v22 + 1 > v23 )
          {
            if ( *((uint32_t *)a4 + 4) != 0 )
            {
              v24 = *((void **)a4 + 1);
            }
            else
            {
              v34 = (char *)v47 + ((int)(uintptr_t)(v47) >> 1);
              *((uint32_t *)a4 + 3) = (uint32_t)(uintptr_t)(v34);
              if ( v34 != nullptr )
              {
                if ( *((uint32_t *)a4 + 1) != 0 )
                  v24 = gameswf::realloc_internal(*((gameswf::Self **)a4 + 1), 96 * (uint32_t)(uintptr_t)(v34), 96 * v23);
                else
                  v24 = (void *)gameswf::malloc_internal(96 * (uint32_t)(uintptr_t)(v34));
                *((uint32_t *)a4 + 1) = (uint32_t)(uintptr_t)(v24);
                v22 = *((uint32_t *)a4 + 2);
                v21 = v41;
              }
              else
              {
                v35 = *((gameswf::Self **)a4 + 1);
                if ( v35 != nullptr )
                {
                  gameswf::free_internal(v35);
                  v22 = *((uint32_t *)a4 + 2);
                  v21 = v41;
                }
                *((uint32_t *)a4 + 1) = 0;
                v24 = nullptr;
              }
            }
          }
          else
          {
            v24 = *((void **)a4 + 1);
          }
          result = (int)(uintptr_t)(v24) + 96 * v22;
          if ( result != 0 )
          {
            std::memcpy((void *)result, v79, 96);
            *(uint32_t *)result = v21;
            *(float *)(result + 8) = S8;
            *(uint32_t *)(result + 16) = v57;
            *(float *)(result + 32) = v67;
            *(float *)(result + 36) = v71;
            *(uint32_t *)(result + 24) = v62;
            *(uint32_t *)(result + 28) = UInt;
            *(float *)(result + 40) = v69;
            *(float *)(result + 44) = v73;
            *(float *)(result + 48) = v65;
            *(float *)(result + 52) = v70;
            *(float *)(result + 56) = v68;
            *(float *)(result + 60) = v72;
            *(float *)(result + 64) = v66;
            *(float *)(result + 68) = v54;
            *(float *)(result + 72) = v60;
            *(float *)(result + 76) = v58;
            *(uint32_t *)(result + 92) = 1;
            *(float *)(result + 80) = v51;
            *(float *)(result + 84) = v50;
g4_m128_raw(a2) = LODWORD(v56);
            *(float *)(result + 88) = v56;
          }
          v64 = 1;
          *((uint32_t *)a4 + 2) = (uint32_t)(uintptr_t)(v47);
          break;
        case 3:
          v74[0] = -1;
          v74[1] = -1;
          v74[2] = -1;
          v74[3] = -1;
          gameswf::Color::read_rgba((gameswf::Color::Self *)v74, self);
          v75 = -1;
          v76 = -1;
          v77 = -1;
          v78 = -1;
          gameswf::Color::read_rgba((gameswf::Color::Self *)&v75, self);
          goto LABEL_26;
        case 4:
          v16 = gameswf::Stream::readU8(self);
          v17 = v16;
          if ( v16 != 0 )
          {
            v18 = 0;
            do
            {
              ++v18;
              v75 = -1;
              v76 = -1;
              v77 = -1;
              v78 = -1;
              gameswf::Color::read_rgba((gameswf::Color::Self *)&v75, self);
            }
            while ( v17 > v18 );
            v19 = 0;
            do
            {
              ++v19;
              gameswf::Stream::readU8(self);
            }
            while ( v17 > v19 );
          }
          gameswf::Stream::readFixed(self);
          gameswf::Stream::readFixed(self);
          gameswf::Stream::readFixed(self);
          gameswf::Stream::readFixed(self);
          gameswf::Stream::readS8(self);
          gameswf::Stream::readBool(self);
          gameswf::Stream::readBool(self);
          gameswf::Stream::readBool(self);
          gameswf::Stream::readBool(self);
          result = gameswf::Stream::readUInt(self, 4);
          break;
        case 5:
          v13 = gameswf::Stream::readU8(self);
          v14 = (uint8_t)gameswf::Stream::readU8(self) * v13;
          gameswf::Stream::readFloat(self);
          gameswf::Stream::readFloat(self);
          if ( v14 != 0 )
          {
            for ( i = 0; i != v14; ++i )
              gameswf::Stream::readFloat(self);
          }
          v75 = -1;
          v76 = -1;
          v77 = -1;
          v78 = -1;
          gameswf::Color::read_rgba((gameswf::Color::Self *)&v75, self);
          gameswf::Stream::readUInt(self, 6);
          gameswf::Stream::readBool(self);
          result = gameswf::Stream::readBool(self);
          break;
        case 6:
          v40 = (uint8_t)result;
          gameswf::Stream::readFloat(self);
          v79[1] = a1;
          gameswf::Stream::readFloat(self);
          v79[5] = a1;
          gameswf::Stream::readFloat(self);
          v71 = a1;
          gameswf::Stream::readFloat(self);
          v70 = a1;
          gameswf::Stream::readFloat(self);
          v55 = a1;
          v54 = 0.00390625 * v55;
          gameswf::Stream::readFloat(self);
          v53 = a1;
          gameswf::Stream::readFloat(self);
          *(float *)&v36 = a1;
          v62 = _mm_cvtsi128_si32(G4_BITCAST<__m128i>(v36));
          gameswf::Stream::readFloat(self);
          v69 = a1;
          gameswf::Stream::readFloat(self);
          v68 = a1;
          gameswf::Stream::readFloat(self);
          v61 = a1;
          v60 = 0.00390625 * v61;
          gameswf::Stream::readFloat(self);
          v79[3] = a1;
          gameswf::Stream::readFloat(self);
          *(float *)&v37 = a1;
          UInt = _mm_cvtsi128_si32(G4_BITCAST<__m128i>(v37));
          gameswf::Stream::readFloat(self);
          v73 = a1;
          gameswf::Stream::readFloat(self);
          v72 = a1;
          gameswf::Stream::readFloat(self);
          v59 = a1;
          v58 = 0.00390625 * v59;
          gameswf::Stream::readFloat(self);
          *(float *)&v38 = a1;
          v57 = _mm_cvtsi128_si32(G4_BITCAST<__m128i>(v38));
          gameswf::Stream::readFloat(self);
          v67 = a1;
          gameswf::Stream::readFloat(self);
          v65 = a1;
          gameswf::Stream::readFloat(self);
          v66 = a1;
          gameswf::Stream::readFloat(self);
          v52 = a1;
g4_m128_raw(a2) = 0x3B800000u;
          v8 = a4;
          v9 = v40;
          v10 = *((uint32_t *)a4 + 2);
          v11 = *((uint32_t *)a4 + 3);
          v51 = 0.00390625 * v52;
          v46 = (gameswf::Color::Self *)(v10 + 1);
          if ( v10 + 1 > v11 )
          {
            v29 = a4;
LABEL_50:
            if ( *((uint32_t *)v29 + 4) != 0 )
            {
LABEL_39:
              v12 = *((void **)v29 + 1);
            }
            else
            {
LABEL_42:
              v31 = v29;
              v32 = (char *)v46 + ((int)(uintptr_t)(v46) >> 1);
              *((uint32_t *)v31 + 3) = (uint32_t)(uintptr_t)(v32);
              if ( v32 != nullptr )
              {
                v45 = v9;
                if ( *((uint32_t *)v31 + 1) != 0 )
                {
                  v12 = gameswf::realloc_internal(*((gameswf::Self **)v31 + 1), 96 * (uint32_t)(uintptr_t)(v32), 96 * v11);
                  *((uint32_t *)v31 + 1) = (uint32_t)(uintptr_t)(v12);
                  v10 = *((uint32_t *)v31 + 2);
                }
                else
                {
                  v12 = (void *)gameswf::malloc_internal(96 * (uint32_t)(uintptr_t)(v32));
                  *((uint32_t *)a4 + 1) = (uint32_t)(uintptr_t)(v12);
                  v10 = *((uint32_t *)a4 + 2);
                }
                v9 = v45;
              }
              else
              {
                v33 = *((gameswf::Self **)v31 + 1);
                if ( v33 != nullptr )
                {
                  v44 = v9;
                  gameswf::free_internal(v33);
                  v10 = *((uint32_t *)v31 + 2);
                  v9 = v44;
                }
                *((uint32_t *)a4 + 1) = 0;
                v12 = nullptr;
              }
            }
          }
          else
          {
LABEL_9:
            v12 = *((void **)v8 + 1);
          }
          result = (int)(uintptr_t)(v12) + 96 * v10;
          if ( result != 0 )
          {
            std::memcpy((void *)result, v79, 96);
            *(uint32_t *)result = v9;
            *(float *)(result + 8) = v53;
            *(uint32_t *)(result + 16) = v57;
            *(uint32_t *)(result + 24) = v62;
            *(uint32_t *)(result + 28) = UInt;
            *(float *)(result + 32) = v67;
            *(float *)(result + 36) = v71;
            *(float *)(result + 40) = v69;
            *(float *)(result + 44) = v73;
            *(float *)(result + 48) = v65;
            *(float *)(result + 52) = v70;
            *(float *)(result + 56) = v68;
            *(float *)(result + 60) = v72;
            *(float *)(result + 64) = v66;
            *(float *)(result + 68) = v54;
            *(float *)(result + 72) = v60;
            *(float *)(result + 76) = v58;
            *(float *)(result + 80) = v51;
            *(float *)(result + 84) = v50;
g4_m128_raw(a2) = LODWORD(v56);
            *(float *)(result + 88) = v56;
            *(uint32_t *)(result + 92) = v64;
          }
          *((uint32_t *)a4 + 2) = (uint32_t)(uintptr_t)(v46);
          break;
        case 7:
          v25 = gameswf::Stream::readU8(self);
          v26 = v25;
          if ( v25 != 0 )
          {
            v27 = 0;
            do
            {
              ++v27;
              v75 = -1;
              v76 = -1;
              v77 = -1;
              v78 = -1;
              gameswf::Color::read_rgba((gameswf::Color::Self *)&v75, self);
            }
            while ( v26 > v27 );
            v28 = 0;
            do
            {
              ++v28;
              gameswf::Stream::readU8(self);
            }
            while ( v26 > v28 );
          }
LABEL_26:
          gameswf::Stream::readFixed(self);
          gameswf::Stream::readFixed(self);
          gameswf::Stream::readFixed(self);
          gameswf::Stream::readFixed(self);
          gameswf::Stream::readS8(self);
          gameswf::Stream::readBool(self);
          gameswf::Stream::readBool(self);
          gameswf::Stream::readBool(self);
          gameswf::Stream::readBool(self);
          gameswf::Stream::readUInt(self, 4);
          result = gameswf::Stream::readU8(self);
          break;
        default:
          break;
      }
      ++v48;
    }
    while ( v48 != v49 );
    return result;
  }
  if ( *((uint32_t *)a4 + 1) != 0 )
    result = gameswf::free_internal(*((gameswf::Self **)a4 + 1));
  *((uint32_t *)a4 + 1) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::gaussian_kernel  (binary VA: 0x10961c0)
// Original: gameswf::gaussian_kernel
// ----------------------------------------------------------------------------
void gameswf::gaussian_kernel(gameswf::Self *self, int a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  int v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  float v8; // xmm0_4
  unsigned int v9;
  unsigned int v10;
  __m128 v11;
  int v12;
  char *v13;
  __m128 v14;
  int v15;
  unsigned int v16;
  int v17;
  double v18;
  unsigned int v19;
  float v20;
  unsigned int v21;

  v2 = 0.0;
  v3 = (float)a2 * 0.5;
  v4 = -a2;
  v5 = self;
  if ( ((a2 & 0x40000000) != 0) == __OFSUB__(a2, -a2) )
  {
    v6 = a2;
    v18 = (float)(0.3989423f / v3);
    v20 = 1.0 / (float)((float)(v3 * v3) + (float)(v3 * v3));
    do
    {
      v7 = v6--;
      v8 = exp((float)((float)(v4 * v7) * v20)) * v18;
      *((float *)self + a2 + v4++) = v8;
      v2 = v2 + v8;
    }
    while ( a2 >= v4 );
    v5 = self;
  }
  if ( (a2 & 0x40000000) == 0 )
  {
    v9 = 2 * a2 + 1;
    v10 = -((uint8_t)((uint8_t)(uintptr_t)(v5) & 0xF) >> 2) & 3;
g4_m128_raw(v11) = 0x3F800000u;
    if ( v10 > v9 )
      v10 = 2 * a2 + 1;
    v12 = 0;
g4_m128_lane<float>(v11, 0) = 1.0 / v2;
    if ( v10 == 0 )
      goto LABEL_11;
    do
    {
      *((float *)v5 + v12) = *((float *)v5 + v12) *g4_m128_lane<float>(v11, 0);
      ++v12;
    }
    while ( v10 > v12 );
    if ( v9 != v10 )
    {
LABEL_11:
      v19 = v9 - v10;
      v21 = (v9 - v10) >> 2;
      v17 = 4 * v21;
      if ( 4 * v21 == 0 )
        goto LABEL_18;
      v13 = (char *)v5 + 4 * v10;
      v14 = _mm_shuffle_ps(v11, v11, 0);
      v15 = 0;
      v16 = 0;
      do
      {
        ++v16;
        *(__m128 *)&v13[v15] = _mm_mul_ps(*(__m128 *)&v13[v15], v14);
        v15 += 16;
      }
      while ( v16 < v21 );
      v12 += v17;
      if ( v19 != v17 )
      {
LABEL_18:
        do
        {
          *((float *)v5 + v12) = *((float *)v5 + v12) *g4_m128_lane<float>(v11, 0);
          ++v12;
        }
        while ( 2 * a2 >= v12 );
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::createFilterEngine  (binary VA: 0x1096d70)
// Original: gameswf::createFilterEngine
// ----------------------------------------------------------------------------
int gameswf::createFilterEngine()
{
  int result;
  gameswf::TextureCache::Self *v1;
  int v2;

  result = gameswf::FilterEngine::s_instance;
  if ( gameswf::FilterEngine::s_instance == 0 )
  {
    v1 = (gameswf::TextureCache::Self *)opNew(0x68u);
    gameswf::TextureCache::Construct(v1, 256, 256, 4, false, (const char *)&unk_1B15112);
    v2 = *((uint32_t *)v1 + 13);
    *((uint32_t *)v1 + 16) = 0;
    *((uint32_t *)v1 + 17) = 0;
    *((uint32_t *)v1 + 18) = 0;
    *((uint32_t *)v1 + 19) = 0;
    *((uint32_t *)v1 + 20) = 0;
    *((uint32_t *)v1 + 21) = 0;
    *((uint32_t *)v1 + 22) = 0;
    *((uint32_t *)v1 + 23) = 0;
    *((uint32_t *)v1 + 24) = 0;
    *((uint32_t *)v1 + 25) = 0;
    result = G4_VCALL<int>(v2, 8);
    gameswf::FilterEngine::s_instance = (uintptr_t)(uintptr_t)(v1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::closeFilterEngine  (binary VA: 0x1096e50)
// Original: gameswf::closeFilterEngine
// ----------------------------------------------------------------------------
uint32_t * gameswf::closeFilterEngine()
{
  uint32_t *result;
  int v1;
  gameswf::Self *v2;
  int v3;
  int v4;
  int i;
  uint32_t *v6;
  int v7;
  uint8_t *v8;
  int v9;
  gameswf::Self *v10;
  void *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  gameswf::Self *v16;
  int v17;
  gameswf::Self *v18;
  int v19;
  int v20;
  int j;
  uint32_t *v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  gameswf::Self *v27;
  int v28;
  int v29;
  uint32_t *v30;
  int v31;
  gameswf::Self *v32;
  void *v33;

  result = (uint32_t *)(&gameswf::FilterEngine::s_instance);
  v1 = gameswf::FilterEngine::s_instance;
  if ( gameswf::FilterEngine::s_instance != 0 )
  {
    v2 = *(gameswf::Self **)(gameswf::FilterEngine::s_instance + 96);
    if ( v2 != nullptr )
    {
      v3 = *((uint32_t *)v2 + 1);
      if ( v3 >= 0 )
      {
        v4 = 8;
        for ( i = 0; i <= v3; ++i )
        {
          v6 = (uint32_t *)((char *)v2 + v4);
          if ( *(uint32_t *)((char *)v2 + v4) != -2 )
          {
            *v6 = -2;
            v6[1] = 0;
            v2 = *(gameswf::Self **)(v1 + 96);
          }
          v4 += 40;
        }
        v3 = *((uint32_t *)v2 + 1);
      }
      v33 = (void *)(8 * (5 * v3 + 5) + 8);
      gameswf::free_internal(v2);
      *(uint32_t *)(v1 + 96) = 0;
    }
    v7 = *(uint32_t *)(v1 + 84);
    if ( v7 < 0 )
    {
      do
      {
        v8 = (uint8_t *)(*(uint32_t *)(v1 + 80) + v7);
        if ( v8 != nullptr )
          *v8 = 0;
        ++v7;
      }
      while ( v7 != 0 );
    }
    v9 = *(uint32_t *)(v1 + 92);
    *(uint32_t *)(v1 + 84) = 0;
    if ( v9 == 0 )
    {
      v10 = *(gameswf::Self **)(v1 + 80);
      v11 = *(void **)(v1 + 88);
      *(uint32_t *)(v1 + 88) = 0;
      if ( v10 != nullptr )
      {
        v33 = v11;
        gameswf::free_internal(v10);
      }
      *(uint32_t *)(v1 + 80) = 0;
    }
    v12 = *(uint32_t *)(v1 + 68);
    if ( v12 < 0 )
    {
      v13 = 4 * v12;
      do
      {
        v14 = (uint32_t *)(*(uint32_t *)(v1 + 64) + v13);
        if ( v14 != nullptr )
          *v14 = 0;
        v13 += 4;
        ++v12;
      }
      while ( v12 != 0 );
    }
    v15 = *(uint32_t *)(v1 + 76);
    *(uint32_t *)(v1 + 68) = 0;
    if ( v15 == 0 )
    {
      v16 = *(gameswf::Self **)(v1 + 64);
      v17 = *(uint32_t *)(v1 + 72);
      *(uint32_t *)(v1 + 72) = 0;
      if ( v16 != nullptr )
      {
        v33 = (void *)(4 * v17);
        gameswf::free_internal(v16);
      }
      *(uint32_t *)(v1 + 64) = 0;
    }
    if ( *(uint32_t *)(v1 + 60) != 0 )
    {
      (*(void (**)(uint32_t, void *))(**(uint32_t **)(v1 + 52) + 32))(*(uint32_t *)(v1 + 52), v33);
      *(uint32_t *)(v1 + 60) = 0;
    }
    if ( *(uint32_t *)(v1 + 52) != 0 )
      gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v1 + 52));
    v18 = *(gameswf::Self **)(v1 + 48);
    if ( v18 != nullptr )
    {
      v19 = *((uint32_t *)v18 + 1);
      if ( v19 >= 0 )
      {
        v20 = 8;
        for ( j = 0; j <= v19; ++j )
        {
          v22 = (uint32_t *)((char *)v18 + v20);
          if ( *(uint32_t *)((char *)v18 + v20) != -2 )
          {
            *v22 = -2;
            v22[1] = 0;
            v18 = *(gameswf::Self **)(v1 + 48);
          }
          v20 += 28;
        }
      }
      gameswf::free_internal(v18);
      *(uint32_t *)(v1 + 48) = 0;
    }
    v23 = *(uint32_t *)(v1 + 36);
    if ( v23 < 0 )
    {
      v24 = 4 * v23;
      do
      {
        v25 = (uint32_t *)(*(uint32_t *)(v1 + 32) + v24);
        if ( v25 != nullptr )
          *v25 = 0;
        v24 += 4;
        ++v23;
      }
      while ( v23 != 0 );
    }
    v26 = *(uint32_t *)(v1 + 44);
    *(uint32_t *)(v1 + 36) = 0;
    if ( v26 == 0 )
    {
      v27 = *(gameswf::Self **)(v1 + 32);
      *(uint32_t *)(v1 + 40) = 0;
      if ( v27 != nullptr )
        gameswf::free_internal(v27);
      *(uint32_t *)(v1 + 32) = 0;
    }
    v28 = *(uint32_t *)(v1 + 20);
    if ( v28 < 0 )
    {
      v29 = 16 * v28;
      do
      {
        v30 = (uint32_t *)(*(uint32_t *)(v1 + 16) + v29);
        if ( v30 != nullptr )
        {
          *v30 = 0;
          v30[1] = 0;
          v30[2] = 0;
          v30[3] = 0;
        }
        v29 += 16;
        ++v28;
      }
      while ( v28 != 0 );
    }
    v31 = *(uint32_t *)(v1 + 28);
    *(uint32_t *)(v1 + 20) = 0;
    if ( v31 == 0 )
    {
      v32 = *(gameswf::Self **)(v1 + 16);
      *(uint32_t *)(v1 + 24) = 0;
      if ( v32 != nullptr )
        gameswf::free_internal(v32);
      *(uint32_t *)(v1 + 16) = 0;
    }
    gameswf::free_internal((gameswf::Self *)v1);
    result = (uint32_t *)(&gameswf::FilterEngine::s_instance);
  }
  gameswf::FilterEngine::s_instance = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::gameswf_ft_ftell  (binary VA: 0x10989b0)
// Original: gameswf::gameswf_ft_ftell
// ----------------------------------------------------------------------------
int gameswf::gameswf_ft_ftell(int a1)
{
  return (*(int (**)(uint32_t))(a1 + 24))(*(uint32_t *)a1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::gameswf_ft_free  (binary VA: 0x10989d0)
// Original: gameswf::gameswf_ft_free
// ----------------------------------------------------------------------------
int gameswf::gameswf_ft_free(gameswf::Self *self, FT_MemoryRec_ *a2)
{
  return gameswf::free_internal((gameswf::Self *)a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::gameswf_ft_realloc  (binary VA: 0x1098a00)
// Original: gameswf::gameswf_ft_realloc
// ----------------------------------------------------------------------------
void * gameswf::gameswf_ft_realloc(gameswf::Self *self, signed int a2, int a3, gameswf::Self *src)
{
  size_t n;
  void *dest;
  void *v6;

  n = a3;
  dest = (void *)gameswf::malloc_internal(a3);
  v6 = dest;
  if ( a3 > a2 )
    n = a2;
  memcpy(dest, src, n);
  gameswf::free_internal(src);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::gameswf_ft_alloc  (binary VA: 0x1098a80)
// Original: gameswf::gameswf_ft_alloc
// ----------------------------------------------------------------------------
int gameswf::gameswf_ft_alloc(gameswf::Self *self, size_t a2)
{
  return gameswf::malloc_internal(a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::gameswf_ft_fclose  (binary VA: 0x1098ab0)
// Original: gameswf::gameswf_ft_fclose
// ----------------------------------------------------------------------------
int gameswf::gameswf_ft_fclose(gameswf::File::Self *a1)
{
  if ( a1 != nullptr )
  {
    gameswf::File::Destroy(a1);
    gameswf::free_internal(a1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::gameswf_ft_fopen  (binary VA: 0x1098b00)
// Original: gameswf::gameswf_ft_fopen
// ----------------------------------------------------------------------------
gameswf::File::Self * gameswf::gameswf_ft_fopen(gameswf::Self *self, char *a2)
{
  gameswf::File::Self *v2;

  v2 = (gameswf::File::Self *)opNew(0x28u);
  gameswf::File::Construct(v2, (const char *)self, a2);
  if ( v2 == nullptr || *(uint32_t *)v2 != 0 )
    return v2;
  gameswf::File::Destroy(v2);
  gameswf::free_internal(v2);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: gameswf::gameswf_ft_fread  (binary VA: 0x1098b90)
// Original: gameswf::gameswf_ft_fread
// ----------------------------------------------------------------------------
int gameswf::gameswf_ft_fread(int a1, int a2, int a3, int a4)
{
  if ( a3 != 0 && a1 != 0 )
    return (*(int (**)(int, int, uint32_t))(a4 + 8))(a1, a3, *(uint32_t *)a4);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::gameswf_ft_fseek  (binary VA: 0x1098bd0)
// Original: gameswf::gameswf_ft_fseek
// ----------------------------------------------------------------------------
int gameswf::gameswf_ft_fseek(uint32_t *a1, int a2, int a3)
{
  int v4;

  switch ( a3 )
  {
    case 0:
      ((void (*)(int, uint32_t))a1[4])(a2, *a1);
      return 0;
    case 1:
      v4 = ((int (*)(uint32_t))a1[6])(*a1);
      ((void (*)(int, uint32_t))a1[4])(v4 + a2, *a1);
      return 0;
    case 2:
      ((void (*)(uint32_t))a1[5])(*a1);
      return 0;
    default:
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASScriptFunctionCall  (binary VA: 0x109b9d0)
// Original: gameswf::ASScriptFunctionCall
// ----------------------------------------------------------------------------
void gameswf::ASScriptFunctionCall()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASCppFunctionCall  (binary VA: 0x109bc30)
// Original: gameswf::ASCppFunctionCall
// ----------------------------------------------------------------------------
void gameswf::ASCppFunctionCall(uint32_t *a1)
{
  int v1;
  char v2;
  uint32_t *v3;
  int v4;
  gameswf::RefCounted::Self *v5;
  gameswf::Self *v6;
  gameswf::Self *WeakProxy;
  int v8;
  int v9;
  gameswf::Self *v10;
  gameswf::ASValue::Self *v11;
  bool v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  gameswf::ASValue::Self *v18;
  int v19;
  int v20;
  int v21;
  gameswf::ASValue::Self *v22;
  int v23;
  int v24;
  int v25;
  gameswf::Self *v26;
  int v27;
  int i;
  gameswf::Self **v29;
  gameswf::RefCounted::Self *v30;
  int v31;
  char *v32;
  int v33;
  int v34;
  char *v35;
  int v36;
  char *v37;
  typedef int _g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef void (*_g4_t_v56)(int, uint32_t *);
  typedef uint8_t _g4_t_v57[4];
  typedef gameswf::RefCounted::Self *_g4_t_v58;
  typedef uint32_t _g4_t_v59[8];
  typedef gameswf::Self *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint8_t _g4_t_v64[12];
  typedef uint8_t _g4_t_v65[12];
  typedef uint8_t _g4_t_v66[12];
  typedef uint8_t _g4_t_v67[12];
  typedef gameswf::Self *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef gameswf::RefCounted::Self *_g4_t_v72;
  typedef uint8_t _g4_t_v73[12];
  typedef gameswf::Self *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef gameswf::Self *_g4_t_v78;
  typedef gameswf::RefCounted::Self *_g4_t_v79;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v39)) > _g4_s1 ? (8u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v40)) > _g4_s2 ? (8u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v41)) > _g4_s3 ? (8u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v42)) > _g4_s4 ? (8u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v43)) > _g4_s5 ? (8u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v44)) > _g4_s6 ? (12u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v45)) > _g4_s7 ? (16u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v46)) > _g4_s8 ? (20u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v47)) > _g4_s9 ? (28u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v48)) > _g4_s10 ? (32u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v49)) > _g4_s11 ? (36u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v50)) > _g4_s12 ? (40u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v51)) > _g4_s13 ? (40u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v52)) > _g4_s14 ? (40u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v53)) > _g4_s15 ? (40u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v54)) > _g4_s16 ? (44u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v55)) > _g4_s17 ? (44u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v56)) > _g4_s18 ? (44u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v57)) > _g4_s19 ? (48u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v58)) > _g4_s20 ? (52u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v59)) > _g4_s21 ? (64u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v60)) > _g4_s22 ? (96u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v61)) > _g4_s23 ? (100u + sizeof(_g4_t_v61)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v62)) > _g4_s24 ? (104u + sizeof(_g4_t_v62)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v63)) > _g4_s25 ? (108u + sizeof(_g4_t_v63)) : _g4_s25,
    _g4_s27 = (208u + sizeof(_g4_t_v64)) > _g4_s26 ? (208u + sizeof(_g4_t_v64)) : _g4_s26,
    _g4_s28 = (220u + sizeof(_g4_t_v65)) > _g4_s27 ? (220u + sizeof(_g4_t_v65)) : _g4_s27,
    _g4_s29 = (232u + sizeof(_g4_t_v66)) > _g4_s28 ? (232u + sizeof(_g4_t_v66)) : _g4_s28,
    _g4_s30 = (244u + sizeof(_g4_t_v67)) > _g4_s29 ? (244u + sizeof(_g4_t_v67)) : _g4_s29,
    _g4_s31 = (256u + sizeof(_g4_t_v68)) > _g4_s30 ? (256u + sizeof(_g4_t_v68)) : _g4_s30,
    _g4_s32 = (260u + sizeof(_g4_t_v69)) > _g4_s31 ? (260u + sizeof(_g4_t_v69)) : _g4_s31,
    _g4_s33 = (264u + sizeof(_g4_t_v70)) > _g4_s32 ? (264u + sizeof(_g4_t_v70)) : _g4_s32,
    _g4_s34 = (268u + sizeof(_g4_t_v71)) > _g4_s33 ? (268u + sizeof(_g4_t_v71)) : _g4_s33,
    _g4_s35 = (272u + sizeof(_g4_t_v72)) > _g4_s34 ? (272u + sizeof(_g4_t_v72)) : _g4_s34,
    _g4_s36 = (276u + sizeof(_g4_t_v73)) > _g4_s35 ? (276u + sizeof(_g4_t_v73)) : _g4_s35,
    _g4_s37 = (288u + sizeof(_g4_t_v74)) > _g4_s36 ? (288u + sizeof(_g4_t_v74)) : _g4_s36,
    _g4_s38 = (292u + sizeof(_g4_t_v75)) > _g4_s37 ? (292u + sizeof(_g4_t_v75)) : _g4_s37,
    _g4_s39 = (296u + sizeof(_g4_t_v76)) > _g4_s38 ? (296u + sizeof(_g4_t_v76)) : _g4_s38,
    _g4_s40 = (300u + sizeof(_g4_t_v77)) > _g4_s39 ? (300u + sizeof(_g4_t_v77)) : _g4_s39,
    _g4_s41 = (304u + sizeof(_g4_t_v78)) > _g4_s40 ? (304u + sizeof(_g4_t_v78)) : _g4_s40,
    _g4_s42 = (308u + sizeof(_g4_t_v79)) > _g4_s41 ? (308u + sizeof(_g4_t_v79)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 44u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 64u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 96u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 100u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 104u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 108u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 208u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 220u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 232u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 244u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 256u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 260u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 264u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 268u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 272u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 276u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 288u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 292u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 296u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 300u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 304u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 308u);

  v1 = a1[1];
  v48 = v1;
  if ( v1 == 0 )
    return;
  v2 = G4_VCALL<int>(v1, 8, 6);
  v3 = a1;
  if ( v2 == 0 || (int)a1[4] <= 0 )
    return;
  v4 = a1[3];
  v5 = *(gameswf::RefCounted::Self **)(v4 + 212);
  if ( v5 != nullptr )
  {
    v6 = *(gameswf::Self **)(v4 + 208);
    if ( *((uint8_t *)v6 + 2) == 0 )
    {
      v12 = (*(uint16_t *)v6)-- == 1;
      if ( v12 )
      {
        gameswf::free_internal(v6);
        v3 = a1;
      }
      *(uint32_t *)(v4 + 208) = 0;
      *(uint32_t *)(v4 + 212) = 0;
      v5 = nullptr;
    }
  }
  v60 = nullptr;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64[0] = 0;
  v64[1] = 0;
  v65[0] = 0;
  v65[1] = 0;
  v66[0] = 0;
  v66[1] = 0;
  v67[0] = 0;
  v67[1] = 0;
  v68 = nullptr;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = nullptr;
  v73[0] = 0;
  v73[1] = 0;
  v74 = nullptr;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = nullptr;
  v79 = v5;
  if ( v5 != nullptr )
  {
    v39 = v3;
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v5);
    v3 = v39;
    if ( WeakProxy != v78 )
    {
      v78 = WeakProxy;
      ++*(uint16_t *)WeakProxy;
    }
  }
  v8 = v61;
  v47 = v3[4];
  if ( v47 > 1 )
  {
    v46 = v61;
    v9 = v61;
    v38 = v47 - 1;
    while ( 1 )
    {
      v54 = v3[5];
      v13 = v62;
      v14 = v9 + 1;
      v50 = *(uint32_t *)v3[3];
      if ( v9 + 1 <= v62 || v63 != 0 )
      {
        v10 = v60;
      }
      else
      {
        v49 = v14 + (v14 >> 1);
        v62 = v49;
        if ( v49 != 0 )
        {
          v42 = v3;
          v10 = v60 != nullptr
              ? (gameswf::Self *)gameswf::realloc_internal(v60, 12 * v49, 12 * v13)
              : (gameswf::Self *)gameswf::malloc_internal(12 * v49);
          v60 = v10;
          v9 = v61;
          v3 = v42;
        }
        else
        {
          if ( v60 != nullptr )
          {
            v41 = v3;
            gameswf::free_internal(v60);
            v9 = v61;
            v3 = v41;
          }
          v60 = nullptr;
          v10 = nullptr;
        }
      }
      v11 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v10 + 12 * v9));
      if ( v11 != nullptr )
      {
        *(uint8_t *)v11 = 0;
        *((uint8_t *)v11 + 1) = 0;
        v40 = v3;
        gameswf::ASValue::opAssign(v11, (const gameswf::ASValue::Self *)(v50 + 12 * (v54 - v38)));
        v3 = v40;
      }
      v12 = v38-- == 1;
      v61 = v14;
      if ( v12 )
        break;
      v9 = v14;
    }
    v8 = v47 + v46 - 1;
  }
  v23 = v8 - 1;
  v56 = *(void (**)(int, uint32_t *))(*(uint32_t *)v48 + 104);
  v24 = v3[6];
  v25 = *(uint32_t *)v3[3] + 12 * v3[5];
  if ( *(uint8_t *)v25 != 5 )
  {
    v57[0] = 5;
    v57[1] = 0;
    v58 = nullptr;
LABEL_45:
    v59[0] = *v3;
    v59[2] = (uint32_t)(uintptr_t)(v57);
    v59[3] = (uint32_t)(uintptr_t)(&v60);
    v59[4] = v47 - 1;
    v59[5] = v23;
    v59[6] = v24;
    goto LABEL_46;
  }
  v30 = *(gameswf::RefCounted::Self **)(v25 + 4);
  v57[0] = 5;
  v57[1] = 0;
  v58 = v30;
  if ( v30 == nullptr )
    goto LABEL_45;
  v44 = v24;
  v43 = (int *)(v3);
  v45 = v23;
  gameswf::RefCounted::addRef(v30);
  v59[2] = (uint32_t)(uintptr_t)(v57);
  v59[3] = (uint32_t)(uintptr_t)(&v60);
  v31 = *v43;
  v59[5] = v45;
  v59[0] = v31;
  v59[4] = v47 - 1;
  v59[6] = v44;
LABEL_46:
  v59[1] = (uint32_t)(uintptr_t)(v58);
  v56(v48, v59);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v57);
  v26 = v78;
  if ( v78 != nullptr )
  {
    v12 = (*(uint16_t *)v78)-- == 1;
    if ( v12 )
      gameswf::free_internal(v26);
  }
  v27 = v75;
  if ( v75 <= 0 )
  {
    if ( v75 < 0 )
    {
      v53 = 32 * v75;
      do
      {
        v32 = (char *)v74 + v53;
        if ( (gameswf::Self *)((char *)v74 + v53) != nullptr )
        {
          v33 = *((uint32_t *)v32 + 4);
          *v32 = 1;
          v33 |= 0x7FFFFFu;
          v32[1] = 0;
          *((uint32_t *)v32 + 4) = v33;
          v32[20] = 0;
          v32[18] = BYTE2(v33) & 0x7F;
          v32[19] = HIBYTE(v33) | 1;
          v32[21] = 0;
        }
        v53 += 32;
        ++v27;
      }
      while ( v27 != 0 );
    }
  }
  else
  {
    v52 = v75;
    for ( i = 0; i != v52; ++i )
    {
      v29 = (gameswf::Self **)((char *)v74 + 32 * i);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v29 + 5));
      if ( *(uint8_t *)v29 == 0xFF && (*((uint8_t *)v29 + 19) & 1) != 0 )
        gameswf::free_internal(v29[3]);
    }
  }
  v75 = 0;
  if ( v77 == 0 )
  {
    v76 = 0;
    if ( v74 != nullptr )
      gameswf::free_internal(v74);
    v74 = nullptr;
  }
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v73);
  if ( v72 != nullptr )
    gameswf::RefCounted::dropRef(v72);
  v15 = v69;
  if ( v69 <= 0 )
  {
    if ( v69 < 0 )
    {
      v36 = 12 * v69;
      do
      {
        v37 = (char *)v68 + v36;
        if ( (gameswf::Self *)((char *)v68 + v36) != nullptr )
        {
          *v37 = 0;
          v37[1] = 0;
        }
        v36 += 12;
        ++v15;
      }
      while ( v15 != 0 );
    }
  }
  else
  {
    v51 = v69;
    v16 = 0;
    v17 = 0;
    do
    {
      ++v17;
      v18 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v68 + v16));
      v16 += 12;
      gameswf::ASValue::dropRefs(v18);
    }
    while ( v17 != v51 );
  }
  v69 = 0;
  if ( v71 == 0 )
  {
    v70 = 0;
    if ( v68 != nullptr )
      gameswf::free_internal(v68);
    v68 = nullptr;
  }
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v67);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v66);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v65);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v64);
  v19 = v61;
  if ( v61 <= 0 )
  {
    if ( v61 < 0 )
    {
      v34 = 12 * v61;
      do
      {
        v35 = (char *)v60 + v34;
        if ( (gameswf::Self *)((char *)v60 + v34) != nullptr )
        {
          *v35 = 0;
          v35[1] = 0;
        }
        v34 += 12;
        ++v19;
      }
      while ( v19 != 0 );
    }
  }
  else
  {
    v55 = v61;
    v20 = 0;
    v21 = 0;
    do
    {
      ++v21;
      v22 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v60 + v20));
      v20 += 12;
      gameswf::ASValue::dropRefs(v22);
    }
    while ( v21 != v55 );
  }
  v61 = 0;
  if ( v63 == 0 )
  {
    v62 = 0;
    if ( v60 != nullptr )
      gameswf::free_internal(v60);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::null_loader  (binary VA: 0x109c6f0)
// Original: gameswf::null_loader
// ----------------------------------------------------------------------------
void gameswf::null_loader()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_debug_id_loader  (binary VA: 0x109c700)
// Original: gameswf::define_debug_id_loader
// ----------------------------------------------------------------------------
void gameswf::define_debug_id_loader(gameswf::Self *self, gameswf::Stream::Self *a2, int a3)
{
  if ( a3 != 0 && G4_VCALL<uint8_t>(a3, 8, 12) != 0 )
    (*(void (**)(int, int, uint32_t))(*((uint32_t *)self + 1) + 8))(a3 + 224, 16, **((uint32_t **)self + 1));
}

// ----------------------------------------------------------------------------
// Function: gameswf::end_loader  (binary VA: 0x109c770)
// Original: gameswf::end_loader
// ----------------------------------------------------------------------------
void gameswf::end_loader()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_tabindex_loader  (binary VA: 0x109c780)
// Original: gameswf::define_tabindex_loader
// ----------------------------------------------------------------------------
int gameswf::define_tabindex_loader(gameswf::Self *self)
{
  gameswf::Stream::readU16(self);
  return gameswf::Stream::readU16(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::jpeg_tables_loader  (binary VA: 0x109c7c0)
// Original: gameswf::jpeg_tables_loader
// ----------------------------------------------------------------------------
int gameswf::jpeg_tables_loader(gameswf::Self *self)
{
  gameswf::Stream::getPosition(self);
  return gameswf::Stream::getTagEndPosition(self);
}



// ============================================================================
// Address:   0x109c800 (size: 258 bytes)
// Symbol:    _ZN7gameswf24sound_stream_head_loaderEPNS_6StreamEiPNS_18MovieDefinitionSubE
// Demangled: gameswf::sound_stream_head_loader(gameswf::Stream *,int,gameswf::MovieDefinitionSub *)
// ============================================================================
int (***gameswf::sound_stream_head_loader(
        gameswf::Self *self,
        gameswf::Stream::Self *a2,
        int a3))(uint32_t, uint32_t, uint32_t, uint32_t, int, int, bool)
{
  int UInt;
  int v4;
  int (***result)(uint32_t, uint32_t, uint32_t, uint32_t, int, int, bool);
  int (***v6)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
  int sample_rate;
  gameswf::Self *v8;
  int v9;
  gameswf::Self *v10;
  uint16_t U16;
  int (*v12)(uint32_t, uint32_t, uint32_t, uint32_t, int, int, bool);

  gameswf::Stream::readU8(self);
  UInt = gameswf::Stream::readUInt(self, 4);
  v10 = (gameswf::Self *)gameswf::Stream::readUInt(self, 2);
  gameswf::Stream::readUInt(self, 1);
  v4 = gameswf::Stream::readUInt(self, 1);
  U16 = gameswf::Stream::readU16(self);
  if ( UInt == 2 )
    gameswf::Stream::readS16(self);
  result = (int (***)(uint32_t, uint32_t, uint32_t, uint32_t, int, int, bool))gameswf::getSoundHandler(v8);
  v6 = (int (***)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))result;
  if ( result != nullptr )
  {
    v12 = **result;
    sample_rate = gameswf::get_sample_rate(v10, v9);
    result = (int (***)(uint32_t, uint32_t, uint32_t, uint32_t, int, int, bool))v12(
                                                                                  (uint32_t)(uintptr_t)(v6),
                                                                                  0,
                                                                                  0,
                                                                                  U16,
                                                                                  UInt,
                                                                                  sample_rate,
                                                                                  v4 != 0);
    *(uint32_t *)(a3 + 28) = (uint32_t)(uintptr_t)(result);
    *(uint32_t *)(a3 + 32) = UInt;
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: gameswf::video_loader  (binary VA: 0x109c910)
// Original: gameswf::video_loader
// ----------------------------------------------------------------------------
int gameswf::video_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::MovieDefinition::Self *a3)
{
  gameswf::VideoStreamDefinition::Self *v3;
  uint16_t U16;
  int v5;
  gameswf::VideoStreamDefinition::Self *v6;

  v3 = nullptr;
  U16 = gameswf::Stream::readU16(self);
  v5 = G4_VCALL<int>(a3, 88, U16);
  v6 = (gameswf::VideoStreamDefinition::Self *)v5;
  if ( v5 != 0 && G4_VCALL<uint8_t>(v5, 8, 16) != 0 )
    v3 = v6;
  return gameswf::VideoStreamDefinition::read(v3, self, (int)(uintptr_t)(a2), a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_csm_textsetting_loader  (binary VA: 0x109c9a0)
// Original: gameswf::define_csm_textsetting_loader
// ----------------------------------------------------------------------------
int gameswf::define_csm_textsetting_loader(gameswf::Self *self, gameswf::Stream::Self *a2, int a3)
{
  const char *U16;
  int v4;

  U16 = (const char *)(uint16_t)gameswf::Stream::readU16(self);
  v4 = G4_VCALL<int>(a3, 88, U16);
  if ( v4 != 0 )
    return G4_VCALL<int>(v4, 28, self, a2);
  else
    return gameswf::logError((gameswf::Self *)"define_font_alignzones: can't find font w/ id %d\n", U16);
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_sound_loader  (binary VA: 0x109ca30)
// Original: gameswf::button_sound_loader
// ----------------------------------------------------------------------------
int gameswf::button_sound_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::MovieDefinitionSub::Self *a3)
{
  uint16_t U16;
  gameswf::button_character_definition::Self *v4;

  U16 = gameswf::Stream::readU16(self);
  v4 = (gameswf::button_character_definition::Self *)G4_VCALL<int>(a3, 88, U16);
  return gameswf::button_character_definition::read(v4, self, (int)(uintptr_t)(a2), a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_font_alignzones  (binary VA: 0x109caa0)
// Original: gameswf::define_font_alignzones
// ----------------------------------------------------------------------------
int gameswf::define_font_alignzones(gameswf::Self *self, gameswf::Stream::Self *a2, int a3)
{
  const char *U16;
  gameswf::Font::Self *v4;

  U16 = (const char *)(uint16_t)gameswf::Stream::readU16(self);
  v4 = (gameswf::Font::Self *)G4_VCALL<int>(a3, 124, U16);
  if ( v4 != nullptr )
    return gameswf::Font::readFontAlignzones(v4, self, (int)(uintptr_t)(a2));
  else
    return gameswf::logError((gameswf::Self *)"define_font_alignzones: can't find font w/ id %d\n", U16);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_font_info_loader  (binary VA: 0x109cb30)
// Original: gameswf::define_font_info_loader
// ----------------------------------------------------------------------------
int gameswf::define_font_info_loader(gameswf::Self *self, gameswf::Stream::Self *a2, int a3)
{
  const char *U16;
  gameswf::Font::Self *v4;

  U16 = (const char *)(uint16_t)gameswf::Stream::readU16(self);
  v4 = (gameswf::Font::Self *)G4_VCALL<int>(a3, 124, U16);
  if ( v4 != nullptr )
    return gameswf::Font::readFontInfo(v4, self, (int)(uintptr_t)(a2));
  else
    return gameswf::logError((gameswf::Self *)"define_font_info_loader: can't find font w/ id %d\n", U16);
}

// ----------------------------------------------------------------------------
// Function: gameswf::sound_stream_block_loader  (binary VA: 0x109cd90)
// Original: gameswf::sound_stream_block_loader
// ----------------------------------------------------------------------------
void gameswf::sound_stream_block_loader(gameswf::Self *self, gameswf::Stream::Self *a2, int *a3)
{
  int TagEndPosition;
  signed int v4;
  int i;
  int SoundHandler;
  gameswf::Self *v7;
  gameswf::Self *v8;

  if ( a3[7] < 0 )
    return;
  if ( a3[9] == -1 )
  {
    a3[9] = a3[14];
    if ( a3[8] != 2 )
      goto LABEL_4;
  }
  else if ( a3[8] != 2 )
  {
    goto LABEL_4;
  }
  gameswf::Stream::readU16(self);
  gameswf::Stream::readS16(self);
LABEL_4:
  TagEndPosition = gameswf::Stream::getTagEndPosition(self);
  v4 = TagEndPosition - gameswf::Stream::getPosition(self);
  if ( v4 > 0 )
  {
    v8 = (gameswf::Self *)opNewArray(v4);
    for ( i = 0; i != v4; ++i )
      *((uint8_t *)v8 + i) = gameswf::Stream::readU8(self);
    SoundHandler = gameswf::getSoundHandler(v7);
    if ( SoundHandler != 0 )
      G4_VCALL<void>(SoundHandler, 8, a3[7], v8, i);
    if ( v8 != nullptr )
      gameswf::free_internal(v8);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_metadata_loader  (binary VA: 0x109cea0)
// Original: gameswf::define_metadata_loader
// ----------------------------------------------------------------------------
int gameswf::define_metadata_loader(gameswf::Self *self)
{
  int result;
  typedef uint8_t _g4_t_v2[12];
  typedef gameswf::Self *_g4_t_v3;
  typedef int16_t _g4_t_v4;
  typedef int16_t _g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v4)) > _g4_s2 ? (16u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (18u + sizeof(_g4_t_v5)) > _g4_s3 ? (18u + sizeof(_g4_t_v5)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 18u);

  v2[0] = 1;
  v2[1] = 0;
  v4 = -1;
  HIBYTE(v5) = ((uint16_t)(v5 | 0x7F) >> 8) | 1;
  LOBYTE(v5) = 127;
  result = (int)(uintptr_t)(gameswf::Stream::readString(self, (gameswf::String::Self *)v2));
  if ( v2[0] == 0xFF && (v5 & 0x100) != 0 )
    return gameswf::free_internal(v3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_enable_debugger_loader  (binary VA: 0x109cf30)
// Original: gameswf::define_enable_debugger_loader
// ----------------------------------------------------------------------------
int gameswf::define_enable_debugger_loader(gameswf::Self *self, gameswf::Stream::Self *a2)
{
  int result;
  typedef uint8_t _g4_t_v3[12];
  typedef gameswf::Self *_g4_t_v4;
  typedef int16_t _g4_t_v5;
  typedef char _g4_t_v6;
  typedef char _g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (18u + sizeof(_g4_t_v6)) > _g4_s3 ? (18u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (19u + sizeof(_g4_t_v7)) > _g4_s4 ? (19u + sizeof(_g4_t_v7)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 18u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 19u);

  if ( a2 == (gameswf::Stream::Self *)&dword_40 )
    gameswf::Stream::readU16(self);
  v3[0] = 1;
  v3[1] = 0;
  v5 = -1;
  v6 = 127;
  v7 |= 1u;
  result = (int)(uintptr_t)(gameswf::Stream::readString(self, (gameswf::String::Self *)v3));
  if ( v3[0] == 0xFF && (v7 & 1) != 0 )
    return gameswf::free_internal(v4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::frame_label_loader  (binary VA: 0x109cfe0)
// Original: gameswf::frame_label_loader
// ----------------------------------------------------------------------------
int gameswf::frame_label_loader(gameswf::Self *self, gameswf::Stream::Self *a2, int a3, gameswf::MovieDefinitionSub::Self *a4, int a5)
{
  char *v5;
  int result;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[3];
  typedef char *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v11)) > _g4_s4 ? (32u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v12)) > _g4_s5 ? (36u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v13)) > _g4_s6 ? (40u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v14)) > _g4_s7 ? (44u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v15)) > _g4_s8 ? (52u + sizeof(_g4_t_v15)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);

  LOWORD(v9[0]) = 1;
  LOWORD(v11) = -1;
  HIBYTE(v11) = ((uint16_t)(HIWORD(v11) | 0x7F) >> 8) | 1;
  BYTE2(v11) = 127;
  gameswf::Stream::readString(self, (gameswf::String::Self *)v9);
  v5 = (char *)v9 + 1;
  if ( LOBYTE(v9[0]) == 0xFF )
    v5 = v10;
  result = G4_VCALL<int>(a3, 140, v5, v7, v8, v9[0], v9[1], v9[2], v10, v11, v12, v13, v14);
  if ( (uint8_t)(uintptr_t)(self) == 0xFF && (a5 & 0x1000000) != 0 )
  {
    v15 = a3;
    return gameswf::free_internal(a4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_scene_loader  (binary VA: 0x109d090)
// Original: gameswf::define_scene_loader
// ----------------------------------------------------------------------------
int gameswf::define_scene_loader(gameswf::Self *self, gameswf::Stream::Self *a2, int a3)
{
  gameswf::Stream::Self *v3;
  int v4;
  int i;
  int result;
  int v7;
  int j;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_VU32;
  typedef int _g4_t_v12;
  typedef gameswf::Stream::Self *_g4_t_v13;
  typedef unsigned int _g4_t_v14[3];
  typedef gameswf::Self *_g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_VU32)) > _g4_s2 ? (8u + sizeof(_g4_t_VU32)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v12)) > _g4_s3 ? (8u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v13)) > _g4_s4 ? (12u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v14)) > _g4_s5 ? (16u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v15)) > _g4_s6 ? (28u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v16)) > _g4_s7 ? (32u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (34u + sizeof(_g4_t_v17)) > _g4_s8 ? (34u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (35u + sizeof(_g4_t_v18)) > _g4_s9 ? (35u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_VU32 &VU32 = *reinterpret_cast<_g4_t_VU32 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 34u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 35u);

  v3 = (gameswf::Stream::Self *)(self);
  VU32 = gameswf::Stream::readVU32(self);
  if ( VU32 > 0 )
  {
    v4 = 0;
    for ( i = gameswf::Stream::readVU32(self); ; i = gameswf::Stream::readVU32(self) )
    {
      v9 = i;
      v16 = -1;
      LOWORD(v14[0]) = 1;
      v17 = 127;
      v18 |= 1u;
      gameswf::Stream::readString(self, (gameswf::String::Self *)v14);
      G4_VCALL<void>(a3, 104, v9, v14);
      if ( LOBYTE(v14[0]) == 0xFF && (v18 & 1) != 0 )
      {
        ++v4;
        gameswf::free_internal(v15);
        if ( v4 == VU32 )
        {
LABEL_8:
          v3 = (gameswf::Stream::Self *)(self);
          break;
        }
      }
      else if ( ++v4 == VU32 )
      {
        goto LABEL_8;
      }
    }
  }
  result = gameswf::Stream::readVU32(v3);
  v12 = result;
  if ( result > 0 )
  {
    v13 = v3;
    v7 = 0;
    for ( j = gameswf::Stream::readVU32(v13); ; j = gameswf::Stream::readVU32(v13) )
    {
      v10 = j;
      LOWORD(v14[0]) = 1;
      v16 = -1;
      v17 = 127;
      v18 |= 1u;
      gameswf::Stream::readString(v13, (gameswf::String::Self *)v14);
      result = G4_VCALL<int>(a3, 108, v10, v14);
      if ( LOBYTE(v14[0]) == 0xFF && (v18 & 1) != 0 )
      {
        ++v7;
        result = gameswf::free_internal(v15);
        if ( v7 == v12 )
          return result;
      }
      else if ( ++v7 == v12 )
      {
        return result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_font_name  (binary VA: 0x109d240)
// Original: gameswf::define_font_name
// ----------------------------------------------------------------------------
int gameswf::define_font_name(gameswf::Self *self, gameswf::Stream::Self *a2, int a3, gameswf::MovieDefinitionSub::Self *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int16_t a12, int a13, int a14, gameswf::Self *a15, unsigned int a16, int a17, int a18, int a19, char a20, int a21, int a22, gameswf::Self *a23, int a24)
{
  int result;
  int v25;
  int v26;
  char *v27;
  gameswf::Self *v28;
  gameswf::Self *v29;
  int v30;
  gameswf::Self *v31;
  int v32;
  int v33;
  int v34;
  int v59;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint32_t _g4_t_v48[4];
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t _g4_t_v53[4];
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v35)) > _g4_s0 ? (8u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v36)) > _g4_s1 ? (12u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v37)) > _g4_s2 ? (16u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v38)) > _g4_s3 ? (20u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v39)) > _g4_s4 ? (24u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v40)) > _g4_s5 ? (28u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v41)) > _g4_s6 ? (32u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v42)) > _g4_s7 ? (40u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v43)) > _g4_s8 ? (44u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v44)) > _g4_s9 ? (48u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v45)) > _g4_s10 ? (52u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v46)) > _g4_s11 ? (56u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v47)) > _g4_s12 ? (60u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v48)) > _g4_s13 ? (64u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v49)) > _g4_s14 ? (80u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v50)) > _g4_s15 ? (84u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v51)) > _g4_s16 ? (88u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v52)) > _g4_s17 ? (92u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v53)) > _g4_s18 ? (96u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v54)) > _g4_s19 ? (112u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v55)) > _g4_s20 ? (116u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v56)) > _g4_s21 ? (120u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v57)) > _g4_s22 ? (124u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v58)) > _g4_s23 ? (132u + sizeof(_g4_t_v58)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 52u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 80u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 84u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 88u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 92u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 96u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 112u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 116u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 120u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 124u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 132u);

  LOWORD(v43) = gameswf::Stream::readU16(self);
  LOWORD(v49) = -1;
  LOWORD(v48[0]) = 1;
  BYTE2(v49) = 127;
  HIBYTE(v49) |= 1u;
  gameswf::Stream::readString(self, (gameswf::String::Self *)v48);
  LOWORD(v53[0]) = 1;
  LOWORD(v54) = -1;
  BYTE2(v54) = 127;
  HIBYTE(v54) |= 1u;
  gameswf::Stream::readString(self, (gameswf::String::Self *)v53);
  result = G4_VCALL<int>(a3, 124, (uint16_t)v43, v35, v36, v37, v38, v39, v40, v41, a3, v42, v43, v44, v45, v46, v47, v48[0], v48[1], v48[2], v48[3], v49, v50, v51, v52, v53[0], v53[1], v53[2], v53[3], v54, v55, v56, v57);
  v25 = result;
  if ( result != 0 )
  {
    result += 44;
    if ( (uint32_t *)result != v48 )
    {
      if ( LOBYTE(v48[0]) == 0xFF )
        v26 = a13 - 1;
      else
        v26 = SLOBYTE(v48[0]) - 1;
      gameswf::String::resize((gameswf::String::Self *)result, v26);
      LOBYTE(v27) = *(uint8_t *)(v25 + 44);
      v28 = (gameswf::Self *)((char *)&a12 + 1);
      if ( (uint8_t)a12 == 0xFF )
        v28 = a15;
      if ( (uint8_t)(uintptr_t)(v27) == 0xFF )
      {
        v27 = *(char **)(v25 + 48);
        v29 = *(gameswf::Self **)(v25 + 56);
      }
      else
      {
        v27 = (char *)(char)(uintptr_t)(v27);
        v29 = (gameswf::Self *)(v25 + 45);
      }
      gameswf::Strcpy_s(v29, v27, v28);
      if ( (uint8_t *)(a16 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( (uint8_t)a12 == 0xFF )
        {
          v31 = a15;
          v32 = a13 - 1;
        }
        else
        {
          v31 = (gameswf::Self *)((char *)&a12 + 1);
          v32 = (char)a12 - 1;
        }
        v30 = 5381;
        if ( v32 > 0 )
        {
          v59 = v25;
          do
          {
            --v32;
            v33 = 33 * v30;
            v34 = *((uint8_t *)v31 + v32) + 32;
            if ( (uint8_t)(*((uint8_t *)v31 + v32) - 65) > 0x19u )
              v34 = *((uint8_t *)v31 + v32);
            v30 = v33 ^ v34;
          }
          while ( v32 != 0 );
          v25 = v59;
          v30 = v30 << 9 >> 9;
        }
        a16 = v30 & 0x7FFFFF | a16 & 0xFF800000;
      }
      else
      {
        v30 = (int)(a16 << 9) >> 9;
      }
      result = v30 & 0x7FFFFF;
      *(uint32_t *)(v25 + 60) = result | *(uint32_t *)(v25 + 60) & 0xFF800000;
    }
    *(uint8_t *)(v25 + 73) = 0;
    *(uint8_t *)(v25 + 72) = 0;
  }
  if ( a20 == -1 && (a24 & 0x1000000) != 0 )
  {
    v58 = a22;
    result = gameswf::free_internal(a23);
  }
  if ( (uint8_t)a12 == 0xFF && (a16 & 0x1000000) != 0 )
  {
    v58 = a14;
    return gameswf::free_internal(a15);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::button_character_loader  (binary VA: 0x109dbc0)
// Original: gameswf::button_character_loader
// ----------------------------------------------------------------------------
int gameswf::button_character_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::MovieDefinitionSub::Self *a3)
{
  uint16_t U16;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  gameswf::button_character_definition::Self *v8;
  int v9;

  U16 = gameswf::Stream::readU16(self);
  v4 = *((gameswf::Player::Self **)a3 + 6);
  v9 = U16;
  if ( v4 != nullptr )
  {
    v5 = *((gameswf::Self **)a3 + 5);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      if ( (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      *((uint32_t *)a3 + 5) = 0;
      *((uint32_t *)a3 + 6) = 0;
      v4 = nullptr;
    }
  }
  v8 = (gameswf::button_character_definition::Self *)opNew(0x44u);
  gameswf::button_character_definition::button_character_definition((gameswf::Self **)v8, v4);
  gameswf::button_character_definition::read(v8, self, (int)(uintptr_t)(a2), a3);
  return G4_VCALL<int>(a3, 116, v9, v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::sprite_loader  (binary VA: 0x109dcb0)
// Original: gameswf::sprite_loader
// ----------------------------------------------------------------------------
int gameswf::sprite_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::MovieDefinitionSub::Self *a3)
{
  uint16_t U16;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  gameswf::SpriteDefinition::Self *v8;
  int v9;

  U16 = gameswf::Stream::readU16(self);
  v4 = *((gameswf::Player::Self **)a3 + 6);
  v9 = U16;
  if ( v4 != nullptr )
  {
    v5 = *((gameswf::Self **)a3 + 5);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      if ( (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      *((uint32_t *)a3 + 5) = 0;
      *((uint32_t *)a3 + 6) = 0;
      v4 = nullptr;
    }
  }
  v8 = (gameswf::SpriteDefinition::Self *)opNew(0x5Cu);
  gameswf::SpriteDefinition::SpriteDefinition((pthread_mutex_t **)v8, v4, a3);
  gameswf::SpriteDefinition::read(v8, self);
  return G4_VCALL<int>(a3, 116, v9, v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_font_loader  (binary VA: 0x109dda0)
// Original: gameswf::define_font_loader
// ----------------------------------------------------------------------------
int gameswf::define_font_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::MovieDefinitionSub::Self *a3)
{
  uint16_t U16;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  gameswf::Font::Self *v8;
  uint16_t v9;

  U16 = gameswf::Stream::readU16(self);
  v4 = *((gameswf::Player::Self **)a3 + 6);
  v9 = U16;
  if ( v4 != nullptr )
  {
    v5 = *((gameswf::Self **)a3 + 5);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      if ( (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      *((uint32_t *)a3 + 5) = 0;
      *((uint32_t *)a3 + 6) = 0;
      v4 = nullptr;
    }
  }
  v8 = (gameswf::Font::Self *)opNew(0x84u);
  gameswf::Font::Construct(v8, v4);
  gameswf::Font::read(v8, self, (int)(uintptr_t)(a2), a3);
  return G4_VCALL<int>(a3, 120, v9, v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_shape_morph_loader  (binary VA: 0x109de90)
// Original: gameswf::define_shape_morph_loader
// ----------------------------------------------------------------------------
int gameswf::define_shape_morph_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::MovieDefinitionSub::Self *a3)
{
  uint16_t U16;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  gameswf::Morph2CharacterDef::Self *v8;
  uint16_t v9;

  U16 = gameswf::Stream::readU16(self);
  v4 = *((gameswf::Player::Self **)a3 + 6);
  v9 = U16;
  if ( v4 != nullptr )
  {
    v5 = *((gameswf::Self **)a3 + 5);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      if ( (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      *((uint32_t *)a3 + 5) = 0;
      *((uint32_t *)a3 + 6) = 0;
      v4 = nullptr;
    }
  }
  v8 = (gameswf::Morph2CharacterDef::Self *)opNew(0x9Cu);
  gameswf::Morph2CharacterDef::Construct(v8, v4);
  gameswf::Morph2CharacterDef::read(v8, self, (unsigned int)(uintptr_t)(a2), true, a3);
  return G4_VCALL<int>(a3, 116, v9, v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_shape_loader  (binary VA: 0x109df90)
// Original: gameswf::define_shape_loader
// ----------------------------------------------------------------------------
int gameswf::define_shape_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::MovieDefinitionSub::Self *a3)
{
  uint16_t U16;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  gameswf::ShapeCharacterDef::Self *v8;
  uint16_t v9;

  U16 = gameswf::Stream::readU16(self);
  v4 = *((gameswf::Player::Self **)a3 + 6);
  v9 = U16;
  if ( v4 != nullptr )
  {
    v5 = *((gameswf::Self **)a3 + 5);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      if ( (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      *((uint32_t *)a3 + 5) = 0;
      *((uint32_t *)a3 + 6) = 0;
      v4 = nullptr;
    }
  }
  v8 = (gameswf::ShapeCharacterDef::Self *)opNew(0x80u);
  gameswf::ShapeCharacterDef::ShapeCharacterDef(v8, v4);
  gameswf::ShapeCharacterDef::read(v8, self, (unsigned int)(uintptr_t)(a2), true, a3);
  return G4_VCALL<int>(a3, 116, v9, v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_abc_loader_optimized  (binary VA: 0x109e090)
// Original: gameswf::define_abc_loader_optimized
// ----------------------------------------------------------------------------
int gameswf::define_abc_loader_optimized(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::MovieDefinitionSub::Self *a3, gameswf::MovieDefinitionSub::Self *a4, int a5, gameswf::Player::Self *a6, gameswf::Self *a7, int a8)
{
  int v9;
  gameswf::Self *v10;
  char v11;
  gameswf::MovieDefinitionSub::Self *v12;
  gameswf::abc_def::Self *v13;
  int result;
  gameswf::MovieDefinitionSub::Self *v28;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[4];
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef gameswf::Player::Self *_g4_t_v27;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v22)) > _g4_s6 ? (48u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v23)) > _g4_s7 ? (52u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v24)) > _g4_s8 ? (56u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v25)) > _g4_s9 ? (60u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v26)) > _g4_s10 ? (64u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v27)) > _g4_s11 ? (68u + sizeof(_g4_t_v27)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);

  gameswf::Stream::readU32(self);
  LOWORD(v21[0]) = 1;
  LOWORD(v22) = -1;
  BYTE2(v22) = 127;
  HIBYTE(v22) |= 1u;
  gameswf::Stream::readString(self, (gameswf::String::Self *)v21);
  v9 = *((uint32_t *)a3 + 6);
  if ( v9 != 0 )
  {
    v10 = *((gameswf::Self **)a3 + 5);
    if ( *((uint8_t *)v10 + 2) == 0 )
    {
      if ( (*(uint16_t *)v10)-- == 1 )
        gameswf::free_internal(v10);
      *((uint32_t *)a3 + 5) = 0;
      *((uint32_t *)a3 + 6) = 0;
      v9 = 0;
    }
  }
  v11 = G4_VCALL<int>(a3, 8, 12, v16, v17, v18, v19, v20, v9, v21[0], v21[1], v21[2], v21[3], v22, v23, v24, v25);
  v12 = nullptr;
  v27 = nullptr;
  v26 = 176;
  if ( v11 != 0 )
    v12 = a3;
  v13 = (gameswf::abc_def::Self *)opNew(v26);
  v27 = (gameswf::Player::Self *)(a3);
  v28 = (gameswf::MovieDefinitionSub::Self *)(v13);
  gameswf::abc_def::Construct(v13, v27, (gameswf::MovieDefinitionSub::Self *)((char *)v12 + 240));
  gameswf::abc_def::readOptimized(v28, self, a3);
  result = G4_VCALL<int>(a3, 112, &a4, v28);
  if ( (uint8_t)(uintptr_t)(a4) == 0xFF && (a8 & 0x1000000) != 0 )
  {
    v27 = a6;
    return gameswf::free_internal(a7);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_abc_loader  (binary VA: 0x109e200)
// Original: gameswf::define_abc_loader
// ----------------------------------------------------------------------------
int gameswf::define_abc_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::MovieDefinitionSub::Self *a3, gameswf::MovieDefinitionSub::Self *a4, int a5, gameswf::Player::Self *a6, gameswf::Self *a7, int a8)
{
  int v9;
  gameswf::Self *v10;
  char v11;
  gameswf::MovieDefinitionSub::Self *v12;
  gameswf::abc_def::Self *v13;
  int result;
  gameswf::MovieDefinitionSub::Self *v28;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[4];
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef gameswf::Player::Self *_g4_t_v27;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v22)) > _g4_s6 ? (48u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v23)) > _g4_s7 ? (52u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v24)) > _g4_s8 ? (56u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v25)) > _g4_s9 ? (60u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v26)) > _g4_s10 ? (64u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v27)) > _g4_s11 ? (68u + sizeof(_g4_t_v27)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);

  gameswf::Stream::readU32(self);
  LOWORD(v21[0]) = 1;
  LOWORD(v22) = -1;
  BYTE2(v22) = 127;
  HIBYTE(v22) |= 1u;
  gameswf::Stream::readString(self, (gameswf::String::Self *)v21);
  v9 = *((uint32_t *)a3 + 6);
  if ( v9 != 0 )
  {
    v10 = *((gameswf::Self **)a3 + 5);
    if ( *((uint8_t *)v10 + 2) == 0 )
    {
      if ( (*(uint16_t *)v10)-- == 1 )
        gameswf::free_internal(v10);
      *((uint32_t *)a3 + 5) = 0;
      *((uint32_t *)a3 + 6) = 0;
      v9 = 0;
    }
  }
  v11 = G4_VCALL<int>(a3, 8, 12, v16, v17, v18, v19, v20, v9, v21[0], v21[1], v21[2], v21[3], v22, v23, v24, v25);
  v12 = nullptr;
  v27 = nullptr;
  v26 = 176;
  if ( v11 != 0 )
    v12 = a3;
  v13 = (gameswf::abc_def::Self *)opNew(v26);
  v27 = (gameswf::Player::Self *)(a3);
  v28 = (gameswf::MovieDefinitionSub::Self *)(v13);
  gameswf::abc_def::Construct(v13, v27, (gameswf::MovieDefinitionSub::Self *)((char *)v12 + 240));
  gameswf::abc_def::read(v28, self, a3);
  result = G4_VCALL<int>(a3, 112, &a4, v28);
  if ( (uint8_t)(uintptr_t)(a4) == 0xFF && (a8 & 0x1000000) != 0 )
  {
    v27 = a6;
    return gameswf::free_internal(a7);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::remove_object_2_loader  (binary VA: 0x109e470)
// Original: gameswf::remove_object_2_loader
// ----------------------------------------------------------------------------
int gameswf::remove_object_2_loader(gameswf::Self *self, gameswf::Stream::Self *a2, uint32_t *a3)
{
  int v3;
  gameswf::Self *v4;
  uint32_t *v5;

  v3 = a3[6];
  if ( v3 != 0 )
  {
    v4 = (gameswf::Self *)a3[5];
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      a3[5] = 0;
      a3[6] = 0;
      v3 = 0;
    }
  }
  v5 = (uint32_t *)gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(v3 + 76), 12);
  if ( v5 != nullptr )
  {
    v5[1] = -1;
    v5[2] = -1;
    *v5 = ((uint32_t)(uintptr_t)&off_208EA48);
  }
  if ( a2 == (gameswf::Stream::Self *)((char *)&loc_4 + 1) )
    v5[2] = (uint16_t)gameswf::Stream::readU16(self);
  v5[1] = (uint16_t)gameswf::Stream::readU16(self);
  return G4_VCALL<int>(a3, 128, v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::set_background_color_loader  (binary VA: 0x109e560)
// Original: gameswf::set_background_color_loader
// ----------------------------------------------------------------------------
int gameswf::set_background_color_loader(gameswf::Self *self, gameswf::Stream::Self *a2, uint32_t *a3)
{
  int v3;
  gameswf::Self *v4;
  int v5;

  v3 = a3[6];
  if ( v3 != 0 )
  {
    v4 = (gameswf::Self *)a3[5];
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      a3[5] = 0;
      a3[6] = 0;
      v3 = 0;
    }
  }
  v5 = gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)(v3 + 76), 8);
  if ( v5 != 0 )
  {
    *(uint8_t *)(v5 + 4) = -1;
    *(uint8_t *)(v5 + 5) = -1;
    *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208EA08);
    *(uint8_t *)(v5 + 6) = -1;
    *(uint8_t *)(v5 + 7) = -1;
  }
  gameswf::Color::read_rgb((gameswf::Color::Self *)(v5 + 4), self);
  return G4_VCALL<int>(a3, 128, v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_video_loader  (binary VA: 0x109e630)
// Original: gameswf::define_video_loader
// ----------------------------------------------------------------------------
int gameswf::define_video_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::MovieDefinition::Self *a3)
{
  uint16_t U16;
  gameswf::RefCounted::Self *v4;
  int v5;
  gameswf::Self *WeakProxy;
  gameswf::Self *v7;
  uint16_t v10;

  U16 = gameswf::Stream::readU16(self);
  v4 = *((gameswf::RefCounted::Self **)a3 + 6);
  v10 = U16;
  if ( v4 == nullptr )
    goto LABEL_11;
  if ( *(uint8_t *)(*((uint32_t *)a3 + 5) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)a3 + 5, nullptr);
    *((uint32_t *)a3 + 6) = 0;
LABEL_11:
    v5 = opNew(0x34u);
    gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v5);
    *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208E728);
    *(uint32_t *)(v5 + 12) = 0;
    *(uint32_t *)(v5 + 16) = 0;
    *(uint32_t *)(v5 + 20) = 0;
    *(uint32_t *)(v5 + 24) = 0;
    sub_7E5ED0((gameswf::Self **)(v5 + 20), nullptr);
    goto LABEL_9;
  }
  v5 = opNew(0x34u);
  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v5);
  *(uint32_t *)(v5 + 24) = (uint32_t)(uintptr_t)(v4);
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208E728);
  *(uint32_t *)(v5 + 12) = 0;
  *(uint32_t *)(v5 + 16) = 0;
  *(uint32_t *)(v5 + 20) = 0;
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v4);
  v7 = *(gameswf::Self **)(v5 + 20);
  if ( WeakProxy != v7 )
  {
    if ( v7 != nullptr && (*(uint16_t *)v7)-- == 1 )
      gameswf::free_internal(v7);
    *(uint32_t *)(v5 + 20) = (uint32_t)(uintptr_t)(WeakProxy);
    if ( WeakProxy != nullptr )
      ++*(uint16_t *)WeakProxy;
  }
LABEL_9:
  *(uint32_t *)(v5 + 36) = 0;
  *(uint32_t *)(v5 + 40) = 0;
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208F8C8);
  *(uint32_t *)(v5 + 44) = 0;
  *(uint32_t *)(v5 + 48) = 0;
  gameswf::VideoStreamDefinition::read((gameswf::VideoStreamDefinition::Self *)v5, self, (int)(uintptr_t)(a2), a3);
  return G4_VCALL<int>(a3, 116, v10, v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_file_attribute_loader  (binary VA: 0x109e7f0)
// Original: gameswf::define_file_attribute_loader
// ----------------------------------------------------------------------------
char gameswf::define_file_attribute_loader(gameswf::Self *self, gameswf::Stream::Self *a2, int a3)
{
  char U8; // bp
  bool v4;
  int v5;
  int v6;

  U8 = gameswf::Stream::readU8(self);
  gameswf::Stream::readUInt(self, 24);
  v4 = (U8 & 0x10) != 0;
  v5 = U8 & 8;
  LOBYTE(v6) = v5 != 0;
  *(uint8_t *)(a3 + 40) = v4;
  *(uint8_t *)(a3 + 41) = v5 != 0;
  *(uint8_t *)(a3 + 42) = v4;
  if ( v5 != 0 )
  {
    v6 = *(uint32_t *)(a3 + 24);
    if ( v6 != 0 && *(uint8_t *)(*(uint32_t *)(a3 + 20) + 2) == 0 )
    {
      sub_7E5ED0((gameswf::Self **)(a3 + 20), nullptr);
      *(uint32_t *)(a3 + 24) = 0;
      v6 = 0;
    }
    *(uint8_t *)(v6 + 232) = 1;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::import_loader  (binary VA: 0x109e8a0)
// Original: gameswf::import_loader
// ----------------------------------------------------------------------------
int gameswf::import_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::Self **a3)
{
  gameswf::Self *v3;
  uint16_t U16; // di
  gameswf::Player::Self *v5;
  gameswf::Self *v6;
  int Movie;
  int v8;
  int result;
  gameswf::Player::Self *v10;
  const char *Workdir;
  gameswf::Self *v12;
  gameswf::Self *v13;
  char v14;
  int v15;
  int v16;
  int v17;
  gameswf::Self *v18;
  char *v19;
  gameswf::Self *v20;
  gameswf::Self *v21;
  gameswf::Player::Self *v22;
  int v23;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  const char *v36;
  typedef uint16_t _g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int *_g4_t_v42;
  typedef char _g4_t_v43;
  typedef uint8_t _g4_t_v44[3];
  typedef int _g4_t_v45;
  typedef gameswf::Self *_g4_t_v46;
  typedef int16_t _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  typedef uint8_t _g4_t_v51[3];
  typedef char *_g4_t_v52;
  typedef gameswf::Self *_g4_t_v53;
  typedef int _g4_t_v54;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v37)) > _g4_s0 ? (0u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v38)) > _g4_s1 ? (0u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v39)) > _g4_s2 ? (0u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v40)) > _g4_s3 ? (4u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v41)) > _g4_s4 ? (8u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v42)) > _g4_s5 ? (12u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v43)) > _g4_s6 ? (16u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (17u + sizeof(_g4_t_v44)) > _g4_s7 ? (17u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v45)) > _g4_s8 ? (20u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v46)) > _g4_s9 ? (28u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v47)) > _g4_s10 ? (32u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (34u + sizeof(_g4_t_v48)) > _g4_s11 ? (34u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (35u + sizeof(_g4_t_v49)) > _g4_s12 ? (35u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v50)) > _g4_s13 ? (48u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (49u + sizeof(_g4_t_v51)) > _g4_s14 ? (49u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v52)) > _g4_s15 ? (52u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v53)) > _g4_s16 ? (60u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v54)) > _g4_s17 ? (64u + sizeof(_g4_t_v54)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 17u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 34u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 35u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 49u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);

  v43 = 1;
  v44[0] = 0;
  v47 = -1;
  v48 = 127;
  v49 |= 1u;
  gameswf::Stream::readString(self, (gameswf::String::Self *)&v43);
  if ( a2 == (gameswf::Stream::Self *)((char *)&dword_44 + 3) )
  {
    gameswf::Stream::readU8(self);
    gameswf::Stream::readU8(self);
  }
  v3 = (gameswf::Self *)v44;
  U16 = gameswf::Stream::readU16(self);
  if ( v43 == -1 )
    v3 = v46;
  v5 = (gameswf::Player::Self *)(a3[6]);
  if ( v5 != nullptr )
  {
    v6 = a3[5];
    if ( *((uint8_t *)v6 + 2) == 0 )
    {
      if ( (*(uint16_t *)v6)-- == 1 )
        gameswf::free_internal(v6);
      v5 = nullptr;
      a3[5] = nullptr;
      a3[6] = nullptr;
    }
  }
  Movie = (int)(uintptr_t)(gameswf::Player::createMovie(v5, v3));
  v41 = Movie;
  if ( Movie != 0 && G4_VCALL<uint8_t>(Movie, 8, 12) != 0 )
    goto LABEL_9;
  v10 = (gameswf::Player::Self *)(a3[6]);
  if ( v10 != nullptr && *((uint8_t *)a3[5] + 2) == 0 )
  {
    sub_7E5ED0(a3 + 5, nullptr);
    v10 = nullptr;
    a3[6] = nullptr;
  }
  Workdir = (const char *)gameswf::Player::getWorkdir(v10);
  v12 = (gameswf::Self *)Workdir;
  v50 = 1;
  v51[0] = 0;
  if ( Workdir == nullptr )
  {
    LOWORD(v54) = -1;
    BYTE2(v54) = 127;
    HIBYTE(v54) |= 1u;
    v14 = 1;
LABEL_24:
    v15 = v14 - 1;
    goto LABEL_25;
  }
  v38 = strlen(Workdir);
  gameswf::String::resize((gameswf::String::Self *)&v50, v38);
  v13 = (gameswf::Self *)v51;
  if ( v50 == -1 )
    v13 = v53;
  gameswf::Strcpy_s(v13, (char *)(v38 + 1), v12);
  LOWORD(v54) = -1;
  v14 = v50;
  BYTE2(v54) = 127;
  HIBYTE(v54) |= 1u;
  if ( v50 != -1 )
    goto LABEL_24;
  v15 = (int)(uintptr_t)(v52 - 1);
LABEL_25:
  if ( v15 != 0 )
  {
    if ( v43 == -1 )
      v16 = v45 - 1;
    else
      v16 = v43 - 1;
    if ( v14 == -1 )
      v17 = (int)(uintptr_t)(v52 - 1);
    else
      v17 = v14 - 1;
    v39 = v17;
    gameswf::String::resize((gameswf::String::Self *)&v50, v17 + v16);
    v18 = (gameswf::Self *)v44;
    if ( v43 == -1 )
      v18 = v46;
    if ( v50 == -1 )
    {
      v19 = v52;
      v20 = v53;
    }
    else
    {
      v19 = (char *)v50;
      v20 = (gameswf::Self *)v51;
    }
    gameswf::Strcpy_s((gameswf::Self *)((char *)v20 + v39), v19, v18);
    v54 |= 0x7FFFFFu;
    v21 = (gameswf::Self *)v51;
    if ( v50 == -1 )
      v21 = v53;
    v22 = (gameswf::Player::Self *)(a3[6]);
    if ( v22 != nullptr && *((uint8_t *)a3[5] + 2) == 0 )
    {
      sub_7E5ED0(a3 + 5, nullptr);
      a3[6] = nullptr;
      v22 = nullptr;
    }
    v23 = (int)(uintptr_t)(gameswf::Player::createMovie(v22, v21));
    v41 = v23;
    if ( v23 != 0 && G4_VCALL<uint8_t>(v23, 8, 12) != 0 )
    {
      if ( v50 == -1 && (v54 & 0x1000000) != 0 )
        gameswf::free_internal(v53);
LABEL_9:
      if ( U16 != 0 )
      {
        v40 = U16 + 1;
        v8 = 1;
        do
        {
          while ( 1 )
          {
            v37 = gameswf::Stream::readU16(self);
            v50 = 1;
            LOWORD(v54) = -1;
            v51[0] = 0;
            BYTE2(v54) = 127;
            HIBYTE(v54) |= 1u;
            gameswf::Stream::readString(self, (gameswf::String::Self *)&v50);
            result = (*((int (**)(gameswf::Self **, int, uint32_t, char *))*a3 + 43))(a3, v41, v37, &v50);
            if ( v50 == -1 && (v54 & 0x1000000) != 0 )
              break;
            if ( ++v8 == v40 )
              goto LABEL_15;
          }
          ++v8;
          result = gameswf::free_internal(v53);
        }
        while ( v8 != v40 );
      }
      else
      {
        v42 = (int *)(v41 + 112);
        result = v41;
        v25 = *(uint32_t *)(v41 + 112);
        if ( v25 != 0 )
        {
          v26 = *(uint32_t *)(v25 + 4);
          v27 = 0;
          if ( v26 >= 0 && *(uint32_t *)(v25 + 8) == -2 )
          {
            v30 = 44;
            v31 = 1;
            do
            {
              v27 = v31;
              if ( v31 > v26 )
                break;
              ++v31;
              v32 = *(uint32_t *)(*(uint32_t *)(v41 + 112) + v30);
              v30 += 36;
            }
            while ( v32 == -2 );
          }
          result = v41 + 112;
          if ( v41 != -112 )
          {
            result = *(uint32_t *)(v41 + 112);
LABEL_53:
            while ( result != 0 )
            {
              if ( v27 > *(uint32_t *)(result + 4) )
                break;
              (*((void (**)(gameswf::Self **, int, uint32_t, int))*a3 + 43))(
                a3,
                v41,
                *(uint32_t *)(result + 36 * v27 + 36),
                result + 36 * v27 + 16);
              result = *v42;
              v28 = *(uint32_t *)(*v42 + 4);
              if ( v28 < v27 )
                break;
              v29 = v27 + 1;
              if ( v28 >= v27 + 1 && *(uint32_t *)(result + 36 * v29 + 8) == -2 )
              {
                v33 = v27 + 2;
                v34 = 36 * v33 + 8;
                while ( 1 )
                {
                  v29 = v33;
                  if ( *(uint32_t *)(*v42 + 4) < v33 )
                    break;
                  v35 = *(uint32_t *)(result + v34);
                  ++v33;
                  v34 += 36;
                  if ( v35 != -2 )
                  {
                    v27 = v29;
                    goto LABEL_53;
                  }
                }
              }
              v27 = v29;
            }
          }
        }
      }
LABEL_15:
      if ( v43 == -1 && (v49 & 1) != 0 )
        return gameswf::free_internal(v46);
      return result;
    }
  }
  v36 = (const char *)(v44);
  if ( v43 == -1 )
    v36 = (const char *)v46;
  result = gameswf::logError((gameswf::Self *)"can't import movie from url %s\n", v36);
  if ( v50 == -1 && (v54 & 0x1000000) != 0 )
    result = gameswf::free_internal(v53);
  goto LABEL_15;
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_bits_jpeg3_loader  (binary VA: 0x109ee90)
// Original: gameswf::define_bits_jpeg3_loader
// ----------------------------------------------------------------------------
int gameswf::define_bits_jpeg3_loader(gameswf::Self *self, gameswf::Stream::Self *a2, uint32_t *a3)
{
  gameswf::Stream::Self *BitmapInfoEmpty;
  gameswf::Self *v4;
  int v5;
  gameswf::Self *WeakProxy;
  gameswf::Self *v7;
  gameswf::RefCounted::Self *v8;
  bool v9;
  int v10;
  float v11; // xmm1_4
  float v12; // xmm0_4
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  const char *v21;
  int v22;
  gameswf::Self *retaddr;
  gameswf::Stream::Self *thisa;
  gameswf::Stream::Self *thisc;
  gameswf::Stream::Self *thisb;
  gameswf::RefCounted::Self *v27;

  LOWORD(v20) = gameswf::Stream::readU16(self);
  gameswf::Stream::readU32(self);
  gameswf::Stream::getPosition(self);
  if ( G4_VCALL<int>(a3, 184, v14, v15, v16, v17, v18, v19, v20) == 0 )
    gameswf::logError((gameswf::Self *)"gameswf is not linked to jpeglib/zlib -- can't load jpeg/zipped image data!\n", v21);
  BitmapInfoEmpty = (gameswf::Stream::Self *)gameswf::render::createBitmapInfoEmpty(
                                         (gameswf::render::Self *)((char *)&dword_0 + 1),
                                         1,
                                         v22);
  if ( a3[6] == 0 )
    goto LABEL_17;
  v4 = (gameswf::Self *)a3[5];
  if ( *((uint8_t *)v4 + 2) == 0 )
  {
    v9 = (*(uint16_t *)v4)-- == 1;
    if ( v9 )
    {
      thisb = BitmapInfoEmpty;
      gameswf::free_internal(v4);
      BitmapInfoEmpty = thisb;
    }
    a3[5] = 0;
    a3[6] = 0;
LABEL_17:
    thisc = BitmapInfoEmpty;
    v5 = opNew(0x50u);
    gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v5);
    *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208E728);
    *(uint32_t *)(v5 + 12) = 0;
    *(uint32_t *)(v5 + 16) = 0;
    *(uint32_t *)(v5 + 20) = 0;
    *(uint32_t *)(v5 + 24) = 0;
    sub_7E5ED0((gameswf::Self **)(v5 + 20), nullptr);
    v8 = (gameswf::RefCounted::Self *)(thisc);
    goto LABEL_11;
  }
  thisa = BitmapInfoEmpty;
  v27 = (gameswf::RefCounted::Self *)a3[6];
  v5 = opNew(0x50u);
  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v5);
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208E728);
  *(uint32_t *)(v5 + 12) = 0;
  *(uint32_t *)(v5 + 16) = 0;
  *(uint32_t *)(v5 + 20) = 0;
  *(uint32_t *)(v5 + 24) = (uint32_t)(uintptr_t)(v27);
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v27);
  v7 = *(gameswf::Self **)(v5 + 20);
  retaddr = WeakProxy;
  v8 = (gameswf::RefCounted::Self *)(thisa);
  if ( WeakProxy != v7 )
  {
    if ( v7 != nullptr )
    {
      v9 = (*(uint16_t *)v7)-- == 1;
      if ( v9 )
      {
        gameswf::free_internal(v7);
        v8 = (gameswf::RefCounted::Self *)(thisa);
      }
    }
    *(uint32_t *)(v5 + 20) = (uint32_t)(uintptr_t)(retaddr);
    if ( retaddr != nullptr )
      ++*(uint16_t *)retaddr;
  }
LABEL_11:
  *(uint32_t *)(v5 + 28) = (uint32_t)(uintptr_t)(v8);
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208E568);
  if ( v8 != nullptr )
    gameswf::RefCounted::addRef(v8);
  *(uint32_t *)(v5 + 40) = 0;
  _mm_storel_ps((double *)(v5 + 48), g4_m128_from<__m128>(0LL));
  *(uint32_t *)(v5 + 32) = 0;
  _mm_storel_ps((double *)(v5 + 56), g4_m128_from<__m128>(0LL));
  v10 = *(uint32_t *)(v5 + 28);
  _mm_storel_ps((double *)(v5 + 64), g4_m128_from<__m128>(0LL));
  _mm_storel_ps((double *)(v5 + 72), g4_m128_from<__m128>(0LL));
  v11 = (float)*(int *)(v10 + 16);
  *(float *)(v5 + 36) = v11;
  v12 = (float)*(int *)(v10 + 20);
  *(uint32_t *)(v5 + 48) = 0;
  *(float *)(v5 + 44) = v12;
  *(uint32_t *)(v5 + 52) = 0;
  *(float *)(v5 + 56) = v11;
  *(uint32_t *)(v5 + 60) = 0;
  *(uint32_t *)(v5 + 64) = 0;
  *(float *)(v5 + 68) = v12;
  *(float *)(v5 + 72) = v11;
  *(float *)(v5 + 76) = v12;
  return G4_VCALL<int>(a3, 156, (uint16_t)(uintptr_t)(a3), v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_bits_jpeg_loader  (binary VA: 0x109f130)
// Original: gameswf::define_bits_jpeg_loader
// ----------------------------------------------------------------------------
int gameswf::define_bits_jpeg_loader(gameswf::Self *self, gameswf::Stream::Self *a2, uint32_t *a3)
{
  gameswf::Stream::Self *BitmapInfoEmpty;
  gameswf::Self *v4;
  int v5;
  gameswf::Self *WeakProxy;
  gameswf::Self *v7;
  gameswf::RefCounted::Self *v8;
  bool v9;
  int v10;
  float v11; // xmm1_4
  float v12; // xmm0_4
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  const char *v21;
  int v22;
  gameswf::Self *retaddr;
  gameswf::Stream::Self *thisa;
  gameswf::Stream::Self *thisc;
  gameswf::Stream::Self *thisb;
  gameswf::RefCounted::Self *v27;

  LOWORD(v20) = gameswf::Stream::readU16(self);
  if ( G4_VCALL<int>(a3, 184, v14, v15, v16, v17, v18, v19, v20) == 0 )
    gameswf::logError((gameswf::Self *)"gameswf is not linked to jpeglib -- can't load jpeg image data!\n", v21);
  BitmapInfoEmpty = (gameswf::Stream::Self *)gameswf::render::createBitmapInfoEmpty(
                                         (gameswf::render::Self *)((char *)&dword_0 + 1),
                                         1,
                                         v22);
  if ( a3[6] == 0 )
    goto LABEL_17;
  v4 = (gameswf::Self *)a3[5];
  if ( *((uint8_t *)v4 + 2) == 0 )
  {
    v9 = (*(uint16_t *)v4)-- == 1;
    if ( v9 )
    {
      thisb = BitmapInfoEmpty;
      gameswf::free_internal(v4);
      BitmapInfoEmpty = thisb;
    }
    a3[5] = 0;
    a3[6] = 0;
LABEL_17:
    thisc = BitmapInfoEmpty;
    v5 = opNew(0x50u);
    gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v5);
    *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208E728);
    *(uint32_t *)(v5 + 12) = 0;
    *(uint32_t *)(v5 + 16) = 0;
    *(uint32_t *)(v5 + 20) = 0;
    *(uint32_t *)(v5 + 24) = 0;
    sub_7E5ED0((gameswf::Self **)(v5 + 20), nullptr);
    v8 = (gameswf::RefCounted::Self *)(thisc);
    goto LABEL_11;
  }
  thisa = BitmapInfoEmpty;
  v27 = (gameswf::RefCounted::Self *)a3[6];
  v5 = opNew(0x50u);
  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v5);
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208E728);
  *(uint32_t *)(v5 + 12) = 0;
  *(uint32_t *)(v5 + 16) = 0;
  *(uint32_t *)(v5 + 20) = 0;
  *(uint32_t *)(v5 + 24) = (uint32_t)(uintptr_t)(v27);
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v27);
  v7 = *(gameswf::Self **)(v5 + 20);
  retaddr = WeakProxy;
  v8 = (gameswf::RefCounted::Self *)(thisa);
  if ( WeakProxy != v7 )
  {
    if ( v7 != nullptr )
    {
      v9 = (*(uint16_t *)v7)-- == 1;
      if ( v9 )
      {
        gameswf::free_internal(v7);
        v8 = (gameswf::RefCounted::Self *)(thisa);
      }
    }
    *(uint32_t *)(v5 + 20) = (uint32_t)(uintptr_t)(retaddr);
    if ( retaddr != nullptr )
      ++*(uint16_t *)retaddr;
  }
LABEL_11:
  *(uint32_t *)(v5 + 28) = (uint32_t)(uintptr_t)(v8);
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208E568);
  if ( v8 != nullptr )
    gameswf::RefCounted::addRef(v8);
  *(uint32_t *)(v5 + 40) = 0;
  _mm_storel_ps((double *)(v5 + 48), g4_m128_from<__m128>(0LL));
  *(uint32_t *)(v5 + 32) = 0;
  _mm_storel_ps((double *)(v5 + 56), g4_m128_from<__m128>(0LL));
  v10 = *(uint32_t *)(v5 + 28);
  _mm_storel_ps((double *)(v5 + 64), g4_m128_from<__m128>(0LL));
  _mm_storel_ps((double *)(v5 + 72), g4_m128_from<__m128>(0LL));
  v11 = (float)*(int *)(v10 + 16);
  *(float *)(v5 + 36) = v11;
  v12 = (float)*(int *)(v10 + 20);
  *(uint32_t *)(v5 + 48) = 0;
  *(float *)(v5 + 44) = v12;
  *(uint32_t *)(v5 + 52) = 0;
  *(float *)(v5 + 56) = v11;
  *(uint32_t *)(v5 + 60) = 0;
  *(uint32_t *)(v5 + 64) = 0;
  *(float *)(v5 + 68) = v12;
  *(float *)(v5 + 72) = v11;
  *(float *)(v5 + 76) = v12;
  return G4_VCALL<int>(a3, 156, (uint16_t)(uintptr_t)(a3), v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_bits_jpeg2_loader  (binary VA: 0x109f3c0)
// Original: gameswf::define_bits_jpeg2_loader
// ----------------------------------------------------------------------------
int gameswf::define_bits_jpeg2_loader(gameswf::Self *self, gameswf::Stream::Self *a2, uint32_t *a3)
{
  gameswf::Stream::Self *BitmapInfoEmpty;
  gameswf::Self *v4;
  int v5;
  gameswf::Self *WeakProxy;
  gameswf::Self *v7;
  gameswf::RefCounted::Self *v8;
  bool v9;
  int v10;
  float v11; // xmm1_4
  float v12; // xmm0_4
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  const char *v21;
  int v22;
  gameswf::Self *retaddr;
  gameswf::Stream::Self *thisa;
  gameswf::Stream::Self *thisc;
  gameswf::Stream::Self *thisb;
  gameswf::RefCounted::Self *v27;

  LOWORD(v20) = gameswf::Stream::readU16(self);
  if ( G4_VCALL<int>(a3, 184, v14, v15, v16, v17, v18, v19, v20) == 0 )
    gameswf::logError((gameswf::Self *)"gameswf is not linked to jpeglib -- can't load jpeg image data!\n", v21);
  BitmapInfoEmpty = (gameswf::Stream::Self *)gameswf::render::createBitmapInfoEmpty(
                                         (gameswf::render::Self *)((char *)&dword_0 + 1),
                                         1,
                                         v22);
  if ( a3[6] == 0 )
    goto LABEL_17;
  v4 = (gameswf::Self *)a3[5];
  if ( *((uint8_t *)v4 + 2) == 0 )
  {
    v9 = (*(uint16_t *)v4)-- == 1;
    if ( v9 )
    {
      thisb = BitmapInfoEmpty;
      gameswf::free_internal(v4);
      BitmapInfoEmpty = thisb;
    }
    a3[5] = 0;
    a3[6] = 0;
LABEL_17:
    thisc = BitmapInfoEmpty;
    v5 = opNew(0x50u);
    gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v5);
    *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208E728);
    *(uint32_t *)(v5 + 12) = 0;
    *(uint32_t *)(v5 + 16) = 0;
    *(uint32_t *)(v5 + 20) = 0;
    *(uint32_t *)(v5 + 24) = 0;
    sub_7E5ED0((gameswf::Self **)(v5 + 20), nullptr);
    v8 = (gameswf::RefCounted::Self *)(thisc);
    goto LABEL_11;
  }
  thisa = BitmapInfoEmpty;
  v27 = (gameswf::RefCounted::Self *)a3[6];
  v5 = opNew(0x50u);
  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v5);
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208E728);
  *(uint32_t *)(v5 + 12) = 0;
  *(uint32_t *)(v5 + 16) = 0;
  *(uint32_t *)(v5 + 20) = 0;
  *(uint32_t *)(v5 + 24) = (uint32_t)(uintptr_t)(v27);
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v27);
  v7 = *(gameswf::Self **)(v5 + 20);
  retaddr = WeakProxy;
  v8 = (gameswf::RefCounted::Self *)(thisa);
  if ( WeakProxy != v7 )
  {
    if ( v7 != nullptr )
    {
      v9 = (*(uint16_t *)v7)-- == 1;
      if ( v9 )
      {
        gameswf::free_internal(v7);
        v8 = (gameswf::RefCounted::Self *)(thisa);
      }
    }
    *(uint32_t *)(v5 + 20) = (uint32_t)(uintptr_t)(retaddr);
    if ( retaddr != nullptr )
      ++*(uint16_t *)retaddr;
  }
LABEL_11:
  *(uint32_t *)(v5 + 28) = (uint32_t)(uintptr_t)(v8);
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_208E568);
  if ( v8 != nullptr )
    gameswf::RefCounted::addRef(v8);
  *(uint32_t *)(v5 + 40) = 0;
  _mm_storel_ps((double *)(v5 + 48), g4_m128_from<__m128>(0LL));
  *(uint32_t *)(v5 + 32) = 0;
  _mm_storel_ps((double *)(v5 + 56), g4_m128_from<__m128>(0LL));
  v10 = *(uint32_t *)(v5 + 28);
  _mm_storel_ps((double *)(v5 + 64), g4_m128_from<__m128>(0LL));
  _mm_storel_ps((double *)(v5 + 72), g4_m128_from<__m128>(0LL));
  v11 = (float)*(int *)(v10 + 16);
  *(float *)(v5 + 36) = v11;
  v12 = (float)*(int *)(v10 + 20);
  *(uint32_t *)(v5 + 48) = 0;
  *(float *)(v5 + 44) = v12;
  *(uint32_t *)(v5 + 52) = 0;
  *(float *)(v5 + 56) = v11;
  *(uint32_t *)(v5 + 60) = 0;
  *(uint32_t *)(v5 + 64) = 0;
  *(float *)(v5 + 68) = v12;
  *(float *)(v5 + 72) = v11;
  *(float *)(v5 + 76) = v12;
  return G4_VCALL<int>(a3, 156, (uint16_t)(uintptr_t)(a3), v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::getVerboseParse  (binary VA: 0x109f650)
// Original: gameswf::getVerboseParse
// ----------------------------------------------------------------------------
int gameswf::getVerboseParse()
{
  return gameswf::s_verbose_parse;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getVerboseDebug  (binary VA: 0x109f670)
// Original: gameswf::getVerboseDebug
// ----------------------------------------------------------------------------
int gameswf::getVerboseDebug()
{
  return gameswf::s_verbose_debug;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getVerboseAction  (binary VA: 0x109f690)
// Original: gameswf::getVerboseAction
// ----------------------------------------------------------------------------
int gameswf::getVerboseAction()
{
  return (uint8_t)gameswf::s_verbose_action[0];
}

// ----------------------------------------------------------------------------
// Function: gameswf::getVerboseDlist  (binary VA: 0x109f6b0)
// Original: gameswf::getVerboseDlist
// ----------------------------------------------------------------------------
int gameswf::getVerboseDlist()
{
  return gameswf::s_verbose_dlist;
}

// ----------------------------------------------------------------------------
// Function: gameswf::setVerboseAction  (binary VA: 0x109f6d0)
// Original: gameswf::setVerboseAction
// ----------------------------------------------------------------------------
uint8_t * gameswf::setVerboseAction(gameswf::Self *self)
{
  gameswf::s_verbose_action[0] = (uint8_t)(uintptr_t)(self);
  return (uint8_t *)(gameswf::s_verbose_action);
}

// ----------------------------------------------------------------------------
// Function: gameswf::setVerboseParse  (binary VA: 0x109f6f0)
// Original: gameswf::setVerboseParse
// ----------------------------------------------------------------------------
void * gameswf::setVerboseParse(gameswf::Self *self)
{
  gameswf::s_verbose_parse = (uint8_t)(uintptr_t)(self);
  return &gameswf::s_verbose_parse;
}

// ----------------------------------------------------------------------------
// Function: gameswf::setVerboseDlist  (binary VA: 0x109f710)
// Original: gameswf::setVerboseDlist
// ----------------------------------------------------------------------------
void * gameswf::setVerboseDlist(gameswf::Self *self)
{
  gameswf::s_verbose_dlist = (uint8_t)(uintptr_t)(self);
  return &gameswf::s_verbose_dlist;
}

// ----------------------------------------------------------------------------
// Function: gameswf::executeActions  (binary VA: 0x109f730)
// Original: gameswf::executeActions
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::executeActions(gameswf::ASEnvironment::Self *a1, int a2)
{
  gameswf::Self *result;
  int v3;

  result = *(gameswf::Self **)(a2 + 4);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    v3 = 0;
    do
    {
      ++v3;
      gameswf::ActionBuffer::execute();
    }
    while ( *(uint32_t *)(a2 + 4) > v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ensureLoadersRegistered  (binary VA: 0x109fdb0)
// Original: gameswf::ensureLoadersRegistered
// ----------------------------------------------------------------------------
int gameswf::ensureLoadersRegistered()
{
  int result;
  gameswf::Self *v1;
  void (*v2)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v3)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v4)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v5)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v6)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v7)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v8)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v9)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v10)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v11)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v12)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v13)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v14)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v15)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v16)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v17)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v18)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v19)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v20)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v21)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v22)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v23)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v24)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v25)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v26)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v27)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v28)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v29)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v30)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v31)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v32)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v33)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v34)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v35)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v36)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v37)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v38)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v39)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v40)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v41)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v42)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v43)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v44)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v45)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v46)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v47)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v48)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v49)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v50)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v51)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v52)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v53)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v54)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v55)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v56)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v57)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v58)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v59)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v60)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);

  result = gameswf::isTagLoadersInitialized(v1);
  if ( (uint8_t)result == 0 )
  {
    gameswf::register_tag_loader(
      nullptr,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::end_loader,
      v2);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_0 + 2),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_shape_loader,
      v3);
    gameswf::register_tag_loader(
      (gameswf::Self *)&loc_4,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::place_object_2_loader,
      v4);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&loc_4 + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::remove_object_2_loader,
      v5);
    gameswf::register_tag_loader(
      (gameswf::Self *)&loc_6,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_bits_jpeg_loader,
      v6);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&loc_6 + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::button_character_loader,
      v7);
    gameswf::register_tag_loader(
      (gameswf::Self *)byte_8,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::jpeg_tables_loader,
      v8);
    gameswf::register_tag_loader(
      (gameswf::Self *)byte_9,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::set_background_color_loader,
      v9);
    gameswf::register_tag_loader(
      (gameswf::Self *)&byte_9[1],
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_font_loader,
      v10);
    gameswf::register_tag_loader(
      (gameswf::Self *)&byte_9[2],
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_text_loader,
      v11);
    gameswf::register_tag_loader(
      (gameswf::Self *)&byte_9[3],
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::do_action_loader,
      v12);
    gameswf::register_tag_loader(
      (gameswf::Self *)&byte_9[4],
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_font_info_loader,
      v13);
    gameswf::register_tag_loader(
      (gameswf::Self *)&byte_9[5],
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_sound_loader,
      v14);
    gameswf::register_tag_loader(
      (gameswf::Self *)&byte_9[6],
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))((int (*)(gameswf::Self *, gameswf::Stream::Self *, uint32_t *))gameswf::start_sound_loader),
      v15);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&word_10 + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::button_sound_loader,
      v16);
    gameswf::register_tag_loader(
      (gameswf::Self *)&word_12,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::sound_stream_head_loader,
      v17);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&word_12 + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::sound_stream_block_loader,
      v18);
    gameswf::register_tag_loader(
      (gameswf::Self *)&dword_14,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_bits_lossless_2_loader,
      v19);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_14 + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_bits_jpeg2_loader,
      v20);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_14 + 2),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_shape_loader,
      v21);
    gameswf::register_tag_loader(
      (gameswf::Self *)&dword_18,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::null_loader,
      v22);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_18 + 2),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::place_object_2_loader,
      v23);
    gameswf::register_tag_loader(
      (gameswf::Self *)&dword_1C,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::remove_object_2_loader,
      v24);
    gameswf::register_tag_loader(
      (gameswf::Self *)&dword_20,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_shape_loader,
      v25);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_20 + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_text_loader,
      v26);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)dword_24 + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_edit_text_loader,
      v27);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_20 + 2),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::button_character_loader,
      v28);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_20 + 3),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_bits_jpeg3_loader,
      v29);
    gameswf::register_tag_loader(
      (gameswf::Self *)dword_24,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_bits_lossless_2_loader,
      v30);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)dword_24 + 3),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::sprite_loader,
      v31);
    gameswf::register_tag_loader(
      (gameswf::Self *)&word_2A[1],
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::frame_label_loader,
      v32);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&word_2C + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::sound_stream_head_loader,
      v33);
    gameswf::register_tag_loader(
      (gameswf::Self *)&word_2E,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_shape_morph_loader,
      v34);
    gameswf::register_tag_loader(
      (gameswf::Self *)&word_30,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_font_loader,
      v35);
    gameswf::register_tag_loader(
      (gameswf::Self *)&dword_38,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::export_loader,
      v36);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_38 + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::import_loader,
      v37);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_38 + 2),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_enable_debugger_loader,
      v38);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_38 + 3),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::do_init_action_loader,
      v39);
    gameswf::register_tag_loader(
      (gameswf::Self *)off_3C,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_video_loader,
      v40);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)off_3C + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::video_loader,
      v41);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)off_3C + 2),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_font_info_loader,
      v42);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)off_3C + 3),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_debug_id_loader,
      v43);
    gameswf::register_tag_loader(
      (gameswf::Self *)&dword_40,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_enable_debugger_loader,
      v44);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_40 + 2),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_tabindex_loader,
      v45);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_44 + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_file_attribute_loader,
      v46);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_44 + 2),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::place_object_2_loader,
      v47);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_44 + 3),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::import_loader,
      v48);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_48 + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_font_alignzones,
      v49);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_48 + 2),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_csm_textsetting_loader,
      v50);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_48 + 3),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_font_loader,
      v51);
    gameswf::register_tag_loader(
      (gameswf::Self *)&dword_4C,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::symbol_class_loader,
      v52);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_4C + 1),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_metadata_loader,
      v53);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_50 + 2),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_abc_loader,
      v54);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_50 + 3),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_shape_loader,
      v55);
    gameswf::register_tag_loader(
      (gameswf::Self *)&dword_54,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_shape_morph_loader,
      v56);
    gameswf::register_tag_loader(
      (gameswf::Self *)((char *)&dword_54 + 2),
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_scene_loader,
      v57);
    gameswf::register_tag_loader(
      (gameswf::Self *)&dword_58,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_font_name,
      v58);
    gameswf::register_tag_loader(
      (gameswf::Self *)&dword_C8,
      (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_native_image_loader,
      v59);
    return gameswf::register_tag_loader(
             (gameswf::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_124)->st_size,
             (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))gameswf::define_abc_loader_optimized,
             v60);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::inflate_wrapper  (binary VA: 0x10a02d0)
// Original: gameswf::inflate_wrapper
// ----------------------------------------------------------------------------
const char * gameswf::inflate_wrapper(gameswf::Self *self, gameswf::File::Self *a2, void *a3)
{
  const char *v3;
  const char *v4;
  const char *result;
  typedef char _g4_t_v6;
  typedef char _g4_t_v7;
  typedef char *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef gameswf::File::Self *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (6u + sizeof(_g4_t_v6)) > _g4_s0 ? (6u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (7u + sizeof(_g4_t_v7)) > _g4_s1 ? (7u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v8)) > _g4_s2 ? (8u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v9)) > _g4_s3 ? (12u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v10)) > _g4_s4 ? (20u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v11)) > _g4_s5 ? (24u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v12)) > _g4_s6 ? (40u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v13)) > _g4_s7 ? (44u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v14)) > _g4_s8 ? (48u + sizeof(_g4_t_v14)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 6u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 7u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);

  v10 = a2;
  v11 = a3;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v8 = nullptr;
  v9 = 0;
  v3 = (const char *)inflateInit_(&v8, "1.2.3", 56);
  if ( v3 != nullptr )
    return (const char *)gameswf::logError((gameswf::Self *)"error: inflate_wrapper() inflateInit() returned %d\n", v3);
  while ( 1 )
  {
    (*((void (**)(char *, int, uint32_t))self + 2))(&v7, 1, *(uint32_t *)self);
    v8 = &v6;
    v6 = v7;
    v9 = 1;
    v4 = (const char *)inflate(&v8, 2);
    if ( v4 == (const char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
      break;
    if ( v4 != nullptr )
      gameswf::logError((gameswf::Self *)"error: inflate_wrapper() inflate() returned %d\n", v4);
  }
  result = (const char *)inflateEnd(&v8);
  if ( result != nullptr )
    return (const char *)gameswf::logError((gameswf::Self *)"error: inflate_wrapper() inflateEnd() return %d\n", result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_native_image_loader  (binary VA: 0x10a0410)
// Original: gameswf::define_native_image_loader
// ----------------------------------------------------------------------------
int gameswf::define_native_image_loader(gameswf::Self **self, gameswf::Stream::Self *a2, uint32_t *a3)
{
  int v3;
  gameswf::MemBuf::Self *v4;
  gameswf::RefCounted::Self *BitmapInfoNative;
  gameswf::Self *v6;
  int v7;
  gameswf::Self *WeakProxy;
  gameswf::Self *v9;
  bool v10;
  int v11;
  float v12; // xmm1_4
  float v13; // xmm0_4
  size_t v15;
  int v16;
  const char *v17;
  int v18;
  gameswf::MemBuf::Self *U32;
  int v20;
  int v21;

  HIWORD(v21) = gameswf::Stream::readU16((gameswf::Stream::Self *)self);
  LOWORD(v21) = gameswf::Stream::readU16((gameswf::Stream::Self *)self);
  HIWORD(v20) = gameswf::Stream::readU16((gameswf::Stream::Self *)self);
  BYTE1(v20) = gameswf::Stream::readU8((gameswf::Stream::Self *)self);
  U32 = (gameswf::MemBuf::Self *)gameswf::Stream::readU32((gameswf::Stream::Self *)self);
  v3 = opNew(0x10u);
  gameswf::MemBuf::Construct((gameswf::MemBuf::Self *)v3);
  v4 = U32;
  if ( U32 != *(gameswf::MemBuf::Self **)v3 )
  {
    if ( (int)(uintptr_t)(U32) > *(uint32_t *)(v3 + 4) )
    {
      v15 = gameswf::MemBuf::capacity(U32, 0);
      gameswf::MemBuf::reserve((gameswf::MemBuf::Self *)v3, v15);
      v4 = U32;
    }
    *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v4);
  }
  if ( BYTE1(v20) != 0 )
    gameswf::inflate_wrapper(*(self + 1), *(gameswf::File::Self **)(v3 + 8), v4);
  else
    gameswf::File::readFully(*(self + 1), (gameswf::MemBuf::Self *)v3, -1);
  BitmapInfoNative = (gameswf::RefCounted::Self *)gameswf::render::createBitmapInfoNative(
                                              (gameswf::render::Self *)(uint16_t)v21,
                                              HIWORD(v20),
                                              v3,
                                              (const gameswf::MemBuf::Self *)"Native",
                                              v17);
  if ( a3[6] == 0 )
    goto LABEL_22;
  v6 = (gameswf::Self *)a3[5];
  if ( *((uint8_t *)v6 + 2) == 0 )
  {
    v10 = (*(uint16_t *)v6)-- == 1;
    if ( v10 )
      gameswf::free_internal(v6);
    a3[5] = 0;
    a3[6] = 0;
LABEL_22:
    v7 = opNew(0x50u);
    gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v7);
    *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_208E728);
    *(uint32_t *)(v7 + 12) = 0;
    *(uint32_t *)(v7 + 16) = 0;
    *(uint32_t *)(v7 + 20) = 0;
    *(uint32_t *)(v7 + 24) = 0;
    sub_7E5ED0((gameswf::Self **)(v7 + 20), nullptr);
    goto LABEL_15;
  }
  U32 = (gameswf::MemBuf::Self *)a3[6];
  v7 = opNew(0x50u);
  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v7);
  *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_208E728);
  *(uint32_t *)(v7 + 12) = 0;
  *(uint32_t *)(v7 + 16) = 0;
  *(uint32_t *)(v7 + 20) = 0;
  *(uint32_t *)(v7 + 24) = (uint32_t)(uintptr_t)(U32);
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(U32);
  v9 = *(gameswf::Self **)(v7 + 20);
  if ( WeakProxy != v9 )
  {
    if ( v9 != nullptr )
    {
      v10 = (*(uint16_t *)v9)-- == 1;
      if ( v10 )
      {
        U32 = (gameswf::MemBuf::Self *)(WeakProxy);
        gameswf::free_internal(v9);
        WeakProxy = (gameswf::Self *)(U32);
      }
    }
    *(uint32_t *)(v7 + 20) = (uint32_t)(uintptr_t)(WeakProxy);
    if ( WeakProxy != nullptr )
      ++*(uint16_t *)WeakProxy;
  }
LABEL_15:
  *(uint32_t *)(v7 + 28) = (uint32_t)(uintptr_t)(BitmapInfoNative);
  *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_208E568);
  if ( BitmapInfoNative != nullptr )
    gameswf::RefCounted::addRef(BitmapInfoNative);
  *(uint32_t *)(v7 + 40) = 0;
  _mm_storel_ps((double *)(v7 + 48), g4_m128_from<__m128>(0LL));
  *(uint32_t *)(v7 + 32) = 0;
  _mm_storel_ps((double *)(v7 + 56), g4_m128_from<__m128>(0LL));
  v11 = *(uint32_t *)(v7 + 28);
  _mm_storel_ps((double *)(v7 + 64), g4_m128_from<__m128>(0LL));
  _mm_storel_ps((double *)(v7 + 72), g4_m128_from<__m128>(0LL));
  v12 = (float)*(int *)(v11 + 16);
  *(float *)(v7 + 36) = v12;
  v13 = (float)*(int *)(v11 + 20);
  *(uint32_t *)(v7 + 48) = 0;
  *(uint32_t *)(v7 + 52) = 0;
  *(float *)(v7 + 44) = v13;
  *(uint32_t *)(v7 + 60) = 0;
  *(float *)(v7 + 56) = v12;
  *(uint32_t *)(v7 + 64) = 0;
  *(float *)(v7 + 68) = v13;
  *(float *)(v7 + 72) = v12;
  *(float *)(v7 + 76) = v13;
  return G4_VCALL<int>(a3, 156, HIWORD(v21), v7, v16, v18, U32, v20, v21);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_bits_lossless_2_loader  (binary VA: 0x10a0720)
// Original: gameswf::define_bits_lossless_2_loader
// ----------------------------------------------------------------------------
int gameswf::define_bits_lossless_2_loader(gameswf::Self **self, gameswf::Stream::Self *a2, uint32_t *a3, gameswf::MovieDefinitionSub::Self *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, gameswf::File::Self **a16, int a17, uint16_t a18, int a19, int a20, int a21, int a22, int a23, char a24)
{
  uint16_t U16; // si
  gameswf::RefCounted::Self *BitmapInfoEmpty;
  gameswf::Self *v26;
  int v27;
  gameswf::Self *WeakProxy;
  gameswf::Self *v29;
  bool v30;
  int v31;
  float v32; // xmm1_4
  float v33; // xmm0_4
  uint8_t *v35;
  uint8_t *v36;
  int j;
  uint8_t v38; // di
  gameswf::File::Self *v39;
  int v40;
  int i;
  int v42;
  gameswf::File::Self *v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  __m128i v47;
  __m128i v48;
  __m128i v49;
  __m128i v50;
  __m128i v51;
  __m128i v52;
  __m128i v53;
  __m128i v54;
  __m128i v55;
  __m128i v56;
  __m128i v57;
  __m128i v58;
  __m128i v59;
  __m128i v60;
  __m128i v61;
  __m128i v62;
  __m128i v63;
  __m128i v64;
  __m128i v65;
  __m128i v66;
  __m128i v67;
  __m128i v68;
  __m128i v69;
  __m128i v70;
  __m128i v71;
  __m128i v72;
  __m128i v73;
  __m128i v74;
  __m128i v75;
  __m128i v76;
  __m128i v77;
  __m128i v78;
  __m128i v79;
  __m128i v80;
  __m128i v81;
  __m128i v82;
  __m128i v83;
  __m128i v84;
  __m128i v85;
  __m128i v86;
  __m128i v87;
  __m128i v88;
  __m128i v89;
  __m128i v90;
  __m128i v91;
  __m128i v92;
  __m128i v93;
  __m128i v94;
  __m128i v95;
  __m128i v96;
  __m128i v97;
  __m128i v98;
  __m128i v99;
  __m128i v100;
  __m128i v101;
  __m128i v102;
  __m128i v103;
  __m128i v104;
  __m128i v105;
  __m128i v106;
  __m128i v107;
  __m128i v108;
  __m128i v109;
  __m128i v110;
  __m128i v111;
  __m128i v112;
  __m128i v113;
  __m128i v114;
  __m128i v115;
  __m128i v116;
  __m128i v117;
  __m128i v118;
  __m128i v119;
  __m128i v120;
  __m128i v121;
  __m128i v122;
  __m128i v123;
  __m128i v124;
  __m128i v125;
  __m128i v126;
  __m128i v127;
  signed int v128;
  uint8_t *v129;
  int16_t v130;
  int16_t v131; // di
  gameswf::File::Self *v132;
  uint8_t *v133;
  int v134;
  int v135;
  gameswf::File::Self *v136;
  gameswf::ImageBase::Self *v137;
  uint8_t *v138;
  int v139;
  int16_t v140;
  int16_t v141; // di
  gameswf::File::Self *v142;
  gameswf::ImageBase::Self *v143;
  uint8_t *v144;
  int v145;
  char v146; // di
  char v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  const char *v180;
  const char *v181;
  __m128i v182;
  gameswf::RefCounted::Self *v183;
  gameswf::Self *v184;
  int v185;
  int v186;
  gameswf::File::Self *v187;
  unsigned int v188;
  unsigned int v189;
  char *v190;
  int v191;
  gameswf::File::Self *v192;
  int v193;
  gameswf::ImageBase::Self *v194;
  int v195;
  gameswf::File::Self *v196;
  int v197;
  gameswf::File::Self **RGBA;
  int v199;
  int v200;
  int v201;
  unsigned int v202;
  gameswf::ImageBase::Self *v203;
  gameswf::Self *RGB;
  uint8_t v205;
  unsigned int v206;
  int Position;
  int v208;
  int v209;
  uint8_t v210;
  gameswf::ImageBase::Self *v211;
  gameswf::ImageBase::Self *v212;
  gameswf::ImageBase::Self *v213;
  char *v214;
  __m128i v215;
  int v216;
  char *v217;
  char v218;

  HIWORD(v166) = gameswf::Stream::readU16((gameswf::Stream::Self *)self);
  LOBYTE(v175) = gameswf::Stream::readU8((gameswf::Stream::Self *)self);
  LOWORD(v169) = gameswf::Stream::readU16((gameswf::Stream::Self *)self);
  U16 = gameswf::Stream::readU16((gameswf::Stream::Self *)self);
  if ( G4_VCALL<int>(a3, 184, v148, v149, v150, v151, v152, v153, v154, v155, v156, v157, v158, v159, v160, v161, v162, v163, v164, v165, v166, v167, v168, v169, v170, v171, v172, v173, v174, v175, v176, v177, v178) != 0
    || (Position = gameswf::Stream::getPosition((gameswf::Stream::Self *)self)) >= gameswf::Stream::getTagEndPosition((gameswf::Stream::Self *)self) )
  {
    BitmapInfoEmpty = (gameswf::RefCounted::Self *)gameswf::render::createBitmapInfoEmpty((gameswf::render::Self *)a18, U16, v179);
    goto LABEL_10;
  }
  if ( a2 != (gameswf::Stream::Self *)&dword_14 )
  {
    v200 = U16;
    v208 = a18;
    RGBA = (gameswf::File::Self **)gameswf::createRGBA((gameswf::Self *)a18, U16, v179);
    if ( a24 == 3 )
    {
      v206 = (a18 + 3) & 0xFFFFFFFC;
      v185 = 4 * (uint8_t)gameswf::Stream::readU8((gameswf::Stream::Self *)self) + 4;
      v39 = (gameswf::File::Self *)opNewArray(v185 + v206 * U16);
      gameswf::inflate_wrapper(*(self + 1), v39, (void *)(v185 + v206 * v200));
      if ( v200 != 0 )
      {
        v211 = nullptr;
        v214 = (char *)v39 + v185;
        do
        {
          v40 = gameswf::scanline((gameswf::Self *)RGBA, v211, (int)(uintptr_t)(v180));
          if ( v208 != 0 )
          {
            for ( i = 0; i < v208; ++i )
            {
              v42 = (uint8_t)v214[i];
              *(uint8_t *)(v40 + 4 * i) = *((uint8_t *)v39 + 4 * v42);
              *(uint8_t *)(v40 + 4 * i + 1) = *((uint8_t *)v39 + 4 * v42 + 1);
              *(uint8_t *)(v40 + 4 * i + 2) = *((uint8_t *)v39 + 4 * v42 + 2);
              *(uint8_t *)(v40 + 4 * i + 3) = *((uint8_t *)v39 + 4 * v42 + 3);
            }
          }
          v211 = (gameswf::ImageBase::Self *)((char *)v211 + 1);
          v214 += v206;
        }
        while ( v200 > (int)(uintptr_t)(v211) );
      }
      if ( v39 != nullptr )
        gameswf::free_internal(v39);
      goto LABEL_7;
    }
    if ( a24 != 4 )
    {
      if ( a24 == 5 )
      {
        gameswf::inflate_wrapper(*(self + 1), RGBA[2], (void *)(4 * a18 * U16));
        if ( U16 != 0 )
        {
          v201 = 1;
          v193 = U16 + 1;
          do
          {
            v35 = (uint8_t *)gameswf::scanline((gameswf::Self *)RGBA, (gameswf::ImageBase::Self *)(v201 - 1), (int)(uintptr_t)(v180));
            if ( v208 != 0 )
            {
              v36 = v35;
              for ( j = 0; j < v208; ++j )
              {
                v38 = *v36;
                v210 = v36[2];
                v205 = v36[3];
                if ( *v36 != 0 )
                {
                  *v36 = 255 * v36[1] / v38;
                  v36[1] = 255 * v210 / v38;
                  v36[2] = 255 * v205 / v38;
                }
                else
                {
                  *v36 = 0;
                  v36[1] = 0;
                  v36[2] = 0;
                }
                v36[3] = v38;
                v36 += 4;
              }
            }
            ++v201;
          }
          while ( v201 != v193 );
        }
      }
LABEL_7:
      BitmapInfoEmpty = (gameswf::RefCounted::Self *)gameswf::render::createBitmapInfoRGBA(
                                                 (gameswf::render::Self *)RGBA,
                                                 (gameswf::ImageRGBA::Self *)"RGBA",
                                                 v180);
      if ( RGBA != nullptr )
      {
        G4_VCALL<void>(RGBA, 0);
        gameswf::free_internal((gameswf::Self *)RGBA);
      }
      goto LABEL_10;
    }
    v189 = (2 * a18 + 3) & 0xFFFFFFFC;
    v187 = (gameswf::File::Self *)opNewArray(v189 * U16);
    gameswf::inflate_wrapper(*(self + 1), v187, (void *)(v189 * U16));
    if ( U16 == 0 )
    {
LABEL_59:
      if ( v187 != nullptr )
        gameswf::free_internal(v187);
      goto LABEL_7;
    }
    v43 = v187;
    v194 = nullptr;
    v190 = (char *)v187 + 2 * a18;
    while ( 1 )
    {
      v44 = gameswf::scanline((gameswf::Self *)RGBA, v194, (int)(uintptr_t)(v180));
      if ( a18 != 0 )
      {
        v188 = 16 * (((unsigned int)a18 - 1) >> 4);
        if ( v188 != 0
          && a18 > 0xFu
          && (v44 > (unsigned int)(uintptr_t)(v190) || (unsigned int)(uintptr_t)(v43) > v44 + 4 * a18)
          && (v44 > (unsigned int)(uintptr_t)(v190 + 1) || v44 + 4 * a18 < (unsigned int)(uintptr_t)(v43) + 1) )
        {
          v45 = 0;
          v46 = 0;
          a3 = (uint32_t *)(((unsigned int)a18 - 1) >> 4);
          do
          {
            v47 = *(__m128i *)((char *)v43 + v46 + 16);
            v48 = *(__m128i *)((char *)v43 + v46);
            v49 = _mm_unpacklo_epi8(v48, v47);
            v50 = _mm_unpackhi_epi8(v48, v47);
            v51 = _mm_unpackhi_epi8(v49, v50);
            v52 = _mm_unpacklo_epi8(v49, v50);
            v53 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v52, v51), _mm_unpackhi_epi8(v52, v51));
            v54 = *(__m128i *)((char *)v43 + v46 + 17);
            v55 = _mm_unpackhi_epi8(*(__m128i *)((char *)v43 + v46 + 1), v54);
            v56 = _mm_unpacklo_epi8(*(__m128i *)((char *)v43 + v46 + 1), v54);
            v57 = _mm_unpacklo_epi8(v56, v55);
            v58 = _mm_unpackhi_epi8(v56, v55);
            v59 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v57, v58), _mm_unpackhi_epi8(v57, v58));
            ++v45;
            v60 = _mm_unpacklo_epi8(v59, g4_m128_from<__m128i>(0LL));
            v61 = _mm_slli_epi32(_mm_unpackhi_epi16(v60, g4_m128_from<__m128i>(0LL)), 8u);
            v62 = _mm_unpackhi_epi8(v59, g4_m128_from<__m128i>(0LL));
            v63 = _mm_slli_epi32(_mm_unpacklo_epi16(v60, g4_m128_from<__m128i>(0LL)), 8u);
            v64 = _mm_unpacklo_epi16(v63, v61);
            v65 = _mm_unpackhi_epi16(v63, v61);
            v66 = _mm_unpackhi_epi16(v62, g4_m128_from<__m128i>(0LL));
            v67 = _mm_slli_epi32(_mm_unpacklo_epi16(v62, g4_m128_from<__m128i>(0LL)), 8u);
            v68 = _mm_slli_epi32(v66, 8u);
            v69 = _mm_or_si128(
                    _mm_unpacklo_epi16(_mm_unpacklo_epi16(v64, v65), _mm_unpackhi_epi16(v64, v65)),
                    _mm_unpacklo_epi8(v53, g4_m128_from<__m128i>(0LL)));
            v70 = _mm_unpacklo_epi16(v67, v68);
            v71 = _mm_unpackhi_epi16(v67, v68);
            v72 = _mm_unpacklo_epi16(v69, g4_m128_from<__m128i>(0LL));
            v73 = _mm_unpackhi_epi16(v69, g4_m128_from<__m128i>(0LL));
            v74 = _mm_or_si128(
                    _mm_unpacklo_epi16(_mm_unpacklo_epi16(v70, v71), _mm_unpackhi_epi16(v70, v71)),
                    _mm_unpackhi_epi8(v53, g4_m128_from<__m128i>(0LL)));
            v215 = _mm_unpackhi_epi16(v74, g4_m128_from<__m128i>(0LL));
            v75 = _mm_srai_epi32(v73, 8u);
            v76 = _mm_srai_epi32(v72, 8u);
            v77 = _mm_unpacklo_epi16(v76, v75);
            v78 = _mm_unpackhi_epi16(v76, v75);
            v79 = _mm_unpacklo_epi16(v74, g4_m128_from<__m128i>(0LL));
            v80 = _mm_srai_epi32(v215, 8u);
            v81 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v77, v78), _mm_unpackhi_epi16(v77, v78));
            v82 = _mm_srai_epi32(v79, 8u);
            v83 = _mm_unpacklo_epi16(v82, v80);
            v84 = _mm_unpackhi_epi16(v82, v80);
            v85 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v83, v84), _mm_unpackhi_epi16(v83, v84));
            v86 = _mm_unpackhi_epi8(v81, v85);
            v87 = _mm_unpacklo_epi8(v81, v85);
            v88 = _mm_unpacklo_epi8(v87, v86);
            v89 = _mm_unpackhi_epi8(v87, v86);
            v90 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v88, v89), _mm_unpackhi_epi8(v88, v89));
            v91 = _mm_srai_epi32(v73, 3u);
            v92 = _mm_srai_epi32(v72, 3u);
            v93 = _mm_unpacklo_epi16(v92, v91);
            v94 = _mm_unpackhi_epi16(v92, v91);
            v95 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v93, v94), _mm_unpackhi_epi16(v93, v94));
            v96 = _mm_srai_epi32(v79, 3u);
            v97 = _mm_slli_epi32(v73, 3u);
            v182 = _mm_srai_epi32(v215, 3u);
            v98 = _mm_unpackhi_epi16(v96, v182);
            v99 = _mm_unpacklo_epi16(v96, v182);
            v100 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v99, v98), _mm_unpackhi_epi16(v99, v98));
            v101 = _mm_unpackhi_epi8(v95, v100);
            v102 = _mm_unpacklo_epi8(v95, v100);
            v103 = _mm_unpacklo_epi8(v102, v101);
            v104 = _mm_unpackhi_epi8(v102, v101);
            v105 = v103;
            v106 = _mm_unpacklo_epi8(v103, v104);
            v107 = _mm_unpackhi_epi8(v105, v104);
            v108 = _mm_slli_epi32(v72, 3u);
            v109 = _mm_unpacklo_epi16(v108, v97);
            v110 = _mm_unpackhi_epi16(v108, v97);
            v111 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v109, v110), _mm_unpackhi_epi16(v109, v110));
            v112 = _mm_slli_epi32(v79, 3u);
            v113 = _mm_slli_epi32(v215, 3u);
            v114 = _mm_and_si128(_mm_unpacklo_epi8(v106, v107), G4_BITCAST<__m128i>(xmmword_1C7C9C0));
            v115 = _mm_unpacklo_epi16(v112, v113);
            v116 = _mm_unpackhi_epi16(v112, v113);
            v117 = _mm_and_si128(v90, G4_BITCAST<__m128i>(xmmword_1C7C9B0));
            v118 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v115, v116), _mm_unpackhi_epi16(v115, v116));
            v119 = _mm_unpackhi_epi8(v111, v118);
            v120 = _mm_unpacklo_epi8(v111, v118);
            v121 = _mm_unpacklo_epi8(v120, v119);
            v122 = _mm_unpackhi_epi8(v120, v119);
            v123 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v121, v122), _mm_unpackhi_epi8(v121, v122));
            v124 = _mm_unpacklo_epi8(G4_BITCAST<__m128i>(xmmword_1C7C450), v114);
            v125 = _mm_unpackhi_epi8(G4_BITCAST<__m128i>(xmmword_1C7C450), v114);
            v126 = _mm_unpacklo_epi8(v117, v123);
            v127 = _mm_unpackhi_epi8(v117, v123);
            *(__m128i *)(v44 + 2 * v46) = _mm_unpacklo_epi8(v124, v126);
            *(__m128i *)(v44 + 2 * v46 + 16) = _mm_unpackhi_epi8(v124, v126);
            *(__m128i *)(v44 + 2 * v46 + 32) = _mm_unpacklo_epi8(v125, v127);
            *(__m128i *)(v44 + 2 * v46 + 48) = _mm_unpackhi_epi8(v125, v127);
            v46 += 32;
          }
          while ( (unsigned int)(uintptr_t)(a3) > v45 );
          v128 = 16 * (((unsigned int)a18 - 1) >> 4);
          if ( v188 == a18 )
            goto LABEL_58;
        }
        else
        {
          v128 = 0;
        }
        v129 = (uint8_t *)(v44 + 4 * v128);
        do
        {
          v130 = *((uint8_t *)v43 + 2 * v128);
          v131 = *((uint8_t *)v43 + 2 * v128++ + 1);
          *v129 = -1;
          v216 = (uint16_t)((v131 << 8) | v130);
          v129[1] = BYTE1(v216) & 0xF8;
          v129[2] = (v216 >> 3) & 0xFC;
          v129[3] = 8 * v130;
          v129 += 4;
        }
        while ( a18 > v128 );
      }
LABEL_58:
      v194 = (gameswf::ImageBase::Self *)((char *)v194 + 1);
      v43 = (gameswf::File::Self *)((char *)v43 + v189);
      v190 += v189;
      if ( v200 <= (int)(uintptr_t)(v194) )
        goto LABEL_59;
    }
  }
  v199 = U16;
  v209 = a18;
  RGB = (gameswf::Self *)gameswf::createRGB((gameswf::Self *)a18, U16, v179);
  switch ( a24 )
  {
    case 3:
      v202 = (v209 + 3) & 0xFFFFFFFC;
      v186 = 3 * (uint8_t)gameswf::Stream::readU8((gameswf::Stream::Self *)self) + 3;
      v132 = (gameswf::File::Self *)opNewArray(v186 + v202 * U16);
      gameswf::inflate_wrapper(*(self + 1), v132, (void *)(v186 + v202 * v199));
      if ( v199 != 0 )
      {
        v212 = nullptr;
        v217 = (char *)v132 + v186;
        do
        {
          v133 = (uint8_t *)gameswf::scanline(RGB, v212, (int)(uintptr_t)(v181));
          if ( v209 != 0 )
          {
            v195 = 0;
            do
            {
              v134 = v195++;
              v135 = 3 * (uint8_t)v217[v134];
              *v133 = *((uint8_t *)v132 + v135);
              v133[1] = *((uint8_t *)v132 + v135 + 1);
              v133[2] = *((uint8_t *)v132 + v135 + 2);
              v133 += 3;
            }
            while ( v209 > v195 );
          }
          v212 = (gameswf::ImageBase::Self *)((char *)v212 + 1);
          v217 += v202;
        }
        while ( v199 > (int)(uintptr_t)(v212) );
      }
      if ( v132 != nullptr )
        gameswf::free_internal(v132);
      break;
    case 4:
      v196 = (gameswf::File::Self *)opNewArray(((2 * v209 + 3) & 0xFFFFFFFC) * U16);
      gameswf::inflate_wrapper(*(self + 1), v196, (void *)(((2 * v209 + 3) & 0xFFFFFFFC) * U16));
      if ( U16 != 0 )
      {
        v213 = nullptr;
        v136 = v196;
        v137 = nullptr;
        do
        {
          v138 = (uint8_t *)gameswf::scanline(RGB, v137, (int)(uintptr_t)(v181));
          if ( v209 != 0 )
          {
            v139 = 0;
            do
            {
              v140 = *((uint8_t *)v136 + v139);
              v141 = *((uint8_t *)v136 + v139 + 1);
              v139 += 2;
              v191 = (uint16_t)((v141 << 8) | v140);
              *v138 = BYTE1(v191) & 0xF8;
              v138[1] = (v191 >> 3) & 0xFC;
              v138[2] = 8 * v140;
              v138 += 3;
            }
            while ( v139 != 2 * v209 );
          }
          v213 = (gameswf::ImageBase::Self *)((char *)v213 + 1);
          v136 = (gameswf::File::Self *)((char *)v136 + ((2 * v209 + 3) & 0xFFFFFFFC));
          v137 = v213;
        }
        while ( v199 > (int)(uintptr_t)(v213) );
      }
      if ( v196 != nullptr )
        gameswf::free_internal(v196);
      break;
    case 5:
      v197 = 4 * v209;
      v192 = (gameswf::File::Self *)opNewArray(4 * v209 * U16);
      gameswf::inflate_wrapper(*(self + 1), v192, (void *)(4 * v209 * U16));
      if ( U16 != 0 )
      {
        v203 = nullptr;
        v142 = v192;
        v143 = nullptr;
        do
        {
          v144 = (uint8_t *)gameswf::scanline(RGB, v143, (int)(uintptr_t)(v181));
          if ( v209 != 0 )
          {
            v145 = 0;
            do
            {
              v146 = *((uint8_t *)v142 + v145 + 2);
              v218 = *((uint8_t *)v142 + v145 + 3);
              v147 = *((uint8_t *)v142 + v145 + 1);
              v145 += 4;
              *v144 = v147;
              v144[1] = v146;
              v144[2] = v218;
              v144 += 3;
            }
            while ( v145 != v197 );
          }
          v203 = (gameswf::ImageBase::Self *)((char *)v203 + 1);
          v142 = (gameswf::File::Self *)((char *)v142 + v197);
          v143 = v203;
        }
        while ( v199 > (int)(uintptr_t)(v203) );
      }
      if ( v192 != nullptr )
        gameswf::free_internal(v192);
      break;
    default:
      break;
  }
  BitmapInfoEmpty = (gameswf::RefCounted::Self *)gameswf::render::createBitmapInfoRGB(RGB, (gameswf::ImageRGB::Self *)"RGB", v181);
  if ( RGB != nullptr )
  {
    (**(void (***)(gameswf::Self *))RGB)(RGB);
    gameswf::free_internal(RGB);
  }
LABEL_10:
  if ( a3[6] == 0 )
  {
LABEL_24:
    v27 = opNew(0x50u);
    gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v27);
    *(uint32_t *)v27 = ((uint32_t)(uintptr_t)&off_208E728);
    *(uint32_t *)(v27 + 12) = 0;
    *(uint32_t *)(v27 + 16) = 0;
    *(uint32_t *)(v27 + 20) = 0;
    *(uint32_t *)(v27 + 24) = 0;
    sub_7E5ED0((gameswf::Self **)(v27 + 20), nullptr);
    goto LABEL_18;
  }
  v26 = (gameswf::Self *)a3[5];
  if ( *((uint8_t *)v26 + 2) == 0 )
  {
    v30 = (*(uint16_t *)v26)-- == 1;
    if ( v30 )
      gameswf::free_internal(v26);
    a3[5] = 0;
    a3[6] = 0;
    goto LABEL_24;
  }
  v183 = (gameswf::RefCounted::Self *)a3[6];
  v27 = opNew(0x50u);
  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)v27);
  *(uint32_t *)v27 = ((uint32_t)(uintptr_t)&off_208E728);
  *(uint32_t *)(v27 + 12) = 0;
  *(uint32_t *)(v27 + 16) = 0;
  *(uint32_t *)(v27 + 20) = 0;
  *(uint32_t *)(v27 + 24) = (uint32_t)(uintptr_t)(v183);
  WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v183);
  v29 = *(gameswf::Self **)(v27 + 20);
  if ( WeakProxy != v29 )
  {
    if ( v29 != nullptr )
    {
      v30 = (*(uint16_t *)v29)-- == 1;
      if ( v30 )
      {
        v184 = WeakProxy;
        gameswf::free_internal(v29);
        WeakProxy = v184;
      }
    }
    *(uint32_t *)(v27 + 20) = (uint32_t)(uintptr_t)(WeakProxy);
    if ( WeakProxy != nullptr )
      ++*(uint16_t *)WeakProxy;
  }
LABEL_18:
  *(uint32_t *)(v27 + 28) = (uint32_t)(uintptr_t)(BitmapInfoEmpty);
  *(uint32_t *)v27 = ((uint32_t)(uintptr_t)&off_208E568);
  if ( BitmapInfoEmpty != nullptr )
    gameswf::RefCounted::addRef(BitmapInfoEmpty);
  *(uint32_t *)(v27 + 40) = 0;
  _mm_storel_ps((double *)(v27 + 48), g4_m128_from<__m128>(0LL));
  *(uint32_t *)(v27 + 32) = 0;
  _mm_storel_ps((double *)(v27 + 56), g4_m128_from<__m128>(0LL));
  v31 = *(uint32_t *)(v27 + 28);
  _mm_storel_ps((double *)(v27 + 64), g4_m128_from<__m128>(0LL));
  _mm_storel_ps((double *)(v27 + 72), g4_m128_from<__m128>(0LL));
  v32 = (float)*(int *)(v31 + 16);
  *(float *)(v27 + 36) = v32;
  v33 = (float)*(int *)(v31 + 20);
  *(uint32_t *)(v27 + 48) = 0;
  *(float *)(v27 + 44) = v33;
  *(uint32_t *)(v27 + 52) = 0;
  *(float *)(v27 + 56) = v32;
  *(uint32_t *)(v27 + 60) = 0;
  *(uint32_t *)(v27 + 64) = 0;
  *(float *)(v27 + 68) = v33;
  *(float *)(v27 + 72) = v32;
  *(float *)(v27 + 76) = v33;
  return G4_VCALL<int>(a3, 156, HIWORD(a15), v27);
}

// ----------------------------------------------------------------------------
// Function: gameswf::substitute_bitmap_character  (binary VA: 0x10a14c0)
// Original: gameswf::substitute_bitmap_character
// ----------------------------------------------------------------------------
int gameswf::substitute_bitmap_character(gameswf::Self *self, gameswf::String::Self *a2)
{
  gameswf::Self *v2;
  float *v3;
  int v4;
  int HostInterface;
  char *v6;
  int result;
  int v8;
  int v9;
  int v10;
  float v11; // xmm1_4
  float v12; // xmm2_4
  int v13;
  int32_t v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef float _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[4];
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v21)) > _g4_s6 ? (24u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v22)) > _g4_s7 ? (28u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v23)) > _g4_s8 ? (32u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v24)) > _g4_s9 ? (36u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v25)) > _g4_s10 ? (40u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v26)) > _g4_s11 ? (44u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v27)) > _g4_s12 ? (44u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v28)) > _g4_s13 ? (48u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v29)) > _g4_s14 ? (64u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v30)) > _g4_s15 ? (68u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v31)) > _g4_s16 ? (72u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v32)) > _g4_s17 ? (76u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v33)) > _g4_s18 ? (80u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v34)) > _g4_s19 ? (84u + sizeof(_g4_t_v34)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);

  v2 = self;
  v3 = (float *)G4_VCALL<int>(a2, 40, v15, v16, v17, v18, v20, v21, v22, v23, v24, v25, v26, v28[0], v28[1], v28[2], v28[3], v29, v30, v31, v32, v33, v34, &self);
  v4 = *((uint32_t *)v3 + 5);
  v31 = 0;
  v32 = 0;
  v30 = v4;
  v29 = *((uint32_t *)v3 + 4);
  HostInterface = gameswf::getHostInterface();
  v6 = (char *)v2 + 1;
  if ( *(uint8_t *)v2 == 0xFF )
    v6 = *((char **)v2 + 3);
  (*(void (**)(uint32_t *, int, char *, int *))(*(uint32_t *)HostInterface + 16))(v28, HostInterface, v6, &v29);
  result = v28[0];
  if ( v28[0] != 0 )
  {
    v8 = v30;
    *((uint32_t *)v3 + 4) = v29;
    v9 = *(uint32_t *)v3;
    *((uint32_t *)v3 + 5) = v8;
    (*(void (**)(float *, uint32_t *))(v9 + 36))(v3, v28);
    v27 = v32;
    v10 = G4_VCALL<int>(v3, 56);
    v19 = (float)v31;
    result = G4_VCALL<int>(v3, 52);
    v11 = v19 / (float)result;
    if ( v11 > 0.0 )
    {
      v12 = (float)v27 / (float)v10;
      if ( v12 > 0.0 )
      {
        v3[8] = v11;
        v3[9] = v12;
      }
    }
    v13 = v28[0];
    if ( v28[0] != 0 )
    {
      while ( 1 )
      {
        v14 = *(uint32_t *)(v13 + 4);
        _mm_mfence();
        if ( v14 == 2 )
        {
          if ( *(uint16_t *)(v13 + 32) == 0xFFFF )
            goto LABEL_10;
          glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v13);
        }
        else
        {
          if ( v14 == 1 )
            return G4_VCALL<int>(v13, 4);
LABEL_10:
          result = __sync_val_compare_and_swap((volatile int32_t *)(v13 + 4), v14, v14 - 1);
          if ( v14 == result )
            return result;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::export_loader  (binary VA: 0x10a1630)
// Original: gameswf::export_loader
// ----------------------------------------------------------------------------
int gameswf::export_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::BitmapCharacterDef::Self *a3)
{
  int result;
  uint16_t U16;
  uint16_t v5; // di
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  const char *v11;
  typedef gameswf::BitmapCharacterDef::Self *_g4_t_v12;
  typedef gameswf::String::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef gameswf::Self *_g4_t_v18;
  typedef int16_t _g4_t_v19;
  typedef int16_t _g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (33u + sizeof(_g4_t_v17)) > _g4_s5 ? (33u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v18)) > _g4_s6 ? (44u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v19)) > _g4_s7 ? (48u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (50u + sizeof(_g4_t_v20)) > _g4_s8 ? (50u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 33u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 50u);

  result = gameswf::Stream::readU16(self);
  if ( (uint16_t)result != 0 )
  {
    v15 = 1;
    v14 = (uint16_t)result + 1;
    while ( 1 )
    {
      U16 = gameswf::Stream::readU16(self);
      v19 = -1;
      v16 = 1;
      HIBYTE(v20) = ((uint16_t)(v20 | 0x7F) >> 8) | 1;
      LOBYTE(v20) = 127;
      v17 = 0;
      v5 = U16;
      gameswf::Stream::readString(self, (gameswf::String::Self *)&v16);
      v6 = G4_VCALL<int>(a3, 124, v5, v12);
      if ( v6 != 0 )
      {
        result = G4_VCALL<int>(a3, 168, &v16, v5, v6);
        goto LABEL_6;
      }
      v7 = G4_VCALL<int>(a3, 88, v5);
      v8 = *(uint32_t *)a3;
      if ( v7 != 0 )
        goto LABEL_11;
      v9 = (*(int (**)(gameswf::BitmapCharacterDef::Self *, uint32_t))(v8 + 152))(a3, v5);
      v10 = *(uint32_t *)a3;
      if ( v9 == 0 )
        break;
      v13 = (gameswf::String::Self *)v9;
      (*(void (**)(gameswf::BitmapCharacterDef::Self *, char *, uint32_t, int))(v10 + 168))(a3, &v16, v5, v9);
      v12 = a3;
      result = gameswf::substitute_bitmap_character((gameswf::Self *)&v16, v13);
LABEL_6:
      if ( v16 == -1 && (v20 & 0x100) != 0 )
      {
        result = gameswf::free_internal(v18);
        if ( ++v15 == v14 )
          return result;
      }
      else if ( ++v15 == v14 )
      {
        return result;
      }
    }
    v7 = (*(int (**)(gameswf::BitmapCharacterDef::Self *, uint32_t))(v10 + 160))(a3, v5);
    if ( v7 == 0 )
    {
      v11 = &v17;
      if ( v16 == -1 )
        v11 = (const char *)v18;
      result = gameswf::logError((gameswf::Self *)"export error: don't know how to export resource '%s'\n", v11);
      goto LABEL_6;
    }
    v8 = *(uint32_t *)a3;
LABEL_11:
    result = (*(int (**)(gameswf::BitmapCharacterDef::Self *, char *, uint32_t, int))(v8 + 168))(a3, &v16, v5, v7);
    goto LABEL_6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::symbol_class_loader  (binary VA: 0x10a1820)
// Original: gameswf::symbol_class_loader
// ----------------------------------------------------------------------------
gameswf::String::Self * gameswf::symbol_class_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::BitmapCharacterDef::Self *a3)
{
  gameswf::String::Self *result;
  typedef uint16_t _g4_t_U16;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[12];
  typedef gameswf::Self *_g4_t_v8;
  typedef int16_t _g4_t_v9;
  typedef int16_t _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_U16)) > _g4_s0 ? (4u + sizeof(_g4_t_U16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v7)) > _g4_s3 ? (16u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v8)) > _g4_s4 ? (28u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v9)) > _g4_s5 ? (32u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (34u + sizeof(_g4_t_v10)) > _g4_s6 ? (34u + sizeof(_g4_t_v10)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_U16 &U16 = *reinterpret_cast<_g4_t_U16 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 34u);

  result = (gameswf::String::Self *)gameswf::Stream::readU16(self);
  if ( (uint16_t)(uintptr_t)(result) != 0 )
  {
    v6 = 1;
    v5 = (uint16_t)(uintptr_t)(result) + 1;
    do
    {
      while ( 1 )
      {
        U16 = gameswf::Stream::readU16(self);
        v7[0] = 1;
        v9 = -1;
        v7[1] = 0;
        HIBYTE(v10) = ((uint16_t)(v10 | 0x7F) >> 8) | 1;
        LOBYTE(v10) = 127;
        gameswf::Stream::readString(self, (gameswf::String::Self *)v7);
        G4_VCALL<void>(a3, 100, U16, v7);
        result = (gameswf::String::Self *)G4_VCALL<int>(a3, 152, U16);
        if ( result != nullptr )
          result = (gameswf::String::Self *)gameswf::substitute_bitmap_character((gameswf::Self *)v7, result);
        if ( v7[0] == 0xFF && (v10 & 0x100) != 0 )
          break;
        if ( ++v6 == v5 )
          return result;
      }
      result = (gameswf::String::Self *)gameswf::free_internal(v8);
      ++v6;
    }
    while ( v6 != v5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::place_object_2_loader  (binary VA: 0x10a3fc0)
// Original: gameswf::place_object_2_loader
// ----------------------------------------------------------------------------
int gameswf::place_object_2_loader(long double a1, __m128 a2, gameswf::Self *self, gameswf::Stream::Self *a4, int a5)
{
  int v5;
  int **v6;
  int v7;
  int v9;

  v5 = G4_VCALL<int>(a5, 40);
  v6 = *(int ***)(a5 + 24);
  if ( v6 != nullptr && *(uint8_t *)(*(uint32_t *)(a5 + 20) + 2) == 0 )
  {
    v9 = v5;
    sub_7E5ED0((gameswf::Self **)(a5 + 20), nullptr);
    *(uint32_t *)(a5 + 24) = 0;
    v6 = nullptr;
    v5 = v9;
  }
  v7 = gameswf::PlaceObject2::read(a1, a2, v6, self, a4, v5, a5);
  return G4_VCALL<int>(a5, 128, v7);
}

// ----------------------------------------------------------------------------
// Function: gameswf::logPush  (binary VA: 0x10a6800)
// Original: gameswf::logPush
// ----------------------------------------------------------------------------
void gameswf::logPush()
{
  ++dword_20E5040;
}

// ----------------------------------------------------------------------------
// Function: gameswf::logPop  (binary VA: 0x10a6820)
// Original: gameswf::logPop
// ----------------------------------------------------------------------------
void gameswf::logPop()
{
  --dword_20E5040;
}

// ----------------------------------------------------------------------------
// Function: gameswf::logMsg  (binary VA: 0x10a6840)
// Original: gameswf::logMsg
// ----------------------------------------------------------------------------
int gameswf::logMsg(gameswf::Self *self, const char *__varargs, ...)
{
  int result;
  int v3;
  signed int v4;
  unsigned int v5;
  unsigned int v6;
  int HostInterface;

  result = gameswf::getHostInterface();
  if ( result != 0 )
  {
    v3 = dword_20E5040;
    if ( dword_20E5040 > 0 )
    {
      v4 = 16 * ((unsigned int)dword_20E5040 >> 4);
      if ( (unsigned int)dword_20E5040 > 0xF && v4 != 0 )
      {
        v5 = 0;
        do
        {
          v6 = v5++;
          xmmword_20E5060[v6] = (uint8_t)(uintptr_t)(xmmword_1C7C9D0);
        }
        while ( (unsigned int)v3 >> 4 > v5 );
        if ( v3 == v4 )
          goto LABEL_9;
      }
      else
      {
        v4 = 0;
      }
      do
        *((uint8_t *)xmmword_20E5060 + v4++) = 9;
      while ( v3 > v4 );
    }
LABEL_9:
    vsnprintf((char *)xmmword_20E5060 + v3, 500 - v3, (const char *)self, &__varargs);
    HostInterface = gameswf::getHostInterface();
    return G4_VCALL<int>(HostInterface, 28, 0, xmmword_20E5060);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::logError  (binary VA: 0x10a6920)
// Original: gameswf::logError
// ----------------------------------------------------------------------------
int gameswf::logError(gameswf::Self *self, const char *__varargs, ...)
{
  int result;
  int HostInterface;

  result = gameswf::getHostInterface();
  if ( result != 0 )
  {
    vsnprintf((char *)xmmword_20E5060 + dword_20E5040, 500 - dword_20E5040, (const char *)self, &__varargs);
    HostInterface = gameswf::getHostInterface();
    return G4_VCALL<int>(HostInterface, 28, 1, xmmword_20E5060);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::clearsTagLoaders  (binary VA: 0x10abc40)
// Original: gameswf::clearsTagLoaders
// ----------------------------------------------------------------------------
void gameswf::clearsTagLoaders()
{
  gameswf::Self *v0;
  int v1;
  int v2;
  int i;
  uint32_t *v4;

  v0 = (gameswf::Self *)dword_20E5260;
  if ( dword_20E5260 != 0 )
  {
    v1 = *(uint32_t *)(dword_20E5260 + 4);
    if ( v1 >= 0 )
    {
      v2 = 8;
      for ( i = 0; i <= v1; ++i )
      {
        v4 = (uint32_t *)((char *)v0 + v2);
        if ( *(uint32_t *)((char *)v0 + v2) != -2 )
        {
          *v4 = -2;
          v4[1] = 0;
          v0 = (gameswf::Self *)dword_20E5260;
        }
        v2 += 16;
      }
    }
    gameswf::free_internal(v0);
    dword_20E5260 = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::getTagLoader  (binary VA: 0x10abcc0)
// Original: gameswf::getTagLoader
// ----------------------------------------------------------------------------
int gameswf::getTagLoader(gameswf::Self *self, uint32_t *a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int i;
  int v7;

  result = 0;
  if ( dword_20E5260 != 0 )
  {
    v3 = 65599
       * (((BYTE2(self) + 65599 * (HIBYTE(self) + 352988219)) << 6)
        + BYTE1(self)
        + 0xFFFF * (BYTE2(self) + 65599 * (HIBYTE(self) + 352988219)))
       + (uint8_t)(uintptr_t)(self);
    v7 = *(uint32_t *)(dword_20E5260 + 4);
    v4 = v3 & v7;
    v5 = dword_20E5260 + 16 * (v3 & v7) + 8;
    if ( *(uint32_t *)v5 != -2 && v4 == (*(uint32_t *)(dword_20E5260 + 16 * (v3 & v7) + 12) & v7) )
    {
      for ( i = *(uint32_t *)(dword_20E5260 + 16 * (v3 & v7) + 12);
            v3 != i || *(gameswf::Self **)(v5 + 8) != self;
            i = *(uint32_t *)(dword_20E5260 + 16 * v4 + 12) )
      {
        v4 = *(uint32_t *)v5;
        if ( *(uint32_t *)v5 == -1 )
          return 0;
        v5 = dword_20E5260 + 16 * v4 + 8;
      }
      if ( v4 < 0 )
        return 0;
      result = 1;
      if ( a2 != nullptr )
        *a2 = *(uint32_t *)(dword_20E5260 + 16 * v4 + 20);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::movieDefLoader  (binary VA: 0x10ac470)
// Original: gameswf::movieDefLoader
// ----------------------------------------------------------------------------
int gameswf::movieDefLoader(gameswf::Stream::Self **self)
{
  gameswf::MovieDefImpl::read_tags(self);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::register_tag_loader  (binary VA: 0x10ad510)
// Original: gameswf::register_tag_loader
// ----------------------------------------------------------------------------
int gameswf::register_tag_loader(gameswf::Self *self, void (*a2)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))
{
  return (int)(uintptr_t)gameswf::hash_tag_loader::add(
           (gameswf::Self **)&dword_20E5260,
           (const int *)&self,
           &a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::isTagLoadersInitialized  (binary VA: 0x10ad550)
// Original: gameswf::isTagLoadersInitialized
// ----------------------------------------------------------------------------
bool gameswf::isTagLoadersInitialized()
{
  int v0;
  bool result;

  v0 = 144;
  if ( dword_20E5260 != 0 )
  {
    LOBYTE(v0) = 96;
    if ( *(int *)dword_20E5260 >= 96 )
      v0 = *(uint32_t *)dword_20E5260;
    v0 = (3 * v0) >> 1;
  }
  gameswf::hash_int_void_gameswf_Stream_6376d1::set_raw_capacity(
    (gameswf::hash<int, void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *), gameswf::fixed_size_hash<int>> *)&dword_20E5260,
    v0);
  result = false;
  if ( dword_20E5260 != 0 )
    return *(uint32_t *)dword_20E5260 > 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_void_gameswf_Stream_6376d1::Destroy  (binary VA: 0x10ae700)
// Original: gameswf::hash<int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *),gameswf::fixed_size_hash<int>>::~hash
// ----------------------------------------------------------------------------
void gameswf::hash_int_void_gameswf_Stream_6376d1::Destroy(gameswf::Self **self)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  int i;
  uint32_t *v5;

  v1 = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)v1 + 1);
    if ( v2 >= 0 )
    {
      v3 = 8;
      for ( i = 0; i <= v2; ++i )
      {
        v5 = (uint32_t *)((char *)v1 + v3);
        if ( *(uint32_t *)((char *)v1 + v3) != -2 )
        {
          *v5 = -2;
          v5[1] = 0;
          v1 = *self;
        }
        v3 += 16;
      }
    }
    gameswf::free_internal(v1);
    *self = nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_void_gameswf_Stream_6376d1::clear  (binary VA: 0x10ae780)
// Original: gameswf::hash<int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *),gameswf::fixed_size_hash<int>>::clear
// ----------------------------------------------------------------------------
void gameswf::hash_int_void_gameswf_Stream_6376d1::clear(gameswf::Self **self)
{
  gameswf::Self *v1;
  int v2;
  int v3;
  int i;
  uint32_t *v5;

  v1 = *self;
  if ( *self != nullptr )
  {
    v2 = *((uint32_t *)v1 + 1);
    if ( v2 >= 0 )
    {
      v3 = 8;
      for ( i = 0; i <= v2; ++i )
      {
        v5 = (uint32_t *)((char *)v1 + v3);
        if ( *(uint32_t *)((char *)v1 + v3) != -2 )
        {
          *v5 = -2;
          v5[1] = 0;
          v1 = *self;
        }
        v3 += 16;
      }
    }
    gameswf::free_internal(v1);
    *self = nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::hash_int_void_gameswf_Stream_6376d1::set_raw_capacity  (binary VA: 0x10ae8f0)
// Original: gameswf::hash<int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *),gameswf::fixed_size_hash<int>>::set_raw_capacity
// ----------------------------------------------------------------------------
void gameswf::hash_int_void_gameswf_Stream_6376d1::set_raw_capacity(gameswf::Self **self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  gameswf::Self *v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_i;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_i)) > _g4_s4 ? (20u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);

  if ( a2 <= 0 )
  {
    gameswf::hash_int_void_gameswf_Stream_6376d1::clear(self);
  }
  else
  {
    v2 = 1;
    v3 = 4;
    if ( a2 != 1 )
    {
      do
        v2 *= 2;
      while ( a2 > v2 );
      v3 = 4;
      if ( v2 >= 4 )
        v3 = v2;
    }
    if ( *self == nullptr || *((uint32_t *)*self + 1) + 1 != v3 )
    {
      v24[0] = gameswf::malloc_internal(16 * v3 + 8);
      *(uint32_t *)v24[0] = 0;
      v4 = v24[0];
      v5 = 8;
      *(uint32_t *)(v24[0] + 4) = v3 - 1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        *(uint32_t *)(v4 + v5) = -2;
        v5 += 16;
        if ( v3 <= v6 )
          break;
        v4 = v24[0];
      }
      v7 = *self;
      if ( *self != nullptr )
      {
        v17 = *((uint32_t *)v7 + 1);
        if ( v17 >= 0 )
        {
          for ( i = 0; i <= v17; ++i )
          {
            v8 = (int)(uintptr_t)(v7) + 16 * i + 8;
            if ( *(uint32_t *)v8 != -2 )
            {
              v9 = (uint32_t *)v24[0];
              if ( v24[0] != 0 )
              {
                v10 = *(uint32_t *)v24[0];
                if ( 3 * *(uint32_t *)v24[0] > 2 * *(uint32_t *)(v24[0] + 4) + 2 )
                {
                  gameswf::hash_int_void_gameswf_Stream_6376d1::set_raw_capacity(
                    (gameswf::Self **)((gameswf::hash<int, void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *), gameswf::fixed_size_hash<int>> *)v24),
                    2 * *(uint32_t *)(v24[0] + 4) + 2);
                  v9 = (uint32_t *)v24[0];
                  v10 = *(uint32_t *)v24[0];
                }
              }
              else
              {
                gameswf::hash_int_void_gameswf_Stream_6376d1::set_raw_capacity(
                  (gameswf::Self **)((gameswf::hash<int, void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *), gameswf::fixed_size_hash<int>> *)v24),
                  8);
                v9 = (uint32_t *)v24[0];
                v10 = *(uint32_t *)v24[0];
              }
              *v9 = v10 + 1;
              v19 = ((((((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                      + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                      + *(uint8_t *)(v8 + 10)) << 6)
                    + 0xFFFF
                    * (((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                     + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                     + *(uint8_t *)(v8 + 10))
                    + *(uint8_t *)(v8 + 9)) << 6)
                  + *(uint8_t *)(v8 + 8)
                  + 0xFFFF
                  * (((((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                     + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                     + *(uint8_t *)(v8 + 10)) << 6)
                   + 0xFFFF
                   * (((*(uint8_t *)(v8 + 11) + 352988219) << 6)
                    + 0xFFFF * (*(uint8_t *)(v8 + 11) + 352988219)
                    + *(uint8_t *)(v8 + 10))
                   + *(uint8_t *)(v8 + 9));
              v11 = *(uint32_t *)(v24[0] + 4);
              v23 = v11 & v19;
              v22 = (int *)(v24[0] + 16 * (v11 & v19) + 8);
              v18 = *v22;
              v12 = v11 & v19;
              if ( *v22 == -2 )
              {
                *v22 = -1;
                v22[1] = v19;
                v22[2] = *(uint32_t *)(v8 + 8);
                v22[3] = *(uint32_t *)(v8 + 12);
              }
              else
              {
                while ( 1 )
                {
                  v12 = v11 & (v12 + 1);
                  if ( *(uint32_t *)(v24[0] + 16 * v12 + 8) == -2 )
                    break;
                  if ( v23 == v12 )
                  {
                    v20 = (int *)(v24[0] + 16 * v12 + 8);
                    v12 = v11 & v19;
                    goto LABEL_22;
                  }
                }
                v20 = (int *)(v24[0] + 16 * v12 + 8);
LABEL_22:
                v13 = *(uint32_t *)(v24[0] + 16 * (v11 & v19) + 12) & v11;
                if ( v23 == v13 )
                {
                  *v20 = v18;
                  v20[1] = v22[1];
                  v20[2] = v22[2];
                  v20[3] = v22[3];
                  v22[2] = *(uint32_t *)(v8 + 8);
                  v16 = *(uint32_t *)(v8 + 12);
                  *v22 = v12;
                  v22[3] = v16;
                  v22[1] = v19;
                }
                else
                {
                  v14 = v13;
                  do
                  {
                    v15 = (int *)(v24[0] + 16 * v14 + 8);
                    v14 = *v15;
                  }
                  while ( v23 != *v15 );
                  *v20 = v18;
                  v20[1] = v22[1];
                  v20[2] = v22[2];
                  v20[3] = v22[3];
                  *v15 = v12;
                  v22[2] = *(uint32_t *)(v8 + 8);
                  v22[3] = *(uint32_t *)(v8 + 12);
                  v22[1] = v19;
                  *v22 = -1;
                }
              }
              *(uint32_t *)v8 = -2;
              *(uint32_t *)(v8 + 4) = 0;
              v7 = *self;
            }
          }
        }
        gameswf::free_internal(v7);
      }
      *self = (gameswf::Self *)v24[0];
    }
  }
}



// ============================================================================
// Address:   0x10aec40 (size: 454 bytes)
// Symbol:    _ZN7gameswf4hashIiPFvPNS_6StreamEiPNS_18MovieDefinitionSubEENS_15fixed_size_hashIiEEE3addERKiRKS6_
// Demangled: gameswf::hash<int,void (*)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *),gameswf::fixed_size_hash<int>>::add(int const&,void (* const&)(gameswf::Stream *,int,gameswf::MovieDefinitionSub *))
// ============================================================================
void (*gameswf::hash_tag_loader::add(
        gameswf::Self **self,
        const int *a2,
        void (**a3)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *)))(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *)
{
  gameswf::Self *v3;
  int v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int *v11;
  void (*v12)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*result)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  void (*v14)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *);
  int v15;
  int v16;
  int v17;

  v3 = *self;
  if ( *self != nullptr )
  {
    v4 = *(uint32_t *)v3;
    if ( 3 * *(uint32_t *)v3 > 2 * *((uint32_t *)v3 + 1) + 2 )
    {
      gameswf::hash_int_void_gameswf_Stream_6376d1::set_raw_capacity(
        self,
        2 * *((uint32_t *)v3 + 1) + 2);
      v3 = *self;
      v4 = *(uint32_t *)*self;
    }
  }
  else
  {
    gameswf::hash_int_void_gameswf_Stream_6376d1::set_raw_capacity(
      self,
      8);
    v3 = *self;
    v4 = *(uint32_t *)*self;
  }
  *(uint32_t *)v3 = v4 + 1;
  v5 = *self;
  v16 = 65599
      * (((*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)) << 6)
       + *((uint8_t *)a2 + 1)
       + 0xFFFF * (*((uint8_t *)a2 + 2) + 65599 * (*((uint8_t *)a2 + 3) + 352988219)))
      + *(uint8_t *)a2;
  v6 = *((uint32_t *)*self + 1);
  v15 = v6 & v16;
  v7 = (int)(uintptr_t)(*self) + 16 * (v6 & v16) + 8;
  v8 = v6 & v16;
  v17 = *(uint32_t *)v7;
  if ( *(uint32_t *)v7 == -2 )
  {
    *(uint32_t *)v7 = -1;
    *(uint32_t *)(v7 + 4) = v16;
    *(uint32_t *)(v7 + 8) = *a2;
    result = *a3;
    *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(*a3);
  }
  else
  {
    do
    {
      v8 = v6 & (v8 + 1);
      v9 = (uint32_t *)((char *)v5 + 16 * v8 + 8);
    }
    while ( *v9 != -2 && v8 != (v6 & v16) );
    v10 = *((uint32_t *)v5 + 4 * (v6 & v16) + 3) & v6;
    if ( v10 == v15 )
    {
      *v9 = v17;
      *((uint32_t *)v5 + 4 * v8 + 3) = *(uint32_t *)(v7 + 4);
      *((uint32_t *)v5 + 4 * v8 + 4) = *(uint32_t *)(v7 + 8);
      *((uint32_t *)v5 + 4 * v8 + 5) = *(uint32_t *)(v7 + 12);
      *(uint32_t *)(v7 + 8) = *a2;
      v14 = *a3;
      *(uint32_t *)v7 = v8;
      *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(v14);
      *(uint32_t *)(v7 + 4) = v16;
      return (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))v16;
    }
    else
    {
      do
      {
        v11 = (int *)((char *)v5 + 16 * v10 + 8);
        v10 = *v11;
      }
      while ( *v11 != v15 );
      *v9 = v17;
      *((uint32_t *)v5 + 4 * v8 + 3) = *(uint32_t *)(v7 + 4);
      *((uint32_t *)v5 + 4 * v8 + 4) = *(uint32_t *)(v7 + 8);
      *((uint32_t *)v5 + 4 * v8 + 5) = *(uint32_t *)(v7 + 12);
      *v11 = v8;
      *(uint32_t *)(v7 + 8) = *a2;
      v12 = *a3;
      *(uint32_t *)v7 = -1;
      *(uint32_t *)(v7 + 12) = (uint32_t)(uintptr_t)(v12);
      *(uint32_t *)(v7 + 4) = v16;
      return (void (*)(gameswf::Stream::Self *, int, gameswf::MovieDefinitionSub::Self *))v16;
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: gameswf::get_builtin  (binary VA: 0x10b5370)
// Original: gameswf::get_builtin
// ----------------------------------------------------------------------------
int gameswf::get_builtin(int a1, char *a2, gameswf::ASValue::Self *a3)
{
  uint32_t *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  char *v13;
  gameswf::String::Self *v14;
  int v15;
  int v16;
  char *v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  int v23;

  v3 = (uint32_t *)dword_20E5320[a1];
  result = 0;
  if ( v3 != nullptr )
  {
    v5 = *v3;
    if ( *v3 != 0 )
    {
      v22 = *((uint32_t *)a2 + 4);
      if ( (uint8_t *)(v22 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        if ( *a2 == -1 )
        {
          v17 = *((char **)a2 + 3);
          v16 = *((uint32_t *)a2 + 1) - 1;
        }
        else
        {
          v16 = *a2 - 1;
          v17 = a2 + 1;
        }
        v6 = 5381;
        v18 = 5381;
        if ( v16 > 0 )
        {
          do
          {
            --v16;
            v19 = 33 * v18;
            v20 = (uint8_t)v17[v16] + 32;
            if ( (uint8_t)(v17[v16] - 65) > 0x19u )
              v20 = (uint8_t)v17[v16];
            v18 = v19 ^ v20;
          }
          while ( v16 != 0 );
          v18 = v18 << 9 >> 9;
          v6 = v18;
        }
        *((uint32_t *)a2 + 4) = v18 & 0x7FFFFF | v22 & 0xFF800000;
        v5 = *v3;
      }
      else
      {
        v6 = v22 << 9 >> 9;
      }
      v23 = *(uint32_t *)(v5 + 4);
      v7 = v5 + 40 * (v6 & v23) + 8;
      if ( *(uint32_t *)v7 == -2 )
        return 0;
      v8 = *(uint32_t *)(v5 + 40 * (v6 & v23) + 12);
      result = 0;
      if ( (v6 & v23) != (v8 & v23) )
        return result;
      v9 = v6;
      v10 = v6 & v23;
      v11 = v3;
      v12 = v9;
      while ( 1 )
      {
        if ( v8 == v12 )
        {
          if ( a2 == (char *)(v7 + 8) )
            break;
          v13 = *a2 == -1 ? *((char **)a2 + 3) : a2 + 1;
          v14 = (gameswf::String::Self *)(v7 + 9);
          if ( *(uint8_t *)(v7 + 8) == 0xFF )
            v14 = *(gameswf::String::Self **)(v7 + 20);
          v21 = v11;
          v15 = gameswf::String::stricmp(v14, v13);
          v11 = v21;
          if ( v15 == 0 )
            break;
        }
        v10 = *(uint32_t *)v7;
        if ( *(uint32_t *)v7 == -1 )
          return 0;
        v7 = *v11 + 40 * v10 + 8;
        v8 = *(uint32_t *)(v7 + 4);
      }
      if ( v10 < 0 )
        return 0;
      result = 1;
      if ( a3 != nullptr )
      {
        gameswf::ASValue::opAssign(a3, (const gameswf::ASValue::Self *)(*v11 + 40 * v10 + 8 + 28));
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::new_standard_method_map  (binary VA: 0x10b5570)
// Original: gameswf::new_standard_method_map
// ----------------------------------------------------------------------------
uint32_t * gameswf::new_standard_method_map(int a1)
{
  uint32_t *result;

  result = (uint32_t *)dword_20E5320[a1];
  if ( result == nullptr )
  {
    result = (uint32_t *)opNew(4u);
    *result = 0;
    dword_20E5320[a1] = (int)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::clearStandardPropertyMap  (binary VA: 0x10b55e0)
// Original: gameswf::clearStandardPropertyMap
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::clearStandardPropertyMap()
{
  int v0;
  int v1;
  int v2;
  gameswf::Self *result;
  int v4;
  int i;
  uint32_t *v6;
  uint32_t v7;
  int v8;
  int v9;
  int v10;

  v0 = dword_20E5354;
  if ( (int32_t)dword_20E5354 <= 0 )
  {
    if ( (int32_t)dword_20E5354 < 0 )
    {
      v9 = 20 * dword_20E5354;
      do
      {
        v7 = *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_2B354)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4)) + v9;
        if ( v7 != 0 )
        {
          v8 = *(uint32_t *)(v7 + 16);
          *(uint8_t *)v7 = 1;
          v8 |= 0x7FFFFFu;
          *(uint8_t *)(v7 + 1) = 0;
          *(uint32_t *)(v7 + 16) = v8;
          *(uint8_t *)(v7 + 18) = BYTE2(v8) & 0x7F;
          *(uint8_t *)(v7 + 19) = HIBYTE(v8) | 1;
        }
        v9 += 20;
        ++v0;
      }
      while ( v0 != 0 );
    }
  }
  else
  {
    v1 = 0;
    v2 = 0;
    do
    {
      ++v2;
      v10 = v1;
      sub_59CE50(v1 + *(uint32_t *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_2B354)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4)));
      v1 = v10 + 20;
    }
    while ( v2 != v0 );
  }
  dword_20E5354 = 0;
  if ( dword_20E535C == 0 )
  {
    dword_20E5358 = 0;
    if ( dword_20E5350 != 0 )
      gameswf::free_internal((gameswf::Self *)dword_20E5350);
    dword_20E5350 = 0;
  }
  result = (gameswf::Self *)dword_20E5360;
  if ( dword_20E5360 != 0 )
  {
    v4 = *(uint32_t *)(dword_20E5360 + 4);
    if ( v4 >= 0 )
    {
      for ( i = 0; i <= v4; ++i )
      {
        v6 = (uint32_t *)((char *)result + 32 * i + 8);
        if ( *v6 != -2 )
        {
          sub_59CE50((int)(uintptr_t)(result) + 32 * i + 16);
          *v6 = -2;
          v6[1] = 0;
          result = (gameswf::Self *)dword_20E5360;
        }
      }
    }
    result = (gameswf::Self *)gameswf::free_internal(result);
    dword_20E5360 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getStandardPropertyMap  (binary VA: 0x10b5750)
// Original: gameswf::getStandardPropertyMap
// ----------------------------------------------------------------------------
int * gameswf::getStandardPropertyMap()
{
  return (int *)(&dword_20E5360);
}

// ----------------------------------------------------------------------------
// Function: gameswf::getStandardPropertyList  (binary VA: 0x10b5770)
// Original: gameswf::getStandardPropertyList
// ----------------------------------------------------------------------------
int * gameswf::getStandardPropertyList()
{
  return (int *)(&dword_20E5350);
}

// ----------------------------------------------------------------------------
// Function: gameswf::getStandardMemberID  (binary VA: 0x10b5790)
// Original: gameswf::getStandardMemberID
// ----------------------------------------------------------------------------
int gameswf::getStandardMemberID(gameswf::Self *self)
{
  int result;
  int v2;
  int v3;
  char *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int j;
  const char *s1;
  int v10;
  int i;
  const char *v12;
  int v13;
  int v14;
  int v15;
  int v16;

  result = -1;
  v2 = dword_20E5360;
  if ( dword_20E5360 != 0 )
  {
    if ( *(uint8_t *)self == 0xFF )
    {
      v4 = *((char **)self + 3);
      v3 = *((uint32_t *)self + 1) - 1;
    }
    else
    {
      v3 = *(char *)self - 1;
      v4 = (char *)self + 1;
    }
    v5 = 5381;
    if ( v3 > 0 )
    {
      do
        v5 = (33 * v5) ^ (uint8_t)v4[--v3];
      while ( v3 != 0 );
    }
    v16 = *(uint32_t *)(dword_20E5360 + 4);
    v6 = v5 & v16;
    v7 = (uint32_t *)(dword_20E5360 + 32 * (v5 & v16) + 8);
    result = -1;
    if ( *v7 != -2 && v6 == (*(uint32_t *)(dword_20E5360 + 32 * (v5 & v16) + 12) & v16) )
    {
      if ( *(uint8_t *)self == 0xFF )
      {
        for ( i = *(uint32_t *)(dword_20E5360 + 32 * (v5 & v16) + 12); ; i = *(uint32_t *)(v2 + 32 * v6 + 12) )
        {
          if ( v5 == i )
          {
            if ( self == (gameswf::Self *)(v7 + 2) )
              break;
            v12 = (char *)v7 + 9;
            if ( *((uint8_t *)v7 + 8) == 0xFF )
              v12 = (const char *)v7[5];
            v15 = v2;
            v13 = strcmp(v12, *((const char **)self + 3));
            v2 = v15;
            if ( v13 == 0 )
              break;
          }
          v6 = *v7;
          if ( *v7 == -1 )
            return -1;
          v7 = (uint32_t *)(v2 + 32 * v6 + 8);
        }
      }
      else
      {
        for ( j = *(uint32_t *)(dword_20E5360 + 32 * (v5 & v16) + 12); ; j = *(uint32_t *)(v2 + 32 * v6 + 12) )
        {
          if ( v5 == j )
          {
            if ( self == (gameswf::Self *)(v7 + 2) )
              break;
            s1 = (char *)v7 + 9;
            if ( *((uint8_t *)v7 + 8) == 0xFF )
              s1 = (const char *)v7[5];
            v14 = v2;
            v10 = strcmp(s1, (const char *)self + 1);
            v2 = v14;
            if ( v10 == 0 )
              break;
          }
          v6 = *v7;
          if ( *v7 == -1 )
            return -1;
          v7 = (uint32_t *)(v2 + 32 * v6 + 8);
        }
      }
      if ( v6 < 0 )
        return -1;
      else
        return *(uint32_t *)(v2 + 32 * v6 + 36);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getProperty  (binary VA: 0x10b5910)
// Original: gameswf::getProperty
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::getProperty(gameswf::Self *self, gameswf::ASObject::Self *a2, char *a3)
{
  gameswf::Self *v3;
  char v4;
  int v5;
  gameswf::Self *v6;
  char *v7;
  gameswf::Self *v8;
  int v9;
  unsigned int v10;
  int StandardMemberID;
  int v13;
  char *v14;
  int v15;
  int v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef gameswf::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (17u + sizeof(_g4_t_v20)) > _g4_s3 ? (17u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 17u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);

  v3 = self;
  *(uint8_t *)self = 0;
  *((uint8_t *)self + 1) = 0;
  if ( (unsigned int)(uintptr_t)(a3) > 0x15 )
  {
    gameswf::logError((gameswf::Self *)"error: invalid property query, property number %d\n", a3);
    return self;
  }
  else
  {
    v19 = 1;
    v18 = (char *)&unk_20E5380 + 20 * (uint32_t)(uintptr_t)(a3);
    v4 = *v18;
    v20 = 0;
    if ( v4 == -1 )
      v5 = *((uint32_t *)v18 + 1) - 1;
    else
      v5 = v4 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v19, v5);
    v6 = (gameswf::Self *)(v18 + 1);
    if ( *v18 == -1 )
      v6 = *((gameswf::Self **)v18 + 3);
    if ( v19 == -1 )
    {
      v7 = v21;
      v8 = v22;
    }
    else
    {
      v7 = (char *)v19;
      v8 = (gameswf::Self *)&v20;
    }
    gameswf::Strcpy_s(v8, v7, v6);
    v17 = *((uint32_t *)v18 + 4);
    if ( (uint8_t *)(v17 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *v18 == -1 )
      {
        v14 = *((char **)v18 + 3);
        v13 = *((uint32_t *)v18 + 1) - 1;
      }
      else
      {
        v13 = *v18 - 1;
        v14 = v18 + 1;
      }
      v9 = 5381;
      if ( v13 > 0 )
      {
        do
        {
          --v13;
          v15 = 33 * v9;
          v16 = (uint8_t)v14[v13] + 32;
          if ( (uint8_t)(v14[v13] - 65) > 0x19u )
            v16 = (uint8_t)v14[v13];
          v9 = v15 ^ v16;
        }
        while ( v13 != 0 );
        v3 = self;
        v9 = v9 << 9 >> 9;
      }
      *((uint32_t *)v18 + 4) = v9 & 0x7FFFFF | v17 & 0xFF800000;
    }
    else
    {
      v9 = v17 << 9 >> 9;
    }
    v10 = v9 & 0x7FFFFF | v23 & 0xFF800000;
    LOWORD(v23) = v9;
    BYTE2(v23) = BYTE2(v10) & 0x7F;
    HIBYTE(v23) = HIBYTE(v10) | 1;
    StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v19);
    if ( StandardMemberID == -1
      || G4_VCALL<uint8_t>(a2, 36, StandardMemberID, v3) == 0 )
    {
      G4_VCALL<void>(a2, 44, &v19, v3);
      sub_59CE50((int)(uintptr_t)(&v19));
    }
    else
    {
      sub_59CE50((int)(uintptr_t)(&v19));
    }
    return v3;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::setProperty  (binary VA: 0x10b5b40)
// Original: gameswf::setProperty
// ----------------------------------------------------------------------------
int gameswf::setProperty(gameswf::Self *self, gameswf::ASObject::Self *a2, int a3)
{
  char *v4;
  int v5;
  gameswf::Self *v6;
  char *v7;
  gameswf::Self *v8;
  int v9;
  unsigned int v10;
  int StandardMemberID;
  char *v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char *_g4_t_v19;
  typedef gameswf::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v18)) > _g4_s2 ? (17u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 17u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);

  if ( (unsigned int)(uintptr_t)(a2) > 0x15 )
    return gameswf::logError((gameswf::Self *)"error: invalid setProperty, property number %d\n", (const char *)a2);
  v17 = 1;
  v4 = (char *)&unk_20E5380 + 20 * (uint32_t)(uintptr_t)(a2);
  v18 = 0;
  if ( *v4 == -1 )
    v5 = *((uint32_t *)v4 + 1) - 1;
  else
    v5 = *v4 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v17, v5);
  v6 = (gameswf::Self *)(v4 + 1);
  if ( *v4 == -1 )
    v6 = *((gameswf::Self **)v4 + 3);
  if ( v17 == -1 )
  {
    v7 = v19;
    v8 = v20;
  }
  else
  {
    v7 = (char *)v17;
    v8 = (gameswf::Self *)&v18;
  }
  gameswf::Strcpy_s(v8, v7, v6);
  v16 = *((uint32_t *)v4 + 4);
  if ( (uint8_t *)(v16 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v4 == -1 )
    {
      v12 = *((char **)v4 + 3);
      v13 = *((uint32_t *)v4 + 1) - 1;
    }
    else
    {
      v12 = v4 + 1;
      v13 = *v4 - 1;
    }
    v9 = 5381;
    if ( v13 > 0 )
    {
      do
      {
        --v13;
        v14 = 33 * v9;
        v15 = (uint8_t)v12[v13] + 32;
        if ( (uint8_t)(v12[v13] - 65) > 0x19u )
          v15 = (uint8_t)v12[v13];
        v9 = v14 ^ v15;
      }
      while ( v13 != 0 );
      v4 = (char *)&unk_20E5380 + 20 * (uint32_t)(uintptr_t)(a2);
      v9 = v9 << 9 >> 9;
    }
    *((uint32_t *)v4 + 4) = v9 & 0x7FFFFF | v16 & 0xFF800000;
  }
  else
  {
    v9 = v16 << 9 >> 9;
  }
  v10 = v9 & 0x7FFFFF | v21 & 0xFF800000;
  LOWORD(v21) = v9;
  BYTE2(v21) = BYTE2(v10) & 0x7F;
  HIBYTE(v21) = HIBYTE(v10) | 1;
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v17);
  if ( StandardMemberID == -1
    || G4_VCALL<uint8_t>(self, 32, StandardMemberID, a3) == 0 )
  {
    G4_VCALL<void>(self, 48, &v17, a3);
  }
  return sub_59CE50((int)(uintptr_t)(&v17));
}

// ----------------------------------------------------------------------------
// Function: gameswf::clearStandardMethodMap  (binary VA: 0x10b6b40)
// Original: gameswf::clearStandardMethodMap
// ----------------------------------------------------------------------------
int gameswf::clearStandardMethodMap()
{
  gameswf::Self *v0;
  gameswf::Self *v1;
  int v2;
  int v3;
  uint32_t *v4;
  gameswf::Self *v5;
  int v6;
  int v7;
  int i;
  uint32_t *v9;
  gameswf::Self *v11;
  int v12;
  int *v13;
  gameswf::Self *v14;

  v13 = (int *)(dword_20E5320);
  do
  {
    v0 = (gameswf::Self *)*v13;
    if ( *v13 != 0 )
    {
      v1 = *(gameswf::Self **)v0;
      if ( *(uint32_t *)v0 != 0 )
      {
        if ( *((int *)v1 + 1) >= 0 )
        {
          v2 = 8;
          v3 = 0;
          v14 = (gameswf::Self *)*v13;
          v12 = *((uint32_t *)v1 + 1);
          do
          {
            v4 = (uint32_t *)((char *)v1 + v2);
            if ( *(uint32_t *)((char *)v1 + v2) != -2 )
            {
              sub_59CE50((int)(uintptr_t)(v4 + 2));
              gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v4 + 7));
              *v4 = -2;
              v4[1] = 0;
              v1 = *(gameswf::Self **)v14;
            }
            ++v3;
            v2 += 40;
          }
          while ( v12 >= v3 );
          v0 = v14;
        }
        v11 = v0;
        gameswf::free_internal(v1);
        v0 = v11;
        *(uint32_t *)v11 = 0;
      }
      gameswf::free_internal(v0);
      *v13 = 0;
    }
    ++v13;
  }
  while ( v13 != (int *)&unk_20E5348 );
  v5 = (gameswf::Self *)dword_20E5300;
  if ( dword_20E5300 != 0 )
  {
    v6 = *(uint32_t *)(dword_20E5300 + 4);
    if ( v6 >= 0 )
    {
      v7 = 8;
      for ( i = 0; i <= v6; ++i )
      {
        v9 = (uint32_t *)((char *)v5 + v7);
        if ( *(uint32_t *)((char *)v5 + v7) != -2 )
        {
          *v9 = -2;
          v9[1] = 0;
          v5 = (gameswf::Self *)dword_20E5300;
        }
        v7 += 16;
      }
    }
    gameswf::free_internal(v5);
    dword_20E5300 = 0;
  }
  return gameswf::array_gameswf_array_char_6ef230::resize((gameswf::array<gameswf::array<char>> *)&dword_20E5304, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::registerStandardMember  (binary VA: 0x10b7270)
// Original: gameswf::registerStandardMember
// ----------------------------------------------------------------------------
int gameswf::registerStandardMember(gameswf::Self **a1, int a2)
{
  int v2;
  int v3;
  gameswf::String::Self *v4;
  char *v5;
  char *v6;
  int v7;
  gameswf::Self *v8;
  char *v9;
  gameswf::Self *v10;
  int v11;
  unsigned int v12;
  gameswf::Self *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  gameswf::Self *v20;

  v2 = dword_20E5354;
  v3 = dword_20E5358;
  v4 = (gameswf::String::Self *)a1;
  v19 = dword_20E5354 + 1;
  if ( dword_20E5354 + 1 <= dword_20E5358 || dword_20E535C != 0 )
  {
    v5 = (char *)dword_20E5350;
  }
  else
  {
    v18 = v19 + (v19 >> 1);
    dword_20E5358 = v18;
    if ( v18 != 0 )
    {
      if ( dword_20E5350 != 0 )
        v5 = (char *)gameswf::realloc_internal((gameswf::Self *)dword_20E5350, 20 * v18, 20 * v3);
      else
        v5 = (char *)gameswf::malloc_internal(20 * v18);
      dword_20E5350 = (int)(uintptr_t)(v5);
      v2 = dword_20E5354;
    }
    else
    {
      if ( dword_20E5350 != 0 )
      {
        gameswf::free_internal((gameswf::Self *)dword_20E5350);
        v2 = dword_20E5354;
      }
      dword_20E5350 = 0;
      v5 = nullptr;
    }
  }
  v6 = &v5[20 * v2];
  if ( v6 != nullptr )
  {
    *v6 = 1;
    v6[1] = 0;
    if ( *(uint8_t *)a1 == 0xFF )
      v7 = (int)(uintptr_t)(a1[1]) - 1;
    else
      v7 = *(char *)a1 - 1;
    gameswf::String::resize((gameswf::String::Self *)v6, v7);
    v8 = (gameswf::Self *)((char *)a1 + 1);
    if ( *(uint8_t *)a1 == 0xFF )
      v8 = a1[3];
    LOBYTE(v9) = *v6;
    if ( *v6 == -1 )
    {
      v9 = *((char **)v6 + 1);
      v10 = *((gameswf::Self **)v6 + 3);
    }
    else
    {
      v9 = (char *)(char)(uintptr_t)(v9);
      v10 = (gameswf::Self *)(v6 + 1);
    }
    gameswf::Strcpy_s(v10, v9, v8);
    v20 = a1[4];
    if ( (uint8_t *)((unsigned int)(uintptr_t)(v20) & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *(uint8_t *)a1 == 0xFF )
      {
        v14 = a1[3];
        v15 = (int)(uintptr_t)(a1[1]) - 1;
      }
      else
      {
        v14 = (gameswf::Self *)((char *)a1 + 1);
        v15 = *(char *)a1 - 1;
      }
      v11 = 5381;
      if ( v15 > 0 )
      {
        do
        {
          --v15;
          v16 = 33 * v11;
          v17 = *((uint8_t *)v14 + v15) + 32;
          if ( (uint8_t)(*((uint8_t *)v14 + v15) - 65) > 0x19u )
            v17 = *((uint8_t *)v14 + v15);
          v11 = v16 ^ v17;
        }
        while ( v15 != 0 );
        v4 = (gameswf::String::Self *)a1;
        v11 = v11 << 9 >> 9;
      }
      *((uint32_t *)v4 + 4) = v11 & 0x7FFFFF | (unsigned int)(uintptr_t)(v20) & 0xFF800000;
    }
    else
    {
      v11 = (int)((uint32_t)(uintptr_t)(v20) << 9) >> 9;
    }
    v12 = v11 & 0x7FFFFF | *((uint32_t *)v6 + 4) & 0xFF800000;
    *((uint32_t *)v6 + 4) = v12;
    v6[18] = BYTE2(v12) & 0x7F;
    v6[19] = HIBYTE(v12) | 1;
  }
  dword_20E5354 = v19;
  return (int)(uintptr_t)(gameswf::hash_gameswf_String_gameswf_a_721d21::add(
           (gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *)&dword_20E5360,
           v4,
           (int)(uintptr_t)(&a2)));
}

// ----------------------------------------------------------------------------
// Function: gameswf::standardPropertyMapInit  (binary VA: 0x10b7500)
// Original: gameswf::standardPropertyMapInit
// ----------------------------------------------------------------------------
int gameswf::standardPropertyMapInit()
{
  int v0;
  typedef gameswf::Self *_g4_t_v2[5];
  typedef gameswf::Self *_g4_t_v3[5];
  typedef gameswf::Self *_g4_t_v4[5];
  typedef gameswf::Self *_g4_t_v5[5];
  typedef gameswf::Self *_g4_t_v6[5];
  typedef gameswf::Self *_g4_t_v7[5];
  typedef gameswf::Self *_g4_t_v8[5];
  typedef gameswf::Self *_g4_t_v9[5];
  typedef gameswf::Self *_g4_t_v10[5];
  typedef gameswf::Self *_g4_t_v11[5];
  typedef gameswf::Self *_g4_t_v12[5];
  typedef gameswf::Self *_g4_t_v13[5];
  typedef gameswf::Self *_g4_t_v14[5];
  typedef gameswf::Self *_g4_t_v15[5];
  typedef gameswf::Self *_g4_t_v16[5];
  typedef gameswf::Self *_g4_t_v17[5];
  typedef gameswf::Self *_g4_t_v18[5];
  typedef gameswf::Self *_g4_t_v19[5];
  typedef gameswf::Self *_g4_t_v20[5];
  typedef gameswf::Self *_g4_t_v21[5];
  typedef gameswf::Self *_g4_t_v22[5];
  typedef gameswf::Self *_g4_t_v23[5];
  typedef gameswf::Self *_g4_t_v24[5];
  typedef gameswf::Self *_g4_t_v25[5];
  typedef gameswf::Self *_g4_t_v26[5];
  typedef gameswf::Self *_g4_t_v27[5];
  typedef gameswf::Self *_g4_t_v28[5];
  typedef gameswf::Self *_g4_t_v29[5];
  typedef gameswf::Self *_g4_t_v30[5];
  typedef gameswf::Self *_g4_t_v31[5];
  typedef gameswf::Self *_g4_t_v32[5];
  typedef gameswf::Self *_g4_t_v33[5];
  typedef gameswf::Self *_g4_t_v34[5];
  typedef gameswf::Self *_g4_t_v35[5];
  typedef gameswf::Self *_g4_t_v36[5];
  typedef gameswf::Self *_g4_t_v37[5];
  typedef gameswf::Self *_g4_t_v38[5];
  typedef gameswf::Self *_g4_t_v39[5];
  typedef gameswf::Self *_g4_t_v40[5];
  typedef gameswf::Self *_g4_t_v41[5];
  typedef gameswf::Self *_g4_t_v42[5];
  typedef gameswf::Self *_g4_t_v43[5];
  typedef gameswf::Self *_g4_t_v44[5];
  typedef gameswf::Self *_g4_t_v45[5];
  typedef gameswf::Self *_g4_t_v46[5];
  typedef gameswf::Self *_g4_t_v47[5];
  typedef gameswf::Self *_g4_t_v48[5];
  typedef gameswf::Self *_g4_t_v49[5];
  typedef gameswf::Self *_g4_t_v50[5];
  typedef gameswf::Self *_g4_t_v51[5];
  typedef gameswf::Self *_g4_t_v52[5];
  typedef gameswf::Self *_g4_t_v53[5];
  typedef gameswf::Self *_g4_t_v54[5];
  typedef gameswf::Self *_g4_t_v55[5];
  typedef gameswf::Self *_g4_t_v56[5];
  typedef gameswf::Self *_g4_t_v57[5];
  typedef gameswf::Self *_g4_t_v58[5];
  typedef gameswf::Self *_g4_t_v59[5];
  typedef gameswf::Self *_g4_t_v60[5];
  typedef gameswf::Self *_g4_t_v61[5];
  typedef gameswf::Self *_g4_t_v62[5];
  typedef gameswf::Self *_g4_t_v63[5];
  typedef gameswf::Self *_g4_t_v64[5];
  typedef gameswf::Self *_g4_t_v65[5];
  typedef gameswf::Self *_g4_t_v66[5];
  typedef gameswf::Self *_g4_t_v67[5];
  typedef gameswf::Self *_g4_t_v68[5];
  typedef gameswf::Self *_g4_t_v69[5];
  typedef gameswf::Self *_g4_t_v70[5];
  typedef gameswf::Self *_g4_t_v71[5];
  typedef gameswf::Self *_g4_t_v72[5];
  typedef gameswf::Self *_g4_t_v73[5];
  typedef gameswf::Self *_g4_t_v74[5];
  typedef gameswf::Self *_g4_t_v75[5];
  typedef gameswf::Self *_g4_t_v76[5];
  typedef gameswf::Self *_g4_t_v77[5];
  typedef gameswf::Self *_g4_t_v78[5];
  typedef gameswf::Self *_g4_t_v79[5];
  typedef gameswf::Self *_g4_t_v80[5];
  typedef gameswf::Self *_g4_t_v81[5];
  typedef gameswf::Self *_g4_t_v82[5];
  typedef gameswf::Self *_g4_t_v83[5];
  typedef gameswf::Self *_g4_t_v84[5];
  typedef gameswf::Self *_g4_t_v85[5];
  typedef gameswf::Self *_g4_t_v86[5];
  typedef gameswf::Self *_g4_t_v87[5];
  typedef gameswf::Self *_g4_t_v88[5];
  typedef gameswf::Self *_g4_t_v89[5];
  typedef gameswf::Self *_g4_t_v90[5];
  typedef gameswf::Self *_g4_t_v91[5];
  typedef gameswf::Self *_g4_t_v92[5];
  typedef gameswf::Self *_g4_t_v93[5];
  typedef gameswf::Self *_g4_t_v94[5];
  typedef gameswf::Self *_g4_t_v95[5];
  typedef gameswf::Self *_g4_t_v96[5];
  typedef gameswf::Self *_g4_t_v97[5];
  typedef gameswf::Self *_g4_t_v98[5];
  typedef gameswf::Self *_g4_t_v99[5];
  typedef gameswf::Self *_g4_t_v100[5];
  typedef gameswf::Self *_g4_t_v101[5];
  typedef gameswf::Self *_g4_t_v102[5];
  typedef gameswf::Self *_g4_t_v103[5];
  typedef gameswf::Self *_g4_t_v104[5];
  typedef gameswf::Self *_g4_t_v105[5];
  typedef gameswf::Self *_g4_t_v106[5];
  typedef gameswf::Self *_g4_t_v107[5];
  typedef gameswf::Self *_g4_t_v108[5];
  typedef gameswf::Self *_g4_t_v109[5];
  typedef gameswf::Self *_g4_t_v110[5];
  typedef gameswf::Self *_g4_t_v111[5];
  typedef gameswf::Self *_g4_t_v112[5];
  typedef gameswf::Self *_g4_t_v113[5];
  typedef gameswf::Self *_g4_t_v114[5];
  typedef gameswf::Self *_g4_t_v115[5];
  typedef gameswf::Self *_g4_t_v116[5];
  typedef gameswf::Self *_g4_t_v117[5];
  typedef gameswf::Self *_g4_t_v118[5];
  typedef gameswf::Self *_g4_t_v119[5];
  typedef gameswf::Self *_g4_t_v120[5];
  typedef gameswf::Self *_g4_t_v121[5];
  typedef gameswf::Self *_g4_t_v122[5];
  typedef gameswf::Self *_g4_t_v123[5];
  typedef gameswf::Self *_g4_t_v124[5];
  typedef gameswf::Self *_g4_t_v125[5];
  typedef gameswf::Self *_g4_t_v126[5];
  typedef gameswf::Self *_g4_t_v127[5];
  typedef gameswf::Self *_g4_t_v128[5];
  typedef gameswf::Self *_g4_t_v129[5];
  typedef gameswf::Self *_g4_t_v130[5];
  typedef gameswf::Self *_g4_t_v131[5];
  typedef gameswf::Self *_g4_t_v132[5];
  typedef gameswf::Self *_g4_t_v133[8];
  enum : size_t {
    _g4_s0 = 2720u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v3)) > _g4_s1 ? (20u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v4)) > _g4_s2 ? (40u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v5)) > _g4_s3 ? (60u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v6)) > _g4_s4 ? (80u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (100u + sizeof(_g4_t_v7)) > _g4_s5 ? (100u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (120u + sizeof(_g4_t_v8)) > _g4_s6 ? (120u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (140u + sizeof(_g4_t_v9)) > _g4_s7 ? (140u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (160u + sizeof(_g4_t_v10)) > _g4_s8 ? (160u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (180u + sizeof(_g4_t_v11)) > _g4_s9 ? (180u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (200u + sizeof(_g4_t_v12)) > _g4_s10 ? (200u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (220u + sizeof(_g4_t_v13)) > _g4_s11 ? (220u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (240u + sizeof(_g4_t_v14)) > _g4_s12 ? (240u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (260u + sizeof(_g4_t_v15)) > _g4_s13 ? (260u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (280u + sizeof(_g4_t_v16)) > _g4_s14 ? (280u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (300u + sizeof(_g4_t_v17)) > _g4_s15 ? (300u + sizeof(_g4_t_v17)) : _g4_s15,
    _g4_s17 = (320u + sizeof(_g4_t_v18)) > _g4_s16 ? (320u + sizeof(_g4_t_v18)) : _g4_s16,
    _g4_s18 = (340u + sizeof(_g4_t_v19)) > _g4_s17 ? (340u + sizeof(_g4_t_v19)) : _g4_s17,
    _g4_s19 = (360u + sizeof(_g4_t_v20)) > _g4_s18 ? (360u + sizeof(_g4_t_v20)) : _g4_s18,
    _g4_s20 = (380u + sizeof(_g4_t_v21)) > _g4_s19 ? (380u + sizeof(_g4_t_v21)) : _g4_s19,
    _g4_s21 = (400u + sizeof(_g4_t_v22)) > _g4_s20 ? (400u + sizeof(_g4_t_v22)) : _g4_s20,
    _g4_s22 = (420u + sizeof(_g4_t_v23)) > _g4_s21 ? (420u + sizeof(_g4_t_v23)) : _g4_s21,
    _g4_s23 = (440u + sizeof(_g4_t_v24)) > _g4_s22 ? (440u + sizeof(_g4_t_v24)) : _g4_s22,
    _g4_s24 = (460u + sizeof(_g4_t_v25)) > _g4_s23 ? (460u + sizeof(_g4_t_v25)) : _g4_s23,
    _g4_s25 = (480u + sizeof(_g4_t_v26)) > _g4_s24 ? (480u + sizeof(_g4_t_v26)) : _g4_s24,
    _g4_s26 = (500u + sizeof(_g4_t_v27)) > _g4_s25 ? (500u + sizeof(_g4_t_v27)) : _g4_s25,
    _g4_s27 = (520u + sizeof(_g4_t_v28)) > _g4_s26 ? (520u + sizeof(_g4_t_v28)) : _g4_s26,
    _g4_s28 = (540u + sizeof(_g4_t_v29)) > _g4_s27 ? (540u + sizeof(_g4_t_v29)) : _g4_s27,
    _g4_s29 = (560u + sizeof(_g4_t_v30)) > _g4_s28 ? (560u + sizeof(_g4_t_v30)) : _g4_s28,
    _g4_s30 = (580u + sizeof(_g4_t_v31)) > _g4_s29 ? (580u + sizeof(_g4_t_v31)) : _g4_s29,
    _g4_s31 = (600u + sizeof(_g4_t_v32)) > _g4_s30 ? (600u + sizeof(_g4_t_v32)) : _g4_s30,
    _g4_s32 = (620u + sizeof(_g4_t_v33)) > _g4_s31 ? (620u + sizeof(_g4_t_v33)) : _g4_s31,
    _g4_s33 = (640u + sizeof(_g4_t_v34)) > _g4_s32 ? (640u + sizeof(_g4_t_v34)) : _g4_s32,
    _g4_s34 = (660u + sizeof(_g4_t_v35)) > _g4_s33 ? (660u + sizeof(_g4_t_v35)) : _g4_s33,
    _g4_s35 = (680u + sizeof(_g4_t_v36)) > _g4_s34 ? (680u + sizeof(_g4_t_v36)) : _g4_s34,
    _g4_s36 = (700u + sizeof(_g4_t_v37)) > _g4_s35 ? (700u + sizeof(_g4_t_v37)) : _g4_s35,
    _g4_s37 = (720u + sizeof(_g4_t_v38)) > _g4_s36 ? (720u + sizeof(_g4_t_v38)) : _g4_s36,
    _g4_s38 = (740u + sizeof(_g4_t_v39)) > _g4_s37 ? (740u + sizeof(_g4_t_v39)) : _g4_s37,
    _g4_s39 = (760u + sizeof(_g4_t_v40)) > _g4_s38 ? (760u + sizeof(_g4_t_v40)) : _g4_s38,
    _g4_s40 = (780u + sizeof(_g4_t_v41)) > _g4_s39 ? (780u + sizeof(_g4_t_v41)) : _g4_s39,
    _g4_s41 = (800u + sizeof(_g4_t_v42)) > _g4_s40 ? (800u + sizeof(_g4_t_v42)) : _g4_s40,
    _g4_s42 = (820u + sizeof(_g4_t_v43)) > _g4_s41 ? (820u + sizeof(_g4_t_v43)) : _g4_s41,
    _g4_s43 = (840u + sizeof(_g4_t_v44)) > _g4_s42 ? (840u + sizeof(_g4_t_v44)) : _g4_s42,
    _g4_s44 = (860u + sizeof(_g4_t_v45)) > _g4_s43 ? (860u + sizeof(_g4_t_v45)) : _g4_s43,
    _g4_s45 = (880u + sizeof(_g4_t_v46)) > _g4_s44 ? (880u + sizeof(_g4_t_v46)) : _g4_s44,
    _g4_s46 = (900u + sizeof(_g4_t_v47)) > _g4_s45 ? (900u + sizeof(_g4_t_v47)) : _g4_s45,
    _g4_s47 = (920u + sizeof(_g4_t_v48)) > _g4_s46 ? (920u + sizeof(_g4_t_v48)) : _g4_s46,
    _g4_s48 = (940u + sizeof(_g4_t_v49)) > _g4_s47 ? (940u + sizeof(_g4_t_v49)) : _g4_s47,
    _g4_s49 = (960u + sizeof(_g4_t_v50)) > _g4_s48 ? (960u + sizeof(_g4_t_v50)) : _g4_s48,
    _g4_s50 = (980u + sizeof(_g4_t_v51)) > _g4_s49 ? (980u + sizeof(_g4_t_v51)) : _g4_s49,
    _g4_s51 = (1000u + sizeof(_g4_t_v52)) > _g4_s50 ? (1000u + sizeof(_g4_t_v52)) : _g4_s50,
    _g4_s52 = (1020u + sizeof(_g4_t_v53)) > _g4_s51 ? (1020u + sizeof(_g4_t_v53)) : _g4_s51,
    _g4_s53 = (1040u + sizeof(_g4_t_v54)) > _g4_s52 ? (1040u + sizeof(_g4_t_v54)) : _g4_s52,
    _g4_s54 = (1060u + sizeof(_g4_t_v55)) > _g4_s53 ? (1060u + sizeof(_g4_t_v55)) : _g4_s53,
    _g4_s55 = (1080u + sizeof(_g4_t_v56)) > _g4_s54 ? (1080u + sizeof(_g4_t_v56)) : _g4_s54,
    _g4_s56 = (1100u + sizeof(_g4_t_v57)) > _g4_s55 ? (1100u + sizeof(_g4_t_v57)) : _g4_s55,
    _g4_s57 = (1120u + sizeof(_g4_t_v58)) > _g4_s56 ? (1120u + sizeof(_g4_t_v58)) : _g4_s56,
    _g4_s58 = (1140u + sizeof(_g4_t_v59)) > _g4_s57 ? (1140u + sizeof(_g4_t_v59)) : _g4_s57,
    _g4_s59 = (1160u + sizeof(_g4_t_v60)) > _g4_s58 ? (1160u + sizeof(_g4_t_v60)) : _g4_s58,
    _g4_s60 = (1180u + sizeof(_g4_t_v61)) > _g4_s59 ? (1180u + sizeof(_g4_t_v61)) : _g4_s59,
    _g4_s61 = (1200u + sizeof(_g4_t_v62)) > _g4_s60 ? (1200u + sizeof(_g4_t_v62)) : _g4_s60,
    _g4_s62 = (1220u + sizeof(_g4_t_v63)) > _g4_s61 ? (1220u + sizeof(_g4_t_v63)) : _g4_s61,
    _g4_s63 = (1240u + sizeof(_g4_t_v64)) > _g4_s62 ? (1240u + sizeof(_g4_t_v64)) : _g4_s62,
    _g4_s64 = (1260u + sizeof(_g4_t_v65)) > _g4_s63 ? (1260u + sizeof(_g4_t_v65)) : _g4_s63,
    _g4_s65 = (1280u + sizeof(_g4_t_v66)) > _g4_s64 ? (1280u + sizeof(_g4_t_v66)) : _g4_s64,
    _g4_s66 = (1300u + sizeof(_g4_t_v67)) > _g4_s65 ? (1300u + sizeof(_g4_t_v67)) : _g4_s65,
    _g4_s67 = (1320u + sizeof(_g4_t_v68)) > _g4_s66 ? (1320u + sizeof(_g4_t_v68)) : _g4_s66,
    _g4_s68 = (1340u + sizeof(_g4_t_v69)) > _g4_s67 ? (1340u + sizeof(_g4_t_v69)) : _g4_s67,
    _g4_s69 = (1360u + sizeof(_g4_t_v70)) > _g4_s68 ? (1360u + sizeof(_g4_t_v70)) : _g4_s68,
    _g4_s70 = (1380u + sizeof(_g4_t_v71)) > _g4_s69 ? (1380u + sizeof(_g4_t_v71)) : _g4_s69,
    _g4_s71 = (1400u + sizeof(_g4_t_v72)) > _g4_s70 ? (1400u + sizeof(_g4_t_v72)) : _g4_s70,
    _g4_s72 = (1420u + sizeof(_g4_t_v73)) > _g4_s71 ? (1420u + sizeof(_g4_t_v73)) : _g4_s71,
    _g4_s73 = (1440u + sizeof(_g4_t_v74)) > _g4_s72 ? (1440u + sizeof(_g4_t_v74)) : _g4_s72,
    _g4_s74 = (1460u + sizeof(_g4_t_v75)) > _g4_s73 ? (1460u + sizeof(_g4_t_v75)) : _g4_s73,
    _g4_s75 = (1480u + sizeof(_g4_t_v76)) > _g4_s74 ? (1480u + sizeof(_g4_t_v76)) : _g4_s74,
    _g4_s76 = (1500u + sizeof(_g4_t_v77)) > _g4_s75 ? (1500u + sizeof(_g4_t_v77)) : _g4_s75,
    _g4_s77 = (1520u + sizeof(_g4_t_v78)) > _g4_s76 ? (1520u + sizeof(_g4_t_v78)) : _g4_s76,
    _g4_s78 = (1540u + sizeof(_g4_t_v79)) > _g4_s77 ? (1540u + sizeof(_g4_t_v79)) : _g4_s77,
    _g4_s79 = (1560u + sizeof(_g4_t_v80)) > _g4_s78 ? (1560u + sizeof(_g4_t_v80)) : _g4_s78,
    _g4_s80 = (1580u + sizeof(_g4_t_v81)) > _g4_s79 ? (1580u + sizeof(_g4_t_v81)) : _g4_s79,
    _g4_s81 = (1600u + sizeof(_g4_t_v82)) > _g4_s80 ? (1600u + sizeof(_g4_t_v82)) : _g4_s80,
    _g4_s82 = (1620u + sizeof(_g4_t_v83)) > _g4_s81 ? (1620u + sizeof(_g4_t_v83)) : _g4_s81,
    _g4_s83 = (1640u + sizeof(_g4_t_v84)) > _g4_s82 ? (1640u + sizeof(_g4_t_v84)) : _g4_s82,
    _g4_s84 = (1660u + sizeof(_g4_t_v85)) > _g4_s83 ? (1660u + sizeof(_g4_t_v85)) : _g4_s83,
    _g4_s85 = (1680u + sizeof(_g4_t_v86)) > _g4_s84 ? (1680u + sizeof(_g4_t_v86)) : _g4_s84,
    _g4_s86 = (1700u + sizeof(_g4_t_v87)) > _g4_s85 ? (1700u + sizeof(_g4_t_v87)) : _g4_s85,
    _g4_s87 = (1720u + sizeof(_g4_t_v88)) > _g4_s86 ? (1720u + sizeof(_g4_t_v88)) : _g4_s86,
    _g4_s88 = (1740u + sizeof(_g4_t_v89)) > _g4_s87 ? (1740u + sizeof(_g4_t_v89)) : _g4_s87,
    _g4_s89 = (1760u + sizeof(_g4_t_v90)) > _g4_s88 ? (1760u + sizeof(_g4_t_v90)) : _g4_s88,
    _g4_s90 = (1780u + sizeof(_g4_t_v91)) > _g4_s89 ? (1780u + sizeof(_g4_t_v91)) : _g4_s89,
    _g4_s91 = (1800u + sizeof(_g4_t_v92)) > _g4_s90 ? (1800u + sizeof(_g4_t_v92)) : _g4_s90,
    _g4_s92 = (1820u + sizeof(_g4_t_v93)) > _g4_s91 ? (1820u + sizeof(_g4_t_v93)) : _g4_s91,
    _g4_s93 = (1840u + sizeof(_g4_t_v94)) > _g4_s92 ? (1840u + sizeof(_g4_t_v94)) : _g4_s92,
    _g4_s94 = (1860u + sizeof(_g4_t_v95)) > _g4_s93 ? (1860u + sizeof(_g4_t_v95)) : _g4_s93,
    _g4_s95 = (1880u + sizeof(_g4_t_v96)) > _g4_s94 ? (1880u + sizeof(_g4_t_v96)) : _g4_s94,
    _g4_s96 = (1900u + sizeof(_g4_t_v97)) > _g4_s95 ? (1900u + sizeof(_g4_t_v97)) : _g4_s95,
    _g4_s97 = (1920u + sizeof(_g4_t_v98)) > _g4_s96 ? (1920u + sizeof(_g4_t_v98)) : _g4_s96,
    _g4_s98 = (1940u + sizeof(_g4_t_v99)) > _g4_s97 ? (1940u + sizeof(_g4_t_v99)) : _g4_s97,
    _g4_s99 = (1960u + sizeof(_g4_t_v100)) > _g4_s98 ? (1960u + sizeof(_g4_t_v100)) : _g4_s98,
    _g4_s100 = (1980u + sizeof(_g4_t_v101)) > _g4_s99 ? (1980u + sizeof(_g4_t_v101)) : _g4_s99,
    _g4_s101 = (2000u + sizeof(_g4_t_v102)) > _g4_s100 ? (2000u + sizeof(_g4_t_v102)) : _g4_s100,
    _g4_s102 = (2020u + sizeof(_g4_t_v103)) > _g4_s101 ? (2020u + sizeof(_g4_t_v103)) : _g4_s101,
    _g4_s103 = (2040u + sizeof(_g4_t_v104)) > _g4_s102 ? (2040u + sizeof(_g4_t_v104)) : _g4_s102,
    _g4_s104 = (2060u + sizeof(_g4_t_v105)) > _g4_s103 ? (2060u + sizeof(_g4_t_v105)) : _g4_s103,
    _g4_s105 = (2080u + sizeof(_g4_t_v106)) > _g4_s104 ? (2080u + sizeof(_g4_t_v106)) : _g4_s104,
    _g4_s106 = (2100u + sizeof(_g4_t_v107)) > _g4_s105 ? (2100u + sizeof(_g4_t_v107)) : _g4_s105,
    _g4_s107 = (2120u + sizeof(_g4_t_v108)) > _g4_s106 ? (2120u + sizeof(_g4_t_v108)) : _g4_s106,
    _g4_s108 = (2140u + sizeof(_g4_t_v109)) > _g4_s107 ? (2140u + sizeof(_g4_t_v109)) : _g4_s107,
    _g4_s109 = (2160u + sizeof(_g4_t_v110)) > _g4_s108 ? (2160u + sizeof(_g4_t_v110)) : _g4_s108,
    _g4_s110 = (2180u + sizeof(_g4_t_v111)) > _g4_s109 ? (2180u + sizeof(_g4_t_v111)) : _g4_s109,
    _g4_s111 = (2200u + sizeof(_g4_t_v112)) > _g4_s110 ? (2200u + sizeof(_g4_t_v112)) : _g4_s110,
    _g4_s112 = (2220u + sizeof(_g4_t_v113)) > _g4_s111 ? (2220u + sizeof(_g4_t_v113)) : _g4_s111,
    _g4_s113 = (2240u + sizeof(_g4_t_v114)) > _g4_s112 ? (2240u + sizeof(_g4_t_v114)) : _g4_s112,
    _g4_s114 = (2260u + sizeof(_g4_t_v115)) > _g4_s113 ? (2260u + sizeof(_g4_t_v115)) : _g4_s113,
    _g4_s115 = (2280u + sizeof(_g4_t_v116)) > _g4_s114 ? (2280u + sizeof(_g4_t_v116)) : _g4_s114,
    _g4_s116 = (2300u + sizeof(_g4_t_v117)) > _g4_s115 ? (2300u + sizeof(_g4_t_v117)) : _g4_s115,
    _g4_s117 = (2320u + sizeof(_g4_t_v118)) > _g4_s116 ? (2320u + sizeof(_g4_t_v118)) : _g4_s116,
    _g4_s118 = (2340u + sizeof(_g4_t_v119)) > _g4_s117 ? (2340u + sizeof(_g4_t_v119)) : _g4_s117,
    _g4_s119 = (2360u + sizeof(_g4_t_v120)) > _g4_s118 ? (2360u + sizeof(_g4_t_v120)) : _g4_s118,
    _g4_s120 = (2380u + sizeof(_g4_t_v121)) > _g4_s119 ? (2380u + sizeof(_g4_t_v121)) : _g4_s119,
    _g4_s121 = (2400u + sizeof(_g4_t_v122)) > _g4_s120 ? (2400u + sizeof(_g4_t_v122)) : _g4_s120,
    _g4_s122 = (2420u + sizeof(_g4_t_v123)) > _g4_s121 ? (2420u + sizeof(_g4_t_v123)) : _g4_s121,
    _g4_s123 = (2440u + sizeof(_g4_t_v124)) > _g4_s122 ? (2440u + sizeof(_g4_t_v124)) : _g4_s122,
    _g4_s124 = (2460u + sizeof(_g4_t_v125)) > _g4_s123 ? (2460u + sizeof(_g4_t_v125)) : _g4_s123,
    _g4_s125 = (2480u + sizeof(_g4_t_v126)) > _g4_s124 ? (2480u + sizeof(_g4_t_v126)) : _g4_s124,
    _g4_s126 = (2500u + sizeof(_g4_t_v127)) > _g4_s125 ? (2500u + sizeof(_g4_t_v127)) : _g4_s125,
    _g4_s127 = (2520u + sizeof(_g4_t_v128)) > _g4_s126 ? (2520u + sizeof(_g4_t_v128)) : _g4_s126,
    _g4_s128 = (2540u + sizeof(_g4_t_v129)) > _g4_s127 ? (2540u + sizeof(_g4_t_v129)) : _g4_s127,
    _g4_s129 = (2560u + sizeof(_g4_t_v130)) > _g4_s128 ? (2560u + sizeof(_g4_t_v130)) : _g4_s128,
    _g4_s130 = (2580u + sizeof(_g4_t_v131)) > _g4_s129 ? (2580u + sizeof(_g4_t_v131)) : _g4_s129,
    _g4_s131 = (2600u + sizeof(_g4_t_v132)) > _g4_s130 ? (2600u + sizeof(_g4_t_v132)) : _g4_s130,
    _g4_s132 = (2620u + sizeof(_g4_t_v133)) > _g4_s131 ? (2620u + sizeof(_g4_t_v133)) : _g4_s131
  };
  alignas(16) uint8_t _g4_sf[_g4_s132];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 20u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 40u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 60u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 80u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 100u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 120u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 140u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 160u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 180u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 200u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 220u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 240u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 260u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 280u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 300u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 320u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 340u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 360u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 380u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 400u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 420u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 440u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 460u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 480u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 500u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 520u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 540u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 560u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 580u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 600u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 620u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 640u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 660u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 680u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 700u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 720u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 740u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 760u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 780u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 800u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 820u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 840u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 860u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 880u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 900u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 920u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 940u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 960u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 980u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 1000u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 1020u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 1040u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 1060u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 1080u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 1100u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 1120u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 1140u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 1160u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 1180u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 1200u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 1220u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 1240u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 1260u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 1280u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 1300u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 1320u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 1340u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 1360u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 1380u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 1400u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 1420u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 1440u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 1460u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 1480u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 1500u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 1520u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 1540u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 1560u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 1580u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 1600u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 1620u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 1640u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 1660u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 1680u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 1700u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 1720u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 1740u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 1760u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 1780u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 1800u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 1820u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 1840u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 1860u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 1880u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 1900u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 1920u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 1940u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 1960u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 1980u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 2000u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 2020u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 2040u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 2060u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 2080u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 2100u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 2120u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 2140u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 2160u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 2180u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 2200u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 2220u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 2240u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 2260u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 2280u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 2300u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 2320u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 2340u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 2360u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 2380u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 2400u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 2420u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 2440u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 2460u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 2480u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 2500u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 2520u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 2540u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 2560u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 2580u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 2600u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 2620u);

  v0 = 165;
  if ( dword_20E5360 != 0 )
  {
    LOBYTE(v0) = 110;
    if ( *(int *)dword_20E5360 >= 110 )
      v0 = *(uint32_t *)dword_20E5360;
    v0 = (3 * v0) >> 1;
  }
  gameswf::hash_gameswf_String_gameswf_a_721d21::set_raw_capacity(
    (gameswf::hash<gameswf::String::Self, gameswf::as_standard_member, gameswf::string_hash_functor<gameswf::String::Self>> *)&dword_20E5360,
    v0);
  sub_776320((gameswf::String::Self *)v2, (gameswf::Self *)"_x");
  gameswf::registerStandardMember(v2, 0);
  sub_59CE50((int)(uintptr_t)(v2));
  sub_776320((gameswf::String::Self *)v3, (gameswf::Self *)"_y");
  gameswf::registerStandardMember(v3, 1);
  sub_59CE50((int)(uintptr_t)(v3));
  sub_776320((gameswf::String::Self *)v4, (gameswf::Self *)"_xscale");
  gameswf::registerStandardMember(v4, 2);
  sub_59CE50((int)(uintptr_t)(v4));
  sub_776320((gameswf::String::Self *)v5, (gameswf::Self *)"_yscale");
  gameswf::registerStandardMember(v5, 3);
  sub_59CE50((int)(uintptr_t)(v5));
  sub_776320((gameswf::String::Self *)v6, (gameswf::Self *)"_currentframe");
  gameswf::registerStandardMember(v6, 4);
  sub_59CE50((int)(uintptr_t)(v6));
  sub_776320((gameswf::String::Self *)v7, (gameswf::Self *)"_totalframes");
  gameswf::registerStandardMember(v7, 5);
  sub_59CE50((int)(uintptr_t)(v7));
  sub_776320((gameswf::String::Self *)v8, (gameswf::Self *)"_alpha");
  gameswf::registerStandardMember(v8, 6);
  sub_59CE50((int)(uintptr_t)(v8));
  sub_776320((gameswf::String::Self *)v9, (gameswf::Self *)"_visible");
  gameswf::registerStandardMember(v9, 7);
  sub_59CE50((int)(uintptr_t)(v9));
  sub_776320((gameswf::String::Self *)v10, (gameswf::Self *)"_width");
  gameswf::registerStandardMember(v10, 8);
  sub_59CE50((int)(uintptr_t)(v10));
  sub_776320((gameswf::String::Self *)v11, (gameswf::Self *)"_height");
  gameswf::registerStandardMember(v11, 9);
  sub_59CE50((int)(uintptr_t)(v11));
  sub_776320((gameswf::String::Self *)v12, (gameswf::Self *)"_rotation");
  gameswf::registerStandardMember(v12, 10);
  sub_59CE50((int)(uintptr_t)(v12));
  sub_776320((gameswf::String::Self *)v13, (gameswf::Self *)"_target");
  gameswf::registerStandardMember(v13, 11);
  sub_59CE50((int)(uintptr_t)(v13));
  sub_776320((gameswf::String::Self *)v14, (gameswf::Self *)"_framesloaded");
  gameswf::registerStandardMember(v14, 12);
  sub_59CE50((int)(uintptr_t)(v14));
  sub_776320((gameswf::String::Self *)v15, (gameswf::Self *)"_name");
  gameswf::registerStandardMember(v15, 13);
  sub_59CE50((int)(uintptr_t)(v15));
  sub_776320((gameswf::String::Self *)v16, (gameswf::Self *)"_droptarget");
  gameswf::registerStandardMember(v16, 14);
  sub_59CE50((int)(uintptr_t)(v16));
  sub_776320((gameswf::String::Self *)v17, (gameswf::Self *)"_url");
  gameswf::registerStandardMember(v17, 15);
  sub_59CE50((int)(uintptr_t)(v17));
  sub_776320((gameswf::String::Self *)v18, (gameswf::Self *)"_highquality");
  gameswf::registerStandardMember(v18, 16);
  sub_59CE50((int)(uintptr_t)(v18));
  sub_776320((gameswf::String::Self *)v19, (gameswf::Self *)"_focusrect");
  gameswf::registerStandardMember(v19, 17);
  sub_59CE50((int)(uintptr_t)(v19));
  sub_776320((gameswf::String::Self *)v20, (gameswf::Self *)"_soundbuftime");
  gameswf::registerStandardMember(v20, 18);
  sub_59CE50((int)(uintptr_t)(v20));
  sub_776320((gameswf::String::Self *)v21, (gameswf::Self *)"_xmouse");
  gameswf::registerStandardMember(v21, 19);
  sub_59CE50((int)(uintptr_t)(v21));
  sub_776320((gameswf::String::Self *)v22, (gameswf::Self *)"_ymouse");
  gameswf::registerStandardMember(v22, 20);
  sub_59CE50((int)(uintptr_t)(v22));
  sub_776320((gameswf::String::Self *)v23, (gameswf::Self *)"_parent");
  gameswf::registerStandardMember(v23, 21);
  sub_59CE50((int)(uintptr_t)(v23));
  sub_776320((gameswf::String::Self *)v24, (gameswf::Self *)"text");
  gameswf::registerStandardMember(v24, 22);
  sub_59CE50((int)(uintptr_t)(v24));
  sub_776320((gameswf::String::Self *)v25, (gameswf::Self *)"htmlText");
  gameswf::registerStandardMember(v25, 23);
  sub_59CE50((int)(uintptr_t)(v25));
  sub_776320((gameswf::String::Self *)v26, (gameswf::Self *)"textWidth");
  gameswf::registerStandardMember(v26, 24);
  sub_59CE50((int)(uintptr_t)(v26));
  sub_776320((gameswf::String::Self *)v27, (gameswf::Self *)"textHeight");
  gameswf::registerStandardMember(v27, 25);
  sub_59CE50((int)(uintptr_t)(v27));
  sub_776320((gameswf::String::Self *)v28, (gameswf::Self *)"textColor");
  gameswf::registerStandardMember(v28, 26);
  sub_59CE50((int)(uintptr_t)(v28));
  sub_776320((gameswf::String::Self *)v29, (gameswf::Self *)"border");
  gameswf::registerStandardMember(v29, 27);
  sub_59CE50((int)(uintptr_t)(v29));
  sub_776320((gameswf::String::Self *)v30, (gameswf::Self *)"multiline");
  gameswf::registerStandardMember(v30, 28);
  sub_59CE50((int)(uintptr_t)(v30));
  sub_776320((gameswf::String::Self *)v31, (gameswf::Self *)"wordWrap");
  gameswf::registerStandardMember(v31, 29);
  sub_59CE50((int)(uintptr_t)(v31));
  sub_776320((gameswf::String::Self *)v32, (gameswf::Self *)"leading");
  gameswf::registerStandardMember(v32, 30);
  sub_59CE50((int)(uintptr_t)(v32));
  sub_776320((gameswf::String::Self *)v33, (gameswf::Self *)"styleSheet");
  gameswf::registerStandardMember(v33, 55);
  sub_59CE50((int)(uintptr_t)(v33));
  sub_776320((gameswf::String::Self *)v34, (gameswf::Self *)"maxChars");
  gameswf::registerStandardMember(v34, 56);
  sub_59CE50((int)(uintptr_t)(v34));
  sub_776320((gameswf::String::Self *)v35, (gameswf::Self *)"displayAsPassword");
  gameswf::registerStandardMember(v35, 57);
  sub_59CE50((int)(uintptr_t)(v35));
  sub_776320((gameswf::String::Self *)v36, (gameswf::Self *)"restrict");
  gameswf::registerStandardMember(v36, 58);
  sub_59CE50((int)(uintptr_t)(v36));
  sub_776320((gameswf::String::Self *)v37, (gameswf::Self *)"numLines");
  gameswf::registerStandardMember(v37, 59);
  sub_59CE50((int)(uintptr_t)(v37));
  sub_776320((gameswf::String::Self *)v38, (gameswf::Self *)"type");
  gameswf::registerStandardMember(v38, 31);
  sub_59CE50((int)(uintptr_t)(v38));
  sub_776320((gameswf::String::Self *)v39, (gameswf::Self *)"backgroundColor");
  gameswf::registerStandardMember(v39, 32);
  sub_59CE50((int)(uintptr_t)(v39));
  sub_776320((gameswf::String::Self *)v40, (gameswf::Self *)"_this");
  gameswf::registerStandardMember(v40, 33);
  sub_59CE50((int)(uintptr_t)(v40));
  sub_776320((gameswf::String::Self *)v41, (gameswf::Self *)"this");
  gameswf::registerStandardMember(v41, 34);
  sub_59CE50((int)(uintptr_t)(v41));
  sub_776320((gameswf::String::Self *)v42, (gameswf::Self *)"_root");
  gameswf::registerStandardMember(v42, 35);
  sub_59CE50((int)(uintptr_t)(v42));
  sub_776320((gameswf::String::Self *)v43, (gameswf::Self *)".");
  gameswf::registerStandardMember(v43, 36);
  sub_59CE50((int)(uintptr_t)(v43));
  sub_776320((gameswf::String::Self *)v44, (gameswf::Self *)"..");
  gameswf::registerStandardMember(v44, 37);
  sub_59CE50((int)(uintptr_t)(v44));
  sub_776320((gameswf::String::Self *)v45, (gameswf::Self *)"_level0");
  gameswf::registerStandardMember(v45, 38);
  sub_59CE50((int)(uintptr_t)(v45));
  sub_776320((gameswf::String::Self *)v46, (gameswf::Self *)"_global");
  gameswf::registerStandardMember(v46, 39);
  sub_59CE50((int)(uintptr_t)(v46));
  sub_776320((gameswf::String::Self *)v47, (gameswf::Self *)"stage");
  gameswf::registerStandardMember(v47, 40);
  sub_59CE50((int)(uintptr_t)(v47));
  sub_776320((gameswf::String::Self *)v48, (gameswf::Self *)"enabled");
  gameswf::registerStandardMember(v48, 41);
  sub_59CE50((int)(uintptr_t)(v48));
  sub_776320((gameswf::String::Self *)v49, (gameswf::Self *)"transform");
  gameswf::registerStandardMember(v49, 42);
  sub_59CE50((int)(uintptr_t)(v49));
  sub_776320((gameswf::String::Self *)v50, (gameswf::Self *)"matrix");
  gameswf::registerStandardMember(v50, 43);
  sub_59CE50((int)(uintptr_t)(v50));
  sub_776320((gameswf::String::Self *)v51, (gameswf::Self *)"concatenatedMatrix");
  gameswf::registerStandardMember(v51, 44);
  sub_59CE50((int)(uintptr_t)(v51));
  sub_776320((gameswf::String::Self *)v52, (gameswf::Self *)"colorTransform");
  gameswf::registerStandardMember(v52, 45);
  sub_59CE50((int)(uintptr_t)(v52));
  sub_776320((gameswf::String::Self *)v53, (gameswf::Self *)"concatenatedColorTransform");
  gameswf::registerStandardMember(v53, 46);
  sub_59CE50((int)(uintptr_t)(v53));
  sub_776320((gameswf::String::Self *)v54, (gameswf::Self *)"length");
  gameswf::registerStandardMember(v54, 47);
  sub_59CE50((int)(uintptr_t)(v54));
  sub_776320((gameswf::String::Self *)v55, (gameswf::Self *)"prototype");
  gameswf::registerStandardMember(v55, 48);
  sub_59CE50((int)(uintptr_t)(v55));
  sub_776320((gameswf::String::Self *)v56, (gameswf::Self *)"_z");
  gameswf::registerStandardMember(v56, 99);
  sub_59CE50((int)(uintptr_t)(v56));
  sub_776320((gameswf::String::Self *)v57, (gameswf::Self *)"_xrotation");
  gameswf::registerStandardMember(v57, 101);
  sub_59CE50((int)(uintptr_t)(v57));
  sub_776320((gameswf::String::Self *)v58, (gameswf::Self *)"_yrotation");
  gameswf::registerStandardMember(v58, 102);
  sub_59CE50((int)(uintptr_t)(v58));
  sub_776320((gameswf::String::Self *)v59, (gameswf::Self *)"_zrotation");
  gameswf::registerStandardMember(v59, 10);
  sub_59CE50((int)(uintptr_t)(v59));
  sub_776320((gameswf::String::Self *)v60, (gameswf::Self *)"_fov");
  gameswf::registerStandardMember(v60, 103);
  sub_59CE50((int)(uintptr_t)(v60));
  sub_776320((gameswf::String::Self *)v61, (gameswf::Self *)"_cameraDistanceSort");
  gameswf::registerStandardMember(v61, 104);
  sub_59CE50((int)(uintptr_t)(v61));
  sub_776320((gameswf::String::Self *)v62, (gameswf::Self *)"_reflectionDistance");
  gameswf::registerStandardMember(v62, 105);
  sub_59CE50((int)(uintptr_t)(v62));
  sub_776320((gameswf::String::Self *)v63, (gameswf::Self *)"_reflectionAlpha");
  gameswf::registerStandardMember(v63, 106);
  sub_59CE50((int)(uintptr_t)(v63));
  sub_776320((gameswf::String::Self *)v64, (gameswf::Self *)"mapScaleX");
  gameswf::registerStandardMember(v64, 107);
  sub_59CE50((int)(uintptr_t)(v64));
  sub_776320((gameswf::String::Self *)v65, (gameswf::Self *)"mapScaleY");
  gameswf::registerStandardMember(v65, 108);
  sub_59CE50((int)(uintptr_t)(v65));
  sub_776320((gameswf::String::Self *)v66, (gameswf::Self *)"controllerID");
  gameswf::registerStandardMember(v66, 109);
  sub_59CE50((int)(uintptr_t)(v66));
  sub_776320((gameswf::String::Self *)v67, (gameswf::Self *)"visible");
  gameswf::registerStandardMember(v67, 7);
  sub_59CE50((int)(uintptr_t)(v67));
  sub_776320((gameswf::String::Self *)v68, (gameswf::Self *)"graphics");
  gameswf::registerStandardMember(v68, 49);
  sub_59CE50((int)(uintptr_t)(v68));
  sub_776320((gameswf::String::Self *)v69, (gameswf::Self *)"filters");
  gameswf::registerStandardMember(v69, 50);
  sub_59CE50((int)(uintptr_t)(v69));
  sub_776320((gameswf::String::Self *)v70, (gameswf::Self *)"blurX");
  gameswf::registerStandardMember(v70, 51);
  sub_59CE50((int)(uintptr_t)(v70));
  sub_776320((gameswf::String::Self *)v71, (gameswf::Self *)"blurY");
  gameswf::registerStandardMember(v71, 52);
  sub_59CE50((int)(uintptr_t)(v71));
  sub_776320((gameswf::String::Self *)v72, (gameswf::Self *)"currentFrame");
  gameswf::registerStandardMember(v72, 4);
  sub_59CE50((int)(uintptr_t)(v72));
  sub_776320((gameswf::String::Self *)v73, (gameswf::Self *)"totalFrames");
  gameswf::registerStandardMember(v73, 5);
  sub_59CE50((int)(uintptr_t)(v73));
  sub_776320((gameswf::String::Self *)v74, (gameswf::Self *)"currentLabel");
  gameswf::registerStandardMember(v74, 53);
  sub_59CE50((int)(uintptr_t)(v74));
  sub_776320((gameswf::String::Self *)v75, (gameswf::Self *)"currentLabels");
  gameswf::registerStandardMember(v75, 54);
  sub_59CE50((int)(uintptr_t)(v75));
  sub_776320((gameswf::String::Self *)v76, (gameswf::Self *)"x");
  gameswf::registerStandardMember(v76, 0);
  sub_59CE50((int)(uintptr_t)(v76));
  sub_776320((gameswf::String::Self *)v77, (gameswf::Self *)"y");
  gameswf::registerStandardMember(v77, 1);
  sub_59CE50((int)(uintptr_t)(v77));
  sub_776320((gameswf::String::Self *)v78, (gameswf::Self *)"z");
  gameswf::registerStandardMember(v78, 99);
  sub_59CE50((int)(uintptr_t)(v78));
  sub_776320((gameswf::String::Self *)v79, (gameswf::Self *)"rotationX");
  gameswf::registerStandardMember(v79, 101);
  sub_59CE50((int)(uintptr_t)(v79));
  sub_776320((gameswf::String::Self *)v80, (gameswf::Self *)"rotationY");
  gameswf::registerStandardMember(v80, 102);
  sub_59CE50((int)(uintptr_t)(v80));
  sub_776320((gameswf::String::Self *)v81, (gameswf::Self *)"rotationZ");
  gameswf::registerStandardMember(v81, 10);
  sub_59CE50((int)(uintptr_t)(v81));
  sub_776320((gameswf::String::Self *)v82, (gameswf::Self *)"rotation");
  gameswf::registerStandardMember(v82, 10);
  sub_59CE50((int)(uintptr_t)(v82));
  sub_776320((gameswf::String::Self *)v83, (gameswf::Self *)"scaleX");
  gameswf::registerStandardMember(v83, 2);
  sub_59CE50((int)(uintptr_t)(v83));
  sub_776320((gameswf::String::Self *)v84, (gameswf::Self *)"scaleY");
  gameswf::registerStandardMember(v84, 3);
  sub_59CE50((int)(uintptr_t)(v84));
  sub_776320((gameswf::String::Self *)v85, (gameswf::Self *)"scaleZ");
  gameswf::registerStandardMember(v85, 100);
  sub_59CE50((int)(uintptr_t)(v85));
  sub_776320((gameswf::String::Self *)v86, (gameswf::Self *)"alpha");
  gameswf::registerStandardMember(v86, 6);
  sub_59CE50((int)(uintptr_t)(v86));
  sub_776320((gameswf::String::Self *)v87, (gameswf::Self *)"width");
  gameswf::registerStandardMember(v87, 8);
  sub_59CE50((int)(uintptr_t)(v87));
  sub_776320((gameswf::String::Self *)v88, (gameswf::Self *)"height");
  gameswf::registerStandardMember(v88, 9);
  sub_59CE50((int)(uintptr_t)(v88));
  sub_776320((gameswf::String::Self *)v89, (gameswf::Self *)"name");
  gameswf::registerStandardMember(v89, 13);
  sub_59CE50((int)(uintptr_t)(v89));
  sub_776320((gameswf::String::Self *)v90, (gameswf::Self *)"mouseX");
  gameswf::registerStandardMember(v90, 19);
  sub_59CE50((int)(uintptr_t)(v90));
  sub_776320((gameswf::String::Self *)v91, (gameswf::Self *)"mouseY");
  gameswf::registerStandardMember(v91, 20);
  sub_59CE50((int)(uintptr_t)(v91));
  sub_776320((gameswf::String::Self *)v92, (gameswf::Self *)"parent");
  gameswf::registerStandardMember(v92, 21);
  sub_59CE50((int)(uintptr_t)(v92));
  sub_776320((gameswf::String::Self *)v93, (gameswf::Self *)"root");
  gameswf::registerStandardMember(v93, 35);
  sub_59CE50((int)(uintptr_t)(v93));
  sub_776320((gameswf::String::Self *)v94, (gameswf::Self *)"numChildren");
  gameswf::registerStandardMember(v94, 60);
  sub_59CE50((int)(uintptr_t)(v94));
  sub_776320((gameswf::String::Self *)v95, (gameswf::Self *)"mouseEnabled");
  gameswf::registerStandardMember(v95, 61);
  sub_59CE50((int)(uintptr_t)(v95));
  sub_776320((gameswf::String::Self *)v96, (gameswf::Self *)"mouseChildren");
  gameswf::registerStandardMember(v96, 62);
  sub_59CE50((int)(uintptr_t)(v96));
  sub_776320((gameswf::String::Self *)v97, (gameswf::Self *)"stageWidth");
  gameswf::registerStandardMember(v97, 63);
  sub_59CE50((int)(uintptr_t)(v97));
  sub_776320((gameswf::String::Self *)v98, (gameswf::Self *)"stageHeight");
  gameswf::registerStandardMember(v98, 64);
  sub_59CE50((int)(uintptr_t)(v98));
  sub_776320((gameswf::String::Self *)v99, (gameswf::Self *)"scaleMode");
  gameswf::registerStandardMember(v99, 65);
  sub_59CE50((int)(uintptr_t)(v99));
  sub_776320((gameswf::String::Self *)v100, (gameswf::Self *)"align");
  gameswf::registerStandardMember(v100, 66);
  sub_59CE50((int)(uintptr_t)(v100));
  sub_776320((gameswf::String::Self *)v101, (gameswf::Self *)"left");
  gameswf::registerStandardMember(v101, 67);
  sub_59CE50((int)(uintptr_t)(v101));
  sub_776320((gameswf::String::Self *)v102, (gameswf::Self *)"right");
  gameswf::registerStandardMember(v102, 68);
  sub_59CE50((int)(uintptr_t)(v102));
  sub_776320((gameswf::String::Self *)v103, (gameswf::Self *)&off_1B29E4F);
  gameswf::registerStandardMember(v103, 69);
  sub_59CE50((int)(uintptr_t)(v103));
  sub_776320((gameswf::String::Self *)v104, (gameswf::Self *)"bottom");
  gameswf::registerStandardMember(v104, 70);
  sub_59CE50((int)(uintptr_t)(v104));
  sub_776320((gameswf::String::Self *)v105, (gameswf::Self *)"target");
  gameswf::registerStandardMember(v105, 71);
  sub_59CE50((int)(uintptr_t)(v105));
  sub_776320((gameswf::String::Self *)v106, (gameswf::Self *)"currentTarget");
  gameswf::registerStandardMember(v106, 72);
  sub_59CE50((int)(uintptr_t)(v106));
  sub_776320((gameswf::String::Self *)v107, (gameswf::Self *)"eventPhase");
  gameswf::registerStandardMember(v107, 73);
  sub_59CE50((int)(uintptr_t)(v107));
  sub_776320((gameswf::String::Self *)v108, (gameswf::Self *)"buttonDown");
  gameswf::registerStandardMember(v108, 74);
  sub_59CE50((int)(uintptr_t)(v108));
  sub_776320((gameswf::String::Self *)v109, (gameswf::Self *)"localX");
  gameswf::registerStandardMember(v109, 75);
  sub_59CE50((int)(uintptr_t)(v109));
  sub_776320((gameswf::String::Self *)v110, (gameswf::Self *)"localY");
  gameswf::registerStandardMember(v110, 76);
  sub_59CE50((int)(uintptr_t)(v110));
  sub_776320((gameswf::String::Self *)v111, (gameswf::Self *)"stageX");
  gameswf::registerStandardMember(v111, 77);
  sub_59CE50((int)(uintptr_t)(v111));
  sub_776320((gameswf::String::Self *)v112, (gameswf::Self *)"stageY");
  gameswf::registerStandardMember(v112, 78);
  sub_59CE50((int)(uintptr_t)(v112));
  sub_776320((gameswf::String::Self *)v113, (gameswf::Self *)"componentX");
  gameswf::registerStandardMember(v113, 79);
  sub_59CE50((int)(uintptr_t)(v113));
  sub_776320((gameswf::String::Self *)v114, (gameswf::Self *)"componentY");
  gameswf::registerStandardMember(v114, 80);
  sub_59CE50((int)(uintptr_t)(v114));
  sub_776320((gameswf::String::Self *)v115, (gameswf::Self *)"mapBitmap");
  gameswf::registerStandardMember(v115, 81);
  sub_59CE50((int)(uintptr_t)(v115));
  sub_776320((gameswf::String::Self *)v116, (gameswf::Self *)"mapPoint");
  gameswf::registerStandardMember(v116, 82);
  sub_59CE50((int)(uintptr_t)(v116));
  sub_776320((gameswf::String::Self *)v117, (gameswf::Self *)"bitmapData");
  gameswf::registerStandardMember(v117, 83);
  sub_59CE50((int)(uintptr_t)(v117));
  sub_776320((gameswf::String::Self *)v118, (gameswf::Self *)"contentLoaderInfo");
  gameswf::registerStandardMember(v118, 84);
  sub_59CE50((int)(uintptr_t)(v118));
  sub_776320((gameswf::String::Self *)v119, (gameswf::Self *)"content");
  gameswf::registerStandardMember(v119, 85);
  sub_59CE50((int)(uintptr_t)(v119));
  sub_776320((gameswf::String::Self *)v120, (gameswf::Self *)"loader");
  gameswf::registerStandardMember(v120, 86);
  sub_59CE50((int)(uintptr_t)(v120));
  sub_776320((gameswf::String::Self *)v121, (gameswf::Self *)"frame");
  gameswf::registerStandardMember(v121, 87);
  sub_59CE50((int)(uintptr_t)(v121));
  sub_776320((gameswf::String::Self *)v122, (gameswf::Self *)"url");
  gameswf::registerStandardMember(v122, 15);
  sub_59CE50((int)(uintptr_t)(v122));
  sub_776320((gameswf::String::Self *)v123, (gameswf::Self *)"message");
  gameswf::registerStandardMember(v123, 88);
  sub_59CE50((int)(uintptr_t)(v123));
  sub_776320((gameswf::String::Self *)v124, (gameswf::Self *)"charCode");
  gameswf::registerStandardMember(v124, 89);
  sub_59CE50((int)(uintptr_t)(v124));
  sub_776320((gameswf::String::Self *)v125, (gameswf::Self *)"keyCode");
  gameswf::registerStandardMember(v125, 90);
  sub_59CE50((int)(uintptr_t)(v125));
  sub_776320((gameswf::String::Self *)v126, (gameswf::Self *)"altKey");
  gameswf::registerStandardMember(v126, 91);
  sub_59CE50((int)(uintptr_t)(v126));
  sub_776320((gameswf::String::Self *)v127, (gameswf::Self *)"ctrlKey");
  gameswf::registerStandardMember(v127, 92);
  sub_59CE50((int)(uintptr_t)(v127));
  sub_776320((gameswf::String::Self *)v128, (gameswf::Self *)"shiftKey");
  gameswf::registerStandardMember(v128, 93);
  sub_59CE50((int)(uintptr_t)(v128));
  sub_776320((gameswf::String::Self *)v129, (gameswf::Self *)"mask");
  gameswf::registerStandardMember(v129, 94);
  sub_59CE50((int)(uintptr_t)(v129));
  sub_776320((gameswf::String::Self *)v130, (gameswf::Self *)"cacheAsBitmap");
  gameswf::registerStandardMember(v130, 95);
  sub_59CE50((int)(uintptr_t)(v130));
  sub_776320((gameswf::String::Self *)v131, (gameswf::Self *)"relatedObject");
  gameswf::registerStandardMember(v131, 96);
  sub_59CE50((int)(uintptr_t)(v131));
  sub_776320((gameswf::String::Self *)v132, (gameswf::Self *)"focus");
  gameswf::registerStandardMember(v132, 97);
  sub_59CE50((int)(uintptr_t)(v132));
  sub_776320((gameswf::String::Self *)v133, (gameswf::Self *)"matrix3D");
  gameswf::registerStandardMember(v133, 98);
  return sub_59CE50((int)(uintptr_t)(v133));
}

// ----------------------------------------------------------------------------
// Function: gameswf::standardMethodMapInit  (binary VA: 0x10b8e80)
// Original: gameswf::standardMethodMapInit
// ----------------------------------------------------------------------------
int gameswf::standardMethodMapInit()
{
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v0;
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v1;
  gameswf::ASProperty::Self *v2;
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v3;
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v4;
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v5;
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v6;
  typedef gameswf::ASValue::Self *_g4_t_v8;
  typedef gameswf::ASValue::Self *_g4_t_v9;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *_g4_t_v10;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *_g4_t_v11;
  typedef uint8_t _g4_t_v12[12];
  typedef uint8_t _g4_t_v13[12];
  typedef uint8_t _g4_t_v14[12];
  typedef uint8_t _g4_t_v15[12];
  typedef uint8_t _g4_t_v16[12];
  typedef uint8_t _g4_t_v17[12];
  typedef uint8_t _g4_t_v18[12];
  typedef uint8_t _g4_t_v19[12];
  typedef uint8_t _g4_t_v20[12];
  typedef uint8_t _g4_t_v21[12];
  typedef uint8_t _g4_t_v22[12];
  typedef uint8_t _g4_t_v23[12];
  typedef uint8_t _g4_t_v24[12];
  typedef uint8_t _g4_t_v25[12];
  typedef uint8_t _g4_t_v26[12];
  typedef uint8_t _g4_t_v27[12];
  typedef uint8_t _g4_t_v28[12];
  typedef uint8_t _g4_t_v29[12];
  typedef uint8_t _g4_t_v30[12];
  typedef uint8_t _g4_t_v31[12];
  typedef uint8_t _g4_t_v32[12];
  typedef uint8_t _g4_t_v33[12];
  typedef uint8_t _g4_t_v34[4];
  typedef int _g4_t_v35;
  typedef gameswf::ASProperty::Self *_g4_t_v36;
  typedef uint8_t _g4_t_v37[12];
  typedef uint8_t _g4_t_v38[12];
  typedef uint8_t _g4_t_v39[12];
  typedef uint8_t _g4_t_v40[12];
  typedef uint8_t _g4_t_v41[12];
  typedef uint8_t _g4_t_v42[12];
  typedef uint8_t _g4_t_v43[12];
  typedef uint8_t _g4_t_v44[12];
  typedef uint8_t _g4_t_v45[12];
  typedef uint8_t _g4_t_v46[12];
  typedef uint8_t _g4_t_v47[12];
  typedef uint8_t _g4_t_v48[12];
  typedef uint8_t _g4_t_v49[12];
  typedef uint8_t _g4_t_v50[12];
  typedef uint8_t _g4_t_v51[12];
  typedef uint8_t _g4_t_v52[12];
  typedef uint8_t _g4_t_v53[12];
  typedef uint8_t _g4_t_v54[12];
  typedef uint8_t _g4_t_v55[12];
  typedef uint8_t _g4_t_v56[12];
  typedef uint8_t _g4_t_v57[12];
  typedef uint8_t _g4_t_v58[12];
  typedef uint8_t _g4_t_v59[12];
  typedef uint8_t _g4_t_v60[12];
  typedef uint8_t _g4_t_v61[12];
  typedef uint8_t _g4_t_v62[12];
  typedef uint8_t _g4_t_v63[12];
  typedef uint8_t _g4_t_v64[12];
  typedef uint8_t _g4_t_v65[12];
  typedef uint8_t _g4_t_v66[12];
  typedef uint8_t _g4_t_v67[12];
  typedef uint8_t _g4_t_v68[12];
  typedef uint8_t _g4_t_v69[12];
  typedef uint8_t _g4_t_v70[12];
  typedef uint8_t _g4_t_v71[12];
  typedef uint8_t _g4_t_v72[12];
  typedef uint8_t _g4_t_v73[12];
  typedef uint8_t _g4_t_v74[12];
  typedef uint8_t _g4_t_v75[12];
  typedef uint8_t _g4_t_v76[12];
  typedef uint8_t _g4_t_v77[12];
  typedef uint8_t _g4_t_v78[12];
  typedef uint8_t _g4_t_v79[12];
  typedef uint8_t _g4_t_v80[12];
  typedef uint8_t _g4_t_v81[12];
  typedef uint8_t _g4_t_v82[12];
  typedef uint8_t _g4_t_v83[12];
  typedef uint8_t _g4_t_v84[12];
  typedef uint8_t _g4_t_v85[12];
  typedef uint8_t _g4_t_v86[12];
  typedef uint8_t _g4_t_v87[12];
  typedef uint8_t _g4_t_v88[12];
  typedef uint8_t _g4_t_v89[12];
  typedef uint8_t _g4_t_v90[12];
  typedef uint8_t _g4_t_v91[12];
  typedef uint8_t _g4_t_v92[20];
  typedef uint8_t _g4_t_v93[20];
  typedef uint8_t _g4_t_v94[20];
  typedef uint8_t _g4_t_v95[20];
  typedef uint8_t _g4_t_v96[20];
  typedef uint8_t _g4_t_v97[20];
  typedef uint8_t _g4_t_v98[20];
  typedef uint8_t _g4_t_v99[20];
  typedef uint8_t _g4_t_v100[20];
  typedef uint8_t _g4_t_v101[20];
  typedef uint8_t _g4_t_v102[20];
  typedef uint8_t _g4_t_v103[20];
  typedef uint8_t _g4_t_v104[20];
  typedef uint8_t _g4_t_v105[20];
  typedef uint8_t _g4_t_v106[20];
  typedef uint8_t _g4_t_v107[20];
  typedef uint8_t _g4_t_v108[20];
  typedef uint8_t _g4_t_v109[20];
  typedef uint8_t _g4_t_v110[20];
  typedef uint8_t _g4_t_v111[20];
  typedef uint8_t _g4_t_v112[20];
  typedef uint8_t _g4_t_v113[20];
  typedef uint8_t _g4_t_v114[20];
  typedef uint8_t _g4_t_v115[20];
  typedef uint8_t _g4_t_v116[20];
  typedef uint8_t _g4_t_v117[20];
  typedef uint8_t _g4_t_v118[20];
  typedef uint8_t _g4_t_v119[20];
  typedef uint8_t _g4_t_v120[20];
  typedef uint8_t _g4_t_v121[20];
  typedef uint8_t _g4_t_v122[20];
  typedef uint8_t _g4_t_v123[20];
  typedef uint8_t _g4_t_v124[20];
  typedef uint8_t _g4_t_v125[20];
  typedef uint8_t _g4_t_v126[20];
  typedef uint8_t _g4_t_v127[20];
  typedef uint8_t _g4_t_v128[20];
  typedef uint8_t _g4_t_v129[20];
  typedef uint8_t _g4_t_v130[20];
  typedef uint8_t _g4_t_v131[20];
  typedef uint8_t _g4_t_v132[20];
  typedef uint8_t _g4_t_v133[20];
  typedef uint8_t _g4_t_v134[20];
  typedef uint8_t _g4_t_v135[20];
  typedef uint8_t _g4_t_v136[20];
  typedef uint8_t _g4_t_v137[20];
  typedef uint8_t _g4_t_v138[20];
  typedef uint8_t _g4_t_v139[20];
  typedef uint8_t _g4_t_v140[20];
  typedef uint8_t _g4_t_v141[20];
  typedef uint8_t _g4_t_v142[20];
  typedef uint8_t _g4_t_v143[20];
  typedef uint8_t _g4_t_v144[20];
  typedef uint8_t _g4_t_v145[20];
  typedef uint8_t _g4_t_v146[20];
  typedef uint8_t _g4_t_v147[20];
  typedef uint8_t _g4_t_v148[20];
  typedef uint8_t _g4_t_v149[20];
  typedef uint8_t _g4_t_v150[20];
  typedef uint8_t _g4_t_v151[20];
  typedef uint8_t _g4_t_v152[20];
  typedef uint8_t _g4_t_v153[20];
  typedef uint8_t _g4_t_v154[20];
  typedef uint8_t _g4_t_v155[20];
  typedef uint8_t _g4_t_v156[20];
  typedef uint8_t _g4_t_v157[20];
  typedef uint8_t _g4_t_v158[20];
  typedef uint8_t _g4_t_v159[20];
  typedef uint8_t _g4_t_v160[20];
  typedef uint8_t _g4_t_v161[20];
  typedef uint8_t _g4_t_v162[20];
  typedef uint8_t _g4_t_v163[20];
  typedef uint8_t _g4_t_v164[20];
  typedef uint8_t _g4_t_v165[20];
  typedef uint8_t _g4_t_v166[20];
  typedef uint8_t _g4_t_v167[48];
  enum : size_t {
    _g4_s0 = 2576u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v13)) > _g4_s5 ? (36u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v14)) > _g4_s6 ? (48u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v15)) > _g4_s7 ? (60u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v16)) > _g4_s8 ? (72u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v17)) > _g4_s9 ? (84u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v18)) > _g4_s10 ? (96u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v19)) > _g4_s11 ? (108u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v20)) > _g4_s12 ? (120u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (132u + sizeof(_g4_t_v21)) > _g4_s13 ? (132u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (144u + sizeof(_g4_t_v22)) > _g4_s14 ? (144u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (156u + sizeof(_g4_t_v23)) > _g4_s15 ? (156u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (168u + sizeof(_g4_t_v24)) > _g4_s16 ? (168u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (180u + sizeof(_g4_t_v25)) > _g4_s17 ? (180u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (192u + sizeof(_g4_t_v26)) > _g4_s18 ? (192u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (204u + sizeof(_g4_t_v27)) > _g4_s19 ? (204u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (216u + sizeof(_g4_t_v28)) > _g4_s20 ? (216u + sizeof(_g4_t_v28)) : _g4_s20,
    _g4_s22 = (228u + sizeof(_g4_t_v29)) > _g4_s21 ? (228u + sizeof(_g4_t_v29)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v30)) > _g4_s22 ? (240u + sizeof(_g4_t_v30)) : _g4_s22,
    _g4_s24 = (252u + sizeof(_g4_t_v31)) > _g4_s23 ? (252u + sizeof(_g4_t_v31)) : _g4_s23,
    _g4_s25 = (264u + sizeof(_g4_t_v32)) > _g4_s24 ? (264u + sizeof(_g4_t_v32)) : _g4_s24,
    _g4_s26 = (276u + sizeof(_g4_t_v33)) > _g4_s25 ? (276u + sizeof(_g4_t_v33)) : _g4_s25,
    _g4_s27 = (288u + sizeof(_g4_t_v34)) > _g4_s26 ? (288u + sizeof(_g4_t_v34)) : _g4_s26,
    _g4_s28 = (292u + sizeof(_g4_t_v35)) > _g4_s27 ? (292u + sizeof(_g4_t_v35)) : _g4_s27,
    _g4_s29 = (296u + sizeof(_g4_t_v36)) > _g4_s28 ? (296u + sizeof(_g4_t_v36)) : _g4_s28,
    _g4_s30 = (300u + sizeof(_g4_t_v37)) > _g4_s29 ? (300u + sizeof(_g4_t_v37)) : _g4_s29,
    _g4_s31 = (312u + sizeof(_g4_t_v38)) > _g4_s30 ? (312u + sizeof(_g4_t_v38)) : _g4_s30,
    _g4_s32 = (324u + sizeof(_g4_t_v39)) > _g4_s31 ? (324u + sizeof(_g4_t_v39)) : _g4_s31,
    _g4_s33 = (336u + sizeof(_g4_t_v40)) > _g4_s32 ? (336u + sizeof(_g4_t_v40)) : _g4_s32,
    _g4_s34 = (348u + sizeof(_g4_t_v41)) > _g4_s33 ? (348u + sizeof(_g4_t_v41)) : _g4_s33,
    _g4_s35 = (360u + sizeof(_g4_t_v42)) > _g4_s34 ? (360u + sizeof(_g4_t_v42)) : _g4_s34,
    _g4_s36 = (372u + sizeof(_g4_t_v43)) > _g4_s35 ? (372u + sizeof(_g4_t_v43)) : _g4_s35,
    _g4_s37 = (384u + sizeof(_g4_t_v44)) > _g4_s36 ? (384u + sizeof(_g4_t_v44)) : _g4_s36,
    _g4_s38 = (396u + sizeof(_g4_t_v45)) > _g4_s37 ? (396u + sizeof(_g4_t_v45)) : _g4_s37,
    _g4_s39 = (408u + sizeof(_g4_t_v46)) > _g4_s38 ? (408u + sizeof(_g4_t_v46)) : _g4_s38,
    _g4_s40 = (420u + sizeof(_g4_t_v47)) > _g4_s39 ? (420u + sizeof(_g4_t_v47)) : _g4_s39,
    _g4_s41 = (432u + sizeof(_g4_t_v48)) > _g4_s40 ? (432u + sizeof(_g4_t_v48)) : _g4_s40,
    _g4_s42 = (444u + sizeof(_g4_t_v49)) > _g4_s41 ? (444u + sizeof(_g4_t_v49)) : _g4_s41,
    _g4_s43 = (456u + sizeof(_g4_t_v50)) > _g4_s42 ? (456u + sizeof(_g4_t_v50)) : _g4_s42,
    _g4_s44 = (468u + sizeof(_g4_t_v51)) > _g4_s43 ? (468u + sizeof(_g4_t_v51)) : _g4_s43,
    _g4_s45 = (480u + sizeof(_g4_t_v52)) > _g4_s44 ? (480u + sizeof(_g4_t_v52)) : _g4_s44,
    _g4_s46 = (492u + sizeof(_g4_t_v53)) > _g4_s45 ? (492u + sizeof(_g4_t_v53)) : _g4_s45,
    _g4_s47 = (504u + sizeof(_g4_t_v54)) > _g4_s46 ? (504u + sizeof(_g4_t_v54)) : _g4_s46,
    _g4_s48 = (516u + sizeof(_g4_t_v55)) > _g4_s47 ? (516u + sizeof(_g4_t_v55)) : _g4_s47,
    _g4_s49 = (528u + sizeof(_g4_t_v56)) > _g4_s48 ? (528u + sizeof(_g4_t_v56)) : _g4_s48,
    _g4_s50 = (540u + sizeof(_g4_t_v57)) > _g4_s49 ? (540u + sizeof(_g4_t_v57)) : _g4_s49,
    _g4_s51 = (552u + sizeof(_g4_t_v58)) > _g4_s50 ? (552u + sizeof(_g4_t_v58)) : _g4_s50,
    _g4_s52 = (564u + sizeof(_g4_t_v59)) > _g4_s51 ? (564u + sizeof(_g4_t_v59)) : _g4_s51,
    _g4_s53 = (576u + sizeof(_g4_t_v60)) > _g4_s52 ? (576u + sizeof(_g4_t_v60)) : _g4_s52,
    _g4_s54 = (588u + sizeof(_g4_t_v61)) > _g4_s53 ? (588u + sizeof(_g4_t_v61)) : _g4_s53,
    _g4_s55 = (600u + sizeof(_g4_t_v62)) > _g4_s54 ? (600u + sizeof(_g4_t_v62)) : _g4_s54,
    _g4_s56 = (612u + sizeof(_g4_t_v63)) > _g4_s55 ? (612u + sizeof(_g4_t_v63)) : _g4_s55,
    _g4_s57 = (624u + sizeof(_g4_t_v64)) > _g4_s56 ? (624u + sizeof(_g4_t_v64)) : _g4_s56,
    _g4_s58 = (636u + sizeof(_g4_t_v65)) > _g4_s57 ? (636u + sizeof(_g4_t_v65)) : _g4_s57,
    _g4_s59 = (648u + sizeof(_g4_t_v66)) > _g4_s58 ? (648u + sizeof(_g4_t_v66)) : _g4_s58,
    _g4_s60 = (660u + sizeof(_g4_t_v67)) > _g4_s59 ? (660u + sizeof(_g4_t_v67)) : _g4_s59,
    _g4_s61 = (672u + sizeof(_g4_t_v68)) > _g4_s60 ? (672u + sizeof(_g4_t_v68)) : _g4_s60,
    _g4_s62 = (684u + sizeof(_g4_t_v69)) > _g4_s61 ? (684u + sizeof(_g4_t_v69)) : _g4_s61,
    _g4_s63 = (696u + sizeof(_g4_t_v70)) > _g4_s62 ? (696u + sizeof(_g4_t_v70)) : _g4_s62,
    _g4_s64 = (708u + sizeof(_g4_t_v71)) > _g4_s63 ? (708u + sizeof(_g4_t_v71)) : _g4_s63,
    _g4_s65 = (720u + sizeof(_g4_t_v72)) > _g4_s64 ? (720u + sizeof(_g4_t_v72)) : _g4_s64,
    _g4_s66 = (732u + sizeof(_g4_t_v73)) > _g4_s65 ? (732u + sizeof(_g4_t_v73)) : _g4_s65,
    _g4_s67 = (744u + sizeof(_g4_t_v74)) > _g4_s66 ? (744u + sizeof(_g4_t_v74)) : _g4_s66,
    _g4_s68 = (756u + sizeof(_g4_t_v75)) > _g4_s67 ? (756u + sizeof(_g4_t_v75)) : _g4_s67,
    _g4_s69 = (768u + sizeof(_g4_t_v76)) > _g4_s68 ? (768u + sizeof(_g4_t_v76)) : _g4_s68,
    _g4_s70 = (780u + sizeof(_g4_t_v77)) > _g4_s69 ? (780u + sizeof(_g4_t_v77)) : _g4_s69,
    _g4_s71 = (792u + sizeof(_g4_t_v78)) > _g4_s70 ? (792u + sizeof(_g4_t_v78)) : _g4_s70,
    _g4_s72 = (804u + sizeof(_g4_t_v79)) > _g4_s71 ? (804u + sizeof(_g4_t_v79)) : _g4_s71,
    _g4_s73 = (816u + sizeof(_g4_t_v80)) > _g4_s72 ? (816u + sizeof(_g4_t_v80)) : _g4_s72,
    _g4_s74 = (828u + sizeof(_g4_t_v81)) > _g4_s73 ? (828u + sizeof(_g4_t_v81)) : _g4_s73,
    _g4_s75 = (840u + sizeof(_g4_t_v82)) > _g4_s74 ? (840u + sizeof(_g4_t_v82)) : _g4_s74,
    _g4_s76 = (852u + sizeof(_g4_t_v83)) > _g4_s75 ? (852u + sizeof(_g4_t_v83)) : _g4_s75,
    _g4_s77 = (864u + sizeof(_g4_t_v84)) > _g4_s76 ? (864u + sizeof(_g4_t_v84)) : _g4_s76,
    _g4_s78 = (876u + sizeof(_g4_t_v85)) > _g4_s77 ? (876u + sizeof(_g4_t_v85)) : _g4_s77,
    _g4_s79 = (888u + sizeof(_g4_t_v86)) > _g4_s78 ? (888u + sizeof(_g4_t_v86)) : _g4_s78,
    _g4_s80 = (900u + sizeof(_g4_t_v87)) > _g4_s79 ? (900u + sizeof(_g4_t_v87)) : _g4_s79,
    _g4_s81 = (912u + sizeof(_g4_t_v88)) > _g4_s80 ? (912u + sizeof(_g4_t_v88)) : _g4_s80,
    _g4_s82 = (924u + sizeof(_g4_t_v89)) > _g4_s81 ? (924u + sizeof(_g4_t_v89)) : _g4_s81,
    _g4_s83 = (936u + sizeof(_g4_t_v90)) > _g4_s82 ? (936u + sizeof(_g4_t_v90)) : _g4_s82,
    _g4_s84 = (948u + sizeof(_g4_t_v91)) > _g4_s83 ? (948u + sizeof(_g4_t_v91)) : _g4_s83,
    _g4_s85 = (960u + sizeof(_g4_t_v92)) > _g4_s84 ? (960u + sizeof(_g4_t_v92)) : _g4_s84,
    _g4_s86 = (980u + sizeof(_g4_t_v93)) > _g4_s85 ? (980u + sizeof(_g4_t_v93)) : _g4_s85,
    _g4_s87 = (1000u + sizeof(_g4_t_v94)) > _g4_s86 ? (1000u + sizeof(_g4_t_v94)) : _g4_s86,
    _g4_s88 = (1020u + sizeof(_g4_t_v95)) > _g4_s87 ? (1020u + sizeof(_g4_t_v95)) : _g4_s87,
    _g4_s89 = (1040u + sizeof(_g4_t_v96)) > _g4_s88 ? (1040u + sizeof(_g4_t_v96)) : _g4_s88,
    _g4_s90 = (1060u + sizeof(_g4_t_v97)) > _g4_s89 ? (1060u + sizeof(_g4_t_v97)) : _g4_s89,
    _g4_s91 = (1080u + sizeof(_g4_t_v98)) > _g4_s90 ? (1080u + sizeof(_g4_t_v98)) : _g4_s90,
    _g4_s92 = (1100u + sizeof(_g4_t_v99)) > _g4_s91 ? (1100u + sizeof(_g4_t_v99)) : _g4_s91,
    _g4_s93 = (1120u + sizeof(_g4_t_v100)) > _g4_s92 ? (1120u + sizeof(_g4_t_v100)) : _g4_s92,
    _g4_s94 = (1140u + sizeof(_g4_t_v101)) > _g4_s93 ? (1140u + sizeof(_g4_t_v101)) : _g4_s93,
    _g4_s95 = (1160u + sizeof(_g4_t_v102)) > _g4_s94 ? (1160u + sizeof(_g4_t_v102)) : _g4_s94,
    _g4_s96 = (1180u + sizeof(_g4_t_v103)) > _g4_s95 ? (1180u + sizeof(_g4_t_v103)) : _g4_s95,
    _g4_s97 = (1200u + sizeof(_g4_t_v104)) > _g4_s96 ? (1200u + sizeof(_g4_t_v104)) : _g4_s96,
    _g4_s98 = (1220u + sizeof(_g4_t_v105)) > _g4_s97 ? (1220u + sizeof(_g4_t_v105)) : _g4_s97,
    _g4_s99 = (1240u + sizeof(_g4_t_v106)) > _g4_s98 ? (1240u + sizeof(_g4_t_v106)) : _g4_s98,
    _g4_s100 = (1260u + sizeof(_g4_t_v107)) > _g4_s99 ? (1260u + sizeof(_g4_t_v107)) : _g4_s99,
    _g4_s101 = (1280u + sizeof(_g4_t_v108)) > _g4_s100 ? (1280u + sizeof(_g4_t_v108)) : _g4_s100,
    _g4_s102 = (1300u + sizeof(_g4_t_v109)) > _g4_s101 ? (1300u + sizeof(_g4_t_v109)) : _g4_s101,
    _g4_s103 = (1320u + sizeof(_g4_t_v110)) > _g4_s102 ? (1320u + sizeof(_g4_t_v110)) : _g4_s102,
    _g4_s104 = (1340u + sizeof(_g4_t_v111)) > _g4_s103 ? (1340u + sizeof(_g4_t_v111)) : _g4_s103,
    _g4_s105 = (1360u + sizeof(_g4_t_v112)) > _g4_s104 ? (1360u + sizeof(_g4_t_v112)) : _g4_s104,
    _g4_s106 = (1380u + sizeof(_g4_t_v113)) > _g4_s105 ? (1380u + sizeof(_g4_t_v113)) : _g4_s105,
    _g4_s107 = (1400u + sizeof(_g4_t_v114)) > _g4_s106 ? (1400u + sizeof(_g4_t_v114)) : _g4_s106,
    _g4_s108 = (1420u + sizeof(_g4_t_v115)) > _g4_s107 ? (1420u + sizeof(_g4_t_v115)) : _g4_s107,
    _g4_s109 = (1440u + sizeof(_g4_t_v116)) > _g4_s108 ? (1440u + sizeof(_g4_t_v116)) : _g4_s108,
    _g4_s110 = (1460u + sizeof(_g4_t_v117)) > _g4_s109 ? (1460u + sizeof(_g4_t_v117)) : _g4_s109,
    _g4_s111 = (1480u + sizeof(_g4_t_v118)) > _g4_s110 ? (1480u + sizeof(_g4_t_v118)) : _g4_s110,
    _g4_s112 = (1500u + sizeof(_g4_t_v119)) > _g4_s111 ? (1500u + sizeof(_g4_t_v119)) : _g4_s111,
    _g4_s113 = (1520u + sizeof(_g4_t_v120)) > _g4_s112 ? (1520u + sizeof(_g4_t_v120)) : _g4_s112,
    _g4_s114 = (1540u + sizeof(_g4_t_v121)) > _g4_s113 ? (1540u + sizeof(_g4_t_v121)) : _g4_s113,
    _g4_s115 = (1560u + sizeof(_g4_t_v122)) > _g4_s114 ? (1560u + sizeof(_g4_t_v122)) : _g4_s114,
    _g4_s116 = (1580u + sizeof(_g4_t_v123)) > _g4_s115 ? (1580u + sizeof(_g4_t_v123)) : _g4_s115,
    _g4_s117 = (1600u + sizeof(_g4_t_v124)) > _g4_s116 ? (1600u + sizeof(_g4_t_v124)) : _g4_s116,
    _g4_s118 = (1620u + sizeof(_g4_t_v125)) > _g4_s117 ? (1620u + sizeof(_g4_t_v125)) : _g4_s117,
    _g4_s119 = (1640u + sizeof(_g4_t_v126)) > _g4_s118 ? (1640u + sizeof(_g4_t_v126)) : _g4_s118,
    _g4_s120 = (1660u + sizeof(_g4_t_v127)) > _g4_s119 ? (1660u + sizeof(_g4_t_v127)) : _g4_s119,
    _g4_s121 = (1680u + sizeof(_g4_t_v128)) > _g4_s120 ? (1680u + sizeof(_g4_t_v128)) : _g4_s120,
    _g4_s122 = (1700u + sizeof(_g4_t_v129)) > _g4_s121 ? (1700u + sizeof(_g4_t_v129)) : _g4_s121,
    _g4_s123 = (1720u + sizeof(_g4_t_v130)) > _g4_s122 ? (1720u + sizeof(_g4_t_v130)) : _g4_s122,
    _g4_s124 = (1740u + sizeof(_g4_t_v131)) > _g4_s123 ? (1740u + sizeof(_g4_t_v131)) : _g4_s123,
    _g4_s125 = (1760u + sizeof(_g4_t_v132)) > _g4_s124 ? (1760u + sizeof(_g4_t_v132)) : _g4_s124,
    _g4_s126 = (1780u + sizeof(_g4_t_v133)) > _g4_s125 ? (1780u + sizeof(_g4_t_v133)) : _g4_s125,
    _g4_s127 = (1800u + sizeof(_g4_t_v134)) > _g4_s126 ? (1800u + sizeof(_g4_t_v134)) : _g4_s126,
    _g4_s128 = (1820u + sizeof(_g4_t_v135)) > _g4_s127 ? (1820u + sizeof(_g4_t_v135)) : _g4_s127,
    _g4_s129 = (1840u + sizeof(_g4_t_v136)) > _g4_s128 ? (1840u + sizeof(_g4_t_v136)) : _g4_s128,
    _g4_s130 = (1860u + sizeof(_g4_t_v137)) > _g4_s129 ? (1860u + sizeof(_g4_t_v137)) : _g4_s129,
    _g4_s131 = (1880u + sizeof(_g4_t_v138)) > _g4_s130 ? (1880u + sizeof(_g4_t_v138)) : _g4_s130,
    _g4_s132 = (1900u + sizeof(_g4_t_v139)) > _g4_s131 ? (1900u + sizeof(_g4_t_v139)) : _g4_s131,
    _g4_s133 = (1920u + sizeof(_g4_t_v140)) > _g4_s132 ? (1920u + sizeof(_g4_t_v140)) : _g4_s132,
    _g4_s134 = (1940u + sizeof(_g4_t_v141)) > _g4_s133 ? (1940u + sizeof(_g4_t_v141)) : _g4_s133,
    _g4_s135 = (1960u + sizeof(_g4_t_v142)) > _g4_s134 ? (1960u + sizeof(_g4_t_v142)) : _g4_s134,
    _g4_s136 = (1980u + sizeof(_g4_t_v143)) > _g4_s135 ? (1980u + sizeof(_g4_t_v143)) : _g4_s135,
    _g4_s137 = (2000u + sizeof(_g4_t_v144)) > _g4_s136 ? (2000u + sizeof(_g4_t_v144)) : _g4_s136,
    _g4_s138 = (2020u + sizeof(_g4_t_v145)) > _g4_s137 ? (2020u + sizeof(_g4_t_v145)) : _g4_s137,
    _g4_s139 = (2040u + sizeof(_g4_t_v146)) > _g4_s138 ? (2040u + sizeof(_g4_t_v146)) : _g4_s138,
    _g4_s140 = (2060u + sizeof(_g4_t_v147)) > _g4_s139 ? (2060u + sizeof(_g4_t_v147)) : _g4_s139,
    _g4_s141 = (2080u + sizeof(_g4_t_v148)) > _g4_s140 ? (2080u + sizeof(_g4_t_v148)) : _g4_s140,
    _g4_s142 = (2100u + sizeof(_g4_t_v149)) > _g4_s141 ? (2100u + sizeof(_g4_t_v149)) : _g4_s141,
    _g4_s143 = (2120u + sizeof(_g4_t_v150)) > _g4_s142 ? (2120u + sizeof(_g4_t_v150)) : _g4_s142,
    _g4_s144 = (2140u + sizeof(_g4_t_v151)) > _g4_s143 ? (2140u + sizeof(_g4_t_v151)) : _g4_s143,
    _g4_s145 = (2160u + sizeof(_g4_t_v152)) > _g4_s144 ? (2160u + sizeof(_g4_t_v152)) : _g4_s144,
    _g4_s146 = (2180u + sizeof(_g4_t_v153)) > _g4_s145 ? (2180u + sizeof(_g4_t_v153)) : _g4_s145,
    _g4_s147 = (2200u + sizeof(_g4_t_v154)) > _g4_s146 ? (2200u + sizeof(_g4_t_v154)) : _g4_s146,
    _g4_s148 = (2220u + sizeof(_g4_t_v155)) > _g4_s147 ? (2220u + sizeof(_g4_t_v155)) : _g4_s147,
    _g4_s149 = (2240u + sizeof(_g4_t_v156)) > _g4_s148 ? (2240u + sizeof(_g4_t_v156)) : _g4_s148,
    _g4_s150 = (2260u + sizeof(_g4_t_v157)) > _g4_s149 ? (2260u + sizeof(_g4_t_v157)) : _g4_s149,
    _g4_s151 = (2280u + sizeof(_g4_t_v158)) > _g4_s150 ? (2280u + sizeof(_g4_t_v158)) : _g4_s150,
    _g4_s152 = (2300u + sizeof(_g4_t_v159)) > _g4_s151 ? (2300u + sizeof(_g4_t_v159)) : _g4_s151,
    _g4_s153 = (2320u + sizeof(_g4_t_v160)) > _g4_s152 ? (2320u + sizeof(_g4_t_v160)) : _g4_s152,
    _g4_s154 = (2340u + sizeof(_g4_t_v161)) > _g4_s153 ? (2340u + sizeof(_g4_t_v161)) : _g4_s153,
    _g4_s155 = (2360u + sizeof(_g4_t_v162)) > _g4_s154 ? (2360u + sizeof(_g4_t_v162)) : _g4_s154,
    _g4_s156 = (2380u + sizeof(_g4_t_v163)) > _g4_s155 ? (2380u + sizeof(_g4_t_v163)) : _g4_s155,
    _g4_s157 = (2400u + sizeof(_g4_t_v164)) > _g4_s156 ? (2400u + sizeof(_g4_t_v164)) : _g4_s156,
    _g4_s158 = (2420u + sizeof(_g4_t_v165)) > _g4_s157 ? (2420u + sizeof(_g4_t_v165)) : _g4_s157,
    _g4_s159 = (2440u + sizeof(_g4_t_v166)) > _g4_s158 ? (2440u + sizeof(_g4_t_v166)) : _g4_s158,
    _g4_s160 = (2460u + sizeof(_g4_t_v167)) > _g4_s159 ? (2460u + sizeof(_g4_t_v167)) : _g4_s159
  };
  alignas(16) uint8_t _g4_sf[_g4_s160];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 96u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 108u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 120u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 132u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 144u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 156u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 168u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 180u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 192u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 204u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 216u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 228u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 240u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 252u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 264u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 276u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 288u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 292u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 296u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 300u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 312u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 324u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 336u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 348u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 360u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 372u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 384u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 396u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 408u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 420u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 432u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 444u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 456u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 468u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 480u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 492u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 504u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 516u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 528u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 540u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 552u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 564u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 576u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 588u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 600u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 612u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 624u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 636u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 648u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 660u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 672u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 684u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 696u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 708u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 720u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 732u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 744u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 756u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 768u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 780u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 792u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 804u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 816u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 828u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 840u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 852u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 864u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 876u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 888u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 900u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 912u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 924u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 936u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 948u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 960u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 980u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 1000u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 1020u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 1040u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 1060u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 1080u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 1100u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 1120u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 1140u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 1160u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 1180u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 1200u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 1220u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 1240u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 1260u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 1280u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 1300u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 1320u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 1340u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 1360u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 1380u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 1400u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 1420u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 1440u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 1460u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 1480u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 1500u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 1520u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 1540u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 1560u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 1580u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 1600u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 1620u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 1640u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 1660u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 1680u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 1700u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 1720u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 1740u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 1760u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 1780u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 1800u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 1820u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 1840u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 1860u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 1880u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 1900u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 1920u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 1940u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 1960u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 1980u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 2000u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 2020u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 2040u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 2060u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 2080u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 2100u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 2120u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 2140u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 2160u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 2180u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 2200u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 2220u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 2240u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 2260u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 2280u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 2300u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 2320u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 2340u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 2360u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 2380u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 2400u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 2420u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 2440u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 2460u);

  v0 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::new_standard_method_map(0);
  v12[0] = 0;
  v12[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v12, (int)(uintptr_t)(gameswf::ASObject::addProperty));
  sub_776320((gameswf::String::Self *)v92, (gameswf::Self *)"addProperty");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v0,
    (const gameswf::StringI::Self *)v92,
    (const gameswf::ASValue::Self *)v12);
  sub_59CE50((int)(uintptr_t)(v92));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  v13[0] = 0;
  v13[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v13, (int)(uintptr_t)(gameswf::ASObject::registerClass));
  sub_776320((gameswf::String::Self *)v93, (gameswf::Self *)"registerClass");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v0,
    (const gameswf::StringI::Self *)v93,
    (const gameswf::ASValue::Self *)v13);
  sub_59CE50((int)(uintptr_t)(v93));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
  v14[0] = 0;
  v14[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v14, (int)(uintptr_t)(gameswf::ASObject::hasOwnProperty));
  sub_776320((gameswf::String::Self *)v94, (gameswf::Self *)"hasOwnProperty");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v0,
    (const gameswf::StringI::Self *)v94,
    (const gameswf::ASValue::Self *)v14);
  sub_59CE50((int)(uintptr_t)(v94));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v14);
  v10 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::new_standard_method_map(2);
  v15[0] = 0;
  v15[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v15, (int)(uintptr_t)(gameswf::ASNumber::toString));
  sub_776320((gameswf::String::Self *)v95, (gameswf::Self *)"toString");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v10,
    (const gameswf::StringI::Self *)v95,
    (const gameswf::ASValue::Self *)v15);
  sub_59CE50((int)(uintptr_t)(v95));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v15);
  v16[0] = 0;
  v16[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v16, (int)(uintptr_t)(gameswf::ASNumber::valueOf));
  sub_776320((gameswf::String::Self *)v96, (gameswf::Self *)"valueOf");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v10,
    (const gameswf::StringI::Self *)v96,
    (const gameswf::ASValue::Self *)v16);
  sub_59CE50((int)(uintptr_t)(v96));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v16);
  v11 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::new_standard_method_map(3);
  v17[0] = 0;
  v17[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v17, (int)(uintptr_t)(gameswf::ASBoolean::toString));
  sub_776320((gameswf::String::Self *)v97, (gameswf::Self *)"toString");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v11,
    (const gameswf::StringI::Self *)v97,
    (const gameswf::ASValue::Self *)v17);
  sub_59CE50((int)(uintptr_t)(v97));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
  v18[0] = 0;
  v18[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v18, (int)(uintptr_t)(gameswf::ASBoolean::valueOf));
  sub_776320((gameswf::String::Self *)v98, (gameswf::Self *)"valueOf");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v11,
    (const gameswf::StringI::Self *)v98,
    (const gameswf::ASValue::Self *)v18);
  sub_59CE50((int)(uintptr_t)(v98));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v18);
  v1 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::new_standard_method_map(4);
  v19[0] = 0;
  v19[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v19, (int)(uintptr_t)(gameswf::ASString::toString));
  sub_776320((gameswf::String::Self *)v99, (gameswf::Self *)"toString");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v99,
    (const gameswf::ASValue::Self *)v19);
  sub_59CE50((int)(uintptr_t)(v99));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
  v20[0] = 0;
  v20[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v20, (int)(uintptr_t)(gameswf::ASString::fromCharCode));
  sub_776320((gameswf::String::Self *)v100, (gameswf::Self *)"fromCharCode");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v100,
    (const gameswf::ASValue::Self *)v20);
  sub_59CE50((int)(uintptr_t)(v100));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
  v21[0] = 0;
  v21[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v21, (int)(uintptr_t)(gameswf::ASString::charCodeAt));
  sub_776320((gameswf::String::Self *)v101, (gameswf::Self *)"charCodeAt");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v101,
    (const gameswf::ASValue::Self *)v21);
  sub_59CE50((int)(uintptr_t)(v101));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v21);
  v22[0] = 0;
  v22[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v22, (int)(uintptr_t)(gameswf::ASString::concat));
  sub_776320((gameswf::String::Self *)v102, (gameswf::Self *)"concat");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v102,
    (const gameswf::ASValue::Self *)v22);
  sub_59CE50((int)(uintptr_t)(v102));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v22);
  v23[0] = 0;
  v23[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v23, (int)(uintptr_t)(gameswf::ASString::indexOf));
  sub_776320((gameswf::String::Self *)v103, (gameswf::Self *)"indexOf");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v103,
    (const gameswf::ASValue::Self *)v23);
  sub_59CE50((int)(uintptr_t)(v103));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v23);
  v24[0] = 0;
  v24[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v24, (int)(uintptr_t)(gameswf::ASString::lastIndexOf));
  sub_776320((gameswf::String::Self *)v104, (gameswf::Self *)"lastIndexOf");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v104,
    (const gameswf::ASValue::Self *)v24);
  sub_59CE50((int)(uintptr_t)(v104));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v24);
  v25[0] = 0;
  v25[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v25, (int)(uintptr_t)(gameswf::ASString::slice));
  sub_776320((gameswf::String::Self *)v105, (gameswf::Self *)"slice");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v105,
    (const gameswf::ASValue::Self *)v25);
  sub_59CE50((int)(uintptr_t)(v105));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v25);
  v26[0] = 0;
  v26[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v26, (int)(uintptr_t)(gameswf::ASString::split));
  sub_776320((gameswf::String::Self *)v106, (gameswf::Self *)"split");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v106,
    (const gameswf::ASValue::Self *)v26);
  sub_59CE50((int)(uintptr_t)(v106));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v26);
  v27[0] = 0;
  v27[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v27, (int)(uintptr_t)(gameswf::ASString::substring));
  sub_776320((gameswf::String::Self *)v107, (gameswf::Self *)"substring");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v107,
    (const gameswf::ASValue::Self *)v27);
  sub_59CE50((int)(uintptr_t)(v107));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v27);
  v28[0] = 0;
  v28[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v28, (int)(uintptr_t)(gameswf::ASString::substr));
  sub_776320((gameswf::String::Self *)v108, (gameswf::Self *)"substr");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v108,
    (const gameswf::ASValue::Self *)v28);
  sub_59CE50((int)(uintptr_t)(v108));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v28);
  v29[0] = 0;
  v29[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v29, (int)(uintptr_t)(gameswf::ASString::toLowerCase));
  sub_776320((gameswf::String::Self *)v109, (gameswf::Self *)"toLowerCase");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v109,
    (const gameswf::ASValue::Self *)v29);
  sub_59CE50((int)(uintptr_t)(v109));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v29);
  v30[0] = 0;
  v30[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v30, (int)(uintptr_t)(gameswf::ASString::toUpperCase));
  sub_776320((gameswf::String::Self *)v110, (gameswf::Self *)"toUpperCase");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v110,
    (const gameswf::ASValue::Self *)v30);
  sub_59CE50((int)(uintptr_t)(v110));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v30);
  v31[0] = 0;
  v31[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v31, (int)(uintptr_t)(gameswf::ASString::charAt));
  sub_776320((gameswf::String::Self *)v111, (gameswf::Self *)"charAt");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v111,
    (const gameswf::ASValue::Self *)v31);
  sub_59CE50((int)(uintptr_t)(v111));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v31);
  v32[0] = 0;
  v32[1] = 0;
  v33[0] = 0;
  v33[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v33, (int)(uintptr_t)(gameswf::ASString::length));
  v34[0] = 6;
  v34[1] = 0;
  v35 = 0;
  v2 = (gameswf::ASProperty::Self *)opNew(0x14u);
  gameswf::ASProperty::Construct(v2, (const gameswf::ASValue::Self *)v33, (const gameswf::ASValue::Self *)v32);
  v36 = v2;
  gameswf::RefCounted::addRef(v2);
  sub_776320((gameswf::String::Self *)v112, (gameswf::Self *)"length");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v1,
    (const gameswf::StringI::Self *)v112,
    (const gameswf::ASValue::Self *)v34);
  sub_59CE50((int)(uintptr_t)(v112));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v34);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v33);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v32);
  v8 = (gameswf::ASValue::Self *)gameswf::new_standard_method_map(6);
  v37[0] = 0;
  v37[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v37, (int)(uintptr_t)(gameswf::ASScriptFunctionCall));
  sub_776320((gameswf::String::Self *)v113, (gameswf::Self *)"call");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v8,
    (const gameswf::StringI::Self *)v113,
    (const gameswf::ASValue::Self *)v37);
  sub_59CE50((int)(uintptr_t)(v113));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v37);
  v9 = (gameswf::ASValue::Self *)gameswf::new_standard_method_map(5);
  v38[0] = 0;
  v38[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v38, (int)(uintptr_t)(gameswf::ASCppFunctionCall));
  sub_776320((gameswf::String::Self *)v114, (gameswf::Self *)"call");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v9,
    (const gameswf::StringI::Self *)v114,
    (const gameswf::ASValue::Self *)v38);
  sub_59CE50((int)(uintptr_t)(v114));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v38);
  v3 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::new_standard_method_map(7);
  v39[0] = 0;
  v39[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v39, (int)(uintptr_t)(gameswf::as3FunctionCall));
  sub_776320((gameswf::String::Self *)v115, (gameswf::Self *)"call");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v3,
    (const gameswf::StringI::Self *)v115,
    (const gameswf::ASValue::Self *)v39);
  sub_59CE50((int)(uintptr_t)(v115));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v39);
  v4 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::new_standard_method_map(1);
  v40[0] = 0;
  v40[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v40, (int)(uintptr_t)(gameswf::ASSprite::play));
  sub_776320((gameswf::String::Self *)v116, (gameswf::Self *)"play");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v116,
    (const gameswf::ASValue::Self *)v40);
  sub_59CE50((int)(uintptr_t)(v116));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v40);
  v41[0] = 0;
  v41[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v41, (int)(uintptr_t)(gameswf::ASSprite::stop));
  sub_776320((gameswf::String::Self *)v117, (gameswf::Self *)"stop");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v117,
    (const gameswf::ASValue::Self *)v41);
  sub_59CE50((int)(uintptr_t)(v117));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v41);
  v42[0] = 0;
  v42[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v42, (int)(uintptr_t)(gameswf::ASSprite::gotoAndStop));
  sub_776320((gameswf::String::Self *)v118, (gameswf::Self *)"gotoAndStop");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v118,
    (const gameswf::ASValue::Self *)v42);
  sub_59CE50((int)(uintptr_t)(v118));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v42);
  v43[0] = 0;
  v43[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v43, (int)(uintptr_t)(gameswf::ASSprite::gotoAndPlay));
  sub_776320((gameswf::String::Self *)v119, (gameswf::Self *)"gotoAndPlay");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v119,
    (const gameswf::ASValue::Self *)v43);
  sub_59CE50((int)(uintptr_t)(v119));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v43);
  v44[0] = 0;
  v44[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v44, (int)(uintptr_t)(gameswf::ASSprite::nextFrame));
  sub_776320((gameswf::String::Self *)v120, (gameswf::Self *)"nextFrame");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v120,
    (const gameswf::ASValue::Self *)v44);
  sub_59CE50((int)(uintptr_t)(v120));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v44);
  v45[0] = 0;
  v45[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v45, (int)(uintptr_t)(gameswf::ASSprite::prevFrame));
  sub_776320((gameswf::String::Self *)v121, (gameswf::Self *)"prevFrame");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v121,
    (const gameswf::ASValue::Self *)v45);
  sub_59CE50((int)(uintptr_t)(v121));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v45);
  v46[0] = 0;
  v46[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v46, (int)(uintptr_t)(gameswf::ASSprite::getBytesLoaded));
  sub_776320((gameswf::String::Self *)v122, (gameswf::Self *)"getBytesLoaded");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v122,
    (const gameswf::ASValue::Self *)v46);
  sub_59CE50((int)(uintptr_t)(v122));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v46);
  v47[0] = 0;
  v47[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v47, (int)(uintptr_t)(gameswf::ASSprite::getBytesTotal));
  sub_776320((gameswf::String::Self *)v123, (gameswf::Self *)"getBytesTotal");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v123,
    (const gameswf::ASValue::Self *)v47);
  sub_59CE50((int)(uintptr_t)(v123));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v47);
  v48[0] = 0;
  v48[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v48, (int)(uintptr_t)(gameswf::ASSprite::swapDepths));
  sub_776320((gameswf::String::Self *)v124, (gameswf::Self *)"swapDepths");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v124,
    (const gameswf::ASValue::Self *)v48);
  sub_59CE50((int)(uintptr_t)(v124));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v48);
  v49[0] = 0;
  v49[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v49, (int)(uintptr_t)(gameswf::ASSprite::duplicateMovieClip));
  sub_776320((gameswf::String::Self *)v125, (gameswf::Self *)"duplicateMovieClip");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v125,
    (const gameswf::ASValue::Self *)v49);
  sub_59CE50((int)(uintptr_t)(v125));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v49);
  v50[0] = 0;
  v50[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v50, (int)(uintptr_t)(gameswf::ASSprite::getDepth));
  sub_776320((gameswf::String::Self *)v126, (gameswf::Self *)"getDepth");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v126,
    (const gameswf::ASValue::Self *)v50);
  sub_59CE50((int)(uintptr_t)(v126));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v50);
  v51[0] = 0;
  v51[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v51, (int)(uintptr_t)(gameswf::ASSprite::createEmptyMovieClip));
  sub_776320((gameswf::String::Self *)v127, (gameswf::Self *)"createEmptyMovieClip");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v127,
    (const gameswf::ASValue::Self *)v51);
  sub_59CE50((int)(uintptr_t)(v127));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v51);
  v52[0] = 0;
  v52[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v52, (int)(uintptr_t)(gameswf::ASSprite::removeMovieClip));
  sub_776320((gameswf::String::Self *)v128, (gameswf::Self *)"removeMovieClip");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v128,
    (const gameswf::ASValue::Self *)v52);
  sub_59CE50((int)(uintptr_t)(v128));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v52);
  v53[0] = 0;
  v53[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v53, (int)(uintptr_t)(gameswf::ASSprite::hitTest));
  sub_776320((gameswf::String::Self *)v129, (gameswf::Self *)"hitTest");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v129,
    (const gameswf::ASValue::Self *)v53);
  sub_59CE50((int)(uintptr_t)(v129));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v53);
  v54[0] = 0;
  v54[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v54, (int)(uintptr_t)(gameswf::ASSprite::getBounds));
  sub_776320((gameswf::String::Self *)v130, (gameswf::Self *)"getBounds");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v130,
    (const gameswf::ASValue::Self *)v54);
  sub_59CE50((int)(uintptr_t)(v130));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v54);
  v55[0] = 0;
  v55[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v55, (int)(uintptr_t)(gameswf::ASSprite::localToGlobal));
  sub_776320((gameswf::String::Self *)v131, (gameswf::Self *)"localToGlobal");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v131,
    (const gameswf::ASValue::Self *)v55);
  sub_59CE50((int)(uintptr_t)(v131));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v55);
  v56[0] = 0;
  v56[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v56, (int)(uintptr_t)(gameswf::ASSprite::globalToLocal));
  sub_776320((gameswf::String::Self *)v132, (gameswf::Self *)"globalToLocal");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v132,
    (const gameswf::ASValue::Self *)v56);
  sub_59CE50((int)(uintptr_t)(v132));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v56);
  v57[0] = 0;
  v57[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v57, (int)(uintptr_t)(gameswf::ASSprite::startDrag));
  sub_776320((gameswf::String::Self *)v133, (gameswf::Self *)"startDrag");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v133,
    (const gameswf::ASValue::Self *)v57);
  sub_59CE50((int)(uintptr_t)(v133));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v57);
  v58[0] = 0;
  v58[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v58, (int)(uintptr_t)(gameswf::ASSprite::stopDrag));
  sub_776320((gameswf::String::Self *)v134, (gameswf::Self *)"stopDrag");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v134,
    (const gameswf::ASValue::Self *)v58);
  sub_59CE50((int)(uintptr_t)(v134));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v58);
  v59[0] = 0;
  v59[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v59, (int)(uintptr_t)(gameswf::ASSprite::loadMovie));
  sub_776320((gameswf::String::Self *)v135, (gameswf::Self *)"loadMovie");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v135,
    (const gameswf::ASValue::Self *)v59);
  sub_59CE50((int)(uintptr_t)(v135));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
  v60[0] = 0;
  v60[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v60, (int)(uintptr_t)(gameswf::ASSprite::unloadMovie));
  sub_776320((gameswf::String::Self *)v136, (gameswf::Self *)"unloadMovie");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v136,
    (const gameswf::ASValue::Self *)v60);
  sub_59CE50((int)(uintptr_t)(v136));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v60);
  v61[0] = 0;
  v61[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v61, (int)(uintptr_t)(gameswf::ASSprite::getNextHighestDepth));
  sub_776320((gameswf::String::Self *)v137, (gameswf::Self *)"getNextHighestDepth");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v137,
    (const gameswf::ASValue::Self *)v61);
  sub_59CE50((int)(uintptr_t)(v137));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v61);
  v62[0] = 0;
  v62[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v62, (int)(uintptr_t)(gameswf::ASSprite::getInstanceAtDepth));
  sub_776320((gameswf::String::Self *)v138, (gameswf::Self *)"getInstanceAtDepth");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v138,
    (const gameswf::ASValue::Self *)v62);
  sub_59CE50((int)(uintptr_t)(v138));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v62);
  v63[0] = 0;
  v63[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v63, (int)(uintptr_t)(gameswf::ASSprite::createTextField));
  sub_776320((gameswf::String::Self *)v139, (gameswf::Self *)"createTextField");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v139,
    (const gameswf::ASValue::Self *)v63);
  sub_59CE50((int)(uintptr_t)(v139));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v63);
  v64[0] = 0;
  v64[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v64, (int)(uintptr_t)(gameswf::ASSprite::attachMovie));
  sub_776320((gameswf::String::Self *)v140, (gameswf::Self *)"attachMovie");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v140,
    (const gameswf::ASValue::Self *)v64);
  sub_59CE50((int)(uintptr_t)(v140));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v64);
  v65[0] = 0;
  v65[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v65, (int)(uintptr_t)(gameswf::ASSprite::beginFill));
  sub_776320((gameswf::String::Self *)v141, (gameswf::Self *)"beginFill");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v141,
    (const gameswf::ASValue::Self *)v65);
  sub_59CE50((int)(uintptr_t)(v141));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v65);
  v66[0] = 0;
  v66[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v66, (int)(uintptr_t)(gameswf::ASSprite::endFill));
  sub_776320((gameswf::String::Self *)v142, (gameswf::Self *)"endFill");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v142,
    (const gameswf::ASValue::Self *)v66);
  sub_59CE50((int)(uintptr_t)(v142));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v66);
  v67[0] = 0;
  v67[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v67, (int)(uintptr_t)(gameswf::ASSprite::lineTo));
  sub_776320((gameswf::String::Self *)v143, (gameswf::Self *)"lineTo");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v143,
    (const gameswf::ASValue::Self *)v67);
  sub_59CE50((int)(uintptr_t)(v143));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v67);
  v68[0] = 0;
  v68[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v68, (int)(uintptr_t)(gameswf::ASSprite::moveTo));
  sub_776320((gameswf::String::Self *)v144, (gameswf::Self *)"moveTo");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v144,
    (const gameswf::ASValue::Self *)v68);
  sub_59CE50((int)(uintptr_t)(v144));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v68);
  v69[0] = 0;
  v69[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v69, (int)(uintptr_t)(gameswf::ASSprite::curveTo));
  sub_776320((gameswf::String::Self *)v145, (gameswf::Self *)"curveTo");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v145,
    (const gameswf::ASValue::Self *)v69);
  sub_59CE50((int)(uintptr_t)(v145));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v69);
  v70[0] = 0;
  v70[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v70, (int)(uintptr_t)(gameswf::ASSprite::clear));
  sub_776320((gameswf::String::Self *)v146, (gameswf::Self *)"clear");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v146,
    (const gameswf::ASValue::Self *)v70);
  sub_59CE50((int)(uintptr_t)(v146));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v70);
  v71[0] = 0;
  v71[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v71, (int)(uintptr_t)(gameswf::ASSprite::lineStyle));
  sub_776320((gameswf::String::Self *)v147, (gameswf::Self *)"lineStyle");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v147,
    (const gameswf::ASValue::Self *)v71);
  sub_59CE50((int)(uintptr_t)(v147));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v71);
  v72[0] = 0;
  v72[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v72, (int)(uintptr_t)(gameswf::ASSprite::setFPS));
  sub_776320((gameswf::String::Self *)v148, (gameswf::Self *)"setFPS");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v4,
    (const gameswf::StringI::Self *)v148,
    (const gameswf::ASValue::Self *)v72);
  sub_59CE50((int)(uintptr_t)(v148));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v72);
  v5 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::new_standard_method_map(8);
  v73[0] = 0;
  v73[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v73, (int)(uintptr_t)(gameswf::ASTextField::setTextFormat));
  sub_776320((gameswf::String::Self *)v149, (gameswf::Self *)"setTextFormat");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v5,
    (const gameswf::StringI::Self *)v149,
    (const gameswf::ASValue::Self *)v73);
  sub_59CE50((int)(uintptr_t)(v149));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v73);
  v74[0] = 0;
  v74[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v74, (int)(uintptr_t)(gameswf::ASTextField::getTextFormat));
  sub_776320((gameswf::String::Self *)v150, (gameswf::Self *)"getTextFormat");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v5,
    (const gameswf::StringI::Self *)v150,
    (const gameswf::ASValue::Self *)v74);
  sub_59CE50((int)(uintptr_t)(v150));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v74);
  v75[0] = 0;
  v75[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v75, (int)(uintptr_t)(gameswf::ASTextField::appendText));
  sub_776320((gameswf::String::Self *)v151, (gameswf::Self *)"appendText");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v5,
    (const gameswf::StringI::Self *)v151,
    (const gameswf::ASValue::Self *)v75);
  sub_59CE50((int)(uintptr_t)(v151));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v75);
  v76[0] = 0;
  v76[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v76, (int)(uintptr_t)(gameswf::ASTextField::getCharBoundaries));
  sub_776320((gameswf::String::Self *)v152, (gameswf::Self *)"getCharBoundaries");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v5,
    (const gameswf::StringI::Self *)v152,
    (const gameswf::ASValue::Self *)v76);
  sub_59CE50((int)(uintptr_t)(v152));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v76);
  v77[0] = 0;
  v77[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v77, (int)(uintptr_t)(gameswf::ASTextField::getLineText));
  sub_776320((gameswf::String::Self *)v153, (gameswf::Self *)"getLineText");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v5,
    (const gameswf::StringI::Self *)v153,
    (const gameswf::ASValue::Self *)v77);
  sub_59CE50((int)(uintptr_t)(v153));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v77);
  v6 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::new_standard_method_map(9);
  v78[0] = 0;
  v78[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v78, (int)(uintptr_t)((int (*)(int))gameswf::ASArray::toString));
  sub_776320((gameswf::String::Self *)v154, (gameswf::Self *)"toString");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v154,
    (const gameswf::ASValue::Self *)v78);
  sub_59CE50((int)(uintptr_t)(v154));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v78);
  v79[0] = 0;
  v79[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v79, (int)(uintptr_t)((int (*)(int))gameswf::ASArray::push));
  sub_776320((gameswf::String::Self *)v155, (gameswf::Self *)"push");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v155,
    (const gameswf::ASValue::Self *)v79);
  sub_59CE50((int)(uintptr_t)(v155));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v79);
  v80[0] = 0;
  v80[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v80, (int)(uintptr_t)((int (*)(gameswf::ASArray::Self *, gameswf::ASValue::Self *))gameswf::ASArray::pop));
  sub_776320((gameswf::String::Self *)v156, (gameswf::Self *)&off_1B29C43);
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v156,
    (const gameswf::ASValue::Self *)v80);
  sub_59CE50((int)(uintptr_t)(v156));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v80);
  v81[0] = 0;
  v81[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v81, (int)(uintptr_t)(gameswf::ASArray::concat));
  sub_776320((gameswf::String::Self *)v157, (gameswf::Self *)"concat");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v157,
    (const gameswf::ASValue::Self *)v81);
  sub_59CE50((int)(uintptr_t)(v157));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v81);
  v82[0] = 0;
  v82[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v82, (int)(uintptr_t)(gameswf::ASArray::join));
  sub_776320((gameswf::String::Self *)v158, (gameswf::Self *)"join");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v158,
    (const gameswf::ASValue::Self *)v82);
  sub_59CE50((int)(uintptr_t)(v158));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v82);
  v83[0] = 0;
  v83[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v83, (int)(uintptr_t)(gameswf::ASArray::reverse));
  sub_776320((gameswf::String::Self *)v159, (gameswf::Self *)"reverse");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v159,
    (const gameswf::ASValue::Self *)v83);
  sub_59CE50((int)(uintptr_t)(v159));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v83);
  v84[0] = 0;
  v84[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v84, (int)(uintptr_t)(gameswf::ASArray::sort));
  sub_776320((gameswf::String::Self *)v160, (gameswf::Self *)"sort");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v160,
    (const gameswf::ASValue::Self *)v84);
  sub_59CE50((int)(uintptr_t)(v160));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v84);
  v85[0] = 0;
  v85[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v85, (int)(uintptr_t)(gameswf::ASArray::sortOn));
  sub_776320((gameswf::String::Self *)v161, (gameswf::Self *)"sortOn");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v161,
    (const gameswf::ASValue::Self *)v85);
  sub_59CE50((int)(uintptr_t)(v161));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v85);
  v86[0] = 0;
  v86[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v86, (int)(uintptr_t)(gameswf::ASArray::shift));
  sub_776320((gameswf::String::Self *)v162, (gameswf::Self *)"shift");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v162,
    (const gameswf::ASValue::Self *)v86);
  sub_59CE50((int)(uintptr_t)(v162));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v86);
  v87[0] = 0;
  v87[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v87, (int)(uintptr_t)(gameswf::ASArray::unshift));
  sub_776320((gameswf::String::Self *)v163, (gameswf::Self *)"unshift");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v163,
    (const gameswf::ASValue::Self *)v87);
  sub_59CE50((int)(uintptr_t)(v163));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v87);
  v88[0] = 0;
  v88[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v88, (int)(uintptr_t)(gameswf::ASArray::slice));
  sub_776320((gameswf::String::Self *)v164, (gameswf::Self *)"slice");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v164,
    (const gameswf::ASValue::Self *)v88);
  sub_59CE50((int)(uintptr_t)(v164));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v88);
  v89[0] = 0;
  v89[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v89, (int)(uintptr_t)(gameswf::ASArray::splice));
  sub_776320((gameswf::String::Self *)v165, (gameswf::Self *)"splice");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v165,
    (const gameswf::ASValue::Self *)v89);
  sub_59CE50((int)(uintptr_t)(v165));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v89);
  v90[0] = 0;
  v90[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v90, (int)(uintptr_t)(gameswf::ASArray::indexOf));
  sub_776320((gameswf::String::Self *)v166, (gameswf::Self *)"indexOf");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v166,
    (const gameswf::ASValue::Self *)v90);
  sub_59CE50((int)(uintptr_t)(v166));
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v90);
  v91[0] = 0;
  v91[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v91, (int)(uintptr_t)(gameswf::ASArray::lastIndexOf));
  sub_776320((gameswf::String::Self *)v167, (gameswf::Self *)"lastIndexOf");
  gameswf::hash_gameswf_StringI_gameswf_636a21::add(
    v6,
    (const gameswf::StringI::Self *)v167,
    (const gameswf::ASValue::Self *)v91);
  sub_59CE50((int)(uintptr_t)(v167));
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v91);
}

// ----------------------------------------------------------------------------
// Function: gameswf::registerNativeFunction  (binary VA: 0x10bacb0)
// Original: gameswf::registerNativeFunction
// ----------------------------------------------------------------------------
int gameswf::registerNativeFunction(gameswf::Self *a1, int a2)
{
  gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int i;
  char *v8;
  int v9;
  uint8_t *v11;
  int v12;
  int v13;
  int v14;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *_g4_t_v15;
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef gameswf::String::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[12];
  typedef char _g4_t_v22;
  typedef uint8_t _g4_t_v23[15];
  typedef unsigned int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v17)) > _g4_s2 ? (4u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v21)) > _g4_s6 ? (32u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v22)) > _g4_s7 ? (44u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (45u + sizeof(_g4_t_v23)) > _g4_s8 ? (45u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v24)) > _g4_s9 ? (60u + sizeof(_g4_t_v24)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 45u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);

  v15 = (gameswf::hash<gameswf::StringI::Self, gameswf::ASValue::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)gameswf::new_standard_method_map(0);
  v21[0] = 0;
  v21[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v21, a2);
  sub_776320((gameswf::String::Self *)&v22, a1);
  v2 = v15;
  v3 = *(uint32_t *)v15;
  if ( *(uint32_t *)v15 == 0 )
    goto LABEL_28;
  if ( (uint8_t *)(v24 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( v22 == -1 )
    {
      v11 = *(uint8_t **)&v23[11];
      v12 = *(uint32_t *)&v23[3] - 1;
    }
    else
    {
      v11 = v23;
      v12 = v22 - 1;
    }
    v4 = 5381;
    v13 = 5381;
    if ( v12 > 0 )
    {
      do
      {
        --v12;
        v20 = 33 * v13;
        v14 = (uint8_t)v11[v12] + 32;
        if ( (uint8_t)(v11[v12] - 65) > 0x19u )
          v14 = (uint8_t)v11[v12];
        v13 = v20 ^ v14;
      }
      while ( v12 != 0 );
      v2 = v15;
      v13 = v13 << 9 >> 9;
      v4 = v13;
    }
    v24 = v13 & 0x7FFFFF | v24 & 0xFF800000;
    v3 = *(uint32_t *)v2;
  }
  else
  {
    v4 = (int)(v24 << 9) >> 9;
  }
  v18 = *(uint32_t *)(v3 + 4);
  v5 = v4 & v18;
  v6 = v3 + 40 * (v4 & v18) + 8;
  if ( *(uint32_t *)v6 == -2 || v5 != (*(uint32_t *)(v3 + 40 * (v4 & v18) + 12) & v18) )
    goto LABEL_28;
  for ( i = *(uint32_t *)(v3 + 40 * (v4 & v18) + 12); ; i = *(uint32_t *)(v6 + 4) )
  {
    if ( i == v4 )
    {
      if ( &v22 == (char *)(v6 + 8) )
        break;
      v8 = (char *)(v23);
      if ( v22 == -1 )
        v8 = *(char **)&v23[11];
      v19 = *(uint8_t *)(v6 + 8) == 0xFF ? *(gameswf::String::Self **)(v6 + 20) : (gameswf::String::Self *)(v6 + 9);
      v16 = v2;
      v17 = v4;
      v9 = gameswf::String::stricmp(v19, v8);
      v2 = v16;
      v4 = v17;
      if ( v9 == 0 )
        break;
    }
    v5 = *(uint32_t *)v6;
    if ( *(uint32_t *)v6 == -1 )
      goto LABEL_28;
    v6 = *(uint32_t *)v2 + 40 * v5 + 8;
  }
  if ( v5 >= 0 )
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)(*(uint32_t *)v2 + 40 * v5 + 8 + 28), (const gameswf::ASValue::Self *)v21);
  else
LABEL_28:
    gameswf::hash_gameswf_StringI_gameswf_636a21::add(
      v2,
      (const gameswf::StringI::Self *)&v22,
      (const gameswf::ASValue::Self *)v21);
  sub_59CE50((int)(uintptr_t)(&v22));
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v21);
}

// ----------------------------------------------------------------------------
// Function: gameswf::getStaticString  (binary VA: 0x10bb530)
// Original: gameswf::getStaticString
// ----------------------------------------------------------------------------
gameswf::String::Self * gameswf::getStaticString(gameswf::Self *self)
{
  int index;
  gameswf::String::Self *v2;
  char v4;
  int v5;
  int v6;
  int v7;
  const char *src;
  int v9;
  int v10;
  int v11;
  gameswf::String::Self *v12;
  gameswf::Self *v13;
  typedef char *_g4_t_v14;
  typedef gameswf::String::Self *_g4_t_v15;
  typedef int _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);

  v14 = (char *)self;
  index = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
            &dword_20E5300,
            &v14);
  if ( index >= 0 )
    return *(gameswf::String::Self **)(dword_20E5300 + 16 * index + 20);
  v4 = *(uint8_t *)self;
  if ( *(uint8_t *)self == 0xFF )
  {
    if ( *((uint32_t *)self + 1) - 1 > 13 )
      goto LABEL_6;
LABEL_19:
    v12 = (gameswf::String::Self *)gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)&dword_20E5304, 20);
    v2 = v12;
    if ( *(uint8_t *)self == 0xFF )
      v13 = *((gameswf::Self **)self + 3);
    else
      v13 = (gameswf::Self *)((char *)self + 1);
    if ( v12 != nullptr )
    {
      sub_776320(v12, v13);
      *((uint8_t *)v2 + 18) |= 0x80u;
    }
    goto LABEL_15;
  }
  if ( *(char *)self - 1 <= 13 )
    goto LABEL_19;
LABEL_6:
  if ( v4 == -1 )
    v5 = *((uint32_t *)self + 1) - 1;
  else
    v5 = v4 - 1;
  v6 = gameswf::PermanentAllocator::allocate((gameswf::PermanentAllocator::Self *)&dword_20E5304, v5 + 21);
  v2 = (gameswf::String::Self *)v6;
  if ( v6 != 0 )
  {
    *(uint8_t *)v6 = 1;
    *(uint8_t *)(v6 + 1) = 0;
    v7 = *(uint32_t *)(v6 + 16) | 0x7FFFFF;
    *((uint32_t *)v2 + 4) = v7;
    *((uint8_t *)v2 + 19) = HIBYTE(v7) | 1;
    *((uint8_t *)v2 + 18) = BYTE2(v7) | 0x80;
  }
  src = (char *)self + 1;
  if ( *(uint8_t *)self == 0xFF )
    src = *((const char **)self + 3);
  strcpy((char *)v2 + 20, src);
  if ( *(uint8_t *)self == 0xFF )
    v9 = *((uint32_t *)self + 1) - 1;
  else
    v9 = *(char *)self - 1;
  v10 = v9 + 1;
  gameswf::String::resize(v2, 0);
  *(uint8_t *)v2 = -1;
  *((uint32_t *)v2 + 3) = (uint32_t)(uintptr_t)((char *)v2 + 20);
  *((uint32_t *)v2 + 1) = v10;
  *((uint32_t *)v2 + 2) = v10;
  *((uint8_t *)v2 + 19) &= ~1u;
LABEL_15:
  v15 = v2;
  v11 = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
          &dword_20E5300,
          (char **)&v15);
  if ( v11 < 0 )
  {
    v16[0] = 0;
    gameswf::hash_gameswf_StringPointer_ga_128477::add(
      (int **)&dword_20E5300,
      (char **)&v15,
      v16);
    v11 = gameswf::hash_gameswf_StringPointer_ga_128477::find_index(
            &dword_20E5300,
            (char **)&v15);
  }
  *(uint32_t *)(dword_20E5300 + 16 * v11 + 20) = (uint32_t)(uintptr_t)(v2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::isQuadEdgeIntersectingBound  (binary VA: 0x10c0650)
// Original: gameswf::isQuadEdgeIntersectingBound
// ----------------------------------------------------------------------------
bool gameswf::isQuadEdgeIntersectingBound(gameswf::Self *self, const gameswf::Point::Self *a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm1_4
  float v10; // xmm6_4
  double v11; // xmm6_8
  bool v12;
  __m128 v13;
  __m128 v14;
  uint64_t v15; // xmm2_8
  __m128 v16;
  uint64_t v17; // xmm6_8^8
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  int v22;
  int v23;
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  int v28;
  int v29;
  float v30; // xmm2_4
  float v31; // xmm4_4
  float v32; // xmm2_4
  float v33; // xmm3_4
  int v34;
  int v35;
  bool result;
  float v37; // xmm2_4
  int v38;
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  int v42;
  double v43;
  float v44;
  float v45;
  float v46;
  __m128 v47;
  __m128 v48;

  v2 = *(float *)self;
  v3 = *(float *)a2;
  v4 = *((float *)self + 1);
  if ( *(float *)a2 <= *(float *)self
    && v2 <= *((float *)a2 + 1)
    && v4 >= *((float *)a2 + 2)
    && v4 <= *((float *)a2 + 3) )
  {
    return true;
  }
  v5 = *((float *)self + 2);
  v6 = *((float *)self + 3);
  if ( v3 <= v5 && v5 <= *((float *)a2 + 1) && v6 >= *((float *)a2 + 2) && v6 <= *((float *)a2 + 3) )
    return true;
  v46 = *((float *)self + 5);
  v7 = *((float *)self + 4);
  if ( v3 <= v7 && v7 <= *((float *)a2 + 1) && v46 >= *((float *)a2 + 2) && v46 <= *((float *)a2 + 3) )
    return true;
  v44 = *((float *)self + 7);
  v8 = *((float *)self + 6);
  v45 = v8;
  if ( v3 <= v8 && v8 <= *((float *)a2 + 1) && v44 >= *((float *)a2 + 2) && v44 <= *((float *)a2 + 3) )
    return true;
  v43 = atan2((float)(v6 - v46), (float)(v5 - v7));
  v9 = atan2((float)(v4 - v44), (float)(v2 - v8));
  v10 = v43;
  v11 = fabs(v10 - v9);
  if ( v11 < 0.7853981633974483 || (v12 = true, v11 > 2.356194490192345) )
  {
    v12 = false;
    if ( v11 >= 3.9269908169872414 )
      v12 = v11 <= 5.497787143782138;
  }
g4_m128_lane<uint64_t>(v13, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v2)), g4_m128_from<__m128>(LODWORD(v4))), 0);
g4_m128_lane<uint64_t>(v14, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v5)), g4_m128_from<__m128>(LODWORD(v6))), 0);
  v15 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v45)), g4_m128_from<__m128>(LODWORD(v44))), 0);
g4_m128_lane<uint64_t>(v16, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v7)), g4_m128_from<__m128>(LODWORD(v46))), 0);
  v17 = v15;
  if ( v12 )
  {
g4_m128_lane<uint64_t>(v14, 1) = v15;
g4_m128_lane<uint64_t>(v16, 1) =g4_m128_lane<uint64_t>(v13, 0);
    v47 = v14;
    v48 = v16;
  }
  else
  {
g4_m128_lane<uint64_t>(v13, 1) = v15;
g4_m128_lane<uint64_t>(v14, 1) =g4_m128_lane<uint64_t>(v16, 0);
    v47 = v13;
    v48 = v14;
  }
  if ( fabs(g4_m128_lane<float>(v14, 1) -g4_m128_lane<float>(v13, 1)) < 0.0001f )
  {
    if (g4_m128_lane<float>(v13, 1) >= *((float *)a2 + 2) )
    {
      result = true;
      if (g4_m128_lane<float>(v13, 1) <= *((float *)a2 + 3) )
        return result;
    }
  }
  else if ( fabs(g4_m128_lane<float>(v14, 0) -g4_m128_lane<float>(v13, 0)) < 0.0001f )
  {
    if (g4_m128_lane<float>(v13, 0) >= *(float *)a2 )
    {
      result = true;
      if (g4_m128_lane<float>(v13, 0) <= *((float *)a2 + 1) )
        return result;
    }
  }
  else
  {
    v18 = (float)(g4_m128_lane<float>(v14, 1) -g4_m128_lane<float>(v13, 1)) / (float)(g4_m128_lane<float>(v14, 0) -g4_m128_lane<float>(v13, 0));
    v19 = (float)(g4_m128_lane<float>(v13, 1) - (float)(g4_m128_lane<float>(v13, 0) * v18)) + (float)(*(float *)a2 * v18);
    v20 = (float)(g4_m128_lane<float>(v13, 1) - (float)(g4_m128_lane<float>(v13, 0) * v18)) + (float)(v18 * *((float *)a2 + 1));
    v21 = *((float *)a2 + 2);
    if ( v19 >= v21 )
      v22 = v19 > *((float *)a2 + 3);
    else
      v22 = 2;
    if ( v20 >= v21 )
      v23 = v20 > *((float *)a2 + 3);
    else
      v23 = 2;
    if ( v22 != v23 || v22 == 0 )
      return true;
  }
  if ( fabs(*((float *)&v17 + 1) -g4_m128_lane<float>(v16, 1)) < 0.0001f )
  {
    if (g4_m128_lane<float>(v16, 1) >= *((float *)a2 + 2) )
    {
      result = true;
      if (g4_m128_lane<float>(v16, 1) <= *((float *)a2 + 3) )
        return result;
    }
  }
  else if ( fabs(*(float *)&v17 -g4_m128_lane<float>(v16, 0)) < 0.0001f )
  {
    if (g4_m128_lane<float>(v16, 0) >= *(float *)a2 )
    {
      result = true;
      if (g4_m128_lane<float>(v16, 0) <= *((float *)a2 + 1) )
        return result;
    }
  }
  else
  {
    v24 = (float)(*((float *)&v17 + 1) -g4_m128_lane<float>(v16, 1)) / (float)(*(float *)&v17 -g4_m128_lane<float>(v16, 0));
    v25 = (float)(g4_m128_lane<float>(v16, 1) - (float)(g4_m128_lane<float>(v16, 0) * v24)) + (float)(*(float *)a2 * v24);
    v26 = (float)(g4_m128_lane<float>(v16, 1) - (float)(g4_m128_lane<float>(v16, 0) * v24)) + (float)(v24 * *((float *)a2 + 1));
    v27 = *((float *)a2 + 2);
    if ( v25 >= v27 )
      v28 = v25 > *((float *)a2 + 3);
    else
      v28 = 2;
    if ( v26 >= v27 )
      v29 = v26 > *((float *)a2 + 3);
    else
      v29 = 2;
    if ( v28 != v29 || v28 == 0 )
      return true;
  }
  if ( fabs(g4_m128_lane<float>(v47, 3) -g4_m128_lane<float>(v47, 1)) < 0.0001f )
  {
    if (g4_m128_lane<float>(v47, 1) >= *((float *)a2 + 2) )
    {
      result = true;
      if (g4_m128_lane<float>(v47, 1) <= *((float *)a2 + 3) )
        return result;
    }
  }
  else
  {
    if ( fabs(g4_m128_lane<float>(v47, 2) -g4_m128_lane<float>(v47, 0)) >= 0.0001f )
    {
      v30 = (float)(g4_m128_lane<float>(v47, 3) -g4_m128_lane<float>(v47, 1)) / (float)(g4_m128_lane<float>(v47, 2) -g4_m128_lane<float>(v47, 0));
      v31 = (float)(g4_m128_lane<float>(v47, 1) - (float)(g4_m128_lane<float>(v47, 0) * v30)) + (float)(*(float *)a2 * v30);
      v32 = (float)(g4_m128_lane<float>(v47, 1) - (float)(g4_m128_lane<float>(v47, 0) * v30)) + (float)(v30 * *((float *)a2 + 1));
      v33 = *((float *)a2 + 2);
      if ( v31 >= v33 )
        v34 = v31 > *((float *)a2 + 3);
      else
        v34 = 2;
      if ( v32 >= v33 )
        v35 = v32 > *((float *)a2 + 3);
      else
        v35 = 2;
      if ( v34 == v35 && v34 != 0 )
        goto LABEL_38;
      return true;
    }
    if (g4_m128_lane<float>(v47, 0) >= *(float *)a2 )
    {
      result = true;
      if (g4_m128_lane<float>(v47, 0) <= *((float *)a2 + 1) )
        return result;
    }
  }
LABEL_38:
  if ( fabs(g4_m128_lane<float>(v48, 3) -g4_m128_lane<float>(v48, 1)) < 0.0001f )
  {
    if (g4_m128_lane<float>(v48, 1) < *((float *)a2 + 2) )
      return false;
    result = true;
    if (g4_m128_lane<float>(v48, 1) > *((float *)a2 + 3) )
      return false;
    return result;
  }
  if ( fabs(g4_m128_lane<float>(v48, 2) -g4_m128_lane<float>(v48, 0)) >= 0.0001f )
  {
    v37 = (float)(g4_m128_lane<float>(v48, 3) -g4_m128_lane<float>(v48, 1)) / (float)(g4_m128_lane<float>(v48, 2) -g4_m128_lane<float>(v48, 0));
    v38 = 2;
    v39 = *((float *)a2 + 2);
    v40 = (float)(g4_m128_lane<float>(v48, 1) - (float)(g4_m128_lane<float>(v48, 0) * v37)) + (float)(*(float *)a2 * v37);
    v41 = (float)(g4_m128_lane<float>(v48, 1) - (float)(g4_m128_lane<float>(v48, 0) * v37)) + (float)(v37 * *((float *)a2 + 1));
    if ( v40 >= v39 )
      v38 = v40 > *((float *)a2 + 3);
    v42 = 2;
    if ( v41 >= v39 )
      v42 = v41 > *((float *)a2 + 3);
    return v38 != v42 || v38 == 0;
  }
  if (g4_m128_lane<float>(v48, 0) < *(float *)a2 )
    return false;
  result = true;
  if (g4_m128_lane<float>(v48, 0) > *((float *)a2 + 1) )
    return false;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getBatchColor  (binary VA: 0x10c3210)
// Original: gameswf::getBatchColor
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::getBatchColor(__m128d a1, float a2, gameswf::Self *self, int a4)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  __m128d v6;
  __m128d v7;
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v13;

  v4 = 1.0 - (float)((float)(a4 % 10) * 0.071428575f);
  v5 = (float)(127 * a4 % 360) * 0.016666668f;
  g4_m128_lane_ref<double>(a1, 0) = v5;
  v6 = _mm_and_pd(a1, g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL));
  if ( g4_m128_lane_ref<double>(v6, 0) < 4503599627370496.0 )
  {
    g4_m128_lane_ref<double>(v6, 0) = g4_m128_lane_ref<double>(v6, 0) + 4503599627370496.0 - 4503599627370496.0;
    v7 = _mm_or_pd(v6, _mm_andn_pd(g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL), a1));
    g4_m128_lane_ref<double>(a1, 0) = g4_m128_lane_ref<double>(v7, 0)
                    - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v7, a1), 0) & 0x3FF0000000000000LL);
  }
  v8 = v5 - (float)(int)g4_m128_lane_ref<double>(a1, 0);
  v9 = 1.0 - v8;
  v10 = v8 * v4;
  v11 = v9 * v4;
  switch ( (int)g4_m128_lane_ref<double>(a1, 0) % 6 )
  {
    case 0:
      a2 = v10;
      v13 = 0.0;
      break;
    case 1:
      a2 = 1.0 - (float)((float)(a4 % 10) * 0.071428575f);
      v13 = 0.0;
      v4 = v11;
      break;
    case 2:
      v13 = v10;
      a2 = 1.0 - (float)((float)(a4 % 10) * 0.071428575f);
      goto LABEL_4;
    case 3:
      v13 = 1.0 - (float)((float)(a4 % 10) * 0.071428575f);
      a2 = v11;
      v4 = 0.0;
      break;
    case 4:
      v13 = 1.0 - (float)((float)(a4 % 10) * 0.071428575f);
      v4 = v10;
      a2 = 0.0;
      break;
    case 5:
      v13 = v11;
      a2 = 0.0;
      break;
    default:
LABEL_4:
      v4 = 0.0;
      break;
  }
  *((uint8_t *)self + 3) = -1;
  *(uint8_t *)self = (int)(float)(v4 * 255.0);
  *((uint8_t *)self + 1) = (int)(float)(a2 * 255.0);
  *((uint8_t *)self + 2) = (int)(float)(255.0 * v13);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::normalize  (binary VA: 0x10c4f10)
// Original: gameswf::normalize
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::normalize(gameswf::Self *self)
{
  gameswf::Self *result;
  float v2; // xmm4_4
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm0_4

  result = self;
  v2 = *(float *)self;
  v3 = *((float *)self + 1);
  v4 = *((float *)self + 2);
  v5 = sqrt((float)((float)((float)(v3 * v3) + (float)(v2 * v2)) + (float)(v4 * v4)));
  if ( v5 != 0.0 )
  {
    *(float *)self = v2 * (float)(1.0 / v5);
    *((float *)self + 1) = v3 * (float)(1.0 / v5);
    *((float *)self + 2) = (float)(1.0 / v5) * v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::cross  (binary VA: 0x10c4f90)
// Original: gameswf::cross
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::cross(gameswf::Self *self, float *a2, float *a3)
{
  *a3 = (float)(a2[2] * *((float *)self + 1)) - (float)(a2[1] * *((float *)self + 2));
  a3[1] = (float)(*a2 * *((float *)self + 2)) - (float)(a2[2] * *(float *)self);
  a3[2] = (float)(a2[1] * *(float *)self) - (float)(*a2 * *((float *)self + 1));
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::swapBuffers  (binary VA: 0x10c5050)
// Original: gameswf::swapBuffers
// ----------------------------------------------------------------------------
void gameswf::swapBuffers()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::createRenderHandler  (binary VA: 0x10c79c0)
// Original: gameswf::createRenderHandler
// ----------------------------------------------------------------------------
int gameswf::createRenderHandler(int a1)
{
  int v1;

  v1 = opNew(0xB20u);
  gameswf::render_handler_glitch::Construct(v1, a1);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getGlobalMutex  (binary VA: 0x10d1e90)
// Original: gameswf::getGlobalMutex
// ----------------------------------------------------------------------------
void * gameswf::getGlobalMutex()
{
  return &unk_20E5564;
}

// ----------------------------------------------------------------------------
// Function: gameswf::collect_signed_char_8e8080  (binary VA: 0x10d9820)
// Original: gameswf::collect<signed char>
// ----------------------------------------------------------------------------
void gameswf::collect_signed_char_8e8080(gameswf::Self *self, const unsigned int *a2, unsigned int a3, const glitch::video::SVertexStream::Self *a4)
{
  gameswf::Self *v4;
  int v5;
  float *v6;
  char *v7;
  float v8; // xmm1_4
  char *v9;
  float v10; // xmm0_4
  int v11;
  char *v12;
  float v13; // xmm0_4
  float *v14;
  uint16_t v15;
  unsigned int v16;
  char *v17;
  char *v18;
  float v19; // xmm1_4
  char *v20;
  float v21; // xmm0_4
  int v22;
  unsigned int v23;
  char *v24;
  float v25; // xmm0_4
  int v26;
  const unsigned int *v27;
  char *v28;
  char *v29;
  char *v30;

  v4 = self;
  v5 = glitch::video::IBuffer::mapInternal(*(glitch::video::IBuffer::Self **)a3, 0, 0, *(uint32_t *)(*(uint32_t *)a3 + 20), 0);
  v26 = 0;
  if ( v5 != 0 )
    v26 = *(uint32_t *)(a3 + 4) + v5;
  if ( self != nullptr )
  {
    if ( a2 != nullptr )
    {
      v6 = (float *)a4;
      v27 = nullptr;
      v28 = (char *)a4 + 8;
      v29 = (char *)a4 + 16;
      do
      {
        v27 = (const unsigned int *)((char *)v27 + 1);
        v7 = (char *)(v26 + *(uint32_t *)v4 * *(uint16_t *)(a3 + 14));
        v8 = (float)*v7;
        v6[1] = (float)v7[1];
        *v6 = v8;
        v9 = (char *)(v26 + *((uint32_t *)v4 + 1) * *(uint16_t *)(a3 + 14));
        v10 = (float)v9[1];
        v11 = (char *)v6 - (char *)a4;
        v6 += 6;
        *(float *)&v28[v11] = (float)*v9;
        *(float *)&v28[v11 + 4] = v10;
        v12 = (char *)(v26 + *((uint32_t *)v4 + 2) * *(uint16_t *)(a3 + 14));
        v4 = (gameswf::Self *)((char *)v4 + 12);
        v13 = (float)v12[1];
        *(float *)&v29[v11] = (float)*v12;
        *(float *)&v29[v11 + 4] = v13;
      }
      while ( v27 != a2 );
    }
  }
  else if ( a2 != nullptr )
  {
    v14 = (float *)a4;
    v15 = *(uint16_t *)(a3 + 14);
    v16 = 0;
    v17 = (char *)a4 + 8;
    v30 = (char *)a4 + 16;
    while ( 1 )
    {
      v18 = (char *)(v26 + v16 * v15);
      v19 = (float)*v18;
      v14[1] = (float)v18[1];
      *v14 = v19;
      v20 = (char *)(v26 + *(uint16_t *)(a3 + 14) * (v16 + 1));
      v21 = (float)v20[1];
      v22 = (char *)v14 - (char *)a4;
      *(float *)&v17[v22] = (float)*v20;
      v23 = v16 + 2;
      *(float *)&v17[v22 + 4] = v21;
      v14 += 6;
      v16 += 3;
      v24 = (char *)(v26 + *(uint16_t *)(a3 + 14) * v23);
      v25 = (float)v24[1];
      *(float *)&v30[v22] = (float)*v24;
      *(float *)&v30[v22 + 4] = v25;
      if ( (unsigned int)(uintptr_t)(a2) <= v16 )
        break;
      v15 = *(uint16_t *)(a3 + 14);
      v17 = (char *)a4 + 8;
    }
  }
  if ( v26 != 0 )
    glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::collect_unsigned_char_95eae6  (binary VA: 0x10d9a30)
// Original: gameswf::collect<unsigned char>
// ----------------------------------------------------------------------------
void gameswf::collect_unsigned_char_95eae6(gameswf::Self *self, const unsigned int *a2, unsigned int a3, const glitch::video::SVertexStream::Self *a4)
{
  gameswf::Self *v4;
  int v5;
  float *v6;
  uint8_t *v7;
  float v8; // xmm3_4
  uint8_t *v9;
  int v10;
  float v11; // xmm3_4
  float v12; // xmm3_4
  float *v13;
  uint16_t v14;
  unsigned int v15;
  uint8_t *v16;
  float v17; // xmm3_4
  uint8_t *v18;
  int v19;
  float v20; // xmm3_4
  unsigned int v21;
  float v22; // xmm3_4
  uint8_t *v23;
  int v24;
  const unsigned int *v25;
  char *v26;
  char *v27;
  char *v28;
  char *v29;
  uint8_t *v30;

  v4 = self;
  v5 = glitch::video::IBuffer::mapInternal(*(glitch::video::IBuffer::Self **)a3, 0, 0, *(uint32_t *)(*(uint32_t *)a3 + 20), 0);
  v24 = 0;
  if ( v5 != 0 )
    v24 = *(uint32_t *)(a3 + 4) + v5;
  if ( self != nullptr )
  {
    if ( a2 != nullptr )
    {
      v6 = (float *)a4;
      v25 = nullptr;
      v26 = (char *)a4 + 8;
      v28 = (char *)a4 + 16;
      do
      {
        v25 = (const unsigned int *)((char *)v25 + 1);
        v7 = (uint8_t *)(v24 + *(uint32_t *)v4 * *(uint16_t *)(a3 + 14));
        v8 = (float)*v7;
        v6[1] = (float)((float)0 * 65536.0) + (float)v7[1];
        *v6 = (float)((float)0 * 65536.0) + v8;
        v9 = (uint8_t *)(v24 + *((uint32_t *)v4 + 1) * *(uint16_t *)(a3 + 14));
        v10 = (char *)v6 - (char *)a4;
        v6 += 6;
        v11 = (float)*v9;
        *(float *)&v26[v10 + 4] = (float)((float)0 * 65536.0) + (float)v9[1];
        *(float *)&v26[v10] = (float)((float)0 * 65536.0) + v11;
        v23 = (uint8_t *)(v24 + *((uint32_t *)v4 + 2) * *(uint16_t *)(a3 + 14));
        v4 = (gameswf::Self *)((char *)v4 + 12);
        v12 = (float)*v23;
        *(float *)&v28[v10 + 4] = (float)((float)0 * 65536.0) + (float)v23[1];
        *(float *)&v28[v10] = (float)((float)0 * 65536.0) + v12;
      }
      while ( v25 != a2 );
    }
  }
  else if ( a2 != nullptr )
  {
    v13 = (float *)a4;
    v14 = *(uint16_t *)(a3 + 14);
    v15 = 0;
    v27 = (char *)a4 + 8;
    v29 = (char *)a4 + 16;
    while ( 1 )
    {
      v16 = (uint8_t *)(v24 + v15 * v14);
      v17 = (float)*v16;
      v13[1] = (float)((float)0 * 65536.0) + (float)v16[1];
      *v13 = (float)((float)0 * 65536.0) + v17;
      v18 = (uint8_t *)(v24 + *(uint16_t *)(a3 + 14) * (v15 + 1));
      v19 = (char *)v13 - (char *)a4;
      v13 += 6;
      v20 = (float)*v18;
      *(float *)&v27[v19 + 4] = (float)((float)0 * 65536.0) + (float)v18[1];
      *(float *)&v27[v19] = (float)((float)0 * 65536.0) + v20;
      v21 = v15 + 2;
      v15 += 3;
      v30 = (uint8_t *)(v24 + *(uint16_t *)(a3 + 14) * v21);
      v22 = (float)*v30;
      *(float *)&v29[v19 + 4] = (float)((float)0 * 65536.0) + (float)v30[1];
      *(float *)&v29[v19] = (float)((float)0 * 65536.0) + v22;
      if ( (unsigned int)(uintptr_t)(a2) <= v15 )
        break;
      v14 = *(uint16_t *)(a3 + 14);
    }
  }
  if ( v24 != 0 )
    glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::collect_short_id_68abf2  (binary VA: 0x10d9d30)
// Original: gameswf::collect<short>
// ----------------------------------------------------------------------------
void gameswf::collect_short_id_68abf2(gameswf::Self *self, const unsigned int *a2, unsigned int a3, const glitch::video::SVertexStream::Self *a4)
{
  gameswf::Self *v4;
  int v5;
  float *v6;
  int16_t *v7;
  float v8; // xmm1_4
  int16_t *v9;
  float v10; // xmm0_4
  int v11;
  int16_t *v12;
  float v13; // xmm0_4
  float *v14;
  uint16_t v15;
  unsigned int v16;
  char *v17;
  int16_t *v18;
  float v19; // xmm1_4
  int16_t *v20;
  float v21; // xmm0_4
  int v22;
  unsigned int v23;
  int16_t *v24;
  float v25; // xmm0_4
  int v26;
  const unsigned int *v27;
  char *v28;
  char *v29;
  char *v30;

  v4 = self;
  v5 = glitch::video::IBuffer::mapInternal(*(glitch::video::IBuffer::Self **)a3, 0, 0, *(uint32_t *)(*(uint32_t *)a3 + 20), 0);
  v26 = 0;
  if ( v5 != 0 )
    v26 = *(uint32_t *)(a3 + 4) + v5;
  if ( self != nullptr )
  {
    if ( a2 != nullptr )
    {
      v6 = (float *)a4;
      v27 = nullptr;
      v28 = (char *)a4 + 8;
      v29 = (char *)a4 + 16;
      do
      {
        v27 = (const unsigned int *)((char *)v27 + 1);
        v7 = (int16_t *)(v26 + *(uint32_t *)v4 * *(uint16_t *)(a3 + 14));
        v8 = (float)*v7;
        v6[1] = (float)v7[1];
        *v6 = v8;
        v9 = (int16_t *)(v26 + *((uint32_t *)v4 + 1) * *(uint16_t *)(a3 + 14));
        v10 = (float)v9[1];
        v11 = (char *)v6 - (char *)a4;
        v6 += 6;
        *(float *)&v28[v11] = (float)*v9;
        *(float *)&v28[v11 + 4] = v10;
        v12 = (int16_t *)(v26 + *((uint32_t *)v4 + 2) * *(uint16_t *)(a3 + 14));
        v4 = (gameswf::Self *)((char *)v4 + 12);
        v13 = (float)v12[1];
        *(float *)&v29[v11] = (float)*v12;
        *(float *)&v29[v11 + 4] = v13;
      }
      while ( v27 != a2 );
    }
  }
  else if ( a2 != nullptr )
  {
    v14 = (float *)a4;
    v15 = *(uint16_t *)(a3 + 14);
    v16 = 0;
    v17 = (char *)a4 + 8;
    v30 = (char *)a4 + 16;
    while ( 1 )
    {
      v18 = (int16_t *)(v26 + v16 * v15);
      v19 = (float)*v18;
      v14[1] = (float)v18[1];
      *v14 = v19;
      v20 = (int16_t *)(v26 + *(uint16_t *)(a3 + 14) * (v16 + 1));
      v21 = (float)v20[1];
      v22 = (char *)v14 - (char *)a4;
      *(float *)&v17[v22] = (float)*v20;
      v23 = v16 + 2;
      *(float *)&v17[v22 + 4] = v21;
      v14 += 6;
      v16 += 3;
      v24 = (int16_t *)(v26 + *(uint16_t *)(a3 + 14) * v23);
      v25 = (float)v24[1];
      *(float *)&v30[v22] = (float)*v24;
      *(float *)&v30[v22 + 4] = v25;
      if ( (unsigned int)(uintptr_t)(a2) <= v16 )
        break;
      v15 = *(uint16_t *)(a3 + 14);
      v17 = (char *)a4 + 8;
    }
  }
  if ( v26 != 0 )
    glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::collect_unsigned_short_d0e121  (binary VA: 0x10d9f40)
// Original: gameswf::collect<unsigned short>
// ----------------------------------------------------------------------------
void gameswf::collect_unsigned_short_d0e121(gameswf::Self *self, const unsigned int *a2, unsigned int a3, const glitch::video::SVertexStream::Self *a4)
{
  gameswf::Self *v4;
  int v5;
  float *v6;
  uint16_t *v7;
  float v8; // xmm3_4
  uint16_t *v9;
  int v10;
  float v11; // xmm3_4
  float v12; // xmm3_4
  float *v13;
  uint16_t v14;
  unsigned int v15;
  uint16_t *v16;
  float v17; // xmm3_4
  uint16_t *v18;
  int v19;
  float v20; // xmm3_4
  unsigned int v21;
  float v22; // xmm3_4
  uint16_t *v23;
  int v24;
  const unsigned int *v25;
  char *v26;
  char *v27;
  char *v28;
  char *v29;
  uint16_t *v30;

  v4 = self;
  v5 = glitch::video::IBuffer::mapInternal(*(glitch::video::IBuffer::Self **)a3, 0, 0, *(uint32_t *)(*(uint32_t *)a3 + 20), 0);
  v24 = 0;
  if ( v5 != 0 )
    v24 = *(uint32_t *)(a3 + 4) + v5;
  if ( self != nullptr )
  {
    if ( a2 != nullptr )
    {
      v6 = (float *)a4;
      v25 = nullptr;
      v26 = (char *)a4 + 8;
      v28 = (char *)a4 + 16;
      do
      {
        v25 = (const unsigned int *)((char *)v25 + 1);
        v7 = (uint16_t *)(v24 + *(uint32_t *)v4 * *(uint16_t *)(a3 + 14));
        v8 = (float)*v7;
        v6[1] = (float)((float)0 * 65536.0) + (float)v7[1];
        *v6 = (float)((float)0 * 65536.0) + v8;
        v9 = (uint16_t *)(v24 + *((uint32_t *)v4 + 1) * *(uint16_t *)(a3 + 14));
        v10 = (char *)v6 - (char *)a4;
        v6 += 6;
        v11 = (float)*v9;
        *(float *)&v26[v10 + 4] = (float)((float)0 * 65536.0) + (float)v9[1];
        *(float *)&v26[v10] = (float)((float)0 * 65536.0) + v11;
        v23 = (uint16_t *)(v24 + *((uint32_t *)v4 + 2) * *(uint16_t *)(a3 + 14));
        v4 = (gameswf::Self *)((char *)v4 + 12);
        v12 = (float)*v23;
        *(float *)&v28[v10 + 4] = (float)((float)0 * 65536.0) + (float)v23[1];
        *(float *)&v28[v10] = (float)((float)0 * 65536.0) + v12;
      }
      while ( v25 != a2 );
    }
  }
  else if ( a2 != nullptr )
  {
    v13 = (float *)a4;
    v14 = *(uint16_t *)(a3 + 14);
    v15 = 0;
    v27 = (char *)a4 + 8;
    v29 = (char *)a4 + 16;
    while ( 1 )
    {
      v16 = (uint16_t *)(v24 + v15 * v14);
      v17 = (float)*v16;
      v13[1] = (float)((float)0 * 65536.0) + (float)v16[1];
      *v13 = (float)((float)0 * 65536.0) + v17;
      v18 = (uint16_t *)(v24 + *(uint16_t *)(a3 + 14) * (v15 + 1));
      v19 = (char *)v13 - (char *)a4;
      v13 += 6;
      v20 = (float)*v18;
      *(float *)&v27[v19 + 4] = (float)((float)0 * 65536.0) + (float)v18[1];
      *(float *)&v27[v19] = (float)((float)0 * 65536.0) + v20;
      v21 = v15 + 2;
      v15 += 3;
      v30 = (uint16_t *)(v24 + *(uint16_t *)(a3 + 14) * v21);
      v22 = (float)*v30;
      *(float *)&v29[v19 + 4] = (float)((float)0 * 65536.0) + (float)v30[1];
      *(float *)&v29[v19] = (float)((float)0 * 65536.0) + v22;
      if ( (unsigned int)(uintptr_t)(a2) <= v15 )
        break;
      v14 = *(uint16_t *)(a3 + 14);
    }
  }
  if ( v24 != 0 )
    glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::collect_int_id_811f7a  (binary VA: 0x10da240)
// Original: gameswf::collect<int>
// ----------------------------------------------------------------------------
void gameswf::collect_int_id_811f7a(gameswf::Self *self, const unsigned int *a2, unsigned int a3, const glitch::video::SVertexStream::Self *a4)
{
  int v4;
  gameswf::Self *v5;
  int v6;
  float *v7;
  int *v8;
  float v9; // xmm1_4
  int v10;
  int *v11;
  float v12; // xmm0_4
  int v13;
  int *v14;
  float v15; // xmm0_4
  float *v16;
  uint16_t v17;
  unsigned int v18;
  int *v19;
  float v20; // xmm1_4
  int *v21;
  float v22; // xmm0_4
  int v23;
  unsigned int v24;
  int *v25;
  float v26; // xmm0_4
  const unsigned int *v27;
  char *v28;
  char *v29;
  char *v30;
  char *v31;

  v4 = 0;
  v5 = self;
  v6 = glitch::video::IBuffer::mapInternal(*(glitch::video::IBuffer::Self **)a3, 0, 0, *(uint32_t *)(*(uint32_t *)a3 + 20), 0);
  if ( v6 != 0 )
    v4 = v6 + *(uint32_t *)(a3 + 4);
  if ( self != nullptr )
  {
    if ( a2 != nullptr )
    {
      v7 = (float *)a4;
      v27 = nullptr;
      v28 = (char *)a4 + 8;
      v30 = (char *)a4 + 16;
      do
      {
        v27 = (const unsigned int *)((char *)v27 + 1);
        v8 = (int *)(v4 + *(uint32_t *)v5 * *(uint16_t *)(a3 + 14));
        v9 = (float)*v8;
        v7[1] = (float)v8[1];
        *v7 = v9;
        v10 = (char *)v7 - (char *)a4;
        v7 += 6;
        v11 = (int *)(v4 + *((uint32_t *)v5 + 1) * *(uint16_t *)(a3 + 14));
        v12 = (float)v11[1];
        *(float *)&v28[v10] = (float)*v11;
        *(float *)&v28[v10 + 4] = v12;
        v13 = *((uint32_t *)v5 + 2) * *(uint16_t *)(a3 + 14);
        v5 = (gameswf::Self *)((char *)v5 + 12);
        v14 = (int *)(v4 + v13);
        v15 = (float)v14[1];
        *(float *)&v30[v10] = (float)*v14;
        *(float *)&v30[v10 + 4] = v15;
      }
      while ( v27 != a2 );
    }
  }
  else if ( a2 != nullptr )
  {
    v16 = (float *)a4;
    v17 = *(uint16_t *)(a3 + 14);
    v18 = 0;
    v29 = (char *)a4 + 8;
    v31 = (char *)a4 + 16;
    while ( 1 )
    {
      v19 = (int *)(v4 + v18 * v17);
      v20 = (float)*v19;
      v16[1] = (float)v19[1];
      *v16 = v20;
      v21 = (int *)(v4 + *(uint16_t *)(a3 + 14) * (v18 + 1));
      v22 = (float)v21[1];
      v23 = (char *)v16 - (char *)a4;
      *(float *)&v29[v23] = (float)*v21;
      v16 += 6;
      *(float *)&v29[v23 + 4] = v22;
      v24 = v18 + 2;
      v18 += 3;
      v25 = (int *)(v4 + *(uint16_t *)(a3 + 14) * v24);
      v26 = (float)v25[1];
      *(float *)&v31[v23] = (float)*v25;
      *(float *)&v31[v23 + 4] = v26;
      if ( (unsigned int)(uintptr_t)(a2) <= v18 )
        break;
      v17 = *(uint16_t *)(a3 + 14);
    }
  }
  if ( v4 != 0 )
    glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::collect_unsigned_int_3a8354  (binary VA: 0x10da410)
// Original: gameswf::collect<unsigned int>
// ----------------------------------------------------------------------------
void gameswf::collect_unsigned_int_3a8354(gameswf::Self *self, const unsigned int *a2, unsigned int a3, const glitch::video::SVertexStream::Self *a4)
{
  gameswf::Self *v4;
  int v5;
  float *v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int *v10;
  unsigned int v11;
  unsigned int v12;
  float v13; // xmm1_4
  int v14;
  float v15; // xmm3_4
  float v16; // xmm2_4
  float *v17;
  uint16_t v18;
  unsigned int v19;
  unsigned int *v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int *v23;
  unsigned int v24;
  unsigned int v25;
  float v26; // xmm1_4
  int v27;
  unsigned int v28;
  float v29; // xmm3_4
  float v30; // xmm2_4
  uint32_t *v31;
  int v32;
  const unsigned int *v33;
  uint32_t *v34;
  char *v35;
  char *v36;
  char *v37;
  char *v38;

  v4 = self;
  v5 = glitch::video::IBuffer::mapInternal(*(glitch::video::IBuffer::Self **)a3, 0, 0, *(uint32_t *)(*(uint32_t *)a3 + 20), 0);
  v32 = 0;
  if ( v5 != 0 )
    v32 = *(uint32_t *)(a3 + 4) + v5;
  if ( self != nullptr )
  {
    if ( a2 != nullptr )
    {
      v6 = (float *)a4;
      v33 = nullptr;
      v37 = (char *)a4 + 8;
      v35 = (char *)a4 + 16;
      do
      {
        v33 = (const unsigned int *)((char *)v33 + 1);
        v7 = (unsigned int *)(v32 + *(uint32_t *)v4 * *(uint16_t *)(a3 + 14));
        v8 = v7[1];
        v9 = *v7;
        v6[1] = (float)((float)HIWORD(v8) * 65536.0) + (float)(uint16_t)v8;
        *v6 = (float)((float)HIWORD(v9) * 65536.0) + (float)(uint16_t)v9;
        v10 = (unsigned int *)(v32 + *((uint32_t *)v4 + 1) * *(uint16_t *)(a3 + 14));
        v11 = v10[1];
        v12 = *v10;
        v13 = (float)((float)HIWORD(v11) * 65536.0) + (float)(uint16_t)v11;
        v14 = (char *)v6 - (char *)a4;
        *(float *)&v37[v14 + 4] = v13;
        v6 += 6;
        *(float *)&v37[v14] = (float)((float)HIWORD(v12) * 65536.0) + (float)(uint16_t)v12;
        v31 = (uint32_t *)(v32 + *((uint32_t *)v4 + 2) * *(uint16_t *)(a3 + 14));
        v4 = (gameswf::Self *)((char *)v4 + 12);
        v15 = (float)(uint16_t)*v31;
        v16 = (float)HIWORD(*v31) * 65536.0;
        *(float *)&v35[v14 + 4] = (float)((float)HIWORD(v31[1]) * 65536.0) + (float)(uint16_t)v31[1];
        *(float *)&v35[v14] = v16 + v15;
      }
      while ( v33 != a2 );
    }
  }
  else if ( a2 != nullptr )
  {
    v17 = (float *)a4;
    v18 = *(uint16_t *)(a3 + 14);
    v19 = 0;
    v38 = (char *)a4 + 8;
    v36 = (char *)a4 + 16;
    while ( 1 )
    {
      v20 = (unsigned int *)(v32 + v19 * v18);
      v21 = v20[1];
      v22 = *v20;
      v17[1] = (float)((float)HIWORD(v21) * 65536.0) + (float)(uint16_t)v21;
      *v17 = (float)((float)HIWORD(v22) * 65536.0) + (float)(uint16_t)v22;
      v23 = (unsigned int *)(v32 + *(uint16_t *)(a3 + 14) * (v19 + 1));
      v24 = v23[1];
      v25 = *v23;
      v26 = (float)((float)HIWORD(v24) * 65536.0) + (float)(uint16_t)v24;
      v27 = (char *)v17 - (char *)a4;
      *(float *)&v38[v27 + 4] = v26;
      v17 += 6;
      *(float *)&v38[v27] = (float)((float)HIWORD(v25) * 65536.0) + (float)(uint16_t)v25;
      v28 = v19 + 2;
      v19 += 3;
      v34 = (uint32_t *)(v32 + *(uint16_t *)(a3 + 14) * v28);
      v29 = (float)(uint16_t)*v34;
      v30 = (float)HIWORD(*v34) * 65536.0;
      *(float *)&v36[v27 + 4] = (float)((float)HIWORD(v34[1]) * 65536.0) + (float)(uint16_t)v34[1];
      *(float *)&v36[v27] = v30 + v29;
      if ( (unsigned int)(uintptr_t)(a2) <= v19 )
        break;
      v18 = *(uint16_t *)(a3 + 14);
    }
  }
  if ( v32 != 0 )
    glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::setCurveMaxPixelError  (binary VA: 0x10da900)
// Original: gameswf::setCurveMaxPixelError
// ----------------------------------------------------------------------------
void gameswf::setCurveMaxPixelError(gameswf::Self *self)
{
  dword_20C4390 = fmaxf(fminf(*(float *)&self, 1000000.0), 0.000001f);
}

// ----------------------------------------------------------------------------
// Function: gameswf::getCurveMaxPixelError  (binary VA: 0x10da930)
// Original: gameswf::getCurveMaxPixelError
// ----------------------------------------------------------------------------
long double gameswf::getCurveMaxPixelError()
{
  return *(float *)&dword_20C4390;
}

// ----------------------------------------------------------------------------
// Function: gameswf::get_sample_rate  (binary VA: 0x10e05e0)
// Original: gameswf::get_sample_rate
// ----------------------------------------------------------------------------
int gameswf::get_sample_rate(gameswf::Self *self)
{
  return dword_1CC45C0[(uint32_t)(uintptr_t)(self)];
}

// ----------------------------------------------------------------------------
// Function: gameswf::set_sound_handler  (binary VA: 0x10e0600)
// Original: gameswf::set_sound_handler
// ----------------------------------------------------------------------------
int gameswf::set_sound_handler(int a1)
{
  dword_20E5580 = a1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getSoundHandler  (binary VA: 0x10e0620)
// Original: gameswf::getSoundHandler
// ----------------------------------------------------------------------------
int gameswf::getSoundHandler()
{
  int v0;

  v0 = 0;
  if ( dword_20E5580 != 0 && G4_VCALL<uint8_t>(dword_20E5580, 52) != 0 )
    return dword_20E5580;
  return v0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_sound_loader  (binary VA: 0x10e0670)
// Original: gameswf::define_sound_loader
// ----------------------------------------------------------------------------
int gameswf::define_sound_loader(gameswf::Self *self, gameswf::Stream::Self *a2, uint32_t *a3)
{
  int UInt;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int (*v10)(int, gameswf::Self *, int, int, int, int, bool);
  int sample_rate;
  int v12;
  gameswf::RefCounted::Self *v13;
  gameswf::Self *v14;
  gameswf::RefCounted::Self *v15;
  gameswf::Self *WeakProxy;
  gameswf::Self *v17;
  bool v18;
  int SInt;
  int v20;
  int v21;
  int16_t *v22;
  int16_t v23;
  char v24;
  int v25;
  int16_t v26;
  char v27;
  int v28;
  int16_t *v29;
  int16_t v30;
  char v31;
  int v32;
  int v33;
  int16_t *v34;
  int16_t v35;
  char v36;
  int v37;
  int v38;
  int16_t *v39;
  int16_t v40;
  char v41;
  int v42;
  int v43;
  int16_t *v44;
  int16_t v45;
  char v46;
  int v47;
  int v48;
  int16_t *v49;
  int16_t v50;
  char v51;
  int v52;
  int16_t v53;
  char v54;
  int v55;
  int16_t *v56;
  int16_t v57;
  char v58;
  int v59;
  int16_t v60;
  char v61;
  int v62;
  int16_t *v63;
  int16_t v64;
  char v65;
  int v66;
  int16_t v67;
  char v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int16_t *v78;
  int16_t *v79;
  int16_t *v80;
  int16_t *v81;
  int16_t *v82;
  int16_t *v83;
  int16_t *v84;
  int16_t *v85;
  int v86;
  int v87;
  int v88;
  int v89;
  gameswf::Self *v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  size_t TagEndPosition;
  int v101;
  gameswf::Self *v102;
  int v103;
  bool v104;
  uint16_t U16;
  gameswf::Self *v106;

  U16 = gameswf::Stream::readU16(self);
  UInt = gameswf::Stream::readUInt(self, 4);
  v106 = (gameswf::Self *)gameswf::Stream::readUInt(self, 2);
  v72 = gameswf::Stream::readUInt(self, 1);
  v4 = gameswf::Stream::readUInt(self, 1);
  result = gameswf::Stream::readU32(self);
  v103 = result;
  if ( dword_20E5580 != 0 )
  {
    v6 = UInt;
    v104 = v4 != 0;
    if ( UInt != 1 )
    {
      TagEndPosition = gameswf::Stream::getTagEndPosition(self);
      v101 = TagEndPosition - gameswf::Stream::getPosition(self);
      v7 = opNewArray(v101);
      v102 = (gameswf::Self *)v7;
      if ( v101 > 0 )
      {
        v8 = 0;
        v9 = v7;
        do
          *(uint8_t *)(v9 + v8++) = gameswf::Stream::readU8(self);
        while ( v8 != v101 );
        v6 = UInt;
      }
      if ( UInt == 3 )
      {
        v6 = 7;
        if ( v72 == 0 )
          v6 = 3;
      }
LABEL_8:
      v10 = **(int (***)(int, gameswf::Self *, int, int, int, int, bool))dword_20E5580;
      sample_rate = gameswf::get_sample_rate(v106);
      v12 = v10(dword_20E5580, v102, v101, v103, v6, sample_rate, v104);
      v13 = (gameswf::RefCounted::Self *)a3[6];
      if ( v13 != nullptr )
      {
        v14 = (gameswf::Self *)a3[5];
        if ( *((uint8_t *)v14 + 2) != 0 )
        {
          v15 = (gameswf::RefCounted::Self *)opNew(0x20u);
          gameswf::RefCounted::RefCounted(v15);
          *((uint32_t *)v15 + 6) = (uint32_t)(uintptr_t)(v13);
          *(uint32_t *)v15 = ((uint32_t)(uintptr_t)&off_208E728);
          *((uint32_t *)v15 + 3) = 0;
          *((uint32_t *)v15 + 4) = 0;
          *((uint32_t *)v15 + 5) = 0;
          WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v13);
          v17 = *((gameswf::Self **)v15 + 5);
          if ( WeakProxy != v17 )
          {
            if ( v17 != nullptr )
            {
              v18 = (*(uint16_t *)v17)-- == 1;
              if ( v18 )
                gameswf::free_internal(v17);
            }
            *((uint32_t *)v15 + 5) = (uint32_t)(uintptr_t)(WeakProxy);
            if ( WeakProxy != nullptr )
              ++*(uint16_t *)WeakProxy;
          }
          goto LABEL_16;
        }
        v18 = (*(uint16_t *)v14)-- == 1;
        if ( v18 )
          gameswf::free_internal(v14);
        a3[5] = 0;
        a3[6] = 0;
      }
      v15 = (gameswf::RefCounted::Self *)opNew(0x20u);
      gameswf::RefCounted::RefCounted(v15);
      *(uint32_t *)v15 = ((uint32_t)(uintptr_t)&off_208E728);
      *((uint32_t *)v15 + 3) = 0;
      *((uint32_t *)v15 + 4) = 0;
      *((uint32_t *)v15 + 5) = 0;
      *((uint32_t *)v15 + 6) = 0;
LABEL_16:
      *((uint32_t *)v15 + 7) = v12;
      *(uint32_t *)v15 = ((uint32_t)(uintptr_t)&off_208F3A8);
      result = G4_VCALL<int>(a3, 164, U16, v15);
      if ( v102 != nullptr )
        return gameswf::free_internal(v102);
      return result;
    }
    v6 = 7;
    v101 = result * (v4 == 0 ? 2 : 4);
    v102 = (gameswf::Self *)opNewArray(v101);
    v99 = gameswf::Stream::readUInt(self, 2) + 2;
    if ( v103 == 0 )
      goto LABEL_8;
    v90 = v102;
    v91 = v103;
LABEL_26:
    while ( 2 )
    {
      SInt = gameswf::Stream::readSInt(self, 16);
      v20 = gameswf::Stream::readUInt(self, 6);
      if ( v91 > 4095 )
      {
        v91 -= 4096;
        v92 = 4096;
        if ( v104 )
          goto LABEL_28;
      }
      else
      {
        v92 = v91;
        v91 = 0;
        if ( v104 )
        {
LABEL_28:
          v73 = gameswf::Stream::readSInt(self, 16);
          v21 = gameswf::Stream::readUInt(self, 6);
          if ( v99 != 3 )
          {
            if ( v99 <= 3 )
            {
              if ( v99 == 2 )
              {
                *(uint16_t *)v90 = SInt;
                *((uint16_t *)v90 + 1) = v73;
                v22 = (int16_t *)((char *)v90 + 4);
                v90 = (gameswf::Self *)((char *)v90 + 4);
                if ( v92 != 1 )
                {
                  v78 = v22;
                  v87 = v92 - 2;
                  while ( 1 )
                  {
                    v27 = gameswf::Stream::readUInt(self, 2);
                    v94 = v27 & 1;
                    v28 = (dword_1CC45E0[v20] * (2 * v94 + 1)) >> 1;
                    if ( (v27 & 2) != 0 )
                      v28 = -((dword_1CC45E0[v20] * (2 * v94 + 1)) >> 1);
                    SInt += v28;
                    if ( SInt <= 32766 )
                    {
                      if ( SInt >= -32767 )
                      {
                        v23 = SInt;
                      }
                      else
                      {
                        v23 = 0x8000;
                        SInt = -32768;
                      }
                      v20 += dword_20C43A0[v94];
                      if ( v20 <= 87 )
                      {
LABEL_36:
                        if ( v20 <= 0 )
                          v20 = 0;
                        goto LABEL_38;
                      }
                    }
                    else
                    {
                      v23 = 0x7FFF;
                      SInt = 0x7FFF;
                      v20 += dword_20C43A0[v94];
                      if ( v20 <= 87 )
                        goto LABEL_36;
                    }
                    v20 = 88;
LABEL_38:
                    *v78 = v23;
                    v24 = gameswf::Stream::readUInt(self, 2);
                    v93 = v24 & 1;
                    v25 = (dword_1CC45E0[v21] * (2 * v93 + 1)) >> 1;
                    if ( (v24 & 2) != 0 )
                      v25 = -((dword_1CC45E0[v21] * (2 * v93 + 1)) >> 1);
                    v73 += v25;
                    if ( v73 > 32766 )
                    {
                      v26 = 0x7FFF;
                      v73 = 0x7FFF;
                    }
                    else if ( v73 >= -32767 )
                    {
                      v26 = v73;
                    }
                    else
                    {
                      v26 = 0x8000;
                      v73 = -32768;
                    }
                    v21 += dword_20C43A0[v93];
                    if ( v21 > 87 )
                    {
                      v21 = 88;
                    }
                    else if ( v21 <= 0 )
                    {
                      v21 = 0;
                    }
                    --v87;
                    v78[1] = v26;
                    v78 += 2;
                    if ( v87 == -1 )
                      goto LABEL_71;
                  }
                }
              }
LABEL_25:
              if ( v91 == 0 )
                goto LABEL_70;
              continue;
            }
            if ( v99 != 4 )
            {
              if ( v99 != 5 )
                goto LABEL_25;
              *(uint16_t *)v90 = SInt;
              *((uint16_t *)v90 + 1) = v73;
              v49 = (int16_t *)((char *)v90 + 4);
              v90 = (gameswf::Self *)((char *)v90 + 4);
              if ( v92 == 1 )
                goto LABEL_25;
              v79 = v49;
              v88 = v92 - 2;
              while ( 1 )
              {
                v54 = gameswf::Stream::readUInt(self, 5);
                v96 = v54 & 0xF;
                v55 = (dword_1CC45E0[v20] * (2 * v96 + 1)) >> 4;
                if ( (v54 & 0x10) != 0 )
                  v55 = -((dword_1CC45E0[v20] * (2 * v96 + 1)) >> 4);
                SInt += v55;
                if ( SInt <= 32766 )
                {
                  if ( SInt >= -32767 )
                  {
                    v50 = SInt;
                  }
                  else
                  {
                    v50 = 0x8000;
                    SInt = -32768;
                  }
                  v20 += dword_20C43E0[v96];
                  if ( v20 <= 87 )
                  {
LABEL_119:
                    if ( v20 <= 0 )
                      v20 = 0;
                    goto LABEL_121;
                  }
                }
                else
                {
                  v50 = 0x7FFF;
                  SInt = 0x7FFF;
                  v20 += dword_20C43E0[v96];
                  if ( v20 <= 87 )
                    goto LABEL_119;
                }
                v20 = 88;
LABEL_121:
                *v79 = v50;
                v51 = gameswf::Stream::readUInt(self, 5);
                v95 = v51 & 0xF;
                v52 = (dword_1CC45E0[v21] * (2 * v95 + 1)) >> 4;
                if ( (v51 & 0x10) != 0 )
                  v52 = -((dword_1CC45E0[v21] * (2 * v95 + 1)) >> 4);
                v73 += v52;
                if ( v73 > 32766 )
                {
                  v53 = 0x7FFF;
                  v73 = 0x7FFF;
                }
                else if ( v73 >= -32767 )
                {
                  v53 = v73;
                }
                else
                {
                  v53 = 0x8000;
                  v73 = -32768;
                }
                v21 += dword_20C43E0[v95];
                if ( v21 > 87 )
                {
                  v21 = 88;
                }
                else if ( v21 <= 0 )
                {
                  v21 = 0;
                }
                --v88;
                v79[1] = v53;
                v79 += 2;
                if ( v88 == -1 )
                  goto LABEL_71;
              }
            }
            *(uint16_t *)v90 = SInt;
            *((uint16_t *)v90 + 1) = v73;
            v56 = (int16_t *)((char *)v90 + 4);
            v90 = (gameswf::Self *)((char *)v90 + 4);
            if ( v92 == 1 )
              goto LABEL_25;
            v80 = v56;
            v89 = v92 - 2;
            while ( 1 )
            {
              v61 = gameswf::Stream::readUInt(self, 4);
              v98 = v61 & 7;
              v62 = (dword_1CC45E0[v20] * (2 * v98 + 1)) >> 3;
              if ( (v61 & 8) != 0 )
                v62 = -((dword_1CC45E0[v20] * (2 * v98 + 1)) >> 3);
              SInt += v62;
              if ( SInt <= 32766 )
              {
                if ( SInt >= -32767 )
                {
                  v57 = SInt;
                }
                else
                {
                  v57 = 0x8000;
                  SInt = -32768;
                }
                v20 += dword_20C43C0[v98];
                if ( v20 <= 87 )
                {
LABEL_142:
                  if ( v20 <= 0 )
                    v20 = 0;
                  goto LABEL_144;
                }
              }
              else
              {
                v57 = 0x7FFF;
                SInt = 0x7FFF;
                v20 += dword_20C43C0[v98];
                if ( v20 <= 87 )
                  goto LABEL_142;
              }
              v20 = 88;
LABEL_144:
              *v80 = v57;
              v58 = gameswf::Stream::readUInt(self, 4);
              v97 = v58 & 7;
              v59 = (dword_1CC45E0[v21] * (2 * v97 + 1)) >> 3;
              if ( (v58 & 8) != 0 )
                v59 = -((dword_1CC45E0[v21] * (2 * v97 + 1)) >> 3);
              v73 += v59;
              if ( v73 > 32766 )
              {
                v60 = 0x7FFF;
                v73 = 0x7FFF;
              }
              else if ( v73 >= -32767 )
              {
                v60 = v73;
              }
              else
              {
                v60 = 0x8000;
                v73 = -32768;
              }
              v21 += dword_20C43C0[v97];
              if ( v21 > 87 )
              {
                v21 = 88;
              }
              else if ( v21 <= 0 )
              {
                v21 = 0;
              }
              --v89;
              v80[1] = v60;
              v80 += 2;
              if ( v89 == -1 )
              {
LABEL_71:
                v90 = (gameswf::Self *)((char *)v90 + 4 * v92 - 4);
                goto LABEL_25;
              }
            }
          }
          *(uint16_t *)v90 = SInt;
          *((uint16_t *)v90 + 1) = v73;
          v63 = (int16_t *)((char *)v90 + 4);
          v90 = (gameswf::Self *)((char *)v90 + 4);
          if ( v92 == 1 )
            goto LABEL_25;
          v81 = v63;
          v86 = v92 - 2;
          while ( 1 )
          {
            v68 = gameswf::Stream::readUInt(self, 3);
            v71 = v68 & 3;
            v69 = (dword_1CC45E0[v20] * (2 * v71 + 1)) >> 2;
            if ( (v68 & 4) != 0 )
              v69 = -((dword_1CC45E0[v20] * (2 * v71 + 1)) >> 2);
            SInt += v69;
            if ( SInt <= 32766 )
            {
              if ( SInt >= -32767 )
              {
                v64 = SInt;
              }
              else
              {
                v64 = 0x8000;
                SInt = -32768;
              }
              v20 += dword_20C43A8[v71];
              if ( v20 <= 87 )
              {
LABEL_165:
                if ( v20 <= 0 )
                  v20 = 0;
                goto LABEL_167;
              }
            }
            else
            {
              v64 = 0x7FFF;
              SInt = 0x7FFF;
              v20 += dword_20C43A8[v71];
              if ( v20 <= 87 )
                goto LABEL_165;
            }
            v20 = 88;
LABEL_167:
            *v81 = v64;
            v65 = gameswf::Stream::readUInt(self, 3);
            v70 = v65 & 3;
            v66 = (dword_1CC45E0[v21] * (2 * v70 + 1)) >> 2;
            if ( (v65 & 4) != 0 )
              v66 = -((dword_1CC45E0[v21] * (2 * v70 + 1)) >> 2);
            v73 += v66;
            if ( v73 > 32766 )
            {
              v67 = 0x7FFF;
              v73 = 0x7FFF;
            }
            else if ( v73 >= -32767 )
            {
              v67 = v73;
            }
            else
            {
              v67 = 0x8000;
              v73 = -32768;
            }
            v21 += dword_20C43A8[v70];
            if ( v21 > 87 )
            {
              v21 = 88;
            }
            else if ( v21 <= 0 )
            {
              v21 = 0;
            }
            --v86;
            v81[1] = v67;
            v81 += 2;
            if ( v86 == -1 )
            {
              v90 = (gameswf::Self *)((char *)v90 + 4 * v92 - 4);
              goto LABEL_25;
            }
          }
        }
      }
      break;
    }
    switch ( v99 )
    {
      case 2:
        *(uint16_t *)v90 = SInt;
        v44 = (int16_t *)((char *)v90 + 2);
        v90 = (gameswf::Self *)((char *)v90 + 2);
        if ( v92 == 1 )
          goto LABEL_25;
        v85 = v44;
        v77 = v92 - 2;
        while ( 1 )
        {
          v46 = gameswf::Stream::readUInt(self, 2);
          v47 = v46 & 1;
          v48 = (dword_1CC45E0[v20] * (2 * v47 + 1)) >> 1;
          if ( (v46 & 2) != 0 )
            v48 = -((dword_1CC45E0[v20] * (2 * v47 + 1)) >> 1);
          SInt += v48;
          if ( SInt <= 32766 )
          {
            if ( SInt >= -32767 )
            {
              v45 = SInt;
            }
            else
            {
              v45 = 0x8000;
              SInt = -32768;
            }
            v20 += dword_20C43A0[v47];
            if ( v20 <= 87 )
            {
LABEL_103:
              if ( v20 <= 0 )
                v20 = 0;
              goto LABEL_105;
            }
          }
          else
          {
            v20 += dword_20C43A0[v47];
            v45 = 0x7FFF;
            SInt = 0x7FFF;
            if ( v20 <= 87 )
              goto LABEL_103;
          }
          v20 = 88;
LABEL_105:
          --v77;
          *v85++ = v45;
          if ( v77 == -1 )
            goto LABEL_69;
        }
      case 3:
        *(uint16_t *)v90 = SInt;
        v34 = (int16_t *)((char *)v90 + 2);
        v90 = (gameswf::Self *)((char *)v90 + 2);
        if ( v92 == 1 )
          goto LABEL_25;
        v75 = v92 - 2;
        v83 = v34;
        while ( 1 )
        {
          v36 = gameswf::Stream::readUInt(self, 3);
          v37 = v36 & 3;
          v38 = (dword_1CC45E0[v20] * (2 * v37 + 1)) >> 2;
          if ( (v36 & 4) != 0 )
            v38 = -((dword_1CC45E0[v20] * (2 * v37 + 1)) >> 2);
          SInt += v38;
          if ( SInt <= 32766 )
          {
            if ( SInt >= -32767 )
            {
              v35 = SInt;
            }
            else
            {
              v35 = 0x8000;
              SInt = -32768;
            }
            v20 += dword_20C43A8[v37];
            if ( v20 <= 87 )
            {
LABEL_77:
              if ( v20 <= 0 )
                v20 = 0;
              goto LABEL_79;
            }
          }
          else
          {
            v35 = 0x7FFF;
            SInt = 0x7FFF;
            v20 += dword_20C43A8[v37];
            if ( v20 <= 87 )
              goto LABEL_77;
          }
          v20 = 88;
LABEL_79:
          --v75;
          *v83++ = v35;
          if ( v75 == -1 )
          {
            v90 = (gameswf::Self *)((char *)v90 + 2 * v92 - 2);
            goto LABEL_25;
          }
        }
      case 4:
        *(uint16_t *)v90 = SInt;
        v39 = (int16_t *)((char *)v90 + 2);
        v90 = (gameswf::Self *)((char *)v90 + 2);
        if ( v92 == 1 )
          goto LABEL_25;
        v84 = v39;
        v76 = v92 - 2;
        while ( 1 )
        {
          v41 = gameswf::Stream::readUInt(self, 4);
          v42 = v41 & 7;
          v43 = (dword_1CC45E0[v20] * (2 * v42 + 1)) >> 3;
          if ( (v41 & 8) != 0 )
            v43 = -((dword_1CC45E0[v20] * (2 * v42 + 1)) >> 3);
          SInt += v43;
          if ( SInt <= 32766 )
          {
            if ( SInt >= -32767 )
            {
              v40 = SInt;
            }
            else
            {
              v40 = 0x8000;
              SInt = -32768;
            }
            v20 += dword_20C43C0[v42];
            if ( v20 <= 87 )
            {
LABEL_90:
              if ( v20 <= 0 )
                v20 = 0;
              goto LABEL_92;
            }
          }
          else
          {
            v20 += dword_20C43C0[v42];
            v40 = 0x7FFF;
            SInt = 0x7FFF;
            if ( v20 <= 87 )
              goto LABEL_90;
          }
          v20 = 88;
LABEL_92:
          --v76;
          *v84++ = v40;
          if ( v76 == -1 )
          {
LABEL_69:
            v90 = (gameswf::Self *)((char *)v90 + 2 * v92 - 2);
            if ( v91 == 0 )
            {
LABEL_70:
              v6 = 7;
              goto LABEL_8;
            }
            goto LABEL_26;
          }
        }
      case 5:
        *(uint16_t *)v90 = SInt;
        v29 = (int16_t *)((char *)v90 + 2);
        v90 = (gameswf::Self *)((char *)v90 + 2);
        if ( v92 == 1 )
          goto LABEL_25;
        v82 = v29;
        v74 = v92 - 2;
        while ( 1 )
        {
          v31 = gameswf::Stream::readUInt(self, 5);
          v32 = v31 & 0xF;
          v33 = (dword_1CC45E0[v20] * (2 * v32 + 1)) >> 4;
          if ( (v31 & 0x10) != 0 )
            v33 = -((dword_1CC45E0[v20] * (2 * v32 + 1)) >> 4);
          SInt += v33;
          if ( SInt <= 32766 )
          {
            if ( SInt >= -32767 )
            {
              v30 = SInt;
            }
            else
            {
              v30 = 0x8000;
              SInt = -32768;
            }
            v20 += dword_20C43E0[v32];
            if ( v20 <= 87 )
            {
LABEL_61:
              if ( v20 <= 0 )
                v20 = 0;
              goto LABEL_63;
            }
          }
          else
          {
            v20 += dword_20C43E0[v32];
            v30 = 0x7FFF;
            SInt = 0x7FFF;
            if ( v20 <= 87 )
              goto LABEL_61;
          }
          v20 = 88;
LABEL_63:
          --v74;
          *v82++ = v30;
          if ( v74 == -1 )
            goto LABEL_69;
        }
      default:
        goto LABEL_25;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::start_sound_loader  (binary VA: 0x10e1630)
// Original: gameswf::start_sound_loader
// ----------------------------------------------------------------------------
int gameswf::start_sound_loader(gameswf::Self *self, gameswf::Stream::Self *a2, uint32_t *a3)
{
  const char *U16;
  gameswf::Self *v4;
  int v5;
  gameswf::Self *v6;
  char *v7;
  int v8;
  int v9;
  gameswf::Self *v10;
  int v11;
  int v12;
  int v13;
  void **v14;
  size_t v15;
  size_t v16;
  gameswf::Self *v17;
  bool v18;
  gameswf::Self *v19;
  int v20;
  uint8_t *v21;
  int v22;
  int v23;
  int v24;
  int result;
  size_t v26;
  int v27;
  uint8_t U8;
  int v29;
  uint32_t *v30;
  int v31;
  int i;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  gameswf::Self *v39;
  int v40;
  uint32_t *v41;
  int v42;
  uint32_t *v43;
  int UInt;
  uint8_t v45;
  int v46;
  gameswf::Self *v47;
  int v48;
  int v49;
  int v50;

  U16 = (const char *)(uint16_t)gameswf::Stream::readU16(self);
  v50 = G4_VCALL<int>(a3, 160, U16);
  if ( v50 != 0 )
  {
    v43 = (uint32_t *)a3[6];
    if ( v43 != nullptr )
    {
      v4 = (gameswf::Self *)a3[5];
      if ( *((uint8_t *)v4 + 2) == 0 )
      {
        v18 = (*(uint16_t *)v4)-- == 1;
        if ( v18 )
          gameswf::free_internal(v4);
        v43 = nullptr;
        a3[5] = 0;
        a3[6] = 0;
      }
    }
    v5 = 0;
    v47 = (gameswf::Self *)v43[20];
    if ( (int)(uintptr_t)(v47) - 3 >= 0 )
      v5 = (int)(uintptr_t)(v47) - 3;
    if ( (int)(uintptr_t)(v47) <= v5 )
    {
      v6 = (gameswf::Self *)v43[19];
    }
    else
    {
      v6 = (gameswf::Self *)v43[19];
      v48 = v43[23];
      v7 = (char *)v6 + 16 * v5;
      v8 = *((uint32_t *)v7 + 1);
      v9 = v8 + 32;
      if ( v8 + 32 <= v48 )
      {
LABEL_23:
        if ( v9 == 0 || (int)(v26 = *((uint32_t *)v7 + 2)) >= v9 || *((uint32_t *)v7 + 3) != 0 )
        {
          v19 = *(gameswf::Self **)v7;
        }
        else
        {
          v27 = v9 + (v9 >> 1);
          *((uint32_t *)v7 + 2) = v27;
          if ( v27 != 0 )
          {
            if ( *(uint32_t *)v7 != 0 )
              v19 = (gameswf::Self *)gameswf::realloc_internal(*(gameswf::Self **)v7, v9 + (v9 >> 1), v26);
            else
              v19 = (gameswf::Self *)gameswf::malloc_internal(v9 + (v9 >> 1));
            *(uint32_t *)v7 = (uint32_t)(uintptr_t)(v19);
          }
          else
          {
            if ( *(uint32_t *)v7 != 0 )
              gameswf::free_internal(*(gameswf::Self **)v7);
            *(uint32_t *)v7 = 0;
            v19 = nullptr;
          }
        }
        v20 = v8;
        while ( 1 )
        {
          v21 = (uint8_t *)((char *)v19 + v20);
          if ( v21 != nullptr )
            *v21 = 0;
          if ( ++v20 >= v9 )
            break;
          v19 = *(gameswf::Self **)v7;
        }
        *((uint32_t *)v7 + 1) = v9;
        v43[24] += 32;
        v22 = *(uint32_t *)v7 + v8;
        if ( v22 != 0 )
        {
          *(uint16_t *)(v22 + 4) = 0;
          *(uint32_t *)(v22 + 8) = 0;
          *(uint32_t *)v22 = ((uint32_t)(uintptr_t)&off_208F3E8);
          *(uint8_t *)(v22 + 12) = 0;
          *(uint32_t *)(v22 + 16) = 0;
          *(uint32_t *)(v22 + 20) = 0;
          *(uint32_t *)(v22 + 24) = 0;
          *(uint32_t *)(v22 + 28) = 0;
        }
        gameswf::Stream::readUInt(self, 2);
        *(uint8_t *)(v22 + 12) = gameswf::Stream::readUInt(self, 1) != 0;
        gameswf::Stream::readUInt(self, 1);
        UInt = gameswf::Stream::readUInt(self, 1);
        v23 = gameswf::Stream::readUInt(self, 1);
        v24 = gameswf::Stream::readUInt(self, 1);
        if ( gameswf::Stream::readUInt(self, 1) != 0 )
          gameswf::Stream::readU32(self);
        if ( v24 != 0 )
          gameswf::Stream::readU32(self);
        if ( v23 != 0 )
          *(uint32_t *)(v22 + 8) = (uint16_t)gameswf::Stream::readU16(self);
        if ( UInt != 0 )
        {
          U8 = gameswf::Stream::readU8(self);
          v29 = U8;
          v45 = U8;
          v30 = (uint32_t *)(v22 + 16);
          v31 = *(uint32_t *)(v22 + 20);
          if ( U8 != 0 )
          {
            v37 = *(uint32_t *)(v22 + 24);
            if ( v29 > v37 && *(uint32_t *)(v22 + 28) == 0 )
            {
              v38 = v29 + (v29 >> 1);
              v18 = v38 == 0;
              v49 = v38;
              *(uint32_t *)(v22 + 24) = v38;
              v39 = *(gameswf::Self **)(v22 + 16);
              if ( v18 )
              {
                if ( v39 != nullptr )
                {
                  gameswf::free_internal(v39);
                  v30 = (uint32_t *)(v22 + 16);
                }
                *(uint32_t *)(v22 + 16) = 0;
              }
              else
              {
                if ( v39 != nullptr )
                  *(uint32_t *)(v22 + 16) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)(v22 + 16), 8 * v49, 8 * v37));
                else
                  *(uint32_t *)(v22 + 16) = gameswf::malloc_internal(8 * v49);
                v30 = (uint32_t *)(v22 + 16);
              }
            }
          }
          for ( i = 8 * v31; v29 > v31; i += 8 )
          {
            v33 = *v30 + i;
            if ( v33 != 0 )
            {
              *(uint32_t *)v33 = 0;
              *(uint16_t *)(v33 + 4) = 0;
              *(uint16_t *)(v33 + 6) = 0;
            }
            ++v31;
          }
          *(uint32_t *)(v22 + 20) = v29;
          if ( v29 != 0 )
          {
            v34 = 1;
            v46 = v45 + 1;
            do
            {
              v35 = 8 * v34 - 8;
              v41 = (uint32_t *)(v35 + *(uint32_t *)(v22 + 16));
              ++v34;
              *v41 = gameswf::Stream::readU32(self);
              v42 = v35 + *(uint32_t *)(v22 + 16);
              *(uint16_t *)(v42 + 4) = gameswf::Stream::readU16(self);
              v36 = *(uint32_t *)(v22 + 16) + v35;
              *(uint16_t *)(v36 + 6) = gameswf::Stream::readU16(self);
            }
            while ( v34 != v46 );
          }
        }
        *(uint16_t *)(v22 + 4) = *(uint32_t *)(v50 + 28);
        return G4_VCALL<int>(a3, 128, v22);
      }
      v10 = (gameswf::Self *)(v5 + 1);
      v11 = 16 * (uint32_t)(uintptr_t)(v10);
      while ( v10 != v47 )
      {
        v7 = (char *)v6 + v11;
        v11 += 16;
        v8 = *((uint32_t *)v7 + 1);
        v9 = v8 + 32;
        if ( v8 + 32 <= v48 )
          goto LABEL_23;
        v10 = (gameswf::Self *)((char *)v10 + 1);
      }
    }
    v12 = (int)(uintptr_t)(v47) + 1;
    if ( v47 != (gameswf::Self *)-1 )
    {
      v13 = v43[21];
      if ( v12 > v13 && v43[22] == 0 )
      {
        v40 = v12 + (v12 >> 1);
        v43[21] = v40;
        if ( v40 != 0 )
        {
          if ( v6 != nullptr )
            v6 = (gameswf::Self *)gameswf::realloc_internal(v6, 16 * v40, 16 * v13);
          else
            v6 = (gameswf::Self *)gameswf::malloc_internal(16 * v40);
          v43[19] = (uint32_t)(uintptr_t)(v6);
        }
        else
        {
          if ( v6 != nullptr )
            gameswf::free_internal(v6);
          v6 = nullptr;
          v43[19] = 0;
        }
      }
    }
    v14 = (void **)((char *)v6 + 16 * (uint32_t)(uintptr_t)(v47));
    if ( v14 != nullptr )
    {
      *v14 = nullptr;
      v14[1] = nullptr;
      v14[2] = nullptr;
      v14[3] = nullptr;
      v6 = (gameswf::Self *)v43[19];
      v14 = (void **)((char *)v6 + 16 * (uint32_t)(uintptr_t)(v47));
    }
    v43[20] = v12;
    if ( v14[3] == nullptr )
    {
      v15 = 32;
      v16 = (size_t)v14[2];
      if ( (int)v43[23] >= 32 )
        v15 = v43[23];
      v17 = (gameswf::Self *)*v14;
      v18 = *v14 == nullptr;
      v14[2] = (void *)v15;
      if ( v18 )
        *v14 = (void *)gameswf::malloc_internal(v15);
      else
        *v14 = gameswf::realloc_internal(v17, v15, v16);
      v12 = v43[20];
      v6 = (gameswf::Self *)v43[19];
    }
    v7 = (char *)v6 + 16 * v12 - 16;
    v8 = *((uint32_t *)v7 + 1);
    v9 = v8 + 32;
    goto LABEL_23;
  }
  result = dword_20E5580;
  if ( dword_20E5580 != 0 )
    return gameswf::logError((gameswf::Self *)"start_sound_loader: sound_id %d is not defined\n", U16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::setEdgeAntiAliasingEnabled  (binary VA: 0x10ef4a0)
// Original: gameswf::setEdgeAntiAliasingEnabled
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::setEdgeAntiAliasingEnabled(gameswf::Self *self)
{
  byte_20E55A0 = (char)(uintptr_t)(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::isEdgeAntiAliasingEnabled  (binary VA: 0x10ef4c0)
// Original: gameswf::isEdgeAntiAliasingEnabled
// ----------------------------------------------------------------------------
int gameswf::isEdgeAntiAliasingEnabled()
{
  return (uint8_t)byte_20E55A0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::setLineAntiAliasingEnabled  (binary VA: 0x10ef4e0)
// Original: gameswf::setLineAntiAliasingEnabled
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::setLineAntiAliasingEnabled(gameswf::Self *self)
{
  byte_20E55A1 = (char)(uintptr_t)(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::isLineAntiAliasingEnabled  (binary VA: 0x10ef500)
// Original: gameswf::isLineAntiAliasingEnabled
// ----------------------------------------------------------------------------
int gameswf::isLineAntiAliasingEnabled()
{
  return (uint8_t)byte_20E55A1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::executeTesselate  (binary VA: 0x10f1fc0)
// Original: gameswf::executeTesselate
// ----------------------------------------------------------------------------
void gameswf::executeTesselate(gameswf::Self *self, gameswf::MeshSet::Self *a2, float a3)
{
  int v3;
  __m128 v4;
  char *v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  gameswf::Self *v12;
  bool v13; // cc
  __m128 v14;
  char *v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  gameswf::Self *v22;
  float v23; // xmm0_4
  int v24;
  int v25;
  int v26;
  int v27;
  char *v28;
  int v29;
  int v30; // xmm1_4
  int v31;
  int v32; // xmm2_4
  int v33;
  uint32_t *v34;
  int v35;
  uint32_t *v36;
  int v37;
  int v38;
  int v39;
  float *v40;
  float v41; // xmm1_4
  float v42; // xmm2_4
  float v43; // xmm4_4
  float v44; // xmm6_4
  float v45; // xmm7_4
  float v46; // xmm3_4
  float i; // xmm5_4
  float v48; // xmm4_4
  float v49; // xmm3_4
  float v50; // xmm6_4
  int v51;
  int v52;
  char *v53;
  int v54;
  float *v55;
  char *v56;
  int v57;
  int v58;
  int v59;
  char *v60;
  uint32_t *v61;
  char *v62;
  char *v63;
  int *v64;
  int v65;
  int v66;
  int v67;
  uint32_t *v68;
  int v69;
  char *v70;
  uint32_t *v71;
  int v72;
  int v73;
  uint32_t *v74;
  int v75;
  gameswf::Self *v76;
  int v77;
  int v78;
  float *v79;
  int v80;
  uint32_t *v81;
  int v82;
  int v83;
  float v84; // xmm1_4
  int v85;
  int v86;
  float v87; // xmm1_4
  int v88;
  int v89;
  float *v90;
  float v91; // xmm1_4
  float *v92;
  float v93; // xmm2_4
  float v94; // xmm3_4
  float v95; // xmm4_4
  long double v96; // fst7
  float v97; // xmm1_4
  int v98;
  gameswf::Self *v99;
  float v100; // xmm5_4
  float v101; // xmm7_4
  int v102;
  float v103; // xmm2_4
  float v104; // xmm4_4
  float v105; // xmm6_4
  float v106; // xmm3_4
  float *v107;
  float v108; // xmm1_4
  int v109;
  int v110;
  float v111; // xmm6_4
  gameswf::Self *v112;
  float v113; // xmm3_4
  float v114; // xmm5_4
  int v115;
  float v116; // xmm7_4
  float v117; // xmm2_4
  float v118; // xmm4_4
  float *v119;
  float v120; // xmm1_4
  float *v121;
  float v122; // xmm2_4
  float v123; // xmm1_4
  int v124;
  float *v125;
  float v126; // xmm2_4
  float v127; // xmm1_4
  float v128; // xmm4_4
  float v129; // xmm3_4
  float v130; // xmm2_4
  double v131; // xmm1_8
  float v132; // xmm6_4
  long double v133; // fst7
  int v134;
  int v135;
  uint32_t *v136;
  gameswf::Self **v137;
  int v138;
  int v139;
  int v140;
  uint32_t *v141;
  int v142;
  gameswf::Self *v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  gameswf::Self **m;
  gameswf::Self *v150;
  char *v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  gameswf::Self *v157;
  int v158;
  uint32_t *v159;
  char *v160;
  int v161;
  gameswf::Self **v162;
  int v163;
  int v164;
  uint32_t *v165;
  gameswf::Self *v166;
  gameswf::Self *v167;
  bool v168;
  char *v169;
  uint32_t *v170;
  int v171;
  int v172;
  uint32_t *v173;
  int v174;
  gameswf::Self *v175;
  gameswf::Self *v176;
  int v177;
  unsigned int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  gameswf::Self *v193;
  int v194;
  int v195;
  int v196;
  uint32_t *v197;
  int v198;
  int v199;
  int v200;
  gameswf::Self *v201;
  void *v202;
  int v203;
  int v204;
  int v205;
  float v206; // xmm1_4
  float v207;
  float v208; // xmm1_4
  float v209;
  float v210; // xmm2_4
  float v211;
  float v212; // xmm2_4
  float v213;
  float v214; // xmm1_4
  typedef double _g4_t_v215;
  typedef int _g4_t_v216;
  typedef float _g4_t_v217;
  typedef float _g4_t_v218;
  typedef float _g4_t_v219;
  typedef float _g4_t_v220;
  typedef float _g4_t_v221;
  typedef float _g4_t_v222;
  typedef float _g4_t_v223;
  typedef float _g4_t_v224;
  typedef float _g4_t_v225;
  typedef float _g4_t_v226;
  typedef float _g4_t_v227;
  typedef float _g4_t_v228;
  typedef float _g4_t_v229;
  typedef float _g4_t_v230;
  typedef float _g4_t_v231;
  typedef float _g4_t_v232;
  typedef float _g4_t_v233;
  typedef float _g4_t_v234;
  typedef int _g4_t_v235;
  typedef int _g4_t_v236;
  typedef int _g4_t_v237;
  typedef int _g4_t_v238;
  typedef int *_g4_t_v239;
  typedef char _g4_t_v240;
  typedef int _g4_t_v241;
  typedef int _g4_t_v242;
  typedef int _g4_t_v243;
  typedef int _g4_t_v244;
  typedef float _g4_t_v245;
  typedef float _g4_t_v246;
  typedef char *_g4_t_v247;
  typedef int _g4_t_v248;
  typedef int _g4_t_v249;
  typedef double _g4_t_v250;
  typedef bool _g4_t_v251;
  typedef uint32_t _g4_t_v252;
  typedef int _g4_t_v253;
  typedef int _g4_t_v254;
  typedef int _g4_t_v255;
  typedef char _g4_t_v256;
  typedef double _g4_t_v257;
  typedef gameswf::Self *_g4_t_v258;
  typedef uint32_t _g4_t_v259;
  typedef bool _g4_t_v260;
  typedef int _g4_t_v261;
  typedef double _g4_t_v262;
  typedef int _g4_t_v263;
  typedef int _g4_t_v264;
  typedef int _g4_t_v265;
  typedef char *_g4_t_v266;
  typedef float _g4_t_v267;
  typedef char *_g4_t_v268;
  typedef char *_g4_t_v269;
  typedef uint32_t *_g4_t_v270;
  typedef int _g4_t_v271;
  typedef char *_g4_t_v272;
  typedef int _g4_t_v273;
  typedef int _g4_t_v274;
  typedef uint32_t *_g4_t_v275;
  typedef uint32_t *_g4_t_v276;
  typedef int _g4_t_v277;
  typedef uint32_t *_g4_t_v278;
  typedef char _g4_t_v279;
  typedef float _g4_t_v280;
  typedef int _g4_t_v281;
  typedef uint32_t *_g4_t_v282;
  typedef int _g4_t_v283;
  typedef uint32_t *_g4_t_v284;
  typedef int _g4_t_v285;
  typedef int _g4_t_v286;
  typedef float _g4_t_v287;
  typedef int _g4_t_v288;
  typedef int _g4_t_v289;
  typedef float _g4_t_v290;
  typedef float _g4_t_v291;
  typedef uint32_t *_g4_t_v292;
  typedef int _g4_t_v293;
  typedef gameswf::Self *_g4_t_v294;
  typedef int _g4_t_v295;
  typedef int _g4_t_v296;
  typedef float _g4_t_v297;
  typedef int _g4_t_v298;
  typedef int _g4_t_v299;
  typedef int _g4_t_v300;
  typedef float _g4_t_v301;
  typedef gameswf::Self **_g4_t_v302;
  typedef int _g4_t_v303;
  typedef int _g4_t_k;
  typedef int _g4_t_v305;
  typedef int _g4_t_v306;
  typedef float _g4_t_v307;
  typedef char *_g4_t_v308;
  typedef int _g4_t_j;
  typedef gameswf::Self *_g4_t_v310;
  typedef gameswf::Self *_g4_t_v311;
  typedef int _g4_t_v312;
  typedef int _g4_t_v313;
  typedef int _g4_t_v314;
  typedef int _g4_t_v315;
  typedef float _g4_t_v316;
  typedef float _g4_t_v317;
  typedef float _g4_t_v318;
  typedef float _g4_t_v319;
  typedef float _g4_t_v320;
  typedef float _g4_t_v321;
  typedef float _g4_t_v322;
  typedef float _g4_t_v323;
  typedef gameswf::Self *_g4_t_v324;
  typedef int _g4_t_v325;
  typedef int _g4_t_v326;
  typedef int _g4_t_v327;
  typedef gameswf::Self *_g4_t_v328;
  typedef int _g4_t_v329;
  typedef int _g4_t_v330;
  typedef int _g4_t_v331;
  typedef float _g4_t_v332[6];
  typedef gameswf::Self *_g4_t_v333;
  typedef int _g4_t_v334;
  typedef int _g4_t_v335;
  typedef int _g4_t_v336;
  typedef gameswf::Self *_g4_t_v337;
  typedef int _g4_t_v338;
  typedef int _g4_t_v339;
  typedef int _g4_t_v340;
  typedef uint32_t _g4_t_v341[15];
  typedef GLUtesselator *_g4_t_v342;
  typedef uint32_t _g4_t_v343[15];
  typedef GLUtesselator *_g4_t_v344;
  typedef uint32_t _g4_t_v345[15];
  typedef GLUtesselator *_g4_t_v346;
  typedef uint32_t _g4_t_v347[15];
  typedef GLUtesselator *_g4_t_v348;
  enum : size_t {
    _g4_s0 = 752u,
    _g4_s1 = (0u + sizeof(_g4_t_v215)) > _g4_s0 ? (0u + sizeof(_g4_t_v215)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v216)) > _g4_s1 ? (36u + sizeof(_g4_t_v216)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v217)) > _g4_s2 ? (48u + sizeof(_g4_t_v217)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v218)) > _g4_s3 ? (48u + sizeof(_g4_t_v218)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v219)) > _g4_s4 ? (64u + sizeof(_g4_t_v219)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v220)) > _g4_s5 ? (64u + sizeof(_g4_t_v220)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v221)) > _g4_s6 ? (80u + sizeof(_g4_t_v221)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v222)) > _g4_s7 ? (80u + sizeof(_g4_t_v222)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v223)) > _g4_s8 ? (96u + sizeof(_g4_t_v223)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v224)) > _g4_s9 ? (96u + sizeof(_g4_t_v224)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v225)) > _g4_s10 ? (96u + sizeof(_g4_t_v225)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v226)) > _g4_s11 ? (112u + sizeof(_g4_t_v226)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v227)) > _g4_s12 ? (112u + sizeof(_g4_t_v227)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v228)) > _g4_s13 ? (112u + sizeof(_g4_t_v228)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v229)) > _g4_s14 ? (112u + sizeof(_g4_t_v229)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v230)) > _g4_s15 ? (112u + sizeof(_g4_t_v230)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v231)) > _g4_s16 ? (128u + sizeof(_g4_t_v231)) : _g4_s16,
    _g4_s18 = (128u + sizeof(_g4_t_v232)) > _g4_s17 ? (128u + sizeof(_g4_t_v232)) : _g4_s17,
    _g4_s19 = (144u + sizeof(_g4_t_v233)) > _g4_s18 ? (144u + sizeof(_g4_t_v233)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v234)) > _g4_s19 ? (144u + sizeof(_g4_t_v234)) : _g4_s19,
    _g4_s21 = (164u + sizeof(_g4_t_v235)) > _g4_s20 ? (164u + sizeof(_g4_t_v235)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v236)) > _g4_s21 ? (164u + sizeof(_g4_t_v236)) : _g4_s21,
    _g4_s23 = (164u + sizeof(_g4_t_v237)) > _g4_s22 ? (164u + sizeof(_g4_t_v237)) : _g4_s22,
    _g4_s24 = (164u + sizeof(_g4_t_v238)) > _g4_s23 ? (164u + sizeof(_g4_t_v238)) : _g4_s23,
    _g4_s25 = (164u + sizeof(_g4_t_v239)) > _g4_s24 ? (164u + sizeof(_g4_t_v239)) : _g4_s24,
    _g4_s26 = (171u + sizeof(_g4_t_v240)) > _g4_s25 ? (171u + sizeof(_g4_t_v240)) : _g4_s25,
    _g4_s27 = (184u + sizeof(_g4_t_v241)) > _g4_s26 ? (184u + sizeof(_g4_t_v241)) : _g4_s26,
    _g4_s28 = (192u + sizeof(_g4_t_v242)) > _g4_s27 ? (192u + sizeof(_g4_t_v242)) : _g4_s27,
    _g4_s29 = (196u + sizeof(_g4_t_v243)) > _g4_s28 ? (196u + sizeof(_g4_t_v243)) : _g4_s28,
    _g4_s30 = (200u + sizeof(_g4_t_v244)) > _g4_s29 ? (200u + sizeof(_g4_t_v244)) : _g4_s29,
    _g4_s31 = (204u + sizeof(_g4_t_v245)) > _g4_s30 ? (204u + sizeof(_g4_t_v245)) : _g4_s30,
    _g4_s32 = (208u + sizeof(_g4_t_v246)) > _g4_s31 ? (208u + sizeof(_g4_t_v246)) : _g4_s31,
    _g4_s33 = (212u + sizeof(_g4_t_v247)) > _g4_s32 ? (212u + sizeof(_g4_t_v247)) : _g4_s32,
    _g4_s34 = (216u + sizeof(_g4_t_v248)) > _g4_s33 ? (216u + sizeof(_g4_t_v248)) : _g4_s33,
    _g4_s35 = (220u + sizeof(_g4_t_v249)) > _g4_s34 ? (220u + sizeof(_g4_t_v249)) : _g4_s34,
    _g4_s36 = (224u + sizeof(_g4_t_v250)) > _g4_s35 ? (224u + sizeof(_g4_t_v250)) : _g4_s35,
    _g4_s37 = (232u + sizeof(_g4_t_v251)) > _g4_s36 ? (232u + sizeof(_g4_t_v251)) : _g4_s36,
    _g4_s38 = (236u + sizeof(_g4_t_v252)) > _g4_s37 ? (236u + sizeof(_g4_t_v252)) : _g4_s37,
    _g4_s39 = (236u + sizeof(_g4_t_v253)) > _g4_s38 ? (236u + sizeof(_g4_t_v253)) : _g4_s38,
    _g4_s40 = (240u + sizeof(_g4_t_v254)) > _g4_s39 ? (240u + sizeof(_g4_t_v254)) : _g4_s39,
    _g4_s41 = (240u + sizeof(_g4_t_v255)) > _g4_s40 ? (240u + sizeof(_g4_t_v255)) : _g4_s40,
    _g4_s42 = (240u + sizeof(_g4_t_v256)) > _g4_s41 ? (240u + sizeof(_g4_t_v256)) : _g4_s41,
    _g4_s43 = (240u + sizeof(_g4_t_v257)) > _g4_s42 ? (240u + sizeof(_g4_t_v257)) : _g4_s42,
    _g4_s44 = (240u + sizeof(_g4_t_v258)) > _g4_s43 ? (240u + sizeof(_g4_t_v258)) : _g4_s43,
    _g4_s45 = (248u + sizeof(_g4_t_v259)) > _g4_s44 ? (248u + sizeof(_g4_t_v259)) : _g4_s44,
    _g4_s46 = (248u + sizeof(_g4_t_v260)) > _g4_s45 ? (248u + sizeof(_g4_t_v260)) : _g4_s45,
    _g4_s47 = (248u + sizeof(_g4_t_v261)) > _g4_s46 ? (248u + sizeof(_g4_t_v261)) : _g4_s46,
    _g4_s48 = (248u + sizeof(_g4_t_v262)) > _g4_s47 ? (248u + sizeof(_g4_t_v262)) : _g4_s47,
    _g4_s49 = (256u + sizeof(_g4_t_v263)) > _g4_s48 ? (256u + sizeof(_g4_t_v263)) : _g4_s48,
    _g4_s50 = (256u + sizeof(_g4_t_v264)) > _g4_s49 ? (256u + sizeof(_g4_t_v264)) : _g4_s49,
    _g4_s51 = (256u + sizeof(_g4_t_v265)) > _g4_s50 ? (256u + sizeof(_g4_t_v265)) : _g4_s50,
    _g4_s52 = (256u + sizeof(_g4_t_v266)) > _g4_s51 ? (256u + sizeof(_g4_t_v266)) : _g4_s51,
    _g4_s53 = (256u + sizeof(_g4_t_v267)) > _g4_s52 ? (256u + sizeof(_g4_t_v267)) : _g4_s52,
    _g4_s54 = (260u + sizeof(_g4_t_v268)) > _g4_s53 ? (260u + sizeof(_g4_t_v268)) : _g4_s53,
    _g4_s55 = (260u + sizeof(_g4_t_v269)) > _g4_s54 ? (260u + sizeof(_g4_t_v269)) : _g4_s54,
    _g4_s56 = (260u + sizeof(_g4_t_v270)) > _g4_s55 ? (260u + sizeof(_g4_t_v270)) : _g4_s55,
    _g4_s57 = (260u + sizeof(_g4_t_v271)) > _g4_s56 ? (260u + sizeof(_g4_t_v271)) : _g4_s56,
    _g4_s58 = (260u + sizeof(_g4_t_v272)) > _g4_s57 ? (260u + sizeof(_g4_t_v272)) : _g4_s57,
    _g4_s59 = (260u + sizeof(_g4_t_v273)) > _g4_s58 ? (260u + sizeof(_g4_t_v273)) : _g4_s58,
    _g4_s60 = (260u + sizeof(_g4_t_v274)) > _g4_s59 ? (260u + sizeof(_g4_t_v274)) : _g4_s59,
    _g4_s61 = (264u + sizeof(_g4_t_v275)) > _g4_s60 ? (264u + sizeof(_g4_t_v275)) : _g4_s60,
    _g4_s62 = (264u + sizeof(_g4_t_v276)) > _g4_s61 ? (264u + sizeof(_g4_t_v276)) : _g4_s61,
    _g4_s63 = (264u + sizeof(_g4_t_v277)) > _g4_s62 ? (264u + sizeof(_g4_t_v277)) : _g4_s62,
    _g4_s64 = (264u + sizeof(_g4_t_v278)) > _g4_s63 ? (264u + sizeof(_g4_t_v278)) : _g4_s63,
    _g4_s65 = (264u + sizeof(_g4_t_v279)) > _g4_s64 ? (264u + sizeof(_g4_t_v279)) : _g4_s64,
    _g4_s66 = (264u + sizeof(_g4_t_v280)) > _g4_s65 ? (264u + sizeof(_g4_t_v280)) : _g4_s65,
    _g4_s67 = (264u + sizeof(_g4_t_v281)) > _g4_s66 ? (264u + sizeof(_g4_t_v281)) : _g4_s66,
    _g4_s68 = (264u + sizeof(_g4_t_v282)) > _g4_s67 ? (264u + sizeof(_g4_t_v282)) : _g4_s67,
    _g4_s69 = (264u + sizeof(_g4_t_v283)) > _g4_s68 ? (264u + sizeof(_g4_t_v283)) : _g4_s68,
    _g4_s70 = (264u + sizeof(_g4_t_v284)) > _g4_s69 ? (264u + sizeof(_g4_t_v284)) : _g4_s69,
    _g4_s71 = (268u + sizeof(_g4_t_v285)) > _g4_s70 ? (268u + sizeof(_g4_t_v285)) : _g4_s70,
    _g4_s72 = (268u + sizeof(_g4_t_v286)) > _g4_s71 ? (268u + sizeof(_g4_t_v286)) : _g4_s71,
    _g4_s73 = (268u + sizeof(_g4_t_v287)) > _g4_s72 ? (268u + sizeof(_g4_t_v287)) : _g4_s72,
    _g4_s74 = (268u + sizeof(_g4_t_v288)) > _g4_s73 ? (268u + sizeof(_g4_t_v288)) : _g4_s73,
    _g4_s75 = (268u + sizeof(_g4_t_v289)) > _g4_s74 ? (268u + sizeof(_g4_t_v289)) : _g4_s74,
    _g4_s76 = (268u + sizeof(_g4_t_v290)) > _g4_s75 ? (268u + sizeof(_g4_t_v290)) : _g4_s75,
    _g4_s77 = (268u + sizeof(_g4_t_v291)) > _g4_s76 ? (268u + sizeof(_g4_t_v291)) : _g4_s76,
    _g4_s78 = (268u + sizeof(_g4_t_v292)) > _g4_s77 ? (268u + sizeof(_g4_t_v292)) : _g4_s77,
    _g4_s79 = (268u + sizeof(_g4_t_v293)) > _g4_s78 ? (268u + sizeof(_g4_t_v293)) : _g4_s78,
    _g4_s80 = (268u + sizeof(_g4_t_v294)) > _g4_s79 ? (268u + sizeof(_g4_t_v294)) : _g4_s79,
    _g4_s81 = (272u + sizeof(_g4_t_v295)) > _g4_s80 ? (272u + sizeof(_g4_t_v295)) : _g4_s80,
    _g4_s82 = (272u + sizeof(_g4_t_v296)) > _g4_s81 ? (272u + sizeof(_g4_t_v296)) : _g4_s81,
    _g4_s83 = (272u + sizeof(_g4_t_v297)) > _g4_s82 ? (272u + sizeof(_g4_t_v297)) : _g4_s82,
    _g4_s84 = (272u + sizeof(_g4_t_v298)) > _g4_s83 ? (272u + sizeof(_g4_t_v298)) : _g4_s83,
    _g4_s85 = (272u + sizeof(_g4_t_v299)) > _g4_s84 ? (272u + sizeof(_g4_t_v299)) : _g4_s84,
    _g4_s86 = (272u + sizeof(_g4_t_v300)) > _g4_s85 ? (272u + sizeof(_g4_t_v300)) : _g4_s85,
    _g4_s87 = (272u + sizeof(_g4_t_v301)) > _g4_s86 ? (272u + sizeof(_g4_t_v301)) : _g4_s86,
    _g4_s88 = (272u + sizeof(_g4_t_v302)) > _g4_s87 ? (272u + sizeof(_g4_t_v302)) : _g4_s87,
    _g4_s89 = (272u + sizeof(_g4_t_v303)) > _g4_s88 ? (272u + sizeof(_g4_t_v303)) : _g4_s88,
    _g4_s90 = (272u + sizeof(_g4_t_k)) > _g4_s89 ? (272u + sizeof(_g4_t_k)) : _g4_s89,
    _g4_s91 = (280u + sizeof(_g4_t_v305)) > _g4_s90 ? (280u + sizeof(_g4_t_v305)) : _g4_s90,
    _g4_s92 = (280u + sizeof(_g4_t_v306)) > _g4_s91 ? (280u + sizeof(_g4_t_v306)) : _g4_s91,
    _g4_s93 = (280u + sizeof(_g4_t_v307)) > _g4_s92 ? (280u + sizeof(_g4_t_v307)) : _g4_s92,
    _g4_s94 = (280u + sizeof(_g4_t_v308)) > _g4_s93 ? (280u + sizeof(_g4_t_v308)) : _g4_s93,
    _g4_s95 = (280u + sizeof(_g4_t_j)) > _g4_s94 ? (280u + sizeof(_g4_t_j)) : _g4_s94,
    _g4_s96 = (280u + sizeof(_g4_t_v310)) > _g4_s95 ? (280u + sizeof(_g4_t_v310)) : _g4_s95,
    _g4_s97 = (280u + sizeof(_g4_t_v311)) > _g4_s96 ? (280u + sizeof(_g4_t_v311)) : _g4_s96,
    _g4_s98 = (280u + sizeof(_g4_t_v312)) > _g4_s97 ? (280u + sizeof(_g4_t_v312)) : _g4_s97,
    _g4_s99 = (280u + sizeof(_g4_t_v313)) > _g4_s98 ? (280u + sizeof(_g4_t_v313)) : _g4_s98,
    _g4_s100 = (280u + sizeof(_g4_t_v314)) > _g4_s99 ? (280u + sizeof(_g4_t_v314)) : _g4_s99,
    _g4_s101 = (280u + sizeof(_g4_t_v315)) > _g4_s100 ? (280u + sizeof(_g4_t_v315)) : _g4_s100,
    _g4_s102 = (288u + sizeof(_g4_t_v316)) > _g4_s101 ? (288u + sizeof(_g4_t_v316)) : _g4_s101,
    _g4_s103 = (292u + sizeof(_g4_t_v317)) > _g4_s102 ? (292u + sizeof(_g4_t_v317)) : _g4_s102,
    _g4_s104 = (296u + sizeof(_g4_t_v318)) > _g4_s103 ? (296u + sizeof(_g4_t_v318)) : _g4_s103,
    _g4_s105 = (300u + sizeof(_g4_t_v319)) > _g4_s104 ? (300u + sizeof(_g4_t_v319)) : _g4_s104,
    _g4_s106 = (304u + sizeof(_g4_t_v320)) > _g4_s105 ? (304u + sizeof(_g4_t_v320)) : _g4_s105,
    _g4_s107 = (308u + sizeof(_g4_t_v321)) > _g4_s106 ? (308u + sizeof(_g4_t_v321)) : _g4_s106,
    _g4_s108 = (312u + sizeof(_g4_t_v322)) > _g4_s107 ? (312u + sizeof(_g4_t_v322)) : _g4_s107,
    _g4_s109 = (316u + sizeof(_g4_t_v323)) > _g4_s108 ? (316u + sizeof(_g4_t_v323)) : _g4_s108,
    _g4_s110 = (320u + sizeof(_g4_t_v324)) > _g4_s109 ? (320u + sizeof(_g4_t_v324)) : _g4_s109,
    _g4_s111 = (324u + sizeof(_g4_t_v325)) > _g4_s110 ? (324u + sizeof(_g4_t_v325)) : _g4_s110,
    _g4_s112 = (328u + sizeof(_g4_t_v326)) > _g4_s111 ? (328u + sizeof(_g4_t_v326)) : _g4_s111,
    _g4_s113 = (332u + sizeof(_g4_t_v327)) > _g4_s112 ? (332u + sizeof(_g4_t_v327)) : _g4_s112,
    _g4_s114 = (336u + sizeof(_g4_t_v328)) > _g4_s113 ? (336u + sizeof(_g4_t_v328)) : _g4_s113,
    _g4_s115 = (340u + sizeof(_g4_t_v329)) > _g4_s114 ? (340u + sizeof(_g4_t_v329)) : _g4_s114,
    _g4_s116 = (344u + sizeof(_g4_t_v330)) > _g4_s115 ? (344u + sizeof(_g4_t_v330)) : _g4_s115,
    _g4_s117 = (348u + sizeof(_g4_t_v331)) > _g4_s116 ? (348u + sizeof(_g4_t_v331)) : _g4_s116,
    _g4_s118 = (360u + sizeof(_g4_t_v332)) > _g4_s117 ? (360u + sizeof(_g4_t_v332)) : _g4_s117,
    _g4_s119 = (384u + sizeof(_g4_t_v333)) > _g4_s118 ? (384u + sizeof(_g4_t_v333)) : _g4_s118,
    _g4_s120 = (388u + sizeof(_g4_t_v334)) > _g4_s119 ? (388u + sizeof(_g4_t_v334)) : _g4_s119,
    _g4_s121 = (392u + sizeof(_g4_t_v335)) > _g4_s120 ? (392u + sizeof(_g4_t_v335)) : _g4_s120,
    _g4_s122 = (396u + sizeof(_g4_t_v336)) > _g4_s121 ? (396u + sizeof(_g4_t_v336)) : _g4_s121,
    _g4_s123 = (400u + sizeof(_g4_t_v337)) > _g4_s122 ? (400u + sizeof(_g4_t_v337)) : _g4_s122,
    _g4_s124 = (404u + sizeof(_g4_t_v338)) > _g4_s123 ? (404u + sizeof(_g4_t_v338)) : _g4_s123,
    _g4_s125 = (408u + sizeof(_g4_t_v339)) > _g4_s124 ? (408u + sizeof(_g4_t_v339)) : _g4_s124,
    _g4_s126 = (412u + sizeof(_g4_t_v340)) > _g4_s125 ? (412u + sizeof(_g4_t_v340)) : _g4_s125,
    _g4_s127 = (416u + sizeof(_g4_t_v341)) > _g4_s126 ? (416u + sizeof(_g4_t_v341)) : _g4_s126,
    _g4_s128 = (476u + sizeof(_g4_t_v342)) > _g4_s127 ? (476u + sizeof(_g4_t_v342)) : _g4_s127,
    _g4_s129 = (480u + sizeof(_g4_t_v343)) > _g4_s128 ? (480u + sizeof(_g4_t_v343)) : _g4_s128,
    _g4_s130 = (540u + sizeof(_g4_t_v344)) > _g4_s129 ? (540u + sizeof(_g4_t_v344)) : _g4_s129,
    _g4_s131 = (544u + sizeof(_g4_t_v345)) > _g4_s130 ? (544u + sizeof(_g4_t_v345)) : _g4_s130,
    _g4_s132 = (604u + sizeof(_g4_t_v346)) > _g4_s131 ? (604u + sizeof(_g4_t_v346)) : _g4_s131,
    _g4_s133 = (608u + sizeof(_g4_t_v347)) > _g4_s132 ? (608u + sizeof(_g4_t_v347)) : _g4_s132,
    _g4_s134 = (668u + sizeof(_g4_t_v348)) > _g4_s133 ? (668u + sizeof(_g4_t_v348)) : _g4_s133
  };
  alignas(16) uint8_t _g4_sf[_g4_s134];
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 0u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 36u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 48u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 48u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 64u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 64u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 80u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 80u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 96u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 96u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 96u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 112u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 112u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 112u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 112u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 112u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 128u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 128u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 144u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 144u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 164u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 164u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 164u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 164u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 164u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 171u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 184u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 192u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 196u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 200u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 204u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 208u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 212u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 216u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 220u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 224u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 232u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 236u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 236u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 240u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 240u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 240u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 240u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 240u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 248u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 248u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 248u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 248u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 256u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 256u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 256u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 256u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 256u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 260u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 260u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 260u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 260u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 260u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 260u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 260u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 264u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 264u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 264u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 264u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 264u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 264u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 264u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 264u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 264u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 264u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 268u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 268u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 268u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 268u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 268u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 268u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 268u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 268u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 268u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 268u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 272u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 272u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 272u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 272u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 272u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 272u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 272u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 272u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 272u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 272u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 280u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 280u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 280u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 280u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 280u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 280u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 280u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 280u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 280u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 280u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 280u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 288u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 292u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 296u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 300u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 304u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 308u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 312u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 316u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 320u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 324u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 328u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 332u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 336u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 340u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 344u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 348u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 360u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 384u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 388u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 392u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 396u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 400u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 404u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 408u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 412u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 416u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 476u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 480u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 540u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 544u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 604u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 608u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 668u);

  memset(&v341[1], 0, 52);
  *(float *)&v341[14] = a3;
  v342 = (GLUtesselator *)gluNewTess();
  gluTessProperty(v342, 100140, 100130.0);
  gluTessProperty(v342, 100141, 0.0);
  gluTessCallback(v342, 100106, (void (*)())gameswf::TesselatorAccepter::callbackBegin);
  gluTessCallback(v342, 100107, (void (*)())gameswf::TesselatorAccepter::callbackVertex);
  gluTessCallback(v342, 100111, (void (*)())gameswf::TesselatorAccepter::callbackCombine);
  gluTessCallback(v342, 100109, (void (*)())gameswf::TesselatorAccepter::callbackError);
  gluTessCallback(v342, 100108, (void (*)())((void (*)(gameswf::TesselatorAccepter::Self *))gameswf::TesselatorAccepter::callbackEndTris));
  memset(&v343[1], 0, 48);
  *(float *)&v343[14] = a3;
  v343[13] = 1;
  v344 = (GLUtesselator *)gluNewTess();
  gluTessProperty(v344, 100140, 100130.0);
  gluTessProperty(v344, 100141, 1.0);
  gluTessCallback(v344, 100106, (void (*)())gameswf::TesselatorAccepter::callbackBegin);
  gluTessCallback(v344, 100107, (void (*)())gameswf::TesselatorAccepter::callbackVertex);
  gluTessCallback(v344, 100111, (void (*)())gameswf::TesselatorAccepter::callbackCombine);
  gluTessCallback(v344, 100109, (void (*)())gameswf::TesselatorAccepter::callbackError);
  gluTessCallback(v344, 100108, (void (*)())((void (*)(gameswf::TesselatorAccepter::Self *))gameswf::TesselatorAccepter::callbackEndTris));
  memset(&v345[1], 0, 52);
  *(float *)&v345[14] = a3;
  v346 = (GLUtesselator *)gluNewTess();
  gluTessProperty(v346, 100140, 100131.0);
  gluTessProperty(v346, 100141, 0.0);
  gluTessCallback(v346, 100106, (void (*)())gameswf::TesselatorAccepter::callbackBegin);
  gluTessCallback(v346, 100107, (void (*)())gameswf::TesselatorAccepter::callbackVertex);
  gluTessCallback(v346, 100111, (void (*)())gameswf::TesselatorAccepter::callbackCombine);
  gluTessCallback(v346, 100109, (void (*)())gameswf::TesselatorAccepter::callbackError);
  gluTessCallback(v346, 100108, (void (*)())((void (*)(gameswf::TesselatorAccepter::Self *))gameswf::TesselatorAccepter::callbackEndTris));
  memset(&v347[1], 0, 48);
  *(float *)&v347[14] = a3;
  v347[13] = 65537;
  v348 = (GLUtesselator *)gluNewTess();
  gluTessProperty(v348, 100140, 100130.0);
  gluTessProperty(v348, 100141, 1.0);
  gluTessCallback(v348, 100106, (void (*)())gameswf::TesselatorAccepter::callbackBegin);
  gluTessCallback(v348, 100107, (void (*)())gameswf::TesselatorAccepter::callbackVertex);
  gluTessCallback(v348, 100111, (void (*)())gameswf::TesselatorAccepter::callbackCombine);
  gluTessCallback(v348, 100109, (void (*)())gameswf::TesselatorAccepter::callbackError);
  gluTessCallback(v348, 100108, (void (*)())((void (*)(gameswf::TesselatorAccepter::Self *))gameswf::TesselatorAccepter::callbackEndTris));
  if ( byte_20E55A0 != 0 || byte_20E55A1 != 0 )
    a3 = a3 * 0.8f;
  v324 = nullptr;
  v325 = 0;
  v326 = 0;
  v327 = 0;
  v3 = *((uint32_t *)a2 + 8);
  if ( v3 <= 0 )
    v3 = 1;
  sub_10EF190((int)(uintptr_t)(&v324), v3);
  if ( v325 > 0 )
  {
g4_m128_raw(v4) = 0;
    v254 = 0;
g4_m128_lane<int32_t>(v4, 0) = -(a3 > 0.0);
    v263 = 0;
    v252 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v4, g4_m128_u32(0x3F800000u)), 0) | LODWORD(a3) &g4_m128_lane<int32_t>(v4, 0);
    do
    {
      v268 = (char *)v324 + v254;
      v5 = (char *)v324 + v254;
      *((uint32_t *)v268 + 2) = v252;
      *((uint32_t *)v268 + 1) = v263;
      *v268 = 0;
      v6 = *((uint32_t *)v5 + 4);
      v275 = (uint32_t *)(v268 + 12);
      v285 = v6;
      if ( v6 <= 0 )
      {
        if ( v6 < 0 )
        {
          v185 = v6;
          v186 = 20 * v6;
          do
          {
            v187 = *v275 + v186;
            if ( v187 != 0 )
            {
              *(uint8_t *)v187 = 0;
              *(uint32_t *)(v187 + 4) = 0;
              *(uint32_t *)(v187 + 8) = 0;
              *(uint32_t *)(v187 + 12) = 0;
              *(uint32_t *)(v187 + 16) = 0;
            }
            v186 += 20;
            ++v185;
          }
          while ( v185 != 0 );
        }
      }
      else
      {
        v295 = 0;
        v305 = 0;
        do
        {
          v7 = (uint32_t *)(*v275 + v295);
          v8 = v7[2];
          if ( v8 < 0 )
          {
            v9 = 8 * v8;
            do
            {
              v10 = (uint32_t *)(v7[1] + v9);
              if ( v10 != nullptr )
              {
                *v10 = 0;
                v10[1] = 0;
              }
              v9 += 8;
              ++v8;
            }
            while ( v8 != 0 );
          }
          v11 = v7[4];
          v7[2] = 0;
          if ( v11 == 0 )
          {
            v12 = (gameswf::Self *)v7[1];
            v7[3] = 0;
            if ( v12 != nullptr )
              gameswf::free_internal(v12);
            v7[1] = 0;
          }
          ++v305;
          v295 += 20;
        }
        while ( v305 != v285 );
      }
      ++v263;
      v254 += 56;
      v13 = v325 <= v263;
      *((uint32_t *)v268 + 4) = 0;
    }
    while ( !v13 );
  }
  v328 = nullptr;
  v329 = 0;
  v330 = 0;
  v331 = 0;
  sub_10EF190((int)(uintptr_t)(&v328), *((uint32_t *)a2 + 12));
  if ( v329 > 0 )
  {
g4_m128_raw(v14) = 0;
    v255 = 0;
g4_m128_lane<int32_t>(v14, 0) = -(a3 > 0.0);
    v264 = 0;
    v259 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v14, g4_m128_u32(0x3F800000u)), 0) | LODWORD(a3) &g4_m128_lane<int32_t>(v14, 0);
    do
    {
      v269 = (char *)v328 + v255;
      v15 = (char *)v328 + v255;
      *((uint32_t *)v269 + 2) = v259;
      *((uint32_t *)v269 + 1) = v264;
      *v269 = 1;
      v16 = *((uint32_t *)v15 + 4);
      v276 = (uint32_t *)(v269 + 12);
      v286 = v16;
      if ( v16 <= 0 )
      {
        if ( v16 < 0 )
        {
          v188 = v16;
          v189 = 20 * v16;
          do
          {
            v190 = *v276 + v189;
            if ( v190 != 0 )
            {
              *(uint8_t *)v190 = 0;
              *(uint32_t *)(v190 + 4) = 0;
              *(uint32_t *)(v190 + 8) = 0;
              *(uint32_t *)(v190 + 12) = 0;
              *(uint32_t *)(v190 + 16) = 0;
            }
            v189 += 20;
            ++v188;
          }
          while ( v188 != 0 );
        }
      }
      else
      {
        v306 = 0;
        v296 = 0;
        do
        {
          v17 = (uint32_t *)(*v276 + v306);
          v18 = v17[2];
          if ( v18 < 0 )
          {
            v19 = 8 * v18;
            do
            {
              v20 = (uint32_t *)(v17[1] + v19);
              if ( v20 != nullptr )
              {
                *v20 = 0;
                v20[1] = 0;
              }
              v19 += 8;
              ++v18;
            }
            while ( v18 != 0 );
          }
          v21 = v17[4];
          v17[2] = 0;
          if ( v21 == 0 )
          {
            v22 = (gameswf::Self *)v17[1];
            v17[3] = 0;
            if ( v22 != nullptr )
              gameswf::free_internal(v22);
            v17[1] = 0;
          }
          ++v296;
          v306 += 20;
        }
        while ( v296 != v286 );
      }
      ++v264;
      v255 += 56;
      v13 = v329 <= v264;
      *((uint32_t *)v269 + 4) = 0;
    }
    while ( !v13 );
  }
  gameswf::MeshSet::new_layer(self);
  v242 = *((uint32_t *)a2 + 16);
  if ( v242 > 0 )
  {
    v243 = 1;
    v244 = 0;
    v23 = 0.5;
    do
    {
      v24 = *((uint32_t *)a2 + 15);
      v270 = (uint32_t *)(v244 + v24);
      v241 = v243;
      if ( *(uint32_t *)(v244 + v24 + 24) != 0 )
      {
        if ( v242 > v243 && *(uint8_t *)(v24 + v244 + 76) != 0 )
        {
          v240 = 1;
          v260 = true;
        }
        else
        {
          v240 = 0;
          v260 = v242 == v243;
        }
        v265 = 0;
        v256 = v260;
        do
        {
          if ( v265 != 0 )
          {
            if ( v265 == 1 )
            {
              v25 = v270[1];
            }
            else
            {
              v256 = 1;
              v25 = v270[2];
            }
            v26 = v25 - 1;
          }
          else
          {
            v26 = *v270 - 1;
          }
          if ( v26 != -1 )
          {
            v27 = 56 * v26;
            if ( v265 == 2 )
              v28 = (char *)v328 + v27;
            else
              v28 = (char *)v324 + v27;
            v29 = *((uint32_t *)v28 + 9);
            v30 = v270[4];
            v31 = *((uint32_t *)v28 + 10);
            v32 = v270[3];
            v33 = v29 + 1;
            v28[28] = v265 == 0;
            *((uint32_t *)v28 + 12) = v32;
            *((uint32_t *)v28 + 13) = v30;
            if ( v29 + 1 <= v31 || *((uint32_t *)v28 + 11) != 0 )
            {
              v34 = *((uint32_t **)v28 + 8);
              v35 = v29;
            }
            else
            {
              v283 = v33 + (v33 >> 1);
              *((uint32_t *)v28 + 10) = v283;
              v294 = *((gameswf::Self **)v28 + 8);
              if ( v283 != 0 )
              {
                if ( *((uint32_t *)v28 + 8) != 0 )
                  v34 = (uint32_t *)(gameswf::realloc_internal(v294, 8 * v283, 8 * v31));
                else
                  v34 = (uint32_t *)gameswf::malloc_internal(8 * v283);
                *((uint32_t *)v28 + 8) = (uint32_t)(uintptr_t)(v34);
                v35 = *((uint32_t *)v28 + 9);
                v33 = v29 + 1;
              }
              else
              {
                v35 = v29;
                if ( v294 != nullptr )
                {
                  gameswf::free_internal(v294);
                  v35 = *((uint32_t *)v28 + 9);
                  v33 = v29 + 1;
                }
                *((uint32_t *)v28 + 8) = 0;
                v34 = nullptr;
              }
            }
            v36 = &v34[2 * v35];
            if ( v36 != nullptr )
            {
              *v36 = v32;
              v36[1] = v30;
              v34 = *((uint32_t **)v28 + 8);
            }
            *((uint32_t *)v28 + 9) = v33;
            v37 = v34[2 * v29 + 1];
            v38 = v34[2 * v29];
            *((uint32_t *)v28 + 13) = v37;
            v39 = v33;
            *((uint32_t *)v28 + 12) = v38;
            if ( (int)v270[6] > 0 )
            {
              v277 = 0;
              do
              {
                v40 = (float *)(v270[5] + 16 * v277);
                v41 = *v40;
                v297 = v40[2];
                v287 = v40[3];
                v42 = v40[1];
                if ( *v40 == v297 && v42 == v40[3] )
                {
                  v51 = v39 + 1;
                  v77 = *((uint32_t *)v28 + 10);
                  if ( v39 + 1 <= v77 || *((uint32_t *)v28 + 11) != 0 )
                  {
                    v53 = *((char **)v28 + 8);
                    v78 = v39;
                  }
                  else
                  {
                    v300 = v51 + (v51 >> 1);
                    *((uint32_t *)v28 + 10) = v300;
                    v311 = *((gameswf::Self **)v28 + 8);
                    if ( v300 != 0 )
                    {
                      v238 = v39;
                      if ( *((uint32_t *)v28 + 8) != 0 )
                        v53 = (char *)gameswf::realloc_internal(v311, 8 * v300, 8 * v77);
                      else
                        v53 = (char *)gameswf::malloc_internal(8 * v300);
                      *((uint32_t *)v28 + 8) = (uint32_t)(uintptr_t)(v53);
                      v78 = *((uint32_t *)v28 + 9);
                      v39 = v238;
                    }
                    else
                    {
                      v78 = v39;
                      if ( v311 != nullptr )
                      {
                        v237 = v39;
                        gameswf::free_internal(v311);
                        v78 = *((uint32_t *)v28 + 9);
                        v39 = v237;
                      }
                      *((uint32_t *)v28 + 8) = 0;
                      v53 = nullptr;
                    }
                  }
                  v79 = (float *)&v53[8 * v78];
                  if ( v79 != nullptr )
                  {
                    *v79 = v41;
                    v79[1] = v42;
                    v53 = *((char **)v28 + 8);
                  }
                }
                else
                {
                  v43 = *((float *)v28 + 12);
                  v44 = (float)(v287 + *((float *)v28 + 13)) * v23;
                  v307 = (float)((float)((float)(v297 + v43) * v23) + v41) * v23;
                  v45 = (float)(v44 + v42) * v23;
                  if ( (float)(fabs(v44 - v45) + fabs((float)((float)(v297 + v43) * v23) - v307)) >= *((float *)v28 + 2) )
                  {
                    v46 = *((float *)v28 + 13);
                    for ( i = (float)((float)((float)(v297 + v43) * v23) + v41) * v23; ; v307 = i )
                    {
                      gameswf::FinalShape::addCurve(
                        (gameswf::FinalShape::Self *)v28,
                        v43,
                        v46,
                        (float)(v41 + v43) * v23,
                        (float)(v46 + v42) * v23,
                        i,
                        v45);
                      v42 = (float)(v42 + v287) * v23;
                      v41 = (float)(v41 + v297) * v23;
                      v48 = (float)(v307 + v297) * v23;
                      v49 = (float)(v287 + v45) * v23;
                      i = (float)(v41 + v48) * v23;
                      v50 = (float)(v42 + v49) * v23;
                      if ( (float)(fabs(v49 - v50) + fabs(v48 - i)) < *((float *)v28 + 2) )
                        break;
                      v46 = v45;
                      v45 = v50;
                      v43 = v307;
                    }
                    v39 = *((uint32_t *)v28 + 9);
                  }
                  v51 = v39 + 1;
                  v52 = *((uint32_t *)v28 + 10);
                  if ( v39 + 1 <= v52 || *((uint32_t *)v28 + 11) != 0 )
                  {
                    v53 = *((char **)v28 + 8);
                    v54 = v39;
                  }
                  else
                  {
                    v253 = v51 + (v51 >> 1);
                    *((uint32_t *)v28 + 10) = v253;
                    v310 = *((gameswf::Self **)v28 + 8);
                    if ( v253 != 0 )
                    {
                      v236 = v39;
                      if ( *((uint32_t *)v28 + 8) != 0 )
                        v53 = (char *)gameswf::realloc_internal(v310, 8 * v253, 8 * v52);
                      else
                        v53 = (char *)gameswf::malloc_internal(8 * v253);
                      *((uint32_t *)v28 + 8) = (uint32_t)(uintptr_t)(v53);
                      v54 = *((uint32_t *)v28 + 9);
                      v39 = v236;
                    }
                    else
                    {
                      v54 = v39;
                      if ( v310 != nullptr )
                      {
                        v235 = v39;
                        gameswf::free_internal(v310);
                        v54 = *((uint32_t *)v28 + 9);
                        v39 = v235;
                      }
                      *((uint32_t *)v28 + 8) = 0;
                      v53 = nullptr;
                    }
                  }
                  v55 = (float *)&v53[8 * v54];
                  if ( v55 != nullptr )
                  {
                    *v55 = v297;
                    v55[1] = v287;
                    v53 = *((char **)v28 + 8);
                  }
                }
                v56 = &v53[8 * v39];
                *((uint32_t *)v28 + 9) = v51;
                v57 = *(uint32_t *)v56;
                ++v277;
                *((uint32_t *)v28 + 13) = *((uint32_t *)v56 + 1);
                *((uint32_t *)v28 + 12) = v57;
                v39 = v51;
              }
              while ( v270[6] > v277 );
            }
            if ( v39 != 0 )
            {
              v58 = *((uint32_t *)v28 + 4);
              v288 = v58 + 1;
              v59 = *((uint32_t *)v28 + 5);
              if ( v58 + 1 <= v59 || *((uint32_t *)v28 + 6) != 0 )
              {
                v60 = *((char **)v28 + 3);
              }
              else
              {
                v181 = v288 + (v288 >> 1);
                *((uint32_t *)v28 + 5) = v181;
                if ( v181 != 0 )
                {
                  v193 = *((gameswf::Self **)v28 + 3);
                  if ( v193 != nullptr )
                    v60 = (char *)gameswf::realloc_internal(v193, 20 * v181, 20 * v59);
                  else
                    v60 = (char *)gameswf::malloc_internal(20 * v181);
                  *((uint32_t *)v28 + 3) = (uint32_t)(uintptr_t)(v60);
                  v58 = *((uint32_t *)v28 + 4);
                }
                else
                {
                  if ( *((uint32_t *)v28 + 3) != 0 )
                  {
                    gameswf::free_internal(*((gameswf::Self **)v28 + 3));
                    v58 = *((uint32_t *)v28 + 4);
                  }
                  *((uint32_t *)v28 + 3) = 0;
                  v60 = nullptr;
                }
              }
              v61 = (uint32_t *)(v28 + 32);
              v62 = &v60[20 * v58];
              v308 = v62;
              if ( v62 != nullptr )
              {
                v63 = v62;
                *v62 = v28[28];
                v64 = (int *)(v62 + 4);
                *((uint32_t *)v63 + 1) = 0;
                *((uint32_t *)v63 + 2) = 0;
                *((uint32_t *)v63 + 3) = 0;
                *((uint32_t *)v63 + 4) = 0;
                v65 = *((uint32_t *)v28 + 9);
                v298 = v65;
                if ( v65 > 0 )
                {
                  v194 = v65 + (v65 >> 1);
                  *((uint32_t *)v308 + 3) = v194;
                  v239 = v64;
                  v195 = gameswf::malloc_internal(8 * v194);
                  *((uint32_t *)v308 + 1) = v195;
                  v196 = 0;
                  while ( 1 )
                  {
                    v197 = (uint32_t *)(v195 + 8 * v196);
                    if ( v197 != nullptr )
                    {
                      *v197 = 0;
                      v197[1] = 0;
                    }
                    if ( ++v196 == v298 )
                      break;
                    v195 = *((uint32_t *)v308 + 1);
                  }
                  v284 = (uint32_t *)(v28 + 32);
                  *((uint32_t *)v308 + 2) = v196;
                  v198 = 0;
                  do
                  {
                    v199 = *v239;
                    v200 = *(uint32_t *)(*v284 + 8 * v198 + 4);
                    *(uint32_t *)(v199 + 8 * v198) = *(uint32_t *)(*v284 + 8 * v198);
                    *(uint32_t *)(v199 + 8 * v198++ + 4) = v200;
                  }
                  while ( v198 < v239[1] );
                  v61 = (uint32_t *)(v28 + 32);
                }
                else
                {
                  *((uint32_t *)v308 + 2) = v65;
                }
              }
              *((uint32_t *)v28 + 4) = v288;
              v66 = *((uint32_t *)v28 + 9);
              if ( v66 < 0 )
              {
                v67 = 8 * v66;
                do
                {
                  v68 = (uint32_t *)(v67 + *v61);
                  if ( v68 != nullptr )
                  {
                    *v68 = 0;
                    v68[1] = 0;
                  }
                  v67 += 8;
                  ++v66;
                }
                while ( v66 != 0 );
              }
              *((uint32_t *)v28 + 9) = 0;
            }
          }
          ++v265;
        }
        while ( v265 != 3 );
        if ( v260 && v325 > 0 )
        {
          v271 = 0;
          v261 = 0;
          while ( 1 )
          {
            if ( *(uint32_t *)((char *)v324 + v271 + 16) != 0 )
              sub_10F1A40((int)(uintptr_t)(v324) + v271, self, v341);
            if ( byte_20E55A0 == 0 )
              break;
            v69 = *((uint32_t *)a2 + 8);
            if ( v69 != 0
              && (v69 <= v261
               || gameswf::FillStyle::isBitmapFill((gameswf::FillStyle::Self *)(*((uint32_t *)a2 + 7) + 84 * v261))) )
            {
              break;
            }
            v266 = (char *)v324 + v271;
            if ( *(uint32_t *)((char *)v324 + v271 + 16) != 0 )
            {
              sub_10F1A40((int)(uintptr_t)(v324) + v271, self, v347);
              v266 = (char *)v324 + v271;
              v289 = *(uint32_t *)((char *)v324 + v271 + 16);
              v70 = (char *)v324 + v271;
LABEL_91:
              v278 = (uint32_t *)(v70 + 12);
              if ( v289 <= 0 )
              {
                if ( v289 < 0 )
                {
                  v182 = v289;
                  v183 = 20 * v289;
                  do
                  {
                    v184 = *v278 + v183;
                    if ( v184 != 0 )
                    {
                      *(uint8_t *)v184 = 0;
                      *(uint32_t *)(v184 + 4) = 0;
                      *(uint32_t *)(v184 + 8) = 0;
                      *(uint32_t *)(v184 + 12) = 0;
                      *(uint32_t *)(v184 + 16) = 0;
                    }
                    v183 += 20;
                    ++v182;
                  }
                  while ( v182 != 0 );
                }
              }
              else
              {
                v299 = 0;
                for ( j = 0; j != v289; ++j )
                {
                  v71 = (uint32_t *)(*v278 + v299);
                  v72 = v71[2];
                  if ( v72 < 0 )
                  {
                    v73 = 8 * v72;
                    do
                    {
                      v74 = (uint32_t *)(v71[1] + v73);
                      if ( v74 != nullptr )
                      {
                        *v74 = 0;
                        v74[1] = 0;
                      }
                      v73 += 8;
                      ++v72;
                    }
                    while ( v72 != 0 );
                  }
                  v75 = v71[4];
                  v71[2] = 0;
                  if ( v75 == 0 )
                  {
                    v76 = (gameswf::Self *)v71[1];
                    v71[3] = 0;
                    if ( v76 != nullptr )
                      gameswf::free_internal(v76);
                    v71[1] = 0;
                  }
                  v299 += 20;
                }
              }
            }
            ++v261;
            v271 += 56;
            v13 = v325 <= v261;
            *((uint32_t *)v266 + 4) = 0;
            if ( v13 )
              goto LABEL_139;
          }
          v266 = (char *)v324 + v271;
          v289 = *(uint32_t *)((char *)v324 + v271 + 16);
          v70 = (char *)v324 + v271;
          goto LABEL_91;
        }
LABEL_139:
        if ( v256 != 0 )
        {
          v80 = v329;
          if ( v329 > 0 )
          {
            v249 = 0;
            v248 = 0;
            while ( byte_20E55A1 == 0 )
            {
              v272 = (char *)v328 + v249;
              if ( *(uint32_t *)((char *)v328 + v249 + 16) != 0 )
              {
                sub_10F1A40((int)(uintptr_t)(v328) + v249, self, v343);
                v272 = (char *)v328 + v249;
                v293 = *(uint32_t *)((char *)v328 + v249 + 16);
                v169 = (char *)v328 + v249;
LABEL_231:
                v282 = (uint32_t *)(v169 + 12);
                if ( v293 <= 0 )
                {
                  if ( v293 < 0 )
                  {
                    v203 = v293;
                    v204 = 20 * v293;
                    do
                    {
                      v205 = *v282 + v204;
                      if ( v205 != 0 )
                      {
                        *(uint8_t *)v205 = 0;
                        *(uint32_t *)(v205 + 4) = 0;
                        *(uint32_t *)(v205 + 8) = 0;
                        *(uint32_t *)(v205 + 12) = 0;
                        *(uint32_t *)(v205 + 16) = 0;
                      }
                      v204 += 20;
                      ++v203;
                    }
                    while ( v203 != 0 );
                  }
                }
                else
                {
                  v315 = 0;
                  for ( k = 0; k != v293; ++k )
                  {
                    v170 = (uint32_t *)(*v282 + v315);
                    v171 = v170[2];
                    if ( v171 < 0 )
                    {
                      v172 = 8 * v171;
                      do
                      {
                        v173 = (uint32_t *)(v170[1] + v172);
                        if ( v173 != nullptr )
                        {
                          *v173 = 0;
                          v173[1] = 0;
                        }
                        v172 += 8;
                        ++v171;
                      }
                      while ( v171 != 0 );
                    }
                    v174 = v170[4];
                    v170[2] = 0;
                    if ( v174 == 0 )
                    {
                      v175 = (gameswf::Self *)v170[1];
                      v170[3] = 0;
                      if ( v175 != nullptr )
                        gameswf::free_internal(v175);
                      v170[1] = 0;
                    }
                    v315 += 20;
                  }
                }
              }
              *((uint32_t *)v272 + 4) = 0;
              v80 = v329;
LABEL_115:
              ++v248;
              v249 += 56;
              if ( v248 >= v80 )
                goto LABEL_116;
            }
            v81 = (uint32_t *)((char *)v328 + v249);
            v247 = (char *)v328 + v249;
            if ( *(uint32_t *)((char *)v328 + v249 + 16) == 0 )
              goto LABEL_115;
            v82 = 108 * v81[1];
            v333 = nullptr;
            v83 = (uint16_t)(int)*(float *)(*((uint32_t *)a2 + 11) + v82 + 4);
            v337 = nullptr;
            v338 = 0;
            v339 = 0;
            v340 = 0;
            v336 = 0;
            v84 = (float)v83;
            v85 = v81[4];
            v86 = v81[3];
            v335 = 0;
            v334 = 0;
            v87 = v84 * 20.0;
            v273 = 4 * (5 * v85 - 5) + v86;
            v246 = -0.5 * v87;
            v245 = v87 * 0.5;
            v88 = 3 * *(uint32_t *)(v273 + 8) / 2;
            v335 = v88;
            if ( v88 != 0 )
            {
              v333 = (gameswf::Self *)gameswf::malloc_internal(8 * v88);
              v89 = *(uint32_t *)(v273 + 8);
              if ( v340 != 0 )
              {
LABEL_146:
                if ( v89 > 0 )
                {
                  v312 = 1;
                  v90 = *(float **)(v273 + 4);
                  v91 = v90[1];
                  v92 = v90;
                  v93 = *v90;
                  v94 = v91;
                  v95 = *v90;
                  while ( 1 )
                  {
                    v122 = v93 - v95;
                    v123 = v91 - v94;
                    v124 = v312 - 1;
                    v320 = 0.0;
                    if ( v89 - 1 > v312 - 1 )
                      v124 = v312;
                    v318 = v122;
                    v319 = v123;
                    v125 = &v90[2 * v124];
                    v126 = *v125 - *v92;
                    v127 = v125[1] - v92[1];
                    v323 = 0.0;
                    v321 = v126;
                    v322 = v127;
                    gameswf::vector3df::normalize((gameswf::vector3df::Self *)&v318);
                    gameswf::vector3df::normalize((gameswf::vector3df::Self *)&v321);
                    v291 = v322;
                    v301 = v320;
                    v128 = (float)(v321 + v318) * 0.5;
                    v129 = (float)(v322 + v319) * 0.5;
                    v267 = v323;
                    v280 = v321;
                    v130 = (float)((float)(v129 * v129) + (float)(v128 * v128))
                         + (float)((float)((float)(v320 + v323) * 0.5) * (float)((float)(v320 + v323) * 0.5));
                    if ( v130 != 0.0 )
                      break;
LABEL_160:
                    v89 = *(uint32_t *)(v273 + 8);
                    if ( v89 <= v312 )
                      goto LABEL_184;
                    v90 = *(float **)(v273 + 4);
                    v92 = &v90[2 * v312];
                    if ( v312 <= 0 )
                    {
                      v91 = v92[1];
                      v93 = *v92;
                      v94 = v91;
                      v95 = *v92;
                    }
                    else
                    {
                      v121 = &v90[2 * v312 - 2];
                      v91 = v92[1];
                      v94 = v121[1];
                      v93 = *v92;
                      v95 = *v121;
                    }
                    ++v312;
                  }
                  v226 = v318;
                  v223 = v319;
                  v262 = atan2(v319, v318) + 1.5707963267948966;
                  v257 = atan2(v291, v280) + 1.5707963267948966;
                  v131 = atan2(v129, v128) + 1.5707963267948966;
                  v132 = (float)((float)(v223 * v223) + (float)(v226 * v226)) + (float)(v301 * v301);
                  if ( v132 <= 0.0 || v130 <= 0.0005f )
                    v250 = 1.0;
                  else
                    v250 = cos(fabs(v131 - v262));
                  v215 = v257 - v262;
                  if ( v132 == 0.0 )
                  {
                    v133 = sin(v215);
                    memset(v332, 0, sizeof(v332));
                    v251 = (double)v133 < 0.0;
                    v332[0] = 1.0;
                    v332[4] = 1.0;
                    v279 = 1;
                    goto LABEL_151;
                  }
                  v96 = sin(v215);
                  memset(v332, 0, sizeof(v332));
                  v251 = (double)v96 < 0.0;
                  v332[0] = 1.0;
                  v332[4] = 1.0;
                  if ( (float)((float)((float)(v291 * v291) + (float)(v280 * v280)) + (float)(v267 * v267)) == 0.0 )
                  {
                    v279 = 1;
LABEL_151:
                    v97 = v131;
                    v217 = v23;
                    v290 = v97;
                    gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v332, 0x3F800000u, 0x3F800000u, v97);
                    v98 = v334;
                    v216 = v335;
                    v99 = v333;
                    v100 = v332[0];
                    v101 = v332[2];
                    v102 = v334 + 1;
                    v103 = v332[3];
                    v104 = v332[5];
                    v105 = *v92;
                    v106 = v92[1];
                    if ( v334 + 1 > v335 && v336 == 0 )
                    {
                      v135 = v102 + (v102 >> 1);
                      v335 = v135;
                      if ( v135 != 0 )
                      {
                        if ( v333 != nullptr )
                        {
                          v217 = v23;
                          v220 = v332[3];
                          v234 = v106;
                          v232 = v332[5];
                          v228 = v332[0];
                          v225 = v105;
                          v222 = v332[2];
                          v99 = (gameswf::Self *)gameswf::realloc_internal(v333, 8 * (v102 + (v102 >> 1)), 8 * v216);
                        }
                        else
                        {
                          v220 = v332[3];
                          v234 = v106;
                          v232 = v332[5];
                          v228 = v332[0];
                          v225 = v105;
                          v222 = v332[2];
                          v99 = (gameswf::Self *)gameswf::malloc_internal(8 * v135);
                        }
                        v333 = v99;
                        v98 = v334;
                        v23 = v217;
                        v103 = v220;
                        v106 = v234;
                        v104 = v232;
                        v100 = v228;
                        v105 = v225;
                        v101 = v222;
                      }
                      else
                      {
                        if ( v333 != nullptr )
                        {
                          v230 = v332[0];
                          gameswf::free_internal(v333);
                          v98 = v334;
                          v100 = v230;
                        }
                        v333 = nullptr;
                        v99 = nullptr;
                      }
                    }
                    v107 = (float *)((char *)v99 + 8 * v98);
                    if ( v107 != nullptr )
                    {
                      v108 = v246 / v250;
                      *v107 = (float)(v105 + v101) + (float)(v100 * v108);
                      v107[1] = (float)(v106 + v104) + (float)(v108 * v103);
                    }
                    v334 = v102;
                    if ( v279 == 0 && v251 )
                    {
                      v206 = v262;
                      gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v332, 0x3F800000u, 0x3F800000u, v206);
                      v207 = *v92;
                      v317 = v92[1];
                      v316 = (float)(v332[2] + v207) + (float)(v245 * v332[0]);
                      v317 = (float)(v332[5] + v317) + (float)(v245 * v332[3]);
                      gameswf::array_gameswf_Point_c7983d::push_back_gameswf_Point_493cd1(
                        (gameswf::array<gameswf::Point::Self> *)&v337,
                        (const gameswf::Point::Self *)&v316);
                      v208 = v257;
                      gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v332, 0x3F800000u, 0x3F800000u, v208);
                      v209 = *v92;
                      v317 = v92[1];
                      v316 = (float)(v332[2] + v209) + (float)(v245 * v332[0]);
                      v317 = (float)(v332[5] + v317) + (float)(v245 * v332[3]);
                      gameswf::array_gameswf_Point_c7983d::push_back_gameswf_Point_493cd1(
                        (gameswf::array<gameswf::Point::Self> *)&v337,
                        (const gameswf::Point::Self *)&v316);
                      goto LABEL_160;
                    }
                  }
                  else
                  {
                    if ( (double)v96 < 0.0 )
                    {
                      v279 = 0;
                      v251 = true;
                      goto LABEL_151;
                    }
                    v210 = v262;
                    gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v332, 0x3F800000u, 0x3F800000u, v210);
                    v211 = *v92;
                    v317 = v92[1];
                    v316 = (float)(v332[2] + v211) + (float)(v246 * v332[0]);
                    v317 = (float)(v332[5] + v317) + (float)(v246 * v332[3]);
                    gameswf::array_gameswf_Point_c7983d::push_back_gameswf_Point_493cd1(
                      (gameswf::array<gameswf::Point::Self> *)&v333,
                      (const gameswf::Point::Self *)&v316);
                    v212 = v257;
                    gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v332, 0x3F800000u, 0x3F800000u, v212);
                    v213 = *v92;
                    v317 = v92[1];
                    v316 = (float)(v332[2] + v213) + (float)(v246 * v332[0]);
                    v317 = (float)(v332[5] + v317) + (float)(v246 * v332[3]);
                    gameswf::array_gameswf_Point_c7983d::push_back_gameswf_Point_493cd1(
                      (gameswf::array<gameswf::Point::Self> *)&v333,
                      (const gameswf::Point::Self *)&v316);
                    v214 = v131;
                    v290 = v214;
                  }
                  v218 = v23;
                  gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v332, 0x3F800000u, 0x3F800000u, v290);
                  v109 = v338;
                  v110 = v339;
                  v111 = *v92;
                  v112 = v337;
                  v113 = v92[1];
                  v114 = v332[0];
                  v115 = v338 + 1;
                  v116 = v332[2];
                  v117 = v332[3];
                  v118 = v332[5];
                  if ( v338 + 1 > v339 && v340 == 0 )
                  {
                    v134 = v115 + (v115 >> 1);
                    v339 = v134;
                    if ( v134 != 0 )
                    {
                      if ( v337 != nullptr )
                      {
                        v218 = v23;
                        v219 = v332[3];
                        v233 = v113;
                        v231 = v332[5];
                        v227 = v332[0];
                        v224 = v111;
                        v221 = v332[2];
                        v112 = (gameswf::Self *)gameswf::realloc_internal(v337, 8 * v134, 8 * v110);
                      }
                      else
                      {
                        v219 = v332[3];
                        v233 = v113;
                        v231 = v332[5];
                        v227 = v332[0];
                        v224 = v111;
                        v221 = v332[2];
                        v112 = (gameswf::Self *)gameswf::malloc_internal(8 * v134);
                      }
                      v337 = v112;
                      v109 = v338;
                      v23 = v218;
                      v117 = v219;
                      v113 = v233;
                      v118 = v231;
                      v114 = v227;
                      v111 = v224;
                      v116 = v221;
                    }
                    else
                    {
                      if ( v337 != nullptr )
                      {
                        v229 = v332[0];
                        gameswf::free_internal(v337);
                        v109 = v338;
                        v114 = v229;
                      }
                      v337 = nullptr;
                      v112 = nullptr;
                    }
                  }
                  v119 = (float *)((char *)v112 + 8 * v109);
                  if ( v119 != nullptr )
                  {
                    v120 = v245 / v250;
                    *v119 = (float)(v111 + v116) + (float)(v114 * v120);
                    v119[1] = (float)(v113 + v118) + (float)(v120 * v117);
                  }
                  v338 = v115;
                  goto LABEL_160;
                }
LABEL_184:
                v281 = v334;
                v136 = (uint32_t *)(*((uint32_t *)v247 + 3) + 4 * (5 * *((uint32_t *)v247 + 4) - 5));
                v292 = v136;
                v137 = (gameswf::Self **)(v136 + 1);
                v138 = v136[2];
                if ( v334 != 0 )
                {
                  v139 = v136[3];
                  if ( v334 > v139 && v136[4] == 0 )
                  {
                    v192 = v334 + (v334 >> 1);
                    v292[3] = v192;
                    if ( v192 != 0 )
                    {
                      v201 = (gameswf::Self *)v292[1];
                      if ( v201 != nullptr )
                        v202 = gameswf::realloc_internal(v201, 8 * v192, 8 * v139);
                      else
                        v202 = (void *)gameswf::malloc_internal(8 * v192);
                      v292[1] = (uint32_t)(uintptr_t)(v202);
                    }
                    else
                    {
                      if ( v292[1] != 0 )
                        gameswf::free_internal((gameswf::Self *)v292[1]);
                      v292[1] = 0;
                    }
                  }
                }
                v140 = 8 * v138;
                if ( v281 > v138 )
                {
                  do
                  {
                    v141 = (uint32_t *)((char *)*v137 + v140);
                    if ( v141 != nullptr )
                    {
                      *v141 = 0;
                      v141[1] = 0;
                    }
                    ++v138;
                    v140 += 8;
                  }
                  while ( v138 != v281 );
                }
                v292[2] = v281;
                if ( v281 > 0 )
                {
                  v142 = 0;
                  do
                  {
                    v143 = *v137;
                    v144 = *((uint32_t *)v333 + 2 * v142 + 1);
                    *((uint32_t *)v143 + 2 * v142) = *((uint32_t *)v333 + 2 * v142);
                    *((uint32_t *)v143 + 2 * v142++ + 1) = v144;
                  }
                  while ( v142 < (int)(uintptr_t)(v137[1]) );
                  v281 = (int)(uintptr_t)(v137[1]);
                }
                v145 = v334;
                if ( v292[4] == 0 )
                {
                  v146 = v292[3];
                  v292[3] = 2 * v334;
                  if ( 2 * v145 != 0 )
                  {
                    if ( v292[1] != 0 )
                      v292[1] = (uint32_t)(uintptr_t)(gameswf::realloc_internal((gameswf::Self *)v292[1], 16 * v145, 8 * v146));
                    else
                      v292[1] = gameswf::malloc_internal(16 * v145);
                    v281 = v292[2];
                  }
                  else
                  {
                    if ( v292[1] != 0 )
                    {
                      gameswf::free_internal((gameswf::Self *)v292[1]);
                      v281 = v292[2];
                    }
                    v292[1] = 0;
                  }
                }
                v274 = v338 - 1;
                v313 = v338 - 1;
                if ( v338 - 1 >= 0 )
                {
                  v147 = v281;
                  v302 = v137;
                  v148 = 8 * (v338 - 1);
                  for ( m = v137; ; m = v302 )
                  {
                    v153 = (int)(uintptr_t)(m[2]);
                    v258 = v337;
                    v154 = v147 + 1;
                    if ( v147 + 1 <= v153 || m[3] != nullptr )
                    {
                      v150 = (gameswf::Self *)v292[1];
                    }
                    else
                    {
                      v155 = v154 + (v154 >> 1);
                      m[2] = (gameswf::Self *)v155;
                      if ( v155 != 0 )
                      {
                        v176 = *m != nullptr
                             ? (gameswf::Self *)gameswf::realloc_internal(*m, 8 * v155, 8 * v153)
                             : (gameswf::Self *)gameswf::malloc_internal(8 * v155);
                        *v302 = v176;
                        v147 = v292[2];
                        v150 = v176;
                      }
                      else
                      {
                        if ( *m != nullptr )
                          gameswf::free_internal(*m);
                        *v302 = nullptr;
                        v147 = v292[2];
                        v150 = nullptr;
                      }
                    }
                    v151 = (char *)v150 + 8 * v147;
                    if ( v151 != nullptr )
                    {
                      v152 = *(uint32_t *)((char *)v258 + v148);
                      *((uint32_t *)v151 + 1) = *(uint32_t *)((char *)v258 + v148 + 4);
                      *(uint32_t *)v151 = v152;
                    }
                    --v313;
                    v148 -= 8;
                    v302[1] = (gameswf::Self *)v154;
                    if ( v313 == -1 )
                      break;
                    v147 = v154;
                  }
                  v281 += v274 + 1;
                }
                if ( v281 > 0 )
                {
                  v156 = v281 + 1;
                  v157 = (gameswf::Self *)v292[1];
                  v158 = v292[3];
                  v303 = *(uint32_t *)v157;
                  v314 = *((uint32_t *)v157 + 1);
                  if ( v281 + 1 > v158 && v292[4] == 0 )
                  {
                    v191 = v156 + (v156 >> 1);
                    v292[3] = v191;
                    if ( v191 != 0 )
                    {
                      v157 = (gameswf::Self *)gameswf::realloc_internal(v157, 8 * v191, 8 * v158);
                      v292[1] = (uint32_t)(uintptr_t)(v157);
                      v281 = v292[2];
                    }
                    else
                    {
                      gameswf::free_internal(v157);
                      v292[1] = 0;
                      v281 = v292[2];
                      v157 = nullptr;
                    }
                  }
                  v159 = (uint32_t *)((char *)v157 + 8 * v281);
                  if ( v159 != nullptr )
                  {
                    *v159 = v303;
                    v159[1] = v314;
                  }
                  v292[2] = v156;
                }
                v160 = (char *)v328 + v249;
                v161 = *(uint32_t *)((char *)v328 + v249 + 16);
                *(uint32_t *)((char *)v328 + v249 + 4) = *((uint32_t *)a2 + 8) + v248;
                if ( v161 != 0 )
                {
                  sub_10F1A40((int)(uintptr_t)(v160), self, v345);
                  if ( *(uint32_t *)((char *)v328 + v249 + 16) != 0 )
                    sub_10F1A40((int)(uintptr_t)(v328) + v249, self, v347);
                }
                v162 = (gameswf::Self **)v341;
                do
                {
                  v162 -= 4;
                  v163 = (int)(uintptr_t)(v162[1]);
                  if ( v163 < 0 )
                  {
                    v164 = 8 * v163;
                    do
                    {
                      v165 = (uint32_t *)((char *)*v162 + v164);
                      if ( v165 != nullptr )
                      {
                        *v165 = 0;
                        v165[1] = 0;
                      }
                      v164 += 8;
                      ++v163;
                    }
                    while ( v163 != 0 );
                  }
                  v166 = v162[3];
                  v162[1] = nullptr;
                  if ( v166 == nullptr )
                  {
                    v167 = *v162;
                    v168 = *v162 == nullptr;
                    v162[2] = nullptr;
                    if ( !v168 )
                      gameswf::free_internal(v167);
                    *v162 = nullptr;
                  }
                }
                while ( v162 != &v333 );
                v272 = (char *)v328 + v249;
                v293 = *(uint32_t *)((char *)v328 + v249 + 16);
                v169 = (char *)v328 + v249;
                goto LABEL_231;
              }
            }
            else
            {
              v89 = *(uint32_t *)(v273 + 8);
            }
            v177 = 3 * v89;
            v178 = (unsigned int)(3 * v89) >> 31;
            v179 = v339;
            v180 = (int)(v178 + v177) >> 1;
            v339 = v180;
            if ( v180 != 0 )
            {
              if ( v337 != nullptr )
                v337 = (gameswf::Self *)gameswf::realloc_internal(v337, 8 * v180, 8 * v179);
              else
                v337 = (gameswf::Self *)gameswf::malloc_internal(8 * v180);
              v89 = *(uint32_t *)(v273 + 8);
            }
            else
            {
              if ( v337 != nullptr )
                gameswf::free_internal(v337);
              v337 = nullptr;
              v89 = *(uint32_t *)(v273 + 8);
            }
            goto LABEL_146;
          }
        }
LABEL_116:
        if ( v240 != 0 )
          gameswf::MeshSet::new_layer(self);
      }
      v244 += 40;
      ++v243;
    }
    while ( v242 > v241 );
  }
  sub_10EF190((int)(uintptr_t)(&v328), 0);
  if ( v331 == 0 )
  {
    v330 = 0;
    if ( v328 != nullptr )
      gameswf::free_internal(v328);
    v328 = nullptr;
  }
  sub_10EF190((int)(uintptr_t)(&v324), 0);
  if ( v327 == 0 )
  {
    v326 = 0;
    if ( v324 != nullptr )
      gameswf::free_internal(v324);
    v324 = nullptr;
  }
  gameswf::TesselatorAccepter::Destroy((gameswf::TesselatorAccepter::Self *)v347);
  gameswf::TesselatorAccepter::Destroy((gameswf::TesselatorAccepter::Self *)v345);
  gameswf::TesselatorAccepter::Destroy((gameswf::TesselatorAccepter::Self *)v343);
  gameswf::TesselatorAccepter::Destroy((gameswf::TesselatorAccepter::Self *)v341);
}

// ----------------------------------------------------------------------------
// Function: gameswf::DoesCharIsSymbolsForTransferWithPrevNeighbor  (binary VA: 0x10fc5c0)
// Original: gameswf::DoesCharIsSymbolsForTransferWithPrevNeighbor
// ----------------------------------------------------------------------------
bool gameswf::DoesCharIsSymbolsForTransferWithPrevNeighbor(gameswf::Self *self)
{
  gameswf::Self **v1;
  int v2;
  int v3;
  gameswf::Self **v4;
  bool result;

  v1 = (gameswf::Self **)gameswf::SymbolsForTransferWithPrevNeighbor;
  v2 = ((int)(uintptr_t)((*(uint8_t **)unk_21155D4)) - (int)(uintptr_t)(gameswf::SymbolsForTransferWithPrevNeighbor)) >> 4;
  v3 = ((int)(uintptr_t)((*(uint8_t **)unk_21155D4)) - (int)(uintptr_t)(gameswf::SymbolsForTransferWithPrevNeighbor)) >> 2;
  if ( v2 <= 0 )
  {
    v4 = (gameswf::Self **)gameswf::SymbolsForTransferWithPrevNeighbor;
LABEL_14:
    if ( v3 != 2 )
    {
      if ( v3 != 3 )
      {
        if ( v3 != 1 )
          return false;
LABEL_27:
        result = false;
        if ( *v4 != self )
          return result;
        return (*(uint8_t **)unk_21155D4) != (uint8_t *)(intptr_t)((uint32_t)(uintptr_t)(v4));
      }
      if ( *v4 == self )
        return (*(uint8_t **)unk_21155D4) != (uint8_t *)(intptr_t)((uint32_t)(uintptr_t)(v4));
      ++v4;
    }
    if ( *v4 == self )
      return (*(uint8_t **)unk_21155D4) != (uint8_t *)(intptr_t)((uint32_t)(uintptr_t)(v4));
    ++v4;
    goto LABEL_27;
  }
  if ( (gameswf::Self *)*gameswf::SymbolsForTransferWithPrevNeighbor == self )
    return (*(uint8_t **)unk_21155D4) != (uint8_t *)(intptr_t)((uint32_t)(uintptr_t)(v1));
  if ( (gameswf::Self *)gameswf::SymbolsForTransferWithPrevNeighbor[1] == self )
    return (*(uint8_t **)unk_21155D4) != (uint8_t *)(intptr_t)((uint32_t)(uintptr_t)(gameswf::SymbolsForTransferWithPrevNeighbor + 1));
  if ( (gameswf::Self *)gameswf::SymbolsForTransferWithPrevNeighbor[2] == self )
    return (*(uint8_t **)unk_21155D4) != (uint8_t *)(intptr_t)((uint32_t)(uintptr_t)(gameswf::SymbolsForTransferWithPrevNeighbor + 2));
  if ( (gameswf::Self *)gameswf::SymbolsForTransferWithPrevNeighbor[3] == self )
  {
    v1 = (gameswf::Self **)(gameswf::SymbolsForTransferWithPrevNeighbor + 3);
    return (*(uint8_t **)unk_21155D4) != (uint8_t *)(intptr_t)((uint32_t)(uintptr_t)(v1));
  }
  while ( 1 )
  {
    --v2;
    v4 = v1 + 4;
    if ( v2 == 0 )
    {
      v3 = ((int)(uintptr_t)((*(uint8_t **)unk_21155D4)) - (int)(uintptr_t)(v4)) >> 2;
      goto LABEL_14;
    }
    if ( v1[4] == self )
      return (*(uint8_t **)unk_21155D4) != (uint8_t *)(intptr_t)((uint32_t)(uintptr_t)(v1 + 4));
    if ( v1[5] == self )
      return (*(uint8_t **)unk_21155D4) != (uint8_t *)(intptr_t)((uint32_t)(uintptr_t)(v1 + 5));
    if ( v1[6] == self )
      return (*(uint8_t **)unk_21155D4) != (uint8_t *)(intptr_t)((uint32_t)(uintptr_t)(v1 + 6));
    if ( v1[7] == self )
      return (*(uint8_t **)unk_21155D4) != (uint8_t *)(intptr_t)((uint32_t)(uintptr_t)(v1 + 7));
    v1 += 4;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::preloadGlyphCodes  (binary VA: 0x10fc6e0)
// Original: gameswf::preloadGlyphCodes
// ----------------------------------------------------------------------------
int gameswf::preloadGlyphCodes(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( a3 >= 0 )
    return a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::removeHTML  (binary VA: 0x10fc860)
// Original: gameswf::removeHTML
// ----------------------------------------------------------------------------
char * gameswf::removeHTML(gameswf::Self *self)
{
  const char *haystack;
  char *result;
  int v3;
  const char *v4;
  char *v5;
  uint8_t *v6;
  int v7;
  char *v8;
  gameswf::Self *v9;
  char *v10;
  gameswf::Self *v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_dest[1052];
  enum : size_t {
    _g4_s0 = 1136u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_dest)) > _g4_s1 ? (16u + sizeof(_g4_t_dest)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 16u);

  if ( *(uint8_t *)self == 0xFF )
  {
    haystack = *((const char **)self + 3);
    result = (char *)(strstr(haystack, "</"));
    v3 = *((uint32_t *)self + 1) - 1;
  }
  else
  {
    haystack = (char *)self + 1;
    v12 = *(uint8_t *)self;
    result = (char *)(strstr((const char *)self + 1, "</"));
    v3 = v12 - 1;
  }
  if ( v3 >= 0 )
  {
    v4 = haystack - 1;
    if ( haystack - 1 < result )
    {
      v5 = result;
      if ( *result == 62 )
      {
LABEL_10:
        v6 = (uint8_t *)(v5 + 1);
        v7 = result - (char *)(v6);
        if ( result - (char *)(v6) <= 0 )
        {
          gameswf::String::resize(self, 0);
          LOBYTE(v10) = *(uint8_t *)self;
          if ( *(uint8_t *)self == 0xFF )
          {
            v10 = *((char **)self + 1);
            v11 = *((gameswf::Self **)self + 3);
          }
          else
          {
            v10 = (char *)(char)(uintptr_t)(v10);
            v11 = (gameswf::Self *)((char *)self + 1);
          }
          result = (char *)gameswf::Strcpy_s(v11, v10, (gameswf::Self *)&unk_1B15112);
          *((uint32_t *)self + 4) |= 0x7FFFFFu;
        }
        else
        {
          memcpy(dest, v6, result - (char *)(v6));
          dest[v7] = 0;
          gameswf::String::resize(self, strlen(dest));
          LOBYTE(v8) = *(uint8_t *)self;
          if ( *(uint8_t *)self == 0xFF )
          {
            v8 = *((char **)self + 1);
            v9 = *((gameswf::Self **)self + 3);
          }
          else
          {
            v8 = (char *)(char)(uintptr_t)(v8);
            v9 = (gameswf::Self *)((char *)self + 1);
          }
          result = (char *)gameswf::Strcpy_s(v9, v8, (gameswf::Self *)dest);
          *((uint32_t *)self + 4) |= 0x7FFFFFu;
        }
      }
      else
      {
        while ( --v4 < --v5 )
        {
          if ( *v5 == 62 )
            goto LABEL_10;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_edit_text_loader  (binary VA: 0x10fe070)
// Original: gameswf::define_edit_text_loader
// ----------------------------------------------------------------------------
int gameswf::define_edit_text_loader(gameswf::Self *self, gameswf::Stream::Self *a2, gameswf::MovieDefinitionSub::Self *a3)
{
  uint16_t U16;
  gameswf::Player::Self *v4;
  gameswf::Self *v5;
  gameswf::Self **v8;
  uint16_t v9;

  U16 = gameswf::Stream::readU16(self);
  v4 = *((gameswf::Player::Self **)a3 + 6);
  v9 = U16;
  if ( v4 != nullptr )
  {
    v5 = *((gameswf::Self **)a3 + 5);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      if ( (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      *((uint32_t *)a3 + 5) = 0;
      *((uint32_t *)a3 + 6) = 0;
      v4 = nullptr;
    }
  }
  v8 = (gameswf::Self **)opNew(0x9Cu);
  gameswf::EditTextCharacterDef::Construct(v8, v4, a3);
  gameswf::EditTextCharacterDef::read((gameswf::EditTextCharacterDef::Self *)v8, self);
  return G4_VCALL<int>(a3, 116, v9, v8, a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::define_text_loader  (binary VA: 0x10fe630)
// Original: gameswf::define_text_loader
// ----------------------------------------------------------------------------
int gameswf::define_text_loader(__m128 a1, gameswf::Self *self, gameswf::Stream::Self *a3, gameswf::MovieDefinitionSub::Self *a4)
{
  uint16_t U16;
  gameswf::Player::Self *v5;
  gameswf::Self *v6;
  gameswf::Self **v9;
  uint16_t v10;

  U16 = gameswf::Stream::readU16(self);
  v5 = *((gameswf::Player::Self **)a4 + 6);
  v10 = U16;
  if ( v5 != nullptr )
  {
    v6 = *((gameswf::Self **)a4 + 5);
    if ( *((uint8_t *)v6 + 2) == 0 )
    {
      if ( (*(uint16_t *)v6)-- == 1 )
        gameswf::free_internal(v6);
      *((uint32_t *)a4 + 5) = 0;
      *((uint32_t *)a4 + 6) = 0;
      v5 = nullptr;
    }
  }
  v9 = (gameswf::Self **)opNew(0x68u);
  gameswf::TextCharacterDef::Construct(v9, v5, a4);
  gameswf::TextCharacterDef::read(a1, (gameswf::TextCharacterDef::Self *)v9, self, (int)(uintptr_t)(a3));
  return G4_VCALL<int>(a4, 116, v10, v9, a4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::attachVideo  (binary VA: 0x1111ab0)
// Original: gameswf::attachVideo
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::attachVideo(int a1)
{
  gameswf::RefCounted::Self **v1;
  gameswf::RefCounted::Self *v2;
  int v3;
  gameswf::RefCounted::Self *result;
  char *v5;

  v1 = *(gameswf::RefCounted::Self ***)(a1 + 4);
  if ( v1 != nullptr
    && (*((uint8_t (**)(uint32_t, int16_t *))*v1 + 2))(*(uint32_t *)(a1 + 4), (int16_t *)(&word_12)) == 0 )
  {
    v1 = nullptr;
  }
  if ( *(uint32_t *)(a1 + 16) != 1 )
    return (gameswf::RefCounted::Self *)gameswf::logError((gameswf::Self *)"attachVideo needs 1 arg\n", v5);
  v2 = nullptr;
  v3 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v3 == 5 )
    v2 = *(gameswf::RefCounted::Self **)(v3 + 4);
  result = v1[55];
  if ( v2 != result )
  {
    if ( result != nullptr )
      result = (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v1[55]);
    v1[55] = v2;
    if ( v2 != nullptr )
      return gameswf::RefCounted::addRef(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeSetWindowSize  (binary VA: 0x1112260)
// Original: gameswf::NativeSetWindowSize
// ----------------------------------------------------------------------------
void gameswf::NativeSetWindowSize()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeAssert  (binary VA: 0x1112270)
// Original: gameswf::NativeAssert
// ----------------------------------------------------------------------------
void gameswf::NativeAssert()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeHasMissingGlyphs  (binary VA: 0x1112280)
// Original: gameswf::NativeHasMissingGlyphs
// ----------------------------------------------------------------------------
int gameswf::NativeHasMissingGlyphs(int a1)
{
  int v1;
  int v2;
  uint8_t *v4;

  v1 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v1 == 5
    && (v4 = *(uint8_t **)(v1 + 4)) != nullptr
    && (*(uint8_t (**)(uint8_t *, int))(*(uint32_t *)v4 + 8))(v4, 37) != 0 )
  {
    v2 = v4[564];
  }
  else
  {
    v2 = 0;
  }
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativePreloadGlyphs  (binary VA: 0x1112540)
// Original: gameswf::NativePreloadGlyphs
// ----------------------------------------------------------------------------
int gameswf::NativePreloadGlyphs(int a1)
{
  gameswf::Character::Self *v1;
  int v2;
  int v3;
  gameswf::Self *v4;
  int v6;
  gameswf::Self *v8[12];

  v1 = nullptr;
  if ( *(uint32_t *)(a1 + 16) == 1 )
  {
    v6 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v6 == 5 )
    {
      v1 = *(gameswf::Character::Self **)(v6 + 4);
      if ( v1 != nullptr && G4_VCALL<uint8_t>(v1, 8, 1) == 0 )
        v1 = nullptr;
    }
  }
  gameswf::CharacterHandle::Construct((gameswf::CharacterHandle::Self *)v8, v1);
  v2 = *(uint32_t *)(a1 + 12);
  v3 = *(uint32_t *)(v2 + 212);
  if ( v3 != 0 )
  {
    v4 = *(gameswf::Self **)(v2 + 208);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *(uint32_t *)(v2 + 208) = 0;
      *(uint32_t *)(v2 + 212) = 0;
      v3 = 0;
    }
  }
  gameswf::RenderFX::preloadGlyphs(*(uint32_t *)(v3 + 208), v8);
  gameswf::CharacterHandle::Destroy(v8);
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeSetLanguage  (binary VA: 0x1112670)
// Original: gameswf::NativeSetLanguage
// ----------------------------------------------------------------------------
int gameswf::NativeSetLanguage(gameswf::ASValue::Self **a1)
{
  gameswf::ASValue::Self **v1;
  int result;
  char *v3;
  gameswf::CharacterHandle::Self *v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  int v8;
  int v9;
  gameswf::ASValue::Self *i;
  gameswf::CharacterHandle::Self *v12;
  int v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef gameswf::CharacterHandle::Self *_g4_t_v17;
  typedef gameswf::CharacterHandle::Self *_g4_t_v18;
  typedef gameswf::ASValue::Self **_g4_t_v19;
  typedef gameswf::ASValue::Self *_g4_t_v20;
  typedef uint16_t _g4_t_v21[6];
  typedef uint8_t _g4_t_v22[12];
  typedef gameswf::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef gameswf::Self *_g4_t_v27[12];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v15)) > _g4_s1 ? (0u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v16)) > _g4_s2 ? (0u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v17)) > _g4_s3 ? (4u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v18)) > _g4_s4 ? (4u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v19)) > _g4_s5 ? (8u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v20)) > _g4_s6 ? (12u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v21)) > _g4_s7 ? (24u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v22)) > _g4_s8 ? (36u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v23)) > _g4_s9 ? (48u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v24)) > _g4_s10 ? (52u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v25)) > _g4_s11 ? (56u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v26)) > _g4_s12 ? (60u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v27)) > _g4_s13 ? (76u + sizeof(_g4_t_v27)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);

  v27[11] = (gameswf::Self *)&a1;
  v1 = a1;
  result = gameswf::ASValue::setBool(*a1, 0);
  if ( v1[4] == (gameswf::ASValue::Self *)((char *)&dword_0 + 1) )
  {
    v3 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(*(uint32_t *)v1[3] + 12 * (uint32_t)(uintptr_t)(v1[5])));
    v4 = (gameswf::CharacterHandle::Self *)(v1[3]);
    v5 = *((uint32_t *)v4 + 53);
    if ( v5 != 0 )
    {
      v6 = *((gameswf::Self **)v4 + 52);
      if ( *((uint8_t *)v6 + 2) == 0 )
      {
        if ( (*(uint16_t *)v6)-- == 1 )
        {
          v17 = v4;
          gameswf::free_internal(v6);
          v4 = v17;
        }
        *((uint32_t *)v4 + 52) = 0;
        *((uint32_t *)v4 + 53) = 0;
        v5 = 0;
      }
    }
    v14 = *(uint32_t *)(v5 + 208);
    result = G4_VCALL<int>(v14, 44, v3);
    if ( (uint8_t)result != 0 )
    {
      v21[0] = 0;
      gameswf::ASValue::setString((gameswf::ASValue::Self *)v21, v3);
      v23 = nullptr;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      gameswf::RenderFX::getRootHandle((gameswf::RenderFX::Self *)v27);
      gameswf::RenderFX::findCharacters(v14, (int)(uintptr_t)(&v23), (gameswf::CharacterHandle::Self *)v27, nullptr, 8);
      gameswf::CharacterHandle::Destroy(v27);
      if ( v24 > 0 )
      {
        v19 = v1;
        v7 = 0;
        v8 = 0;
        do
        {
          v15 = v7;
          ++v8;
          gameswf::CharacterHandle::invokeMethod(
            (gameswf::CharacterHandle::Self *)v22,
            (gameswf::Self *)((char *)v23 + v7),
            (const gameswf::ASValue::Self *)"onChangeLanguage",
            (gameswf::ASValue::Self *)v21,
            1u);
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v22);
          v7 = v15 + 36;
        }
        while ( v8 < v24 );
        v1 = v19;
      }
      gameswf::ASValue::setBool(*v1, 1);
      if ( v24 <= 0 )
      {
        if ( v24 < 0 )
        {
          v12 = (gameswf::CharacterHandle::Self *)v24;
          v13 = 36 * v24;
          do
          {
            if ( (gameswf::Self *)((char *)v23 + v13) != nullptr )
            {
              v18 = v12;
              gameswf::CharacterHandle::Construct((gameswf::Self *)((char *)v23 + v13), nullptr);
              v12 = v18;
            }
            v13 += 36;
            v12 = (gameswf::CharacterHandle::Self *)((char *)v12 + 1);
          }
          while ( v12 != nullptr );
        }
      }
      else
      {
        v20 = (gameswf::ASValue::Self *)v24;
        v9 = 0;
        for ( i = nullptr; i != v20; i = (gameswf::ASValue::Self *)((char *)i + 1) )
        {
          v16 = v9;
          gameswf::CharacterHandle::Destroy((gameswf::Self **)((char *)v23 + v9));
          v9 = v16 + 36;
        }
      }
      v24 = 0;
      if ( v26 == 0 )
      {
        v25 = 0;
        if ( v23 != nullptr )
          gameswf::free_internal(v23);
        v23 = nullptr;
      }
      return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v21);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeGetGameData  (binary VA: 0x1112940)
// Original: gameswf::NativeGetGameData
// ----------------------------------------------------------------------------
int gameswf::NativeGetGameData(int a1)
{
  int v1;
  int v2;
  int v3;
  gameswf::Self *v4;
  uint8_t v5;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef char *_g4_t_v12;
  typedef uint8_t _g4_t_v13[16];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v13)) > _g4_s5 ? (32u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);

  v13[0] = 0;
  v1 = *(uint32_t *)(a1 + 16);
  v13[1] = 0;
  v12 = nullptr;
  if ( v1 > 0 )
  {
    v12 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    if ( *(int *)(a1 + 16) > 1 )
      gameswf::ASValue::opAssign(
        (gameswf::ASValue::Self *)v13,
        (const gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  }
  v2 = *(uint32_t *)(a1 + 12);
  v3 = *(uint32_t *)(v2 + 212);
  if ( v3 != 0 )
  {
    v4 = *(gameswf::Self **)(v2 + 208);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
      {
        v11 = v2;
        gameswf::free_internal(v4);
        v2 = v11;
      }
      *(uint32_t *)(v2 + 208) = 0;
      *(uint32_t *)(v2 + 212) = 0;
      v3 = 0;
    }
  }
  v5 = (*(int (**)(uint32_t, char *, uint8_t *, int, int, int, int, char *))(**(uint32_t **)(v3 + 208) + 56))(
         *(uint32_t *)(v3 + 208),
         v12,
         v13,
         v8,
         v9,
         v10,
         v11,
         v12);
  gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v5);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeSetGameData  (binary VA: 0x1112a70)
// Original: gameswf::NativeSetGameData
// ----------------------------------------------------------------------------
int gameswf::NativeSetGameData(int a1)
{
  int v1;
  int v2;
  int v3;
  gameswf::Self *v4;
  uint8_t v5;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef char *_g4_t_v12;
  typedef uint8_t _g4_t_v13[16];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v13)) > _g4_s5 ? (32u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);

  v13[0] = 0;
  v1 = *(uint32_t *)(a1 + 16);
  v13[1] = 0;
  v12 = nullptr;
  if ( v1 > 0 )
  {
    v12 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    if ( *(int *)(a1 + 16) > 1 )
      gameswf::ASValue::opAssign(
        (gameswf::ASValue::Self *)v13,
        (const gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  }
  v2 = *(uint32_t *)(a1 + 12);
  v3 = *(uint32_t *)(v2 + 212);
  if ( v3 != 0 )
  {
    v4 = *(gameswf::Self **)(v2 + 208);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
      {
        v11 = v2;
        gameswf::free_internal(v4);
        v2 = v11;
      }
      *(uint32_t *)(v2 + 208) = 0;
      *(uint32_t *)(v2 + 212) = 0;
      v3 = 0;
    }
  }
  v5 = (*(int (**)(uint32_t, char *, uint8_t *, int, int, int, int, char *))(**(uint32_t **)(v3 + 208) + 60))(
         *(uint32_t *)(v3 + 208),
         v12,
         v13,
         v8,
         v9,
         v10,
         v11,
         v12);
  gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v5);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v13);
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeGetCursorState  (binary VA: 0x1112ba0)
// Original: gameswf::NativeGetCursorState
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::NativeGetCursorState(int a1)
{
  int v1;
  int v2;
  int v3;
  gameswf::Self *v4;
  gameswf::ASObject::Self *v5;
  bool v7;
  int v8;
  gameswf::Self *v9;

  v1 = 0;
  if ( *(uint32_t *)(a1 + 16) == 1 )
    v1 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = *(uint32_t *)(a1 + 12);
  v3 = *(uint32_t *)(v2 + 212);
  if ( v3 != 0 )
  {
    v4 = *(gameswf::Self **)(v2 + 208);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      v7 = (*(uint16_t *)v4)-- == 1;
      if ( v7 )
        gameswf::free_internal(v4);
      *(uint32_t *)(v2 + 212) = 0;
      *(uint32_t *)(v2 + 208) = 0;
      v8 = *(uint32_t *)(a1 + 12);
      v3 = *(uint32_t *)(v8 + 212);
      if ( v3 != 0 )
      {
        v9 = *(gameswf::Self **)(v8 + 208);
        if ( *((uint8_t *)v9 + 2) == 0 )
        {
          v7 = (*(uint16_t *)v9)-- == 1;
          if ( v7 )
            gameswf::free_internal(v9);
          *(uint32_t *)(v8 + 208) = 0;
          *(uint32_t *)(v8 + 212) = 0;
          v3 = 0;
        }
      }
    }
  }
  v5 = (gameswf::ASObject::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(v3 + 208) + 52))(*(uint32_t *)(v3 + 208), v1);
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeGetKeyState  (binary VA: 0x1112cd0)
// Original: gameswf::NativeGetKeyState
// ----------------------------------------------------------------------------
int gameswf::NativeGetKeyState(int a1)
{
  int v1;
  int v2;
  gameswf::Self *v3;
  double v4; // xmm0_8
  int v6;
  bool v7; // cc
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  memset(v11, 0, 12);
  if ( *(int *)(a1 + 16) > 0 )
  {
    v6 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v7 = *(uint32_t *)(a1 + 16) <= 1;
    v11[0] = v6;
    if ( !v7 )
      v11[1] = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  }
  v1 = *(uint32_t *)(a1 + 12);
  v2 = *(uint32_t *)(v1 + 212);
  if ( v2 != 0 )
  {
    v3 = *(gameswf::Self **)(v1 + 208);
    if ( *((uint8_t *)v3 + 2) == 0 )
    {
      if ( (*(uint16_t *)v3)-- == 1 )
        gameswf::free_internal(v3);
      *(uint32_t *)(v1 + 208) = 0;
      *(uint32_t *)(v1 + 212) = 0;
      v2 = 0;
    }
  }
  v4 = (double)(*(int (**)(uint32_t, uint32_t *, int, int))(**(uint32_t **)(v2 + 208) + 48))(
                 *(uint32_t *)(v2 + 208),
                 v11,
                 v9,
                 v10);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeSetGraphicsAntiAliasing  (binary VA: 0x1112df0)
// Original: gameswf::NativeSetGraphicsAntiAliasing
// ----------------------------------------------------------------------------
char gameswf::NativeSetGraphicsAntiAliasing(int a1)
{
  int *v1;
  gameswf::Self *v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  char result;
  bool v8;

  v1 = *(int **)(a1 + 12);
  if ( v1[53] != 0 )
  {
    v2 = (gameswf::Self *)v1[52];
    if ( *((uint8_t *)v2 + 2) == 0 )
    {
      v8 = (*(uint16_t *)v2)-- == 1;
      if ( v8 )
        gameswf::free_internal(v2);
      v1[52] = 0;
      v1[53] = 0;
      v1 = *(int **)(a1 + 12);
    }
  }
  v3 = *(uint32_t *)(a1 + 20);
  v4 = *v1;
  v5 = nullptr;
  v6 = v4 + 12 * v3;
  if ( *(uint8_t *)v6 == 5 )
  {
    v5 = *(uint32_t **)(v6 + 4);
    if ( v5 != nullptr )
    {
      v8 = G4_VCALL<uint8_t>(v5, 8, 49) == 0;
      v3 = *(uint32_t *)(a1 + 20);
      v4 = **(uint32_t **)(a1 + 12);
      if ( v8 )
        v5 = nullptr;
    }
  }
  result = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(v4 + 4 * (3 * v3 - 3)));
  *(uint8_t *)(v5[10] + 148) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeGetViewportBounds  (binary VA: 0x1112ed0)
// Original: gameswf::NativeGetViewportBounds
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::NativeGetViewportBounds(int a1)
{
  int v1;
  int v2;
  gameswf::Self *v3;
  gameswf::Self **v4;
  int *Root;
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  gameswf::Root::Self *v9;
  gameswf::Root::Self *v10;
  float *Rectangle;
  typedef gameswf::Player::Self *_g4_t_v14;
  typedef float _g4_t_v15;
  typedef float _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v1 = *(uint32_t *)(a1 + 12);
  v2 = *(uint32_t *)(v1 + 212);
  if ( v2 != 0 )
  {
    v3 = *(gameswf::Self **)(v1 + 208);
    if ( *((uint8_t *)v3 + 2) == 0 )
    {
      if ( (*(uint16_t *)v3)-- == 1 )
        gameswf::free_internal(v3);
      *(uint32_t *)(v1 + 208) = 0;
      *(uint32_t *)(v1 + 212) = 0;
      v2 = 0;
    }
  }
  v4 = *(gameswf::Self ***)(v2 + 208);
  Root = (int *)gameswf::RenderFX::getRoot((gameswf::RenderFX::Self *)v4);
  v6 = (float)Root[6];
  v7 = (float)Root[7];
  v8 = (float)Root[8] + v6;
  v15 = (float)Root[5];
  v16 = v6;
  v18 = v8;
  v17 = v7 + v15;
  v9 = (gameswf::Root::Self *)gameswf::RenderFX::getRoot((gameswf::RenderFX::Self *)v4);
  gameswf::Root::screenToLogical(v9, (gameswf::Point::Self *)&v15);
  v10 = (gameswf::Root::Self *)gameswf::RenderFX::getRoot((gameswf::RenderFX::Self *)v4);
  gameswf::Root::screenToLogical(v10, (gameswf::Point::Self *)&v17);
  Rectangle = (float *)gameswf::createRectangle(v4[9], v14);
  Rectangle[10] = v15;
  Rectangle[11] = v17;
  Rectangle[12] = v16;
  Rectangle[13] = v18;
  return gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, (gameswf::ASObject::Self *)Rectangle);
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeGetString  (binary VA: 0x1113000)
// Original: gameswf::NativeGetString
// ----------------------------------------------------------------------------
int gameswf::NativeGetString(int a1)
{
  int v1;
  char *v2;
  char *v3;
  int v4;
  int v5;
  gameswf::Self *v6;
  char *s;
  char *v10;

  v1 = *(uint32_t *)(a1 + 16);
  if ( v1 == 1 )
  {
    v3 = nullptr;
    v2 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  }
  else
  {
    v2 = nullptr;
    v3 = nullptr;
    if ( v1 == 2 )
    {
      v3 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
      v2 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
    }
  }
  v4 = *(uint32_t *)(a1 + 12);
  v5 = *(uint32_t *)(v4 + 212);
  if ( v5 != 0 )
  {
    v6 = *(gameswf::Self **)(v4 + 208);
    if ( *((uint8_t *)v6 + 2) == 0 )
    {
      if ( (*(uint16_t *)v6)-- == 1 )
      {
        v10 = v2;
        gameswf::free_internal(v6);
        v2 = v10;
      }
      *(uint32_t *)(v4 + 208) = 0;
      *(uint32_t *)(v4 + 212) = 0;
      v5 = 0;
    }
  }
  s = (char *)(*(int (**)(uint32_t, char *, char *))(**(uint32_t **)(v5 + 208) + 40))(*(uint32_t *)(v5 + 208), v3, v2);
  return gameswf::ASValue::setString(*(gameswf::ASValue::Self **)a1, s);
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeStopSound  (binary VA: 0x1113130)
// Original: gameswf::NativeStopSound
// ----------------------------------------------------------------------------
int gameswf::NativeStopSound(int a1)
{
  int v1;
  int v2;
  int v3;
  gameswf::Self *v4;
  uint8_t v5;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  v10[0] = 0;
  v1 = *(uint32_t *)(a1 + 16);
  v10[1] = 1065353216;
  LOBYTE(v10[2]) = 0;
  if ( v1 > 0 )
    v10[0] = (uint32_t)(uintptr_t)(gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20))));
  v2 = *(uint32_t *)(a1 + 12);
  v3 = *(uint32_t *)(v2 + 212);
  if ( v3 != 0 )
  {
    v4 = *(gameswf::Self **)(v2 + 208);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *(uint32_t *)(v2 + 208) = 0;
      *(uint32_t *)(v2 + 212) = 0;
      v3 = 0;
    }
  }
  v5 = (*(int (**)(uint32_t, uint32_t *, int, int))(**(uint32_t **)(v3 + 208) + 36))(
         *(uint32_t *)(v3 + 208),
         v10,
         v8,
         v9);
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativePlaySound  (binary VA: 0x1113210)
// Original: gameswf::NativePlaySound
// ----------------------------------------------------------------------------
int gameswf::NativePlaySound(int a1)
{
  int v1;
  int v2;
  int v3;
  gameswf::Self *v4;
  uint8_t v5;
  char *v7;
  bool v8; // cc
  long double v9; // fst7
  float v10; // xmm0_4
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef double _g4_t_v16;
  typedef uint32_t _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);

  v17[0] = 0;
  v1 = *(uint32_t *)(a1 + 16);
  v17[1] = 1065353216;
  LOBYTE(v17[2]) = 0;
  if ( v1 > 0 )
  {
    v7 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v8 = *(uint32_t *)(a1 + 16) <= 1;
    v17[0] = (uint32_t)(uintptr_t)(v7);
    if ( !v8 )
    {
      v9 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
      v16 = v9;
      v8 = *(uint32_t *)(a1 + 16) <= 2;
      v10 = v9;
      *(float *)&v17[1] = v10;
      if ( !v8 )
        LOBYTE(v17[2]) = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                     + 4 * (3 * *(uint32_t *)(a1 + 20) - 6)));
    }
  }
  v2 = *(uint32_t *)(a1 + 12);
  v3 = *(uint32_t *)(v2 + 212);
  if ( v3 != 0 )
  {
    v4 = *(gameswf::Self **)(v2 + 208);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *(uint32_t *)(v2 + 208) = 0;
      *(uint32_t *)(v2 + 212) = 0;
      v3 = 0;
    }
  }
  v5 = (*(int (**)(uint32_t, uint32_t *, int, int, int, int, uint32_t, uint32_t))(**(uint32_t **)(v3 + 208) + 32))(
         *(uint32_t *)(v3 + 208),
         v17,
         v12,
         v13,
         v14,
         v15,
         LODWORD(v16),
         HIDWORD(v16));
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, v5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeSetGlyphTransforms  (binary VA: 0x1113360)
// Original: gameswf::NativeSetGlyphTransforms
// ----------------------------------------------------------------------------
void gameswf::NativeSetGlyphTransforms(int a1)
{
  int v1;
  uint32_t *v2;
  int v3;
  gameswf::Self *v4;
  bool v5;
  gameswf::RefCounted::Self *v6;
  gameswf::Self *WeakProxy;
  gameswf::Self *v8;

  if ( *(uint32_t *)(a1 + 16) == 2 )
  {
    v1 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)v1 == 5 )
    {
      v2 = *(uint32_t **)(v1 + 4);
      if ( v2 != nullptr && G4_VCALL<uint8_t>(v2, 8, 37) != 0 )
      {
        v3 = **(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3);
        if ( *(uint8_t *)v3 == 5
          && (v6 = *(gameswf::RefCounted::Self **)(v3 + 4)) != nullptr
          && (*(uint8_t (**)(gameswf::RefCounted::Self *, int))(*(uint32_t *)v6 + 8))(v6, 20) != 0 )
        {
          v2[158] = (uint32_t)(uintptr_t)(v6);
          WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v6);
          v8 = (gameswf::Self *)v2[157];
          if ( WeakProxy != v8 )
          {
            if ( v8 != nullptr )
            {
              v5 = (*(uint16_t *)v8)-- == 1;
              if ( v5 )
                gameswf::free_internal(v8);
            }
            v2[157] = (uint32_t)(uintptr_t)(WeakProxy);
            if ( WeakProxy != nullptr )
              ++*(uint16_t *)WeakProxy;
          }
        }
        else
        {
          v4 = (gameswf::Self *)v2[157];
          v2[158] = 0;
          if ( v4 != nullptr )
          {
            v5 = (*(uint16_t *)v4)-- == 1;
            if ( v5 )
              gameswf::free_internal(v4);
            v2[157] = 0;
          }
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::NativeForceFlashInputBehavior  (binary VA: 0x1115460)
// Original: gameswf::NativeForceFlashInputBehavior
// ----------------------------------------------------------------------------
void gameswf::NativeForceFlashInputBehavior(uint32_t *a1)
{
  uint32_t *v1;
  int v2;
  gameswf::Self *v3;
  int v4;
  void (*v5)(int, uint32_t);
  uint8_t v6;
  uint32_t *v8;

  if ( a1[4] == 1 )
  {
    v1 = (uint32_t *)a1[3];
    v2 = v1[53];
    if ( v2 != 0 )
    {
      v3 = (gameswf::Self *)v1[52];
      if ( *((uint8_t *)v3 + 2) == 0 )
      {
        if ( (*(uint16_t *)v3)-- == 1 )
        {
          v8 = v1;
          gameswf::free_internal(v3);
          v1 = v8;
        }
        v1[52] = 0;
        v1[53] = 0;
        v2 = 0;
        v1 = (uint32_t *)a1[3];
      }
    }
    v4 = *(uint32_t *)(v2 + 208);
    v5 = *(void (**)(int, uint32_t))(*(uint32_t *)v4 + 28);
    v6 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)(*v1 + 12 * a1[5]));
    v5(v4, v6);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::getLocalPosition  (binary VA: 0x1115a30)
// Original: gameswf::getLocalPosition
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::getLocalPosition(gameswf::Self *self, gameswf::Character::Self *a2, float a3, float a4)
{
  float v5; // xmm0_4
  typedef uint32_t _g4_t_v6[6];
  typedef float _g4_t_v7[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  std::memcpy(v6, gameswf::Character::getWorldMatrix(a2), sizeof(v6));
  memset(v7, 0, 0x18u);
  v7[0] = 1.0;
  v7[4] = 1.0;
  gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v7, (const gameswf::Matrix::Self *)v6);
  v5 = (float)((float)(a3 * v7[3]) + v7[5]) + (float)(a4 * v7[4]);
  *(float *)self = (float)((float)(v7[0] * a3) + v7[2]) + (float)(v7[1] * a4);
  *((float *)self + 1) = v5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::arrayInit  (binary VA: 0x111c170)
// Original: gameswf::arrayInit
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::arrayInit(gameswf::Self *self)
{
  gameswf::ASObject::Self *v1;
  gameswf::Self *v2;
  gameswf::Self *v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::Self *v6;
  typedef uint16_t _g4_t_v8[6];
  typedef uint16_t _g4_t_v9[6];
  typedef uint16_t _g4_t_v10[6];
  typedef uint16_t _g4_t_v11[6];
  typedef uint16_t _g4_t_v12[6];
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef gameswf::Self *_g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef gameswf::Self *_g4_t_v21;
  typedef int16_t _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef gameswf::Self *_g4_t_v27;
  typedef int16_t _g4_t_v28;
  typedef char _g4_t_v29;
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef gameswf::Self *_g4_t_v33;
  typedef int16_t _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef gameswf::Self *_g4_t_v39;
  typedef int16_t _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char _g4_t_v42;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v11)) > _g4_s3 ? (36u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v12)) > _g4_s4 ? (48u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v13)) > _g4_s5 ? (60u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (61u + sizeof(_g4_t_v14)) > _g4_s6 ? (61u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v15)) > _g4_s7 ? (72u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v16)) > _g4_s8 ? (76u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (78u + sizeof(_g4_t_v17)) > _g4_s9 ? (78u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (79u + sizeof(_g4_t_v18)) > _g4_s10 ? (79u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v19)) > _g4_s11 ? (92u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (93u + sizeof(_g4_t_v20)) > _g4_s12 ? (93u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v21)) > _g4_s13 ? (104u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v22)) > _g4_s14 ? (108u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (110u + sizeof(_g4_t_v23)) > _g4_s15 ? (110u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (111u + sizeof(_g4_t_v24)) > _g4_s16 ? (111u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v25)) > _g4_s17 ? (124u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (125u + sizeof(_g4_t_v26)) > _g4_s18 ? (125u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v27)) > _g4_s19 ? (136u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v28)) > _g4_s20 ? (140u + sizeof(_g4_t_v28)) : _g4_s20,
    _g4_s22 = (142u + sizeof(_g4_t_v29)) > _g4_s21 ? (142u + sizeof(_g4_t_v29)) : _g4_s21,
    _g4_s23 = (143u + sizeof(_g4_t_v30)) > _g4_s22 ? (143u + sizeof(_g4_t_v30)) : _g4_s22,
    _g4_s24 = (156u + sizeof(_g4_t_v31)) > _g4_s23 ? (156u + sizeof(_g4_t_v31)) : _g4_s23,
    _g4_s25 = (157u + sizeof(_g4_t_v32)) > _g4_s24 ? (157u + sizeof(_g4_t_v32)) : _g4_s24,
    _g4_s26 = (168u + sizeof(_g4_t_v33)) > _g4_s25 ? (168u + sizeof(_g4_t_v33)) : _g4_s25,
    _g4_s27 = (172u + sizeof(_g4_t_v34)) > _g4_s26 ? (172u + sizeof(_g4_t_v34)) : _g4_s26,
    _g4_s28 = (174u + sizeof(_g4_t_v35)) > _g4_s27 ? (174u + sizeof(_g4_t_v35)) : _g4_s27,
    _g4_s29 = (175u + sizeof(_g4_t_v36)) > _g4_s28 ? (175u + sizeof(_g4_t_v36)) : _g4_s28,
    _g4_s30 = (188u + sizeof(_g4_t_v37)) > _g4_s29 ? (188u + sizeof(_g4_t_v37)) : _g4_s29,
    _g4_s31 = (189u + sizeof(_g4_t_v38)) > _g4_s30 ? (189u + sizeof(_g4_t_v38)) : _g4_s30,
    _g4_s32 = (200u + sizeof(_g4_t_v39)) > _g4_s31 ? (200u + sizeof(_g4_t_v39)) : _g4_s31,
    _g4_s33 = (204u + sizeof(_g4_t_v40)) > _g4_s32 ? (204u + sizeof(_g4_t_v40)) : _g4_s32,
    _g4_s34 = (206u + sizeof(_g4_t_v41)) > _g4_s33 ? (206u + sizeof(_g4_t_v41)) : _g4_s33,
    _g4_s35 = (207u + sizeof(_g4_t_v42)) > _g4_s34 ? (207u + sizeof(_g4_t_v42)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 61u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 72u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 78u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 79u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 93u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 108u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 110u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 111u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 125u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 136u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 140u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 142u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 143u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 156u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 157u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 168u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 172u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 174u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 175u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 188u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 189u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 200u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 204u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 206u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 207u);

  v1 = (gameswf::ASObject::Self *)opNew(0x2Cu);
  gameswf::ASCppFunction::Construct(v1, self, (int)(uintptr_t)(gameswf::ASArray::ctor));
  *(uint64_t *)&v8[2] = 0x3FF0000000000000LL;
  v8[0] = 2;
  v13 = 1;
  v14 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v13, 15);
  v2 = (gameswf::Self *)&v14;
  if ( v13 == -1 )
    v2 = v15;
  gameswf::Strcpy_s(v2, (char *)&word_10, (gameswf::Self *)"CASEINSENSITIVE");
  v16 = -1;
  v17 = 127;
  v18 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v13, (const gameswf::ASValue::Self *)v8);
  if ( v13 == -1 && (v18 & 1) != 0 )
    gameswf::free_internal(v15);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  v9[0] = 2;
  *(uint64_t *)&v9[2] = 0x4000000000000000LL;
  v19 = 1;
  v20 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v19, 10);
  v3 = (gameswf::Self *)&v20;
  if ( v19 == -1 )
    v3 = v21;
  gameswf::Strcpy_s(v3, &byte_9[2], (gameswf::Self *)"DESCENDING");
  v22 = -1;
  v23 = 127;
  v24 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v19, (const gameswf::ASValue::Self *)v9);
  if ( v19 == -1 && (v24 & 1) != 0 )
    gameswf::free_internal(v21);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  v10[0] = 2;
  *(uint64_t *)&v10[2] = 0x4010000000000000LL;
  v25 = 1;
  v26 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v25, 10);
  v4 = (gameswf::Self *)&v26;
  if ( v25 == -1 )
    v4 = v27;
  gameswf::Strcpy_s(v4, &byte_9[2], (gameswf::Self *)"UNIQUESORT");
  v28 = -1;
  v29 = 127;
  v30 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v25, (const gameswf::ASValue::Self *)v10);
  if ( v25 == -1 && (v30 & 1) != 0 )
    gameswf::free_internal(v27);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  v11[0] = 2;
  *(uint64_t *)&v11[2] = 0x4020000000000000LL;
  v31 = 1;
  v32 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v31, 18);
  v5 = (gameswf::Self *)&v32;
  if ( v31 == -1 )
    v5 = v33;
  gameswf::Strcpy_s(v5, (char *)&word_12 + 1, (gameswf::Self *)"RETURNINDEXEDARRAY");
  v34 = -1;
  v35 = 127;
  v36 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v31, (const gameswf::ASValue::Self *)v11);
  if ( v31 == -1 && (v36 & 1) != 0 )
    gameswf::free_internal(v33);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v11);
  v12[0] = 2;
  *(uint64_t *)&v12[2] = 0x4030000000000000LL;
  v37 = 1;
  v38 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v37, 7);
  v6 = (gameswf::Self *)&v38;
  if ( v37 == -1 )
    v6 = v39;
  gameswf::Strcpy_s(v6, byte_8, (gameswf::Self *)"NUMERIC");
  v40 = -1;
  v41 = 127;
  v42 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v37, (const gameswf::ASValue::Self *)v12);
  if ( v37 == -1 && (v42 & 1) != 0 )
    gameswf::free_internal(v39);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v12);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::createArray  (binary VA: 0x111f3b0)
// Original: gameswf::createArray
// ----------------------------------------------------------------------------
gameswf::ASArray::Self * gameswf::createArray(gameswf::Self *self)
{
  gameswf::Self *v1;
  gameswf::Self *v2;
  gameswf::ASArray::Self *Object;
  gameswf::ASArray::Self *v4;
  typedef char _g4_t_v6;
  typedef char _g4_t_v7;
  typedef gameswf::Self *_g4_t_v8;
  typedef int16_t _g4_t_v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef gameswf::Self *_g4_t_v14;
  typedef int16_t _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (1u + sizeof(_g4_t_v7)) > _g4_s1 ? (1u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v9)) > _g4_s3 ? (16u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (18u + sizeof(_g4_t_v10)) > _g4_s4 ? (18u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (19u + sizeof(_g4_t_v11)) > _g4_s5 ? (19u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v12)) > _g4_s6 ? (32u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (33u + sizeof(_g4_t_v13)) > _g4_s7 ? (33u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v14)) > _g4_s8 ? (44u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v15)) > _g4_s9 ? (48u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (50u + sizeof(_g4_t_v16)) > _g4_s10 ? (50u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (51u + sizeof(_g4_t_v17)) > _g4_s11 ? (51u + sizeof(_g4_t_v17)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 1u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 18u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 19u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 33u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 50u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 51u);

  if ( *((uint8_t *)self + 232) != 0 )
  {
    v12 = 1;
    v13 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v12, 5);
    v1 = (gameswf::Self *)&v13;
    if ( v12 == -1 )
      v1 = v14;
    gameswf::Strcpy_s(v1, (char *)&loc_6, (gameswf::Self *)"Array");
    v6 = 1;
    v15 = -1;
    v7 = 0;
    v16 = 127;
    v17 |= 1u;
    gameswf::String::resize((gameswf::String::Self *)&v6, 0);
    v2 = (gameswf::Self *)&v7;
    if ( v6 == -1 )
      v2 = v8;
    gameswf::Strcpy_s(v2, (char *)&dword_0 + 1, (gameswf::Self *)&unk_1B15112);
    v9 = -1;
    v10 = 127;
    v11 |= 1u;
    Object = (gameswf::ASArray::Self *)gameswf::ASClassManager::createObject(
                                   (gameswf::Self *)((char *)self + 236),
                                   (const gameswf::String::Self *)&v6,
                                   (const gameswf::String::Self *)&v12);
    v4 = Object;
    if ( Object != nullptr
      && G4_VCALL<uint8_t>(Object, 8, 20) == 0 )
    {
      v4 = nullptr;
    }
    if ( v6 == -1 && (v11 & 1) != 0 )
      gameswf::free_internal(v8);
    if ( v12 == -1 && (v17 & 1) != 0 )
      gameswf::free_internal(v14);
  }
  else
  {
    v4 = (gameswf::ASArray::Self *)opNew(0x4Cu);
    gameswf::ASArray::Construct(v4, self);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::broadcasterInit  (binary VA: 0x1125630)
// Original: gameswf::broadcasterInit
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::broadcasterInit(gameswf::Self *self)
{
  gameswf::ASObject::Self *v1;
  gameswf::Self *v2;
  typedef uint8_t _g4_t_v4[12];
  typedef char _g4_t_v5;
  typedef char _g4_t_v6;
  typedef gameswf::Self *_g4_t_v7;
  typedef int16_t _g4_t_v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (13u + sizeof(_g4_t_v6)) > _g4_s2 ? (13u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v7)) > _g4_s3 ? (24u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v8)) > _g4_s4 ? (28u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (30u + sizeof(_g4_t_v9)) > _g4_s5 ? (30u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (31u + sizeof(_g4_t_v10)) > _g4_s6 ? (31u + sizeof(_g4_t_v10)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 13u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 30u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 31u);

  v1 = (gameswf::ASObject::Self *)opNew(0x28u);
  gameswf::ASObject::ASObject(v1, self);
  v4[0] = 0;
  v4[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v4, (int)(uintptr_t)(gameswf::ASBroadcaster::initialize));
  v5 = 1;
  v6 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v5, 10);
  v2 = (gameswf::Self *)&v6;
  if ( v5 == -1 )
    v2 = v7;
  gameswf::Strcpy_s(v2, &byte_9[2], (gameswf::Self *)"initialize");
  v8 = -1;
  v9 = 127;
  v10 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v5, (const gameswf::ASValue::Self *)v4);
  if ( v5 == -1 && (v10 & 1) != 0 )
    gameswf::free_internal(v7);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::flash_init  (binary VA: 0x112b060)
// Original: gameswf::flash_init
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::flash_init(gameswf::Self *self)
{
  gameswf::ASObject::Self *v1;
  gameswf::RefCounted::Self *v2;
  gameswf::Self *v3;
  typedef gameswf::Player::Self *_g4_t_v5;
  typedef uint32_t _g4_t_v6[3];
  typedef char _g4_t_v7;
  typedef char _g4_t_v8;
  typedef gameswf::Self *_g4_t_v9;
  typedef int16_t _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v6)) > _g4_s1 ? (32u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v7)) > _g4_s2 ? (44u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (45u + sizeof(_g4_t_v8)) > _g4_s3 ? (45u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v9)) > _g4_s4 ? (56u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v10)) > _g4_s5 ? (60u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (62u + sizeof(_g4_t_v11)) > _g4_s6 ? (62u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (63u + sizeof(_g4_t_v12)) > _g4_s7 ? (63u + sizeof(_g4_t_v12)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 44u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 45u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 56u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 60u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 62u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 63u);

  v1 = (gameswf::ASObject::Self *)opNew(0x28u);
  gameswf::ASObject::ASObject(v1, self);
  v2 = (gameswf::RefCounted::Self *)gameswf::geomInit(self, v5);
  LOWORD(v6[0]) = 5;
  v6[1] = (uint32_t)(uintptr_t)(v2);
  if ( v2 != nullptr )
    gameswf::RefCounted::addRef(v2);
  v7 = 1;
  v8 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v7, 4);
  v3 = (gameswf::Self *)&v8;
  if ( v7 == -1 )
    v3 = v9;
  gameswf::Strcpy_s(v3, (char *)&loc_4 + 1, (gameswf::Self *)"geom");
  v10 = -1;
  v11 = 127;
  v12 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v7, (const gameswf::ASValue::Self *)v6);
  if ( v7 == -1 && (v12 & 1) != 0 )
    gameswf::free_internal(v9);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v6);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::geomInit  (binary VA: 0x112b190)
// Original: gameswf::geomInit
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::geomInit(gameswf::Self *self)
{
  gameswf::ASObject::Self *v1;
  gameswf::Self *v2;
  gameswf::Self *v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  typedef uint8_t _g4_t_v7[12];
  typedef uint8_t _g4_t_v8[12];
  typedef uint8_t _g4_t_v9[12];
  typedef uint8_t _g4_t_v10[12];
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  typedef gameswf::Self *_g4_t_v13;
  typedef int16_t _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef gameswf::Self *_g4_t_v19;
  typedef int16_t _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef gameswf::Self *_g4_t_v25;
  typedef int16_t _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  typedef char _g4_t_v30;
  typedef gameswf::Self *_g4_t_v31;
  typedef int16_t _g4_t_v32;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v10)) > _g4_s3 ? (36u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v11)) > _g4_s4 ? (48u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (49u + sizeof(_g4_t_v12)) > _g4_s5 ? (49u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v13)) > _g4_s6 ? (60u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v14)) > _g4_s7 ? (64u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (66u + sizeof(_g4_t_v15)) > _g4_s8 ? (66u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (67u + sizeof(_g4_t_v16)) > _g4_s9 ? (67u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v17)) > _g4_s10 ? (80u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (81u + sizeof(_g4_t_v18)) > _g4_s11 ? (81u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v19)) > _g4_s12 ? (92u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v20)) > _g4_s13 ? (96u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (98u + sizeof(_g4_t_v21)) > _g4_s14 ? (98u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (99u + sizeof(_g4_t_v22)) > _g4_s15 ? (99u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v23)) > _g4_s16 ? (112u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (113u + sizeof(_g4_t_v24)) > _g4_s17 ? (113u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v25)) > _g4_s18 ? (124u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v26)) > _g4_s19 ? (128u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (130u + sizeof(_g4_t_v27)) > _g4_s20 ? (130u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (131u + sizeof(_g4_t_v28)) > _g4_s21 ? (131u + sizeof(_g4_t_v28)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v29)) > _g4_s22 ? (144u + sizeof(_g4_t_v29)) : _g4_s22,
    _g4_s24 = (145u + sizeof(_g4_t_v30)) > _g4_s23 ? (145u + sizeof(_g4_t_v30)) : _g4_s23,
    _g4_s25 = (156u + sizeof(_g4_t_v31)) > _g4_s24 ? (156u + sizeof(_g4_t_v31)) : _g4_s24,
    _g4_s26 = (160u + sizeof(_g4_t_v32)) > _g4_s25 ? (160u + sizeof(_g4_t_v32)) : _g4_s25,
    _g4_s27 = (162u + sizeof(_g4_t_v33)) > _g4_s26 ? (162u + sizeof(_g4_t_v33)) : _g4_s26,
    _g4_s28 = (163u + sizeof(_g4_t_v34)) > _g4_s27 ? (163u + sizeof(_g4_t_v34)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 49u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 66u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 67u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 80u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 81u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 98u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 99u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 113u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 128u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 130u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 131u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 144u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 145u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 156u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 160u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 162u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 163u);

  v1 = (gameswf::ASObject::Self *)opNew(0x28u);
  gameswf::ASObject::ASObject(v1, self);
  v7[0] = 0;
  v7[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v7, (int)(uintptr_t)(gameswf::ASPoint::ctor));
  v11 = 1;
  v12 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v11, 5);
  v2 = (gameswf::Self *)&v12;
  if ( v11 == -1 )
    v2 = v13;
  gameswf::Strcpy_s(v2, (char *)&loc_6, (gameswf::Self *)"Point");
  v14 = -1;
  v15 = 127;
  v16 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v11, (const gameswf::ASValue::Self *)v7);
  if ( v11 == -1 && (v16 & 1) != 0 )
    gameswf::free_internal(v13);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v7);
  v8[0] = 0;
  v8[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v8, (int)(uintptr_t)(gameswf::ASMatrix::ctor));
  v17 = 1;
  v18 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v17, 6);
  v3 = (gameswf::Self *)&v18;
  if ( v17 == -1 )
    v3 = v19;
  gameswf::Strcpy_s(v3, (char *)&loc_6 + 1, (gameswf::Self *)"Matrix");
  v20 = -1;
  v21 = 127;
  v22 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v17, (const gameswf::ASValue::Self *)v8);
  if ( v17 == -1 && (v22 & 1) != 0 )
    gameswf::free_internal(v19);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v8);
  v9[0] = 0;
  v9[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v9, (int)(uintptr_t)(gameswf::ASTransform::ctor));
  v23 = 1;
  v24 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v23, 9);
  v4 = (gameswf::Self *)&v24;
  if ( v23 == -1 )
    v4 = v25;
  gameswf::Strcpy_s(v4, &byte_9[1], (gameswf::Self *)"Transform");
  v26 = -1;
  v27 = 127;
  v28 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v23, (const gameswf::ASValue::Self *)v9);
  if ( v23 == -1 && (v28 & 1) != 0 )
    gameswf::free_internal(v25);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v9);
  v10[0] = 0;
  v10[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v10, (int)(uintptr_t)(gameswf::ASColorTransform::ctor));
  v29 = 1;
  v30 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v29, 14);
  v5 = (gameswf::Self *)&v30;
  if ( v29 == -1 )
    v5 = v31;
  gameswf::Strcpy_s(v5, &byte_9[6], (gameswf::Self *)"ColorTransform");
  v32 = -1;
  v33 = 127;
  v34 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v29, (const gameswf::ASValue::Self *)v10);
  if ( v29 == -1 && (v34 & 1) != 0 )
    gameswf::free_internal(v31);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v10);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::keyInit  (binary VA: 0x112c9f0)
// Original: gameswf::keyInit
// ----------------------------------------------------------------------------
gameswf::ASKey::Self * gameswf::keyInit(gameswf::Self *self)
{
  gameswf::ASKey::Self *v1;
  gameswf::Self *v2;
  int v3;
  int i;
  int *v5;
  int v6;
  int v7;
  gameswf::Self *v8;
  int v9;
  int j;
  char **v11;
  int *v12;
  gameswf::Self *v13;
  int StandardMemberID;
  gameswf::Self *v15;
  int v16;
  gameswf::Self *v17;
  int v18;
  gameswf::Self *v19;
  int v20;
  gameswf::Self *v21;
  int v22;
  gameswf::Self *v23;
  int v24;
  gameswf::Self *v25;
  int v26;
  gameswf::Self *v27;
  int v28;
  gameswf::Self *v29;
  int v30;
  gameswf::Self *v31;
  int v32;
  gameswf::Self *v33;
  int v34;
  gameswf::Self *v35;
  int v36;
  gameswf::Self *v37;
  int v38;
  gameswf::Self *v39;
  int v40;
  gameswf::Self *v41;
  int v42;
  gameswf::Self *v43;
  int v44;
  gameswf::Self *v45;
  int v46;
  gameswf::Self *v47;
  int v48;
  gameswf::Self *v49;
  gameswf::Self *v50;
  gameswf::Self *v51;
  gameswf::Self *v52;
  gameswf::Self *v53;
  gameswf::Self *v54;
  int v56;
  int v57;
  uint32_t *v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef gameswf::ASKey::Self *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef gameswf::ASKey::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int *_g4_t_v65;
  typedef uint16_t _g4_t_v66[6];
  typedef uint16_t _g4_t_v67[6];
  typedef uint16_t _g4_t_v68[6];
  typedef uint16_t _g4_t_v69[6];
  typedef uint16_t _g4_t_v70[6];
  typedef uint16_t _g4_t_v71[6];
  typedef uint16_t _g4_t_v72[6];
  typedef uint16_t _g4_t_v73[6];
  typedef uint16_t _g4_t_v74[6];
  typedef uint16_t _g4_t_v75[6];
  typedef uint16_t _g4_t_v76[6];
  typedef uint16_t _g4_t_v77[6];
  typedef uint16_t _g4_t_v78[6];
  typedef uint16_t _g4_t_v79[6];
  typedef uint16_t _g4_t_v80[6];
  typedef uint16_t _g4_t_v81[6];
  typedef uint16_t _g4_t_v82[6];
  typedef uint16_t _g4_t_v83[6];
  typedef uint8_t _g4_t_v84[12];
  typedef uint8_t _g4_t_v85[12];
  typedef uint8_t _g4_t_v86[12];
  typedef uint8_t _g4_t_v87[12];
  typedef uint8_t _g4_t_v88[12];
  typedef uint8_t _g4_t_v89[12];
  typedef char _g4_t_v90;
  typedef char _g4_t_v91;
  typedef gameswf::Self *_g4_t_v92;
  typedef int16_t _g4_t_v93;
  typedef char _g4_t_v94;
  typedef char _g4_t_v95;
  typedef char _g4_t_v96;
  typedef char _g4_t_v97;
  typedef gameswf::Self *_g4_t_v98;
  typedef int16_t _g4_t_v99;
  typedef char _g4_t_v100;
  typedef char _g4_t_v101;
  typedef char _g4_t_v102;
  typedef char _g4_t_v103;
  typedef gameswf::Self *_g4_t_v104;
  typedef int16_t _g4_t_v105;
  typedef char _g4_t_v106;
  typedef char _g4_t_v107;
  typedef char _g4_t_v108;
  typedef char _g4_t_v109;
  typedef gameswf::Self *_g4_t_v110;
  typedef int16_t _g4_t_v111;
  typedef char _g4_t_v112;
  typedef char _g4_t_v113;
  typedef char _g4_t_v114;
  typedef char _g4_t_v115;
  typedef gameswf::Self *_g4_t_v116;
  typedef int16_t _g4_t_v117;
  typedef char _g4_t_v118;
  typedef char _g4_t_v119;
  typedef char _g4_t_v120;
  typedef char _g4_t_v121;
  typedef gameswf::Self *_g4_t_v122;
  typedef int16_t _g4_t_v123;
  typedef char _g4_t_v124;
  typedef char _g4_t_v125;
  typedef char _g4_t_v126;
  typedef char _g4_t_v127;
  typedef gameswf::Self *_g4_t_v128;
  typedef int16_t _g4_t_v129;
  typedef char _g4_t_v130;
  typedef char _g4_t_v131;
  typedef char _g4_t_v132;
  typedef char _g4_t_v133;
  typedef gameswf::Self *_g4_t_v134;
  typedef int16_t _g4_t_v135;
  typedef char _g4_t_v136;
  typedef char _g4_t_v137;
  typedef char _g4_t_v138;
  typedef char _g4_t_v139;
  typedef gameswf::Self *_g4_t_v140;
  typedef int16_t _g4_t_v141;
  typedef char _g4_t_v142;
  typedef char _g4_t_v143;
  typedef char _g4_t_v144;
  typedef char _g4_t_v145;
  typedef gameswf::Self *_g4_t_v146;
  typedef int16_t _g4_t_v147;
  typedef char _g4_t_v148;
  typedef char _g4_t_v149;
  typedef char _g4_t_v150;
  typedef char _g4_t_v151;
  typedef gameswf::Self *_g4_t_v152;
  typedef int16_t _g4_t_v153;
  typedef char _g4_t_v154;
  typedef char _g4_t_v155;
  typedef char _g4_t_v156;
  typedef char _g4_t_v157;
  typedef gameswf::Self *_g4_t_v158;
  typedef int16_t _g4_t_v159;
  typedef char _g4_t_v160;
  typedef char _g4_t_v161;
  typedef char _g4_t_v162;
  typedef char _g4_t_v163;
  typedef gameswf::Self *_g4_t_v164;
  typedef int16_t _g4_t_v165;
  typedef char _g4_t_v166;
  typedef char _g4_t_v167;
  typedef char _g4_t_v168;
  typedef char _g4_t_v169;
  typedef gameswf::Self *_g4_t_v170;
  typedef int16_t _g4_t_v171;
  typedef char _g4_t_v172;
  typedef char _g4_t_v173;
  typedef char _g4_t_v174;
  typedef char _g4_t_v175;
  typedef gameswf::Self *_g4_t_v176;
  typedef int16_t _g4_t_v177;
  typedef char _g4_t_v178;
  typedef char _g4_t_v179;
  typedef char _g4_t_v180;
  typedef char _g4_t_v181;
  typedef gameswf::Self *_g4_t_v182;
  typedef int16_t _g4_t_v183;
  typedef char _g4_t_v184;
  typedef char _g4_t_v185;
  typedef char _g4_t_v186;
  typedef char _g4_t_v187;
  typedef gameswf::Self *_g4_t_v188;
  typedef int16_t _g4_t_v189;
  typedef char _g4_t_v190;
  typedef char _g4_t_v191;
  typedef char _g4_t_v192;
  typedef char _g4_t_v193;
  typedef gameswf::Self *_g4_t_v194;
  typedef int16_t _g4_t_v195;
  typedef char _g4_t_v196;
  typedef char _g4_t_v197;
  typedef char _g4_t_v198;
  typedef char _g4_t_v199;
  typedef gameswf::Self *_g4_t_v200;
  typedef int16_t _g4_t_v201;
  typedef char _g4_t_v202;
  typedef char _g4_t_v203;
  typedef char _g4_t_v204;
  typedef char _g4_t_v205;
  typedef gameswf::Self *_g4_t_v206;
  typedef int16_t _g4_t_v207;
  typedef char _g4_t_v208;
  typedef char _g4_t_v209;
  typedef char _g4_t_v210;
  typedef char _g4_t_v211;
  typedef gameswf::Self *_g4_t_v212;
  typedef int16_t _g4_t_v213;
  typedef char _g4_t_v214;
  typedef char _g4_t_v215;
  typedef char _g4_t_v216;
  typedef char _g4_t_v217;
  typedef gameswf::Self *_g4_t_v218;
  typedef int16_t _g4_t_v219;
  typedef char _g4_t_v220;
  typedef char _g4_t_v221;
  typedef char _g4_t_v222;
  typedef char _g4_t_v223;
  typedef gameswf::Self *_g4_t_v224;
  typedef int16_t _g4_t_v225;
  typedef char _g4_t_v226;
  typedef char _g4_t_v227;
  typedef char _g4_t_v228;
  typedef char _g4_t_v229;
  typedef gameswf::Self *_g4_t_v230;
  typedef int16_t _g4_t_v231;
  typedef char _g4_t_v232;
  typedef char _g4_t_v233;
  enum : size_t {
    _g4_s0 = 1168u,
    _g4_s1 = (0u + sizeof(_g4_t_v59)) > _g4_s0 ? (0u + sizeof(_g4_t_v59)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v60)) > _g4_s1 ? (0u + sizeof(_g4_t_v60)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v61)) > _g4_s2 ? (4u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v62)) > _g4_s3 ? (8u + sizeof(_g4_t_v62)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v63)) > _g4_s4 ? (8u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v64)) > _g4_s5 ? (12u + sizeof(_g4_t_v64)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v65)) > _g4_s6 ? (16u + sizeof(_g4_t_v65)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v66)) > _g4_s7 ? (32u + sizeof(_g4_t_v66)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v67)) > _g4_s8 ? (44u + sizeof(_g4_t_v67)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v68)) > _g4_s9 ? (56u + sizeof(_g4_t_v68)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v69)) > _g4_s10 ? (68u + sizeof(_g4_t_v69)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v70)) > _g4_s11 ? (80u + sizeof(_g4_t_v70)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v71)) > _g4_s12 ? (92u + sizeof(_g4_t_v71)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v72)) > _g4_s13 ? (104u + sizeof(_g4_t_v72)) : _g4_s13,
    _g4_s15 = (116u + sizeof(_g4_t_v73)) > _g4_s14 ? (116u + sizeof(_g4_t_v73)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v74)) > _g4_s15 ? (128u + sizeof(_g4_t_v74)) : _g4_s15,
    _g4_s17 = (140u + sizeof(_g4_t_v75)) > _g4_s16 ? (140u + sizeof(_g4_t_v75)) : _g4_s16,
    _g4_s18 = (152u + sizeof(_g4_t_v76)) > _g4_s17 ? (152u + sizeof(_g4_t_v76)) : _g4_s17,
    _g4_s19 = (164u + sizeof(_g4_t_v77)) > _g4_s18 ? (164u + sizeof(_g4_t_v77)) : _g4_s18,
    _g4_s20 = (176u + sizeof(_g4_t_v78)) > _g4_s19 ? (176u + sizeof(_g4_t_v78)) : _g4_s19,
    _g4_s21 = (188u + sizeof(_g4_t_v79)) > _g4_s20 ? (188u + sizeof(_g4_t_v79)) : _g4_s20,
    _g4_s22 = (200u + sizeof(_g4_t_v80)) > _g4_s21 ? (200u + sizeof(_g4_t_v80)) : _g4_s21,
    _g4_s23 = (212u + sizeof(_g4_t_v81)) > _g4_s22 ? (212u + sizeof(_g4_t_v81)) : _g4_s22,
    _g4_s24 = (224u + sizeof(_g4_t_v82)) > _g4_s23 ? (224u + sizeof(_g4_t_v82)) : _g4_s23,
    _g4_s25 = (236u + sizeof(_g4_t_v83)) > _g4_s24 ? (236u + sizeof(_g4_t_v83)) : _g4_s24,
    _g4_s26 = (248u + sizeof(_g4_t_v84)) > _g4_s25 ? (248u + sizeof(_g4_t_v84)) : _g4_s25,
    _g4_s27 = (260u + sizeof(_g4_t_v85)) > _g4_s26 ? (260u + sizeof(_g4_t_v85)) : _g4_s26,
    _g4_s28 = (272u + sizeof(_g4_t_v86)) > _g4_s27 ? (272u + sizeof(_g4_t_v86)) : _g4_s27,
    _g4_s29 = (284u + sizeof(_g4_t_v87)) > _g4_s28 ? (284u + sizeof(_g4_t_v87)) : _g4_s28,
    _g4_s30 = (296u + sizeof(_g4_t_v88)) > _g4_s29 ? (296u + sizeof(_g4_t_v88)) : _g4_s29,
    _g4_s31 = (308u + sizeof(_g4_t_v89)) > _g4_s30 ? (308u + sizeof(_g4_t_v89)) : _g4_s30,
    _g4_s32 = (320u + sizeof(_g4_t_v90)) > _g4_s31 ? (320u + sizeof(_g4_t_v90)) : _g4_s31,
    _g4_s33 = (321u + sizeof(_g4_t_v91)) > _g4_s32 ? (321u + sizeof(_g4_t_v91)) : _g4_s32,
    _g4_s34 = (332u + sizeof(_g4_t_v92)) > _g4_s33 ? (332u + sizeof(_g4_t_v92)) : _g4_s33,
    _g4_s35 = (336u + sizeof(_g4_t_v93)) > _g4_s34 ? (336u + sizeof(_g4_t_v93)) : _g4_s34,
    _g4_s36 = (338u + sizeof(_g4_t_v94)) > _g4_s35 ? (338u + sizeof(_g4_t_v94)) : _g4_s35,
    _g4_s37 = (339u + sizeof(_g4_t_v95)) > _g4_s36 ? (339u + sizeof(_g4_t_v95)) : _g4_s36,
    _g4_s38 = (352u + sizeof(_g4_t_v96)) > _g4_s37 ? (352u + sizeof(_g4_t_v96)) : _g4_s37,
    _g4_s39 = (353u + sizeof(_g4_t_v97)) > _g4_s38 ? (353u + sizeof(_g4_t_v97)) : _g4_s38,
    _g4_s40 = (364u + sizeof(_g4_t_v98)) > _g4_s39 ? (364u + sizeof(_g4_t_v98)) : _g4_s39,
    _g4_s41 = (368u + sizeof(_g4_t_v99)) > _g4_s40 ? (368u + sizeof(_g4_t_v99)) : _g4_s40,
    _g4_s42 = (370u + sizeof(_g4_t_v100)) > _g4_s41 ? (370u + sizeof(_g4_t_v100)) : _g4_s41,
    _g4_s43 = (371u + sizeof(_g4_t_v101)) > _g4_s42 ? (371u + sizeof(_g4_t_v101)) : _g4_s42,
    _g4_s44 = (384u + sizeof(_g4_t_v102)) > _g4_s43 ? (384u + sizeof(_g4_t_v102)) : _g4_s43,
    _g4_s45 = (385u + sizeof(_g4_t_v103)) > _g4_s44 ? (385u + sizeof(_g4_t_v103)) : _g4_s44,
    _g4_s46 = (396u + sizeof(_g4_t_v104)) > _g4_s45 ? (396u + sizeof(_g4_t_v104)) : _g4_s45,
    _g4_s47 = (400u + sizeof(_g4_t_v105)) > _g4_s46 ? (400u + sizeof(_g4_t_v105)) : _g4_s46,
    _g4_s48 = (402u + sizeof(_g4_t_v106)) > _g4_s47 ? (402u + sizeof(_g4_t_v106)) : _g4_s47,
    _g4_s49 = (403u + sizeof(_g4_t_v107)) > _g4_s48 ? (403u + sizeof(_g4_t_v107)) : _g4_s48,
    _g4_s50 = (416u + sizeof(_g4_t_v108)) > _g4_s49 ? (416u + sizeof(_g4_t_v108)) : _g4_s49,
    _g4_s51 = (417u + sizeof(_g4_t_v109)) > _g4_s50 ? (417u + sizeof(_g4_t_v109)) : _g4_s50,
    _g4_s52 = (428u + sizeof(_g4_t_v110)) > _g4_s51 ? (428u + sizeof(_g4_t_v110)) : _g4_s51,
    _g4_s53 = (432u + sizeof(_g4_t_v111)) > _g4_s52 ? (432u + sizeof(_g4_t_v111)) : _g4_s52,
    _g4_s54 = (434u + sizeof(_g4_t_v112)) > _g4_s53 ? (434u + sizeof(_g4_t_v112)) : _g4_s53,
    _g4_s55 = (435u + sizeof(_g4_t_v113)) > _g4_s54 ? (435u + sizeof(_g4_t_v113)) : _g4_s54,
    _g4_s56 = (448u + sizeof(_g4_t_v114)) > _g4_s55 ? (448u + sizeof(_g4_t_v114)) : _g4_s55,
    _g4_s57 = (449u + sizeof(_g4_t_v115)) > _g4_s56 ? (449u + sizeof(_g4_t_v115)) : _g4_s56,
    _g4_s58 = (460u + sizeof(_g4_t_v116)) > _g4_s57 ? (460u + sizeof(_g4_t_v116)) : _g4_s57,
    _g4_s59 = (464u + sizeof(_g4_t_v117)) > _g4_s58 ? (464u + sizeof(_g4_t_v117)) : _g4_s58,
    _g4_s60 = (466u + sizeof(_g4_t_v118)) > _g4_s59 ? (466u + sizeof(_g4_t_v118)) : _g4_s59,
    _g4_s61 = (467u + sizeof(_g4_t_v119)) > _g4_s60 ? (467u + sizeof(_g4_t_v119)) : _g4_s60,
    _g4_s62 = (480u + sizeof(_g4_t_v120)) > _g4_s61 ? (480u + sizeof(_g4_t_v120)) : _g4_s61,
    _g4_s63 = (481u + sizeof(_g4_t_v121)) > _g4_s62 ? (481u + sizeof(_g4_t_v121)) : _g4_s62,
    _g4_s64 = (492u + sizeof(_g4_t_v122)) > _g4_s63 ? (492u + sizeof(_g4_t_v122)) : _g4_s63,
    _g4_s65 = (496u + sizeof(_g4_t_v123)) > _g4_s64 ? (496u + sizeof(_g4_t_v123)) : _g4_s64,
    _g4_s66 = (498u + sizeof(_g4_t_v124)) > _g4_s65 ? (498u + sizeof(_g4_t_v124)) : _g4_s65,
    _g4_s67 = (499u + sizeof(_g4_t_v125)) > _g4_s66 ? (499u + sizeof(_g4_t_v125)) : _g4_s66,
    _g4_s68 = (512u + sizeof(_g4_t_v126)) > _g4_s67 ? (512u + sizeof(_g4_t_v126)) : _g4_s67,
    _g4_s69 = (513u + sizeof(_g4_t_v127)) > _g4_s68 ? (513u + sizeof(_g4_t_v127)) : _g4_s68,
    _g4_s70 = (524u + sizeof(_g4_t_v128)) > _g4_s69 ? (524u + sizeof(_g4_t_v128)) : _g4_s69,
    _g4_s71 = (528u + sizeof(_g4_t_v129)) > _g4_s70 ? (528u + sizeof(_g4_t_v129)) : _g4_s70,
    _g4_s72 = (530u + sizeof(_g4_t_v130)) > _g4_s71 ? (530u + sizeof(_g4_t_v130)) : _g4_s71,
    _g4_s73 = (531u + sizeof(_g4_t_v131)) > _g4_s72 ? (531u + sizeof(_g4_t_v131)) : _g4_s72,
    _g4_s74 = (544u + sizeof(_g4_t_v132)) > _g4_s73 ? (544u + sizeof(_g4_t_v132)) : _g4_s73,
    _g4_s75 = (545u + sizeof(_g4_t_v133)) > _g4_s74 ? (545u + sizeof(_g4_t_v133)) : _g4_s74,
    _g4_s76 = (556u + sizeof(_g4_t_v134)) > _g4_s75 ? (556u + sizeof(_g4_t_v134)) : _g4_s75,
    _g4_s77 = (560u + sizeof(_g4_t_v135)) > _g4_s76 ? (560u + sizeof(_g4_t_v135)) : _g4_s76,
    _g4_s78 = (562u + sizeof(_g4_t_v136)) > _g4_s77 ? (562u + sizeof(_g4_t_v136)) : _g4_s77,
    _g4_s79 = (563u + sizeof(_g4_t_v137)) > _g4_s78 ? (563u + sizeof(_g4_t_v137)) : _g4_s78,
    _g4_s80 = (576u + sizeof(_g4_t_v138)) > _g4_s79 ? (576u + sizeof(_g4_t_v138)) : _g4_s79,
    _g4_s81 = (577u + sizeof(_g4_t_v139)) > _g4_s80 ? (577u + sizeof(_g4_t_v139)) : _g4_s80,
    _g4_s82 = (588u + sizeof(_g4_t_v140)) > _g4_s81 ? (588u + sizeof(_g4_t_v140)) : _g4_s81,
    _g4_s83 = (592u + sizeof(_g4_t_v141)) > _g4_s82 ? (592u + sizeof(_g4_t_v141)) : _g4_s82,
    _g4_s84 = (594u + sizeof(_g4_t_v142)) > _g4_s83 ? (594u + sizeof(_g4_t_v142)) : _g4_s83,
    _g4_s85 = (595u + sizeof(_g4_t_v143)) > _g4_s84 ? (595u + sizeof(_g4_t_v143)) : _g4_s84,
    _g4_s86 = (608u + sizeof(_g4_t_v144)) > _g4_s85 ? (608u + sizeof(_g4_t_v144)) : _g4_s85,
    _g4_s87 = (609u + sizeof(_g4_t_v145)) > _g4_s86 ? (609u + sizeof(_g4_t_v145)) : _g4_s86,
    _g4_s88 = (620u + sizeof(_g4_t_v146)) > _g4_s87 ? (620u + sizeof(_g4_t_v146)) : _g4_s87,
    _g4_s89 = (624u + sizeof(_g4_t_v147)) > _g4_s88 ? (624u + sizeof(_g4_t_v147)) : _g4_s88,
    _g4_s90 = (626u + sizeof(_g4_t_v148)) > _g4_s89 ? (626u + sizeof(_g4_t_v148)) : _g4_s89,
    _g4_s91 = (627u + sizeof(_g4_t_v149)) > _g4_s90 ? (627u + sizeof(_g4_t_v149)) : _g4_s90,
    _g4_s92 = (640u + sizeof(_g4_t_v150)) > _g4_s91 ? (640u + sizeof(_g4_t_v150)) : _g4_s91,
    _g4_s93 = (641u + sizeof(_g4_t_v151)) > _g4_s92 ? (641u + sizeof(_g4_t_v151)) : _g4_s92,
    _g4_s94 = (652u + sizeof(_g4_t_v152)) > _g4_s93 ? (652u + sizeof(_g4_t_v152)) : _g4_s93,
    _g4_s95 = (656u + sizeof(_g4_t_v153)) > _g4_s94 ? (656u + sizeof(_g4_t_v153)) : _g4_s94,
    _g4_s96 = (658u + sizeof(_g4_t_v154)) > _g4_s95 ? (658u + sizeof(_g4_t_v154)) : _g4_s95,
    _g4_s97 = (659u + sizeof(_g4_t_v155)) > _g4_s96 ? (659u + sizeof(_g4_t_v155)) : _g4_s96,
    _g4_s98 = (672u + sizeof(_g4_t_v156)) > _g4_s97 ? (672u + sizeof(_g4_t_v156)) : _g4_s97,
    _g4_s99 = (673u + sizeof(_g4_t_v157)) > _g4_s98 ? (673u + sizeof(_g4_t_v157)) : _g4_s98,
    _g4_s100 = (684u + sizeof(_g4_t_v158)) > _g4_s99 ? (684u + sizeof(_g4_t_v158)) : _g4_s99,
    _g4_s101 = (688u + sizeof(_g4_t_v159)) > _g4_s100 ? (688u + sizeof(_g4_t_v159)) : _g4_s100,
    _g4_s102 = (690u + sizeof(_g4_t_v160)) > _g4_s101 ? (690u + sizeof(_g4_t_v160)) : _g4_s101,
    _g4_s103 = (691u + sizeof(_g4_t_v161)) > _g4_s102 ? (691u + sizeof(_g4_t_v161)) : _g4_s102,
    _g4_s104 = (704u + sizeof(_g4_t_v162)) > _g4_s103 ? (704u + sizeof(_g4_t_v162)) : _g4_s103,
    _g4_s105 = (705u + sizeof(_g4_t_v163)) > _g4_s104 ? (705u + sizeof(_g4_t_v163)) : _g4_s104,
    _g4_s106 = (716u + sizeof(_g4_t_v164)) > _g4_s105 ? (716u + sizeof(_g4_t_v164)) : _g4_s105,
    _g4_s107 = (720u + sizeof(_g4_t_v165)) > _g4_s106 ? (720u + sizeof(_g4_t_v165)) : _g4_s106,
    _g4_s108 = (722u + sizeof(_g4_t_v166)) > _g4_s107 ? (722u + sizeof(_g4_t_v166)) : _g4_s107,
    _g4_s109 = (723u + sizeof(_g4_t_v167)) > _g4_s108 ? (723u + sizeof(_g4_t_v167)) : _g4_s108,
    _g4_s110 = (736u + sizeof(_g4_t_v168)) > _g4_s109 ? (736u + sizeof(_g4_t_v168)) : _g4_s109,
    _g4_s111 = (737u + sizeof(_g4_t_v169)) > _g4_s110 ? (737u + sizeof(_g4_t_v169)) : _g4_s110,
    _g4_s112 = (748u + sizeof(_g4_t_v170)) > _g4_s111 ? (748u + sizeof(_g4_t_v170)) : _g4_s111,
    _g4_s113 = (752u + sizeof(_g4_t_v171)) > _g4_s112 ? (752u + sizeof(_g4_t_v171)) : _g4_s112,
    _g4_s114 = (754u + sizeof(_g4_t_v172)) > _g4_s113 ? (754u + sizeof(_g4_t_v172)) : _g4_s113,
    _g4_s115 = (755u + sizeof(_g4_t_v173)) > _g4_s114 ? (755u + sizeof(_g4_t_v173)) : _g4_s114,
    _g4_s116 = (768u + sizeof(_g4_t_v174)) > _g4_s115 ? (768u + sizeof(_g4_t_v174)) : _g4_s115,
    _g4_s117 = (769u + sizeof(_g4_t_v175)) > _g4_s116 ? (769u + sizeof(_g4_t_v175)) : _g4_s116,
    _g4_s118 = (780u + sizeof(_g4_t_v176)) > _g4_s117 ? (780u + sizeof(_g4_t_v176)) : _g4_s117,
    _g4_s119 = (784u + sizeof(_g4_t_v177)) > _g4_s118 ? (784u + sizeof(_g4_t_v177)) : _g4_s118,
    _g4_s120 = (786u + sizeof(_g4_t_v178)) > _g4_s119 ? (786u + sizeof(_g4_t_v178)) : _g4_s119,
    _g4_s121 = (787u + sizeof(_g4_t_v179)) > _g4_s120 ? (787u + sizeof(_g4_t_v179)) : _g4_s120,
    _g4_s122 = (800u + sizeof(_g4_t_v180)) > _g4_s121 ? (800u + sizeof(_g4_t_v180)) : _g4_s121,
    _g4_s123 = (801u + sizeof(_g4_t_v181)) > _g4_s122 ? (801u + sizeof(_g4_t_v181)) : _g4_s122,
    _g4_s124 = (812u + sizeof(_g4_t_v182)) > _g4_s123 ? (812u + sizeof(_g4_t_v182)) : _g4_s123,
    _g4_s125 = (816u + sizeof(_g4_t_v183)) > _g4_s124 ? (816u + sizeof(_g4_t_v183)) : _g4_s124,
    _g4_s126 = (818u + sizeof(_g4_t_v184)) > _g4_s125 ? (818u + sizeof(_g4_t_v184)) : _g4_s125,
    _g4_s127 = (819u + sizeof(_g4_t_v185)) > _g4_s126 ? (819u + sizeof(_g4_t_v185)) : _g4_s126,
    _g4_s128 = (832u + sizeof(_g4_t_v186)) > _g4_s127 ? (832u + sizeof(_g4_t_v186)) : _g4_s127,
    _g4_s129 = (833u + sizeof(_g4_t_v187)) > _g4_s128 ? (833u + sizeof(_g4_t_v187)) : _g4_s128,
    _g4_s130 = (844u + sizeof(_g4_t_v188)) > _g4_s129 ? (844u + sizeof(_g4_t_v188)) : _g4_s129,
    _g4_s131 = (848u + sizeof(_g4_t_v189)) > _g4_s130 ? (848u + sizeof(_g4_t_v189)) : _g4_s130,
    _g4_s132 = (850u + sizeof(_g4_t_v190)) > _g4_s131 ? (850u + sizeof(_g4_t_v190)) : _g4_s131,
    _g4_s133 = (851u + sizeof(_g4_t_v191)) > _g4_s132 ? (851u + sizeof(_g4_t_v191)) : _g4_s132,
    _g4_s134 = (864u + sizeof(_g4_t_v192)) > _g4_s133 ? (864u + sizeof(_g4_t_v192)) : _g4_s133,
    _g4_s135 = (865u + sizeof(_g4_t_v193)) > _g4_s134 ? (865u + sizeof(_g4_t_v193)) : _g4_s134,
    _g4_s136 = (876u + sizeof(_g4_t_v194)) > _g4_s135 ? (876u + sizeof(_g4_t_v194)) : _g4_s135,
    _g4_s137 = (880u + sizeof(_g4_t_v195)) > _g4_s136 ? (880u + sizeof(_g4_t_v195)) : _g4_s136,
    _g4_s138 = (882u + sizeof(_g4_t_v196)) > _g4_s137 ? (882u + sizeof(_g4_t_v196)) : _g4_s137,
    _g4_s139 = (883u + sizeof(_g4_t_v197)) > _g4_s138 ? (883u + sizeof(_g4_t_v197)) : _g4_s138,
    _g4_s140 = (896u + sizeof(_g4_t_v198)) > _g4_s139 ? (896u + sizeof(_g4_t_v198)) : _g4_s139,
    _g4_s141 = (897u + sizeof(_g4_t_v199)) > _g4_s140 ? (897u + sizeof(_g4_t_v199)) : _g4_s140,
    _g4_s142 = (908u + sizeof(_g4_t_v200)) > _g4_s141 ? (908u + sizeof(_g4_t_v200)) : _g4_s141,
    _g4_s143 = (912u + sizeof(_g4_t_v201)) > _g4_s142 ? (912u + sizeof(_g4_t_v201)) : _g4_s142,
    _g4_s144 = (914u + sizeof(_g4_t_v202)) > _g4_s143 ? (914u + sizeof(_g4_t_v202)) : _g4_s143,
    _g4_s145 = (915u + sizeof(_g4_t_v203)) > _g4_s144 ? (915u + sizeof(_g4_t_v203)) : _g4_s144,
    _g4_s146 = (928u + sizeof(_g4_t_v204)) > _g4_s145 ? (928u + sizeof(_g4_t_v204)) : _g4_s145,
    _g4_s147 = (929u + sizeof(_g4_t_v205)) > _g4_s146 ? (929u + sizeof(_g4_t_v205)) : _g4_s146,
    _g4_s148 = (940u + sizeof(_g4_t_v206)) > _g4_s147 ? (940u + sizeof(_g4_t_v206)) : _g4_s147,
    _g4_s149 = (944u + sizeof(_g4_t_v207)) > _g4_s148 ? (944u + sizeof(_g4_t_v207)) : _g4_s148,
    _g4_s150 = (946u + sizeof(_g4_t_v208)) > _g4_s149 ? (946u + sizeof(_g4_t_v208)) : _g4_s149,
    _g4_s151 = (947u + sizeof(_g4_t_v209)) > _g4_s150 ? (947u + sizeof(_g4_t_v209)) : _g4_s150,
    _g4_s152 = (960u + sizeof(_g4_t_v210)) > _g4_s151 ? (960u + sizeof(_g4_t_v210)) : _g4_s151,
    _g4_s153 = (961u + sizeof(_g4_t_v211)) > _g4_s152 ? (961u + sizeof(_g4_t_v211)) : _g4_s152,
    _g4_s154 = (972u + sizeof(_g4_t_v212)) > _g4_s153 ? (972u + sizeof(_g4_t_v212)) : _g4_s153,
    _g4_s155 = (976u + sizeof(_g4_t_v213)) > _g4_s154 ? (976u + sizeof(_g4_t_v213)) : _g4_s154,
    _g4_s156 = (978u + sizeof(_g4_t_v214)) > _g4_s155 ? (978u + sizeof(_g4_t_v214)) : _g4_s155,
    _g4_s157 = (979u + sizeof(_g4_t_v215)) > _g4_s156 ? (979u + sizeof(_g4_t_v215)) : _g4_s156,
    _g4_s158 = (992u + sizeof(_g4_t_v216)) > _g4_s157 ? (992u + sizeof(_g4_t_v216)) : _g4_s157,
    _g4_s159 = (993u + sizeof(_g4_t_v217)) > _g4_s158 ? (993u + sizeof(_g4_t_v217)) : _g4_s158,
    _g4_s160 = (1004u + sizeof(_g4_t_v218)) > _g4_s159 ? (1004u + sizeof(_g4_t_v218)) : _g4_s159,
    _g4_s161 = (1008u + sizeof(_g4_t_v219)) > _g4_s160 ? (1008u + sizeof(_g4_t_v219)) : _g4_s160,
    _g4_s162 = (1010u + sizeof(_g4_t_v220)) > _g4_s161 ? (1010u + sizeof(_g4_t_v220)) : _g4_s161,
    _g4_s163 = (1011u + sizeof(_g4_t_v221)) > _g4_s162 ? (1011u + sizeof(_g4_t_v221)) : _g4_s162,
    _g4_s164 = (1024u + sizeof(_g4_t_v222)) > _g4_s163 ? (1024u + sizeof(_g4_t_v222)) : _g4_s163,
    _g4_s165 = (1025u + sizeof(_g4_t_v223)) > _g4_s164 ? (1025u + sizeof(_g4_t_v223)) : _g4_s164,
    _g4_s166 = (1036u + sizeof(_g4_t_v224)) > _g4_s165 ? (1036u + sizeof(_g4_t_v224)) : _g4_s165,
    _g4_s167 = (1040u + sizeof(_g4_t_v225)) > _g4_s166 ? (1040u + sizeof(_g4_t_v225)) : _g4_s166,
    _g4_s168 = (1042u + sizeof(_g4_t_v226)) > _g4_s167 ? (1042u + sizeof(_g4_t_v226)) : _g4_s167,
    _g4_s169 = (1043u + sizeof(_g4_t_v227)) > _g4_s168 ? (1043u + sizeof(_g4_t_v227)) : _g4_s168,
    _g4_s170 = (1056u + sizeof(_g4_t_v228)) > _g4_s169 ? (1056u + sizeof(_g4_t_v228)) : _g4_s169,
    _g4_s171 = (1057u + sizeof(_g4_t_v229)) > _g4_s170 ? (1057u + sizeof(_g4_t_v229)) : _g4_s170,
    _g4_s172 = (1068u + sizeof(_g4_t_v230)) > _g4_s171 ? (1068u + sizeof(_g4_t_v230)) : _g4_s171,
    _g4_s173 = (1072u + sizeof(_g4_t_v231)) > _g4_s172 ? (1072u + sizeof(_g4_t_v231)) : _g4_s172,
    _g4_s174 = (1074u + sizeof(_g4_t_v232)) > _g4_s173 ? (1074u + sizeof(_g4_t_v232)) : _g4_s173,
    _g4_s175 = (1075u + sizeof(_g4_t_v233)) > _g4_s174 ? (1075u + sizeof(_g4_t_v233)) : _g4_s174
  };
  alignas(16) uint8_t _g4_sf[_g4_s175];
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 0u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 0u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 44u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 68u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 80u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 92u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 104u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 116u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 128u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 140u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 152u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 164u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 176u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 188u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 200u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 212u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 224u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 236u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 248u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 260u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 272u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 284u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 296u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 308u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 320u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 321u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 332u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 336u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 338u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 339u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 352u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 353u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 364u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 368u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 370u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 371u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 384u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 385u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 396u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 400u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 402u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 403u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 416u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 417u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 428u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 432u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 434u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 435u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 448u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 449u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 460u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 464u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 466u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 467u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 480u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 481u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 492u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 496u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 498u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 499u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 512u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 513u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 524u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 528u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 530u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 531u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 544u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 545u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 556u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 560u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 562u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 563u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 576u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 577u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 588u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 592u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 594u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 595u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 608u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 609u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 620u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 624u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 626u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 627u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 640u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 641u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 652u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 656u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 658u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 659u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 672u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 673u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 684u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 688u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 690u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 691u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 704u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 705u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 716u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 720u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 722u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 723u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 736u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 737u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 748u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 752u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 754u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 755u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 768u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 769u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 780u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 784u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 786u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 787u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 800u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 801u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 812u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 816u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 818u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 819u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 832u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 833u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 844u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 848u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 850u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 851u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 864u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 865u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 876u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 880u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 882u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 883u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 896u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 897u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 908u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 912u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 914u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 915u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 928u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 929u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 940u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 944u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 946u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 947u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 960u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 961u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 972u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 976u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 978u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 979u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 992u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 993u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 1004u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 1008u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 1010u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 1011u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 1024u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 1025u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 1036u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 1040u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 1042u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 1043u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 1056u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 1057u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 1068u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 1072u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 1074u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 1075u);

  v1 = (gameswf::ASKey::Self *)opNew(0x58u);
  gameswf::ASKey::Construct(v1, self);
  v2 = *((gameswf::Self **)v1 + 3);
  if ( v2 == nullptr || *(int *)v2 <= 32 )
  {
    v3 = 48;
LABEL_7:
    for ( i = 1; i < v3; i *= 2 )
      ;
    if ( i <= 3 )
      i = 4;
    if ( v2 == nullptr )
    {
LABEL_13:
      v65 = (int *)gameswf::malloc_internal(24 * i + 8);
      *v65 = 0;
      v5 = v65;
      v6 = 2;
      v65[1] = i - 1;
      v7 = 0;
      while ( 1 )
      {
        ++v7;
        v5[v6] = -2;
        v6 += 6;
        if ( i <= v7 )
          break;
        v5 = v65;
      }
      v8 = *((gameswf::Self **)v1 + 3);
      if ( v8 != nullptr )
      {
        v62 = *((uint32_t *)v8 + 1);
        if ( v62 >= 0 )
        {
          v9 = 8;
          v61 = v1;
          for ( j = 0; j <= v62; ++j )
          {
            v11 = (char **)((char *)v8 + v9);
            if ( *(uint32_t *)((char *)v8 + v9) != -2 )
            {
              v59 = j;
              sub_112C3A0(&v65, v11 + 2, (gameswf::ASValue::Self *)(v11 + 3));
              gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v11 + 3));
              *v11 = (char *)-2;
              v11[1] = nullptr;
              j = v59;
              v8 = *((gameswf::Self **)v61 + 3);
            }
            v9 += 24;
          }
          v1 = v61;
        }
        gameswf::free_internal(v8);
      }
      v12 = v65;
      v65 = nullptr;
      *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v12);
      goto LABEL_25;
    }
LABEL_12:
    if ( *((uint32_t *)v2 + 1) + 1 == i )
      goto LABEL_25;
    goto LABEL_13;
  }
  v3 = (3 * *(uint32_t *)v2) >> 1;
  if ( v3 > 0 )
  {
    i = 4;
    if ( v3 == 1 )
      goto LABEL_12;
    goto LABEL_7;
  }
  v64 = *((uint32_t *)v2 + 1);
  if ( v64 >= 0 )
  {
    v63 = v1;
    v56 = 0;
    v57 = 8;
    do
    {
      v58 = (uint32_t *)((char *)v2 + v57);
      if ( *(uint32_t *)((char *)v2 + v57) != -2 )
      {
        v60 = v56;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v58 + 3));
        *v58 = -2;
        v58[1] = 0;
        v56 = v60;
        v2 = *((gameswf::Self **)v63 + 3);
      }
      ++v56;
      v57 += 24;
    }
    while ( v64 >= v56 );
    v1 = v63;
  }
  gameswf::free_internal(v2);
  *((uint32_t *)v1 + 3) = 0;
LABEL_25:
  *(uint64_t *)&v66[2] = 0x4020000000000000LL;
  v66[0] = 2;
  v90 = 1;
  v91 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v90, 9);
  v13 = (gameswf::Self *)&v91;
  if ( v90 == -1 )
    v13 = v92;
  gameswf::Strcpy_s(v13, &byte_9[1], (gameswf::Self *)"BACKSPACE");
  v93 = -1;
  v94 = 127;
  v95 |= 1u;
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v90);
  if ( StandardMemberID == -1
    || G4_VCALL<uint8_t>(v1, 32, StandardMemberID, v66) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v90, v66);
    if ( v90 != -1 )
      goto LABEL_30;
  }
  else if ( v90 != -1 )
  {
    goto LABEL_30;
  }
  if ( (v95 & 1) != 0 )
    gameswf::free_internal(v92);
LABEL_30:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v66);
  v67[0] = 2;
  *(uint64_t *)&v67[2] = 0x4034000000000000LL;
  v96 = 1;
  v97 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v96, 8);
  v15 = (gameswf::Self *)&v97;
  if ( v96 == -1 )
    v15 = v98;
  gameswf::Strcpy_s(v15, byte_9, (gameswf::Self *)"CAPSLOCK");
  v99 = -1;
  v100 = 127;
  v101 |= 1u;
  v16 = gameswf::getStandardMemberID((gameswf::Self *)&v96);
  if ( v16 == -1
    || G4_VCALL<uint8_t>(v1, 32, v16, v67) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v96, v67);
    if ( v96 != -1 )
      goto LABEL_35;
  }
  else if ( v96 != -1 )
  {
    goto LABEL_35;
  }
  if ( (v101 & 1) != 0 )
    gameswf::free_internal(v98);
LABEL_35:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v67);
  v68[0] = 2;
  *(uint64_t *)&v68[2] = 0x4031000000000000LL;
  v102 = 1;
  v103 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v102, 7);
  v17 = (gameswf::Self *)&v103;
  if ( v102 == -1 )
    v17 = v104;
  gameswf::Strcpy_s(v17, byte_8, (gameswf::Self *)"CONTROL");
  v105 = -1;
  v106 = 127;
  v107 |= 1u;
  v18 = gameswf::getStandardMemberID((gameswf::Self *)&v102);
  if ( v18 == -1
    || G4_VCALL<uint8_t>(v1, 32, v18, v68) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v102, v68);
    if ( v102 != -1 )
      goto LABEL_40;
  }
  else if ( v102 != -1 )
  {
    goto LABEL_40;
  }
  if ( (v107 & 1) != 0 )
    gameswf::free_internal(v104);
LABEL_40:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v68);
  v69[0] = 2;
  *(uint64_t *)&v69[2] = 0x4047000000000000LL;
  v108 = 1;
  v109 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v108, 9);
  v19 = (gameswf::Self *)&v109;
  if ( v108 == -1 )
    v19 = v110;
  gameswf::Strcpy_s(v19, &byte_9[1], (gameswf::Self *)"DELETEKEY");
  v111 = -1;
  v112 = 127;
  v113 |= 1u;
  v20 = gameswf::getStandardMemberID((gameswf::Self *)&v108);
  if ( v20 == -1
    || G4_VCALL<uint8_t>(v1, 32, v20, v69) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v108, v69);
    if ( v108 != -1 )
      goto LABEL_45;
  }
  else if ( v108 != -1 )
  {
    goto LABEL_45;
  }
  if ( (v113 & 1) != 0 )
    gameswf::free_internal(v110);
LABEL_45:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v69);
  v70[0] = 2;
  *(uint64_t *)&v70[2] = 0x4044000000000000LL;
  v114 = 1;
  v115 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v114, 4);
  v21 = (gameswf::Self *)&v115;
  if ( v114 == -1 )
    v21 = v116;
  gameswf::Strcpy_s(v21, (char *)&loc_4 + 1, (gameswf::Self *)"DOWN");
  v117 = -1;
  v118 = 127;
  v119 |= 1u;
  v22 = gameswf::getStandardMemberID((gameswf::Self *)&v114);
  if ( v22 == -1
    || G4_VCALL<uint8_t>(v1, 32, v22, v70) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v114, v70);
    if ( v114 != -1 )
      goto LABEL_50;
  }
  else if ( v114 != -1 )
  {
    goto LABEL_50;
  }
  if ( (v119 & 1) != 0 )
    gameswf::free_internal(v116);
LABEL_50:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v70);
  v71[0] = 2;
  *(uint64_t *)&v71[2] = 0x4041800000000000LL;
  v120 = 1;
  v121 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v120, 3);
  v23 = (gameswf::Self *)&v121;
  if ( v120 == -1 )
    v23 = v122;
  gameswf::Strcpy_s(v23, (char *)&loc_4, (gameswf::Self *)"END");
  v123 = -1;
  v124 = 127;
  v125 |= 1u;
  v24 = gameswf::getStandardMemberID((gameswf::Self *)&v120);
  if ( v24 == -1
    || G4_VCALL<uint8_t>(v1, 32, v24, v71) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v120, v71);
    if ( v120 != -1 )
      goto LABEL_55;
  }
  else if ( v120 != -1 )
  {
    goto LABEL_55;
  }
  if ( (v125 & 1) != 0 )
    gameswf::free_internal(v122);
LABEL_55:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v71);
  v72[0] = 2;
  *(uint64_t *)&v72[2] = 0x402A000000000000LL;
  v126 = 1;
  v127 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v126, 5);
  v25 = (gameswf::Self *)&v127;
  if ( v126 == -1 )
    v25 = v128;
  gameswf::Strcpy_s(v25, (char *)&loc_6, (gameswf::Self *)"ENTER");
  v129 = -1;
  v130 = 127;
  v131 |= 1u;
  v26 = gameswf::getStandardMemberID((gameswf::Self *)&v126);
  if ( v26 == -1
    || G4_VCALL<uint8_t>(v1, 32, v26, v72) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v126, v72);
    if ( v126 != -1 )
      goto LABEL_60;
  }
  else if ( v126 != -1 )
  {
    goto LABEL_60;
  }
  if ( (v131 & 1) != 0 )
    gameswf::free_internal(v128);
LABEL_60:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v72);
  v73[0] = 2;
  *(uint64_t *)&v73[2] = 0x403B000000000000LL;
  v132 = 1;
  v133 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v132, 6);
  v27 = (gameswf::Self *)&v133;
  if ( v132 == -1 )
    v27 = v134;
  gameswf::Strcpy_s(v27, (char *)&loc_6 + 1, (gameswf::Self *)"ESCAPE");
  v135 = -1;
  v136 = 127;
  v137 |= 1u;
  v28 = gameswf::getStandardMemberID((gameswf::Self *)&v132);
  if ( v28 == -1
    || G4_VCALL<uint8_t>(v1, 32, v28, v73) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v132, v73);
    if ( v132 != -1 )
      goto LABEL_65;
  }
  else if ( v132 != -1 )
  {
    goto LABEL_65;
  }
  if ( (v137 & 1) != 0 )
    gameswf::free_internal(v134);
LABEL_65:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v73);
  v74[0] = 2;
  *(uint64_t *)&v74[2] = 0x4042000000000000LL;
  v138 = 1;
  v139 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v138, 4);
  v29 = (gameswf::Self *)&v139;
  if ( v138 == -1 )
    v29 = v140;
  gameswf::Strcpy_s(v29, (char *)&loc_4 + 1, (gameswf::Self *)"HOME");
  v141 = -1;
  v142 = 127;
  v143 |= 1u;
  v30 = gameswf::getStandardMemberID((gameswf::Self *)&v138);
  if ( v30 == -1
    || G4_VCALL<uint8_t>(v1, 32, v30, v74) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v138, v74);
    if ( v138 != -1 )
      goto LABEL_70;
  }
  else if ( v138 != -1 )
  {
    goto LABEL_70;
  }
  if ( (v143 & 1) != 0 )
    gameswf::free_internal(v140);
LABEL_70:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v74);
  v75[0] = 2;
  *(uint64_t *)&v75[2] = 0x4046800000000000LL;
  v144 = 1;
  v145 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v144, 6);
  v31 = (gameswf::Self *)&v145;
  if ( v144 == -1 )
    v31 = v146;
  gameswf::Strcpy_s(v31, (char *)&loc_6 + 1, (gameswf::Self *)"INSERT");
  v147 = -1;
  v148 = 127;
  v149 |= 1u;
  v32 = gameswf::getStandardMemberID((gameswf::Self *)&v144);
  if ( v32 == -1
    || G4_VCALL<uint8_t>(v1, 32, v32, v75) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v144, v75);
    if ( v144 != -1 )
      goto LABEL_75;
  }
  else if ( v144 != -1 )
  {
    goto LABEL_75;
  }
  if ( (v149 & 1) != 0 )
    gameswf::free_internal(v146);
LABEL_75:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v75);
  v76[0] = 2;
  *(uint64_t *)&v76[2] = 0x4042800000000000LL;
  v150 = 1;
  v151 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v150, 4);
  v33 = (gameswf::Self *)&v151;
  if ( v150 == -1 )
    v33 = v152;
  gameswf::Strcpy_s(v33, (char *)&loc_4 + 1, (gameswf::Self *)"LEFT");
  v153 = -1;
  v154 = 127;
  v155 |= 1u;
  v34 = gameswf::getStandardMemberID((gameswf::Self *)&v150);
  if ( v34 == -1
    || G4_VCALL<uint8_t>(v1, 32, v34, v76) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v150, v76);
    if ( v150 != -1 )
      goto LABEL_80;
  }
  else if ( v150 != -1 )
  {
    goto LABEL_80;
  }
  if ( (v155 & 1) != 0 )
    gameswf::free_internal(v152);
LABEL_80:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v76);
  v77[0] = 2;
  *(uint64_t *)&v77[2] = 0x4040800000000000LL;
  v156 = 1;
  v157 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v156, 4);
  v35 = (gameswf::Self *)&v157;
  if ( v156 == -1 )
    v35 = v158;
  gameswf::Strcpy_s(v35, (char *)&loc_4 + 1, (gameswf::Self *)"PGDN");
  v159 = -1;
  v160 = 127;
  v161 |= 1u;
  v36 = gameswf::getStandardMemberID((gameswf::Self *)&v156);
  if ( v36 == -1
    || G4_VCALL<uint8_t>(v1, 32, v36, v77) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v156, v77);
    if ( v156 != -1 )
      goto LABEL_85;
  }
  else if ( v156 != -1 )
  {
    goto LABEL_85;
  }
  if ( (v161 & 1) != 0 )
    gameswf::free_internal(v158);
LABEL_85:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v77);
  v78[0] = 2;
  *(uint64_t *)&v78[2] = 0x4041000000000000LL;
  v162 = 1;
  v163 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v162, 4);
  v37 = (gameswf::Self *)&v163;
  if ( v162 == -1 )
    v37 = v164;
  gameswf::Strcpy_s(v37, (char *)&loc_4 + 1, (gameswf::Self *)"PGUP");
  v165 = -1;
  v166 = 127;
  v167 |= 1u;
  v38 = gameswf::getStandardMemberID((gameswf::Self *)&v162);
  if ( v38 == -1
    || G4_VCALL<uint8_t>(v1, 32, v38, v78) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v162, v78);
    if ( v162 != -1 )
      goto LABEL_90;
  }
  else if ( v162 != -1 )
  {
    goto LABEL_90;
  }
  if ( (v167 & 1) != 0 )
    gameswf::free_internal(v164);
LABEL_90:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v78);
  v79[0] = 2;
  *(uint64_t *)&v79[2] = 0x4043800000000000LL;
  v168 = 1;
  v169 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v168, 5);
  v39 = (gameswf::Self *)&v169;
  if ( v168 == -1 )
    v39 = v170;
  gameswf::Strcpy_s(v39, (char *)&loc_6, (gameswf::Self *)"RIGHT");
  v171 = -1;
  v172 = 127;
  v173 |= 1u;
  v40 = gameswf::getStandardMemberID((gameswf::Self *)&v168);
  if ( v40 == -1
    || G4_VCALL<uint8_t>(v1, 32, v40, v79) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v168, v79);
    if ( v168 != -1 )
      goto LABEL_95;
  }
  else if ( v168 != -1 )
  {
    goto LABEL_95;
  }
  if ( (v173 & 1) != 0 )
    gameswf::free_internal(v170);
LABEL_95:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v79);
  v80[0] = 2;
  *(uint64_t *)&v80[2] = 0x4030000000000000LL;
  v174 = 1;
  v175 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v174, 5);
  v41 = (gameswf::Self *)&v175;
  if ( v174 == -1 )
    v41 = v176;
  gameswf::Strcpy_s(v41, (char *)&loc_6, (gameswf::Self *)"SHIFT");
  v177 = -1;
  v178 = 127;
  v179 |= 1u;
  v42 = gameswf::getStandardMemberID((gameswf::Self *)&v174);
  if ( v42 == -1
    || G4_VCALL<uint8_t>(v1, 32, v42, v80) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v174, v80);
    if ( v174 != -1 )
      goto LABEL_100;
  }
  else if ( v174 != -1 )
  {
    goto LABEL_100;
  }
  if ( (v179 & 1) != 0 )
    gameswf::free_internal(v176);
LABEL_100:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v80);
  v81[0] = 2;
  *(uint64_t *)&v81[2] = 0x4040000000000000LL;
  v180 = 1;
  v181 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v180, 5);
  v43 = (gameswf::Self *)&v181;
  if ( v180 == -1 )
    v43 = v182;
  gameswf::Strcpy_s(v43, (char *)&loc_6, (gameswf::Self *)"SPACE");
  v183 = -1;
  v184 = 127;
  v185 |= 1u;
  v44 = gameswf::getStandardMemberID((gameswf::Self *)&v180);
  if ( v44 == -1
    || G4_VCALL<uint8_t>(v1, 32, v44, v81) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v180, v81);
    if ( v180 != -1 )
      goto LABEL_105;
  }
  else if ( v180 != -1 )
  {
    goto LABEL_105;
  }
  if ( (v185 & 1) != 0 )
    gameswf::free_internal(v182);
LABEL_105:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v81);
  v82[0] = 2;
  *(uint64_t *)&v82[2] = 0x4022000000000000LL;
  v186 = 1;
  v187 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v186, 3);
  v45 = (gameswf::Self *)&v187;
  if ( v186 == -1 )
    v45 = v188;
  gameswf::Strcpy_s(v45, (char *)&loc_4, (gameswf::Self *)"TAB");
  v189 = -1;
  v190 = 127;
  v191 |= 1u;
  v46 = gameswf::getStandardMemberID((gameswf::Self *)&v186);
  if ( v46 == -1
    || G4_VCALL<uint8_t>(v1, 32, v46, v82) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v186, v82);
    if ( v186 != -1 )
      goto LABEL_110;
  }
  else if ( v186 != -1 )
  {
    goto LABEL_110;
  }
  if ( (v191 & 1) != 0 )
    gameswf::free_internal(v188);
LABEL_110:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v82);
  v83[0] = 2;
  *(uint64_t *)&v83[2] = 0x4043000000000000LL;
  v192 = 1;
  v193 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v192, 2);
  v47 = (gameswf::Self *)&v193;
  if ( v192 == -1 )
    v47 = v194;
  gameswf::Strcpy_s(v47, (char *)&dword_0 + 3, (gameswf::Self *)"UP");
  v195 = -1;
  v196 = 127;
  v197 |= 1u;
  v48 = gameswf::getStandardMemberID((gameswf::Self *)&v192);
  if ( v48 == -1
    || G4_VCALL<uint8_t>(v1, 32, v48, v83) == 0 )
  {
    G4_VCALL<void>(v1, 48, &v192, v83);
    if ( v192 != -1 )
      goto LABEL_115;
  }
  else if ( v192 != -1 )
  {
    goto LABEL_115;
  }
  if ( (v197 & 1) != 0 )
    gameswf::free_internal(v194);
LABEL_115:
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v83);
  v84[0] = 0;
  v84[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v84, (int)(uintptr_t)(gameswf::ASKey::addListener));
  v198 = 1;
  v199 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v198, 11);
  v49 = (gameswf::Self *)&v199;
  if ( v198 == -1 )
    v49 = v200;
  gameswf::Strcpy_s(v49, &byte_9[3], (gameswf::Self *)"addListener");
  v201 = -1;
  v202 = 127;
  v203 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v198, (const gameswf::ASValue::Self *)v84);
  if ( v198 == -1 && (v203 & 1) != 0 )
    gameswf::free_internal(v200);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v84);
  v85[0] = 0;
  v85[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v85, (int)(uintptr_t)(gameswf::ASKey::getAscii));
  v204 = 1;
  v205 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v204, 8);
  v50 = (gameswf::Self *)&v205;
  if ( v204 == -1 )
    v50 = v206;
  gameswf::Strcpy_s(v50, byte_9, (gameswf::Self *)"getAscii");
  v207 = -1;
  v208 = 127;
  v209 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v204, (const gameswf::ASValue::Self *)v85);
  if ( v204 == -1 && (v209 & 1) != 0 )
    gameswf::free_internal(v206);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v85);
  v86[0] = 0;
  v86[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v86, (int)(uintptr_t)(gameswf::ASKey::getCode));
  v210 = 1;
  v211 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v210, 7);
  v51 = (gameswf::Self *)&v211;
  if ( v210 == -1 )
    v51 = v212;
  gameswf::Strcpy_s(v51, byte_8, (gameswf::Self *)"getCode");
  v213 = -1;
  v214 = 127;
  v215 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v210, (const gameswf::ASValue::Self *)v86);
  if ( v210 == -1 && (v215 & 1) != 0 )
    gameswf::free_internal(v212);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v86);
  v87[0] = 0;
  v87[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v87, (int)(uintptr_t)(gameswf::ASKey::isDown));
  v216 = 1;
  v217 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v216, 6);
  v52 = (gameswf::Self *)&v217;
  if ( v216 == -1 )
    v52 = v218;
  gameswf::Strcpy_s(v52, (char *)&loc_6 + 1, (gameswf::Self *)"isDown");
  v219 = -1;
  v220 = 127;
  v221 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v216, (const gameswf::ASValue::Self *)v87);
  if ( v216 == -1 && (v221 & 1) != 0 )
    gameswf::free_internal(v218);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v87);
  v88[0] = 0;
  v88[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v88, (int)(uintptr_t)(gameswf::ASKey::isToggled));
  v222 = 1;
  v223 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v222, 9);
  v53 = (gameswf::Self *)&v223;
  if ( v222 == -1 )
    v53 = v224;
  gameswf::Strcpy_s(v53, &byte_9[1], (gameswf::Self *)"isToggled");
  v225 = -1;
  v226 = 127;
  v227 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v222, (const gameswf::ASValue::Self *)v88);
  if ( v222 == -1 && (v227 & 1) != 0 )
    gameswf::free_internal(v224);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v88);
  v89[0] = 0;
  v89[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v89, (int)(uintptr_t)(gameswf::ASKey::removeListener));
  v228 = 1;
  v229 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v228, 14);
  v54 = (gameswf::Self *)&v229;
  if ( v228 == -1 )
    v54 = v230;
  gameswf::Strcpy_s(v54, &byte_9[6], (gameswf::Self *)"removeListener");
  v231 = -1;
  v232 = 127;
  v233 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v228, (const gameswf::ASValue::Self *)v89);
  if ( v228 == -1 && (v233 & 1) != 0 )
    gameswf::free_internal(v230);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v89);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_round  (binary VA: 0x112ef60)
// Original: gameswf::math_round
// ----------------------------------------------------------------------------
int gameswf::math_round(int a1)
{
  __m128d v1;
  __m128d v2;
  __m128d v3;
  v1 = g4_m128_from<__m128d>(COERCE_UNSIGNED_INT64(gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                                    + 12 * *(uint32_t *)(a1 + 20)))));
  g4_m128_lane_ref<double>(v1, 0) = g4_m128_lane_ref<double>(v1, 0) + 0.5;
  v2 = _mm_and_pd(v1, g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL));
  if ( g4_m128_lane_ref<double>(v2, 0) < 4503599627370496.0 )
  {
    g4_m128_lane_ref<double>(v2, 0) = g4_m128_lane_ref<double>(v2, 0) + 4503599627370496.0 - 4503599627370496.0;
    v3 = _mm_or_pd(v2, _mm_andn_pd(g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL), v1));
    g4_m128_lane_ref<double>(v1, 0) = g4_m128_lane_ref<double>(v3, 0)
                    - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v3, v1), 0) & 0x3FF0000000000000LL);
  }
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, g4_m128_lane_ref<double>(v1, 0));
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_min  (binary VA: 0x112f010)
// Original: gameswf::math_min
// ----------------------------------------------------------------------------
int gameswf::math_min(int a1)
{
  double v2;
  double v3;

  v3 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, fmin(v2, v3));
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_max  (binary VA: 0x112f080)
// Original: gameswf::math_max
// ----------------------------------------------------------------------------
int gameswf::math_max(int a1)
{
  double v2;
  double v3;

  v3 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, fmax(v2, v3));
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_floor  (binary VA: 0x112f0f0)
// Original: gameswf::math_floor
// ----------------------------------------------------------------------------
int gameswf::math_floor(int a1)
{
  __m128d v1;
  __m128d v2;
  __m128d v3;
  v1 = g4_m128_from<__m128d>(COERCE_UNSIGNED_INT64(gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                                    + 12 * *(uint32_t *)(a1 + 20)))));
  v2 = _mm_and_pd(v1, g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL));
  if ( g4_m128_lane_ref<double>(v2, 0) < 4503599627370496.0 )
  {
    g4_m128_lane_ref<double>(v2, 0) = g4_m128_lane_ref<double>(v2, 0) + 4503599627370496.0 - 4503599627370496.0;
    v3 = _mm_or_pd(v2, _mm_andn_pd(g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL), v1));
    g4_m128_lane_ref<double>(v1, 0) = g4_m128_lane_ref<double>(v3, 0)
                    - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v3, v1), 0) & 0x3FF0000000000000LL);
  }
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, g4_m128_lane_ref<double>(v1, 0));
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_fabs  (binary VA: 0x112f190)
// Original: gameswf::math_fabs
// ----------------------------------------------------------------------------
int gameswf::math_fabs(int a1)
{
  double v2;

  v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, fabs(v2));
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_random  (binary VA: 0x112f200)
// Original: gameswf::math_random
// ----------------------------------------------------------------------------
int gameswf::math_random(gameswf::ASValue::Self **a1)
{
  double v1; // xmm0_8
  gameswf::ASValue::Self *v3;

  v1 = (double)(unsigned int)gameswf::random::nextRandom(v3) * 2.3283064370807974e-10;
  return gameswf::ASValue::setDouble(*a1, v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_pow  (binary VA: 0x112f250)
// Original: gameswf::math_pow
// ----------------------------------------------------------------------------
int gameswf::math_pow(int a1)
{
  long double v1; // fst7
  long double v2; // fst7
  double x;

  x = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v1 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v2 = pow(x, v1);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_atan2  (binary VA: 0x112f2c0)
// Original: gameswf::math_atan2
// ----------------------------------------------------------------------------
int gameswf::math_atan2(int a1)
{
  long double v1; // fst7
  long double v2; // fst7
  double y;

  y = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v1 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v2 = atan2(y, v1);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_tan  (binary VA: 0x112f330)
// Original: gameswf::math_tan
// ----------------------------------------------------------------------------
int gameswf::math_tan(int a1)
{
  long double v1; // fst7
  long double v2; // fst7

  v1 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = tan(v1);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_sqrt  (binary VA: 0x112f390)
// Original: gameswf::math_sqrt
// ----------------------------------------------------------------------------
int gameswf::math_sqrt(int a1)
{
  double v2;

  v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, sqrt(v2));
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_sin  (binary VA: 0x112f3f0)
// Original: gameswf::math_sin
// ----------------------------------------------------------------------------
int gameswf::math_sin(int a1)
{
  long double v1; // fst7
  long double v2; // fst7

  v1 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = sin(v1);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_log  (binary VA: 0x112f450)
// Original: gameswf::math_log
// ----------------------------------------------------------------------------
int gameswf::math_log(int a1)
{
  long double v1; // fst7
  long double v2; // fst7

  v1 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = log(v1);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_exp  (binary VA: 0x112f4b0)
// Original: gameswf::math_exp
// ----------------------------------------------------------------------------
int gameswf::math_exp(int a1)
{
  long double v1; // fst7
  long double v2; // fst7

  v1 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = exp(v1);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_cos  (binary VA: 0x112f510)
// Original: gameswf::math_cos
// ----------------------------------------------------------------------------
int gameswf::math_cos(int a1)
{
  long double v1; // fst7
  long double v2; // fst7

  v1 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = cos(v1);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_ceil  (binary VA: 0x112f570)
// Original: gameswf::math_ceil
// ----------------------------------------------------------------------------
int gameswf::math_ceil(int a1)
{
  __m128d v1;
  double v2; // xmm1_8
  __m128d v3;
  v1 = g4_m128_from<__m128d>(COERCE_UNSIGNED_INT64(gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                                    + 12 * *(uint32_t *)(a1 + 20)))));
  v2 = fabs(g4_m128_lane_ref<double>(v1, 0));
  if ( v2 < 4503599627370496.0 )
  {
    *(uint64_t *)&g4_m128_lane_ref<double>(v3, 0) = COERCE_UNSIGNED_INT64(v2 + 4503599627370496.0 - 4503599627370496.0)
                                | *(uint64_t *)&g4_m128_lane_ref<double>(v1, 0) & 0x8000000000000000LL;
    g4_m128_lane_ref<double>(v1, 0) = g4_m128_lane_ref<double>(v3, 0)
                    - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v1, v3), 0) & 0xBFF0000000000000LL);
  }
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, g4_m128_lane_ref<double>(v1, 0));
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_atan  (binary VA: 0x112f610)
// Original: gameswf::math_atan
// ----------------------------------------------------------------------------
int gameswf::math_atan(int a1)
{
  long double v1; // fst7
  long double v2; // fst7

  v1 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = atan(v1);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_asin  (binary VA: 0x112f670)
// Original: gameswf::math_asin
// ----------------------------------------------------------------------------
int gameswf::math_asin(int a1)
{
  long double v1; // fst7
  long double v2; // fst7

  v1 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = asin(v1);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::math_acos  (binary VA: 0x112f6d0)
// Original: gameswf::math_acos
// ----------------------------------------------------------------------------
int gameswf::math_acos(int a1)
{
  long double v1; // fst7
  long double v2; // fst7

  v1 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v2 = acos(v1);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::mathInit  (binary VA: 0x112fcb0)
// Original: gameswf::mathInit
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::mathInit(gameswf::Self *self)
{
  gameswf::ASObject::Self *v1;
  gameswf::Self *v2;
  int v3;
  int i;
  int *v5;
  int v6;
  int v7;
  gameswf::Self *v8;
  int v9;
  int j;
  char **v11;
  int *v12;
  gameswf::Self *v13;
  gameswf::Self *v14;
  gameswf::Self *v15;
  gameswf::Self *v16;
  gameswf::Self *v17;
  gameswf::Self *v18;
  gameswf::Self *v19;
  gameswf::Self *v20;
  gameswf::Self *v21;
  gameswf::Self *v22;
  gameswf::Self *v23;
  gameswf::Self *v24;
  gameswf::Self *v25;
  gameswf::Self *v26;
  gameswf::Self *v27;
  gameswf::Self *v28;
  gameswf::Self *v29;
  gameswf::Self *v30;
  gameswf::Self *v31;
  gameswf::Self *v32;
  gameswf::Self *v33;
  gameswf::Self *v34;
  gameswf::Self *v35;
  gameswf::Self *v36;
  gameswf::Self *v37;
  gameswf::Self *v38;
  int v40;
  int v41;
  uint32_t *v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef gameswf::ASObject::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef gameswf::ASObject::Self *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int *_g4_t_v49;
  typedef uint16_t _g4_t_v50[6];
  typedef uint16_t _g4_t_v51[6];
  typedef uint16_t _g4_t_v52[6];
  typedef uint16_t _g4_t_v53[6];
  typedef uint16_t _g4_t_v54[6];
  typedef uint16_t _g4_t_v55[6];
  typedef uint16_t _g4_t_v56[6];
  typedef uint16_t _g4_t_v57[6];
  typedef uint8_t _g4_t_v58[12];
  typedef uint8_t _g4_t_v59[12];
  typedef uint8_t _g4_t_v60[12];
  typedef uint8_t _g4_t_v61[12];
  typedef uint8_t _g4_t_v62[12];
  typedef uint8_t _g4_t_v63[12];
  typedef uint8_t _g4_t_v64[12];
  typedef uint8_t _g4_t_v65[12];
  typedef uint8_t _g4_t_v66[12];
  typedef uint8_t _g4_t_v67[12];
  typedef uint8_t _g4_t_v68[12];
  typedef uint8_t _g4_t_v69[12];
  typedef uint8_t _g4_t_v70[12];
  typedef uint8_t _g4_t_v71[12];
  typedef uint8_t _g4_t_v72[12];
  typedef uint8_t _g4_t_v73[12];
  typedef uint8_t _g4_t_v74[12];
  typedef uint8_t _g4_t_v75[12];
  typedef char _g4_t_v76;
  typedef char _g4_t_v77;
  typedef gameswf::Self *_g4_t_v78;
  typedef int16_t _g4_t_v79;
  typedef char _g4_t_v80;
  typedef char _g4_t_v81;
  typedef char _g4_t_v82;
  typedef char _g4_t_v83;
  typedef gameswf::Self *_g4_t_v84;
  typedef int16_t _g4_t_v85;
  typedef char _g4_t_v86;
  typedef char _g4_t_v87;
  typedef char _g4_t_v88;
  typedef char _g4_t_v89;
  typedef gameswf::Self *_g4_t_v90;
  typedef int16_t _g4_t_v91;
  typedef char _g4_t_v92;
  typedef char _g4_t_v93;
  typedef char _g4_t_v94;
  typedef char _g4_t_v95;
  typedef gameswf::Self *_g4_t_v96;
  typedef int16_t _g4_t_v97;
  typedef char _g4_t_v98;
  typedef char _g4_t_v99;
  typedef char _g4_t_v100;
  typedef char _g4_t_v101;
  typedef gameswf::Self *_g4_t_v102;
  typedef int16_t _g4_t_v103;
  typedef char _g4_t_v104;
  typedef char _g4_t_v105;
  typedef char _g4_t_v106;
  typedef char _g4_t_v107;
  typedef gameswf::Self *_g4_t_v108;
  typedef int16_t _g4_t_v109;
  typedef char _g4_t_v110;
  typedef char _g4_t_v111;
  typedef char _g4_t_v112;
  typedef char _g4_t_v113;
  typedef gameswf::Self *_g4_t_v114;
  typedef int16_t _g4_t_v115;
  typedef char _g4_t_v116;
  typedef char _g4_t_v117;
  typedef char _g4_t_v118;
  typedef char _g4_t_v119;
  typedef gameswf::Self *_g4_t_v120;
  typedef int16_t _g4_t_v121;
  typedef char _g4_t_v122;
  typedef char _g4_t_v123;
  typedef char _g4_t_v124;
  typedef char _g4_t_v125;
  typedef gameswf::Self *_g4_t_v126;
  typedef int16_t _g4_t_v127;
  typedef char _g4_t_v128;
  typedef char _g4_t_v129;
  typedef char _g4_t_v130;
  typedef char _g4_t_v131;
  typedef gameswf::Self *_g4_t_v132;
  typedef int16_t _g4_t_v133;
  typedef char _g4_t_v134;
  typedef char _g4_t_v135;
  typedef char _g4_t_v136;
  typedef char _g4_t_v137;
  typedef gameswf::Self *_g4_t_v138;
  typedef int16_t _g4_t_v139;
  typedef char _g4_t_v140;
  typedef char _g4_t_v141;
  typedef char _g4_t_v142;
  typedef char _g4_t_v143;
  typedef gameswf::Self *_g4_t_v144;
  typedef int16_t _g4_t_v145;
  typedef char _g4_t_v146;
  typedef char _g4_t_v147;
  typedef char _g4_t_v148;
  typedef char _g4_t_v149;
  typedef gameswf::Self *_g4_t_v150;
  typedef int16_t _g4_t_v151;
  typedef char _g4_t_v152;
  typedef char _g4_t_v153;
  typedef char _g4_t_v154;
  typedef char _g4_t_v155;
  typedef gameswf::Self *_g4_t_v156;
  typedef int16_t _g4_t_v157;
  typedef char _g4_t_v158;
  typedef char _g4_t_v159;
  typedef char _g4_t_v160;
  typedef char _g4_t_v161;
  typedef gameswf::Self *_g4_t_v162;
  typedef int16_t _g4_t_v163;
  typedef char _g4_t_v164;
  typedef char _g4_t_v165;
  typedef char _g4_t_v166;
  typedef char _g4_t_v167;
  typedef gameswf::Self *_g4_t_v168;
  typedef int16_t _g4_t_v169;
  typedef char _g4_t_v170;
  typedef char _g4_t_v171;
  typedef char _g4_t_v172;
  typedef char _g4_t_v173;
  typedef gameswf::Self *_g4_t_v174;
  typedef int16_t _g4_t_v175;
  typedef char _g4_t_v176;
  typedef char _g4_t_v177;
  typedef char _g4_t_v178;
  typedef char _g4_t_v179;
  typedef gameswf::Self *_g4_t_v180;
  typedef int16_t _g4_t_v181;
  typedef char _g4_t_v182;
  typedef char _g4_t_v183;
  typedef char _g4_t_v184;
  typedef char _g4_t_v185;
  typedef gameswf::Self *_g4_t_v186;
  typedef int16_t _g4_t_v187;
  typedef char _g4_t_v188;
  typedef char _g4_t_v189;
  typedef char _g4_t_v190;
  typedef char _g4_t_v191;
  typedef gameswf::Self *_g4_t_v192;
  typedef int16_t _g4_t_v193;
  typedef char _g4_t_v194;
  typedef char _g4_t_v195;
  typedef char _g4_t_v196;
  typedef char _g4_t_v197;
  typedef gameswf::Self *_g4_t_v198;
  typedef int16_t _g4_t_v199;
  typedef char _g4_t_v200;
  typedef char _g4_t_v201;
  typedef char _g4_t_v202;
  typedef char _g4_t_v203;
  typedef gameswf::Self *_g4_t_v204;
  typedef int16_t _g4_t_v205;
  typedef char _g4_t_v206;
  typedef char _g4_t_v207;
  typedef char _g4_t_v208;
  typedef char _g4_t_v209;
  typedef gameswf::Self *_g4_t_v210;
  typedef int16_t _g4_t_v211;
  typedef char _g4_t_v212;
  typedef char _g4_t_v213;
  typedef char _g4_t_v214;
  typedef char _g4_t_v215;
  typedef gameswf::Self *_g4_t_v216;
  typedef int16_t _g4_t_v217;
  typedef char _g4_t_v218;
  typedef char _g4_t_v219;
  typedef char _g4_t_v220;
  typedef char _g4_t_v221;
  typedef gameswf::Self *_g4_t_v222;
  typedef int16_t _g4_t_v223;
  typedef char _g4_t_v224;
  typedef char _g4_t_v225;
  typedef char _g4_t_v226;
  typedef char _g4_t_v227;
  typedef gameswf::Self *_g4_t_v228;
  typedef int16_t _g4_t_v229;
  typedef char _g4_t_v230;
  typedef char _g4_t_v231;
  enum : size_t {
    _g4_s0 = 1264u,
    _g4_s1 = (8u + sizeof(_g4_t_v43)) > _g4_s0 ? (8u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v44)) > _g4_s1 ? (8u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v45)) > _g4_s2 ? (12u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v46)) > _g4_s3 ? (16u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v47)) > _g4_s4 ? (16u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v48)) > _g4_s5 ? (20u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v49)) > _g4_s6 ? (24u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v50)) > _g4_s7 ? (32u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v51)) > _g4_s8 ? (44u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v52)) > _g4_s9 ? (56u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v53)) > _g4_s10 ? (68u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v54)) > _g4_s11 ? (80u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v55)) > _g4_s12 ? (92u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v56)) > _g4_s13 ? (104u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (116u + sizeof(_g4_t_v57)) > _g4_s14 ? (116u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v58)) > _g4_s15 ? (128u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (140u + sizeof(_g4_t_v59)) > _g4_s16 ? (140u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (152u + sizeof(_g4_t_v60)) > _g4_s17 ? (152u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (164u + sizeof(_g4_t_v61)) > _g4_s18 ? (164u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (176u + sizeof(_g4_t_v62)) > _g4_s19 ? (176u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (188u + sizeof(_g4_t_v63)) > _g4_s20 ? (188u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (200u + sizeof(_g4_t_v64)) > _g4_s21 ? (200u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (212u + sizeof(_g4_t_v65)) > _g4_s22 ? (212u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (224u + sizeof(_g4_t_v66)) > _g4_s23 ? (224u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (236u + sizeof(_g4_t_v67)) > _g4_s24 ? (236u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (248u + sizeof(_g4_t_v68)) > _g4_s25 ? (248u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (260u + sizeof(_g4_t_v69)) > _g4_s26 ? (260u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (272u + sizeof(_g4_t_v70)) > _g4_s27 ? (272u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (284u + sizeof(_g4_t_v71)) > _g4_s28 ? (284u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (296u + sizeof(_g4_t_v72)) > _g4_s29 ? (296u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (308u + sizeof(_g4_t_v73)) > _g4_s30 ? (308u + sizeof(_g4_t_v73)) : _g4_s30,
    _g4_s32 = (320u + sizeof(_g4_t_v74)) > _g4_s31 ? (320u + sizeof(_g4_t_v74)) : _g4_s31,
    _g4_s33 = (332u + sizeof(_g4_t_v75)) > _g4_s32 ? (332u + sizeof(_g4_t_v75)) : _g4_s32,
    _g4_s34 = (344u + sizeof(_g4_t_v76)) > _g4_s33 ? (344u + sizeof(_g4_t_v76)) : _g4_s33,
    _g4_s35 = (345u + sizeof(_g4_t_v77)) > _g4_s34 ? (345u + sizeof(_g4_t_v77)) : _g4_s34,
    _g4_s36 = (356u + sizeof(_g4_t_v78)) > _g4_s35 ? (356u + sizeof(_g4_t_v78)) : _g4_s35,
    _g4_s37 = (360u + sizeof(_g4_t_v79)) > _g4_s36 ? (360u + sizeof(_g4_t_v79)) : _g4_s36,
    _g4_s38 = (362u + sizeof(_g4_t_v80)) > _g4_s37 ? (362u + sizeof(_g4_t_v80)) : _g4_s37,
    _g4_s39 = (363u + sizeof(_g4_t_v81)) > _g4_s38 ? (363u + sizeof(_g4_t_v81)) : _g4_s38,
    _g4_s40 = (376u + sizeof(_g4_t_v82)) > _g4_s39 ? (376u + sizeof(_g4_t_v82)) : _g4_s39,
    _g4_s41 = (377u + sizeof(_g4_t_v83)) > _g4_s40 ? (377u + sizeof(_g4_t_v83)) : _g4_s40,
    _g4_s42 = (388u + sizeof(_g4_t_v84)) > _g4_s41 ? (388u + sizeof(_g4_t_v84)) : _g4_s41,
    _g4_s43 = (392u + sizeof(_g4_t_v85)) > _g4_s42 ? (392u + sizeof(_g4_t_v85)) : _g4_s42,
    _g4_s44 = (394u + sizeof(_g4_t_v86)) > _g4_s43 ? (394u + sizeof(_g4_t_v86)) : _g4_s43,
    _g4_s45 = (395u + sizeof(_g4_t_v87)) > _g4_s44 ? (395u + sizeof(_g4_t_v87)) : _g4_s44,
    _g4_s46 = (408u + sizeof(_g4_t_v88)) > _g4_s45 ? (408u + sizeof(_g4_t_v88)) : _g4_s45,
    _g4_s47 = (409u + sizeof(_g4_t_v89)) > _g4_s46 ? (409u + sizeof(_g4_t_v89)) : _g4_s46,
    _g4_s48 = (420u + sizeof(_g4_t_v90)) > _g4_s47 ? (420u + sizeof(_g4_t_v90)) : _g4_s47,
    _g4_s49 = (424u + sizeof(_g4_t_v91)) > _g4_s48 ? (424u + sizeof(_g4_t_v91)) : _g4_s48,
    _g4_s50 = (426u + sizeof(_g4_t_v92)) > _g4_s49 ? (426u + sizeof(_g4_t_v92)) : _g4_s49,
    _g4_s51 = (427u + sizeof(_g4_t_v93)) > _g4_s50 ? (427u + sizeof(_g4_t_v93)) : _g4_s50,
    _g4_s52 = (440u + sizeof(_g4_t_v94)) > _g4_s51 ? (440u + sizeof(_g4_t_v94)) : _g4_s51,
    _g4_s53 = (441u + sizeof(_g4_t_v95)) > _g4_s52 ? (441u + sizeof(_g4_t_v95)) : _g4_s52,
    _g4_s54 = (452u + sizeof(_g4_t_v96)) > _g4_s53 ? (452u + sizeof(_g4_t_v96)) : _g4_s53,
    _g4_s55 = (456u + sizeof(_g4_t_v97)) > _g4_s54 ? (456u + sizeof(_g4_t_v97)) : _g4_s54,
    _g4_s56 = (458u + sizeof(_g4_t_v98)) > _g4_s55 ? (458u + sizeof(_g4_t_v98)) : _g4_s55,
    _g4_s57 = (459u + sizeof(_g4_t_v99)) > _g4_s56 ? (459u + sizeof(_g4_t_v99)) : _g4_s56,
    _g4_s58 = (472u + sizeof(_g4_t_v100)) > _g4_s57 ? (472u + sizeof(_g4_t_v100)) : _g4_s57,
    _g4_s59 = (473u + sizeof(_g4_t_v101)) > _g4_s58 ? (473u + sizeof(_g4_t_v101)) : _g4_s58,
    _g4_s60 = (484u + sizeof(_g4_t_v102)) > _g4_s59 ? (484u + sizeof(_g4_t_v102)) : _g4_s59,
    _g4_s61 = (488u + sizeof(_g4_t_v103)) > _g4_s60 ? (488u + sizeof(_g4_t_v103)) : _g4_s60,
    _g4_s62 = (490u + sizeof(_g4_t_v104)) > _g4_s61 ? (490u + sizeof(_g4_t_v104)) : _g4_s61,
    _g4_s63 = (491u + sizeof(_g4_t_v105)) > _g4_s62 ? (491u + sizeof(_g4_t_v105)) : _g4_s62,
    _g4_s64 = (504u + sizeof(_g4_t_v106)) > _g4_s63 ? (504u + sizeof(_g4_t_v106)) : _g4_s63,
    _g4_s65 = (505u + sizeof(_g4_t_v107)) > _g4_s64 ? (505u + sizeof(_g4_t_v107)) : _g4_s64,
    _g4_s66 = (516u + sizeof(_g4_t_v108)) > _g4_s65 ? (516u + sizeof(_g4_t_v108)) : _g4_s65,
    _g4_s67 = (520u + sizeof(_g4_t_v109)) > _g4_s66 ? (520u + sizeof(_g4_t_v109)) : _g4_s66,
    _g4_s68 = (522u + sizeof(_g4_t_v110)) > _g4_s67 ? (522u + sizeof(_g4_t_v110)) : _g4_s67,
    _g4_s69 = (523u + sizeof(_g4_t_v111)) > _g4_s68 ? (523u + sizeof(_g4_t_v111)) : _g4_s68,
    _g4_s70 = (536u + sizeof(_g4_t_v112)) > _g4_s69 ? (536u + sizeof(_g4_t_v112)) : _g4_s69,
    _g4_s71 = (537u + sizeof(_g4_t_v113)) > _g4_s70 ? (537u + sizeof(_g4_t_v113)) : _g4_s70,
    _g4_s72 = (548u + sizeof(_g4_t_v114)) > _g4_s71 ? (548u + sizeof(_g4_t_v114)) : _g4_s71,
    _g4_s73 = (552u + sizeof(_g4_t_v115)) > _g4_s72 ? (552u + sizeof(_g4_t_v115)) : _g4_s72,
    _g4_s74 = (554u + sizeof(_g4_t_v116)) > _g4_s73 ? (554u + sizeof(_g4_t_v116)) : _g4_s73,
    _g4_s75 = (555u + sizeof(_g4_t_v117)) > _g4_s74 ? (555u + sizeof(_g4_t_v117)) : _g4_s74,
    _g4_s76 = (568u + sizeof(_g4_t_v118)) > _g4_s75 ? (568u + sizeof(_g4_t_v118)) : _g4_s75,
    _g4_s77 = (569u + sizeof(_g4_t_v119)) > _g4_s76 ? (569u + sizeof(_g4_t_v119)) : _g4_s76,
    _g4_s78 = (580u + sizeof(_g4_t_v120)) > _g4_s77 ? (580u + sizeof(_g4_t_v120)) : _g4_s77,
    _g4_s79 = (584u + sizeof(_g4_t_v121)) > _g4_s78 ? (584u + sizeof(_g4_t_v121)) : _g4_s78,
    _g4_s80 = (586u + sizeof(_g4_t_v122)) > _g4_s79 ? (586u + sizeof(_g4_t_v122)) : _g4_s79,
    _g4_s81 = (587u + sizeof(_g4_t_v123)) > _g4_s80 ? (587u + sizeof(_g4_t_v123)) : _g4_s80,
    _g4_s82 = (600u + sizeof(_g4_t_v124)) > _g4_s81 ? (600u + sizeof(_g4_t_v124)) : _g4_s81,
    _g4_s83 = (601u + sizeof(_g4_t_v125)) > _g4_s82 ? (601u + sizeof(_g4_t_v125)) : _g4_s82,
    _g4_s84 = (612u + sizeof(_g4_t_v126)) > _g4_s83 ? (612u + sizeof(_g4_t_v126)) : _g4_s83,
    _g4_s85 = (616u + sizeof(_g4_t_v127)) > _g4_s84 ? (616u + sizeof(_g4_t_v127)) : _g4_s84,
    _g4_s86 = (618u + sizeof(_g4_t_v128)) > _g4_s85 ? (618u + sizeof(_g4_t_v128)) : _g4_s85,
    _g4_s87 = (619u + sizeof(_g4_t_v129)) > _g4_s86 ? (619u + sizeof(_g4_t_v129)) : _g4_s86,
    _g4_s88 = (632u + sizeof(_g4_t_v130)) > _g4_s87 ? (632u + sizeof(_g4_t_v130)) : _g4_s87,
    _g4_s89 = (633u + sizeof(_g4_t_v131)) > _g4_s88 ? (633u + sizeof(_g4_t_v131)) : _g4_s88,
    _g4_s90 = (644u + sizeof(_g4_t_v132)) > _g4_s89 ? (644u + sizeof(_g4_t_v132)) : _g4_s89,
    _g4_s91 = (648u + sizeof(_g4_t_v133)) > _g4_s90 ? (648u + sizeof(_g4_t_v133)) : _g4_s90,
    _g4_s92 = (650u + sizeof(_g4_t_v134)) > _g4_s91 ? (650u + sizeof(_g4_t_v134)) : _g4_s91,
    _g4_s93 = (651u + sizeof(_g4_t_v135)) > _g4_s92 ? (651u + sizeof(_g4_t_v135)) : _g4_s92,
    _g4_s94 = (664u + sizeof(_g4_t_v136)) > _g4_s93 ? (664u + sizeof(_g4_t_v136)) : _g4_s93,
    _g4_s95 = (665u + sizeof(_g4_t_v137)) > _g4_s94 ? (665u + sizeof(_g4_t_v137)) : _g4_s94,
    _g4_s96 = (676u + sizeof(_g4_t_v138)) > _g4_s95 ? (676u + sizeof(_g4_t_v138)) : _g4_s95,
    _g4_s97 = (680u + sizeof(_g4_t_v139)) > _g4_s96 ? (680u + sizeof(_g4_t_v139)) : _g4_s96,
    _g4_s98 = (682u + sizeof(_g4_t_v140)) > _g4_s97 ? (682u + sizeof(_g4_t_v140)) : _g4_s97,
    _g4_s99 = (683u + sizeof(_g4_t_v141)) > _g4_s98 ? (683u + sizeof(_g4_t_v141)) : _g4_s98,
    _g4_s100 = (696u + sizeof(_g4_t_v142)) > _g4_s99 ? (696u + sizeof(_g4_t_v142)) : _g4_s99,
    _g4_s101 = (697u + sizeof(_g4_t_v143)) > _g4_s100 ? (697u + sizeof(_g4_t_v143)) : _g4_s100,
    _g4_s102 = (708u + sizeof(_g4_t_v144)) > _g4_s101 ? (708u + sizeof(_g4_t_v144)) : _g4_s101,
    _g4_s103 = (712u + sizeof(_g4_t_v145)) > _g4_s102 ? (712u + sizeof(_g4_t_v145)) : _g4_s102,
    _g4_s104 = (714u + sizeof(_g4_t_v146)) > _g4_s103 ? (714u + sizeof(_g4_t_v146)) : _g4_s103,
    _g4_s105 = (715u + sizeof(_g4_t_v147)) > _g4_s104 ? (715u + sizeof(_g4_t_v147)) : _g4_s104,
    _g4_s106 = (728u + sizeof(_g4_t_v148)) > _g4_s105 ? (728u + sizeof(_g4_t_v148)) : _g4_s105,
    _g4_s107 = (729u + sizeof(_g4_t_v149)) > _g4_s106 ? (729u + sizeof(_g4_t_v149)) : _g4_s106,
    _g4_s108 = (740u + sizeof(_g4_t_v150)) > _g4_s107 ? (740u + sizeof(_g4_t_v150)) : _g4_s107,
    _g4_s109 = (744u + sizeof(_g4_t_v151)) > _g4_s108 ? (744u + sizeof(_g4_t_v151)) : _g4_s108,
    _g4_s110 = (746u + sizeof(_g4_t_v152)) > _g4_s109 ? (746u + sizeof(_g4_t_v152)) : _g4_s109,
    _g4_s111 = (747u + sizeof(_g4_t_v153)) > _g4_s110 ? (747u + sizeof(_g4_t_v153)) : _g4_s110,
    _g4_s112 = (760u + sizeof(_g4_t_v154)) > _g4_s111 ? (760u + sizeof(_g4_t_v154)) : _g4_s111,
    _g4_s113 = (761u + sizeof(_g4_t_v155)) > _g4_s112 ? (761u + sizeof(_g4_t_v155)) : _g4_s112,
    _g4_s114 = (772u + sizeof(_g4_t_v156)) > _g4_s113 ? (772u + sizeof(_g4_t_v156)) : _g4_s113,
    _g4_s115 = (776u + sizeof(_g4_t_v157)) > _g4_s114 ? (776u + sizeof(_g4_t_v157)) : _g4_s114,
    _g4_s116 = (778u + sizeof(_g4_t_v158)) > _g4_s115 ? (778u + sizeof(_g4_t_v158)) : _g4_s115,
    _g4_s117 = (779u + sizeof(_g4_t_v159)) > _g4_s116 ? (779u + sizeof(_g4_t_v159)) : _g4_s116,
    _g4_s118 = (792u + sizeof(_g4_t_v160)) > _g4_s117 ? (792u + sizeof(_g4_t_v160)) : _g4_s117,
    _g4_s119 = (793u + sizeof(_g4_t_v161)) > _g4_s118 ? (793u + sizeof(_g4_t_v161)) : _g4_s118,
    _g4_s120 = (804u + sizeof(_g4_t_v162)) > _g4_s119 ? (804u + sizeof(_g4_t_v162)) : _g4_s119,
    _g4_s121 = (808u + sizeof(_g4_t_v163)) > _g4_s120 ? (808u + sizeof(_g4_t_v163)) : _g4_s120,
    _g4_s122 = (810u + sizeof(_g4_t_v164)) > _g4_s121 ? (810u + sizeof(_g4_t_v164)) : _g4_s121,
    _g4_s123 = (811u + sizeof(_g4_t_v165)) > _g4_s122 ? (811u + sizeof(_g4_t_v165)) : _g4_s122,
    _g4_s124 = (824u + sizeof(_g4_t_v166)) > _g4_s123 ? (824u + sizeof(_g4_t_v166)) : _g4_s123,
    _g4_s125 = (825u + sizeof(_g4_t_v167)) > _g4_s124 ? (825u + sizeof(_g4_t_v167)) : _g4_s124,
    _g4_s126 = (836u + sizeof(_g4_t_v168)) > _g4_s125 ? (836u + sizeof(_g4_t_v168)) : _g4_s125,
    _g4_s127 = (840u + sizeof(_g4_t_v169)) > _g4_s126 ? (840u + sizeof(_g4_t_v169)) : _g4_s126,
    _g4_s128 = (842u + sizeof(_g4_t_v170)) > _g4_s127 ? (842u + sizeof(_g4_t_v170)) : _g4_s127,
    _g4_s129 = (843u + sizeof(_g4_t_v171)) > _g4_s128 ? (843u + sizeof(_g4_t_v171)) : _g4_s128,
    _g4_s130 = (856u + sizeof(_g4_t_v172)) > _g4_s129 ? (856u + sizeof(_g4_t_v172)) : _g4_s129,
    _g4_s131 = (857u + sizeof(_g4_t_v173)) > _g4_s130 ? (857u + sizeof(_g4_t_v173)) : _g4_s130,
    _g4_s132 = (868u + sizeof(_g4_t_v174)) > _g4_s131 ? (868u + sizeof(_g4_t_v174)) : _g4_s131,
    _g4_s133 = (872u + sizeof(_g4_t_v175)) > _g4_s132 ? (872u + sizeof(_g4_t_v175)) : _g4_s132,
    _g4_s134 = (874u + sizeof(_g4_t_v176)) > _g4_s133 ? (874u + sizeof(_g4_t_v176)) : _g4_s133,
    _g4_s135 = (875u + sizeof(_g4_t_v177)) > _g4_s134 ? (875u + sizeof(_g4_t_v177)) : _g4_s134,
    _g4_s136 = (888u + sizeof(_g4_t_v178)) > _g4_s135 ? (888u + sizeof(_g4_t_v178)) : _g4_s135,
    _g4_s137 = (889u + sizeof(_g4_t_v179)) > _g4_s136 ? (889u + sizeof(_g4_t_v179)) : _g4_s136,
    _g4_s138 = (900u + sizeof(_g4_t_v180)) > _g4_s137 ? (900u + sizeof(_g4_t_v180)) : _g4_s137,
    _g4_s139 = (904u + sizeof(_g4_t_v181)) > _g4_s138 ? (904u + sizeof(_g4_t_v181)) : _g4_s138,
    _g4_s140 = (906u + sizeof(_g4_t_v182)) > _g4_s139 ? (906u + sizeof(_g4_t_v182)) : _g4_s139,
    _g4_s141 = (907u + sizeof(_g4_t_v183)) > _g4_s140 ? (907u + sizeof(_g4_t_v183)) : _g4_s140,
    _g4_s142 = (920u + sizeof(_g4_t_v184)) > _g4_s141 ? (920u + sizeof(_g4_t_v184)) : _g4_s141,
    _g4_s143 = (921u + sizeof(_g4_t_v185)) > _g4_s142 ? (921u + sizeof(_g4_t_v185)) : _g4_s142,
    _g4_s144 = (932u + sizeof(_g4_t_v186)) > _g4_s143 ? (932u + sizeof(_g4_t_v186)) : _g4_s143,
    _g4_s145 = (936u + sizeof(_g4_t_v187)) > _g4_s144 ? (936u + sizeof(_g4_t_v187)) : _g4_s144,
    _g4_s146 = (938u + sizeof(_g4_t_v188)) > _g4_s145 ? (938u + sizeof(_g4_t_v188)) : _g4_s145,
    _g4_s147 = (939u + sizeof(_g4_t_v189)) > _g4_s146 ? (939u + sizeof(_g4_t_v189)) : _g4_s146,
    _g4_s148 = (952u + sizeof(_g4_t_v190)) > _g4_s147 ? (952u + sizeof(_g4_t_v190)) : _g4_s147,
    _g4_s149 = (953u + sizeof(_g4_t_v191)) > _g4_s148 ? (953u + sizeof(_g4_t_v191)) : _g4_s148,
    _g4_s150 = (964u + sizeof(_g4_t_v192)) > _g4_s149 ? (964u + sizeof(_g4_t_v192)) : _g4_s149,
    _g4_s151 = (968u + sizeof(_g4_t_v193)) > _g4_s150 ? (968u + sizeof(_g4_t_v193)) : _g4_s150,
    _g4_s152 = (970u + sizeof(_g4_t_v194)) > _g4_s151 ? (970u + sizeof(_g4_t_v194)) : _g4_s151,
    _g4_s153 = (971u + sizeof(_g4_t_v195)) > _g4_s152 ? (971u + sizeof(_g4_t_v195)) : _g4_s152,
    _g4_s154 = (984u + sizeof(_g4_t_v196)) > _g4_s153 ? (984u + sizeof(_g4_t_v196)) : _g4_s153,
    _g4_s155 = (985u + sizeof(_g4_t_v197)) > _g4_s154 ? (985u + sizeof(_g4_t_v197)) : _g4_s154,
    _g4_s156 = (996u + sizeof(_g4_t_v198)) > _g4_s155 ? (996u + sizeof(_g4_t_v198)) : _g4_s155,
    _g4_s157 = (1000u + sizeof(_g4_t_v199)) > _g4_s156 ? (1000u + sizeof(_g4_t_v199)) : _g4_s156,
    _g4_s158 = (1002u + sizeof(_g4_t_v200)) > _g4_s157 ? (1002u + sizeof(_g4_t_v200)) : _g4_s157,
    _g4_s159 = (1003u + sizeof(_g4_t_v201)) > _g4_s158 ? (1003u + sizeof(_g4_t_v201)) : _g4_s158,
    _g4_s160 = (1016u + sizeof(_g4_t_v202)) > _g4_s159 ? (1016u + sizeof(_g4_t_v202)) : _g4_s159,
    _g4_s161 = (1017u + sizeof(_g4_t_v203)) > _g4_s160 ? (1017u + sizeof(_g4_t_v203)) : _g4_s160,
    _g4_s162 = (1028u + sizeof(_g4_t_v204)) > _g4_s161 ? (1028u + sizeof(_g4_t_v204)) : _g4_s161,
    _g4_s163 = (1032u + sizeof(_g4_t_v205)) > _g4_s162 ? (1032u + sizeof(_g4_t_v205)) : _g4_s162,
    _g4_s164 = (1034u + sizeof(_g4_t_v206)) > _g4_s163 ? (1034u + sizeof(_g4_t_v206)) : _g4_s163,
    _g4_s165 = (1035u + sizeof(_g4_t_v207)) > _g4_s164 ? (1035u + sizeof(_g4_t_v207)) : _g4_s164,
    _g4_s166 = (1048u + sizeof(_g4_t_v208)) > _g4_s165 ? (1048u + sizeof(_g4_t_v208)) : _g4_s165,
    _g4_s167 = (1049u + sizeof(_g4_t_v209)) > _g4_s166 ? (1049u + sizeof(_g4_t_v209)) : _g4_s166,
    _g4_s168 = (1060u + sizeof(_g4_t_v210)) > _g4_s167 ? (1060u + sizeof(_g4_t_v210)) : _g4_s167,
    _g4_s169 = (1064u + sizeof(_g4_t_v211)) > _g4_s168 ? (1064u + sizeof(_g4_t_v211)) : _g4_s168,
    _g4_s170 = (1066u + sizeof(_g4_t_v212)) > _g4_s169 ? (1066u + sizeof(_g4_t_v212)) : _g4_s169,
    _g4_s171 = (1067u + sizeof(_g4_t_v213)) > _g4_s170 ? (1067u + sizeof(_g4_t_v213)) : _g4_s170,
    _g4_s172 = (1080u + sizeof(_g4_t_v214)) > _g4_s171 ? (1080u + sizeof(_g4_t_v214)) : _g4_s171,
    _g4_s173 = (1081u + sizeof(_g4_t_v215)) > _g4_s172 ? (1081u + sizeof(_g4_t_v215)) : _g4_s172,
    _g4_s174 = (1092u + sizeof(_g4_t_v216)) > _g4_s173 ? (1092u + sizeof(_g4_t_v216)) : _g4_s173,
    _g4_s175 = (1096u + sizeof(_g4_t_v217)) > _g4_s174 ? (1096u + sizeof(_g4_t_v217)) : _g4_s174,
    _g4_s176 = (1098u + sizeof(_g4_t_v218)) > _g4_s175 ? (1098u + sizeof(_g4_t_v218)) : _g4_s175,
    _g4_s177 = (1099u + sizeof(_g4_t_v219)) > _g4_s176 ? (1099u + sizeof(_g4_t_v219)) : _g4_s176,
    _g4_s178 = (1112u + sizeof(_g4_t_v220)) > _g4_s177 ? (1112u + sizeof(_g4_t_v220)) : _g4_s177,
    _g4_s179 = (1113u + sizeof(_g4_t_v221)) > _g4_s178 ? (1113u + sizeof(_g4_t_v221)) : _g4_s178,
    _g4_s180 = (1124u + sizeof(_g4_t_v222)) > _g4_s179 ? (1124u + sizeof(_g4_t_v222)) : _g4_s179,
    _g4_s181 = (1128u + sizeof(_g4_t_v223)) > _g4_s180 ? (1128u + sizeof(_g4_t_v223)) : _g4_s180,
    _g4_s182 = (1130u + sizeof(_g4_t_v224)) > _g4_s181 ? (1130u + sizeof(_g4_t_v224)) : _g4_s181,
    _g4_s183 = (1131u + sizeof(_g4_t_v225)) > _g4_s182 ? (1131u + sizeof(_g4_t_v225)) : _g4_s182,
    _g4_s184 = (1144u + sizeof(_g4_t_v226)) > _g4_s183 ? (1144u + sizeof(_g4_t_v226)) : _g4_s183,
    _g4_s185 = (1145u + sizeof(_g4_t_v227)) > _g4_s184 ? (1145u + sizeof(_g4_t_v227)) : _g4_s184,
    _g4_s186 = (1156u + sizeof(_g4_t_v228)) > _g4_s185 ? (1156u + sizeof(_g4_t_v228)) : _g4_s185,
    _g4_s187 = (1160u + sizeof(_g4_t_v229)) > _g4_s186 ? (1160u + sizeof(_g4_t_v229)) : _g4_s186,
    _g4_s188 = (1162u + sizeof(_g4_t_v230)) > _g4_s187 ? (1162u + sizeof(_g4_t_v230)) : _g4_s187,
    _g4_s189 = (1163u + sizeof(_g4_t_v231)) > _g4_s188 ? (1163u + sizeof(_g4_t_v231)) : _g4_s188
  };
  alignas(16) uint8_t _g4_sf[_g4_s189];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 104u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 116u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 128u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 140u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 152u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 164u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 176u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 188u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 200u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 212u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 224u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 236u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 248u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 260u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 272u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 284u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 296u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 308u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 320u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 332u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 344u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 345u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 356u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 360u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 362u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 363u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 376u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 377u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 388u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 392u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 394u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 395u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 408u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 409u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 420u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 424u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 426u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 427u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 440u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 441u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 452u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 456u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 458u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 459u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 472u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 473u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 484u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 488u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 490u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 491u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 504u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 505u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 516u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 520u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 522u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 523u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 536u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 537u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 548u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 552u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 554u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 555u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 568u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 569u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 580u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 584u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 586u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 587u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 600u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 601u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 612u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 616u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 618u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 619u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 632u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 633u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 644u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 648u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 650u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 651u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 664u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 665u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 676u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 680u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 682u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 683u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 696u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 697u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 708u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 712u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 714u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 715u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 728u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 729u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 740u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 744u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 746u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 747u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 760u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 761u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 772u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 776u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 778u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 779u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 792u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 793u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 804u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 808u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 810u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 811u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 824u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 825u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 836u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 840u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 842u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 843u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 856u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 857u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 868u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 872u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 874u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 875u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 888u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 889u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 900u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 904u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 906u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 907u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 920u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 921u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 932u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 936u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 938u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 939u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 952u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 953u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 964u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 968u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 970u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 971u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 984u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 985u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 996u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 1000u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 1002u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 1003u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 1016u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 1017u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 1028u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 1032u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 1034u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 1035u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 1048u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 1049u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 1060u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 1064u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 1066u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 1067u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 1080u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 1081u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 1092u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 1096u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 1098u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 1099u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 1112u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 1113u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 1124u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 1128u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 1130u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 1131u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 1144u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 1145u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 1156u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 1160u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 1162u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 1163u);

  v1 = (gameswf::ASObject::Self *)opNew(0x28u);
  gameswf::ASObject::ASObject(v1, self);
  v2 = *((gameswf::Self **)v1 + 3);
  if ( v2 == nullptr || *(int *)v2 <= 32 )
  {
    v3 = 48;
LABEL_7:
    for ( i = 1; i < v3; i *= 2 )
      ;
    if ( i <= 3 )
      i = 4;
    if ( v2 == nullptr )
    {
LABEL_13:
      v49 = (int *)gameswf::malloc_internal(24 * i + 8);
      *v49 = 0;
      v5 = v49;
      v6 = 2;
      v49[1] = i - 1;
      v7 = 0;
      while ( 1 )
      {
        ++v7;
        v5[v6] = -2;
        v6 += 6;
        if ( i <= v7 )
          break;
        v5 = v49;
      }
      v8 = *((gameswf::Self **)v1 + 3);
      if ( v8 != nullptr )
      {
        v46 = *((uint32_t *)v8 + 1);
        if ( v46 >= 0 )
        {
          v9 = 8;
          v45 = v1;
          for ( j = 0; j <= v46; ++j )
          {
            v11 = (char **)((char *)v8 + v9);
            if ( *(uint32_t *)((char *)v8 + v9) != -2 )
            {
              v43 = j;
              sub_112F730(&v49, v11 + 2, (gameswf::ASValue::Self *)(v11 + 3));
              gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v11 + 3));
              *v11 = (char *)-2;
              v11[1] = nullptr;
              j = v43;
              v8 = *((gameswf::Self **)v45 + 3);
            }
            v9 += 24;
          }
          v1 = v45;
        }
        gameswf::free_internal(v8);
      }
      v12 = v49;
      v49 = nullptr;
      *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v12);
      goto LABEL_25;
    }
LABEL_12:
    if ( *((uint32_t *)v2 + 1) + 1 == i )
      goto LABEL_25;
    goto LABEL_13;
  }
  v3 = (3 * *(uint32_t *)v2) >> 1;
  if ( v3 > 0 )
  {
    i = 4;
    if ( v3 == 1 )
      goto LABEL_12;
    goto LABEL_7;
  }
  v48 = *((uint32_t *)v2 + 1);
  if ( v48 >= 0 )
  {
    v47 = v1;
    v40 = 0;
    v41 = 8;
    do
    {
      v42 = (uint32_t *)((char *)v2 + v41);
      if ( *(uint32_t *)((char *)v2 + v41) != -2 )
      {
        v44 = v40;
        gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v42 + 3));
        *v42 = -2;
        v42[1] = 0;
        v40 = v44;
        v2 = *((gameswf::Self **)v47 + 3);
      }
      ++v40;
      v41 += 24;
    }
    while ( v48 >= v40 );
    v1 = v47;
  }
  gameswf::free_internal(v2);
  *((uint32_t *)v1 + 3) = 0;
LABEL_25:
  *(uint64_t *)&v50[2] = 0x4005BF0A8B145769LL;
  v50[0] = 2;
  v76 = 1;
  v77 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v76, 1);
  v13 = (gameswf::Self *)&v77;
  if ( v76 == -1 )
    v13 = v78;
  gameswf::Strcpy_s(v13, (char *)&dword_0 + 2, (gameswf::Self *)"e");
  v79 = -1;
  v80 = 127;
  v81 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v76, (const gameswf::ASValue::Self *)v50);
  if ( v76 == -1 && (v81 & 1) != 0 )
    gameswf::free_internal(v78);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v50);
  v51[0] = 2;
  *(uint64_t *)&v51[2] = 0x3FE62E42FEFA39EFLL;
  v82 = 1;
  v83 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v82, 3);
  v14 = (gameswf::Self *)&v83;
  if ( v82 == -1 )
    v14 = v84;
  gameswf::Strcpy_s(v14, (char *)&loc_4, (gameswf::Self *)"ln2");
  v85 = -1;
  v86 = 127;
  v87 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v82, (const gameswf::ASValue::Self *)v51);
  if ( v82 == -1 && (v87 & 1) != 0 )
    gameswf::free_internal(v84);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v51);
  v52[0] = 2;
  *(uint64_t *)&v52[2] = 0x3FF71547652B82FELL;
  v88 = 1;
  v89 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v88, 5);
  v15 = (gameswf::Self *)&v89;
  if ( v88 == -1 )
    v15 = v90;
  gameswf::Strcpy_s(v15, (char *)&loc_6, (gameswf::Self *)"log2e");
  v91 = -1;
  v92 = 127;
  v93 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v88, (const gameswf::ASValue::Self *)v52);
  if ( v88 == -1 && (v93 & 1) != 0 )
    gameswf::free_internal(v90);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v52);
  v53[0] = 2;
  *(uint64_t *)&v53[2] = 0x40026BB1BBB55516LL;
  v94 = 1;
  v95 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v94, 4);
  v16 = (gameswf::Self *)&v95;
  if ( v94 == -1 )
    v16 = v96;
  gameswf::Strcpy_s(v16, (char *)&loc_4 + 1, (gameswf::Self *)"ln10");
  v97 = -1;
  v98 = 127;
  v99 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v94, (const gameswf::ASValue::Self *)v53);
  if ( v94 == -1 && (v99 & 1) != 0 )
    gameswf::free_internal(v96);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v53);
  v54[0] = 2;
  *(uint64_t *)&v54[2] = 0x3FDBCB7B1526E50ELL;
  v100 = 1;
  v101 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v100, 6);
  v17 = (gameswf::Self *)&v101;
  if ( v100 == -1 )
    v17 = v102;
  gameswf::Strcpy_s(v17, (char *)&loc_6 + 1, (gameswf::Self *)"log10e");
  v103 = -1;
  v104 = 127;
  v105 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v100, (const gameswf::ASValue::Self *)v54);
  if ( v100 == -1 && (v105 & 1) != 0 )
    gameswf::free_internal(v102);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v54);
  v55[0] = 2;
  *(uint64_t *)&v55[2] = 0x400921FB54442D18LL;
  v106 = 1;
  v107 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v106, 2);
  v18 = (gameswf::Self *)&v107;
  if ( v106 == -1 )
    v18 = v108;
  gameswf::Strcpy_s(v18, (char *)&dword_0 + 3, (gameswf::Self *)"pi");
  v109 = -1;
  v110 = 127;
  v111 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v106, (const gameswf::ASValue::Self *)v55);
  if ( v106 == -1 && (v111 & 1) != 0 )
    gameswf::free_internal(v108);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v55);
  v56[0] = 2;
  *(uint64_t *)&v56[2] = 0x3FE6A09E667F3BCDLL;
  v112 = 1;
  v113 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v112, 7);
  v19 = (gameswf::Self *)&v113;
  if ( v112 == -1 )
    v19 = v114;
  gameswf::Strcpy_s(v19, byte_8, (gameswf::Self *)"sqrt1_2");
  v115 = -1;
  v116 = 127;
  v117 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v112, (const gameswf::ASValue::Self *)v56);
  if ( v112 == -1 && (v117 & 1) != 0 )
    gameswf::free_internal(v114);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v56);
  v57[0] = 2;
  *(uint64_t *)&v57[2] = 0x3FF6A09E667F3BCDLL;
  v118 = 1;
  v119 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v118, 5);
  v20 = (gameswf::Self *)&v119;
  if ( v118 == -1 )
    v20 = v120;
  gameswf::Strcpy_s(v20, (char *)&loc_6, (gameswf::Self *)"sqrt2");
  v121 = -1;
  v122 = 127;
  v123 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v118, (const gameswf::ASValue::Self *)v57);
  if ( v118 == -1 && (v123 & 1) != 0 )
    gameswf::free_internal(v120);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v57);
  v58[0] = 0;
  v58[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v58, (int)(uintptr_t)(gameswf::math_fabs));
  v124 = 1;
  v125 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v124, 3);
  v21 = (gameswf::Self *)&v125;
  if ( v124 == -1 )
    v21 = v126;
  gameswf::Strcpy_s(v21, (char *)&loc_4, (gameswf::Self *)"abs");
  v127 = -1;
  v128 = 127;
  v129 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v124, (const gameswf::ASValue::Self *)v58);
  if ( v124 == -1 && (v129 & 1) != 0 )
    gameswf::free_internal(v126);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v58);
  v59[0] = 0;
  v59[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v59, (int)(uintptr_t)((int (*)(int))gameswf::math_acos));
  v130 = 1;
  v131 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v130, 4);
  v22 = (gameswf::Self *)&v131;
  if ( v130 == -1 )
    v22 = v132;
  gameswf::Strcpy_s(v22, (char *)&loc_4 + 1, (gameswf::Self *)"acos");
  v133 = -1;
  v134 = 127;
  v135 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v130, (const gameswf::ASValue::Self *)v59);
  if ( v130 == -1 && (v135 & 1) != 0 )
    gameswf::free_internal(v132);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v59);
  v60[0] = 0;
  v60[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v60, (int)(uintptr_t)(gameswf::math_asin));
  v136 = 1;
  v137 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v136, 4);
  v23 = (gameswf::Self *)&v137;
  if ( v136 == -1 )
    v23 = v138;
  gameswf::Strcpy_s(v23, (char *)&loc_4 + 1, (gameswf::Self *)"asin");
  v139 = -1;
  v140 = 127;
  v141 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v136, (const gameswf::ASValue::Self *)v60);
  if ( v136 == -1 && (v141 & 1) != 0 )
    gameswf::free_internal(v138);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v60);
  v61[0] = 0;
  v61[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v61, (int)(uintptr_t)(gameswf::math_atan));
  v142 = 1;
  v143 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v142, 4);
  v24 = (gameswf::Self *)&v143;
  if ( v142 == -1 )
    v24 = v144;
  gameswf::Strcpy_s(v24, (char *)&loc_4 + 1, (gameswf::Self *)"atan");
  v145 = -1;
  v146 = 127;
  v147 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v142, (const gameswf::ASValue::Self *)v61);
  if ( v142 == -1 && (v147 & 1) != 0 )
    gameswf::free_internal(v144);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v61);
  v62[0] = 0;
  v62[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v62, (int)(uintptr_t)((int (*)(int))gameswf::math_ceil));
  v148 = 1;
  v149 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v148, 4);
  v25 = (gameswf::Self *)&v149;
  if ( v148 == -1 )
    v25 = v150;
  gameswf::Strcpy_s(v25, (char *)&loc_4 + 1, (gameswf::Self *)"ceil");
  v151 = -1;
  v152 = 127;
  v153 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v148, (const gameswf::ASValue::Self *)v62);
  if ( v148 == -1 && (v153 & 1) != 0 )
    gameswf::free_internal(v150);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v62);
  v63[0] = 0;
  v63[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v63, (int)(uintptr_t)(gameswf::math_cos));
  v154 = 1;
  v155 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v154, 3);
  v26 = (gameswf::Self *)&v155;
  if ( v154 == -1 )
    v26 = v156;
  gameswf::Strcpy_s(v26, (char *)&loc_4, (gameswf::Self *)&off_1B6917C);
  v157 = -1;
  v158 = 127;
  v159 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v154, (const gameswf::ASValue::Self *)v63);
  if ( v154 == -1 && (v159 & 1) != 0 )
    gameswf::free_internal(v156);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v63);
  v64[0] = 0;
  v64[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v64, (int)(uintptr_t)(gameswf::math_exp));
  v160 = 1;
  v161 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v160, 3);
  v27 = (gameswf::Self *)&v161;
  if ( v160 == -1 )
    v27 = v162;
  gameswf::Strcpy_s(v27, (char *)&loc_4, (gameswf::Self *)&unk_1B69180);
  v163 = -1;
  v164 = 127;
  v165 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v160, (const gameswf::ASValue::Self *)v64);
  if ( v160 == -1 && (v165 & 1) != 0 )
    gameswf::free_internal(v162);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v64);
  v65[0] = 0;
  v65[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v65, (int)(uintptr_t)(gameswf::math_floor));
  v166 = 1;
  v167 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v166, 5);
  v28 = (gameswf::Self *)&v167;
  if ( v166 == -1 )
    v28 = v168;
  gameswf::Strcpy_s(v28, (char *)&loc_6, (gameswf::Self *)"floor");
  v169 = -1;
  v170 = 127;
  v171 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v166, (const gameswf::ASValue::Self *)v65);
  if ( v166 == -1 && (v171 & 1) != 0 )
    gameswf::free_internal(v168);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v65);
  v66[0] = 0;
  v66[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v66, (int)(uintptr_t)(gameswf::math_log));
  v172 = 1;
  v173 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v172, 3);
  v29 = (gameswf::Self *)&v173;
  if ( v172 == -1 )
    v29 = v174;
  gameswf::Strcpy_s(v29, (char *)&loc_4, (gameswf::Self *)&unk_1B69184);
  v175 = -1;
  v176 = 127;
  v177 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v172, (const gameswf::ASValue::Self *)v66);
  if ( v172 == -1 && (v177 & 1) != 0 )
    gameswf::free_internal(v174);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v66);
  v67[0] = 0;
  v67[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v67, (int)(uintptr_t)(gameswf::math_random));
  v178 = 1;
  v179 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v178, 6);
  v30 = (gameswf::Self *)&v179;
  if ( v178 == -1 )
    v30 = v180;
  gameswf::Strcpy_s(v30, (char *)&loc_6 + 1, (gameswf::Self *)"random");
  v181 = -1;
  v182 = 127;
  v183 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v178, (const gameswf::ASValue::Self *)v67);
  if ( v178 == -1 && (v183 & 1) != 0 )
    gameswf::free_internal(v180);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v67);
  v68[0] = 0;
  v68[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v68, (int)(uintptr_t)(gameswf::math_round));
  v184 = 1;
  v185 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v184, 5);
  v31 = (gameswf::Self *)&v185;
  if ( v184 == -1 )
    v31 = v186;
  gameswf::Strcpy_s(v31, (char *)&loc_6, (gameswf::Self *)"round");
  v187 = -1;
  v188 = 127;
  v189 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v184, (const gameswf::ASValue::Self *)v68);
  if ( v184 == -1 && (v189 & 1) != 0 )
    gameswf::free_internal(v186);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v68);
  v69[0] = 0;
  v69[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v69, (int)(uintptr_t)(gameswf::math_sin));
  v190 = 1;
  v191 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v190, 3);
  v32 = (gameswf::Self *)&v191;
  if ( v190 == -1 )
    v32 = v192;
  gameswf::Strcpy_s(v32, (char *)&loc_4, (gameswf::Self *)&unk_1B69188);
  v193 = -1;
  v194 = 127;
  v195 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v190, (const gameswf::ASValue::Self *)v69);
  if ( v190 == -1 && (v195 & 1) != 0 )
    gameswf::free_internal(v192);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v69);
  v70[0] = 0;
  v70[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v70, (int)(uintptr_t)(gameswf::math_sqrt));
  v196 = 1;
  v197 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v196, 4);
  v33 = (gameswf::Self *)&v197;
  if ( v196 == -1 )
    v33 = v198;
  gameswf::Strcpy_s(v33, (char *)&loc_4 + 1, (gameswf::Self *)"sqrt");
  v199 = -1;
  v200 = 127;
  v201 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v196, (const gameswf::ASValue::Self *)v70);
  if ( v196 == -1 && (v201 & 1) != 0 )
    gameswf::free_internal(v198);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v70);
  v71[0] = 0;
  v71[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v71, (int)(uintptr_t)(gameswf::math_tan));
  v202 = 1;
  v203 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v202, 3);
  v34 = (gameswf::Self *)&v203;
  if ( v202 == -1 )
    v34 = v204;
  gameswf::Strcpy_s(v34, (char *)&loc_4, (gameswf::Self *)"tan");
  v205 = -1;
  v206 = 127;
  v207 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v202, (const gameswf::ASValue::Self *)v71);
  if ( v202 == -1 && (v207 & 1) != 0 )
    gameswf::free_internal(v204);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v71);
  v72[0] = 0;
  v72[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v72, (int)(uintptr_t)(gameswf::math_atan2));
  v208 = 1;
  v209 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v208, 5);
  v35 = (gameswf::Self *)&v209;
  if ( v208 == -1 )
    v35 = v210;
  gameswf::Strcpy_s(v35, (char *)&loc_6, (gameswf::Self *)"atan2");
  v211 = -1;
  v212 = 127;
  v213 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v208, (const gameswf::ASValue::Self *)v72);
  if ( v208 == -1 && (v213 & 1) != 0 )
    gameswf::free_internal(v210);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v72);
  v73[0] = 0;
  v73[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v73, (int)(uintptr_t)(gameswf::math_max));
  v214 = 1;
  v215 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v214, 3);
  v36 = (gameswf::Self *)&v215;
  if ( v214 == -1 )
    v36 = v216;
  gameswf::Strcpy_s(v36, (char *)&loc_4, (gameswf::Self *)"max");
  v217 = -1;
  v218 = 127;
  v219 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v214, (const gameswf::ASValue::Self *)v73);
  if ( v214 == -1 && (v219 & 1) != 0 )
    gameswf::free_internal(v216);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v73);
  v74[0] = 0;
  v74[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v74, (int)(uintptr_t)(gameswf::math_min));
  v220 = 1;
  v221 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v220, 3);
  v37 = (gameswf::Self *)&v221;
  if ( v220 == -1 )
    v37 = v222;
  gameswf::Strcpy_s(v37, (char *)&loc_4, (gameswf::Self *)"min");
  v223 = -1;
  v224 = 127;
  v225 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v220, (const gameswf::ASValue::Self *)v74);
  if ( v220 == -1 && (v225 & 1) != 0 )
    gameswf::free_internal(v222);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v74);
  v75[0] = 0;
  v75[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v75, (int)(uintptr_t)(gameswf::math_pow));
  v226 = 1;
  v227 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v226, 3);
  v38 = (gameswf::Self *)&v227;
  if ( v226 == -1 )
    v38 = v228;
  gameswf::Strcpy_s(v38, (char *)&loc_4, (gameswf::Self *)"pow");
  v229 = -1;
  v230 = 127;
  v231 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v226, (const gameswf::ASValue::Self *)v75);
  if ( v226 == -1 && (v231 & 1) != 0 )
    gameswf::free_internal(v228);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v75);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::createMatrix  (binary VA: 0x1133800)
// Original: gameswf::createMatrix
// ----------------------------------------------------------------------------
gameswf::ASMatrix::Self * gameswf::createMatrix(gameswf::Self *self, gameswf::Player::Self *a2)
{
  gameswf::Self *v2;
  gameswf::Self *v3;
  gameswf::ASMatrix::Self *Object;
  gameswf::ASMatrix::Self *v5;
  char v6;
  typedef gameswf::ASMatrix::Self *_g4_t_v8;
  typedef gameswf::ASMatrix::Self *_g4_t_v9;
  typedef gameswf::ASMatrix::Self *_g4_t_v10;
  typedef gameswf::ASMatrix::Self *_g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef gameswf::Self *_g4_t_v14;
  typedef int16_t _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef gameswf::Self *_g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v12)) > _g4_s4 ? (16u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (17u + sizeof(_g4_t_v13)) > _g4_s5 ? (17u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v14)) > _g4_s6 ? (28u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v15)) > _g4_s7 ? (32u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (34u + sizeof(_g4_t_v16)) > _g4_s8 ? (34u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (35u + sizeof(_g4_t_v17)) > _g4_s9 ? (35u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v18)) > _g4_s10 ? (48u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (49u + sizeof(_g4_t_v19)) > _g4_s11 ? (49u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v20)) > _g4_s12 ? (60u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v21)) > _g4_s13 ? (64u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (66u + sizeof(_g4_t_v22)) > _g4_s14 ? (66u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (67u + sizeof(_g4_t_v23)) > _g4_s15 ? (67u + sizeof(_g4_t_v23)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 17u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 34u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 35u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 49u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 66u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 67u);

  if ( *((uint8_t *)self + 232) != 0 )
  {
    v18 = 1;
    v19 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v18, 6);
    v2 = (gameswf::Self *)&v19;
    if ( v18 == -1 )
      v2 = v20;
    gameswf::Strcpy_s(v2, (char *)&loc_6 + 1, (gameswf::Self *)"Matrix");
    v12 = 1;
    v13 = 0;
    v21 = -1;
    v22 = 127;
    v23 |= 1u;
    gameswf::String::resize((gameswf::String::Self *)&v12, 10);
    v3 = (gameswf::Self *)&v13;
    if ( v12 == -1 )
      v3 = v14;
    gameswf::Strcpy_s(v3, &byte_9[2], (gameswf::Self *)"flash.geom");
    v15 = -1;
    v16 = 127;
    v17 |= 1u;
    Object = (gameswf::ASMatrix::Self *)gameswf::ASClassManager::createObject(
                                    (gameswf::Self *)((char *)self + 236),
                                    (const gameswf::String::Self *)&v12,
                                    (const gameswf::String::Self *)&v18);
    v5 = Object;
    if ( Object != nullptr )
    {
      v8 = Object;
      v6 = G4_VCALL<int>(Object, 8, 30);
      v5 = v8;
      if ( v6 == 0 )
        v5 = nullptr;
    }
    if ( v12 == -1 && (v17 & 1) != 0 )
    {
      v11 = v5;
      gameswf::free_internal(v14);
      v5 = v11;
    }
    if ( v18 == -1 && (v23 & 1) != 0 )
    {
      v9 = v5;
      gameswf::free_internal(v20);
      v5 = v9;
    }
  }
  else
  {
    v10 = (gameswf::ASMatrix::Self *)opNew(0x40u);
    gameswf::ASMatrix::Construct(v10, self, nullptr);
    v5 = v10;
  }
  if ( a2 != nullptr )
  {
    *((uint32_t *)v5 + 10) = *(uint32_t *)a2;
    *((uint32_t *)v5 + 11) = *((uint32_t *)a2 + 1);
    *((uint32_t *)v5 + 12) = *((uint32_t *)a2 + 2);
    *((uint32_t *)v5 + 13) = *((uint32_t *)a2 + 3);
    *((uint32_t *)v5 + 14) = *((uint32_t *)a2 + 4);
    *((uint32_t *)v5 + 15) = *((uint32_t *)a2 + 5);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::createPoint  (binary VA: 0x113d580)
// Original: gameswf::createPoint
// ----------------------------------------------------------------------------
int gameswf::createPoint(gameswf::Self *self, gameswf::Player::Self *a2, float a3)
{
  gameswf::Self *v3;
  gameswf::Self *v4;
  int Object;
  int v6;
  typedef char _g4_t_v8;
  typedef char _g4_t_v9;
  typedef gameswf::Self *_g4_t_v10;
  typedef int16_t _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef gameswf::Self *_g4_t_v16;
  typedef int16_t _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (1u + sizeof(_g4_t_v9)) > _g4_s1 ? (1u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v11)) > _g4_s3 ? (16u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (18u + sizeof(_g4_t_v12)) > _g4_s4 ? (18u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (19u + sizeof(_g4_t_v13)) > _g4_s5 ? (19u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v14)) > _g4_s6 ? (32u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (33u + sizeof(_g4_t_v15)) > _g4_s7 ? (33u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v16)) > _g4_s8 ? (44u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v17)) > _g4_s9 ? (48u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (50u + sizeof(_g4_t_v18)) > _g4_s10 ? (50u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (51u + sizeof(_g4_t_v19)) > _g4_s11 ? (51u + sizeof(_g4_t_v19)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 1u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 18u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 19u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 33u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 50u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 51u);

  if ( *((uint8_t *)self + 232) != 0 )
  {
    v14 = 1;
    v15 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v14, 5);
    v3 = (gameswf::Self *)&v15;
    if ( v14 == -1 )
      v3 = v16;
    gameswf::Strcpy_s(v3, (char *)&loc_6, (gameswf::Self *)"Point");
    v8 = 1;
    v17 = -1;
    v9 = 0;
    v18 = 127;
    v19 |= 1u;
    gameswf::String::resize((gameswf::String::Self *)&v8, 10);
    v4 = (gameswf::Self *)&v9;
    if ( v8 == -1 )
      v4 = v10;
    gameswf::Strcpy_s(v4, &byte_9[2], (gameswf::Self *)"flash.geom");
    v11 = -1;
    v12 = 127;
    v13 |= 1u;
    Object = (int)(uintptr_t)(gameswf::ASClassManager::createObject(
               (gameswf::Self *)((char *)self + 236),
               (const gameswf::String::Self *)&v8,
               (const gameswf::String::Self *)&v14));
    v6 = Object;
    if ( Object != 0 && G4_VCALL<uint8_t>(Object, 8, 29) == 0 )
      v6 = 0;
    if ( v8 == -1 && (v13 & 1) != 0 )
      gameswf::free_internal(v10);
    if ( v14 == -1 && (v19 & 1) != 0 )
      gameswf::free_internal(v16);
  }
  else
  {
    v6 = opNew(0x30u);
    gameswf::ASPoint::Construct((gameswf::ASPoint::Self *)v6, self, 0.0, 0.0);
  }
  *(uint32_t *)(v6 + 40) = (uint32_t)(uintptr_t)(a2);
  *(float *)(v6 + 44) = a3;
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::as_selection_setfocus  (binary VA: 0x113dad0)
// Original: gameswf::as_selection_setfocus
// ----------------------------------------------------------------------------
int gameswf::as_selection_setfocus(int a1)
{
  int v1;
  int Target;
  int *v3;
  int v4;
  typedef uint8_t _g4_t_v6[2];
  typedef int16_t _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (10u + sizeof(_g4_t_v7)) > _g4_s1 ? (10u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 10u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 != 0 && G4_VCALL<uint8_t>(v1, 8, 28) != 0 && *(int *)(a1 + 16) > 0 )
  {
    Target = gameswf::ASEnvironment::findTarget(
               *(gameswf::ASObject::Self ***)(a1 + 12),
               (const gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v3 = (int *)Target;
    if ( Target != 0 && G4_VCALL<uint8_t>(Target, 8, 1) != 0 )
    {
      v4 = *v3;
      v6[0] = 20;
      v6[1] = 0;
      v7 = 0;
      v8 = 0;
      (*(void (**)(int *, uint8_t *))(v4 + 64))(v3, v6);
      gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 1);
    }
  }
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::selection_init  (binary VA: 0x113dc00)
// Original: gameswf::selection_init
// ----------------------------------------------------------------------------
gameswf::as_selection::Self * gameswf::selection_init(gameswf::Self *self)
{
  gameswf::as_selection::Self *v1;
  gameswf::Self *v2;
  typedef uint8_t _g4_t_v4[12];
  typedef char _g4_t_v5;
  typedef char _g4_t_v6;
  typedef gameswf::Self *_g4_t_v7;
  typedef int16_t _g4_t_v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (13u + sizeof(_g4_t_v6)) > _g4_s2 ? (13u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v7)) > _g4_s3 ? (24u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v8)) > _g4_s4 ? (28u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (30u + sizeof(_g4_t_v9)) > _g4_s5 ? (30u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (31u + sizeof(_g4_t_v10)) > _g4_s6 ? (31u + sizeof(_g4_t_v10)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 13u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 30u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 31u);

  v1 = (gameswf::as_selection::Self *)opNew(0x28u);
  gameswf::as_selection::as_selection(v1, (gameswf::Player::Self *)self);
  v4[0] = 0;
  v4[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v4, (int)(uintptr_t)((int (*)(int))gameswf::as_selection_setfocus));
  v5 = 1;
  v6 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v5, 8);
  v2 = (gameswf::Self *)&v6;
  if ( v5 == -1 )
    v2 = v7;
  gameswf::Strcpy_s(v2, byte_9, (gameswf::Self *)"setFocus");
  v8 = -1;
  v9 = 127;
  v10 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v5, (const gameswf::ASValue::Self *)v4);
  if ( v5 == -1 && (v10 & 1) != 0 )
    gameswf::free_internal(v7);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::spriteGetPtr  (binary VA: 0x113efd0)
// Original: gameswf::spriteGetPtr
// ----------------------------------------------------------------------------
int gameswf::spriteGetPtr(int a1)
{
  int v1;
  int target;

  v1 = *(uint32_t *)(a1 + 4);
  if ( v1 == 0 || G4_VCALL<uint8_t>(v1, 8, 2) == 0 )
  {
    target = gameswf::ASEnvironment::get_target(*(gameswf::ASEnvironment::Self **)(a1 + 12));
    v1 = target;
    if ( target != 0 && G4_VCALL<uint8_t>(target, 8, 2) == 0 )
      return 0;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::transformPoint  (binary VA: 0x113fa10)
// Original: gameswf::transformPoint
// ----------------------------------------------------------------------------
void gameswf::transformPoint(gameswf::Self *self, gameswf::ASObject::Self *a2)
{
  gameswf::Self *v2;
  int StandardMemberID;
  gameswf::Self *v4;
  int v5;
  float v6; // xmm1_4
  long double v7; // fst7
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  gameswf::Self *v13;
  int v14;
  gameswf::Self *v15;
  int v16;
  typedef uint32_t _g4_t_v17[3];
  typedef uint32_t _g4_t_v18[3];
  typedef uint16_t _g4_t_v19[6];
  typedef uint16_t _g4_t_v20[6];
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef gameswf::Self *_g4_t_v23;
  typedef int16_t _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef gameswf::Self *_g4_t_v29;
  typedef int16_t _g4_t_v30;
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  typedef gameswf::Self *_g4_t_v35;
  typedef int16_t _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef gameswf::Self *_g4_t_v41;
  typedef int16_t _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v19)) > _g4_s2 ? (28u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v20)) > _g4_s3 ? (40u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v21)) > _g4_s4 ? (52u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (53u + sizeof(_g4_t_v22)) > _g4_s5 ? (53u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v23)) > _g4_s6 ? (64u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v24)) > _g4_s7 ? (68u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (70u + sizeof(_g4_t_v25)) > _g4_s8 ? (70u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (71u + sizeof(_g4_t_v26)) > _g4_s9 ? (71u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v27)) > _g4_s10 ? (84u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (85u + sizeof(_g4_t_v28)) > _g4_s11 ? (85u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v29)) > _g4_s12 ? (96u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v30)) > _g4_s13 ? (100u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (102u + sizeof(_g4_t_v31)) > _g4_s14 ? (102u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (103u + sizeof(_g4_t_v32)) > _g4_s15 ? (103u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v33)) > _g4_s16 ? (116u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (117u + sizeof(_g4_t_v34)) > _g4_s17 ? (117u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v35)) > _g4_s18 ? (128u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v36)) > _g4_s19 ? (132u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (134u + sizeof(_g4_t_v37)) > _g4_s20 ? (134u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (135u + sizeof(_g4_t_v38)) > _g4_s21 ? (135u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (148u + sizeof(_g4_t_v39)) > _g4_s22 ? (148u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (149u + sizeof(_g4_t_v40)) > _g4_s23 ? (149u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (160u + sizeof(_g4_t_v41)) > _g4_s24 ? (160u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (164u + sizeof(_g4_t_v42)) > _g4_s25 ? (164u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (166u + sizeof(_g4_t_v43)) > _g4_s26 ? (166u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (167u + sizeof(_g4_t_v44)) > _g4_s27 ? (167u + sizeof(_g4_t_v44)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 53u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 70u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 71u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 85u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 102u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 103u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 116u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 117u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 128u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 132u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 134u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 135u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 148u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 149u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 160u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 164u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 166u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 167u);

  if ( self == nullptr )
    return;
  LOWORD(v17[0]) = 2;
  v17[1] = 0;
  v17[2] = 0;
  v21 = 1;
  v22 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v21, 1);
  v2 = (gameswf::Self *)&v22;
  if ( v21 == -1 )
    v2 = v23;
  gameswf::Strcpy_s(v2, (char *)&dword_0 + 2, (gameswf::Self *)"x");
  v24 = -1;
  v25 = 127;
  v26 |= 1u;
  StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v21);
  if ( StandardMemberID == -1
    || G4_VCALL<uint8_t>(self, 36, StandardMemberID, v17) == 0 )
  {
    G4_VCALL<void>(self, 44, &v21, v17);
  }
  if ( v21 == -1 && (v26 & 1) != 0 )
    gameswf::free_internal(v23);
  LOWORD(v18[0]) = 2;
  v18[1] = 0;
  v18[2] = 0;
  v27 = 1;
  v28 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v27, 1);
  v4 = (gameswf::Self *)&v28;
  if ( v27 == -1 )
    v4 = v29;
  gameswf::Strcpy_s(v4, (char *)&dword_0 + 2, (gameswf::Self *)"y");
  v30 = -1;
  v31 = 127;
  v32 |= 1u;
  v5 = gameswf::getStandardMemberID((gameswf::Self *)&v27);
  if ( v5 == -1 || G4_VCALL<uint8_t>(self, 36, v5, v18) == 0 )
  {
    G4_VCALL<void>(self, 44, &v27, v18);
    if ( v27 == -1 )
      goto LABEL_29;
  }
  else if ( v27 == -1 )
  {
LABEL_29:
    if ( (v32 & 1) != 0 )
      gameswf::free_internal(v29);
  }
  v6 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v18);
  v7 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)v17);
  v19[0] = 2;
  v8 = v7;
  v9 = *(float *)a2;
  v10 = *((float *)a2 + 1);
  v33 = 1;
  v34 = 0;
  v11 = (float)((float)(v9 * v8) + (float)(v10 * v6)) + *((float *)a2 + 2);
  v12 = (float)((float)(v6 * *((float *)a2 + 4)) + (float)(v8 * *((float *)a2 + 3))) + *((float *)a2 + 5);
  *(double *)&v19[2] = v11;
  gameswf::String::resize((gameswf::String::Self *)&v33, 1);
  v13 = (gameswf::Self *)&v34;
  if ( v33 == -1 )
    v13 = v35;
  gameswf::Strcpy_s(v13, (char *)&dword_0 + 2, (gameswf::Self *)"x");
  v36 = -1;
  v37 = 127;
  v38 |= 1u;
  v14 = gameswf::getStandardMemberID((gameswf::Self *)&v33);
  if ( v14 == -1
    || G4_VCALL<uint8_t>(self, 32, v14, v19) == 0 )
  {
    G4_VCALL<void>(self, 48, &v33, v19);
  }
  if ( v33 == -1 && (v38 & 1) != 0 )
    gameswf::free_internal(v35);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v19);
  v20[0] = 2;
  *(double *)&v20[2] = v12;
  v39 = 1;
  v40 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v39, 1);
  v15 = (gameswf::Self *)&v40;
  if ( v39 == -1 )
    v15 = v41;
  gameswf::Strcpy_s(v15, (char *)&dword_0 + 2, (gameswf::Self *)"y");
  v42 = -1;
  v43 = 127;
  v44 |= 1u;
  v16 = gameswf::getStandardMemberID((gameswf::Self *)&v39);
  if ( v16 == -1
    || G4_VCALL<uint8_t>(self, 32, v16, v20) == 0 )
  {
    G4_VCALL<void>(self, 48, &v39, v20);
  }
  if ( v39 == -1 && (v44 & 1) != 0 )
    gameswf::free_internal(v41);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v20);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v18);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v17);
}

// ----------------------------------------------------------------------------
// Function: gameswf::textFieldInit  (binary VA: 0x1144290)
// Original: gameswf::textFieldInit
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::textFieldInit(gameswf::Self *self)
{
  gameswf::ASObject::Self *v1;
  gameswf::Self *v2;
  typedef uint8_t _g4_t_v4[12];
  typedef char _g4_t_v5;
  typedef char _g4_t_v6;
  typedef gameswf::Self *_g4_t_v7;
  typedef int16_t _g4_t_v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (13u + sizeof(_g4_t_v6)) > _g4_s2 ? (13u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v7)) > _g4_s3 ? (24u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v8)) > _g4_s4 ? (28u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (30u + sizeof(_g4_t_v9)) > _g4_s5 ? (30u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (31u + sizeof(_g4_t_v10)) > _g4_s6 ? (31u + sizeof(_g4_t_v10)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 13u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 30u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 31u);

  v1 = (gameswf::ASObject::Self *)opNew(0x2Cu);
  gameswf::ASCppFunction::Construct(v1, self, (int)(uintptr_t)(gameswf::ASTextField::ctor));
  v4[0] = 0;
  v4[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v4, (int)(uintptr_t)(gameswf::ASStyleSheet::ctor));
  v5 = 1;
  v6 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v5, 10);
  v2 = (gameswf::Self *)&v6;
  if ( v5 == -1 )
    v2 = v7;
  gameswf::Strcpy_s(v2, &byte_9[2], (gameswf::Self *)"StyleSheet");
  v8 = -1;
  v9 = 127;
  v10 |= 1u;
  gameswf::ASObject::builtinMember(v1, (const gameswf::StringI::Self *)&v5, (const gameswf::ASValue::Self *)v4);
  if ( v5 == -1 && (v10 & 1) != 0 )
    gameswf::free_internal(v7);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v4);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::parseStyleSheetStyle  (binary VA: 0x1147040)
// Original: gameswf::parseStyleSheetStyle
// ----------------------------------------------------------------------------
char * gameswf::parseStyleSheetStyle(gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **a1, char *a2)
{
  return sub_1146880(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::transformPoint  (binary VA: 0x1152bf0)
// Original: gameswf::transformPoint
// ----------------------------------------------------------------------------
void gameswf::transformPoint(gameswf::Self *self, gameswf::ASPoint::Self *a2)
{
  float v2;
  float v3;
  float v4;
  float v5;

  if ( self != nullptr )
  {
    v4 = *((float *)self + 10);
    v5 = *((float *)self + 11);
    gameswf::Point::pixelsToTwips();
    v3 = (float)((float)(*(float *)a2 * v4) + (float)(*((float *)a2 + 1) * v5)) + *((float *)a2 + 2);
    v2 = (float)((float)(v4 * *((float *)a2 + 3)) + (float)(v5 * *((float *)a2 + 4))) + *((float *)a2 + 5);
    gameswf::Point::twipsToPixels();
    *((float *)self + 10) = v3;
    *((float *)self + 11) = v2;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::setFilterEnabled  (binary VA: 0x1152e00)
// Original: gameswf::setFilterEnabled
// ----------------------------------------------------------------------------
int gameswf::setFilterEnabled(int a1, char a2)
{
  gameswf::s_filterEnabled[a1] = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::filtersInitPackage  (binary VA: 0x115d900)
// Original: gameswf::filtersInitPackage
// ----------------------------------------------------------------------------
int gameswf::filtersInitPackage(gameswf::Self *self)
{
  int v1;
  char v2;
  bool v3;
  int v4;
  char *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  int v8;
  unsigned int v9;
  uint8_t *v11;
  int v12;
  int v13;
  int v14;
  typedef gameswf::Self **_g4_t_v15;
  typedef gameswf::Self **_g4_t_v16;
  typedef gameswf::Self **_g4_t_v17;
  typedef int _g4_t_v18;
  typedef gameswf::ASClass::Self *_g4_t_Class;
  typedef gameswf::ASClass::Self *_g4_t_v20;
  typedef gameswf::Self **_g4_t_v21;
  typedef gameswf::ASClass::Self *_g4_t_v22;
  typedef uint8_t _g4_t_v23[12];
  typedef uint8_t _g4_t_v24[12];
  typedef uint8_t _g4_t_v25[12];
  typedef uint8_t _g4_t_v26[12];
  typedef char _g4_t_v27;
  typedef uint8_t _g4_t_v28[15];
  typedef unsigned int _g4_t_v29;
  typedef uint8_t _g4_t_v30[20];
  typedef uint8_t _g4_t_v31[20];
  typedef uint8_t _g4_t_v32[20];
  typedef uint8_t _g4_t_v33[20];
  typedef uint8_t _g4_t_v34[20];
  typedef uint8_t _g4_t_v35[20];
  typedef uint8_t _g4_t_v36[32];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v17)) > _g4_s2 ? (4u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v18)) > _g4_s3 ? (4u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_Class)) > _g4_s4 ? (8u + sizeof(_g4_t_Class)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v20)) > _g4_s5 ? (8u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v21)) > _g4_s6 ? (8u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v22)) > _g4_s7 ? (12u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v23)) > _g4_s8 ? (16u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v24)) > _g4_s9 ? (28u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v25)) > _g4_s10 ? (40u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v26)) > _g4_s11 ? (52u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v27)) > _g4_s12 ? (64u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (65u + sizeof(_g4_t_v28)) > _g4_s13 ? (65u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v29)) > _g4_s14 ? (80u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v30)) > _g4_s15 ? (84u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v31)) > _g4_s16 ? (104u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v32)) > _g4_s17 ? (124u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (144u + sizeof(_g4_t_v33)) > _g4_s18 ? (144u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (164u + sizeof(_g4_t_v34)) > _g4_s19 ? (164u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (184u + sizeof(_g4_t_v35)) > _g4_s20 ? (184u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (204u + sizeof(_g4_t_v36)) > _g4_s21 ? (204u + sizeof(_g4_t_v36)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 65u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 84u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 104u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 124u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 164u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 184u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 204u);

  sub_776320((gameswf::String::Self *)&v27, (gameswf::Self *)"flash.filters");
  v1 = opNew(0x44u);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v1, self);
  *(uint32_t *)(v1 + 40) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2091688);
  *(uint32_t *)(v1 + 44) = 0;
  v2 = v27;
  v3 = v27 == -1;
  *(uint8_t *)(v1 + 48) = 1;
  *(uint8_t *)(v1 + 49) = 0;
  if ( v3 )
    v4 = *(uint32_t *)&v28[3] - 1;
  else
    v4 = v2 - 1;
  gameswf::String::resize((gameswf::String::Self *)(v1 + 48), v4);
  LOBYTE(v5) = *(uint8_t *)(v1 + 48);
  v6 = (gameswf::Self *)v28;
  if ( v27 == -1 )
    v6 = *(gameswf::Self **)&v28[11];
  if ( (uint8_t)(uintptr_t)(v5) == 0xFF )
  {
    v5 = *(char **)(v1 + 52);
    v7 = *(gameswf::Self **)(v1 + 60);
  }
  else
  {
    v5 = (char *)(char)(uintptr_t)(v5);
    v7 = (gameswf::Self *)(v1 + 49);
  }
  gameswf::Strcpy_s(v7, v5, v6);
  if ( (uint8_t *)(v29 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( v27 == -1 )
    {
      v11 = *(uint8_t **)&v28[11];
      v12 = *(uint32_t *)&v28[3] - 1;
    }
    else
    {
      v11 = v28;
      v12 = v27 - 1;
    }
    v8 = 5381;
    if ( v12 > 0 )
    {
      v18 = v1;
      do
      {
        --v12;
        v13 = 33 * v8;
        v14 = (uint8_t)v11[v12] + 32;
        if ( (uint8_t)(v11[v12] - 65) > 0x19u )
          v14 = (uint8_t)v11[v12];
        v8 = v13 ^ v14;
      }
      while ( v12 != 0 );
      v1 = v18;
      v8 = v8 << 9 >> 9;
    }
    v29 = v8 & 0x7FFFFF | v29 & 0xFF800000;
  }
  else
  {
    v8 = (int)(v29 << 9) >> 9;
  }
  v9 = v8 & 0x7FFFFF | *(uint32_t *)(v1 + 64) & 0xFF800000;
  *(uint32_t *)(v1 + 64) = v9;
  *(uint8_t *)(v1 + 66) = BYTE2(v9) & 0x7F;
  *(uint8_t *)(v1 + 67) = HIBYTE(v9) | 1;
  sub_59CE50((int)(uintptr_t)(&v27));
  sub_776320((gameswf::String::Self *)v30, (gameswf::Self *)"BitmapFilter");
  v23[0] = 0;
  v23[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v23, (int)(uintptr_t)(gameswf::ASBitmapFilter::init));
  v15 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v15,
    self,
    (const gameswf::String::Self *)v30,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASBitmapFilter::newOp,
    (const gameswf::ASValue::Self *)v23,
    false);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v15);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v23);
  sub_59CE50((int)(uintptr_t)(v30));
  sub_776320((gameswf::String::Self *)v31, (gameswf::Self *)"BitmapFilter");
  Class = (gameswf::ASClass::Self *)gameswf::ASPackage::findClass(
                                (gameswf::ASPackage::Self *)v1,
                                (const gameswf::String::Self *)v31,
                                true);
  sub_776320((gameswf::String::Self *)v32, (gameswf::Self *)"BlurFilter");
  v24[0] = 0;
  v24[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v24, (int)(uintptr_t)(gameswf::ASBlurFilter::init));
  v16 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v16,
    self,
    Class,
    (const gameswf::String::Self *)v32,
    gameswf::ASBlurFilter::newOp,
    (const gameswf::ASValue::Self *)v24,
    nullptr);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v16);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v24);
  sub_59CE50((int)(uintptr_t)(v32));
  sub_59CE50((int)(uintptr_t)(v31));
  sub_776320((gameswf::String::Self *)v33, (gameswf::Self *)"BitmapFilter");
  v20 = (gameswf::ASClass::Self *)gameswf::ASPackage::findClass((gameswf::ASPackage::Self *)v1, (const gameswf::String::Self *)v33, true);
  sub_776320((gameswf::String::Self *)v34, (gameswf::Self *)"ColorMatrixFilter");
  v25[0] = 0;
  v25[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v25, (int)(uintptr_t)(gameswf::ASColorMatrixFilter::init));
  v17 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v17,
    self,
    v20,
    (const gameswf::String::Self *)v34,
    gameswf::ASColorMatrixFilter::newOp,
    (const gameswf::ASValue::Self *)v25,
    nullptr);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v17);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v25);
  sub_59CE50((int)(uintptr_t)(v34));
  sub_59CE50((int)(uintptr_t)(v33));
  sub_776320((gameswf::String::Self *)v35, (gameswf::Self *)"BitmapFilter");
  v22 = (gameswf::ASClass::Self *)gameswf::ASPackage::findClass((gameswf::ASPackage::Self *)v1, (const gameswf::String::Self *)v35, true);
  sub_776320((gameswf::String::Self *)v36, (gameswf::Self *)"DisplacementMapFilter");
  v26[0] = 0;
  v26[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v26, (int)(uintptr_t)(gameswf::ASDisplacementMapFilter::init));
  v21 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v21,
    self,
    v22,
    (const gameswf::String::Self *)v36,
    gameswf::ASDisplacementMapFilter::newOp,
    (const gameswf::ASValue::Self *)v26,
    nullptr);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v21);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v26);
  sub_59CE50((int)(uintptr_t)(v36));
  sub_59CE50((int)(uintptr_t)(v35));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::mediaInitPackage  (binary VA: 0x115de70)
// Original: gameswf::mediaInitPackage
// ----------------------------------------------------------------------------
int gameswf::mediaInitPackage(gameswf::Self *self)
{
  int v1;
  char v2;
  bool v3;
  int v4;
  char *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  int v8;
  unsigned int v9;
  gameswf::Self **Class;
  uint8_t *v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef uint8_t _g4_t_v18[15];
  typedef unsigned int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v18)) > _g4_s2 ? (17u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v19)) > _g4_s3 ? (32u + sizeof(_g4_t_v19)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 17u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  sub_776320((gameswf::String::Self *)&v17, (gameswf::Self *)"flash.media");
  v1 = opNew(0x44u);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v1, self);
  *(uint32_t *)(v1 + 40) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2091688);
  *(uint32_t *)(v1 + 44) = 0;
  v2 = v17;
  v3 = v17 == -1;
  *(uint8_t *)(v1 + 48) = 1;
  *(uint8_t *)(v1 + 49) = 0;
  if ( v3 )
    v4 = *(uint32_t *)&v18[3] - 1;
  else
    v4 = v2 - 1;
  gameswf::String::resize((gameswf::String::Self *)(v1 + 48), v4);
  LOBYTE(v5) = *(uint8_t *)(v1 + 48);
  v6 = (gameswf::Self *)v18;
  if ( v17 == -1 )
    v6 = *(gameswf::Self **)&v18[11];
  if ( (uint8_t)(uintptr_t)(v5) == 0xFF )
  {
    v5 = *(char **)(v1 + 52);
    v7 = *(gameswf::Self **)(v1 + 60);
  }
  else
  {
    v5 = (char *)(char)(uintptr_t)(v5);
    v7 = (gameswf::Self *)(v1 + 49);
  }
  gameswf::Strcpy_s(v7, v5, v6);
  if ( (uint8_t *)(v19 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( v17 == -1 )
    {
      v12 = *(uint8_t **)&v18[11];
      v13 = *(uint32_t *)&v18[3] - 1;
    }
    else
    {
      v12 = v18;
      v13 = v17 - 1;
    }
    v8 = 5381;
    if ( v13 > 0 )
    {
      v16 = v1;
      do
      {
        --v13;
        v14 = 33 * v8;
        v15 = (uint8_t)v12[v13] + 32;
        if ( (uint8_t)(v12[v13] - 65) > 0x19u )
          v15 = (uint8_t)v12[v13];
        v8 = v14 ^ v15;
      }
      while ( v13 != 0 );
      v1 = v16;
      v8 = v8 << 9 >> 9;
    }
    v19 = v8 & 0x7FFFFF | v19 & 0xFF800000;
  }
  else
  {
    v8 = (int)(v19 << 9) >> 9;
  }
  v9 = v8 & 0x7FFFFF | *(uint32_t *)(v1 + 64) & 0xFF800000;
  *(uint32_t *)(v1 + 64) = v9;
  *(uint8_t *)(v1 + 66) = BYTE2(v9) & 0x7F;
  *(uint8_t *)(v1 + 67) = HIBYTE(v9) | 1;
  sub_59CE50((int)(uintptr_t)(&v17));
  Class = gameswf::ASVideo::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)Class);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::loadTexture  (binary VA: 0x115e060)
// Original: gameswf::loadTexture
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::loadTexture(gameswf::Self *self, gameswf::Player::Self *a2, char *a3)
{
  int v4;
  int v5;
  typedef char *_g4_t_HostInterface;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_HostInterface)) > _g4_s0 ? (8u + sizeof(_g4_t_HostInterface)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v7)) > _g4_s1 ? (20u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_HostInterface &HostInterface = *reinterpret_cast<_g4_t_HostInterface *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  v8[1] = 0;
  v8[2] = 0;
  HostInterface = (char *)gameswf::getHostInterface();
  (*(void (**)(gameswf::Self *))(*(uint32_t *)HostInterface + 20))(self);
  if ( *(uint32_t *)self == 0 )
  {
    glitch::video::CTextureManager::getTexture(
      (glitch::video::CTextureManager::Self *)&v7,
      *(char **)(*(uint32_t *)(*((uint32_t *)a2 + 3) + 44) + 456),
      a3,
      nullptr);
    v4 = 0;
    v8[0] = v7;
    if ( v7 != 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
      v4 = v8[0];
    }
    v5 = *(uint32_t *)self;
    *(uint32_t *)self = v4;
    v8[0] = v5;
    sub_5ED480(v8);
    sub_5ED480(&v7);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::extensionsInitPackage  (binary VA: 0x115fff0)
// Original: gameswf::extensionsInitPackage
// ----------------------------------------------------------------------------
int gameswf::extensionsInitPackage(gameswf::Self *self)
{
  int v1;
  char v2;
  bool v3;
  int v4;
  char *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  int v8;
  unsigned int v9;
  gameswf::Self **Class;
  gameswf::ASClass::Self *v11;
  gameswf::Self **v12;
  uint8_t *v14;
  int v15;
  int v16;
  int v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef uint8_t _g4_t_v20[15];
  typedef unsigned int _g4_t_v21;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v20)) > _g4_s2 ? (17u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v21)) > _g4_s3 ? (32u + sizeof(_g4_t_v21)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 17u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);

  sub_776320((gameswf::String::Self *)&v19, (gameswf::Self *)"gluic.extensions");
  v1 = opNew(0x44u);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v1, self);
  *(uint32_t *)(v1 + 40) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2091688);
  *(uint32_t *)(v1 + 44) = 0;
  v2 = v19;
  v3 = v19 == -1;
  *(uint8_t *)(v1 + 48) = 1;
  *(uint8_t *)(v1 + 49) = 0;
  if ( v3 )
    v4 = *(uint32_t *)&v20[3] - 1;
  else
    v4 = v2 - 1;
  gameswf::String::resize((gameswf::String::Self *)(v1 + 48), v4);
  LOBYTE(v5) = *(uint8_t *)(v1 + 48);
  v6 = (gameswf::Self *)v20;
  if ( v19 == -1 )
    v6 = *(gameswf::Self **)&v20[11];
  if ( (uint8_t)(uintptr_t)(v5) == 0xFF )
  {
    v5 = *(char **)(v1 + 52);
    v7 = *(gameswf::Self **)(v1 + 60);
  }
  else
  {
    v5 = (char *)(char)(uintptr_t)(v5);
    v7 = (gameswf::Self *)(v1 + 49);
  }
  gameswf::Strcpy_s(v7, v5, v6);
  if ( (uint8_t *)(v21 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( v19 == -1 )
    {
      v14 = *(uint8_t **)&v20[11];
      v15 = *(uint32_t *)&v20[3] - 1;
    }
    else
    {
      v14 = v20;
      v15 = v19 - 1;
    }
    v8 = 5381;
    if ( v15 > 0 )
    {
      v18 = v1;
      do
      {
        --v15;
        v16 = 33 * v8;
        v17 = (uint8_t)v14[v15] + 32;
        if ( (uint8_t)(v14[v15] - 65) > 0x19u )
          v17 = (uint8_t)v14[v15];
        v8 = v16 ^ v17;
      }
      while ( v15 != 0 );
      v1 = v18;
      v8 = v8 << 9 >> 9;
    }
    v21 = v8 & 0x7FFFFF | v21 & 0xFF800000;
  }
  else
  {
    v8 = (int)(v21 << 9) >> 9;
  }
  v9 = v8 & 0x7FFFFF | *(uint32_t *)(v1 + 64) & 0xFF800000;
  *(uint32_t *)(v1 + 64) = v9;
  *(uint8_t *)(v1 + 66) = BYTE2(v9) & 0x7F;
  *(uint8_t *)(v1 + 67) = HIBYTE(v9) | 1;
  sub_59CE50((int)(uintptr_t)(&v19));
  Class = gameswf::ASModel3D::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)Class);
  v11 = (gameswf::ASClass::Self *)(gameswf::ASParticleSystem::createClass((gameswf::ASParticleSystem::Self *)v1));
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, v11);
  v12 = gameswf::ASModel3DEvent::createClass((int **)self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v12);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::displayInitPackage  (binary VA: 0x11607d0)
// Original: gameswf::displayInitPackage
// ----------------------------------------------------------------------------
int gameswf::displayInitPackage(gameswf::Self *self)
{
  int v1;
  char v2;
  bool v3;
  int v4;
  char *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  int v8;
  unsigned int v9;
  gameswf::Self **Class;
  gameswf::Self **v11;
  gameswf::Self **v12;
  gameswf::Self **v13;
  gameswf::Self **v14;
  gameswf::Self **v15;
  gameswf::Self **v16;
  uint8_t *v18;
  int v19;
  int v20;
  int v21;
  typedef gameswf::Self **_g4_t_v22;
  typedef gameswf::Self **_g4_t_v23;
  typedef gameswf::Self **_g4_t_v24;
  typedef int _g4_t_v25;
  typedef gameswf::ASClass::Self *_g4_t_v26;
  typedef gameswf::ASClass::Self *_g4_t_v27;
  typedef gameswf::Self **_g4_t_v28;
  typedef gameswf::Self **_g4_t_v29;
  typedef gameswf::ASClass::Self *_g4_t_v30;
  typedef gameswf::ASClass::Self *_g4_t_v31;
  typedef uint8_t _g4_t_v32[12];
  typedef uint8_t _g4_t_v33[12];
  typedef uint8_t _g4_t_v34[12];
  typedef uint8_t _g4_t_v35[12];
  typedef uint8_t _g4_t_v36[12];
  typedef char _g4_t_v37;
  typedef uint8_t _g4_t_v38[15];
  typedef unsigned int _g4_t_v39;
  typedef uint8_t _g4_t_v40[20];
  typedef uint8_t _g4_t_v41[20];
  typedef uint8_t _g4_t_v42[20];
  typedef uint8_t _g4_t_v43[20];
  typedef uint8_t _g4_t_v44[20];
  typedef uint8_t _g4_t_v45[20];
  typedef uint8_t _g4_t_v46[20];
  typedef uint8_t _g4_t_v47[20];
  typedef uint8_t _g4_t_v48[20];
  typedef uint8_t _g4_t_v49[32];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v23)) > _g4_s1 ? (16u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v24)) > _g4_s2 ? (16u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v26)) > _g4_s4 ? (20u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v27)) > _g4_s5 ? (20u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v28)) > _g4_s6 ? (20u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v29)) > _g4_s7 ? (20u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v30)) > _g4_s8 ? (24u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v31)) > _g4_s9 ? (24u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v32)) > _g4_s10 ? (32u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v33)) > _g4_s11 ? (44u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v34)) > _g4_s12 ? (56u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v35)) > _g4_s13 ? (68u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v36)) > _g4_s14 ? (80u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v37)) > _g4_s15 ? (92u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (93u + sizeof(_g4_t_v38)) > _g4_s16 ? (93u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v39)) > _g4_s17 ? (108u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v40)) > _g4_s18 ? (116u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v41)) > _g4_s19 ? (136u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (156u + sizeof(_g4_t_v42)) > _g4_s20 ? (156u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (176u + sizeof(_g4_t_v43)) > _g4_s21 ? (176u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (196u + sizeof(_g4_t_v44)) > _g4_s22 ? (196u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (216u + sizeof(_g4_t_v45)) > _g4_s23 ? (216u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (236u + sizeof(_g4_t_v46)) > _g4_s24 ? (236u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (256u + sizeof(_g4_t_v47)) > _g4_s25 ? (256u + sizeof(_g4_t_v47)) : _g4_s25,
    _g4_s27 = (276u + sizeof(_g4_t_v48)) > _g4_s26 ? (276u + sizeof(_g4_t_v48)) : _g4_s26,
    _g4_s28 = (296u + sizeof(_g4_t_v49)) > _g4_s27 ? (296u + sizeof(_g4_t_v49)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 93u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 108u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 116u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 136u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 156u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 176u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 196u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 216u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 236u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 256u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 276u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 296u);

  sub_776320((gameswf::String::Self *)&v37, (gameswf::Self *)"flash.display");
  v1 = opNew(0x44u);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v1, self);
  *(uint32_t *)(v1 + 40) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2091688);
  *(uint32_t *)(v1 + 44) = 0;
  v2 = v37;
  v3 = v37 == -1;
  *(uint8_t *)(v1 + 48) = 1;
  *(uint8_t *)(v1 + 49) = 0;
  if ( v3 )
    v4 = *(uint32_t *)&v38[3] - 1;
  else
    v4 = v2 - 1;
  gameswf::String::resize((gameswf::String::Self *)(v1 + 48), v4);
  LOBYTE(v5) = *(uint8_t *)(v1 + 48);
  v6 = (gameswf::Self *)v38;
  if ( v37 == -1 )
    v6 = *(gameswf::Self **)&v38[11];
  if ( (uint8_t)(uintptr_t)(v5) == 0xFF )
  {
    v5 = *(char **)(v1 + 52);
    v7 = *(gameswf::Self **)(v1 + 60);
  }
  else
  {
    v5 = (char *)(char)(uintptr_t)(v5);
    v7 = (gameswf::Self *)(v1 + 49);
  }
  gameswf::Strcpy_s(v7, v5, v6);
  if ( (uint8_t *)(v39 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( v37 == -1 )
    {
      v18 = *(uint8_t **)&v38[11];
      v19 = *(uint32_t *)&v38[3] - 1;
    }
    else
    {
      v18 = v38;
      v19 = v37 - 1;
    }
    v8 = 5381;
    if ( v19 > 0 )
    {
      v25 = v1;
      do
      {
        --v19;
        v20 = 33 * v8;
        v21 = (uint8_t)v18[v19] + 32;
        if ( (uint8_t)(v18[v19] - 65) > 0x19u )
          v21 = (uint8_t)v18[v19];
        v8 = v20 ^ v21;
      }
      while ( v19 != 0 );
      v1 = v25;
      v8 = v8 << 9 >> 9;
    }
    v39 = v8 & 0x7FFFFF | v39 & 0xFF800000;
  }
  else
  {
    v8 = (int)(v39 << 9) >> 9;
  }
  v9 = v8 & 0x7FFFFF | *(uint32_t *)(v1 + 64) & 0xFF800000;
  *(uint32_t *)(v1 + 64) = v9;
  *(uint8_t *)(v1 + 66) = BYTE2(v9) & 0x7F;
  *(uint8_t *)(v1 + 67) = HIBYTE(v9) | 1;
  sub_59CE50((int)(uintptr_t)(&v37));
  sub_776320((gameswf::String::Self *)v40, (gameswf::Self *)"FrameLabel");
  v32[0] = 0;
  v32[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v32, (int)(uintptr_t)(gameswf::ASFrameLabel::init));
  v22 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v22,
    self,
    (const gameswf::String::Self *)v40,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASFrameLabel::newOp,
    (const gameswf::ASValue::Self *)v32,
    false);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v22);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v32);
  sub_59CE50((int)(uintptr_t)(v40));
  Class = gameswf::ASDisplayObject::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)Class);
  v11 = gameswf::ASDisplayObjectContainer::createClass((gameswf::ASDisplayObjectContainer::Self *)v1);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v11);
  sub_776320((gameswf::String::Self *)v41, (gameswf::Self *)"DisplayObjectContainer");
  v26 = (gameswf::ASClass::Self *)gameswf::ASPackage::findClass((gameswf::ASPackage::Self *)v1, (const gameswf::String::Self *)v41, true);
  sub_776320((gameswf::String::Self *)v42, (gameswf::Self *)"Sprite");
  v33[0] = 0;
  v33[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v33, (int)(uintptr_t)(gameswf::ASGenericCharacter::init));
  v23 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v23,
    self,
    v26,
    (const gameswf::String::Self *)v42,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASGenericCharacter::newOp,
    (const gameswf::ASValue::Self *)v33,
    nullptr);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v23);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v33);
  sub_59CE50((int)(uintptr_t)(v42));
  sub_59CE50((int)(uintptr_t)(v41));
  v12 = gameswf::ASMovieClip::createClass((gameswf::ASMovieClip::Self *)v1);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v12);
  v13 = gameswf::ASLoader::createClass((gameswf::ASLoader::Self *)v1);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v13);
  sub_776320((gameswf::String::Self *)v44, (gameswf::Self *)"EventDispatcher");
  sub_776320((gameswf::String::Self *)v43, (gameswf::Self *)"flash.events");
  v27 = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass(
                              (gameswf::Self *)((char *)self + 236),
                              (const gameswf::String::Self *)v43,
                              (const gameswf::String::Self *)v44,
                              true);
  sub_776320((gameswf::String::Self *)v45, (gameswf::Self *)"LoaderInfo");
  v34[0] = 0;
  v34[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v34, (int)(uintptr_t)(gameswf::ASLoaderInfo::init));
  v24 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v24,
    self,
    v27,
    (const gameswf::String::Self *)v45,
    gameswf::ASLoaderInfo::newOp,
    (const gameswf::ASValue::Self *)v34,
    nullptr);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v24);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v34);
  sub_59CE50((int)(uintptr_t)(v45));
  sub_59CE50((int)(uintptr_t)(v43));
  sub_59CE50((int)(uintptr_t)(v44));
  v14 = gameswf::ASStageAlign::createClass((int **)self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v14);
  sub_776320((gameswf::String::Self *)v46, (gameswf::Self *)"DisplayObjectContainer");
  v30 = (gameswf::ASClass::Self *)gameswf::ASPackage::findClass((gameswf::ASPackage::Self *)v1, (const gameswf::String::Self *)v46, true);
  sub_776320((gameswf::String::Self *)v47, (gameswf::Self *)"Stage");
  v35[0] = 0;
  v35[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v35, (int)(uintptr_t)(gameswf::ASStage::init));
  v28 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v28,
    self,
    v30,
    (const gameswf::String::Self *)v47,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASStage::newOp,
    (const gameswf::ASValue::Self *)v35,
    nullptr);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v28);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v35);
  sub_59CE50((int)(uintptr_t)(v47));
  sub_59CE50((int)(uintptr_t)(v46));
  v15 = gameswf::ASBitmapDataChannel::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v15);
  v16 = gameswf::ASBitmapData::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v16);
  sub_776320((gameswf::String::Self *)v48, (gameswf::Self *)"DisplayObject");
  v31 = (gameswf::ASClass::Self *)gameswf::ASPackage::findClass((gameswf::ASPackage::Self *)v1, (const gameswf::String::Self *)v48, true);
  sub_776320((gameswf::String::Self *)v49, (gameswf::Self *)"Bitmap");
  v36[0] = 0;
  v36[1] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v36, (int)(uintptr_t)(gameswf::ASBitmap::init));
  v29 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v29,
    self,
    v31,
    (const gameswf::String::Self *)v49,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))((int (*)(gameswf::ASBitmap::Self *))gameswf::ASBitmap::newOp),
    (const gameswf::ASValue::Self *)v36,
    nullptr);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v29);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v36);
  sub_59CE50((int)(uintptr_t)(v49));
  sub_59CE50((int)(uintptr_t)(v48));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::eventsInitPackage  (binary VA: 0x1167fe0)
// Original: gameswf::eventsInitPackage
// ----------------------------------------------------------------------------
int gameswf::eventsInitPackage(gameswf::Self *self)
{
  int v1;
  char v2;
  bool v3;
  int v4;
  char *v5;
  gameswf::Self *v6;
  gameswf::Self *v7;
  int v8;
  unsigned int v9;
  gameswf::Self **Class;
  gameswf::Self **v11;
  gameswf::Self **v12;
  gameswf::Self **v13;
  gameswf::Self **v14;
  gameswf::Self **v15;
  gameswf::Self **v16;
  gameswf::Self **v17;
  uint8_t *v19;
  int v20;
  int v21;
  int v22;
  typedef int _g4_t_v23;
  typedef char _g4_t_v24;
  typedef uint8_t _g4_t_v25[15];
  typedef unsigned int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v25)) > _g4_s2 ? (17u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v26)) > _g4_s3 ? (32u + sizeof(_g4_t_v26)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 17u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);

  sub_776320((gameswf::String::Self *)&v24, (gameswf::Self *)"flash.events");
  v1 = opNew(0x44u);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v1, self);
  *(uint32_t *)(v1 + 40) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2091688);
  *(uint32_t *)(v1 + 44) = 0;
  v2 = v24;
  v3 = v24 == -1;
  *(uint8_t *)(v1 + 48) = 1;
  *(uint8_t *)(v1 + 49) = 0;
  if ( v3 )
    v4 = *(uint32_t *)&v25[3] - 1;
  else
    v4 = v2 - 1;
  gameswf::String::resize((gameswf::String::Self *)(v1 + 48), v4);
  LOBYTE(v5) = *(uint8_t *)(v1 + 48);
  v6 = (gameswf::Self *)v25;
  if ( v24 == -1 )
    v6 = *(gameswf::Self **)&v25[11];
  if ( (uint8_t)(uintptr_t)(v5) == 0xFF )
  {
    v5 = *(char **)(v1 + 52);
    v7 = *(gameswf::Self **)(v1 + 60);
  }
  else
  {
    v5 = (char *)(char)(uintptr_t)(v5);
    v7 = (gameswf::Self *)(v1 + 49);
  }
  gameswf::Strcpy_s(v7, v5, v6);
  if ( (uint8_t *)(v26 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( v24 == -1 )
    {
      v19 = *(uint8_t **)&v25[11];
      v20 = *(uint32_t *)&v25[3] - 1;
    }
    else
    {
      v19 = v25;
      v20 = v24 - 1;
    }
    v8 = 5381;
    if ( v20 > 0 )
    {
      v23 = v1;
      do
      {
        --v20;
        v21 = 33 * v8;
        v22 = (uint8_t)v19[v20] + 32;
        if ( (uint8_t)(v19[v20] - 65) > 0x19u )
          v22 = (uint8_t)v19[v20];
        v8 = v21 ^ v22;
      }
      while ( v20 != 0 );
      v1 = v23;
      v8 = v8 << 9 >> 9;
    }
    v26 = v8 & 0x7FFFFF | v26 & 0xFF800000;
  }
  else
  {
    v8 = (int)(v26 << 9) >> 9;
  }
  v9 = v8 & 0x7FFFFF | *(uint32_t *)(v1 + 64) & 0xFF800000;
  *(uint32_t *)(v1 + 64) = v9;
  *(uint8_t *)(v1 + 66) = BYTE2(v9) & 0x7F;
  *(uint8_t *)(v1 + 67) = HIBYTE(v9) | 1;
  sub_59CE50((int)(uintptr_t)(&v24));
  Class = gameswf::ASEventPhase::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)Class);
  v11 = gameswf::ASEvent::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v11);
  v12 = gameswf::ASMouseEvent::createClass((gameswf::ASMouseEvent::Self *)v1);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v12);
  v13 = gameswf::ASKeyboardEvent::createClass((gameswf::ASKeyboardEvent::Self *)v1);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v13);
  v14 = gameswf::ASTimerEvent::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v14);
  v15 = gameswf::ASEventDispatcher::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v15);
  v16 = gameswf::ASNetStatusEvent::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v16);
  v17 = gameswf::ASFocusEvent::createClass((gameswf::ASFocusEvent::Self *)v1);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v1, (gameswf::ASClass::Self *)v17);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::createRectangle  (binary VA: 0x116e3b0)
// Original: gameswf::createRectangle
// ----------------------------------------------------------------------------
gameswf::ASRectangle::Self * gameswf::createRectangle(gameswf::Self *self)
{
  gameswf::Self *v1;
  gameswf::Self *v2;
  gameswf::ASRectangle::Self *Object;
  gameswf::ASRectangle::Self *v4;
  typedef char _g4_t_v6;
  typedef char _g4_t_v7;
  typedef gameswf::Self *_g4_t_v8;
  typedef int16_t _g4_t_v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef gameswf::Self *_g4_t_v14;
  typedef int16_t _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (1u + sizeof(_g4_t_v7)) > _g4_s1 ? (1u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v9)) > _g4_s3 ? (16u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (18u + sizeof(_g4_t_v10)) > _g4_s4 ? (18u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (19u + sizeof(_g4_t_v11)) > _g4_s5 ? (19u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v12)) > _g4_s6 ? (32u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (33u + sizeof(_g4_t_v13)) > _g4_s7 ? (33u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v14)) > _g4_s8 ? (44u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v15)) > _g4_s9 ? (48u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (50u + sizeof(_g4_t_v16)) > _g4_s10 ? (50u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (51u + sizeof(_g4_t_v17)) > _g4_s11 ? (51u + sizeof(_g4_t_v17)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 1u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 18u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 19u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 33u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 50u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 51u);

  if ( *((uint8_t *)self + 232) != 0 )
  {
    v12 = 1;
    v13 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v12, 9);
    v1 = (gameswf::Self *)&v13;
    if ( v12 == -1 )
      v1 = v14;
    gameswf::Strcpy_s(v1, &byte_9[1], (gameswf::Self *)"Rectangle");
    v6 = 1;
    v15 = -1;
    v7 = 0;
    v16 = 127;
    v17 |= 1u;
    gameswf::String::resize((gameswf::String::Self *)&v6, 10);
    v2 = (gameswf::Self *)&v7;
    if ( v6 == -1 )
      v2 = v8;
    gameswf::Strcpy_s(v2, &byte_9[2], (gameswf::Self *)"flash.geom");
    v9 = -1;
    v10 = 127;
    v11 |= 1u;
    Object = (gameswf::ASRectangle::Self *)gameswf::ASClassManager::createObject(
                                       (gameswf::Self *)((char *)self + 236),
                                       (const gameswf::String::Self *)&v6,
                                       (const gameswf::String::Self *)&v12);
    v4 = Object;
    if ( Object != nullptr
      && G4_VCALL<uint8_t>(Object, 8, 63) == 0 )
    {
      v4 = nullptr;
    }
    if ( v6 == -1 && (v11 & 1) != 0 )
      gameswf::free_internal(v8);
    if ( v12 == -1 && (v17 & 1) != 0 )
      gameswf::free_internal(v14);
  }
  else
  {
    v4 = (gameswf::ASRectangle::Self *)opNew(0x38u);
    gameswf::ASRectangle::Construct(v4, self);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gameswf::geomInitPackage  (binary VA: 0x116e710)
// Original: gameswf::geomInitPackage
// ----------------------------------------------------------------------------
int gameswf::geomInitPackage(gameswf::Self *self)
{
  gameswf::Self *v1;
  int v2;
  char v3;
  bool v4;
  int v5;
  char *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  int v9;
  unsigned int v10;
  gameswf::Self **Class;
  gameswf::Self *v12;
  unsigned int v13;
  gameswf::Self *v14;
  unsigned int v15;
  gameswf::Self *v16;
  unsigned int v17;
  gameswf::Self *v18;
  unsigned int v19;
  gameswf::Self *v21;
  int v22;
  int v23;
  int v24;
  typedef gameswf::Self **_g4_t_v25;
  typedef gameswf::Self **_g4_t_v26;
  typedef gameswf::Self **_g4_t_v27;
  typedef gameswf::Self **_g4_t_v28;
  typedef int _g4_t_v29;
  typedef char _g4_t_v30;
  typedef uint8_t _g4_t_v31[12];
  typedef uint8_t _g4_t_v32[12];
  typedef uint8_t _g4_t_v33[12];
  typedef uint8_t _g4_t_v34[12];
  typedef char _g4_t_v35;
  typedef uint8_t _g4_t_v36[3];
  typedef int _g4_t_v37;
  typedef gameswf::Self *_g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef gameswf::Self *_g4_t_v42;
  typedef unsigned int _g4_t_v43;
  typedef char _g4_t_v44;
  typedef char _g4_t_v45;
  typedef gameswf::Self *_g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef gameswf::Self *_g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef char _g4_t_v52;
  typedef char _g4_t_v53;
  typedef gameswf::Self *_g4_t_v54;
  typedef unsigned int _g4_t_v55;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v26)) > _g4_s1 ? (0u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v27)) > _g4_s2 ? (0u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v28)) > _g4_s3 ? (0u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v29)) > _g4_s4 ? (4u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (14u + sizeof(_g4_t_v30)) > _g4_s5 ? (14u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v31)) > _g4_s6 ? (16u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v32)) > _g4_s7 ? (28u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v33)) > _g4_s8 ? (40u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v34)) > _g4_s9 ? (52u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v35)) > _g4_s10 ? (64u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (65u + sizeof(_g4_t_v36)) > _g4_s11 ? (65u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v37)) > _g4_s12 ? (68u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v38)) > _g4_s13 ? (76u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v39)) > _g4_s14 ? (80u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v40)) > _g4_s15 ? (96u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (97u + sizeof(_g4_t_v41)) > _g4_s16 ? (97u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v42)) > _g4_s17 ? (108u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v43)) > _g4_s18 ? (112u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v44)) > _g4_s19 ? (128u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (129u + sizeof(_g4_t_v45)) > _g4_s20 ? (129u + sizeof(_g4_t_v45)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v46)) > _g4_s21 ? (140u + sizeof(_g4_t_v46)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v47)) > _g4_s22 ? (144u + sizeof(_g4_t_v47)) : _g4_s22,
    _g4_s24 = (160u + sizeof(_g4_t_v48)) > _g4_s23 ? (160u + sizeof(_g4_t_v48)) : _g4_s23,
    _g4_s25 = (161u + sizeof(_g4_t_v49)) > _g4_s24 ? (161u + sizeof(_g4_t_v49)) : _g4_s24,
    _g4_s26 = (172u + sizeof(_g4_t_v50)) > _g4_s25 ? (172u + sizeof(_g4_t_v50)) : _g4_s25,
    _g4_s27 = (176u + sizeof(_g4_t_v51)) > _g4_s26 ? (176u + sizeof(_g4_t_v51)) : _g4_s26,
    _g4_s28 = (192u + sizeof(_g4_t_v52)) > _g4_s27 ? (192u + sizeof(_g4_t_v52)) : _g4_s27,
    _g4_s29 = (193u + sizeof(_g4_t_v53)) > _g4_s28 ? (193u + sizeof(_g4_t_v53)) : _g4_s28,
    _g4_s30 = (204u + sizeof(_g4_t_v54)) > _g4_s29 ? (204u + sizeof(_g4_t_v54)) : _g4_s29,
    _g4_s31 = (208u + sizeof(_g4_t_v55)) > _g4_s30 ? (208u + sizeof(_g4_t_v55)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 14u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 65u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 97u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 108u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 128u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 129u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 140u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 144u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 160u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 161u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 172u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 176u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 192u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 193u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 204u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 208u);

  v35 = 1;
  v36[0] = 0;
  gameswf::String::resize((gameswf::String::Self *)&v35, 10);
  v1 = (gameswf::Self *)v36;
  if ( v35 == -1 )
    v1 = v38;
  gameswf::Strcpy_s(v1, &byte_9[2], (gameswf::Self *)"flash.geom");
  LOWORD(v39) = -1;
  BYTE2(v39) = 127;
  HIBYTE(v39) |= 1u;
  v2 = opNew(0x44u);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v2, self);
  *(uint32_t *)(v2 + 40) = 0;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2091688);
  *(uint32_t *)(v2 + 44) = 0;
  v3 = v35;
  v4 = v35 == -1;
  *(uint8_t *)(v2 + 48) = 1;
  *(uint8_t *)(v2 + 49) = 0;
  if ( v4 )
    v5 = v37 - 1;
  else
    v5 = v3 - 1;
  gameswf::String::resize((gameswf::String::Self *)(v2 + 48), v5);
  LOBYTE(v6) = *(uint8_t *)(v2 + 48);
  v7 = (gameswf::Self *)v36;
  if ( v35 == -1 )
    v7 = v38;
  if ( (uint8_t)(uintptr_t)(v6) == 0xFF )
  {
    v6 = *(char **)(v2 + 52);
    v8 = *(gameswf::Self **)(v2 + 60);
  }
  else
  {
    v6 = (char *)(char)(uintptr_t)(v6);
    v8 = (gameswf::Self *)(v2 + 49);
  }
  gameswf::Strcpy_s(v8, v6, v7);
  if ( (uint8_t *)(v39 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v30 = v35;
    if ( v35 == -1 )
    {
      v21 = v38;
      v22 = v37 - 1;
    }
    else
    {
      v21 = (gameswf::Self *)v36;
      v22 = v35 - 1;
    }
    v9 = 5381;
    if ( v22 > 0 )
    {
      v29 = v2;
      do
      {
        --v22;
        v23 = 33 * v9;
        v24 = *((uint8_t *)v21 + v22) + 32;
        if ( (uint8_t)(*((uint8_t *)v21 + v22) - 65) > 0x19u )
          v24 = *((uint8_t *)v21 + v22);
        v9 = v23 ^ v24;
      }
      while ( v22 != 0 );
      v2 = v29;
      v9 = v9 << 9 >> 9;
    }
    v39 = v9 & 0x7FFFFF | v39 & 0xFF800000;
  }
  else
  {
    v30 = v35;
    v9 = (int)(v39 << 9) >> 9;
  }
  v10 = v9 & 0x7FFFFF | *(uint32_t *)(v2 + 64) & 0xFF800000;
  *(uint32_t *)(v2 + 64) = v10;
  *(uint8_t *)(v2 + 66) = BYTE2(v10) & 0x7F;
  *(uint8_t *)(v2 + 67) = HIBYTE(v10) | 1;
  if ( v30 == -1 && (v39 & 0x1000000) != 0 )
    gameswf::free_internal(v38);
  Class = gameswf::ASRectangle::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v2, (gameswf::ASClass::Self *)Class);
  v40 = 1;
  v41 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v40, 5);
  v12 = (gameswf::Self *)&v41;
  if ( v40 == -1 )
    v12 = v42;
  gameswf::Strcpy_s(v12, (char *)&loc_6, (gameswf::Self *)"Point");
  v31[0] = 0;
  v31[1] = 0;
  v43 |= 0x7FFFFFu;
  v13 = HIWORD(v43);
  HIBYTE(v43) |= 1u;
  BYTE2(v43) = v13 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v31, (int)(uintptr_t)(gameswf::ASPoint::init));
  v25 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v25,
    self,
    (const gameswf::String::Self *)&v40,
    gameswf::ASPoint::newOp,
    (const gameswf::ASValue::Self *)v31,
    true);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v2, (gameswf::ASClass::Self *)v25);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v31);
  if ( v40 == -1 && (v43 & 0x1000000) != 0 )
    gameswf::free_internal(v42);
  v44 = 1;
  v45 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v44, 14);
  v14 = (gameswf::Self *)&v45;
  if ( v44 == -1 )
    v14 = v46;
  gameswf::Strcpy_s(v14, &byte_9[6], (gameswf::Self *)"ColorTransform");
  v32[0] = 0;
  v32[1] = 0;
  v47 |= 0x7FFFFFu;
  v15 = HIWORD(v47);
  HIBYTE(v47) |= 1u;
  BYTE2(v47) = v15 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v32, (int)(uintptr_t)(gameswf::ASColorTransform::init));
  v26 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v26,
    self,
    (const gameswf::String::Self *)&v44,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASColorTransform::newOp,
    (const gameswf::ASValue::Self *)v32,
    true);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v2, (gameswf::ASClass::Self *)v26);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v32);
  if ( v44 == -1 && (v47 & 0x1000000) != 0 )
    gameswf::free_internal(v46);
  v48 = 1;
  v49 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v48, 6);
  v16 = (gameswf::Self *)&v49;
  if ( v48 == -1 )
    v16 = v50;
  gameswf::Strcpy_s(v16, (char *)&loc_6 + 1, (gameswf::Self *)"Matrix");
  v33[0] = 0;
  v33[1] = 0;
  v51 |= 0x7FFFFFu;
  v17 = HIWORD(v51);
  HIBYTE(v51) |= 1u;
  BYTE2(v51) = v17 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v33, (int)(uintptr_t)(gameswf::ASMatrix::init));
  v27 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v27,
    self,
    (const gameswf::String::Self *)&v48,
    gameswf::ASMatrix::newOp,
    (const gameswf::ASValue::Self *)v33,
    true);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v2, (gameswf::ASClass::Self *)v27);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v33);
  if ( v48 == -1 && (v51 & 0x1000000) != 0 )
    gameswf::free_internal(v50);
  v52 = 1;
  v53 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v52, 9);
  v18 = (gameswf::Self *)&v53;
  if ( v52 == -1 )
    v18 = v54;
  gameswf::Strcpy_s(v18, &byte_9[1], (gameswf::Self *)"Transform");
  v34[0] = 0;
  v34[1] = 0;
  v55 |= 0x7FFFFFu;
  v19 = HIWORD(v55);
  HIBYTE(v55) |= 1u;
  BYTE2(v55) = v19 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v34, (int)(uintptr_t)((void (*)(void))gameswf::ASTransform::init));
  v28 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v28,
    self,
    (const gameswf::String::Self *)&v52,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASTransform::newOp,
    (const gameswf::ASValue::Self *)v34,
    false);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v2, (gameswf::ASClass::Self *)v28);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v34);
  if ( v52 != -1 || (v55 & 0x1000000) == 0 )
    return v2;
  gameswf::free_internal(v54);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getTimer  (binary VA: 0x116efe0)
// Original: gameswf::getTimer
// ----------------------------------------------------------------------------
int gameswf::getTimer(gameswf::ASValue::Self **a1)
{
  double v1; // xmm0_8
  int v3;
  g4_cxa_guard_t *v4;

  if ( byte_2115890 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2115890) != 0 )
  {
    dword_2115898 = gameswf::timer::getMilliseconds((gameswf::timer::Self *)v4);
    dword_211589C = v3;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2115890);
  }
  v1 = (double)(gameswf::timer::getMilliseconds((gameswf::timer::Self *)v4) - dword_2115898);
  return gameswf::ASValue::setDouble(*a1, v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::splitFullClassName  (binary VA: 0x116f5c0)
// Original: gameswf::splitFullClassName
// ----------------------------------------------------------------------------
int gameswf::splitFullClassName(gameswf::Self *self, gameswf::Self **a2, gameswf::Self **a3)
{
  const char *v3;
  size_t v4;
  char *v5;
  char *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  char v9;
  int v10;
  gameswf::Self *v11;
  char *v12;
  gameswf::Self *v13;
  int v14;
  int result;
  char *v16;
  size_t v17;
  char *v18;
  gameswf::Self *v19;
  gameswf::Self *v20;
  int v21;
  int v22;
  int v23;
  typedef char _g4_t_v24;
  typedef const void *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef uint8_t _g4_t_v29[3];
  typedef int _g4_t_v30;
  typedef gameswf::Self *_g4_t_v31;
  typedef unsigned int _g4_t_v32;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v25)) > _g4_s1 ? (0u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v26)) > _g4_s2 ? (8u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (14u + sizeof(_g4_t_v27)) > _g4_s3 ? (14u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (17u + sizeof(_g4_t_v29)) > _g4_s5 ? (17u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v30)) > _g4_s6 ? (20u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v31)) > _g4_s7 ? (28u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v32)) > _g4_s8 ? (32u + sizeof(_g4_t_v32)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 14u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 17u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);

  v3 = (char *)self + 1;
  if ( *(uint8_t *)self == 0xFF )
    v3 = *((const char **)self + 3);
  v24 = *(uint8_t *)self;
  v4 = 0;
  v26 = (char *)(strrchr(v3, 46));
  if ( v26 != nullptr )
  {
    if ( v24 == -1 )
      v5 = *((char **)self + 3);
    else
      v5 = (char *)self + 1;
    v4 = v26 - v5;
  }
  if ( v24 == -1 )
    v6 = *((char **)self + 3);
  else
    v6 = (char *)self + 1;
  v28 = 1;
  v29[0] = 0;
  if ( v6 == nullptr )
  {
    LOWORD(v32) = -1;
    BYTE2(v32) = 127;
    HIBYTE(v32) |= 1u;
    v9 = 1;
LABEL_15:
    v10 = v9 - 1;
    goto LABEL_16;
  }
  v25 = v6;
  v7 = (gameswf::Self *)v29;
  gameswf::String::resize((gameswf::String::Self *)&v28, v4);
  v8 = (gameswf::Self *)v29;
  if ( v28 == -1 )
    v8 = v31;
  memcpy(v8, v25, v4);
  if ( v28 == -1 )
    v7 = v31;
  *((uint8_t *)v7 + v4) = 0;
  LOWORD(v32) = -1;
  v9 = v28;
  BYTE2(v32) = 127;
  HIBYTE(v32) |= 1u;
  if ( v28 != -1 )
    goto LABEL_15;
  v10 = v30 - 1;
LABEL_16:
  gameswf::String::resize((gameswf::String::Self *)a2, v10);
  v11 = (gameswf::Self *)v29;
  if ( v28 == -1 )
    v11 = v31;
  LOBYTE(v12) = *(uint8_t *)a2;
  if ( *(uint8_t *)a2 == 0xFF )
  {
    v12 = (char *)a2[1];
    v13 = a2[3];
  }
  else
  {
    v12 = (char *)(char)(uintptr_t)(v12);
    v13 = (gameswf::Self *)((char *)a2 + 1);
  }
  gameswf::Strcpy_s(v13, v12, v11);
  if ( (uint8_t *)(v32 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v27 = v28;
    if ( v28 == -1 )
    {
      v20 = v31;
      v21 = v30 - 1;
    }
    else
    {
      v20 = (gameswf::Self *)v29;
      v21 = v28 - 1;
    }
    v14 = 5381;
    if ( v21 > 0 )
    {
      do
      {
        --v21;
        v22 = 33 * v14;
        v23 = *((uint8_t *)v20 + v21) + 32;
        if ( (uint8_t)(*((uint8_t *)v20 + v21) - 65) > 0x19u )
          v23 = *((uint8_t *)v20 + v21);
        v14 = v22 ^ v23;
      }
      while ( v21 != 0 );
      v14 = v14 << 9 >> 9;
    }
    v32 = v14 & 0x7FFFFF | v32 & 0xFF800000;
  }
  else
  {
    v27 = v28;
    v14 = (int)(v32 << 9) >> 9;
  }
  result = v14 & 0x7FFFFF;
  a2[4] = (gameswf::Self *)(result | (unsigned int)(uintptr_t)(a2[4]) & 0xFF800000);
  if ( v27 != -1 || (v32 & 0x1000000) == 0 )
  {
    if ( v26 == nullptr )
      goto LABEL_43;
LABEL_24:
    v16 = v26 + 1;
    goto LABEL_25;
  }
  result = gameswf::free_internal(v31);
  if ( v26 != nullptr )
    goto LABEL_24;
LABEL_43:
  v16 = (char *)self + 1;
  if ( *(uint8_t *)self == 0xFF )
    v16 = *((char **)self + 3);
LABEL_25:
  if ( v16 != nullptr )
  {
    v17 = strlen(v16);
    gameswf::String::resize((gameswf::String::Self *)a3, v17);
    LOBYTE(v18) = *(uint8_t *)a3;
    if ( *(uint8_t *)a3 == 0xFF )
    {
      v18 = (char *)a3[1];
      v19 = a3[3];
    }
    else
    {
      v18 = (char *)(char)(uintptr_t)(v18);
      v19 = (gameswf::Self *)((char *)a3 + 1);
    }
    result = gameswf::Strcpy_s(v19, v18, (gameswf::Self *)v16);
    a3[4] = (gameswf::Self *)((unsigned int)(uintptr_t)(a3[4]) | 0x7FFFFF);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getDefinitionByName  (binary VA: 0x116f920)
// Original: gameswf::getDefinitionByName
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::getDefinitionByName(int a1)
{
  int v1;
  gameswf::Self *v2;
  int v3;
  int v4;
  gameswf::Self *v5;
  gameswf::ASObject::Self *Class;
  gameswf::RefCounted::Self *result;
  int v9;
  typedef gameswf::Self *_g4_t_v10[4];
  typedef int16_t _g4_t_v11;
  typedef int16_t _g4_t_v12;
  typedef unsigned int _g4_t_v13[4];
  typedef int16_t _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (18u + sizeof(_g4_t_v12)) > _g4_s2 ? (18u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v14)) > _g4_s4 ? (48u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (50u + sizeof(_g4_t_v15)) > _g4_s5 ? (50u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (51u + sizeof(_g4_t_v16)) > _g4_s6 ? (51u + sizeof(_g4_t_v16)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 18u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 50u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 51u);

  LOWORD(v10[0]) = 1;
  v11 = -1;
  LOWORD(v13[0]) = 1;
  HIBYTE(v12) = ((uint16_t)(v12 | 0x7F) >> 8) | 1;
  v14 = -1;
  LOBYTE(v12) = 127;
  v15 = 127;
  v16 |= 1u;
  v1 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v1 == 3 || *(uint8_t *)v1 == 4 )
  {
    v2 = *(gameswf::Self **)(v1 + 4);
  }
  else
  {
    v2 = (gameswf::Self *)&byte_20D6378;
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v9 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v9;
      BYTE2(dword_20D6388) = BYTE2(v9) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v9) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  gameswf::splitFullClassName(v2, v10, (gameswf::Self **)v13);
  v3 = *(uint32_t *)(a1 + 12);
  v4 = *(uint32_t *)(v3 + 212);
  if ( v4 != 0 )
  {
    v5 = *(gameswf::Self **)(v3 + 208);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      if ( (*(uint16_t *)v5)-- == 1 )
        gameswf::free_internal(v5);
      *(uint32_t *)(v3 + 208) = 0;
      *(uint32_t *)(v3 + 212) = 0;
      v4 = 0;
    }
  }
  Class = (gameswf::ASObject::Self *)gameswf::ASClassManager::findClass(
                                 (gameswf::ASClassManager::Self *)(v4 + 236),
                                 (const gameswf::String::Self *)v10,
                                 (const gameswf::String::Self *)v13,
                                 true);
  result = gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, Class);
  if ( LOBYTE(v13[0]) == 0xFF && (v16 & 1) != 0 )
    result = (gameswf::RefCounted::Self *)gameswf::free_internal((gameswf::Self *)v13[3]);
  if ( LOBYTE(v10[0]) == 0xFF && (v12 & 0x100) != 0 )
    return (gameswf::RefCounted::Self *)gameswf::free_internal(v10[3]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::utilsInitPackage  (binary VA: 0x116fb50)
// Original: gameswf::utilsInitPackage
// ----------------------------------------------------------------------------
int gameswf::utilsInitPackage(gameswf::Self *self)
{
  gameswf::Self *v1;
  int v2;
  char v3;
  bool v4;
  int v5;
  char *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  int v9;
  unsigned int v10;
  gameswf::Self **Class;
  gameswf::Self *v12;
  unsigned int v13;
  gameswf::Self *v14;
  gameswf::Self *v15;
  gameswf::Self *v17;
  int v18;
  int v19;
  int v20;
  typedef gameswf::Self **_g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23;
  typedef uint8_t _g4_t_v24[12];
  typedef uint16_t _g4_t_v25[6];
  typedef uint16_t _g4_t_v26[6];
  typedef char _g4_t_v27;
  typedef uint8_t _g4_t_v28[3];
  typedef int _g4_t_v29;
  typedef gameswf::Self *_g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef gameswf::Self *_g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef gameswf::Self *_g4_t_v38;
  typedef int16_t _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef gameswf::Self *_g4_t_v44;
  typedef int16_t _g4_t_v45;
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (18u + sizeof(_g4_t_v23)) > _g4_s2 ? (18u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v24)) > _g4_s3 ? (32u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v25)) > _g4_s4 ? (44u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v26)) > _g4_s5 ? (56u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v27)) > _g4_s6 ? (68u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (69u + sizeof(_g4_t_v28)) > _g4_s7 ? (69u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v29)) > _g4_s8 ? (72u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v30)) > _g4_s9 ? (80u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v31)) > _g4_s10 ? (84u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v32)) > _g4_s11 ? (100u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (101u + sizeof(_g4_t_v33)) > _g4_s12 ? (101u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v34)) > _g4_s13 ? (112u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (116u + sizeof(_g4_t_v35)) > _g4_s14 ? (116u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (132u + sizeof(_g4_t_v36)) > _g4_s15 ? (132u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (133u + sizeof(_g4_t_v37)) > _g4_s16 ? (133u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (144u + sizeof(_g4_t_v38)) > _g4_s17 ? (144u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (148u + sizeof(_g4_t_v39)) > _g4_s18 ? (148u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (150u + sizeof(_g4_t_v40)) > _g4_s19 ? (150u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (151u + sizeof(_g4_t_v41)) > _g4_s20 ? (151u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v42)) > _g4_s21 ? (164u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (165u + sizeof(_g4_t_v43)) > _g4_s22 ? (165u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (176u + sizeof(_g4_t_v44)) > _g4_s23 ? (176u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (180u + sizeof(_g4_t_v45)) > _g4_s24 ? (180u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (182u + sizeof(_g4_t_v46)) > _g4_s25 ? (182u + sizeof(_g4_t_v46)) : _g4_s25,
    _g4_s27 = (183u + sizeof(_g4_t_v47)) > _g4_s26 ? (183u + sizeof(_g4_t_v47)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 18u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 69u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 100u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 101u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 116u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 132u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 133u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 144u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 148u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 150u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 151u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 164u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 165u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 176u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 180u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 182u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 183u);

  v27 = 1;
  v28[0] = 0;
  gameswf::String::resize((gameswf::String::Self *)&v27, 11);
  v1 = (gameswf::Self *)v28;
  if ( v27 == -1 )
    v1 = v30;
  gameswf::Strcpy_s(v1, &byte_9[3], (gameswf::Self *)"flash.utils");
  LOWORD(v31) = -1;
  BYTE2(v31) = 127;
  HIBYTE(v31) |= 1u;
  v2 = opNew(0x44u);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v2, self);
  *(uint32_t *)(v2 + 40) = 0;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2091688);
  *(uint32_t *)(v2 + 44) = 0;
  v3 = v27;
  v4 = v27 == -1;
  *(uint8_t *)(v2 + 48) = 1;
  *(uint8_t *)(v2 + 49) = 0;
  if ( v4 )
    v5 = v29 - 1;
  else
    v5 = v3 - 1;
  gameswf::String::resize((gameswf::String::Self *)(v2 + 48), v5);
  LOBYTE(v6) = *(uint8_t *)(v2 + 48);
  v7 = (gameswf::Self *)v28;
  if ( v27 == -1 )
    v7 = v30;
  if ( (uint8_t)(uintptr_t)(v6) == 0xFF )
  {
    v6 = *(char **)(v2 + 52);
    v8 = *(gameswf::Self **)(v2 + 60);
  }
  else
  {
    v6 = (char *)(char)(uintptr_t)(v6);
    v8 = (gameswf::Self *)(v2 + 49);
  }
  gameswf::Strcpy_s(v8, v6, v7);
  if ( (uint8_t *)(v31 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v23 = v27;
    if ( v27 == -1 )
    {
      v17 = v30;
      v18 = v29 - 1;
    }
    else
    {
      v17 = (gameswf::Self *)v28;
      v18 = v27 - 1;
    }
    v9 = 5381;
    if ( v18 > 0 )
    {
      v22 = v2;
      do
      {
        --v18;
        v19 = 33 * v9;
        v20 = *((uint8_t *)v17 + v18) + 32;
        if ( (uint8_t)(*((uint8_t *)v17 + v18) - 65) > 0x19u )
          v20 = *((uint8_t *)v17 + v18);
        v9 = v19 ^ v20;
      }
      while ( v18 != 0 );
      v2 = v22;
      v9 = v9 << 9 >> 9;
    }
    v31 = v9 & 0x7FFFFF | v31 & 0xFF800000;
  }
  else
  {
    v23 = v27;
    v9 = (int)(v31 << 9) >> 9;
  }
  v10 = v9 & 0x7FFFFF | *(uint32_t *)(v2 + 64) & 0xFF800000;
  *(uint32_t *)(v2 + 64) = v10;
  *(uint8_t *)(v2 + 66) = BYTE2(v10) & 0x7F;
  *(uint8_t *)(v2 + 67) = HIBYTE(v10) | 1;
  if ( v23 == -1 && (v31 & 0x1000000) != 0 )
    gameswf::free_internal(v30);
  Class = gameswf::ASTimer::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v2, (gameswf::ASClass::Self *)Class);
  v32 = 1;
  v33 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v32, 10);
  v12 = (gameswf::Self *)&v33;
  if ( v32 == -1 )
    v12 = v34;
  gameswf::Strcpy_s(v12, &byte_9[2], (gameswf::Self *)"Dictionary");
  v24[0] = 0;
  v24[1] = 0;
  v35 |= 0x7FFFFFu;
  v13 = HIWORD(v35);
  HIBYTE(v35) |= 1u;
  BYTE2(v35) = v13 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v24, (int)(uintptr_t)(gameswf::ASDictionary::init));
  v21 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v21,
    self,
    (const gameswf::String::Self *)&v32,
    gameswf::ASDictionary::newOp,
    (const gameswf::ASValue::Self *)v24,
    false);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v2, (gameswf::ASClass::Self *)v21);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v24);
  if ( v32 == -1 && (v35 & 0x1000000) != 0 )
    gameswf::free_internal(v34);
  v25[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v25, (int)(uintptr_t)(gameswf::getTimer));
  v36 = 1;
  v37 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v36, 8);
  v14 = (gameswf::Self *)&v37;
  if ( v36 == -1 )
    v14 = v38;
  gameswf::Strcpy_s(v14, byte_9, (gameswf::Self *)"getTimer");
  v39 = -1;
  v40 = 127;
  v41 |= 1u;
  gameswf::ASPackage::registerFunction(
    (gameswf::ASPackage::Self *)v2,
    (const gameswf::String::Self *)&v36,
    (const gameswf::ASValue::Self *)v25);
  if ( v36 == -1 && (v41 & 1) != 0 )
    gameswf::free_internal(v38);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v25);
  v26[0] = 0;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v26, (int)(uintptr_t)(gameswf::getDefinitionByName));
  v42 = 1;
  v43 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v42, 19);
  v15 = (gameswf::Self *)&v43;
  if ( v42 == -1 )
    v15 = v44;
  gameswf::Strcpy_s(v15, (char *)&dword_14, (gameswf::Self *)"getDefinitionByName");
  v45 = -1;
  v46 = 127;
  v47 |= 1u;
  gameswf::ASPackage::registerFunction(
    (gameswf::ASPackage::Self *)v2,
    (const gameswf::String::Self *)&v42,
    (const gameswf::ASValue::Self *)v26);
  if ( v42 == -1 && (v47 & 1) != 0 )
    gameswf::free_internal(v44);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v26);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::buffered_write  (binary VA: 0x11727f0)
// Original: gameswf::buffered_write
// ----------------------------------------------------------------------------
int gameswf::buffered_write()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::buffered_seek  (binary VA: 0x1172800)
// Original: gameswf::buffered_seek
// ----------------------------------------------------------------------------
char * gameswf::buffered_seek(gameswf::Self *self, uint32_t **a2)
{
  char *v2;
  char *v3;
  int v4;
  char *v5;

  v2 = (char *)a2[1026];
  v3 = (char *)a2[1027];
  if ( v2 != nullptr || v3 != nullptr )
  {
    v4 = (int)(uintptr_t)(a2[1025]);
    if ( (int)(uintptr_t)(self) < v4
      || (v5 = (char *)(self - (gameswf::Self *)&v3[v4]), v3 = (char *)self - v4, (unsigned int)(uintptr_t)(self) - v4 > 0xFFF) )
    {
      v3 = nullptr;
      ((void (*)(gameswf::Self *, uint32_t))(*a2)[4])(self, **a2);
      v4 = ((int (*)(uint32_t))(*a2)[6])(**a2);
      a2[1025] = (uint32_t *)v4;
      a2[1026] = nullptr;
      a2[1027] = nullptr;
    }
    else
    {
      a2[1027] = (uint32_t *)(v3);
      a2[1026] = (uint32_t *)(v2 - v5);
    }
  }
  else
  {
    ((void (*)(gameswf::Self *, uint32_t))(*a2)[4])(self, **a2);
    v4 = ((int (*)(uint32_t))(*a2)[6])(**a2);
    a2[1025] = (uint32_t *)v4;
    a2[1026] = nullptr;
    a2[1027] = nullptr;
  }
  return &v3[v4];
}

// ----------------------------------------------------------------------------
// Function: gameswf::buffered_seek_to_end  (binary VA: 0x11728f0)
// Original: gameswf::buffered_seek_to_end
// ----------------------------------------------------------------------------
int gameswf::buffered_seek_to_end(gameswf::Self *self)
{
  (*(void (**)(uint32_t))(*(uint32_t *)self + 20))(**(uint32_t **)self);
  *((uint32_t *)self + 1025) = (*(int (**)(uint32_t))(*(uint32_t *)self + 24))(**(uint32_t **)self);
  *((uint32_t *)self + 1026) = 0;
  *((uint32_t *)self + 1027) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::buffered_tell  (binary VA: 0x1172930)
// Original: gameswf::buffered_tell
// ----------------------------------------------------------------------------
int gameswf::buffered_tell(gameswf::Self *self)
{
  return *((uint32_t *)self + 1027) + *((uint32_t *)self + 1025);
}

// ----------------------------------------------------------------------------
// Function: gameswf::buffered_get_eof  (binary VA: 0x1172950)
// Original: gameswf::buffered_get_eof
// ----------------------------------------------------------------------------
int gameswf::buffered_get_eof(gameswf::Self *self)
{
  char v1;
  int v2;

  v1 = (*(int (**)(uint32_t))(*(uint32_t *)self + 28))(**(uint32_t **)self);
  v2 = 0;
  if ( v1 != 0 )
    LOBYTE(v2) = *((uint32_t *)self + 1026) == 0;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::buffered_close  (binary VA: 0x11729d0)
// Original: gameswf::buffered_close
// ----------------------------------------------------------------------------
int gameswf::buffered_close(gameswf::Self *self)
{
  if ( self != nullptr )
    gameswf::free_internal(self);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::buffered_read  (binary VA: 0x1172a00)
// Original: gameswf::buffered_read
// ----------------------------------------------------------------------------
int gameswf::buffered_read(gameswf::Self *self, char *a2, uint32_t **a3)
{
  char *v3;
  int v4;
  uint32_t *v5;
  size_t n;
  int v9;

  v3 = a2;
  v9 = 0;
  if ( (int)(uintptr_t)(a2) > 0 )
  {
    v4 = (int)(uintptr_t)(a3[1026]);
    do
    {
      if ( v4 != 0 )
      {
        v5 = a3[1027];
      }
      else
      {
        a3[1025] = (uint32_t *)((int (*)(uint32_t))(*a3)[6])(**a3);
        v4 = ((int (*)(uint32_t **, int, uint32_t))(*a3)[2])(a3 + 1, 4096, **a3);
        a3[1026] = (uint32_t *)v4;
        a3[1027] = nullptr;
        if ( v4 == 0 )
          return v9;
        v5 = nullptr;
      }
      n = (size_t)v3;
      if ( v4 <= (int)(uintptr_t)(v3) )
        n = v4;
      v3 -= n;
      memcpy(self, (char *)v5 + (uint32_t)(uintptr_t)(a3) + 4, n);
      self = (gameswf::Self *)((char *)self + n);
      v4 = (int)(uintptr_t)(a3[1026]) - n;
      a3[1027] = (uint32_t *)((char *)a3[1027] + n);
      v9 += n;
      a3[1026] = (uint32_t *)v4;
    }
    while ( (int)(uintptr_t)(v3) > 0 );
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gameswf::getBufferedFile  (binary VA: 0x1173640)
// Original: gameswf::getBufferedFile
// ----------------------------------------------------------------------------
gameswf::File::Self * gameswf::getBufferedFile(gameswf::Self *self)
{
  uint32_t *v1;
  gameswf::File::Self *v2;

  v1 = (uint32_t *)opNew(0x1010u);
  *v1 = (uint32_t)(uintptr_t)(self);
  v1[1025] = 0;
  v1[1026] = 0;
  v1[1027] = 0;
  v2 = (gameswf::File::Self *)opNew(0x28u);
  gameswf::File::Construct(
    v2,
    v1,
    (int (*)(void *, int, void *))gameswf::buffered_read,
    (int (*)(const void *, int, void *))gameswf::buffered_write,
    (int (*)(int, void *))((char * (*)(gameswf::Self *, uint32_t **))gameswf::buffered_seek),
    (int (*)(void *))gameswf::buffered_seek_to_end,
    (int (*)(const void *))gameswf::buffered_tell,
    (bool (*)(void *))gameswf::buffered_get_eof,
    (int (*)(void *))gameswf::buffered_close);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::scanline  (binary VA: 0x1173940)
// Original: gameswf::scanline
// ----------------------------------------------------------------------------
int gameswf::scanline(gameswf::Self *self, gameswf::ImageBase::Self *a2)
{
  return *((uint32_t *)self + 2) + *((uint32_t *)self + 5) * (uint32_t)(uintptr_t)(a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::scanline  (binary VA: 0x1173950)
// Original: gameswf::scanline
// ----------------------------------------------------------------------------
int gameswf::scanline(gameswf::Self *self, const gameswf::ImageBase::Self *a2)
{
  return *((uint32_t *)self + 2) + *((uint32_t *)self + 5) * (uint32_t)(uintptr_t)(a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::createRGB  (binary VA: 0x11739e0)
// Original: gameswf::createRGB
// ----------------------------------------------------------------------------
gameswf::ImageRGB::Self * gameswf::createRGB(gameswf::Self *self, int a2)
{
  gameswf::ImageRGB::Self *v2;

  v2 = (gameswf::ImageRGB::Self *)opNew(0x18u);
  gameswf::ImageRGB::Construct(v2, (int)(uintptr_t)(self), a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::createRGBA  (binary VA: 0x1173ac0)
// Original: gameswf::createRGBA
// ----------------------------------------------------------------------------
gameswf::ImageRGBA::Self * gameswf::createRGBA(gameswf::Self *self, int a2)
{
  gameswf::ImageRGBA::Self *v2;

  v2 = (gameswf::ImageRGBA::Self *)opNew(0x18u);
  gameswf::ImageRGBA::Construct(v2, (int)(uintptr_t)(self), a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::createAlpha  (binary VA: 0x1173c20)
// Original: gameswf::createAlpha
// ----------------------------------------------------------------------------
gameswf::ImageAlpha::Self * gameswf::createAlpha(gameswf::Self *self, int a2)
{
  gameswf::ImageAlpha::Self *v2;

  v2 = (gameswf::ImageAlpha::Self *)opNew(0x18u);
  gameswf::ImageAlpha::Construct(v2, (int)(uintptr_t)(self), a2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::readJpeg  (binary VA: 0x1173e70)
// Original: gameswf::readJpeg
// ----------------------------------------------------------------------------
gameswf::ImageRGB::Self * gameswf::readJpeg(gameswf::Self *self)
{
  gameswf::Self *v1;
  gameswf::Self *v2;
  int v3;
  gameswf::Self *v4;
  gameswf::ImageBase::Self *i;
  void (*v6)(gameswf::Self *, int);
  int v7;
  bool v8; // cc
  int v9;
  gameswf::File::Self *v11;
  gameswf::ImageRGB::Self *RGB;

  v1 = (gameswf::Self *)gameswf::jpeg::input::create(self, v11);
  v2 = v1;
  RGB = nullptr;
  if ( v1 != nullptr )
  {
    v3 = G4_VCALL<int>(v1, 20);
    v4 = (gameswf::Self *)G4_VCALL<int>(v2, 24);
    RGB = gameswf::createRGB(v4, v3);
    for ( i = nullptr; ; i = (gameswf::ImageBase::Self *)((char *)i + 1) )
    {
      v8 = (int)(uintptr_t)(i) < G4_VCALL<int>(v2, 20);
      v9 = *(uint32_t *)v2;
      if ( !v8 )
        break;
      v6 = *(void (**)(gameswf::Self *, int))(v9 + 28);
      v7 = gameswf::scanline(RGB, i);
      v6(v2, v7);
    }
    (*(void (**)(gameswf::Self *))v9)(v2);
    gameswf::free_internal(v2);
  }
  return RGB;
}

// ----------------------------------------------------------------------------
// Function: gameswf::readJpeg_ea1173f20  (binary VA: 0x1173f20)
// Original: gameswf::readJpeg
// ----------------------------------------------------------------------------
gameswf::ImageRGB::Self * gameswf::readJpeg_ea1173f20(gameswf::Self *self)
{
  gameswf::ImageRGB::Self *Jpeg;
  typedef uint8_t _g4_t_v3[36];
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v4)) > _g4_s1 ? (44u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 44u);

  Jpeg = nullptr;
  gameswf::File::Construct((gameswf::File::Self *)v3, (const char *)self, "rb");
  if ( v4 == 0 )
    Jpeg = gameswf::readJpeg((gameswf::Self *)v3);
  gameswf::File::Destroy((gameswf::File::Self *)v3);
  return Jpeg;
}

// ----------------------------------------------------------------------------
// Function: gameswf::readSwfJpeg2WithTables  (binary VA: 0x1173f90)
// Original: gameswf::readSwfJpeg2WithTables
// ----------------------------------------------------------------------------
gameswf::ImageRGB::Self * gameswf::readSwfJpeg2WithTables(gameswf::Self *self)
{
  int v2;
  gameswf::Self *v3;
  gameswf::ImageBase::Self *i;
  void (*v5)(gameswf::Self *, int);
  int v6;
  bool v7; // cc
  int v8;
  gameswf::ImageRGB::Self *RGB;

  G4_VCALL<void>(self, 12);
  v2 = G4_VCALL<int>(self, 20);
  v3 = (gameswf::Self *)G4_VCALL<int>(self, 24);
  RGB = gameswf::createRGB(v3, v2);
  for ( i = nullptr; ; i = (gameswf::ImageBase::Self *)((char *)i + 1) )
  {
    v7 = (int)(uintptr_t)(i) < G4_VCALL<int>(self, 20);
    v8 = *(uint32_t *)self;
    if ( !v7 )
      break;
    v5 = *(void (**)(gameswf::Self *, int))(v8 + 28);
    v6 = gameswf::scanline(RGB, i);
    v5(self, v6);
  }
  (*(void (**)(gameswf::Self *))(v8 + 16))(self);
  return RGB;
}

// ----------------------------------------------------------------------------
// Function: gameswf::readSwfJpeg2  (binary VA: 0x1174020)
// Original: gameswf::readSwfJpeg2
// ----------------------------------------------------------------------------
gameswf::ImageRGB::Self * gameswf::readSwfJpeg2(gameswf::Self *self)
{
  gameswf::ImageRGB::Self *SwfJpeg2WithTables;
  gameswf::Self *swf_jpeg2_header_only;
  gameswf::Self *v3;
  gameswf::File::Self *v5;

  SwfJpeg2WithTables = nullptr;
  swf_jpeg2_header_only = (gameswf::Self *)gameswf::jpeg::input::create_swf_jpeg2_header_only(self, v5);
  v3 = swf_jpeg2_header_only;
  if ( swf_jpeg2_header_only != nullptr )
  {
    SwfJpeg2WithTables = gameswf::readSwfJpeg2WithTables(swf_jpeg2_header_only);
    (**(void (***)(gameswf::Self *))v3)(v3);
    gameswf::free_internal(v3);
  }
  return SwfJpeg2WithTables;
}

// ----------------------------------------------------------------------------
// Function: gameswf::readSwfJpeg3  (binary VA: 0x1174090)
// Original: gameswf::readSwfJpeg3
// ----------------------------------------------------------------------------
gameswf::ImageRGBA::Self * gameswf::readSwfJpeg3(gameswf::Self *self)
{
  gameswf::Self *swf_jpeg2_header_only;
  int v2;
  gameswf::Self *v3;
  int v4;
  gameswf::Self *v5;
  bool v6; // cc
  int v7;
  int v8;
  gameswf::Self *v9;
  int v10;
  char v11;
  int v12;
  gameswf::Self *v13;
  gameswf::File::Self *v15;
  gameswf::ImageBase::Self *v16;
  gameswf::ImageBase::Self *v17;
  gameswf::Self *v18;
  gameswf::Self *v19;
  gameswf::Self *v20;
  gameswf::Self *v21;
  gameswf::ImageBase::Self *v22;
  gameswf::Self *v23;
  gameswf::ImageRGBA::Self *RGBA;

  swf_jpeg2_header_only = (gameswf::Self *)gameswf::jpeg::input::create_swf_jpeg2_header_only(self, v15);
  RGBA = nullptr;
  if ( swf_jpeg2_header_only != nullptr )
  {
    v18 = swf_jpeg2_header_only;
    G4_VCALL<void>(swf_jpeg2_header_only, 12);
    v2 = G4_VCALL<int>(v18, 20);
    v3 = (gameswf::Self *)G4_VCALL<int>(v18, 24);
    RGBA = gameswf::createRGBA(v3, v2);
    v4 = G4_VCALL<int>(v18, 24);
    v16 = nullptr;
    v23 = (gameswf::Self *)opNewArray(3 * v4);
    v22 = nullptr;
    v5 = v18;
    while ( 1 )
    {
      v19 = v5;
      v6 = (int)(uintptr_t)(v22) < G4_VCALL<int>(v5, 20, v16);
      v7 = *(uint32_t *)v19;
      if ( !v6 )
        break;
      (*(void (**)(gameswf::Self *, gameswf::Self *))(v7 + 28))(v19, v23);
      v8 = gameswf::scanline(RGBA, v22);
      v9 = v23;
      v10 = 0;
      v5 = v19;
      while ( 1 )
      {
        v20 = v5;
        v12 = G4_VCALL<int>(v5, 24);
        v5 = v20;
        if ( v10 >= v12 )
          break;
        *(uint8_t *)(v8 + 4 * v10) = *(uint8_t *)v9;
        *(uint8_t *)(v8 + 4 * v10 + 1) = *((uint8_t *)v9 + 1);
        v11 = *((uint8_t *)v9 + 2);
        *(uint8_t *)(v8 + 4 * v10 + 3) = -1;
        *(uint8_t *)(v8 + 4 * v10 + 2) = v11;
        v9 = (gameswf::Self *)((char *)v9 + 3);
        ++v10;
      }
      v22 = (gameswf::ImageBase::Self *)((char *)v22 + 1);
    }
    (*(void (**)(gameswf::Self *))(v7 + 24))(v19);
    v13 = v19;
    if ( v23 != nullptr )
    {
      v17 = nullptr;
      gameswf::free_internal(v23);
      v13 = v19;
    }
    v21 = v13;
    G4_VCALL<void>(v13, 16, v17);
    (**(void (***)(gameswf::Self *))v21)(v21);
    gameswf::free_internal(v21);
  }
  return RGBA;
}

// ----------------------------------------------------------------------------
// Function: gameswf::writeTGA  (binary VA: 0x1174220)
// Original: gameswf::writeTGA
// ----------------------------------------------------------------------------
gameswf::File::Self * gameswf::writeTGA(gameswf::Self *self, gameswf::File::Self *a2)
{
  void (*v2)(uint16_t *, int, uint32_t);
  void (*v3)(uint16_t *, int, uint32_t);
  void (*v4)(uint16_t *, int, uint32_t);
  void (*v5)(uint16_t *, int, uint32_t);
  void (*v6)(uint16_t *, int, uint32_t);
  void (*v7)(uint16_t *, int, uint32_t);
  void (*v8)(uint16_t *, int, uint32_t);
  void (*v9)(uint16_t *, int, uint32_t);
  void (*v10)(uint16_t *, int, uint32_t);
  void (*v11)(uint16_t *, int, uint32_t);
  void (*v12)(uint16_t *, int, uint32_t);
  void (*v13)(uint16_t *, int, uint32_t);
  void (*v14)(uint16_t *, int, uint32_t);
  void (*v15)(uint16_t *, int, uint32_t);
  void (*v16)(uint16_t *, int, uint32_t);
  void (*v17)(uint16_t *, int, uint32_t);
  void (*v18)(uint16_t *, int, uint32_t);
  void (*v19)(uint16_t *, int, uint32_t);
  void (*v20)(uint16_t *, int, uint32_t);
  void (*v21)(uint16_t *, int, uint32_t);
  int (*v22)(uint16_t *, int, uint32_t);
  gameswf::File::Self *result;
  gameswf::File::Self *v24;
  int v25;
  void (*v26)(uint16_t *, int, uint32_t);
  typedef void (*_g4_t_v27)(uint16_t *, int, uint32_t);
  typedef void (*_g4_t_v28)(uint16_t *, int, uint32_t);
  typedef void (*_g4_t_v29)(uint16_t *, int, uint32_t);
  typedef void (*_g4_t_v30)(uint16_t *, int, uint32_t);
  typedef gameswf::File::Self *_g4_t_v31;
  typedef gameswf::ImageBase::Self *_g4_t_v32;
  typedef uint16_t _g4_t_v33[15];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v27)) > _g4_s0 ? (8u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v28)) > _g4_s1 ? (8u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v29)) > _g4_s2 ? (8u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v30)) > _g4_s3 ? (8u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v31)) > _g4_s4 ? (24u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v32)) > _g4_s5 ? (28u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (46u + sizeof(_g4_t_v33)) > _g4_s6 ? (46u + sizeof(_g4_t_v33)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 46u);

  LOBYTE(v33[0]) = 0;
  (*((void (**)(uint16_t *, int, uint32_t))self + 3))(v33, 1, *(uint32_t *)self);
  v2 = *(void (**)(uint16_t *, int, uint32_t))self;
  v3 = *((void (**)(uint16_t *, int, uint32_t))self + 3);
  LOBYTE(v33[0]) = 0;
  v3(v33, 1, (uint32_t)(uintptr_t)(v2));
  v4 = *(void (**)(uint16_t *, int, uint32_t))self;
  v5 = *((void (**)(uint16_t *, int, uint32_t))self + 3);
  LOBYTE(v33[0]) = 2;
  v5(v33, 1, (uint32_t)(uintptr_t)(v4));
  v6 = *(void (**)(uint16_t *, int, uint32_t))self;
  v7 = *((void (**)(uint16_t *, int, uint32_t))self + 3);
  v33[0] = 0;
  v7(v33, 2, (uint32_t)(uintptr_t)(v6));
  v8 = *(void (**)(uint16_t *, int, uint32_t))self;
  v9 = *((void (**)(uint16_t *, int, uint32_t))self + 3);
  v33[0] = 0;
  v9(v33, 2, (uint32_t)(uintptr_t)(v8));
  v10 = *(void (**)(uint16_t *, int, uint32_t))self;
  v11 = *((void (**)(uint16_t *, int, uint32_t))self + 3);
  LOBYTE(v33[0]) = 0;
  v11(v33, 1, (uint32_t)(uintptr_t)(v10));
  v12 = *(void (**)(uint16_t *, int, uint32_t))self;
  v13 = *((void (**)(uint16_t *, int, uint32_t))self + 3);
  v33[0] = 0;
  v13(v33, 2, (uint32_t)(uintptr_t)(v12));
  v14 = *(void (**)(uint16_t *, int, uint32_t))self;
  v15 = *((void (**)(uint16_t *, int, uint32_t))self + 3);
  v33[0] = 0;
  v15(v33, 2, (uint32_t)(uintptr_t)(v14));
  v16 = *((void (**)(uint16_t *, int, uint32_t))self + 3);
  v27 = *(void (**)(uint16_t *, int, uint32_t))self;
  v33[0] = *((uint32_t *)a2 + 3);
  v16(v33, 2, (uint32_t)(uintptr_t)(v27));
  v17 = *(void (**)(uint16_t *, int, uint32_t))self;
  v18 = *((void (**)(uint16_t *, int, uint32_t))self + 3);
  v33[0] = *((uint32_t *)a2 + 4);
  v18(v33, 2, (uint32_t)(uintptr_t)(v17));
  v19 = *(void (**)(uint16_t *, int, uint32_t))self;
  v20 = *((void (**)(uint16_t *, int, uint32_t))self + 3);
  LOBYTE(v33[0]) = 32;
  v20(v33, 1, (uint32_t)(uintptr_t)(v19));
  v21 = *(void (**)(uint16_t *, int, uint32_t))self;
  v22 = *((int (**)(uint16_t *, int, uint32_t))self + 3);
  LOBYTE(v33[0]) = 0;
  result = (gameswf::File::Self *)v22(v33, 1, (uint32_t)(uintptr_t)(v21));
  if ( *((int *)a2 + 4) > 0 )
  {
    v32 = nullptr;
    do
    {
      result = (gameswf::File::Self *)gameswf::scanline(a2, v32);
      v24 = result;
      if ( *((int *)a2 + 3) > 0 )
      {
        v25 = 0;
        do
        {
          v26 = *(void (**)(uint16_t *, int, uint32_t))self;
          LOBYTE(v33[0]) = *((uint8_t *)v24 + 4 * v25);
          v31 = v24;
          (*((void (**)(uint16_t *, int, uint32_t))self + 3))(v33, 1, (uint32_t)(uintptr_t)(v26));
          v28 = *(void (**)(uint16_t *, int, uint32_t))self;
          LOBYTE(v33[0]) = *((uint8_t *)v31 + 4 * v25 + 1);
          (*((void (**)(uint16_t *, int, uint32_t))self + 3))(v33, 1, (uint32_t)(uintptr_t)(v28));
          v29 = *(void (**)(uint16_t *, int, uint32_t))self;
          LOBYTE(v33[0]) = *((uint8_t *)v31 + 4 * v25 + 2);
          (*((void (**)(uint16_t *, int, uint32_t))self + 3))(v33, 1, (uint32_t)(uintptr_t)(v29));
          v30 = *(void (**)(uint16_t *, int, uint32_t))self;
          LOBYTE(v33[0]) = *((uint8_t *)v31 + 4 * v25++ + 3);
          (*((void (**)(uint16_t *, int, uint32_t))self + 3))(v33, 1, (uint32_t)(uintptr_t)(v30));
          result = a2;
          v24 = v31;
        }
        while ( *((uint32_t *)a2 + 3) > v25 );
      }
      v32 = (gameswf::ImageBase::Self *)((char *)v32 + 1);
    }
    while ( *((uint32_t *)a2 + 4) > (int)(uintptr_t)(v32) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::makeNextMipLevel  (binary VA: 0x1174490)
// Original: gameswf::makeNextMipLevel
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::makeNextMipLevel(gameswf::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v5;
  uint8_t *v6;
  uint8_t *v7;
  uint8_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint8_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;

  v1 = *((int *)self + 3) >> 1;
  v17 = v1;
  if ( v1 <= 0 )
  {
    v2 = 2;
    v20 = 4;
    v17 = 1;
  }
  else
  {
    v2 = 2 * v1;
    v20 = (3 * v1 + 3) & 0xFFFFFFFC;
  }
  v3 = 1;
  if ( *((int *)self + 4) >> 1 > 0 )
    v3 = *((int *)self + 4) >> 1;
  v18 = v3;
  if ( *((uint32_t *)self + 3) == v2 && *((uint32_t *)self + 4) == 2 * v3 )
  {
    v21 = 0;
    v19 = 0;
    v22 = *((uint32_t *)self + 5);
    do
    {
      v16 = 0;
      v5 = *((uint32_t *)self + 2);
      v6 = (uint8_t *)(v5 + v22 * 2 * v19);
      v7 = (uint8_t *)(v5 + v21);
      v8 = &v6[v22];
      v14 = v7;
      do
      {
        ++v16;
        v9 = v8[4] + v8[1] + v6[1] + v6[4];
        v15 = v8[2] + v6[5] + v6[2] + v8[5];
        v10 = v6[3];
        v11 = *v6;
        v6 += 6;
        v12 = *v8 + v10 + v11;
        v13 = v8[3];
        v8 += 6;
        *v14 = (v12 + v13) >> 2;
        v14[1] = v9 >> 2;
        v14[2] = v15 >> 2;
        v14 += 3;
      }
      while ( v17 > v16 );
      ++v19;
      v21 += v20;
    }
    while ( v18 > v19 );
  }
  *((uint32_t *)self + 3) = v17;
  *((uint32_t *)self + 4) = v18;
  *((uint32_t *)self + 5) = v20;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::makeNextMipLevel_ea1174630  (binary VA: 0x1174630)
// Original: gameswf::makeNextMipLevel
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::makeNextMipLevel_ea1174630(gameswf::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v5;
  uint8_t *v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint8_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v1 = *((int *)self + 3) >> 1;
  v17 = v1;
  if ( v1 <= 0 )
  {
    v2 = 2;
    v20 = 4;
    v17 = 1;
  }
  else
  {
    v2 = 2 * v1;
    v20 = 4 * v1;
  }
  v3 = 1;
  if ( *((int *)self + 4) >> 1 > 0 )
    v3 = *((int *)self + 4) >> 1;
  if ( *((uint32_t *)self + 3) == v2 && *((uint32_t *)self + 4) == 2 * v3 )
  {
    v19 = 0;
    v18 = 0;
    v21 = *((uint32_t *)self + 5);
    do
    {
      v16 = 0;
      v5 = *((uint32_t *)self + 2);
      v13 = (uint8_t *)(v5 + v19);
      v6 = (uint8_t *)(v5 + v21 * 2 * v18);
      v7 = &v6[v21];
      do
      {
        ++v16;
        v8 = v7[5] + v7[1] + v6[1] + v6[5];
        v14 = (v7[2] + v6[6] + v6[2] + v7[6]) >> 2;
        v15 = v7[3] + v6[7] + v6[3] + v7[7];
        v9 = v6[4];
        v10 = *v6;
        v6 += 8;
        v11 = *v7 + v9 + v10;
        v12 = v7[4];
        v7 += 8;
        *v13 = (v11 + v12) >> 2;
        v13[1] = v8 >> 2;
        v13[2] = v14;
        v13[3] = v15 >> 2;
        v13 += 4;
      }
      while ( v17 > v16 );
      ++v18;
      v19 += v20;
    }
    while ( v3 > v18 );
  }
  *((uint32_t *)self + 3) = v17;
  *((uint32_t *)self + 4) = v3;
  *((uint32_t *)self + 5) = v20;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::setVideoBufferingMode  (binary VA: 0x118df30)
// Original: gameswf::setVideoBufferingMode
// ----------------------------------------------------------------------------
uint32_t * gameswf::setVideoBufferingMode(int a1)
{
  gameswf::s_videoBufferSize = a1;
  return (uint32_t *)(&gameswf::s_videoBufferSize);
}

// ----------------------------------------------------------------------------
// Function: gameswf::YCrCbToRGB  (binary VA: 0x118e0a0)
// Original: gameswf::YCrCbToRGB
// ----------------------------------------------------------------------------
int gameswf::YCrCbToRGB(int *a1, uint8_t *a2, int a3)
{
  int result;
  int *v4;
  int v5;
  int i;
  int v7;
  int v8;
  int v9;
  uint8_t *v10;
  float v11; // xmm3_4
  float v12; // xmm0_4
  int v13;
  float v14; // xmm1_4
  float v15; // xmm3_4
  int v16;
  float v17; // xmm1_4
  float v18; // xmm5_4
  int v19;
  char v20; // bp
  bool v21;
  char v22; // si
  char v23;
  int v24;
  int v25;
  float v26; // xmm3_4
  float v27; // xmm0_4
  int v28;
  int v29;
  float v30; // xmm1_4
  float v31; // xmm3_4
  float v32; // xmm5_4
  float v33; // xmm1_4
  int v34;
  int v35;
  int v36;
  int v37;
  char v38;
  int v39;
  uint8_t *v40;
  uint8_t *v41;
  uint8_t *v42;
  int v43;
  int j;
  int v45;
  int v46;
  int v47;
  int v48;
  char v49;

  v49 = 0;
  v48 = 0;
  result = *a1;
  if ( (unsigned int)*a1 <= 1 )
  {
    result = dword_1CC52C0[result];
    v48 = 1;
    v49 = result;
  }
  v45 = a1[1];
  v47 = a1[2];
  if ( v47 > 0 )
  {
    v46 = 0;
    v4 = a1;
    v5 = a1[7];
    for ( i = a1[3]; ; i = a1[3] )
    {
      v7 = v4[6];
      v8 = v4[10];
      result = v4[14];
      if ( v45 <= 0 )
        goto LABEL_21;
      v40 = (uint8_t *)(v7 + v46 * i);
      v9 = v5 * (v46 >> v49);
      v41 = (uint8_t *)(v9 + v8);
      v42 = (uint8_t *)(v9 + result);
      if ( v48 == 0 )
        break;
      result = (int)(uintptr_t)(a2);
      for ( j = 0; j != v45; ++j )
      {
        v24 = *v40++;
        LOBYTE(v25) = -1;
        v26 = (float)(*v42 - 128);
        v27 = (float)(v24 - 16) * 1.164f;
        v28 = *v41;
        *(uint8_t *)result = -1;
        v29 = v28 - 128;
        v30 = (float)(1.596f * v26) + v27;
        v31 = v26 * 0.813f;
        if ( (int)v30 <= 255 )
          v25 = (int)v30;
        v32 = v27 - (float)(0.392f * (float)v29);
        if ( (int)v30 < 0 )
          LOBYTE(v25) = 0;
        v33 = (float)((float)v29 * 2.017f) + v27;
        LOBYTE(v34) = -1;
        *(uint8_t *)(result + 1) = v25;
        v35 = (int)v33;
        v36 = (int)(float)(v32 - v31);
        if ( v36 <= 255 )
          v34 = (int)(float)(v32 - v31);
        if ( v36 < 0 )
          LOBYTE(v34) = 0;
        LOBYTE(v37) = -1;
        if ( v35 <= 255 )
          v37 = (int)v33;
        *(uint8_t *)(result + 2) = v34;
        v38 = 0;
        if ( v35 >= 0 )
          v38 = v37;
        *(uint8_t *)(result + 3) = v38;
        v39 = j & 1;
        result += 4;
        v41 += v39;
        v42 += v39;
      }
      if ( ++v46 == v47 )
        return result;
LABEL_22:
      v4 = a1;
      a2 += a3;
      v5 = a1[7];
    }
    v10 = a2;
    result = 0;
    do
    {
      v11 = (float)(v42[result] - 128);
      v12 = (float)(v40[result] - 16) * 1.164f;
      v13 = v41[result];
      *v10 = -1;
      ++result;
      v14 = (float)(v11 * 1.596f) + v12;
      v15 = v11 * 0.813f;
      v16 = (int)v14;
      v17 = (float)(v13 - 128);
      v18 = v12 - (float)(0.392f * v17);
      v19 = (int)(float)(v18 - v15);
      v43 = (int)(float)((float)(v17 * 2.017f) + v12);
      v20 = -1;
      if ( v16 <= 255 )
        v20 = v16;
      v21 = v16 < 0;
      LOBYTE(v16) = -1;
      if ( v21 )
        v20 = 0;
      if ( v19 <= 255 )
        v16 = (int)(float)(v18 - v15);
      v10[1] = v20;
      if ( v19 < 0 )
        LOBYTE(v16) = 0;
      v22 = -1;
      v10[2] = v16;
      if ( v43 <= 255 )
        v22 = (int)(float)((float)(v17 * 2.017f) + v12);
      v23 = 0;
      if ( v43 >= 0 )
        v23 = v22;
      v10[3] = v23;
      v10 += 4;
    }
    while ( result != v45 );
LABEL_21:
    if ( ++v46 == v47 )
      return result;
    goto LABEL_22;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::YCrCbToTexture  (binary VA: 0x118e3d0)
// Original: gameswf::YCrCbToTexture
// ----------------------------------------------------------------------------
void * gameswf::YCrCbToTexture(uint32_t *a1, char **a2, void **a3)
{
  void *result;
  char *dest;
  int v5;
  int v6;
  const void *src;
  char *v8;
  char *v9;
  int v10;
  size_t v11;
  int v12;
  void *v13;
  char *v14;
  char *v15;
  int v16;
  int v17;
  void *v18;
  int n;
  int v20;
  char v21;

  LOBYTE(v20) = 0;
  v21 = 0;
  if ( *a1 <= 1u )
  {
    v21 = 1;
    v20 = dword_1CC52C8[*a1];
  }
  n = a1[1];
  v16 = a1[2];
  result = (void *)v16;
  dest = *a2;
  v13 = *a3;
  if ( v16 > 0 )
  {
    v5 = a1[3];
    v6 = 0;
    while ( 1 )
    {
      src = (const void *)(a1[6] + v6 * v5);
      ++v6;
      result = memcpy(dest, src, n);
      dest = &dest[(uint32_t)(uintptr_t)(v13)];
      if ( v6 == v16 )
        break;
      v5 = a1[3];
    }
  }
  v14 = (char *)a1[10];
  v15 = (char *)a1[14];
  v18 = a3[2];
  v8 = a2[1];
  v9 = a2[2];
  v17 = v16 >> v20;
  if ( v17 > 0 )
  {
    v10 = 0;
    v11 = n >> v21;
    do
    {
      v12 = v10;
      memcpy(v8, v14, v11);
      v14 += v11;
      v8 = &v8[(uint32_t)(uintptr_t)(v18)];
      result = memcpy(v9, v15, v11);
      v15 += v11;
      v9 = &v9[(uint32_t)(uintptr_t)(v18)];
      v10 = v12 + 1;
    }
    while ( v12 + 1 != v17 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::createVideoBitmapRGBA  (binary VA: 0x118e710)
// Original: gameswf::createVideoBitmapRGBA
// ----------------------------------------------------------------------------
int gameswf::createVideoBitmapRGBA(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11, int a12, int a13, gameswf::Self *a14, int a15)
{
  int v15;
  int v16;
  char *v17;
  gameswf::Self *v18;
  int v19;
  int32_t v20;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[2];
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef gameswf::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v23)) > _g4_s1 ? (16u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v24)) > _g4_s2 ? (20u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v25)) > _g4_s3 ? (28u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v26)) > _g4_s4 ? (32u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v27)) > _g4_s5 ? (36u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v28)) > _g4_s6 ? (40u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v29)) > _g4_s7 ? (44u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v30)) > _g4_s8 ? (48u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v31)) > _g4_s9 ? (52u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v32)) > _g4_s10 ? (56u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v33)) > _g4_s11 ? (60u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v34)) > _g4_s12 ? (64u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (65u + sizeof(_g4_t_v35)) > _g4_s13 ? (65u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v36)) > _g4_s14 ? (68u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v37)) > _g4_s15 ? (76u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v38)) > _g4_s16 ? (80u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v39)) > _g4_s17 ? (88u + sizeof(_g4_t_v39)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 65u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);

  v15 = opNew(0x18u);
  gameswf::ImageRGBA::Construct((gameswf::ImageRGBA::Self *)v15, *a1, a1[1]);
  memset(*(void **)(v15 + 8), 0, *(uint32_t *)(v15 + 16) * *(uint32_t *)(v15 + 20));
  v16 = *a1;
  v25 = a1[1];
  v24[1] = v16;
  LOWORD(v38) = -1;
  v24[0] = 3;
  BYTE2(v38) = 127;
  HIBYTE(v38) |= 1u;
  v28 = 0;
  v26 = v16;
  v29 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 1;
  v35 = 0;
  v27 = v25;
  v30 = v15;
  gameswf::String::resize((gameswf::String::Self *)&v34, 14);
  if ( v34 == -1 )
  {
    v17 = v36;
    v18 = v37;
  }
  else
  {
    v17 = (char *)v34;
    v18 = (gameswf::Self *)&v35;
  }
  gameswf::Strcpy_s(v18, v17, (gameswf::Self *)"VideoPlaneRGBA");
  v38 |= 0x7FFFFFu;
  v19 = (*(int (**)(uint32_t *, uint32_t *, int, int))(*gameswf::s_render_handler + 8))(
          (uint32_t *)(gameswf::s_render_handler),
          v24,
          v22,
          v23);
  G4_VCALL<void>(v19, 20);
  (**(void (***)(int))v15)(v15);
  v39 = 0;
  gameswf::free_internal((gameswf::Self *)v15);
  if ( a11 == -1 && (a15 & 0x1000000) != 0 )
  {
    v39 = a13;
    gameswf::free_internal(a14);
  }
  if ( a9 == 0 )
    return v19;
  while ( 1 )
  {
    while ( 1 )
    {
      v20 = *(uint32_t *)(a9 + 4);
      _mm_mfence();
      if ( v20 != 2 )
        break;
      if ( *(uint16_t *)(a9 + 32) == 0xFFFF )
        goto LABEL_7;
      glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)a9);
    }
    if ( v20 == 1 )
      break;
LABEL_7:
    if ( v20 == __sync_val_compare_and_swap((volatile int32_t *)(a9 + 4), v20, v20 - 1) )
      return v19;
  }
  G4_VCALL<void>(a9, 4);
  return v19;
}

// ----------------------------------------------------------------------------
// Function: gameswf::createVideoBitmapAlpha  (binary VA: 0x118e910)
// Original: gameswf::createVideoBitmapAlpha
// ----------------------------------------------------------------------------
int gameswf::createVideoBitmapAlpha(int *a1, char *s, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11, int a12, int a13, gameswf::Self *a14, int a15)
{
  int v15;
  int v16;
  int v17;
  size_t v18;
  char *v19;
  gameswf::Self *v20;
  int v21;
  int32_t v22;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[11];
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef gameswf::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v25)) > _g4_s1 ? (16u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v26)) > _g4_s2 ? (20u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v27)) > _g4_s3 ? (64u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (65u + sizeof(_g4_t_v28)) > _g4_s4 ? (65u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v29)) > _g4_s5 ? (68u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v30)) > _g4_s6 ? (76u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v31)) > _g4_s7 ? (80u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v32)) > _g4_s8 ? (88u + sizeof(_g4_t_v32)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 65u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);

  v26[0] = 1;
  v15 = *a1;
  v26[2] = a1[1];
  v26[1] = v15;
  LOWORD(v31) = -1;
  BYTE2(v31) = 127;
  HIBYTE(v31) |= 1u;
  v16 = *a1;
  v17 = a1[1];
  v27 = 1;
  v28 = 0;
  memset(&v26[5], 0, 24);
  v26[3] = v16;
  v26[4] = v17;
  if ( s != nullptr )
  {
    v18 = strlen(s);
    gameswf::String::resize((gameswf::String::Self *)&v27, v18);
    if ( v27 == -1 )
    {
      v19 = v29;
      v20 = v30;
    }
    else
    {
      v19 = (char *)v27;
      v20 = (gameswf::Self *)&v28;
    }
    gameswf::Strcpy_s(v20, v19, (gameswf::Self *)s);
    v31 |= 0x7FFFFFu;
  }
  v21 = (*(int (**)(uint32_t *, uint32_t *, int, int))(*gameswf::s_render_handler + 8))(
          (uint32_t *)(gameswf::s_render_handler),
          v26,
          v24,
          v25);
  G4_VCALL<void>(v21, 20);
  if ( a11 == -1 && (a15 & 0x1000000) != 0 )
  {
    v32 = a13;
    gameswf::free_internal(a14);
  }
  if ( a9 == 0 )
    return v21;
  while ( 1 )
  {
    while ( 1 )
    {
      v22 = *(uint32_t *)(a9 + 4);
      _mm_mfence();
      if ( v22 != 2 )
        break;
      if ( *(uint16_t *)(a9 + 32) == 0xFFFF )
        goto LABEL_9;
      glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)a9);
    }
    if ( v22 == 1 )
      break;
LABEL_9:
    if ( v22 == __sync_val_compare_and_swap((volatile int32_t *)(a9 + 4), v22, v22 - 1) )
      return v21;
  }
  G4_VCALL<void>(a9, 4);
  return v21;
}

// ----------------------------------------------------------------------------
// Function: gameswf::createColorTransform  (binary VA: 0x118f560)
// Original: gameswf::createColorTransform
// ----------------------------------------------------------------------------
gameswf::ASObject::Self * gameswf::createColorTransform(gameswf::Self **self, gameswf::Player::Self *a2)
{
  gameswf::Self *v2;
  gameswf::Self *v3;
  gameswf::ASObject::Self *Object;
  gameswf::ASObject::Self *v5;
  char v6;
  typedef gameswf::ASObject::Self *_g4_t_v8;
  typedef gameswf::ASObject::Self *_g4_t_v9;
  typedef gameswf::ASColorTransform::Self *_g4_t_v10;
  typedef gameswf::ASObject::Self *_g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef gameswf::Self *_g4_t_v14;
  typedef int16_t _g4_t_v15;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef gameswf::Self *_g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v12)) > _g4_s4 ? (16u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (17u + sizeof(_g4_t_v13)) > _g4_s5 ? (17u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v14)) > _g4_s6 ? (28u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v15)) > _g4_s7 ? (32u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (34u + sizeof(_g4_t_v16)) > _g4_s8 ? (34u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (35u + sizeof(_g4_t_v17)) > _g4_s9 ? (35u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v18)) > _g4_s10 ? (48u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (49u + sizeof(_g4_t_v19)) > _g4_s11 ? (49u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v20)) > _g4_s12 ? (60u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v21)) > _g4_s13 ? (64u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (66u + sizeof(_g4_t_v22)) > _g4_s14 ? (66u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (67u + sizeof(_g4_t_v23)) > _g4_s15 ? (67u + sizeof(_g4_t_v23)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 17u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 34u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 35u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 49u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 66u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 67u);

  if ( *((uint8_t *)self + 232) != 0 )
  {
    v18 = 1;
    v19 = 0;
    gameswf::String::resize((gameswf::String::Self *)&v18, 14);
    v2 = (gameswf::Self *)&v19;
    if ( v18 == -1 )
      v2 = v20;
    gameswf::Strcpy_s(v2, &byte_9[6], (gameswf::Self *)"ColorTransform");
    v12 = 1;
    v13 = 0;
    v21 = -1;
    v22 = 127;
    v23 |= 1u;
    gameswf::String::resize((gameswf::String::Self *)&v12, 10);
    v3 = (gameswf::Self *)&v13;
    if ( v12 == -1 )
      v3 = v14;
    gameswf::Strcpy_s(v3, &byte_9[2], (gameswf::Self *)"flash.geom");
    v15 = -1;
    v16 = 127;
    v17 |= 1u;
    Object = gameswf::ASClassManager::createObject(
               self + 59,
               (const gameswf::String::Self *)&v12,
               (const gameswf::String::Self *)&v18);
    v5 = Object;
    if ( Object != nullptr )
    {
      v8 = Object;
      v6 = G4_VCALL<int>(Object, 8, 32);
      v5 = v8;
      if ( v6 == 0 )
        v5 = nullptr;
    }
    if ( v12 == -1 && (v17 & 1) != 0 )
    {
      v11 = v5;
      gameswf::free_internal(v14);
      v5 = v11;
    }
    if ( v18 == -1 && (v23 & 1) != 0 )
    {
      v9 = v5;
      gameswf::free_internal(v20);
      v5 = v9;
    }
  }
  else
  {
    v10 = (gameswf::ASColorTransform::Self *)opNew(0x48u);
    gameswf::ASColorTransform::ASColorTransform(v10, (gameswf::Player::Self *)self, nullptr);
    v5 = (gameswf::ASObject::Self *)(v10);
  }
  if ( a2 != nullptr )
  {
    *((uint32_t *)v5 + 10) = *(uint32_t *)a2;
    *((uint32_t *)v5 + 11) = *((uint32_t *)a2 + 1);
    *((uint32_t *)v5 + 12) = *((uint32_t *)a2 + 2);
    *((uint32_t *)v5 + 13) = *((uint32_t *)a2 + 3);
    *((uint32_t *)v5 + 14) = *((uint32_t *)a2 + 4);
    *((uint32_t *)v5 + 15) = *((uint32_t *)a2 + 5);
    *((uint32_t *)v5 + 16) = *((uint32_t *)a2 + 6);
    *((uint32_t *)v5 + 17) = *((uint32_t *)a2 + 7);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::netInitPackage  (binary VA: 0x11921a0)
// Original: gameswf::netInitPackage
// ----------------------------------------------------------------------------
int gameswf::netInitPackage(gameswf::Self *self)
{
  gameswf::Self *v1;
  int v2;
  char v3;
  bool v4;
  int v5;
  char *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  int v9;
  unsigned int v10;
  gameswf::Self *v11;
  unsigned int v12;
  gameswf::Self *v13;
  unsigned int v14;
  gameswf::Self **Class;
  gameswf::Self *v17;
  int v18;
  int v19;
  int v20;
  typedef gameswf::Self **_g4_t_v21;
  typedef gameswf::Self **_g4_t_v22;
  typedef int _g4_t_v23;
  typedef char _g4_t_v24;
  typedef uint8_t _g4_t_v25[12];
  typedef uint8_t _g4_t_v26[12];
  typedef char _g4_t_v27;
  typedef uint8_t _g4_t_v28[3];
  typedef int _g4_t_v29;
  typedef gameswf::Self *_g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef gameswf::Self *_g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef gameswf::Self *_g4_t_v38;
  typedef unsigned int _g4_t_v39;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v23)) > _g4_s2 ? (12u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (22u + sizeof(_g4_t_v24)) > _g4_s3 ? (22u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v25)) > _g4_s4 ? (32u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v26)) > _g4_s5 ? (44u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v27)) > _g4_s6 ? (56u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (57u + sizeof(_g4_t_v28)) > _g4_s7 ? (57u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v29)) > _g4_s8 ? (60u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v30)) > _g4_s9 ? (68u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v31)) > _g4_s10 ? (72u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v32)) > _g4_s11 ? (88u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (89u + sizeof(_g4_t_v33)) > _g4_s12 ? (89u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v34)) > _g4_s13 ? (100u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v35)) > _g4_s14 ? (104u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (120u + sizeof(_g4_t_v36)) > _g4_s15 ? (120u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (121u + sizeof(_g4_t_v37)) > _g4_s16 ? (121u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v38)) > _g4_s17 ? (132u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v39)) > _g4_s18 ? (136u + sizeof(_g4_t_v39)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 22u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 57u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 89u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 120u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 121u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 132u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 136u);

  v27 = 1;
  v28[0] = 0;
  gameswf::String::resize((gameswf::String::Self *)&v27, 9);
  v1 = (gameswf::Self *)v28;
  if ( v27 == -1 )
    v1 = v30;
  gameswf::Strcpy_s(v1, &byte_9[1], (gameswf::Self *)"flash.net");
  LOWORD(v31) = -1;
  BYTE2(v31) = 127;
  HIBYTE(v31) |= 1u;
  v2 = opNew(0x44u);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v2, self);
  *(uint32_t *)(v2 + 40) = 0;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2091688);
  *(uint32_t *)(v2 + 44) = 0;
  v3 = v27;
  v4 = v27 == -1;
  *(uint8_t *)(v2 + 48) = 1;
  *(uint8_t *)(v2 + 49) = 0;
  if ( v4 )
    v5 = v29 - 1;
  else
    v5 = v3 - 1;
  gameswf::String::resize((gameswf::String::Self *)(v2 + 48), v5);
  LOBYTE(v6) = *(uint8_t *)(v2 + 48);
  v7 = (gameswf::Self *)v28;
  if ( v27 == -1 )
    v7 = v30;
  if ( (uint8_t)(uintptr_t)(v6) == 0xFF )
  {
    v6 = *(char **)(v2 + 52);
    v8 = *(gameswf::Self **)(v2 + 60);
  }
  else
  {
    v6 = (char *)(char)(uintptr_t)(v6);
    v8 = (gameswf::Self *)(v2 + 49);
  }
  gameswf::Strcpy_s(v8, v6, v7);
  if ( (uint8_t *)(v31 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v24 = v27;
    if ( v27 == -1 )
    {
      v17 = v30;
      v18 = v29 - 1;
    }
    else
    {
      v17 = (gameswf::Self *)v28;
      v18 = v27 - 1;
    }
    v9 = 5381;
    if ( v18 > 0 )
    {
      v23 = v2;
      do
      {
        --v18;
        v19 = 33 * v9;
        v20 = *((uint8_t *)v17 + v18) + 32;
        if ( (uint8_t)(*((uint8_t *)v17 + v18) - 65) > 0x19u )
          v20 = *((uint8_t *)v17 + v18);
        v9 = v19 ^ v20;
      }
      while ( v18 != 0 );
      v2 = v23;
      v9 = v9 << 9 >> 9;
    }
    v31 = v9 & 0x7FFFFF | v31 & 0xFF800000;
  }
  else
  {
    v24 = v27;
    v9 = (int)(v31 << 9) >> 9;
  }
  v10 = v9 & 0x7FFFFF | *(uint32_t *)(v2 + 64) & 0xFF800000;
  *(uint32_t *)(v2 + 64) = v10;
  *(uint8_t *)(v2 + 66) = BYTE2(v10) & 0x7F;
  *(uint8_t *)(v2 + 67) = HIBYTE(v10) | 1;
  if ( v24 == -1 && (v31 & 0x1000000) != 0 )
    gameswf::free_internal(v30);
  v32 = 1;
  v33 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v32, 10);
  v11 = (gameswf::Self *)&v33;
  if ( v32 == -1 )
    v11 = v34;
  gameswf::Strcpy_s(v11, &byte_9[2], (gameswf::Self *)"URLRequest");
  v25[0] = 0;
  v25[1] = 0;
  v35 |= 0x7FFFFFu;
  v12 = HIWORD(v35);
  HIBYTE(v35) |= 1u;
  BYTE2(v35) = v12 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v25, (int)(uintptr_t)(gameswf::ASURLRequest::init));
  v21 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v21,
    self,
    (const gameswf::String::Self *)&v32,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASURLRequest::newOp,
    (const gameswf::ASValue::Self *)v25,
    false);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v2, (gameswf::ASClass::Self *)v21);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v25);
  if ( v32 == -1 && (v35 & 0x1000000) != 0 )
    gameswf::free_internal(v34);
  v36 = 1;
  v37 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v36, 13);
  v13 = (gameswf::Self *)&v37;
  if ( v36 == -1 )
    v13 = v38;
  gameswf::Strcpy_s(v13, &byte_9[5], (gameswf::Self *)"NetConnection");
  v26[0] = 0;
  v26[1] = 0;
  v39 |= 0x7FFFFFu;
  v14 = HIWORD(v39);
  HIBYTE(v39) |= 1u;
  BYTE2(v39) = v14 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v26, (int)(uintptr_t)(gameswf::ASNetConnection::init));
  v22 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v22,
    self,
    (const gameswf::String::Self *)&v36,
    gameswf::ASNetConnection::newOp,
    (const gameswf::ASValue::Self *)v26,
    false);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v2, (gameswf::ASClass::Self *)v22);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v26);
  if ( v36 == -1 && (v39 & 0x1000000) != 0 )
    gameswf::free_internal(v38);
  Class = gameswf::ASNetStream::createClass(self);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v2, (gameswf::ASClass::Self *)Class);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::textInitPackage  (binary VA: 0x11927b0)
// Original: gameswf::textInitPackage
// ----------------------------------------------------------------------------
int gameswf::textInitPackage(gameswf::Self *self)
{
  gameswf::Self *v1;
  int v2;
  char v3;
  bool v4;
  int v5;
  char *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  int v9;
  unsigned int v10;
  gameswf::Self *v11;
  unsigned int v12;
  gameswf::Self *v13;
  gameswf::Self *v14;
  gameswf::Self *v15;
  unsigned int v16;
  gameswf::Self *v18;
  int v19;
  int v20;
  int v21;
  typedef gameswf::Self **_g4_t_v22;
  typedef gameswf::Self **_g4_t_v23;
  typedef int _g4_t_v24;
  typedef gameswf::ASClass::Self *_g4_t_Class;
  typedef char _g4_t_v26;
  typedef uint8_t _g4_t_v27[12];
  typedef uint8_t _g4_t_v28[12];
  typedef char _g4_t_v29;
  typedef uint8_t _g4_t_v30[3];
  typedef int _g4_t_v31;
  typedef gameswf::Self *_g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef gameswf::Self *_g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef gameswf::Self *_g4_t_v40;
  typedef int16_t _g4_t_v41;
  typedef int16_t _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef gameswf::Self *_g4_t_v45;
  typedef int16_t _g4_t_v46;
  typedef char _g4_t_v47;
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  typedef gameswf::Self *_g4_t_v51;
  typedef unsigned int _g4_t_v52;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_Class)) > _g4_s3 ? (16u + sizeof(_g4_t_Class)) : _g4_s3,
    _g4_s5 = (22u + sizeof(_g4_t_v26)) > _g4_s4 ? (22u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v27)) > _g4_s5 ? (32u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v28)) > _g4_s6 ? (44u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v29)) > _g4_s7 ? (56u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (57u + sizeof(_g4_t_v30)) > _g4_s8 ? (57u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v31)) > _g4_s9 ? (60u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v32)) > _g4_s10 ? (68u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v33)) > _g4_s11 ? (72u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v34)) > _g4_s12 ? (88u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (89u + sizeof(_g4_t_v35)) > _g4_s13 ? (89u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v36)) > _g4_s14 ? (100u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v37)) > _g4_s15 ? (104u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v38)) > _g4_s16 ? (120u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (121u + sizeof(_g4_t_v39)) > _g4_s17 ? (121u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (132u + sizeof(_g4_t_v40)) > _g4_s18 ? (132u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v41)) > _g4_s19 ? (136u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (138u + sizeof(_g4_t_v42)) > _g4_s20 ? (138u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (152u + sizeof(_g4_t_v43)) > _g4_s21 ? (152u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (153u + sizeof(_g4_t_v44)) > _g4_s22 ? (153u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (164u + sizeof(_g4_t_v45)) > _g4_s23 ? (164u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (168u + sizeof(_g4_t_v46)) > _g4_s24 ? (168u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (170u + sizeof(_g4_t_v47)) > _g4_s25 ? (170u + sizeof(_g4_t_v47)) : _g4_s25,
    _g4_s27 = (171u + sizeof(_g4_t_v48)) > _g4_s26 ? (171u + sizeof(_g4_t_v48)) : _g4_s26,
    _g4_s28 = (184u + sizeof(_g4_t_v49)) > _g4_s27 ? (184u + sizeof(_g4_t_v49)) : _g4_s27,
    _g4_s29 = (185u + sizeof(_g4_t_v50)) > _g4_s28 ? (185u + sizeof(_g4_t_v50)) : _g4_s28,
    _g4_s30 = (196u + sizeof(_g4_t_v51)) > _g4_s29 ? (196u + sizeof(_g4_t_v51)) : _g4_s29,
    _g4_s31 = (200u + sizeof(_g4_t_v52)) > _g4_s30 ? (200u + sizeof(_g4_t_v52)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_Class &Class = *reinterpret_cast<_g4_t_Class *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 22u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 57u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 89u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 100u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 104u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 120u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 121u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 132u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 136u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 138u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 152u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 153u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 164u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 168u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 170u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 171u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 184u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 185u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 196u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 200u);

  v29 = 1;
  v30[0] = 0;
  gameswf::String::resize((gameswf::String::Self *)&v29, 10);
  v1 = (gameswf::Self *)v30;
  if ( v29 == -1 )
    v1 = v32;
  gameswf::Strcpy_s(v1, &byte_9[2], (gameswf::Self *)"flash.text");
  LOWORD(v33) = -1;
  BYTE2(v33) = 127;
  HIBYTE(v33) |= 1u;
  v2 = opNew(0x44u);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v2, self);
  *(uint32_t *)(v2 + 40) = 0;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2091688);
  *(uint32_t *)(v2 + 44) = 0;
  v3 = v29;
  v4 = v29 == -1;
  *(uint8_t *)(v2 + 48) = 1;
  *(uint8_t *)(v2 + 49) = 0;
  if ( v4 )
    v5 = v31 - 1;
  else
    v5 = v3 - 1;
  gameswf::String::resize((gameswf::String::Self *)(v2 + 48), v5);
  LOBYTE(v6) = *(uint8_t *)(v2 + 48);
  v7 = (gameswf::Self *)v30;
  if ( v29 == -1 )
    v7 = v32;
  if ( (uint8_t)(uintptr_t)(v6) == 0xFF )
  {
    v6 = *(char **)(v2 + 52);
    v8 = *(gameswf::Self **)(v2 + 60);
  }
  else
  {
    v6 = (char *)(char)(uintptr_t)(v6);
    v8 = (gameswf::Self *)(v2 + 49);
  }
  gameswf::Strcpy_s(v8, v6, v7);
  if ( (uint8_t *)(v33 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v26 = v29;
    if ( v29 == -1 )
    {
      v18 = v32;
      v19 = v31 - 1;
    }
    else
    {
      v18 = (gameswf::Self *)v30;
      v19 = v29 - 1;
    }
    v9 = 5381;
    if ( v19 > 0 )
    {
      v24 = v2;
      do
      {
        --v19;
        v20 = 33 * v9;
        v21 = *((uint8_t *)v18 + v19) + 32;
        if ( (uint8_t)(*((uint8_t *)v18 + v19) - 65) > 0x19u )
          v21 = *((uint8_t *)v18 + v19);
        v9 = v20 ^ v21;
      }
      while ( v19 != 0 );
      v2 = v24;
      v9 = v9 << 9 >> 9;
    }
    v33 = v9 & 0x7FFFFF | v33 & 0xFF800000;
  }
  else
  {
    v26 = v29;
    v9 = (int)(v33 << 9) >> 9;
  }
  v10 = v9 & 0x7FFFFF | *(uint32_t *)(v2 + 64) & 0xFF800000;
  *(uint32_t *)(v2 + 64) = v10;
  *(uint8_t *)(v2 + 66) = BYTE2(v10) & 0x7F;
  *(uint8_t *)(v2 + 67) = HIBYTE(v10) | 1;
  if ( v26 == -1 && (v33 & 0x1000000) != 0 )
    gameswf::free_internal(v32);
  v34 = 1;
  v35 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v34, 10);
  v11 = (gameswf::Self *)&v35;
  if ( v34 == -1 )
    v11 = v36;
  gameswf::Strcpy_s(v11, &byte_9[2], (gameswf::Self *)"StyleSheet");
  v27[0] = 0;
  v27[1] = 0;
  v37 |= 0x7FFFFFu;
  v12 = HIWORD(v37);
  HIBYTE(v37) |= 1u;
  BYTE2(v37) = v12 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v27, (int)(uintptr_t)(gameswf::ASStyleSheet::init));
  v22 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v22,
    self,
    (const gameswf::String::Self *)&v34,
    gameswf::ASStyleSheet::newOp,
    (const gameswf::ASValue::Self *)v27,
    false);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v2, (gameswf::ASClass::Self *)v22);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v27);
  if ( v34 == -1 && (v37 & 0x1000000) != 0 )
    gameswf::free_internal(v36);
  v43 = 1;
  v44 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v43, 13);
  v13 = (gameswf::Self *)&v44;
  if ( v43 == -1 )
    v13 = v45;
  gameswf::Strcpy_s(v13, &byte_9[5], (gameswf::Self *)"DisplayObject");
  v38 = 1;
  v46 = -1;
  v39 = 0;
  v47 = 127;
  v48 |= 1u;
  gameswf::String::resize((gameswf::String::Self *)&v38, 13);
  v14 = (gameswf::Self *)&v39;
  if ( v38 == -1 )
    v14 = v40;
  gameswf::Strcpy_s(v14, &byte_9[5], (gameswf::Self *)"flash.display");
  v41 = -1;
  HIBYTE(v42) = ((uint16_t)(v42 | 0x7F) >> 8) | 1;
  LOBYTE(v42) = 127;
  Class = (gameswf::ASClass::Self *)gameswf::ASClassManager::findClass(
                                (gameswf::Self *)((char *)self + 236),
                                (const gameswf::String::Self *)&v38,
                                (const gameswf::String::Self *)&v43,
                                (bool)&dword_0 + 1);
  v49 = 1;
  v50 = 0;
  gameswf::String::resize((gameswf::String::Self *)&v49, 9);
  v15 = (gameswf::Self *)&v50;
  if ( v49 == -1 )
    v15 = v51;
  gameswf::Strcpy_s(v15, &byte_9[1], (gameswf::Self *)"TextField");
  v28[0] = 0;
  v28[1] = 0;
  v52 |= 0x7FFFFFu;
  v16 = HIWORD(v52);
  HIBYTE(v52) |= 1u;
  BYTE2(v52) = v16 & 0x7F;
  gameswf::ASValue::setASCppFunction((gameswf::ASValue::Self *)v28, (int)(uintptr_t)(gameswf::ASTextField::init));
  v23 = (gameswf::Self **)opNew(0x8Cu);
  gameswf::ASClass::Construct(
    v23,
    self,
    Class,
    (const gameswf::String::Self *)&v49,
    (gameswf::ASObject::Self *(*)(gameswf::Player::Self *))gameswf::ASTextField::newOp,
    (const gameswf::ASValue::Self *)v28,
    nullptr);
  gameswf::ASPackage::registerClass((gameswf::ASPackage::Self *)v2, (gameswf::ASClass::Self *)v23);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v28);
  if ( v49 == -1 && (v52 & 0x1000000) != 0 )
    gameswf::free_internal(v51);
  if ( v38 == -1 && (v42 & 0x100) != 0 )
    gameswf::free_internal(v40);
  if ( v43 != -1 || (v48 & 1) == 0 )
    return v2;
  gameswf::free_internal(v45);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::xmlInitPackage  (binary VA: 0x1192e50)
// Original: gameswf::xmlInitPackage
// ----------------------------------------------------------------------------
int gameswf::xmlInitPackage(gameswf::Self *self)
{
  gameswf::Self *v1;
  int v2;
  char v3;
  bool v4;
  int v5;
  char *v6;
  gameswf::Self *v7;
  gameswf::Self *v8;
  int v9;
  unsigned int v10;
  gameswf::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef uint8_t _g4_t_v19[3];
  typedef int _g4_t_v20;
  typedef gameswf::Self *_g4_t_v21;
  typedef unsigned int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (14u + sizeof(_g4_t_v17)) > _g4_s1 ? (14u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (17u + sizeof(_g4_t_v19)) > _g4_s3 ? (17u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v20)) > _g4_s4 ? (20u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v21)) > _g4_s5 ? (28u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v22)) > _g4_s6 ? (32u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 14u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 17u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);

  v18 = 1;
  v19[0] = 0;
  gameswf::String::resize((gameswf::String::Self *)&v18, 9);
  v1 = (gameswf::Self *)v19;
  if ( v18 == -1 )
    v1 = v21;
  gameswf::Strcpy_s(v1, &byte_9[1], (gameswf::Self *)"flash.xml");
  LOWORD(v22) = -1;
  BYTE2(v22) = 127;
  HIBYTE(v22) |= 1u;
  v2 = opNew(0x44u);
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)v2, self);
  *(uint32_t *)(v2 + 40) = 0;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2091688);
  *(uint32_t *)(v2 + 44) = 0;
  v3 = v18;
  v4 = v18 == -1;
  *(uint8_t *)(v2 + 48) = 1;
  *(uint8_t *)(v2 + 49) = 0;
  if ( v4 )
    v5 = v20 - 1;
  else
    v5 = v3 - 1;
  gameswf::String::resize((gameswf::String::Self *)(v2 + 48), v5);
  LOBYTE(v6) = *(uint8_t *)(v2 + 48);
  v7 = (gameswf::Self *)v19;
  if ( v18 == -1 )
    v7 = v21;
  if ( (uint8_t)(uintptr_t)(v6) == 0xFF )
  {
    v6 = *(char **)(v2 + 52);
    v8 = *(gameswf::Self **)(v2 + 60);
  }
  else
  {
    v6 = (char *)(char)(uintptr_t)(v6);
    v8 = (gameswf::Self *)(v2 + 49);
  }
  gameswf::Strcpy_s(v8, v6, v7);
  if ( (uint8_t *)(v22 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v17 = v18;
    if ( v18 == -1 )
    {
      v12 = v21;
      v13 = v20 - 1;
    }
    else
    {
      v12 = (gameswf::Self *)v19;
      v13 = v18 - 1;
    }
    v9 = 5381;
    if ( v13 > 0 )
    {
      v16 = v2;
      do
      {
        --v13;
        v14 = 33 * v9;
        v15 = *((uint8_t *)v12 + v13) + 32;
        if ( (uint8_t)(*((uint8_t *)v12 + v13) - 65) > 0x19u )
          v15 = *((uint8_t *)v12 + v13);
        v9 = v14 ^ v15;
      }
      while ( v13 != 0 );
      v2 = v16;
      v9 = v9 << 9 >> 9;
    }
    v22 = v9 & 0x7FFFFF | v22 & 0xFF800000;
  }
  else
  {
    v17 = v18;
    v9 = (int)(v22 << 9) >> 9;
  }
  v10 = v9 & 0x7FFFFF | *(uint32_t *)(v2 + 64) & 0xFF800000;
  *(uint32_t *)(v2 + 64) = v10;
  *(uint8_t *)(v2 + 66) = BYTE2(v10) & 0x7F;
  *(uint8_t *)(v2 + 67) = HIBYTE(v10) | 1;
  if ( v17 != -1 || (v22 & 0x1000000) == 0 )
    return v2;
  gameswf::free_internal(v21);
  return v2;
}

// ============================================================================
// Step 3 Recovered gameswf Runtime Methods
// ============================================================================

static inline void g4_gameswf_drop_char_bound(gameswf::Character::Self *ch, gameswf::Rect::Self *outRect)
{
  gameswf::Character::getBound(
    ch, outRect,
    0, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
}

static inline int g4_gameswf_dlist_remove(gameswf::DisplayList::Self *dl, int idx)
{
  return gameswf::DisplayList::remove(
    dl, idx, 0, 0, 0, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0, 0, 0);
}

static inline int g4_gameswf_dlist_add(
    gameswf::DisplayList::Self *dl,
    gameswf::Character::Self *ch,
    int depth,
    bool replaceIfDepthOccupied,
    const gameswf::CxForm::Self *cx,
    const gameswf::Matrix::Self *mat,
    const gameswf::Effect::Self *fx,
    float ratio,
    uint16_t clipDepth)
{
  return gameswf::DisplayList::addDisplayObject(
    dl, ch, depth, replaceIfDepthOccupied, cx, mat, fx, ratio, clipDepth,
    0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr, 0);
}

static inline void g4_glitch_vbase_release(uint32_t obj)
{
  if ( obj != 0 )
  {
    uint32_t vbase = obj + *(int32_t *)(*(uint32_t *)(uintptr_t)obj - 16);
    if ( __sync_fetch_and_add((volatile int32_t *)(uintptr_t)(vbase + 4), -1) == 1 )
    {
      G4_VCALL<void>(vbase, 8);
      G4_VCALL<void>(vbase, 4);
    }
  }
}

static inline void g4_glitch_tex_release(uint32_t tex)
{
  if ( tex != 0 )
  {
    while ( 1 )
    {
      int32_t rc = *(int32_t *)(uintptr_t)(tex + 4);
      _mm_mfence();
      if ( rc == 2 )
      {
        if ( *(uint16_t *)(uintptr_t)(tex + 32) != 0xFFFFu )
        {
          glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)(uintptr_t)tex);
          continue;
        }
      }
      else if ( rc == 1 )
      {
        G4_VCALL<void>(tex, 4);
        break;
      }
      if ( rc == __sync_val_compare_and_swap((volatile int32_t *)(uintptr_t)(tex + 4), rc, rc - 1) )
        break;
    }
  }
}

namespace gameswf { namespace ASModel3D { uint32_t * createScene(gameswf::ASModel3D::Self *self); } }
uint32_t * gameswf::ASModel3D::createScene(gameswf::ASModel3D::Self *self)
{
  uint32_t drv = *(uint32_t *)(uintptr_t)(*(uint32_t *)(uintptr_t)(*((uint32_t *)self + 4) + 12) + 44);
  if ( drv != 0 )
  {
    int32_t off = *(int32_t *)(uintptr_t)(*(uint32_t *)(uintptr_t)drv - 12);
    __sync_add_and_fetch((volatile int32_t *)(uintptr_t)(drv + off + 4), 1);
  }
  uint32_t fs = *(uint32_t *)(uintptr_t)(*(uint32_t *)(uintptr_t)(drv + 444) + 32);
  if ( fs != 0 )
    __sync_add_and_fetch((volatile int32_t *)(uintptr_t)(fs + 4), 1);

  uint32_t culler = (uint32_t)opNew(0x14u);
  memset((void *)(uintptr_t)culler, 0, 0x14u);
  glitch::scene::ICullerBase::Construct((glitch::scene::ICullerBase::Self *)(uintptr_t)culler);
  *(uint32_t *)(uintptr_t)culler = (uint32_t)(uintptr_t)&off_2061BA8;
  __sync_add_and_fetch((volatile int32_t *)(uintptr_t)(culler + 4), 1);

  glitch::IObject::Self *sm = (glitch::IObject::Self *)opNew(0x158u);
  uint32_t drvArg = drv;
  int fsArg = (int)fs;
  volatile int32_t *cullerArg = (volatile int32_t *)(uintptr_t)culler;
  glitch::scene::CSceneManager::Construct(sm, &drvArg, &fsArg, &cullerArg);
  if ( sm != nullptr )
  {
    uint32_t vbase = (uint32_t)(uintptr_t)sm + *(int32_t *)(*(uint32_t *)sm - 16);
    __sync_add_and_fetch((volatile int32_t *)(uintptr_t)(vbase + 4), 1);
  }
  uint32_t oldSm = *((uint32_t *)self + 77);
  *((uint32_t *)self + 77) = (uint32_t)(uintptr_t)sm;
  g4_glitch_vbase_release(oldSm);

  if ( cullerArg != nullptr )
    sub_5459C0(cullerArg);
  if ( fs != 0 )
    sub_5459C0((volatile int32_t *)(uintptr_t)fs);
  if ( drv != 0 )
  {
    int32_t off = *(int32_t *)(uintptr_t)(*(uint32_t *)(uintptr_t)drv - 12);
    sub_5459C0((volatile int32_t *)(uintptr_t)(drv + off));
  }

  glitch::scene::CEmptySceneNode::Self *emptyNode = (glitch::scene::CEmptySceneNode::Self *)opNew(0x128u);
  glitch::scene::CEmptySceneNode::Construct(emptyNode, 0);
  if ( emptyNode != nullptr )
  {
    uint32_t vbase = (uint32_t)(uintptr_t)emptyNode + *(int32_t *)(*(uint32_t *)emptyNode - 16);
    __sync_add_and_fetch((volatile int32_t *)(uintptr_t)(vbase + 4), 1);
  }
  uint32_t oldRoot = *((uint32_t *)self + 70);
  *((uint32_t *)self + 70) = (uint32_t)(uintptr_t)emptyNode;
  g4_glitch_vbase_release(oldRoot);

  G4_VCALL<void>(*(uint32_t *)(uintptr_t)(*((uint32_t *)self + 77) + 4), 104, (char *)self + 280);

  float camPos[3] = { 0.0f, 0.0f, 0.0f };
  float camLook[3] = { 0.0f, 0.0f, 100.0f };
  glitch::IObject::Self *cam = (glitch::IObject::Self *)opNew(0x350u);
  glitch::scene::CCameraSceneNode::Construct(cam, 0, camPos, (uint32_t *)camLook, 0);
  if ( cam != nullptr )
  {
    uint32_t vbase = (uint32_t)(uintptr_t)cam + *(int32_t *)(*(uint32_t *)cam - 16);
    __sync_add_and_fetch((volatile int32_t *)(uintptr_t)(vbase + 4), 1);
  }
  uint32_t oldCam = *((uint32_t *)self + 78);
  *((uint32_t *)self + 78) = (uint32_t)(uintptr_t)cam;
  g4_glitch_vbase_release(oldCam);

  uint32_t curCam = *((uint32_t *)self + 78);
  float upVec[3] = { 0.0f, 1.0f, 0.0f };
  G4_VCALL<void>(curCam, 308, upVec);

  curCam = *((uint32_t *)self + 78);
  float rootZ = *(float *)(uintptr_t)(gameswf::ASObject::getRoot((gameswf::Player::Self **)self) + 60);
  float eyeVec[3] = { 0.0f, 0.0f, -rootZ };
  G4_VCALL<void>(curCam, 184, eyeVec);

  curCam = *((uint32_t *)self + 78);
  float tgtVec[3] = { 0.0f, 0.0f, 0.0f };
  G4_VCALL<void>(curCam, 296, tgtVec);

  uint32_t rootSceneNode = *(uint32_t *)(uintptr_t)(*((uint32_t *)self + 77) + 4);
  uint32_t camPtr1 = *((uint32_t *)self + 78);
  if ( camPtr1 != 0 )
  {
    uint32_t vbase = camPtr1 + *(int32_t *)(*(uint32_t *)(uintptr_t)camPtr1 - 16);
    __sync_add_and_fetch((volatile int32_t *)(uintptr_t)(vbase + 4), 1);
  }
  G4_VCALL<void>(rootSceneNode, 104, &camPtr1);
  if ( camPtr1 != 0 )
  {
    uint32_t vbase = camPtr1 + *(int32_t *)(*(uint32_t *)(uintptr_t)camPtr1 - 16);
    sub_5459C0((volatile int32_t *)(uintptr_t)vbase);
  }

  uint32_t *camPtr2 = *((uint32_t **)self + 78);
  if ( camPtr2 != nullptr )
  {
    uint32_t vbase = (uint32_t)(uintptr_t)camPtr2 + *(int32_t *)(*camPtr2 - 16);
    __sync_add_and_fetch((volatile int32_t *)(uintptr_t)(vbase + 4), 1);
  }
  uint32_t *res = glitch::scene::CSceneManager::setActiveCamera(*((uint32_t **)self + 77), &camPtr2);
  g4_glitch_vbase_release((uint32_t)(uintptr_t)camPtr2);
  return res;
}

namespace gameswf { namespace ASTransform { gameswf::ASTransform::Self * Construct( gameswf::ASTransform::Self *self, gameswf::Player::Self *a2, gameswf::Character::Self *a3); } }
gameswf::ASTransform::Self * gameswf::ASTransform::Construct(
    gameswf::ASTransform::Self *self,
    gameswf::Player::Self *a2,
    gameswf::Character::Self *a3)
{
  gameswf::ASObject::ASObject((gameswf::ASObject::Self *)self, a2);
  *((uint32_t *)self + 10) = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)&off_2090388;
  *((gameswf::Character::Self **)self + 11) = a3;
  if ( a3 != nullptr )
  {
    gameswf::Self *wp = (gameswf::Self *)(uintptr_t)gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)a3);
    gameswf::Self *oldWp = *((gameswf::Self **)self + 10);
    if ( wp != oldWp )
    {
      if ( oldWp != nullptr && (*(uint16_t *)oldWp)-- == 1 )
        gameswf::free_internal(oldWp);
      *((gameswf::Self **)self + 10) = wp;
      if ( wp != nullptr )
        ++*(uint16_t *)wp;
    }
  }
  gameswf::ASTransform::init(self);
  return self;
}

namespace gameswf { namespace Character { gameswf::Character::Self * getBoundingBox( gameswf::Character::Self *self, const float *a2, float *a3); } }
gameswf::Character::Self * gameswf::Character::getBoundingBox(
    gameswf::Character::Self *self,
    const float *a2,
    float *a3)
{
  uint32_t cx = *((uint32_t *)self + 16);
  if ( *(float *)(uintptr_t)(cx + 24) != 0.0f || *(float *)(uintptr_t)(cx + 28) != 0.0f )
  {
    float b[4] = {};
    g4_gameswf_drop_char_bound(self, (gameswf::Rect::Self *)b);
    float x1 = b[1], x0 = b[0], y1 = b[3], y0 = b[2];
    if ( (x1 - x0) >= 0.0f && (y1 - y0) >= 0.0f )
    {
      const float xs[4] = { x0, x0, x1, x1 };
      const float ys[4] = { y0, y1, y0, y1 };
      for ( int i = 0; i < 4; ++i )
      {
        float px = (a2[0] * xs[i] + a2[1] * ys[i]) + a2[3];
        float py = (a2[4] * xs[i] + a2[5] * ys[i]) + a2[7];
        float pz = (a2[8] * xs[i] + a2[9] * ys[i]) + a2[11];
        a3[0] = fminf(a3[0], px);
        a3[1] = fminf(a3[1], py);
        a3[2] = fminf(a3[2], pz);
        a3[3] = fmaxf(a3[3], px);
        a3[4] = fmaxf(a3[4], py);
        a3[5] = fmaxf(a3[5], pz);
      }
    }
  }
  return self;
}

namespace gameswf { namespace Character { bool hitTestObject(gameswf::Character::Self *self, gameswf::Character::Self *a2); } }
bool gameswf::Character::hitTestObject(gameswf::Character::Self *self, gameswf::Character::Self *a2)
{
  float r1[4] = {};
  float r2[4] = {};
  g4_gameswf_drop_char_bound(self, (gameswf::Rect::Self *)r1);
  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Self **)self + 13);
  if ( *((uint32_t *)self + 14) != 0 )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Self **)self + 13);
    char *wm1 = gameswf::Character::getWorldMatrix(*((gameswf::Character::Self **)self + 14));
    gameswf::Matrix::transform((gameswf::Matrix::Self *)wm1, (gameswf::Rect::Self *)r1);
  }
  g4_gameswf_drop_char_bound(a2, (gameswf::Rect::Self *)r2);
  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Self **)a2 + 13);
  if ( *((uint32_t *)a2 + 14) != 0 )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Self **)a2 + 13);
    char *wm2 = gameswf::Character::getWorldMatrix(*((gameswf::Character::Self **)a2 + 14));
    gameswf::Matrix::transform((gameswf::Matrix::Self *)wm2, (gameswf::Rect::Self *)r2);
  }
  return (r2[2] <= r1[3] && r1[2] <= r2[3] && r2[0] <= r1[1] && r2[1] >= r1[0]);
}

namespace gameswf { namespace CharacterHandle { gameswf::Character::Self * getBound( gameswf::CharacterHandle::Self *self, gameswf::Rect::Self *a2); } }
gameswf::Character::Self * gameswf::CharacterHandle::getBound(
    gameswf::CharacterHandle::Self *self,
    gameswf::Rect::Self *a2)
{
  gameswf::Character::Self *ch = (gameswf::Character::Self *)(uintptr_t)gameswf::CharacterHandle::getCharacter(self);
  if ( ch != nullptr )
  {
    g4_gameswf_drop_char_bound(ch, a2);
    return ch;
  }
  memset(a2, 0, 16);
  return nullptr;
}

namespace gameswf { namespace CharacterHandle { gameswf::Rect::Self * getWorldBound( gameswf::CharacterHandle::Self *self, gameswf::Rect::Self *a2); } }
gameswf::Rect::Self * gameswf::CharacterHandle::getWorldBound(
    gameswf::CharacterHandle::Self *self,
    gameswf::Rect::Self *a2)
{
  gameswf::Character::Self *ch = (gameswf::Character::Self *)(uintptr_t)gameswf::CharacterHandle::getCharacter(self);
  if ( ch != nullptr )
  {
    g4_gameswf_drop_char_bound(ch, a2);
    if ( *((uint32_t *)ch + 14) != 0 )
    {
      gameswf::Self *wp = *((gameswf::Self **)ch + 13);
      if ( *((uint8_t *)wp + 2) != 0 )
      {
        char *wm = gameswf::Character::getWorldMatrix(*((gameswf::Character::Self **)ch + 14));
        return gameswf::Matrix::transform((gameswf::Matrix::Self *)wm, a2);
      }
      if ( (*(uint16_t *)wp)-- == 1 )
        gameswf::free_internal(wp);
      *((uint32_t *)ch + 13) = 0;
      *((uint32_t *)ch + 14) = 0;
    }
    return a2;
  }
  memset(a2, 0, 16);
  return nullptr;
}

namespace gameswf { namespace DisplayList { int clear(gameswf::DisplayList::Self *self); } }
int gameswf::DisplayList::clear(gameswf::DisplayList::Self *self)
{
  int cnt;
  for ( cnt = *((int *)self + 1); cnt > 0; cnt = *((int *)self + 1) )
    g4_gameswf_dlist_remove(self, 0);
  return cnt;
}

namespace gameswf { namespace DisplayList { int clearAddedByPlayList(gameswf::DisplayList::Self *self); } }
int gameswf::DisplayList::clearAddedByPlayList(gameswf::DisplayList::Self *self)
{
  int res = 0;
  for ( int i = *((int *)self + 1) - 1; i >= 0; --i )
  {
    res = *(int *)(uintptr_t)(*(uint32_t *)self + 4 * i);
    if ( *(uint8_t *)(uintptr_t)(res + 153) != 0 )
      res = g4_gameswf_dlist_remove(self, i);
  }
  return res;
}

namespace gameswf { namespace DisplayList { int clearUnaffected(gameswf::DisplayList::Self *self, gameswf::array<int> *a2); } }
int gameswf::DisplayList::clearUnaffected(gameswf::DisplayList::Self *self, gameswf::array<int> *a2)
{
  int idx = 0;
  int count = *((int *)self + 1);
  uint32_t *affectedPtr = *(uint32_t **)a2;
  int affectedCount = *((int *)a2 + 1);
  while ( idx < count )
  {
    uint32_t ch = *(uint32_t *)(uintptr_t)(*(uint32_t *)self + 4 * idx);
    if ( *(uint8_t *)(uintptr_t)(ch + 153) != 0 )
    {
      uint16_t depth = *(uint16_t *)(uintptr_t)(ch + 140);
      bool found = false;
      for ( int j = 0; j < affectedCount; ++j )
      {
        if ( (uint32_t)depth == affectedPtr[j] )
        {
          found = true;
          break;
        }
      }
      if ( !found )
      {
        g4_gameswf_dlist_remove(self, idx);
        count = *((int *)self + 1);
        continue;
      }
    }
    ++idx;
  }
  return count;
}

namespace gameswf { namespace DisplayList { int display(gameswf::DisplayList::Self *self, bool a3, bool a4); } }
int gameswf::DisplayList::display(gameswf::DisplayList::Self *self, bool a3, bool a4)
{
  if ( *((int *)self + 1) <= 0 )
    return (int)a3;

  uint32_t savedMaskItem = 0;
  int activeClipDepth = 0;
  bool maskActive = false;

  for ( int i = 0; i < *((int *)self + 1); ++i )
  {
    uint32_t ch = *(uint32_t *)(uintptr_t)(*(uint32_t *)self + 4 * i);
    if ( a3 )
      *(uint8_t *)(uintptr_t)(ch + 145) = 1;
    if ( a4 )
      *(uint8_t *)(uintptr_t)(ch + 146) = 1;

    uint32_t cx = *(uint32_t *)(uintptr_t)(ch + 64);
    if ( *(uint8_t *)(uintptr_t)(ch + 148) != 0
      && (*(float *)(uintptr_t)(cx + 24) != 0.0f || *(float *)(uintptr_t)(cx + 28) != 0.0f)
      && *(uint8_t *)(uintptr_t)(ch + 151) == 0 )
    {
      if ( maskActive && *(uint16_t *)(uintptr_t)(ch + 140) > activeClipDepth )
      {
        maskActive = false;
        if ( gameswf::s_render_handler != nullptr )
          gameswf::RenderHandler::disableMask((gameswf::Self **)gameswf::s_render_handler);
      }
      if ( *(uint16_t *)(uintptr_t)(ch + 142) != 0 )
      {
        uint32_t player = *(uint32_t *)(uintptr_t)(ch + 16);
        savedMaskItem = 0;
        int stkLen = *(int *)(uintptr_t)(player + 220);
        if ( stkLen > 0 )
          savedMaskItem = *(uint32_t *)(uintptr_t)(*(uint32_t *)(uintptr_t)(player + 216) + 4 * stkLen - 4);
        if ( gameswf::s_render_handler != nullptr )
          gameswf::RenderHandler::beginSubmitMask((gameswf::RenderHandler::Self *)gameswf::s_render_handler);
      }

      uint32_t tf = *(uint32_t *)(uintptr_t)(ch + 76);
      uint32_t maskCh = (tf != 0) ? *(uint32_t *)(uintptr_t)(tf + 144) : 0;
      if ( maskCh != 0 )
      {
        if ( *(uint8_t *)(uintptr_t)(ch + 156) != 0
          && *(uint8_t *)(uintptr_t)(maskCh + 156) != 0
          && gameswf::s_render_handler != nullptr
          && gameswf::s_render_handler[20] == 0 )
        {
          gameswf::Character::updateBitmapCache(
            0.0L, (gameswf::Character::Self *)(uintptr_t)ch, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr);
          uint32_t tf2 = *(uint32_t *)(uintptr_t)(ch + 76);
          gameswf::Character::Self *maskCh2 =
            (tf2 != 0) ? *(gameswf::Character::Self **)(uintptr_t)(tf2 + 144) : nullptr;
          gameswf::Character::updateBitmapCache(
            0.0L, maskCh2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr);
          gameswf::Character::displayBitmapCache(
            (gameswf::Character::Self *)(uintptr_t)ch, true,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        }
        else
        {
          if ( gameswf::s_render_handler != nullptr )
            gameswf::RenderHandler::beginSubmitMask((gameswf::RenderHandler::Self *)gameswf::s_render_handler);
          uint32_t tf3 = *(uint32_t *)(uintptr_t)(ch + 76);
          uint32_t mch = (tf3 != 0) ? *(uint32_t *)(uintptr_t)(tf3 + 144) : 0;
          G4_VCALL<void>(mch, 284);
          if ( gameswf::s_render_handler != nullptr )
            gameswf::RenderHandler::endSubmitMask((gameswf::RenderHandler::Self *)gameswf::s_render_handler);
          G4_VCALL<void>(ch, 284);
          if ( gameswf::s_render_handler != nullptr )
            gameswf::RenderHandler::disableMask((gameswf::Self **)gameswf::s_render_handler);
        }
      }
      else if ( *(uint8_t *)(uintptr_t)(ch + 156) != 0
             && gameswf::s_render_handler != nullptr
             && gameswf::s_render_handler[20] == 0 )
      {
        gameswf::Character::updateBitmapCache(
          0.0L, (gameswf::Character::Self *)(uintptr_t)ch, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr);
        gameswf::Character::displayBitmapCache(
          (gameswf::Character::Self *)(uintptr_t)ch, false,
          0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      }
      else
      {
        G4_VCALL<void>(ch, 284);
      }

      uint16_t clipD = *(uint16_t *)(uintptr_t)(ch + 142);
      if ( clipD != 0 )
      {
        if ( gameswf::s_render_handler != nullptr )
        {
          gameswf::RenderHandler::endSubmitMask((gameswf::RenderHandler::Self *)gameswf::s_render_handler);
          clipD = *(uint16_t *)(uintptr_t)(ch + 142);
        }
        maskActive = true;
        activeClipDepth = clipD;
        if ( savedMaskItem != 0 && gameswf::s_render_handler != nullptr )
          gameswf::s_render_handler[53] = savedMaskItem;
      }
    }
  }
  if ( maskActive && gameswf::s_render_handler != nullptr )
    return gameswf::RenderHandler::disableMask((gameswf::Self **)gameswf::s_render_handler);
  return (int)(uintptr_t)self;
}

namespace gameswf { namespace DisplayList { int removeDisplayObject(gameswf::DisplayList::Self *self, gameswf::Character::Self *a2); } }
int gameswf::DisplayList::removeDisplayObject(gameswf::DisplayList::Self *self, gameswf::Character::Self *a2)
{
  int idx = gameswf::DisplayList::getIndexOf(self, a2);
  if ( idx >= 0 )
    return g4_gameswf_dlist_remove(self, idx);
  return idx;
}

namespace gameswf { namespace DisplayList { void removeDisplayObject(gameswf::DisplayList::Self *self, int depth, int id); } }
void gameswf::DisplayList::removeDisplayObject(gameswf::DisplayList::Self *self, int depth, int id)
{
  int cnt = *((int *)self + 1);
  if ( cnt > 0 )
  {
    int idx = gameswf::DisplayList::find_display_index(self, depth);
    if ( idx >= 0 && idx < cnt )
    {
      uint32_t ch = *(uint32_t *)(uintptr_t)(*(uint32_t *)self + 4 * idx);
      int chDepth = (int)*(uint16_t *)(uintptr_t)(ch + 140);
      if ( chDepth == depth )
      {
        if ( id == -1 || id == *(int *)(uintptr_t)(ch + 48) )
        {
          g4_gameswf_dlist_remove(self, idx);
          return;
        }
        while ( ++idx < cnt )
        {
          uint32_t nextCh = *(uint32_t *)(uintptr_t)(*(uint32_t *)self + 4 * idx);
          if ( chDepth != (int)*(uint16_t *)(uintptr_t)(nextCh + 140) )
            break;
          if ( id == *(int *)(uintptr_t)(nextCh + 48) )
          {
            g4_gameswf_dlist_remove(self, idx);
            return;
          }
        }
        gameswf::logError(
          (gameswf::Self *)"removeDisplayObject: no character at depth %d with id %d\n",
          (const char *)(uintptr_t)chDepth,
          id);
      }
    }
  }
}

static void g4_gameswf_override_static(
    gameswf::ASClass::Self **clsHandle,
    const char *methodName,
    int fnPtr)
{
  alignas(8) uint8_t s[32] = {};
  s[0] = 1;
  s[1] = 0;
  int len = (int)strlen(methodName);
  gameswf::String::resize((gameswf::String::Self *)s, len);
  gameswf::Self *dst = (s[0] == 0xFFu) ? *(gameswf::Self **)(s + 12) : (gameswf::Self *)(s + 1);
  gameswf::Strcpy_s(dst, (char *)(uintptr_t)(len + 1), (gameswf::Self *)methodName);
  uint32_t *flags = (uint32_t *)(s + 16);
  *flags |= 0x7FFFFFu;
  uint32_t hi = (*flags >> 16);
  s[19] |= 1u;
  s[18] = (uint8_t)(hi & 0x7Fu);
  gameswf::ASClassHandle::overrideStaticMethod(clsHandle, (gameswf::String::Self *)s, fnPtr);
  if ( s[0] == 0xFFu && (*flags & 0x01000000u) != 0 )
    gameswf::free_internal(*(gameswf::Self **)(s + 12));
}

namespace gameswf { namespace FlashFX { void onClassInitialized(gameswf::FlashFX::Self *self, gameswf::ASClass::Self *a2); } }
void gameswf::FlashFX::onClassInitialized(gameswf::FlashFX::Self *self, gameswf::ASClass::Self *a2)
{
  (void)self;
  uint32_t pkg = *((uint32_t *)a2 + 21);
  if ( pkg != 0 )
  {
    gameswf::Self *wp = *((gameswf::Self **)a2 + 20);
    if ( *((uint8_t *)wp + 2) == 0 )
    {
      if ( (*(uint16_t *)wp)-- == 1 )
        gameswf::free_internal(wp);
      *((uint32_t *)a2 + 20) = 0;
      *((uint32_t *)a2 + 21) = 0;
      pkg = 0;
    }
  }
  if ( pkg == 0 )
    return;

  const char *pkgName = (*(uint8_t *)(uintptr_t)(pkg + 48) == 0xFFu)
    ? *(const char **)(uintptr_t)(pkg + 60)
    : (const char *)(uintptr_t)(pkg + 49);
  if ( strcmp(pkgName, "gluic.extensions") != 0 )
    return;

  auto getClassName = [](gameswf::ASClass::Self *cls) -> const char * {
    return (*((uint8_t *)cls + 40) == 0xFFu)
      ? *((const char **)cls + 13)
      : ((const char *)cls + 41);
  };
  auto makeHandle = [](gameswf::ASClass::Self *cls, gameswf::ASClass::Self *handle[2]) {
    handle[0] = nullptr;
    handle[1] = cls;
    uint16_t *wp = (uint16_t *)(uintptr_t)gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)cls);
    if ( wp != nullptr )
    {
      handle[0] = (gameswf::ASClass::Self *)wp;
      ++*wp;
    }
  };
  auto dropHandle = [](gameswf::ASClass::Self *handle[2]) {
    if ( handle[0] != nullptr && (*(uint16_t *)handle[0])-- == 1 )
      gameswf::free_internal((gameswf::Self *)handle[0]);
  };

  if ( strcmp(getClassName(a2), "Device") == 0 )
  {
    gameswf::ASClass::Self *h[2];
    makeHandle(a2, h);
    g4_gameswf_override_static(h, "getViewportBounds", (int)(uintptr_t)&gameswf::NativeGetViewportBounds);
    g4_gameswf_override_static(h, "setWindowSize", (int)(uintptr_t)&gameswf::NativeSetWindowSize);
    g4_gameswf_override_static(h, "setGraphicsAntiAliasing", (int)(uintptr_t)&gameswf::NativeSetGraphicsAntiAliasing);
    dropHandle(h);
  }

  const char *cname = getClassName(a2);
  if ( strcmp(cname, "Debug") == 0 )
  {
    gameswf::ASClass::Self *h[2];
    makeHandle(a2, h);
    g4_gameswf_override_static(h, "assert", (int)(uintptr_t)&gameswf::NativeAssert);
    dropHandle(h);
  }
  else if ( strcmp(cname, "Sound") == 0 )
  {
    gameswf::ASClass::Self *h[2];
    makeHandle(a2, h);
    g4_gameswf_override_static(h, "playSound", (int)(uintptr_t)&gameswf::NativePlaySound);
    dropHandle(h);
  }
  else if ( strcmp(cname, "Text") == 0 )
  {
    gameswf::ASClass::Self *h[2];
    makeHandle(a2, h);
    g4_gameswf_override_static(h, "getString", (int)(uintptr_t)&gameswf::NativeGetString);
    g4_gameswf_override_static(h, "preloadGlyphs", (int)(uintptr_t)&gameswf::NativePreloadGlyphs);
    g4_gameswf_override_static(h, "hasMissingGlyphs", (int)(uintptr_t)&gameswf::NativeHasMissingGlyphs);
    g4_gameswf_override_static(h, "setGlyphTransforms", (int)(uintptr_t)&gameswf::NativeSetGlyphTransforms);
    dropHandle(h);
  }
}

namespace gameswf { namespace LineStyle { int read( gameswf::LineStyle::Self *self, gameswf::Stream::Self *a2, int a3, gameswf::MovieDefinitionSub::Self *a4); } }
int gameswf::LineStyle::read(
    gameswf::LineStyle::Self *self,
    gameswf::Stream::Self *a2,
    int a3,
    gameswf::MovieDefinitionSub::Self *a4)
{
  *((float *)self + 1) = (float)(uint16_t)gameswf::Stream::readU16((gameswf::Self *)a2) * 0.05f;
  if ( a3 != 83 )
    return gameswf::Color::read((gameswf::Color::Self *)((char *)self + 8), a2, a3);

  *((uint8_t *)self + 96) = (uint8_t)gameswf::Stream::readUInt((gameswf::Self *)a2, 2);
  *((uint8_t *)self + 97) = (uint8_t)gameswf::Stream::readUInt((gameswf::Self *)a2, 2);
  *((uint8_t *)self + 98) = gameswf::Stream::readUInt((gameswf::Self *)a2, 1) == 1;
  *((uint8_t *)self + 99) = gameswf::Stream::readUInt((gameswf::Self *)a2, 1) == 1;
  *((uint8_t *)self + 100) = gameswf::Stream::readUInt((gameswf::Self *)a2, 1) == 1;
  *((uint8_t *)self + 101) = gameswf::Stream::readUInt((gameswf::Self *)a2, 1) == 1;
  gameswf::Stream::readUInt((gameswf::Self *)a2, 5);
  *((uint8_t *)self + 102) = gameswf::Stream::readUInt((gameswf::Self *)a2, 1) == 1;
  *((uint8_t *)self + 103) = (uint8_t)gameswf::Stream::readUInt((gameswf::Self *)a2, 2);
  if ( *((uint8_t *)self + 97) == 2 )
    *((uint16_t *)self + 52) = (uint16_t)gameswf::Stream::readU16((gameswf::Self *)a2);
  if ( *((uint8_t *)self + 98) != 0 )
  {
    __m128 z = _mm_setzero_ps();
    return (int)gameswf::FillStyle::read(
      z, (gameswf::FillStyle::Self *)((char *)self + 12), a2, 83, a4,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0u, 0.0f, 0, 0.0f, 0.0f);
  }
  return gameswf::Color::read((gameswf::Color::Self *)((char *)self + 8), a2, 83);
}

namespace gameswf { namespace Root { int setStageSize(gameswf::Root::Self *self, int a2, int a3); } }
int gameswf::Root::setStageSize(gameswf::Root::Self *self, int a2, int a3)
{
  *(float *)(uintptr_t)(*((uint32_t *)self + 3) + 164) = (float)a2;
  *(float *)(uintptr_t)(*((uint32_t *)self + 3) + 172) = (float)a3;
  __m128 z = _mm_setzero_ps();
  return gameswf::Root::updateMatrices(
    z, z, self,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0u, 0.0f, 0.0f, 0u, 0.0f, 0.0f, 0, 0, 0u, 0u, 0u, 0u, 0u, 0u);
}

namespace gameswf { namespace SceneNodeParameters { struct Self; } }

static void g4_gameswf_scenenode_init_body(
    gameswf::SceneNode::Self *self,
    gameswf::Player::Self *player,
    glitch::scene::ISceneNode::Self *node,
    const gameswf::SceneNodeParameters::Self *params)
{
  *((uint32_t *)self + 65) = (uint32_t)(uintptr_t)node;
  if ( node != nullptr )
  {
    uint32_t vbase = (uint32_t)(uintptr_t)node + *(int32_t *)(*(uint32_t *)node - 16);
    __sync_add_and_fetch((volatile int32_t *)(uintptr_t)(vbase + 4), 1);
  }

  memset((char *)self + 264, 0, 568 - 264 + 4);
  *((uint16_t *)self + 138) = 0xFFFFu;
  *((uint32_t *)self + 108) = 0x3F800000u;
  *((uint32_t *)self + 113) = 0x3F800000u;
  *((uint32_t *)self + 118) = 0x3F800000u;
  *((uint32_t *)self + 123) = 0x3F800000u;
  *((uint32_t *)self + 124) = 0x7F7FFFFFu;
  *((uint32_t *)self + 125) = 0x7F7FFFFFu;
  *((uint32_t *)self + 126) = 0x7F7FFFFFu;
  *((uint32_t *)self + 127) = 0xFF7FFFFFu;
  *((uint32_t *)self + 128) = 0xFF7FFFFFu;
  *((uint32_t *)self + 129) = 0xFF7FFFFFu;
  *((uint32_t *)self + 130) = (uint32_t)(uintptr_t)player;

  glitch::scene::ISceneNode::setName(
    (glitch::scene::ISceneNode::Self *)self,
    (char *)gameswf::SCENE_NODE_NAME);
  uint32_t targetNode = *((uint32_t *)self + 65);
  gameswf::SceneNode::initCorners(self);

  uint32_t drv = *(uint32_t *)(uintptr_t)(*(uint32_t *)((uintptr_t)player + 12) + 44);
  uint32_t savedMipFlag = *(uint32_t *)(uintptr_t)(drv + 240) & 1u;
  G4_VCALL<void>(drv, 156, 1, 0);

  int dim[2] = { *(const int *)params, *((const int *)params + 1) };
  const char *nodeName = (const char *)(uintptr_t)G4_VCALL<uint32_t>(node, 96);
  char suffix[16] = {};
  snprintf(suffix, 12, "_0x%p", self);
  std::string texName(nodeName ? nodeName : "");
  texName.append(suffix);

  int texRet[2] = { 0, 0 };
  glitch::video::CTextureManager::addTexture(
    texRet,
    *(char **)(uintptr_t)(drv + 456),
    dim,
    const_cast<char *>(texName.c_str()),
    15,
    1);
  uint32_t newTex = (uint32_t)texRet[0];
  if ( newTex != 0 )
    __sync_add_and_fetch((volatile int32_t *)(uintptr_t)(newTex + 4), 1);
  int oldTex = *((int *)self + 66);
  *((uint32_t *)self + 66) = newTex;
  sub_5ED480(&oldTex);

  G4_VCALL<void>(drv, 156, 1, savedMipFlag);

  uint32_t mrtRet = 0;
  glitch::video::IVideoDriver::createMultipleRenderTarget((int)(uintptr_t)&mrtRet, (int)drv, 6);
  if ( mrtRet != 0 )
    __sync_add_and_fetch((volatile int32_t *)(uintptr_t)(mrtRet + 4), 1);
  uint32_t oldMrt = *((uint32_t *)self + 68);
  *((uint32_t *)self + 68) = mrtRet;
  if ( oldMrt != 0 && __sync_fetch_and_add((volatile int32_t *)(uintptr_t)(oldMrt + 4), -1) == 1 )
  {
    G4_VCALL<void>(oldMrt, 8);
    G4_VCALL<void>(oldMrt, 4);
  }
  if ( mrtRet != 0 && __sync_fetch_and_add((volatile int32_t *)(uintptr_t)(mrtRet + 4), -1) == 1 )
  {
    G4_VCALL<void>(mrtRet, 8);
    G4_VCALL<void>(mrtRet, 4);
  }

  uint32_t mrt = *((uint32_t *)self + 68);
  glitch::video::IMultipleRenderTarget::setTargetInternal(
    (int)mrt, 2, (int *)self + 66, 0, 0, 0xFFu);

  if ( *((const uint8_t *)params + 8) != 0 )
  {
    int rb = 0;
    (*(void (**)(int *, uint32_t, int *, int))(*(uint32_t *)(uintptr_t)drv + 100))(&rb, drv, dim, 45);
    glitch::video::IMultipleRenderTarget::setTargetInternal((int)mrt, 0, &rb, 0xFFu, 1);
    if ( rb != 0 && __sync_fetch_and_add((volatile int32_t *)(uintptr_t)(rb + 4), -1) == 1 )
    {
      G4_VCALL<void>(rb, 8);
      G4_VCALL<void>(rb, 4);
    }
  }

  uint32_t meshRet = 0;
  (*(void (**)(uint32_t *, uint32_t))(*(uint32_t *)(uintptr_t)targetNode + 288))(&meshRet, targetNode);
  uint32_t matRet = 0;
  (*(void (**)(uint32_t *, uint32_t, int))(*(uint32_t *)(uintptr_t)meshRet + 24))(&matRet, meshRet, 0);
  if ( meshRet != 0 && __sync_fetch_and_add((volatile int32_t *)(uintptr_t)(meshRet + 4), -1) == 1 )
  {
    G4_VCALL<void>(meshRet, 8);
    G4_VCALL<void>(meshRet, 4);
  }

  if ( matRet != 0 )
  {
    volatile int32_t *mr = *(volatile int32_t **)(uintptr_t)(matRet + 4);
    if ( mr != nullptr )
      __sync_add_and_fetch(mr, 1);
    uint16_t paramId = (uint16_t)glitch::video::CMaterialRenderer::getParameterID((int)(uintptr_t)mr, 2, 0, 0);
    *((uint16_t *)self + 138) = paramId;
    if ( paramId != 0xFFFFu )
    {
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_intrusive_ptr_video_ITex_c4ab82(
        (int)matRet, paramId, 0, (int *)self + 67);
      glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(
        (uint32_t *)(uintptr_t)matRet, paramId, 0, (int *)self + 66);
    }
    if ( mr != nullptr && __sync_fetch_and_add(mr, -1) == 1 )
    {
      glitch::video::CMaterialRenderer::Destroy((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)mr);
      gll_operator_delete_arr((int)(uintptr_t)mr);
    }
    glitch::video::CMaterial::Self *matObj = (glitch::video::CMaterial::Self *)(uintptr_t)matRet;
    bool isTwo = (*(uint32_t *)matObj == 2);
    _mm_mfence();
    if ( isTwo )
      glitch::video::CMaterial::removeFromRootSceneNode(matObj);
    if ( __sync_fetch_and_add((volatile int32_t *)matObj, -1) == 1 )
    {
      glitch::video::CMaterial::Destroy(matObj);
      gll_operator_delete_arr((int)(uintptr_t)matObj);
    }
  }
  *((uint32_t *)self + 139) = 0xBF800000u;
  *((uint32_t *)self + 140) = 0xBF800000u;

  g4_glitch_tex_release(newTex);
}

namespace gameswf { namespace SceneNode { void Construct( gameswf::SceneNode::Self *self, gameswf::Player::Self *a2, glitch::scene::ISceneNode::Self *a3, const gameswf::SceneNodeParameters::Self *a4); } }
void gameswf::SceneNode::Construct(
    gameswf::SceneNode::Self *self,
    gameswf::Player::Self *a2,
    glitch::scene::ISceneNode::Self *a3,
    const gameswf::SceneNodeParameters::Self *a4)
{
  *(uint32_t *)((char *)self + 572) = (uint32_t)(uintptr_t)&off_208F00C;
  *(uint32_t *)((char *)self + 576) = (uint32_t)(uintptr_t)&off_208F02C;
  *(uint32_t *)((char *)self + 580) = 0;
  float pos[3] = { 0.0f, 0.0f, 0.0f };
  uint32_t rot[4] = { 0u, 0u, 0u, 0x3F800000u };
  float scale[3] = { 1.0f, 1.0f, 1.0f };
  glitch::scene::ISceneNode::Construct(
    (glitch::IObject::Self *)self, (int *)&off_208F1C4, -1, pos, rot, scale);
  *(uint32_t *)self = (uint32_t)(uintptr_t)&off_208F1F0;
  *(uint32_t *)((char *)self + 572) = (uint32_t)(uintptr_t)&off_208F328;
  *(uint32_t *)((char *)self + 576) = (uint32_t)(uintptr_t)&off_208F348;
  g4_gameswf_scenenode_init_body(self, a2, a3, a4);
}

namespace gameswf { namespace SceneNode { void Construct( gameswf::SceneNode::Self *self, int *vtt, gameswf::Player::Self *a3, glitch::scene::ISceneNode::Self *a4, const gameswf::SceneNodeParameters::Self *a5); } }
void gameswf::SceneNode::Construct(
    gameswf::SceneNode::Self *self,
    int *vtt,
    gameswf::Player::Self *a3,
    glitch::scene::ISceneNode::Self *a4,
    const gameswf::SceneNodeParameters::Self *a5)
{
  float pos[3] = { 0.0f, 0.0f, 0.0f };
  uint32_t rot[4] = { 0u, 0u, 0u, 0x3F800000u };
  float scale[3] = { 1.0f, 1.0f, 1.0f };
  glitch::scene::ISceneNode::Construct(
    (glitch::IObject::Self *)self, vtt + 1, -1, pos, rot, scale);
  int v0 = vtt[0];
  *(int *)self = v0;
  *(int *)((char *)self + *(int32_t *)(uintptr_t)(v0 - 12)) = vtt[4];
  *(int *)((char *)self + *(int32_t *)(uintptr_t)(*(uint32_t *)self - 16)) = vtt[5];
  g4_gameswf_scenenode_init_body(self, a3, a4, a5);
}

namespace gameswf { namespace SceneNode { gameswf::Player::Self * updateInverseTransform(gameswf::SceneNode::Self *self); } }
gameswf::Player::Self * gameswf::SceneNode::updateInverseTransform(gameswf::SceneNode::Self *self)
{
  int root = gameswf::Player::getRoot(*((gameswf::Player::Self **)self + 130));
  float mx = *(float *)(uintptr_t)(root + 172);
  float my = *(float *)(uintptr_t)(root + 176);

  bool same = (mx == *((float *)self + 139) && my == *((float *)self + 140));
  if ( same )
  {
    const float *m = (const float *)(uintptr_t)G4_VCALL<uint32_t>(*((uint32_t *)self + 65), 72);
    for ( int i = 0; i < 16; ++i )
    {
      if ( m[i] != *((float *)self + 108 + i) )
      {
        same = false;
        break;
      }
    }
  }

  if ( !same )
  {
    uint32_t player = *((uint32_t *)self + 130);
    uint32_t collMgr = *(uint32_t *)(uintptr_t)(
      *(uint32_t *)(uintptr_t)(*(uint32_t *)(uintptr_t)(*(uint32_t *)(uintptr_t)(player + 12) + 44) + 444) + 16);
    collMgr = *(uint32_t *)(uintptr_t)(collMgr + 28);
    int screenPos[2] = { (int)mx, (int)my };
    uint32_t camPtr = 0;
    alignas(8) float rayLine[16] = {};
    (*(void (**)(float *, uint32_t, int *, uint32_t *))(*(uint32_t *)(uintptr_t)collMgr + 20))(
      rayLine, collMgr, screenPos, &camPtr);
    g4_glitch_vbase_release(camPtr);

    float uv[2] = { 0.0f, 0.0f };
    uint8_t hit = (uint8_t)gameswf::SceneNode::getCollisionUV(
      (int)(uintptr_t)self, rayLine, uv,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0.0f, 0.0f, 0.0f, 0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
      0, 0.0f, 0.0f, 0.0f, 0, 0.0f, 0.0f, 0.0f, 0, 0.0f, 0.0f, 0.0f, 0, 0.0f, 0.0f, 0.0f, 0, 0.0f);
    if ( hit != 0 )
    {
      int r1 = gameswf::Player::getRoot(*((gameswf::Player::Self **)self + 130));
      float sy = (float)*(int *)(uintptr_t)(r1 + 32) * uv[1];
      int r2 = gameswf::Player::getRoot(*((gameswf::Player::Self **)self + 130));
      float sx = (float)*(int *)(uintptr_t)(r2 + 28) * uv[0];
      *((float *)self + 141) = sx;
      *((float *)self + 142) = sy;
      gameswf::Root::Self *rootPtr =
        (gameswf::Root::Self *)(uintptr_t)gameswf::Player::getRoot(*((gameswf::Player::Self **)self + 130));
      gameswf::Root::screenToLogical(rootPtr, (gameswf::Point::Self *)((float *)self + 141));
    }
    else
    {
      *((uint32_t *)self + 141) = 0xC7C35000u;
      *((uint32_t *)self + 142) = 0xC7C35000u;
    }
  }

  const uint32_t *mat = (const uint32_t *)(uintptr_t)G4_VCALL<uint32_t>(*((uint32_t *)self + 65), 72);
  for ( int i = 0; i < 16; ++i )
    *((uint32_t *)self + 108 + i) = mat[i];
  *((float *)self + 139) = mx;
  *((float *)self + 140) = my;
  return (gameswf::Player::Self *)(uintptr_t)mat[15];
}

namespace gameswf { namespace SpriteInstance { int add_empty_movieclip( gameswf::SpriteInstance::Self *self, const char *s, int depth); } }
int gameswf::SpriteInstance::add_empty_movieclip(
    gameswf::SpriteInstance::Self *self,
    const char *s,
    int depth)
{
  gameswf::Player::Self *player = *((gameswf::Player::Self **)self + 4);
  pthread_mutex_t **def = (pthread_mutex_t **)gameswf::malloc_internal(0x5Cu);
  gameswf::SpriteDefinition::SpriteDefinition(def, player, nullptr);
  gameswf::Character::Self *rootMovie = (gameswf::Character::Self *)(uintptr_t)G4_VCALL<uint32_t>(self, 308);
  gameswf::SpriteInstance::Self *sp = gameswf::Player::createSpriteInstance(
    player,
    (gameswf::MovieDefinitionSub::Self *)def,
    rootMovie,
    (gameswf::Character::Self *)self,
    nullptr);

  alignas(8) uint8_t nameStr[32] = {};
  nameStr[0] = 1;
  nameStr[1] = 0;
  if ( s != nullptr )
  {
    int len = (int)strlen(s);
    gameswf::String::resize((gameswf::String::Self *)nameStr, len);
    gameswf::Self *dst = (nameStr[0] == 0xFFu)
      ? *(gameswf::Self **)(nameStr + 12)
      : (gameswf::Self *)(nameStr + 1);
    gameswf::Strcpy_s(dst, (char *)(uintptr_t)(len + 1), (gameswf::Self *)s);
  }
  uint32_t *flags = (uint32_t *)(nameStr + 16);
  *flags |= 0x7FFFFFu;
  nameStr[19] |= 1u;
  nameStr[18] = 0x7Fu;
  sub_10E31A0((int)(uintptr_t)sp, (char *)nameStr);
  if ( nameStr[0] == 0xFFu && (*flags & 0x01000000u) != 0 )
    gameswf::free_internal(*(gameswf::Self **)(nameStr + 12));

  g4_gameswf_dlist_add(
    (gameswf::DisplayList::Self *)((char *)self + 212),
    (gameswf::Character::Self *)sp,
    depth,
    true,
    (const gameswf::CxForm::Self *)gameswf::CxForm::identity,
    (const gameswf::Matrix::Self *)gameswf::Matrix::identity,
    (const gameswf::Effect::Self *)gameswf::Effect::identity,
    0.0f,
    0);
  return (int)(uintptr_t)sp;
}

namespace gameswf { namespace SpriteInstance { gameswf::Character::Self * attachMovie( gameswf::SpriteInstance::Self *self, const gameswf::String::Self *a2, char *a3, int a4); } }
gameswf::Character::Self * gameswf::SpriteInstance::attachMovie(
    gameswf::SpriteInstance::Self *self,
    const gameswf::String::Self *a2,
    char *a3,
    int a4)
{
  int res = G4_VCALL<int>(self, 152, a2);
  if ( res == 0 || G4_VCALL<uint8_t>(res, 8, 15) == 0 )
    return nullptr;

  gameswf::Character::Self *rootMovie = (gameswf::Character::Self *)(uintptr_t)G4_VCALL<uint32_t>(self, 308);
  gameswf::SpriteInstance::Self *sp = gameswf::Player::createSpriteInstance(
    *((gameswf::Player::Self **)self + 4),
    (gameswf::MovieDefinitionSub::Self *)(uintptr_t)res,
    rootMovie,
    (gameswf::Character::Self *)self,
    (char *)(intptr_t)-1);
  if ( (int8_t)a3[18] >= 0 )
    sub_10E31A0((int)(uintptr_t)sp, a3);
  else
    *((uint32_t *)sp + 15) = (uint32_t)(uintptr_t)a3;

  g4_gameswf_dlist_add(
    (gameswf::DisplayList::Self *)((char *)self + 212),
    (gameswf::Character::Self *)sp,
    a4,
    true,
    *((const gameswf::CxForm::Self **)self + 16),
    *((const gameswf::Matrix::Self **)self + 17),
    *((const gameswf::Effect::Self **)self + 18),
    0.0f,
    0);
  G4_VCALL<void>(sp, 96, 0x3F800000u);
  return (gameswf::Character::Self *)sp;
}

namespace gameswf { namespace SpriteInstance { int createTextField( gameswf::SpriteInstance::Self *self, const char *s, int depth, int x, int y, int width, int height); } }
int gameswf::SpriteInstance::createTextField(
    gameswf::SpriteInstance::Self *self,
    const char *s,
    int depth,
    int x,
    int y,
    int width,
    int height)
{
  gameswf::Player::Self *player = *((gameswf::Player::Self **)self + 4);
  gameswf::Self **def = (gameswf::Self **)gameswf::malloc_internal(0x9Cu);
  gameswf::EditTextCharacterDef::Construct(def, player, width, height);
  int ch = G4_VCALL<int>(def, 24, self, 0);

  alignas(8) uint8_t nameStr[32] = {};
  nameStr[0] = 1;
  nameStr[1] = 0;
  if ( s != nullptr )
  {
    int len = (int)strlen(s);
    gameswf::String::resize((gameswf::String::Self *)nameStr, len);
    gameswf::Self *dst = (nameStr[0] == 0xFFu)
      ? *(gameswf::Self **)(nameStr + 12)
      : (gameswf::Self *)(nameStr + 1);
    gameswf::Strcpy_s(dst, (char *)(uintptr_t)(len + 1), (gameswf::Self *)s);
  }
  uint32_t *flags = (uint32_t *)(nameStr + 16);
  *flags |= 0x7FFFFFu;
  nameStr[19] |= 1u;
  nameStr[18] = 0x7Fu;
  sub_10E31A0(ch, (char *)nameStr);
  if ( nameStr[0] == 0xFFu && (*flags & 0x01000000u) != 0 )
    gameswf::free_internal(*(gameswf::Self **)(nameStr + 12));

  float fx = (float)x;
  if ( fx < -3.4028235e38f || fx > 3.4028235e38f )
    fx = 0.0f;
  float fy = (float)y;
  if ( fy < -3.4028235e38f || fy > 3.4028235e38f )
    fy = 0.0f;
  float mat[6] = { 1.0f, 0.0f, fx, 0.0f, 1.0f, fy };

  g4_gameswf_dlist_add(
    (gameswf::DisplayList::Self *)((char *)self + 212),
    (gameswf::Character::Self *)(uintptr_t)ch,
    depth,
    true,
    (const gameswf::CxForm::Self *)gameswf::CxForm::identity,
    (const gameswf::Matrix::Self *)gameswf::Matrix::identity,
    (const gameswf::Effect::Self *)gameswf::Effect::identity,
    0.0f,
    0);

  uint32_t tf = *(uint32_t *)(uintptr_t)(ch + 76);
  if ( tf == 0 )
  {
    tf = (uint32_t)(uintptr_t)gameswf::malloc_internal(0x94u);
    memset((void *)(uintptr_t)tf, 0, 0x94u);
    *(uint32_t *)(uintptr_t)(tf + 0) = 0x3F800000u;
    *(uint32_t *)(uintptr_t)(tf + 8) = 0x3F800000u;
    *(uint32_t *)(uintptr_t)(tf + 16) = 0x3F800000u;
    *(uint32_t *)(uintptr_t)(tf + 24) = 0x3F800000u;
    *(uint32_t *)(uintptr_t)(tf + 32) = 0x3F800000u;
    *(uint32_t *)(uintptr_t)(tf + 48) = 0x3F800000u;
    *(uint8_t *)(uintptr_t)(tf + 76) = 1;
    *(uint32_t *)(uintptr_t)(tf + 92) = 0x017FFFFFu;
    *(uint32_t *)(uintptr_t)(tf + 104) = 0x3F800000u;
    *(uint32_t *)(uintptr_t)(tf + 112) = 0x3F800000u;
    *(uint32_t *)(uintptr_t)(ch + 76) = tf;
  }
  memcpy((void *)(uintptr_t)(tf + 32), mat, sizeof(mat));
  *(uint8_t *)(uintptr_t)(ch + 145) = 1;
  *(uint32_t *)(uintptr_t)(ch + 68) = tf + 32;
  *(uint8_t *)(uintptr_t)(ch + 147) = 1;

  gameswf::Character::Self *parent = *(gameswf::Character::Self **)(uintptr_t)(ch + 56);
  if ( parent != nullptr )
  {
    if ( *(uint8_t *)(uintptr_t)(*(uint32_t *)(uintptr_t)(ch + 52) + 2) != 0 )
    {
      gameswf::Character::invalidateBitmapCache(parent);
    }
    else
    {
      sub_7E5ED0((gameswf::Self **)(uintptr_t)(ch + 52), nullptr);
      *(uint32_t *)(uintptr_t)(ch + 56) = 0;
    }
  }
  return ch;
}

namespace gameswf { namespace SpriteInstance { int getGraphics(gameswf::SpriteInstance::Self *self); } }
int gameswf::SpriteInstance::getGraphics(gameswf::SpriteInstance::Self *self)
{
  int res = *((int *)self + 70);
  if ( res == 0 )
  {
    gameswf::Player::Self *player = *((gameswf::Player::Self **)self + 4);
    gameswf::CharacterDef::Self **gfx =
      (gameswf::CharacterDef::Self **)gameswf::malloc_internal(0x30u);
    gameswf::ASGraphics::Construct(gfx, player, (gameswf::Character::Self *)self);
    gameswf::CharacterDef::Self **oldGfx = *((gameswf::CharacterDef::Self ***)self + 70);
    if ( gfx != oldGfx )
    {
      if ( oldGfx != nullptr )
        gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)oldGfx);
      *((gameswf::CharacterDef::Self ***)self + 70) = gfx;
      if ( gfx != nullptr )
        gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)gfx);
    }
    int depth = gameswf::SpriteInstance::getHighestDepth(self);
    g4_gameswf_dlist_add(
      (gameswf::DisplayList::Self *)((char *)self + 212),
      *(gameswf::Character::Self **)((char *)(*((void **)self + 70)) + 44),
      depth,
      true,
      (const gameswf::CxForm::Self *)gameswf::CxForm::identity,
      (const gameswf::Matrix::Self *)gameswf::Matrix::identity,
      (const gameswf::Effect::Self *)gameswf::Effect::identity,
      0.0f,
      0);
    return *((int *)self + 70);
  }
  return res;
}



