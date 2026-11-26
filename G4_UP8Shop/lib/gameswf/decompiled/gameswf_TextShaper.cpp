#include "Core/Utils/DecompTypes.h"
#include "gameswf_TextShaper.h"

// ----------------------------------------------------------------------------
// Function: gameswf::TextShaper::Init  (binary VA: 0x106b280)
// Original: gameswf::TextShaper::Init
// ----------------------------------------------------------------------------
int gameswf::TextShaper::Init(gameswf::TextShaper::Self *self, gameswf::FaceProvider::Self *a2)
{
  int result;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  result = (int)(uintptr_t)(hb_buffer_create());
  *((uint32_t *)self + 1) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextShaper::Destroy  (binary VA: 0x106b2c0)
// Original: gameswf::TextShaper::~TextShaper
// ----------------------------------------------------------------------------
void gameswf::TextShaper::Destroy(void **self)
{
  hb_buffer_destroy(*(self + 1));
  if ( *(self + 11) != nullptr )
    opDelete(*(self + 11));
  if ( *(self + 8) != nullptr )
    opDelete(*(self + 8));
  if ( *(self + 5) != nullptr )
    opDelete(*(self + 5));
  if ( *(self + 2) != nullptr )
    opDelete(*(self + 2));
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextShaper::RawFragment  (binary VA: 0x106b330)
// Original: gameswf::TextShaper::RawFragment
// ----------------------------------------------------------------------------
float * gameswf::TextShaper::RawFragment(gameswf::FaceProvider::Self **self, const std::vector<unsigned short> *a2, int a3, int a4)
{
  int FaceById;
  int v5;
  float *result;
  int i;
  int v8;
  float v9; // xmm0_4
  int v10;
  int v11;
  int v12;
  bool v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef float _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v16)) > _g4_s1 ? (28u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v18)) > _g4_s3 ? (36u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v19)) > _g4_s4 ? (40u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v21)) > _g4_s6 ? (48u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v22)) > _g4_s7 ? (52u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v23)) > _g4_s8 ? (56u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v24)) > _g4_s9 ? (60u + sizeof(_g4_t_v24)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);

  FaceById = gameswf::FaceProvider::GetFaceById(*self, a3);
  FT_Set_Pixel_Sizes(FaceById, 0, a4);
  v5 = (int)(uintptr_t)(*(self + 6));
  *(self + 9) = *(self + 8);
  result = (float *)*(self + 5);
  v15 = (v5 - (int)(uintptr_t)(result)) >> 2;
  if ( v15 > 0 )
  {
    for ( i = 0; i != v15; ++i )
    {
      v8 = (int)(uintptr_t)(*(self + 5));
      v16 = 0;
      FT_Get_Advance(FaceById, *(uint32_t *)(v8 + 4 * i), 2, &v16);
      v22 = 0;
      v9 = (float)(v16 >> 10);
      v16 >>= 10;
      v10 = (int)(uintptr_t)(*(self + 5));
      v21 = v9;
      v23 = 0;
      v24 = 0;
      v11 = *(uint32_t *)(v10 + 4 * i);
      v20 = a3;
      LOWORD(v18) = v11;
      HIWORD(v18) = i;
      v19 = FaceById;
      v12 = *(uint16_t *)(*(uint32_t *)a2 + 2 * (uint16_t)i);
      result = (float *)*(self + 9);
      v13 = result == (float *)*(self + 10);
      v17 = v12;
      if ( v13 )
      {
        result = (float *)g4_std::vector_gameswf_TextShaper_Shape_2b189a::M_insert_aux(self + 8, result, &v17);
      }
      else
      {
        v14 = 0;
        if ( result != nullptr )
        {
          *(uint32_t *)result = v12;
          *((uint32_t *)result + 1) = v18;
          *((uint32_t *)result + 2) = v19;
          *((uint32_t *)result + 3) = v20;
          result[4] = v21;
          *((uint32_t *)result + 5) = v22;
          *((uint32_t *)result + 6) = v23;
          *((uint32_t *)result + 7) = v24;
          v14 = (int)(uintptr_t)(*(self + 9));
        }
        *(self + 9) = (gameswf::FaceProvider::Self *)(v14 + 32);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextShaper::FlushShapedData  (binary VA: 0x106b4a0)
// Original: gameswf::TextShaper::FlushShapedData
// ----------------------------------------------------------------------------
void gameswf::TextShaper::FlushShapedData(gameswf::TextShaper::Self *self, const std::vector<gameswf::TextShaper::ShapeData> *a2)
{
  uint32_t *v2;
  char *v3;
  uint32_t *v4;
  int v5;
  char *v6;

  v2 = *(uint32_t **)a2;
  if ( *(uint32_t *)a2 != *((uint32_t *)a2 + 1) )
  {
    v3 = (char *)self + 8;
    do
    {
      v4 = *((uint32_t **)self + 3);
      if ( v4 == *((uint32_t **)self + 4) )
      {
        v6 = v3;
        g4_std::vector_gameswf_TextShaper_Shape_2b189a::M_insert_aux(v3, v4, v2);
        v3 = v6;
      }
      else
      {
        v5 = 0;
        if ( v4 != nullptr )
        {
          *v4 = *v2;
          v4[1] = v2[1];
          v4[2] = v2[2];
          v4[3] = v2[3];
          v4[4] = v2[4];
          v4[5] = v2[5];
          v4[6] = v2[6];
          v4[7] = v2[7];
          v5 = *((uint32_t *)self + 3);
        }
        *((uint32_t *)self + 3) = v5 + 32;
      }
      v2 += 8;
    }
    while ( *((uint32_t **)a2 + 1) != v2 );
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextShaper::ShapeFragment  (binary VA: 0x106b540)
// Original: gameswf::TextShaper::ShapeFragment
// ----------------------------------------------------------------------------
gameswf::FaceProvider::Self * gameswf::TextShaper::ShapeFragment(gameswf::FaceProvider::Self **self, const std::vector<unsigned short> *a2, int a3, int a4)
{
  gameswf::FaceProvider::Self **v4;
  const std::vector<unsigned short> *v5;
  int ScriptByFaceId;
  int v7;
  uint16_t *v8;
  int v9;
  int v10;
  void *v11;
  gameswf::FaceProvider::Self *v12;
  int glyph_positions;
  gameswf::FaceProvider::Self *v14;
  bool v15;
  gameswf::FaceProvider::Self *result;
  int v17;
  unsigned int v18;
  float v19; // xmm1_4
  int v20;
  gameswf::FaceProvider::Self *v21;
  typedef int _g4_t_v22;
  typedef gameswf::FaceProvider::Self *_g4_t_v23;
  typedef int _g4_t_FaceById;
  typedef int _g4_t_glyph_infos;
  typedef int _g4_t_v26;
  typedef gameswf::FaceProvider::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v23)) > _g4_s1 ? (16u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_FaceById)) > _g4_s2 ? (20u + sizeof(_g4_t_FaceById)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_glyph_infos)) > _g4_s3 ? (24u + sizeof(_g4_t_glyph_infos)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v26)) > _g4_s4 ? (28u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v27)) > _g4_s5 ? (44u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v28)) > _g4_s6 ? (48u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v29)) > _g4_s7 ? (52u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v30)) > _g4_s8 ? (56u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v31)) > _g4_s9 ? (60u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v32)) > _g4_s10 ? (64u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v33)) > _g4_s11 ? (68u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v34)) > _g4_s12 ? (72u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v35)) > _g4_s13 ? (76u + sizeof(_g4_t_v35)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_FaceById &FaceById = *reinterpret_cast<_g4_t_FaceById *>(_g4_sf + 20u);
  _g4_t_glyph_infos &glyph_infos = *reinterpret_cast<_g4_t_glyph_infos *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);

  v4 = self;
  v5 = a2;
  FaceById = gameswf::FaceProvider::GetFaceById(*self, a3);
  FT_Set_Pixel_Sizes(FaceById, 0, a4);
  hb_buffer_clear_contents(*(self + 1));
  hb_buffer_set_content_type(*(self + 1), 1);
  hb_buffer_set_direction(*(self + 1), 0);
  ScriptByFaceId = gameswf::FaceProvider::GetScriptByFaceId(*self, a3);
  hb_buffer_set_script(*(self + 1), ScriptByFaceId);
  v7 = (int)(uintptr_t)(hb_language_from_string("th", 2u));
  hb_buffer_set_language(*(self + 1), v7);
  v8 = *(uint16_t **)a2;
  if ( *(uint32_t *)v5 != *((uint32_t *)v5 + 1) )
  {
    v9 = 0;
    do
    {
      v22 = v9++;
      v10 = *v8++;
      hb_buffer_add(*(self + 1), v10, v22);
    }
    while ( *((uint16_t **)a2 + 1) != v8 );
    v4 = self;
    v5 = a2;
  }
  hb_buffer_guess_segment_properties(v4[1]);
  v11 = (void *)hb_ft_font_create(FaceById, 0);
  hb_shape(v11, v4[1], 0, 0);
  hb_font_destroy(v11);
  v12 = v4[1];
  v27 = nullptr;
  glyph_infos = hb_buffer_get_glyph_infos(v12, &v27);
  glyph_positions = hb_buffer_get_glyph_positions(v4[1], &v27);
  v14 = v27;
  v26 = glyph_positions;
  v15 = v27 == nullptr;
  result = v4[8];
  v4[9] = result;
  v23 = v14;
  if ( !v15 )
  {
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      v32 = 0.0;
      v33 = 0.0;
      v15 = result == v4[10];
      v19 = (float)*(int *)(v26 + 20 * v17);
      v33 = (float)*(int *)(v26 + 20 * v17 + 4);
      v32 = v19;
      v34 = (float)*(int *)(v26 + 20 * v17 + 8);
      v35 = (float)*(int *)(v26 + 20 * v17 + 12);
      LOWORD(v29) = *(uint32_t *)(glyph_infos + 20 * v17);
      HIWORD(v29) = *(uint32_t *)(glyph_infos + 20 * v17 + 8);
      v30 = FaceById;
      v31 = a3;
      v20 = *(uint16_t *)(*(uint32_t *)v5 + 2 * HIWORD(v29));
      v28 = v20;
      if ( v15 )
      {
        g4_std::vector_gameswf_TextShaper_Shape_2b189a::M_insert_aux(v4 + 8, result, &v28);
        result = v27;
        v23 = v27;
      }
      else
      {
        v21 = nullptr;
        if ( result != nullptr )
        {
          *(uint32_t *)result = v20;
          *((uint32_t *)result + 1) = v29;
          *((uint32_t *)result + 2) = v30;
          *((uint32_t *)result + 3) = v31;
          *((float *)result + 4) = v32;
          *((float *)result + 5) = v33;
          *((float *)result + 6) = v34;
          *((float *)result + 7) = v35;
          result = v27;
          v21 = v4[9];
          v23 = v27;
        }
        v4[9] = (gameswf::FaceProvider::Self *)((char *)v21 + 32);
      }
      v17 = ++v18;
      if ( v18 >= (unsigned int)(uintptr_t)(v23) )
        break;
      result = v4[9];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::TextShaper::DoShape  (binary VA: 0x106b7f0)
// Original: gameswf::TextShaper::DoShape
// ----------------------------------------------------------------------------
char * gameswf::TextShaper::DoShape(gameswf::TextShaper::Self *self, const gameswf::array<unsigned short> *a2, int a3, int a4, int a5, bool a6, bool a7)
{
  char *v7;
  int v8;
  int v9;
  int FaceIdByWChar;
  int *v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  uint16_t v16; // bp
  char *v17;
  bool v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v24;
  unsigned int v25;
  int *v26;
  uint8_t *src;
  int v28;
  void *v29;
  int v30;
  void *v31;
  unsigned int v32;
  unsigned int v33;
  size_t v34;
  char *v35;
  uint8_t *v36;
  char *v37;
  int v38;
  char *v39;
  int v40;
  int v41;
  int v42;
  char *v43;
  int v44;
  int v45;
  int v46;
  void *v47;
  char *v48;
  const void *v49;
  size_t n;
  int v51;
  int v52;
  void *v53;
  char *v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef char *_g4_t_v65;
  typedef uint16_t *_g4_t_v66;
  typedef uint16_t *_g4_t_v67;
  typedef void *_g4_t_v68;
  typedef void *_g4_t_v69;
  typedef char *_g4_t_v70;
  typedef char *_g4_t_v71;
  typedef uint16_t *_g4_t_v72;
  typedef uint16_t *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef char *_g4_t_v77;
  typedef bool _g4_t_v78[4];
  typedef int _g4_t_v79;
  typedef uint16_t _g4_t_v80;
  typedef size_t _g4_t_v81;
  typedef size_t _g4_t_v82;
  typedef char *_g4_t_v83;
  typedef char *_g4_t_v84;
  typedef int16_t _g4_t_v85;
  typedef int _g4_t_dest;
  typedef char *_g4_t_v87;
  typedef char *_g4_t_v88;
  typedef uint8_t *_g4_t_v89;
  typedef std::vector<gameswf::TextShaper::ShapeData> *_g4_t_v90;
  typedef std::vector<unsigned short> *_g4_t_v91;
  typedef char *_g4_t_v92;
  typedef char *_g4_t_v93;
  typedef uint8_t *_g4_t_v94;
  typedef int _g4_t_v95[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v55)) > _g4_s0 ? (0u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v56)) > _g4_s1 ? (8u + sizeof(_g4_t_v56)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v57)) > _g4_s2 ? (8u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v58)) > _g4_s3 ? (8u + sizeof(_g4_t_v58)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v59)) > _g4_s4 ? (8u + sizeof(_g4_t_v59)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v60)) > _g4_s5 ? (8u + sizeof(_g4_t_v60)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v61)) > _g4_s6 ? (8u + sizeof(_g4_t_v61)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v62)) > _g4_s7 ? (8u + sizeof(_g4_t_v62)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v63)) > _g4_s8 ? (8u + sizeof(_g4_t_v63)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v64)) > _g4_s9 ? (8u + sizeof(_g4_t_v64)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v65)) > _g4_s10 ? (12u + sizeof(_g4_t_v65)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v66)) > _g4_s11 ? (12u + sizeof(_g4_t_v66)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v67)) > _g4_s12 ? (12u + sizeof(_g4_t_v67)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v68)) > _g4_s13 ? (12u + sizeof(_g4_t_v68)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v69)) > _g4_s14 ? (12u + sizeof(_g4_t_v69)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v70)) > _g4_s15 ? (12u + sizeof(_g4_t_v70)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v71)) > _g4_s16 ? (12u + sizeof(_g4_t_v71)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v72)) > _g4_s17 ? (12u + sizeof(_g4_t_v72)) : _g4_s17,
    _g4_s19 = (12u + sizeof(_g4_t_v73)) > _g4_s18 ? (12u + sizeof(_g4_t_v73)) : _g4_s18,
    _g4_s20 = (16u + sizeof(_g4_t_v74)) > _g4_s19 ? (16u + sizeof(_g4_t_v74)) : _g4_s19,
    _g4_s21 = (20u + sizeof(_g4_t_v75)) > _g4_s20 ? (20u + sizeof(_g4_t_v75)) : _g4_s20,
    _g4_s22 = (20u + sizeof(_g4_t_v76)) > _g4_s21 ? (20u + sizeof(_g4_t_v76)) : _g4_s21,
    _g4_s23 = (20u + sizeof(_g4_t_v77)) > _g4_s22 ? (20u + sizeof(_g4_t_v77)) : _g4_s22,
    _g4_s24 = (24u + sizeof(_g4_t_v78)) > _g4_s23 ? (24u + sizeof(_g4_t_v78)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v79)) > _g4_s24 ? (32u + sizeof(_g4_t_v79)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v80)) > _g4_s25 ? (44u + sizeof(_g4_t_v80)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v81)) > _g4_s26 ? (44u + sizeof(_g4_t_v81)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v82)) > _g4_s27 ? (44u + sizeof(_g4_t_v82)) : _g4_s27,
    _g4_s29 = (44u + sizeof(_g4_t_v83)) > _g4_s28 ? (44u + sizeof(_g4_t_v83)) : _g4_s28,
    _g4_s30 = (48u + sizeof(_g4_t_v84)) > _g4_s29 ? (48u + sizeof(_g4_t_v84)) : _g4_s29,
    _g4_s31 = (48u + sizeof(_g4_t_v85)) > _g4_s30 ? (48u + sizeof(_g4_t_v85)) : _g4_s30,
    _g4_s32 = (48u + sizeof(_g4_t_dest)) > _g4_s31 ? (48u + sizeof(_g4_t_dest)) : _g4_s31,
    _g4_s33 = (48u + sizeof(_g4_t_v87)) > _g4_s32 ? (48u + sizeof(_g4_t_v87)) : _g4_s32,
    _g4_s34 = (48u + sizeof(_g4_t_v88)) > _g4_s33 ? (48u + sizeof(_g4_t_v88)) : _g4_s33,
    _g4_s35 = (48u + sizeof(_g4_t_v89)) > _g4_s34 ? (48u + sizeof(_g4_t_v89)) : _g4_s34,
    _g4_s36 = (52u + sizeof(_g4_t_v90)) > _g4_s35 ? (52u + sizeof(_g4_t_v90)) : _g4_s35,
    _g4_s37 = (56u + sizeof(_g4_t_v91)) > _g4_s36 ? (56u + sizeof(_g4_t_v91)) : _g4_s36,
    _g4_s38 = (60u + sizeof(_g4_t_v92)) > _g4_s37 ? (60u + sizeof(_g4_t_v92)) : _g4_s37,
    _g4_s39 = (60u + sizeof(_g4_t_v93)) > _g4_s38 ? (60u + sizeof(_g4_t_v93)) : _g4_s38,
    _g4_s40 = (60u + sizeof(_g4_t_v94)) > _g4_s39 ? (60u + sizeof(_g4_t_v94)) : _g4_s39,
    _g4_s41 = (76u + sizeof(_g4_t_v95)) > _g4_s40 ? (76u + sizeof(_g4_t_v95)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 8u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 8u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 12u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 12u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 12u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 12u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 12u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 12u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 12u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 16u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 20u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 20u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 20u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 24u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 32u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 44u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 44u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 44u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 44u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 48u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 48u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 48u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 48u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 48u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 48u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 52u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 56u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 60u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 60u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 60u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 76u);

  v7 = *((char **)self + 11);
  *((uint32_t *)self + 3) = *((uint32_t *)self + 2);
  *((uint32_t *)self + 6) = *((uint32_t *)self + 5);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v7);
  if ( a3 >= a3 + a4 )
  {
    v22 = -1;
    v91 = (std::vector<unsigned short> *)((gameswf::TextShaper::Self *)((char *)self + 44));
    v90 = (std::vector<gameswf::TextShaper::ShapeData> *)((gameswf::TextShaper::Self *)((char *)self + 32));
  }
  else
  {
    v8 = 2 * a3;
    v91 = (std::vector<unsigned short> *)((gameswf::TextShaper::Self *)((char *)self + 44));
    v74 = a3;
    v75 = -1;
    v90 = (std::vector<gameswf::TextShaper::ShapeData> *)((gameswf::TextShaper::Self *)((char *)self + 32));
    while ( 1 )
    {
      v84 = *((char **)self + 13);
      if ( v84 == v7 )
      {
        v32 = (int)(uintptr_t)(&v7[-*((uint32_t *)self + 11)]) >> 1;
        v33 = 1;
        *(uint32_t *)v78 = v32;
        if ( v32 != 0 && ((v33 = 2 * v32, v32 > 2 * v32) || v33 > 0x7FFFFFFF) )
        {
          v82 = 0xFFFFFFFE;
          v34 = 0xFFFFFFFE;
        }
        else
        {
          v34 = 2 * v33;
          v82 = v34;
        }
        v66 = (uint16_t *)(*(uint32_t *)a2 + v8);
        v79 = opNew(v34);
        v35 = (char *)(v79 + 2 * *(uint32_t *)v78);
        if ( v35 != nullptr )
          *(uint16_t *)v35 = *v66;
        v36 = *((uint8_t **)self + 11);
        v37 = nullptr;
        v38 = (v7 - (char *)(v36)) >> 1;
        if ( v38 != 0 )
        {
          v71 = (char *)(2 * v38);
          memmove((void *)v79, v36, 2 * v38);
          v37 = v71;
        }
        v39 = &v37[v79 + 2];
        v40 = *((uint32_t *)self + 12) - (uint32_t)(uintptr_t)(v7);
        v41 = 0;
        v42 = v40 >> 1;
        if ( v42 != 0 )
        {
          v41 = 2 * v42;
          v70 = v39;
          memmove(v39, v84, 2 * v42);
          v39 = v70;
        }
        v43 = &v39[v41];
        if ( *((uint32_t *)self + 11) != 0 )
          opDelete(*((void **)self + 11));
        *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v43);
        *((uint32_t *)self + 11) = v79;
        *((uint32_t *)self + 13) = v82 + v79;
      }
      else
      {
        v9 = 0;
        if ( v7 != nullptr )
        {
          *(uint16_t *)v7 = *(uint16_t *)(*(uint32_t *)a2 + v8);
          v9 = *((uint32_t *)self + 12);
        }
        *((uint32_t *)self + 12) = v9 + 2;
      }
      v95[0] = 0;
      FaceIdByWChar = gameswf::FaceProvider::GetFaceIdByWChar(
                        *(gameswf::FaceProvider::Self **)self,
                        *(uint16_t *)(*(uint32_t *)a2 + v8),
                        a6,
                        a7,
                        v95);
      v11 = *((int **)self + 6);
      v12 = FaceIdByWChar;
      if ( v11 == *((int **)self + 7) )
      {
        v24 = ((int)(uintptr_t)(v11) - *((uint32_t *)self + 5)) >> 2;
        v55 = 4;
        v81 = v24;
        if ( v24 != 0 )
        {
          v25 = 2 * v24;
          if ( v81 > v25 || v25 > 0x3FFFFFFF )
            v55 = -4;
          else
            v55 = 8 * v81;
        }
        v57 = v12;
        dest = opNew(v55);
        v12 = v57;
        v26 = (int *)(dest + 4 * v81);
        if ( v26 != nullptr )
          *v26 = v95[0];
        src = *((uint8_t **)self + 5);
        v92 = nullptr;
        v28 = ((char *)v11 - (char *)(src)) >> 2;
        if ( v28 != 0 )
        {
          v92 = (char *)(4 * v28);
          memmove((void *)dest, src, 4 * v28);
          v12 = v57;
        }
        v93 = &v92[dest + 4];
        v29 = nullptr;
        v30 = (*((uint32_t *)self + 6) - (int)(uintptr_t)(v11)) >> 2;
        if ( v30 != 0 )
        {
          v62 = v12;
          v69 = (void *)(4 * v30);
          memmove(v93, v11, 4 * v30);
          v12 = v62;
          v29 = v69;
        }
        v31 = *((void **)self + 5);
        v14 = &v93[(uint32_t)(uintptr_t)(v29)];
        if ( v31 != nullptr )
        {
          v65 = &v93[(uint32_t)(uintptr_t)(v29)];
          v58 = v12;
          opDelete(v31);
          v12 = v58;
          v14 = v65;
        }
        *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v14);
        *((uint32_t *)self + 5) = dest;
        *((uint32_t *)self + 7) = dest + v55;
      }
      else
      {
        v13 = 0;
        if ( v11 != nullptr )
        {
          *v11 = v95[0];
          v13 = *((uint32_t *)self + 6);
        }
        v14 = (char *)(v13 + 4);
        *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v14);
      }
      if ( v12 != v75 && v75 != -1 )
      {
        v15 = *((uint32_t *)self + 12);
        v85 = *(uint16_t *)(v15 - 2);
        v16 = *((uint16_t *)v14 - 2);
        *((uint32_t *)self + 12) = v15 - 2;
        *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v14 - 4);
        v80 = v16;
        v56 = v12;
        if ( gameswf::FaceProvider::GetScriptByFaceId(*(gameswf::FaceProvider::Self **)self, v75) == 1416126825 )
        {
          gameswf::TextShaper::ShapeFragment((gameswf::FaceProvider::Self **)self, v91, v75, a5);
        }
        else
        {
          gameswf::TextShaper::RawFragment((gameswf::FaceProvider::Self **)self, v91, v75, a5);
          *((uint32_t *)self + 6) = *((uint32_t *)self + 5);
        }
        gameswf::TextShaper::FlushShapedData(self, v90);
        v17 = *((char **)self + 11);
        v18 = v17 == *((char **)self + 13);
        *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v17);
        v12 = v56;
        if ( v18 )
        {
          v44 = opNew(2u);
          v12 = v56;
          if ( v44 != 0 )
            *(uint16_t *)v44 = v85;
          v87 = nullptr;
          v94 = *((uint8_t **)self + 11);
          v45 = (v17 - (char *)(v94)) >> 1;
          if ( v45 != 0 )
          {
            v87 = (char *)(2 * v45);
            v73 = (uint16_t *)v44;
            memmove((void *)v44, v94, 2 * v45);
            v12 = v56;
            v44 = (int)(uintptr_t)(v73);
          }
          v76 = 0;
          v88 = &v87[v44 + 2];
          v46 = (*((uint32_t *)self + 12) - (int)(uintptr_t)(v17)) >> 1;
          if ( v46 != 0 )
          {
            v72 = (uint16_t *)v44;
            v63 = v12;
            v76 = 2 * v46;
            memmove(v88, v17, 2 * v46);
            v12 = v63;
            v44 = (int)(uintptr_t)(v72);
          }
          v47 = *((void **)self + 11);
          if ( v47 != nullptr )
          {
            v67 = (uint16_t *)v44;
            v59 = v12;
            opDelete(v47);
            v12 = v59;
            v44 = (int)(uintptr_t)(v67);
          }
          *((uint32_t *)self + 11) = v44;
          *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(&v88[v76]);
          *((uint32_t *)self + 13) = v44 + 2;
        }
        else
        {
          v19 = 0;
          if ( v17 != nullptr )
          {
            *(uint16_t *)v17 = v85;
            v19 = *((uint32_t *)self + 12);
          }
          *((uint32_t *)self + 12) = v19 + 2;
        }
        v20 = *((uint32_t **)self + 5);
        v18 = v20 == *((uint32_t **)self + 7);
        *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v20);
        if ( v18 )
        {
          v68 = v20;
          v60 = v12;
          v48 = (char *)opNew(4u);
          v77 = v48;
          v49 = v68;
          v12 = v60;
          if ( v48 != nullptr )
            *(uint32_t *)v48 = v80;
          v89 = *((uint8_t **)self + 5);
          n = 0;
          if ( ((uint8_t *)v68 - v89) >> 2 != 0 )
          {
            n = 4 * (((uint8_t *)v68 - v89) >> 2);
            memmove(v48, v89, n);
            v12 = v60;
            v49 = v68;
          }
          v83 = &v77[n + 4];
          v51 = 0;
          v52 = (*((uint32_t *)self + 6) - (int)(uintptr_t)(v49)) >> 2;
          if ( v52 != 0 )
          {
            v51 = 4 * v52;
            v64 = v12;
            memmove(v83, v49, 4 * v52);
            v12 = v64;
          }
          v53 = *((void **)self + 5);
          v54 = &v83[v51];
          if ( v53 != nullptr )
          {
            v61 = v12;
            opDelete(v53);
            v12 = v61;
          }
          *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v54);
          *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v77);
          *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v77 + 4);
        }
        else
        {
          v21 = 0;
          if ( v20 != nullptr )
          {
            *v20 = v80;
            v21 = *((uint32_t *)self + 6);
          }
          *((uint32_t *)self + 6) = v21 + 4;
        }
      }
      ++v74;
      v8 += 2;
      if ( v74 == a3 + a4 )
        break;
      v7 = *((char **)self + 12);
      v75 = v12;
    }
    v22 = v12;
  }
  if ( gameswf::FaceProvider::GetScriptByFaceId(*(gameswf::FaceProvider::Self **)self, v22) == 1416126825 )
    gameswf::TextShaper::ShapeFragment((gameswf::FaceProvider::Self **)self, v91, v22, a5);
  else
    gameswf::TextShaper::RawFragment((gameswf::FaceProvider::Self **)self, v91, v22, a5);
  gameswf::TextShaper::FlushShapedData(self, v90);
  return (char *)self + 8;
}


