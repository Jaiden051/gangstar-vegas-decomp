#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_debugger.h
// Library: glf | Module: glf_debugger
// Binary Address Span: 0xc8fe50 .. 0xc96e10 (41 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xc8fe50] (1372 bytes) int glf::debugger::operator<<<std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> const>(glf::debugger::JsonWriter &,glf::debugger::NameValuePair<std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> const>)
// int glf::debugger::operator<<<std::map<std::string,std::string> const>(int *a1, int a2);
// [0xc90a30] (541 bytes) int glf::debugger::JsonWriter::Insert<std::string>(std::string const&,std::string const&)
// int glf::debugger::JsonWriter::Insert<std::string>(int *a1, uint32_t *a2, int a3);
// [0xc93540] (34 bytes) glf::debugger::Alloc(unsigned int)
// void *glf::debugger::Alloc(size_t this);
// [0xc93570] (34 bytes) glf::debugger::Free(void *)
// void glf::debugger::Free(glf::debugger *this);
// [0xc935a0] (132 bytes) glf::debugger::GetLock(void)
// int glf::debugger::GetLock();
// [0xc93630] (35 bytes) glf::debugger::ScopeMutex::ScopeMutex(void)
// struct glf::debugger::ScopeMutex *glf::debugger::ScopeMutex::ScopeMutex();
// [0xc93660] (35 bytes) glf::debugger::ScopeMutex::~ScopeMutex()
// void glf::debugger::ScopeMutex::~ScopeMutex();
// [0xc93690] (27 bytes) glf::debugger::JsonWriter::JsonWriter(void)
// struct glf::debugger::JsonWriter *glf::debugger::JsonWriter::JsonWriter(glf::debugger::JsonWriter *this);
// [0xc936b0] (1365 bytes) glf::debugger::JsonWriter::Write(int)
// int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter *this, int a2);
// [0xc93c10] (1365 bytes) glf::debugger::JsonWriter::Write(unsigned int)
// int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter *this, unsigned int a2);
// [0xc94170] (1454 bytes) glf::debugger::JsonWriter::Write(long long)
// int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter *this, int64_t a2);
// [0xc94720] (1454 bytes) glf::debugger::JsonWriter::Write(unsigned long long)
// int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter *this, uint64_t a2);
// [0xc94cd0] (1405 bytes) glf::debugger::JsonWriter::Write(double)
// int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter *this, int64_t a2);
// [0xc95250] (1373 bytes) glf::debugger::JsonWriter::Write(float)
// int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter *this, float a2);
// [0xc957b0] (1389 bytes) glf::debugger::JsonWriter::Write(bool)
// int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter *this, char a2);
// [0xc95d20] (269 bytes) glf::debugger::JsonWriter::Write(std::string const&)
// int glf::debugger::JsonWriter::Write(int a1, uint32_t *a2);
// [0xc95e30] (290 bytes) glf::debugger::JsonWriter::Write(char const*)
// int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter *this, char *s);
// [0xc95f60] (59 bytes) glf::debugger::JsonWriter::Clear(void)
// int glf::debugger::JsonWriter::Clear(glf::debugger::JsonWriter *this);
// [0xc95fa0] (12 bytes) glf::debugger::Tweakable::GetInstanceName(void)const
// int glf::debugger::Tweakable::GetInstanceName(glf::debugger::Tweakable *this);
// [0xc95fb0] (9 bytes) glf::debugger::Tweakable::WriteValues(std::string &)
// void glf::debugger::Tweakable::WriteValues();
// [0xc95fc0] (9 bytes) glf::debugger::Tweakable::OnSetValue(std::string const&)
// void glf::debugger::Tweakable::OnSetValue();
// [0xc95fd0] (161 bytes) glf::debugger::Tweakable::Tweakable(void)
// glf::debugger::Tweakable *glf::debugger::Tweakable::Tweakable(glf::debugger::Tweakable *this);
// [0xc96080] (9 bytes) glf::debugger::Tweakable::SetValuesFromXML(std::string const&,bool)
// void glf::debugger::Tweakable::SetValuesFromXML();
// [0xc96090] (301 bytes) glf::debugger::Tweakable::LoadXML(glf::IOStream &,bool)
// void glf::debugger::Tweakable::LoadXML(glf::debugger::Tweakable *this, glf::IOStream *a2);
// [0xc961c0] (136 bytes) glf::debugger::Tweakable::LoadXML(char const*,bool)
// void glf::debugger::Tweakable::LoadXML(glf::debugger::Tweakable *this, const char *a2);
// [0xc96250] (217 bytes) glf::debugger::Tweakable::SaveXML(char const*)
// void glf::debugger::Tweakable::SaveXML(glf::debugger::Tweakable *this, const char *a2);
// [0xc96330] (102 bytes) glf::debugger::Tweakable::GetPersistentName(void)
// glf::debugger::Tweakable *glf::debugger::Tweakable::GetPersistentName(glf::debugger::Tweakable *this, int a2);
// [0xc963a0] (209 bytes) glf::debugger::Tweakable::LoadPersistent(void)
// void glf::debugger::Tweakable::LoadPersistent(glf::debugger::Tweakable *this);
// [0xc96480] (38 bytes) glf::debugger::Tweakable::SetPersistent(void)
// void glf::debugger::Tweakable::SetPersistent(glf::debugger::Tweakable *this);
// [0xc964b0] (288 bytes) glf::debugger::Tweakable::SavePersistent(void)
// void glf::debugger::Tweakable::SavePersistent(glf::debugger::Tweakable *this);
// [0xc965d0] (304 bytes) glf::debugger::Tweakable::GetType(std::string const&)
// int glf::debugger::Tweakable::GetType(int a1, int a2);
// [0xc96700] (219 bytes) glf::debugger::Tweakable::Color::Color(std::string const&)
// unsigned int glf::debugger::Tweakable::Color::Color(uint8_t *a1, uint32_t *a2);
// [0xc967e0] (259 bytes) glf::debugger::Tweakable::Vector4d::Vector4d(std::string const&)
// char *glf::debugger::Tweakable::Vector4d::Vector4d(uint32_t *a1, char **a2);
// [0xc968f0] (80 bytes) glf::debugger::Tweakable::Vector3d::Vector3d(std::string const&)
// int glf::debugger::Tweakable::Vector3d::Vector3d(int a1, char **a2);
// [0xc96940] (73 bytes) glf::debugger::Tweakable::Vector2d::Vector2d(std::string const&)
// int glf::debugger::Tweakable::Vector2d::Vector2d(uint32_t *a1, char **a2);
// [0xc96990] (87 bytes) glf::debugger::Tweakable::Colorf::Colorf(std::string const&)
// int glf::debugger::Tweakable::Colorf::Colorf(uint32_t *a1, char **a2);
// [0xc969f0] (728 bytes) glf::debugger::Tweakable::SetValue(glf::debugger::Tweakable::Group &,glf::debugger::Tweakable::Type,std::string const&,std::string const&)
// int glf::debugger::Tweakable::SetValue(int a1, int a2, int a3, const void **a4, const char **a5);
// [0xc96cd0] (9 bytes) glf::debugger::Tweakable::WriteGroup(glf::debugger::Tweakable::Group &,glf::debugger::XmlWriter &,bool)
// void glf::debugger::Tweakable::WriteGroup();
// [0xc96ce0] (9 bytes) glf::debugger::Tweakable::SendValues(void)
// void glf::debugger::Tweakable::SendValues();
// [0xc96cf0] (283 bytes) glf::debugger::Tweakable::~Tweakable()
// void glf::debugger::Tweakable::~Tweakable(void **this);
// [0xc96e10] (56 bytes) glf::debugger::Tweakable::~Tweakable()
// void glf::debugger::Tweakable::~Tweakable(void **this);
