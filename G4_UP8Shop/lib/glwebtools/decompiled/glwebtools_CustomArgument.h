#pragma once
// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_CustomArgument.h
// Library: glwebtools | Module: glwebtools_CustomArgument
// Binary Address Span: 0x13d8670 .. 0x13d98f0 (36 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13d8670] (34 bytes) glwebtools::CustomArgument::CustomArgument(void)
// struct glwebtools::CustomArgument *glwebtools::CustomArgument::CustomArgument(glwebtools::CustomArgument *this);
// [0x13d86a0] (70 bytes) glwebtools::CustomArgument::CustomArgument(glwebtools::CustomArgument const&)
// glwebtools::CustomArgument *glwebtools::CustomArgument::CustomArgument( glwebtools::CustomArgument *this, const glwebtools::CustomArgument *a2);
// [0x13d86f0] (72 bytes) glwebtools::CustomArgument::operator=(glwebtools::CustomArgument const&)
// glwebtools::CustomArgument *glwebtools::CustomArgument::operator=( glwebtools::CustomArgument *this, const glwebtools::CustomArgument *a2);
// [0x13d8740] (63 bytes) glwebtools::CustomArgument::CustomArgument(std::string const&)
// int glwebtools::CustomArgument::CustomArgument(int a1, int a2);
// [0x13d8780] (96 bytes) glwebtools::CustomArgument::CustomArgument(char const*)
// glwebtools::CustomArgument *glwebtools::CustomArgument::CustomArgument( glwebtools::CustomArgument *this, char *a2);
// [0x13d87e0] (71 bytes) glwebtools::CustomArgument::CustomArgument(glwebtools::JSONValue const&)
// glwebtools::CustomArgument *glwebtools::CustomArgument::CustomArgument( glwebtools::CustomArgument *this, const glwebtools::JSONValue *a2);
// [0x13d8830] (98 bytes) glwebtools::CustomArgument::operator==(glwebtools::CustomArgument const&)const
// bool glwebtools::CustomArgument::operator==(const void **this, const void **a2);
// [0x13d88a0] (11 bytes) glwebtools::CustomArgument::ToString(void)const
// glwebtools::CustomArgument *glwebtools::CustomArgument::ToString(glwebtools::CustomArgument *this);
// [0x13d88b0] (26 bytes) glwebtools::CustomArgument::ToInt(void)const
// int glwebtools::CustomArgument::ToInt(void **this);
// [0x13d88d0] (26 bytes) glwebtools::CustomArgument::ToUInt(void)const
// int glwebtools::CustomArgument::ToUInt(void **this);
// [0x13d88f0] (26 bytes) glwebtools::CustomArgument::ToFloat(void)const
// long double glwebtools::CustomArgument::ToFloat(void **this);
// [0x13d8910] (26 bytes) glwebtools::CustomArgument::ToDouble(void)const
// long double glwebtools::CustomArgument::ToDouble(void **this);
// [0x13d8930] (27 bytes) glwebtools::CustomArgument::ToBool(void)const
// int glwebtools::CustomArgument::ToBool(void **this);
// [0x13d8950] (13 bytes) glwebtools::CustomArgument::IsValid(void)const
// bool glwebtools::CustomArgument::IsValid(glwebtools::CustomArgument *this);
// [0x13d8960] (14 bytes) glwebtools::CustomArgument::IsInt(void)const
// bool glwebtools::CustomArgument::IsInt(glwebtools::CustomArgument *this);
// [0x13d8970] (94 bytes) glwebtools::CustomArgument::ToInt(int &)const
// unsigned int glwebtools::CustomArgument::ToInt(void **this, int *a2);
// [0x13d89d0] (42 bytes) glwebtools::CustomArgument::operator>>(int &)const
// unsigned int glwebtools::CustomArgument::operator>>(void **this, int *a2);
// [0x13d8a00] (14 bytes) glwebtools::CustomArgument::IsUInt(void)const
// bool glwebtools::CustomArgument::IsUInt(glwebtools::CustomArgument *this);
// [0x13d8a10] (94 bytes) glwebtools::CustomArgument::ToUInt(unsigned int &)const
// unsigned int glwebtools::CustomArgument::ToUInt(void **this, unsigned int *a2);
// [0x13d8a70] (42 bytes) glwebtools::CustomArgument::operator>>(unsigned int &)const
// unsigned int glwebtools::CustomArgument::operator>>(void **this, unsigned int *a2);
// [0x13d8aa0] (14 bytes) glwebtools::CustomArgument::IsFloat(void)const
// bool glwebtools::CustomArgument::IsFloat(glwebtools::CustomArgument *this);
// [0x13d8ab0] (14 bytes) glwebtools::CustomArgument::IsDouble(void)const
// bool glwebtools::CustomArgument::IsDouble(glwebtools::CustomArgument *this);
// [0x13d8ac0] (94 bytes) glwebtools::CustomArgument::ToDouble(double &)const
// unsigned int glwebtools::CustomArgument::ToDouble(void **this, double *a2);
// [0x13d8b20] (42 bytes) glwebtools::CustomArgument::operator>>(double &)const
// unsigned int glwebtools::CustomArgument::operator>>(void **this, double *a2);
// [0x13d8b50] (94 bytes) glwebtools::CustomArgument::ToFloat(float &)const
// unsigned int glwebtools::CustomArgument::ToFloat(void **this, float *a2);
// [0x13d8bb0] (42 bytes) glwebtools::CustomArgument::operator>>(float &)const
// unsigned int glwebtools::CustomArgument::operator>>(void **this, float *a2);
// [0x13d8be0] (14 bytes) glwebtools::CustomArgument::IsBool(void)const
// bool glwebtools::CustomArgument::IsBool(glwebtools::CustomArgument *this);
// [0x13d8bf0] (94 bytes) glwebtools::CustomArgument::ToBool(bool &)const
// unsigned int glwebtools::CustomArgument::ToBool(void **this, bool *a2);
// [0x13d8c50] (42 bytes) glwebtools::CustomArgument::operator>>(bool &)const
// unsigned int glwebtools::CustomArgument::operator>>(void **this, bool *a2);
// [0x13d8c80] (14 bytes) glwebtools::CustomArgument::IsString(void)const
// bool glwebtools::CustomArgument::IsString(glwebtools::CustomArgument *this);
// [0x13d8c90] (77 bytes) glwebtools::CustomArgument::ToString(std::string &)const
// int glwebtools::CustomArgument::ToString(glwebtools::CustomArgument *a1, int a2);
// [0x13d8ce0] (42 bytes) glwebtools::CustomArgument::operator>>(std::string &)const
// int glwebtools::CustomArgument::operator>>(glwebtools::CustomArgument *a1, int a2);
// [0x13d8d10] (335 bytes) glwebtools::CustomArgument::ToString(glwebtools::SecureString &)const
// int glwebtools::CustomArgument::ToString(const char **this, glwebtools::SecureString *a2);
// [0x13d8e60] (42 bytes) glwebtools::CustomArgument::operator>>(glwebtools::SecureString &)const
// int glwebtools::CustomArgument::operator>>(const char **this, glwebtools::SecureString *a2);
// [0x13d8e90] (14 bytes) glwebtools::CustomArgument::IsJSON(void)const
// bool glwebtools::CustomArgument::IsJSON(glwebtools::CustomArgument *this);
// [0x13d98f0] (69 bytes) glwebtools::CustomArgument::~CustomArgument()
// void glwebtools::CustomArgument::~CustomArgument(glwebtools::CustomArgument *this);
