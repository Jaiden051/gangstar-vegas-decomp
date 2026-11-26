// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd9548):
//   ../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp
// Referenced by 65 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x131c190 .. 0x131c412 (642 bytes)
// Symbol:               _ZN6glotv37Porting24EncryptXXTEAEncodeBase64ERKSsRSs
// Demangled:            glotv3::Porting::EncryptXXTEAEncodeBase64(std::string const&,std::string &)
// ============================================================================
/*
int glotv3::Porting::EncryptXXTEAEncodeBase64(glwebtools::Codec **a1, uint32_t *a2)
{
  glwebtools::Codec **v2;
  glotv3::TrackingManager *v3;
  unsigned int GGID;
  volatile int32_t *v5;
  char *v6;
  int v7;
  glwebtools::Codec *v8;
  int v9;
  glwebtools::Codec *v10;
  int v11;
  __m128d v13; // xmm1
  __m128d v14; // xmm2
  int v15;
  unsigned int v16;
  const unsigned int *v17;
  unsigned int v18;
  char *v19;
  unsigned int EncryptedXXTEADataSize;
  uint32_t *v21;
  glotv3::TrackingManager *v22;
  volatile int32_t *v23;
  unsigned int v24[7];

  v24[6] = (unsigned int)&a1;
  v2 = a1;
  v21 = a2;
  if ( *((uint32_t *)*a1 - 3) == 0 )
  {
    v11 = 1;
    std::string::clear(a2, 0, *(uint32_t *)(*a2 - 12), 0);
    return v11;
  }
  glotv3::TrackingManager::getInstance((glotv3::TrackingManager *)&v22);
  v3 = v22;
  if ( v22 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Track"
      "ingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager*]",
      "px != 0");
    v3 = v22;
  }
  GGID = glotv3::TrackingManager::GetGGID(v3);
  v5 = v23;
  if ( v23 != nullptr && __sync_fetch_and_add(v23 + 1, 0xFFFFFFFF) == 1 )
  {
    v18 = GGID;
    (*(void (**)(volatile int32_t *))(*v5 + 8))(v5);
    GGID = v18;
    if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(volatile int32_t *))(*v5 + 12))(v5);
      GGID = v18;
    }
  }
  v24[0] = GGID;
  v6 = nullptr;
  v24[1] = GGID * GGID;
  v7 = ~GGID;
  v24[3] = 4242 * GGID;
  v8 = *v2;
  v24[2] = v7;
  EncryptedXXTEADataSize = glwebtools::Codec::GetEncryptedXXTEADataSize(*((glwebtools::Codec **)v8 - 3), v16);
  v9 = 0;
  if ( EncryptedXXTEADataSize != 0 )
  {
    v9 = operator new(EncryptedXXTEADataSize);
    v6 = (char *)v9;
  }
  v19 = &v6[EncryptedXXTEADataSize - v9];
  memset(v6, 0, (size_t)v19);
  v10 = *v2;
  v11 = 0;
  if ( (uint8_t)glwebtools::Codec::EncryptXXTEA(v10, *((uint32_t *)v10 - 3), v6, v19, (unsigned int)v24, v17) != 0 )
  {
    std::string::clear(v21, 0, *(uint32_t *)(*v21 - 12), 0);
    v13 = 0;
    v13.m128d_f64[0] = (double)EncryptedXXTEADataSize * 1.4;
    v14 = _mm_cmple_pd((__m128d)xmmword_1C7C210, v13);
    sub_1939B80(
      v21,
      _mm_cvtsi128_si32(
        _mm_xor_si128(
          _mm_cvttpd_epi32(_mm_sub_pd(v13, _mm_and_pd((__m128d)xmmword_1C7C210, v14))),
          _mm_slli_epi32((__m128i)v14, 0x1Fu))));
    v15 = glwebtools::Codec::EncodeBase64(v6, v19, v21, 0);
    LOBYTE(v15) = (uint8_t)v15 != 0;
    v11 = v15;
    if ( v6 == nullptr )
      return v11;
  }
  else if ( v6 == nullptr )
  {
    return v11;
  }
  operator delete(v6);
  return v11;
}

*/

// ============================================================================
// Referencing Function: 0x131c420 .. 0x131c65b (571 bytes)
// Symbol:               _ZN6glotv37Porting24DecodeBase64DecryptXXTEAERKSsRSs
// Demangled:            glotv3::Porting::DecodeBase64DecryptXXTEA(std::string const&,std::string &)
// ============================================================================
/*
int glotv3::Porting::DecodeBase64DecryptXXTEA(uint32_t *a1, void **a2)
{
  glotv3::TrackingManager *v2;
  unsigned int GGID;
  volatile int32_t *v4;
  void *s;
  size_t DecodedBase64DataSize;
  int v7;
  size_t n;
  int v9;
  void *v11;
  void *v12;
  int v13;
  const unsigned int *v14;
  unsigned int v15;
  glotv3::TrackingManager *v16;
  volatile int32_t *v17;
  unsigned int v18[7];

  if ( *(uint32_t *)(*a1 - 12) == 0 )
  {
    v9 = 1;
    std::string::clear(a2, 0, *((uint32_t *)*a2 - 3), 0);
    return v9;
  }
  glotv3::TrackingManager::getInstance((glotv3::TrackingManager *)&v16);
  v2 = v16;
  if ( v16 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Track"
      "ingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager*]",
      "px != 0");
    v2 = v16;
  }
  GGID = glotv3::TrackingManager::GetGGID(v2);
  v4 = v17;
  if ( v17 != nullptr && __sync_fetch_and_add(v17 + 1, 0xFFFFFFFF) == 1 )
  {
    v15 = GGID;
    (*(void (**)(volatile int32_t *))(*v4 + 8))(v4);
    GGID = v15;
    if ( __sync_fetch_and_add(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(volatile int32_t *))(*v4 + 12))(v4);
      GGID = v15;
    }
  }
  v18[0] = GGID;
  v18[1] = GGID * GGID;
  v18[2] = ~GGID;
  v18[3] = 4242 * GGID;
  s = nullptr;
  DecodedBase64DataSize = glwebtools::Codec::GetDecodedBase64DataSize(a1, 0);
  v7 = 0;
  if ( DecodedBase64DataSize != 0 )
  {
    v7 = operator new(DecodedBase64DataSize);
    s = (void *)v7;
  }
  n = (size_t)s + DecodedBase64DataSize - v7;
  memset(s, 0, n);
  v9 = 0;
  if ( glwebtools::Codec::DecodeBase64(a1, (unsigned int)s, 0) != 0 )
  {
    std::string::clear(a2, 0, *((uint32_t *)*a2 - 3), 0);
    sub_1939D80((int)a2, n, 0);
    v11 = *a2;
    v12 = *((void **)*a2 - 3);
    if ( *((int *)*a2 - 1) >= 0 )
    {
      sub_19397C0(a2);
      v11 = *a2;
    }
    v13 = glwebtools::Codec::DecryptXXTEA((glwebtools::Codec *)s, n, v11, v12, (unsigned int)v18, v14);
    LOBYTE(v13) = (uint8_t)v13 != 0;
    v9 = v13;
    if ( s != nullptr )
      goto LABEL_10;
  }
  else if ( s != nullptr )
  {
LABEL_10:
    operator delete(s);
  }
  return v9;
}

*/

// ============================================================================
// Referencing Function: 0x1321f70 .. 0x1321fe2 (114 bytes)
// Symbol:               _ZN6glotv315TrackingManager11GetGameTimeEv
// Demangled:            glotv3::TrackingManager::GetGameTime(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13222e0 .. 0x132240d (301 bytes)
// Symbol:               _ZN6glotv315TrackingManager7OnPauseEv
// Demangled:            glotv3::TrackingManager::OnPause(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1322410 .. 0x1322482 (114 bytes)
// Symbol:               _ZN6glotv315TrackingManager12BlockSendingEv
// Demangled:            glotv3::TrackingManager::BlockSending(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1322490 .. 0x132250a (122 bytes)
// Symbol:               _ZN6glotv315TrackingManager14TriggerSendingEv
// Demangled:            glotv3::TrackingManager::TriggerSending(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1322510 .. 0x1322582 (114 bytes)
// Symbol:               _ZN6glotv315TrackingManager13BlockTrackingEv
// Demangled:            glotv3::TrackingManager::BlockTracking(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1322590 .. 0x1322602 (114 bytes)
// Symbol:               _ZN6glotv315TrackingManager15TriggerTrackingEv
// Demangled:            glotv3::TrackingManager::TriggerTracking(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1322aa0 .. 0x1322d07 (615 bytes)
// Symbol:               _ZN6glotv315TrackingManager6OnExitEv
// Demangled:            glotv3::TrackingManager::OnExit(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1323100 .. 0x13232bd (445 bytes)
// Symbol:               _ZN6glotv315TrackingManager12DelaySendingEj
// Demangled:            glotv3::TrackingManager::DelaySending(unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13232c0 .. 0x132357d (701 bytes)
// Symbol:               _ZN6glotv315TrackingManager8AddEventEN5boost10shared_ptrINS_5EventEEEb
// Demangled:            glotv3::TrackingManager::AddEvent(boost::shared_ptr<glotv3::Event>,bool)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1324840 .. 0x1324a4b (523 bytes)
// Symbol:               _ZN6glotv315TrackingManager8OnLaunchEjRKSsS2_
// Demangled:            glotv3::TrackingManager::OnLaunch(unsigned int,std::string const&,std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1325e20 .. 0x1326ef6 (4310 bytes)
// Symbol:               _ZN6glotv315TrackingManager12SpawnWorkersEv
// Demangled:            glotv3::TrackingManager::SpawnWorkers(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1328da0 .. 0x1328fd3 (563 bytes)
// Symbol:               _ZN6glotv315TrackingManager11getInstanceEv
// Demangled:            glotv3::TrackingManager::getInstance(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1329480 .. 0x132a5dc (4444 bytes)
// Symbol:               _ZN6glotv315TrackingManager8OnResumeEv
// Demangled:            glotv3::TrackingManager::OnResume(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x132a5e0 .. 0x132b2b5 (3285 bytes)
// Symbol:               _ZN6glotv315TrackingManager8AddEventEN5boost10shared_ptrINS_11EventParamsEEE
// Demangled:            glotv3::TrackingManager::AddEvent(boost::shared_ptr<glotv3::EventParams>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x132b2c0 .. 0x132cd83 (6851 bytes)
// Symbol:               _ZN6glotv315TrackingManager8AddEventEiNS_10EventValueES1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_S1_
// Demangled:            glotv3::TrackingManager::AddEvent(int,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1338ee0 .. 0x1339436 (1366 bytes)
// Symbol:               sub_1338EE0
// Demangled:            sub_1338EE0
// ============================================================================

// ============================================================================
// Referencing Function: 0x134c470 .. 0x134c4cc (92 bytes)
// Symbol:               sub_134C470
// Demangled:            sub_134C470
// ============================================================================

// ============================================================================
// Referencing Function: 0x134eb60 .. 0x134eb96 (54 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor13WriteToLibSpyEN5boost10shared_ptrIKNS_5EventEEE
// Demangled:            glotv3::SingletonMutexedProcessor::WriteToLibSpy(boost::shared_ptr<glotv3::Event const>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13565c0 .. 0x1356a6d (1197 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor20FinishNetworkWorkersEv
// Demangled:            glotv3::SingletonMutexedProcessor::FinishNetworkWorkers(void)
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
// Referencing Function: 0x1359280 .. 0x1359341 (193 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor17TransmitOnMaximumEN5boost10shared_ptrINS_9EventListEEE
// Demangled:            glotv3::SingletonMutexedProcessor::TransmitOnMaximum(boost::shared_ptr<glotv3::EventList>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1359350 .. 0x1359a99 (1865 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor21ReadAndTransmitEventsENS_5Event4TypeEN5boost10shared_ptrIS1_EENS4_INS_9EventListEEE
// Demangled:            glotv3::SingletonMutexedProcessor::ReadAndTransmitEvents(glotv3::Event::Type,boost::shared_ptr<glotv3::Event>,boost::shared_ptr<glotv3::EventList>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x135c030 .. 0x135d6d9 (5801 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor11AsyncWriterEv
// Demangled:            glotv3::SingletonMutexedProcessor::AsyncWriter(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1362b70 .. 0x1362c1c (172 bytes)
// Symbol:               _ZN6glotv39TCPServer7WriteToERSs
// Demangled:            glotv3::TCPServer::WriteTo(std::string &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1362c20 .. 0x13634f4 (2260 bytes)
// Symbol:               _ZN6glotv39TCPServer11StartAcceptEv
// Demangled:            glotv3::TCPServer::StartAccept(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1363500 .. 0x136357e (126 bytes)
// Symbol:               _ZN6glotv39TCPServer12HandleAcceptEN5boost10shared_ptrINS_13TCPConnectionEEERKNS1_6system10error_codeE
// Demangled:            glotv3::TCPServer::HandleAccept(boost::shared_ptr<glotv3::TCPConnection>,boost::system::error_code const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1365a90 .. 0x13662d2 (2114 bytes)
// Symbol:               _ZN6glotv36Writer9WriteNextEN5boost10shared_ptrIKNS_5EventEEE
// Demangled:            glotv3::Writer::WriteNext(boost::shared_ptr<glotv3::Event const>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1368680 .. 0x13687a6 (294 bytes)
// Symbol:               _ZN6glotv315AsyncHTTPClient18HandleDelaySendingERKSs
// Demangled:            glotv3::AsyncHTTPClient::HandleDelaySending(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13687c0 .. 0x1368c73 (1203 bytes)
// Symbol:               _ZN6glotv315AsyncHTTPClient12HandleBackupERKSsS2_S2_
// Demangled:            glotv3::AsyncHTTPClient::HandleBackup(std::string const&,std::string const&,std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x136c1c0 .. 0x136c5f4 (1076 bytes)
// Symbol:               _ZN5boost4asio6detail10connect_opINS0_2ip3tcpENS0_21stream_socket_serviceIS4_EENS3_23basic_resolver_iteratorIS4_EENS1_25default_connect_conditionENS_3_bi6bind_tIvNS_4_mfi3mf1IvN6glotv315AsyncHTTPClientERKNS_6system10error_codeEEENSA_5list2INSA_5valueIPSF_EEPFNS_3argILi1EEEvEEEEEEclESH_i
// Demangled:            boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>::operator()(boost::system::error_code,int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x136d4d0 .. 0x136dde7 (2327 bytes)
// Symbol:               _ZN6glotv315AsyncHTTPClient21HandlePushbackOnQueueEv
// Demangled:            glotv3::AsyncHTTPClient::HandlePushbackOnQueue(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x136ddf0 .. 0x136e355 (1381 bytes)
// Symbol:               _ZN6glotv315AsyncHTTPClient13HandleResolveERKN5boost6system10error_codeENS1_4asio2ip23basic_resolver_iteratorINS7_3tcpEEE
// Demangled:            glotv3::AsyncHTTPClient::HandleResolve(boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x136e560 .. 0x136e9ab (1099 bytes)
// Symbol:               _ZN6glotv315AsyncHTTPClient17HandleReadContentERKN5boost6system10error_codeE
// Demangled:            glotv3::AsyncHTTPClient::HandleReadContent(boost::system::error_code const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x136e9b0 .. 0x136f4b4 (2820 bytes)
// Symbol:               _ZN6glotv315AsyncHTTPClient20HandleReadStatusLineERKN5boost6system10error_codeE
// Demangled:            glotv3::AsyncHTTPClient::HandleReadStatusLine(boost::system::error_code const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x136f4c0 .. 0x136f86b (939 bytes)
// Symbol:               _ZN6glotv315AsyncHTTPClient18HandleWriteRequestERKN5boost6system10error_codeE
// Demangled:            glotv3::AsyncHTTPClient::HandleWriteRequest(boost::system::error_code const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x136f870 .. 0x1370e24 (5556 bytes)
// Symbol:               sub_136F870
// Demangled:            sub_136F870
// ============================================================================

// ============================================================================
// Referencing Function: 0x1370e30 .. 0x1370ed4 (164 bytes)
// Symbol:               _ZN6glotv315AsyncHTTPClient23HandleNotificationOfSpyEji
// Demangled:            glotv3::AsyncHTTPClient::HandleNotificationOfSpy(unsigned int,int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1370ee0 .. 0x1371876 (2454 bytes)
// Symbol:               _ZN6glotv315AsyncHTTPClient13HandleConnectERKN5boost6system10error_codeE
// Demangled:            glotv3::AsyncHTTPClient::HandleConnect(boost::system::error_code const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1371880 .. 0x1372947 (4295 bytes)
// Symbol:               _ZN6glotv315AsyncHTTPClient16HandleStatusCodeEj
// Demangled:            glotv3::AsyncHTTPClient::HandleStatusCode(unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1372950 .. 0x1375127 (10199 bytes)
// Symbol:               sub_1372950
// Demangled:            sub_1372950
// ============================================================================

// ============================================================================
// Referencing Function: 0x1375130 .. 0x13753f3 (707 bytes)
// Symbol:               _ZN6glotv315AsyncHTTPClient17HandleReadHeadersERKN5boost6system10error_codeE
// Demangled:            glotv3::AsyncHTTPClient::HandleReadHeaders(boost::system::error_code const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1377690 .. 0x1377839 (425 bytes)
// Symbol:               _ZN6glotv39EventList8addEventEN5boost10shared_ptrIKNS_5EventEEE
// Demangled:            glotv3::EventList::addEvent(boost::shared_ptr<glotv3::Event const>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13784a0 .. 0x137920d (3437 bytes)
// Symbol:               _ZN6glotv39EventList20setDefaultKeysValuesEv
// Demangled:            glotv3::EventList::setDefaultKeysValues(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x137b360 .. 0x137ba28 (1736 bytes)
// Symbol:               _ZN6glotv36Reader8ReadNextEN5boost10shared_ptrINS_5EventEEE
// Demangled:            glotv3::Reader::ReadNext(boost::shared_ptr<glotv3::Event>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1408f40 .. 0x140923b (763 bytes)
// Symbol:               _ZN9sociallib18ClientSNSInterface29checkGlotInitAndTrackFacebookEv
// Demangled:            sociallib::ClientSNSInterface::checkGlotInitAndTrackFacebook(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14ca410 .. 0x14ca4ea (218 bytes)
// Symbol:               _Z21comparePointedStringsN5boost10shared_ptrISsEES1_
// Demangled:            comparePointedStrings(boost::shared_ptr<std::string>,boost::shared_ptr<std::string>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14cc760 .. 0x14cc807 (167 bytes)
// Symbol:               _ZN4gaia10CrmManager23IsPointcutActionPendingEv
// Demangled:            gaia::CrmManager::IsPointcutActionPending(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14cd770 .. 0x14cd824 (180 bytes)
// Symbol:               _ZN4gaia10CrmManager16UpdateActionListEj
// Demangled:            gaia::CrmManager::UpdateActionList(unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14cdc20 .. 0x14cdd2a (266 bytes)
// Symbol:               _ZN4gaia9CrmAction15SetFatigueGroupERN5boost10shared_ptrINS_15CrmFatigueGroupEEE
// Demangled:            gaia::CrmAction::SetFatigueGroup(boost::shared_ptr<gaia::CrmFatigueGroup> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14cde70 .. 0x14ce39d (1325 bytes)
// Symbol:               _ZNK4gaia10CrmManager16SerializeActionsEv
// Demangled:            gaia::CrmManager::SerializeActions(void)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x14ce800 .. 0x14cf0f5 (2293 bytes)
// Symbol:               _ZN4gaia10CrmManager18DeserializeActionsEv
// Demangled:            gaia::CrmManager::DeserializeActions(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14d79a0 .. 0x14d7bc3 (547 bytes)
// Symbol:               _ZNK4gaia10CrmManager15LogEventViaGLOTERKN4Json5ValueESs
// Demangled:            gaia::CrmManager::LogEventViaGLOT(Json::Value const&,std::string)const
// ============================================================================

// ============================================================================
// Referencing Function: 0x14d8c50 .. 0x14da106 (5302 bytes)
// Symbol:               _ZN4gaia10CrmManager19GlotWrapperCallbackEPvbN4Json5ValueE
// Demangled:            gaia::CrmManager::GlotWrapperCallback(void *,bool,Json::Value)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14e1120 .. 0x14e1915 (2037 bytes)
// Symbol:               _ZN4gaia19ReportInstalledAppsERKSt4listIiSaIiEE
// Demangled:            gaia::ReportInstalledApps(std::list<int,std::allocator<int>> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14e27b0 .. 0x14e2cc5 (1301 bytes)
// Symbol:               _ZN4gaia10CrmManager21ParseFatigueGroupListERKN4Json5ValueE
// Demangled:            gaia::CrmManager::ParseFatigueGroupList(Json::Value const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14e30d0 .. 0x14e3354 (644 bytes)
// Symbol:               _ZN4gaia10CrmManager19IsPointcutAvailableERKSsRKN4Json5ValueE
// Demangled:            gaia::CrmManager::IsPointcutAvailable(std::string const&,Json::Value const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14e3360 .. 0x14e3887 (1319 bytes)
// Symbol:               _ZN4gaia9CrmAction7TriggerERKSsRKN4Json5ValueEj
// Demangled:            gaia::CrmAction::Trigger(std::string const&,Json::Value const&,unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14e3890 .. 0x14e3a94 (516 bytes)
// Symbol:               _ZN4gaia10CrmManager7TriggerERKSsRbRKN4Json5ValueEj
// Demangled:            gaia::CrmManager::Trigger(std::string const&,bool &,Json::Value const&,unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14e3da0 .. 0x14e4687 (2279 bytes)
// Symbol:               _ZN4gaia11UserProfile14RefreshProfileEbPFvNS_7OpCodesERKSsiPvES4_
// Demangled:            gaia::UserProfile::RefreshProfile(bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14e8070 .. 0x14e9059 (4073 bytes)
// Symbol:               _ZN4gaia10CrmManager15ParseActionListERKN4Json5ValueE
// Demangled:            gaia::CrmManager::ParseActionList(Json::Value const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14e9420 .. 0x14e9d0d (2285 bytes)
// Symbol:               _ZN4gaia10CrmManager10InitializeERKSs
// Demangled:            gaia::CrmManager::Initialize(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x14eaf30 .. 0x14eaff2 (194 bytes)
// Symbol:               _ZN4gaia23CrmActionPointerCompareEN5boost10shared_ptrIKNS_9CrmActionEEES4_
// Demangled:            gaia::CrmActionPointerCompare(boost::shared_ptr<gaia::CrmAction const>,boost::shared_ptr<gaia::CrmAction const>)
// ============================================================================
