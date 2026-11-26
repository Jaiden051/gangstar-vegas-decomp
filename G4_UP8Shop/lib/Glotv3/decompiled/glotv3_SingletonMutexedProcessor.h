#pragma once
// ============================================================================
// G4_UP8Shop/lib/Glotv3/decompiled/glotv3_SingletonMutexedProcessor.h
// Library: Glotv3 | Module: glotv3_SingletonMutexedProcessor
// Binary Address Span: 0x134eb60 .. 0x135eba0 (39 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x134eb60] (54 bytes) glotv3::SingletonMutexedProcessor::WriteToLibSpy(boost::shared_ptr<glotv3::Event const>)
// void glotv3::SingletonMutexedProcessor::WriteToLibSpy( int a1, int a2, int a3, int a4, glotv3::Event **a5);
// [0x134eba0] (199 bytes) glotv3::SingletonMutexedProcessor::RemoveEmptyAsyncs(void)
// int glotv3::SingletonMutexedProcessor::RemoveEmptyAsyncs(const char **this);
// [0x134ec70] (308 bytes) glotv3::SingletonMutexedProcessor::FinishQueing(void)
// int glotv3::SingletonMutexedProcessor::FinishQueing(glotv3::SingletonMutexedProcessor *this);
// [0x134edb0] (308 bytes) glotv3::SingletonMutexedProcessor::NotifyQueing(void)
// int glotv3::SingletonMutexedProcessor::NotifyQueing(int a1, int a2, glotv3::SingletonMutexedProcessor *this);
// [0x134eef0] (308 bytes) glotv3::SingletonMutexedProcessor::FinishNetwork(void)
// int glotv3::SingletonMutexedProcessor::FinishNetwork( int a1, int a2, glotv3::SingletonMutexedProcessor *this);
// [0x134f030] (308 bytes) glotv3::SingletonMutexedProcessor::NotifyNetwork(void)
// int glotv3::SingletonMutexedProcessor::NotifyNetwork( int a1, int a2, glotv3::SingletonMutexedProcessor *this);
// [0x134f170] (560 bytes) glotv3::SingletonMutexedProcessor::AddCompactedEvent(boost::shared_ptr<glotv3::Event>)
// int glotv3::SingletonMutexedProcessor::AddCompactedEvent(int a1, int a2);
// [0x134f3f0] (600 bytes) glotv3::SingletonMutexedProcessor::RecoverTokenFromV2(void)
// int glotv3::SingletonMutexedProcessor::RecoverTokenFromV2(glotv3::SingletonMutexedProcessor *this);
// [0x134fbb0] (547 bytes) glotv3::SingletonMutexedProcessor::GetEventDescriptor(int)
// int *glotv3::SingletonMutexedProcessor::GetEventDescriptor(glotv3::SingletonMutexedProcessor *this, int a2);
// [0x134fde0] (50 bytes) glotv3::SingletonMutexedProcessor::IsEventInDescriptor(unsigned int)
// bool glotv3::SingletonMutexedProcessor::IsEventInDescriptor( glotv3::SingletonMutexedProcessor *this, unsigned int a2);
// [0x1350160] (76 bytes) glotv3::SingletonMutexedProcessor::IsBatched(int)
// int glotv3::SingletonMutexedProcessor::IsBatched(glotv3::SingletonMutexedProcessor *this, int a2);
// [0x13501b0] (76 bytes) glotv3::SingletonMutexedProcessor::IsPriority(int)
// int glotv3::SingletonMutexedProcessor::IsPriority(glotv3::SingletonMutexedProcessor *this, int a2);
// [0x1350200] (91 bytes) glotv3::SingletonMutexedProcessor::IsStream(int)
// int glotv3::SingletonMutexedProcessor::IsStream(glotv3::SingletonMutexedProcessor *this, int a2);
// [0x1350260] (469 bytes) glotv3::SingletonMutexedProcessor::GetEventBatchSizeMaximum(int)
// int glotv3::SingletonMutexedProcessor::GetEventBatchSizeMaximum( glotv3::SingletonMutexedProcessor *this, int a2);
// [0x1350440] (1866 bytes) glotv3::SingletonMutexedProcessor::GetEventParameters(int,glotv3::Event::BehaviorOfKey)
// int glotv3::SingletonMutexedProcessor::GetEventParameters( int a1, glotv3::SingletonMutexedProcessor *a2, int a3, int a4);
// [0x1350b90] (708 bytes) glotv3::SingletonMutexedProcessor::EncryptEncodeParameters(boost::shared_ptr<glotv3::Event>)
// void glotv3::SingletonMutexedProcessor::EncryptEncodeParameters(glotv3::SingletonMutexedProcessor *a1, int a2);
// [0x13517e0] (2720 bytes) glotv3::SingletonMutexedProcessor::SingletonMutexedProcessor(std::string &,std::string &,glotv3::TrackingManager &)
// int glotv3::SingletonMutexedProcessor::SingletonMutexedProcessor(uint32_t *a1, int a2, int a3, int a4);
// [0x1352720] (2134 bytes) glotv3::SingletonMutexedProcessor::~SingletonMutexedProcessor()
// void glotv3::SingletonMutexedProcessor::~SingletonMutexedProcessor(glotv3::SingletonMutexedProcessor *this);
// [0x1355750] (785 bytes) glotv3::SingletonMutexedProcessor::ParseEventDescriptor(std::string const&)
// int glotv3::SingletonMutexedProcessor::ParseEventDescriptor(uint32_t *a1, int *a2);
// [0x13565c0] (1197 bytes) glotv3::SingletonMutexedProcessor::FinishNetworkWorkers(void)
// glotv3::SingletonMutexedProcessor *glotv3::SingletonMutexedProcessor::FinishNetworkWorkers( glotv3::SingletonMutexedProcessor *this, int a2);
// [0x1356a70] (1592 bytes) glotv3::SingletonMutexedProcessor::TryToAcquireNetworkWorker(void)
// glotv3::SingletonMutexedProcessor *glotv3::SingletonMutexedProcessor::TryToAcquireNetworkWorker( glotv3::SingletonMutexedProcessor *this, pthread_mutex_t *a2);
// [0x1357370] (500 bytes) glotv3::SingletonMutexedProcessor::PurgeBufferQueue(void)
// void glotv3::SingletonMutexedProcessor::PurgeBufferQueue(glotv3::SingletonMutexedProcessor *this);
// [0x1357570] (2221 bytes) glotv3::SingletonMutexedProcessor::WriteToStream(boost::shared_ptr<glotv3::Event>,bool)
// void glotv3::SingletonMutexedProcessor::WriteToStream(int a1, int *a2, char a3);
// [0x1357e20] (468 bytes) glotv3::SingletonMutexedProcessor::QueueForWriting(boost::shared_ptr<glotv3::Event>,bool,bool)
// int glotv3::SingletonMutexedProcessor::QueueForWriting( glotv3::SingletonMutexedProcessor *a1, int *a2, char a3, char a4);
// [0x13581a0] (573 bytes) glotv3::SingletonMutexedProcessor::PushbackFromLeftovers(boost::shared_ptr<glotv3::EventList>)
// int glotv3::SingletonMutexedProcessor::PushbackFromLeftovers( glotv3::SingletonMutexedProcessor *a1, glotv3::EventList **a2);
// [0x13583e0] (3740 bytes) glotv3::SingletonMutexedProcessor::Transmit(boost::shared_ptr<glotv3::EventList>)
// void glotv3::SingletonMutexedProcessor::Transmit(glotv3::SingletonMutexedProcessor *a1, glotv3::EventList **a2);
// [0x1359280] (193 bytes) glotv3::SingletonMutexedProcessor::TransmitOnMaximum(boost::shared_ptr<glotv3::EventList>)
// int glotv3::SingletonMutexedProcessor::TransmitOnMaximum(glotv3::SingletonMutexedProcessor *a1, int a2);
// [0x1359350] (1865 bytes) glotv3::SingletonMutexedProcessor::ReadAndTransmitEvents(glotv3::Event::Type,boost::shared_ptr<glotv3::Event>,boost::shared_ptr<glotv3::EventList>)
// int glotv3::SingletonMutexedProcessor::ReadAndTransmitEvents( glotv3::SingletonMutexedProcessor *a1, int a2, int *a3, glotv3::EventList **a4);
// [0x1359aa0] (2357 bytes) glotv3::SingletonMutexedProcessor::PushbackFromCrash(void)
// int glotv3::SingletonMutexedProcessor::PushbackFromCrash(glotv3::SingletonMutexedProcessor *this);
// [0x135a3e0] (1408 bytes) glotv3::SingletonMutexedProcessor::PushbackFromUnsent(void)
// int glotv3::SingletonMutexedProcessor::PushbackFromUnsent(const char **this);
// [0x135a960] (93 bytes) glotv3::SingletonMutexedProcessor::AsyncRecovery(void)
// int glotv3::SingletonMutexedProcessor::AsyncRecovery(glotv3::SingletonMutexedProcessor *this);
// [0x135a9c0] (3347 bytes) glotv3::SingletonMutexedProcessor::DetectGameTime(void)
// long double glotv3::SingletonMutexedProcessor::DetectGameTime( int a1, glotv3::SingletonMutexedProcessor *this);
// [0x135b6e0] (1264 bytes) glotv3::SingletonMutexedProcessor::DetectCurrentToken(void)
// int glotv3::SingletonMutexedProcessor::DetectCurrentToken(glotv3::SingletonMutexedProcessor *this);
// [0x135bbd0] (1108 bytes) glotv3::SingletonMutexedProcessor::SetAutomaticEventParameters(boost::shared_ptr<glotv3::Event>)
// int glotv3::SingletonMutexedProcessor::SetAutomaticEventParameters(glotv3::TrackingManager **a1, int a2);
// [0x135c030] (5801 bytes) glotv3::SingletonMutexedProcessor::AsyncWriter(void)
// int glotv3::SingletonMutexedProcessor::AsyncWriter(glotv3::SingletonMutexedProcessor *this);
// [0x135d6e0] (1248 bytes) glotv3::SingletonMutexedProcessor::DetectCurrentSession(void)
// int glotv3::SingletonMutexedProcessor::DetectCurrentSession(glotv3::SingletonMutexedProcessor *this);
// [0x135dbc0] (2442 bytes) glotv3::SingletonMutexedProcessor::DetectDevice(void)
// int glotv3::SingletonMutexedProcessor::DetectDevice(glotv3::SingletonMutexedProcessor *this);
// [0x135e6e0] (1212 bytes) glotv3::SingletonMutexedProcessor::AsyncTimer(void)
// int glotv3::SingletonMutexedProcessor::AsyncTimer(glotv3::SingletonMutexedProcessor *this);
// [0x135eba0] (11239 bytes) glotv3::SingletonMutexedProcessor::AsyncNetwork(void)
// int glotv3::SingletonMutexedProcessor::AsyncNetwork(glotv3::SingletonMutexedProcessor *this);
