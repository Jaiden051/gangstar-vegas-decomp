#include "Core/Utils/DecompTypes.h"
#include "gameswf_FaceProvider.h"

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::FaceEntry::Construct  (binary VA: 0x11701b0)
// Original: gameswf::FaceProvider::FaceEntry::FaceEntry
// ----------------------------------------------------------------------------
__m128i * gameswf::FaceProvider::FaceEntry::Construct(__m128i *self)
{
  *self = g4_m128_from<__m128i>(0LL);
  *(self + 1) = g4_m128_from<__m128i>(0LL);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::FaceEntry::Destroy  (binary VA: 0x11701d0)
// Original: gameswf::FaceProvider::FaceEntry::~FaceEntry
// ----------------------------------------------------------------------------
void gameswf::FaceProvider::FaceEntry::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::FaceEntry::GetScript  (binary VA: 0x11701e0)
// Original: gameswf::FaceProvider::FaceEntry::GetScript
// ----------------------------------------------------------------------------
int gameswf::FaceProvider::FaceEntry::GetScript(gameswf::FaceProvider::FaceEntry::Self *self)
{
  return *((uint32_t *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::FaceEntry::GetAvailableFaceStyle  (binary VA: 0x11701f0)
// Original: gameswf::FaceProvider::FaceEntry::GetAvailableFaceStyle
// ----------------------------------------------------------------------------
char gameswf::FaceProvider::FaceEntry::GetAvailableFaceStyle(gameswf::FaceProvider::FaceEntry::Self *self, int a2)
{
  char result;

  result = a2;
  if ( *((uint32_t *)self + a2) == 0 )
  {
    result = 0;
    if ( *(uint32_t *)self == 0 )
    {
      result = 1;
      if ( *((uint32_t *)self + 1) == 0 )
      {
        result = 2;
        if ( *((uint32_t *)self + 2) == 0 )
          return *((uint32_t *)self + 3) != 0 ? 3 : 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::FaceEntry::GetFace  (binary VA: 0x1170230)
// Original: gameswf::FaceProvider::FaceEntry::GetFace
// ----------------------------------------------------------------------------
int gameswf::FaceProvider::FaceEntry::GetFace(gameswf::FaceProvider::FaceEntry::Self *self, int a2)
{
  int v2;

  LOBYTE(v2) = gameswf::FaceProvider::FaceEntry::GetAvailableFaceStyle(self, a2);
  return *((uint32_t *)self + v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::FaceEntry::GetStyle  (binary VA: 0x1170270)
// Original: gameswf::FaceProvider::FaceEntry::GetStyle
// ----------------------------------------------------------------------------
int gameswf::FaceProvider::FaceEntry::GetStyle(gameswf::FaceProvider::FaceEntry::Self *self, bool a2, bool a3)
{
  int result;

  result = a2;
  if ( a3 )
    return a2 | 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::FaceEntry::GetFace  (binary VA: 0x1170290)
// Original: gameswf::FaceProvider::FaceEntry::GetFace
// ----------------------------------------------------------------------------
int gameswf::FaceProvider::FaceEntry::GetFace(gameswf::FaceProvider::FaceEntry::Self *self, bool a2, bool a3)
{
  int Style;

  Style = gameswf::FaceProvider::FaceEntry::GetStyle(self, a2, a3);
  return gameswf::FaceProvider::FaceEntry::GetFace(self, Style);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::FaceEntry::CheckStyle  (binary VA: 0x11702e0)
// Original: gameswf::FaceProvider::FaceEntry::CheckStyle
// ----------------------------------------------------------------------------
bool gameswf::FaceProvider::FaceEntry::CheckStyle(gameswf::FaceProvider::FaceEntry::Self *self, int a2)
{
  return *((uint32_t *)self + a2) != 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::FaceEntry::CheckStyle  (binary VA: 0x1170300)
// Original: gameswf::FaceProvider::FaceEntry::CheckStyle
// ----------------------------------------------------------------------------
bool gameswf::FaceProvider::FaceEntry::CheckStyle(gameswf::FaceProvider::FaceEntry::Self *self, bool a2, bool a3)
{
  int Style;

  Style = gameswf::FaceProvider::FaceEntry::GetStyle(self, a2, a3);
  return gameswf::FaceProvider::FaceEntry::CheckStyle(self, Style);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::FaceEntry::SetScript  (binary VA: 0x1170350)
// Original: gameswf::FaceProvider::FaceEntry::SetScript
// ----------------------------------------------------------------------------
int gameswf::FaceProvider::FaceEntry::SetScript(int a1, char *a2)
{
  char v2;
  int v3;
  int result;
  uint8_t *v5;

  v2 = *a2;
  v3 = *a2 - 1;
  if ( *a2 == -1 )
    v3 = *((uint32_t *)a2 + 1) - 1;
  if ( v3 != 4 )
  {
    *(uint32_t *)(a1 + 32) = 1517976186;
    v2 = *a2;
  }
  if ( v2 == -1 )
  {
    v5 = *((uint8_t **)a2 + 3);
    result = (v5[2] << 8) | (*v5 << 24) | (v5[1] << 16);
    *(uint32_t *)(a1 + 32) = __builtin_bswap32(*(uint32_t *)v5);
  }
  else
  {
    result = ((uint8_t)a2[3] << 8) | ((uint8_t)a2[1] << 24) | ((uint8_t)a2[2] << 16);
    *(uint32_t *)(a1 + 32) = __builtin_bswap32(*(uint32_t *)(a2 + 1));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::GetFaceById  (binary VA: 0x11703e0)
// Original: gameswf::FaceProvider::GetFaceById
// ----------------------------------------------------------------------------
int gameswf::FaceProvider::GetFaceById(gameswf::FaceProvider::Self *self, int a2)
{
  return gameswf::FaceProvider::FaceEntry::GetFace(
           (gameswf::FaceProvider::FaceEntry::Self *)(*(uint32_t *)self + 36 * (a2 >> 2)),
           a2 & 3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::GetHBFontByFaceId  (binary VA: 0x1170420)
// Original: gameswf::FaceProvider::GetHBFontByFaceId
// ----------------------------------------------------------------------------
int gameswf::FaceProvider::GetHBFontByFaceId(gameswf::FaceProvider::Self *self, int a2)
{
  gameswf::FaceProvider::FaceEntry::Self *v2;
  int v3;

  v2 = (gameswf::FaceProvider::FaceEntry::Self *)(*(uint32_t *)self + 36 * (a2 >> 2));
  LOBYTE(v3) = gameswf::FaceProvider::FaceEntry::GetAvailableFaceStyle(v2, a2 & 3);
  return *((uint32_t *)v2 + v3 + 4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::GetPreferedTypefaceId  (binary VA: 0x1170470)
// Original: gameswf::FaceProvider::GetPreferedTypefaceId
// ----------------------------------------------------------------------------
int gameswf::FaceProvider::GetPreferedTypefaceId()
{
  int HostInterface;

  HostInterface = gameswf::getHostInterface();
  return G4_VCALL<int>(HostInterface, 8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::GetFaceIdByWChar  (binary VA: 0x11704a0)
// Original: gameswf::FaceProvider::GetFaceIdByWChar
// ----------------------------------------------------------------------------
int gameswf::FaceProvider::GetFaceIdByWChar(gameswf::FaceProvider::Self *self, uint16_t a2, bool a3, bool a4, int *a5)
{
  gameswf::FaceProvider::Self *v5;
  int PreferedTypefaceId;
  int result;
  int v8;
  gameswf::FaceProvider::FaceEntry::Self *v9;
  int v10;
  int v11;
  gameswf::FaceProvider::FaceEntry::Self *v12;
  int Style;
  int v14;
  int Face;

  v5 = self;
  PreferedTypefaceId = gameswf::FaceProvider::GetPreferedTypefaceId();
  Face = gameswf::FaceProvider::FaceEntry::GetFace(
           (gameswf::FaceProvider::FaceEntry::Self *)(36 * PreferedTypefaceId + *(uint32_t *)self),
           a3,
           a4);
  result = FT_Get_Char_Index(Face, a2);
  v8 = 36 * PreferedTypefaceId;
  if ( result == 0 )
  {
    v9 = *(gameswf::FaceProvider::FaceEntry::Self **)self;
    if ( *(uint32_t *)self == *((uint32_t *)self + 1) )
      return result;
    while ( 1 )
    {
      v10 = gameswf::FaceProvider::FaceEntry::GetFace(v9, a3, a4);
      if ( Face != v10 )
      {
        result = FT_Get_Char_Index(v10, a2);
        if ( result != 0 )
          break;
      }
      v9 = (gameswf::FaceProvider::FaceEntry::Self *)((char *)v9 + 36);
      if ( *((gameswf::FaceProvider::FaceEntry::Self **)self + 1) == v9 )
        return 0;
    }
    v5 = self;
    v11 = ((int)(uintptr_t)(v9) - *(uint32_t *)self) >> 2;
    PreferedTypefaceId = 954437177 * v11;
    v8 = 4 * v11;
  }
  if ( a5 != nullptr )
    *a5 = result;
  v12 = (gameswf::FaceProvider::FaceEntry::Self *)(*(uint32_t *)v5 + v8);
  Style = gameswf::FaceProvider::FaceEntry::GetStyle(v12, a3, a4);
  LOBYTE(v14) = gameswf::FaceProvider::FaceEntry::GetAvailableFaceStyle(v12, Style);
  return (4 * PreferedTypefaceId) | v14;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::GetFaceByWChar  (binary VA: 0x11705e0)
// Original: gameswf::FaceProvider::GetFaceByWChar
// ----------------------------------------------------------------------------
int gameswf::FaceProvider::GetFaceByWChar(gameswf::FaceProvider::Self *self, uint16_t a2, bool a3, bool a4, int *a5)
{
  int FaceIdByWChar;

  FaceIdByWChar = gameswf::FaceProvider::GetFaceIdByWChar(self, a2, a3, a4, a5);
  return gameswf::FaceProvider::GetFaceById(self, FaceIdByWChar);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::GetPreferedTypeface  (binary VA: 0x1170640)
// Original: gameswf::FaceProvider::GetPreferedTypeface
// ----------------------------------------------------------------------------
int gameswf::FaceProvider::GetPreferedTypeface(gameswf::FaceProvider::Self *self, bool a2, bool a3)
{
  int PreferedTypefaceId;

  PreferedTypefaceId = gameswf::FaceProvider::GetPreferedTypefaceId();
  return gameswf::FaceProvider::FaceEntry::GetFace(
           (gameswf::FaceProvider::FaceEntry::Self *)(*(uint32_t *)self + 36 * PreferedTypefaceId),
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::GetFaceEntries  (binary VA: 0x11706b0)
// Original: gameswf::FaceProvider::GetFaceEntries
// ----------------------------------------------------------------------------
gameswf::FaceProvider::Self * gameswf::FaceProvider::GetFaceEntries(gameswf::FaceProvider::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::GetScriptByFaceId  (binary VA: 0x11706c0)
// Original: gameswf::FaceProvider::GetScriptByFaceId
// ----------------------------------------------------------------------------
int gameswf::FaceProvider::GetScriptByFaceId(gameswf::FaceProvider::Self *self, int a2)
{
  return gameswf::FaceProvider::FaceEntry::GetScript((gameswf::FaceProvider::FaceEntry::Self *)(*(uint32_t *)self
                                                                                        + 36 * (a2 >> 2)));
}

// ----------------------------------------------------------------------------
// Function: gameswf::FaceProvider::Init  (binary VA: 0x1170700)
// Original: gameswf::FaceProvider::Init
// ----------------------------------------------------------------------------
void gameswf::FaceProvider::Init(int a1, int a2)
{
  int HostInterface;
  char v3;
  int v4;
  gameswf::Self *v5;
  char *v6;
  gameswf::Self *v7;
  int v8;
  unsigned int v9;
  int i;
  char *v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  __m128i *v19;
  int v20;
  char *v21;
  char *v22;
  char *v23;
  char v24;
  int v25;
  char *v26;
  int v27;
  int v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef gameswf::Self *_g4_t_v38;
  typedef void *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef char *_g4_t_v50;
  typedef gameswf::Self **_g4_t_v51;
  typedef uint32_t _g4_t_v52[2];
  typedef char _g4_t_v53[4];
  typedef uint32_t _g4_t_v54;
  typedef char *_g4_t_v55;
  typedef char *_g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef char *_g4_t_v59;
  typedef void *_g4_t_v60;
  typedef gameswf::Self *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef __m128i _g4_t_v63;
  typedef uint32_t _g4_t_v64[7];
  typedef __m128i *_g4_t_v65;
  typedef void *_g4_t_v66;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v29)) > _g4_s0 ? (12u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v30)) > _g4_s1 ? (16u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v31)) > _g4_s2 ? (20u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v32)) > _g4_s3 ? (24u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v33)) > _g4_s4 ? (28u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v34)) > _g4_s5 ? (32u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v35)) > _g4_s6 ? (36u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v36)) > _g4_s7 ? (36u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v37)) > _g4_s8 ? (36u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v38)) > _g4_s9 ? (40u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v39)) > _g4_s10 ? (44u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v40)) > _g4_s11 ? (44u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v41)) > _g4_s12 ? (48u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v42)) > _g4_s13 ? (48u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v43)) > _g4_s14 ? (52u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v44)) > _g4_s15 ? (52u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v45)) > _g4_s16 ? (56u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v46)) > _g4_s17 ? (56u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v47)) > _g4_s18 ? (60u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v48)) > _g4_s19 ? (60u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v49)) > _g4_s20 ? (64u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v50)) > _g4_s21 ? (64u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v51)) > _g4_s22 ? (64u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v52)) > _g4_s23 ? (68u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v53)) > _g4_s24 ? (76u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v54)) > _g4_s25 ? (80u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v55)) > _g4_s26 ? (84u + sizeof(_g4_t_v55)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v56)) > _g4_s27 ? (88u + sizeof(_g4_t_v56)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v57)) > _g4_s28 ? (100u + sizeof(_g4_t_v57)) : _g4_s28,
    _g4_s30 = (101u + sizeof(_g4_t_v58)) > _g4_s29 ? (101u + sizeof(_g4_t_v58)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v59)) > _g4_s30 ? (104u + sizeof(_g4_t_v59)) : _g4_s30,
    _g4_s32 = (108u + sizeof(_g4_t_v60)) > _g4_s31 ? (108u + sizeof(_g4_t_v60)) : _g4_s31,
    _g4_s33 = (112u + sizeof(_g4_t_v61)) > _g4_s32 ? (112u + sizeof(_g4_t_v61)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v62)) > _g4_s33 ? (116u + sizeof(_g4_t_v62)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v63)) > _g4_s34 ? (128u + sizeof(_g4_t_v63)) : _g4_s34,
    _g4_s36 = (144u + sizeof(_g4_t_v64)) > _g4_s35 ? (144u + sizeof(_g4_t_v64)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v65)) > _g4_s36 ? (172u + sizeof(_g4_t_v65)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v66)) > _g4_s37 ? (176u + sizeof(_g4_t_v66)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 68u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 100u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 101u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 104u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 108u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 112u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 116u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 128u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 144u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 172u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 176u);

  v65 = (__m128i *)&a1;
  v45 = a1;
  v41 = a2;
  HostInterface = gameswf::getHostInterface();
  (*(void (**)(char **, int, int, int, int, int, int, int, int, gameswf::Self *, void *, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)HostInterface + 12))(
    &v55,
    HostInterface,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v38,
    v39,
    v41,
    v43,
    v45,
    v47,
    v49,
    v52[0],
    v52[1],
    *(uint32_t *)v53,
    v54);
  v40 = v55;
  if ( v55 != v56 )
  {
    v50 = v55;
    do
    {
      gameswf::FaceProvider::FaceEntry::Construct(&v63);
      v57 = 1;
      v58 = 0;
      v3 = v50[80];
      if ( v3 == -1 )
        v4 = *((uint32_t *)v50 + 21) - 1;
      else
        v4 = v3 - 1;
      gameswf::String::resize((gameswf::String::Self *)&v57, v4);
      v5 = (gameswf::Self *)(v50 + 81);
      if ( v50[80] == -1 )
        v5 = *((gameswf::Self **)v50 + 23);
      if ( v57 == -1 )
      {
        v6 = v59;
        v7 = v61;
      }
      else
      {
        v6 = (char *)v57;
        v7 = (gameswf::Self *)&v58;
      }
      gameswf::Strcpy_s(v7, v6, v5);
      v44 = *((uint32_t *)v50 + 24);
      if ( (uint8_t *)(v44 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
      {
        v24 = v50[80];
        if ( v24 == -1 )
        {
          v26 = *((char **)v50 + 23);
          v25 = *((uint32_t *)v50 + 21) - 1;
        }
        else
        {
          v25 = v24 - 1;
          v26 = v50 + 81;
        }
        v8 = 5381;
        if ( v25 > 0 )
        {
          do
          {
            --v25;
            v27 = 33 * v8;
            v28 = (uint8_t)v26[v25] + 32;
            if ( (uint8_t)(v26[v25] - 65) > 0x19u )
              v28 = (uint8_t)v26[v25];
            v8 = v27 ^ v28;
          }
          while ( v25 != 0 );
          v8 = v8 << 9 >> 9;
        }
        *((uint32_t *)v50 + 24) = v8 & 0x7FFFFF | v44 & 0xFF800000;
      }
      else
      {
        v8 = v44 << 9 >> 9;
      }
      v9 = v8 & 0x7FFFFF | v62 & 0xFF800000;
      LOWORD(v62) = v8;
      BYTE2(v62) = BYTE2(v9) & 0x7F;
      HIBYTE(v62) = HIBYTE(v9) | 1;
      gameswf::FaceProvider::FaceEntry::SetScript((int)(uintptr_t)(&v63), &v57);
      if ( v57 == -1 && (v62 & 0x1000000) != 0 )
      {
        v66 = v60;
        gameswf::free_internal(v61);
      }
      for ( i = 0; i != 4; ++i )
      {
g4_m128_lane<int32_t>(v63, i) = 0;
        v11 = &v50[20 * i];
        if ( *v11 == -1 )
          v12 = *((uint32_t *)v11 + 1) - 1;
        else
          v12 = *v11 - 1;
        if ( v12 != 0 )
        {
          v52[0] = 0;
          v13 = *v11 == -1 ? *((char **)v11 + 3) : v11 + 1;
          v14 = FT_New_Face(v42, v13, *((uint32_t *)v50 + 25), v52);
          FT_Set_Pixel_Sizes(v52[0], 0, 16);
          if ( v14 == 0 )
          {
            v15 = v52[0];
            if ( v52[0] != 0 )
            {
g4_m128_lane<int32_t>(v63, i) = v52[0];
              v64[i] = (uint32_t)(uintptr_t)(hb_ft_font_create(v15, 0));
              gameswf::logMsg((gameswf::Self *)"\n\nCharmap family: %s\n", *(const char **)(v52[0] + 20));
              gameswf::logMsg((gameswf::Self *)"Charmap num: %d\n", *(const char **)(v52[0] + 36));
              v16 = v52[0];
              if ( *(int *)(v52[0] + 36) > 0 )
              {
                do
                {
                  v17 = *(uint32_t *)(*(uint32_t *)(v16 + 40) + 4 * v14++);
                  v18 = *(uint32_t *)(v17 + 4);
                  *(uint32_t *)v53 = 0;
                  v54 = __builtin_bswap32(v18);
                  LOBYTE(v54) = 0;
                  gameswf::logMsg((gameswf::Self *)"Encoding: %s\n", v53);
                  v16 = v52[0];
                }
                while ( *(uint32_t *)(v52[0] + 36) > v14 );
              }
            }
          }
        }
      }
      v19 = *(__m128i **)(v46 + 4);
      if ( v19 == *(__m128i **)(v46 + 8) )
      {
        g4_std::vector_gameswf_FaceProvider_Fac_a1321a::M_insert_aux(v46, *(uint32_t *)(v46 + 4), &v63);
      }
      else
      {
        v20 = 0;
        if ( v19 != nullptr )
        {
          *v19 = v63;
          std::memcpy(&v19[1], v64, 20);
          v20 = *(uint32_t *)(v46 + 4);
        }
        *(uint32_t *)(v46 + 4) = v20 + 36;
      }
      v65 = &v63;
      gameswf::FaceProvider::FaceEntry::Destroy();
      v50 += 104;
    }
    while ( v56 != v50 );
    v40 = v55;
    if ( v50 != v55 )
    {
      v21 = v55;
      v51 = (gameswf::Self **)(v55 + 88);
      v48 = v56;
      do
      {
        if ( v21[80] == -1 && (v21[99] & 1) != 0 )
        {
          v66 = *v51;
          v37 = v21;
          gameswf::free_internal(v51[1]);
          v21 = v37;
        }
        v22 = v21 + 80;
        v23 = v21 + 68;
        do
        {
          while ( *(v22 - 20) != -1 || (*(v22 - 1) & 1) == 0 )
          {
            v22 -= 20;
            v23 -= 20;
            if ( v21 == v22 )
              goto LABEL_36;
          }
          v22 -= 20;
          v66 = *(void **)v23;
          v36 = v21;
          gameswf::free_internal(*((gameswf::Self **)v23 + 1));
          v21 = v36;
          v23 -= 20;
        }
        while ( v36 != v22 );
LABEL_36:
        v21 += 104;
        v51 += 26;
      }
      while ( v48 != v21 );
      v40 = v55;
    }
  }
  if ( v40 != nullptr )
    opDelete(v40);
}


