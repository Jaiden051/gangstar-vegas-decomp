#pragma once
// ============================================================================
// G4_UP8Shop/lib/harfbuzz/decompiled/marisa_trie.h
// Library: harfbuzz | Module: marisa_trie
// Binary Address Span: 0x128cc00 .. 0x12a2f10 (141 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x128cc00] (53 bytes) marisa::Agent::Agent(void)
// struct marisa::Agent *marisa::Agent::Agent(marisa::Agent *this);
// [0x128cc40] (84 bytes) marisa::Agent::~Agent()
// void marisa::Agent::~Agent(marisa::Agent *this);
// [0x128cca0] (81 bytes) marisa::Agent::set_query(char const*)
// int marisa::Agent::set_query(marisa::Agent *this, const char *a2);
// [0x128cd00] (80 bytes) marisa::Agent::set_query(char const*,unsigned int)
// marisa::Agent *marisa::Agent::set_query(marisa::Agent *this, const char *a2, unsigned int a3);
// [0x128cd50] (26 bytes) marisa::Agent::set_query(unsigned int)
// marisa::Agent *marisa::Agent::set_query(marisa::Agent *this, unsigned int a2);
// [0x128cd70] (250 bytes) marisa::Agent::init_state(void)
// int marisa::Agent::init_state(marisa::Agent *this);
// [0x128ce70] (91 bytes) marisa::Agent::swap(marisa::Agent&)
// marisa::Agent *marisa::Agent::swap(marisa::Agent *this, marisa::Agent *a2);
// [0x128ced0] (96 bytes) marisa::Agent::clear(void)
// void marisa::Agent::clear(marisa::Agent *this);
// [0x128cf80] (15 bytes) marisa::Trie::Trie(void)
// struct marisa::Trie *marisa::Trie::Trie(marisa::Trie *this);
// [0x128cf90] (62 bytes) marisa::Trie::~Trie()
// void marisa::Trie::~Trie(marisa::grimoire::trie::LoudsTrie **this);
// [0x128cfd0] (139 bytes) marisa::Trie::save(char const*)const
// void marisa::Trie::save(marisa::grimoire::trie::LoudsTrie **this, char *a2);
// [0x128d060] (140 bytes) marisa::Trie::write(int)const
// void marisa::Trie::write(marisa::grimoire::trie::LoudsTrie **this, int a2);
// [0x128d0f0] (97 bytes) marisa::Trie::lookup(marisa::Agent &)const
// int marisa::Trie::lookup(marisa::grimoire::trie::LoudsTrie **this, marisa::Agent *a2);
// [0x128d160] (97 bytes) marisa::Trie::reverse_lookup(marisa::Agent &)const
// int marisa::Trie::reverse_lookup(marisa::grimoire::trie::LoudsTrie **this, marisa::Agent *a2);
// [0x128d1d0] (97 bytes) marisa::Trie::common_prefix_search(marisa::Agent &)const
// int marisa::Trie::common_prefix_search(marisa::grimoire::trie::LoudsTrie **this, marisa::Agent *a2);
// [0x128d240] (97 bytes) marisa::Trie::predictive_search(marisa::Agent &)const
// int marisa::Trie::predictive_search(marisa::grimoire::trie::LoudsTrie **this, marisa::Agent *a2);
// [0x128d2b0] (43 bytes) marisa::Trie::num_tries(void)const
// int marisa::Trie::num_tries(marisa::Trie *this);
// [0x128d2e0] (43 bytes) marisa::Trie::num_keys(void)const
// int marisa::Trie::num_keys(marisa::Trie *this);
// [0x128d310] (45 bytes) marisa::Trie::num_nodes(void)const
// int marisa::Trie::num_nodes(marisa::Trie *this);
// [0x128d340] (43 bytes) marisa::Trie::tail_mode(void)const
// int marisa::Trie::tail_mode(marisa::Trie *this);
// [0x128d370] (43 bytes) marisa::Trie::node_order(void)const
// int marisa::Trie::node_order(marisa::Trie *this);
// [0x128d3a0] (48 bytes) marisa::Trie::empty(void)const
// bool marisa::Trie::empty(marisa::Trie *this);
// [0x128d3d0] (43 bytes) marisa::Trie::size(void)const
// int marisa::Trie::size(marisa::Trie *this);
// [0x128d400] (45 bytes) marisa::Trie::total_size(void)const
// int marisa::Trie::total_size(marisa::grimoire::trie::LoudsTrie **this);
// [0x128d430] (45 bytes) marisa::Trie::io_size(void)const
// int marisa::Trie::io_size(marisa::grimoire::trie::LoudsTrie **this);
// [0x128d460] (19 bytes) marisa::Trie::swap(marisa::Trie&)
// marisa::Trie *marisa::Trie::swap(marisa::Trie *this, marisa::Trie *a2);
// [0x128d480] (96 bytes) marisa::Trie::clear(void)
// void marisa::Trie::clear(marisa::Trie *this);
// [0x128d4e0] (139 bytes) marisa::fwrite(__sFILE *,marisa::Trie const&)
// void marisa::fwrite(int a1, marisa::grimoire::trie::LoudsTrie **a2);
// [0x128d570] (137 bytes) marisa::write(std::ostream &,marisa::Trie const&)
// int marisa::write(int a1, marisa::grimoire::trie::LoudsTrie **a2);
// [0x128d600] (42 bytes) marisa::operator<<(std::ostream &,marisa::Trie const&)
// int marisa::operator<<(int a1, marisa::grimoire::trie::LoudsTrie **a2);
// [0x128d630] (274 bytes) marisa::read(std::istream &,marisa::Trie *)
// int marisa::read(int a1, marisa::grimoire::trie::LoudsTrie **a2);
// [0x128d750] (42 bytes) marisa::operator>>(std::istream &,marisa::Trie &)
// int marisa::operator>>(int a1, marisa::grimoire::trie::LoudsTrie **a2);
// [0x128d780] (282 bytes) marisa::fread(__sFILE *,marisa::Trie *)
// void marisa::fread(int a1, marisa::grimoire::trie::LoudsTrie **a2);
// [0x128d8a0] (274 bytes) marisa::Trie::read(int)
// void marisa::Trie::read(marisa::grimoire::trie::LoudsTrie **this, int a2);
// [0x128d9c0] (274 bytes) marisa::Trie::load(char const*)
// void marisa::Trie::load(marisa::grimoire::trie::LoudsTrie **this, char *a2);
// [0x128dae0] (284 bytes) marisa::Trie::map(void const*,unsigned int)
// void marisa::Trie::map(marisa::grimoire::trie::LoudsTrie **this, void *a2, unsigned int a3);
// [0x128dc00] (274 bytes) marisa::Trie::mmap(char const*)
// void marisa::Trie::mmap(marisa::grimoire::trie::LoudsTrie **this, char *file);
// [0x128dd20] (207 bytes) marisa::Trie::build(marisa::Keyset &,int)
// void marisa::Trie::build(marisa::grimoire::trie::LoudsTrie **a1, int a2, int a3);
// [0x128ddf0] (62 bytes) marisa::scoped_ptr<marisa::grimoire::trie::LoudsTrie>::~scoped_ptr()
// void marisa::scoped_ptr<marisa::grimoire::trie::LoudsTrie>::~scoped_ptr( marisa::grimoire::trie::LoudsTrie **this);
// [0x128de80] (39 bytes) marisa::grimoire::io::Mapper::Mapper(void)
// struct marisa::grimoire::io::Mapper *marisa::grimoire::io::Mapper::Mapper(marisa::grimoire::io::Mapper *this);
// [0x128deb0] (79 bytes) marisa::grimoire::io::Mapper::~Mapper()
// void marisa::grimoire::io::Mapper::~Mapper(marisa::grimoire::io::Mapper *this);
// [0x128df00] (12 bytes) marisa::grimoire::io::Mapper::is_open(void)const
// bool marisa::grimoire::io::Mapper::is_open(marisa::grimoire::io::Mapper *this);
// [0x128df10] (67 bytes) marisa::grimoire::io::Mapper::swap(marisa::grimoire::io::Mapper&)
// marisa::grimoire::io::Mapper *marisa::grimoire::io::Mapper::swap( marisa::grimoire::io::Mapper *this, marisa::grimoire::io::Mapper *a2);
// [0x128df60] (96 bytes) marisa::grimoire::io::Mapper::clear(void)
// void marisa::grimoire::io::Mapper::clear(marisa::grimoire::io::Mapper *this);
// [0x128dfc0] (88 bytes) marisa::grimoire::io::Mapper::map_data(unsigned int)
// int marisa::grimoire::io::Mapper::map_data(marisa::grimoire::io::Mapper *this, unsigned int a2);
// [0x128e020] (86 bytes) marisa::grimoire::io::Mapper::seek(unsigned int)
// int marisa::grimoire::io::Mapper::seek(marisa::grimoire::io::Mapper *this, unsigned int a2);
// [0x128e080] (180 bytes) marisa::grimoire::io::Mapper::open_(char const*)
// int marisa::grimoire::io::Mapper::open_(marisa::grimoire::io::Mapper *this, char *file);
// [0x128e140] (123 bytes) marisa::grimoire::io::Mapper::open(char const*)
// void marisa::grimoire::io::Mapper::open(marisa::grimoire::io::Mapper *this, char *file);
// [0x128e1c0] (18 bytes) marisa::grimoire::io::Mapper::open_(void const*,unsigned int)
// marisa::grimoire::io::Mapper *marisa::grimoire::io::Mapper::open_( marisa::grimoire::io::Mapper *this, const void *a2, unsigned int a3);
// [0x128e1e0] (143 bytes) marisa::grimoire::io::Mapper::open(void const*,unsigned int)
// void marisa::grimoire::io::Mapper::open(marisa::grimoire::io::Mapper *this, void *a2, unsigned int a3);
// [0x128e270] (29 bytes) marisa::grimoire::io::Reader::Reader(void)
// struct marisa::grimoire::io::Reader *marisa::grimoire::io::Reader::Reader(marisa::grimoire::io::Reader *this);
// [0x128e290] (42 bytes) marisa::grimoire::io::Reader::~Reader()
// void marisa::grimoire::io::Reader::~Reader(FILE **this);
// [0x128e2c0] (59 bytes) marisa::grimoire::io::Reader::swap(marisa::grimoire::io::Reader&)
// marisa::grimoire::io::Reader *marisa::grimoire::io::Reader::swap( marisa::grimoire::io::Reader *this, marisa::grimoire::io::Reader *a2);
// [0x128e300] (96 bytes) marisa::grimoire::io::Reader::clear(void)
// void marisa::grimoire::io::Reader::clear(marisa::grimoire::io::Reader *this);
// [0x128e360] (31 bytes) marisa::grimoire::io::Reader::is_open(void)const
// bool marisa::grimoire::io::Reader::is_open(marisa::grimoire::io::Reader *this);
// [0x128e380] (77 bytes) marisa::grimoire::io::Reader::open_(char const*)
// FILE *marisa::grimoire::io::Reader::open_(marisa::grimoire::io::Reader *this, char *filename);
// [0x128e3d0] (123 bytes) marisa::grimoire::io::Reader::open(char const*)
// void marisa::grimoire::io::Reader::open(marisa::grimoire::io::Reader *this, char *a2);
// [0x128e450] (13 bytes) marisa::grimoire::io::Reader::open_(__sFILE *)
// uint32_t *marisa::grimoire::io::Reader::open_(uint32_t *a1, int a2);
// [0x128e460] (123 bytes) marisa::grimoire::io::Reader::open(__sFILE *)
// void marisa::grimoire::io::Reader::open(marisa::grimoire::io::Reader *a1, int a2);
// [0x128e4e0] (14 bytes) marisa::grimoire::io::Reader::open_(int)
// marisa::grimoire::io::Reader *marisa::grimoire::io::Reader::open_(marisa::grimoire::io::Reader *this, int a2);
// [0x128e4f0] (124 bytes) marisa::grimoire::io::Reader::open(int)
// void marisa::grimoire::io::Reader::open(marisa::grimoire::io::Reader *this, int a2);
// [0x128e570] (14 bytes) marisa::grimoire::io::Reader::open_(std::istream &)
// int marisa::grimoire::io::Reader::open_(int a1, int a2);
// [0x128e580] (112 bytes) marisa::grimoire::io::Reader::open(std::istream &)
// void marisa::grimoire::io::Reader::open(marisa::grimoire::io::Reader *a1, int a2);
// [0x128e5f0] (301 bytes) marisa::grimoire::io::Reader::read_data(void *,unsigned int)
// char marisa::grimoire::io::Reader::read_data(marisa::grimoire::io::Reader *this, char *ptr, size_t n);
// [0x128e720] (195 bytes) marisa::grimoire::io::Reader::seek(unsigned int)
// char marisa::grimoire::io::Reader::seek(marisa::grimoire::io::Reader *this, size_t a2);
// [0x128e840] (29 bytes) marisa::grimoire::io::Writer::Writer(void)
// struct marisa::grimoire::io::Writer *marisa::grimoire::io::Writer::Writer(marisa::grimoire::io::Writer *this);
// [0x128e860] (42 bytes) marisa::grimoire::io::Writer::~Writer()
// void marisa::grimoire::io::Writer::~Writer(FILE **this);
// [0x128e890] (59 bytes) marisa::grimoire::io::Writer::swap(marisa::grimoire::io::Writer&)
// marisa::grimoire::io::Writer *marisa::grimoire::io::Writer::swap( marisa::grimoire::io::Writer *this, marisa::grimoire::io::Writer *a2);
// [0x128e8d0] (96 bytes) marisa::grimoire::io::Writer::clear(void)
// void marisa::grimoire::io::Writer::clear(marisa::grimoire::io::Writer *this);
// [0x128e930] (31 bytes) marisa::grimoire::io::Writer::is_open(void)const
// bool marisa::grimoire::io::Writer::is_open(marisa::grimoire::io::Writer *this);
// [0x128e950] (77 bytes) marisa::grimoire::io::Writer::open_(char const*)
// FILE *marisa::grimoire::io::Writer::open_(marisa::grimoire::io::Writer *this, char *filename);
// [0x128e9a0] (123 bytes) marisa::grimoire::io::Writer::open(char const*)
// void marisa::grimoire::io::Writer::open(marisa::grimoire::io::Writer *this, char *a2);
// [0x128ea20] (13 bytes) marisa::grimoire::io::Writer::open_(__sFILE *)
// uint32_t *marisa::grimoire::io::Writer::open_(uint32_t *a1, int a2);
// [0x128ea30] (123 bytes) marisa::grimoire::io::Writer::open(__sFILE *)
// void marisa::grimoire::io::Writer::open(marisa::grimoire::io::Writer *a1, int a2);
// [0x128eab0] (14 bytes) marisa::grimoire::io::Writer::open_(int)
// marisa::grimoire::io::Writer *marisa::grimoire::io::Writer::open_(marisa::grimoire::io::Writer *this, int a2);
// [0x128eac0] (124 bytes) marisa::grimoire::io::Writer::open(int)
// void marisa::grimoire::io::Writer::open(marisa::grimoire::io::Writer *this, int a2);
// [0x128eb40] (14 bytes) marisa::grimoire::io::Writer::open_(std::ostream &)
// int marisa::grimoire::io::Writer::open_(int a1, int a2);
// [0x128eb50] (112 bytes) marisa::grimoire::io::Writer::open(std::ostream &)
// void marisa::grimoire::io::Writer::open(marisa::grimoire::io::Writer *a1, int a2);
// [0x128ebc0] (329 bytes) marisa::grimoire::io::Writer::write_data(void const*,unsigned int)
// char marisa::grimoire::io::Writer::write_data(marisa::grimoire::io::Writer *this, char *ptr, size_t a3);
// [0x128ed10] (251 bytes) marisa::grimoire::io::Writer::seek(unsigned int)
// char marisa::grimoire::io::Writer::seek(marisa::grimoire::io::Writer *this, size_t a2);
// [0x128f790] (236 bytes) marisa::grimoire::trie::LoudsTrie::total_size(void)const
// int marisa::grimoire::trie::LoudsTrie::total_size(marisa::grimoire::trie::LoudsTrie *this);
// [0x128f880] (563 bytes) marisa::grimoire::trie::LoudsTrie::io_size(void)const
// int marisa::grimoire::trie::LoudsTrie::io_size(marisa::grimoire::trie::LoudsTrie *this);
// [0x128fac0] (2268 bytes) marisa::grimoire::trie::LoudsTrie::swap(marisa::grimoire::trie::LoudsTrie&)
// marisa::grimoire::io::Mapper *marisa::grimoire::trie::LoudsTrie::swap( marisa::grimoire::trie::LoudsTrie *this, marisa::grimoire::trie::LoudsTrie *a2);
// [0x1290400] (714 bytes) marisa::grimoire::trie::LoudsTrie::reserve_cache(marisa::grimoire::trie::Config const&,unsigned int,unsigned int)
// unsigned int marisa::grimoire::trie::LoudsTrie::reserve_cache(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x1290730] (360 bytes) marisa::grimoire::trie::LoudsTrie::fill_cache(void)
// void marisa::grimoire::trie::LoudsTrie::fill_cache(marisa::grimoire::trie::LoudsTrie *this);
// [0x12908a0] (690 bytes) marisa::grimoire::trie::LoudsTrie::write_(marisa::grimoire::io::Writer &)const
// char marisa::grimoire::trie::LoudsTrie::write_( marisa::grimoire::trie::LoudsTrie *this, marisa::grimoire::io::Writer *a2);
// [0x1290b60] (91 bytes) marisa::grimoire::trie::LoudsTrie::write(marisa::grimoire::io::Writer &)const
// char marisa::grimoire::trie::LoudsTrie::write( marisa::grimoire::trie::LoudsTrie *this, marisa::grimoire::io::Writer *a2);
// [0x1290bc0] (1163 bytes) marisa::grimoire::trie::LoudsTrie::restore_(marisa::Agent &,unsigned int)const
// unsigned int marisa::grimoire::trie::LoudsTrie::restore_( marisa::grimoire::trie::LoudsTrie *this, marisa::Agent *a2, unsigned int a3);
// [0x1291050] (1100 bytes) marisa::grimoire::trie::LoudsTrie::reverse_lookup(marisa::Agent &)const
// int marisa::grimoire::trie::LoudsTrie::reverse_lookup( marisa::grimoire::trie::LoudsTrie *this, marisa::Agent *a2);
// [0x12914a0] (774 bytes) marisa::grimoire::trie::LoudsTrie::match_(marisa::Agent &,unsigned int)const
// int marisa::grimoire::trie::LoudsTrie::match_( marisa::grimoire::trie::LoudsTrie *this, marisa::Agent *a2, unsigned int a3);
// [0x12917b0] (232 bytes) marisa::grimoire::trie::LoudsTrie::common_prefix_search(marisa::Agent &)const
// int marisa::grimoire::trie::LoudsTrie::common_prefix_search( marisa::grimoire::trie::LoudsTrie *this, marisa::Agent *a2);
// [0x12918a0] (163 bytes) marisa::grimoire::trie::LoudsTrie::lookup(marisa::Agent &)const
// int marisa::grimoire::trie::LoudsTrie::lookup(marisa::grimoire::trie::LoudsTrie *this, marisa::Agent *a2);
// [0x1291950] (1155 bytes) marisa::grimoire::trie::LoudsTrie::prefix_match_(marisa::Agent &,unsigned int)const
// int marisa::grimoire::trie::LoudsTrie::prefix_match_( marisa::grimoire::trie::LoudsTrie *this, marisa::Agent *a2, unsigned int a3);
// [0x1291de0] (1603 bytes) marisa::grimoire::trie::LoudsTrie::predictive_search(marisa::Agent &)const
// int marisa::grimoire::trie::LoudsTrie::predictive_search( marisa::grimoire::trie::LoudsTrie *this, marisa::Agent *a2);
// [0x1292c60] (346 bytes) marisa::grimoire::trie::LoudsTrie::~LoudsTrie()
// void marisa::grimoire::trie::LoudsTrie::~LoudsTrie(marisa::grimoire::trie::LoudsTrie *this);
// [0x1292dc0] (1107 bytes) marisa::grimoire::trie::LoudsTrie::LoudsTrie(void)
// marisa::grimoire::trie::LoudsTrie *marisa::grimoire::trie::LoudsTrie::LoudsTrie( marisa::grimoire::trie::LoudsTrie *this);
// [0x1293220] (117 bytes) marisa::grimoire::trie::LoudsTrie::clear(void)
// void marisa::grimoire::trie::LoudsTrie::clear(marisa::grimoire::trie::LoudsTrie *this);
// [0x12932a0] (4291 bytes) marisa::grimoire::trie::LoudsTrie::map_(marisa::grimoire::io::Mapper &)
// int marisa::grimoire::trie::LoudsTrie::map_( marisa::grimoire::trie::LoudsTrie *this, marisa::grimoire::io::Mapper *a2);
// [0x1294370] (183 bytes) marisa::grimoire::trie::LoudsTrie::map(marisa::grimoire::io::Mapper &)
// void marisa::grimoire::trie::LoudsTrie::map( marisa::grimoire::trie::LoudsTrie *this, marisa::grimoire::io::Mapper *a2);
// [0x1294430] (1964 bytes) marisa::grimoire::trie::LoudsTrie::read_(marisa::grimoire::io::Reader &)
// int marisa::grimoire::trie::LoudsTrie::read_( marisa::grimoire::trie::LoudsTrie **this, marisa::grimoire::io::Reader *a2);
// [0x1294be0] (159 bytes) marisa::grimoire::trie::LoudsTrie::read(marisa::grimoire::io::Reader &)
// void marisa::grimoire::trie::LoudsTrie::read( marisa::grimoire::trie::LoudsTrie *this, marisa::grimoire::io::Reader *a2);
// [0x1296cb0] (2418 bytes) marisa::grimoire::trie::LoudsTrie::build_(marisa::Keyset &,marisa::grimoire::trie::Config const&)
// void marisa::grimoire::trie::LoudsTrie::build_(marisa::grimoire::trie::LoudsTrie *a1, int a2, uint32_t *a3);
// [0x1297630] (310 bytes) marisa::grimoire::trie::LoudsTrie::build(marisa::Keyset &,int)
// void marisa::grimoire::trie::LoudsTrie::build(marisa::grimoire::trie::LoudsTrie *a1, int a2, int a3);
// [0x1297770] (751 bytes) marisa::grimoire::vector::FlatVector::build(marisa::grimoire::vector::Vector<unsigned int> const&)
// void marisa::grimoire::vector::FlatVector::build( marisa::grimoire::vector::FlatVector *this, const marisa::grimoire::vector::Vector<unsigned int> *a2);
// [0x1297a60] (99 bytes) marisa::grimoire::vector::BitVector::~BitVector()
// void marisa::grimoire::vector::BitVector::~BitVector(void **this);
// [0x1297ad0] (1008 bytes) marisa::grimoire::vector::BitVector::build(bool,bool)
// void marisa::grimoire::vector::BitVector::build(marisa::grimoire::vector::BitVector *this, bool a2, bool a3);
// [0x1297ec0] (578 bytes) marisa::grimoire::vector::BitVector::write(marisa::grimoire::io::Writer &)const
// char marisa::grimoire::vector::BitVector::write( marisa::grimoire::vector::BitVector *this, marisa::grimoire::io::Writer *a2);
// [0x1298110] (65 bytes) marisa::grimoire::trie::Tail::~Tail()
// void marisa::grimoire::trie::Tail::~Tail(void **this);
// [0x1298160] (738 bytes) marisa::grimoire::trie::LoudsTrie::find_child(marisa::Agent &)const
// int marisa::grimoire::trie::LoudsTrie::find_child(marisa::grimoire::trie::LoudsTrie *this, marisa::Agent *a2);
// [0x1298450] (849 bytes) marisa::grimoire::trie::LoudsTrie::predictive_find_child(marisa::Agent &)const
// int marisa::grimoire::trie::LoudsTrie::predictive_find_child( marisa::grimoire::trie::LoudsTrie *this, marisa::Agent *a2);
// [0x12987b0] (40 bytes) marisa::grimoire::vector::Vector<unsigned int>::~Vector()
// void marisa::grimoire::vector::Vector<unsigned int>::~Vector(void **this);
// [0x12987e0] (40 bytes) marisa::grimoire::vector::Vector<marisa::grimoire::vector::RankIndex>::~Vector()
// void marisa::grimoire::vector::Vector<marisa::grimoire::vector::RankIndex>::~Vector(void **this);
// [0x1298810] (1872 bytes) marisa::grimoire::vector::BitVector::read(marisa::grimoire::io::Reader &)
// void marisa::grimoire::vector::BitVector::read( marisa::grimoire::vector::BitVector *this, marisa::grimoire::io::Reader *a2);
// [0x1298f60] (40 bytes) marisa::grimoire::vector::Vector<unsigned char>::~Vector()
// void marisa::grimoire::vector::Vector<unsigned char>::~Vector(void **this);
// [0x1298f90] (40 bytes) marisa::grimoire::vector::Vector<marisa::grimoire::trie::Cache>::~Vector()
// void marisa::grimoire::vector::Vector<marisa::grimoire::trie::Cache>::~Vector(void **this);
// [0x1298fc0] (40 bytes) marisa::grimoire::vector::Vector<marisa::grimoire::trie::Key>::~Vector()
// void marisa::grimoire::vector::Vector<marisa::grimoire::trie::Key>::~Vector(void **this);
// [0x1298ff0] (40 bytes) marisa::grimoire::vector::Vector<marisa::grimoire::trie::Entry>::~Vector()
// void marisa::grimoire::vector::Vector<marisa::grimoire::trie::Entry>::~Vector(void **this);
// [0x1299020] (40 bytes) marisa::grimoire::vector::Vector<marisa::grimoire::trie::ReverseKey>::~Vector()
// void marisa::grimoire::vector::Vector<marisa::grimoire::trie::ReverseKey>::~Vector(void **this);
// [0x1299050] (715 bytes) marisa::grimoire::vector::Vector<unsigned char>::read(marisa::grimoire::io::Reader &)
// void marisa::grimoire::vector::Vector<unsigned char>::read( marisa::grimoire::vector::Vector<unsigned char> *this, marisa::grimoire::io::Reader *a2);
// [0x1299320] (354 bytes) marisa::grimoire::vector::Vector<unsigned int>::realloc(unsigned int)
// void marisa::grimoire::vector::Vector<unsigned int>::realloc( marisa::grimoire::vector::Vector<unsigned int> *this, unsigned int a2);
// [0x1299490] (232 bytes) marisa::grimoire::vector::BitVector::push_back(bool)
// int marisa::grimoire::vector::BitVector::push_back(marisa::grimoire::vector::BitVector *this, bool a2);
// [0x129acf0] (595 bytes) marisa::grimoire::trie::WeightedRange * std::__rotate_adaptive<marisa::grimoire::trie::WeightedRange *,marisa::grimoire::trie::WeightedRange *,int>(marisa::grimoire::trie::WeightedRange *,marisa::grimoire::trie::WeightedRange *,marisa::grimoire::trie::WeightedRange *,int,int,marisa::grimoire::trie::WeightedRange *,int)
// char *std::__rotate_adaptive<marisa::grimoire::trie::WeightedRange *,marisa::grimoire::trie::WeightedRange *,int>( char *a1, char *a2, int a3, int a4, int a5, uint32_t *a6, int a7);
// [0x129ef00] (213 bytes) marisa::grimoire::trie::Tail::Tail(void)
// struct marisa::grimoire::trie::Tail *marisa::grimoire::trie::Tail::Tail(marisa::grimoire::trie::Tail *this);
// [0x129efe0] (958 bytes) marisa::grimoire::trie::Tail::restore(marisa::Agent &,unsigned int)const
// unsigned int marisa::grimoire::trie::Tail::restore( marisa::grimoire::trie::Tail *this, marisa::Agent *a2, unsigned int a3);
// [0x129f3a0] (173 bytes) marisa::grimoire::trie::Tail::match(marisa::Agent &,unsigned int)const
// int marisa::grimoire::trie::Tail::match(marisa::grimoire::trie::Tail *this, marisa::Agent *a2, unsigned int a3);
// [0x129f450] (1995 bytes) marisa::grimoire::trie::Tail::prefix_match(marisa::Agent &,unsigned int)const
// int marisa::grimoire::trie::Tail::prefix_match( marisa::grimoire::trie::Tail *this, marisa::Agent *a2, unsigned int a3);
// [0x129fc20] (423 bytes) marisa::grimoire::trie::Tail::swap(marisa::grimoire::trie::Tail&)
// marisa::grimoire::trie::Tail *marisa::grimoire::trie::Tail::swap( marisa::grimoire::trie::Tail *this, marisa::grimoire::trie::Tail *a2);
// [0x129fdd0] (174 bytes) marisa::grimoire::trie::Tail::clear(void)
// void marisa::grimoire::trie::Tail::clear(marisa::grimoire::trie::Tail *this);
// [0x129fe80] (680 bytes) marisa::grimoire::trie::Tail::write_(marisa::grimoire::io::Writer &)const
// char marisa::grimoire::trie::Tail::write_(marisa::grimoire::trie::Tail *this, marisa::grimoire::io::Writer *a2);
// [0x12a0130] (42 bytes) marisa::grimoire::trie::Tail::write(marisa::grimoire::io::Writer &)const
// char marisa::grimoire::trie::Tail::write(marisa::grimoire::trie::Tail *this, marisa::grimoire::io::Writer *a2);
// [0x12a0160] (2570 bytes) marisa::grimoire::trie::Tail::map_(marisa::grimoire::io::Mapper &)
// void marisa::grimoire::trie::Tail::map_(marisa::grimoire::trie::Tail *this, marisa::grimoire::io::Mapper *a2);
// [0x12a0b70] (189 bytes) marisa::grimoire::trie::Tail::map(marisa::grimoire::io::Mapper &)
// void marisa::grimoire::trie::Tail::map(marisa::grimoire::trie::Tail *this, marisa::grimoire::io::Mapper *a2);
// [0x12a0c30] (731 bytes) marisa::grimoire::trie::Tail::read_(marisa::grimoire::io::Reader &)
// void marisa::grimoire::trie::Tail::read_(marisa::grimoire::trie::Tail *this, marisa::grimoire::io::Reader *a2);
// [0x12a0f10] (189 bytes) marisa::grimoire::trie::Tail::read(marisa::grimoire::io::Reader &)
// void marisa::grimoire::trie::Tail::read(marisa::grimoire::trie::Tail *this, marisa::grimoire::io::Reader *a2);
// [0x12a0fd0] (3736 bytes) marisa::grimoire::trie::Tail::build_(marisa::grimoire::vector::Vector<marisa::grimoire::trie::Entry> &,marisa::grimoire::vector::Vector<unsigned int> *,marisa_tail_mode_)
// void marisa::grimoire::trie::Tail::build_(int a1, int a2, int a3, int a4);
// [0x12a1e70] (360 bytes) marisa::grimoire::trie::Tail::build(marisa::grimoire::vector::Vector<marisa::grimoire::trie::Entry> &,marisa::grimoire::vector::Vector<unsigned int> *,marisa_tail_mode_)
// void marisa::grimoire::trie::Tail::build(marisa::grimoire::trie::Tail *a1, int a2, int a3, int a4);
// [0x12a1fe0] (40 bytes) marisa::grimoire::vector::Vector<char>::~Vector()
// void marisa::grimoire::vector::Vector<char>::~Vector(void **this);
// [0x12a27b0] (73 bytes) marisa::grimoire::vector::BitVector::rank1(unsigned int)const
// void marisa::grimoire::vector::BitVector::rank1(marisa::grimoire::vector::BitVector *this, unsigned int a2);
// [0x12a2950] (799 bytes) marisa::grimoire::vector::BitVector::select0(unsigned int)const
// int marisa::grimoire::vector::BitVector::select0(marisa::grimoire::vector::BitVector *this, unsigned int a2);
// [0x12a2c70] (666 bytes) marisa::grimoire::vector::BitVector::select1(unsigned int)const
// int marisa::grimoire::vector::BitVector::select1(marisa::grimoire::vector::BitVector *this, unsigned int a2);
// [0x12a2f10] (4468 bytes) marisa::grimoire::vector::BitVector::build_index(marisa::grimoire::vector::BitVector const&,bool,bool)
// void marisa::grimoire::vector::BitVector::build_index( marisa::grimoire::vector::BitVector *this, const marisa::grimoire::vector::BitVector *a2, bool a3, bool a4);
