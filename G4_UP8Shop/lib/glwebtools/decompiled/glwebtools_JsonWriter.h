#pragma once
// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_JsonWriter.h
// Library: glwebtools | Module: glwebtools_JsonWriter
// Binary Address Span: 0x13e2da0 .. 0x13e4c50 (39 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13e2da0] (59 bytes) glwebtools::JsonWriter::JsonWriter(void)
// glwebtools::JsonWriter *glwebtools::JsonWriter::JsonWriter(glwebtools::JsonWriter *this);
// [0x13e2de0] (63 bytes) glwebtools::JsonWriter::JsonWriter(glwebtools::Json::Value &)
// glwebtools::JsonWriter *glwebtools::JsonWriter::JsonWriter( glwebtools::JsonWriter *this, glwebtools::Json::Value *a2);
// [0x13e2e20] (12 bytes) glwebtools::JsonWriter::GetRoot(void)
// int glwebtools::JsonWriter::GetRoot(glwebtools::JsonWriter *this);
// [0x13e2e30] (12 bytes) glwebtools::JsonWriter::GetRoot(void)const
// int glwebtools::JsonWriter::GetRoot(glwebtools::JsonWriter *this);
// [0x13e2e40] (90 bytes) glwebtools::JsonWriter::write(int)
// int glwebtools::JsonWriter::write(glwebtools::JsonWriter *this, int a2);
// [0x13e2ea0] (90 bytes) glwebtools::JsonWriter::write(unsigned int)
// int glwebtools::JsonWriter::write(glwebtools::JsonWriter *this, unsigned int a2);
// [0x13e2f00] (94 bytes) glwebtools::JsonWriter::write(double)
// int glwebtools::JsonWriter::write(glwebtools::JsonWriter *this, double a2);
// [0x13e2f60] (94 bytes) glwebtools::JsonWriter::write(float)
// int glwebtools::JsonWriter::write(glwebtools::JsonWriter *this, float a2);
// [0x13e2fc0] (91 bytes) glwebtools::JsonWriter::write(bool)
// int glwebtools::JsonWriter::write(glwebtools::JsonWriter *this, bool a2);
// [0x13e3020] (90 bytes) glwebtools::JsonWriter::write(std::string const&)
// int glwebtools::JsonWriter::write(glwebtools::JsonWriter *a1, int a2);
// [0x13e3080] (103 bytes) glwebtools::JsonWriter::write(char const*)
// int glwebtools::JsonWriter::write(glwebtools::JsonWriter *this, const char *a2);
// [0x13e30f0] (45 bytes) glwebtools::JsonWriter::IsValid(void)const
// int glwebtools::JsonWriter::IsValid(glwebtools::JsonWriter *this);
// [0x13e3120] (42 bytes) glwebtools::JsonWriter::isInt(void)const
// int glwebtools::JsonWriter::isInt(glwebtools::JsonWriter *this);
// [0x13e3150] (42 bytes) glwebtools::JsonWriter::isUInt(void)const
// int glwebtools::JsonWriter::isUInt(glwebtools::JsonWriter *this);
// [0x13e3180] (42 bytes) glwebtools::JsonWriter::isDouble(void)const
// int glwebtools::JsonWriter::isDouble(glwebtools::JsonWriter *this);
// [0x13e31b0] (42 bytes) glwebtools::JsonWriter::isBool(void)const
// int glwebtools::JsonWriter::isBool(glwebtools::JsonWriter *this);
// [0x13e31e0] (42 bytes) glwebtools::JsonWriter::isString(void)const
// int glwebtools::JsonWriter::isString(glwebtools::JsonWriter *this);
// [0x13e3210] (42 bytes) glwebtools::JsonWriter::isObject(void)const
// int glwebtools::JsonWriter::isObject(glwebtools::JsonWriter *this);
// [0x13e3240] (42 bytes) glwebtools::JsonWriter::isArray(void)const
// int glwebtools::JsonWriter::isArray(glwebtools::JsonWriter *this);
// [0x13e3270] (160 bytes) glwebtools::JsonWriter::operator[](unsigned int)
// glwebtools::JsonWriter *glwebtools::JsonWriter::operator[]( glwebtools::JsonWriter *this, glwebtools::JsonWriter *a2, unsigned int a3);
// [0x13e3310] (160 bytes) glwebtools::JsonWriter::operator[](std::string const&)
// glwebtools::JsonWriter *glwebtools::JsonWriter::operator[]( glwebtools::JsonWriter *a1, glwebtools::JsonWriter *a2, int a3);
// [0x13e33b0] (194 bytes) glwebtools::JsonWriter::operator[](char const*)
// glwebtools::JsonWriter *glwebtools::JsonWriter::operator[]( glwebtools::JsonWriter *this, glwebtools::JsonWriter *a2, char *a3);
// [0x13e3480] (72 bytes) glwebtools::JsonWriter::ToString(void)const
// glwebtools::JsonWriter *glwebtools::JsonWriter::ToString( glwebtools::JsonWriter *this, glwebtools::JsonWriter *a2);
// [0x13e34d0] (50 bytes) glwebtools::JsonWriter::ToString(std::string &)const
// int glwebtools::JsonWriter::ToString(glwebtools::JsonWriter *a1, int a2);
// [0x13e3510] (72 bytes) glwebtools::JsonWriter::ToPrettyString(void)const
// glwebtools::JsonWriter *glwebtools::JsonWriter::ToPrettyString( glwebtools::JsonWriter *this, glwebtools::JsonWriter *a2);
// [0x13e3560] (50 bytes) glwebtools::JsonWriter::ToPrettyString(std::string &)const
// int glwebtools::JsonWriter::ToPrettyString(glwebtools::JsonWriter *a1, int a2);
// [0x13e35a0] (1077 bytes) glwebtools::JsonWriter::write(glwebtools::CustomArgument const&)
// int glwebtools::JsonWriter::write(glwebtools::JsonWriter *this, const glwebtools::CustomArgument *a2);
// [0x13e39e0] (357 bytes) glwebtools::JsonWriter::write(glwebtools::CustomAttributeList const&)
// glwebtools *glwebtools::JsonWriter::write( glwebtools::JsonWriter *this, const glwebtools::CustomAttributeList *a2);
// [0x13e3b50] (778 bytes) glwebtools::JsonWriter::write(glwebtools::JSONValue const&)
// unsigned int glwebtools::JsonWriter::write(glwebtools::JsonWriter *this, const glwebtools::JSONValue *a2);
// [0x13e3e60] (317 bytes) glwebtools::JsonWriter::write(glwebtools::JSONObject const&)
// glwebtools *glwebtools::JsonWriter::write(glwebtools::JsonWriter *this, const glwebtools::JSONObject *a2);
// [0x13e3fa0] (333 bytes) glwebtools::JsonWriter::write(glwebtools::JSONArray const&)
// glwebtools *glwebtools::JsonWriter::write(glwebtools::JsonWriter *this, const glwebtools::JSONArray *a2);
// [0x13e40f0] (347 bytes) glwebtools::JsonWriter::write(glwebtools::NameValuePair<glwebtools::JSONObject const>)
// glwebtools *glwebtools::JsonWriter::write(glwebtools::JsonWriter *a1, int a2);
// [0x13e4250] (347 bytes) glwebtools::JsonWriter::write(glwebtools::IndexedValue<glwebtools::JSONArray const>)
// glwebtools *glwebtools::JsonWriter::write( glwebtools::JsonWriter *a1, unsigned int a2, glwebtools::JSONArray *a3);
// [0x13e43e0] (421 bytes) glwebtools::JsonWriter::include(char const**,char const**,glwebtools::CustomAttributeList const&)
// glwebtools *glwebtools::JsonWriter::include( glwebtools::JsonWriter *this, const char **a2, const char **a3, const glwebtools::CustomAttributeList *a4);
// [0x13e4590] (413 bytes) glwebtools::JsonWriter::include(char const**,char const**,glwebtools::JSONObject const&)
// glwebtools *glwebtools::JsonWriter::include( glwebtools::JsonWriter *this, const char **a2, const char **a3, const glwebtools::JSONObject *a4);
// [0x13e4730] (458 bytes) glwebtools::JsonWriter::include(unsigned int *,unsigned int *,glwebtools::JSONArray const&)
// unsigned int glwebtools::JsonWriter::include( glwebtools::JsonWriter *this, unsigned int *a2, unsigned int *a3, const glwebtools::JSONArray *a4);
// [0x13e4900] (421 bytes) glwebtools::JsonWriter::exclude(char const**,char const**,glwebtools::CustomAttributeList const&)
// glwebtools *glwebtools::JsonWriter::exclude( glwebtools::JsonWriter *this, const char **a2, const char **a3, const glwebtools::CustomAttributeList *a4);
// [0x13e4ab0] (413 bytes) glwebtools::JsonWriter::exclude(char const**,char const**,glwebtools::JSONObject const&)
// glwebtools *glwebtools::JsonWriter::exclude( glwebtools::JsonWriter *this, const char **a2, const char **a3, const glwebtools::JSONObject *a4);
// [0x13e4c50] (458 bytes) glwebtools::JsonWriter::exclude(unsigned int *,unsigned int *,glwebtools::JSONArray const&)
// unsigned int glwebtools::JsonWriter::exclude( glwebtools::JsonWriter *this, unsigned int *a2, unsigned int *a3, const glwebtools::JSONArray *a4);
