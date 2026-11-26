#pragma once
// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_Json.h
// Library: glwebtools | Module: glwebtools_Json
// Binary Address Span: 0x13e4e20 .. 0x1400950 (209 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13e4e20] (714 bytes) glwebtools::Json::Reader::~Reader()
// void glwebtools::Json::Reader::~Reader(glwebtools::Json::Reader *this);
// [0x13f59d0] (27 bytes) glwebtools::Json::ValueAllocator::~ValueAllocator()
// void glwebtools::Json::ValueAllocator::~ValueAllocator(glwebtools::Json::ValueAllocator *this);
// [0x13f59f0] (27 bytes) glwebtools::Json::Writer::~Writer()
// void glwebtools::Json::Writer::~Writer(glwebtools::Json::Writer *this);
// [0x13f5a10] (56 bytes) glwebtools::Json::Writer::~Writer()
// void glwebtools::Json::Writer::~Writer(glwebtools::Json::Writer *this);
// [0x13f5a50] (56 bytes) glwebtools::Json::ValueAllocator::~ValueAllocator()
// void glwebtools::Json::ValueAllocator::~ValueAllocator(glwebtools::Json::ValueAllocator *this);
// [0x13f5bc0] (17 bytes) glwebtools::Json::ValueIteratorBase::ValueIteratorBase(void)
// struct glwebtools::Json::ValueIteratorBase *glwebtools::Json::ValueIteratorBase::ValueIteratorBase( glwebtools::Json::ValueIteratorBase *this);
// [0x13f5be0] (17 bytes) glwebtools::Json::ValueIteratorBase::ValueIteratorBase(std::_Rb_tree_iterator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>> const&)
// int glwebtools::Json::ValueIteratorBase::ValueIteratorBase(int a1, int *a2);
// [0x13f5c00] (12 bytes) glwebtools::Json::ValueIteratorBase::deref(void)const
// int glwebtools::Json::ValueIteratorBase::deref(glwebtools::Json::ValueIteratorBase *this);
// [0x13f5c10] (52 bytes) glwebtools::Json::ValueIteratorBase::increment(void)
// int glwebtools::Json::ValueIteratorBase::increment(glwebtools::Json::ValueIteratorBase *this);
// [0x13f5c50] (52 bytes) glwebtools::Json::ValueIteratorBase::decrement(void)
// int glwebtools::Json::ValueIteratorBase::decrement(glwebtools::Json::ValueIteratorBase *this);
// [0x13f5c90] (81 bytes) glwebtools::Json::ValueIteratorBase::computeDistance(glwebtools::Json::ValueIteratorBase const&)const
// int glwebtools::Json::ValueIteratorBase::computeDistance( glwebtools::Json::ValueIteratorBase *this, const glwebtools::Json::ValueIteratorBase *a2);
// [0x13f5cf0] (29 bytes) glwebtools::Json::ValueIteratorBase::isEqual(glwebtools::Json::ValueIteratorBase const&)const
// char glwebtools::Json::ValueIteratorBase::isEqual( glwebtools::Json::ValueIteratorBase *this, const glwebtools::Json::ValueIteratorBase *a2);
// [0x13f5d10] (13 bytes) glwebtools::Json::ValueIteratorBase::copy(glwebtools::Json::ValueIteratorBase const&)
// glwebtools::Json::ValueIteratorBase *glwebtools::Json::ValueIteratorBase::copy( glwebtools::Json::ValueIteratorBase *this, const glwebtools::Json::ValueIteratorBase *a2);
// [0x13f5d20] (34 bytes) glwebtools::Json::ValueConstIterator::ValueConstIterator(void)
// struct glwebtools::Json::ValueConstIterator *glwebtools::Json::ValueConstIterator::ValueConstIterator( glwebtools::Json::ValueConstIterator *this);
// [0x13f5d50] (42 bytes) glwebtools::Json::ValueConstIterator::ValueConstIterator(std::_Rb_tree_iterator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>> const&)
// int glwebtools::Json::ValueConstIterator::ValueConstIterator(int a1, int *a2);
// [0x13f5d80] (58 bytes) glwebtools::Json::ValueConstIterator::operator=(glwebtools::Json::ValueIteratorBase const&)
// glwebtools::Json::ValueConstIterator *glwebtools::Json::ValueConstIterator::operator=( glwebtools::Json::ValueConstIterator *this, const glwebtools::Json::ValueIteratorBase *a2);
// [0x13f5dc0] (34 bytes) glwebtools::Json::ValueIterator::ValueIterator(void)
// struct glwebtools::Json::ValueIterator *glwebtools::Json::ValueIterator::ValueIterator( glwebtools::Json::ValueIterator *this);
// [0x13f5df0] (42 bytes) glwebtools::Json::ValueIterator::ValueIterator(std::_Rb_tree_iterator<std::pair<glwebtools::Json::Value::CZString const,glwebtools::Json::Value>> const&)
// int glwebtools::Json::ValueIterator::ValueIterator(int a1, int *a2);
// [0x13f5e20] (58 bytes) glwebtools::Json::ValueIterator::ValueIterator(glwebtools::Json::ValueConstIterator const&)
// glwebtools::Json::ValueIterator *glwebtools::Json::ValueIterator::ValueIterator( glwebtools::Json::ValueIterator *this, const glwebtools::Json::ValueConstIterator *a2);
// [0x13f5e60] (58 bytes) glwebtools::Json::ValueIterator::ValueIterator(glwebtools::Json::ValueIterator const&)
// glwebtools::Json::ValueIterator *glwebtools::Json::ValueIterator::ValueIterator( glwebtools::Json::ValueIterator *this, const glwebtools::Json::ValueIterator *a2);
// [0x13f5ea0] (58 bytes) glwebtools::Json::ValueIterator::operator=(glwebtools::Json::ValueIterator const&)
// glwebtools::Json::ValueIterator *glwebtools::Json::ValueIterator::operator=( glwebtools::Json::ValueIterator *this, const glwebtools::Json::ValueIterator *a2);
// [0x13f5ee0] (15 bytes) glwebtools::Json::Value::CommentInfo::CommentInfo(void)
// struct glwebtools::Json::Value::CommentInfo *glwebtools::Json::Value::CommentInfo::CommentInfo( glwebtools::Json::Value::CommentInfo *this);
// [0x13f5ef0] (42 bytes) glwebtools::Json::Value::CommentInfo::~CommentInfo()
// void glwebtools::Json::Value::CommentInfo::~CommentInfo(glwebtools::Json::Value::CommentInfo *this);
// [0x13f5f20] (75 bytes) glwebtools::Json::Value::CommentInfo::setComment(char const*)
// int glwebtools::Json::Value::CommentInfo::setComment( glwebtools::Json::Value::CommentInfo *this, const char *a2);
// [0x13f5f70] (18 bytes) glwebtools::Json::Value::CZString::CZString(int)
// struct glwebtools::Json::Value::CZString *glwebtools::Json::Value::CZString::CZString( glwebtools::Json::Value::CZString *this, int a2);
// [0x13f5f90] (79 bytes) glwebtools::Json::Value::CZString::CZString(char const*,glwebtools::Json::Value::CZString::DuplicationPolicy)
// void glwebtools::Json::Value::CZString::CZString(int *a1, int a2, int a3);
// [0x13f5fe0] (125 bytes) glwebtools::Json::Value::CZString::CZString(glwebtools::Json::Value::CZString const&)
// glwebtools::Json::Value::CZString *glwebtools::Json::Value::CZString::CZString( glwebtools::Json::Value::CZString *this, const glwebtools::Json::Value::CZString *a2);
// [0x13f6060] (59 bytes) glwebtools::Json::Value::CZString::~CZString()
// void glwebtools::Json::Value::CZString::~CZString(glwebtools::Json::Value::CZString *this);
// [0x13f60a0] (31 bytes) glwebtools::Json::Value::CZString::swap(glwebtools::Json::Value::CZString&)
// glwebtools::Json::Value::CZString *glwebtools::Json::Value::CZString::swap( glwebtools::Json::Value::CZString *this, glwebtools::Json::Value::CZString *a2);
// [0x13f60c0] (90 bytes) glwebtools::Json::Value::CZString::operator=(glwebtools::Json::Value::CZString const&)
// glwebtools::Json::Value::CZString *glwebtools::Json::Value::CZString::operator=( glwebtools::Json::Value::CZString *this, const glwebtools::Json::Value::CZString *a2);
// [0x13f6120] (71 bytes) glwebtools::Json::Value::CZString::operator<(glwebtools::Json::Value::CZString const&)const
// char glwebtools::Json::Value::CZString::operator<(const char **this, const char **a2);
// [0x13f6170] (71 bytes) glwebtools::Json::Value::CZString::operator==(glwebtools::Json::Value::CZString const&)const
// bool glwebtools::Json::Value::CZString::operator==(const char **this, const char **a2);
// [0x13f61c0] (12 bytes) glwebtools::Json::Value::CZString::index(void)const
// int glwebtools::Json::Value::CZString::index(glwebtools::Json::Value::CZString *this);
// [0x13f61d0] (11 bytes) glwebtools::Json::Value::CZString::c_str(void)const
// int glwebtools::Json::Value::CZString::c_str(glwebtools::Json::Value::CZString *this);
// [0x13f61e0] (50 bytes) glwebtools::Json::ValueIteratorBase::memberName(void)const
// void *glwebtools::Json::ValueIteratorBase::memberName(glwebtools::Json::ValueIteratorBase *this);
// [0x13f6220] (108 bytes) glwebtools::Json::ValueIteratorBase::index(void)const
// int glwebtools::Json::ValueIteratorBase::index(glwebtools::Json::ValueIteratorBase *this);
// [0x13f6290] (13 bytes) glwebtools::Json::Value::CZString::isStaticString(void)const
// bool glwebtools::Json::Value::CZString::isStaticString(glwebtools::Json::Value::CZString *this);
// [0x13f62a0] (185 bytes) glwebtools::Json::Value::Value(glwebtools::Json::ValueType)
// uint32_t *glwebtools::Json::Value::Value(int a1, uint32_t *a2);
// [0x13f6360] (22 bytes) glwebtools::Json::Value::Value(int)
// struct glwebtools::Json::Value *glwebtools::Json::Value::Value(glwebtools::Json::Value *this, int a2);
// [0x13f6380] (22 bytes) glwebtools::Json::Value::Value(unsigned int)
// glwebtools::Json::Value *glwebtools::Json::Value::Value(glwebtools::Json::Value *this, unsigned int a2);
// [0x13f63a0] (26 bytes) glwebtools::Json::Value::Value(double)
// glwebtools::Json::Value *glwebtools::Json::Value::Value(glwebtools::Json::Value *this, double a2);
// [0x13f63c0] (63 bytes) glwebtools::Json::Value::Value(char const*)
// glwebtools::Json::Value *glwebtools::Json::Value::Value(glwebtools::Json::Value *this, const char *a2);
// [0x13f6400] (79 bytes) glwebtools::Json::Value::Value(char const*,char const*)
// glwebtools::Json::Value *glwebtools::Json::Value::Value( glwebtools::Json::Value *this, const char *a2, const char *a3);
// [0x13f6450] (78 bytes) glwebtools::Json::Value::Value(std::string const&)
// int glwebtools::Json::Value::Value(int a1, uint32_t *a2);
// [0x13f64a0] (28 bytes) glwebtools::Json::Value::Value(glwebtools::Json::StaticString const&)
// int glwebtools::Json::Value::Value(int a1, uint32_t *a2);
// [0x13f64c0] (187 bytes) glwebtools::Json::ValueIteratorBase::key(void)const
// glwebtools::Json::ValueIteratorBase *glwebtools::Json::ValueIteratorBase::key( glwebtools::Json::ValueIteratorBase *this, int a2);
// [0x13f6580] (22 bytes) glwebtools::Json::Value::Value(bool)
// glwebtools::Json::Value *glwebtools::Json::Value::Value(glwebtools::Json::Value *this, bool a2);
// [0x13f65a0] (109 bytes) glwebtools::Json::Value::swap(glwebtools::Json::Value&)
// glwebtools::Json::Value *glwebtools::Json::Value::swap( glwebtools::Json::Value *this, glwebtools::Json::Value *a2);
// [0x13f6610] (13 bytes) glwebtools::Json::Value::type(void)const
// int glwebtools::Json::Value::type(glwebtools::Json::Value *this);
// [0x13f6620] (9 bytes) glwebtools::Json::Value::compare(glwebtools::Json::Value const&)
// int glwebtools::Json::Value::compare();
// [0x13f6630] (333 bytes) glwebtools::Json::Value::operator==(glwebtools::Json::Value const&)const
// char glwebtools::Json::Value::operator==(const char **this, const glwebtools::Json::Value *a2);
// [0x13f6780] (45 bytes) glwebtools::Json::Value::operator!=(glwebtools::Json::Value const&)const
// int glwebtools::Json::Value::operator!=(const char **this, const glwebtools::Json::Value *a2);
// [0x13f67b0] (11 bytes) glwebtools::Json::Value::asCString(void)const
// int glwebtools::Json::Value::asCString(glwebtools::Json::Value *this);
// [0x13f67c0] (179 bytes) glwebtools::Json::Value::asString(void)const
// glwebtools::Json::Value *glwebtools::Json::Value::asString(glwebtools::Json::Value *this, int a2);
// [0x13f6880] (65 bytes) glwebtools::Json::Value::asInt(void)const
// int glwebtools::Json::Value::asInt(glwebtools::Json::Value *this);
// [0x13f68d0] (112 bytes) glwebtools::Json::Value::asUInt(void)const
// int glwebtools::Json::Value::asUInt(glwebtools::Json::Value *this);
// [0x13f6940] (127 bytes) glwebtools::Json::Value::asDouble(void)const
// long double glwebtools::Json::Value::asDouble(glwebtools::Json::Value *this);
// [0x13f69c0] (100 bytes) glwebtools::Json::Value::asBool(void)const
// char glwebtools::Json::Value::asBool(glwebtools::Json::Value *this);
// [0x13f6a30] (505 bytes) glwebtools::Json::Value::isConvertibleTo(glwebtools::Json::ValueType)const
// char glwebtools::Json::Value::isConvertibleTo(uint8_t *a1, int a2);
// [0x13f6c30] (91 bytes) glwebtools::Json::Value::size(void)const
// int glwebtools::Json::Value::size(glwebtools::Json::Value *this);
// [0x13f6c90] (247 bytes) glwebtools::Json::Value::operator[](unsigned int)const
// void *glwebtools::Json::Value::operator[](glwebtools::Json::Value *this, unsigned int a2);
// [0x13f6d90] (41 bytes) glwebtools::Json::Value::isValidIndex(unsigned int)const
// bool glwebtools::Json::Value::isValidIndex(glwebtools::Json::Value *this, unsigned int a2);
// [0x13f6dc0] (255 bytes) glwebtools::Json::Value::operator[](char const*)const
// void *glwebtools::Json::Value::operator[](glwebtools::Json::Value *this, const char *a2);
// [0x13f6ec0] (44 bytes) glwebtools::Json::Value::operator[](std::string const&)const
// void *glwebtools::Json::Value::operator[](glwebtools::Json::Value *a1, const char **a2);
// [0x13f6ef0] (51 bytes) glwebtools::Json::Value::isMember(char const*)const
// bool glwebtools::Json::Value::isMember(glwebtools::Json::Value *this, char *a2);
// [0x13f6f30] (44 bytes) glwebtools::Json::Value::isMember(std::string const&)const
// bool glwebtools::Json::Value::isMember(glwebtools::Json::Value *a1, char **a2);
// [0x13f6f60] (14 bytes) glwebtools::Json::Value::isNull(void)const
// bool glwebtools::Json::Value::isNull(glwebtools::Json::Value *this);
// [0x13f6f70] (34 bytes) glwebtools::Json::Value::operator!(void)const
// bool glwebtools::Json::Value::operator!(glwebtools::Json::Value *this);
// [0x13f6fa0] (14 bytes) glwebtools::Json::Value::isBool(void)const
// bool glwebtools::Json::Value::isBool(glwebtools::Json::Value *this);
// [0x13f6fb0] (14 bytes) glwebtools::Json::Value::isInt(void)const
// bool glwebtools::Json::Value::isInt(glwebtools::Json::Value *this);
// [0x13f6fc0] (14 bytes) glwebtools::Json::Value::isUInt(void)const
// bool glwebtools::Json::Value::isUInt(glwebtools::Json::Value *this);
// [0x13f6fd0] (25 bytes) glwebtools::Json::Value::isIntegral(void)const
// int glwebtools::Json::Value::isIntegral(glwebtools::Json::Value *this);
// [0x13f6ff0] (14 bytes) glwebtools::Json::Value::isDouble(void)const
// bool glwebtools::Json::Value::isDouble(glwebtools::Json::Value *this);
// [0x13f7000] (69 bytes) glwebtools::Json::Value::isNumeric(void)const
// int glwebtools::Json::Value::isNumeric(glwebtools::Json::Value *this);
// [0x13f7050] (14 bytes) glwebtools::Json::Value::isString(void)const
// bool glwebtools::Json::Value::isString(glwebtools::Json::Value *this);
// [0x13f7060] (22 bytes) glwebtools::Json::Value::isArray(void)const
// int glwebtools::Json::Value::isArray(glwebtools::Json::Value *this);
// [0x13f7080] (22 bytes) glwebtools::Json::Value::isObject(void)const
// int glwebtools::Json::Value::isObject(glwebtools::Json::Value *this);
// [0x13f70a0] (102 bytes) glwebtools::Json::Value::empty(void)const
// bool glwebtools::Json::Value::empty(glwebtools::Json::Value *this);
// [0x13f7110] (148 bytes) glwebtools::Json::Value::setComment(char const*,glwebtools::Json::CommentPlacement)
// int glwebtools::Json::Value::setComment(int a1, char *a2, int a3);
// [0x13f71b0] (52 bytes) glwebtools::Json::Value::setComment(std::string const&,glwebtools::Json::CommentPlacement)
// int glwebtools::Json::Value::setComment(int a1, char **a2, int a3);
// [0x13f71f0] (26 bytes) glwebtools::Json::Value::hasComment(glwebtools::Json::CommentPlacement)const
// bool glwebtools::Json::Value::hasComment(int a1, int a2);
// [0x13f7210] (140 bytes) glwebtools::Json::Value::getComment(glwebtools::Json::CommentPlacement)const
// int glwebtools::Json::Value::getComment(int a1, int a2, int a3);
// [0x13f72a0] (103 bytes) glwebtools::Json::Value::begin(void)const
// glwebtools::Json::Value *glwebtools::Json::Value::begin(glwebtools::Json::Value *this, uint8_t *a2);
// [0x13f7310] (103 bytes) glwebtools::Json::Value::end(void)const
// glwebtools::Json::Value *glwebtools::Json::Value::end(glwebtools::Json::Value *this, int a2);
// [0x13f7380] (103 bytes) glwebtools::Json::Value::begin(void)
// glwebtools::Json::Value *glwebtools::Json::Value::begin(glwebtools::Json::Value *this, uint8_t *a2);
// [0x13f73f0] (103 bytes) glwebtools::Json::Value::end(void)
// glwebtools::Json::Value *glwebtools::Json::Value::end(glwebtools::Json::Value *this, int a2);
// [0x13f7460] (34 bytes) glwebtools::Json::PathArgument::PathArgument(void)
// struct glwebtools::Json::PathArgument *glwebtools::Json::PathArgument::PathArgument( glwebtools::Json::PathArgument *this);
// [0x13f7490] (41 bytes) glwebtools::Json::PathArgument::PathArgument(unsigned int)
// glwebtools::Json::PathArgument *glwebtools::Json::PathArgument::PathArgument( glwebtools::Json::PathArgument *this, unsigned int a2);
// [0x13f74c0] (71 bytes) glwebtools::Json::PathArgument::PathArgument(char const*)
// glwebtools::Json::PathArgument *glwebtools::Json::PathArgument::PathArgument( glwebtools::Json::PathArgument *this, char *a2);
// [0x13f7510] (73 bytes) glwebtools::Json::PathArgument::PathArgument(std::string const&)
// int glwebtools::Json::PathArgument::PathArgument(int a1, char **a2);
// [0x13f7560] (9 bytes) glwebtools::Json::Path::invalidPath(std::string const&,int)
// void glwebtools::Json::Path::invalidPath();
// [0x13f7570] (161 bytes) glwebtools::Json::Path::resolve(glwebtools::Json::Value const&)const
// const glwebtools::Json::Value *glwebtools::Json::Path::resolve( glwebtools::Json::Path *this, const glwebtools::Json::Value *a2);
// [0x13f7620] (14 bytes) glwebtools::Json::Features::Features(void)
// struct glwebtools::Json::Features *glwebtools::Json::Features::Features(glwebtools::Json::Features *this);
// [0x13f7630] (52 bytes) glwebtools::Json::Features::all(void)
// glwebtools::Json::Features *glwebtools::Json::Features::all(glwebtools::Json::Features *this);
// [0x13f7670] (59 bytes) glwebtools::Json::Features::strictMode(void)
// glwebtools::Json::Features *glwebtools::Json::Features::strictMode(glwebtools::Json::Features *this);
// [0x13f76b0] (55 bytes) glwebtools::Json::Reader::skipSpaces(void)
// char *glwebtools::Json::Reader::skipSpaces(glwebtools::Json::Reader *this);
// [0x13f76f0] (106 bytes) glwebtools::Json::Reader::match(char const*,int)
// int glwebtools::Json::Reader::match(glwebtools::Json::Reader *this, const char *a2, int a3);
// [0x13f7760] (69 bytes) glwebtools::Json::Reader::readNumber(void)
// char *glwebtools::Json::Reader::readNumber(glwebtools::Json::Reader *this);
// [0x13f77b0] (37 bytes) glwebtools::Json::Reader::currentValue(void)
// int glwebtools::Json::Reader::currentValue(glwebtools::Json::Reader *this);
// [0x13f77e0] (24 bytes) glwebtools::Json::Reader::getNextChar(void)
// int glwebtools::Json::Reader::getNextChar(glwebtools::Json::Reader *this);
// [0x13f7800] (89 bytes) glwebtools::Json::Reader::readString(void)
// int glwebtools::Json::Reader::readString(glwebtools::Json::Reader *this);
// [0x13f7860] (60 bytes) glwebtools::Json::Reader::readCppStyleComment(void)
// int glwebtools::Json::Reader::readCppStyleComment(glwebtools::Json::Reader *this);
// [0x13f78a0] (69 bytes) glwebtools::Json::Reader::readCStyleComment(void)
// bool glwebtools::Json::Reader::readCStyleComment(glwebtools::Json::Reader *this);
// [0x13f78f0] (127 bytes) glwebtools::Json::Reader::getLocationLineAndColumn(char const*,int &,int &)const
// int *glwebtools::Json::Reader::getLocationLineAndColumn( glwebtools::Json::Reader *this, const char *a2, int *a3, int *a4);
// [0x13f7970] (146 bytes) glwebtools::Json::Reader::getLocationLineAndColumn(char const*)const
// glwebtools::Json::Reader *glwebtools::Json::Reader::getLocationLineAndColumn( glwebtools::Json::Reader *this, glwebtools::Json::Reader *a2, char *a3);
// [0x13f7a10] (204 bytes) glwebtools::Json::valueToString(int)
// glwebtools::Json *glwebtools::Json::valueToString(glwebtools::Json *this, int a2);
// [0x13f7ae0] (164 bytes) glwebtools::Json::valueToString(unsigned int)
// glwebtools::Json *glwebtools::Json::valueToString(glwebtools::Json *this, unsigned int a2);
// [0x13f7b90] (312 bytes) glwebtools::Json::valueToString(double)
// glwebtools::Json *glwebtools::Json::valueToString(glwebtools::Json *this, double a2);
// [0x13f7cd0] (84 bytes) glwebtools::Json::valueToString(bool)
// glwebtools::Json *glwebtools::Json::valueToString(glwebtools::Json *this, bool a2);
// [0x13f7d30] (31 bytes) glwebtools::Json::FastWriter::FastWriter(void)
// struct glwebtools::Json::FastWriter *glwebtools::Json::FastWriter::FastWriter( glwebtools::Json::FastWriter *this);
// [0x13f7d50] (118 bytes) glwebtools::Json::Value::toCompactString(void)const
// glwebtools::Json::Value *glwebtools::Json::Value::toCompactString(glwebtools::Json::Value *this, int a2);
// [0x13f7dd0] (13 bytes) glwebtools::Json::FastWriter::enableYAMLCompatibility(void)
// glwebtools::Json::FastWriter *glwebtools::Json::FastWriter::enableYAMLCompatibility( glwebtools::Json::FastWriter *this);
// [0x13f7de0] (74 bytes) glwebtools::Json::StyledWriter::StyledWriter(void)
// struct glwebtools::Json::StyledWriter *glwebtools::Json::StyledWriter::StyledWriter( glwebtools::Json::StyledWriter *this);
// [0x13f7e30] (238 bytes) glwebtools::Json::Value::toStyledString(void)const
// glwebtools::Json::Value *glwebtools::Json::Value::toStyledString(glwebtools::Json::Value *this, int a2);
// [0x13f7f20] (176 bytes) glwebtools::Json::StyledWriter::writeIndent(std::string &)
// int glwebtools::Json::StyledWriter::writeIndent(int a1, int *a2);
// [0x13f7fd0] (72 bytes) glwebtools::Json::StyledWriter::writeWithIndent(std::string const&,std::string &)
// int glwebtools::Json::StyledWriter::writeWithIndent(int a1, int a2, int *a3);
// [0x13f8020] (143 bytes) glwebtools::Json::StyledWriter::indent(void)
// int glwebtools::Json::StyledWriter::indent(glwebtools::Json::StyledWriter *this);
// [0x13f80b0] (129 bytes) glwebtools::Json::StyledWriter::unindent(void)
// int glwebtools::Json::StyledWriter::unindent(glwebtools::Json::StyledWriter *this);
// [0x13f8140] (120 bytes) glwebtools::Json::StyledWriter::hasCommentForValue(glwebtools::Json::Value const&)
// int glwebtools::Json::StyledWriter::hasCommentForValue( glwebtools::Json::StyledWriter *this, const glwebtools::Json::Value *a2);
// [0x13f81c0] (283 bytes) glwebtools::Json::StyledWriter::normalizeEOL(std::string const&)
// int *glwebtools::Json::StyledWriter::normalizeEOL(int *a1, uint32_t *a2);
// [0x13f82e0] (259 bytes) glwebtools::Json::StyledWriter::writeCommentBeforeValue(glwebtools::Json::Value const&,std::string &)
// char glwebtools::Json::StyledWriter::writeCommentBeforeValue(int a1, int a2, int a3);
// [0x13f83f0] (91 bytes) glwebtools::Json::StyledStreamWriter::StyledStreamWriter(std::string)
// int glwebtools::Json::StyledStreamWriter::StyledStreamWriter(uint32_t *a1, int a2);
// [0x13f8450] (94 bytes) glwebtools::Json::StyledStreamWriter::writeIndent(void)
// int glwebtools::Json::StyledStreamWriter::writeIndent(glwebtools::Json::StyledStreamWriter *this);
// [0x13f84b0] (76 bytes) glwebtools::Json::StyledStreamWriter::writeWithIndent(std::string const&)
// int glwebtools::Json::StyledStreamWriter::writeWithIndent(glwebtools::Json::StyledStreamWriter *a1, uint32_t *a2);
// [0x13f8500] (44 bytes) glwebtools::Json::StyledStreamWriter::indent(void)
// int glwebtools::Json::StyledStreamWriter::indent(glwebtools::Json::StyledStreamWriter *this);
// [0x13f8530] (135 bytes) glwebtools::Json::StyledStreamWriter::unindent(void)
// int glwebtools::Json::StyledStreamWriter::unindent(glwebtools::Json::StyledStreamWriter *this);
// [0x13f85c0] (120 bytes) glwebtools::Json::StyledStreamWriter::hasCommentForValue(glwebtools::Json::Value const&)
// int glwebtools::Json::StyledStreamWriter::hasCommentForValue( glwebtools::Json::StyledStreamWriter *this, const glwebtools::Json::Value *a2);
// [0x13f8640] (283 bytes) glwebtools::Json::StyledStreamWriter::normalizeEOL(std::string const&)
// int *glwebtools::Json::StyledStreamWriter::normalizeEOL(int *a1, uint32_t *a2);
// [0x13f8760] (276 bytes) glwebtools::Json::StyledStreamWriter::writeCommentBeforeValue(glwebtools::Json::Value const&)
// char glwebtools::Json::StyledStreamWriter::writeCommentBeforeValue( glwebtools::Json::StyledStreamWriter *this, const glwebtools::Json::Value *a2);
// [0x13f8880] (452 bytes) glwebtools::Json::Reader::addComment(char const*,char const*,glwebtools::Json::CommentPlacement)
// int glwebtools::Json::Reader::addComment(int a1, void *a2, int a3, int a4);
// [0x13f8a50] (334 bytes) glwebtools::Json::Reader::readComment(void)
// int glwebtools::Json::Reader::readComment(glwebtools::Json::Reader *this);
// [0x13f8ba0] (347 bytes) glwebtools::Json::Reader::readToken(glwebtools::Json::Reader::Token &)
// int glwebtools::Json::Reader::readToken(glwebtools::Json::Reader *a1, uint32_t *a2);
// [0x13f8d00] (102 bytes) glwebtools::Json::Reader::skipCommentTokens(glwebtools::Json::Reader::Token &)
// int glwebtools::Json::Reader::skipCommentTokens(glwebtools::Json::Reader *a1, uint32_t *a2);
// [0x13f8d70] (652 bytes) glwebtools::Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(glwebtools::Json::Value const&)
// char glwebtools::Json::StyledStreamWriter::writeCommentAfterValueOnSameLine( glwebtools::Json::StyledStreamWriter *this, const glwebtools::Json::Value *a2);
// [0x13f9000] (622 bytes) glwebtools::Json::StyledWriter::writeCommentAfterValueOnSameLine(glwebtools::Json::Value const&,std::string &)
// char glwebtools::Json::StyledWriter::writeCommentAfterValueOnSameLine(int a1, int a2, int a3);
// [0x13f9270] (983 bytes) glwebtools::Json::Reader::getFormatedErrorMessages(void)const
// glwebtools::Json::Reader *glwebtools::Json::Reader::getFormatedErrorMessages( glwebtools::Json::Reader *this, char *a2);
// [0x13f9650] (92 bytes) glwebtools::Json::Value::clear(void)
// glwebtools::Json::Value *glwebtools::Json::Value::clear(glwebtools::Json::Value *this);
// [0x13f96b0] (170 bytes) glwebtools::Json::Value::~Value()
// void glwebtools::Json::Value::~Value(glwebtools::Json::Value *this);
// [0x13f9760] (260 bytes) glwebtools::Json::Value::operator<(glwebtools::Json::Value const&)const
// char glwebtools::Json::Value::operator<(glwebtools::Json::Value *this, const char **a2);
// [0x13f9870] (42 bytes) glwebtools::Json::Value::operator>(glwebtools::Json::Value const&)const
// char glwebtools::Json::Value::operator>(const char **this, const glwebtools::Json::Value *a2);
// [0x13f98a0] (45 bytes) glwebtools::Json::Value::operator<=(glwebtools::Json::Value const&)const
// int glwebtools::Json::Value::operator<=(glwebtools::Json::Value *this, const char **a2);
// [0x13f98d0] (45 bytes) glwebtools::Json::Value::operator>=(glwebtools::Json::Value const&)const
// int glwebtools::Json::Value::operator>=(glwebtools::Json::Value *this, const char **a2);
// [0x13f9900] (146 bytes) glwebtools::Json::StyledStreamWriter::pushValue(std::string const&)
// int glwebtools::Json::StyledStreamWriter::pushValue(int a1, uint32_t *a2);
// [0x13f99a0] (590 bytes) glwebtools::Json::Value::getMemberNames(void)const
// glwebtools::Json::Value *glwebtools::Json::Value::getMemberNames(glwebtools::Json::Value *this, uint8_t *a2);
// [0x13f9bf0] (141 bytes) glwebtools::Json::StyledWriter::pushValue(std::string const&,std::string &)
// int glwebtools::Json::StyledWriter::pushValue(int a1, int a2, int a3);
// [0x13f9c80] (162 bytes) glwebtools::Json::Path::addPathInArg(std::string const&,std::vector<glwebtools::Json::PathArgument const*,std::allocator<glwebtools::Json::PathArgument const*>> const&,__gnu_cxx::__normal_iterator<glwebtools::Json::PathArgument const* const*,std::vector<glwebtools::Json::PathArgument const*,std::allocator<glwebtools::Json::PathArgument const*>>> &,glwebtools::Json::PathArgument::Kind)
// int *glwebtools::Json::Path::addPathInArg(int a1, int a2, int a3, int **a4, int *a5);
// [0x13f9d30] (895 bytes) glwebtools::Json::Path::makePath(std::string const&,std::vector<glwebtools::Json::PathArgument const*,std::allocator<glwebtools::Json::PathArgument const*>> const&)
// void glwebtools::Json::Path::makePath(int a1, uint32_t *a2, int **a3);
// [0x13fa0b0] (449 bytes) glwebtools::Json::Path::Path(std::string const&,glwebtools::Json::PathArgument const&,glwebtools::Json::PathArgument const&,glwebtools::Json::PathArgument const&,glwebtools::Json::PathArgument const&,glwebtools::Json::PathArgument const&)
// void glwebtools::Json::Path::Path(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7);
// [0x13fa280] (395 bytes) glwebtools::Json::Value::Value(glwebtools::Json::Value const&)
// glwebtools::Json::Value *glwebtools::Json::Value::Value( glwebtools::Json::Value *this, const glwebtools::Json::Value *a2);
// [0x13fa410] (237 bytes) glwebtools::Json::Path::resolve(glwebtools::Json::Value const&,glwebtools::Json::Value const&)const
// glwebtools::Json::Path *glwebtools::Json::Path::resolve( glwebtools::Json::Path *this, const glwebtools::Json::Value *a2, const glwebtools::Json::Value *a3, glwebtools::Json::Value *a4);
// [0x13fa500] (87 bytes) glwebtools::Json::Value::get(char const*,glwebtools::Json::Value const&)const
// glwebtools::Json::Value *glwebtools::Json::Value::get( glwebtools::Json::Value *this, glwebtools::Json::Value *a2, const glwebtools::Json::Value *a3, glwebtools::Json::Value *a4);
// [0x13fa560] (82 bytes) glwebtools::Json::Value::get(std::string const&,glwebtools::Json::Value const&)const
// glwebtools::Json::Value *glwebtools::Json::Value::get( glwebtools::Json::Value *a1, char *a2, const glwebtools::Json::Value **a3, glwebtools::Json::Value *a4);
// [0x13fa5c0] (87 bytes) glwebtools::Json::Value::get(unsigned int,glwebtools::Json::Value const&)const
// glwebtools::Json::Value *glwebtools::Json::Value::get( glwebtools::Json::Value *this, glwebtools::Json::Value *a2, const glwebtools::Json::Value *a3, glwebtools::Json::Value *a4);
// [0x13fa620] (90 bytes) glwebtools::Json::Value::operator=(glwebtools::Json::Value const&)
// glwebtools::Json::Value *glwebtools::Json::Value::operator=( glwebtools::Json::Value *this, const glwebtools::Json::Value *a2);
// [0x13fa680] (346 bytes) glwebtools::Json::Value::resolveReference(char const*,bool)
// int glwebtools::Json::Value::resolveReference(glwebtools::Json::Value *this, const char *a2, bool a3);
// [0x13fa7e0] (52 bytes) glwebtools::Json::Value::operator[](glwebtools::Json::StaticString const&)
// int glwebtools::Json::Value::operator[](glwebtools::Json::Value *a1, const char **a2);
// [0x13fa820] (50 bytes) glwebtools::Json::Value::operator[](char const*)
// int glwebtools::Json::Value::operator[](glwebtools::Json::Value *this, char *a2);
// [0x13fa860] (44 bytes) glwebtools::Json::Value::operator[](std::string const&)
// int glwebtools::Json::Value::operator[](glwebtools::Json::Value *a1, char **a2);
// [0x13fa890] (321 bytes) glwebtools::Json::Value::operator[](unsigned int)
// int glwebtools::Json::Value::operator[](glwebtools::Json::Value *this, unsigned int a2);
// [0x13fa9e0] (136 bytes) glwebtools::Json::Path::make(glwebtools::Json::Value &)const
// glwebtools::Json::Value *glwebtools::Json::Path::make( glwebtools::Json::Path *this, glwebtools::Json::Value *a2);
// [0x13faa70] (76 bytes) glwebtools::Json::Value::append(glwebtools::Json::Value const&)
// glwebtools::Json::Value *glwebtools::Json::Value::append( glwebtools::Json::Value *this, const glwebtools::Json::Value *a2);
// [0x13faac0] (395 bytes) glwebtools::Json::Value::removeMember(char const*)
// glwebtools::Json::Value *glwebtools::Json::Value::removeMember( glwebtools::Json::Value *this, const char *a2, int a3);
// [0x13fac50] (74 bytes) glwebtools::Json::Value::removeMember(std::string const&)
// glwebtools::Json::Value *glwebtools::Json::Value::removeMember( glwebtools::Json::Value *a1, char *a2, int *a3);
// [0x13faca0] (653 bytes) glwebtools::Json::Value::resize(unsigned int)
// int glwebtools::Json::Value::resize(glwebtools::Json::Value *this, unsigned int a2);
// [0x13faf30] (675 bytes) glwebtools::Json::Reader::Reader(void)
// glwebtools::Json::Reader *glwebtools::Json::Reader::Reader(glwebtools::Json::Reader *this);
// [0x13fb1e0] (672 bytes) glwebtools::Json::Reader::Reader(glwebtools::Json::Features const&)
// glwebtools::Json::Reader *glwebtools::Json::Reader::Reader( glwebtools::Json::Reader *this, const glwebtools::Json::Features *a2);
// [0x13fb480] (2033 bytes) glwebtools::Json::valueToQuotedString(char const*)
// glwebtools::Json *glwebtools::Json::valueToQuotedString(glwebtools::Json *this, char *s);
// [0x13fbc80] (1452 bytes) glwebtools::Json::StyledStreamWriter::writeValue(glwebtools::Json::Value const&)
// void glwebtools::Json::StyledStreamWriter::writeValue( glwebtools::Json::StyledStreamWriter *this, const glwebtools::Json::Value *a2);
// [0x13fc230] (377 bytes) glwebtools::Json::StyledStreamWriter::isMultineArray(glwebtools::Json::Value const&)
// bool glwebtools::Json::StyledStreamWriter::isMultineArray( glwebtools::Json::StyledStreamWriter *this, const glwebtools::Json::Value *a2);
// [0x13fc3b0] (763 bytes) glwebtools::Json::StyledStreamWriter::writeArrayValue(glwebtools::Json::Value const&)
// int glwebtools::Json::StyledStreamWriter::writeArrayValue( glwebtools::Json::StyledStreamWriter *this, const glwebtools::Json::Value *a2);
// [0x13fc6b0] (164 bytes) glwebtools::Json::StyledStreamWriter::write(std::ostream &,glwebtools::Json::Value const&)
// int glwebtools::Json::StyledStreamWriter::write( glwebtools::Json::StyledStreamWriter *a1, int a2, glwebtools::Json::Value *a3);
// [0x13fc760] (339 bytes) glwebtools::Json::operator<<(std::ostream &,glwebtools::Json::Value const&)
// int glwebtools::Json::operator<<(int a1, glwebtools::Json::Value *a2);
// [0x13fc8c0] (1536 bytes) glwebtools::Json::StyledWriter::writeValue(glwebtools::Json::Value const&,std::string &)
// void glwebtools::Json::StyledWriter::writeValue( glwebtools::Json::StyledWriter *a1, glwebtools::Json::Value *a2, int *a3);
// [0x13fcec0] (394 bytes) glwebtools::Json::StyledWriter::isMultineArray(glwebtools::Json::Value const&,std::string &)
// bool glwebtools::Json::StyledWriter::isMultineArray(uint32_t *a1, glwebtools::Json::Value *a2, int *a3);
// [0x13fd050] (823 bytes) glwebtools::Json::StyledWriter::writeArrayValue(glwebtools::Json::Value const&,std::string &)
// int glwebtools::Json::StyledWriter::writeArrayValue( glwebtools::Json::StyledWriter *a1, glwebtools::Json::Value *a2, int *a3);
// [0x13fd390] (204 bytes) glwebtools::Json::StyledWriter::writeToString(glwebtools::Json::Value const&,std::string &)
// int glwebtools::Json::StyledWriter::writeToString( glwebtools::Json::StyledWriter *a1, glwebtools::Json::Value *a2, int *a3);
// [0x13fd460] (224 bytes) glwebtools::Json::Value::toStyledString(std::string &)const
// void glwebtools::Json::Value::toStyledString(glwebtools::Json::Value *a1, int *a2);
// [0x13fd540] (1205 bytes) glwebtools::Json::FastWriter::writeValue(glwebtools::Json::Value const&,std::string &)
// void glwebtools::Json::FastWriter::writeValue(int a1, glwebtools::Json::Value *a2, int a3);
// [0x13fda00] (123 bytes) glwebtools::Json::FastWriter::writeToString(glwebtools::Json::Value const&,std::string &)
// int glwebtools::Json::FastWriter::writeToString(int a1, glwebtools::Json::Value *a2, uint32_t *a3);
// [0x13fda80] (93 bytes) glwebtools::Json::Value::toCompactString(std::string &)const
// void glwebtools::Json::Value::toCompactString(glwebtools::Json::Value *a1, uint32_t *a2);
// [0x13fdae0] (424 bytes) glwebtools::Json::Reader::addError(std::string const&,glwebtools::Json::Reader::Token &,char const*)
// int glwebtools::Json::Reader::addError(uint32_t *a1, int a2, int *a3, int a4);
// [0x13fdc90] (413 bytes) glwebtools::Json::Reader::decodeUnicodeEscapeSequence(glwebtools::Json::Reader::Token &,char const*&,char const*,unsigned int &)
// int glwebtools::Json::Reader::decodeUnicodeEscapeSequence(uint32_t *a1, int *a2, int *a3, int a4, int *a5);
// [0x13fde30] (487 bytes) glwebtools::Json::Reader::decodeUnicodeCodePoint(glwebtools::Json::Reader::Token &,char const*&,char const*,unsigned int &)
// int glwebtools::Json::Reader::decodeUnicodeCodePoint(uint32_t *a1, int *a2, int *a3, int a4, int *a5);
// [0x13fe020] (2009 bytes) glwebtools::Json::Reader::decodeString(glwebtools::Json::Reader::Token &,std::string &)
// int glwebtools::Json::Reader::decodeString(uint32_t *a1, int *a2, int *a3);
// [0x13fe800] (200 bytes) glwebtools::Json::Reader::decodeString(glwebtools::Json::Reader::Token &)
// int glwebtools::Json::Reader::decodeString(glwebtools::Json::Reader *a1, int *a2);
// [0x13fe8d0] (660 bytes) glwebtools::Json::Reader::decodeDouble(glwebtools::Json::Reader::Token &)
// int glwebtools::Json::Reader::decodeDouble(glwebtools::Json::Reader *a1, int *a2);
// [0x13feb70] (896 bytes) glwebtools::Json::Reader::decodeNumber(glwebtools::Json::Reader::Token &)
// int glwebtools::Json::Reader::decodeNumber(glwebtools::Json::Reader *a1, int *a2);
// [0x13feef0] (191 bytes) glwebtools::Json::Reader::expectToken(glwebtools::Json::Reader::TokenType,glwebtools::Json::Reader::Token &,char const*)
// int glwebtools::Json::Reader::expectToken(glwebtools::Json::Reader *a1, int a2, int *a3, char *a4);
// [0x13fefb0] (2050 bytes) glwebtools::Json::Reader::recoverFromError(glwebtools::Json::Reader::TokenType)
// int glwebtools::Json::Reader::recoverFromError(uint32_t *a1, int a2);
// [0x13ff7c0] (88 bytes) glwebtools::Json::Reader::addErrorAndRecover(std::string const&,glwebtools::Json::Reader::Token &,glwebtools::Json::Reader::TokenType)
// int glwebtools::Json::Reader::addErrorAndRecover(uint32_t *a1, int a2, int *a3, int a4);
// [0x13ff820] (1005 bytes) glwebtools::Json::Reader::readObject(glwebtools::Json::Reader::Token &)
// int glwebtools::Json::Reader::readObject(void **a1);
// [0x13ffc10] (502 bytes) glwebtools::Json::Reader::readValue(void)
// int glwebtools::Json::Reader::readValue(char **this);
// [0x13ffe10] (465 bytes) glwebtools::Json::Reader::readArray(glwebtools::Json::Reader::Token &)
// int glwebtools::Json::Reader::readArray(void **a1);
// [0x13ffff0] (1157 bytes) glwebtools::Json::Reader::parse(char const*,char const*,glwebtools::Json::Value &,bool)
// int glwebtools::Json::Reader::parse( glwebtools::Json::Reader *this, const char *a2, const char *a3, glwebtools::Json::Value *a4, bool a5);
// [0x1400480] (101 bytes) glwebtools::Json::Reader::parse(char const*,glwebtools::Json::Value &,bool)
// int glwebtools::Json::Reader::parse( glwebtools::Json::Reader *this, char *s, glwebtools::Json::Value *a3, bool a4);
// [0x14004f0] (70 bytes) glwebtools::Json::Reader::parse(std::string const&,glwebtools::Json::Value &,bool)
// int glwebtools::Json::Reader::parse( glwebtools::Json::Reader *a1, const char **a2, glwebtools::Json::Value *a3, char a4);
// [0x1400540] (182 bytes) glwebtools::Json::Reader::parse(std::istream &,glwebtools::Json::Value &,bool)
// int glwebtools::Json::Reader::parse(glwebtools::Json::Reader *a1, int a2, glwebtools::Json::Value *a3, char a4);
// [0x1400600] (79 bytes) glwebtools::Json::FastWriter::write(glwebtools::Json::Value const&)
// glwebtools::Json::FastWriter *glwebtools::Json::FastWriter::write( glwebtools::Json::FastWriter *this, const glwebtools::Json::Value *a2, int a3);
// [0x1400650] (79 bytes) glwebtools::Json::StyledWriter::write(glwebtools::Json::Value const&)
// glwebtools::Json::StyledWriter *glwebtools::Json::StyledWriter::write( glwebtools::Json::StyledWriter *this, const glwebtools::Json::Value *a2, int a3);
// [0x14006a0] (45 bytes) glwebtools::Json::DefaultValueAllocator::~DefaultValueAllocator()
// void glwebtools::Json::DefaultValueAllocator::~DefaultValueAllocator( glwebtools::Json::DefaultValueAllocator *this);
// [0x14006d0] (37 bytes) glwebtools::Json::DefaultValueAllocator::makeMemberName(char const*)
// int glwebtools::Json::DefaultValueAllocator::makeMemberName( glwebtools::Json::DefaultValueAllocator *this, const char *a2);
// [0x1400700] (29 bytes) glwebtools::Json::DefaultValueAllocator::releaseMemberName(char *)
// int glwebtools::Json::DefaultValueAllocator::releaseMemberName( glwebtools::Json::DefaultValueAllocator *this, char *a2);
// [0x1400720] (45 bytes) glwebtools::Json::FastWriter::~FastWriter()
// void glwebtools::Json::FastWriter::~FastWriter(glwebtools::Json::FastWriter *this);
// [0x1400750] (38 bytes) glwebtools::Json::DefaultValueAllocator::releaseStringValue(char *)
// void glwebtools::Json::DefaultValueAllocator::releaseStringValue( glwebtools::Json::DefaultValueAllocator *this, char *ptr);
// [0x1400780] (110 bytes) glwebtools::Json::DefaultValueAllocator::duplicateStringValue(char const*,unsigned int)
// void *glwebtools::Json::DefaultValueAllocator::duplicateStringValue( glwebtools::Json::DefaultValueAllocator *this, char *s, size_t a3);
// [0x14007f0] (67 bytes) glwebtools::Json::DefaultValueAllocator::~DefaultValueAllocator()
// void glwebtools::Json::DefaultValueAllocator::~DefaultValueAllocator( glwebtools::Json::DefaultValueAllocator *this);
// [0x1400840] (67 bytes) glwebtools::Json::FastWriter::~FastWriter()
// void glwebtools::Json::FastWriter::~FastWriter(glwebtools::Json::FastWriter *this);
// [0x1400890] (187 bytes) glwebtools::Json::StyledWriter::~StyledWriter()
// void glwebtools::Json::StyledWriter::~StyledWriter(glwebtools::Json::StyledWriter *this);
// [0x1400950] (199 bytes) glwebtools::Json::StyledWriter::~StyledWriter()
// void glwebtools::Json::StyledWriter::~StyledWriter(glwebtools::Json::StyledWriter *this);
