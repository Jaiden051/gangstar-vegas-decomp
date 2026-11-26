#include "Core/Utils/DecompTypes.h"
#include "glitch_io_part02.h"

// ----------------------------------------------------------------------------
// Function: glitch::io::CGlfFileSystem::createXMLReaderUTF8  (binary VA: 0xeefe40)
// Original: glitch::io::CGlfFileSystem::createXMLReaderUTF8
// ----------------------------------------------------------------------------
volatile int32_t ** glitch::io::CGlfFileSystem::createXMLReaderUTF8(volatile int32_t **self, const char *a2)
{
  volatile int32_t **v2;
  volatile int32_t *v3;
  bool v4;
  typedef volatile int32_t *_g4_t_v6[3];
  typedef volatile int32_t *_g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v7[3] = (volatile int32_t *)&self;
  v2 = self;
  (*(void (**)(volatile int32_t **))(*(uint32_t *)a2 + 12))(v6);
  if ( v6[0] != nullptr )
  {
    glitch::io::createIXMLReaderUTF8((glitch::io::Self *)v7, (const boost::intrusive_ptr<glitch::io::IReadFile> *)v6);
    v3 = v7[0];
    v4 = v7[0] == nullptr;
    *v2 = v7[0];
    if ( !v4 )
    {
      sub_8B1B00(v3 + 1);
      if ( v7[0] != nullptr )
        sub_5459C0(v7[0]);
    }
    if ( v6[0] != nullptr )
      sub_5459C0(v6[0]);
  }
  else
  {
    *v2 = nullptr;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CAttributes::setAttribute  (binary VA: 0xef3dd0)
// Original: glitch::io::CAttributes::setAttribute
// ----------------------------------------------------------------------------
int glitch::io::CAttributes::setAttribute(int ***self, const char *a2, wchar_t *a3)
{
  int *v3;
  int result;
  size_t v5;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v6;
  size_t v7;
  int v8;
  char *v9;
  wchar_t *v10;
  wchar_t *v11;
  int v12;
  unsigned int v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  char *v28;
  wchar_t *v29;
  wchar_t *v30;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v31;
  typedef int *_g4_t_v32;
  typedef glitch::io::CAttributes::Self *_g4_t_v33;
  typedef int **_g4_t_v34;
  typedef int _g4_t_v35;
  typedef wchar_t *_g4_t_s;
  typedef wchar_t *_g4_t_sa;
  typedef int _g4_t_v38;
  typedef const char *_g4_t_s2;
  typedef unsigned int _g4_t_s2a;
  typedef int _g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef char _g4_t_v46[8];
  typedef volatile int32_t *_g4_t_v47;
  typedef char _g4_t_v48[4];
  typedef uint32_t _g4_t_v49[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v32)) > _g4_s1 ? (8u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v33)) > _g4_s2 ? (12u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v34)) > _g4_s3 ? (16u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v35)) > _g4_s4 ? (16u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_s)) > _g4_s5 ? (20u + sizeof(_g4_t_s)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_sa)) > _g4_s6 ? (20u + sizeof(_g4_t_sa)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v38)) > _g4_s7 ? (24u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_s2)) > _g4_s8 ? (28u + sizeof(_g4_t_s2)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_s2a)) > _g4_s9 ? (28u + sizeof(_g4_t_s2a)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v41)) > _g4_s10 ? (32u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v42)) > _g4_s11 ? (32u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v43)) > _g4_s12 ? (36u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v44)) > _g4_s13 ? (36u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v45)) > _g4_s14 ? (36u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v46)) > _g4_s15 ? (40u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v47)) > _g4_s16 ? (48u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v48)) > _g4_s17 ? (52u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v49)) > _g4_s18 ? (56u + sizeof(_g4_t_v49)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 20u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 28u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);

  v49[3] = (uint32_t)(uintptr_t)(&self);
  s = a3;
  v33 = (glitch::io::CAttributes::Self *)self;
  s2 = a2;
  v34 = *(self + 13);
  v3 = *v34;
  result = v34[1] - *v34;
  v38 = result;
  if ( result == 0 )
  {
LABEL_11:
    if ( s == nullptr )
      return result;
    v8 = opNew(0x18u);
    *(uint32_t *)(v8 + 4) = 0;
    *(uint8_t *)(v8 + 12) = 0;
    v9 = (char *)(uintptr_t)(byte_20D3E78);
    *(uint32_t *)(v8 + 8) = (uint32_t)(uintptr_t)(byte_20D3E78);
    *(uint32_t *)(v8 + 16) = (uint32_t)(uintptr_t)(byte_20D3E78);
    *(uint8_t *)(v8 + 13) = 1;
    *(uint32_t *)v8 = ((uint32_t)(uintptr_t)&off_2082E68);
    *(uint32_t *)(v8 + 20) = (uint32_t)(uintptr_t)(&unk_20DF960);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v8 + 8),
      s2);
    if ( *(uint8_t *)(v8 + 13) != 0 )
    {
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
        (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v8 + 20),
        s);
LABEL_26:
      v47 = (volatile int32_t *)v8;
      sub_8B1B00((volatile int32_t *)(v8 + 4));
      g4_std::vector_intrusive_ptr_io_IAttrib_6a170e::push_back(
        *((uint32_t *)v33 + 13),
        &v47);
      result = (int)(uintptr_t)(v47);
      if ( v47 != nullptr )
        return sub_5459C0(v47);
      return result;
    }
    v10 = &s[wcslen(s)];
    v42 = (char *)v10;
    if ( s == v10 )
    {
LABEL_25:
      v49[0] = (uint32_t)(uintptr_t)(v9);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v48,
        (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v49);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v49);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v8 + 16),
        (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v48);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v48);
      goto LABEL_26;
    }
    s2a = v10 - s;
    v32 = (int *)sub_EA0970(s2a, 0);
    v11 = s + 1;
    v9 = (char *)(v32 + 3);
    v44 = ((unsigned int)(v42 - (char *)(s + 1)) >> 2) + 1;
    v35 = 16 * (v44 >> 4);
    if ( v35 != 0 && v44 > 0xF && (s > (wchar_t *)&v9[v44] || v9 > (char *)&s[v44]) )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = *(__m128i *)&s[v12 + 4];
        v15 = *(__m128i *)&s[v12];
        v16 = _mm_unpacklo_epi16(v15, v14);
        v17 = _mm_unpackhi_epi16(v15, v14);
        v18 = *(__m128i *)&s[v12 + 12];
        v19 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v16, v17), _mm_unpackhi_epi16(v16, v17));
        v20 = *(__m128i *)&s[v12 + 8];
        v21 = _mm_unpacklo_epi16(v20, v18);
        v22 = _mm_unpackhi_epi16(v20, v18);
        v23 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v21, v22), _mm_unpackhi_epi16(v21, v22));
        ++v13;
        v24 = _mm_unpackhi_epi8(v19, v23);
        v25 = _mm_unpacklo_epi8(v19, v23);
        v26 = _mm_unpacklo_epi8(v25, v24);
        v27 = _mm_unpackhi_epi8(v25, v24);
        *(__m128i *)&v9[v12] = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v26, v27), _mm_unpackhi_epi8(v26, v27));
        v12 += 16;
      }
      while ( v44 >> 4 > v13 );
      v28 = &v9[v35];
      sa = &s[16 * (v44 >> 4)];
      if ( v35 == v44 )
        goto LABEL_23;
      v29 = sa;
      v45 = v8;
      v30 = (wchar_t *)v42;
      v11 = sa + 1;
    }
    else
    {
      v45 = v8;
      v28 = (char *)(v32 + 3);
      v30 = (wchar_t *)v42;
      v29 = s;
    }
    while ( 1 )
    {
      *v28++ = *v29;
      v29 = v11;
      if ( v30 == v11 )
        break;
      ++v11;
    }
    v8 = v45;
LABEL_23:
    if ( v32 != (int *)(&dword_20D3E6C) )
    {
      v32[2] = 0;
      *v32 = s2a;
      *((uint8_t *)v32 + s2a + 12) = 0;
    }
    goto LABEL_25;
  }
  v5 = strlen(a2);
  v43 = 0;
  while ( 1 )
  {
    v41 = *v3;
    v6 = *(std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)(*(uint32_t *)(*v3 + 8) - 12);
    v7 = (size_t)v6;
    v31 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v5;
    if ( v5 <= (unsigned int)(uintptr_t)(v6) )
      v7 = v5;
    result = memcmp(*(const void **)(*v3 + 8), s2, v7);
    v5 = (size_t)v31;
    if ( result == 0 && v31 == v6 )
      break;
    ++v43;
    ++v3;
    if ( v38 == v43 )
      goto LABEL_11;
  }
  if ( s != nullptr )
    return G4_VCALL<int>(v41, 152, s);
  else
    return (int)(uintptr_t)(g4_std::vector_intrusive_ptr_io_IAttrib_6a170e::erase(v46));
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CAttributes::addString  (binary VA: 0xef4160)
// Original: glitch::io::CAttributes::addString
// ----------------------------------------------------------------------------
volatile int32_t * glitch::io::CAttributes::addString(glitch::io::CAttributes::Self *self, const char *a2, const wchar_t *a3, bool a4)
{
  const wchar_t *v4;
  int v5;
  int v6;
  const wchar_t *v7;
  char *v8;
  const wchar_t *v9;
  int v10;
  unsigned int v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  char *v26;
  const wchar_t *v27;
  wchar_t v28;
  volatile int32_t *result;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef char *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef volatile int32_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t _g4_t_v39[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v30)) > _g4_s0 ? (12u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v31)) > _g4_s1 ? (16u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v32)) > _g4_s2 ? (24u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v33)) > _g4_s3 ? (28u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v34)) > _g4_s4 ? (32u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v35)) > _g4_s5 ? (36u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v36)) > _g4_s6 ? (36u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v37)) > _g4_s7 ? (44u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v38)) > _g4_s8 ? (48u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v39)) > _g4_s9 ? (52u + sizeof(_g4_t_v39)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);

  v4 = a3;
  v5 = opNew(0x18u);
  v6 = v5;
  if ( a3 == nullptr )
    v4 = (const wchar_t *)&unk_1CB9ED0;
  *(uint8_t *)(v5 + 12) = a4;
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_2082E68);
  *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(byte_20D3E78);
  *(uint32_t *)(v5 + 16) = (uint32_t)(uintptr_t)(byte_20D3E78);
  *(uint32_t *)(v5 + 20) = (uint32_t)(uintptr_t)(&unk_20DF960);
  *(uint32_t *)(v5 + 4) = 0;
  *(uint8_t *)(v5 + 13) = 1;
  g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
    (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v5 + 8),
    a2);
  if ( *(uint8_t *)(v6 + 13) == 0 )
  {
    v7 = &v4[wcslen(v4)];
    v8 = (char *)(uintptr_t)(byte_20D3E78);
    v33 = (char *)v7;
    if ( v4 == v7 )
    {
LABEL_16:
      v39[0] = (uint32_t)(uintptr_t)(v8);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v38,
        (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v39);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v39);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v6 + 16),
        (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v38);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v38);
      goto LABEL_17;
    }
    v32 = v7 - v4;
    v30 = (int *)sub_EA0970(v32, 0);
    v9 = v4 + 1;
    v8 = (char *)(v30 + 3);
    v35 = ((unsigned int)(v33 - (char *)(v4 + 1)) >> 2) + 1;
    v31 = 16 * (v35 >> 4);
    if ( v31 != 0 && v35 > 0xF && (v8 > (char *)&v4[v35] || v4 > (const wchar_t *)&v8[v35]) )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v12 = *(__m128i *)&v4[v10 + 4];
        v13 = *(__m128i *)&v4[v10];
        v14 = _mm_unpacklo_epi16(v13, v12);
        v15 = _mm_unpackhi_epi16(v13, v12);
        v16 = *(__m128i *)&v4[v10 + 12];
        v17 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v14, v15), _mm_unpackhi_epi16(v14, v15));
        v18 = *(__m128i *)&v4[v10 + 8];
        v19 = _mm_unpacklo_epi16(v18, v16);
        v20 = _mm_unpackhi_epi16(v18, v16);
        v21 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v19, v20), _mm_unpackhi_epi16(v19, v20));
        ++v11;
        v22 = _mm_unpackhi_epi8(v17, v21);
        v23 = _mm_unpacklo_epi8(v17, v21);
        v24 = _mm_unpacklo_epi8(v23, v22);
        v25 = _mm_unpackhi_epi8(v23, v22);
        *(__m128i *)&v8[v10] = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v24, v25), _mm_unpackhi_epi8(v24, v25));
        v10 += 16;
      }
      while ( v35 >> 4 > v11 );
      v4 += 16 * (v35 >> 4);
      v26 = &v8[v31];
      if ( v31 == v35 )
        goto LABEL_14;
      v36 = v6;
      v9 = v4 + 1;
      v27 = (const wchar_t *)v33;
      v34 = (char *)(v30 + 3);
    }
    else
    {
      v36 = v6;
      v26 = (char *)(v30 + 3);
      v27 = (const wchar_t *)v33;
      v34 = (char *)(v30 + 3);
    }
    while ( 1 )
    {
      v28 = *v4;
      v4 = v9;
      *v26++ = v28;
      if ( v27 == v9 )
        break;
      ++v9;
    }
    v6 = v36;
    v8 = v34;
LABEL_14:
    if ( v30 != (int *)(&dword_20D3E6C) )
    {
      v30[2] = 0;
      *v30 = v32;
      *((uint8_t *)v30 + v32 + 12) = 0;
    }
    goto LABEL_16;
  }
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
    (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v6 + 20),
    v4);
LABEL_17:
  v37 = (volatile int32_t *)v6;
  sub_8B1B00((volatile int32_t *)(v6 + 4));
  g4_std::vector_intrusive_ptr_io_IAttrib_6a170e::push_back(
    *((uint32_t *)self + 13),
    &v37);
  result = v37;
  if ( v37 != nullptr )
    return (volatile int32_t *)sub_5459C0(v37);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBinaryAttributesReader::readGroup  (binary VA: 0xef4440)
// Original: glitch::io::CBinaryAttributesReader::readGroup
// ----------------------------------------------------------------------------
void glitch::io::CBinaryAttributesReader::readGroup(glitch::io::CBinaryAttributesReader::Self *self, glitch::io::IAttributes::Self *a2, int a3, int a4, int a5, int a6, int a7, unsigned int a8, int a9, int a10, int a11, unsigned int a12)
{
  uint32_t v12;
  int v13;
  uint32_t v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;
  volatile int32_t *v29[4];
  int v30;
  int v31;
  int v32;

  v29[0] = (volatile int32_t *)byte_20D3E78;
  sub_EE3C80((int)(uintptr_t)(self), v29, v16, v17, v18, v19, v21, v23, v25, v27);
  if ( *((uint32_t *)v29[0] - 3) != 0 )
    G4_VCALL<void>(a2, 48, v29[0]);
  (*(void (**)(uint32_t, int *, int, int, int, int, int, int, volatile int32_t *, volatile int32_t *, volatile int32_t *, volatile int32_t *))(**((uint32_t **)self + 1) + 12))(
    *((uint32_t *)self + 1),
    &v30,
    4,
    v20,
    v22,
    v24,
    v26,
    v28,
    v29[0],
    v29[1],
    v29[2],
    v29[3]);
  v12 = a8;
  if ( *((uint8_t *)self + 12) != 0 )
  {
    v12 = __builtin_bswap32(a8);
    a8 = v12;
  }
  if ( v12 != 0 )
  {
    v13 = 0;
    do
    {
      v31 = v13;
      glitch::io::CBinaryAttributesReader::readGroup(self, a2);
      v13 = v31 + 1;
    }
    while ( a8 > v31 + 1 );
  }
  (*(void (**)(uint32_t, unsigned int *, int))(**((uint32_t **)self + 1) + 12))(*((uint32_t *)self + 1), &a12, 4);
  v14 = a12;
  if ( *((uint8_t *)self + 12) != 0 )
  {
    v14 = __builtin_bswap32(a12);
    a12 = v14;
  }
  if ( v14 != 0 )
  {
    v15 = 0;
    do
    {
      v32 = v15;
      glitch::io::CBinaryAttributesReader::readAttribute(self, a2);
      v15 = v32 + 1;
    }
    while ( a12 > v32 + 1 );
  }
  if ( *(uint32_t *)(a4 - 12) != 0 )
    G4_VCALL<void>(a2, 60);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&a4);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLAttributesReader::read  (binary VA: 0xef5850)
// Original: glitch::io::CXMLAttributesReader::read
// ----------------------------------------------------------------------------
int glitch::io::CXMLAttributesReader::read(glitch::io::CXMLAttributesReader::Self *self, glitch::io::IAttributes::Self *a2, int a3, wchar_t *a4, int a5, int a6, const wchar_t *a7)
{
  const wchar_t *v8;
  wchar_t *v9;
  int v10;
  const wchar_t *v11;
  size_t v12;
  size_t v13;
  size_t v14;
  size_t v15;
  int v16;
  unsigned int v18;
  const wchar_t *v19;
  size_t v20;
  size_t v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  const wchar_t *v33;
  glitch::io::CXMLAttributesReader::Self *thisa;
  size_t v35;
  size_t v36;
  size_t v37;
  glitch::io::CXMLAttributesReader::Self *v38;

  G4_VCALL<void>(a2, 44, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32);
  sub_EA31B0(&a4, dword_1CB9ED4);
  v8 = *((const wchar_t **)self + 3);
  if ( v8 == nullptr )
    goto LABEL_5;
  v35 = wcslen(*((const wchar_t **)self + 3));
  v9 = a4;
  if ( v35 > 0xFFFFFFE )
    sub_1900180("basic_string::assign");
  if ( v8 >= a4 && v8 <= &a4[*(a4 - 3)] && *(a4 - 1) <= 0 )
  {
    v18 = v8 - a4;
    if ( v35 <= v18 )
    {
      if ( v35 != 1 )
      {
        wmemcpy(a4, v8, v35);
        v9 = a4;
        goto LABEL_28;
      }
    }
    else
    {
      if ( v18 == 0 )
        goto LABEL_28;
      if ( v35 != 1 )
      {
        wmemmove(a4, v8, v35);
        v9 = a4;
        goto LABEL_28;
      }
    }
    *a4 = *v8;
    v9 = a4;
LABEL_28:
    if ( v9 - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
    {
      *(v9 - 1) = 0;
      *(v9 - 3) = v35;
      v9[v35] = 0;
    }
    goto LABEL_5;
  }
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::M_mutate(
    (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&a4,
    0,
    *(a4 - 3),
    v35);
  if ( v35 != 0 )
  {
    if ( v35 == 1 )
      *a4 = *v8;
    else
      wmemcpy(a4, v8, v35);
  }
LABEL_5:
  if ( *((uint8_t *)self + 8) == 0 )
    goto LABEL_6;
  v19 = (const wchar_t *)(*(int (**)(uint32_t))(**((uint32_t **)self + 1) + 60))(*((uint32_t *)self + 1));
  v38 = (glitch::io::CXMLAttributesReader::Self *)*(a4 - 3);
  v20 = wcslen(v19);
  v21 = (size_t)v38;
  v33 = v19;
  if ( v20 <= (unsigned int)(uintptr_t)(v38) )
    v21 = v20;
  thisa = (glitch::io::CXMLAttributesReader::Self *)v20;
  v16 = 0;
  if ( wmemcmp(a4, v33, v21) == 0 && v38 == thisa )
  {
LABEL_6:
    if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 1) + 12))(*((uint32_t *)self + 1)) != 0 )
    {
      while ( 1 )
      {
        v10 = (*(int (**)(uint32_t))(**((uint32_t **)self + 1) + 20))(*((uint32_t *)self + 1));
        if ( v10 == 1 )
        {
          glitch::io::CXMLAttributesReader::readAttributeFromXML(self, (glitch::io::IAttributes::Self *)U"group");
          goto LABEL_6;
        }
        if ( v10 != 2 )
          goto LABEL_6;
        v11 = (const wchar_t *)(*(int (**)(uint32_t))(**((uint32_t **)self + 1) + 60))(*((uint32_t *)self + 1));
        sub_EA31B0(&a7, v11);
        v12 = *(a4 - 3);
        v13 = *(a7 - 3);
        v36 = v13;
        if ( v13 > v12 )
          v13 = *(a4 - 3);
        if ( wmemcmp(a4, a7, v13) == 0 && v12 == v36 )
          break;
        v37 = *(a7 - 3);
        v14 = wcslen(U"group");
        v15 = v37;
        if ( v14 <= v37 )
          v15 = v14;
        if ( wmemcmp(a7, U"group", v15) == 0 && v37 == v14 )
          (*(void (**)(const wchar_t *))(aGroup_2 /* "group" */[0] + 60))((const wchar_t *)(U"group"));
        g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&a7);
        if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)self + 1) + 12))(*((uint32_t *)self + 1)) == 0 )
          goto LABEL_19;
      }
      v16 = 1;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&a7);
    }
    else
    {
LABEL_19:
      v16 = 1;
    }
  }
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&a4);
  return v16;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttributesWriter::Destroy  (binary VA: 0xef81c0)
// Original: glitch::io::IAttributesWriter::~IAttributesWriter
// ----------------------------------------------------------------------------
void glitch::io::IAttributesWriter::Destroy(glitch::io::IAttributesWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082720);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttributesReader::Destroy  (binary VA: 0xef81e0)
// Original: glitch::io::IAttributesReader::~IAttributesReader
// ----------------------------------------------------------------------------
void glitch::io::IAttributesReader::Destroy(glitch::io::IAttributesReader::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082740);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getInt  (binary VA: 0xef8240)
// Original: glitch::io::IAttribute::getInt
// ----------------------------------------------------------------------------
int glitch::io::IAttribute::getInt()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getFloat  (binary VA: 0xef8250)
// Original: glitch::io::IAttribute::getFloat
// ----------------------------------------------------------------------------
long double glitch::io::IAttribute::getFloat()
{
  return 0.0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getColorf  (binary VA: 0xef8260)
// Original: glitch::io::IAttribute::getColorf
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getColorf(glitch::io::IAttribute::Self *self)
{
  _mm_storel_ps((double *)self, G4_BITCAST<__m128>(xmmword_1C7C2E0));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C2E0));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getColor  (binary VA: 0xef8290)
// Original: glitch::io::IAttribute::getColor
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getColor(glitch::io::IAttribute::Self *self)
{
  *(uint8_t *)self = -1;
  *((uint8_t *)self + 1) = -1;
  *((uint8_t *)self + 2) = -1;
  *((uint8_t *)self + 3) = -1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getStringW  (binary VA: 0xef82b0)
// Original: glitch::io::IAttribute::getStringW
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getStringW(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&unk_20DF960);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getArray  (binary VA: 0xef82d0)
// Original: glitch::io::IAttribute::getArray
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getArray(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getBool  (binary VA: 0xef82f0)
// Original: glitch::io::IAttribute::getBool
// ----------------------------------------------------------------------------
int glitch::io::IAttribute::getBool()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getBinary  (binary VA: 0xef8300)
// Original: glitch::io::IAttribute::getBinary
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::getBinary()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getVector3d  (binary VA: 0xef8310)
// Original: glitch::io::IAttribute::getVector3d
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getVector3d(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getVector4d  (binary VA: 0xef8330)
// Original: glitch::io::IAttribute::getVector4d
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getVector4d(glitch::io::IAttribute::Self *self)
{
  _mm_storel_ps((double *)self, g4_m128_from<__m128>(0LL));
  _mm_storeh_ps((double *)self + 1, g4_m128_from<__m128>(0LL));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getRect  (binary VA: 0xef8350)
// Original: glitch::io::IAttribute::getRect
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getRect(glitch::io::IAttribute::Self *self)
{
  *(__m128i *)self = g4_m128_from<__m128i>(0LL);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getQuaternion  (binary VA: 0xef8370)
// Original: glitch::io::IAttribute::getQuaternion
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getQuaternion(glitch::io::IAttribute::Self *self)
{
  _mm_storel_ps((double *)self, G4_BITCAST<__m128>(xmmword_1C7C230));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C230));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getMatrix2  (binary VA: 0xef83a0)
// Original: glitch::io::IAttribute::getMatrix2
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getMatrix2(glitch::io::IAttribute::Self *self)
{
  _mm_storel_ps((double *)self, G4_BITCAST<__m128>(xmmword_1C7C320));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C320));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getMatrix3  (binary VA: 0xef83d0)
// Original: glitch::io::IAttribute::getMatrix3
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getMatrix3(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getTriangle  (binary VA: 0xef8400)
// Original: glitch::io::IAttribute::getTriangle
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getTriangle(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getVector2d  (binary VA: 0xef8430)
// Original: glitch::io::IAttribute::getVector2d
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getVector2d(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getVector2di  (binary VA: 0xef8440)
// Original: glitch::io::IAttribute::getVector2di
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getVector2di(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getVector3di  (binary VA: 0xef8460)
// Original: glitch::io::IAttribute::getVector3di
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getVector3di(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getVector4di  (binary VA: 0xef8480)
// Original: glitch::io::IAttribute::getVector4di
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getVector4di(glitch::io::IAttribute::Self *self)
{
  *(__m128i *)self = g4_m128_from<__m128i>(0LL);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getLine2d  (binary VA: 0xef84a0)
// Original: glitch::io::IAttribute::getLine2d
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getLine2d(glitch::io::IAttribute::Self *self)
{
  _mm_storel_ps((double *)self, G4_BITCAST<__m128>(xmmword_1C7C280));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C280));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getLine2di  (binary VA: 0xef84d0)
// Original: glitch::io::IAttribute::getLine2di
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getLine2di(glitch::io::IAttribute::Self *self)
{
  *(g4_int128_t *)self = xmmword_1C7C580;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getLine3d  (binary VA: 0xef8500)
// Original: glitch::io::IAttribute::getLine3d
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getLine3d(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 1065353216;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 1065353216;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getLine3di  (binary VA: 0xef8520)
// Original: glitch::io::IAttribute::getLine3di
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getLine3di(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 1;
  *((uint32_t *)self + 4) = 1;
  *((uint32_t *)self + 5) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getDimension2d  (binary VA: 0xef8550)
// Original: glitch::io::IAttribute::getDimension2d
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getDimension2d(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getBBox  (binary VA: 0xef8570)
// Original: glitch::io::IAttribute::getBBox
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getBBox(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 2139095039;
  *((uint32_t *)self + 1) = 2139095039;
  *((uint32_t *)self + 2) = 2139095039;
  *((uint32_t *)self + 3) = -8388609;
  *((uint32_t *)self + 4) = -8388609;
  *((uint32_t *)self + 5) = -8388609;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getPlane  (binary VA: 0xef85a0)
// Original: glitch::io::IAttribute::getPlane
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getPlane(glitch::io::IAttribute::Self *self)
{
  _mm_storel_ps((double *)self, G4_BITCAST<__m128>(xmmword_1C7C240));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C240));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getEnum  (binary VA: 0xef85d0)
// Original: glitch::io::IAttribute::getEnum
// ----------------------------------------------------------------------------
int glitch::io::IAttribute::getEnum()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getUserPointer  (binary VA: 0xef85e0)
// Original: glitch::io::IAttribute::getUserPointer
// ----------------------------------------------------------------------------
int glitch::io::IAttribute::getUserPointer()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setInt  (binary VA: 0xef85f0)
// Original: glitch::io::IAttribute::setInt
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setInt()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setFloat  (binary VA: 0xef8600)
// Original: glitch::io::IAttribute::setFloat
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setFloat()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setString  (binary VA: 0xef8610)
// Original: glitch::io::IAttribute::setString
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setString()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setArray  (binary VA: 0xef8620)
// Original: glitch::io::IAttribute::setArray
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setColor  (binary VA: 0xef8630)
// Original: glitch::io::IAttribute::setColor
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setColor()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setColor_eaef8640  (binary VA: 0xef8640)
// Original: glitch::io::IAttribute::setColor
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setColor_eaef8640()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setBool  (binary VA: 0xef8650)
// Original: glitch::io::IAttribute::setBool
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setBool()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setBinary  (binary VA: 0xef8660)
// Original: glitch::io::IAttribute::setBinary
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setBinary()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setVector2d  (binary VA: 0xef8670)
// Original: glitch::io::IAttribute::setVector2d
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setVector2d()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setVector3d  (binary VA: 0xef8680)
// Original: glitch::io::IAttribute::setVector3d
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setVector3d()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setVector4d  (binary VA: 0xef8690)
// Original: glitch::io::IAttribute::setVector4d
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setVector4d()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setRect  (binary VA: 0xef86a0)
// Original: glitch::io::IAttribute::setRect
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setRect()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setQuaternion  (binary VA: 0xef86b0)
// Original: glitch::io::IAttribute::setQuaternion
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setQuaternion()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setMatrix2  (binary VA: 0xef86c0)
// Original: glitch::io::IAttribute::setMatrix2
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setMatrix2()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setMatrix3  (binary VA: 0xef86d0)
// Original: glitch::io::IAttribute::setMatrix3
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setMatrix3()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setMatrix  (binary VA: 0xef86e0)
// Original: glitch::io::IAttribute::setMatrix
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setMatrix()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setTriangle  (binary VA: 0xef86f0)
// Original: glitch::io::IAttribute::setTriangle
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setTriangle()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setVector2di  (binary VA: 0xef8700)
// Original: glitch::io::IAttribute::setVector2di
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setVector2di()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setVector3di  (binary VA: 0xef8710)
// Original: glitch::io::IAttribute::setVector3di
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setVector3di()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setVector4di  (binary VA: 0xef8720)
// Original: glitch::io::IAttribute::setVector4di
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setVector4di()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setLine2d  (binary VA: 0xef8730)
// Original: glitch::io::IAttribute::setLine2d
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setLine2d()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setLine2d_eaef8740  (binary VA: 0xef8740)
// Original: glitch::io::IAttribute::setLine2d
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setLine2d_eaef8740()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setLine3d  (binary VA: 0xef8750)
// Original: glitch::io::IAttribute::setLine3d
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setLine3d()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setLine3d_eaef8760  (binary VA: 0xef8760)
// Original: glitch::io::IAttribute::setLine3d
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setLine3d_eaef8760()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setDimension2d  (binary VA: 0xef8770)
// Original: glitch::io::IAttribute::setDimension2d
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setDimension2d()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setBBox  (binary VA: 0xef8780)
// Original: glitch::io::IAttribute::setBBox
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setBBox()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setPlane  (binary VA: 0xef8790)
// Original: glitch::io::IAttribute::setPlane
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setPlane()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setUserPointer  (binary VA: 0xef87a0)
// Original: glitch::io::IAttribute::setUserPointer
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setUserPointer()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setEnum  (binary VA: 0xef87b0)
// Original: glitch::io::IAttribute::setEnum
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setEnum()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setTexture  (binary VA: 0xef87c0)
// Original: glitch::io::IAttribute::setTexture
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setTexture()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setLight  (binary VA: 0xef87d0)
// Original: glitch::io::IAttribute::setLight
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setLight()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBoolAttribute::getInt  (binary VA: 0xef8a50)
// Original: glitch::io::CBoolAttribute::getInt
// ----------------------------------------------------------------------------
int glitch::io::CBoolAttribute::getInt(glitch::io::CBoolAttribute::Self *self)
{
  return *((uint8_t *)self + 13);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBoolAttribute::getFloat  (binary VA: 0xef8a60)
// Original: glitch::io::CBoolAttribute::getFloat
// ----------------------------------------------------------------------------
long double glitch::io::CBoolAttribute::getFloat(glitch::io::CBoolAttribute::Self *self)
{
  long double result; // fst7

  result = 0.0;
  if ( *((uint8_t *)self + 13) != 0 )
    return 1.0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBoolAttribute::getBool  (binary VA: 0xef8a80)
// Original: glitch::io::CBoolAttribute::getBool
// ----------------------------------------------------------------------------
int glitch::io::CBoolAttribute::getBool(glitch::io::CBoolAttribute::Self *self)
{
  return *((uint8_t *)self + 13);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBoolAttribute::setInt  (binary VA: 0xef8a90)
// Original: glitch::io::CBoolAttribute::setInt
// ----------------------------------------------------------------------------
glitch::io::CBoolAttribute::Self * glitch::io::CBoolAttribute::setInt(glitch::io::CBoolAttribute::Self *self, int a2)
{
  *((uint8_t *)self + 13) = a2 != 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBoolAttribute::setFloat  (binary VA: 0xef8aa0)
// Original: glitch::io::CBoolAttribute::setFloat
// ----------------------------------------------------------------------------
glitch::io::CBoolAttribute::Self * glitch::io::CBoolAttribute::setFloat(glitch::io::CBoolAttribute::Self *self, float a2)
{
  *((uint8_t *)self + 13) = a2 != 0.0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBoolAttribute::setBool  (binary VA: 0xef8ad0)
// Original: glitch::io::CBoolAttribute::setBool
// ----------------------------------------------------------------------------
glitch::io::CBoolAttribute::Self * glitch::io::CBoolAttribute::setBool(glitch::io::CBoolAttribute::Self *self, bool a2)
{
  *((uint8_t *)self + 13) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBoolAttribute::getType  (binary VA: 0xef8ae0)
// Original: glitch::io::CBoolAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CBoolAttribute::getType()
{
  return 3;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBoolAttribute::getTypeString  (binary VA: 0xef8af0)
// Original: glitch::io::CBoolAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CBoolAttribute::getTypeString()
{
  return (const wchar_t *)(U"bool");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIntAttribute::getInt  (binary VA: 0xef8b10)
// Original: glitch::io::CIntAttribute::getInt
// ----------------------------------------------------------------------------
int glitch::io::CIntAttribute::getInt(glitch::io::CIntAttribute::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIntAttribute::getFloat  (binary VA: 0xef8b20)
// Original: glitch::io::CIntAttribute::getFloat
// ----------------------------------------------------------------------------
long double glitch::io::CIntAttribute::getFloat(glitch::io::CIntAttribute::Self *self)
{
  return (float)*((int *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIntAttribute::getBool  (binary VA: 0xef8b40)
// Original: glitch::io::CIntAttribute::getBool
// ----------------------------------------------------------------------------
bool glitch::io::CIntAttribute::getBool(glitch::io::CIntAttribute::Self *self)
{
  return *((uint32_t *)self + 4) != 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIntAttribute::setInt  (binary VA: 0xef8b50)
// Original: glitch::io::CIntAttribute::setInt
// ----------------------------------------------------------------------------
glitch::io::CIntAttribute::Self * glitch::io::CIntAttribute::setInt(glitch::io::CIntAttribute::Self *self, int a2)
{
  *((uint32_t *)self + 4) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIntAttribute::setFloat  (binary VA: 0xef8b60)
// Original: glitch::io::CIntAttribute::setFloat
// ----------------------------------------------------------------------------
glitch::io::CIntAttribute::Self * glitch::io::CIntAttribute::setFloat(glitch::io::CIntAttribute::Self *self, float a2)
{
  *((uint32_t *)self + 4) = (int)a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIntAttribute::getType  (binary VA: 0xef8b70)
// Original: glitch::io::CIntAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CIntAttribute::getType()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIntAttribute::getTypeString  (binary VA: 0xef8b80)
// Original: glitch::io::CIntAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CIntAttribute::getTypeString()
{
  return (const wchar_t *)(U"int");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CFloatAttribute::getInt  (binary VA: 0xef8ba0)
// Original: glitch::io::CFloatAttribute::getInt
// ----------------------------------------------------------------------------
int glitch::io::CFloatAttribute::getInt(glitch::io::CFloatAttribute::Self *self)
{
  return (int)*((float *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CFloatAttribute::getFloat  (binary VA: 0xef8bb0)
// Original: glitch::io::CFloatAttribute::getFloat
// ----------------------------------------------------------------------------
long double glitch::io::CFloatAttribute::getFloat(glitch::io::CFloatAttribute::Self *self)
{
  return *((float *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CFloatAttribute::getBool  (binary VA: 0xef8bc0)
// Original: glitch::io::CFloatAttribute::getBool
// ----------------------------------------------------------------------------
bool glitch::io::CFloatAttribute::getBool(glitch::io::CFloatAttribute::Self *self)
{
  return *((float *)self + 4) != 0.0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CFloatAttribute::setInt  (binary VA: 0xef8bd0)
// Original: glitch::io::CFloatAttribute::setInt
// ----------------------------------------------------------------------------
glitch::io::CFloatAttribute::Self * glitch::io::CFloatAttribute::setInt(glitch::io::CFloatAttribute::Self *self, int a2)
{
  *((float *)self + 4) = (float)a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CFloatAttribute::setFloat  (binary VA: 0xef8bf0)
// Original: glitch::io::CFloatAttribute::setFloat
// ----------------------------------------------------------------------------
glitch::io::CFloatAttribute::Self * glitch::io::CFloatAttribute::setFloat(glitch::io::CFloatAttribute::Self *self, float a2)
{
  *((float *)self + 4) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CFloatAttribute::getType  (binary VA: 0xef8c00)
// Original: glitch::io::CFloatAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CFloatAttribute::getType()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CFloatAttribute::getTypeString  (binary VA: 0xef8c10)
// Original: glitch::io::CFloatAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CFloatAttribute::getTypeString()
{
  return (const wchar_t *)(U"float");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getBool  (binary VA: 0xef8c30)
// Original: glitch::io::CNumbersAttribute::getBool
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::getBool(glitch::io::CNumbersAttribute::Self *self)
{
  int result;
  int v2;
  int v3;

  result = 0;
  v2 = *((uint32_t *)self + 10);
  if ( v2 != 0 )
  {
    v3 = 0;
    if ( *((uint8_t *)self + 44) != 0 )
    {
      while ( *(float *)(*((uint32_t *)self + 7) + 4 * v3) == 0.0 )
      {
        if ( ++v3 == v2 )
          return 0;
      }
    }
    else
    {
      while ( *(uint32_t *)(*((uint32_t *)self + 4) + 4 * v3) == 0 )
      {
        if ( ++v3 == v2 )
          return 0;
      }
    }
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getVector2d  (binary VA: 0xef8c90)
// Original: glitch::io::CNumbersAttribute::getVector2d
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getVector2d(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  int v2;
  glitch::io::CNumbersAttribute::Self *result;
  int v4;
  float v5; // xmm0_4
  float v6; // xmm0_4

  v2 = 0;
  result = self;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    v4 = 0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v4 = **(uint32_t **)(a2 + 28);
    *(uint32_t *)self = v4;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v2 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 4);
    *((uint32_t *)self + 1) = v2;
  }
  else
  {
    v5 = 0.0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v5 = (float)**(int **)(a2 + 16);
    *(float *)self = v5;
    v6 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v6 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 4);
    *((float *)self + 1) = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getVector3d  (binary VA: 0xef8d10)
// Original: glitch::io::CNumbersAttribute::getVector3d
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getVector3d(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  int v2;
  glitch::io::CNumbersAttribute::Self *result;
  int v4;
  int v5;
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4

  v2 = 0;
  result = self;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    v4 = 0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v4 = **(uint32_t **)(a2 + 28);
    *(uint32_t *)self = v4;
    v5 = 0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v5 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 4);
    *((uint32_t *)self + 1) = v5;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v2 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 8);
    *((uint32_t *)self + 2) = v2;
  }
  else
  {
    v6 = 0.0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v6 = (float)**(int **)(a2 + 16);
    *(float *)self = v6;
    v7 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v7 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 4);
    *((float *)self + 1) = v7;
    v8 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v8 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 8);
    *((float *)self + 2) = v8;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getVector4d  (binary VA: 0xef8db0)
// Original: glitch::io::CNumbersAttribute::getVector4d
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getVector4d(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  glitch::io::CNumbersAttribute::Self *result;
  unsigned int v3;
  uint32_t *v4;
  int v5;
  int *v6;
  float v7; // xmm0_4

  result = self;
  _mm_storel_ps((double *)self, g4_m128_from<__m128>(0LL));
  _mm_storel_ps((double *)self + 1, g4_m128_from<__m128>(0LL));
  v3 = *(uint32_t *)(a2 + 40);
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    if ( v3 == 0
      || (v4 = *(uint32_t **)(a2 + 28), *(uint32_t *)self = *v4, v3 <= 1)
      || (*((uint32_t *)self + 1) = v4[1], v3 == 2) )
    {
      v5 = 0;
      *((uint32_t *)self + 2) = 0;
    }
    else
    {
      *((uint32_t *)self + 2) = v4[2];
      if ( v3 == 3 )
        v5 = 0;
      else
        v5 = v4[3];
    }
    *((uint32_t *)self + 3) = v5;
  }
  else
  {
    if ( v3 == 0
      || (v6 = *(int **)(a2 + 16), *(float *)self = (float)*v6, v3 <= 1)
      || (*((float *)self + 1) = (float)v6[1], v3 == 2) )
    {
      *((uint32_t *)self + 2) = 0;
      v7 = 0.0;
    }
    else
    {
      *((float *)self + 2) = (float)v6[2];
      if ( v3 == 3 )
        v7 = 0.0;
      else
        v7 = (float)v6[3];
    }
    *((float *)self + 3) = v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getColorf  (binary VA: 0xef8e70)
// Original: glitch::io::CNumbersAttribute::getColorf
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getColorf(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  glitch::io::CNumbersAttribute::Self *result;
  unsigned int v3;
  uint32_t *v4;
  int v5;
  int *v6;
  float v7; // xmm0_4

  result = self;
  _mm_storel_ps((double *)self, g4_m128_from<__m128>(0LL));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C230));
  v3 = *(uint32_t *)(a2 + 40);
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    if ( v3 == 0
      || (v4 = *(uint32_t **)(a2 + 28), *(uint32_t *)self = *v4, v3 <= 1)
      || (*((uint32_t *)self + 1) = v4[1], v3 == 2) )
    {
      v5 = 0;
      *((uint32_t *)self + 2) = 0;
    }
    else
    {
      *((uint32_t *)self + 2) = v4[2];
      if ( v3 == 3 )
        v5 = 0;
      else
        v5 = v4[3];
    }
    *((uint32_t *)self + 3) = v5;
  }
  else
  {
    if ( v3 == 0
      || (v6 = *(int **)(a2 + 16), *(float *)self = (float)*v6 * 0.003921569f, v3 <= 1)
      || (*((float *)self + 1) = (float)v6[1] * 0.003921569f, v3 == 2) )
    {
      *((uint32_t *)self + 2) = 0;
      v7 = 0.0;
    }
    else
    {
      *((float *)self + 2) = (float)v6[2] * 0.003921569f;
      if ( v3 == 3 )
        v7 = 0.0;
      else
        v7 = (float)v6[3] * 0.003921569f;
    }
    *((float *)self + 3) = v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getColor  (binary VA: 0xef8f70)
// Original: glitch::io::CNumbersAttribute::getColor
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getColor(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  float v2; // xmm1_4
  int v3;
  float v4; // xmm1_4
  float v6[7];

  (*(void (**)(float *))(*(uint32_t *)a2 + 20))(v6);
  v2 = v6[1];
  *((uint8_t *)self + 2) = (int)(float)(v6[2] * 255.0);
  v3 = (int)(float)(v2 * 255.0);
  v4 = v6[3];
  *((uint8_t *)self + 1) = v3;
  *(uint8_t *)self = (int)(float)(255.0 * v6[0]);
  *((uint8_t *)self + 3) = (int)(float)(v4 * 255.0);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getRect  (binary VA: 0xef9010)
// Original: glitch::io::CNumbersAttribute::getRect
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getRect(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  int v2;
  glitch::io::CNumbersAttribute::Self *result;
  int v4;
  int v5;
  int v6;

  v2 = 0;
  result = self;
  *(__m128i *)self = g4_m128_from<__m128i>(0LL);
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v2 = (int)**(float **)(a2 + 28);
    *(uint32_t *)self = v2;
    v4 = 0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v4 = (int)*(float *)(*(uint32_t *)(a2 + 28) + 4);
    *((uint32_t *)self + 1) = v4;
    v5 = (int)(float)v2;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v5 = (int)*(float *)(*(uint32_t *)(a2 + 28) + 8);
    *((uint32_t *)self + 2) = v5;
    v6 = (int)(float)v4;
    if ( *(uint32_t *)(a2 + 40) > 3u )
      v6 = (int)*(float *)(*(uint32_t *)(a2 + 28) + 12);
LABEL_10:
    *((uint32_t *)self + 3) = v6;
    return result;
  }
  if ( *(uint32_t *)(a2 + 40) != 0 )
    v2 = **(uint32_t **)(a2 + 16);
  *(uint32_t *)self = v2;
  v6 = 0;
  if ( *(uint32_t *)(a2 + 40) > 1u )
    v6 = *(uint32_t *)(*(uint32_t *)(a2 + 16) + 4);
  *((uint32_t *)self + 1) = v6;
  if ( *(uint32_t *)(a2 + 40) > 2u )
    v2 = *(uint32_t *)(*(uint32_t *)(a2 + 16) + 8);
  *((uint32_t *)self + 2) = v2;
  if ( *(uint32_t *)(a2 + 40) <= 3u )
    goto LABEL_10;
  *((uint32_t *)self + 3) = *(uint32_t *)(*(uint32_t *)(a2 + 16) + 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getMatrix2  (binary VA: 0xef90d0)
// Original: glitch::io::CNumbersAttribute::getMatrix2
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getMatrix2(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  glitch::io::CNumbersAttribute::Self *result;
  unsigned int v3;
  int *v4;
  uint32_t *v5;

  result = self;
  _mm_storel_ps((double *)self, G4_BITCAST<__m128>(xmmword_1C7C320));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C320));
  v3 = *(uint32_t *)(a2 + 40);
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    if ( v3 != 0 )
    {
      v5 = *(uint32_t **)(a2 + 28);
      *(uint32_t *)self = *v5;
      if ( v3 > 1 )
      {
        *((uint32_t *)self + 1) = v5[1];
        if ( v3 != 2 )
        {
          *((uint32_t *)self + 2) = v5[2];
          if ( v3 != 3 )
            *((uint32_t *)self + 3) = v5[3];
        }
      }
    }
  }
  else if ( v3 != 0 )
  {
    v4 = *(int **)(a2 + 16);
    *(float *)self = (float)*v4;
    if ( v3 > 1 )
    {
      *((float *)self + 1) = (float)v4[1];
      if ( v3 != 2 )
      {
        *((float *)self + 2) = (float)v4[2];
        if ( v3 != 3 )
          *((float *)self + 3) = (float)v4[3];
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getMatrix3  (binary VA: 0xef9180)
// Original: glitch::io::CNumbersAttribute::getMatrix3
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getMatrix3(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  glitch::io::CNumbersAttribute::Self *result;
  bool v3;
  unsigned int v4;
  int *v5;
  uint32_t *v6;

  result = self;
  v3 = *(uint8_t *)(a2 + 44) == 0;
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  v4 = *(uint32_t *)(a2 + 40);
  if ( v3 )
  {
    if ( v4 != 0 )
    {
      v5 = *(int **)(a2 + 16);
      *(float *)self = (float)*v5;
      if ( v4 > 1 )
      {
        *((float *)self + 1) = (float)v5[1];
        if ( v4 != 2 )
        {
          *((float *)self + 2) = (float)v5[2];
          if ( v4 != 3 )
          {
            *((float *)self + 3) = (float)v5[3];
            if ( v4 != 4 )
            {
              *((float *)self + 4) = (float)v5[4];
              if ( v4 != 5 )
              {
                *((float *)self + 5) = (float)v5[5];
                if ( v4 != 6 )
                {
                  *((float *)self + 6) = (float)v5[6];
                  if ( v4 != 7 )
                  {
                    *((float *)self + 7) = (float)v5[7];
                    if ( v4 != 8 )
                      *((float *)self + 8) = (float)v5[8];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if ( v4 != 0 )
  {
    v6 = *(uint32_t **)(a2 + 28);
    *(uint32_t *)self = *v6;
    if ( v4 > 1 )
    {
      *((uint32_t *)self + 1) = v6[1];
      if ( v4 != 2 )
      {
        *((uint32_t *)self + 2) = v6[2];
        if ( v4 != 3 )
        {
          *((uint32_t *)self + 3) = v6[3];
          if ( v4 != 4 )
          {
            *((uint32_t *)self + 4) = v6[4];
            if ( v4 != 5 )
            {
              *((uint32_t *)self + 5) = v6[5];
              if ( v4 != 6 )
              {
                *((uint32_t *)self + 6) = v6[6];
                if ( v4 != 7 )
                {
                  *((uint32_t *)self + 7) = v6[7];
                  if ( v4 != 8 )
                    *((uint32_t *)self + 8) = v6[8];
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getQuaternion  (binary VA: 0xef92d0)
// Original: glitch::io::CNumbersAttribute::getQuaternion
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getQuaternion(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  glitch::io::CNumbersAttribute::Self *result;
  unsigned int v3;
  uint32_t *v4;
  int v5;
  int *v6;
  float v7; // xmm0_4

  result = self;
  _mm_storel_ps((double *)self, g4_m128_from<__m128>(0LL));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C230));
  v3 = *(uint32_t *)(a2 + 40);
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    if ( v3 == 0
      || (v4 = *(uint32_t **)(a2 + 28), *(uint32_t *)self = *v4, v3 <= 1)
      || (*((uint32_t *)self + 1) = v4[1], v3 == 2) )
    {
      v5 = 0;
      *((uint32_t *)self + 2) = 0;
    }
    else
    {
      *((uint32_t *)self + 2) = v4[2];
      if ( v3 == 3 )
        v5 = 0;
      else
        v5 = v4[3];
    }
    *((uint32_t *)self + 3) = v5;
  }
  else
  {
    if ( v3 == 0
      || (v6 = *(int **)(a2 + 16), *(float *)self = (float)*v6, v3 <= 1)
      || (*((float *)self + 1) = (float)v6[1], v3 == 2) )
    {
      *((uint32_t *)self + 2) = 0;
      v7 = 0.0;
    }
    else
    {
      *((float *)self + 2) = (float)v6[2];
      if ( v3 == 3 )
        v7 = 0.0;
      else
        v7 = (float)v6[3];
    }
    *((float *)self + 3) = v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getTriangle  (binary VA: 0xef93a0)
// Original: glitch::io::CNumbersAttribute::getTriangle
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getTriangle(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  int v2;
  glitch::io::CNumbersAttribute::Self *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4

  v2 = 0;
  result = self;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    v4 = 0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v4 = **(uint32_t **)(a2 + 28);
    *(uint32_t *)self = v4;
    v5 = 0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v5 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 4);
    *((uint32_t *)self + 1) = v5;
    v6 = 0;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v6 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 8);
    *((uint32_t *)self + 2) = v6;
    v7 = 0;
    if ( *(uint32_t *)(a2 + 40) > 3u )
      v7 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 12);
    *((uint32_t *)self + 3) = v7;
    v8 = 0;
    if ( *(uint32_t *)(a2 + 40) > 4u )
      v8 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 16);
    *((uint32_t *)self + 4) = v8;
    v9 = 0;
    if ( *(uint32_t *)(a2 + 40) > 5u )
      v9 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 20);
    *((uint32_t *)self + 5) = v9;
    v10 = 0;
    if ( *(uint32_t *)(a2 + 40) > 6u )
      v10 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 24);
    *((uint32_t *)self + 6) = v10;
    v11 = 0;
    if ( *(uint32_t *)(a2 + 40) > 7u )
      v11 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 28);
    *((uint32_t *)self + 7) = v11;
    if ( *(uint32_t *)(a2 + 40) > 8u )
      v2 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 32);
    *((uint32_t *)self + 8) = v2;
  }
  else
  {
    v12 = 0.0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v12 = (float)**(int **)(a2 + 16);
    *(float *)self = v12;
    v13 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v13 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 4);
    *((float *)self + 1) = v13;
    v14 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v14 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 8);
    *((float *)self + 2) = v14;
    v15 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 3u )
      v15 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 12);
    *((float *)self + 3) = v15;
    v16 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 4u )
      v16 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 16);
    *((float *)self + 4) = v16;
    v17 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 5u )
      v17 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 20);
    *((float *)self + 5) = v17;
    v18 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 6u )
      v18 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 24);
    *((float *)self + 6) = v18;
    v19 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 7u )
      v19 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 28);
    *((float *)self + 7) = v19;
    v20 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 8u )
      v20 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 32);
    *((float *)self + 8) = v20;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getPlane  (binary VA: 0xef9550)
// Original: glitch::io::CNumbersAttribute::getPlane
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getPlane(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  glitch::io::CNumbersAttribute::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4

  result = self;
  _mm_storel_ps((double *)self, G4_BITCAST<__m128>(xmmword_1C7C240));
  _mm_storel_ps((double *)self + 1, g4_m128_from<__m128>(0LL));
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    v3 = 0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v3 = **(uint32_t **)(a2 + 28);
    *(uint32_t *)self = v3;
    v4 = 0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v4 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 4);
    *((uint32_t *)self + 1) = v4;
    v5 = 0;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v5 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 8);
    *((uint32_t *)self + 2) = v5;
    v6 = 0;
    if ( *(uint32_t *)(a2 + 40) > 3u )
      v6 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 12);
    *((uint32_t *)self + 3) = v6;
  }
  else
  {
    v7 = 0.0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v7 = (float)**(int **)(a2 + 16);
    *(float *)self = v7;
    v8 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v8 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 4);
    *((float *)self + 1) = v8;
    v9 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v9 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 8);
    *((float *)self + 2) = v9;
    v10 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 3u )
      v10 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 12);
    *((float *)self + 3) = v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getBBox  (binary VA: 0xef9630)
// Original: glitch::io::CNumbersAttribute::getBBox
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getBBox(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  glitch::io::CNumbersAttribute::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4

  result = self;
  *(uint32_t *)self = 2139095039;
  *((uint32_t *)self + 1) = 2139095039;
  *((uint32_t *)self + 2) = 2139095039;
  *((uint32_t *)self + 3) = -8388609;
  *((uint32_t *)self + 4) = -8388609;
  *((uint32_t *)self + 5) = -8388609;
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    v3 = 0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v3 = **(uint32_t **)(a2 + 28);
    *(uint32_t *)self = v3;
    v4 = 0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v4 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 4);
    *((uint32_t *)self + 1) = v4;
    v5 = 0;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v5 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 8);
    *((uint32_t *)self + 2) = v5;
    v6 = 0;
    if ( *(uint32_t *)(a2 + 40) > 3u )
      v6 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 12);
    *((uint32_t *)self + 3) = v6;
    v7 = 0;
    if ( *(uint32_t *)(a2 + 40) > 4u )
      v7 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 16);
    *((uint32_t *)self + 4) = v7;
    v8 = 0;
    if ( *(uint32_t *)(a2 + 40) > 5u )
      v8 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 20);
    *((uint32_t *)self + 5) = v8;
  }
  else
  {
    v9 = 0.0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v9 = (float)**(int **)(a2 + 16);
    *(float *)self = v9;
    v10 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v10 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 4);
    *((float *)self + 1) = v10;
    v11 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v11 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 8);
    *((float *)self + 2) = v11;
    v12 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 3u )
      v12 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 12);
    *((float *)self + 3) = v12;
    v13 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 4u )
      v13 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 16);
    *((float *)self + 4) = v13;
    v14 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 5u )
      v14 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 20);
    *((float *)self + 5) = v14;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getLine2d  (binary VA: 0xef9760)
// Original: glitch::io::CNumbersAttribute::getLine2d
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getLine2d(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  glitch::io::CNumbersAttribute::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4

  result = self;
  _mm_storel_ps((double *)self, g4_m128_from<__m128>(0LL));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C280));
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    v3 = 0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v3 = **(uint32_t **)(a2 + 28);
    *(uint32_t *)self = v3;
    v4 = 0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v4 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 4);
    *((uint32_t *)self + 1) = v4;
    v5 = 0;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v5 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 8);
    *((uint32_t *)self + 2) = v5;
    v6 = 0;
    if ( *(uint32_t *)(a2 + 40) > 3u )
      v6 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 12);
    *((uint32_t *)self + 3) = v6;
  }
  else
  {
    v7 = 0.0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v7 = (float)**(int **)(a2 + 16);
    *(float *)self = v7;
    v8 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v8 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 4);
    *((float *)self + 1) = v8;
    v9 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v9 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 8);
    *((float *)self + 2) = v9;
    v10 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 3u )
      v10 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 12);
    *((float *)self + 3) = v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getLine3d  (binary VA: 0xef9840)
// Original: glitch::io::CNumbersAttribute::getLine3d
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getLine3d(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  int v2;
  glitch::io::CNumbersAttribute::Self *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4

  v2 = 0;
  result = self;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 1065353216;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 1065353216;
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    v4 = 0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v4 = **(uint32_t **)(a2 + 28);
    *(uint32_t *)self = v4;
    v5 = 0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v5 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 4);
    *((uint32_t *)self + 1) = v5;
    v6 = 0;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v6 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 8);
    *((uint32_t *)self + 2) = v6;
    v7 = 0;
    if ( *(uint32_t *)(a2 + 40) > 3u )
      v7 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 12);
    *((uint32_t *)self + 3) = v7;
    v8 = 0;
    if ( *(uint32_t *)(a2 + 40) > 4u )
      v8 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 16);
    *((uint32_t *)self + 4) = v8;
    if ( *(uint32_t *)(a2 + 40) > 5u )
      v2 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 20);
    *((uint32_t *)self + 5) = v2;
  }
  else
  {
    v9 = 0.0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
      v9 = (float)**(int **)(a2 + 16);
    *(float *)self = v9;
    v10 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 1u )
      v10 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 4);
    *((float *)self + 1) = v10;
    v11 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 2u )
      v11 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 8);
    *((float *)self + 2) = v11;
    v12 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 3u )
      v12 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 12);
    *((float *)self + 3) = v12;
    v13 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 4u )
      v13 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 16);
    *((float *)self + 4) = v13;
    v14 = 0.0;
    if ( *(uint32_t *)(a2 + 40) > 5u )
      v14 = (float)*(int *)(*(uint32_t *)(a2 + 16) + 20);
    *((float *)self + 5) = v14;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setInt  (binary VA: 0xef9970)
// Original: glitch::io::CNumbersAttribute::setInt
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::setInt(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  glitch::io::CNumbersAttribute::Self *result;
  int v3;
  unsigned int v4;

  result = self;
  if ( *((uint32_t *)self + 10) != 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      while ( *((uint8_t *)self + 44) != 0 )
      {
        ++v4;
        *(float *)(*((uint32_t *)self + 7) + v3) = (float)a2;
        v3 += 4;
        if ( *((uint32_t *)self + 10) <= v4 )
          return result;
      }
      ++v4;
      *(uint32_t *)(*((uint32_t *)self + 4) + v3) = a2;
      v3 += 4;
    }
    while ( *((uint32_t *)self + 10) > v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setFloat  (binary VA: 0xef99c0)
// Original: glitch::io::CNumbersAttribute::setFloat
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::setFloat(glitch::io::CNumbersAttribute::Self *self, float a2)
{
  glitch::io::CNumbersAttribute::Self *result;
  int v3;
  unsigned int v4;

  result = self;
  if ( *((uint32_t *)self + 10) != 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      while ( *((uint8_t *)self + 44) != 0 )
      {
        ++v4;
        *(float *)(*((uint32_t *)self + 7) + v3) = a2;
        v3 += 4;
        if ( *((uint32_t *)self + 10) <= v4 )
          return result;
      }
      ++v4;
      *(uint32_t *)(*((uint32_t *)self + 4) + v3) = (int)a2;
      v3 += 4;
    }
    while ( *((uint32_t *)self + 10) > v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setBool  (binary VA: 0xef9a10)
// Original: glitch::io::CNumbersAttribute::setBool
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setBool(glitch::io::CNumbersAttribute::Self *self, bool a2)
{
  return G4_VCALL<int>(self, 140, a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::isNumberList  (binary VA: 0xef9a40)
// Original: glitch::io::CNumbersAttribute::isNumberList
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::isNumberList()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::isFloat  (binary VA: 0xef9a50)
// Original: glitch::io::CNumbersAttribute::isFloat
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::isFloat(glitch::io::CNumbersAttribute::Self *self)
{
  return *((uint8_t *)self + 44);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getType  (binary VA: 0xef9a60)
// Original: glitch::io::CNumbersAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::getType(glitch::io::CNumbersAttribute::Self *self)
{
  return 25 - (*((uint8_t *)self + 44) != 0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getTypeString  (binary VA: 0xef9a70)
// Original: glitch::io::CNumbersAttribute::getTypeString
// ----------------------------------------------------------------------------
void * glitch::io::CNumbersAttribute::getTypeString(glitch::io::CNumbersAttribute::Self *self)
{
  void *result;

  result = &unk_1CB9AAC;
  if ( *((uint8_t *)self + 44) == 0 )
    return &unk_1CB9AD4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorfAttribute::getInt  (binary VA: 0xef9aa0)
// Original: glitch::io::CColorfAttribute::getInt
// ----------------------------------------------------------------------------
int glitch::io::CColorfAttribute::getInt(glitch::io::CColorfAttribute::Self *self)
{
  typedef int16_t _g4_t_v2;
  typedef char _g4_t_v3;
  typedef char _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (14u + sizeof(_g4_t_v3)) > _g4_s1 ? (14u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v4)) > _g4_s2 ? (15u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v5)) > _g4_s3 ? (28u + sizeof(_g4_t_v5)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 14u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 15u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  (*(void (**)(int16_t *))(*(uint32_t *)self + 24))(&v2);
  *(uint16_t *)((char *)&v5 + 1) = v2;
  LOBYTE(v5) = v4;
  HIBYTE(v5) = v3;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorfAttribute::getFloat  (binary VA: 0xef9af0)
// Original: glitch::io::CColorfAttribute::getFloat
// ----------------------------------------------------------------------------
long double glitch::io::CColorfAttribute::getFloat(glitch::io::CColorfAttribute::Self *self)
{
  typedef int16_t _g4_t_v2;
  typedef char _g4_t_v3;
  typedef char _g4_t_v4;
  typedef unsigned int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (14u + sizeof(_g4_t_v3)) > _g4_s1 ? (14u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v4)) > _g4_s2 ? (15u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v5)) > _g4_s3 ? (28u + sizeof(_g4_t_v5)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 14u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 15u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  (*(void (**)(int16_t *))(*(uint32_t *)self + 24))(&v2);
  *(uint16_t *)((char *)&v5 + 1) = v2;
  LOBYTE(v5) = v4;
  HIBYTE(v5) = v3;
  return (float)((float)((float)HIWORD(v5) * 65536.0) + (float)(uint16_t)v5);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorfAttribute::setInt  (binary VA: 0xef9b70)
// Original: glitch::io::CColorfAttribute::setInt
// ----------------------------------------------------------------------------
int glitch::io::CColorfAttribute::setInt(float **self, unsigned int a2)
{
  int result;

  **(self + 7) = (float)BYTE1(a2) * 0.003921569f;
  (*(self + 7))[1] = (float)BYTE2(a2) * 0.003921569f;
  (*(self + 7))[2] = (float)HIBYTE(a2) * 0.003921569f;
  result = (int)(uintptr_t)(*(self + 7));
  *(float *)(result + 12) = (float)(uint8_t)a2 * 0.003921569f;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorfAttribute::setFloat  (binary VA: 0xef9be0)
// Original: glitch::io::CColorfAttribute::setFloat
// ----------------------------------------------------------------------------
int glitch::io::CColorfAttribute::setFloat(glitch::io::CColorfAttribute::Self *self, float a2)
{
  return G4_VCALL<int>(self, 140, (int)a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorfAttribute::getType  (binary VA: 0xef9c10)
// Original: glitch::io::CColorfAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CColorfAttribute::getType()
{
  return 6;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorfAttribute::getTypeString  (binary VA: 0xef9c20)
// Original: glitch::io::CColorfAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CColorfAttribute::getTypeString()
{
  return (const wchar_t *)(U"colorf");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorAttribute::getInt  (binary VA: 0xef9c40)
// Original: glitch::io::CColorAttribute::getInt
// ----------------------------------------------------------------------------
int glitch::io::CColorAttribute::getInt(glitch::io::CColorAttribute::Self *self)
{
  typedef int16_t _g4_t_v2;
  typedef char _g4_t_v3;
  typedef char _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (14u + sizeof(_g4_t_v3)) > _g4_s1 ? (14u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v4)) > _g4_s2 ? (15u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v5)) > _g4_s3 ? (28u + sizeof(_g4_t_v5)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 14u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 15u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  (*(void (**)(int16_t *))(*(uint32_t *)self + 24))(&v2);
  *(uint16_t *)((char *)&v5 + 1) = v2;
  LOBYTE(v5) = v4;
  HIBYTE(v5) = v3;
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorAttribute::getFloat  (binary VA: 0xef9c90)
// Original: glitch::io::CColorAttribute::getFloat
// ----------------------------------------------------------------------------
long double glitch::io::CColorAttribute::getFloat(glitch::io::CColorAttribute::Self *self)
{
  typedef int16_t _g4_t_v2;
  typedef char _g4_t_v3;
  typedef char _g4_t_v4;
  typedef unsigned int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (14u + sizeof(_g4_t_v3)) > _g4_s1 ? (14u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v4)) > _g4_s2 ? (15u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v5)) > _g4_s3 ? (28u + sizeof(_g4_t_v5)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 14u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 15u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  (*(void (**)(int16_t *))(*(uint32_t *)self + 24))(&v2);
  *(uint16_t *)((char *)&v5 + 1) = v2;
  LOBYTE(v5) = v4;
  HIBYTE(v5) = v3;
  return (float)((float)((float)HIWORD(v5) * 65536.0) + (float)(uint16_t)v5);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorAttribute::setInt  (binary VA: 0xef9d10)
// Original: glitch::io::CColorAttribute::setInt
// ----------------------------------------------------------------------------
int glitch::io::CColorAttribute::setInt(float **self, unsigned int a2)
{
  int result;

  **(self + 7) = (float)BYTE1(a2) * 0.003921569f;
  (*(self + 7))[1] = (float)BYTE2(a2) * 0.003921569f;
  (*(self + 7))[2] = (float)HIBYTE(a2) * 0.003921569f;
  result = (int)(uintptr_t)(*(self + 7));
  *(float *)(result + 12) = (float)(uint8_t)a2 * 0.003921569f;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorAttribute::setFloat  (binary VA: 0xef9d80)
// Original: glitch::io::CColorAttribute::setFloat
// ----------------------------------------------------------------------------
int glitch::io::CColorAttribute::setFloat(glitch::io::CColorAttribute::Self *self, float a2)
{
  return G4_VCALL<int>(self, 140, (int)a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorAttribute::getType  (binary VA: 0xef9db0)
// Original: glitch::io::CColorAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CColorAttribute::getType()
{
  return 5;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorAttribute::getTypeString  (binary VA: 0xef9dc0)
// Original: glitch::io::CColorAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CColorAttribute::getTypeString()
{
  return (const wchar_t *)(U"color");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DAttribute::getType  (binary VA: 0xef9de0)
// Original: glitch::io::CVector2DAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CVector2DAttribute::getType()
{
  return 7;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DAttribute::getMatrix2  (binary VA: 0xef9df0)
// Original: glitch::io::CVector2DAttribute::getMatrix2
// ----------------------------------------------------------------------------
glitch::io::CVector2DAttribute::Self * glitch::io::CVector2DAttribute::getMatrix2(glitch::io::CVector2DAttribute::Self *self, int a2)
{
  int *v3;
  int v4;
  int v5;

  v3 = *(int **)(a2 + 28);
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 1) = 0;
  v4 = *v3;
  v5 = v3[1];
  *((uint32_t *)self + 2) = v4;
  *((uint32_t *)self + 3) = v5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DAttribute::getMatrix3  (binary VA: 0xef9e20)
// Original: glitch::io::CVector2DAttribute::getMatrix3
// ----------------------------------------------------------------------------
glitch::io::CVector2DAttribute::Self * glitch::io::CVector2DAttribute::getMatrix3(glitch::io::CVector2DAttribute::Self *self, int a2)
{
  uint32_t *v3;
  int v4;

  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0;
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 8) = 1065353216;
  v3 = *(uint32_t **)(a2 + 28);
  v4 = v3[1];
  *((uint32_t *)self + 6) = *v3;
  *((uint32_t *)self + 7) = v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DAttribute::getTypeString  (binary VA: 0xef9e60)
// Original: glitch::io::CVector2DAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CVector2DAttribute::getTypeString()
{
  return (const wchar_t *)(U"vector2d");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DAttribute::getType  (binary VA: 0xef9e80)
// Original: glitch::io::CVector3DAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CVector3DAttribute::getType()
{
  return 8;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DAttribute::getMatrix2  (binary VA: 0xef9e90)
// Original: glitch::io::CVector3DAttribute::getMatrix2
// ----------------------------------------------------------------------------
glitch::io::CVector3DAttribute::Self * glitch::io::CVector3DAttribute::getMatrix2(glitch::io::CVector3DAttribute::Self *self)
{
  _mm_storel_ps((double *)self, G4_BITCAST<__m128>(xmmword_1C7C320));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C320));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DAttribute::getMatrix3  (binary VA: 0xef9ec0)
// Original: glitch::io::CVector3DAttribute::getMatrix3
// ----------------------------------------------------------------------------
glitch::io::CVector3DAttribute::Self * glitch::io::CVector3DAttribute::getMatrix3(glitch::io::CVector3DAttribute::Self *self, int a2)
{
  uint32_t *v3;
  int v4;
  int v5;

  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0;
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 4) = 1065353216;
  v3 = *(uint32_t **)(a2 + 28);
  *((uint32_t *)self + 6) = *v3;
  v4 = v3[1];
  v5 = v3[2];
  *((uint32_t *)self + 7) = v4;
  *((uint32_t *)self + 8) = v5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DAttribute::getTypeString  (binary VA: 0xef9f00)
// Original: glitch::io::CVector3DAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CVector3DAttribute::getTypeString()
{
  return (const wchar_t *)(U"vector3d");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DAttribute::getType  (binary VA: 0xef9f20)
// Original: glitch::io::CVector4DAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CVector4DAttribute::getType()
{
  return 9;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DAttribute::getMatrix2  (binary VA: 0xef9f30)
// Original: glitch::io::CVector4DAttribute::getMatrix2
// ----------------------------------------------------------------------------
glitch::io::CVector4DAttribute::Self * glitch::io::CVector4DAttribute::getMatrix2(glitch::io::CVector4DAttribute::Self *self)
{
  _mm_storel_ps((double *)self, G4_BITCAST<__m128>(xmmword_1C7C320));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C320));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DAttribute::getMatrix3  (binary VA: 0xef9f60)
// Original: glitch::io::CVector4DAttribute::getMatrix3
// ----------------------------------------------------------------------------
glitch::io::CVector4DAttribute::Self * glitch::io::CVector4DAttribute::getMatrix3(glitch::io::CVector4DAttribute::Self *self)
{
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DAttribute::getTypeString  (binary VA: 0xef9f90)
// Original: glitch::io::CVector4DAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CVector4DAttribute::getTypeString()
{
  return (const wchar_t *)(U"vector4d");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DIAttribute::getType  (binary VA: 0xef9fb0)
// Original: glitch::io::CVector2DIAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CVector2DIAttribute::getType()
{
  return 10;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DIAttribute::getMatrix2  (binary VA: 0xef9fc0)
// Original: glitch::io::CVector2DIAttribute::getMatrix2
// ----------------------------------------------------------------------------
glitch::io::CVector2DIAttribute::Self * glitch::io::CVector2DIAttribute::getMatrix2(glitch::io::CVector2DIAttribute::Self *self, int a2)
{
  int *v3;

  v3 = *(int **)(a2 + 16);
  *(uint32_t *)self = 1065353216;
  *((float *)self + 2) = (float)*v3;
  *((uint32_t *)self + 1) = 0;
  *((float *)self + 3) = (float)v3[1];
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DIAttribute::getMatrix3  (binary VA: 0xef9ff0)
// Original: glitch::io::CVector2DIAttribute::getMatrix3
// ----------------------------------------------------------------------------
glitch::io::CVector2DIAttribute::Self * glitch::io::CVector2DIAttribute::getMatrix3(glitch::io::CVector2DIAttribute::Self *self, int a2)
{
  int *v3;
  float v4; // xmm1_4

  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0;
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 8) = 1065353216;
  v3 = *(int **)(a2 + 16);
  v4 = (float)*v3;
  *((float *)self + 7) = (float)v3[1];
  *((float *)self + 6) = v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DIAttribute::getTypeString  (binary VA: 0xefa030)
// Original: glitch::io::CVector2DIAttribute::getTypeString
// ----------------------------------------------------------------------------
void * glitch::io::CVector2DIAttribute::getTypeString()
{
  return &unk_1CB9B94;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DIAttribute::getType  (binary VA: 0xefa050)
// Original: glitch::io::CVector3DIAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CVector3DIAttribute::getType()
{
  return 11;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DIAttribute::getMatrix2  (binary VA: 0xefa060)
// Original: glitch::io::CVector3DIAttribute::getMatrix2
// ----------------------------------------------------------------------------
glitch::io::CVector3DIAttribute::Self * glitch::io::CVector3DIAttribute::getMatrix2(glitch::io::CVector3DIAttribute::Self *self)
{
  _mm_storel_ps((double *)self, G4_BITCAST<__m128>(xmmword_1C7C320));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C320));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DIAttribute::getMatrix3  (binary VA: 0xefa090)
// Original: glitch::io::CVector3DIAttribute::getMatrix3
// ----------------------------------------------------------------------------
glitch::io::CVector3DIAttribute::Self * glitch::io::CVector3DIAttribute::getMatrix3(glitch::io::CVector3DIAttribute::Self *self, int a2)
{
  int *v3;

  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0;
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 4) = 1065353216;
  v3 = *(int **)(a2 + 16);
  *((float *)self + 6) = (float)*v3;
  *((float *)self + 7) = (float)v3[1];
  *((float *)self + 8) = (float)v3[2];
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DIAttribute::getTypeString  (binary VA: 0xefa0e0)
// Original: glitch::io::CVector3DIAttribute::getTypeString
// ----------------------------------------------------------------------------
void * glitch::io::CVector3DIAttribute::getTypeString()
{
  return &unk_1CB9BBC;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DIAttribute::getType  (binary VA: 0xefa100)
// Original: glitch::io::CVector4DIAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CVector4DIAttribute::getType()
{
  return 12;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DIAttribute::getMatrix2  (binary VA: 0xefa110)
// Original: glitch::io::CVector4DIAttribute::getMatrix2
// ----------------------------------------------------------------------------
glitch::io::CVector4DIAttribute::Self * glitch::io::CVector4DIAttribute::getMatrix2(glitch::io::CVector4DIAttribute::Self *self)
{
  _mm_storel_ps((double *)self, G4_BITCAST<__m128>(xmmword_1C7C320));
  _mm_storeh_ps((double *)self + 1, G4_BITCAST<__m128>(xmmword_1C7C320));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DIAttribute::getMatrix3  (binary VA: 0xefa140)
// Original: glitch::io::CVector4DIAttribute::getMatrix3
// ----------------------------------------------------------------------------
glitch::io::CVector4DIAttribute::Self * glitch::io::CVector4DIAttribute::getMatrix3(glitch::io::CVector4DIAttribute::Self *self)
{
  *(uint32_t *)self = 1065353216;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 1065353216;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DIAttribute::getTypeString  (binary VA: 0xefa170)
// Original: glitch::io::CVector4DIAttribute::getTypeString
// ----------------------------------------------------------------------------
void * glitch::io::CVector4DIAttribute::getTypeString()
{
  return &unk_1CB9BE4;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CRectAttribute::getType  (binary VA: 0xefa190)
// Original: glitch::io::CRectAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CRectAttribute::getType()
{
  return 13;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CRectAttribute::getTypeString  (binary VA: 0xefa1a0)
// Original: glitch::io::CRectAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CRectAttribute::getTypeString()
{
  return (const wchar_t *)(U"rect");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrix2Attribute::getType  (binary VA: 0xefa1c0)
// Original: glitch::io::CMatrix2Attribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CMatrix2Attribute::getType()
{
  return 14;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrix2Attribute::getTypeString  (binary VA: 0xefa1d0)
// Original: glitch::io::CMatrix2Attribute::getTypeString
// ----------------------------------------------------------------------------
void * glitch::io::CMatrix2Attribute::getTypeString()
{
  return &unk_1CB9C20;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrix3Attribute::getType  (binary VA: 0xefa1f0)
// Original: glitch::io::CMatrix3Attribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CMatrix3Attribute::getType()
{
  return 15;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrix3Attribute::getTypeString  (binary VA: 0xefa200)
// Original: glitch::io::CMatrix3Attribute::getTypeString
// ----------------------------------------------------------------------------
void * glitch::io::CMatrix3Attribute::getTypeString()
{
  return &unk_1CB9C40;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrixAttribute::getType  (binary VA: 0xefa220)
// Original: glitch::io::CMatrixAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CMatrixAttribute::getType()
{
  return 16;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrixAttribute::getTypeString  (binary VA: 0xefa230)
// Original: glitch::io::CMatrixAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CMatrixAttribute::getTypeString()
{
  return (const wchar_t *)(U"matrix");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CQuaternionAttribute::getType  (binary VA: 0xefa250)
// Original: glitch::io::CQuaternionAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CQuaternionAttribute::getType()
{
  return 17;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CQuaternionAttribute::getTypeString  (binary VA: 0xefa260)
// Original: glitch::io::CQuaternionAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CQuaternionAttribute::getTypeString()
{
  return (const wchar_t *)(U"quaternion");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBBoxAttribute::getType  (binary VA: 0xefa280)
// Original: glitch::io::CBBoxAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CBBoxAttribute::getType()
{
  return 18;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBBoxAttribute::getTypeString  (binary VA: 0xefa290)
// Original: glitch::io::CBBoxAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CBBoxAttribute::getTypeString()
{
  return (const wchar_t *)(U"box3d");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CPlaneAttribute::getType  (binary VA: 0xefa2b0)
// Original: glitch::io::CPlaneAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CPlaneAttribute::getType()
{
  return 19;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CPlaneAttribute::getTypeString  (binary VA: 0xefa2c0)
// Original: glitch::io::CPlaneAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CPlaneAttribute::getTypeString()
{
  return (const wchar_t *)(U"plane");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTriangleAttribute::getType  (binary VA: 0xefa2e0)
// Original: glitch::io::CTriangleAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CTriangleAttribute::getType()
{
  return 20;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTriangleAttribute::getTypeString  (binary VA: 0xefa2f0)
// Original: glitch::io::CTriangleAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CTriangleAttribute::getTypeString()
{
  return (const wchar_t *)(U"triangle");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLine2dAttribute::getType  (binary VA: 0xefa310)
// Original: glitch::io::CLine2dAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CLine2dAttribute::getType()
{
  return 21;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLine2dAttribute::getTypeString  (binary VA: 0xefa320)
// Original: glitch::io::CLine2dAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CLine2dAttribute::getTypeString()
{
  return (const wchar_t *)(U"line2d");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLine3dAttribute::getType  (binary VA: 0xefa340)
// Original: glitch::io::CLine3dAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CLine3dAttribute::getType()
{
  return 22;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLine3dAttribute::getTypeString  (binary VA: 0xefa350)
// Original: glitch::io::CLine3dAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CLine3dAttribute::getTypeString()
{
  return (const wchar_t *)(U"line3d");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::getFloat  (binary VA: 0xefa370)
// Original: glitch::io::CEnumAttribute::getFloat
// ----------------------------------------------------------------------------
long double glitch::io::CEnumAttribute::getFloat(glitch::io::CEnumAttribute::Self *self)
{
  return (float)G4_VCALL<int>(self, 12);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::getBool  (binary VA: 0xefa3a0)
// Original: glitch::io::CEnumAttribute::getBool
// ----------------------------------------------------------------------------
bool glitch::io::CEnumAttribute::getBool(glitch::io::CEnumAttribute::Self *self)
{
  return G4_VCALL<int>(self, 12) != 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::setFloat  (binary VA: 0xefa3c0)
// Original: glitch::io::CEnumAttribute::setFloat
// ----------------------------------------------------------------------------
int glitch::io::CEnumAttribute::setFloat(glitch::io::CEnumAttribute::Self *self, float a2)
{
  return G4_VCALL<int>(self, 140, (int)a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::getEnum  (binary VA: 0xefa3f0)
// Original: glitch::io::CEnumAttribute::getEnum
// ----------------------------------------------------------------------------
int glitch::io::CEnumAttribute::getEnum(glitch::io::CEnumAttribute::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::getType  (binary VA: 0xefa400)
// Original: glitch::io::CEnumAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CEnumAttribute::getType()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::getTypeString  (binary VA: 0xefa410)
// Original: glitch::io::CEnumAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CEnumAttribute::getTypeString()
{
  return (const wchar_t *)(U"enum");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::getType  (binary VA: 0xefa430)
// Original: glitch::io::CStringAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CStringAttribute::getType()
{
  return 2;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::getTypeString  (binary VA: 0xefa440)
// Original: glitch::io::CStringAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CStringAttribute::getTypeString()
{
  return (const wchar_t *)(U"string");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::getBinary  (binary VA: 0xefa460)
// Original: glitch::io::CStringAttribute::getBinary
// ----------------------------------------------------------------------------
int glitch::io::CStringAttribute::getBinary(glitch::io::CStringAttribute::Self *self, int a2, int a3)
{
  int result;
  uint8_t *v4;
  unsigned int v5;
  __m128i *v6;
  unsigned int v7;
  char v8;
  char v9;
  char v10; // di
  char v11; // di
  int v12;
  uint8_t v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;

  result = (int)(uintptr_t)(self);
  v4 = *((uint8_t **)self + 4);
  if ( a3 > 0 )
  {
    v5 = -a2 & 0xF;
    if ( v5 > a3 )
      v5 = a3;
    result = 0;
    if ( v5 == 0 )
      goto LABEL_30;
    do
      *(uint8_t *)(a2 + result++) = 0;
    while ( v5 > result );
    if ( a3 != v5 )
    {
LABEL_30:
      v15 = a3 - v5;
      v17 = (a3 - v5) >> 4;
      v16 = 16 * v17;
      if ( 16 * v17 == 0 )
        goto LABEL_31;
      v6 = (__m128i *)(a2 + v5);
      v7 = 0;
      do
      {
        ++v7;
        *v6++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v7 < v17 );
      result += v16;
      if ( v15 != v16 )
      {
LABEL_31:
        do
          *(uint8_t *)(a2 + result++) = 0;
        while ( a3 > result );
      }
    }
    if ( *v4 != 0 )
    {
      result = 0;
      v14 = 0;
      do
      {
        v8 = v4[2 * result];
        if ( (uint8_t)(v8 - 48) > 9u )
        {
          v9 = 0;
          if ( (uint8_t)(v8 - 97) <= 5u )
            v9 = 16 * (v8 - 87);
        }
        else
        {
          v9 = 16 * (v8 - 48);
        }
        v10 = v4[2 * result + 1];
        if ( v10 != 0 )
        {
          if ( (uint8_t)(v10 - 48) > 9u )
          {
            v13 = v10 - 97;
            v11 = 0;
            if ( v13 <= 5u )
              v11 = v4[2 * result + 1] - 87;
          }
          else
          {
            v11 = v10 - 48;
          }
          v9 += v11;
        }
        v12 = v14;
        v14 = ++result;
        *(uint8_t *)(a2 + v12) = v9;
      }
      while ( v4[result] != 0 && a3 > result );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBinaryAttribute::getType  (binary VA: 0xefa5b0)
// Original: glitch::io::CBinaryAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CBinaryAttribute::getType()
{
  return 26;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBinaryAttribute::getTypeString  (binary VA: 0xefa5c0)
// Original: glitch::io::CBinaryAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CBinaryAttribute::getTypeString()
{
  return (const wchar_t *)(U"binary");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTextureAttribute::getBool  (binary VA: 0xefa5e0)
// Original: glitch::io::CTextureAttribute::getBool
// ----------------------------------------------------------------------------
bool glitch::io::CTextureAttribute::getBool(glitch::io::CTextureAttribute::Self *self)
{
  return *((uint32_t *)self + 4) != 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTextureAttribute::getType  (binary VA: 0xefa5f0)
// Original: glitch::io::CTextureAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CTextureAttribute::getType()
{
  return 27;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTextureAttribute::getTypeString  (binary VA: 0xefa600)
// Original: glitch::io::CTextureAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CTextureAttribute::getTypeString()
{
  return (const wchar_t *)(U"texture");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLightAttribute::getBool  (binary VA: 0xefa620)
// Original: glitch::io::CLightAttribute::getBool
// ----------------------------------------------------------------------------
bool glitch::io::CLightAttribute::getBool(glitch::io::CLightAttribute::Self *self)
{
  return *((uint32_t *)self + 4) != 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLightAttribute::setString  (binary VA: 0xefa630)
// Original: glitch::io::CLightAttribute::setString
// ----------------------------------------------------------------------------
void glitch::io::CLightAttribute::setString()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLightAttribute::getType  (binary VA: 0xefa640)
// Original: glitch::io::CLightAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CLightAttribute::getType()
{
  return 28;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLightAttribute::getTypeString  (binary VA: 0xefa650)
// Original: glitch::io::CLightAttribute::getTypeString
// ----------------------------------------------------------------------------
void * glitch::io::CLightAttribute::getTypeString()
{
  return &unk_1CB9DA0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringWArrayAttribute::getType  (binary VA: 0xefa670)
// Original: glitch::io::CStringWArrayAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CStringWArrayAttribute::getType()
{
  return 23;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringWArrayAttribute::getTypeString  (binary VA: 0xefa680)
// Original: glitch::io::CStringWArrayAttribute::getTypeString
// ----------------------------------------------------------------------------
const wchar_t * glitch::io::CStringWArrayAttribute::getTypeString()
{
  return (const wchar_t *)(U"stringwarray");
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CUserPointerAttribute::getInt  (binary VA: 0xefa6a0)
// Original: glitch::io::CUserPointerAttribute::getInt
// ----------------------------------------------------------------------------
int glitch::io::CUserPointerAttribute::getInt(glitch::io::CUserPointerAttribute::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CUserPointerAttribute::getBool  (binary VA: 0xefa6b0)
// Original: glitch::io::CUserPointerAttribute::getBool
// ----------------------------------------------------------------------------
bool glitch::io::CUserPointerAttribute::getBool(glitch::io::CUserPointerAttribute::Self *self)
{
  return *((uint32_t *)self + 4) != 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CUserPointerAttribute::getType  (binary VA: 0xefa6c0)
// Original: glitch::io::CUserPointerAttribute::getType
// ----------------------------------------------------------------------------
int glitch::io::CUserPointerAttribute::getType()
{
  return 29;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CUserPointerAttribute::setUserPointer  (binary VA: 0xefa6d0)
// Original: glitch::io::CUserPointerAttribute::setUserPointer
// ----------------------------------------------------------------------------
glitch::io::CUserPointerAttribute::Self * glitch::io::CUserPointerAttribute::setUserPointer(glitch::io::CUserPointerAttribute::Self *self, void *a2)
{
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CUserPointerAttribute::getUserPointer  (binary VA: 0xefa6e0)
// Original: glitch::io::CUserPointerAttribute::getUserPointer
// ----------------------------------------------------------------------------
int glitch::io::CUserPointerAttribute::getUserPointer(glitch::io::CUserPointerAttribute::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CUserPointerAttribute::getTypeString  (binary VA: 0xefa6f0)
// Original: glitch::io::CUserPointerAttribute::getTypeString
// ----------------------------------------------------------------------------
void * glitch::io::CUserPointerAttribute::getTypeString()
{
  return &unk_1CB9DEC;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttributes::Destroy  (binary VA: 0xefa710)
// Original: glitch::io::IAttributes::~IAttributes
// ----------------------------------------------------------------------------
void glitch::io::IAttributes::Destroy(glitch::io::IAttributes::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IFileList::Destroy  (binary VA: 0xefa730)
// Original: glitch::io::IFileList::~IFileList
// ----------------------------------------------------------------------------
void glitch::io::IFileList::Destroy(glitch::io::IFileList::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IFileSystem::Destroy  (binary VA: 0xefa750)
// Original: glitch::io::IFileSystem::~IFileSystem
// ----------------------------------------------------------------------------
void glitch::io::IFileSystem::Destroy(glitch::io::IFileSystem::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IWriteFile::Destroy  (binary VA: 0xefa770)
// Original: glitch::io::IWriteFile::~IWriteFile
// ----------------------------------------------------------------------------
void glitch::io::IWriteFile::Destroy(glitch::io::IWriteFile::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIrrXMLFileReadCallBack::read  (binary VA: 0xefa790)
// Original: glitch::io::CIrrXMLFileReadCallBack::read
// ----------------------------------------------------------------------------
int glitch::io::CIrrXMLFileReadCallBack::read(glitch::io::CIrrXMLFileReadCallBack::Self *self, void *a2, int a3)
{
  return (*(int (**)(uint32_t, void *, int))(**((uint32_t **)self + 1) + 12))(*((uint32_t *)self + 1), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIrrXMLFileReadCallBack::getSize  (binary VA: 0xefa7c0)
// Original: glitch::io::CIrrXMLFileReadCallBack::getSize
// ----------------------------------------------------------------------------
int glitch::io::CIrrXMLFileReadCallBack::getSize(glitch::io::CIrrXMLFileReadCallBack::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 1) + 32))(*((uint32_t *)self + 1));
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IIrrXMLReader_wchar_t_IReferenceCounte_4e5989::Destroy  (binary VA: 0xefa920)
// Original: glitch::io::IIrrXMLReader<wchar_t,glitch::IReferenceCounted>::~IIrrXMLReader
// ----------------------------------------------------------------------------
void glitch::io::IIrrXMLReader_wchar_t_IReferenceCounte_4e5989::Destroy(glitch::io::IIrrXMLReader<wchar_t, glitch::IReferenceCounted> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IIrrXMLReader_char_IReferenceCounted_a11303::Destroy  (binary VA: 0xefa940)
// Original: glitch::io::IIrrXMLReader<char,glitch::IReferenceCounted>::~IIrrXMLReader
// ----------------------------------------------------------------------------
void glitch::io::IIrrXMLReader_char_IReferenceCounted_a11303::Destroy(glitch::io::IIrrXMLReader<char, glitch::IReferenceCounted> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBinaryAttributesWriter::Destroy  (binary VA: 0xefa9e0)
// Original: glitch::io::CBinaryAttributesWriter::~CBinaryAttributesWriter
// ----------------------------------------------------------------------------
void glitch::io::CBinaryAttributesWriter::Destroy(glitch::io::CBinaryAttributesWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082720);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::readToNextElement  (binary VA: 0xefaad0)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::readToNextElement
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::readToNextElement(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self)
{
  int result;

  while ( 1 )
  {
    result = G4_VCALL<int>(self, 12);
    if ( (uint8_t)result == 0 )
      break;
    if ( G4_VCALL<int>(self, 20) == 1 )
      return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getNodeType  (binary VA: 0xefab10)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getNodeType
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getNodeType(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeCount  (binary VA: 0xefab20)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeCount
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeCount(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self)
{
  return (*((uint32_t *)self + 16) - *((uint32_t *)self + 15)) >> 3;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeName  (binary VA: 0xefab30)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeName
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeName(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self, unsigned int a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 15);
  result = 0;
  if ( a2 < (*((uint32_t *)self + 16) - v2) >> 3 )
    return *(uint32_t *)(v2 + 8 * a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValue  (binary VA: 0xefab50)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValue
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValue(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self, unsigned int a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 15);
  result = 0;
  if ( a2 < (*((uint32_t *)self + 16) - v2) >> 3 )
    return *(uint32_t *)(v2 + 8 * a2 + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValueAsInt  (binary VA: 0xefab70)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueAsInt
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValueAsInt(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self, const char *a2)
{
  return (int)(float)((long double (*)(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *, const char *))*(uint32_t *)(*(uint32_t *)self + 52))(
                       self,
                       a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValueAsInt  (binary VA: 0xefaba0)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueAsInt
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValueAsInt(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self, int a2)
{
  return (int)(float)((long double (*)(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *, int))*(uint32_t *)(*(uint32_t *)self + 56))(
                       self,
                       a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getNodeName  (binary VA: 0xefabd0)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getNodeName
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getNodeName(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self)
{
  return *((uint32_t *)self + 9);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getNodeData  (binary VA: 0xefabe0)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getNodeData
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getNodeData(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self)
{
  return *((uint32_t *)self + 9);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::isEmptyElement  (binary VA: 0xefabf0)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::isEmptyElement
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::isEmptyElement(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self)
{
  return *((uint8_t *)self + 44);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getSourceFormat  (binary VA: 0xefac00)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getSourceFormat
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getSourceFormat(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getParserFormat  (binary VA: 0xefac10)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getParserFormat
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getParserFormat(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self)
{
  return *((uint32_t *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::readToNextElement  (binary VA: 0xefac20)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::readToNextElement
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::readToNextElement(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self)
{
  int result;

  while ( 1 )
  {
    result = G4_VCALL<int>(self, 12);
    if ( (uint8_t)result == 0 )
      break;
    if ( G4_VCALL<int>(self, 20) == 1 )
      return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getNodeType  (binary VA: 0xefac60)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getNodeType
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getNodeType(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeCount  (binary VA: 0xefac70)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeCount
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeCount(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self)
{
  return (*((uint32_t *)self + 16) - *((uint32_t *)self + 15)) >> 3;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeName  (binary VA: 0xefac80)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeName
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeName(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self, unsigned int a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 15);
  result = 0;
  if ( a2 < (*((uint32_t *)self + 16) - v2) >> 3 )
    return *(uint32_t *)(v2 + 8 * a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValue  (binary VA: 0xefaca0)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValue
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValue(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self, unsigned int a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 15);
  result = 0;
  if ( a2 < (*((uint32_t *)self + 16) - v2) >> 3 )
    return *(uint32_t *)(v2 + 8 * a2 + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValueAsInt  (binary VA: 0xefacc0)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueAsInt
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValueAsInt(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self, const wchar_t *a2)
{
  return (int)(float)((long double (*)(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *, const wchar_t *))*(uint32_t *)(*(uint32_t *)self + 52))(
                       self,
                       a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValueAsInt  (binary VA: 0xefacf0)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueAsInt
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValueAsInt(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self, int a2)
{
  return (int)(float)((long double (*)(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *, int))*(uint32_t *)(*(uint32_t *)self + 56))(
                       self,
                       a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getNodeName  (binary VA: 0xefad20)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getNodeName
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getNodeName(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self)
{
  return *((uint32_t *)self + 9);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getNodeData  (binary VA: 0xefad30)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getNodeData
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getNodeData(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self)
{
  return *((uint32_t *)self + 9);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::isEmptyElement  (binary VA: 0xefad40)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::isEmptyElement
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::isEmptyElement(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self)
{
  return *((uint8_t *)self + 44);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getSourceFormat  (binary VA: 0xefad50)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getSourceFormat
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getSourceFormat(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getParserFormat  (binary VA: 0xefad60)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getParserFormat
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getParserFormat(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self)
{
  return *((uint32_t *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBinaryAttributesWriter::Destroy_eaefadd0  (binary VA: 0xefadd0)
// Original: glitch::io::CBinaryAttributesWriter::~CBinaryAttributesWriter
// ----------------------------------------------------------------------------
void glitch::io::CBinaryAttributesWriter::Destroy_eaefadd0(glitch::io::CBinaryAttributesWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082720);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IIrrXMLReader_char_IReferenceCounted_a11303::Destroy_eaefaec0  (binary VA: 0xefaec0)
// Original: glitch::io::IIrrXMLReader<char,glitch::IReferenceCounted>::~IIrrXMLReader
// ----------------------------------------------------------------------------
void glitch::io::IIrrXMLReader_char_IReferenceCounted_a11303::Destroy_eaefaec0(glitch::io::IIrrXMLReader<char, glitch::IReferenceCounted> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IIrrXMLReader_wchar_t_IReferenceCounte_4e5989::Destroy_eaefaef0  (binary VA: 0xefaef0)
// Original: glitch::io::IIrrXMLReader<wchar_t,glitch::IReferenceCounted>::~IIrrXMLReader
// ----------------------------------------------------------------------------
void glitch::io::IIrrXMLReader_wchar_t_IReferenceCounte_4e5989::Destroy_eaefaef0(glitch::io::IIrrXMLReader<wchar_t, glitch::IReferenceCounted> *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IWriteFile::Destroy_eaefaf50  (binary VA: 0xefaf50)
// Original: glitch::io::IWriteFile::~IWriteFile
// ----------------------------------------------------------------------------
void glitch::io::IWriteFile::Destroy_eaefaf50(glitch::io::IWriteFile::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IFileSystem::Destroy_eaefaf80  (binary VA: 0xefaf80)
// Original: glitch::io::IFileSystem::~IFileSystem
// ----------------------------------------------------------------------------
void glitch::io::IFileSystem::Destroy_eaefaf80(glitch::io::IFileSystem::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IFileList::Destroy_eaefafb0  (binary VA: 0xefafb0)
// Original: glitch::io::IFileList::~IFileList
// ----------------------------------------------------------------------------
void glitch::io::IFileList::Destroy_eaefafb0(glitch::io::IFileList::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttributes::Destroy_eaefafe0  (binary VA: 0xefafe0)
// Original: glitch::io::IAttributes::~IAttributes
// ----------------------------------------------------------------------------
void glitch::io::IAttributes::Destroy_eaefafe0(glitch::io::IAttributes::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttributesReader::Destroy_eaefb230  (binary VA: 0xefb230)
// Original: glitch::io::IAttributesReader::~IAttributesReader
// ----------------------------------------------------------------------------
void glitch::io::IAttributesReader::Destroy_eaefb230(glitch::io::IAttributesReader::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082740);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttributesWriter::Destroy_eaefb260  (binary VA: 0xefb260)
// Original: glitch::io::IAttributesWriter::~IAttributesWriter
// ----------------------------------------------------------------------------
void glitch::io::IAttributesWriter::Destroy_eaefb260(glitch::io::IAttributesWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082720);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMemoryWriteFile::Destroy  (binary VA: 0xefb290)
// Original: glitch::io::CMemoryWriteFile::~CMemoryWriteFile
// ----------------------------------------------------------------------------
void glitch::io::CMemoryWriteFile::Destroy(glitch::io::CMemoryWriteFile::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082668);
  if ( *((uint32_t *)self + 3) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 3));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBoolAttribute::setString  (binary VA: 0xefb310)
// Original: glitch::io::CBoolAttribute::setString
// ----------------------------------------------------------------------------
glitch::io::CBoolAttribute::Self * glitch::io::CBoolAttribute::setString(glitch::io::CBoolAttribute::Self *self, const char *a2)
{
  *((uint8_t *)self + 13) = strcmp(a2, "true") == 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIntAttribute::getStringW  (binary VA: 0xefb360)
// Original: glitch::io::CIntAttribute::getStringW
// ----------------------------------------------------------------------------
glitch::io::CIntAttribute::Self * glitch::io::CIntAttribute::getStringW(glitch::io::CIntAttribute::Self *self, int a2)
{
  glitch::core::int2stringw(self, *(uint32_t *)(a2 + 16));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::getInt  (binary VA: 0xefb3b0)
// Original: glitch::io::CEnumAttribute::getInt
// ----------------------------------------------------------------------------
int glitch::io::CEnumAttribute::getInt(glitch::io::CEnumAttribute::Self *self)
{
  int i;
  int v2;
  const char *s1;

  i = -1;
  v2 = *((uint32_t *)self + 5);
  if ( (unsigned int)(*((uint32_t *)self + 6) - v2) >> 2 != 0 )
  {
    s1 = *((const char **)self + 4);
    for ( i = 0; strcasecmp(s1, *(const char **)(v2 + 4 * i)) != 0; ++i )
      ;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTextureAttribute::getString  (binary VA: 0xefb410)
// Original: glitch::io::CTextureAttribute::getString
// ----------------------------------------------------------------------------
glitch::io::CTextureAttribute::Self * glitch::io::CTextureAttribute::getString(glitch::io::CTextureAttribute::Self *self, int a2)
{
  glitch::io::toString(
    self,
    (const boost::intrusive_ptr<glitch::video::ITexture::Self> *)(a2 + 16),
    *(glitch::video::CTextureManager::Self ***)(a2 + 20));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CUserPointerAttribute::setString  (binary VA: 0xefb460)
// Original: glitch::io::CUserPointerAttribute::setString
// ----------------------------------------------------------------------------
int glitch::io::CUserPointerAttribute::setString(glitch::io::CUserPointerAttribute::Self *self, char *s)
{
  return sscanf(s, "0x%x", (char *)self + 16);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorAttribute::setString  (binary VA: 0xefb4a0)
// Original: glitch::io::CColorAttribute::setString
// ----------------------------------------------------------------------------
int glitch::io::CColorAttribute::setString(glitch::io::CColorAttribute::Self *self, char *s)
{
  uint16_t v2;
  typedef uint8_t _g4_t_v4;
  typedef char _g4_t_v5;
  typedef char _g4_t_v6;
  typedef uint8_t _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  sscanf(s, "%02x%02x%02x%02x", &v4, &v5, &v6, &v7);
  LOBYTE(v2) = v5;
  HIBYTE(v2) = v6;
  return G4_VCALL<int>(self, 164, (v4 << 24) | (v7 << 16) | v2);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CUserPointerAttribute::getString  (binary VA: 0xefb540)
// Original: glitch::io::CUserPointerAttribute::getString
// ----------------------------------------------------------------------------
int glitch::io::CUserPointerAttribute::getString(glitch::io::CUserPointerAttribute::Self *self, char *s)
{
  return sprintf(s, "0x%x", *((uint32_t *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIntAttribute::setString  (binary VA: 0xefb580)
// Original: glitch::io::CIntAttribute::setString
// ----------------------------------------------------------------------------
int glitch::io::CIntAttribute::setString(glitch::io::CIntAttribute::Self *self, char *nptr)
{
  int result;

  result = atoi(nptr);
  *((uint32_t *)self + 4) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getFloat  (binary VA: 0xefb5b0)
// Original: glitch::io::CNumbersAttribute::getFloat
// ----------------------------------------------------------------------------
long double glitch::io::CNumbersAttribute::getFloat(glitch::io::CNumbersAttribute::Self *self)
{
  float v1; // xmm0_4

  v1 = 0.0;
  if ( *((uint32_t *)self + 10) == 0 )
    return v1;
  if ( *((uint8_t *)self + 44) == 0 )
    return (float)**((int **)self + 4);
  return **((float **)self + 7);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getInt  (binary VA: 0xefb600)
// Original: glitch::io::CNumbersAttribute::getInt
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::getInt(float **self)
{
  int result;

  result = 0;
  if ( *(self + 10) != nullptr )
  {
    if ( *((uint8_t *)self + 44) != 0 )
      return (int)**(self + 7);
    else
      return *(uint32_t *)*(self + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLightAttribute::getString  (binary VA: 0xefb630)
// Original: glitch::io::CLightAttribute::getString
// ----------------------------------------------------------------------------
char * glitch::io::CLightAttribute::getString(glitch::io::CLightAttribute::Self *self, char *a2)
{
  char *result;

  result = a2;
  if ( *((uint32_t *)self + 4) != 0 )
    strcpy(a2, "light");
  else
    *a2 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setMatrix3  (binary VA: 0xefb660)
// Original: glitch::io::CNumbersAttribute::setMatrix3
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setMatrix3(int a1, float *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) != 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) != 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(float **)(a1 + 28) = *a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(float *)(*(uint32_t *)(a1 + 28) + 4) = a2[1];
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            *(float *)(*(uint32_t *)(a1 + 28) + 8) = a2[2];
            if ( *(uint32_t *)(a1 + 40) > 3u )
            {
              *(float *)(*(uint32_t *)(a1 + 28) + 12) = a2[3];
              if ( *(uint32_t *)(a1 + 40) > 4u )
              {
                *(float *)(*(uint32_t *)(a1 + 28) + 16) = a2[4];
                if ( *(uint32_t *)(a1 + 40) > 5u )
                {
                  *(float *)(*(uint32_t *)(a1 + 28) + 20) = a2[5];
                  if ( *(uint32_t *)(a1 + 40) > 6u )
                  {
                    *(float *)(*(uint32_t *)(a1 + 28) + 24) = a2[6];
                    if ( *(uint32_t *)(a1 + 40) > 7u )
                    {
                      *(float *)(*(uint32_t *)(a1 + 28) + 28) = a2[7];
                      if ( *(uint32_t *)(a1 + 40) > 8u )
                      {
                        result = *(uint32_t *)(a1 + 28);
                        *(float *)(result + 32) = a2[8];
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(uint32_t **)(a1 + 16) = (int)*a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = (int)a2[1];
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        *(uint32_t *)(*(uint32_t *)(a1 + 16) + 8) = (int)a2[2];
        if ( *(uint32_t *)(a1 + 40) > 3u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 12) = (int)a2[3];
          if ( *(uint32_t *)(a1 + 40) > 4u )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 16) + 16) = (int)a2[4];
            if ( *(uint32_t *)(a1 + 40) > 5u )
            {
              *(uint32_t *)(*(uint32_t *)(a1 + 16) + 20) = (int)a2[5];
              if ( *(uint32_t *)(a1 + 40) > 6u )
              {
                *(uint32_t *)(*(uint32_t *)(a1 + 16) + 24) = (int)a2[6];
                if ( *(uint32_t *)(a1 + 40) > 7u )
                {
                  *(uint32_t *)(*(uint32_t *)(a1 + 16) + 28) = (int)a2[7];
                  if ( *(uint32_t *)(a1 + 40) > 8u )
                  {
                    result = *(uint32_t *)(a1 + 16);
                    *(uint32_t *)(result + 32) = (int)a2[8];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMemoryWriteFile::Destroy_eaefb8b0  (binary VA: 0xefb8b0)
// Original: glitch::io::CMemoryWriteFile::~CMemoryWriteFile
// ----------------------------------------------------------------------------
void glitch::io::CMemoryWriteFile::Destroy_eaefb8b0(glitch::io::CMemoryWriteFile::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082668);
  if ( *((uint32_t *)self + 3) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 3));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CUserPointerAttribute::getString  (binary VA: 0xefb910)
// Original: glitch::io::CUserPointerAttribute::getString
// ----------------------------------------------------------------------------
char ** glitch::io::CUserPointerAttribute::getString(char **self, int a2)
{
  char s[24];

  sprintf(s, "0x%x", *(uint32_t *)(a2 + 16));
  sub_EA19F0(self, s);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLightAttribute::getString  (binary VA: 0xefb970)
// Original: glitch::io::CLightAttribute::getString
// ----------------------------------------------------------------------------
char ** glitch::io::CLightAttribute::getString(char **self)
{
  sub_EA19F0(self, "light");
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrixAttribute::getQuaternion  (binary VA: 0xefb9b0)
// Original: glitch::io::CMatrixAttribute::getQuaternion
// ----------------------------------------------------------------------------
glitch::io::CMatrixAttribute::Self * glitch::io::CMatrixAttribute::getQuaternion(glitch::io::CMatrixAttribute::Self *self, int a2)
{
  float v3[17];

  (*(void (**)(float *))(*(uint32_t *)a2 + 72))(v3);
  sub_EA20A0((float *)self, v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setFloatArray  (binary VA: 0xefba00)
// Original: glitch::io::CNumbersAttribute::setFloatArray
// ----------------------------------------------------------------------------
unsigned int glitch::io::CNumbersAttribute::setFloatArray(glitch::io::CNumbersAttribute::Self *self, std::vector<float, glitch::core::SAllocator<float, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  unsigned int v2;
  unsigned int result;
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;

  if ( *((uint8_t *)self + 44) != 0 )
  {
    result = 0;
    if ( *((uint32_t *)self + 10) != 0 )
    {
      v7 = 0;
      do
      {
        *(uint32_t *)(*((uint32_t *)self + 7) + 4 * v7++) = 0;
        result = *((uint32_t *)self + 10);
      }
      while ( v7 < result );
    }
  }
  else
  {
    v2 = 0;
    result = 0;
    if ( *((uint32_t *)self + 10) != 0 )
    {
      do
      {
        *(uint32_t *)(*((uint32_t *)self + 4) + 4 * v2++) = 0;
        result = *((uint32_t *)self + 10);
      }
      while ( v2 < result );
    }
  }
  v4 = *(uint32_t *)a2;
  if ( (unsigned int)(*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 2 != 0 )
  {
    v5 = 0;
    v6 = 0;
    if ( result != 0 )
    {
      if ( *((uint8_t *)self + 44) == 0 )
        goto LABEL_12;
LABEL_7:
      *(uint32_t *)(*((uint32_t *)self + 7) + v5) = *(uint32_t *)(v4 + v5);
      while ( 1 )
      {
        v4 = *(uint32_t *)a2;
        ++v6;
        result = (*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 2;
        if ( v6 >= result )
          break;
        v5 += 4;
        if ( *((uint32_t *)self + 10) <= v6 )
          break;
        if ( *((uint8_t *)self + 44) != 0 )
          goto LABEL_7;
LABEL_12:
        *(uint32_t *)(*((uint32_t *)self + 4) + v5) = (int)*(float *)(v4 + v5);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setDimension2d  (binary VA: 0xefbac0)
// Original: glitch::io::CNumbersAttribute::setDimension2d
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setDimension2d(int a1, int a2, int a3)
{
  int result;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v6 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v6++) = 0;
      v5 = *(uint32_t *)(a1 + 40);
    }
    while ( v6 < v5 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v4 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v4++) = 0;
      v5 = *(uint32_t *)(a1 + 40);
    }
    while ( v4 < v5 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v5 != 0 )
      {
        **(uint32_t **)(a1 + 16) = a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          result = *(uint32_t *)(a1 + 16);
          *(uint32_t *)(result + 4) = a3;
        }
      }
      return result;
    }
  }
  if ( v5 != 0 )
  {
    **(float **)(a1 + 28) = (float)a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      result = *(uint32_t *)(a1 + 28);
      *(float *)(result + 4) = (float)a3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setTriangle3d  (binary VA: 0xefbb70)
// Original: glitch::io::CNumbersAttribute::setTriangle3d
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setTriangle3d(int a1, float *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(uint32_t **)(a1 + 16) = (int)*a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = (int)a2[1];
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 16) + 8) = (int)a2[2];
            if ( *(uint32_t *)(a1 + 40) > 3u )
            {
              *(uint32_t *)(*(uint32_t *)(a1 + 16) + 12) = (int)a2[3];
              if ( *(uint32_t *)(a1 + 40) > 4u )
              {
                *(uint32_t *)(*(uint32_t *)(a1 + 16) + 16) = (int)a2[4];
                if ( *(uint32_t *)(a1 + 40) > 5u )
                {
                  *(uint32_t *)(*(uint32_t *)(a1 + 16) + 20) = (int)a2[5];
                  if ( *(uint32_t *)(a1 + 40) > 6u )
                  {
                    *(uint32_t *)(*(uint32_t *)(a1 + 16) + 24) = (int)a2[6];
                    if ( *(uint32_t *)(a1 + 40) > 7u )
                    {
                      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 28) = (int)a2[7];
                      if ( *(uint32_t *)(a1 + 40) > 8u )
                      {
                        result = *(uint32_t *)(a1 + 16);
                        *(uint32_t *)(result + 32) = (int)a2[8];
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(float **)(a1 + 28) = *a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(float *)(*(uint32_t *)(a1 + 28) + 4) = a2[1];
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        *(float *)(*(uint32_t *)(a1 + 28) + 8) = a2[2];
        if ( *(uint32_t *)(a1 + 40) > 3u )
        {
          *(float *)(*(uint32_t *)(a1 + 28) + 12) = a2[3];
          if ( *(uint32_t *)(a1 + 40) > 4u )
          {
            *(float *)(*(uint32_t *)(a1 + 28) + 16) = a2[4];
            if ( *(uint32_t *)(a1 + 40) > 5u )
            {
              *(float *)(*(uint32_t *)(a1 + 28) + 20) = a2[5];
              if ( *(uint32_t *)(a1 + 40) > 6u )
              {
                *(float *)(*(uint32_t *)(a1 + 28) + 24) = a2[6];
                if ( *(uint32_t *)(a1 + 40) > 7u )
                {
                  *(float *)(*(uint32_t *)(a1 + 28) + 28) = a2[7];
                  if ( *(uint32_t *)(a1 + 40) > 8u )
                  {
                    result = *(uint32_t *)(a1 + 28);
                    *(float *)(result + 32) = a2[8];
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setPlane  (binary VA: 0xefbd20)
// Original: glitch::io::CNumbersAttribute::setPlane
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setPlane(int a1, float *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(uint32_t **)(a1 + 16) = (int)*a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = (int)a2[1];
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 16) + 8) = (int)a2[2];
            if ( *(uint32_t *)(a1 + 40) > 3u )
            {
              result = *(uint32_t *)(a1 + 16);
              *(uint32_t *)(result + 12) = (int)a2[3];
            }
          }
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(float **)(a1 + 28) = *a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(float *)(*(uint32_t *)(a1 + 28) + 4) = a2[1];
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        *(float *)(*(uint32_t *)(a1 + 28) + 8) = a2[2];
        if ( *(uint32_t *)(a1 + 40) > 3u )
        {
          result = *(uint32_t *)(a1 + 28);
          *(float *)(result + 12) = a2[3];
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setBoundingBox  (binary VA: 0xefbe10)
// Original: glitch::io::CNumbersAttribute::setBoundingBox
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setBoundingBox(int a1, float *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(uint32_t **)(a1 + 16) = (int)*a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = (int)a2[1];
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 16) + 8) = (int)a2[2];
            if ( *(uint32_t *)(a1 + 40) > 3u )
            {
              *(uint32_t *)(*(uint32_t *)(a1 + 16) + 12) = (int)a2[3];
              if ( *(uint32_t *)(a1 + 40) > 4u )
              {
                *(uint32_t *)(*(uint32_t *)(a1 + 16) + 16) = (int)a2[4];
                if ( *(uint32_t *)(a1 + 40) > 5u )
                {
                  result = *(uint32_t *)(a1 + 16);
                  *(uint32_t *)(result + 20) = (int)a2[5];
                }
              }
            }
          }
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(float **)(a1 + 28) = *a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(float *)(*(uint32_t *)(a1 + 28) + 4) = a2[1];
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        *(float *)(*(uint32_t *)(a1 + 28) + 8) = a2[2];
        if ( *(uint32_t *)(a1 + 40) > 3u )
        {
          *(float *)(*(uint32_t *)(a1 + 28) + 12) = a2[3];
          if ( *(uint32_t *)(a1 + 40) > 4u )
          {
            *(float *)(*(uint32_t *)(a1 + 28) + 16) = a2[4];
            if ( *(uint32_t *)(a1 + 40) > 5u )
            {
              result = *(uint32_t *)(a1 + 28);
              *(float *)(result + 20) = a2[5];
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setQuaternion  (binary VA: 0xefbf50)
// Original: glitch::io::CNumbersAttribute::setQuaternion
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setQuaternion(int a1, float a2, float a3, float a4, float a5)
{
  int result;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v8 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v8++) = 0;
      v7 = *(uint32_t *)(a1 + 40);
    }
    while ( v8 < v7 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v6 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v6++) = 0;
      v7 = *(uint32_t *)(a1 + 40);
    }
    while ( v6 < v7 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v7 != 0 )
      {
        **(uint32_t **)(a1 + 16) = (int)a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = (int)a3;
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 16) + 8) = (int)a4;
            if ( *(uint32_t *)(a1 + 40) > 3u )
            {
              result = *(uint32_t *)(a1 + 16);
              *(uint32_t *)(result + 12) = (int)a5;
            }
          }
        }
      }
      return result;
    }
  }
  if ( v7 != 0 )
  {
    **(float **)(a1 + 28) = a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(float *)(*(uint32_t *)(a1 + 28) + 4) = a3;
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        *(float *)(*(uint32_t *)(a1 + 28) + 8) = a4;
        if ( *(uint32_t *)(a1 + 40) > 3u )
        {
          result = *(uint32_t *)(a1 + 28);
          *(float *)(result + 12) = a5;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setMatrix  (binary VA: 0xefc050)
// Original: glitch::io::CNumbersAttribute::setMatrix
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::setMatrix(glitch::io::CNumbersAttribute::Self *self, const glitch::core::CMatrix4<float> *a2)
{
  glitch::io::CNumbersAttribute::Self *result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;

  result = self;
  if ( *((uint8_t *)self + 44) == 0 )
  {
    v3 = 0;
    if ( *((uint32_t *)self + 10) == 0 )
    {
LABEL_10:
      if ( *((uint32_t *)self + 10) > 4u )
      {
        *(uint32_t *)(*((uint32_t *)self + 4) + 16) = (int)*((float *)a2 + 4);
        if ( *((uint32_t *)self + 10) > 5u )
        {
          *(uint32_t *)(*((uint32_t *)self + 4) + 20) = (int)*((float *)a2 + 5);
          if ( *((uint32_t *)self + 10) > 6u )
          {
            *(uint32_t *)(*((uint32_t *)self + 4) + 24) = (int)*((float *)a2 + 6);
            if ( *((uint32_t *)self + 10) > 7u )
              *(uint32_t *)(*((uint32_t *)self + 4) + 28) = (int)*((float *)a2 + 7);
          }
        }
      }
      if ( *((uint32_t *)self + 10) > 8u )
      {
        *(uint32_t *)(*((uint32_t *)self + 4) + 32) = (int)*((float *)a2 + 8);
        if ( *((uint32_t *)self + 10) > 9u )
        {
          *(uint32_t *)(*((uint32_t *)self + 4) + 36) = (int)*((float *)a2 + 9);
          if ( *((uint32_t *)self + 10) > 0xAu )
          {
            *(uint32_t *)(*((uint32_t *)self + 4) + 40) = (int)*((float *)a2 + 10);
            if ( *((uint32_t *)self + 10) > 0xBu )
              *(uint32_t *)(*((uint32_t *)self + 4) + 44) = (int)*((float *)a2 + 11);
          }
        }
      }
      v5 = *((uint32_t *)self + 10);
      if ( v5 > 0xC )
      {
        *(uint32_t *)(*((uint32_t *)self + 4) + 48) = (int)*((float *)a2 + 12);
        v5 = *((uint32_t *)self + 10);
      }
      if ( v5 > 0xD )
      {
        *(uint32_t *)(*((uint32_t *)self + 4) + 52) = (int)*((float *)a2 + 13);
        if ( *((uint32_t *)self + 10) > 0xEu )
        {
          *(uint32_t *)(*((uint32_t *)self + 4) + 56) = (int)*((float *)a2 + 14);
          if ( *((uint32_t *)self + 10) > 0xFu )
          {
            result = *((glitch::io::CNumbersAttribute::Self **)self + 4);
            *((uint32_t *)result + 15) = (int)*((float *)a2 + 15);
          }
        }
      }
      return result;
    }
    do
    {
      *(uint32_t *)(*((uint32_t *)self + 4) + 4 * v3++) = 0;
      v4 = *((uint32_t *)self + 10);
    }
    while ( v3 < v4 );
    if ( *((uint8_t *)self + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **((uint32_t **)self + 4) = (int)*(float *)a2;
        if ( *((uint32_t *)self + 10) > 1u )
        {
          *(uint32_t *)(*((uint32_t *)self + 4) + 4) = (int)*((float *)a2 + 1);
          if ( *((uint32_t *)self + 10) > 2u )
          {
            *(uint32_t *)(*((uint32_t *)self + 4) + 8) = (int)*((float *)a2 + 2);
            if ( *((uint32_t *)self + 10) > 3u )
              *(uint32_t *)(*((uint32_t *)self + 4) + 12) = (int)*((float *)a2 + 3);
          }
        }
      }
      goto LABEL_10;
    }
    goto LABEL_31;
  }
  if ( *((uint32_t *)self + 10) != 0 )
  {
    v6 = 0;
    do
    {
      *(uint32_t *)(*((uint32_t *)self + 7) + 4 * v6++) = 0;
      v4 = *((uint32_t *)self + 10);
    }
    while ( v6 < v4 );
    if ( *((uint8_t *)self + 44) == 0 )
      goto LABEL_5;
LABEL_31:
    if ( v4 != 0 )
    {
      **((uint32_t **)self + 7) = *(uint32_t *)a2;
      if ( *((uint32_t *)self + 10) > 1u )
      {
        *(uint32_t *)(*((uint32_t *)self + 7) + 4) = *((uint32_t *)a2 + 1);
        if ( *((uint32_t *)self + 10) > 2u )
        {
          *(uint32_t *)(*((uint32_t *)self + 7) + 8) = *((uint32_t *)a2 + 2);
          if ( *((uint32_t *)self + 10) > 3u )
            *(uint32_t *)(*((uint32_t *)self + 7) + 12) = *((uint32_t *)a2 + 3);
        }
      }
    }
  }
  if ( *((uint32_t *)self + 10) > 4u )
  {
    *(uint32_t *)(*((uint32_t *)self + 7) + 16) = *((uint32_t *)a2 + 4);
    if ( *((uint32_t *)self + 10) > 5u )
    {
      *(uint32_t *)(*((uint32_t *)self + 7) + 20) = *((uint32_t *)a2 + 5);
      if ( *((uint32_t *)self + 10) > 6u )
      {
        *(uint32_t *)(*((uint32_t *)self + 7) + 24) = *((uint32_t *)a2 + 6);
        if ( *((uint32_t *)self + 10) > 7u )
          *(uint32_t *)(*((uint32_t *)self + 7) + 28) = *((uint32_t *)a2 + 7);
      }
    }
  }
  if ( *((uint32_t *)self + 10) > 8u )
  {
    *(uint32_t *)(*((uint32_t *)self + 7) + 32) = *((uint32_t *)a2 + 8);
    if ( *((uint32_t *)self + 10) > 9u )
    {
      *(uint32_t *)(*((uint32_t *)self + 7) + 36) = *((uint32_t *)a2 + 9);
      if ( *((uint32_t *)self + 10) > 0xAu )
      {
        *(uint32_t *)(*((uint32_t *)self + 7) + 40) = *((uint32_t *)a2 + 10);
        if ( *((uint32_t *)self + 10) > 0xBu )
          *(uint32_t *)(*((uint32_t *)self + 7) + 44) = *((uint32_t *)a2 + 11);
      }
    }
  }
  if ( *((uint32_t *)self + 10) > 0xCu )
  {
    *(uint32_t *)(*((uint32_t *)self + 7) + 48) = *((uint32_t *)a2 + 12);
    if ( *((uint32_t *)self + 10) > 0xDu )
    {
      *(uint32_t *)(*((uint32_t *)self + 7) + 52) = *((uint32_t *)a2 + 13);
      if ( *((uint32_t *)self + 10) > 0xEu )
      {
        *(uint32_t *)(*((uint32_t *)self + 7) + 56) = *((uint32_t *)a2 + 14);
        if ( *((uint32_t *)self + 10) > 0xFu )
        {
          result = *((glitch::io::CNumbersAttribute::Self **)self + 7);
          *((uint32_t *)result + 15) = *((uint32_t *)a2 + 15);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setColor  (binary VA: 0xefc2e0)
// Original: glitch::io::CNumbersAttribute::setColor
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setColor(int a1, int a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(uint32_t **)(a1 + 16) = (uint8_t)a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = BYTE1(a2);
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 16) + 8) = BYTE2(a2);
            if ( *(uint32_t *)(a1 + 40) > 3u )
            {
              result = *(uint32_t *)(a1 + 16);
              *(uint32_t *)(result + 12) = HIBYTE(a2);
            }
          }
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(float **)(a1 + 28) = (float)((float)((float)0 * 65536.0) + (float)(uint8_t)a2) * 0.003921569f;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(float *)(*(uint32_t *)(a1 + 28) + 4) = (float)((float)((float)0 * 65536.0) + (float)BYTE1(a2)) * 0.003921569f;
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        *(float *)(*(uint32_t *)(a1 + 28) + 8) = (float)((float)((float)0 * 65536.0) + (float)BYTE2(a2)) * 0.003921569f;
        if ( *(uint32_t *)(a1 + 40) > 3u )
        {
          result = *(uint32_t *)(a1 + 28);
          *(float *)(result + 12) = (float)((float)((float)0 * 65536.0) + (float)HIBYTE(a2)) * 0.003921569f;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setColor  (binary VA: 0xefc490)
// Original: glitch::io::CNumbersAttribute::setColor
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setColor(int a1, float a2, float a3, float a4, float a5)
{
  int result;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v8 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v8++) = 0;
      v7 = *(uint32_t *)(a1 + 40);
    }
    while ( v8 < v7 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v6 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v6++) = 0;
      v7 = *(uint32_t *)(a1 + 40);
    }
    while ( v6 < v7 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v7 != 0 )
      {
        **(uint32_t **)(a1 + 16) = (int)(float)(a2 * 255.0);
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = (int)(float)(a3 * 255.0);
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 16) + 8) = (int)(float)(a4 * 255.0);
            if ( *(uint32_t *)(a1 + 40) > 3u )
            {
              result = *(uint32_t *)(a1 + 16);
              *(uint32_t *)(result + 12) = (int)(float)(255.0 * a5);
            }
          }
        }
      }
      return result;
    }
  }
  if ( v7 != 0 )
  {
    **(float **)(a1 + 28) = a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(float *)(*(uint32_t *)(a1 + 28) + 4) = a3;
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        *(float *)(*(uint32_t *)(a1 + 28) + 8) = a4;
        if ( *(uint32_t *)(a1 + 40) > 3u )
        {
          result = *(uint32_t *)(a1 + 28);
          *(float *)(result + 12) = a5;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setVector4d  (binary VA: 0xefc5b0)
// Original: glitch::io::CNumbersAttribute::setVector4d
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setVector4d(int a1, float *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(uint32_t **)(a1 + 16) = (int)*a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = (int)a2[1];
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 16) + 8) = (int)a2[2];
            if ( *(uint32_t *)(a1 + 40) > 3u )
            {
              result = *(uint32_t *)(a1 + 16);
              *(uint32_t *)(result + 12) = (int)a2[3];
            }
          }
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(float **)(a1 + 28) = *a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(float *)(*(uint32_t *)(a1 + 28) + 4) = a2[1];
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        *(float *)(*(uint32_t *)(a1 + 28) + 8) = a2[2];
        if ( *(uint32_t *)(a1 + 40) > 3u )
        {
          result = *(uint32_t *)(a1 + 28);
          *(float *)(result + 12) = a2[3];
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setVector3d  (binary VA: 0xefc6a0)
// Original: glitch::io::CNumbersAttribute::setVector3d
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setVector3d(int a1, float *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(uint32_t **)(a1 + 16) = (int)*a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = (int)a2[1];
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            result = *(uint32_t *)(a1 + 16);
            *(uint32_t *)(result + 8) = (int)a2[2];
          }
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(float **)(a1 + 28) = *a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(float *)(*(uint32_t *)(a1 + 28) + 4) = a2[1];
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        result = *(uint32_t *)(a1 + 28);
        *(float *)(result + 8) = a2[2];
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setIntArray  (binary VA: 0xefc770)
// Original: glitch::io::CNumbersAttribute::setIntArray
// ----------------------------------------------------------------------------
unsigned int glitch::io::CNumbersAttribute::setIntArray(glitch::io::CNumbersAttribute::Self *self, std::vector<int, glitch::core::SAllocator<int, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  unsigned int v2;
  unsigned int result;
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;

  if ( *((uint8_t *)self + 44) != 0 )
  {
    result = 0;
    if ( *((uint32_t *)self + 10) != 0 )
    {
      v7 = 0;
      do
      {
        *(uint32_t *)(*((uint32_t *)self + 7) + 4 * v7++) = 0;
        result = *((uint32_t *)self + 10);
      }
      while ( v7 < result );
    }
  }
  else
  {
    v2 = 0;
    result = 0;
    if ( *((uint32_t *)self + 10) != 0 )
    {
      do
      {
        *(uint32_t *)(*((uint32_t *)self + 4) + 4 * v2++) = 0;
        result = *((uint32_t *)self + 10);
      }
      while ( v2 < result );
    }
  }
  v4 = *(uint32_t *)a2;
  if ( (unsigned int)(*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 2 != 0 )
  {
    v5 = 0;
    v6 = 0;
    if ( result != 0 )
    {
      if ( *((uint8_t *)self + 44) == 0 )
        goto LABEL_12;
LABEL_7:
      *(float *)(*((uint32_t *)self + 7) + v5) = (float)*(int *)(v4 + v5);
      while ( 1 )
      {
        v4 = *(uint32_t *)a2;
        ++v6;
        result = (*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 2;
        if ( v6 >= result )
          break;
        v5 += 4;
        if ( *((uint32_t *)self + 10) <= v6 )
          break;
        if ( *((uint8_t *)self + 44) != 0 )
          goto LABEL_7;
LABEL_12:
        *(uint32_t *)(*((uint32_t *)self + 4) + v5) = *(uint32_t *)(v4 + v5);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setLine2d  (binary VA: 0xefc840)
// Original: glitch::io::CNumbersAttribute::setLine2d
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setLine2d(int a1, float *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(uint32_t **)(a1 + 16) = (int)*a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = (int)a2[1];
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 16) + 8) = (int)a2[2];
            if ( *(uint32_t *)(a1 + 40) > 3u )
            {
              result = *(uint32_t *)(a1 + 16);
              *(uint32_t *)(result + 12) = (int)a2[3];
            }
          }
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(float **)(a1 + 28) = *a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(float *)(*(uint32_t *)(a1 + 28) + 4) = a2[1];
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        *(float *)(*(uint32_t *)(a1 + 28) + 8) = a2[2];
        if ( *(uint32_t *)(a1 + 40) > 3u )
        {
          result = *(uint32_t *)(a1 + 28);
          *(float *)(result + 12) = a2[3];
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setVector2d  (binary VA: 0xefc930)
// Original: glitch::io::CNumbersAttribute::setVector2d
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setVector2d(int a1, float *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(uint32_t **)(a1 + 16) = (int)*a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          result = *(uint32_t *)(a1 + 16);
          *(uint32_t *)(result + 4) = (int)a2[1];
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(float **)(a1 + 28) = *a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      result = *(uint32_t *)(a1 + 28);
      *(float *)(result + 4) = a2[1];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setLine2d  (binary VA: 0xefc9e0)
// Original: glitch::io::CNumbersAttribute::setLine2d
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setLine2d(int a1, uint32_t *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(uint32_t **)(a1 + 16) = *a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = a2[1];
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 16) + 8) = a2[2];
            if ( *(uint32_t *)(a1 + 40) > 3u )
            {
              result = *(uint32_t *)(a1 + 16);
              *(uint32_t *)(result + 12) = a2[3];
            }
          }
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(float **)(a1 + 28) = (float)(int)*a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(float *)(*(uint32_t *)(a1 + 28) + 4) = (float)(int)a2[1];
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        *(float *)(*(uint32_t *)(a1 + 28) + 8) = (float)(int)a2[2];
        if ( *(uint32_t *)(a1 + 40) > 3u )
        {
          result = *(uint32_t *)(a1 + 28);
          *(float *)(result + 12) = (float)(int)a2[3];
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setVector2d  (binary VA: 0xefcad0)
// Original: glitch::io::CNumbersAttribute::setVector2d
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setVector2d(int a1, uint32_t *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(uint32_t **)(a1 + 16) = *a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          result = *(uint32_t *)(a1 + 16);
          *(uint32_t *)(result + 4) = a2[1];
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(float **)(a1 + 28) = (float)(int)*a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      result = *(uint32_t *)(a1 + 28);
      *(float *)(result + 4) = (float)(int)a2[1];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setRect  (binary VA: 0xefcb90)
// Original: glitch::io::CNumbersAttribute::setRect
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setRect(int a1, uint32_t *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(uint32_t **)(a1 + 16) = *a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = a2[1];
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 16) + 8) = a2[2];
            if ( *(uint32_t *)(a1 + 40) > 3u )
            {
              result = *(uint32_t *)(a1 + 16);
              *(uint32_t *)(result + 12) = a2[3];
            }
          }
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(float **)(a1 + 28) = (float)(int)*a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(float *)(*(uint32_t *)(a1 + 28) + 4) = (float)(int)a2[1];
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        *(float *)(*(uint32_t *)(a1 + 28) + 8) = (float)(int)a2[2];
        if ( *(uint32_t *)(a1 + 40) > 3u )
        {
          result = *(uint32_t *)(a1 + 28);
          *(float *)(result + 12) = (float)(int)a2[3];
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setMatrix2  (binary VA: 0xefcc80)
// Original: glitch::io::CNumbersAttribute::setMatrix2
// ----------------------------------------------------------------------------
int glitch::io::CNumbersAttribute::setMatrix2(int a1, float *a2)
{
  int result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;

  result = a1;
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    v5 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * v5++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v5 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
      goto LABEL_5;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 40) == 0 )
      return result;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4 * v3++) = 0;
      v4 = *(uint32_t *)(a1 + 40);
    }
    while ( v3 < v4 );
    if ( *(uint8_t *)(a1 + 44) == 0 )
    {
LABEL_5:
      if ( v4 != 0 )
      {
        **(uint32_t **)(a1 + 16) = (int)*a2;
        if ( *(uint32_t *)(a1 + 40) > 1u )
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 16) + 4) = (int)a2[1];
          if ( *(uint32_t *)(a1 + 40) > 2u )
          {
            *(uint32_t *)(*(uint32_t *)(a1 + 16) + 8) = (int)a2[2];
            if ( *(uint32_t *)(a1 + 40) > 3u )
            {
              result = *(uint32_t *)(a1 + 16);
              *(uint32_t *)(result + 12) = (int)a2[3];
            }
          }
        }
      }
      return result;
    }
  }
  if ( v4 != 0 )
  {
    **(float **)(a1 + 28) = *a2;
    if ( *(uint32_t *)(a1 + 40) > 1u )
    {
      *(float *)(*(uint32_t *)(a1 + 28) + 4) = a2[1];
      if ( *(uint32_t *)(a1 + 40) > 2u )
      {
        *(float *)(*(uint32_t *)(a1 + 28) + 8) = a2[2];
        if ( *(uint32_t *)(a1 + 40) > 3u )
        {
          result = *(uint32_t *)(a1 + 28);
          *(float *)(result + 12) = a2[3];
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getIntArray  (binary VA: 0xefcd70)
// Original: glitch::io::CNumbersAttribute::getIntArray
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getIntArray(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  int v2;
  size_t v3;
  int v4;
  char *v5;
  char *v6;
  char *v7;
  uint32_t *v8;
  unsigned int v10;
  char *v11;
  unsigned int i;
  int v13;
  int v14;
  int *v15;
  char *v16;
  uint32_t *v17;
  char *v18;
  uint32_t *v19;
  unsigned int v20;
  char *v21;
  unsigned int v22;
  char *v23;
  char *v24;
  int v25;
  unsigned int v26;
  int v27;
  int v28;

  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    v10 = *(uint32_t *)(a2 + 40);
    v11 = *(char **)(a2 + 16);
    *(uint32_t *)(a2 + 20) = (uint32_t)(uintptr_t)(v11);
    if ( v10 == 0 )
    {
      v3 = 0;
      *(uint32_t *)self = 0;
      *((uint32_t *)self + 1) = 0;
      *((uint32_t *)self + 2) = 0;
      v4 = 0;
      goto LABEL_5;
    }
    for ( i = 0; i < v10; ++i )
    {
      v28 = (int)*(float *)(*(uint32_t *)(a2 + 28) + 4 * i);
      if ( *(char **)(a2 + 24) == v11 )
      {
        v14 = (int)(uintptr_t)(&v11[-*(uint32_t *)(a2 + 16)]) >> 2;
        v25 = 4;
        v22 = v14;
        if ( v14 != 0 )
        {
          v20 = 2 * v14;
          if ( v22 > v20 || v20 > 0x3FFFFFFF )
            v25 = -4;
          else
            v25 = 8 * v22;
        }
        v21 = *(char **)(a2 + 24);
        v27 = sub_4EBDC0(v25);
        v26 = v27 + 4;
        v15 = (int *)(v27 + 4 * v22);
        if ( v15 != nullptr )
          *v15 = v28;
        v16 = *(char **)(a2 + 16);
        v23 = v16;
        if ( v21 != v16 )
        {
          v17 = (uint32_t *)v27;
          do
          {
            if ( v17 != nullptr )
              *v17 = *(uint32_t *)v16;
            v16 += 4;
            ++v17;
          }
          while ( v21 != v16 );
          v26 = v27 + 4 * ((unsigned int)(v21 - (v23 + 4)) >> 2) + 8;
        }
        v24 = *(char **)(a2 + 20);
        if ( v24 == v11 )
        {
          v11 = (char *)v26;
        }
        else
        {
          v18 = v11;
          v19 = (uint32_t *)v26;
          do
          {
            if ( v19 != nullptr )
              *v19 = *(uint32_t *)v18;
            v18 += 4;
            ++v19;
          }
          while ( v24 != v18 );
          v11 = (char *)(v26 + 4 * ((unsigned int)(v24 - (v11 + 4)) >> 2) + 4);
        }
        if ( *(uint32_t *)(a2 + 16) != 0 )
          gll_operator_delete_arr(*(uint32_t *)(a2 + 16));
        *(uint32_t *)(a2 + 20) = (uint32_t)(uintptr_t)(v11);
        *(uint32_t *)(a2 + 16) = v27;
        *(uint32_t *)(a2 + 24) = v25 + v27;
        v10 = *(uint32_t *)(a2 + 40);
      }
      else
      {
        v13 = 0;
        if ( v11 != nullptr )
        {
          *(uint32_t *)v11 = v28;
          v13 = *(uint32_t *)(a2 + 20);
          v10 = *(uint32_t *)(a2 + 40);
        }
        v11 = (char *)(v13 + 4);
        *(uint32_t *)(a2 + 20) = v13 + 4;
      }
    }
    v2 = (int)(uintptr_t)(&v11[-*(uint32_t *)(a2 + 16)]) >> 2;
    v3 = 4 * v2;
  }
  else
  {
    v2 = (*(uint32_t *)(a2 + 20) - *(uint32_t *)(a2 + 16)) >> 2;
    v3 = 4 * v2;
  }
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  v4 = 0;
  if ( v2 != 0 )
    v4 = sub_4EBDC0(v3);
LABEL_5:
  *(uint32_t *)self = v4;
  *((uint32_t *)self + 1) = v4;
  *((uint32_t *)self + 2) = v4 + v3;
  v5 = *(char **)(a2 + 20);
  v6 = *(char **)(a2 + 16);
  if ( v5 != v6 )
  {
    v7 = *(char **)(a2 + 16);
    v8 = (uint32_t *)v4;
    do
    {
      if ( v8 != nullptr )
        *v8 = *(uint32_t *)v7;
      v7 += 4;
      ++v8;
    }
    while ( v5 != v7 );
    v4 += 4 * ((unsigned int)(v5 - (v6 + 4)) >> 2) + 4;
  }
  *((uint32_t *)self + 1) = v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBoolAttribute::getStringW  (binary VA: 0xefd010)
// Original: glitch::io::CBoolAttribute::getStringW
// ----------------------------------------------------------------------------
glitch::io::CBoolAttribute::Self * glitch::io::CBoolAttribute::getStringW(glitch::io::CBoolAttribute::Self *self, int a2)
{
  const wchar_t *v2;

  v2 = (const wchar_t *)&unk_1CB9E3C;
  if ( *(uint8_t *)(a2 + 13) == 0 )
    v2 = (const wchar_t *)&unk_1CB9E50;
  sub_EA31B0(self, v2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::getStringW  (binary VA: 0xefd060)
// Original: glitch::io::CEnumAttribute::getStringW
// ----------------------------------------------------------------------------
glitch::io::CEnumAttribute::Self * glitch::io::CEnumAttribute::getStringW(glitch::io::CEnumAttribute::Self *self, int a2)
{
  char *v2;
  char *v3;
  unsigned int v4;
  size_t v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  uint32_t *v21;
  int v22;
  int v24;
  unsigned int v25;
  wchar_t *v26;
  int v27;
  int v28;
  wchar_t v29;

  v2 = *(char **)(a2 + 16);
  v3 = &v2[*((uint32_t *)v2 - 3)];
  if ( v2 == v3 )
  {
    *(uint32_t *)self = (uint32_t)(uintptr_t)(&unk_20DF960);
    return self;
  }
  v4 = *((uint32_t *)v2 - 3);
  v29 = v4;
  if ( v4 > 0xFFFFFFE )
    sub_1900180("basic_string::_S_create");
  v5 = 4 * v4 + 16;
  v6 = 4 * v4 + 32;
  if ( v6 > 0x1000 && v29 != 0 )
  {
    v7 = 4096 - (v6 & 0xFFF);
    v8 = 268435454;
    v9 = v29 + (v7 >> 2);
    if ( v9 <= 0xFFFFFFE )
      v8 = v9;
    v5 = 4 * v8 + 16;
  }
  else
  {
    v8 = *((uint32_t *)v2 - 3);
  }
  v24 = v8;
  v10 = sub_4EBDC0(v5);
  *(uint32_t *)(v10 + 4) = v24;
  v27 = v3 - v2;
  v11 = v10 + 12;
  v25 = (unsigned int)(v3 - v2) >> 4;
  v26 = (wchar_t *)v10;
  *(uint32_t *)(v10 + 8) = 0;
  v28 = 16 * v25;
  if ( 16 * v25 == 0
    || (unsigned int)(v3 - v2) <= 0xF
    || v11 <= (unsigned int)(uintptr_t)(v3) && (unsigned int)(uintptr_t)(v2) <= v11 + 4 * (v3 - v2) )
  {
    v21 = (uint32_t *)(v10 + 12);
    do
    {
LABEL_13:
      v22 = *v2++;
      *v21++ = v22;
    }
    while ( v3 != v2 );
    goto LABEL_14;
  }
  v12 = 0;
  v13 = 0;
  do
  {
    v14 = *(__m128i *)&v2[v12];
    v15 = _mm_cmpgt_epi8(g4_m128_from<__m128i>(0LL), v14);
    ++v13;
    v16 = _mm_unpacklo_epi8(v14, v15);
    v17 = _mm_unpackhi_epi8(v14, v15);
    v18 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v16);
    v19 = _mm_unpacklo_epi16(v16, v18);
    *(__m128i *)(v11 + 4 * v12 + 16) = _mm_unpackhi_epi16(v16, v18);
    v20 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v17);
    *(__m128i *)(v11 + 4 * v12) = v19;
    *(__m128i *)(v11 + 4 * v12 + 32) = _mm_unpacklo_epi16(v17, v20);
    *(__m128i *)(v11 + 4 * v12 + 48) = _mm_unpackhi_epi16(v17, v20);
    v12 += 16;
  }
  while ( v25 > v13 );
  v2 += v28;
  v21 = (uint32_t *)(v11 + (v25 << 6));
  if ( v27 != v28 )
    goto LABEL_13;
LABEL_14:
  if ( v26 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
  {
    v26[2] = 0;
    *v26 = v29;
    *(uint32_t *)(v11 + 4 * v29) = 0;
  }
  *(uint32_t *)self = v11;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::setString  (binary VA: 0xefd270)
// Original: glitch::io::CNumbersAttribute::setString
// ----------------------------------------------------------------------------
unsigned int glitch::io::CNumbersAttribute::setString(__m128 a1, glitch::io::CNumbersAttribute::Self *self, const char *a3)
{
  const char *v3;
  unsigned int result;
  unsigned int v5;
  char v6;
  char v7;
  unsigned int v8;
  int v9;
  float v10; // xmm0_4
  char v11;
  unsigned int v12;
  int v13;
  float v14; // xmm0_4
  char v15;
  char v16;
  const char *v17;
  bool v18;
  char v19;
  float v20; // xmm3_4
  unsigned int v21;
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm3_4
  unsigned int v25;
  char v26;
  const char *v27;
  bool v28;
  char v29;
  float v30; // xmm3_4
  unsigned int v31;
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm3_4
  unsigned int v35;
  unsigned int i;
  const char *v37;
  const char *v38;
  char v39;
  unsigned int v40;

  v3 = a3;
  if ( *((uint8_t *)self + 44) != 0 )
  {
    result = *((uint32_t *)self + 10);
    if ( result == 0 )
      return result;
    for ( i = 0; i < result; ++i )
    {
      *(uint32_t *)(*((uint32_t *)self + 7) + 4 * i) = 0;
      result = *((uint32_t *)self + 10);
    }
  }
  else
  {
    result = *((uint32_t *)self + 10);
    v5 = 0;
    if ( result == 0 )
      return result;
    do
    {
      *(uint32_t *)(*((uint32_t *)self + 4) + 4 * v5++) = 0;
      result = *((uint32_t *)self + 10);
    }
    while ( v5 < result );
  }
  if ( result != 0 )
  {
    v6 = *a3;
    v40 = 0;
    if ( *a3 != 0 )
    {
      do
      {
        if ( v6 != 45 )
        {
          while ( v6 != 0 )
          {
            if ( (uint8_t)(v6 - 48) <= 9u )
            {
              v7 = v6;
              goto LABEL_13;
            }
            v6 = *++v3;
            if ( *v3 == 45 )
              break;
          }
        }
        v7 = v6;
        if ( v6 == 0 )
          goto LABEL_9;
LABEL_13:
        v39 = 0;
        if ( *((uint8_t *)self + 44) == 0 )
        {
          if ( v6 == 45 )
          {
            v7 = *++v3;
            v39 = 1;
            if ( (uint8_t)(v7 - 48) <= 9u )
              goto LABEL_30;
          }
          else if ( (uint8_t)(v7 - 48) <= 9u )
          {
LABEL_30:
            v12 = 0;
            do
            {
              ++v3;
              v12 = v7 + 10 * v12 - 48;
              v7 = *v3;
            }
            while ( (uint8_t)(*v3 - 48) <= 9u );
            v13 = (uint16_t)v12;
            v14 = (float)HIWORD(v12) * 65536.0;
            v15 = *v3;
g4_m128_lane<float>(a1, 0) = v14 + (float)v13;
            goto LABEL_33;
          }
          v15 = v7;
g4_m128_raw(a1) = 0;
LABEL_33:
          if ( v7 == 46 )
          {
            v15 = v3[1];
            v24 = 0.0;
            v37 = ++v3;
            if ( (uint8_t)(v15 - 48) <= 9u )
            {
              v25 = 0;
              do
              {
                ++v3;
                v25 = v15 + 10 * v25 - 48;
                v15 = *v3;
              }
              while ( (uint8_t)(*v3 - 48) <= 9u );
              v24 = (float)((float)((float)HIWORD(v25) * 65536.0) + (float)(uint16_t)v25)
                  * dword_1CBAAC0[v3 - v37];
            }
g4_m128_lane<float>(a1, 0) =g4_m128_lane<float>(a1, 0) + v24;
          }
          if ( v15 == 101 )
          {
            v16 = v3[1];
            v17 = v3 + 1;
            v18 = true;
            if ( v16 != 45 )
              v18 = v16 == 43;
            v3 = &v17[v18];
            v19 = v17[v18];
            v20 = 0.0;
            if ( (uint8_t)(v19 - 48) <= 9u )
            {
              v21 = 0;
              do
              {
                ++v3;
                v21 = v19 + 10 * v21 - 48;
                v19 = *v3;
              }
              while ( (uint8_t)(*v3 - 48) <= 9u );
              v20 = (float)((float)HIWORD(v21) * 65536.0) + (float)(uint16_t)v21;
            }
            v22 = 1.0;
            if ( v16 == 45 )
              v22 = -1.0;
            v23 = pow(10.0, (float)(v20 * v22));
g4_m128_raw(a1) =g4_m128_lane<uint32_t>(a1, 0);
g4_m128_lane<float>(a1, 0) =g4_m128_lane<float>(a1, 0) * v23;
          }
          if ( v39 != 0 )
            a1 = _mm_xor_ps(a1, g4_m128_from<__m128>(0x80000000));
          *(uint32_t *)(*((uint32_t *)self + 4) + 4 * v40) = (int)g4_m128_lane<float>(a1, 0);
LABEL_9:
          result = ++v40;
          if ( *((uint32_t *)self + 10) <= v40 )
            return result;
          goto LABEL_24;
        }
        if ( v6 == 45 )
        {
          v7 = *++v3;
          v39 = 1;
          if ( (uint8_t)(v7 - 48) > 9u )
          {
LABEL_69:
            v11 = v7;
g4_m128_raw(a1) = 0;
            goto LABEL_19;
          }
        }
        else if ( (uint8_t)(v7 - 48) > 9u )
        {
          goto LABEL_69;
        }
        v8 = 0;
        do
        {
          ++v3;
          v8 = v7 + 10 * v8 - 48;
          v7 = *v3;
        }
        while ( (uint8_t)(*v3 - 48) <= 9u );
        v9 = (uint16_t)v8;
        v10 = (float)HIWORD(v8) * 65536.0;
        v11 = *v3;
g4_m128_lane<float>(a1, 0) = v10 + (float)v9;
LABEL_19:
        if ( v7 == 46 )
        {
          v11 = v3[1];
          v38 = ++v3;
          v34 = 0.0;
          if ( (uint8_t)(v11 - 48) <= 9u )
          {
            v35 = 0;
            do
            {
              ++v3;
              v35 = v11 + 10 * v35 - 48;
              v11 = *v3;
            }
            while ( (uint8_t)(*v3 - 48) <= 9u );
            v34 = (float)((float)((float)HIWORD(v35) * 65536.0) + (float)(uint16_t)v35)
                * dword_1CBAAC0[v3 - v38];
          }
g4_m128_lane<float>(a1, 0) =g4_m128_lane<float>(a1, 0) + v34;
        }
        if ( v11 == 101 )
        {
          v26 = v3[1];
          v27 = v3 + 1;
          v28 = true;
          if ( v26 != 45 )
            v28 = v26 == 43;
          v3 = &v27[v28];
          v29 = v27[v28];
          v30 = 0.0;
          if ( (uint8_t)(v29 - 48) <= 9u )
          {
            v31 = 0;
            do
            {
              ++v3;
              v31 = v29 + 10 * v31 - 48;
              v29 = *v3;
            }
            while ( (uint8_t)(*v3 - 48) <= 9u );
            v30 = (float)((float)HIWORD(v31) * 65536.0) + (float)(uint16_t)v31;
          }
          v32 = 1.0;
          if ( v26 == 45 )
            v32 = -1.0;
          v33 = pow(10.0, (float)(v30 * v32));
g4_m128_raw(a1) =g4_m128_lane<uint32_t>(a1, 0);
g4_m128_lane<float>(a1, 0) =g4_m128_lane<float>(a1, 0) * v33;
        }
        if ( v39 != 0 )
          a1 = _mm_xor_ps(a1, g4_m128_from<__m128>(0x80000000));
        *(uint32_t *)(*((uint32_t *)self + 7) + 4 * v40++) =g4_m128_lane<int32_t>(a1, 0);
        result = v40;
        if ( *((uint32_t *)self + 10) <= v40 )
          return result;
LABEL_24:
        v6 = *v3;
      }
      while ( *v3 != 0 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getLight  (binary VA: 0xefd9c0)
// Original: glitch::io::IAttribute::getLight
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getLight(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLightAttribute::getLight  (binary VA: 0xefd9d0)
// Original: glitch::io::CLightAttribute::getLight
// ----------------------------------------------------------------------------
glitch::io::CLightAttribute::Self * glitch::io::CLightAttribute::getLight(glitch::io::CLightAttribute::Self *self, int a2)
{
  volatile int32_t *v2;

  v2 = *(volatile int32_t **)(a2 + 16);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v2);
  if ( v2 != nullptr )
    sub_8B1B00(v2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getTexture  (binary VA: 0xefda20)
// Original: glitch::io::IAttribute::getTexture
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getTexture(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTextureAttribute::getTexture  (binary VA: 0xefda30)
// Original: glitch::io::CTextureAttribute::getTexture
// ----------------------------------------------------------------------------
glitch::io::CTextureAttribute::Self * glitch::io::CTextureAttribute::getTexture(glitch::io::CTextureAttribute::Self *self, int a2)
{
  int v2;

  v2 = *(uint32_t *)(a2 + 16);
  *(uint32_t *)self = v2;
  if ( v2 != 0 )
    sub_8B1B00((volatile int32_t *)(v2 + 4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTextureAttribute::setTexture  (binary VA: 0xefda80)
// Original: glitch::io::CTextureAttribute::setTexture
// ----------------------------------------------------------------------------
int glitch::io::CTextureAttribute::setTexture(glitch::io::CTextureAttribute::Self *self, const boost::intrusive_ptr<glitch::video::ITexture::Self> *a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);

  v2 = 0;
  v3 = *(uint32_t *)a2;
  v6 = v3;
  if ( v3 != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v3 + 4));
    v2 = v6;
  }
  v4 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 4) = v2;
  v6 = v4;
  return sub_5ED480(&v6);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBinaryAttributesReader::Destroy  (binary VA: 0xefdc00)
// Original: glitch::io::CBinaryAttributesReader::~CBinaryAttributesReader
// ----------------------------------------------------------------------------
void glitch::io::CBinaryAttributesReader::Destroy(volatile int32_t **self)
{
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_20823C0);
  if ( *(self + 1) != nullptr )
    sub_5459C0(*(self + 1));
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_2082740);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIrrXMLFileReadCallBack::Destroy  (binary VA: 0xefdc50)
// Original: glitch::io::CIrrXMLFileReadCallBack::~CIrrXMLFileReadCallBack
// ----------------------------------------------------------------------------
void glitch::io::CIrrXMLFileReadCallBack::Destroy(volatile int32_t **self)
{
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_2085598);
  if ( *(self + 1) != nullptr )
    sub_5459C0(*(self + 1));
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_2080D40);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIrrXMLFileReadCallBack::Destroy_eaefdca0  (binary VA: 0xefdca0)
// Original: glitch::io::CIrrXMLFileReadCallBack::~CIrrXMLFileReadCallBack
// ----------------------------------------------------------------------------
void glitch::io::CIrrXMLFileReadCallBack::Destroy_eaefdca0(volatile int32_t **self)
{
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_2085598);
  if ( *(self + 1) != nullptr )
    sub_5459C0(*(self + 1));
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_2080D40);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBinaryAttributesReader::Destroy_eaefdd00  (binary VA: 0xefdd00)
// Original: glitch::io::CBinaryAttributesReader::~CBinaryAttributesReader
// ----------------------------------------------------------------------------
void glitch::io::CBinaryAttributesReader::Destroy_eaefdd00(volatile int32_t **self)
{
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_20823C0);
  if ( *(self + 1) != nullptr )
    sub_5459C0(*(self + 1));
  *self = (volatile int32_t *)((uint32_t)(uintptr_t)&off_2082740);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CFloatAttribute::setString  (binary VA: 0xeff8c0)
// Original: glitch::io::CFloatAttribute::setString
// ----------------------------------------------------------------------------
glitch::io::CFloatAttribute::Self * glitch::io::CFloatAttribute::setString(glitch::io::CFloatAttribute::Self *self, glitch::core::Self *a2)
{
  char v3[16];

  glitch::core::fast_atof_move(a2, v3);
  *((uint32_t *)self + 4) = *(uint32_t *)v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getString  (binary VA: 0xf001d0)
// Original: glitch::io::IAttribute::getString
// ----------------------------------------------------------------------------
char ** glitch::io::IAttribute::getString(glitch::io::IAttribute::Self *self, int a2)
{
  char *v2;
  int v3;
  char *v4;
  int v5;
  unsigned int v6;
  __m128i v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  char *v21;
  int v22;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int *_g4_t_v31;
  typedef char **_g4_t_v32;
  typedef int _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t _g4_t_v41[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v25)) > _g4_s1 ? (4u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v26)) > _g4_s2 ? (8u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v27)) > _g4_s3 ? (12u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v29)) > _g4_s5 ? (16u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v30)) > _g4_s6 ? (20u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v31)) > _g4_s7 ? (20u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v32)) > _g4_s8 ? (24u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v33)) > _g4_s9 ? (28u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v34)) > _g4_s10 ? (28u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v35)) > _g4_s11 ? (32u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v36)) > _g4_s12 ? (32u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v37)) > _g4_s13 ? (36u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v38)) > _g4_s14 ? (40u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v39)) > _g4_s15 ? (44u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v40)) > _g4_s16 ? (48u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v41)) > _g4_s17 ? (52u + sizeof(_g4_t_v41)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);

  v41[3] = (uint32_t)(uintptr_t)(&self);
  (*(void (**)(uint32_t *, int, int, int, int, int, int, int, glitch::io::IAttribute::Self *, int, int, int, int, int, int))(*(uint32_t *)a2 + 32))(
    v41,
    a2,
    v24,
    v25,
    v26,
    v27,
    v28,
    v30,
    self,
    v33,
    v35,
    v37,
    v38,
    v39,
    v40);
  v2 = (char *)v41[0];
  v3 = v41[0] + 4 * *(uint32_t *)(v41[0] - 12);
  if ( v41[0] == v3 )
  {
    v4 = (char *)(uintptr_t)(byte_20D3E78);
    goto LABEL_10;
  }
  v34 = (4 * *(uint32_t *)(v41[0] - 12)) >> 2;
  v31 = (int *)sub_EA0970(v34, 0);
  v4 = (char *)(v31 + 3);
  v36 = ((unsigned int)(v3 - (uint32_t)(uintptr_t)(v2 + 4)) >> 2) + 1;
  v29 = 16 * (v36 >> 4);
  if ( v29 == 0 || v2 <= &v4[v36] && v4 <= &v2[4 * v36] || v36 <= 0xF )
  {
    v21 = (char *)(v31 + 3);
    do
    {
LABEL_7:
      v22 = *(uint32_t *)v2;
      v2 += 4;
      *v21++ = v22;
    }
    while ( (char *)v3 != v2 );
    goto LABEL_8;
  }
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *(__m128i *)&v2[4 * v5 + 16];
    v8 = *(__m128i *)&v2[4 * v5];
    v9 = _mm_unpacklo_epi16(v8, v7);
    v10 = _mm_unpackhi_epi16(v8, v7);
    v11 = *(__m128i *)&v2[4 * v5 + 48];
    v12 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v9, v10), _mm_unpackhi_epi16(v9, v10));
    v13 = *(__m128i *)&v2[4 * v5 + 32];
    v14 = _mm_unpacklo_epi16(v13, v11);
    v15 = _mm_unpackhi_epi16(v13, v11);
    v16 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v14, v15), _mm_unpackhi_epi16(v14, v15));
    ++v6;
    v17 = _mm_unpackhi_epi8(v12, v16);
    v18 = _mm_unpacklo_epi8(v12, v16);
    v19 = _mm_unpacklo_epi8(v18, v17);
    v20 = _mm_unpackhi_epi8(v18, v17);
    *(__m128i *)&v4[v5] = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v19, v20), _mm_unpackhi_epi8(v19, v20));
    v5 += 16;
  }
  while ( v36 >> 4 > v6 );
  v21 = &v4[v29];
  v2 += 64 * (v36 >> 4);
  if ( v36 != v29 )
    goto LABEL_7;
LABEL_8:
  if ( v31 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    v31[2] = 0;
    *v31 = v34;
    *((uint8_t *)v31 + v34 + 12) = 0;
  }
LABEL_10:
  *v32 = v4;
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v41);
  return v32;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValueSafe  (binary VA: 0xf00390)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueSafe
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValueSafe(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self, const wchar_t *a2)
{
  int v2;
  int v3;
  size_t v4;
  size_t v5;
  size_t n;
  int v7;
  wchar_t *s2[8];

  if ( a2 != nullptr )
  {
    sub_EA31B0(s2, a2);
    v2 = *((uint32_t *)self + 15);
    if ( *((uint32_t *)self + 16) - v2 <= 7 )
    {
LABEL_11:
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)s2);
    }
    else
    {
      v3 = 0;
      while ( 1 )
      {
        v4 = *(uint32_t *)(*(uint32_t *)(v2 + 8 * v3) - 12);
        v5 = *(s2[0] - 3);
        n = v4;
        if ( v5 <= v4 )
          n = *(s2[0] - 3);
        if ( wmemcmp(*(const wchar_t **)(v2 + 8 * v3), s2[0], n) == 0 && v4 == v5 )
          break;
        ++v3;
        v2 = *((uint32_t *)self + 15);
        if ( v3 >= (*((uint32_t *)self + 16) - v2) >> 3 )
          goto LABEL_11;
      }
      v7 = *((uint32_t *)self + 15) + 8 * v3;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)s2);
      if ( v7 != 0 )
        return *(uint32_t *)(v7 + 4);
    }
  }
  return *((uint32_t *)self + 10);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::Destroy  (binary VA: 0xf00470)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::~CXMLReaderImpl
// ----------------------------------------------------------------------------
void glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::Destroy(void **self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v5;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v6;

  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2085628));
  if ( *(self + 2) != nullptr )
    opDeleteArray(*(self + 2));
  v1 = (int)(uintptr_t)(*(self + 16));
  v2 = (int)(uintptr_t)(*(self + 15));
  if ( v1 != v2 )
  {
    do
    {
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v2 + 4));
      v5 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v2;
      v2 += 8;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v5);
    }
    while ( v1 != v2 );
    v2 = (int)(uintptr_t)(*(self + 15));
  }
  if ( v2 != 0 )
    gll_operator_delete_arr(v2);
  v3 = (int)(uintptr_t)(*(self + 13));
  v4 = (int)(uintptr_t)(*(self + 12));
  if ( v3 != v4 )
  {
    do
    {
      v6 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v4;
      v4 += 4;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v6);
    }
    while ( v3 != v4 );
    v4 = (int)(uintptr_t)(*(self + 12));
  }
  if ( v4 != 0 )
    gll_operator_delete_arr(v4);
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(self + 10));
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(self + 9));
  *self = &off_20483C0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::Destroy_eaf00540  (binary VA: 0xf00540)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::~CXMLReaderImpl
// ----------------------------------------------------------------------------
void glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::Destroy_eaf00540(void **self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v5;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v6;

  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2085628));
  if ( *(self + 2) != nullptr )
    opDeleteArray(*(self + 2));
  v1 = (int)(uintptr_t)(*(self + 16));
  v2 = (int)(uintptr_t)(*(self + 15));
  if ( v1 != v2 )
  {
    do
    {
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v2 + 4));
      v5 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v2;
      v2 += 8;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v5);
    }
    while ( v1 != v2 );
    v2 = (int)(uintptr_t)(*(self + 15));
  }
  if ( v2 != 0 )
    gll_operator_delete_arr(v2);
  v3 = (int)(uintptr_t)(*(self + 13));
  v4 = (int)(uintptr_t)(*(self + 12));
  if ( v3 != v4 )
  {
    do
    {
      v6 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v4;
      v4 += 4;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v6);
    }
    while ( v3 != v4 );
    v4 = (int)(uintptr_t)(*(self + 12));
  }
  if ( v4 != 0 )
    gll_operator_delete_arr(v4);
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(self + 10));
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(self + 9));
  *self = &off_20483C0;
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValue  (binary VA: 0xf00610)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValue
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValue(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self, const wchar_t *a2)
{
  int result;
  int v3;
  int v4;
  size_t v5;
  size_t v6;
  size_t n;
  int v8;
  wchar_t *s2[8];

  result = 0;
  if ( a2 != nullptr )
  {
    sub_EA31B0(s2, a2);
    v3 = *((uint32_t *)self + 15);
    if ( *((uint32_t *)self + 16) - v3 <= 7 )
    {
LABEL_12:
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)s2);
      return 0;
    }
    else
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = *(uint32_t *)(*(uint32_t *)(v3 + 8 * v4) - 12);
        v6 = *(s2[0] - 3);
        n = v5;
        if ( v6 <= v5 )
          n = *(s2[0] - 3);
        if ( wmemcmp(*(const wchar_t **)(v3 + 8 * v4), s2[0], n) == 0 && v5 == v6 )
          break;
        ++v4;
        v3 = *((uint32_t *)self + 15);
        if ( v4 >= (*((uint32_t *)self + 16) - v3) >> 3 )
          goto LABEL_12;
      }
      v8 = *((uint32_t *)self + 15) + 8 * v4;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)s2);
      if ( v8 != 0 )
        return *(uint32_t *)(v8 + 4);
      else
        return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLightAttribute::getStringW  (binary VA: 0xf00840)
// Original: glitch::io::CLightAttribute::getStringW
// ----------------------------------------------------------------------------
glitch::io::CLightAttribute::Self * glitch::io::CLightAttribute::getStringW(glitch::io::CLightAttribute::Self *self, int a2)
{
  if ( *(uint32_t *)(a2 + 16) != 0 )
    glitch::core::stringc2stringw(self, "light");
  else
    glitch::core::stringc2stringw(self, (char *)&unk_1B15112);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorAttribute::getStringW  (binary VA: 0xf008b0)
// Original: glitch::io::CColorAttribute::getStringW
// ----------------------------------------------------------------------------
glitch::io::CColorAttribute::Self * glitch::io::CColorAttribute::getStringW(glitch::io::CColorAttribute::Self *self, int a2)
{
  typedef unsigned int _g4_t_v3;
  typedef char _g4_t_s[10];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (10u + sizeof(_g4_t_s)) > _g4_s1 ? (10u + sizeof(_g4_t_s)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 10u);

  (*(void (**)(unsigned int *))(*(uint32_t *)a2 + 24))(&v3);
  sprintf(s, "%02x%02x%02x%02x", HIBYTE(v3), (uint8_t)v3, BYTE1(v3), BYTE2(v3));
  glitch::core::stringc2stringw(self, s);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getStringW  (binary VA: 0xf00950)
// Original: glitch::io::CNumbersAttribute::getStringW
// ----------------------------------------------------------------------------
wchar_t ** glitch::io::CNumbersAttribute::getStringW(wchar_t **self, int a2)
{
  int v2;
  unsigned int v3;
  uint32_t *v4;
  uint32_t *v5;
  wchar_t *v6;
  wchar_t *v7;
  wchar_t *v8;
  wchar_t *v9;
  char *v10;
  uint32_t *v11;
  unsigned int v12;
  wchar_t *v13;
  wchar_t *v14;
  wchar_t *v15;
  wchar_t *v16;
  unsigned int v17;
  wchar_t *v18;
  const wchar_t *v19;
  wchar_t *v20;
  size_t *v22;
  typedef unsigned int _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint8_t *_g4_t_src;
  typedef void *_g4_t_srca;
  typedef size_t *_g4_t_srcb;
  typedef void *_g4_t_srcc;
  typedef wchar_t *_g4_t_s1;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef wchar_t **_g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef size_t _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef uint8_t *_g4_t_nc;
  typedef size_t _g4_t_nd;
  typedef char *_g4_t_v44;
  typedef wchar_t *_g4_t_s2;
  typedef wchar_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef int (**_g4_t_v49)(int);
  typedef uint32_t _g4_t_v50[3];
  typedef uint8_t *_g4_t_v51;
  typedef uint8_t *_g4_t_v52;
  typedef uint8_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef char _g4_t_v55[4];
  typedef int _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef uint32_t _g4_t_v58[29];
  typedef char _g4_t_v59;
  typedef char _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef glitch::io::CNumbersAttribute::Self **_g4_t_v65;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_src)) > _g4_s2 ? (8u + sizeof(_g4_t_src)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_srca)) > _g4_s3 ? (8u + sizeof(_g4_t_srca)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_srcb)) > _g4_s4 ? (8u + sizeof(_g4_t_srcb)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_srcc)) > _g4_s5 ? (8u + sizeof(_g4_t_srcc)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_s1)) > _g4_s6 ? (12u + sizeof(_g4_t_s1)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v30)) > _g4_s7 ? (16u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v31)) > _g4_s8 ? (16u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v32)) > _g4_s9 ? (16u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v33)) > _g4_s10 ? (20u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v34)) > _g4_s11 ? (24u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v35)) > _g4_s12 ? (24u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v36)) > _g4_s13 ? (24u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v37)) > _g4_s14 ? (24u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v38)) > _g4_s15 ? (24u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_n)) > _g4_s16 ? (28u + sizeof(_g4_t_n)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_na)) > _g4_s17 ? (28u + sizeof(_g4_t_na)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_nb)) > _g4_s18 ? (28u + sizeof(_g4_t_nb)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_nc)) > _g4_s19 ? (28u + sizeof(_g4_t_nc)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_nd)) > _g4_s20 ? (28u + sizeof(_g4_t_nd)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v44)) > _g4_s21 ? (44u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_s2)) > _g4_s22 ? (48u + sizeof(_g4_t_s2)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v46)) > _g4_s23 ? (52u + sizeof(_g4_t_v46)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v47)) > _g4_s24 ? (56u + sizeof(_g4_t_v47)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v48)) > _g4_s25 ? (60u + sizeof(_g4_t_v48)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v49)) > _g4_s26 ? (64u + sizeof(_g4_t_v49)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v50)) > _g4_s27 ? (68u + sizeof(_g4_t_v50)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v51)) > _g4_s28 ? (80u + sizeof(_g4_t_v51)) : _g4_s28,
    _g4_s30 = (84u + sizeof(_g4_t_v52)) > _g4_s29 ? (84u + sizeof(_g4_t_v52)) : _g4_s29,
    _g4_s31 = (88u + sizeof(_g4_t_v53)) > _g4_s30 ? (88u + sizeof(_g4_t_v53)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v54)) > _g4_s31 ? (92u + sizeof(_g4_t_v54)) : _g4_s31,
    _g4_s33 = (96u + sizeof(_g4_t_v55)) > _g4_s32 ? (96u + sizeof(_g4_t_v55)) : _g4_s32,
    _g4_s34 = (100u + sizeof(_g4_t_v56)) > _g4_s33 ? (100u + sizeof(_g4_t_v56)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v57)) > _g4_s34 ? (104u + sizeof(_g4_t_v57)) : _g4_s34,
    _g4_s36 = (108u + sizeof(_g4_t_v58)) > _g4_s35 ? (108u + sizeof(_g4_t_v58)) : _g4_s35,
    _g4_s37 = (224u + sizeof(_g4_t_v59)) > _g4_s36 ? (224u + sizeof(_g4_t_v59)) : _g4_s36,
    _g4_s38 = (225u + sizeof(_g4_t_v60)) > _g4_s37 ? (225u + sizeof(_g4_t_v60)) : _g4_s37,
    _g4_s39 = (228u + sizeof(_g4_t_v61)) > _g4_s38 ? (228u + sizeof(_g4_t_v61)) : _g4_s38,
    _g4_s40 = (232u + sizeof(_g4_t_v62)) > _g4_s39 ? (232u + sizeof(_g4_t_v62)) : _g4_s39,
    _g4_s41 = (236u + sizeof(_g4_t_v63)) > _g4_s40 ? (236u + sizeof(_g4_t_v63)) : _g4_s40,
    _g4_s42 = (240u + sizeof(_g4_t_v64)) > _g4_s41 ? (240u + sizeof(_g4_t_v64)) : _g4_s41,
    _g4_s43 = (264u + sizeof(_g4_t_v65)) > _g4_s42 ? (264u + sizeof(_g4_t_v65)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 8u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 8u);
  _g4_t_srcb &srcb = *reinterpret_cast<_g4_t_srcb *>(_g4_sf + 8u);
  _g4_t_srcc &srcc = *reinterpret_cast<_g4_t_srcc *>(_g4_sf + 8u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 28u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 28u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 28u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 28u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 52u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 56u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 224u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 225u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 228u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 232u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 236u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 240u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 264u);

  v65 = (glitch::io::CNumbersAttribute::Self **)&self;
  v33 = self;
  v2 = a2;
  *self = (wchar_t *)&unk_20DF960;
  if ( *(uint32_t *)(v2 + 40) != 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      while ( *(uint8_t *)(v2 + 44) == 0 )
      {
        glitch::core::int2stringw((glitch::core::Self *)&v46, *(uint32_t *)(*(uint32_t *)(v2 + 16) + 4 * v3));
        v13 = v46;
        nb = *(v46 - 3);
        if ( nb != 0 )
        {
          v14 = *v33;
          v31 = *(*v33 - 3);
          v36 = v31 + nb;
          if ( v31 + nb > *(*v33 - 2) || *(v14 - 1) > 0 )
          {
            sub_EA3030(v33, v36);
            v13 = v46;
            v14 = *v33;
            v31 = *(*v33 - 3);
          }
          v15 = &v14[v31];
          if ( nb == 1 )
            *v15 = *v13;
          else
            wmemcpy(v15, v13, nb);
          v16 = *v33;
          if ( *v33 - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
          {
            *(v16 - 1) = 0;
            *(v16 - 3) = v36;
            v16[v36] = 0;
          }
        }
        g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v46);
        v12 = *(uint32_t *)(v2 + 40);
        if ( v12 - 1 > v3 )
          goto LABEL_32;
LABEL_22:
        if ( ++v3 >= v12 )
          return v33;
      }
      sub_1900810(v58);
      v58[28] = 0;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v58[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
      v49 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
      *(uint32_t *)((char *)&v50[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
      sub_19119D0((char *)&v50[-1] + (uint32_t)(uintptr_t)(*(v49 - 3)), 0);
      v50[1] = 0;
      v50[2] = 0;
      v51 = nullptr;
      v52 = nullptr;
      v53 = nullptr;
      v54 = 0;
      v49 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
      v58[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
      v50[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
      sub_1903A70(v55);
      v56 = 16;
      v50[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
      v57 = &dword_213B814;
      sub_19119D0(v58, v50);
      g4_std::ostream::op_shl_double(&v49, COERCE__INT64(*(float *)(*(uint32_t *)(v2 + 28) + 4 * v3)));
      v4 = &dword_213B814;
      v44 = (char *)&dword_213B814;
      if ( v53 == nullptr )
      {
        g4_std::string::assign_str(&v44, &v57);
        goto LABEL_12;
      }
      if ( v53 <= v51 )
        break;
      if ( v53 != v52 )
      {
        if ( v52 == nullptr )
          goto LABEL_68;
        src = v52;
        n = v53 - v52;
        v34 = sub_1938930(v53 - v52, 0);
        v4 = (uint32_t *)(v34 + 12);
        if ( n == 1 )
        {
          *(uint8_t *)(v34 + 12) = *src;
        }
        else
        {
          memcpy(v4, src, n);
          v4 = (uint32_t *)(v34 + 12);
        }
        if ( (uint32_t *)v34 != dword_213B808 )
        {
          *(uint32_t *)(v34 + 8) = 0;
          *(uint32_t *)v34 = n;
          *(uint8_t *)(v34 + n + 12) = 0;
        }
      }
      v48 = v4;
      g4_std::string::assign_str(&v44, &v48);
      v5 = v48 - 3;
      if ( v48 - 3 != dword_213B808 && __sync_fetch_and_add(v48 - 1, 0xFFFFFFFF) <= 0 )
LABEL_53:
        g4_std::string::Rep::M_destroy(v5);
LABEL_12:
      glitch::core::stringc2stringw((glitch::core::Self *)&s2, v44);
      v6 = s2;
      na = *(s2 - 3);
      if ( na != 0 )
      {
        v7 = *v33;
        v30 = *(*v33 - 3);
        v35 = v30 + na;
        if ( v30 + na > *(*v33 - 2) || *(v7 - 1) > 0 )
        {
          sub_EA3030(v33, v35);
          v6 = s2;
          v7 = *v33;
          v30 = *(*v33 - 3);
        }
        v8 = &v7[v30];
        if ( na == 1 )
          *v8 = *v6;
        else
          wmemcpy(v8, v6, na);
        v9 = *v33;
        if ( *v33 - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
        {
          *(v9 - 1) = 0;
          *(v9 - 3) = v35;
          v9[v35] = 0;
        }
      }
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&s2);
      v10 = v44 - 12;
      if ( v44 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v44 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
      }
      v49 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
      v58[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
      v50[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
      v11 = v57 - 3;
      if ( v57 - 3 != dword_213B808 && __sync_fetch_and_add(v57 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v11);
      v50[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
      sub_1902180(v55);
      v49 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
      *(uint32_t *)((char *)&v50[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
      v58[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
      sub_1900B90(v58);
      v12 = *(uint32_t *)(v2 + 40);
      if ( v12 - 1 <= v3 )
        goto LABEL_22;
LABEL_32:
      v17 = wcslen(U", ");
      if ( v17 != 0 )
      {
        v18 = *v33;
        v37 = *(*v33 - 3);
        if ( v17 > 268435454 - v37 )
          sub_1900180("basic_string::append");
        v32 = v17 + v37;
        v23 = *(v18 - 2);
        if ( v17 + v37 <= v23 && *(v18 - 1) <= 0 )
          goto LABEL_71;
        if ( v18 <= (wchar_t *)(uintptr_t)(U", ") )
        {
          s1 = &v18[v37];
          if ( s1 >= (wchar_t *)(uintptr_t)(U", ") )
          {
            nd = U", " - (const char32_t *)(v18);
            if ( v32 != v23 || *(v18 - 1) > 0 )
            {
              srcc = (void *)v17;
              sub_EA3030(v33, v32);
              v17 = (unsigned int)(uintptr_t)(srcc);
              v18 = *v33;
              s1 = &(*v33)[*(*v33 - 3)];
            }
            v19 = &v18[nd];
            if ( v17 == 1 )
            {
LABEL_66:
              *s1 = *v19;
LABEL_41:
              v20 = *v33;
              if ( *v33 - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
              {
                *(v20 - 1) = 0;
                *(v20 - 3) = v32;
                v20[v32] = 0;
              }
              goto LABEL_43;
            }
LABEL_40:
            wmemcpy(s1, v19, v17);
            goto LABEL_41;
          }
        }
        if ( v32 == v23 && *(v18 - 1) <= 0 )
        {
LABEL_71:
          s1 = &v18[v37];
          v19 = (const wchar_t *)(U", ");
        }
        else
        {
          srca = (void *)v17;
          sub_EA3030(v33, v32);
          v17 = (unsigned int)(uintptr_t)(srca);
          v19 = (const wchar_t *)(U", ");
          s1 = &(*v33)[*(*v33 - 3)];
        }
        if ( v17 == 1 )
          goto LABEL_66;
        goto LABEL_40;
      }
LABEL_43:
      if ( ++v3 >= *(uint32_t *)(v2 + 40) )
        return v33;
    }
    nc = v52;
    if ( v51 == v52 )
    {
LABEL_51:
      v47 = v4;
      g4_std::string::assign_str(&v44, &v47);
      v5 = v47 - 3;
      if ( v47 - 3 != dword_213B808 && __sync_fetch_and_add(v47 - 1, 0xFFFFFFFF) <= 0 )
        goto LABEL_53;
      goto LABEL_12;
    }
    if ( v52 != nullptr )
    {
      v38 = v51 - v52;
      v22 = (size_t *)sub_1938930(v51 - v52, 0);
      v4 = (uint32_t *)(v22 + 3);
      if ( v38 == 1 )
      {
        *((uint8_t *)v22 + 12) = *nc;
LABEL_49:
        if ( v22 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v22[2] = 0;
          *v22 = v38;
          *((uint8_t *)v4 + v38) = 0;
        }
        goto LABEL_51;
      }
    }
    else
    {
      if ( v51 != nullptr )
LABEL_68:
        sub_18FFFD0("basic_string::_S_construct null not valid");
      v22 = (size_t *)sub_1938930(0, 0);
      v4 = (uint32_t *)(v22 + 3);
      v38 = 0;
    }
    v24 = v4;
    srcb = v22;
    memcpy(v4, nc, v38);
    v22 = srcb;
    v4 = v24;
    goto LABEL_49;
  }
  return v33;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CFloatAttribute::getStringW  (binary VA: 0xf01360)
// Original: glitch::io::CFloatAttribute::getStringW
// ----------------------------------------------------------------------------
glitch::io::CFloatAttribute::Self * glitch::io::CFloatAttribute::getStringW(glitch::io::CFloatAttribute::Self *self, int a2)
{
  char *v2;
  uint32_t *v3;
  typedef int _g4_t_v5;
  typedef glitch::io::CFloatAttribute::Self *_g4_t_v6;
  typedef char *_g4_t_v7;
  typedef int (**_g4_t_v8)(int);
  typedef uint32_t _g4_t_v9[7];
  typedef uint8_t _g4_t_v10[4];
  typedef int _g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef uint32_t _g4_t_v13[29];
  typedef char _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef glitch::io::CFloatAttribute::Self **_g4_t_v20;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v8)) > _g4_s3 ? (32u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v9)) > _g4_s4 ? (36u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v10)) > _g4_s5 ? (64u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v11)) > _g4_s6 ? (68u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v12)) > _g4_s7 ? (72u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v13)) > _g4_s8 ? (76u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (192u + sizeof(_g4_t_v14)) > _g4_s9 ? (192u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (193u + sizeof(_g4_t_v15)) > _g4_s10 ? (193u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (196u + sizeof(_g4_t_v16)) > _g4_s11 ? (196u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (200u + sizeof(_g4_t_v17)) > _g4_s12 ? (200u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (204u + sizeof(_g4_t_v18)) > _g4_s13 ? (204u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (208u + sizeof(_g4_t_v19)) > _g4_s14 ? (208u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (232u + sizeof(_g4_t_v20)) > _g4_s15 ? (232u + sizeof(_g4_t_v20)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 68u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 72u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 76u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 192u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 193u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 196u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 200u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 204u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 208u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 232u);

  v20 = &self;
  v6 = self;
  v5 = a2;
  sub_1900810(v13);
  v13[28] = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v13[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v9[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0((char *)&v9[-1] + (uint32_t)(uintptr_t)(*(v8 - 3)), 0);
  memset(&v9[1], 0, 24);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v13[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v9[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v10);
  v11 = 16;
  v9[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v12 = &dword_213B814;
  sub_19119D0(v13, v9);
  g4_std::ostream::op_shl_double(&v8, COERCE__INT64(*(float *)(v5 + 16)));
  sub_1931AF0(&v7);
  glitch::core::stringc2stringw(v6, v7);
  v2 = v7 - 12;
  if ( v7 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v7 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v13[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v9[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v3 = v12 - 3;
  if ( v12 - 3 != dword_213B808 && __sync_fetch_and_add(v12 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v9[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v10);
  v8 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v9[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  v13[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v13);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::getStringW  (binary VA: 0xf01640)
// Original: glitch::io::CStringAttribute::getStringW
// ----------------------------------------------------------------------------
glitch::io::CStringAttribute::Self * glitch::io::CStringAttribute::getStringW(glitch::io::CStringAttribute::Self *self, int a2)
{
  char *v2;
  char *v3;
  unsigned int v4;
  size_t v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int v10;
  char *v11;
  int v12;
  unsigned int v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  char *v21;
  int v22;
  int v24;
  unsigned int v25;
  wchar_t *v26;
  int v27;
  int v28;
  wchar_t v29;

  if ( *(uint8_t *)(a2 + 13) == 0 )
  {
    v2 = *(char **)(a2 + 16);
    v3 = &v2[*((uint32_t *)v2 - 3)];
    if ( v2 == v3 )
    {
      v11 = (char *)&unk_20DF960;
LABEL_17:
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v11);
      return self;
    }
    v4 = *((uint32_t *)v2 - 3);
    v29 = v4;
    if ( v4 > 0xFFFFFFE )
      sub_1900180("basic_string::_S_create");
    v5 = 4 * v4 + 16;
    v6 = 4 * v4 + 32;
    if ( v6 > 0x1000 && v29 != 0 )
    {
      v7 = 4096 - (v6 & 0xFFF);
      v8 = 268435454;
      v9 = v29 + (v7 >> 2);
      if ( v9 <= 0xFFFFFFE )
        v8 = v9;
      v5 = 4 * v8 + 16;
    }
    else
    {
      v8 = *((uint32_t *)v2 - 3);
    }
    v24 = v8;
    v10 = sub_4EBDC0(v5);
    *(uint32_t *)(v10 + 4) = v24;
    v27 = v3 - v2;
    v11 = (char *)(v10 + 12);
    v25 = (unsigned int)(v3 - v2) >> 4;
    v26 = (wchar_t *)v10;
    *(uint32_t *)(v10 + 8) = 0;
    v28 = 16 * v25;
    if ( 16 * v25 != 0 && (unsigned int)(v3 - v2) > 0xF && (v11 > v3 || v2 > &v11[4 * (v3 - v2)]) )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = *(__m128i *)&v2[v12];
        v15 = _mm_cmpgt_epi8(g4_m128_from<__m128i>(0LL), v14);
        ++v13;
        v16 = _mm_unpacklo_epi8(v14, v15);
        v17 = _mm_unpackhi_epi8(v14, v15);
        v18 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v16);
        v19 = _mm_unpacklo_epi16(v16, v18);
        *(__m128i *)&v11[4 * v12 + 16] = _mm_unpackhi_epi16(v16, v18);
        v20 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v17);
        *(__m128i *)&v11[4 * v12] = v19;
        *(__m128i *)&v11[4 * v12 + 32] = _mm_unpacklo_epi16(v17, v20);
        *(__m128i *)&v11[4 * v12 + 48] = _mm_unpackhi_epi16(v17, v20);
        v12 += 16;
      }
      while ( v25 > v13 );
      v2 += v28;
      v21 = &v11[64 * v25];
      if ( v27 == v28 )
        goto LABEL_15;
    }
    else
    {
      v21 = (char *)(v10 + 12);
    }
    do
    {
      v22 = *v2++;
      *(uint32_t *)v21 = v22;
      v21 += 4;
    }
    while ( v3 != v2 );
LABEL_15:
    if ( v26 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
    {
      v26[2] = 0;
      *v26 = v29;
      *(uint32_t *)&v11[4 * v29] = 0;
    }
    goto LABEL_17;
  }
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
    self,
    (const wchar_t **)(a2 + 20));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringWArrayAttribute::getArray  (binary VA: 0xf01870)
// Original: glitch::io::CStringWArrayAttribute::getArray
// ----------------------------------------------------------------------------
glitch::io::CStringWArrayAttribute::Self * glitch::io::CStringWArrayAttribute::getArray(glitch::io::CStringWArrayAttribute::Self *self, int a2)
{
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v2;
  int v3;
  int v4;
  const wchar_t **v5;
  const wchar_t **i;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v8;

  v2 = nullptr;
  v3 = 0;
  v4 = (*(uint32_t *)(a2 + 20) - *(uint32_t *)(a2 + 16)) >> 2;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  if ( v4 != 0 )
  {
    v3 = 4 * v4;
    v2 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)sub_4EBDC0(4 * v4);
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v2);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v2);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)((char *)v2 + v3);
  v5 = *(const wchar_t ***)(a2 + 20);
  for ( i = *(const wchar_t ***)(a2 + 16);
        v5 != i;
        v2 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v2 + 4) )
  {
    if ( v2 != nullptr )
    {
      v8 = v2;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
        v2,
        i);
      v2 = v8;
    }
    ++i;
  }
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::Destroy  (binary VA: 0xf01920)
// Original: glitch::io::IAttribute::~IAttribute
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::Destroy(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::IAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTextureAttribute::getString  (binary VA: 0xf01970)
// Original: glitch::io::CTextureAttribute::getString
// ----------------------------------------------------------------------------
void glitch::io::CTextureAttribute::getString(glitch::io::CTextureAttribute::Self *self, char *dest)
{
  typedef char *_g4_t_src;
  enum : size_t {
    _g4_s0 = 80u,
    _g4_s1 = (0u + sizeof(_g4_t_src)) > _g4_s0 ? (0u + sizeof(_g4_t_src)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 0u);

  if ( *((uint32_t *)self + 4) != 0 )
  {
    (*(void (**)(char **))(*(uint32_t *)self + 28))(&src);
    strcpy(dest, src);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&src);
  }
  else
  {
    *dest = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::getBool  (binary VA: 0xf01ad0)
// Original: glitch::io::CStringAttribute::getBool
// ----------------------------------------------------------------------------
bool glitch::io::CStringAttribute::getBool(const char **self)
{
  const char *v2;
  int v3;
  char *v4;
  const char *v5;
  int v6;
  unsigned int v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  char *v22;
  int v23;
  typedef bool _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int *_g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef const char *_g4_t_v29;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v25)) > _g4_s1 ? (16u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v26)) > _g4_s2 ? (20u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v27)) > _g4_s3 ? (24u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v28)) > _g4_s4 ? (28u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v29)) > _g4_s5 ? (48u + sizeof(_g4_t_v29)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);

  if ( *((uint8_t *)self + 13) == 0 )
    return strcasecmp(*(self + 4), "true") == 0;
  v2 = *(self + 5);
  v3 = *((uint32_t *)v2 - 3);
  v4 = (char *)&v2[4 * v3];
  if ( v2 != v4 )
  {
    v27 = (4 * v3) >> 2;
    v26 = (int *)sub_EA0970(v27, 0);
    v5 = (const char *)(v26 + 3);
    v28 = ((unsigned int)(v4 - (v2 + 4)) >> 2) + 1;
    v25 = 16 * (v28 >> 4);
    if ( v25 != 0 && (v2 > &v5[v28] || v5 > &v2[4 * v28]) && v28 > 0xF )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = *(__m128i *)&v2[4 * v6 + 16];
        v9 = *(__m128i *)&v2[4 * v6];
        v10 = _mm_unpacklo_epi16(v9, v8);
        v11 = _mm_unpackhi_epi16(v9, v8);
        v12 = *(__m128i *)&v2[4 * v6 + 48];
        v13 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v10, v11), _mm_unpackhi_epi16(v10, v11));
        v14 = *(__m128i *)&v2[4 * v6 + 32];
        v15 = _mm_unpacklo_epi16(v14, v12);
        v16 = _mm_unpackhi_epi16(v14, v12);
        v17 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v15, v16), _mm_unpackhi_epi16(v15, v16));
        ++v7;
        v18 = _mm_unpackhi_epi8(v13, v17);
        v19 = _mm_unpacklo_epi8(v13, v17);
        v20 = _mm_unpacklo_epi8(v19, v18);
        v21 = _mm_unpackhi_epi8(v19, v18);
        *(__m128i *)&v5[v6] = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v20, v21), _mm_unpackhi_epi8(v20, v21));
        v6 += 16;
      }
      while ( v28 >> 4 > v7 );
      v2 += 64 * (v28 >> 4);
      v22 = (char *)&v5[v25];
      if ( v28 == v25 )
        goto LABEL_10;
    }
    else
    {
      v22 = (char *)(v26 + 3);
    }
    do
    {
      v23 = *(uint32_t *)v2;
      v2 += 4;
      *v22++ = v23;
    }
    while ( v4 != v2 );
LABEL_10:
    if ( v26 != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      v26[2] = 0;
      *v26 = v27;
      *((uint8_t *)v26 + v27 + 12) = 0;
    }
    goto LABEL_12;
  }
  v5 = (const char *)(uintptr_t)(byte_20D3E78);
LABEL_12:
  v29 = v5;
  v24 = strcasecmp(v5, "true") == 0;
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v29);
  return v24;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::getFloat  (binary VA: 0xf01cc0)
// Original: glitch::io::CStringAttribute::getFloat
// ----------------------------------------------------------------------------
long double glitch::io::CStringAttribute::getFloat(glitch::core::Self **self)
{
  char *v2;
  int v3;
  char *v4;
  glitch::core::Self *v5;
  int v6;
  unsigned int v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  uint8_t *v22;
  int v23;
  typedef float _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int *_g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef float _g4_t_v29;
  typedef glitch::core::Self *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v25)) > _g4_s1 ? (36u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v26)) > _g4_s2 ? (40u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v27)) > _g4_s3 ? (44u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v28)) > _g4_s4 ? (48u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v29)) > _g4_s5 ? (64u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v30)) > _g4_s6 ? (68u + sizeof(_g4_t_v30)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);

  if ( *((uint8_t *)self + 13) == 0 )
  {
    glitch::core::fast_atof_move(*(self + 4), (char *)&v29);
    return v29;
  }
  v2 = (char *)*(self + 5);
  v3 = *((uint32_t *)v2 - 3);
  v4 = &v2[4 * v3];
  if ( v2 != v4 )
  {
    v27 = (4 * v3) >> 2;
    v26 = (int *)sub_EA0970(v27, 0);
    v5 = (glitch::core::Self *)(v26 + 3);
    v28 = ((unsigned int)(v4 - (v2 + 4)) >> 2) + 1;
    v25 = 16 * (v28 >> 4);
    if ( v25 != 0 && (v2 > (char *)v5 + v28 || v5 > (glitch::core::Self *)&v2[4 * v28]) && v28 > 0xF )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = *(__m128i *)&v2[4 * v6 + 16];
        v9 = *(__m128i *)&v2[4 * v6];
        v10 = _mm_unpacklo_epi16(v9, v8);
        v11 = _mm_unpackhi_epi16(v9, v8);
        v12 = *(__m128i *)&v2[4 * v6 + 48];
        v13 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v10, v11), _mm_unpackhi_epi16(v10, v11));
        v14 = *(__m128i *)&v2[4 * v6 + 32];
        v15 = _mm_unpacklo_epi16(v14, v12);
        v16 = _mm_unpackhi_epi16(v14, v12);
        v17 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v15, v16), _mm_unpackhi_epi16(v15, v16));
        ++v7;
        v18 = _mm_unpackhi_epi8(v13, v17);
        v19 = _mm_unpacklo_epi8(v13, v17);
        v20 = _mm_unpacklo_epi8(v19, v18);
        v21 = _mm_unpackhi_epi8(v19, v18);
        *(__m128i *)((char *)v5 + v6) = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v20, v21), _mm_unpackhi_epi8(v20, v21));
        v6 += 16;
      }
      while ( v28 >> 4 > v7 );
      v2 += 64 * (v28 >> 4);
      v22 = (uint8_t *)((char *)v5 + v25);
      if ( v28 == v25 )
        goto LABEL_10;
    }
    else
    {
      v22 = (uint8_t *)(v26 + 3);
    }
    do
    {
      v23 = *(uint32_t *)v2;
      v2 += 4;
      *v22++ = v23;
    }
    while ( v4 != v2 );
LABEL_10:
    if ( v26 != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      v26[2] = 0;
      *v26 = v27;
      *((uint8_t *)v26 + v27 + 12) = 0;
    }
    goto LABEL_12;
  }
  v5 = (glitch::core::Self *)byte_20D3E78;
LABEL_12:
  v30 = v5;
  glitch::core::fast_atof_move(v5, (char *)&v29);
  v24 = v29;
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v30);
  return v24;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::getInt  (binary VA: 0xf01ea0)
// Original: glitch::io::CStringAttribute::getInt
// ----------------------------------------------------------------------------
int glitch::io::CStringAttribute::getInt(const char **self)
{
  const char *v2;
  int v3;
  char *v4;
  const char *v5;
  int v6;
  unsigned int v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  char *v22;
  int v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int *_g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef const char *_g4_t_v29;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v25)) > _g4_s1 ? (16u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v26)) > _g4_s2 ? (20u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v27)) > _g4_s3 ? (24u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v28)) > _g4_s4 ? (28u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v29)) > _g4_s5 ? (48u + sizeof(_g4_t_v29)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);

  if ( *((uint8_t *)self + 13) == 0 )
    return atoi(*(self + 4));
  v2 = *(self + 5);
  v3 = *((uint32_t *)v2 - 3);
  v4 = (char *)&v2[4 * v3];
  if ( v2 != v4 )
  {
    v27 = (4 * v3) >> 2;
    v26 = (int *)sub_EA0970(v27, 0);
    v5 = (const char *)(v26 + 3);
    v28 = ((unsigned int)(v4 - (v2 + 4)) >> 2) + 1;
    v25 = 16 * (v28 >> 4);
    if ( v25 != 0 && (v2 > &v5[v28] || v5 > &v2[4 * v28]) && v28 > 0xF )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        v8 = *(__m128i *)&v2[4 * v6 + 16];
        v9 = *(__m128i *)&v2[4 * v6];
        v10 = _mm_unpacklo_epi16(v9, v8);
        v11 = _mm_unpackhi_epi16(v9, v8);
        v12 = *(__m128i *)&v2[4 * v6 + 48];
        v13 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v10, v11), _mm_unpackhi_epi16(v10, v11));
        v14 = *(__m128i *)&v2[4 * v6 + 32];
        v15 = _mm_unpacklo_epi16(v14, v12);
        v16 = _mm_unpackhi_epi16(v14, v12);
        v17 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v15, v16), _mm_unpackhi_epi16(v15, v16));
        ++v7;
        v18 = _mm_unpackhi_epi8(v13, v17);
        v19 = _mm_unpacklo_epi8(v13, v17);
        v20 = _mm_unpacklo_epi8(v19, v18);
        v21 = _mm_unpackhi_epi8(v19, v18);
        *(__m128i *)&v5[v6] = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v20, v21), _mm_unpackhi_epi8(v20, v21));
        v6 += 16;
      }
      while ( v28 >> 4 > v7 );
      v2 += 64 * (v28 >> 4);
      v22 = (char *)&v5[v25];
      if ( v28 == v25 )
        goto LABEL_10;
    }
    else
    {
      v22 = (char *)(v26 + 3);
    }
    do
    {
      v23 = *(uint32_t *)v2;
      v2 += 4;
      *v22++ = v23;
    }
    while ( v4 != v2 );
LABEL_10:
    if ( v26 != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      v26[2] = 0;
      *v26 = v27;
      *((uint8_t *)v26 + v27 + 12) = 0;
    }
    goto LABEL_12;
  }
  v5 = (const char *)(uintptr_t)(byte_20D3E78);
LABEL_12:
  v29 = v5;
  v24 = atoi(v5);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v29);
  return v24;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValueAsFloat  (binary VA: 0xf02070)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueAsFloat
// ----------------------------------------------------------------------------
long double glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValueAsFloat(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self, int a2)
{
  const char *v2;
  long double result; // fst7
  typedef float _g4_t_v4;
  typedef glitch::core::Self *_g4_t_v5;
  typedef char _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v5)) > _g4_s1 ? (24u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  v2 = (const char *)G4_VCALL<int>(self, 32, a2);
  result = 0.0;
  if ( v2 != nullptr )
  {
    sub_EA19F0((char **)&v5, v2);
    glitch::core::fast_atof_move(v5, v6);
    v4 = *(float *)v6;
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v5);
    return v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTextureAttribute::setString  (binary VA: 0xf020e0)
// Original: glitch::io::CTextureAttribute::setString
// ----------------------------------------------------------------------------
int glitch::io::CTextureAttribute::setString(char ***self, const char *a2)
{
  glitch::io::CTextureAttribute::Self *v2;
  int v4;
  int v5;
  typedef char **_g4_t_v6;
  typedef int _g4_t_v7;
  typedef char *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v8)) > _g4_s2 ? (20u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v9)) > _g4_s3 ? (24u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v10)) > _g4_s4 ? (28u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v10[3] = (int)(uintptr_t)(&self);
  v2 = (glitch::io::CTextureAttribute::Self *)self;
  v7 = 0;
  if ( a2 != nullptr && *a2 != 0 )
  {
    v6 = *(self + 5);
    sub_EA19F0(&v8, a2);
    glitch::io::fromString((glitch::io::Self *)&v9, (const void **)&v8, v6);
    v4 = 0;
    v10[0] = v9;
    if ( v9 != 0 )
    {
      sub_8B1B00((volatile int32_t *)(v9 + 4));
      v4 = v10[0];
    }
    v5 = v7;
    v7 = v4;
    v10[0] = v5;
    sub_5ED480(v10);
    sub_5ED480(&v9);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v8);
  }
  G4_VCALL<void>(v2, 260, &v7);
  return sub_5ED480(&v7);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getString  (binary VA: 0xf021c0)
// Original: glitch::io::CNumbersAttribute::getString
// ----------------------------------------------------------------------------
volatile int32_t ** glitch::io::CNumbersAttribute::getString(volatile int32_t **self, int a2)
{
  int v2;
  unsigned int v3;
  uint32_t *v4;
  uint32_t *v5;
  char *v6;
  volatile int32_t *v7;
  char *v8;
  volatile int32_t *v9;
  uint32_t *v10;
  unsigned int v11;
  size_t v13;
  volatile int32_t *v14;
  volatile int32_t *v15;
  int v16;
  const char *v17;
  volatile int32_t *v18;
  size_t *v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint8_t *_g4_t_src;
  typedef char *_g4_t_srca;
  typedef void *_g4_t_srcb;
  typedef void *_g4_t_srcc;
  typedef size_t *_g4_t_srcd;
  typedef void *_g4_t_srce;
  typedef void *_g4_t_v27;
  typedef uint8_t *_g4_t_v28;
  typedef uint16_t *_g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef volatile int32_t *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef volatile int32_t **_g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef size_t _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef size_t _g4_t_n;
  typedef unsigned int _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef uint8_t *_g4_t_nd;
  typedef char *_g4_t_s;
  typedef uint8_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef int (**_g4_t_v49)(int);
  typedef uint32_t _g4_t_v50[3];
  typedef uint8_t *_g4_t_v51;
  typedef uint8_t *_g4_t_v52;
  typedef uint8_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef char _g4_t_v55[4];
  typedef int _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef uint32_t _g4_t_v58[29];
  typedef char _g4_t_v59;
  typedef char _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef glitch::io::CNumbersAttribute::Self **_g4_t_v65;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_src)) > _g4_s1 ? (4u + sizeof(_g4_t_src)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_srca)) > _g4_s2 ? (4u + sizeof(_g4_t_srca)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_srcb)) > _g4_s3 ? (4u + sizeof(_g4_t_srcb)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_srcc)) > _g4_s4 ? (4u + sizeof(_g4_t_srcc)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_srcd)) > _g4_s5 ? (4u + sizeof(_g4_t_srcd)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_srce)) > _g4_s6 ? (4u + sizeof(_g4_t_srce)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v27)) > _g4_s7 ? (8u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v28)) > _g4_s8 ? (8u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v29)) > _g4_s9 ? (8u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v30)) > _g4_s10 ? (12u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v31)) > _g4_s11 ? (12u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v32)) > _g4_s12 ? (12u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v33)) > _g4_s13 ? (16u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v34)) > _g4_s14 ? (20u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v35)) > _g4_s15 ? (20u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v36)) > _g4_s16 ? (20u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v37)) > _g4_s17 ? (20u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (20u + sizeof(_g4_t_v38)) > _g4_s18 ? (20u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (20u + sizeof(_g4_t_v39)) > _g4_s19 ? (20u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (24u + sizeof(_g4_t_n)) > _g4_s20 ? (24u + sizeof(_g4_t_n)) : _g4_s20,
    _g4_s22 = (24u + sizeof(_g4_t_na)) > _g4_s21 ? (24u + sizeof(_g4_t_na)) : _g4_s21,
    _g4_s23 = (24u + sizeof(_g4_t_nb)) > _g4_s22 ? (24u + sizeof(_g4_t_nb)) : _g4_s22,
    _g4_s24 = (24u + sizeof(_g4_t_nc)) > _g4_s23 ? (24u + sizeof(_g4_t_nc)) : _g4_s23,
    _g4_s25 = (24u + sizeof(_g4_t_nd)) > _g4_s24 ? (24u + sizeof(_g4_t_nd)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_s)) > _g4_s25 ? (44u + sizeof(_g4_t_s)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v46)) > _g4_s26 ? (48u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v47)) > _g4_s27 ? (52u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v48)) > _g4_s28 ? (56u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v49)) > _g4_s29 ? (60u + sizeof(_g4_t_v49)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v50)) > _g4_s30 ? (64u + sizeof(_g4_t_v50)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v51)) > _g4_s31 ? (76u + sizeof(_g4_t_v51)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v52)) > _g4_s32 ? (80u + sizeof(_g4_t_v52)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v53)) > _g4_s33 ? (84u + sizeof(_g4_t_v53)) : _g4_s33,
    _g4_s35 = (88u + sizeof(_g4_t_v54)) > _g4_s34 ? (88u + sizeof(_g4_t_v54)) : _g4_s34,
    _g4_s36 = (92u + sizeof(_g4_t_v55)) > _g4_s35 ? (92u + sizeof(_g4_t_v55)) : _g4_s35,
    _g4_s37 = (96u + sizeof(_g4_t_v56)) > _g4_s36 ? (96u + sizeof(_g4_t_v56)) : _g4_s36,
    _g4_s38 = (100u + sizeof(_g4_t_v57)) > _g4_s37 ? (100u + sizeof(_g4_t_v57)) : _g4_s37,
    _g4_s39 = (104u + sizeof(_g4_t_v58)) > _g4_s38 ? (104u + sizeof(_g4_t_v58)) : _g4_s38,
    _g4_s40 = (220u + sizeof(_g4_t_v59)) > _g4_s39 ? (220u + sizeof(_g4_t_v59)) : _g4_s39,
    _g4_s41 = (221u + sizeof(_g4_t_v60)) > _g4_s40 ? (221u + sizeof(_g4_t_v60)) : _g4_s40,
    _g4_s42 = (224u + sizeof(_g4_t_v61)) > _g4_s41 ? (224u + sizeof(_g4_t_v61)) : _g4_s41,
    _g4_s43 = (228u + sizeof(_g4_t_v62)) > _g4_s42 ? (228u + sizeof(_g4_t_v62)) : _g4_s42,
    _g4_s44 = (232u + sizeof(_g4_t_v63)) > _g4_s43 ? (232u + sizeof(_g4_t_v63)) : _g4_s43,
    _g4_s45 = (236u + sizeof(_g4_t_v64)) > _g4_s44 ? (236u + sizeof(_g4_t_v64)) : _g4_s44,
    _g4_s46 = (260u + sizeof(_g4_t_v65)) > _g4_s45 ? (260u + sizeof(_g4_t_v65)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 4u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 4u);
  _g4_t_srcb &srcb = *reinterpret_cast<_g4_t_srcb *>(_g4_sf + 4u);
  _g4_t_srcc &srcc = *reinterpret_cast<_g4_t_srcc *>(_g4_sf + 4u);
  _g4_t_srcd &srcd = *reinterpret_cast<_g4_t_srcd *>(_g4_sf + 4u);
  _g4_t_srce &srce = *reinterpret_cast<_g4_t_srce *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 24u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 24u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 24u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 24u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 24u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 84u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 88u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 96u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 100u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 104u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 220u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 221u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 224u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 228u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 232u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 236u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 260u);

  v65 = (glitch::io::CNumbersAttribute::Self **)&self;
  v33 = self;
  v2 = a2;
  *self = (volatile int32_t *)byte_20D3E78;
  if ( *(uint32_t *)(v2 + 40) != 0 )
  {
    v3 = 0;
    while ( *(uint8_t *)(v2 + 44) == 0 )
    {
      glitch::core::int2stringc((glitch::core::Self *)&v46, *(uint32_t *)(*(uint32_t *)(v2 + 16) + 4 * v3));
      v28 = v46;
      v13 = *((uint32_t *)v46 - 3);
      if ( v13 != 0 )
      {
        v31 = *v33;
        nb = *((uint32_t *)*v33 - 3);
        v36 = v13 + nb;
        if ( v13 + nb > *((uint32_t *)*v33 - 2) || *((int *)*v33 - 1) > 0 )
        {
          srcb = *((void **)v46 - 3);
          sub_EA1BB0(v33, v36);
          v13 = (size_t)srcb;
          v28 = v46;
          v31 = *v33;
          nb = *((uint32_t *)*v33 - 3);
        }
        if ( v13 == 1 )
          *((uint8_t *)v31 + nb) = *v28;
        else
          memcpy((char *)v31 + nb, v28, v13);
        v14 = *v33;
        if ( *v33 - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
        {
          *((uint32_t *)v14 - 1) = 0;
          *((uint32_t *)v14 - 3) = v36;
          *((uint8_t *)v14 + v36) = 0;
        }
      }
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v46);
      v11 = *(uint32_t *)(v2 + 40);
      if ( v11 - 1 > v3 )
      {
LABEL_39:
        v15 = *v33;
        v16 = *((uint32_t *)*v33 - 3);
        if ( v16 == 1073741820 || v16 == 1073741819 )
LABEL_87:
          sub_1900180("basic_string::append");
        nc = v16 + 2;
        v37 = *((uint32_t *)v15 - 2);
        if ( v16 + 2 <= v37 && *((int *)v15 - 1) <= 0 )
        {
          v29 = (uint16_t *)((char *)v15 + v16);
          v17 = ", ";
        }
        else if ( v15 > (volatile int32_t *)", "
               || (v29 = (uint16_t *)((char *)v15 + v16), (char *)v15 + v16 < ", ") )
        {
          if ( nc == v37 && *((int *)v15 - 1) <= 0 )
          {
            v29 = (uint16_t *)((char *)v15 + v16);
            v17 = ", ";
          }
          else
          {
            srcc = *((void **)*v33 - 3);
            sub_EA1BB0(v33, nc);
            v16 = (int)(uintptr_t)(srcc);
            v29 = (uint16_t *)((char *)*v33 + *((uint32_t *)*v33 - 3));
            v17 = ", ";
          }
        }
        else
        {
          v32 = (char *)(", " - (char *)v15);
          if ( nc != v37 || *((int *)v15 - 1) > 0 )
          {
            srce = *((void **)*v33 - 3);
            sub_EA1BB0(v33, nc);
            v16 = (int)(uintptr_t)(srce);
            v15 = *v33;
            v29 = (uint16_t *)((char *)*v33 + *((uint32_t *)*v33 - 3));
          }
          v17 = (char *)v15 + (uint32_t)(uintptr_t)(v32);
        }
        *v29 = *(uint16_t *)v17;
        v18 = *v33;
        if ( *v33 - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
        {
          *((uint32_t *)v18 - 1) = 0;
          *((uint32_t *)v18 - 3) = nc;
          *((uint8_t *)v18 + v16 + 2) = 0;
        }
        v11 = *(uint32_t *)(v2 + 40);
      }
LABEL_29:
      if ( ++v3 >= v11 )
        return v33;
    }
    sub_1900810(v58);
    v58[28] = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v58[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v49 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(uint32_t *)((char *)&v50[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
    sub_19119D0((char *)&v50[-1] + (uint32_t)(uintptr_t)(*(v49 - 3)), 0);
    v50[1] = 0;
    v50[2] = 0;
    v51 = nullptr;
    v52 = nullptr;
    v53 = nullptr;
    v54 = 0;
    v49 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v58[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v50[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v55);
    v56 = 16;
    v50[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v57 = &dword_213B814;
    sub_19119D0(v58, v50);
    g4_std::ostream::op_shl_double(&v49, COERCE__INT64(*(float *)(*(uint32_t *)(v2 + 28) + 4 * v3)));
    v4 = &dword_213B814;
    s = (char *)&dword_213B814;
    if ( v53 == nullptr )
    {
      g4_std::string::assign_str(&s, &v57);
      goto LABEL_13;
    }
    if ( v53 > v51 )
    {
      if ( v53 != v52 )
      {
        if ( v52 == nullptr )
          goto LABEL_73;
        src = v52;
        n = v53 - v52;
        v34 = sub_1938930(v53 - v52, 0);
        v4 = (uint32_t *)(v34 + 12);
        if ( n == 1 )
        {
          *(uint8_t *)(v34 + 12) = *src;
        }
        else
        {
          memcpy(v4, src, n);
          v4 = (uint32_t *)(v34 + 12);
        }
        if ( (uint32_t *)v34 != dword_213B808 )
        {
          *(uint32_t *)(v34 + 8) = 0;
          *(uint32_t *)v34 = n;
          *(uint8_t *)(v34 + n + 12) = 0;
        }
      }
      v48 = v4;
      g4_std::string::assign_str(&s, &v48);
      v5 = v48 - 3;
      if ( v48 - 3 != dword_213B808 && __sync_fetch_and_add(v48 - 1, 0xFFFFFFFF) <= 0 )
LABEL_56:
        g4_std::string::Rep::M_destroy(v5);
LABEL_13:
      srca = s;
      na = strlen(s);
      v6 = srca;
      if ( na == 0 )
        goto LABEL_26;
      v7 = *v33;
      v35 = *((uint32_t *)*v33 - 3);
      if ( na > 1073741820 - v35 )
        goto LABEL_87;
      v30 = v35 + na;
      v27 = *((void **)v7 - 2);
      if ( v35 + na <= (unsigned int)(uintptr_t)(v27) && *((int *)v7 - 1) <= 0 )
        goto LABEL_71;
      if ( srca >= (char *)v7 )
      {
        v8 = (char *)v7 + v35;
        if ( srca <= (char *)v7 + v35 )
        {
          v39 = srca - (char *)v7;
          if ( (void *)v30 != v27 || *((int *)v7 - 1) > 0 )
          {
            sub_EA1BB0(v33, v30);
            v7 = *v33;
            v8 = (char *)*v33 + *((uint32_t *)*v33 - 3);
          }
          v6 = (char *)v7 + v39;
          goto LABEL_21;
        }
      }
      if ( (void *)v30 == v27 && *((int *)v7 - 1) <= 0 )
      {
LABEL_71:
        v8 = (char *)v7 + v35;
      }
      else
      {
        sub_EA1BB0(v33, v30);
        v6 = srca;
        v8 = (char *)*v33 + *((uint32_t *)*v33 - 3);
      }
LABEL_21:
      if ( na == 1 )
        *v8 = *v6;
      else
        memcpy(v8, v6, na);
      v9 = *v33;
      if ( *v33 - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
      {
        *((uint32_t *)v9 - 1) = 0;
        *((uint32_t *)v9 - 3) = v30;
        *((uint8_t *)v9 + v30) = 0;
      }
      v6 = s;
LABEL_26:
      if ( v6 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v6 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v6 - 12);
      v49 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
      v58[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
      v50[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
      v10 = v57 - 3;
      if ( v57 - 3 != dword_213B808 && __sync_fetch_and_add(v57 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v10);
      v50[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
      sub_1902180(v55);
      v49 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
      *(uint32_t *)((char *)&v50[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
      v58[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
      sub_1900B90(v58);
      v11 = *(uint32_t *)(v2 + 40);
      if ( v11 - 1 > v3 )
        goto LABEL_39;
      goto LABEL_29;
    }
    nd = v52;
    if ( v51 == v52 )
    {
LABEL_54:
      v47 = v4;
      g4_std::string::assign_str(&s, &v47);
      v5 = v47 - 3;
      if ( v47 - 3 == dword_213B808 || __sync_fetch_and_add(v47 - 1, 0xFFFFFFFF) > 0 )
        goto LABEL_13;
      goto LABEL_56;
    }
    if ( v52 != nullptr )
    {
      v38 = v51 - v52;
      v19 = (size_t *)sub_1938930(v51 - v52, 0);
      v4 = (uint32_t *)(v19 + 3);
      if ( v38 == 1 )
      {
        *((uint8_t *)v19 + 12) = *nd;
LABEL_52:
        if ( v19 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v19[2] = 0;
          *v19 = v38;
          *((uint8_t *)v4 + v38) = 0;
        }
        goto LABEL_54;
      }
    }
    else
    {
      if ( v51 != nullptr )
LABEL_73:
        sub_18FFFD0("basic_string::_S_construct null not valid");
      v19 = (size_t *)sub_1938930(0, 0);
      v4 = (uint32_t *)(v19 + 3);
      v38 = 0;
    }
    v20 = v4;
    srcd = v19;
    memcpy(v4, nd, v38);
    v19 = srcd;
    v4 = v20;
    goto LABEL_52;
  }
  return v33;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTextureAttribute::getStringW  (binary VA: 0xf02c20)
// Original: glitch::io::CTextureAttribute::getStringW
// ----------------------------------------------------------------------------
glitch::core::Self * glitch::io::CTextureAttribute::getStringW(glitch::io::CTextureAttribute::Self *self, uint32_t *a2)
{
  char *v2;
  unsigned int v3;
  unsigned int v4;
  size_t v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int v10;
  uint32_t *v11;
  int v12;
  unsigned int v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  uint32_t *v21;
  int v22;
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef wchar_t *_g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef wchar_t _g4_t_v29;
  typedef glitch::core::Self *_g4_t_v30;
  typedef uint32_t _g4_t_v31[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v25)) > _g4_s1 ? (8u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v26)) > _g4_s2 ? (12u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v27)) > _g4_s3 ? (16u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v28)) > _g4_s4 ? (20u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v29)) > _g4_s5 ? (24u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v30)) > _g4_s6 ? (28u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v31)) > _g4_s7 ? (44u + sizeof(_g4_t_v31)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);

  v31[3] = (uint32_t)(uintptr_t)(&self);
  v30 = (glitch::core::Self *)(self);
  if ( a2[4] == 0 )
  {
    glitch::core::stringc2stringw(self, (char *)&unk_1B15112);
    return v30;
  }
  (*(void (**)(uint32_t *))(*a2 + 28))(v31);
  v2 = (char *)v31[0];
  v3 = v31[0] + *(uint32_t *)(v31[0] - 12);
  if ( v31[0] != v3 )
  {
    v4 = *(uint32_t *)(v31[0] - 12);
    v29 = v4;
    if ( v4 > 0xFFFFFFE )
      sub_1900180("basic_string::_S_create");
    v5 = 4 * v4 + 16;
    v6 = 4 * v4 + 32;
    if ( v6 > 0x1000 && v4 != 0 )
    {
      v7 = 4096 - (v6 & 0xFFF);
      v8 = 268435454;
      v9 = v4 + (v7 >> 2);
      if ( v9 <= 0xFFFFFFE )
        v8 = v9;
      v5 = 4 * v8 + 16;
    }
    else
    {
      v8 = *(uint32_t *)(v31[0] - 12);
    }
    v24 = v8;
    v10 = sub_4EBDC0(v5);
    *(uint32_t *)(v10 + 4) = v24;
    v27 = v3 - (uint32_t)(uintptr_t)(v2);
    v11 = (uint32_t *)(v10 + 12);
    v25 = (v3 - (unsigned int)(uintptr_t)(v2)) >> 4;
    v26 = (wchar_t *)v10;
    *(uint32_t *)(v10 + 8) = 0;
    v28 = 16 * v25;
    if ( 16 * v25 != 0 && v3 - (unsigned int)(uintptr_t)(v2) > 0xF && ((unsigned int)(uintptr_t)(v11) > v3 || v2 > (char *)&v11[v3 - (uint32_t)(uintptr_t)(v2)]) )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        v14 = *(__m128i *)&v2[v12];
        v15 = _mm_cmpgt_epi8(g4_m128_from<__m128i>(0LL), v14);
        ++v13;
        v16 = _mm_unpacklo_epi8(v14, v15);
        v17 = _mm_unpackhi_epi8(v14, v15);
        v18 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v16);
        v19 = _mm_unpacklo_epi16(v16, v18);
        *(__m128i *)&v11[v12 + 4] = _mm_unpackhi_epi16(v16, v18);
        v20 = _mm_cmpgt_epi16(g4_m128_from<__m128i>(0LL), v17);
        *(__m128i *)&v11[v12] = v19;
        *(__m128i *)&v11[v12 + 8] = _mm_unpacklo_epi16(v17, v20);
        *(__m128i *)&v11[v12 + 12] = _mm_unpackhi_epi16(v17, v20);
        v12 += 16;
      }
      while ( v25 > v13 );
      v2 += v28;
      v21 = &v11[16 * v25];
      if ( v28 == v27 )
      {
LABEL_15:
        if ( v26 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
        {
          v26[2] = 0;
          *v26 = v29;
          v11[v29] = 0;
        }
        goto LABEL_17;
      }
    }
    else
    {
      v21 = (uint32_t *)(v10 + 12);
    }
    do
    {
      v22 = *v2++;
      *v21++ = v22;
    }
    while ( (char *)v3 != v2 );
    goto LABEL_15;
  }
  v11 = (uint32_t *)(&unk_20DF960);
LABEL_17:
  *(uint32_t *)v30 = (uint32_t)(uintptr_t)(v11);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v31);
  return v30;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValue  (binary VA: 0xf02e70)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValue
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValue(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self, const char *a2)
{
  int result;
  int v3;
  int v4;
  size_t v5;
  size_t v6;
  typedef int _g4_t_v7;
  typedef char *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef size_t _g4_t_v10;
  typedef char *_g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  result = 0;
  if ( a2 != nullptr )
  {
    sub_EA19F0(v11, a2);
    v3 = *((uint32_t *)self + 15);
    v9 = (*((uint32_t *)self + 16) - v3) >> 3;
    if ( v9 <= 0 )
    {
LABEL_12:
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v11);
      return 0;
    }
    else
    {
      v4 = 0;
      v8 = v11[0];
      v10 = *((uint32_t *)v11[0] - 3);
      while ( 1 )
      {
        v5 = v10;
        v6 = *(uint32_t *)(*(uint32_t *)v3 - 12);
        if ( v10 > v6 )
          v5 = *(uint32_t *)(*(uint32_t *)v3 - 12);
        v7 = v4;
        if ( memcmp(*(const void **)v3, v8, v5) == 0 && v6 == v10 )
          break;
        v4 = v7 + 1;
        v3 += 8;
        if ( v7 + 1 == v9 )
          goto LABEL_12;
      }
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v11);
      if ( v3 != 0 )
        return *(uint32_t *)(v3 + 4);
      else
        return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CGlfFileList::Destroy  (binary VA: 0xf02f50)
// Original: glitch::io::CGlfFileList::~CGlfFileList
// ----------------------------------------------------------------------------
void glitch::io::CGlfFileList::Destroy(glitch::io::CGlfFileList::Self *self)
{
  int v1;
  int v2;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v3;

  v1 = *((uint32_t *)self + 4);
  v2 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082408);
  if ( v1 != v2 )
  {
    do
    {
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v2 + 4));
      v3 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v2;
      v2 += 16;
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(v3);
    }
    while ( v1 != v2 );
    v2 = *((uint32_t *)self + 3);
  }
  if ( v2 != 0 )
    gll_operator_delete_arr(v2);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CGlfFileList::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringWArrayAttribute::Destroy  (binary VA: 0xf02fd0)
// Original: glitch::io::CStringWArrayAttribute::~CStringWArrayAttribute
// ----------------------------------------------------------------------------
void glitch::io::CStringWArrayAttribute::Destroy(glitch::io::CStringWArrayAttribute::Self *self)
{
  int v1;
  int v2;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v3;

  v1 = *((uint32_t *)self + 5);
  v2 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082FA8);
  if ( v1 != v2 )
  {
    do
    {
      v3 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v2;
      v2 += 4;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v3);
    }
    while ( v1 != v2 );
    v2 = *((uint32_t *)self + 4);
  }
  if ( v2 != 0 )
    gll_operator_delete_arr(v2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CStringWArrayAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringWArrayAttribute::Destroy_eaf03050  (binary VA: 0xf03050)
// Original: glitch::io::CStringWArrayAttribute::~CStringWArrayAttribute
// ----------------------------------------------------------------------------
void glitch::io::CStringWArrayAttribute::Destroy_eaf03050(glitch::io::CStringWArrayAttribute::Self *self)
{
  int v1;
  int v2;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v3;

  v1 = *((uint32_t *)self + 5);
  v2 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082FA8);
  if ( v1 != v2 )
  {
    do
    {
      v3 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v2;
      v2 += 4;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v3);
    }
    while ( v1 != v2 );
    v2 = *((uint32_t *)self + 4);
  }
  if ( v2 != 0 )
    gll_operator_delete_arr(v2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CStringWArrayAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBoolAttribute::Destroy  (binary VA: 0xf030e0)
// Original: glitch::io::CBoolAttribute::~CBoolAttribute
// ----------------------------------------------------------------------------
void glitch::io::CBoolAttribute::Destroy(glitch::io::CBoolAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CBoolAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIntAttribute::Destroy  (binary VA: 0xf03130)
// Original: glitch::io::CIntAttribute::~CIntAttribute
// ----------------------------------------------------------------------------
void glitch::io::CIntAttribute::Destroy(glitch::io::CIntAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CIntAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CFloatAttribute::Destroy  (binary VA: 0xf03180)
// Original: glitch::io::CFloatAttribute::~CFloatAttribute
// ----------------------------------------------------------------------------
void glitch::io::CFloatAttribute::Destroy(glitch::io::CFloatAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CFloatAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CUserPointerAttribute::Destroy  (binary VA: 0xf031d0)
// Original: glitch::io::CUserPointerAttribute::~CUserPointerAttribute
// ----------------------------------------------------------------------------
void glitch::io::CUserPointerAttribute::Destroy(glitch::io::CUserPointerAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CUserPointerAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::Destroy_eaf03220  (binary VA: 0xf03220)
// Original: glitch::io::IAttribute::~IAttribute
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::Destroy_eaf03220(glitch::io::IAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::IAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::Destroy  (binary VA: 0xf03280)
// Original: glitch::io::CStringAttribute::~CStringAttribute
// ----------------------------------------------------------------------------
void glitch::io::CStringAttribute::Destroy(glitch::io::CStringAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082E68);
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((glitch::io::CStringAttribute::Self *)((char *)self + 20));
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CStringAttribute::Self *)((char *)self + 16));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CStringAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::Destroy  (binary VA: 0xf032f0)
// Original: glitch::io::CNumbersAttribute::~CNumbersAttribute
// ----------------------------------------------------------------------------
void glitch::io::CNumbersAttribute::Destroy(glitch::io::CNumbersAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CNumbersAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTextureAttribute::Destroy  (binary VA: 0xf03360)
// Original: glitch::io::CTextureAttribute::~CTextureAttribute
// ----------------------------------------------------------------------------
void glitch::io::CTextureAttribute::Destroy(glitch::io::CTextureAttribute::Self *self)
{
  uint32_t *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20844C8);
  v1 = *((uint32_t **)self + 5);
  if ( v1 != nullptr )
    sub_5459C0((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 12)));
  sub_5ED480((int *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CTextureAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBoolAttribute::Destroy_eaf033d0  (binary VA: 0xf033d0)
// Original: glitch::io::CBoolAttribute::~CBoolAttribute
// ----------------------------------------------------------------------------
void glitch::io::CBoolAttribute::Destroy_eaf033d0(glitch::io::CBoolAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CBoolAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CUserPointerAttribute::Destroy_eaf03430  (binary VA: 0xf03430)
// Original: glitch::io::CUserPointerAttribute::~CUserPointerAttribute
// ----------------------------------------------------------------------------
void glitch::io::CUserPointerAttribute::Destroy_eaf03430(glitch::io::CUserPointerAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CUserPointerAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CFloatAttribute::Destroy_eaf03490  (binary VA: 0xf03490)
// Original: glitch::io::CFloatAttribute::~CFloatAttribute
// ----------------------------------------------------------------------------
void glitch::io::CFloatAttribute::Destroy_eaf03490(glitch::io::CFloatAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CFloatAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CIntAttribute::Destroy_eaf034f0  (binary VA: 0xf034f0)
// Original: glitch::io::CIntAttribute::~CIntAttribute
// ----------------------------------------------------------------------------
void glitch::io::CIntAttribute::Destroy_eaf034f0(glitch::io::CIntAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CIntAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::Destroy  (binary VA: 0xf03550)
// Original: glitch::io::CEnumAttribute::~CEnumAttribute
// ----------------------------------------------------------------------------
void glitch::io::CEnumAttribute::Destroy(glitch::io::CEnumAttribute::Self *self)
{
  int v1;
  int v2;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v3;

  v1 = *((uint32_t *)self + 6);
  v2 = *((uint32_t *)self + 5);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2084388);
  if ( v1 != v2 )
  {
    do
    {
      v3 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v2;
      v2 += 4;
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(v3);
    }
    while ( v1 != v2 );
    v2 = *((uint32_t *)self + 5);
  }
  if ( v2 != 0 )
    gll_operator_delete_arr(v2);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CEnumAttribute::Self *)((char *)self + 16));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CEnumAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTextureAttribute::Destroy_eaf035e0  (binary VA: 0xf035e0)
// Original: glitch::io::CTextureAttribute::~CTextureAttribute
// ----------------------------------------------------------------------------
void glitch::io::CTextureAttribute::Destroy_eaf035e0(glitch::io::CTextureAttribute::Self *self)
{
  uint32_t *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20844C8);
  v1 = *((uint32_t **)self + 5);
  if ( v1 != nullptr )
    sub_5459C0((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 12)));
  sub_5ED480((int *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CTextureAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::Destroy_eaf036c0  (binary VA: 0xf036c0)
// Original: glitch::io::CStringAttribute::~CStringAttribute
// ----------------------------------------------------------------------------
void glitch::io::CStringAttribute::Destroy_eaf036c0(glitch::io::CStringAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082E68);
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((glitch::io::CStringAttribute::Self *)((char *)self + 20));
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CStringAttribute::Self *)((char *)self + 16));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CStringAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBinaryAttribute::Destroy  (binary VA: 0xf03730)
// Original: glitch::io::CBinaryAttribute::~CBinaryAttribute
// ----------------------------------------------------------------------------
void glitch::io::CBinaryAttribute::Destroy(glitch::io::CBinaryAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082E68);
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((glitch::io::CBinaryAttribute::Self *)((char *)self + 20));
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CBinaryAttribute::Self *)((char *)self + 16));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CBinaryAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBinaryAttribute::Destroy_eaf037a0  (binary VA: 0xf037a0)
// Original: glitch::io::CBinaryAttribute::~CBinaryAttribute
// ----------------------------------------------------------------------------
void glitch::io::CBinaryAttribute::Destroy_eaf037a0(glitch::io::CBinaryAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082E68);
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((glitch::io::CBinaryAttribute::Self *)((char *)self + 20));
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CBinaryAttribute::Self *)((char *)self + 16));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CBinaryAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::Destroy_eaf03810  (binary VA: 0xf03810)
// Original: glitch::io::CEnumAttribute::~CEnumAttribute
// ----------------------------------------------------------------------------
void glitch::io::CEnumAttribute::Destroy_eaf03810(glitch::io::CEnumAttribute::Self *self)
{
  int v1;
  int v2;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v3;

  v1 = *((uint32_t *)self + 6);
  v2 = *((uint32_t *)self + 5);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2084388);
  if ( v1 != v2 )
  {
    do
    {
      v3 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v2;
      v2 += 4;
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(v3);
    }
    while ( v1 != v2 );
    v2 = *((uint32_t *)self + 5);
  }
  if ( v2 != 0 )
    gll_operator_delete_arr(v2);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CEnumAttribute::Self *)((char *)self + 16));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CEnumAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::Destroy  (binary VA: 0xf03930)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::~CXMLReaderImpl
// ----------------------------------------------------------------------------
void glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::Destroy(void **self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v5;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v6;

  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2085708));
  if ( *(self + 2) != nullptr )
    opDeleteArray(*(self + 2));
  v1 = (int)(uintptr_t)(*(self + 16));
  v2 = (int)(uintptr_t)(*(self + 15));
  if ( v1 != v2 )
  {
    do
    {
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v2 + 4));
      v5 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v2;
      v2 += 8;
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(v5);
    }
    while ( v1 != v2 );
    v2 = (int)(uintptr_t)(*(self + 15));
  }
  if ( v2 != 0 )
    gll_operator_delete_arr(v2);
  v3 = (int)(uintptr_t)(*(self + 13));
  v4 = (int)(uintptr_t)(*(self + 12));
  if ( v3 != v4 )
  {
    do
    {
      v6 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v4;
      v4 += 4;
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(v6);
    }
    while ( v3 != v4 );
    v4 = (int)(uintptr_t)(*(self + 12));
  }
  if ( v4 != 0 )
    gll_operator_delete_arr(v4);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(self + 10));
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(self + 9));
  *self = &off_20483C0;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::Destroy_eaf03a00  (binary VA: 0xf03a00)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::~CXMLReaderImpl
// ----------------------------------------------------------------------------
void glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::Destroy_eaf03a00(void **self)
{
  glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValueAsFloat  (binary VA: 0xf03a40)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueAsFloat
// ----------------------------------------------------------------------------
long double glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValueAsFloat(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self, const char *a2)
{
  float v2; // xmm0_4
  int v3;
  int v4;
  size_t n;
  size_t v6;
  typedef int _g4_t_v8;
  typedef char *_g4_t_s2;
  typedef int _g4_t_v10;
  typedef size_t _g4_t_v11;
  typedef char *_g4_t_v12[3];
  typedef char *_g4_t_nptr[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_s2)) > _g4_s1 ? (16u + sizeof(_g4_t_s2)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_nptr)) > _g4_s5 ? (44u + sizeof(_g4_t_nptr)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 44u);

  v2 = 0.0;
  if ( a2 != nullptr )
  {
    sub_EA19F0(v12, a2);
    v3 = *((uint32_t *)self + 15);
    v10 = (*((uint32_t *)self + 16) - v3) >> 3;
    if ( v10 <= 0 )
    {
LABEL_12:
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v12);
      return 0.0;
    }
    else
    {
      v4 = 0;
      s2 = v12[0];
      v11 = *((uint32_t *)v12[0] - 3);
      while ( 1 )
      {
        n = v11;
        v6 = *(uint32_t *)(*(uint32_t *)v3 - 12);
        if ( v11 > v6 )
          n = *(uint32_t *)(*(uint32_t *)v3 - 12);
        v8 = v4;
        if ( memcmp(*(const void **)v3, s2, n) == 0 && v6 == v11 )
          break;
        v4 = v8 + 1;
        v3 += 8;
        if ( v8 + 1 == v10 )
          goto LABEL_12;
      }
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v12);
      if ( v3 != 0 )
      {
        sub_EA19F0(nptr, *(const char **)(v3 + 4));
        v2 = strtod(nptr[0], nullptr);
        g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)nptr);
      }
      else
      {
        return 0.0;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValueSafe  (binary VA: 0xf03b70)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueSafe
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::getAttributeValueSafe(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self, const char *a2)
{
  int v2;
  int v3;
  size_t v4;
  size_t v5;
  typedef int _g4_t_v7;
  typedef char *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef size_t _g4_t_v10;
  typedef char *_g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  if ( a2 != nullptr )
  {
    sub_EA19F0(v11, a2);
    v2 = *((uint32_t *)self + 15);
    v9 = (*((uint32_t *)self + 16) - v2) >> 3;
    if ( v9 <= 0 )
    {
LABEL_11:
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v11);
    }
    else
    {
      v8 = v11[0];
      v10 = *((uint32_t *)v11[0] - 3);
      v3 = 0;
      while ( 1 )
      {
        v4 = v10;
        v5 = *(uint32_t *)(*(uint32_t *)v2 - 12);
        if ( v10 > v5 )
          v4 = *(uint32_t *)(*(uint32_t *)v2 - 12);
        v7 = v3;
        if ( memcmp(*(const void **)v2, v8, v4) == 0 && v5 == v10 )
          break;
        v3 = v7 + 1;
        v2 += 8;
        if ( v7 + 1 == v9 )
          goto LABEL_11;
      }
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v11);
      if ( v2 != 0 )
        return *(uint32_t *)(v2 + 4);
    }
  }
  return *((uint32_t *)self + 10);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CGlfFileList::Destroy_eaf03c50  (binary VA: 0xf03c50)
// Original: glitch::io::CGlfFileList::~CGlfFileList
// ----------------------------------------------------------------------------
void glitch::io::CGlfFileList::Destroy_eaf03c50(glitch::io::CGlfFileList::Self *self)
{
  int v1;
  int v2;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v3;

  v1 = *((uint32_t *)self + 4);
  v2 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082408);
  if ( v1 != v2 )
  {
    do
    {
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v2 + 4));
      v3 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v2;
      v2 += 16;
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(v3);
    }
    while ( v1 != v2 );
    v2 = *((uint32_t *)self + 3);
  }
  if ( v2 != 0 )
    gll_operator_delete_arr(v2);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CGlfFileList::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorAttribute::Destroy  (binary VA: 0xf03ce0)
// Original: glitch::io::CColorAttribute::~CColorAttribute
// ----------------------------------------------------------------------------
void glitch::io::CColorAttribute::Destroy(glitch::io::CColorAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CColorAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorfAttribute::Destroy  (binary VA: 0xf03d50)
// Original: glitch::io::CColorfAttribute::~CColorfAttribute
// ----------------------------------------------------------------------------
void glitch::io::CColorfAttribute::Destroy(glitch::io::CColorfAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CColorfAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorAttribute::Destroy_eaf03dc0  (binary VA: 0xf03dc0)
// Original: glitch::io::CColorAttribute::~CColorAttribute
// ----------------------------------------------------------------------------
void glitch::io::CColorAttribute::Destroy_eaf03dc0(glitch::io::CColorAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CColorAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DAttribute::Destroy  (binary VA: 0xf03e30)
// Original: glitch::io::CVector2DAttribute::~CVector2DAttribute
// ----------------------------------------------------------------------------
void glitch::io::CVector2DAttribute::Destroy(glitch::io::CVector2DAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CVector2DAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DAttribute::Destroy  (binary VA: 0xf03ea0)
// Original: glitch::io::CVector3DAttribute::~CVector3DAttribute
// ----------------------------------------------------------------------------
void glitch::io::CVector3DAttribute::Destroy(glitch::io::CVector3DAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CVector3DAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DAttribute::Destroy  (binary VA: 0xf03f10)
// Original: glitch::io::CVector4DAttribute::~CVector4DAttribute
// ----------------------------------------------------------------------------
void glitch::io::CVector4DAttribute::Destroy(glitch::io::CVector4DAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CVector4DAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DIAttribute::Destroy  (binary VA: 0xf03f80)
// Original: glitch::io::CVector2DIAttribute::~CVector2DIAttribute
// ----------------------------------------------------------------------------
void glitch::io::CVector2DIAttribute::Destroy(glitch::io::CVector2DIAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CVector2DIAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DIAttribute::Destroy  (binary VA: 0xf03ff0)
// Original: glitch::io::CVector3DIAttribute::~CVector3DIAttribute
// ----------------------------------------------------------------------------
void glitch::io::CVector3DIAttribute::Destroy(glitch::io::CVector3DIAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CVector3DIAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DIAttribute::Destroy  (binary VA: 0xf04060)
// Original: glitch::io::CVector4DIAttribute::~CVector4DIAttribute
// ----------------------------------------------------------------------------
void glitch::io::CVector4DIAttribute::Destroy(glitch::io::CVector4DIAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CVector4DIAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CRectAttribute::Destroy  (binary VA: 0xf040d0)
// Original: glitch::io::CRectAttribute::~CRectAttribute
// ----------------------------------------------------------------------------
void glitch::io::CRectAttribute::Destroy(glitch::io::CRectAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CRectAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrix2Attribute::Destroy  (binary VA: 0xf04140)
// Original: glitch::io::CMatrix2Attribute::~CMatrix2Attribute
// ----------------------------------------------------------------------------
void glitch::io::CMatrix2Attribute::Destroy(glitch::io::CMatrix2Attribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CMatrix2Attribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrix3Attribute::Destroy  (binary VA: 0xf041b0)
// Original: glitch::io::CMatrix3Attribute::~CMatrix3Attribute
// ----------------------------------------------------------------------------
void glitch::io::CMatrix3Attribute::Destroy(glitch::io::CMatrix3Attribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CMatrix3Attribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrixAttribute::Destroy  (binary VA: 0xf04220)
// Original: glitch::io::CMatrixAttribute::~CMatrixAttribute
// ----------------------------------------------------------------------------
void glitch::io::CMatrixAttribute::Destroy(glitch::io::CMatrixAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CMatrixAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CQuaternionAttribute::Destroy  (binary VA: 0xf04290)
// Original: glitch::io::CQuaternionAttribute::~CQuaternionAttribute
// ----------------------------------------------------------------------------
void glitch::io::CQuaternionAttribute::Destroy(glitch::io::CQuaternionAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CQuaternionAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBBoxAttribute::Destroy  (binary VA: 0xf04300)
// Original: glitch::io::CBBoxAttribute::~CBBoxAttribute
// ----------------------------------------------------------------------------
void glitch::io::CBBoxAttribute::Destroy(glitch::io::CBBoxAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CBBoxAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CPlaneAttribute::Destroy  (binary VA: 0xf04370)
// Original: glitch::io::CPlaneAttribute::~CPlaneAttribute
// ----------------------------------------------------------------------------
void glitch::io::CPlaneAttribute::Destroy(glitch::io::CPlaneAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CPlaneAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTriangleAttribute::Destroy  (binary VA: 0xf043e0)
// Original: glitch::io::CTriangleAttribute::~CTriangleAttribute
// ----------------------------------------------------------------------------
void glitch::io::CTriangleAttribute::Destroy(glitch::io::CTriangleAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CTriangleAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLine2dAttribute::Destroy  (binary VA: 0xf04450)
// Original: glitch::io::CLine2dAttribute::~CLine2dAttribute
// ----------------------------------------------------------------------------
void glitch::io::CLine2dAttribute::Destroy(glitch::io::CLine2dAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CLine2dAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLine3dAttribute::Destroy  (binary VA: 0xf044c0)
// Original: glitch::io::CLine3dAttribute::~CLine3dAttribute
// ----------------------------------------------------------------------------
void glitch::io::CLine3dAttribute::Destroy(glitch::io::CLine3dAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CLine3dAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::Destroy_eaf04530  (binary VA: 0xf04530)
// Original: glitch::io::CNumbersAttribute::~CNumbersAttribute
// ----------------------------------------------------------------------------
void glitch::io::CNumbersAttribute::Destroy_eaf04530(glitch::io::CNumbersAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CNumbersAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBBoxAttribute::Destroy_eaf045a0  (binary VA: 0xf045a0)
// Original: glitch::io::CBBoxAttribute::~CBBoxAttribute
// ----------------------------------------------------------------------------
void glitch::io::CBBoxAttribute::Destroy_eaf045a0(glitch::io::CBBoxAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CBBoxAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DIAttribute::Destroy_eaf04610  (binary VA: 0xf04610)
// Original: glitch::io::CVector2DIAttribute::~CVector2DIAttribute
// ----------------------------------------------------------------------------
void glitch::io::CVector2DIAttribute::Destroy_eaf04610(glitch::io::CVector2DIAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CVector2DIAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLine3dAttribute::Destroy_eaf04680  (binary VA: 0xf04680)
// Original: glitch::io::CLine3dAttribute::~CLine3dAttribute
// ----------------------------------------------------------------------------
void glitch::io::CLine3dAttribute::Destroy_eaf04680(glitch::io::CLine3dAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CLine3dAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTriangleAttribute::Destroy_eaf046f0  (binary VA: 0xf046f0)
// Original: glitch::io::CTriangleAttribute::~CTriangleAttribute
// ----------------------------------------------------------------------------
void glitch::io::CTriangleAttribute::Destroy_eaf046f0(glitch::io::CTriangleAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CTriangleAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrix2Attribute::Destroy_eaf04760  (binary VA: 0xf04760)
// Original: glitch::io::CMatrix2Attribute::~CMatrix2Attribute
// ----------------------------------------------------------------------------
void glitch::io::CMatrix2Attribute::Destroy_eaf04760(glitch::io::CMatrix2Attribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CMatrix2Attribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLine2dAttribute::Destroy_eaf047d0  (binary VA: 0xf047d0)
// Original: glitch::io::CLine2dAttribute::~CLine2dAttribute
// ----------------------------------------------------------------------------
void glitch::io::CLine2dAttribute::Destroy_eaf047d0(glitch::io::CLine2dAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CLine2dAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CPlaneAttribute::Destroy_eaf04840  (binary VA: 0xf04840)
// Original: glitch::io::CPlaneAttribute::~CPlaneAttribute
// ----------------------------------------------------------------------------
void glitch::io::CPlaneAttribute::Destroy_eaf04840(glitch::io::CPlaneAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CPlaneAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrixAttribute::Destroy_eaf048b0  (binary VA: 0xf048b0)
// Original: glitch::io::CMatrixAttribute::~CMatrixAttribute
// ----------------------------------------------------------------------------
void glitch::io::CMatrixAttribute::Destroy_eaf048b0(glitch::io::CMatrixAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CMatrixAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DAttribute::Destroy_eaf04920  (binary VA: 0xf04920)
// Original: glitch::io::CVector3DAttribute::~CVector3DAttribute
// ----------------------------------------------------------------------------
void glitch::io::CVector3DAttribute::Destroy_eaf04920(glitch::io::CVector3DAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CVector3DAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DAttribute::Destroy_eaf04990  (binary VA: 0xf04990)
// Original: glitch::io::CVector2DAttribute::~CVector2DAttribute
// ----------------------------------------------------------------------------
void glitch::io::CVector2DAttribute::Destroy_eaf04990(glitch::io::CVector2DAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CVector2DAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DIAttribute::Destroy_eaf04a00  (binary VA: 0xf04a00)
// Original: glitch::io::CVector4DIAttribute::~CVector4DIAttribute
// ----------------------------------------------------------------------------
void glitch::io::CVector4DIAttribute::Destroy_eaf04a00(glitch::io::CVector4DIAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CVector4DIAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CColorfAttribute::Destroy_eaf04a70  (binary VA: 0xf04a70)
// Original: glitch::io::CColorfAttribute::~CColorfAttribute
// ----------------------------------------------------------------------------
void glitch::io::CColorfAttribute::Destroy_eaf04a70(glitch::io::CColorfAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CColorfAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CQuaternionAttribute::Destroy_eaf04ae0  (binary VA: 0xf04ae0)
// Original: glitch::io::CQuaternionAttribute::~CQuaternionAttribute
// ----------------------------------------------------------------------------
void glitch::io::CQuaternionAttribute::Destroy_eaf04ae0(glitch::io::CQuaternionAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CQuaternionAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DAttribute::Destroy_eaf04b50  (binary VA: 0xf04b50)
// Original: glitch::io::CVector4DAttribute::~CVector4DAttribute
// ----------------------------------------------------------------------------
void glitch::io::CVector4DAttribute::Destroy_eaf04b50(glitch::io::CVector4DAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CVector4DAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CRectAttribute::Destroy_eaf04bc0  (binary VA: 0xf04bc0)
// Original: glitch::io::CRectAttribute::~CRectAttribute
// ----------------------------------------------------------------------------
void glitch::io::CRectAttribute::Destroy_eaf04bc0(glitch::io::CRectAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CRectAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CMatrix3Attribute::Destroy_eaf04c30  (binary VA: 0xf04c30)
// Original: glitch::io::CMatrix3Attribute::~CMatrix3Attribute
// ----------------------------------------------------------------------------
void glitch::io::CMatrix3Attribute::Destroy_eaf04c30(glitch::io::CMatrix3Attribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CMatrix3Attribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DIAttribute::Destroy_eaf04ca0  (binary VA: 0xf04ca0)
// Original: glitch::io::CVector3DIAttribute::~CVector3DIAttribute
// ----------------------------------------------------------------------------
void glitch::io::CVector3DIAttribute::Destroy_eaf04ca0(glitch::io::CVector3DIAttribute::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2083608);
  if ( *((uint32_t *)self + 7) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 7));
  if ( *((uint32_t *)self + 4) != 0 )
    gll_operator_delete_arr(*((uint32_t *)self + 4));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CVector3DIAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::getString  (binary VA: 0xf04d10)
// Original: glitch::io::CEnumAttribute::getString
// ----------------------------------------------------------------------------
glitch::io::CEnumAttribute::Self * glitch::io::CEnumAttribute::getString(glitch::io::CEnumAttribute::Self *self, int a2)
{
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
    self,
    (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(a2 + 16));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::getString  (binary VA: 0xf04d50)
// Original: glitch::io::CStringAttribute::getString
// ----------------------------------------------------------------------------
glitch::io::CStringAttribute::Self * glitch::io::CStringAttribute::getString(glitch::io::CStringAttribute::Self *self, int a2)
{
  char *v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  __m128i v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  uint8_t *v21;
  int v22;
  int v23;
  int *v24;
  unsigned int v25;
  char *v26;
  unsigned int v27;

  if ( *(uint8_t *)(a2 + 13) == 0 )
  {
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
      self,
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(a2 + 16));
    return self;
  }
  v3 = *(char **)(a2 + 20);
  v26 = &v3[4 * *((uint32_t *)v3 - 3)];
  if ( v3 != v26 )
  {
    v25 = (4 * *((uint32_t *)v3 - 3)) >> 2;
    v24 = (int *)sub_EA0970(v25, 0);
    v4 = (unsigned int)(uintptr_t)(v24 + 3);
    v27 = ((unsigned int)(v26 - (v3 + 4)) >> 2) + 1;
    v23 = 16 * (v27 >> 4);
    if ( v23 != 0 && ((unsigned int)(uintptr_t)(v3) > v4 + v27 || v4 > (unsigned int)(uintptr_t)(&v3[4 * v27])) && v27 > 0xF )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = *(__m128i *)&v3[4 * v5 + 16];
        v8 = *(__m128i *)&v3[4 * v5];
        v9 = _mm_unpacklo_epi16(v8, v7);
        v10 = _mm_unpackhi_epi16(v8, v7);
        v11 = *(__m128i *)&v3[4 * v5 + 48];
        v12 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v9, v10), _mm_unpackhi_epi16(v9, v10));
        v13 = *(__m128i *)&v3[4 * v5 + 32];
        v14 = _mm_unpacklo_epi16(v13, v11);
        v15 = _mm_unpackhi_epi16(v13, v11);
        v16 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v14, v15), _mm_unpackhi_epi16(v14, v15));
        ++v6;
        v17 = _mm_unpackhi_epi8(v12, v16);
        v18 = _mm_unpacklo_epi8(v12, v16);
        v19 = _mm_unpacklo_epi8(v18, v17);
        v20 = _mm_unpackhi_epi8(v18, v17);
        *(__m128i *)(v4 + v5) = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v19, v20), _mm_unpackhi_epi8(v19, v20));
        v5 += 16;
      }
      while ( v27 >> 4 > v6 );
      v3 += 64 * (v27 >> 4);
      v21 = (uint8_t *)(v4 + v23);
      if ( v27 == v23 )
      {
LABEL_11:
        if ( v24 != (int *)(uintptr_t)(&dword_20D3E6C) )
        {
          v24[2] = 0;
          *v24 = v25;
          *((uint8_t *)v24 + v25 + 12) = 0;
        }
        *(uint32_t *)self = v4;
        return self;
      }
    }
    else
    {
      v21 = (uint8_t *)(v24 + 3);
    }
    do
    {
      v22 = *(uint32_t *)v3;
      v3 += 4;
      *v21++ = v22;
    }
    while ( v26 != v3 );
    v4 = (unsigned int)(uintptr_t)(v24 + 3);
    goto LABEL_11;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(byte_20D3E78);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::setString  (binary VA: 0xf04f20)
// Original: glitch::io::IAttribute::setString
// ----------------------------------------------------------------------------
void glitch::io::IAttribute::setString(glitch::io::IAttribute::Self *self, wchar_t *s)
{
  const wchar_t *v2;
  size_t v3;
  const wchar_t *v4;
  const wchar_t *v5;
  char *v6;
  int v7;
  unsigned int v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  char *v23;
  wchar_t v24;
  char *v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int *_g4_t_v32;
  typedef void (*_g4_t_v33)(glitch::io::IAttribute::Self *, char *, int, int, int, int, int, int, int *, uint32_t, int, const wchar_t *, int, unsigned int, unsigned int, unsigned int, uint32_t, uint32_t, uint32_t, uint32_t);
  typedef int _g4_t_v34;
  typedef const wchar_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef uint32_t _g4_t_v40[3];
  typedef uint32_t _g4_t_v41[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v26)) > _g4_s0 ? (8u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v27)) > _g4_s1 ? (12u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v29)) > _g4_s3 ? (20u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v30)) > _g4_s4 ? (24u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v31)) > _g4_s5 ? (28u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v32)) > _g4_s6 ? (32u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v33)) > _g4_s7 ? (36u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v34)) > _g4_s8 ? (40u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v35)) > _g4_s9 ? (44u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v36)) > _g4_s10 ? (48u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v37)) > _g4_s11 ? (52u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v38)) > _g4_s12 ? (56u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v39)) > _g4_s13 ? (60u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v40)) > _g4_s14 ? (64u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v41)) > _g4_s15 ? (76u + sizeof(_g4_t_v41)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);

  v2 = s;
  v33 = *(void (**)(glitch::io::IAttribute::Self *, char *, int, int, int, int, int, int, int *, uint32_t, int, const wchar_t *, int, unsigned int, unsigned int, unsigned int, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)self + 148);
  if ( s == nullptr )
  {
    v25 = (char *)(uintptr_t)(byte_20D3E78);
    v40[0] = (uint32_t)(uintptr_t)(byte_20D3E78);
    goto LABEL_15;
  }
  v3 = wcslen(s);
  v4 = &s[v3];
  if ( s != v4 )
  {
    v38 = (int)(4 * v3) >> 2;
    v32 = (int *)sub_EA0970(v38, 0);
    v5 = s + 1;
    v6 = (char *)(v32 + 3);
    v39 = ((unsigned int)((char *)v4 - (char *)(s + 1)) >> 2) + 1;
    v37 = v39 >> 4;
    v34 = 16 * (v39 >> 4);
    if ( v34 != 0
      && (LOBYTE(v35) = v39 > 0xF,
          HIBYTE(v31) = s > (wchar_t *)&v6[v39] || v6 > (char *)&s[v39],
          (HIBYTE(v31) & (v39 > 0xF)) != 0) )
    {
      v35 = v4;
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = *(__m128i *)&s[v7 + 4];
        v10 = *(__m128i *)&s[v7];
        v11 = _mm_unpacklo_epi16(v10, v9);
        v12 = _mm_unpackhi_epi16(v10, v9);
        v13 = *(__m128i *)&s[v7 + 12];
        v14 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v11, v12), _mm_unpackhi_epi16(v11, v12));
        v15 = *(__m128i *)&s[v7 + 8];
        v16 = _mm_unpacklo_epi16(v15, v13);
        v17 = _mm_unpackhi_epi16(v15, v13);
        v18 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v16, v17), _mm_unpackhi_epi16(v16, v17));
        ++v8;
        v19 = _mm_unpackhi_epi8(v14, v18);
        v20 = _mm_unpacklo_epi8(v14, v18);
        v21 = _mm_unpacklo_epi8(v20, v19);
        v22 = _mm_unpackhi_epi8(v20, v19);
        *(__m128i *)&v6[v7] = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v21, v22), _mm_unpackhi_epi8(v21, v22));
        v7 += 16;
      }
      while ( v37 > v8 );
      v23 = &v6[v34];
      v2 = &s[16 * (v39 >> 4)];
      if ( v39 == v34 )
      {
LABEL_12:
        if ( v32 != (int *)(uintptr_t)(&dword_20D3E6C) )
        {
          v32[2] = 0;
          *v32 = v38;
          *((uint8_t *)v32 + v38 + 12) = 0;
        }
        goto LABEL_14;
      }
      v5 = v2 + 1;
      v39 = (unsigned int)(uintptr_t)(v32 + 3);
    }
    else
    {
      v23 = (char *)(v32 + 3);
      v39 = (unsigned int)(uintptr_t)(v32 + 3);
    }
    while ( 1 )
    {
      v24 = *v2;
      v2 = v5;
      *v23++ = v24;
      if ( v4 == v5 )
        break;
      ++v5;
    }
    v6 = (char *)v39;
    goto LABEL_12;
  }
  v6 = (char *)(uintptr_t)(byte_20D3E78);
LABEL_14:
  v41[0] = (uint32_t)(uintptr_t)(v6);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
    (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v40,
    (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v41);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v41);
  v25 = (char *)v40[0];
LABEL_15:
  v33(self, v25, v26, v27, v28, v29, v30, v31, v32, (uint32_t)(uintptr_t)(v33), v34, v35, v36, v37, v38, v39, v40[0], v40[1], v40[2], v41[0]);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v40);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValueAsFloat  (binary VA: 0xf05150)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueAsFloat
// ----------------------------------------------------------------------------
long double glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValueAsFloat(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self, const wchar_t *a2)
{
  float v2; // xmm0_4
  int v3;
  int v4;
  const wchar_t *s1;
  size_t v6;
  size_t n;
  int v8;
  const wchar_t *v9;
  size_t v10;
  const wchar_t *v11;
  const wchar_t *v12;
  wchar_t *v13;
  unsigned int v14;
  unsigned int v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  wchar_t *v30;
  wchar_t v31;
  const char *v32;
  typedef int *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef wchar_t *_g4_t_v39;
  typedef char *_g4_t_nptr[3];
  typedef wchar_t *_g4_t_s2[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v34)) > _g4_s0 ? (0u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v35)) > _g4_s1 ? (4u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v36)) > _g4_s2 ? (20u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v37)) > _g4_s3 ? (24u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v38)) > _g4_s4 ? (24u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v39)) > _g4_s5 ? (24u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_nptr)) > _g4_s6 ? (32u + sizeof(_g4_t_nptr)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_s2)) > _g4_s7 ? (44u + sizeof(_g4_t_s2)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 32u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 44u);

  v2 = 0.0;
  if ( a2 != nullptr )
  {
    sub_EA31B0(s2, a2);
    v3 = *((uint32_t *)self + 15);
    if ( *((uint32_t *)self + 16) - v3 <= 7 )
    {
LABEL_26:
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)s2);
      return 0.0;
    }
    v4 = 0;
    while ( 1 )
    {
      s1 = *(const wchar_t **)(v3 + 8 * v4);
      v6 = *(s1 - 3);
      n = *(s2[0] - 3);
      v37 = n;
      if ( n > v6 )
        n = *(s1 - 3);
      if ( wmemcmp(s1, s2[0], n) == 0 && v6 == v37 )
        break;
      ++v4;
      v3 = *((uint32_t *)self + 15);
      if ( v4 >= (*((uint32_t *)self + 16) - v3) >> 3 )
        goto LABEL_26;
    }
    v8 = *((uint32_t *)self + 15) + 8 * v4;
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)s2);
    if ( v8 == 0 )
      return 0.0;
    v9 = *(const wchar_t **)(v8 + 4);
    if ( v9 == nullptr )
    {
      v32 = (const char *)(uintptr_t)(byte_20D3E78);
      nptr[0] = (char *)(uintptr_t)(byte_20D3E78);
      goto LABEL_24;
    }
    v10 = wcslen(v9);
    v11 = &v9[v10];
    if ( v9 == v11 )
    {
      v13 = (wchar_t *)byte_20D3E78;
LABEL_23:
      s2[0] = v13;
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)nptr,
        (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)s2);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)s2);
      v32 = nptr[0];
LABEL_24:
      v2 = strtod(v32, nullptr);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)nptr);
      return v2;
    }
    v36 = (int)(4 * v10) >> 2;
    v34 = (int *)sub_EA0970(v36, 0);
    v12 = v9 + 1;
    v13 = (wchar_t *)(v34 + 3);
    v38 = ((unsigned int)((char *)v11 - (char *)(v9 + 1)) >> 2) + 1;
    v35 = 16 * (v38 >> 4);
    if ( v35 != 0 && (v9 > (wchar_t *)((char *)v13 + v38) || v13 > &v9[v38]) && v38 > 0xF )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = *(__m128i *)&v9[v14 + 4];
        v17 = *(__m128i *)&v9[v14];
        v18 = _mm_unpacklo_epi16(v17, v16);
        v19 = _mm_unpackhi_epi16(v17, v16);
        v20 = *(__m128i *)&v9[v14 + 12];
        v21 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v18, v19), _mm_unpackhi_epi16(v18, v19));
        v22 = *(__m128i *)&v9[v14 + 8];
        v23 = _mm_unpacklo_epi16(v22, v20);
        v24 = _mm_unpackhi_epi16(v22, v20);
        v25 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v23, v24), _mm_unpackhi_epi16(v23, v24));
        ++v15;
        v26 = _mm_unpackhi_epi8(v21, v25);
        v27 = _mm_unpacklo_epi8(v21, v25);
        v28 = _mm_unpacklo_epi8(v27, v26);
        v29 = _mm_unpackhi_epi8(v27, v26);
        *(__m128i *)&v13[v14 / 4] = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v28, v29), _mm_unpackhi_epi8(v28, v29));
        v14 += 16;
      }
      while ( v38 >> 4 > v15 );
      v30 = &v13[v35 / 4u];
      v9 += 16 * (v38 >> 4);
      if ( v38 == v35 )
      {
LABEL_21:
        if ( v34 != (int *)(uintptr_t)(&dword_20D3E6C) )
        {
          v34[2] = 0;
          *v34 = v36;
          *((uint8_t *)v34 + v36 + 12) = 0;
        }
        goto LABEL_23;
      }
      v12 = v9 + 1;
      v39 = (wchar_t *)(v34 + 3);
    }
    else
    {
      v30 = (wchar_t *)(v34 + 3);
      v39 = (wchar_t *)(v34 + 3);
    }
    while ( 1 )
    {
      v31 = *v9;
      v9 = v12;
      *(uint8_t *)v30 = v31;
      v30 = (wchar_t *)((char *)v30 + 1);
      if ( v11 == v12 )
        break;
      ++v12;
    }
    v13 = v39;
    goto LABEL_21;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValueAsFloat  (binary VA: 0xf05450)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueAsFloat
// ----------------------------------------------------------------------------
long double glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::getAttributeValueAsFloat(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, glitch::core::Self *a17, float a18, char *a19)
{
  const wchar_t *v19;
  const wchar_t *v20;
  long double result; // fst7
  size_t v22;
  const wchar_t *v23;
  const wchar_t *v24;
  char *v25;
  int v26;
  unsigned int v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  char *v42;
  wchar_t v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  float v66;
  int *v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  char *v71;

  v19 = (const wchar_t *)G4_VCALL<int>(self, 32, a2, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65);
  v20 = v19;
  result = 0.0;
  if ( v19 != nullptr )
  {
    v22 = wcslen(v19);
    v23 = &v20[v22];
    if ( v20 == v23 )
    {
      v25 = (char *)(uintptr_t)(byte_20D3E78);
LABEL_14:
      a19 = v25;
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&a17,
        (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&a19);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&a19);
      glitch::core::fast_atof_move(a17, (char *)&a18);
      v66 = a18;
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&a17);
      return v66;
    }
    v69 = (int)(4 * v22) >> 2;
    v67 = (int *)sub_EA0970(v69, 0);
    v24 = v20 + 1;
    v25 = (char *)(v67 + 3);
    v70 = ((unsigned int)((char *)v23 - (char *)(v20 + 1)) >> 2) + 1;
    v68 = 16 * (v70 >> 4);
    if ( v68 != 0 && (v25 > (char *)&v20[v70] || v20 > (const wchar_t *)&v25[v70]) && v70 > 0xF )
    {
      v26 = 0;
      v27 = 0;
      do
      {
        v28 = *(__m128i *)&v20[v26 + 4];
        v29 = *(__m128i *)&v20[v26];
        v30 = _mm_unpacklo_epi16(v29, v28);
        v31 = _mm_unpackhi_epi16(v29, v28);
        v32 = *(__m128i *)&v20[v26 + 12];
        v33 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v30, v31), _mm_unpackhi_epi16(v30, v31));
        v34 = *(__m128i *)&v20[v26 + 8];
        v35 = _mm_unpacklo_epi16(v34, v32);
        v36 = _mm_unpackhi_epi16(v34, v32);
        v37 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v35, v36), _mm_unpackhi_epi16(v35, v36));
        ++v27;
        v38 = _mm_unpackhi_epi8(v33, v37);
        v39 = _mm_unpacklo_epi8(v33, v37);
        v40 = _mm_unpacklo_epi8(v39, v38);
        v41 = _mm_unpackhi_epi8(v39, v38);
        *(__m128i *)&v25[v26] = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v40, v41), _mm_unpackhi_epi8(v40, v41));
        v26 += 16;
      }
      while ( v70 >> 4 > v27 );
      v42 = &v25[v68];
      v20 += 16 * (v70 >> 4);
      if ( v70 == v68 )
      {
LABEL_12:
        if ( v67 != (int *)(uintptr_t)(&dword_20D3E6C) )
        {
          v67[2] = 0;
          *v67 = v69;
          *((uint8_t *)v67 + v69 + 12) = 0;
        }
        goto LABEL_14;
      }
      v24 = v20 + 1;
      v71 = (char *)(v67 + 3);
    }
    else
    {
      v42 = (char *)(v67 + 3);
      v71 = (char *)(v67 + 3);
    }
    while ( 1 )
    {
      v43 = *v20;
      v20 = v24;
      *v42++ = v43;
      if ( v23 == v24 )
        break;
      ++v24;
    }
    v25 = v71;
    goto LABEL_12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CQuaternionAttribute::getMatrix  (binary VA: 0xf05670)
// Original: glitch::io::CQuaternionAttribute::getMatrix
// ----------------------------------------------------------------------------
glitch::io::CQuaternionAttribute::Self * glitch::io::CQuaternionAttribute::getMatrix(glitch::io::CQuaternionAttribute::Self *self, int a2)
{
  glitch::io::CQuaternionAttribute::Self *v2;
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm5_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  typedef float _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef glitch::io::CQuaternionAttribute::Self **_g4_t_v22;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v21)) > _g4_s5 ? (20u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v22)) > _g4_s6 ? (36u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);

  v22 = &self;
  v2 = self;
  (*(void (**)(float *, int))(*(uint32_t *)a2 + 60))(&v18, a2);
  sub_A09C80((int)(uintptr_t)(v2), 0);
  v3 = v18;
  v4 = v21;
  v5 = v18 * v18;
  v6 = v18 * v21;
  *((uint32_t *)v2 + 3) = 0;
  v7 = v20;
  *((uint32_t *)v2 + 7) = 0;
  *((uint32_t *)v2 + 11) = 0;
  *((uint32_t *)v2 + 12) = 0;
  *((uint32_t *)v2 + 13) = 0;
  *((uint32_t *)v2 + 14) = 0;
  *((uint32_t *)v2 + 15) = 1065353216;
  v8 = (float)(v7 * v7) + (float)(v7 * v7);
  v17 = v5 + v5;
  v10 = (float)(v3 * v7) + (float)(v3 * v7);
  v16 = v6 + v6;
  v11 = (float)(v3 * v19) + (float)(v3 * v19);
  v12 = (float)(v19 * v7) + (float)(v19 * v7);
  v13 = (float)(v7 * v4) + (float)(v7 * v4);
  v14 = (float)(v19 * v4) + (float)(v19 * v4);
  v15 = -(float)((float)(v19 * v19) + (float)(v19 * v19));
  *(float *)v2 = (float)(v15 - v8) + 1.0;
  *((float *)v2 + 10) = (float)(v15 - v17) + 1.0;
  *((float *)v2 + 1) = v13 + v11;
  *((float *)v2 + 4) = v11 - v13;
  *((float *)v2 + 5) = 1.0 - (float)(v8 + v17);
  *((float *)v2 + 6) = v16 + v12;
  *((float *)v2 + 9) = v12 - v16;
  *((float *)v2 + 2) = v10 - v14;
  *((float *)v2 + 8) = v10 + v14;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DIAttribute::getMatrix  (binary VA: 0xf057f0)
// Original: glitch::io::CVector4DIAttribute::getMatrix
// ----------------------------------------------------------------------------
glitch::io::CVector4DIAttribute::Self * glitch::io::CVector4DIAttribute::getMatrix(glitch::io::CVector4DIAttribute::Self *self)
{
  sub_A09C80((int)(uintptr_t)(self), 2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DIAttribute::getMatrix  (binary VA: 0xf05830)
// Original: glitch::io::CVector3DIAttribute::getMatrix
// ----------------------------------------------------------------------------
glitch::io::CVector3DIAttribute::Self * glitch::io::CVector3DIAttribute::getMatrix(glitch::io::CVector3DIAttribute::Self *self)
{
  sub_A09C80((int)(uintptr_t)(self), 2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DIAttribute::getMatrix  (binary VA: 0xf05870)
// Original: glitch::io::CVector2DIAttribute::getMatrix
// ----------------------------------------------------------------------------
glitch::io::CVector2DIAttribute::Self * glitch::io::CVector2DIAttribute::getMatrix(glitch::io::CVector2DIAttribute::Self *self)
{
  sub_A09C80((int)(uintptr_t)(self), 2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector4DAttribute::getMatrix  (binary VA: 0xf058b0)
// Original: glitch::io::CVector4DAttribute::getMatrix
// ----------------------------------------------------------------------------
glitch::io::CVector4DAttribute::Self * glitch::io::CVector4DAttribute::getMatrix(glitch::io::CVector4DAttribute::Self *self, int a2)
{
  sub_A09C80((int)(uintptr_t)(self), 2);
  *((uint32_t *)self + 12) = **(uint32_t **)(a2 + 28);
  *((uint32_t *)self + 13) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 4);
  *((uint32_t *)self + 14) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 8);
  *((uint32_t *)self + 15) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 12);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector3DAttribute::getMatrix  (binary VA: 0xf05920)
// Original: glitch::io::CVector3DAttribute::getMatrix
// ----------------------------------------------------------------------------
glitch::io::CVector3DAttribute::Self * glitch::io::CVector3DAttribute::getMatrix(glitch::io::CVector3DAttribute::Self *self, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;

  sub_A09C80((int)(uintptr_t)(self), 2);
  v2 = *(int **)(a2 + 28);
  v3 = v2[2];
  v4 = v2[1];
  v5 = *v2;
  *((uint32_t *)self + 13) = v4;
  *((uint32_t *)self + 12) = v5;
  *((uint32_t *)self + 14) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CVector2DAttribute::getMatrix  (binary VA: 0xf05980)
// Original: glitch::io::CVector2DAttribute::getMatrix
// ----------------------------------------------------------------------------
glitch::io::CVector2DAttribute::Self * glitch::io::CVector2DAttribute::getMatrix(glitch::io::CVector2DAttribute::Self *self)
{
  sub_A09C80((int)(uintptr_t)(self), 2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getMatrix  (binary VA: 0xf059c0)
// Original: glitch::io::CNumbersAttribute::getMatrix
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getMatrix(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  sub_A09C80((int)(uintptr_t)(self), 2);
  if ( *(uint8_t *)(a2 + 44) != 0 )
  {
    if ( *(uint32_t *)(a2 + 40) != 0 )
    {
      *(uint32_t *)self = **(uint32_t **)(a2 + 28);
      if ( *(uint32_t *)(a2 + 40) > 1u )
      {
        *((uint32_t *)self + 1) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 4);
        if ( *(uint32_t *)(a2 + 40) > 2u )
        {
          *((uint32_t *)self + 2) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 8);
          if ( *(uint32_t *)(a2 + 40) > 3u )
            *((uint32_t *)self + 3) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 12);
        }
      }
    }
    if ( *(uint32_t *)(a2 + 40) > 4u )
    {
      *((uint32_t *)self + 4) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 16);
      if ( *(uint32_t *)(a2 + 40) > 5u )
      {
        *((uint32_t *)self + 5) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 20);
        if ( *(uint32_t *)(a2 + 40) > 6u )
        {
          *((uint32_t *)self + 6) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 24);
          if ( *(uint32_t *)(a2 + 40) > 7u )
            *((uint32_t *)self + 7) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 28);
        }
      }
    }
    if ( *(uint32_t *)(a2 + 40) > 8u )
    {
      *((uint32_t *)self + 8) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 32);
      if ( *(uint32_t *)(a2 + 40) > 9u )
      {
        *((uint32_t *)self + 9) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 36);
        if ( *(uint32_t *)(a2 + 40) > 0xAu )
        {
          *((uint32_t *)self + 10) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 40);
          if ( *(uint32_t *)(a2 + 40) > 0xBu )
            *((uint32_t *)self + 11) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 44);
        }
      }
    }
    if ( *(uint32_t *)(a2 + 40) > 0xCu )
    {
      *((uint32_t *)self + 12) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 48);
      if ( *(uint32_t *)(a2 + 40) > 0xDu )
      {
        *((uint32_t *)self + 13) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 52);
        if ( *(uint32_t *)(a2 + 40) > 0xEu )
        {
          *((uint32_t *)self + 14) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 56);
          if ( *(uint32_t *)(a2 + 40) > 0xFu )
            *((uint32_t *)self + 15) = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 60);
        }
      }
    }
    return self;
  }
  if ( *(uint32_t *)(a2 + 40) != 0 )
  {
    *(float *)self = (float)**(int **)(a2 + 16);
    if ( *(uint32_t *)(a2 + 40) > 1u )
    {
      *((float *)self + 1) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 4);
      if ( *(uint32_t *)(a2 + 40) > 2u )
      {
        *((float *)self + 2) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 8);
        if ( *(uint32_t *)(a2 + 40) > 3u )
          *((float *)self + 3) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 12);
      }
    }
  }
  if ( *(uint32_t *)(a2 + 40) > 4u )
  {
    *((float *)self + 4) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 16);
    if ( *(uint32_t *)(a2 + 40) > 5u )
    {
      *((float *)self + 5) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 20);
      if ( *(uint32_t *)(a2 + 40) > 6u )
      {
        *((float *)self + 6) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 24);
        if ( *(uint32_t *)(a2 + 40) > 7u )
          *((float *)self + 7) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 28);
      }
    }
  }
  if ( *(uint32_t *)(a2 + 40) > 8u )
  {
    *((float *)self + 8) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 32);
    if ( *(uint32_t *)(a2 + 40) > 9u )
    {
      *((float *)self + 9) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 36);
      if ( *(uint32_t *)(a2 + 40) > 0xAu )
      {
        *((float *)self + 10) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 40);
        if ( *(uint32_t *)(a2 + 40) > 0xBu )
          *((float *)self + 11) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 44);
      }
    }
  }
  if ( *(uint32_t *)(a2 + 40) <= 0xCu )
    return self;
  *((float *)self + 12) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 48);
  if ( *(uint32_t *)(a2 + 40) <= 0xDu )
    return self;
  *((float *)self + 13) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 52);
  if ( *(uint32_t *)(a2 + 40) <= 0xEu )
    return self;
  *((float *)self + 14) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 56);
  if ( *(uint32_t *)(a2 + 40) <= 0xFu )
    return self;
  *((float *)self + 15) = (float)*(int *)(*(uint32_t *)(a2 + 16) + 60);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::IAttribute::getMatrix  (binary VA: 0xf05c40)
// Original: glitch::io::IAttribute::getMatrix
// ----------------------------------------------------------------------------
glitch::io::IAttribute::Self * glitch::io::IAttribute::getMatrix(glitch::io::IAttribute::Self *self)
{
  sub_A09C80((int)(uintptr_t)(self), 2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CTriangleAttribute::getPlane  (binary VA: 0xf05c80)
// Original: glitch::io::CTriangleAttribute::getPlane
// ----------------------------------------------------------------------------
float * glitch::io::CTriangleAttribute::getPlane(glitch::io::CTriangleAttribute::Self *self, int a2)
{
  float *v2;
  float v3; // xmm5_4
  float v4; // xmm2_4
  typedef float _g4_t_v6;
  typedef float _g4_t_v7;
  typedef float _g4_t_v8;
  typedef float _g4_t_v9;
  typedef float _g4_t_v10;
  typedef float _g4_t_v11;
  typedef float _g4_t_v12;
  typedef float _g4_t_v13;
  typedef float _g4_t_v14;
  typedef glitch::io::CTriangleAttribute::Self **_g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v8)) > _g4_s2 ? (8u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v9)) > _g4_s3 ? (12u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v10)) > _g4_s4 ? (16u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v11)) > _g4_s5 ? (20u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v12)) > _g4_s6 ? (24u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v13)) > _g4_s7 ? (28u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v14)) > _g4_s8 ? (32u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v15)) > _g4_s9 ? (48u + sizeof(_g4_t_v15)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);

  v15 = &self;
  v2 = (float *)self;
  (*(void (**)(float *, int))(*(uint32_t *)a2 + 76))(&v6, a2);
  v3 = (float)((float)(v11 - v8) * (float)(v12 - v6)) - (float)((float)(v14 - v8) * (float)(v9 - v6));
  v4 = (float)((float)(v13 - v7) * (float)(v9 - v6)) - (float)((float)(v12 - v6) * (float)(v10 - v7));
  *v2 = (float)((float)(v10 - v7) * (float)(v14 - v8)) - (float)((float)(v11 - v8) * (float)(v13 - v7));
  v2[1] = v3;
  v2[2] = v4;
  sub_5ED3D0(v2);
  v2[3] = -(float)((float)((float)(v2[1] * v7) + (float)(*v2 * v6)) + (float)(v2[2] * v8));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLightAttribute::setLight  (binary VA: 0xf05d80)
// Original: glitch::io::CLightAttribute::setLight
// ----------------------------------------------------------------------------
void glitch::io::CLightAttribute::setLight(glitch::io::CLightAttribute::Self *self, volatile int32_t **a2)
{
  volatile int32_t *v2;
  int v3;

  v2 = *a2;
  if ( *a2 != nullptr )
    sub_8B1B00(*a2);
  v3 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v2);
  if ( v3 != 0 && __sync_fetch_and_add((volatile int32_t *)v3, 0xFFFFFFFF) == 1 )
  {
    sub_5ED480((int *)(v3 + 96));
    sub_5ED480((int *)(v3 + 92));
    if ( *(uint8_t *)(v3 + 88) == 0 )
      sub_960FA0(*(uint32_t *)(v3 + 84));
    *(uint32_t *)(v3 + 84) = 0;
    opDelete((void *)v3);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLightAttribute::setLight  (binary VA: 0xf05e20)
// Original: glitch::io::CLightAttribute::setLight
// ----------------------------------------------------------------------------
void glitch::io::CLightAttribute::setLight(int a1, volatile int32_t **a2)
{
  volatile int32_t *v2;
  int v3;

  v2 = *a2;
  if ( *a2 != nullptr )
    sub_8B1B00(*a2);
  v3 = *(uint32_t *)(a1 + 16);
  *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v2);
  if ( v3 != 0 && __sync_fetch_and_add((volatile int32_t *)v3, 0xFFFFFFFF) == 1 )
  {
    sub_5ED480((int *)(v3 + 96));
    sub_5ED480((int *)(v3 + 92));
    if ( *(uint8_t *)(v3 + 88) == 0 )
      sub_960FA0(*(uint32_t *)(v3 + 84));
    *(uint32_t *)(v3 + 84) = 0;
    opDelete((void *)v3);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLightAttribute::Destroy  (binary VA: 0xf05ec0)
// Original: glitch::io::CLightAttribute::~CLightAttribute
// ----------------------------------------------------------------------------
void glitch::io::CLightAttribute::Destroy(glitch::io::CLightAttribute::Self *self)
{
  uint32_t *v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2084608);
  v1 = *((uint32_t **)self + 5);
  if ( v1 != nullptr )
    sub_5459C0((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 12)));
  v2 = *((uint32_t *)self + 4);
  if ( v2 != 0 && __sync_fetch_and_add((volatile int32_t *)v2, 0xFFFFFFFF) == 1 )
  {
    sub_5ED480((int *)(v2 + 96));
    sub_5ED480((int *)(v2 + 92));
    if ( *(uint8_t *)(v2 + 88) == 0 )
      sub_960FA0(*(uint32_t *)(v2 + 84));
    *(uint32_t *)(v2 + 84) = 0;
    opDelete((void *)v2);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CLightAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CLightAttribute::Destroy_eaf06080  (binary VA: 0xf06080)
// Original: glitch::io::CLightAttribute::~CLightAttribute
// ----------------------------------------------------------------------------
void glitch::io::CLightAttribute::Destroy_eaf06080(glitch::io::CLightAttribute::Self *self)
{
  uint32_t *v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2084608);
  v1 = *((uint32_t **)self + 5);
  if ( v1 != nullptr )
    sub_5459C0((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 12)));
  v2 = *((uint32_t *)self + 4);
  if ( v2 != 0 && __sync_fetch_and_add((volatile int32_t *)v2, 0xFFFFFFFF) == 1 )
  {
    sub_5ED480((int *)(v2 + 96));
    sub_5ED480((int *)(v2 + 92));
    if ( *(uint8_t *)(v2 + 88) == 0 )
      sub_960FA0(*(uint32_t *)(v2 + 84));
    *(uint32_t *)(v2 + 84) = 0;
    opDelete((void *)v2);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2082D48);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((glitch::io::CLightAttribute::Self *)((char *)self + 8));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CNumbersAttribute::getFloatArray  (binary VA: 0xf07180)
// Original: glitch::io::CNumbersAttribute::getFloatArray
// ----------------------------------------------------------------------------
glitch::io::CNumbersAttribute::Self * glitch::io::CNumbersAttribute::getFloatArray(glitch::io::CNumbersAttribute::Self *self, int a2)
{
  int v2;
  unsigned int v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  char *v8;
  char *v9;
  uint32_t *v10;
  float v12[8];

  if ( *(uint8_t *)(a2 + 44) == 0 )
  {
    v2 = *(uint32_t *)(a2 + 40);
    *(uint32_t *)(a2 + 32) = *(uint32_t *)(a2 + 28);
    if ( v2 == 0 )
    {
      *(uint32_t *)self = 0;
      *((uint32_t *)self + 1) = 0;
      *((uint32_t *)self + 2) = 0;
      v6 = 0;
      v5 = 0;
      goto LABEL_7;
    }
    v3 = 0;
    do
    {
      v12[0] = (float)*(int *)(*(uint32_t *)(a2 + 16) + 4 * v3++);
      g4_std::vector_float_SAllocator_float_m_63bc30::push_back(
        (std::vector<float, glitch::core::SAllocator<float, (glitch::memory::E_MEMORY_HINT)0>> *)(a2 + 28),
        v12);
    }
    while ( *(uint32_t *)(a2 + 40) > v3 );
  }
  v4 = (*(uint32_t *)(a2 + 32) - *(uint32_t *)(a2 + 28)) >> 2;
  v5 = 0;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  v6 = 4 * v4;
  if ( v4 != 0 )
    v5 = sub_4EBDC0(4 * v4);
LABEL_7:
  *(uint32_t *)self = v5;
  *((uint32_t *)self + 1) = v5;
  *((uint32_t *)self + 2) = v5 + v6;
  v7 = *(char **)(a2 + 32);
  v8 = *(char **)(a2 + 28);
  if ( v7 != v8 )
  {
    v9 = *(char **)(a2 + 28);
    v10 = (uint32_t *)v5;
    do
    {
      if ( v10 != nullptr )
        *v10 = *(uint32_t *)v9;
      v9 += 4;
      ++v10;
    }
    while ( v7 != v9 );
    v5 += 4 * ((unsigned int)(v7 - (v8 + 4)) >> 2) + 4;
  }
  *((uint32_t *)self + 1) = v5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::setInt  (binary VA: 0xf08590)
// Original: glitch::io::CStringAttribute::setInt
// ----------------------------------------------------------------------------
void glitch::io::CStringAttribute::setInt(glitch::io::CStringAttribute::Self *self, int a2)
{
  typedef uint8_t _g4_t_v2[4];
  typedef const wchar_t *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  if ( *((uint8_t *)self + 13) != 0 )
  {
    glitch::core::int2stringw((glitch::core::Self *)&v3, a2);
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
      (glitch::io::CStringAttribute::Self *)((char *)self + 20),
      &v3);
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v3);
  }
  else
  {
    glitch::core::int2stringc((glitch::core::Self *)v2, a2);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
      (glitch::io::CStringAttribute::Self *)((char *)self + 16),
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v2);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v2);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::setFloat  (binary VA: 0xf08630)
// Original: glitch::io::CStringAttribute::setFloat
// ----------------------------------------------------------------------------
int glitch::io::CStringAttribute::setFloat(glitch::io::CStringAttribute::Self *self, float a2)
{
  uint32_t *v2;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v4;
  size_t *v5;
  char *v6;
  char *v7;
  uint32_t *v8;
  typedef size_t *_g4_t_v9;
  typedef uint8_t *_g4_t_v10;
  typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v11;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef float _g4_t_src;
  typedef uint8_t *_g4_t_srca;
  typedef uint8_t *_g4_t_srcb;
  typedef glitch::io::CStringAttribute::Self *_g4_t_v17;
  typedef char *_g4_t_v18;
  typedef const char *_g4_t_v19;
  typedef char *_g4_t_v20;
  typedef const wchar_t *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v23;
  typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v24;
  typedef int (**_g4_t_v25)(int);
  typedef int (**_g4_t_v26)(int);
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t *_g4_t_v29;
  typedef uint8_t *_g4_t_v30;
  typedef uint8_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef char _g4_t_v33[4];
  typedef int _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef uint32_t _g4_t_v36[28];
  typedef int _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef glitch::io::CStringAttribute::Self **_g4_t_v44;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v10)) > _g4_s1 ? (0u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v11)) > _g4_s2 ? (4u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_n)) > _g4_s3 ? (8u + sizeof(_g4_t_n)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_na)) > _g4_s4 ? (8u + sizeof(_g4_t_na)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_src)) > _g4_s5 ? (28u + sizeof(_g4_t_src)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_srca)) > _g4_s6 ? (28u + sizeof(_g4_t_srca)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_srcb)) > _g4_s7 ? (28u + sizeof(_g4_t_srcb)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v17)) > _g4_s8 ? (36u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v18)) > _g4_s9 ? (36u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v19)) > _g4_s10 ? (52u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v20)) > _g4_s11 ? (56u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v21)) > _g4_s12 ? (60u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v22)) > _g4_s13 ? (64u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v23)) > _g4_s14 ? (68u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v24)) > _g4_s15 ? (72u + sizeof(_g4_t_v24)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v25)) > _g4_s16 ? (76u + sizeof(_g4_t_v25)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v26)) > _g4_s17 ? (80u + sizeof(_g4_t_v26)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v27)) > _g4_s18 ? (84u + sizeof(_g4_t_v27)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v28)) > _g4_s19 ? (88u + sizeof(_g4_t_v28)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v29)) > _g4_s20 ? (92u + sizeof(_g4_t_v29)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v30)) > _g4_s21 ? (96u + sizeof(_g4_t_v30)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v31)) > _g4_s22 ? (100u + sizeof(_g4_t_v31)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v32)) > _g4_s23 ? (104u + sizeof(_g4_t_v32)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v33)) > _g4_s24 ? (108u + sizeof(_g4_t_v33)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v34)) > _g4_s25 ? (112u + sizeof(_g4_t_v34)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v35)) > _g4_s26 ? (116u + sizeof(_g4_t_v35)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v36)) > _g4_s27 ? (120u + sizeof(_g4_t_v36)) : _g4_s27,
    _g4_s29 = (232u + sizeof(_g4_t_v37)) > _g4_s28 ? (232u + sizeof(_g4_t_v37)) : _g4_s28,
    _g4_s30 = (236u + sizeof(_g4_t_v38)) > _g4_s29 ? (236u + sizeof(_g4_t_v38)) : _g4_s29,
    _g4_s31 = (237u + sizeof(_g4_t_v39)) > _g4_s30 ? (237u + sizeof(_g4_t_v39)) : _g4_s30,
    _g4_s32 = (240u + sizeof(_g4_t_v40)) > _g4_s31 ? (240u + sizeof(_g4_t_v40)) : _g4_s31,
    _g4_s33 = (244u + sizeof(_g4_t_v41)) > _g4_s32 ? (244u + sizeof(_g4_t_v41)) : _g4_s32,
    _g4_s34 = (248u + sizeof(_g4_t_v42)) > _g4_s33 ? (248u + sizeof(_g4_t_v42)) : _g4_s33,
    _g4_s35 = (252u + sizeof(_g4_t_v43)) > _g4_s34 ? (252u + sizeof(_g4_t_v43)) : _g4_s34,
    _g4_s36 = (276u + sizeof(_g4_t_v44)) > _g4_s35 ? (276u + sizeof(_g4_t_v44)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 8u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 8u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 28u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 28u);
  _g4_t_srcb &srcb = *reinterpret_cast<_g4_t_srcb *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 88u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 104u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 108u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 116u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 120u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 232u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 236u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 237u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 240u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 244u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 248u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 252u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 276u);

  v44 = &self;
  v17 = self;
  src = a2;
  if ( *((uint8_t *)self + 13) == 0 )
  {
    sub_1900810(v36);
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v36[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v25 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    v42 = 0;
    v43 = 0;
    *(int (***)(int))((char *)&v25 + (uint32_t)*(&off_20AAE6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE80);
    sub_19119D0((char *)&v25 + (uint32_t)(uintptr_t)(*(v25 - 3)), 0);
    v27 = 0;
    v28 = 0;
    v29 = nullptr;
    v30 = nullptr;
    v25 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v36[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v31 = nullptr;
    v26 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    v32 = 0;
    sub_1903A70(v33);
    v26 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    v34 = 16;
    v35 = &dword_213B814;
    sub_19119D0(v36, &v26);
    g4_std::ostream::op_shl_double(&v25, COERCE__INT64(src));
    sub_1931AF0(&v19);
    sub_EA19F0(&v20, v19);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
      (glitch::io::CStringAttribute::Self *)((char *)v17 + 16),
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v20);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v20);
    v18 = (char *)(v19 - 12);
    if ( v19 - 12 != (const char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v19 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    v25 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
    v36[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
    v26 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    v2 = v35 - 3;
    if ( v35 - 3 != dword_213B808 && __sync_fetch_and_add(v35 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v2);
    v26 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    sub_1902180(v33);
    v25 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
    *(int (***)(int))((char *)&v25 + (uint32_t)*(&off_20AAE6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE80);
    goto LABEL_5;
  }
  sub_1900810(v36);
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v36[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v43 = 0;
  v25 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(int (***)(int))((char *)&v25 + (uint32_t)*(&off_20AAE6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE80);
  sub_19119D0((char *)&v25 + (uint32_t)(uintptr_t)(*(v25 - 3)), 0);
  v27 = 0;
  v28 = 0;
  v29 = nullptr;
  v30 = nullptr;
  v31 = nullptr;
  v32 = 0;
  v25 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v36[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v26 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v33);
  v34 = 16;
  v26 = (int (**)(int))(uintptr_t)(&off_20AADA8);
  v35 = &dword_213B814;
  sub_19119D0(v36, &v26);
  g4_std::ostream::op_shl_double(&v25, COERCE__INT64(src));
  v4 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&dword_213B814;
  v22 = (char *)&dword_213B814;
  if ( v31 != nullptr )
  {
    if ( v31 <= v29 )
    {
      srca = v30;
      if ( v29 == v30 )
        goto LABEL_14;
      if ( v30 != nullptr )
      {
        n = v29 - v30;
        v5 = (size_t *)sub_1938930(v29 - v30, 0);
        v4 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v5 + 3);
        if ( n == 1 )
        {
          *((uint8_t *)v5 + 12) = *srca;
LABEL_12:
          if ( v5 != (size_t *)(uintptr_t)(dword_213B808) )
          {
            v5[2] = 0;
            *v5 = n;
            *((uint8_t *)v4 + n) = 0;
          }
LABEL_14:
          v23 = v4;
          g4_std::string::assign_str(&v22, &v23);
          v6 = (char *)v23 - 12;
          if ( (uint32_t *)((char *)v23 - 12) == dword_213B808
            || __sync_fetch_and_add((volatile int32_t *)v23 - 1, 0xFFFFFFFF) > 0 )
          {
            goto LABEL_15;
          }
          goto LABEL_26;
        }
LABEL_11:
        v11 = v4;
        v9 = v5;
        memcpy(v4, srca, n);
        v5 = v9;
        v4 = v11;
        goto LABEL_12;
      }
      if ( v29 == nullptr )
      {
        v5 = (size_t *)sub_1938930(0, 0);
        v4 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v5 + 3);
        n = 0;
        goto LABEL_11;
      }
LABEL_29:
      sub_18FFFD0("basic_string::_S_construct null not valid");
    }
    if ( v31 != v30 )
    {
      if ( v30 == nullptr )
        goto LABEL_29;
      v10 = v30;
      srcb = (uint8_t *)(v31 - v30);
      na = sub_1938930(v31 - v30, 0);
      v4 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(na + 12);
      if ( srcb == (uint8_t *)&dword_0 + 1 )
      {
        *(uint8_t *)(na + 12) = *v10;
      }
      else
      {
        memcpy(v4, v10, (size_t)srcb);
        v4 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(na + 12);
      }
      if ( (uint32_t *)na != dword_213B808 )
      {
        *(uint32_t *)(na + 8) = 0;
        *(uint32_t *)na = (uint32_t)(uintptr_t)(srcb);
        srcb[na + 12] = 0;
      }
    }
    v24 = v4;
    g4_std::string::assign_str(&v22, &v24);
    v6 = (char *)v24 - 12;
    if ( (uint32_t *)((char *)v24 - 12) == dword_213B808
      || __sync_fetch_and_add((volatile int32_t *)v24 - 1, 0xFFFFFFFF) > 0 )
    {
      goto LABEL_15;
    }
LABEL_26:
    g4_std::string::Rep::M_destroy(v6);
    goto LABEL_15;
  }
  g4_std::string::assign_str(&v22, &v35);
LABEL_15:
  glitch::core::stringc2stringw((glitch::core::Self *)&v21, v22);
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
    (glitch::io::CStringAttribute::Self *)((char *)v17 + 20),
    &v21);
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v21);
  v7 = v22 - 12;
  if ( v22 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v7);
  v25 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v36[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v26 = (int (**)(int))(uintptr_t)(&off_20AADA8);
  v8 = v35 - 3;
  if ( v35 - 3 != dword_213B808 && __sync_fetch_and_add(v35 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v8);
  v26 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
  sub_1902180(v33);
  v25 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(int (***)(int))((char *)&v25 + (uint32_t)*(&off_20AAE6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE80);
LABEL_5:
  v36[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(v36);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringWArrayAttribute::setArray  (binary VA: 0xf09100)
// Original: glitch::io::CStringWArrayAttribute::setArray
// ----------------------------------------------------------------------------
std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> * glitch::io::CStringWArrayAttribute::setArray(int a1, std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  return g4_std::vector_basic_string_wchar_t_cha_acf405::opAssign(
           (std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *)(a1 + 16),
           a2);
}



// ============================================================================
// Address:   0xf09500 (size: 169 bytes)
// Symbol:    _ZN6glitch2io23CBinaryAttributesWriter11writeStringIcSt11char_traitsIcENS_4core10SAllocatorIcLNS_6memory13E_MEMORY_HINTE0EEEEEvRKSbIT_T0_T1_E
// Demangled: void glitch::io::CBinaryAttributesWriter::writeString<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)
// ============================================================================
int glitch::io::CBinaryAttributesWriter::writeString_glitch(
        glitch::io::CBinaryAttributesWriter::Self *self,
        const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  int result;
  unsigned int v3;
  typedef char _g4_t_v4;
  typedef uint32_t _g4_t_v5[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (11u + sizeof(_g4_t_v4)) > _g4_s0 ? (11u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 11u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v5[0] = *(uint32_t *)(*(uint32_t *)a2 - 12);
  result = (*(int (**)(uint32_t, uint32_t *, int))(**((uint32_t **)self + 1) + 12))(*((uint32_t *)self + 1), v5, 4);
  if ( v5[0] != 0 )
  {
    if ( *((uint8_t *)self + 12) != 0 )
    {
      result = *(uint32_t *)a2;
      if ( *(uint32_t *)(*(uint32_t *)a2 - 12) != 0 )
      {
        v3 = 0;
        do
        {
          v4 = *(uint8_t *)(result + v3++);
          (*(void (**)(uint32_t, char *, int))(**((uint32_t **)self + 1) + 12))(*((uint32_t *)self + 1), &v4, 1);
          result = *(uint32_t *)a2;
        }
        while ( v3 < *(uint32_t *)(*(uint32_t *)a2 - 12) );
      }
    }
    else
    {
      return (*(int (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 1) + 12))(
               *((uint32_t *)self + 1),
               *(uint32_t *)a2,
               *(uint32_t *)(*(uint32_t *)a2 - 12));
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::setEnum  (binary VA: 0xf0f380)
// Original: glitch::io::CEnumAttribute::setEnum
// ----------------------------------------------------------------------------
int glitch::io::CEnumAttribute::setEnum(const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **self, const char *a2, const char **a3)
{
  const char **v3;
  glitch::io::CEnumAttribute::Self *v4;
  const char *v5;
  unsigned int v6;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v7;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v8;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v9;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v10;
  int v11;
  glitch::io::CEnumAttribute::Self *v12;
  int v13;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v14;
  int v15;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v17;
  typedef const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef const char **_g4_t_v21;
  typedef int _g4_t_v22;
  typedef char *_g4_t_v23[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v18)) > _g4_s1 ? (24u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v19)) > _g4_s2 ? (28u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v20)) > _g4_s3 ? (32u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v21)) > _g4_s4 ? (36u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v22)) > _g4_s5 ? (40u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v23)) > _g4_s6 ? (60u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);

  v3 = a3;
  v4 = (glitch::io::CEnumAttribute::Self *)self;
  if ( a3 != nullptr )
  {
    v5 = *a3;
    if ( *a3 != nullptr )
    {
      v6 = 0;
      do
        ++v6;
      while ( a3[v6] != nullptr );
      if ( v6 > 0x3FFFFFFF )
        sub_1900180("vector::reserve");
      v7 = *(self + 5);
      if ( v6 <= (*(self + 7) - v7) >> 2 )
        goto LABEL_32;
      v8 = *(self + 6);
      v22 = 0;
      v19 = 0;
      v20 = (v8 - v7) >> 2;
      if ( v6 != 0 )
      {
        v18 = *(self + 6);
        v22 = 4 * v6;
        v19 = sub_4EBDC0(4 * v6);
        v8 = v18;
      }
      if ( v7 != v8 )
      {
        v9 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v19;
        v10 = v8;
        do
        {
          if ( v9 != nullptr )
            g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
              v9,
              v7);
          v7 = (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v7 + 4);
          v9 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v9 + 4);
        }
        while ( v10 != v7 );
        v4 = (glitch::io::CEnumAttribute::Self *)self;
        v3 = a3;
      }
      v11 = *((uint32_t *)v4 + 5);
      if ( *((uint32_t *)v4 + 6) != v11 )
      {
        v21 = v3;
        v12 = v4;
        v13 = *((uint32_t *)v4 + 6);
        do
        {
          v17 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v11;
          v11 += 4;
          g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(v17);
        }
        while ( v13 != v11 );
        v4 = v12;
        v3 = v21;
        v11 = *((uint32_t *)v4 + 5);
      }
      if ( v11 != 0 )
        gll_operator_delete_arr(v11);
      *((uint32_t *)v4 + 5) = v19;
      *((uint32_t *)v4 + 6) = v19 + 4 * v20;
      *((uint32_t *)v4 + 7) = v19 + v22;
      v5 = *v3;
      if ( *v3 != nullptr )
      {
LABEL_32:
        do
        {
          sub_EA19F0(v23, v5);
          v14 = *((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)v4
                + 6);
          if ( v14 == *((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)v4
                      + 7) )
          {
            g4_std_compat::vector_insert_aux(
              (int)(uintptr_t)(v4) + 20,
              v14,
              (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v23);
          }
          else
          {
            v15 = 0;
            if ( v14 != nullptr )
            {
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
                v14,
                (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v23);
              v15 = *((uint32_t *)v4 + 6);
            }
            *((uint32_t *)v4 + 6) = v15 + 4;
          }
          ++v3;
          g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v23);
          v5 = *v3;
        }
        while ( *v3 != nullptr );
      }
    }
  }
  return G4_VCALL<int>(v4, 148, a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::setBinary  (binary VA: 0xf140e0)
// Original: glitch::io::CStringAttribute::setBinary
// ----------------------------------------------------------------------------
char glitch::io::CStringAttribute::setBinary(const void **self, uint8_t *a2, int a3)
{
  unsigned int v3;
  int i;
  char v5;
  unsigned int v6;
  unsigned int v7;
  int *v8;
  int v9;
  bool v10;
  size_t v11;
  unsigned int v12;
  int v13;
  uint8_t *v14;
  uint8_t *v15;
  typedef uint8_t *_g4_t_v17;
  typedef volatile int32_t **_g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef uint8_t _g4_t_v21[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v19)) > _g4_s2 ? (20u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v20)) > _g4_s3 ? (24u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v21)) > _g4_s4 ? (32u + sizeof(_g4_t_v21)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);

  v21[2] = 0;
  v18 = (volatile int32_t **)(self + 4);
  LOBYTE(v3) = (uint8_t)(uintptr_t)g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
                                  self + 4,
                                  (char *)&unk_1B15112);
  if ( a3 > 0 )
  {
    for ( i = 0; i != a3; ++i )
    {
      v5 = a2[i];
      v6 = (v5 & 0xF0) >> 4;
      if ( v6 <= 9 )
        v21[0] = v6 + 48;
      if ( v6 - 10 <= 5 )
        v21[0] = v6 + 87;
      v7 = v5 & 0xF;
      if ( v7 <= 9 )
        v21[1] = v7 + 48;
      if ( v7 - 10 <= 5 )
        v21[1] = v7 + 87;
      v8 = (int *)v21;
      do
      {
        v9 = *v8++;
        v3 = ~v9 & (v9 - 16843009) & 0x80808080;
      }
      while ( v3 == 0 );
      if ( (~v9 & (v9 - 16843009) & 0x8080) == 0 )
      {
        v3 >>= 16;
        v8 = (int *)((char *)v8 + 2);
      }
      v10 = __CFADD__((uint8_t)v3, (uint8_t)v3);
      LOBYTE(v3) = 2 * v3;
      v11 = ((char *)v8 - (char *)v21) - v10 - 3;
      if ( v11 == 0 )
        continue;
      v12 = (unsigned int)(uintptr_t)(*(self + 4));
      v13 = *(uint32_t *)(v12 - 12);
      if ( v11 > 1073741820 - v13 )
        sub_1900180("basic_string::append");
      v20 = v11 + v13;
      v19 = *(uint32_t *)(v12 - 8);
      if ( v11 + v13 <= v19 && *(int *)(v12 - 4) <= 0 )
        goto LABEL_34;
      if ( v12 <= (unsigned int)(uintptr_t)(v21) )
      {
        v14 = (uint8_t *)(v12 + v13);
        if ( v12 + v13 >= (unsigned int)(uintptr_t)(v21) )
        {
          v17 = &v21[-v12];
          if ( v20 != v19 || *(int *)(v12 - 4) > 0 )
          {
            sub_EA1BB0(v18, v20);
            v12 = (unsigned int)(uintptr_t)(*(self + 4));
            v14 = (uint8_t *)(v12 + *(uint32_t *)(v12 - 12));
          }
          v15 = &v17[v12];
          goto LABEL_28;
        }
      }
      if ( v20 == v19 && *(int *)(v12 - 4) <= 0 )
      {
LABEL_34:
        v14 = (uint8_t *)(v12 + v13);
        v15 = v21;
      }
      else
      {
        sub_EA1BB0(v18, v20);
        v15 = v21;
        v14 = (uint8_t *)((char *)*(self + 4) + *((uint32_t *)*(self + 4) - 3));
      }
LABEL_28:
      if ( v11 == 1 )
        *v14 = *v15;
      else
        memcpy(v14, v15, v11);
      v3 = (unsigned int)(uintptr_t)(*(self + 4));
      if ( (int *)(v3 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        *(uint32_t *)(v3 - 4) = 0;
        *(uint32_t *)(v3 - 12) = v20;
        *(uint8_t *)(v3 + v20) = 0;
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::setString  (binary VA: 0xf142f0)
// Original: glitch::io::CEnumAttribute::setString
// ----------------------------------------------------------------------------
const void ** glitch::io::CEnumAttribute::setString(const void **self, char *a2)
{
  return g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
           self + 4,
           a2);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CEnumAttribute::setInt  (binary VA: 0xf14320)
// Original: glitch::io::CEnumAttribute::setInt
// ----------------------------------------------------------------------------
const void ** glitch::io::CEnumAttribute::setInt(const void **self, int a2)
{
  int v2;

  if ( a2 >= 0 && (v2 = (int)(uintptr_t)(*(self + 5)), a2 < ((int)(uintptr_t)(*(self + 6)) - v2) >> 2) )
    return (const void **)g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
                            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(self + 4),
                            (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v2 + 4 * a2));
  else
    return g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
             self + 4,
             (char *)&unk_1B15112);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::setString  (binary VA: 0xf14400)
// Original: glitch::io::CStringAttribute::setString
// ----------------------------------------------------------------------------
void glitch::io::CStringAttribute::setString(const void **self, char *a2)
{
  typedef const wchar_t *_g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  if ( *((uint8_t *)self + 13) != 0 )
  {
    glitch::core::stringc2stringw((glitch::core::Self *)&v2, a2);
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
      (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(self + 5),
      &v2);
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v2);
  }
  else
  {
    g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
      self + 4,
      a2);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::convertTextData_unsigned_long_ed2d4b  (binary VA: 0xf146b0)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::convertTextData<unsigned long>
// ----------------------------------------------------------------------------
void glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::convertTextData_unsigned_long_ed2d4b(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self, unsigned int *a2, char *a3, int a4)
{
  unsigned int v4;
  char v5;
  unsigned int v6;
  char v7;
  unsigned int v8;
  unsigned int *v9;

  v4 = *((uint32_t *)self + 8);
  if ( v4 == 3 || (v5 = v4 == 5, v4 <= 1) )
    v5 = 1;
  v6 = *((uint32_t *)self + 7);
  v7 = v6 == 3 || v6 <= 1 || v6 == 5;
  if ( v5 != v7 )
  {
    v8 = *a2;
    if ( *a2 != 0 )
    {
      v9 = a2;
      do
      {
        *v9++ = __builtin_bswap32(v8);
        v8 = *v9;
      }
      while ( *v9 != 0 );
    }
  }
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 5) = a4;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::convertTextData_unsigned_short_1a3424  (binary VA: 0xf14720)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::convertTextData<unsigned short>
// ----------------------------------------------------------------------------
void glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::convertTextData_unsigned_short_1a3424(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self, uint16_t *a2, char *a3, int a4)
{
  unsigned int v4;
  char v5;
  unsigned int v6;
  char v7;
  uint16_t v8;
  uint16_t *v9;
  int v10;
  int i;

  v4 = *((uint32_t *)self + 8);
  if ( v4 == 3 || (v5 = v4 == 5, v4 <= 1) )
    v5 = 1;
  v6 = *((uint32_t *)self + 7);
  v7 = v6 == 3 || v6 <= 1 || v6 == 5;
  if ( v5 != v7 )
  {
    v8 = *a2;
    if ( *a2 != 0 )
    {
      v9 = a2;
      do
      {
        *v9++ = (v8 << 8) | ((int)v8 >> 8);
        v8 = *v9;
      }
      while ( *v9 != 0 );
    }
  }
  v10 = opNewArray(4 * a4);
  *((uint32_t *)self + 2) = v10;
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      *(uint32_t *)(v10 + 4 * i) = a2[i];
      v10 = *((uint32_t *)self + 2);
    }
  }
  *((uint32_t *)self + 4) = v10;
  *((uint32_t *)self + 5) = a4;
  if ( a3 != nullptr )
    opDeleteArray(a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::convertTextData_char_id_117481  (binary VA: 0xf14820)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::convertTextData<char>
// ----------------------------------------------------------------------------
void glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::convertTextData_char_id_117481(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self, char *a2, char *a3, int a4)
{
  int v4;
  int i;

  v4 = opNewArray(4 * a4);
  *((uint32_t *)self + 2) = v4;
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      *(uint32_t *)(v4 + 4 * i) = a2[i];
      v4 = *((uint32_t *)self + 2);
    }
  }
  *((uint32_t *)self + 4) = v4;
  *((uint32_t *)self + 5) = a4;
  if ( a3 != nullptr )
    opDeleteArray(a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::readFile  (binary VA: 0xf148a0)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::readFile
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::readFile(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self, glitch::io::IFileReadCallBack::Self *a2)
{
  int result;
  int v3;
  uint8_t *v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  __m128i *v9;
  unsigned int v10;
  int v11;
  int v12;
  int i;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  int v30;

  v29 = G4_VCALL<int>(a2, 12, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25);
  result = 0;
  if ( v29 >= 0 )
  {
    v30 = v29 + 4;
    v3 = opNewArray(v29 + 4);
    v26 = v29 + 3;
    v4 = (uint8_t *)v3;
    v5 = -v3 & 0xF;
    if ( v5 > v30 )
      v5 = v29 + 4;
    if ( v5 == 0 )
      goto LABEL_9;
    v27 = v3;
    v6 = 0;
    do
    {
      *v4 = 0;
      v7 = v29 + 2 - v6++;
      ++v4;
    }
    while ( v5 > v6 );
    v26 = v7;
    v3 = v27;
    if ( v5 != v30 )
    {
LABEL_9:
      a2 = (glitch::io::IFileReadCallBack::Self *)(v30 - v5);
      v8 = (v30 - v5) >> 4;
      v28 = 16 * v8;
      if ( 16 * v8 == 0 )
        goto LABEL_13;
      v9 = (__m128i *)(v3 + v5);
      v10 = 0;
      do
      {
        ++v10;
        *v9++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v10 < v8 );
      v4 += v28;
      v26 -= v28;
      if ( a2 != (glitch::io::IFileReadCallBack::Self *)v28 )
      {
LABEL_13:
        v11 = v26;
        do
        {
          --v11;
          *v4++ = 0;
        }
        while ( v11 != -1 );
      }
    }
    result = G4_VCALL<int>(a2, 8, v3, v29);
    if ( result != 0 )
    {
      *(uint8_t *)(v3 + v29 + 3) = 0;
      *(uint8_t *)(v3 + v30 - 2) = 0;
      *(uint8_t *)(v3 + v30 - 3) = 0;
      *(uint8_t *)(v3 + v29) = 0;
      if ( *(uint32_t *)v3 == -131072 )
      {
        *((uint32_t *)self + 7) = 4;
        glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::convertTextData_unsigned_long_ed2d4b(
          self,
          (unsigned int *)(v3 + 4),
          (char *)v3,
          (v30 >> 2) - 1);
        return 1;
      }
      else if ( *(uint32_t *)v3 == 65279 )
      {
        *((uint32_t *)self + 7) = 5;
        glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::convertTextData_unsigned_long_ed2d4b(
          self,
          (unsigned int *)(v3 + 4),
          (char *)v3,
          (v30 >> 2) - 1);
        return 1;
      }
      else if ( *(uint16_t *)v3 == 0xFFFE )
      {
        *((uint32_t *)self + 7) = 2;
        glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::convertTextData_unsigned_short_1a3424(
          self,
          (uint16_t *)(v3 + 2),
          (char *)v3,
          (v30 >> 1) - 1);
        return 1;
      }
      else if ( *(uint16_t *)v3 == 0xFEFF )
      {
        *((uint32_t *)self + 7) = 3;
        glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::convertTextData_unsigned_short_1a3424(
          self,
          (uint16_t *)(v3 + 2),
          (char *)v3,
          (v30 >> 1) - 1);
        return 1;
      }
      else
      {
        *((uint32_t *)self + 7) = 0;
        v12 = opNewArray(4 * v30);
        *((uint32_t *)self + 2) = v12;
        for ( i = 0; ; ++i )
        {
          *(uint32_t *)(v12 + 4 * i) = *(char *)(v3 + i);
          if ( i == v29 + 3 )
            break;
          v12 = *((uint32_t *)self + 2);
        }
        v14 = *((uint32_t *)self + 2);
        *((uint32_t *)self + 5) = v30;
        *((uint32_t *)self + 4) = v14;
        opDeleteArray((void *)v3);
        return 1;
      }
    }
    else if ( v3 != 0 )
    {
      opDeleteArray((void *)v3);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::convertTextData_unsigned_long_ed2d4b  (binary VA: 0xf14b80)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::convertTextData<unsigned long>
// ----------------------------------------------------------------------------
void glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::convertTextData_unsigned_long_ed2d4b(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self, unsigned int *a2, char *a3, int a4)
{
  unsigned int v4;
  char v5;
  unsigned int v6;
  char v7;
  unsigned int v8;
  unsigned int *v9;
  int v10;
  int i;

  v4 = *((uint32_t *)self + 8);
  if ( v4 == 3 || (v5 = v4 == 5, v4 <= 1) )
    v5 = 1;
  v6 = *((uint32_t *)self + 7);
  v7 = v6 == 3 || v6 <= 1 || v6 == 5;
  if ( v5 != v7 )
  {
    v8 = *a2;
    if ( *a2 != 0 )
    {
      v9 = a2;
      do
      {
        *v9++ = __builtin_bswap32(v8);
        v8 = *v9;
      }
      while ( *v9 != 0 );
    }
  }
  v10 = opNewArray(a4);
  *((uint32_t *)self + 2) = v10;
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      *(uint8_t *)(v10 + i) = a2[i];
      v10 = *((uint32_t *)self + 2);
    }
  }
  *((uint32_t *)self + 4) = v10;
  *((uint32_t *)self + 5) = a4;
  if ( a3 != nullptr )
    opDeleteArray(a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::convertTextData_unsigned_short_1a3424  (binary VA: 0xf14c60)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::convertTextData<unsigned short>
// ----------------------------------------------------------------------------
void glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::convertTextData_unsigned_short_1a3424(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self, uint16_t *a2, char *a3, int a4)
{
  unsigned int v4;
  char v5;
  unsigned int v6;
  char v7;
  uint16_t v8;
  uint16_t *v9;
  int v10;
  int i;

  v4 = *((uint32_t *)self + 8);
  if ( v4 == 3 || (v5 = v4 == 5, v4 <= 1) )
    v5 = 1;
  v6 = *((uint32_t *)self + 7);
  v7 = v6 == 3 || v6 <= 1 || v6 == 5;
  if ( v5 != v7 )
  {
    v8 = *a2;
    if ( *a2 != 0 )
    {
      v9 = a2;
      do
      {
        *v9++ = (v8 << 8) | ((int)v8 >> 8);
        v8 = *v9;
      }
      while ( *v9 != 0 );
    }
  }
  v10 = opNewArray(a4);
  *((uint32_t *)self + 2) = v10;
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      *(uint8_t *)(v10 + i) = a2[i];
      v10 = *((uint32_t *)self + 2);
    }
  }
  *((uint32_t *)self + 5) = a4;
  *((uint32_t *)self + 4) = v10;
  if ( a3 != nullptr )
    opDeleteArray(a3);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::readFile  (binary VA: 0xf14d60)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::readFile
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::readFile(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self, glitch::io::IFileReadCallBack::Self *a2)
{
  int result;
  int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __m128i *v8;
  unsigned int v9;
  glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  uint32_t *v27;

  v26 = G4_VCALL<int>(a2, 12, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22);
  result = 0;
  if ( v26 < 0 )
    return result;
  v25 = v26 + 4;
  v3 = opNewArray(v26 + 4);
  v27 = (uint32_t *)v3;
  v4 = v26 + 3;
  v5 = -v3 & 0xF;
  if ( v5 > v26 + 4 )
    v5 = v26 + 4;
  if ( v5 == 0 )
    goto LABEL_31;
  v6 = 0;
  do
  {
    *(uint8_t *)v3 = 0;
    v4 = v26 + 2 - v6++;
    ++v3;
  }
  while ( v6 < v5 );
  if ( v25 != v5 )
  {
LABEL_31:
    v23 = v25 - v5;
    v7 = (v25 - v5) >> 4;
    v24 = 16 * v7;
    if ( 16 * v7 == 0 )
      goto LABEL_32;
    v8 = (__m128i *)((char *)v27 + v5);
    v9 = 0;
    do
    {
      ++v9;
      *v8++ = g4_m128_from<__m128i>(0LL);
    }
    while ( v9 < v7 );
    v3 += v24;
    v4 -= v24;
    if ( v23 != v24 )
    {
LABEL_32:
      do
      {
        --v4;
        *(uint8_t *)v3++ = 0;
      }
      while ( v4 != -1 );
    }
  }
  result = G4_VCALL<int>(a2, 8, v27, v26);
  if ( result == 0 )
  {
    if ( v27 != nullptr )
    {
      opDeleteArray(v27);
      return 0;
    }
    return result;
  }
  *((uint8_t *)v27 + v26 + 3) = 0;
  *((uint8_t *)v27 + v25 - 2) = 0;
  *((uint8_t *)v27 + v25 - 3) = 0;
  *((uint8_t *)v27 + v26) = 0;
  if ( *v27 == -131072 )
  {
    v10 = self;
    v11 = v26 + 4;
    *((uint32_t *)self + 7) = 4;
    goto LABEL_25;
  }
  if ( *v27 == 65279 )
  {
    v10 = self;
    v11 = v26 + 4;
    *((uint32_t *)self + 7) = 5;
LABEL_25:
    glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::convertTextData_unsigned_long_ed2d4b(
      v10,
      v27 + 1,
      (char *)v27,
      (v11 >> 2) - 1);
    return 1;
  }
  if ( *(uint16_t *)v27 == 0xFFFE )
  {
    *((uint32_t *)self + 7) = 2;
    glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::convertTextData_unsigned_short_1a3424(
      self,
      (uint16_t *)v27 + 1,
      (char *)v27,
      (v25 >> 1) - 1);
    return 1;
  }
  else
  {
    if ( *(uint16_t *)v27 == 0xFEFF )
    {
      *((uint32_t *)self + 7) = 3;
      glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::convertTextData_unsigned_short_1a3424(
        self,
        (uint16_t *)v27 + 1,
        (char *)v27,
        (v25 >> 1) - 1);
    }
    else
    {
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v27);
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v27);
      *((uint32_t *)self + 7) = 0;
      *((uint32_t *)self + 5) = v25;
    }
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CBinaryAttributesReader::readStringImpl_wchar_t_char_traits_wcha_f2e7c4  (binary VA: 0xf17e60)
// Original: glitch::io::CBinaryAttributesReader::readStringImpl<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>,4u>
// ----------------------------------------------------------------------------
void glitch::io::CBinaryAttributesReader::readStringImpl_wchar_t_char_traits_wcha_f2e7c4(glitch::io::CBinaryAttributesReader::Self *self, const wchar_t **a2, int a3, int a4, int a5, int a6, int a7, unsigned int a8)
{
  uint32_t v8;
  wchar_t * v9;
  size_t v10;
  int v11;
  int i;
  const wchar_t *v13;
  int v14;
  int v15;
  unsigned int v16;
  wchar_t *v17;
  int v28;
  size_t v29;
  void (*v30)(int, const wchar_t *, uint32_t);
  wchar_t *v31;
  size_t v32;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v20)) > _g4_s2 ? (20u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v21)) > _g4_s3 ? (24u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v22)) > _g4_s4 ? (28u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v23)) > _g4_s5 ? (32u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v24)) > _g4_s6 ? (36u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v25)) > _g4_s7 ? (40u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v26)) > _g4_s8 ? (44u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v27)) > _g4_s9 ? (48u + sizeof(_g4_t_v27)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);

  (*(void (**)(uint32_t, int *, int, int, int, int, int, int, int, int, int, int))(**((uint32_t **)self + 1) + 12))(
    *((uint32_t *)self + 1),
    &v27,
    4,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v8 = a8;
  if ( *((uint8_t *)self + 12) != 0 )
  {
    v8 = __builtin_bswap32(a8);
    a8 = v8;
  }
  v9 = (wchar_t *)(*a2);
  v32 = v8 >> 2;
  v10 = *(*a2 - 3);
  if ( v8 >> 2 > 0xFFFFFFE )
    sub_1900180("basic_string::resize");
  if ( v32 <= v10 )
  {
    if ( v32 < v10 )
    {
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::M_mutate(
        a2,
        v32,
        v10 - v32,
        0);
      v8 = a8;
      v9 = (wchar_t *)(*a2);
    }
  }
  else
  {
    v29 = v32 - v10;
    if ( v32 != v10 )
    {
      if ( v29 > 268435454 - v10 )
        sub_1900180("basic_string::append");
      if ( v32 > *(v9 - 2) || *(v9 - 1) > 0 )
      {
        sub_EA3030((wchar_t **)a2, v32);
        v9 = (wchar_t *)(*a2);
        v10 = *(*a2 - 3);
      }
      v17 = (wchar_t *)&v9[v10];
      if ( v29 == 1 )
        *v17 = 0;
      else
        wmemset(v17, 0, v29);
      v9 = (wchar_t *)(*a2);
      if ( *a2 - 3 == (const wchar_t *)(uintptr_t)(g4_empty_string_rep) )
      {
        v8 = a8;
      }
      else
      {
        *((uint32_t *)v9 - 1) = 0;
        *((uint32_t *)v9 - 3) = v32;
        v9[v32] = 0;
        v8 = a8;
        v9 = (wchar_t *)(*a2);
      }
    }
  }
  v11 = *((uint32_t *)self + 1);
  v30 = *(void (**)(int, const wchar_t *, uint32_t))(*(uint32_t *)v11 + 12);
  if ( *(v9 - 1) >= 0
    && v9 - 3 != (const wchar_t *)(uintptr_t)(g4_empty_string_rep) )
  {
    if ( *(v9 - 1) != 0 )
    {
      v28 = *((uint32_t *)self + 1);
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::M_mutate(
        a2,
        0,
        0,
        0);
      v9 = (wchar_t *)(*a2);
      v11 = v28;
    }
    *((uint32_t *)v9 - 1) = -1;
    v9 = (wchar_t *)(*a2);
  }
  v30(v11, v9, v8);
  if ( *((uint8_t *)self + 12) != 0 && v32 != 0 )
  {
    for ( i = 0; i != v32; ++i )
    {
      v13 = *a2;
      v14 = *(*a2 - 1);
      v31 = (wchar_t *)&(*a2)[i];
      if ( v14 >= 0
        && v13 - 3 != (const wchar_t *)(uintptr_t)(g4_empty_string_rep) )
      {
        if ( v14 != 0 )
        {
          g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::M_mutate(
            a2,
            0,
            0,
            0);
          v13 = *a2;
        }
        *((uint32_t *)v13 - 1) = -1;
        v13 = *a2;
        v31 = (wchar_t *)&(*a2)[i];
        v15 = *(*a2 - 1);
        if ( v15 >= 0
          && v13 - 3 != (const wchar_t *)(uintptr_t)(g4_empty_string_rep) )
        {
          if ( v15 != 0 )
          {
            g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::M_mutate(
              a2,
              0,
              0,
              0);
            v13 = *a2;
          }
          *((uint32_t *)v13 - 1) = -1;
          v13 = *a2;
        }
      }
      v16 = v13[i];
      *v31 = __builtin_bswap32(v16);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CStringAttribute::setString  (binary VA: 0xf18130)
// Original: glitch::io::CStringAttribute::setString
// ----------------------------------------------------------------------------
void glitch::io::CStringAttribute::setString(glitch::io::CStringAttribute::Self *self, wchar_t *s)
{
  const wchar_t *v2;
  size_t v3;
  const wchar_t *v4;
  const wchar_t *v5;
  char *v6;
  int v7;
  unsigned int v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  char *v23;
  wchar_t v24;
  size_t v25;
  wchar_t *v26;
  unsigned int v27;
  wchar_t *v28;
  unsigned int v29;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef char *_g4_t_v34;
  typedef uint32_t _g4_t_v35[3];
  typedef uint32_t _g4_t_v36[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v30)) > _g4_s0 ? (8u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v31)) > _g4_s1 ? (12u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v32)) > _g4_s2 ? (20u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v33)) > _g4_s3 ? (28u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v34)) > _g4_s4 ? (28u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v35)) > _g4_s5 ? (32u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v36)) > _g4_s6 ? (44u + sizeof(_g4_t_v36)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);

  v2 = s;
  if ( *((uint8_t *)self + 13) == 0 )
  {
    if ( s == nullptr )
    {
      v35[0] = (uint32_t)(uintptr_t)(byte_20D3E78);
      goto LABEL_16;
    }
    v3 = wcslen(s);
    v4 = &s[v3];
    if ( s == v4 )
    {
      v6 = (char *)(uintptr_t)(byte_20D3E78);
LABEL_15:
      v36[0] = (uint32_t)(uintptr_t)(v6);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v35,
        (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v36);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v36);
LABEL_16:
      g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
        (glitch::io::CStringAttribute::Self *)((char *)self + 16),
        (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v35);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v35);
      return;
    }
    v32 = (int)(4 * v3) >> 2;
    v30 = (int *)sub_EA0970(v32, 0);
    v5 = s + 1;
    v6 = (char *)(v30 + 3);
    v33 = ((unsigned int)((char *)v4 - (char *)(s + 1)) >> 2) + 1;
    v31 = 16 * (v33 >> 4);
    if ( v31 != 0 && (v6 > (char *)&s[v33] || s > (wchar_t *)&v6[v33]) && v33 > 0xF )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = *(__m128i *)&s[v7 + 4];
        v10 = *(__m128i *)&s[v7];
        v11 = _mm_unpacklo_epi16(v10, v9);
        v12 = _mm_unpackhi_epi16(v10, v9);
        v13 = *(__m128i *)&s[v7 + 12];
        v14 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v11, v12), _mm_unpackhi_epi16(v11, v12));
        v15 = *(__m128i *)&s[v7 + 8];
        v16 = _mm_unpacklo_epi16(v15, v13);
        v17 = _mm_unpackhi_epi16(v15, v13);
        v18 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v16, v17), _mm_unpackhi_epi16(v16, v17));
        ++v8;
        v19 = _mm_unpackhi_epi8(v14, v18);
        v20 = _mm_unpacklo_epi8(v14, v18);
        v21 = _mm_unpacklo_epi8(v20, v19);
        v22 = _mm_unpackhi_epi8(v20, v19);
        *(__m128i *)&v6[v7] = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v21, v22), _mm_unpackhi_epi8(v21, v22));
        v7 += 16;
      }
      while ( v33 >> 4 > v8 );
      v23 = &v6[v31];
      v2 = &s[16 * (v33 >> 4)];
      if ( v33 == v31 )
      {
LABEL_13:
        if ( v30 != (int *)(uintptr_t)(&dword_20D3E6C) )
        {
          v30[2] = 0;
          *v30 = v32;
          *((uint8_t *)v30 + v32 + 12) = 0;
        }
        goto LABEL_15;
      }
      v5 = v2 + 1;
      v34 = (char *)(v30 + 3);
    }
    else
    {
      v23 = (char *)(v30 + 3);
      v34 = (char *)(v30 + 3);
    }
    while ( 1 )
    {
      v24 = *v2;
      v2 = v5;
      *v23++ = v24;
      if ( v4 == v5 )
        break;
      ++v5;
    }
    v6 = v34;
    goto LABEL_13;
  }
  v25 = wcslen(s);
  v26 = *((wchar_t **)self + 5);
  v27 = *(v26 - 3);
  if ( v25 > 0xFFFFFFE )
    sub_1900180("basic_string::assign");
  if ( s < v26 || s > &v26[v27] || *(v26 - 1) > 0 )
  {
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::M_mutate(
      (const wchar_t **)self + 5,
      0,
      v27,
      v25);
    if ( v25 != 0 )
    {
      v28 = *((wchar_t **)self + 5);
      if ( v25 == 1 )
        *v28 = *s;
      else
        wmemcpy(v28, s, v25);
    }
    return;
  }
  v29 = s - v26;
  if ( v25 <= v29 )
  {
    if ( v25 != 1 )
    {
      wmemcpy(v26, s, v25);
      v26 = *((wchar_t **)self + 5);
      goto LABEL_31;
    }
  }
  else
  {
    if ( v29 == 0 )
      goto LABEL_31;
    if ( v25 != 1 )
    {
      wmemmove(v26, s, v25);
      v26 = *((wchar_t **)self + 5);
      goto LABEL_31;
    }
  }
  *v26 = *s;
  v26 = *((wchar_t **)self + 5);
LABEL_31:
  if ( v26 - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
  {
    *(v26 - 1) = 0;
    *(v26 - 3) = v25;
    v26[v25] = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::parseOpeningXMLElement  (binary VA: 0xf189a0)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::parseOpeningXMLElement
// ----------------------------------------------------------------------------
void glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::parseOpeningXMLElement(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self)
{
  glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  char *v6;
  char *v7;
  char v8;
  char *v9;
  char v10;
  char v11;
  char *v12;
  int v13;
  int v14;
  int *v15;
  char *v16;
  uint8_t *i;
  uint8_t *v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char *v24;
  int v25;
  int v26;
  unsigned int v27;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v34;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef char *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *_g4_t_v43;
  typedef char *_g4_t_v44;
  typedef char *_g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint8_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *_g4_t_v50;
  typedef uint8_t *_g4_t_v51;
  typedef size_t _g4_t_v52;
  typedef int _g4_t_v53;
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef size_t _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef char *_g4_t_v59;
  typedef char *_g4_t_v60;
  typedef char _g4_t_v61[4];
  typedef char *_g4_t_v62;
  typedef char *_g4_t_v63;
  typedef uint32_t _g4_t_v64[6];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v34)) > _g4_s0 ? (0u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v35)) > _g4_s1 ? (0u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v36)) > _g4_s2 ? (28u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v37)) > _g4_s3 ? (28u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v38)) > _g4_s4 ? (28u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v39)) > _g4_s5 ? (32u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v40)) > _g4_s6 ? (32u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v41)) > _g4_s7 ? (32u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v42)) > _g4_s8 ? (32u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v43)) > _g4_s9 ? (36u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v44)) > _g4_s10 ? (40u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v45)) > _g4_s11 ? (44u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v46)) > _g4_s12 ? (48u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v47)) > _g4_s13 ? (48u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v48)) > _g4_s14 ? (52u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v49)) > _g4_s15 ? (52u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v50)) > _g4_s16 ? (52u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v51)) > _g4_s17 ? (56u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v52)) > _g4_s18 ? (56u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v53)) > _g4_s19 ? (60u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v54)) > _g4_s20 ? (60u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v55)) > _g4_s21 ? (60u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v56)) > _g4_s22 ? (60u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v57)) > _g4_s23 ? (60u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v58)) > _g4_s24 ? (60u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v59)) > _g4_s25 ? (64u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v60)) > _g4_s26 ? (68u + sizeof(_g4_t_v60)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v61)) > _g4_s27 ? (72u + sizeof(_g4_t_v61)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v62)) > _g4_s28 ? (76u + sizeof(_g4_t_v62)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v63)) > _g4_s29 ? (80u + sizeof(_g4_t_v63)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v64)) > _g4_s30 ? (84u + sizeof(_g4_t_v64)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 56u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 60u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 60u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 64u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 72u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 76u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 80u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 84u);

  v1 = self;
  v2 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 6) = 1;
  v53 = v2;
  v3 = *((uint32_t *)self + 16);
  *((uint8_t *)self + 44) = 0;
  if ( v53 != v3 )
  {
    v4 = v53;
    v5 = v3;
    do
    {
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v4 + 4));
      v34 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v4;
      v4 += 8;
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(v34);
    }
    while ( v5 != v4 );
    v1 = self;
  }
  v6 = *((char **)v1 + 3);
  *((uint32_t *)v1 + 16) = v53;
  v44 = v6;
  v7 = v6;
  v45 = v6;
  v8 = *v6;
  if ( *v6 != 62 )
  {
    if ( v8 == 9 || v8 == 32 )
    {
      v7 = v6;
      v45 = v6;
    }
    else if ( v8 != 13 && v8 != 10 )
    {
      do
      {
        *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(++v7);
        v8 = *v7;
      }
      while ( *v7 != 62 && v8 != 9 && v8 != 32 && v8 != 10 && v8 != 13 );
      v45 = v7;
    }
  }
  if ( v8 != 62 )
  {
    while ( v8 == 9 || v8 == 32 || v8 == 13 || v8 == 10 )
    {
      *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(++v7);
LABEL_32:
      v8 = *v7;
      if ( *v7 == 62 )
        goto LABEL_33;
    }
    if ( v8 == 47 )
    {
      v12 = v45;
      *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v7 + 1);
      *((uint8_t *)v1 + 44) = 1;
      if ( v44 < v45 )
        goto LABEL_101;
      goto LABEL_34;
    }
    v9 = v7;
    if ( v8 != 61 )
    {
      do
      {
        *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(++v9);
        v54 = *v9;
      }
      while ( *v9 != 9 && *v9 != 32 && v54 != 10 && v54 != 13 && v54 != 61 );
    }
    *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v9 + 1);
    v10 = v9[1];
    v48 = (uint8_t *)(v9 + 1);
    v55 = v10;
    if ( v10 != 34 && v10 != 39 )
    {
      if ( v10 == 0 )
        return;
      for ( i = (uint8_t *)(v9 + 2); ; ++i )
      {
        *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(i);
        v55 = *i;
        if ( *i == 39 || *i == 34 )
          break;
        if ( v55 == 0 )
          return;
      }
      v48 = i;
    }
    if ( v55 == 0 )
      return;
    *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v48 + 1);
    v51 = v48 + 1;
    v11 = v48[1];
    if ( v11 == v55 )
    {
      v18 = v48 + 1;
      v46 = 0;
    }
    else
    {
      if ( v11 == 0 )
        return;
      v18 = v48 + 1;
      while ( 1 )
      {
        *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(++v18);
        if ( *v18 == v55 )
          break;
        if ( *v18 == 0 )
          return;
      }
      v46 = v18 - v51;
    }
    *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v18 + 1);
    v19 = (char *)(uintptr_t)(byte_20D3E78);
    v63 = (char *)(uintptr_t)(byte_20D3E78);
    v64[0] = (uint32_t)(uintptr_t)(byte_20D3E78);
    if ( v7 != v9 )
    {
      v56 = v9 - v7;
      v20 = sub_EA0970(v9 - v7, 0);
      v19 = (char *)(v20 + 12);
      if ( v56 == 1 )
      {
        *(uint8_t *)(v20 + 12) = *v7;
      }
      else
      {
        v40 = (char *)(v20 + 12);
        v36 = v20;
        memcpy(v19, v7, v56);
        v20 = v36;
        v19 = v40;
      }
      if ( (int *)v20 != (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        *(uint32_t *)(v20 + 8) = 0;
        *(uint32_t *)v20 = v56;
        *(uint8_t *)(v20 + v56 + 12) = 0;
      }
    }
    v59 = v19;
    g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v63,
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v59);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v59);
    if ( v51 == &v51[v46] )
    {
      v24 = (char *)(uintptr_t)(byte_20D3E78);
LABEL_68:
      v60 = v24;
      sub_EE33A0(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v61,
        (int)(uintptr_t)(v1),
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v60);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v64,
        (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v61);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v61);
      v25 = *((uint32_t *)v1 + 16);
      if ( v25 == *((uint32_t *)v1 + 17) )
      {
        v52 = 8;
        v27 = (v25 - *((uint32_t *)v1 + 15)) >> 3;
        if ( v27 != 0 )
        {
          if ( v27 > 2 * v27 || 2 * v27 > 0x1FFFFFFF )
            v52 = 0xFFFFFFF8;
          else
            v52 = 16 * v27;
        }
        v42 = (v25 - *((uint32_t *)v1 + 15)) >> 3;
        v47 = sub_4EBDC0(v52);
        v49 = v47 + 8;
        v28 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v47 + 8 * v42);
        if ( v28 != nullptr )
        {
          g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
            v28,
            (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v63);
          g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v47 + 8 * v42 + 4),
            (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v64);
        }
        if ( v25 != *((uint32_t *)v1 + 15) )
        {
          v57 = v25;
          v50 = v1;
          v29 = v47;
          v30 = *((uint32_t *)v1 + 15);
          do
          {
            if ( v29 != 0 )
            {
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
                (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v29,
                (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v30);
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
                (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v29 + 4),
                (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v30 + 4));
            }
            v30 += 8;
            v29 += 8;
          }
          while ( v57 != v30 );
          v1 = v50;
          v31 = v29 + 8;
          v25 = v57;
          v49 = v31;
        }
        v58 = *((uint32_t *)v1 + 16);
        if ( v25 != v58 )
        {
          v43 = v1;
          v32 = v49;
          do
          {
            if ( v32 != 0 )
            {
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
                (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v32,
                (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v25);
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
                (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v32 + 4),
                (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v25 + 4));
            }
            v25 += 8;
            v32 += 8;
          }
          while ( v58 != v25 );
          v49 = v32;
          v1 = v43;
          v58 = *((uint32_t *)v43 + 16);
        }
        v33 = *((uint32_t *)v1 + 15);
        if ( v58 != v33 )
        {
          do
          {
            g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v33 + 4));
            v35 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v33;
            v33 += 8;
            g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(v35);
          }
          while ( v58 != v33 );
          v33 = *((uint32_t *)v1 + 15);
        }
        if ( v33 != 0 )
          gll_operator_delete_arr(v33);
        *((uint32_t *)v1 + 15) = v47;
        *((uint32_t *)v1 + 16) = v49;
        *((uint32_t *)v1 + 17) = v52 + v47;
      }
      else
      {
        v26 = 0;
        if ( v25 != 0 )
        {
          g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
            *((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)v1
            + 16),
            (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v63);
          g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v25 + 4),
            (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v64);
          v26 = *((uint32_t *)v1 + 16);
        }
        *((uint32_t *)v1 + 16) = v26 + 8;
      }
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v60);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v64);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v63);
      v7 = *((char **)v1 + 3);
      goto LABEL_32;
    }
    if ( v48 == (uint8_t *)-1 && &v51[v46] != nullptr )
      sub_18FFFD0("basic_string::_S_construct null not valid");
    if ( v46 > 0x3FFFFFFC )
      sub_1900180("basic_string::_S_create");
    if ( v46 + 29 > 0x1000 && v46 != 0 )
    {
      v21 = ((uint16_t)v46 + 29) & 0xFFF;
      v22 = 1073741820;
      if ( v46 + 4096 - v21 <= 0x3FFFFFFC )
        v22 = v46 + 4096 - v21;
      v37 = v22;
      v23 = sub_4EBDC0(v22 + 13);
      *(uint32_t *)(v23 + 4) = v37;
      *(uint32_t *)(v23 + 8) = 0;
      v24 = (char *)(v23 + 12);
    }
    else
    {
      v23 = sub_4EBDC0(v46 + 13);
      *(uint32_t *)(v23 + 4) = v46;
      *(uint32_t *)(v23 + 8) = 0;
      v24 = (char *)(v23 + 12);
      if ( v46 == 1 )
      {
        *(uint8_t *)(v23 + 12) = v48[1];
LABEL_66:
        if ( (int *)v23 != (int *)(uintptr_t)(&dword_20D3E6C) )
        {
          *(uint32_t *)(v23 + 8) = 0;
          *(uint32_t *)v23 = v46;
          v24[v46] = 0;
        }
        goto LABEL_68;
      }
    }
    v41 = v23;
    v38 = v24;
    memcpy(v24, v51, v46);
    v24 = v38;
    v23 = v41;
    goto LABEL_66;
  }
LABEL_33:
  v12 = v45;
  if ( v44 < v45 )
  {
LABEL_101:
    if ( *(v12 - 1) == 47 )
    {
      *((uint8_t *)v1 + 44) = 1;
      v45 = v12 - 1;
    }
  }
LABEL_34:
  if ( v44 == v45 )
  {
    v16 = (char *)(uintptr_t)(byte_20D3E78);
  }
  else
  {
    v13 = sub_EA0970(v45 - v44, 0);
    v14 = v45 - v44;
    v15 = (int *)v13;
    v16 = (char *)(v13 + 12);
    if ( v45 - v44 == 1 )
    {
      *(uint8_t *)(v13 + 12) = *v44;
    }
    else
    {
      v39 = (char *)(v13 + 12);
      memcpy(v16, v44, v45 - v44);
      v14 = v45 - v44;
      v16 = v39;
    }
    if ( v15 != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      v15[2] = 0;
      *v15 = v14;
      *((uint8_t *)v15 + v14 + 12) = 0;
    }
  }
  v62 = v16;
  g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
    (glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *)((char *)v1 + 36),
    (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v62);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v62);
  ++*((uint32_t *)v1 + 3);
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::parseCurrentNode  (binary VA: 0xf19130)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::parseCurrentNode
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::parseCurrentNode(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self)
{
  char *src;
  char *v2;
  char v3;
  char *v4;
  char *v5;
  char v6;
  int v7;
  int *v8;
  char *v9;
  int result;
  uint8_t *v11;
  char v12;
  uint8_t *v13;
  int v14;
  uint8_t *v15;
  size_t v16;
  int v17;
  size_t v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  char *v25;
  uint8_t v26;
  uint8_t v27; // bp
  bool v28; // di
  int v29;
  uint8_t v30;
  uint8_t *v31;
  uint8_t *v32;
  uint8_t v33;
  uint8_t *v34;
  bool v35;
  uint8_t *v36;
  char **v37;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_dest;
  typedef int *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef char *_g4_t_v41;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef char *_g4_t_v45;
  typedef char _g4_t_v46[4];
  typedef char *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v39)) > _g4_s1 ? (16u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v40)) > _g4_s2 ? (16u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v41)) > _g4_s3 ? (20u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_n)) > _g4_s4 ? (24u + sizeof(_g4_t_n)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v43)) > _g4_s5 ? (24u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v44)) > _g4_s6 ? (24u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v45)) > _g4_s7 ? (40u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v46)) > _g4_s8 ? (44u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v47)) > _g4_s9 ? (48u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v48)) > _g4_s10 ? (52u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v49)) > _g4_s11 ? (56u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v50)) > _g4_s12 ? (60u + sizeof(_g4_t_v50)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);

  src = *((char **)self + 3);
  v2 = src;
  v3 = *src;
  if ( *src != 0 && v3 != 60 )
  {
    do
    {
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(++v2);
      v3 = *v2;
    }
    while ( *v2 != 0 && v3 != 60 );
    v4 = v2;
  }
  else
  {
    v4 = *((char **)self + 3);
  }
  if ( v3 == 0 )
    return 0;
  n = v4 - src;
  if ( v4 - src <= 0 )
    goto LABEL_23;
  if ( v4 - src > 2 )
    goto LABEL_17;
  if ( src == v4 )
    goto LABEL_23;
  v5 = src;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 != 9 && v6 != 32 && v6 != 10 && v6 != 13 )
      break;
    if ( ++v5 == v4 )
      goto LABEL_23;
  }
  if ( v4 == v5 )
  {
LABEL_23:
    v11 = (uint8_t *)(v2 + 1);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v2 + 1);
    v12 = v2[1];
    switch ( v12 )
    {
      case '/':
        v16 = *((uint32_t *)self + 15);
        v17 = *((uint32_t *)self + 16);
        *((uint32_t *)self + 6) = 2;
        *((uint8_t *)self + 44) = 0;
        v43 = v16;
        if ( v16 != v17 )
        {
          v18 = v16;
          do
          {
            g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v18 + 4));
            dest = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v18;
            v18 += 8;
            g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(dest);
          }
          while ( v17 != v18 );
        }
        v19 = *((uint32_t *)self + 3);
        *((uint32_t *)self + 16) = v43;
        v20 = 0;
        v21 = v19 + 1;
        *((uint32_t *)self + 3) = v19 + 1;
        v22 = v19 + 2;
        if ( *(uint8_t *)(v19 + 1) != 62 )
        {
          do
          {
            *((uint32_t *)self + 3) = v22;
            v23 = v22++;
          }
          while ( *(uint8_t *)(v22 - 1) != 62 );
          v20 = v23 - v21;
        }
        if ( v21 == v21 + v20 )
        {
          v25 = (char *)(uintptr_t)(byte_20D3E78);
        }
        else
        {
          if ( v19 == -1 && v21 + v20 != 0 )
            sub_18FFFD0("basic_string::_S_construct null not valid");
          v44 = v20;
          v24 = sub_EA0970(v20, 0);
          v25 = (char *)(v24 + 12);
          if ( v44 == 1 )
          {
            *(uint8_t *)(v24 + 12) = *(uint8_t *)(v19 + 1);
          }
          else
          {
            v40 = v24;
            v41 = (char *)(v24 + 12);
            memcpy(v25, (const void *)(v19 + 1), v44);
            v25 = v41;
            v24 = v40;
          }
          if ( (int *)v24 != (int *)(uintptr_t)(&dword_20D3E6C) )
          {
            *(uint32_t *)(v24 + 8) = 0;
            *(uint32_t *)v24 = v44;
            *(uint8_t *)(v24 + v44 + 12) = 0;
          }
        }
        v47 = v25;
        g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
          (glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *)((char *)self + 36),
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v47);
        g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v47);
        ++*((uint32_t *)self + 3);
        return 1;
      case '?':
        *((uint32_t *)self + 6) = 6;
        if ( v2[1] != 62 )
        {
          v15 = (uint8_t *)(v2 + 2);
          do
          {
            *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v15);
            v11 = v15++;
          }
          while ( *(v15 - 1) != 62 );
        }
        *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v11 + 1);
        return 1;
      case '!':
        if ( v2[2] == 91 )
        {
          *((uint32_t *)self + 6) = 5;
          v26 = v2[1];
          v27 = v26;
          v28 = v26 != 0;
          if ( v26 != 0 )
          {
            v29 = 0;
            do
            {
              *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(++v11);
              ++v29;
              v28 = *v11 != 0;
            }
            while ( *v11 != 0 && v29 <= 7 );
            v26 = *v11;
            v27 = *v11;
          }
          result = 1;
          if ( v26 != 0 )
          {
            if ( !v28 )
              goto LABEL_79;
            v30 = v27;
            v31 = v11 - 2;
            v32 = v11;
            v33 = v30;
            do
            {
              v34 = nullptr;
              v35 = true;
              if ( v33 == 62 )
              {
                v34 = v31;
                if ( v31[1] == 93 && *v31 == 93 )
                  v35 = v31 == nullptr;
                else
                  v34 = nullptr;
              }
              *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v31 + 3);
              v33 = v31[3];
              ++v31;
            }
            while ( v35 && v33 != 0 );
            v36 = v34;
            if ( v34 != nullptr )
            {
              v37 = &v49;
              sub_EA1AC0(&v49, v32, v36 - v32);
            }
            else
            {
LABEL_79:
              v37 = &v48;
              v48 = (char *)(uintptr_t)(byte_20D3E78);
            }
            g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
              (glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *)((char *)self + 36),
              (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v37);
            g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v37);
            return 1;
          }
        }
        else
        {
          *((uint32_t *)self + 6) = 4;
          *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v2 + 2);
          v13 = (uint8_t *)(v2 + 2);
          v14 = 1;
          while ( 1 )
          {
            if ( *v13 == 62 )
              --v14;
            else
              v14 += *v13 == 60;
            *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v13 + 1);
            if ( v14 == 0 )
              break;
            ++v13;
          }
          *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v13 - 2);
          sub_EA1AC0(v50, (uint8_t *)v2 + 4, (size_t)((char *)v13 - (char *)(v2 + 2) - 4));
          g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
            (glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *)((char *)self + 36),
            (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v50);
          g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v50);
          *((uint32_t *)self + 3) += 3;
          return 1;
        }
        break;
      default:
        glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::parseOpeningXMLElement(self);
        return 1;
    }
  }
  else
  {
LABEL_17:
    if ( src == v4 )
    {
      v9 = (char *)(uintptr_t)(byte_20D3E78);
    }
    else
    {
      v7 = sub_EA0970(n, 0);
      v8 = (int *)v7;
      v9 = (char *)(v7 + 12);
      if ( n == 1 )
      {
        *(uint8_t *)(v7 + 12) = *src;
      }
      else
      {
        v39 = (int *)v7;
        memcpy((void *)(v7 + 12), src, n);
        v8 = v39;
      }
      if ( v8 != (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        v8[2] = 0;
        *v8 = n;
        *((uint8_t *)v8 + n + 12) = 0;
      }
    }
    v45 = v9;
    sub_EE33A0(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v46,
      (int)(uintptr_t)(self),
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v45);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
      (glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *)((char *)self + 36),
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v46);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v46);
    *((uint32_t *)self + 6) = 3;
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v45);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::read  (binary VA: 0xf19620)
// Original: glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::read
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::read(glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *self)
{
  uint8_t *v1;
  int result;
  int v3;
  int v4;
  int v5;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v6;
  int v7;

  if ( G4_VCALL<uint8_t>(self, 68) != 0 )
  {
    v3 = *((uint32_t *)self + 15);
    v4 = *((uint32_t *)self + 16);
    *((uint32_t *)self + 6) = 2;
    *((uint8_t *)self + 44) = 0;
    v7 = v3;
    if ( v3 != v4 )
    {
      v5 = v3;
      do
      {
        g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v5 + 4));
        v6 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v5;
        v5 += 8;
        g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(v6);
      }
      while ( v4 != v5 );
    }
    *((uint32_t *)self + 16) = v7;
    return 1;
  }
  else
  {
    v1 = *((uint8_t **)self + 3);
    result = 0;
    if ( v1 != nullptr && (unsigned int)(uintptr_t)(&v1[-*((uint32_t *)self + 4)]) < *((uint32_t *)self + 5) - 1 && *v1 != 0 )
      return glitch::io::CXMLReaderImpl_char_IReferenceCounted_10ae10::parseCurrentNode(self);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::parseOpeningXMLElement  (binary VA: 0xf196e0)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::parseOpeningXMLElement
// ----------------------------------------------------------------------------
void glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::parseOpeningXMLElement(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self)
{
  glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  const wchar_t *v6;
  wchar_t *v7;
  wchar_t v8;
  const wchar_t *v9;
  wchar_t v10;
  wchar_t v11;
  wchar_t *v12;
  signed int v13;
  size_t v14;
  size_t v15;
  unsigned int v16;
  int v17;
  int v18;
  wchar_t *v19;
  wchar_t *v20;
  wchar_t *v21;
  wchar_t *i;
  char *v23;
  signed int v24;
  int v25;
  size_t v26;
  unsigned int v27;
  unsigned int v28;
  wchar_t *v29;
  wchar_t v30;
  const wchar_t *v31;
  size_t v32;
  size_t v33;
  unsigned int v34;
  int v35;
  int v36;
  wchar_t *v37;
  wchar_t *v38;
  wchar_t *v39;
  const wchar_t **v40;
  int v41;
  unsigned int v42;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v43;
  int v44;
  const wchar_t **v45;
  int v46;
  int v47;
  int v48;
  typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v49;
  typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v50;
  typedef wchar_t *_g4_t_v51;
  typedef size_t _g4_t_v52;
  typedef wchar_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef wchar_t *_g4_t_v56;
  typedef wchar_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef wchar_t *_g4_t_v59;
  typedef glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *_g4_t_v60;
  typedef wchar_t *_g4_t_v61;
  typedef const wchar_t *_g4_t_v62;
  typedef wchar_t _g4_t_v63;
  typedef wchar_t *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef wchar_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *_g4_t_v68;
  typedef const wchar_t *_g4_t_v69;
  typedef size_t _g4_t_v70;
  typedef int _g4_t_v71;
  typedef const wchar_t *_g4_t_v72;
  typedef const wchar_t **_g4_t_v73;
  typedef const wchar_t **_g4_t_v74;
  typedef wchar_t *_g4_t_v75;
  typedef wchar_t *_g4_t_v76;
  typedef const wchar_t *_g4_t_v77;
  typedef wchar_t *_g4_t_v78;
  typedef const wchar_t *_g4_t_v79;
  typedef const wchar_t *_g4_t_v80[6];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v49)) > _g4_s0 ? (0u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v50)) > _g4_s1 ? (0u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v51)) > _g4_s2 ? (28u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v52)) > _g4_s3 ? (28u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v53)) > _g4_s4 ? (28u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v54)) > _g4_s5 ? (28u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v55)) > _g4_s6 ? (32u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v56)) > _g4_s7 ? (32u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v57)) > _g4_s8 ? (32u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v58)) > _g4_s9 ? (32u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v59)) > _g4_s10 ? (32u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v60)) > _g4_s11 ? (36u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v61)) > _g4_s12 ? (40u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v62)) > _g4_s13 ? (44u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v63)) > _g4_s14 ? (48u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v64)) > _g4_s15 ? (48u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v65)) > _g4_s16 ? (48u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v66)) > _g4_s17 ? (52u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v67)) > _g4_s18 ? (52u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v68)) > _g4_s19 ? (52u + sizeof(_g4_t_v68)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v69)) > _g4_s20 ? (56u + sizeof(_g4_t_v69)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v70)) > _g4_s21 ? (56u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v71)) > _g4_s22 ? (60u + sizeof(_g4_t_v71)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v72)) > _g4_s23 ? (60u + sizeof(_g4_t_v72)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v73)) > _g4_s24 ? (60u + sizeof(_g4_t_v73)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v74)) > _g4_s25 ? (60u + sizeof(_g4_t_v74)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v75)) > _g4_s26 ? (64u + sizeof(_g4_t_v75)) : _g4_s26,
    _g4_s28 = (68u + sizeof(_g4_t_v76)) > _g4_s27 ? (68u + sizeof(_g4_t_v76)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v77)) > _g4_s28 ? (72u + sizeof(_g4_t_v77)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v78)) > _g4_s29 ? (76u + sizeof(_g4_t_v78)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v79)) > _g4_s30 ? (80u + sizeof(_g4_t_v79)) : _g4_s30,
    _g4_s32 = (84u + sizeof(_g4_t_v80)) > _g4_s31 ? (84u + sizeof(_g4_t_v80)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 0u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 72u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 84u);

  v1 = self;
  v2 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 6) = 1;
  v71 = v2;
  v3 = *((uint32_t *)self + 16);
  *((uint8_t *)self + 44) = 0;
  if ( v71 != v3 )
  {
    v4 = v71;
    v5 = v3;
    do
    {
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v4 + 4));
      v49 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v4;
      v4 += 8;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v49);
    }
    while ( v5 != v4 );
    v1 = self;
  }
  v6 = *((const wchar_t **)v1 + 3);
  *((uint32_t *)v1 + 16) = v71;
  v62 = v6;
  v7 = (wchar_t *)v6;
  v61 = (wchar_t *)v6;
  v8 = *v6;
  if ( *v6 != 62 )
  {
    if ( v8 == 9 || v8 == 32 )
    {
      v7 = (wchar_t *)v6;
      v61 = (wchar_t *)v6;
    }
    else
    {
      v7 = (wchar_t *)v6;
      if ( v8 != 10 && v8 != 13 )
      {
        do
        {
          *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(++v7);
          v8 = *v7;
        }
        while ( *v7 != 62 && v8 != 9 && v8 != 32 && v8 != 10 && v8 != 13 );
        v61 = v7;
      }
    }
  }
  v72 = v7;
  while ( v8 != 62 )
  {
    if ( v8 == 9 || v8 == 32 || v8 == 13 || v8 == 10 )
    {
      *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(++v72);
      v8 = *v72;
    }
    else
    {
      v9 = v72;
      if ( v8 == 47 )
      {
        v12 = v61;
        *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v72 + 1);
        *((uint8_t *)v1 + 44) = 1;
        if ( v62 < v61 )
          goto LABEL_114;
        goto LABEL_33;
      }
      do
      {
        if ( v8 == 61 )
          break;
        *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(++v9);
        v8 = *v9;
        if ( *v9 == 9 )
          break;
      }
      while ( v8 != 32 && v8 != 10 && v8 != 13 );
      *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v9 + 1);
      v10 = v9[1];
      v66 = (wchar_t *)(v9 + 1);
      if ( v10 != 39 && v10 != 34 )
      {
        if ( v10 == 0 )
          return;
        for ( i = (wchar_t *)(v9 + 2); ; ++i )
        {
          *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(i);
          v10 = *i;
          if ( *i == 39 || v10 == 34 )
            break;
          if ( v10 == 0 )
            return;
        }
        v66 = i;
      }
      if ( v10 == 0 )
        return;
      v69 = v66 + 1;
      *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v66 + 1);
      v11 = v66[1];
      if ( v11 == v10 )
      {
        v23 = (char *)(v66 + 1);
      }
      else
      {
        if ( v11 == 0 )
          return;
        v23 = (char *)(v66 + 1);
        while ( 1 )
        {
          v23 += 4;
          *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v23);
          if ( *(uint32_t *)v23 == v10 )
            break;
          if ( *(uint32_t *)v23 == 0 )
            return;
        }
      }
      *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v23 + 4);
      v24 = ((char *)v9 - (char *)v72) & 0xFFFFFFFC;
      v79 = (const wchar_t *)&unk_20DF960;
      v80[0] = (const wchar_t *)&unk_20DF960;
      if ( (const wchar_t *)((char *)v72 + v24) == v72 )
      {
        v64 = (wchar_t *)&unk_20DF960;
      }
      else
      {
        v25 = v24 >> 2;
        if ( (unsigned int)(v24 >> 2) > 0xFFFFFFE )
          goto LABEL_126;
        v26 = 4 * v25 + 16;
        v27 = 4 * v25 + 32;
        if ( v27 > 0x1000 && v25 != 0 )
        {
          v28 = v25 + ((4096 - (v27 & 0xFFF)) >> 2);
          if ( v28 > 0xFFFFFFE )
            v28 = 268435454;
          v63 = v28;
          v26 = 4 * v28 + 16;
        }
        else
        {
          v63 = v25;
        }
        v52 = v25;
        v29 = (wchar_t *)sub_4EBDC0(v26);
        v29[1] = v63;
        v29[2] = 0;
        v30 = v52;
        v64 = v29 + 3;
        if ( v52 == 1 )
        {
          v29[3] = *v72;
        }
        else
        {
          v57 = v29;
          wmemcpy(v64, v72, v52);
          v29 = v57;
          v30 = v52;
        }
        if ( v29 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
        {
          v29[2] = 0;
          *v29 = v30;
          v64[v30] = 0;
        }
      }
      v75 = v64;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
        (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v79,
        (const wchar_t **)&v75);
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v75);
      v31 = (const wchar_t *)((char *)v69 + ((v23 - (char *)v69) & 0xFFFFFFFC));
      if ( v69 == v31 )
      {
        v39 = (wchar_t *)&unk_20DF960;
      }
      else
      {
        if ( v66 == (wchar_t *)-4 && v31 != nullptr )
          sub_18FFFD0("basic_string::_S_construct null not valid");
        v32 = v31 - v69;
        if ( v32 > 0xFFFFFFE )
          goto LABEL_126;
        v33 = 4 * v32 + 16;
        v34 = 4 * v32 + 32;
        if ( v34 > 0x1000 && v32 != 0 )
        {
          v35 = v34 & 0xFFF;
          v36 = 268435454;
          if ( v32 + ((unsigned int)(4096 - v35) >> 2) <= 0xFFFFFFE )
            v36 = v32 + ((unsigned int)(4096 - v35) >> 2);
          v33 = 4 * v36 + 16;
        }
        else
        {
          v36 = v32;
        }
        v58 = v36;
        v37 = (wchar_t *)sub_4EBDC0(v33);
        v37[1] = v58;
        v38 = v37;
        v37[2] = 0;
        v39 = v37 + 3;
        if ( v32 == 1 )
        {
          v37[3] = v66[1];
        }
        else
        {
          v53 = v37;
          v59 = v37 + 3;
          wmemcpy(v39, v69, v32);
          v39 = v59;
          v38 = v53;
        }
        if ( v38 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
        {
          v38[2] = 0;
          *v38 = v32;
          v39[v32] = 0;
        }
      }
      v76 = v39;
      sub_EF58E0(
        (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v77,
        (int)(uintptr_t)(v1),
        (const wchar_t **)&v76);
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
        (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v80,
        &v77);
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v77);
      v40 = *((const wchar_t ***)v1 + 16);
      if ( v40 == *((const wchar_t ***)v1 + 17) )
      {
        v70 = 8;
        v42 = ((int)(uintptr_t)(v40) - *((uint32_t *)v1 + 15)) >> 3;
        if ( v42 != 0 )
        {
          if ( v42 > 2 * v42 || 2 * v42 > 0x1FFFFFFF )
            v70 = 0xFFFFFFF8;
          else
            v70 = 16 * v42;
        }
        v54 = ((int)(uintptr_t)(v40) - *((uint32_t *)v1 + 15)) >> 3;
        v65 = sub_4EBDC0(v70);
        v67 = v65 + 8;
        v43 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v65 + 8 * v54);
        if ( v43 != nullptr )
        {
          g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
            v43,
            &v79);
          g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
            (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v65 + 8 * v54 + 4),
            v80);
        }
        if ( v40 != *((const wchar_t ***)v1 + 15) )
        {
          v73 = v40;
          v68 = v1;
          v44 = v65;
          v45 = *((const wchar_t ***)v1 + 15);
          do
          {
            if ( v44 != 0 )
            {
              g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
                (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v44,
                v45);
              g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
                (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v44 + 4),
                v45 + 1);
            }
            v45 += 2;
            v44 += 8;
          }
          while ( v73 != v45 );
          v1 = v68;
          v46 = v44 + 8;
          v40 = v73;
          v67 = v46;
        }
        v74 = *((const wchar_t ***)v1 + 16);
        if ( v40 != v74 )
        {
          v60 = v1;
          v47 = v67;
          do
          {
            if ( v47 != 0 )
            {
              g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
                (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v47,
                v40);
              g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
                (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v47 + 4),
                v40 + 1);
            }
            v40 += 2;
            v47 += 8;
          }
          while ( v74 != v40 );
          v67 = v47;
          v1 = v60;
          v74 = *((const wchar_t ***)v60 + 16);
        }
        v48 = *((uint32_t *)v1 + 15);
        if ( (const wchar_t **)v48 != v74 )
        {
          do
          {
            g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v48 + 4));
            v50 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v48;
            v48 += 8;
            g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v50);
          }
          while ( (const wchar_t **)v48 != v74 );
          v48 = *((uint32_t *)v1 + 15);
        }
        if ( v48 != 0 )
          gll_operator_delete_arr(v48);
        *((uint32_t *)v1 + 15) = v65;
        *((uint32_t *)v1 + 16) = v67;
        *((uint32_t *)v1 + 17) = v70 + v65;
      }
      else
      {
        v41 = 0;
        if ( v40 != nullptr )
        {
          g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
            *((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **)v1
            + 16),
            &v79);
          g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
            (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v40 + 1),
            v80);
          v41 = *((uint32_t *)v1 + 16);
        }
        *((uint32_t *)v1 + 16) = v41 + 8;
      }
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v76);
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v80);
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v79);
      v72 = *((const wchar_t **)v1 + 3);
      v8 = *v72;
    }
  }
  v12 = v61;
  if ( v62 < v61 )
  {
LABEL_114:
    if ( *(v12 - 1) == 47 )
    {
      *((uint8_t *)v1 + 44) = 1;
      v61 = v12 - 1;
    }
  }
LABEL_33:
  v13 = ((char *)v61 - (char *)v62) & 0xFFFFFFFC;
  if ( v62 == (const wchar_t *)((char *)v62 + v13) )
  {
    v21 = (wchar_t *)&unk_20DF960;
  }
  else
  {
    v14 = v13 >> 2;
    if ( (unsigned int)(v13 >> 2) > 0xFFFFFFE )
LABEL_126:
      sub_1900180("basic_string::_S_create");
    v15 = 4 * v14 + 16;
    v16 = 4 * v14 + 32;
    if ( v16 > 0x1000 && v14 != 0 )
    {
      v17 = v16 & 0xFFF;
      v18 = 268435454;
      if ( v14 + ((unsigned int)(4096 - v17) >> 2) <= 0xFFFFFFE )
        v18 = v14 + ((unsigned int)(4096 - v17) >> 2);
      v15 = 4 * v18 + 16;
    }
    else
    {
      v18 = v14;
    }
    v55 = v18;
    v19 = (wchar_t *)sub_4EBDC0(v15);
    v19[1] = v55;
    v20 = v19;
    v19[2] = 0;
    v21 = v19 + 3;
    if ( v14 == 1 )
    {
      v19[3] = *v62;
    }
    else
    {
      v51 = v19;
      v56 = v19 + 3;
      wmemcpy(v21, v62, v14);
      v21 = v56;
      v20 = v51;
    }
    if ( v20 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
    {
      v20[2] = 0;
      *v20 = v14;
      v21[v14] = 0;
    }
  }
  v78 = v21;
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
    (glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *)((char *)v1 + 36),
    (const wchar_t **)&v78);
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v78);
  *((uint32_t *)v1 + 3) += 4;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::parseCurrentNode  (binary VA: 0xf19f90)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::parseCurrentNode
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::parseCurrentNode(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self)
{
  const wchar_t *s2;
  wchar_t v2;
  wchar_t *v3;
  wchar_t *v4;
  const wchar_t *v5;
  wchar_t v6;
  size_t n;
  size_t v8;
  unsigned int v9;
  int v10;
  int v11;
  uint32_t *v12;
  wchar_t *v13;
  const wchar_t *v14;
  int result;
  const wchar_t *v16;
  wchar_t v17;
  uint32_t *v18;
  int v19;
  wchar_t *v20;
  wchar_t *v21;
  wchar_t *v22;
  int v23;
  int v24;
  const wchar_t *v25;
  int v26;
  int v27;
  const wchar_t *v28;
  wchar_t v29;
  wchar_t v30;
  bool v31; // di
  int v32;
  char *v33;
  const wchar_t *v34;
  char *v35;
  bool v36;
  const wchar_t *v37;
  int v38;
  const wchar_t **v39;
  typedef wchar_t *_g4_t_s1;
  typedef int _g4_t_v41;
  typedef const wchar_t *_g4_t_v42;
  typedef wchar_t *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef wchar_t *_g4_t_v45;
  typedef const wchar_t *_g4_t_v46;
  typedef const wchar_t *_g4_t_v47;
  typedef wchar_t *_g4_t_v48;
  typedef void *_g4_t_v49;
  typedef wchar_t *_g4_t_v50;
  typedef wchar_t *_g4_t_v51[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_s1)) > _g4_s0 ? (0u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v41)) > _g4_s1 ? (16u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v42)) > _g4_s2 ? (16u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v43)) > _g4_s3 ? (20u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v44)) > _g4_s4 ? (24u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v45)) > _g4_s5 ? (24u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v46)) > _g4_s6 ? (40u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v47)) > _g4_s7 ? (44u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v48)) > _g4_s8 ? (48u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v49)) > _g4_s9 ? (52u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v50)) > _g4_s10 ? (56u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v51)) > _g4_s11 ? (60u + sizeof(_g4_t_v51)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);

  s2 = *((const wchar_t **)self + 3);
  v2 = *s2;
  if ( *s2 == 60 || v2 == 0 )
  {
    v4 = *((wchar_t **)self + 3);
    v3 = v4;
  }
  else
  {
    v3 = *((wchar_t **)self + 3);
    do
    {
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(++v3);
      v2 = *v3;
    }
    while ( *v3 != 0 && v2 != 60 );
    v4 = v3;
  }
  if ( v2 == 0 )
    return 0;
  v44 = (char *)v3 - (char *)s2;
  if ( (char *)v3 - (char *)s2 <= 3 )
    goto LABEL_29;
  if ( (char *)v3 - (char *)s2 > 11 )
    goto LABEL_17;
  if ( s2 == v3 )
    goto LABEL_29;
  v5 = s2;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 != 9 && v6 != 32 && v6 != 10 && v6 != 13 )
      break;
    if ( ++v5 == v3 )
      goto LABEL_29;
  }
  if ( v3 == v5 )
  {
LABEL_29:
    v16 = v4 + 1;
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v4 + 1);
    v17 = v4[1];
    switch ( v17 )
    {
      case '/':
        v20 = *((wchar_t **)self + 15);
        v21 = *((wchar_t **)self + 16);
        *((uint32_t *)self + 6) = 2;
        *((uint8_t *)self + 44) = 0;
        v45 = v20;
        if ( v20 != v21 )
        {
          v22 = v20;
          do
          {
            g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v22 + 1));
            s1 = v22;
            v22 += 2;
            g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)s1);
          }
          while ( v21 != v22 );
        }
        v23 = 0;
        *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v45);
        v24 = *((uint32_t *)self + 3);
        v25 = (const wchar_t *)(v24 + 4);
        *((uint32_t *)self + 3) = v24 + 4;
        if ( *(uint32_t *)(v24 + 4) != 62 )
        {
          v26 = v24 + 8;
          do
          {
            *((uint32_t *)self + 3) = v26;
            v27 = v26;
            v26 += 4;
          }
          while ( *(uint32_t *)(v26 - 4) != 62 );
          v23 = (v27 - (int)(uintptr_t)(v25)) >> 2;
        }
        sub_EA3300(&v48, v25, v23);
        g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
          (glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *)((char *)self + 36),
          (const wchar_t **)&v48);
        g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v48);
        *((uint32_t *)self + 3) += 4;
        return 1;
      case '?':
        *((uint32_t *)self + 6) = 6;
        if ( v4[1] != 62 )
        {
          v28 = v4 + 2;
          do
          {
            *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v28);
            v16 = v28++;
          }
          while ( *(v28 - 1) != 62 );
        }
        *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v16 + 1);
        return 1;
      case '!':
        if ( v4[2] == 91 )
        {
          *((uint32_t *)self + 6) = 5;
          v30 = v4[1];
          v29 = v30;
          v31 = v30 != 0;
          if ( v30 != 0 )
          {
            v32 = 0;
            do
            {
              *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(++v16);
              ++v32;
              v31 = *v16 != 0;
            }
            while ( *v16 != 0 && v32 <= 7 );
            v29 = *v16;
            v30 = *v16;
          }
          result = 1;
          if ( v29 != 0 )
          {
            if ( !v31 )
              goto LABEL_77;
            v33 = (char *)(v16 - 2);
            v34 = v16;
            do
            {
              v35 = nullptr;
              v36 = true;
              if ( v30 == 62 )
              {
                v35 = v33;
                if ( *((uint32_t *)v33 + 1) == 93 && *(uint32_t *)v33 == 93 )
                  v36 = v33 == nullptr;
                else
                  v35 = nullptr;
              }
              *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v33 + 12);
              v30 = *((uint32_t *)v33 + 3);
              v33 += 4;
            }
            while ( v36 && v30 != 0 );
            v37 = v34;
            if ( v35 != nullptr )
            {
              v38 = v35 - (char *)v34;
              v39 = (const wchar_t **)&v50;
              sub_EA3300(&v50, v37, v38 >> 2);
            }
            else
            {
LABEL_77:
              v39 = (const wchar_t **)&v49;
              v49 = &unk_20DF960;
            }
            g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
              (glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *)((char *)self + 36),
              v39);
            g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v39);
            return 1;
          }
        }
        else
        {
          *((uint32_t *)self + 6) = 4;
          *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v4 + 2);
          v18 = (uint32_t *)(v4 + 2);
          v19 = 1;
          while ( 1 )
          {
            if ( *v18 == 62 )
              --v19;
            else
              v19 += *v18 == 60;
            *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v18 + 1);
            if ( v19 == 0 )
              break;
            ++v18;
          }
          *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v18 - 2);
          sub_EA3300(v51, v4 + 4, (v18 - 2) - (uint32_t *)(v4 + 2) - 2);
          g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
            (glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *)((char *)self + 36),
            (const wchar_t **)v51);
          g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v51);
          *((uint32_t *)self + 3) += 12;
          return 1;
        }
        break;
      default:
        glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::parseOpeningXMLElement(self);
        return 1;
    }
  }
  else
  {
LABEL_17:
    if ( s2 == (const wchar_t *)((char *)s2 + (v44 & 0xFFFFFFFC)) )
    {
      v14 = (const wchar_t *)&unk_20DF960;
    }
    else
    {
      n = (int)(v44 & 0xFFFFFFFC) >> 2;
      if ( n > 0xFFFFFFE )
        sub_1900180("basic_string::_S_create");
      v8 = 4 * n + 16;
      v9 = 4 * n + 32;
      if ( v9 > 0x1000 && n != 0 )
      {
        v10 = v9 & 0xFFF;
        v11 = 268435454;
        if ( n + ((unsigned int)(4096 - v10) >> 2) <= 0xFFFFFFE )
          v11 = n + ((unsigned int)(4096 - v10) >> 2);
        v8 = 4 * v11 + 16;
      }
      else
      {
        v11 = (int)(v44 & 0xFFFFFFFC) >> 2;
      }
      v41 = v11;
      v12 = (uint32_t *)sub_4EBDC0(v8);
      v12[1] = v41;
      v13 = (wchar_t *)(v12);
      v12[2] = 0;
      v14 = (const wchar_t *)(v12 + 3);
      if ( n == 1 )
      {
        v12[3] = *s2;
      }
      else
      {
        v42 = (const wchar_t *)(v12 + 3);
        v43 = (wchar_t *)(v12);
        wmemcpy(v12 + 3, s2, n);
        v14 = v42;
        v13 = v43;
      }
      if ( v13 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
      {
        v13[2] = 0;
        *v13 = n;
        ((char *)v14)[n] = 0;
      }
    }
    v46 = v14;
    sub_EF58E0(
      (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v47,
      (int)(uintptr_t)(self),
      &v46);
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
      (glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *)((char *)self + 36),
      &v47);
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v47);
    *((uint32_t *)self + 6) = 3;
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v46);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::read  (binary VA: 0xf1a450)
// Original: glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::read
// ----------------------------------------------------------------------------
int glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::read(glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *self)
{
  uint32_t *v1;
  int result;
  int v3;
  int v4;
  int v5;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v6;
  int v7;

  if ( G4_VCALL<uint8_t>(self, 68) != 0 )
  {
    v3 = *((uint32_t *)self + 15);
    v4 = *((uint32_t *)self + 16);
    *((uint32_t *)self + 6) = 2;
    *((uint8_t *)self + 44) = 0;
    v7 = v3;
    if ( v3 != v4 )
    {
      v5 = v3;
      do
      {
        g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v5 + 4));
        v6 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v5;
        v5 += 8;
        g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v6);
      }
      while ( v4 != v5 );
    }
    *((uint32_t *)self + 16) = v7;
    return 1;
  }
  else
  {
    v1 = *((uint32_t **)self + 3);
    result = 0;
    if ( v1 != nullptr && ((int)(uintptr_t)(v1) - *((uint32_t *)self + 4)) >> 2 < (unsigned int)(*((uint32_t *)self + 5) - 1) && *v1 != 0 )
      return glitch::io::CXMLReaderImpl_wchar_t_IReferenceCounte_135d5e::parseCurrentNode(self);
  }
  return result;
}


