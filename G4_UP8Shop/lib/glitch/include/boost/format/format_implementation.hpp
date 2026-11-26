// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bdbe84):
//   ../../../../../lib/glitch/include/boost/format/format_implementation.hpp
// Referenced by 1 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x1346860 .. 0x1346ad2 (626 bytes)
// Symbol:               _ZN6glotv312Glotv3Logger8WriteLogERKN5boost12basic_formatIcSt11char_traitsIcESaIcEEENS0_5Level4typeE
// Demangled:            glotv3::Glotv3Logger::WriteLog(boost::basic_format<char,std::char_traits<char>,std::allocator<char>> const&,glotv3::Glotv3Logger::Level::type)
// ============================================================================
/*
int glotv3::Glotv3Logger::WriteLog(int *a1, int a2)
{
  unsigned int v2;
  int v3;
  int i;
  int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  void *v12;
  int result;
  void *v14;
  int v15;
  int v16;
  int v17[3];
  uint32_t v18[4];

  v15 = *a1;
  v16 = -991146299 * ((a1[1] - *a1) >> 2);
  if ( v16 != 0 )
  {
    if ( a1[9] < a1[10] && (a1[13] & 2) != 0 )
      std::terminate();
    v17[0] = (int)&unk_213B814;
    v2 = *(uint32_t *)(a1[12] - 12);
    if ( v16 != 0 )
    {
      v3 = 0;
      for ( i = 0; i != v16; ++i )
      {
        v5 = v15 + v3;
        v6 = *(uint32_t *)(*(uint32_t *)(v15 + v3 + 4) - 12) + v2;
        if ( *(uint32_t *)(v15 + v3) == -2 && v6 < *(uint32_t *)(v5 + 12) )
          v6 = *(uint32_t *)(v5 + 12);
        v3 += 52;
        v2 = *(uint32_t *)(*(uint32_t *)(v5 + 8) - 12) + v6;
      }
    }
    sub_1939B80(v17, v2);
    std::string::append_str(v17, a1 + 12);
    v7 = *a1;
    if ( -991146299 * ((a1[1] - *a1) >> 2) != 0 )
    {
      v8 = 0;
      do
      {
        v9 = v7 + 52 * v8;
        std::string::append_str(v17, v9 + 4);
        if ( *(uint32_t *)v9 == -2 )
        {
          if ( (*(uint8_t *)(v9 + 48) & 8) == 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/format/format_implementation.hpp",
              234,
              "boost::basic_format<Ch, Tr, Alloc>::string_type boost::basic_format<Ch, Tr, Alloc>::str() const [with Ch ="
              " char, Tr = std::char_traits<char>, Alloc = std::allocator<char>, boost::basic_format<Ch, Tr, Alloc>::stri"
              "ng_type = std::basic_string<char>]",
              "item.pad_scheme_ & format_item_t::tabulation");
          v10 = *(uint32_t *)(v9 + 12);
          v11 = *(uint32_t *)(v17[0] - 12);
          if ( v10 > v11 )
            std::string::reserve((int)v17, v10 - v11, *(uint8_t *)(v9 + 20));
        }
        std::string::append_str(v17, v9 + 8);
        ++v8;
        v7 = *a1;
      }
      while ( v8 < -991146299 * ((a1[1] - *a1) >> 2) );
    }
    *((uint8_t *)a1 + 44) = 1;
    std::string::__construct_copy(v18, v17);
    v12 = (void *)(v17[0] - 12);
    if ( (uint32_t *)(v17[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      std::string::_Rep::_M_destroy(v12);
    }
  }
  else
  {
    std::string::__construct_copy(v18, a1 + 12);
  }
  glotv3::Glotv3Logger::WriteLog(v18, a2);
  result = v18[0];
  v14 = (void *)(v18[0] - 12);
  if ( (uint32_t *)(v18[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return std::string::_Rep::_M_destroy(v14);
  }
  return result;
}

*/
