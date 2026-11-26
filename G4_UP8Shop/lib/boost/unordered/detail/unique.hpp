// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd6cbc):
//   ../../../../../lib/boost/unordered/detail/unique.hpp
// Referenced by 1 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x1244fc0 .. 0x12454e1 (1313 bytes)
// Symbol:               _ZN5boost9unordered6detail10table_implINS1_3mapISaISt4pairIKSsNS_10shared_ptrIN6chatv24Core12ArionChannelEEEEESsSA_NS_4hashISsEESt8equal_toISsEEEEixERS5_
// Demangled:            boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel>,boost::hash<std::string>,std::equal_to<std::string>>>::operator[](std::string const&)
// ============================================================================
/*
uint32_t *boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel>,boost::hash<std::string>,std::equal_to<std::string>>>::operator[](
        boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const, boost::shared_ptr<chatv2::Core::ArionChannel>>>, std::string, boost::shared_ptr<chatv2::Core::ArionChannel>, boost::hash<std::string>, std::equal_to<std::string>>> *a1,
        const void **a2)
{
  unsigned int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  uint32_t *v10;
  void *v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  uint32_t *v16;
  int v17;
  int v18;
  uint32_t **v19;
  unsigned int v20;
  uint32_t *v21;
  int v22;
  int v23;
  uint32_t **v24;
  int v25;
  int v26;
  uint32_t **v27;
  int v29;
  int *v30;
  int v31;
  uint32_t *v32;
  int v33;
  uint32_t *v34;
  unsigned int v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  uint32_t *v51;
  int v52;
  uint32_t v53[7];

  v2 = 0;
  v50 = 0;
  v3 = (char *)*a2;
  v4 = (int)*a2 + *((uint32_t *)*a2 - 3);
  if ( *a2 != (const void *)v4 )
  {
    do
    {
      v5 = *v3++;
      v2 ^= (v2 << 6) + (v2 >> 2) - 1640531527 + v5;
    }
    while ( v3 != (char *)v4 );
    v50 = v2 % *((uint32_t *)a1 + 1);
  }
  v6 = 0;
  if ( *((uint32_t *)a1 + 2) != 0 )
  {
    v29 = *((uint32_t *)a1 + 5);
    if ( v29 == 0 )
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
      v29 = *((uint32_t *)a1 + 5);
    }
    v6 = 0;
    v30 = *(int **)(v29 + 4 * v50);
    if ( v30 != nullptr )
    {
      v31 = *v30;
      if ( v31 != 0 )
        v6 = v31 - 12;
    }
  }
  while ( v6 != 0 )
  {
    v7 = *(uint32_t *)(v6 + 16);
    if ( v2 == v7 )
    {
      if ( *((uint32_t *)*a2 - 3) == *(uint32_t *)(*(uint32_t *)v6 - 12)
        && memcmp(*a2, *(const void **)v6, *((uint32_t *)*a2 - 3)) == 0 )
      {
        return (uint32_t *)v6;
      }
    }
    else if ( v50 != v7 % *((uint32_t *)a1 + 1) )
    {
      break;
    }
    v8 = *(uint32_t *)(v6 + 12);
    if ( v8 == 0 )
      break;
    v6 = v8 - 12;
  }
  std::string::__construct_copy(v53, a2);
  v9 = operator new(0x14u);
  v10 = (uint32_t *)v9;
  if ( v9 != 0 )
  {
    *(uint32_t *)(v9 + 12) = 0;
    *(uint32_t *)(v9 + 16) = 0;
    v38 = (uint32_t *)v9;
    std::string::__construct_copy(v9, v53);
    v10 = v38;
  }
  if ( v10 != (uint32_t *)-4 )
  {
    v10[1] = 0;
    v10[2] = 0;
  }
  v11 = (void *)(v53[0] - 12);
  if ( (uint32_t *)(v53[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v53[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v43 = v10;
    std::string::_Rep::_M_destroy(v11);
    v10 = v43;
  }
  v12 = *((uint32_t *)a1 + 2);
  v13 = v12 + 1;
  if ( *((uint32_t *)a1 + 5) != 0 )
  {
    if ( v13 > *((uint32_t *)a1 + 4) )
    {
      v39 = v10;
      v14 = (v12 >> 1) + v12;
      if ( v14 >= v13 )
        v13 = v14;
      v15 = sub_123A860((float *)a1 + 3, v13);
      v10 = v39;
      if ( v15 != *((uint32_t *)a1 + 1) )
      {
        if ( *((uint32_t *)a1 + 5) == 0 )
        {
          __assert2(
            "../../../../../lib/boost/unordered/detail/unique.hpp",
            591,
            "void boost::unordered::detail::table_impl<Types>::rehash_impl(std::size_t) [with Types = boost::unordered::d"
            "etail::map<std::allocator<std::pair<const std::basic_string<char>, boost::shared_ptr<chatv2::Core::ArionChan"
            "nel> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Core::ArionChannel>, boost::hash<std::basic_str"
            "ing<char> >, std::equal_to<std::basic_string<char> > >, std::size_t = unsigned int]",
            "this->buckets_");
          v10 = v39;
        }
        v40 = v10;
        boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel>,boost::hash<std::string>,std::equal_to<std::string>>>::create_buckets(
          a1,
          v15);
        v16 = v40;
        v17 = *((uint32_t *)a1 + 1);
        v18 = *((uint32_t *)a1 + 5);
        if ( v18 == 0 )
        {
          __assert2(
            "../../../../../lib/boost/unordered/detail/table.hpp",
            234,
            "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(st"
            "d::size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_strin"
            "g<char>, boost::shared_ptr<chatv2::Core::ArionChannel> > >, std::basic_string<char>, boost::shared_ptr<chatv"
            "2::Core::ArionChannel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, bo"
            "ost::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
            "buckets_");
          v16 = v40;
          v18 = *((uint32_t *)a1 + 5);
        }
        v37 = v16;
        v51 = (uint32_t *)(v18 + 4 * v17);
        v19 = (uint32_t **)v51;
        v20 = v2;
        while ( 1 )
        {
          v21 = *v19;
          if ( *v19 == nullptr )
            break;
          while ( 1 )
          {
            v22 = v21[1] % *((uint32_t *)a1 + 1);
            v23 = *((uint32_t *)a1 + 5);
            if ( v23 == 0 )
            {
              v46 = v21[1] % *((uint32_t *)a1 + 1);
              __assert2(
                "../../../../../lib/boost/unordered/detail/table.hpp",
                234,
                "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucke"
                "t(std::size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::bas"
                "ic_string<char>, boost::shared_ptr<chatv2::Core::ArionChannel> > >, std::basic_string<char>, boost::shar"
                "ed_ptr<chatv2::Core::ArionChannel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_stri"
                "ng<char> > >, boost::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_buc"
                "ket*, std::size_t = unsigned int]",
                "buckets_");
              v22 = v46;
              v23 = *((uint32_t *)a1 + 5);
            }
            v24 = (uint32_t **)(v23 + 4 * v22);
            if ( *v24 == nullptr )
              break;
            *v51 = *v21;
            *v21 = **v24;
            **v24 = v21;
            v21 = (uint32_t *)*v51;
            if ( *v51 == 0 )
              goto LABEL_29;
          }
          v32 = v51;
          v51 = v21;
          *v24 = v32;
          v19 = (uint32_t **)v21;
        }
LABEL_29:
        v2 = v20;
        v10 = v37;
      }
    }
  }
  else
  {
    v42 = v10;
    v35 = sub_123A860((float *)a1 + 3, v13);
    if ( v35 < *((uint32_t *)a1 + 1) )
      v35 = *((uint32_t *)a1 + 1);
    boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel>,boost::hash<std::string>,std::equal_to<std::string>>>::create_buckets(
      a1,
      v35);
    v10 = v42;
  }
  if ( v10 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/unordered/detail/buckets.hpp",
      383,
      "boost::unordered::detail::node_constructor<NodeAlloc>::node_pointer boost::unordered::detail::node_constructor<Nod"
      "eAlloc>::release() [with NodeAlloc = std::allocator<boost::unordered::detail::ptr_node<std::pair<const std::basic_"
      "string<char>, boost::shared_ptr<chatv2::Core::ArionChannel> > > >, boost::unordered::detail::node_constructor<Node"
      "Alloc>::node_pointer = boost::unordered::detail::ptr_node<std::pair<const std::basic_string<char>, boost::shared_p"
      "tr<chatv2::Core::ArionChannel> > >*]",
      "node_ && node_constructed_");
    v10 = nullptr;
  }
  v10[4] = v2;
  v25 = v2 % *((uint32_t *)a1 + 1);
  v26 = *((uint32_t *)a1 + 5);
  if ( v26 == 0 )
  {
    v47 = v25;
    v41 = v10;
    __assert2(
      "../../../../../lib/boost/unordered/detail/table.hpp",
      234,
      "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std::siz"
      "e_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<char>, boo"
      "st::shared_ptr<chatv2::Core::ArionChannel> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Core::ArionChan"
      "nel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, boost::unordered::detail::"
      "table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
      "buckets_");
    v26 = *((uint32_t *)a1 + 5);
    v10 = v41;
    v25 = v47;
  }
  v27 = (uint32_t **)(v26 + 4 * v25);
  v36 = v27;
  if ( *v27 != nullptr )
  {
    v10[3] = **v27;
    **v27 = v10 + 3;
  }
  else
  {
    v33 = *((uint32_t *)a1 + 1);
    if ( v26 == 0 )
    {
      v48 = *((uint32_t *)a1 + 1);
      v44 = v10;
      __assert2(
        "../../../../../lib/boost/unordered/detail/table.hpp",
        234,
        "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std::s"
        "ize_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<char>,"
        " boost::shared_ptr<chatv2::Core::ArionChannel> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Core::Ari"
        "onChannel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, boost::unordered::"
        "detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
        "buckets_");
      v26 = *((uint32_t *)a1 + 5);
      v10 = v44;
      v33 = v48;
    }
    v52 = v26 + 4 * v33;
    v34 = v10 + 3;
    if ( *(uint32_t *)v52 != 0 )
    {
      v49 = *(uint32_t *)(*(uint32_t *)v52 + 4) % *((uint32_t *)a1 + 1);
      if ( v26 == 0 )
      {
        v45 = v10;
        __assert2(
          "../../../../../lib/boost/unordered/detail/table.hpp",
          234,
          "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std:"
          ":size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<ch"
          "ar>, boost::shared_ptr<chatv2::Core::ArionChannel> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Cor"
          "e::ArionChannel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, boost::uno"
          "rdered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
          "buckets_");
        v26 = *((uint32_t *)a1 + 5);
        v10 = v45;
      }
      v34 = v10 + 3;
      *(uint32_t *)(v26 + 4 * v49) = v10 + 3;
    }
    *v36 = v52;
    v10[3] = *(uint32_t *)v52;
    *(uint32_t *)v52 = v34;
  }
  ++*((uint32_t *)a1 + 2);
  return v10;
}

*/
