#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_internal_6_part02.h
// Library: havok | Module: havok_internal_6_part02
// Binary Address Span: 0x18a6e20 .. 0x18bf760 (188 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x18a6e20] (9 bytes) VecArrayImplementation::getClass(void)const
// int VecArrayImplementation::getClass();
// [0x18a6e30] (16 bytes) VecArrayImplementation::clear(void)
// VecArrayImplementation *VecArrayImplementation::clear(VecArrayImplementation *this);
// [0x18a6e40] (9 bytes) VecArrayImplementation::setAll(hkBool const*,int)
// void VecArrayImplementation::setAll();
// [0x18a6e50] (9 bytes) VecArrayImplementation::setAll(char const*,int)
// void VecArrayImplementation::setAll();
// [0x18a6e60] (9 bytes) VecArrayImplementation::setAll(signed char const*,int)
// void VecArrayImplementation::setAll();
// [0x18a6e70] (9 bytes) VecArrayImplementation::setAll(unsigned char const*,int)
// void VecArrayImplementation::setAll();
// [0x18a6e80] (9 bytes) VecArrayImplementation::setAll(short const*,int)
// void VecArrayImplementation::setAll();
// [0x18a6e90] (9 bytes) VecArrayImplementation::setAll(unsigned short const*,int)
// void VecArrayImplementation::setAll();
// [0x18a6ea0] (9 bytes) VecArrayImplementation::setAll(int const*,int)
// void VecArrayImplementation::setAll();
// [0x18a6eb0] (9 bytes) VecArrayImplementation::setAll(unsigned int const*,int)
// void VecArrayImplementation::setAll();
// [0x18a6ec0] (9 bytes) VecArrayImplementation::setAll(long long const*,int)
// void VecArrayImplementation::setAll();
// [0x18a6ed0] (9 bytes) VecArrayImplementation::setAll(unsigned long long const*,int)
// void VecArrayImplementation::setAll();
// [0x18a6ee0] (9 bytes) VecArrayImplementation::setAll(hkHalf const*,int)
// void VecArrayImplementation::setAll();
// [0x18a6ef0] (15 bytes) PointerArrayImplementation::asObject(int)const
// int PointerArrayImplementation::asObject(PointerArrayImplementation *this, int a2);
// [0x18a6f00] (13 bytes) PointerArrayImplementation::asStridedBasicArray(hkStridedBasicArray &)
// uint32_t *PointerArrayImplementation::asStridedBasicArray(uint32_t *a1);
// [0x18a6f10] (15 bytes) CstringArrayImplementation::asString(int)const
// int CstringArrayImplementation::asString(CstringArrayImplementation *this, int a2);
// [0x18a6f20] (13 bytes) CstringArrayImplementation::asStridedBasicArray(hkStridedBasicArray &)
// uint32_t *CstringArrayImplementation::asStridedBasicArray(uint32_t *a1);
// [0x18a6f30] (13 bytes) ArrayArrayImplementation::asStridedBasicArray(hkStridedBasicArray &)
// uint32_t *ArrayArrayImplementation::asStridedBasicArray(uint32_t *a1);
// [0x18a6f40] (13 bytes) StructArrayImplementation::asStridedBasicArray(hkStridedBasicArray &)
// uint32_t *StructArrayImplementation::asStridedBasicArray(uint32_t *a1);
// [0x18a6f50] (24 bytes) StructArrayImplementation::Object::getClass(void)const
// int StructArrayImplementation::Object::getClass(StructArrayImplementation::Object *this);
// [0x18a6f70] (98 bytes) StructArrayImplementation::Object::hasMember(char const*)const
// int StructArrayImplementation::Object::hasMember(StructArrayImplementation::Object *this);
// [0x18a6fe0] (55 bytes) StructArrayImplementation::Object::isSet(_hkDataObject_MemberHandle const*)
// int StructArrayImplementation::Object::isSet(int a1, uint32_t *a2);
// [0x18a7020] (20 bytes) StructArrayImplementation::Object::getHandle(void)const
// StructArrayImplementation::Object *StructArrayImplementation::Object::getHandle( StructArrayImplementation::Object *this, int a2);
// [0x18a7040] (9 bytes) StructArrayImplementation::Object::getMemberIterator(void)const
// int StructArrayImplementation::Object::getMemberIterator();
// [0x18a7050] (21 bytes) StructArrayImplementation::Object::isValid(int)const
// bool StructArrayImplementation::Object::isValid(StructArrayImplementation::Object *this, int a2);
// [0x18a7070] (12 bytes) StructArrayImplementation::Object::getNextMember(int)const
// int StructArrayImplementation::Object::getNextMember(StructArrayImplementation::Object *this, int a2);
// [0x18a7080] (18 bytes) StructArrayImplementation::Object::getMemberName(int)const
// int StructArrayImplementation::Object::getMemberName(StructArrayImplementation::Object *this, int a2);
// [0x18a70a0] (31 bytes) StructArrayImplementation::Object::getMemberValue(int)const
// StructArrayImplementation::Object *StructArrayImplementation::Object::getMemberValue( StructArrayImplementation::Object *this, int a2, int a3);
// [0x18a70c0] (558 bytes) StructArrayImplementation::Object::getAllMemberHandles(hkArrayBase<_hkDataObject_MemberHandle const*> &)const
// int StructArrayImplementation::Object::getAllMemberHandles(int a1, int *a2);
// [0x18a72f0] (9 bytes) StructArrayImplementation::Object::selfDestruct(void)
// void StructArrayImplementation::Object::selfDestruct();
// [0x18a7300] (9 bytes) StructArrayImplementation::Object::destroy(void)
// void StructArrayImplementation::Object::destroy();
// [0x18a7310] (32 bytes) StructArrayImplementation::Object::getMemberInfo(_hkDataObject_MemberHandle const*,hkDataClass_MemberInfo &)
// uint32_t *StructArrayImplementation::Object::getMemberInfo(int a1, int *a2, uint32_t *a3);
// [0x18a7330] (9 bytes) StructArrayImplementation::Object::createdDuringPatching(void)const
// int StructArrayImplementation::Object::createdDuringPatching();
// [0x18a7340] (9 bytes) StructArrayImplementation::Object::destroyMember(char const*)
// void StructArrayImplementation::Object::destroyMember();
// [0x18a7350] (12 bytes) StructArrayImplementation::getClass(void)const
// int StructArrayImplementation::getClass(StructArrayImplementation *this);
// [0x18a7360] (12 bytes) StructArrayImplementation::getType(void)const
// int StructArrayImplementation::getType(StructArrayImplementation *this);
// [0x18a7370] (12 bytes) StructArrayImplementation::getWorld(void)const
// int StructArrayImplementation::getWorld(StructArrayImplementation *this);
// [0x18a7380] (69 bytes) StructArrayImplementation::clear(void)
// int StructArrayImplementation::clear(StructArrayImplementation *this);
// [0x18a73d0] (67 bytes) StructArrayImplementation::reserve(int)
// int StructArrayImplementation::reserve(StructArrayImplementation *this, int a2);
// [0x18a7420] (67 bytes) StructArrayImplementation::setSize(int)
// int StructArrayImplementation::setSize(StructArrayImplementation *this, int a2);
// [0x18a7470] (12 bytes) StructArrayImplementation::getSize(void)const
// int StructArrayImplementation::getSize(StructArrayImplementation *this);
// [0x18a7500] (108 bytes) BasicArrayImplementation<unsigned char>::~BasicArrayImplementation()
// void BasicArrayImplementation<unsigned char>::~BasicArrayImplementation( BasicArrayImplementation<unsigned char> *this);
// [0x18a7570] (106 bytes) BasicArrayImplementation<float>::~BasicArrayImplementation()
// void BasicArrayImplementation<float>::~BasicArrayImplementation(BasicArrayImplementation<float> *this);
// [0x18a75e0] (106 bytes) BasicArrayImplementation<hkDataObjectImpl *>::~BasicArrayImplementation()
// void BasicArrayImplementation<hkDataObjectImpl *>::~BasicArrayImplementation( BasicArrayImplementation<hkDataObjectImpl *> *this);
// [0x18a7650] (106 bytes) BasicArrayImplementation<char *>::~BasicArrayImplementation()
// void BasicArrayImplementation<char *>::~BasicArrayImplementation(BasicArrayImplementation<char *> *this);
// [0x18a76c0] (106 bytes) BasicArrayImplementation<hkDataArrayImpl *>::~BasicArrayImplementation()
// void BasicArrayImplementation<hkDataArrayImpl *>::~BasicArrayImplementation( BasicArrayImplementation<hkDataArrayImpl *> *this);
// [0x18a7730] (29 bytes) StructArrayImplementation::Object::~Object()
// void StructArrayImplementation::Object::~Object(StructArrayImplementation::Object *this);
// [0x18a7750] (29 bytes) RealArrayView::~RealArrayView()
// void RealArrayView::~RealArrayView(RealArrayView *this);
// [0x18a7770] (29 bytes) ArrayOfTuplesImplementation::View::~View()
// void ArrayOfTuplesImplementation::View::~View(ArrayOfTuplesImplementation::View *this);
// [0x18a7790] (29 bytes) sub_18A7790
// uint32_t *sub_18A7790(uint32_t *a1);
// [0x18a77b0] (12 bytes) BasicArrayImplementation<hkDataArrayImpl *>::getType(void)const
// int BasicArrayImplementation<hkDataArrayImpl *>::getType(BasicArrayImplementation<hkDataArrayImpl *> *this);
// [0x18a77c0] (12 bytes) BasicArrayImplementation<hkDataArrayImpl *>::getSize(void)const
// int BasicArrayImplementation<hkDataArrayImpl *>::getSize(BasicArrayImplementation<hkDataArrayImpl *> *this);
// [0x18a77d0] (9 bytes) BasicArrayImplementation<hkDataArrayImpl *>::getClass(void)const
// int BasicArrayImplementation<hkDataArrayImpl *>::getClass();
// [0x18a77e0] (12 bytes) BasicArrayImplementation<hkDataArrayImpl *>::getWorld(void)const
// int BasicArrayImplementation<hkDataArrayImpl *>::getWorld(BasicArrayImplementation<hkDataArrayImpl *> *this);
// [0x18a77f0] (16 bytes) BasicArrayImplementation<hkDataArrayImpl *>::clear(void)
// BasicArrayImplementation<hkDataArrayImpl *> *BasicArrayImplementation<hkDataArrayImpl *>::clear( BasicArrayImplementation<hkDataArrayImpl *> *this);
// [0x18a7800] (12 bytes) BasicArrayImplementation<char *>::getType(void)const
// int BasicArrayImplementation<char *>::getType(BasicArrayImplementation<char *> *this);
// [0x18a7810] (16 bytes) BasicArrayImplementation<char *>::clear(void)
// BasicArrayImplementation<char *> *BasicArrayImplementation<char *>::clear( BasicArrayImplementation<char *> *this);
// [0x18a7820] (12 bytes) BasicArrayImplementation<char *>::getSize(void)const
// int BasicArrayImplementation<char *>::getSize(BasicArrayImplementation<char *> *this);
// [0x18a7830] (9 bytes) BasicArrayImplementation<char *>::getClass(void)const
// int BasicArrayImplementation<char *>::getClass();
// [0x18a7840] (12 bytes) BasicArrayImplementation<char *>::getWorld(void)const
// int BasicArrayImplementation<char *>::getWorld(BasicArrayImplementation<char *> *this);
// [0x18a7850] (12 bytes) BasicArrayImplementation<hkDataObjectImpl *>::getType(void)const
// int BasicArrayImplementation<hkDataObjectImpl *>::getType(BasicArrayImplementation<hkDataObjectImpl *> *this);
// [0x18a7860] (16 bytes) BasicArrayImplementation<hkDataObjectImpl *>::clear(void)
// BasicArrayImplementation<hkDataObjectImpl *> *BasicArrayImplementation<hkDataObjectImpl *>::clear( BasicArrayImplementation<hkDataObjectImpl *> *this);
// [0x18a7870] (12 bytes) BasicArrayImplementation<hkDataObjectImpl *>::getSize(void)const
// int BasicArrayImplementation<hkDataObjectImpl *>::getSize(BasicArrayImplementation<hkDataObjectImpl *> *this);
// [0x18a7880] (9 bytes) BasicArrayImplementation<hkDataObjectImpl *>::getClass(void)const
// int BasicArrayImplementation<hkDataObjectImpl *>::getClass();
// [0x18a7890] (12 bytes) BasicArrayImplementation<hkDataObjectImpl *>::getWorld(void)const
// int BasicArrayImplementation<hkDataObjectImpl *>::getWorld(BasicArrayImplementation<hkDataObjectImpl *> *this);
// [0x18a78a0] (12 bytes) BasicArrayImplementation<float>::getType(void)const
// int BasicArrayImplementation<float>::getType(BasicArrayImplementation<float> *this);
// [0x18a78b0] (16 bytes) BasicArrayImplementation<float>::clear(void)
// BasicArrayImplementation<float> *BasicArrayImplementation<float>::clear(BasicArrayImplementation<float> *this);
// [0x18a78c0] (12 bytes) BasicArrayImplementation<float>::getSize(void)const
// int BasicArrayImplementation<float>::getSize(BasicArrayImplementation<float> *this);
// [0x18a78d0] (9 bytes) BasicArrayImplementation<float>::getClass(void)const
// int BasicArrayImplementation<float>::getClass();
// [0x18a78e0] (12 bytes) BasicArrayImplementation<float>::getWorld(void)const
// int BasicArrayImplementation<float>::getWorld(BasicArrayImplementation<float> *this);
// [0x18a78f0] (12 bytes) BasicArrayImplementation<unsigned char>::getType(void)const
// int BasicArrayImplementation<unsigned char>::getType(BasicArrayImplementation<unsigned char> *this);
// [0x18a7900] (16 bytes) BasicArrayImplementation<unsigned char>::clear(void)
// BasicArrayImplementation<unsigned char> *BasicArrayImplementation<unsigned char>::clear( BasicArrayImplementation<unsigned char> *this);
// [0x18a7910] (12 bytes) BasicArrayImplementation<unsigned char>::getSize(void)const
// int BasicArrayImplementation<unsigned char>::getSize(BasicArrayImplementation<unsigned char> *this);
// [0x18a7920] (9 bytes) BasicArrayImplementation<unsigned char>::getClass(void)const
// int BasicArrayImplementation<unsigned char>::getClass();
// [0x18a7930] (12 bytes) BasicArrayImplementation<unsigned char>::getWorld(void)const
// int BasicArrayImplementation<unsigned char>::getWorld(BasicArrayImplementation<unsigned char> *this);
// [0x18a7990] (78 bytes) CstringArrayImplementation::setString(int,char const*)
// hkString *CstringArrayImplementation::setString(CstringArrayImplementation *this, int a2, hkString *a3);
// [0x18a79e0] (45 bytes) ArrayOfTuplesImplementation::View::getSize(void)const
// int ArrayOfTuplesImplementation::View::getSize(ArrayOfTuplesImplementation::View *this);
// [0x18a7a10] (52 bytes) VecArrayImplementation::asVec(int)const
// int VecArrayImplementation::asVec(VecArrayImplementation *this, int a2);
// [0x18a7a50] (92 bytes) VecArrayImplementation::setVec(int,float const*)
// int VecArrayImplementation::setVec(hkTypeManager::Type **this, int a2, const float *a3);
// [0x18a7ab0] (53 bytes) VecArrayImplementation::getSize(void)const
// int VecArrayImplementation::getSize(VecArrayImplementation *this);
// [0x18a7af0] (119 bytes) VecArrayImplementation::asStridedBasicArray(hkStridedBasicArray &)
// uint32_t *VecArrayImplementation::asStridedBasicArray(uint32_t *a1, int a2, uint32_t *a3);
// [0x18a7b70] (81 bytes) ArrayOfTuplesImplementation::View::getClass(void)const
// int ArrayOfTuplesImplementation::View::getClass(ArrayOfTuplesImplementation::View *this);
// [0x18a7bd0] (75 bytes) ArrayOfTuplesImplementation::getClass(void)const
// int ArrayOfTuplesImplementation::getClass(ArrayOfTuplesImplementation *this);
// [0x18a7c20] (56 bytes) RealArrayView::setAll(float const*,int)
// void *RealArrayView::setAll(hkString **this, float *a2, int a3);
// [0x18a7c60] (311 bytes) VariableIntArrayImplementation::setAll(unsigned short const*,int)
// int VariableIntArrayImplementation::setAll( VariableIntArrayImplementation *this, const uint16_t *a2, int a3);
// [0x18a7da0] (150 bytes) BasicArrayImplementation<unsigned char>::setSize(int)
// void *BasicArrayImplementation<unsigned char>::setSize(BasicArrayImplementation<unsigned char> *this, int a2);
// [0x18a7e40] (156 bytes) BasicArrayImplementation<char *>::setSize(int)
// void *BasicArrayImplementation<char *>::setSize(BasicArrayImplementation<char *> *this, int a2);
// [0x18a7ee0] (156 bytes) BasicArrayImplementation<hkDataObjectImpl *>::setSize(int)
// void *BasicArrayImplementation<hkDataObjectImpl *>::setSize( BasicArrayImplementation<hkDataObjectImpl *> *this, int a2);
// [0x18a7f80] (75 bytes) ArrayOfTuplesImplementation::getType(void)const
// uint32_t *ArrayOfTuplesImplementation::getType(ArrayOfTuplesImplementation *this);
// [0x18a8350] (51 bytes) VariableIntArrayImplementation::asInt(int)const
// int VariableIntArrayImplementation::asInt(VariableIntArrayImplementation *this, int a2);
// [0x18a8390] (56 bytes) VariableIntArrayImplementation::asInt64(int)const
// int64_t VariableIntArrayImplementation::asInt64(VariableIntArrayImplementation *this, int a2);
// [0x18a83d0] (118 bytes) sub_18A83D0
// uint32_t *sub_18A83D0(uint32_t *a1, int a2, hkString *a3);
// [0x18a8450] (96 bytes) sub_18A8450
// int sub_18A8450(int a1);
// [0x18a84b0] (96 bytes) ArrayOfTuplesImplementation::View::~View()
// void ArrayOfTuplesImplementation::View::~View(ArrayOfTuplesImplementation::View *this);
// [0x18a8510] (96 bytes) RealArrayView::~RealArrayView()
// void RealArrayView::~RealArrayView(RealArrayView *this);
// [0x18a8570] (96 bytes) StructArrayImplementation::Object::~Object()
// void StructArrayImplementation::Object::~Object(StructArrayImplementation::Object *this);
// [0x18a85d0] (96 bytes) StructArrayImplementation::asObject(int)const
// uint32_t *StructArrayImplementation::asObject(StructArrayImplementation *this, int a2);
// [0x18a8630] (134 bytes) VecArrayImplementation::asArray(int)const
// uint32_t *VecArrayImplementation::asArray(hkTypeManager::Type **this, int a2);
// [0x18a86c0] (102 bytes) ArrayOfTuplesImplementation::asArray(int)const
// uint32_t *ArrayOfTuplesImplementation::asArray(ArrayOfTuplesImplementation *this, int a2);
// [0x18a8730] (120 bytes) ArrayOfTuplesImplementation::View::swizzleObjectMember(char const*)const
// uint32_t *ArrayOfTuplesImplementation::View::swizzleObjectMember( ArrayOfTuplesImplementation::View *this, const char *a2);
// [0x18a87b0] (111 bytes) BasicArrayImplementation<hkDataObjectImpl *>::reserve(int)
// int BasicArrayImplementation<hkDataObjectImpl *>::reserve( BasicArrayImplementation<hkDataObjectImpl *> *this, int a2);
// [0x18a8820] (111 bytes) BasicArrayImplementation<char *>::reserve(int)
// int BasicArrayImplementation<char *>::reserve(BasicArrayImplementation<char *> *this, int a2);
// [0x18a8890] (111 bytes) BasicArrayImplementation<unsigned char>::reserve(int)
// int BasicArrayImplementation<unsigned char>::reserve(BasicArrayImplementation<unsigned char> *this, int a2);
// [0x18a8900] (111 bytes) BasicArrayImplementation<hkDataArrayImpl *>::reserve(int)
// int BasicArrayImplementation<hkDataArrayImpl *>::reserve( BasicArrayImplementation<hkDataArrayImpl *> *this, int a2);
// [0x18a8970] (144 bytes) ByteArrayImplementation::setAll(unsigned char const*,int)
// void *ByteArrayImplementation::setAll(ByteArrayImplementation *this, uint8_t *a2, int a3);
// [0x18a8d50] (111 bytes) BasicArrayImplementation<float>::reserve(int)
// int BasicArrayImplementation<float>::reserve(BasicArrayImplementation<float> *this, int a2);
// [0x18a8dc0] (171 bytes) VariableIntArrayImplementation::reserve(int)
// VariableIntArrayImplementation *VariableIntArrayImplementation::reserve( VariableIntArrayImplementation *this, int a2);
// [0x18a8e70] (126 bytes) VecArrayImplementation::reserve(int)
// int VecArrayImplementation::reserve(hkTypeManager::Type **this, int a2);
// [0x18a8ef0] (147 bytes) RealArrayImplementation::setAll(float const*,int)
// void *RealArrayImplementation::setAll(RealArrayImplementation *this, float *a2, int a3);
// [0x18a8f90] (156 bytes) BasicArrayImplementation<hkDataArrayImpl *>::setSize(int)
// void *BasicArrayImplementation<hkDataArrayImpl *>::setSize( BasicArrayImplementation<hkDataArrayImpl *> *this, int a2);
// [0x18a9030] (156 bytes) BasicArrayImplementation<float>::setSize(int)
// void *BasicArrayImplementation<float>::setSize(BasicArrayImplementation<float> *this, int a2);
// [0x18a90d0] (170 bytes) VecArrayImplementation::setSize(int)
// int VecArrayImplementation::setSize(hkTypeManager::Type **this, int a2);
// [0x18a9180] (200 bytes) VecArrayImplementation::setAll(float const*,int)
// void *VecArrayImplementation::setAll(hkTypeManager::Type **this, float *a2, int a3);
// [0x18a9250] (163 bytes) VecArrayImplementation::~VecArrayImplementation()
// void VecArrayImplementation::~VecArrayImplementation(VecArrayImplementation *this);
// [0x18a9300] (108 bytes) ByteArrayImplementation::~ByteArrayImplementation()
// void ByteArrayImplementation::~ByteArrayImplementation(ByteArrayImplementation *this);
// [0x18a9370] (106 bytes) RealArrayImplementation::~RealArrayImplementation()
// void RealArrayImplementation::~RealArrayImplementation(RealArrayImplementation *this);
// [0x18a93e0] (163 bytes) BasicArrayImplementation<hkDataObjectImpl *>::~BasicArrayImplementation()
// void BasicArrayImplementation<hkDataObjectImpl *>::~BasicArrayImplementation( BasicArrayImplementation<hkDataObjectImpl *> *this);
// [0x18a9490] (163 bytes) BasicArrayImplementation<char *>::~BasicArrayImplementation()
// void BasicArrayImplementation<char *>::~BasicArrayImplementation(BasicArrayImplementation<char *> *this);
// [0x18a9540] (165 bytes) BasicArrayImplementation<unsigned char>::~BasicArrayImplementation()
// void BasicArrayImplementation<unsigned char>::~BasicArrayImplementation( BasicArrayImplementation<unsigned char> *this);
// [0x18a95f0] (165 bytes) ByteArrayImplementation::~ByteArrayImplementation()
// void ByteArrayImplementation::~ByteArrayImplementation(ByteArrayImplementation *this);
// [0x18a96a0] (272 bytes) VariableIntArrayImplementation::setAll(int const*,int)
// void *VariableIntArrayImplementation::setAll(VariableIntArrayImplementation *this, int *a2, int a3);
// [0x18a97b0] (163 bytes) BasicArrayImplementation<float>::~BasicArrayImplementation()
// void BasicArrayImplementation<float>::~BasicArrayImplementation(BasicArrayImplementation<float> *this);
// [0x18a9860] (163 bytes) BasicArrayImplementation<hkDataArrayImpl *>::~BasicArrayImplementation()
// void BasicArrayImplementation<hkDataArrayImpl *>::~BasicArrayImplementation( BasicArrayImplementation<hkDataArrayImpl *> *this);
// [0x18a9910] (163 bytes) RealArrayImplementation::~RealArrayImplementation()
// void RealArrayImplementation::~RealArrayImplementation(RealArrayImplementation *this);
// [0x18a99c0] (82 bytes) ArrayArrayImplementation::clear(void)
// void ArrayArrayImplementation::clear(ArrayArrayImplementation *this);
// [0x18a9a20] (83 bytes) PointerArrayImplementation::setObject(int,hkDataObjectImpl *)
// uint32_t *PointerArrayImplementation::setObject(PointerArrayImplementation *this, int a2, hkDataObjectImpl *a3);
// [0x18a9a80] (83 bytes) ArrayArrayImplementation::setArray(int,hkDataArrayImpl *)
// uint32_t *ArrayArrayImplementation::setArray(ArrayArrayImplementation *this, int a2, hkDataArrayImpl *a3);
// [0x18a9ae0] (219 bytes) VariableIntArrayImplementation::~VariableIntArrayImplementation()
// void VariableIntArrayImplementation::~VariableIntArrayImplementation(VariableIntArrayImplementation *this);
// [0x18a9bc0] (110 bytes) ArrayOfTuplesImplementation::~ArrayOfTuplesImplementation()
// void ArrayOfTuplesImplementation::~ArrayOfTuplesImplementation(ArrayOfTuplesImplementation *this);
// [0x18a9c30] (313 bytes) VariableIntArrayImplementation::setSize(int)
// void *VariableIntArrayImplementation::setSize(VariableIntArrayImplementation *this, int a2);
// [0x18a9d70] (177 bytes) PointerArrayImplementation::~PointerArrayImplementation()
// void PointerArrayImplementation::~PointerArrayImplementation(PointerArrayImplementation *this);
// [0x18a9e30] (244 bytes) ArrayArrayImplementation::setSize(int)
// int ArrayArrayImplementation::setSize(ArrayArrayImplementation *this, int a2);
// [0x18a9f30] (156 bytes) CstringArrayImplementation::~CstringArrayImplementation()
// void CstringArrayImplementation::~CstringArrayImplementation(CstringArrayImplementation *this);
// [0x18a9fd0] (154 bytes) sub_18A9FD0
// int *sub_18A9FD0(int *a1, int a2, hkString *a3);
// [0x18aa070] (232 bytes) PointerArrayImplementation::~PointerArrayImplementation()
// void PointerArrayImplementation::~PointerArrayImplementation(PointerArrayImplementation *this);
// [0x18aa160] (211 bytes) CstringArrayImplementation::~CstringArrayImplementation()
// void CstringArrayImplementation::~CstringArrayImplementation(CstringArrayImplementation *this);
// [0x18aa240] (202 bytes) ArrayOfTuplesImplementation::swizzleObjectMember(char const*)const
// int ArrayOfTuplesImplementation::swizzleObjectMember(ArrayOfTuplesImplementation *this, const char *a2);
// [0x18aa310] (177 bytes) ArrayArrayImplementation::~ArrayArrayImplementation()
// void ArrayArrayImplementation::~ArrayArrayImplementation(ArrayArrayImplementation *this);
// [0x18aa3d0] (311 bytes) VariableIntArrayImplementation::setAll(short const*,int)
// int VariableIntArrayImplementation::setAll(VariableIntArrayImplementation *this, const int16_t *a2, int a3);
// [0x18aa510] (463 bytes) sub_18AA510
// uint32_t *sub_18AA510(uint32_t *result, hkString *a2, hkMemoryAllocator *a3);
// [0x18aa930] (232 bytes) ArrayArrayImplementation::~ArrayArrayImplementation()
// void ArrayArrayImplementation::~ArrayArrayImplementation(ArrayArrayImplementation *this);
// [0x18aaa20] (167 bytes) ArrayOfTuplesImplementation::~ArrayOfTuplesImplementation()
// void ArrayOfTuplesImplementation::~ArrayOfTuplesImplementation(ArrayOfTuplesImplementation *this);
// [0x18aabb0] (307 bytes) StructArrayImplementation::~StructArrayImplementation()
// void StructArrayImplementation::~StructArrayImplementation(StructArrayImplementation *this);
// [0x18aacf0] (234 bytes) sub_18AACF0
// hkMemoryAllocator *sub_18AACF0( hkMemoryAllocator **a1, hkString **a2, hkMemoryAllocator *a3);
// [0x18aade0] (176 bytes) StructArrayImplementation::swizzleObjectMember(char const*)const
// int StructArrayImplementation::swizzleObjectMember(StructArrayImplementation *this, hkString *a2);
// [0x18ab210] (252 bytes) StructArrayImplementation::~StructArrayImplementation()
// void StructArrayImplementation::~StructArrayImplementation(StructArrayImplementation *this);
// [0x18ab400] (173 bytes) StructArrayImplementation::setObject(int,hkDataObjectImpl *)
// hkDataObjectImpl *StructArrayImplementation::setObject( StructArrayImplementation *this, int a2, hkDataObjectImpl *a3);
// [0x18ab4b0] (225 bytes) StructArrayImplementation::Object::accessByName(char const*)
// StructArrayImplementation::Object *StructArrayImplementation::Object::accessByName( StructArrayImplementation::Object *this, const char *a2, hkString *a3);
// [0x18ade40] (412 bytes) StructArrayImplementation::StructArrayImplementation(hkDataWorldDict *,hkTypeManager::Type *,hkDataClassDict const*,int)
// void StructArrayImplementation::StructArrayImplementation( StructArrayImplementation *this, hkDataWorldDict *a2, hkTypeManager::Type *a3, const hkDataClassDict *a4, int a5);
// [0x18adfe0] (1067 bytes) sub_18ADFE0
// int sub_18ADFE0(hkDataWorldDict *a1, hkTypeManager::Type *a2);
// [0x18ae410] (816 bytes) StructArrayImplementation::_addMember(hkDataClassDict::MemberInfo const&,int)
// int StructArrayImplementation::_addMember(int a1, int a2, int a3);
// [0x18ae740] (110 bytes) StructArrayImplementation::_findOrAdd(_hkDataObject_MemberHandle const*)
// int StructArrayImplementation::_findOrAdd(uint32_t *a1, uint32_t *a2);
// [0x18ae7b0] (72 bytes) StructArrayImplementation::Object::asVec(_hkDataObject_MemberHandle const*,int)
// int StructArrayImplementation::Object::asVec(int a1, uint32_t *a2);
// [0x18ae800] (72 bytes) StructArrayImplementation::Object::asString(_hkDataObject_MemberHandle const*)
// int StructArrayImplementation::Object::asString(int a1, uint32_t *a2);
// [0x18ae850] (72 bytes) StructArrayImplementation::Object::asArray(_hkDataObject_MemberHandle const*)
// int StructArrayImplementation::Object::asArray(int a1, uint32_t *a2);
// [0x18ae8a0] (72 bytes) StructArrayImplementation::Object::asInt(_hkDataObject_MemberHandle const*)
// int StructArrayImplementation::Object::asInt(int a1, uint32_t *a2);
// [0x18ae8f0] (72 bytes) StructArrayImplementation::Object::asReal(_hkDataObject_MemberHandle const*)
// int StructArrayImplementation::Object::asReal(int a1, uint32_t *a2);
// [0x18ae940] (89 bytes) StructArrayImplementation::Object::asHalf(_hkDataObject_MemberHandle const*)
// int StructArrayImplementation::Object::asHalf(int a1, int a2, uint32_t *a3);
// [0x18ae9a0] (72 bytes) StructArrayImplementation::Object::asObject(_hkDataObject_MemberHandle const*)
// int StructArrayImplementation::Object::asObject(int a1, uint32_t *a2);
// [0x18ae9f0] (80 bytes) StructArrayImplementation::Object::assign(_hkDataObject_MemberHandle const*,hkDataObject_Value const&)
// int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, hkDataObject_Value *a3);
// [0x18aea40] (80 bytes) StructArrayImplementation::Object::assign(_hkDataObject_MemberHandle const*,hkDataObjectImpl *)
// int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, int a3);
// [0x18aea90] (80 bytes) StructArrayImplementation::Object::assign(_hkDataObject_MemberHandle const*,hkDataArrayImpl *)
// int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, int a3);
// [0x18aeae0] (80 bytes) StructArrayImplementation::Object::assign(_hkDataObject_MemberHandle const*,char const*)
// int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, int a3);
// [0x18aeb30] (84 bytes) StructArrayImplementation::Object::assign(_hkDataObject_MemberHandle const*,float)
// int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, int a3);
// [0x18aeb90] (82 bytes) StructArrayImplementation::Object::assign(_hkDataObject_MemberHandle const*,hkHalf)
// int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, int16_t a3);
// [0x18aebf0] (80 bytes) StructArrayImplementation::Object::assign(_hkDataObject_MemberHandle const*,float const*,int)
// int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, int a3);
// [0x18aec40] (87 bytes) StructArrayImplementation::Object::assign(_hkDataObject_MemberHandle const*,signed char)
// int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, char a3);
// [0x18aeca0] (85 bytes) StructArrayImplementation::Object::assign(_hkDataObject_MemberHandle const*,short)
// int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, int16_t a3);
// [0x18aed00] (80 bytes) StructArrayImplementation::Object::assign(_hkDataObject_MemberHandle const*,int)
// int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, int a3);
// [0x18aed50] (92 bytes) StructArrayImplementation::Object::assign(_hkDataObject_MemberHandle const*,long long)
// int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, int a3, int a4);
// [0x18af800] (63 bytes) ArrayArrayImplementation::asArray(int)const
// int ArrayArrayImplementation::asArray(ArrayArrayImplementation *this, int a2);
// [0x18b0560] (610 bytes) sub_18B0560
// unsigned int sub_18B0560(unsigned int result, hkString *a2, hkMemoryAllocator *a3);
// [0x18b1680] (116 bytes) sub_18B1680
// int sub_18B1680();
// [0x18b1700] (357 bytes) VariableIntArrayImplementation::_reallocateArray(void)
// int VariableIntArrayImplementation::_reallocateArray(VariableIntArrayImplementation *this);
// [0x18b1870] (72 bytes) VariableIntArrayImplementation::setInt64(int,long long)
// int VariableIntArrayImplementation::setInt64(VariableIntArrayImplementation *this, int a2, int64_t a3);
// [0x18b4730] (4016 bytes) Copier::deepCopyToNative(hkDataObject const&)
// 0x18b4730 Copier::deepCopyToNative(hkDataObject const&)
// [0x18b6580] (437 bytes) sub_18B6580
// int sub_18B6580( unsigned int a1, uint32_t *a2, int *a3, int a4, hkMemoryAllocator *a5, int a6);
// [0x18b6880] (1971 bytes) sub_18B6880
// uint32_t *sub_18B6880(uint32_t *a1, int *a2, uint32_t *a3);
// [0x18b7040] (1496 bytes) sub_18B7040
// int sub_18B7040( int a1, unsigned int a2, int *a3, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a4);
// [0x18b7cc0] (71 bytes) sub_18B7CC0
// hkVersionPatchManager *sub_18B7CC0();
// [0x18b7f90] (915 bytes) sub_18B7F90
// 0x18b7f90 sub_18B7F90
// [0x18b83b0] (83 bytes) isValidPatch(hkVersionPatchManager::PatchInfo const*)
// bool isValidPatch(uint32_t *a1);
// [0x18b9b70] (70 bytes) sub_18B9B70
// uint32_t *sub_18B9B70();
// [0x18bacc0] (178 bytes) sub_18BACC0
// int *sub_18BACC0();
// [0x18bae80] (70 bytes) sub_18BAE80
// uint32_t *sub_18BAE80();
// [0x18bc720] (6244 bytes) sub_18BC720
// uint32_t *sub_18BC720(uint32_t *a1, int a2, int a3, hkIArchive *a4);
// [0x18bdf90] (6088 bytes) sub_18BDF90
// int sub_18BDF90(int a1, uint32_t *a2, int a3);
// [0x18bf760] (4956 bytes) sub_18BF760
// uint32_t *sub_18BF760(uint32_t *a1, int a2, int a3);
