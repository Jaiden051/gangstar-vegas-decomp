#pragma once
// ============================================================================
// G4_UP8Shop/lib/Glotv3/decompiled/glotv3_Event.h
// Library: Glotv3 | Module: glotv3_Event
// Binary Address Span: 0x133d770 .. 0x1342390 (56 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x133d770] (293 bytes) glotv3::Event::~Event()
// void glotv3::Event::~Event(glotv3::Event *this);
// [0x133d8a0] (56 bytes) glotv3::Event::~Event()
// void glotv3::Event::~Event(glotv3::Event *this);
// [0x133d8e0] (14 bytes) glotv3::Event::setIsAutomatic(bool)
// glotv3::Event *glotv3::Event::setIsAutomatic(glotv3::Event *this, bool a2);
// [0x133d8f0] (13 bytes) glotv3::Event::isAutomatic(void)const
// int glotv3::Event::isAutomatic(glotv3::Event *this);
// [0x133d900] (14 bytes) glotv3::Event::setPriority(glotv3::Event::Type)
// int glotv3::Event::setPriority(int a1, int a2);
// [0x133d910] (12 bytes) glotv3::Event::getPriority(void)const
// int glotv3::Event::getPriority(glotv3::Event *this);
// [0x133da60] (49 bytes) glotv3::Event::getRoot(void)const
// void *glotv3::Event::getRoot(glotv3::Event *this);
// [0x133daa0] (220 bytes) glotv3::Event::setRoot(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&)
// const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *glotv3::Event::setRoot( glotv3::Event *this, const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2);
// [0x133db80] (196 bytes) glotv3::Event::setData(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// void glotv3::Event::setData( glotv3::Event *this, rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2);
// [0x133dc50] (723 bytes) glotv3::Event::removeKeyPair(std::string const&)
// int glotv3::Event::removeKeyPair(int a1, uint8_t **a2);
// [0x133df30] (707 bytes) glotv3::Event::removeRootPair(std::string const&)
// int glotv3::Event::removeRootPair(int a1, uint8_t **a2);
// [0x133e200] (282 bytes) glotv3::Event::hasRootPair(std::string const&)const
// bool glotv3::Event::hasRootPair(int a1, uint8_t **a2);
// [0x133e320] (44 bytes) glotv3::Event::hasToken(void)const
// bool glotv3::Event::hasToken(glotv3::Event *this);
// [0x133e350] (44 bytes) glotv3::Event::hasTimestamp(void)const
// bool glotv3::Event::hasTimestamp(glotv3::Event *this);
// [0x133e380] (233 bytes) glotv3::Event::getToken(void)const
// int glotv3::Event::getToken(glotv3::Event *this);
// [0x133e470] (233 bytes) glotv3::Event::getTimestamp(void)const
// int glotv3::Event::getTimestamp(glotv3::Event *this);
// [0x133e560] (126 bytes) glotv3::Event::hasData(void)const
// int glotv3::Event::hasData(glotv3::Event *this);
// [0x133e5e0] (298 bytes) glotv3::Event::hasKeyPair(std::string const&)const
// bool glotv3::Event::hasKeyPair(int a1, uint8_t **a2);
// [0x133e710] (44 bytes) glotv3::Event::hasSmartCount(void)const
// bool glotv3::Event::hasSmartCount(glotv3::Event *this);
// [0x133e740] (44 bytes) glotv3::Event::hasCount(void)const
// bool glotv3::Event::hasCount(glotv3::Event *this);
// [0x133e770] (44 bytes) glotv3::Event::hasConnectivity(void)const
// bool glotv3::Event::hasConnectivity(glotv3::Event *this);
// [0x133e7a0] (44 bytes) glotv3::Event::hasGameTime(void)const
// bool glotv3::Event::hasGameTime(glotv3::Event *this);
// [0x133e7d0] (289 bytes) glotv3::Event::getSmartCount(void)const
// int glotv3::Event::getSmartCount(glotv3::Event *this);
// [0x133e900] (289 bytes) glotv3::Event::getCount(void)const
// int glotv3::Event::getCount(glotv3::Event *this);
// [0x133ea30] (494 bytes) glotv3::Event::getSessionTime(void)const
// long double glotv3::Event::getSessionTime(glotv3::Event *this);
// [0x133ec20] (289 bytes) glotv3::Event::getSessionId(void)const
// int glotv3::Event::getSessionId(glotv3::Event *this);
// [0x133ed50] (494 bytes) glotv3::Event::getGameTime(void)const
// long double glotv3::Event::getGameTime(glotv3::Event *this);
// [0x133ef40] (289 bytes) glotv3::Event::getConnectivity(void)const
// int glotv3::Event::getConnectivity(glotv3::Event *this);
// [0x133f070] (494 bytes) glotv3::Event::getKeyPairAsDouble(std::string const&)const
// long double glotv3::Event::getKeyPairAsDouble(int a1, char **a2);
// [0x133f260] (281 bytes) glotv3::Event::getKeyPairAsUInt(std::string const&)const
// int glotv3::Event::getKeyPairAsUInt(int a1, char **a2);
// [0x133f380] (166 bytes) glotv3::Event::getKeyPairType(std::string const&)const
// int glotv3::Event::getKeyPairType(int a1, const char **a2);
// [0x133f430] (413 bytes) glotv3::Event::getGameVersion(void)const
// glotv3::Event *glotv3::Event::getGameVersion(glotv3::Event *this, int a2);
// [0x133f5d0] (324 bytes) glotv3::Event::getKeyPair(std::string const&)const
// uint32_t *glotv3::Event::getKeyPair(uint32_t *a1, int a2, char **a3);
// [0x133f720] (340 bytes) glotv3::Event::hasType(void)const
// int glotv3::Event::hasType(glotv3::Event *this);
// [0x133f880] (233 bytes) glotv3::Event::getEventType(void)const
// int glotv3::Event::getEventType(glotv3::Event *this);
// [0x133f970] (43 bytes) glotv3::Event::isLibspyEvent(void)const
// bool glotv3::Event::isLibspyEvent(glotv3::Event *this);
// [0x133f9a0] (475 bytes) glotv3::Event::getUUID(void)const
// glotv3::Event *glotv3::Event::getUUID(glotv3::Event *this, uint32_t *a2);
// [0x13400b0] (812 bytes) glotv3::Event::addKeyPairWithSerDesType(std::string const&,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&)
// char **glotv3::Event::addKeyPairWithSerDesType(int a1, uint8_t **a2, uint32_t *a3);
// [0x13403e0] (58 bytes) glotv3::Event::addKeyPair(std::string const&,glotv3::EventValue)
// char **glotv3::Event::addKeyPair(int a1, uint8_t **a2, `glotv3::EventValue::operator rapidjson` *a3);
// [0x1340420] (185 bytes) glotv3::Event::setSmartCount(unsigned int)
// void glotv3::Event::setSmartCount(glotv3::Event *this, void *a2);
// [0x13404e0] (185 bytes) glotv3::Event::setCount(unsigned int)
// void glotv3::Event::setCount(glotv3::Event *this, void *a2);
// [0x13405a0] (201 bytes) glotv3::Event::setSessionTime(double)
// void glotv3::Event::setSessionTime(glotv3::Event *this, double a2);
// [0x1340670] (185 bytes) glotv3::Event::setSessionId(unsigned int)
// void glotv3::Event::setSessionId(glotv3::Event *this, void *a2);
// [0x1340730] (201 bytes) glotv3::Event::setGameTime(double)
// void glotv3::Event::setGameTime(glotv3::Event *this, double a2);
// [0x1340800] (185 bytes) glotv3::Event::setConnectivity(glotv3::constants::odd::Connectivity)
// void glotv3::Event::setConnectivity(int a1, void *a2);
// [0x13408c0] (154 bytes) glotv3::Event::addKeyPair(std::string const&,std::string const&)
// char **glotv3::Event::addKeyPair(int a1, uint8_t **a2, uint8_t **a3);
// [0x1340960] (52 bytes) glotv3::Event::setGameVersion(std::string const&)
// char **glotv3::Event::setGameVersion(int a1, uint8_t **a2);
// [0x13409a0] (788 bytes) glotv3::Event::addRootPairWithSerDesType(std::string const&,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&)
// char **glotv3::Event::addRootPairWithSerDesType(int a1, uint8_t **a2, uint32_t *a3);
// [0x1340cc0] (58 bytes) glotv3::Event::addRootPair(std::string const&,glotv3::EventValue)
// char **glotv3::Event::addRootPair(int a1, uint8_t **a2, `glotv3::EventValue::operator rapidjson` *a3);
// [0x1340d00] (185 bytes) glotv3::Event::setEventType(unsigned int)
// void glotv3::Event::setEventType(glotv3::Event *this, void *a2);
// [0x1340dc0] (185 bytes) glotv3::Event::setToken(unsigned int)
// void glotv3::Event::setToken(glotv3::Event *this, void *a2);
// [0x1340e80] (154 bytes) glotv3::Event::addRootPair(std::string const&,std::string const&)
// char **glotv3::Event::addRootPair(int a1, uint8_t **a2, uint8_t **a3);
// [0x1340f20] (465 bytes) glotv3::Event::setRootKeysValues(void)
// volatile int32_t *glotv3::Event::setRootKeysValues(glotv3::Event *this);
// [0x1341100] (2439 bytes) glotv3::Event::Event(bool)
// glotv3::Event *glotv3::Event::Event(glotv3::Event *this, bool a2);
// [0x1341e00] (1079 bytes) glotv3::Event::serializeToImplementation(std::vector<char,std::allocator<char>> &)const
// void glotv3::Event::serializeToImplementation(glotv3::Event *a1, char **a2);
// [0x1342390] (997 bytes) glotv3::Event::deserializeToImplementation(std::vector<char,std::allocator<char>> &)
// const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *glotv3::Event::deserializeToImplementation( glotv3::Event *this, std::vector<char> *a2);
