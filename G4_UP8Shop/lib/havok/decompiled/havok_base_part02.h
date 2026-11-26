#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_base_part02.h
// Library: havok | Module: havok_base_part02
// Binary Address Span: 0x1562040 .. 0x157be50 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1562040] (29 bytes) hkStackTracer::hkStackTracer(void)
// void hkStackTracer::hkStackTracer(hkStackTracer *this);
// [0x1562060] (141 bytes) hkStackTracer::dumpStackTrace(unsigned long const*,int,void (*)(char const*,void *),void *)const
// int hkStackTracer::dumpStackTrace( hkStackTracer *this, const unsigned int *a2, int a3, void (*a4)(const char *, void *), void *a5);
// [0x15620f0] (170 bytes) hkStackTracer::CallTree::dumpTrace(int,hkOstream &)const
// void hkStackTracer::CallTree::dumpTrace(hkStackTracer::CallTree *this, int a2, hkOstream *a3);
// [0x15621a0] (9 bytes) hkStackTracer::getStackTrace(unsigned long *,int,int)
// int hkStackTracer::getStackTrace();
// [0x15621b0] (111 bytes) hkStackTracer::CallTree::insertCallStack(hkStackTracer&)
// int hkStackTracer::CallTree::insertCallStack(hkStackTracer::CallTree *this);
// [0x1562220] (9 bytes) hkStackTracer::refreshSymbols(void)
// void hkStackTracer::refreshSymbols();
// [0x1562230] (9 bytes) hkStackTracer::getModuleInfo(void (*)(char const*,void *),void *)const
// void hkStackTracer::getModuleInfo();
// [0x1562240] (9 bytes) hkStackTracer::getImplementation(void)
// int hkStackTracer::getImplementation();
// [0x1562250] (9 bytes) hkStackTracer::replaceImplementation(void *)
// void hkStackTracer::replaceImplementation();
// [0x1562260] (9 bytes) hkStackTracer::setNeedsSymInitialize(bool)
// void hkStackTracer::setNeedsSymInitialize();
// [0x1562270] (61 bytes) hkUuidPseudoRandomGenerator::~hkUuidPseudoRandomGenerator()
// void hkUuidPseudoRandomGenerator::~hkUuidPseudoRandomGenerator(hkUuidPseudoRandomGenerator *this);
// [0x15622b0] (118 bytes) hkUuidPseudoRandomGenerator::~hkUuidPseudoRandomGenerator()
// void hkUuidPseudoRandomGenerator::~hkUuidPseudoRandomGenerator(hkUuidPseudoRandomGenerator *this);
// [0x15623c0] (22 bytes) hkUuid::getNil(void)
// void *hkUuid::getNil();
// [0x15623e0] (687 bytes) hkUuid::isValidUuidString(char const*)
// int hkUuid::isValidUuidString(hkUuid *this);
// [0x1562690] (48 bytes) hkUuid::hkUuid(unsigned int,unsigned int,unsigned int,unsigned int)
// void hkUuid::hkUuid(hkUuid *this, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
// [0x15626c0] (9 bytes) hkUuid::hkUuid(hkFinishLoadedObjectFlag)
// void hkUuid::hkUuid();
// [0x15626d0] (242 bytes) hkUuid::setRandom(void)
// int hkUuid::setRandom(hkUuid *this);
// [0x15627d0] (619 bytes) hkUuid::setFromString(char const*)
// hkUuid *hkUuid::setFromString(hkUuid *this, char *a2, hkUuid *a3);
// [0x1562a40] (449 bytes) hkUuid::setCombination(hkUuid const&,hkUuid const&)
// hkUuid *hkUuid::setCombination(hkUuid *this, __m128i *a2, const hkUuid *a3);
// [0x1562c10] (222 bytes) hkUuid::setCombination(hkUuid const&,char const*)
// __m128i *hkUuid::setCombination(__m128i *this, __m128i *a2, const char *a3);
// [0x1562cf0] (228 bytes) hkUuid::toString(hkStringBuf &)const
// int hkUuid::toString(__m128i *this, hkStringBuf *a2);
// [0x1562ea0] (22 bytes) hkReferencedObject::staticClass(void)
// void *hkReferencedObject::staticClass();
// [0x1563030] (22 bytes) hkContactPoint::staticClass(void)
// void *hkContactPoint::staticClass();
// [0x15631e0] (15 bytes) hkStringPtr::hkStringPtr(void)
// void hkStringPtr::hkStringPtr(hkStringPtr *this);
// [0x15631f0] (109 bytes) hkStringPtr::hkStringPtr(char const*)
// void hkStringPtr::hkStringPtr(hkStringPtr *this, hkString *a2);
// [0x1563260] (201 bytes) hkStringPtr::hkStringPtr(char const*,int)
// void hkStringPtr::hkStringPtr(hkStringPtr *this, hkString *a2, int a3);
// [0x1563330] (114 bytes) hkStringPtr::hkStringPtr(hkStringPtr const&)
// void hkStringPtr::hkStringPtr(hkStringPtr *this, const hkStringPtr *a2);
// [0x15633b0] (9 bytes) hkStringPtr::hkStringPtr(hkFinishLoadedObjectFlag)
// void hkStringPtr::hkStringPtr();
// [0x15633c0] (92 bytes) hkStringPtr::~hkStringPtr()
// void hkStringPtr::~hkStringPtr(hkStringPtr *this);
// [0x1563420] (183 bytes) hkStringPtr::operator=(char const*)
// hkStringPtr *hkStringPtr::operator=(hkStringPtr *this, hkString *a2);
// [0x15634e0] (191 bytes) hkStringPtr::operator=(hkStringPtr const&)
// hkStringPtr *hkStringPtr::operator=(hkStringPtr *this, const hkStringPtr *a2);
// [0x15635a0] (43 bytes) hkStringPtr::getLength(void)const
// int hkStringPtr::getLength(hkStringPtr *this);
// [0x15635d0] (446 bytes) hkStringPtr::printf(char const*,...)
// int hkStringPtr::printf(hkStringPtr *this, char *a2, ...);
// [0x1563790] (284 bytes) hkStringPtr::set(char const*,int)
// hkString *hkStringPtr::set(hkStringPtr *this, hkString *a2, int a3);
// [0x15638b0] (114 bytes) hkStringPtr::setPointerAligned(char const*)
// const char *hkStringPtr::setPointerAligned(hkStringPtr *this, const char *a2);
// [0x1563960] (91 bytes) hkMemorySnapshot::hkMemorySnapshot(hkMemoryAllocator *)
// void hkMemorySnapshot::hkMemorySnapshot(hkMemorySnapshot *this, hkMemoryAllocator *a2);
// [0x15639c0] (803 bytes) hkMemorySnapshot::hkMemorySnapshot(hkMemorySnapshot const&)
// void hkMemorySnapshot::hkMemorySnapshot(hkMemorySnapshot *this, const hkMemorySnapshot *a2);
// [0x1563cf0] (14 bytes) hkMemorySnapshot::setAllocator(hkMemoryAllocator *)
// hkMemorySnapshot *hkMemorySnapshot::setAllocator(hkMemorySnapshot *this, hkMemoryAllocator *a2);
// [0x1563d00] (166 bytes) hkMemorySnapshot::swap(hkMemorySnapshot&)
// int hkMemorySnapshot::swap(hkMemorySnapshot *this, hkMemorySnapshot *a2);
// [0x1563db0] (209 bytes) hkMemorySnapshot::clear(void)
// int hkMemorySnapshot::clear(hkMemorySnapshot *this);
// [0x1563e90] (47 bytes) hkMemorySnapshot::~hkMemorySnapshot()
// void hkMemorySnapshot::~hkMemorySnapshot(hkMemorySnapshot *this);
// [0x1563ec0] (228 bytes) hkMemorySnapshot::addProvider(char const*,int)
// int hkMemorySnapshot::addProvider(hkMemorySnapshot *this, char *a2, int a3);
// [0x1563fb0] (100 bytes) hkMemorySnapshot::addParentProvider(int,int)
// int hkMemorySnapshot::addParentProvider(hkMemorySnapshot *this, int a2, int a3);
// [0x1564020] (140 bytes) hkMemorySnapshot::addItem(int,hkEnum<hkMemorySnapshot::StatusBits,signed char>,void const*,int)
// int hkMemorySnapshot::addItem(int a1, int a2, char a3, int a4, int a5);
// [0x15640b0] (79 bytes) hkMemorySnapshot::setCallStack(int,unsigned long const*,int)
// int hkMemorySnapshot::setCallStack(hkMemorySnapshot *this, int a2, unsigned int *a3, int a4);
// [0x1564100] (40 bytes) hkMemorySnapshot::setRouterWiring(int,int,int,int,int)
// hkMemorySnapshot *hkMemorySnapshot::setRouterWiring( hkMemorySnapshot *this, int a2, int a3, int a4, int a5, int a6);
// [0x1564130] (926 bytes) hkMemorySnapshot::allocationDiff(hkMemorySnapshot const&,hkMemorySnapshot const&,hkArray<hkMemorySnapshot::Allocation,hkContainerHeapAllocator> &,hkArray<hkMemorySnapshot::Allocation,hkContainerHeapAllocator> &)
// int hkMemorySnapshot::allocationDiff(int a1, int a2, int a3, hkMemoryAllocator *a4);
// [0x15644d0] (307 bytes) hkMemorySnapshot::dumpAllocation(hkMemorySnapshot::Allocation const&,hkOstream &)const
// void hkMemorySnapshot::dumpAllocation(int a1, int a2, hkOstream *a3);
// [0x15647c0] (819 bytes) hkMemorySnapshot::sort(void)
// int hkMemorySnapshot::sort(hkMemorySnapshot *this);
// [0x1564b00] (9 bytes) hkLifoAllocator::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// void hkLifoAllocator::getMemoryStatistics();
// [0x1564b10] (11 bytes) hkLifoAllocator::getAllocatedSize(void const*,int)const
// int hkLifoAllocator::getAllocatedSize(hkLifoAllocator *this, const void *a2, int a3);
// [0x1564b20] (166 bytes) hkLifoAllocator::bufRealloc(void *,int,int &)
// char *hkLifoAllocator::bufRealloc(hkLifoAllocator *this, char *a2, int a3, int *a4);
// [0x1564bd0] (45 bytes) hkLifoAllocator::~hkLifoAllocator()
// void hkLifoAllocator::~hkLifoAllocator(hkLifoAllocator *this);
// [0x1564c00] (45 bytes) hkLifoAllocator::~hkLifoAllocator()
// void hkLifoAllocator::~hkLifoAllocator(hkLifoAllocator *this);
// [0x1564c30] (41 bytes) hkLifoAllocator::hkLifoAllocator(int)
// void hkLifoAllocator::hkLifoAllocator(hkLifoAllocator *this, int a2);
// [0x1564c60] (133 bytes) hkLifoAllocator::init(hkMemoryAllocator *,hkMemoryAllocator *,hkMemoryAllocator *)
// hkMemoryAllocator *hkLifoAllocator::init( hkLifoAllocator *this, hkMemoryAllocator *a2, hkMemoryAllocator *a3, hkMemoryAllocator *a4);
// [0x1564cf0] (257 bytes) hkLifoAllocator::quit(hkMemoryAllocator **)
// hkMemoryAllocator *hkLifoAllocator::quit(hkLifoAllocator *this, hkMemoryAllocator **a2);
// [0x1564e00] (24 bytes) hkLifoAllocator::isEmpty(void)const
// bool hkLifoAllocator::isEmpty(hkLifoAllocator *this);
// [0x1564e20] (13 bytes) hkLifoAllocator::numExternalAllocations(void)const
// int hkLifoAllocator::numExternalAllocations(hkLifoAllocator *this);
// [0x1564e30] (366 bytes) hkLifoAllocator::allocateFromNewSlab(int)
// int hkLifoAllocator::allocateFromNewSlab(hkLifoAllocator *this, int a2);
// [0x1564fa0] (90 bytes) hkLifoAllocator::bufAlloc(int &)
// int hkLifoAllocator::bufAlloc(hkLifoAllocator *this, int *a2);
// [0x1565000] (82 bytes) hkLifoAllocator::blockAlloc(int)
// int hkLifoAllocator::blockAlloc(hkLifoAllocator *this, int a2);
// [0x1565060] (318 bytes) hkLifoAllocator::popNonLifoFrees(void)
// uint32_t *hkLifoAllocator::popNonLifoFrees(hkLifoAllocator *this);
// [0x15651a0] (543 bytes) hkLifoAllocator::insertNonLifoFree(void *,int)
// hkLifoAllocator *hkLifoAllocator::insertNonLifoFree(hkLifoAllocator *this, char *a2, int a3);
// [0x15653c0] (133 bytes) hkLifoAllocator::slowBlockFree(void *,int)
// hkLifoAllocator *hkLifoAllocator::slowBlockFree(hkLifoAllocator *this, char *a2, int a3);
// [0x1565450] (90 bytes) hkLifoAllocator::bufFree(void *,int)
// hkLifoAllocator *hkLifoAllocator::bufFree(hkLifoAllocator *this, char *a2, int a3);
// [0x15654b0] (90 bytes) hkLifoAllocator::blockFree(void *,int)
// hkLifoAllocator *hkLifoAllocator::blockFree(hkLifoAllocator *this, char *a2, int a3);
// [0x15655e0] (22 bytes) hkArrayTypeAttribute::staticClass(void)
// void *hkArrayTypeAttribute::staticClass();
// [0x1565600] (22 bytes) hkDataObjectTypeAttribute::staticClass(void)
// void *hkDataObjectTypeAttribute::staticClass();
// [0x1565620] (22 bytes) hkDescriptionAttribute::staticClass(void)
// void *hkDescriptionAttribute::staticClass();
// [0x1565640] (22 bytes) hkDocumentationAttribute::staticClass(void)
// void *hkDocumentationAttribute::staticClass();
// [0x1565660] (22 bytes) hkGizmoAttribute::staticClass(void)
// void *hkGizmoAttribute::staticClass();
// [0x1565680] (22 bytes) hkLinkAttribute::staticClass(void)
// void *hkLinkAttribute::staticClass();
// [0x15656a0] (22 bytes) hkModelerNodeTypeAttribute::staticClass(void)
// void *hkModelerNodeTypeAttribute::staticClass();
// [0x15656c0] (22 bytes) hkPostFinishAttribute::staticClass(void)
// void *hkPostFinishAttribute::staticClass();
// [0x15656e0] (22 bytes) hkRangeInt32Attribute::staticClass(void)
// void *hkRangeInt32Attribute::staticClass();
// [0x1565700] (22 bytes) hkRangeRealAttribute::staticClass(void)
// void *hkRangeRealAttribute::staticClass();
// [0x1565720] (22 bytes) hkScriptableAttribute::staticClass(void)
// void *hkScriptableAttribute::staticClass();
// [0x1565740] (22 bytes) hkSemanticsAttribute::staticClass(void)
// void *hkSemanticsAttribute::staticClass();
// [0x1565760] (22 bytes) hkUiAttribute::staticClass(void)
// void *hkUiAttribute::staticClass();
// [0x1566090] (25 bytes) hkThread::hkThread(void)
// void hkThread::hkThread(hkThread *this);
// [0x15660b0] (121 bytes) hkThread::joinThread(void)
// pthread_t hkThread::joinThread(pthread_t *this);
// [0x1566130] (34 bytes) hkThread::~hkThread()
// void hkThread::~hkThread(pthread_t *this);
// [0x1566160] (193 bytes) hkThread::startThread(void * (*)(void *),void *,char const*,int)
// hkThread *hkThread::startThread( hkThread *this, void *(*a2)(void *), void *(*start_routine)(void *), char *arg, int a5);
// [0x1566230] (12 bytes) hkThread::getStatus(void)
// int hkThread::getStatus(hkThread *this);
// [0x1566240] (11 bytes) hkThread::getChildThreadId(void)
// int64_t hkThread::getChildThreadId(hkThread *this);
// [0x1566250] (11 bytes) hkThread::getHandle(void)
// int hkThread::getHandle(hkThread *this);
// [0x1566260] (32 bytes) hkThread::getMyThreadId(void)
// int64_t hkThread::getMyThreadId();
// [0x1566280] (16 bytes) hkMT19937RandomGenerator::hkMT19937RandomGenerator(void)
// void hkMT19937RandomGenerator::hkMT19937RandomGenerator(hkMT19937RandomGenerator *this);
// [0x1566290] (83 bytes) hkMT19937RandomGenerator::~hkMT19937RandomGenerator()
// void hkMT19937RandomGenerator::~hkMT19937RandomGenerator(hkMT19937RandomGenerator *this);
// [0x15662f0] (139 bytes) hkMT19937RandomGenerator::initialize(unsigned int)
// int hkMT19937RandomGenerator::initialize(hkMT19937RandomGenerator *this, unsigned int a2);
// [0x1566380] (182 bytes) hkMT19937RandomGenerator::generateNumbers(void)
// unsigned int *hkMT19937RandomGenerator::generateNumbers(hkMT19937RandomGenerator *this);
// [0x1566440] (127 bytes) hkMT19937RandomGenerator::getRand(void)
// unsigned int hkMT19937RandomGenerator::getRand(hkMT19937RandomGenerator *this);
// [0x15664c0] (114 bytes) hkMonitorStream::init(void)
// int *hkMonitorStream::init();
// [0x1566540] (99 bytes) hkMonitorStream::clear(void)
// void hkMonitorStream::clear(hkMonitorStream *this);
// [0x15665b0] (97 bytes) hkMonitorStream::quit(void)
// int hkMonitorStream::quit();
// [0x1566620] (116 bytes) hkMonitorStream::resize(int)
// void hkMonitorStream::resize(hkMonitorStream *this, int a2);
// [0x15666a0] (71 bytes) hkMonitorStream::setStaticBuffer(char *,int,bool)
// void hkMonitorStream::setStaticBuffer(hkMonitorStream *this, char *a2, int a3, bool a4);
// [0x15666f0] (12 bytes) hkMonitorStream::reset(void)
// hkMonitorStream *hkMonitorStream::reset(hkMonitorStream *this);
// [0x1566710] (22 bytes) hkMotionState::staticClass(void)
// void *hkMotionState::staticClass();
// [0x1566820] (61 bytes) hkStringObject::~hkStringObject()
// void hkStringObject::~hkStringObject(hkStringObject *this);
// [0x15668a0] (118 bytes) hkStringObject::~hkStringObject()
// void hkStringObject::~hkStringObject(hkStringObject *this);
// [0x1566920] (22 bytes) hkStringObject::staticClass(void)
// void *hkStringObject::staticClass();
// [0x1566a30] (152 bytes) hkTransformf::get4x4ColumnMajor(float *)const
// float *hkTransformf::get4x4ColumnMajor(hkTransformf *this, float *a2);
// [0x1566ad0] (170 bytes) hkTransformf::get4x4ColumnMajor(double *)const
// double *hkTransformf::get4x4ColumnMajor(hkTransformf *this, double *a2);
// [0x1566b80] (152 bytes) hkTransformf::set4x4ColumnMajor(float const*)
// hkTransformf *hkTransformf::set4x4ColumnMajor(hkTransformf *this, const float *a2);
// [0x1566c20] (152 bytes) hkTransformf::set4x4ColumnMajor(double const*)
// hkTransformf *hkTransformf::set4x4ColumnMajor(hkTransformf *this, const double *a2);
// [0x1566cc0] (298 bytes) hkTransformf::setInverse(hkTransformf const&)
// hkTransformf *hkTransformf::setInverse(hkTransformf *this, const hkTransformf *a2);
// [0x1566df0] (920 bytes) hkTransformf::setMul(hkTransformf const&,hkTransformf const&)
// hkTransformf *hkTransformf::setMul(hkTransformf *this, const hkTransformf *a2, const hkTransformf *a3);
// [0x1567190] (904 bytes) hkTransformf::setMulEq(hkTransformf const&)
// hkTransformf *hkTransformf::setMulEq(hkTransformf *this, const hkTransformf *a2);
// [0x1567520] (1054 bytes) hkTransformf::setMul(hkQsTransformf const&,hkTransformf const&)
// const hkQsTransformf *hkTransformf::setMul( hkTransformf *this, const hkQsTransformf *a2, const hkTransformf *a3);
// [0x1567940] (636 bytes) hkTransformf::setMulInverseMul(hkTransformf const&,hkTransformf const&)
// const hkTransformf *hkTransformf::setMulInverseMul( hkTransformf *this, const hkTransformf *a2, const hkTransformf *a3);
// [0x1567bc0] (87 bytes) hkTransformf::isOk(void)const
// int hkTransformf::isOk(hkTransformf *this);
// [0x1567c20] (919 bytes) hkTransformf::setMulMulInverse(hkTransformf const&,hkTransformf const&)
// hkTransformf *hkTransformf::setMulMulInverse( hkTransformf *this, const hkTransformf *a2, const hkTransformf *a3);
// [0x1567fc0] (201 bytes) hkTransformf::isApproximatelyEqual(hkTransformf const&,float)const
// int hkTransformf::isApproximatelyEqual(hkTransformf *this, const hkTransformf *a2, float a3);
// [0x1568090] (434 bytes) hkTransformf::isApproximatelyEqualSimd(hkTransformf const&,hkSimdFloat32 const&)const
// bool hkTransformf::isApproximatelyEqualSimd(float *a1, float *a2, float *a3);
// [0x1568250] (215 bytes) hkVector4f::setRotatedDir(hkMatrix3f const&,hkVector4f const&)
// hkVector4f *hkVector4f::setRotatedDir(hkVector4f *this, const hkMatrix3f *a2, const hkVector4f *a3);
// [0x1568330] (138 bytes) hkVector4f::setRotatedInverseDir(hkMatrix3f const&,hkVector4f const&)
// const hkMatrix3f *hkVector4f::setRotatedInverseDir( hkVector4f *this, const hkMatrix3f *a2, const hkVector4f *a3);
// [0x15683c0] (193 bytes) hkVector4f::setTransformedPos(hkTransformf const&,hkVector4f const&)
// const hkTransformf *hkVector4f::setTransformedPos( hkVector4f *this, const hkTransformf *a2, const hkVector4f *a3);
// [0x1568490] (153 bytes) hkVector4f::setTransformedInversePos(hkTransformf const&,hkVector4f const&)
// const hkTransformf *hkVector4f::setTransformedInversePos( hkVector4f *this, const hkTransformf *a2, const hkVector4f *a3);
// [0x1568530] (436 bytes) hkVector4f::setTransformedPos(hkQsTransformf const&,hkVector4f const&)
// const hkQsTransformf *hkVector4f::setTransformedPos( hkVector4f *this, const hkQsTransformf *a2, const hkVector4f *a3);
// [0x15686f0] (876 bytes) hkVector4f::setTransformedInversePos(hkQsTransformf const&,hkVector4f const&)
// int hkVector4f::setTransformedInversePos(hkVector4f *this, const hkQsTransformf *a2, const hkVector4f *a3);
// [0x1568a60] (412 bytes) hkVector4f::setTransformedPos(hkQTransformf const&,hkVector4f const&)
// const hkQTransformf *hkVector4f::setTransformedPos( hkVector4f *this, const hkQTransformf *a2, const hkVector4f *a3);
// [0x1568c00] (389 bytes) hkVector4f::setTransformedInversePos(hkQTransformf const&,hkVector4f const&)
// const hkQTransformf *hkVector4f::setTransformedInversePos( hkVector4f *this, const hkQTransformf *a2, const hkVector4f *a3);
// [0x1568d90] (379 bytes) hkVector4f::setRotatedDir(hkQuaternionf const&,hkVector4f const&)
// hkVector4f *hkVector4f::setRotatedDir(hkVector4f *this, const hkQuaternionf *a2, const hkVector4f *a3);
// [0x1568f10] (392 bytes) hkVector4f::setRotatedInverseDir(hkQuaternionf const&,hkVector4f const&)
// hkVector4f *hkVector4f::setRotatedInverseDir(hkVector4f *this, const hkQuaternionf *a2, const hkVector4f *a3);
// [0x15690a0] (36 bytes) hkColor::rgbFromChars(unsigned char,unsigned char,unsigned char,unsigned char)
// int hkColor::rgbFromChars(hkColor *this, uint8_t a2, uint8_t a3, uint8_t a4);
// [0x15690d0] (934 bytes) hkColor::rgbFromFloats(float,float,float,float)
// int hkColor::rgbFromFloats(hkColor *this, unsigned int a2, float a3, unsigned int a4);
// [0x1569480] (371 bytes) hkColor::rgbFromHSV(float,float,float,float)
// int hkColor::rgbFromHSV(hkColor *this, float a2, hkColor *a3, unsigned int a4);
// [0x1569600] (135 bytes) hkColor::getRandomColor(hkPseudoRandomGenerator &)
// int hkColor::getRandomColor(long double a1, hkColor *this);
// [0x1569690] (96 bytes) hkColor::getRandomColor(void)
// int hkColor::getRandomColor(long double a1);
// [0x15696f0] (275 bytes) hkColor::getSpectrumColor(float)
// int hkColor::getSpectrumColor(hkColor *this);
// [0x1569810] (43 bytes) hkColor::getPaletteColor(int,unsigned char)
// int hkColor::getPaletteColor(hkColor *this, uint8_t a2);
// [0x1569850] (22 bytes) hkAabbHalf::staticClass(void)
// void *hkAabbHalf::staticClass();
// [0x1569940] (272 bytes) hkUFloat8::operator=(float const&)
// hkUFloat8 *hkUFloat8::operator=(hkUFloat8 *this, const float *a2);
// [0x1569a50] (56 bytes) hkUFloat8::operator=(double const&)
// hkUFloat8 *hkUFloat8::operator=(hkUFloat8 *this, const double *a2);
// [0x1569a90] (1640 bytes) hkQsTransformf::fastRenormalizeQuaternionBatch(hkQsTransformf*,unsigned int)
// float *hkQsTransformf::fastRenormalizeQuaternionBatch(hkQsTransformf *this, hkQsTransformf *a2);
// [0x156a100] (345 bytes) hkQsTransformf::fastRenormalizeBatch(hkQsTransformf*,float *,unsigned int)
// float *hkQsTransformf::fastRenormalizeBatch(hkQsTransformf *this, hkQsTransformf *a2, hkQsTransformf *a3);
// [0x156a260] (305 bytes) hkQsTransformf::fastRenormalizeBatch(hkQsTransformf*,float,unsigned int)
// float *hkQsTransformf::fastRenormalizeBatch(hkQsTransformf *this, hkQsTransformf *a2, hkQsTransformf *a3);
// [0x156a3a0] (390 bytes) hkQsTransformf::get4x4ColumnMajor(float *)const
// float *hkQsTransformf::get4x4ColumnMajor(hkQsTransformf *this, float *a2);
// [0x156a530] (104 bytes) hkQsTransformf::setFromTransformNoScale(hkTransformf const&)
// int hkQsTransformf::setFromTransformNoScale(hkQsTransformf *this, const hkTransformf *a2);
// [0x156a5a0] (74 bytes) hkQsTransformf::copyToTransformNoScale(hkTransformf &)const
// int hkQsTransformf::copyToTransformNoScale(hkQsTransformf *this, hkTransformf *a2);
// [0x156a5f0] (98 bytes) hkQsTransformf::setFromTransform(hkQTransformf const&)
// hkQsTransformf *hkQsTransformf::setFromTransform(hkQsTransformf *this, const hkQTransformf *a2);
// [0x156a660] (42 bytes) hkQsTransformf::copyToTransform(hkTransformf &)const
// float *hkQsTransformf::copyToTransform(hkQsTransformf *this, hkTransformf *a2);
// [0x156a690] (219 bytes) hkQsTransformf::isOk(float)const
// int hkQsTransformf::isOk(hkQsTransformf *this, float a2);
// [0x156a770] (525 bytes) hkQsTransformf::isApproximatelyEqual(hkQsTransformf const&,float)const
// bool hkQsTransformf::isApproximatelyEqual(hkQsTransformf *this, const hkQsTransformf *a2, float a3);
// [0x156a980] (5374 bytes) hkMatrixDecompositionImpl<float>::decomposeMatrix(hkMatrix4f const&,hkMatrixDecompositionImpl<float>::Decomposition &)
// int hkMatrixDecompositionImpl<float>::decomposeMatrix(int a1, int *a2);
// [0x156be80] (167 bytes) hkQsTransformf::set4x4ColumnMajor(float const*)
// bool hkQsTransformf::set4x4ColumnMajor(hkQsTransformf *this, float *a2);
// [0x156bf30] (42 bytes) hkQsTransformf::setFromTransform(hkTransformf const&)
// bool hkQsTransformf::setFromTransform(hkQsTransformf *this, const hkTransformf *a2);
// [0x156bf60] (149 bytes) hkQsTransformf::set(hkMatrix4f const&)
// bool hkQsTransformf::set(hkQsTransformf *this, const hkMatrix4f *a2);
// [0x156c030] (361 bytes) hkCriticalSection::Construct(int)
// struct hkCriticalSection *hkCriticalSection::Construct(pthread_mutex_t *mutex, unsigned int a2);
// [0x156fe60] (57 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator new(unsigned int)
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator new();
// [0x156fea0] (71 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator delete(void *,unsigned int)
// void hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator delete(void *a1);
// [0x156fef0] (11 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator new(unsigned int,void *)
// unsigned int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator new( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, unsigned int a2);
// [0x156ff00] (11 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator new[](unsigned int,void *)
// unsigned int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator new[]( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, unsigned int a2);
// [0x156ff10] (9 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator delete(void *,void *)
// void hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator delete();
// [0x156ff20] (9 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator delete[](void *,void *)
// void hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator delete[]();
// [0x156ff30] (89 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::hkCachedHashMap(hkStringMapOperations)
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::hkCachedHashMap(hkString **a1);
// [0x156ff90] (61 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::~hkCachedHashMap()
// void hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::~hkCachedHashMap( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this);
// [0x156ffd0] (49 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getIterator(void)const
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getIterator( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this);
// [0x1570010] (20 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getKey(Dummy *)const
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getKey(uint32_t *a1, int a2);
// [0x1570030] (20 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getValue(Dummy *)const
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getValue(uint32_t *a1, int a2);
// [0x1570050] (24 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::setValue(Dummy *,unsigned long)
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::setValue(uint32_t *a1, int a2, int a3);
// [0x1570070] (67 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getNext(Dummy *)const
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getNext(uint32_t *a1, int a2);
// [0x15700c0] (21 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::isValid(Dummy *)const
// bool *hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::isValid(bool *a1, int a2, int a3);
// [0x15700e0] (210 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::findKey(unsigned long)const
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::findKey( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, hkString *a2);
// [0x15701c0] (73 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::hasKey(unsigned long)const
// hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::hasKey( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *a2, hkString *a3);
// [0x1570210] (134 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::get(unsigned long,unsigned long *)const
// hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::get( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *a2, hkString *a3, int *a4);
// [0x15702a0] (85 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getWithDefault(unsigned long,unsigned long)const
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getWithDefault( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, hkString *a2, int a3);
// [0x1570300] (272 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::remove(Dummy *)
// unsigned int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::remove(int *a1, unsigned int a2);
// [0x1570410] (129 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::remove(unsigned long)
// hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::remove( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *a2, hkString *a3);
// [0x15704a0] (12 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getSize(void)const
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getSize( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this);
// [0x15704b0] (162 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::isOk(void)const
// hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::isOk( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, int *a2);
// [0x1570560] (135 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator=(hkCachedHashMap<hkStringMapOperations,extContainerAllocator> const*)
// hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::operator=( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, const hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *a2);
// [0x15705f0] (45 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::clear(void)
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::clear( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this);
// [0x1570620] (47 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::swap(hkCachedHashMap<hkStringMapOperations,extContainerAllocator>&)
// hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::swap( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *a2);
// [0x1570650] (13 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getCapacity(void)const
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getCapacity( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this);
// [0x1570660] (224 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::resizeTable(int)
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::resizeTable( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, int a2);
// [0x1570740] (315 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::insert(unsigned long,unsigned long)
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::insert( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, hkString *a2, unsigned int a3);
// [0x1570880] (124 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getOrInsert(unsigned long,unsigned long)
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::getOrInsert( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, hkString *a2, unsigned int a3);
// [0x1570900] (91 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::merge(hkCachedHashMap<hkStringMapOperations,extContainerAllocator> const&)
// void hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::merge( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, const hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *a2);
// [0x1570960] (263 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::findOrInsertKey(unsigned long,unsigned long)
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::findOrInsertKey( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, hkString *a2, unsigned int a3);
// [0x1570a70] (82 bytes) hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::reserve(int)
// int hkCachedHashMap<hkStringMapOperations,extContainerAllocator>::reserve( hkCachedHashMap<hkStringMapOperations, extContainerAllocator> *this, int a2);
// [0x1570bc0] (141 bytes) hkLeakDetectAllocator::~hkLeakDetectAllocator()
// void hkLeakDetectAllocator::~hkLeakDetectAllocator(hkLeakDetectAllocator *this);
// [0x1570c50] (141 bytes) hkLeakDetectAllocator::~hkLeakDetectAllocator()
// void hkLeakDetectAllocator::~hkLeakDetectAllocator(hkLeakDetectAllocator *this);
// [0x1570ce0] (195 bytes) hkStringBuf::hkStringBuf(char const*)
// void hkStringBuf::hkStringBuf(hkStringBuf *this, hkString *a2);
// [0x1570db0] (155 bytes) hkStringBuf::hkStringBuf(char const*,int)
// void hkStringBuf::hkStringBuf(hkStringBuf *this, char *a2, size_t a3);
// [0x1570e50] (630 bytes) hkStringBuf::hkStringBuf(hkStringBuf const&)
// void hkStringBuf::hkStringBuf(hkStringBuf *this, const hkStringBuf *a2);
// [0x15710d0] (649 bytes) hkStringBuf::operator=(hkStringBuf const&)
// hkStringBuf *hkStringBuf::operator=(hkStringBuf *this, const hkStringBuf *a2);
// [0x1571360] (235 bytes) hkStringBuf::operator=(char const*)
// hkStringBuf *hkStringBuf::operator=(hkStringBuf *this, hkString *a2);
// [0x1571450] (68 bytes) hkStringBuf::hkStringBuf(hkStringPtr const&)
// void hkStringBuf::hkStringBuf(hkStringBuf *this, const hkStringPtr *a2);
// [0x15714a0] (71 bytes) hkStringBuf::indexOf(char,int,int)const
// int hkStringBuf::indexOf(hkStringBuf *this, char a2, int a3, int a4);
// [0x15714f0] (63 bytes) hkStringBuf::indexOf(char const*,int,int)const
// int hkStringBuf::indexOf(hkStringBuf *this, char *a2, int a3);
// [0x1571530] (160 bytes) hkStringBuf::indexOfCase(char const*)const
// int hkStringBuf::indexOfCase(hkStringBuf *this, char *a2);
// [0x15715d0] (86 bytes) hkStringBuf::lastIndexOf(char,int,int)const
// int hkStringBuf::lastIndexOf(hkStringBuf *this, char a2, int a3, int a4);
// [0x1571630] (74 bytes) hkStringBuf::lastIndexOf(char const*,int,int)const
// int hkStringBuf::lastIndexOf(hkString **this, char *a2);
// [0x1571680] (44 bytes) hkStringBuf::compareTo(char const*)const
// int hkStringBuf::compareTo(hkString **this, char *a2);
// [0x15716b0] (44 bytes) hkStringBuf::compareToIgnoreCase(char const*)const
// int hkStringBuf::compareToIgnoreCase(hkString **this, char *a2);
// [0x15716e0] (59 bytes) hkStringBuf::operator<(char const*)const
// hkStringBuf *hkStringBuf::operator<(hkStringBuf *this, const char *a2, char *a3);
// [0x1571720] (50 bytes) hkStringBuf::operator==(char const*)const
// bool hkStringBuf::operator==(hkString **this, char *a2);
// [0x1571760] (105 bytes) hkStringBuf::startsWith(char const*)const
// int hkStringBuf::startsWith(hkStringBuf *this, char *a2);
// [0x15717d0] (146 bytes) hkStringBuf::startsWithCase(char const*)const
// int hkStringBuf::startsWithCase(hkStringBuf *this, char *a2);
// [0x1571870] (115 bytes) hkStringBuf::endsWith(char const*)const
// int hkStringBuf::endsWith(hkStringBuf *this, hkString *a2);
// [0x15718f0] (166 bytes) hkStringBuf::endsWithCase(char const*)const
// int hkStringBuf::endsWithCase(hkStringBuf *this, hkString *a2);
// [0x15719a0] (234 bytes) hkStringBuf::split(int,hkArray<char const*,hkContainerTempAllocator> &)
// int hkStringBuf::split(hkStringBuf *a1, char a2, hkMemoryAllocator *a3);
// [0x1571a90] (95 bytes) hkStringBuf::clear(void)
// uint8_t *hkStringBuf::clear(hkStringBuf *this);
// [0x1571af0] (372 bytes) hkStringBuf::printf(char const*,...)
// int hkStringBuf::printf(hkStringBuf *this, char *a2, ...);
// [0x1571c70] (656 bytes) hkStringBuf::operator+=(char const*)
// hkStringBuf *hkStringBuf::operator+=(hkStringBuf *this, hkString *a2);
// [0x1571f00] (346 bytes) hkStringBuf::appendJoin(char const*,char const*,char const*,char const*,char const*,char const*)
// hkStringBuf *hkStringBuf::appendJoin( hkStringBuf *this, hkString *a2, const char *a3, const char *a4, const char *a5, const char *a6, const char *a7);
// [0x1572060] (107 bytes) hkStringBuf::hkStringBuf(char const*,char const*,char const*,char const*,char const*,char const*)
// void hkStringBuf::hkStringBuf( hkStringBuf *this, hkString *a2, char *a3, char *a4, char *a5, char *a6, char *a7);
// [0x15720d0] (94 bytes) hkStringBuf::setJoin(char const*,char const*,char const*,char const*,char const*,char const*)
// hkStringBuf *hkStringBuf::setJoin( hkStringBuf *this, hkString *a2, char *a3, char *a4, char *a5, char *a6, char *a7);
// [0x1572130] (533 bytes) hkStringBuf::chompStart(int)
// unsigned int hkStringBuf::chompStart(hkStringBuf *this, int a2);
// [0x1572350] (135 bytes) hkStringBuf::chompEnd(int)
// void hkStringBuf::chompEnd(hkStringBuf *this, int a2);
// [0x15723e0] (141 bytes) hkStringBuf::slice(int,int)
// hkMemUtil *hkStringBuf::slice(hkMemUtil **this, int a2, size_t a3);
// [0x1572470] (159 bytes) hkStringBuf::set(char const*,int)
// void *hkStringBuf::set(hkStringBuf *this, hkString *a2, signed int a3);
// [0x1572510] (203 bytes) hkStringBuf::append(char const*,int)
// void hkStringBuf::append(hkStringBuf *this, hkString *a2, int a3);
// [0x15725e0] (610 bytes) hkStringBuf::appendPrintf(char const*,...)
// int hkStringBuf::appendPrintf(hkStringBuf *this, char *a2, ...);
// [0x1572850] (696 bytes) hkStringBuf::insert(int,char const*,int)
// hkStringBuf *hkStringBuf::insert(hkStringBuf *this, int a2, hkString *a3, int a4);
// [0x1572b10] (58 bytes) hkStringBuf::prepend(char const*,int)
// hkStringBuf *hkStringBuf::prepend(hkStringBuf *this, char *a2, int a3);
// [0x1572b50] (120 bytes) hkStringBuf::pathBasename(void)
// signed int hkStringBuf::pathBasename(hkStringBuf *this);
// [0x1572bd0] (144 bytes) hkStringBuf::pathDirname(void)
// hkMemUtil *hkStringBuf::pathDirname(hkStringBuf *this);
// [0x1572c60] (95 bytes) hkStringBuf::pathExtension(void)
// uint8_t *hkStringBuf::pathExtension(hkStringBuf *this);
// [0x1572cc0] (963 bytes) hkStringBuf::pathAppend(char const*,char const*,char const*)
// hkStringBuf *hkStringBuf::pathAppend(hkStringBuf *this, hkString *a2, const char *a3, const char *a4);
// [0x1573090] (164 bytes) hkStringBuf::replace(char,char,hkStringBuf::ReplaceType)
// int hkStringBuf::replace(uint32_t *a1, char a2, char a3, int a4);
// [0x1573140] (811 bytes) hkStringBuf::pathNormalize(void)
// int hkStringBuf::pathNormalize(hkStringBuf *this);
// [0x1573470] (2310 bytes) hkStringBuf::replace(char const*,char const*,hkStringBuf::ReplaceType)
// int hkStringBuf::replace(hkStringBuf *a1, hkString *a2, hkString *a3, int a4);
// [0x1573d80] (88 bytes) hkStringBuf::lowerCase(void)
// int hkStringBuf::lowerCase();
// [0x1573de0] (88 bytes) hkStringBuf::upperCase(void)
// int hkStringBuf::upperCase();
// [0x1573e40] (11 bytes) hkStringBuf::getArray(void)
// hkStringBuf *hkStringBuf::getArray(hkStringBuf *this);
// [0x1573e70] (22 bytes) hkClassEnum::Item::staticClass(void)
// void *hkClassEnum::Item::staticClass();
// [0x1573e90] (22 bytes) hkClassEnum::staticClass(void)
// void *hkClassEnum::staticClass();
// [0x1574030] (9 bytes) hkLargeBlockAllocator::FixedMemoryBlockServer::blockAlloc(int)
// int hkLargeBlockAllocator::FixedMemoryBlockServer::blockAlloc();
// [0x1574040] (9 bytes) hkLargeBlockAllocator::FixedMemoryBlockServer::blockFree(void *,int)
// void hkLargeBlockAllocator::FixedMemoryBlockServer::blockFree();
// [0x1574050] (11 bytes) hkLargeBlockAllocator::FixedMemoryBlockServer::getAllocatedSize(void const*,int)const
// int hkLargeBlockAllocator::FixedMemoryBlockServer::getAllocatedSize( hkLargeBlockAllocator::FixedMemoryBlockServer *this, const void *a2, int a3);
// [0x1574060] (12 bytes) hkLargeBlockAllocator::getExtendedInterface(void)
// char *hkLargeBlockAllocator::getExtendedInterface(hkLargeBlockAllocator *this);
// [0x1574070] (42 bytes) hkLargeBlockAllocator::FixedMemoryBlockServer::bufAlloc(int &)
// int hkLargeBlockAllocator::FixedMemoryBlockServer::bufAlloc( hkLargeBlockAllocator::FixedMemoryBlockServer *this, int *a2);
// [0x15740a0] (32 bytes) hkLargeBlockAllocator::FixedMemoryBlockServer::bufFree(void *,int)
// hkLargeBlockAllocator::FixedMemoryBlockServer *hkLargeBlockAllocator::FixedMemoryBlockServer::bufFree( hkLargeBlockAllocator::FixedMemoryBlockServer *this, void *a2, int a3);
// [0x15740c0] (44 bytes) hkLargeBlockAllocator::FixedMemoryBlockServer::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// int *hkLargeBlockAllocator::FixedMemoryBlockServer::getMemoryStatistics(uint32_t *a1, int *a2);
// [0x15740f0] (9 bytes) hkLargeBlockAllocator::incrementalGarbageCollect(int)
// void hkLargeBlockAllocator::incrementalGarbageCollect();
// [0x1574110] (13 bytes) hkLargeBlockAllocator::setMemorySoftLimit(unsigned int)
// hkLargeBlockAllocator *hkLargeBlockAllocator::setMemorySoftLimit( hkLargeBlockAllocator *this, unsigned int a2);
// [0x1574130] (12 bytes) hkLargeBlockAllocator::getMemorySoftLimit(void)const
// int hkLargeBlockAllocator::getMemorySoftLimit();
// [0x1574150] (15 bytes) hkLargeBlockAllocator::getApproxTotalAllocated(void)const
// int hkLargeBlockAllocator::getApproxTotalAllocated(hkLargeBlockAllocator *this);
// [0x1574170] (9 bytes) hkLargeBlockAllocator::setScrubValues(unsigned int,unsigned int)
// void hkLargeBlockAllocator::setScrubValues();
// [0x1574190] (62 bytes) hkLargeBlockAllocator::canAllocTotal(int)
// int hkLargeBlockAllocator::canAllocTotal(hkLargeBlockAllocator *this, int a2);
// [0x15741e0] (14 bytes) hkLargeBlockAllocator::getAllocatedSize(void const*,int)const
// unsigned int hkLargeBlockAllocator::getAllocatedSize(hkLargeBlockAllocator *this, uint32_t *a2);
// [0x15741f0] (45 bytes) hkLargeBlockAllocator::FixedMemoryBlockServer::~FixedMemoryBlockServer()
// void hkLargeBlockAllocator::FixedMemoryBlockServer::~FixedMemoryBlockServer( hkLargeBlockAllocator::FixedMemoryBlockServer *this);
// [0x1574220] (166 bytes) hkLargeBlockAllocator::~hkLargeBlockAllocator()
// void hkLargeBlockAllocator::~hkLargeBlockAllocator(hkLargeBlockAllocator *this);
// [0x15742e0] (34 bytes) hkLargeBlockAllocator::~hkLargeBlockAllocator()
// void hkLargeBlockAllocator::~hkLargeBlockAllocator(hkLargeBlockAllocator *this);
// [0x1574320] (45 bytes) hkLargeBlockAllocator::FixedMemoryBlockServer::~FixedMemoryBlockServer()
// void hkLargeBlockAllocator::FixedMemoryBlockServer::~FixedMemoryBlockServer( hkLargeBlockAllocator::FixedMemoryBlockServer *this);
// [0x1574350] (382 bytes) hkLargeBlockAllocator::addToSnapshot(hkMemorySnapshot &,int)
// int hkLargeBlockAllocator::addToSnapshot(hkLargeBlockAllocator *this, hkMemorySnapshot *a2, int a3);
// [0x15744e0] (58 bytes) hkLargeBlockAllocator::FixedMemoryBlockServer::FixedMemoryBlockServer(void *,int)
// hkLargeBlockAllocator::FixedMemoryBlockServer *hkLargeBlockAllocator::FixedMemoryBlockServer::FixedMemoryBlockServer( hkLargeBlockAllocator::FixedMemoryBlockServer *this, void *a2, int a3);
// [0x1574520] (55 bytes) hkLargeBlockAllocator::FixedMemoryBlockServer::resize(void *,int,unsigned int,unsigned int &)
// int hkLargeBlockAllocator::FixedMemoryBlockServer::resize( hkLargeBlockAllocator::FixedMemoryBlockServer *this, char *a2, int a3, unsigned int a4, unsigned int *a5);
// [0x1574560] (208 bytes) hkLargeBlockAllocator::_init(void)
// char *hkLargeBlockAllocator::_init(hkLargeBlockAllocator *this);
// [0x1574630] (102 bytes) hkLargeBlockAllocator::hkLargeBlockAllocator(hkMemoryAllocator *)
// void hkLargeBlockAllocator::hkLargeBlockAllocator(hkLargeBlockAllocator *this, hkMemoryAllocator *a2);
// [0x15746a0] (100 bytes) hkLargeBlockAllocator::hkLargeBlockAllocator(void *,int)
// void hkLargeBlockAllocator::hkLargeBlockAllocator(hkLargeBlockAllocator *this, void *a2, int a3);
// [0x1574710] (101 bytes) hkLargeBlockAllocator::freeAll(void)
// char *hkLargeBlockAllocator::freeAll(hkLargeBlockAllocator *this);
// [0x1574780] (345 bytes) hkLargeBlockAllocator::_insertLargeChunk(hkLargeBlockAllocator::MemTreeChunk *,unsigned int)
// int hkLargeBlockAllocator::_insertLargeChunk(int a1, uint32_t *a2, unsigned int a3);
// [0x15748e0] (209 bytes) hkLargeBlockAllocator::_unlinkLargeChunk(hkLargeBlockAllocator::MemTreeChunk *)
// unsigned int hkLargeBlockAllocator::_unlinkLargeChunk(int a1, uint32_t *a2);
// [0x15749c0] (265 bytes) hkLargeBlockAllocator::blockFree(void *,int)
// int hkLargeBlockAllocator::blockFree(hkLargeBlockAllocator *this, uint32_t *a2);
// [0x1574ad0] (742 bytes) hkLargeBlockAllocator::_allocLarge(unsigned int)
// uint32_t *hkLargeBlockAllocator::_allocLarge(hkLargeBlockAllocator *this, unsigned int a2);
// [0x1574dc0] (50 bytes) hkLargeBlockAllocator::_findLargestTreeBlockSize(hkLargeBlockAllocator::MemTreeChunk *,unsigned int)const
// unsigned int hkLargeBlockAllocator::_findLargestTreeBlockSize(int a1, uint32_t *a2, unsigned int a3);
// [0x1574e00] (231 bytes) hkLargeBlockAllocator::findLargestBlockSize(void)const
// unsigned int hkLargeBlockAllocator::findLargestBlockSize(hkLargeBlockAllocator *this);
// [0x1574ef0] (26 bytes) hkLargeBlockAllocator::_makeTopValid(void)const
// int hkLargeBlockAllocator::_makeTopValid(hkLargeBlockAllocator *this);
// [0x1574f10] (71 bytes) hkLargeBlockAllocator::_allocFromTop(unsigned int)
// int hkLargeBlockAllocator::_allocFromTop(hkLargeBlockAllocator *this, unsigned int a2);
// [0x1574f60] (176 bytes) hkLargeBlockAllocator::_resizeSingleBlockServerPage(unsigned int)
// hkLargeBlockAllocator *hkLargeBlockAllocator::_resizeSingleBlockServerPage( hkLargeBlockAllocator *this, uint32_t *a2, unsigned int a3);
// [0x1575010] (482 bytes) hkLargeBlockAllocator::garbageCollect(void)
// hkLargeBlockAllocator *hkLargeBlockAllocator::garbageCollect(hkLargeBlockAllocator *this);
// [0x1575210] (106 bytes) hkLargeBlockAllocator::_alloc(unsigned int)
// uint32_t *hkLargeBlockAllocator::_alloc(hkLargeBlockAllocator *this, unsigned int a2);
// [0x1575280] (759 bytes) hkLargeBlockAllocator::blockAlloc(int)
// int hkLargeBlockAllocator::blockAlloc(hkLargeBlockAllocator *this, int a2);
// [0x1575580] (180 bytes) hkLargeBlockAllocator::isValidAlloc(void *)
// hkLargeBlockAllocator *hkLargeBlockAllocator::isValidAlloc( hkLargeBlockAllocator *this, uint32_t *a2, unsigned int a3);
// [0x1575640] (143 bytes) hkLargeBlockAllocator::forAllAllocs(void (*)(void *,unsigned int,void *),void *)
// int hkLargeBlockAllocator::forAllAllocs( hkLargeBlockAllocator *this, void (*a2)(void *, unsigned int, void *), void *a3);
// [0x15756d0] (72 bytes) hkLargeBlockAllocator::getIterator(void)
// hkLargeBlockAllocator *hkLargeBlockAllocator::getIterator(hkLargeBlockAllocator *this, uint32_t *a2);
// [0x1575720] (103 bytes) hkLargeBlockAllocator::nextBlock(hkLargeBlockAllocator::Iterator &)
// uint8_t *hkLargeBlockAllocator::nextBlock(uint8_t *a1, int a2, unsigned int *a3);
// [0x1575790] (157 bytes) hkLargeBlockAllocator::walkMemory(void (*)(void *,unsigned int,bool,int,void *),void *)
// hkLargeBlockAllocator *hkLargeBlockAllocator::walkMemory( hkLargeBlockAllocator *this, void (*a2)(void *, unsigned int, bool, int, void *), void (*a3)(unsigned int, unsigned int, bool, uint32_t, int), int a4);
// [0x1575840] (143 bytes) hkLargeBlockAllocator::_calculateUsed(void)const
// int hkLargeBlockAllocator::_calculateUsed(hkLargeBlockAllocator *this);
// [0x15758d0] (44 bytes) hkLargeBlockAllocator::calculateMemoryUsedByThisAllocator(void)const
// int hkLargeBlockAllocator::calculateMemoryUsedByThisAllocator(hkLargeBlockAllocator *this);
// [0x1575900] (80 bytes) hkLargeBlockAllocator::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// unsigned int hkLargeBlockAllocator::getMemoryStatistics(hkLargeBlockAllocator *a1, int *a2);
// [0x1575950] (95 bytes) hkLargeBlockAllocator::_checkUsedAlloc(void const*)const
// int hkLargeBlockAllocator::_checkUsedAlloc(hkLargeBlockAllocator *this, uint32_t *a2);
// [0x15759b0] (71 bytes) hkLargeBlockAllocator::_checkFreeChunk(hkLargeBlockAllocator::MemChunk *)
// bool *hkLargeBlockAllocator::_checkFreeChunk(bool *a1, int a2, unsigned int a3);
// [0x1575a00] (106 bytes) hkLargeBlockAllocator::checkAllocations(void **,int)
// hkLargeBlockAllocator *hkLargeBlockAllocator::checkAllocations( hkLargeBlockAllocator *this, void **a2, int a3, int a4);
// [0x1575a70] (87 bytes) hkLargeBlockAllocator::_addAlloc(void *,unsigned int,void *)
// int hkLargeBlockAllocator::_addAlloc(hkLargeBlockAllocator *this, void *a2, hkMemoryAllocator *a3);
// [0x1575ae0] (22 bytes) hkAabb16::staticClass(void)
// void *hkAabb16::staticClass();
// [0x1575bd0] (315 bytes) hkMatrix4f::isOk(void)const
// bool hkMatrix4f::isOk(hkMatrix4f *this);
// [0x1575d10] (66 bytes) hkMatrix4f::setInverse(hkMatrix4f const&,hkSimdFloat32 const&)
// int hkMatrix4f::setInverse(int a1);
// [0x1575d60] (125 bytes) hkMatrix4f::transpose(void)
// hkMatrix4f *hkMatrix4f::transpose(hkMatrix4f *this);
// [0x1575de0] (246 bytes) hkMatrix4f::add(hkMatrix4f const&)
// hkMatrix4f *hkMatrix4f::add(hkMatrix4f *this, const hkMatrix4f *a2);
// [0x1575ee0] (246 bytes) hkMatrix4f::sub(hkMatrix4f const&)
// hkMatrix4f *hkMatrix4f::sub(hkMatrix4f *this, const hkMatrix4f *a2);
// [0x1575fe0] (156 bytes) hkMatrix4f::isAffineTransformation(void)const
// bool hkMatrix4f::isAffineTransformation(hkMatrix4f *this);
// [0x1576080] (400 bytes) hkMatrix4f::get4x4RowMajor(float *)const
// double *hkMatrix4f::get4x4RowMajor(hkMatrix4f *this, double *a2);
// [0x1576210] (504 bytes) hkMatrix4f::get4x4RowMajor(double *)const
// __m128d *hkMatrix4f::get4x4RowMajor(hkMatrix4f *this, __m128d *a2);
// [0x1576410] (408 bytes) hkMatrix4f::set4x4RowMajor(float const*)
// hkMatrix4f *hkMatrix4f::set4x4RowMajor(hkMatrix4f *this, const double *a2);
// [0x15765b0] (167 bytes) hkMatrix4f::set4x4RowMajor(double const*)
// hkMatrix4f *hkMatrix4f::set4x4RowMajor(hkMatrix4f *this, const double *a2);
// [0x1576660] (167 bytes) hkMatrix4f::get4x4ColumnMajor(float *)const
// float *hkMatrix4f::get4x4ColumnMajor(hkMatrix4f *this, float *a2);
// [0x1576710] (167 bytes) hkMatrix4f::set4x4ColumnMajor(float const*)
// hkMatrix4f *hkMatrix4f::set4x4ColumnMajor(hkMatrix4f *this, const float *a2);
// [0x15767c0] (167 bytes) hkMatrix4f::get4x4ColumnMajor(double *)const
// double *hkMatrix4f::get4x4ColumnMajor(hkMatrix4f *this, double *a2);
// [0x1576870] (167 bytes) hkMatrix4f::set4x4ColumnMajor(double const*)
// hkMatrix4f *hkMatrix4f::set4x4ColumnMajor(hkMatrix4f *this, const double *a2);
// [0x1576920] (168 bytes) hkMatrix4f::set(hkQTransformf const&)
// void *hkMatrix4f::set(hkMatrix4f *this, const hkQTransformf *a2);
// [0x15769d0] (265 bytes) hkMatrix4f::set(hkQsTransformf const&)
// void *hkMatrix4f::set(hkMatrix4f *this, const hkQsTransformf *a2);
// [0x1576ae0] (57 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator new(unsigned int)
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator new();
// [0x1576b20] (71 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator delete(void *,unsigned int)
// void hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator delete(void *a1);
// [0x1576b70] (11 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator new(unsigned int,void *)
// unsigned int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator new( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, unsigned int a2);
// [0x1576b80] (11 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator new[](unsigned int,void *)
// unsigned int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator new[]( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, unsigned int a2);
// [0x1576b90] (9 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator delete(void *,void *)
// void hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator delete();
// [0x1576ba0] (9 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator delete[](void *,void *)
// void hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::operator delete[]();
// [0x1576bb0] (25 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::hkMapBase(void)
// void hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::hkMapBase(hkMapBase_Raw *this);
// [0x1576bd0] (9 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::hkMapBase(hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::InternalInitializer)
// void hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::hkMapBase();
// [0x1576be0] (9 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::~hkMapBase()
// void hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::~hkMapBase();
// [0x1576bf0] (49 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getIterator(void)const
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getIterator( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this);
// [0x1576c30] (14 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getKey(Dummy *)const
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getKey(uint32_t *a1, int a2);
// [0x1576c40] (15 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getValue(Dummy *)const
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getValue(uint32_t *a1, int a2);
// [0x1576c50] (19 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::setValue(Dummy *,unsigned long)
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::setValue(int *a1, int a2, int a3);
// [0x1576c70] (49 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getNext(Dummy *)const
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getNext(uint32_t *a1, int a2);
// [0x1576cb0] (21 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::isValid(Dummy *)const
// bool *hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::isValid( bool *a1, int a2, int a3);
// [0x1576cd0] (81 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::findKey(unsigned long)const
// unsigned int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::findKey( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, unsigned int a2);
// [0x1576d30] (60 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::hasKey(unsigned long)const
// hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::hasKey( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a2, unsigned int a3);
// [0x1576d70] (88 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getWithDefault(unsigned long,unsigned long)const
// unsigned int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getWithDefault( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, unsigned int a2, unsigned int a3);
// [0x1576dd0] (80 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::get(unsigned long,unsigned long *)const
// hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::get( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a2, unsigned int *a3, uint32_t *a4);
// [0x1576e20] (216 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::remove(Dummy *)
// unsigned int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::remove(int64_t a1);
// [0x1576f00] (102 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::remove(unsigned long)
// hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::remove( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a2, unsigned int a3);
// [0x1576f70] (15 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getSize(void)const
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getSize( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this);
// [0x1576f80] (16 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getCapacity(void)const
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getCapacity( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this);
// [0x1576f90] (18 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getMemSize(void)const
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getMemSize( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this);
// [0x1576fb0] (11 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getMemStart(void)const
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getMemStart( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this);
// [0x1576fc0] (94 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::isOk(void)const
// hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::isOk( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, unsigned int **a2);
// [0x1577020] (57 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::clear(void)
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::clear( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this);
// [0x1577060] (100 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::clearAndDeallocate(hkMemoryAllocator &)
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::clearAndDeallocate( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, hkMemoryAllocator *a2);
// [0x15770d0] (21 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::wasReallocated(void)const
// int64_t hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::wasReallocated( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, int a2);
// [0x15770f0] (36 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::setOwnedData(void *,int,int)
// hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::setOwnedData( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, void *a2, int a3, int a4);
// [0x1577120] (48 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getSizeInBytesFor(int)
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::getSizeInBytesFor( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this);
// [0x1577150] (66 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::init(void *,int)
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::init( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, uint32_t *a2, unsigned int a3);
// [0x15771a0] (50 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::hkMapBase(void *,int)
// void hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::hkMapBase( hkMapBase_Raw *this, uint32_t *a2, unsigned int a3);
// [0x15771e0] (305 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::resizeTable(hkMemoryAllocator &,int)
// hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::resizeTable( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, hkMemoryAllocator *a2, hkMemoryAllocator *a3, int a4);
// [0x1577320] (214 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::insert(hkMemoryAllocator &,unsigned long,unsigned long)
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::insert( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, hkMemoryAllocator *a2, unsigned int a3, unsigned int a4);
// [0x1577400] (140 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::tryInsert(hkMemoryAllocator &,unsigned long,unsigned long,hkResult &)
// int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::tryInsert( hkMemoryAllocator *a1, hkMemoryAllocator *a2, unsigned int a3, unsigned int a4, uint32_t *a5);
// [0x1577490] (194 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::findOrInsertKey(hkMemoryAllocator &,unsigned long,unsigned long)
// unsigned int hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::findOrInsertKey( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, hkMemoryAllocator *a2, unsigned int a3, unsigned int a4);
// [0x1577560] (91 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::reserve(hkMemoryAllocator &,int)
// hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::reserve( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this, hkMemoryAllocator *a2, int a3);
// [0x15775c0] (18 bytes) hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::isPower2(unsigned int)
// bool hkMapBase<unsigned long,unsigned long,hkMapOperations<unsigned long>>::isPower2( hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *this);
// [0x15775e0] (57 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new(unsigned int)
// int hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new();
// [0x1577620] (71 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete(void *,unsigned int)
// void hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete( void *a1);
// [0x1577670] (11 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new(unsigned int,void *)
// unsigned int hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new( hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1577680] (11 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new[](unsigned int,void *)
// unsigned int hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new[]( hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1577690] (9 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete(void *,void *)
// void hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete();
// [0x15776a0] (9 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete[](void *,void *)
// void hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete[]();
// [0x15776b0] (76 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap(int)
// void hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap( hkMap_Raw *this, int a2);
// [0x1577700] (50 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap(void *,int)
// void hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap( hkMap_Raw *this, uint32_t *a2, unsigned int a3);
// [0x1577740] (9 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap(hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::InternalInitializer)
// void hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap();
// [0x1577750] (54 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::~hkMap()
// void hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::~hkMap( hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this);
// [0x1577790] (60 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::insert(unsigned long,unsigned long)
// int hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::insert( hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2, unsigned int a3);
// [0x15777d0] (68 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::tryInsert(unsigned long,unsigned long,hkResult &)
// int hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::tryInsert( hkMemoryAllocator *a1, unsigned int a2, unsigned int a3, uint32_t *a4);
// [0x1577820] (60 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::findOrInsertKey(unsigned long,unsigned long)
// unsigned int hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::findOrInsertKey( hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2, unsigned int a3);
// [0x1577860] (47 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::swap(hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>&)
// hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::swap( hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this, hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *a2);
// [0x1577890] (52 bytes) hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::reserve(int)
// hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *hkMap<unsigned long,unsigned long,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::reserve( hkMap<unsigned long, unsigned long, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this, int a2);
// [0x15778d0] (57 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator new(unsigned int)
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator new();
// [0x1577910] (71 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator delete(void *,unsigned int)
// void hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator delete( void *a1);
// [0x1577960] (11 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator new(unsigned int,void *)
// unsigned int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator new( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, unsigned int a2);
// [0x1577970] (11 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator new[](unsigned int,void *)
// unsigned int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator new[]( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, unsigned int a2);
// [0x1577980] (9 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator delete(void *,void *)
// void hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator delete();
// [0x1577990] (9 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator delete[](void *,void *)
// void hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::operator delete[]();
// [0x15779a0] (25 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::hkMapBase(void)
// void hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::hkMapBase( hkMapBase_Raw *this);
// [0x15779c0] (9 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::hkMapBase(hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::InternalInitializer)
// void hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::hkMapBase();
// [0x15779d0] (9 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::~hkMapBase()
// void hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::~hkMapBase();
// [0x15779e0] (66 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getIterator(void)const
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getIterator( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this);
// [0x1577a30] (19 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getKey(Dummy *)const
// int64_t hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getKey( uint32_t *a1, int a2);
// [0x1577a50] (20 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getValue(Dummy *)const
// int64_t hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getValue( uint32_t *a1, int a2);
// [0x1577a70] (28 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::setValue(Dummy *,unsigned long long)
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::setValue( uint32_t *a1, int a2, int a3, int a4);
// [0x1577a90] (81 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getNext(Dummy *)const
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getNext( uint32_t *a1, int a2);
// [0x1577af0] (21 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::isValid(Dummy *)const
// bool *hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::isValid( bool *a1, int a2, int a3);
// [0x1577b10] (138 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::findKey(unsigned long long)const
// unsigned int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::findKey( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, uint64_t a2);
// [0x1577ba0] (68 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::hasKey(unsigned long long)const
// hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::hasKey( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, uint64_t a2, unsigned int a3);
// [0x1577bf0] (174 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getWithDefault(unsigned long long,unsigned long long)const
// uint64_t hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getWithDefault( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, uint64_t a2, uint64_t a3);
// [0x1577ca0] (96 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::get(unsigned long long,unsigned long long *)const
// hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::get( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, uint64_t a2, uint64_t *a3, uint32_t *a4);
// [0x1577d00] (319 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::remove(Dummy *)
// unsigned int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::remove( int *a1, unsigned int a2);
// [0x1577e40] (110 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::remove(unsigned long long)
// hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::remove( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, uint64_t a2, unsigned int a3);
// [0x1577eb0] (15 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getSize(void)const
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getSize( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this);
// [0x1577ec0] (16 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getCapacity(void)const
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getCapacity( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this);
// [0x1577ed0] (14 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getMemSize(void)const
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getMemSize( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this);
// [0x1577ee0] (11 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getMemStart(void)const
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getMemStart( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this);
// [0x1577ef0] (188 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::isOk(void)const
// hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::isOk( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, int64_t **a2);
// [0x1577fb0] (68 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::clear(void)
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::clear( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this);
// [0x1578000] (96 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::clearAndDeallocate(hkMemoryAllocator &)
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::clearAndDeallocate( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, hkMemoryAllocator *a2);
// [0x1578060] (21 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::wasReallocated(void)const
// int64_t hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::wasReallocated( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, int a2);
// [0x1578080] (36 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::setOwnedData(void *,int,int)
// hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::setOwnedData( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, void *a2, int a3, int a4);
// [0x15780b0] (48 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getSizeInBytesFor(int)
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::getSizeInBytesFor( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this);
// [0x15780e0] (80 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::init(void *,int)
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::init( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, char *a2, unsigned int a3);
// [0x1578130] (50 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::hkMapBase(void *,int)
// void hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::hkMapBase( hkMapBase_Raw *this, char *a2, unsigned int a3);
// [0x1578170] (329 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::resizeTable(hkMemoryAllocator &,int)
// hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::resizeTable( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, hkMemoryAllocator *a2, hkMemoryAllocator *a3, int a4);
// [0x15782c0] (313 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::insert(hkMemoryAllocator &,unsigned long long,unsigned long long)
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::insert( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, hkMemoryAllocator *a2, uint64_t a3, uint64_t a4);
// [0x1578400] (173 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::tryInsert(hkMemoryAllocator &,unsigned long long,unsigned long long,hkResult &)
// int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::tryInsert( hkMemoryAllocator *a1, hkMemoryAllocator *a2, uint64_t a3, uint64_t a4, uint32_t *a5);
// [0x15784b0] (322 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::findOrInsertKey(hkMemoryAllocator &,unsigned long long,unsigned long long)
// unsigned int hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::findOrInsertKey( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, hkMemoryAllocator *a2, uint64_t a3, uint64_t a4);
// [0x1578600] (91 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::reserve(hkMemoryAllocator &,int)
// hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::reserve( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this, hkMemoryAllocator *a2, int a3);
// [0x1578660] (18 bytes) hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::isPower2(unsigned int)
// bool hkMapBase<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>>::isPower2( hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *this);
// [0x1578680] (57 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new(unsigned int)
// int hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new();
// [0x15786c0] (71 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete(void *,unsigned int)
// void hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete( void *a1);
// [0x1578710] (11 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new(unsigned int,void *)
// unsigned int hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new( hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1578720] (11 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new[](unsigned int,void *)
// unsigned int hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new[]( hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1578730] (9 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete(void *,void *)
// void hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete();
// [0x1578740] (9 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete[](void *,void *)
// void hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete[]();
// [0x1578750] (76 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMap(int)
// void hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMap( hkMap_Raw *this, int a2);
// [0x15787a0] (50 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMap(void *,int)
// void hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMap( hkMap_Raw *this, char *a2, unsigned int a3);
// [0x15787e0] (9 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMap(hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::InternalInitializer)
// void hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMap();
// [0x15787f0] (54 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::~hkMap()
// void hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::~hkMap( hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator> *this);
// [0x1578830] (76 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::insert(unsigned long long,unsigned long long)
// int hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::insert( hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2, uint64_t a3);
// [0x1578880] (84 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::tryInsert(unsigned long long,unsigned long long,hkResult &)
// int hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::tryInsert( hkMemoryAllocator *a1, uint64_t a2, uint64_t a3, uint32_t *a4);
// [0x15788e0] (76 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::findOrInsertKey(unsigned long long,unsigned long long)
// unsigned int hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::findOrInsertKey( hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2, uint64_t a3);
// [0x1578930] (47 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::swap(hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>&)
// hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator> *hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::swap( hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator> *a2);
// [0x1578960] (52 bytes) hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::reserve(int)
// hkMapBase<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>> *hkMap<unsigned long long,unsigned long long,hkMapOperations<unsigned long long>,hkContainerHeapAllocator>::reserve( hkMap<unsigned long long, unsigned long long, hkMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, int a2);
// [0x15789a0] (31 bytes) hkThreadMemory::bufAlloc(int &)
// int hkThreadMemory::bufAlloc(hkThreadMemory *this, int *a2);
// [0x15789c0] (37 bytes) hkThreadMemory::bufFree(void *,int)
// int hkThreadMemory::bufFree(hkThreadMemory *this, void *a2, int a3);
// [0x15789f0] (344 bytes) hkThreadMemory::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// int hkThreadMemory::getMemoryStatistics(int a1, uint32_t *a2);
// [0x1578b50] (96 bytes) hkThreadMemory::getAllocatedSize(void const*,int)const
// int hkThreadMemory::getAllocatedSize(hkThreadMemory *this, const void *a2, int a3);
// [0x1578bb0] (127 bytes) hkThreadMemory::blockAllocBatch(void **,int,int)
// void *hkThreadMemory::blockAllocBatch(hkThreadMemory *this, void **a2, void *a3, int a4);
// [0x1578c30] (135 bytes) hkThreadMemory::blockFreeBatch(void **,int,int)
// int hkThreadMemory::blockFreeBatch(hkThreadMemory *this, void **a2, int a3, int a4);
// [0x1578d10] (198 bytes) hkThreadMemory::initLookupTables(void)
// char hkThreadMemory::initLookupTables(hkThreadMemory *this);
// [0x1578de0] (304 bytes) hkThreadMemory::getCachedSizeUnchecked(void)
// int hkThreadMemory::getCachedSizeUnchecked(hkThreadMemory *this);
// [0x1578f10] (23 bytes) hkThreadMemory::setMemory(hkMemoryAllocator *,int)
// hkMemoryAllocator *hkThreadMemory::setMemory(hkThreadMemory *this, hkMemoryAllocator *a2, int a3);
// [0x1578f30] (324 bytes) hkThreadMemory::hkThreadMemory(void)
// void hkThreadMemory::hkThreadMemory(hkThreadMemory *this);
// [0x1579080] (324 bytes) hkThreadMemory::hkThreadMemory(hkMemoryAllocator *)
// void hkThreadMemory::hkThreadMemory(hkThreadMemory *this, hkMemoryAllocator *a2);
// [0x15791d0] (184 bytes) hkThreadMemory::onRowEmpty(int)
// int hkThreadMemory::onRowEmpty(hkThreadMemory *this, int a2);
// [0x1579290] (159 bytes) hkThreadMemory::blockAlloc(int)
// uint32_t *hkThreadMemory::blockAlloc(hkThreadMemory *this, int a2);
// [0x1579330] (424 bytes) hkThreadMemory::onRowFull(int,void *)
// char *hkThreadMemory::onRowFull(hkThreadMemory *this, int a2, uint32_t *a3);
// [0x15794e0] (170 bytes) hkThreadMemory::blockFree(void *,int)
// char *hkThreadMemory::blockFree(hkThreadMemory *this, uint32_t *a2, int a3);
// [0x1579590] (113 bytes) hkThreadMemory::bufRealloc(void *,int,int &)
// hkMemUtil *hkThreadMemory::bufRealloc(hkThreadMemory *this, uint32_t *a2, signed int a3, int *a4);
// [0x1579610] (296 bytes) hkThreadMemory::clearRow(int)
// uint32_t *hkThreadMemory::clearRow(hkThreadMemory *this, int a2);
// [0x1579740] (685 bytes) hkThreadMemory::releaseCachedMemory(void)
// uint32_t *hkThreadMemory::releaseCachedMemory(hkThreadMemory *this);
// [0x15799f0] (55 bytes) hkThreadMemory::~hkThreadMemory()
// void hkThreadMemory::~hkThreadMemory(hkThreadMemory *this);
// [0x1579a30] (55 bytes) hkThreadMemory::~hkThreadMemory()
// void hkThreadMemory::~hkThreadMemory(hkThreadMemory *this);
// [0x1579a70] (32 bytes) hkLeakDetectAllocator::getMemoryStatistics(hkMemoryAllocator::MemoryStatistics &)const
// int hkLeakDetectAllocator::getMemoryStatistics(int a1, int a2);
// [0x1579a90] (40 bytes) hkLeakDetectAllocator::getAllocatedSize(void const*,int)const
// int hkLeakDetectAllocator::getAllocatedSize(hkLeakDetectAllocator *this, const void *a2, int a3);
// [0x1579c70] (94 bytes) hkLeakDetectAllocator::init(hkMemoryAllocator *,hkMemoryAllocator *,void (*)(char const*,void *),void *)
// uint32_t *hkLeakDetectAllocator::init( hkLeakDetectAllocator *this, hkMemoryAllocator *a2, hkMemoryAllocator *a3, void (*a4)(const char *, void *), void *a5);
// [0x1579cd0] (218 bytes) hkLeakDetectAllocator::danger(char const*,void const*,hkLeakDetectAllocator::AllocInfo const&)const
// int hkLeakDetectAllocator::danger(int a1, int a2, char *a3, int a4);
// [0x1579db0] (25 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::hkMapBase(void)
// hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::hkMapBase( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this);
// [0x1579dd0] (9 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::~hkMapBase()
// void hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::~hkMapBase();
// [0x1579de0] (15 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getSize(void)const
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getSize( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this);
// [0x1579df0] (49 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getIterator(void)const
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getIterator( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this);
// [0x1579e30] (21 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::isValid(Dummy *)const
// bool *hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::isValid( bool *a1, int a2, int a3);
// [0x1579e50] (67 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getNext(Dummy *)const
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getNext( uint32_t *a1, int a2);
// [0x1579ea0] (52 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getValue(Dummy *)const
// uint32_t *hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getValue( uint32_t *a1, uint32_t *a2, int a3);
// [0x1579ee0] (81 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::findKey(unsigned long)const
// unsigned int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::findKey( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, unsigned int a2);
// [0x1579f40] (323 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::remove(Dummy *)
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::remove( int *a1, unsigned int a2);
// [0x157a090] (657 bytes) hkLeakDetectAllocator::checkedFree(unsigned int,void *,int)
// int hkLeakDetectAllocator::checkedFree(hkLeakDetectAllocator *this, unsigned int a2, char *a3, int a4);
// [0x157a330] (58 bytes) hkLeakDetectAllocator::blockFree(void *,int)
// int hkLeakDetectAllocator::blockFree(hkLeakDetectAllocator *this, char *a2, int a3);
// [0x157a370] (58 bytes) hkLeakDetectAllocator::bufFree(void *,int)
// int hkLeakDetectAllocator::bufFree(hkLeakDetectAllocator *this, char *a2, int a3);
// [0x157a3b0] (57 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator new(unsigned int)
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator new();
// [0x157a3f0] (71 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator delete(void *,unsigned int)
// void hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator delete( void *a1);
// [0x157a440] (11 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator new(unsigned int,void *)
// unsigned int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator new( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, unsigned int a2);
// [0x157a450] (11 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator new[](unsigned int,void *)
// unsigned int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator new[]( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, unsigned int a2);
// [0x157a460] (9 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator delete(void *,void *)
// void hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator delete();
// [0x157a470] (9 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator delete[](void *,void *)
// void hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::operator delete[]();
// [0x157a480] (9 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::hkMapBase(hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::InternalInitializer)
// void hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::hkMapBase();
// [0x157a490] (19 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getKey(Dummy *)const
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getKey( uint32_t *a1, int a2);
// [0x157a4b0] (53 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::setValue(Dummy *,hkLeakDetectAllocator::AllocInfo)
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::setValue( uint32_t *a1, int a2, int a3, int a4, int a5, int a6, char a7);
// [0x157a4f0] (60 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::hasKey(unsigned long)const
// hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::hasKey( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *a2, unsigned int a3);
// [0x157a530] (183 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getWithDefault(unsigned long,hkLeakDetectAllocator::AllocInfo)const
// uint32_t *hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getWithDefault( uint32_t *a1, uint32_t *a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8);
// [0x157a5f0] (122 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::get(unsigned long,hkLeakDetectAllocator::AllocInfo*)const
// int *hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::get( int *a1, hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *a2, unsigned int a3, int a4);
// [0x157a670] (102 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::remove(unsigned long)
// hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::remove( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *a2, unsigned int a3);
// [0x157a6e0] (16 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getCapacity(void)const
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getCapacity( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this);
// [0x157a6f0] (15 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getMemSize(void)const
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getMemSize( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this);
// [0x157a700] (11 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getMemStart(void)const
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getMemStart( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this);
// [0x157a710] (102 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::isOk(void)const
// hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::isOk( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, unsigned int **a2);
// [0x157a780] (62 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::clear(void)
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::clear( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this);
// [0x157a7c0] (97 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::clearAndDeallocate(hkMemoryAllocator &)
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::clearAndDeallocate( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, hkMemoryAllocator *a2);
// [0x157a830] (21 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::wasReallocated(void)const
// int64_t hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::wasReallocated( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, int a2);
// [0x157a850] (36 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::setOwnedData(void *,int,int)
// hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::setOwnedData( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, void *a2, int a3, int a4);
// [0x157a880] (51 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getSizeInBytesFor(int)
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::getSizeInBytesFor( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this);
// [0x157a8c0] (78 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::init(void *,int)
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::init( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, char *a2, unsigned int a3);
// [0x157a910] (50 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::hkMapBase(void *,int)
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::hkMapBase( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, char *a2, unsigned int a3);
// [0x157a950] (319 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::resizeTable(hkMemoryAllocator &,int)
// hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::resizeTable( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, hkMemoryAllocator *a2, int a3, int a4);
// [0x157aa90] (251 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::insert(hkMemoryAllocator &,unsigned long,hkLeakDetectAllocator::AllocInfo)
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::insert( hkMemoryAllocator *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, char a8);
// [0x157ab90] (441 bytes) hkLeakDetectAllocator::checkedAlloc(unsigned int,int)
// unsigned int hkLeakDetectAllocator::checkedAlloc(hkLeakDetectAllocator *this, unsigned int a2, int a3);
// [0x157ad50] (50 bytes) hkLeakDetectAllocator::blockAlloc(int)
// unsigned int hkLeakDetectAllocator::blockAlloc(hkLeakDetectAllocator *this, int a2);
// [0x157ad90] (52 bytes) hkLeakDetectAllocator::bufAlloc(int &)
// unsigned int hkLeakDetectAllocator::bufAlloc(hkLeakDetectAllocator *this, int *a2);
// [0x157add0] (125 bytes) hkLeakDetectAllocator::bufRealloc(void *,int,int &)
// hkMemUtil *hkLeakDetectAllocator::bufRealloc(hkLeakDetectAllocator *this, char *a2, signed int a3, int *a4);
// [0x157ae50] (164 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::tryInsert(hkMemoryAllocator &,unsigned long,hkLeakDetectAllocator::AllocInfo,hkResult &)
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::tryInsert( hkMemoryAllocator *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, char a8, uint32_t *a9);
// [0x157af00] (234 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::findOrInsertKey(hkMemoryAllocator &,unsigned long,hkLeakDetectAllocator::AllocInfo)
// int hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::findOrInsertKey( hkMemoryAllocator *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, char a8);
// [0x157aff0] (91 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::reserve(hkMemoryAllocator &,int)
// hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::reserve( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this, hkMemoryAllocator *a2, int a3);
// [0x157b050] (18 bytes) hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::isPower2(unsigned int)
// bool hkMapBase<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>>::isPower2( hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *this);
// [0x157b070] (57 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new(unsigned int)
// int hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new();
// [0x157b0b0] (71 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete(void *,unsigned int)
// void hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete( void *a1);
// [0x157b100] (11 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new(unsigned int,void *)
// unsigned int hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new( hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x157b110] (11 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new[](unsigned int,void *)
// unsigned int hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new[]( hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x157b120] (9 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete(void *,void *)
// void hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete();
// [0x157b130] (9 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete[](void *,void *)
// void hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete[]();
// [0x157b140] (76 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap(int)
// hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap( hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this, int a2);
// [0x157b190] (50 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap(void *,int)
// int hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap( hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this, char *a2, unsigned int a3);
// [0x157b1d0] (9 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap(hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::InternalInitializer)
// void hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMap();
// [0x157b1e0] (54 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::~hkMap()
// void hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::~hkMap( hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this);
// [0x157b220] (92 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::insert(unsigned long,hkLeakDetectAllocator::AllocInfo)
// int hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::insert( hkMemoryAllocator *a1, unsigned int a2, int a3, int a4, int a5, int a6, char a7);
// [0x157b280] (100 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::tryInsert(unsigned long,hkLeakDetectAllocator::AllocInfo,hkResult &)
// int hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::tryInsert( hkMemoryAllocator *a1, unsigned int a2, int a3, int a4, int a5, int a6, char a7, uint32_t *a8);
// [0x157b2f0] (92 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::findOrInsertKey(unsigned long,hkLeakDetectAllocator::AllocInfo)
// int hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::findOrInsertKey( hkMemoryAllocator *a1, unsigned int a2, int a3, int a4, int a5, int a6, char a7);
// [0x157b350] (47 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::swap(hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>&)
// hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::swap( hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this, hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *a2);
// [0x157b380] (52 bytes) hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::reserve(int)
// hkMapBase<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>> *hkMap<unsigned long,hkLeakDetectAllocator::AllocInfo,hkMapOperations<unsigned long>,hkContainerHeapAllocator>::reserve( hkMap<unsigned long, hkLeakDetectAllocator::AllocInfo, hkMapOperations<unsigned long>, hkContainerHeapAllocator> *this, int a2);
// [0x157b3c0] (450 bytes) void hkAlgorithm::quickSortRecursive<hkLeakDetectAllocator::AllocInfo,hkAlgorithm::less<hkLeakDetectAllocator::AllocInfo>>(hkLeakDetectAllocator::AllocInfo *,int,int,hkAlgorithm::less<hkLeakDetectAllocator::AllocInfo>)
// int hkAlgorithm::quickSortRecursive<hkLeakDetectAllocator::AllocInfo,hkAlgorithm::less<hkLeakDetectAllocator::AllocInfo>>( int a1, int a2, int a3);
// [0x157b590] (1020 bytes) hkLeakDetectAllocator::quit(void)
// int hkLeakDetectAllocator::quit(hkLeakDetectAllocator *this);
// [0x157b990] (792 bytes) hkLeakDetectAllocator::printAllocationsByCallTree(hkOstream &)
// int hkLeakDetectAllocator::printAllocationsByCallTree(hkLeakDetectAllocator *this, hkOstream *a2);
// [0x157bcc0] (22 bytes) hkSweptTransformf::staticClass(void)
// void *hkSweptTransformf::staticClass();
// [0x157bdb0] (21 bytes) hkFixedSizeAllocator::blockFree(void *,int)
// hkFixedSizeAllocator *hkFixedSizeAllocator::blockFree(hkFixedSizeAllocator *this, uint32_t *a2);
// [0x157bdd0] (21 bytes) hkFixedSizeAllocator::bufFree(void *,int)
// hkFixedSizeAllocator *hkFixedSizeAllocator::bufFree(hkFixedSizeAllocator *this, uint32_t *a2);
// [0x157bdf0] (11 bytes) hkFixedSizeAllocator::bufRealloc(void *,int,int &)
// void *hkFixedSizeAllocator::bufRealloc(hkFixedSizeAllocator *this, void *a2);
// [0x157be00] (62 bytes) hkFixedSizeAllocator::blockFreeBatch(void **,int,int)
// void hkFixedSizeAllocator::blockFreeBatch(hkFixedSizeAllocator *this, void **a2, int a3);
// [0x157be40] (12 bytes) hkFixedSizeAllocator::getAllocatedSize(void const*,int)const
// int hkFixedSizeAllocator::getAllocatedSize(hkFixedSizeAllocator *this);
// [0x157be50] (230 bytes) hkFixedSizeAllocator::blockAllocBatch(void **,int,int)
// int hkFixedSizeAllocator::blockAllocBatch(hkFixedSizeAllocator *this, void **a2, int a3);
