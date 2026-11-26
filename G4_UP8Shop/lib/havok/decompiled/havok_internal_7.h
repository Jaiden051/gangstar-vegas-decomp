#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_internal_7.h
// Library: havok | Module: havok_internal_7
// Binary Address Span: 0x18d02d0 .. 0x18ed7a0 (110 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x18d02d0] (500 bytes) void hkDataWorldCloner::copySimpleValue<hkDataArray_Value>(hkDataArray_Value,hkDataArray_Value const&)
// hkTypeManager::Type *hkDataWorldCloner::copySimpleValue<hkDataArray_Value>( hkDataObject *a1, int a2, int a3, uint32_t *a4);
// [0x18d0df0] (516 bytes) void hkDataWorldCloner::copySimpleValue<hkDataObject_Value>(hkDataObject_Value,hkDataObject_Value const&)
// hkTypeManager::Type *hkDataWorldCloner::copySimpleValue<hkDataObject_Value>( hkDataObject *a1, int a2, int a3, hkDataObject_Value *a4);
// [0x18d15e0] (514 bytes) sub_18D15E0
// hkLifoAllocator *sub_18D15E0(hkOArchive *a1, int a2, unsigned int a3, char *a4);
// [0x18d17f0] (234 bytes) sub_18D17F0
// hkLifoAllocator *sub_18D17F0(int a1);
// [0x18d18e0] (2110 bytes) sub_18D18E0
// hkClass *sub_18D18E0(hkClass *a1, hkClass *a2, hkClassMember *a3, const void **a4, int a5);
// [0x18d5f80] (1442 bytes) sub_18D5F80
// int sub_18D5F80(int *a1, int a2, float a3, int a4);
// [0x18d8f40] (319 bytes) sub_18D8F40
// int sub_18D8F40(int a1);
// [0x18d9580] (7 bytes) `non-virtual thunk to'hkServerProcessHandler::getProcessTag(void)
// int `non-virtual thunk to'hkServerProcessHandler::getProcessTag();
// [0x18d95c0] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::getConsumableCommands(unsigned char *&,int &)
// int *`non-virtual thunk to'hkServerProcessHandler::getConsumableCommands( hkServerProcessHandler *this, uint8_t **a2, int *a3);
// [0x18d9630] (7 bytes) `non-virtual thunk to'hkServerProcessHandler::getProcessId(char const*)
// int `non-virtual thunk to'hkServerProcessHandler::getProcessId(hkServerProcessHandler *this, char *a2);
// [0x18d9670] (7 bytes) `non-virtual thunk to'hkServerProcessHandler::getProcessName(int)
// int `non-virtual thunk to'hkServerProcessHandler::getProcessName(hkServerProcessHandler *this, int a2);
// [0x18d96f0] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::selectProcess(int)
// hkServerProcessHandler *`non-virtual thunk to'hkServerProcessHandler::selectProcess( hkServerProcessHandler *this, int a2, int a3);
// [0x18d97b0] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::registerProcess(char const*,int)
// hkServerProcessHandler *`non-virtual thunk to'hkServerProcessHandler::registerProcess( hkServerProcessHandler *this, hkOArchive **a2, hkString *a3, int a4);
// [0x18d9880] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::step(float)
// int `non-virtual thunk to'hkServerProcessHandler::step(hkServerProcessHandler *this, float a2);
// [0x18d9a40] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::~hkServerProcessHandler()
// void `non-virtual thunk to'hkServerProcessHandler::~hkServerProcessHandler(hkServerProcessHandler *this);
// [0x18d9a50] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::~hkServerProcessHandler()
// void `non-virtual thunk to'hkServerProcessHandler::~hkServerProcessHandler(hkServerProcessHandler *this);
// [0x18d9b50] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::consumeCommand(unsigned char)
// int `non-virtual thunk to'hkServerProcessHandler::consumeCommand(hkIArchive **this, int a2);
// [0x18d9c40] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::~hkServerProcessHandler()
// void `non-virtual thunk to'hkServerProcessHandler::~hkServerProcessHandler(hkServerProcessHandler *this);
// [0x18d9c50] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::~hkServerProcessHandler()
// void `non-virtual thunk to'hkServerProcessHandler::~hkServerProcessHandler(hkServerProcessHandler *this);
// [0x18da110] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::getProcessByName(char const*)
// int `non-virtual thunk to'hkServerProcessHandler::getProcessByName( hkServerProcessHandler *this, const char *a2);
// [0x18da1a0] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::deleteProcess(int)
// hkServerProcessHandler *`non-virtual thunk to'hkServerProcessHandler::deleteProcess( hkServerProcessHandler *this, int a2, int a3);
// [0x18da2c0] (10 bytes) `non-virtual thunk to'hkServerProcessHandler::createProcess(int)
// hkServerProcessHandler *`non-virtual thunk to'hkServerProcessHandler::createProcess( hkServerProcessHandler *this, int a2, int a3);
// [0x18da670] (71 bytes) sub_18DA670
// hkDebugDisplay *sub_18DA670();
// [0x18de650] (70 bytes) sub_18DE650
// uint32_t *sub_18DE650();
// [0x18df190] (7 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::setGeometryVisibility(int,bool,unsigned long,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::setGeometryVisibility( hkServerDebugDisplayHandler *this, int a2, bool a3, unsigned int a4, int a5);
// [0x18df1b0] (7 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::getProcessTag(void)
// int `non-virtual thunk to'hkServerDebugDisplayHandler::getProcessTag();
// [0x18df1d0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::displayPoint2d(hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::displayPoint2d( hkServerDebugDisplayHandler *this, const hkVector4f *a2, unsigned int a3, int a4, int a5);
// [0x18df1f0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::displayLine2d(hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::displayLine2d( hkServerDebugDisplayHandler *this, const hkVector4f *a2, const hkVector4f *a3, unsigned int a4, int a5, int a6);
// [0x18df210] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::displayTriangle2d(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::displayTriangle2d( hkServerDebugDisplayHandler *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, unsigned int a5, int a6, int a7);
// [0x18df230] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::displayText2d(char const*,hkVector4f const&,float,unsigned int,int,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::displayText2d( hkServerDebugDisplayHandler *this, const char *a2, const hkVector4f *a3, float a4, unsigned int a5, int a6, int a7);
// [0x18df270] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::getConsumableCommands(unsigned char *&,int &)
// int *`non-virtual thunk to'hkServerDebugDisplayHandler::getConsumableCommands( hkServerDebugDisplayHandler *this, uint8_t **a2, int *a3);
// [0x18df2a0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::doesSupportHashes(void)const
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::doesSupportHashes( hkServerDebugDisplayHandler *this, int a2);
// [0x18df470] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::updateGeometries(hkTransformf const*,unsigned long const*,int,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::updateGeometries( hkServerDebugDisplayHandler *this, const hkTransformf *a2, const unsigned int *a3, int a4, int a5, int a6);
// [0x18df5e0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::holdImmediate(void)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::holdImmediate( hkServerDebugDisplayHandler *this, int a2);
// [0x18df780] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::removeGeometry(unsigned long,int,unsigned long)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::removeGeometry( hkServerDebugDisplayHandler *this, unsigned int a2, unsigned int a3, unsigned int a4);
// [0x18df930] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::sendMemStatsDump(char const*,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::sendMemStatsDump( hkServerDebugDisplayHandler *this, const char *a2, void *a3, int a4);
// [0x18dfad0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::updateGeometry(hkTransformf const&,unsigned long,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::updateGeometry( hkServerDebugDisplayHandler *this, const hkTransformf *a2, hkTransformf *a3, unsigned int a4, int a5);
// [0x18dfc90] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::setGeometryTransparency(float,unsigned long,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::setGeometryTransparency( hkServerDebugDisplayHandler *this, float a2, float a3, unsigned int a4, int a5);
// [0x18dfe50] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::setGeometryColor(unsigned int,unsigned long,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::setGeometryColor( hkServerDebugDisplayHandler *this, unsigned int a2, unsigned int a3, unsigned int a4, int a5);
// [0x18e0010] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::setGeometryPickable(hkBool,unsigned long,int)
// bool *`non-virtual thunk to'hkServerDebugDisplayHandler::setGeometryPickable( bool *a1, int a2, char a3, unsigned int a4, int a5);
// [0x18e01d0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::updateGeometry(hkMatrix4f const&,unsigned long,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::updateGeometry( hkServerDebugDisplayHandler *this, const hkMatrix4f *a2, float *a3, unsigned int a4, int a5);
// [0x18e03a0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::displayPoint(hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::displayPoint( hkServerDebugDisplayHandler *this, const hkVector4f *a2, hkVector4f *a3, int a4, int a5, int a6);
// [0x18e0580] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::addGeometryInstance(unsigned long,hkTransformf const&,unsigned long,int,unsigned long)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::addGeometryInstance( hkServerDebugDisplayHandler *this, unsigned int a2, const hkTransformf *a3, const hkTransformf *a4, unsigned int a5, unsigned int a6);
// [0x18e0760] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::displayLine(hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::displayLine( hkServerDebugDisplayHandler *this, const hkVector4f *a2, const hkVector4f *a3, hkVector4f *a4, int a5, int a6, int a7);
// [0x18e0940] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::displayBone(hkVector4f const&,hkVector4f const&,hkQuaternionf const&,unsigned int,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::displayBone( hkServerDebugDisplayHandler *this, const hkVector4f *a2, const hkVector4f *a3, const hkQuaternionf *a4, float *a5, int a6, int a7);
// [0x18e0b50] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::displayAnnotation(char const*,int,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::displayAnnotation( hkServerDebugDisplayHandler *this, const char *a2, hkString *a3, int a4, int a5);
// [0x18e0d60] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::displayText(char const*,unsigned int,int,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::displayText( hkServerDebugDisplayHandler *this, const char *a2, hkString *a3, int a4, int a5, int a6);
// [0x18e0f80] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::updateCamera(hkVector4f const&,hkVector4f const&,hkVector4f const&,float,float,float,char const*)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::updateCamera( hkServerDebugDisplayHandler *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, const hkVector4f *a5, float a6, float a7, const char *a8, hkString *a9);
// [0x18e1200] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::display3dText(char const*,hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::display3dText( hkServerDebugDisplayHandler *this, const char *a2, const hkVector4f *a3, float *a4, int a5, int a6, int a7);
// [0x18e1540] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::addGeometryHash(hkReferencedObject const*,hkDisplayGeometryBuilder *,unsigned long long const&,hkAabb const&,unsigned int,hkTransformf const&,unsigned long,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::addGeometryHash( hkServerDebugDisplayHandler *this, pthread_mutex_t **a2, hkDisplayGeometryBuilder *a3, const uint64_t *a4, const hkAabb *a5, hkAabb *a6, const hkTransformf *a7, hkTransformf *a8, unsigned int a9, int a10);
// [0x18e1800] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::skinGeometry(unsigned long *,int,hkMatrix4f const*,int,hkMatrix4f const&,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::skinGeometry( hkServerDebugDisplayHandler *this, unsigned int *a2, int a3, const hkMatrix4f *a4, float *a5, const hkMatrix4f *a6, float *a7, int a8);
// [0x18e1ab0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::displayTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::displayTriangle( hkServerDebugDisplayHandler *this, pthread_mutex_t **a2, const hkVector4f *a3, const hkVector4f *a4, int *a5, int a6, int a7, int a8);
// [0x18e1fa0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler()
// void `non-virtual thunk to'hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler( hkServerDebugDisplayHandler *this);
// [0x18e1fb0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler()
// void `non-virtual thunk to'hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler( hkServerDebugDisplayHandler *this);
// [0x18e2020] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler()
// void `non-virtual thunk to'hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler( hkServerDebugDisplayHandler *this);
// [0x18e2030] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler()
// void `non-virtual thunk to'hkServerDebugDisplayHandler::~hkServerDebugDisplayHandler( hkServerDebugDisplayHandler *this);
// [0x18e25f0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::addGeometry(hkArrayBase<hkDisplayGeometry *> const&,hkTransformf const&,unsigned long,int,unsigned long,hkGeometry::GeometryType)
// bool *`non-virtual thunk to'hkServerDebugDisplayHandler::addGeometry( bool *a1, int a2, uint32_t *a3, hkTransformf *a4, unsigned int a5, int a6, int a7, int a8);
// [0x18e2830] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::displayGeometry(hkArrayBase<hkDisplayGeometry *> const&,hkTransformf const&,unsigned int,int,int)
// bool *`non-virtual thunk to'hkServerDebugDisplayHandler::displayGeometry( bool *a1, int a2, uint32_t *a3, hkTransformf *a4, int a5, int a6, int a7);
// [0x18e2a50] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::displayGeometry(hkArrayBase<hkDisplayGeometry *> const&,unsigned int,int,int)
// bool *`non-virtual thunk to'hkServerDebugDisplayHandler::displayGeometry( bool *a1, int a2, uint32_t *a3, int a4, int a5, int a6);
// [0x18e3010] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::consumeCommand(unsigned char)
// void `non-virtual thunk to'hkServerDebugDisplayHandler::consumeCommand( hkDisplaySerializeIStream **this, uint8_t a2);
// [0x18e38f0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::step(float)
// int `non-virtual thunk to'hkServerDebugDisplayHandler::step(hkServerDebugDisplayHandler *this);
// [0x18e3cd0] (10 bytes) `non-virtual thunk to'hkServerDebugDisplayHandler::addGeometryLazily(hkReferencedObject const*,hkDisplayGeometryBuilder *,hkTransformf const&,unsigned long,int,unsigned long)
// hkServerDebugDisplayHandler *`non-virtual thunk to'hkServerDebugDisplayHandler::addGeometryLazily( hkServerDebugDisplayHandler *this, const hkReferencedObject *a2, hkDisplayGeometryBuilder *a3, const hkTransformf *a4, unsigned int a5, int a6, hkReferencedObject **a7, hkServerDebugDisplayHandler *a8);
// [0x18e4040] (71 bytes) sub_18E4040
// hkProcessFactory *sub_18E4040();
// [0x18e47e0] (70 bytes) sub_18E47E0
// uint32_t *sub_18E47E0();
// [0x18e5b50] (309 bytes) sub_18E5B50
// int sub_18E5B50(int result, int a2, int a3);
// [0x18ea420] (7 bytes) `non-virtual thunk to'hkRemoteObjectProcess::getProcessTag(void)
// int `non-virtual thunk to'hkRemoteObjectProcess::getProcessTag();
// [0x18ea440] (10 bytes) `non-virtual thunk to'hkRemoteObjectProcess::init(void)
// void `non-virtual thunk to'hkRemoteObjectProcess::init();
// [0x18ea480] (10 bytes) `non-virtual thunk to'hkRemoteObjectProcess::getConsumableCommands(unsigned char *&,int &)
// int *`non-virtual thunk to'hkRemoteObjectProcess::getConsumableCommands( hkRemoteObjectProcess *this, uint8_t **a2, int *a3);
// [0x18ea510] (10 bytes) `non-virtual thunk to'hkRemoteObjectProcess::~hkRemoteObjectProcess()
// void `non-virtual thunk to'hkRemoteObjectProcess::~hkRemoteObjectProcess(hkRemoteObjectProcess *this);
// [0x18ea580] (10 bytes) `non-virtual thunk to'hkRemoteObjectProcess::~hkRemoteObjectProcess()
// void `non-virtual thunk to'hkRemoteObjectProcess::~hkRemoteObjectProcess(hkRemoteObjectProcess *this);
// [0x18ea810] (425 bytes) sub_18EA810
// void sub_18EA810(uint32_t *a1);
// [0x18ea9e0] (10 bytes) `non-virtual thunk to'hkRemoteObjectProcess::consumeCommand(unsigned char)
// void `non-virtual thunk to'hkRemoteObjectProcess::consumeCommand(hkRemoteObjectProcess *this, char a2);
// [0x18eaa10] (7 bytes) `non-virtual thunk to'hkDebugDisplayProcess::getProcessTag(void)
// int `non-virtual thunk to'hkDebugDisplayProcess::getProcessTag();
// [0x18eaa80] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::addGeometry(hkArrayBase<hkDisplayGeometry *> const&,hkTransformf const&,unsigned long,int,unsigned long,hkGeometry::GeometryType)
// int `non-virtual thunk to'hkDebugDisplayProcess::addGeometry(int a1, int a2);
// [0x18eaae0] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::addGeometryInstance(unsigned long,hkTransformf const&,unsigned long,int,unsigned long)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::addGeometryInstance( hkDebugDisplayProcess *this, unsigned int a2, const hkTransformf *a3, unsigned int a4, int a5, unsigned int a6);
// [0x18eab30] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::setGeometryPickable(hkBool,unsigned long,int)
// int `non-virtual thunk to'hkDebugDisplayProcess::setGeometryPickable(int a1, int a2);
// [0x18eab90] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::displayGeometry(hkArrayBase<hkDisplayGeometry *> const&,hkTransformf const&,unsigned int,int,int)
// int `non-virtual thunk to'hkDebugDisplayProcess::displayGeometry(int a1, int a2);
// [0x18eabf0] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::displayGeometry(hkArrayBase<hkDisplayGeometry *> const&,unsigned int,int,int)
// int `non-virtual thunk to'hkDebugDisplayProcess::displayGeometry(int a1, int a2);
// [0x18eac50] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::setGeometryVisibility(int,bool,unsigned long,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::setGeometryVisibility( hkDebugDisplayProcess *this, int a2, bool a3, unsigned int a4, int a5);
// [0x18eaca0] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::setGeometryColor(unsigned int,unsigned long,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::setGeometryColor( hkDebugDisplayProcess *this, unsigned int a2, unsigned int a3, int a4);
// [0x18ead00] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::setGeometryTransparency(float,unsigned long,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::setGeometryTransparency( hkDebugDisplayProcess *this, float a2, int64_t a3);
// [0x18ead50] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::updateGeometry(hkTransformf const&,unsigned long,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::updateGeometry( hkDebugDisplayProcess *this, const hkTransformf *a2, unsigned int a3, int a4);
// [0x18eada0] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::updateGeometry(hkMatrix4f const&,unsigned long,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::updateGeometry( hkDebugDisplayProcess *this, const hkMatrix4f *a2, unsigned int a3, int a4);
// [0x18eae10] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::skinGeometry(unsigned long *,int,hkMatrix4f const*,int,hkMatrix4f const&,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::skinGeometry( hkDebugDisplayProcess *this, unsigned int *a2, int a3, const hkMatrix4f *a4, int a5, const hkMatrix4f *a6, int a7);
// [0x18eae80] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::removeGeometry(unsigned long,int,unsigned long)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::removeGeometry( hkDebugDisplayProcess *this, unsigned int a2, int a3, unsigned int a4, int a5);
// [0x18eaf00] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::updateCamera(hkVector4f const&,hkVector4f const&,hkVector4f const&,float,float,float,char const*)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::updateCamera( hkDebugDisplayProcess *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, float a5, int64_t a6, const char *a7);
// [0x18eaf60] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::displayPoint(hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::displayPoint( hkDebugDisplayProcess *this, const hkVector4f *a2, unsigned int a3, int a4, int a5);
// [0x18eafc0] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::displayLine(hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::displayLine( hkDebugDisplayProcess *this, const hkVector4f *a2, const hkVector4f *a3, unsigned int a4, int a5, int a6);
// [0x18eb030] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::displayTriangle(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::displayTriangle( hkDebugDisplayProcess *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, unsigned int a5, int a6, int a7);
// [0x18eb090] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::displayPoint2d(hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::displayPoint2d( hkDebugDisplayProcess *this, const hkVector4f *a2, unsigned int a3, int a4, int a5);
// [0x18eb0f0] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::displayLine2d(hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::displayLine2d( hkDebugDisplayProcess *this, const hkVector4f *a2, const hkVector4f *a3, unsigned int a4, int a5, int a6);
// [0x18eb160] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::displayTriangle2d(hkVector4f const&,hkVector4f const&,hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::displayTriangle2d( hkDebugDisplayProcess *this, const hkVector4f *a2, const hkVector4f *a3, const hkVector4f *a4, unsigned int a5, int a6, int a7);
// [0x18eb1d0] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::displayText2d(char const*,hkVector4f const&,float,unsigned int,int,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::displayText2d( hkDebugDisplayProcess *this, const char *a2, const hkVector4f *a3, float a4, int64_t a5, int a6);
// [0x18eb230] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::displayText(char const*,unsigned int,int,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::displayText( hkDebugDisplayProcess *this, const char *a2, unsigned int a3, int a4, int a5);
// [0x18eb290] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::display3dText(char const*,hkVector4f const&,unsigned int,int,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::display3dText( hkDebugDisplayProcess *this, const char *a2, const hkVector4f *a3, unsigned int a4, int a5, int a6);
// [0x18eb2e0] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::displayAnnotation(char const*,int,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::displayAnnotation( hkDebugDisplayProcess *this, const char *a2, int a3, int a4);
// [0x18eb330] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::sendMemStatsDump(char const*,int)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::sendMemStatsDump( hkDebugDisplayProcess *this, const char *a2, int a3);
// [0x18eb370] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::holdImmediate(void)
// hkDebugDisplayProcess *`non-virtual thunk to'hkDebugDisplayProcess::holdImmediate( hkDebugDisplayProcess *this, int a2);
// [0x18eb400] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::~hkDebugDisplayProcess()
// void `non-virtual thunk to'hkDebugDisplayProcess::~hkDebugDisplayProcess(hkDebugDisplayProcess *this);
// [0x18eb410] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::~hkDebugDisplayProcess()
// void `non-virtual thunk to'hkDebugDisplayProcess::~hkDebugDisplayProcess(hkDebugDisplayProcess *this);
// [0x18eb480] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::~hkDebugDisplayProcess()
// void `non-virtual thunk to'hkDebugDisplayProcess::~hkDebugDisplayProcess(hkDebugDisplayProcess *this);
// [0x18eb490] (10 bytes) `non-virtual thunk to'hkDebugDisplayProcess::~hkDebugDisplayProcess()
// void `non-virtual thunk to'hkDebugDisplayProcess::~hkDebugDisplayProcess(hkDebugDisplayProcess *this);
// [0x18ec7f0] (7 bytes) `non-virtual thunk to'hkInspectProcess::getProcessTag(void)
// int `non-virtual thunk to'hkInspectProcess::getProcessTag();
// [0x18ec830] (10 bytes) `non-virtual thunk to'hkInspectProcess::getConsumableCommands(unsigned char *&,int &)
// int *`non-virtual thunk to'hkInspectProcess::getConsumableCommands( hkInspectProcess *this, uint8_t **a2, int *a3);
// [0x18ecc80] (10 bytes) `non-virtual thunk to'hkInspectProcess::init(void)
// uint8_t *`non-virtual thunk to'hkInspectProcess::init(hkInspectProcess *this);
// [0x18ecd60] (90 bytes) sub_18ECD60
// int sub_18ECD60(void *a1, hkClass *a2, char a3, unsigned int a4, hkOArchive **a5);
// [0x18ecf10] (10 bytes) `non-virtual thunk to'hkInspectProcess::~hkInspectProcess()
// void `non-virtual thunk to'hkInspectProcess::~hkInspectProcess(hkInspectProcess *this);
// [0x18ecf80] (10 bytes) `non-virtual thunk to'hkInspectProcess::~hkInspectProcess()
// void `non-virtual thunk to'hkInspectProcess::~hkInspectProcess(hkInspectProcess *this);
// [0x18ed140] (10 bytes) `non-virtual thunk to'hkInspectProcess::step(float)
// void `non-virtual thunk to'hkInspectProcess::step(hkInspectProcess *this);
// [0x18ed7a0] (10 bytes) `non-virtual thunk to'hkInspectProcess::consumeCommand(unsigned char)
// void `non-virtual thunk to'hkInspectProcess::consumeCommand(hkIArchive **this, uint8_t a2);
