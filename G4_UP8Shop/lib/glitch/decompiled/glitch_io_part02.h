#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_io_part02.h
// Library: glitch | Module: glitch_io_part02
// Binary Address Span: 0xeefe40 .. 0xf1a450 (414 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xeefe40] (176 bytes) glitch::io::CGlfFileSystem::createXMLReaderUTF8(char const*)
// volatile int32_t **glitch::io::CGlfFileSystem::createXMLReaderUTF8( volatile int32_t **this, const char *a2);
// [0xef3dd0] (912 bytes) glitch::io::CAttributes::setAttribute(char const*,wchar_t const*)
// int glitch::io::CAttributes::setAttribute(int ***this, const char *a2, wchar_t *a3);
// [0xef4160] (735 bytes) glitch::io::CAttributes::addString(char const*,wchar_t const*,bool)
// volatile int32_t *glitch::io::CAttributes::addString( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xef4440] (4841 bytes) glitch::io::CBinaryAttributesReader::readAttribute(glitch::io::IAttributes *)
// 0xef4440 glitch::io::CBinaryAttributesReader::readAttribute(glitch::io::IAttributes *)
// [0xef5730] (287 bytes) glitch::io::CBinaryAttributesReader::readGroup(glitch::io::IAttributes *)
// void glitch::io::CBinaryAttributesReader::readGroup( glitch::io::CBinaryAttributesReader *this, glitch::io::IAttributes *a2, int a3, int a4, int a5, int a6, int a7, unsigned int a8, int a9, int a10, int a11, unsigned int a12);
// [0xef5850] (142 bytes) glitch::io::CBinaryAttributesReader::read(glitch::io::IAttributes *)
// 0xef5850 glitch::io::CBinaryAttributesReader::read(glitch::io::IAttributes *)
// [0xef6460] (611 bytes) glitch::io::CXMLAttributesWriter::write(glitch::io::IAttributes *)
// 0xef6460 glitch::io::CXMLAttributesWriter::write(glitch::io::IAttributes *)
// [0xef66d0] (818 bytes) glitch::io::CXMLAttributesReader::read(glitch::io::IAttributes *)
// int glitch::io::CXMLAttributesReader::read( glitch::io::CXMLAttributesReader *this, glitch::io::IAttributes *a2, int a3, wchar_t *a4, int a5, int a6, const wchar_t *a7);
// [0xef81c0] (27 bytes) glitch::io::IAttributesWriter::~IAttributesWriter()
// void glitch::io::IAttributesWriter::~IAttributesWriter(glitch::io::IAttributesWriter *this);
// [0xef81e0] (27 bytes) glitch::io::IAttributesReader::~IAttributesReader()
// void glitch::io::IAttributesReader::~IAttributesReader(glitch::io::IAttributesReader *this);
// [0xef8240] (9 bytes) glitch::io::IAttribute::getInt(void)
// int glitch::io::IAttribute::getInt();
// [0xef8250] (9 bytes) glitch::io::IAttribute::getFloat(void)
// long double glitch::io::IAttribute::getFloat();
// [0xef8260] (35 bytes) glitch::io::IAttribute::getColorf(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getColorf(glitch::io::IAttribute *this);
// [0xef8290] (22 bytes) glitch::io::IAttribute::getColor(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getColor(glitch::io::IAttribute *this);
// [0xef82b0] (29 bytes) glitch::io::IAttribute::getStringW(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getStringW(glitch::io::IAttribute *this);
// [0xef82d0] (27 bytes) glitch::io::IAttribute::getArray(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getArray(glitch::io::IAttribute *this);
// [0xef82f0] (9 bytes) glitch::io::IAttribute::getBool(void)
// int glitch::io::IAttribute::getBool();
// [0xef8300] (9 bytes) glitch::io::IAttribute::getBinary(void *,int)
// void glitch::io::IAttribute::getBinary();
// [0xef8310] (17 bytes) glitch::io::IAttribute::getVector3d(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getVector3d(glitch::io::IAttribute *this);
// [0xef8330] (20 bytes) glitch::io::IAttribute::getVector4d(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getVector4d(glitch::io::IAttribute *this);
// [0xef8350] (18 bytes) glitch::io::IAttribute::getRect(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getRect(glitch::io::IAttribute *this);
// [0xef8370] (35 bytes) glitch::io::IAttribute::getQuaternion(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getQuaternion(glitch::io::IAttribute *this);
// [0xef83a0] (35 bytes) glitch::io::IAttribute::getMatrix2(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getMatrix2(glitch::io::IAttribute *this);
// [0xef83d0] (42 bytes) glitch::io::IAttribute::getMatrix3(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getMatrix3(glitch::io::IAttribute *this);
// [0xef8400] (35 bytes) glitch::io::IAttribute::getTriangle(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getTriangle(glitch::io::IAttribute *this);
// [0xef8430] (14 bytes) glitch::io::IAttribute::getVector2d(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getVector2d(glitch::io::IAttribute *this);
// [0xef8440] (20 bytes) glitch::io::IAttribute::getVector2di(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getVector2di(glitch::io::IAttribute *this);
// [0xef8460] (27 bytes) glitch::io::IAttribute::getVector3di(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getVector3di(glitch::io::IAttribute *this);
// [0xef8480] (18 bytes) glitch::io::IAttribute::getVector4di(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getVector4di(glitch::io::IAttribute *this);
// [0xef84a0] (35 bytes) glitch::io::IAttribute::getLine2d(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getLine2d(glitch::io::IAttribute *this);
// [0xef84d0] (33 bytes) glitch::io::IAttribute::getLine2di(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getLine2di(glitch::io::IAttribute *this);
// [0xef8500] (31 bytes) glitch::io::IAttribute::getLine3d(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getLine3d(glitch::io::IAttribute *this);
// [0xef8520] (48 bytes) glitch::io::IAttribute::getLine3di(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getLine3di(glitch::io::IAttribute *this);
// [0xef8550] (20 bytes) glitch::io::IAttribute::getDimension2d(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getDimension2d(glitch::io::IAttribute *this);
// [0xef8570] (34 bytes) glitch::io::IAttribute::getBBox(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getBBox(glitch::io::IAttribute *this);
// [0xef85a0] (35 bytes) glitch::io::IAttribute::getPlane(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getPlane(glitch::io::IAttribute *this);
// [0xef85d0] (9 bytes) glitch::io::IAttribute::getEnum(void)
// int glitch::io::IAttribute::getEnum();
// [0xef85e0] (9 bytes) glitch::io::IAttribute::getUserPointer(void)
// int glitch::io::IAttribute::getUserPointer();
// [0xef85f0] (9 bytes) glitch::io::IAttribute::setInt(int)
// void glitch::io::IAttribute::setInt();
// [0xef8600] (9 bytes) glitch::io::IAttribute::setFloat(float)
// void glitch::io::IAttribute::setFloat();
// [0xef8610] (9 bytes) glitch::io::IAttribute::setString(char const*)
// void glitch::io::IAttribute::setString();
// [0xef8620] (9 bytes) glitch::io::IAttribute::setArray(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>)
// void glitch::io::IAttribute::setArray();
// [0xef8630] (9 bytes) glitch::io::IAttribute::setColor(glitch::video::SColorf)
// void glitch::io::IAttribute::setColor();
// [0xef8640] (9 bytes) glitch::io::IAttribute::setColor(glitch::video::SColor)
// void glitch::io::IAttribute::setColor();
// [0xef8650] (9 bytes) glitch::io::IAttribute::setBool(bool)
// void glitch::io::IAttribute::setBool();
// [0xef8660] (9 bytes) glitch::io::IAttribute::setBinary(void *,int)
// void glitch::io::IAttribute::setBinary();
// [0xef8670] (9 bytes) glitch::io::IAttribute::setVector2d(glitch::core::vector2d<float>)
// void glitch::io::IAttribute::setVector2d();
// [0xef8680] (9 bytes) glitch::io::IAttribute::setVector3d(glitch::core::vector3d<float> const&)
// void glitch::io::IAttribute::setVector3d();
// [0xef8690] (9 bytes) glitch::io::IAttribute::setVector4d(glitch::core::vector4d<float> const&)
// void glitch::io::IAttribute::setVector4d();
// [0xef86a0] (9 bytes) glitch::io::IAttribute::setRect(glitch::core::rect<int>)
// void glitch::io::IAttribute::setRect();
// [0xef86b0] (9 bytes) glitch::io::IAttribute::setQuaternion(glitch::core::quaternion)
// void glitch::io::IAttribute::setQuaternion();
// [0xef86c0] (9 bytes) glitch::io::IAttribute::setMatrix2(glitch::core::CMatrix2<float> const&)
// void glitch::io::IAttribute::setMatrix2();
// [0xef86d0] (9 bytes) glitch::io::IAttribute::setMatrix3(glitch::core::CMatrix3<float> const&)
// void glitch::io::IAttribute::setMatrix3();
// [0xef86e0] (9 bytes) glitch::io::IAttribute::setMatrix(glitch::core::CMatrix4<float> const&)
// void glitch::io::IAttribute::setMatrix();
// [0xef86f0] (9 bytes) glitch::io::IAttribute::setTriangle(glitch::core::triangle3d<float>)
// void glitch::io::IAttribute::setTriangle();
// [0xef8700] (9 bytes) glitch::io::IAttribute::setVector2di(glitch::core::vector2d<int>)
// void glitch::io::IAttribute::setVector2di();
// [0xef8710] (9 bytes) glitch::io::IAttribute::setVector3di(glitch::core::vector3d<int> const&)
// void glitch::io::IAttribute::setVector3di();
// [0xef8720] (9 bytes) glitch::io::IAttribute::setVector4di(glitch::core::vector4d<int> const&)
// void glitch::io::IAttribute::setVector4di();
// [0xef8730] (9 bytes) glitch::io::IAttribute::setLine2d(glitch::core::line2d<float>)
// void glitch::io::IAttribute::setLine2d();
// [0xef8740] (9 bytes) glitch::io::IAttribute::setLine2d(glitch::core::line2d<int>)
// void glitch::io::IAttribute::setLine2d();
// [0xef8750] (9 bytes) glitch::io::IAttribute::setLine3d(glitch::core::line3d<float>)
// void glitch::io::IAttribute::setLine3d();
// [0xef8760] (9 bytes) glitch::io::IAttribute::setLine3d(glitch::core::line3d<int>)
// void glitch::io::IAttribute::setLine3d();
// [0xef8770] (9 bytes) glitch::io::IAttribute::setDimension2d(glitch::core::dimension2d<int>)
// void glitch::io::IAttribute::setDimension2d();
// [0xef8780] (9 bytes) glitch::io::IAttribute::setBBox(glitch::core::aabbox3d<float>)
// void glitch::io::IAttribute::setBBox();
// [0xef8790] (9 bytes) glitch::io::IAttribute::setPlane(glitch::core::plane3d<float>)
// void glitch::io::IAttribute::setPlane();
// [0xef87a0] (9 bytes) glitch::io::IAttribute::setUserPointer(void *)
// void glitch::io::IAttribute::setUserPointer();
// [0xef87b0] (9 bytes) glitch::io::IAttribute::setEnum(char const*,char const* const*)
// void glitch::io::IAttribute::setEnum();
// [0xef87c0] (9 bytes) glitch::io::IAttribute::setTexture(boost::intrusive_ptr<glitch::video::ITexture> const&)
// void glitch::io::IAttribute::setTexture();
// [0xef87d0] (9 bytes) glitch::io::IAttribute::setLight(boost::intrusive_ptr<glitch::video::CLight>)
// void glitch::io::IAttribute::setLight();
// [0xef8a50] (13 bytes) glitch::io::CBoolAttribute::getInt(void)
// int glitch::io::CBoolAttribute::getInt(glitch::io::CBoolAttribute *this);
// [0xef8a60] (21 bytes) glitch::io::CBoolAttribute::getFloat(void)
// long double glitch::io::CBoolAttribute::getFloat(glitch::io::CBoolAttribute *this);
// [0xef8a80] (13 bytes) glitch::io::CBoolAttribute::getBool(void)
// int glitch::io::CBoolAttribute::getBool(glitch::io::CBoolAttribute *this);
// [0xef8a90] (15 bytes) glitch::io::CBoolAttribute::setInt(int)
// glitch::io::CBoolAttribute *glitch::io::CBoolAttribute::setInt(glitch::io::CBoolAttribute *this, int a2);
// [0xef8aa0] (33 bytes) glitch::io::CBoolAttribute::setFloat(float)
// glitch::io::CBoolAttribute *glitch::io::CBoolAttribute::setFloat(glitch::io::CBoolAttribute *this, float a2);
// [0xef8ad0] (14 bytes) glitch::io::CBoolAttribute::setBool(bool)
// glitch::io::CBoolAttribute *glitch::io::CBoolAttribute::setBool(glitch::io::CBoolAttribute *this, bool a2);
// [0xef8ae0] (12 bytes) glitch::io::CBoolAttribute::getType(void)const
// int glitch::io::CBoolAttribute::getType();
// [0xef8af0] (22 bytes) glitch::io::CBoolAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CBoolAttribute::getTypeString();
// [0xef8b10] (12 bytes) glitch::io::CIntAttribute::getInt(void)
// int glitch::io::CIntAttribute::getInt(glitch::io::CIntAttribute *this);
// [0xef8b20] (26 bytes) glitch::io::CIntAttribute::getFloat(void)
// long double glitch::io::CIntAttribute::getFloat(glitch::io::CIntAttribute *this);
// [0xef8b40] (13 bytes) glitch::io::CIntAttribute::getBool(void)
// bool glitch::io::CIntAttribute::getBool(glitch::io::CIntAttribute *this);
// [0xef8b50] (14 bytes) glitch::io::CIntAttribute::setInt(int)
// glitch::io::CIntAttribute *glitch::io::CIntAttribute::setInt(glitch::io::CIntAttribute *this, int a2);
// [0xef8b60] (16 bytes) glitch::io::CIntAttribute::setFloat(float)
// glitch::io::CIntAttribute *glitch::io::CIntAttribute::setFloat(glitch::io::CIntAttribute *this, float a2);
// [0xef8b70] (9 bytes) glitch::io::CIntAttribute::getType(void)const
// int glitch::io::CIntAttribute::getType();
// [0xef8b80] (22 bytes) glitch::io::CIntAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CIntAttribute::getTypeString();
// [0xef8ba0] (14 bytes) glitch::io::CFloatAttribute::getInt(void)
// int glitch::io::CFloatAttribute::getInt(glitch::io::CFloatAttribute *this);
// [0xef8bb0] (12 bytes) glitch::io::CFloatAttribute::getFloat(void)
// long double glitch::io::CFloatAttribute::getFloat(glitch::io::CFloatAttribute *this);
// [0xef8bc0] (15 bytes) glitch::io::CFloatAttribute::getBool(void)
// bool glitch::io::CFloatAttribute::getBool(glitch::io::CFloatAttribute *this);
// [0xef8bd0] (18 bytes) glitch::io::CFloatAttribute::setInt(int)
// glitch::io::CFloatAttribute *glitch::io::CFloatAttribute::setInt(glitch::io::CFloatAttribute *this, int a2);
// [0xef8bf0] (14 bytes) glitch::io::CFloatAttribute::setFloat(float)
// glitch::io::CFloatAttribute *glitch::io::CFloatAttribute::setFloat(glitch::io::CFloatAttribute *this, float a2);
// [0xef8c00] (12 bytes) glitch::io::CFloatAttribute::getType(void)const
// int glitch::io::CFloatAttribute::getType();
// [0xef8c10] (22 bytes) glitch::io::CFloatAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CFloatAttribute::getTypeString();
// [0xef8c30] (84 bytes) glitch::io::CNumbersAttribute::getBool(void)
// int glitch::io::CNumbersAttribute::getBool(glitch::io::CNumbersAttribute *this);
// [0xef8c90] (114 bytes) glitch::io::CNumbersAttribute::getVector2d(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getVector2d( glitch::io::CNumbersAttribute *this, int a2);
// [0xef8d10] (153 bytes) glitch::io::CNumbersAttribute::getVector3d(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getVector3d( glitch::io::CNumbersAttribute *this, int a2);
// [0xef8db0] (191 bytes) glitch::io::CNumbersAttribute::getVector4d(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getVector4d( glitch::io::CNumbersAttribute *this, int a2);
// [0xef8e70] (247 bytes) glitch::io::CNumbersAttribute::getColorf(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getColorf( glitch::io::CNumbersAttribute *this, int a2);
// [0xef8f70] (159 bytes) glitch::io::CNumbersAttribute::getColor(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getColor( glitch::io::CNumbersAttribute *this, int a2);
// [0xef9010] (186 bytes) glitch::io::CNumbersAttribute::getRect(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getRect( glitch::io::CNumbersAttribute *this, int a2);
// [0xef90d0] (162 bytes) glitch::io::CNumbersAttribute::getMatrix2(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getMatrix2( glitch::io::CNumbersAttribute *this, int a2);
// [0xef9180] (336 bytes) glitch::io::CNumbersAttribute::getMatrix3(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getMatrix3( glitch::io::CNumbersAttribute *this, int a2);
// [0xef92d0] (207 bytes) glitch::io::CNumbersAttribute::getQuaternion(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getQuaternion( glitch::io::CNumbersAttribute *this, int a2);
// [0xef93a0] (419 bytes) glitch::io::CNumbersAttribute::getTriangle(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getTriangle( glitch::io::CNumbersAttribute *this, int a2);
// [0xef9550] (212 bytes) glitch::io::CNumbersAttribute::getPlane(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getPlane( glitch::io::CNumbersAttribute *this, int a2);
// [0xef9630] (295 bytes) glitch::io::CNumbersAttribute::getBBox(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getBBox( glitch::io::CNumbersAttribute *this, int a2);
// [0xef9760] (212 bytes) glitch::io::CNumbersAttribute::getLine2d(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getLine2d( glitch::io::CNumbersAttribute *this, int a2);
// [0xef9840] (294 bytes) glitch::io::CNumbersAttribute::getLine3d(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getLine3d( glitch::io::CNumbersAttribute *this, int a2);
// [0xef9970] (77 bytes) glitch::io::CNumbersAttribute::setInt(int)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::setInt( glitch::io::CNumbersAttribute *this, int a2);
// [0xef99c0] (77 bytes) glitch::io::CNumbersAttribute::setFloat(float)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::setFloat( glitch::io::CNumbersAttribute *this, float a2);
// [0xef9a10] (33 bytes) glitch::io::CNumbersAttribute::setBool(bool)
// int glitch::io::CNumbersAttribute::setBool(glitch::io::CNumbersAttribute *this, bool a2);
// [0xef9a40] (12 bytes) glitch::io::CNumbersAttribute::isNumberList(void)
// int glitch::io::CNumbersAttribute::isNumberList();
// [0xef9a50] (13 bytes) glitch::io::CNumbersAttribute::isFloat(void)
// int glitch::io::CNumbersAttribute::isFloat(glitch::io::CNumbersAttribute *this);
// [0xef9a60] (16 bytes) glitch::io::CNumbersAttribute::getType(void)const
// int glitch::io::CNumbersAttribute::getType(glitch::io::CNumbersAttribute *this);
// [0xef9a70] (35 bytes) glitch::io::CNumbersAttribute::getTypeString(void)const
// void *glitch::io::CNumbersAttribute::getTypeString(glitch::io::CNumbersAttribute *this);
// [0xef9aa0] (68 bytes) glitch::io::CColorfAttribute::getInt(void)
// int glitch::io::CColorfAttribute::getInt(glitch::io::CColorfAttribute *this);
// [0xef9af0] (117 bytes) glitch::io::CColorfAttribute::getFloat(void)
// long double glitch::io::CColorfAttribute::getFloat(glitch::io::CColorfAttribute *this);
// [0xef9b70] (112 bytes) glitch::io::CColorfAttribute::setInt(int)
// int glitch::io::CColorfAttribute::setInt(float **this, unsigned int a2);
// [0xef9be0] (34 bytes) glitch::io::CColorfAttribute::setFloat(float)
// int glitch::io::CColorfAttribute::setFloat(glitch::io::CColorfAttribute *this, float a2);
// [0xef9c10] (12 bytes) glitch::io::CColorfAttribute::getType(void)const
// int glitch::io::CColorfAttribute::getType();
// [0xef9c20] (22 bytes) glitch::io::CColorfAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CColorfAttribute::getTypeString();
// [0xef9c40] (68 bytes) glitch::io::CColorAttribute::getInt(void)
// int glitch::io::CColorAttribute::getInt(glitch::io::CColorAttribute *this);
// [0xef9c90] (117 bytes) glitch::io::CColorAttribute::getFloat(void)
// long double glitch::io::CColorAttribute::getFloat(glitch::io::CColorAttribute *this);
// [0xef9d10] (112 bytes) glitch::io::CColorAttribute::setInt(int)
// int glitch::io::CColorAttribute::setInt(float **this, unsigned int a2);
// [0xef9d80] (34 bytes) glitch::io::CColorAttribute::setFloat(float)
// int glitch::io::CColorAttribute::setFloat(glitch::io::CColorAttribute *this, float a2);
// [0xef9db0] (12 bytes) glitch::io::CColorAttribute::getType(void)const
// int glitch::io::CColorAttribute::getType();
// [0xef9dc0] (22 bytes) glitch::io::CColorAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CColorAttribute::getTypeString();
// [0xef9de0] (12 bytes) glitch::io::CVector2DAttribute::getType(void)const
// int glitch::io::CVector2DAttribute::getType();
// [0xef9df0] (40 bytes) glitch::io::CVector2DAttribute::getMatrix2(void)
// glitch::io::CVector2DAttribute *glitch::io::CVector2DAttribute::getMatrix2( glitch::io::CVector2DAttribute *this, int a2);
// [0xef9e20] (54 bytes) glitch::io::CVector2DAttribute::getMatrix3(void)
// glitch::io::CVector2DAttribute *glitch::io::CVector2DAttribute::getMatrix3( glitch::io::CVector2DAttribute *this, int a2);
// [0xef9e60] (22 bytes) glitch::io::CVector2DAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CVector2DAttribute::getTypeString();
// [0xef9e80] (12 bytes) glitch::io::CVector3DAttribute::getType(void)const
// int glitch::io::CVector3DAttribute::getType();
// [0xef9e90] (35 bytes) glitch::io::CVector3DAttribute::getMatrix2(void)
// glitch::io::CVector3DAttribute *glitch::io::CVector3DAttribute::getMatrix2( glitch::io::CVector3DAttribute *this);
// [0xef9ec0] (57 bytes) glitch::io::CVector3DAttribute::getMatrix3(void)
// glitch::io::CVector3DAttribute *glitch::io::CVector3DAttribute::getMatrix3( glitch::io::CVector3DAttribute *this, int a2);
// [0xef9f00] (22 bytes) glitch::io::CVector3DAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CVector3DAttribute::getTypeString();
// [0xef9f20] (12 bytes) glitch::io::CVector4DAttribute::getType(void)const
// int glitch::io::CVector4DAttribute::getType();
// [0xef9f30] (35 bytes) glitch::io::CVector4DAttribute::getMatrix2(void)
// glitch::io::CVector4DAttribute *glitch::io::CVector4DAttribute::getMatrix2( glitch::io::CVector4DAttribute *this);
// [0xef9f60] (42 bytes) glitch::io::CVector4DAttribute::getMatrix3(void)
// glitch::io::CVector4DAttribute *glitch::io::CVector4DAttribute::getMatrix3( glitch::io::CVector4DAttribute *this);
// [0xef9f90] (22 bytes) glitch::io::CVector4DAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CVector4DAttribute::getTypeString();
// [0xef9fb0] (12 bytes) glitch::io::CVector2DIAttribute::getType(void)const
// int glitch::io::CVector2DIAttribute::getType();
// [0xef9fc0] (46 bytes) glitch::io::CVector2DIAttribute::getMatrix2(void)
// glitch::io::CVector2DIAttribute *glitch::io::CVector2DIAttribute::getMatrix2( glitch::io::CVector2DIAttribute *this, int a2);
// [0xef9ff0] (62 bytes) glitch::io::CVector2DIAttribute::getMatrix3(void)
// glitch::io::CVector2DIAttribute *glitch::io::CVector2DIAttribute::getMatrix3( glitch::io::CVector2DIAttribute *this, int a2);
// [0xefa030] (22 bytes) glitch::io::CVector2DIAttribute::getTypeString(void)const
// void *glitch::io::CVector2DIAttribute::getTypeString();
// [0xefa050] (12 bytes) glitch::io::CVector3DIAttribute::getType(void)const
// int glitch::io::CVector3DIAttribute::getType();
// [0xefa060] (35 bytes) glitch::io::CVector3DIAttribute::getMatrix2(void)
// glitch::io::CVector3DIAttribute *glitch::io::CVector3DIAttribute::getMatrix2( glitch::io::CVector3DIAttribute *this);
// [0xefa090] (69 bytes) glitch::io::CVector3DIAttribute::getMatrix3(void)
// glitch::io::CVector3DIAttribute *glitch::io::CVector3DIAttribute::getMatrix3( glitch::io::CVector3DIAttribute *this, int a2);
// [0xefa0e0] (22 bytes) glitch::io::CVector3DIAttribute::getTypeString(void)const
// void *glitch::io::CVector3DIAttribute::getTypeString();
// [0xefa100] (12 bytes) glitch::io::CVector4DIAttribute::getType(void)const
// int glitch::io::CVector4DIAttribute::getType();
// [0xefa110] (35 bytes) glitch::io::CVector4DIAttribute::getMatrix2(void)
// glitch::io::CVector4DIAttribute *glitch::io::CVector4DIAttribute::getMatrix2( glitch::io::CVector4DIAttribute *this);
// [0xefa140] (42 bytes) glitch::io::CVector4DIAttribute::getMatrix3(void)
// glitch::io::CVector4DIAttribute *glitch::io::CVector4DIAttribute::getMatrix3( glitch::io::CVector4DIAttribute *this);
// [0xefa170] (22 bytes) glitch::io::CVector4DIAttribute::getTypeString(void)const
// void *glitch::io::CVector4DIAttribute::getTypeString();
// [0xefa190] (12 bytes) glitch::io::CRectAttribute::getType(void)const
// int glitch::io::CRectAttribute::getType();
// [0xefa1a0] (22 bytes) glitch::io::CRectAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CRectAttribute::getTypeString();
// [0xefa1c0] (12 bytes) glitch::io::CMatrix2Attribute::getType(void)const
// int glitch::io::CMatrix2Attribute::getType();
// [0xefa1d0] (22 bytes) glitch::io::CMatrix2Attribute::getTypeString(void)const
// void *glitch::io::CMatrix2Attribute::getTypeString();
// [0xefa1f0] (12 bytes) glitch::io::CMatrix3Attribute::getType(void)const
// int glitch::io::CMatrix3Attribute::getType();
// [0xefa200] (22 bytes) glitch::io::CMatrix3Attribute::getTypeString(void)const
// void *glitch::io::CMatrix3Attribute::getTypeString();
// [0xefa220] (12 bytes) glitch::io::CMatrixAttribute::getType(void)const
// int glitch::io::CMatrixAttribute::getType();
// [0xefa230] (22 bytes) glitch::io::CMatrixAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CMatrixAttribute::getTypeString();
// [0xefa250] (12 bytes) glitch::io::CQuaternionAttribute::getType(void)const
// int glitch::io::CQuaternionAttribute::getType();
// [0xefa260] (22 bytes) glitch::io::CQuaternionAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CQuaternionAttribute::getTypeString();
// [0xefa280] (12 bytes) glitch::io::CBBoxAttribute::getType(void)const
// int glitch::io::CBBoxAttribute::getType();
// [0xefa290] (22 bytes) glitch::io::CBBoxAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CBBoxAttribute::getTypeString();
// [0xefa2b0] (12 bytes) glitch::io::CPlaneAttribute::getType(void)const
// int glitch::io::CPlaneAttribute::getType();
// [0xefa2c0] (22 bytes) glitch::io::CPlaneAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CPlaneAttribute::getTypeString();
// [0xefa2e0] (12 bytes) glitch::io::CTriangleAttribute::getType(void)const
// int glitch::io::CTriangleAttribute::getType();
// [0xefa2f0] (22 bytes) glitch::io::CTriangleAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CTriangleAttribute::getTypeString();
// [0xefa310] (12 bytes) glitch::io::CLine2dAttribute::getType(void)const
// int glitch::io::CLine2dAttribute::getType();
// [0xefa320] (22 bytes) glitch::io::CLine2dAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CLine2dAttribute::getTypeString();
// [0xefa340] (12 bytes) glitch::io::CLine3dAttribute::getType(void)const
// int glitch::io::CLine3dAttribute::getType();
// [0xefa350] (22 bytes) glitch::io::CLine3dAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CLine3dAttribute::getTypeString();
// [0xefa370] (35 bytes) glitch::io::CEnumAttribute::getFloat(void)
// long double glitch::io::CEnumAttribute::getFloat(glitch::io::CEnumAttribute *this);
// [0xefa3a0] (26 bytes) glitch::io::CEnumAttribute::getBool(void)
// bool glitch::io::CEnumAttribute::getBool(glitch::io::CEnumAttribute *this);
// [0xefa3c0] (34 bytes) glitch::io::CEnumAttribute::setFloat(float)
// int glitch::io::CEnumAttribute::setFloat(glitch::io::CEnumAttribute *this, float a2);
// [0xefa3f0] (12 bytes) glitch::io::CEnumAttribute::getEnum(void)
// int glitch::io::CEnumAttribute::getEnum(glitch::io::CEnumAttribute *this);
// [0xefa400] (12 bytes) glitch::io::CEnumAttribute::getType(void)const
// int glitch::io::CEnumAttribute::getType();
// [0xefa410] (22 bytes) glitch::io::CEnumAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CEnumAttribute::getTypeString();
// [0xefa430] (12 bytes) glitch::io::CStringAttribute::getType(void)const
// int glitch::io::CStringAttribute::getType();
// [0xefa440] (22 bytes) glitch::io::CStringAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CStringAttribute::getTypeString();
// [0xefa460] (330 bytes) glitch::io::CStringAttribute::getBinary(void *,int)
// int glitch::io::CStringAttribute::getBinary(glitch::io::CStringAttribute *this, int a2, int a3);
// [0xefa5b0] (12 bytes) glitch::io::CBinaryAttribute::getType(void)const
// int glitch::io::CBinaryAttribute::getType();
// [0xefa5c0] (22 bytes) glitch::io::CBinaryAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CBinaryAttribute::getTypeString();
// [0xefa5e0] (13 bytes) glitch::io::CTextureAttribute::getBool(void)
// bool glitch::io::CTextureAttribute::getBool(glitch::io::CTextureAttribute *this);
// [0xefa5f0] (12 bytes) glitch::io::CTextureAttribute::getType(void)const
// int glitch::io::CTextureAttribute::getType();
// [0xefa600] (22 bytes) glitch::io::CTextureAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CTextureAttribute::getTypeString();
// [0xefa620] (13 bytes) glitch::io::CLightAttribute::getBool(void)
// bool glitch::io::CLightAttribute::getBool(glitch::io::CLightAttribute *this);
// [0xefa630] (9 bytes) glitch::io::CLightAttribute::setString(char const*)
// void glitch::io::CLightAttribute::setString();
// [0xefa640] (12 bytes) glitch::io::CLightAttribute::getType(void)const
// int glitch::io::CLightAttribute::getType();
// [0xefa650] (22 bytes) glitch::io::CLightAttribute::getTypeString(void)const
// void *glitch::io::CLightAttribute::getTypeString();
// [0xefa670] (12 bytes) glitch::io::CStringWArrayAttribute::getType(void)const
// int glitch::io::CStringWArrayAttribute::getType();
// [0xefa680] (22 bytes) glitch::io::CStringWArrayAttribute::getTypeString(void)const
// const wchar_t *glitch::io::CStringWArrayAttribute::getTypeString();
// [0xefa6a0] (12 bytes) glitch::io::CUserPointerAttribute::getInt(void)
// int glitch::io::CUserPointerAttribute::getInt(glitch::io::CUserPointerAttribute *this);
// [0xefa6b0] (13 bytes) glitch::io::CUserPointerAttribute::getBool(void)
// bool glitch::io::CUserPointerAttribute::getBool(glitch::io::CUserPointerAttribute *this);
// [0xefa6c0] (12 bytes) glitch::io::CUserPointerAttribute::getType(void)const
// int glitch::io::CUserPointerAttribute::getType();
// [0xefa6d0] (14 bytes) glitch::io::CUserPointerAttribute::setUserPointer(void *)
// glitch::io::CUserPointerAttribute *glitch::io::CUserPointerAttribute::setUserPointer( glitch::io::CUserPointerAttribute *this, void *a2);
// [0xefa6e0] (12 bytes) glitch::io::CUserPointerAttribute::getUserPointer(void)
// int glitch::io::CUserPointerAttribute::getUserPointer(glitch::io::CUserPointerAttribute *this);
// [0xefa6f0] (22 bytes) glitch::io::CUserPointerAttribute::getTypeString(void)const
// void *glitch::io::CUserPointerAttribute::getTypeString();
// [0xefa710] (27 bytes) glitch::io::IAttributes::~IAttributes()
// void glitch::io::IAttributes::~IAttributes(glitch::io::IAttributes *this);
// [0xefa730] (27 bytes) glitch::io::IFileList::~IFileList()
// void glitch::io::IFileList::~IFileList(glitch::io::IFileList *this);
// [0xefa750] (27 bytes) glitch::io::IFileSystem::~IFileSystem()
// void glitch::io::IFileSystem::~IFileSystem(glitch::io::IFileSystem *this);
// [0xefa770] (27 bytes) glitch::io::IWriteFile::~IWriteFile()
// void glitch::io::IWriteFile::~IWriteFile(glitch::io::IWriteFile *this);
// [0xefa790] (40 bytes) glitch::io::CIrrXMLFileReadCallBack::read(void *,int)
// int glitch::io::CIrrXMLFileReadCallBack::read(glitch::io::CIrrXMLFileReadCallBack *this, void *a2, int a3);
// [0xefa7c0] (24 bytes) glitch::io::CIrrXMLFileReadCallBack::getSize(void)const
// int glitch::io::CIrrXMLFileReadCallBack::getSize(glitch::io::CIrrXMLFileReadCallBack *this);
// [0xefa920] (27 bytes) glitch::io::IIrrXMLReader<wchar_t,glitch::IReferenceCounted>::~IIrrXMLReader()
// void glitch::io::IIrrXMLReader<wchar_t,glitch::IReferenceCounted>::~IIrrXMLReader( glitch::io::IIrrXMLReader<wchar_t, glitch::IReferenceCounted> *this);
// [0xefa940] (27 bytes) glitch::io::IIrrXMLReader<char,glitch::IReferenceCounted>::~IIrrXMLReader()
// void glitch::io::IIrrXMLReader<char,glitch::IReferenceCounted>::~IIrrXMLReader( glitch::io::IIrrXMLReader<char, glitch::IReferenceCounted> *this);
// [0xefa9e0] (27 bytes) glitch::io::CBinaryAttributesWriter::~CBinaryAttributesWriter()
// void glitch::io::CBinaryAttributesWriter::~CBinaryAttributesWriter(glitch::io::CBinaryAttributesWriter *this);
// [0xefaad0] (59 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::readToNextElement(void)
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::readToNextElement( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this);
// [0xefab10] (12 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getNodeType(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getNodeType( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this);
// [0xefab20] (14 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeCount(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeCount( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this);
// [0xefab30] (31 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeName(int)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeName( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this, unsigned int a2);
// [0xefab50] (32 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValue(int)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValue( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this, unsigned int a2);
// [0xefab70] (39 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueAsInt(char const*)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueAsInt( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this, const char *a2);
// [0xefaba0] (39 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueAsInt(int)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueAsInt( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this, int a2);
// [0xefabd0] (12 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getNodeName(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getNodeName( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this);
// [0xefabe0] (12 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getNodeData(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getNodeData( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this);
// [0xefabf0] (13 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::isEmptyElement(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::isEmptyElement( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this);
// [0xefac00] (12 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getSourceFormat(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getSourceFormat( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this);
// [0xefac10] (12 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getParserFormat(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getParserFormat( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this);
// [0xefac20] (59 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::readToNextElement(void)
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::readToNextElement( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this);
// [0xefac60] (12 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getNodeType(void)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getNodeType( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this);
// [0xefac70] (14 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeCount(void)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeCount( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this);
// [0xefac80] (31 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeName(int)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeName( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this, unsigned int a2);
// [0xefaca0] (32 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValue(int)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValue( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this, unsigned int a2);
// [0xefacc0] (39 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueAsInt(wchar_t const*)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueAsInt( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this, const wchar_t *a2);
// [0xefacf0] (39 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueAsInt(int)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueAsInt( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this, int a2);
// [0xefad20] (12 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getNodeName(void)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getNodeName( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this);
// [0xefad30] (12 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getNodeData(void)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getNodeData( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this);
// [0xefad40] (13 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::isEmptyElement(void)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::isEmptyElement( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this);
// [0xefad50] (12 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getSourceFormat(void)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getSourceFormat( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this);
// [0xefad60] (12 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getParserFormat(void)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getParserFormat( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this);
// [0xefadd0] (45 bytes) glitch::io::CBinaryAttributesWriter::~CBinaryAttributesWriter()
// void glitch::io::CBinaryAttributesWriter::~CBinaryAttributesWriter(glitch::io::CBinaryAttributesWriter *this);
// [0xefaec0] (45 bytes) glitch::io::IIrrXMLReader<char,glitch::IReferenceCounted>::~IIrrXMLReader()
// void glitch::io::IIrrXMLReader<char,glitch::IReferenceCounted>::~IIrrXMLReader( glitch::io::IIrrXMLReader<char, glitch::IReferenceCounted> *this);
// [0xefaef0] (45 bytes) glitch::io::IIrrXMLReader<wchar_t,glitch::IReferenceCounted>::~IIrrXMLReader()
// void glitch::io::IIrrXMLReader<wchar_t,glitch::IReferenceCounted>::~IIrrXMLReader( glitch::io::IIrrXMLReader<wchar_t, glitch::IReferenceCounted> *this);
// [0xefaf50] (45 bytes) glitch::io::IWriteFile::~IWriteFile()
// void glitch::io::IWriteFile::~IWriteFile(glitch::io::IWriteFile *this);
// [0xefaf80] (45 bytes) glitch::io::IFileSystem::~IFileSystem()
// void glitch::io::IFileSystem::~IFileSystem(glitch::io::IFileSystem *this);
// [0xefafb0] (45 bytes) glitch::io::IFileList::~IFileList()
// void glitch::io::IFileList::~IFileList(glitch::io::IFileList *this);
// [0xefafe0] (45 bytes) glitch::io::IAttributes::~IAttributes()
// void glitch::io::IAttributes::~IAttributes(glitch::io::IAttributes *this);
// [0xefb230] (45 bytes) glitch::io::IAttributesReader::~IAttributesReader()
// void glitch::io::IAttributesReader::~IAttributesReader(glitch::io::IAttributesReader *this);
// [0xefb260] (45 bytes) glitch::io::IAttributesWriter::~IAttributesWriter()
// void glitch::io::IAttributesWriter::~IAttributesWriter(glitch::io::IAttributesWriter *this);
// [0xefb290] (77 bytes) glitch::io::CMemoryWriteFile::~CMemoryWriteFile()
// void glitch::io::CMemoryWriteFile::~CMemoryWriteFile(glitch::io::CMemoryWriteFile *this);
// [0xefb310] (67 bytes) glitch::io::CBoolAttribute::setString(char const*)
// glitch::io::CBoolAttribute *glitch::io::CBoolAttribute::setString( glitch::io::CBoolAttribute *this, const char *a2);
// [0xefb360] (67 bytes) glitch::io::CIntAttribute::getStringW(void)
// glitch::io::CIntAttribute *glitch::io::CIntAttribute::getStringW(glitch::io::CIntAttribute *this, int a2);
// [0xefb3b0] (81 bytes) glitch::io::CEnumAttribute::getInt(void)
// int glitch::io::CEnumAttribute::getInt(glitch::io::CEnumAttribute *this);
// [0xefb410] (74 bytes) glitch::io::CTextureAttribute::getString(void)
// glitch::io::CTextureAttribute *glitch::io::CTextureAttribute::getString( glitch::io::CTextureAttribute *this, int a2);
// [0xefb460] (55 bytes) glitch::io::CUserPointerAttribute::setString(char const*)
// int glitch::io::CUserPointerAttribute::setString(glitch::io::CUserPointerAttribute *this, char *s);
// [0xefb4a0] (152 bytes) glitch::io::CColorAttribute::setString(char const*)
// int glitch::io::CColorAttribute::setString(glitch::io::CColorAttribute *this, char *s);
// [0xefb540] (55 bytes) glitch::io::CUserPointerAttribute::getString(char *)
// int glitch::io::CUserPointerAttribute::getString(glitch::io::CUserPointerAttribute *this, char *s);
// [0xefb580] (41 bytes) glitch::io::CIntAttribute::setString(char const*)
// int glitch::io::CIntAttribute::setString(glitch::io::CIntAttribute *this, char *nptr);
// [0xefb5b0] (68 bytes) glitch::io::CNumbersAttribute::getFloat(void)
// long double glitch::io::CNumbersAttribute::getFloat(glitch::io::CNumbersAttribute *this);
// [0xefb600] (40 bytes) glitch::io::CNumbersAttribute::getInt(void)
// int glitch::io::CNumbersAttribute::getInt(float **this);
// [0xefb630] (36 bytes) glitch::io::CLightAttribute::getString(char *)
// char *glitch::io::CLightAttribute::getString(glitch::io::CLightAttribute *this, char *a2);
// [0xefb660] (424 bytes) glitch::io::CNumbersAttribute::setMatrix3(glitch::core::CMatrix3<float> const&)
// int glitch::io::CNumbersAttribute::setMatrix3(int a1, float *a2);
// [0xefb8b0] (85 bytes) glitch::io::CMemoryWriteFile::~CMemoryWriteFile()
// void glitch::io::CMemoryWriteFile::~CMemoryWriteFile(glitch::io::CMemoryWriteFile *this);
// [0xefb910] (94 bytes) glitch::io::CUserPointerAttribute::getString(void)
// char **glitch::io::CUserPointerAttribute::getString(char **this, int a2);
// [0xefb970] (57 bytes) glitch::io::CLightAttribute::getString(void)
// char **glitch::io::CLightAttribute::getString(char **this);
// [0xefb9b0] (65 bytes) glitch::io::CMatrixAttribute::getQuaternion(void)
// glitch::io::CMatrixAttribute *glitch::io::CMatrixAttribute::getQuaternion( glitch::io::CMatrixAttribute *this, int a2);
// [0xefba00] (185 bytes) glitch::io::CNumbersAttribute::setFloatArray(std::vector<float,glitch::core::SAllocator<float,(glitch::memory::E_MEMORY_HINT)0>> &)
// unsigned int glitch::io::CNumbersAttribute::setFloatArray( glitch::io::CNumbersAttribute *this, std::vector<float, glitch::core::SAllocator<float, (glitch::memory::E_MEMORY_HINT)0>> *a2);
// [0xefbac0] (169 bytes) glitch::io::CNumbersAttribute::setDimension2d(glitch::core::dimension2d<int>)
// int glitch::io::CNumbersAttribute::setDimension2d(int a1, int a2, int a3);
// [0xefbb70] (426 bytes) glitch::io::CNumbersAttribute::setTriangle3d(glitch::core::triangle3d<float>)
// int glitch::io::CNumbersAttribute::setTriangle3d(int a1, float *a2);
// [0xefbd20] (231 bytes) glitch::io::CNumbersAttribute::setPlane(glitch::core::plane3d<float>)
// int glitch::io::CNumbersAttribute::setPlane(int a1, float *a2);
// [0xefbe10] (317 bytes) glitch::io::CNumbersAttribute::setBoundingBox(glitch::core::aabbox3d<float>)
// int glitch::io::CNumbersAttribute::setBoundingBox(int a1, float *a2);
// [0xefbf50] (243 bytes) glitch::io::CNumbersAttribute::setQuaternion(glitch::core::quaternion)
// int glitch::io::CNumbersAttribute::setQuaternion(int a1, float a2, float a3, float a4, float a5);
// [0xefc050] (647 bytes) glitch::io::CNumbersAttribute::setMatrix(glitch::core::CMatrix4<float> const&)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::setMatrix( glitch::io::CNumbersAttribute *this, const glitch::core::CMatrix4<float> *a2);
// [0xefc2e0] (420 bytes) glitch::io::CNumbersAttribute::setColor(glitch::video::SColor)
// int glitch::io::CNumbersAttribute::setColor(int a1, int a2);
// [0xefc490] (287 bytes) glitch::io::CNumbersAttribute::setColor(glitch::video::SColorf)
// int glitch::io::CNumbersAttribute::setColor(int a1, float a2, float a3, float a4, float a5);
// [0xefc5b0] (231 bytes) glitch::io::CNumbersAttribute::setVector4d(glitch::core::vector4d<float> const&)
// int glitch::io::CNumbersAttribute::setVector4d(int a1, float *a2);
// [0xefc6a0] (200 bytes) glitch::io::CNumbersAttribute::setVector3d(glitch::core::vector3d<float> const&)
// int glitch::io::CNumbersAttribute::setVector3d(int a1, float *a2);
// [0xefc770] (201 bytes) glitch::io::CNumbersAttribute::setIntArray(std::vector<int,glitch::core::SAllocator<int,(glitch::memory::E_MEMORY_HINT)0>> &)
// unsigned int glitch::io::CNumbersAttribute::setIntArray( glitch::io::CNumbersAttribute *this, std::vector<int, glitch::core::SAllocator<int, (glitch::memory::E_MEMORY_HINT)0>> *a2);
// [0xefc840] (231 bytes) glitch::io::CNumbersAttribute::setLine2d(glitch::core::line2d<float>)
// int glitch::io::CNumbersAttribute::setLine2d(int a1, float *a2);
// [0xefc930] (169 bytes) glitch::io::CNumbersAttribute::setVector2d(glitch::core::vector2d<float>)
// int glitch::io::CNumbersAttribute::setVector2d(int a1, float *a2);
// [0xefc9e0] (239 bytes) glitch::io::CNumbersAttribute::setLine2d(glitch::core::line2d<int>)
// int glitch::io::CNumbersAttribute::setLine2d(int a1, uint32_t *a2);
// [0xefcad0] (177 bytes) glitch::io::CNumbersAttribute::setVector2d(glitch::core::vector2d<int>)
// int glitch::io::CNumbersAttribute::setVector2d(int a1, uint32_t *a2);
// [0xefcb90] (239 bytes) glitch::io::CNumbersAttribute::setRect(glitch::core::rect<int>)
// int glitch::io::CNumbersAttribute::setRect(int a1, uint32_t *a2);
// [0xefcc80] (231 bytes) glitch::io::CNumbersAttribute::setMatrix2(glitch::core::CMatrix2<float> const&)
// int glitch::io::CNumbersAttribute::setMatrix2(int a1, float *a2);
// [0xefcd70] (660 bytes) glitch::io::CNumbersAttribute::getIntArray(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getIntArray( glitch::io::CNumbersAttribute *this, int a2);
// [0xefd010] (74 bytes) glitch::io::CBoolAttribute::getStringW(void)
// glitch::io::CBoolAttribute *glitch::io::CBoolAttribute::getStringW(glitch::io::CBoolAttribute *this, int a2);
// [0xefd060] (520 bytes) glitch::io::CEnumAttribute::getStringW(void)
// glitch::io::CEnumAttribute *glitch::io::CEnumAttribute::getStringW(glitch::io::CEnumAttribute *this, int a2);
// [0xefd270] (1291 bytes) glitch::io::CNumbersAttribute::setString(char const*)
// unsigned int glitch::io::CNumbersAttribute::setString( __m128 a1, glitch::io::CNumbersAttribute *this, const char *a3);
// [0xefd9c0] (13 bytes) glitch::io::IAttribute::getLight(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getLight(glitch::io::IAttribute *this);
// [0xefd9d0] (65 bytes) glitch::io::CLightAttribute::getLight(void)
// glitch::io::CLightAttribute *glitch::io::CLightAttribute::getLight(glitch::io::CLightAttribute *this, int a2);
// [0xefda20] (13 bytes) glitch::io::IAttribute::getTexture(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getTexture(glitch::io::IAttribute *this);
// [0xefda30] (68 bytes) glitch::io::CTextureAttribute::getTexture(void)
// glitch::io::CTextureAttribute *glitch::io::CTextureAttribute::getTexture( glitch::io::CTextureAttribute *this, int a2);
// [0xefda80] (96 bytes) glitch::io::CTextureAttribute::setTexture(boost::intrusive_ptr<glitch::video::ITexture> const&)
// int glitch::io::CTextureAttribute::setTexture( glitch::io::CTextureAttribute *this, const boost::intrusive_ptr<glitch::video::ITexture> *a2);
// [0xefdc00] (77 bytes) glitch::io::CBinaryAttributesReader::~CBinaryAttributesReader()
// void glitch::io::CBinaryAttributesReader::~CBinaryAttributesReader(volatile int32_t **this);
// [0xefdc50] (77 bytes) glitch::io::CIrrXMLFileReadCallBack::~CIrrXMLFileReadCallBack()
// void glitch::io::CIrrXMLFileReadCallBack::~CIrrXMLFileReadCallBack(volatile int32_t **this);
// [0xefdca0] (85 bytes) glitch::io::CIrrXMLFileReadCallBack::~CIrrXMLFileReadCallBack()
// void glitch::io::CIrrXMLFileReadCallBack::~CIrrXMLFileReadCallBack(volatile int32_t **this);
// [0xefdd00] (85 bytes) glitch::io::CBinaryAttributesReader::~CBinaryAttributesReader()
// void glitch::io::CBinaryAttributesReader::~CBinaryAttributesReader(volatile int32_t **this);
// [0xeff8c0] (53 bytes) glitch::io::CFloatAttribute::setString(char const*)
// glitch::io::CFloatAttribute *glitch::io::CFloatAttribute::setString( glitch::io::CFloatAttribute *this, glitch::core *a2);
// [0xf001d0] (442 bytes) glitch::io::IAttribute::getString(void)
// char **glitch::io::IAttribute::getString(glitch::io::IAttribute *this, int a2);
// [0xf00390] (212 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueSafe(wchar_t const*)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueSafe( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this, const wchar_t *a2);
// [0xf00470] (193 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::~CXMLReaderImpl()
// void glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::~CXMLReaderImpl(void **this);
// [0xf00540] (200 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::~CXMLReaderImpl()
// void glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::~CXMLReaderImpl(void **this);
// [0xf00610] (211 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValue(wchar_t const*)const
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValue( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this, const wchar_t *a2);
// [0xf00840] (103 bytes) glitch::io::CLightAttribute::getStringW(void)
// glitch::io::CLightAttribute *glitch::io::CLightAttribute::getStringW( glitch::io::CLightAttribute *this, int a2);
// [0xf008b0] (151 bytes) glitch::io::CColorAttribute::getStringW(void)
// glitch::io::CColorAttribute *glitch::io::CColorAttribute::getStringW( glitch::io::CColorAttribute *this, int a2);
// [0xf00950] (2570 bytes) glitch::io::CNumbersAttribute::getStringW(void)
// wchar_t **glitch::io::CNumbersAttribute::getStringW(wchar_t **this, int a2);
// [0xf01360] (729 bytes) glitch::io::CFloatAttribute::getStringW(void)
// glitch::io::CFloatAttribute *glitch::io::CFloatAttribute::getStringW( glitch::io::CFloatAttribute *this, int a2);
// [0xf01640] (547 bytes) glitch::io::CStringAttribute::getStringW(void)
// glitch::io::CStringAttribute *glitch::io::CStringAttribute::getStringW( glitch::io::CStringAttribute *this, int a2);
// [0xf01870] (169 bytes) glitch::io::CStringWArrayAttribute::getArray(void)
// glitch::io::CStringWArrayAttribute *glitch::io::CStringWArrayAttribute::getArray( glitch::io::CStringWArrayAttribute *this, int a2);
// [0xf01920] (73 bytes) glitch::io::IAttribute::~IAttribute()
// void glitch::io::IAttribute::~IAttribute(glitch::io::IAttribute *this);
// [0xf01970] (109 bytes) glitch::io::CTextureAttribute::getString(char *)
// void glitch::io::CTextureAttribute::getString(glitch::io::CTextureAttribute *this, char *dest);
// [0xf01ad0] (483 bytes) glitch::io::CStringAttribute::getBool(void)
// bool glitch::io::CStringAttribute::getBool(const char **this);
// [0xf01cc0] (467 bytes) glitch::io::CStringAttribute::getFloat(void)
// long double glitch::io::CStringAttribute::getFloat(glitch::core **this);
// [0xf01ea0] (451 bytes) glitch::io::CStringAttribute::getInt(void)
// int glitch::io::CStringAttribute::getInt(const char **this);
// [0xf02070] (105 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueAsFloat(int)const
// long double glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueAsFloat( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this, int a2);
// [0xf020e0] (223 bytes) glitch::io::CTextureAttribute::setString(char const*)
// int glitch::io::CTextureAttribute::setString(char ***this, const char *a2);
// [0xf021c0] (2642 bytes) glitch::io::CNumbersAttribute::getString(void)
// volatile int32_t **glitch::io::CNumbersAttribute::getString(volatile int32_t **this, int a2);
// [0xf02c20] (578 bytes) glitch::io::CTextureAttribute::getStringW(void)
// glitch::core *glitch::io::CTextureAttribute::getStringW(glitch::io::CTextureAttribute *this, uint32_t *a2);
// [0xf02e70] (218 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValue(char const*)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValue( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this, const char *a2);
// [0xf02f50] (121 bytes) glitch::io::CGlfFileList::~CGlfFileList()
// void glitch::io::CGlfFileList::~CGlfFileList(glitch::io::CGlfFileList *this);
// [0xf02fd0] (122 bytes) glitch::io::CStringWArrayAttribute::~CStringWArrayAttribute()
// void glitch::io::CStringWArrayAttribute::~CStringWArrayAttribute(glitch::io::CStringWArrayAttribute *this);
// [0xf03050] (130 bytes) glitch::io::CStringWArrayAttribute::~CStringWArrayAttribute()
// void glitch::io::CStringWArrayAttribute::~CStringWArrayAttribute(glitch::io::CStringWArrayAttribute *this);
// [0xf030e0] (73 bytes) glitch::io::CBoolAttribute::~CBoolAttribute()
// void glitch::io::CBoolAttribute::~CBoolAttribute(glitch::io::CBoolAttribute *this);
// [0xf03130] (73 bytes) glitch::io::CIntAttribute::~CIntAttribute()
// void glitch::io::CIntAttribute::~CIntAttribute(glitch::io::CIntAttribute *this);
// [0xf03180] (73 bytes) glitch::io::CFloatAttribute::~CFloatAttribute()
// void glitch::io::CFloatAttribute::~CFloatAttribute(glitch::io::CFloatAttribute *this);
// [0xf031d0] (73 bytes) glitch::io::CUserPointerAttribute::~CUserPointerAttribute()
// void glitch::io::CUserPointerAttribute::~CUserPointerAttribute(glitch::io::CUserPointerAttribute *this);
// [0xf03220] (81 bytes) glitch::io::IAttribute::~IAttribute()
// void glitch::io::IAttribute::~IAttribute(glitch::io::IAttribute *this);
// [0xf03280] (106 bytes) glitch::io::CStringAttribute::~CStringAttribute()
// void glitch::io::CStringAttribute::~CStringAttribute(glitch::io::CStringAttribute *this);
// [0xf032f0] (102 bytes) glitch::io::CNumbersAttribute::~CNumbersAttribute()
// void glitch::io::CNumbersAttribute::~CNumbersAttribute(glitch::io::CNumbersAttribute *this);
// [0xf03360] (103 bytes) glitch::io::CTextureAttribute::~CTextureAttribute()
// void glitch::io::CTextureAttribute::~CTextureAttribute(glitch::io::CTextureAttribute *this);
// [0xf033d0] (81 bytes) glitch::io::CBoolAttribute::~CBoolAttribute()
// void glitch::io::CBoolAttribute::~CBoolAttribute(glitch::io::CBoolAttribute *this);
// [0xf03430] (81 bytes) glitch::io::CUserPointerAttribute::~CUserPointerAttribute()
// void glitch::io::CUserPointerAttribute::~CUserPointerAttribute(glitch::io::CUserPointerAttribute *this);
// [0xf03490] (81 bytes) glitch::io::CFloatAttribute::~CFloatAttribute()
// void glitch::io::CFloatAttribute::~CFloatAttribute(glitch::io::CFloatAttribute *this);
// [0xf034f0] (81 bytes) glitch::io::CIntAttribute::~CIntAttribute()
// void glitch::io::CIntAttribute::~CIntAttribute(glitch::io::CIntAttribute *this);
// [0xf03550] (141 bytes) glitch::io::CEnumAttribute::~CEnumAttribute()
// void glitch::io::CEnumAttribute::~CEnumAttribute(glitch::io::CEnumAttribute *this);
// [0xf035e0] (111 bytes) glitch::io::CTextureAttribute::~CTextureAttribute()
// void glitch::io::CTextureAttribute::~CTextureAttribute(glitch::io::CTextureAttribute *this);
// [0xf036c0] (102 bytes) glitch::io::CStringAttribute::~CStringAttribute()
// void glitch::io::CStringAttribute::~CStringAttribute(glitch::io::CStringAttribute *this);
// [0xf03730] (106 bytes) glitch::io::CBinaryAttribute::~CBinaryAttribute()
// void glitch::io::CBinaryAttribute::~CBinaryAttribute(glitch::io::CBinaryAttribute *this);
// [0xf037a0] (102 bytes) glitch::io::CBinaryAttribute::~CBinaryAttribute()
// void glitch::io::CBinaryAttribute::~CBinaryAttribute(glitch::io::CBinaryAttribute *this);
// [0xf03810] (133 bytes) glitch::io::CEnumAttribute::~CEnumAttribute()
// void glitch::io::CEnumAttribute::~CEnumAttribute(glitch::io::CEnumAttribute *this);
// [0xf03930] (193 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::~CXMLReaderImpl()
// void glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::~CXMLReaderImpl(void **this);
// [0xf03a00] (56 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::~CXMLReaderImpl()
// void glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::~CXMLReaderImpl(void **this);
// [0xf03a40] (294 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueAsFloat(char const*)const
// long double glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueAsFloat( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this, const char *a2);
// [0xf03b70] (210 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueSafe(char const*)const
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::getAttributeValueSafe( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this, const char *a2);
// [0xf03c50] (129 bytes) glitch::io::CGlfFileList::~CGlfFileList()
// void glitch::io::CGlfFileList::~CGlfFileList(glitch::io::CGlfFileList *this);
// [0xf03ce0] (110 bytes) glitch::io::CColorAttribute::~CColorAttribute()
// void glitch::io::CColorAttribute::~CColorAttribute(glitch::io::CColorAttribute *this);
// [0xf03d50] (102 bytes) glitch::io::CColorfAttribute::~CColorfAttribute()
// void glitch::io::CColorfAttribute::~CColorfAttribute(glitch::io::CColorfAttribute *this);
// [0xf03dc0] (102 bytes) glitch::io::CColorAttribute::~CColorAttribute()
// void glitch::io::CColorAttribute::~CColorAttribute(glitch::io::CColorAttribute *this);
// [0xf03e30] (102 bytes) glitch::io::CVector2DAttribute::~CVector2DAttribute()
// void glitch::io::CVector2DAttribute::~CVector2DAttribute(glitch::io::CVector2DAttribute *this);
// [0xf03ea0] (102 bytes) glitch::io::CVector3DAttribute::~CVector3DAttribute()
// void glitch::io::CVector3DAttribute::~CVector3DAttribute(glitch::io::CVector3DAttribute *this);
// [0xf03f10] (102 bytes) glitch::io::CVector4DAttribute::~CVector4DAttribute()
// void glitch::io::CVector4DAttribute::~CVector4DAttribute(glitch::io::CVector4DAttribute *this);
// [0xf03f80] (102 bytes) glitch::io::CVector2DIAttribute::~CVector2DIAttribute()
// void glitch::io::CVector2DIAttribute::~CVector2DIAttribute(glitch::io::CVector2DIAttribute *this);
// [0xf03ff0] (102 bytes) glitch::io::CVector3DIAttribute::~CVector3DIAttribute()
// void glitch::io::CVector3DIAttribute::~CVector3DIAttribute(glitch::io::CVector3DIAttribute *this);
// [0xf04060] (102 bytes) glitch::io::CVector4DIAttribute::~CVector4DIAttribute()
// void glitch::io::CVector4DIAttribute::~CVector4DIAttribute(glitch::io::CVector4DIAttribute *this);
// [0xf040d0] (102 bytes) glitch::io::CRectAttribute::~CRectAttribute()
// void glitch::io::CRectAttribute::~CRectAttribute(glitch::io::CRectAttribute *this);
// [0xf04140] (102 bytes) glitch::io::CMatrix2Attribute::~CMatrix2Attribute()
// void glitch::io::CMatrix2Attribute::~CMatrix2Attribute(glitch::io::CMatrix2Attribute *this);
// [0xf041b0] (102 bytes) glitch::io::CMatrix3Attribute::~CMatrix3Attribute()
// void glitch::io::CMatrix3Attribute::~CMatrix3Attribute(glitch::io::CMatrix3Attribute *this);
// [0xf04220] (102 bytes) glitch::io::CMatrixAttribute::~CMatrixAttribute()
// void glitch::io::CMatrixAttribute::~CMatrixAttribute(glitch::io::CMatrixAttribute *this);
// [0xf04290] (102 bytes) glitch::io::CQuaternionAttribute::~CQuaternionAttribute()
// void glitch::io::CQuaternionAttribute::~CQuaternionAttribute(glitch::io::CQuaternionAttribute *this);
// [0xf04300] (102 bytes) glitch::io::CBBoxAttribute::~CBBoxAttribute()
// void glitch::io::CBBoxAttribute::~CBBoxAttribute(glitch::io::CBBoxAttribute *this);
// [0xf04370] (102 bytes) glitch::io::CPlaneAttribute::~CPlaneAttribute()
// void glitch::io::CPlaneAttribute::~CPlaneAttribute(glitch::io::CPlaneAttribute *this);
// [0xf043e0] (102 bytes) glitch::io::CTriangleAttribute::~CTriangleAttribute()
// void glitch::io::CTriangleAttribute::~CTriangleAttribute(glitch::io::CTriangleAttribute *this);
// [0xf04450] (102 bytes) glitch::io::CLine2dAttribute::~CLine2dAttribute()
// void glitch::io::CLine2dAttribute::~CLine2dAttribute(glitch::io::CLine2dAttribute *this);
// [0xf044c0] (102 bytes) glitch::io::CLine3dAttribute::~CLine3dAttribute()
// void glitch::io::CLine3dAttribute::~CLine3dAttribute(glitch::io::CLine3dAttribute *this);
// [0xf04530] (110 bytes) glitch::io::CNumbersAttribute::~CNumbersAttribute()
// void glitch::io::CNumbersAttribute::~CNumbersAttribute(glitch::io::CNumbersAttribute *this);
// [0xf045a0] (110 bytes) glitch::io::CBBoxAttribute::~CBBoxAttribute()
// void glitch::io::CBBoxAttribute::~CBBoxAttribute(glitch::io::CBBoxAttribute *this);
// [0xf04610] (110 bytes) glitch::io::CVector2DIAttribute::~CVector2DIAttribute()
// void glitch::io::CVector2DIAttribute::~CVector2DIAttribute(glitch::io::CVector2DIAttribute *this);
// [0xf04680] (110 bytes) glitch::io::CLine3dAttribute::~CLine3dAttribute()
// void glitch::io::CLine3dAttribute::~CLine3dAttribute(glitch::io::CLine3dAttribute *this);
// [0xf046f0] (110 bytes) glitch::io::CTriangleAttribute::~CTriangleAttribute()
// void glitch::io::CTriangleAttribute::~CTriangleAttribute(glitch::io::CTriangleAttribute *this);
// [0xf04760] (110 bytes) glitch::io::CMatrix2Attribute::~CMatrix2Attribute()
// void glitch::io::CMatrix2Attribute::~CMatrix2Attribute(glitch::io::CMatrix2Attribute *this);
// [0xf047d0] (110 bytes) glitch::io::CLine2dAttribute::~CLine2dAttribute()
// void glitch::io::CLine2dAttribute::~CLine2dAttribute(glitch::io::CLine2dAttribute *this);
// [0xf04840] (110 bytes) glitch::io::CPlaneAttribute::~CPlaneAttribute()
// void glitch::io::CPlaneAttribute::~CPlaneAttribute(glitch::io::CPlaneAttribute *this);
// [0xf048b0] (110 bytes) glitch::io::CMatrixAttribute::~CMatrixAttribute()
// void glitch::io::CMatrixAttribute::~CMatrixAttribute(glitch::io::CMatrixAttribute *this);
// [0xf04920] (110 bytes) glitch::io::CVector3DAttribute::~CVector3DAttribute()
// void glitch::io::CVector3DAttribute::~CVector3DAttribute(glitch::io::CVector3DAttribute *this);
// [0xf04990] (110 bytes) glitch::io::CVector2DAttribute::~CVector2DAttribute()
// void glitch::io::CVector2DAttribute::~CVector2DAttribute(glitch::io::CVector2DAttribute *this);
// [0xf04a00] (110 bytes) glitch::io::CVector4DIAttribute::~CVector4DIAttribute()
// void glitch::io::CVector4DIAttribute::~CVector4DIAttribute(glitch::io::CVector4DIAttribute *this);
// [0xf04a70] (110 bytes) glitch::io::CColorfAttribute::~CColorfAttribute()
// void glitch::io::CColorfAttribute::~CColorfAttribute(glitch::io::CColorfAttribute *this);
// [0xf04ae0] (110 bytes) glitch::io::CQuaternionAttribute::~CQuaternionAttribute()
// void glitch::io::CQuaternionAttribute::~CQuaternionAttribute(glitch::io::CQuaternionAttribute *this);
// [0xf04b50] (110 bytes) glitch::io::CVector4DAttribute::~CVector4DAttribute()
// void glitch::io::CVector4DAttribute::~CVector4DAttribute(glitch::io::CVector4DAttribute *this);
// [0xf04bc0] (110 bytes) glitch::io::CRectAttribute::~CRectAttribute()
// void glitch::io::CRectAttribute::~CRectAttribute(glitch::io::CRectAttribute *this);
// [0xf04c30] (110 bytes) glitch::io::CMatrix3Attribute::~CMatrix3Attribute()
// void glitch::io::CMatrix3Attribute::~CMatrix3Attribute(glitch::io::CMatrix3Attribute *this);
// [0xf04ca0] (110 bytes) glitch::io::CVector3DIAttribute::~CVector3DIAttribute()
// void glitch::io::CVector3DIAttribute::~CVector3DIAttribute(glitch::io::CVector3DIAttribute *this);
// [0xf04d10] (63 bytes) glitch::io::CEnumAttribute::getString(void)
// glitch::io::CEnumAttribute *glitch::io::CEnumAttribute::getString(glitch::io::CEnumAttribute *this, int a2);
// [0xf04d50] (455 bytes) glitch::io::CStringAttribute::getString(void)
// glitch::io::CStringAttribute *glitch::io::CStringAttribute::getString( glitch::io::CStringAttribute *this, int a2);
// [0xf04f20] (549 bytes) glitch::io::IAttribute::setString(wchar_t const*)
// void glitch::io::IAttribute::setString(glitch::io::IAttribute *this, wchar_t *s);
// [0xf05150] (760 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueAsFloat(wchar_t const*)const
// long double glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueAsFloat( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this, const wchar_t *a2);
// [0xf05450] (538 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueAsFloat(int)const
// long double glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::getAttributeValueAsFloat( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, glitch::core *a17, float a18, char *a19);
// [0xf05670] (371 bytes) glitch::io::CQuaternionAttribute::getMatrix(void)
// glitch::io::CQuaternionAttribute *glitch::io::CQuaternionAttribute::getMatrix( glitch::io::CQuaternionAttribute *this, int a2);
// [0xf057f0] (60 bytes) glitch::io::CVector4DIAttribute::getMatrix(void)
// glitch::io::CVector4DIAttribute *glitch::io::CVector4DIAttribute::getMatrix( glitch::io::CVector4DIAttribute *this);
// [0xf05830] (60 bytes) glitch::io::CVector3DIAttribute::getMatrix(void)
// glitch::io::CVector3DIAttribute *glitch::io::CVector3DIAttribute::getMatrix( glitch::io::CVector3DIAttribute *this);
// [0xf05870] (60 bytes) glitch::io::CVector2DIAttribute::getMatrix(void)
// glitch::io::CVector2DIAttribute *glitch::io::CVector2DIAttribute::getMatrix( glitch::io::CVector2DIAttribute *this);
// [0xf058b0] (107 bytes) glitch::io::CVector4DAttribute::getMatrix(void)
// glitch::io::CVector4DAttribute *glitch::io::CVector4DAttribute::getMatrix( glitch::io::CVector4DAttribute *this, int a2);
// [0xf05920] (84 bytes) glitch::io::CVector3DAttribute::getMatrix(void)
// glitch::io::CVector3DAttribute *glitch::io::CVector3DAttribute::getMatrix( glitch::io::CVector3DAttribute *this, int a2);
// [0xf05980] (60 bytes) glitch::io::CVector2DAttribute::getMatrix(void)
// glitch::io::CVector2DAttribute *glitch::io::CVector2DAttribute::getMatrix( glitch::io::CVector2DAttribute *this);
// [0xf059c0] (635 bytes) glitch::io::CNumbersAttribute::getMatrix(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getMatrix( glitch::io::CNumbersAttribute *this, int a2);
// [0xf05c40] (60 bytes) glitch::io::IAttribute::getMatrix(void)
// glitch::io::IAttribute *glitch::io::IAttribute::getMatrix(glitch::io::IAttribute *this);
// [0xf05c80] (255 bytes) glitch::io::CTriangleAttribute::getPlane(void)
// float *glitch::io::CTriangleAttribute::getPlane(glitch::io::CTriangleAttribute *this, int a2);
// [0xf05d80] (157 bytes) glitch::io::CLightAttribute::setLight(boost::intrusive_ptr<glitch::video::CLight> const&)
// void glitch::io::CLightAttribute::setLight(glitch::io::CLightAttribute *this, volatile int32_t **a2);
// [0xf05e20] (157 bytes) glitch::io::CLightAttribute::setLight(boost::intrusive_ptr<glitch::video::CLight>)
// void glitch::io::CLightAttribute::setLight(int a1, volatile int32_t **a2);
// [0xf05ec0] (189 bytes) glitch::io::CLightAttribute::~CLightAttribute()
// void glitch::io::CLightAttribute::~CLightAttribute(glitch::io::CLightAttribute *this);
// [0xf06080] (197 bytes) glitch::io::CLightAttribute::~CLightAttribute()
// void glitch::io::CLightAttribute::~CLightAttribute(glitch::io::CLightAttribute *this);
// [0xf07180] (268 bytes) glitch::io::CNumbersAttribute::getFloatArray(void)
// glitch::io::CNumbersAttribute *glitch::io::CNumbersAttribute::getFloatArray( glitch::io::CNumbersAttribute *this, int a2);
// [0xf08590] (149 bytes) glitch::io::CStringAttribute::setInt(int)
// void glitch::io::CStringAttribute::setInt(glitch::io::CStringAttribute *this, int a2);
// [0xf08630] (2214 bytes) glitch::io::CStringAttribute::setFloat(float)
// int glitch::io::CStringAttribute::setFloat(glitch::io::CStringAttribute *this, float a2);
// [0xf09100] (45 bytes) glitch::io::CStringWArrayAttribute::setArray(std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>)
// std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *glitch::io::CStringWArrayAttribute::setArray(;
// [0xf09500] (169 bytes) void glitch::io::CBinaryAttributesWriter::writeString<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)
// int glitch::io::CBinaryAttributesWriter::writeString<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>(;
// [0xf0f380] (462 bytes) glitch::io::CEnumAttribute::setEnum(char const*,char const* const*)
// int glitch::io::CEnumAttribute::setEnum( const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **this, const char *a2, const char **a3);
// [0xf140e0] (522 bytes) glitch::io::CStringAttribute::setBinary(void *,int)
// char glitch::io::CStringAttribute::setBinary(const void **this, uint8_t *a2, int a3);
// [0xf142f0] (45 bytes) glitch::io::CEnumAttribute::setString(char const*)
// const void **glitch::io::CEnumAttribute::setString(const void **this, char *a2);
// [0xf14320] (119 bytes) glitch::io::CEnumAttribute::setInt(int)
// const void **glitch::io::CEnumAttribute::setInt(const void **this, int a2);
// [0xf14400] (125 bytes) glitch::io::CStringAttribute::setString(char const*)
// void glitch::io::CStringAttribute::setString(const void **this, char *a2);
// [0xf146b0] (111 bytes) void glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::convertTextData<unsigned long>(unsigned long *,char *,int)
// void glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::convertTextData<unsigned long>( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this, unsigned int *a2, char *a3, int a4);
// [0xf14720] (250 bytes) void glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::convertTextData<unsigned short>(unsigned short *,char *,int)
// void glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::convertTextData<unsigned short>( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this, uint16_t *a2, char *a3, int a4);
// [0xf14820] (117 bytes) void glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::convertTextData<char>(char *,char *,int)
// void glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::convertTextData<char>( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this, char *a2, char *a3, int a4);
// [0xf148a0] (721 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::readFile(glitch::io::IFileReadCallBack *)
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::readFile( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this, glitch::io::IFileReadCallBack *a2);
// [0xf14b80] (210 bytes) void glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::convertTextData<unsigned long>(unsigned long *,char *,int)
// void glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::convertTextData<unsigned long>( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this, unsigned int *a2, char *a3, int a4);
// [0xf14c60] (242 bytes) void glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::convertTextData<unsigned short>(unsigned short *,char *,int)
// void glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::convertTextData<unsigned short>( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this, uint16_t *a2, char *a3, int a4);
// [0xf14d60] (614 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::readFile(glitch::io::IFileReadCallBack *)
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::readFile( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this, glitch::io::IFileReadCallBack *a2);
// [0xf17e60] (710 bytes) void glitch::io::CBinaryAttributesReader::readStringImpl<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>,4u>(std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>> &)
// void glitch::io::CBinaryAttributesReader::readStringImpl<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>,4u>(;
// [0xf18130] (821 bytes) glitch::io::CStringAttribute::setString(wchar_t const*)
// void glitch::io::CStringAttribute::setString(glitch::io::CStringAttribute *this, wchar_t *s);
// [0xf189a0] (1929 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::parseOpeningXMLElement(void)
// void glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::parseOpeningXMLElement( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this);
// [0xf19130] (1255 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::parseCurrentNode(void)
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::parseCurrentNode( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this);
// [0xf19620] (186 bytes) glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::read(void)
// int glitch::io::CXMLReaderImpl<char,glitch::IReferenceCounted>::read( glitch::io::CXMLReaderImpl<char, glitch::IReferenceCounted> *this);
// [0xf196e0] (2209 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::parseOpeningXMLElement(void)
// void glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::parseOpeningXMLElement( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this);
// [0xf19f90] (1208 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::parseCurrentNode(void)
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::parseCurrentNode( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this);
// [0xf1a450] (186 bytes) glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::read(void)
// int glitch::io::CXMLReaderImpl<wchar_t,glitch::IReferenceCounted>::read( glitch::io::CXMLReaderImpl<wchar_t, glitch::IReferenceCounted> *this);
