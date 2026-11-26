// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd7654):
//   F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/RoomInfoArionResponse.cpp
// Referenced by 2 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::RoomInfoArionResponse::Parse  (binary VA: 0x1257250)
// Original: chatv2::Responses::RoomInfoArionResponse::Parse
// ----------------------------------------------------------------------------
int chatv2::Responses::RoomInfoArionResponse::Parse(chatv2::Responses::RoomInfoArionResponse::Self *self, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2)
{
  size_t v2;
  uint8_t *v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  size_t v9;
  uint8_t *v10;
  int v11;
  int v12;
  int v13;
  char **v14;
  char *v15;
  char *v16;
  size_t v17;
  size_t v18;
  uint8_t *v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  size_t v25;
  uint8_t *v26;
  int v27;
  int v28;
  int v29;
  char **v30;
  char *v31;
  char *v32;
  size_t v33;
  size_t v34;
  uint8_t *v35;
  int v36;
  int v37;
  int v38;
  uint32_t *v39;
  int v40;
  const char *v41;
  char v42;
  int v43;
  int v44;
  int v45;
  const char *v46;
  char v47;
  bool v48;
  int v49;
  int v50;
  int v51;
  int v52;
  void *v53;
  void *v54;
  int result;
  void *v56;
  unsigned int v57;
  int v58;
  uint32_t *v59;
  int v60;
  int v61;
  char v62;
  jcore::parsing::detail **v63;
  unsigned int v64;
  int v65;
  uint32_t *v66;
  int v67;
  int v68;
  char v69;
  int v70;
  int v71;
  int v72;
  int v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef char _g4_t_v79;
  typedef char _g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef uint32_t *_g4_t_v82;
  typedef const char *_g4_t_v83;
  typedef const char *_g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef uint8_t *_g4_t_v89;
  typedef uint8_t *_g4_t_v90;
  typedef uint8_t *_g4_t_v91;
  typedef uint8_t *_g4_t_v92;
  typedef uint8_t *_g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef uint32_t _g4_t_v96[4];
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v74)) > _g4_s0 ? (0u + sizeof(_g4_t_v74)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v75)) > _g4_s1 ? (0u + sizeof(_g4_t_v75)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v76)) > _g4_s2 ? (0u + sizeof(_g4_t_v76)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v77)) > _g4_s3 ? (0u + sizeof(_g4_t_v77)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v78)) > _g4_s4 ? (0u + sizeof(_g4_t_v78)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v79)) > _g4_s5 ? (0u + sizeof(_g4_t_v79)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v80)) > _g4_s6 ? (0u + sizeof(_g4_t_v80)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v81)) > _g4_s7 ? (0u + sizeof(_g4_t_v81)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v82)) > _g4_s8 ? (0u + sizeof(_g4_t_v82)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v83)) > _g4_s9 ? (4u + sizeof(_g4_t_v83)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v84)) > _g4_s10 ? (4u + sizeof(_g4_t_v84)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v85)) > _g4_s11 ? (20u + sizeof(_g4_t_v85)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v86)) > _g4_s12 ? (24u + sizeof(_g4_t_v86)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v87)) > _g4_s13 ? (28u + sizeof(_g4_t_v87)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v88)) > _g4_s14 ? (28u + sizeof(_g4_t_v88)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v89)) > _g4_s15 ? (32u + sizeof(_g4_t_v89)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v90)) > _g4_s16 ? (32u + sizeof(_g4_t_v90)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v91)) > _g4_s17 ? (32u + sizeof(_g4_t_v91)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v92)) > _g4_s18 ? (32u + sizeof(_g4_t_v92)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v93)) > _g4_s19 ? (32u + sizeof(_g4_t_v93)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v94)) > _g4_s20 ? (32u + sizeof(_g4_t_v94)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v95)) > _g4_s21 ? (48u + sizeof(_g4_t_v95)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v96)) > _g4_s22 ? (52u + sizeof(_g4_t_v96)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v97)) > _g4_s23 ? (68u + sizeof(_g4_t_v97)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v98)) > _g4_s24 ? (72u + sizeof(_g4_t_v98)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v99)) > _g4_s25 ? (76u + sizeof(_g4_t_v99)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v100)) > _g4_s26 ? (80u + sizeof(_g4_t_v100)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 0u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 0u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 0u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 0u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 0u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 0u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 0u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 0u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 0u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 4u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 4u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 20u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 24u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 28u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 28u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 32u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 32u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 32u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 32u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 32u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 32u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 48u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 52u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 68u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 72u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 76u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 80u);

  v89 = (uint8_t *)chatv2::Responses::NUM_MEMBERS;
  if ( chatv2::Responses::NUM_MEMBERS == 0 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( *((uint32_t *)a2 + 3) != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  v2 = 0;
  if ( *v89 != 0 )
  {
    v3 = v89;
    do
      ++v3;
    while ( *v3 != 0 );
    v2 = v3 - v89;
  }
  v4 = *(uint32_t *)a2;
  v5 = *(uint32_t *)a2 + 32 * *((uint32_t *)a2 + 1);
  if ( *(uint32_t *)a2 == v5 )
    goto LABEL_158;
  while ( 1 )
  {
    if ( *(uint32_t *)(v4 + 4) == v2 )
    {
      v74 = v5;
      v6 = memcmp(*(const void **)v4, v89, v2);
      v5 = v74;
      if ( v6 == 0 )
        break;
    }
    v4 += 32;
    if ( v4 == v5 )
      goto LABEL_158;
  }
  if ( v4 == 0 )
  {
LABEL_158:
    v7 = (uint32_t *)(&g4_rapidjson_NullValue);
    if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
      && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
    {
      *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
      _cxa_guard_release(g4_guard_d940a9bded);
      __cxa_atexit(
        (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
        &g4_rapidjson_NullValue,
        &unk_20D1280);
    }
  }
  else
  {
    v7 = (uint32_t *)(v4 + 16);
  }
  v8 = v7[3];
  if ( v8 != 0 && (v8 & 0x800) != 0 )
    *((uint32_t *)self + 5) = *v7;
  v90 = (uint8_t *)chatv2::Responses::MOTD;
  if ( chatv2::Responses::MOTD == 0 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( *((uint32_t *)a2 + 3) != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  v9 = 0;
  if ( *v90 != 0 )
  {
    v10 = v90;
    do
      ++v10;
    while ( *v10 != 0 );
    v9 = v10 - v90;
  }
  v11 = *(uint32_t *)a2;
  v12 = *(uint32_t *)a2 + 32 * *((uint32_t *)a2 + 1);
  if ( *(uint32_t *)a2 == v12 )
    goto LABEL_155;
  while ( 1 )
  {
    if ( *(uint32_t *)(v11 + 4) == v9 )
    {
      v75 = v12;
      v13 = memcmp(*(const void **)v11, v90, v9);
      v12 = v75;
      if ( v13 == 0 )
        break;
    }
    v11 += 32;
    if ( v11 == v12 )
      goto LABEL_155;
  }
  if ( v11 == 0 )
  {
LABEL_155:
    v14 = (char **)&g4_rapidjson_NullValue;
    if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
      && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
    {
      *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
      _cxa_guard_release(g4_guard_d940a9bded);
      __cxa_atexit(
        (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
        &g4_rapidjson_NullValue,
        &unk_20D1280);
    }
  }
  else
  {
    v14 = (char **)(v11 + 16);
  }
  v15 = v14[3];
  v85 = (uint32_t *)((char *)self + 36);
  if ( v15 != nullptr && ((unsigned int)(uintptr_t)(v15) & 0x100000) != 0 )
  {
    v16 = *v14;
    v17 = strlen(v16);
    g4_std_compat::string_assign((int)(uintptr_t)(v85), v16, v17);
  }
  v91 = (uint8_t *)chatv2::Responses::QUOTA_PERIOD;
  if ( chatv2::Responses::QUOTA_PERIOD == 0 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( *((uint32_t *)a2 + 3) != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  v18 = 0;
  if ( *v91 != 0 )
  {
    v19 = v91;
    do
      ++v19;
    while ( *v19 != 0 );
    v18 = v19 - v91;
  }
  v20 = *(uint32_t *)a2;
  v21 = *(uint32_t *)a2 + 32 * *((uint32_t *)a2 + 1);
  if ( *(uint32_t *)a2 == v21 )
    goto LABEL_152;
  while ( 1 )
  {
    if ( *(uint32_t *)(v20 + 4) == v18 )
    {
      v76 = v21;
      v22 = memcmp(*(const void **)v20, v91, v18);
      v21 = v76;
      if ( v22 == 0 )
        break;
    }
    v20 += 32;
    if ( v20 == v21 )
      goto LABEL_152;
  }
  if ( v20 == 0 )
  {
LABEL_152:
    v23 = (uint32_t *)(&g4_rapidjson_NullValue);
    if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
      && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
    {
      *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
      _cxa_guard_release(g4_guard_d940a9bded);
      __cxa_atexit(
        (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
        &g4_rapidjson_NullValue,
        &unk_20D1280);
    }
  }
  else
  {
    v23 = (uint32_t *)(v20 + 16);
  }
  v24 = v23[3];
  if ( v24 != 0 && (v24 & 0x800) != 0 )
    *((uint32_t *)self + 6) = *v23;
  v92 = (uint8_t *)chatv2::Responses::RECONNECT_KEY;
  if ( chatv2::Responses::RECONNECT_KEY == 0 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( *((uint32_t *)a2 + 3) != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  v25 = 0;
  if ( *v92 != 0 )
  {
    v26 = v92;
    do
      ++v26;
    while ( *v26 != 0 );
    v25 = v26 - v92;
  }
  v27 = *(uint32_t *)a2;
  v28 = *(uint32_t *)a2 + 32 * *((uint32_t *)a2 + 1);
  if ( v28 == *(uint32_t *)a2 )
    goto LABEL_149;
  while ( 1 )
  {
    if ( *(uint32_t *)(v27 + 4) == v25 )
    {
      v77 = v28;
      v29 = memcmp(*(const void **)v27, v92, v25);
      v28 = v77;
      if ( v29 == 0 )
        break;
    }
    v27 += 32;
    if ( v28 == v27 )
      goto LABEL_149;
  }
  if ( v27 == 0 )
  {
LABEL_149:
    v30 = (char **)&g4_rapidjson_NullValue;
    if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
      && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
    {
      *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
      _cxa_guard_release(g4_guard_d940a9bded);
      __cxa_atexit(
        (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
        &g4_rapidjson_NullValue,
        &unk_20D1280);
    }
  }
  else
  {
    v30 = (char **)(v27 + 16);
  }
  v31 = v30[3];
  v86 = (uint32_t *)((char *)self + 32);
  if ( v31 != nullptr && ((unsigned int)(uintptr_t)(v31) & 0x100000) != 0 )
  {
    v32 = *v30;
    v33 = strlen(v32);
    g4_std_compat::string_assign((int)(uintptr_t)(v86), v32, v33);
  }
  v93 = (uint8_t *)chatv2::Responses::SEND_QUOTA;
  if ( chatv2::Responses::SEND_QUOTA == 0 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( *((uint32_t *)a2 + 3) != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  v34 = 0;
  if ( *v93 != 0 )
  {
    v35 = v93;
    do
      ++v35;
    while ( *v35 != 0 );
    v34 = v35 - v93;
  }
  v36 = *(uint32_t *)a2;
  v37 = *(uint32_t *)a2 + 32 * *((uint32_t *)a2 + 1);
  if ( v37 == *(uint32_t *)a2 )
    goto LABEL_146;
  while ( 1 )
  {
    if ( *(uint32_t *)(v36 + 4) == v34 )
    {
      v78 = v37;
      v38 = memcmp(*(const void **)v36, v93, v34);
      v37 = v78;
      if ( v38 == 0 )
        break;
    }
    v36 += 32;
    if ( v37 == v36 )
      goto LABEL_146;
  }
  if ( v36 == 0 )
  {
LABEL_146:
    v39 = (uint32_t *)(&g4_rapidjson_NullValue);
    if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
      && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
    {
      *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
      _cxa_guard_release(g4_guard_d940a9bded);
      __cxa_atexit(
        (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
        &g4_rapidjson_NullValue,
        &unk_20D1280);
    }
  }
  else
  {
    v39 = (uint32_t *)(v36 + 16);
  }
  v40 = v39[3];
  if ( v40 != 0 && (v40 & 0x800) != 0 )
    *((uint32_t *)self + 7) = *v39;
  v41 = " Room info arion response, number of members: {0}, motd: {1}, quotaPeriod: {2}, reconnectKey: {3}, sendQuota: {4}\n";
  v97 = (int)(uintptr_t)(&unk_213B814);
  sub_1939D80((int)(uintptr_t)(&v97), 0x80u, 0);
  v99 = 0;
  v94 = 0;
  v42 = aRoomInfoArionR_0 /* " Room info arion response, number of members:..." */[0];
  while ( 1 )
  {
LABEL_98:
    v46 = v41 + 1;
    if ( v42 != 123 )
    {
      v43 = v99;
      v44 = v97;
      v45 = v99 + 1;
      if ( (unsigned int)(v99 + 1) > *(uint32_t *)(v97 - 12) )
      {
        v79 = v42;
        sub_1939D80((int)(uintptr_t)(&v97), v99 + 65, 0);
        v43 = v99;
        v44 = v97;
        v42 = v79;
        v45 = v99 + 1;
      }
      v99 = v45;
      if ( *(int *)(v44 - 4) >= 0 )
      {
        v80 = v42;
        sub_19397C0(&v97);
        v44 = v97;
        v42 = v80;
      }
      *(uint8_t *)(v44 + v43) = v42;
      v41 = v46;
      goto LABEL_97;
    }
    if ( v41[1] != 123 )
      break;
    v70 = v99;
    v71 = v97;
    if ( (unsigned int)(v99 + 2) > *(uint32_t *)(v97 - 12) )
    {
      sub_1939D80((int)(uintptr_t)(&v97), v99 + 66, 0);
      v70 = v99;
      v71 = v97;
      ++v99;
      if ( *(int *)(v97 - 4) < 0 )
        goto LABEL_143;
LABEL_142:
      sub_19397C0(&v97);
      v71 = v97;
      goto LABEL_143;
    }
    ++v99;
    if ( *(int *)(v97 - 4) >= 0 )
      goto LABEL_142;
LABEL_143:
    *(uint8_t *)(v71 + v70) = 123;
    v72 = v99++;
    v73 = v97;
    if ( *(int *)(v97 - 4) >= 0 )
    {
      sub_19397C0(&v97);
      v73 = v97;
    }
    *(uint8_t *)(v73 + v72) = 123;
    v41 += 2;
LABEL_97:
    v42 = *v41;
    if ( *v41 == 0 )
      goto LABEL_109;
  }
  v47 = 0;
  v48 = v41[1] == 0;
  v100 = 538181632;
  if ( v48 )
    goto LABEL_114;
  v49 = 1;
  v50 = 0;
  while ( 1 )
  {
    v47 = *v46;
    if ( (uint8_t)(*v46 - 48) > 9u )
      break;
    v51 = v49 * v50;
    ++v46;
    v49 *= 10;
    v50 = v51 + v47 - 48;
    if ( *v46 == 0 )
    {
      v52 = v50;
      v47 = 0;
      goto LABEL_105;
    }
  }
  v52 = v50;
  if ( v49 == 1 )
LABEL_114:
    v52 = v94++;
  if ( v47 == 58 )
  {
    v47 = v46[1];
    if ( v47 == 120 )
    {
      v41 = v46 + 3;
      BYTE2(v100) = BYTE2(v100) & 1 | 0x20;
      v47 = v46[2];
    }
    else
    {
      v41 = v46 + 2;
      if ( v47 == 88 )
      {
        BYTE2(v100) = 33;
        v41 = v46 + 3;
        v47 = v46[2];
      }
    }
  }
  else
  {
LABEL_105:
    v41 = v46 + 1;
  }
  if ( v47 == 125 )
  {
    switch ( v52 )
    {
      case 0:
        v63 = (jcore::parsing::detail **)((char *)self + 20);
        goto LABEL_129;
      case 1:
        v64 = *(uint32_t *)(*v85 - 12) + v99;
        v88 = *(uint32_t *)(*v85 - 12);
        if ( v64 > *(uint32_t *)(v97 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v97), v64 + 64, 0);
          v88 = *(uint32_t *)(*((uint32_t *)self + 9) - 12);
        }
        if ( v88 != 0 )
        {
          v65 = 0;
          v84 = v41;
          v66 = (uint32_t *)((char *)self + 36);
          do
          {
            v67 = v99++;
            v68 = v97;
            if ( *(int *)(v97 - 4) >= 0 )
            {
              v82 = v66;
              sub_19397C0(&v97);
              v68 = v97;
              v66 = v82;
            }
            v69 = *(uint8_t *)(*v66 + v65++);
            *(uint8_t *)(v68 + v67) = v69;
          }
          while ( v65 != v88 );
          v41 = v84;
        }
        goto LABEL_97;
      case 2:
        v63 = (jcore::parsing::detail **)((char *)self + 24);
        goto LABEL_129;
      case 3:
        v57 = *(uint32_t *)(*v86 - 12) + v99;
        v87 = *(uint32_t *)(*v86 - 12);
        if ( v57 > *(uint32_t *)(v97 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v97), v57 + 64, 0);
          v87 = *(uint32_t *)(*((uint32_t *)self + 8) - 12);
        }
        if ( v87 != 0 )
        {
          v58 = 0;
          v83 = v41;
          v59 = (uint32_t *)((char *)self + 32);
          do
          {
            v60 = v99++;
            v61 = v97;
            if ( *(int *)(v97 - 4) >= 0 )
            {
              v81 = v59;
              sub_19397C0(&v97);
              v61 = v97;
              v59 = v81;
            }
            v62 = *(uint8_t *)(*v59 + v58++);
            *(uint8_t *)(v61 + v60) = v62;
          }
          while ( v58 != v87 );
          v41 = v83;
        }
        goto LABEL_97;
      case 4:
        v63 = (jcore::parsing::detail **)((char *)self + 28);
LABEL_129:
        jcore::parsing::FormatToString_string_jcore_parsing_Pla_57f315((int)(uintptr_t)(&v97), (int)(uintptr_t)(&v99), (int)(uintptr_t)(&v100), *v63);
        goto LABEL_97;
      default:
        sub_1939D80((int)(uintptr_t)(&v97), v99, 0);
        v42 = *v41;
        if ( *v41 != 0 )
          goto LABEL_98;
        goto LABEL_109;
    }
  }
  sub_1939D80((int)(uintptr_t)(&v97), v99, 0);
LABEL_109:
  sub_1939D80((int)(uintptr_t)(&v97), v99, 0);
  g4_std::string::construct_copy(v96, &v97);
  v53 = (void *)(v97 - 12);
  if ( (uint32_t *)(v97 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v97 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v53);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v98), "ChatLib", (int)(uintptr_t)(&v95));
  chatv2::Utils::Log(
    3,
    0,
    &v98,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/RoomInfoArionResponse.cpp",
    41,
    v96);
  v54 = (void *)(v98 - 12);
  if ( (uint32_t *)(v98 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v98 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v54);
  }
  result = v96[0];
  v56 = (void *)(v96[0] - 12);
  if ( (uint32_t *)(v96[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v96[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v56)), (int)0);
  }
  return result;
}

