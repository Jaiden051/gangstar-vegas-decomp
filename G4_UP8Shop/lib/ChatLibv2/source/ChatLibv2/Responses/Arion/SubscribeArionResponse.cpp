// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd774c):
//   F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/SubscribeArionResponse.cpp
// Referenced by 2 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::SubscribeArionResponse::Execute  (binary VA: 0x1258870)
// Original: chatv2::Responses::SubscribeArionResponse::Execute
// ----------------------------------------------------------------------------
int chatv2::Responses::SubscribeArionResponse::Execute(chatv2::Responses::SubscribeArionResponse::Self *self)
{
  chatv2::Responses::SubscribeArionResponse::Self *v1;
  void *v2;
  void *v3;
  int v4;
  int v5;
  int result;
  volatile int32_t *v7;
  volatile int32_t *v8;
  typedef int _g4_t_v9;
  typedef char *_g4_t_v10;
  typedef char *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef char *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[3];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef char _g4_t_v19[4];
  typedef volatile int32_t *_g4_t_v20;
  typedef chatv2::Responses::SubscribeArionResponse::Self **_g4_t_v21;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v10)) > _g4_s1 ? (52u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v11)) > _g4_s2 ? (56u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v12)) > _g4_s3 ? (60u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v13)) > _g4_s4 ? (64u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v14)) > _g4_s5 ? (80u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v15)) > _g4_s6 ? (84u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v16)) > _g4_s7 ? (96u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v17)) > _g4_s8 ? (100u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v18)) > _g4_s9 ? (104u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v19)) > _g4_s10 ? (108u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v20)) > _g4_s11 ? (112u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (124u + sizeof(_g4_t_v21)) > _g4_s12 ? (124u + sizeof(_g4_t_v21)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 80u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 84u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 96u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 100u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 104u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 108u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 112u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 124u);

  v21 = &self;
  v1 = self;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), " Subscribe info arion response execute\n", (int)(uintptr_t)(&v14) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "ChatLib", (int)(uintptr_t)(&v14));
  chatv2::Utils::Log(
    3,
    0,
    &v16,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/SubscribeArionResponse.cpp",
    25,
    v15);
  v2 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v15[0] - 12);
  if ( (uint32_t *)(v15[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = *((uint32_t *)v1 + 3);
  v13 = (char *)v1 + 24;
  v12 = (char *)v1 + 20;
  v11 = (char *)v1 + 28;
  v10 = (char *)v1 + 8;
  chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v17);
  v5 = v17;
  if ( v17 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v5 = v17;
  }
  v9 = v5;
  result = (int)(uintptr_t)(chatv2::Requests::ArionRequestFactory::StartChannel(v19));
  v7 = v20;
  if ( v20 != nullptr )
  {
    result = __sync_fetch_and_add(v20 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      result = G4_VCALL<int>(v7, 8, v9, v10, v11, v4, v12, v13);
      if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
        result = G4_VCALL<int>(v7, 12);
    }
  }
  v8 = v18;
  if ( v18 != nullptr )
  {
    result = __sync_fetch_and_add(v18 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      result = G4_VCALL<int>(v8, 8);
      if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
        return G4_VCALL<int>(v8, 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::SubscribeArionResponse::Parse  (binary VA: 0x1258b60)
// Original: chatv2::Responses::SubscribeArionResponse::Parse
// ----------------------------------------------------------------------------
int chatv2::Responses::SubscribeArionResponse::Parse(chatv2::Responses::SubscribeArionResponse::Self *self, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2)
{
  size_t v2;
  uint8_t *v3;
  int v4;
  int v5;
  int v6;
  char **v7;
  char *v8;
  char *v9;
  size_t v10;
  size_t v11;
  uint8_t *v12;
  int v13;
  int v14;
  int v15;
  char **v16;
  char *v17;
  char *v18;
  size_t v19;
  size_t v20;
  char v21;
  const char *v22;
  int v23;
  size_t v24;
  const char *v25;
  char v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint32_t *v32;
  int v33;
  size_t v34;
  char v35;
  void *v36;
  void *v37;
  int result;
  void *v39;
  int v40;
  int v41;
  int v42;
  uint32_t *v43;
  int v44;
  size_t v45;
  char v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef char _g4_t_v49;
  typedef char _g4_t_v50;
  typedef size_t _g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef const char *_g4_t_v53;
  typedef const char *_g4_t_v54;
  typedef const char *_g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef const char *_g4_t_v57;
  typedef const char *_g4_t_v58;
  typedef const char *_g4_t_v59;
  typedef const char *_g4_t_v60;
  typedef const char *_g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef size_t _g4_t_v65;
  typedef size_t _g4_t_v66;
  typedef uint8_t *_g4_t_v67;
  typedef uint8_t *_g4_t_v68;
  typedef size_t _g4_t_v69;
  typedef int _g4_t_v70;
  typedef size_t _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef uint32_t _g4_t_v74[4];
  typedef int _g4_t_v75[3];
  typedef int _g4_t_v76[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v47)) > _g4_s0 ? (4u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v48)) > _g4_s1 ? (4u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v49)) > _g4_s2 ? (4u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v50)) > _g4_s3 ? (4u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v51)) > _g4_s4 ? (8u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v52)) > _g4_s5 ? (8u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v53)) > _g4_s6 ? (8u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v54)) > _g4_s7 ? (8u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v55)) > _g4_s8 ? (8u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v56)) > _g4_s9 ? (8u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v57)) > _g4_s10 ? (8u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v58)) > _g4_s11 ? (8u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v59)) > _g4_s12 ? (8u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v60)) > _g4_s13 ? (12u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v61)) > _g4_s14 ? (12u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v62)) > _g4_s15 ? (16u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v63)) > _g4_s16 ? (20u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v64)) > _g4_s17 ? (24u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v65)) > _g4_s18 ? (28u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v66)) > _g4_s19 ? (28u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v67)) > _g4_s20 ? (32u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v68)) > _g4_s21 ? (32u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v69)) > _g4_s22 ? (32u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v70)) > _g4_s23 ? (32u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v71)) > _g4_s24 ? (32u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v72)) > _g4_s25 ? (32u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v73)) > _g4_s26 ? (48u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v74)) > _g4_s27 ? (52u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v75)) > _g4_s28 ? (68u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v76)) > _g4_s29 ? (80u + sizeof(_g4_t_v76)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 8u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 32u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 52u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 68u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 80u);

  v67 = (uint8_t *)chatv2::Responses::CMD_URL;
  if ( chatv2::Responses::CMD_URL == 0 )
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
  if ( *v67 != 0 )
  {
    v3 = v67;
    do
      ++v3;
    while ( *v3 != 0 );
    v2 = v3 - v67;
  }
  v4 = *(uint32_t *)a2;
  v5 = *(uint32_t *)a2 + 32 * *((uint32_t *)a2 + 1);
  if ( *(uint32_t *)a2 == v5 )
    goto LABEL_93;
  while ( 1 )
  {
    if ( *(uint32_t *)(v4 + 4) == v2 )
    {
      v47 = v5;
      v6 = memcmp(*(const void **)v4, v67, v2);
      v5 = v47;
      if ( v6 == 0 )
        break;
    }
    v4 += 32;
    if ( v4 == v5 )
      goto LABEL_93;
  }
  if ( v4 == 0 )
  {
LABEL_93:
    v7 = (char **)&g4_rapidjson_NullValue;
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
    v7 = (char **)(v4 + 16);
  }
  v8 = v7[3];
  v63 = (uint32_t *)((char *)self + 20);
  if ( v8 != nullptr && ((unsigned int)(uintptr_t)(v8) & 0x100000) != 0 )
  {
    v9 = *v7;
    v10 = strlen(v9);
    g4_std_compat::string_assign((int)(uintptr_t)(v63), v9, v10);
  }
  v68 = (uint8_t *)chatv2::Responses::LISTEN_URL;
  if ( chatv2::Responses::LISTEN_URL == 0 )
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
  v11 = 0;
  if ( *v68 != 0 )
  {
    v12 = v68;
    do
      ++v12;
    while ( *v12 != 0 );
    v11 = v12 - v68;
  }
  v13 = *(uint32_t *)a2;
  v14 = *(uint32_t *)a2 + 32 * *((uint32_t *)a2 + 1);
  if ( *(uint32_t *)a2 == v14 )
    goto LABEL_90;
  while ( 1 )
  {
    if ( *(uint32_t *)(v13 + 4) == v11 )
    {
      v48 = v14;
      v15 = memcmp(*(const void **)v13, v68, v11);
      v14 = v48;
      if ( v15 == 0 )
        break;
    }
    v13 += 32;
    if ( v13 == v14 )
      goto LABEL_90;
  }
  if ( v13 == 0 )
  {
LABEL_90:
    v16 = (char **)&g4_rapidjson_NullValue;
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
    v16 = (char **)(v13 + 16);
  }
  v17 = v16[3];
  v62 = (uint32_t *)((char *)self + 24);
  if ( v17 != nullptr && ((unsigned int)(uintptr_t)(v17) & 0x100000) != 0 )
  {
    v18 = *v16;
    v19 = strlen(v18);
    g4_std_compat::string_assign((int)(uintptr_t)(v62), v18, v19);
  }
  v20 = 0;
  v75[0] = (int)(uintptr_t)(&unk_213B814);
  sub_1939D80((int)(uintptr_t)(v75), 0x80u, 0);
  v21 = aSubscribeArion_0 /* " Subscribe arion response, command URL: {0}, ..." */[0];
  v64 = 0;
  v22 = " Subscribe arion response, command URL: {0}, listen URL: {1}\n";
  while ( 1 )
  {
    v25 = v22 + 1;
    if ( v21 != 123 )
    {
      v23 = v75[0];
      v24 = v20 + 1;
      if ( v20 + 1 > *(uint32_t *)(v75[0] - 12) )
      {
        v50 = v21;
        sub_1939D80((int)(uintptr_t)(v75), v20 + 65, 0);
        v23 = v75[0];
        v24 = v20 + 1;
        v21 = v50;
      }
      if ( *(int *)(v23 - 4) >= 0 )
      {
        v49 = v21;
        v51 = v24;
        sub_19397C0(v75);
        v23 = v75[0];
        v24 = v51;
        v21 = v49;
      }
      *(uint8_t *)(v23 + v20) = v21;
      v20 = v24;
      v22 = v25;
      goto LABEL_43;
    }
    v26 = v22[1];
    if ( v26 == 123 )
    {
      v40 = v75[0];
      if ( v20 + 2 > *(uint32_t *)(v75[0] - 12) )
      {
        v59 = v22;
        sub_1939D80((int)(uintptr_t)(v75), v20 + 66, 0);
        v40 = v75[0];
        v22 = v59;
      }
      v71 = v20 + 1;
      if ( *(int *)(v40 - 4) >= 0 )
      {
        v54 = v22;
        sub_19397C0(v75);
        v40 = v75[0];
        v22 = v54;
      }
      *(uint8_t *)(v40 + v20) = 123;
      v41 = v75[0];
      if ( *(int *)(v75[0] - 4) >= 0 )
      {
        v55 = v22;
        sub_19397C0(v75);
        v41 = v75[0];
        v22 = v55;
      }
      v22 += 2;
      v20 += 2;
      *(uint8_t *)(v41 + v71) = 123;
      goto LABEL_43;
    }
    if ( v26 == 0 )
      goto LABEL_68;
    v69 = v20;
    v27 = 1;
    v28 = 0;
    while ( 1 )
    {
      v26 = *v25;
      if ( (uint8_t)(*v25 - 48) > 9u )
        break;
      v29 = v27 * v28;
      ++v25;
      v27 *= 10;
      v28 = v29 + v26 - 48;
      if ( *v25 == 0 )
      {
        v30 = v28;
        v26 = 0;
        v20 = v69;
        goto LABEL_51;
      }
    }
    v30 = v28;
    v20 = v69;
    if ( v27 == 1 )
LABEL_68:
      v30 = v64++;
    if ( v26 == 58 )
    {
      v26 = v25[1];
      if ( v26 == 120 || (v22 = v25 + 2, v26 == 88) )
      {
        v26 = v25[2];
        v22 = v25 + 3;
      }
    }
    else
    {
LABEL_51:
      v22 = v25 + 1;
    }
    if ( v26 != 125 )
      break;
    if ( v30 != 0 )
    {
      if ( v30 == 1 )
      {
        v72 = *(uint32_t *)(*v62 - 12);
        if ( v20 + v72 > *(uint32_t *)(v75[0] - 12) )
        {
          v57 = v22;
          sub_1939D80((int)(uintptr_t)(v75), v20 + v72 + 64, 0);
          v22 = v57;
          v72 = *(uint32_t *)(*((uint32_t *)self + 6) - 12);
        }
        if ( v72 != 0 )
        {
          v42 = 0;
          v61 = v22;
          v66 = v20;
          v43 = (uint32_t *)((char *)self + 24);
          do
          {
            v44 = v75[0];
            v45 = v42 + v66;
            if ( *(int *)(v75[0] - 4) >= 0 )
            {
              v56 = v43;
              sub_19397C0(v75);
              v44 = v75[0];
              v43 = v56;
            }
            v46 = *(uint8_t *)(*v43 + v42++);
            *(uint8_t *)(v44 + v45) = v46;
          }
          while ( v42 != v72 );
          v22 = v61;
          v20 = v42 + v66;
          goto LABEL_62;
        }
      }
      else
      {
        v53 = v22;
        sub_1939D80((int)(uintptr_t)(v75), v20, 0);
        v22 = v53;
      }
LABEL_43:
      v21 = *v22;
      if ( *v22 == 0 )
        goto LABEL_63;
    }
    else
    {
      v70 = *(uint32_t *)(*v63 - 12);
      if ( v20 + v70 > *(uint32_t *)(v75[0] - 12) )
      {
        v58 = v22;
        sub_1939D80((int)(uintptr_t)(v75), v20 + v70 + 64, 0);
        v22 = v58;
        v70 = *(uint32_t *)(*((uint32_t *)self + 5) - 12);
      }
      if ( v70 == 0 )
        goto LABEL_43;
      v31 = 0;
      v60 = v22;
      v65 = v20;
      v32 = (uint32_t *)((char *)self + 20);
      do
      {
        v33 = v75[0];
        v34 = v31 + v65;
        if ( *(int *)(v75[0] - 4) >= 0 )
        {
          v52 = v32;
          sub_19397C0(v75);
          v33 = v75[0];
          v32 = v52;
        }
        v35 = *(uint8_t *)(*v32 + v31++);
        *(uint8_t *)(v33 + v34) = v35;
      }
      while ( v31 != v70 );
      v22 = v60;
      v20 = v31 + v65;
LABEL_62:
      v21 = *v22;
      if ( *v22 == 0 )
        goto LABEL_63;
    }
  }
  sub_1939D80((int)(uintptr_t)(v75), v20, 0);
LABEL_63:
  sub_1939D80((int)(uintptr_t)(v75), v20, 0);
  g4_std::string::construct_copy(v74, v75);
  v36 = (void *)(v75[0] - 12);
  if ( (uint32_t *)(v75[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v75[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v36);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v76), "ChatLib", (int)(uintptr_t)(&v73));
  chatv2::Utils::Log(
    3,
    0,
    v76,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/SubscribeArionResponse.cpp",
    43,
    v74);
  v37 = (void *)(v76[0] - 12);
  if ( (uint32_t *)(v76[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v76[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v37);
  }
  result = v74[0];
  v39 = (void *)(v74[0] - 12);
  if ( (uint32_t *)(v74[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v74[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v39); return 0; }
  }
  return result;
}

