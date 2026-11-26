#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpPhysics.h
// Library: havok | Module: havok_physics_hkpPhysics
// Binary Address Span: 0x1748930 .. 0x18468b0 (59 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1748930] (22 bytes) hkpPhysicsSystem::staticClass(void)
// void *hkpPhysicsSystem::staticClass();
// [0x1763b10] (10 bytes) hkpPhysicsSystem::hasContacts(void)
// hkpPhysicsSystem *hkpPhysicsSystem::hasContacts(hkpPhysicsSystem *this);
// [0x1763b20] (160 bytes) hkpPhysicsSystem::hkpPhysicsSystem(void)
// void hkpPhysicsSystem::hkpPhysicsSystem(hkpPhysicsSystem *this);
// [0x1763bc0] (1827 bytes) hkpPhysicsSystem::clone(hkpPhysicsSystem::CloneConstraintMode)const
// int hkpPhysicsSystem::clone(int a1, int a2);
// [0x17642f0] (472 bytes) hkpPhysicsSystem::removeAll(void)
// int hkpPhysicsSystem::removeAll(hkpPhysicsSystem *this);
// [0x17644d0] (293 bytes) hkpPhysicsSystem::~hkpPhysicsSystem()
// void hkpPhysicsSystem::~hkpPhysicsSystem(hkpPhysicsSystem *this);
// [0x1764600] (93 bytes) hkpPhysicsSystem::~hkpPhysicsSystem()
// void hkpPhysicsSystem::~hkpPhysicsSystem(hkpPhysicsSystem *this);
// [0x1764660] (1621 bytes) hkpPhysicsSystem::copy(hkpPhysicsSystem const&)
// int hkpPhysicsSystem::copy(hkpPhysicsSystem *this, const hkpPhysicsSystem *a2);
// [0x1764cc0] (148 bytes) hkpPhysicsSystem::addRigidBody(hkpRigidBody *)
// int hkpPhysicsSystem::addRigidBody(hkpPhysicsSystem *this, hkpRigidBody *a2);
// [0x1764d60] (148 bytes) hkpPhysicsSystem::addPhantom(hkpPhantom *)
// int hkpPhysicsSystem::addPhantom(hkpPhysicsSystem *this, hkpPhantom *a2);
// [0x1764e00] (148 bytes) hkpPhysicsSystem::addConstraint(hkpConstraintInstance *)
// int hkpPhysicsSystem::addConstraint(hkpPhysicsSystem *this, hkpConstraintInstance *a2);
// [0x1764ea0] (148 bytes) hkpPhysicsSystem::addAction(hkpAction *)
// int hkpPhysicsSystem::addAction(hkpPhysicsSystem *this, hkpAction *a2);
// [0x1764f40] (114 bytes) hkpPhysicsSystem::removeRigidBody(int)
// int hkpPhysicsSystem::removeRigidBody(hkpPhysicsSystem *this, int a2);
// [0x1764fc0] (114 bytes) hkpPhysicsSystem::removePhantom(int)
// int hkpPhysicsSystem::removePhantom(hkpPhysicsSystem *this, int a2);
// [0x1765040] (114 bytes) hkpPhysicsSystem::removeConstraint(int)
// int hkpPhysicsSystem::removeConstraint(hkpPhysicsSystem *this, int a2);
// [0x17650c0] (114 bytes) hkpPhysicsSystem::removeAction(int)
// int hkpPhysicsSystem::removeAction(hkpPhysicsSystem *this, int a2);
// [0x1765140] (155 bytes) hkpPhysicsSystem::removeNullPhantoms(void)
// int hkpPhysicsSystem::removeNullPhantoms(hkpPhysicsSystem *this);
// [0x17651e0] (880 bytes) hkpPhysicsSystem::transform(hkTransformf const&)
// float *hkpPhysicsSystem::transform(hkpPhysicsSystem *this, const hkTransformf *a2);
// [0x1828e50] (22 bytes) hkpPhysicsData::staticClass(void)
// void *hkpPhysicsData::staticClass();
// [0x1828fb0] (22 bytes) hkpPhysicsSystemWithContacts::staticClass(void)
// void *hkpPhysicsSystemWithContacts::staticClass();
// [0x182c320] (10 bytes) hkpPhysicsSystemWithContacts::hasContacts(void)
// hkpPhysicsSystemWithContacts *hkpPhysicsSystemWithContacts::hasContacts(hkpPhysicsSystemWithContacts *this);
// [0x182c330] (9 bytes) hkpPhysicsSystemWithContacts::clone(hkpPhysicsSystem::CloneConstraintMode)const
// int hkpPhysicsSystemWithContacts::clone();
// [0x182c340] (193 bytes) hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts()
// void hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts(hkpPhysicsSystemWithContacts *this);
// [0x182c410] (93 bytes) hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts()
// void hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts(hkpPhysicsSystemWithContacts *this);
// [0x182c470] (405 bytes) hkpPhysicsSystemWithContacts::copy(hkpPhysicsSystemWithContacts const&)
// unsigned int hkpPhysicsSystemWithContacts::copy( hkpPhysicsSystemWithContacts *this, const hkpPhysicsSystemWithContacts *a2);
// [0x182c610] (138 bytes) hkpPhysicsSystemWithContacts::addContact(hkpSerializedAgentNnEntry *)
// int hkpPhysicsSystemWithContacts::addContact(hkpPhysicsSystemWithContacts *this, hkpSerializedAgentNnEntry *a2);
// [0x182c6a0] (114 bytes) hkpPhysicsSystemWithContacts::removeContact(int)
// int hkpPhysicsSystemWithContacts::removeContact(hkpPhysicsSystemWithContacts *this, int a2);
// [0x182c920] (22 bytes) hkpPhysicsContext::getType(void)
// const char *hkpPhysicsContext::getType();
// [0x182c9b0] (77 bytes) hkpPhysicsContext::actionAddedCallback(hkpAction *)
// hkVisualDebugger *hkpPhysicsContext::actionAddedCallback(hkpPhysicsContext *this, hkpAction *a2);
// [0x182ca10] (76 bytes) hkpPhysicsContext::entityAddedCallback(hkpEntity *)
// hkVisualDebugger *hkpPhysicsContext::entityAddedCallback(hkpPhysicsContext *this, hkpEntity *a2);
// [0x182ca70] (76 bytes) hkpPhysicsContext::phantomAddedCallback(hkpPhantom *)
// hkVisualDebugger *hkpPhysicsContext::phantomAddedCallback(hkpPhysicsContext *this, hkpPhantom *a2);
// [0x182cad0] (49 bytes) hkpPhysicsContext::entityRemovedCallback(hkpEntity *)
// int hkpPhysicsContext::entityRemovedCallback(hkpPhysicsContext *this, hkpEntity *a2);
// [0x182cb20] (49 bytes) hkpPhysicsContext::phantomRemovedCallback(hkpPhantom *)
// int hkpPhysicsContext::phantomRemovedCallback(hkpPhysicsContext *this, hkpPhantom *a2);
// [0x182cb70] (49 bytes) hkpPhysicsContext::actionRemovedCallback(hkpAction *)
// int hkpPhysicsContext::actionRemovedCallback(hkpPhysicsContext *this, hkpAction *a2);
// [0x182cbc0] (76 bytes) hkpPhysicsContext::constraintRemovedCallback(hkpConstraintInstance *)
// void hkpPhysicsContext::constraintRemovedCallback(hkVisualDebugger **this, hkpConstraintInstance *a2);
// [0x182cc20] (104 bytes) hkpPhysicsContext::constraintAddedCallback(hkpConstraintInstance *)
// int hkpPhysicsContext::constraintAddedCallback(hkpPhysicsContext *this, hkpConstraintInstance *a2);
// [0x182cca0] (133 bytes) hkpPhysicsContext::registerAllPhysicsProcesses(void)
// int hkpPhysicsContext::registerAllPhysicsProcesses();
// [0x182cd30] (208 bytes) hkpPhysicsContext::hkpPhysicsContext(void)
// void hkpPhysicsContext::hkpPhysicsContext(hkpPhysicsContext *this);
// [0x182ce00] (573 bytes) hkpPhysicsContext::addForInspection(hkpWorld *)
// void hkpPhysicsContext::addForInspection(hkpPhysicsContext *this, hkpWorld *a2);
// [0x182d040] (215 bytes) hkpPhysicsContext::addWorld(hkpWorld *)
// void hkpPhysicsContext::addWorld(hkpPhysicsContext *this, hkpWorld *a2);
// [0x182d120] (587 bytes) hkpPhysicsContext::removeFromInspection(hkpWorld *)
// int hkpPhysicsContext::removeFromInspection(hkpPhysicsContext *this, hkpWorld *a2);
// [0x182d370] (222 bytes) hkpPhysicsContext::removeWorld(hkpWorld *)
// void hkpPhysicsContext::removeWorld(hkpPhysicsContext *this, hkpWorld *a2);
// [0x182d450] (42 bytes) hkpPhysicsContext::worldDeletedCallback(hkpWorld *)
// void hkpPhysicsContext::worldDeletedCallback(hkpPhysicsContext *this, hkpWorld *a2);
// [0x182d490] (478 bytes) hkpPhysicsContext::~hkpPhysicsContext()
// void hkpPhysicsContext::~hkpPhysicsContext(hkpPhysicsContext *this);
// [0x182d6d0] (93 bytes) hkpPhysicsContext::~hkpPhysicsContext()
// void hkpPhysicsContext::~hkpPhysicsContext(hkpPhysicsContext *this);
// [0x182d790] (147 bytes) hkpPhysicsContext::setOwner(hkVisualDebugger *)
// void hkpPhysicsContext::setOwner(hkpPhysicsContext *this, hkVisualDebugger *a2);
// [0x182d840] (51 bytes) hkpPhysicsContext::findWorld(hkpWorld *)
// int hkpPhysicsContext::findWorld(hkpPhysicsContext *this, hkpWorld *a2);
// [0x182d880] (147 bytes) hkpPhysicsContext::addWorldAddedListener(hkpPhysicsContextWorldListener *)
// void hkpPhysicsContext::addWorldAddedListener(hkpPhysicsContext *this, hkpPhysicsContextWorldListener *a2);
// [0x182d920] (103 bytes) hkpPhysicsContext::removeWorldAddedListener(hkpPhysicsContextWorldListener *)
// void hkpPhysicsContext::removeWorldAddedListener(hkpPhysicsContext *this, hkpPhysicsContextWorldListener *a2);
// [0x1845060] (261 bytes) hkpPhysicsData::~hkpPhysicsData()
// void hkpPhysicsData::~hkpPhysicsData(hkpPhysicsData *this);
// [0x1845170] (93 bytes) hkpPhysicsData::~hkpPhysicsData()
// void hkpPhysicsData::~hkpPhysicsData(hkpPhysicsData *this);
// [0x18451d0] (62 bytes) hkpPhysicsData::hkpPhysicsData(void)
// void hkpPhysicsData::hkpPhysicsData(hkpPhysicsData *this);
// [0x1845210] (335 bytes) hkpPhysicsData::populateFromWorld(hkpWorld const*,bool)
// int hkpPhysicsData::populateFromWorld(hkpPhysicsData *this, const hkpWorld *a2, int a3);
// [0x1845360] (737 bytes) hkpPhysicsData::createWorld(hkBool)
// hkpAgentRegisterUtil **hkpPhysicsData::createWorld(int a1, char a2);
// [0x1845650] (2166 bytes) hkpPhysicsData::splitPhysicsSystems(hkpPhysicsSystem const*,hkpPhysicsData::SplitPhysicsSystemsOutput &)
// int hkpPhysicsData::splitPhysicsSystems(uint32_t *a1, int a2);
// [0x1845ed0] (115 bytes) hkpPhysicsData::findPhysicsSystemByName(char const*)const
// int hkpPhysicsData::findPhysicsSystemByName(hkpPhysicsData *this, char *a2);
// [0x1845f50] (142 bytes) hkpPhysicsData::findRigidBodyByName(char const*)const
// int hkpPhysicsData::findRigidBodyByName(hkpPhysicsData *this, char *a2);
// [0x18467e0] (29 bytes) hkpPhysicsContextWorldListener::~hkpPhysicsContextWorldListener()
// void hkpPhysicsContextWorldListener::~hkpPhysicsContextWorldListener(hkpPhysicsContextWorldListener *this);
// [0x18468b0] (78 bytes) hkpPhysicsContextWorldListener::~hkpPhysicsContextWorldListener()
// void hkpPhysicsContextWorldListener::~hkpPhysicsContextWorldListener(hkpPhysicsContextWorldListener *this);
