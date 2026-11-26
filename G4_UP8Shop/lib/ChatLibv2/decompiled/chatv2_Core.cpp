#include "Core/Utils/DecompTypes.h"
#include "chatv2_Core.h"

// ============================================================================
// G4_UP8Shop/lib/ChatLibv2/decompiled/chatv2_Core.cpp
// Library: ChatLibv2 | Module: chatv2_Core
// Binary Address Span: 0x1231970 .. 0x1269850 (71 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1231970 (size: 37 bytes)
// Symbol:    _ZN6chatv24Core9ArionUserC2Ev
// Demangled: chatv2::Core::ArionUser::ArionUser(void)
// ============================================================================
// Alternative name is '_ZN6chatv24Core9ArionUserC1Ev'
struct chatv2::Core::ArionUser::Self *chatv2::Core::ArionUser::ArionUser(chatv2::Core::ArionUser::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 12) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionUser::Destroy  (binary VA: 0x12319a0)
// Original: chatv2::Core::ArionUser::~ArionUser
// ----------------------------------------------------------------------------
void chatv2::Core::ArionUser::Destroy(chatv2::Core::ArionUser::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;

  v1 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v3 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionUser::SetCredential  (binary VA: 0x1231a50)
// Original: chatv2::Core::ArionUser::SetCredential
// ----------------------------------------------------------------------------
int chatv2::Core::ArionUser::SetCredential(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionUser::GetCredential  (binary VA: 0x1231a80)
// Original: chatv2::Core::ArionUser::GetCredential
// ----------------------------------------------------------------------------
chatv2::Core::ArionUser::Self * chatv2::Core::ArionUser::GetCredential(chatv2::Core::ArionUser::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionUser::SetNickname  (binary VA: 0x1231a90)
// Original: chatv2::Core::ArionUser::SetNickname
// ----------------------------------------------------------------------------
int chatv2::Core::ArionUser::SetNickname(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 4, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionUser::GetNickname  (binary VA: 0x1231ac0)
// Original: chatv2::Core::ArionUser::GetNickname
// ----------------------------------------------------------------------------
char * chatv2::Core::ArionUser::GetNickname(chatv2::Core::ArionUser::Self *self)
{
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionUser::SetAvatarLink  (binary VA: 0x1231ad0)
// Original: chatv2::Core::ArionUser::SetAvatarLink
// ----------------------------------------------------------------------------
int chatv2::Core::ArionUser::SetAvatarLink(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 8, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionUser::GetAvatarLink  (binary VA: 0x1231b00)
// Original: chatv2::Core::ArionUser::GetAvatarLink
// ----------------------------------------------------------------------------
char * chatv2::Core::ArionUser::GetAvatarLink(chatv2::Core::ArionUser::Self *self)
{
  return (char *)self + 8;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionUser::IsModerator  (binary VA: 0x1231b10)
// Original: chatv2::Core::ArionUser::IsModerator
// ----------------------------------------------------------------------------
int chatv2::Core::ArionUser::IsModerator(chatv2::Core::ArionUser::Self *self)
{
  return *((uint8_t *)self + 12);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionUser::IsSet  (binary VA: 0x1231b20)
// Original: chatv2::Core::ArionUser::IsSet
// ----------------------------------------------------------------------------
bool chatv2::Core::ArionUser::IsSet(chatv2::Core::ArionUser::Self *self)
{
  bool result;

  result = false;
  if ( *(uint32_t *)(*(uint32_t *)self - 12) != 0 )
    return *(uint32_t *)(*((uint32_t *)self + 1) - 12) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionUser::ToJsonStr  (binary VA: 0x1231b40)
// Original: chatv2::Core::ArionUser::ToJsonStr
// ----------------------------------------------------------------------------
chatv2::Core::ArionUser::Self * chatv2::Core::ArionUser::ToJsonStr(chatv2::Core::ArionUser::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  unsigned int *v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  uint32_t *v11;
  void *v12;
  size_t v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *v17;
  void *v18;
  unsigned int v19;
  uint8_t *v20;
  unsigned int v21;
  int v22;
  char *v23;
  char *v24;
  int v25;
  size_t v26;
  char *v27;
  char *v28;
  char *v29;
  void *v30;
  uint32_t *v31;
  uint32_t *v32;
  void *v33;
  uint32_t *v34;
  uint32_t *v35;
  void *v36;
  typedef unsigned int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[19];
  typedef uint32_t *_g4_t_v43;
  typedef void *_g4_t_v44;
  typedef void *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef uint32_t _g4_t_v50[2];
  typedef uint32_t **_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int64_t _g4_t_v56 __attribute__((aligned(1)));
  typedef int64_t _g4_t_v57 __attribute__((aligned(1)));
  typedef unsigned int **_g4_t_v58;
  typedef uint32_t **_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v39)) > _g4_s1 ? (0u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v40)) > _g4_s2 ? (0u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v41)) > _g4_s3 ? (0u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (17u + sizeof(_g4_t_v42)) > _g4_s4 ? (17u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v43)) > _g4_s5 ? (36u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v44)) > _g4_s6 ? (44u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v45)) > _g4_s7 ? (48u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v46)) > _g4_s8 ? (52u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v47)) > _g4_s9 ? (56u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v48)) > _g4_s10 ? (60u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v49)) > _g4_s11 ? (64u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v50)) > _g4_s12 ? (68u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v51)) > _g4_s13 ? (76u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v52)) > _g4_s14 ? (80u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v53)) > _g4_s15 ? (84u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v54)) > _g4_s16 ? (88u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v55)) > _g4_s17 ? (92u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v56)) > _g4_s18 ? (100u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v57)) > _g4_s19 ? (108u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v58)) > _g4_s20 ? (116u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v59)) > _g4_s21 ? (120u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v60)) > _g4_s22 ? (124u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v61)) > _g4_s23 ? (128u + sizeof(_g4_t_v61)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v62)) > _g4_s24 ? (132u + sizeof(_g4_t_v62)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v63)) > _g4_s25 ? (136u + sizeof(_g4_t_v63)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v64)) > _g4_s26 ? (140u + sizeof(_g4_t_v64)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v65)) > _g4_s27 ? (144u + sizeof(_g4_t_v65)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 17u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 52u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 56u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 84u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 88u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 108u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 116u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 120u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 124u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 128u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 132u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 136u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 140u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 144u);

  *(uint32_t *)&v42[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Codec::EncodeUrlRFC3986(a2 + 4, &v42[3]);
  HIDWORD(v57) = 0;
  v58 = nullptr;
  v59 = nullptr;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 1024;
  v2 = opNew(0x14u);
  *(uint32_t *)v2 = 0;
  *(uint32_t *)(v2 + 4) = 2048;
  *(uint32_t *)(v2 + 8) = 0;
  *(uint32_t *)(v2 + 12) = 0;
  *(uint32_t *)(v2 + 16) = 0;
  v3 = opNew(1u);
  v4 = *(uint32_t *)(v2 + 4);
  *(uint32_t *)(v2 + 12) = v3;
  *(uint32_t *)(v2 + 16) = v3;
  v5 = (uint32_t *)(malloc(v4 + 12));
  *v5 = v4;
  v5[1] = 0;
  v5[2] = *(uint32_t *)v2;
  *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v5);
  v58 = (unsigned int **)v2;
  v59 = (uint32_t **)v2;
  v6 = *(unsigned int **)v2;
  v7 = (v63 + 3) & 0xFFFFFFFC;
  v8 = *(uint32_t *)(*(uint32_t *)v2 + 4);
  if ( v7 + v8 > **(uint32_t **)v2 )
  {
    v9 = *(uint32_t *)(v2 + 4);
    if ( v7 >= v9 )
      v9 = (v63 + 3) & 0xFFFFFFFC;
    v38 = v9;
    v6 = (unsigned int *)malloc(v9 + 12);
    v6[1] = 0;
    *v6 = v38;
    v6[2] = *(uint32_t *)v2;
    *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v6);
    v8 = v6[1];
  }
  v10 = (int)(uintptr_t)(v6) + v8 + 12;
  if ( (v10 & 3) != 0 )
  {
    v39 = (int)(uintptr_t)(v6) + v8 + 12;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v6 = *(unsigned int **)v2;
    v10 = v39;
    v8 = *(uint32_t *)(*(uint32_t *)v2 + 4);
  }
  v6[1] = v8 + v7;
  v60 = v10;
  v61 = v10;
  v62 = v63 + v10;
  v64 = 0;
  v65 = 0;
  v56 = 0;
  v57 = 0x300000000LL;
  sub_122F6C0((int *)&v56, "nickname", *(uint8_t **)&v42[3], v58);
  if ( *(uint32_t *)(*(uint32_t *)(a2 + 8) - 12) != 0 )
  {
    v43 = &dword_213B814;
    sub_122F6C0((int *)&v56, "avatar", &dword_213B814, v58);
    glwebtools::Codec::EncodeUrlRFC3986(a2 + 8, &v43);
    v11 = v43 - 3;
    if ( v43 - 3 != dword_213B808 && __sync_fetch_and_add(v43 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v11);
  }
  v44 = nullptr;
  v45 = nullptr;
  v46 = nullptr;
  v47 = nullptr;
  v48 = nullptr;
  v49 = 256;
  v12 = (void *)opNew(1u);
  v13 = v49;
  v44 = v12;
  v45 = v12;
  v46 = (char *)malloc(v49);
  v47 = v46;
  v48 = &v46[v13];
  v50[1] = 0;
  v50[0] = (uint32_t)(uintptr_t)(&v44);
  v51 = nullptr;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 256;
  v14 = (uint32_t *)opNew(0x14u);
  *v14 = 0;
  v14[1] = 2048;
  v14[2] = 0;
  v14[3] = 0;
  v14[4] = 0;
  v15 = opNew(1u);
  v16 = v14[1];
  v14[3] = v15;
  v14[4] = v15;
  v17 = (uint32_t *)(malloc(v16 + 12));
  *v17 = v16;
  v17[1] = 0;
  v17[2] = *v14;
  *v14 = (uint32_t)(uintptr_t)(v17);
  v50[1] = (uint32_t)(uintptr_t)(v14);
  v51 = (uint32_t **)v14;
  v18 = (void *)*v14;
  v19 = (v55 + 3) & 0xFFFFFFFC;
  v20 = *(uint8_t **)(*v14 + 4);
  if ( (unsigned int)(uintptr_t)(&v20[v19]) > *(uint32_t *)*v14 )
  {
    v21 = v14[1];
    if ( v19 >= v21 )
      v21 = (v55 + 3) & 0xFFFFFFFC;
    v40 = v21;
    v18 = malloc(v21 + 12);
    *((uint32_t *)v18 + 1) = 0;
    *(uint32_t *)v18 = v40;
    *((uint32_t *)v18 + 2) = *v14;
    *v14 = (uint32_t)(uintptr_t)(v18);
    v20 = *((uint8_t **)v18 + 1);
  }
  v22 = (int)(uintptr_t)(&v20[(uint32_t)(uintptr_t)(v18) + 12]);
  if ( (v22 & 3) != 0 )
  {
    v41 = (int)(uintptr_t)(&v20[(uint32_t)(uintptr_t)(v18) + 12]);
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v18 = (void *)*v14;
    v22 = v41;
    v20 = *(uint8_t **)(*v14 + 4);
  }
  *((uint32_t *)v18 + 1) = (uint32_t)(uintptr_t)(&v20[v19]);
  v52 = v22;
  v53 = v22;
  v54 = v55 + v22;
  sub_122FAB0(&v56, (int)(uintptr_t)(v50), v20);
  v23 = v47;
  v24 = v47 + 1;
  if ( v47 + 1 >= v48 )
  {
    v25 = v47 - v46;
    v26 = v47 - v46 + 1;
    if ( v26 < 2 * v49 )
      v26 = 2 * v49;
    v27 = (char *)realloc(v46, v26);
    v23 = &v27[v25];
    v46 = v27;
    v49 = v26;
    v48 = &v27[v26];
    v24 = v23 + 1;
  }
  v47 = v24;
  *v23 = 0;
  v28 = v46;
  v29 = v47;
  if ( v46 == v47 )
  {
    __assert2(
      "../../../../../lib/rapidjson/internal/stack.h",
      83,
      "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = char, Allocator = rapidjson::CrtAllocator, size_t = unsigned int]",
      "GetSize () >= count * sizeof (T)");
    v29 = v47;
    v28 = v46;
  }
  v47 = v29 - 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), v28, (int)(uintptr_t)(v42));
  v30 = v51;
  if ( v51 != nullptr )
  {
    v31 = *v51;
    if ( *v51 != nullptr && v31 != v51[2] )
    {
      while ( 1 )
      {
        v32 = (uint32_t *)v31[2];
        free(v31);
        *(uint32_t *)v30 = (uint32_t)(uintptr_t)(v32);
        if ( v32 == nullptr || v32 == *((uint32_t **)v30 + 2) )
          break;
        v31 = v32;
      }
    }
    opDelete(*((void **)v30 + 4));
    opDelete(v30);
  }
  free(v46);
  opDelete(v45);
  v33 = v59;
  if ( v59 != nullptr )
  {
    v34 = *v59;
    if ( *v59 != nullptr && v34 != v59[2] )
    {
      while ( 1 )
      {
        v35 = (uint32_t *)v34[2];
        free(v34);
        *(uint32_t *)v33 = (uint32_t)(uintptr_t)(v35);
        if ( v35 == nullptr || v35 == *((uint32_t **)v33 + 2) )
          break;
        v34 = v35;
      }
    }
    opDelete(*((void **)v33 + 4));
    opDelete(v33);
  }
  v36 = (void *)(*(uint32_t *)&v42[3] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v42[3] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v42[3] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v36);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ChatLibEngine::Initialize  (binary VA: 0x1232110)
// Original: chatv2::Core::ChatLibEngine::Initialize
// ----------------------------------------------------------------------------
int chatv2::Core::ChatLibEngine::Initialize(uint32_t *a1, int a2, uint32_t *a3)
{
  int User;
  gaia::Gaia::Self *Instance;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  volatile int32_t *v13;
  volatile int32_t *v14;
  bool v15;
  volatile int32_t *v16;
  volatile int32_t *v17;
  volatile int32_t *v18;
  int v19;
  volatile int32_t *v20;
  volatile int32_t *v21;
  volatile int32_t *v22;
  size_t v23;
  char v24;
  int v25;
  size_t v26;
  uint8_t *v27;
  char v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint32_t *v34;
  int v35;
  size_t v36;
  char v37;
  void *v38;
  void *v39;
  void *v40;
  int result;
  void *v42;
  int v43;
  int v44;
  typedef gaia::Gaia::Self *_g4_t_v45;
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef int _g4_t_v50;
  typedef size_t _g4_t_v51;
  typedef int _g4_t_v52;
  typedef size_t _g4_t_v53;
  typedef const char *_g4_t_v54;
  typedef size_t _g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t _g4_t_v57[4];
  typedef uint32_t _g4_t_v58[4];
  typedef int _g4_t_v59[3];
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef volatile int32_t *_g4_t_v62;
  typedef int (**_g4_t_v63)(std::exception *);
  typedef int (**_g4_t_v64)(std::exception *);
  typedef int (**_g4_t_v65)(std::exception *);
  typedef int (**_g4_t_v66)(std::exception *);
  typedef int (**_g4_t_v67)(std::exception *);
  typedef int (**_g4_t_v68)(std::exception *);
  typedef int (**_g4_t_v69)(std::exception *);
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (4u + sizeof(_g4_t_v45)) > _g4_s0 ? (4u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v46)) > _g4_s1 ? (44u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v47)) > _g4_s2 ? (44u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v48)) > _g4_s3 ? (44u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v49)) > _g4_s4 ? (48u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v50)) > _g4_s5 ? (52u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v51)) > _g4_s6 ? (56u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v52)) > _g4_s7 ? (60u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v53)) > _g4_s8 ? (60u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v54)) > _g4_s9 ? (64u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v55)) > _g4_s10 ? (64u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (79u + sizeof(_g4_t_v56)) > _g4_s11 ? (79u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v57)) > _g4_s12 ? (84u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v58)) > _g4_s13 ? (100u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (116u + sizeof(_g4_t_v59)) > _g4_s14 ? (116u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v60)) > _g4_s15 ? (128u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (132u + sizeof(_g4_t_v61)) > _g4_s16 ? (132u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (136u + sizeof(_g4_t_v62)) > _g4_s17 ? (136u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v63)) > _g4_s18 ? (152u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (172u + sizeof(_g4_t_v64)) > _g4_s19 ? (172u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (192u + sizeof(_g4_t_v65)) > _g4_s20 ? (192u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (212u + sizeof(_g4_t_v66)) > _g4_s21 ? (212u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (232u + sizeof(_g4_t_v67)) > _g4_s22 ? (232u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (252u + sizeof(_g4_t_v68)) > _g4_s23 ? (252u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (272u + sizeof(_g4_t_v69)) > _g4_s24 ? (272u + sizeof(_g4_t_v69)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 56u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 79u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 84u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 100u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 116u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 128u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 132u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 136u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 152u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 172u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 192u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 212u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 232u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 252u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 272u);

  User = (int)(uintptr_t)(chatv2::Core::ArionExecutor::GetUser((chatv2::Core::ArionExecutor::Self *)(a1 + 5)));
  chatv2::Core::ArionUser::SetNickname(User, (int)(uintptr_t)(a3));
  v57[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  Instance = (gaia::Gaia::Self *)gaia::Gaia::GetInstance(v45);
  gaia::Gaia::GetCredentialDetails(Instance, 19, 2, (gaia::Gaia::Self *)v57);
  v5 = (int)(uintptr_t)(chatv2::Core::ArionExecutor::GetUser((chatv2::Core::ArionExecutor::Self *)(a1 + 5)));
  chatv2::Core::ArionUser::SetCredential(v5, (int)(uintptr_t)(v57));
  chatv2::Core::ArionExecutor::SetClientID(a1 + 5, a2);
  v6 = opNew(0x80u);
  *(uint32_t *)(v6 + 4) = 0;
  *(uint32_t *)(v6 + 8) = 0;
  *(uint32_t *)v6 = ((uint32_t)(uintptr_t)&off_20A9450);
  *(uint32_t *)(v6 + 12) = 0;
  *(uint32_t *)(v6 + 16) = 0;
  *(uint32_t *)(v6 + 20) = 0;
  v7 = pthread_mutex_init((pthread_mutex_t *)(v6 + 24), nullptr);
  if ( v7 != 0 )
  {
    sub_1235D60(&v64, v7, "boost:: mutex constructor failed in pthread_mutex_init");
    v64 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
    std::terminate();
  }
  v8 = pthread_mutex_init((pthread_mutex_t *)(v6 + 28), nullptr);
  if ( v8 != 0 )
  {
    sub_1235D60(&v66, v8, "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    v66 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
    std::terminate();
  }
  v9 = pthread_cond_init((pthread_cond_t *)(v6 + 32), nullptr);
  if ( v9 != 0 )
  {
    if ( pthread_mutex_destroy((pthread_mutex_t *)(v6 + 28)) != 0 )
      __assert2(
        "../../../../../lib/boost/thread/pthread/condition_variable_fwd.hpp",
        69,
        "boost::condition_variable::condition_variable()",
        "!pthread_mutex_destroy(&internal_mutex)");
    sub_1235D60(&v65, v9, "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    v65 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
    std::terminate();
  }
  v10 = pthread_mutex_init((pthread_mutex_t *)(v6 + 36), nullptr);
  if ( v10 != 0 )
  {
    sub_1235D60(&v67, v10, "boost:: mutex constructor failed in pthread_mutex_init");
    v67 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
    std::terminate();
  }
  v11 = pthread_mutex_init((pthread_mutex_t *)(v6 + 40), nullptr);
  if ( v11 != 0 )
  {
    sub_1235D60(&v69, v11, "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    v69 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
    std::terminate();
  }
  v12 = pthread_cond_init((pthread_cond_t *)(v6 + 44), nullptr);
  if ( v12 != 0 )
  {
    if ( pthread_mutex_destroy((pthread_mutex_t *)(v6 + 40)) != 0 )
      __assert2(
        "../../../../../lib/boost/thread/pthread/condition_variable_fwd.hpp",
        69,
        "boost::condition_variable::condition_variable()",
        "!pthread_mutex_destroy(&internal_mutex)");
    sub_1235D60(&v68, v12, "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    v68 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
    std::terminate();
  }
  *(uint32_t *)(v6 + 68) = v6 + 60;
  *(uint32_t *)(v6 + 72) = v6 + 60;
  *(uint32_t *)v6 = ((uint32_t)(uintptr_t)&off_2092168);
  *(uint32_t *)(v6 + 124) = (uint32_t)(uintptr_t)(a1);
  *(uint8_t *)(v6 + 48) = 0;
  *(uint8_t *)(v6 + 49) = 0;
  *(uint8_t *)(v6 + 50) = 0;
  *(uint32_t *)(v6 + 52) = 0;
  *(uint32_t *)(v6 + 60) = 0;
  *(uint32_t *)(v6 + 64) = 0;
  *(uint32_t *)(v6 + 76) = 0;
  *(uint32_t *)(v6 + 80) = 0;
  *(uint32_t *)(v6 + 84) = 0;
  *(uint32_t *)(v6 + 88) = 0;
  *(uint32_t *)(v6 + 92) = 0;
  *(uint32_t *)(v6 + 96) = 0;
  *(uint32_t *)(v6 + 100) = 0;
  *(uint32_t *)(v6 + 104) = 0;
  *(uint32_t *)(v6 + 108) = 0;
  *(uint8_t *)(v6 + 112) = 1;
  *(uint8_t *)(v6 + 113) = 0;
  *(uint32_t *)(v6 + 116) = (uint32_t)(uintptr_t)(chatv2::Core::ChatLibEngine::Start);
  *(uint32_t *)(v6 + 120) = 0;
  v61 = v6;
  v62 = nullptr;
  v13 = (volatile int32_t *)opNew(0x10u);
  *((uint32_t *)v13 + 1) = 1;
  *((uint32_t *)v13 + 2) = 1;
  *v13 = (volatile int32_t)((uint32_t)(uintptr_t)&off_2092188);
  v14 = v62;
  v15 = v62 == nullptr;
  *((uint32_t *)v13 + 3) = v6;
  v62 = v13;
  if ( !v15 && __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v14, 8);
    if ( __sync_fetch_and_add(v14 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v14, 12);
  }
  v16 = *(volatile int32_t **)(v6 + 8);
  if ( v16 == nullptr || *((uint32_t *)v16 + 1) == 0 )
  {
    v17 = v62;
    if ( v62 != nullptr )
    {
      __sync_add_and_fetch(v62 + 1, 1);
      v16 = *(volatile int32_t **)(v6 + 8);
    }
    *(uint32_t *)(v6 + 4) = v6;
    if ( v17 != v16 )
    {
      if ( v17 != nullptr )
      {
        __sync_add_and_fetch(v17 + 2, 1);
        v16 = *(volatile int32_t **)(v6 + 8);
      }
      if ( v16 != nullptr && __sync_fetch_and_add(v16 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v16, 12);
      *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(v17);
    }
    if ( v17 != nullptr && __sync_fetch_and_add(v17 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v17, 8);
      if ( __sync_fetch_and_add(v17 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v17, 12);
    }
  }
  if ( (uint8_t)boost::thread::start_thread_noexcept((boost::thread::Self *)&v61) == 0 )
  {
    sub_1235D60(&v63, 11, "boost::thread_resource_error");
    v63 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
    std::terminate();
  }
  v18 = v62;
  v19 = v61;
  if ( v62 != nullptr )
    __sync_add_and_fetch(v62 + 1, 1);
  v20 = (volatile int32_t *)a1[3];
  a1[2] = v19;
  a1[3] = (uint32_t)(uintptr_t)(v18);
  if ( v20 != nullptr && __sync_fetch_and_add(v20 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v20, 8);
    if ( __sync_fetch_and_add(v20 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v20, 12);
  }
  v21 = v62;
  v61 = 0;
  v15 = v62 == nullptr;
  v62 = nullptr;
  if ( !v15 && __sync_fetch_and_add(v21 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v21, 8);
    if ( __sync_fetch_and_add(v21 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v21, 12);
  }
  boost::thread::detach((boost::thread::Self *)&v61);
  v22 = v62;
  if ( v62 != nullptr && __sync_fetch_and_add(v62 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v22, 8);
    if ( __sync_fetch_and_add(v22 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v22, 12);
  }
  v23 = 0;
  v59[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v59), 0x80u, 0);
  v50 = 0;
  v24 = aChatlibengineI /* " ChatLibEngine initialized, nickname: {0}\n" */[0];
  v54 = " ChatLibEngine initialized, nickname: {0}\n";
  while ( 1 )
  {
    v27 = (uint8_t *)(v54 + 1);
    if ( v24 != 123 )
    {
      v25 = v59[0];
      v26 = v23 + 1;
      if ( v23 + 1 > *(uint32_t *)(v59[0] - 12) )
      {
        v46 = v24;
        sub_1939D80((int)(uintptr_t)(v59), v23 + 65, 0);
        v25 = v59[0];
        v26 = v23 + 1;
        v24 = v46;
      }
      if ( *(int *)(v25 - 4) >= 0 )
      {
        v49 = v26;
        v47 = v24;
        sub_19397C0(v59);
        v25 = v59[0];
        v26 = v49;
        v24 = v47;
      }
      *(uint8_t *)(v25 + v23) = v24;
      ++v54;
      v23 = v26;
      goto LABEL_37;
    }
    v28 = v54[1];
    if ( v28 == 123 )
    {
      v43 = v59[0];
      if ( v23 + 2 > *(uint32_t *)(v59[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v59), v23 + 66, 0);
        v43 = v59[0];
        v53 = v23 + 1;
        if ( *(int *)(v59[0] - 4) < 0 )
          goto LABEL_71;
      }
      else
      {
        v53 = v23 + 1;
        if ( *(int *)(v59[0] - 4) < 0 )
        {
LABEL_71:
          *(uint8_t *)(v43 + v23) = 123;
          v44 = v59[0];
          if ( *(int *)(v59[0] - 4) >= 0 )
          {
            sub_19397C0(v59);
            v44 = v59[0];
          }
          v54 += 2;
          v23 += 2;
          *(uint8_t *)(v44 + v53) = 123;
          goto LABEL_37;
        }
      }
      sub_19397C0(v59);
      v43 = v59[0];
      goto LABEL_71;
    }
    if ( v28 == 0 )
      goto LABEL_62;
    v55 = v23;
    v29 = 1;
    v30 = 0;
    while ( 1 )
    {
      v28 = *v27;
      if ( (uint8_t)(*v27 - 48) > 9u )
        break;
      v31 = v29 * v30;
      ++v27;
      v29 *= 10;
      v30 = v31 + v28 - 48;
      if ( *v27 == 0 )
      {
        v32 = v30;
        v28 = 0;
        v23 = v55;
        goto LABEL_45;
      }
    }
    v32 = v30;
    v23 = v55;
    if ( v29 == 1 )
LABEL_62:
      v32 = v50++;
    if ( v28 == 58 )
    {
      v28 = v27[1];
      if ( v28 == 120 || v28 == 88 )
      {
        v28 = v27[2];
        v54 = (const char *)(v27 + 3);
      }
      else
      {
        v54 = (const char *)(v27 + 2);
      }
    }
    else
    {
LABEL_45:
      v54 = (const char *)(v27 + 1);
    }
    if ( v28 != 125 )
      break;
    if ( v32 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(v59), v23, 0);
LABEL_37:
      v24 = *v54;
      if ( *v54 == 0 )
        goto LABEL_56;
    }
    else
    {
      v52 = *(uint32_t *)(*a3 - 12);
      if ( v23 + v52 > *(uint32_t *)(v59[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v59), v23 + v52 + 64, 0);
        v52 = *(uint32_t *)(*a3 - 12);
      }
      if ( v52 == 0 )
        goto LABEL_37;
      v33 = 0;
      v51 = v23;
      v34 = a3;
      do
      {
        v35 = v59[0];
        v36 = v33 + v51;
        if ( *(int *)(v59[0] - 4) >= 0 )
        {
          v48 = v34;
          sub_19397C0(v59);
          v35 = v59[0];
          v34 = v48;
        }
        v37 = *(uint8_t *)(*v34 + v33++);
        *(uint8_t *)(v35 + v36) = v37;
      }
      while ( v33 != v52 );
      v23 = v33 + v51;
      v24 = *v54;
      if ( *v54 == 0 )
        goto LABEL_56;
    }
  }
  sub_1939D80((int)(uintptr_t)(v59), v23, 0);
LABEL_56:
  sub_1939D80((int)(uintptr_t)(v59), v23, 0);
  g4_std::string::construct_copy(v58, v59);
  v38 = (void *)(v59[0] - 12);
  if ( (uint32_t *)(v59[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v59[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v38);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "ChatLib", (int)(uintptr_t)(&v56));
  chatv2::Utils::Log(3, 0, &v60, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ChatLibEngine.cpp", 35, v58);
  v39 = (void *)(v60 - 12);
  if ( (uint32_t *)(v60 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v39);
  }
  v40 = (void *)(v58[0] - 12);
  if ( (uint32_t *)(v58[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v58[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v40);
  }
  result = v57[0];
  v42 = (void *)(v57[0] - 12);
  if ( (uint32_t *)(v57[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v57[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v42)), (int)0);
  }
  return result;
}



// ============================================================================
// Address:   0x1232bd0 (size: 1488 bytes)
// Symbol:    _ZN6chatv24Core13ChatLibEngine11SetHandlersEv
// Demangled: chatv2::Core::ChatLibEngine::SetHandlers(void)
// ============================================================================
int (*chatv2::Core::ChatLibEngine::SetHandlers(
        chatv2::Core::ChatLibEngine::Self *self))(uint32_t *, uint32_t *, int)
{
  int v1;
  unsigned int v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int (*result)(uint32_t *, uint32_t *, int);
  void (*v11)(uint32_t *, uint32_t *, int);
  void (*v12)(uint32_t *, uint32_t *, int);
  int v13;
  void (*v14)(char *, char *, int);
  void (*v15)(int (**)(), int (**)(), int);
  int v16;
  void (*v17)(char *, char *, int);
  void (*v18)(int (**)(), int (**)(), int);
  int v19;
  void (*v20)(char *, char *, int);
  void (*v21)(int (**)(), int (**)(), int);
  typedef char **_g4_t_v22;
  typedef char **_g4_t_v23;
  typedef unsigned int *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[3];
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[3];
  typedef char *_g4_t_v29;
  typedef int (*_g4_t_v30)();
  typedef chatv2::Core::ChatLibEngine::Self *_g4_t_v31;
  typedef chatv2::Core::ChatLibEngine::Self *_g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef uint32_t _g4_t_v34[6];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v26)) > _g4_s4 ? (20u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v27)) > _g4_s5 ? (32u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v28)) > _g4_s6 ? (36u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v29)) > _g4_s7 ? (48u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v30)) > _g4_s8 ? (52u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v31)) > _g4_s9 ? (56u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v32)) > _g4_s10 ? (60u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v33)) > _g4_s11 ? (64u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v34)) > _g4_s12 ? (68u + sizeof(_g4_t_v34)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);

  v25 = 0;
  v30 = nullptr;
  v31 = self;
  v22 = (char **)((char *)self + 24);
  if ( (uint8_t)sub_59D630() != 0 )
  {
    v29 = nullptr;
  }
  else
  {
    v26[1] = 0;
    v26[0] = (uint32_t)(uintptr_t)(chatv2::Core::ChatLibEngine::AddRequest);
    v26[2] = (uint32_t)(uintptr_t)(self);
    v29 = (char *)&g4_fnstatic_4e63cd852d
        + 1;
    v30 = (int (*)())chatv2::Core::ChatLibEngine::AddRequest;
    v31 = nullptr;
    v32 = self;
    v25 = 0;
  }
  if ( v22 == (char **)&v25 )
    goto LABEL_9;
  v1 = *((uint32_t *)self + 6);
  if ( v1 != 0 )
  {
    v25 = *((uint32_t *)self + 6);
    if ( (v1 & 1) != 0 )
    {
      v26[0] = *((uint32_t *)self + 7);
      v26[1] = *((uint32_t *)self + 8);
      v26[2] = *((uint32_t *)self + 9);
    }
    else
    {
      (*(void (**)(char *, uint32_t *, int))(v1 & 0xFFFFFFFE))((char *)self + 28, v26, 1);
    }
    *((uint32_t *)self + 6) = 0;
  }
  v2 = (unsigned int)(uintptr_t)(v29);
  if ( v22 != &v29 )
  {
LABEL_9:
    v3 = (unsigned int)(uintptr_t)(v29);
    if ( v29 != nullptr )
    {
      *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v29);
      if ( (v3 & 1) != 0 )
      {
        *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v30);
        *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v31);
        *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v32);
      }
      else
      {
        (*(void (**)(int (**)(), char *, int))(v3 & 0xFFFFFFFE))(&v30, (char *)self + 28, 1);
      }
      v29 = nullptr;
      goto LABEL_13;
    }
    v19 = *((uint32_t *)self + 6);
    if ( v19 == 0 )
      goto LABEL_13;
    v2 = 0;
    if ( (v19 & 1) == 0 )
    {
      v20 = *(void (**)(char *, char *, int))(v19 & 0xFFFFFFFE);
      if ( v20 != nullptr )
      {
        v20((char *)self + 28, (char *)self + 28, 2);
        v2 = (unsigned int)(uintptr_t)(v29);
      }
    }
    *((uint32_t *)self + 6) = 0;
  }
  if ( v2 != 0 && (v2 & 1) == 0 )
  {
    v21 = *(void (**)(int (**)(), int (**)(), int))(v2 & 0xFFFFFFFE);
    if ( v21 != nullptr )
      v21(&v30, &v30, 2);
  }
LABEL_13:
  if ( v25 != 0 && (v25 & 1) == 0 )
  {
    v12 = *(void (**)(uint32_t *, uint32_t *, int))(v25 & 0xFFFFFFFE);
    if ( v12 != nullptr )
      v12(v26, v26, 2);
  }
  v27 = 0;
  v23 = (char **)((char *)self + 40);
  v30 = nullptr;
  v31 = self;
  if ( (uint8_t)sub_59D630() != 0 )
  {
    v29 = nullptr;
  }
  else
  {
    v28[1] = 0;
    v28[0] = (uint32_t)(uintptr_t)(chatv2::Core::ChatLibEngine::AddServerResponse);
    v28[2] = (uint32_t)(uintptr_t)(self);
    v29 = (char *)&g4_fnstatic_418705717e
        + 1;
    v30 = (int (*)())chatv2::Core::ChatLibEngine::AddServerResponse;
    v31 = nullptr;
    v32 = self;
    v27 = 0;
  }
  if ( v23 == (char **)&v27 )
    goto LABEL_23;
  v4 = *((uint32_t *)self + 10);
  if ( v4 != 0 )
  {
    v27 = *((uint32_t *)self + 10);
    if ( (v4 & 1) != 0 )
    {
      v28[0] = *((uint32_t *)self + 11);
      v28[1] = *((uint32_t *)self + 12);
      v28[2] = *((uint32_t *)self + 13);
    }
    else
    {
      (*(void (**)(char *, uint32_t *, int))(v4 & 0xFFFFFFFE))((char *)self + 44, v28, 1);
    }
    *((uint32_t *)self + 10) = 0;
  }
  v5 = (unsigned int)(uintptr_t)(v29);
  if ( v23 != &v29 )
  {
LABEL_23:
    v6 = (unsigned int)(uintptr_t)(v29);
    if ( v29 != nullptr )
    {
      *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(v29);
      if ( (v6 & 1) != 0 )
      {
        *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(v30);
        *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v31);
        *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v32);
      }
      else
      {
        (*(void (**)(int (**)(), char *, int))(v6 & 0xFFFFFFFE))(&v30, (char *)self + 44, 1);
      }
      v29 = nullptr;
      goto LABEL_27;
    }
    v16 = *((uint32_t *)self + 10);
    if ( v16 == 0 )
      goto LABEL_27;
    v5 = 0;
    if ( (v16 & 1) == 0 )
    {
      v17 = *(void (**)(char *, char *, int))(v16 & 0xFFFFFFFE);
      if ( v17 != nullptr )
      {
        v17((char *)self + 44, (char *)self + 44, 2);
        v5 = (unsigned int)(uintptr_t)(v29);
      }
    }
    *((uint32_t *)self + 10) = 0;
  }
  if ( v5 != 0 && (v5 & 1) == 0 )
  {
    v18 = *(void (**)(int (**)(), int (**)(), int))(v5 & 0xFFFFFFFE);
    if ( v18 != nullptr )
      v18(&v30, &v30, 2);
  }
LABEL_27:
  if ( v27 != 0 && (v27 & 1) == 0 )
  {
    v11 = *(void (**)(uint32_t *, uint32_t *, int))(v27 & 0xFFFFFFFE);
    if ( v11 != nullptr )
      v11(v28, v28, 2);
  }
  v33 = 0;
  v24 = (unsigned int *)((char *)self + 56);
  v30 = nullptr;
  v31 = self;
  if ( (uint8_t)sub_59D630() != 0 )
  {
    v29 = nullptr;
  }
  else
  {
    v34[1] = 0;
    v34[0] = (uint32_t)(uintptr_t)(chatv2::Core::ChatLibEngine::AddClientResponse);
    v34[2] = (uint32_t)(uintptr_t)(self);
    v29 = (char *)&g4_fnstatic_b0c6332fcd
        + 1;
    v30 = (int (*)())(uintptr_t)(chatv2::Core::ChatLibEngine::AddClientResponse);
    v31 = nullptr;
    v32 = self;
    v33 = 0;
  }
  if ( v24 != &v33 )
  {
    v7 = *((uint32_t *)self + 14);
    if ( v7 != 0 )
    {
      v33 = *((uint32_t *)self + 14);
      if ( (v7 & 1) != 0 )
      {
        v34[0] = *((uint32_t *)self + 15);
        v34[1] = *((uint32_t *)self + 16);
        v34[2] = *((uint32_t *)self + 17);
      }
      else
      {
        (*(void (**)(char *, uint32_t *, int))(v7 & 0xFFFFFFFE))((char *)self + 60, v34, 1);
      }
      *((uint32_t *)self + 14) = 0;
    }
    v8 = (unsigned int)(uintptr_t)(v29);
    if ( v24 == (unsigned int *)&v29 )
      goto LABEL_58;
  }
  v9 = (unsigned int)(uintptr_t)(v29);
  if ( v29 != nullptr )
  {
    *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(v29);
    if ( (v9 & 1) != 0 )
    {
      *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(v30);
      *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v31);
      *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(v32);
    }
    else
    {
      (*(void (**)(int (**)(), char *, int))(v9 & 0xFFFFFFFE))(&v30, (char *)self + 60, 1);
    }
    v29 = nullptr;
    goto LABEL_41;
  }
  v13 = *((uint32_t *)self + 14);
  if ( v13 != 0 )
  {
    v8 = 0;
    if ( (v13 & 1) == 0 )
    {
      v14 = *(void (**)(char *, char *, int))(v13 & 0xFFFFFFFE);
      if ( v14 != nullptr )
      {
        v14((char *)self + 60, (char *)self + 60, 2);
        v8 = (unsigned int)(uintptr_t)(v29);
      }
    }
    *((uint32_t *)self + 14) = 0;
LABEL_58:
    if ( v8 != 0 && (v8 & 1) == 0 )
    {
      v15 = *(void (**)(int (**)(), int (**)(), int))(v8 & 0xFFFFFFFE);
      if ( v15 != nullptr )
        v15(&v30, &v30, 2);
    }
  }
LABEL_41:
  result = (int (*)(uint32_t *, uint32_t *, int))v33;
  if ( v33 != 0 && (v33 & 1) == 0 )
  {
    result = *(int (**)(uint32_t *, uint32_t *, int))(v33 & 0xFFFFFFFE);
    if ( result != nullptr )
      return (int (*)(uint32_t *, uint32_t *, int))result(v34, v34, 2);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: chatv2::Core::ChatLibEngine::GetResponse  (binary VA: 0x12331a0)
// Original: chatv2::Core::ChatLibEngine::GetResponse
// ----------------------------------------------------------------------------
chatv2::Core::ChatLibEngine::Self * chatv2::Core::ChatLibEngine::GetResponse(chatv2::Core::ChatLibEngine::Self *self, int a2)
{
  int v2;
  int *v3;
  int v4;
  int v5;
  volatile int32_t *v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  int v10;
  int *v12;
  int v13;
  typedef volatile int32_t *_g4_t_v14;
  typedef volatile int32_t *_g4_t_v15;
  typedef int (**_g4_t_v16)(std::exception *);
  typedef int (**_g4_t_v17)(std::exception *);
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v17)) > _g4_s3 ? (44u + sizeof(_g4_t_v17)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 248));
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    sub_1235D60(&v16, v2, "boost: mutex lock failed in pthread_mutex_lock");
    v16 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  v3 = *(int **)(a2 + 216);
  if ( *(int **)(a2 + 232) != v3 )
  {
    v4 = v3[1];
    v5 = *v3;
    if ( v4 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
    v6 = *((volatile int32_t **)self + 1);
    *(uint32_t *)self = v5;
    *((uint32_t *)self + 1) = v4;
    if ( v6 != nullptr && __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
    {
      v14 = v6;
      G4_VCALL<void>(v6, 8);
      if ( __sync_fetch_and_add(v14 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v14, 12);
    }
    v7 = *(uint32_t *)(a2 + 224);
    v8 = *(uint32_t *)(a2 + 216);
    if ( v8 == v7 - 8 )
    {
      boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)(v7 - 4));
      opDelete(*(void **)(a2 + 220));
      v12 = (int *)(*(uint32_t *)(a2 + 228) + 4);
      *(uint32_t *)(a2 + 228) = (uint32_t)(uintptr_t)(v12);
      v13 = *v12;
      *(uint32_t *)(a2 + 220) = *v12;
      *(uint32_t *)(a2 + 216) = v13;
      *(uint32_t *)(a2 + 224) = v13 + 512;
    }
    else
    {
      v9 = *(volatile int32_t **)(v8 + 4);
      if ( v9 != nullptr )
      {
        if ( __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) == 1 )
        {
          v15 = v9;
          G4_VCALL<void>(v9, 8);
          if ( __sync_fetch_and_add(v15 + 2, 0xFFFFFFFF) == 1 )
            G4_VCALL<void>(v15, 12);
        }
        v8 = *(uint32_t *)(a2 + 216);
      }
      *(uint32_t *)(a2 + 216) = v8 + 8;
    }
  }
  do
    v10 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 248));
  while ( v10 == 4 );
  if ( v10 != 0 )
  {
    sub_1235D60(&v17, v10, "boost: mutex unlock failed in pthread_mutex_unlock");
    v17 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ChatLibEngine::GetRequestFactory  (binary VA: 0x12333a0)
// Original: chatv2::Core::ChatLibEngine::GetRequestFactory
// ----------------------------------------------------------------------------
chatv2::Core::ChatLibEngine::Self * chatv2::Core::ChatLibEngine::GetRequestFactory(chatv2::Core::ChatLibEngine::Self *self, int a2)
{
  chatv2::Core::ChatLibEngine::Self *v2;
  volatile int32_t *v3;
  bool v4;
  volatile int32_t *v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef volatile int32_t *_g4_t_v9;
  typedef chatv2::Core::ChatLibEngine::Self **_g4_t_v10;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v8)) > _g4_s1 ? (32u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v9)) > _g4_s2 ? (36u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v10)) > _g4_s3 ? (56u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);

  v2 = self;
  v10 = &self;
  v7 = a2 + 20;
  chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v8);
  *(uint32_t *)v2 = v8;
  v3 = v9;
  v4 = v9 == nullptr;
  *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(v9);
  if ( !v4 )
  {
    __sync_add_and_fetch(v3 + 1, 1);
    v5 = v9;
    if ( v9 != nullptr && __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v5, 8, v7);
      if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v5, 12);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ChatLibEngine::Mute  (binary VA: 0x1233450)
// Original: chatv2::Core::ChatLibEngine::Mute
// ----------------------------------------------------------------------------
int chatv2::Core::ChatLibEngine::Mute(int a1, uint32_t *a2)
{
  size_t v2;
  char v3;
  int v4;
  size_t v5;
  uint8_t *v6;
  char v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  size_t v15;
  char v16;
  void *v17;
  void *v18;
  void *v19;
  int v21;
  int v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef int _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef size_t _g4_t_v30;
  typedef const char *_g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t _g4_t_v34[4];
  typedef int _g4_t_v35[3];
  typedef int _g4_t_v36[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v27)) > _g4_s4 ? (20u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v28)) > _g4_s5 ? (24u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v29)) > _g4_s6 ? (28u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v30)) > _g4_s7 ? (28u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v31)) > _g4_s8 ? (32u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v32)) > _g4_s9 ? (32u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v33)) > _g4_s10 ? (48u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v34)) > _g4_s11 ? (52u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v35)) > _g4_s12 ? (68u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v36)) > _g4_s13 ? (80u + sizeof(_g4_t_v36)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);

  v2 = 0;
  v35[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v35), 0x80u, 0);
  v27 = 0;
  v3 = aBanUserMessage /* " Ban user, message: {0}\n" */[0];
  v31 = " Ban user, message: {0}\n";
  while ( 1 )
  {
    v6 = (uint8_t *)(v31 + 1);
    if ( v3 != 123 )
    {
      v4 = v35[0];
      v5 = v2 + 1;
      if ( v2 + 1 > *(uint32_t *)(v35[0] - 12) )
      {
        v23 = v3;
        sub_1939D80((int)(uintptr_t)(v35), v2 + 65, 0);
        v4 = v35[0];
        v5 = v2 + 1;
        v3 = v23;
      }
      if ( *(int *)(v4 - 4) >= 0 )
      {
        v26 = v5;
        v24 = v3;
        sub_19397C0(v35);
        v4 = v35[0];
        v5 = v26;
        v3 = v24;
      }
      *(uint8_t *)(v4 + v2) = v3;
      ++v31;
      v2 = v5;
      goto LABEL_7;
    }
    v7 = v31[1];
    if ( v7 == 123 )
    {
      v21 = v35[0];
      if ( v2 + 2 > *(uint32_t *)(v35[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v35), v2 + 66, 0);
        v21 = v35[0];
        v30 = v2 + 1;
        if ( *(int *)(v35[0] - 4) < 0 )
          goto LABEL_40;
      }
      else
      {
        v30 = v2 + 1;
        if ( *(int *)(v35[0] - 4) < 0 )
        {
LABEL_40:
          *(uint8_t *)(v21 + v2) = 123;
          v22 = v35[0];
          if ( *(int *)(v35[0] - 4) >= 0 )
          {
            sub_19397C0(v35);
            v22 = v35[0];
          }
          v31 += 2;
          v2 += 2;
          *(uint8_t *)(v22 + v30) = 123;
          goto LABEL_7;
        }
      }
      sub_19397C0(v35);
      v21 = v35[0];
      goto LABEL_40;
    }
    if ( v7 == 0 )
      goto LABEL_31;
    v32 = v2;
    v8 = 1;
    v9 = 0;
    while ( 1 )
    {
      v7 = *v6;
      if ( (uint8_t)(*v6 - 48) > 9u )
        break;
      v10 = v8 * v9;
      ++v6;
      v8 *= 10;
      v9 = v10 + v7 - 48;
      if ( *v6 == 0 )
      {
        v11 = v9;
        v7 = 0;
        v2 = v32;
        goto LABEL_15;
      }
    }
    v11 = v9;
    v2 = v32;
    if ( v8 == 1 )
LABEL_31:
      v11 = v27++;
    if ( v7 == 58 )
    {
      v7 = v6[1];
      if ( v7 == 120 || v7 == 88 )
      {
        v7 = v6[2];
        v31 = (const char *)(v6 + 3);
      }
      else
      {
        v31 = (const char *)(v6 + 2);
      }
    }
    else
    {
LABEL_15:
      v31 = (const char *)(v6 + 1);
    }
    if ( v7 != 125 )
      break;
    if ( v11 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(v35), v2, 0);
LABEL_7:
      v3 = *v31;
      if ( *v31 == 0 )
        goto LABEL_26;
    }
    else
    {
      v29 = *(uint32_t *)(*a2 - 12);
      if ( v2 + v29 > *(uint32_t *)(v35[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v35), v2 + v29 + 64, 0);
        v29 = *(uint32_t *)(*a2 - 12);
      }
      if ( v29 == 0 )
        goto LABEL_7;
      v12 = 0;
      v28 = v2;
      v13 = a2;
      do
      {
        v14 = v35[0];
        v15 = v12 + v28;
        if ( *(int *)(v35[0] - 4) >= 0 )
        {
          v25 = v13;
          sub_19397C0(v35);
          v14 = v35[0];
          v13 = v25;
        }
        v16 = *(uint8_t *)(*v13 + v12++);
        *(uint8_t *)(v14 + v15) = v16;
      }
      while ( v12 != v29 );
      v2 = v12 + v28;
      v3 = *v31;
      if ( *v31 == 0 )
        goto LABEL_26;
    }
  }
  sub_1939D80((int)(uintptr_t)(v35), v2, 0);
LABEL_26:
  sub_1939D80((int)(uintptr_t)(v35), v2, 0);
  g4_std::string::construct_copy(v34, v35);
  v17 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v36), "ChatLib", (int)(uintptr_t)(&v33));
  chatv2::Utils::Log(4, 0, v36, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ChatLibEngine.cpp", 132, v34);
  v18 = (void *)(v36[0] - 12);
  if ( (uint32_t *)(v36[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = (void *)(v34[0] - 12);
  if ( (uint32_t *)(v34[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  return chatv2::Core::ArionExecutor::Mute(a1 + 20, a2);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ChatLibEngine::UnMute  (binary VA: 0x12338c0)
// Original: chatv2::Core::ChatLibEngine::UnMute
// ----------------------------------------------------------------------------
int chatv2::Core::ChatLibEngine::UnMute(chatv2::Core::ChatLibEngine::Self *self)
{
  void *v1;
  void *v2;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5[3];
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5), " Unban user\n", (int)(uintptr_t)(&v4) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "ChatLib", (int)(uintptr_t)(&v4));
  chatv2::Utils::Log(4, 0, &v6, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ChatLibEngine.cpp", 138, v5);
  v1 = (void *)(v6 - 12);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  v2 = (void *)(v5[0] - 12);
  if ( (uint32_t *)(v5[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return chatv2::Core::ArionExecutor::UnMute((chatv2::Core::ChatLibEngine::Self *)((char *)self + 20));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ChatLibEngine::Destroy  (binary VA: 0x12339c0)
// Original: chatv2::Core::ChatLibEngine::~ChatLibEngine
// ----------------------------------------------------------------------------
void chatv2::Core::ChatLibEngine::Destroy(chatv2::Core::ChatLibEngine::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  typedef int (**_g4_t_v7)(std::exception *);
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  *((uint8_t *)self + 16) = 0;
  if ( (uint8_t)boost::thread::joinable((chatv2::Core::ChatLibEngine::Self *)((char *)self + 8)) != 0 )
  {
    v1 = boost::thread::native_handle((boost::thread::Self *)((char *)self + 8));
    if ( v1 == pthread_self() )
    {
      sub_1235D60(&v7, 35, "boost thread: trying joining itself");
      v7 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
      std::terminate();
    }
    boost::thread::join_noexcept((chatv2::Core::ChatLibEngine::Self *)((char *)self + 8));
  }
  do
    v2 = pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 248));
  while ( v2 == 4 );
  if ( v2 != 0 )
    __assert2(
      "../../../../../lib/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  g4_std_compat::deque_destroy((chatv2::Core::ChatLibEngine::Self *)((char *)self + 208));
  do
    v3 = pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 204));
  while ( v3 == 4 );
  if ( v3 != 0 )
    __assert2(
      "../../../../../lib/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  g4_std_compat::deque_destroy((chatv2::Core::ChatLibEngine::Self *)((char *)self + 164));
  do
    v4 = pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 160));
  while ( v4 == 4 );
  if ( v4 != 0 )
    __assert2(
      "../../../../../lib/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  g4_std_compat::deque_destroy((chatv2::Core::ChatLibEngine::Self *)((char *)self + 120));
  chatv2::Core::ArionExecutor::Destroy((chatv2::Core::ChatLibEngine::Self *)((char *)self + 20));
  boost::thread::detach((chatv2::Core::ChatLibEngine::Self *)((char *)self + 8));
  v5 = *((volatile int32_t **)self + 3);
  if ( v5 != nullptr && __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v5, 8);
    if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v5, 12);
  }
  v6 = *((volatile int32_t **)self + 1);
  if ( v6 != nullptr && __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
    G4_VCALL<void>(v6, 12);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ChatLibEngine::Construct  (binary VA: 0x1233bb0)
// Original: chatv2::Core::ChatLibEngine::ChatLibEngine
// ----------------------------------------------------------------------------
chatv2::Core::ChatLibEngine::Self * chatv2::Core::ChatLibEngine::Construct(chatv2::Core::ChatLibEngine::Self *self)
{
  chatv2::Core::ChatLibEngine::Self *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  int v20;
  int *v21;
  uint32_t *v22;
  uint32_t *v23;
  int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int *v28;
  uint32_t *v29;
  uint32_t *v30;
  int v31;
  uint32_t *v32;
  int *v33;
  int v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  int v38;
  int v39;
  int *v40;
  uint32_t *v41;
  uint32_t *v42;
  int v43;
  int v44;
  unsigned int v45;
  unsigned int v46;
  int *v47;
  uint32_t *v48;
  uint32_t *v49;
  int v50;
  uint32_t *v51;
  int *v52;
  int v53;
  uint32_t *v54;
  uint32_t *v55;
  uint32_t *v56;
  int v57;
  chatv2::Core::ChatLibEngine::Self *result;
  typedef unsigned int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef int *_g4_t_v63;
  typedef int *_g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef chatv2::Core::ChatLibEngine::Self *_g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef chatv2::Core::ChatLibEngine::Self *_g4_t_v69;
  typedef int (**_g4_t_v70)(std::exception *);
  typedef int (**_g4_t_v71)(std::exception *);
  typedef int (**_g4_t_v72)(std::exception *);
  typedef uint32_t _g4_t_v73[2];
  typedef uint32_t *_g4_t_v74;
  typedef uint32_t *_g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  typedef uint32_t *_g4_t_v78;
  typedef uint32_t *_g4_t_v79;
  typedef uint32_t *_g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  typedef int *_g4_t_v87;
  typedef uint32_t *_g4_t_v88;
  typedef uint32_t *_g4_t_v89;
  typedef uint32_t *_g4_t_v90;
  typedef int *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef uint32_t *_g4_t_v94;
  typedef uint32_t *_g4_t_v95;
  typedef uint32_t *_g4_t_v96;
  typedef int *_g4_t_v97;
  typedef uint32_t *_g4_t_v98;
  typedef uint32_t *_g4_t_v99;
  typedef uint32_t *_g4_t_v100;
  typedef int *_g4_t_v101;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v59)) > _g4_s0 ? (4u + sizeof(_g4_t_v59)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v60)) > _g4_s1 ? (4u + sizeof(_g4_t_v60)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v61)) > _g4_s2 ? (4u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v62)) > _g4_s3 ? (8u + sizeof(_g4_t_v62)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v63)) > _g4_s4 ? (8u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v64)) > _g4_s5 ? (8u + sizeof(_g4_t_v64)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v65)) > _g4_s6 ? (12u + sizeof(_g4_t_v65)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v66)) > _g4_s7 ? (12u + sizeof(_g4_t_v66)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v67)) > _g4_s8 ? (12u + sizeof(_g4_t_v67)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v68)) > _g4_s9 ? (12u + sizeof(_g4_t_v68)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v69)) > _g4_s10 ? (12u + sizeof(_g4_t_v69)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v70)) > _g4_s11 ? (28u + sizeof(_g4_t_v70)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v71)) > _g4_s12 ? (48u + sizeof(_g4_t_v71)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v72)) > _g4_s13 ? (68u + sizeof(_g4_t_v72)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v73)) > _g4_s14 ? (88u + sizeof(_g4_t_v73)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v74)) > _g4_s15 ? (96u + sizeof(_g4_t_v74)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v75)) > _g4_s16 ? (100u + sizeof(_g4_t_v75)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v76)) > _g4_s17 ? (104u + sizeof(_g4_t_v76)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v77)) > _g4_s18 ? (108u + sizeof(_g4_t_v77)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v78)) > _g4_s19 ? (112u + sizeof(_g4_t_v78)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v79)) > _g4_s20 ? (116u + sizeof(_g4_t_v79)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v80)) > _g4_s21 ? (120u + sizeof(_g4_t_v80)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v81)) > _g4_s22 ? (124u + sizeof(_g4_t_v81)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v82)) > _g4_s23 ? (128u + sizeof(_g4_t_v82)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v83)) > _g4_s24 ? (132u + sizeof(_g4_t_v83)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v84)) > _g4_s25 ? (136u + sizeof(_g4_t_v84)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v85)) > _g4_s26 ? (140u + sizeof(_g4_t_v85)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v86)) > _g4_s27 ? (144u + sizeof(_g4_t_v86)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v87)) > _g4_s28 ? (148u + sizeof(_g4_t_v87)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v88)) > _g4_s29 ? (152u + sizeof(_g4_t_v88)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v89)) > _g4_s30 ? (156u + sizeof(_g4_t_v89)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v90)) > _g4_s31 ? (160u + sizeof(_g4_t_v90)) : _g4_s31,
    _g4_s33 = (164u + sizeof(_g4_t_v91)) > _g4_s32 ? (164u + sizeof(_g4_t_v91)) : _g4_s32,
    _g4_s34 = (168u + sizeof(_g4_t_v92)) > _g4_s33 ? (168u + sizeof(_g4_t_v92)) : _g4_s33,
    _g4_s35 = (172u + sizeof(_g4_t_v93)) > _g4_s34 ? (172u + sizeof(_g4_t_v93)) : _g4_s34,
    _g4_s36 = (176u + sizeof(_g4_t_v94)) > _g4_s35 ? (176u + sizeof(_g4_t_v94)) : _g4_s35,
    _g4_s37 = (180u + sizeof(_g4_t_v95)) > _g4_s36 ? (180u + sizeof(_g4_t_v95)) : _g4_s36,
    _g4_s38 = (184u + sizeof(_g4_t_v96)) > _g4_s37 ? (184u + sizeof(_g4_t_v96)) : _g4_s37,
    _g4_s39 = (188u + sizeof(_g4_t_v97)) > _g4_s38 ? (188u + sizeof(_g4_t_v97)) : _g4_s38,
    _g4_s40 = (192u + sizeof(_g4_t_v98)) > _g4_s39 ? (192u + sizeof(_g4_t_v98)) : _g4_s39,
    _g4_s41 = (196u + sizeof(_g4_t_v99)) > _g4_s40 ? (196u + sizeof(_g4_t_v99)) : _g4_s40,
    _g4_s42 = (200u + sizeof(_g4_t_v100)) > _g4_s41 ? (200u + sizeof(_g4_t_v100)) : _g4_s41,
    _g4_s43 = (204u + sizeof(_g4_t_v101)) > _g4_s42 ? (204u + sizeof(_g4_t_v101)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 8u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 12u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 12u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 12u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 68u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 88u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 96u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 100u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 104u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 108u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 112u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 116u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 120u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 124u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 128u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 132u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 136u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 140u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 144u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 148u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 152u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 156u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 160u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 164u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 168u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 172u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 176u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 180u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 184u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 188u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 192u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 196u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 200u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 204u);

  v1 = self;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  boost::thread::Construct((chatv2::Core::ChatLibEngine::Self *)((char *)self + 8));
  *((uint8_t *)self + 16) = 0;
  chatv2::Core::ArionExecutor::Construct((chatv2::Core::ChatLibEngine::Self *)((char *)self + 20));
  v74 = nullptr;
  v75 = nullptr;
  v76 = nullptr;
  v78 = nullptr;
  v79 = nullptr;
  v80 = nullptr;
  v81 = nullptr;
  v73[1] = 8;
  v73[0] = opNew(0x20u);
  v2 = (uint32_t *)(v73[0] + 12);
  *(uint32_t *)(v73[0] + 12) = opNew(0x200u);
  v77 = v2;
  v3 = (uint32_t *)*v2;
  v81 = v2;
  v75 = v3;
  v76 = v3 + 128;
  v4 = (uint32_t *)*v2;
  *((uint32_t *)self + 30) = 0;
  v79 = v4;
  v78 = v4;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 31) = 8;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 39) = 0;
  v74 = v3;
  v80 = v4 + 128;
  v5 = opNew(0x20u);
  v6 = *((uint32_t *)self + 31);
  *((uint32_t *)self + 30) = v5;
  v7 = v5 + ((2 * v6 - 2) & 0xFFFFFFFC);
  v59 = v7;
  v8 = v7 + 4;
  if ( v7 < v7 + 4 )
  {
    v9 = (int *)v7;
    do
      *v9++ = opNew(0x200u);
    while ( v8 > (unsigned int)(uintptr_t)(v9) );
  }
  *((uint32_t *)self + 35) = v59;
  v10 = *(uint32_t **)v59;
  *((uint32_t *)self + 33) = *(uint32_t *)v59;
  *((uint32_t *)self + 39) = v8 - 4;
  v11 = v10 + 128;
  *((uint32_t *)self + 34) = (uint32_t)(uintptr_t)(v10 + 128);
  v12 = *(uint32_t *)(v8 - 4);
  v13 = v76;
  *((uint32_t *)self + 37) = v12;
  *((uint32_t *)self + 36) = v12;
  v65 = v13;
  v14 = v77;
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)(v10);
  v62 = v14;
  v15 = v12 + 512;
  v16 = v74;
  *((uint32_t *)self + 38) = v15;
  if ( v78 != v16 )
  {
    v17 = v65;
    v18 = v78;
    while ( 1 )
    {
      if ( v10 != nullptr )
      {
        *v10 = *v16;
        v19 = v16[1];
        v10[1] = v19;
        if ( v19 != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v19 + 4), 1);
      }
      v16 += 2;
      if ( v16 == v17 )
      {
        v10 += 2;
        v16 = (uint32_t *)v62[1];
        ++v62;
        v17 = v16 + 128;
        if ( v10 == v11 )
          goto LABEL_13;
LABEL_7:
        if ( v18 == v16 )
          goto LABEL_14;
      }
      else
      {
        v10 += 2;
        if ( v10 != v11 )
          goto LABEL_7;
LABEL_13:
        v10 = *(uint32_t **)(v59 + 4);
        v59 += 4;
        v11 = v10 + 128;
        if ( v18 == v16 )
        {
LABEL_14:
          v1 = self;
          break;
        }
      }
    }
  }
  g4_std_compat::deque_destroy((std::deque<boost::shared_ptr<chatv2::Requests::IRequest::Self>> *)v73);
  v20 = pthread_mutex_init((pthread_mutex_t *)((char *)v1 + 160), nullptr);
  if ( v20 != 0 )
  {
    sub_1235D60(&v70, v20, "boost:: mutex constructor failed in pthread_mutex_init");
    v70 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
    std::terminate();
  }
  v82 = 0;
  v84 = nullptr;
  v85 = nullptr;
  v86 = nullptr;
  v87 = nullptr;
  v88 = nullptr;
  v89 = nullptr;
  v90 = nullptr;
  v91 = nullptr;
  v83 = 8;
  v82 = opNew(0x20u);
  v21 = (int *)(v82 + ((2 * v83 - 2) & 0xFFFFFFFC));
  *v21 = opNew(0x200u);
  v87 = v21;
  v22 = (uint32_t *)*v21;
  v91 = v21;
  v85 = v22;
  v86 = v22 + 128;
  v23 = (uint32_t *)*v21;
  *((uint32_t *)v1 + 41) = 0;
  v89 = v23;
  v88 = v23;
  *((uint32_t *)v1 + 43) = 0;
  *((uint32_t *)v1 + 44) = 0;
  *((uint32_t *)v1 + 45) = 0;
  *((uint32_t *)v1 + 46) = 0;
  *((uint32_t *)v1 + 42) = 8;
  *((uint32_t *)v1 + 47) = 0;
  *((uint32_t *)v1 + 48) = 0;
  *((uint32_t *)v1 + 49) = 0;
  *((uint32_t *)v1 + 50) = 0;
  v84 = v22;
  v90 = v23 + 128;
  v24 = opNew(0x20u);
  v25 = *((uint32_t *)v1 + 42);
  *((uint32_t *)v1 + 41) = v24;
  v26 = v24 + ((2 * v25 - 2) & 0xFFFFFFFC);
  v60 = v26;
  v27 = v26 + 4;
  if ( v26 < v26 + 4 )
  {
    v28 = (int *)v26;
    do
      *v28++ = opNew(0x200u);
    while ( v27 > (unsigned int)(uintptr_t)(v28) );
  }
  *((uint32_t *)v1 + 46) = v60;
  v29 = *(uint32_t **)v60;
  *((uint32_t *)v1 + 44) = *(uint32_t *)v60;
  *((uint32_t *)v1 + 50) = v27 - 4;
  v30 = v29 + 128;
  *((uint32_t *)v1 + 45) = (uint32_t)(uintptr_t)(v29 + 128);
  v31 = *(uint32_t *)(v27 - 4);
  v32 = v86;
  *((uint32_t *)v1 + 48) = v31;
  *((uint32_t *)v1 + 47) = v31;
  v66 = v32;
  v33 = v87;
  *((uint32_t *)v1 + 43) = (uint32_t)(uintptr_t)(v29);
  v63 = v33;
  v34 = v31 + 512;
  v35 = v84;
  *((uint32_t *)v1 + 49) = v34;
  if ( v88 != v35 )
  {
    v36 = v66;
    v67 = v1;
    v37 = v88;
    while ( 1 )
    {
      if ( v29 != nullptr )
      {
        *v29 = *v35;
        v38 = v35[1];
        v29[1] = v38;
        if ( v38 != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v38 + 4), 1);
      }
      v35 += 2;
      if ( v35 == v36 )
      {
        v29 += 2;
        v35 = (uint32_t *)v63[1];
        ++v63;
        v36 = v35 + 128;
        if ( v29 == v30 )
          goto LABEL_28;
LABEL_22:
        if ( v37 == v35 )
          goto LABEL_29;
      }
      else
      {
        v29 += 2;
        if ( v29 != v30 )
          goto LABEL_22;
LABEL_28:
        v29 = *(uint32_t **)(v60 + 4);
        v60 += 4;
        v30 = v29 + 128;
        if ( v37 == v35 )
        {
LABEL_29:
          v1 = v67;
          break;
        }
      }
    }
  }
  g4_std_compat::deque_destroy((std::deque<boost::shared_ptr<chatv2::Responses::IServerResponse>> *)&v82);
  v39 = pthread_mutex_init((pthread_mutex_t *)((char *)v1 + 204), nullptr);
  if ( v39 != 0 )
  {
    sub_1235D60(&v71, v39, "boost:: mutex constructor failed in pthread_mutex_init");
    v71 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
    std::terminate();
  }
  v92 = 0;
  v94 = nullptr;
  v95 = nullptr;
  v96 = nullptr;
  v97 = nullptr;
  v98 = nullptr;
  v99 = nullptr;
  v100 = nullptr;
  v101 = nullptr;
  v93 = 8;
  v92 = opNew(0x20u);
  v40 = (int *)(v92 + ((2 * v93 - 2) & 0xFFFFFFFC));
  *v40 = opNew(0x200u);
  v97 = v40;
  v41 = (uint32_t *)*v40;
  v101 = v40;
  v95 = v41;
  v96 = v41 + 128;
  v42 = (uint32_t *)*v40;
  *((uint32_t *)v1 + 52) = 0;
  v99 = v42;
  v98 = v42;
  *((uint32_t *)v1 + 54) = 0;
  *((uint32_t *)v1 + 55) = 0;
  *((uint32_t *)v1 + 56) = 0;
  *((uint32_t *)v1 + 57) = 0;
  *((uint32_t *)v1 + 53) = 8;
  *((uint32_t *)v1 + 58) = 0;
  *((uint32_t *)v1 + 59) = 0;
  *((uint32_t *)v1 + 60) = 0;
  *((uint32_t *)v1 + 61) = 0;
  v94 = v41;
  v100 = v42 + 128;
  v43 = opNew(0x20u);
  v44 = *((uint32_t *)v1 + 53);
  *((uint32_t *)v1 + 52) = v43;
  v45 = v43 + ((2 * v44 - 2) & 0xFFFFFFFC);
  v61 = v45;
  v46 = v45 + 4;
  if ( v45 < v45 + 4 )
  {
    v47 = (int *)v45;
    do
      *v47++ = opNew(0x200u);
    while ( v46 > (unsigned int)(uintptr_t)(v47) );
  }
  *((uint32_t *)v1 + 57) = v61;
  v48 = *(uint32_t **)v61;
  *((uint32_t *)v1 + 55) = *(uint32_t *)v61;
  *((uint32_t *)v1 + 61) = v46 - 4;
  v49 = v48 + 128;
  *((uint32_t *)v1 + 56) = (uint32_t)(uintptr_t)(v48 + 128);
  v50 = *(uint32_t *)(v46 - 4);
  v51 = v96;
  *((uint32_t *)v1 + 59) = v50;
  *((uint32_t *)v1 + 58) = v50;
  v68 = v51;
  v52 = v97;
  *((uint32_t *)v1 + 54) = (uint32_t)(uintptr_t)(v48);
  v64 = v52;
  v53 = v50 + 512;
  v54 = v94;
  *((uint32_t *)v1 + 60) = v53;
  if ( v98 != v54 )
  {
    v55 = v68;
    v69 = v1;
    v56 = v98;
    while ( 1 )
    {
      if ( v48 != nullptr )
      {
        *v48 = *v54;
        v57 = v54[1];
        v48[1] = v57;
        if ( v57 != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v57 + 4), 1);
      }
      v54 += 2;
      if ( v54 == v55 )
      {
        v48 += 2;
        v54 = (uint32_t *)v64[1];
        ++v64;
        v55 = v54 + 128;
        if ( v48 == v49 )
          goto LABEL_43;
LABEL_37:
        if ( v56 == v54 )
          goto LABEL_44;
      }
      else
      {
        v48 += 2;
        if ( v48 != v49 )
          goto LABEL_37;
LABEL_43:
        v48 = *(uint32_t **)(v61 + 4);
        v61 += 4;
        v49 = v48 + 128;
        if ( v56 == v54 )
        {
LABEL_44:
          v1 = v69;
          break;
        }
      }
    }
  }
  g4_std_compat::deque_destroy((std::deque<boost::shared_ptr<chatv2::Responses::ClientResponse::Self>> *)&v92);
  result = (chatv2::Core::ChatLibEngine::Self *)pthread_mutex_init((pthread_mutex_t *)((char *)v1 + 248), nullptr);
  if ( result != nullptr )
  {
    sub_1235D60(&v72, result, "boost:: mutex constructor failed in pthread_mutex_init");
    v72 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
    std::terminate();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ChatLibEngine::AddRequest  (binary VA: 0x1234450)
// Original: chatv2::Core::ChatLibEngine::AddRequest
// ----------------------------------------------------------------------------
void chatv2::Core::ChatLibEngine::AddRequest(int a1, int *a2)
{
  void *v2;
  void *v3;
  pthread_mutex_t *v4;
  int v5;
  int v6;
  volatile int32_t *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[3];
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef volatile int32_t *_g4_t_v12;
  typedef int (**_g4_t_v13)(std::exception *);
  typedef int (**_g4_t_v14)(std::exception *);
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v14)) > _g4_s6 ? (48u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);

  if ( *a2 != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v9), " Add request\n", (int)(uintptr_t)(&v8) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "ChatLib", (int)(uintptr_t)(&v8));
    chatv2::Utils::Log(3, 0, &v10, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ChatLibEngine.cpp", 95, v9);
    v2 = (void *)(v10 - 12);
    if ( (uint32_t *)(v10 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    v3 = (void *)(v9[0] - 12);
    if ( (uint32_t *)(v9[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v11 = *a2;
    v12 = (volatile int32_t *)a2[1];
    if ( v12 != nullptr )
      __sync_add_and_fetch(v12 + 1, 1);
    v4 = (pthread_mutex_t *)(a1 + 160);
    do
      v5 = pthread_mutex_lock(v4);
    while ( v5 == 4 );
    if ( v5 != 0 )
    {
      sub_1235D60(&v13, v5, "boost: mutex lock failed in pthread_mutex_lock");
      v13 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
      std::terminate();
    }
    g4_std_compat::deque_push_back(a1 + 120, &v11);
    do
      v6 = pthread_mutex_unlock(v4);
    while ( v6 == 4 );
    if ( v6 != 0 )
    {
      sub_1235D60(&v14, v6, "boost: mutex unlock failed in pthread_mutex_unlock");
      v14 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
      std::terminate();
    }
    v7 = v12;
    if ( v12 != nullptr && __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v7, 8);
      if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v7, 12);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ChatLibEngine::Run  (binary VA: 0x1234660)
// Original: chatv2::Core::ChatLibEngine::Run
// ----------------------------------------------------------------------------
void chatv2::Core::ChatLibEngine::Run(chatv2::Core::ChatLibEngine::Self *self)
{
  pthread_mutex_t *v1;
  int v2;
  int *v3;
  char v4; // di
  int v5;
  volatile int32_t *v6;
  int v7;
  volatile int32_t *v8;
  int v9;
  pthread_mutex_t *v10;
  int v11;
  int v12;
  volatile int32_t *v13;
  int v14;
  volatile int32_t *v15;
  int v16;
  int v17;
  int v18;
  volatile int32_t *v19;
  int *v20;
  int v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef volatile int32_t *_g4_t_v24;
  typedef volatile int32_t *_g4_t_v25;
  typedef volatile int32_t *_g4_t_v26;
  typedef volatile int32_t *_g4_t_v27;
  typedef volatile int32_t *_g4_t_v28;
  typedef volatile int32_t *_g4_t_v29;
  typedef volatile int32_t *_g4_t_v30;
  typedef volatile int32_t *_g4_t_v31;
  typedef volatile int32_t *_g4_t_v32;
  typedef volatile int32_t *_g4_t_v33;
  typedef void (***_g4_t_v34)(uint32_t);
  typedef int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef volatile int32_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef volatile int32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef volatile int32_t *_g4_t_v41;
  typedef int (**_g4_t_v42)(std::exception *);
  typedef int (**_g4_t_v43)(std::exception *);
  typedef int (**_g4_t_v44)(std::exception *);
  typedef int (**_g4_t_v45)(std::exception *);
  typedef int (**_g4_t_v46)(std::exception *);
  typedef int (**_g4_t_v47)(std::exception *);
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v23)) > _g4_s1 ? (28u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v24)) > _g4_s2 ? (48u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v25)) > _g4_s3 ? (48u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v26)) > _g4_s4 ? (48u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v27)) > _g4_s5 ? (48u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v28)) > _g4_s6 ? (48u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v29)) > _g4_s7 ? (48u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v30)) > _g4_s8 ? (52u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v31)) > _g4_s9 ? (52u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v32)) > _g4_s10 ? (52u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v33)) > _g4_s11 ? (52u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v34)) > _g4_s12 ? (60u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v35)) > _g4_s13 ? (64u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (71u + sizeof(_g4_t_v36)) > _g4_s14 ? (71u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v37)) > _g4_s15 ? (72u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v38)) > _g4_s16 ? (72u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v39)) > _g4_s17 ? (76u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v40)) > _g4_s18 ? (80u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v41)) > _g4_s19 ? (84u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v42)) > _g4_s20 ? (88u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v43)) > _g4_s21 ? (108u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v44)) > _g4_s22 ? (128u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v45)) > _g4_s23 ? (148u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (168u + sizeof(_g4_t_v46)) > _g4_s24 ? (168u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (188u + sizeof(_g4_t_v47)) > _g4_s25 ? (188u + sizeof(_g4_t_v47)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 71u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 84u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 88u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 128u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 148u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 168u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 188u);

  if ( *((uint8_t *)self + 16) != 0 )
  {
    v37 = nullptr;
    v34 = nullptr;
    v39 = nullptr;
    v35 = 0;
    v1 = (pthread_mutex_t *)((char *)self + 160);
    do
    {
      do
        v2 = pthread_mutex_lock(v1);
      while ( v2 == 4 );
      if ( v2 != 0 )
      {
        sub_1235D60(&v42, v2, "boost: mutex lock failed in pthread_mutex_lock");
        v42 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
        std::terminate();
      }
      v3 = *((int **)self + 32);
      v4 = 0;
      if ( *((int **)self + 36) != v3 )
      {
        v5 = *v3;
        v6 = (volatile int32_t *)v3[1];
        v35 = v5;
        if ( v6 != nullptr )
          __sync_add_and_fetch(v6 + 1, 1);
        if ( v39 != nullptr && __sync_fetch_and_add(v39 + 1, 0xFFFFFFFF) == 1 )
        {
          v24 = v6;
          G4_VCALL<void>(v39, 8);
          v6 = v24;
          if ( __sync_fetch_and_add(v39 + 2, 0xFFFFFFFF) == 1 )
          {
            G4_VCALL<void>(v39, 12);
            v6 = v24;
          }
        }
        v7 = *((uint32_t *)self + 32);
        v8 = *(volatile int32_t **)(v7 + 4);
        if ( v7 == *((uint32_t *)self + 34) - 8 )
        {
          if ( v8 != nullptr && __sync_fetch_and_add(v8 + 1, 0xFFFFFFFF) == 1 )
          {
            v28 = v6;
            G4_VCALL<void>(v8, 8);
            v6 = v28;
            if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
            {
              G4_VCALL<void>(v8, 12);
              v6 = v28;
            }
          }
          v27 = v6;
          opDelete(*((void **)self + 33));
          v20 = (int *)(*((uint32_t *)self + 35) + 4);
          *((uint32_t *)self + 35) = (uint32_t)(uintptr_t)(v20);
          v21 = *v20;
          *((uint32_t *)self + 33) = *v20;
          *((uint32_t *)self + 32) = v21;
          *((uint32_t *)self + 34) = v21 + 512;
          v4 = 1;
          v39 = v27;
        }
        else
        {
          if ( v8 != nullptr )
          {
            if ( __sync_fetch_and_add(v8 + 1, 0xFFFFFFFF) == 1 )
            {
              v26 = v6;
              G4_VCALL<void>(v8, 8);
              v6 = v26;
              if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
              {
                G4_VCALL<void>(v8, 12);
                v6 = v26;
              }
              v7 = *((uint32_t *)self + 32);
            }
            else
            {
              v7 = *((uint32_t *)self + 32);
            }
          }
          v39 = v6;
          *((uint32_t *)self + 32) = v7 + 8;
          v4 = 1;
        }
      }
      do
        v9 = pthread_mutex_unlock(v1);
      while ( v9 == 4 );
      if ( v9 != 0 )
      {
        sub_1235D60(&v43, v9, "boost: mutex unlock failed in pthread_mutex_unlock");
        v43 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
        std::terminate();
      }
      if ( v4 != 0 )
      {
        if ( v35 == 0 )
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Requests::IRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IRequest*]",
            "px != 0");
        if ( (**(uint8_t (***)(int))v35)(v35) != 0 )
        {
          G4_VCALL<void>(v35, 12);
        }
        else if ( G4_VCALL<uint8_t>(v35, 4) != 0 )
        {
          G4_VCALL<void>(v35, 8);
        }
        else
        {
          v40 = v35;
          v41 = v39;
          if ( v39 != nullptr )
            __sync_add_and_fetch(v39 + 1, 1);
          do
            v17 = pthread_mutex_lock(v1);
          while ( v17 == 4 );
          if ( v17 != 0 )
          {
            sub_1235D60(&v44, v17, "boost: mutex lock failed in pthread_mutex_lock");
            v44 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
            std::terminate();
          }
          g4_std_compat::deque_push_back((char *)self + 120, &v40);
          do
            v18 = pthread_mutex_unlock(v1);
          while ( v18 == 4 );
          if ( v18 != 0 )
          {
            sub_1235D60(&v45, v18, "boost: mutex unlock failed in pthread_mutex_unlock");
            v45 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
            std::terminate();
          }
          v19 = v41;
          if ( v41 != nullptr && __sync_fetch_and_add(v41 + 1, 0xFFFFFFFF) == 1 )
          {
            G4_VCALL<void>(v19, 8);
            if ( __sync_fetch_and_add(v19 + 2, 0xFFFFFFFF) == 1 )
              G4_VCALL<void>(v19, 12);
          }
        }
      }
      v10 = (pthread_mutex_t *)((char *)self + 204);
      do
        v11 = pthread_mutex_lock(v10);
      while ( v11 == 4 );
      if ( v11 != 0 )
      {
        sub_1235D60(&v46, v11, "boost: mutex lock failed in pthread_mutex_lock");
        v46 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
        std::terminate();
      }
      v36 = 0;
      v12 = *((uint32_t *)self + 43);
      if ( *((uint32_t *)self + 47) != v12 )
      {
        v34 = *(void (****)(uint32_t))v12;
        v13 = *(volatile int32_t **)(v12 + 4);
        if ( v13 != nullptr )
          __sync_add_and_fetch(v13 + 1, 1);
        if ( v37 != nullptr && __sync_fetch_and_add(v37 + 1, 0xFFFFFFFF) == 1 )
        {
          v30 = v13;
          G4_VCALL<void>(v37, 8);
          v13 = v30;
          if ( __sync_fetch_and_add(v37 + 2, 0xFFFFFFFF) == 1 )
          {
            G4_VCALL<void>(v37, 12);
            v13 = v30;
          }
        }
        v14 = *((uint32_t *)self + 43);
        v15 = *(volatile int32_t **)(v14 + 4);
        if ( v14 == *((uint32_t *)self + 45) - 8 )
        {
          if ( v15 != nullptr && __sync_fetch_and_add(v15 + 1, 0xFFFFFFFF) == 1 )
          {
            v29 = v15;
            v33 = v13;
            G4_VCALL<void>(v15, 8);
            v13 = v33;
            if ( __sync_fetch_and_add(v29 + 2, 0xFFFFFFFF) == 1 )
            {
              G4_VCALL<void>(v29, 12);
              v13 = v33;
            }
          }
          v32 = v13;
          opDelete(*((void **)self + 44));
          v36 = 1;
          v38 = *((uint32_t *)self + 46);
          *((uint32_t *)self + 46) = v38 + 4;
          v23 = *(uint32_t *)(v38 + 4);
          *((uint32_t *)self + 44) = v23;
          *((uint32_t *)self + 45) = v23 + 512;
          *((uint32_t *)self + 43) = v23;
          v37 = v32;
        }
        else
        {
          if ( v15 != nullptr )
          {
            if ( __sync_fetch_and_add(v15 + 1, 0xFFFFFFFF) == 1
              && (v25 = v15,
                  v31 = v13,
                  G4_VCALL<void>(v15, 8),
                  v13 = v31,
                  __sync_fetch_and_add(v25 + 2, 0xFFFFFFFF) == 1) )
            {
              G4_VCALL<void>(v25, 12);
              v13 = v31;
              v14 = *((uint32_t *)self + 43);
            }
            else
            {
              v14 = *((uint32_t *)self + 43);
            }
          }
          v37 = v13;
          v36 = 1;
          *((uint32_t *)self + 43) = v14 + 8;
        }
      }
      do
        v16 = pthread_mutex_unlock(v10);
      while ( v16 == 4 );
      if ( v16 != 0 )
      {
        sub_1235D60(&v47, v16, "boost: mutex unlock failed in pthread_mutex_unlock");
        v47 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
        std::terminate();
      }
      if ( v36 != 0 )
      {
        if ( v34 == nullptr )
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Responses::IServerResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::IServerResponse*]",
            "px != 0");
        (**v34)((uint32_t)(uintptr_t)(v34));
      }
      chatv2::Utils::Helper::ChatLibThreadSleepFor((chatv2::Utils::Helper::Self *)&dword_C8, v22);
    }
    while ( *((uint8_t *)self + 16) != 0 );
    if ( v37 != nullptr && __sync_fetch_and_add(v37 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v37, 8);
      if ( __sync_fetch_and_add(v37 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v37, 12);
    }
    if ( v39 != nullptr && __sync_fetch_and_add(v39 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v39, 8);
      if ( __sync_fetch_and_add(v39 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v39, 12);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ChatLibEngine::Start  (binary VA: 0x1234e40)
// Original: chatv2::Core::ChatLibEngine::Start
// ----------------------------------------------------------------------------
void chatv2::Core::ChatLibEngine::Start(chatv2::Core::ChatLibEngine::Self *self)
{
  void *v1;
  void *v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4[3];
  typedef int _g4_t_v5[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  chatv2::Core::ChatLibEngine::SetHandlers(self);
  *((uint8_t *)self + 16) = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v4), " ChatLibEngine Starded\n", (int)(uintptr_t)(&v3) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5), "ChatLib", (int)(uintptr_t)(&v3));
  chatv2::Utils::Log(3, 0, v5, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ChatLibEngine.cpp", 42, v4);
  v1 = (void *)(v5[0] - 12);
  if ( (uint32_t *)(v5[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  v2 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  chatv2::Core::ArionExecutor::Start((chatv2::Core::ChatLibEngine::Self *)((char *)self + 20));
  chatv2::Core::ChatLibEngine::Run(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ChatLibEngine::AddServerResponse  (binary VA: 0x1234f50)
// Original: chatv2::Core::ChatLibEngine::AddServerResponse
// ----------------------------------------------------------------------------
void chatv2::Core::ChatLibEngine::AddServerResponse(int a1, int *a2)
{
  void *v2;
  void *v3;
  pthread_mutex_t *v4;
  int v5;
  int v6;
  volatile int32_t *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[3];
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef volatile int32_t *_g4_t_v12;
  typedef int (**_g4_t_v13)(std::exception *);
  typedef int (**_g4_t_v14)(std::exception *);
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v14)) > _g4_s6 ? (48u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);

  if ( *a2 != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v9), " Add server response\n", (int)(uintptr_t)(&v8) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "ChatLib", (int)(uintptr_t)(&v8));
    chatv2::Utils::Log(3, 0, &v10, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ChatLibEngine.cpp", 103, v9);
    v2 = (void *)(v10 - 12);
    if ( (uint32_t *)(v10 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    v3 = (void *)(v9[0] - 12);
    if ( (uint32_t *)(v9[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v11 = *a2;
    v12 = (volatile int32_t *)a2[1];
    if ( v12 != nullptr )
      __sync_add_and_fetch(v12 + 1, 1);
    v4 = (pthread_mutex_t *)(a1 + 204);
    do
      v5 = pthread_mutex_lock(v4);
    while ( v5 == 4 );
    if ( v5 != 0 )
    {
      sub_1235D60(&v13, v5, "boost: mutex lock failed in pthread_mutex_lock");
      v13 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
      std::terminate();
    }
    g4_std_compat::deque_push_back(a1 + 164, &v11);
    do
      v6 = pthread_mutex_unlock(v4);
    while ( v6 == 4 );
    if ( v6 != 0 )
    {
      sub_1235D60(&v14, v6, "boost: mutex unlock failed in pthread_mutex_unlock");
      v14 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
      std::terminate();
    }
    v7 = v12;
    if ( v12 != nullptr && __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v7, 8);
      if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v7, 12);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ChatLibEngine::AddClientResponse  (binary VA: 0x1235160)
// Original: chatv2::Core::ChatLibEngine::AddClientResponse
// ----------------------------------------------------------------------------
int chatv2::Core::ChatLibEngine::AddClientResponse(int a1, int *a2)
{
  int result;
  size_t v3;
  char v4;
  int v5;
  size_t v6;
  uint8_t *v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  size_t v15;
  char v16;
  void *v17;
  void *v18;
  void *v19;
  void *v20;
  pthread_mutex_t *v21;
  int v22;
  volatile int32_t *v23;
  int v24;
  int v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int *_g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef const char *_g4_t_v35;
  typedef size_t _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38[4];
  typedef uint32_t _g4_t_v39[2];
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef volatile int32_t *_g4_t_v43;
  typedef int (**_g4_t_v44)(std::exception *);
  typedef uint32_t _g4_t_v45[11];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v27)) > _g4_s1 ? (0u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v28)) > _g4_s2 ? (4u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v29)) > _g4_s3 ? (8u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v30)) > _g4_s4 ? (12u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v31)) > _g4_s5 ? (16u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v32)) > _g4_s6 ? (20u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v33)) > _g4_s7 ? (24u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v34)) > _g4_s8 ? (24u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v35)) > _g4_s9 ? (28u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v36)) > _g4_s10 ? (28u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (43u + sizeof(_g4_t_v37)) > _g4_s11 ? (43u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v38)) > _g4_s12 ? (48u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v39)) > _g4_s13 ? (64u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v40)) > _g4_s14 ? (72u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v41)) > _g4_s15 ? (76u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v42)) > _g4_s16 ? (80u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v43)) > _g4_s17 ? (84u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v44)) > _g4_s18 ? (88u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v45)) > _g4_s19 ? (108u + sizeof(_g4_t_v45)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 43u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);

  v45[7] = (uint32_t)(uintptr_t)(&a1);
  v29 = a1;
  v31 = a2;
  result = *a2;
  if ( *a2 == 0 )
    return result;
  v3 = 0;
  chatv2::Responses::ClientResponse::ToString((chatv2::Responses::ClientResponse::Self *)v38);
  v41 = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(&v41), 0x80u, 0);
  v30 = 0;
  v4 = aAddClientRespo /* " Add client response: {0}\n" */[0];
  v35 = " Add client response: {0}\n";
  while ( 1 )
  {
    v7 = (uint8_t *)(v35 + 1);
    if ( v4 != 123 )
    {
      v5 = v41;
      v6 = v3 + 1;
      if ( v3 + 1 > *(uint32_t *)(v41 - 12) )
      {
        v26 = v4;
        sub_1939D80((int)(uintptr_t)(&v41), v3 + 65, 0);
        v5 = v41;
        v6 = v3 + 1;
        v4 = v26;
      }
      if ( *(int *)(v5 - 4) >= 0 )
      {
        v27 = v4;
        v28 = v6;
        sub_19397C0(&v41);
        v5 = v41;
        v6 = v28;
        v4 = v27;
      }
      *(uint8_t *)(v5 + v3) = v4;
      ++v35;
      v3 = v6;
      goto LABEL_8;
    }
    v8 = v35[1];
    if ( v8 == 123 )
    {
      v24 = v41;
      if ( v3 + 2 > *(uint32_t *)(v41 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v41), v3 + 66, 0);
        v24 = v41;
      }
      v34 = v3 + 1;
      if ( *(int *)(v24 - 4) >= 0 )
      {
        sub_19397C0(&v41);
        v24 = v41;
      }
      *(uint8_t *)(v24 + v3) = 123;
      v25 = v41;
      if ( *(int *)(v41 - 4) >= 0 )
      {
        sub_19397C0(&v41);
        v25 = v41;
      }
      v35 += 2;
      v3 += 2;
      *(uint8_t *)(v25 + v34) = 123;
      goto LABEL_8;
    }
    if ( v8 == 0 )
      goto LABEL_43;
    v36 = v3;
    v9 = 1;
    v10 = 0;
    while ( 1 )
    {
      v8 = *v7;
      if ( (uint8_t)(*v7 - 48) > 9u )
        break;
      v11 = v9 * v10;
      ++v7;
      v9 *= 10;
      v10 = v11 + v8 - 48;
      if ( *v7 == 0 )
      {
        v12 = v10;
        v8 = 0;
        v3 = v36;
        goto LABEL_16;
      }
    }
    v12 = v10;
    v3 = v36;
    if ( v9 == 1 )
LABEL_43:
      v12 = v30++;
    if ( v8 == 58 )
    {
      v8 = v7[1];
      if ( v8 == 120 || v8 == 88 )
      {
        v8 = v7[2];
        v35 = (const char *)(v7 + 3);
      }
      else
      {
        v35 = (const char *)(v7 + 2);
      }
    }
    else
    {
LABEL_16:
      v35 = (const char *)(v7 + 1);
    }
    if ( v8 != 125 )
      break;
    if ( v12 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(&v41), v3, 0);
LABEL_8:
      v4 = *v35;
      if ( *v35 == 0 )
        goto LABEL_27;
    }
    else
    {
      v33 = *(uint32_t *)(v38[0] - 12);
      if ( v3 + v33 > *(uint32_t *)(v41 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v41), v3 + v33 + 64, 0);
        v33 = *(uint32_t *)(v38[0] - 12);
      }
      if ( v33 == 0 )
        goto LABEL_8;
      v13 = 0;
      v32 = v3;
      do
      {
        v14 = v41;
        v15 = v13 + v32;
        if ( *(int *)(v41 - 4) >= 0 )
        {
          sub_19397C0(&v41);
          v14 = v41;
        }
        v16 = *(uint8_t *)(v38[0] + v13++);
        *(uint8_t *)(v14 + v15) = v16;
      }
      while ( v13 != v33 );
      v3 = v13 + v32;
      v4 = *v35;
      if ( *v35 == 0 )
        goto LABEL_27;
    }
  }
  sub_1939D80((int)(uintptr_t)(&v41), v3, 0);
LABEL_27:
  sub_1939D80((int)(uintptr_t)(&v41), v3, 0);
  g4_std::string::construct_copy(v39, &v41);
  v17 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "ChatLib", (int)(uintptr_t)(&v37));
  chatv2::Utils::Log(4, 0, &v40, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ChatLibEngine.cpp", 112, v39);
  v18 = (void *)(v40 - 12);
  if ( (uint32_t *)(v40 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = (void *)(v39[0] - 12);
  if ( (uint32_t *)(v39[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  v20 = (void *)(v38[0] - 12);
  if ( (uint32_t *)(v38[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v20);
  }
  v42 = *v31;
  v43 = (volatile int32_t *)v31[1];
  if ( v43 != nullptr )
    __sync_add_and_fetch(v43 + 1, 1);
  v21 = (pthread_mutex_t *)(v29 + 248);
  do
    v22 = pthread_mutex_lock(v21);
  while ( v22 == 4 );
  if ( v22 != 0 )
  {
    sub_1235D60(&v44, v22, "boost: mutex lock failed in pthread_mutex_lock");
    v44 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  g4_std_compat::deque_push_back(v29 + 208, &v42);
  do
    result = pthread_mutex_unlock(v21);
  while ( result == 4 );
  if ( result != 0 )
  {
    sub_1235D60(v45, result, "boost: mutex unlock failed in pthread_mutex_unlock");
    v45[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v23 = v43;
  if ( v43 != nullptr )
  {
    result = __sync_fetch_and_add(v43 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      result = G4_VCALL<int>(v23, 8);
      if ( __sync_fetch_and_add(v23 + 2, 0xFFFFFFFF) == 1 )
        return G4_VCALL<int>(v23, 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::Start  (binary VA: 0x1238ba0)
// Original: chatv2::Core::ArionExecutor::Start
// ----------------------------------------------------------------------------
void chatv2::Core::ArionExecutor::Start(chatv2::Core::ArionExecutor::Self *self)
{
  void *v1;
  void *v2;
  chatv2::Requests::ArionRequestFactory::Self *v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5[3];
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5), " ArionExecutor Started\n", (int)(uintptr_t)(&v4) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "ChatLib", (int)(uintptr_t)(&v4));
  chatv2::Utils::Log(3, 0, &v6, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ArionExecutor.cpp", 25, v5);
  v1 = (void *)(v6 - 12);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  v2 = (void *)(v5[0] - 12);
  if ( (uint32_t *)(v5[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = *((chatv2::Requests::ArionRequestFactory::Self **)self + 13);
  if ( v3 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v3 = *((chatv2::Requests::ArionRequestFactory::Self **)self + 13);
  }
  chatv2::Requests::ArionRequestFactory::Start(v3);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::Destroy  (binary VA: 0x1238ce0)
// Original: chatv2::Core::ArionExecutor::~ArionExecutor
// ----------------------------------------------------------------------------
void chatv2::Core::ArionExecutor::Destroy(chatv2::Core::ArionExecutor::Self *self)
{
  int v1;
  int v2;
  int v3;
  volatile int32_t *v4;
  volatile int32_t *v5;
  int v6;
  int v7;
  int v8;
  void (*v9)(char *, char *, int);
  void (*v10)(char *, char *, int);
  void (*v11)(char *, char *, int);
  typedef char *_g4_t_v12;
  typedef char _g4_t_v13;
  typedef char _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v13)) > _g4_s1 ? (30u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v14)) > _g4_s2 ? (31u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 30u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 31u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20921C0);
  v1 = *((uint32_t *)self + 23);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    v12 = &v13;
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 22);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    v12 = &v14;
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  do
    v3 = pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 84));
  while ( v3 == 4 );
  if ( v3 != 0 )
    __assert2(
      "../../../../../lib/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  chatv2::Core::ArionUser::Destroy((chatv2::Core::ArionExecutor::Self *)((char *)self + 68));
  v4 = *((volatile int32_t **)self + 16);
  if ( v4 != nullptr && __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8, v12);
    if ( __sync_fetch_and_add(v4 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v4, 12);
  }
  v5 = *((volatile int32_t **)self + 14);
  if ( v5 != nullptr && __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v5, 8);
    if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v5, 12);
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20921D8);
  v6 = *((uint32_t *)self + 9);
  if ( v6 != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      v11 = *(void (**)(char *, char *, int))(v6 & 0xFFFFFFFE);
      if ( v11 != nullptr )
        v11((char *)self + 40, (char *)self + 40, 2);
    }
    *((uint32_t *)self + 9) = 0;
  }
  v7 = *((uint32_t *)self + 5);
  if ( v7 != 0 )
  {
    if ( (v7 & 1) == 0 )
    {
      v10 = *(void (**)(char *, char *, int))(v7 & 0xFFFFFFFE);
      if ( v10 != nullptr )
        v10((char *)self + 24, (char *)self + 24, 2);
    }
    *((uint32_t *)self + 5) = 0;
  }
  v8 = *((uint32_t *)self + 1);
  if ( v8 != 0 )
  {
    if ( (v8 & 1) == 0 )
    {
      v9 = *(void (**)(char *, char *, int))(v8 & 0xFFFFFFFE);
      if ( v9 != nullptr )
        v9((char *)self + 8, (char *)self + 8, 2);
    }
    *((uint32_t *)self + 1) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::Destroy_ea1238f00  (binary VA: 0x1238f00)
// Original: chatv2::Core::ArionExecutor::~ArionExecutor
// ----------------------------------------------------------------------------
void chatv2::Core::ArionExecutor::Destroy_ea1238f00(chatv2::Core::ArionExecutor::Self *self)
{
  chatv2::Core::ArionExecutor::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::Construct  (binary VA: 0x1238f40)
// Original: chatv2::Core::ArionExecutor::ArionExecutor
// ----------------------------------------------------------------------------
chatv2::Core::ArionExecutor::Self * chatv2::Core::ArionExecutor::Construct(chatv2::Core::ArionExecutor::Self *self)
{
  int v1;
  int v2;
  uint8_t *untyped_deleter;
  uint8_t *v4;
  uint8_t *v5;
  volatile int32_t *v6;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  uint8_t *v10;
  volatile int32_t *v11;
  chatv2::Requests::ArionRequestFactory::Self *v12;
  chatv2::Responses::ArionResponseFactory::Self *v13;
  int v15;
  typedef uint8_t *_g4_t_v16;
  typedef uint8_t *_g4_t_v17;
  typedef uint8_t *_g4_t_v18;
  typedef uint8_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[12];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (23u + sizeof(_g4_t_v20)) > _g4_s4 ? (23u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v21)) > _g4_s5 ? (28u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 23u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20921C0);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  chatv2::Core::ArionUser::ArionUser((chatv2::Core::ArionUser::Self *)((chatv2::Core::ArionExecutor::Self *)((char *)self + 68)));
  v1 = pthread_mutex_init((pthread_mutex_t *)((char *)self + 84), nullptr);
  if ( v1 != 0 )
  {
    v15 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20) + 1, "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v20));
    sub_19042E0(v21, (char *)&v20 + 1);
    g4_std::string::Destroy((char *)&v20 + 1);
    v21[2] = v1;
    v21[3] = v15;
    v21[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v21[0] = ((uint32_t)(uintptr_t)&off_2049568);
    std::terminate();
  }
  *((uint8_t *)self + 96) = 0;
  *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(&dword_213B814);
  v2 = opNew(0x57Cu);
  *(uint32_t *)(v2 + 4) = 1;
  *(uint32_t *)(v2 + 8) = 1;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2092208);
  *(uint32_t *)(v2 + 12) = 0;
  *(uint8_t *)(v2 + 16) = 0;
  untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Requests::ArionRequestFactory::Self *,boost::detail::sp_ms_deleter<chatv2::Requests::ArionRequestFactory::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Requests::ArionRequestFactory::Self *, boost::detail::sp_ms_deleter<chatv2::Requests::ArionRequestFactory::Self>> *)v2);
  v4 = untyped_deleter;
  v5 = untyped_deleter + 4;
  if ( untyped_deleter != (uint8_t *)-4 )
  {
    v16 = untyped_deleter + 4;
    chatv2::Requests::ArionRequestFactory::Construct((chatv2::Requests::ArionRequestFactory::Self *)(untyped_deleter + 4));
    v5 = v16;
  }
  *v4 = 1;
  __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 4), 0xFFFFFFFF) == 1 )
  {
    v18 = v5;
    G4_VCALL<void>(v2, 8);
    v5 = v18;
    if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 8), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 12);
      v5 = v18;
    }
  }
  __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1);
  v6 = *((volatile int32_t **)self + 14);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v5);
  *((uint32_t *)self + 14) = v2;
  if ( v6 != nullptr && __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v6, 8);
    if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v6, 12);
  }
  if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v2, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v2, 12);
  }
  v7 = opNew(0x1Cu);
  *(uint32_t *)(v7 + 4) = 1;
  *(uint32_t *)(v7 + 8) = 1;
  *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_2092228);
  *(uint32_t *)(v7 + 12) = 0;
  *(uint8_t *)(v7 + 16) = 0;
  v8 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Responses::ArionResponseFactory::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ArionResponseFactory::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ArionResponseFactory::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ArionResponseFactory::Self>> *)v7);
  v9 = v8;
  v10 = v8 + 4;
  if ( v8 != (uint8_t *)-4 )
  {
    v17 = v8 + 4;
    chatv2::Responses::ArionResponseFactory::Construct((chatv2::Responses::ArionResponseFactory::Self *)(v8 + 4));
    v10 = v17;
  }
  *v9 = 1;
  __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v7 + 4), 0xFFFFFFFF) == 1 )
  {
    v19 = v10;
    G4_VCALL<void>(v7, 8);
    v10 = v19;
    if ( __sync_fetch_and_add((volatile int32_t *)(v7 + 8), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v7, 12);
      v10 = v19;
    }
  }
  __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1);
  v11 = *((volatile int32_t **)self + 16);
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(v10);
  *((uint32_t *)self + 16) = v7;
  if ( v11 != nullptr && __sync_fetch_and_add(v11 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v11, 8);
    if ( __sync_fetch_and_add(v11 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v11, 12);
  }
  if ( __sync_fetch_and_add((volatile int32_t *)(v7 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v7, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v7 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v7, 12);
  }
  v12 = *((chatv2::Requests::ArionRequestFactory::Self **)self + 13);
  if ( v12 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v12 = *((chatv2::Requests::ArionRequestFactory::Self **)self + 13);
  }
  chatv2::Requests::ArionRequestFactory::SetArionExecutor(v12, self);
  v13 = *((chatv2::Responses::ArionResponseFactory::Self **)self + 15);
  if ( v13 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ArionResponseFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ArionResponseFactory*]",
      "px != 0");
    v13 = *((chatv2::Responses::ArionResponseFactory::Self **)self + 15);
  }
  return (chatv2::Core::ArionExecutor::Self *)chatv2::Responses::ArionResponseFactory::SetArionExecutor(v13, self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::Mute  (binary VA: 0x1239340)
// Original: chatv2::Core::ArionExecutor::Mute
// ----------------------------------------------------------------------------
int chatv2::Core::ArionExecutor::Mute(int a1, int a2)
{
  pthread_mutex_t *mutex;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[5];
  typedef uint32_t _g4_t_v13[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (14u + sizeof(_g4_t_v9)) > _g4_s0 ? (14u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v13)) > _g4_s4 ? (44u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 14u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  mutex = (pthread_mutex_t *)(a1 + 84);
  do
  {
    v3 = pthread_mutex_lock(mutex);
    v4 = v3;
  }
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    v7 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v9));
    sub_19042E0(v12, &v10);
    g4_std::string::Destroy(&v10);
    v12[2] = v4;
    v12[3] = v7;
    v12[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v12[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  *(uint8_t *)(a1 + 96) = 1;
  g4_std::string::assign_str(a1 + 88, a2);
  do
  {
    result = pthread_mutex_unlock(mutex);
    v6 = result;
  }
  while ( result == 4 );
  if ( result != 0 )
  {
    v8 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v9) + 1);
    sub_19042E0(v13, &v11);
    g4_std::string::Destroy(&v11);
    v13[2] = v6;
    v13[3] = v8;
    v13[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v13[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::UnMute  (binary VA: 0x1239480)
// Original: chatv2::Core::ArionExecutor::UnMute
// ----------------------------------------------------------------------------
int chatv2::Core::ArionExecutor::UnMute(chatv2::Core::ArionExecutor::Self *self)
{
  pthread_mutex_t *mutex;
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[5];
  typedef uint32_t _g4_t_v12[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v12)) > _g4_s4 ? (44u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  mutex = (pthread_mutex_t *)((char *)self + 84);
  do
  {
    v2 = pthread_mutex_lock(mutex);
    v3 = v2;
  }
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    v6 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v8));
    sub_19042E0(v11, &v9);
    g4_std::string::Destroy(&v9);
    v11[2] = v3;
    v11[3] = v6;
    v11[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v11[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  *((uint8_t *)self + 96) = 0;
  do
  {
    result = pthread_mutex_unlock(mutex);
    v5 = result;
  }
  while ( result == 4 );
  if ( result != 0 )
  {
    v7 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v8) + 1);
    sub_19042E0(v12, &v10);
    g4_std::string::Destroy(&v10);
    v12[2] = v5;
    v12[3] = v7;
    v12[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v12[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::IsMuted  (binary VA: 0x12395a0)
// Original: chatv2::Core::ArionExecutor::IsMuted
// ----------------------------------------------------------------------------
int chatv2::Core::ArionExecutor::IsMuted(chatv2::Core::ArionExecutor::Self *self)
{
  pthread_mutex_t *mutex;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[5];
  typedef uint32_t _g4_t_v14[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (14u + sizeof(_g4_t_v10)) > _g4_s0 ? (14u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v14)) > _g4_s4 ? (44u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 14u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  mutex = (pthread_mutex_t *)((char *)self + 84);
  do
  {
    v2 = pthread_mutex_lock(mutex);
    v3 = v2;
  }
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    v8 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v10));
    sub_19042E0(v13, &v11);
    g4_std::string::Destroy(&v11);
    v13[2] = v3;
    v13[3] = v8;
    v13[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v13[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v4 = *((uint8_t *)self + 96);
  do
  {
    v5 = pthread_mutex_unlock(mutex);
    v6 = v5;
  }
  while ( v5 == 4 );
  if ( v5 != 0 )
  {
    v9 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v10) + 1);
    sub_19042E0(v14, &v12);
    g4_std::string::Destroy(&v12);
    v14[2] = v6;
    v14[3] = v9;
    v14[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v14[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::GetMuteMessage  (binary VA: 0x12396c0)
// Original: chatv2::Core::ArionExecutor::GetMuteMessage
// ----------------------------------------------------------------------------
char * chatv2::Core::ArionExecutor::GetMuteMessage(chatv2::Core::ArionExecutor::Self *self)
{
  pthread_mutex_t *mutex;
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[5];
  typedef uint32_t _g4_t_v13[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (14u + sizeof(_g4_t_v9)) > _g4_s0 ? (14u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v13)) > _g4_s4 ? (44u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 14u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  mutex = (pthread_mutex_t *)((char *)self + 84);
  do
  {
    v2 = pthread_mutex_lock(mutex);
    v3 = v2;
  }
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    v7 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v9));
    sub_19042E0(v12, &v10);
    g4_std::string::Destroy(&v10);
    v12[2] = v3;
    v12[3] = v7;
    v12[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v12[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  do
  {
    v4 = pthread_mutex_unlock(mutex);
    v5 = v4;
  }
  while ( v4 == 4 );
  if ( v4 != 0 )
  {
    v8 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v9) + 1);
    sub_19042E0(v13, &v11);
    g4_std::string::Destroy(&v11);
    v13[2] = v5;
    v13[3] = v8;
    v13[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v13[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return (char *)self + 88;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::SetClientID  (binary VA: 0x12397e0)
// Original: chatv2::Core::ArionExecutor::SetClientID
// ----------------------------------------------------------------------------
int chatv2::Core::ArionExecutor::SetClientID(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 92, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::GetClientID  (binary VA: 0x1239810)
// Original: chatv2::Core::ArionExecutor::GetClientID
// ----------------------------------------------------------------------------
char * chatv2::Core::ArionExecutor::GetClientID(chatv2::Core::ArionExecutor::Self *self)
{
  return (char *)self + 92;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::GetRequestFactory  (binary VA: 0x1239820)
// Original: chatv2::Core::ArionExecutor::GetRequestFactory
// ----------------------------------------------------------------------------
chatv2::Core::ArionExecutor::Self * chatv2::Core::ArionExecutor::GetRequestFactory(chatv2::Core::ArionExecutor::Self *self, int a2)
{
  chatv2::Core::ArionExecutor::Self *result;
  int v3;

  result = self;
  *(uint32_t *)self = *(uint32_t *)(a2 + 52);
  v3 = *(uint32_t *)(a2 + 56);
  *((uint32_t *)self + 1) = v3;
  if ( v3 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v3 + 4), 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::GetResponseFactory  (binary VA: 0x1239840)
// Original: chatv2::Core::ArionExecutor::GetResponseFactory
// ----------------------------------------------------------------------------
chatv2::Core::ArionExecutor::Self * chatv2::Core::ArionExecutor::GetResponseFactory(chatv2::Core::ArionExecutor::Self *self, int a2)
{
  chatv2::Core::ArionExecutor::Self *result;
  int v3;

  result = self;
  *(uint32_t *)self = *(uint32_t *)(a2 + 60);
  v3 = *(uint32_t *)(a2 + 64);
  *((uint32_t *)self + 1) = v3;
  if ( v3 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v3 + 4), 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::GetUser  (binary VA: 0x1239860)
// Original: chatv2::Core::ArionExecutor::GetUser
// ----------------------------------------------------------------------------
char * chatv2::Core::ArionExecutor::GetUser(chatv2::Core::ArionExecutor::Self *self)
{
  return (char *)self + 68;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionExecutor::OnHTTPResponseReceived  (binary VA: 0x1239870)
// Original: chatv2::Core::ArionExecutor::OnHTTPResponseReceived
// ----------------------------------------------------------------------------
void chatv2::Core::ArionExecutor::OnHTTPResponseReceived(int a1, int a2, int a3)
{
  chatv2::Connectivity::HTTPResponse::Self *v3;
  int Status;
  int v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  chatv2::Requests::IRequest::Self *v8;
  int v9;
  chatv2::Requests::IRequest::Self *v10;
  void (*v11)(int, chatv2::Requests::IRequest::Self **);
  volatile int32_t *v12;
  chatv2::Requests::IRequest::Self *v13;
  int v14;
  chatv2::Requests::IRequest::Self *v15;
  void (*v16)(int, chatv2::Requests::IRequest::Self **);
  typedef chatv2::Requests::IArionServerRequest::Self *_g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef chatv2::Connectivity::HTTPResponse::Self *_g4_t_v19;
  typedef volatile int32_t *_g4_t_v20;
  typedef chatv2::Requests::IRequest::Self *_g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef chatv2::Requests::IRequest::Self *_g4_t_v23;
  typedef volatile int32_t *_g4_t_v24;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v21)) > _g4_s4 ? (32u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v22)) > _g4_s5 ? (36u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v23)) > _g4_s6 ? (48u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v24)) > _g4_s7 ? (52u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);

  v3 = *(chatv2::Connectivity::HTTPResponse::Self **)a3;
  if ( *(uint32_t *)a3 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
      "px != 0");
    v3 = *(chatv2::Connectivity::HTTPResponse::Self **)a3;
  }
  Status = chatv2::Connectivity::HTTPResponse::GetStatus(v3);
  if ( Status == 401 )
  {
    v13 = *(chatv2::Requests::IRequest::Self **)a2;
    if ( *(uint32_t *)a2 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Req"
        "uests::IArionServerRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IArionServerRequest*]",
        "px != 0");
      v13 = *(chatv2::Requests::IRequest::Self **)a2;
    }
    chatv2::Requests::IRequest::SetNextExecutionTime(v13);
    v14 = *(uint32_t *)(a1 + 4);
    if ( v14 != 0 && boost::function1<void,boost::shared_ptr<chatv2::Requests::IRequest::Self>>::dummy::nonnull != nullptr )
    {
      v15 = *(chatv2::Requests::IRequest::Self **)a2;
      v7 = *(volatile int32_t **)(a2 + 4);
      if ( v7 == nullptr || (__sync_add_and_fetch(v7 + 1, 1), (v14 = *(uint32_t *)(a1 + 4)) != 0) )
      {
        v21 = v15;
        v16 = *(void (**)(int, chatv2::Requests::IRequest::Self **))((v14 & 0xFFFFFFFE) + 4);
        v22 = v7;
        if ( v7 != nullptr )
          __sync_add_and_fetch(v7 + 1, 1);
        v16(a1 + 8, &v21);
        v12 = v22;
        if ( v22 != nullptr )
          goto LABEL_31;
        goto LABEL_32;
      }
LABEL_50:
      sub_1239EF2();
    }
  }
  else if ( Status <= 401 )
  {
    if ( Status == -100 || Status >= -100 && (unsigned int)(Status - 200) <= 2 )
    {
      v19 = *(chatv2::Connectivity::HTTPResponse::Self **)a3;
      v20 = *(volatile int32_t **)(a3 + 4);
      if ( v20 != nullptr )
        __sync_add_and_fetch(v20 + 1, 1);
      v17 = *(chatv2::Requests::IArionServerRequest::Self **)a2;
      v18 = *(volatile int32_t **)(a2 + 4);
      if ( v18 != nullptr )
        __sync_add_and_fetch(v18 + 1, 1);
      v5 = *(uint32_t *)(a1 + 60);
      if ( v5 == 0 )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "esponses::ArionResponseFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ArionResponseFactory*]",
          "px != 0");
        v5 = *(uint32_t *)(a1 + 60);
      }
      chatv2::Responses::ArionResponseFactory::CreateResponseFromHTTP(v5, &v17, &v19);
      v6 = v18;
      if ( v18 != nullptr && __sync_fetch_and_add(v18 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v6, 8);
        if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v6, 12);
      }
      v7 = v20;
      if ( v20 != nullptr )
      {
LABEL_33:
        if ( __sync_fetch_and_add(v7 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v7, 8);
          if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
            G4_VCALL<void>(v7, 12);
        }
      }
    }
  }
  else if ( Status == 500 || Status == 503 || Status == 429 )
  {
    v8 = *(chatv2::Requests::IRequest::Self **)a2;
    if ( *(uint32_t *)a2 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Req"
        "uests::IArionServerRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IArionServerRequest*]",
        "px != 0");
      v8 = *(chatv2::Requests::IRequest::Self **)a2;
    }
    chatv2::Requests::IRequest::SetNextExecutionTime(v8);
    v9 = *(uint32_t *)(a1 + 4);
    if ( v9 != 0 && boost::function1<void,boost::shared_ptr<chatv2::Requests::IRequest::Self>>::dummy::nonnull != nullptr )
    {
      v10 = *(chatv2::Requests::IRequest::Self **)a2;
      v7 = *(volatile int32_t **)(a2 + 4);
      if ( v7 == nullptr || (__sync_add_and_fetch(v7 + 1, 1), (v9 = *(uint32_t *)(a1 + 4)) != 0) )
      {
        v23 = v10;
        v11 = *(void (**)(int, chatv2::Requests::IRequest::Self **))((v9 & 0xFFFFFFFE) + 4);
        v24 = v7;
        if ( v7 != nullptr )
          __sync_add_and_fetch(v7 + 1, 1);
        v11(a1 + 8, &v23);
        v12 = v24;
        if ( v24 != nullptr )
        {
LABEL_31:
          if ( __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
          {
            G4_VCALL<void>(v12, 8);
            if ( __sync_fetch_and_add(v12 + 2, 0xFFFFFFFF) == 1 )
              G4_VCALL<void>(v12, 12);
          }
        }
LABEL_32:
        if ( v7 == nullptr )
          return;
        goto LABEL_33;
      }
      goto LABEL_50;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::IExecutor::Destroy  (binary VA: 0x1239c00)
// Original: chatv2::Core::IExecutor::~IExecutor
// ----------------------------------------------------------------------------
void chatv2::Core::IExecutor::Destroy(chatv2::Core::IExecutor::Self *self)
{
  int v1;
  int v2;
  int v3;
  void (*v4)(char *, char *, int);
  void (*v5)(char *, char *, int);
  void (*v6)(char *, char *, int);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20921D8);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 )
  {
    if ( (v1 & 1) == 0 )
    {
      v6 = *(void (**)(char *, char *, int))(v1 & 0xFFFFFFFE);
      if ( v6 != nullptr )
        v6((char *)self + 40, (char *)self + 40, 2);
    }
    *((uint32_t *)self + 9) = 0;
  }
  v2 = *((uint32_t *)self + 5);
  if ( v2 != 0 )
  {
    if ( (v2 & 1) == 0 )
    {
      v5 = *(void (**)(char *, char *, int))(v2 & 0xFFFFFFFE);
      if ( v5 != nullptr )
        v5((char *)self + 24, (char *)self + 24, 2);
    }
    *((uint32_t *)self + 5) = 0;
  }
  v3 = *((uint32_t *)self + 1);
  if ( v3 != 0 )
  {
    if ( (v3 & 1) == 0 )
    {
      v4 = *(void (**)(char *, char *, int))(v3 & 0xFFFFFFFE);
      if ( v4 != nullptr )
        v4((char *)self + 8, (char *)self + 8, 2);
    }
    *((uint32_t *)self + 1) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::IExecutor::Destroy_ea123a020  (binary VA: 0x123a020)
// Original: chatv2::Core::IExecutor::~IExecutor
// ----------------------------------------------------------------------------
void chatv2::Core::IExecutor::Destroy_ea123a020(chatv2::Core::IExecutor::Self *self)
{
  int v1;
  int v2;
  int v3;
  void (*v4)(char *, char *, int);
  void (*v5)(char *, char *, int);
  void (*v6)(char *, char *, int);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20921D8);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 )
  {
    if ( (v1 & 1) == 0 )
    {
      v6 = *(void (**)(char *, char *, int))(v1 & 0xFFFFFFFE);
      if ( v6 != nullptr )
        v6((char *)self + 40, (char *)self + 40, 2);
    }
    *((uint32_t *)self + 9) = 0;
  }
  v2 = *((uint32_t *)self + 5);
  if ( v2 != 0 )
  {
    if ( (v2 & 1) == 0 )
    {
      v5 = *(void (**)(char *, char *, int))(v2 & 0xFFFFFFFE);
      if ( v5 != nullptr )
        v5((char *)self + 24, (char *)self + 24, 2);
    }
    *((uint32_t *)self + 5) = 0;
  }
  v3 = *((uint32_t *)self + 1);
  if ( v3 != 0 )
  {
    if ( (v3 & 1) == 0 )
    {
      v4 = *(void (**)(char *, char *, int))(v3 & 0xFFFFFFFE);
      if ( v4 != nullptr )
        v4((char *)self + 8, (char *)self + 8, 2);
    }
    *((uint32_t *)self + 1) = 0;
  }
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::Construct  (binary VA: 0x1267cb0)
// Original: chatv2::Core::ArionChannel::ArionChannel
// ----------------------------------------------------------------------------
void chatv2::Core::ArionChannel::Construct(int a1, int a2, int a3, int a4)
{
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  typedef int *_g4_t_v13;
  typedef void **_g4_t_v14;
  typedef uint32_t _g4_t_v15[4];
  typedef uint32_t _g4_t_v16[2];
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v15)) > _g4_s2 ? (32u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v16)) > _g4_s3 ? (48u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v17)) > _g4_s4 ? (56u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v18)) > _g4_s5 ? (60u + sizeof(_g4_t_v18)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);

  g4_std::string::construct_copy(v15, a4);
  g4_std::string::append((int)(uintptr_t)(v15), " ", 1u);
  g4_std::string::construct_copy(&v17, v15);
  g4_std::string::append_str(&v17, &chatv2::Core::CMD_CLIENT);
  chatv2::Connectivity::HTTPSClient::HTTPSClient((uint32_t *)a1, (int)(uintptr_t)(&v17), a2, a3, 0);
  v4 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v15[0] - 12);
  if ( (uint32_t *)(v15[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_copy(v16, a4);
  g4_std::string::append((int)(uintptr_t)(v16), " ", 1u);
  g4_std::string::construct_copy(v18, v16);
  g4_std::string::append_str(v18, &chatv2::Core::LISTEN_CLIENT);
  chatv2::Connectivity::HTTPClient::Construct(a1 + 432, v18, a2, 1);
  v6 = (void *)(v18[0] - 12);
  if ( (uint32_t *)(v18[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v16[0] - 12);
  if ( (uint32_t *)(v16[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  *(uint8_t *)(a1 + 864) = 0;
  *(uint32_t *)(a1 + 868) = 0;
  *(uint32_t *)(a1 + 872) = 0;
  g4_std::string::construct_copy(a1 + 876, a4);
  *(uint32_t *)(a1 + 880) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 884) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 888) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 892) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 896) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 900) = (uint32_t)(uintptr_t)(&dword_213B814);
  v14 = (void **)opNew(0x20u);
  if ( v14 + 3 < v14 + 4 )
    v14[3] = (void *)opNew(0x200u);
  *(uint32_t *)(a1 + 904) = 0;
  *(uint32_t *)(a1 + 908) = 8;
  *(uint32_t *)(a1 + 912) = 0;
  *(uint32_t *)(a1 + 916) = 0;
  *(uint32_t *)(a1 + 920) = 0;
  *(uint32_t *)(a1 + 924) = 0;
  *(uint32_t *)(a1 + 928) = 0;
  *(uint32_t *)(a1 + 932) = 0;
  *(uint32_t *)(a1 + 936) = 0;
  *(uint32_t *)(a1 + 940) = 0;
  v8 = opNew(0x20u);
  v9 = *(uint32_t *)(a1 + 908);
  *(uint32_t *)(a1 + 904) = v8;
  v13 = (int *)(v8 + ((2 * v9 - 2) & 0xFFFFFFFC));
  if ( v13 < v13 + 1 )
  {
    v10 = (int *)(v8 + ((2 * v9 - 2) & 0xFFFFFFFC));
    do
      *v10++ = opNew(0x200u);
    while ( v13 + 1 > v10 );
  }
  *(uint32_t *)(a1 + 924) = (uint32_t)(uintptr_t)(v13);
  v11 = *v13;
  *(uint32_t *)(a1 + 916) = *v13;
  *(uint32_t *)(a1 + 920) = v11 + 512;
  *(uint32_t *)(a1 + 940) = (uint32_t)(uintptr_t)(v13);
  v12 = *v13;
  *(uint32_t *)(a1 + 932) = *v13;
  *(uint32_t *)(a1 + 912) = v11;
  *(uint32_t *)(a1 + 928) = v12;
  *(uint32_t *)(a1 + 936) = v12 + 512;
  if ( v14 != nullptr )
  {
    if ( v14 + 3 < v14 + 4 )
      opDelete(v14[3]);
    opDelete(v14);
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::StartCommandClient  (binary VA: 0x1268080)
// Original: chatv2::Core::ArionChannel::StartCommandClient
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::StartCommandClient(chatv2::Core::ArionChannel::Self *self)
{
  size_t v1;
  char v2;
  int v3;
  size_t v4;
  uint8_t *v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  size_t v14;
  char v15;
  void *v16;
  void *v17;
  void *v18;
  int v20;
  int v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef size_t _g4_t_v30;
  typedef const char *_g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t _g4_t_v34[4];
  typedef int _g4_t_v35[3];
  typedef int _g4_t_v36[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v25)) > _g4_s3 ? (12u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v26)) > _g4_s4 ? (16u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v27)) > _g4_s5 ? (20u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v28)) > _g4_s6 ? (24u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v29)) > _g4_s7 ? (28u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v30)) > _g4_s8 ? (28u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v31)) > _g4_s9 ? (32u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v32)) > _g4_s10 ? (32u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v33)) > _g4_s11 ? (48u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v34)) > _g4_s12 ? (52u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v35)) > _g4_s13 ? (68u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v36)) > _g4_s14 ? (80u + sizeof(_g4_t_v36)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);

  v1 = 0;
  v27 = (uint32_t *)((char *)self + 888);
  v35[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v35), 0x80u, 0);
  v26 = 0;
  v2 = aArionchannelSt /* " ArionChannel start command client, command c..." */[0];
  v31 = " ArionChannel start command client, command client: {0}\n";
  while ( 1 )
  {
    v5 = (uint8_t *)(v31 + 1);
    if ( v2 != 123 )
    {
      v3 = v35[0];
      v4 = v1 + 1;
      if ( v1 + 1 > *(uint32_t *)(v35[0] - 12) )
      {
        v22 = v2;
        sub_1939D80((int)(uintptr_t)(v35), v1 + 65, 0);
        v3 = v35[0];
        v4 = v1 + 1;
        v2 = v22;
      }
      if ( *(int *)(v3 - 4) >= 0 )
      {
        v25 = v4;
        v23 = v2;
        sub_19397C0(v35);
        v3 = v35[0];
        v4 = v25;
        v2 = v23;
      }
      *(uint8_t *)(v3 + v1) = v2;
      ++v31;
      v1 = v4;
      goto LABEL_7;
    }
    v6 = v31[1];
    if ( v6 == 123 )
    {
      v20 = v35[0];
      if ( v1 + 2 > *(uint32_t *)(v35[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v35), v1 + 66, 0);
        v20 = v35[0];
        v30 = v1 + 1;
        if ( *(int *)(v35[0] - 4) < 0 )
          goto LABEL_40;
      }
      else
      {
        v30 = v1 + 1;
        if ( *(int *)(v35[0] - 4) < 0 )
        {
LABEL_40:
          *(uint8_t *)(v20 + v1) = 123;
          v21 = v35[0];
          if ( *(int *)(v35[0] - 4) >= 0 )
          {
            sub_19397C0(v35);
            v21 = v35[0];
          }
          v31 += 2;
          v1 += 2;
          *(uint8_t *)(v21 + v30) = 123;
          goto LABEL_7;
        }
      }
      sub_19397C0(v35);
      v20 = v35[0];
      goto LABEL_40;
    }
    if ( v6 == 0 )
      goto LABEL_31;
    v32 = v1;
    v7 = 1;
    v8 = 0;
    while ( 1 )
    {
      v6 = *v5;
      if ( (uint8_t)(*v5 - 48) > 9u )
        break;
      v9 = v7 * v8;
      ++v5;
      v7 *= 10;
      v8 = v9 + v6 - 48;
      if ( *v5 == 0 )
      {
        v10 = v8;
        v6 = 0;
        v1 = v32;
        goto LABEL_15;
      }
    }
    v10 = v8;
    v1 = v32;
    if ( v7 == 1 )
LABEL_31:
      v10 = v26++;
    if ( v6 == 58 )
    {
      v6 = v5[1];
      if ( v6 == 120 || v6 == 88 )
      {
        v6 = v5[2];
        v31 = (const char *)(v5 + 3);
      }
      else
      {
        v31 = (const char *)(v5 + 2);
      }
    }
    else
    {
LABEL_15:
      v31 = (const char *)(v5 + 1);
    }
    if ( v6 != 125 )
      break;
    if ( v10 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(v35), v1, 0);
LABEL_7:
      v2 = *v31;
      if ( *v31 == 0 )
        goto LABEL_26;
    }
    else
    {
      v29 = *(uint32_t *)(*v27 - 12);
      if ( v1 + v29 > *(uint32_t *)(v35[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v35), v1 + v29 + 64, 0);
        v29 = *(uint32_t *)(*((uint32_t *)self + 222) - 12);
      }
      if ( v29 == 0 )
        goto LABEL_7;
      v11 = 0;
      v12 = (uint32_t *)((char *)self + 888);
      v28 = v1;
      do
      {
        v13 = v35[0];
        v14 = v11 + v28;
        if ( *(int *)(v35[0] - 4) >= 0 )
        {
          v24 = v12;
          sub_19397C0(v35);
          v13 = v35[0];
          v12 = v24;
        }
        v15 = *(uint8_t *)(*v12 + v11++);
        *(uint8_t *)(v13 + v14) = v15;
      }
      while ( v11 != v29 );
      v1 = v11 + v28;
      v2 = *v31;
      if ( *v31 == 0 )
        goto LABEL_26;
    }
  }
  sub_1939D80((int)(uintptr_t)(v35), v1, 0);
LABEL_26:
  sub_1939D80((int)(uintptr_t)(v35), v1, 0);
  g4_std::string::construct_copy(v34, v35);
  v16 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v36), "ChatLib", (int)(uintptr_t)(&v33));
  chatv2::Utils::Log(3, 0, v36, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ArionChannel.cpp", 28, v34);
  v17 = (void *)(v36[0] - 12);
  if ( (uint32_t *)(v36[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  v18 = (void *)(v34[0] - 12);
  if ( (uint32_t *)(v34[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  return ((chatv2::Connectivity::TCPClient::Start(self, (int)(uintptr_t)(v27))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::StartListenClient  (binary VA: 0x1268510)
// Original: chatv2::Core::ArionChannel::StartListenClient
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::StartListenClient(chatv2::Core::ArionChannel::Self *self)
{
  size_t v1;
  char v2;
  int v3;
  size_t v4;
  uint8_t *v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  size_t v14;
  char v15;
  void *v16;
  void *v17;
  void *v18;
  int v20;
  int v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef size_t _g4_t_v30;
  typedef const char *_g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t _g4_t_v34[4];
  typedef int _g4_t_v35[3];
  typedef int _g4_t_v36[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v25)) > _g4_s3 ? (12u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v26)) > _g4_s4 ? (16u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v27)) > _g4_s5 ? (20u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v28)) > _g4_s6 ? (24u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v29)) > _g4_s7 ? (28u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v30)) > _g4_s8 ? (28u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v31)) > _g4_s9 ? (32u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v32)) > _g4_s10 ? (32u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v33)) > _g4_s11 ? (48u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v34)) > _g4_s12 ? (52u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v35)) > _g4_s13 ? (68u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v36)) > _g4_s14 ? (80u + sizeof(_g4_t_v36)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);

  v1 = 0;
  v27 = (uint32_t *)((char *)self + 892);
  v35[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v35), 0x80u, 0);
  v26 = 0;
  v2 = aArionchannelSt_0 /* " ArionChannel start listen client, listen cli..." */[0];
  v31 = " ArionChannel start listen client, listen client: {0}\n";
  while ( 1 )
  {
    v5 = (uint8_t *)(v31 + 1);
    if ( v2 != 123 )
    {
      v3 = v35[0];
      v4 = v1 + 1;
      if ( v1 + 1 > *(uint32_t *)(v35[0] - 12) )
      {
        v22 = v2;
        sub_1939D80((int)(uintptr_t)(v35), v1 + 65, 0);
        v3 = v35[0];
        v4 = v1 + 1;
        v2 = v22;
      }
      if ( *(int *)(v3 - 4) >= 0 )
      {
        v25 = v4;
        v23 = v2;
        sub_19397C0(v35);
        v3 = v35[0];
        v4 = v25;
        v2 = v23;
      }
      *(uint8_t *)(v3 + v1) = v2;
      ++v31;
      v1 = v4;
      goto LABEL_7;
    }
    v6 = v31[1];
    if ( v6 == 123 )
    {
      v20 = v35[0];
      if ( v1 + 2 > *(uint32_t *)(v35[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v35), v1 + 66, 0);
        v20 = v35[0];
        v30 = v1 + 1;
        if ( *(int *)(v35[0] - 4) < 0 )
          goto LABEL_40;
      }
      else
      {
        v30 = v1 + 1;
        if ( *(int *)(v35[0] - 4) < 0 )
        {
LABEL_40:
          *(uint8_t *)(v20 + v1) = 123;
          v21 = v35[0];
          if ( *(int *)(v35[0] - 4) >= 0 )
          {
            sub_19397C0(v35);
            v21 = v35[0];
          }
          v31 += 2;
          v1 += 2;
          *(uint8_t *)(v21 + v30) = 123;
          goto LABEL_7;
        }
      }
      sub_19397C0(v35);
      v20 = v35[0];
      goto LABEL_40;
    }
    if ( v6 == 0 )
      goto LABEL_31;
    v32 = v1;
    v7 = 1;
    v8 = 0;
    while ( 1 )
    {
      v6 = *v5;
      if ( (uint8_t)(*v5 - 48) > 9u )
        break;
      v9 = v7 * v8;
      ++v5;
      v7 *= 10;
      v8 = v9 + v6 - 48;
      if ( *v5 == 0 )
      {
        v10 = v8;
        v6 = 0;
        v1 = v32;
        goto LABEL_15;
      }
    }
    v10 = v8;
    v1 = v32;
    if ( v7 == 1 )
LABEL_31:
      v10 = v26++;
    if ( v6 == 58 )
    {
      v6 = v5[1];
      if ( v6 == 120 || v6 == 88 )
      {
        v6 = v5[2];
        v31 = (const char *)(v5 + 3);
      }
      else
      {
        v31 = (const char *)(v5 + 2);
      }
    }
    else
    {
LABEL_15:
      v31 = (const char *)(v5 + 1);
    }
    if ( v6 != 125 )
      break;
    if ( v10 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(v35), v1, 0);
LABEL_7:
      v2 = *v31;
      if ( *v31 == 0 )
        goto LABEL_26;
    }
    else
    {
      v29 = *(uint32_t *)(*v27 - 12);
      if ( v1 + v29 > *(uint32_t *)(v35[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v35), v1 + v29 + 64, 0);
        v29 = *(uint32_t *)(*((uint32_t *)self + 223) - 12);
      }
      if ( v29 == 0 )
        goto LABEL_7;
      v11 = 0;
      v12 = (uint32_t *)((char *)self + 892);
      v28 = v1;
      do
      {
        v13 = v35[0];
        v14 = v11 + v28;
        if ( *(int *)(v35[0] - 4) >= 0 )
        {
          v24 = v12;
          sub_19397C0(v35);
          v13 = v35[0];
          v12 = v24;
        }
        v15 = *(uint8_t *)(*v12 + v11++);
        *(uint8_t *)(v13 + v14) = v15;
      }
      while ( v11 != v29 );
      v1 = v11 + v28;
      v2 = *v31;
      if ( *v31 == 0 )
        goto LABEL_26;
    }
  }
  sub_1939D80((int)(uintptr_t)(v35), v1, 0);
LABEL_26:
  sub_1939D80((int)(uintptr_t)(v35), v1, 0);
  g4_std::string::construct_copy(v34, v35);
  v16 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v36), "ChatLib", (int)(uintptr_t)(&v33));
  chatv2::Utils::Log(3, 0, v36, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ArionChannel.cpp", 34, v34);
  v17 = (void *)(v36[0] - 12);
  if ( (uint32_t *)(v36[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  v18 = (void *)(v34[0] - 12);
  if ( (uint32_t *)(v34[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  return ((chatv2::Connectivity::TCPClient::Start((chatv2::Core::ArionChannel::Self *)((char *)self + 432), (int)(uintptr_t)(v27))), (int)0);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::Start  (binary VA: 0x12689a0)
// Original: chatv2::Core::ArionChannel::Start
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::Start(chatv2::Core::ArionChannel::Self *self)
{
  chatv2::Core::ArionChannel::StartCommandClient(self);
  return chatv2::Core::ArionChannel::StartListenClient(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::StopCommandClient  (binary VA: 0x12689e0)
// Original: chatv2::Core::ArionChannel::StopCommandClient
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::StopCommandClient(chatv2::Core::ArionChannel::Self *self)
{
  size_t v1;
  char v2;
  int v3;
  size_t v4;
  uint8_t *v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  size_t v14;
  char v15;
  void *v16;
  void *v17;
  void *v18;
  int v20;
  int v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef int _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef int _g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef const char *_g4_t_v30;
  typedef size_t _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t _g4_t_v33[4];
  typedef int _g4_t_v34[3];
  typedef int _g4_t_v35[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v25)) > _g4_s3 ? (12u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v26)) > _g4_s4 ? (20u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v27)) > _g4_s5 ? (24u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v28)) > _g4_s6 ? (28u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v29)) > _g4_s7 ? (28u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v30)) > _g4_s8 ? (32u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v31)) > _g4_s9 ? (32u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v32)) > _g4_s10 ? (48u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v33)) > _g4_s11 ? (52u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v34)) > _g4_s12 ? (68u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v35)) > _g4_s13 ? (80u + sizeof(_g4_t_v35)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);

  v1 = 0;
  v34[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v34), 0x80u, 0);
  v26 = 0;
  v2 = aArionchannelSt_1 /* " ArionChannel stop command client, command cl..." */[0];
  v30 = " ArionChannel stop command client, command client: {0}\n";
  while ( 1 )
  {
    v5 = (uint8_t *)(v30 + 1);
    if ( v2 != 123 )
    {
      v3 = v34[0];
      v4 = v1 + 1;
      if ( v1 + 1 > *(uint32_t *)(v34[0] - 12) )
      {
        v22 = v2;
        sub_1939D80((int)(uintptr_t)(v34), v1 + 65, 0);
        v3 = v34[0];
        v4 = v1 + 1;
        v2 = v22;
      }
      if ( *(int *)(v3 - 4) >= 0 )
      {
        v25 = v4;
        v23 = v2;
        sub_19397C0(v34);
        v3 = v34[0];
        v4 = v25;
        v2 = v23;
      }
      *(uint8_t *)(v3 + v1) = v2;
      ++v30;
      v1 = v4;
      goto LABEL_7;
    }
    v6 = v30[1];
    if ( v6 == 123 )
    {
      v20 = v34[0];
      if ( v1 + 2 > *(uint32_t *)(v34[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v34), v1 + 66, 0);
        v20 = v34[0];
        v29 = v1 + 1;
        if ( *(int *)(v34[0] - 4) < 0 )
          goto LABEL_40;
      }
      else
      {
        v29 = v1 + 1;
        if ( *(int *)(v34[0] - 4) < 0 )
        {
LABEL_40:
          *(uint8_t *)(v20 + v1) = 123;
          v21 = v34[0];
          if ( *(int *)(v34[0] - 4) >= 0 )
          {
            sub_19397C0(v34);
            v21 = v34[0];
          }
          v30 += 2;
          v1 += 2;
          *(uint8_t *)(v21 + v29) = 123;
          goto LABEL_7;
        }
      }
      sub_19397C0(v34);
      v20 = v34[0];
      goto LABEL_40;
    }
    if ( v6 == 0 )
      goto LABEL_31;
    v31 = v1;
    v7 = 1;
    v8 = 0;
    while ( 1 )
    {
      v6 = *v5;
      if ( (uint8_t)(*v5 - 48) > 9u )
        break;
      v9 = v7 * v8;
      ++v5;
      v7 *= 10;
      v8 = v9 + v6 - 48;
      if ( *v5 == 0 )
      {
        v10 = v8;
        v6 = 0;
        v1 = v31;
        goto LABEL_15;
      }
    }
    v10 = v8;
    v1 = v31;
    if ( v7 == 1 )
LABEL_31:
      v10 = v26++;
    if ( v6 == 58 )
    {
      v6 = v5[1];
      if ( v6 == 120 || v6 == 88 )
      {
        v6 = v5[2];
        v30 = (const char *)(v5 + 3);
      }
      else
      {
        v30 = (const char *)(v5 + 2);
      }
    }
    else
    {
LABEL_15:
      v30 = (const char *)(v5 + 1);
    }
    if ( v6 != 125 )
      break;
    if ( v10 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(v34), v1, 0);
LABEL_7:
      v2 = *v30;
      if ( *v30 == 0 )
        goto LABEL_26;
    }
    else
    {
      v28 = *(uint32_t *)(*((uint32_t *)self + 222) - 12);
      if ( v1 + v28 > *(uint32_t *)(v34[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v34), v1 + v28 + 64, 0);
        v28 = *(uint32_t *)(*((uint32_t *)self + 222) - 12);
      }
      if ( v28 == 0 )
        goto LABEL_7;
      v11 = 0;
      v12 = (uint32_t *)((char *)self + 888);
      v27 = v1;
      do
      {
        v13 = v34[0];
        v14 = v11 + v27;
        if ( *(int *)(v34[0] - 4) >= 0 )
        {
          v24 = v12;
          sub_19397C0(v34);
          v13 = v34[0];
          v12 = v24;
        }
        v15 = *(uint8_t *)(*v12 + v11++);
        *(uint8_t *)(v13 + v14) = v15;
      }
      while ( v11 != v28 );
      v1 = v11 + v27;
      v2 = *v30;
      if ( *v30 == 0 )
        goto LABEL_26;
    }
  }
  sub_1939D80((int)(uintptr_t)(v34), v1, 0);
LABEL_26:
  sub_1939D80((int)(uintptr_t)(v34), v1, 0);
  g4_std::string::construct_copy(v33, v34);
  v16 = (void *)(v34[0] - 12);
  if ( (uint32_t *)(v34[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v35), "ChatLib", (int)(uintptr_t)(&v32));
  chatv2::Utils::Log(
    3u,
    0,
    (int)(uintptr_t)(v35),
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ArionChannel.cpp",
    40,
    (int)(uintptr_t)(v33));
  v17 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  v18 = (void *)(v33[0] - 12);
  if ( (uint32_t *)(v33[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  return chatv2::Connectivity::TCPClient::Stop(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::StopListenClient  (binary VA: 0x1268e60)
// Original: chatv2::Core::ArionChannel::StopListenClient
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::StopListenClient(chatv2::Core::ArionChannel::Self *self)
{
  size_t v1;
  char v2;
  int v3;
  size_t v4;
  uint8_t *v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  size_t v14;
  char v15;
  void *v16;
  void *v17;
  void *v18;
  int v20;
  int v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef int _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef int _g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef const char *_g4_t_v30;
  typedef size_t _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t _g4_t_v33[4];
  typedef int _g4_t_v34[3];
  typedef int _g4_t_v35[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v25)) > _g4_s3 ? (12u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v26)) > _g4_s4 ? (20u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v27)) > _g4_s5 ? (24u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v28)) > _g4_s6 ? (28u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v29)) > _g4_s7 ? (28u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v30)) > _g4_s8 ? (32u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v31)) > _g4_s9 ? (32u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v32)) > _g4_s10 ? (48u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v33)) > _g4_s11 ? (52u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v34)) > _g4_s12 ? (68u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v35)) > _g4_s13 ? (80u + sizeof(_g4_t_v35)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);

  v1 = 0;
  v34[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v34), 0x80u, 0);
  v26 = 0;
  v2 = aArionchannelSt_2 /* " ArionChannel stop listen client, listen clie..." */[0];
  v30 = " ArionChannel stop listen client, listen client: {0}\n";
  while ( 1 )
  {
    v5 = (uint8_t *)(v30 + 1);
    if ( v2 != 123 )
    {
      v3 = v34[0];
      v4 = v1 + 1;
      if ( v1 + 1 > *(uint32_t *)(v34[0] - 12) )
      {
        v22 = v2;
        sub_1939D80((int)(uintptr_t)(v34), v1 + 65, 0);
        v3 = v34[0];
        v4 = v1 + 1;
        v2 = v22;
      }
      if ( *(int *)(v3 - 4) >= 0 )
      {
        v25 = v4;
        v23 = v2;
        sub_19397C0(v34);
        v3 = v34[0];
        v4 = v25;
        v2 = v23;
      }
      *(uint8_t *)(v3 + v1) = v2;
      ++v30;
      v1 = v4;
      goto LABEL_7;
    }
    v6 = v30[1];
    if ( v6 == 123 )
    {
      v20 = v34[0];
      if ( v1 + 2 > *(uint32_t *)(v34[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v34), v1 + 66, 0);
        v20 = v34[0];
        v29 = v1 + 1;
        if ( *(int *)(v34[0] - 4) < 0 )
          goto LABEL_40;
      }
      else
      {
        v29 = v1 + 1;
        if ( *(int *)(v34[0] - 4) < 0 )
        {
LABEL_40:
          *(uint8_t *)(v20 + v1) = 123;
          v21 = v34[0];
          if ( *(int *)(v34[0] - 4) >= 0 )
          {
            sub_19397C0(v34);
            v21 = v34[0];
          }
          v30 += 2;
          v1 += 2;
          *(uint8_t *)(v21 + v29) = 123;
          goto LABEL_7;
        }
      }
      sub_19397C0(v34);
      v20 = v34[0];
      goto LABEL_40;
    }
    if ( v6 == 0 )
      goto LABEL_31;
    v31 = v1;
    v7 = 1;
    v8 = 0;
    while ( 1 )
    {
      v6 = *v5;
      if ( (uint8_t)(*v5 - 48) > 9u )
        break;
      v9 = v7 * v8;
      ++v5;
      v7 *= 10;
      v8 = v9 + v6 - 48;
      if ( *v5 == 0 )
      {
        v10 = v8;
        v6 = 0;
        v1 = v31;
        goto LABEL_15;
      }
    }
    v10 = v8;
    v1 = v31;
    if ( v7 == 1 )
LABEL_31:
      v10 = v26++;
    if ( v6 == 58 )
    {
      v6 = v5[1];
      if ( v6 == 120 || v6 == 88 )
      {
        v6 = v5[2];
        v30 = (const char *)(v5 + 3);
      }
      else
      {
        v30 = (const char *)(v5 + 2);
      }
    }
    else
    {
LABEL_15:
      v30 = (const char *)(v5 + 1);
    }
    if ( v6 != 125 )
      break;
    if ( v10 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(v34), v1, 0);
LABEL_7:
      v2 = *v30;
      if ( *v30 == 0 )
        goto LABEL_26;
    }
    else
    {
      v28 = *(uint32_t *)(*((uint32_t *)self + 223) - 12);
      if ( v1 + v28 > *(uint32_t *)(v34[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v34), v1 + v28 + 64, 0);
        v28 = *(uint32_t *)(*((uint32_t *)self + 223) - 12);
      }
      if ( v28 == 0 )
        goto LABEL_7;
      v11 = 0;
      v12 = (uint32_t *)((char *)self + 892);
      v27 = v1;
      do
      {
        v13 = v34[0];
        v14 = v11 + v27;
        if ( *(int *)(v34[0] - 4) >= 0 )
        {
          v24 = v12;
          sub_19397C0(v34);
          v13 = v34[0];
          v12 = v24;
        }
        v15 = *(uint8_t *)(*v12 + v11++);
        *(uint8_t *)(v13 + v14) = v15;
      }
      while ( v11 != v28 );
      v1 = v11 + v27;
      v2 = *v30;
      if ( *v30 == 0 )
        goto LABEL_26;
    }
  }
  sub_1939D80((int)(uintptr_t)(v34), v1, 0);
LABEL_26:
  sub_1939D80((int)(uintptr_t)(v34), v1, 0);
  g4_std::string::construct_copy(v33, v34);
  v16 = (void *)(v34[0] - 12);
  if ( (uint32_t *)(v34[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v35), "ChatLib", (int)(uintptr_t)(&v32));
  chatv2::Utils::Log(
    3u,
    0,
    (int)(uintptr_t)(v35),
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ArionChannel.cpp",
    46,
    (int)(uintptr_t)(v33));
  v17 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  v18 = (void *)(v33[0] - 12);
  if ( (uint32_t *)(v33[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  chatv2::Connectivity::HTTPClient::ClearRequests((chatv2::Core::ArionChannel::Self *)((char *)self + 432));
  return chatv2::Connectivity::TCPClient::Stop((chatv2::Core::ArionChannel::Self *)((char *)self + 432));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::GetListenClient  (binary VA: 0x12692f0)
// Original: chatv2::Core::ArionChannel::GetListenClient
// ----------------------------------------------------------------------------
char * chatv2::Core::ArionChannel::GetListenClient(chatv2::Core::ArionChannel::Self *self)
{
  return (char *)self + 432;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::GetCommandClient  (binary VA: 0x1269300)
// Original: chatv2::Core::ArionChannel::GetCommandClient
// ----------------------------------------------------------------------------
chatv2::Core::ArionChannel::Self * chatv2::Core::ArionChannel::GetCommandClient(chatv2::Core::ArionChannel::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::Disconnect  (binary VA: 0x1269310)
// Original: chatv2::Core::ArionChannel::Disconnect
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::Disconnect(chatv2::Core::ArionChannel::Self *self)
{
  void *v1;
  void *v2;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5[3];
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v6)) > _g4_s2 ? (16u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5), " ArionChannel Disconnect\n", (int)(uintptr_t)(&v4) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "ChatLib", (int)(uintptr_t)(&v4));
  chatv2::Utils::Log(
    3u,
    0,
    (int)(uintptr_t)(&v6),
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ArionChannel.cpp",
    64,
    (int)(uintptr_t)(v5));
  v1 = (void *)(v6 - 12);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  v2 = (void *)(v5[0] - 12);
  if ( (uint32_t *)(v5[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  chatv2::Core::ArionChannel::StopListenClient(self);
  return chatv2::Core::ArionChannel::StopCommandClient(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::Destroy  (binary VA: 0x1269420)
// Original: chatv2::Core::ArionChannel::~ArionChannel
// ----------------------------------------------------------------------------
void chatv2::Core::ArionChannel::Destroy(void ***self)
{
  void *v1;
  void **v2;
  unsigned int v3;
  void *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  chatv2::Core::ArionChannel::Disconnect((chatv2::Core::ArionChannel::Self *)self);
  v1 = *(self + 226);
  if ( v1 != nullptr )
  {
    v2 = *(self + 231);
    v3 = (unsigned int)(uintptr_t)(*(self + 235) + 1);
    if ( v3 > (unsigned int)(uintptr_t)(v2) )
    {
      do
      {
        v4 = *v2++;
        opDelete(v4);
      }
      while ( v3 > (unsigned int)(uintptr_t)(v2) );
      v1 = *(self + 226);
    }
    opDelete(v1);
  }
  v5 = (int)(uintptr_t)(*(self + 225));
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = (int)(uintptr_t)(*(self + 224));
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = (int)(uintptr_t)(*(self + 223));
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  v8 = (int)(uintptr_t)(*(self + 222));
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
  v9 = (int)(uintptr_t)(*(self + 221));
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v9 - 12));
  }
  v10 = (int)(uintptr_t)(*(self + 220));
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v10 - 12));
  }
  v11 = (int)(uintptr_t)(*(self + 219));
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v11 - 12));
  }
  chatv2::Connectivity::HTTPClient::Destroy((chatv2::Connectivity::HTTPClient::Self *)(self + 108));
  chatv2::Connectivity::HTTPSClient::Destroy((chatv2::Connectivity::HTTPSClient::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::GetName  (binary VA: 0x1269610)
// Original: chatv2::Core::ArionChannel::GetName
// ----------------------------------------------------------------------------
char * chatv2::Core::ArionChannel::GetName(chatv2::Core::ArionChannel::Self *self)
{
  return (char *)self + 876;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::SetReconnectKey  (binary VA: 0x1269620)
// Original: chatv2::Core::ArionChannel::SetReconnectKey
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::SetReconnectKey(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 880, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::GetReconnectKey  (binary VA: 0x1269650)
// Original: chatv2::Core::ArionChannel::GetReconnectKey
// ----------------------------------------------------------------------------
char * chatv2::Core::ArionChannel::GetReconnectKey(chatv2::Core::ArionChannel::Self *self)
{
  return (char *)self + 880;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::SetLanguage  (binary VA: 0x1269660)
// Original: chatv2::Core::ArionChannel::SetLanguage
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::SetLanguage(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 884, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::GetLanguage  (binary VA: 0x1269690)
// Original: chatv2::Core::ArionChannel::GetLanguage
// ----------------------------------------------------------------------------
char * chatv2::Core::ArionChannel::GetLanguage(chatv2::Core::ArionChannel::Self *self)
{
  return (char *)self + 884;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::SetType  (binary VA: 0x12696a0)
// Original: chatv2::Core::ArionChannel::SetType
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::SetType(int a1, int a2)
{
  *(uint32_t *)(a1 + 944) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::GetType  (binary VA: 0x12696c0)
// Original: chatv2::Core::ArionChannel::GetType
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::GetType(chatv2::Core::ArionChannel::Self *self)
{
  return *((uint32_t *)self + 236);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::SetSendQuota  (binary VA: 0x12696d0)
// Original: chatv2::Core::ArionChannel::SetSendQuota
// ----------------------------------------------------------------------------
chatv2::Core::ArionChannel::Self * chatv2::Core::ArionChannel::SetSendQuota(chatv2::Core::ArionChannel::Self *self, unsigned int a2)
{
  *((uint32_t *)self + 217) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::GetSendQuota  (binary VA: 0x12696f0)
// Original: chatv2::Core::ArionChannel::GetSendQuota
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::GetSendQuota(chatv2::Core::ArionChannel::Self *self)
{
  return *((uint32_t *)self + 217);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::SetQuotaPeriod  (binary VA: 0x1269700)
// Original: chatv2::Core::ArionChannel::SetQuotaPeriod
// ----------------------------------------------------------------------------
chatv2::Core::ArionChannel::Self * chatv2::Core::ArionChannel::SetQuotaPeriod(chatv2::Core::ArionChannel::Self *self, unsigned int a2)
{
  *((uint32_t *)self + 218) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::GetQuotaPeriod  (binary VA: 0x1269720)
// Original: chatv2::Core::ArionChannel::GetQuotaPeriod
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::GetQuotaPeriod(chatv2::Core::ArionChannel::Self *self)
{
  return *((uint32_t *)self + 218);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::SetCommandHost  (binary VA: 0x1269730)
// Original: chatv2::Core::ArionChannel::SetCommandHost
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::SetCommandHost(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 888, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::GetCommandHost  (binary VA: 0x1269760)
// Original: chatv2::Core::ArionChannel::GetCommandHost
// ----------------------------------------------------------------------------
char * chatv2::Core::ArionChannel::GetCommandHost(chatv2::Core::ArionChannel::Self *self)
{
  return (char *)self + 888;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::SetListenHost  (binary VA: 0x1269770)
// Original: chatv2::Core::ArionChannel::SetListenHost
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::SetListenHost(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 892, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::SetCommandPath  (binary VA: 0x12697a0)
// Original: chatv2::Core::ArionChannel::SetCommandPath
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::SetCommandPath(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 896, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::GetCommandPath  (binary VA: 0x12697d0)
// Original: chatv2::Core::ArionChannel::GetCommandPath
// ----------------------------------------------------------------------------
char * chatv2::Core::ArionChannel::GetCommandPath(chatv2::Core::ArionChannel::Self *self)
{
  return (char *)self + 896;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::SetListenPath  (binary VA: 0x12697e0)
// Original: chatv2::Core::ArionChannel::SetListenPath
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::SetListenPath(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 900, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::GetListenPath  (binary VA: 0x1269810)
// Original: chatv2::Core::ArionChannel::GetListenPath
// ----------------------------------------------------------------------------
char * chatv2::Core::ArionChannel::GetListenPath(chatv2::Core::ArionChannel::Self *self)
{
  return (char *)self + 900;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::SetReceivingMessages  (binary VA: 0x1269820)
// Original: chatv2::Core::ArionChannel::SetReceivingMessages
// ----------------------------------------------------------------------------
chatv2::Core::ArionChannel::Self * chatv2::Core::ArionChannel::SetReceivingMessages(chatv2::Core::ArionChannel::Self *self, bool a2)
{
  *((uint8_t *)self + 864) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::GetReceivingMessages  (binary VA: 0x1269840)
// Original: chatv2::Core::ArionChannel::GetReceivingMessages
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::GetReceivingMessages(chatv2::Core::ArionChannel::Self *self)
{
  return *((uint8_t *)self + 864);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Core::ArionChannel::CalculateIfMessageCanBeSent  (binary VA: 0x1269850)
// Original: chatv2::Core::ArionChannel::CalculateIfMessageCanBeSent
// ----------------------------------------------------------------------------
int chatv2::Core::ArionChannel::CalculateIfMessageCanBeSent(chatv2::Core::ArionChannel::Self *self)
{
  uint64_t v1; // xmm0_8
  char *v2;
  int64_t *v3;
  int64_t *v4;
  int v5;
  int result;
  int64_t **v7;
  typedef int64_t _g4_t_v8;
  typedef int64_t _g4_t_v9;
  typedef struct timespec _g4_t_tp;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_tp)) > _g4_s2 ? (24u + sizeof(_g4_t_tp)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 24u);

  if ( clock_gettime(1, &tp) != 0 )
    __assert2(
      "../../../../../lib/boost/chrono/detail/inlined/posix/chrono.hpp",
      79,
      "static boost::chrono::steady_clock::time_point boost::chrono::steady_clock::now()",
      "0 && \"Boost::Chrono - Internal Error\"");
  v1 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*((uint32_t *)self + 218)), 0);
  v9 = tp.tv_nsec + 1000000000LL * tp.tv_sec;
  v8 = -1000000000LL * v1 + v9;
  v2 = *((char **)self + 230);
  v3 = *((int64_t **)self + 232);
  v4 = *((int64_t **)self + 228);
LABEL_4:
  if ( v3 == v4 )
  {
LABEL_12:
    v4 = v3;
  }
  else
  {
    while ( v8 > *v4 )
    {
      if ( v4 == (int64_t *)(v2 - 8) )
      {
        opDelete(*((void **)self + 229));
        v7 = (int64_t **)(*((uint32_t *)self + 231) + 4);
        *((uint32_t *)self + 231) = (uint32_t)(uintptr_t)(v7);
        v4 = *v7;
        v3 = *((int64_t **)self + 232);
        *((uint32_t *)self + 229) = (uint32_t)(uintptr_t)(v4);
        *((uint32_t *)self + 228) = (uint32_t)(uintptr_t)(v4);
        v2 = (char *)(v4 + 64);
        *((uint32_t *)self + 230) = (uint32_t)(uintptr_t)(v4 + 64);
        goto LABEL_4;
      }
      *((uint32_t *)self + 228) = (uint32_t)(uintptr_t)(++v4);
      if ( v3 == v4 )
        goto LABEL_12;
    }
  }
  v5 = v2 - (char *)v4;
  result = 0;
  if ( *((uint32_t *)self + 217) > (unsigned int)(((((*((uint32_t *)self + 235) - *((uint32_t *)self + 231)) >> 2) - 1) << 6)
                                              + (((int)(uintptr_t)(v3) - *((uint32_t *)self + 233)) >> 3)
                                              + (v5 >> 3)) )
  {
    reinterpret_cast<std::deque<boost::chrono::time_point<boost::chrono::steady_clock,boost::chrono::duration<long long,boost::ratio<1ll,1000000000ll>>>> *>((char *)self + 904)->push_back(
      *reinterpret_cast<const boost::chrono::time_point<boost::chrono::steady_clock,boost::chrono::duration<long long,boost::ratio<1ll,1000000000ll>>> *>(&v9));
    return 1;
  }
  return result;
}


