// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd6aac):
//   ../../../../../lib/boost/unordered/detail/table.hpp
// Referenced by 7 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x123a860 .. 0x123a9eb (395 bytes)
// Symbol:               sub_123A860
// Demangled:            sub_123A860
// ============================================================================
/*
int sub_123A860(float *a1, unsigned int a2)
{
  float v2; // xmm1_4
  __m128d v3; // xmm0
  __m128d v4; // xmm1
  __m128d v5; // xmm1
  unsigned int v6;
  __m128d v7; // xmm3
  __m128d v8; // xmm1
  void **v9;
  int v10;
  int v11;
  unsigned int *v12;
  int v14;
  unsigned int v15;
  int v17;

  v2 = *a1;
  v3 = (__m128d)0x3A83126Fu;
  if ( *a1 < 0.001f )
  {
    v15 = a2;
    __assert2(
      "../../../../../lib/boost/unordered/detail/table.hpp",
      323,
      "std::size_t boost::unordered::detail::table<Types>::min_buckets_for_size(std::size_t) const [with Types = boost::u"
      "nordered::detail::map<std::allocator<std::pair<const std::basic_string<char>, boost::shared_ptr<chatv2::Core::Ario"
      "nChannel> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Core::ArionChannel>, boost::hash<std::basic_stri"
      "ng<char> >, std::equal_to<std::basic_string<char> > >, std::size_t = unsigned int]",
      "mlf_ >= minimum_max_load_factor");
    a2 = v15;
    v2 = *a1;
  }
  v3.m128d_f64[0] = (double)a2 / v2;
  v4 = _mm_and_pd(v3, (__m128d)0x7FFFFFFFFFFFFFFFuLL);
  if ( v4.m128d_f64[0] < 4503599627370496.0 )
  {
    v4.m128d_f64[0] = v4.m128d_f64[0] + 4503599627370496.0 - 4503599627370496.0;
    v5 = _mm_or_pd(v4, _mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, v3));
    v3.m128d_f64[0] = v5.m128d_f64[0]
                    - COERCE_DOUBLE(*(uint64_t *)&_mm_cmpgt_sd(v5, v3).m128d_f64[0] & 0x3FF0000000000000LL);
  }
  v6 = 0;
  if ( v3.m128d_f64[0] < 4294967295.0 )
  {
    v7 = 0;
    v7.m128d_f64[0] = v3.m128d_f64[0];
    v8 = _mm_cmple_pd((__m128d)xmmword_1C7C210, v7);
    v6 = _mm_cvtsi128_si32(
           _mm_xor_si128(
             _mm_cvttpd_epi32(_mm_sub_pd(v7, _mm_and_pd((__m128d)xmmword_1C7C210, v8))),
             _mm_slli_epi32((__m128i)v8, 0x1Fu)))
       + 1;
  }
  v17 = 38;
  v9 = (void **)&unk_1C81A60;
  v10 = 38;
  while ( 1 )
  {
    v11 = v10 >> 1;
    v12 = (unsigned int *)&v9[v11];
    if ( *v12 >= v6 )
      break;
    v14 = v11;
    v11 = v17;
LABEL_16:
    v9 = (void **)(v12 + 1);
    v10 = v11 - v14 - 1;
    v17 = v10;
    if ( v10 <= 0 )
      goto LABEL_13;
  }
  while ( v11 > 0 )
  {
    v14 = v11 >> 1;
    v12 = (unsigned int *)&v9[v11 >> 1];
    if ( *v12 < v6 )
      goto LABEL_16;
    v11 >>= 1;
  }
LABEL_13:
  if ( v9 == jpt_628CA1 )
    v9 = (void **)&unk_1C81AF4;
  return (int)*v9;
}

*/

// ============================================================================
// Referencing Function: 0x123a9f0 .. 0x123aaee (254 bytes)
// Symbol:               sub_123A9F0
// Demangled:            sub_123A9F0
// ============================================================================
/*
uint32_t *sub_123A9F0(uint32_t *a1, uint32_t *a2, unsigned int a3, const void **a4)
{
  int v5;
  unsigned int v6;
  int v7;
  int v9;
  int *v10;
  int v11;
  int v12;

  v5 = 0;
  v12 = a3 % a2[1];
  if ( a2[2] != 0 )
  {
    v9 = a2[5];
    if ( v9 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/unordered/detail/table.hpp",
        234,
        "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std::s"
        "ize_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<char>,"
        " boost::shared_ptr<chatv2::Core::ArionChannel> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Core::Ari"
        "onChannel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, boost::unordered::"
        "detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
        "buckets_");
      v9 = a2[5];
    }
    v5 = 0;
    v10 = *(int **)(v9 + 4 * v12);
    if ( v10 != nullptr )
    {
      v11 = *v10;
      if ( v11 != 0 )
        v5 = v11 - 12;
    }
  }
  while ( 1 )
  {
    if ( v5 == 0 )
    {
LABEL_6:
      *a1 = 0;
      return a1;
    }
    v6 = *(uint32_t *)(v5 + 16);
    if ( a3 == v6 )
      break;
    if ( v12 != v6 % a2[1] )
      goto LABEL_6;
LABEL_5:
    v7 = *(uint32_t *)(v5 + 12);
    if ( v7 == 0 )
      goto LABEL_6;
    v5 = v7 - 12;
  }
  if ( *((uint32_t *)*a4 - 3) != *(uint32_t *)(*(uint32_t *)v5 - 12)
    || memcmp(*a4, *(const void **)v5, *((uint32_t *)*a4 - 3)) != 0 )
  {
    goto LABEL_5;
  }
  *a1 = v5;
  return a1;
}

*/

// ============================================================================
// Referencing Function: 0x123c4c0 .. 0x123c9f2 (1330 bytes)
// Symbol:               _ZN6chatv28Requests19ArionRequestFactoryD2Ev
// Demangled:            chatv2::Requests::ArionRequestFactory::~ArionRequestFactory()
// ============================================================================

// ============================================================================
// Referencing Function: 0x1244b50 .. 0x1244c1e (206 bytes)
// Symbol:               _ZN5boost9unordered6detail5tableINS1_3mapISaISt4pairIKSsNS_10shared_ptrIN6chatv24Core12ArionChannelEEEEESsSA_NS_4hashISsEESt8equal_toISsEEEE12delete_nodesEPNS1_10ptr_bucketESK_
// Demangled:            boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel>,boost::hash<std::string>,std::equal_to<std::string>>>::delete_nodes(boost::unordered::detail::ptr_bucket *,boost::unordered::detail::ptr_bucket *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1244c20 .. 0x1244e1f (511 bytes)
// Symbol:               _ZN5boost9unordered6detail10table_implINS1_3mapISaISt4pairIKSsNS_10shared_ptrIN6chatv24Core12ArionChannelEEEEESsSA_NS_4hashISsEESt8equal_toISsEEEE9erase_keyERS5_
// Demangled:            boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel>,boost::hash<std::string>,std::equal_to<std::string>>>::erase_key(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1244e20 .. 0x1244fbc (412 bytes)
// Symbol:               _ZN5boost9unordered6detail5tableINS1_3mapISaISt4pairIKSsNS_10shared_ptrIN6chatv24Core12ArionChannelEEEEESsSA_NS_4hashISsEESt8equal_toISsEEEE14create_bucketsEj
// Demangled:            boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel>,boost::hash<std::string>,std::equal_to<std::string>>>::create_buckets(unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1244fc0 .. 0x12454e1 (1313 bytes)
// Symbol:               _ZN5boost9unordered6detail10table_implINS1_3mapISaISt4pairIKSsNS_10shared_ptrIN6chatv24Core12ArionChannelEEEEESsSA_NS_4hashISsEESt8equal_toISsEEEEixERS5_
// Demangled:            boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel>,boost::hash<std::string>,std::equal_to<std::string>>>::operator[](std::string const&)
// ============================================================================
