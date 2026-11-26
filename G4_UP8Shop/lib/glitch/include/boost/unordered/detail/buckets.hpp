// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bdc020):
//   ../../../../../lib/glitch/include/boost/unordered/detail/buckets.hpp
// Referenced by 1 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x1354f10 .. 0x135534d (1085 bytes)
// Symbol:               _ZN5boost9unordered6detail10table_implINS1_3mapISaISt4pairIKSsiEESsiNS_4hashISsEESt8equal_toISsEEEEixERS5_
// Demangled:            boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,int>>,std::string,int,boost::hash<std::string>,std::equal_to<std::string>>>::operator[](std::string const&)
// ============================================================================
/*
int boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,int>>,std::string,int,boost::hash<std::string>,std::equal_to<std::string>>>::operator[](
        boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const, int>>, std::string, int, boost::hash<std::string>, std::equal_to<std::string>>> *a1,
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
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  uint32_t **v16;
  unsigned int v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t **v21;
  int v22;
  int v23;
  int *v24;
  int v26;
  int *v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  uint32_t *v32;
  int v33;
  int v34;
  uint32_t **v35;
  int v36;
  uint8_t v37[32];

  v2 = 0;
  v36 = 0;
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
    v36 = v2 % *((uint32_t *)a1 + 1);
  }
  v6 = 0;
  if ( *((uint32_t *)a1 + 2) != 0 )
  {
    v26 = *((uint32_t *)a1 + 5);
    if ( v26 == 0 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
        234,
        "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std::s"
        "ize_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<char>,"
        " int> >, std::basic_string<char>, int, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<ch"
        "ar> > >, boost::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::si"
        "ze_t = unsigned int]",
        "buckets_");
      v26 = *((uint32_t *)a1 + 5);
    }
    v6 = 0;
    v27 = *(int **)(v26 + 4 * v36);
    if ( v27 != nullptr )
    {
      v28 = *v27;
      if ( v28 != 0 )
        v6 = v28 - 8;
    }
  }
  while ( v6 != 0 )
  {
    v7 = *(uint32_t *)(v6 + 12);
    if ( v2 != v7 )
    {
      if ( v7 % *((uint32_t *)a1 + 1) != v36 )
        break;
LABEL_8:
      v8 = *(uint32_t *)(v6 + 8);
      if ( v8 == 0 )
        break;
      goto LABEL_40;
    }
    if ( *((uint32_t *)*a2 - 3) != *(uint32_t *)(*(uint32_t *)v6 - 12) )
      goto LABEL_8;
    if ( memcmp(*a2, *(const void **)v6, *((uint32_t *)*a2 - 3)) == 0 )
      return v6;
    v8 = *(uint32_t *)(v6 + 8);
    if ( v8 == 0 )
      break;
LABEL_40:
    v6 = v8 - 8;
  }
  std::string::__construct_copy(v37, a2);
  v9 = operator new(0x10u);
  v6 = v9;
  if ( v9 != 0 )
  {
    *(uint32_t *)(v9 + 8) = 0;
    *(uint32_t *)(v9 + 12) = 0;
    std::string::__construct_copy(v9, v37);
  }
  if ( v6 != -4 )
    *(uint32_t *)(v6 + 4) = 0;
  std::string::~string(v37);
  v10 = *((uint32_t *)a1 + 2);
  v11 = v10 + 1;
  if ( *((uint32_t *)a1 + 5) != 0 )
  {
    if ( v11 > *((uint32_t *)a1 + 4) )
    {
      v12 = (v10 >> 1) + v10;
      if ( v12 >= v11 )
        v11 = v12;
      v13 = sub_134C6F0((float *)a1 + 3, v11);
      if ( v13 != *((uint32_t *)a1 + 1) )
      {
        if ( *((uint32_t *)a1 + 5) == 0 )
          __assert2(
            "../../../../../lib/glitch/include/boost/unordered/detail/unique.hpp",
            591,
            "void boost::unordered::detail::table_impl<Types>::rehash_impl(std::size_t) [with Types = boost::unordered::d"
            "etail::map<std::allocator<std::pair<const std::basic_string<char>, int> >, std::basic_string<char>, int, boo"
            "st::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, std::size_t = unsigned int]",
            "this->buckets_");
        boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const,int>>,std::string,int,boost::hash<std::string>,std::equal_to<std::string>>>::create_buckets(
          a1,
          v13);
        v14 = *((uint32_t *)a1 + 5);
        v15 = *((uint32_t *)a1 + 1);
        if ( v14 == 0 )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
            234,
            "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(st"
            "d::size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_strin"
            "g<char>, int> >, std::basic_string<char>, int, boost::hash<std::basic_string<char> >, std::equal_to<std::bas"
            "ic_string<char> > >, boost::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_"
            "bucket*, std::size_t = unsigned int]",
            "buckets_");
          v14 = *((uint32_t *)a1 + 5);
        }
        v16 = (uint32_t **)(v14 + 4 * v15);
        v17 = v2;
        while ( 1 )
        {
          v18 = *v16;
          if ( *v16 == nullptr )
            break;
          while ( 1 )
          {
            v19 = v18[1] % *((uint32_t *)a1 + 1);
            v20 = *((uint32_t *)a1 + 5);
            if ( v20 == 0 )
            {
              v33 = v18[1] % *((uint32_t *)a1 + 1);
              v35 = v16;
              __assert2(
                "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
                234,
                "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucke"
                "t(std::size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::bas"
                "ic_string<char>, int> >, std::basic_string<char>, int, boost::hash<std::basic_string<char> >, std::equal"
                "_to<std::basic_string<char> > >, boost::unordered::detail::table<Types>::bucket_pointer = boost::unorder"
                "ed::detail::ptr_bucket*, std::size_t = unsigned int]",
                "buckets_");
              v16 = v35;
              v19 = v33;
              v20 = *((uint32_t *)a1 + 5);
            }
            v21 = (uint32_t **)(v20 + 4 * v19);
            if ( *v21 == nullptr )
              break;
            *v16 = (uint32_t *)*v18;
            *v18 = **v21;
            **v21 = v18;
            v18 = *v16;
            if ( *v16 == nullptr )
              goto LABEL_28;
          }
          *v21 = v16;
          v16 = (uint32_t **)v18;
        }
LABEL_28:
        v2 = v17;
      }
    }
  }
  else
  {
    v29 = sub_134C6F0((float *)a1 + 3, v11);
    if ( v29 < *((uint32_t *)a1 + 1) )
      v29 = *((uint32_t *)a1 + 1);
    boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const,int>>,std::string,int,boost::hash<std::string>,std::equal_to<std::string>>>::create_buckets(
      a1,
      v29);
  }
  if ( v6 == 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/unordered/detail/buckets.hpp",
      383,
      "boost::unordered::detail::node_constructor<NodeAlloc>::node_pointer boost::unordered::detail::node_constructor<Nod"
      "eAlloc>::release() [with NodeAlloc = std::allocator<boost::unordered::detail::ptr_node<std::pair<const std::basic_"
      "string<char>, int> > >, boost::unordered::detail::node_constructor<NodeAlloc>::node_pointer = boost::unordered::de"
      "tail::ptr_node<std::pair<const std::basic_string<char>, int> >*]",
      "node_ && node_constructed_");
  *(uint32_t *)(v6 + 12) = v2;
  v22 = v2 % *((uint32_t *)a1 + 1);
  v23 = *((uint32_t *)a1 + 5);
  if ( v23 == 0 )
  {
    v34 = v2 % *((uint32_t *)a1 + 1);
    __assert2(
      "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
      234,
      "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std::siz"
      "e_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<char>, int"
      "> >, std::basic_string<char>, int, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > "
      ">, boost::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
      "buckets_");
    v22 = v34;
    v23 = *((uint32_t *)a1 + 5);
  }
  v24 = (int *)(v23 + 4 * v22);
  if ( *v24 != 0 )
  {
    *(uint32_t *)(v6 + 8) = *(uint32_t *)*v24;
    *(uint32_t *)*v24 = v6 + 8;
  }
  else
  {
    v30 = sub_134C680((uint32_t *)a1 + 5, *((uint32_t *)a1 + 1));
    v31 = v6 + 8;
    if ( *(uint32_t *)v30 != 0 )
    {
      v32 = (uint32_t *)sub_134C680((uint32_t *)a1 + 5, *(uint32_t *)(*(uint32_t *)v30 + 4) % *((uint32_t *)a1 + 1));
      v31 = v6 + 8;
      *v32 = v6 + 8;
    }
    *v24 = v30;
    *(uint32_t *)(v6 + 8) = *(uint32_t *)v30;
    *(uint32_t *)v30 = v31;
  }
  ++*((uint32_t *)a1 + 2);
  return v6;
}

*/
