#include "Core/Utils/DecompTypes.h"
#include "chatv2_Responses.h"

// ============================================================================
// G4_UP8Shop/lib/ChatLibv2/decompiled/chatv2_Responses.cpp
// Library: ChatLibv2 | Module: chatv2_Responses
// Binary Address Span: 0x1237490 .. 0x12734a0 (51 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1237490 (size: 94 bytes)
// Symbol:    _ZN6chatv29Responses14ClientResponseC2ENS0_16ResponseTypeEnumERKSs
// Demangled: chatv2::Responses::ClientResponse::ClientResponse(chatv2::Responses::ResponseTypeEnum,std::string const&)
// ============================================================================
// Alternative name is '_ZN6chatv29Responses14ClientResponseC1ENS0_16ResponseTypeEnumERKSs'
struct chatv2::Core::ArionUser::Self *chatv2::Responses::ClientResponse::ClientResponse(uint32_t *a1, int a2, int a3)
{
  *a1 = a2;
  g4_std::string::construct_copy(a1 + 1, a3);
  a1[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  return chatv2::Core::ArionUser::ArionUser((chatv2::Core::ArionUser::Self *)(a1 + 5));
}
// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ClientResponse::Destroy  (binary VA: 0x12374f0)
// Original: chatv2::Responses::ClientResponse::~ClientResponse
// ----------------------------------------------------------------------------
void chatv2::Responses::ClientResponse::Destroy(chatv2::Responses::ClientResponse::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  chatv2::Core::ArionUser::Destroy((chatv2::Responses::ClientResponse::Self *)((char *)self + 20));
  v1 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ClientResponse::ToString  (binary VA: 0x12375e0)
// Original: chatv2::Responses::ClientResponse::ToString
// ----------------------------------------------------------------------------
chatv2::Responses::ClientResponse::Self * chatv2::Responses::ClientResponse::ToString(chatv2::Responses::ClientResponse::Self *self, uint32_t *a2)
{
  uint32_t *v2;
  char *v3;
  void *v4;
  void *v5;
  void *v6;
  typedef size_t _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef int _g4_t_v11[4];
  typedef uint32_t _g4_t_v12[3];
  typedef uint32_t _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v11)) > _g4_s3 ? (48u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v12)) > _g4_s4 ? (64u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v13)) > _g4_s5 ? (76u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 76u);

  v2 = a2;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( *a2 != 0 )
  {
    if ( *a2 != 1 )
      goto LABEL_4;
    v8 = 5;
    v3 = "Motd ";
  }
  else
  {
    v8 = 8;
    v3 = "Message ";
  }
  g4_std_compat::string_assign((int)(uintptr_t)(self), v3, v8);
  v2 = a2;
LABEL_4:
  v10 = v2 + 2;
  v11[0] = (int)(uintptr_t)(&dword_213B814);
  v9 = v2 + 1;
  sub_1939B80(v11, *(uint32_t *)(v2[1] - 12) + 10);
  g4_std::string::append((int)(uintptr_t)(v11), " channel: ", 0xAu);
  g4_std::string::append_str(v11, v9);
  g4_std::string::construct_copy(v12, v11);
  g4_std::string::append((int)(uintptr_t)(v12), "; message: ", 0xBu);
  g4_std::string::construct_copy(v13, v12);
  g4_std::string::append_str(v13, v10);
  g4_std::string::append_str(self, v13);
  v4 = (void *)(v13[0] - 12);
  if ( (uint32_t *)(v13[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v12[0] - 12);
  if ( (uint32_t *)(v12[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v11[0] - 12);
  if ( (uint32_t *)(v11[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ClientResponse::GetType  (binary VA: 0x12377c0)
// Original: chatv2::Responses::ClientResponse::GetType
// ----------------------------------------------------------------------------
int chatv2::Responses::ClientResponse::GetType(chatv2::Responses::ClientResponse::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ClientResponse::GetChannelName  (binary VA: 0x12377d0)
// Original: chatv2::Responses::ClientResponse::GetChannelName
// ----------------------------------------------------------------------------
char * chatv2::Responses::ClientResponse::GetChannelName(chatv2::Responses::ClientResponse::Self *self)
{
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ClientResponse::SetMessage  (binary VA: 0x12377e0)
// Original: chatv2::Responses::ClientResponse::SetMessage
// ----------------------------------------------------------------------------
int chatv2::Responses::ClientResponse::SetMessage(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 8, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ClientResponse::GetMessageID  (binary VA: 0x1237810)
// Original: chatv2::Responses::ClientResponse::GetMessageID
// ----------------------------------------------------------------------------
char * chatv2::Responses::ClientResponse::GetMessageID(chatv2::Responses::ClientResponse::Self *self)
{
  return (char *)self + 16;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ClientResponse::SetMessageID  (binary VA: 0x1237820)
// Original: chatv2::Responses::ClientResponse::SetMessageID
// ----------------------------------------------------------------------------
int chatv2::Responses::ClientResponse::SetMessageID(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 16, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ClientResponse::GetMessageStr  (binary VA: 0x1237850)
// Original: chatv2::Responses::ClientResponse::GetMessageStr
// ----------------------------------------------------------------------------
char * chatv2::Responses::ClientResponse::GetMessageStr(chatv2::Responses::ClientResponse::Self *self)
{
  return (char *)self + 8;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ClientResponse::SetTime  (binary VA: 0x1237860)
// Original: chatv2::Responses::ClientResponse::SetTime
// ----------------------------------------------------------------------------
int chatv2::Responses::ClientResponse::SetTime(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 12, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ClientResponse::GetTime  (binary VA: 0x1237890)
// Original: chatv2::Responses::ClientResponse::GetTime
// ----------------------------------------------------------------------------
char * chatv2::Responses::ClientResponse::GetTime(chatv2::Responses::ClientResponse::Self *self)
{
  return (char *)self + 12;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ClientResponse::GetUser  (binary VA: 0x12378a0)
// Original: chatv2::Responses::ClientResponse::GetUser
// ----------------------------------------------------------------------------
char * chatv2::Responses::ClientResponse::GetUser(chatv2::Responses::ClientResponse::Self *self)
{
  return (char *)self + 20;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ArionResponseFactory::Destroy  (binary VA: 0x124dd30)
// Original: chatv2::Responses::ArionResponseFactory::~ArionResponseFactory
// ----------------------------------------------------------------------------
void chatv2::Responses::ArionResponseFactory::Destroy(chatv2::Responses::ArionResponseFactory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2092628);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ArionResponseFactory::IsMessageComplete  (binary VA: 0x124dd50)
// Original: chatv2::Responses::ArionResponseFactory::IsMessageComplete
// ----------------------------------------------------------------------------
int chatv2::Responses::ArionResponseFactory::IsMessageComplete()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ArionResponseFactory::CreateResponse  (binary VA: 0x124dd60)
// Original: chatv2::Responses::ArionResponseFactory::CreateResponse
// ----------------------------------------------------------------------------
void chatv2::Responses::ArionResponseFactory::CreateResponse()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ArionResponseFactory::Destroy_ea124dd70  (binary VA: 0x124dd70)
// Original: chatv2::Responses::ArionResponseFactory::~ArionResponseFactory
// ----------------------------------------------------------------------------
void chatv2::Responses::ArionResponseFactory::Destroy_ea124dd70(chatv2::Responses::ArionResponseFactory::Self *self)
{
  chatv2::Responses::ArionResponseFactory::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ArionResponseFactory::Construct  (binary VA: 0x124deb0)
// Original: chatv2::Responses::ArionResponseFactory::ArionResponseFactory
// ----------------------------------------------------------------------------
chatv2::Responses::ArionResponseFactory::Self * chatv2::Responses::ArionResponseFactory::Construct(chatv2::Responses::ArionResponseFactory::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092610);
  *((uint32_t *)self + 1) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ArionResponseFactory::SetArionExecutor  (binary VA: 0x124dee0)
// Original: chatv2::Responses::ArionResponseFactory::SetArionExecutor
// ----------------------------------------------------------------------------
chatv2::Responses::ArionResponseFactory::Self * chatv2::Responses::ArionResponseFactory::SetArionExecutor(chatv2::Responses::ArionResponseFactory::Self *self, chatv2::Core::ArionExecutor::Self *a2)
{
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ArionResponseFactory::CreateSubscribeResponse  (binary VA: 0x124def0)
// Original: chatv2::Responses::ArionResponseFactory::CreateSubscribeResponse
// ----------------------------------------------------------------------------
chatv2::Responses::SubscribeArionResponse::Self ** chatv2::Responses::ArionResponseFactory::CreateSubscribeResponse(chatv2::Responses::SubscribeArionResponse::Self **a1, int a2, int a3, int a4, int a5, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a6)
{
  void *v6;
  void *v7;
  int v8;
  uint8_t *untyped_deleter;
  chatv2::Responses::SubscribeArionResponse::Self *v10;
  typedef char *_g4_t_v12;
  typedef chatv2::Responses::SubscribeArionResponse::Self *_g4_t_v13;
  typedef chatv2::Responses::SubscribeArionResponse::Self *_g4_t_v14;
  typedef chatv2::Responses::SubscribeArionResponse::Self *_g4_t_v15;
  typedef uint8_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[3];
  typedef int _g4_t_v19[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v13)) > _g4_s1 ? (44u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v14)) > _g4_s2 ? (44u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v15)) > _g4_s3 ? (44u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v16)) > _g4_s4 ? (48u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v17)) > _g4_s5 ? (64u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v18)) > _g4_s6 ? (68u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v19)) > _g4_s7 ? (80u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), " Create subscribe response\n", (int)(uintptr_t)(&v17) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "ChatLib", (int)(uintptr_t)(&v17));
  chatv2::Utils::Log(
    3,
    0,
    v19,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/ArionResponseFactory.cpp",
    105,
    v18);
  v6 = (void *)(v19[0] - 12);
  if ( (uint32_t *)(v19[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v12 = (char *)&v17 + 2;
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v18[0] - 12);
  if ( (uint32_t *)(v18[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v12 = (char *)&v17 + 3;
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = opNew(0x34u);
  *(uint32_t *)(v8 + 4) = 1;
  *(uint32_t *)(v8 + 8) = 1;
  *(uint32_t *)v8 = ((uint32_t)(uintptr_t)&off_20926C8);
  *(uint32_t *)(v8 + 12) = 0;
  *(uint8_t *)(v8 + 16) = 0;
  untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Responses::SubscribeArionResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::SubscribeArionResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::SubscribeArionResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::SubscribeArionResponse::Self>> *)v8);
  v10 = (chatv2::Responses::SubscribeArionResponse::Self *)(untyped_deleter + 4);
  if ( untyped_deleter != (uint8_t *)-4 )
  {
    v16 = untyped_deleter;
    v13 = (chatv2::Responses::SubscribeArionResponse::Self *)(untyped_deleter + 4);
    chatv2::Responses::SubscribeArionResponse::SubscribeArionResponse(
      untyped_deleter + 4,
      *(uint32_t *)(a2 + 4),
      a3,
      a4,
      a5);
    v10 = v13;
    untyped_deleter = v16;
  }
  *untyped_deleter = 1;
  __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF) == 1 )
  {
    v15 = v10;
    G4_VCALL<void>(v8, 8, v12);
    v10 = v15;
    if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v8, 12);
      v10 = v15;
    }
  }
  if ( v10 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::SubscribeArionResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::SubscribeArionResponse::Self*]",
      "px != 0");
    v10 = nullptr;
  }
  v14 = v10;
  chatv2::Responses::SubscribeArionResponse::Parse(v10, a6);
  a1[1] = (chatv2::Responses::SubscribeArionResponse::Self *)v8;
  *a1 = v14;
  __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v8, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v8, 12);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ArionResponseFactory::CreateResponseFromHTTP  (binary VA: 0x124e510)
// Original: chatv2::Responses::ArionResponseFactory::CreateResponseFromHTTP
// ----------------------------------------------------------------------------
void chatv2::Responses::ArionResponseFactory::CreateResponseFromHTTP(int a1, chatv2::Requests::IArionServerRequest::Self **a2, chatv2::Connectivity::HTTPResponse::Self **a3)
{
  chatv2::Connectivity::HTTPResponse::Self *v3;
  size_t v4;
  char v5;
  int v6;
  void *v7;
  uint8_t *v8;
  char v9;
  int v10;
  int v11;
  int v12;
  void *v13;
  void *v14;
  void *v15;
  uint32_t *v16;
  int v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int v24;
  chatv2::Connectivity::HTTPResponse::Self *v25;
  chatv2::Responses::MessageArionResponse::Self *v26;
  uint32_t *v27;
  int v28;
  int v29;
  uint32_t *v30;
  uint32_t *v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  uint8_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t *v40;
  chatv2::Requests::IArionServerRequest::Self *v41;
  size_t v42;
  char v43;
  char *v44;
  int v45;
  void *v46;
  char v47;
  int v48;
  int v49;
  int v50;
  void *v51;
  void *v52;
  void *v53;
  void *v54;
  uint32_t *v55;
  uint32_t *v56;
  int v57;
  int v58;
  unsigned int v59;
  uint8_t *v60;
  char v61;
  unsigned int v62;
  int v63;
  int v64;
  int v65;
  unsigned int v66;
  uint8_t *v67;
  char v68;
  uint8_t *v69;
  unsigned int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  uint8_t *untyped_deleter;
  chatv2::Responses::ReportUserResponse::Self *v76;
  int v77;
  int v78;
  void (*v79)(int, chatv2::Responses::ReportUserResponse::Self **);
  volatile int32_t *v80;
  uint8_t *v81;
  int v82;
  int v83;
  int v84;
  chatv2::Requests::IArionServerRequest::Self *v85;
  chatv2::Requests::IArionServerRequest::Self *v86;
  int ChannelLanguage;
  chatv2::Requests::IArionServerRequest::Self *v88;
  int ChannelName;
  volatile int32_t *v90;
  volatile int32_t *v91;
  int v92;
  int v93;
  void (*v94)(int, chatv2::Responses::MessageArionResponse::Self **);
  volatile int32_t *v95;
  void **v96;
  uint32_t *v97;
  void **v98;
  uint32_t *v99;
  char *v100;
  void *v101;
  void *v102;
  size_t v103;
  int v104;
  volatile int32_t *v105;
  chatv2::Requests::IArionServerRequest::Self *v106;
  chatv2::Requests::IArionServerRequest::Self *v107;
  int v108;
  uint8_t *v109;
  chatv2::Responses::MessageArionResponse::Self *v110;
  chatv2::Responses::InviteUserResponse::Self *v111;
  size_t v112;
  chatv2::Requests::IArionServerRequest::Self *v113;
  chatv2::Requests::IArionServerRequest::Self *v114;
  int v115;
  uint8_t *v116;
  chatv2::Responses::MessageArionResponse::Self *v117;
  chatv2::Responses::MessageArionResponse::Self *v118;
  chatv2::Responses::MessageArionResponse::Self *v119;
  volatile int32_t *v120;
  boost::detail::shared_count::Self *v121;
  volatile int32_t *v122;
  int v123;
  chatv2::Requests::IArionServerRequest::Self *v124;
  chatv2::Requests::IArionServerRequest::Self *v125;
  int v126;
  uint8_t *v127;
  chatv2::Responses::MessageArionResponse::Self *v128;
  chatv2::Responses::MessageArionResponse::Self *v129;
  typedef char *_g4_t_v130;
  typedef void *_g4_t_v131;
  typedef char *_g4_t_v132;
  typedef void *_g4_t_v133;
  typedef char *_g4_t_v134;
  typedef uint32_t *_g4_t_v135;
  typedef void *_g4_t_v136;
  typedef char _g4_t_v137;
  typedef char _g4_t_v138;
  typedef void **_g4_t_v139;
  typedef chatv2::Responses::ReportUserResponse::Self *_g4_t_v140;
  typedef chatv2::Responses::MessageArionResponse::Self *_g4_t_v141;
  typedef volatile int32_t *_g4_t_v142;
  typedef chatv2::Responses::MessageArionResponse::Self *_g4_t_v143;
  typedef void *_g4_t_v144;
  typedef void *_g4_t_v145;
  typedef volatile int32_t *_g4_t_v146;
  typedef void *_g4_t_v147;
  typedef volatile int32_t *_g4_t_v148;
  typedef char _g4_t_v149;
  typedef char _g4_t_v150;
  typedef char _g4_t_v151;
  typedef char _g4_t_v152;
  typedef uint8_t *_g4_t_v153;
  typedef uint8_t *_g4_t_v154;
  typedef int _g4_t_v155;
  typedef chatv2::Requests::IArionServerRequest::Self **_g4_t_v156;
  typedef uint8_t *_g4_t_v157;
  typedef chatv2::Connectivity::HTTPResponse::Self **_g4_t_v158;
  typedef int _g4_t_v159;
  typedef uint8_t *_g4_t_v160;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef size_t _g4_t_nd;
  typedef size_t _g4_t_v166;
  typedef size_t _g4_t_v167;
  typedef size_t _g4_t_v168;
  typedef size_t _g4_t_v169;
  typedef size_t _g4_t_v170;
  typedef size_t _g4_t_v171;
  typedef char **_g4_t_v172;
  typedef size_t _g4_t_v173;
  typedef size_t _g4_t_v174;
  typedef size_t _g4_t_v175;
  typedef const char *_g4_t_v176;
  typedef size_t _g4_t_v177;
  typedef const char *_g4_t_v178;
  typedef size_t _g4_t_v179;
  typedef volatile int32_t *_g4_t_v180;
  typedef size_t _g4_t_ChannelType;
  typedef chatv2::Responses::MessageArionResponse::Self *_g4_t_v182;
  typedef size_t _g4_t_v183;
  typedef size_t _g4_t_v184;
  typedef int _g4_t_v185;
  typedef int _g4_t_v186;
  typedef char _g4_t_v187;
  typedef char _g4_t_v188;
  typedef char _g4_t_v189;
  typedef uint32_t _g4_t_v190[4];
  typedef uint32_t _g4_t_v191[4];
  typedef void *_g4_t_s1[4];
  typedef int _g4_t_v193;
  typedef int _g4_t_v194;
  typedef int _g4_t_v195;
  typedef int _g4_t_v196;
  typedef chatv2::Responses::SubscribeArionResponse::Self *_g4_t_v197;
  typedef volatile int32_t *_g4_t_v198;
  typedef chatv2::Responses::MessageArionResponse::Self *_g4_t_v199;
  typedef volatile int32_t *_g4_t_v200;
  typedef chatv2::Responses::MessageArionResponse::Self *_g4_t_v201;
  typedef volatile int32_t *_g4_t_v202;
  typedef chatv2::Responses::MessageArionResponse::Self *_g4_t_v203;
  typedef volatile int32_t *_g4_t_v204;
  typedef chatv2::Responses::ReportUserResponse::Self *_g4_t_v205;
  typedef volatile int32_t *_g4_t_v206;
  typedef chatv2::Responses::MessageArionResponse::Self *_g4_t_v207;
  typedef volatile int32_t *_g4_t_v208;
  typedef chatv2::Responses::MessageArionResponse::Self *_g4_t_v209;
  typedef uint32_t _g4_t_v210[3];
  typedef int _g4_t_v211[3];
  typedef int _g4_t_v212;
  typedef uint32_t *_g4_t_v213;
  typedef void *_g4_t_v214;
  typedef int _g4_t_v215;
  typedef int _g4_t_v216;
  typedef int _g4_t_v217;
  typedef int _g4_t_v218;
  typedef uint8_t *_g4_t_v219;
  typedef int _g4_t_v220;
  typedef int _g4_t_v221;
  typedef uint32_t *_g4_t_v222;
  typedef int _g4_t_v223;
  typedef int _g4_t_v224;
  typedef int _g4_t_v225;
  typedef int _g4_t_v226;
  typedef uint8_t *_g4_t_v227;
  typedef int _g4_t_v228;
  typedef int *_g4_t_v229;
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (12u + sizeof(_g4_t_v130)) > _g4_s0 ? (12u + sizeof(_g4_t_v130)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v131)) > _g4_s1 ? (48u + sizeof(_g4_t_v131)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v132)) > _g4_s2 ? (48u + sizeof(_g4_t_v132)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v133)) > _g4_s3 ? (48u + sizeof(_g4_t_v133)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v134)) > _g4_s4 ? (48u + sizeof(_g4_t_v134)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v135)) > _g4_s5 ? (48u + sizeof(_g4_t_v135)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v136)) > _g4_s6 ? (48u + sizeof(_g4_t_v136)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v137)) > _g4_s7 ? (48u + sizeof(_g4_t_v137)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v138)) > _g4_s8 ? (48u + sizeof(_g4_t_v138)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v139)) > _g4_s9 ? (48u + sizeof(_g4_t_v139)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v140)) > _g4_s10 ? (48u + sizeof(_g4_t_v140)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v141)) > _g4_s11 ? (48u + sizeof(_g4_t_v141)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v142)) > _g4_s12 ? (48u + sizeof(_g4_t_v142)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v143)) > _g4_s13 ? (48u + sizeof(_g4_t_v143)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v144)) > _g4_s14 ? (52u + sizeof(_g4_t_v144)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v145)) > _g4_s15 ? (52u + sizeof(_g4_t_v145)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v146)) > _g4_s16 ? (52u + sizeof(_g4_t_v146)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v147)) > _g4_s17 ? (52u + sizeof(_g4_t_v147)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v148)) > _g4_s18 ? (52u + sizeof(_g4_t_v148)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v149)) > _g4_s19 ? (56u + sizeof(_g4_t_v149)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v150)) > _g4_s20 ? (56u + sizeof(_g4_t_v150)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v151)) > _g4_s21 ? (56u + sizeof(_g4_t_v151)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v152)) > _g4_s22 ? (56u + sizeof(_g4_t_v152)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v153)) > _g4_s23 ? (56u + sizeof(_g4_t_v153)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v154)) > _g4_s24 ? (56u + sizeof(_g4_t_v154)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v155)) > _g4_s25 ? (60u + sizeof(_g4_t_v155)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v156)) > _g4_s26 ? (64u + sizeof(_g4_t_v156)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v157)) > _g4_s27 ? (64u + sizeof(_g4_t_v157)) : _g4_s27,
    _g4_s29 = (68u + sizeof(_g4_t_v158)) > _g4_s28 ? (68u + sizeof(_g4_t_v158)) : _g4_s28,
    _g4_s30 = (68u + sizeof(_g4_t_v159)) > _g4_s29 ? (68u + sizeof(_g4_t_v159)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_v160)) > _g4_s30 ? (72u + sizeof(_g4_t_v160)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_n)) > _g4_s31 ? (76u + sizeof(_g4_t_n)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_na)) > _g4_s32 ? (76u + sizeof(_g4_t_na)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_nb)) > _g4_s33 ? (76u + sizeof(_g4_t_nb)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_nc)) > _g4_s34 ? (76u + sizeof(_g4_t_nc)) : _g4_s34,
    _g4_s36 = (76u + sizeof(_g4_t_nd)) > _g4_s35 ? (76u + sizeof(_g4_t_nd)) : _g4_s35,
    _g4_s37 = (80u + sizeof(_g4_t_v166)) > _g4_s36 ? (80u + sizeof(_g4_t_v166)) : _g4_s36,
    _g4_s38 = (80u + sizeof(_g4_t_v167)) > _g4_s37 ? (80u + sizeof(_g4_t_v167)) : _g4_s37,
    _g4_s39 = (80u + sizeof(_g4_t_v168)) > _g4_s38 ? (80u + sizeof(_g4_t_v168)) : _g4_s38,
    _g4_s40 = (80u + sizeof(_g4_t_v169)) > _g4_s39 ? (80u + sizeof(_g4_t_v169)) : _g4_s39,
    _g4_s41 = (80u + sizeof(_g4_t_v170)) > _g4_s40 ? (80u + sizeof(_g4_t_v170)) : _g4_s40,
    _g4_s42 = (80u + sizeof(_g4_t_v171)) > _g4_s41 ? (80u + sizeof(_g4_t_v171)) : _g4_s41,
    _g4_s43 = (80u + sizeof(_g4_t_v172)) > _g4_s42 ? (80u + sizeof(_g4_t_v172)) : _g4_s42,
    _g4_s44 = (80u + sizeof(_g4_t_v173)) > _g4_s43 ? (80u + sizeof(_g4_t_v173)) : _g4_s43,
    _g4_s45 = (80u + sizeof(_g4_t_v174)) > _g4_s44 ? (80u + sizeof(_g4_t_v174)) : _g4_s44,
    _g4_s46 = (80u + sizeof(_g4_t_v175)) > _g4_s45 ? (80u + sizeof(_g4_t_v175)) : _g4_s45,
    _g4_s47 = (84u + sizeof(_g4_t_v176)) > _g4_s46 ? (84u + sizeof(_g4_t_v176)) : _g4_s46,
    _g4_s48 = (84u + sizeof(_g4_t_v177)) > _g4_s47 ? (84u + sizeof(_g4_t_v177)) : _g4_s47,
    _g4_s49 = (84u + sizeof(_g4_t_v178)) > _g4_s48 ? (84u + sizeof(_g4_t_v178)) : _g4_s48,
    _g4_s50 = (84u + sizeof(_g4_t_v179)) > _g4_s49 ? (84u + sizeof(_g4_t_v179)) : _g4_s49,
    _g4_s51 = (84u + sizeof(_g4_t_v180)) > _g4_s50 ? (84u + sizeof(_g4_t_v180)) : _g4_s50,
    _g4_s52 = (84u + sizeof(_g4_t_ChannelType)) > _g4_s51 ? (84u + sizeof(_g4_t_ChannelType)) : _g4_s51,
    _g4_s53 = (84u + sizeof(_g4_t_v182)) > _g4_s52 ? (84u + sizeof(_g4_t_v182)) : _g4_s52,
    _g4_s54 = (84u + sizeof(_g4_t_v183)) > _g4_s53 ? (84u + sizeof(_g4_t_v183)) : _g4_s53,
    _g4_s55 = (84u + sizeof(_g4_t_v184)) > _g4_s54 ? (84u + sizeof(_g4_t_v184)) : _g4_s54,
    _g4_s56 = (91u + sizeof(_g4_t_v185)) > _g4_s55 ? (91u + sizeof(_g4_t_v185)) : _g4_s55,
    _g4_s57 = (92u + sizeof(_g4_t_v186)) > _g4_s56 ? (92u + sizeof(_g4_t_v186)) : _g4_s56,
    _g4_s58 = (96u + sizeof(_g4_t_v187)) > _g4_s57 ? (96u + sizeof(_g4_t_v187)) : _g4_s57,
    _g4_s59 = (97u + sizeof(_g4_t_v188)) > _g4_s58 ? (97u + sizeof(_g4_t_v188)) : _g4_s58,
    _g4_s60 = (103u + sizeof(_g4_t_v189)) > _g4_s59 ? (103u + sizeof(_g4_t_v189)) : _g4_s59,
    _g4_s61 = (104u + sizeof(_g4_t_v190)) > _g4_s60 ? (104u + sizeof(_g4_t_v190)) : _g4_s60,
    _g4_s62 = (120u + sizeof(_g4_t_v191)) > _g4_s61 ? (120u + sizeof(_g4_t_v191)) : _g4_s61,
    _g4_s63 = (136u + sizeof(_g4_t_s1)) > _g4_s62 ? (136u + sizeof(_g4_t_s1)) : _g4_s62,
    _g4_s64 = (152u + sizeof(_g4_t_v193)) > _g4_s63 ? (152u + sizeof(_g4_t_v193)) : _g4_s63,
    _g4_s65 = (156u + sizeof(_g4_t_v194)) > _g4_s64 ? (156u + sizeof(_g4_t_v194)) : _g4_s64,
    _g4_s66 = (160u + sizeof(_g4_t_v195)) > _g4_s65 ? (160u + sizeof(_g4_t_v195)) : _g4_s65,
    _g4_s67 = (164u + sizeof(_g4_t_v196)) > _g4_s66 ? (164u + sizeof(_g4_t_v196)) : _g4_s66,
    _g4_s68 = (168u + sizeof(_g4_t_v197)) > _g4_s67 ? (168u + sizeof(_g4_t_v197)) : _g4_s67,
    _g4_s69 = (172u + sizeof(_g4_t_v198)) > _g4_s68 ? (172u + sizeof(_g4_t_v198)) : _g4_s68,
    _g4_s70 = (184u + sizeof(_g4_t_v199)) > _g4_s69 ? (184u + sizeof(_g4_t_v199)) : _g4_s69,
    _g4_s71 = (188u + sizeof(_g4_t_v200)) > _g4_s70 ? (188u + sizeof(_g4_t_v200)) : _g4_s70,
    _g4_s72 = (200u + sizeof(_g4_t_v201)) > _g4_s71 ? (200u + sizeof(_g4_t_v201)) : _g4_s71,
    _g4_s73 = (204u + sizeof(_g4_t_v202)) > _g4_s72 ? (204u + sizeof(_g4_t_v202)) : _g4_s72,
    _g4_s74 = (216u + sizeof(_g4_t_v203)) > _g4_s73 ? (216u + sizeof(_g4_t_v203)) : _g4_s73,
    _g4_s75 = (220u + sizeof(_g4_t_v204)) > _g4_s74 ? (220u + sizeof(_g4_t_v204)) : _g4_s74,
    _g4_s76 = (232u + sizeof(_g4_t_v205)) > _g4_s75 ? (232u + sizeof(_g4_t_v205)) : _g4_s75,
    _g4_s77 = (236u + sizeof(_g4_t_v206)) > _g4_s76 ? (236u + sizeof(_g4_t_v206)) : _g4_s76,
    _g4_s78 = (248u + sizeof(_g4_t_v207)) > _g4_s77 ? (248u + sizeof(_g4_t_v207)) : _g4_s77,
    _g4_s79 = (252u + sizeof(_g4_t_v208)) > _g4_s78 ? (252u + sizeof(_g4_t_v208)) : _g4_s78,
    _g4_s80 = (264u + sizeof(_g4_t_v209)) > _g4_s79 ? (264u + sizeof(_g4_t_v209)) : _g4_s79,
    _g4_s81 = (268u + sizeof(_g4_t_v210)) > _g4_s80 ? (268u + sizeof(_g4_t_v210)) : _g4_s80,
    _g4_s82 = (280u + sizeof(_g4_t_v211)) > _g4_s81 ? (280u + sizeof(_g4_t_v211)) : _g4_s81,
    _g4_s83 = (292u + sizeof(_g4_t_v212)) > _g4_s82 ? (292u + sizeof(_g4_t_v212)) : _g4_s82,
    _g4_s84 = (296u + sizeof(_g4_t_v213)) > _g4_s83 ? (296u + sizeof(_g4_t_v213)) : _g4_s83,
    _g4_s85 = (300u + sizeof(_g4_t_v214)) > _g4_s84 ? (300u + sizeof(_g4_t_v214)) : _g4_s84,
    _g4_s86 = (304u + sizeof(_g4_t_v215)) > _g4_s85 ? (304u + sizeof(_g4_t_v215)) : _g4_s85,
    _g4_s87 = (308u + sizeof(_g4_t_v216)) > _g4_s86 ? (308u + sizeof(_g4_t_v216)) : _g4_s86,
    _g4_s88 = (312u + sizeof(_g4_t_v217)) > _g4_s87 ? (312u + sizeof(_g4_t_v217)) : _g4_s87,
    _g4_s89 = (316u + sizeof(_g4_t_v218)) > _g4_s88 ? (316u + sizeof(_g4_t_v218)) : _g4_s88,
    _g4_s90 = (320u + sizeof(_g4_t_v219)) > _g4_s89 ? (320u + sizeof(_g4_t_v219)) : _g4_s89,
    _g4_s91 = (324u + sizeof(_g4_t_v220)) > _g4_s90 ? (324u + sizeof(_g4_t_v220)) : _g4_s90,
    _g4_s92 = (328u + sizeof(_g4_t_v221)) > _g4_s91 ? (328u + sizeof(_g4_t_v221)) : _g4_s91,
    _g4_s93 = (332u + sizeof(_g4_t_v222)) > _g4_s92 ? (332u + sizeof(_g4_t_v222)) : _g4_s92,
    _g4_s94 = (336u + sizeof(_g4_t_v223)) > _g4_s93 ? (336u + sizeof(_g4_t_v223)) : _g4_s93,
    _g4_s95 = (340u + sizeof(_g4_t_v224)) > _g4_s94 ? (340u + sizeof(_g4_t_v224)) : _g4_s94,
    _g4_s96 = (344u + sizeof(_g4_t_v225)) > _g4_s95 ? (344u + sizeof(_g4_t_v225)) : _g4_s95,
    _g4_s97 = (348u + sizeof(_g4_t_v226)) > _g4_s96 ? (348u + sizeof(_g4_t_v226)) : _g4_s96,
    _g4_s98 = (392u + sizeof(_g4_t_v227)) > _g4_s97 ? (392u + sizeof(_g4_t_v227)) : _g4_s97,
    _g4_s99 = (396u + sizeof(_g4_t_v228)) > _g4_s98 ? (396u + sizeof(_g4_t_v228)) : _g4_s98,
    _g4_s100 = (416u + sizeof(_g4_t_v229)) > _g4_s99 ? (416u + sizeof(_g4_t_v229)) : _g4_s99
  };
  alignas(16) uint8_t _g4_sf[_g4_s100];
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 12u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 48u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 48u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 48u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 48u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 48u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 48u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 48u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 48u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 48u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 48u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 48u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 48u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 48u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 52u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 52u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 52u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 52u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 52u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 56u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 56u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 56u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 56u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 56u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 56u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 60u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 64u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 64u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 68u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 68u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 72u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 76u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 76u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 76u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 76u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 76u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 80u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 80u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 80u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 80u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 80u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 80u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 80u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 80u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 80u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 80u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 84u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 84u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 84u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 84u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 84u);
  _g4_t_ChannelType &ChannelType = *reinterpret_cast<_g4_t_ChannelType *>(_g4_sf + 84u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 84u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 84u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 84u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 91u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 92u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 96u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 97u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 103u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 104u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 120u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 136u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 152u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 156u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 160u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 164u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 168u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 172u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 184u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 188u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 200u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 204u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 216u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 220u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 232u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 236u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 248u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 252u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 264u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 268u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 280u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 292u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 296u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 300u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 304u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 308u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 312u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 316u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 320u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 324u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 328u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 332u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 336u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 340u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 344u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 348u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 392u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 396u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 416u);

  v229 = &a1;
  v155 = a1;
  v156 = a2;
  v158 = a3;
  v3 = *a3;
  if ( *a3 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
      "px != 0");
    v3 = *v158;
  }
  v4 = 0;
  v160 = *(uint8_t **)chatv2::Connectivity::HTTPResponse::GetContent(v3);
  v221 = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(&v221), 0x80u, 0);
  n = 0;
  v5 = aResponseConten /* " response Content: {0}\n" */[0];
  v176 = " response Content: {0}\n";
  while ( 1 )
  {
    v8 = (uint8_t *)(v176 + 1);
    if ( v5 != 123 )
    {
      v6 = v221;
      v7 = (void *)(v4 + 1);
      if ( v4 + 1 > *(uint32_t *)(v221 - 12) )
      {
        v149 = v5;
        sub_1939D80((int)(uintptr_t)(&v221), v4 + 65, 0);
        v6 = v221;
        v7 = (void *)(v4 + 1);
        v5 = v149;
      }
      if ( *(int *)(v6 - 4) >= 0 )
      {
        v150 = v5;
        v144 = v7;
        sub_19397C0(&v221);
        v6 = v221;
        v7 = v144;
        v5 = v150;
      }
      *(uint8_t *)(v6 + v4) = v5;
      ++v176;
      v4 = (size_t)v7;
      goto LABEL_9;
    }
    v9 = v176[1];
    if ( v9 == 123 )
    {
      v72 = v221;
      if ( v4 + 2 > *(uint32_t *)(v221 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v221), v4 + 66, 0);
        v72 = v221;
        v169 = v4 + 1;
        if ( *(int *)(v221 - 4) < 0 )
          goto LABEL_135;
      }
      else
      {
        v169 = v4 + 1;
        if ( *(int *)(v221 - 4) < 0 )
        {
LABEL_135:
          *(uint8_t *)(v72 + v4) = 123;
          v73 = v221;
          if ( *(int *)(v221 - 4) >= 0 )
          {
            sub_19397C0(&v221);
            v73 = v221;
          }
          v176 += 2;
          v4 += 2;
          *(uint8_t *)(v73 + v169) = 123;
          goto LABEL_9;
        }
      }
      sub_19397C0(&v221);
      v72 = v221;
      goto LABEL_135;
    }
    if ( v9 == 0 )
      goto LABEL_77;
    v177 = v4;
    v10 = 1;
    v11 = 0;
    while ( 1 )
    {
      v9 = *v8;
      if ( (uint8_t)(*v8 - 48) > 9u )
        break;
      v12 = v10 * v11;
      ++v8;
      v10 *= 10;
      v11 = v12 + v9 - 48;
      if ( *v8 == 0 )
      {
        v4 = v177;
        goto LABEL_17;
      }
    }
    v57 = v11;
    v4 = v177;
    if ( v10 == 1 )
LABEL_77:
      v57 = n++;
    v176 = (const char *)(v8 + 1);
    if ( v9 == 58 )
    {
      v9 = v8[1];
      if ( v9 == 120 || (v176 = (const char *)(v8 + 2), v9 == 88) )
      {
        v9 = v8[2];
        v176 = (const char *)(v8 + 3);
      }
    }
    if ( v9 != 125 )
      break;
    if ( v57 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(&v221), v4, 0);
    }
    else if ( v160 != nullptr )
    {
      v58 = v221;
      v59 = *(uint32_t *)(v221 - 12);
      if ( v4 + 64 > v59 )
      {
        sub_1939D80((int)(uintptr_t)(&v221), v4 + 128, 0);
        v60 = v160;
        v58 = v221;
        v61 = *v160;
        v59 = *(uint32_t *)(v221 - 12);
        if ( *v160 != 0 )
        {
LABEL_84:
          if ( v59 > v4 )
          {
            v170 = v59;
            v81 = v60;
            while ( 1 )
            {
              if ( *(int *)(v58 - 4) >= 0 )
              {
                sub_19397C0(&v221);
                v58 = v221;
              }
              *(uint8_t *)(v58 + v4++) = *v81;
              v61 = v81[1];
              if ( v61 == 0 )
                break;
              ++v81;
              if ( v4 >= v170 )
              {
                v58 = v221;
                v60 = v81;
                v59 = *(uint32_t *)(v221 - 12);
                goto LABEL_85;
              }
              v58 = v221;
            }
          }
          else
          {
LABEL_85:
            v166 = (size_t)&v60[-v4];
            while ( 1 )
            {
              v62 = v59 + 1;
              if ( v59 + 1 > *(uint32_t *)(v58 - 8) || *(int *)(v58 - 4) > 0 )
              {
                v137 = v61;
                sub_1939B80(&v221, v59 + 1);
                v58 = v221;
                v62 = v59 + 1;
                v61 = v137;
                v59 = *(uint32_t *)(v221 - 12);
              }
              *(uint8_t *)(v58 + v59) = v61;
              v63 = v221;
              if ( (uint32_t *)(v221 - 12) != dword_213B808 )
              {
                *(uint32_t *)(v221 - 4) = 0;
                *(uint32_t *)(v63 - 12) = v62;
                *(uint8_t *)(v63 + v62) = 0;
              }
              ++v4;
              v61 = *(uint8_t *)(v166 + v4);
              if ( v61 == 0 )
                break;
              v58 = v221;
              v59 = *(uint32_t *)(v221 - 12);
            }
          }
        }
      }
      else
      {
        v60 = v160;
        v61 = *v160;
        if ( *v160 != 0 )
          goto LABEL_84;
      }
    }
LABEL_9:
    v5 = *v176;
    if ( *v176 == 0 )
      goto LABEL_18;
  }
LABEL_17:
  sub_1939D80((int)(uintptr_t)(&v221), v4, 0);
LABEL_18:
  sub_1939D80((int)(uintptr_t)(&v221), v4, 0);
  g4_std::string::construct_copy(v190, &v221);
  v13 = (void *)(v221 - 12);
  if ( (uint32_t *)(v221 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v221 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v194), "ChatLib", (int)(uintptr_t)(&v185));
  chatv2::Utils::Log(
    4,
    0,
    &v194,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/ArionResponseFactory.cpp",
    45,
    v190);
  v14 = (void *)(v194 - 12);
  if ( (uint32_t *)(v194 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v194 - 4), 0xFFFFFFFF) <= 0 )
  {
    v130 = &v187;
    g4_std::string::Rep::M_destroy(v14);
  }
  v15 = (void *)(v190[0] - 12);
  if ( (uint32_t *)(v190[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v190[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v130 = &v188;
    g4_std::string::Rep::M_destroy(v15);
  }
  v212 = 0;
  v213 = nullptr;
  v214 = nullptr;
  v215 = 0;
  v216 = 0;
  v217 = 0;
  v218 = 1024;
  v16 = (uint32_t *)opNew(0x14u);
  *v16 = 0;
  v16[1] = 2048;
  v16[2] = 0;
  v16[3] = 0;
  v16[4] = 0;
  v17 = opNew(1u);
  v18 = v16[1];
  v16[3] = v17;
  v16[4] = v17;
  v19 = (uint32_t *)(malloc(v18 + 12));
  *v19 = v18;
  v19[1] = 0;
  v19[2] = *v16;
  *v16 = (uint32_t)(uintptr_t)(v19);
  v213 = v16;
  v214 = v16;
  v20 = (uint32_t *)*v16;
  v21 = (v218 + 3) & 0xFFFFFFFC;
  v22 = *(uint32_t *)(*v16 + 4);
  if ( v21 + v22 > *(uint32_t *)*v16 )
  {
    v23 = v16[1];
    if ( v21 >= v23 )
      v23 = (v218 + 3) & 0xFFFFFFFC;
    v131 = (void *)v23;
    v20 = (uint32_t *)(malloc(v23 + 12));
    v20[1] = 0;
    *v20 = (uint32_t)(uintptr_t)(v131);
    v20[2] = *v16;
    *v16 = (uint32_t)(uintptr_t)(v20);
    v22 = v20[1];
  }
  v24 = (int)(uintptr_t)(v20) + v22 + 12;
  if ( (v24 & 3) != 0 )
  {
    v132 = (char *)v20 + v22 + 12;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v20 = (uint32_t *)*v16;
    v24 = (int)(uintptr_t)(v132);
    v22 = *(uint32_t *)(*v16 + 4);
  }
  v20[1] = v22 + v21;
  v215 = v24;
  v216 = v24;
  v217 = v218 + v24;
  v219 = nullptr;
  v220 = 0;
  v25 = *v158;
  if ( *v158 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
      "px != 0");
    v25 = *v158;
  }
  v26 = *(chatv2::Responses::MessageArionResponse::Self **)chatv2::Connectivity::HTTPResponse::GetContent(v25);
  v212 = 0;
  v209 = v26;
  v210[0] = (uint32_t)(uintptr_t)(v26);
  v221 = 0;
  v222 = nullptr;
  v223 = 0;
  v224 = 0;
  v225 = 0;
  v226 = 256;
  v27 = (uint32_t *)opNew(0x14u);
  *v27 = 0;
  v27[1] = 2048;
  v27[2] = 0;
  v27[3] = 0;
  v27[4] = 0;
  v28 = opNew(1u);
  v29 = v27[1];
  v27[3] = v28;
  v27[4] = v28;
  v30 = (uint32_t *)(malloc(v29 + 12));
  *v30 = v29;
  v30[1] = 0;
  v30[2] = *v27;
  *v27 = (uint32_t)(uintptr_t)(v30);
  v221 = (int)(uintptr_t)(v27);
  v222 = v27;
  v31 = (uint32_t *)*v27;
  v32 = (v226 + 3) & 0xFFFFFFFC;
  v33 = *(uint32_t *)(*v27 + 4);
  if ( v32 + v33 > *(uint32_t *)*v27 )
  {
    v34 = v27[1];
    if ( v32 >= v34 )
      v34 = (v226 + 3) & 0xFFFFFFFC;
    v133 = (void *)v34;
    v31 = (uint32_t *)(malloc(v34 + 12));
    v31[1] = 0;
    *v31 = (uint32_t)(uintptr_t)(v133);
    v31[2] = *v27;
    *v27 = (uint32_t)(uintptr_t)(v31);
    v33 = v31[1];
  }
  v35 = (int)(uintptr_t)(v31) + v33 + 12;
  if ( (v35 & 3) != 0 )
  {
    v134 = (char *)v31 + v33 + 12;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v31 = (uint32_t *)*v27;
    v35 = (int)(uintptr_t)(v134);
    v33 = *(uint32_t *)(*v27 + 4);
  }
  v31[1] = v33 + v32;
  v223 = v35;
  v224 = v35;
  v225 = v226 + v35;
  v227 = nullptr;
  v228 = 0;
  if ( (uint8_t)sub_124E3C0((rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v211) != 0 )
  {
    v36 = v216;
    if ( v216 - v215 != 16 )
    {
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        1135,
        "rapidjson::GenericDocument<Encoding, Allocator>& rapidjson::GenericDocument<Encoding, Allocator>::ParseStream(St"
        "ream&) [with unsigned int parseFlags = 0u, Stream = rapidjson::GenericStringStream<rapidjson::UTF8<> >, Encoding"
        " = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericDocument<Encoding, Allocat"
        "or> = rapidjson::GenericDocument<rapidjson::UTF8<> >]",
        "stack_.GetSize () == sizeof (ValueType)");
      v36 = v216;
      if ( (unsigned int)(v216 - v215) <= 0xF )
      {
        __assert2(
          "../../../../../lib/rapidjson/internal/stack.h",
          83,
          "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = rapidjson::GenericValue<rapidjson::UTF8<> >, A"
          "llocator = rapidjson::MemoryPoolAllocator<>, size_t = unsigned int]",
          "GetSize () >= count * sizeof (T)");
        v36 = v216;
      }
    }
    v216 = v36 - 16;
    v211[0] = *(uint32_t *)(v36 - 16);
    v211[1] = *(uint32_t *)(v36 - 12);
    v211[2] = *(uint32_t *)(v36 - 8);
    v212 = *(uint32_t *)(v36 - 4);
    *(uint32_t *)(v36 - 4) = 0;
    v219 = nullptr;
    v220 = 0;
    v37 = nullptr;
  }
  else
  {
    v37 = v227;
    v220 = v228;
    v219 = v227;
    v216 = v215;
  }
  v38 = v222;
  if ( v222 != nullptr )
  {
    v39 = (uint32_t *)*v222;
    if ( *v222 != 0 && v39 != (uint32_t *)v222[2] )
    {
      while ( 1 )
      {
        v40 = (uint32_t *)v39[2];
        v135 = v38;
        free(v39);
        v38 = v135;
        *v135 = (uint32_t)(uintptr_t)(v40);
        if ( v40 == nullptr || v40 == (uint32_t *)v135[2] )
          break;
        v39 = v40;
      }
    }
    v136 = v38;
    opDelete((void *)v38[4]);
    opDelete(v136);
    v37 = v219;
  }
  if ( v37 == nullptr )
  {
    v84 = sub_124DDB0(v211, chatv2::Responses::TYPE);
    if ( v84 != 0 )
    {
      v172 = (char **)(v84 + 16);
    }
    else
    {
      v172 = (char **)&g4_rapidjson_NullValue;
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
    if ( sub_124DDB0(v211, chatv2::Responses::CMD_URL) != 0 )
    {
      v85 = *v156;
      if ( *v156 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "equests::IArionServerRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IArionServerRequest*]",
          "px != 0");
        v85 = *v156;
      }
      ChannelType = chatv2::Requests::IArionServerRequest::GetChannelType(v85);
      v86 = *v156;
      if ( *v156 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "equests::IArionServerRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IArionServerRequest*]",
          "px != 0");
        v86 = *v156;
      }
      ChannelLanguage = (int)(uintptr_t)(chatv2::Requests::IArionServerRequest::GetChannelLanguage(v86));
      v88 = *v156;
      if ( *v156 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "equests::IArionServerRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IArionServerRequest*]",
          "px != 0");
        v88 = *v156;
      }
      ChannelName = (int)(uintptr_t)(chatv2::Requests::IArionServerRequest::GetChannelName(v88));
      chatv2::Responses::ArionResponseFactory::CreateSubscribeResponse(
        &v197,
        v155,
        ChannelName,
        ChannelLanguage,
        ChannelType,
        (rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v211);
      v90 = v198;
      v182 = (chatv2::Responses::MessageArionResponse::Self *)(v197);
      if ( v198 != nullptr )
      {
        __sync_add_and_fetch(v198 + 1, 1);
        v91 = v198;
        if ( v198 != nullptr && __sync_fetch_and_add(v198 + 1, 0xFFFFFFFF) == 1 )
        {
          (*(void (**)(volatile int32_t *))(*v91 + 8))(v91);
          if ( __sync_fetch_and_add(v91 + 2, 0xFFFFFFFF) == 1 )
            (*(void (**)(volatile int32_t *))(*v91 + 12))(v91);
        }
      }
      goto LABEL_181;
    }
    v90 = nullptr;
    v182 = nullptr;
    v100 = v172[3];
    if ( v100 == nullptr )
      goto LABEL_181;
    v90 = nullptr;
    v182 = nullptr;
    if ( ((unsigned int)(uintptr_t)(v100) & 0x100000) == 0 )
      goto LABEL_181;
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(s1), *v172, (int)(uintptr_t)(&v186) + 1);
    jcore::Format_std_string_char_41_std_s_682a73(&v193);
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v196), "ChatLib", (int)(uintptr_t)(&v186) + 2);
    chatv2::Utils::Log(
      3,
      0,
      &v196,
      "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/ArionResponseFactory.cpp",
      77,
      &v193);
    v101 = (void *)(v196 - 12);
    if ( (uint32_t *)(v196 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v196 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std_compat::string_rep_destroy(v101);
    }
    v102 = (void *)(v193 - 12);
    if ( (uint32_t *)(v193 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v193 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std_compat::string_rep_destroy(v102);
    }
    v173 = *((uint32_t *)s1[0] - 3);
    na = *((uint32_t *)chatv2::Responses::INVITATION - 3);
    v103 = v173;
    if ( na <= v173 )
      v103 = *((uint32_t *)chatv2::Responses::INVITATION - 3);
    v146 = (volatile int32_t *)s1[0];
    v90 = nullptr;
    v104 = memcmp(s1[0], chatv2::Responses::INVITATION, v103);
    v182 = nullptr;
    v105 = v146;
    if ( v104 == 0 )
    {
      v90 = nullptr;
      v182 = nullptr;
      if ( v173 == na )
      {
        v106 = *v156;
        if ( *v156 == nullptr )
        {
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Requests::IArionServerRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IArionServerRequest*]",
            "px != 0");
          v106 = *v156;
        }
        v184 = chatv2::Requests::IArionServerRequest::GetChannelType(v106);
        v107 = *v156;
        if ( *v156 == nullptr )
        {
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Requests::IArionServerRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IArionServerRequest*]",
            "px != 0");
          v107 = *v156;
        }
        v147 = (void *)chatv2::Requests::IArionServerRequest::GetChannelName(v107);
        v221 = 0;
        v222 = nullptr;
        v108 = (int)(uintptr_t)(operator new(0x28u));
        *(uint32_t *)(v108 + 4) = 1;
        *(uint32_t *)(v108 + 8) = 1;
        *(uint32_t *)v108 = ((uint32_t)(uintptr_t)&off_2092668);
        *(uint32_t *)(v108 + 12) = 0;
        *(uint8_t *)(v108 + 16) = 0;
        v222 = (uint32_t *)v108;
        v109 = (uint8_t *)(*(int (**)(int))(*(uint32_t *)v108 + 20))(v108);
        v110 = (chatv2::Responses::MessageArionResponse::Self *)(v109 + 4);
        if ( v109 != (uint8_t *)-4 )
        {
          chatv2::Responses::InviteUserResponse::InviteUserResponse(v110, *(uint32_t *)(v155 + 4), v147, v184);
          v110 = (chatv2::Responses::MessageArionResponse::Self *)(v109 + 4);
        }
        *v109 = 1;
        v209 = v110;
        v210[0] = (uint32_t)(uintptr_t)(v222);
        if ( v222 != nullptr )
          __sync_add_and_fetch(v222 + 1, 1);
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v222);
        v111 = (chatv2::Responses::InviteUserResponse::Self *)(v209);
        if ( v209 == nullptr )
        {
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Responses::InviteUserResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::InviteUserResponse::Self*]",
            "px != 0");
          v111 = (chatv2::Responses::InviteUserResponse::Self *)(v209);
        }
        chatv2::Responses::InviteUserResponse::Parse(
          v111,
          (rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v211);
        v90 = nullptr;
        v182 = v209;
        v199 = v209;
        v200 = (volatile int32_t *)v210[0];
        if ( v210[0] != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v210[0] + 4), 1);
          v90 = v200;
          v182 = v199;
        }
        v199 = nullptr;
        v200 = nullptr;
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v200);
        boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v210);
        v105 = (volatile int32_t *)s1[0];
        v173 = *((uint32_t *)s1[0] - 3);
      }
    }
    v112 = *((uint32_t *)chatv2::Responses::ROOM_INFO - 3);
    nb = v112;
    if ( v173 <= v112 )
      v112 = v173;
    v148 = v105;
    if ( memcmp((const void *)v105, chatv2::Responses::ROOM_INFO, v112) == 0 && v173 == nb )
    {
      v113 = *v156;
      if ( *v156 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "equests::IArionServerRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IArionServerRequest*]",
          "px != 0");
        v113 = *v156;
      }
      v174 = chatv2::Requests::IArionServerRequest::GetChannelType(v113);
      v114 = *v156;
      if ( *v156 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "equests::IArionServerRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IArionServerRequest*]",
          "px != 0");
        v114 = *v156;
      }
      nc = (size_t)(uintptr_t)(chatv2::Requests::IArionServerRequest::GetChannelName(v114));
      v221 = 0;
      v222 = nullptr;
      v115 = (int)(uintptr_t)(operator new(0x3Cu));
      *(uint32_t *)(v115 + 4) = 1;
      *(uint32_t *)(v115 + 8) = 1;
      *(uint32_t *)v115 = ((uint32_t)(uintptr_t)&off_2092688);
      *(uint32_t *)(v115 + 12) = 0;
      *(uint8_t *)(v115 + 16) = 0;
      v222 = (uint32_t *)v115;
      v116 = (uint8_t *)(*(int (**)(int))(*(uint32_t *)v115 + 20))(v115);
      v117 = (chatv2::Responses::MessageArionResponse::Self *)(v116 + 4);
      if ( v116 != (uint8_t *)-4 )
      {
        v153 = v116;
        v141 = (chatv2::Responses::MessageArionResponse::Self *)(v116 + 4);
        chatv2::Responses::RoomInfoArionResponse::Construct(v116 + 4, *(uint32_t *)(v155 + 4), nc, v174);
        v117 = v141;
        v116 = v153;
      }
      *v116 = 1;
      v209 = v117;
      v210[0] = (uint32_t)(uintptr_t)(v222);
      if ( v222 != nullptr )
        __sync_add_and_fetch(v222 + 1, 1);
      boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v222);
      v118 = v209;
      if ( v209 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "esponses::RoomInfoArionResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::RoomIn"
          "foArionResponse*]",
          "px != 0");
        v118 = v209;
      }
      chatv2::Responses::RoomInfoArionResponse::Parse(
        v118,
        (rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v211);
      v119 = v209;
      v120 = nullptr;
      v201 = v209;
      v202 = (volatile int32_t *)v210[0];
      if ( v210[0] != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v210[0] + 4), 1);
        v119 = v201;
        v120 = v202;
      }
      v202 = v90;
      v201 = v182;
      v121 = (boost::detail::shared_count::Self *)&v202;
    }
    else
    {
      v123 = g4_std_compat::string_compare(s1, &chatv2::Responses::Messages::MESSAGE);
      v122 = v148;
      if ( v123 != 0 )
        goto LABEL_245;
      v124 = *v156;
      if ( *v156 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "equests::IArionServerRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IArionServerRequest*]",
          "px != 0");
        v124 = *v156;
      }
      v175 = chatv2::Requests::IArionServerRequest::GetChannelType(v124);
      v125 = *v156;
      if ( *v156 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "equests::IArionServerRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IArionServerRequest*]",
          "px != 0");
        v125 = *v156;
      }
      nd = (size_t)(uintptr_t)(chatv2::Requests::IArionServerRequest::GetChannelName(v125));
      v221 = 0;
      v222 = nullptr;
      v126 = (int)(uintptr_t)(operator new(0x44u));
      *(uint32_t *)(v126 + 4) = 1;
      *(uint32_t *)(v126 + 8) = 1;
      *(uint32_t *)v126 = ((uint32_t)(uintptr_t)&off_20926A8);
      *(uint32_t *)(v126 + 12) = 0;
      *(uint8_t *)(v126 + 16) = 0;
      v222 = (uint32_t *)v126;
      v127 = (uint8_t *)(*(int (**)(int))(*(uint32_t *)v126 + 20))(v126);
      v128 = (chatv2::Responses::MessageArionResponse::Self *)(v127 + 4);
      if ( v127 != (uint8_t *)-4 )
      {
        v154 = v127;
        v143 = (chatv2::Responses::MessageArionResponse::Self *)(v127 + 4);
        chatv2::Responses::MessageArionResponse::Construct(v127 + 4, *(uint32_t *)(v155 + 4), nd, v175);
        v128 = v143;
        v127 = v154;
      }
      *v127 = 1;
      v209 = v128;
      v210[0] = (uint32_t)(uintptr_t)(v222);
      if ( v222 != nullptr )
        __sync_add_and_fetch(v222 + 1, 1);
      boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v222);
      v129 = v209;
      if ( v209 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "esponses::MessageArionResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::MessageArionResponse::Self*]",
          "px != 0");
        v129 = v209;
      }
      chatv2::Responses::MessageArionResponse::Parse(
        v129,
        (rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v211);
      v119 = v209;
      v120 = nullptr;
      v203 = v209;
      v204 = (volatile int32_t *)v210[0];
      if ( v210[0] != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v210[0] + 4), 1);
        v119 = v203;
        v120 = v204;
      }
      v204 = v90;
      v203 = v182;
      v121 = (boost::detail::shared_count::Self *)&v204;
    }
    v142 = v120;
    boost::detail::shared_count::Destroy(v121);
    boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v210);
    v122 = (volatile int32_t *)s1[0];
    v90 = v142;
    v182 = v119;
LABEL_245:
    if ( v122 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v122 - 1, 0xFFFFFFFF) <= 0 )
    {
      v130 = &v189;
      g4_std_compat::string_rep_destroy((void *)(v122 - 3));
    }
LABEL_181:
    v92 = *(uint32_t *)(v155 + 4);
    v93 = *(uint32_t *)(v92 + 20);
    if ( v93 != 0
      && boost::function1<void,boost::shared_ptr<chatv2::Responses::IServerResponse>>::dummy::nonnull != nullptr )
    {
      if ( v90 != nullptr )
      {
        __sync_add_and_fetch(v90 + 1, 1);
        v92 = *(uint32_t *)(v155 + 4);
        v93 = *(uint32_t *)(v92 + 20);
        if ( v93 == 0 )
          goto LABEL_287;
      }
      v207 = v182;
      v94 = *(void (**)(int, chatv2::Responses::MessageArionResponse::Self **))((v93 & 0xFFFFFFFE) + 4);
      v208 = v90;
      if ( v90 != nullptr )
        __sync_add_and_fetch(v90 + 1, 1);
      v94(v92 + 24, &v207);
      v95 = v208;
      if ( v208 != nullptr && __sync_fetch_and_add(v208 + 1, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *))(*v95 + 8))(v95);
        if ( __sync_fetch_and_add(v95 + 2, 0xFFFFFFFF) == 1 )
          (*(void (**)(volatile int32_t *))(*v95 + 12))(v95);
      }
      if ( v90 != nullptr && __sync_fetch_and_add(v90 + 1, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *))(*v90 + 8))(v90);
        if ( __sync_fetch_and_add(v90 + 2, 0xFFFFFFFF) == 1 )
          (*(void (**)(volatile int32_t *))(*v90 + 12))(v90);
      }
    }
    v96 = (void **)v214;
    if ( v214 != nullptr )
    {
      v97 = *(uint32_t **)v214;
      if ( *(uint32_t *)v214 != 0 && v97 != *((uint32_t **)v214 + 2) )
      {
        v183 = (size_t)v90;
        v98 = (void **)v214;
        while ( 1 )
        {
          v99 = (uint32_t *)v97[2];
          free(v97);
          *v98 = v99;
          if ( v99 == nullptr || v99 == v98[2] )
            break;
          v97 = v99;
        }
        v96 = v98;
        v90 = (volatile int32_t *)v183;
      }
      v139 = v96;
      operator delete(v96[4]);
      operator delete(v139);
    }
    if ( v90 != nullptr && __sync_fetch_and_add(v90 + 1, 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(volatile int32_t *, char *))(*v90 + 8))(v90, v130);
      if ( __sync_fetch_and_add(v90 + 2, 0xFFFFFFFF) == 1 )
        (*(void (**)(volatile int32_t *))(*v90 + 12))(v90);
    }
    return;
  }
  v41 = *v156;
  if ( *v156 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::IArionServerRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IArionServerRequest*]",
      "px != 0");
    v41 = *v156;
  }
  if ( chatv2::Requests::IArionServerRequest::GetType(v41) == 3 )
  {
    v74 = (int)(uintptr_t)(operator new(0x28u));
    *(uint32_t *)(v74 + 4) = 1;
    *(uint32_t *)(v74 + 8) = 1;
    *(uint32_t *)v74 = ((uint32_t)(uintptr_t)&off_2092648);
    *(uint32_t *)(v74 + 12) = 0;
    *(uint8_t *)(v74 + 16) = 0;
    untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Responses::ReportUserResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ReportUserResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ReportUserResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ReportUserResponse::Self>> *)v74);
    v76 = (chatv2::Responses::ReportUserResponse::Self *)(untyped_deleter + 4);
    if ( untyped_deleter != (uint8_t *)-4 )
    {
      chatv2::Responses::ReportUserResponse::Construct(v76, *(chatv2::Core::ArionExecutor::Self **)(v155 + 4));
      v76 = (chatv2::Responses::ReportUserResponse::Self *)(untyped_deleter + 4);
    }
    *untyped_deleter = 1;
    __sync_add_and_fetch((volatile int32_t *)(v74 + 4), 1);
    if ( __sync_fetch_and_add((volatile int32_t *)(v74 + 4), 0xFFFFFFFF) == 1 )
    {
      v140 = v76;
      (*(void (**)(int, char *))(*(uint32_t *)v74 + 8))(v74, v130);
      v76 = v140;
      if ( __sync_fetch_and_add((volatile int32_t *)(v74 + 8), 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(int))(*(uint32_t *)v74 + 12))(v74);
        v76 = v140;
      }
    }
    __sync_add_and_fetch((volatile int32_t *)(v74 + 4), 1);
    if ( *(uint32_t *)(*(uint32_t *)(v155 + 4) + 20) == 0
      || boost::function1<void,boost::shared_ptr<chatv2::Responses::IServerResponse>>::dummy::nonnull == nullptr )
    {
      goto LABEL_147;
    }
    __sync_add_and_fetch((volatile int32_t *)(v74 + 4), 1);
    v77 = *(uint32_t *)(v155 + 4);
    v78 = *(uint32_t *)(v77 + 20);
    if ( v78 != 0 )
    {
      v205 = v76;
      v79 = *(void (**)(int, chatv2::Responses::ReportUserResponse::Self **))((v78 & 0xFFFFFFFE) + 4);
      v206 = (volatile int32_t *)v74;
      __sync_add_and_fetch((volatile int32_t *)(v74 + 4), 1);
      v79(v77 + 24, &v205);
      v80 = v206;
      if ( v206 != nullptr && __sync_fetch_and_add(v206 + 1, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *))(*v80 + 8))(v80);
        if ( __sync_fetch_and_add(v80 + 2, 0xFFFFFFFF) == 1 )
          (*(void (**)(volatile int32_t *))(*v80 + 12))(v80);
      }
      if ( __sync_fetch_and_add((volatile int32_t *)(v74 + 4), 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(int))(*(uint32_t *)v74 + 8))(v74);
        if ( __sync_fetch_and_add((volatile int32_t *)(v74 + 8), 0xFFFFFFFF) == 1 )
          (*(void (**)(int))(*(uint32_t *)v74 + 12))(v74);
      }
LABEL_147:
      v180 = (volatile int32_t *)v74;
      if ( __sync_fetch_and_add((volatile int32_t *)(v74 + 4), 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(int))(*(uint32_t *)v74 + 8))(v74);
        if ( __sync_fetch_and_add((volatile int32_t *)(v74 + 8), 0xFFFFFFFF) == 1 )
          (*(void (**)(int))(*(uint32_t *)v74 + 12))(v74);
      }
      goto LABEL_70;
    }
LABEL_287:
    sub_1250932();
  }
  v157 = v219;
  v42 = 0;
  v221 = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(&v221), 0x80u, 0);
  v43 = aCreateResponse /* " Create response from HTTP has parse errors: ..." */[0];
  v178 = " Create response from HTTP has parse errors: {0}\n";
  v44 = "Create response from HTTP has parse errors: {0}\n";
  v159 = 0;
  if ( aCreateResponse /* " Create response from HTTP has parse errors: ..." */[0] == 123 )
    goto LABEL_59;
LABEL_52:
  v45 = v221;
  v46 = (void *)(v42 + 1);
  if ( v42 + 1 > *(uint32_t *)(v221 - 12) )
  {
    v151 = v43;
    sub_1939D80((int)(uintptr_t)(&v221), v42 + 65, 0);
    v45 = v221;
    v46 = (void *)(v42 + 1);
    v43 = v151;
  }
  if ( *(int *)(v45 - 4) >= 0 )
  {
    v152 = v43;
    v145 = v46;
    sub_19397C0(&v221);
    v45 = v221;
    v46 = v145;
    v43 = v152;
  }
  *(uint8_t *)(v45 + v42) = v43;
  v178 = v44;
  v42 = (size_t)v46;
  while ( 1 )
  {
    v43 = *v178;
    if ( *v178 == 0 )
      break;
    v44 = (char *)(v178 + 1);
    if ( v43 != 123 )
      goto LABEL_52;
LABEL_59:
    v47 = v178[1];
    if ( v47 == 123 )
    {
      v82 = v221;
      if ( v42 + 2 > *(uint32_t *)(v221 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v221), v42 + 66, 0);
        v82 = v221;
      }
      v171 = v42 + 1;
      if ( *(int *)(v82 - 4) >= 0 )
      {
        sub_19397C0(&v221);
        v82 = v221;
      }
      *(uint8_t *)(v82 + v42) = 123;
      v83 = v221;
      if ( *(int *)(v221 - 4) >= 0 )
      {
        sub_19397C0(&v221);
        v83 = v221;
      }
      v178 += 2;
      v42 += 2;
      *(uint8_t *)(v83 + v171) = 123;
    }
    else
    {
      if ( v47 == 0 )
        goto LABEL_95;
      v179 = v42;
      v48 = 1;
      v49 = 0;
      while ( 1 )
      {
        v47 = *v44;
        if ( (uint8_t)(*v44 - 48) > 9u )
          break;
        v50 = v48 * v49;
        ++v44;
        v48 *= 10;
        v49 = v50 + v47 - 48;
        if ( *v44 == 0 )
        {
          v42 = v179;
          goto LABEL_65;
        }
      }
      v64 = v49;
      v42 = v179;
      if ( v48 == 1 )
LABEL_95:
        v64 = v159++;
      v178 = v44 + 1;
      if ( v47 == 58 )
      {
        v47 = v44[1];
        if ( v47 == 120 || (v178 = v44 + 2, v47 == 88) )
        {
          v47 = v44[2];
          v178 = v44 + 3;
        }
      }
      if ( v47 != 125 )
      {
LABEL_65:
        sub_1939D80((int)(uintptr_t)(&v221), v42, 0);
        break;
      }
      if ( v64 != 0 )
      {
        sub_1939D80((int)(uintptr_t)(&v221), v42, 0);
      }
      else if ( v157 != nullptr )
      {
        v65 = v221;
        v66 = *(uint32_t *)(v221 - 12);
        if ( v42 + 64 > v66 )
        {
          sub_1939D80((int)(uintptr_t)(&v221), v42 + 128, 0);
          v65 = v221;
          v66 = *(uint32_t *)(v221 - 12);
        }
        v67 = v157;
        v68 = *v157;
        if ( *v157 != 0 )
        {
          if ( v66 <= v42 )
          {
LABEL_110:
            v168 = (size_t)&v67[-v42];
            while ( 1 )
            {
              v70 = v66 + 1;
              if ( v66 + 1 > *(uint32_t *)(v65 - 8) || *(int *)(v65 - 4) > 0 )
              {
                v138 = v68;
                sub_1939B80(&v221, v66 + 1);
                v65 = v221;
                v70 = v66 + 1;
                v68 = v138;
                v66 = *(uint32_t *)(v221 - 12);
              }
              *(uint8_t *)(v65 + v66) = v68;
              v71 = v221;
              if ( (uint32_t *)(v221 - 12) != dword_213B808 )
              {
                *(uint32_t *)(v221 - 4) = 0;
                *(uint32_t *)(v71 - 12) = v70;
                *(uint8_t *)(v71 + v70) = 0;
              }
              ++v42;
              v68 = *(uint8_t *)(v168 + v42);
              if ( v68 == 0 )
                break;
              v65 = v221;
              v66 = *(uint32_t *)(v221 - 12);
            }
          }
          else
          {
            v167 = v66;
            v69 = v157;
            while ( 1 )
            {
              if ( *(int *)(v65 - 4) >= 0 )
              {
                sub_19397C0(&v221);
                v65 = v221;
              }
              *(uint8_t *)(v65 + v42++) = *v69;
              v68 = v69[1];
              if ( v68 == 0 )
                break;
              ++v69;
              if ( v42 >= v167 )
              {
                v65 = v221;
                v67 = v69;
                v66 = *(uint32_t *)(v221 - 12);
                goto LABEL_110;
              }
              v65 = v221;
            }
          }
        }
      }
    }
  }
  sub_1939D80((int)(uintptr_t)(&v221), v42, 0);
  g4_std_compat::string_construct_copy(v191, &v221);
  v51 = (void *)(v221 - 12);
  if ( (uint32_t *)(v221 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v221 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v51);
  }
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v195), "ChatLib", (int)(uintptr_t)(&v186));
  chatv2::Utils::Log(
    3,
    0,
    &v195,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/ArionResponseFactory.cpp",
    62,
    v191);
  v52 = (void *)(v195 - 12);
  if ( (uint32_t *)(v195 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v195 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v52);
  }
  v53 = (void *)(v191[0] - 12);
  if ( (uint32_t *)(v191[0] - 12) == dword_213B808 )
  {
    v180 = nullptr;
  }
  else
  {
    v180 = nullptr;
    if ( __sync_fetch_and_add((volatile int32_t *)(v191[0] - 4), 0xFFFFFFFF) <= 0 )
      g4_std_compat::string_rep_destroy(v53);
  }
LABEL_70:
  v54 = v214;
  if ( v214 != nullptr )
  {
    v55 = *(uint32_t **)v214;
    if ( *(uint32_t *)v214 != 0 && v55 != *((uint32_t **)v214 + 2) )
    {
      while ( 1 )
      {
        v56 = (uint32_t *)v55[2];
        free(v55);
        *(uint32_t *)v54 = (uint32_t)(uintptr_t)(v56);
        if ( v56 == nullptr || v56 == *((uint32_t **)v54 + 2) )
          break;
        v55 = v56;
      }
    }
    operator delete(*((void **)v54 + 4));
    operator delete(v54);
  }
  if ( v180 != nullptr && __sync_fetch_and_add(v180 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(volatile int32_t *))(*v180 + 8))(v180);
    if ( __sync_fetch_and_add(v180 + 2, 0xFFFFFFFF) == 1 )
      (*(void (**)(volatile int32_t *))(*v180 + 12))(v180);
  }
}


// ============================================================================
// Address:   0x1250380 (size: 27 bytes)
// Symbol:    _ZN6chatv29Responses16IResponseFactoryD2Ev
// Demangled: chatv2::Responses::IResponseFactory::~IResponseFactory()
// ============================================================================
// Alternative name is '_ZN6chatv29Responses16IResponseFactoryD1Ev'
static void g4_chatv2_resp_dtor_1(void *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2092628);
}


// ============================================================================
// Address:   0x12506e0 (size: 45 bytes)
// Symbol:    _ZN6chatv29Responses16IResponseFactoryD0Ev
// Demangled: chatv2::Responses::IResponseFactory::~IResponseFactory()
// ============================================================================
static void g4_chatv2_resp_dtor_2(void *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2092628);
  operator delete(self);
}


// ============================================================================
// Address:   0x12540a0 (size: 45 bytes)
// Symbol:    _ZN6chatv29Responses18InviteUserResponseD2Ev
// Demangled: chatv2::Responses::InviteUserResponse::Destroy()
// ============================================================================
// Alternative name is '_ZN6chatv29Responses18InviteUserResponseD1Ev'
void chatv2::Responses::InviteUserResponse::Destroy(chatv2::Responses::InviteUserResponse::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20926E8);
  chatv2::Responses::IServerResponse::Destroy(self);
}


// ============================================================================
// Address:   0x12540d0 (size: 56 bytes)
// Symbol:    _ZN6chatv29Responses18InviteUserResponseD0Ev
// Demangled: chatv2::Responses::InviteUserResponse::Destroy_del()
// ============================================================================
void chatv2::Responses::InviteUserResponse::Destroy_del(chatv2::Responses::InviteUserResponse::Self *self)
{
  chatv2::Responses::InviteUserResponse::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x1254110 (size: 1122 bytes)
// Symbol:    _ZN6chatv29Responses18InviteUserResponse7ExecuteEv
// Demangled: chatv2::Responses::InviteUserResponse::Execute(void)
// ============================================================================
int chatv2::Responses::InviteUserResponse::Execute(chatv2::Responses::InviteUserResponse::Self *self)
{
  chatv2::Responses::InviteUserResponse::Self *v1;
  void *v2;
  void *v3;
  int v4;
  uint8_t *untyped_deleter;
  void *v6;
  int v7;
  int v8;
  void (*v9)(int, uint8_t **);
  volatile int32_t *v10;
  chatv2::Requests::ArionRequestFactory::Self *v11;
  int InviteClient;
  volatile int32_t *v13;
  int result;
  typedef char *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t *_g4_t_v18;
  typedef volatile int32_t *_g4_t_v19;
  typedef uint8_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v29;
  typedef volatile int32_t *_g4_t_v30;
  typedef uint32_t _g4_t_v31[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v17)) > _g4_s2 ? (0u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v18)) > _g4_s3 ? (32u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v20)) > _g4_s5 ? (40u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (53u + sizeof(_g4_t_v21)) > _g4_s6 ? (53u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v22)) > _g4_s7 ? (56u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v23)) > _g4_s8 ? (60u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v24)) > _g4_s9 ? (64u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v25)) > _g4_s10 ? (68u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v26)) > _g4_s11 ? (72u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v27)) > _g4_s12 ? (76u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v28)) > _g4_s13 ? (80u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v29)) > _g4_s14 ? (92u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v30)) > _g4_s15 ? (96u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v31)) > _g4_s16 ? (100u + sizeof(_g4_t_v31)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 53u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);

  v31[4] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v23), " Invite User response execute\n", (int)(uintptr_t)(&v21) + 2);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v24), "ChatLib", (int)(uintptr_t)(&v21));
  chatv2::Utils::Log(
    3,
    0,
    &v24,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/InviteUserResponse.cpp",
    20,
    &v23);
  v2 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    v15 = (char *)&v22 + 1;
    g4_std_compat::string_rep_destroy(v2);
  }
  v3 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    v15 = (char *)&v22 + 2;
    g4_std_compat::string_rep_destroy(v3);
  }
  v4 = (int)(uintptr_t)(operator new(0x38u));
  *(uint32_t *)(v4 + 4) = 1;
  *(uint32_t *)(v4 + 8) = 1;
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_2092388);
  *(uint32_t *)(v4 + 12) = 0;
  *(uint8_t *)(v4 + 16) = 0;
  untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v4);
  v20 = untyped_deleter + 4;
  if ( untyped_deleter != (uint8_t *)-4 )
  {
    v18 = untyped_deleter;
    chatv2::Responses::ClientResponse::ClientResponse(untyped_deleter + 4, 2, (char *)v1 + 8);
    untyped_deleter = v18;
  }
  *untyped_deleter = 1;
  __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(int, char *))(*(uint32_t *)v4 + 8))(v4, v15);
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
      (*(void (**)(int))(*(uint32_t *)v4 + 12))(v4);
  }
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v25), "user invited", (int)(uintptr_t)(&v21) + 1);
  if ( v20 == nullptr )
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
  chatv2::Responses::ClientResponse::SetMessage(v20, &v25);
  v6 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v22 + 3;
    g4_std_compat::string_rep_destroy(v6);
  }
  if ( *(uint32_t *)(*((uint32_t *)v1 + 4) + 36) != 0
    && boost::function1<void,boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::dummy::nonnull != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
    v7 = *((uint32_t *)v1 + 4);
    v8 = *(uint32_t *)(v7 + 36);
    if ( v8 == 0 )
    {
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v26), "call to empty boost::function", (int)(uintptr_t)(&v22));
      sub_19042E0(v31, &v26);
      g4_noop_dtor(&v26);
      v31[0] = ((uint32_t)(uintptr_t)&off_20495A8);
      std::terminate();
    }
    v27 = v20;
    v9 = *(void (**)(int, uint8_t **))((v8 & 0xFFFFFFFE) + 4);
    v28 = v4;
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
    v9(v7 + 40, &v27);
    v10 = (volatile int32_t *)v28;
    if ( v28 != 0 && __sync_fetch_and_add((volatile int32_t *)(v28 + 4), 0xFFFFFFFF) == 1 )
    {
      v19 = v10;
      (*(void (**)(volatile int32_t *))(*v10 + 8))(v10);
      if ( __sync_fetch_and_add(v19 + 2, 0xFFFFFFFF) == 1 )
        (*(void (**)(volatile int32_t *))(*v19 + 12))(v19);
    }
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(int))(*(uint32_t *)v4 + 8))(v4);
      if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
        (*(void (**)(int))(*(uint32_t *)v4 + 12))(v4);
    }
    v17 = *((uint32_t *)v1 + 4);
    chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v29);
    v11 = v29;
    if ( v29 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Req"
        "uests::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
        "px != 0");
      v11 = v29;
    }
    InviteClient = (int)(uintptr_t)(chatv2::Requests::ArionRequestFactory::GetInviteClient(v11));
    (*(void (**)(int, int))(*(uint32_t *)InviteClient + 4))(InviteClient, v17);
    v13 = v30;
    if ( v30 != nullptr && __sync_fetch_and_add(v30 + 1, 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(volatile int32_t *))(*v13 + 8))(v13);
      if ( __sync_fetch_and_add(v13 + 2, 0xFFFFFFFF) == 1 )
        (*(void (**)(volatile int32_t *))(*v13 + 12))(v13);
    }
  }
  result = __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF);
  if ( result == 1 )
  {
    result = (*(int (**)(int, char *))(*(uint32_t *)v4 + 8))(v4, v16);
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
      return (*(int (**)(int))(*(uint32_t *)v4 + 12))(v4);
  }
  return result;
}


// ============================================================================
// Address:   0x1254580 (size: 169 bytes)
// Symbol:    _ZN6chatv29Responses18InviteUserResponseC1EPNS_4Core13ArionExecutorERKSsNS2_11ChannelTypeE
// Demangled: chatv2::Responses::InviteUserResponse::InviteUserResponse(::ArionExecutor *,std::string const&,chatv2::Core::ChannelType)
// ============================================================================
// Alternative name is '_ZN6chatv29Responses18InviteUserResponseC2EPNS_4Core13ArionExecutorERKSsNS2_11ChannelTypeE'
int chatv2::Responses::InviteUserResponse::InviteUserResponse(uint32_t *a1, int a2, int a3, int a4)
{
  void *v4;
  uint16_t v6[3];

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v6[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v6));
  chatv2::Responses::IServerResponse::Construct(a1, a3, a4, &v6[1]);
  v4 = (void *)(*(uint32_t *)&v6[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v6[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v6[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v4);
  }
  *a1 = (uint32_t)(uintptr_t)(&off_20926E8);
  a1[4] = a2;
  return a2;
}


// ============================================================================
// Address:   0x1254630 (size: 9 bytes)
// Symbol:    _ZN6chatv29Responses18InviteUserResponse5ParseERN9rapidjson15GenericDocumentINS2_4UTF8IcEENS2_19MemoryPoolAllocatorINS2_12CrtAllocatorEEEEE
// Demangled: chatv2::Responses::InviteUserResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================
void chatv2::Responses::InviteUserResponse::Parse()
{
  ;
}


// ============================================================================
// Address:   0x1254ab0 (size: 204 bytes)
// Symbol:    _ZN6chatv29Responses20MessageArionResponseD2Ev
// Demangled: chatv2::Responses::MessageArionResponse::Destroy()
// ============================================================================
// Alternative name is '_ZN6chatv29Responses20MessageArionResponseD1Ev'
void chatv2::Responses::MessageArionResponse::Destroy(
        chatv2::Responses::MessageArionResponse::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092700);
  chatv2::Core::ArionUser::Destroy((chatv2::Responses::MessageArionResponse::Self *)((char *)self + 32));
  v1 = *((uint32_t *)self + 7);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 6);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 5);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v3 - 12));
  }
  chatv2::Responses::IServerResponse::Destroy(self);
}


// ============================================================================
// Address:   0x1254b80 (size: 56 bytes)
// Symbol:    _ZN6chatv29Responses20MessageArionResponseD0Ev
// Demangled: chatv2::Responses::MessageArionResponse::Destroy()
// ============================================================================
void chatv2::Responses::MessageArionResponse::Destroy_del(
        chatv2::Responses::MessageArionResponse::Self *self)
{
  chatv2::Responses::MessageArionResponse::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x1254bc0 (size: 1359 bytes)
// Symbol:    _ZN6chatv29Responses20MessageArionResponse7ExecuteEv
// Demangled: chatv2::Responses::MessageArionResponse::Execute(void)
// ============================================================================
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

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v25), " Message arion response execute\n", (int)(uintptr_t)(&v24));
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v26), "ChatLib", (int)(uintptr_t)(&v23));
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
    g4_std_compat::string_rep_destroy(v1);
  }
  v2 = (void *)(v25[0] - 12);
  if ( (uint32_t *)(v25[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v24 + 3;
    g4_std_compat::string_rep_destroy(v2);
  }
  v3 = (int)(uintptr_t)(operator new(0x38u));
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
    (*(void (**)(int, char *))(*(uint32_t *)v3 + 8))(v3, v16);
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 8), 0xFFFFFFFF) == 1 )
      (*(void (**)(int))(*(uint32_t *)v3 + 12))(v3);
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
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v27), "call to empty boost::function", (int)(uintptr_t)(&v24) + 1);
      sub_19042E0(&v30, &v27);
      g4_noop_dtor(&v27);
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
      (*(void (**)(volatile int32_t *))(*v12 + 8))(v12);
      if ( __sync_fetch_and_add(v12 + 2, 0xFFFFFFFF) == 1 )
        (*(void (**)(volatile int32_t *))(*v12 + 12))(v12);
    }
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 4), 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(int))(*(uint32_t *)v3 + 8))(v3);
      if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 8), 0xFFFFFFFF) == 1 )
        (*(void (**)(int))(*(uint32_t *)v3 + 12))(v3);
    }
  }
  result = __sync_fetch_and_add((volatile int32_t *)(v3 + 4), 0xFFFFFFFF);
  if ( result == 1 )
  {
    result = (*(int (**)(int))(*(uint32_t *)v3 + 8))(v3);
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 8), 0xFFFFFFFF) == 1 )
      return (*(int (**)(int))(*(uint32_t *)v3 + 12))(v3);
  }
  return result;
}


// ============================================================================
// Address:   0x1255110 (size: 194 bytes)
// Symbol:    _ZN6chatv29Responses20MessageArionResponseC1EPNS_4Core13ArionExecutorERKSsNS2_11ChannelTypeE
// Demangled: chatv2::Responses::MessageArionResponse::MessageArionResponse(::ArionExecutor *,std::string const&,chatv2::Core::ChannelType)
// ============================================================================
// Alternative name is '_ZN6chatv29Responses20MessageArionResponseC2EPNS_4Core13ArionExecutorERKSsNS2_11ChannelTypeE'
chatv2::Core::ArionUser::Self *chatv2::Responses::MessageArionResponse::Construct(
        uint32_t *a1,
        int a2,
        int a3,
        int a4)
{
  void *v4;
  uint16_t v6[3];

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v6[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v6));
  chatv2::Responses::IServerResponse::Construct(a1, a3, a4, &v6[1]);
  v4 = (void *)(*(uint32_t *)&v6[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v6[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v6[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v4);
  }
  *a1 = (uint32_t)(uintptr_t)(&off_2092700);
  a1[4] = a2;
  a1[5] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[6] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[7] = (uint32_t)(uintptr_t)(&dword_213B814);
  return (chatv2::Core::ArionUser::Self *)((int *)(chatv2::Core::ArionUser::ArionUser((chatv2::Core::ArionUser::Self *)(a1 + 8))));
}


// ============================================================================
// Address:   0x12551e0 (size: 5140 bytes)
// Symbol:    _ZN6chatv29Responses20MessageArionResponse5ParseERN9rapidjson15GenericDocumentINS2_4UTF8IcEENS2_19MemoryPoolAllocatorINS2_12CrtAllocatorEEEEE
// Demangled: chatv2::Responses::MessageArionResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================
int chatv2::Responses::MessageArionResponse::Parse(
        chatv2::Responses::MessageArionResponse::Self *self,
        rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2)
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
  v164[0] = (int)(uintptr_t)(&dword_213B814);
  v165[0] = (int)(uintptr_t)(&dword_213B814);
  v166[0] = (int)(uintptr_t)(&dword_213B814);
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
  v168[0] = (int)(uintptr_t)(&dword_213B814);
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

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::RoomInfoArionResponse::Destroy  (binary VA: 0x1256a70)
// Original: chatv2::Responses::RoomInfoArionResponse::~RoomInfoArionResponse
// ----------------------------------------------------------------------------
void chatv2::Responses::RoomInfoArionResponse::Destroy(chatv2::Responses::RoomInfoArionResponse::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092718);
  v1 = *((uint32_t *)self + 9);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 8);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  g4_noop_dtor(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::RoomInfoArionResponse::Destroy_ea1256b10  (binary VA: 0x1256b10)
// Original: chatv2::Responses::RoomInfoArionResponse::~RoomInfoArionResponse
// ----------------------------------------------------------------------------
void chatv2::Responses::RoomInfoArionResponse::Destroy_ea1256b10(chatv2::Responses::RoomInfoArionResponse::Self *self)
{
  chatv2::Responses::RoomInfoArionResponse::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::RoomInfoArionResponse::Execute  (binary VA: 0x1256b50)
// Original: chatv2::Responses::RoomInfoArionResponse::Execute
// ----------------------------------------------------------------------------
int chatv2::Responses::RoomInfoArionResponse::Execute(chatv2::Responses::RoomInfoArionResponse::Self *self)
{
  chatv2::Responses::RoomInfoArionResponse::Self *v1;
  void *v2;
  void *v3;
  int v4;
  uint8_t *untyped_deleter;
  int User;
  int v7;
  int v8;
  void (*v9)(int, chatv2::Responses::ClientResponse::Self **);
  volatile int32_t *v10;
  int v11;
  volatile int32_t *v12;
  chatv2::Core::ArionChannel::Self *v13;
  char *v14;
  chatv2::Core::ArionChannel::Self *v15;
  unsigned int v16;
  chatv2::Core::ArionChannel::Self *v17;
  unsigned int v18;
  chatv2::Core::ArionChannel::Self *v19;
  volatile int32_t *v20;
  int result;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef volatile int32_t *_g4_t_v25;
  typedef volatile int32_t *_g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef chatv2::Responses::ClientResponse::Self *_g4_t_v29;
  typedef chatv2::Responses::ClientResponse::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33[2];
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v36;
  typedef volatile int32_t *_g4_t_v37;
  typedef chatv2::Responses::ClientResponse::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef volatile int32_t *_g4_t_v41;
  typedef uint32_t _g4_t_v42[8];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v23)) > _g4_s1 ? (0u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v24)) > _g4_s2 ? (40u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v25)) > _g4_s3 ? (40u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v26)) > _g4_s4 ? (40u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v27)) > _g4_s5 ? (44u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v28)) > _g4_s6 ? (52u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v29)) > _g4_s7 ? (56u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v30)) > _g4_s8 ? (56u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (71u + sizeof(_g4_t_v31)) > _g4_s9 ? (71u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v32)) > _g4_s10 ? (72u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v33)) > _g4_s11 ? (76u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v34)) > _g4_s12 ? (84u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v35)) > _g4_s13 ? (88u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v36)) > _g4_s14 ? (92u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v37)) > _g4_s15 ? (96u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v38)) > _g4_s16 ? (108u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v39)) > _g4_s17 ? (112u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v40)) > _g4_s18 ? (124u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v41)) > _g4_s19 ? (128u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v42)) > _g4_s20 ? (132u + sizeof(_g4_t_v42)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 71u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 88u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 92u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 96u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 108u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 112u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 132u);

  v42[4] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v33), " Room info arion response execute\n", (int)(uintptr_t)(&v32));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "ChatLib", (int)(uintptr_t)(&v31));
  chatv2::Utils::Log(
    3,
    0,
    &v34,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Responses/Arion/RoomInfoArionResponse.cpp",
    46,
    v33);
  v2 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    v22 = (char *)&v32 + 2;
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v33[0] - 12);
  if ( (uint32_t *)(v33[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v22 = (char *)&v32 + 3;
    g4_std::string::Rep::M_destroy(v3);
  }
  v28 = (char *)v1 + 8;
  v4 = opNew(0x38u);
  *(uint32_t *)(v4 + 4) = 1;
  *(uint32_t *)(v4 + 8) = 1;
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_2092388);
  *(uint32_t *)(v4 + 12) = 0;
  *(uint8_t *)(v4 + 16) = 0;
  untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v4);
  v29 = (chatv2::Responses::ClientResponse::Self *)(untyped_deleter + 4);
  if ( untyped_deleter != (uint8_t *)-4 )
  {
    v24 = untyped_deleter;
    chatv2::Responses::ClientResponse::ClientResponse(untyped_deleter + 4, 1, v28);
    untyped_deleter = v24;
  }
  *untyped_deleter = 1;
  __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8, v22);
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v4, 12);
  }
  if ( v29 != nullptr )
  {
    chatv2::Responses::ClientResponse::SetMessage(v29, (char *)v1 + 36);
  }
  else
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
    chatv2::Responses::ClientResponse::SetMessage(0, (char *)v1 + 36);
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
  }
  User = (int)(uintptr_t)(chatv2::Responses::ClientResponse::GetUser(v29));
  chatv2::Core::ArionUser::SetNickname(User, v28);
  if ( *(uint32_t *)(*((uint32_t *)v1 + 4) + 36) != 0
    && boost::function1<void,boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::dummy::nonnull != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
    v7 = *((uint32_t *)v1 + 4);
    v8 = *(uint32_t *)(v7 + 36);
    if ( v8 == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "call to empty boost::function", (int)(uintptr_t)(&v32) + 1);
      sub_19042E0(v42, &v35);
      g4_std::string::Destroy(&v35);
      v42[0] = ((uint32_t)(uintptr_t)&off_20495A8);
      std::terminate();
    }
    v38 = v29;
    v9 = *(void (**)(int, chatv2::Responses::ClientResponse::Self **))((v8 & 0xFFFFFFFE) + 4);
    v39 = v4;
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
    v9(v7 + 40, &v38);
    v10 = (volatile int32_t *)v39;
    if ( v39 != 0 && __sync_fetch_and_add((volatile int32_t *)(v39 + 4), 0xFFFFFFFF) == 1 )
    {
      v26 = v10;
      G4_VCALL<void>(v10, 8);
      if ( __sync_fetch_and_add(v26 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v26, 12);
    }
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v4, 8);
      if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v4, 12);
    }
  }
  v30 = *((chatv2::Responses::ClientResponse::Self **)v1 + 3);
  chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v40);
  v11 = v40;
  if ( v40 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v11 = v40;
  }
  v23 = v11;
  chatv2::Requests::ArionRequestFactory::GetChannel(&v36);
  v12 = v41;
  if ( v41 != nullptr && __sync_fetch_and_add(v41 + 1, 0xFFFFFFFF) == 1 )
  {
    v25 = v12;
    G4_VCALL<void>(v12, 8, v23, v28, v30);
    if ( __sync_fetch_and_add(v25 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v25, 12);
  }
  v13 = v36;
  v14 = (char *)v1 + 32;
  if ( v36 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
      "px != 0");
    v13 = v36;
    v14 = (char *)v1 + 32;
  }
  chatv2::Core::ArionChannel::SetReconnectKey(v13, v14);
  v15 = v36;
  v16 = *((uint32_t *)v1 + 7);
  if ( v36 == nullptr )
  {
    v27 = *((uint32_t *)v1 + 7);
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
      "px != 0");
    v15 = v36;
    v16 = v27;
  }
  chatv2::Core::ArionChannel::SetSendQuota(v15, v16);
  v17 = v36;
  v18 = *((uint32_t *)v1 + 6);
  if ( v36 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
      "px != 0");
    v17 = v36;
  }
  chatv2::Core::ArionChannel::SetQuotaPeriod(v17, v18);
  v19 = v36;
  if ( v36 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
      "px != 0");
    v19 = v36;
  }
  chatv2::Core::ArionChannel::SetReceivingMessages(v19, true);
  v20 = v37;
  if ( v37 != nullptr && __sync_fetch_and_add(v37 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v20, 8);
    if ( __sync_fetch_and_add(v20 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v20, 12);
  }
  result = __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF);
  if ( result == 1 )
  {
    result = G4_VCALL<int>(v4, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
      return G4_VCALL<int>(v4, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::RoomInfoArionResponse::Construct  (binary VA: 0x1257180)
// Original: chatv2::Responses::RoomInfoArionResponse::RoomInfoArionResponse
// ----------------------------------------------------------------------------
uint32_t * chatv2::Responses::RoomInfoArionResponse::Construct(uint32_t *a1, int a2, int a3, int a4)
{
  void *v4;
  uint16_t v6[3];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v6));
  chatv2::Responses::IServerResponse::Construct(a1, a3, a4, &v6[1]);
  v4 = (void *)(*(uint32_t *)&v6[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v6[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v6[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  a1[5] = 0;
  a1[6] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_2092718);
  a1[4] = a2;
  a1[7] = 0;
  a1[8] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[9] = (uint32_t)(uintptr_t)(&dword_213B814);
  return &dword_213B814;
}



// ============================================================================
// Address:   0x1257250 (size: 3221 bytes)
// Symbol:    _ZN6chatv29Responses21RoomInfoArionResponse5ParseERN9rapidjson15GenericDocumentINS2_4UTF8IcEENS2_19MemoryPoolAllocatorINS2_12CrtAllocatorEEEEE
// Demangled: chatv2::Responses::RoomInfoArionResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================
int chatv2::Responses::RoomInfoArionResponse::Parse(
        chatv2::Responses::RoomInfoArionResponse::Self *self,
        rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2)
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
  v97 = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(&v97), 0x80u, 0);
  v99 = 0;
  v94 = 0;
  v42 = aRoomInfoArionR_0[0];
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
        v63 = (jcore::parsing::detail **)((char *)v52 + 20);
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
        jcore::parsing::FormatToString<std::string,jcore::parsing::Placeholder>((int)(uintptr_t)(&v97), (int)(uintptr_t)(&v99), (int)(uintptr_t)(&v100), *v63);
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
  g4_std_compat::string_construct_copy(v96, &v97);
  v53 = (void *)(v97 - 12);
  if ( (uint32_t *)(v97 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v97 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v53);
  }
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v98), "ChatLib", (int)(uintptr_t)(&v95));
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
    g4_std_compat::string_rep_destroy(v54);
  }
  result = v96[0];
  v56 = (void *)(v96[0] - 12);
  if ( (uint32_t *)(v96[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v96[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return g4_std_compat::string_rep_destroy(v56);
  }
  return result;
}


// ============================================================================
// Address:   0x1258760 (size: 193 bytes)
// Symbol:    _ZN6chatv29Responses22SubscribeArionResponseD2Ev
// Demangled: chatv2::Responses::SubscribeArionResponse::Destroy()
// ============================================================================
// Alternative name is '_ZN6chatv29Responses22SubscribeArionResponseD1Ev'
void chatv2::Responses::SubscribeArionResponse::Destroy(
        chatv2::Responses::SubscribeArionResponse::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092730);
  v1 = *((uint32_t *)self + 7);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 6);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 5);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v3 - 12));
  }
  chatv2::Responses::IServerResponse::Destroy(self);
}


// ============================================================================
// Address:   0x1258830 (size: 56 bytes)
// Symbol:    _ZN6chatv29Responses22SubscribeArionResponseD0Ev
// Demangled: chatv2::Responses::SubscribeArionResponse::Destroy()
// ============================================================================
void chatv2::Responses::SubscribeArionResponse::Destroy_del(
        chatv2::Responses::SubscribeArionResponse::Self *self)
{
  chatv2::Responses::SubscribeArionResponse::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x1258870 (size: 538 bytes)
// Symbol:    _ZN6chatv29Responses22SubscribeArionResponse7ExecuteEv
// Demangled: chatv2::Responses::SubscribeArionResponse::Execute(void)
// ============================================================================
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
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v15), " Subscribe info arion response execute\n", (int)(uintptr_t)(&v14) + 1);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v16), "ChatLib", (int)(uintptr_t)(&v14));
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
    g4_std_compat::string_rep_destroy(v2);
  }
  v3 = (void *)(v15[0] - 12);
  if ( (uint32_t *)(v15[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v3);
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
      result = (*(int (**)(volatile int32_t *, int, char *, char *, int, char *, char *))(*v7 + 8))(
                 v7,
                 v9,
                 v10,
                 v11,
                 v4,
                 v12,
                 v13);
      if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
        result = (*(int (**)(volatile int32_t *))(*v7 + 12))(v7);
    }
  }
  v8 = v18;
  if ( v18 != nullptr )
  {
    result = __sync_fetch_and_add(v18 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      result = (*(int (**)(volatile int32_t *))(*v8 + 8))(v8);
      if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
        return (*(int (**)(volatile int32_t *))(*v8 + 12))(v8);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x1258a90 (size: 199 bytes)
// Symbol:    _ZN6chatv29Responses22SubscribeArionResponseC1EPNS_4Core13ArionExecutorERKSsS6_NS2_11ChannelTypeE
// Demangled: chatv2::Responses::SubscribeArionResponse::SubscribeArionResponse(::ArionExecutor *,std::string const&,std::string const&,chatv2::Core::ChannelType)
// ============================================================================
// Alternative name is '_ZN6chatv29Responses22SubscribeArionResponseC2EPNS_4Core13ArionExecutorERKSsS6_NS2_11ChannelTypeE'
int chatv2::Responses::SubscribeArionResponse::SubscribeArionResponse(
        uint32_t *a1,
        int a2,
        int a3,
        int a4,
        int a5)
{
  void *v5;
  uint16_t v7[3];

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v7[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v7));
  chatv2::Responses::IServerResponse::Construct(a1, a3, a5, &v7[1]);
  v5 = (void *)(*(uint32_t *)&v7[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v7[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v7[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v5);
  }
  *a1 = (uint32_t)(uintptr_t)(&off_2092730);
  a1[4] = a2;
  a1[5] = (uint32_t)(uintptr_t)(&dword_213B814);
  a1[6] = (uint32_t)(uintptr_t)(&dword_213B814);
  return g4_std_compat::string_construct_copy(a1 + 7, a4);
}


// ============================================================================
// Address:   0x1258b60 (size: 2075 bytes)
// Symbol:    _ZN6chatv29Responses22SubscribeArionResponse5ParseERN9rapidjson15GenericDocumentINS2_4UTF8IcEENS2_19MemoryPoolAllocatorINS2_12CrtAllocatorEEEEE
// Demangled: chatv2::Responses::SubscribeArionResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================
int chatv2::Responses::SubscribeArionResponse::Parse(
        chatv2::Responses::SubscribeArionResponse::Self *self,
        rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2)
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
  v75[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v75), 0x80u, 0);
  v21 = aSubscribeArion_0[0];
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
  g4_std_compat::string_construct_copy(v74, v75);
  v36 = (void *)(v75[0] - 12);
  if ( (uint32_t *)(v75[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v75[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v36);
  }
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v76), "ChatLib", (int)(uintptr_t)(&v73));
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
    g4_std_compat::string_rep_destroy(v37);
  }
  result = v74[0];
  v39 = (void *)(v74[0] - 12);
  if ( (uint32_t *)(v74[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v74[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return g4_std_compat::string_rep_destroy(v39);
  }
  return result;
}


// ============================================================================
// Address:   0x126f030 (size: 45 bytes)
// Symbol:    _ZN6chatv29Responses18ReportUserResponseD2Ev
// Demangled: chatv2::Responses::ReportUserResponse::Destroy()
// ============================================================================
// Alternative name is '_ZN6chatv29Responses18ReportUserResponseD1Ev'
void chatv2::Responses::ReportUserResponse::Destroy(chatv2::Responses::ReportUserResponse::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092990);
  chatv2::Responses::IServerResponse::Destroy(self);
}


// ============================================================================
// Address:   0x126f060 (size: 56 bytes)
// Symbol:    _ZN6chatv29Responses18ReportUserResponseD0Ev
// Demangled: chatv2::Responses::ReportUserResponse::Destroy_del()
// ============================================================================
void chatv2::Responses::ReportUserResponse::Destroy_del(chatv2::Responses::ReportUserResponse::Self *self)
{
  chatv2::Responses::ReportUserResponse::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x126f0a0 (size: 1122 bytes)
// Symbol:    _ZN6chatv29Responses18ReportUserResponse7ExecuteEv
// Demangled: chatv2::Responses::ReportUserResponse::Execute(void)
// ============================================================================
int chatv2::Responses::ReportUserResponse::Execute(chatv2::Responses::ReportUserResponse::Self *self)
{
  chatv2::Responses::ReportUserResponse::Self *v1;
  void *v2;
  void *v3;
  int v4;
  uint8_t *untyped_deleter;
  void *v6;
  int v7;
  int v8;
  void (*v9)(int, uint8_t **);
  volatile int32_t *v10;
  chatv2::Requests::ArionRequestFactory::Self *v11;
  int ReportClient;
  volatile int32_t *v13;
  int result;
  typedef char *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t *_g4_t_v18;
  typedef volatile int32_t *_g4_t_v19;
  typedef uint8_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v29;
  typedef volatile int32_t *_g4_t_v30;
  typedef uint32_t _g4_t_v31[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v17)) > _g4_s2 ? (0u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v18)) > _g4_s3 ? (32u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v20)) > _g4_s5 ? (40u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (53u + sizeof(_g4_t_v21)) > _g4_s6 ? (53u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v22)) > _g4_s7 ? (56u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v23)) > _g4_s8 ? (60u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v24)) > _g4_s9 ? (64u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v25)) > _g4_s10 ? (68u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v26)) > _g4_s11 ? (72u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v27)) > _g4_s12 ? (76u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v28)) > _g4_s13 ? (80u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v29)) > _g4_s14 ? (92u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v30)) > _g4_s15 ? (96u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v31)) > _g4_s16 ? (100u + sizeof(_g4_t_v31)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 53u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);

  v31[4] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v23), " Report User response execute\n", (int)(uintptr_t)(&v21) + 2);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v24), "ChatLib", (int)(uintptr_t)(&v21));
  chatv2::Utils::Log(
    3,
    0,
    &v24,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Report/ReportUserResponse.cpp",
    20,
    &v23);
  v2 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    v15 = (char *)&v22 + 1;
    g4_std_compat::string_rep_destroy(v2);
  }
  v3 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    v15 = (char *)&v22 + 2;
    g4_std_compat::string_rep_destroy(v3);
  }
  v4 = (int)(uintptr_t)(operator new(0x38u));
  *(uint32_t *)(v4 + 4) = 1;
  *(uint32_t *)(v4 + 8) = 1;
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_2092388);
  *(uint32_t *)(v4 + 12) = 0;
  *(uint8_t *)(v4 + 16) = 0;
  untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v4);
  v20 = untyped_deleter + 4;
  if ( untyped_deleter != (uint8_t *)-4 )
  {
    v18 = untyped_deleter;
    chatv2::Responses::ClientResponse::ClientResponse(untyped_deleter + 4, 4, (char *)v1 + 8);
    untyped_deleter = v18;
  }
  *untyped_deleter = 1;
  __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(int, char *))(*(uint32_t *)v4 + 8))(v4, v15);
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
      (*(void (**)(int))(*(uint32_t *)v4 + 12))(v4);
  }
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v25), "user reported", (int)(uintptr_t)(&v21) + 1);
  if ( v20 == nullptr )
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
  chatv2::Responses::ClientResponse::SetMessage(v20, &v25);
  v6 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v22 + 3;
    g4_std_compat::string_rep_destroy(v6);
  }
  if ( *(uint32_t *)(*((uint32_t *)v1 + 4) + 36) != 0
    && boost::function1<void,boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::dummy::nonnull != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
    v7 = *((uint32_t *)v1 + 4);
    v8 = *(uint32_t *)(v7 + 36);
    if ( v8 == 0 )
    {
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v26), "call to empty boost::function", (int)(uintptr_t)(&v22));
      sub_19042E0(v31, &v26);
      g4_std::string::Destroy(&v26);
      v31[0] = ((uint32_t)(uintptr_t)&off_20495A8);
      std::terminate();
    }
    v27 = v20;
    v9 = *(void (**)(int, uint8_t **))((v8 & 0xFFFFFFFE) + 4);
    v28 = v4;
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
    v9(v7 + 40, &v27);
    v10 = (volatile int32_t *)v28;
    if ( v28 != 0 && __sync_fetch_and_add((volatile int32_t *)(v28 + 4), 0xFFFFFFFF) == 1 )
    {
      v19 = v10;
      (*(void (**)(volatile int32_t *))(*v10 + 8))(v10);
      if ( __sync_fetch_and_add(v19 + 2, 0xFFFFFFFF) == 1 )
        (*(void (**)(volatile int32_t *))(*v19 + 12))(v19);
    }
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(int))(*(uint32_t *)v4 + 8))(v4);
      if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
        (*(void (**)(int))(*(uint32_t *)v4 + 12))(v4);
    }
    v17 = *((uint32_t *)v1 + 4);
    chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v29);
    v11 = v29;
    if ( v29 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Req"
        "uests::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
        "px != 0");
      v11 = v29;
    }
    ReportClient = (int)(uintptr_t)(chatv2::Requests::ArionRequestFactory::GetReportClient(v11));
    (*(void (**)(int, int))(*(uint32_t *)ReportClient + 4))(ReportClient, v17);
    v13 = v30;
    if ( v30 != nullptr && __sync_fetch_and_add(v30 + 1, 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(volatile int32_t *))(*v13 + 8))(v13);
      if ( __sync_fetch_and_add(v13 + 2, 0xFFFFFFFF) == 1 )
        (*(void (**)(volatile int32_t *))(*v13 + 12))(v13);
    }
  }
  result = __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF);
  if ( result == 1 )
  {
    result = (*(int (**)(int, char *))(*(uint32_t *)v4 + 8))(v4, v16);
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
      return (*(int (**)(int))(*(uint32_t *)v4 + 12))(v4);
  }
  return result;
}


// ============================================================================
// Address:   0x126f510 (size: 241 bytes)
// Symbol:    _ZN6chatv29Responses18ReportUserResponseC1EPNS_4Core13ArionExecutorE
// Demangled: chatv2::Responses::ReportUserResponse::ReportUserResponse(::ArionExecutor *)
// ============================================================================
// Alternative name is '_ZN6chatv29Responses18ReportUserResponseC2EPNS_4Core13ArionExecutorE'
chatv2::Responses::ReportUserResponse::Self *chatv2::Responses::ReportUserResponse::Construct(
        chatv2::Responses::ReportUserResponse::Self *self,
        ::ArionExecutor *a2)
{
  void *v2;
  void *v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[3];
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(v6), (char *)&unk_1B15112, (int)(uintptr_t)(&v5) + 1);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v7), (char *)&unk_1B15112, (int)(uintptr_t)(&v5));
  chatv2::Responses::IServerResponse::Construct(self, &v7, 2, v6);
  v2 = (void *)(v7 - 12);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v2);
  }
  v3 = (void *)(v6[0] - 12);
  if ( (uint32_t *)(v6[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v3);
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092990);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2);
  return (chatv2::Responses::ReportUserResponse::Self *)(a2);
}


// ============================================================================
// Address:   0x126f610 (size: 9 bytes)
// Symbol:    _ZN6chatv29Responses18ReportUserResponse5ParseERN9rapidjson15GenericDocumentINS2_4UTF8IcEENS2_19MemoryPoolAllocatorINS2_12CrtAllocatorEEEEE
// Demangled: chatv2::Responses::ReportUserResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================
void chatv2::Responses::ReportUserResponse::Parse()
{
  ;
}


// ============================================================================
// Address:   0x12733b0 (size: 9 bytes)
// Symbol:    _ZN6chatv29Responses15IServerResponse7ExecuteEv
// Demangled: chatv2::Responses::IServerResponse::Execute(void)
// ============================================================================
void chatv2::Responses::IServerResponse::Execute()
{
  ;
}


// ============================================================================
// Address:   0x12733c0 (size: 145 bytes)
// Symbol:    _ZN6chatv29Responses15IServerResponseD2Ev
// Demangled: chatv2::Responses::IServerResponse::Destroy()
// ============================================================================
// Alternative name is '_ZN6chatv29Responses15IServerResponseD1Ev'
void chatv2::Responses::IServerResponse::Destroy(chatv2::Responses::IServerResponse *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20929F8);
  v1 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy((void *)(v2 - 12));
  }
}


// ============================================================================
// Address:   0x1273460 (size: 56 bytes)
// Symbol:    _ZN6chatv29Responses15IServerResponseD0Ev
// Demangled: chatv2::Responses::IServerResponse::Destroy_del()
// ============================================================================
void chatv2::Responses::IServerResponse::Destroy_del(chatv2::Responses::IServerResponse *self)
{
  chatv2::Responses::IServerResponse::Destroy(self);
  operator delete(self);
}


// ============================================================================
// Address:   0x12734a0 (size: 96 bytes)
// Symbol:    _ZN6chatv29Responses15IServerResponseC2ERKSsNS_4Core11ChannelTypeES3_
// Demangled: chatv2::Responses::IServerResponse::IServerResponse(std::string const&,chatv2::Core::ChannelType,std::string const&)
// ============================================================================
// Alternative name is '_ZN6chatv29Responses15IServerResponseC1ERKSsNS_4Core11ChannelTypeES3_'
int chatv2::Responses::IServerResponse::Construct(uint32_t *a1, int a2, int a3, int a4)
{
  *a1 = (uint32_t)(uintptr_t)(&off_20929F8);
  g4_std::string::construct_copy(a1 + 1, a4);
  g4_std::string::construct_copy(a1 + 2, a2);
  a1[3] = a3;
  return a3;
}

