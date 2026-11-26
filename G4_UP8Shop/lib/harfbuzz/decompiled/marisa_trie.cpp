#include "Core/Utils/DecompTypes.h"
#include "marisa_trie.h"

// ============================================================================
// G4_UP8Shop/lib/harfbuzz/decompiled/marisa_trie.cpp
// Library: harfbuzz | Module: marisa_trie
// Binary Address Span: 0x128cc00 .. 0x12a2f10 (141 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x128cc00 (size: 53 bytes)
// Symbol:    _ZN6marisa5AgentC1Ev
// Demangled: marisa::Agent::Agent(void)
// ============================================================================
// Alternative name is '_ZN6marisa5AgentC2Ev'
struct marisa::Agent::Self *marisa::Agent::Agent(marisa::Agent::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: marisa::Agent::Destroy  (binary VA: 0x128cc40)
// Original: marisa::Agent::~Agent
// ----------------------------------------------------------------------------
void marisa::Agent::Destroy(marisa::Agent::Self *self)
{
  void **v1;

  v1 = *((void ***)self + 6);
  if ( v1 != nullptr )
  {
    if ( v1[6] != nullptr )
      opDeleteArray(v1[6]);
    if ( *v1 != nullptr )
      opDeleteArray(*v1);
    opDelete(v1);
  }
}

// ----------------------------------------------------------------------------
// Function: marisa::Agent::set_query  (binary VA: 0x128cca0)
// Original: marisa::Agent::set_query
// ----------------------------------------------------------------------------
int marisa::Agent::set_query(marisa::Agent::Self *self, const char *a2)
{
  int v2;
  int result;

  if ( a2 == nullptr )
    abort();
  v2 = *((uint32_t *)self + 6);
  if ( v2 != 0 )
    *(uint32_t *)(v2 + 60) = 0;
  result = 0;
  if ( *a2 != 0 )
  {
    do
      ++result;
    while ( a2[result] != 0 );
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::Agent::set_query  (binary VA: 0x128cd00)
// Original: marisa::Agent::set_query
// ----------------------------------------------------------------------------
marisa::Agent::Self * marisa::Agent::set_query(marisa::Agent::Self *self, const char *a2, unsigned int a3)
{
  marisa::Agent::Self *result;
  int v4;

  result = self;
  if ( a3 != 0 && a2 == nullptr )
    abort();
  v4 = *((uint32_t *)self + 6);
  if ( v4 != 0 )
    *(uint32_t *)(v4 + 60) = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::Agent::set_query  (binary VA: 0x128cd50)
// Original: marisa::Agent::set_query
// ----------------------------------------------------------------------------
marisa::Agent::Self * marisa::Agent::set_query(marisa::Agent::Self *self, unsigned int a2)
{
  marisa::Agent::Self *result;
  int v3;

  result = self;
  v3 = *((uint32_t *)self + 6);
  if ( v3 != 0 )
    *(uint32_t *)(v3 + 60) = 0;
  *((uint32_t *)self + 2) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::Agent::init_state  (binary VA: 0x128cd70)
// Original: marisa::Agent::init_state
// ----------------------------------------------------------------------------
int marisa::Agent::init_state(marisa::Agent::Self *self)
{
  int result;
  void **v2;

  if ( *((uint32_t *)self + 6) != 0 )
    goto LABEL_13;
  result = (int)(uintptr_t)(opNew(0x40u, (const std::nothrow_t *)&std::nothrow));
  if ( result != 0 )
  {
    *(uint32_t *)result = 0;
    *(uint32_t *)(result + 4) = 0;
    *(uint32_t *)(result + 8) = 0;
    *(uint32_t *)(result + 12) = 0;
    *(uint32_t *)(result + 16) = 0;
    *(uint8_t *)(result + 20) = 0;
    *(uint32_t *)(result + 24) = 0;
    *(uint32_t *)(result + 28) = 0;
    *(uint32_t *)(result + 32) = 0;
    *(uint32_t *)(result + 36) = 0;
    *(uint32_t *)(result + 40) = 0;
    *(uint8_t *)(result + 44) = 0;
    *(uint32_t *)(result + 48) = 0;
    *(uint32_t *)(result + 52) = 0;
    *(uint32_t *)(result + 56) = 0;
    *(uint32_t *)(result + 60) = 0;
    v2 = *((void ***)self + 6);
    if ( (void **)result == v2 )
      goto LABEL_13;
  }
  else
  {
    v2 = *((void ***)self + 6);
  }
  *((uint32_t *)self + 6) = result;
  if ( v2 != nullptr )
  {
    if ( v2[6] != nullptr )
      opDeleteArray(v2[6]);
    if ( *v2 != nullptr )
      opDeleteArray(*v2);
    opDelete(v2);
    result = *((uint32_t *)self + 6);
  }
  if ( result == 0 )
LABEL_13:
    abort();
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::Agent::swap  (binary VA: 0x128ce70)
// Original: marisa::Agent::swap
// ----------------------------------------------------------------------------
marisa::Agent::Self * marisa::Agent::swap(marisa::Agent::Self *self, marisa::Agent::Self *a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  *(uint32_t *)a2 = v3;
  v4 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)a2 + 1) = v4;
  v5 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)a2 + 2) = v5;
  v6 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)a2 + 3) = v6;
  v7 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)a2 + 4) = v7;
  v8 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint32_t *)a2 + 5) = v8;
  v9 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
  *((uint32_t *)a2 + 6) = v9;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: marisa::Agent::clear  (binary VA: 0x128ced0)
// Original: marisa::Agent::clear
// ----------------------------------------------------------------------------
void marisa::Agent::clear(marisa::Agent::Self *self)
{
  uint8_t v1[32];

  marisa::Agent::Agent((marisa::Agent::Self *)v1);
  marisa::Agent::swap((marisa::Agent::Self *)v1, self);
  marisa::Agent::Destroy((marisa::Agent::Self *)v1);
}



// ============================================================================
// Address:   0x128cf80 (size: 15 bytes)
// Symbol:    _ZN6marisa4TrieC1Ev
// Demangled: marisa::Trie::Trie(void)
// ============================================================================
// Alternative name is '_ZN6marisa4TrieC2Ev'
struct marisa::Trie::Self *marisa::Trie::Trie(marisa::Trie::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: marisa::Trie::Destroy  (binary VA: 0x128cf90)
// Original: marisa::Trie::~Trie
// ----------------------------------------------------------------------------
void marisa::Trie::Destroy(marisa::grimoire::trie::LoudsTrie::Self **self)
{
  marisa::grimoire::trie::LoudsTrie::Self *v1;

  v1 = *self;
  if ( *self != nullptr )
  {
    marisa::grimoire::trie::LoudsTrie::Destroy(*self);
    opDelete(v1);
  }
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::save  (binary VA: 0x128cfd0)
// Original: marisa::Trie::save
// ----------------------------------------------------------------------------
void marisa::Trie::save(marisa::grimoire::trie::LoudsTrie::Self **self, char *a2)
{
  uint8_t v2[28];

  if ( *self == nullptr || a2 == nullptr )
    abort();
  marisa::grimoire::io::Writer::Construct((marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::open((marisa::grimoire::io::Writer::Self *)v2, a2);
  marisa::grimoire::trie::LoudsTrie::write(*self, (marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::Destroy((marisa::grimoire::io::Writer::Self *)v2);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::write  (binary VA: 0x128d060)
// Original: marisa::Trie::write
// ----------------------------------------------------------------------------
void marisa::Trie::write(marisa::grimoire::trie::LoudsTrie::Self **self, int a2)
{
  uint8_t v2[28];

  if ( *self == nullptr || a2 == -1 )
    abort();
  marisa::grimoire::io::Writer::Construct((marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::open((marisa::grimoire::io::Writer::Self *)v2, a2);
  marisa::grimoire::trie::LoudsTrie::write(*self, (marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::Destroy((marisa::grimoire::io::Writer::Self *)v2);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::lookup  (binary VA: 0x128d0f0)
// Original: marisa::Trie::lookup
// ----------------------------------------------------------------------------
int marisa::Trie::lookup(marisa::grimoire::trie::LoudsTrie::Self **self, marisa::Agent::Self *a2)
{
  marisa::grimoire::trie::LoudsTrie::Self *v2;

  v2 = *self;
  if ( *self == nullptr )
    abort();
  if ( *((uint32_t *)a2 + 6) == 0 )
  {
    marisa::Agent::init_state(a2);
    v2 = *self;
  }
  return marisa::grimoire::trie::LoudsTrie::lookup(v2, a2);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::reverse_lookup  (binary VA: 0x128d160)
// Original: marisa::Trie::reverse_lookup
// ----------------------------------------------------------------------------
int marisa::Trie::reverse_lookup(marisa::grimoire::trie::LoudsTrie::Self **self, marisa::Agent::Self *a2)
{
  marisa::grimoire::trie::LoudsTrie::Self *v2;

  v2 = *self;
  if ( *self == nullptr )
    abort();
  if ( *((uint32_t *)a2 + 6) == 0 )
  {
    marisa::Agent::init_state(a2);
    v2 = *self;
  }
  return marisa::grimoire::trie::LoudsTrie::reverse_lookup(v2, a2);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::common_prefix_search  (binary VA: 0x128d1d0)
// Original: marisa::Trie::common_prefix_search
// ----------------------------------------------------------------------------
int marisa::Trie::common_prefix_search(marisa::grimoire::trie::LoudsTrie::Self **self, marisa::Agent::Self *a2)
{
  marisa::grimoire::trie::LoudsTrie::Self *v2;

  v2 = *self;
  if ( *self == nullptr )
    abort();
  if ( *((uint32_t *)a2 + 6) == 0 )
  {
    marisa::Agent::init_state(a2);
    v2 = *self;
  }
  return marisa::grimoire::trie::LoudsTrie::common_prefix_search(v2, a2);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::predictive_search  (binary VA: 0x128d240)
// Original: marisa::Trie::predictive_search
// ----------------------------------------------------------------------------
int marisa::Trie::predictive_search(marisa::grimoire::trie::LoudsTrie::Self **self, marisa::Agent::Self *a2)
{
  marisa::grimoire::trie::LoudsTrie::Self *v2;

  v2 = *self;
  if ( *self == nullptr )
    abort();
  if ( *((uint32_t *)a2 + 6) == 0 )
  {
    marisa::Agent::init_state(a2);
    v2 = *self;
  }
  return marisa::grimoire::trie::LoudsTrie::predictive_search(v2, a2);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::num_tries  (binary VA: 0x128d2b0)
// Original: marisa::Trie::num_tries
// ----------------------------------------------------------------------------
int marisa::Trie::num_tries(marisa::Trie::Self *self)
{
  if ( *(uint32_t *)self == 0 )
    abort();
  return *(uint32_t *)(*(uint32_t *)self + 536);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::num_keys  (binary VA: 0x128d2e0)
// Original: marisa::Trie::num_keys
// ----------------------------------------------------------------------------
int marisa::Trie::num_keys(marisa::Trie::Self *self)
{
  if ( *(uint32_t *)self == 0 )
    abort();
  return *(uint32_t *)(*(uint32_t *)self + 132);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::num_nodes  (binary VA: 0x128d310)
// Original: marisa::Trie::num_nodes
// ----------------------------------------------------------------------------
int marisa::Trie::num_nodes(marisa::Trie::Self *self)
{
  if ( *(uint32_t *)self == 0 )
    abort();
  return (*(uint32_t *)(*(uint32_t *)self + 24) >> 1) - 1;
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::tail_mode  (binary VA: 0x128d340)
// Original: marisa::Trie::tail_mode
// ----------------------------------------------------------------------------
int marisa::Trie::tail_mode(marisa::Trie::Self *self)
{
  if ( *(uint32_t *)self == 0 )
    abort();
  return *(uint32_t *)(*(uint32_t *)self + 544);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::node_order  (binary VA: 0x128d370)
// Original: marisa::Trie::node_order
// ----------------------------------------------------------------------------
int marisa::Trie::node_order(marisa::Trie::Self *self)
{
  if ( *(uint32_t *)self == 0 )
    abort();
  return *(uint32_t *)(*(uint32_t *)self + 548);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::empty  (binary VA: 0x128d3a0)
// Original: marisa::Trie::empty
// ----------------------------------------------------------------------------
bool marisa::Trie::empty(marisa::Trie::Self *self)
{
  if ( *(uint32_t *)self == 0 )
    abort();
  return *(uint32_t *)(*(uint32_t *)self + 132) == 0;
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::size  (binary VA: 0x128d3d0)
// Original: marisa::Trie::size
// ----------------------------------------------------------------------------
int marisa::Trie::size(marisa::Trie::Self *self)
{
  if ( *(uint32_t *)self == 0 )
    abort();
  return *(uint32_t *)(*(uint32_t *)self + 132);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::total_size  (binary VA: 0x128d400)
// Original: marisa::Trie::total_size
// ----------------------------------------------------------------------------
int marisa::Trie::total_size(marisa::grimoire::trie::LoudsTrie::Self **self)
{
  if ( *self == nullptr )
    abort();
  return marisa::grimoire::trie::LoudsTrie::total_size(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::io_size  (binary VA: 0x128d430)
// Original: marisa::Trie::io_size
// ----------------------------------------------------------------------------
int marisa::Trie::io_size(marisa::grimoire::trie::LoudsTrie::Self **self)
{
  if ( *self == nullptr )
    abort();
  return marisa::grimoire::trie::LoudsTrie::io_size(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::swap  (binary VA: 0x128d460)
// Original: marisa::Trie::swap
// ----------------------------------------------------------------------------
marisa::Trie::Self * marisa::Trie::swap(marisa::Trie::Self *self, marisa::Trie::Self *a2)
{
  int v3;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  *(uint32_t *)a2 = v3;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::clear  (binary VA: 0x128d480)
// Original: marisa::Trie::clear
// ----------------------------------------------------------------------------
void marisa::Trie::clear(marisa::Trie::Self *self)
{
  marisa::grimoire::trie::LoudsTrie::Self *v1[2];

  marisa::Trie::Trie((marisa::Trie::Self *)v1);
  marisa::Trie::swap((marisa::Trie::Self *)v1, self);
  marisa::Trie::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: marisa::fwrite  (binary VA: 0x128d4e0)
// Original: marisa::fwrite
// ----------------------------------------------------------------------------
void marisa::fwrite(int a1, marisa::grimoire::trie::LoudsTrie::Self **a2)
{
  uint8_t v2[28];

  if ( a1 == 0 || *a2 == nullptr )
    abort();
  marisa::grimoire::io::Writer::Construct((marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::open((marisa::grimoire::io::Writer::Self *)v2, a1);
  marisa::grimoire::trie::LoudsTrie::write(*a2, (marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::Destroy((marisa::grimoire::io::Writer::Self *)v2);
}

// ----------------------------------------------------------------------------
// Function: marisa::write  (binary VA: 0x128d570)
// Original: marisa::write
// ----------------------------------------------------------------------------
int marisa::write(int a1, marisa::grimoire::trie::LoudsTrie::Self **a2)
{
  uint8_t v3[28];

  if ( *a2 == nullptr )
    abort();
  marisa::grimoire::io::Writer::Construct((marisa::grimoire::io::Writer::Self *)v3);
  marisa::grimoire::io::Writer::open((marisa::grimoire::io::Writer::Self *)v3, a1);
  marisa::grimoire::trie::LoudsTrie::write(*a2, (marisa::grimoire::io::Writer::Self *)v3);
  marisa::grimoire::io::Writer::Destroy((marisa::grimoire::io::Writer::Self *)v3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: marisa::opShl  (binary VA: 0x128d600)
// Original: marisa::operator<<
// ----------------------------------------------------------------------------
int marisa::opShl(int a1, marisa::grimoire::trie::LoudsTrie::Self **a2)
{
  return marisa::write(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: marisa::read  (binary VA: 0x128d630)
// Original: marisa::read
// ----------------------------------------------------------------------------
int marisa::read(int a1, marisa::grimoire::trie::LoudsTrie::Self **a2)
{
  marisa::grimoire::trie::LoudsTrie::Self *v2;
  marisa::grimoire::trie::LoudsTrie::Self *v3;
  marisa::grimoire::trie::LoudsTrie::Self *v4;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v6;
  typedef uint8_t _g4_t_v7[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  if ( a2 == nullptr )
    abort();
  v2 = (marisa::grimoire::trie::LoudsTrie::Self *)opNew(0x23Cu, (const std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 == nullptr )
    abort();
  marisa::grimoire::trie::LoudsTrie::Construct(v2);
  marisa::grimoire::io::Reader::Construct((marisa::grimoire::io::Reader::Self *)v7);
  marisa::grimoire::io::Reader::open((marisa::grimoire::io::Reader::Self *)v7, a1);
  marisa::grimoire::trie::LoudsTrie::read(v3, (marisa::grimoire::io::Reader::Self *)v7);
  v4 = *a2;
  *a2 = v3;
  v6 = v4;
  marisa::grimoire::io::Reader::Destroy((marisa::grimoire::io::Reader::Self *)v7);
  if ( v6 != nullptr )
  {
    marisa::grimoire::trie::LoudsTrie::Destroy(v6);
    opDelete(v6);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: marisa::opShr  (binary VA: 0x128d750)
// Original: marisa::operator>>
// ----------------------------------------------------------------------------
int marisa::opShr(int a1, marisa::grimoire::trie::LoudsTrie::Self **a2)
{
  return marisa::read(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: marisa::fread  (binary VA: 0x128d780)
// Original: marisa::fread
// ----------------------------------------------------------------------------
void marisa::fread(int a1, marisa::grimoire::trie::LoudsTrie::Self **a2)
{
  marisa::grimoire::trie::LoudsTrie::Self *v2;
  marisa::grimoire::trie::LoudsTrie::Self *v3;
  marisa::grimoire::trie::LoudsTrie::Self *v4;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v5;
  typedef uint8_t _g4_t_v6[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  if ( a1 == 0 || a2 == nullptr )
    abort();
  v2 = (marisa::grimoire::trie::LoudsTrie::Self *)opNew(0x23Cu, (const std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 == nullptr )
    abort();
  marisa::grimoire::trie::LoudsTrie::Construct(v2);
  marisa::grimoire::io::Reader::Construct((marisa::grimoire::io::Reader::Self *)v6);
  marisa::grimoire::io::Reader::open((marisa::grimoire::io::Reader::Self *)v6, a1);
  marisa::grimoire::trie::LoudsTrie::read(v3, (marisa::grimoire::io::Reader::Self *)v6);
  v4 = *a2;
  *a2 = v3;
  v5 = v4;
  marisa::grimoire::io::Reader::Destroy((marisa::grimoire::io::Reader::Self *)v6);
  if ( v5 != nullptr )
  {
    marisa::grimoire::trie::LoudsTrie::Destroy(v5);
    opDelete(v5);
  }
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::read  (binary VA: 0x128d8a0)
// Original: marisa::Trie::read
// ----------------------------------------------------------------------------
void marisa::Trie::read(marisa::grimoire::trie::LoudsTrie::Self **self, int a2)
{
  marisa::grimoire::trie::LoudsTrie::Self *v2;
  marisa::grimoire::trie::LoudsTrie::Self *v3;
  marisa::grimoire::trie::LoudsTrie::Self *v4;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v5;
  typedef uint8_t _g4_t_v6[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  if ( a2 == -1 )
    abort();
  v2 = (marisa::grimoire::trie::LoudsTrie::Self *)opNew(0x23Cu, (const std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 == nullptr )
    abort();
  marisa::grimoire::trie::LoudsTrie::Construct(v2);
  marisa::grimoire::io::Reader::Construct((marisa::grimoire::io::Reader::Self *)v6);
  marisa::grimoire::io::Reader::open((marisa::grimoire::io::Reader::Self *)v6, a2);
  marisa::grimoire::trie::LoudsTrie::read(v3, (marisa::grimoire::io::Reader::Self *)v6);
  v4 = *self;
  *self = v3;
  v5 = v4;
  marisa::grimoire::io::Reader::Destroy((marisa::grimoire::io::Reader::Self *)v6);
  if ( v5 != nullptr )
  {
    marisa::grimoire::trie::LoudsTrie::Destroy(v5);
    opDelete(v5);
  }
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::load  (binary VA: 0x128d9c0)
// Original: marisa::Trie::load
// ----------------------------------------------------------------------------
void marisa::Trie::load(marisa::grimoire::trie::LoudsTrie::Self **self, char *a2)
{
  marisa::grimoire::trie::LoudsTrie::Self *v2;
  marisa::grimoire::trie::LoudsTrie::Self *v3;
  marisa::grimoire::trie::LoudsTrie::Self *v4;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v5;
  typedef uint8_t _g4_t_v6[16];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  if ( a2 == nullptr )
    abort();
  v2 = (marisa::grimoire::trie::LoudsTrie::Self *)opNew(0x23Cu, (const std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 == nullptr )
    abort();
  marisa::grimoire::trie::LoudsTrie::Construct(v2);
  marisa::grimoire::io::Reader::Construct((marisa::grimoire::io::Reader::Self *)v6);
  marisa::grimoire::io::Reader::open((marisa::grimoire::io::Reader::Self *)v6, a2);
  marisa::grimoire::trie::LoudsTrie::read(v3, (marisa::grimoire::io::Reader::Self *)v6);
  v4 = *self;
  *self = v3;
  v5 = v4;
  marisa::grimoire::io::Reader::Destroy((marisa::grimoire::io::Reader::Self *)v6);
  if ( v5 != nullptr )
  {
    marisa::grimoire::trie::LoudsTrie::Destroy(v5);
    opDelete(v5);
  }
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::map  (binary VA: 0x128dae0)
// Original: marisa::Trie::map
// ----------------------------------------------------------------------------
void marisa::Trie::map(marisa::grimoire::trie::LoudsTrie::Self **self, void *a2, unsigned int a3)
{
  marisa::grimoire::trie::LoudsTrie::Self *v3;
  marisa::grimoire::trie::LoudsTrie::Self *v4;
  marisa::grimoire::trie::LoudsTrie::Self *v5;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v6;
  typedef uint8_t _g4_t_v7[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  if ( a3 != 0 && a2 == nullptr )
    abort();
  v3 = (marisa::grimoire::trie::LoudsTrie::Self *)opNew(0x23Cu, (const std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 == nullptr )
    abort();
  marisa::grimoire::trie::LoudsTrie::Construct(v3);
  marisa::grimoire::io::Mapper::Construct((marisa::grimoire::io::Mapper::Self *)v7);
  marisa::grimoire::io::Mapper::open((marisa::grimoire::io::Mapper::Self *)v7, a2, a3);
  marisa::grimoire::trie::LoudsTrie::map(v4, (marisa::grimoire::io::Mapper::Self *)v7);
  v5 = *self;
  *self = v4;
  v6 = v5;
  marisa::grimoire::io::Mapper::Destroy((marisa::grimoire::io::Mapper::Self *)v7);
  if ( v6 != nullptr )
  {
    marisa::grimoire::trie::LoudsTrie::Destroy(v6);
    opDelete(v6);
  }
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::mmap  (binary VA: 0x128dc00)
// Original: marisa::Trie::mmap
// ----------------------------------------------------------------------------
void marisa::Trie::mmap(marisa::grimoire::trie::LoudsTrie::Self **self, char *file)
{
  marisa::grimoire::trie::LoudsTrie::Self *v2;
  marisa::grimoire::trie::LoudsTrie::Self *v3;
  marisa::grimoire::trie::LoudsTrie::Self *v4;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v5;
  typedef uint8_t _g4_t_v6[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  if ( file == nullptr )
    abort();
  v2 = (marisa::grimoire::trie::LoudsTrie::Self *)opNew(0x23Cu, (const std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 == nullptr )
    abort();
  marisa::grimoire::trie::LoudsTrie::Construct(v2);
  marisa::grimoire::io::Mapper::Construct((marisa::grimoire::io::Mapper::Self *)v6);
  marisa::grimoire::io::Mapper::open((marisa::grimoire::io::Mapper::Self *)v6, file);
  marisa::grimoire::trie::LoudsTrie::map(v3, (marisa::grimoire::io::Mapper::Self *)v6);
  v4 = *self;
  *self = v3;
  v5 = v4;
  marisa::grimoire::io::Mapper::Destroy((marisa::grimoire::io::Mapper::Self *)v6);
  if ( v5 != nullptr )
  {
    marisa::grimoire::trie::LoudsTrie::Destroy(v5);
    opDelete(v5);
  }
}

// ----------------------------------------------------------------------------
// Function: marisa::Trie::build  (binary VA: 0x128dd20)
// Original: marisa::Trie::build
// ----------------------------------------------------------------------------
void marisa::Trie::build(marisa::grimoire::trie::LoudsTrie::Self **a1, int a2, int a3)
{
  marisa::grimoire::trie::LoudsTrie::Self *v3;
  marisa::grimoire::trie::LoudsTrie::Self *v4;
  marisa::grimoire::trie::LoudsTrie::Self *v5;
  bool v6;
  marisa::grimoire::trie::LoudsTrie::Self *v7;

  v3 = (marisa::grimoire::trie::LoudsTrie::Self *)opNew(0x23Cu, (const std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 == nullptr )
    abort();
  marisa::grimoire::trie::LoudsTrie::Construct(v3);
  v7 = v4;
  marisa::grimoire::trie::LoudsTrie::build(v4, a2, a3);
  v5 = *a1;
  v6 = *a1 == nullptr;
  *a1 = v7;
  if ( !v6 )
  {
    marisa::grimoire::trie::LoudsTrie::Destroy(v5);
    opDelete(v5);
  }
}

// ----------------------------------------------------------------------------
// Function: marisa::scoped_ptr_marisa_grimoire_trie_Lou_72dfd4::Destroy  (binary VA: 0x128ddf0)
// Original: marisa::scoped_ptr<marisa::grimoire::trie::LoudsTrie>::~scoped_ptr
// ----------------------------------------------------------------------------
void marisa::scoped_ptr_marisa_grimoire_trie_Lou_72dfd4::Destroy(marisa::grimoire::trie::LoudsTrie::Self **self)
{
  marisa::grimoire::trie::LoudsTrie::Self *v1;

  v1 = *self;
  if ( *self != nullptr )
  {
    marisa::grimoire::trie::LoudsTrie::Destroy(*self);
    opDelete(v1);
  }
}



// ============================================================================
// Address:   0x128de80 (size: 39 bytes)
// Symbol:    _ZN6marisa8grimoire2io6MapperC1Ev
// Demangled: marisa::grimoire::io::Mapper::Mapper(void)
// ============================================================================
// Alternative name is '_ZN6marisa8grimoire2io6MapperC2Ev'
marisa::grimoire::io::Mapper::Self *marisa::grimoire::io::Mapper::Construct(marisa::grimoire::io::Mapper::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = -1;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = -1;
  return self;
}
// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Mapper::Destroy  (binary VA: 0x128deb0)
// Original: marisa::grimoire::io::Mapper::~Mapper
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Mapper::Destroy(marisa::grimoire::io::Mapper::Self *self)
{
  if ( *((uint32_t *)self + 1) != -1 )
    munmap(*((void **)self + 1), *((uint32_t *)self + 3));
  if ( *((uint32_t *)self + 4) != -1 )
    close(*((uint32_t *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Mapper::is_open  (binary VA: 0x128df00)
// Original: marisa::grimoire::io::Mapper::is_open
// ----------------------------------------------------------------------------
bool marisa::grimoire::io::Mapper::is_open(marisa::grimoire::io::Mapper::Self *self)
{
  return *(uint32_t *)self != 0;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Mapper::swap  (binary VA: 0x128df10)
// Original: marisa::grimoire::io::Mapper::swap
// ----------------------------------------------------------------------------
marisa::grimoire::io::Mapper::Self * marisa::grimoire::io::Mapper::swap(marisa::grimoire::io::Mapper::Self *self, marisa::grimoire::io::Mapper::Self *a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  *(uint32_t *)a2 = v3;
  v4 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)a2 + 2) = v4;
  v5 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)a2 + 1) = v5;
  v6 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)a2 + 3) = v6;
  v7 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)a2 + 4) = v7;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Mapper::clear  (binary VA: 0x128df60)
// Original: marisa::grimoire::io::Mapper::clear
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Mapper::clear(marisa::grimoire::io::Mapper::Self *self)
{
  uint8_t v1[24];

  marisa::grimoire::io::Mapper::Construct((marisa::grimoire::io::Mapper::Self *)v1);
  marisa::grimoire::io::Mapper::swap((marisa::grimoire::io::Mapper::Self *)v1, self);
  marisa::grimoire::io::Mapper::Destroy((marisa::grimoire::io::Mapper::Self *)v1);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Mapper::map_data  (binary VA: 0x128dfc0)
// Original: marisa::grimoire::io::Mapper::map_data
// ----------------------------------------------------------------------------
int marisa::grimoire::io::Mapper::map_data(marisa::grimoire::io::Mapper::Self *self, unsigned int a2)
{
  int v2;
  int result;

  if ( !marisa::grimoire::io::Mapper::is_open(self) || (v2 = *((uint32_t *)self + 2)) < a2 )
    abort();
  result = *(uint32_t *)self;
  *((uint32_t *)self + 2) = v2 - a2;
  *(uint32_t *)self = result + a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Mapper::seek  (binary VA: 0x128e020)
// Original: marisa::grimoire::io::Mapper::seek
// ----------------------------------------------------------------------------
int marisa::grimoire::io::Mapper::seek(marisa::grimoire::io::Mapper::Self *self, unsigned int a2)
{
  if ( !marisa::grimoire::io::Mapper::is_open(self) || *((uint32_t *)self + 2) < a2 )
    abort();
  return marisa::grimoire::io::Mapper::map_data(self, a2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Mapper::open  (binary VA: 0x128e080)
// Original: marisa::grimoire::io::Mapper::open_
// ----------------------------------------------------------------------------
int marisa::grimoire::io::Mapper::open(marisa::grimoire::io::Mapper::Self *self, char *file)
{
  int v2;
  void *v3;
  int result;
  struct stat buf;

  if ( stat(file, &buf) != 0
    || buf.st_blksize != 0
    || (*((uint32_t *)self + 3) = buf.st_size, v2 = open(file, 0), *((uint32_t *)self + 4) = v2, v2 == -1)
    || (v3 = mmap(nullptr, *((uint32_t *)self + 3), 1, 1, v2, 0), *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v3), v3 == (void *)-1) )
  {
    abort();
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  result = *((uint32_t *)self + 3);
  *((uint32_t *)self + 2) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Mapper::open_ea128e140  (binary VA: 0x128e140)
// Original: marisa::grimoire::io::Mapper::open
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Mapper::open_ea128e140(marisa::grimoire::io::Mapper::Self *self, char *file)
{
  uint8_t v2[20];

  if ( file == nullptr )
    abort();
  marisa::grimoire::io::Mapper::Construct((marisa::grimoire::io::Mapper::Self *)v2);
  marisa::grimoire::io::Mapper::open((marisa::grimoire::io::Mapper::Self *)v2, file);
  marisa::grimoire::io::Mapper::swap(self, (marisa::grimoire::io::Mapper::Self *)v2);
  marisa::grimoire::io::Mapper::Destroy((marisa::grimoire::io::Mapper::Self *)v2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Mapper::open  (binary VA: 0x128e1c0)
// Original: marisa::grimoire::io::Mapper::open_
// ----------------------------------------------------------------------------
marisa::grimoire::io::Mapper::Self * marisa::grimoire::io::Mapper::open(marisa::grimoire::io::Mapper::Self *self, const void *a2, unsigned int a3)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 2) = a3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Mapper::open  (binary VA: 0x128e1e0)
// Original: marisa::grimoire::io::Mapper::open
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Mapper::open(marisa::grimoire::io::Mapper::Self *self, void *a2, unsigned int a3)
{
  uint8_t v3[32];

  if ( a3 != 0 && a2 == nullptr )
    abort();
  marisa::grimoire::io::Mapper::Construct((marisa::grimoire::io::Mapper::Self *)v3);
  marisa::grimoire::io::Mapper::open((marisa::grimoire::io::Mapper::Self *)v3, a2, a3);
  marisa::grimoire::io::Mapper::swap(self, (marisa::grimoire::io::Mapper::Self *)v3);
  marisa::grimoire::io::Mapper::Destroy((marisa::grimoire::io::Mapper::Self *)v3);
}



// ============================================================================
// Address:   0x128e270 (size: 29 bytes)
// Symbol:    _ZN6marisa8grimoire2io6ReaderC1Ev
// Demangled: marisa::grimoire::io::Reader::Reader(void)
// ============================================================================
// Alternative name is '_ZN6marisa8grimoire2io6ReaderC2Ev'
marisa::grimoire::io::Reader::Self *marisa::grimoire::io::Reader::Construct(marisa::grimoire::io::Reader::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = -1;
  *((uint32_t *)self + 2) = 0;
  *((uint8_t *)self + 12) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::Destroy  (binary VA: 0x128e290)
// Original: marisa::grimoire::io::Reader::~Reader
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Reader::Destroy(FILE **self)
{
  if ( *((uint8_t *)self + 12) != 0 )
    fclose(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::swap  (binary VA: 0x128e2c0)
// Original: marisa::grimoire::io::Reader::swap
// ----------------------------------------------------------------------------
marisa::grimoire::io::Reader::Self * marisa::grimoire::io::Reader::swap(marisa::grimoire::io::Reader::Self *self, marisa::grimoire::io::Reader::Self *a2)
{
  int v3;
  int v4;
  int v5;
  char v6; // si

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  *(uint32_t *)a2 = v3;
  v4 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)a2 + 1) = v4;
  v5 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)a2 + 2) = v5;
  v6 = *((uint8_t *)self + 12);
  *((uint8_t *)self + 12) = *((uint8_t *)a2 + 12);
  *((uint8_t *)a2 + 12) = v6;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::clear  (binary VA: 0x128e300)
// Original: marisa::grimoire::io::Reader::clear
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Reader::clear(marisa::grimoire::io::Reader::Self *self)
{
  FILE *v1[5];

  marisa::grimoire::io::Reader::Construct((marisa::grimoire::io::Reader::Self *)v1);
  marisa::grimoire::io::Reader::swap((marisa::grimoire::io::Reader::Self *)v1, self);
  marisa::grimoire::io::Reader::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::is_open  (binary VA: 0x128e360)
// Original: marisa::grimoire::io::Reader::is_open
// ----------------------------------------------------------------------------
bool marisa::grimoire::io::Reader::is_open(marisa::grimoire::io::Reader::Self *self)
{
  bool result;

  result = true;
  if ( *(uint32_t *)self == 0 && *((uint32_t *)self + 1) == -1 )
    return *((uint32_t *)self + 2) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::open  (binary VA: 0x128e380)
// Original: marisa::grimoire::io::Reader::open_
// ----------------------------------------------------------------------------
FILE * marisa::grimoire::io::Reader::open(marisa::grimoire::io::Reader::Self *self, char *filename)
{
  FILE *result;

  result = fopen(filename, "rb");
  if ( result == nullptr )
    abort();
  *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  *((uint8_t *)self + 12) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::open_ea128e3d0  (binary VA: 0x128e3d0)
// Original: marisa::grimoire::io::Reader::open
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Reader::open_ea128e3d0(marisa::grimoire::io::Reader::Self *self, char *a2)
{
  FILE *v2[4];

  if ( a2 == nullptr )
    abort();
  marisa::grimoire::io::Reader::Construct((marisa::grimoire::io::Reader::Self *)v2);
  marisa::grimoire::io::Reader::open((marisa::grimoire::io::Reader::Self *)v2, a2);
  marisa::grimoire::io::Reader::swap(self, (marisa::grimoire::io::Reader::Self *)v2);
  marisa::grimoire::io::Reader::Destroy(v2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::open  (binary VA: 0x128e450)
// Original: marisa::grimoire::io::Reader::open_
// ----------------------------------------------------------------------------
uint32_t * marisa::grimoire::io::Reader::open(uint32_t *a1, int a2)
{
  *a1 = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::open  (binary VA: 0x128e460)
// Original: marisa::grimoire::io::Reader::open
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Reader::open(marisa::grimoire::io::Reader::Self *a1, int a2)
{
  FILE *v2[4];

  if ( a2 == 0 )
    abort();
  marisa::grimoire::io::Reader::Construct((marisa::grimoire::io::Reader::Self *)v2);
  marisa::grimoire::io::Reader::open(v2, a2);
  marisa::grimoire::io::Reader::swap(a1, (marisa::grimoire::io::Reader::Self *)v2);
  marisa::grimoire::io::Reader::Destroy(v2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::open_ea128e4e0  (binary VA: 0x128e4e0)
// Original: marisa::grimoire::io::Reader::open_
// ----------------------------------------------------------------------------
marisa::grimoire::io::Reader::Self * marisa::grimoire::io::Reader::open_ea128e4e0(marisa::grimoire::io::Reader::Self *self, int a2)
{
  *((uint32_t *)self + 1) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::open_ea128e4f0  (binary VA: 0x128e4f0)
// Original: marisa::grimoire::io::Reader::open
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Reader::open_ea128e4f0(marisa::grimoire::io::Reader::Self *self, int a2)
{
  FILE *v2[4];

  if ( a2 == -1 )
    abort();
  marisa::grimoire::io::Reader::Construct((marisa::grimoire::io::Reader::Self *)v2);
  marisa::grimoire::io::Reader::open((marisa::grimoire::io::Reader::Self *)v2, a2);
  marisa::grimoire::io::Reader::swap(self, (marisa::grimoire::io::Reader::Self *)v2);
  marisa::grimoire::io::Reader::Destroy(v2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::open  (binary VA: 0x128e570)
// Original: marisa::grimoire::io::Reader::open_
// ----------------------------------------------------------------------------
int marisa::grimoire::io::Reader::open(int a1, int a2)
{
  *(uint32_t *)(a1 + 8) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::open_ea128e580  (binary VA: 0x128e580)
// Original: marisa::grimoire::io::Reader::open
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Reader::open_ea128e580(marisa::grimoire::io::Reader::Self *a1, int a2)
{
  FILE *v2[5];

  marisa::grimoire::io::Reader::Construct((marisa::grimoire::io::Reader::Self *)v2);
  marisa::grimoire::io::Reader::open((int)(uintptr_t)(v2), a2);
  marisa::grimoire::io::Reader::swap(a1, (marisa::grimoire::io::Reader::Self *)v2);
  marisa::grimoire::io::Reader::Destroy(v2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::read_data  (binary VA: 0x128e5f0)
// Original: marisa::grimoire::io::Reader::read_data
// ----------------------------------------------------------------------------
char marisa::grimoire::io::Reader::read_data(marisa::grimoire::io::Reader::Self *self, char *ptr, size_t n)
{
  char *buf;
  unsigned int v4;
  int v5;
  size_t nbytes;

  buf = ptr;
  v4 = n;
  LOBYTE(v5) = marisa::grimoire::io::Reader::is_open(self);
  if ( (uint8_t)v5 == 0 )
    goto LABEL_15;
  if ( n != 0 )
  {
    if ( *((uint32_t *)self + 1) != -1 )
    {
      while ( 1 )
      {
        if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_5CAA4)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4)) == 0 && _cxa_guard_acquire(((g4_cxa_guard_t *)(&dword_2116AA0))) != 0 )
        {
          dword_2116AA8 = 0x7FFFFFFF;
          _cxa_guard_release(((g4_cxa_guard_t *)(&dword_2116AA0)));
        }
        nbytes = dword_2116AA8;
        if ( v4 <= dword_2116AA8 )
          nbytes = v4;
        v5 = ::read(*((uint32_t *)self + 1), buf, nbytes);
        if ( v5 <= 0 )
          break;
        buf += v5;
        v4 -= v5;
        if ( v4 == 0 )
          return v5;
      }
LABEL_15:
      abort();
    }
    if ( *(uint32_t *)self != 0 )
    {
      v5 = fread(ptr, 1u, n, *(FILE **)self);
      if ( n != v5 )
        goto LABEL_15;
    }
    else
    {
      v5 = *((uint32_t *)self + 2);
      if ( v5 != 0 )
      {
        v5 = (int)(uintptr_t)(sub_1913BC0(v5, ptr, n));
        if ( (*(uint8_t *)(v5 + *(uint32_t *)(*(uint32_t *)v5 - 12) + 20) & 5) != 0 )
          abort();
      }
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Reader::seek  (binary VA: 0x128e720)
// Original: marisa::grimoire::io::Reader::seek
// ----------------------------------------------------------------------------
char marisa::grimoire::io::Reader::seek(marisa::grimoire::io::Reader::Self *self, size_t a2)
{
  size_t v2;
  char result;
  size_t n;
  char ptr[1036];

  v2 = a2;
  result = marisa::grimoire::io::Reader::is_open(self);
  if ( result == 0 )
    abort();
  if ( a2 != 0 )
  {
    if ( a2 <= 0x10 )
    {
      return marisa::grimoire::io::Reader::read_data(self, ptr, a2);
    }
    else
    {
      do
      {
        n = 1024;
        if ( v2 <= 0x400 )
          n = v2;
        result = marisa::grimoire::io::Reader::read_data(self, ptr, n);
        v2 -= n;
      }
      while ( v2 != 0 );
    }
  }
  return result;
}



// ============================================================================
// Address:   0x128e840 (size: 29 bytes)
// Symbol:    _ZN6marisa8grimoire2io6WriterC1Ev
// Demangled: marisa::grimoire::io::Writer::Writer(void)
// ============================================================================
// Alternative name is '_ZN6marisa8grimoire2io6WriterC2Ev'
marisa::grimoire::io::Writer::Self *marisa::grimoire::io::Writer::Construct(marisa::grimoire::io::Writer::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = -1;
  *((uint32_t *)self + 2) = 0;
  *((uint8_t *)self + 12) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::Destroy  (binary VA: 0x128e860)
// Original: marisa::grimoire::io::Writer::~Writer
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Writer::Destroy(FILE **self)
{
  if ( *((uint8_t *)self + 12) != 0 )
    fclose(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::swap  (binary VA: 0x128e890)
// Original: marisa::grimoire::io::Writer::swap
// ----------------------------------------------------------------------------
marisa::grimoire::io::Writer::Self * marisa::grimoire::io::Writer::swap(marisa::grimoire::io::Writer::Self *self, marisa::grimoire::io::Writer::Self *a2)
{
  int v3;
  int v4;
  int v5;
  char v6; // si

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  *(uint32_t *)a2 = v3;
  v4 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)a2 + 1) = v4;
  v5 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)a2 + 2) = v5;
  v6 = *((uint8_t *)self + 12);
  *((uint8_t *)self + 12) = *((uint8_t *)a2 + 12);
  *((uint8_t *)a2 + 12) = v6;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::clear  (binary VA: 0x128e8d0)
// Original: marisa::grimoire::io::Writer::clear
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Writer::clear(marisa::grimoire::io::Writer::Self *self)
{
  FILE *v1[5];

  marisa::grimoire::io::Writer::Construct((marisa::grimoire::io::Writer::Self *)v1);
  marisa::grimoire::io::Writer::swap((marisa::grimoire::io::Writer::Self *)v1, self);
  marisa::grimoire::io::Writer::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::is_open  (binary VA: 0x128e930)
// Original: marisa::grimoire::io::Writer::is_open
// ----------------------------------------------------------------------------
bool marisa::grimoire::io::Writer::is_open(marisa::grimoire::io::Writer::Self *self)
{
  bool result;

  result = true;
  if ( *(uint32_t *)self == 0 && *((uint32_t *)self + 1) == -1 )
    return *((uint32_t *)self + 2) != 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::open  (binary VA: 0x128e950)
// Original: marisa::grimoire::io::Writer::open_
// ----------------------------------------------------------------------------
FILE * marisa::grimoire::io::Writer::open(marisa::grimoire::io::Writer::Self *self, char *filename)
{
  FILE *result;

  result = fopen(filename, "wb");
  if ( result == nullptr )
    abort();
  *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  *((uint8_t *)self + 12) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::open_ea128e9a0  (binary VA: 0x128e9a0)
// Original: marisa::grimoire::io::Writer::open
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Writer::open_ea128e9a0(marisa::grimoire::io::Writer::Self *self, char *a2)
{
  FILE *v2[4];

  if ( a2 == nullptr )
    abort();
  marisa::grimoire::io::Writer::Construct((marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::open((marisa::grimoire::io::Writer::Self *)v2, a2);
  marisa::grimoire::io::Writer::swap(self, (marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::Destroy(v2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::open  (binary VA: 0x128ea20)
// Original: marisa::grimoire::io::Writer::open_
// ----------------------------------------------------------------------------
uint32_t * marisa::grimoire::io::Writer::open(uint32_t *a1, int a2)
{
  *a1 = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::open  (binary VA: 0x128ea30)
// Original: marisa::grimoire::io::Writer::open
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Writer::open(marisa::grimoire::io::Writer::Self *a1, int a2)
{
  FILE *v2[4];

  if ( a2 == 0 )
    abort();
  marisa::grimoire::io::Writer::Construct((marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::open(v2, a2);
  marisa::grimoire::io::Writer::swap(a1, (marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::Destroy(v2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::open_ea128eab0  (binary VA: 0x128eab0)
// Original: marisa::grimoire::io::Writer::open_
// ----------------------------------------------------------------------------
marisa::grimoire::io::Writer::Self * marisa::grimoire::io::Writer::open_ea128eab0(marisa::grimoire::io::Writer::Self *self, int a2)
{
  *((uint32_t *)self + 1) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::open_ea128eac0  (binary VA: 0x128eac0)
// Original: marisa::grimoire::io::Writer::open
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Writer::open_ea128eac0(marisa::grimoire::io::Writer::Self *self, int a2)
{
  FILE *v2[4];

  if ( a2 == -1 )
    abort();
  marisa::grimoire::io::Writer::Construct((marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::open((marisa::grimoire::io::Writer::Self *)v2, a2);
  marisa::grimoire::io::Writer::swap(self, (marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::Destroy(v2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::open  (binary VA: 0x128eb40)
// Original: marisa::grimoire::io::Writer::open_
// ----------------------------------------------------------------------------
int marisa::grimoire::io::Writer::open(int a1, int a2)
{
  *(uint32_t *)(a1 + 8) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::open_ea128eb50  (binary VA: 0x128eb50)
// Original: marisa::grimoire::io::Writer::open
// ----------------------------------------------------------------------------
void marisa::grimoire::io::Writer::open_ea128eb50(marisa::grimoire::io::Writer::Self *a1, int a2)
{
  FILE *v2[5];

  marisa::grimoire::io::Writer::Construct((marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::open((int)(uintptr_t)(v2), a2);
  marisa::grimoire::io::Writer::swap(a1, (marisa::grimoire::io::Writer::Self *)v2);
  marisa::grimoire::io::Writer::Destroy(v2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::write_data  (binary VA: 0x128ebc0)
// Original: marisa::grimoire::io::Writer::write_data
// ----------------------------------------------------------------------------
char marisa::grimoire::io::Writer::write_data(marisa::grimoire::io::Writer::Self *self, char *ptr, size_t a3)
{
  char *buf;
  unsigned int v4;
  ssize_t v5;
  size_t n;

  buf = ptr;
  v4 = a3;
  LOBYTE(v5) = marisa::grimoire::io::Writer::is_open(self);
  if ( (uint8_t)v5 == 0 )
    goto LABEL_16;
  if ( a3 != 0 )
  {
    if ( *((uint32_t *)self + 1) != -1 )
    {
      while ( 1 )
      {
        if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_5CAB4)->st_size + (uint32_t)(uintptr_t)(dword_20B9FF4)) == 0 && _cxa_guard_acquire(((g4_cxa_guard_t *)(&dword_2116AB0))) != 0 )
        {
          dword_2116AB8 = 0x7FFFFFFF;
          _cxa_guard_release(((g4_cxa_guard_t *)(&dword_2116AB0)));
        }
        n = dword_2116AB8;
        if ( v4 <= dword_2116AB8 )
          n = v4;
        v5 = ::write(*((uint32_t *)self + 1), buf, n);
        if ( v5 <= 0 )
          break;
        buf += v5;
        v4 -= v5;
        if ( v4 == 0 )
          return v5;
      }
LABEL_16:
      abort();
    }
    if ( *(uint32_t *)self != 0 )
    {
      if ( a3 != fwrite(ptr, 1u, a3, *(FILE **)self) )
        goto LABEL_16;
      v5 = fflush(*(FILE **)self);
      if ( v5 != 0 )
        goto LABEL_16;
    }
    else
    {
      v5 = *((uint32_t *)self + 2);
      if ( v5 != 0 )
      {
        v5 = (ssize_t)(uintptr_t)(sub_192C9E0(v5, ptr, a3));
        if ( (*(uint8_t *)(v5 + *(uint32_t *)(*(uint32_t *)v5 - 12) + 20) & 5) != 0 )
          abort();
      }
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::io::Writer::seek  (binary VA: 0x128ed10)
// Original: marisa::grimoire::io::Writer::seek
// ----------------------------------------------------------------------------
char marisa::grimoire::io::Writer::seek(marisa::grimoire::io::Writer::Self *self, size_t a2)
{
  size_t v2;
  char result;
  size_t v4;
  uint32_t ptr[259];

  v2 = a2;
  result = marisa::grimoire::io::Writer::is_open(self);
  if ( result == 0 )
    abort();
  if ( a2 != 0 )
  {
    if ( a2 <= 0x10 )
    {
      memset(ptr, 0, 16);
      return marisa::grimoire::io::Writer::write_data(self, (char *)ptr, a2);
    }
    else
    {
      memset(ptr, 0, 0x400u);
      do
      {
        v4 = 1024;
        if ( v2 <= 0x400 )
          v4 = v2;
        result = marisa::grimoire::io::Writer::write_data(self, (char *)ptr, v4);
        v2 -= v4;
      }
      while ( v2 != 0 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::total_size  (binary VA: 0x128f790)
// Original: marisa::grimoire::trie::LoudsTrie::total_size
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::LoudsTrie::total_size(marisa::grimoire::trie::LoudsTrie::Self *self)
{
  marisa::grimoire::trie::LoudsTrie::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v1 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
  v8 = *((uint32_t *)self + 81);
  v9 = *((uint32_t *)self + 96);
  v10 = *((uint32_t *)self + 110);
  v2 = *((uint32_t *)self + 11);
  v11 = 4
      * (*((uint32_t *)self + 122)
       + *((uint32_t *)self + 116)
       + *((uint32_t *)self + 102)
       + *((uint32_t *)self + 87)
       + *((uint32_t *)self + 75)
       + *((uint32_t *)self + 69)
       + *((uint32_t *)self + 55)
       + *((uint32_t *)self + 49)
       + *((uint32_t *)self + 43)
       + *((uint32_t *)self + 29)
       + *((uint32_t *)self + 23)
       + *((uint32_t *)self + 3)
       + *((uint32_t *)self + 17));
  v3 = 0;
  v4 = *((uint32_t *)self + 37);
  v5 = *((uint32_t *)self + 63);
  if ( v1 != nullptr )
  {
    v7 = *((uint32_t *)self + 11);
    v3 = marisa::grimoire::trie::LoudsTrie::total_size(v1);
    v2 = v7;
  }
  return v11 + v8 + v9 + 12 * (v10 + v5 + v4 + *((uint32_t *)self + 129) + v2) + v3;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::io_size  (binary VA: 0x128f880)
// Original: marisa::grimoire::trie::LoudsTrie::io_size
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::LoudsTrie::io_size(marisa::grimoire::trie::LoudsTrie::Self *self)
{
  unsigned int v1;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  marisa::grimoire::trie::LoudsTrie::Self *v5;
  int v6;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;

  v1 = (4 * *((uint32_t *)self + 3) + 7) & 0xFFFFFFF8;
  v10 = (12 * *((uint32_t *)self + 11) + 7) & 0xFFFFFFF8;
  v11 = (4 * *((uint32_t *)self + 17) + 7) & 0xFFFFFFF8;
  v12 = (4 * *((uint32_t *)self + 23) + 7) & 0xFFFFFFF8;
  v13 = (4 * *((uint32_t *)self + 29) + 7) & 0xFFFFFFF8;
  v14 = (12 * *((uint32_t *)self + 37) + 7) & 0xFFFFFFF8;
  v15 = (4 * *((uint32_t *)self + 43) + 7) & 0xFFFFFFF8;
  v16 = (4 * *((uint32_t *)self + 49) + 7) & 0xFFFFFFF8;
  v2 = (*((uint32_t *)self + 81) + 7) & 0xFFFFFFF8;
  v3 = (*((uint32_t *)self + 96) + 7) & 0xFFFFFFF8;
  v17 = (4 * *((uint32_t *)self + 55) + 7) & 0xFFFFFFF8;
  v18 = (12 * *((uint32_t *)self + 63) + 7) & 0xFFFFFFF8;
  v19 = (4 * *((uint32_t *)self + 69) + 7) & 0xFFFFFFF8;
  v20 = (4 * *((uint32_t *)self + 75) + 7) & 0xFFFFFFF8;
  v4 = (4 * *((uint32_t *)self + 87) + 7) & 0xFFFFFFF8;
  v21 = (4 * *((uint32_t *)self + 102) + 7) & 0xFFFFFFF8;
  v22 = (12 * *((uint32_t *)self + 110) + 7) & 0xFFFFFFF8;
  v23 = (4 * *((uint32_t *)self + 116) + 7) & 0xFFFFFFF8;
  v5 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
  v24 = (4 * *((uint32_t *)self + 122) + 7) & 0xFFFFFFF8;
  v25 = 0;
  if ( v5 != nullptr )
  {
    v9 = (*((uint32_t *)self + 81) + 7) & 0xFFFFFFF8;
    v8 = (4 * *((uint32_t *)self + 3) + 7) & 0xFFFFFFF8;
    v6 = marisa::grimoire::trie::LoudsTrie::io_size(v5);
    v1 = v8;
    v25 = v6 - 16;
    v2 = v9;
  }
  return v25
       + v24
       + v23
       + v22
       + v21
       + v20
       + v19
       + v18
       + v17
       + v16
       + v15
       + v14
       + v13
       + v12
       + v11
       + v10
       + v1
       + v2
       + v3
       + 232
       + v4
       + ((12 * *((uint32_t *)self + 129) + 7) & 0xFFFFFFF8);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::swap  (binary VA: 0x128fac0)
// Original: marisa::grimoire::trie::LoudsTrie::swap
// ----------------------------------------------------------------------------
marisa::grimoire::io::Mapper::Self * marisa::grimoire::trie::LoudsTrie::swap(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::grimoire::trie::LoudsTrie::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;

  v2 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  *(uint32_t *)a2 = v2;
  v3 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)a2 + 1) = v3;
  v4 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)a2 + 2) = v4;
  v5 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)a2 + 3) = v5;
  v6 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)a2 + 4) = v6;
  LOBYTE(v6) = *((uint8_t *)self + 20);
  *((uint8_t *)self + 20) = *((uint8_t *)a2 + 20);
  *((uint8_t *)a2 + 20) = v6;
  v7 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
  *((uint32_t *)a2 + 6) = v7;
  v8 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *((uint32_t *)a2 + 7) = v8;
  v9 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 8);
  *((uint32_t *)a2 + 8) = v9;
  v10 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 9);
  *((uint32_t *)a2 + 9) = v10;
  v11 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 10);
  *((uint32_t *)a2 + 10) = v11;
  v12 = *((uint32_t *)self + 11);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
  *((uint32_t *)a2 + 11) = v12;
  v13 = *((uint32_t *)self + 12);
  *((uint32_t *)self + 12) = *((uint32_t *)a2 + 12);
  *((uint32_t *)a2 + 12) = v13;
  LOBYTE(v13) = *((uint8_t *)self + 52);
  *((uint8_t *)self + 52) = *((uint8_t *)a2 + 52);
  *((uint8_t *)a2 + 52) = v13;
  v14 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 14);
  *((uint32_t *)a2 + 14) = v14;
  v15 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 15);
  *((uint32_t *)a2 + 15) = v15;
  v16 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 16) = *((uint32_t *)a2 + 16);
  *((uint32_t *)a2 + 16) = v16;
  v17 = *((uint32_t *)self + 17);
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 17);
  *((uint32_t *)a2 + 17) = v17;
  v18 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 18) = *((uint32_t *)a2 + 18);
  *((uint32_t *)a2 + 18) = v18;
  LOBYTE(v18) = *((uint8_t *)self + 76);
  *((uint8_t *)self + 76) = *((uint8_t *)a2 + 76);
  *((uint8_t *)a2 + 76) = v18;
  v19 = *((uint32_t *)self + 20);
  *((uint32_t *)self + 20) = *((uint32_t *)a2 + 20);
  *((uint32_t *)a2 + 20) = v19;
  v20 = *((uint32_t *)self + 21);
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 21);
  *((uint32_t *)a2 + 21) = v20;
  v21 = *((uint32_t *)self + 22);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 22);
  *((uint32_t *)a2 + 22) = v21;
  v22 = *((uint32_t *)self + 23);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 23);
  *((uint32_t *)a2 + 23) = v22;
  v23 = *((uint32_t *)self + 24);
  *((uint32_t *)self + 24) = *((uint32_t *)a2 + 24);
  *((uint32_t *)a2 + 24) = v23;
  LOBYTE(v23) = *((uint8_t *)self + 100);
  *((uint8_t *)self + 100) = *((uint8_t *)a2 + 100);
  *((uint8_t *)a2 + 100) = v23;
  v24 = *((uint32_t *)self + 26);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 26);
  *((uint32_t *)a2 + 26) = v24;
  v25 = *((uint32_t *)self + 27);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 27);
  *((uint32_t *)a2 + 27) = v25;
  v26 = *((uint32_t *)self + 28);
  *((uint32_t *)self + 28) = *((uint32_t *)a2 + 28);
  *((uint32_t *)a2 + 28) = v26;
  v27 = *((uint32_t *)self + 29);
  *((uint32_t *)self + 29) = *((uint32_t *)a2 + 29);
  *((uint32_t *)a2 + 29) = v27;
  v28 = *((uint32_t *)self + 30);
  *((uint32_t *)self + 30) = *((uint32_t *)a2 + 30);
  *((uint32_t *)a2 + 30) = v28;
  LOBYTE(v28) = *((uint8_t *)self + 124);
  *((uint8_t *)self + 124) = *((uint8_t *)a2 + 124);
  *((uint8_t *)a2 + 124) = v28;
  v29 = *((uint32_t *)self + 32);
  *((uint32_t *)self + 32) = *((uint32_t *)a2 + 32);
  *((uint32_t *)a2 + 32) = v29;
  v30 = *((uint32_t *)self + 33);
  *((uint32_t *)self + 33) = *((uint32_t *)a2 + 33);
  *((uint32_t *)a2 + 33) = v30;
  v31 = *((uint32_t *)self + 34);
  *((uint32_t *)self + 34) = *((uint32_t *)a2 + 34);
  *((uint32_t *)a2 + 34) = v31;
  v32 = *((uint32_t *)self + 35);
  *((uint32_t *)self + 35) = *((uint32_t *)a2 + 35);
  *((uint32_t *)a2 + 35) = v32;
  v33 = *((uint32_t *)self + 36);
  *((uint32_t *)self + 36) = *((uint32_t *)a2 + 36);
  *((uint32_t *)a2 + 36) = v33;
  v34 = *((uint32_t *)self + 37);
  *((uint32_t *)self + 37) = *((uint32_t *)a2 + 37);
  *((uint32_t *)a2 + 37) = v34;
  v35 = *((uint32_t *)self + 38);
  *((uint32_t *)self + 38) = *((uint32_t *)a2 + 38);
  *((uint32_t *)a2 + 38) = v35;
  LOBYTE(v35) = *((uint8_t *)self + 156);
  *((uint8_t *)self + 156) = *((uint8_t *)a2 + 156);
  *((uint8_t *)a2 + 156) = v35;
  v36 = *((uint32_t *)self + 40);
  *((uint32_t *)self + 40) = *((uint32_t *)a2 + 40);
  *((uint32_t *)a2 + 40) = v36;
  v37 = *((uint32_t *)self + 41);
  *((uint32_t *)self + 41) = *((uint32_t *)a2 + 41);
  *((uint32_t *)a2 + 41) = v37;
  v38 = *((uint32_t *)self + 42);
  *((uint32_t *)self + 42) = *((uint32_t *)a2 + 42);
  *((uint32_t *)a2 + 42) = v38;
  v39 = *((uint32_t *)self + 43);
  *((uint32_t *)self + 43) = *((uint32_t *)a2 + 43);
  *((uint32_t *)a2 + 43) = v39;
  v40 = *((uint32_t *)self + 44);
  *((uint32_t *)self + 44) = *((uint32_t *)a2 + 44);
  *((uint32_t *)a2 + 44) = v40;
  LOBYTE(v40) = *((uint8_t *)self + 180);
  *((uint8_t *)self + 180) = *((uint8_t *)a2 + 180);
  *((uint8_t *)a2 + 180) = v40;
  v41 = *((uint32_t *)self + 46);
  *((uint32_t *)self + 46) = *((uint32_t *)a2 + 46);
  *((uint32_t *)a2 + 46) = v41;
  v42 = *((uint32_t *)self + 47);
  *((uint32_t *)self + 47) = *((uint32_t *)a2 + 47);
  *((uint32_t *)a2 + 47) = v42;
  v43 = *((uint32_t *)self + 48);
  *((uint32_t *)self + 48) = *((uint32_t *)a2 + 48);
  *((uint32_t *)a2 + 48) = v43;
  v44 = *((uint32_t *)self + 49);
  *((uint32_t *)self + 49) = *((uint32_t *)a2 + 49);
  *((uint32_t *)a2 + 49) = v44;
  v45 = *((uint32_t *)self + 50);
  *((uint32_t *)self + 50) = *((uint32_t *)a2 + 50);
  *((uint32_t *)a2 + 50) = v45;
  LOBYTE(v45) = *((uint8_t *)self + 204);
  *((uint8_t *)self + 204) = *((uint8_t *)a2 + 204);
  *((uint8_t *)a2 + 204) = v45;
  v46 = *((uint32_t *)self + 52);
  *((uint32_t *)self + 52) = *((uint32_t *)a2 + 52);
  *((uint32_t *)a2 + 52) = v46;
  v47 = *((uint32_t *)self + 53);
  *((uint32_t *)self + 53) = *((uint32_t *)a2 + 53);
  *((uint32_t *)a2 + 53) = v47;
  v48 = *((uint32_t *)self + 54);
  *((uint32_t *)self + 54) = *((uint32_t *)a2 + 54);
  *((uint32_t *)a2 + 54) = v48;
  v49 = *((uint32_t *)self + 55);
  *((uint32_t *)self + 55) = *((uint32_t *)a2 + 55);
  *((uint32_t *)a2 + 55) = v49;
  v50 = *((uint32_t *)self + 56);
  *((uint32_t *)self + 56) = *((uint32_t *)a2 + 56);
  *((uint32_t *)a2 + 56) = v50;
  LOBYTE(v50) = *((uint8_t *)self + 228);
  *((uint8_t *)self + 228) = *((uint8_t *)a2 + 228);
  *((uint8_t *)a2 + 228) = v50;
  v51 = *((uint32_t *)self + 58);
  *((uint32_t *)self + 58) = *((uint32_t *)a2 + 58);
  *((uint32_t *)a2 + 58) = v51;
  v52 = *((uint32_t *)self + 59);
  *((uint32_t *)self + 59) = *((uint32_t *)a2 + 59);
  *((uint32_t *)a2 + 59) = v52;
  v53 = *((uint32_t *)self + 60);
  *((uint32_t *)self + 60) = *((uint32_t *)a2 + 60);
  *((uint32_t *)a2 + 60) = v53;
  v54 = *((uint32_t *)self + 61);
  *((uint32_t *)self + 61) = *((uint32_t *)a2 + 61);
  *((uint32_t *)a2 + 61) = v54;
  v55 = *((uint32_t *)self + 62);
  *((uint32_t *)self + 62) = *((uint32_t *)a2 + 62);
  *((uint32_t *)a2 + 62) = v55;
  v56 = *((uint32_t *)self + 63);
  *((uint32_t *)self + 63) = *((uint32_t *)a2 + 63);
  *((uint32_t *)a2 + 63) = v56;
  v57 = *((uint32_t *)self + 64);
  *((uint32_t *)self + 64) = *((uint32_t *)a2 + 64);
  *((uint32_t *)a2 + 64) = v57;
  LOBYTE(v57) = *((uint8_t *)self + 260);
  *((uint8_t *)self + 260) = *((uint8_t *)a2 + 260);
  *((uint8_t *)a2 + 260) = v57;
  v58 = *((uint32_t *)self + 66);
  *((uint32_t *)self + 66) = *((uint32_t *)a2 + 66);
  *((uint32_t *)a2 + 66) = v58;
  v59 = *((uint32_t *)self + 67);
  *((uint32_t *)self + 67) = *((uint32_t *)a2 + 67);
  *((uint32_t *)a2 + 67) = v59;
  v60 = *((uint32_t *)self + 68);
  *((uint32_t *)self + 68) = *((uint32_t *)a2 + 68);
  *((uint32_t *)a2 + 68) = v60;
  v61 = *((uint32_t *)self + 69);
  *((uint32_t *)self + 69) = *((uint32_t *)a2 + 69);
  *((uint32_t *)a2 + 69) = v61;
  v62 = *((uint32_t *)self + 70);
  *((uint32_t *)self + 70) = *((uint32_t *)a2 + 70);
  *((uint32_t *)a2 + 70) = v62;
  LOBYTE(v62) = *((uint8_t *)self + 284);
  *((uint8_t *)self + 284) = *((uint8_t *)a2 + 284);
  *((uint8_t *)a2 + 284) = v62;
  v63 = *((uint32_t *)self + 72);
  *((uint32_t *)self + 72) = *((uint32_t *)a2 + 72);
  *((uint32_t *)a2 + 72) = v63;
  v64 = *((uint32_t *)self + 73);
  *((uint32_t *)self + 73) = *((uint32_t *)a2 + 73);
  *((uint32_t *)a2 + 73) = v64;
  v65 = *((uint32_t *)self + 74);
  *((uint32_t *)self + 74) = *((uint32_t *)a2 + 74);
  *((uint32_t *)a2 + 74) = v65;
  v66 = *((uint32_t *)self + 75);
  *((uint32_t *)self + 75) = *((uint32_t *)a2 + 75);
  *((uint32_t *)a2 + 75) = v66;
  v67 = *((uint32_t *)self + 76);
  *((uint32_t *)self + 76) = *((uint32_t *)a2 + 76);
  *((uint32_t *)a2 + 76) = v67;
  LOBYTE(v67) = *((uint8_t *)self + 308);
  *((uint8_t *)self + 308) = *((uint8_t *)a2 + 308);
  *((uint8_t *)a2 + 308) = v67;
  v68 = *((uint32_t *)self + 78);
  *((uint32_t *)self + 78) = *((uint32_t *)a2 + 78);
  *((uint32_t *)a2 + 78) = v68;
  v69 = *((uint32_t *)self + 79);
  *((uint32_t *)self + 79) = *((uint32_t *)a2 + 79);
  *((uint32_t *)a2 + 79) = v69;
  v70 = *((uint32_t *)self + 80);
  *((uint32_t *)self + 80) = *((uint32_t *)a2 + 80);
  *((uint32_t *)a2 + 80) = v70;
  v71 = *((uint32_t *)self + 81);
  *((uint32_t *)self + 81) = *((uint32_t *)a2 + 81);
  *((uint32_t *)a2 + 81) = v71;
  v72 = *((uint32_t *)self + 82);
  *((uint32_t *)self + 82) = *((uint32_t *)a2 + 82);
  *((uint32_t *)a2 + 82) = v72;
  LOBYTE(v72) = *((uint8_t *)self + 332);
  *((uint8_t *)self + 332) = *((uint8_t *)a2 + 332);
  *((uint8_t *)a2 + 332) = v72;
  v73 = *((uint32_t *)self + 84);
  *((uint32_t *)self + 84) = *((uint32_t *)a2 + 84);
  *((uint32_t *)a2 + 84) = v73;
  v74 = *((uint32_t *)self + 85);
  *((uint32_t *)self + 85) = *((uint32_t *)a2 + 85);
  *((uint32_t *)a2 + 85) = v74;
  v75 = *((uint32_t *)self + 86);
  *((uint32_t *)self + 86) = *((uint32_t *)a2 + 86);
  *((uint32_t *)a2 + 86) = v75;
  v76 = *((uint32_t *)self + 87);
  *((uint32_t *)self + 87) = *((uint32_t *)a2 + 87);
  *((uint32_t *)a2 + 87) = v76;
  v77 = *((uint32_t *)self + 88);
  *((uint32_t *)self + 88) = *((uint32_t *)a2 + 88);
  *((uint32_t *)a2 + 88) = v77;
  LOBYTE(v77) = *((uint8_t *)self + 356);
  *((uint8_t *)self + 356) = *((uint8_t *)a2 + 356);
  *((uint8_t *)a2 + 356) = v77;
  v78 = *((uint32_t *)self + 90);
  *((uint32_t *)self + 90) = *((uint32_t *)a2 + 90);
  *((uint32_t *)a2 + 90) = v78;
  v79 = *((uint32_t *)self + 91);
  *((uint32_t *)self + 91) = *((uint32_t *)a2 + 91);
  *((uint32_t *)a2 + 91) = v79;
  v80 = *((uint32_t *)self + 92);
  *((uint32_t *)self + 92) = *((uint32_t *)a2 + 92);
  *((uint32_t *)a2 + 92) = v80;
  marisa::grimoire::trie::Tail::swap(
    (marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372),
    (marisa::grimoire::trie::LoudsTrie::Self *)((char *)a2 + 372));
  v81 = *((uint32_t *)self + 125);
  *((uint32_t *)self + 125) = *((uint32_t *)a2 + 125);
  *((uint32_t *)a2 + 125) = v81;
  v82 = *((uint32_t *)self + 126);
  *((uint32_t *)self + 126) = *((uint32_t *)a2 + 126);
  *((uint32_t *)a2 + 126) = v82;
  v83 = *((uint32_t *)self + 127);
  *((uint32_t *)self + 127) = *((uint32_t *)a2 + 127);
  *((uint32_t *)a2 + 127) = v83;
  v84 = *((uint32_t *)self + 128);
  *((uint32_t *)self + 128) = *((uint32_t *)a2 + 128);
  *((uint32_t *)a2 + 128) = v84;
  v85 = *((uint32_t *)self + 129);
  *((uint32_t *)self + 129) = *((uint32_t *)a2 + 129);
  *((uint32_t *)a2 + 129) = v85;
  v86 = *((uint32_t *)self + 130);
  *((uint32_t *)self + 130) = *((uint32_t *)a2 + 130);
  *((uint32_t *)a2 + 130) = v86;
  LOBYTE(v86) = *((uint8_t *)self + 524);
  *((uint8_t *)self + 524) = *((uint8_t *)a2 + 524);
  *((uint8_t *)a2 + 524) = v86;
  v87 = *((uint32_t *)self + 132);
  *((uint32_t *)self + 132) = *((uint32_t *)a2 + 132);
  *((uint32_t *)a2 + 132) = v87;
  v88 = *((uint32_t *)self + 133);
  *((uint32_t *)self + 133) = *((uint32_t *)a2 + 133);
  *((uint32_t *)a2 + 133) = v88;
  v89 = *((uint32_t *)self + 134);
  *((uint32_t *)self + 134) = *((uint32_t *)a2 + 134);
  *((uint32_t *)a2 + 134) = v89;
  v90 = *((uint32_t *)self + 135);
  *((uint32_t *)self + 135) = *((uint32_t *)a2 + 135);
  *((uint32_t *)a2 + 135) = v90;
  v91 = *((uint32_t *)self + 136);
  *((uint32_t *)self + 136) = *((uint32_t *)a2 + 136);
  *((uint32_t *)a2 + 136) = v91;
  v92 = *((uint32_t *)self + 137);
  *((uint32_t *)self + 137) = *((uint32_t *)a2 + 137);
  *((uint32_t *)a2 + 137) = v92;
  return marisa::grimoire::io::Mapper::swap(
           (marisa::grimoire::io::Mapper::Self *)((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 552)),
           (marisa::grimoire::io::Mapper::Self *)((marisa::grimoire::trie::LoudsTrie::Self *)((char *)a2 + 552)));
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::reserve_cache  (binary VA: 0x1290400)
// Original: marisa::grimoire::trie::LoudsTrie::reserve_cache
// ----------------------------------------------------------------------------
unsigned int marisa::grimoire::trie::LoudsTrie::reserve_cache(uint32_t *a1, int a2, int a3, unsigned int a4)
{
  int v4;
  unsigned int v5;
  unsigned int v6;
  uint32_t *v7;
  uint32_t *v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  uint8_t *v12;
  unsigned int i;
  unsigned int v14;
  __m128i *v15;
  unsigned int v16;
  unsigned int v17;
  uint32_t *v18;
  unsigned int result;
  uint32_t *v20;
  int v21;
  unsigned int j;
  uint32_t *v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  uint32_t *v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  void *v34;

  v4 = 0;
  v5 = 256;
  if ( a3 == 1 )
    v4 = 255;
  else
    v5 = 1;
  v6 = a4 / *(uint32_t *)(a2 + 4);
  v31 = v4;
  if ( v5 < v6 )
  {
    do
      v5 *= 2;
    while ( v5 < v6 );
    v31 = v5 - 1;
  }
  v7 = a1;
  v8 = a1 + 126;
  v9 = a1[130];
  if ( v9 >= v5 )
    goto LABEL_33;
  if ( v9 > v5 >> 1 )
  {
    v32 = 0xFFFFFFFC;
    v26 = 357913941;
    if ( v9 <= 0xAAAAAAA )
    {
      v26 = 2 * v9;
      v32 = 24 * v9;
      v10 = opNewArray(24 * v9, (const std::nothrow_t *)&std::nothrow);
      goto LABEL_11;
    }
  }
  else
  {
    v26 = v5;
    v32 = 12 * v5;
  }
  v10 = opNewArray(v32, (const std::nothrow_t *)&std::nothrow);
LABEL_11:
  v30 = (uint32_t *)v10;
  if ( v10 != 0 )
  {
    v28 = v32 - 1;
    if ( v32 != 0 )
    {
      v11 = -v10 & 0xF;
      if ( v11 > v32 )
        v11 = v32;
      if ( v11 != 0 )
      {
        v12 = (uint8_t *)v10;
        for ( i = 0; i < v11; ++i )
        {
          *v12 = 0;
          v14 = v32 - 2 - i;
          ++v12;
        }
        v28 = v14;
        v8 = a1 + 126;
        if ( v11 == v32 )
          goto LABEL_25;
      }
      else
      {
        v12 = (uint8_t *)v10;
      }
      v33 = v32 - v11;
      v27 = 16 * (v33 >> 4);
      if ( v27 == 0 )
        goto LABEL_23;
      v15 = (__m128i *)((char *)v30 + v11);
      v16 = 0;
      do
      {
        ++v16;
        *v15++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v33 >> 4 > v16 );
      v12 += v27;
      v28 -= v27;
      if ( v33 != v27 )
      {
LABEL_23:
        v17 = v28;
        do
        {
          --v17;
          *v12++ = 0;
        }
        while ( v17 != -1 );
      }
    }
  }
LABEL_25:
  v18 = a1;
  result = a1[129];
  if ( result != 0 )
  {
    v29 = v5;
    v20 = v30;
    v21 = 0;
    for ( j = 0; j < result; ++j )
    {
      if ( v20 != nullptr )
      {
        v23 = (uint32_t *)(v8[1] + v21);
        *v20 = *v23;
        v20[1] = v23[1];
        v20[2] = v23[2];
        result = a1[129];
      }
      v20 += 3;
      v21 += 12;
    }
    v5 = v29;
    v18 = a1;
  }
  v34 = (void *)v18[126];
  a1[126] = (uint32_t)(uintptr_t)(v30);
  a1[127] = (uint32_t)(uintptr_t)(v30);
  a1[128] = (uint32_t)(uintptr_t)(v30);
  a1[130] = v26;
  if ( v34 != nullptr )
  {
    opDeleteArray(v34);
    v7 = a1;
LABEL_33:
    result = v7[129];
  }
  if ( v5 > result )
  {
    v24 = 12 * result;
    do
    {
      v25 = (uint32_t *)(v8[1] + v24);
      if ( v25 != nullptr )
      {
        *v25 = 0;
        v25[1] = 0;
        v25[2] = (uint32_t)(uintptr_t)(sub_800000);
      }
      ++result;
      v24 += 12;
    }
    while ( v5 > result );
  }
  a1[129] = v5;
  a1[132] = v31;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::fill_cache  (binary VA: 0x1290730)
// Original: marisa::grimoire::trie::LoudsTrie::fill_cache
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::LoudsTrie::fill_cache(marisa::grimoire::trie::LoudsTrie::Self *self)
{
  int v1;
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  unsigned int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v13;

  if ( *((uint32_t *)self + 129) != 0 )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v6 = (uint32_t *)(*((uint32_t *)self + 127) + v1);
        v7 = v6[1];
        if ( v7 != 0 )
          break;
        *v6 = -1;
        ++v2;
        *(uint32_t *)(*((uint32_t *)self + 127) + v1 + 4) = -1;
        v1 += 12;
        if ( *((uint32_t *)self + 129) <= v2 )
          return;
      }
      v3 = v6[2];
      LOBYTE(v3) = 0;
      v6[2] = v3 | *(uint8_t *)(*((uint32_t *)self + 79) + v7);
      v4 = -256;
      if ( ((*(uint32_t *)(*((uint32_t *)self + 54) + 4 * (v7 >> 5)) >> v7) & 1) != 0 )
      {
        marisa::grimoire::vector::BitVector::rank1((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 208), v7);
        v9 = *((uint32_t *)self + 90);
        v10 = v9 * v8;
        v11 = (v9 * v8) & 0x1F;
        v12 = v10 >> 5;
        if ( (unsigned int)(v11 + v9) <= 0x20 )
          v13 = *((uint32_t *)self + 91) & (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v12) >> v11);
        else
          v13 = *((uint32_t *)self + 91)
              & ((*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v12) >> v11)
               | (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v12 + 4) << (32 - v11)));
        v4 = v13 << 8;
      }
      ++v2;
      v5 = *((uint32_t *)self + 127) + v1;
      v1 += 12;
      *(uint32_t *)(v5 + 8) = v4 | *(uint8_t *)(v5 + 8);
    }
    while ( *((uint32_t *)self + 129) > v2 );
  }
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::write  (binary VA: 0x12908a0)
// Original: marisa::grimoire::trie::LoudsTrie::write_
// ----------------------------------------------------------------------------
char marisa::grimoire::trie::LoudsTrie::write(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::grimoire::io::Writer::Self *a2)
{
  size_t v2;
  int v3;
  unsigned int v4;
  marisa::grimoire::trie::LoudsTrie::Self *v5;
  int v6;
  unsigned int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint64_t _g4_t_ptr;
  typedef uint64_t _g4_t_v14;
  typedef uint32_t _g4_t_v15[2];
  typedef uint32_t _g4_t_v16[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_ptr)) > _g4_s4 ? (16u + sizeof(_g4_t_ptr)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v14)) > _g4_s5 ? (24u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v16)) > _g4_s7 ? (40u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);

  marisa::grimoire::vector::BitVector::write(self, a2);
  marisa::grimoire::vector::BitVector::write((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 104), a2);
  marisa::grimoire::vector::BitVector::write((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 208), a2);
  ptr =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*((uint32_t *)self + 81)), 0);
  marisa::grimoire::io::Writer::write_data(a2, (char *)&ptr, 8u);
  v2 = *((uint32_t *)self + 81);
  if ( v2 != 0 && *((uint32_t *)self + 80) == 0 )
    goto LABEL_10;
  marisa::grimoire::io::Writer::write_data(a2, *((char **)self + 80), v2);
  marisa::grimoire::io::Writer::seek(a2, -*((uint32_t *)self + 81) & 7);
  v3 = *((uint32_t *)self + 87);
  v16[1] = 0;
  v16[0] = 4 * v3;
  marisa::grimoire::io::Writer::write_data(a2, (char *)v16, 8u);
  v4 = *((uint32_t *)self + 87);
  if ( v4 != 0 && *((uint32_t *)self + 86) == 0 )
    goto LABEL_10;
  if ( v4 > 0x3FFFFFFF )
    goto LABEL_10;
  marisa::grimoire::io::Writer::write_data(a2, *((char **)self + 86), 4 * v4);
  marisa::grimoire::io::Writer::seek(a2, (-4 * *((uint32_t *)self + 87)) & 7);
  v11 = *((uint32_t *)self + 90);
  marisa::grimoire::io::Writer::write_data(a2, (char *)&v11, 4u);
  v12 = *((uint32_t *)self + 91);
  marisa::grimoire::io::Writer::write_data(a2, (char *)&v12, 4u);
  v14 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*((uint32_t *)self + 92)), 0);
  marisa::grimoire::io::Writer::write_data(a2, (char *)&v14, 8u);
  marisa::grimoire::trie::Tail::write((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372), a2);
  v5 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
  if ( v5 != nullptr )
    marisa::grimoire::trie::LoudsTrie::write(v5, a2);
  if ( (v6 = *((uint32_t *)self + 129),
        v15[1] = 0,
        v15[0] = 12 * v6,
        marisa::grimoire::io::Writer::write_data(a2, (char *)v15, 8u),
        (v7 = *((uint32_t *)self + 129)) != 0)
    && *((uint32_t *)self + 128) == 0
    || v7 > 0x15555555 )
  {
LABEL_10:
    abort();
  }
  marisa::grimoire::io::Writer::write_data(a2, *((char **)self + 128), 12 * v7);
  marisa::grimoire::io::Writer::seek(a2, (4 * (uint8_t)*((uint32_t *)self + 129)) & 4);
  v9 = *((uint32_t *)self + 133);
  marisa::grimoire::io::Writer::write_data(a2, (char *)&v9, 4u);
  v10 = *((uint32_t *)self + 137) | *((uint32_t *)self + 134) | *((uint32_t *)self + 136);
  return marisa::grimoire::io::Writer::write_data(a2, (char *)&v10, 4u);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::write_ea1290b60  (binary VA: 0x1290b60)
// Original: marisa::grimoire::trie::LoudsTrie::write
// ----------------------------------------------------------------------------
char marisa::grimoire::trie::LoudsTrie::write_ea1290b60(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::grimoire::io::Writer::Self *a2)
{
  if ( "We love Marisa." == nullptr )
    abort();
  marisa::grimoire::io::Writer::write_data(a2, "We love Marisa.", 0x10u);
  return marisa::grimoire::trie::LoudsTrie::write(self, a2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::restore  (binary VA: 0x1290bc0)
// Original: marisa::grimoire::trie::LoudsTrie::restore_
// ----------------------------------------------------------------------------
unsigned int marisa::grimoire::trie::LoudsTrie::restore(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::Agent::Self *a2, unsigned int a3)
{
  unsigned int result;
  unsigned int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int v14;
  marisa::grimoire::trie::LoudsTrie::Self *v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  marisa::grimoire::trie::LoudsTrie::Self *v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  __m128i *v24;
  unsigned int v25;
  int v26;
  uint32_t *v27;
  uint8_t *v28;
  unsigned int i;
  uint32_t *v30;
  uint8_t *v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  int v40;
  void *v41;
  int v42;
  char v43;
  unsigned int v44;
  int v45;
  uint32_t *v46;
  uint8_t *v47;

  v46 = *((uint32_t **)a2 + 6);
  for ( result = *((uint32_t *)self + 128); ; result = *((uint32_t *)self + 128) )
  {
    while ( 1 )
    {
      v5 = a3 & *((uint32_t *)self + 132);
      v6 = 3 * v5;
      v7 = result + 12 * v5;
      if ( a3 != *(uint32_t *)(v7 + 4) )
        break;
      v18 = *(uint32_t *)(v7 + 8);
      if ( v18 >> 8 != 0xFFFFFF )
      {
        v19 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
        v34 = 3 * v5;
        if ( v19 != nullptr )
          marisa::grimoire::trie::LoudsTrie::restore(v19, a2, v18);
        else
          marisa::grimoire::trie::Tail::restore((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372), a2, v18);
        v6 = v34;
        goto LABEL_20;
      }
      v30 = v46;
      v45 = v46[3];
      if ( (unsigned int)(v45 + 1) > v46[4] )
      {
        v35 = 3 * v5;
        sub_128F1F0((int)(uintptr_t)(v46), v45 + 1);
        v30 = v46;
        v6 = v35;
        v45 = v46[3];
        v31 = (uint8_t *)(v46[1] + v45);
        if ( v31 == nullptr )
          goto LABEL_50;
LABEL_49:
        *v31 = v18;
        v30 = v46;
        v45 = v46[3];
        goto LABEL_50;
      }
      v31 = (uint8_t *)(v46[1] + v45);
      if ( v31 != nullptr )
        goto LABEL_49;
LABEL_50:
      v30[3] = v45 + 1;
LABEL_20:
      result = *((uint32_t *)self + 128);
      a3 = *(uint32_t *)(result + 4 * v6);
      if ( a3 == 0 )
        return result;
    }
    v8 = *((uint32_t *)self + 80);
    if ( ((*(uint32_t *)(*((uint32_t *)self + 54) + 4 * (a3 >> 5)) >> a3) & 1) == 0 )
      break;
    v42 = *(uint8_t *)(v8 + a3);
    marisa::grimoire::vector::BitVector::rank1((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 208), a3);
    v10 = *((uint32_t *)self + 90);
    v11 = v10 * v9;
    v12 = (v10 * v9) & 0x1F;
    v13 = v11 >> 5;
    if ( (unsigned int)(v12 + v10) <= 0x20 )
      v14 = *((uint32_t *)self + 91) & (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v13) >> v12);
    else
      v14 = *((uint32_t *)self + 91)
          & ((*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v13) >> v12)
           | (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v13 + 4) << (32 - v12)));
    v15 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
    v33 = v42 | (v14 << 8);
    if ( v15 != nullptr )
      result = marisa::grimoire::trie::LoudsTrie::restore(v15, a2, v33);
    else
      result = marisa::grimoire::trie::Tail::restore((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372), a2, v33);
    if ( a3 <= *((uint32_t *)self + 133) )
      return result;
LABEL_9:
    a3 = marisa::grimoire::vector::BitVector::select1(self, a3) + ~a3;
  }
  v43 = *(uint8_t *)(v8 + a3);
  v16 = v46[3];
  v44 = v16 + 1;
  v17 = v46[4];
  if ( v16 + 1 > v17 )
  {
    if ( v17 > v44 >> 1 )
    {
      v32 = 2 * v17;
      if ( v17 > 0x7FFFFFFF )
        v32 = 0xFFFFFFFF;
      v44 = v32;
      v20 = opNewArray(v32, (const std::nothrow_t *)&std::nothrow);
    }
    else
    {
      v20 = opNewArray(v44, (const std::nothrow_t *)&std::nothrow);
    }
    v47 = (uint8_t *)v20;
    if ( v20 != 0 )
    {
      v40 = v44 - 1;
      if ( v44 != 0 )
      {
        v21 = -v20 & 0xF;
        if ( v44 <= v21 )
          v21 = v44;
        if ( v21 == 0 )
          goto LABEL_61;
        v37 = a3;
        v22 = 0;
        do
        {
          *(uint8_t *)v20 = 0;
          v23 = v44 - 2 - v22++;
          ++v20;
        }
        while ( v21 > v22 );
        v40 = v23;
        a3 = v37;
        if ( v44 != v21 )
        {
LABEL_61:
          v36 = v44 - v21;
          v39 = (v44 - v21) >> 4;
          v38 = 16 * v39;
          if ( 16 * v39 == 0 )
            goto LABEL_37;
          v24 = (__m128i *)&v47[v21];
          v25 = 0;
          do
          {
            ++v25;
            *v24++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v25 < v39 );
          v40 -= v38;
          v20 += v38;
          if ( v36 != v38 )
          {
LABEL_37:
            v26 = v40;
            do
            {
              --v26;
              *(uint8_t *)v20++ = 0;
            }
            while ( v26 != -1 );
          }
        }
      }
    }
    v27 = v46;
    v16 = v46[3];
    if ( v16 != 0 )
    {
      v28 = v47;
      for ( i = 0; i < v16; ++i )
      {
        if ( v28 != nullptr )
        {
          *v28 = *(uint8_t *)(v46[1] + i);
          v16 = v46[3];
        }
        ++v28;
      }
      v27 = v46;
    }
    v41 = (void *)*v46;
    *v27 = (uint32_t)(uintptr_t)(v47);
    v27[1] = (uint32_t)(uintptr_t)(v47);
    v27[2] = (uint32_t)(uintptr_t)(v47);
    v27[4] = v44;
    if ( v41 != nullptr )
    {
      opDeleteArray(v41);
      v16 = v46[3];
      v47 = (uint8_t *)v46[1];
    }
  }
  else
  {
    v47 = (uint8_t *)v46[1];
  }
  if ( &v47[v16] != nullptr )
  {
    v47[v16] = v43;
    v16 = v46[3];
  }
  result = v16 + 1;
  v46[3] = result;
  if ( a3 > *((uint32_t *)self + 133) )
    goto LABEL_9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::reverse_lookup  (binary VA: 0x1291050)
// Original: marisa::grimoire::trie::LoudsTrie::reverse_lookup
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::LoudsTrie::reverse_lookup(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::Agent::Self *a2)
{
  marisa::grimoire::trie::LoudsTrie::Self *v2;
  void **v3;
  bool v4; // cc
  unsigned int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  int v11;
  marisa::grimoire::trie::LoudsTrie::Self *v12;
  char *v13;
  char *v14;
  char *v15;
  char *i;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  char *v20;
  uint8_t *v21;
  char *v22;
  int result;
  int v24;
  unsigned int v25;
  uint8_t *v26;
  unsigned int j;
  unsigned int v28;
  __m128i *v29;
  unsigned int v30;
  unsigned int v31;
  uint8_t *v32;
  unsigned int k;
  void *v34;
  unsigned int v35;
  void *v36;
  unsigned int v37;
  unsigned int v38;
  marisa::grimoire::trie::LoudsTrie::Self *v39;
  int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  void *v44;
  char v45;
  char v46;
  unsigned int v47;
  uint8_t *v48;
  char v49;

  v2 = self;
  if ( *((uint32_t *)a2 + 2) >= *((uint32_t *)self + 33) )
    abort();
  v3 = *((void ***)a2 + 6);
  v4 = (unsigned int)(uintptr_t)(v3[4]) <= 0x1F;
  v3[3] = nullptr;
  if ( v4 )
    sub_128F1F0((int)(uintptr_t)(v3), 0x20u);
  v3[15] = nullptr;
  v5 = marisa::grimoire::vector::BitVector::select1(
         (marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 104),
         *((uint32_t *)a2 + 2));
  v3[12] = (void *)v5;
  if ( v5 == 0 )
  {
    v36 = v3[1];
    *((uint32_t *)a2 + 4) = (uint32_t)(uintptr_t)(v3[3]);
    result = *((uint32_t *)a2 + 2);
    *((uint32_t *)a2 + 3) = (uint32_t)(uintptr_t)(v36);
    *((uint32_t *)a2 + 5) = result;
    return result;
  }
  while ( ((*(uint32_t *)(*((uint32_t *)v2 + 54) + 4 * (v5 >> 5)) >> v5) & 1) != 0 )
  {
    v44 = v3[3];
    v42 = *(uint8_t *)(*((uint32_t *)v2 + 80) + v5);
    marisa::grimoire::vector::BitVector::rank1((marisa::grimoire::trie::LoudsTrie::Self *)((char *)v2 + 208), v5);
    v7 = *((uint32_t *)v2 + 90);
    v8 = v7 * v6;
    v9 = (v7 * v6) & 0x1F;
    v10 = v8 >> 5;
    if ( (unsigned int)(v9 + v7) <= 0x20 )
      v11 = *((uint32_t *)v2 + 91) & (*(uint32_t *)(*((uint32_t *)v2 + 86) + 4 * v10) >> v9);
    else
      v11 = *((uint32_t *)v2 + 91)
          & ((*(uint32_t *)(*((uint32_t *)v2 + 86) + 4 * v10) >> v9)
           | (*(uint32_t *)(*((uint32_t *)v2 + 86) + 4 * v10 + 4) << (32 - v9)));
    v12 = *((marisa::grimoire::trie::LoudsTrie::Self **)v2 + 125);
    v37 = v42 | (v11 << 8);
    if ( v12 != nullptr )
      marisa::grimoire::trie::LoudsTrie::restore(v12, a2, v37);
    else
      marisa::grimoire::trie::Tail::restore((marisa::grimoire::trie::LoudsTrie::Self *)((char *)v2 + 372), a2, v37);
    v13 = (char *)v3[1];
    v14 = (char *)v3[3] + (uint32_t)(uintptr_t)(v13);
    v15 = &v13[(uint32_t)(uintptr_t)(v44)];
    if ( v15 != v14 )
    {
      for ( i = v14 - 1; v15 < i; --i )
      {
        v46 = *v15;
        *v15++ = *i;
        *i = v46;
      }
    }
    v17 = (unsigned int)(uintptr_t)(v3[12]);
    if ( v17 <= *((uint32_t *)v2 + 133) )
      goto LABEL_20;
LABEL_14:
    v5 = -1 - (uint32_t)(uintptr_t)(v3[12]) + marisa::grimoire::vector::BitVector::select1(v2, v17);
    v3[12] = (void *)v5;
  }
  v18 = (unsigned int)(uintptr_t)(v3[3]);
  v45 = *(uint8_t *)(*((uint32_t *)v2 + 80) + v5);
  v47 = v18 + 1;
  v19 = (unsigned int)(uintptr_t)(v3[4]);
  if ( v18 + 1 <= v19 )
  {
    v48 = (uint8_t *)(v3[1]);
    goto LABEL_17;
  }
  if ( v19 > v47 >> 1 )
  {
    v35 = 2 * v19;
    if ( v19 > 0x7FFFFFFF )
      v35 = 0xFFFFFFFF;
    v47 = v35;
    v24 = opNewArray(v35, (const std::nothrow_t *)&std::nothrow);
  }
  else
  {
    v24 = opNewArray(v47, (const std::nothrow_t *)&std::nothrow);
  }
  v48 = (uint8_t *)v24;
  if ( v24 != 0 )
  {
    v43 = v47 - 1;
    if ( v47 != 0 )
    {
      v25 = -v24 & 0xF;
      if ( v25 > v47 )
        v25 = v47;
      if ( v25 == 0 )
      {
        v26 = (uint8_t *)v24;
        goto LABEL_36;
      }
      v26 = (uint8_t *)v24;
      v39 = v2;
      for ( j = 0; j < v25; ++j )
      {
        *v26 = 0;
        v28 = v47 - 2 - j;
        ++v26;
      }
      v43 = v28;
      v2 = v39;
      if ( v25 != v47 )
      {
LABEL_36:
        v38 = v47 - v25;
        v41 = (v47 - v25) >> 4;
        v40 = 16 * v41;
        if ( 16 * v41 == 0 )
          goto LABEL_40;
        v29 = (__m128i *)&v48[v25];
        v30 = 0;
        do
        {
          ++v30;
          *v29++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v30 < v41 );
        v26 += v40;
        v43 -= v40;
        if ( v38 != v40 )
        {
LABEL_40:
          v31 = v43;
          do
          {
            --v31;
            *v26++ = 0;
          }
          while ( v31 != -1 );
        }
      }
    }
  }
  v18 = (unsigned int)(uintptr_t)(v3[3]);
  if ( v18 != 0 )
  {
    v32 = v48;
    for ( k = 0; k < v18; ++k )
    {
      if ( v32 != nullptr )
      {
        *v32 = *((uint8_t *)v3[1] + k);
        v18 = (unsigned int)(uintptr_t)(v3[3]);
      }
      ++v32;
    }
  }
  v34 = *v3;
  v3[1] = v48;
  *v3 = v48;
  v3[2] = v48;
  v3[4] = (void *)v47;
  if ( v34 != nullptr )
  {
    opDeleteArray(v34);
    v48 = (uint8_t *)(v3[1]);
    v18 = (unsigned int)(uintptr_t)(v3[3]);
  }
LABEL_17:
  if ( &v48[v18] != nullptr )
  {
    v48[v18] = v45;
    v18 = (unsigned int)(uintptr_t)(v3[3]);
  }
  v3[3] = (void *)(v18 + 1);
  v17 = (unsigned int)(uintptr_t)(v3[12]);
  if ( v17 > *((uint32_t *)v2 + 133) )
    goto LABEL_14;
LABEL_20:
  v20 = (char *)v3[1];
  v21 = (uint8_t *)(v3[3]);
  if ( v20 != (char *)(uintptr_t)(&v21[(uint32_t)(uintptr_t)(v20)]) )
  {
    v22 = (char *)(&v21[(uint32_t)(uintptr_t)(v20) - 1]);
    if ( v20 < v22 )
    {
      do
      {
        v49 = *v20;
        *v20++ = *v22;
        *v22-- = v49;
      }
      while ( v20 < v22 );
      v21 = (uint8_t *)(v3[3]);
      v20 = (char *)v3[1];
    }
  }
  *((uint32_t *)a2 + 3) = (uint32_t)(uintptr_t)(v20);
  result = *((uint32_t *)a2 + 2);
  *((uint32_t *)a2 + 4) = (uint32_t)(uintptr_t)(v21);
  *((uint32_t *)a2 + 5) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::match  (binary VA: 0x12914a0)
// Original: marisa::grimoire::trie::LoudsTrie::match_
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::LoudsTrie::match(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::Agent::Self *a2, unsigned int a3)
{
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  marisa::grimoire::trie::LoudsTrie::Self *v13;
  char v14;
  int v15;
  unsigned int v16;
  marisa::grimoire::trie::LoudsTrie::Self *v17;
  char v18;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  int v26;
  marisa::grimoire::trie::Tail::Self *v27;
  marisa::Agent::Self *v28;
  int v29;
  unsigned int v30;
  int v31;
  int v32;
  marisa::grimoire::trie::Tail::Self *v33;

  v4 = *((uint32_t *)self + 128);
  v31 = *((uint32_t *)a2 + 6);
  v33 = (marisa::grimoire::trie::Tail::Self *)((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372));
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = 3 * (a3 & *((uint32_t *)self + 132));
      v6 = v4 + 12 * (a3 & *((uint32_t *)self + 132));
      if ( a3 == *(uint32_t *)(v6 + 4) )
        break;
      if ( ((*(uint32_t *)(*((uint32_t *)self + 54) + 4 * (a3 >> 5)) >> a3) & 1) != 0 )
      {
        v32 = *(uint8_t *)(*((uint32_t *)self + 80) + a3);
        v27 = (marisa::grimoire::trie::Tail::Self *)((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 208));
        if ( *((uint32_t *)self + 125) != 0 )
        {
          marisa::grimoire::vector::BitVector::rank1(v27, a3);
          v8 = *((uint32_t *)self + 90);
          v9 = v8 * v7;
          v10 = (v8 * v7) & 0x1F;
          v11 = v9 >> 5;
          if ( (unsigned int)(v10 + v8) <= 0x20 )
            v12 = *((uint32_t *)self + 91) & (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v11) >> v10);
          else
            v12 = *((uint32_t *)self + 91)
                & ((*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v11) >> v10)
                 | (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v11 + 4) << (32 - v10)));
          v13 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
          v28 = a2;
          v29 = v32 | (v12 << 8);
          if ( v13 != nullptr )
          {
            v14 = marisa::grimoire::trie::LoudsTrie::match(v13, a2, v29);
            goto LABEL_9;
          }
        }
        else
        {
          marisa::grimoire::vector::BitVector::rank1(v27, a3);
          v22 = *((uint32_t *)self + 90);
          v23 = v22 * v21;
          v24 = (v22 * v21) & 0x1F;
          v25 = v23 >> 5;
          if ( (unsigned int)(v24 + v22) <= 0x20 )
            v26 = *((uint32_t *)self + 91) & (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v25) >> v24);
          else
            v26 = *((uint32_t *)self + 91)
                & ((*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v25) >> v24)
                 | (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v25 + 4) << (32 - v24)));
          v29 = v32 | (v26 << 8);
          v28 = a2;
        }
        v14 = marisa::grimoire::trie::Tail::match(v33, v28, v29);
LABEL_9:
        if ( v14 == 0 )
          return 0;
        goto LABEL_10;
      }
      v15 = *(uint32_t *)(v31 + 52);
      if ( *(uint8_t *)(*((uint32_t *)self + 80) + a3) != *(uint8_t *)(*(uint32_t *)a2 + v15) )
        return 0;
      *(uint32_t *)(v31 + 52) = v15 + 1;
LABEL_10:
      if ( a3 <= *((uint32_t *)self + 133) )
        return 1;
      if ( *(uint32_t *)(v31 + 52) >= *((uint32_t *)a2 + 1) )
        return 0;
      a3 = marisa::grimoire::vector::BitVector::select1(self, a3) + ~a3;
      v4 = *((uint32_t *)self + 128);
    }
    v16 = *(uint32_t *)(v6 + 8);
    if ( v16 >> 8 == 0xFFFFFF )
    {
      v20 = *(uint32_t *)(v31 + 52);
      if ( *(uint8_t *)(*(uint32_t *)a2 + v20) != (uint8_t)v16 )
        return 0;
      *(uint32_t *)(v31 + 52) = v20 + 1;
    }
    else
    {
      v17 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
      v30 = 3 * (a3 & *((uint32_t *)self + 132));
      if ( v17 != nullptr )
        v18 = marisa::grimoire::trie::LoudsTrie::match(v17, a2, v16);
      else
        v18 = marisa::grimoire::trie::Tail::match(v33, a2, v16);
      v5 = v30;
      if ( v18 == 0 )
        return 0;
    }
    v4 = *((uint32_t *)self + 128);
    a3 = *(uint32_t *)(v4 + 4 * v5);
    if ( a3 == 0 )
      return 1;
    if ( *(uint32_t *)(v31 + 52) >= *((uint32_t *)a2 + 1) )
      return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::common_prefix_search  (binary VA: 0x12917b0)
// Original: marisa::grimoire::trie::LoudsTrie::common_prefix_search
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::LoudsTrie::common_prefix_search(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::Agent::Self *a2)
{
  int result;
  unsigned int *v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;

  result = 0;
  v3 = *((unsigned int **)a2 + 6);
  v4 = v3[15];
  if ( v4 != 3 )
  {
    if ( v4 == 1 )
    {
      if ( *((uint32_t *)a2 + 1) > v3[13] )
        goto LABEL_5;
LABEL_11:
      v3[15] = 3;
      return 0;
    }
    v3[12] = 0;
    v3[13] = 0;
    v3[15] = 1;
    v5 = 0;
    if ( (**((uint8_t **)self + 28) & 1) == 0 )
    {
      while ( *((uint32_t *)a2 + 1) > v5 )
      {
LABEL_5:
        result = marisa::grimoire::trie::LoudsTrie::find_child(self, a2);
        if ( (uint8_t)result == 0 )
        {
          v3[15] = 3;
          return result;
        }
        v5 = v3[13];
        if ( ((*(uint32_t *)(*((uint32_t *)self + 28) + 4 * (v3[12] >> 5)) >> v3[12]) & 1) != 0 )
        {
          v6 = *(uint32_t *)a2;
          *((uint32_t *)a2 + 4) = v5;
          *((uint32_t *)a2 + 3) = v6;
          goto LABEL_8;
        }
      }
      goto LABEL_11;
    }
    v7 = *(uint32_t *)a2;
    *((uint32_t *)a2 + 4) = 0;
    *((uint32_t *)a2 + 3) = v7;
LABEL_8:
    *((uint32_t *)a2 + 5) = marisa::grimoire::vector::BitVector::rank1(
                            (marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 104),
                            v3[12]);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::lookup  (binary VA: 0x12918a0)
// Original: marisa::grimoire::trie::LoudsTrie::lookup
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::LoudsTrie::lookup(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::Agent::Self *a2)
{
  unsigned int v2;
  unsigned int *v3;
  unsigned int v4;
  int result;
  int v6;

  v2 = 0;
  v3 = *((unsigned int **)a2 + 6);
  v3[12] = 0;
  v3[13] = 0;
  v3[15] = 0;
  while ( 1 )
  {
    v4 = *((uint32_t *)a2 + 1);
    if ( v4 <= v2 )
      break;
    if ( (uint8_t)marisa::grimoire::trie::LoudsTrie::find_child(self, a2) == 0 )
      return 0;
    v2 = v3[13];
  }
  result = 0;
  if ( ((*(uint32_t *)(*((uint32_t *)self + 28) + 4 * (v3[12] >> 5)) >> *((uint8_t *)v3 + 48)) & 1) != 0 )
  {
    v6 = *(uint32_t *)a2;
    *((uint32_t *)a2 + 4) = v4;
    *((uint32_t *)a2 + 3) = v6;
    *((uint32_t *)a2 + 5) = marisa::grimoire::vector::BitVector::rank1(
                            (marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 104),
                            v3[12]);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::prefix_match  (binary VA: 0x1291950)
// Original: marisa::grimoire::trie::LoudsTrie::prefix_match_
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::LoudsTrie::prefix_match(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::Agent::Self *a2, unsigned int a3)
{
  void **v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  marisa::grimoire::trie::LoudsTrie::Self *v10;
  char v11;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  marisa::grimoire::trie::LoudsTrie::Self *v19;
  char v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  __m128i *v25;
  unsigned int v26;
  int v27;
  uint8_t *v28;
  unsigned int i;
  void *v30;
  char *v31;
  char *v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  marisa::grimoire::trie::LoudsTrie::Self *v36;
  int v37;
  unsigned int v38;
  int v39;
  char v40;
  int v41;
  unsigned int v42;
  uint8_t *v43;
  unsigned int v44;
  char v45;

  v4 = *((void ***)a2 + 6);
  do
  {
    v44 = 3 * (*((uint32_t *)self + 132) & a3);
    v8 = *((uint32_t *)self + 128) + 12 * (*((uint32_t *)self + 132) & a3);
    if ( a3 == *(uint32_t *)(v8 + 4) )
    {
      v9 = *(uint32_t *)(v8 + 8);
      if ( v9 >> 8 == 0xFFFFFF )
      {
        v45 = v9;
        if ( (uint8_t)v9 != *((uint8_t *)v4[13] + *(uint32_t *)a2) )
          return 0;
        v31 = (char *)v4[3];
        if ( v31 + 1 > v4[4] )
        {
          sub_128F1F0((int)(uintptr_t)(v4), (unsigned int)(uintptr_t)(v31 + 1));
          v31 = (char *)v4[3];
        }
        v32 = &v31[(uint32_t)(uintptr_t)(v4[1])];
        if ( v32 != nullptr )
        {
          *v32 = v45;
          v31 = (char *)v4[3];
        }
        v4[13] = (char *)v4[13] + 1;
        v4[3] = v31 + 1;
      }
      else
      {
        v10 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
        if ( v10 != nullptr )
          v11 = marisa::grimoire::trie::LoudsTrie::prefix_match(v10, a2, v9);
        else
          v11 = marisa::grimoire::trie::Tail::prefix_match(
                  (marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372),
                  a2,
                  v9);
        if ( v11 == 0 )
          return 0;
      }
      a3 = *(uint32_t *)(*((uint32_t *)self + 128) + 4 * v44);
      if ( a3 == 0 )
        return 1;
    }
    else
    {
      v5 = *((uint32_t *)self + 80);
      if ( ((*(uint32_t *)(*((uint32_t *)self + 54) + 4 * (a3 >> 5)) >> a3) & 1) != 0 )
      {
        v41 = *(uint8_t *)(v5 + a3);
        marisa::grimoire::vector::BitVector::rank1((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 208), a3);
        v14 = *((uint32_t *)self + 90);
        v15 = v14 * v13;
        v16 = (v14 * v13) & 0x1F;
        v17 = v15 >> 5;
        if ( (unsigned int)(v16 + v14) <= 0x20 )
          v18 = *((uint32_t *)self + 91) & (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v17) >> v16);
        else
          v18 = *((uint32_t *)self + 91)
              & ((*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v17) >> v16)
               | (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v17 + 4) << (32 - v16)));
        v19 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
        v34 = v41 | (v18 << 8);
        if ( v19 != nullptr )
          v20 = marisa::grimoire::trie::LoudsTrie::prefix_match(v19, a2, v34);
        else
          v20 = marisa::grimoire::trie::Tail::prefix_match(
                  (marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372),
                  a2,
                  v34);
        if ( v20 == 0 )
          return 0;
      }
      else
      {
        v40 = *(uint8_t *)(v5 + a3);
        if ( v40 != *((uint8_t *)v4[13] + *(uint32_t *)a2) )
          return 0;
        v6 = (unsigned int)(uintptr_t)(v4[3]);
        v42 = v6 + 1;
        v7 = (unsigned int)(uintptr_t)(v4[4]);
        if ( v6 + 1 > v7 )
        {
          if ( v7 > v42 >> 1 )
          {
            v33 = 2 * v7;
            if ( v7 > 0x7FFFFFFF )
              v33 = 0xFFFFFFFF;
            v42 = v33;
            v21 = opNewArray(v33, (const std::nothrow_t *)&std::nothrow);
          }
          else
          {
            v21 = opNewArray(v42, (const std::nothrow_t *)&std::nothrow);
          }
          v43 = (uint8_t *)v21;
          if ( v21 != 0 )
          {
            v39 = v42 - 1;
            if ( v42 != 0 )
            {
              v22 = -v21 & 0xF;
              if ( v42 <= v22 )
                v22 = v42;
              if ( v22 == 0 )
                goto LABEL_64;
              v36 = self;
              v23 = 0;
              do
              {
                *(uint8_t *)v21 = 0;
                v24 = v42 - 2 - v23++;
                ++v21;
              }
              while ( v22 > v23 );
              v39 = v24;
              self = v36;
              if ( v42 != v22 )
              {
LABEL_64:
                v35 = v42 - v22;
                v38 = (v42 - v22) >> 4;
                v37 = 16 * v38;
                if ( 16 * v38 == 0 )
                  goto LABEL_39;
                v25 = (__m128i *)&v43[v22];
                v26 = 0;
                do
                {
                  ++v26;
                  *v25++ = g4_m128_from<__m128i>(0LL);
                }
                while ( v26 < v38 );
                v21 += v37;
                v39 -= v37;
                if ( v35 != v37 )
                {
LABEL_39:
                  v27 = v39;
                  do
                  {
                    --v27;
                    *(uint8_t *)v21++ = 0;
                  }
                  while ( v27 != -1 );
                }
              }
            }
          }
          v6 = (unsigned int)(uintptr_t)(v4[3]);
          if ( v6 != 0 )
          {
            v28 = v43;
            for ( i = 0; i < v6; ++i )
            {
              if ( v28 != nullptr )
              {
                *v28 = *((uint8_t *)v4[1] + i);
                v6 = (unsigned int)(uintptr_t)(v4[3]);
              }
              ++v28;
            }
          }
          v30 = *v4;
          v4[1] = v43;
          *v4 = v43;
          v4[2] = v43;
          v4[4] = (void *)v42;
          if ( v30 != nullptr )
          {
            opDeleteArray(v30);
            v43 = (uint8_t *)(v4[1]);
            v6 = (unsigned int)(uintptr_t)(v4[3]);
          }
        }
        else
        {
          v43 = (uint8_t *)(v4[1]);
        }
        if ( &v43[v6] != nullptr )
        {
          v43[v6] = v40;
          v6 = (unsigned int)(uintptr_t)(v4[3]);
        }
        v4[13] = (char *)v4[13] + 1;
        v4[3] = (void *)(v6 + 1);
      }
      if ( a3 <= *((uint32_t *)self + 133) )
        return 1;
      a3 = marisa::grimoire::vector::BitVector::select1(self, a3) + ~a3;
    }
  }
  while ( (unsigned int)(uintptr_t)(v4[13]) < *((uint32_t *)a2 + 1) );
  marisa::grimoire::trie::LoudsTrie::restore(self, a2, a3);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::predictive_search  (binary VA: 0x1291de0)
// Original: marisa::grimoire::trie::LoudsTrie::predictive_search
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::LoudsTrie::predictive_search(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::Agent::Self *a2)
{
  marisa::grimoire::trie::LoudsTrie::Self *v2;
  __m128i *v3;
  int result;
  int32_t v5;
  bool v6; // cc
  uint32_t i;
  int v8;
  int32_t v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int v17;
  marisa::grimoire::trie::LoudsTrie::Self *v18;
  unsigned int v19;
  unsigned int v20;
  int32_t v21;
  unsigned int v22;
  int v23;
  int32_t v24;
  uint32_t *v25;
  int32_t v26;
  unsigned int v27;
  char v28;
  int32_t v29;
  uint8_t *v30;
  int v31;
  int v32;
  unsigned int v33;
  uint8_t *v34;
  unsigned int j;
  unsigned int v36;
  __m128i *v37;
  unsigned int v38;
  unsigned int v39;
  uint32_t v40;
  uint8_t *v41;
  uint32_t k;
  void *v43;
  bool v44;
  int v45;
  int32_t v46;
  uint32_t *v47;
  unsigned int v48;
  int32_t v49;
  int32_t v50;
  int32_t v51;
  int32_t *v52;
  uint32_t v53;
  int v54;
  int32_t v55;
  unsigned int v56;
  unsigned int *v57;
  char v58;
  int32_t v59;
  unsigned int v60;
  marisa::grimoire::trie::LoudsTrie::Self *v61;
  int v62;
  unsigned int v63;
  int v64;
  unsigned int v65;
  uint8_t *v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int *v69;
  unsigned int v70;
  int v71;
  int32_t v72;

  v2 = self;
  v3 = *((__m128i **)a2 + 6);
  result = 0;
  v5 =g4_m128_lane<int32_t>(v3[3], 3);
  if ( v5 == 4 )
    return result;
  if ( v5 == 2 )
  {
    v8 =g4_m128_lane<int32_t>(v3[3], 2);
    v9 =g4_m128_lane<int32_t>(v3[2], 1);
    goto LABEL_25;
  }
  v6 =g4_m128_lane<int32_t>(v3[1], 0) <= 0x3Fu;
g4_m128_lane<int32_t>(*(v3), 3) = 0;
  if ( v6 )
    sub_128F1F0((int)(uintptr_t)(v3), 0x40u);
  v6 =g4_m128_lane<int32_t>(v3[2], 2) <= 3u;
g4_m128_lane<int32_t>(v3[2], 1) = 0;
  if ( v6 )
    sub_128F380((int)(uintptr_t)(g4_m128_lane<int32_t>(v3[1], 2)), 4u);
  v3[3] = G4_BITCAST<__m128i>(xmmword_1C7CB10);
  for ( i = 0; *((uint32_t *)a2 + 1) > i; i =g4_m128_lane<uint32_t>(v3[3], 1) )
  {
    result = marisa::grimoire::trie::LoudsTrie::predictive_find_child(self, a2);
    if ( (uint8_t)result == 0 )
    {
g4_m128_lane<int32_t>(v3[3], 3) = 4;
      return result;
    }
  }
  v2 = self;
  v50 =g4_m128_lane<int32_t>(v3[2], 1);
  v72 =g4_m128_lane<int32_t>(*(v3), 3);
  v51 =g4_m128_lane<int32_t>(v3[3], 0);
  if ( (unsigned int)(v50 + 1) >g4_m128_lane<int32_t>(v3[2], 2) )
  {
    v59 =g4_m128_lane<int32_t>(v3[3], 0);
    sub_128F380((int)(uintptr_t)(&g4_m128_lane<int32_t>(v3[1], 2)), v50 + 1);
    v50 =g4_m128_lane<int32_t>(v3[2], 1);
    v51 = v59;
  }
  v52 = (int32_t *)(g4_m128_lane<int32_t>(v3[1], 3) + 20 * v50);
  if ( v52 != nullptr )
  {
    *v52 = v51;
    v52[1] = 0;
    v52[2] = v72;
    v52[3] = -1;
    v52[4] = -1;
    v50 =g4_m128_lane<int32_t>(v3[2], 1);
  }
  v9 = v50 + 1;
  v53 = (uint32_t)g4_m128_lane<int32_t>(v3[3], 0) >> 5;
g4_m128_lane<int32_t>(v3[2], 1) = v9;
g4_m128_lane<int32_t>(v3[3], 2) = 1;
  v54 = *(uint32_t *)(*((uint32_t *)self + 28) + 4 * v53) >>g4_m128_lane<int8_t>(v3[3], 0);
  v8 = 1;
  if ( (v54 & 1) != 0 )
  {
    v55 =g4_m128_lane<int32_t>(*(v3), 3);
    *((uint32_t *)a2 + 3) =g4_m128_lane<int32_t>(*(v3), 1);
    *((uint32_t *)a2 + 4) = v55;
    *((uint32_t *)a2 + 5) = marisa::grimoire::vector::BitVector::rank1(
                            (marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 104),
g4_m128_lane<uint32_t>(v3[3], 0));
    return 1;
  }
  while ( 1 )
  {
LABEL_25:
    if ( v8 == v9 )
    {
      v57 = (unsigned int *)(g4_m128_lane<int32_t>(v3[1], 3) + 4 * (5 * v8 - 5));
      v45 = marisa::grimoire::vector::BitVector::select0(v2, *v57);
      v46 =g4_m128_lane<int32_t>(v3[2], 1);
      v71 = v45;
      v68 = *v57;
      if ( (unsigned int)(v46 + 1) >g4_m128_lane<int32_t>(v3[2], 2) )
      {
        sub_128F380((int)(uintptr_t)(&g4_m128_lane<int32_t>(v3[1], 2)), v46 + 1);
        v46 =g4_m128_lane<int32_t>(v3[2], 1);
      }
      v21 =g4_m128_lane<int32_t>(v3[1], 3);
      v47 = (uint32_t *)(v21 + 20 * v46);
      if ( v47 != nullptr )
      {
        v47[2] = 0;
        v47[3] = -1;
        v47[4] = -1;
        *v47 = v71 - v68;
        v47[1] = v71 + 1;
        v46 =g4_m128_lane<int32_t>(v3[2], 1);
        v21 =g4_m128_lane<int32_t>(v3[1], 3);
      }
g4_m128_lane<int32_t>(v3[2], 1) = v46 + 1;
      v8 =g4_m128_lane<int32_t>(v3[3], 2);
    }
    else
    {
      v21 =g4_m128_lane<int32_t>(v3[1], 3);
    }
    v69 = (unsigned int *)(v21 + 20 * v8);
    v22 = v69[1];
    v23 = *(uint32_t *)(*((uint32_t *)v2 + 2) + 4 * (v22 >> 5)) >> v22;
    v69[1] = v22 + 1;
    if ( (v23 & 1) != 0 )
      break;
    v24 =g4_m128_lane<int32_t>(v3[3], 2);
    if ( v24 == 1 )
    {
g4_m128_lane<int32_t>(v3[3], 3) = 4;
      return 0;
    }
    v25 = (uint32_t *)(g4_m128_lane<int32_t>(v3[1], 3) + 4 * (5 * v24 - 5));
    ++*v25;
    v26 =g4_m128_lane<int32_t>(v3[3], 2);
    v70 = *(uint32_t *)(g4_m128_lane<int32_t>(v3[1], 3) + 4 * (5 * v26 - 10) + 8);
    v27 =g4_m128_lane<uint32_t>(v3[1], 0);
    if ( v70 <= v27 )
      goto LABEL_30;
    v67 = *(uint32_t *)(g4_m128_lane<int32_t>(v3[1], 3) + 4 * (5 * v26 - 10) + 8);
    if ( v27 > v70 >> 1 )
    {
      v31 = 2 * v27;
      if ( v27 > 0x7FFFFFFF )
        v31 = -1;
      v67 = v31;
    }
    v32 = opNewArray(v67, (const std::nothrow_t *)&std::nothrow);
    v66 = (uint8_t *)v32;
    if ( v32 != 0 )
    {
      v65 = v67 - 1;
      if ( v67 != 0 )
      {
        v33 = -v32 & 0xF;
        if ( v33 > v67 )
          v33 = v67;
        if ( v33 == 0 )
        {
          v34 = (uint8_t *)v32;
LABEL_49:
          v60 = v67 - v33;
          v63 = (v67 - v33) >> 4;
          v62 = 16 * v63;
          if ( 16 * v63 == 0 )
            goto LABEL_53;
          v37 = (__m128i *)&v66[v33];
          v38 = 0;
          do
          {
            ++v38;
            *v37++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v38 < v63 );
          v65 -= v62;
          v34 += v62;
          if ( v60 != v62 )
          {
LABEL_53:
            v39 = v65;
            do
            {
              --v39;
              *v34++ = 0;
            }
            while ( v39 != -1 );
          }
          goto LABEL_55;
        }
        v34 = (uint8_t *)v32;
        v61 = v2;
        for ( j = 0; j < v33; ++j )
        {
          *v34 = 0;
          v36 = v67 - 2 - j;
          ++v34;
        }
        v65 = v36;
        v2 = v61;
        if ( v33 != v67 )
          goto LABEL_49;
      }
    }
LABEL_55:
    v40 =g4_m128_lane<uint32_t>(*(v3), 3);
    if ( v40 != 0 )
    {
      v41 = v66;
      for ( k = 0; k < v40; ++k )
      {
        if ( v41 != nullptr )
        {
          *v41 = *(uint8_t *)(g4_m128_lane<int32_t>(*(v3), 1) + k);
          v40 =g4_m128_lane<uint32_t>(*(v3), 3);
        }
        ++v41;
      }
    }
    v43 = (void *)g4_m128_lane<int32_t>(*(v3), 0);
    v44 =g4_m128_lane<int32_t>(*(v3), 0) == 0;
g4_m128_lane<int32_t>(*(v3), 0) = (int32_t)(uintptr_t)(v66);
g4_m128_lane<int32_t>(*(v3), 1) = (int32_t)(uintptr_t)(v66);
g4_m128_lane<int32_t>(*(v3), 2) = (int32_t)(uintptr_t)(v66);
g4_m128_lane<int32_t>(v3[1], 0) = v67;
    if ( !v44 )
      opDeleteArray(v43);
    v26 =g4_m128_lane<int32_t>(v3[3], 2);
LABEL_30:
g4_m128_lane<int32_t>(*(v3), 3) = v70;
    v8 = v26 - 1;
g4_m128_lane<int32_t>(v3[3], 2) = v26 - 1;
LABEL_24:
    v9 =g4_m128_lane<int32_t>(v3[2], 1);
  }
  ++g4_m128_lane<int32_t>(v3[3], 2);
  v10 = *v69;
  if ( ((*(uint32_t *)(*((uint32_t *)v2 + 54) + 4 * (*v69 >> 5)) >> *v69) & 1) != 0 )
  {
    v11 = v69[3];
    v12 = v11 + 1;
    if ( v11 == -1 )
    {
      marisa::grimoire::vector::BitVector::rank1((marisa::grimoire::trie::LoudsTrie::Self *)((char *)v2 + 208), v10);
      v10 = *v69;
    }
    v69[3] = v12;
    v64 = *(uint8_t *)(*((uint32_t *)v2 + 80) + v10);
    v13 = *((uint32_t *)v2 + 90);
    v14 = v13 * v12;
    v15 = (v13 * v12) & 0x1F;
    v16 = v14 >> 5;
    if ( (unsigned int)(v15 + v13) <= 0x20 )
      v17 = *((uint32_t *)v2 + 91) & (*(uint32_t *)(*((uint32_t *)v2 + 86) + 4 * v16) >> v15);
    else
      v17 = *((uint32_t *)v2 + 91)
          & ((*(uint32_t *)(*((uint32_t *)v2 + 86) + 4 * v16) >> v15)
           | (*(uint32_t *)(*((uint32_t *)v2 + 86) + 4 * v16 + 4) << (32 - v15)));
    v18 = *((marisa::grimoire::trie::LoudsTrie::Self **)v2 + 125);
    v56 = v64 | (v17 << 8);
    if ( v18 != nullptr )
      marisa::grimoire::trie::LoudsTrie::restore(v18, a2, v56);
    else
      marisa::grimoire::trie::Tail::restore((marisa::grimoire::trie::LoudsTrie::Self *)((char *)v2 + 372), a2, v56);
    v19 =g4_m128_lane<uint32_t>(*(v3), 3);
  }
  else
  {
    v28 = *(uint8_t *)(*((uint32_t *)v2 + 80) + v10);
    v29 =g4_m128_lane<int32_t>(*(v3), 3);
    if ( (unsigned int)(v29 + 1) >g4_m128_lane<int32_t>(v3[1], 0) )
    {
      v58 = v28;
      sub_128F1F0((int)(uintptr_t)(v3), v29 + 1);
      v29 =g4_m128_lane<int32_t>(*(v3), 3);
      v28 = v58;
    }
    v30 = (uint8_t *)(g4_m128_lane<int32_t>(*(v3), 1) + v29);
    if ( v30 != nullptr )
    {
      *v30 = v28;
      v29 =g4_m128_lane<int32_t>(*(v3), 3);
    }
    v19 = v29 + 1;
g4_m128_lane<int32_t>(*(v3), 3) = v19;
  }
  v20 = *v69;
  v69[2] = v19;
  if ( ((*(uint32_t *)(*((uint32_t *)v2 + 28) + 4 * (v20 >> 5)) >> v20) & 1) == 0 )
  {
    v8 =g4_m128_lane<int32_t>(v3[3], 2);
    goto LABEL_24;
  }
  v48 = v69[4];
  if ( v48 == -1 )
    v69[4] = marisa::grimoire::vector::BitVector::rank1((marisa::grimoire::trie::LoudsTrie::Self *)((char *)v2 + 104), v20);
  else
    v69[4] = v48 + 1;
  v49 =g4_m128_lane<int32_t>(*(v3), 3);
  *((uint32_t *)a2 + 3) =g4_m128_lane<int32_t>(*(v3), 1);
  *((uint32_t *)a2 + 4) = v49;
  *((uint32_t *)a2 + 5) = v69[4];
  return 1;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::Destroy  (binary VA: 0x1292c60)
// Original: marisa::grimoire::trie::LoudsTrie::~LoudsTrie
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::LoudsTrie::Destroy(marisa::grimoire::trie::LoudsTrie::Self *self)
{
  void *v1;

  marisa::grimoire::io::Mapper::Destroy((marisa::grimoire::io::Mapper::Self *)((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 552)));
  if ( *((uint32_t *)self + 126) != 0 )
    opDeleteArray(*((void **)self + 126));
  v1 = *((void **)self + 125);
  if ( v1 != nullptr )
  {
    marisa::grimoire::trie::LoudsTrie::Destroy(*((marisa::grimoire::trie::LoudsTrie::Self **)self + 125));
    opDelete(v1);
  }
  marisa::grimoire::vector::BitVector::Destroy((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 396));
  if ( *((uint32_t *)self + 93) != 0 )
    opDeleteArray(*((void **)self + 93));
  if ( *((uint32_t *)self + 84) != 0 )
    opDeleteArray(*((void **)self + 84));
  if ( *((uint32_t *)self + 78) != 0 )
    opDeleteArray(*((void **)self + 78));
  marisa::grimoire::vector::BitVector::Destroy((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 208));
  marisa::grimoire::vector::BitVector::Destroy((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 104));
  marisa::grimoire::vector::BitVector::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::Construct  (binary VA: 0x1292dc0)
// Original: marisa::grimoire::trie::LoudsTrie::LoudsTrie
// ----------------------------------------------------------------------------
marisa::grimoire::trie::LoudsTrie::Self * marisa::grimoire::trie::LoudsTrie::Construct(marisa::grimoire::trie::LoudsTrie::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint8_t *)self + 20) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint8_t *)self + 52) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint8_t *)self + 76) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint8_t *)self + 100) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint8_t *)self + 124) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint8_t *)self + 156) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint8_t *)self + 180) = 0;
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 48) = 0;
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 50) = 0;
  *((uint8_t *)self + 204) = 0;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0;
  *((uint32_t *)self + 55) = 0;
  *((uint32_t *)self + 56) = 0;
  *((uint8_t *)self + 228) = 0;
  *((uint32_t *)self + 58) = 0;
  *((uint32_t *)self + 59) = 0;
  *((uint32_t *)self + 60) = 0;
  *((uint32_t *)self + 61) = 0;
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint8_t *)self + 260) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 67) = 0;
  *((uint32_t *)self + 68) = 0;
  *((uint32_t *)self + 69) = 0;
  *((uint32_t *)self + 70) = 0;
  *((uint8_t *)self + 284) = 0;
  *((uint32_t *)self + 72) = 0;
  *((uint32_t *)self + 73) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 75) = 0;
  *((uint32_t *)self + 76) = 0;
  *((uint8_t *)self + 308) = 0;
  *((uint32_t *)self + 78) = 0;
  *((uint32_t *)self + 79) = 0;
  *((uint32_t *)self + 80) = 0;
  *((uint32_t *)self + 81) = 0;
  *((uint32_t *)self + 82) = 0;
  *((uint8_t *)self + 332) = 0;
  *((uint32_t *)self + 84) = 0;
  *((uint32_t *)self + 85) = 0;
  *((uint32_t *)self + 86) = 0;
  *((uint32_t *)self + 87) = 0;
  *((uint32_t *)self + 88) = 0;
  *((uint8_t *)self + 356) = 0;
  *((uint32_t *)self + 90) = 0;
  *((uint32_t *)self + 91) = 0;
  *((uint32_t *)self + 92) = 0;
  marisa::grimoire::trie::Tail::Construct((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372));
  *((uint32_t *)self + 125) = 0;
  *((uint32_t *)self + 126) = 0;
  *((uint32_t *)self + 127) = 0;
  *((uint32_t *)self + 128) = 0;
  *((uint32_t *)self + 129) = 0;
  *((uint32_t *)self + 130) = 0;
  *((uint8_t *)self + 524) = 0;
  *((uint32_t *)self + 132) = 0;
  *((uint32_t *)self + 133) = 0;
  *((uint32_t *)self + 134) = 3;
  *((uint32_t *)self + 135) = 512;
  *((uint32_t *)self + 136) = 4096;
  *((uint32_t *)self + 137) = 0x20000;
  return (marisa::grimoire::trie::LoudsTrie::Self *)(marisa::grimoire::io::Mapper::Construct((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 552)));
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::clear  (binary VA: 0x1293220)
// Original: marisa::grimoire::trie::LoudsTrie::clear
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::LoudsTrie::clear(marisa::grimoire::trie::LoudsTrie::Self *self)
{
  uint8_t v1[576];

  marisa::grimoire::trie::LoudsTrie::Construct((marisa::grimoire::trie::LoudsTrie::Self *)v1);
  marisa::grimoire::trie::LoudsTrie::swap((marisa::grimoire::trie::LoudsTrie::Self *)v1, self);
  marisa::grimoire::trie::LoudsTrie::Destroy((marisa::grimoire::trie::LoudsTrie::Self *)v1);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::map  (binary VA: 0x12932a0)
// Original: marisa::grimoire::trie::LoudsTrie::map_
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::LoudsTrie::map(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::grimoire::io::Mapper::Self *a2)
{
  void *v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  void *v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  void *v46;
  int v47;
  int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  unsigned int *v68;
  void *v69;
  int v70;
  int v71;
  int v72;
  unsigned int v73;
  int v74;
  int v75;
  uint32_t *v76;
  void *v77;
  unsigned int v78;
  int *v79;
  void *v80;
  int v81;
  int v82;
  int v83;
  unsigned int v84;
  int v85;
  unsigned int v86;
  int v87;
  int v88;
  unsigned int *v89;
  void *v90;
  int v91;
  int v92;
  int v93;
  unsigned int v94;
  int v95;
  int v96;
  unsigned int v97;
  int v98;
  unsigned int v99;
  unsigned int v100;
  unsigned int v101;
  __m128i v102;
  bool v103;
  unsigned int v104;
  int result;
  __m128i v106;
  uint64_t v107; // xmm1_8
  g4_int128_t v108;
  marisa::grimoire::trie::LoudsTrie::Self *v109;
  marisa::grimoire::trie::LoudsTrie::Self *v110;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v111;
  typedef unsigned int _g4_t_v112;
  typedef unsigned int _g4_t_v113;
  typedef uint64_t _g4_t_v114;
  typedef int _g4_t_v115;
  typedef unsigned int _g4_t_v116;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v117;
  typedef int _g4_t_v118;
  typedef void *_g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef unsigned int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef char _g4_t_v124;
  typedef unsigned int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef char _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef char _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef char _g4_t_v144;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v111)) > _g4_s0 ? (0u + sizeof(_g4_t_v111)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v112)) > _g4_s1 ? (4u + sizeof(_g4_t_v112)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v113)) > _g4_s2 ? (8u + sizeof(_g4_t_v113)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v114)) > _g4_s3 ? (8u + sizeof(_g4_t_v114)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v115)) > _g4_s4 ? (8u + sizeof(_g4_t_v115)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v116)) > _g4_s5 ? (8u + sizeof(_g4_t_v116)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v117)) > _g4_s6 ? (8u + sizeof(_g4_t_v117)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v118)) > _g4_s7 ? (24u + sizeof(_g4_t_v118)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v119)) > _g4_s8 ? (48u + sizeof(_g4_t_v119)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v120)) > _g4_s9 ? (52u + sizeof(_g4_t_v120)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v121)) > _g4_s10 ? (56u + sizeof(_g4_t_v121)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v122)) > _g4_s11 ? (60u + sizeof(_g4_t_v122)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v123)) > _g4_s12 ? (64u + sizeof(_g4_t_v123)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v124)) > _g4_s13 ? (68u + sizeof(_g4_t_v124)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v125)) > _g4_s14 ? (72u + sizeof(_g4_t_v125)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v126)) > _g4_s15 ? (76u + sizeof(_g4_t_v126)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v127)) > _g4_s16 ? (80u + sizeof(_g4_t_v127)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v128)) > _g4_s17 ? (84u + sizeof(_g4_t_v128)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v129)) > _g4_s18 ? (88u + sizeof(_g4_t_v129)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v130)) > _g4_s19 ? (92u + sizeof(_g4_t_v130)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v131)) > _g4_s20 ? (96u + sizeof(_g4_t_v131)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v132)) > _g4_s21 ? (100u + sizeof(_g4_t_v132)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v133)) > _g4_s22 ? (104u + sizeof(_g4_t_v133)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v134)) > _g4_s23 ? (108u + sizeof(_g4_t_v134)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v135)) > _g4_s24 ? (112u + sizeof(_g4_t_v135)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v136)) > _g4_s25 ? (116u + sizeof(_g4_t_v136)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v137)) > _g4_s26 ? (120u + sizeof(_g4_t_v137)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v138)) > _g4_s27 ? (124u + sizeof(_g4_t_v138)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v139)) > _g4_s28 ? (128u + sizeof(_g4_t_v139)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v140)) > _g4_s29 ? (132u + sizeof(_g4_t_v140)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v141)) > _g4_s30 ? (136u + sizeof(_g4_t_v141)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v142)) > _g4_s31 ? (140u + sizeof(_g4_t_v142)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v143)) > _g4_s32 ? (144u + sizeof(_g4_t_v143)) : _g4_s32,
    _g4_s34 = (148u + sizeof(_g4_t_v144)) > _g4_s33 ? (148u + sizeof(_g4_t_v144)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 0u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 4u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 8u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 8u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 8u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 8u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 8u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 24u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 48u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 52u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 56u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 60u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 64u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 68u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 72u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 76u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 80u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 84u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 88u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 92u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 96u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 100u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 104u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 108u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 112u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 116u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 120u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 124u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 128u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 132u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 136u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 140u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 144u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 148u);

  v119 = nullptr;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  sub_1292730((int)(uintptr_t)(&v119), a2);
  v2 = *(void **)self;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v119);
  v119 = v2;
  v3 = v120;
  v120 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = v3;
  v4 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 2) = v121;
  v121 = v4;
  v5 = v122;
  v122 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 3) = v5;
  v6 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 4) = v123;
  v123 = v6;
  LOBYTE(v6) = *((uint8_t *)self + 20);
  *((uint8_t *)self + 20) = v124;
  v124 = v6;
  v7 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 6) = v125;
  v125 = v7;
  v8 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 7) = v126;
  v126 = v8;
  v9 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 8) = v127;
  v127 = v9;
  v10 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 9) = v128;
  v128 = v10;
  v11 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 10) = v129;
  v129 = v11;
  v12 = *((uint32_t *)self + 11);
  *((uint32_t *)self + 11) = v130;
  v130 = v12;
  v13 = *((uint32_t *)self + 12);
  *((uint32_t *)self + 12) = v131;
  v131 = v13;
  LOBYTE(v13) = *((uint8_t *)self + 52);
  *((uint8_t *)self + 52) = v132;
  v132 = v13;
  v14 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 14) = v133;
  v133 = v14;
  v15 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 15) = v134;
  v134 = v15;
  v16 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 16) = v135;
  v135 = v16;
  v17 = *((uint32_t *)self + 17);
  *((uint32_t *)self + 17) = v136;
  v136 = v17;
  v18 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 18) = v137;
  v137 = v18;
  LOBYTE(v18) = *((uint8_t *)self + 76);
  *((uint8_t *)self + 76) = v138;
  v138 = v18;
  v19 = *((uint32_t *)self + 20);
  *((uint32_t *)self + 20) = v139;
  v139 = v19;
  v20 = *((uint32_t *)self + 21);
  *((uint32_t *)self + 21) = v140;
  v140 = v20;
  v21 = *((uint32_t *)self + 22);
  *((uint32_t *)self + 22) = v141;
  v141 = v21;
  v22 = *((uint32_t *)self + 23);
  *((uint32_t *)self + 23) = v142;
  v142 = v22;
  v23 = *((uint32_t *)self + 24);
  *((uint32_t *)self + 24) = v143;
  v143 = v23;
  LOBYTE(v23) = *((uint8_t *)self + 100);
  *((uint8_t *)self + 100) = v144;
  v144 = v23;
  marisa::grimoire::vector::BitVector::Destroy((marisa::grimoire::vector::BitVector::Self *)&v119);
  v119 = nullptr;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  sub_1292730((int)(uintptr_t)(&v119), a2);
  v24 = *((void **)self + 26);
  *((uint32_t *)self + 26) = (uint32_t)(uintptr_t)(v119);
  v119 = v24;
  v25 = v120;
  v120 = *((uint32_t *)self + 27);
  *((uint32_t *)self + 27) = v25;
  v26 = *((uint32_t *)self + 28);
  *((uint32_t *)self + 28) = v121;
  v121 = v26;
  v27 = v122;
  v122 = *((uint32_t *)self + 29);
  *((uint32_t *)self + 29) = v27;
  v28 = *((uint32_t *)self + 30);
  *((uint32_t *)self + 30) = v123;
  v123 = v28;
  LOBYTE(v28) = *((uint8_t *)self + 124);
  *((uint8_t *)self + 124) = v124;
  v124 = v28;
  v29 = *((uint32_t *)self + 32);
  *((uint32_t *)self + 32) = v125;
  v125 = v29;
  v30 = *((uint32_t *)self + 33);
  *((uint32_t *)self + 33) = v126;
  v126 = v30;
  v31 = *((uint32_t *)self + 34);
  *((uint32_t *)self + 34) = v127;
  v127 = v31;
  v32 = *((uint32_t *)self + 35);
  *((uint32_t *)self + 35) = v128;
  v128 = v32;
  v33 = *((uint32_t *)self + 36);
  *((uint32_t *)self + 36) = v129;
  v129 = v33;
  v34 = *((uint32_t *)self + 37);
  *((uint32_t *)self + 37) = v130;
  v130 = v34;
  v35 = *((uint32_t *)self + 38);
  *((uint32_t *)self + 38) = v131;
  v131 = v35;
  LOBYTE(v35) = *((uint8_t *)self + 156);
  *((uint8_t *)self + 156) = v132;
  v132 = v35;
  v36 = *((uint32_t *)self + 40);
  *((uint32_t *)self + 40) = v133;
  v133 = v36;
  v37 = *((uint32_t *)self + 41);
  *((uint32_t *)self + 41) = v134;
  v134 = v37;
  v38 = *((uint32_t *)self + 42);
  *((uint32_t *)self + 42) = v135;
  v135 = v38;
  v39 = *((uint32_t *)self + 43);
  *((uint32_t *)self + 43) = v136;
  v136 = v39;
  v40 = *((uint32_t *)self + 44);
  *((uint32_t *)self + 44) = v137;
  v137 = v40;
  LOBYTE(v40) = *((uint8_t *)self + 180);
  *((uint8_t *)self + 180) = v138;
  v138 = v40;
  v41 = *((uint32_t *)self + 46);
  *((uint32_t *)self + 46) = v139;
  v139 = v41;
  v42 = *((uint32_t *)self + 47);
  *((uint32_t *)self + 47) = v140;
  v140 = v42;
  v43 = *((uint32_t *)self + 48);
  *((uint32_t *)self + 48) = v141;
  v141 = v43;
  v44 = *((uint32_t *)self + 49);
  *((uint32_t *)self + 49) = v142;
  v142 = v44;
  v45 = *((uint32_t *)self + 50);
  *((uint32_t *)self + 50) = v143;
  v143 = v45;
  LOBYTE(v45) = *((uint8_t *)self + 204);
  *((uint8_t *)self + 204) = v144;
  v144 = v45;
  marisa::grimoire::vector::BitVector::Destroy((marisa::grimoire::vector::BitVector::Self *)&v119);
  v119 = nullptr;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  sub_1292730((int)(uintptr_t)(&v119), a2);
  v46 = *((void **)self + 52);
  *((uint32_t *)self + 52) = (uint32_t)(uintptr_t)(v119);
  v119 = v46;
  v47 = v120;
  v120 = *((uint32_t *)self + 53);
  *((uint32_t *)self + 53) = v47;
  v48 = *((uint32_t *)self + 54);
  *((uint32_t *)self + 54) = v121;
  v121 = v48;
  v49 = v122;
  v122 = *((uint32_t *)self + 55);
  *((uint32_t *)self + 55) = v49;
  v50 = *((uint32_t *)self + 56);
  *((uint32_t *)self + 56) = v123;
  v123 = v50;
  LOBYTE(v50) = *((uint8_t *)self + 228);
  *((uint8_t *)self + 228) = v124;
  v124 = v50;
  v51 = *((uint32_t *)self + 58);
  *((uint32_t *)self + 58) = v125;
  v125 = v51;
  v52 = *((uint32_t *)self + 59);
  *((uint32_t *)self + 59) = v126;
  v126 = v52;
  v53 = *((uint32_t *)self + 60);
  *((uint32_t *)self + 60) = v127;
  v127 = v53;
  v54 = *((uint32_t *)self + 61);
  *((uint32_t *)self + 61) = v128;
  v128 = v54;
  v55 = *((uint32_t *)self + 62);
  *((uint32_t *)self + 62) = v129;
  v129 = v55;
  v56 = *((uint32_t *)self + 63);
  *((uint32_t *)self + 63) = v130;
  v130 = v56;
  v57 = *((uint32_t *)self + 64);
  *((uint32_t *)self + 64) = v131;
  v131 = v57;
  LOBYTE(v57) = *((uint8_t *)self + 260);
  *((uint8_t *)self + 260) = v132;
  v132 = v57;
  v58 = *((uint32_t *)self + 66);
  *((uint32_t *)self + 66) = v133;
  v133 = v58;
  v59 = *((uint32_t *)self + 67);
  *((uint32_t *)self + 67) = v134;
  v134 = v59;
  v60 = *((uint32_t *)self + 68);
  *((uint32_t *)self + 68) = v135;
  v135 = v60;
  v61 = *((uint32_t *)self + 69);
  *((uint32_t *)self + 69) = v136;
  v136 = v61;
  v62 = *((uint32_t *)self + 70);
  *((uint32_t *)self + 70) = v137;
  v137 = v62;
  LOBYTE(v62) = *((uint8_t *)self + 284);
  *((uint8_t *)self + 284) = v138;
  v138 = v62;
  v63 = *((uint32_t *)self + 72);
  *((uint32_t *)self + 72) = v139;
  v139 = v63;
  v64 = *((uint32_t *)self + 73);
  *((uint32_t *)self + 73) = v140;
  v140 = v64;
  v65 = *((uint32_t *)self + 74);
  *((uint32_t *)self + 74) = v141;
  v141 = v65;
  v66 = *((uint32_t *)self + 75);
  *((uint32_t *)self + 75) = v142;
  v142 = v66;
  v67 = *((uint32_t *)self + 76);
  *((uint32_t *)self + 76) = v143;
  v143 = v67;
  LOBYTE(v67) = *((uint8_t *)self + 308);
  *((uint8_t *)self + 308) = v144;
  v144 = v67;
  marisa::grimoire::vector::BitVector::Destroy((marisa::grimoire::vector::BitVector::Self *)&v119);
  v119 = nullptr;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v68 = (unsigned int *)marisa::grimoire::io::Mapper::map_data(a2, 8u);
  v113 = *v68;
  if ( v68[1] != 0 )
    abort();
  v121 = marisa::grimoire::io::Mapper::map_data(a2, *v68);
  marisa::grimoire::io::Mapper::seek(a2, -v113 & 7);
  v122 = v113;
  if ( v124 != 0 )
    abort();
  v69 = *((void **)self + 78);
  *((uint32_t *)self + 78) = (uint32_t)(uintptr_t)(v119);
  v70 = v120;
  v120 = *((uint32_t *)self + 79);
  v71 = *((uint32_t *)self + 80);
  *((uint32_t *)self + 79) = v70;
  v72 = v121;
  v121 = v71;
  v73 = *((uint32_t *)self + 81);
  *((uint32_t *)self + 80) = v72;
  v122 = v73;
  v74 = *((uint32_t *)self + 82);
  *((uint32_t *)self + 81) = v113;
  v75 = v123;
  v123 = v74;
  v119 = v69;
  LOBYTE(v74) = *((uint8_t *)self + 332);
  *((uint32_t *)self + 82) = v75;
  *((uint8_t *)self + 332) = 1;
  v124 = v74;
  if ( v69 != nullptr )
    opDeleteArray(v69);
  v119 = nullptr;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v76 = (uint32_t *)marisa::grimoire::io::Mapper::map_data(a2, 8u);
  LODWORD(v114) = *v76;
  if ( v76[1] != 0 )
    abort();
  if ( (v114 & 3) != 0 )
    abort();
  HIDWORD(v114) = v76[1];
  v118 = marisa::grimoire::io::Mapper::map_data(a2, 4 * (v114 >> 2));
  marisa::grimoire::io::Mapper::seek(a2, -(int)v114 & 7);
  v77 = v119;
  v119 = nullptr;
  v120 = 0;
  v121 = v118;
  v122 = v114 >> 2;
  v123 = 0;
  v124 = 1;
  if ( v77 != nullptr )
    opDeleteArray(v77);
  v78 = *(uint32_t *)marisa::grimoire::io::Mapper::map_data(a2, 4u);
  if ( v78 > 0x20 )
    abort();
  v125 = v78;
  v126 = *(uint32_t *)marisa::grimoire::io::Mapper::map_data(a2, 4u);
  v79 = (int *)marisa::grimoire::io::Mapper::map_data(a2, 8u);
  v115 = *v79;
  if ( v79[1] != 0 )
    abort();
  v80 = *((void **)self + 84);
  v81 = v120;
  *((uint32_t *)self + 84) = (uint32_t)(uintptr_t)(v119);
  v82 = *((uint32_t *)self + 85);
  *((uint32_t *)self + 85) = v81;
  v120 = v82;
  v83 = *((uint32_t *)self + 86);
  *((uint32_t *)self + 86) = v121;
  v121 = v83;
  v84 = *((uint32_t *)self + 87);
  *((uint32_t *)self + 87) = v122;
  v122 = v84;
  v85 = *((uint32_t *)self + 88);
  *((uint32_t *)self + 88) = v123;
  v123 = v85;
  LOBYTE(v85) = *((uint8_t *)self + 356);
  v119 = v80;
  LOBYTE(v81) = v124;
  v124 = v85;
  *((uint8_t *)self + 356) = v81;
  v86 = v125;
  v125 = *((uint32_t *)self + 90);
  *((uint32_t *)self + 90) = v86;
  v87 = v126;
  v126 = *((uint32_t *)self + 91);
  *((uint32_t *)self + 91) = v87;
  v88 = *((uint32_t *)self + 92);
  *((uint32_t *)self + 92) = v115;
  v127 = v88;
  if ( v80 != nullptr )
    opDeleteArray(v80);
  marisa::grimoire::trie::Tail::map((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372), a2);
  if ( *((uint32_t *)self + 59) != 0 && *((uint32_t *)self + 96) == 0 )
  {
    v109 = (marisa::grimoire::trie::LoudsTrie::Self *)opNew(0x23Cu, (const std::nothrow_t *)&std::nothrow);
    v117 = v109;
    if ( v109 != nullptr )
    {
      marisa::grimoire::trie::LoudsTrie::Construct(v109);
      v110 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
      if ( v117 == v110 )
        goto LABEL_41;
    }
    else
    {
      v110 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
    }
    *((uint32_t *)self + 125) = (uint32_t)(uintptr_t)(v117);
    if ( v110 != nullptr )
    {
      v111 = v110;
      marisa::grimoire::trie::LoudsTrie::Destroy(v110);
      opDelete(v111);
      v117 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
    }
    if ( v117 == nullptr )
LABEL_41:
      abort();
    marisa::grimoire::trie::LoudsTrie::map(v117, a2);
  }
  v119 = nullptr;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v89 = (unsigned int *)marisa::grimoire::io::Mapper::map_data(a2, 8u);
  v112 = *v89;
  if ( v89[1] != 0 )
    abort();
  if ( *v89 % 0xCuLL != 0 )
    abort();
  v121 = marisa::grimoire::io::Mapper::map_data(a2, 12 * (v112 / 0xC));
  marisa::grimoire::io::Mapper::seek(a2, -v112 & 7);
  v122 = v112 / 0xC;
  if ( v124 != 0 )
    abort();
  v90 = *((void **)self + 126);
  *((uint32_t *)self + 126) = (uint32_t)(uintptr_t)(v119);
  v91 = v120;
  v120 = *((uint32_t *)self + 127);
  v92 = *((uint32_t *)self + 128);
  *((uint32_t *)self + 127) = v91;
  v93 = v121;
  v121 = v92;
  v94 = *((uint32_t *)self + 129);
  *((uint32_t *)self + 128) = v93;
  v122 = v94;
  v95 = *((uint32_t *)self + 130);
  *((uint32_t *)self + 129) = v112 / 0xC;
  v96 = v123;
  v123 = v95;
  v119 = v90;
  LOBYTE(v95) = *((uint8_t *)self + 524);
  *((uint32_t *)self + 130) = v96;
  v124 = v95;
  *((uint8_t *)self + 524) = 1;
  v97 = v112 / 0xC;
  if ( v90 != nullptr )
  {
    opDeleteArray(v90);
    v97 = *((uint32_t *)self + 129);
  }
  *((uint32_t *)self + 132) = v97 - 1;
  *((uint32_t *)self + 133) = *(uint32_t *)marisa::grimoire::io::Mapper::map_data(a2, 4u);
  v98 = *(uint32_t *)marisa::grimoire::io::Mapper::map_data(a2, 4u);
  if ( (v98 & 0xFFF00000) != 0 )
    goto LABEL_41;
  v99 = 3;
  v116 = 256;
  if ( (v98 & 0x7F) != 0 )
    v99 = v98 & 0x7F;
  v100 = v98 & 0xF80;
  if ( v100 != 256 )
  {
    if ( v100 <= 0x100 )
    {
      v116 = 128;
      if ( v100 == 128 )
        goto LABEL_26;
    }
    else
    {
      v116 = 1024;
      if ( v100 == 1024 )
        goto LABEL_26;
      v116 = 2048;
      if ( v100 == 2048 )
        goto LABEL_26;
    }
    v116 = 512;
  }
LABEL_26:
  v101 = 4096;
  v102 = _mm_cvtsi32_si128(v99);
  if ( (v98 & 0xF000) == 0x2000 )
    v101 = 0x2000;
  v103 = (v98 & 0xF0000) == 0x10000;
  v104 = 0x20000;
  result = 0x10000;
  v106 = _mm_cvtsi32_si128(v101);
  if ( v103 )
    v104 = 0x10000;
  v107 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v106, _mm_cvtsi32_si128(v104)), 0);
  *(uint64_t *)&v108 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v102, _mm_cvtsi32_si128(v116)), 0);
  *((uint64_t *)&v108 + 1) = v107;
  *(g4_int128_t *)((char *)self + 536) = v108;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::map_ea1294370  (binary VA: 0x1294370)
// Original: marisa::grimoire::trie::LoudsTrie::map
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::LoudsTrie::map_ea1294370(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::grimoire::io::Mapper::Self *a2)
{
  int v2;
  int i;
  typedef uint8_t _g4_t_v4[552];
  typedef uint8_t _g4_t_v5[32];
  enum : size_t {
    _g4_s0 = 656u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (556u + sizeof(_g4_t_v5)) > _g4_s1 ? (556u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 556u);

  v2 = marisa::grimoire::io::Mapper::map_data(a2, 0x10u);
  for ( i = 0; i != 16; ++i )
  {
    if ( *(uint8_t *)(v2 + i) != g4_fnstatic_55badd6722[i] )
      abort();
  }
  marisa::grimoire::trie::LoudsTrie::Construct((marisa::grimoire::trie::LoudsTrie::Self *)v4);
  marisa::grimoire::trie::LoudsTrie::map((marisa::grimoire::trie::LoudsTrie::Self *)v4, a2);
  marisa::grimoire::io::Mapper::swap((marisa::grimoire::io::Mapper::Self *)v5, a2);
  marisa::grimoire::trie::LoudsTrie::swap(self, (marisa::grimoire::trie::LoudsTrie::Self *)v4);
  marisa::grimoire::trie::LoudsTrie::Destroy((marisa::grimoire::trie::LoudsTrie::Self *)v4);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::read  (binary VA: 0x1294430)
// Original: marisa::grimoire::trie::LoudsTrie::read_
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::LoudsTrie::read(marisa::grimoire::trie::LoudsTrie::Self **self, marisa::grimoire::io::Reader::Self *a2)
{
  marisa::grimoire::trie::LoudsTrie::Self *v2;
  marisa::grimoire::trie::LoudsTrie::Self *v3;
  char *v4;
  char *v5;
  int v6;
  marisa::grimoire::trie::LoudsTrie::Self *v7;
  unsigned int v8;
  marisa::grimoire::trie::LoudsTrie::Self *v9;
  unsigned int v10;
  unsigned int v11;
  marisa::grimoire::trie::LoudsTrie::Self *v12;
  marisa::grimoire::trie::LoudsTrie::Self *v13;
  marisa::grimoire::trie::LoudsTrie::Self *v14;
  marisa::grimoire::trie::LoudsTrie::Self *v15;
  int v16;
  marisa::grimoire::trie::LoudsTrie::Self *v17;
  marisa::grimoire::trie::LoudsTrie::Self *v18;
  marisa::grimoire::trie::LoudsTrie::Self *v19;
  int v20;
  uint8_t *v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  __m128i *v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  uint32_t *v29;
  int v30;
  unsigned int v31;
  char *v32;
  char *v33;
  bool v34;
  int v35;
  char *v36;
  char *v37;
  char *v38;
  char *v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  __m128i v47;
  unsigned int v48;
  int result;
  __m128i v50;
  uint64_t v51; // xmm1_8
  g4_int128_t v52;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef char *_g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef char _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef unsigned int _g4_t_ptr[4];
  typedef char *_g4_t_v66;
  typedef char *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef unsigned int _g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef char _g4_t_v71;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v72;
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v73;
  typedef int _g4_t_v74;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v53)) > _g4_s0 ? (12u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v54)) > _g4_s1 ? (20u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v55)) > _g4_s2 ? (24u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v56)) > _g4_s3 ? (28u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v57)) > _g4_s4 ? (32u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v58)) > _g4_s5 ? (32u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v59)) > _g4_s6 ? (36u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v60)) > _g4_s7 ? (36u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v61)) > _g4_s8 ? (36u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v62)) > _g4_s9 ? (40u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v63)) > _g4_s10 ? (44u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v64)) > _g4_s11 ? (44u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_ptr)) > _g4_s12 ? (48u + sizeof(_g4_t_ptr)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v66)) > _g4_s13 ? (64u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v67)) > _g4_s14 ? (68u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v68)) > _g4_s15 ? (72u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v69)) > _g4_s16 ? (76u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v70)) > _g4_s17 ? (80u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v71)) > _g4_s18 ? (84u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v72)) > _g4_s19 ? (88u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v73)) > _g4_s20 ? (92u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v74)) > _g4_s21 ? (96u + sizeof(_g4_t_v74)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 36u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 72u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 80u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 84u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 88u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 92u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 96u);

  v2 = (marisa::grimoire::trie::LoudsTrie::Self *)self;
  marisa::grimoire::vector::BitVector::read((marisa::grimoire::vector::BitVector::Self *)self, a2);
  marisa::grimoire::vector::BitVector::read((marisa::grimoire::vector::BitVector::Self *)(self + 26), a2);
  marisa::grimoire::vector::BitVector::read((marisa::grimoire::vector::BitVector::Self *)(self + 52), a2);
  marisa::grimoire::vector::Vector_unsigned_char_7d5f7f::read(
    (marisa::grimoire::vector::Vector<unsigned char> *)(self + 78),
    a2);
  v66 = nullptr;
  v67 = nullptr;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = nullptr;
  v73 = nullptr;
  v74 = 0;
  sub_1292430((int)(uintptr_t)(&v66), a2);
  marisa::grimoire::io::Reader::read_data(a2, (char *)ptr, 4u);
  if ( ptr[0] > 0x20 )
    abort();
  v72 = (marisa::grimoire::trie::LoudsTrie::Self *)ptr[0];
  marisa::grimoire::io::Reader::read_data(a2, (char *)ptr, 4u);
  v73 = (marisa::grimoire::trie::LoudsTrie::Self *)ptr[0];
  marisa::grimoire::io::Reader::read_data(a2, (char *)ptr, 8u);
  v3 = (marisa::grimoire::trie::LoudsTrie::Self *)ptr[0];
  if ( ptr[1] != 0 )
    abort();
  v4 = (char *)*(self + 84);
  *(self + 84) = (marisa::grimoire::trie::LoudsTrie::Self *)v66;
  v5 = v67;
  v67 = (char *)*(self + 85);
  v6 = (int)(uintptr_t)(*(self + 86));
  *(self + 85) = (marisa::grimoire::trie::LoudsTrie::Self *)v5;
  v7 = (marisa::grimoire::trie::LoudsTrie::Self *)v68;
  v68 = v6;
  v8 = (unsigned int)(uintptr_t)(*(self + 87));
  *(self + 86) = v7;
  v9 = (marisa::grimoire::trie::LoudsTrie::Self *)v69;
  v69 = v8;
  v10 = (unsigned int)(uintptr_t)(*(self + 88));
  *(self + 87) = v9;
  v11 = v70;
  v70 = v10;
  LOBYTE(v10) = *((uint8_t *)self + 356);
  *(self + 88) = (marisa::grimoire::trie::LoudsTrie::Self *)v11;
  LOBYTE(v11) = v71;
  v71 = v10;
  v12 = *(self + 90);
  *((uint8_t *)self + 356) = v11;
  v13 = v72;
  v72 = v12;
  v14 = *(self + 91);
  *(self + 90) = v13;
  v15 = v73;
  v73 = v14;
  v16 = (int)(uintptr_t)(*(self + 92));
  v66 = v4;
  *(self + 91) = v15;
  *(self + 92) = v3;
  v74 = v16;
  if ( v4 != nullptr )
    opDeleteArray(v4);
  marisa::grimoire::trie::Tail::read((marisa::grimoire::trie::Tail::Self *)(self + 93), a2);
  if ( *(self + 59) != nullptr && *(self + 96) == nullptr )
  {
    v17 = (marisa::grimoire::trie::LoudsTrie::Self *)opNew(0x23Cu, (const std::nothrow_t *)&std::nothrow);
    v18 = v17;
    if ( v17 != nullptr )
    {
      marisa::grimoire::trie::LoudsTrie::Construct(v17);
      v19 = *(self + 125);
      if ( v18 == v19 )
        goto LABEL_70;
    }
    else
    {
      v19 = *(self + 125);
    }
    *(self + 125) = v18;
    if ( v19 != nullptr )
    {
      v53 = v19;
      marisa::grimoire::trie::LoudsTrie::Destroy(v19);
      opDelete(v53);
      v18 = *(self + 125);
    }
    if ( v18 == nullptr )
LABEL_70:
      abort();
    marisa::grimoire::trie::LoudsTrie::read(v18, a2);
  }
  v66 = nullptr;
  v67 = nullptr;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  marisa::grimoire::io::Reader::read_data(a2, (char *)ptr, 8u);
  if ( ptr[1] != 0 )
    abort();
  if ( ptr[0] % 0xCuLL != 0 )
    abort();
  v62 = *(uint64_t *)ptr / 0xCuLL;
  if ( v62 <= v70 )
    goto LABEL_40;
  if ( v70 > v62 >> 1 )
  {
    v59 = 0xFFFFFFFC;
    v54 = 357913941;
    if ( v70 <= 0xAAAAAAA )
    {
      v54 = 2 * v70;
      v59 = 24 * v70;
    }
  }
  else
  {
    v54 = *(uint64_t *)ptr / 0xCuLL;
    v59 = 12 * v62;
  }
  v20 = opNewArray(v59, (const std::nothrow_t *)&std::nothrow);
  if ( v20 != 0 )
  {
    v57 = v59 - 1;
    if ( v59 != 0 )
    {
      v21 = (uint8_t *)v20;
      v22 = -v20 & 0xF;
      if ( v22 > v59 )
        v22 = v59;
      if ( v22 == 0 )
        goto LABEL_76;
      v23 = 0;
      do
      {
        *v21 = 0;
        v24 = v59 - 2 - v23++;
        ++v21;
      }
      while ( v22 > v23 );
      v57 = v24;
      v2 = (marisa::grimoire::trie::LoudsTrie::Self *)self;
      if ( v59 != v22 )
      {
LABEL_76:
        v60 = v59 - v22;
        v55 = 16 * (v60 >> 4);
        if ( v55 == 0 )
          goto LABEL_30;
        v25 = (__m128i *)(v20 + v22);
        v26 = 0;
        do
        {
          ++v26;
          *v25++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v60 >> 4 > v26 );
        v21 += v55;
        v57 -= v55;
        if ( v60 != v55 )
        {
LABEL_30:
          v27 = v57;
          do
          {
            --v27;
            *v21++ = 0;
          }
          while ( v27 != -1 );
        }
      }
    }
  }
  v28 = v69;
  if ( v69 != 0 )
  {
    v56 = v2;
    v29 = (uint32_t *)v20;
    v30 = 0;
    v58 = (char *)v20;
    v31 = 0;
    do
    {
      if ( v29 != nullptr )
      {
        v32 = &v67[v30];
        *v29 = *(uint32_t *)&v67[v30];
        v29[1] = *((uint32_t *)v32 + 1);
        v29[2] = *((uint32_t *)v32 + 2);
        v28 = v69;
      }
      ++v31;
      v29 += 3;
      v30 += 12;
    }
    while ( v31 < v28 );
    v20 = (int)(uintptr_t)(v58);
    v2 = v56;
  }
  v33 = v66;
  v34 = v66 == nullptr;
  v66 = (char *)v20;
  v67 = (char *)v20;
  v68 = v20;
  v70 = v54;
  if ( !v34 )
  {
    opDeleteArray(v33);
LABEL_40:
    v20 = (int)(uintptr_t)(v67);
    v28 = v69;
  }
  if ( v62 > v28 )
  {
    v61 = v2;
    v35 = 12 * v28;
    do
    {
      v36 = (char *)(v35 + v20);
      if ( v35 + v20 != 0 )
      {
        *(uint32_t *)v36 = 0;
        *((uint32_t *)v36 + 1) = 0;
        *((uint32_t *)v36 + 2) = (uint32_t)(uintptr_t)(sub_800000);
        v20 = (int)(uintptr_t)(v67);
      }
      ++v28;
      v35 += 12;
    }
    while ( v62 > v28 );
    v2 = v61;
  }
  v69 = v62;
  if ( v20 == 0 && v62 != 0 )
    abort();
  marisa::grimoire::io::Reader::read_data(a2, (char *)v20, 12 * v62);
  marisa::grimoire::io::Reader::seek(a2, -ptr[0] & 7);
  v37 = v67;
  v38 = *((char **)v2 + 126);
  *((uint32_t *)v2 + 126) = (uint32_t)(uintptr_t)(v66);
  v39 = *((char **)v2 + 127);
  *((uint32_t *)v2 + 127) = (uint32_t)(uintptr_t)(v37);
  v67 = v39;
  v40 = *((uint32_t *)v2 + 128);
  *((uint32_t *)v2 + 128) = v68;
  v41 = *((uint32_t *)v2 + 129);
  v42 = v70;
  v68 = v40;
  v43 = v69;
  v69 = v41;
  v70 = *((uint32_t *)v2 + 130);
  *((uint32_t *)v2 + 130) = v42;
  v63 = *((uint8_t *)v2 + 524);
  v66 = v38;
  *((uint8_t *)v2 + 524) = v71;
  *((uint32_t *)v2 + 129) = v43;
  v71 = v63;
  if ( v38 != nullptr )
  {
    opDeleteArray(v38);
    v43 = *((uint32_t *)v2 + 129);
  }
  *((uint32_t *)v2 + 132) = v43 - 1;
  marisa::grimoire::io::Reader::read_data(a2, (char *)ptr, 4u);
  *((uint32_t *)v2 + 133) = ptr[0];
  marisa::grimoire::io::Reader::read_data(a2, (char *)ptr, 4u);
  if ( (ptr[0] & 0xFFF00000) != 0 )
    goto LABEL_70;
  v44 = 3;
  v64 = 256;
  if ( (ptr[0] & 0x7F) != 0 )
    v44 = ptr[0] & 0x7F;
  v45 = ptr[0] & 0xF80;
  if ( v45 != 256 )
  {
    if ( v45 <= 0x100 )
    {
      v64 = 128;
      if ( v45 == 128 )
        goto LABEL_57;
    }
    else
    {
      v64 = 1024;
      if ( v45 == 1024 )
        goto LABEL_57;
      v64 = 2048;
      if ( v45 == 2048 )
        goto LABEL_57;
    }
    v64 = 512;
  }
LABEL_57:
  v46 = 4096;
  v47 = _mm_cvtsi32_si128(v44);
  if ( (ptr[0] & 0xF000) == 0x2000 )
    v46 = 0x2000;
  v48 = 0x20000;
  result = 0x10000;
  v50 = _mm_cvtsi32_si128(v46);
  if ( (ptr[0] & 0xF0000) == 0x10000 )
    v48 = 0x10000;
  v51 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v50, _mm_cvtsi32_si128(v48)), 0);
  *(uint64_t *)&v52 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v47, _mm_cvtsi32_si128(v64)), 0);
  *((uint64_t *)&v52 + 1) = v51;
  *(g4_int128_t *)((char *)v2 + 536) = v52;
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::read  (binary VA: 0x1294be0)
// Original: marisa::grimoire::trie::LoudsTrie::read
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::LoudsTrie::read(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::grimoire::io::Reader::Self *a2)
{
  int i;
  typedef char _g4_t_ptr[20];
  typedef marisa::grimoire::trie::LoudsTrie::Self *_g4_t_v4[146];
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v4)) > _g4_s1 ? (20u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 20u);

  marisa::grimoire::io::Reader::read_data(a2, ptr, 0x10u);
  for ( i = 0; i != 16; ++i )
  {
    if ( ptr[i] != g4_fnstatic_55badd6722[i] )
      abort();
  }
  marisa::grimoire::trie::LoudsTrie::Construct((marisa::grimoire::trie::LoudsTrie::Self *)v4);
  marisa::grimoire::trie::LoudsTrie::read(v4, a2);
  marisa::grimoire::trie::LoudsTrie::swap(self, (marisa::grimoire::trie::LoudsTrie::Self *)v4);
  marisa::grimoire::trie::LoudsTrie::Destroy((marisa::grimoire::trie::LoudsTrie::Self *)v4);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::build  (binary VA: 0x1296cb0)
// Original: marisa::grimoire::trie::LoudsTrie::build_
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::LoudsTrie::build(marisa::grimoire::trie::LoudsTrie::Self *a1, int a2, uint32_t *a3)
{
  unsigned int v3;
  uint32_t *v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __m128i v10;
  int v11;
  unsigned int v12;
  __m128i v13;
  uint64_t v14; // xmm1_8
  g4_int128_t v15;
  unsigned int v16;
  unsigned int i;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  __m128i *v25;
  unsigned int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  void *v33;
  bool v34;
  unsigned int v35;
  char *v36;
  unsigned int v37;
  char *j;
  int v39;
  int v40;
  char *v41;
  int k;
  unsigned int v43;
  unsigned int *v44;
  int v45;
  int v46;
  unsigned int v47;
  uint8_t *v48;
  unsigned int v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  __m128i *v53;
  unsigned int v54;
  int v55;
  unsigned int v56;
  uint32_t *v57;
  unsigned int v58;
  uint32_t *v59;
  void *v60;
  int v61;
  uint32_t *v62;
  int v63;
  unsigned int v64;
  int *v65;
  int v66;
  int v67;
  uint32_t *v68;
  typedef unsigned int _g4_t_v69;
  typedef char *_g4_t_v70;
  typedef unsigned int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef unsigned int _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef char *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef unsigned int _g4_t_v80;
  typedef marisa::grimoire::vector::BitVector::Self *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef char *_g4_t_v84;
  typedef unsigned int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef void *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef unsigned int _g4_t_v91;
  typedef unsigned int _g4_t_v92;
  typedef char _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef char _g4_t_v99;
  typedef void *_g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef unsigned int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef char _g4_t_v105;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v69)) > _g4_s0 ? (8u + sizeof(_g4_t_v69)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v70)) > _g4_s1 ? (8u + sizeof(_g4_t_v70)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v71)) > _g4_s2 ? (12u + sizeof(_g4_t_v71)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v72)) > _g4_s3 ? (16u + sizeof(_g4_t_v72)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v73)) > _g4_s4 ? (16u + sizeof(_g4_t_v73)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v74)) > _g4_s5 ? (16u + sizeof(_g4_t_v74)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v75)) > _g4_s6 ? (20u + sizeof(_g4_t_v75)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v76)) > _g4_s7 ? (20u + sizeof(_g4_t_v76)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v77)) > _g4_s8 ? (20u + sizeof(_g4_t_v77)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v78)) > _g4_s9 ? (20u + sizeof(_g4_t_v78)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v79)) > _g4_s10 ? (24u + sizeof(_g4_t_v79)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v80)) > _g4_s11 ? (24u + sizeof(_g4_t_v80)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v81)) > _g4_s12 ? (24u + sizeof(_g4_t_v81)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v82)) > _g4_s13 ? (24u + sizeof(_g4_t_v82)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v83)) > _g4_s14 ? (28u + sizeof(_g4_t_v83)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v84)) > _g4_s15 ? (28u + sizeof(_g4_t_v84)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v85)) > _g4_s16 ? (28u + sizeof(_g4_t_v85)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v86)) > _g4_s17 ? (28u + sizeof(_g4_t_v86)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v87)) > _g4_s18 ? (28u + sizeof(_g4_t_v87)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v88)) > _g4_s19 ? (32u + sizeof(_g4_t_v88)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v89)) > _g4_s20 ? (36u + sizeof(_g4_t_v89)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v90)) > _g4_s21 ? (40u + sizeof(_g4_t_v90)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v91)) > _g4_s22 ? (44u + sizeof(_g4_t_v91)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v92)) > _g4_s23 ? (48u + sizeof(_g4_t_v92)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v93)) > _g4_s24 ? (52u + sizeof(_g4_t_v93)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v94)) > _g4_s25 ? (64u + sizeof(_g4_t_v94)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v95)) > _g4_s26 ? (68u + sizeof(_g4_t_v95)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v96)) > _g4_s27 ? (72u + sizeof(_g4_t_v96)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v97)) > _g4_s28 ? (76u + sizeof(_g4_t_v97)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v98)) > _g4_s29 ? (80u + sizeof(_g4_t_v98)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v99)) > _g4_s30 ? (84u + sizeof(_g4_t_v99)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v100)) > _g4_s31 ? (96u + sizeof(_g4_t_v100)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v101)) > _g4_s32 ? (100u + sizeof(_g4_t_v101)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v102)) > _g4_s33 ? (104u + sizeof(_g4_t_v102)) : _g4_s33,
    _g4_s35 = (108u + sizeof(_g4_t_v103)) > _g4_s34 ? (108u + sizeof(_g4_t_v103)) : _g4_s34,
    _g4_s36 = (112u + sizeof(_g4_t_v104)) > _g4_s35 ? (112u + sizeof(_g4_t_v104)) : _g4_s35,
    _g4_s37 = (116u + sizeof(_g4_t_v105)) > _g4_s36 ? (116u + sizeof(_g4_t_v105)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 8u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 12u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 16u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 16u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 16u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 20u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 20u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 20u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 20u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 24u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 24u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 24u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 24u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 28u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 28u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 28u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 28u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 28u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 32u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 36u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 40u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 44u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 48u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 52u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 64u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 68u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 72u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 76u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 80u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 84u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 96u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 100u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 104u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 108u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 112u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 116u);

  v88 = nullptr;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v3 = *(uint32_t *)(a2 + 44);
  if ( v3 != 0 )
  {
    v47 = 16 * v3;
    v86 = opNewArray(16 * v3, (const std::nothrow_t *)&std::nothrow);
    if ( v86 != 0 )
    {
      v82 = v47 - 1;
      if ( v47 != 0 )
      {
        v48 = (uint8_t *)v86;
        v49 = -v86 & 0xF;
        if ( v47 <= v49 )
          v49 = 16 * v3;
        if ( v49 == 0 )
          goto LABEL_118;
        v73 = v3;
        v50 = 0;
        do
        {
          *v48 = 0;
          v51 = v47 - 2 - v50++;
          ++v48;
          v82 = v51;
        }
        while ( v49 > v50 );
        v3 = v73;
        if ( v47 != v49 )
        {
LABEL_118:
          v71 = v47 - v49;
          v52 = (v47 - v49) >> 4;
          v77 = 16 * v52;
          if ( 16 * v52 == 0 )
            goto LABEL_95;
          v53 = (__m128i *)(v86 + v49);
          v54 = 0;
          do
          {
            ++v54;
            *v53++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v52 > v54 );
          v48 += v77;
          v82 -= v77;
          if ( v71 != v77 )
          {
LABEL_95:
            v55 = v82;
            do
            {
              --v55;
              *v48++ = 0;
            }
            while ( v55 != -1 );
          }
        }
      }
    }
    v56 = v91;
    if ( v91 != 0 )
    {
      v57 = (uint32_t *)v86;
      v58 = 0;
      do
      {
        if ( v57 != nullptr )
        {
          v59 = (uint32_t *)(v89 + 16 * v58);
          *v57 = *v59;
          v57[1] = v59[1];
          v57[2] = v59[2];
          v57[3] = v59[3];
          v56 = v91;
        }
        ++v58;
        v57 += 4;
      }
      while ( v58 < v56 );
    }
    v60 = v88;
    v34 = v88 == nullptr;
    v88 = (void *)v86;
    v89 = v86;
    v90 = v86;
    v92 = v3;
    if ( !v34 )
    {
      opDeleteArray(v60);
      v56 = v91;
    }
    if ( v3 > v56 )
    {
      v61 = 16 * v56;
      do
      {
        v62 = (uint32_t *)(v89 + v61);
        if ( v89 + v61 != 0 )
        {
          *v62 = 0;
          v62[1] = 0;
          v62[2] = 0;
          v62[3] = 0;
        }
        ++v56;
        v61 += 16;
      }
      while ( v3 > v56 );
    }
    v91 = v3;
    if ( *(uint32_t *)(a2 + 44) != 0 )
    {
      v63 = v89;
      v64 = 0;
      do
      {
        v74 = v64 >> 8;
        v87 = 12 * (uint8_t)v64;
        v65 = (int *)(v87 + *(uint32_t *)(*(uint32_t *)(a2 + 24) + 4 * (v64 >> 8)));
        v66 = v65[1];
        v78 = *v65;
        v67 = 16 * v64++;
        v68 = (uint32_t *)(v63 + v67);
        *v68 = v78;
        v68[1] = v66;
        v63 = v89;
        *(uint32_t *)(v89 + v67 + 8) = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 24) + 4 * v74) + v87 + 8);
      }
      while ( *(uint32_t *)(a2 + 44) > v64 );
    }
  }
  else
  {
    v91 = 0;
  }
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  marisa::grimoire::trie::LoudsTrie::build_current_trie<marisa::grimoire::trie::Key>(
    a1,
    (int)(uintptr_t)(&v88),
    (int)(uintptr_t)(&v94),
    (int)(uintptr_t)(a3),
    1);
  v100 = nullptr;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  if ( v91 != 0 )
    marisa::grimoire::trie::LoudsTrie::build_next_trie<marisa::grimoire::trie::Key>(
      (int)(uintptr_t)(a1),
      (int)(uintptr_t)(&v88),
      (int)(uintptr_t)(&v100),
      a3,
      1);
  v4 = *((uint32_t **)a1 + 125);
  if ( v4 != nullptr )
  {
    v5 = (v4[134] + 1) | v4[136] | v4[137];
    if ( (v5 & 0xFFF00000) != 0 )
      abort();
    v6 = 3;
    if ( (v5 & 0x7F) != 0 )
      v6 = v5 & 0x7F;
  }
  else
  {
    v46 = *((uint32_t *)a1 + 105) == 0 ? 4096 : 0x2000;
    v5 = v46 | a3[1] | a3[3] | 1;
    if ( (v46 & 0xFFF00000 | (a3[1] | a3[3]) & 0xFFF00000) != 0 )
      abort();
    v6 = (*((uint8_t *)a3 + 4) | *((uint8_t *)a3 + 12)) & 0x7E | 1;
  }
  v7 = 256;
  v8 = v5 & 0xF80;
  if ( v8 != 256 )
  {
    if ( v8 <= 0x100 )
    {
      LOWORD(v7) = 128;
      if ( v8 == 128 )
        goto LABEL_13;
    }
    else
    {
      v7 = 1024;
      if ( v8 == 1024 )
        goto LABEL_13;
      LOWORD(v7) = 2048;
      if ( v8 == 2048 )
        goto LABEL_13;
    }
    v7 = 512;
  }
LABEL_13:
  v9 = 4096;
  v10 = _mm_cvtsi32_si128(v6);
  if ( (v5 & 0xF000) == 0x2000 )
    v9 = 0x2000;
  v11 = v5 & 0xF0000;
  v12 = 0x20000;
  v13 = _mm_cvtsi32_si128(v9);
  if ( v11 == 0x10000 )
    v12 = 0x10000;
  v14 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v13, _mm_cvtsi32_si128(v12)), 0);
  *(uint64_t *)&v15 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(v10, _mm_cvtsi32_si128(v7)), 0);
  *((uint64_t *)&v15 + 1) = v14;
  *(g4_int128_t *)((char *)a1 + 536) = v15;
  marisa::grimoire::vector::BitVector::build((marisa::grimoire::trie::LoudsTrie::Self *)((char *)a1 + 208), false, false);
  v16 = 0;
  for ( i = 0; v16 < v103; *(uint32_t *)(v101 + v18) >>= 8 )
  {
    while ( ((*(uint32_t *)(*((uint32_t *)a1 + 54) + 4 * (i >> 5)) >> i) & 1) == 0 )
      ++i;
    v18 = 4 * v16;
    v19 = *(uint32_t *)(v101 + 4 * v16++);
    *(uint8_t *)(*((uint32_t *)a1 + 79) + i++) = v19;
  }
  marisa::grimoire::vector::FlatVector::build(
    (marisa::grimoire::trie::LoudsTrie::Self *)((char *)a1 + 336),
    (const marisa::grimoire::vector::Vector<unsigned int> *)&v100);
  marisa::grimoire::trie::LoudsTrie::fill_cache(a1);
  if ( v100 != nullptr )
    opDeleteArray(v100);
  v83 = 0;
  v72 = v97;
  v75 = nullptr;
  if ( v97 != 0 )
  {
    v83 = 8 * v97;
    v20 = opNewArray(8 * v97, (const std::nothrow_t *)&std::nothrow);
    v21 = (uint32_t *)v20;
    if ( v20 != 0 )
    {
      v22 = v83 - 1;
      if ( v83 != 0 )
      {
        v23 = -v20 & 0xF;
        if ( v83 <= v23 )
          v23 = v83;
        if ( v23 == 0 )
          goto LABEL_119;
        v24 = 0;
        do
        {
          *(uint8_t *)v20 = 0;
          v22 = v83 - 2 - v24++;
          ++v20;
        }
        while ( v23 > v24 );
        if ( v83 != v23 )
        {
LABEL_119:
          v69 = v83 - v23;
          v79 = (v83 - v23) >> 4;
          v76 = 16 * v79;
          if ( 16 * v79 == 0 )
            goto LABEL_37;
          v25 = (__m128i *)((char *)v21 + v23);
          v26 = 0;
          do
          {
            ++v26;
            *v25++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v26 < v79 );
          v20 += v76;
          v22 -= v76;
          if ( v69 != v76 )
          {
LABEL_37:
            v27 = v22;
            do
            {
              --v27;
              *(uint8_t *)v20++ = 0;
            }
            while ( v27 != -1 );
          }
        }
      }
    }
    v28 = v21;
    v29 = 0;
    do
    {
      if ( v28 != nullptr )
      {
        *v28 = 0;
        v28[1] = 0;
      }
      ++v29;
      v28 += 2;
    }
    while ( v29 != v72 );
    v30 = 0;
    do
    {
      v31 = &v21[2 * v30];
      v32 = *(uint32_t *)(v95 + 4 * v30);
      v31[1] = v30++;
      *v31 = v32;
    }
    while ( v30 != v72 );
    v75 = (char *)v21;
  }
  v33 = (void *)v94;
  v95 = 0;
  v34 = v94 == 0;
  v94 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  if ( !v34 )
    opDeleteArray(v33);
  v70 = &v75[v83];
  if ( &v75[v83] != v75 )
  {
    _BitScanReverse(&v35, v83 >> 3);
    g4_std_compat::introsort_loop_9315b0(v75, v70, 2 * (31 - (v35 ^ 0x1F)));
    if ( v83 <= 135 )
    {
      g4_std_compat::insertion_sort_d49860(v75, v70);
    }
    else
    {
      v84 = v75 + 128;
      g4_std_compat::insertion_sort_d49860(v75, v75 + 128);
      if ( v70 != v75 + 128 )
      {
        do
        {
          v36 = v84;
          v37 = *(uint32_t *)v84;
          v80 = *((uint32_t *)v84 + 1);
          for ( j = v84 - 8; ; j -= 8 )
          {
            while ( v37 < *(uint32_t *)j )
            {
              v39 = *(uint32_t *)j;
              *((uint32_t *)v36 + 1) = *((uint32_t *)j + 1);
              *(uint32_t *)v36 = v39;
              v36 = j;
              j -= 8;
            }
            if ( v37 > *(uint32_t *)j || *((uint32_t *)j + 1) <= v80 )
              break;
            v45 = *(uint32_t *)j;
            *((uint32_t *)v36 + 1) = *((uint32_t *)j + 1);
            *(uint32_t *)v36 = v45;
            v36 = j;
          }
          v84 += 8;
          *(uint32_t *)v36 = v37;
          *((uint32_t *)v36 + 1) = v80;
        }
        while ( v70 != v84 );
      }
    }
  }
  if ( v72 != 0 )
  {
    v40 = 0;
    v85 = 0;
    v81 = (marisa::grimoire::vector::BitVector::Self *)((marisa::grimoire::trie::LoudsTrie::Self *)((char *)a1 + 104));
    do
    {
      v41 = &v75[8 * v40];
      for ( k = *(uint32_t *)v41; *(uint32_t *)v41 > v85; k = *(uint32_t *)v41 )
      {
        marisa::grimoire::vector::BitVector::push_back(v81, false);
        ++v85;
      }
      if ( v85 == k )
      {
        marisa::grimoire::vector::BitVector::push_back(v81, true);
        ++v85;
      }
      ++v40;
    }
    while ( v40 != v72 );
  }
  else
  {
    v85 = 0;
    v81 = (marisa::grimoire::vector::BitVector::Self *)((marisa::grimoire::trie::LoudsTrie::Self *)((char *)a1 + 104));
  }
  for ( ; *((uint32_t *)a1 + 81) > v85; ++v85 )
    marisa::grimoire::vector::BitVector::push_back(v81, false);
  marisa::grimoire::vector::BitVector::push_back(v81, false);
  marisa::grimoire::vector::BitVector::build(v81, false, true);
  if ( *(uint32_t *)(a2 + 44) != 0 )
  {
    v43 = 0;
    do
    {
      v44 = (unsigned int *)&v75[8 * v43++];
      *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 24) + 4 * (v44[1] >> 8)) + 12 * (uint8_t)v44[1] + 8) = marisa::grimoire::vector::BitVector::rank1(v81, *v44);
    }
    while ( *(uint32_t *)(a2 + 44) > v43 );
  }
  if ( v75 != nullptr )
    opDeleteArray(v75);
  if ( v94 != 0 )
    opDeleteArray((void *)v94);
  if ( v88 != nullptr )
    opDeleteArray(v88);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::build  (binary VA: 0x1297630)
// Original: marisa::grimoire::trie::LoudsTrie::build
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::LoudsTrie::build(marisa::grimoire::trie::LoudsTrie::Self *a1, int a2, int a3)
{
  int v3;
  int v4;
  unsigned int v5;
  int32_t v6;
  int32_t v7;
  typedef __m128i _g4_t_v8;
  typedef uint8_t _g4_t_v9[584];
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v9)) > _g4_s1 ? (20u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);

  v8 = G4_BITCAST<__m128i>(xmmword_1C7CB20);
  if ( (a3 & 0xFFF00000) != 0 )
    abort();
  v3 = 3;
  v4 = 256;
  if ( (a3 & 0x7F) != 0 )
    v3 = a3 & 0x7F;
  v5 = a3 & 0xF80;
  if ( v5 != 256 )
  {
    if ( v5 <= 0x100 )
    {
      LOWORD(v4) = 128;
      if ( v5 == 128 )
        goto LABEL_8;
    }
    else
    {
      v4 = 1024;
      if ( v5 == 1024 )
        goto LABEL_8;
      LOWORD(v4) = 2048;
      if ( v5 == 2048 )
        goto LABEL_8;
    }
    v4 = 512;
  }
LABEL_8:
  v6 = 4096;
g4_m128_lane<int64_t>(v8, 0) = __PAIR64__(v4, v3);
  if ( (a3 & 0xF000) == 0x2000 )
    v6 = 0x2000;
  v7 = 0x20000;
g4_m128_lane<int32_t>(v8, 2) = v6;
  if ( (a3 & 0xF0000) == 0x10000 )
    v7 = 0x10000;
g4_m128_lane<int32_t>(v8, 3) = v7;
  marisa::grimoire::trie::LoudsTrie::Construct((marisa::grimoire::trie::LoudsTrie::Self *)v9);
  marisa::grimoire::trie::LoudsTrie::build((marisa::grimoire::trie::LoudsTrie::Self *)v9, a2, &v8);
  marisa::grimoire::trie::LoudsTrie::swap(a1, (marisa::grimoire::trie::LoudsTrie::Self *)v9);
  marisa::grimoire::trie::LoudsTrie::Destroy((marisa::grimoire::trie::LoudsTrie::Self *)v9);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::FlatVector::build  (binary VA: 0x1297770)
// Original: marisa::grimoire::vector::FlatVector::build
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::FlatVector::build(marisa::grimoire::vector::FlatVector::Self *self, const marisa::grimoire::vector::Vector<unsigned int> *a2)
{
  unsigned int v2;
  int i;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  void *v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  __m128i *v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;

  v18 = *((uint32_t *)a2 + 3);
  if ( v18 == 0 )
  {
    v22 = 0;
    v17 = 0;
    goto LABEL_11;
  }
  v2 = 0;
  for ( i = 0; i != v18; ++i )
  {
    v4 = *(uint32_t *)(*((uint32_t *)a2 + 2) + 4 * i);
    if ( v2 < v4 )
      v2 = v4;
  }
  v22 = 0;
  if ( v2 == 0 )
    goto LABEL_22;
  v5 = 0;
  do
  {
    ++v5;
    v2 >>= 1;
  }
  while ( v2 != 0 );
  v22 = v5;
  if ( v5 != 0 )
  {
    v17 = ((v18 * (uint64_t)v5 + 31) >> 5) + (((v18 * (uint64_t)v5 + 31) & 0x20) != 0);
    if ( v17 == 0 )
    {
LABEL_11:
      v16 = 0;
      v19 = 0;
      goto LABEL_12;
    }
  }
  else
  {
LABEL_22:
    v17 = 2;
  }
  v24 = 4 * v17;
  v10 = opNewArray(4 * v17, (const std::nothrow_t *)&std::nothrow);
  v19 = v10;
  if ( v10 != 0 )
  {
    v11 = v24 - 1;
    if ( v24 != 0 )
    {
      v12 = -v10 & 0xF;
      if ( v24 <= v12 )
        v12 = 4 * v17;
      if ( v12 == 0 )
        goto LABEL_41;
      v13 = 0;
      do
      {
        *(uint8_t *)v10 = 0;
        v11 = v24 - 2 - v13++;
        ++v10;
      }
      while ( v13 < v12 );
      if ( v12 != v24 )
      {
LABEL_41:
        v25 = v24 - v12;
        v21 = 16 * (v25 >> 4);
        if ( v21 == 0 )
          goto LABEL_42;
        v14 = (__m128i *)(v19 + v12);
        v15 = 0;
        do
        {
          ++v15;
          *v14++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v25 >> 4 > v15 );
        v10 += v21;
        v11 -= v21;
        if ( v21 != v25 )
        {
LABEL_42:
          do
          {
            --v11;
            *(uint8_t *)v10++ = 0;
          }
          while ( v11 != -1 );
        }
      }
    }
  }
  v16 = v17;
  *(uint32_t *)(v19 + 4 * v17 - 4) = 0;
  v18 = *((uint32_t *)a2 + 3);
LABEL_12:
  v23 = 0;
  if ( v22 != 0 )
    v23 = 0xFFFFFFFF >> (32 - v22);
  if ( v18 != 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = v6 & 0x1F;
      v20 = *(uint32_t *)(*((uint32_t *)a2 + 2) + 4 * v7) & v23;
      *(uint32_t *)(v19 + 4 * (v6 >> 5)) = (v20 << v8) | *(uint32_t *)(v19 + 4 * (v6 >> 5)) & ~(v23 << v8);
      if ( v8 + v22 > 0x20 )
        *(uint32_t *)(v19 + 4 * (v6 >> 5) + 4) = (v20 >> (32 - v8))
                                             | *(uint32_t *)(v19 + 4 * (v6 >> 5) + 4) & ~(v23 >> (32 - v8));
      ++v7;
      v6 += v22;
    }
    while ( v7 < *((uint32_t *)a2 + 3) );
  }
  v9 = *(void **)self;
  *((uint32_t *)self + 1) = v19;
  *(uint32_t *)self = v19;
  *((uint32_t *)self + 2) = v19;
  *((uint32_t *)self + 3) = v17;
  *((uint32_t *)self + 4) = v16;
  *((uint32_t *)self + 6) = v22;
  *((uint8_t *)self + 20) = 0;
  *((uint32_t *)self + 7) = v23;
  *((uint32_t *)self + 8) = v18;
  if ( v9 != nullptr )
    opDeleteArray(v9);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::BitVector::Destroy  (binary VA: 0x1297a60)
// Original: marisa::grimoire::vector::BitVector::~BitVector
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::BitVector::Destroy(void **self)
{
  if ( *(self + 20) != nullptr )
    opDeleteArray(*(self + 20));
  if ( *(self + 14) != nullptr )
    opDeleteArray(*(self + 14));
  if ( *(self + 8) != nullptr )
    opDeleteArray(*(self + 8));
  if ( *self != nullptr )
    opDeleteArray(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::BitVector::build  (binary VA: 0x1297ad0)
// Original: marisa::grimoire::vector::BitVector::build
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::BitVector::build(marisa::grimoire::vector::BitVector::Self *self, bool a2, bool a3)
{
  marisa::grimoire::vector::BitVector::Self *v3;
  int v4;
  int v5;
  unsigned int v6;
  uint8_t *v7;
  unsigned int i;
  unsigned int v9;
  __m128i *v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  uint32_t *v14;
  unsigned int j;
  void *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  typedef int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef void *_g4_t_v40[6];
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef char _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef char _g4_t_v60;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v34)) > _g4_s0 ? (4u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v35)) > _g4_s1 ? (8u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v36)) > _g4_s2 ? (12u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v37)) > _g4_s3 ? (16u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v38)) > _g4_s4 ? (20u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v39)) > _g4_s5 ? (20u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v40)) > _g4_s6 ? (32u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v41)) > _g4_s7 ? (56u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v42)) > _g4_s8 ? (60u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v43)) > _g4_s9 ? (64u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v44)) > _g4_s10 ? (68u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v45)) > _g4_s11 ? (72u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v46)) > _g4_s12 ? (76u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v47)) > _g4_s13 ? (80u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v48)) > _g4_s14 ? (84u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v49)) > _g4_s15 ? (88u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v50)) > _g4_s16 ? (92u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v51)) > _g4_s17 ? (96u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v52)) > _g4_s18 ? (100u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v53)) > _g4_s19 ? (104u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v54)) > _g4_s20 ? (108u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v55)) > _g4_s21 ? (112u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v56)) > _g4_s22 ? (116u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v57)) > _g4_s23 ? (120u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v58)) > _g4_s24 ? (124u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v59)) > _g4_s25 ? (128u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v60)) > _g4_s26 ? (132u + sizeof(_g4_t_v60)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 76u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 84u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 88u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 92u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 96u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 100u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 104u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 108u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 112u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 116u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 120u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 124u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 128u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 132u);

  v3 = self;
  memset(v40, 0, 21);
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  marisa::grimoire::vector::BitVector::build_index((marisa::grimoire::vector::BitVector::Self *)v40, self, a2, a3);
  if ( *((uint8_t *)self + 20) != 0 )
    abort();
  v4 = *((uint32_t *)self + 3);
  v36 = v4;
  if ( v4 != *((uint32_t *)self + 4) )
  {
    v38 = 4 * v4;
    v5 = opNewArray(4 * v4, (const std::nothrow_t *)&std::nothrow);
    v37 = (uint32_t *)v5;
    if ( v5 != 0 )
    {
      v35 = v38 - 1;
      if ( v38 != 0 )
      {
        v6 = -v5 & 0xF;
        if ( v38 <= v6 )
          v6 = v38;
        if ( v6 == 0 )
        {
          v7 = (uint8_t *)v5;
          goto LABEL_11;
        }
        v7 = (uint8_t *)v5;
        for ( i = 0; i < v6; ++i )
        {
          *v7 = 0;
          v9 = v38 - 2 - i;
          ++v7;
        }
        v35 = v9;
        v3 = self;
        if ( v38 != v6 )
        {
LABEL_11:
          v39 = v38 - v6;
          v34 = 16 * (v39 >> 4);
          if ( v34 == 0 )
            goto LABEL_15;
          v10 = (__m128i *)((char *)v37 + v6);
          v11 = 0;
          do
          {
            ++v11;
            *v10++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v11 < v39 >> 4 );
          v7 += v34;
          v35 -= v34;
          if ( v39 != v34 )
          {
LABEL_15:
            v12 = v35;
            do
            {
              --v12;
              *v7++ = 0;
            }
            while ( v12 != -1 );
          }
        }
      }
    }
    v13 = *((uint32_t *)v3 + 3);
    if ( v13 != 0 )
    {
      v14 = v37;
      for ( j = 0; j < v13; ++j )
      {
        if ( v14 != nullptr )
        {
          *v14 = *(uint32_t *)(*((uint32_t *)v3 + 1) + 4 * j);
          v13 = *((uint32_t *)v3 + 3);
        }
        ++v14;
      }
    }
    v16 = *(void **)v3;
    *((uint32_t *)v3 + 1) = (uint32_t)(uintptr_t)(v37);
    *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v37);
    *((uint32_t *)v3 + 2) = (uint32_t)(uintptr_t)(v37);
    *((uint32_t *)v3 + 4) = v36;
    if ( v16 != nullptr )
      opDeleteArray(v16);
  }
  v17 = *((uint32_t *)v3 + 6);
  *((uint32_t *)v3 + 6) = v41;
  v41 = v17;
  v18 = *((uint32_t *)v3 + 7);
  *((uint32_t *)v3 + 7) = v42;
  v42 = v18;
  v19 = *((uint32_t *)v3 + 8);
  *((uint32_t *)v3 + 8) = v43;
  v43 = v19;
  v20 = *((uint32_t *)v3 + 9);
  *((uint32_t *)v3 + 9) = v44;
  v44 = v20;
  v21 = *((uint32_t *)v3 + 10);
  *((uint32_t *)v3 + 10) = v45;
  v45 = v21;
  v22 = *((uint32_t *)v3 + 11);
  *((uint32_t *)v3 + 11) = v46;
  v46 = v22;
  v23 = *((uint32_t *)v3 + 12);
  *((uint32_t *)v3 + 12) = v47;
  v47 = v23;
  LOBYTE(v23) = *((uint8_t *)v3 + 52);
  *((uint8_t *)v3 + 52) = v48;
  v48 = v23;
  v24 = *((uint32_t *)v3 + 14);
  *((uint32_t *)v3 + 14) = v49;
  v49 = v24;
  v25 = *((uint32_t *)v3 + 15);
  *((uint32_t *)v3 + 15) = v50;
  v50 = v25;
  v26 = *((uint32_t *)v3 + 16);
  *((uint32_t *)v3 + 16) = v51;
  v51 = v26;
  v27 = *((uint32_t *)v3 + 17);
  *((uint32_t *)v3 + 17) = v52;
  v52 = v27;
  v28 = *((uint32_t *)v3 + 18);
  *((uint32_t *)v3 + 18) = v53;
  v53 = v28;
  LOBYTE(v28) = *((uint8_t *)v3 + 76);
  *((uint8_t *)v3 + 76) = v54;
  v54 = v28;
  v29 = *((uint32_t *)v3 + 20);
  *((uint32_t *)v3 + 20) = v55;
  v55 = v29;
  v30 = *((uint32_t *)v3 + 21);
  *((uint32_t *)v3 + 21) = v56;
  v56 = v30;
  v31 = *((uint32_t *)v3 + 22);
  *((uint32_t *)v3 + 22) = v57;
  v57 = v31;
  v32 = *((uint32_t *)v3 + 23);
  *((uint32_t *)v3 + 23) = v58;
  v58 = v32;
  v33 = *((uint32_t *)v3 + 24);
  *((uint32_t *)v3 + 24) = v59;
  v59 = v33;
  LOBYTE(v33) = *((uint8_t *)v3 + 100);
  *((uint8_t *)v3 + 100) = v60;
  v60 = v33;
  marisa::grimoire::vector::BitVector::Destroy(v40);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::BitVector::write  (binary VA: 0x1297ec0)
// Original: marisa::grimoire::vector::BitVector::write
// ----------------------------------------------------------------------------
char marisa::grimoire::vector::BitVector::write(marisa::grimoire::vector::BitVector::Self *self, marisa::grimoire::io::Writer::Self *a2)
{
  unsigned int v2;
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[2];
  typedef uint32_t _g4_t_ptr[2];
  typedef uint32_t _g4_t_v14[2];
  typedef uint32_t _g4_t_v15[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_ptr)) > _g4_s3 ? (24u + sizeof(_g4_t_ptr)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);

  ptr[1] = 0;
  ptr[0] = 4 * *((uint32_t *)self + 3);
  marisa::grimoire::io::Writer::write_data(a2, (char *)ptr, 8u);
  v2 = *((uint32_t *)self + 3);
  if ( v2 != 0 && *((uint32_t *)self + 2) == 0 )
    goto LABEL_11;
  if ( v2 > 0x3FFFFFFF )
    goto LABEL_11;
  marisa::grimoire::io::Writer::write_data(a2, *((char **)self + 2), 4 * v2);
  marisa::grimoire::io::Writer::seek(a2, (-4 * *((uint32_t *)self + 3)) & 7);
  v11 = *((uint32_t *)self + 6);
  marisa::grimoire::io::Writer::write_data(a2, (char *)&v11, 4u);
  v10 = *((uint32_t *)self + 7);
  marisa::grimoire::io::Writer::write_data(a2, (char *)&v10, 4u);
  v3 = *((uint32_t *)self + 11);
  v12[1] = 0;
  v12[0] = 12 * v3;
  marisa::grimoire::io::Writer::write_data(a2, (char *)v12, 8u);
  v4 = *((uint32_t *)self + 11);
  if ( v4 != 0 && *((uint32_t *)self + 10) == 0 )
    goto LABEL_11;
  if ( v4 > 0x15555555 )
    goto LABEL_11;
  marisa::grimoire::io::Writer::write_data(a2, *((char **)self + 10), 12 * v4);
  marisa::grimoire::io::Writer::seek(a2, (4 * (uint8_t)*((uint32_t *)self + 11)) & 4);
  v5 = *((uint32_t *)self + 17);
  v14[1] = 0;
  v14[0] = 4 * v5;
  marisa::grimoire::io::Writer::write_data(a2, (char *)v14, 8u);
  v6 = *((uint32_t *)self + 17);
  if ( v6 != 0 && *((uint32_t *)self + 16) == 0 )
    goto LABEL_11;
  if ( v6 > 0x3FFFFFFF
    || (marisa::grimoire::io::Writer::write_data(a2, *((char **)self + 16), 4 * v6),
        marisa::grimoire::io::Writer::seek(a2, (-4 * *((uint32_t *)self + 17)) & 7),
        v7 = *((uint32_t *)self + 23),
        v15[1] = 0,
        v15[0] = 4 * v7,
        marisa::grimoire::io::Writer::write_data(a2, (char *)v15, 8u),
        (v8 = *((uint32_t *)self + 23)) != 0)
    && *((uint32_t *)self + 22) == 0
    || v8 > 0x3FFFFFFF )
  {
LABEL_11:
    abort();
  }
  marisa::grimoire::io::Writer::write_data(a2, *((char **)self + 22), 4 * v8);
  return marisa::grimoire::io::Writer::seek(a2, (-4 * *((uint32_t *)self + 23)) & 7);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::Destroy  (binary VA: 0x1298110)
// Original: marisa::grimoire::trie::Tail::~Tail
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::Tail::Destroy(void **self)
{
  marisa::grimoire::vector::BitVector::Destroy(self + 6);
  if ( *self != nullptr )
    opDeleteArray(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::find_child  (binary VA: 0x1298160)
// Original: marisa::grimoire::trie::LoudsTrie::find_child
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::LoudsTrie::find_child(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::Agent::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  unsigned int v7;
  int result;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  marisa::grimoire::trie::LoudsTrie::Self *v13;
  char v14;
  int v15;
  unsigned int v16;
  marisa::grimoire::trie::LoudsTrie::Self *v17;
  char v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v2 = *((uint32_t *)a2 + 6);
  v3 = *(uint32_t *)(v2 + 52);
  v4 = *(uint32_t *)(v2 + 48);
  v5 = 12 * (*((uint32_t *)self + 132) & (*(uint8_t *)(*(uint32_t *)a2 + v3) ^ v4 ^ (32 * v4)));
  v6 = (uint32_t *)(*((uint32_t *)self + 128) + v5);
  if ( v4 == *v6 )
  {
    v16 = v6[2];
    if ( v16 >> 8 == 0xFFFFFF )
    {
      *(uint32_t *)(v2 + 52) = v3 + 1;
    }
    else
    {
      v17 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
      if ( v17 != nullptr )
        v18 = marisa::grimoire::trie::LoudsTrie::match(v17, a2, v16);
      else
        v18 = marisa::grimoire::trie::Tail::match((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372), a2, v16);
      result = 0;
      if ( v18 == 0 )
        return result;
    }
    *(uint32_t *)(v2 + 48) = *(uint32_t *)(*((uint32_t *)self + 128) + v5 + 4);
    return 1;
  }
  v7 = marisa::grimoire::vector::BitVector::select0(self, *(uint32_t *)(v2 + 48)) + 1;
  result = 0;
  if ( ((*(uint32_t *)(*((uint32_t *)self + 2) + 4 * (v7 >> 5)) >> v7) & 1) != 0 )
  {
    v9 = v7 + -1 - *(uint32_t *)(v2 + 48);
    *(uint32_t *)(v2 + 48) = v9;
    v21 = -1;
    v20 = v7;
    while ( 1 )
    {
      if ( ((*(uint32_t *)(*((uint32_t *)self + 54) + 4 * (v9 >> 5)) >> v9) & 1) != 0 )
      {
        if ( v21 == -1 )
        {
          marisa::grimoire::vector::BitVector::rank1(
                  (marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 208),
                  v9);
          v9 = *(uint32_t *)(v2 + 48);
        }
        else
        {
          ++v21;
        }
        v24 = *(uint32_t *)(v2 + 52);
        v23 = *(uint8_t *)(*((uint32_t *)self + 80) + v9);
        v10 = *((uint32_t *)self + 90);
        v22 = (v10 * v21) & 0x1F;
        v11 = (unsigned int)(v10 * v21) >> 5;
        if ( (unsigned int)(v22 + v10) <= 0x20 )
          v12 = *((uint32_t *)self + 91) & (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v11) >> v22);
        else
          v12 = *((uint32_t *)self + 91)
              & ((*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v11) >> v22)
               | (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v11 + 4) << (32 - v22)));
        v13 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
        v19 = v23 | (v12 << 8);
        if ( v13 != nullptr )
          v14 = marisa::grimoire::trie::LoudsTrie::match(v13, a2, v19);
        else
          v14 = marisa::grimoire::trie::Tail::match((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372), a2, v19);
        if ( v14 != 0 )
          return 1;
        if ( v24 != *(uint32_t *)(v2 + 52) )
          return 0;
        v9 = *(uint32_t *)(v2 + 48);
      }
      else
      {
        v15 = *(uint32_t *)(v2 + 52);
        if ( *(uint8_t *)(*((uint32_t *)self + 80) + v9) == *(uint8_t *)(*(uint32_t *)a2 + v15) )
        {
          *(uint32_t *)(v2 + 52) = v15 + 1;
          return 1;
        }
      }
      ++v20;
      *(uint32_t *)(v2 + 48) = ++v9;
      if ( ((*(uint32_t *)(*((uint32_t *)self + 2) + 4 * (v20 >> 5)) >> v20) & 1) == 0 )
        return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::LoudsTrie::predictive_find_child  (binary VA: 0x1298450)
// Original: marisa::grimoire::trie::LoudsTrie::predictive_find_child
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::LoudsTrie::predictive_find_child(marisa::grimoire::trie::LoudsTrie::Self *self, marisa::Agent::Self *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  uint32_t *v5;
  unsigned int v6;
  int result;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  marisa::grimoire::trie::LoudsTrie::Self *v12;
  char v13;
  int v14;
  uint8_t *v15;
  unsigned int v16;
  marisa::grimoire::trie::LoudsTrie::Self *v17;
  char v18;
  int v19;
  uint8_t *v20;
  int v21;
  unsigned int v22;
  char v23;
  char v24;
  int v25;
  unsigned int v26;
  int v27;
  int v28;

  v2 = *((uint32_t **)a2 + 6);
  v3 = v2[12];
  v4 = 12 * (*((uint32_t *)self + 132) & (*(uint8_t *)(*(uint32_t *)a2 + v2[13]) ^ v3 ^ (32 * v3)));
  v5 = (uint32_t *)(*((uint32_t *)self + 128) + v4);
  if ( v3 == *v5 )
  {
    v16 = v5[2];
    if ( v16 >> 8 == 0xFFFFFF )
    {
      v19 = v2[3];
      if ( (unsigned int)(v19 + 1) > v2[4] )
      {
        v23 = v16;
        sub_128F1F0(*((uint32_t *)a2 + 6), v19 + 1);
        v19 = v2[3];
        LOBYTE(v16) = v23;
      }
      v20 = (uint8_t *)(v2[1] + v19);
      if ( v20 != nullptr )
      {
        *v20 = v16;
        v19 = v2[3];
      }
      ++v2[13];
      v2[3] = v19 + 1;
    }
    else
    {
      v17 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
      if ( v17 != nullptr )
        v18 = marisa::grimoire::trie::LoudsTrie::prefix_match(v17, a2, v16);
      else
        v18 = marisa::grimoire::trie::Tail::prefix_match(
                (marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372),
                a2,
                v16);
      result = 0;
      if ( v18 == 0 )
        return result;
    }
    v2[12] = *(uint32_t *)(*((uint32_t *)self + 128) + v4 + 4);
    return 1;
  }
  v6 = marisa::grimoire::vector::BitVector::select0(self, v2[12]) + 1;
  result = 0;
  if ( ((*(uint32_t *)(*((uint32_t *)self + 2) + 4 * (v6 >> 5)) >> v6) & 1) == 0 )
    return result;
  v8 = v6 + -1 - v2[12];
  v2[12] = v8;
  v25 = -1;
  v22 = v6;
  while ( ((*(uint32_t *)(*((uint32_t *)self + 54) + 4 * (v8 >> 5)) >> v8) & 1) != 0 )
  {
    if ( v25 == -1 )
    {
      marisa::grimoire::vector::BitVector::rank1((marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 208), v8);
      v8 = v2[12];
    }
    else
    {
      ++v25;
    }
    v28 = v2[13];
    v27 = *(uint8_t *)(*((uint32_t *)self + 80) + v8);
    v9 = *((uint32_t *)self + 90);
    v26 = (unsigned int)(v9 * v25) >> 5;
    v10 = ((uint8_t)v9 * (uint8_t)v25) & 0x1F;
    if ( (unsigned int)(v10 + v9) <= 0x20 )
      v11 = *((uint32_t *)self + 91) & (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v26) >> v10);
    else
      v11 = *((uint32_t *)self + 91)
          & ((*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v26) >> v10)
           | (*(uint32_t *)(*((uint32_t *)self + 86) + 4 * v26 + 4) << (32 - v10)));
    v12 = *((marisa::grimoire::trie::LoudsTrie::Self **)self + 125);
    v21 = v27 | (v11 << 8);
    if ( v12 != nullptr )
      v13 = marisa::grimoire::trie::LoudsTrie::prefix_match(v12, a2, v21);
    else
      v13 = marisa::grimoire::trie::Tail::prefix_match(
              (marisa::grimoire::trie::LoudsTrie::Self *)((char *)self + 372),
              a2,
              v21);
    if ( v13 != 0 )
      return 1;
    if ( v28 != v2[13] )
      return 0;
    v8 = v2[12];
LABEL_13:
    ++v22;
    v2[12] = ++v8;
    if ( ((*(uint32_t *)(*((uint32_t *)self + 2) + 4 * (v22 >> 5)) >> v22) & 1) == 0 )
      return 0;
  }
  v24 = *(uint8_t *)(*((uint32_t *)self + 80) + v8);
  if ( v24 != *(uint8_t *)(*(uint32_t *)a2 + v2[13]) )
    goto LABEL_13;
  v14 = v2[3];
  if ( (unsigned int)(v14 + 1) > v2[4] )
  {
    sub_128F1F0((int)(uintptr_t)(v2), v14 + 1);
    v14 = v2[3];
  }
  v15 = (uint8_t *)(v2[1] + v14);
  if ( v15 != nullptr )
  {
    *v15 = v24;
    v14 = v2[3];
  }
  ++v2[13];
  v2[3] = v14 + 1;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::Vector_unsigned_int_af498f::Destroy  (binary VA: 0x12987b0)
// Original: marisa::grimoire::vector::Vector<unsigned int>::~Vector
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::Vector_unsigned_int_af498f::Destroy(void **self)
{
  if ( *self != nullptr )
    opDeleteArray(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::Vector_marisa_grimoire_vector_R_6a15d1::Destroy  (binary VA: 0x12987e0)
// Original: marisa::grimoire::vector::Vector<marisa::grimoire::vector::RankIndex>::~Vector
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::Vector_marisa_grimoire_vector_R_6a15d1::Destroy(void **self)
{
  if ( *self != nullptr )
    opDeleteArray(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::BitVector::read  (binary VA: 0x1298810)
// Original: marisa::grimoire::vector::BitVector::read
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::BitVector::read(marisa::grimoire::vector::BitVector::Self *self, marisa::grimoire::io::Reader::Self *a2)
{
  marisa::grimoire::vector::BitVector::Self *v2;
  int v3;
  uint8_t *v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  __m128i *v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  uint32_t *v12;
  int v13;
  unsigned int v14;
  char *v15;
  char *v16;
  bool v17;
  int v18;
  char *v19;
  char *v20;
  char *v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  void *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  char *v32;
  char *v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef marisa::grimoire::vector::BitVector::Self *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef char *_g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef marisa::grimoire::vector::BitVector::Self *_g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef unsigned int _g4_t_ptr[4];
  typedef char *_g4_t_v57;
  typedef char *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef char _g4_t_v62;
  typedef void *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef char _g4_t_v68;
  typedef unsigned int _g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef char *_g4_t_v71;
  typedef char *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef unsigned int _g4_t_v75;
  typedef char _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef char _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef char _g4_t_v88;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v47)) > _g4_s0 ? (8u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v48)) > _g4_s1 ? (12u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v49)) > _g4_s2 ? (16u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v50)) > _g4_s3 ? (20u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v51)) > _g4_s4 ? (20u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v52)) > _g4_s5 ? (24u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v53)) > _g4_s6 ? (24u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v54)) > _g4_s7 ? (24u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v55)) > _g4_s8 ? (28u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_ptr)) > _g4_s9 ? (32u + sizeof(_g4_t_ptr)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v57)) > _g4_s10 ? (48u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v58)) > _g4_s11 ? (52u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v59)) > _g4_s12 ? (56u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v60)) > _g4_s13 ? (60u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v61)) > _g4_s14 ? (64u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v62)) > _g4_s15 ? (68u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v63)) > _g4_s16 ? (80u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v64)) > _g4_s17 ? (84u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v65)) > _g4_s18 ? (88u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v66)) > _g4_s19 ? (92u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v67)) > _g4_s20 ? (96u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v68)) > _g4_s21 ? (100u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v69)) > _g4_s22 ? (104u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v70)) > _g4_s23 ? (108u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v71)) > _g4_s24 ? (112u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v72)) > _g4_s25 ? (116u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v73)) > _g4_s26 ? (120u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v74)) > _g4_s27 ? (124u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v75)) > _g4_s28 ? (128u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v76)) > _g4_s29 ? (132u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v77)) > _g4_s30 ? (136u + sizeof(_g4_t_v77)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v78)) > _g4_s31 ? (140u + sizeof(_g4_t_v78)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v79)) > _g4_s32 ? (144u + sizeof(_g4_t_v79)) : _g4_s32,
    _g4_s34 = (148u + sizeof(_g4_t_v80)) > _g4_s33 ? (148u + sizeof(_g4_t_v80)) : _g4_s33,
    _g4_s35 = (152u + sizeof(_g4_t_v81)) > _g4_s34 ? (152u + sizeof(_g4_t_v81)) : _g4_s34,
    _g4_s36 = (156u + sizeof(_g4_t_v82)) > _g4_s35 ? (156u + sizeof(_g4_t_v82)) : _g4_s35,
    _g4_s37 = (160u + sizeof(_g4_t_v83)) > _g4_s36 ? (160u + sizeof(_g4_t_v83)) : _g4_s36,
    _g4_s38 = (164u + sizeof(_g4_t_v84)) > _g4_s37 ? (164u + sizeof(_g4_t_v84)) : _g4_s37,
    _g4_s39 = (168u + sizeof(_g4_t_v85)) > _g4_s38 ? (168u + sizeof(_g4_t_v85)) : _g4_s38,
    _g4_s40 = (172u + sizeof(_g4_t_v86)) > _g4_s39 ? (172u + sizeof(_g4_t_v86)) : _g4_s39,
    _g4_s41 = (176u + sizeof(_g4_t_v87)) > _g4_s40 ? (176u + sizeof(_g4_t_v87)) : _g4_s40,
    _g4_s42 = (180u + sizeof(_g4_t_v88)) > _g4_s41 ? (180u + sizeof(_g4_t_v88)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 64u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 80u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 84u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 88u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 92u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 96u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 100u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 104u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 108u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 112u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 116u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 120u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 124u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 128u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 132u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 136u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 140u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 144u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 148u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 152u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 156u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 160u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 164u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 168u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 172u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 176u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 180u);

  v2 = self;
  v63 = nullptr;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = nullptr;
  v72 = nullptr;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  sub_1292430((int)(uintptr_t)(&v63), a2);
  marisa::grimoire::io::Reader::read_data(a2, (char *)ptr, 4u);
  v69 = ptr[0];
  marisa::grimoire::io::Reader::read_data(a2, (char *)ptr, 4u);
  if ( v69 < ptr[0] )
    abort();
  v70 = ptr[0];
  v57 = nullptr;
  v58 = nullptr;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  marisa::grimoire::io::Reader::read_data(a2, (char *)ptr, 8u);
  if ( ptr[1] != 0 )
    abort();
  if ( ptr[0] % 0xCuLL != 0 )
    abort();
  v55 = *(uint64_t *)ptr / 0xCuLL;
  if ( v55 <= v61 )
    goto LABEL_30;
  if ( v61 > v55 >> 1 )
  {
    v52 = 0xFFFFFFFC;
    v47 = 357913941;
    if ( v61 <= 0xAAAAAAA )
    {
      v47 = 2 * v61;
      v52 = 24 * v61;
      v3 = opNewArray(24 * v61, (const std::nothrow_t *)&std::nothrow);
      goto LABEL_8;
    }
  }
  else
  {
    v47 = *(uint64_t *)ptr / 0xCuLL;
    v52 = 12 * v55;
  }
  v3 = opNewArray(v52, (const std::nothrow_t *)&std::nothrow);
LABEL_8:
  if ( v3 != 0 )
  {
    v50 = v52 - 1;
    if ( v52 != 0 )
    {
      v4 = (uint8_t *)v3;
      v5 = -v3 & 0xF;
      if ( v5 > v52 )
        v5 = v52;
      if ( v5 == 0 )
        goto LABEL_50;
      v6 = 0;
      do
      {
        *v4 = 0;
        v7 = v52 - 2 - v6++;
        ++v4;
      }
      while ( v5 > v6 );
      v50 = v7;
      v2 = self;
      if ( v5 != v52 )
      {
LABEL_50:
        v53 = v52 - v5;
        v48 = 16 * (v53 >> 4);
        if ( v48 == 0 )
          goto LABEL_20;
        v8 = (__m128i *)(v3 + v5);
        v9 = 0;
        do
        {
          ++v9;
          *v8++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v53 >> 4 > v9 );
        v4 += v48;
        v50 -= v48;
        if ( v53 != v48 )
        {
LABEL_20:
          v10 = v50;
          do
          {
            --v10;
            *v4++ = 0;
          }
          while ( v10 != -1 );
        }
      }
    }
  }
  v11 = v60;
  if ( v60 != 0 )
  {
    v49 = v2;
    v12 = (uint32_t *)v3;
    v13 = 0;
    v51 = (char *)v3;
    v14 = 0;
    do
    {
      if ( v12 != nullptr )
      {
        v15 = v58;
        *v12 = *(uint32_t *)&v58[v13];
        v12[1] = *(uint32_t *)&v15[v13 + 4];
        v12[2] = *(uint32_t *)&v15[v13 + 8];
        v11 = v60;
      }
      ++v14;
      v12 += 3;
      v13 += 12;
    }
    while ( v14 < v11 );
    v3 = (int)(uintptr_t)(v51);
    v2 = v49;
  }
  v16 = v57;
  v17 = v57 == nullptr;
  v57 = (char *)v3;
  v58 = (char *)v3;
  v59 = v3;
  v61 = v47;
  if ( !v17 )
  {
    opDeleteArray(v16);
LABEL_30:
    v3 = (int)(uintptr_t)(v58);
    v11 = v60;
  }
  if ( v55 > v11 )
  {
    v54 = v2;
    v18 = 12 * v11;
    do
    {
      v19 = (char *)(v18 + v3);
      if ( v18 + v3 != 0 )
      {
        *(uint32_t *)v19 = 0;
        *((uint32_t *)v19 + 1) = 0;
        *((uint32_t *)v19 + 2) = 0;
        v3 = (int)(uintptr_t)(v58);
      }
      ++v11;
      v18 += 12;
    }
    while ( v55 > v11 );
    v2 = v54;
  }
  v60 = v55;
  if ( v3 == 0 && v55 != 0 )
    abort();
  marisa::grimoire::io::Reader::read_data(a2, (char *)v3, 12 * v55);
  marisa::grimoire::io::Reader::seek(a2, -ptr[0] & 7);
  v20 = v71;
  v71 = v57;
  v21 = v72;
  v72 = v58;
  v58 = v21;
  v22 = v73;
  v73 = v59;
  v59 = v22;
  v23 = v74;
  v74 = v60;
  v60 = v23;
  v24 = v75;
  v75 = v61;
  v61 = v24;
  v57 = v20;
  LOBYTE(v24) = v76;
  v76 = v62;
  v62 = v24;
  if ( v20 != nullptr )
    opDeleteArray(v20);
  sub_1292430((int)(uintptr_t)(&v77), a2);
  sub_1292430((int)(uintptr_t)(&v83), a2);
  v25 = *(void **)v2;
  *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v63);
  v63 = v25;
  v26 = v64;
  v64 = *((uint32_t *)v2 + 1);
  *((uint32_t *)v2 + 1) = v26;
  v27 = *((uint32_t *)v2 + 2);
  *((uint32_t *)v2 + 2) = v65;
  v65 = v27;
  v28 = v66;
  v66 = *((uint32_t *)v2 + 3);
  *((uint32_t *)v2 + 3) = v28;
  v29 = *((uint32_t *)v2 + 4);
  *((uint32_t *)v2 + 4) = v67;
  v67 = v29;
  LOBYTE(v29) = *((uint8_t *)v2 + 20);
  *((uint8_t *)v2 + 20) = v68;
  v68 = v29;
  v30 = *((uint32_t *)v2 + 6);
  *((uint32_t *)v2 + 6) = v69;
  v69 = v30;
  v31 = *((uint32_t *)v2 + 7);
  *((uint32_t *)v2 + 7) = v70;
  v70 = v31;
  v32 = *((char **)v2 + 8);
  *((uint32_t *)v2 + 8) = (uint32_t)(uintptr_t)(v71);
  v71 = v32;
  v33 = *((char **)v2 + 9);
  *((uint32_t *)v2 + 9) = (uint32_t)(uintptr_t)(v72);
  v72 = v33;
  v34 = *((uint32_t *)v2 + 10);
  *((uint32_t *)v2 + 10) = v73;
  v73 = v34;
  v35 = *((uint32_t *)v2 + 11);
  *((uint32_t *)v2 + 11) = v74;
  v74 = v35;
  v36 = *((uint32_t *)v2 + 12);
  *((uint32_t *)v2 + 12) = v75;
  v75 = v36;
  LOBYTE(v36) = *((uint8_t *)v2 + 52);
  *((uint8_t *)v2 + 52) = v76;
  v76 = v36;
  v37 = *((uint32_t *)v2 + 14);
  *((uint32_t *)v2 + 14) = v77;
  v77 = v37;
  v38 = *((uint32_t *)v2 + 15);
  *((uint32_t *)v2 + 15) = v78;
  v78 = v38;
  v39 = *((uint32_t *)v2 + 16);
  *((uint32_t *)v2 + 16) = v79;
  v79 = v39;
  v40 = *((uint32_t *)v2 + 17);
  *((uint32_t *)v2 + 17) = v80;
  v80 = v40;
  v41 = *((uint32_t *)v2 + 18);
  *((uint32_t *)v2 + 18) = v81;
  v81 = v41;
  LOBYTE(v41) = *((uint8_t *)v2 + 76);
  *((uint8_t *)v2 + 76) = v82;
  v82 = v41;
  v42 = *((uint32_t *)v2 + 20);
  *((uint32_t *)v2 + 20) = v83;
  v83 = v42;
  v43 = *((uint32_t *)v2 + 21);
  *((uint32_t *)v2 + 21) = v84;
  v84 = v43;
  v44 = *((uint32_t *)v2 + 22);
  *((uint32_t *)v2 + 22) = v85;
  v85 = v44;
  v45 = *((uint32_t *)v2 + 23);
  *((uint32_t *)v2 + 23) = v86;
  v86 = v45;
  v46 = *((uint32_t *)v2 + 24);
  *((uint32_t *)v2 + 24) = v87;
  v87 = v46;
  LOBYTE(v46) = *((uint8_t *)v2 + 100);
  *((uint8_t *)v2 + 100) = v88;
  v88 = v46;
  marisa::grimoire::vector::BitVector::Destroy(&v63);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::Vector_unsigned_char_7d5f7f::Destroy  (binary VA: 0x1298f60)
// Original: marisa::grimoire::vector::Vector<unsigned char>::~Vector
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::Vector_unsigned_char_7d5f7f::Destroy(void **self)
{
  if ( *self != nullptr )
    opDeleteArray(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::Vector_marisa_grimoire_trie_Cac_ab5998::Destroy  (binary VA: 0x1298f90)
// Original: marisa::grimoire::vector::Vector<marisa::grimoire::trie::Cache>::~Vector
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::Vector_marisa_grimoire_trie_Cac_ab5998::Destroy(void **self)
{
  if ( *self != nullptr )
    opDeleteArray(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::Vector_marisa_grimoire_trie_Key_293edb::Destroy  (binary VA: 0x1298fc0)
// Original: marisa::grimoire::vector::Vector<marisa::grimoire::trie::Key>::~Vector
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::Vector_marisa_grimoire_trie_Key_293edb::Destroy(void **self)
{
  if ( *self != nullptr )
    opDeleteArray(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::Vector_marisa_grimoire_trie_Ent_c8a24f::Destroy  (binary VA: 0x1298ff0)
// Original: marisa::grimoire::vector::Vector<marisa::grimoire::trie::Entry>::~Vector
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::Vector_marisa_grimoire_trie_Ent_c8a24f::Destroy(void **self)
{
  if ( *self != nullptr )
    opDeleteArray(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::Vector_marisa_grimoire_trie_Rev_bd9dc3::Destroy  (binary VA: 0x1299020)
// Original: marisa::grimoire::vector::Vector<marisa::grimoire::trie::ReverseKey>::~Vector
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::Vector_marisa_grimoire_trie_Rev_bd9dc3::Destroy(void **self)
{
  if ( *self != nullptr )
    opDeleteArray(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::Vector_unsigned_char_7d5f7f::read  (binary VA: 0x1299050)
// Original: marisa::grimoire::vector::Vector<unsigned char>::read
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::Vector_unsigned_char_7d5f7f::read(marisa::grimoire::vector::Vector<unsigned char> *self, marisa::grimoire::io::Reader::Self *a2)
{
  marisa::grimoire::vector::Vector<unsigned char> *v2;
  int v3;
  int v4;
  uint8_t *v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  __m128i *v9;
  unsigned int v10;
  int v11;
  size_t v12;
  uint8_t *v13;
  size_t v14;
  char *v15;
  bool v16;
  char *v17;
  char *v18;
  char *v19;
  int v20;
  size_t v21;
  unsigned int v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef uint32_t _g4_t_ptr[4];
  typedef char *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef size_t _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef char _g4_t_v35;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v25)) > _g4_s2 ? (16u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v26)) > _g4_s3 ? (20u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v27)) > _g4_s4 ? (24u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v28)) > _g4_s5 ? (28u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_ptr)) > _g4_s6 ? (32u + sizeof(_g4_t_ptr)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v30)) > _g4_s7 ? (48u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v31)) > _g4_s8 ? (52u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v32)) > _g4_s9 ? (56u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v33)) > _g4_s10 ? (60u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v34)) > _g4_s11 ? (64u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v35)) > _g4_s12 ? (68u + sizeof(_g4_t_v35)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);

  v2 = self;
  v30 = nullptr;
  v31 = nullptr;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  marisa::grimoire::io::Reader::read_data(a2, (char *)ptr, 8u);
  v28 = ptr[0];
  if ( ptr[1] != 0 )
    abort();
  if ( ptr[0] <= v34 )
    goto LABEL_28;
  v27 = ptr[0];
  if ( v34 > ptr[0] >> 1 )
  {
    v3 = 2 * v34;
    if ( v34 > 0x7FFFFFFF )
      v3 = -1;
    v27 = v3;
  }
  v4 = opNewArray(v27, (const std::nothrow_t *)&std::nothrow);
  if ( v4 != 0 )
  {
    v26 = v27 - 1;
    if ( v27 != 0 )
    {
      v5 = (uint8_t *)v4;
      v6 = -v4 & 0xF;
      if ( v27 <= v6 )
        v6 = v27;
      if ( v6 == 0 )
        goto LABEL_38;
      v7 = 0;
      do
      {
        *v5 = 0;
        v8 = v27 - 2 - v7++;
        ++v5;
      }
      while ( v6 > v7 );
      v26 = v8;
      v2 = self;
      if ( v27 != v6 )
      {
LABEL_38:
        v23 = v27 - v6;
        v25 = (v27 - v6) >> 4;
        v24 = 16 * v25;
        if ( 16 * v25 == 0 )
          goto LABEL_19;
        v9 = (__m128i *)(v4 + v6);
        v10 = 0;
        do
        {
          ++v10;
          *v9++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v10 < v25 );
        v5 += v24;
        v26 -= v24;
        if ( v23 != v24 )
        {
LABEL_19:
          v11 = v26;
          do
          {
            --v11;
            *v5++ = 0;
          }
          while ( v11 != -1 );
        }
      }
    }
  }
  v12 = v33;
  if ( v33 != 0 )
  {
    v13 = (uint8_t *)v4;
    v14 = 0;
    do
    {
      if ( v13 != nullptr )
      {
        *v13 = v31[v14];
        v12 = v33;
      }
      ++v14;
      ++v13;
    }
    while ( v14 < v12 );
  }
  v15 = v30;
  v16 = v30 == nullptr;
  v30 = (char *)v4;
  v31 = (char *)v4;
  v32 = v4;
  v34 = v27;
  if ( !v16 )
  {
    opDeleteArray(v15);
LABEL_28:
    v4 = (int)(uintptr_t)(v31);
  }
  v33 = v28;
  if ( v4 == 0 && v28 != 0 )
    abort();
  marisa::grimoire::io::Reader::read_data(a2, (char *)v4, v28);
  marisa::grimoire::io::Reader::seek(a2, -ptr[0] & 7);
  v17 = *(char **)v2;
  v18 = v31;
  *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v30);
  v19 = *((char **)v2 + 1);
  *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(v18);
  v31 = v19;
  v20 = *((uint32_t *)v2 + 2);
  *((uint32_t *)v2 + 2) = v32;
  v32 = v20;
  v21 = *((uint32_t *)v2 + 3);
  *((uint32_t *)v2 + 3) = v33;
  v33 = v21;
  v22 = *((uint32_t *)v2 + 4);
  *((uint32_t *)v2 + 4) = v34;
  v34 = v22;
  v30 = v17;
  LOBYTE(v22) = *((uint8_t *)v2 + 20);
  *((uint8_t *)v2 + 20) = v35;
  v35 = v22;
  if ( v17 != nullptr )
    opDeleteArray(v17);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::Vector_unsigned_int_af498f::realloc  (binary VA: 0x1299320)
// Original: marisa::grimoire::vector::Vector<unsigned int>::realloc
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::Vector_unsigned_int_af498f::realloc(marisa::grimoire::vector::Vector<unsigned int> *self, unsigned int a2)
{
  marisa::grimoire::vector::Vector<unsigned int> *v2;
  int v3;
  unsigned int v4;
  uint8_t *v5;
  unsigned int i;
  unsigned int v7;
  __m128i *v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  uint32_t *v12;
  unsigned int j;
  void *v14;
  int v15;
  unsigned int v16;
  uint32_t *v17;
  unsigned int v18;
  unsigned int v19;

  v2 = self;
  v18 = 4 * a2;
  v3 = opNewArray(4 * a2, (const std::nothrow_t *)&std::nothrow);
  v17 = (uint32_t *)v3;
  if ( v3 != 0 )
  {
    v16 = v18 - 1;
    if ( v18 != 0 )
    {
      v4 = -v3 & 0xF;
      if ( v18 <= v4 )
        v4 = 4 * a2;
      if ( v4 != 0 )
      {
        v5 = (uint8_t *)v3;
        for ( i = 0; i < v4; ++i )
        {
          *v5 = 0;
          v7 = v18 - 2 - i;
          ++v5;
        }
        v16 = v7;
        v2 = self;
        if ( v18 == v4 )
          goto LABEL_15;
      }
      else
      {
        v5 = (uint8_t *)v3;
      }
      v19 = v18 - v4;
      v15 = 16 * (v19 >> 4);
      if ( v15 == 0 )
        goto LABEL_13;
      v8 = (__m128i *)((char *)v17 + v4);
      v9 = 0;
      do
      {
        ++v9;
        *v8++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v9 < v19 >> 4 );
      v5 += v15;
      v16 -= v15;
      if ( v19 != v15 )
      {
LABEL_13:
        v10 = v16;
        do
        {
          --v10;
          *v5++ = 0;
        }
        while ( v10 != -1 );
      }
    }
  }
LABEL_15:
  v11 = *((uint32_t *)v2 + 3);
  if ( v11 != 0 )
  {
    v12 = v17;
    for ( j = 0; j < v11; ++j )
    {
      if ( v12 != nullptr )
      {
        *v12 = *(uint32_t *)(*((uint32_t *)v2 + 1) + 4 * j);
        v11 = *((uint32_t *)v2 + 3);
      }
      ++v12;
    }
  }
  v14 = *(void **)v2;
  *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(v17);
  *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v17);
  *((uint32_t *)v2 + 2) = (uint32_t)(uintptr_t)(v17);
  *((uint32_t *)v2 + 4) = a2;
  if ( v14 != nullptr )
    opDeleteArray(v14);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::BitVector::push_back  (binary VA: 0x1299490)
// Original: marisa::grimoire::vector::BitVector::push_back
// ----------------------------------------------------------------------------
int marisa::grimoire::vector::BitVector::push_back(marisa::grimoire::vector::BitVector::Self *self, bool a2)
{
  unsigned int v2;
  unsigned int v3;
  int result;
  unsigned int v5;
  unsigned int v6;
  int v7;
  uint32_t *v8;
  unsigned int v9;

  v2 = *((uint32_t *)self + 6);
  if ( v2 == -1 )
    abort();
  v3 = *((uint32_t *)self + 3);
  if ( v2 == 32 * v3 )
  {
    v5 = v3 + 2;
    v6 = *((uint32_t *)self + 4);
    if ( v3 + 2 > v6 )
    {
      v9 = v3 + 2;
      if ( v6 > v5 >> 1 )
      {
        v9 = 0x3FFFFFFF;
        if ( v6 <= 0x1FFFFFFF )
          v9 = 2 * v6;
      }
      marisa::grimoire::vector::Vector_unsigned_int_af498f::realloc((marisa::grimoire::vector::Vector<unsigned int> *)(self), v9);
      v3 = *((uint32_t *)self + 3);
    }
    if ( v5 > v3 )
    {
      v7 = 4 * v3;
      do
      {
        v8 = (uint32_t *)(*((uint32_t *)self + 1) + v7);
        if ( v8 != nullptr )
          *v8 = 0;
        ++v3;
        v7 += 4;
      }
      while ( v5 > v3 );
    }
    *((uint32_t *)self + 3) = v5;
    v2 = *((uint32_t *)self + 6);
  }
  result = a2;
  if ( a2 )
  {
    result = *((uint32_t *)self + 1) + 4 * (v2 >> 5);
    *(uint32_t *)result |= 1 << v2;
    ++*((uint32_t *)self + 7);
    v2 = *((uint32_t *)self + 6);
  }
  *((uint32_t *)self + 6) = v2 + 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::rotate_adaptive_marisa_grimoire_trie_Wei_63ef5c  (binary VA: 0x129acf0)
// Original: std::__rotate_adaptive<marisa::grimoire::trie::WeightedRange *,marisa::grimoire::trie::WeightedRange *,int>
// ----------------------------------------------------------------------------
char * g4_std::rotate_adaptive_marisa_grimoire_trie_Wei_63ef5c(char *a1, char *a2, int a3, int a4, int a5, uint32_t *a6, int a7)
{
  char *result;
  char *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  char *v16;
  uint32_t *v17;
  uint32_t *v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  result = a1;
  v8 = a2;
  v9 = (uint32_t *)a3;
  v10 = a6;
  if ( a5 > a7 || a4 <= a5 )
  {
    if ( a4 > a7 )
    {
      std::rotate((marisa::grimoire::trie::WeightedRange *)a1, (marisa::grimoire::trie::WeightedRange *)a2, (marisa::grimoire::trie::WeightedRange *)(uintptr_t)a3);
      return &a1[(a3 - (uint32_t)(uintptr_t)(a2)) & 0xFFFFFFF0];
    }
    else if ( a4 != 0 )
    {
      v25 = 0;
      v23 = (a2 - a1) >> 4;
      v17 = a6;
      if ( v23 > 0 )
      {
        v18 = a6;
        v19 = a1;
        v20 = (a2 - a1) >> 4;
        do
        {
          --v20;
          *v18 = *(uint32_t *)v19;
          v18[1] = *((uint32_t *)v19 + 1);
          v18[2] = *((uint32_t *)v19 + 2);
          v18[3] = *((uint32_t *)v19 + 3);
          v19 += 16;
          v18 += 4;
        }
        while ( v20 != 0 );
        v8 = a2;
        result = a1;
        v17 = &a6[4 * v23];
        v25 = (16 * v23) >> 4;
      }
      v21 = (a3 - (int)(uintptr_t)(v8)) >> 4;
      if ( v21 > 0 )
      {
        do
        {
          --v21;
          *(uint32_t *)result = *(uint32_t *)v8;
          *((uint32_t *)result + 1) = *((uint32_t *)v8 + 1);
          *((uint32_t *)result + 2) = *((uint32_t *)v8 + 2);
          *((uint32_t *)result + 3) = *((uint32_t *)v8 + 3);
          v8 += 16;
          result += 16;
        }
        while ( v21 != 0 );
      }
      result = (char *)a3;
      if ( v25 > 0 )
      {
        v22 = v25;
        do
        {
          v17 -= 4;
          result -= 16;
          --v22;
          *(uint32_t *)result = *v17;
          *((uint32_t *)result + 1) = v17[1];
          *((uint32_t *)result + 2) = v17[2];
          *((uint32_t *)result + 3) = v17[3];
        }
        while ( v22 != 0 );
        return (char *)(a3 - 16 * v25);
      }
    }
    else
    {
      return (char *)a3;
    }
  }
  else if ( a5 != 0 )
  {
    v24 = 0;
    if ( (a3 - (int)(uintptr_t)(a2)) >> 4 > 0 )
    {
      v11 = a6;
      v12 = (a3 - (int)(uintptr_t)(a2)) >> 4;
      v13 = a2;
      do
      {
        --v12;
        *v11 = *(uint32_t *)v13;
        v11[1] = *((uint32_t *)v13 + 1);
        v11[2] = *((uint32_t *)v13 + 2);
        v11[3] = *((uint32_t *)v13 + 3);
        v13 += 16;
        v11 += 4;
      }
      while ( v12 != 0 );
      v8 = a2;
      result = a1;
      v24 = (a3 - (int)(uintptr_t)(a2)) >> 4;
    }
    v14 = (v8 - result) >> 4;
    if ( v14 > 0 )
    {
      do
      {
        v8 -= 16;
        v9 -= 4;
        --v14;
        *v9 = *(uint32_t *)v8;
        v9[1] = *((uint32_t *)v8 + 1);
        v9[2] = *((uint32_t *)v8 + 2);
        v9[3] = *((uint32_t *)v8 + 3);
      }
      while ( v14 != 0 );
    }
    if ( v24 > 0 )
    {
      v15 = v24;
      v16 = result;
      do
      {
        --v15;
        *(uint32_t *)v16 = *v10;
        *((uint32_t *)v16 + 1) = v10[1];
        *((uint32_t *)v16 + 2) = v10[2];
        *((uint32_t *)v16 + 3) = v10[3];
        v10 += 4;
        v16 += 16;
      }
      while ( v15 != 0 );
      result += 16 * v24;
    }
  }
  return result;
}



// ============================================================================
// Address:   0x129ef00 (size: 213 bytes)
// Symbol:    _ZN6marisa8grimoire4trie4TailC1Ev
// Demangled: marisa::grimoire::trie::Tail::Tail(void)
// ============================================================================
// Alternative name is '_ZN6marisa8grimoire4trie4TailC2Ev'
marisa::grimoire::trie::Tail::Self *marisa::grimoire::trie::Tail::Construct(marisa::grimoire::trie::Tail::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint8_t *)self + 20) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint8_t *)self + 44) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint8_t *)self + 76) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint8_t *)self + 100) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint8_t *)self + 124) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::restore  (binary VA: 0x129efe0)
// Original: marisa::grimoire::trie::Tail::restore
// ----------------------------------------------------------------------------
unsigned int marisa::grimoire::trie::Tail::restore(marisa::grimoire::trie::Tail::Self *self, marisa::Agent::Self *a2, unsigned int a3)
{
  int v3;
  unsigned int result;
  unsigned int v5;
  int v6;
  unsigned int v7;
  int v8;
  uint8_t *v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  __m128i *v13;
  unsigned int v14;
  int v15;
  uint8_t *v16;
  unsigned int j;
  void *v18;
  bool v19;
  unsigned int v20;
  marisa::grimoire::trie::Tail::Self *v21;
  int v22;
  uint8_t *v23;
  unsigned int v24;
  char v25;
  unsigned int v26;
  int v27;
  uint8_t *v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  __m128i *v32;
  unsigned int v33;
  int v34;
  uint8_t *v35;
  unsigned int i;
  void *v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  unsigned int v46;
  int v47;
  int v48;
  uint8_t *v49;
  unsigned int v50;
  unsigned int v51;

  v3 = *((uint32_t *)a2 + 6);
  result = *((uint32_t *)self + 12);
  if ( result != 0 )
  {
    v20 = *(uint32_t *)(v3 + 12);
    v21 = self;
    do
    {
      v26 = *(uint32_t *)(v3 + 16);
      v44 = *((uint32_t *)v21 + 2);
      v51 = v20 + 1;
      if ( v20 + 1 <= v26 )
      {
        v22 = *(uint32_t *)(v3 + 4);
      }
      else
      {
        if ( v26 > (v20 + 1) >> 1 )
        {
          v27 = 2 * v26;
          if ( v26 > 0x7FFFFFFF )
            v27 = -1;
          v51 = v27;
        }
        v22 = opNewArray(v51, (const std::nothrow_t *)&std::nothrow);
        if ( v22 != 0 )
        {
          v47 = v51 - 1;
          if ( v51 != 0 )
          {
            v28 = (uint8_t *)v22;
            v29 = -v22 & 0xF;
            if ( v51 <= v29 )
              v29 = v51;
            if ( v29 == 0 )
              goto LABEL_68;
            v41 = v3;
            v30 = 0;
            do
            {
              *v28 = 0;
              v31 = v51 - 2 - v30++;
              ++v28;
            }
            while ( v29 > v30 );
            v47 = v31;
            v3 = v41;
            if ( v51 != v29 )
            {
LABEL_68:
              v38 = v51 - v29;
              v42 = (v51 - v29) >> 4;
              v39 = 16 * v42;
              if ( 16 * v42 == 0 )
                goto LABEL_57;
              v32 = (__m128i *)(v22 + v29);
              v33 = 0;
              do
              {
                ++v33;
                *v32++ = g4_m128_from<__m128i>(0LL);
              }
              while ( v33 < v42 );
              v28 += v39;
              v47 -= v39;
              if ( v38 != v39 )
              {
LABEL_57:
                v34 = v47;
                do
                {
                  --v34;
                  *v28++ = 0;
                }
                while ( v34 != -1 );
              }
            }
          }
        }
        v20 = *(uint32_t *)(v3 + 12);
        if ( v20 != 0 )
        {
          v35 = (uint8_t *)v22;
          for ( i = 0; i < v20; ++i )
          {
            if ( v35 != nullptr )
            {
              *v35 = *(uint8_t *)(*(uint32_t *)(v3 + 4) + i);
              v20 = *(uint32_t *)(v3 + 12);
            }
            ++v35;
          }
        }
        v37 = *(void **)v3;
        v19 = *(uint32_t *)v3 == 0;
        *(uint32_t *)v3 = v22;
        *(uint32_t *)(v3 + 4) = v22;
        *(uint32_t *)(v3 + 8) = v22;
        *(uint32_t *)(v3 + 16) = v51;
        if ( !v19 )
        {
          opDeleteArray(v37);
          v22 = *(uint32_t *)(v3 + 4);
          v20 = *(uint32_t *)(v3 + 12);
        }
      }
      v23 = (uint8_t *)(v20 + v22);
      if ( v23 != nullptr )
      {
        *v23 = *(uint8_t *)(v44 + a3);
        v20 = *(uint32_t *)(v3 + 12);
      }
      v21 = self;
      *(uint32_t *)(v3 + 12) = ++v20;
      v24 = *(uint32_t *)(*((uint32_t *)self + 8) + 4 * (a3 >> 5));
      v25 = a3++;
      result = v24 >> v25;
    }
    while ( (result & 1) == 0 );
  }
  else
  {
    v49 = (uint8_t *)(*((uint32_t *)self + 2) + a3);
    if ( *v49 != 0 )
    {
      v5 = *(uint32_t *)(v3 + 12);
      do
      {
        v7 = *(uint32_t *)(v3 + 16);
        v50 = v5 + 1;
        if ( v5 + 1 <= v7 )
        {
          v6 = *(uint32_t *)(v3 + 4);
        }
        else
        {
          if ( v7 > (v5 + 1) >> 1 )
          {
            v8 = 2 * v7;
            if ( v7 > 0x7FFFFFFF )
              v8 = -1;
            v50 = v8;
          }
          v6 = opNewArray(v50, (const std::nothrow_t *)&std::nothrow);
          if ( v6 != 0 )
          {
            v48 = v50 - 1;
            if ( v50 != 0 )
            {
              v9 = (uint8_t *)v6;
              v10 = -v6 & 0xF;
              if ( v50 <= v10 )
                v10 = v50;
              if ( v10 == 0 )
                goto LABEL_69;
              v45 = v3;
              v11 = 0;
              do
              {
                *v9 = 0;
                v12 = v50 - 2 - v11++;
                ++v9;
              }
              while ( v10 > v11 );
              v48 = v12;
              v3 = v45;
              if ( v50 != v10 )
              {
LABEL_69:
                v40 = v50 - v10;
                v46 = (v50 - v10) >> 4;
                v43 = 16 * v46;
                if ( 16 * v46 == 0 )
                  goto LABEL_25;
                v13 = (__m128i *)(v6 + v10);
                v14 = 0;
                do
                {
                  ++v14;
                  *v13++ = g4_m128_from<__m128i>(0LL);
                }
                while ( v14 < v46 );
                v9 += v43;
                v48 -= v43;
                if ( v40 != v43 )
                {
LABEL_25:
                  v15 = v48;
                  do
                  {
                    --v15;
                    *v9++ = 0;
                  }
                  while ( v15 != -1 );
                }
              }
            }
          }
          v5 = *(uint32_t *)(v3 + 12);
          if ( v5 != 0 )
          {
            v16 = (uint8_t *)v6;
            for ( j = 0; j < v5; ++j )
            {
              if ( v16 != nullptr )
              {
                *v16 = *(uint8_t *)(*(uint32_t *)(v3 + 4) + j);
                v5 = *(uint32_t *)(v3 + 12);
              }
              ++v16;
            }
          }
          v18 = *(void **)v3;
          v19 = *(uint32_t *)v3 == 0;
          *(uint32_t *)v3 = v6;
          *(uint32_t *)(v3 + 4) = v6;
          *(uint32_t *)(v3 + 8) = v6;
          *(uint32_t *)(v3 + 16) = v50;
          if ( !v19 )
          {
            opDeleteArray(v18);
            v6 = *(uint32_t *)(v3 + 4);
            v5 = *(uint32_t *)(v3 + 12);
          }
        }
        result = v5 + v6;
        if ( result != 0 )
        {
          *(uint8_t *)result = *v49;
          v5 = *(uint32_t *)(v3 + 12);
        }
        ++v49;
        *(uint32_t *)(v3 + 12) = ++v5;
      }
      while ( *v49 != 0 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::match  (binary VA: 0x129f3a0)
// Original: marisa::grimoire::trie::Tail::match
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::Tail::match(marisa::grimoire::trie::Tail::Self *self, marisa::Agent::Self *a2, unsigned int a3)
{
  marisa::Agent::Self *v3;
  unsigned int v4;
  unsigned int v5;
  char *v6;
  char *v7;
  char v8;
  int v10;

  v3 = a2;
  v4 = a3;
  v10 = *((uint32_t *)a2 + 6);
  v5 = *(uint32_t *)(v10 + 52);
  if ( *((uint32_t *)self + 12) != 0 )
  {
    while ( *(uint8_t *)(*((uint32_t *)self + 2) + v4) == *(uint8_t *)(*(uint32_t *)v3 + v5) )
    {
      *(uint32_t *)(v10 + 52) = ++v5;
      if ( ((*(uint32_t *)(*((uint32_t *)self + 8) + 4 * (v4 >> 5)) >> v4) & 1) != 0 )
        return 1;
      v3 = a2;
      ++v4;
      if ( v5 >= *((uint32_t *)a2 + 1) )
        return 0;
    }
  }
  else
  {
    v6 = (char *)(*((uint32_t *)self + 2) + a3);
    v7 = &v6[-v5];
    v8 = *v6;
    do
    {
      if ( *(uint8_t *)(*(uint32_t *)a2 + v5) != v8 )
        break;
      *(uint32_t *)(v10 + 52) = ++v5;
      v8 = v7[v5];
      if ( v8 == 0 )
        return 1;
    }
    while ( v5 < *((uint32_t *)a2 + 1) );
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::prefix_match  (binary VA: 0x129f450)
// Original: marisa::grimoire::trie::Tail::prefix_match
// ----------------------------------------------------------------------------
int marisa::grimoire::trie::Tail::prefix_match(marisa::grimoire::trie::Tail::Self *self, marisa::Agent::Self *a2, unsigned int a3)
{
  int v3;
  unsigned int v4;
  marisa::Agent::Self *v5;
  char v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;
  uint8_t *v13;
  unsigned int j;
  unsigned int v15;
  __m128i *v16;
  unsigned int v17;
  unsigned int v18;
  uint8_t *v19;
  unsigned int k;
  void *v21;
  unsigned int v23;
  int v24;
  uint8_t *v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  int v30;
  uint8_t *v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  __m128i *v35;
  unsigned int v36;
  int v37;
  uint8_t *v38;
  unsigned int m;
  void *v40;
  bool v41;
  unsigned int v42;
  int v43;
  uint8_t *v44;
  unsigned int v45;
  int v46;
  uint8_t *v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  __m128i *v51;
  unsigned int v52;
  int v53;
  uint8_t *v54;
  unsigned int i;
  void *v56;
  marisa::grimoire::trie::Tail::Self *v57;
  int v58;
  uint8_t *v59;
  unsigned int v60;
  char v61;
  unsigned int v62;
  int v63;
  uint8_t *v64;
  unsigned int v65;
  unsigned int v66;
  int v67;
  __m128i *v68;
  unsigned int v69;
  int v70;
  uint8_t *v71;
  unsigned int n;
  void *v73;
  unsigned int v74;
  unsigned int v75;
  int v76;
  unsigned int v77;
  int v78;
  int v79;
  unsigned int v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  int v84;
  unsigned int v85;
  int v86;
  unsigned int v87;
  unsigned int v88;
  uint8_t *v89;
  int v90;
  int v91;
  int v92;
  unsigned int v93;
  int v94;
  unsigned int v95;
  int v96;
  unsigned int v97;
  unsigned int v98;
  uint8_t *v99;
  unsigned int v100;
  uint8_t *v101;
  unsigned int v102;
  unsigned int v103;

  v3 = *((uint32_t *)a2 + 6);
  if ( *((uint32_t *)self + 12) == 0 )
  {
    v4 = *(uint32_t *)(v3 + 52);
    v88 = *((uint32_t *)self + 2) + a3 - v4;
    v5 = a2;
    v6 = *(uint8_t *)(*((uint32_t *)self + 2) + a3);
    while ( 1 )
    {
      if ( *(uint8_t *)(*(uint32_t *)v5 + v4) != v6 )
        return 0;
      v7 = *(uint32_t *)(v3 + 12);
      v9 = *(uint32_t *)(v3 + 16);
      v97 = v7 + 1;
      if ( v7 + 1 > v9 )
        break;
      v101 = *(uint8_t **)(v3 + 4);
LABEL_4:
      if ( &v101[v7] != nullptr )
      {
        v101[v7] = *(uint8_t *)(v88 + v4);
        v7 = *(uint32_t *)(v3 + 12);
      }
      v4 = *(uint32_t *)(v3 + 52) + 1;
      v8 = v7 + 1;
      *(uint32_t *)(v3 + 12) = v8;
      *(uint32_t *)(v3 + 52) = v4;
      v102 = v8;
      v6 = *(uint8_t *)(v88 + v4);
      if ( v6 == 0 )
        return 1;
      v5 = a2;
      if ( v4 >= *((uint32_t *)a2 + 1) )
      {
        v99 = (uint8_t *)(v88 + v4);
        v42 = v102;
        do
        {
          v45 = *(uint32_t *)(v3 + 16);
          v103 = v42 + 1;
          if ( v42 + 1 <= v45 )
          {
            v43 = *(uint32_t *)(v3 + 4);
          }
          else
          {
            if ( v45 > (v42 + 1) >> 1 )
            {
              v46 = 2 * v45;
              if ( v45 > 0x7FFFFFFF )
                v46 = -1;
              v103 = v46;
            }
            v43 = opNewArray(v103, (const std::nothrow_t *)&std::nothrow);
            if ( v43 != 0 )
            {
              v96 = v103 - 1;
              if ( v103 != 0 )
              {
                v47 = (uint8_t *)v43;
                v48 = -v43 & 0xF;
                if ( v103 <= v48 )
                  v48 = v103;
                if ( v48 == 0 )
                  goto LABEL_135;
                v92 = v3;
                v49 = 0;
                do
                {
                  *v47 = 0;
                  v50 = v103 - 2 - v49++;
                  ++v47;
                }
                while ( v48 > v49 );
                v96 = v50;
                v3 = v92;
                if ( v103 != v48 )
                {
LABEL_135:
                  v85 = v103 - v48;
                  v93 = (v103 - v48) >> 4;
                  v90 = 16 * v93;
                  if ( 16 * v93 == 0 )
                    goto LABEL_91;
                  v51 = (__m128i *)(v43 + v48);
                  v52 = 0;
                  do
                  {
                    ++v52;
                    *v51++ = g4_m128_from<__m128i>(0LL);
                  }
                  while ( v52 < v93 );
                  v47 += v90;
                  v96 -= v90;
                  if ( v85 != v90 )
                  {
LABEL_91:
                    v53 = v96;
                    do
                    {
                      --v53;
                      *v47++ = 0;
                    }
                    while ( v53 != -1 );
                  }
                }
              }
            }
            v42 = *(uint32_t *)(v3 + 12);
            if ( v42 != 0 )
            {
              v54 = (uint8_t *)v43;
              for ( i = 0; i < v42; ++i )
              {
                if ( v54 != nullptr )
                {
                  *v54 = *(uint8_t *)(*(uint32_t *)(v3 + 4) + i);
                  v42 = *(uint32_t *)(v3 + 12);
                }
                ++v54;
              }
            }
            v56 = *(void **)v3;
            v41 = *(uint32_t *)v3 == 0;
            *(uint32_t *)v3 = v43;
            *(uint32_t *)(v3 + 4) = v43;
            *(uint32_t *)(v3 + 8) = v43;
            *(uint32_t *)(v3 + 16) = v103;
            if ( !v41 )
            {
              opDeleteArray(v56);
              v43 = *(uint32_t *)(v3 + 4);
              v42 = *(uint32_t *)(v3 + 12);
            }
          }
          v44 = (uint8_t *)(v42 + v43);
          if ( v44 != nullptr )
          {
            *v44 = *v99;
            v42 = *(uint32_t *)(v3 + 12);
          }
          ++v99;
          *(uint32_t *)(v3 + 12) = ++v42;
        }
        while ( *v99 != 0 );
        return 1;
      }
    }
    if ( v9 > (v7 + 1) >> 1 )
    {
      v10 = 2 * v9;
      if ( v9 > 0x7FFFFFFF )
        v10 = -1;
      v97 = v10;
    }
    v11 = opNewArray(v97, (const std::nothrow_t *)&std::nothrow);
    v101 = (uint8_t *)v11;
    if ( v11 != 0 )
    {
      v95 = v97 - 1;
      if ( v97 != 0 )
      {
        v12 = -v11 & 0xF;
        if ( v97 <= v12 )
          v12 = v97;
        if ( v12 == 0 )
        {
          v13 = (uint8_t *)v11;
          goto LABEL_22;
        }
        v13 = (uint8_t *)v11;
        v82 = v4;
        for ( j = 0; j < v12; ++j )
        {
          *v13 = 0;
          v15 = v97 - 2 - j;
          ++v13;
        }
        v95 = v15;
        v4 = v82;
        if ( v97 != v12 )
        {
LABEL_22:
          v75 = v97 - v12;
          v83 = (v97 - v12) >> 4;
          v78 = 16 * v83;
          if ( 16 * v83 == 0 )
            goto LABEL_26;
          v16 = (__m128i *)&v101[v12];
          v17 = 0;
          do
          {
            ++v17;
            *v16++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v17 < v83 );
          v13 += v78;
          v95 -= v78;
          if ( v75 != v78 )
          {
LABEL_26:
            v18 = v95;
            do
            {
              --v18;
              *v13++ = 0;
            }
            while ( v18 != -1 );
          }
        }
      }
    }
    v7 = *(uint32_t *)(v3 + 12);
    if ( v7 != 0 )
    {
      v19 = v101;
      for ( k = 0; k < v7; ++k )
      {
        if ( v19 != nullptr )
        {
          *v19 = *(uint8_t *)(*(uint32_t *)(v3 + 4) + k);
          v7 = *(uint32_t *)(v3 + 12);
        }
        ++v19;
      }
    }
    v21 = *(void **)v3;
    *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v101);
    *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v101);
    *(uint32_t *)(v3 + 8) = (uint32_t)(uintptr_t)(v101);
    *(uint32_t *)(v3 + 16) = v97;
    if ( v21 != nullptr )
    {
      opDeleteArray(v21);
      v7 = *(uint32_t *)(v3 + 12);
      v101 = *(uint8_t **)(v3 + 4);
    }
    goto LABEL_4;
  }
  v23 = *(uint32_t *)(v3 + 52);
  while ( 1 )
  {
    v89 = (uint8_t *)(*((uint32_t *)self + 2) + a3);
    if ( *v89 != *(uint8_t *)(*(uint32_t *)a2 + v23) )
      return 0;
    v26 = *(uint32_t *)(v3 + 12);
    v29 = *(uint32_t *)(v3 + 16);
    v98 = v26 + 1;
    if ( v26 + 1 <= v29 )
    {
      v24 = *(uint32_t *)(v3 + 4);
    }
    else
    {
      if ( v29 > (v26 + 1) >> 1 )
      {
        v30 = 2 * v29;
        if ( v29 > 0x7FFFFFFF )
          v30 = -1;
        v98 = v30;
      }
      v24 = opNewArray(v98, (const std::nothrow_t *)&std::nothrow);
      if ( v24 != 0 )
      {
        v84 = v98 - 1;
        if ( v98 != 0 )
        {
          v31 = (uint8_t *)v24;
          v32 = -v24 & 0xF;
          if ( v98 <= v32 )
            v32 = v98;
          if ( v32 == 0 )
            goto LABEL_136;
          v79 = v3;
          v33 = 0;
          do
          {
            *v31 = 0;
            v34 = v98 - 2 - v33++;
            ++v31;
          }
          while ( v32 > v33 );
          v84 = v34;
          v3 = v79;
          if ( v98 != v32 )
          {
LABEL_136:
            v74 = v98 - v32;
            v80 = (v98 - v32) >> 4;
            v76 = 16 * v80;
            if ( 16 * v80 == 0 )
              goto LABEL_60;
            v35 = (__m128i *)(v24 + v32);
            v36 = 0;
            do
            {
              ++v36;
              *v35++ = g4_m128_from<__m128i>(0LL);
            }
            while ( v36 < v80 );
            v31 += v76;
            v84 -= v76;
            if ( v74 != v76 )
            {
LABEL_60:
              v37 = v84;
              do
              {
                --v37;
                *v31++ = 0;
              }
              while ( v37 != -1 );
            }
          }
        }
      }
      v26 = *(uint32_t *)(v3 + 12);
      if ( v26 != 0 )
      {
        v38 = (uint8_t *)v24;
        for ( m = 0; m < v26; ++m )
        {
          if ( v38 != nullptr )
          {
            *v38 = *(uint8_t *)(*(uint32_t *)(v3 + 4) + m);
            v26 = *(uint32_t *)(v3 + 12);
          }
          ++v38;
        }
      }
      v40 = *(void **)v3;
      v41 = *(uint32_t *)v3 == 0;
      *(uint32_t *)v3 = v24;
      *(uint32_t *)(v3 + 4) = v24;
      *(uint32_t *)(v3 + 8) = v24;
      *(uint32_t *)(v3 + 16) = v98;
      if ( !v41 )
      {
        opDeleteArray(v40);
        v24 = *(uint32_t *)(v3 + 4);
        v26 = *(uint32_t *)(v3 + 12);
      }
    }
    v25 = (uint8_t *)(v26 + v24);
    if ( v25 != nullptr )
    {
      *v25 = *v89;
      v26 = *(uint32_t *)(v3 + 12);
    }
    v27 = v26 + 1;
    v28 = *(uint32_t *)(v3 + 52);
    *(uint32_t *)(v3 + 12) = v27;
    v23 = v28 + 1;
    *(uint32_t *)(v3 + 52) = v23;
    if ( ((*(uint32_t *)(*((uint32_t *)self + 8) + 4 * (a3 >> 5)) >> a3) & 1) != 0 )
      return 1;
    ++a3;
    if ( v23 >= *((uint32_t *)a2 + 1) )
    {
      v57 = self;
      do
      {
        v62 = *(uint32_t *)(v3 + 16);
        v91 = *((uint32_t *)v57 + 2);
        v100 = v27 + 1;
        if ( v27 + 1 <= v62 )
        {
          v58 = *(uint32_t *)(v3 + 4);
        }
        else
        {
          if ( v62 > (v27 + 1) >> 1 )
          {
            v63 = 2 * v62;
            if ( v62 > 0x7FFFFFFF )
              v63 = -1;
            v100 = v63;
          }
          v58 = opNewArray(v100, (const std::nothrow_t *)&std::nothrow);
          if ( v58 != 0 )
          {
            v94 = v100 - 1;
            if ( v100 != 0 )
            {
              v64 = (uint8_t *)v58;
              v65 = -v58 & 0xF;
              if ( v100 <= v65 )
                v65 = v100;
              if ( v65 == 0 )
                goto LABEL_137;
              v86 = v3;
              v66 = 0;
              do
              {
                *v64 = 0;
                v67 = v100 - 2 - v66++;
                ++v64;
              }
              while ( v65 > v66 );
              v94 = v67;
              v3 = v86;
              if ( v100 != v65 )
              {
LABEL_137:
                v77 = v100 - v65;
                v87 = (v100 - v65) >> 4;
                v81 = 16 * v87;
                if ( 16 * v87 == 0 )
                  goto LABEL_122;
                v68 = (__m128i *)(v58 + v65);
                v69 = 0;
                do
                {
                  ++v69;
                  *v68++ = g4_m128_from<__m128i>(0LL);
                }
                while ( v69 < v87 );
                v64 += v81;
                v94 -= v81;
                if ( v77 != v81 )
                {
LABEL_122:
                  v70 = v94;
                  do
                  {
                    --v70;
                    *v64++ = 0;
                  }
                  while ( v70 != -1 );
                }
              }
            }
          }
          v27 = *(uint32_t *)(v3 + 12);
          if ( v27 != 0 )
          {
            v71 = (uint8_t *)v58;
            for ( n = 0; n < v27; ++n )
            {
              if ( v71 != nullptr )
              {
                *v71 = *(uint8_t *)(*(uint32_t *)(v3 + 4) + n);
                v27 = *(uint32_t *)(v3 + 12);
              }
              ++v71;
            }
          }
          v73 = *(void **)v3;
          v41 = *(uint32_t *)v3 == 0;
          *(uint32_t *)v3 = v58;
          *(uint32_t *)(v3 + 4) = v58;
          *(uint32_t *)(v3 + 8) = v58;
          *(uint32_t *)(v3 + 16) = v100;
          if ( !v41 )
          {
            opDeleteArray(v73);
            v58 = *(uint32_t *)(v3 + 4);
            v27 = *(uint32_t *)(v3 + 12);
          }
        }
        v59 = (uint8_t *)(v27 + v58);
        if ( v59 != nullptr )
        {
          *v59 = *(uint8_t *)(v91 + a3);
          v27 = *(uint32_t *)(v3 + 12);
        }
        v57 = self;
        *(uint32_t *)(v3 + 12) = ++v27;
        v60 = *(uint32_t *)(*((uint32_t *)self + 8) + 4 * (a3 >> 5));
        v61 = a3++;
      }
      while ( ((v60 >> v61) & 1) == 0 );
      return 1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::swap  (binary VA: 0x129fc20)
// Original: marisa::grimoire::trie::Tail::swap
// ----------------------------------------------------------------------------
marisa::grimoire::trie::Tail::Self * marisa::grimoire::trie::Tail::swap(marisa::grimoire::trie::Tail::Self *self, marisa::grimoire::trie::Tail::Self *a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12; // di
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char v23; // di
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  char v38; // di
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  char v49; // di
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  v4 = *((uint32_t *)a2 + 1);
  *(uint32_t *)a2 = v3;
  v5 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = v4;
  v6 = *((uint32_t *)a2 + 2);
  *((uint32_t *)a2 + 1) = v5;
  v7 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 2) = v6;
  v8 = *((uint32_t *)a2 + 3);
  *((uint32_t *)a2 + 2) = v7;
  v9 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 3) = v8;
  v10 = *((uint32_t *)a2 + 4);
  *((uint32_t *)a2 + 3) = v9;
  v11 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 4) = v10;
  *((uint32_t *)a2 + 4) = v11;
  v12 = *((uint8_t *)self + 20);
  *((uint8_t *)self + 20) = *((uint8_t *)a2 + 20);
  v13 = *((uint32_t *)a2 + 6);
  *((uint8_t *)a2 + 20) = v12;
  v14 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 6) = v13;
  v15 = *((uint32_t *)a2 + 7);
  *((uint32_t *)a2 + 6) = v14;
  v16 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 7) = v15;
  v17 = *((uint32_t *)a2 + 8);
  *((uint32_t *)a2 + 7) = v16;
  v18 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 8) = v17;
  v19 = *((uint32_t *)a2 + 9);
  *((uint32_t *)a2 + 8) = v18;
  v20 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 9) = v19;
  v21 = *((uint32_t *)a2 + 10);
  *((uint32_t *)a2 + 9) = v20;
  v22 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 10) = v21;
  LOBYTE(v21) = *((uint8_t *)a2 + 44);
  *((uint32_t *)a2 + 10) = v22;
  v23 = *((uint8_t *)self + 44);
  *((uint8_t *)self + 44) = v21;
  v24 = *((uint32_t *)a2 + 12);
  *((uint8_t *)a2 + 44) = v23;
  v25 = *((uint32_t *)self + 12);
  *((uint32_t *)self + 12) = v24;
  v26 = *((uint32_t *)a2 + 13);
  *((uint32_t *)a2 + 12) = v25;
  v27 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 13) = v26;
  v28 = *((uint32_t *)a2 + 14);
  *((uint32_t *)a2 + 13) = v27;
  v29 = *((uint32_t *)self + 14);
  *((uint32_t *)self + 14) = v28;
  v30 = *((uint32_t *)a2 + 15);
  *((uint32_t *)a2 + 14) = v29;
  v31 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 15) = v30;
  v32 = *((uint32_t *)a2 + 16);
  *((uint32_t *)a2 + 15) = v31;
  v33 = *((uint32_t *)self + 16);
  *((uint32_t *)self + 16) = v32;
  v34 = *((uint32_t *)a2 + 17);
  *((uint32_t *)a2 + 16) = v33;
  v35 = *((uint32_t *)self + 17);
  *((uint32_t *)self + 17) = v34;
  v36 = *((uint32_t *)a2 + 18);
  *((uint32_t *)a2 + 17) = v35;
  v37 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 18) = v36;
  *((uint32_t *)a2 + 18) = v37;
  v38 = *((uint8_t *)self + 76);
  *((uint8_t *)self + 76) = *((uint8_t *)a2 + 76);
  v39 = *((uint32_t *)a2 + 20);
  *((uint8_t *)a2 + 76) = v38;
  v40 = *((uint32_t *)self + 20);
  *((uint32_t *)self + 20) = v39;
  v41 = *((uint32_t *)a2 + 21);
  *((uint32_t *)a2 + 20) = v40;
  v42 = *((uint32_t *)self + 21);
  *((uint32_t *)self + 21) = v41;
  v43 = *((uint32_t *)a2 + 22);
  *((uint32_t *)a2 + 21) = v42;
  v44 = *((uint32_t *)self + 22);
  *((uint32_t *)self + 22) = v43;
  v45 = *((uint32_t *)a2 + 23);
  *((uint32_t *)a2 + 22) = v44;
  v46 = *((uint32_t *)self + 23);
  *((uint32_t *)self + 23) = v45;
  v47 = *((uint32_t *)a2 + 24);
  *((uint32_t *)a2 + 23) = v46;
  v48 = *((uint32_t *)self + 24);
  *((uint32_t *)self + 24) = v47;
  LOBYTE(v47) = *((uint8_t *)a2 + 100);
  *((uint32_t *)a2 + 24) = v48;
  v49 = *((uint8_t *)self + 100);
  *((uint8_t *)self + 100) = v47;
  v50 = *((uint32_t *)a2 + 26);
  *((uint8_t *)a2 + 100) = v49;
  v51 = *((uint32_t *)self + 26);
  *((uint32_t *)self + 26) = v50;
  v52 = *((uint32_t *)a2 + 27);
  *((uint32_t *)a2 + 26) = v51;
  v53 = *((uint32_t *)self + 27);
  *((uint32_t *)self + 27) = v52;
  v54 = *((uint32_t *)a2 + 28);
  *((uint32_t *)a2 + 27) = v53;
  v55 = *((uint32_t *)self + 28);
  *((uint32_t *)self + 28) = v54;
  v56 = *((uint32_t *)a2 + 29);
  *((uint32_t *)a2 + 28) = v55;
  v57 = *((uint32_t *)self + 29);
  *((uint32_t *)self + 29) = v56;
  v58 = *((uint32_t *)a2 + 30);
  *((uint32_t *)a2 + 29) = v57;
  v59 = *((uint32_t *)self + 30);
  *((uint32_t *)self + 30) = v58;
  *((uint32_t *)a2 + 30) = v59;
  LOBYTE(v58) = *((uint8_t *)self + 124);
  *((uint8_t *)self + 124) = *((uint8_t *)a2 + 124);
  *((uint8_t *)a2 + 124) = v58;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::clear  (binary VA: 0x129fdd0)
// Original: marisa::grimoire::trie::Tail::clear
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::Tail::clear(marisa::grimoire::trie::Tail::Self *self)
{
  void *v1[32];

  marisa::grimoire::trie::Tail::Construct((marisa::grimoire::trie::Tail::Self *)v1);
  marisa::grimoire::trie::Tail::swap((marisa::grimoire::trie::Tail::Self *)v1, self);
  if ( v1[26] != nullptr )
    opDeleteArray(v1[26]);
  if ( v1[20] != nullptr )
    opDeleteArray(v1[20]);
  if ( v1[14] != nullptr )
    opDeleteArray(v1[14]);
  if ( v1[6] != nullptr )
    opDeleteArray(v1[6]);
  if ( v1[0] != nullptr )
    opDeleteArray(v1[0]);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::write  (binary VA: 0x129fe80)
// Original: marisa::grimoire::trie::Tail::write_
// ----------------------------------------------------------------------------
char marisa::grimoire::trie::Tail::write(marisa::grimoire::trie::Tail::Self *self, marisa::grimoire::io::Writer::Self *a2)
{
  size_t v2;
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint64_t _g4_t_ptr;
  typedef uint32_t _g4_t_v15[2];
  typedef uint32_t _g4_t_v16[2];
  typedef uint32_t _g4_t_v17[2];
  typedef uint32_t _g4_t_v18[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_ptr)) > _g4_s2 ? (8u + sizeof(_g4_t_ptr)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v18)) > _g4_s6 ? (40u + sizeof(_g4_t_v18)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);

  ptr =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*((uint32_t *)self + 3)), 0);
  marisa::grimoire::io::Writer::write_data(a2, (char *)&ptr, 8u);
  v2 = *((uint32_t *)self + 3);
  if ( v2 != 0 && *((uint32_t *)self + 2) == 0 )
    goto LABEL_12;
  marisa::grimoire::io::Writer::write_data(a2, *((char **)self + 2), v2);
  marisa::grimoire::io::Writer::seek(a2, -*((uint32_t *)self + 3) & 7);
  v3 = *((uint32_t *)self + 9);
  v16[1] = 0;
  v16[0] = 4 * v3;
  marisa::grimoire::io::Writer::write_data(a2, (char *)v16, 8u);
  v4 = *((uint32_t *)self + 9);
  if ( v4 != 0 && *((uint32_t *)self + 8) == 0 )
    goto LABEL_12;
  if ( v4 > 0x3FFFFFFF )
    goto LABEL_12;
  marisa::grimoire::io::Writer::write_data(a2, *((char **)self + 8), 4 * v4);
  marisa::grimoire::io::Writer::seek(a2, (-4 * *((uint32_t *)self + 9)) & 7);
  v12 = *((uint32_t *)self + 12);
  marisa::grimoire::io::Writer::write_data(a2, (char *)&v12, 4u);
  v13 = *((uint32_t *)self + 13);
  marisa::grimoire::io::Writer::write_data(a2, (char *)&v13, 4u);
  v5 = *((uint32_t *)self + 17);
  v15[1] = 0;
  v15[0] = 12 * v5;
  marisa::grimoire::io::Writer::write_data(a2, (char *)v15, 8u);
  v6 = *((uint32_t *)self + 17);
  if ( v6 != 0 && *((uint32_t *)self + 16) == 0 )
    goto LABEL_12;
  if ( v6 > 0x15555555 )
    goto LABEL_12;
  marisa::grimoire::io::Writer::write_data(a2, *((char **)self + 16), 12 * v6);
  marisa::grimoire::io::Writer::seek(a2, (4 * (uint8_t)*((uint32_t *)self + 17)) & 4);
  v7 = *((uint32_t *)self + 23);
  v17[1] = 0;
  v17[0] = 4 * v7;
  marisa::grimoire::io::Writer::write_data(a2, (char *)v17, 8u);
  v8 = *((uint32_t *)self + 23);
  if ( v8 != 0 && *((uint32_t *)self + 22) == 0 )
    goto LABEL_12;
  if ( v8 > 0x3FFFFFFF
    || (marisa::grimoire::io::Writer::write_data(a2, *((char **)self + 22), 4 * v8),
        marisa::grimoire::io::Writer::seek(a2, (-4 * *((uint32_t *)self + 23)) & 7),
        v9 = *((uint32_t *)self + 29),
        v18[1] = 0,
        v18[0] = 4 * v9,
        marisa::grimoire::io::Writer::write_data(a2, (char *)v18, 8u),
        (v10 = *((uint32_t *)self + 29)) != 0)
    && *((uint32_t *)self + 28) == 0
    || v10 > 0x3FFFFFFF )
  {
LABEL_12:
    abort();
  }
  marisa::grimoire::io::Writer::write_data(a2, *((char **)self + 28), 4 * v10);
  return marisa::grimoire::io::Writer::seek(a2, (-4 * *((uint32_t *)self + 29)) & 7);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::write_ea12a0130  (binary VA: 0x12a0130)
// Original: marisa::grimoire::trie::Tail::write
// ----------------------------------------------------------------------------
char marisa::grimoire::trie::Tail::write_ea12a0130(marisa::grimoire::trie::Tail::Self *self, marisa::grimoire::io::Writer::Self *a2)
{
  return marisa::grimoire::trie::Tail::write(self, a2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::map  (binary VA: 0x12a0160)
// Original: marisa::grimoire::trie::Tail::map_
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::Tail::map(marisa::grimoire::trie::Tail::Self *self, marisa::grimoire::io::Mapper::Self *a2)
{
  unsigned int *v2;
  unsigned int v3;
  void *v4;
  uint32_t *v5;
  unsigned int v6;
  unsigned int *v7;
  uint32_t *v8;
  uint32_t *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  uint64_t v14;
  unsigned int v15;
  uint64_t v16;
  uint64_t v17;
  int v18;
  int v19;
  int v20;
  int v21;
  void *v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  void *v28;
  int v29;
  unsigned int v30;
  void *v31;
  int v32;
  int v33;

  v2 = (unsigned int *)marisa::grimoire::io::Mapper::map_data(a2, 8u);
  v3 = *v2;
  if ( v2[1] != 0 )
    abort();
  v23 = marisa::grimoire::io::Mapper::map_data(a2, v3);
  marisa::grimoire::io::Mapper::seek(a2, -v3 & 7);
  v4 = *(void **)self;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = v23;
  *((uint32_t *)self + 3) = v3;
  *((uint32_t *)self + 4) = 0;
  *((uint8_t *)self + 20) = 1;
  if ( v4 != nullptr )
    opDeleteArray(v4);
  v5 = (uint32_t *)marisa::grimoire::io::Mapper::map_data(a2, 8u);
  LODWORD(v14) = *v5;
  if ( v5[1] != 0 )
    abort();
  if ( (v14 & 3) != 0 )
    abort();
  HIDWORD(v14) = v5[1];
  v18 = marisa::grimoire::io::Mapper::map_data(a2, 4 * (v14 >> 2));
  marisa::grimoire::io::Mapper::seek(a2, -(int)v14 & 7);
  v24 = v18;
  v25 = v14 >> 2;
  v26 = *(uint32_t *)marisa::grimoire::io::Mapper::map_data(a2, 4u);
  v6 = *(uint32_t *)marisa::grimoire::io::Mapper::map_data(a2, 4u);
  if ( v6 > v26 )
    abort();
  v27 = v6;
  v7 = (unsigned int *)marisa::grimoire::io::Mapper::map_data(a2, 8u);
  v15 = *v7;
  if ( v7[1] != 0 )
    abort();
  if ( *v7 % 0xCuLL != 0 )
    abort();
  v19 = marisa::grimoire::io::Mapper::map_data(a2, 12 * (v15 / 0xC));
  marisa::grimoire::io::Mapper::seek(a2, -v15 & 7);
  v29 = v19;
  v30 = v15 / 0xC;
  v8 = (uint32_t *)marisa::grimoire::io::Mapper::map_data(a2, 8u);
  LODWORD(v16) = *v8;
  if ( v8[1] != 0 )
    abort();
  if ( (v16 & 3) != 0 )
    abort();
  HIDWORD(v16) = v8[1];
  v20 = marisa::grimoire::io::Mapper::map_data(a2, 4 * (v16 >> 2));
  marisa::grimoire::io::Mapper::seek(a2, -(int)v16 & 7);
  v32 = v20;
  v33 = v16 >> 2;
  v9 = (uint32_t *)marisa::grimoire::io::Mapper::map_data(a2, 8u);
  LODWORD(v17) = *v9;
  if ( v9[1] != 0 )
    abort();
  if ( (v17 & 3) != 0 )
    abort();
  HIDWORD(v17) = v9[1];
  v21 = marisa::grimoire::io::Mapper::map_data(a2, 4 * (v17 >> 2));
  marisa::grimoire::io::Mapper::seek(a2, -(int)v17 & 7);
  v10 = *((void **)self + 6);
  *((uint32_t *)self + 6) = 0;
  v22 = v10;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = v24;
  *((uint32_t *)self + 9) = v25;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 12) = v26;
  *((uint32_t *)self + 13) = v27;
  *((uint8_t *)self + 44) = 1;
  v11 = *((void **)self + 14);
  *((uint32_t *)self + 14) = 0;
  v28 = v11;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = v29;
  *((uint32_t *)self + 17) = v30;
  *((uint32_t *)self + 18) = 0;
  *((uint8_t *)self + 76) = 1;
  v12 = *((void **)self + 20);
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = v32;
  v31 = v12;
  *((uint32_t *)self + 23) = v33;
  *((uint32_t *)self + 24) = 0;
  *((uint8_t *)self + 100) = 1;
  v13 = *((void **)self + 26);
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = v21;
  *((uint32_t *)self + 29) = v17 >> 2;
  *((uint32_t *)self + 30) = 0;
  *((uint8_t *)self + 124) = 1;
  if ( v13 != nullptr )
  {
    opDeleteArray(v13);
    v12 = v31;
  }
  if ( v12 != nullptr )
    opDeleteArray(v12);
  if ( v28 != nullptr )
    opDeleteArray(v28);
  if ( v22 != nullptr )
    opDeleteArray(v22);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::map_ea12a0b70  (binary VA: 0x12a0b70)
// Original: marisa::grimoire::trie::Tail::map
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::Tail::map_ea12a0b70(marisa::grimoire::trie::Tail::Self *self, marisa::grimoire::io::Mapper::Self *a2)
{
  void *v2[32];

  marisa::grimoire::trie::Tail::Construct((marisa::grimoire::trie::Tail::Self *)v2);
  marisa::grimoire::trie::Tail::map((marisa::grimoire::trie::Tail::Self *)v2, a2);
  marisa::grimoire::trie::Tail::swap(self, (marisa::grimoire::trie::Tail::Self *)v2);
  if ( v2[26] != nullptr )
    opDeleteArray(v2[26]);
  if ( v2[20] != nullptr )
    opDeleteArray(v2[20]);
  if ( v2[14] != nullptr )
    opDeleteArray(v2[14]);
  if ( v2[6] != nullptr )
    opDeleteArray(v2[6]);
  if ( v2[0] != nullptr )
    opDeleteArray(v2[0]);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::read  (binary VA: 0x12a0c30)
// Original: marisa::grimoire::trie::Tail::read_
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::Tail::read(marisa::grimoire::trie::Tail::Self *self, marisa::grimoire::io::Reader::Self *a2)
{
  marisa::grimoire::trie::Tail::Self *v2;
  int v3;
  int v4;
  uint8_t *v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  __m128i *v9;
  unsigned int v10;
  int v11;
  size_t v12;
  uint8_t *v13;
  size_t v14;
  char *v15;
  bool v16;
  char *v17;
  char *v18;
  char *v19;
  int v20;
  size_t v21;
  unsigned int v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef uint32_t _g4_t_ptr[4];
  typedef char *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef size_t _g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef char _g4_t_v35;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v25)) > _g4_s2 ? (16u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v26)) > _g4_s3 ? (20u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v27)) > _g4_s4 ? (24u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v28)) > _g4_s5 ? (28u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_ptr)) > _g4_s6 ? (32u + sizeof(_g4_t_ptr)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v30)) > _g4_s7 ? (48u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v31)) > _g4_s8 ? (52u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v32)) > _g4_s9 ? (56u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v33)) > _g4_s10 ? (60u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v34)) > _g4_s11 ? (64u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v35)) > _g4_s12 ? (68u + sizeof(_g4_t_v35)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);

  v2 = self;
  v30 = nullptr;
  v31 = nullptr;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  marisa::grimoire::io::Reader::read_data(a2, (char *)ptr, 8u);
  v28 = ptr[0];
  if ( ptr[1] != 0 )
    abort();
  if ( ptr[0] <= v34 )
    goto LABEL_28;
  v27 = ptr[0];
  if ( v34 > ptr[0] >> 1 )
  {
    v3 = 2 * v34;
    if ( v34 > 0x7FFFFFFF )
      v3 = -1;
    v27 = v3;
  }
  v4 = opNewArray(v27, (const std::nothrow_t *)&std::nothrow);
  if ( v4 != 0 )
  {
    v26 = v27 - 1;
    if ( v27 != 0 )
    {
      v5 = (uint8_t *)v4;
      v6 = -v4 & 0xF;
      if ( v27 <= v6 )
        v6 = v27;
      if ( v6 == 0 )
        goto LABEL_38;
      v7 = 0;
      do
      {
        *v5 = 0;
        v8 = v27 - 2 - v7++;
        ++v5;
      }
      while ( v6 > v7 );
      v26 = v8;
      v2 = self;
      if ( v27 != v6 )
      {
LABEL_38:
        v23 = v27 - v6;
        v25 = (v27 - v6) >> 4;
        v24 = 16 * v25;
        if ( 16 * v25 == 0 )
          goto LABEL_19;
        v9 = (__m128i *)(v4 + v6);
        v10 = 0;
        do
        {
          ++v10;
          *v9++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v10 < v25 );
        v5 += v24;
        v26 -= v24;
        if ( v23 != v24 )
        {
LABEL_19:
          v11 = v26;
          do
          {
            --v11;
            *v5++ = 0;
          }
          while ( v11 != -1 );
        }
      }
    }
  }
  v12 = v33;
  if ( v33 != 0 )
  {
    v13 = (uint8_t *)v4;
    v14 = 0;
    do
    {
      if ( v13 != nullptr )
      {
        *v13 = v31[v14];
        v12 = v33;
      }
      ++v14;
      ++v13;
    }
    while ( v12 > v14 );
  }
  v15 = v30;
  v16 = v30 == nullptr;
  v30 = (char *)v4;
  v31 = (char *)v4;
  v32 = v4;
  v34 = v27;
  if ( !v16 )
  {
    opDeleteArray(v15);
LABEL_28:
    v4 = (int)(uintptr_t)(v31);
  }
  v33 = v28;
  if ( v4 == 0 && v28 != 0 )
    abort();
  marisa::grimoire::io::Reader::read_data(a2, (char *)v4, v28);
  marisa::grimoire::io::Reader::seek(a2, -ptr[0] & 7);
  v17 = *(char **)v2;
  v18 = v31;
  *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v30);
  v19 = *((char **)v2 + 1);
  *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(v18);
  v31 = v19;
  v20 = *((uint32_t *)v2 + 2);
  *((uint32_t *)v2 + 2) = v32;
  v32 = v20;
  v21 = *((uint32_t *)v2 + 3);
  *((uint32_t *)v2 + 3) = v33;
  v33 = v21;
  v22 = *((uint32_t *)v2 + 4);
  *((uint32_t *)v2 + 4) = v34;
  v34 = v22;
  v30 = v17;
  LOBYTE(v22) = *((uint8_t *)v2 + 20);
  *((uint8_t *)v2 + 20) = v35;
  v35 = v22;
  if ( v17 != nullptr )
    opDeleteArray(v17);
  marisa::grimoire::vector::BitVector::read((marisa::grimoire::vector::BitVector::Self *)((marisa::grimoire::trie::Tail::Self *)((char *)v2 + 24)), a2);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::read_ea12a0f10  (binary VA: 0x12a0f10)
// Original: marisa::grimoire::trie::Tail::read
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::Tail::read_ea12a0f10(marisa::grimoire::trie::Tail::Self *self, marisa::grimoire::io::Reader::Self *a2)
{
  void *v2[32];

  marisa::grimoire::trie::Tail::Construct((marisa::grimoire::trie::Tail::Self *)v2);
  marisa::grimoire::trie::Tail::read((marisa::grimoire::trie::Tail::Self *)v2, a2);
  marisa::grimoire::trie::Tail::swap(self, (marisa::grimoire::trie::Tail::Self *)v2);
  if ( v2[26] != nullptr )
    opDeleteArray(v2[26]);
  if ( v2[20] != nullptr )
    opDeleteArray(v2[20]);
  if ( v2[14] != nullptr )
    opDeleteArray(v2[14]);
  if ( v2[6] != nullptr )
    opDeleteArray(v2[6]);
  if ( v2[0] != nullptr )
    opDeleteArray(v2[0]);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::build  (binary VA: 0x12a0fd0)
// Original: marisa::grimoire::trie::Tail::build_
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::Tail::build(int a1, int a2, int a3, int a4)
{
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  uint8_t *v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  __m128i *v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  uint8_t *v19;
  unsigned int jj;
  void *v21;
  bool v22;
  int v23;
  void *v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  uint8_t *v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  __m128i *v35;
  int v36;
  unsigned int v37;
  uint32_t *v38;
  unsigned int v39;
  void *v40;
  int v41;
  int v42;
  int i;
  int v44;
  uint32_t *v45;
  unsigned int v46;
  unsigned int v47;
  uint32_t *v48;
  int v49;
  uint8_t *v50;
  unsigned int v51;
  int v52;
  uint8_t *v53;
  unsigned int v54;
  unsigned int v55;
  int v56;
  __m128i *v57;
  unsigned int v58;
  int v59;
  uint8_t *v60;
  unsigned int j;
  void *v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  uint32_t *v69;
  unsigned int v70;
  uint32_t *v71;
  int v72;
  int v73;
  unsigned int v74;
  unsigned int v75;
  int v76;
  __m128i *v77;
  unsigned int v78;
  int v79;
  uint32_t *v80;
  uint32_t *v81;
  unsigned int k;
  unsigned int v83;
  unsigned int v84;
  unsigned int v85;
  int v86;
  int v87;
  uint32_t *v88;
  int v89;
  int v90;
  unsigned int v91;
  unsigned int v92;
  uint8_t *v93;
  unsigned int n;
  __m128i *v95;
  unsigned int v96;
  uint8_t *v97;
  unsigned int ii;
  void *v99;
  int v100;
  unsigned int v101;
  unsigned int v102;
  int v103;
  __m128i *v104;
  unsigned int v105;
  int v106;
  uint32_t *v107;
  unsigned int m;
  void *v109;
  typedef unsigned int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef unsigned int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef unsigned int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef unsigned int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef char _g4_t_v125;
  typedef int _g4_t_v126;
  typedef uint32_t *_g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef unsigned int _g4_t_v130;
  typedef unsigned int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef unsigned int _g4_t_v134;
  typedef uint8_t *_g4_t_v135;
  typedef int _g4_t_v136;
  typedef unsigned int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef unsigned int _g4_t_v139;
  typedef unsigned int _g4_t_v140;
  typedef void *_g4_t_v141;
  typedef unsigned int _g4_t_v142;
  typedef uint32_t *_g4_t_v143;
  typedef int _g4_t_v144;
  typedef unsigned int _g4_t_v145;
  typedef uint32_t *_g4_t_v146;
  typedef unsigned int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef unsigned int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef unsigned int _g4_t_v151;
  typedef unsigned int _g4_t_v152;
  typedef unsigned int _g4_t_v153;
  typedef unsigned int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef uint32_t *_g4_t_v156;
  typedef unsigned int _g4_t_v157;
  typedef uint8_t *_g4_t_v158;
  typedef unsigned int _g4_t_v159;
  typedef unsigned int _g4_t_v160;
  typedef uint32_t _g4_t_v161[4];
  typedef void *_g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef unsigned int _g4_t_v166;
  typedef char _g4_t_v167;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v110)) > _g4_s0 ? (8u + sizeof(_g4_t_v110)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v111)) > _g4_s1 ? (20u + sizeof(_g4_t_v111)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v112)) > _g4_s2 ? (24u + sizeof(_g4_t_v112)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v113)) > _g4_s3 ? (28u + sizeof(_g4_t_v113)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v114)) > _g4_s4 ? (28u + sizeof(_g4_t_v114)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v115)) > _g4_s5 ? (32u + sizeof(_g4_t_v115)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v116)) > _g4_s6 ? (32u + sizeof(_g4_t_v116)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v117)) > _g4_s7 ? (32u + sizeof(_g4_t_v117)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v118)) > _g4_s8 ? (32u + sizeof(_g4_t_v118)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v119)) > _g4_s9 ? (36u + sizeof(_g4_t_v119)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v120)) > _g4_s10 ? (36u + sizeof(_g4_t_v120)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v121)) > _g4_s11 ? (36u + sizeof(_g4_t_v121)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v122)) > _g4_s12 ? (36u + sizeof(_g4_t_v122)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v123)) > _g4_s13 ? (40u + sizeof(_g4_t_v123)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v124)) > _g4_s14 ? (40u + sizeof(_g4_t_v124)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v125)) > _g4_s15 ? (40u + sizeof(_g4_t_v125)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v126)) > _g4_s16 ? (40u + sizeof(_g4_t_v126)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v127)) > _g4_s17 ? (40u + sizeof(_g4_t_v127)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v128)) > _g4_s18 ? (40u + sizeof(_g4_t_v128)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v129)) > _g4_s19 ? (40u + sizeof(_g4_t_v129)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v130)) > _g4_s20 ? (44u + sizeof(_g4_t_v130)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v131)) > _g4_s21 ? (44u + sizeof(_g4_t_v131)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v132)) > _g4_s22 ? (44u + sizeof(_g4_t_v132)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v133)) > _g4_s23 ? (44u + sizeof(_g4_t_v133)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v134)) > _g4_s24 ? (44u + sizeof(_g4_t_v134)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v135)) > _g4_s25 ? (48u + sizeof(_g4_t_v135)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v136)) > _g4_s26 ? (48u + sizeof(_g4_t_v136)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v137)) > _g4_s27 ? (48u + sizeof(_g4_t_v137)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_v138)) > _g4_s28 ? (48u + sizeof(_g4_t_v138)) : _g4_s28,
    _g4_s30 = (48u + sizeof(_g4_t_v139)) > _g4_s29 ? (48u + sizeof(_g4_t_v139)) : _g4_s29,
    _g4_s31 = (48u + sizeof(_g4_t_v140)) > _g4_s30 ? (48u + sizeof(_g4_t_v140)) : _g4_s30,
    _g4_s32 = (48u + sizeof(_g4_t_v141)) > _g4_s31 ? (48u + sizeof(_g4_t_v141)) : _g4_s31,
    _g4_s33 = (48u + sizeof(_g4_t_v142)) > _g4_s32 ? (48u + sizeof(_g4_t_v142)) : _g4_s32,
    _g4_s34 = (48u + sizeof(_g4_t_v143)) > _g4_s33 ? (48u + sizeof(_g4_t_v143)) : _g4_s33,
    _g4_s35 = (52u + sizeof(_g4_t_v144)) > _g4_s34 ? (52u + sizeof(_g4_t_v144)) : _g4_s34,
    _g4_s36 = (52u + sizeof(_g4_t_v145)) > _g4_s35 ? (52u + sizeof(_g4_t_v145)) : _g4_s35,
    _g4_s37 = (52u + sizeof(_g4_t_v146)) > _g4_s36 ? (52u + sizeof(_g4_t_v146)) : _g4_s36,
    _g4_s38 = (56u + sizeof(_g4_t_v147)) > _g4_s37 ? (56u + sizeof(_g4_t_v147)) : _g4_s37,
    _g4_s39 = (56u + sizeof(_g4_t_v148)) > _g4_s38 ? (56u + sizeof(_g4_t_v148)) : _g4_s38,
    _g4_s40 = (56u + sizeof(_g4_t_v149)) > _g4_s39 ? (56u + sizeof(_g4_t_v149)) : _g4_s39,
    _g4_s41 = (56u + sizeof(_g4_t_v150)) > _g4_s40 ? (56u + sizeof(_g4_t_v150)) : _g4_s40,
    _g4_s42 = (56u + sizeof(_g4_t_v151)) > _g4_s41 ? (56u + sizeof(_g4_t_v151)) : _g4_s41,
    _g4_s43 = (56u + sizeof(_g4_t_v152)) > _g4_s42 ? (56u + sizeof(_g4_t_v152)) : _g4_s42,
    _g4_s44 = (56u + sizeof(_g4_t_v153)) > _g4_s43 ? (56u + sizeof(_g4_t_v153)) : _g4_s43,
    _g4_s45 = (60u + sizeof(_g4_t_v154)) > _g4_s44 ? (60u + sizeof(_g4_t_v154)) : _g4_s44,
    _g4_s46 = (60u + sizeof(_g4_t_v155)) > _g4_s45 ? (60u + sizeof(_g4_t_v155)) : _g4_s45,
    _g4_s47 = (60u + sizeof(_g4_t_v156)) > _g4_s46 ? (60u + sizeof(_g4_t_v156)) : _g4_s46,
    _g4_s48 = (60u + sizeof(_g4_t_v157)) > _g4_s47 ? (60u + sizeof(_g4_t_v157)) : _g4_s47,
    _g4_s49 = (60u + sizeof(_g4_t_v158)) > _g4_s48 ? (60u + sizeof(_g4_t_v158)) : _g4_s48,
    _g4_s50 = (60u + sizeof(_g4_t_v159)) > _g4_s49 ? (60u + sizeof(_g4_t_v159)) : _g4_s49,
    _g4_s51 = (60u + sizeof(_g4_t_v160)) > _g4_s50 ? (60u + sizeof(_g4_t_v160)) : _g4_s50,
    _g4_s52 = (64u + sizeof(_g4_t_v161)) > _g4_s51 ? (64u + sizeof(_g4_t_v161)) : _g4_s51,
    _g4_s53 = (80u + sizeof(_g4_t_v162)) > _g4_s52 ? (80u + sizeof(_g4_t_v162)) : _g4_s52,
    _g4_s54 = (84u + sizeof(_g4_t_v163)) > _g4_s53 ? (84u + sizeof(_g4_t_v163)) : _g4_s53,
    _g4_s55 = (88u + sizeof(_g4_t_v164)) > _g4_s54 ? (88u + sizeof(_g4_t_v164)) : _g4_s54,
    _g4_s56 = (92u + sizeof(_g4_t_v165)) > _g4_s55 ? (92u + sizeof(_g4_t_v165)) : _g4_s55,
    _g4_s57 = (96u + sizeof(_g4_t_v166)) > _g4_s56 ? (96u + sizeof(_g4_t_v166)) : _g4_s56,
    _g4_s58 = (100u + sizeof(_g4_t_v167)) > _g4_s57 ? (100u + sizeof(_g4_t_v167)) : _g4_s57
  };
  alignas(16) uint8_t _g4_sf[_g4_s58];
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 8u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 20u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 24u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 28u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 28u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 32u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 32u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 32u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 32u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 36u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 36u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 36u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 36u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 40u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 40u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 40u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 40u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 40u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 40u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 40u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 44u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 44u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 44u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 44u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 44u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 48u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 48u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 48u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 48u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 48u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 48u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 48u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 48u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 48u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 52u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 52u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 52u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 56u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 56u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 56u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 56u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 56u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 56u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 56u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 60u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 60u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 60u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 60u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 60u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 60u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 60u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 64u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 80u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 84u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 88u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 92u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 96u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 100u);

  v5 = *(uint32_t *)(a2 + 12);
  if ( v5 != 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      *(uint32_t *)(*(uint32_t *)(a2 + 4) + v7 + 8) = v6++;
      v5 = *(uint32_t *)(a2 + 12);
      v7 += 12;
    }
    while ( v5 > v6 );
  }
  marisa::grimoire::algorithm::details::sort<marisa::grimoire::trie::Entry *>(
    *(uint32_t *)(a2 + 4),
    *(uint32_t *)(a2 + 4) + 12 * v5,
    0);
  v162 = nullptr;
  v163 = 0;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  v167 = 0;
  v8 = *(uint32_t *)(a2 + 12);
  if ( v8 == 0 )
  {
    v165 = 0;
    v161[0] = -1;
    v161[1] = 0;
    v161[2] = 0;
    goto LABEL_6;
  }
  v110 = 4 * v8;
  v155 = opNewArray(4 * v8, (const std::nothrow_t *)&std::nothrow);
  v29 = 4 * v8;
  if ( v155 != 0 )
  {
    v148 = v110 - 1;
    if ( v110 != 0 )
    {
      v30 = -v155 & 0xF;
      if ( v110 <= v30 )
        v30 = 4 * v8;
      v22 = v30 == 0;
      v145 = v30;
      v31 = (uint8_t *)v155;
      if ( v22 )
        goto LABEL_219;
      v32 = 0;
      do
      {
        *v31 = 0;
        v33 = v110 - 2 - v32++;
        ++v31;
        v148 = v33;
      }
      while ( v145 > v32 );
      v29 = 4 * v8;
      if ( v110 != v145 )
      {
LABEL_219:
        v130 = v29 - v145;
        v137 = (v29 - v145) >> 4;
        v124 = 16 * v137;
        if ( 16 * v137 == 0 )
          goto LABEL_44;
        v34 = 0;
        v35 = (__m128i *)(v145 + v155);
        do
        {
          ++v34;
          *v35++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v34 < v137 );
        v31 += v124;
        v148 -= v124;
        if ( v130 != v124 )
        {
LABEL_44:
          v36 = v148;
          do
          {
            --v36;
            *v31++ = 0;
          }
          while ( v36 != -1 );
        }
      }
    }
  }
  v37 = v165;
  if ( v165 != 0 )
  {
    v38 = (uint32_t *)v155;
    v39 = 0;
    do
    {
      if ( v38 != nullptr )
      {
        *v38 = *(uint32_t *)(v163 + 4 * v39);
        v37 = v165;
      }
      ++v39;
      ++v38;
    }
    while ( v39 < v37 );
  }
  v40 = v162;
  v22 = v162 == nullptr;
  v162 = (void *)v155;
  v163 = v155;
  v164 = v155;
  v166 = v8;
  if ( !v22 )
  {
    opDeleteArray(v40);
    v37 = v165;
  }
  if ( v8 > v37 )
  {
    v41 = 4 * v37;
    do
    {
      if ( v163 + v41 != 0 )
        *(uint32_t *)(v163 + v41) = 0;
      ++v37;
      v41 += 4;
    }
    while ( v8 > v37 );
  }
  v165 = v8;
  v161[0] = -1;
  v161[1] = 0;
  v161[2] = 0;
  v112 = *(uint32_t *)(a2 + 12);
  if ( v112 != 0 )
  {
    v146 = (uint32_t *)(4 * (3 * v112 - 3) + *(uint32_t *)(a2 + 4));
    v42 = v146[1];
    if ( v42 == 0 )
LABEL_211:
      abort();
    v156 = v161;
    v111 = 12 * v112 - 24;
    for ( i = 0; ; i = v156[1] )
    {
      if ( i != 0 && *(uint8_t *)*v156 == *(uint8_t *)*v146 )
      {
        v150 = 0;
        v126 = 1 - i;
        v113 = i;
        do
        {
          v132 = 1 - v150;
          if ( v150 == 1 - v42 )
            break;
          if ( v150 == v126 )
            break;
          v72 = v150--;
        }
        while ( *(uint8_t *)(*v156 + v72 - 1) == *(uint8_t *)(*v146 + v150) );
        if ( v132 == v42 )
        {
          *(uint32_t *)(v163 + 4 * v146[2]) = *(uint32_t *)(v163 + 4 * v156[2]) + v113 - v132;
          goto LABEL_61;
        }
      }
      *(uint32_t *)(v163 + 4 * v146[2]) = *(uint32_t *)(a1 + 12);
      v46 = v146[1];
      if ( v46 != 0 )
      {
        v47 = *(uint32_t *)(a1 + 12);
        v149 = 1;
        v48 = v146;
        do
        {
          v157 = v47 + 1;
          v125 = *(uint8_t *)(*v48 - v46 + v149);
          v51 = *(uint32_t *)(a1 + 16);
          if ( v47 + 1 <= v51 )
          {
            v49 = *(uint32_t *)(a1 + 4);
          }
          else
          {
            if ( v51 > (v47 + 1) >> 1 )
            {
              v52 = 2 * v51;
              if ( v51 > 0x7FFFFFFF )
                v52 = -1;
              v157 = v52;
            }
            v49 = opNewArray(v157, (const std::nothrow_t *)&std::nothrow);
            if ( v49 != 0 )
            {
              v138 = v157 - 1;
              if ( v157 != 0 )
              {
                v53 = (uint8_t *)v49;
                v54 = -v49 & 0xF;
                if ( v157 <= v54 )
                  v54 = v157;
                if ( v54 == 0 )
                  goto LABEL_220;
                v119 = a1;
                v55 = 0;
                do
                {
                  *v53 = 0;
                  v56 = v157 - 2 - v55++;
                  ++v53;
                }
                while ( v54 > v55 );
                v138 = v56;
                a1 = v119;
                if ( v157 != v54 )
                {
LABEL_220:
                  v115 = v157 - v54;
                  v131 = (v157 - v54) >> 4;
                  v120 = 16 * v131;
                  if ( 16 * v131 == 0 )
                    goto LABEL_88;
                  v57 = (__m128i *)(v49 + v54);
                  v58 = 0;
                  do
                  {
                    ++v58;
                    *v57++ = g4_m128_from<__m128i>(0LL);
                  }
                  while ( v58 < v131 );
                  v53 += v120;
                  v138 -= v120;
                  if ( v115 != v120 )
                  {
LABEL_88:
                    v59 = v138;
                    do
                    {
                      --v59;
                      *v53++ = 0;
                    }
                    while ( v59 != -1 );
                  }
                }
              }
            }
            v47 = *(uint32_t *)(a1 + 12);
            if ( v47 != 0 )
            {
              v60 = (uint8_t *)v49;
              for ( j = 0; j < v47; ++j )
              {
                if ( v60 != nullptr )
                {
                  *v60 = *(uint8_t *)(*(uint32_t *)(a1 + 4) + j);
                  v47 = *(uint32_t *)(a1 + 12);
                }
                ++v60;
              }
            }
            v62 = *(void **)a1;
            v22 = *(uint32_t *)a1 == 0;
            *(uint32_t *)a1 = v49;
            *(uint32_t *)(a1 + 4) = v49;
            *(uint32_t *)(a1 + 8) = v49;
            *(uint32_t *)(a1 + 16) = v157;
            if ( !v22 )
            {
              opDeleteArray(v62);
              v49 = *(uint32_t *)(a1 + 4);
              v47 = *(uint32_t *)(a1 + 12);
            }
          }
          v50 = (uint8_t *)(v47 + v49);
          if ( v50 != nullptr )
          {
            *v50 = v125;
            v47 = *(uint32_t *)(a1 + 12);
          }
          v48 = v146;
          *(uint32_t *)(a1 + 12) = ++v47;
          ++v149;
          v46 = v146[1];
        }
        while ( v46 >= v149 );
      }
      if ( a4 == 4096 )
        break;
      v63 = *(uint32_t *)(a1 + 48);
      if ( v46 > 1 )
      {
        if ( v63 == -1 )
LABEL_210:
          abort();
        v64 = *(uint32_t *)(a1 + 36);
        v65 = *(uint32_t *)(a1 + 48);
        v66 = 1;
        while ( 1 )
        {
          if ( v63 == 32 * v64 )
          {
            v151 = v64 + 2;
            v67 = *(uint32_t *)(a1 + 40);
            if ( v64 + 2 > v67 )
            {
              if ( v67 > v151 >> 1 )
              {
                v139 = 0xFFFFFFFC;
                v114 = 0x3FFFFFFF;
                if ( v67 <= 0x1FFFFFFF )
                {
                  v114 = 2 * v67;
                  v139 = 8 * v67;
                }
              }
              else
              {
                v114 = v64 + 2;
                v139 = 4 * v151;
              }
              v73 = opNewArray(v139, (const std::nothrow_t *)&std::nothrow);
              v127 = (uint32_t *)v73;
              if ( v73 != 0 )
              {
                v133 = v139 - 1;
                if ( v139 != 0 )
                {
                  v74 = -v73 & 0xF;
                  if ( v139 <= v74 )
                    v74 = v139;
                  if ( v74 == 0 )
                    goto LABEL_221;
                  v121 = v66;
                  v75 = 0;
                  do
                  {
                    *(uint8_t *)v73 = 0;
                    v76 = v139 - 2 - v75++;
                    ++v73;
                  }
                  while ( v74 > v75 );
                  v133 = v76;
                  v66 = v121;
                  if ( v139 != v74 )
                  {
LABEL_221:
                    v140 = v139 - v74;
                    v116 = 16 * (v140 >> 4);
                    if ( v116 == 0 )
                      goto LABEL_137;
                    v77 = (__m128i *)((char *)v127 + v74);
                    v78 = 0;
                    do
                    {
                      ++v78;
                      *v77++ = g4_m128_from<__m128i>(0LL);
                    }
                    while ( v140 >> 4 > v78 );
                    v73 += v116;
                    v133 -= v116;
                    if ( v140 != v116 )
                    {
LABEL_137:
                      v79 = v133;
                      do
                      {
                        --v79;
                        *(uint8_t *)v73++ = 0;
                      }
                      while ( v79 != -1 );
                    }
                  }
                }
              }
              v80 = (uint32_t *)a1;
              v64 = *(uint32_t *)(a1 + 36);
              if ( v64 != 0 )
              {
                v81 = v127;
                for ( k = 0; k < v64; ++k )
                {
                  if ( v81 != nullptr )
                  {
                    *v81 = *(uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * k);
                    v64 = *(uint32_t *)(a1 + 36);
                  }
                  ++v81;
                }
                v80 = (uint32_t *)a1;
              }
              v141 = *(void **)(a1 + 24);
              v80[6] = (uint32_t)(uintptr_t)(v127);
              v80[7] = (uint32_t)(uintptr_t)(v127);
              v80[8] = (uint32_t)(uintptr_t)(v127);
              v80[10] = v114;
              if ( v141 != nullptr )
              {
                opDeleteArray(v141);
                v64 = *(uint32_t *)(a1 + 36);
              }
            }
            if ( v151 > v64 )
            {
              v68 = 4 * v64;
              do
              {
                v69 = (uint32_t *)(*(uint32_t *)(a1 + 28) + v68);
                if ( v69 != nullptr )
                  *v69 = 0;
                ++v64;
                v68 += 4;
              }
              while ( v151 > v64 );
            }
            v64 = v151;
            *(uint32_t *)(a1 + 36) = v151;
            v65 = *(uint32_t *)(a1 + 48);
          }
          v63 = v65 + 1;
          ++v66;
          *(uint32_t *)(a1 + 48) = v65 + 1;
          if ( v146[1] <= v66 )
            break;
          if ( v65 == -2 )
            goto LABEL_210;
          ++v65;
        }
      }
      if ( v63 == -1 )
        abort();
      v70 = *(uint32_t *)(a1 + 36);
      if ( 32 * v70 == v63 )
      {
        v85 = *(uint32_t *)(a1 + 40);
        v153 = v70 + 2;
        v86 = a1 + 24;
        if ( v70 + 2 > v85 )
        {
          if ( v85 > v153 >> 1 )
          {
            v159 = 0xFFFFFFFC;
            v122 = 0x3FFFFFFF;
            if ( v85 <= 0x1FFFFFFF )
            {
              v122 = 2 * v85;
              v159 = 8 * v85;
            }
          }
          else
          {
            v122 = v70 + 2;
            v159 = 4 * v153;
          }
          v100 = opNewArray(v159, (const std::nothrow_t *)&std::nothrow);
          v143 = (uint32_t *)v100;
          if ( v100 != 0 )
          {
            v129 = v159 - 1;
            if ( v159 != 0 )
            {
              v101 = -v100 & 0xF;
              if ( v159 <= v101 )
                v101 = v159;
              if ( v101 == 0 )
                goto LABEL_222;
              v117 = a1;
              v102 = 0;
              do
              {
                *(uint8_t *)v100 = 0;
                v103 = v159 - 2 - v102++;
                ++v100;
                v129 = v103;
              }
              while ( v101 > v102 );
              a1 = v117;
              if ( v159 != v101 )
              {
LABEL_222:
                v160 = v159 - v101;
                v118 = 16 * (v160 >> 4);
                if ( v118 == 0 )
                  goto LABEL_199;
                v104 = (__m128i *)((char *)v143 + v101);
                v105 = 0;
                do
                {
                  ++v105;
                  *v104++ = g4_m128_from<__m128i>(0LL);
                }
                while ( v105 < v160 >> 4 );
                v100 += v118;
                v129 -= v118;
                if ( v160 != v118 )
                {
LABEL_199:
                  v106 = v129;
                  do
                  {
                    --v106;
                    *(uint8_t *)v100++ = 0;
                  }
                  while ( v106 != -1 );
                }
              }
            }
          }
          v70 = *(uint32_t *)(a1 + 36);
          if ( v70 != 0 )
          {
            v107 = v143;
            for ( m = 0; m < v70; ++m )
            {
              if ( v107 != nullptr )
              {
                *v107 = *(uint32_t *)(*(uint32_t *)(v86 + 4) + 4 * m);
                v70 = *(uint32_t *)(a1 + 36);
              }
              ++v107;
            }
          }
          v109 = *(void **)(a1 + 24);
          *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v143);
          *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(v143);
          *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v143);
          *(uint32_t *)(a1 + 40) = v122;
          if ( v109 != nullptr )
          {
            opDeleteArray(v109);
            v70 = *(uint32_t *)(a1 + 36);
          }
        }
        if ( v153 > v70 )
        {
          v87 = 4 * v70;
          do
          {
            v88 = (uint32_t *)(*(uint32_t *)(v86 + 4) + v87);
            if ( v88 != nullptr )
              *v88 = 0;
            ++v70;
            v87 += 4;
          }
          while ( v153 > v70 );
        }
        v63 = *(uint32_t *)(a1 + 48);
        *(uint32_t *)(a1 + 36) = v153;
      }
      v71 = (uint32_t *)(*(uint32_t *)(a1 + 28) + 4 * (v63 >> 5));
      *v71 |= 1 << v63;
      ++*(uint32_t *)(a1 + 52);
      ++*(uint32_t *)(a1 + 48);
LABEL_61:
      if ( --v112 == 0 )
        goto LABEL_6;
      v44 = v111;
      v111 -= 12;
      v45 = (uint32_t *)(*(uint32_t *)(a2 + 4) + v44);
      v42 = v45[1];
      if ( v42 == 0 )
        goto LABEL_211;
      v156 = v146;
      v146 = v45;
    }
    v83 = *(uint32_t *)(a1 + 12);
    v84 = *(uint32_t *)(a1 + 16);
    v152 = v83 + 1;
    if ( v83 + 1 <= v84 )
    {
      v158 = *(uint8_t **)(a1 + 4);
LABEL_151:
      if ( &v158[v83] != nullptr )
      {
        v158[v83] = 0;
        v83 = *(uint32_t *)(a1 + 12);
      }
      *(uint32_t *)(a1 + 12) = v83 + 1;
      goto LABEL_61;
    }
    if ( v84 > (v83 + 1) >> 1 )
    {
      v89 = 2 * v84;
      if ( v84 > 0x7FFFFFFF )
        v89 = -1;
      v152 = v89;
    }
    v90 = opNewArray(v152, (const std::nothrow_t *)&std::nothrow);
    v158 = (uint8_t *)v90;
    if ( v90 != 0 )
    {
      v91 = v152 - 1;
      if ( v152 != 0 )
      {
        v92 = -v90 & 0xF;
        if ( v152 <= v92 )
          v92 = v152;
        if ( v92 == 0 )
        {
          v93 = (uint8_t *)v90;
          goto LABEL_173;
        }
        v93 = (uint8_t *)v90;
        for ( n = 0; n < v92; ++n )
        {
          *v93 = 0;
          v91 = v152 - 2 - n;
          ++v93;
        }
        if ( v152 != v92 )
        {
LABEL_173:
          v134 = v152 - v92;
          v142 = (v152 - v92) >> 4;
          v128 = 16 * v142;
          if ( 16 * v142 == 0 )
            goto LABEL_223;
          v95 = (__m128i *)&v158[v92];
          v96 = 0;
          do
          {
            ++v96;
            *v95++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v142 > v96 );
          v93 += v128;
          v91 -= v128;
          if ( v134 != v128 )
          {
LABEL_223:
            do
            {
              --v91;
              *v93++ = 0;
            }
            while ( v91 != -1 );
          }
        }
      }
    }
    v83 = *(uint32_t *)(a1 + 12);
    if ( v83 != 0 )
    {
      v97 = v158;
      for ( ii = 0; ii < v83; ++ii )
      {
        if ( v97 != nullptr )
        {
          *v97 = *(uint8_t *)(*(uint32_t *)(a1 + 4) + ii);
          v83 = *(uint32_t *)(a1 + 12);
        }
        ++v97;
      }
    }
    v99 = *(void **)a1;
    v22 = *(uint32_t *)a1 == 0;
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v158);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v158);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v158);
    *(uint32_t *)(a1 + 16) = v152;
    if ( !v22 )
    {
      opDeleteArray(v99);
      v83 = *(uint32_t *)(a1 + 12);
      v158 = *(uint8_t **)(a1 + 4);
    }
    goto LABEL_151;
  }
LABEL_6:
  if ( *(uint8_t *)(a1 + 20) != 0 )
    abort();
  v9 = *(uint32_t *)(a1 + 12);
  v154 = v9;
  if ( v9 != *(uint32_t *)(a1 + 16) )
  {
    v10 = opNewArray(v9, (const std::nothrow_t *)&std::nothrow);
    if ( v10 != 0 )
    {
      v144 = v9 - 1;
      if ( v9 != 0 )
      {
        v11 = (uint8_t *)v10;
        v12 = -v10 & 0xF;
        if ( v154 <= v12 )
          v12 = v154;
        if ( v12 == 0 )
          goto LABEL_224;
        v135 = (uint8_t *)v10;
        v13 = 0;
        do
        {
          *v11 = 0;
          v14 = v154 - 2 - v13++;
          ++v11;
          v144 = v14;
        }
        while ( v12 > v13 );
        v10 = (int)(uintptr_t)(v135);
        if ( v154 != v12 )
        {
LABEL_224:
          v123 = v154 - v12;
          v147 = (v154 - v12) >> 4;
          v136 = 16 * v147;
          if ( 16 * v147 == 0 )
            goto LABEL_20;
          v15 = (__m128i *)(v10 + v12);
          v16 = 0;
          do
          {
            ++v16;
            *v15++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v16 < v147 );
          v11 += v136;
          v144 -= v136;
          if ( v123 != v136 )
          {
LABEL_20:
            v17 = v144;
            do
            {
              --v17;
              *v11++ = 0;
            }
            while ( v17 != -1 );
          }
        }
      }
    }
    v18 = *(uint32_t *)(a1 + 12);
    if ( v18 != 0 )
    {
      v19 = (uint8_t *)v10;
      for ( jj = 0; jj < v18; ++jj )
      {
        if ( v19 != nullptr )
        {
          *v19 = *(uint8_t *)(*(uint32_t *)(a1 + 4) + jj);
          v18 = *(uint32_t *)(a1 + 12);
        }
        ++v19;
      }
    }
    v21 = *(void **)a1;
    v22 = *(uint32_t *)a1 == 0;
    *(uint32_t *)a1 = v10;
    *(uint32_t *)(a1 + 4) = v10;
    *(uint32_t *)(a1 + 8) = v10;
    *(uint32_t *)(a1 + 16) = v154;
    if ( !v22 )
      opDeleteArray(v21);
  }
  v23 = v163;
  v24 = *(void **)a3;
  *(uint32_t *)a3 = (uint32_t)(uintptr_t)(v162);
  v25 = *(uint32_t *)(a3 + 4);
  *(uint32_t *)(a3 + 4) = v23;
  v163 = v25;
  v26 = *(uint32_t *)(a3 + 8);
  *(uint32_t *)(a3 + 8) = v164;
  v164 = v26;
  v27 = *(uint32_t *)(a3 + 12);
  *(uint32_t *)(a3 + 12) = v165;
  v165 = v27;
  v28 = *(uint32_t *)(a3 + 16);
  *(uint32_t *)(a3 + 16) = v166;
  v166 = v28;
  v162 = v24;
  LOBYTE(v28) = *(uint8_t *)(a3 + 20);
  *(uint8_t *)(a3 + 20) = v167;
  v167 = v28;
  if ( v24 != nullptr )
    opDeleteArray(v24);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::trie::Tail::build  (binary VA: 0x12a1e70)
// Original: marisa::grimoire::trie::Tail::build
// ----------------------------------------------------------------------------
void marisa::grimoire::trie::Tail::build(marisa::grimoire::trie::Tail::Self *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  uint8_t *v7;
  int v8;
  typedef int _g4_t_v9;
  typedef void *_g4_t_v10[35];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  if ( a3 == 0 )
    abort();
  if ( a4 == 4096 )
  {
    if ( *(uint32_t *)(a2 + 12) != 0 )
    {
      v4 = 0;
      v5 = 0;
      v9 = *(uint32_t *)(a2 + 4);
      do
      {
        v6 = *(uint32_t *)(v9 + v4 + 4);
        if ( v6 != 0 )
        {
          v7 = (uint8_t *)(*(uint32_t *)(v9 + v4) + 1 - v6);
          if ( *v7 == 0 )
          {
LABEL_5:
            a4 = 0x2000;
            break;
          }
          v8 = 0;
          while ( ++v8 != v6 )
          {
            if ( v7[v8] == 0 )
              goto LABEL_5;
          }
        }
        ++v5;
        v4 += 12;
      }
      while ( v5 != *(uint32_t *)(a2 + 12) );
    }
LABEL_6:
    marisa::grimoire::trie::Tail::Construct((marisa::grimoire::trie::Tail::Self *)v10);
    marisa::grimoire::trie::Tail::build((int)(uintptr_t)(v10), a2, a3, a4);
    marisa::grimoire::trie::Tail::swap(a1, (marisa::grimoire::trie::Tail::Self *)v10);
    if ( v10[26] != nullptr )
      opDeleteArray(v10[26]);
    if ( v10[20] != nullptr )
      opDeleteArray(v10[20]);
    if ( v10[14] != nullptr )
      opDeleteArray(v10[14]);
    if ( v10[6] != nullptr )
      opDeleteArray(v10[6]);
    if ( v10[0] != nullptr )
      opDeleteArray(v10[0]);
  }
  else if ( a4 == 0x2000 )
  {
    goto LABEL_6;
  }
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::Vector_char_id_f65496::Destroy  (binary VA: 0x12a1fe0)
// Original: marisa::grimoire::vector::Vector<char>::~Vector
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::Vector_char_id_f65496::Destroy(void **self)
{
  if ( *self != nullptr )
    opDeleteArray(*self);
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::BitVector::rank1  (binary VA: 0x12a27b0)
// Original: marisa::grimoire::vector::BitVector::rank1
// ----------------------------------------------------------------------------
unsigned int marisa::grimoire::vector::BitVector::rank1(marisa::grimoire::vector::BitVector::Self *self, unsigned int a2)
{
  (void)self; (void)a2;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::BitVector::select0  (binary VA: 0x12a2950)
// Original: marisa::grimoire::vector::BitVector::select0
// ----------------------------------------------------------------------------
int marisa::grimoire::vector::BitVector::select0(marisa::grimoire::vector::BitVector::Self *self, unsigned int a2)
{
  unsigned int v2;
  int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  uint32_t *v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;

  v2 = a2 >> 9;
  if ( (a2 & 0x1FF) == 0 )
    return *(uint32_t *)(*((uint32_t *)self + 16) + 4 * v2);
  v3 = *((uint32_t *)self + 16);
  v4 = *(uint32_t *)(v3 + 4 * v2) >> 9;
  v5 = (unsigned int)(*(uint32_t *)(v3 + 4 * v2 + 4) + 511) >> 9;
  if ( v5 <= v4 + 10 )
  {
    v15 = v4 + 1;
    v7 = *((uint32_t *)self + 10);
    v16 = (v4 + 1) << 9;
    v17 = 12 * (v4 + 1);
    while ( 1 )
    {
      v18 = v16;
      v16 += 512;
      v19 = v18 - *(uint32_t *)(v7 + v17);
      v17 += 12;
      if ( a2 < v19 )
        break;
      v4 = v15++;
    }
  }
  else
  {
    while ( v5 > v4 + 1 )
    {
      while ( 1 )
      {
        v6 = (v5 + v4) >> 1;
        if ( a2 >= (v6 << 9) - *(uint32_t *)(*((uint32_t *)self + 10) + 12 * v6) )
          break;
        v5 = (v5 + v4) >> 1;
        if ( v6 <= v4 + 1 )
          goto LABEL_8;
      }
      v4 = (v5 + v4) >> 1;
    }
LABEL_8:
    v7 = *((uint32_t *)self + 10);
  }
  v8 = (uint32_t *)(v7 + 12 * v4);
  v9 = v8[1];
  v10 = a2 - (v4 << 9) + *v8;
  v11 = v9 >> 23;
  v12 = 16 * v4;
  if ( v10 >= 256 - (v9 >> 23) )
  {
    v21 = v8[2];
    v22 = (v21 >> 9) & 0x1FF;
    if ( v10 < 384 - v22 )
    {
      v29 = v21 & 0x1FF;
      if ( v10 >= 320 - v29 )
      {
        v12 += 10;
        v10 = v10 + v29 - 320;
      }
      else
      {
        v12 += 8;
        v10 = v10 + v11 - 256;
      }
    }
    else
    {
      v23 = (v21 >> 18) & 0x1FF;
      if ( v10 >= 448 - v23 )
      {
        v12 += 14;
        v10 = v10 + v23 - 448;
      }
      else
      {
        v12 += 12;
        v10 = v10 + v22 - 384;
      }
    }
  }
  else
  {
    v13 = (uint8_t)(v9 >> 7);
    if ( v10 >= 128 - v13 )
    {
      v30 = (uint8_t)(v9 >> 15);
      if ( v10 >= 192 - v30 )
      {
        v12 += 6;
        v10 = v10 + v30 - 192;
      }
      else
      {
        v12 += 4;
        v10 = v10 + v13 - 128;
      }
    }
    else
    {
      v14 = v9 & 0x7F;
      if ( v10 >= 64 - v14 )
      {
        v12 += 2;
        v10 = v10 + v14 - 64;
      }
    }
  }
  v24 = *((uint32_t *)self + 2);
  v25 = ~*(uint32_t *)(v24 + 4 * v12);
  v26 = 16843009
      * ((((((v25 & 0x55555555) + ((v25 & 0xAAAAAAAA) >> 1)) & 0x33333333)
         + ((((v25 & 0x55555555) + ((v25 & 0xAAAAAAAA) >> 1)) & 0xCCCCCCCC) >> 2))
        & 0xF0F0F0F)
       + ((((((v25 & 0x55555555) + ((v25 & 0xAAAAAAAA) >> 1)) & 0x33333333)
          + ((((v25 & 0x55555555) + ((v25 & 0xAAAAAAAA) >> 1)) & 0xCCCCCCCC) >> 2))
         & 0x70F0F0F0) >> 4));
  if ( v10 >= HIBYTE(v26) )
  {
    ++v12;
    v10 -= HIBYTE(v26);
    v25 = ~*(uint32_t *)(v24 + 4 * v12);
    v32 = (((v25 & 0x55555555) + ((v25 & 0xAAAAAAAA) >> 1)) & 0x33333333)
        + ((((v25 & 0x55555555) + ((v25 & 0xAAAAAAAA) >> 1)) & 0xCCCCCCCC) >> 2);
    v26 = 16843009 * ((v32 & 0xF0F0F0F) + ((v32 & 0x70F0F0F0) >> 4));
  }
  v27 = BYTE1(v26);
  v28 = 32 * v12;
  if ( v10 >= BYTE1(v26) )
  {
    v31 = BYTE2(v26);
    if ( v10 >= v31 )
    {
      v28 += 24;
      v10 -= v31;
      v25 >>= 24;
    }
    else
    {
      v28 += 16;
      v10 -= v27;
      v25 >>= 16;
    }
  }
  else if ( v10 >= (uint8_t)v26 )
  {
    v28 += 8;
    v10 -= (uint8_t)v26;
    v25 >>= 8;
  }
  return v28 + (uint8_t)byte_1CEC320[256 * v10 + (uint8_t)v25];
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::BitVector::select1  (binary VA: 0x12a2c70)
// Original: marisa::grimoire::vector::BitVector::select1
// ----------------------------------------------------------------------------
int marisa::grimoire::vector::BitVector::select1(marisa::grimoire::vector::BitVector::Self *self, unsigned int a2)
{
  unsigned int v2;
  int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  uint32_t *v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;

  v2 = a2 >> 9;
  if ( (a2 & 0x1FF) == 0 )
    return *(uint32_t *)(*((uint32_t *)self + 22) + 4 * v2);
  v3 = *((uint32_t *)self + 22);
  v4 = *(uint32_t *)(v3 + 4 * v2) >> 9;
  v5 = (unsigned int)(*(uint32_t *)(v3 + 4 * v2 + 4) + 511) >> 9;
  if ( v5 <= v4 + 10 )
  {
    v15 = v4 + 1;
    v7 = *((uint32_t *)self + 10);
    v16 = 12 * (v4 + 1);
    while ( 1 )
    {
      v17 = *(uint32_t *)(v7 + v16);
      v16 += 12;
      if ( a2 < v17 )
        break;
      v4 = v15++;
    }
  }
  else
  {
    while ( v5 > v4 + 1 )
    {
      while ( 1 )
      {
        v6 = (v5 + v4) >> 1;
        if ( a2 >= *(uint32_t *)(*((uint32_t *)self + 10) + 12 * v6) )
          break;
        v5 = (v5 + v4) >> 1;
        if ( v6 <= v4 + 1 )
          goto LABEL_8;
      }
      v4 = (v5 + v4) >> 1;
    }
LABEL_8:
    v7 = *((uint32_t *)self + 10);
  }
  v8 = (uint32_t *)(v7 + 12 * v4);
  v9 = v8[1];
  v10 = a2 - *v8;
  v11 = v9 >> 23;
  v12 = 16 * v4;
  if ( v10 >= v9 >> 23 )
  {
    v19 = v8[2];
    v20 = (v19 >> 9) & 0x1FF;
    if ( v10 < v20 )
    {
      v27 = v19 & 0x1FF;
      if ( v10 >= v27 )
      {
        v12 += 10;
        v10 -= v27;
      }
      else
      {
        v12 += 8;
        v10 -= v11;
      }
    }
    else
    {
      v21 = (v19 >> 18) & 0x1FF;
      if ( v10 >= v21 )
      {
        v12 += 14;
        v10 -= v21;
      }
      else
      {
        v12 += 12;
        v10 -= v20;
      }
    }
  }
  else
  {
    v13 = (uint8_t)(v9 >> 7);
    if ( v10 >= v13 )
    {
      v28 = (uint8_t)(v9 >> 15);
      if ( v10 >= v28 )
      {
        v12 += 6;
        v10 -= v28;
      }
      else
      {
        v12 += 4;
        v10 -= v13;
      }
    }
    else
    {
      v14 = v9 & 0x7F;
      if ( v10 >= v14 )
      {
        v12 += 2;
        v10 -= v14;
      }
    }
  }
  v22 = *((uint32_t *)self + 2);
  v23 = *(uint32_t *)(v22 + 4 * v12);
  v24 = 16843009
      * ((((((v23 & 0x55555555) + ((v23 & 0xAAAAAAAA) >> 1)) & 0x33333333)
         + ((((v23 & 0x55555555) + ((v23 & 0xAAAAAAAA) >> 1)) & 0xCCCCCCCC) >> 2))
        & 0xF0F0F0F)
       + ((((((v23 & 0x55555555) + ((v23 & 0xAAAAAAAA) >> 1)) & 0x33333333)
          + ((((v23 & 0x55555555) + ((v23 & 0xAAAAAAAA) >> 1)) & 0xCCCCCCCC) >> 2))
         & 0x70F0F0F0) >> 4));
  if ( v10 >= HIBYTE(v24) )
  {
    ++v12;
    v10 -= HIBYTE(v24);
    v23 = *(uint32_t *)(v22 + 4 * v12);
    v30 = (((v23 & 0x55555555) + ((v23 & 0xAAAAAAAA) >> 1)) & 0x33333333)
        + ((((v23 & 0x55555555) + ((v23 & 0xAAAAAAAA) >> 1)) & 0xCCCCCCCC) >> 2);
    v24 = 16843009 * ((v30 & 0xF0F0F0F) + ((v30 & 0x70F0F0F0) >> 4));
  }
  v25 = BYTE1(v24);
  v26 = 32 * v12;
  if ( v10 >= BYTE1(v24) )
  {
    v29 = BYTE2(v24);
    if ( v10 >= v29 )
    {
      v26 += 24;
      v10 -= v29;
      v23 >>= 24;
    }
    else
    {
      v26 += 16;
      v10 -= v25;
      v23 >>= 16;
    }
  }
  else if ( v10 >= (uint8_t)v24 )
  {
    v26 += 8;
    v10 -= (uint8_t)v24;
    v23 >>= 8;
  }
  return v26 + (uint8_t)byte_1CEC320[256 * v10 + (uint8_t)v23];
}

// ----------------------------------------------------------------------------
// Function: marisa::grimoire::vector::BitVector::build_index  (binary VA: 0x12a2f10)
// Original: marisa::grimoire::vector::BitVector::build_index
// ----------------------------------------------------------------------------
void marisa::grimoire::vector::BitVector::build_index(marisa::grimoire::vector::BitVector::Self *self, const marisa::grimoire::vector::BitVector::Self *a2, bool a3, bool a4)
{
  const marisa::grimoire::vector::BitVector::Self *v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  __m128i *v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  uint32_t *v14;
  int v15;
  unsigned int i;
  int v17;
  void *v18;
  int v19;
  uint32_t *v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int *v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int *v30;
  uint8_t *v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  __m128i *v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  uint32_t *v39;
  uint8_t *v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  __m128i *v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  uint32_t *v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  char *v52;
  uint32_t *v53;
  unsigned int v54;
  bool v55;
  uint8_t *v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  __m128i *v60;
  unsigned int v61;
  int v62;
  unsigned int v63;
  unsigned int v64;
  uint32_t *n;
  void *v66;
  unsigned int v67;
  unsigned int v68;
  uint32_t *v69;
  unsigned int v70;
  uint8_t *v71;
  unsigned int v72;
  unsigned int v73;
  int v74;
  __m128i *v75;
  unsigned int v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  uint32_t *k;
  void *v81;
  int v82;
  uint8_t *v83;
  unsigned int v84;
  unsigned int v85;
  int v86;
  __m128i *v87;
  unsigned int v88;
  int v89;
  unsigned int v90;
  uint32_t *m;
  void *v92;
  int v93;
  unsigned int v94;
  unsigned int v95;
  int v96;
  __m128i *v97;
  unsigned int v98;
  int v99;
  unsigned int v100;
  uint32_t *j;
  void *v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  uint8_t *v107;
  uint8_t *v108;
  const marisa::grimoire::vector::BitVector::Self *v109;
  const marisa::grimoire::vector::BitVector::Self *v110;
  int v111;
  int v112;
  int v113;
  unsigned int v114;
  unsigned int v115;
  const marisa::grimoire::vector::BitVector::Self *v116;
  int v117;
  unsigned int v118;
  unsigned int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  unsigned int v125;
  int v126;
  unsigned int v127;
  const marisa::grimoire::vector::BitVector::Self *v128;
  int v129;
  int v130;
  unsigned int v131;
  int v132;
  unsigned int v133;
  int v134;
  const marisa::grimoire::vector::BitVector::Self *v135;
  unsigned int v136;
  unsigned int v137;
  void *v138;
  unsigned int v139;
  unsigned int v140;
  void *v141;
  int v142;
  uint32_t *v143;
  int v144;
  int v145;
  int v146;
  char *v147;
  int v148;
  int v149;
  int v150;
  unsigned int v151;
  int16_t v152;
  int v153;
  int v154;
  unsigned int v155;
  unsigned int v156;
  unsigned int v157;
  unsigned int v158;
  unsigned int v159;
  unsigned int v160;
  int v161;
  uint32_t *v162;
  unsigned int v163;
  unsigned int v164;
  uint32_t *v165;
  unsigned int v166;
  unsigned int v167;

  v4 = a2;
  v151 = (*((uint32_t *)a2 + 6) >> 9) + ((*((uint32_t *)a2 + 6) & 0x1FF) != 0) + 1;
  v5 = *((uint32_t *)self + 12);
  if ( v151 <= v5 )
    goto LABEL_27;
  if ( v5 > v151 >> 1 )
  {
    v159 = 0xFFFFFFFC;
    v113 = 357913941;
    if ( v5 <= 0xAAAAAAA )
    {
      v113 = 2 * v5;
      v159 = 24 * v5;
      v6 = opNewArray(24 * v5, (const std::nothrow_t *)&std::nothrow);
      goto LABEL_5;
    }
  }
  else
  {
    v113 = (*((uint32_t *)a2 + 6) >> 9) + ((*((uint32_t *)a2 + 6) & 0x1FF) != 0) + 1;
    v159 = 12 * v151;
  }
  v6 = opNewArray(v159, (const std::nothrow_t *)&std::nothrow);
LABEL_5:
  v143 = (uint32_t *)v6;
  if ( v6 != 0 )
  {
    v134 = v159 - 1;
    if ( v159 != 0 )
    {
      v7 = -v6 & 0xF;
      if ( v159 <= v7 )
        v7 = v159;
      if ( v7 == 0 )
        goto LABEL_239;
      v8 = 0;
      do
      {
        *(uint8_t *)v6 = 0;
        v9 = v159 - 2 - v8++;
        ++v6;
      }
      while ( v7 > v8 );
      v134 = v9;
      v4 = a2;
      if ( v159 != v7 )
      {
LABEL_239:
        v160 = v159 - v7;
        v123 = 16 * (v160 >> 4);
        if ( v123 == 0 )
          goto LABEL_17;
        v10 = (__m128i *)((char *)v143 + v7);
        v11 = 0;
        do
        {
          ++v11;
          *v10++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v11 < v160 >> 4 );
        v134 -= v123;
        v6 += v123;
        if ( v160 != v123 )
        {
LABEL_17:
          v12 = v134;
          do
          {
            --v12;
            *(uint8_t *)v6++ = 0;
          }
          while ( v12 != -1 );
        }
      }
    }
  }
  v13 = *((uint32_t *)self + 11);
  if ( v13 != 0 )
  {
    v135 = v4;
    v14 = v143;
    v15 = 0;
    for ( i = 0; i < v13; ++i )
    {
      if ( v14 != nullptr )
      {
        v17 = *((uint32_t *)self + 9);
        *v14 = *(uint32_t *)(v17 + v15);
        v14[1] = *(uint32_t *)(v17 + v15 + 4);
        v14[2] = *(uint32_t *)(v17 + v15 + 8);
        v13 = *((uint32_t *)self + 11);
      }
      v14 += 3;
      v15 += 12;
    }
    v4 = v135;
  }
  v18 = *((void **)self + 8);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v143);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v143);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(v143);
  *((uint32_t *)self + 12) = v113;
  if ( v18 != nullptr )
  {
    opDeleteArray(v18);
LABEL_27:
    v13 = *((uint32_t *)self + 11);
  }
  if ( v151 > v13 )
  {
    v19 = 12 * v13;
    do
    {
      v20 = (uint32_t *)(*((uint32_t *)self + 9) + v19);
      if ( v20 != nullptr )
      {
        *v20 = 0;
        v20[1] = 0;
        v20[2] = 0;
      }
      ++v13;
      v19 += 12;
    }
    while ( v151 > v13 );
  }
  v21 = v151;
  v161 = 0;
  *((uint32_t *)self + 11) = v151;
  v22 = *((uint32_t *)v4 + 6);
  if ( v22 != 0 )
  {
    v23 = 0;
    v152 = 0;
    do
    {
      if ( (v23 & 0x3F) == 0 )
      {
        v24 = v23 >> 9;
        switch ( ((v23 >> 4) & 0x1C) >> 2 )
        {
          case 0u:
            *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24) = v161;
            break;
          case 1u:
            *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24 + 4) = *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24 + 4)
                                                              & 0xFFFFFF80
                                                              | (v161 - *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24))
                                                              & 0x7F;
            break;
          case 2u:
            *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24 + 4) = *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24 + 4)
                                                              & 0xFFFF807F
                                                              | ((uint8_t)(v161
                                                                                 - *(uint8_t *)(*((uint32_t *)self + 9)
                                                                                            + 12 * v24)) << 7);
            break;
          case 3u:
            *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24 + 4) = *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24 + 4)
                                                              & 0xFF807FFF
                                                              | ((uint8_t)(v161
                                                                                 - *(uint8_t *)(*((uint32_t *)self + 9)
                                                                                            + 12 * v24)) << 15);
            break;
          case 4u:
            *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24 + 4) = *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24 + 4)
                                                              & 0x7FFFFF
                                                              | ((v161 - *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24)) << 23);
            break;
          case 5u:
            *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24 + 8) = *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24 + 8)
                                                              & 0xFFFFFE00
                                                              | (v161 - *(uint32_t *)(*((uint32_t *)self + 9) + 12 * v24))
                                                              & 0x1FF;
            break;
          case 6u:
            *(uint32_t *)(12 * v24 + *((uint32_t *)self + 9) + 8) = *(uint32_t *)(12 * v24 + *((uint32_t *)self + 9) + 8)
                                                              & 0xFFFC01FF
                                                              | (((v161 - *(uint32_t *)(12 * v24 + *((uint32_t *)self + 9)))
                                                                & 0x1FF) << 9);
            break;
          case 7u:
            *(uint32_t *)(12 * v24 + *((uint32_t *)self + 9) + 8) = *(uint32_t *)(12 * v24 + *((uint32_t *)self + 9) + 8)
                                                              & 0xF803FFFF
                                                              | (((v161 - *(uint32_t *)(12 * v24 + *((uint32_t *)self + 9)))
                                                                & 0x1FF) << 18);
            break;
          default:
            abort();
        }
      }
      if ( ((*(uint32_t *)(*((uint32_t *)v4 + 2) + 4 * (v23 >> 5)) >> v23) & 1) != 0 )
      {
        if ( a4 && (v161 & 0x1FF) == 0 )
        {
          v25 = *((uint32_t *)self + 23);
          v118 = v25 + 1;
          v26 = *((uint32_t *)self + 24);
          if ( v25 + 1 > v26 )
          {
            if ( v26 > v118 >> 1 )
            {
              v139 = 0xFFFFFFFC;
              v118 = 0x3FFFFFFF;
              if ( v26 <= 0x1FFFFFFF )
              {
                v118 = 2 * v26;
                v139 = 8 * v26;
              }
            }
            else
            {
              v139 = 4 * v118;
            }
            v105 = v23;
            v144 = opNewArray(v139, (const std::nothrow_t *)&std::nothrow);
            v23 = v105;
            if ( v144 != 0 )
            {
              v126 = v139 - 1;
              if ( v139 != 0 )
              {
                v40 = (uint8_t *)v144;
                v41 = -v144 & 0xF;
                if ( v139 <= v41 )
                  v41 = v139;
                v115 = v41;
                if ( v41 == 0 )
                  goto LABEL_240;
                v42 = 0;
                v110 = v4;
                do
                {
                  *v40 = 0;
                  v43 = v139 - 2 - v42++;
                  ++v40;
                }
                while ( v115 > v42 );
                v126 = v43;
                v23 = v105;
                v4 = v110;
                if ( v139 != v115 )
                {
LABEL_240:
                  v140 = v139 - v115;
                  v112 = 16 * (v140 >> 4);
                  if ( v112 == 0 )
                    goto LABEL_109;
                  v44 = (__m128i *)(v115 + v144);
                  v108 = v40;
                  v45 = 0;
                  do
                  {
                    ++v45;
                    *v44++ = g4_m128_from<__m128i>(0LL);
                  }
                  while ( v140 >> 4 > v45 );
                  v126 -= v112;
                  v40 = &v108[v112];
                  if ( v140 != v112 )
                  {
LABEL_109:
                    v46 = v126;
                    do
                    {
                      --v46;
                      *v40++ = 0;
                    }
                    while ( v46 != -1 );
                  }
                }
              }
            }
            v25 = *((uint32_t *)self + 23);
            v47 = 0;
            if ( v25 != 0 )
            {
              v127 = v23;
              v48 = (uint32_t *)v144;
              do
              {
                if ( v48 != nullptr )
                {
                  *v48 = *(uint32_t *)(*((uint32_t *)self + 21) + 4 * v47);
                  v25 = *((uint32_t *)self + 23);
                }
                ++v47;
                ++v48;
              }
              while ( v47 < v25 );
              v23 = v127;
            }
            v141 = *((void **)self + 20);
            *((uint32_t *)self + 20) = v144;
            *((uint32_t *)self + 21) = v144;
            *((uint32_t *)self + 22) = v144;
            *((uint32_t *)self + 24) = v118;
            if ( v141 != nullptr )
            {
              v106 = v23;
              opDeleteArray(v141);
              v25 = *((uint32_t *)self + 23);
              v144 = *((uint32_t *)self + 21);
              v23 = v106;
            }
          }
          else
          {
            v144 = *((uint32_t *)self + 21);
          }
          v27 = (unsigned int *)(v144 + 4 * v25);
          if ( v27 != nullptr )
          {
            *v27 = v23;
            v25 = *((uint32_t *)self + 23);
          }
          *((uint32_t *)self + 23) = v25 + 1;
        }
        ++v161;
      }
      else
      {
        if ( a3 && (v152 & 0x1FF) == 0 )
        {
          v28 = *((uint32_t *)self + 17);
          v119 = v28 + 1;
          v29 = *((uint32_t *)self + 18);
          if ( v28 + 1 > v29 )
          {
            if ( v29 <= v119 >> 1 )
            {
              v136 = 4 * v119;
            }
            else
            {
              v136 = 0xFFFFFFFC;
              v119 = 0x3FFFFFFF;
              if ( v29 <= 0x1FFFFFFF )
              {
                v119 = 2 * v29;
                v136 = 8 * v29;
              }
            }
            v103 = v23;
            v145 = opNewArray(v136, (const std::nothrow_t *)&std::nothrow);
            v23 = v103;
            if ( v145 != 0 )
            {
              v124 = v136 - 1;
              if ( v136 != 0 )
              {
                v31 = (uint8_t *)v145;
                v32 = -v145 & 0xF;
                if ( v136 <= v32 )
                  v32 = v136;
                v114 = v32;
                if ( v32 == 0 )
                  goto LABEL_241;
                v33 = 0;
                v109 = v4;
                do
                {
                  *v31 = 0;
                  v34 = v136 - 2 - v33++;
                  ++v31;
                }
                while ( v114 > v33 );
                v124 = v34;
                v23 = v103;
                v4 = v109;
                if ( v136 != v114 )
                {
LABEL_241:
                  v137 = v136 - v114;
                  v111 = 16 * (v137 >> 4);
                  if ( v111 == 0 )
                    goto LABEL_85;
                  v35 = (__m128i *)(v114 + v145);
                  v107 = v31;
                  v36 = 0;
                  do
                  {
                    ++v36;
                    *v35++ = g4_m128_from<__m128i>(0LL);
                  }
                  while ( v137 >> 4 > v36 );
                  v124 -= v111;
                  v31 = &v107[v111];
                  if ( v137 != v111 )
                  {
LABEL_85:
                    v37 = v124;
                    do
                    {
                      --v37;
                      *v31++ = 0;
                    }
                    while ( v37 != -1 );
                  }
                }
              }
            }
            v28 = *((uint32_t *)self + 17);
            v38 = 0;
            if ( v28 != 0 )
            {
              v125 = v23;
              v39 = (uint32_t *)v145;
              do
              {
                if ( v39 != nullptr )
                {
                  *v39 = *(uint32_t *)(*((uint32_t *)self + 15) + 4 * v38);
                  v28 = *((uint32_t *)self + 17);
                }
                ++v38;
                ++v39;
              }
              while ( v38 < v28 );
              v23 = v125;
            }
            v138 = *((void **)self + 14);
            *((uint32_t *)self + 14) = v145;
            *((uint32_t *)self + 15) = v145;
            *((uint32_t *)self + 16) = v145;
            *((uint32_t *)self + 18) = v119;
            if ( v138 != nullptr )
            {
              v104 = v23;
              opDeleteArray(v138);
              v28 = *((uint32_t *)self + 17);
              v145 = *((uint32_t *)self + 15);
              v23 = v104;
            }
          }
          else
          {
            v145 = *((uint32_t *)self + 15);
          }
          v30 = (unsigned int *)(v145 + 4 * v28);
          if ( v30 != nullptr )
          {
            *v30 = v23;
            v28 = *((uint32_t *)self + 17);
          }
          *((uint32_t *)self + 17) = v28 + 1;
        }
        ++v152;
      }
      ++v23;
      v22 = *((uint32_t *)v4 + 6);
    }
    while ( v22 > v23 );
    if ( (v22 & 0x1FF) != 0 )
    {
      if ( (((v22 - 1) >> 6) & 7) != 7 )
      {
        v49 = 12 * ((v22 - 1) >> 9);
        switch ( ((v22 - 1) >> 6) & 7 )
        {
          case 0u:
            *(uint32_t *)(*((uint32_t *)self + 9) + v49 + 4) = *(uint32_t *)(*((uint32_t *)self + 9) + v49 + 4) & 0xFFFFFF80
                                                         | (v161 - *(uint32_t *)(*((uint32_t *)self + 9) + v49)) & 0x7F;
          case 1u:
            *(uint32_t *)(*((uint32_t *)self + 9) + v49 + 4) = *(uint32_t *)(*((uint32_t *)self + 9) + v49 + 4) & 0xFFFF807F
                                                         | ((uint8_t)(v161
                                                                            - *(uint8_t *)(*((uint32_t *)self + 9) + v49)) << 7);
          case 2u:
            *(uint32_t *)(v49 + *((uint32_t *)self + 9) + 4) = *(uint32_t *)(v49 + *((uint32_t *)self + 9) + 4) & 0xFF807FFF
                                                         | ((uint8_t)(v161
                                                                            - *(uint8_t *)(v49 + *((uint32_t *)self + 9))) << 15);
          case 3u:
            *(uint32_t *)(v49 + *((uint32_t *)self + 9) + 4) = *(uint32_t *)(v49 + *((uint32_t *)self + 9) + 4) & 0x7FFFFF
                                                         | ((v161 - *(uint32_t *)(v49 + *((uint32_t *)self + 9))) << 23);
          case 4u:
            *(uint32_t *)(v49 + *((uint32_t *)self + 9) + 8) = *(uint32_t *)(v49 + *((uint32_t *)self + 9) + 8) & 0xFFFFFE00
                                                         | (v161 - *(uint32_t *)(v49 + *((uint32_t *)self + 9))) & 0x1FF;
          case 5u:
            *(uint32_t *)(v49 + *((uint32_t *)self + 9) + 8) = *(uint32_t *)(v49 + *((uint32_t *)self + 9) + 8) & 0xFFFC01FF
                                                         | (((v161 - *(uint32_t *)(v49 + *((uint32_t *)self + 9))) & 0x1FF) << 9);
            break;
          case 6u:
            break;
          default:
            abort();
        }
        *(uint32_t *)(*((uint32_t *)self + 9) + v49 + 8) = *(uint32_t *)(*((uint32_t *)self + 9) + v49 + 8) & 0xF803FFFF
                                                     | (((v161 - *(uint32_t *)(*((uint32_t *)self + 9) + v49)) & 0x1FF) << 18);
        v22 = *((uint32_t *)v4 + 6);
      }
      v21 = *((uint32_t *)self + 11);
    }
    else
    {
      v21 = *((uint32_t *)self + 11);
    }
  }
  *((uint32_t *)self + 6) = v22;
  *((uint32_t *)self + 7) = *((uint32_t *)v4 + 7);
  *(uint32_t *)(*((uint32_t *)self + 9) + 4 * (3 * v21 - 3)) = v161;
  if ( !a3 )
    goto LABEL_48;
  v142 = *((uint32_t *)v4 + 6);
  v67 = *((uint32_t *)self + 17);
  v68 = *((uint32_t *)self + 18);
  v132 = v67 + 1;
  if ( v67 + 1 > v68 )
  {
    if ( v68 > (v67 + 1) >> 1 )
    {
      v157 = 0xFFFFFFFC;
      v132 = 0x3FFFFFFF;
      if ( v68 <= 0x1FFFFFFF )
      {
        v132 = 2 * v68;
        v157 = 8 * v68;
        v93 = opNewArray(8 * v68, (const std::nothrow_t *)&std::nothrow);
LABEL_212:
        v165 = (uint32_t *)v93;
        if ( v93 != 0 )
        {
          v150 = v157 - 1;
          if ( v157 != 0 )
          {
            v94 = -v93 & 0xF;
            if ( v157 <= v94 )
              v94 = v157;
            if ( v94 == 0 )
              goto LABEL_242;
            v116 = v4;
            v95 = 0;
            do
            {
              *(uint8_t *)v93 = 0;
              v96 = v157 - 2 - v95++;
              ++v93;
            }
            while ( v94 > v95 );
            v150 = v96;
            v4 = v116;
            if ( v157 != v94 )
            {
LABEL_242:
              v158 = v157 - v94;
              v117 = 16 * (v158 >> 4);
              if ( v117 == 0 )
                goto LABEL_224;
              v97 = (__m128i *)((char *)v165 + v94);
              v98 = 0;
              do
              {
                ++v98;
                *v97++ = g4_m128_from<__m128i>(0LL);
              }
              while ( v158 >> 4 > v98 );
              v150 -= v117;
              v93 += v117;
              if ( v158 != v117 )
              {
LABEL_224:
                v99 = v150;
                do
                {
                  --v99;
                  *(uint8_t *)v93++ = 0;
                }
                while ( v99 != -1 );
              }
            }
          }
        }
        v67 = *((uint32_t *)self + 17);
        v100 = 0;
        for ( j = v165; v100 < v67; ++j )
        {
          if ( j != nullptr )
          {
            *j = *(uint32_t *)(*((uint32_t *)self + 15) + 4 * v100);
            v67 = *((uint32_t *)self + 17);
          }
          ++v100;
        }
        v102 = *((void **)self + 14);
        *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(v165);
        *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(v165);
        *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v165);
        *((uint32_t *)self + 18) = v132;
        if ( v102 != nullptr )
        {
          opDeleteArray(v102);
          v67 = *((uint32_t *)self + 17);
          v165 = *((uint32_t **)self + 15);
        }
        goto LABEL_159;
      }
    }
    else
    {
      v157 = 4 * v132;
    }
    v93 = opNewArray(v157, (const std::nothrow_t *)&std::nothrow);
    goto LABEL_212;
  }
  v165 = *((uint32_t **)self + 15);
LABEL_159:
  v69 = &v165[v67];
  if ( v69 != nullptr )
  {
    *v69 = v142;
    v67 = *((uint32_t *)self + 17);
  }
  v70 = v67 + 1;
  v55 = *((uint8_t *)self + 76) == 0;
  v133 = v70;
  *((uint32_t *)self + 17) = v70;
  if ( !v55 )
LABEL_236:
    abort();
  if ( *((uint32_t *)self + 18) != v70 )
  {
    v166 = 4 * v70;
    v154 = opNewArray(4 * v70, (const std::nothrow_t *)&std::nothrow);
    if ( v154 != 0 )
    {
      v149 = v166 - 1;
      if ( v166 != 0 )
      {
        v71 = (uint8_t *)v154;
        v72 = -v154 & 0xF;
        if ( v166 <= v72 )
          v72 = v166;
        if ( v72 == 0 )
          goto LABEL_243;
        v128 = v4;
        v73 = 0;
        do
        {
          *v71 = 0;
          v74 = v166 - 2 - v73++;
          ++v71;
        }
        while ( v72 > v73 );
        v149 = v74;
        v4 = v128;
        if ( v166 != v72 )
        {
LABEL_243:
          v167 = v166 - v72;
          v129 = 16 * (v167 >> 4);
          if ( v129 == 0 )
            goto LABEL_175;
          v75 = (__m128i *)(v154 + v72);
          v76 = 0;
          do
          {
            ++v76;
            *v75++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v167 >> 4 > v76 );
          v149 -= v129;
          v71 += v129;
          if ( v167 != v129 )
          {
LABEL_175:
            v77 = v149;
            do
            {
              --v77;
              *v71++ = 0;
            }
            while ( v77 != -1 );
          }
        }
      }
    }
    v78 = *((uint32_t *)self + 17);
    v79 = 0;
    for ( k = (uint32_t *)v154; v79 < v78; ++k )
    {
      if ( k != nullptr )
      {
        *k = *(uint32_t *)(*((uint32_t *)self + 15) + 4 * v79);
        v78 = *((uint32_t *)self + 17);
      }
      ++v79;
    }
    v81 = *((void **)self + 14);
    *((uint32_t *)self + 14) = v154;
    *((uint32_t *)self + 15) = v154;
    *((uint32_t *)self + 16) = v154;
    *((uint32_t *)self + 18) = v133;
    if ( v81 != nullptr )
      opDeleteArray(v81);
  }
LABEL_48:
  if ( !a4 )
    return;
  v50 = *((uint32_t *)self + 23);
  v51 = *((uint32_t *)self + 24);
  v146 = *((uint32_t *)v4 + 6);
  v52 = (char *)self + 80;
  v130 = v50 + 1;
  if ( v50 + 1 <= v51 )
  {
    v162 = *((uint32_t **)self + 21);
    goto LABEL_133;
  }
  if ( v51 <= (v50 + 1) >> 1 )
  {
    v155 = 4 * v130;
LABEL_185:
    v82 = opNewArray(v155, (const std::nothrow_t *)&std::nothrow);
    goto LABEL_186;
  }
  v155 = 0xFFFFFFFC;
  v130 = 0x3FFFFFFF;
  if ( v51 > 0x1FFFFFFF )
    goto LABEL_185;
  v130 = 2 * v51;
  v155 = 8 * v51;
  v82 = opNewArray(8 * v51, (const std::nothrow_t *)&std::nothrow);
LABEL_186:
  v162 = (uint32_t *)v82;
  if ( v82 != 0 )
  {
    v122 = v155 - 1;
    if ( v155 != 0 )
    {
      v83 = (uint8_t *)v82;
      v84 = -v82 & 0xF;
      if ( v155 <= v84 )
        v84 = v155;
      if ( v84 == 0 )
        goto LABEL_244;
      v85 = 0;
      do
      {
        *v83 = 0;
        v86 = v155 - 2 - v85++;
        ++v83;
      }
      while ( v84 > v85 );
      v122 = v86;
      v52 = (char *)self + 80;
      if ( v155 != v84 )
      {
LABEL_244:
        v156 = v155 - v84;
        v120 = 16 * (v156 >> 4);
        if ( v120 == 0 )
          goto LABEL_198;
        v87 = (__m128i *)((char *)v162 + v84);
        v88 = 0;
        do
        {
          ++v88;
          *v87++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v88 < v156 >> 4 );
        v83 += v120;
        v122 -= v120;
        if ( v156 != v120 )
        {
LABEL_198:
          v89 = v122;
          do
          {
            --v89;
            *v83++ = 0;
          }
          while ( v89 != -1 );
        }
      }
    }
  }
  v50 = *((uint32_t *)self + 23);
  v90 = 0;
  for ( m = v162; v90 < v50; ++m )
  {
    if ( m != nullptr )
    {
      *m = *(uint32_t *)(*((uint32_t *)v52 + 1) + 4 * v90);
      v50 = *((uint32_t *)self + 23);
    }
    ++v90;
  }
  v92 = *((void **)self + 20);
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(v162);
  *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(v162);
  *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)(v162);
  *((uint32_t *)self + 24) = v130;
  if ( v92 != nullptr )
  {
    opDeleteArray(v92);
    v50 = *((uint32_t *)self + 23);
    v162 = *((uint32_t **)self + 21);
  }
LABEL_133:
  v53 = &v162[v50];
  if ( v53 != nullptr )
  {
    *v53 = v146;
    v50 = *((uint32_t *)self + 23);
  }
  v54 = v50 + 1;
  v55 = *((uint8_t *)self + 100) == 0;
  v131 = v54;
  *((uint32_t *)self + 23) = v54;
  if ( !v55 )
    goto LABEL_236;
  if ( *((uint32_t *)self + 24) != v54 )
  {
    v163 = 4 * v54;
    v153 = opNewArray(4 * v54, (const std::nothrow_t *)&std::nothrow);
    if ( v153 != 0 )
    {
      v121 = v163 - 1;
      if ( v163 != 0 )
      {
        v56 = (uint8_t *)v153;
        v57 = -v153 & 0xF;
        if ( v57 > v163 )
          v57 = v163;
        if ( v57 == 0 )
          goto LABEL_245;
        v147 = v52;
        v58 = 0;
        do
        {
          *v56 = 0;
          v59 = v163 - 2 - v58++;
          ++v56;
        }
        while ( v58 < v57 );
        v121 = v59;
        v52 = v147;
        if ( v57 != v163 )
        {
LABEL_245:
          v164 = v163 - v57;
          v148 = 16 * (v164 >> 4);
          if ( v148 == 0 )
            goto LABEL_149;
          v60 = (__m128i *)(v153 + v57);
          v61 = 0;
          do
          {
            ++v61;
            *v60++ = g4_m128_from<__m128i>(0LL);
          }
          while ( v61 < v164 >> 4 );
          v56 += v148;
          v121 -= v148;
          if ( v164 != v148 )
          {
LABEL_149:
            v62 = v121;
            do
            {
              --v62;
              *v56++ = 0;
            }
            while ( v62 != -1 );
          }
        }
      }
    }
    v63 = *((uint32_t *)self + 23);
    v64 = 0;
    for ( n = (uint32_t *)v153; v64 < v63; ++n )
    {
      if ( n != nullptr )
      {
        *n = *(uint32_t *)(*((uint32_t *)v52 + 1) + 4 * v64);
        v63 = *((uint32_t *)self + 23);
      }
      ++v64;
    }
    v66 = *((void **)self + 20);
    *((uint32_t *)self + 20) = v153;
    *((uint32_t *)self + 21) = v153;
    *((uint32_t *)self + 22) = v153;
    *((uint32_t *)self + 24) = v131;
    if ( v66 != nullptr )
      opDeleteArray(v66);
  }
}


