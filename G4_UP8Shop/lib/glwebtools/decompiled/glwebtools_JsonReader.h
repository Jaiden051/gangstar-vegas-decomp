#pragma once
// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_JsonReader.h
// Library: glwebtools | Module: glwebtools_JsonReader
// Binary Address Span: 0x13df940 .. 0x13e27b0 (53 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13df940] (34 bytes) glwebtools::JsonReader::Iterator::Iterator(void)
// struct glwebtools::JsonReader::Iterator *glwebtools::JsonReader::Iterator::Iterator( glwebtools::JsonReader::Iterator *this);
// [0x13df970] (42 bytes) glwebtools::JsonReader::Iterator::Iterator(glwebtools::JsonReader::Iterator const&)
// glwebtools::JsonReader::Iterator *glwebtools::JsonReader::Iterator::Iterator( glwebtools::JsonReader::Iterator *this, const glwebtools::JsonReader::Iterator *a2);
// [0x13df9a0] (42 bytes) glwebtools::JsonReader::Iterator::Iterator(glwebtools::Json::ValueIterator)
// glwebtools::Json::ValueIterator *glwebtools::JsonReader::Iterator::Iterator( glwebtools::Json::ValueIterator *a1, glwebtools::Json::ValueIterator *a2);
// [0x13df9d0] (58 bytes) glwebtools::JsonReader::Iterator::operator=(glwebtools::JsonReader::Iterator const&)
// glwebtools::JsonReader::Iterator *glwebtools::JsonReader::Iterator::operator=( glwebtools::JsonReader::Iterator *this, const glwebtools::JsonReader::Iterator *a2);
// [0x13dfa10] (50 bytes) glwebtools::JsonReader::Iterator::operator--(void)
// glwebtools::JsonReader::Iterator *glwebtools::JsonReader::Iterator::operator--( glwebtools::JsonReader::Iterator *this);
// [0x13dfa50] (76 bytes) glwebtools::JsonReader::Iterator::operator--(int)
// glwebtools::JsonReader::Iterator *glwebtools::JsonReader::Iterator::operator--( glwebtools::JsonReader::Iterator *this, glwebtools::JsonReader::Iterator *a2);
// [0x13dfaa0] (50 bytes) glwebtools::JsonReader::Iterator::operator++(void)
// glwebtools::JsonReader::Iterator *glwebtools::JsonReader::Iterator::operator++( glwebtools::JsonReader::Iterator *this);
// [0x13dfae0] (76 bytes) glwebtools::JsonReader::Iterator::operator++(int)
// glwebtools::JsonReader::Iterator *glwebtools::JsonReader::Iterator::operator++( glwebtools::JsonReader::Iterator *this, glwebtools::JsonReader::Iterator *a2);
// [0x13dfb30] (42 bytes) glwebtools::JsonReader::Iterator::operator==(glwebtools::JsonReader::Iterator const&)const
// int glwebtools::JsonReader::Iterator::operator==( glwebtools::JsonReader::Iterator *this, const glwebtools::JsonReader::Iterator *a2);
// [0x13dfb60] (45 bytes) glwebtools::JsonReader::Iterator::operator!=(glwebtools::JsonReader::Iterator const&)const
// int glwebtools::JsonReader::Iterator::operator!=( glwebtools::JsonReader::Iterator *this, const glwebtools::JsonReader::Iterator *a2);
// [0x13dfb90] (76 bytes) glwebtools::JsonReader::Iterator::name(void)const
// glwebtools::JsonReader::Iterator *glwebtools::JsonReader::Iterator::name( glwebtools::JsonReader::Iterator *this, glwebtools::Json::ValueIteratorBase *a2);
// [0x13dfbe0] (34 bytes) glwebtools::JsonReader::Iterator::index(void)const
// int glwebtools::JsonReader::Iterator::index(glwebtools::JsonReader::Iterator *this);
// [0x13dfc10] (42 bytes) glwebtools::JsonReader::JsonReader(void)
// glwebtools::JsonReader *glwebtools::JsonReader::JsonReader(glwebtools::JsonReader *this);
// [0x13dfc40] (770 bytes) glwebtools::JsonReader::parse(std::string const&)
// unsigned int glwebtools::JsonReader::parse(glwebtools::Json::Value *a1, int a2);
// [0x13dff50] (72 bytes) glwebtools::JsonReader::JsonReader(std::string const&)
// unsigned int glwebtools::JsonReader::JsonReader(glwebtools::Json::Value *a1, int a2);
// [0x13dffa0] (823 bytes) glwebtools::JsonReader::parse(char const*)
// int glwebtools::JsonReader::parse(glwebtools::JsonReader *this, char *s);
// [0x13e02e0] (72 bytes) glwebtools::JsonReader::JsonReader(char const*)
// glwebtools::JsonReader *glwebtools::JsonReader::JsonReader(glwebtools::JsonReader *this, char *a2);
// [0x13e0330] (170 bytes) glwebtools::JsonReader::read(glwebtools::JSONValue &)const
// int glwebtools::JsonReader::read(glwebtools::JsonReader *this, glwebtools::JSONValue *a2);
// [0x13e03e0] (37 bytes) glwebtools::JsonReader::IsValid(void)const
// int glwebtools::JsonReader::IsValid(glwebtools::JsonReader *this);
// [0x13e0410] (104 bytes) glwebtools::JsonReader::read(std::string &)const
// int glwebtools::JsonReader::read(glwebtools::Json::Value *a1, int a2);
// [0x13e0480] (92 bytes) glwebtools::JsonReader::read(bool &)const
// int glwebtools::JsonReader::read(glwebtools::JsonReader *this, bool *a2);
// [0x13e04e0] (111 bytes) glwebtools::JsonReader::read(double &)const
// int glwebtools::JsonReader::read(long double a1, glwebtools::JsonReader *this, double *a3);
// [0x13e0550] (106 bytes) glwebtools::JsonReader::read(unsigned int &)const
// int glwebtools::JsonReader::read(glwebtools::JsonReader *this, unsigned int *a2);
// [0x13e05c0] (106 bytes) glwebtools::JsonReader::read(int &)const
// int glwebtools::JsonReader::read(glwebtools::JsonReader *this, int *a2);
// [0x13e0630] (106 bytes) glwebtools::JsonReader::read(unsigned short &)const
// int glwebtools::JsonReader::read(glwebtools::JsonReader *this, uint16_t *a2);
// [0x13e06a0] (106 bytes) glwebtools::JsonReader::read(short &)const
// int glwebtools::JsonReader::read(glwebtools::JsonReader *this, int16_t *a2);
// [0x13e0710] (34 bytes) glwebtools::JsonReader::isInt(void)const
// int glwebtools::JsonReader::isInt(glwebtools::JsonReader *this);
// [0x13e0740] (34 bytes) glwebtools::JsonReader::isUInt(void)const
// int glwebtools::JsonReader::isUInt(glwebtools::JsonReader *this);
// [0x13e0770] (34 bytes) glwebtools::JsonReader::isDouble(void)const
// int glwebtools::JsonReader::isDouble(glwebtools::JsonReader *this);
// [0x13e07a0] (34 bytes) glwebtools::JsonReader::isBool(void)const
// int glwebtools::JsonReader::isBool(glwebtools::JsonReader *this);
// [0x13e07d0] (34 bytes) glwebtools::JsonReader::isString(void)const
// int glwebtools::JsonReader::isString(glwebtools::JsonReader *this);
// [0x13e0800] (1524 bytes) glwebtools::JsonReader::read(glwebtools::CustomArgument &)const
// int glwebtools::JsonReader::read( long double a1, glwebtools::JsonReader *this, glwebtools::CustomArgument *a3);
// [0x13e0e00] (34 bytes) glwebtools::JsonReader::isObject(void)const
// int glwebtools::JsonReader::isObject(glwebtools::JsonReader *this);
// [0x13e0e30] (34 bytes) glwebtools::JsonReader::isArray(void)const
// int glwebtools::JsonReader::isArray(glwebtools::JsonReader *this);
// [0x13e0e60] (104 bytes) glwebtools::JsonReader::begin(void)const
// glwebtools::JsonReader *glwebtools::JsonReader::begin(glwebtools::JsonReader *this);
// [0x13e0ed0] (104 bytes) glwebtools::JsonReader::end(void)const
// glwebtools::JsonReader *glwebtools::JsonReader::end(glwebtools::JsonReader *this);
// [0x13e0f40] (34 bytes) glwebtools::JsonReader::size(void)const
// int glwebtools::JsonReader::size(glwebtools::JsonReader *this);
// [0x13e0f70] (42 bytes) glwebtools::JsonReader::JsonReader(glwebtools::Json::Value const&)
// glwebtools::JsonReader *glwebtools::JsonReader::JsonReader( glwebtools::JsonReader *this, const glwebtools::Json::Value *a2);
// [0x13e0fa0] (68 bytes) glwebtools::JsonReader::Iterator::operator*(void)const
// glwebtools::JsonReader::Iterator *glwebtools::JsonReader::Iterator::operator*( glwebtools::JsonReader::Iterator *this, glwebtools::Json::ValueIteratorBase *a2);
// [0x13e0ff0] (145 bytes) glwebtools::JsonReader::operator[](unsigned int)const
// glwebtools::JsonReader *glwebtools::JsonReader::operator[]( glwebtools::JsonReader *this, glwebtools::Json::Value *a2, unsigned int a3);
// [0x13e1090] (145 bytes) glwebtools::JsonReader::operator[](std::string const&)const
// glwebtools::JsonReader *glwebtools::JsonReader::operator[]( glwebtools::JsonReader *a1, glwebtools::Json::Value *a2, int a3);
// [0x13e1130] (153 bytes) glwebtools::JsonReader::operator[](char const*)const
// glwebtools::JsonReader *glwebtools::JsonReader::operator[]( glwebtools::JsonReader *this, glwebtools::Json::Value *a2, char *a3);
// [0x13e11d0] (484 bytes) glwebtools::JsonReader::read(glwebtools::JSONObject &)const
// int glwebtools::JsonReader::read(glwebtools::JsonReader *this, glwebtools::JSONObject *a2);
// [0x13e13c0] (407 bytes) glwebtools::JsonReader::read(glwebtools::JSONArray &)const
// int glwebtools::JsonReader::read(glwebtools::JsonReader *this, glwebtools::JSONArray *a2);
// [0x13e1560] (706 bytes) glwebtools::JsonReader::include(char const**,char const**,glwebtools::JSONObject &)const
// int glwebtools::JsonReader::include( glwebtools::JsonReader *this, const char **a2, const char **a3, glwebtools::JSONObject *a4);
// [0x13e1830] (548 bytes) glwebtools::JsonReader::include(unsigned int *,unsigned int *,glwebtools::JSONArray &)const
// int glwebtools::JsonReader::include( glwebtools::JsonReader *this, unsigned int *a2, unsigned int *a3, glwebtools::JSONArray *a4);
// [0x13e1a60] (706 bytes) glwebtools::JsonReader::exclude(char const**,char const**,glwebtools::JSONObject &)const
// int glwebtools::JsonReader::exclude( glwebtools::JsonReader *this, const char **a2, const char **a3, glwebtools::JSONObject *a4);
// [0x13e1d30] (548 bytes) glwebtools::JsonReader::exclude(unsigned int *,unsigned int *,glwebtools::JSONArray &)const
// int glwebtools::JsonReader::exclude( glwebtools::JsonReader *this, unsigned int *a2, unsigned int *a3, glwebtools::JSONArray *a4);
// [0x13e1f60] (64 bytes) glwebtools::JsonReader::ToString(void)const
// glwebtools::JsonReader *glwebtools::JsonReader::ToString(glwebtools::JsonReader *this);
// [0x13e1fa0] (42 bytes) glwebtools::JsonReader::ToString(std::string &)const
// int glwebtools::JsonReader::ToString(glwebtools::Json::Value *a1, int a2);
// [0x13e1fd0] (1098 bytes) glwebtools::JsonReader::exclude(char const**,char const**,glwebtools::CustomAttributeList &)const
// int glwebtools::JsonReader::exclude( long double a1, glwebtools::JsonReader *this, const char **a3, const char **a4, glwebtools::CustomAttributeList *a5);
// [0x13e2420] (906 bytes) glwebtools::JsonReader::read(glwebtools::CustomAttributeList &)const
// int glwebtools::JsonReader::read( long double a1, glwebtools::JsonReader *this, glwebtools::CustomAttributeList *a3);
// [0x13e27b0] (1098 bytes) glwebtools::JsonReader::include(char const**,char const**,glwebtools::CustomAttributeList &)const
// int glwebtools::JsonReader::include( long double a1, glwebtools::JsonReader *this, const char **a3, const char **a4, glwebtools::CustomAttributeList *a5);
