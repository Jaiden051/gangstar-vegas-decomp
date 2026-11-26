#pragma once
// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_Codec.h
// Library: glwebtools | Module: glwebtools_Codec
// Binary Address Span: 0x13d52d0 .. 0x13d76b0 (33 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13d52d0] (589 bytes) glwebtools::Codec::EncodeBase64(unsigned char const*,unsigned int,std::string &,unsigned int)
// int glwebtools::Codec::EncodeBase64(int a1, unsigned int a2, uint32_t *a3, unsigned int a4);
// [0x13d5520] (58 bytes) glwebtools::Codec::EncodeBase64(unsigned char const*,unsigned int,std::string &,glwebtools::Codec::MaxLineLength)
// int glwebtools::Codec::EncodeBase64(int a1, unsigned int a2, uint32_t *a3, unsigned int a4);
// [0x13d5560] (54 bytes) glwebtools::Codec::IsInBase64Alphabet(char)
// bool glwebtools::Codec::IsInBase64Alphabet(glwebtools::Codec *this);
// [0x13d55a0] (1583 bytes) glwebtools::Codec::DecodeBase64(char const*,unsigned int,void *,bool)
// int glwebtools::Codec::DecodeBase64(glwebtools::Codec *this, const char *a2, uint8_t *a3, void *a4);
// [0x13d5bd0] (60 bytes) glwebtools::Codec::DecodeBase64(std::string const&,void *,bool)
// int glwebtools::Codec::DecodeBase64(glwebtools::Codec **a1, uint8_t *a2, uint8_t a3);
// [0x13d5c10] (143 bytes) glwebtools::Codec::GetDecodedBase64DataSize(std::string const&,bool)
// int glwebtools::Codec::GetDecodedBase64DataSize(int *a1, char a2);
// [0x13d5ca0] (488 bytes) glwebtools::Codec::EncodeBlob(unsigned char const*,unsigned int,std::string &)
// int glwebtools::Codec::EncodeBlob(int a1, unsigned int a2, int a3);
// [0x13d5e90] (42 bytes) glwebtools::Codec::GetDecodedBlobDataSize(std::string const&)
// int glwebtools::Codec::GetDecodedBlobDataSize(int *a1);
// [0x13d5ec0] (10 bytes) glwebtools::Codec::Dec64_GetKeyFromChar(char)
// int glwebtools::Codec::Dec64_GetKeyFromChar(glwebtools::Codec *this);
// [0x13d5ed0] (52 bytes) glwebtools::Codec::SSEncDec_GetKeyFromChar(char)
// int glwebtools::Codec::SSEncDec_GetKeyFromChar(glwebtools::Codec *this);
// [0x13d5f10] (457 bytes) glwebtools::Codec::DecodeBlob(std::string const&,void *)
// int glwebtools::Codec::DecodeBlob(char **a1, uint8_t *a2);
// [0x13d60e0] (92 bytes) glwebtools::Codec::EncUrl_GetKeysFromChar(char,char &,char &)
// int glwebtools::Codec::EncUrl_GetKeysFromChar(glwebtools::Codec *this, char *a2, char *a3);
// [0x13d6140] (300 bytes) glwebtools::Codec::EncodeUrlRFC1738(std::string const&,std::string &)
// int glwebtools::Codec::EncodeUrlRFC1738(char **a1, int a2);
// [0x13d6270] (293 bytes) glwebtools::Codec::EncodeUrlRFC3986(std::string const&,std::string &)
// int glwebtools::Codec::EncodeUrlRFC3986(char **a1, int a2);
// [0x13d63a0] (43 bytes) glwebtools::Codec::EncUrl_GetCharFromKeys(char const*)
// int glwebtools::Codec::EncUrl_GetCharFromKeys(glwebtools::Codec *this);
// [0x13d63d0] (147 bytes) glwebtools::Codec::DecodeUrl(std::string const&,std::string &)
// int glwebtools::Codec::DecodeUrl(int *a1, int a2);
// [0x13d6470] (175 bytes) glwebtools::Codec::GenerateMD5(void const*,unsigned int,char *)
// int glwebtools::Codec::GenerateMD5(glwebtools::Codec *this, size_t a2, unsigned int a3);
// [0x13d6520] (179 bytes) glwebtools::Codec::GenerateSHA256(void const*,unsigned int,char *)
// int glwebtools::Codec::GenerateSHA256(glwebtools::Codec *this, size_t a2, unsigned int a3);
// [0x13d65e0] (221 bytes) glwebtools::Codec::GenerateBase64CustomKey(char *)
// int glwebtools::Codec::GenerateBase64CustomKey(glwebtools::Codec *this);
// [0x13d66c0] (113 bytes) glwebtools::Codec::Random(unsigned int &,unsigned int &)
// int glwebtools::Codec::Random(glwebtools::Codec *this, unsigned int *a2);
// [0x13d6740] (236 bytes) glwebtools::Codec::GenerateBase64CustomKey(char *,unsigned int,unsigned int)
// int glwebtools::Codec::GenerateBase64CustomKey(glwebtools::Codec *this, char *a2, unsigned int a3);
// [0x13d6830] (426 bytes) glwebtools::Codec::EncodeBase64Custom(unsigned char const*,unsigned int,std::string &,char const*)
// int glwebtools::Codec::EncodeBase64Custom(int a1, unsigned int a2, int a3, int a4);
// [0x13d69e0] (503 bytes) glwebtools::Codec::DecodeBase64Custom(char const*,unsigned int,void *,char const*)
// int glwebtools::Codec::DecodeBase64Custom(glwebtools::Codec *this, const char *a2, uint8_t *a3, char *a4);
// [0x13d6be0] (59 bytes) glwebtools::Codec::DecodeBase64Custom(std::string const&,void *,char const*)
// int glwebtools::Codec::DecodeBase64Custom(glwebtools::Codec **a1, uint8_t *a2, char *a3);
// [0x13d6c20] (568 bytes) glwebtools::Codec::EncryptTEA(void const*,unsigned int,void *,unsigned int,unsigned int const*)
// int glwebtools::Codec::EncryptTEA( glwebtools::Codec *this, unsigned int a2, unsigned int *a3, void *a4, int *a5);
// [0x13d6e60] (288 bytes) glwebtools::Codec::DecryptTEA(void const*,unsigned int,void *,unsigned int,unsigned int const*)
// int glwebtools::Codec::DecryptTEA( int a1, glwebtools::Codec *this, const void *a3, unsigned int a4, void *a5, uint32_t *a6);
// [0x13d6f80] (636 bytes) glwebtools::Codec::EncryptXTEA(void const*,unsigned int,void *,unsigned int,unsigned int const*)
// int glwebtools::Codec::EncryptXTEA( int a1, glwebtools::Codec *this, unsigned int a3, unsigned int *a4, void *a5, int *a6);
// [0x13d7200] (272 bytes) glwebtools::Codec::DecryptXTEA(void const*,unsigned int,void *,unsigned int,unsigned int const*)
// int glwebtools::Codec::DecryptXTEA( int a1, glwebtools::Codec *this, const void *a3, unsigned int a4, void *a5, unsigned int a6);
// [0x13d7310] (451 bytes) glwebtools::Codec::EncryptXXTEA(void const*,unsigned int,void *,unsigned int,unsigned int const*)
// int glwebtools::Codec::EncryptXXTEA( glwebtools::Codec *this, size_t n, glwebtools::Codec *dest, void *a4, unsigned int a5);
// [0x13d74e0] (395 bytes) glwebtools::Codec::DecryptXXTEA(void const*,unsigned int,void *,unsigned int,unsigned int const*)
// int glwebtools::Codec::DecryptXXTEA( int a1, glwebtools::Codec *this, size_t n, glwebtools::Codec *dest, void *a5, unsigned int a6);
// [0x13d7670] (17 bytes) glwebtools::Codec::GetEncryptedTEADataSize(unsigned int)
// glwebtools::Codec *glwebtools::Codec::GetEncryptedTEADataSize(glwebtools::Codec *this);
// [0x13d7690] (17 bytes) glwebtools::Codec::GetEncryptedXTEADataSize(unsigned int)
// glwebtools::Codec *glwebtools::Codec::GetEncryptedXTEADataSize(glwebtools::Codec *this);
// [0x13d76b0] (17 bytes) glwebtools::Codec::GetEncryptedXXTEADataSize(unsigned int)
// glwebtools::Codec *glwebtools::Codec::GetEncryptedXXTEADataSize(glwebtools::Codec *this);
