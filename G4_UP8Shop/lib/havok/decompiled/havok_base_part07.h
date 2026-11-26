#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_base_part07.h
// Library: havok | Module: havok_base_part07
// Binary Address Span: 0x18e42f0 .. 0x1a83620 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x18e42f0] (229 bytes) hkProcessFactory::getProcessName(int)
// unsigned int hkProcessFactory::getProcessName(hkProcessFactory *this, int a2);
// [0x18e43e0] (465 bytes) hkProcessFactory::getProcessId(char const*)
// int hkProcessFactory::getProcessId(hkProcessFactory *this, char *a2);
// [0x18e45c0] (245 bytes) hkProcessFactory::createProcess(int,hkArray<hkProcessContext *,hkContainerHeapAllocator> &)
// int hkProcessFactory::createProcess(int a1, int a2, int a3);
// [0x18e46c0] (277 bytes) hkProcessFactory::createProcess(char const*,hkArray<hkProcessContext *,hkContainerHeapAllocator> &)
// int hkProcessFactory::createProcess(hkProcessFactory *a1, char *a2, int a3);
// [0x18e4830] (48 bytes) hkProcessRegisterUtil::registerAllCommonProcesses(void)
// int hkProcessRegisterUtil::registerAllCommonProcesses();
// [0x18e4860] (45 bytes) hkDisplaySerializeIStream::~hkDisplaySerializeIStream()
// void hkDisplaySerializeIStream::~hkDisplaySerializeIStream(hkDisplaySerializeIStream *this);
// [0x18e4890] (104 bytes) hkDisplaySerializeIStream::~hkDisplaySerializeIStream()
// void hkDisplaySerializeIStream::~hkDisplaySerializeIStream(hkDisplaySerializeIStream *this);
// [0x18e4900] (64 bytes) hkDisplaySerializeIStream::hkDisplaySerializeIStream(hkStreamReader *)
// void hkDisplaySerializeIStream::hkDisplaySerializeIStream(hkDisplaySerializeIStream *this, hkStreamReader *a2);
// [0x18e4940] (67 bytes) hkDisplaySerializeIStream::readQuadVector4(hkVector4f &)
// int hkDisplaySerializeIStream::readQuadVector4(hkDisplaySerializeIStream *this, hkVector4f *a2);
// [0x18e4990] (153 bytes) hkDisplaySerializeIStream::readTransform(hkTransformf &)
// hkRotationf *hkDisplaySerializeIStream::readTransform(hkDisplaySerializeIStream *this, hkTransformf *a2);
// [0x18e4a30] (144 bytes) hkDisplaySerializeIStream::readTriangle(hkGeometry::Triangle &)
// int hkDisplaySerializeIStream::readTriangle(hkDisplaySerializeIStream *this, hkGeometry::Triangle *a2);
// [0x18e4ac0] (219 bytes) hkDisplaySerializeIStream::readVectorArray(hkArray<hkVector4f,hkContainerHeapAllocator> &)
// int hkDisplaySerializeIStream::readVectorArray( hkDisplaySerializeIStream *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x18e4ba0] (253 bytes) hkDisplaySerializeIStream::readGeometry(hkGeometry &)
// int hkDisplaySerializeIStream::readGeometry(hkDisplaySerializeIStream *this, hkGeometry *a2);
// [0x18e4ca0] (3476 bytes) hkDisplaySerializeIStream::readDisplayGeometry(hkDisplayGeometry *&)
// 0x18e4ca0 hkDisplaySerializeIStream::readDisplayGeometry(hkDisplayGeometry *&)
// [0x18e5a40] (75 bytes) hkDisplaySerializeIStream::readHash(unsigned long long &)
// int hkDisplaySerializeIStream::readHash(hkDisplaySerializeIStream *this, uint64_t *a2);
// [0x18e5a90] (61 bytes) hkDisplaySerializeIStream::readAabb(hkAabb &)
// int hkDisplaySerializeIStream::readAabb(hkDisplaySerializeIStream *this, hkAabb *a2);
// [0x18e5ad0] (29 bytes) hkDrawUtil::~hkDrawUtil()
// void hkDrawUtil::~hkDrawUtil(hkDrawUtil *this);
// [0x18e5af0] (96 bytes) hkDrawUtil::~hkDrawUtil()
// void hkDrawUtil::~hkDrawUtil(hkDrawUtil *this);
// [0x18e5c90] (45 bytes) hkDrawUtil::hkDrawUtil(float)
// void hkDrawUtil::hkDrawUtil(hkDrawUtil *this, float a2);
// [0x18e5cc0] (772 bytes) hkDrawUtil::displayOrientedPoint(hkVector4f const&,hkRotationf const&,float,unsigned int)
// int hkDrawUtil::displayOrientedPoint();
// [0x18e5fd0] (398 bytes) hkDrawUtil::displayPoint(hkVector4f const&,float,unsigned int)
// int hkDrawUtil::displayPoint();
// [0x18e6160] (82 bytes) hkDrawUtil::displaySegment(hkVector4f const&,hkVector4f const&,unsigned int)
// int hkDrawUtil::displaySegment();
// [0x18e61c0] (26 bytes) hkDrawUtil::getScale(void)
// long double hkDrawUtil::getScale(hkDrawUtil *this);
// [0x18e61e0] (18 bytes) hkDrawUtil::setScale(float)
// hkDrawUtil *hkDrawUtil::setScale(hkDrawUtil *this, float a2);
// [0x18e6200] (540 bytes) hkDrawUtil::displayCone(float,hkVector4f const&,hkVector4f const&,hkVector4f const&,int,unsigned int)
// hkMemoryAllocator *hkDrawUtil::displayCone( hkDrawUtil *this, float a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5, int a6);
// [0x18e6420] (1028 bytes) hkDrawUtil::drawSemiCircle(hkVector4f const&,hkVector4f&,hkVector4f&,float,float,float,int,unsigned int)
// hkVector4f *hkDrawUtil::drawSemiCircle( hkDrawUtil *this, const hkVector4f *a2, hkVector4f *a3, hkVector4f *a4, float a5, float a6, float a7, hkVector4f *a8);
// [0x18e6830] (671 bytes) hkDrawUtil::displayArrow(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int)
// int hkDrawUtil::displayArrow( hkDrawUtil *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4);
// [0x18e6ad0] (861 bytes) hkDrawUtil::displayPlane(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int,hkBool)
// int hkDrawUtil::displayPlane( hkDrawUtil *a1, hkVector4f *a2, hkVector4f *a3, float *a4, unsigned int a5, char a6);
// [0x18e6e30] (958 bytes) hkDrawUtil::displayAxisAngleWidget(hkVector4f const&,hkVector4f const&,hkVector4f const&,hkVector4f const&,float,float,float,int,unsigned int,int)
// void hkDrawUtil::displayAxisAngleWidget( hkDrawUtil *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5, float a6, float a7, float a8, int a9, unsigned int a10, int a11);
// [0x18e71f0] (539 bytes) hkDrawUtil::displayLocalFrame(hkLocalFrame const&,hkTransformf const&,float,bool,unsigned int,char const*)
// 0x18e71f0 hkDrawUtil::displayLocalFrame(hkLocalFrame const&,hkTransformf const&,float,bool,unsigned int,char const*)
// [0x18e7410] (2833 bytes) hkDrawUtil::debugDisplayGeometry(hkGeometry const&,hkDrawUtil::DebugDisplayGeometrySettings const&)
// int hkDrawUtil::debugDisplayGeometry(uint32_t *a1, int a2);
// [0x18e7f30] (649 bytes) hkDrawUtil::displayOrientedRectangle(hkVector4f const&,hkVector4f const&,hkVector4f const&,float,float,unsigned int)
// int hkDrawUtil::displayOrientedRectangle();
// [0x18e81c0] (1147 bytes) hkDrawUtil::displayMinMaxRectangleWidget(hkTransformf const&,hkVector4f const&,float,float,float,float,hkStringPtr const&,unsigned int,int)
// int hkDrawUtil::displayMinMaxRectangleWidget( hkDrawUtil *this, __m128 *a2, __m128 *a3, int64_t a4, unsigned int a5, unsigned int a6, const hkStringPtr *a7);
// [0x18e8640] (29 bytes) hkDebugDisplayHandler::~hkDebugDisplayHandler()
// void hkDebugDisplayHandler::~hkDebugDisplayHandler(hkDebugDisplayHandler *this);
// [0x18e8660] (13 bytes) hkDebugDisplayHandler::displayAnnotation(char const*,int,int)
// hkDebugDisplayHandler *hkDebugDisplayHandler::displayAnnotation( hkDebugDisplayHandler *this, const char *a2, int a3, int a4);
// [0x18e8670] (13 bytes) hkDebugDisplayHandler::displayBone(hkVector4f const&,hkVector4f const&,hkQuaternionf const&,unsigned int,int)
// hkDebugDisplayHandler *hkDebugDisplayHandler::displayBone( hkDebugDisplayHandler *this, const hkVector4f *a2, const hkVector4f *a3, const hkQuaternionf *a4, unsigned int a5, int a6);
// [0x18e8680] (10 bytes) hkDebugDisplayHandler::doesSupportHashes(void)const
// hkDebugDisplayHandler *hkDebugDisplayHandler::doesSupportHashes(hkDebugDisplayHandler *this);
// [0x18e8690] (13 bytes) hkDebugDisplayHandler::addGeometryHash(hkReferencedObject const*,hkDisplayGeometryBuilder *,unsigned long long const&,hkAabb const&,unsigned int,hkTransformf const&,unsigned long,int)
// hkDebugDisplayHandler *hkDebugDisplayHandler::addGeometryHash( hkDebugDisplayHandler *this, const hkReferencedObject *a2, hkDisplayGeometryBuilder *a3, const uint64_t *a4, const hkAabb *a5, unsigned int a6, const hkTransformf *a7, unsigned int a8, int a9);
// [0x18e86a0] (13 bytes) hkDebugDisplayHandler::updateGeometryVerts(unsigned long,hkArray<hkVector4f,hkContainerHeapAllocator> const&,int)
// hkDebugDisplayHandler *hkDebugDisplayHandler::updateGeometryVerts( hkDebugDisplayHandler *this, unsigned int a2, const hkArray<hkVector4f, hkContainerHeapAllocator> *a3, int a4);
// [0x18e86b0] (130 bytes) hkDebugDisplayHandler::updateGeometries(hkTransformf const*,unsigned long const*,int,int)
// hkDebugDisplayHandler *hkDebugDisplayHandler::updateGeometries( hkDebugDisplayHandler *this, const hkTransformf *a2, const unsigned int *a3, int a4, int a5);
// [0x18e8740] (45 bytes) hkDebugDisplayHandler::~hkDebugDisplayHandler()
// void hkDebugDisplayHandler::~hkDebugDisplayHandler(hkDebugDisplayHandler *this);
// [0x18e8770] (197 bytes) hkDebugDisplayHandler::addGeometry(hkDisplayGeometry *,unsigned long,int,unsigned long)
// hkDebugDisplayHandler *hkDebugDisplayHandler::addGeometry( hkDebugDisplayHandler *this, hkDisplayGeometry *a2, unsigned int a3, int a4, unsigned int a5, int a6);
// [0x18e8840] (122 bytes) hkDebugDisplayHandler::updateGeometry(hkQsTransformf const&,unsigned long,int)
// hkDebugDisplayHandler *hkDebugDisplayHandler::updateGeometry( hkDebugDisplayHandler *this, const hkQsTransformf *a2, const hkQsTransformf *a3, int a4, int a5);
// [0x18e88c0] (413 bytes) hkDebugDisplayHandler::skinGeometry(unsigned long *,int,hkQsTransformf const*,int,hkQsTransformf const&,int)
// int hkDebugDisplayHandler::skinGeometry( hkDebugDisplayHandler *this, unsigned int *a2, int a3, const hkQsTransformf *a4, const hkQsTransformf *a5, const hkQsTransformf *a6, hkQsTransformf *a7, int a8);
// [0x18e8a60] (1727 bytes) hkDebugDisplayHandler::displayArrow(hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// const hkVector4f *hkDebugDisplayHandler::displayArrow( hkDebugDisplayHandler *this, const hkVector4f *a2, const hkVector4f *a3);
// [0x18e9120] (640 bytes) hkDebugDisplayHandler::displayFrame(hkQsTransformf const&,float,int,int)
// const hkVector4f *hkDebugDisplayHandler::displayFrame( hkDebugDisplayHandler *this, const hkQsTransformf *a2, unsigned int a3);
// [0x18e93a0] (89 bytes) hkDebugDisplayHandler::displayFrame(hkTransformf const&,float,int,int)
// const hkVector4f *hkDebugDisplayHandler::displayFrame( hkDebugDisplayHandler *this, const hkTransformf *a2, unsigned int a3);
// [0x18e9400] (329 bytes) hkDebugDisplayHandler::displayStar(hkVector4f const&,float,unsigned int,int,int)
// float *hkDebugDisplayHandler::displayStar(hkDebugDisplayHandler *this, const hkVector4f *a2, float a3);
// [0x18e9550] (1609 bytes) hkDebugDisplayHandler::displayModelSpacePose(int,short const*,hkQsTransformf const*,hkQsTransformf const&,unsigned int,int,int)
// int hkDebugDisplayHandler::displayModelSpacePose( hkDebugDisplayHandler *this, int a2, const int16_t *a3, const hkQsTransformf *a4, const hkQsTransformf *a5, unsigned int a6, int a7, int a8);
// [0x18e9ba0] (1182 bytes) hkDebugDisplayHandler::displayLocalSpacePose(int,short const*,hkQsTransformf const*,hkQsTransformf const&,unsigned int,int,int)
// hkLifoAllocator *hkDebugDisplayHandler::displayLocalSpacePose( hkDebugDisplayHandler *this, int a2, int16_t *a3, const hkQsTransformf *a4, const hkQsTransformf *a5, unsigned int a6, int a7, int a8);
// [0x18ea040] (254 bytes) hkDebugDisplayHandler::addGeometryHash(hkReferencedObject const*,hkDisplayGeometryBuilder *,unsigned long long const&,unsigned long,int)
// hkDebugDisplayHandler *hkDebugDisplayHandler::addGeometryHash( hkDebugDisplayHandler *this, const hkReferencedObject *a2, hkDisplayGeometryBuilder *a3, const uint64_t *a4, unsigned int a5, int a6, int a7);
// [0x18ea140] (690 bytes) hkDebugDisplayHandler::addGeometryLazily(hkReferencedObject const*,hkDisplayGeometryBuilder *,hkTransformf const&,unsigned long,int,unsigned long)
// hkDebugDisplayHandler *hkDebugDisplayHandler::addGeometryLazily( hkDebugDisplayHandler *this, const hkReferencedObject *a2, hkDisplayGeometryBuilder *a3, const hkTransformf *a4, int a5, int a6, void *a7, hkDebugDisplayHandler *a8);
// [0x18ea400] (22 bytes) hkRemoteObjectProcess::getProcessTag(void)
// int hkRemoteObjectProcess::getProcessTag();
// [0x18ea430] (9 bytes) hkRemoteObjectProcess::init(void)
// void hkRemoteObjectProcess::init();
// [0x18ea450] (34 bytes) hkRemoteObjectProcess::getConsumableCommands(unsigned char *&,int &)
// int *hkRemoteObjectProcess::getConsumableCommands(hkRemoteObjectProcess *this, uint8_t **a2, int *a3);
// [0x18ea490] (126 bytes) hkRemoteObjectProcess::~hkRemoteObjectProcess()
// void hkRemoteObjectProcess::~hkRemoteObjectProcess(hkRemoteObjectProcess *this);
// [0x18ea520] (93 bytes) hkRemoteObjectProcess::~hkRemoteObjectProcess()
// void hkRemoteObjectProcess::~hkRemoteObjectProcess(hkRemoteObjectProcess *this);
// [0x18ea590] (29 bytes) hkRemoteObjectClientSideListener::sendObject(hkReferencedObject *)
// int (*hkRemoteObjectClientSideListener::sendObject( hkRemoteObjectClientSideListener *this, hkReferencedObject *a2))(hkReferencedObject *);
// [0x18ea5b0] (69 bytes) hkRemoteObjectProcess::hkRemoteObjectProcess(void)
// void hkRemoteObjectProcess::hkRemoteObjectProcess(hkRemoteObjectProcess *this);
// [0x18ea600] (84 bytes) hkRemoteObjectProcess::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// char *hkRemoteObjectProcess::create();
// [0x18ea660] (98 bytes) hkRemoteObjectProcess::addListener(hkRemoteObjectServerSideListener *)
// int hkRemoteObjectProcess::addListener(uint32_t *a1, int a2);
// [0x18ea6d0] (84 bytes) hkRemoteObjectProcess::removeListener(hkRemoteObjectServerSideListener *)
// void hkRemoteObjectProcess::removeListener(int a1, int a2);
// [0x18ea730] (137 bytes) hkRemoteObjectProcess::sendObject(hkDisplaySerializeOStream *,hkReferencedObject *,hkRemoteObjectProcess::SendObjectType)
// int hkRemoteObjectProcess::sendObject(int a1, int a2, int a3);
// [0x18ea7c0] (66 bytes) hkRemoteObjectProcess::registerProcess(void)
// int hkRemoteObjectProcess::registerProcess();
// [0x18ea9c0] (21 bytes) hkRemoteObjectProcess::consumeCommand(unsigned char)
// void hkRemoteObjectProcess::consumeCommand(hkRemoteObjectProcess *this, char a2);
// [0x18ea9f0] (22 bytes) hkDebugDisplayProcess::getProcessTag(void)
// int hkDebugDisplayProcess::getProcessTag();
// [0x18eaa20] (84 bytes) hkDebugDisplayProcess::addGeometry(hkArrayBase<hkDisplayGeometry *> const&,hkTransformf const&,unsigned long,int,unsigned long,hkGeometry::GeometryType)
// int hkDebugDisplayProcess::addGeometry(int a1, int a2);
// [0x18eaa90] (76 bytes) hkDebugDisplayProcess::addGeometryInstance(unsigned long,hkTransformf const&,unsigned long,int,unsigned long)
// hkDebugDisplayProcess *hkDebugDisplayProcess::addGeometryInstance( hkDebugDisplayProcess *this, unsigned int a2, const hkTransformf *a3, unsigned int a4, int a5, unsigned int a6);
// [0x18eaaf0] (63 bytes) hkDebugDisplayProcess::setGeometryPickable(hkBool,unsigned long,int)
// int hkDebugDisplayProcess::setGeometryPickable(int a1, int a2);
// [0x18eab40] (76 bytes) hkDebugDisplayProcess::displayGeometry(hkArrayBase<hkDisplayGeometry *> const&,hkTransformf const&,unsigned int,int,int)
// int hkDebugDisplayProcess::displayGeometry(int a1, int a2);
// [0x18eaba0] (69 bytes) hkDebugDisplayProcess::displayGeometry(hkArrayBase<hkDisplayGeometry *> const&,unsigned int,int,int)
// int hkDebugDisplayProcess::displayGeometry(int a1, int a2);
// [0x18eac00] (70 bytes) hkDebugDisplayProcess::setGeometryVisibility(int,bool,unsigned long,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::setGeometryVisibility( hkDebugDisplayProcess *this, int a2, bool a3, unsigned int a4, int a5);
// [0x18eac60] (62 bytes) hkDebugDisplayProcess::setGeometryColor(unsigned int,unsigned long,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::setGeometryColor( hkDebugDisplayProcess *this, unsigned int a2, unsigned int a3, int a4);
// [0x18eacb0] (66 bytes) hkDebugDisplayProcess::setGeometryTransparency(float,unsigned long,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::setGeometryTransparency( hkDebugDisplayProcess *this, float a2, int64_t a3);
// [0x18ead10] (62 bytes) hkDebugDisplayProcess::updateGeometry(hkTransformf const&,unsigned long,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::updateGeometry( hkDebugDisplayProcess *this, const hkTransformf *a2, unsigned int a3, int a4);
// [0x18ead60] (62 bytes) hkDebugDisplayProcess::updateGeometry(hkMatrix4f const&,unsigned long,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::updateGeometry( hkDebugDisplayProcess *this, const hkMatrix4f *a2, unsigned int a3, int a4);
// [0x18eadb0] (83 bytes) hkDebugDisplayProcess::skinGeometry(unsigned long *,int,hkMatrix4f const*,int,hkMatrix4f const&,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::skinGeometry( hkDebugDisplayProcess *this, unsigned int *a2, int a3, const hkMatrix4f *a4, int a5, const hkMatrix4f *a6, int a7);
// [0x18eae20] (81 bytes) hkDebugDisplayProcess::removeGeometry(unsigned long,int,unsigned long)
// hkDebugDisplayProcess *hkDebugDisplayProcess::removeGeometry( hkDebugDisplayProcess *this, unsigned int a2, int a3, unsigned int a4, int a5);
// [0x18eae90] (102 bytes) hkDebugDisplayProcess::updateCamera(hkVector4f const&,hkVector4f const&,hkVector4f const&,float,float,float,char const*)
// hkDebugDisplayProcess *hkDebugDisplayProcess::updateCamera( hkDebugDisplayProcess *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, float a5, int64_t a6, const char *a7);
// [0x18eaf10] (69 bytes) hkDebugDisplayProcess::displayPoint(hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::displayPoint( hkDebugDisplayProcess *this, const hkVector4f *a2, unsigned int a3, int a4, int a5);
// [0x18eaf70] (76 bytes) hkDebugDisplayProcess::displayLine(hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::displayLine( hkDebugDisplayProcess *this, const hkVector4f *a2, const hkVector4f *a3, unsigned int a4, int a5, int a6);
// [0x18eafd0] (83 bytes) hkDebugDisplayProcess::displayTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::displayTriangle( hkDebugDisplayProcess *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, unsigned int a5, int a6, int a7);
// [0x18eb040] (69 bytes) hkDebugDisplayProcess::displayPoint2d(hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::displayPoint2d( hkDebugDisplayProcess *this, const hkVector4f *a2, unsigned int a3, int a4, int a5);
// [0x18eb0a0] (76 bytes) hkDebugDisplayProcess::displayLine2d(hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::displayLine2d( hkDebugDisplayProcess *this, const hkVector4f *a2, const hkVector4f *a3, unsigned int a4, int a5, int a6);
// [0x18eb100] (83 bytes) hkDebugDisplayProcess::displayTriangle2d(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::displayTriangle2d( hkDebugDisplayProcess *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, unsigned int a5, int a6, int a7);
// [0x18eb170] (87 bytes) hkDebugDisplayProcess::displayText2d(char const*,hkVector4f const&,float,unsigned int,int,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::displayText2d( hkDebugDisplayProcess *this, const char *a2, const hkVector4f *a3, float a4, int64_t a5, int a6);
// [0x18eb1e0] (69 bytes) hkDebugDisplayProcess::displayText(char const*,unsigned int,int,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::displayText( hkDebugDisplayProcess *this, const char *a2, unsigned int a3, int a4, int a5);
// [0x18eb240] (76 bytes) hkDebugDisplayProcess::display3dText(char const*,hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::display3dText( hkDebugDisplayProcess *this, const char *a2, const hkVector4f *a3, unsigned int a4, int a5, int a6);
// [0x18eb2a0] (62 bytes) hkDebugDisplayProcess::displayAnnotation(char const*,int,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::displayAnnotation( hkDebugDisplayProcess *this, const char *a2, int a3, int a4);
// [0x18eb2f0] (55 bytes) hkDebugDisplayProcess::sendMemStatsDump(char const*,int)
// hkDebugDisplayProcess *hkDebugDisplayProcess::sendMemStatsDump( hkDebugDisplayProcess *this, const char *a2, int a3);
// [0x18eb340] (41 bytes) hkDebugDisplayProcess::holdImmediate(void)
// hkDebugDisplayProcess *hkDebugDisplayProcess::holdImmediate(hkDebugDisplayProcess *this, int a2);
// [0x18eb380] (116 bytes) hkDebugDisplayProcess::~hkDebugDisplayProcess()
// void hkDebugDisplayProcess::~hkDebugDisplayProcess(hkDebugDisplayProcess *this);
// [0x18eb420] (93 bytes) hkDebugDisplayProcess::~hkDebugDisplayProcess()
// void hkDebugDisplayProcess::~hkDebugDisplayProcess(hkDebugDisplayProcess *this);
// [0x18eb4a0] (66 bytes) hkDebugDisplayProcess::registerProcess(void)
// int hkDebugDisplayProcess::registerProcess();
// [0x18eb4f0] (109 bytes) hkDebugDisplayProcess::hkDebugDisplayProcess(void)
// void hkDebugDisplayProcess::hkDebugDisplayProcess(hkDebugDisplayProcess *this);
// [0x18eb560] (84 bytes) hkDebugDisplayProcess::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// char *hkDebugDisplayProcess::create();
// [0x18eb5c0] (41 bytes) hkReplayStreamReader::isOk(void)const
// hkReplayStreamReader *hkReplayStreamReader::isOk(hkReplayStreamReader *this, int a2);
// [0x18eb5f0] (317 bytes) hkReplayStreamReader::read(void *,int)
// size_t hkReplayStreamReader::read(hkReplayStreamReader *this, hkString *a2, size_t a3);
// [0x18eb730] (170 bytes) hkReplayStreamReader::~hkReplayStreamReader()
// void hkReplayStreamReader::~hkReplayStreamReader(hkReplayStreamReader *this);
// [0x18eb7e0] (229 bytes) hkReplayStreamReader::~hkReplayStreamReader()
// void hkReplayStreamReader::~hkReplayStreamReader(hkReplayStreamReader *this);
// [0x18eb8d0] (141 bytes) hkCommandRouter::registerProcess(hkProcess *)
// int hkCommandRouter::registerProcess(hkCommandRouter *this, hkProcess *a2, int a3, int a4);
// [0x18eb960] (153 bytes) hkCommandRouter::unregisterProcess(hkProcess *)
// int *hkCommandRouter::unregisterProcess(hkCommandRouter *this, hkProcess *a2);
// [0x18eba00] (1083 bytes) hkCommandRouter::consumeCommands(hkDisplaySerializeIStream *)
// hkCommandRouter *hkCommandRouter::consumeCommands( hkCommandRouter *this, hkDisplaySerializeIStream *a2, hkIArchive *a3);
// [0x18ebe40] (45 bytes) hkDisplayCapsule::~hkDisplayCapsule()
// void hkDisplayCapsule::~hkDisplayCapsule(hkDisplayCapsule *this);
// [0x18ebe70] (104 bytes) hkDisplayCapsule::~hkDisplayCapsule()
// void hkDisplayCapsule::~hkDisplayCapsule(hkDisplayCapsule *this);
// [0x18ebee0] (197 bytes) hkDisplayCapsule::buildGeometry(void)
// int hkDisplayCapsule::buildGeometry(hkDisplayCapsule *this);
// [0x18ebfb0] (642 bytes) hkDisplayCapsule::getWireframeGeometry(hkArrayBase<hkVector4f> &,hkMemoryAllocator &)
// int hkDisplayCapsule::getWireframeGeometry( hkDisplayCapsule *this, hkArrayBase<hkVector4f> *a2, hkMemoryAllocator *a3);
// [0x18ec240] (279 bytes) hkDisplayCapsule::hkDisplayCapsule(hkVector4f const&,hkVector4f const&,float,int,int)
// void hkDisplayCapsule::hkDisplayCapsule( hkDisplayCapsule *this, const hkVector4f *a2, const hkVector4f *a3, float a4, int a5, int a6);
// [0x18ec360] (9 bytes) hkDisplayConvex::buildGeometry(void)
// void hkDisplayConvex::buildGeometry();
// [0x18ec370] (45 bytes) hkDisplayConvex::~hkDisplayConvex()
// void hkDisplayConvex::~hkDisplayConvex(hkDisplayConvex *this);
// [0x18ec3a0] (104 bytes) hkDisplayConvex::~hkDisplayConvex()
// void hkDisplayConvex::~hkDisplayConvex(hkDisplayConvex *this);
// [0x18ec410] (761 bytes) hkDisplayConvex::getWireframeGeometry(hkArrayBase<hkVector4f> &,hkMemoryAllocator &)
// int hkDisplayConvex::getWireframeGeometry( hkDisplayConvex *this, hkArrayBase<hkVector4f> *a2, hkMemoryAllocator *a3);
// [0x18ec710] (187 bytes) hkDisplayConvex::hkDisplayConvex(hkGeometry *)
// void hkDisplayConvex::hkDisplayConvex(hkDisplayConvex *this, hkGeometry *a2);
// [0x18ec7d0] (22 bytes) hkInspectProcess::getProcessTag(void)
// int hkInspectProcess::getProcessTag();
// [0x18ec800] (34 bytes) hkInspectProcess::getConsumableCommands(unsigned char *&,int &)
// int *hkInspectProcess::getConsumableCommands(hkInspectProcess *this, uint8_t **a2, int *a3);
// [0x18ec840] (66 bytes) hkInspectProcess::registerProcess(void)
// int hkInspectProcess::registerProcess();
// [0x18ec890] (233 bytes) hkInspectProcess::hkInspectProcess(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// struct hkPlatformObjectWriter::Cache *hkInspectProcess::hkInspectProcess(int a1, int *a2);
// [0x18ec980] (92 bytes) hkInspectProcess::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// int hkInspectProcess::create(int *a1);
// [0x18ec9e0] (222 bytes) hkInspectProcess::addTopLevelObject(void *,hkClass const&,unsigned long)
// int hkInspectProcess::addTopLevelObject(hkOArchive **this, void *a2, const hkClass *a3, unsigned int a4);
// [0x18ecac0] (435 bytes) hkInspectProcess::init(void)
// uint8_t *hkInspectProcess::init(hkInspectProcess *this);
// [0x18ecc90] (201 bytes) hkInspectProcess::removeTopLevelObject(void *)
// int hkInspectProcess::removeTopLevelObject(hkOArchive **this, void *a2);
// [0x18ecdc0] (325 bytes) hkInspectProcess::~hkInspectProcess()
// void hkInspectProcess::~hkInspectProcess(hkInspectProcess *this);
// [0x18ecf20] (93 bytes) hkInspectProcess::~hkInspectProcess()
// void hkInspectProcess::~hkInspectProcess(hkInspectProcess *this);
// [0x18ecf90] (233 bytes) hkInspectProcess::writeObject(void const*,hkClass const&,hkBool,hkPointerMap<void const*,hkClass const*,hkContainerHeapAllocator> &)
// int hkInspectProcess::writeObject(uint32_t *a1, int a2, hkClass *a3, char a4, int a5);
// [0x18ed080] (178 bytes) hkInspectProcess::step(float)
// void hkInspectProcess::step(hkInspectProcess *this);
// [0x18ed150] (1601 bytes) hkInspectProcess::consumeCommand(unsigned char)
// void hkInspectProcess::consumeCommand(hkIArchive **this, uint8_t a2);
// [0x18ed7b0] (988 bytes) hkObjectSerialize::readObject(hkStreamReader *,void *&,unsigned int &,hkArray<hkObjectSerialize::GlobalFixup,hkContainerHeapAllocator> &,unsigned long long &)
// int hkObjectSerialize::readObject(int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x18edb90] (1609 bytes) hkObjectSerialize::writeObject(hkStreamWriter *,hkStructureLayout const&,unsigned long long,void const*,hkClass const&,hkArray<hkObjectSerialize::GlobalFixup,hkContainerHeapAllocator> &,hkPlatformObjectWriter::Cache *,hkFlags<hkObjectCopier::ObjectCopierFlagBits,unsigned int>)
// int hkObjectSerialize::writeObject( int a1, int a2, uint64_t a3, hkClass *a4, hkRelocationInfo *a5, int *a6, int a7, int a8);
// [0x18ee1e0] (1215 bytes) hkObjectSerialize::writeObject(hkDisplaySerializeOStream *,unsigned char,void const*,hkClass const&,hkPointerMap<void const*,hkClass const*,hkContainerHeapAllocator> &,bool,bool,bool,hkVtableClassRegistry const*,hkPlatformObjectWriter::Cache *,hkFlags<hkObjectCopier::ObjectCopierFlagBits,unsigned int>)
// int hkObjectSerialize::writeObject( hkOArchive *a1, uint8_t a2, hkClass *a3, hkClass *a4, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a5, uint8_t a6, char a7, uint8_t a8, int a9, int a10, int a11);
// [0x18ee6a0] (172 bytes) hkObjectSerialize::writeObject(hkDisplaySerializeOStream *,unsigned char,void const*,hkClass const&,bool,bool,bool,hkVtableClassRegistry const*,hkPlatformObjectWriter::Cache *,hkFlags<hkObjectCopier::ObjectCopierFlagBits,unsigned int>)
// int hkObjectSerialize::writeObject( hkOArchive *a1, uint8_t a2, hkClass *a3, hkClass *a4, uint8_t a5, char a6, uint8_t a7, int a8, int a9, int a10);
// [0x18ee750] (1115 bytes) hkObjectSerialize::readObject(hkDisplaySerializeIStream *,hkSerializeUtil::ErrorDetails &)
// int hkObjectSerialize::readObject(hkIArchive *a1, int a2);
// [0x18eebb0] (1153 bytes) hkObjectSerialize::writeObject(hkDisplaySerializeOStream *,hkReferencedObject *,bool,bool,hkStructureLayout,hkPlatformObjectWriter::Cache *,hkFlags<hkObjectCopier::ObjectCopierFlagBits,unsigned int>)
// 0x18eebb0 hkObjectSerialize::writeObject(hkDisplaySerializeOStream *,hkReferencedObject *,bool,bool,hkStructureLayout,hkPlatformObjectWriter::Cache *,hkFlags<hkObjectCopier::ObjectCopierFlagBits,unsigned int>)
// [0x18ef040] (796 bytes) hkDisplayBox::getWireframeGeometry(hkArrayBase<hkVector4f> &,hkMemoryAllocator &)
// uint32_t *hkDisplayBox::getWireframeGeometry( hkDisplayBox *this, hkArrayBase<hkVector4f> *a2, hkMemoryAllocator *a3);
// [0x18ef360] (45 bytes) hkDisplayBox::~hkDisplayBox()
// void hkDisplayBox::~hkDisplayBox(hkDisplayBox *this);
// [0x18ef390] (104 bytes) hkDisplayBox::~hkDisplayBox()
// void hkDisplayBox::~hkDisplayBox(hkDisplayBox *this);
// [0x18ef400] (2039 bytes) hkDisplayBox::buildGeometry(void)
// uint32_t *hkDisplayBox::buildGeometry(hkDisplayBox *this);
// [0x18efc00] (239 bytes) hkDisplayBox::hkDisplayBox(hkVector4f const&)
// void hkDisplayBox::hkDisplayBox(hkDisplayBox *this, const hkVector4f *a2);
// [0x18efcf0] (207 bytes) hkDisplayBox::hkDisplayBox(void)
// void hkDisplayBox::hkDisplayBox(hkDisplayBox *this);
// [0x18efdc0] (133 bytes) hkDisplayBox::setParameters(hkVector4f const&,hkTransformf const&)
// hkDisplayBox *hkDisplayBox::setParameters(hkDisplayBox *this, const hkVector4f *a2, const hkTransformf *a3);
// [0x18efe50] (14 bytes) hkProcessContext::setOwner(hkVisualDebugger *)
// hkProcessContext *hkProcessContext::setOwner(hkProcessContext *this, hkVisualDebugger *a2);
// [0x18efe60] (170 bytes) hkProcessContext::~hkProcessContext()
// void hkProcessContext::~hkProcessContext(hkProcessContext *this);
// [0x18eff10] (79 bytes) hkProcessContext::~hkProcessContext()
// void hkProcessContext::~hkProcessContext(hkProcessContext *this);
// [0x18eff60] (357 bytes) hkProcessContext::addThreadPoolTimers(hkThreadPool *)
// int hkProcessContext::addThreadPoolTimers(uint32_t *a1, int a2, int a3, int a4, int a5, int a6);
// [0x18f00d0] (218 bytes) hkProcessContext::syncTimers(hkThreadPool *)
// int hkProcessContext::syncTimers(uint32_t *a1, int a2);
// [0x18f01b0] (1232 bytes) hkDisplayAABB::getWireframeGeometry(hkArrayBase<hkVector4f> &,hkMemoryAllocator &)
// uint32_t *hkDisplayAABB::getWireframeGeometry( hkDisplayAABB *this, hkArrayBase<hkVector4f> *a2, hkMemoryAllocator *a3);
// [0x18f0680] (45 bytes) hkDisplayAABB::~hkDisplayAABB()
// void hkDisplayAABB::~hkDisplayAABB(hkDisplayAABB *this);
// [0x18f06b0] (104 bytes) hkDisplayAABB::~hkDisplayAABB()
// void hkDisplayAABB::~hkDisplayAABB(hkDisplayAABB *this);
// [0x18f0720] (2885 bytes) hkDisplayAABB::buildGeometry(void)
// 0x18f0720 hkDisplayAABB::buildGeometry(void)
// [0x18f1270] (245 bytes) hkDisplayAABB::hkDisplayAABB(hkVector4f const&,hkVector4f const&)
// void hkDisplayAABB::hkDisplayAABB(hkDisplayAABB *this, const hkVector4f *a2, const hkVector4f *a3);
// [0x18f1370] (227 bytes) hkDisplayAABB::hkDisplayAABB(void)
// void hkDisplayAABB::hkDisplayAABB(hkDisplayAABB *this);
// [0x18f1460] (61 bytes) hkDisplayAABB::setExtents(hkVector4f const&,hkVector4f const&)
// hkDisplayAABB *hkDisplayAABB::setExtents(hkDisplayAABB *this, const hkVector4f *a2, const hkVector4f *a3);
// [0x18f14a0] (12 bytes) hkDisplayAABB::getMinExtent(void)
// char *hkDisplayAABB::getMinExtent(hkDisplayAABB *this);
// [0x18f14b0] (12 bytes) hkDisplayAABB::getMaxExtent(void)
// char *hkDisplayAABB::getMaxExtent(hkDisplayAABB *this);
// [0x18f14c0] (45 bytes) hkDisplaySemiCircle::~hkDisplaySemiCircle()
// void hkDisplaySemiCircle::~hkDisplaySemiCircle(hkDisplaySemiCircle *this);
// [0x18f14f0] (104 bytes) hkDisplaySemiCircle::~hkDisplaySemiCircle()
// void hkDisplaySemiCircle::~hkDisplaySemiCircle(hkDisplaySemiCircle *this);
// [0x18f1560] (338 bytes) hkDisplaySemiCircle::hkDisplaySemiCircle(hkVector4f const&,hkVector4f const&,hkVector4f const&,float,float,float,int)
// void hkDisplaySemiCircle::hkDisplaySemiCircle( hkDisplaySemiCircle *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, float a5, float a6, float a7, int a8);
// [0x18f16c0] (293 bytes) hkDisplaySemiCircle::hkDisplaySemiCircle(void)
// void hkDisplaySemiCircle::hkDisplaySemiCircle(hkDisplaySemiCircle *this);
// [0x18f17f0] (693 bytes) hkDisplaySemiCircle::generatePoints(hkArray<hkVector4f,hkContainerHeapAllocator> &)
// int hkDisplaySemiCircle::generatePoints( hkDisplaySemiCircle *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x18f1ab0] (353 bytes) hkDisplaySemiCircle::getWireframeGeometry(hkArrayBase<hkVector4f> &,hkMemoryAllocator &)
// int hkDisplaySemiCircle::getWireframeGeometry( hkDisplaySemiCircle *this, hkArrayBase<hkVector4f> *a2, hkMemoryAllocator *a3);
// [0x18f1c20] (413 bytes) hkDisplaySemiCircle::buildGeometry(void)
// 0x18f1c20 hkDisplaySemiCircle::buildGeometry(void)
// [0x18f1dc0] (154 bytes) hkDisplaySemiCircle::setParameters(float,float,float,int,hkVector4f const&,hkVector4f const&,hkVector4f const&)
// hkDisplaySemiCircle *hkDisplaySemiCircle::setParameters( hkDisplaySemiCircle *this, float a2, float a3, float a4, int a5, const hkVector4f *a6, const hkVector4f *a7, const hkVector4f *a8);
// [0x18f1e60] (34 bytes) hkDisplaySemiCircle::getNormal(void)
// hkDisplaySemiCircle *hkDisplaySemiCircle::getNormal(hkDisplaySemiCircle *this, uint32_t *a2);
// [0x18f1e90] (34 bytes) hkDisplaySemiCircle::getPerp(void)
// hkDisplaySemiCircle *hkDisplaySemiCircle::getPerp(hkDisplaySemiCircle *this, uint32_t *a2);
// [0x18f1ec0] (29 bytes) hkDisplaySemiCircle::getThetaMin(void)
// long double hkDisplaySemiCircle::getThetaMin(hkDisplaySemiCircle *this);
// [0x18f1ee0] (29 bytes) hkDisplaySemiCircle::getThetaMax(void)
// long double hkDisplaySemiCircle::getThetaMax(hkDisplaySemiCircle *this);
// [0x18f1f00] (29 bytes) hkDisplaySemiCircle::getRadius(void)
// long double hkDisplaySemiCircle::getRadius(hkDisplaySemiCircle *this);
// [0x18f1f20] (15 bytes) hkDisplaySemiCircle::getNumSegments(void)
// int hkDisplaySemiCircle::getNumSegments(hkDisplaySemiCircle *this);
// [0x18f1f30] (46 bytes) hkDisplaySemiCircle::getCenter(void)
// hkDisplaySemiCircle *hkDisplaySemiCircle::getCenter(hkDisplaySemiCircle *this, uint32_t *a2);
// [0x18f1f60] (45 bytes) hkDisplayCone::~hkDisplayCone()
// void hkDisplayCone::~hkDisplayCone(hkDisplayCone *this);
// [0x18f1f90] (104 bytes) hkDisplayCone::~hkDisplayCone()
// void hkDisplayCone::~hkDisplayCone(hkDisplayCone *this);
// [0x18f2000] (283 bytes) hkDisplayCone::hkDisplayCone(float,float,int,hkVector4f const&,hkVector4f const&)
// void hkDisplayCone::hkDisplayCone( hkDisplayCone *this, float a2, float a3, int a4, const hkVector4f *a5, const hkVector4f *a6);
// [0x18f2120] (253 bytes) hkDisplayCone::hkDisplayCone(void)
// void hkDisplayCone::hkDisplayCone(hkDisplayCone *this);
// [0x18f2220] (99 bytes) hkDisplayCone::setParameters(float,float,int,hkVector4f const&,hkVector4f const&)
// hkDisplayCone *hkDisplayCone::setParameters( hkDisplayCone *this, float a2, float a3, int a4, const hkVector4f *a5, const hkVector4f *a6);
// [0x18f2290] (816 bytes) hkDisplayCone::generateConeVertices(hkArray<hkVector4f,hkContainerHeapAllocator> &)
// int hkDisplayCone::generateConeVertices(hkDisplayCone *this, hkArray<hkVector4f, hkContainerHeapAllocator> *a2);
// [0x18f25c0] (498 bytes) hkDisplayCone::getWireframeGeometry(hkArrayBase<hkVector4f> &,hkMemoryAllocator &)
// int hkDisplayCone::getWireframeGeometry( hkDisplayCone *this, hkArrayBase<hkVector4f> *a2, hkMemoryAllocator *a3);
// [0x18f27c0] (451 bytes) hkDisplayCone::buildGeometry(void)
// 0x18f27c0 hkDisplayCone::buildGeometry(void)
// [0x18f2990] (34 bytes) hkDisplayCone::getPosition(void)
// hkDisplayCone *hkDisplayCone::getPosition(hkDisplayCone *this, uint32_t *a2);
// [0x18f29c0] (34 bytes) hkDisplayCone::getAxis(void)
// hkDisplayCone *hkDisplayCone::getAxis(hkDisplayCone *this, uint32_t *a2);
// [0x18f29f0] (29 bytes) hkDisplayCone::getHeight(void)
// long double hkDisplayCone::getHeight(hkDisplayCone *this);
// [0x18f2a10] (29 bytes) hkDisplayCone::getAngle(void)
// long double hkDisplayCone::getAngle(hkDisplayCone *this);
// [0x18f2a30] (15 bytes) hkDisplayCone::getNumSegments(void)
// int hkDisplayCone::getNumSegments(hkDisplayCone *this);
// [0x18f2a40] (9 bytes) hkDisplayMesh::buildGeometry(void)
// void hkDisplayMesh::buildGeometry();
// [0x18f2a50] (9 bytes) hkDisplayMesh::getWireframeGeometry(hkArrayBase<hkVector4f> &,hkMemoryAllocator &)
// void hkDisplayMesh::getWireframeGeometry();
// [0x18f2a60] (29 bytes) hkForwardingDisplayGeometryBuilder::~hkForwardingDisplayGeometryBuilder()
// void hkForwardingDisplayGeometryBuilder::~hkForwardingDisplayGeometryBuilder( hkForwardingDisplayGeometryBuilder *this);
// [0x18f2a80] (178 bytes) hkDisplayMesh::~hkDisplayMesh()
// void hkDisplayMesh::~hkDisplayMesh(hkDisplayMesh *this);
// [0x18f2b40] (96 bytes) hkForwardingDisplayGeometryBuilder::~hkForwardingDisplayGeometryBuilder()
// void hkForwardingDisplayGeometryBuilder::~hkForwardingDisplayGeometryBuilder( hkForwardingDisplayGeometryBuilder *this);
// [0x18f2ba0] (234 bytes) hkDisplayMesh::~hkDisplayMesh()
// void hkDisplayMesh::~hkDisplayMesh(hkDisplayMesh *this);
// [0x18f2c90] (12 bytes) hkDisplayMesh::getMesh(void)const
// int hkDisplayMesh::getMesh(hkDisplayMesh *this);
// [0x18f2ca0] (86 bytes) hkDisplayMesh::freeSerializedMeshData(void)
// int hkDisplayMesh::freeSerializedMeshData(hkDisplayMesh *this);
// [0x18f2d00] (12 bytes) hkDisplayMesh::getSeriaizedMeshDataSize(void)const
// int hkDisplayMesh::getSeriaizedMeshDataSize(hkDisplayMesh *this);
// [0x18f2d10] (12 bytes) hkDisplayMesh::getSeriaizedMeshData(void)const
// int hkDisplayMesh::getSeriaizedMeshData(hkDisplayMesh *this);
// [0x18f2d20] (467 bytes) hkDisplayMesh::hkDisplayMesh(hkMeshBody *)
// void hkDisplayMesh::hkDisplayMesh( hkDisplayMesh *this, hkMeshBody *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36);
// [0x18f2f00] (223 bytes) hkForwardingDisplayGeometryBuilder::buildDisplayGeometries(hkReferencedObject const*,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// 0x18f2f00 hkForwardingDisplayGeometryBuilder::buildDisplayGeometries(hkReferencedObject const*,hkArray<hkDisplayGeometry *,hkContainerHeapAllocator> &)
// [0x18f2fe0] (463 bytes) hkDisplayMesh::serializeMeshData(void)
// 0x18f2fe0 hkDisplayMesh::serializeMeshData(void)
// [0x18f31b0] (45 bytes) hkDisplaySerializeOStream::~hkDisplaySerializeOStream()
// void hkDisplaySerializeOStream::~hkDisplaySerializeOStream(hkDisplaySerializeOStream *this);
// [0x18f31e0] (104 bytes) hkDisplaySerializeOStream::~hkDisplaySerializeOStream()
// void hkDisplaySerializeOStream::~hkDisplaySerializeOStream(hkDisplaySerializeOStream *this);
// [0x18f3250] (553 bytes) hkVersionReporter::sendVersionInformation(hkStreamWriter *)
// hkVersionReporter *hkVersionReporter::sendVersionInformation(hkVersionReporter *this, hkStreamWriter *a2);
// [0x18f3480] (185 bytes) hkVersionReporter::sendStructureLayout(hkStreamWriter *)
// hkVersionReporter *hkVersionReporter::sendStructureLayout(hkVersionReporter *this, hkStreamWriter *a2);
// [0x18f3540] (718 bytes) hkVersionReporter::receiveVersionInformation(hkDisplaySerializeIStream &,int &,int &,hkStringPtr &,hkStringPtr &)
// hkVersionReporter *hkVersionReporter::receiveVersionInformation( hkVersionReporter *this, hkDisplaySerializeIStream *a2, int *a3, int *a4, hkStringPtr *a5, hkStringPtr *a6);
// [0x18f3810] (117 bytes) hkVersionReporter::receiveVersionInformation(hkStreamReader *,int &,int &,hkStringPtr &,hkStringPtr &)
// hkVersionReporter *hkVersionReporter::receiveVersionInformation( hkVersionReporter *this, hkStreamReader *a2, int *a3, int *a4, hkStringPtr *a5, hkStringPtr *a6);
// [0x18f3890] (22 bytes) hkStatisticsProcess::getProcessTag(void)
// int hkStatisticsProcess::getProcessTag();
// [0x18f38c0] (242 bytes) hkStatisticsProcess::~hkStatisticsProcess()
// void hkStatisticsProcess::~hkStatisticsProcess(hkStatisticsProcess *this);
// [0x18f39d0] (93 bytes) hkStatisticsProcess::~hkStatisticsProcess()
// void hkStatisticsProcess::~hkStatisticsProcess(hkStatisticsProcess *this);
// [0x18f3a40] (2609 bytes) hkStatisticsProcess::step(float)
// hkStatisticsProcess *hkStatisticsProcess::step(hkStatisticsProcess *this);
// [0x18f4490] (66 bytes) hkStatisticsProcess::registerProcess(void)
// int hkStatisticsProcess::registerProcess();
// [0x18f44e0] (1106 bytes) hkStatisticsProcess::hkStatisticsProcess(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// void hkStatisticsProcess::hkStatisticsProcess(int a1, unsigned int *a2);
// [0x18f4940] (92 bytes) hkStatisticsProcess::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// int hkStatisticsProcess::create(unsigned int *a1);
// [0x18f49a0] (387 bytes) hkDisplaySerializeOStream::hkDisplaySerializeOStream(hkStreamWriter *)
// void hkDisplaySerializeOStream::hkDisplaySerializeOStream(hkDisplaySerializeOStream *this, hkStreamWriter *a2);
// [0x18f4b30] (64 bytes) hkDisplaySerializeOStream::hkDisplaySerializeOStream(hkArray<char,hkContainerHeapAllocator> &)
// void (**hkDisplaySerializeOStream::hkDisplaySerializeOStream( uint32_t *a1, int a2))(hkDisplaySerializeOStream *__hidden this);
// [0x18f4b70] (50 bytes) hkDisplaySerializeOStream::writeQuadVector4(hkVector4f const&)
// uint8_t *hkDisplaySerializeOStream::writeQuadVector4(hkDisplaySerializeOStream *this, const hkVector4f *a2);
// [0x18f4bb0] (221 bytes) hkDisplaySerializeOStream::writeTransform(hkTransformf const&)
// uint8_t *hkDisplaySerializeOStream::writeTransform(hkDisplaySerializeOStream *this, const hkTransformf *a2);
// [0x18f4c90] (78 bytes) hkDisplaySerializeOStream::writeTriangle(hkGeometry::Triangle const&)
// uint8_t *hkDisplaySerializeOStream::writeTriangle( hkDisplaySerializeOStream *this, const hkGeometry::Triangle *a2);
// [0x18f4ce0] (88 bytes) hkDisplaySerializeOStream::writeVectorArray(hkArrayBase<hkVector4f> const&)
// uint8_t *hkDisplaySerializeOStream::writeVectorArray( hkDisplaySerializeOStream *this, const hkArrayBase<hkVector4f> *a2);
// [0x18f4d40] (118 bytes) hkDisplaySerializeOStream::writeGeometry(hkGeometry const&)
// uint8_t *hkDisplaySerializeOStream::writeGeometry(hkDisplaySerializeOStream *this, const hkGeometry *a2);
// [0x18f4dc0] (21 bytes) hkDisplaySerializeOStream::computeBytesRequired(hkArrayBase<hkVector4f> const&)
// int hkDisplaySerializeOStream::computeBytesRequired(hkDisplaySerializeOStream *this);
// [0x18f4de0] (51 bytes) hkDisplaySerializeOStream::computeBytesRequired(hkGeometry const&)
// int hkDisplaySerializeOStream::computeBytesRequired(hkDisplaySerializeOStream *this);
// [0x18f4e20] (1171 bytes) hkDisplaySerializeOStream::writeDisplayGeometry(hkDisplayGeometry *)
// char *hkDisplaySerializeOStream::writeDisplayGeometry(hkDisplaySerializeOStream *this, hkDisplayGeometry *a2);
// [0x18f52c0] (186 bytes) hkDisplaySerializeOStream::computeBytesRequired(hkDisplayGeometry *)
// int hkDisplaySerializeOStream::computeBytesRequired(hkDisplaySerializeOStream **this);
// [0x18f5380] (51 bytes) hkDisplaySerializeOStream::writeHash(unsigned long long const&)
// uint8_t *hkDisplaySerializeOStream::writeHash(hkDisplaySerializeOStream *this, uint64_t *a2);
// [0x18f53c0] (61 bytes) hkDisplaySerializeOStream::writeAabb(hkAabb const&)
// uint8_t *hkDisplaySerializeOStream::writeAabb(hkDisplaySerializeOStream *this, const hkAabb *a2);
// [0x18f5400] (9 bytes) hkDisplayTaperedCapsule::getWireframeGeometry(hkArrayBase<hkVector4f> &,hkMemoryAllocator &)
// void hkDisplayTaperedCapsule::getWireframeGeometry();
// [0x18f5410] (45 bytes) hkDisplayTaperedCapsule::~hkDisplayTaperedCapsule()
// void hkDisplayTaperedCapsule::~hkDisplayTaperedCapsule(hkDisplayTaperedCapsule *this);
// [0x18f5440] (104 bytes) hkDisplayTaperedCapsule::~hkDisplayTaperedCapsule()
// void hkDisplayTaperedCapsule::~hkDisplayTaperedCapsule(hkDisplayTaperedCapsule *this);
// [0x18f54b0] (208 bytes) hkDisplayTaperedCapsule::buildGeometry(void)
// int hkDisplayTaperedCapsule::buildGeometry(hkDisplayTaperedCapsule *this);
// [0x18f5580] (293 bytes) hkDisplayTaperedCapsule::hkDisplayTaperedCapsule(hkVector4f const&,hkVector4f const&,float,float,int,int)
// void hkDisplayTaperedCapsule::hkDisplayTaperedCapsule( hkDisplayTaperedCapsule *this, const hkVector4f *a2, const hkVector4f *a3, float a4, float a5, int a6, int a7);
// [0x18f56b0] (22 bytes) hkMemorySnapshotProcess::getProcessTag(void)
// int hkMemorySnapshotProcess::getProcessTag();
// [0x18f56e0] (39 bytes) hkMemorySnapshotProcess::~hkMemorySnapshotProcess()
// void hkMemorySnapshotProcess::~hkMemorySnapshotProcess(hkMemorySnapshotProcess *this);
// [0x18f5720] (108 bytes) hkMemorySnapshotProcess::~hkMemorySnapshotProcess()
// void hkMemorySnapshotProcess::~hkMemorySnapshotProcess(hkMemorySnapshotProcess *this);
// [0x18f57a0] (66 bytes) hkMemorySnapshotProcess::registerProcess(void)
// int hkMemorySnapshotProcess::registerProcess();
// [0x18f57f0] (48 bytes) hkMemorySnapshotProcess::hkMemorySnapshotProcess(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// int hkMemorySnapshotProcess::hkMemorySnapshotProcess(int a1);
// [0x18f5820] (92 bytes) hkMemorySnapshotProcess::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// int hkMemorySnapshotProcess::create();
// [0x18f5880] (242 bytes) hkMemorySnapshotProcess::step(float)
// int hkMemorySnapshotProcess::step(hkOArchive **this);
// [0x18f5990] (9 bytes) hkDisplayWireframe::buildGeometry(void)
// void hkDisplayWireframe::buildGeometry();
// [0x18f59a0] (194 bytes) hkDisplayWireframe::getWireframeGeometry(hkArrayBase<hkVector4f> &,hkMemoryAllocator &)
// hkArrayBase<hkVector4f> *hkDisplayWireframe::getWireframeGeometry( hkDisplayWireframe *this, hkArrayBase<hkVector4f> *a2, hkMemoryAllocator *a3);
// [0x18f5a70] (103 bytes) hkDisplayWireframe::~hkDisplayWireframe()
// void hkDisplayWireframe::~hkDisplayWireframe(hkDisplayWireframe *this);
// [0x18f5ae0] (160 bytes) hkDisplayWireframe::~hkDisplayWireframe()
// void hkDisplayWireframe::~hkDisplayWireframe(hkDisplayWireframe *this);
// [0x18f5b80] (208 bytes) hkDisplayWireframe::hkDisplayWireframe(void)
// void hkDisplayWireframe::hkDisplayWireframe(hkDisplayWireframe *this);
// [0x1a72d50] (22 bytes) hkClassMemberAccessor::connect(void *,hkClassMember const*)
// char *hkClassMemberAccessor::connect(hkClassMemberAccessor *this, char *a2, const hkClassMember *a3);
// [0x1a72d70] (71 bytes) hkClassMemberAccessor::connect(void *,hkClass const&,char const*)
// hkString **hkClassMemberAccessor::connect(hkClassMemberAccessor *this, char *a2, const hkClass *a3, char *a4);
// [0x1a72dc0] (50 bytes) hkClassMemberAccessor::hkClassMemberAccessor(void *,hkClassMember const*)
// void hkClassMemberAccessor::hkClassMemberAccessor( hkClassMemberAccessor *this, char *a2, const hkClassMember *a3);
// [0x1a72e00] (59 bytes) hkClassMemberAccessor::hkClassMemberAccessor(hkVariant const&,char const*)
// hkString **hkClassMemberAccessor::hkClassMemberAccessor(hkClassMemberAccessor *a1, int a2, char *a3);
// [0x1a72e40] (58 bytes) hkClassMemberAccessor::hkClassMemberAccessor(void *,hkClass const&,char const*)
// void hkClassMemberAccessor::hkClassMemberAccessor( hkClassMemberAccessor *this, char *a2, const hkClass *a3, char *a4);
// [0x1a72e80] (18 bytes) hkClassMemberAccessor::isOk(void)const
// hkClassMemberAccessor *hkClassMemberAccessor::isOk(hkClassMemberAccessor *this, uint32_t *a2);
// [0x1a72ea0] (11 bytes) hkClassMemberAccessor::asRaw(void)const
// int hkClassMemberAccessor::asRaw(hkClassMemberAccessor *this);
// [0x1a72eb0] (11 bytes) hkClassMemberAccessor::getAddress(void)const
// int hkClassMemberAccessor::getAddress(hkClassMemberAccessor *this);
// [0x1a72ec0] (14 bytes) hkClassMemberAccessor::asPointer(int)const
// int hkClassMemberAccessor::asPointer(hkClassMemberAccessor *this, int a2);
// [0x1a72ed0] (14 bytes) hkClassMemberAccessor::asCstring(int)const
// int hkClassMemberAccessor::asCstring(hkClassMemberAccessor *this, int a2);
// [0x1a72ee0] (14 bytes) hkClassMemberAccessor::asStringPtr(int)const
// int hkClassMemberAccessor::asStringPtr(hkClassMemberAccessor *this, int a2);
// [0x1a72ef0] (13 bytes) hkClassMemberAccessor::asBool(int)const
// int hkClassMemberAccessor::asBool(hkClassMemberAccessor *this, int a2);
// [0x1a72f00] (14 bytes) hkClassMemberAccessor::asReal(int)const
// int hkClassMemberAccessor::asReal(hkClassMemberAccessor *this, int a2);
// [0x1a72f10] (15 bytes) hkClassMemberAccessor::asHalf(int)const
// int hkClassMemberAccessor::asHalf(hkClassMemberAccessor *this, int a2);
// [0x1a72f20] (14 bytes) hkClassMemberAccessor::asInt32(int)const
// int hkClassMemberAccessor::asInt32(hkClassMemberAccessor *this, int a2);
// [0x1a72f30] (14 bytes) hkClassMemberAccessor::asUint32(int)const
// int hkClassMemberAccessor::asUint32(hkClassMemberAccessor *this, int a2);
// [0x1a72f40] (14 bytes) hkClassMemberAccessor::asInt64(int)const
// int hkClassMemberAccessor::asInt64(hkClassMemberAccessor *this, int a2);
// [0x1a72f50] (14 bytes) hkClassMemberAccessor::asUint64(int)const
// int hkClassMemberAccessor::asUint64(hkClassMemberAccessor *this, int a2);
// [0x1a72f60] (14 bytes) hkClassMemberAccessor::asUlong(int)const
// int hkClassMemberAccessor::asUlong(hkClassMemberAccessor *this, int a2);
// [0x1a72f70] (15 bytes) hkClassMemberAccessor::asInt16(int)const
// int hkClassMemberAccessor::asInt16(hkClassMemberAccessor *this, int a2);
// [0x1a72f80] (15 bytes) hkClassMemberAccessor::asUint16(int)const
// int hkClassMemberAccessor::asUint16(hkClassMemberAccessor *this, int a2);
// [0x1a72f90] (13 bytes) hkClassMemberAccessor::asInt8(int)const
// int hkClassMemberAccessor::asInt8(hkClassMemberAccessor *this, int a2);
// [0x1a72fa0] (13 bytes) hkClassMemberAccessor::asUint8(int)const
// int hkClassMemberAccessor::asUint8(hkClassMemberAccessor *this, int a2);
// [0x1a72fb0] (14 bytes) hkClassMemberAccessor::asVector4(int)const
// int hkClassMemberAccessor::asVector4(hkClassMemberAccessor *this, int a2);
// [0x1a72fc0] (17 bytes) hkClassMemberAccessor::asMatrix3(int)const
// int hkClassMemberAccessor::asMatrix3(hkClassMemberAccessor *this, int a2);
// [0x1a72fe0] (14 bytes) hkClassMemberAccessor::asTransform(int)const
// int hkClassMemberAccessor::asTransform(hkClassMemberAccessor *this, int a2);
// [0x1a72ff0] (17 bytes) hkClassMemberAccessor::asRotation(int)const
// int hkClassMemberAccessor::asRotation(hkClassMemberAccessor *this, int a2);
// [0x1a73010] (14 bytes) hkClassMemberAccessor::asSimpleArray(int)const
// int hkClassMemberAccessor::asSimpleArray(hkClassMemberAccessor *this, int a2);
// [0x1a73020] (20 bytes) hkClassMemberAccessor::asHomogeneousArray(int)const
// int hkClassMemberAccessor::asHomogeneousArray(hkClassMemberAccessor *this, int a2);
// [0x1a73040] (14 bytes) hkClassMemberAccessor::asVariant(int)const
// int hkClassMemberAccessor::asVariant(hkClassMemberAccessor *this, int a2);
// [0x1a73050] (12 bytes) hkClassMemberAccessor::getClassMember(void)const
// int hkClassMemberAccessor::getClassMember(hkClassMemberAccessor *this);
// [0x1a73060] (75 bytes) hkClassMemberAccessor::member(char const*)const
// hkClassMemberAccessor *hkClassMemberAccessor::member( hkClassMemberAccessor *this, hkClassMember **a2, char *a3);
// [0x1a730b0] (18 bytes) hkClassAccessor::hkClassAccessor(void *,hkClass const*)
// void hkClassAccessor::hkClassAccessor(hkClassAccessor *this, void *a2, const hkClass *a3);
// [0x1a730d0] (67 bytes) hkClassMemberAccessor::object(void)const
// hkClassMemberAccessor *hkClassMemberAccessor::object(hkClassMemberAccessor *this, int a2);
// [0x1a73120] (19 bytes) hkClassAccessor::hkClassAccessor(hkVariant &)
// int hkClassAccessor::hkClassAccessor(int *a1, int *a2);
// [0x1a73140] (163 bytes) hkAabb::isValid(void)const
// bool hkAabb::isValid(hkAabb *this);
// [0x1a734e0] (269 bytes) hkClass::updateMetadataInplace(hkClass*,hkPointerMap<hkClass const*,int,hkContainerHeapAllocator> &,int)
// void hkClass::updateMetadataInplace( hkClass *a1, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a2, int a3);
// [0x1a735f0] (127 bytes) hkClass::updateMetadataInplace(hkClass**,int)
// void hkClass::updateMetadataInplace(hkClass *this, hkClass **a2);
// [0x1a73670] (237 bytes) hkMotionState::initMotionState(hkVector4f const&,hkQuaternionf const&)
// hkUFloat8 *hkMotionState::initMotionState(hkMotionState *this, const hkVector4f *a2, const hkQuaternionf *a3);
// [0x1a73760] (57 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new(unsigned int)
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new();
// [0x1a737a0] (71 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete(void *,unsigned int)
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete( void *a1);
// [0x1a737f0] (11 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new(unsigned int,void *)
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1a73800] (11 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new[](unsigned int,void *)
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new[]( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1a73810] (9 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete(void *,void *)
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete();
// [0x1a73820] (9 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete[](void *,void *)
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete[]();
// [0x1a73830] (66 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMultiMap(void *,int)
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMultiMap( hkMultiMap_Raw *this, uint32_t *a2, unsigned int a3);
// [0x1a73880] (68 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::~hkMultiMap()
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::~hkMultiMap( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this);
// [0x1a738d0] (76 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findNumEntries(unsigned long)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findNumEntries( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1a73920] (103 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findNumEntries(unsigned long,unsigned long)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findNumEntries( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2, unsigned int a3);
// [0x1a73990] (49 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getIterator(void)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getIterator( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this);
// [0x1a739d0] (14 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getKey(Dummy *)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getKey( uint32_t *a1, int a2);
// [0x1a739e0] (15 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getValue(Dummy *)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getValue( uint32_t *a1, int a2);
// [0x1a739f0] (19 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::setValue(Dummy *,unsigned long)
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::setValue( int *a1, int a2, int a3);
// [0x1a73a10] (49 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getNext(Dummy *)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getNext( uint32_t *a1, int a2);
// [0x1a73a50] (53 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getNext(Dummy *,unsigned long)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getNext( uint32_t *a1, int a2, int a3);
// [0x1a73a90] (21 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::isValid(Dummy *)const
// bool *hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::isValid( bool *a1, int a2, int a3);
// [0x1a73ab0] (70 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findKey(unsigned long)const
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findKey( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1a73b00] (95 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findKeyWithValue(unsigned long,unsigned long)const
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findKeyWithValue( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2, unsigned int a3);
// [0x1a73b60] (60 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::hasKey(unsigned long)const
// hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::hasKey( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *a2, unsigned int a3);
// [0x1a73ba0] (88 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getWithDefault(unsigned long,unsigned long)const
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getWithDefault( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2, unsigned int a3);
// [0x1a73c00] (80 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::get(unsigned long,unsigned long *)const
// hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::get( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *a2, unsigned int *a3, uint32_t *a4);
// [0x1a73c50] (216 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::remove(Dummy *)
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::remove( int64_t a1);
// [0x1a73d30] (120 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::removeAll(unsigned long)
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::removeAll( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1a73db0] (102 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::remove(unsigned long)
// hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::remove( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *a2, unsigned int a3);
// [0x1a73e20] (110 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::remove(unsigned long,unsigned long)
// hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::remove( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *a2, unsigned int a3, unsigned int a4);
// [0x1a73e90] (15 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getSize(void)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getSize( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this);
// [0x1a73ea0] (16 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getCapacity(void)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getCapacity( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this);
// [0x1a73eb0] (18 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getMemSize(void)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getMemSize( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this);
// [0x1a73ed0] (11 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getMemStart(void)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getMemStart( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this);
// [0x1a73ee0] (94 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::isOk(void)const
// hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::isOk( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int **a2);
// [0x1a73f40] (57 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::clear(void)
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::clear( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this);
// [0x1a73f80] (78 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMultiMap(void)
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMultiMap( hkMultiMap_Raw *this);
// [0x1a73fd0] (129 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMultiMap(int)
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMultiMap( hkMultiMap_Raw *this, int a2);
// [0x1a74060] (47 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::swap(hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>&)
// hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::swap( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *a2);
// [0x1a74090] (21 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::wasReallocated(void)const
// int64_t hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::wasReallocated( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, int a2);
// [0x1a740b0] (32 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getSizeInBytesFor(int)
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getSizeInBytesFor( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this);
// [0x1a740d0] (279 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::resizeTable(int)
// hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::resizeTable( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *a2, int a3);
// [0x1a741f0] (163 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::insert(unsigned long,unsigned long)
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::insert( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2, unsigned int a3);
// [0x1a742a0] (247 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::tryInsert(unsigned long,unsigned long)
// hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::tryInsert( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, uint32_t *a2, unsigned int a3, int a4);
// [0x1a743a0] (84 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::reserve(int)
// hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::reserve( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, int a2);
// [0x1a74400] (190 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findOrInsertKey(unsigned long,unsigned long)
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findOrInsertKey( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this, unsigned int a2, unsigned int a3);
// [0x1a744c0] (15 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::isPower2(unsigned int)
// bool hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::isPower2( hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator> *this);
// [0x1a744d0] (57 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator new(unsigned int)
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator new();
// [0x1a74510] (71 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator delete(void *,unsigned int)
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator delete( void *a1);
// [0x1a74560] (11 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator new(unsigned int,void *)
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator new( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1a74570] (11 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator new[](unsigned int,void *)
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator new[]( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1a74580] (9 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator delete(void *,void *)
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator delete();
// [0x1a74590] (9 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator delete[](void *,void *)
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator delete[]();
// [0x1a745a0] (66 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::hkMultiMap(void *,int)
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::hkMultiMap( hkMultiMap_Raw *this, uint32_t *a2, unsigned int a3);
// [0x1a745f0] (68 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::~hkMultiMap()
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::~hkMultiMap( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this);
// [0x1a74640] (76 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findNumEntries(unsigned long)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findNumEntries( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1a74690] (95 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findNumEntries(unsigned long,unsigned long)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findNumEntries( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, unsigned int a2, unsigned int a3);
// [0x1a746f0] (49 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getIterator(void)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getIterator( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this);
// [0x1a74730] (14 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getKey(Dummy *)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getKey( uint32_t *a1, int a2);
// [0x1a74740] (15 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getValue(Dummy *)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getValue( uint32_t *a1, int a2);
// [0x1a74750] (19 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::setValue(Dummy *,unsigned long)
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::setValue( int *a1, int a2, int a3);
// [0x1a74770] (49 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getNext(Dummy *)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getNext( uint32_t *a1, int a2);
// [0x1a747b0] (53 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getNext(Dummy *,unsigned long)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getNext( uint32_t *a1, int a2, int a3);
// [0x1a747f0] (21 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::isValid(Dummy *)const
// bool *hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::isValid( bool *a1, int a2, int a3);
// [0x1a74810] (70 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findKey(unsigned long)const
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findKey( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1a74860] (87 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findKeyWithValue(unsigned long,unsigned long)const
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findKeyWithValue( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, unsigned int a2, unsigned int a3);
// [0x1a748c0] (60 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::hasKey(unsigned long)const
// hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::hasKey( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *a2, unsigned int a3);
// [0x1a74900] (80 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getWithDefault(unsigned long,unsigned long)const
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getWithDefault( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, unsigned int a2, unsigned int a3);
// [0x1a74950] (80 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::get(unsigned long,unsigned long *)const
// hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::get( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *a2, unsigned int *a3, uint32_t *a4);
// [0x1a749a0] (208 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::remove(Dummy *)
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::remove( int64_t a1);
// [0x1a74a70] (112 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::removeAll(unsigned long)
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::removeAll( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1a74ae0] (102 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::remove(unsigned long)
// hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::remove( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *a2, unsigned int a3);
// [0x1a74b50] (110 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::remove(unsigned long,unsigned long)
// hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::remove( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *a2, unsigned int a3, unsigned int a4);
// [0x1a74bc0] (15 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getSize(void)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getSize( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this);
// [0x1a74bd0] (16 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getCapacity(void)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getCapacity( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this);
// [0x1a74be0] (18 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getMemSize(void)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getMemSize( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this);
// [0x1a74c00] (11 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getMemStart(void)const
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getMemStart( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this);
// [0x1a74c10] (94 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::isOk(void)const
// hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::isOk( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, int **a2);
// [0x1a74c70] (57 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::clear(void)
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::clear( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this);
// [0x1a74cb0] (78 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::hkMultiMap(void)
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::hkMultiMap( hkMultiMap_Raw *this);
// [0x1a74d00] (129 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::hkMultiMap(int)
// void hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::hkMultiMap( hkMultiMap_Raw *this, int a2);
// [0x1a74d90] (47 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::swap(hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>&)
// hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::swap( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *a2);
// [0x1a74dc0] (21 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::wasReallocated(void)const
// int64_t hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::wasReallocated( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, int a2);
// [0x1a74de0] (32 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getSizeInBytesFor(int)
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getSizeInBytesFor( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this);
// [0x1a74e00] (279 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::resizeTable(int)
// hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::resizeTable( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *a2, int a3);
// [0x1a74f20] (155 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::insert(unsigned long,unsigned long)
// int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::insert( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, unsigned int a2, unsigned int a3);
// [0x1a74fc0] (239 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::tryInsert(unsigned long,unsigned long)
// hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::tryInsert( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, uint32_t *a2, unsigned int a3, int a4);
// [0x1a750b0] (182 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findOrInsertKey(unsigned long,unsigned long)
// unsigned int hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findOrInsertKey( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, unsigned int a2, unsigned int a3);
// [0x1a75170] (84 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::reserve(int)
// hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::reserve( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this, int a2);
// [0x1a751d0] (15 bytes) hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::isPower2(unsigned int)
// bool hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::isPower2( hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator> *this);
// [0x1a751e0] (57 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new(unsigned int)
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new();
// [0x1a75220] (71 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete(void *,unsigned int)
// void hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete( void *a1);
// [0x1a75270] (11 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new(unsigned int,void *)
// unsigned int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1a75280] (11 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new[](unsigned int,void *)
// unsigned int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new[]( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, unsigned int a2);
// [0x1a75290] (9 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete(void *,void *)
// void hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete();
// [0x1a752a0] (9 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete[](void *,void *)
// void hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete[]();
// [0x1a752b0] (80 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMultiMap(void *,int)
// void hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMultiMap( hkMultiMap_Raw *this, char *a2, unsigned int a3);
// [0x1a75300] (68 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::~hkMultiMap()
// void hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::~hkMultiMap( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this);
// [0x1a75350] (131 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findNumEntries(unsigned long long)const
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findNumEntries( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2);
// [0x1a753e0] (176 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findNumEntries(unsigned long long,unsigned long long)const
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findNumEntries( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2, uint64_t a3);
// [0x1a75490] (66 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getIterator(void)const
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getIterator( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this);
// [0x1a754e0] (19 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getKey(Dummy *)const
// int64_t hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getKey( uint32_t *a1, int a2);
// [0x1a75500] (20 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getValue(Dummy *)const
// int64_t hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getValue( uint32_t *a1, int a2);
// [0x1a75520] (28 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::setValue(Dummy *,unsigned long long)
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::setValue( uint32_t *a1, int a2, int a3, int a4);
// [0x1a75540] (81 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getNext(Dummy *)const
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getNext( uint32_t *a1, int a2);
// [0x1a755a0] (95 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getNext(Dummy *,unsigned long long)const
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getNext( uint32_t *a1, int a2, int64_t a3);
// [0x1a75600] (21 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::isValid(Dummy *)const
// bool *hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::isValid( bool *a1, int a2, int a3);
// [0x1a75620] (130 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findKey(unsigned long long)const
// unsigned int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findKey( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2);
// [0x1a756b0] (155 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findKeyWithValue(unsigned long long,unsigned long long)const
// unsigned int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findKeyWithValue( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2, uint64_t a3);
// [0x1a75750] (68 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::hasKey(unsigned long long)const
// hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::hasKey( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2, unsigned int a3);
// [0x1a757a0] (174 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getWithDefault(unsigned long long,unsigned long long)const
// uint64_t hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getWithDefault( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2, uint64_t a3);
// [0x1a75850] (96 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::get(unsigned long long,unsigned long long *)const
// hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::get( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2, uint64_t *a3, uint32_t *a4);
// [0x1a758b0] (319 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::remove(Dummy *)
// unsigned int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::remove( int *a1, unsigned int a2);
// [0x1a759f0] (173 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::removeAll(unsigned long long)
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::removeAll( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2);
// [0x1a75aa0] (110 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::remove(unsigned long long)
// hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::remove( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2, unsigned int a3);
// [0x1a75b10] (126 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::remove(unsigned long long,unsigned long long)
// hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::remove( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2, uint64_t a3, unsigned int a4);
// [0x1a75b90] (15 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getSize(void)const
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getSize( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this);
// [0x1a75ba0] (16 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getCapacity(void)const
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getCapacity( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this);
// [0x1a75bb0] (14 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getMemSize(void)const
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getMemSize( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this);
// [0x1a75bc0] (11 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getMemStart(void)const
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getMemStart( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this);
// [0x1a75bd0] (188 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::isOk(void)const
// hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::isOk( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, int64_t **a2);
// [0x1a75c90] (68 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::clear(void)
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::clear( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this);
// [0x1a75ce0] (78 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMultiMap(void)
// void hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMultiMap( hkMultiMap_Raw *this);
// [0x1a75d30] (129 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMultiMap(int)
// void hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMultiMap( hkMultiMap_Raw *this, int a2);
// [0x1a75dc0] (47 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::swap(hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>&)
// hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::swap( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *a2);
// [0x1a75df0] (21 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::wasReallocated(void)const
// int64_t hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::wasReallocated( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, int a2);
// [0x1a75e10] (32 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getSizeInBytesFor(int)
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getSizeInBytesFor( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this);
// [0x1a75e30] (320 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::resizeTable(int)
// hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::resizeTable( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *a2, int a3);
// [0x1a75f70] (220 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::insert(unsigned long long,unsigned long long)
// int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::insert( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2, uint64_t a3);
// [0x1a76050] (287 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::tryInsert(unsigned long long,unsigned long long)
// hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::tryInsert( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2, uint64_t a3, int a4);
// [0x1a76170] (84 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::reserve(int)
// hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::reserve( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, int a2);
// [0x1a761d0] (310 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findOrInsertKey(unsigned long long,unsigned long long)
// unsigned int hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findOrInsertKey( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this, uint64_t a2, uint64_t a3);
// [0x1a76310] (15 bytes) hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::isPower2(unsigned int)
// bool hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::isPower2( hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator> *this);
// [0x1a76320] (50 bytes) hkUnionFind::clear(void)
// int hkUnionFind::clear(hkUnionFind *this);
// [0x1a76360] (54 bytes) hkUnionFind::hkUnionFind(hkFixedArray<int> &,int)
// int hkUnionFind::hkUnionFind(hkUnionFind *a1, int a2, int a3);
// [0x1a763a0] (72 bytes) hkUnionFind::findRootOfNode(int)
// int hkUnionFind::findRootOfNode(hkUnionFind *this, int a2);
// [0x1a763f0] (73 bytes) hkUnionFind::unionRoots(int,int)
// int hkUnionFind::unionRoots(hkUnionFind *this, int a2, int a3);
// [0x1a76440] (333 bytes) hkUnionFind::addEdge(int,int)
// int hkUnionFind::addEdge(hkUnionFind *this, int a2, int a3);
// [0x1a76590] (95 bytes) hkUnionFind::merge(hkUnionFind const&)
// int hkUnionFind::merge(hkUnionFind *this, const hkUnionFind *a2);
// [0x1a765f0] (142 bytes) hkUnionFind::collapseTree(void)
// int hkUnionFind::collapseTree(hkUnionFind *this);
// [0x1a76680] (243 bytes) hkUnionFind::assignGroups(hkArray<int,hkContainerHeapAllocator> &)
// hkUnionFind *hkUnionFind::assignGroups( hkUnionFind *this, hkArray<int, hkContainerHeapAllocator> *a2, int *a3);
// [0x1a76780] (672 bytes) hkUnionFind::moveBiggestGroupToIndexZero(hkArray<int,hkContainerHeapAllocator> &)
// int hkUnionFind::moveBiggestGroupToIndexZero( unsigned int this, hkArray<int, hkContainerHeapAllocator> *a2, signed int a3, int a4);
// [0x1a76a20] (436 bytes) hkUnionFind::reindex(hkFixedArray<int> const&,int,hkArray<int,hkContainerHeapAllocator> &)
// int hkUnionFind::reindex(int a1, uint32_t *a2, int a3, int *a4);
// [0x1a76be0] (465 bytes) hkUnionFind::sortByGroupId(hkArray<int,hkContainerHeapAllocator> const&,hkArray<int,hkContainerHeapAllocator>&)const
// hkUnionFind *hkUnionFind::sortByGroupId( hkUnionFind *this, const hkArray<int, hkContainerHeapAllocator> *a2, hkArray<int, hkContainerHeapAllocator> *a3, int *a4);
// [0x1a76dc0] (29 bytes) hkHardwareInfo::~hkHardwareInfo()
// void hkHardwareInfo::~hkHardwareInfo(hkHardwareInfo *this);
// [0x1a76de0] (96 bytes) hkHardwareInfo::~hkHardwareInfo()
// void hkHardwareInfo::~hkHardwareInfo(hkHardwareInfo *this);
// [0x1a76e40] (85 bytes) hkHardwareInfo::calcNumHardwareThreads(void)
// int hkHardwareInfo::calcNumHardwareThreads();
// [0x1a76ea0] (61 bytes) hkHardwareInfo::hkHardwareInfo(void)
// void hkHardwareInfo::hkHardwareInfo(hkHardwareInfo *this);
// [0x1a76f80] (1075 bytes) hkSweptTransformUtil::lerp2(hkSweptTransformf const&,hkSimdFloat32 const&,hkTransformf &)
// hkRotationf *hkSweptTransformUtil::lerp2(float *a1, float *a2, float *a3);
// [0x1a773c0] (64 bytes) hkSweptTransformUtil::lerp2(hkSweptTransformf const&,float,hkTransformf &)
// hkRotationf *hkSweptTransformUtil::lerp2(hkSweptTransformUtil *this, const hkSweptTransformf *a2, float *a3);
// [0x1a77400] (1083 bytes) hkSweptTransformUtil::lerp2Ha(hkSweptTransformf const&,hkSimdFloat32 const&,hkSimdFloat32 const&,hkTransformf &)
// hkRotationf *hkSweptTransformUtil::lerp2Ha(float *a1, float *a2, float *a3, float *a4);
// [0x1a77840] (83 bytes) hkSweptTransformUtil::lerp2Ha(hkSweptTransformf const&,float,float,hkTransformf &)
// hkRotationf *hkSweptTransformUtil::lerp2Ha( hkSweptTransformUtil *this, const hkSweptTransformf *a2, float a3, float *a4);
// [0x1a778a0] (1043 bytes) hkSweptTransformUtil::lerp2Rel(hkSweptTransformf const&,hkSimdFloat32 const&,hkTransformf &)
// float *hkSweptTransformUtil::lerp2Rel(int a1, float *a2, float *a3);
// [0x1a77cc0] (1043 bytes) hkSweptTransformUtil::lerp2Rel(hkSweptTransformf const&,float,hkTransformf &)
// hkRotationf *hkSweptTransformUtil::lerp2Rel(hkSweptTransformUtil *this, const hkSweptTransformf *a2, float *a3);
// [0x1a780e0] (1443 bytes) hkSweptTransformUtil::backStepMotionState(hkSimdFloat32 const&,hkMotionState &)
// hkRotationf *hkSweptTransformUtil::backStepMotionState(unsigned int *a1, int a2);
// [0x1a78690] (57 bytes) hkSweptTransformUtil::backStepMotionState(float,hkMotionState &)
// hkRotationf *hkSweptTransformUtil::backStepMotionState(hkSweptTransformUtil *this, int a2);
// [0x1a786d0] (1371 bytes) hkSweptTransformUtil::freezeMotionState(hkSimdFloat32 const&,hkMotionState &)
// hkRotationf *hkSweptTransformUtil::freezeMotionState(unsigned int *a1, int a2);
// [0x1a78c30] (57 bytes) hkSweptTransformUtil::freezeMotionState(float,hkMotionState &)
// hkRotationf *hkSweptTransformUtil::freezeMotionState(hkSweptTransformUtil *this, int a2);
// [0x1a78c70] (31 bytes) hkSweptTransformUtil::setTimeInformation(hkSimdFloat32 const&,hkSimdFloat32 const&,hkMotionState &)
// int hkSweptTransformUtil::setTimeInformation(uint32_t *a1, uint32_t *a2, int a3);
// [0x1a78c90] (312 bytes) hkSweptTransformUtil::warpTo(hkVector4f const&,hkQuaternionf const&,hkMotionState &)
// int hkSweptTransformUtil::warpTo(hkSweptTransformUtil *this, const hkVector4f *a2, const hkQuaternionf *a3);
// [0x1a78dd0] (387 bytes) hkSweptTransformUtil::warpTo(hkTransformf const&,hkMotionState &)
// int hkSweptTransformUtil::warpTo(hkSweptTransformUtil *this, const hkTransformf *a2);
// [0x1a78f60] (251 bytes) hkSweptTransformUtil::warpToPosition(hkVector4f const&,hkMotionState &)
// const hkVector4f *hkSweptTransformUtil::warpToPosition(hkSweptTransformUtil *this, const hkVector4f *a2);
// [0x1a79060] (49 bytes) hkSweptTransformUtil::warpToRotation(hkQuaternionf const&,hkMotionState &)
// int hkSweptTransformUtil::warpToRotation(hkSweptTransformUtil *this, const hkQuaternionf *a2);
// [0x1a790a0] (948 bytes) hkSweptTransformUtil::keyframeMotionState(hkStepInfo const&,hkVector4f const&,hkQuaternionf const&,hkMotionState &)
// hkRotationf *hkSweptTransformUtil::keyframeMotionState(uint32_t *a1, uint32_t *a2, float *a3, int a4);
// [0x1a79460] (246 bytes) hkSweptTransformUtil::setCentreOfRotationLocal(hkVector4f const&,hkMotionState &)
// const hkVector4f *hkSweptTransformUtil::setCentreOfRotationLocal( hkSweptTransformUtil *this, const hkVector4f *a2);
// [0x1a79560] (68 bytes) hkRefVariant::hkRefVariant(void *,hkClass const*)
// void hkRefVariant::hkRefVariant(hkRefVariant *this, uint32_t *a2);
// [0x1a795b0] (68 bytes) hkRefVariant::hkRefVariant(hkVariant const&)
// uint32_t *hkRefVariant::hkRefVariant(uint32_t *a1, int *a2);
// [0x1a79600] (146 bytes) hkRefVariant::set(void *,hkClass const*)
// int hkRefVariant::set(hkRefVariant *this, int32_t *a2);
// [0x1a796a0] (60 bytes) hkRefVariant::getClass(void)const
// int hkRefVariant::getClass(hkRefVariant *this);
// [0x1a79780] (68 bytes) hkJobQueueHwSetup::hkJobQueueHwSetup(void)
// void hkJobQueueHwSetup::hkJobQueueHwSetup(hkJobQueueHwSetup *this);
// [0x1a797d0] (542 bytes) hkJobQueue::~hkJobQueue()
// void hkJobQueue::~hkJobQueue(pthread_mutex_t *this);
// [0x1a799f0] (1797 bytes) hkJobQueue::updateJobQueryRules(void)
// void hkJobQueue::updateJobQueryRules(hkJobQueue *this);
// [0x1a7a100] (232 bytes) hkJobQueue::registerJobWithCpuThread(hkJobType,unsigned char,int)
// void hkJobQueue::registerJobWithCpuThread(hkJobQueue *a1, int a2, char a3, int a4);
// [0x1a7a1f0] (1873 bytes) hkJobQueue::hkJobQueue(hkJobQueueCinfo const&)
// void hkJobQueue::hkJobQueue(pthread_mutex_t *a1, int a2);
// [0x1a7a950] (9 bytes) hkJobQueue::setQueueCapacityForCpuCache(int)
// void hkJobQueue::setQueueCapacityForCpuCache();
// [0x1a7a960] (17 bytes) hkJobQueue::setExternalProfiler(hkExternalJobProfiler *)
// int hkJobQueue::setExternalProfiler(int a1, int a2);
// [0x1a7a980] (93 bytes) hkJobQueue::getQueueIndexForJob(hkJob const&)
// int hkJobQueue::getQueueIndexForJob(int a1, uint8_t *a2);
// [0x1a7a9e0] (133 bytes) hkJobQueue::lockQueue(char *)
// int hkJobQueue::lockQueue(pthread_mutex_t *this);
// [0x1a7aa70] (95 bytes) hkJobQueue::unlockQueue(hkJobQueue::DynamicData *)
// int hkJobQueue::unlockQueue(pthread_mutex_t *mutex);
// [0x1a7aad0] (1169 bytes) hkJobQueue::setQueueCapacityForJobType(hkJobType,int)
// int hkJobQueue::setQueueCapacityForJobType(pthread_mutex_t *a1, int a2, int a3);
// [0x1a7af70] (342 bytes) hkJobQueue::releaseOneWaitingThread(hkJobQueue::DynamicData *)
// int hkJobQueue::releaseOneWaitingThread(uint32_t *a1, int a2);
// [0x1a7b0d0] (107 bytes) hkJobQueue::checkQueueAndReleaseOneWaitingThread(int,hkJobQueue::DynamicData *)
// int hkJobQueue::checkQueueAndReleaseOneWaitingThread(uint32_t *a1, int a2, int a3);
// [0x1a7b140] (1745 bytes) hkJobQueue::addJobQueueLocked(hkJobQueue::DynamicData *,hkJobQueue::JobQueueEntry const&,hkJobQueue::JobPriority)
// int hkJobQueue::addJobQueueLocked(uint32_t *a1, int a2, uint8_t *a3, int a4);
// [0x1a7b820] (94 bytes) hkJobQueue::addJob(hkJobQueue::JobQueueEntry &,hkJobQueue::JobPriority)
// int hkJobQueue::addJob(pthread_mutex_t *a1, uint8_t *a2, int a3);
// [0x1a7b880] (82 bytes) hkJobQueue::addJob(hkJob &,hkJobQueue::JobPriority)
// int hkJobQueue::addJob(pthread_mutex_t *a1, uint16_t *a2, int a3);
// [0x1a7b8e0] (2052 bytes) hkJobQueue::addJobBatch(hkArrayBase<hkJob *> const&,hkJobQueue::JobPriority)
// int hkJobQueue::addJobBatch(pthread_mutex_t *a1, uint32_t *a2, int a3);
// [0x1a7c0f0] (13 bytes) hkJobQueue::getWaitPolicy(void)
// int hkJobQueue::getWaitPolicy(hkJobQueue *this);
// [0x1a7c100] (13 bytes) hkJobQueue::getMasterThreadFinishingFlags(void)
// int hkJobQueue::getMasterThreadFinishingFlags(hkJobQueue *this);
// [0x1a7c110] (130 bytes) hkJobQueue::setMasterThreadFinishingFlags(int)
// int hkJobQueue::setMasterThreadFinishingFlags(pthread_mutex_t *this, int a2);
// [0x1a7c1a0] (2054 bytes) hkJobQueue::finishJob(hkJobQueue::JobQueueEntry const*,hkJobQueue::FinishJobFlag)
// int hkJobQueue::finishJob( pthread_mutex_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, uint32_t *a11, int a12, int a13, int a14, int a15, int16_t a16);
// [0x1a7c9b0] (43 bytes) hkJobQueue::registerJobHandler(hkJobType,hkJobQueue::hkJobHandlerFuncs)
// uint32_t *hkJobQueue::registerJobHandler(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x1a7c9e0] (106 bytes) hkJobQueue::releaseWaitingThreads(hkJobQueue::DynamicData *)
// int hkJobQueue::releaseWaitingThreads(int a1, int a2);
// [0x1a7ca50] (99 bytes) hkJobQueue::setWaitPolicy(hkJobQueue::WaitPolicy)
// int hkJobQueue::setWaitPolicy(pthread_mutex_t *a1, int a2);
// [0x1a7cac0] (3837 bytes) hkJobQueue::finishJobAndGetNextJob(hkJobQueue::JobQueueEntry const*,hkJobQueue::JobQueueEntry&,hkJobQueue::WaitStatus)
// int hkJobQueue::finishJobAndGetNextJob(pthread_mutex_t *a1, uint8_t *a2, int a3, int a4);
// [0x1a7d9c0] (58 bytes) hkJobQueue::getNextJob(hkJobQueue::JobQueueEntry &,hkJobQueue::WaitStatus)
// int hkJobQueue::getNextJob(pthread_mutex_t *a1, int a2, int a3);
// [0x1a7da00] (539 bytes) hkJobQueue::processAllJobs(bool)
// int hkJobQueue::processAllJobs(pthread_mutex_t *this, bool a2);
// [0x1a7dc20] (3656 bytes) hkJobQueue::finishAddAndGetNextJob(hkJobType,hkJobQueue::JobPriority,hkJobQueue::JobQueueEntry &,hkJobQueue::WaitStatus)
// int hkJobQueue::finishAddAndGetNextJob(pthread_mutex_t *a1, int a2, int a3, uint8_t *a4, int a5);
// [0x1a7ea70] (9 bytes) hkJobQueue::setNumRunningSpus(int)
// void hkJobQueue::setNumRunningSpus();
// [0x1a7ea80] (12 bytes) hkJobQueue::setSpuSchedulingPolicy(hkJobQueueHwSetup::SpuSchedulePolicy)
// int hkJobQueue::setSpuSchedulingPolicy(int a1);
// [0x1a7ea90] (686 bytes) hkSweptTransformf::approxTransformAt(hkSimdFloat32 const&,hkTransformf &)const
// hkRotationf *hkSweptTransformf::approxTransformAt(int a1, float *a2, int a3);
// [0x1a7ed40] (684 bytes) hkSweptTransformf::approxTransformAt(float,hkTransformf &)const
// hkRotationf *hkSweptTransformf::approxTransformAt(hkSweptTransformf *this, float a2, hkTransformf *a3);
// [0x1a7eff0] (151 bytes) hkSweptTransformf::initSweptTransform(hkVector4f const&,hkQuaternionf const&)
// hkSweptTransformf *hkSweptTransformf::initSweptTransform( hkSweptTransformf *this, const hkVector4f *a2, const hkQuaternionf *a3);
// [0x1a7f090] (166 bytes) hkSmallArrayUtil::_reserve(void *,int,int)
// void *hkSmallArrayUtil::_reserve(const void **this, void *a2, int a3);
// [0x1a7f140] (201 bytes) hkSmallArrayUtil::_reserveMore(void *,int)
// void *hkSmallArrayUtil::_reserveMore(const void **this, void *a2);
// [0x1a7f210] (425 bytes) hkSemaphore::hkSemaphore(int,int,int)
// void hkSemaphore::hkSemaphore(hkSemaphore *this, int a2, int a3, int a4);
// [0x1a7f3c0] (177 bytes) hkSemaphore::~hkSemaphore()
// void hkSemaphore::~hkSemaphore(hkSemaphore *this);
// [0x1a7f480] (305 bytes) hkSemaphore::acquire(void)
// int hkSemaphore::acquire(hkSemaphore *this);
// [0x1a7f5c0] (433 bytes) hkSemaphore::release(int)
// int hkSemaphore::release(hkSemaphore *this, int a2);
// [0x1a7f780] (34 bytes) hkSemaphore::acquire(hkSemaphore*)
// int hkSemaphore::acquire(hkSemaphore *this);
// [0x1a7f7b0] (42 bytes) hkSemaphore::release(hkSemaphore*,int)
// int hkSemaphore::release(hkSemaphore *this, hkSemaphore *a2);
// [0x1a7f7e0] (53 bytes) hkVtableClassRegistry::getClassFromVtable(void const*)
// unsigned int hkVtableClassRegistry::getClassFromVtable(hkVtableClassRegistry *this, const void *a2);
// [0x1a7f820] (55 bytes) hkVtableClassRegistry::getClassFromVirtualInstance(void const*)const
// unsigned int hkVtableClassRegistry::getClassFromVirtualInstance(hkVtableClassRegistry *this, unsigned int *a2);
// [0x1a7f860] (213 bytes) hkVtableClassRegistry::getClasses(hkArray<hkClass const*,hkContainerHeapAllocator> &)const
// uint32_t *hkVtableClassRegistry::getClasses(int a1, hkMemoryAllocator *a2);
// [0x1a7f940] (63 bytes) hkVtableClassRegistry::registerVtable(void const*,hkClass const*)
// int hkVtableClassRegistry::registerVtable(hkVtableClassRegistry *this, const void *a2, const hkClass *a3);
// [0x1a7f980] (81 bytes) hkVtableClassRegistry::~hkVtableClassRegistry()
// void hkVtableClassRegistry::~hkVtableClassRegistry(hkVtableClassRegistry *this);
// [0x1a7fa40] (136 bytes) hkVtableClassRegistry::~hkVtableClassRegistry()
// void hkVtableClassRegistry::~hkVtableClassRegistry(hkVtableClassRegistry *this);
// [0x1a7fad0] (82 bytes) hkVtableClassRegistry::registerList(hkTypeInfo const* const*,hkClass const* const*)
// const hkTypeInfo *hkVtableClassRegistry::registerList( hkVtableClassRegistry *this, const hkTypeInfo *const *a2, const hkClass *const *a3);
// [0x1a7fb30] (168 bytes) hkVtableClassRegistry::merge(hkVtableClassRegistry const&)
// uint32_t *hkVtableClassRegistry::merge(hkVtableClassRegistry *this, const hkVtableClassRegistry *a2);
// [0x1a7fc30] (750 bytes) hkRadixSort::sort16(hkRadixSort::SortData16 *,int,hkRadixSort::SortData16 *)
// int hkRadixSort::sort16(int a1, int a2, int a3);
// [0x1a7ff20] (1466 bytes) hkRadixSort::sort32(hkRadixSort::SortData32 *,int,hkRadixSort::SortData32 *)
// int hkRadixSort::sort32(uint8_t *a1, int a2, uint8_t *a3);
// [0x1a804e0] (3514 bytes) hkRadixSort::sort64(hkRadixSort::SortData64 *,int,hkRadixSort::SortData64 *)
// uint8_t *hkRadixSort::sort64(uint8_t *a1, int a2, uint8_t *a3);
// [0x1a813a0] (3610 bytes) hkVdbStreamReportUtil::generateReport(hkTrackerScanSnapshot const*,hkOstream &)
// void hkVdbStreamReportUtil::generateReport(hkVdbStreamReportUtil *this, const hkTrackerScanSnapshot *a2);
// [0x1a823a0] (52 bytes) hkAndroidGetCpuFamily(void)
// int hkAndroidGetCpuFamily();
// [0x1a823e0] (58 bytes) hkAndroidGetCpuFeatures(void)
// int64_t hkAndroidGetCpuFeatures();
// [0x1a82420] (52 bytes) hkAndroidGetCpuCount(void)
// int hkAndroidGetCpuCount();
// [0x1a82800] (1511 bytes) hk1AxisSweep::collide(hk1AxisSweep::AabbInt const*,int,hk1AxisSweep::AabbInt const*,int,hkKeyPair *,int,hkPadSpu<int> &)
// int hk1AxisSweep::collide(unsigned int *a1, int a2, unsigned int *a3, int a4, char *a5, int a6, uint32_t *a7);
// [0x1a82df0] (2091 bytes) hk1AxisSweep::collide(hk1AxisSweep::AabbInt const*,int,hk1AxisSweep::AabbInt const*,int,hkArray<hkKeyPair,hkContainerHeapAllocator> &)
// unsigned int hk1AxisSweep::collide(unsigned int *a1, int a2, unsigned int *a3, int a4, hkMemoryAllocator *a5);
// [0x1a83620] (748 bytes) hk1AxisSweep::collide(hk1AxisSweep::AabbInt const*,int,hkKeyPair *,int,hkPadSpu<int> &)
// int hk1AxisSweep::collide(int a1, int a2, uint32_t *a3, int a4, uint32_t *a5);
