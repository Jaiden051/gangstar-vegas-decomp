#include "Core/Utils/DecompTypes.h"
#include "gameswf_GlyphProvider.h"

// ----------------------------------------------------------------------------
// Function: gameswf::GlyphProvider::Construct  (binary VA: 0x1098c60)
// Original: gameswf::GlyphProvider::GlyphProvider
// ----------------------------------------------------------------------------
gameswf::GlyphProvider::Self * gameswf::GlyphProvider::Construct(gameswf::GlyphProvider::Self *self, int a2, int a3, float a4)
{
  int v4;
  uint32_t *v5;
  int v6;
  gameswf::GlyphProvider::Self *result;
  uint32_t *v8;
  gameswf::TextureCache::Self *v9;

  *((float *)self + 1) = a4;
  v4 = *((uint32_t *)self + 6) | 0x7FFFFF;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 6) = v4;
  *((uint8_t *)self + 8) = 1;
  *((uint8_t *)self + 26) = BYTE2(v4) & 0x7F;
  *((uint8_t *)self + 9) = 0;
  *((uint8_t *)self + 27) = HIBYTE(v4) | 1;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  v5 = (uint32_t *)opNew(0x10u);
  *v5 = 0;
  v5[1] = (uint32_t)(uintptr_t)(gameswf::gameswf_ft_alloc);
  v5[2] = (uint32_t)(uintptr_t)(gameswf::gameswf_ft_free);
  v5[3] = (uint32_t)(uintptr_t)(gameswf::gameswf_ft_realloc);
  v8 = v5;
  ft_set_file_callback(
    gameswf::gameswf_ft_fopen,
    gameswf::gameswf_ft_fclose,
    gameswf::gameswf_ft_fread,
    gameswf::gameswf_ft_fseek,
    gameswf::gameswf_ft_ftell);
  v6 = FT_New_Library(v8, self);
  if ( v6 != 0 )
  {
    fprintf(stderr, "can't init FreeType!  error = %d\n", v6);
    exit(1);
  }
  result = (gameswf::GlyphProvider::Self *)FT_Add_Default_Modules(*(uint32_t *)self);
  if ( a3 > 0 && a2 > 0 )
  {
    v9 = (gameswf::TextureCache::Self *)opNew(0x54u);
    gameswf::TextureCache::Construct(v9, a2, a3, 1, false, (const char *)&unk_1B15112);
    *((uint32_t *)v9 + 16) = 0;
    *((uint32_t *)v9 + 17) = 0;
    *((uint32_t *)v9 + 18) = 0;
    *((uint32_t *)v9 + 19) = 0;
    *((uint32_t *)v9 + 20) = (uint32_t)(uintptr_t)(self);
    *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v9);
    return (gameswf::GlyphProvider::Self *)(v9);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::GlyphProvider::Destroy  (binary VA: 0x1098e10)
// Original: gameswf::GlyphProvider::~GlyphProvider
// ----------------------------------------------------------------------------
void gameswf::GlyphProvider::Destroy(gameswf::TextureCache::Self **self)
{
  gameswf::TextureCache::Self **v1;
  int v2;
  int v3;
  uint8_t *v4;
  int v5;
  gameswf::Self *v6;
  char *v7;
  gameswf::Self *v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  gameswf::Self *v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  gameswf::Self *v22;
  int done;
  gameswf::Self *v24;
  int v25;
  int v26;
  int i;
  uint32_t *v28;
  char *format;

  v1 = self;
  if ( *(self + 9) != nullptr )
  {
    gameswf::TextureCache::reset(*(self + 9));
    v2 = (int)(uintptr_t)(*(self + 9));
    if ( v2 != 0 )
    {
      v3 = *(uint32_t *)(v2 + 68);
      if ( v3 < 0 )
      {
        do
        {
          v4 = (uint8_t *)(*(uint32_t *)(v2 + 64) + v3);
          if ( v4 != nullptr )
            *v4 = 0;
          ++v3;
        }
        while ( v3 != 0 );
      }
      v5 = *(uint32_t *)(v2 + 76);
      *(uint32_t *)(v2 + 68) = 0;
      if ( v5 == 0 )
      {
        v6 = *(gameswf::Self **)(v2 + 64);
        v7 = *(char **)(v2 + 72);
        *(uint32_t *)(v2 + 72) = 0;
        if ( v6 != nullptr )
        {
          format = v7;
          gameswf::free_internal(v6);
        }
        *(uint32_t *)(v2 + 64) = 0;
      }
      if ( *(uint32_t *)(v2 + 60) != 0 )
      {
        (*(void (**)(uint32_t, char *))(**(uint32_t **)(v2 + 52) + 32))(*(uint32_t *)(v2 + 52), format);
        *(uint32_t *)(v2 + 60) = 0;
      }
      if ( *(uint32_t *)(v2 + 52) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v2 + 52));
      v8 = *(gameswf::Self **)(v2 + 48);
      if ( v8 != nullptr )
      {
        if ( *((int *)v8 + 1) >= 0 )
        {
          v9 = 8;
          v10 = 0;
          v11 = *((uint32_t *)v8 + 1);
          do
          {
            v12 = (uint32_t *)((char *)v8 + v9);
            if ( *(uint32_t *)((char *)v8 + v9) != -2 )
            {
              *v12 = -2;
              v12[1] = 0;
              v8 = *(gameswf::Self **)(v2 + 48);
            }
            ++v10;
            v9 += 28;
          }
          while ( v11 >= v10 );
          v1 = self;
        }
        gameswf::free_internal(v8);
        *(uint32_t *)(v2 + 48) = 0;
      }
      v13 = *(uint32_t *)(v2 + 36);
      if ( v13 < 0 )
      {
        v14 = 4 * v13;
        do
        {
          v15 = (uint32_t *)(*(uint32_t *)(v2 + 32) + v14);
          if ( v15 != nullptr )
            *v15 = 0;
          v14 += 4;
          ++v13;
        }
        while ( v13 != 0 );
      }
      v16 = *(uint32_t *)(v2 + 44);
      *(uint32_t *)(v2 + 36) = 0;
      if ( v16 == 0 )
      {
        v17 = *(gameswf::Self **)(v2 + 32);
        *(uint32_t *)(v2 + 40) = 0;
        if ( v17 != nullptr )
          gameswf::free_internal(v17);
        *(uint32_t *)(v2 + 32) = 0;
      }
      v18 = *(uint32_t *)(v2 + 20);
      if ( v18 < 0 )
      {
        v19 = 16 * v18;
        do
        {
          v20 = (uint32_t *)(*(uint32_t *)(v2 + 16) + v19);
          if ( v20 != nullptr )
          {
            *v20 = 0;
            v20[1] = 0;
            v20[2] = 0;
            v20[3] = 0;
          }
          v19 += 16;
          ++v18;
        }
        while ( v18 != 0 );
      }
      v21 = *(uint32_t *)(v2 + 28);
      *(uint32_t *)(v2 + 20) = 0;
      if ( v21 == 0 )
      {
        v22 = *(gameswf::Self **)(v2 + 16);
        *(uint32_t *)(v2 + 24) = 0;
        if ( v22 != nullptr )
          gameswf::free_internal(v22);
        *(uint32_t *)(v2 + 16) = 0;
      }
      gameswf::free_internal((gameswf::Self *)v2);
    }
  }
  done = FT_Done_FreeType(*v1);
  if ( done != 0 )
    fprintf(stderr, "can't close FreeType!  error = %d\n", done);
  v24 = (gameswf::Self *)(v1[8]);
  if ( v24 != nullptr )
  {
    v25 = *((uint32_t *)v24 + 1);
    if ( v25 >= 0 )
    {
      v26 = 8;
      for ( i = 0; i <= v25; ++i )
      {
        v28 = (uint32_t *)((char *)v24 + v26);
        if ( *(uint32_t *)((char *)v24 + v26) != -2 )
        {
          *v28 = -2;
          v28[1] = 0;
          v24 = (gameswf::Self *)(v1[8]);
        }
        v26 += 16;
      }
    }
    gameswf::free_internal(v24);
    v1[8] = nullptr;
  }
  if ( v1[7] != nullptr )
    gameswf::RefCounted::dropRef(v1[7]);
  if ( *((uint8_t *)v1 + 8) == 0xFF && (*((uint8_t *)v1 + 27) & 1) != 0 )
    gameswf::free_internal(v1[5]);
}

// ----------------------------------------------------------------------------
// Function: gameswf::GlyphProvider::drawBitmap  (binary VA: 0x10990d0)
// Original: gameswf::GlyphProvider::drawBitmap
// ----------------------------------------------------------------------------
int gameswf::GlyphProvider::drawBitmap(gameswf::GlyphProvider::Self *self, const FT_Bitmap_ *a2)
{
  int v2;
  int i;
  int rows;
  int pitch;
  const FT_Bitmap_ *v6;
  int j;
  uint8_t *buffer;
  unsigned int width;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int v14;
  int v16;
  int Alpha;
  unsigned int v18;
  int v19;
  int v20;

  v2 = 1;
  do
  {
    do
      v2 *= 2;
    while ( v2 <= 3 );
  }
  while ( v2 < a2->pitch );
  for ( i = 1; i < a2->rows; i *= 2 )
    ;
  Alpha = (int)(uintptr_t)(gameswf::createAlpha((gameswf::Self *)v2, i, v16));
  memset(*(void **)(Alpha + 8), 0, *(uint32_t *)(Alpha + 16) * *(uint32_t *)(Alpha + 12));
  rows = a2->rows;
  if ( a2->rows > 0 )
  {
    pitch = a2->pitch;
    v20 = 0;
    v6 = a2;
    for ( j = *(uint32_t *)(Alpha + 20); ; j = *(uint32_t *)(Alpha + 20) )
    {
      buffer = v6->buffer;
      width = a2->width;
      if ( (int)width > 0 )
      {
        v18 = width - 1;
        v10 = *(uint32_t *)(Alpha + 8) + v20 * j;
        v11 = (unsigned int)(uintptr_t)(&buffer[v20 * pitch]);
        v19 = 16 * (width >> 4);
        if ( v19 == 0 )
          goto LABEL_14;
        if ( v11 <= v10 + 16 && v10 <= v11 + 16 || width <= 0xF )
          goto LABEL_14;
        v12 = 0;
        v13 = 0;
        do
        {
          ++v13;
          *(__m128i *)(v10 + v12) = *(__m128i *)(v11 + v12);
          v12 += 16;
        }
        while ( width >> 4 > v13 );
        v11 += v19;
        v10 += v19;
        v18 -= v19;
        if ( width != v19 )
        {
LABEL_14:
          v14 = 0;
          do
          {
            *(uint8_t *)(v10 + v14) = *(uint8_t *)(v11 + v14);
            ++v14;
          }
          while ( (int)(v18 + 1 - v14) > 0 );
        }
        rows = a2->rows;
      }
      if ( ++v20 >= rows )
        break;
      v6 = a2;
      pitch = a2->pitch;
    }
  }
  return Alpha;
}

// ----------------------------------------------------------------------------
// Function: gameswf::GlyphProvider::moveToCallback  (binary VA: 0x1099260)
// Original: gameswf::GlyphProvider::moveToCallback
// ----------------------------------------------------------------------------
int gameswf::GlyphProvider::moveToCallback(gameswf::GlyphProvider::Self *self, FT_Vector_ *a2)
{
  gameswf::Canvas::moveTo(
    (gameswf::Canvas::Self *)a2[3].y,
    (float)*(int *)self * *(float *)&a2->y,
    (float)-*((uint32_t *)self + 1) * *(float *)&a2->y);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::GlyphProvider::lineToCallback  (binary VA: 0x10992c0)
// Original: gameswf::GlyphProvider::lineToCallback
// ----------------------------------------------------------------------------
int gameswf::GlyphProvider::lineToCallback(gameswf::GlyphProvider::Self *self, FT_Vector_ *a2)
{
  gameswf::Canvas::lineTo(
    (gameswf::Canvas::Self *)a2[3].y,
    (float)*(int *)self * *(float *)&a2->y,
    (float)-*((uint32_t *)self + 1) * *(float *)&a2->y);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::GlyphProvider::conicToCallback  (binary VA: 0x1099320)
// Original: gameswf::GlyphProvider::conicToCallback
// ----------------------------------------------------------------------------
int gameswf::GlyphProvider::conicToCallback(gameswf::GlyphProvider::Self *self, FT_Vector_ *a2, FT_Vector_ *a3)
{
  gameswf::Canvas::curveTo(
    (gameswf::Canvas::Self *)a3[3].y,
    (float)*(int *)self * *(float *)&a3->y,
    (float)-*((uint32_t *)self + 1) * *(float *)&a3->y,
    (float)a2->x * *(float *)&a3->y,
    (float)-a2->y * *(float *)&a3->y);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::GlyphProvider::cubicToCallback  (binary VA: 0x10993a0)
// Original: gameswf::GlyphProvider::cubicToCallback
// ----------------------------------------------------------------------------
int gameswf::GlyphProvider::cubicToCallback(gameswf::GlyphProvider::Self *self, FT_Vector_ *a2, FT_Vector_ *a3, FT_Vector_ *a4)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v8;

  v4 = *(float *)&a4->y;
  v5 = (double)(a2->y - *((uint32_t *)self + 1)) * 0.5 + (double)*((int *)self + 1);
  v8 = (float)-v5 * v4;
  v6 = (double)(a2->x - *(uint32_t *)self) * 0.5 + (double)*(int *)self;
  gameswf::Canvas::curveTo((gameswf::Canvas::Self *)a4[3].y, v6 * v4, v8, (float)a3->x * v4, (float)-a3->y * v4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::GlyphProvider::getCharDef  (binary VA: 0x1099460)
// Original: gameswf::GlyphProvider::getCharDef
// ----------------------------------------------------------------------------
int gameswf::GlyphProvider::getCharDef()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::GlyphProvider::getCharImage  (binary VA: 0x109a3d0)
// Original: gameswf::GlyphProvider::getCharImage
// ----------------------------------------------------------------------------
int gameswf::GlyphProvider::getCharImage(gameswf::GlyphProvider::Self *self, uint16_t a2, int a3, int a4, gameswf::Rect::Self *a5, float *a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  float v17; // xmm2_4
  float v18; // xmm0_4
  int v19;
  int v20;
  int v21;
  float v22; // xmm3_4
  int v23;
  float v24; // xmm1_4
  int v25;
  int v26;
  float v27; // xmm0_4
  int v28;
  uint32_t *v29;
  float v30; // xmm0_4
  int *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int *v42;
  int v43;
  int i;
  int v45;
  gameswf::RefCounted::Self *BitmapInfoAlpha;
  gameswf::RefCounted::Self *v47;
  int v48;
  gameswf::RefCounted::Self *v49;
  typedef int *_g4_t_v50;
  typedef const char *_g4_t_v51;
  typedef int _g4_t_FaceById;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef gameswf::RefCounted::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int *_g4_t_v58;
  typedef int *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_Glyph;
  typedef gameswf::hash<unsigned int, gameswf::glyph_entity *, gameswf::fixed_size_hash<unsigned int>> *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v50)) > _g4_s0 ? (4u + sizeof(_g4_t_v50)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v51)) > _g4_s1 ? (12u + sizeof(_g4_t_v51)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_FaceById)) > _g4_s2 ? (24u + sizeof(_g4_t_FaceById)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v53)) > _g4_s3 ? (24u + sizeof(_g4_t_v53)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v54)) > _g4_s4 ? (24u + sizeof(_g4_t_v54)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v55)) > _g4_s5 ? (28u + sizeof(_g4_t_v55)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v56)) > _g4_s6 ? (36u + sizeof(_g4_t_v56)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v57)) > _g4_s7 ? (40u + sizeof(_g4_t_v57)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v58)) > _g4_s8 ? (44u + sizeof(_g4_t_v58)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v59)) > _g4_s9 ? (48u + sizeof(_g4_t_v59)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v60)) > _g4_s10 ? (52u + sizeof(_g4_t_v60)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_Glyph)) > _g4_s11 ? (52u + sizeof(_g4_t_Glyph)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v62)) > _g4_s12 ? (52u + sizeof(_g4_t_v62)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v63)) > _g4_s13 ? (52u + sizeof(_g4_t_v63)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v64)) > _g4_s14 ? (52u + sizeof(_g4_t_v64)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v65)) > _g4_s15 ? (56u + sizeof(_g4_t_v65)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v66)) > _g4_s16 ? (64u + sizeof(_g4_t_v66)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v67)) > _g4_s17 ? (68u + sizeof(_g4_t_v67)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v68)) > _g4_s18 ? (72u + sizeof(_g4_t_v68)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_FaceById &FaceById = *reinterpret_cast<_g4_t_FaceById *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_Glyph &Glyph = *reinterpret_cast<_g4_t_Glyph *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 52u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 52u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 72u);

  result = 0;
  if ( a2 != 0 )
  {
    v65 = (a4 << 16) | a2 | (a3 << 24);
    v7 = *((uint32_t *)self + 8);
    if ( v7 != 0 )
    {
      v8 = 65599
         * (BYTE1(v65)
          + 0xFFFF * (((HIBYTE(v65) + 352988219) << 6) + 0xFFFF * (HIBYTE(v65) + 352988219) + BYTE2(v65))
          + ((((HIBYTE(v65) + 352988219) << 6) + 0xFFFF * (HIBYTE(v65) + 352988219) + BYTE2(v65)) << 6))
         + (uint8_t)v65;
      v60 = *(uint32_t *)(v7 + 4);
      v9 = v8 & v60;
      v10 = (int *)(v7 + 16 * (v8 & v60) + 8);
      if ( *v10 != -2 && v9 == (*(uint32_t *)(v7 + 16 * (v8 & v60) + 12) & v60) )
      {
        for ( i = *(uint32_t *)(v7 + 16 * (v8 & v60) + 12); v8 != i || v65 != v10[2]; i = *(uint32_t *)(v7 + 16 * v9 + 12) )
        {
          v9 = *v10;
          if ( *v10 == -1 )
            goto LABEL_5;
          v10 = (int *)(v7 + 16 * v9 + 8);
        }
        if ( v9 >= 0 )
        {
          v11 = *(uint32_t *)(v7 + 16 * v9 + 20);
LABEL_29:
          *(uint32_t *)a5 = *(uint32_t *)(v11 + 8);
          *((uint32_t *)a5 + 1) = *(uint32_t *)(v11 + 12);
          *((uint32_t *)a5 + 2) = *(uint32_t *)(v11 + 16);
          *((uint32_t *)a5 + 3) = *(uint32_t *)(v11 + 20);
          *a6 = *(float *)(v11 + 4);
          v43 = *((uint32_t *)self + 9);
          if ( v43 != 0 )
            return *(uint32_t *)(v43 + 52);
          else
            return *(uint32_t *)v11;
        }
      }
    }
LABEL_5:
    FaceById = gameswf::FaceProvider::GetFaceById(*((gameswf::FaceProvider::Self **)self + 10), a3);
    FT_Set_Pixel_Sizes(FaceById, 0, (int)(float)((float)a4 * *((float *)self + 1)));
    if ( *((uint32_t *)self + 9) != 0 )
    {
      Glyph = FT_Load_Glyph(FaceById, a2, 0);
      result = 0;
      if ( Glyph != 0 )
        return result;
      v11 = opNew(0x1Cu);
      memset((void *)v11, 0, 0x1Cu);
      v12 = *(uint32_t *)(FaceById + 84);
      v66 = *(uint32_t *)(v12 + 24) / 64 + 2;
      v67 = *(uint32_t *)(v12 + 28) / 64 + 2;
      gameswf::TextureCache::getRegionSizeRequirement((gameswf::TextureCache::Self *)&v66, &v67, v50);
      v13 = FaceById;
      v14 = *(uint32_t *)(*(uint32_t *)(FaceById + 84) + 24);
      v15 = v14 + 191;
      v16 = v14 + 128;
      if ( v16 < 0 )
        v16 = v15;
      v17 = (float)(v16 >> 6) / (float)v66;
      v18 = (float)v67;
      *(float *)(v11 + 12) = v17;
      v19 = *(uint32_t *)(*(uint32_t *)(FaceById + 84) + 28);
      v20 = v19 + 191;
      v21 = v19 + 128;
      if ( v21 < 0 )
        v21 = v20;
      v22 = (float)(v21 >> 6) / v18;
      *(float *)(v11 + 20) = v22;
    }
    else
    {
      v64 = FT_Load_Glyph(FaceById, a2, 4);
      result = 0;
      if ( v64 != 0 )
        return result;
      v11 = opNew(0x1Cu);
      memset((void *)v11, 0, 0x1Cu);
      v45 = gameswf::GlyphProvider::drawBitmap(self, (const FT_Bitmap_ *)(*(uint32_t *)(FaceById + 84) + 76));
      BitmapInfoAlpha = (gameswf::RefCounted::Self *)gameswf::render::createBitmapInfoAlpha(
                                                 *(gameswf::render::Self **)(v45 + 12),
                                                 *(uint32_t *)(v45 + 16),
                                                 *(uint32_t *)(v45 + 8),
                                                 "Alpha",
                                                 v51);
      v47 = *(gameswf::RefCounted::Self **)v11;
      v48 = FaceById;
      if ( BitmapInfoAlpha != *(gameswf::RefCounted::Self **)v11 )
      {
        if ( v47 != nullptr )
        {
          v55 = BitmapInfoAlpha;
          gameswf::RefCounted::dropRef(v47);
          v48 = FaceById;
          BitmapInfoAlpha = v55;
        }
        *(uint32_t *)v11 = (uint32_t)(uintptr_t)(BitmapInfoAlpha);
        if ( BitmapInfoAlpha != nullptr )
        {
          v53 = v48;
          gameswf::RefCounted::addRef(BitmapInfoAlpha);
          v48 = v53;
        }
      }
      v54 = v48;
      (**(void (***)(int))v45)(v45);
      gameswf::free_internal((gameswf::Self *)v45);
      v13 = v54;
      v49 = *(gameswf::RefCounted::Self **)v11;
      v17 = (float)*(int *)(*(uint32_t *)(v54 + 84) + 80) / (float)*(int *)(*(uint32_t *)v11 + 16);
      *(float *)(v11 + 12) = v17;
      v22 = (float)*(int *)(*(uint32_t *)(v54 + 84) + 76) / (float)*((int *)v49 + 5);
      *(float *)(v11 + 20) = v22;
    }
    v23 = *(uint32_t *)(v13 + 84);
    v24 = 0.0;
    v25 = *(uint32_t *)(v23 + 24);
    if ( v25 > 0 )
      v24 = (float)(*(uint32_t *)(v23 + 32) - 64) / (float)(v25 + 128);
    *(float *)(v11 + 8) = v24;
    v26 = *(uint32_t *)(v13 + 84);
    v27 = 0.0;
    v28 = *(uint32_t *)(v26 + 28);
    if ( v28 > 0 )
      v27 = (float)((float)(*(uint32_t *)(v26 + 36) + 64) / (float)(v28 + 128)) * v22;
    *(float *)(v11 + 16) = v27;
    *(float *)(v11 + 8) = (float)-v17 * v24;
    v29 = *(uint32_t **)(v13 + 84);
    if ( v29[6] == 0 && v29[7] == 0 )
    {
      *(uint32_t *)(v11 + 12) = 0;
      *(uint32_t *)(v11 + 8) = 0;
      *(uint32_t *)(v11 + 20) = 0;
      *(uint32_t *)(v11 + 16) = 0;
      v29 = *(uint32_t **)(v13 + 84);
    }
    v30 = (float)(int)v29[10];
    *(uint32_t *)(v11 + 24) = v13;
    v68 = (a4 << 16) | a2 | (a3 << 24);
    v62 = (gameswf::hash<unsigned int, gameswf::glyph_entity *, gameswf::fixed_size_hash<unsigned int>> *)((gameswf::GlyphProvider::Self *)((char *)self + 32));
    *(float *)(v11 + 4) = v30 * 0.015625;
    v31 = *((int **)self + 8);
    if ( v31 != nullptr )
    {
      v32 = *v31;
      if ( 3 * *v31 <= 2 * v31[1] + 2 )
        goto LABEL_21;
      gameswf::hash_unsigned_int_gameswf_gly_965dea::set_raw_capacity(
        v62,
        2 * v31[1] + 2);
    }
    else
    {
      gameswf::hash_unsigned_int_gameswf_gly_965dea::set_raw_capacity(
        v62,
        8);
    }
    v31 = *((int **)self + 8);
    v32 = *v31;
LABEL_21:
    v33 = HIBYTE(v68) + 352988219;
    *v31 = v32 + 1;
    v34 = (v33 << 6) + 0xFFFF * v33 + BYTE2(v68);
    v35 = 65599 * (BYTE1(v68) + 0xFFFF * v34 + (v34 << 6)) + (uint8_t)v68;
    v36 = *((uint32_t *)self + 8);
    v57 = v35;
    v37 = v35;
    v38 = *(uint32_t *)(v36 + 4);
    v63 = v38 & v37;
    v59 = (int *)(v36 + 16 * (v38 & v37) + 8);
    v39 = v38 & v37;
    v56 = *v59;
    if ( *v59 == -2 )
    {
      *v59 = -1;
      v59[1] = v57;
      v59[2] = v65;
      v59[3] = v11;
    }
    else
    {
      while ( 1 )
      {
        v39 = v38 & (v39 + 1);
        if ( *(uint32_t *)(v36 + 16 * v39 + 8) == -2 )
          break;
        if ( v63 == v39 )
        {
          v58 = (int *)(v36 + 16 * v39 + 8);
          v39 = v63;
          goto LABEL_25;
        }
      }
      v58 = (int *)(v36 + 16 * v39 + 8);
LABEL_25:
      v40 = v59[1] & v38;
      if ( v63 == v40 )
      {
        *v58 = v56;
        v58[1] = v59[1];
        v58[2] = v59[2];
        v58[3] = v59[3];
        *v59 = v39;
        v59[2] = v65;
        v59[3] = v11;
        v59[1] = v57;
      }
      else
      {
        v41 = v40;
        do
        {
          v42 = (int *)(v36 + 16 * v41 + 8);
          v41 = *v42;
        }
        while ( v63 != *v42 );
        *v58 = v56;
        v58[1] = v59[1];
        v58[2] = v59[2];
        v58[3] = v59[3];
        *v42 = v39;
        v59[2] = v65;
        v59[3] = v11;
        v59[1] = v57;
        *v59 = -1;
      }
    }
    goto LABEL_29;
  }
  return result;
}


