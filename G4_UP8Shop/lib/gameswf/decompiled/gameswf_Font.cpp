#include "Core/Utils/DecompTypes.h"
#include "gameswf_Font.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Font::Construct  (binary VA: 0x1188550)
// Original: gameswf::Font::Font
// ----------------------------------------------------------------------------
gameswf::Font::Self * gameswf::Font::Construct(gameswf::Self **self, gameswf::Player::Self *a2)
{
  gameswf::Self *WeakProxy;
  gameswf::Self *v3;
  gameswf::Self *v5;
  gameswf::Self *v6;
  int v7;
  gameswf::Font::Self *result;
  gameswf::Self *v9;

  gameswf::RefCounted::RefCounted((gameswf::RefCounted::Self *)self);
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_208E728);
  *(self + 3) = nullptr;
  *(self + 4) = nullptr;
  *(self + 5) = nullptr;
  *(self + 6) = (gameswf::Self *)(a2);
  if ( a2 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a2);
    v3 = *(self + 5);
    if ( WeakProxy != v3 )
    {
      if ( v3 != nullptr && (*(uint16_t *)v3)-- == 1 )
      {
        v9 = WeakProxy;
        gameswf::free_internal(v3);
        WeakProxy = v9;
      }
      *(self + 5) = WeakProxy;
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  *(self + 7) = nullptr;
  *(self + 8) = nullptr;
  *self = (gameswf::Self *)((uint32_t)(uintptr_t)&off_2091948);
  *(self + 9) = nullptr;
  *(self + 10) = nullptr;
  *((uint8_t *)self + 44) = 1;
  *((uint8_t *)self + 45) = 0;
  gameswf::String::resize((gameswf::String::Self *)(self + 11), 15);
  v5 = (gameswf::Self *)((char *)self + 45);
  if ( *((uint8_t *)self + 44) == 0xFF )
    v5 = *(self + 14);
  gameswf::Strcpy_s(v5, (char *)&word_10, (gameswf::Self *)"Times New Roman");
  v6 = *(self + 15);
  *(self + 16) = nullptr;
  v6 = (gameswf::Self *)((unsigned int)(uintptr_t)(v6) | 0x7FFFFF);
  *((uint8_t *)self + 69) = 0;
  *(self + 15) = v6;
  *((uint8_t *)self + 70) = 0;
  v7 = ((unsigned int)(uintptr_t)(v6) >> 16) & 0x7F;
  result = (gameswf::Font::Self *)(((unsigned int)(uintptr_t)(v6) >> 24) | 1);
  *((uint8_t *)self + 62) = v7;
  *((uint8_t *)self + 63) = (uint8_t)(uintptr_t)result;
  *((uint8_t *)self + 71) = 1;
  *((uint8_t *)self + 72) = 0;
  *((uint8_t *)self + 73) = 0;
  *((uint8_t *)self + 74) = 0;
  *(self + 19) = nullptr;
  *(self + 20) = nullptr;
  *(self + 21) = nullptr;
  *(self + 22) = nullptr;
  *(self + 23) = nullptr;
  *(self + 24) = nullptr;
  *(self + 25) = nullptr;
  *(self + 26) = nullptr;
  *(self + 27) = nullptr;
  *((uint8_t *)self + 112) = 0;
  *(self + 29) = nullptr;
  *(self + 30) = nullptr;
  *(self + 31) = nullptr;
  *(self + 32) = nullptr;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::getDescentReal  (binary VA: 0x1188700)
// Original: gameswf::Font::getDescentReal
// ----------------------------------------------------------------------------
long double gameswf::Font::getDescentReal(gameswf::Font::Self *self)
{
  int v1;
  char v2; // bp
  char v3; // di
  gameswf::Self *v4;
  int PreferedTypeface;
  float v6; // xmm0_4

  v1 = *((uint32_t *)self + 6);
  v2 = *((uint8_t *)self + 72);
  v3 = *((uint8_t *)self + 73);
  if ( v1 != 0 )
  {
    v4 = *((gameswf::Self **)self + 5);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 6) = 0;
      v1 = 0;
    }
  }
  PreferedTypeface = gameswf::FaceProvider::GetPreferedTypeface(
                       *(gameswf::FaceProvider::Self **)(*(uint32_t *)(v1 + 12) + 16),
                       v3,
                       v2);
  v6 = 0.0;
  if ( PreferedTypeface != 0 )
    return (float)-*(int16_t *)(PreferedTypeface + 72);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::getHeight  (binary VA: 0x11887c0)
// Original: gameswf::Font::getHeight
// ----------------------------------------------------------------------------
long double gameswf::Font::getHeight(gameswf::Font::Self *self)
{
  int v1;
  char v2; // bp
  char v3; // di
  gameswf::Self *v4;
  int PreferedTypeface;
  float v6; // xmm0_4

  v1 = *((uint32_t *)self + 6);
  v2 = *((uint8_t *)self + 72);
  v3 = *((uint8_t *)self + 73);
  if ( v1 != 0 )
  {
    v4 = *((gameswf::Self **)self + 5);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 6) = 0;
      v1 = 0;
    }
  }
  PreferedTypeface = gameswf::FaceProvider::GetPreferedTypeface(
                       *(gameswf::FaceProvider::Self **)(*(uint32_t *)(v1 + 12) + 16),
                       v3,
                       v2);
  v6 = 0.0;
  if ( PreferedTypeface != 0 )
    return (float)(*(int16_t *)(PreferedTypeface + 70) - *(int16_t *)(PreferedTypeface + 72));
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::getUnitsPerEM  (binary VA: 0x1188880)
// Original: gameswf::Font::getUnitsPerEM
// ----------------------------------------------------------------------------
long double gameswf::Font::getUnitsPerEM(gameswf::Font::Self *self)
{
  int v1;
  char v2; // bp
  char v3; // di
  gameswf::Self *v4;
  int PreferedTypeface;
  float v6; // xmm0_4

  v1 = *((uint32_t *)self + 6);
  v2 = *((uint8_t *)self + 72);
  v3 = *((uint8_t *)self + 73);
  if ( v1 != 0 )
  {
    v4 = *((gameswf::Self **)self + 5);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 6) = 0;
      v1 = 0;
    }
  }
  PreferedTypeface = gameswf::FaceProvider::GetPreferedTypeface(
                       *(gameswf::FaceProvider::Self **)(*(uint32_t *)(v1 + 12) + 16),
                       v3,
                       v2);
  v6 = 1.0;
  if ( PreferedTypeface != 0 )
    return (float)((float)((float)0 * 65536.0) + (float)*(uint16_t *)(PreferedTypeface + 68));
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::copyFrom  (binary VA: 0x1188960)
// Original: gameswf::Font::copyFrom
// ----------------------------------------------------------------------------
int gameswf::Font::copyFrom(gameswf::Self **self, gameswf::Font::Self *a2)
{
  gameswf::Font::Self *v2;
  char v3;
  int v4;
  gameswf::Self *v5;
  char *v6;
  gameswf::Self *v7;
  int v8;
  int result;
  char v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v2 = (gameswf::Font::Self *)self;
  if ( self + 11 != (gameswf::Self **)((char *)a2 + 44) )
  {
    v3 = *((uint8_t *)a2 + 44);
    if ( v3 == -1 )
      v4 = *((uint32_t *)a2 + 12) - 1;
    else
      v4 = v3 - 1;
    gameswf::String::resize((gameswf::String::Self *)(self + 11), v4);
    v5 = (gameswf::Self *)((gameswf::Font::Self *)((char *)a2 + 45));
    if ( *((uint8_t *)a2 + 44) == 0xFF )
      v5 = *((gameswf::Self **)a2 + 14);
    LOBYTE(v6) = *((uint8_t *)self + 44);
    if ( (uint8_t)(uintptr_t)v6 == 0xFF )
    {
      v6 = (char *)*(self + 12);
      v7 = *(self + 14);
    }
    else
    {
      v6 = (char *)(char)(uintptr_t)v6;
      v7 = (gameswf::Self *)((char *)self + 45);
    }
    gameswf::Strcpy_s(v7, v6, v5);
    v15 = *((uint32_t *)a2 + 15);
    if ( (uint8_t *)(v15 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      v10 = *((uint8_t *)a2 + 44);
      if ( v10 == -1 )
      {
        v11 = *((char **)a2 + 14);
        v12 = *((uint32_t *)a2 + 12) - 1;
      }
      else
      {
        v11 = (char *)a2 + 45;
        v12 = v10 - 1;
      }
      v8 = 5381;
      if ( v12 > 0 )
      {
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
        v2 = (gameswf::Font::Self *)self;
        v8 = v8 << 9 >> 9;
      }
      *((uint32_t *)a2 + 15) = v8 & 0x7FFFFF | v15 & 0xFF800000;
    }
    else
    {
      v8 = v15 << 9 >> 9;
    }
    *((uint32_t *)v2 + 15) = v8 & 0x7FFFFF | *((uint32_t *)v2 + 15) & 0xFF800000;
  }
  *((uint8_t *)v2 + 69) = *((uint8_t *)a2 + 69);
  *((uint8_t *)v2 + 70) = *((uint8_t *)a2 + 70);
  *((uint8_t *)v2 + 71) = *((uint8_t *)a2 + 71);
  *((uint8_t *)v2 + 72) = *((uint8_t *)a2 + 72);
  *((uint8_t *)v2 + 73) = *((uint8_t *)a2 + 73);
  *((uint8_t *)v2 + 74) = *((uint8_t *)a2 + 74);
  *((uint32_t *)v2 + 20) = *((uint32_t *)a2 + 20);
  *((uint32_t *)v2 + 21) = *((uint32_t *)a2 + 21);
  *((uint32_t *)v2 + 22) = *((uint32_t *)a2 + 22);
  result = *((uint8_t *)a2 + 112);
  *((uint8_t *)v2 + 112) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::getGlyph  (binary VA: 0x1188b10)
// Original: gameswf::Font::getGlyph
// ----------------------------------------------------------------------------
bool gameswf::Font::getGlyph(gameswf::Font::Self *self, Glyph *a2, uint16_t a3, int a4, int a5)
{
  int v5;
  gameswf::Self *v6;
  gameswf::GlyphProvider::Self *v7;
  bool result;
  int CharImage;
  uint32_t *g = (uint32_t *)a2;
  uint32_t v10;
  gameswf::RefCounted::Self *v11;

  *((uint16_t *)g + 15) = -1;
  *g = 1140850688;
  v5 = *((uint32_t *)self + 6);
  if ( v5 != 0 )
  {
    v6 = *((gameswf::Self **)self + 5);
    if ( *((uint8_t *)v6 + 2) == 0 )
    {
      if ( (*(uint16_t *)v6)-- == 1 )
        gameswf::free_internal(v6);
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 6) = 0;
      v5 = 0;
    }
  }
  v7 = *(gameswf::GlyphProvider::Self **)(*(uint32_t *)(v5 + 12) + 12);
  result = false;
  if ( v7 != nullptr )
  {
    *((uint8_t *)g + 34) = 0;
    CharImage = gameswf::GlyphProvider::getCharImage(v7, a3, a4, a5, (gameswf::Rect::Self *)(g + 2), (float *)g);
    v10 = g[1];
    v11 = (gameswf::RefCounted::Self *)CharImage;
    if ( (uint32_t)(uintptr_t)v11 != v10 )
    {
      if ( v10 != 0 )
        gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)(uintptr_t)g[1]);
      g[1] = (uint32_t)(uintptr_t)v11;
      if ( v11 == nullptr )
        return false;
      gameswf::RefCounted::addRef(v11);
      v10 = g[1];
    }
    return v10 != 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::getGlyphIndex  (binary VA: 0x1188c20)
// Original: gameswf::Font::getGlyphIndex
// ----------------------------------------------------------------------------
int gameswf::Font::getGlyphIndex(gameswf::Font::Self *self, uint16_t a2, int a3)
{
  int v3;
  gameswf::Self *v4;
  int FaceById;

  v3 = *((uint32_t *)self + 6);
  if ( v3 != 0 )
  {
    v4 = *((gameswf::Self **)self + 5);
    if ( *((uint8_t *)v4 + 2) == 0 )
    {
      if ( (*(uint16_t *)v4)-- == 1 )
        gameswf::free_internal(v4);
      *((uint32_t *)self + 5) = 0;
      *((uint32_t *)self + 6) = 0;
      v3 = 0;
    }
  }
  FaceById = gameswf::FaceProvider::GetFaceById(*(gameswf::FaceProvider::Self **)(*(uint32_t *)(v3 + 12) + 16), a3);
  return FT_Get_Char_Index(FaceById, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::getGlyphIndex  (binary VA: 0x1188cc0)
// Original: gameswf::Font::getGlyphIndex
// ----------------------------------------------------------------------------
int gameswf::Font::getGlyphIndex(gameswf::Font::Self *self, uint16_t a2, FT_FaceRec_ *a3)
{
  return FT_Get_Char_Index(a3, a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::getGlyphByIndex  (binary VA: 0x1188cf0)
// Original: gameswf::Font::getGlyphByIndex
// ----------------------------------------------------------------------------
int gameswf::Font::getGlyphByIndex(gameswf::Font::Self *self, int a2)
{
  int result;

  result = 0;
  if ( *((uint32_t *)self + 8) > a2 )
    return *(uint32_t *)(*((uint32_t *)self + 7) + 4 * a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::getKerningAdjustment  (binary VA: 0x1188d10)
// Original: gameswf::Font::getKerningAdjustment
// ----------------------------------------------------------------------------
long double gameswf::Font::getKerningAdjustment(gameswf::Font::Self *self, int16_t a2, int16_t a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  long double result; // fst7
  int i;
  int v9;

  v3 = *((uint32_t *)self + 27);
  if ( v3 == 0 )
    return 0.0;
  v9 = *(uint32_t *)(v3 + 4);
  v4 = 65599
     * (HIBYTE(a2)
      + 0xFFFF * ((uint8_t)a3 + 65599 * (HIBYTE(a3) + 352988219))
      + (((uint8_t)a3 + 65599 * (HIBYTE(a3) + 352988219)) << 6))
     + (uint8_t)a2;
  v5 = v4 & v9;
  v6 = v3 + 16 * (v4 & v9) + 8;
  if ( *(uint32_t *)v6 == -2 )
    return 0.0;
  result = 0.0;
  if ( v5 != (*(uint32_t *)(v3 + 16 * (v4 & v9) + 12) & v9) )
    return result;
  for ( i = *(uint32_t *)(v3 + 16 * (v4 & v9) + 12);
        v4 != i || a2 != *(uint16_t *)(v6 + 8) || a3 != *(uint16_t *)(v6 + 10);
        i = *(uint32_t *)(v3 + 16 * v5 + 12) )
  {
    v5 = *(uint32_t *)v6;
    if ( *(uint32_t *)v6 == -1 )
      return 0.0;
    v6 = v3 + 16 * v5 + 8;
  }
  if ( v5 < 0 )
    return 0.0;
  return *(float *)(v3 + 16 * v5 + 20);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::readFontAlignzones  (binary VA: 0x1188e10)
// Original: gameswf::Font::readFontAlignzones
// ----------------------------------------------------------------------------
int gameswf::Font::readFontAlignzones(gameswf::Font::Self *self, gameswf::Stream::Self *a2)
{
  gameswf::Stream::Self *v2;
  int result;
  int v4;
  uint8_t U8;
  gameswf::Self **v6;
  int v7;
  int v8;
  int j;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  bool v18;
  gameswf::Self *v19;
  gameswf::Self *v20;
  int v21;
  float *v22;
  gameswf::Self **v23;
  gameswf::Self **v24;
  gameswf::Stream::Self *v25;
  int v26;
  int i;
  int v28;

  v2 = a2;
  *((uint8_t *)self + 112) = gameswf::Stream::readUInt(a2, 2);
  gameswf::Stream::readUInt(a2, 6);
  gameswf::array_gameswf_Font_zone_record_26d2b5::resize(
             (gameswf::Font::Self *)((char *)self + 116),
             *((uint32_t *)self + 8));
  v28 = *((uint32_t *)self + 8);
  if ( v28 > 0 )
  {
    v4 = 0;
    for ( i = 0; i != v28; ++i )
    {
      U8 = gameswf::Stream::readU8(v2);
      v26 = U8;
      v6 = (gameswf::Self **)(*((uint32_t *)self + 29) + v4);
      v7 = (int)(uintptr_t)(v6[1]);
      if ( U8 != 0 )
      {
        v8 = (int)(uintptr_t)(v6[2]);
        if ( v26 > v8 && v6[3] == nullptr )
        {
          v17 = v26 + (v26 >> 1);
          v18 = v17 == 0;
          v21 = v17;
          v6[2] = (gameswf::Self *)v17;
          v19 = *v6;
          if ( v18 )
          {
            if ( v19 != nullptr )
            {
              v23 = v6;
              gameswf::free_internal(v19);
              v6 = v23;
            }
            *v6 = nullptr;
          }
          else
          {
            v24 = v6;
            if ( v19 != nullptr )
              v20 = (gameswf::Self *)gameswf::realloc_internal(*v6, 8 * v21, 8 * v8);
            else
              v20 = (gameswf::Self *)gameswf::malloc_internal(8 * v21);
            v6 = v24;
            *v24 = v20;
          }
        }
      }
      for ( j = 8 * v7; v26 > v7; j += 8 )
      {
        v10 = (uint32_t *)((char *)*v6 + j);
        if ( v10 != nullptr )
        {
          *v10 = 0;
          v10[1] = 0;
        }
        ++v7;
      }
      v6[1] = (gameswf::Self *)v26;
      if ( v26 != 0 )
      {
        v25 = v2;
        v11 = 0;
        v12 = v4;
        do
        {
          v13 = 8 * v11++;
          v22 = (float *)(v13 + *(uint32_t *)(*((uint32_t *)self + 29) + v12));
          *v22 = gameswf::Stream::readFloat16(v25);
          v14 = *(uint32_t *)(*((uint32_t *)self + 29) + v12) + v13;
          *(float *)(v14 + 4) = gameswf::Stream::readFloat16(v25);
        }
        while ( v26 > v11 );
        v4 = v12;
        v2 = v25;
      }
      v15 = *((uint32_t *)self + 29) + v4;
      *(uint8_t *)(v15 + 16) = gameswf::Stream::readUInt(v2, 1) == 1;
      v16 = *((uint32_t *)self + 29) + v4;
      *(uint8_t *)(v16 + 17) = gameswf::Stream::readUInt(v2, 1) == 1;
      v4 += 20;
      result = gameswf::Stream::readUInt(v2, 6);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::Destroy  (binary VA: 0x1189080)
// Original: gameswf::Font::~Font
// ----------------------------------------------------------------------------
void gameswf::Font::Destroy(gameswf::Font::Self *self)
{
  gameswf::Font::Self *v1;
  int v2;
  gameswf::RefCounted::Self *v3;
  int v4;
  int i;
  gameswf::Self *v6;
  gameswf::Self *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  gameswf::Self *v16;
  gameswf::Self *v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  int v23;
  gameswf::RefCounted::Self *v24;
  int v25;
  int v26;
  gameswf::Self *v27;
  gameswf::Self *v28;
  bool v29;
  gameswf::Self *v30;
  int v31;
  uint32_t *v32;
  int v33;
  uint32_t *v34;
  gameswf::RefCounted::Self *v35;
  gameswf::RefCounted::Self *v36;

  v1 = self;
  v2 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091948);
  v3 = (gameswf::RefCounted::Self *)((gameswf::Font::Self *)((char *)self + 28));
  if ( v2 <= 0 )
  {
    if ( v2 < 0 )
    {
      v33 = 4 * v2;
      do
      {
        v34 = (uint32_t *)(*(uint32_t *)v3 + v33);
        if ( v34 != nullptr )
          *v34 = 0;
        v33 += 4;
        ++v2;
      }
      while ( v2 != 0 );
    }
  }
  else
  {
    v4 = v2;
    for ( i = 0; i != v4; ++i )
    {
      if ( *(uint32_t *)(*(uint32_t *)v3 + 4 * i) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*(uint32_t *)v3 + 4 * i));
    }
    v1 = self;
  }
  *((uint32_t *)v1 + 8) = 0;
  gameswf::array_gameswf_Font_zone_record_26d2b5::resize((gameswf::Font::Self *)((char *)v1 + 116), 0);
  if ( *((uint32_t *)v1 + 32) == 0 )
  {
    v6 = *((gameswf::Self **)v1 + 29);
    *((uint32_t *)v1 + 31) = 0;
    if ( v6 != nullptr )
      gameswf::free_internal(v6);
    *((uint32_t *)v1 + 29) = 0;
  }
  v7 = *((gameswf::Self **)v1 + 27);
  if ( v7 != nullptr )
  {
    if ( *((int *)v7 + 1) >= 0 )
    {
      v8 = 8;
      v9 = 0;
      v10 = *((uint32_t *)v7 + 1);
      do
      {
        v11 = (uint32_t *)((char *)v7 + v8);
        if ( *(uint32_t *)((char *)v7 + v8) != -2 )
        {
          *v11 = -2;
          v11[1] = 0;
          v7 = *((gameswf::Self **)v1 + 27);
        }
        ++v9;
        v8 += 16;
      }
      while ( v10 >= v9 );
      v3 = (gameswf::RefCounted::Self *)((gameswf::Font::Self *)((char *)self + 28));
    }
    gameswf::free_internal(v7);
    *((uint32_t *)v1 + 27) = 0;
  }
  v12 = *((uint32_t *)v1 + 24);
  if ( v12 < 0 )
  {
    v13 = 4 * v12;
    do
    {
      v14 = (uint32_t *)(*((uint32_t *)v1 + 23) + v13);
      if ( v14 != nullptr )
        *v14 = 0;
      v13 += 4;
      ++v12;
    }
    while ( v12 != 0 );
  }
  v15 = *((uint32_t *)v1 + 26);
  *((uint32_t *)v1 + 24) = 0;
  if ( v15 == 0 )
  {
    v16 = *((gameswf::Self **)v1 + 23);
    *((uint32_t *)v1 + 25) = 0;
    if ( v16 != nullptr )
      gameswf::free_internal(v16);
    *((uint32_t *)v1 + 23) = 0;
  }
  v17 = *((gameswf::Self **)v1 + 19);
  if ( v17 != nullptr )
  {
    if ( *((int *)v17 + 1) >= 0 )
    {
      v35 = v3;
      v18 = 8;
      v19 = 0;
      v20 = *((uint32_t *)v17 + 1);
      do
      {
        v21 = (uint32_t *)((char *)v17 + v18);
        if ( *(uint32_t *)((char *)v17 + v18) != -2 )
        {
          *v21 = -2;
          v21[1] = 0;
          v17 = *((gameswf::Self **)v1 + 19);
        }
        ++v19;
        v18 += 12;
      }
      while ( v20 >= v19 );
      v3 = v35;
    }
    gameswf::free_internal(v17);
    *((uint32_t *)v1 + 19) = 0;
  }
  if ( *((uint8_t *)v1 + 44) == 0xFF && (*((uint8_t *)v1 + 63) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)v1 + 14));
  v22 = *((uint32_t *)v1 + 8);
  if ( v22 <= 0 )
  {
    if ( v22 < 0 )
    {
      v31 = 4 * v22;
      do
      {
        v32 = (uint32_t *)(*(uint32_t *)v3 + v31);
        if ( v32 != nullptr )
          *v32 = 0;
        v31 += 4;
        ++v22;
      }
      while ( v22 != 0 );
    }
  }
  else
  {
    v36 = (gameswf::RefCounted::Self *)(v1);
    v23 = *((uint32_t *)v1 + 8);
    v24 = v3;
    v25 = 0;
    do
    {
      if ( *(uint32_t *)(*(uint32_t *)v24 + 4 * v25) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*(uint32_t *)v24 + 4 * v25));
      ++v25;
    }
    while ( v25 != v23 );
    v1 = (gameswf::Font::Self *)(v36);
  }
  v26 = *((uint32_t *)v1 + 10);
  *((uint32_t *)v1 + 8) = 0;
  if ( v26 == 0 )
  {
    v27 = *((gameswf::Self **)v1 + 7);
    *((uint32_t *)v1 + 9) = 0;
    if ( v27 != nullptr )
      gameswf::free_internal(v27);
    *((uint32_t *)v1 + 7) = 0;
  }
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_208E728);
  v28 = *((gameswf::Self **)v1 + 5);
  if ( v28 != nullptr )
  {
    v29 = (*(uint16_t *)v28)-- == 1;
    if ( v29 )
      gameswf::free_internal(v28);
  }
  v30 = *((gameswf::Self **)v1 + 3);
  if ( v30 != nullptr )
  {
    v29 = (*(uint16_t *)v30)-- == 1;
    if ( v29 )
      gameswf::free_internal(v30);
  }
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_208E508);
  gameswf::RefCounted::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::Destroy_ea11893c0  (binary VA: 0x11893c0)
// Original: gameswf::Font::~Font
// ----------------------------------------------------------------------------
void gameswf::Font::Destroy_ea11893c0(gameswf::Font::Self *self)
{
  gameswf::Font::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::readCodeTable  (binary VA: 0x1189400)
// Original: gameswf::Font::readCodeTable
// ----------------------------------------------------------------------------
int gameswf::Font::readCodeTable(gameswf::Font::Self *self, gameswf::Stream::Self *a2)
{
  int result;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  uint16_t U16;
  int *v12;
  int v13;
  int v14;
  int v15;
  int i;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int *v23;
  int v24;
  int v25;
  int v26;
  int j;
  int v28;
  uint16_t v29;
  uint16_t v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  uint16_t U8;
  int v38;
  int v39;
  int v40;
  int v41;
  gameswf::hash<unsigned short, short, gameswf::Font::simple_code_hash<unsigned short>> *v42;
  gameswf::hash<unsigned short, short, gameswf::Font::simple_code_hash<unsigned short>> *v43;

  if ( *((uint8_t *)self + 74) != 0 )
  {
    result = *((uint32_t *)self + 8);
    if ( result <= 0 )
      return result;
    v32 = 0;
    v43 = (gameswf::hash<unsigned short, short, gameswf::Font::simple_code_hash<unsigned short>> *)((gameswf::Font::Self *)((char *)self + 76));
    while ( 1 )
    {
      U16 = gameswf::Stream::readU16(a2);
      v12 = *((int **)self + 19);
      if ( v12 != nullptr )
      {
        v13 = U16;
        v14 = U16 & v12[1];
        v34 = v12[1];
        v15 = (int)(uintptr_t)(&v12[3 * v14 + 2]);
        if ( *(uint32_t *)v15 != -2 && v14 == (v12[3 * v14 + 3] & v34) )
        {
          for ( i = v12[3 * v14 + 3]; U16 != i || U16 != *(uint16_t *)(v15 + 8); i = v12[3 * v14 + 3] )
          {
            v14 = *(uint32_t *)v15;
            if ( *(uint32_t *)v15 == -1 )
              goto LABEL_31;
            v15 = (int)(uintptr_t)(&v12[3 * v14 + 2]);
          }
          if ( v14 >= 0 )
          {
            result = (int)(uintptr_t)(&v12[3 * v14 + 4]) + 2;
            goto LABEL_29;
          }
        }
LABEL_31:
        v17 = *v12;
        if ( 3 * *v12 > 2 * v34 + 2 )
        {
          v29 = U16;
          gameswf::hash_unsigned_short_short_gam_63649f::set_raw_capacity(
            v43,
            2 * v34 + 2);
          U16 = v29;
          v12 = *((int **)self + 19);
          v17 = *v12;
        }
      }
      else
      {
        v30 = U16;
        gameswf::hash_unsigned_short_short_gam_63649f::set_raw_capacity(v43, 8);
        U16 = v30;
        v13 = v30;
        v12 = *((int **)self + 19);
        v17 = *v12;
      }
      *v12 = v17 + 1;
      v18 = *((uint32_t *)self + 19);
      v19 = *(uint32_t *)(v18 + 4);
      v35 = v19 & v13;
      v38 = v18 + 12 * (v19 & v13) + 8;
      v20 = v19 & v13;
      v41 = *(uint32_t *)v38;
      if ( *(uint32_t *)v38 == -2 )
      {
        *(uint32_t *)v38 = -1;
        *(uint32_t *)(v18 + 12 * (v19 & v13) + 12) = v13;
        *(uint16_t *)(v18 + 12 * (v19 & v13) + 16) = U16;
        *(uint16_t *)(v18 + 12 * (v19 & v13) + 18) = 0;
      }
      else
      {
        while ( 1 )
        {
          v20 = v19 & (v20 + 1);
          if ( *(uint32_t *)(v18 + 12 * v20 + 8) == -2 )
            break;
          if ( v35 == v20 )
          {
            v39 = v18 + 12 * v20 + 8;
            v20 = v19 & v13;
            goto LABEL_37;
          }
        }
        v39 = v18 + 12 * v20 + 8;
LABEL_37:
        v21 = *(uint32_t *)(v18 + 12 * (v19 & v13) + 12) & v19;
        if ( v35 == v21 )
        {
          *(uint32_t *)v39 = v41;
          *(uint32_t *)(v39 + 4) = *(uint32_t *)(v38 + 4);
          *(uint16_t *)(v39 + 8) = *(uint16_t *)(v38 + 8);
          *(uint16_t *)(v39 + 10) = *(uint16_t *)(v38 + 10);
          *(uint16_t *)(v38 + 8) = U16;
          *(uint16_t *)(v38 + 10) = 0;
          *(uint32_t *)v38 = v20;
          *(uint32_t *)(v38 + 4) = v13;
        }
        else
        {
          v22 = v21;
          do
          {
            v23 = (int *)(v18 + 12 * v22 + 8);
            v22 = *v23;
          }
          while ( v35 != *v23 );
          *(uint32_t *)v39 = v41;
          *(uint32_t *)(v39 + 4) = *(uint32_t *)(v38 + 4);
          *(uint16_t *)(v39 + 8) = *(uint16_t *)(v38 + 8);
          *(uint16_t *)(v39 + 10) = *(uint16_t *)(v38 + 10);
          *v23 = v20;
          *(uint32_t *)(v38 + 8) = U16;
          *(uint32_t *)(v38 + 4) = v13;
          *(uint32_t *)v38 = -1;
        }
      }
      v24 = *((uint32_t *)self + 19);
      if ( v24 == 0
        || (v36 = *(uint32_t *)(v24 + 4), *(uint32_t *)(v25 = v24 + 12 * (v13 & v36) + 8) == -2)
        || (v26 = v13 & v36, (v13 & v36) != (*(uint32_t *)(v24 + 12 * (v13 & v36) + 12) & v36)) )
      {
LABEL_51:
        v28 = -4;
LABEL_52:
        result = v24 + v28 + 10;
        goto LABEL_29;
      }
      for ( j = *(uint32_t *)(v24 + 12 * (v13 & v36) + 12);
            v13 != j || U16 != *(uint16_t *)(v25 + 8);
            j = *(uint32_t *)(v24 + 12 * v26 + 12) )
      {
        v26 = *(uint32_t *)v25;
        if ( *(uint32_t *)v25 == -1 )
          goto LABEL_51;
        v25 = v24 + 12 * v26 + 8;
      }
      if ( v26 < 0 )
      {
        v28 = 12 * v26 + 8;
        goto LABEL_52;
      }
      result = v24 + 12 * v26 + 18;
LABEL_29:
      *(uint16_t *)result = v32++;
      if ( v32 >= *((uint32_t *)self + 8) )
        return result;
    }
  }
  result = *((uint32_t *)self + 8);
  v33 = 0;
  v42 = (gameswf::hash<unsigned short, short, gameswf::Font::simple_code_hash<unsigned short>> *)((gameswf::Font::Self *)((char *)self + 76));
  if ( result > 0 )
  {
    do
    {
      U8 = (uint8_t)gameswf::Stream::readU8(a2);
      v3 = *((int **)self + 19);
      if ( v3 != nullptr )
      {
        v4 = *v3;
        if ( 3 * *v3 > 2 * v3[1] + 2 )
        {
          gameswf::hash_unsigned_short_short_gam_63649f::set_raw_capacity(
            v42,
            2 * v3[1] + 2);
          v3 = *((int **)self + 19);
          v4 = *v3;
        }
      }
      else
      {
        gameswf::hash_unsigned_short_short_gam_63649f::set_raw_capacity(v42, 8);
        v3 = *((int **)self + 19);
        v4 = *v3;
      }
      *v3 = v4 + 1;
      v5 = *((uint32_t *)self + 19);
      v6 = *(uint32_t *)(v5 + 4);
      v7 = (uint16_t)(v6 & U8);
      v31 = (int *)(v5 + 12 * v7 + 8);
      v40 = *v31;
      result = v7;
      if ( *v31 == -2 )
      {
        *v31 = -1;
        *(uint32_t *)(v5 + 12 * v7 + 12) = U8;
        *(uint16_t *)(v5 + 12 * v7 + 16) = U8;
        *(uint16_t *)(v5 + 12 * v7 + 18) = v33;
      }
      else
      {
        while ( 1 )
        {
          result = v6 & (result + 1);
          v8 = v5 + 12 * result + 8;
          if ( *(uint32_t *)v8 == -2 )
            break;
          if ( v7 == result )
          {
            result = (uint16_t)(v6 & U8);
            break;
          }
        }
        v9 = *(uint32_t *)(v5 + 12 * v7 + 12) & v6;
        if ( v7 == v9 )
        {
          *(uint32_t *)v8 = v40;
          *(uint32_t *)(v8 + 4) = *(uint32_t *)(v5 + 12 * v7 + 12);
          *(uint16_t *)(v8 + 8) = *(uint16_t *)(v5 + 12 * v7 + 16);
          *(uint16_t *)(v8 + 10) = *(uint16_t *)(v5 + 12 * v7 + 18);
          *v31 = result;
          result = U8;
          *(uint16_t *)(v5 + 12 * v7 + 16) = U8;
          *(uint16_t *)(v5 + 12 * v7 + 18) = v33;
          *(uint32_t *)(v5 + 12 * v7 + 12) = U8;
        }
        else
        {
          do
          {
            v10 = (int *)(v5 + 12 * v9 + 8);
            v9 = *v10;
          }
          while ( v7 != *v10 );
          *(uint32_t *)v8 = v40;
          *(uint32_t *)(v8 + 4) = *(uint32_t *)(v5 + 12 * v7 + 12);
          *(uint16_t *)(v8 + 8) = *(uint16_t *)(v5 + 12 * v7 + 16);
          *(uint16_t *)(v8 + 10) = *(uint16_t *)(v5 + 12 * v7 + 18);
          *v10 = result;
          result = U8;
          *(uint16_t *)(v5 + 12 * v7 + 16) = U8;
          *(uint16_t *)(v5 + 12 * v7 + 18) = v33;
          *(uint32_t *)(v5 + 12 * v7 + 12) = U8;
          *v31 = -1;
        }
      }
      ++v33;
    }
    while ( *((uint32_t *)self + 8) > v33 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::readFontInfo  (binary VA: 0x11898f0)
// Original: gameswf::Font::readFontInfo
// ----------------------------------------------------------------------------
int gameswf::Font::readFontInfo(gameswf::Self **self, gameswf::Self **a2, int a3)
{
  char U8;

  gameswf::Stream::readStringWithLength(a2, self + 11);
  U8 = gameswf::Stream::readU8((gameswf::Stream::Self *)a2);
  *((uint8_t *)self + 69) = (U8 & 0x20) != 0;
  *((uint8_t *)self + 70) = (U8 & 0x10) != 0;
  *((uint8_t *)self + 71) = (U8 & 8) != 0;
  *((uint8_t *)self + 72) = (U8 & 4) != 0;
  *((uint8_t *)self + 73) = (U8 & 2) != 0;
  *((uint8_t *)self + 74) = U8 & 1;
  if ( a3 == 62 )
    gameswf::Stream::readU8((gameswf::Stream::Self *)a2);
  return gameswf::Font::readCodeTable((gameswf::Font::Self *)self, (gameswf::Stream::Self *)a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::read  (binary VA: 0x1189990)
// Original: gameswf::Font::read
// ----------------------------------------------------------------------------
int gameswf::Font::read(gameswf::Font::Self *self, gameswf::Stream::Self *a2, int a3, gameswf::MovieDefinitionSub::Self *a4)
{
  int result;
  gameswf::MovieDefinitionSub::Self *v5;
  gameswf::Stream::Self *v6;
  int v7;
  int v8;
  gameswf::Self *v9;
  int i;
  int v11;
  int v12;
  int v13;
  gameswf::Self *v14;
  uint16_t j;
  uint16_t v16; // di
  int v17;
  gameswf::RefCounted::Self *v18;
  int v19;
  gameswf::Stream::Self *v20;
  uint32_t *v21;
  gameswf::Stream::Self *v22;
  int v23;
  int k;
  uint32_t *v25;
  int v26;
  gameswf::RefCounted::Self *v27;
  gameswf::RefCounted::Self **v28;
  gameswf::Player::Self *v29;
  gameswf::Self *v30;
  bool v31;
  int v32;
  gameswf::Self *v33;
  int v34;
  uint32_t *v35;
  int v36;
  uint16_t v37; // si
  int v38;
  gameswf::RefCounted::Self *v39;
  int v40;
  uint32_t *v41;
  gameswf::Stream::Self *v42;
  int v43;
  int v44;
  uint32_t *v45;
  int v46;
  gameswf::RefCounted::Self *v47;
  gameswf::RefCounted::Self **v48;
  gameswf::Player::Self *v49;
  gameswf::Self *v50;
  int16_t S16;
  int v52;
  int v53;
  int v54;
  int v55;
  uint32_t *v56;
  int m;
  float *v58;
  int v59;
  int n;
  uint16_t v61;
  int16_t U8; // si
  float v63; // xmm0_4
  int *v64;
  int v65;
  int v66;
  int v67;
  int ii;
  float *v69;
  int v70;
  gameswf::Self *v71;
  int v72;
  gameswf::Self *v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int *v81;
  int v82;
  int jj;
  int v84;
  void *v85;
  void *v86;
  int v87;
  gameswf::Self *v88;
  void *v89;
  typedef size_t _g4_t_v90;
  typedef size_t _g4_t_v91;
  typedef gameswf::Self **_g4_t_v92;
  typedef gameswf::Self **_g4_t_v93;
  typedef gameswf::RefCounted::Self *_g4_t_v94;
  typedef gameswf::RefCounted::Self *_g4_t_v95;
  typedef gameswf::RefCounted::Self *_g4_t_v96;
  typedef gameswf::RefCounted::Self *_g4_t_v97;
  typedef gameswf::Stream::Self *_g4_t_v98;
  typedef gameswf::Stream::Self *_g4_t_v99;
  typedef gameswf::Self *_g4_t_v100;
  typedef gameswf::Stream::Self *_g4_t_v101;
  typedef gameswf::Stream::Self *_g4_t_v102;
  typedef gameswf::Stream::Self *_g4_t_v103;
  typedef gameswf::Stream::Self *_g4_t_v104;
  typedef gameswf::Stream::Self *_g4_t_v105;
  typedef int _g4_t_U16;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef gameswf::Self *_g4_t_v115;
  typedef gameswf::Self *_g4_t_v116;
  typedef int _g4_t_Position;
  typedef int _g4_t_v118;
  typedef int16_t _g4_t_v119;
  typedef int _g4_t_U32;
  typedef gameswf::MovieDefinitionSub::Self *_g4_t_v121;
  typedef int _g4_t_v122;
  typedef int *_g4_t_v123;
  typedef gameswf::Stream::Self *_g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef gameswf::MovieDefinitionSub::Self *_g4_t_v127;
  typedef int *_g4_t_v128;
  typedef int _g4_t_UInt;
  typedef int _g4_t_v130;
  typedef gameswf::hash<gameswf::Font::kerning_pair, float, gameswf::fixed_size_hash<gameswf::Font::kerning_pair>> *_g4_t_v131;
  typedef int _g4_t_v132;
  typedef char _g4_t_v133[44];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v90)) > _g4_s0 ? (4u + sizeof(_g4_t_v90)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v91)) > _g4_s1 ? (4u + sizeof(_g4_t_v91)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v92)) > _g4_s2 ? (32u + sizeof(_g4_t_v92)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v93)) > _g4_s3 ? (32u + sizeof(_g4_t_v93)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v94)) > _g4_s4 ? (32u + sizeof(_g4_t_v94)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v95)) > _g4_s5 ? (32u + sizeof(_g4_t_v95)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v96)) > _g4_s6 ? (32u + sizeof(_g4_t_v96)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v97)) > _g4_s7 ? (32u + sizeof(_g4_t_v97)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v98)) > _g4_s8 ? (48u + sizeof(_g4_t_v98)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v99)) > _g4_s9 ? (48u + sizeof(_g4_t_v99)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v100)) > _g4_s10 ? (48u + sizeof(_g4_t_v100)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v101)) > _g4_s11 ? (48u + sizeof(_g4_t_v101)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v102)) > _g4_s12 ? (52u + sizeof(_g4_t_v102)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v103)) > _g4_s13 ? (52u + sizeof(_g4_t_v103)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v104)) > _g4_s14 ? (52u + sizeof(_g4_t_v104)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v105)) > _g4_s15 ? (52u + sizeof(_g4_t_v105)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_U16)) > _g4_s16 ? (56u + sizeof(_g4_t_U16)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v107)) > _g4_s17 ? (56u + sizeof(_g4_t_v107)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v108)) > _g4_s18 ? (56u + sizeof(_g4_t_v108)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v109)) > _g4_s19 ? (56u + sizeof(_g4_t_v109)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v110)) > _g4_s20 ? (56u + sizeof(_g4_t_v110)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v111)) > _g4_s21 ? (56u + sizeof(_g4_t_v111)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v112)) > _g4_s22 ? (60u + sizeof(_g4_t_v112)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v113)) > _g4_s23 ? (60u + sizeof(_g4_t_v113)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v114)) > _g4_s24 ? (60u + sizeof(_g4_t_v114)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v115)) > _g4_s25 ? (64u + sizeof(_g4_t_v115)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v116)) > _g4_s26 ? (64u + sizeof(_g4_t_v116)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_Position)) > _g4_s27 ? (68u + sizeof(_g4_t_Position)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v118)) > _g4_s28 ? (68u + sizeof(_g4_t_v118)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v119)) > _g4_s29 ? (68u + sizeof(_g4_t_v119)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_U32)) > _g4_s30 ? (72u + sizeof(_g4_t_U32)) : _g4_s30,
    _g4_s32 = (72u + sizeof(_g4_t_v121)) > _g4_s31 ? (72u + sizeof(_g4_t_v121)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v122)) > _g4_s32 ? (72u + sizeof(_g4_t_v122)) : _g4_s32,
    _g4_s34 = (72u + sizeof(_g4_t_v123)) > _g4_s33 ? (72u + sizeof(_g4_t_v123)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v124)) > _g4_s34 ? (76u + sizeof(_g4_t_v124)) : _g4_s34,
    _g4_s36 = (76u + sizeof(_g4_t_v125)) > _g4_s35 ? (76u + sizeof(_g4_t_v125)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v126)) > _g4_s36 ? (76u + sizeof(_g4_t_v126)) : _g4_s36,
    _g4_s38 = (80u + sizeof(_g4_t_v127)) > _g4_s37 ? (80u + sizeof(_g4_t_v127)) : _g4_s37,
    _g4_s39 = (80u + sizeof(_g4_t_v128)) > _g4_s38 ? (80u + sizeof(_g4_t_v128)) : _g4_s38,
    _g4_s40 = (84u + sizeof(_g4_t_UInt)) > _g4_s39 ? (84u + sizeof(_g4_t_UInt)) : _g4_s39,
    _g4_s41 = (84u + sizeof(_g4_t_v130)) > _g4_s40 ? (84u + sizeof(_g4_t_v130)) : _g4_s40,
    _g4_s42 = (88u + sizeof(_g4_t_v131)) > _g4_s41 ? (88u + sizeof(_g4_t_v131)) : _g4_s41,
    _g4_s43 = (108u + sizeof(_g4_t_v132)) > _g4_s42 ? (108u + sizeof(_g4_t_v132)) : _g4_s42,
    _g4_s44 = (112u + sizeof(_g4_t_v133)) > _g4_s43 ? (112u + sizeof(_g4_t_v133)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 4u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 4u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 32u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 32u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 32u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 32u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 32u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 32u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 48u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 48u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 48u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 48u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 52u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 52u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 52u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 52u);
  _g4_t_U16 &U16 = *reinterpret_cast<_g4_t_U16 *>(_g4_sf + 56u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 56u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 56u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 56u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 56u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 56u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 60u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 60u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 60u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 64u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 64u);
  _g4_t_Position &Position = *reinterpret_cast<_g4_t_Position *>(_g4_sf + 68u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 68u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 68u);
  _g4_t_U32 &U32 = *reinterpret_cast<_g4_t_U32 *>(_g4_sf + 72u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 72u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 72u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 72u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 76u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 76u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 76u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 80u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 80u);
  _g4_t_UInt &UInt = *reinterpret_cast<_g4_t_UInt *>(_g4_sf + 84u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 84u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 88u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 108u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 112u);

  result = a3;
  v5 = a4;
  v6 = a2;
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(a4);
  if ( a3 != 10 )
  {
    if ( a3 != 75 && a3 != 48 )
      return result;
    UInt = gameswf::Stream::readUInt(a2, 1);
    *((uint8_t *)self + 70) = gameswf::Stream::readUInt(a2, 1) != 0;
    *((uint8_t *)self + 69) = gameswf::Stream::readUInt(a2, 1) != 0;
    *((uint8_t *)self + 71) = gameswf::Stream::readUInt(a2, 1) != 0;
    v7 = gameswf::Stream::readUInt(a2, 1);
    *((uint8_t *)self + 74) = gameswf::Stream::readUInt(a2, 1) != 0;
    *((uint8_t *)self + 72) = gameswf::Stream::readUInt(a2, 1) != 0;
    *((uint8_t *)self + 73) = gameswf::Stream::readUInt(a2, 1) != 0;
    gameswf::Stream::readU8(a2);
    gameswf::Stream::readStringWithLength((gameswf::Self **)a2, (gameswf::Self **)self + 11);
    U16 = (uint16_t)gameswf::Stream::readU16(a2);
    Position = gameswf::Stream::getPosition(a2);
    if ( v7 != 0 )
    {
      v112 = 0;
      v115 = nullptr;
      if ( U16 != 0 )
      {
        v8 = 1;
        v9 = nullptr;
        for ( i = gameswf::Stream::readU32(a2); ; i = gameswf::Stream::readU32(a2) )
        {
          v11 = i;
          if ( v8 > v112 )
          {
            v12 = (v8 >> 1) + v8;
            if ( v12 != 0 )
            {
              if ( v9 != nullptr )
              {
                v9 = (gameswf::Self *)gameswf::realloc_internal(v9, 4 * v12, 4 * v112);
              }
              else
              {
                v90 = 0;
                v9 = (gameswf::Self *)gameswf::malloc_internal(4 * v12);
              }
              v112 = (v8 >> 1) + v8;
            }
            else
            {
              if ( v9 != nullptr )
              {
                v90 = 4 * v112;
                gameswf::free_internal(v9);
              }
              v112 = 0;
              v9 = nullptr;
            }
          }
          if ( (char *)v9 + 4 * v8 != (char *)&loc_4 )
            *((uint32_t *)v9 + v8 - 1) = v11;
          if ( ++v8 == U16 + 1 )
            break;
        }
        v115 = v9;
        v5 = a4;
        v6 = a2;
      }
      U32 = gameswf::Stream::readU32(v6);
    }
    else
    {
      if ( U16 != 0 )
      {
        v13 = 1;
        v113 = 0;
        v14 = nullptr;
        for ( j = gameswf::Stream::readU16(a2); ; j = gameswf::Stream::readU16(a2) )
        {
          v16 = j;
          if ( v113 < v13 )
          {
            v17 = (v13 >> 1) + v13;
            if ( v17 != 0 )
            {
              if ( v14 != nullptr )
              {
                v14 = (gameswf::Self *)gameswf::realloc_internal(v14, 4 * v17, 4 * v113);
              }
              else
              {
                v90 = 0;
                v14 = (gameswf::Self *)gameswf::malloc_internal(4 * v17);
              }
              v113 = (v13 >> 1) + v13;
            }
            else
            {
              if ( v14 != nullptr )
              {
                v90 = 4 * v113;
                gameswf::free_internal(v14);
              }
              v113 = 0;
              v14 = nullptr;
            }
          }
          if ( (char *)v14 + 4 * v13 != (char *)&loc_4 )
            *((uint32_t *)v14 + v13 - 1) = v16;
          if ( ++v13 == U16 + 1 )
            break;
        }
        v115 = v14;
        v5 = a4;
        v6 = a2;
      }
      else
      {
        v115 = nullptr;
      }
      U32 = (uint16_t)gameswf::Stream::readU16(v6);
    }
    v18 = (gameswf::RefCounted::Self *)((gameswf::Font::Self *)((char *)self + 28));
    v19 = *((uint32_t *)self + 8);
    if ( U16 < v19 )
    {
      v102 = *((gameswf::Stream::Self **)self + 8);
      v127 = v5;
      v20 = (gameswf::Stream::Self *)(v19 + 1);
      v21 = (uint32_t *)((char *)self + 28);
      v22 = (gameswf::Stream::Self *)(U16 + 1);
      v98 = v20;
      v124 = v6;
      v23 = 4 * U16;
      do
      {
        if ( *(uint32_t *)(*v21 + v23) != 0 )
          gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*v21 + v23));
        v22 = (gameswf::Stream::Self *)((char *)v22 + 1);
        v23 += 4;
      }
      while ( v22 != v98 );
      v18 = (gameswf::RefCounted::Self *)((gameswf::Font::Self *)((char *)self + 28));
      v19 = (int)(uintptr_t)(v102);
      v6 = v124;
      v5 = v127;
    }
    if ( U16 != 0 )
    {
      v125 = *((uint32_t *)self + 9);
      if ( U16 > v125 && *((uint32_t *)self + 10) == 0 )
      {
        v72 = U16 + (U16 >> 1);
        *((uint32_t *)self + 9) = v72;
        if ( v72 != 0 )
        {
          v96 = v18;
          if ( *((uint32_t *)self + 7) != 0 )
          {
            v85 = gameswf::realloc_internal(*((gameswf::Self **)self + 7), 4 * v72, 4 * v125);
          }
          else
          {
            v90 = 0;
            v85 = (void *)gameswf::malloc_internal(4 * v72);
          }
          *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v85);
          v18 = v96;
        }
        else
        {
          v73 = *((gameswf::Self **)self + 7);
          if ( v73 != nullptr )
          {
            v95 = v18;
            v90 = 4 * v125;
            gameswf::free_internal(v73);
            v18 = v95;
          }
          *((uint32_t *)self + 7) = 0;
        }
      }
    }
    for ( k = 4 * v19; U16 > v19; k += 4 )
    {
      v25 = (uint32_t *)(*(uint32_t *)v18 + k);
      if ( v25 != nullptr )
        *v25 = 0;
      ++v19;
    }
    *((uint32_t *)self + 8) = U16;
    if ( G4_VCALL<int>(v5, 188, v90) != 0 )
    {
      if ( U32 + Position >= gameswf::Stream::getTagEndPosition(v6) )
        goto LABEL_58;
      gameswf::Stream::setPosition(v6, U32 + Position);
    }
    else
    {
      if ( U16 != 0 )
      {
        v26 = 0;
        v99 = v6;
        do
        {
          gameswf::Stream::setPosition(v99, *((uint32_t *)v115 + v26) + Position);
          v29 = *((gameswf::Player::Self **)v5 + 6);
          if ( v29 != nullptr )
          {
            v30 = *((gameswf::Self **)v5 + 5);
            if ( *((uint8_t *)v30 + 2) == 0 )
            {
              v31 = (*(uint16_t *)v30)-- == 1;
              if ( v31 )
                gameswf::free_internal(v30);
              *((uint32_t *)v5 + 5) = 0;
              *((uint32_t *)v5 + 6) = 0;
              v29 = nullptr;
            }
          }
          v92 = (gameswf::Self **)opNew(0x80u);
          gameswf::ShapeCharacterDef::ShapeCharacterDef(v92, v29);
          gameswf::ShapeCharacterDef::read(v92, v99, 22, false, v5);
          v27 = (gameswf::RefCounted::Self *)v92;
          v28 = (gameswf::RefCounted::Self **)(*((uint32_t *)self + 7) + 4 * v26);
          if ( v92 != (gameswf::Self **)*v28 )
          {
            if ( *v28 != nullptr )
            {
              gameswf::RefCounted::dropRef(*v28);
              v27 = (gameswf::RefCounted::Self *)v92;
            }
            *v28 = v27;
            if ( v27 != nullptr )
              gameswf::RefCounted::addRef(v27);
          }
          ++v26;
        }
        while ( U16 > v26 );
        v6 = v99;
      }
      if ( Position + U32 != gameswf::Stream::getPosition(v6) )
        goto LABEL_58;
    }
    gameswf::Font::readCodeTable(self, v6);
    if ( UInt != 0 )
    {
      *((float *)self + 20) = (float)(int16_t)gameswf::Stream::readS16(v6);
      *((float *)self + 21) = (float)(int16_t)gameswf::Stream::readS16(v6);
      S16 = gameswf::Stream::readS16(v6);
      v52 = *((uint32_t *)self + 8);
      *((float *)self + 22) = (float)S16;
      v108 = v52;
      v53 = *((uint32_t *)self + 24);
      if ( v52 != 0 )
      {
        v54 = *((uint32_t *)self + 25);
        if ( v52 > v54 && *((uint32_t *)self + 26) == 0 )
        {
          v87 = v52 + (v52 >> 1);
          *((uint32_t *)self + 25) = v87;
          if ( v87 != 0 )
          {
            v88 = *((gameswf::Self **)self + 23);
            if ( v88 != nullptr )
              v89 = gameswf::realloc_internal(v88, 4 * v87, 4 * v54);
            else
              v89 = (void *)gameswf::malloc_internal(4 * v87);
            *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(v89);
          }
          else
          {
            if ( *((uint32_t *)self + 23) != 0 )
              gameswf::free_internal(*((gameswf::Self **)self + 23));
            *((uint32_t *)self + 23) = 0;
          }
        }
      }
      v55 = 4 * v53;
      if ( v108 > v53 )
      {
        do
        {
          v56 = (uint32_t *)(*((uint32_t *)self + 23) + v55);
          if ( v56 != nullptr )
            *v56 = 0;
          ++v53;
          v55 += 4;
        }
        while ( v53 != v108 );
      }
      *((uint32_t *)self + 24) = v108;
      if ( v108 > 0 )
      {
        for ( m = 0; m != v108; ++m )
        {
          v58 = (float *)(*((uint32_t *)self + 23) + 4 * m);
          *v58 = (float)(int16_t)gameswf::Stream::readS16(v6);
        }
      }
      v59 = *((uint32_t *)self + 8);
      if ( v59 > 0 )
      {
        for ( n = 0; n != v59; ++n )
          gameswf::Rect::read((gameswf::Rect::Self *)v133, v6);
      }
      v61 = gameswf::Stream::readU16(v6);
      if ( v61 != 0 )
      {
        v126 = v61 + 1;
        v101 = (gameswf::Stream::Self *)(&dword_0 + 1);
        v131 = (gameswf::hash<gameswf::Font::kerning_pair, float, gameswf::fixed_size_hash<gameswf::Font::kerning_pair>> *)((gameswf::Font::Self *)((char *)self + 108));
        v105 = v6;
        do
        {
          if ( *((uint8_t *)self + 74) != 0 )
          {
            U8 = gameswf::Stream::readU16(v105);
            v119 = gameswf::Stream::readU16(v105);
          }
          else
          {
            U8 = (uint8_t)gameswf::Stream::readU8(v105);
            v119 = (uint8_t)gameswf::Stream::readU8(v105);
          }
          LOWORD(v132) = U8;
          v63 = (float)(int16_t)gameswf::Stream::readS16(v105);
          v64 = *((int **)self + 27);
          HIWORD(v132) = v119;
          if ( v64 != nullptr )
          {
            v65 = ((((((HIBYTE(v119) + 352988219) << 6) + 0xFFFF * (HIBYTE(v119) + 352988219) + (uint8_t)v119) << 6)
                  + 0xFFFF
                  * (((HIBYTE(v119) + 352988219) << 6) + 0xFFFF * (HIBYTE(v119) + 352988219) + (uint8_t)v119)
                  + HIBYTE(U8)) << 6)
                + 0xFFFF
                * (((((HIBYTE(v119) + 352988219) << 6) + 0xFFFF * (HIBYTE(v119) + 352988219) + (uint8_t)v119) << 6)
                 + 0xFFFF
                 * (((HIBYTE(v119) + 352988219) << 6) + 0xFFFF * (HIBYTE(v119) + 352988219) + (uint8_t)v119)
                 + HIBYTE(U8))
                + (uint8_t)U8;
            v109 = v64[1];
            v66 = v65 & v109;
            v67 = (int)(uintptr_t)(&v64[4 * (v65 & v109) + 2]);
            if ( *(uint32_t *)v67 != -2 && v66 == (v64[4 * (v65 & v109) + 3] & v109) )
            {
              for ( ii = v64[4 * (v65 & v109) + 3];
                    ii != v65 || U8 != *(uint16_t *)(v67 + 8) || v119 != *(uint16_t *)(v67 + 10);
                    ii = v64[4 * v66 + 3] )
              {
                v66 = *(uint32_t *)v67;
                if ( *(uint32_t *)v67 == -1 )
                  goto LABEL_155;
                v67 = (int)(uintptr_t)(&v64[4 * v66 + 2]);
              }
              if ( v66 >= 0 )
                goto LABEL_141;
            }
LABEL_155:
            v74 = *v64;
            v75 = 2 * v109 + 2;
            if ( 3 * *v64 > v75 )
            {
              gameswf::hash_gameswf_Font_kerning_pai_482794::set_raw_capacity(
                v131,
                v75);
              v64 = *((int **)self + 27);
              v74 = *v64;
            }
          }
          else
          {
            gameswf::hash_gameswf_Font_kerning_pai_482794::set_raw_capacity(
              v131,
              8);
            v64 = *((int **)self + 27);
            v74 = *v64;
            v65 = ((65599 * ((uint8_t)v119 + 65599 * (HIBYTE(v119) + 352988219)) + HIBYTE(U8)) << 16)
                + (uint8_t)U8
                + 63 * (65599 * ((uint8_t)v119 + 65599 * (HIBYTE(v119) + 352988219)) + HIBYTE(U8));
          }
          *v64 = v74 + 1;
          v76 = *((uint32_t *)self + 27);
          v77 = *(uint32_t *)(v76 + 4);
          v110 = v77 & v65;
          v123 = (int *)(v76 + 16 * (v77 & v65) + 8);
          v78 = v77 & v65;
          v130 = *v123;
          if ( *v123 == -2 )
          {
            *v123 = -1;
            *(uint32_t *)(v76 + 16 * (v77 & v65) + 12) = v65;
            *(uint32_t *)(v76 + 16 * (v77 & v65) + 16) = v132;
            *(uint32_t *)(v76 + 16 * (v77 & v65) + 20) = 0;
          }
          else
          {
            while ( 1 )
            {
              v78 = v77 & (v78 + 1);
              if ( *(uint32_t *)(v76 + 16 * v78 + 8) == -2 )
                break;
              if ( v110 == v78 )
              {
                v128 = (int *)(v76 + 16 * v78 + 8);
                v78 = v77 & v65;
                goto LABEL_161;
              }
            }
            v128 = (int *)(v76 + 16 * v78 + 8);
LABEL_161:
            v79 = *(uint32_t *)(v76 + 16 * (v77 & v65) + 12) & v77;
            if ( v110 == v79 )
            {
              *v128 = v130;
              v128[1] = v123[1];
              v128[2] = v123[2];
              v128[3] = v123[3];
              v123[2] = v132;
              v123[3] = 0;
              *v123 = v78;
              v123[1] = v65;
            }
            else
            {
              v80 = v79;
              do
              {
                v81 = (int *)(v76 + 16 * v80 + 8);
                v80 = *v81;
              }
              while ( v110 != *v81 );
              *v128 = v130;
              v128[1] = v123[1];
              v128[2] = v123[2];
              v128[3] = v123[3];
              *v81 = v78;
              v123[2] = v132;
              v123[3] = 0;
              v123[1] = v65;
              *v123 = -1;
            }
          }
          v64 = *((int **)self + 27);
          if ( v64 == nullptr
            || (v111 = v64[1], v66 = v65 & v111, *(uint32_t *)(v82 = (int)(uintptr_t)(&v64[4 * (v65 & v111) + 2])) == -2)
            || v66 != (v64[4 * (v65 & v111) + 3] & v111) )
          {
LABEL_180:
            v84 = -8;
            goto LABEL_176;
          }
          for ( jj = v64[4 * (v65 & v111) + 3];
                jj != v65 || U8 != *(uint16_t *)(v82 + 8) || v119 != *(uint16_t *)(v82 + 10);
                jj = v64[4 * v66 + 3] )
          {
            v66 = *(uint32_t *)v82;
            if ( *(uint32_t *)v82 == -1 )
              goto LABEL_180;
            v82 = (int)(uintptr_t)(&v64[4 * v66 + 2]);
          }
          if ( v66 < 0 )
          {
            v84 = 16 * v66 + 8;
LABEL_176:
            v69 = (float *)((char *)v64 + v84 + 12);
            goto LABEL_142;
          }
LABEL_141:
          v69 = (float *)&v64[4 * v66 + 5];
LABEL_142:
          v101 = (gameswf::Stream::Self *)((char *)v101 + 1);
          *v69 = v63;
        }
        while ( v101 != (gameswf::Stream::Self *)v126 );
      }
    }
LABEL_58:
    result = (int)(uintptr_t)(v115);
    if ( v115 != nullptr )
      return gameswf::free_internal(v115);
    return result;
  }
  v118 = gameswf::Stream::getPosition(a2);
  LOWORD(v32) = gameswf::Stream::readU16(a2);
  v91 = 0;
  v33 = (gameswf::Self *)gameswf::malloc_internal(4u);
  v100 = v33;
  if ( v33 != nullptr )
  {
    v32 = (uint16_t)v32;
    *(uint32_t *)v33 = (uint16_t)v32;
  }
  else
  {
    v32 = 1179403647;
  }
  v114 = 1;
  v107 = v32 >> 1;
  if ( v32 >> 1 > 1 )
  {
    v34 = 1;
    do
    {
      v36 = v34 + 1;
      v37 = gameswf::Stream::readU16(a2);
      if ( v34 + 1 > v114 )
      {
        v38 = v36 + (v36 >> 1);
        if ( v38 != 0 )
        {
          if ( v100 != nullptr )
          {
            v100 = (gameswf::Self *)gameswf::realloc_internal(v100, 4 * v38, 4 * v114);
          }
          else
          {
            v91 = 0;
            v100 = (gameswf::Self *)gameswf::malloc_internal(4 * v38);
          }
          v114 = v36 + (v36 >> 1);
        }
        else
        {
          if ( v100 != nullptr )
          {
            v91 = 4 * v114;
            gameswf::free_internal(v100);
          }
          v114 = 0;
          v100 = nullptr;
        }
      }
      v35 = (uint32_t *)((char *)v100 + 4 * v34);
      if ( v35 != nullptr )
        *v35 = v37;
      ++v34;
    }
    while ( v36 != v107 );
    v6 = a2;
    v5 = a4;
  }
  v39 = (gameswf::RefCounted::Self *)((gameswf::Font::Self *)((char *)self + 28));
  v40 = *((uint32_t *)self + 8);
  if ( v107 < v40 )
  {
    v103 = *((gameswf::Stream::Self **)self + 8);
    v116 = (gameswf::Self *)(v6);
    v121 = v5;
    v41 = (uint32_t *)((char *)self + 28);
    v42 = (gameswf::Stream::Self *)v107;
    v43 = 4 * v107;
    do
    {
      if ( *(uint32_t *)(*v41 + v43) != 0 )
        gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(*v41 + v43));
      v42 = (gameswf::Stream::Self *)((char *)v42 + 1);
      v43 += 4;
    }
    while ( v42 != v103 );
    v39 = (gameswf::RefCounted::Self *)((gameswf::Font::Self *)((char *)self + 28));
    v6 = (gameswf::Stream::Self *)(v116);
    v40 = (int)(uintptr_t)(v103);
    v5 = v121;
  }
  if ( v107 != 0 )
  {
    v122 = *((uint32_t *)self + 9);
    if ( v107 > v122 && *((uint32_t *)self + 10) == 0 )
    {
      v70 = v107 + (v107 >> 1);
      *((uint32_t *)self + 9) = v70;
      if ( v70 != 0 )
      {
        v97 = v39;
        if ( *((uint32_t *)self + 7) != 0 )
        {
          v86 = gameswf::realloc_internal(*((gameswf::Self **)self + 7), 4 * v70, 4 * v122);
        }
        else
        {
          v91 = 0;
          v86 = (void *)gameswf::malloc_internal(4 * v70);
        }
        *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v86);
        v39 = v97;
      }
      else
      {
        v71 = *((gameswf::Self **)self + 7);
        if ( v71 != nullptr )
        {
          v94 = v39;
          v91 = 4 * v122;
          gameswf::free_internal(v71);
          v39 = v94;
        }
        *((uint32_t *)self + 7) = 0;
      }
    }
  }
  v44 = 4 * v40;
  if ( v107 > v40 )
  {
    do
    {
      v45 = (uint32_t *)(*(uint32_t *)v39 + v44);
      if ( v45 != nullptr )
        *v45 = 0;
      ++v40;
      v44 += 4;
    }
    while ( v40 != v107 );
  }
  *((uint32_t *)self + 8) = v107;
  if ( G4_VCALL<int>(v5, 188, v91) == 0 && v107 > 0 )
  {
    v46 = 0;
    v104 = v6;
    do
    {
      gameswf::Stream::setPosition(v104, *((uint32_t *)v100 + v46) + v118);
      v49 = *((gameswf::Player::Self **)v5 + 6);
      if ( v49 != nullptr )
      {
        v50 = *((gameswf::Self **)v5 + 5);
        if ( *((uint8_t *)v50 + 2) == 0 )
        {
          v31 = (*(uint16_t *)v50)-- == 1;
          if ( v31 )
            gameswf::free_internal(v50);
          *((uint32_t *)v5 + 5) = 0;
          *((uint32_t *)v5 + 6) = 0;
          v49 = nullptr;
        }
      }
      v93 = (gameswf::Self **)opNew(0x80u);
      gameswf::ShapeCharacterDef::ShapeCharacterDef(v93, v49);
      gameswf::ShapeCharacterDef::read(v93, v104, 2, false, v5);
      v47 = (gameswf::RefCounted::Self *)v93;
      v48 = (gameswf::RefCounted::Self **)(*((uint32_t *)self + 7) + 4 * v46);
      if ( v93 != (gameswf::Self **)*v48 )
      {
        if ( *v48 != nullptr )
        {
          gameswf::RefCounted::dropRef(*v48);
          v47 = (gameswf::RefCounted::Self *)v93;
        }
        *v48 = v47;
        if ( v47 != nullptr )
          gameswf::RefCounted::addRef(v47);
      }
      ++v46;
    }
    while ( v46 != v107 );
  }
  result = (int)(uintptr_t)(v100);
  if ( v100 != nullptr )
    return gameswf::free_internal(v100);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Font::is  (binary VA: 0x118ab40)
// Original: gameswf::Font::is
// ----------------------------------------------------------------------------
bool gameswf::Font::is(gameswf::Font::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 23 )
    return a2 == 14;
  return result;
}


