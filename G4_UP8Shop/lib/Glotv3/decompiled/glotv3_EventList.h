#pragma once
// ============================================================================
// G4_UP8Shop/lib/Glotv3/decompiled/glotv3_EventList.h
// Library: Glotv3 | Module: glotv3_EventList
// Binary Address Span: 0x1376190 .. 0x137a610 (38 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1376190] (340 bytes) glotv3::EventList::isValidRootPair(std::string const&,std::string const&)const
// int glotv3::EventList::isValidRootPair(int a1, const void **a2, uint32_t *a3);
// [0x13762f0] (284 bytes) glotv3::EventList::~EventList()
// void glotv3::EventList::~EventList(glotv3::EventList *this);
// [0x1376410] (49 bytes) glotv3::EventList::getRoot(void)const
// void *glotv3::EventList::getRoot(glotv3::EventList *this);
// [0x1376450] (220 bytes) glotv3::EventList::setRoot(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&)
// const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *glotv3::EventList::setRoot( glotv3::EventList *this, const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2);
// [0x1376530] (128 bytes) glotv3::EventList::clear(void)
// uint32_t *glotv3::EventList::clear(glotv3::EventList *this);
// [0x13765b0] (83 bytes) glotv3::EventList::getEvents(void)
// void *glotv3::EventList::getEvents(glotv3::EventList *this);
// [0x1376610] (282 bytes) glotv3::EventList::hasRootPair(std::string const&)const
// bool glotv3::EventList::hasRootPair(int a1, uint8_t **a2);
// [0x1376730] (126 bytes) glotv3::EventList::hasEvents(void)const
// int glotv3::EventList::hasEvents(glotv3::EventList *this);
// [0x13767b0] (162 bytes) glotv3::EventList::getCount(void)const
// int glotv3::EventList::getCount(glotv3::EventList *this);
// [0x1376860] (126 bytes) glotv3::EventList::hasIDFV(void)const
// int glotv3::EventList::hasIDFV(glotv3::EventList *this);
// [0x13768e0] (212 bytes) glotv3::EventList::getIDFV(void)const
// glotv3::EventList *glotv3::EventList::getIDFV(glotv3::EventList *this, glotv3::EventList *a2);
// [0x13769c0] (126 bytes) glotv3::EventList::hasHDIDFV(void)const
// int glotv3::EventList::hasHDIDFV(glotv3::EventList *this);
// [0x1376a40] (212 bytes) glotv3::EventList::getHDIDFV(void)const
// glotv3::EventList *glotv3::EventList::getHDIDFV(glotv3::EventList *this, glotv3::EventList *a2);
// [0x1376b20] (126 bytes) glotv3::EventList::hasAnonymous(void)const
// int glotv3::EventList::hasAnonymous(glotv3::EventList *this);
// [0x1376ba0] (212 bytes) glotv3::EventList::getAnonymousId(void)const
// glotv3::EventList *glotv3::EventList::getAnonymousId(glotv3::EventList *this, glotv3::EventList *a2);
// [0x1376c80] (126 bytes) glotv3::EventList::hasPackageTimestamp(void)const
// int glotv3::EventList::hasPackageTimestamp(glotv3::EventList *this);
// [0x1376d00] (177 bytes) glotv3::EventList::getPackageTimestamp(void)const
// int glotv3::EventList::getPackageTimestamp(glotv3::EventList *this);
// [0x1376dc0] (126 bytes) glotv3::EventList::hasGameVersionString(void)const
// int glotv3::EventList::hasGameVersionString(glotv3::EventList *this);
// [0x1376e40] (212 bytes) glotv3::EventList::getGameVersionString(void)const
// glotv3::EventList *glotv3::EventList::getGameVersionString(glotv3::EventList *this, glotv3::EventList *a2);
// [0x1376f20] (126 bytes) glotv3::EventList::hasGGID(void)const
// int glotv3::EventList::hasGGID(glotv3::EventList *this);
// [0x1376fa0] (233 bytes) glotv3::EventList::getGGID(void)const
// int glotv3::EventList::getGGID(glotv3::EventList *this);
// [0x1377090] (204 bytes) glotv3::EventList::getPHID(void)const
// glotv3::EventList *glotv3::EventList::getPHID(glotv3::EventList *this, int a2);
// [0x1377160] (276 bytes) glotv3::EventList::getUUID(void)const
// glotv3::EventList *glotv3::EventList::getUUID(glotv3::EventList *this, int a2);
// [0x1377690] (425 bytes) glotv3::EventList::addEvent(boost::shared_ptr<glotv3::Event const>)
// char *glotv3::EventList::addEvent(int a1, glotv3::Event **a2);
// [0x13779b0] (1496 bytes) glotv3::EventList::addRootPairWithSerDesType(std::string const&,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&)
// void **glotv3::EventList::addRootPairWithSerDesType(int a1, uint8_t **a2, uint32_t *a3);
// [0x1377f90] (58 bytes) glotv3::EventList::addRootPair(std::string const&,glotv3::EventValue)
// void **glotv3::EventList::addRootPair(int a1, uint8_t **a2, `glotv3::EventValue::operator rapidjson` *a3);
// [0x1377fd0] (185 bytes) glotv3::EventList::setPackageTimestamp(unsigned int)
// void glotv3::EventList::setPackageTimestamp(glotv3::EventList *this, void *a2);
// [0x1378090] (185 bytes) glotv3::EventList::setGGID(unsigned int)
// void glotv3::EventList::setGGID(glotv3::EventList *this, void *a2);
// [0x1378150] (309 bytes) glotv3::EventList::addRootPair(std::string const&,std::string const&)
// void **glotv3::EventList::addRootPair(int a1, uint8_t **a2, uint8_t **a3);
// [0x1378290] (52 bytes) glotv3::EventList::setIDFV(std::string const&)
// void **glotv3::EventList::setIDFV(int a1, uint8_t **a2);
// [0x13782d0] (52 bytes) glotv3::EventList::setAnonymousId(std::string const&)
// void **glotv3::EventList::setAnonymousId(int a1, uint8_t **a2);
// [0x1378310] (52 bytes) glotv3::EventList::setPHID(std::string const&)
// void **glotv3::EventList::setPHID(int a1, uint8_t **a2);
// [0x1378350] (52 bytes) glotv3::EventList::setGameVersionString(std::string const&)
// void **glotv3::EventList::setGameVersionString(int a1, uint8_t **a2);
// [0x1378390] (262 bytes) glotv3::EventList::reset(void)
// int glotv3::EventList::reset(glotv3::EventList *this);
// [0x13784a0] (3437 bytes) glotv3::EventList::setDefaultKeysValues(void)
// int glotv3::EventList::setDefaultKeysValues(glotv3::EventList *this);
// [0x1379210] (2589 bytes) glotv3::EventList::EventList(void)
// glotv3::EventList *glotv3::EventList::EventList(glotv3::EventList *this);
// [0x137a150] (1215 bytes) glotv3::EventList::serializeToJson(std::vector<char,std::allocator<char>> &)const
// void glotv3::EventList::serializeToJson(glotv3::EventList *a1, char **a2);
// [0x137a610] (1131 bytes) glotv3::EventList::deserializeFromJson(std::vector<char,std::allocator<char>> &)
// int glotv3::EventList::deserializeFromJson(glotv3::EventList *this, std::vector<char> *a2);
