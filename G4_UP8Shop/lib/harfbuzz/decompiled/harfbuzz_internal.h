#pragma once
// ============================================================================
// G4_UP8Shop/lib/harfbuzz/decompiled/harfbuzz_internal.h
// Library: harfbuzz | Module: harfbuzz_internal
// Binary Address Span: 0x1278520 .. 0x131b830 (433 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1278520] (1118 bytes) std::string jcore::Format<std::string,char [62],unsigned int,std::string>(char [62] const&,unsigned int const&,std::string const&)
// uint32_t *jcore::Format<std::string,char [62],unsigned int,std::string>( uint32_t *a1, uint8_t *a2, jcore::parsing::detail **a3, uint32_t *a4);
// [0x127a700] (1125 bytes) sub_127A700
// int *sub_127A700();
// [0x127b470] (2408 bytes) sub_127B470
// 0x127b470 sub_127B470
// [0x127c36d] (111 bytes) sub_127C36D
// void __noreturn sub_127C36D(int *a1, char *a2);
// [0x1281600] (797 bytes) sub_1281600
// int *sub_1281600();
// [0x1281920] (95 bytes) sub_1281920
// int sub_1281920();
// [0x1281980] (72 bytes) sub_1281980
// unsigned int sub_1281980(char *a1, char *a2, uint32_t *a3);
// [0x12819d0] (305 bytes) sub_12819D0
// int sub_12819D0(int *a1, uint16_t a2, uint16_t a3, uint16_t a4);
// [0x1281b10] (241 bytes) sub_1281B10
// char *sub_1281B10(char *result, int a2);
// [0x1281c10] (186 bytes) sub_1281C10
// int sub_1281C10(int a1, uint8_t *a2, int a3, uint32_t *a4);
// [0x1281cd0] (322 bytes) sub_1281CD0
// uint32_t *sub_1281CD0(int a1, uint32_t *a2, int (*a3)(uint32_t));
// [0x1281e20] (639 bytes) sub_1281E20
// int sub_1281E20(int a1, int64_t *a2, int64_t *a3);
// [0x12820a0] (258 bytes) sub_12820A0
// pthread_mutex_t *sub_12820A0(pthread_mutex_t *result, int *a2);
// [0x1282480] (498 bytes) sub_1282480
// int sub_1282480(uint32_t *a1, int a2, int a3, uint32_t *a4);
// [0x1282680] (113 bytes) sub_1282680
// int sub_1282680(uint32_t *a1, int *a2, int a3);
// [0x1282700] (783 bytes) sub_1282700
// int sub_1282700(int a1);
// [0x12832f0] (1136 bytes) sub_12832F0
// int sub_12832F0(int *a1, int a2, int a3, unsigned int a4, int a5);
// [0x1283760] (458 bytes) sub_1283760
// void sub_1283760(int *a1, uint32_t *a2, int a3, int a4);
// [0x1283e42] (68 bytes) sub_1283E42
// void __noreturn sub_1283E42();
// [0x1283e86] (81 bytes) sub_1283E86
// void __noreturn sub_1283E86();
// [0x1283ed7] (89 bytes) sub_1283ED7
// void __noreturn sub_1283ED7();
// [0x1283f30] (111 bytes) sub_1283F30
// void __noreturn sub_1283F30(int *a1, char *a2);
// [0x1283f9f] (89 bytes) sub_1283F9F
// void __noreturn sub_1283F9F();
// [0x1283ff8] (89 bytes) sub_1283FF8
// void __noreturn sub_1283FF8();
// [0x1284052] (76 bytes) sub_1284052
// void __noreturn sub_1284052();
// [0x128409e] (33 bytes) sub_128409E
// void __noreturn sub_128409E();
// [0x1284d50] (1073 bytes) std::string jcore::Format<std::string,char [39],char [256]>(char [39] const&,char [256] const&)
// uint32_t *jcore::Format<std::string,char [39],char [256]>(uint32_t *a1, char *a2, uint8_t *a3);
// [0x128c800] (1022 bytes) sub_128C800
// int *sub_128C800();
// [0x128cf30] (66 bytes) sub_128CF30
// int sub_128CF30();
// [0x128de30] (66 bytes) sub_128DE30
// int sub_128DE30();
// [0x128e7f0] (66 bytes) sub_128E7F0
// int sub_128E7F0();
// [0x128ee10] (66 bytes) sub_128EE10
// int sub_128EE10();
// [0x128ee60] (577 bytes) sub_128EE60
// uint32_t *sub_128EE60(int a1, uint32_t *a2);
// [0x128f0b0] (309 bytes) sub_128F0B0
// int sub_128F0B0(int *a1, unsigned int a2);
// [0x128f1f0] (388 bytes) sub_128F1F0
// void sub_128F1F0(int a1, unsigned int a2);
// [0x128f380] (482 bytes) sub_128F380
// void sub_128F380(int a1, unsigned int a2);
// [0x128f570] (538 bytes) sub_128F570
// unsigned int sub_128F570(int a1, unsigned int a2);
// [0x12903a0] (86 bytes) void marisa::grimoire::trie::LoudsTrie::cache<marisa::grimoire::trie::Key>(unsigned int,unsigned int,float,char)
// void marisa::grimoire::trie::LoudsTrie::cache<marisa::grimoire::trie::Key>( marisa::grimoire::trie::LoudsTrie *this, unsigned int a2, unsigned int a3, float a4, uint8_t a5);
// [0x12906d0] (94 bytes) void marisa::grimoire::trie::LoudsTrie::cache<marisa::grimoire::trie::ReverseKey>(unsigned int,unsigned int,float,char)
// void marisa::grimoire::trie::LoudsTrie::cache<marisa::grimoire::trie::ReverseKey>( marisa::grimoire::trie::LoudsTrie *this, unsigned int a2, unsigned int a3, float a4);
// [0x1292430] (755 bytes) sub_1292430
// void sub_1292430(int a1, marisa::grimoire::io::Reader *a2);
// [0x1292730] (1327 bytes) sub_1292730
// void sub_1292730(int a1, marisa::grimoire::io::Mapper *a2);
// [0x1294c80] (1430 bytes) sub_1294C80
// int sub_1294C80(char *a1, float *a2, float *a3);
// [0x1295220] (2371 bytes) sub_1295220
// int sub_1295220(int a1, int a2);
// [0x1295b70] (2317 bytes) sub_1295B70
// int sub_1295B70(char *a1, float *a2, float *a3, int a4);
// [0x1296480] (445 bytes) sub_1296480
// void sub_1296480(int a1, float *a2);
// [0x1296640] (453 bytes) void marisa::grimoire::trie::LoudsTrie::build_next_trie<marisa::grimoire::trie::ReverseKey>(marisa::grimoire::vector::Vector<marisa::grimoire::trie::ReverseKey> &,marisa::grimoire::vector::Vector<unsigned int> *,marisa::grimoire::trie::Config const&,unsigned int)
// void marisa::grimoire::trie::LoudsTrie::build_next_trie<marisa::grimoire::trie::ReverseKey>( int a1, int a2, int a3, uint32_t *a4, int a5);
// [0x1296810] (1179 bytes) void marisa::grimoire::trie::LoudsTrie::build_next_trie<marisa::grimoire::trie::Key>(marisa::grimoire::vector::Vector<marisa::grimoire::trie::Key> &,marisa::grimoire::vector::Vector<unsigned int> *,marisa::grimoire::trie::Config const&,unsigned int)
// void marisa::grimoire::trie::LoudsTrie::build_next_trie<marisa::grimoire::trie::Key>( int a1, int a2, int a3, uint32_t *a4, int a5);
// [0x1299580] (307 bytes) void std::__insertion_sort<std::pair<unsigned int,unsigned int> *>(std::pair<unsigned int,unsigned int> *,std::pair<unsigned int,unsigned int> *)
// unsigned int *std::__insertion_sort<std::pair<unsigned int,unsigned int> *>(unsigned int *a1, unsigned int *a2);
// [0x12996c0] (1999 bytes) unsigned int marisa::grimoire::algorithm::details::sort<marisa::grimoire::trie::Key *>(marisa::grimoire::trie::Key *,marisa::grimoire::trie::Key *,unsigned int)
// int marisa::grimoire::algorithm::details::sort<marisa::grimoire::trie::Key *>( char *a1, unsigned int a2, unsigned int a3);
// [0x1299e90] (270 bytes) void std::__insertion_sort<marisa::grimoire::trie::WeightedRange *,std::greater<marisa::grimoire::trie::WeightedRange>>(marisa::grimoire::trie::WeightedRange *,marisa::grimoire::trie::WeightedRange *,std::greater<marisa::grimoire::trie::WeightedRange>)
// void std::__insertion_sort<marisa::grimoire::trie::WeightedRange *,std::greater<marisa::grimoire::trie::WeightedRange>>( int a1, int a2);
// [0x1299fa0] (2193 bytes) unsigned int marisa::grimoire::algorithm::details::sort<marisa::grimoire::trie::ReverseKey *>(marisa::grimoire::trie::ReverseKey *,marisa::grimoire::trie::ReverseKey *,unsigned int)
// int marisa::grimoire::algorithm::details::sort<marisa::grimoire::trie::ReverseKey *>( uint32_t *a1, unsigned int a2, unsigned int a3);
// [0x129a840] (572 bytes) void std::rotate<marisa::grimoire::trie::WeightedRange *>(marisa::grimoire::trie::WeightedRange *,marisa::grimoire::trie::WeightedRange *,marisa::grimoire::trie::WeightedRange *)
// int std::rotate<marisa::grimoire::trie::WeightedRange *>(char *a1, char *a2, int a3);
// [0x129aa80] (619 bytes) void std::__merge_without_buffer<marisa::grimoire::trie::WeightedRange *,int,std::greater<marisa::grimoire::trie::WeightedRange>>(marisa::grimoire::trie::WeightedRange *,marisa::grimoire::trie::WeightedRange *,marisa::grimoire::trie::WeightedRange *,int,int,std::greater<marisa::grimoire::trie::WeightedRange>)
// void std::__merge_without_buffer<marisa::grimoire::trie::WeightedRange *,int,std::greater<marisa::grimoire::trie::WeightedRange>>( float *a1, int a2, int a3, int a4, int a5);
// [0x129af50] (1182 bytes) void std::__merge_adaptive<marisa::grimoire::trie::WeightedRange *,int,marisa::grimoire::trie::WeightedRange *,std::greater<marisa::grimoire::trie::WeightedRange>>(marisa::grimoire::trie::WeightedRange *,marisa::grimoire::trie::WeightedRange *,marisa::grimoire::trie::WeightedRange *,int,int,marisa::grimoire::trie::WeightedRange *,int,std::greater<marisa::grimoire::trie::WeightedRange>)
// void std::__merge_adaptive<marisa::grimoire::trie::WeightedRange *,int,marisa::grimoire::trie::WeightedRange *,std::greater<marisa::grimoire::trie::WeightedRange>>( float *a1, float *a2, float *a3, int a4, int a5, char *a6, int a7);
// [0x129b3f0] (6347 bytes) void marisa::grimoire::trie::LoudsTrie::build_current_trie<marisa::grimoire::trie::ReverseKey>(marisa::grimoire::vector::Vector<marisa::grimoire::trie::ReverseKey> &,marisa::grimoire::vector::Vector<unsigned int> *,marisa::grimoire::trie::Config const&,unsigned int)
// void marisa::grimoire::trie::LoudsTrie::build_current_trie<marisa::grimoire::trie::ReverseKey>( marisa::grimoire::trie::LoudsTrie *a1, int a2, int a3, int a4, int a5);
// [0x129ccc0] (826 bytes) void marisa::grimoire::trie::LoudsTrie::build_trie<marisa::grimoire::trie::ReverseKey>(marisa::grimoire::vector::Vector<marisa::grimoire::trie::ReverseKey> &,marisa::grimoire::vector::Vector<unsigned int> *,marisa::grimoire::trie::Config const&,unsigned int)
// void marisa::grimoire::trie::LoudsTrie::build_trie<marisa::grimoire::trie::ReverseKey>( marisa::grimoire::trie::LoudsTrie *a1, int a2, int a3, uint32_t *a4, int a5);
// [0x129d000] (5851 bytes) void marisa::grimoire::trie::LoudsTrie::build_current_trie<marisa::grimoire::trie::Key>(marisa::grimoire::vector::Vector<marisa::grimoire::trie::Key> &,marisa::grimoire::vector::Vector<unsigned int> *,marisa::grimoire::trie::Config const&,unsigned int)
// void marisa::grimoire::trie::LoudsTrie::build_current_trie<marisa::grimoire::trie::Key>( marisa::grimoire::trie::LoudsTrie *a1, int a2, int a3, int a4, int a5);
// [0x129e6e0] (304 bytes) void std::__adjust_heap<std::pair<unsigned int,unsigned int> *,int,std::pair<unsigned int,unsigned int>>(std::pair<unsigned int,unsigned int> *,int,int,std::pair<unsigned int,unsigned int>)
// unsigned int *std::__adjust_heap<std::pair<unsigned int,unsigned int> *,int,std::pair<unsigned int,unsigned int>>( int a1, int a2, int a3, unsigned int a4, unsigned int a5);
// [0x129e810] (104 bytes) void std::__pop_heap<std::pair<unsigned int,unsigned int> *>(std::pair<unsigned int,unsigned int> *,std::pair<unsigned int,unsigned int> *,std::pair<unsigned int,unsigned int> *)
// unsigned int *std::__pop_heap<std::pair<unsigned int,unsigned int> *>( unsigned int *a1, int a2, unsigned int *a3);
// [0x129e880] (1360 bytes) void std::__introsort_loop<std::pair<unsigned int,unsigned int> *,int>(std::pair<unsigned int,unsigned int> *,std::pair<unsigned int,unsigned int> *,int)
// int std::__introsort_loop<std::pair<unsigned int,unsigned int> *,int>(uint32_t *a1, char *a2, int a3);
// [0x129edd0] (66 bytes) sub_129EDD0
// int sub_129EDD0();
// [0x129ee20] (97 bytes) sub_129EE20
// void sub_129EE20(int a1);
// [0x129ee90] (100 bytes) sub_129EE90
// void sub_129EE90(int a1);
// [0x12a2010] (1868 bytes) unsigned int marisa::grimoire::algorithm::details::sort<marisa::grimoire::trie::Entry *>(marisa::grimoire::trie::Entry *,marisa::grimoire::trie::Entry *,unsigned int)
// int marisa::grimoire::algorithm::details::sort<marisa::grimoire::trie::Entry *>( char *a1, unsigned int a2, unsigned int a3);
// [0x12a2760] (66 bytes) sub_12A2760
// int sub_12A2760();
// [0x12a4090] (66 bytes) sub_12A4090
// int sub_12A4090();
// [0x12a40e0] (399 bytes) jcore::parsing::detail::GetBase10DigitCount(unsigned long long)
// int jcore::parsing::detail::GetBase10DigitCount(jcore::parsing::detail *this, uint64_t a2);
// [0x12a4270] (1214 bytes) sub_12A4270
// int sub_12A4270(char a1, int a2, uint32_t *a3, char *s, int a5);
// [0x12a4730] (797 bytes) sub_12A4730
// int sub_12A4730(int a1, void **a2, char *a3, int a4, uint32_t *a5);
// [0x12a4a50] (629 bytes) sub_12A4A50
// int sub_12A4A50(int a1, int a2);
// [0x12a4cd0] (641 bytes) sub_12A4CD0
// int sub_12A4CD0(int a1, int a2);
// [0x12a4f60] (1258 bytes) sub_12A4F60
// int **sub_12A4F60(int **a1, int *a2, int a3);
// [0x12a5450] (467 bytes) jcore::log::AddLogger(std::auto_ptr<jcore::log::Logger>)
// int jcore::log::AddLogger(int *a1);
// [0x12a5630] (3346 bytes) jcore::log::AddLogger(std::string const&,std::auto_ptr<jcore::log::Logger>)
// int jcore::log::AddLogger(const void **a1, int *a2);
// [0x12a6350] (302 bytes) jcore::log::RemoveAllLoggers(void)
// int jcore::log::RemoveAllLoggers();
// [0x12a6480] (444 bytes) jcore::log::RemoveAllLoggers(std::string const&)
// int jcore::log::RemoveAllLoggers(void **a1);
// [0x12a6640] (399 bytes) jcore::log::SetTopicEnabled(std::string const&,bool)
// int jcore::log::SetTopicEnabled(void **a1, char a2);
// [0x12a67d0] (104 bytes) jcore::log::GetDecorations(void)
// int jcore::log::GetDecorations();
// [0x12a6840] (388 bytes) jcore::log::GetDecorations(std::string const&)
// int jcore::log::GetDecorations(void **a1);
// [0x12a69d0] (98 bytes) jcore::log::SetDecorations(unsigned int)
// int jcore::log::SetDecorations(jcore::log *this);
// [0x12a6a40] (390 bytes) jcore::log::SetDecorations(std::string const&,unsigned int)
// int jcore::log::SetDecorations(void **a1, int a2);
// [0x12a6bd0] (98 bytes) jcore::log::SetLevel(jcore::log::Level::type)
// int jcore::log::SetLevel(int a1);
// [0x12a6c40] (390 bytes) jcore::log::SetLevel(std::string const&,jcore::log::Level::type)
// int jcore::log::SetLevel(void **a1, int a2);
// [0x12a6dd0] (135 bytes) jcore::log::Log(jcore::log::Level::type,std::string const&,char const*,int,std::string const&)
// int jcore::log::Log(int a1, void **a2, char *a3, int a4, uint32_t *a5);
// [0x12a6e60] (290 bytes) jcore::log::Log(jcore::log::Level::type,char const*,char const*,int,std::string const&)
// int jcore::log::Log(int a1, char *s, char *a3, int a4, uint32_t *a5);
// [0x12a6f90] (34 bytes) std::mutex::~mutex()
// void std::mutex::~mutex(pthread_mutex_t *this);
// [0x12a6fc0] (101 bytes) jcore::log::LoggerVector::~LoggerVector()
// void jcore::log::LoggerVector::~LoggerVector(jcore::log::LoggerVector *this);
// [0x12a7030] (983 bytes) std::_Rb_tree<std::string,std::pair<std::string const,jcore::log::Topic>,std::_Select1st<std::pair<std::string const,jcore::log::Topic>>,std::less<std::string>,std::allocator<std::pair<std::string const,jcore::log::Topic>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,jcore::log::Topic>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,jcore::log::Topic>,std::_Select1st<std::pair<std::string const,jcore::log::Topic>>,std::less<std::string>,std::allocator<std::pair<std::string const,jcore::log::Topic>>>::_M_erase( int a1, uint32_t *a2);
// [0x12a7410] (41 bytes) std::map<std::string,jcore::log::Topic,std::less<std::string>,std::allocator<std::pair<std::string const,jcore::log::Topic>>>::~map()
// void std::map<std::string,jcore::log::Topic>::~map(std::map<std::string,jcore::log::Topic> *this);
// [0x12a7440] (1752 bytes) std::_Rb_tree<std::string,std::pair<std::string const,jcommon::shared_ptr<jcore::log::LoggerVector>>,std::_Select1st<std::pair<std::string const,jcommon::shared_ptr<jcore::log::LoggerVector>>>,std::less<std::string>,std::allocator<std::pair<std::string const,jcommon::shared_ptr<jcore::log::LoggerVector>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,jcommon::shared_ptr<jcore::log::LoggerVector>>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,jcommon::shared_ptr<jcore::log::LoggerVector>>,std::_Select1st<std::pair<std::string const,jcommon::shared_ptr<jcore::log::LoggerVector>>>,std::less<std::string>,std::allocator<std::pair<std::string const,jcommon::shared_ptr<jcore::log::LoggerVector>>>>::_M_erase( int a1, uint32_t *a2);
// [0x12a7b20] (41 bytes) std::map<std::string,jcommon::shared_ptr<jcore::log::LoggerVector>,std::less<std::string>,std::allocator<std::pair<std::string const,jcommon::shared_ptr<jcore::log::LoggerVector>>>>::~map()
// void std::map<std::string,jcommon::shared_ptr<jcore::log::LoggerVector>>::~map( std::map<std::string,jcommon::shared_ptr<jcore::log::LoggerVector>> *this);
// [0x12a7b50] (314 bytes) sub_12A7B50
// int sub_12A7B50();
// [0x12a7cf0] (240 bytes) sub_12A7CF0
// int sub_12A7CF0(int a1, unsigned int a2);
// [0x12a7de0] (226 bytes) sub_12A7DE0
// int sub_12A7DE0(int a1, int a2, int a3);
// [0x12a7ed0] (207 bytes) sub_12A7ED0
// int sub_12A7ED0(int a1, int a2);
// [0x12a7fa0] (129 bytes) sub_12A7FA0
// int sub_12A7FA0(int a1, int *a2);
// [0x12a8030] (420 bytes) sub_12A8030
// void sub_12A8030(int a1);
// [0x12a81e0] (382 bytes) sub_12A81E0
// int sub_12A81E0(int a1);
// [0x12a8360] (101 bytes) sub_12A8360
// uint32_t *sub_12A8360(uint32_t *a1, int a2, int a3);
// [0x12a83d0] (117 bytes) sub_12A83D0
// uint32_t *sub_12A83D0(uint32_t *a1, uint32_t *a2);
// [0x12a8450] (33 bytes) sub_12A8450
// int sub_12A8450(int a1);
// [0x12a8480] (33 bytes) sub_12A8480
// int sub_12A8480(int a1);
// [0x12a84b0] (84 bytes) sub_12A84B0
// void *sub_12A84B0(uint32_t *a1);
// [0x12a8510] (132 bytes) sub_12A8510
// void sub_12A8510(int a1);
// [0x12a85a0] (1100 bytes) sub_12A85A0
// int sub_12A85A0(int a1, unsigned int a2, int a3, uint32_t *a4);
// [0x12a89f0] (290 bytes) sub_12A89F0
// uint32_t *sub_12A89F0(int a1, int a2);
// [0x12a8b20] (250 bytes) sub_12A8B20
// char *sub_12A8B20(int a1, uint32_t *a2);
// [0x12a8c20] (266 bytes) sub_12A8C20
// char *sub_12A8C20(int a1);
// [0x12a8d30] (793 bytes) sub_12A8D30
// int sub_12A8D30(int a1, unsigned int a2);
// [0x12a9050] (141 bytes) sub_12A9050
// int sub_12A9050(uint32_t *a1, int a2);
// [0x12a90e0] (165 bytes) sub_12A90E0
// int sub_12A90E0(int a1, int a2, int a3, unsigned int a4, unsigned int a5);
// [0x12a9190] (465 bytes) sub_12A9190
// int sub_12A9190(int a1, unsigned int a2, int a3);
// [0x12a9370] (483 bytes) sub_12A9370
// unsigned int sub_12A9370(uint32_t *a1);
// [0x12a9560] (1533 bytes) sub_12A9560
// unsigned int sub_12A9560(uint32_t *a1);
// [0x12a9b60] (544 bytes) sub_12A9B60
// unsigned int sub_12A9B60(uint32_t *a1, unsigned int a2, unsigned int a3);
// [0x12a9d80] (484 bytes) sub_12A9D80
// unsigned int sub_12A9D80(uint32_t *a1, unsigned int a2, unsigned int a3);
// [0x12a9f70] (268 bytes) sub_12A9F70
// int sub_12A9F70(uint32_t *a1);
// [0x12aa080] (233 bytes) sub_12AA080
// void sub_12AA080(int a1, unsigned int a2, int a3, int a4);
// [0x12aa170] (279 bytes) sub_12AA170
// void sub_12AA170(int a1, unsigned int a2, int a3, char *s2);
// [0x12aa290] (271 bytes) sub_12AA290
// void sub_12AA290(int a1, unsigned int a2, int a3, char *s2);
// [0x12aa3a0] (117 bytes) sub_12AA3A0
// int sub_12AA3A0(int a1);
// [0x12ae200] (81 bytes) sub_12AE200
// char *sub_12AE200();
// [0x12ae8b0] (635 bytes) sub_12AE8B0
// int sub_12AE8B0(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x12aeb30] (74 bytes) sub_12AEB30
// int sub_12AEB30(int a1, int a2);
// [0x12aebe0] (99 bytes) sub_12AEBE0
// int sub_12AEBE0(int a1, int a2, int a3, uint8_t *a4, int a5);
// [0x12aec50] (120 bytes) sub_12AEC50
// int sub_12AEC50(int a1, int a2, int a3, int a4);
// [0x12aecd0] (120 bytes) sub_12AECD0
// int sub_12AECD0(int a1, int a2, int a3, int a4);
// [0x12aed50] (88 bytes) sub_12AED50
// int sub_12AED50(int a1, int a2, int a3, int a4, uint32_t *a5);
// [0x12aedb0] (122 bytes) sub_12AEDB0
// int sub_12AEDB0(int a1, int a2, int a3);
// [0x12aee30] (122 bytes) sub_12AEE30
// int sub_12AEE30(int a1, int a2, int a3);
// [0x12aeeb0] (285 bytes) sub_12AEEB0
// int sub_12AEEB0(int a1, int a2, int a3, int a4, int *a5, uint32_t *a6);
// [0x12aefd0] (148 bytes) sub_12AEFD0
// int sub_12AEFD0(int a1, int a2, char *s, size_t a4, uint32_t *a5);
// [0x12af070] (397 bytes) sub_12AF070
// int sub_12AF070(uint32_t *a1, int a2, int a3, int *a4);
// [0x12af200] (277 bytes) sub_12AF200
// int sub_12AF200(int a1, int a2, int a3, int *a4, uint32_t *a5);
// [0x12af320] (277 bytes) sub_12AF320
// int sub_12AF320(int a1, int a2, int a3, int *a4, uint32_t *a5);
// [0x12b1552] (68 bytes) sub_12B1552
// int sub_12B1552(uint32_t *a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x12b2c00] (438 bytes) sub_12B2C00
// void *sub_12B2C00();
// [0x12b2dc0] (9 bytes) sub_12B2DC0
// int sub_12B2DC0();
// [0x12b2dd0] (12 bytes) sub_12B2DD0
// int sub_12B2DD0();
// [0x12b2de0] (12 bytes) sub_12B2DE0
// int sub_12B2DE0();
// [0x12b2df0] (11 bytes) sub_12B2DF0
// int sub_12B2DF0(int a1, int a2);
// [0x12b2e00] (12 bytes) sub_12B2E00
// int sub_12B2E00();
// [0x12b2e10] (9 bytes) sub_12B2E10
// int sub_12B2E10();
// [0x12b2e20] (9 bytes) sub_12B2E20
// int sub_12B2E20();
// [0x12b2e30] (9 bytes) sub_12B2E30
// int sub_12B2E30();
// [0x12b3830] (12 bytes) sub_12B3830
// int sub_12B3830();
// [0x12b3840] (9 bytes) sub_12B3840
// void sub_12B3840();
// [0x12b3850] (2562 bytes) sub_12B3850
// char *sub_12B3850(uint32_t *a1, uint32_t *a2, int a3);
// [0x12b4260] (312 bytes) sub_12B4260
// void sub_12B4260(char *a1);
// [0x12b43a0] (5819 bytes) sub_12B43A0
// int sub_12B43A0(int a1, uint32_t *a2, int a3, uint32_t *a4, int a5);
// [0x12b5df0] (51 bytes) hb_ot_map_t::feature_map_t::cmp(hb_ot_map_t::feature_map_t const*,hb_ot_map_t::feature_map_t const*)
// int hb_ot_map_t::feature_map_t::cmp(hb_ot_map_t::feature_map_t *this, const hb_ot_map_t::feature_map_t *a2);
// [0x12b5e24] (68 bytes) sub_12B5E24
// int sub_12B5E24(uint32_t *a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x12b5e70] (49 bytes) sub_12B5E70
// uint8_t *sub_12B5E70(int a1, int a2, int a3);
// [0x12b5eb0] (877 bytes) sub_12B5EB0
// uint8_t *sub_12B5EB0(int a1);
// [0x12b6220] (740 bytes) sub_12B6220
// int sub_12B6220(int a1);
// [0x12b6510] (520 bytes) sub_12B6510
// uint8_t *sub_12B6510(uint8_t *a1, int a2);
// [0x12b6720] (139 bytes) sub_12B6720
// void sub_12B6720(uint32_t *a1);
// [0x12b67b0] (1425 bytes) sub_12B67B0
// void sub_12B67B0(int a1, uint32_t *a2);
// [0x12b6d50] (2410 bytes) sub_12B6D50
// void sub_12B6D50(int a1, int a2, int a3);
// [0x12b98c4] (700 bytes) sub_12B98C4
// OT::SubstLookup *sub_12B98C4(int a1, int a2);
// [0x12b9b80] (1053 bytes) void OT::SubstLookup::add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,4u>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,0u>,hb_set_digest_lowest_bits_t<unsigned long,9u>>>>(hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,4u>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,0u>,hb_set_digest_lowest_bits_t<unsigned long,9u>>> *)const
// uint8_t *OT::SubstLookup::add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,4u>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,0u>,hb_set_digest_lowest_bits_t<unsigned long,9u>>>>( OT::SubstLookup *this, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 4u>, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 0u>, hb_set_digest_lowest_bits_t<unsigned long, 9u>>> *a2);
// [0x12b9fa0] (31 bytes) sub_12B9FA0
// int sub_12B9FA0(int a1, int a2, int a3);
// [0x12b9fc0] (1161 bytes) sub_12B9FC0
// int sub_12B9FC0(unsigned int *a1);
// [0x12ba450] (130 bytes) sub_12BA450
// void sub_12BA450(int a1, int a2);
// [0x12ba4e0] (34 bytes) sub_12BA4E0
// void sub_12BA4E0(void *ptr);
// [0x12ba510] (628 bytes) sub_12BA510
// int sub_12BA510(int a1);
// [0x12ba790] (1831 bytes) sub_12BA790
// unsigned int sub_12BA790(int a1, int a2, unsigned int a3);
// [0x12baec0] (184 bytes) sub_12BAEC0
// int sub_12BAEC0(int a1, int a2, int a3, uint32_t *a4);
// [0x12baf80] (154 bytes) sub_12BAF80
// int sub_12BAF80(int a1);
// [0x12bb020] (3607 bytes) sub_12BB020
// char sub_12BB020(int *a1, uint32_t *a2, int a3, unsigned int a4, unsigned int a5);
// [0x12bbe40] (255 bytes) sub_12BBE40
// void sub_12BBE40(int a1, int a2, int a3);
// [0x12bbf40] (1331 bytes) sub_12BBF40
// int **sub_12BBF40(int a1);
// [0x12bc480] (4208 bytes) sub_12BC480
// unsigned int sub_12BC480( unsigned int a1, int a2, int a3, unsigned int a4, unsigned int a5);
// [0x12bd4f0] (915 bytes) sub_12BD4F0
// bool sub_12BD4F0(int a1, unsigned int a2, unsigned int *a3, unsigned int *a4);
// [0x12bd890] (2056 bytes) sub_12BD890
// void sub_12BD890(int a1, uint32_t *a2, hb_buffer_t *a3);
// [0x12be0a0] (148 bytes) hb_buffer_t::next_glyph(void)
// int hb_buffer_t::next_glyph(hb_buffer_t *this);
// [0x12be140] (668 bytes) sub_12BE140
// int sub_12BE140(unsigned int a1);
// [0x12be3e0] (48 bytes) sub_12BE3E0
// int sub_12BE3E0(int a1);
// [0x12be410] (621 bytes) sub_12BE410
// int sub_12BE410(int a1);
// [0x12be680] (129 bytes) sub_12BE680
// void sub_12BE680(int a1, int a2, int a3);
// [0x12be710] (906 bytes) sub_12BE710
// unsigned int sub_12BE710(int a1, int a2, unsigned int a3);
// [0x12beaa0] (723 bytes) sub_12BEAA0
// unsigned int sub_12BEAA0(uint32_t *a1, unsigned int a2, unsigned int a3);
// [0x12bed80] (941 bytes) sub_12BED80
// unsigned int sub_12BED80(int a1, int a2, int a3);
// [0x12bf130] (975 bytes) sub_12BF130
// void sub_12BF130(int a1, int a2);
// [0x12bf500] (48 bytes) sub_12BF500
// int sub_12BF500(int a1);
// [0x12bf530] (557 bytes) sub_12BF530
// int sub_12BF530(int a1);
// [0x12bf760] (129 bytes) sub_12BF760
// void sub_12BF760(int a1, int a2, int a3);
// [0x12bf7f0] (904 bytes) sub_12BF7F0
// char *sub_12BF7F0(int a1, int a2, int a3);
// [0x12bfb80] (257 bytes) sub_12BFB80
// int sub_12BFB80(int a1, int a2);
// [0x12bfc90] (2216 bytes) sub_12BFC90
// void sub_12BFC90(int a1, int a2, int a3);
// [0x12c0540] (1564 bytes) sub_12C0540
// char *sub_12C0540(int a1, int a2, int a3);
// [0x12c0b60] (82 bytes) sub_12C0B60
// bool sub_12C0B60(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x12c0bc0] (107 bytes) sub_12C0BC0
// bool sub_12C0BC0(int a1, int a2, int a3, uint32_t *a4);
// [0x12c0c30] (2222 bytes) sub_12C0C30
// int sub_12C0C30( int a1, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, char a12, uint32_t *a13, int a14, int a15, int a16, int a17);
// [0x12c14e0] (1697 bytes) sub_12C14E0
// int sub_12C14E0(int a1, char a2);
// [0x12c1b90] (3119 bytes) sub_12C1B90
// void sub_12C1B90(int a1, int a2, int a3);
// [0x12c27c0] (1898 bytes) sub_12C27C0
// int sub_12C27C0( int a1, int a2, int a3, uint32_t *a4, int a5, unsigned int a6, int a7, int a8, uint32_t *a9, int a10, unsigned int *a11, int *a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, unsigned int a36, int a37, int a38, int a39, int a40, int a41);
// [0x12c2f30] (344 bytes) sub_12C2F30
// int sub_12C2F30(int a1, int a2, int a3);
// [0x12c3090] (669 bytes) sub_12C3090
// 0x12c3090 sub_12C3090
// [0x12c3330] (545 bytes) sub_12C3330
// int sub_12C3330(int a1, int a2, uint32_t *a3);
// [0x12c3560] (12 bytes) sub_12C3560
// int sub_12C3560();
// [0x12c3570] (9 bytes) sub_12C3570
// int sub_12C3570();
// [0x12c3588] (1 bytes) nullsub_553
// void nullsub_553();
// [0x12c3590] (37 bytes) sub_12C3590
// int sub_12C3590(int a1);
// [0x12c35c0] (102 bytes) sub_12C35C0
// bool sub_12C35C0(int a1, int a2, int a3, uint8_t *a4, int a5);
// [0x12c3630] (345 bytes) sub_12C3630
// bool sub_12C3630(int a1, int a2, char *s2, signed int a4, int *a5);
// [0x12c3790] (145 bytes) sub_12C3790
// int sub_12C3790(int a1, int a2, int a3, unsigned int a4, uint32_t *a5, uint32_t *a6);
// [0x12c3830] (132 bytes) sub_12C3830
// int sub_12C3830(int a1, int a2, int a3, uint32_t *a4);
// [0x12c38c0] (120 bytes) sub_12C38C0
// int sub_12C38C0(int a1, int a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x12c3940] (89 bytes) sub_12C3940
// int sub_12C3940(int a1, int a2, int a3, int a4);
// [0x12c39a0] (89 bytes) sub_12C39A0
// int sub_12C39A0(int a1, uint32_t *a2, unsigned int a3);
// [0x12c3a00] (89 bytes) sub_12C3A00
// int sub_12C3A00(int a1, uint32_t *a2, unsigned int a3);
// [0x12c3a60] (56 bytes) sub_12C3A60
// bool sub_12C3A60(int a1, int a2, int a3, int a4, int *a5);
// [0x12c3aa0] (37 bytes) sub_12C3AA0
// int sub_12C3AA0(int a1);
// [0x12c3ad0] (216 bytes) sub_12C3AD0
// int sub_12C3AD0(int a1, int a2, int a3);
// [0x12c4010] (58 bytes) sub_12C4010
// void sub_12C4010(void **ptr);
// [0x12c4050] (592 bytes) sub_12C4050
// int sub_12C4050(int a1, int a2, uint32_t *a3);
// [0x12c4650] (309 bytes) sub_12C4650
// int sub_12C4650(uint32_t *a1);
// [0x12c47e0] (316 bytes) sub_12C47E0
// int sub_12C47E0(uint32_t *a1);
// [0x12c4fe0] (119 bytes) sub_12C4FE0
// void sub_12C4FE0(int a1, int a2);
// [0x12c5060] (34 bytes) sub_12C5060
// void sub_12C5060(void *ptr);
// [0x12c5090] (307 bytes) sub_12C5090
// uint32_t *sub_12C5090(int a1);
// [0x12c51d0] (48 bytes) sub_12C51D0
// int sub_12C51D0(int a1);
// [0x12c5200] (114 bytes) sub_12C5200
// int sub_12C5200(int a1);
// [0x12c5280] (3295 bytes) sub_12C5280
// void sub_12C5280(int a1, int a2, int a3);
// [0x12c5f60] (616 bytes) sub_12C5F60
// bool sub_12C5F60(uint32_t *a1, int a2, int a3, int *a4);
// [0x12c61d0] (81 bytes) sub_12C61D0
// int sub_12C61D0(int a1);
// [0x12c711e] (81 bytes) sub_12C711E
// char sub_12C711E(int a1, uint32_t *a2);
// [0x12c7170] (27 bytes) sub_12C7170
// bool sub_12C7170(int a1, uint8_t *a2);
// [0x12c7190] (111 bytes) sub_12C7190
// int sub_12C7190(int a1, int a2, int a3);
// [0x12c7200] (41 bytes) sub_12C7200
// bool sub_12C7200(int a1, uint8_t *a2);
// [0x12c7230] (1106 bytes) sub_12C7230
// int sub_12C7230(uint32_t *a1, unsigned int a2, int a3, int a4, uint8_t *a5, int a6);
// [0x12c7690] (94 bytes) sub_12C7690
// bool sub_12C7690(int a1);
// [0x12c76f0] (310 bytes) sub_12C76F0
// int sub_12C76F0(int64_t a1@<edx:eax>, int a2);
// [0x12c7830] (601 bytes) sub_12C7830
// int sub_12C7830(int a1, int a2, int a3);
// [0x12c7a90] (444 bytes) sub_12C7A90
// int sub_12C7A90(int a1, uint8_t *a2, uint8_t *a3);
// [0x12c7c50] (211 bytes) sub_12C7C50
// uint8_t *sub_12C7C50(uint8_t *a1);
// [0x12c7d30] (154 bytes) sub_12C7D30
// int sub_12C7D30(int result, int a2, int a3, int a4, char a5);
// [0x12c7dd0] (302 bytes) sub_12C7DD0
// int sub_12C7DD0(uint8_t *a1, int a2, int a3);
// [0x12c7f00] (391 bytes) sub_12C7F00
// int sub_12C7F00(uint8_t *a1, int a2, int a3);
// [0x12c8090] (376 bytes) sub_12C8090
// uint8_t *sub_12C8090(uint8_t *a1, int a2);
// [0x12c8210] (270 bytes) sub_12C8210
// int sub_12C8210(int a1, int a2, unsigned int a3);
// [0x12c8320] (404 bytes) sub_12C8320
// uint8_t *sub_12C8320(uint8_t *a1);
// [0x12c84c0] (57 bytes) sub_12C84C0
// int sub_12C84C0(hb_set_t *a1, uint8_t *a2);
// [0x12c8500] (294 bytes) sub_12C8500
// unsigned int sub_12C8500(int a1, hb_set_t *a2, int a3);
// [0x12c8630] (271 bytes) sub_12C8630
// unsigned int sub_12C8630(hb_set_t *a1, uint8_t *a2, uint8_t *a3);
// [0x12c8740] (74 bytes) sub_12C8740
// int sub_12C8740(hb_set_t *a1, uint8_t *a2, int a3);
// [0x12c8790] (383 bytes) sub_12C8790
// int sub_12C8790(uint8_t *a1, int a2);
// [0x12c8910] (102 bytes) sub_12C8910
// void sub_12C8910(void *ptr);
// [0x12ca440] (179 bytes) sub_12CA440
// int sub_12CA440(int a1, int a2, unsigned int a3, hb_set_t *a4);
// [0x12ca500] (395 bytes) sub_12CA500
// int sub_12CA500(int a1, int a2, unsigned int a3, unsigned int a4, hb_set_t *a5);
// [0x12ca690] (445 bytes) sub_12CA690
// int sub_12CA690(int a1, int a2, unsigned int a3, int *a4, hb_set_t *a5);
// [0x12ca850] (609 bytes) sub_12CA850
// unsigned int sub_12CA850( int a1, int a2, unsigned int a3, unsigned int *a4, int *a5, hb_set_t *a6);
// [0x12cac40] (9 bytes) sub_12CAC40
// void sub_12CAC40();
// [0x12cacb0] (69 bytes) sub_12CACB0
// char *sub_12CACB0(int a1, uint32_t *a2);
// [0x12cad00] (632 bytes) sub_12CAD00
// unsigned int sub_12CAD00(int a1, int a2);
// [0x12cb1b0] (80 bytes) sub_12CB1B0
// bool sub_12CB1B0(unsigned int a1, uint8_t *a2, OT::ClassDef *a3);
// [0x12cb270] (385 bytes) sub_12CB270
// int sub_12CB270(int a1, int a2);
// [0x12cb400] (80 bytes) sub_12CB400
// bool sub_12CB400(unsigned int a1, uint8_t *a2, int a3);
// [0x12cb8a0] (882 bytes) sub_12CB8A0
// int sub_12CB8A0( int a1, unsigned int a2, int a3, int a4, int a5, uint32_t *a6, uint32_t *a7, bool *a8, int *a9);
// [0x12cbc20] (198 bytes) sub_12CBC20
// int sub_12CBC20(uint32_t *a1, unsigned int a2, int a3, int a4, uint8_t *a5, int *a6);
// [0x12cbcf0] (230 bytes) sub_12CBCF0
// int sub_12CBCF0(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x12cbde0] (402 bytes) sub_12CBDE0
// int sub_12CBDE0(unsigned int *a1);
// [0x12cbf80] (487 bytes) sub_12CBF80
// int sub_12CBF80( int a1, unsigned int a2, int a3, int (*a4)(uint32_t, int, int), int a5);
// [0x12cc170] (319 bytes) sub_12CC170
// int sub_12CC170( uint32_t *a1, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8, uint8_t *a9, int *a10);
// [0x12cc2b0] (233 bytes) sub_12CC2B0
// int sub_12CC2B0(uint8_t *a1, int a2);
// [0x12cc3a0] (332 bytes) sub_12CC3A0
// int sub_12CC3A0(uint8_t *a1, OT::hb_apply_context_t *a2);
// [0x12cc4f0] (380 bytes) sub_12CC4F0
// int sub_12CC4F0(uint8_t *a1, uint32_t *a2);
// [0x12cc670] (545 bytes) sub_12CC670
// int sub_12CC670(uint8_t *a1, int a2);
// [0x12cc8a0] (735 bytes) sub_12CC8A0
// int sub_12CC8A0(uint8_t *a1, int a2);
// [0x12ccb80] (490 bytes) sub_12CCB80
// char sub_12CCB80(uint8_t *a1, int a2);
// [0x12ccd70] (821 bytes) sub_12CCD70
// int sub_12CCD70(int a1, unsigned int a2, unsigned int *a3, int a4, int a5);
// [0x12cd140] (74 bytes) sub_12CD140
// void sub_12CD140(hb_set_t *a1, uint8_t *a2, int a3);
// [0x12cd190] (332 bytes) sub_12CD190
// int sub_12CD190(uint8_t *a1, int a2);
// [0x12cd2e0] (367 bytes) sub_12CD2E0
// int sub_12CD2E0(uint8_t *a1, int a2);
// [0x12cd450] (823 bytes) sub_12CD450
// int sub_12CD450( OT::hb_apply_context_t *a1, uint8_t *a2, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 4u>, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 0u>, hb_set_digest_lowest_bits_t<unsigned long, 9u>>> *a3);
// [0x12cd790] (21 bytes) sub_12CD790
// int sub_12CD790( hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 4u>, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 0u>, hb_set_digest_lowest_bits_t<unsigned long, 9u>>> *a1, uint8_t *a2, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 4u>, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 0u>, hb_set_digest_lowest_bits_t<unsigned long, 9u>>> *a3);
// [0x12cd7b0] (532 bytes) sub_12CD7B0
// int sub_12CD7B0(uint32_t *a1, int a2, int a3, int a4);
// [0x12cd9d0] (4538 bytes) sub_12CD9D0
// uint32_t (*sub_12CD9D0( uint32_t *a1, int a2, int a3, uint32_t *a4))(OT::PosLookup *__hidden this, OT::hb_apply_context_t *, unsigned int);
// [0x12cf530] (3619 bytes) sub_12CF530
// uint32_t *sub_12CF530(int a1);
// [0x12d0360] (161 bytes) hb_font_t::em_scale_y(short)
// int64_t hb_font_t::em_scale_y(hb_font_t *this, int16_t a2);
// [0x12d0410] (50 bytes) hb_set_t::add(unsigned int)
// hb_set_t *hb_set_t::add(hb_set_t *this, unsigned int a2);
// [0x12d38b0] (397 bytes) sub_12D38B0
// char sub_12D38B0( uint8_t *a1, hb_font_t **a2, uint32_t *a3, unsigned int a4, unsigned int a5, uint8_t *a6, unsigned int a7, int a8);
// [0x12d3c30] (175 bytes) bool OT::OffsetTo<OT::FeatureParams,OT::IntType<unsigned short,2u>>::sanitize<unsigned int>(OT::hb_sanitize_context_t *,void *,unsigned int)
// int OT::OffsetTo<OT::FeatureParams,OT::IntType<unsigned short,2u>>::sanitize<unsigned int>( OT::OffsetTo<OT::FeatureParams, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3, unsigned int a4);
// [0x12d3d50] (143 bytes) int OT::SortedArrayOf<OT::RangeRecord,OT::IntType<unsigned short,2u>>::bsearch<unsigned int>(unsigned int const&)const
// int OT::SortedArrayOf<OT::RangeRecord,OT::IntType<unsigned short,2u>>::bsearch<unsigned int>( OT::SortedArrayOf<OT::RangeRecord, OT::IntType<unsigned short, 2u>> *this, unsigned int *a2);
// [0x12d8570] (423 bytes) void OT::Coverage::add_coverage<hb_set_t>(hb_set_t *)const
// void OT::Coverage::add_coverage<hb_set_t>(OT::Coverage *this, hb_set_t *a2);
// [0x12da380] (85 bytes) hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,4u>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,0u>,hb_set_digest_lowest_bits_t<unsigned long,9u>>>::may_have(unsigned int)const
// bool hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,4u>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,0u>,hb_set_digest_lowest_bits_t<unsigned long,9u>>>::may_have( hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 4u>, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 0u>, hb_set_digest_lowest_bits_t<unsigned long, 9u>>> *this, unsigned int a2);
// [0x12dac20] (303 bytes) bool OT::OffsetTo<OT::AnchorMatrix,OT::IntType<unsigned short,2u>>::sanitize<unsigned int>(OT::hb_sanitize_context_t *,void *,unsigned int)
// int OT::OffsetTo<OT::AnchorMatrix,OT::IntType<unsigned short,2u>>::sanitize<unsigned int>( OT::OffsetTo<OT::AnchorMatrix, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3, unsigned int a4);
// [0x12de560] (676 bytes) _hb_void_t const& OT::hb_closure_context_t::dispatch<OT::AlternateSubstFormat1>(OT::AlternateSubstFormat1 const&)
// int OT::hb_closure_context_t::dispatch<OT::AlternateSubstFormat1>(int a1, uint8_t *a2);
// [0x12de810] (1278 bytes) _hb_void_t const& OT::hb_closure_context_t::dispatch<OT::ReverseChainSingleSubstFormat1>(OT::ReverseChainSingleSubstFormat1 const&)
// int OT::hb_closure_context_t::dispatch<OT::ReverseChainSingleSubstFormat1>(int a1, uint8_t *a2);
// [0x12df400] (658 bytes) _hb_void_t const& OT::hb_collect_glyphs_context_t::dispatch<OT::AlternateSubstFormat1>(OT::AlternateSubstFormat1 const&)
// int OT::hb_collect_glyphs_context_t::dispatch<OT::AlternateSubstFormat1>(int a1, uint8_t *a2);
// [0x12e04b0] (596 bytes) sub_12E04B0
// int *sub_12E04B0(int a1, int a2, int a3, unsigned int a4, int a5, char a6);
// [0x12e0710] (392 bytes) sub_12E0710
// int sub_12E0710(int a1, int a2, uint32_t *a3);
// [0x12e08a0] (355 bytes) sub_12E08A0
// unsigned int sub_12E08A0(uint32_t *a1, unsigned int a2, unsigned int a3, unsigned int a4);
// [0x12e0a10] (96 bytes) sub_12E0A10
// int sub_12E0A10(int a1, int a2, int a3);
// [0x12e0a70] (384 bytes) sub_12E0A70
// char *sub_12E0A70(int a1, uint32_t *a2, int a3);
// [0x12e0bf0] (3995 bytes) sub_12E0BF0
// size_t sub_12E0BF0(int a1, int a2);
// [0x12e1b90] (53 bytes) hb_ot_map_t::lookup_map_t::cmp(hb_ot_map_t::lookup_map_t const*,hb_ot_map_t::lookup_map_t const*)
// int hb_ot_map_t::lookup_map_t::cmp(hb_ot_map_t::lookup_map_t *this, const hb_ot_map_t::lookup_map_t *a2);
// [0x12e1bd0] (36 bytes) hb_ot_map_builder_t::feature_info_t::cmp(hb_ot_map_builder_t::feature_info_t const*,hb_ot_map_builder_t::feature_info_t const*)
// int hb_ot_map_builder_t::feature_info_t::cmp( hb_ot_map_builder_t::feature_info_t *this, const hb_ot_map_builder_t::feature_info_t *a2);
// [0x12e1c00] (154 bytes) sub_12E1C00
// int sub_12E1C00(char *s1, char *s2);
// [0x12e2640] (87 bytes) sub_12E2640
// int sub_12E2640(int a1);
// [0x12e26a0] (22 bytes) SSLv23_method
// void *SSLv23_method();
// [0x12e26c0] (87 bytes) sub_12E26C0
// int sub_12E26C0(int a1);
// [0x12e2720] (22 bytes) SSLv23_server_method
// void *SSLv23_server_method();
// [0x12e2740] (2226 bytes) ssl23_get_client_hello
// int ssl23_get_client_hello(int a1);
// [0x12e3000] (556 bytes) ssl23_accept
// int ssl23_accept(uint32_t *a1);
// [0x12e3230] (12 bytes) ssl2_default_timeout
// int ssl2_default_timeout();
// [0x12e3240] (12 bytes) ssl2_num_ciphers
// int ssl2_num_ciphers();
// [0x12e3250] (39 bytes) ssl2_get_cipher
// char *ssl2_get_cipher(unsigned int a1);
// [0x12e3280] (63 bytes) ssl2_pending
// int ssl2_pending(int a1);
// [0x12e32c0] (116 bytes) ssl2_free
// int ssl2_free(int a1);
// [0x12e3340] (192 bytes) ssl2_clear
// int ssl2_clear(uint32_t *a1);
// [0x12e3400] (341 bytes) ssl2_new
// int ssl2_new(uint32_t *a1);
// [0x12e3560] (24 bytes) ssl2_ctrl
// int ssl2_ctrl(int a1, int a2);
// [0x12e3580] (9 bytes) ssl2_callback_ctrl
// int ssl2_callback_ctrl();
// [0x12e3590] (9 bytes) ssl2_ctx_ctrl
// int ssl2_ctx_ctrl();
// [0x12e35a0] (9 bytes) ssl2_ctx_callback_ctrl
// int ssl2_ctx_callback_ctrl();
// [0x12e35b0] (102 bytes) ssl2_get_cipher_by_char
// uint32_t *ssl2_get_cipher_by_char(uint8_t *a1);
// [0x12e3620] (73 bytes) ssl2_put_cipher_by_char
// int ssl2_put_cipher_by_char(int a1, uint8_t *a2);
// [0x12e3670] (513 bytes) ssl2_generate_key_material
// int ssl2_generate_key_material(int a1);
// [0x12e3880] (259 bytes) ssl2_write_error
// int (*ssl2_write_error(uint32_t *a1))(int, uint32_t, uint32_t, uint8_t *, int, uint32_t *, uint32_t);
// [0x12e3990] (64 bytes) ssl2_return_error
// int (*ssl2_return_error(uint32_t *a1, int a2))(int, uint32_t, uint32_t, uint8_t *, int, uint32_t *, uint32_t);
// [0x12e39d0] (19 bytes) ssl2_shutdown
// int ssl2_shutdown(int a1);
// [0x12e39f0] (22 bytes) SSLv2_method
// void *SSLv2_method();
// [0x12e3a10] (36 bytes) sub_12E3A10
// void *sub_12E3A10(int a1);
// [0x12e3a40] (2282 bytes) sub_12E3A40
// int sub_12E3A40(int a1, void *a2, signed int a3, int a4);
// [0x12e4330] (29 bytes) ssl2_read
// int ssl2_read(size_t a1, void *a2, size_t a3);
// [0x12e4350] (29 bytes) ssl2_peek
// int ssl2_peek(size_t a1, void *a2, size_t a3);
// [0x12e4370] (1613 bytes) ssl2_write
// int ssl2_write(int a1, int a2, int a3);
// [0x12e49c0] (209 bytes) ssl2_part_read
// int ssl2_part_read(int a1, int a2, int a3);
// [0x12e4aa0] (191 bytes) ssl2_do_write
// int ssl2_do_write(uint32_t *a1);
// [0x12e4b60] (8014 bytes) ssl2_accept
// int ssl2_accept(int *a1);
// [0x12e6ab0] (22 bytes) SSLv2_server_method
// void *SSLv2_server_method();
// [0x12e6ad0] (36 bytes) sub_12E6AD0
// void *sub_12E6AD0(int a1);
// [0x12e9890] (557 bytes) n_ssl3_mac
// int n_ssl3_mac(uint32_t *a1, uint8_t *a2, int a3);
// [0x12ebb20] (22 bytes) SSLv3_method
// void *SSLv3_method();
// [0x12ebb40] (39 bytes) sub_12EBB40
// void *sub_12EBB40(int a1);
// [0x12ec180] (1092 bytes) sub_12EC180
// int sub_12EC180(uint32_t *a1, int a2, void *src, size_t n, int a5);
// [0x12edb20] (22 bytes) SSLv3_server_method
// void *SSLv3_server_method();
// [0x12edb40] (39 bytes) sub_12EDB40
// void *sub_12EDB40(int a1);
// [0x12f52c0] (46 bytes) sub_12F52C0
// int sub_12F52C0(uint32_t *a1, uint32_t *a2);
// [0x12f6ac0] (17 bytes) sub_12F6AC0
// int sub_12F6AC0(uint32_t **a1, uint32_t **a2);
// [0x12f6ae0] (832 bytes) sub_12F6AE0
// uint32_t *sub_12F6AE0( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, uint32_t *a9, uint32_t *a10);
// [0x12f6e20] (1717 bytes) sub_12F6E20
// int sub_12F6E20(char *a1, uint32_t *a2, uint32_t *a3, uint32_t **a4);
// [0x12f9250] (36 bytes) sub_12F9250
// int sub_12F9250(uint8_t *a1);
// [0x12f92d0] (99 bytes) sub_12F92D0
// int sub_12F92D0(uint32_t *a1, uint32_t *a2);
// [0x12fa730] (42 bytes) sub_12FA730
// int sub_12FA730(int a1, int a2);
// [0x12fe2f0] (110 bytes) sub_12FE2F0
// int sub_12FE2F0(uint32_t *a1, void *a2, size_t *a3);
// [0x12fe800] (291 bytes) sub_12FE800
// void sub_12FE800(char *a1, uint32_t *a2);
// [0x12fff40] (877 bytes) sub_12FFF40
// int sub_12FFF40(int a1, int a2, int a3, void *src, size_t a5, int **a6);
// [0x13027b0] (22 bytes) TLSv1_method
// void *TLSv1_method();
// [0x13027d0] (39 bytes) sub_13027D0
// void *sub_13027D0(int a1);
// [0x1302d50] (22 bytes) TLSv1_server_method
// void *TLSv1_server_method();
// [0x1302d70] (39 bytes) sub_1302D70
// void *sub_1302D70(int a1);
// [0x1302da0] (87 bytes) sub_1302DA0
// int sub_1302DA0(int a1);
// [0x1302e00] (3774 bytes) ssl23_connect
// int ssl23_connect(uint32_t *a1);
// [0x1303cc0] (22 bytes) SSLv23_client_method
// void *SSLv23_client_method();
// [0x1303ce0] (12 bytes) ssl23_default_timeout
// int ssl23_default_timeout();
// [0x1303cf0] (50 bytes) ssl23_num_ciphers
// int ssl23_num_ciphers();
// [0x1303d30] (85 bytes) ssl23_get_cipher
// char *ssl23_get_cipher(unsigned int a1);
// [0x1303d90] (77 bytes) ssl23_get_cipher_by_char
// uint32_t *ssl23_get_cipher_by_char(uint8_t *a1);
// [0x1303de0] (39 bytes) ssl23_put_cipher_by_char
// int ssl23_put_cipher_by_char(int a1, uint8_t *a2);
// [0x1303e10] (181 bytes) ssl23_read
// int ssl23_read(int a1, int a2, int a3, int a4, int a5);
// [0x1303ed0] (181 bytes) ssl23_peek
// int ssl23_peek(int a1, int a2, int a3, int a4, int a5);
// [0x1303f90] (181 bytes) ssl23_write
// int ssl23_write(int a1, int a2, int a3, int a4, int a5);
// [0x1304050] (132 bytes) ssl23_write_bytes
// int ssl23_write_bytes(uint32_t *a1);
// [0x13040e0] (102 bytes) ssl23_read_bytes
// int ssl23_read_bytes(uint32_t *a1, unsigned int a2);
// [0x1304150] (22 bytes) SSLv2_client_method
// void *SSLv2_client_method();
// [0x1304170] (36 bytes) sub_1304170
// void *sub_1304170(int a1);
// [0x13041a0] (602 bytes) ssl2_set_certificate
// int ssl2_set_certificate(uint32_t *a1, int a2, int a3, ...);
// [0x1304400] (7432 bytes) ssl2_connect
// int ssl2_connect( int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15);
// [0x1306110] (914 bytes) ssl2_enc_init
// int ssl2_enc_init(int a1, int a2);
// [0x13064b0] (120 bytes) ssl2_enc
// int ssl2_enc(uint32_t *a1, int a2);
// [0x1306530] (296 bytes) ssl2_mac
// int ssl2_mac(uint32_t *a1, int a2, int a3);
// [0x1306660] (46 bytes) sub_1306660
// int sub_1306660(uint32_t *a1, uint32_t *a2);
// [0x1306690] (22 bytes) SSLv3_client_method
// void *SSLv3_client_method();
// [0x13066b0] (39 bytes) sub_13066B0
// void *sub_13066B0(int a1);
// [0x130da70] (22 bytes) TLSv1_client_method
// void *TLSv1_client_method();
// [0x130da90] (39 bytes) sub_130DA90
// void *sub_130DA90(int a1);
// [0x130dac0] (1104 bytes) sub_130DAC0
// int sub_130DAC0( int a1, void *a2, size_t a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, char *dest, signed int n);
// [0x130fc40] (227 bytes) compress2
// int compress2(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x130fd30] (66 bytes) compress
// int compress(int a1, uint32_t *a2, int a3, int a4);
// [0x130fd80] (19 bytes) compressBound
// int compressBound(unsigned int a1);
// [0x130fda0] (22 bytes) get_crc_table
// int *get_crc_table();
// [0x130fdc0] (766 bytes) crc32
// int crc32(int a1, int a2, unsigned int a3);
// [0x13100c0] (406 bytes) crc32_combine
// int crc32_combine(unsigned int a1, int a2, int a3);
// [0x1310260] (1201 bytes) sub_1310260
// int sub_1310260(int **a1, int a2);
// [0x1310720] (2894 bytes) sub_1310720
// int sub_1310720(uint32_t *a1, int a2);
// [0x1311270] (2542 bytes) sub_1311270
// int sub_1311270(uint32_t *a1, int a2);
// [0x1311c60] (367 bytes) deflateSetDictionary
// int deflateSetDictionary(int a1, char *a2, size_t a3);
// [0x1311dd0] (407 bytes) deflateReset
// int deflateReset(uint32_t *a1);
// [0x1311f70] (47 bytes) deflateSetHeader
// int deflateSetHeader(int a1, int a2);
// [0x1311fa0] (65 bytes) deflatePrime
// int deflatePrime(int a1, int a2, int16_t a3);
// [0x1311ff0] (67 bytes) deflateTune
// int deflateTune(int a1, int a2, int a3, int a4, int a5);
// [0x1312040] (96 bytes) deflateBound
// int deflateBound(int a1, unsigned int a2);
// [0x13120a0] (3415 bytes) deflate
// char deflate(int a1, int a2);
// [0x1312e00] (319 bytes) deflateParams
// char deflateParams(int a1, unsigned int a2, int a3);
// [0x1312f40] (255 bytes) deflateEnd
// int deflateEnd(int a1);
// [0x1313040] (770 bytes) deflateInit2_
// int deflateInit2_(uint32_t *a1, unsigned int a2, int a3, int a4, int a5, unsigned int a6, uint8_t *a7, int a8);
// [0x1313350] (90 bytes) deflateInit_
// int deflateInit_(uint32_t *a1, unsigned int a2, uint8_t *a3, int a4);
// [0x13133b0] (754 bytes) deflateCopy
// int deflateCopy(uint32_t *a1, uint32_t *a2);
// [0x13136b0] (157 bytes) inflateReset
// int inflateReset(uint32_t *a1);
// [0x1313750] (78 bytes) inflatePrime
// int inflatePrime(int a1, int a2, int a3);
// [0x13137a0] (297 bytes) inflateInit2_
// int inflateInit2_(uint32_t *a1, int a2, uint8_t *a3, int a4);
// [0x13138d0] (58 bytes) inflateInit_
// int inflateInit_(uint32_t *a1, uint8_t *a2, int a3);
// [0x1313910] (10215 bytes) inflate
// int inflate(uint8_t **a1, int a2);
// [0x1316100] (87 bytes) inflateEnd
// int inflateEnd(uint32_t *a1);
// [0x1316160] (610 bytes) inflateSetDictionary
// int inflateSetDictionary(int a1, char *src, size_t a3);
// [0x13163d0] (55 bytes) inflateGetHeader
// int inflateGetHeader(int a1, int a2);
// [0x1316410] (593 bytes) inflateSync
// int inflateSync(uint32_t *a1);
// [0x1316670] (47 bytes) inflateSyncPoint
// int inflateSyncPoint(int a1);
// [0x13166a0] (671 bytes) inflateCopy
// int inflateCopy(uint32_t *a1, uint32_t *a2);
// [0x1316940] (1436 bytes) inflate_table
// int inflate_table(int a1, int a2, int a3, int *a4, unsigned int *a5, uint16_t *a6);
// [0x1316ee0] (1525 bytes) sub_1316EE0
// int sub_1316EE0(int result, int a2, int a3);
// [0x13174e0] (1271 bytes) sub_13174E0
// int sub_13174E0(int result, int a2, int a3);
// [0x13179e0] (2714 bytes) sub_13179E0
// int sub_13179E0(int result, int a2);
// [0x1318480] (236 bytes) _tr_init
// int tr_init(int a1);
// [0x1318570] (366 bytes) _tr_stored_block
// int tr_stored_block(int a1, int a2, int a3, int a4);
// [0x13186e0] (710 bytes) _tr_align
// int tr_align(int a1);
// [0x13189b0] (2170 bytes) _tr_flush_block
// int tr_flush_block(int a1, int a2, int a3, int a4);
// [0x1319230] (219 bytes) _tr_tally
// bool tr_tally(uint32_t *a1, int a2, int a3);
// [0x1319310] (228 bytes) uncompress
// int uncompress(int a1, int *a2, uint8_t *a3, int a4);
// [0x1319400] (22 bytes) zlibVersion
// const char *zlibVersion();
// [0x1319420] (12 bytes) zlibCompileFlags
// int zlibCompileFlags();
// [0x1319430] (30 bytes) zError
// char *zError(int a1);
// [0x1319450] (39 bytes) zcalloc
// int zcalloc(int a1, int a2, int a3);
// [0x1319480] (34 bytes) zcfree
// int zcfree(int a1, int a2);
// [0x13194b0] (683 bytes) adler32
// unsigned int adler32(unsigned int a1, uint8_t *a2, unsigned int a3);
// [0x1319760] (189 bytes) adler32_combine
// int adler32_combine(unsigned int a1, unsigned int a2, unsigned int a3);
// [0x1319820] (2809 bytes) inflate_fast
// uint32_t *inflate_fast(uint32_t *a1, int a2);
// [0x131b2c0] (779 bytes) sub_131B2C0
// int *sub_131B2C0();
// [0x131b5d0] (597 bytes) sub_131B5D0
// int sub_131B5D0(int a1, uint32_t *a2, const void **a3);
// [0x131b830] (1254 bytes) sub_131B830
// int *sub_131B830(int *a1, uint32_t *a2, int a3, const void **a4);

static uint8_t * const length_code = (uint8_t *)&_length_code;
static uint8_t * const dist_code = (uint8_t *)&_dist_code;

int ssl2_clear(uint32_t *a1);
template <typename A1, typename std::enable_if<!g4_can_pass<A1, uint32_t *>::value, int>::type = 0>
inline int ssl2_clear(A1 a1) { return ssl2_clear(g4_arg_cast<uint32_t *>(a1)); }

int ssl2_new(uint32_t *a1);
template <typename A1, typename std::enable_if<!g4_can_pass<A1, uint32_t *>::value, int>::type = 0>
inline int ssl2_new(A1 a1) { return ssl2_new(g4_arg_cast<uint32_t *>(a1)); }

int ssl2_write(int a1, int a2, int a3);
template <typename A1, typename A2, typename A3, typename std::enable_if<!(g4_can_pass<A1, int>::value && g4_can_pass<A2, int>::value && g4_can_pass<A3, int>::value), int>::type = 0>
inline int ssl2_write(A1 a1, A2 a2, A3 a3) { return ssl2_write(g4_arg_cast<int>(a1), g4_arg_cast<int>(a2), g4_arg_cast<int>(a3)); }

int ssl23_write_bytes(uint32_t *a1);
template <typename A1, typename std::enable_if<!g4_can_pass<A1, uint32_t *>::value, int>::type = 0>
inline int ssl23_write_bytes(A1 a1) { return ssl23_write_bytes(g4_arg_cast<uint32_t *>(a1)); }

int ssl23_read_bytes(uint32_t *a1, unsigned int a2);
template <typename A1, typename A2, typename std::enable_if<!(g4_can_pass<A1, uint32_t *>::value && g4_can_pass<A2, unsigned int>::value), int>::type = 0>
inline int ssl23_read_bytes(A1 a1, A2 a2) { return ssl23_read_bytes(g4_arg_cast<uint32_t *>(a1), g4_arg_cast<unsigned int>(a2)); }

int ssl2_enc_init(int a1, int a2);
template <typename A1, typename A2, typename std::enable_if<!(g4_can_pass<A1, int>::value && g4_can_pass<A2, int>::value), int>::type = 0>
inline int ssl2_enc_init(A1 a1, A2 a2) { return ssl2_enc_init(g4_arg_cast<int>(a1), g4_arg_cast<int>(a2)); }

int ssl2_enc(uint32_t *a1, int a2);
template <typename A1, typename A2, typename std::enable_if<!(g4_can_pass<A1, uint32_t *>::value && g4_can_pass<A2, int>::value), int>::type = 0>
inline int ssl2_enc(A1 a1, A2 a2) { return ssl2_enc(g4_arg_cast<uint32_t *>(a1), g4_arg_cast<int>(a2)); }

int ssl2_mac(uint32_t *a1, int a2, int a3);
template <typename A1, typename A2, typename A3, typename std::enable_if<!(g4_can_pass<A1, uint32_t *>::value && g4_can_pass<A2, int>::value && g4_can_pass<A3, int>::value), int>::type = 0>
inline int ssl2_mac(A1 a1, A2 a2, A3 a3) { return ssl2_mac(g4_arg_cast<uint32_t *>(a1), g4_arg_cast<int>(a2), g4_arg_cast<int>(a3)); }

int inflate_table(int a1, int a2, int a3, int *a4, unsigned int *a5, uint16_t *a6);
template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename std::enable_if<!(g4_can_pass<A1, int>::value && g4_can_pass<A2, int>::value && g4_can_pass<A3, int>::value && g4_can_pass<A4, int *>::value && g4_can_pass<A5, unsigned int *>::value && g4_can_pass<A6, uint16_t *>::value), int>::type = 0>
inline int inflate_table(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) { return inflate_table(g4_arg_cast<int>(a1), g4_arg_cast<int>(a2), g4_arg_cast<int>(a3), g4_arg_cast<int *>(a4), g4_arg_cast<unsigned int *>(a5), g4_arg_cast<uint16_t *>(a6)); }

int tr_init(int a1);
template <typename A1, typename std::enable_if<!g4_can_pass<A1, int>::value, int>::type = 0>
inline int tr_init(A1 a1) { return tr_init(g4_arg_cast<int>(a1)); }

int tr_stored_block(int a1, int a2, int a3, int a4);
template <typename A1, typename A2, typename A3, typename A4, typename std::enable_if<!(g4_can_pass<A1, int>::value && g4_can_pass<A2, int>::value && g4_can_pass<A3, int>::value && g4_can_pass<A4, int>::value), int>::type = 0>
inline int tr_stored_block(A1 a1, A2 a2, A3 a3, A4 a4) { return tr_stored_block(g4_arg_cast<int>(a1), g4_arg_cast<int>(a2), g4_arg_cast<int>(a3), g4_arg_cast<int>(a4)); }

int tr_align(int a1);
template <typename A1, typename std::enable_if<!g4_can_pass<A1, int>::value, int>::type = 0>
inline int tr_align(A1 a1) { return tr_align(g4_arg_cast<int>(a1)); }

int tr_flush_block(int a1, int a2, int a3, int a4);
template <typename A1, typename A2, typename A3, typename A4, typename std::enable_if<!(g4_can_pass<A1, int>::value && g4_can_pass<A2, int>::value && g4_can_pass<A3, int>::value && g4_can_pass<A4, int>::value), int>::type = 0>
inline int tr_flush_block(A1 a1, A2 a2, A3 a3, A4 a4) { return tr_flush_block(g4_arg_cast<int>(a1), g4_arg_cast<int>(a2), g4_arg_cast<int>(a3), g4_arg_cast<int>(a4)); }

int zcalloc(int a1, int a2, int a3);
int zcfree(int a1, int a2);

unsigned int adler32(unsigned int a1, uint8_t *a2, unsigned int a3);
template <typename A1, typename A2, typename A3, typename std::enable_if<!(g4_can_pass<A1, unsigned int>::value && g4_can_pass<A2, uint8_t *>::value && g4_can_pass<A3, unsigned int>::value), int>::type = 0>
inline unsigned int adler32(A1 a1, A2 a2, A3 a3) { return adler32(g4_arg_cast<unsigned int>(a1), g4_arg_cast<uint8_t *>(a2), g4_arg_cast<unsigned int>(a3)); }

uint32_t *inflate_fast(uint32_t *a1, int a2);
template <typename A1, typename A2, typename std::enable_if<!(g4_can_pass<A1, uint32_t *>::value && g4_can_pass<A2, int>::value), int>::type = 0>
inline uint32_t *inflate_fast(A1 a1, A2 a2) { return inflate_fast(g4_arg_cast<uint32_t *>(a1), g4_arg_cast<int>(a2)); }

int (*ssl2_return_error(uint32_t *a1, int a2))(int, uint32_t, uint32_t, uint8_t *, int, uint32_t *, uint32_t);
inline int (*ssl2_return_error(int *a1, int a2))(int, uint32_t, uint32_t, uint8_t *, int, uint32_t *, uint32_t) { return ssl2_return_error((uint32_t *)a1, a2); }

int ssl2_do_write(uint32_t *a1);
inline int ssl2_do_write(int *a1) { return ssl2_do_write((uint32_t *)a1); }

int ssl2_set_certificate(uint32_t *a1, int a2, int a3, ...);
template <typename... Args>
inline int ssl2_set_certificate(int *a1, int a2, int a3, Args... args) { return ssl2_set_certificate((uint32_t *)a1, a2, a3, args...); }

template<>
uint8_t *OT::SubstLookup::add_coverage<hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,4u>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,0u>,hb_set_digest_lowest_bits_t<unsigned long,9u>>>>(
        OT::SubstLookup::Self *self,
        hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 4u>, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 0u>, hb_set_digest_lowest_bits_t<unsigned long, 9u>>> *a2);

template<>
void OT::Coverage::add_coverage<hb_set_t>(OT::Coverage::Self *self, hb_set_t *a2);

template<>
bool hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,4u>,hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long,0u>,hb_set_digest_lowest_bits_t<unsigned long,9u>>>::may_have(
        hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 4u>, hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 0u>, hb_set_digest_lowest_bits_t<unsigned long, 9u>>> *self,
        unsigned int a2);
