#pragma once
// ============================================================================
// G4_UP8Shop/lib/jsoncpp/decompiled/jsoncpp_all.h
// Library: jsoncpp | Module: jsoncpp_all
// Binary Address Span: 0x119aed0 .. 0x11aa240 (206 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x119aed0] (14 bytes) Json::Features::Features(void)
// struct Json::Features *Json::Features::Features(Json::Features *this);
// [0x119aee0] (52 bytes) Json::Features::all(void)
// Json::Features *Json::Features::all(Json::Features *this);
// [0x119af20] (59 bytes) Json::Features::strictMode(void)
// Json::Features *Json::Features::strictMode(Json::Features *this);
// [0x119af60] (55 bytes) Json::Reader::skipSpaces(void)
// char *Json::Reader::skipSpaces(Json::Reader *this);
// [0x119afa0] (106 bytes) Json::Reader::match(char const*,int)
// int Json::Reader::match(Json::Reader *this, const char *a2, int a3);
// [0x119b010] (69 bytes) Json::Reader::readNumber(void)
// char *Json::Reader::readNumber(Json::Reader *this);
// [0x119b060] (37 bytes) Json::Reader::currentValue(void)
// int Json::Reader::currentValue(Json::Reader *this);
// [0x119b090] (24 bytes) Json::Reader::getNextChar(void)
// int Json::Reader::getNextChar(Json::Reader *this);
// [0x119b0b0] (89 bytes) Json::Reader::readString(void)
// int Json::Reader::readString(Json::Reader *this);
// [0x119b110] (60 bytes) Json::Reader::readCppStyleComment(void)
// int Json::Reader::readCppStyleComment(Json::Reader *this);
// [0x119b150] (69 bytes) Json::Reader::readCStyleComment(void)
// bool Json::Reader::readCStyleComment(Json::Reader *this);
// [0x119b1a0] (127 bytes) Json::Reader::getLocationLineAndColumn(char const*,int &,int &)const
// int *Json::Reader::getLocationLineAndColumn(Json::Reader *this, const char *a2, int *a3, int *a4);
// [0x119b220] (146 bytes) Json::Reader::getLocationLineAndColumn(char const*)const
// Json::Reader *Json::Reader::getLocationLineAndColumn(Json::Reader *this, Json::Reader *a2, char *a3);
// [0x119b2c0] (452 bytes) Json::Reader::addComment(char const*,char const*,Json::CommentPlacement)
// int Json::Reader::addComment(int a1, void *a2, int a3, int a4);
// [0x119b490] (334 bytes) Json::Reader::readComment(void)
// int Json::Reader::readComment(Json::Reader *this);
// [0x119b5e0] (347 bytes) Json::Reader::readToken(Json::Reader::Token &)
// int Json::Reader::readToken(Json::Reader *a1, uint32_t *a2);
// [0x119b740] (102 bytes) Json::Reader::skipCommentTokens(Json::Reader::Token &)
// int Json::Reader::skipCommentTokens(Json::Reader *a1, uint32_t *a2);
// [0x119b7b0] (983 bytes) Json::Reader::getFormatedErrorMessages(void)const
// Json::Reader *Json::Reader::getFormatedErrorMessages(Json::Reader *this, char *a2);
// [0x119bb90] (675 bytes) Json::Reader::Reader(void)
// Json::Reader *Json::Reader::Reader(Json::Reader *this);
// [0x119be40] (672 bytes) Json::Reader::Reader(Json::Features const&)
// Json::Reader *Json::Reader::Reader(Json::Reader *this, const Json::Features *a2);
// [0x119c0e0] (424 bytes) Json::Reader::addError(std::string const&,Json::Reader::Token &,char const*)
// int Json::Reader::addError(uint32_t *a1, int a2, int *a3, int a4);
// [0x119c290] (413 bytes) Json::Reader::decodeUnicodeEscapeSequence(Json::Reader::Token &,char const*&,char const*,unsigned int &)
// int Json::Reader::decodeUnicodeEscapeSequence(uint32_t *a1, int *a2, int *a3, int a4, int *a5);
// [0x119c430] (487 bytes) Json::Reader::decodeUnicodeCodePoint(Json::Reader::Token &,char const*&,char const*,unsigned int &)
// int Json::Reader::decodeUnicodeCodePoint(uint32_t *a1, int *a2, int *a3, int a4, int *a5);
// [0x119c620] (1994 bytes) Json::Reader::decodeString(Json::Reader::Token &,std::string &)
// int Json::Reader::decodeString(uint32_t *a1, int *a2, int *a3);
// [0x119cdf0] (200 bytes) Json::Reader::decodeString(Json::Reader::Token &)
// int Json::Reader::decodeString(Json::Reader *a1, int *a2);
// [0x119cec0] (660 bytes) Json::Reader::decodeDouble(Json::Reader::Token &)
// int Json::Reader::decodeDouble(Json::Reader *a1, int a2);
// [0x119d160] (823 bytes) Json::Reader::decodeNumber(Json::Reader::Token &)
// int Json::Reader::decodeNumber(Json::Reader *a1, int *a2);
// [0x119d4a0] (191 bytes) Json::Reader::expectToken(Json::Reader::TokenType,Json::Reader::Token &,char const*)
// int Json::Reader::expectToken(Json::Reader *a1, int a2, int *a3, char *a4);
// [0x119d560] (4609 bytes) Json::Reader::recoverFromError(Json::Reader::TokenType)
// int Json::Reader::recoverFromError(Json::Reader *a1, int a2);
// [0x119e770] (88 bytes) Json::Reader::addErrorAndRecover(std::string const&,Json::Reader::Token &,Json::Reader::TokenType)
// int Json::Reader::addErrorAndRecover(Json::Reader *a1, int a2, int *a3, int a4);
// [0x119e7d0] (1005 bytes) Json::Reader::readObject(Json::Reader::Token &)
// int Json::Reader::readObject(void **a1);
// [0x119ebc0] (502 bytes) Json::Reader::readValue(void)
// int Json::Reader::readValue(Json::Reader *this);
// [0x119edc0] (465 bytes) Json::Reader::readArray(Json::Reader::Token &)
// int Json::Reader::readArray(void **a1);
// [0x119efa0] (1157 bytes) Json::Reader::parse(char const*,char const*,Json::Value &,bool)
// int Json::Reader::parse(Json::Reader *this, const char *a2, const char *a3, Json::Value *a4, bool a5);
// [0x119f430] (114 bytes) Json::Reader::parse(std::string const&,Json::Value &,bool)
// int Json::Reader::parse(const char **a1, int a2, Json::Value *a3, char a4);
// [0x119f4b0] (182 bytes) Json::Reader::parse(std::istream &,Json::Value &,bool)
// int Json::Reader::parse(const char **a1, int a2, Json::Value *a3, char a4);
// [0x11a1490] (27 bytes) Json::ValueAllocator::~ValueAllocator()
// void Json::ValueAllocator::~ValueAllocator(Json::ValueAllocator *this);
// [0x11a14b0] (56 bytes) Json::ValueAllocator::~ValueAllocator()
// void Json::ValueAllocator::~ValueAllocator(Json::ValueAllocator *this);
// [0x11a1580] (17 bytes) Json::ValueIteratorBase::ValueIteratorBase(void)
// struct Json::ValueIteratorBase *Json::ValueIteratorBase::ValueIteratorBase(Json::ValueIteratorBase *this);
// [0x11a15a0] (17 bytes) Json::ValueIteratorBase::ValueIteratorBase(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const,Json::Value>> const&)
// int Json::ValueIteratorBase::ValueIteratorBase(int a1, int *a2);
// [0x11a15c0] (12 bytes) Json::ValueIteratorBase::deref(void)const
// int Json::ValueIteratorBase::deref(Json::ValueIteratorBase *this);
// [0x11a15d0] (52 bytes) Json::ValueIteratorBase::increment(void)
// int Json::ValueIteratorBase::increment(Json::ValueIteratorBase *this);
// [0x11a1610] (52 bytes) Json::ValueIteratorBase::decrement(void)
// int Json::ValueIteratorBase::decrement(Json::ValueIteratorBase *this);
// [0x11a1650] (81 bytes) Json::ValueIteratorBase::computeDistance(Json::ValueIteratorBase const&)const
// int Json::ValueIteratorBase::computeDistance(Json::ValueIteratorBase *this, const Json::ValueIteratorBase *a2);
// [0x11a16b0] (29 bytes) Json::ValueIteratorBase::isEqual(Json::ValueIteratorBase const&)const
// char Json::ValueIteratorBase::isEqual(Json::ValueIteratorBase *this, const Json::ValueIteratorBase *a2);
// [0x11a16d0] (13 bytes) Json::ValueIteratorBase::copy(Json::ValueIteratorBase const&)
// Json::ValueIteratorBase *Json::ValueIteratorBase::copy( Json::ValueIteratorBase *this, const Json::ValueIteratorBase *a2);
// [0x11a16e0] (34 bytes) Json::ValueConstIterator::ValueConstIterator(void)
// struct Json::ValueConstIterator *Json::ValueConstIterator::ValueConstIterator(Json::ValueConstIterator *this);
// [0x11a1710] (42 bytes) Json::ValueConstIterator::ValueConstIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const,Json::Value>> const&)
// int Json::ValueConstIterator::ValueConstIterator(int a1, int *a2);
// [0x11a1740] (58 bytes) Json::ValueConstIterator::operator=(Json::ValueIteratorBase const&)
// Json::ValueConstIterator *Json::ValueConstIterator::operator=( Json::ValueConstIterator *this, const Json::ValueIteratorBase *a2);
// [0x11a1780] (34 bytes) Json::ValueIterator::ValueIterator(void)
// struct Json::ValueIterator *Json::ValueIterator::ValueIterator(Json::ValueIterator *this);
// [0x11a17b0] (42 bytes) Json::ValueIterator::ValueIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const,Json::Value>> const&)
// int Json::ValueIterator::ValueIterator(int a1, int *a2);
// [0x11a17e0] (58 bytes) Json::ValueIterator::ValueIterator(Json::ValueConstIterator const&)
// Json::ValueIterator *Json::ValueIterator::ValueIterator( Json::ValueIterator *this, const Json::ValueConstIterator *a2);
// [0x11a1820] (58 bytes) Json::ValueIterator::ValueIterator(Json::ValueIterator const&)
// Json::ValueIterator *Json::ValueIterator::ValueIterator( Json::ValueIterator *this, const Json::ValueIterator *a2);
// [0x11a1860] (58 bytes) Json::ValueIterator::operator=(Json::ValueIterator const&)
// Json::ValueIterator *Json::ValueIterator::operator=(Json::ValueIterator *this, const Json::ValueIterator *a2);
// [0x11a18a0] (15 bytes) Json::Value::CommentInfo::CommentInfo(void)
// struct Json::Value::CommentInfo *Json::Value::CommentInfo::CommentInfo(Json::Value::CommentInfo *this);
// [0x11a18b0] (42 bytes) Json::Value::CommentInfo::~CommentInfo()
// void Json::Value::CommentInfo::~CommentInfo(Json::Value::CommentInfo *this);
// [0x11a18e0] (75 bytes) Json::Value::CommentInfo::setComment(char const*)
// int Json::Value::CommentInfo::setComment(Json::Value::CommentInfo *this, const char *a2);
// [0x11a1930] (18 bytes) Json::Value::CZString::CZString(int)
// struct Json::Value::CZString *Json::Value::CZString::CZString(Json::Value::CZString *this, int a2);
// [0x11a1950] (79 bytes) Json::Value::CZString::CZString(char const*,Json::Value::CZString::DuplicationPolicy)
// void Json::Value::CZString::CZString(int *a1, int a2, int a3);
// [0x11a19a0] (125 bytes) Json::Value::CZString::CZString(Json::Value::CZString const&)
// Json::Value::CZString *Json::Value::CZString::CZString( Json::Value::CZString *this, const Json::Value::CZString *a2);
// [0x11a1a20] (59 bytes) Json::Value::CZString::~CZString()
// void Json::Value::CZString::~CZString(Json::Value::CZString *this);
// [0x11a1a60] (31 bytes) Json::Value::CZString::swap(Json::Value::CZString&)
// Json::Value::CZString *Json::Value::CZString::swap(Json::Value::CZString *this, Json::Value::CZString *a2);
// [0x11a1a80] (90 bytes) Json::Value::CZString::operator=(Json::Value::CZString const&)
// Json::Value::CZString *Json::Value::CZString::operator=( Json::Value::CZString *this, const Json::Value::CZString *a2);
// [0x11a1ae0] (71 bytes) Json::Value::CZString::operator<(Json::Value::CZString const&)const
// char Json::Value::CZString::operator<(const char **this, const char **a2);
// [0x11a1b30] (71 bytes) Json::Value::CZString::operator==(Json::Value::CZString const&)const
// bool Json::Value::CZString::operator==(const char **this, const char **a2);
// [0x11a1b80] (12 bytes) Json::Value::CZString::index(void)const
// int Json::Value::CZString::index(Json::Value::CZString *this);
// [0x11a1b90] (11 bytes) Json::Value::CZString::c_str(void)const
// int Json::Value::CZString::c_str(Json::Value::CZString *this);
// [0x11a1ba0] (50 bytes) Json::ValueIteratorBase::memberName(void)const
// void *Json::ValueIteratorBase::memberName(Json::ValueIteratorBase *this);
// [0x11a1be0] (108 bytes) Json::ValueIteratorBase::index(void)const
// int Json::ValueIteratorBase::index(Json::ValueIteratorBase *this);
// [0x11a1c50] (13 bytes) Json::Value::CZString::isStaticString(void)const
// bool Json::Value::CZString::isStaticString(Json::Value::CZString *this);
// [0x11a1c60] (185 bytes) Json::Value::Value(Json::ValueType)
// uint32_t *Json::Value::Value(int a1, uint32_t *a2);
// [0x11a1d20] (22 bytes) Json::Value::Value(int)
// struct Json::Value *Json::Value::Value(Json::Value *this, int a2);
// [0x11a1d40] (22 bytes) Json::Value::Value(unsigned int)
// Json::Value *Json::Value::Value(Json::Value *this, unsigned int a2);
// [0x11a1d60] (26 bytes) Json::Value::Value(double)
// Json::Value *Json::Value::Value(Json::Value *this, double a2);
// [0x11a1d80] (63 bytes) Json::Value::Value(char const*)
// Json::Value *Json::Value::Value(Json::Value *this, const char *a2);
// [0x11a1dc0] (79 bytes) Json::Value::Value(char const*,char const*)
// Json::Value *Json::Value::Value(Json::Value *this, const char *a2, const char *a3);
// [0x11a1e10] (78 bytes) Json::Value::Value(std::string const&)
// int Json::Value::Value(int a1, uint32_t *a2);
// [0x11a1e60] (28 bytes) Json::Value::Value(Json::StaticString const&)
// int Json::Value::Value(int a1, uint32_t *a2);
// [0x11a1e80] (187 bytes) Json::ValueIteratorBase::key(void)const
// Json::ValueIteratorBase *Json::ValueIteratorBase::key(Json::ValueIteratorBase *this, int a2);
// [0x11a1f40] (22 bytes) Json::Value::Value(bool)
// Json::Value *Json::Value::Value(Json::Value *this, bool a2);
// [0x11a1f60] (109 bytes) Json::Value::swap(Json::Value&)
// Json::Value *Json::Value::swap(Json::Value *this, Json::Value *a2);
// [0x11a1fd0] (13 bytes) Json::Value::type(void)const
// int Json::Value::type(Json::Value *this);
// [0x11a1fe0] (9 bytes) Json::Value::compare(Json::Value const&)
// int Json::Value::compare();
// [0x11a1ff0] (492 bytes) Json::Value::operator<(Json::Value const&)const
// char Json::Value::operator<(Json::Value *this, const char **a2);
// [0x11a21e0] (45 bytes) Json::Value::operator>=(Json::Value const&)const
// int Json::Value::operator>=(Json::Value *this, const char **a2);
// [0x11a2210] (42 bytes) Json::Value::operator>(Json::Value const&)const
// char Json::Value::operator>(const char **this, const Json::Value *a2);
// [0x11a2240] (45 bytes) Json::Value::operator<=(Json::Value const&)const
// int Json::Value::operator<=(Json::Value *this, const char **a2);
// [0x11a2270] (333 bytes) Json::Value::operator==(Json::Value const&)const
// char Json::Value::operator==(const char **this, const Json::Value *a2);
// [0x11a23c0] (45 bytes) Json::Value::operator!=(Json::Value const&)const
// int Json::Value::operator!=(const char **this, const Json::Value *a2);
// [0x11a23f0] (11 bytes) Json::Value::asCString(void)const
// int Json::Value::asCString(Json::Value *this);
// [0x11a2400] (179 bytes) Json::Value::asString(void)const
// Json::Value *Json::Value::asString(Json::Value *this, int a2);
// [0x11a24c0] (65 bytes) Json::Value::asInt(void)const
// int Json::Value::asInt(Json::Value *this);
// [0x11a2510] (112 bytes) Json::Value::asUInt(void)const
// int Json::Value::asUInt(Json::Value *this);
// [0x11a2580] (127 bytes) Json::Value::asDouble(void)const
// long double Json::Value::asDouble(Json::Value *this);
// [0x11a2600] (100 bytes) Json::Value::asBool(void)const
// char Json::Value::asBool(Json::Value *this);
// [0x11a2670] (505 bytes) Json::Value::isConvertibleTo(Json::ValueType)const
// char Json::Value::isConvertibleTo(uint8_t *a1, int a2);
// [0x11a2870] (91 bytes) Json::Value::size(void)const
// int Json::Value::size(Json::Value *this);
// [0x11a28d0] (247 bytes) Json::Value::operator[](unsigned int)const
// void *Json::Value::operator[](Json::Value *this, unsigned int a2);
// [0x11a29d0] (41 bytes) Json::Value::isValidIndex(unsigned int)const
// bool Json::Value::isValidIndex(Json::Value *this, unsigned int a2);
// [0x11a2a00] (255 bytes) Json::Value::operator[](char const*)const
// void *Json::Value::operator[](Json::Value *this, const char *a2);
// [0x11a2b00] (44 bytes) Json::Value::operator[](std::string const&)const
// void *Json::Value::operator[](Json::Value *a1, const char **a2);
// [0x11a2b30] (51 bytes) Json::Value::isMember(char const*)const
// bool Json::Value::isMember(Json::Value *this, char *a2);
// [0x11a2b70] (44 bytes) Json::Value::isMember(std::string const&)const
// bool Json::Value::isMember(Json::Value *a1, char **a2);
// [0x11a2ba0] (14 bytes) Json::Value::isNull(void)const
// bool Json::Value::isNull(Json::Value *this);
// [0x11a2bb0] (34 bytes) Json::Value::operator!(void)const
// bool Json::Value::operator!(Json::Value *this);
// [0x11a2be0] (14 bytes) Json::Value::isBool(void)const
// bool Json::Value::isBool(Json::Value *this);
// [0x11a2bf0] (14 bytes) Json::Value::isInt(void)const
// bool Json::Value::isInt(Json::Value *this);
// [0x11a2c00] (14 bytes) Json::Value::isUInt(void)const
// bool Json::Value::isUInt(Json::Value *this);
// [0x11a2c10] (25 bytes) Json::Value::isIntegral(void)const
// int Json::Value::isIntegral(Json::Value *this);
// [0x11a2c30] (14 bytes) Json::Value::isDouble(void)const
// bool Json::Value::isDouble(Json::Value *this);
// [0x11a2c40] (69 bytes) Json::Value::isNumeric(void)const
// int Json::Value::isNumeric(Json::Value *this);
// [0x11a2c90] (14 bytes) Json::Value::isString(void)const
// bool Json::Value::isString(Json::Value *this);
// [0x11a2ca0] (22 bytes) Json::Value::isArray(void)const
// int Json::Value::isArray(Json::Value *this);
// [0x11a2cc0] (22 bytes) Json::Value::isObject(void)const
// int Json::Value::isObject(Json::Value *this);
// [0x11a2ce0] (102 bytes) Json::Value::empty(void)const
// bool Json::Value::empty(Json::Value *this);
// [0x11a2d50] (148 bytes) Json::Value::setComment(char const*,Json::CommentPlacement)
// int Json::Value::setComment(int a1, char *a2, int a3);
// [0x11a2df0] (52 bytes) Json::Value::setComment(std::string const&,Json::CommentPlacement)
// int Json::Value::setComment(int a1, char **a2, int a3);
// [0x11a2e30] (26 bytes) Json::Value::hasComment(Json::CommentPlacement)const
// bool Json::Value::hasComment(int a1, int a2);
// [0x11a2e50] (140 bytes) Json::Value::getComment(Json::CommentPlacement)const
// int Json::Value::getComment(int a1, int a2, int a3);
// [0x11a2ee0] (285 bytes) Json::Value::toStyledString(void)const
// Json::Value *Json::Value::toStyledString(Json::Value *this);
// [0x11a3000] (103 bytes) Json::Value::begin(void)const
// Json::Value *Json::Value::begin(Json::Value *this, uint8_t *a2);
// [0x11a3070] (103 bytes) Json::Value::end(void)const
// Json::Value *Json::Value::end(Json::Value *this, int a2);
// [0x11a30e0] (103 bytes) Json::Value::begin(void)
// Json::Value *Json::Value::begin(Json::Value *this, uint8_t *a2);
// [0x11a3150] (103 bytes) Json::Value::end(void)
// Json::Value *Json::Value::end(Json::Value *this, int a2);
// [0x11a31c0] (34 bytes) Json::PathArgument::PathArgument(void)
// struct Json::PathArgument *Json::PathArgument::PathArgument(Json::PathArgument *this);
// [0x11a31f0] (41 bytes) Json::PathArgument::PathArgument(unsigned int)
// Json::PathArgument *Json::PathArgument::PathArgument(Json::PathArgument *this, unsigned int a2);
// [0x11a3220] (71 bytes) Json::PathArgument::PathArgument(char const*)
// Json::PathArgument *Json::PathArgument::PathArgument(Json::PathArgument *this, char *a2);
// [0x11a3270] (73 bytes) Json::PathArgument::PathArgument(std::string const&)
// int Json::PathArgument::PathArgument(int a1, char **a2);
// [0x11a32c0] (9 bytes) Json::Path::invalidPath(std::string const&,int)
// void Json::Path::invalidPath();
// [0x11a32d0] (161 bytes) Json::Path::resolve(Json::Value const&)const
// const Json::Value *Json::Path::resolve(Json::Path *this, const Json::Value *a2);
// [0x11a3380] (92 bytes) Json::Value::clear(void)
// Json::Value *Json::Value::clear(Json::Value *this);
// [0x11a33e0] (170 bytes) Json::Value::~Value()
// void Json::Value::~Value(Json::Value *this);
// [0x11a3490] (768 bytes) Json::Value::getMemberNames(void)const
// Json::Value *Json::Value::getMemberNames(int a1, Json::Value *this, uint8_t *a3);
// [0x11a3790] (162 bytes) Json::Path::addPathInArg(std::string const&,std::vector<Json::PathArgument const*,std::allocator<Json::PathArgument const*>> const&,__gnu_cxx::__normal_iterator<Json::PathArgument const* const*,std::vector<Json::PathArgument const*,std::allocator<Json::PathArgument const*>>> &,Json::PathArgument::Kind)
// int *Json::Path::addPathInArg(int a1, int a2, int a3, int **a4, int *a5);
// [0x11a3840] (1038 bytes) Json::Path::makePath(std::string const&,std::vector<Json::PathArgument const*,std::allocator<Json::PathArgument const*>> const&)
// void Json::Path::makePath(int a1, uint32_t *a2, int **a3);
// [0x11a3c50] (449 bytes) Json::Path::Path(std::string const&,Json::PathArgument const&,Json::PathArgument const&,Json::PathArgument const&,Json::PathArgument const&,Json::PathArgument const&)
// void Json::Path::Path(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7);
// [0x11a3e20] (395 bytes) Json::Value::Value(Json::Value const&)
// Json::Value *Json::Value::Value(Json::Value *this, const Json::Value *a2);
// [0x11a3fb0] (237 bytes) Json::Path::resolve(Json::Value const&,Json::Value const&)const
// Json::Path *Json::Path::resolve( Json::Path *this, const Json::Value *a2, const Json::Value *a3, Json::Value *a4);
// [0x11a40a0] (87 bytes) Json::Value::get(char const*,Json::Value const&)const
// Json::Value *Json::Value::get(Json::Value *this, Json::Value *a2, const Json::Value *a3, Json::Value *a4);
// [0x11a4100] (82 bytes) Json::Value::get(std::string const&,Json::Value const&)const
// Json::Value *Json::Value::get(Json::Value *a1, char *a2, const Json::Value **a3, Json::Value *a4);
// [0x11a4160] (87 bytes) Json::Value::get(unsigned int,Json::Value const&)const
// Json::Value *Json::Value::get(Json::Value *this, Json::Value *a2, const Json::Value *a3, Json::Value *a4);
// [0x11a41c0] (90 bytes) Json::Value::operator=(Json::Value const&)
// Json::Value *Json::Value::operator=(Json::Value *this, const Json::Value *a2);
// [0x11a4220] (346 bytes) Json::Value::resolveReference(char const*,bool)
// int Json::Value::resolveReference(Json::Value *this, const char *a2, bool a3);
// [0x11a4380] (52 bytes) Json::Value::operator[](Json::StaticString const&)
// int Json::Value::operator[](Json::Value *a1, const char **a2);
// [0x11a43c0] (50 bytes) Json::Value::operator[](char const*)
// int Json::Value::operator[](Json::Value *this, char *a2);
// [0x11a4400] (44 bytes) Json::Value::operator[](std::string const&)
// int Json::Value::operator[](Json::Value *a1, char **a2);
// [0x11a4430] (321 bytes) Json::Value::operator[](unsigned int)
// int Json::Value::operator[](Json::Value *this, unsigned int a2);
// [0x11a4580] (136 bytes) Json::Path::make(Json::Value &)const
// Json::Value *Json::Path::make(Json::Path *this, Json::Value *a2);
// [0x11a4610] (76 bytes) Json::Value::append(Json::Value const&)
// Json::Value *Json::Value::append(Json::Value *this, const Json::Value *a2);
// [0x11a4660] (395 bytes) Json::Value::removeMember(char const*)
// Json::Value *Json::Value::removeMember(Json::Value *this, const char *a2, int a3);
// [0x11a47f0] (74 bytes) Json::Value::removeMember(std::string const&)
// Json::Value *Json::Value::removeMember(Json::Value *a1, char *a2, int *a3);
// [0x11a4840] (653 bytes) Json::Value::resize(unsigned int)
// int Json::Value::resize(Json::Value *this, unsigned int a2);
// [0x11a4ad0] (45 bytes) Json::DefaultValueAllocator::~DefaultValueAllocator()
// void Json::DefaultValueAllocator::~DefaultValueAllocator(Json::DefaultValueAllocator *this);
// [0x11a4b00] (37 bytes) Json::DefaultValueAllocator::makeMemberName(char const*)
// int Json::DefaultValueAllocator::makeMemberName(Json::DefaultValueAllocator *this, const char *a2);
// [0x11a4b30] (29 bytes) Json::DefaultValueAllocator::releaseMemberName(char *)
// int Json::DefaultValueAllocator::releaseMemberName(Json::DefaultValueAllocator *this, char *a2);
// [0x11a4b50] (38 bytes) Json::DefaultValueAllocator::releaseStringValue(char *)
// void Json::DefaultValueAllocator::releaseStringValue(Json::DefaultValueAllocator *this, char *ptr);
// [0x11a4b80] (110 bytes) Json::DefaultValueAllocator::duplicateStringValue(char const*,unsigned int)
// void *Json::DefaultValueAllocator::duplicateStringValue(Json::DefaultValueAllocator *this, char *s, size_t a3);
// [0x11a4bf0] (67 bytes) Json::DefaultValueAllocator::~DefaultValueAllocator()
// void Json::DefaultValueAllocator::~DefaultValueAllocator(Json::DefaultValueAllocator *this);
// [0x11a57c0] (27 bytes) Json::Writer::~Writer()
// void Json::Writer::~Writer(Json::Writer *this);
// [0x11a57e0] (56 bytes) Json::Writer::~Writer()
// void Json::Writer::~Writer(Json::Writer *this);
// [0x11a5820] (43 bytes) Json::GLOTWriter::GLOTWriter(void)
// struct Json::GLOTWriter *Json::GLOTWriter::GLOTWriter(Json::GLOTWriter *this);
// [0x11a5850] (13 bytes) Json::GLOTWriter::enableYAMLCompatibility(void)
// Json::GLOTWriter *Json::GLOTWriter::enableYAMLCompatibility(Json::GLOTWriter *this);
// [0x11a5860] (43 bytes) Json::FastWriter::FastWriter(void)
// struct Json::FastWriter *Json::FastWriter::FastWriter(Json::FastWriter *this);
// [0x11a5890] (13 bytes) Json::FastWriter::enableYAMLCompatibility(void)
// Json::FastWriter *Json::FastWriter::enableYAMLCompatibility(Json::FastWriter *this);
// [0x11a58a0] (77 bytes) Json::StyledWriter::StyledWriter(void)
// struct Json::StyledWriter *Json::StyledWriter::StyledWriter(Json::StyledWriter *this);
// [0x11a58f0] (187 bytes) Json::StyledWriter::writeIndent(void)
// int Json::StyledWriter::writeIndent(Json::StyledWriter *this);
// [0x11a59b0] (67 bytes) Json::StyledWriter::writeWithIndent(std::string const&)
// int Json::StyledWriter::writeWithIndent(Json::StyledWriter *a1, int a2);
// [0x11a5a00] (143 bytes) Json::StyledWriter::indent(void)
// int Json::StyledWriter::indent(Json::StyledWriter *this);
// [0x11a5a90] (129 bytes) Json::StyledWriter::unindent(void)
// int Json::StyledWriter::unindent(Json::StyledWriter *this);
// [0x11a5b20] (120 bytes) Json::StyledWriter::hasCommentForValue(Json::Value const&)
// int Json::StyledWriter::hasCommentForValue(Json::StyledWriter *this, const Json::Value *a2);
// [0x11a5ba0] (283 bytes) Json::StyledWriter::normalizeEOL(std::string const&)
// int *Json::StyledWriter::normalizeEOL(int *a1, uint32_t *a2);
// [0x11a5cc0] (266 bytes) Json::StyledWriter::writeCommentBeforeValue(Json::Value const&)
// char Json::StyledWriter::writeCommentBeforeValue(Json::StyledWriter *this, const Json::Value *a2);
// [0x11a5dd0] (91 bytes) Json::StyledStreamWriter::StyledStreamWriter(std::string)
// int Json::StyledStreamWriter::StyledStreamWriter(uint32_t *a1, int a2);
// [0x11a5e30] (94 bytes) Json::StyledStreamWriter::writeIndent(void)
// int Json::StyledStreamWriter::writeIndent(Json::StyledStreamWriter *this);
// [0x11a5e90] (76 bytes) Json::StyledStreamWriter::writeWithIndent(std::string const&)
// int Json::StyledStreamWriter::writeWithIndent(Json::StyledStreamWriter *a1, uint32_t *a2);
// [0x11a5ee0] (44 bytes) Json::StyledStreamWriter::indent(void)
// int Json::StyledStreamWriter::indent(Json::StyledStreamWriter *this);
// [0x11a5f10] (135 bytes) Json::StyledStreamWriter::unindent(void)
// int Json::StyledStreamWriter::unindent(Json::StyledStreamWriter *this);
// [0x11a5fa0] (120 bytes) Json::StyledStreamWriter::hasCommentForValue(Json::Value const&)
// int Json::StyledStreamWriter::hasCommentForValue(Json::StyledStreamWriter *this, const Json::Value *a2);
// [0x11a6020] (283 bytes) Json::StyledStreamWriter::normalizeEOL(std::string const&)
// int *Json::StyledStreamWriter::normalizeEOL(int *a1, uint32_t *a2);
// [0x11a6140] (276 bytes) Json::StyledStreamWriter::writeCommentBeforeValue(Json::Value const&)
// char Json::StyledStreamWriter::writeCommentBeforeValue(Json::StyledStreamWriter *this, const Json::Value *a2);
// [0x11a6260] (652 bytes) Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(Json::Value const&)
// char Json::StyledStreamWriter::writeCommentAfterValueOnSameLine( Json::StyledStreamWriter *this, const Json::Value *a2);
// [0x11a64f0] (625 bytes) Json::StyledWriter::writeCommentAfterValueOnSameLine(Json::Value const&)
// char Json::StyledWriter::writeCommentAfterValueOnSameLine(Json::StyledWriter *this, const Json::Value *a2);
// [0x11a6770] (141 bytes) Json::StyledWriter::pushValue(std::string const&)
// int Json::StyledWriter::pushValue(int a1, int a2);
// [0x11a6800] (146 bytes) Json::StyledStreamWriter::pushValue(std::string const&)
// int Json::StyledStreamWriter::pushValue(int a1, uint32_t *a2);
// [0x11a68a0] (2068 bytes) Json::StyledStreamWriter::writeValue(Json::Value const&)
// void Json::StyledStreamWriter::writeValue( long double a1, Json::StyledStreamWriter *this, const Json::Value *a3);
// [0x11a70c0] (377 bytes) Json::StyledStreamWriter::isMultineArray(Json::Value const&)
// bool Json::StyledStreamWriter::isMultineArray( long double a1, Json::StyledStreamWriter *this, const Json::Value *a3);
// [0x11a7240] (763 bytes) Json::StyledStreamWriter::writeArrayValue(Json::Value const&)
// int Json::StyledStreamWriter::writeArrayValue( long double a1, Json::StyledStreamWriter *this, const Json::Value *a3);
// [0x11a7540] (164 bytes) Json::StyledStreamWriter::write(std::ostream &,Json::Value const&)
// int Json::StyledStreamWriter::write( long double a1, Json::StyledStreamWriter *a2, int a3, Json::Value *a4);
// [0x11a75f0] (339 bytes) Json::operator<<(std::ostream &,Json::Value const&)
// int Json::operator<<(long double a1, int a2, Json::Value *a3);
// [0x11a7750] (2106 bytes) Json::StyledWriter::writeValue(Json::Value const&)
// void Json::StyledWriter::writeValue(long double a1, Json::StyledWriter *this, const Json::Value *a3);
// [0x11a7f90] (386 bytes) Json::StyledWriter::isMultineArray(Json::Value const&)
// bool Json::StyledWriter::isMultineArray( long double a1, Json::StyledWriter **this, const Json::Value *a3);
// [0x11a8120] (763 bytes) Json::StyledWriter::writeArrayValue(Json::Value const&)
// int Json::StyledWriter::writeArrayValue( long double a1, Json::StyledWriter *this, const Json::Value *a3);
// [0x11a8420] (208 bytes) Json::StyledWriter::write(Json::Value const&)
// Json::StyledWriter *Json::StyledWriter::write( long double a1, Json::StyledWriter *this, const Json::Value *a3, Json::Value *a4);
// [0x11a84f0] (1815 bytes) Json::FastWriter::writeValue(Json::Value const&)
// void Json::FastWriter::writeValue(Json::FastWriter *this, const Json::Value *a2);
// [0x11a8c10] (147 bytes) Json::FastWriter::write(Json::Value const&)
// Json::FastWriter *Json::FastWriter::write(Json::FastWriter *this, const Json::Value *a2, Json::Value *a3);
// [0x11a8cb0] (1617 bytes) Json::GLOTWriter::writeValue(Json::Value const&,unsigned int)
// void Json::GLOTWriter::writeValue(Json::GLOTWriter *this, const Json::Value *a2, unsigned int a3);
// [0x11a9310] (155 bytes) Json::GLOTWriter::write(Json::Value const&,unsigned int)
// Json::GLOTWriter *Json::GLOTWriter::write( Json::GLOTWriter *this, const Json::Value *a2, Json::Value *a3, unsigned int a4);
// [0x11a93b0] (155 bytes) Json::GLOTWriter::write(Json::Value const&)
// Json::GLOTWriter *Json::GLOTWriter::write(Json::GLOTWriter *this, const Json::Value *a2, Json::Value *a3);
// [0x11a9450] (103 bytes) Json::GLOTWriter::~GLOTWriter()
// void Json::GLOTWriter::~GLOTWriter(Json::GLOTWriter *this);
// [0x11a94c0] (103 bytes) Json::FastWriter::~FastWriter()
// void Json::FastWriter::~FastWriter(Json::FastWriter *this);
// [0x11a9530] (111 bytes) Json::GLOTWriter::~GLOTWriter()
// void Json::GLOTWriter::~GLOTWriter(Json::GLOTWriter *this);
// [0x11a95a0] (111 bytes) Json::FastWriter::~FastWriter()
// void Json::FastWriter::~FastWriter(Json::FastWriter *this);
// [0x11a9610] (266 bytes) Json::StyledWriter::~StyledWriter()
// void Json::StyledWriter::~StyledWriter(Json::StyledWriter *this);
// [0x11a9720] (250 bytes) Json::StyledWriter::~StyledWriter()
// void Json::StyledWriter::~StyledWriter(Json::StyledWriter *this);
// [0x11a9a50] (2027 bytes) Json::valueToQuotedString(char const*)
// Json *Json::valueToQuotedString(Json *this, char *s);
// [0x11aa240] (1340 bytes) Json::valueToString(double,unsigned int)
// Json *Json::valueToString(Json *this, double a2, unsigned int a3);
