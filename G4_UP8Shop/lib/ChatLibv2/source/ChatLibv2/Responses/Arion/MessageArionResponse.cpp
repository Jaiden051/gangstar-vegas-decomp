// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd7564):
//   F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/MessageArionResponse.cpp
// Referenced by 2 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::MessageArionResponse::Execute  (binary VA: 0x1254bc0)
// Original: chatv2::Responses::MessageArionResponse::Execute
// ----------------------------------------------------------------------------
int chatv2::Responses::MessageArionResponse::Execute(chatv2::Responses::MessageArionResponse::Self *self)
{
  void *v1;
  void *v2;
  int v3;
  uint8_t *untyped_deleter;
  chatv2::Responses::ClientResponse::Self *v5;
  int User;
  int v7;
  int v8;
  int v9;
  int v10;
  void (*v11)(int, chatv2::Responses::ClientResponse::Self **);
  volatile int32_t *v12;
  int result;
  int v14;
  int v15;
  typedef char *_g4_t_v16;
  typedef uint8_t *_g4_t_v17;
  typedef int _g4_t_Credential;
  typedef int _g4_t_Nickname;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_AvatarLink;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[2];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef chatv2::Responses::ClientResponse::Self *_g4_t_v28;
  typedef volatile int32_t *_g4_t_v29;
  typedef int (**_g4_t_v30)(std::exception *);
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v17)) > _g4_s1 ? (48u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_Credential)) > _g4_s2 ? (48u + sizeof(_g4_t_Credential)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_Nickname)) > _g4_s3 ? (48u + sizeof(_g4_t_Nickname)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v20)) > _g4_s4 ? (48u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v21)) > _g4_s5 ? (48u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_AvatarLink)) > _g4_s6 ? (64u + sizeof(_g4_t_AvatarLink)) : _g4_s6,
    _g4_s8 = (79u + sizeof(_g4_t_v23)) > _g4_s7 ? (79u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v24)) > _g4_s8 ? (80u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v25)) > _g4_s9 ? (84u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v26)) > _g4_s10 ? (92u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v27)) > _g4_s11 ? (96u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v28)) > _g4_s12 ? (100u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v29)) > _g4_s13 ? (104u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v30)) > _g4_s14 ? (108u + sizeof(_g4_t_v30)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_Credential &Credential = *reinterpret_cast<_g4_t_Credential *>(_g4_sf + 48u);
  _g4_t_Nickname &Nickname = *reinterpret_cast<_g4_t_Nickname *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_AvatarLink &AvatarLink = *reinterpret_cast<_g4_t_AvatarLink *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 79u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 108u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), " Message arion response execute\n", (int)(uintptr_t)(&v24));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "ChatLib", (int)(uintptr_t)(&v23));
  chatv2::Utils::Log(
    3,
    0,
    &v26,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/MessageArionResponse.cpp",
    73,
    v25);
  v1 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v24 + 2;
    g4_std::string::Rep::M_destroy(v1);
  }
  v2 = (void *)(v25[0] - 12);
  if ( (uint32_t *)(v25[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v24 + 3;
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = opNew(0x38u);
  *(uint32_t *)(v3 + 4) = 1;
  *(uint32_t *)(v3 + 8) = 1;
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_2092388);
  *(uint32_t *)(v3 + 12) = 0;
  *(uint8_t *)(v3 + 16) = 0;
  untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v3);
  v5 = (chatv2::Responses::ClientResponse::Self *)(untyped_deleter + 4);
  if ( untyped_deleter != (uint8_t *)-4 )
  {
    v17 = untyped_deleter;
    chatv2::Responses::ClientResponse::ClientResponse(untyped_deleter + 4, 0, (char *)self + 8);
    untyped_deleter = v17;
  }
  *untyped_deleter = 1;
  __sync_add_and_fetch((volatile int32_t *)(v3 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v3, 8, v16);
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v3, 12);
  }
  if ( v5 != nullptr )
  {
    chatv2::Responses::ClientResponse::SetMessage(v5, (char *)self + 28);
    chatv2::Responses::ClientResponse::SetTime(v5, (char *)self + 24);
    chatv2::Responses::ClientResponse::SetMessageID(v5, (char *)self + 20);
    Credential = (int)(uintptr_t)(chatv2::Core::ArionUser::GetCredential((chatv2::Responses::MessageArionResponse::Self *)((char *)self + 32)));
    User = (int)(uintptr_t)(chatv2::Responses::ClientResponse::GetUser(v5));
    chatv2::Core::ArionUser::SetCredential(User, Credential);
    Nickname = (int)(uintptr_t)(chatv2::Core::ArionUser::GetNickname((chatv2::Responses::MessageArionResponse::Self *)((char *)self + 32)));
    v7 = (int)(uintptr_t)(chatv2::Responses::ClientResponse::GetUser(v5));
    chatv2::Core::ArionUser::SetNickname(v7, Nickname);
    AvatarLink = (int)(uintptr_t)(chatv2::Core::ArionUser::GetAvatarLink((chatv2::Responses::MessageArionResponse::Self *)((char *)self + 32)));
  }
  else
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
    chatv2::Responses::ClientResponse::SetMessage(0, (char *)self + 28);
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
    chatv2::Responses::ClientResponse::SetTime(0, (char *)self + 24);
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
    chatv2::Responses::ClientResponse::SetMessageID(0, (char *)self + 20);
    v20 = (int)(uintptr_t)(chatv2::Core::ArionUser::GetCredential((chatv2::Responses::MessageArionResponse::Self *)((char *)self + 32)));
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
    v14 = (int)(uintptr_t)(chatv2::Responses::ClientResponse::GetUser(nullptr));
    chatv2::Core::ArionUser::SetCredential(v14, v20);
    v21 = (int)(uintptr_t)(chatv2::Core::ArionUser::GetNickname((chatv2::Responses::MessageArionResponse::Self *)((char *)self + 32)));
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
    v15 = (int)(uintptr_t)(chatv2::Responses::ClientResponse::GetUser(nullptr));
    chatv2::Core::ArionUser::SetNickname(v15, v21);
    AvatarLink = (int)(uintptr_t)(chatv2::Core::ArionUser::GetAvatarLink((chatv2::Responses::MessageArionResponse::Self *)((char *)self + 32)));
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
  }
  v8 = (int)(uintptr_t)(chatv2::Responses::ClientResponse::GetUser(v5));
  chatv2::Core::ArionUser::SetAvatarLink(v8, AvatarLink);
  if ( *(uint32_t *)(*((uint32_t *)self + 4) + 36) != 0
    && boost::function1<void,boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::dummy::nonnull != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)(v3 + 4), 1);
    v9 = *((uint32_t *)self + 4);
    v10 = *(uint32_t *)(v9 + 36);
    if ( v10 == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "call to empty boost::function", (int)(uintptr_t)(&v24) + 1);
      sub_19042E0(&v30, &v27);
      g4_std::string::Destroy(&v27);
      v30 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495A8));
      std::terminate();
    }
    v28 = v5;
    v11 = *(void (**)(int, chatv2::Responses::ClientResponse::Self **))((v10 & 0xFFFFFFFE) + 4);
    v29 = (volatile int32_t *)v3;
    __sync_add_and_fetch((volatile int32_t *)(v3 + 4), 1);
    v11(v9 + 40, &v28);
    v12 = v29;
    if ( v29 != nullptr && __sync_fetch_and_add(v29 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v12, 8);
      if ( __sync_fetch_and_add(v12 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v12, 12);
    }
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v3, 8);
      if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 8), 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v3, 12);
    }
  }
  result = __sync_fetch_and_add((volatile int32_t *)(v3 + 4), 0xFFFFFFFF);
  if ( result == 1 )
  {
    result = G4_VCALL<int>(v3, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 8), 0xFFFFFFFF) == 1 )
      return G4_VCALL<int>(v3, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::MessageArionResponse::Parse  (binary VA: 0x12551e0)
// Original: chatv2::Responses::MessageArionResponse::Parse
// ----------------------------------------------------------------------------
int chatv2::Responses::MessageArionResponse::Parse(chatv2::Responses::MessageArionResponse::Self *self, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2)
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
  uint8_t *v21;
  int v22;
  int v23;
  int v24;
  char *v25;
  char *v26;
  size_t v27;
  size_t v28;
  uint8_t *v29;
  int v30;
  int v31;
  int v32;
  size_t v33;
  char v34;
  const char *v35;
  int v36;
  size_t v37;
  const char *v38;
  char v39;
  int v40;
  int v41;
  int v42;
  int v43;
  void *v44;
  void *v45;
  void *v46;
  void *v47;
  void *v48;
  int result;
  void *v50;
  int v51;
  int v52;
  int v53;
  int v54;
  size_t v55;
  char v56;
  int v57;
  int v58;
  size_t v59;
  char v60;
  int v61;
  uint32_t *v62;
  int v63;
  size_t v64;
  char v65;
  int v66;
  uint32_t *v67;
  int v68;
  size_t v69;
  char v70;
  int v71;
  uint32_t *v72;
  int v73;
  size_t v74;
  char v75;
  int v76;
  int v77;
  size_t v78;
  char v79;
  size_t v80;
  uint8_t *v81;
  int v82;
  int v83;
  int v84;
  char **v85;
  char *v86;
  char *v87;
  size_t v88;
  size_t v89;
  uint8_t *v90;
  int v91;
  int v92;
  int v93;
  char **v94;
  char *v95;
  char *v96;
  size_t v97;
  size_t v98;
  uint8_t *v99;
  int v100;
  int v101;
  int v102;
  uint32_t *v103;
  int v104;
  char *v105;
  size_t v106;
  typedef size_t _g4_t_v107;
  typedef uint32_t *_g4_t_v108;
  typedef uint32_t *_g4_t_v109;
  typedef uint32_t *_g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef char _g4_t_v115;
  typedef const char *_g4_t_v116;
  typedef char _g4_t_v117;
  typedef const char *_g4_t_v118;
  typedef const char *_g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef const char *_g4_t_v123;
  typedef const char *_g4_t_v124;
  typedef const char *_g4_t_v125;
  typedef const char *_g4_t_v126;
  typedef const char *_g4_t_v127;
  typedef const char *_g4_t_v128;
  typedef const char *_g4_t_v129;
  typedef const char *_g4_t_v130;
  typedef const char *_g4_t_v131;
  typedef const char *_g4_t_v132;
  typedef const char *_g4_t_v133;
  typedef const char *_g4_t_v134;
  typedef const char *_g4_t_v135;
  typedef uint32_t *_g4_t_v136;
  typedef uint32_t *_g4_t_v137;
  typedef uint32_t *_g4_t_v138;
  typedef char **_g4_t_v139;
  typedef size_t _g4_t_v140;
  typedef size_t _g4_t_v141;
  typedef size_t _g4_t_v142;
  typedef size_t _g4_t_v143;
  typedef size_t _g4_t_v144;
  typedef size_t _g4_t_v145;
  typedef int *_g4_t_v146;
  typedef int _g4_t_v147;
  typedef uint8_t *_g4_t_v148;
  typedef uint8_t *_g4_t_v149;
  typedef uint8_t *_g4_t_v150;
  typedef uint8_t *_g4_t_v151;
  typedef size_t _g4_t_v152;
  typedef size_t _g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef uint8_t *_g4_t_v160;
  typedef uint8_t *_g4_t_v161;
  typedef uint8_t *_g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164[4];
  typedef int _g4_t_v165[4];
  typedef int _g4_t_v166[4];
  typedef uint32_t _g4_t_v167[4];
  typedef int _g4_t_v168[3];
  typedef int _g4_t_v169[4];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v107)) > _g4_s0 ? (4u + sizeof(_g4_t_v107)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v108)) > _g4_s1 ? (4u + sizeof(_g4_t_v108)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v109)) > _g4_s2 ? (4u + sizeof(_g4_t_v109)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v110)) > _g4_s3 ? (4u + sizeof(_g4_t_v110)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v111)) > _g4_s4 ? (8u + sizeof(_g4_t_v111)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v112)) > _g4_s5 ? (8u + sizeof(_g4_t_v112)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v113)) > _g4_s6 ? (8u + sizeof(_g4_t_v113)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v114)) > _g4_s7 ? (8u + sizeof(_g4_t_v114)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v115)) > _g4_s8 ? (8u + sizeof(_g4_t_v115)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v116)) > _g4_s9 ? (8u + sizeof(_g4_t_v116)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v117)) > _g4_s10 ? (8u + sizeof(_g4_t_v117)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v118)) > _g4_s11 ? (8u + sizeof(_g4_t_v118)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v119)) > _g4_s12 ? (8u + sizeof(_g4_t_v119)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v120)) > _g4_s13 ? (8u + sizeof(_g4_t_v120)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v121)) > _g4_s14 ? (8u + sizeof(_g4_t_v121)) : _g4_s14,
    _g4_s16 = (8u + sizeof(_g4_t_v122)) > _g4_s15 ? (8u + sizeof(_g4_t_v122)) : _g4_s15,
    _g4_s17 = (8u + sizeof(_g4_t_v123)) > _g4_s16 ? (8u + sizeof(_g4_t_v123)) : _g4_s16,
    _g4_s18 = (8u + sizeof(_g4_t_v124)) > _g4_s17 ? (8u + sizeof(_g4_t_v124)) : _g4_s17,
    _g4_s19 = (8u + sizeof(_g4_t_v125)) > _g4_s18 ? (8u + sizeof(_g4_t_v125)) : _g4_s18,
    _g4_s20 = (8u + sizeof(_g4_t_v126)) > _g4_s19 ? (8u + sizeof(_g4_t_v126)) : _g4_s19,
    _g4_s21 = (8u + sizeof(_g4_t_v127)) > _g4_s20 ? (8u + sizeof(_g4_t_v127)) : _g4_s20,
    _g4_s22 = (8u + sizeof(_g4_t_v128)) > _g4_s21 ? (8u + sizeof(_g4_t_v128)) : _g4_s21,
    _g4_s23 = (8u + sizeof(_g4_t_v129)) > _g4_s22 ? (8u + sizeof(_g4_t_v129)) : _g4_s22,
    _g4_s24 = (12u + sizeof(_g4_t_v130)) > _g4_s23 ? (12u + sizeof(_g4_t_v130)) : _g4_s23,
    _g4_s25 = (12u + sizeof(_g4_t_v131)) > _g4_s24 ? (12u + sizeof(_g4_t_v131)) : _g4_s24,
    _g4_s26 = (12u + sizeof(_g4_t_v132)) > _g4_s25 ? (12u + sizeof(_g4_t_v132)) : _g4_s25,
    _g4_s27 = (12u + sizeof(_g4_t_v133)) > _g4_s26 ? (12u + sizeof(_g4_t_v133)) : _g4_s26,
    _g4_s28 = (12u + sizeof(_g4_t_v134)) > _g4_s27 ? (12u + sizeof(_g4_t_v134)) : _g4_s27,
    _g4_s29 = (12u + sizeof(_g4_t_v135)) > _g4_s28 ? (12u + sizeof(_g4_t_v135)) : _g4_s28,
    _g4_s30 = (16u + sizeof(_g4_t_v136)) > _g4_s29 ? (16u + sizeof(_g4_t_v136)) : _g4_s29,
    _g4_s31 = (20u + sizeof(_g4_t_v137)) > _g4_s30 ? (20u + sizeof(_g4_t_v137)) : _g4_s30,
    _g4_s32 = (24u + sizeof(_g4_t_v138)) > _g4_s31 ? (24u + sizeof(_g4_t_v138)) : _g4_s31,
    _g4_s33 = (28u + sizeof(_g4_t_v139)) > _g4_s32 ? (28u + sizeof(_g4_t_v139)) : _g4_s32,
    _g4_s34 = (28u + sizeof(_g4_t_v140)) > _g4_s33 ? (28u + sizeof(_g4_t_v140)) : _g4_s33,
    _g4_s35 = (28u + sizeof(_g4_t_v141)) > _g4_s34 ? (28u + sizeof(_g4_t_v141)) : _g4_s34,
    _g4_s36 = (28u + sizeof(_g4_t_v142)) > _g4_s35 ? (28u + sizeof(_g4_t_v142)) : _g4_s35,
    _g4_s37 = (28u + sizeof(_g4_t_v143)) > _g4_s36 ? (28u + sizeof(_g4_t_v143)) : _g4_s36,
    _g4_s38 = (28u + sizeof(_g4_t_v144)) > _g4_s37 ? (28u + sizeof(_g4_t_v144)) : _g4_s37,
    _g4_s39 = (28u + sizeof(_g4_t_v145)) > _g4_s38 ? (28u + sizeof(_g4_t_v145)) : _g4_s38,
    _g4_s40 = (32u + sizeof(_g4_t_v146)) > _g4_s39 ? (32u + sizeof(_g4_t_v146)) : _g4_s39,
    _g4_s41 = (32u + sizeof(_g4_t_v147)) > _g4_s40 ? (32u + sizeof(_g4_t_v147)) : _g4_s40,
    _g4_s42 = (36u + sizeof(_g4_t_v148)) > _g4_s41 ? (36u + sizeof(_g4_t_v148)) : _g4_s41,
    _g4_s43 = (36u + sizeof(_g4_t_v149)) > _g4_s42 ? (36u + sizeof(_g4_t_v149)) : _g4_s42,
    _g4_s44 = (36u + sizeof(_g4_t_v150)) > _g4_s43 ? (36u + sizeof(_g4_t_v150)) : _g4_s43,
    _g4_s45 = (36u + sizeof(_g4_t_v151)) > _g4_s44 ? (36u + sizeof(_g4_t_v151)) : _g4_s44,
    _g4_s46 = (36u + sizeof(_g4_t_v152)) > _g4_s45 ? (36u + sizeof(_g4_t_v152)) : _g4_s45,
    _g4_s47 = (36u + sizeof(_g4_t_v153)) > _g4_s46 ? (36u + sizeof(_g4_t_v153)) : _g4_s46,
    _g4_s48 = (36u + sizeof(_g4_t_v154)) > _g4_s47 ? (36u + sizeof(_g4_t_v154)) : _g4_s47,
    _g4_s49 = (36u + sizeof(_g4_t_v155)) > _g4_s48 ? (36u + sizeof(_g4_t_v155)) : _g4_s48,
    _g4_s50 = (36u + sizeof(_g4_t_v156)) > _g4_s49 ? (36u + sizeof(_g4_t_v156)) : _g4_s49,
    _g4_s51 = (36u + sizeof(_g4_t_v157)) > _g4_s50 ? (36u + sizeof(_g4_t_v157)) : _g4_s50,
    _g4_s52 = (36u + sizeof(_g4_t_v158)) > _g4_s51 ? (36u + sizeof(_g4_t_v158)) : _g4_s51,
    _g4_s53 = (36u + sizeof(_g4_t_v159)) > _g4_s52 ? (36u + sizeof(_g4_t_v159)) : _g4_s52,
    _g4_s54 = (36u + sizeof(_g4_t_v160)) > _g4_s53 ? (36u + sizeof(_g4_t_v160)) : _g4_s53,
    _g4_s55 = (36u + sizeof(_g4_t_v161)) > _g4_s54 ? (36u + sizeof(_g4_t_v161)) : _g4_s54,
    _g4_s56 = (36u + sizeof(_g4_t_v162)) > _g4_s55 ? (36u + sizeof(_g4_t_v162)) : _g4_s55,
    _g4_s57 = (49u + sizeof(_g4_t_v163)) > _g4_s56 ? (49u + sizeof(_g4_t_v163)) : _g4_s56,
    _g4_s58 = (56u + sizeof(_g4_t_v164)) > _g4_s57 ? (56u + sizeof(_g4_t_v164)) : _g4_s57,
    _g4_s59 = (72u + sizeof(_g4_t_v165)) > _g4_s58 ? (72u + sizeof(_g4_t_v165)) : _g4_s58,
    _g4_s60 = (88u + sizeof(_g4_t_v166)) > _g4_s59 ? (88u + sizeof(_g4_t_v166)) : _g4_s59,
    _g4_s61 = (104u + sizeof(_g4_t_v167)) > _g4_s60 ? (104u + sizeof(_g4_t_v167)) : _g4_s60,
    _g4_s62 = (120u + sizeof(_g4_t_v168)) > _g4_s61 ? (120u + sizeof(_g4_t_v168)) : _g4_s61,
    _g4_s63 = (132u + sizeof(_g4_t_v169)) > _g4_s62 ? (132u + sizeof(_g4_t_v169)) : _g4_s62
  };
  alignas(16) uint8_t _g4_sf[_g4_s63];
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 4u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 4u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 4u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 4u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 8u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 8u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 8u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 8u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 8u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 8u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 8u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 8u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 8u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 8u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 8u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 8u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 8u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 8u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 8u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 8u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 8u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 8u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 8u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 12u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 12u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 12u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 12u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 12u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 12u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 16u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 20u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 24u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 28u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 28u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 28u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 28u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 28u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 28u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 28u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 32u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 32u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 36u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 36u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 36u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 36u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 36u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 36u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 36u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 36u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 36u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 36u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 36u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 36u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 36u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 36u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 36u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 49u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 56u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 72u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 88u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 104u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 120u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 132u);

  v148 = (uint8_t *)chatv2::Responses::Messages::ID;
  if ( chatv2::Responses::Messages::ID == 0 )
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
  if ( *v148 != 0 )
  {
    v3 = v148;
    do
      ++v3;
    while ( *v3 != 0 );
    v2 = v3 - v148;
  }
  v4 = *(uint32_t *)a2;
  v5 = *(uint32_t *)a2 + 32 * *((uint32_t *)a2 + 1);
  if ( *(uint32_t *)a2 == v5 )
    goto LABEL_119;
  while ( 1 )
  {
    if ( *(uint32_t *)(v4 + 4) == v2 )
    {
      v111 = v5;
      v6 = memcmp(*(const void **)v4, v148, v2);
      v5 = v111;
      if ( v6 == 0 )
        break;
    }
    v4 += 32;
    if ( v4 == v5 )
      goto LABEL_119;
  }
  if ( v4 == 0 )
  {
LABEL_119:
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
  v138 = (uint32_t *)((char *)self + 20);
  v164[0] = (int)(uintptr_t)(&unk_213B814);
  v165[0] = (int)(uintptr_t)(&unk_213B814);
  v166[0] = (int)(uintptr_t)(&unk_213B814);
  v8 = v7[3];
  if ( v8 != nullptr && ((unsigned int)(uintptr_t)(v8) & 0x100000) != 0 )
  {
    v9 = *v7;
    v10 = strlen(v9);
    g4_std_compat::string_assign((int)(uintptr_t)(v138), v9, v10);
  }
  v149 = (uint8_t *)chatv2::Responses::Messages::SENT;
  if ( chatv2::Responses::Messages::SENT == 0 )
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
  if ( *v149 != 0 )
  {
    v12 = v149;
    do
      ++v12;
    while ( *v12 != 0 );
    v11 = v12 - v149;
  }
  v13 = *(uint32_t *)a2;
  v14 = *(uint32_t *)a2 + 32 * *((uint32_t *)a2 + 1);
  if ( *(uint32_t *)a2 == v14 )
    goto LABEL_116;
  while ( 1 )
  {
    if ( *(uint32_t *)(v13 + 4) == v11 )
    {
      v112 = v14;
      v15 = memcmp(*(const void **)v13, v149, v11);
      v14 = v112;
      if ( v15 == 0 )
        break;
    }
    v13 += 32;
    if ( v13 == v14 )
      goto LABEL_116;
  }
  if ( v13 == 0 )
  {
LABEL_116:
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
  v137 = (uint32_t *)((char *)self + 24);
  if ( v17 != nullptr && ((unsigned int)(uintptr_t)(v17) & 0x100000) != 0 )
  {
    v18 = *v16;
    v19 = strlen(v18);
    g4_std_compat::string_assign((int)(uintptr_t)(v137), v18, v19);
  }
  v150 = (uint8_t *)chatv2::Responses::Messages::MSG;
  if ( chatv2::Responses::Messages::MSG == 0 )
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
  v20 = 0;
  if ( *v150 != 0 )
  {
    v21 = v150;
    do
      ++v21;
    while ( *v21 != 0 );
    v20 = v21 - v150;
  }
  v22 = *(uint32_t *)a2;
  v23 = *(uint32_t *)a2 + 32 * *((uint32_t *)a2 + 1);
  if ( *(uint32_t *)a2 == v23 )
    goto LABEL_113;
  while ( 1 )
  {
    if ( *(uint32_t *)(v22 + 4) == v20 )
    {
      v113 = v23;
      v24 = memcmp(*(const void **)v22, v150, v20);
      v23 = v113;
      if ( v24 == 0 )
        break;
    }
    v22 += 32;
    if ( v22 == v23 )
      goto LABEL_113;
  }
  if ( v22 == 0 )
  {
LABEL_113:
    v139 = (char **)&g4_rapidjson_NullValue;
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
    v139 = (char **)(v22 + 16);
  }
  v136 = (uint32_t *)((char *)self + 28);
  v25 = v139[3];
  if ( v25 != nullptr && ((unsigned int)(uintptr_t)(v25) & 0x100000) != 0 )
  {
    v26 = *v139;
    v27 = strlen(*v139);
    g4_std_compat::string_assign((int)(uintptr_t)(v136), v26, v27);
  }
  v151 = (uint8_t *)chatv2::Responses::Messages::SENDER;
  if ( chatv2::Responses::Messages::SENDER == 0 )
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
  v28 = 0;
  if ( *v151 != 0 )
  {
    v29 = v151;
    do
      ++v29;
    while ( *v29 != 0 );
    v28 = v29 - v151;
  }
  v30 = *(uint32_t *)a2;
  v31 = *(uint32_t *)a2 + 32 * *((uint32_t *)a2 + 1);
  if ( *(uint32_t *)a2 == v31 )
    goto LABEL_110;
  while ( 1 )
  {
    if ( *(uint32_t *)(v30 + 4) == v28 )
    {
      v114 = v31;
      v32 = memcmp(*(const void **)v30, v151, v28);
      v31 = v114;
      if ( v32 == 0 )
        break;
    }
    v30 += 32;
    if ( v30 == v31 )
      goto LABEL_110;
  }
  if ( v30 == 0 )
  {
LABEL_110:
    v146 = (int *)&g4_rapidjson_NullValue;
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
    v146 = (int *)(v30 + 16);
  }
  if ( v146[3] == 3 )
  {
    v160 = (uint8_t *)chatv2::Responses::Messages::CREDENTIAL;
    if ( chatv2::Responses::Messages::CREDENTIAL == 0 )
    {
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        1018,
        "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(c"
        "onst Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericVa"
        "lue<Encoding, Allocator>::Ch = char]",
        "name");
      if ( v146[3] != 3 )
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          1019,
          "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember"
          "(const Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::Gener"
          "icValue<Encoding, Allocator>::Ch = char]",
          "IsObject ()");
    }
    v80 = 0;
    if ( *v160 != 0 )
    {
      v81 = v160;
      do
        ++v81;
      while ( *v81 != 0 );
      v80 = v81 - v160;
    }
    v82 = *v146;
    v83 = *v146 + 32 * v146[1];
    if ( *v146 == v83 )
      goto LABEL_224;
    while ( 1 )
    {
      if ( *(uint32_t *)(v82 + 4) == v80 )
      {
        v120 = v83;
        v84 = memcmp(*(const void **)v82, v160, v80);
        v83 = v120;
        if ( v84 == 0 )
          break;
      }
      v82 += 32;
      if ( v82 == v83 )
        goto LABEL_224;
    }
    if ( v82 == 0 )
    {
LABEL_224:
      v85 = (char **)&g4_rapidjson_NullValue;
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
      v85 = (char **)(v82 + 16);
    }
    v86 = v85[3];
    if ( v86 != nullptr && ((unsigned int)(uintptr_t)(v86) & 0x100000) != 0 )
    {
      v87 = *v85;
      v88 = strlen(v87);
      g4_std_compat::string_assign((int)(uintptr_t)(v164), v87, v88);
    }
    v161 = (uint8_t *)chatv2::Responses::Messages::NICKNAME;
    if ( chatv2::Responses::Messages::NICKNAME == 0 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        1018,
        "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(c"
        "onst Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericVa"
        "lue<Encoding, Allocator>::Ch = char]",
        "name");
    if ( v146[3] != 3 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        1019,
        "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(c"
        "onst Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericVa"
        "lue<Encoding, Allocator>::Ch = char]",
        "IsObject ()");
    v89 = 0;
    if ( *v161 != 0 )
    {
      v90 = v161;
      do
        ++v90;
      while ( *v90 != 0 );
      v89 = v90 - v161;
    }
    v91 = *v146;
    v92 = *v146 + 32 * v146[1];
    if ( *v146 == v92 )
      goto LABEL_230;
    while ( 1 )
    {
      if ( *(uint32_t *)(v91 + 4) == v89 )
      {
        v121 = v92;
        v93 = memcmp(*(const void **)v91, v161, v89);
        v92 = v121;
        if ( v93 == 0 )
          break;
      }
      v91 += 32;
      if ( v91 == v92 )
        goto LABEL_230;
    }
    if ( v91 == 0 )
    {
LABEL_230:
      v94 = (char **)&g4_rapidjson_NullValue;
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
      v94 = (char **)(v91 + 16);
    }
    v95 = v94[3];
    if ( v95 != nullptr && ((unsigned int)(uintptr_t)(v95) & 0x100000) != 0 )
    {
      v96 = *v94;
      v97 = strlen(v96);
      g4_std_compat::string_assign((int)(uintptr_t)(v165), v96, v97);
    }
    v162 = (uint8_t *)chatv2::Responses::Messages::AVATAR;
    if ( chatv2::Responses::Messages::AVATAR == 0 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        1018,
        "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(c"
        "onst Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericVa"
        "lue<Encoding, Allocator>::Ch = char]",
        "name");
    if ( v146[3] != 3 )
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        1019,
        "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(c"
        "onst Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericVa"
        "lue<Encoding, Allocator>::Ch = char]",
        "IsObject ()");
    v98 = 0;
    if ( *v162 != 0 )
    {
      v99 = v162;
      do
        ++v99;
      while ( *v99 != 0 );
      v98 = v99 - v162;
    }
    v100 = *v146;
    v101 = *v146 + 32 * v146[1];
    if ( *v146 == v101 )
      goto LABEL_227;
    while ( 1 )
    {
      if ( *(uint32_t *)(v100 + 4) == v98 )
      {
        v122 = v101;
        v102 = memcmp(*(const void **)v100, v162, v98);
        v101 = v122;
        if ( v102 == 0 )
          break;
      }
      v100 += 32;
      if ( v100 == v101 )
        goto LABEL_227;
    }
    if ( v100 == 0 )
    {
LABEL_227:
      v103 = (uint32_t *)(&g4_rapidjson_NullValue);
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
      v103 = (uint32_t *)(v100 + 16);
    }
    v104 = v103[3];
    if ( v104 != 0 && (v104 & 0x100000) != 0 )
    {
      if ( (*((uint8_t *)v139 + 14) & 0x10) == 0 )
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          775,
          "const Ch* rapidjson::GenericValue<Encoding, Allocator>::GetString() const [with Encoding = rapidjson::UTF8<>, "
          "Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator>::Ch = char]",
          "IsString ()");
      v105 = *v139;
      v106 = strlen(*v139);
      g4_std_compat::string_assign((int)(uintptr_t)(v166), v105, v106);
    }
    chatv2::Core::ArionUser::SetCredential((char *)self + 32, v164);
    chatv2::Core::ArionUser::SetNickname((char *)self + 32, v165);
    chatv2::Core::ArionUser::SetAvatarLink((char *)self + 32, v166);
  }
  v33 = 0;
  v168[0] = (int)(uintptr_t)(&unk_213B814);
  sub_1939D80((int)(uintptr_t)(v168), 0x80u, 0);
  v34 = aMessageArionRe_0 /* " Message arion response, id: {0}, sent at: {1..." */[0];
  v35 = " Message arion response, id: {0}, sent at: {1}, message: {2}, credential: {3}, nickname: {4}, avatar link: {5}\n";
  v147 = 0;
  while ( 1 )
  {
LABEL_78:
    v38 = v35 + 1;
    if ( v34 != 123 )
    {
      v36 = v168[0];
      v37 = v33 + 1;
      if ( v33 + 1 > *(uint32_t *)(v168[0] - 12) )
      {
        v117 = v34;
        sub_1939D80((int)(uintptr_t)(v168), v33 + 65, 0);
        v36 = v168[0];
        v37 = v33 + 1;
        v34 = v117;
      }
      if ( *(int *)(v36 - 4) >= 0 )
      {
        v115 = v34;
        v107 = v37;
        sub_19397C0(v168);
        v36 = v168[0];
        v37 = v107;
        v34 = v115;
      }
      *(uint8_t *)(v36 + v33) = v34;
      v33 = v37;
      v35 = v38;
      goto LABEL_77;
    }
    v39 = v35[1];
    if ( v39 != 123 )
      break;
    v51 = v168[0];
    if ( v33 + 2 > *(uint32_t *)(v168[0] - 12) )
    {
      v123 = v35;
      sub_1939D80((int)(uintptr_t)(v168), v33 + 66, 0);
      v51 = v168[0];
      v35 = v123;
    }
    v153 = v33 + 1;
    if ( *(int *)(v51 - 4) >= 0 )
    {
      v118 = v35;
      sub_19397C0(v168);
      v51 = v168[0];
      v35 = v118;
    }
    *(uint8_t *)(v51 + v33) = 123;
    v52 = v168[0];
    if ( *(int *)(v168[0] - 4) >= 0 )
    {
      v119 = v35;
      sub_19397C0(v168);
      v52 = v168[0];
      v35 = v119;
    }
    v35 += 2;
    v33 += 2;
    *(uint8_t *)(v52 + v153) = 123;
LABEL_77:
    v34 = *v35;
    if ( *v35 == 0 )
      goto LABEL_89;
  }
  if ( v39 == 0 )
    goto LABEL_97;
  v152 = v33;
  v40 = 1;
  v41 = 0;
  while ( 1 )
  {
    v39 = *v38;
    if ( (uint8_t)(*v38 - 48) > 9u )
      break;
    v42 = v40 * v41;
    ++v38;
    v40 *= 10;
    v41 = v42 + v39 - 48;
    if ( *v38 == 0 )
    {
      v43 = v41;
      v39 = 0;
      v33 = v152;
      goto LABEL_85;
    }
  }
  v43 = v41;
  v33 = v152;
  if ( v40 == 1 )
LABEL_97:
    v43 = v147++;
  if ( v39 == 58 )
  {
    v39 = v38[1];
    if ( v39 == 120 || (v35 = v38 + 2, v39 == 88) )
    {
      v39 = v38[2];
      v35 = v38 + 3;
    }
  }
  else
  {
LABEL_85:
    v35 = v38 + 1;
  }
  if ( v39 == 125 )
  {
    switch ( v43 )
    {
      case 0:
        v158 = *(uint32_t *)(*v138 - 12);
        if ( v33 + v158 > *(uint32_t *)(v168[0] - 12) )
        {
          v125 = v35;
          sub_1939D80((int)(uintptr_t)(v168), v33 + v158 + 64, 0);
          v35 = v125;
          v158 = *(uint32_t *)(*((uint32_t *)self + 5) - 12);
        }
        if ( v158 != 0 )
        {
          v71 = 0;
          v134 = v35;
          v144 = v33;
          v72 = (uint32_t *)((char *)self + 20);
          do
          {
            v73 = v168[0];
            v74 = v71 + v144;
            if ( *(int *)(v168[0] - 4) >= 0 )
            {
              v110 = v72;
              sub_19397C0(v168);
              v73 = v168[0];
              v72 = v110;
            }
            v75 = *(uint8_t *)(*v72 + v71++);
            *(uint8_t *)(v73 + v74) = v75;
          }
          while ( v71 != v158 );
          v35 = v134;
          v33 = v71 + v144;
        }
        goto LABEL_77;
      case 1:
        v157 = *(uint32_t *)(*v137 - 12);
        if ( v33 + v157 > *(uint32_t *)(v168[0] - 12) )
        {
          v126 = v35;
          sub_1939D80((int)(uintptr_t)(v168), v33 + v157 + 64, 0);
          v35 = v126;
          v157 = *(uint32_t *)(*((uint32_t *)self + 6) - 12);
        }
        if ( v157 != 0 )
        {
          v66 = 0;
          v133 = v35;
          v143 = v33;
          v67 = (uint32_t *)((char *)self + 24);
          do
          {
            v68 = v168[0];
            v69 = v66 + v143;
            if ( *(int *)(v168[0] - 4) >= 0 )
            {
              v109 = v67;
              sub_19397C0(v168);
              v68 = v168[0];
              v67 = v109;
            }
            v70 = *(uint8_t *)(*v67 + v66++);
            *(uint8_t *)(v68 + v69) = v70;
          }
          while ( v66 != v157 );
          v35 = v133;
          v33 = v66 + v143;
        }
        goto LABEL_77;
      case 2:
        v156 = *(uint32_t *)(*v136 - 12);
        if ( v33 + v156 > *(uint32_t *)(v168[0] - 12) )
        {
          v127 = v35;
          sub_1939D80((int)(uintptr_t)(v168), v33 + v156 + 64, 0);
          v35 = v127;
          v156 = *(uint32_t *)(*((uint32_t *)self + 7) - 12);
        }
        if ( v156 != 0 )
        {
          v61 = 0;
          v132 = v35;
          v142 = v33;
          v62 = (uint32_t *)((char *)self + 28);
          do
          {
            v63 = v168[0];
            v64 = v61 + v142;
            if ( *(int *)(v168[0] - 4) >= 0 )
            {
              v108 = v62;
              sub_19397C0(v168);
              v63 = v168[0];
              v62 = v108;
            }
            v65 = *(uint8_t *)(*v62 + v61++);
            *(uint8_t *)(v63 + v64) = v65;
          }
          while ( v61 != v156 );
          v35 = v132;
          v33 = v61 + v142;
        }
        goto LABEL_77;
      case 3:
        v155 = *(uint32_t *)(v164[0] - 12);
        if ( v33 + v155 > *(uint32_t *)(v168[0] - 12) )
        {
          v128 = v35;
          sub_1939D80((int)(uintptr_t)(v168), v33 + v155 + 64, 0);
          v35 = v128;
          v155 = *(uint32_t *)(v164[0] - 12);
        }
        if ( v155 != 0 )
        {
          v57 = 0;
          v131 = v35;
          v141 = v33;
          do
          {
            v58 = v168[0];
            v59 = v57 + v141;
            if ( *(int *)(v168[0] - 4) >= 0 )
            {
              sub_19397C0(v168);
              v58 = v168[0];
            }
            v60 = *(uint8_t *)(v164[0] + v57++);
            *(uint8_t *)(v58 + v59) = v60;
          }
          while ( v57 != v155 );
          v35 = v131;
          v33 = v57 + v141;
        }
        goto LABEL_77;
      case 4:
        v154 = *(uint32_t *)(v165[0] - 12);
        if ( v33 + v154 > *(uint32_t *)(v168[0] - 12) )
        {
          v129 = v35;
          sub_1939D80((int)(uintptr_t)(v168), v33 + v154 + 64, 0);
          v35 = v129;
          v154 = *(uint32_t *)(v165[0] - 12);
        }
        if ( v154 != 0 )
        {
          v53 = 0;
          v130 = v35;
          v140 = v33;
          do
          {
            v54 = v168[0];
            v55 = v53 + v140;
            if ( *(int *)(v168[0] - 4) >= 0 )
            {
              sub_19397C0(v168);
              v54 = v168[0];
            }
            v56 = *(uint8_t *)(v165[0] + v53++);
            *(uint8_t *)(v54 + v55) = v56;
          }
          while ( v53 != v154 );
          v35 = v130;
          v33 = v53 + v140;
        }
        goto LABEL_77;
      case 5:
        v159 = *(uint32_t *)(v166[0] - 12);
        if ( v33 + v159 > *(uint32_t *)(v168[0] - 12) )
        {
          v124 = v35;
          sub_1939D80((int)(uintptr_t)(v168), v33 + v159 + 64, 0);
          v35 = v124;
          v159 = *(uint32_t *)(v166[0] - 12);
        }
        if ( v159 != 0 )
        {
          v76 = 0;
          v135 = v35;
          v145 = v33;
          do
          {
            v77 = v168[0];
            v78 = v76 + v145;
            if ( *(int *)(v168[0] - 4) >= 0 )
            {
              sub_19397C0(v168);
              v77 = v168[0];
            }
            v79 = *(uint8_t *)(v166[0] + v76++);
            *(uint8_t *)(v77 + v78) = v79;
          }
          while ( v76 != v159 );
          v35 = v135;
          v33 = v76 + v145;
        }
        goto LABEL_77;
      default:
        v116 = v35;
        sub_1939D80((int)(uintptr_t)(v168), v33, 0);
        v35 = v116;
        v34 = *v116;
        if ( *v116 != 0 )
          goto LABEL_78;
        break;
    }
  }
  else
  {
    sub_1939D80((int)(uintptr_t)(v168), v33, 0);
  }
LABEL_89:
  sub_1939D80((int)(uintptr_t)(v168), v33, 0);
  g4_std::string::construct_copy(v167, v168);
  v44 = (void *)(v168[0] - 12);
  if ( (uint32_t *)(v168[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v168[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v44);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v169), "ChatLib", (int)(uintptr_t)(&v163));
  chatv2::Utils::Log(
    3,
    0,
    v169,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/MessageArionResponse.cpp",
    68,
    v167);
  v45 = (void *)(v169[0] - 12);
  if ( (uint32_t *)(v169[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v169[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v45);
  }
  v46 = (void *)(v167[0] - 12);
  if ( (uint32_t *)(v167[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v167[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v46);
  }
  v47 = (void *)(v166[0] - 12);
  if ( (uint32_t *)(v166[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v166[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v47);
  }
  v48 = (void *)(v165[0] - 12);
  if ( (uint32_t *)(v165[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v165[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v48);
  }
  result = v164[0];
  v50 = (void *)(v164[0] - 12);
  if ( (uint32_t *)(v164[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v164[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v50)), (int)0);
  }
  return result;
}

