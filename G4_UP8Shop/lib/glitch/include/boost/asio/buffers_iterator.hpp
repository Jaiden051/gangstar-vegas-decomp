// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bdc0ec):
//   ../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp
// Referenced by 1 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x136b0b0 .. 0x136b8c7 (2071 bytes)
// Symbol:               sub_136B0B0
// Demangled:            sub_136B0B0
// ============================================================================
/*
int sub_136B0B0(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  uint32_t *v4;
  unsigned int v5;
  int v6;
  char *v7;
  uint32_t *v8;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  uint32_t *i;
  int v17;
  int v18;
  uint32_t *v19;
  unsigned int v20;
  uint8_t *v21;
  uint8_t *v22;
  uint32_t *v23;
  int v24;
  uint8_t *v25;
  int *v26;
  unsigned int v27;
  unsigned int v28;
  boost::asio::basic_streambuf<std::allocator<char>> *v29;
  uint32_t *v30;
  int v31;
  uint32_t *v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  uint32_t *v37;
  unsigned int v38;
  uint32_t *v39;
  int v40;
  int *v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  uint8_t *v50;
  uint32_t *v51;
  const char *v52;
  int v54;
  uint32_t *v55;
  uint32_t *v56;
  int v57;
  uint8_t *v58;
  uint32_t *v60;
  int v61;
  uint8_t *v62;
  signed int v63;
  uint32_t *v64;
  unsigned int v65;
  unsigned int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  int v73;
  unsigned int v74;
  uint32_t v75[4];
  uint32_t v76[2];
  uint32_t v77[5];

  a1[3] = a4;
  if ( a4 != 1 )
  {
    v4 = (uint32_t *)a1[1];
    v5 = a3 + v4[5];
    if ( v5 > v4[6] )
      v5 = v4[6];
    if ( (v4[5] = v5, v4[3] = v5, *a2 != 0) && boost::system::error_code::unspecified_bool_true != nullptr || a3 == 0 )
    {
      v57 = a1[4];
      goto LABEL_7;
    }
  }
  v10 = a1[1];
  v11 = *(uint32_t *)(v10 + 8);
  v12 = *(uint32_t *)(v10 + 20);
  v63 = v12 - v11;
  v13 = v76;
  v76[1] = v12 - v11;
  if ( v12 == v11 )
    v13 = v77;
  v61 = v11;
  v60 = v13;
  v76[0] = v11;
  v14 = a1[4];
  if ( v14 <= 0 )
  {
    if ( v14 != 0 )
    {
      v65 = -v14;
      __assert2(
        "../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp",
        406,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = boo"
        "st::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
        "position_ >= abs_n && \"iterator out of bounds\"");
      if ( v60 == v76 )
      {
        v57 = 0;
        v55 = (uint32_t *)v63;
      }
      else
      {
        v57 = 0;
        v55 = (uint32_t *)v63;
        v66 = 0;
        v37 = v60;
        do
        {
          if ( v37 != v76 )
          {
            v38 = *(v37 - 1);
            v39 = v37 - 2;
            v40 = *(v37 - 2);
            if ( v38 != 0 )
            {
              v37 -= 2;
              v66 = v38;
              v55 = (uint32_t *)v38;
              v61 = v40;
            }
            else
            {
              v41 = v37 - 4;
              v64 = v37;
              while ( v39 != v76 )
              {
                v42 = *v41;
                v41 -= 2;
                v43 = v41[3];
                v39 -= 2;
                if ( v43 != 0 )
                {
                  v44 = v42;
                  v66 = v43;
                  v37 = v39;
                  v55 = (uint32_t *)v43;
                  v61 = v44;
                  goto LABEL_103;
                }
              }
              v37 = v64;
            }
          }
LABEL_103:
          if ( v65 <= v66 )
          {
            v60 = v37;
            v57 -= v65;
            v21 = (uint8_t *)(v66 - v65);
            goto LABEL_26;
          }
          v65 -= v66;
          v57 -= v66;
        }
        while ( v37 != v76 );
        v60 = v37;
        v21 = nullptr;
        if ( v65 == 0 )
          goto LABEL_26;
      }
      __assert2(
        "../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp",
        424,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = boo"
        "st::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
        "abs_n == 0 && \"iterator out of bounds\"");
      v60 = v76;
      v21 = nullptr;
    }
    else
    {
      v57 = 0;
      v55 = (uint32_t *)v63;
      v21 = nullptr;
    }
  }
  else
  {
    if ( v13 == v77 )
    {
      v50 = v77;
      __assert2(
        "../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp",
        371,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = boo"
        "st::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
        "current_ != end_ && \"iterator out of bounds\"");
    }
    if ( v63 > v14 )
    {
      v19 = v60;
      v55 = (uint32_t *)v63;
      v20 = 0;
LABEL_25:
      v21 = (uint8_t *)v14;
      v57 = v14 + v20;
      v60 = v19;
    }
    else
    {
      v14 -= v63;
      v15 = v60 + 2;
      if ( v60 + 2 == v77 )
      {
        v36 = v63;
      }
      else
      {
        v66 = (unsigned int)v77;
        v65 = v63;
        for ( i = v60; ; i = v19 )
        {
          v17 = i[2];
          v18 = i[3];
          v19 = v15;
          v61 = v17;
          if ( v14 < v18 )
          {
            v20 = v65;
            v55 = (uint32_t *)v18;
            goto LABEL_25;
          }
          v14 -= v18;
          v65 += v18;
          v15 += 2;
          if ( v77 == v15 )
            break;
        }
        v36 = v65;
      }
      if ( v14 != 0 )
      {
        v50 = v77;
        __assert2(
          "../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp",
          394,
          "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = b"
          "oost::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
          "n == 0 && \"iterator out of bounds\"");
        v57 = v36;
        v60 = v77;
        v55 = nullptr;
        v21 = nullptr;
      }
      else
      {
        v60 = v77;
        v57 = v36;
        v21 = nullptr;
        v55 = nullptr;
      }
      v61 = 0;
    }
  }
LABEL_26:
  v22 = (uint8_t *)a1[2];
  v58 = v22;
  if ( *((int *)v22 - 1) < 0 )
  {
    v62 = &v22[*((uint32_t *)v22 - 3)];
  }
  else
  {
    v50 = v21;
    sub_19397C0(a1 + 2);
    v21 = v50;
    v58 = (uint8_t *)a1[2];
    v62 = &v58[*((uint32_t *)v58 - 3)];
    if ( *((int *)v58 - 1) >= 0 )
    {
      sub_19397C0(a1 + 2);
      v21 = v50;
      v58 = (uint8_t *)a1[2];
    }
  }
  v52 = "current_ != end_ && \"iterator out of bounds\"";
LABEL_30:
  v56 = v21;
  while ( 1 )
  {
    if ( v63 == v57 )
      goto LABEL_65;
    if ( v62 == v58 )
    {
LABEL_48:
      v57 += *(uint32_t *)(a1[2] - 12);
      a1[4] = v57;
      v28 = 0;
      goto LABEL_49;
    }
    if ( *((uint8_t *)v56 + v61) == *v58 )
      break;
    v54 = v57 + 1;
LABEL_54:
    if ( v60 == v77 )
      __assert2(
        "../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp",
        316,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::increment() [with BufferSequence = boost::asio::co"
        "nst_buffers_1, ByteType = char]",
        "current_ != end_ && \"iterator out of bounds\"");
    v56 = (uint32_t *)((char *)v56 + 1);
    v57 = v54;
    if ( v56 == v55 )
    {
      if ( v60 + 2 == v77 )
      {
LABEL_63:
        v21 = nullptr;
        v60 = v77;
      }
      else
      {
        v61 = v60[2];
        v55 = (uint32_t *)v60[3];
        if ( v55 != nullptr )
        {
          v32 = (uint32_t *)v60[3];
          v30 = v60 + 2;
        }
        else
        {
          v30 = v60 + 2;
          v31 = v60[2];
          do
          {
            v30 += 2;
            if ( v30 == v77 )
            {
              v61 = v31;
              goto LABEL_63;
            }
            v31 = *v30;
            v32 = (uint32_t *)v30[1];
          }
          while ( v32 == nullptr );
          v61 = *v30;
        }
        v21 = nullptr;
        v60 = v30;
        v55 = v32;
      }
      goto LABEL_30;
    }
  }
  v23 = v56;
  v54 = v57 + 1;
  v66 = v57 + 1;
  v65 = (unsigned int)v60;
  v64 = v55;
  v24 = v61;
  v25 = v58;
  while ( 1 )
  {
    if ( (uint32_t *)v65 == v77 )
    {
      v51 = v23;
      v50 = v25;
      __assert2(
        "../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp",
        316,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::increment() [with BufferSequence = boost::asio::co"
        "nst_buffers_1, ByteType = char]",
        "current_ != end_ && \"iterator out of bounds\"");
      v25 = v50;
      v23 = v51;
    }
    v23 = (uint32_t *)((char *)v23 + 1);
    if ( v23 != v64 )
      goto LABEL_35;
    v26 = (int *)(v65 + 8);
    if ( (uint32_t *)(v65 + 8) != v77 )
    {
      v27 = v65;
      v65 += 8;
      v24 = *(uint32_t *)(v27 + 8);
      v64 = *(uint32_t **)(v27 + 12);
      v23 = nullptr;
      if ( v64 == nullptr )
      {
        do
        {
          v26 += 2;
          if ( v26 == v77 )
          {
            v65 = (unsigned int)v77;
            v23 = nullptr;
            goto LABEL_47;
          }
          v24 = *v26;
        }
        while ( v26[1] == 0 );
        v64 = (uint32_t *)v26[1];
        v65 = (unsigned int)v26;
        v23 = nullptr;
      }
LABEL_35:
      if ( ++v25 == v62 )
        goto LABEL_48;
      goto LABEL_36;
    }
    v64 = v23;
    v65 = (unsigned int)v77;
    v23 = nullptr;
LABEL_47:
    if ( ++v25 == v62 )
      goto LABEL_48;
LABEL_36:
    if ( v63 == v66 )
      break;
    ++v66;
    if ( *((uint8_t *)v23 + v24) != *v25 )
      goto LABEL_54;
  }
  if ( v58 == v25 )
    goto LABEL_54;
LABEL_65:
  v29 = (boost::asio::basic_streambuf<std::allocator<char>> *)a1[1];
  if ( *((uint32_t *)v29 + 5) - *((uint32_t *)v29 + 2) == *((uint32_t *)v29 + 8) )
  {
    v57 = -1;
    v28 = 0;
    a1[4] = -1;
    goto LABEL_49;
  }
  v73 = 0x10000;
  v67 = 512;
  a1[4] = v57;
  v33 = *((uint32_t *)v29 + 5) - *((uint32_t *)v29 + 2);
  v74 = *((uint32_t *)v29 + 8) - v33;
  v34 = v74;
  if ( v74 >= 0x10000 )
    v34 = 0x10000;
  v35 = *((uint32_t *)v29 + 11) - *((uint32_t *)v29 + 9) - v33;
  v71 = v35;
  v28 = v35;
  if ( v35 <= 0x200 )
  {
    v28 = 512;
    if ( v34 < 0x200 )
      v28 = v34;
    if ( v28 == 0 )
      goto LABEL_49;
LABEL_51:
    boost::asio::basic_streambuf<std::allocator<char>>::reserve(v29, v28);
    v77[0] = *((uint32_t *)v29 + 5);
    v77[1] = v28;
    return boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::detail::read_until_delim_string_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient*>,boost::arg<1> (*)(void)>>>>(
             *a1,
             v77,
             a1);
  }
  else
  {
    if ( v35 > v34 )
      v28 = v34;
    if ( v28 != 0 )
      goto LABEL_51;
LABEL_49:
    if ( a4 != 0 )
    {
      v29 = (boost::asio::basic_streambuf<std::allocator<char>> *)a1[1];
      goto LABEL_51;
    }
LABEL_7:
    if ( v57 == -1 )
    {
      if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
        sub_13671E0();
      v75[0] = 3;
      v75[1] = &dword_20D3F88;
    }
    else
    {
      v6 = a2[1];
      v75[0] = *a2;
      v75[1] = v6;
    }
    v7 = (char *)a1[5];
    v8 = (uint32_t *)(a1[6] + a1[7]);
    if ( ((uint8_t)v7 & 1) != 0 )
      v7 = *(char **)&v7[*v8 - 1];
    return ((int (*)(uint32_t *, uint32_t *, int, int, int, int, int, uint8_t *, uint32_t *, const char *, uint32_t *, int, uint32_t *, uint32_t *, int, uint8_t *, uint32_t *, uint32_t *, int, uint8_t *, signed int, uint32_t *, unsigned int, unsigned int, int, int, int, int, unsigned int, int, int, unsigned int))v7)(
             v8,
             v75,
             v45,
             v46,
             v47,
             v48,
             v49,
             v50,
             v51,
             v52,
             a2,
             v54,
             v55,
             v56,
             v57,
             v58,
             a1,
             v60,
             v61,
             v62,
             v63,
             v64,
             v65,
             v66,
             v67,
             v68,
             v69,
             v70,
             v71,
             v72,
             v73,
             v74);
  }
}

*/
