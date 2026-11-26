// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bde188):
//   ../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp
// Referenced by 2 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x14a9620 .. 0x14a986c (588 bytes)
// Symbol:               _ZN5boost6random6detail15fill_array_realILi48ELj44497ENS_5uuids6detail18generator_iteratorINS4_8seed_rngEEEdEEvRT1_S8_RAT0__T2_
// Demangled:            void boost::random::detail::fill_array_real<48,44497u,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>,double>(boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng> &,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>,double (&)[44497u])
// ============================================================================
/*
int boost::random::detail::fill_array_real<48,44497u,boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>,double>(
        int *a1,
        int a2,
        int a3,
        int a4)
{
  int i;
  int v5;
  int v6;
  bool v7;
  double v8; // xmm0_8
  int v9;
  double v10; // xmm1_8
  int v11;
  double v12; // xmm0_8
  int v13;
  int result;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  uint8_t v23[8];
  uint8_t v24[36];

  for ( i = 0; i != 44497; ++i )
  {
    v15 = *a1;
    v16 = a1[1];
    if ( a2 == *a1 && a3 == v16 )
    {
      std::string::__construct_from_cstr((int)&v21, "Not enough elements in call to seed.", (int)&v20);
      sub_1904220(v23, &v21);
      boost::exception_detail::throw_exception_<std::invalid_argument>(
        v23,
        "void boost::random::detail::fill_array_real(Iter&, Iter, RealType (&)[n]) [with int w = 48, unsigned int n = 444"
        "97u, Iter = boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>, RealType = double]",
        "../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp",
        376);
    }
    v17 = *(uint32_t *)(v15 + 20);
    v18 = v17 + 1;
    if ( v17 > 4 )
    {
      v19 = a1[1];
      boost::uuids::detail::seed_rng::sha1_random_digest_((FILE **)v15);
      v18 = 1;
      v17 = 0;
      v16 = v19;
    }
    v5 = *(uint32_t *)(v15 + 4 * v17);
    *(uint32_t *)(v15 + 20) = v18;
    v6 = *a1;
    v7 = a2 == *a1;
    a1[1] = v5;
    if ( v7 && a3 == v5 )
    {
      std::string::__construct_from_cstr((int)&v22, "Not enough elements in call to seed.", (int)&v20 + 1);
      sub_1904220(v24, &v22);
      boost::exception_detail::throw_exception_<std::invalid_argument>(
        v24,
        "void boost::random::detail::fill_array_real(Iter&, Iter, RealType (&)[n]) [with int w = 48, unsigned int n = 444"
        "97u, Iter = boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>, RealType = double]",
        "../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp",
        381);
    }
    v8 = (double)(uint16_t)v5;
    v9 = *(uint32_t *)(v6 + 20);
    v10 = (double)v16 * 3.552713678800501e-15;
    v11 = v9 + 1;
    v12 = v8 * 0.0000152587890625 + v10;
    if ( v9 > 4 )
    {
      boost::uuids::detail::seed_rng::sha1_random_digest_((FILE **)v6);
      v11 = 1;
      v9 = 0;
    }
    v13 = *(uint32_t *)(v6 + 4 * v9);
    *(uint32_t *)(v6 + 20) = v11;
    a1[1] = v13;
    if ( v12 < 0.0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp",
        385,
        "void boost::random::detail::fill_array_real(Iter&, Iter, RealType (&)[n]) [with int w = 48, unsigned int n = 444"
        "97u, Iter = boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>, RealType = double]",
        "val >= 0");
    if ( v12 >= 1.0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp",
        386,
        "void boost::random::detail::fill_array_real(Iter&, Iter, RealType (&)[n]) [with int w = 48, unsigned int n = 444"
        "97u, Iter = boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>, RealType = double]",
        "val < 1");
    result = a4;
    *(double *)(a4 + 8 * i) = v12;
  }
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x14a9cb0 .. 0x14a9e24 (372 bytes)
// Symbol:               _ZN5boost6random6detail15seed_array_realILi48ELj44497ENS1_18generator_seed_seqINS0_26linear_congruential_engineIjLj16807ELj0ELj2147483647EEEEEdEEvRT1_RAT0__T2_
// Demangled:            void boost::random::detail::seed_array_real<48,44497u,boost::random::detail::generator_seed_seq<boost::random::linear_congruential_engine<unsigned int,16807u,0u,2147483647u>>,double>(boost::random::detail::generator_seed_seq<boost::random::linear_congruential_engine<unsigned int,16807u,0u,2147483647u>> &,double (&)[44497u])
// ============================================================================
/*
unsigned int boost::random::detail::seed_array_real<48,44497u,boost::random::detail::generator_seed_seq<boost::random::linear_congruential_engine<unsigned int,16807u,0u,2147483647u>>,double>(
        unsigned int **a1,
        int a2)
{
  char *v2;
  uint32_t *v3;
  uint64_t v4; // rax
  int i;
  unsigned int result;
  double v7; // xmm0_8
  uint32_t v8[88994];
  char v9;

  v2 = (char *)v8;
  do
  {
    v3 = *a1;
    v4 = 16807 * (uint64_t)**a1 % 0x7FFFFFFF;
    *(uint32_t *)v2 = v4;
    v2 += 4;
    *v3 = v4;
  }
  while ( v2 != &v9 );
  for ( i = 0; i != 44497; ++i )
  {
    result = v8[2 * i] + 0x80000000;
    v7 = (double)LOWORD(v8[2 * i + 1]) * 0.0000152587890625 + (double)(unsigned int)v8[2 * i] * 3.552713678800501e-15;
    if ( v7 < 0.0 )
      result = __assert2(
                 "../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp",
                 350,
                 "void boost::random::detail::seed_array_real_impl(const uint_least32_t*, RealType (&)[n]) [with int w = "
                 "48, unsigned int n = 44497u, RealType = double, uint_least32_t = unsigned int]",
                 "val >= 0");
    if ( v7 >= 1.0 )
      result = __assert2(
                 "../../../../../lib/glitch/include/boost/random/detail/seed_impl.hpp",
                 351,
                 "void boost::random::detail::seed_array_real_impl(const uint_least32_t*, RealType (&)[n]) [with int w = "
                 "48, unsigned int n = 44497u, RealType = double, uint_least32_t = unsigned int]",
                 "val < 1");
    *(double *)(a2 + 8 * i) = v7;
  }
  return result;
}

*/
