// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd6678):
//   ../../../../../lib/rapidjson/document.h
// Referenced by 67 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x122f6c0 .. 0x122fab0 (1008 bytes)
// Symbol:               sub_122F6C0
// Demangled:            sub_122F6C0
// ============================================================================
/*
int *sub_122F6C0(int *a1, uint8_t *a2, uint8_t *a3, unsigned int **a4)
{
  int v5;
  uint8_t *v6;
  int v7;
  uint8_t *v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  unsigned int *v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int *v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int *v22;
  unsigned int v23;
  unsigned int v24;
  size_t v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  char *v30;
  unsigned int v31;
  unsigned int v32;
  int v34;
  int v35;
  int v36;
  int v37;

  v5 = 0;
  if ( *a2 != 0 )
  {
    v6 = a2;
    do
      ++v6;
    while ( *v6 != 0 );
    v5 = v6 - a2;
  }
  v34 = v5;
  v7 = 0;
  if ( *a3 != 0 )
  {
    v8 = a3;
    do
      ++v8;
    while ( *v8 != 0 );
    v7 = v8 - a3;
  }
  v36 = v7;
  if ( a1[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      434,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::AddMember(rapidjson::G"
      "enericValue<Encoding, Allocator>&, rapidjson::GenericValue<Encoding, Allocator>&, Allocator&) [with Encoding = rap"
      "idjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapid"
      "json::GenericValue<rapidjson::UTF8<> >]",
      "IsObject ()");
  v9 = a1[1];
  v10 = a1[2];
  if ( v9 < v10 )
  {
    v11 = *a1;
    goto LABEL_13;
  }
  if ( v10 != 0 )
  {
    a1[2] = 2 * v10;
    v32 = v10 << 6;
    v11 = *a1;
    if ( *a1 != 0 )
    {
      v25 = 32 * v10;
      if ( v32 <= 32 * v10 )
      {
LABEL_29:
        *a1 = v11;
        goto LABEL_13;
      }
      v15 = *a4;
      v16 = (*a4)[1];
      v29 = v16 + 12;
      if ( (unsigned int *)v11 == (unsigned int *)((char *)*a4 + v16 + 12 - v25) )
      {
        v28 = v16 + v32 - v25;
        v31 = *v15;
        if ( v28 <= *v15 )
        {
          v15[1] = v28;
          if ( (v11 & 3) != 0 )
          {
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              294,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "((uintptr_t) originalPtr & 3) == 0");
            v9 = a1[1];
            *a1 = v11;
            goto LABEL_13;
          }
          goto LABEL_28;
        }
      }
      else
      {
        v31 = *v15;
      }
      if ( v16 + v32 > v31 )
      {
        v17 = (unsigned int)a4[1];
        if ( v32 >= v17 )
          v17 = v10 << 6;
        v26 = v17;
        v15 = (unsigned int *)malloc(v17 + 12);
        *v15 = v26;
        v15[1] = 0;
        v15[2] = (unsigned int)*a4;
        *a4 = v15;
        v16 = v15[1];
        v29 = v16 + 12;
      }
      v30 = (char *)v15 + v29;
      if ( ((uint8_t)v30 & 3) != 0 )
      {
        __assert2(
          "../../../../../lib/rapidjson/rapidjson.h",
          267,
          "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAlloca"
          "tor, size_t = unsigned int]",
          "((uintptr_t) buffer & 3) == 0");
        v15 = *a4;
        v16 = (*a4)[1];
      }
      v15[1] = v32 + v16;
      if ( v30 == nullptr )
        __assert2(
          "../../../../../lib/rapidjson/rapidjson.h",
          301,
          "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = rapi"
          "djson::CrtAllocator, size_t = unsigned int]",
          "newBuffer != 0");
      v11 = (int)memcpy(v30, (const void *)v11, v25);
LABEL_28:
      v9 = a1[1];
      goto LABEL_29;
    }
    v21 = v10 << 6;
    v22 = *a4;
    v23 = (*a4)[1];
    if ( v32 + v23 > **a4 )
    {
      v24 = (unsigned int)a4[1];
      if ( v32 >= v24 )
        v24 = v32;
      v22 = (unsigned int *)malloc(v24 + 12);
      *v22 = v24;
      v22[1] = 0;
      v22[2] = (unsigned int)*a4;
      *a4 = v22;
      v23 = v22[1];
      v21 = v32;
    }
    v11 = (int)v22 + v23 + 12;
    if ( (v11 & 3) != 0 )
    {
      v27 = v21;
      __assert2(
        "../../../../../lib/rapidjson/rapidjson.h",
        267,
        "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocato"
        "r, size_t = unsigned int]",
        "((uintptr_t) buffer & 3) == 0");
      v21 = v27;
      v22 = *a4;
      v23 = (*a4)[1];
    }
    v22[1] = v21 + v23;
    *a1 = v11;
    v9 = a1[1];
  }
  else
  {
    a1[2] = 16;
    v18 = *a4;
    v19 = (*a4)[1];
    if ( v19 + 512 > **a4 )
    {
      v20 = 512;
      if ( (unsigned int)a4[1] >= 0x200 )
        v20 = (int)a4[1];
      v18 = (unsigned int *)malloc(v20 + 12);
      *v18 = v20;
      v18[1] = 0;
      v18[2] = (unsigned int)*a4;
      *a4 = v18;
      v19 = v18[1];
    }
    v11 = (int)v18 + v19 + 12;
    if ( (v11 & 3) != 0 )
    {
      __assert2(
        "../../../../../lib/rapidjson/rapidjson.h",
        267,
        "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocato"
        "r, size_t = unsigned int]",
        "((uintptr_t) buffer & 3) == 0");
      v18 = *a4;
      v19 = (*a4)[1];
    }
    v18[1] = v19 + 512;
    *a1 = v11;
    v9 = a1[1];
  }
LABEL_13:
  v12 = (uint32_t *)(v11 + 32 * v9);
  *v12 = a2;
  v12[1] = v34;
  v12[2] = v35;
  v12[3] = 1048581;
  v13 = (uint32_t *)(*a1 + 32 * a1[1]);
  v13[4] = a3;
  v13[5] = v36;
  v13[6] = v37;
  v13[7] = 1048581;
  ++a1[1];
  return a1;
}

*/

// ============================================================================
// Referencing Function: 0x124ddb0 .. 0x124dea4 (244 bytes)
// Symbol:               sub_124DDB0
// Demangled:            sub_124DDB0
// ============================================================================
/*
int sub_124DDB0(int *a1, uint8_t *a2)
{
  size_t n;
  uint8_t *v4;
  int v5;
  int v6;

  if ( a2 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( a1[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  n = 0;
  if ( *a2 != 0 )
  {
    v4 = a2;
    do
      ++v4;
    while ( *v4 != 0 );
    n = v4 - a2;
  }
  v5 = *a1;
  v6 = *a1 + 32 * a1[1];
  if ( v5 == v6 )
    return 0;
  while ( *(uint32_t *)(v5 + 4) != n || memcmp(*(const void **)v5, a2, n) != 0 )
  {
    v5 += 32;
    if ( v5 == v6 )
      return 0;
  }
  return v5;
}

*/

// ============================================================================
// Referencing Function: 0x124e510 .. 0x125037d (7789 bytes)
// Symbol:               _ZN6chatv29Responses20ArionResponseFactory22CreateResponseFromHTTPEN5boost10shared_ptrINS_8Requests19IArionServerRequestEEENS3_INS_12Connectivity12HTTPResponseEEE
// Demangled:            chatv2::Responses::ArionResponseFactory::CreateResponseFromHTTP(boost::shared_ptr<chatv2::Requests::IArionServerRequest>,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1251120 .. 0x12522bc (4508 bytes)
// Symbol:               _ZN9rapidjson13GenericReaderINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE11ParseStringILj0ENS_19GenericStringStreamIS2_EENS_15GenericDocumentIS2_S5_EEEEvRT0_RT1_
// Demangled:            void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseString<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12551e0 .. 0x12565f4 (5140 bytes)
// Symbol:               _ZN6chatv29Responses20MessageArionResponse5ParseERN9rapidjson15GenericDocumentINS2_4UTF8IcEENS2_19MemoryPoolAllocatorINS2_12CrtAllocatorEEEEE
// Demangled:            chatv2::Responses::MessageArionResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1257250 .. 0x1257ee5 (3221 bytes)
// Symbol:               _ZN6chatv29Responses21RoomInfoArionResponse5ParseERN9rapidjson15GenericDocumentINS2_4UTF8IcEENS2_19MemoryPoolAllocatorINS2_12CrtAllocatorEEEEE
// Demangled:            chatv2::Responses::RoomInfoArionResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1258b60 .. 0x125937b (2075 bytes)
// Symbol:               _ZN6chatv29Responses22SubscribeArionResponse5ParseERN9rapidjson15GenericDocumentINS2_4UTF8IcEENS2_19MemoryPoolAllocatorINS2_12CrtAllocatorEEEEE
// Demangled:            chatv2::Responses::SubscribeArionResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x126ab10 .. 0x126ae7f (879 bytes)
// Symbol:               sub_126AB10
// Demangled:            sub_126AB10
// ============================================================================

// ============================================================================
// Referencing Function: 0x126cbc0 .. 0x126d589 (2505 bytes)
// Symbol:               _ZN6chatv28Requests17ReportUserRequest17CreateChatHistoryERKSt6vectorIN5boost10shared_ptrINS_9Responses14ClientResponseEEESaIS7_EE
// Demangled:            chatv2::Requests::ReportUserRequest::CreateChatHistory(std::vector<boost::shared_ptr<chatv2::Responses::ClientResponse>,std::allocator<boost::shared_ptr<chatv2::Responses::ClientResponse>>> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1320740 .. 0x1320834 (244 bytes)
// Symbol:               sub_1320740
// Demangled:            sub_1320740
// ============================================================================

// ============================================================================
// Referencing Function: 0x1327810 .. 0x13288b9 (4265 bytes)
// Symbol:               _ZN6glotv315TrackingManager23ActivateSpyIfConfiguredEv
// Demangled:            glotv3::TrackingManager::ActivateSpyIfConfigured(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x133d920 .. 0x133da51 (305 bytes)
// Symbol:               _ZN9rapidjson12GenericValueINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEEixEPKc
// Demangled:            rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[](char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x133daa0 .. 0x133db7c (220 bytes)
// Symbol:               _ZN6glotv35Event7setRootERKN9rapidjson12GenericValueINS1_4UTF8IcEENS1_19MemoryPoolAllocatorINS1_12CrtAllocatorEEEEE
// Demangled:            glotv3::Event::setRoot(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x133db80 .. 0x133dc44 (196 bytes)
// Symbol:               _ZN6glotv35Event7setDataERN9rapidjson12GenericValueINS1_4UTF8IcEENS1_19MemoryPoolAllocatorINS1_12CrtAllocatorEEEEE
// Demangled:            glotv3::Event::setData(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x133dc50 .. 0x133df23 (723 bytes)
// Symbol:               _ZN6glotv35Event13removeKeyPairERKSs
// Demangled:            glotv3::Event::removeKeyPair(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x133df30 .. 0x133e1f3 (707 bytes)
// Symbol:               _ZN6glotv35Event14removeRootPairERKSs
// Demangled:            glotv3::Event::removeRootPair(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x133e200 .. 0x133e31a (282 bytes)
// Symbol:               _ZNK6glotv35Event11hasRootPairERKSs
// Demangled:            glotv3::Event::hasRootPair(std::string const&)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133e380 .. 0x133e469 (233 bytes)
// Symbol:               _ZNK6glotv35Event8getTokenEv
// Demangled:            glotv3::Event::getToken(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133e470 .. 0x133e559 (233 bytes)
// Symbol:               _ZNK6glotv35Event12getTimestampEv
// Demangled:            glotv3::Event::getTimestamp(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133e5e0 .. 0x133e70a (298 bytes)
// Symbol:               _ZNK6glotv35Event10hasKeyPairERKSs
// Demangled:            glotv3::Event::hasKeyPair(std::string const&)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133e7d0 .. 0x133e8f1 (289 bytes)
// Symbol:               _ZNK6glotv35Event13getSmartCountEv
// Demangled:            glotv3::Event::getSmartCount(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133e900 .. 0x133ea21 (289 bytes)
// Symbol:               _ZNK6glotv35Event8getCountEv
// Demangled:            glotv3::Event::getCount(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133ea30 .. 0x133ec1e (494 bytes)
// Symbol:               _ZNK6glotv35Event14getSessionTimeEv
// Demangled:            glotv3::Event::getSessionTime(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133ec20 .. 0x133ed41 (289 bytes)
// Symbol:               _ZNK6glotv35Event12getSessionIdEv
// Demangled:            glotv3::Event::getSessionId(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133ed50 .. 0x133ef3e (494 bytes)
// Symbol:               _ZNK6glotv35Event11getGameTimeEv
// Demangled:            glotv3::Event::getGameTime(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133ef40 .. 0x133f061 (289 bytes)
// Symbol:               _ZNK6glotv35Event15getConnectivityEv
// Demangled:            glotv3::Event::getConnectivity(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133f070 .. 0x133f25e (494 bytes)
// Symbol:               _ZNK6glotv35Event18getKeyPairAsDoubleERKSs
// Demangled:            glotv3::Event::getKeyPairAsDouble(std::string const&)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133f260 .. 0x133f379 (281 bytes)
// Symbol:               _ZNK6glotv35Event16getKeyPairAsUIntERKSs
// Demangled:            glotv3::Event::getKeyPairAsUInt(std::string const&)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133f430 .. 0x133f5cd (413 bytes)
// Symbol:               _ZNK6glotv35Event14getGameVersionEv
// Demangled:            glotv3::Event::getGameVersion(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133f5d0 .. 0x133f714 (324 bytes)
// Symbol:               _ZNK6glotv35Event10getKeyPairERKSs
// Demangled:            glotv3::Event::getKeyPair(std::string const&)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133f720 .. 0x133f874 (340 bytes)
// Symbol:               _ZNK6glotv35Event7hasTypeEv
// Demangled:            glotv3::Event::hasType(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133f880 .. 0x133f969 (233 bytes)
// Symbol:               _ZNK6glotv35Event12getEventTypeEv
// Demangled:            glotv3::Event::getEventType(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133f9a0 .. 0x133fb7b (475 bytes)
// Symbol:               _ZNK6glotv35Event7getUUIDEv
// Demangled:            glotv3::Event::getUUID(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x133fb80 .. 0x133fe03 (643 bytes)
// Symbol:               sub_133FB80
// Demangled:            sub_133FB80
// ============================================================================

// ============================================================================
// Referencing Function: 0x13400b0 .. 0x13403dc (812 bytes)
// Symbol:               _ZN6glotv35Event24addKeyPairWithSerDesTypeERKSsRKN9rapidjson12GenericValueINS3_4UTF8IcEENS3_19MemoryPoolAllocatorINS3_12CrtAllocatorEEEEE
// Demangled:            glotv3::Event::addKeyPairWithSerDesType(std::string const&,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13409a0 .. 0x1340cb4 (788 bytes)
// Symbol:               _ZN6glotv35Event25addRootPairWithSerDesTypeERKSsRKN9rapidjson12GenericValueINS3_4UTF8IcEENS3_19MemoryPoolAllocatorINS3_12CrtAllocatorEEEEE
// Demangled:            glotv3::Event::addRootPairWithSerDesType(std::string const&,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1341100 .. 0x1341a87 (2439 bytes)
// Symbol:               _ZN6glotv35EventC1Eb
// Demangled:            glotv3::Event::Event(bool)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1342390 .. 0x1342775 (997 bytes)
// Symbol:               _ZN6glotv35Event27deserializeToImplementationERSt6vectorIcSaIcEE
// Demangled:            glotv3::Event::deserializeToImplementation(std::vector<char,std::allocator<char>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1350060 .. 0x1350154 (244 bytes)
// Symbol:               _ZN9rapidjson12GenericValueINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE10FindMemberEPKc
// Demangled:            rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1350260 .. 0x1350435 (469 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor24GetEventBatchSizeMaximumEi
// Demangled:            glotv3::SingletonMutexedProcessor::GetEventBatchSizeMaximum(int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1350440 .. 0x1350b8a (1866 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor18GetEventParametersEiNS_5Event13BehaviorOfKeyE
// Demangled:            glotv3::SingletonMutexedProcessor::GetEventParameters(int,glotv3::Event::BehaviorOfKey)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13554a0 .. 0x135574e (686 bytes)
// Symbol:               _ZN9rapidjson15GenericDocumentINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE11ParseStreamILj0ENS_19GenericStringStreamIS2_EEEERS6_RT0_
// Demangled:            rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseStream<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1355750 .. 0x1355a61 (785 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor20ParseEventDescriptorERKSs
// Demangled:            glotv3::SingletonMutexedProcessor::ParseEventDescriptor(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13581a0 .. 0x13583dd (573 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor21PushbackFromLeftoversEN5boost10shared_ptrINS_9EventListEEE
// Demangled:            glotv3::SingletonMutexedProcessor::PushbackFromLeftovers(boost::shared_ptr<glotv3::EventList>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13583e0 .. 0x135927c (3740 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor8TransmitEN5boost10shared_ptrINS_9EventListEEE
// Demangled:            glotv3::SingletonMutexedProcessor::Transmit(boost::shared_ptr<glotv3::EventList>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1359aa0 .. 0x135a3d5 (2357 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor17PushbackFromCrashEv
// Demangled:            glotv3::SingletonMutexedProcessor::PushbackFromCrash(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1367830 .. 0x13678ed (189 bytes)
// Symbol:               sub_1367830
// Demangled:            sub_1367830
// ============================================================================

// ============================================================================
// Referencing Function: 0x136c9b0 .. 0x136cbde (558 bytes)
// Symbol:               sub_136C9B0
// Demangled:            sub_136C9B0
// ============================================================================

// ============================================================================
// Referencing Function: 0x136d4d0 .. 0x136dde7 (2327 bytes)
// Symbol:               _ZN6glotv315AsyncHTTPClient21HandlePushbackOnQueueEv
// Demangled:            glotv3::AsyncHTTPClient::HandlePushbackOnQueue(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x136f870 .. 0x1370e24 (5556 bytes)
// Symbol:               sub_136F870
// Demangled:            sub_136F870
// ============================================================================

// ============================================================================
// Referencing Function: 0x1376450 .. 0x137652c (220 bytes)
// Symbol:               _ZN6glotv39EventList7setRootERKN9rapidjson12GenericValueINS1_4UTF8IcEENS1_19MemoryPoolAllocatorINS1_12CrtAllocatorEEEEE
// Demangled:            glotv3::EventList::setRoot(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1376530 .. 0x13765b0 (128 bytes)
// Symbol:               _ZN6glotv39EventList5clearEv
// Demangled:            glotv3::EventList::clear(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1376610 .. 0x137672a (282 bytes)
// Symbol:               _ZNK6glotv39EventList11hasRootPairERKSs
// Demangled:            glotv3::EventList::hasRootPair(std::string const&)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x13767b0 .. 0x1376852 (162 bytes)
// Symbol:               _ZNK6glotv39EventList8getCountEv
// Demangled:            glotv3::EventList::getCount(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x13768e0 .. 0x13769b4 (212 bytes)
// Symbol:               _ZNK6glotv39EventList7getIDFVEv
// Demangled:            glotv3::EventList::getIDFV(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x1376a40 .. 0x1376b14 (212 bytes)
// Symbol:               _ZNK6glotv39EventList9getHDIDFVEv
// Demangled:            glotv3::EventList::getHDIDFV(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x1376ba0 .. 0x1376c74 (212 bytes)
// Symbol:               _ZNK6glotv39EventList14getAnonymousIdEv
// Demangled:            glotv3::EventList::getAnonymousId(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x1376d00 .. 0x1376db1 (177 bytes)
// Symbol:               _ZNK6glotv39EventList19getPackageTimestampEv
// Demangled:            glotv3::EventList::getPackageTimestamp(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x1376e40 .. 0x1376f14 (212 bytes)
// Symbol:               _ZNK6glotv39EventList20getGameVersionStringEv
// Demangled:            glotv3::EventList::getGameVersionString(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x1376fa0 .. 0x1377089 (233 bytes)
// Symbol:               _ZNK6glotv39EventList7getGGIDEv
// Demangled:            glotv3::EventList::getGGID(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x1377090 .. 0x137715c (204 bytes)
// Symbol:               _ZNK6glotv39EventList7getPHIDEv
// Demangled:            glotv3::EventList::getPHID(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x1377160 .. 0x1377274 (276 bytes)
// Symbol:               _ZNK6glotv39EventList7getUUIDEv
// Demangled:            glotv3::EventList::getUUID(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x1377690 .. 0x1377839 (425 bytes)
// Symbol:               _ZN6glotv39EventList8addEventEN5boost10shared_ptrIKNS_5EventEEE
// Demangled:            glotv3::EventList::addEvent(boost::shared_ptr<glotv3::Event const>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1377840 .. 0x13779af (367 bytes)
// Symbol:               sub_1377840
// Demangled:            sub_1377840
// ============================================================================

// ============================================================================
// Referencing Function: 0x13779b0 .. 0x1377f88 (1496 bytes)
// Symbol:               _ZN6glotv39EventList25addRootPairWithSerDesTypeERKSsRKN9rapidjson12GenericValueINS3_4UTF8IcEENS3_19MemoryPoolAllocatorINS3_12CrtAllocatorEEEEE
// Demangled:            glotv3::EventList::addRootPairWithSerDesType(std::string const&,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1379210 .. 0x1379c2d (2589 bytes)
// Symbol:               _ZN6glotv39EventListC1Ev
// Demangled:            glotv3::EventList::EventList(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x137a610 .. 0x137aa7b (1131 bytes)
// Symbol:               _ZN6glotv39EventList19deserializeFromJsonERSt6vectorIcSaIcEE
// Demangled:            glotv3::EventList::deserializeFromJson(std::vector<char,std::allocator<char>> &)
// ============================================================================
