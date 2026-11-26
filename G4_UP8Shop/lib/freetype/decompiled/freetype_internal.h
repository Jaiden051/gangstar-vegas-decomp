#pragma once
// ============================================================================
// G4_UP8Shop/lib/freetype/decompiled/freetype_internal.h
// Library: freetype | Module: freetype_internal
// Binary Address Span: 0x11950b0 .. 0x1205390 (517 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x11950b0] (33 bytes) sub_11950B0
// int sub_11950B0(int a1, int a2);
// [0x11950e0] (322 bytes) sub_11950E0
// int sub_11950E0(int a1, uint32_t *a2);
// [0x1195230] (386 bytes) sub_1195230
// int sub_1195230(int a1, uint32_t *a2);
// [0x11953c0] (2683 bytes) __gl_renderMesh(GLUtesselator *,GLUmesh *)
// int __gl_renderMesh(int a1, int a2);
// [0x1195e40] (269 bytes) __gl_renderBoundary(GLUtesselator *,GLUmesh *)
// int __gl_renderBoundary(int a1, int a2);
// [0x1195f50] (1386 bytes) __gl_renderCache(GLUtesselator *)
// int __gl_renderCache(GLUtesselator *a1);
// [0x11964c0] (306 bytes) sub_11964C0
// bool sub_11964C0(int a1, int *a2, int *a3);
// [0x1196600] (4284 bytes) sub_1196600
// int sub_1196600(int a1, gameswf **a2);
// [0x11976c0] (1746 bytes) sub_11976C0
// int sub_11976C0(int a1, int *a2);
// [0x1197da0] (1482 bytes) sub_1197DA0
// int sub_1197DA0(int a1, int a2, int a3, int a4, int a5, char a6);
// [0x1198370] (1384 bytes) sub_1198370
// int sub_1198370(int a1, int a2, gameswf *a3);
// [0x11988e0] (2594 bytes) sub_11988E0
// int sub_11988E0(int a1, int a2);
// [0x1199310] (2334 bytes) __gl_computeInterior(GLUtesselator *)
// int __gl_computeInterior(GLUtesselator *a1);
// [0x1199c30] (72 bytes) __gl_dictListNewDict(void *,int (*)(void *,void *,void *))
// uint32_t *__gl_dictListNewDict(void *a1, int (*a2)(void *, void *, void *));
// [0x1199c80] (79 bytes) __gl_dictListDeleteDict(DictList *)
// int __gl_dictListDeleteDict(gameswf *a1);
// [0x1199cd0] (114 bytes) __gl_dictListInsertBefore(DictList *,DictListNode *,void *)
// uint32_t *__gl_dictListInsertBefore(int a1, uint32_t *a2, int a3);
// [0x1199d50] (60 bytes) __gl_dictListDelete(DictList *,DictListNode *)
// int __gl_dictListDelete(int a1, gameswf *a2);
// [0x1199d90] (57 bytes) __gl_dictListSearch(DictList *,void *)
// uint32_t *__gl_dictListSearch(int a1, int a2);
// [0x1199dd0] (197 bytes) __gl_pqHeapNewPriorityQ(int (*)(void *,void *))
// int __gl_pqHeapNewPriorityQ(int (*a1)(void *, void *));
// [0x1199ea0] (93 bytes) __gl_pqHeapDeletePriorityQ(PriorityQHeap *)
// int __gl_pqHeapDeletePriorityQ(gameswf **a1);
// [0x1199f00] (365 bytes) __gl_pqHeapInit(PriorityQHeap *)
// int *__gl_pqHeapInit(int *a1);
// [0x119a070] (605 bytes) __gl_pqHeapInsert(PriorityQHeap *,void *)
// int __gl_pqHeapInsert(int a1, int a2);
// [0x119a2d0] (350 bytes) __gl_pqHeapExtractMin(PriorityQHeap *)
// int __gl_pqHeapExtractMin(uint32_t *a1);
// [0x119a430] (737 bytes) __gl_pqHeapDelete(PriorityQHeap *,long)
// int __gl_pqHeapDelete(int *a1, int a2);
// [0x119a720] (171 bytes) __gl_pqSortNewPriorityQ(int (*)(void *,void *))
// int __gl_pqSortNewPriorityQ(int (*a1)(void *, void *));
// [0x119a7d0] (116 bytes) __gl_pqSortDeletePriorityQ(PriorityQSort *)
// int __gl_pqSortDeletePriorityQ(gameswf ***a1);
// [0x119a850] (965 bytes) __gl_pqSortInit(PriorityQSort *)
// int __gl_pqSortInit(int a1);
// [0x119ac20] (184 bytes) __gl_pqSortInsert(PriorityQSort *,void *)
// int __gl_pqSortInsert(int *a1, int a2);
// [0x119ace0] (212 bytes) __gl_pqSortExtractMin(PriorityQSort *)
// int __gl_pqSortExtractMin(uint32_t *a1);
// [0x119adc0] (108 bytes) __gl_pqSortMinimum(PriorityQSort *)
// int __gl_pqSortMinimum(uint32_t *a1);
// [0x119ae30] (27 bytes) __gl_pqSortIsEmpty(PriorityQSort *)
// bool __gl_pqSortIsEmpty(uint32_t *a1);
// [0x119ae50] (120 bytes) __gl_pqSortDelete(PriorityQSort *,long)
// int __gl_pqSortDelete(int a1, int a2);
// [0x119f570] (243 bytes) sub_119F570
// uint32_t *sub_119F570(uint32_t *a1, uint8_t *src, uint8_t *a3);
// [0x119f670] (561 bytes) std::deque<Json::Value *,std::allocator<Json::Value *>>::push_back(Json::Value * const&)
// Json::Value **std::deque<Json::Value *>::push_back(std::deque<Json::Value *> *this, Json::Value **a2);
// [0x119f8b0] (176 bytes) std::_Deque_base<Json::Value *,std::allocator<Json::Value *>>::_M_initialize_map(unsigned int)
// int std::_Deque_base<Json::Value *>::_M_initialize_map(std::_Deque_base<Json::Value *> *this, unsigned int a2);
// [0x119f960] (421 bytes) std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_reallocate_map(unsigned int,bool)
// int std::deque<Json::Reader::ErrorInfo>::_M_reallocate_map( std::deque<Json::Reader::ErrorInfo> *this, unsigned int a2, bool a3);
// [0x119fb10] (401 bytes) void std::fill<Json::Reader::ErrorInfo>(std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*> const&,std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*> const&,Json::Reader::ErrorInfo const&)
// unsigned int std::fill<Json::Reader::ErrorInfo>(int a1, uint32_t *a2, uint32_t *a3);
// [0x119fcb0] (722 bytes) std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*> std::copy_backward<Json::Reader::ErrorInfo>(std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>,std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>,std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>)
// int *std::copy_backward<Json::Reader::ErrorInfo>(int *a1, uint32_t *a2, int *a3, int *a4);
// [0x119ff90] (5282 bytes) std::deque<Json::Reader::ErrorInfo,std::allocator<Json::Reader::ErrorInfo>>::_M_insert_aux(std::_Deque_iterator<Json::Reader::ErrorInfo,Json::Reader::ErrorInfo&,Json::Reader::ErrorInfo*>,unsigned int,Json::Reader::ErrorInfo const&)
// int std::deque<Json::Reader::ErrorInfo>::_M_insert_aux( std::deque<Json::Reader::ErrorInfo> *a1, int *a2, int a3, uint32_t *a4);
// [0x11a1440] (66 bytes) sub_11A1440
// int sub_11A1440();
// [0x11a14f0] (133 bytes) sub_11A14F0
// int **sub_11A14F0();
// [0x11a4c40] (99 bytes) std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_erase(std::_Rb_tree_node<std::pair<Json::Value::CZString const,Json::Value>> *)
// void std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_erase( int a1, void **a2);
// [0x11a4cb0] (436 bytes) std::vector<Json::PathArgument const*,std::allocator<Json::PathArgument const*>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Json::PathArgument const**,std::vector<Json::PathArgument const*,std::allocator<Json::PathArgument const*>>>,Json::PathArgument const* const&)
// void std::vector<Json::PathArgument const*>::_M_insert_aux(int a1, char *src, int *a3);
// [0x11a4e70] (784 bytes) std::vector<Json::PathArgument,std::allocator<Json::PathArgument>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Json::PathArgument*,std::vector<Json::PathArgument,std::allocator<Json::PathArgument>>>,Json::PathArgument const&)
// int std::vector<Json::PathArgument>::_M_insert_aux(int *a1, uint32_t *a2, int a3);
// [0x11a5180] (288 bytes) std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_copy(std::_Rb_tree_node<std::pair<Json::Value::CZString const,Json::Value>> const*,std::_Rb_tree_node<std::pair<Json::Value::CZString const,Json::Value>>*)
// uint32_t *std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_copy( int a1, uint32_t *a2, int a3);
// [0x11a52a0] (249 bytes) std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<Json::Value::CZString const,Json::Value> const&)
// int *std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_insert_( int *a1, int a2, int a3, int a4, const char **a5);
// [0x11a53a0] (263 bytes) std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_insert_unique(std::pair<Json::Value::CZString const,Json::Value> const&)
// int std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_insert_unique( int a1, int a2, const char **a3);
// [0x11a54b0] (544 bytes) std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<Json::Value::CZString const,Json::Value>>,std::pair<Json::Value::CZString const,Json::Value> const&)
// int *std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_insert_unique_( int *a1, int *a2, int a3, const char **a4);
// [0x11a56d0] (111 bytes) std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<Json::Value::CZString const,Json::Value>>)
// void std::_Rb_tree<Json::Value::CZString,std::pair<Json::Value::CZString const,Json::Value>,std::_Select1st<std::pair<Json::Value::CZString const,Json::Value>>,std::less<Json::Value::CZString>,std::allocator<std::pair<Json::Value::CZString const,Json::Value>>>::_M_erase_aux( int a1, int a2);
// [0x11a5740] (116 bytes) sub_11A5740
// int **sub_11A5740();
// [0x11a9820] (294 bytes) std::vector<std::string,std::allocator<std::string>>::reserve(unsigned int)
// unsigned int std::vector<std::string>::reserve(std::vector<std::string> *this, unsigned int a2);
// [0x11a9950] (243 bytes) sub_11A9950
// uint32_t *sub_11A9950(uint32_t *a1, uint8_t *src, uint8_t *a3);
// [0x11aa780] (66 bytes) sub_11AA780
// int sub_11AA780();
// [0x11aa7d0] (53 bytes) sub_11AA7D0
// int sub_11AA7D0(uint16_t *a1, uint16_t *a2);
// [0x11aec70] (362 bytes) sub_11AEC70
// int sub_11AEC70(int a1, uint32_t *a2, int a3, uint32_t *a4, unsigned int *a5);
// [0x11aede0] (362 bytes) sub_11AEDE0
// int sub_11AEDE0(int a1, uint32_t *a2, int a3, uint32_t *a4, unsigned int *a5);
// [0x11b0130] (176 bytes) sub_11B0130
// int sub_11B0130(int *a1, int a2, char *s, char **a4, uint32_t *a5);
// [0x11b01e0] (200 bytes) sub_11B01E0
// int sub_11B01E0(int *a1, int a2, char *s, char **a4, uint32_t *a5);
// [0x11b0310] (269 bytes) sub_11B0310
// int sub_11B0310(int *a1, int a2, char *src, char **a4, uint32_t *a5);
// [0x11b0420] (269 bytes) sub_11B0420
// int sub_11B0420(int *a1, int a2, char *src, char **a4, uint32_t *a5);
// [0x11b1640] (117 bytes) sub_11B1640
// int sub_11B1640(int a1, int a2, int a3);
// [0x11b16c0] (77 bytes) sub_11B16C0
// int sub_11B16C0(int *a1);
// [0x11b1b30] (757 bytes) sub_11B1B30
// int sub_11B1B30(int *a1, int a2, char *s, char **a4, unsigned int *a5);
// [0x11b1e30] (733 bytes) sub_11B1E30
// int sub_11B1E30(int *a1, int a2, char *s, char **a4, unsigned int *a5);
// [0x11b2110] (741 bytes) sub_11B2110
// int sub_11B2110(int *a1, int a2, char *s, char **a4, unsigned int *a5);
// [0x11b47c0] (357 bytes) sub_11B47C0
// int sub_11B47C0(int a1, int a2, int a3);
// [0x11b5950] (1204 bytes) sub_11B5950
// int sub_11B5950(int *a1, uint32_t *a2, int a3, int *a4);
// [0x11b5e10] (2311 bytes) sub_11B5E10
// int sub_11B5E10(int *a1, uint32_t *a2, unsigned int a3, int a4, int *a5);
// [0x11b6720] (2223 bytes) sub_11B6720
// char sub_11B6720(int *a1, uint32_t *a2, int a3, int *a4, int a5);
// [0x11b9090] (72 bytes) sub_11B9090
// int sub_11B9090(int a1);
// [0x11b90e0] (128 bytes) sub_11B90E0
// size_t sub_11B90E0(uint32_t *a1, unsigned int off, void *ptr, size_t n);
// [0x11b9160] (34 bytes) sub_11B9160
// void sub_11B9160(int a1, void *ptr);
// [0x11b9190] (34 bytes) sub_11B9190
// void *sub_11B9190(int a1, size_t size);
// [0x11b91c0] (42 bytes) sub_11B91C0
// void *sub_11B91C0(int a1, int a2, size_t size, void *ptr);
// [0x11b93a0] (55 bytes) sub_11B93A0
// int sub_11B93A0(uint32_t *a1);
// [0x11b93e0] (44 bytes) sub_11B93E0
// int sub_11B93E0(int a1, int a2, int a3);
// [0x11b9410] (41 bytes) sub_11B9410
// int sub_11B9410(int a1);
// [0x11b9440] (97 bytes) sub_11B9440
// int sub_11B9440(int a1, uint32_t *a2);
// [0x11b94b0] (1286 bytes) sub_11B94B0
// int sub_11B94B0(int a1, int a2, int a3, int *a4, int a5);
// [0x11b99c0] (57 bytes) sub_11B99C0
// int sub_11B99C0(int a1, int a2, int a3, int *a4);
// [0x11b9a00] (57 bytes) sub_11B9A00
// int sub_11B9A00(int a1, int a2, int a3, int *a4);
// [0x11b9a40] (50 bytes) sub_11B9A40
// int sub_11B9A40(int a1, int a2, int a3, int *a4);
// [0x11b9a80] (116 bytes) sub_11B9A80
// _OWORD *sub_11B9A80(int a1, int a2, int a3);
// [0x11b9b00] (217 bytes) sub_11B9B00
// int sub_11B9B00(int a1, int a2, int16_t *a3, uint32_t *a4);
// [0x11b9be0] (81 bytes) sub_11B9BE0
// int sub_11B9BE0(int64_t a1, int a2);
// [0x11b9c40] (147 bytes) sub_11B9C40
// int sub_11B9C40(int a1, int a2, int *a3, int *a4);
// [0x11b9ce0] (355 bytes) sub_11B9CE0
// int sub_11B9CE0(uint32_t *a1, int *a2);
// [0x11b9e50] (1448 bytes) sub_11B9E50
// int sub_11B9E50(int *a1, int a2, int a3, int a4, int a5, int a6);
// [0x11ba400] (294 bytes) sub_11BA400
// int sub_11BA400(int a1);
// [0x11ba530] (2764 bytes) sub_11BA530
// int sub_11BA530(int a1);
// [0x11bb000] (710 bytes) sub_11BB000
// int sub_11BB000(int *a1, int a2);
// [0x11bb2d0] (2183 bytes) sub_11BB2D0
// int sub_11BB2D0(int a1, int a2, int a3);
// [0x11bbb60] (933 bytes) sub_11BBB60
// int sub_11BBB60(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x11bbf10] (582 bytes) sub_11BBF10
// int sub_11BBF10(int *a1, uint32_t *a2, uint32_t *a3);
// [0x11bc160] (38 bytes) sub_11BC160
// int sub_11BC160(uint32_t *a1, int a2);
// [0x11bc190] (27 bytes) sub_11BC190
// int sub_11BC190(uint32_t *a1);
// [0x11bc1b0] (21 bytes) sub_11BC1B0
// int sub_11BC1B0(int a1);
// [0x11bc1d0] (119 bytes) sub_11BC1D0
// int sub_11BC1D0(int a1, unsigned int a2);
// [0x11bc250] (157 bytes) sub_11BC250
// int sub_11BC250(int a1, unsigned int *a2);
// [0x11bc2f0] (31 bytes) sub_11BC2F0
// int sub_11BC2F0(int a1, uint32_t *a2, uint32_t *a3);
// [0x11bc310] (107 bytes) sub_11BC310
// int sub_11BC310(int *a1, int a2);
// [0x11bc380] (2423 bytes) sub_11BC380
// int sub_11BC380(int a1, uint32_t *a2, unsigned int a3);
// [0x11bcd00] (44 bytes) sub_11BCD00
// const char *sub_11BCD00(int a1, char *a2);
// [0x11bcd30] (489 bytes) sub_11BCD30
// void sub_11BCD30(uint32_t *a1);
// [0x11bcf20] (106 bytes) sub_11BCF20
// const char **sub_11BCF20(int a1, const char **a2, char *s2);
// [0x11bcf90] (248 bytes) sub_11BCF90
// int sub_11BCF90(int *a1, int *a2);
// [0x11bd090] (198 bytes) sub_11BD090
// int sub_11BD090(int a1, char *s2, uint32_t *a3);
// [0x11bd160] (661 bytes) sub_11BD160
// int sub_11BD160(int *a1, uint32_t *a2, int a3);
// [0x11bd400] (6349 bytes) sub_11BD400
// int sub_11BD400(int *a1, int a2);
// [0x11becd0] (1919 bytes) sub_11BECD0
// int sub_11BECD0(int *a1, int a2, int a3);
// [0x11bf450] (87 bytes) sub_11BF450
// char sub_11BF450(uint32_t *a1);
// [0x11bf4b0] (21 bytes) sub_11BF4B0
// int sub_11BF4B0(int a1);
// [0x11bf4d0] (111 bytes) sub_11BF4D0
// unsigned int sub_11BF4D0(int a1, unsigned int a2);
// [0x11bf540] (160 bytes) sub_11BF540
// unsigned int sub_11BF540(int a1, unsigned int *a2);
// [0x11bf5e0] (636 bytes) sub_11BF5E0
// char sub_11BF5E0(uint8_t *a1, unsigned int a2, int *a3);
// [0x11bf860] (657 bytes) sub_11BF860
// int sub_11BF860(int a1, unsigned int a2, int *a3);
// [0x11bfb00] (169 bytes) sub_11BFB00
// int sub_11BFB00(int a1);
// [0x11bfbb0] (437 bytes) sub_11BFBB0
// void sub_11BFBB0(uint32_t *a1);
// [0x11bfd70] (197 bytes) sub_11BFD70
// int sub_11BFD70(int a1);
// [0x11bfe40] (517 bytes) sub_11BFE40
// int sub_11BFE40(char *a1, unsigned int a2, int a3);
// [0x11c0050] (158 bytes) sub_11C0050
// int sub_11C0050(void *src, int a2, int *a3);
// [0x11c00f0] (44 bytes) sub_11C00F0
// const char *sub_11C00F0(int a1, char *a2);
// [0x11c0120] (798 bytes) sub_11C0120
// int sub_11C0120(uint32_t *a1, int a2, int a3, uint32_t *a4);
// [0x11c0440] (200 bytes) sub_11C0440
// int sub_11C0440(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4, int *a5);
// [0x11c0510] (65 bytes) sub_11C0510
// int sub_11C0510(int a1, int a2, uint32_t *a3);
// [0x11c0560] (188 bytes) sub_11C0560
// int sub_11C0560(uint32_t *a1, int a2, int a3, int *a4);
// [0x11c0620] (952 bytes) sub_11C0620
// int sub_11C0620(uint32_t *a1, char *a2, unsigned int a3);
// [0x11c09e0] (4288 bytes) sub_11C09E0
// int sub_11C09E0(int *a1, uint32_t *a2, int a3);
// [0x11c1aa0] (2140 bytes) sub_11C1AA0
// int sub_11C1AA0(int a1, char *a2, unsigned int a3);
// [0x11c2300] (1570 bytes) sub_11C2300
// int sub_11C2300(uint32_t *a1, int *a2, int a3, int a4, unsigned int a5);
// [0x11c2930] (3428 bytes) sub_11C2930
// int sub_11C2930(int a1, int a2, int a3, int16_t a4);
// [0x11c36a0] (165 bytes) sub_11C36A0
// uint32_t *sub_11C36A0(uint32_t *a1, int a2, int a3, int a4);
// [0x11c3758] (1 bytes) nullsub_544
// void nullsub_544();
// [0x11c3760] (44 bytes) sub_11C3760
// uint32_t *sub_11C3760(int a1);
// [0x11c3790] (215 bytes) sub_11C3790
// int sub_11C3790(int a1);
// [0x11c3870] (85 bytes) sub_11C3870
// int sub_11C3870(unsigned int a1, int a2, uint16_t a3);
// [0x11c38d0] (33 bytes) sub_11C38D0
// uint32_t *sub_11C38D0(uint32_t *a1);
// [0x11c3900] (47 bytes) sub_11C3900
// int sub_11C3900(uint32_t *a1);
// [0x11c3930] (47 bytes) sub_11C3930
// int sub_11C3930(uint32_t *a1);
// [0x11c3960] (40 bytes) sub_11C3960
// int sub_11C3960(uint32_t *a1);
// [0x11c3990] (26 bytes) sub_11C3990
// uint32_t *sub_11C3990(uint32_t *a1);
// [0x11c39b0] (87 bytes) sub_11C39B0
// int sub_11C39B0(uint32_t *a1, unsigned int *a2);
// [0x11c3a10] (18 bytes) sub_11C3A10
// int sub_11C3A10(int a1, int a2);
// [0x11c3a30] (93 bytes) sub_11C3A30
// int sub_11C3A30(uint32_t *a1);
// [0x11c3a90] (35 bytes) sub_11C3A90
// int sub_11C3A90(int a1, int a2);
// [0x11c3ac0] (35 bytes) sub_11C3AC0
// int sub_11C3AC0(int a1, int a2);
// [0x11c3af0] (41 bytes) sub_11C3AF0
// int sub_11C3AF0(uint32_t *a1, uint32_t *a2);
// [0x11c3b20] (74 bytes) sub_11C3B20
// int sub_11C3B20(uint32_t *a1);
// [0x11c3b70] (64 bytes) sub_11C3B70
// int sub_11C3B70(int *a1);
// [0x11c3bb0] (137 bytes) sub_11C3BB0
// int sub_11C3BB0(int *a1);
// [0x11c3c40] (136 bytes) sub_11C3C40
// int sub_11C3C40(int *a1, int a2, int a3, int a4);
// [0x11c3cd0] (193 bytes) sub_11C3CD0
// void *sub_11C3CD0(int a1);
// [0x11c3da0] (149 bytes) sub_11C3DA0
// int sub_11C3DA0(int a1, int a2, int a3, char a4);
// [0x11c3e40] (185 bytes) sub_11C3E40
// char sub_11C3E40(int a1);
// [0x11c3f00] (275 bytes) sub_11C3F00
// int (*sub_11C3F00(int a1, int a2, int a3, int a4, char a5))(int a1);
// [0x11c4020] (34 bytes) sub_11C4020
// int sub_11C4020(uint32_t *a1, unsigned int a2);
// [0x11c4050] (153 bytes) sub_11C4050
// int sub_11C4050(int a1, unsigned int a2);
// [0x11c40f0] (296 bytes) sub_11C40F0
// int sub_11C40F0(uint32_t *a1, int a2, int a3);
// [0x11c4220] (460 bytes) sub_11C4220
// int sub_11C4220(uint32_t *a1, int a2, char *a3, int a4);
// [0x11c43f0] (102 bytes) sub_11C43F0
// int sub_11C43F0(int a1, int a2);
// [0x11c4460] (44 bytes) sub_11C4460
// uint32_t *sub_11C4460(int a1);
// [0x11c4490] (212 bytes) sub_11C4490
// int sub_11C4490(int a1, unsigned int *a2);
// [0x11c4570] (485 bytes) sub_11C4570
// int sub_11C4570(int a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8, int a9);
// [0x11c4760] (374 bytes) sub_11C4760
// uint8_t *sub_11C4760(uint8_t **a1, int *a2);
// [0x11c48e0] (186 bytes) sub_11C48E0
// int sub_11C48E0(int a1, int a2, int a3);
// [0x11c49a0] (345 bytes) sub_11C49A0
// char sub_11C49A0(int a1, int a2, int a3);
// [0x11c4b00] (107 bytes) sub_11C4B00
// char *sub_11C4B00(char **a1);
// [0x11c4b70] (452 bytes) sub_11C4B70
// int sub_11C4B70(int a1, int a2, int a3, uint32_t *a4, char a5);
// [0x11c4d40] (678 bytes) sub_11C4D40
// int sub_11C4D40(uint8_t **a1, unsigned int a2);
// [0x11c4ff0] (914 bytes) sub_11C4FF0
// void sub_11C4FF0(int a1);
// [0x11c5390] (843 bytes) sub_11C5390
// int sub_11C5390(unsigned int *a1);
// [0x11c56e0] (952 bytes) sub_11C56E0
// uint8_t *sub_11C56E0(unsigned int *a1, uint8_t **a2);
// [0x11c5aa0] (1075 bytes) sub_11C5AA0
// uint8_t *sub_11C5AA0(unsigned int *a1, uint8_t **a2, int a3, uint32_t *a4);
// [0x11c5ee0] (2521 bytes) sub_11C5EE0
// int sub_11C5EE0(char **a1, unsigned int a2, int a3);
// [0x11c68c0] (1678 bytes) sub_11C68C0
// int sub_11C68C0(int *a1, uint32_t *a2, unsigned int a3);
// [0x11c6f50] (2256 bytes) sub_11C6F50
// int sub_11C6F50(int a1);
// [0x11c7820] (460 bytes) sub_11C7820
// int sub_11C7820(int a1, int a2, int16_t *a3);
// [0x11c79f0] (118 bytes) sub_11C79F0
// int sub_11C79F0(int a1, int a2);
// [0x11c7a70] (2867 bytes) sub_11C7A70
// int sub_11C7A70(unsigned int *a1, int a2, int a3, int a4);
// [0x11c85b0] (1374 bytes) sub_11C85B0
// int sub_11C85B0(unsigned int *a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x11c8b10] (454 bytes) sub_11C8B10
// int sub_11C8B10(int a1, int a2, int *a3, int a4);
// [0x11c8ce0] (8972 bytes) sub_11C8CE0
// int sub_11C8CE0(uint32_t *a1, unsigned int a2, int a3);
// [0x11caff0] (61 bytes) sub_11CAFF0
// uint32_t *sub_11CAFF0(uint32_t *a1);
// [0x11cb030] (61 bytes) sub_11CB030
// uint32_t *sub_11CB030(uint32_t *a1);
// [0x11cb070] (782 bytes) sub_11CB070
// int *sub_11CB070(int a1, int a2, int a3);
// [0x11cb380] (1601 bytes) sub_11CB380
// int sub_11CB380(uint32_t *a1, int a2, int a3, uint8_t *a4);
// [0x11cb9d0] (12 bytes) sub_11CB9D0
// int sub_11CB9D0(int a1);
// [0x11cb9e0] (12 bytes) sub_11CB9E0
// int sub_11CB9E0(int a1);
// [0x11cb9f0] (14 bytes) sub_11CB9F0
// int sub_11CB9F0(int a1);
// [0x11cba00] (101 bytes) sub_11CBA00
// int sub_11CBA00(int *a1);
// [0x11cba70] (544 bytes) sub_11CBA70
// int sub_11CBA70(int a1);
// [0x11cbc90] (701 bytes) sub_11CBC90
// int sub_11CBC90(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x11cbf50] (997 bytes) sub_11CBF50
// int sub_11CBF50(uint32_t *a1, int a2, int a3);
// [0x11cc340] (97 bytes) sub_11CC340
// int sub_11CC340(int *a1, int a2);
// [0x11cc3b0] (921 bytes) sub_11CC3B0
// void sub_11CC3B0(int *a1, unsigned int a2, int a3, int a4);
// [0x11cc750] (805 bytes) sub_11CC750
// char *sub_11CC750(int *a1, int a2, int *a3);
// [0x11cca80] (396 bytes) sub_11CCA80
// unsigned int sub_11CCA80(int *a1, int a2);
// [0x11ccc10] (563 bytes) sub_11CCC10
// int sub_11CCC10(uint32_t *a1);
// [0x11cce50] (1749 bytes) sub_11CCE50
// uint8_t *sub_11CCE50(int *a1, int a2, int *a3);
// [0x11cd530] (506 bytes) sub_11CD530
// int sub_11CD530(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x11cd730] (1339 bytes) sub_11CD730
// uint8_t *sub_11CD730(int *a1, int a2, uint8_t *a3);
// [0x11cdc70] (1311 bytes) sub_11CDC70
// void sub_11CDC70(int *a1, int a2, int a3, uint8_t *a4);
// [0x11ce190] (2773 bytes) sub_11CE190
// int sub_11CE190(int a1, int a2, uint32_t *a3);
// [0x11d16f0] (132 bytes) sub_11D16F0
// int sub_11D16F0(int a1, unsigned int a2);
// [0x11d1780] (225 bytes) sub_11D1780
// int sub_11D1780(int a1, unsigned int *a2);
// [0x11d1870] (44 bytes) sub_11D1870
// char *sub_11D1870(unsigned int a1);
// [0x11d18a0] (41 bytes) sub_11D18A0
// char *sub_11D18A0(unsigned int a1);
// [0x11d18d0] (44 bytes) sub_11D18D0
// const char *sub_11D18D0(int a1, char *a2);
// [0x11d1900] (59 bytes) sub_11D1900
// int sub_11D1900(unsigned int *a1, unsigned int *a2);
// [0x11d1940] (2242 bytes) sub_11D1940
// int sub_11D1940( int a1, int a2, unsigned int a3, int (*a4)(int, int), void (*a5)(int, unsigned int), int a6);
// [0x11d2210] (1282 bytes) sub_11D2210
// int sub_11D2210(uint8_t *a1);
// [0x11d2720] (110 bytes) sub_11D2720
// uint32_t *sub_11D2720(uint32_t *a1);
// [0x11d2790] (142 bytes) sub_11D2790
// int *sub_11D2790(int *a1);
// [0x11d2820] (78 bytes) sub_11D2820
// int sub_11D2820(int a1, int16_t *a2);
// [0x11d2870] (474 bytes) sub_11D2870
// char sub_11D2870(int a1, int a2, int a3, int a4);
// [0x11d2a50] (559 bytes) sub_11D2A50
// int sub_11D2A50(int *a1, int16_t a2, int a3, int a4, uint32_t *a5, int a6);
// [0x11d2c80] (20 bytes) sub_11D2C80
// int sub_11D2C80(int a1);
// [0x11d2ca8] (1 bytes) nullsub_545
// void nullsub_545();
// [0x11d2cb0] (637 bytes) sub_11D2CB0
// int sub_11D2CB0(int *a1, int16_t a2, int a3, int a4, uint32_t *a5, int a6);
// [0x11d2f38] (1 bytes) nullsub_546
// void nullsub_546();
// [0x11d2f48] (1 bytes) nullsub_547
// void nullsub_547();
// [0x11d2f50] (55 bytes) sub_11D2F50
// int sub_11D2F50(uint32_t *a1);
// [0x11d2f90] (44 bytes) sub_11D2F90
// int sub_11D2F90(int a1, int a2, int a3);
// [0x11d2fc0] (116 bytes) sub_11D2FC0
// _OWORD *sub_11D2FC0(int a1, int a2, int a3);
// [0x11d3040] (41 bytes) sub_11D3040
// int sub_11D3040(int a1);
// [0x11d3070] (678 bytes) sub_11D3070
// char sub_11D3070(int a1, int a2, int a3, int *a4);
// [0x11d3320] (97 bytes) sub_11D3320
// int sub_11D3320(int a1, uint32_t *a2);
// [0x11d3390] (823 bytes) sub_11D3390
// int sub_11D3390(int *a1, int a2);
// [0x11d36d0] (157 bytes) sub_11D36D0
// uint8_t *sub_11D36D0(uint32_t *a1, int16_t a2, int a3, int a4);
// [0x11d3770] (72 bytes) sub_11D3770
// int64_t sub_11D3770(int64_t a1, int a2);
// [0x11d37c0] (147 bytes) sub_11D37C0
// int sub_11D37C0(int a1, int a2, int *a3, int *a4);
// [0x11d3853] (131 bytes) sub_11D3853
// char sub_11D3853(int a1, char a2);
// [0x11d38d6] (98 bytes) sub_11D38D6
// char sub_11D38D6(uint32_t *a1, int a2);
// [0x11d3938] (416 bytes) sub_11D3938
// char sub_11D3938(int a1, int a2, void (*a3)(uint32_t *), int a4, int a5);
// [0x11d3ad8] (96 bytes) sub_11D3AD8
// char sub_11D3AD8(int a1, int a2, void (*a3)(uint32_t *), int a4, int a5);
// [0x11d3b38] (102 bytes) sub_11D3B38
// uint32_t **sub_11D3B38(uint32_t **result);
// [0x11d3b9e] (525 bytes) sub_11D3B9E
// char sub_11D3B9E(int *a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x11d3dab] (205 bytes) sub_11D3DAB
// char sub_11D3DAB(int a1, int a2, char a3);
// [0x11d3e78] (399 bytes) sub_11D3E78
// char sub_11D3E78(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x11d4007] (462 bytes) sub_11D4007
// char sub_11D4007(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x11d41d5] (490 bytes) sub_11D41D5
// int sub_11D41D5(int a1, int a2, int a3);
// [0x11d43bf] (2929 bytes) sub_11D43BF
// int sub_11D43BF(int a1, int a2);
// [0x11d4f30] (14 bytes) sub_11D4F30
// int sub_11D4F30(int a1, int a2);
// [0x11d4f40] (27 bytes) sub_11D4F40
// int sub_11D4F40(int a1, unsigned int a2);
// [0x11d4f60] (48 bytes) sub_11D4F60
// int sub_11D4F60(int a1, int *a2);
// [0x11d4f90] (39 bytes) sub_11D4F90
// int sub_11D4F90(int a1, uint32_t *a2);
// [0x11d4fc0] (258 bytes) sub_11D4FC0
// int sub_11D4FC0(int a1, unsigned int a2);
// [0x11d50d0] (448 bytes) sub_11D50D0
// int sub_11D50D0(int a1, unsigned int *a2);
// [0x11d5290] (39 bytes) sub_11D5290
// int sub_11D5290(int a1, uint32_t *a2);
// [0x11d52c0] (50 bytes) sub_11D52C0
// int sub_11D52C0(uint32_t *a1, int a2);
// [0x11d5300] (39 bytes) sub_11D5300
// int sub_11D5300(int a1, uint32_t *a2);
// [0x11d5330] (73 bytes) sub_11D5330
// int sub_11D5330(int a1, int a2);
// [0x11d5380] (216 bytes) sub_11D5380
// int sub_11D5380(int a1, unsigned int *a2);
// [0x11d5460] (39 bytes) sub_11D5460
// int sub_11D5460(int a1, uint32_t *a2);
// [0x11d5490] (244 bytes) sub_11D5490
// unsigned int sub_11D5490(int a1, unsigned int a2);
// [0x11d5590] (261 bytes) sub_11D5590
// unsigned int sub_11D5590(int a1, unsigned int *a2);
// [0x11d56a0] (56 bytes) sub_11D56A0
// int sub_11D56A0(int a1, uint32_t *a2);
// [0x11d56e0] (103 bytes) sub_11D56E0
// int sub_11D56E0(int a1, int a2);
// [0x11d5750] (197 bytes) sub_11D5750
// int sub_11D5750(int a1, unsigned int *a2);
// [0x11d5820] (56 bytes) sub_11D5820
// int sub_11D5820(int a1, uint32_t *a2);
// [0x11d5860] (54 bytes) sub_11D5860
// int sub_11D5860(int a1, uint8_t *a2);
// [0x11d58a0] (56 bytes) sub_11D58A0
// int sub_11D58A0(int a1, uint32_t *a2);
// [0x11d58e0] (54 bytes) sub_11D58E0
// int sub_11D58E0(int a1, uint8_t *a2);
// [0x11d5920] (56 bytes) sub_11D5920
// int sub_11D5920(int a1, uint32_t *a2);
// [0x11d5960] (64 bytes) sub_11D5960
// int sub_11D5960(uint32_t *a1, uint8_t *a2);
// [0x11d59a0] (9 bytes) sub_11D59A0
// int sub_11D59A0();
// [0x11d59b0] (15 bytes) sub_11D59B0
// int sub_11D59B0(int a1, uint32_t *a2);
// [0x11d59c0] (20 bytes) sub_11D59C0
// int sub_11D59C0(int a1, uint32_t *a2);
// [0x11d59e0] (30 bytes) sub_11D59E0
// int sub_11D59E0(int a1, int a2);
// [0x11d5a00] (623 bytes) sub_11D5A00
// int sub_11D5A00(uint32_t *a1, int a2, int a3);
// [0x11d5c70] (57 bytes) sub_11D5C70
// int sub_11D5C70(int a1, int a2);
// [0x11d5cb0] (813 bytes) sub_11D5CB0
// int sub_11D5CB0(int a1, uint8_t *a2, unsigned int a3, int a4, int a5);
// [0x11d5fe0] (724 bytes) sub_11D5FE0
// char sub_11D5FE0(int a1, uint8_t *a2, unsigned int a3, int a4, int a5);
// [0x11d62c0] (133 bytes) sub_11D62C0
// int sub_11D62C0(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x11d6350] (459 bytes) sub_11D6350
// int sub_11D6350(uint32_t *a1, char a2, unsigned int a3, uint16_t *a4, uint16_t *a5);
// [0x11d6520] (167 bytes) sub_11D6520
// int sub_11D6520(int a1, int a2, char a3);
// [0x11d65d0] (58 bytes) sub_11D65D0
// char sub_11D65D0(int a1, uint32_t *a2, uint32_t *a3);
// [0x11d6610] (91 bytes) sub_11D6610
// int sub_11D6610(int *a1);
// [0x11d6670] (769 bytes) sub_11D6670
// int sub_11D6670( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, unsigned int a16);
// [0x11d6980] (911 bytes) sub_11D6980
// int sub_11D6980( int a1, int a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, unsigned int a13);
// [0x11d6d10] (113 bytes) sub_11D6D10
// int sub_11D6D10(int a1, int *a2);
// [0x11d6d90] (113 bytes) sub_11D6D90
// int sub_11D6D90(int a1, int *a2);
// [0x11d6e10] (357 bytes) sub_11D6E10
// int sub_11D6E10(int a1, int *a2);
// [0x11d6f80] (173 bytes) sub_11D6F80
// int sub_11D6F80(int a1, int *a2, char a3);
// [0x11d7030] (880 bytes) sub_11D7030
// int sub_11D7030(int a1, int *a2);
// [0x11d73a0] (388 bytes) sub_11D73A0
// int sub_11D73A0(int a1, int *a2);
// [0x11d7530] (525 bytes) sub_11D7530
// 0x11d7530 sub_11D7530
// [0x11d7740] (163 bytes) sub_11D7740
// char *sub_11D7740(int a1, int a2);
// [0x11d77f0] (203 bytes) sub_11D77F0
// char *sub_11D77F0(int a1, int a2);
// [0x11d78c0] (307 bytes) sub_11D78C0
// int sub_11D78C0(int a1);
// [0x11d7a00] (170 bytes) sub_11D7A00
// int sub_11D7A00(int a1);
// [0x11d7ab0] (636 bytes) sub_11D7AB0
// void sub_11D7AB0(int a1);
// [0x11d7d30] (77 bytes) sub_11D7D30
// int sub_11D7D30(int *a1);
// [0x11d7d80] (80 bytes) sub_11D7D80
// int sub_11D7D80(uint32_t *a1);
// [0x11d7dd0] (1054 bytes) sub_11D7DD0
// int sub_11D7DD0(int a1, int *a2, int a3);
// [0x11d81f0] (211 bytes) sub_11D81F0
// int sub_11D81F0(int a1, int a2, unsigned int a3, void *a4, size_t *a5);
// [0x11d82d0] (744 bytes) sub_11D82D0
// int sub_11D82D0(int a1);
// [0x11d85c0] (44 bytes) sub_11D85C0
// const char *sub_11D85C0(int a1, char *a2);
// [0x11d85f0] (1074 bytes) sub_11D85F0
// int sub_11D85F0(int a1, int a2);
// [0x11d8a30] (573 bytes) sub_11D8A30
// int sub_11D8A30(int a1, uint32_t *a2);
// [0x11d8c70] (589 bytes) sub_11D8C70
// int sub_11D8C70(int a1, uint32_t *a2);
// [0x11d8ec0] (269 bytes) sub_11D8EC0
// int sub_11D8EC0(int a1, uint32_t *a2);
// [0x11d8fd0] (1009 bytes) sub_11D8FD0
// int sub_11D8FD0(int a1, uint32_t *a2);
// [0x11d93d0] (245 bytes) sub_11D93D0
// int sub_11D93D0(int a1, uint32_t *a2);
// [0x11d94d0] (1402 bytes) sub_11D94D0
// int sub_11D94D0(int a1, uint32_t *a2);
// [0x11d9a50] (706 bytes) sub_11D9A50
// int sub_11D9A50(int a1, uint32_t *a2);
// [0x11d9d20] (730 bytes) sub_11D9D20
// int sub_11D9D20(int a1, int a2, unsigned int a3, unsigned int a4);
// [0x11da000] (140 bytes) sub_11DA000
// int sub_11DA000(int a1, int a2);
// [0x11da090] (149 bytes) sub_11DA090
// int sub_11DA090(int a1, unsigned int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5);
// [0x11da130] (159 bytes) sub_11DA130
// int sub_11DA130(uint16_t *a1, uint8_t *a2, unsigned int *a3, unsigned int a4, char a5);
// [0x11da1d0] (639 bytes) sub_11DA1D0
// int sub_11DA1D0(int a1, unsigned int a2, int a3);
// [0x11da450] (132 bytes) sub_11DA450
// int sub_11DA450(int a1, int a2);
// [0x11da4e0] (113 bytes) sub_11DA4E0
// int sub_11DA4E0(int a1, int *a2);
// [0x11da560] (113 bytes) sub_11DA560
// int sub_11DA560(int a1, int *a2);
// [0x11da5e0] (340 bytes) sub_11DA5E0
// int sub_11DA5E0(int a1, int *a2);
// [0x11da740] (832 bytes) sub_11DA740
// uint8_t *sub_11DA740(int a1);
// [0x11daa80] (3004 bytes) sub_11DAA80
// char sub_11DAA80(int *a1, uint32_t *a2, int a3);
// [0x11db640] (191 bytes) sub_11DB640
// int sub_11DB640(int a1, uint32_t *a2);
// [0x11db700] (260 bytes) sub_11DB700
// char *sub_11DB700(uint32_t *a1, int a2);
// [0x11db810] (2395 bytes) sub_11DB810
// int sub_11DB810(uint32_t *a1, unsigned int *a2, char a3);
// [0x11dc170] (797 bytes) sub_11DC170
// int sub_11DC170(uint32_t *a1, int a2, unsigned int a3);
// [0x11dc490] (1339 bytes) sub_11DC490
// int sub_11DC490(int a1, char *s1, uint32_t *a3);
// [0x11dc9d0] (163 bytes) sub_11DC9D0
// int sub_11DC9D0(int a1, uint32_t *a2, uint32_t *a3);
// [0x11dca80] (2247 bytes) sub_11DCA80
// int sub_11DCA80(int a1, unsigned int a2, int a3, int a4);
// [0x11dd350] (2588 bytes) sub_11DD350
// int sub_11DD350(int a1, int a2, unsigned int a3, int a4, int *a5, int a6, uint16_t *a7);
// [0x11ddd70] (321 bytes) sub_11DDD70
// int sub_11DDD70(int a1, uint16_t *a2, unsigned int a3, int a4, int a5);
// [0x11ddec0] (722 bytes) sub_11DDEC0
// int sub_11DDEC0(int a1, unsigned int a2, unsigned int a3);
// [0x11de1a0] (1583 bytes) sub_11DE1A0
// unsigned int sub_11DE1A0(int a1, char *s1);
// [0x11de7d0] (987 bytes) sub_11DE7D0
// unsigned int sub_11DE7D0(int a1, unsigned int *a2);
// [0x11debb0] (271 bytes) sub_11DEBB0
// unsigned int sub_11DEBB0(int a1, unsigned int a2);
// [0x11decc0] (457 bytes) sub_11DECC0
// int sub_11DECC0(int a1, unsigned int a2);
// [0x11dee90] (255 bytes) sub_11DEE90
// unsigned int sub_11DEE90(int a1, unsigned int a2);
// [0x11def90] (853 bytes) sub_11DEF90
// int sub_11DEF90(int a1, unsigned int *a2);
// [0x11df2f0] (3650 bytes) sub_11DF2F0
// char *sub_11DF2F0(uint32_t *a1, int a2, unsigned int a3);
// [0x11e0140] (1465 bytes) sub_11E0140
// int sub_11E0140(int a1, unsigned int a2, uint32_t *a3);
// [0x11e0700] (1529 bytes) sub_11E0700
// 0x11e0700 sub_11E0700
// [0x11e0d00] (1170 bytes) sub_11E0D00
// int sub_11E0D00(int a1, unsigned int *a2);
// [0x11e11a0] (10220 bytes) sub_11E11A0
// 0x11e11a0 sub_11E11A0
// [0x11e3990] (68 bytes) sub_11E3990
// int sub_11E3990(int a1, int a2, int a3, uint32_t *a4);
// [0x11e39e0] (292 bytes) sub_11E39E0
// unsigned int sub_11E39E0(int a1, unsigned int a2, uint32_t *a3);
// [0x11e3b10] (160 bytes) sub_11E3B10
// int sub_11E3B10(int a1);
// [0x11e3bb0] (32 bytes) sub_11E3BB0
// int sub_11E3BB0(int a1);
// [0x11e3bd0] (44 bytes) sub_11E3BD0
// int sub_11E3BD0(int a1, int a2);
// [0x11e3c00] (18 bytes) sub_11E3C00
// int sub_11E3C00(int a1, int a2);
// [0x11e3c20] (22 bytes) sub_11E3C20
// int sub_11E3C20(int a1, int a2, int a3);
// [0x11e3c40] (24 bytes) sub_11E3C40
// uint32_t *sub_11E3C40(int a1, int a2, int a3);
// [0x11e3c60] (37 bytes) sub_11E3C60
// uint8_t *sub_11E3C60(int a1, int a2, uint16_t a3, int a4);
// [0x11e3c90] (38 bytes) sub_11E3C90
// uint8_t *sub_11E3C90(int a1, int a2, uint16_t a3, int a4);
// [0x11e3cc0] (22 bytes) sub_11E3CC0
// uint32_t *sub_11E3CC0(int a1, int a2, uint16_t a3, int a4);
// [0x11e3ce0] (23 bytes) sub_11E3CE0
// int sub_11E3CE0(int a1, int a2, uint16_t a3, int a4);
// [0x11e3d00] (50 bytes) sub_11E3D00
// int sub_11E3D00(int a1, int a2, int a3);
// [0x11e3d40] (86 bytes) sub_11E3D40
// int sub_11E3D40(int a1, int a2, int a3);
// [0x11e3da0] (86 bytes) sub_11E3DA0
// int sub_11E3DA0(int a1, int a2, int a3);
// [0x11e3e00] (11 bytes) sub_11E3E00
// int sub_11E3E00(int a1, int a2);
// [0x11e3e10] (11 bytes) sub_11E3E10
// int sub_11E3E10(int a1, int a2, int a3);
// [0x11e3e20] (235 bytes) sub_11E3E20
// int sub_11E3E20(int a1);
// [0x11e3f10] (112 bytes) sub_11E3F10
// int sub_11E3F10(uint32_t *a1, int a2, unsigned int a3, unsigned int a4);
// [0x11e3f80] (37 bytes) sub_11E3F80
// int sub_11E3F80(int a1);
// [0x11e3fb0] (196 bytes) sub_11E3FB0
// int sub_11E3FB0(int a1, int a2, uint16_t a3, int a4);
// [0x11e4080] (234 bytes) sub_11E4080
// int sub_11E4080(int a1, int a2, uint16_t a3, int a4);
// [0x11e4170] (215 bytes) sub_11E4170
// int sub_11E4170(int a1, int a2);
// [0x11e4250] (42 bytes) sub_11E4250
// int sub_11E4250(int a1);
// [0x11e4280] (510 bytes) sub_11E4280
// void sub_11E4280(int *a1);
// [0x11e4480] (723 bytes) sub_11E4480
// int sub_11E4480(uint32_t *a1);
// [0x11e4760] (106 bytes) sub_11E4760
// int sub_11E4760(int a1, const char *a2, uint32_t *a3);
// [0x11e47d0] (1482 bytes) sub_11E47D0
// int sub_11E47D0(int a1, int **a2);
// [0x11e4da0] (282 bytes) sub_11E4DA0
// int sub_11E4DA0(int a1, int a2, int a3, char a4, int a5);
// [0x11e4ec0] (58 bytes) sub_11E4EC0
// int sub_11E4EC0(int a1, int a2, int a3);
// [0x11e4f00] (68 bytes) sub_11E4F00
// signed int sub_11E4F00(int a1, int a2, int a3);
// [0x11e4f50] (57 bytes) sub_11E4F50
// unsigned int sub_11E4F50(int a1, int a2, int a3);
// [0x11e4f90] (58 bytes) sub_11E4F90
// int sub_11E4F90(int a1, int a2, int a3);
// [0x11e4fd0] (58 bytes) sub_11E4FD0
// int sub_11E4FD0(int a1, int a2, int a3);
// [0x11e5010] (133 bytes) sub_11E5010
// int sub_11E5010(uint32_t *a1, int a2, int a3);
// [0x11e50a0] (165 bytes) sub_11E50A0
// int sub_11E50A0(uint32_t *a1, int a2, int a3);
// [0x11e5150] (438 bytes) sub_11E5150
// int sub_11E5150(int *a1, unsigned int a2, unsigned int a3, int a4, int a5);
// [0x11e5310] (287 bytes) sub_11E5310
// int sub_11E5310(unsigned int *a1, uint32_t *a2, int16_t a3, int a4, int a5, int a6);
// [0x11e5430] (1436 bytes) sub_11E5430
// int sub_11E5430(int a1, int *a2);
// [0x11e59d0] (144 bytes) sub_11E59D0
// const char *sub_11E59D0(int a1, char *a2);
// [0x11e5a60] (106 bytes) sub_11E5A60
// char sub_11E5A60(int a1, const char *a2, uint32_t *a3);
// [0x11e5ad0] (210 bytes) sub_11E5AD0
// int sub_11E5AD0(int a1, int a2, int a3);
// [0x11e5bb0] (224 bytes) sub_11E5BB0
// int sub_11E5BB0(int a1, int a2, int a3);
// [0x11e5c90] (1246 bytes) sub_11E5C90
// int sub_11E5C90(int a1, int a2, int a3);
// [0x11e6170] (501 bytes) sub_11E6170
// int sub_11E6170(int a1);
// [0x11e6370] (535 bytes) sub_11E6370
// int sub_11E6370(int a1, int a2);
// [0x11e6590] (1108 bytes) sub_11E6590
// int sub_11E6590(int a1, int *a2);
// [0x11e69f0] (1961 bytes) sub_11E69F0
// int sub_11E69F0(int a1);
// [0x11e71a0] (1576 bytes) sub_11E71A0
// int sub_11E71A0(int a1, int a2, uint32_t *src);
// [0x11e77d0] (1430 bytes) sub_11E77D0
// int sub_11E77D0(int a1, int a2, int *a3);
// [0x11e7d70] (4303 bytes) sub_11E7D70
// int sub_11E7D70(int a1, int a2, int a3, int a4, char a5);
// [0x11e8e40] (4030 bytes) sub_11E8E40
// int sub_11E8E40(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x11e9e00] (6760 bytes) sub_11E9E00
// int sub_11E9E00(int *a1, unsigned int a2, unsigned int a3, char a4);
// [0x11eb870] (2178 bytes) sub_11EB870
// int sub_11EB870(int a1, int a2, unsigned int a3, unsigned int a4);
// [0x11f2650] (68 bytes) sub_11F2650
// int sub_11F2650(int a1);
// [0x11f2694] (699 bytes) sub_11F2694
// int sub_11F2694(int a1, char a2);
// [0x11f294f] (410 bytes) sub_11F294F
// int sub_11F294F(int a1, uint32_t *a2);
// [0x11f2ae9] (323 bytes) sub_11F2AE9
// char *sub_11F2AE9(int a1, unsigned int a2);
// [0x11f2c2c] (1558 bytes) sub_11F2C2C
// int sub_11F2C2C(int a1, unsigned int a2, char **a3, unsigned int a4);
// [0x11f3250] (125 bytes) sub_11F3250
// unsigned int sub_11F3250(int a1, uint32_t *a2);
// [0x11f32d0] (245 bytes) sub_11F32D0
// int sub_11F32D0(int a1, int a2, int a3);
// [0x11f33d0] (53 bytes) sub_11F33D0
// int sub_11F33D0(int a1, int a2);
// [0x11f3410] (16 bytes) sub_11F3410
// int sub_11F3410(int a1, int a2);
// [0x11f3420] (20 bytes) sub_11F3420
// int sub_11F3420(int a1);
// [0x11f3440] (9 bytes) sub_11F3440
// int sub_11F3440();
// [0x11f3458] (1 bytes) nullsub_548
// void nullsub_548();
// [0x11f3460] (15 bytes) sub_11F3460
// int sub_11F3460(int a1);
// [0x11f3470] (82 bytes) sub_11F3470
// int sub_11F3470(uint32_t *a1, uint32_t *a2);
// [0x11f34d0] (21 bytes) sub_11F34D0
// int sub_11F34D0(int a1, uint16_t *a2);
// [0x11f34f0] (12 bytes) sub_11F34F0
// int sub_11F34F0();
// [0x11f3500] (48 bytes) sub_11F3500
// int sub_11F3500(int a1, void *a2);
// [0x11f3530] (169 bytes) sub_11F3530
// int sub_11F3530(int a1, int a2, int a3, uint32_t *a4);
// [0x11f35e0] (41 bytes) sub_11F35E0
// int sub_11F35E0(uint32_t *a1, uint32_t *a2);
// [0x11f3610] (106 bytes) sub_11F3610
// int sub_11F3610(int a1);
// [0x11f3680] (1132 bytes) sub_11F3680
// 0x11f3680 sub_11F3680
// [0x11f3af0] (1154 bytes) sub_11F3AF0
// int sub_11F3AF0(uint32_t *a1, int a2);
// [0x11f3f80] (1996 bytes) sub_11F3F80
// int sub_11F3F80( uint32_t *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18);
// [0x11f4750] (109 bytes) sub_11F4750
// int sub_11F4750(int a1, char *s1);
// [0x11f47c0] (2060 bytes) sub_11F47C0
// const char *sub_11F47C0(uint32_t *a1, uint8_t **a2);
// [0x11f4fd0] (3172 bytes) sub_11F4FD0
// int sub_11F4FD0(int a1, int a2, unsigned int a3, char *dest, int a5);
// [0x11f5c40] (346 bytes) sub_11F5C40
// int sub_11F5C40(int a1, int a2, int a3, int a4, int a5);
// [0x11f5da0] (44 bytes) sub_11F5DA0
// const char *sub_11F5DA0(int a1, char *a2);
// [0x11f5dd0] (248 bytes) sub_11F5DD0
// int sub_11F5DD0(int a1, int a2, int a3, uint32_t *a4);
// [0x11f5ed0] (65 bytes) sub_11F5ED0
// int sub_11F5ED0(int a1, int a2, uint8_t *a3, unsigned int a4);
// [0x11f5f20] (126 bytes) sub_11F5F20
// int sub_11F5F20(uint32_t *a1);
// [0x11f5fa0] (1328 bytes) sub_11F5FA0
// int sub_11F5FA0(int a1, int *a2);
// [0x11f64d0] (181 bytes) sub_11F64D0
// int sub_11F64D0(char *a1, size_t n, int a3);
// [0x11f6590] (169 bytes) sub_11F6590
// int sub_11F6590(uint32_t *a1);
// [0x11f6640] (192 bytes) sub_11F6640
// int sub_11F6640(int *a1, int *a2);
// [0x11f6700] (792 bytes) sub_11F6700
// uint8_t *sub_11F6700(uint32_t *a1, int a2);
// [0x11f6a20] (1175 bytes) sub_11F6A20
// int sub_11F6A20(int a1, uint32_t *a2);
// [0x11f6ec0] (1750 bytes) sub_11F6EC0
// int sub_11F6EC0( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, uint8_t **a10, int a11, int a12, int a13, int a14, int a15, unsigned int a16, uint8_t **a17, uint8_t **a18);
// [0x11f75a0] (755 bytes) sub_11F75A0
// int sub_11F75A0( uint32_t *a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, uint32_t *a12, uint32_t *a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, uint32_t *a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39);
// [0x11f78a0] (918 bytes) sub_11F78A0
// int sub_11F78A0(uint32_t *a1, int a2, unsigned int a3, char a4, int a5);
// [0x11f7c40] (423 bytes) sub_11F7C40
// int sub_11F7C40(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
// [0x11f7df0] (1236 bytes) sub_11F7DF0
// 0x11f7df0 sub_11F7DF0
// [0x11f82d0] (849 bytes) sub_11F82D0
// 0x11f82d0 sub_11F82D0
// [0x11f8630] (616 bytes) sub_11F8630
// 0x11f8630 sub_11F8630
// [0x11f88a0] (1504 bytes) sub_11F88A0
// void sub_11F88A0(int *a1);
// [0x11f8e80] (608 bytes) sub_11F8E80
// char sub_11F8E80(int a1, unsigned int a2, int a3);
// [0x11f90e0] (622 bytes) sub_11F90E0
// char sub_11F90E0(int a1, int a2, int a3);
// [0x11f9350] (5466 bytes) sub_11F9350
// 0x11f9350 sub_11F9350
// [0x11fa8b0] (1134 bytes) sub_11FA8B0
// 0x11fa8b0 sub_11FA8B0
// [0x11fad20] (20 bytes) sub_11FAD20
// int sub_11FAD20(int a1);
// [0x11fad40] (9 bytes) sub_11FAD40
// int sub_11FAD40();
// [0x11fad58] (1 bytes) nullsub_549
// void nullsub_549();
// [0x11fad60] (25 bytes) sub_11FAD60
// uint8_t *sub_11FAD60(int a1);
// [0x11fad80] (82 bytes) sub_11FAD80
// int sub_11FAD80(uint32_t *a1, uint32_t *a2);
// [0x11fade0] (21 bytes) sub_11FADE0
// int sub_11FADE0(int a1, uint16_t *a2);
// [0x11fae00] (77 bytes) sub_11FAE00
// int sub_11FAE00(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x11fae50] (14 bytes) sub_11FAE50
// int sub_11FAE50(int a1, uint8_t *a2);
// [0x11fae60] (17 bytes) sub_11FAE60
// int sub_11FAE60(int a1, int a2, uint32_t *a3);
// [0x11fae80] (106 bytes) sub_11FAE80
// int sub_11FAE80(int a1);
// [0x11faef0] (1256 bytes) sub_11FAEF0
// int sub_11FAEF0(uint32_t *a1, int a2);
// [0x11fb3e0] (1133 bytes) sub_11FB3E0
// int sub_11FB3E0(int a1, int a2, unsigned int a3, int a4);
// [0x11fb850] (557 bytes) sub_11FB850
// void sub_11FB850(uint32_t *a1);
// [0x11fba80] (44 bytes) sub_11FBA80
// const char *sub_11FBA80(int a1, char *a2);
// [0x11fbab0] (86 bytes) sub_11FBAB0
// int sub_11FBAB0(int a1, int a2);
// [0x11fbb10] (126 bytes) sub_11FBB10
// int sub_11FBB10(uint32_t *a1);
// [0x11fbb90] (3919 bytes) sub_11FBB90
// 0x11fbb90 sub_11FBB90
// [0x11fcae0] (398 bytes) sub_11FCAE0
// int sub_11FCAE0(int a1, int a2);
// [0x11fcc70] (212 bytes) sub_11FCC70
// 0x11fcc70 sub_11FCC70
// [0x11fcd50] (787 bytes) sub_11FCD50
// 0x11fcd50 sub_11FCD50
// [0x11fd070] (165 bytes) sub_11FD070
// int sub_11FD070(int *a1, int *a2);
// [0x11fd120] (177 bytes) sub_11FD120
// int sub_11FD120(uint32_t *a1);
// [0x11fd1e8] (1 bytes) nullsub_550
// void nullsub_550();
// [0x11fd1f0] (15 bytes) sub_11FD1F0
// int sub_11FD1F0(int a1);
// [0x11fd200] (82 bytes) sub_11FD200
// int sub_11FD200(uint32_t *a1, uint32_t *a2);
// [0x11fd260] (21 bytes) sub_11FD260
// int sub_11FD260(int a1, uint16_t *a2);
// [0x11fd280] (12 bytes) sub_11FD280
// int sub_11FD280();
// [0x11fd290] (48 bytes) sub_11FD290
// int sub_11FD290(int a1, void *a2);
// [0x11fd2c0] (138 bytes) sub_11FD2C0
// char sub_11FD2C0(int *a1, int a2);
// [0x11fd350] (138 bytes) sub_11FD350
// char sub_11FD350(int *a1, int *a2);
// [0x11fd3e0] (40 bytes) sub_11FD3E0
// void sub_11FD3E0(int a1);
// [0x11fd410] (118 bytes) sub_11FD410
// int sub_11FD410(int a1);
// [0x11fd490] (88 bytes) sub_11FD490
// char sub_11FD490(int *a1);
// [0x11fd4f0] (91 bytes) sub_11FD4F0
// int sub_11FD4F0(uint32_t *a1);
// [0x11fd550] (503 bytes) sub_11FD550
// int sub_11FD550(uint32_t *a1);
// [0x11fd750] (1349 bytes) sub_11FD750
// unsigned int sub_11FD750(int a1, uint8_t **a2);
// [0x11fdca0] (3281 bytes) sub_11FDCA0
// int sub_11FDCA0(int a1, int a2, int a3, int a4, int a5);
// [0x11fe980] (4808 bytes) sub_11FE980
// 0x11fe980 sub_11FE980
// [0x11ffc50] (1132 bytes) sub_11FFC50
// uint8_t *sub_11FFC50(uint32_t *a1, int a2);
// [0x12000c0] (346 bytes) sub_12000C0
// int sub_12000C0(int a1, int a2, int a3, int a4, int a5);
// [0x1200220] (44 bytes) sub_1200220
// const char *sub_1200220(int a1, char *a2);
// [0x1200250] (163 bytes) sub_1200250
// int sub_1200250(uint32_t *a1, char *s1);
// [0x1200300] (65 bytes) sub_1200300
// int sub_1200300(int a1, int a2, uint8_t *a3, unsigned int a4);
// [0x1200350] (79 bytes) sub_1200350
// int sub_1200350(int a1);
// [0x12003a0] (640 bytes) sub_12003A0
// int sub_12003A0(uint32_t *a1, int a2, int a3, int a4);
// [0x1200620] (34 bytes) sub_1200620
// int sub_1200620(uint32_t *a1);
// [0x1200650] (25 bytes) sub_1200650
// unsigned int sub_1200650(int a1, int a2);
// [0x1200670] (76 bytes) sub_1200670
// char sub_1200670(int a1, unsigned int *a2);
// [0x12006c0] (51 bytes) sub_12006C0
// int sub_12006C0(int a1, void *a2);
// [0x1200700] (110 bytes) sub_1200700
// int sub_1200700(int *a1);
// [0x1200770] (628 bytes) sub_1200770
// int sub_1200770(int a1, int *a2, unsigned int a3);
// [0x12009f0] (44 bytes) sub_12009F0
// const char *sub_12009F0(int a1, char *a2);
// [0x1200a20] (264 bytes) sub_1200A20
// char sub_1200A20(int a1, int *a2);
// [0x1200b30] (245 bytes) sub_1200B30
// int sub_1200B30(int *a1, int *a2);
// [0x1200c30] (183 bytes) sub_1200C30
// int sub_1200C30(uint32_t *a1);
// [0x1200cf0] (3637 bytes) sub_1200CF0
// int sub_1200CF0(int *a1, int *a2, int a3);
// [0x1201b30] (44 bytes) sub_1201B30
// int sub_1201B30(uint32_t *a1, uint32_t *a2);
// [0x1201b60] (173 bytes) sub_1201B60
// int sub_1201B60(uint32_t *a1, uint32_t *a2);
// [0x1201c10] (149 bytes) sub_1201C10
// int sub_1201C10(uint32_t *a1, uint32_t *a2);
// [0x1201cb0] (44 bytes) sub_1201CB0
// const char *sub_1201CB0(int a1, char *a2);
// [0x1201ce0] (157 bytes) sub_1201CE0
// void sub_1201CE0(uint32_t *a1);
// [0x1201d80] (304 bytes) sub_1201D80
// int sub_1201D80(int a1);
// [0x1201eb0] (2490 bytes) sub_1201EB0
// int sub_1201EB0(int *a1, int a2, unsigned int a3, int a4, int a5);
// [0x1202870] (1228 bytes) sub_1202870
// int sub_1202870(int *a1, int a2);
// [0x1202d40] (1981 bytes) sub_1202D40
// int sub_1202D40(int *a1, int16_t *a2);
// [0x1203500] (842 bytes) sub_1203500
// uint32_t *sub_1203500(uint32_t *a1, int a2);
// [0x1203850] (1539 bytes) sub_1203850
// int sub_1203850(int *a1, int a2);
// [0x1203e60] (885 bytes) sub_1203E60
// int sub_1203E60(int a1, uint32_t *a2, int a3);
// [0x12041e0] (82 bytes) sub_12041E0
// int sub_12041E0(uint32_t *a1, uint32_t *a2);
// [0x1204240] (127 bytes) sub_1204240
// int sub_1204240(int *a1, int a2);
// [0x12042c0] (149 bytes) sub_12042C0
// int sub_12042C0(uint32_t *a1, uint32_t *a2);
// [0x1204360] (305 bytes) sub_1204360
// int sub_1204360(int a1);
// [0x12044a0] (1761 bytes) sub_12044A0
// int sub_12044A0(int *a1, int a2);
// [0x1204b90] (1009 bytes) sub_1204B90
// uint32_t *sub_1204B90(uint32_t *a1, uint32_t *a2);
// [0x1204f90] (1009 bytes) sub_1204F90
// uint32_t *sub_1204F90(uint32_t *a1, uint32_t *a2);
// [0x1205390] (3923 bytes) sub_1205390
// int sub_1205390(int *a1, int a2, uint32_t *a3);
