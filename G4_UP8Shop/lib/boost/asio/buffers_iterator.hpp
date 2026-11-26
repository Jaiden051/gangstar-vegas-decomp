// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd7ae4):
//   ../../../../../lib/boost/asio/buffers_iterator.hpp
// Referenced by 4 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x125f9c0 .. 0x125feff (1343 bytes)
// Symbol:               _ZN6chatv212Connectivity9TCPClient6OnReadERKN5boost6system10error_codeEj
// Demangled:            chatv2::Connectivity::TCPClient::OnRead(boost::system::error_code const&,unsigned int)
// ============================================================================
/*
const boost::system::error_code::Self *chatv2::Connectivity::TCPClient::OnRead(
        chatv2::Connectivity::TCPClient *this,
        const boost::system::error_code::Self *a2,
        signed int a3)
{
  const boost::system::error_code::Self *result;
  signed int v4;
  uint32_t *v5;
  int v6;
  int v7;
  signed int v8;
  uint8_t *v9;
  signed int v10;
  signed int v11;
  uint8_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint8_t *v18;
  uint8_t *v19;
  uint32_t *v20;
  unsigned int v21;
  unsigned int v22;
  uint32_t *v23;
  char *v24;
  uint8_t *v25;
  int v26;
  int v27;
  uint32_t *v28;
  uint32_t *v29;
  signed int *v30;
  int v31;
  int v32;
  uint8_t *v33;
  signed int v34;
  signed int v35;
  unsigned int v36;
  signed int v37;
  void (*v38)(char *, int *, char *);
  int v39;
  int v40;
  char v41;
  uint32_t v42[2];
  int v43;
  int v44;
  uint32_t v45[2];
  uint8_t v46[20];

  result = a2;
  v4 = a3;
  if ( *(uint32_t *)a2 != 0 && boost::system::error_code::unspecified_bool_true != nullptr )
  {
    v14 = *((uint32_t *)this + 25);
    if ( v14 != 0 && boost::function1<void,boost::system::error_code::Self const&>::dummy::nonnull != nullptr )
      return (const boost::system::error_code::Self *)(*(int (**)(char *, const boost::system::error_code::Self *))((v14 & 0xFFFFFFFE) + 4))(
                                                  (char *)this + 104,
                                                  a2);
  }
  else
  {
    v5 = v45;
    v6 = *((uint32_t *)this + 41) - *((uint32_t *)this + 38);
    v31 = *((uint32_t *)this + 38);
    v7 = v6;
    v45[0] = v31;
    v37 = v6;
    if ( v6 == 0 )
      v5 = v46;
    v45[1] = v6;
    v8 = a3;
    if ( a3 <= 0 )
    {
      v35 = 0;
      if ( a3 != 0 )
      {
        v36 = -a3;
        v29 = v5;
        __assert2(
          "../../../../../lib/boost/asio/buffers_iterator.hpp",
          406,
          "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = b"
          "oost::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
          "position_ >= abs_n && \"iterator out of bounds\"");
        v20 = v29;
        if ( v29 != v45 )
        {
          v21 = 0;
          do
          {
            if ( v20 != v45 )
            {
              v22 = *(v20 - 1);
              if ( v22 != 0 )
              {
                v20 -= 2;
                v21 = v22;
              }
              else
              {
                v23 = v20 - 2;
                while ( v23 != v45 )
                {
                  v23 -= 2;
                  if ( v23[1] != 0 )
                  {
                    v20 = v23;
                    v21 = v23[1];
                    break;
                  }
                }
              }
            }
            if ( v36 <= v21 )
            {
              v35 -= v36;
              goto LABEL_15;
            }
            v36 -= v21;
            v35 -= v21;
          }
          while ( v20 != v45 );
          if ( v36 == 0 )
            goto LABEL_15;
        }
        __assert2(
          "../../../../../lib/boost/asio/buffers_iterator.hpp",
          424,
          "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = b"
          "oost::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
          "abs_n == 0 && \"iterator out of bounds\"");
      }
    }
    else
    {
      if ( v5 == (uint32_t *)v46 )
      {
        v28 = v5;
        __assert2(
          "../../../../../lib/boost/asio/buffers_iterator.hpp",
          371,
          "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = b"
          "oost::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
          "current_ != end_ && \"iterator out of bounds\"");
        v4 = a3;
        v5 = v28;
      }
      if ( v37 > v4 )
      {
        v34 = 0;
LABEL_14:
        v35 = v8 + v34;
      }
      else
      {
        v9 = v5 + 2;
        v8 = v4 - v37;
        if ( v5 + 2 == (uint32_t *)v46 )
        {
          v35 = v37;
        }
        else
        {
          v32 = v7;
          v10 = v37;
          while ( 1 )
          {
            v11 = v5[3];
            if ( v11 > v8 )
            {
              v34 = v10;
              v7 = v32;
              goto LABEL_14;
            }
            v8 -= v11;
            v10 += v11;
            if ( v9 + 8 == v46 )
              break;
            v5 = v9;
            v9 += 8;
          }
          v35 = v10;
          v7 = v32;
        }
        if ( v8 != 0 )
          __assert2(
            "../../../../../lib/boost/asio/buffers_iterator.hpp",
            394,
            "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence ="
            " boost::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
            "n == 0 && \"iterator out of bounds\"");
      }
    }
LABEL_15:
    v12 = v45;
    if ( v37 == 0 )
      v12 = v46;
    if ( v35 != 0 )
    {
      v24 = &v41;
      v30 = (signed int *)sub_1938930(v35, 0);
      v39 = 0;
      v33 = v30 + 3;
      v40 = v7;
      v15 = 0;
      v25 = v12;
      v16 = v31;
      v17 = 0;
      do
      {
        v33[v17] = *(uint8_t *)(v16 + v15);
        if ( v25 == v46 )
        {
          v27 = v15;
          v26 = v16;
          __assert2(
            "../../../../../lib/boost/asio/buffers_iterator.hpp",
            316,
            "void boost::asio::buffers_iterator<BufferSequence, ByteType>::increment() [with BufferSequence = boost::asio"
            "::const_buffers_1, ByteType = char]",
            "current_ != end_ && \"iterator out of bounds\"");
          v16 = v26;
          v15 = v27;
        }
        ++v39;
        if ( ++v15 == v40 )
        {
          if ( v25 + 8 == v46 )
          {
            v40 = v15;
            v25 = v46;
            v15 = 0;
          }
          else
          {
            v16 = *((uint32_t *)v25 + 2);
            if ( *((uint32_t *)v25 + 3) != 0 )
            {
              v40 = *((uint32_t *)v25 + 3);
              v25 += 8;
              v15 = 0;
            }
            else
            {
              v18 = v25 + 16;
              do
              {
                v19 = v18;
                if ( v18 == v46 )
                {
                  v15 = 0;
                  v40 = 0;
                  v25 = v46;
                  goto LABEL_35;
                }
                v16 = *(uint32_t *)v18;
                v18 += 8;
              }
              while ( *((uint32_t *)v18 - 1) == 0 );
              v40 = *((uint32_t *)v18 - 1);
              v25 = v19;
              v15 = 0;
            }
          }
        }
LABEL_35:
        v17 = v39;
      }
      while ( v35 != v39 );
      if ( v30 != dword_213B808 )
      {
        v30[2] = 0;
        *v30 = v35;
        *((uint8_t *)v30 + v35 + 12) = 0;
      }
    }
    else
    {
      v33 = &unk_213B814;
    }
    v42[0] = v33;
    if ( *((uint32_t *)this + 13) != 0 && boost::function1<void,std::string>::dummy::nonnull != nullptr )
    {
      std::string::__construct_copy(&v43, v42);
      v13 = *((uint32_t *)this + 13);
      if ( v13 == 0 )
      {
        sub_1243080(v46);
        std::terminate();
      }
      v38 = *(void (**)(char *, int *, char *))((v13 & 0xFFFFFFFE) + 4);
      std::string::__construct_copy(&v44, &v43);
      v38((char *)this + 56, &v44, v24);
      std::string::~string(&v44);
      std::string::~string(&v43);
    }
    return (const boost::system::error_code::Self *)std::string::~string(v42);
  }
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x1275120 .. 0x1275b65 (2629 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient10SetContentEN5boost10shared_ptrINS0_12HTTPResponseEEE
// Demangled:            chatv2::Connectivity::HTTPClient::SetContent(boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// ============================================================================
/*
int chatv2::Connectivity::HTTPClient::SetContent(uint32_t *a1, int a2)
{
  chatv2::Connectivity::HTTPResponse *v2;
  bool v3;
  int v4;
  chatv2::Connectivity::HTTPResponse **v5;
  int ContentLength;
  chatv2::Connectivity::HTTPResponse **v7;
  int v8;
  int v9;
  chatv2::Connectivity::HTTPResponse **v10;
  chatv2::Connectivity::HTTPResponse *v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  size_t v15;
  char v16;
  int v17;
  size_t v18;
  uint8_t *v19;
  char v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  size_t v27;
  char v28;
  void *v29;
  void *v30;
  void *v31;
  chatv2::Connectivity::HTTPResponse *v32;
  int result;
  char *v34;
  chatv2::Connectivity::HTTPResponse *v35;
  chatv2::Connectivity::HTTPResponse *v36;
  chatv2::Connectivity::HTTPResponse **v37;
  chatv2::Connectivity::HTTPResponse **v38;
  unsigned int v39;
  unsigned int v40;
  chatv2::Connectivity::HTTPResponse **v41;
  int v42;
  int v43;
  size_t v44;
  chatv2::Connectivity::HTTPResponse *v45;
  char v46;
  char v47;
  chatv2::Connectivity::HTTPResponse *v48;
  int v49;
  chatv2::Connectivity::HTTPResponse **v50;
  int v51;
  uint32_t *v52;
  chatv2::Connectivity::HTTPResponse *v53;
  chatv2::Connectivity::HTTPResponse *v54;
  uint8_t *v55;
  size_t v56;
  unsigned int v57;
  int v58;
  int v59;
  int v60;
  size_t v61;
  int v62;
  const char *v63;
  size_t v64;
  int v65;
  int v66;
  uint32_t *v67;
  uint32_t v68[4];
  int v69[3];
  int v70;
  uint32_t v71[2];
  chatv2::Connectivity::HTTPResponse *v72;
  int v73[4];

  v2 = *(chatv2::Connectivity::HTTPResponse **)a2;
  v3 = *(uint32_t *)a2 == 0;
  v53 = (chatv2::Connectivity::HTTPResponse *)a1[38];
  v62 = a1[41] - (uint32_t)v53;
  v4 = v62;
  v71[0] = v53;
  v71[1] = v62;
  if ( v3 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
      "px != 0");
    v2 = *(chatv2::Connectivity::HTTPResponse **)a2;
  }
  v5 = (chatv2::Connectivity::HTTPResponse **)v71;
  ContentLength = chatv2::Connectivity::HTTPResponse::GetContentLength(v2);
  if ( v62 == 0 )
    v5 = &v72;
  if ( ContentLength <= 0 )
  {
    v59 = 0;
    if ( ContentLength != 0 )
    {
      v57 = -ContentLength;
      __assert2(
        "../../../../../lib/boost/asio/buffers_iterator.hpp",
        406,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = boo"
        "st::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
        "position_ >= abs_n && \"iterator out of bounds\"");
      if ( v5 != v71 )
      {
        v39 = 0;
        do
        {
          if ( v5 != v71 )
          {
            v40 = (unsigned int)*(v5 - 1);
            if ( v40 != 0 )
            {
              v5 -= 2;
              v39 = v40;
            }
            else
            {
              v41 = v5 - 2;
              while ( v41 != v71 )
              {
                v41 -= 2;
                if ( v41[1] != nullptr )
                {
                  v5 = v41;
                  v39 = (unsigned int)v41[1];
                  break;
                }
              }
            }
          }
          if ( v39 >= v57 )
          {
            v4 = v62;
            v59 -= v57;
            goto LABEL_16;
          }
          v57 -= v39;
          v59 -= v39;
        }
        while ( v5 != v71 );
        v4 = v62;
        if ( v57 == 0 )
          goto LABEL_16;
      }
      __assert2(
        "../../../../../lib/boost/asio/buffers_iterator.hpp",
        424,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = boo"
        "st::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
        "abs_n == 0 && \"iterator out of bounds\"");
    }
  }
  else
  {
    if ( v5 == &v72 )
    {
      v49 = ContentLength;
      __assert2(
        "../../../../../lib/boost/asio/buffers_iterator.hpp",
        371,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = boo"
        "st::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
        "current_ != end_ && \"iterator out of bounds\"");
      ContentLength = v49;
    }
    if ( ContentLength < v62 )
    {
      v58 = 0;
LABEL_15:
      v59 = ContentLength + v58;
    }
    else
    {
      ContentLength -= v62;
      v7 = v5 + 2;
      if ( v5 + 2 == &v72 )
      {
        v59 = v62;
      }
      else
      {
        v8 = v62;
        while ( 1 )
        {
          v9 = (int)v5[3];
          if ( v9 > ContentLength )
          {
            v58 = v8;
            v4 = v62;
            goto LABEL_15;
          }
          ContentLength -= v9;
          v8 += v9;
          if ( v7 + 2 == &v72 )
            break;
          v5 = v7;
          v7 += 2;
        }
        v59 = v8;
        v4 = v62;
      }
      if ( ContentLength != 0 )
        __assert2(
          "../../../../../lib/boost/asio/buffers_iterator.hpp",
          394,
          "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = b"
          "oost::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
          "n == 0 && \"iterator out of bounds\"");
    }
  }
LABEL_16:
  v10 = (chatv2::Connectivity::HTTPResponse **)v71;
  if ( v62 == 0 )
    v10 = &v72;
  if ( v59 == 0 )
  {
    v55 = &unk_213B814;
    goto LABEL_20;
  }
  v52 = (uint32_t *)sub_1938930(v59, 0);
  v65 = 0;
  v55 = v52 + 3;
  v35 = v53;
  v36 = nullptr;
  v50 = v10;
  v54 = (chatv2::Connectivity::HTTPResponse *)v4;
  while ( 1 )
  {
LABEL_72:
    v55[v65] = *((uint8_t *)v36 + (uint32_t)v35);
    if ( v50 == &v72 )
    {
      v48 = v36;
      v45 = v35;
      __assert2(
        "../../../../../lib/boost/asio/buffers_iterator.hpp",
        316,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::increment() [with BufferSequence = boost::asio::co"
        "nst_buffers_1, ByteType = char]",
        "current_ != end_ && \"iterator out of bounds\"");
      v35 = v45;
      v36 = v48;
    }
    ++v65;
    v36 = (chatv2::Connectivity::HTTPResponse *)((char *)v36 + 1);
    if ( v36 == v54 )
    {
      if ( v50 + 2 != &v72 )
        break;
      v54 = v36;
      v36 = nullptr;
      v50 = &v72;
    }
LABEL_71:
    if ( v65 == v59 )
      goto LABEL_81;
  }
  v35 = v50[2];
  v36 = v50[3];
  if ( v36 != nullptr )
  {
    v54 = v50[3];
    v50 += 2;
    v36 = nullptr;
    goto LABEL_71;
  }
  v37 = v50 + 4;
  while ( 1 )
  {
    v38 = v37;
    if ( v37 == &v72 )
      break;
    v35 = *v37;
    v37 += 2;
    if ( *(v37 - 1) != nullptr )
    {
      v50 = v38;
      v54 = *(v37 - 1);
      goto LABEL_71;
    }
  }
  v54 = nullptr;
  v50 = &v72;
  if ( v65 != v59 )
    goto LABEL_72;
LABEL_81:
  if ( v52 != dword_213B808 )
  {
    v52[2] = 0;
    *v52 = v65;
    *((uint8_t *)v52 + v65 + 12) = 0;
  }
LABEL_20:
  v67 = v55;
  v11 = *(chatv2::Connectivity::HTTPResponse **)a2;
  if ( *(uint32_t *)a2 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
      "px != 0");
    v11 = *(chatv2::Connectivity::HTTPResponse **)a2;
  }
  v12 = chatv2::Connectivity::HTTPResponse::GetContentLength(v11);
  v13 = a1[41];
  if ( a1[39] < v13 )
  {
    a1[37] = a1[45];
    a1[39] = v13;
  }
  v14 = a1[38] + v12;
  if ( v13 < v14 )
    v14 = v13;
  a1[38] = v14;
  v15 = 0;
  v69[0] = (int)&unk_213B814;
  sub_1939D80((int)v69, 0x80u, 0);
  v16 = aHttpSetContent[0];
  v63 = " HTTP Set content , content: {0}\n";
  v51 = 0;
  while ( 1 )
  {
    v19 = v63 + 1;
    if ( v16 != 123 )
    {
      v17 = v69[0];
      v18 = v15 + 1;
      if ( v15 + 1 > *(uint32_t *)(v69[0] - 12) )
      {
        v46 = v16;
        sub_1939D80((int)v69, v15 + 65, 0);
        v17 = v69[0];
        v18 = v15 + 1;
        v16 = v46;
      }
      if ( *(int *)(v17 - 4) >= 0 )
      {
        v47 = v16;
        v44 = v18;
        sub_19397C0(v69);
        v17 = v69[0];
        v18 = v44;
        v16 = v47;
      }
      *(uint8_t *)(v17 + v15) = v16;
      ++v63;
      v15 = v18;
LABEL_32:
      v16 = *v63;
      if ( *v63 == 0 )
        goto LABEL_51;
      continue;
    }
    v20 = v63[1];
    if ( v20 == 123 )
    {
      v42 = v69[0];
      if ( v15 + 2 > *(uint32_t *)(v69[0] - 12) )
      {
        sub_1939D80((int)v69, v15 + 66, 0);
        v42 = v69[0];
        v61 = v15 + 1;
        if ( *(int *)(v69[0] - 4) < 0 )
          goto LABEL_100;
      }
      else
      {
        v61 = v15 + 1;
        if ( *(int *)(v69[0] - 4) < 0 )
        {
LABEL_100:
          *(uint8_t *)(v42 + v15) = 123;
          v43 = v69[0];
          if ( *(int *)(v69[0] - 4) >= 0 )
          {
            sub_19397C0(v69);
            v43 = v69[0];
          }
          v63 += 2;
          v15 += 2;
          *(uint8_t *)(v43 + v61) = 123;
          goto LABEL_32;
        }
      }
      sub_19397C0(v69);
      v42 = v69[0];
      goto LABEL_100;
    }
    if ( v20 == 0 )
      goto LABEL_61;
    v64 = v15;
    v21 = 1;
    v22 = 0;
    while ( 1 )
    {
      v20 = *v19;
      if ( (uint8_t)(*v19 - 48) > 9u )
        break;
      v23 = v21 * v22;
      ++v19;
      v21 *= 10;
      v22 = v23 + v20 - 48;
      if ( *v19 == 0 )
      {
        v24 = v22;
        v20 = 0;
        v15 = v64;
        goto LABEL_40;
      }
    }
    v24 = v22;
    v15 = v64;
    if ( v21 == 1 )
LABEL_61:
      v24 = v51++;
    if ( v20 == 58 )
    {
      v20 = v19[1];
      if ( v20 == 120 || v20 == 88 )
      {
        v20 = v19[2];
        v63 = v19 + 3;
      }
      else
      {
        v63 = v19 + 2;
      }
    }
    else
    {
LABEL_40:
      v63 = v19 + 1;
    }
    if ( v20 != 125 )
      break;
    if ( v24 != 0 )
    {
      sub_1939D80((int)v69, v15, 0);
      goto LABEL_32;
    }
    v60 = *(v67 - 3);
    if ( v15 + v60 > *(uint32_t *)(v69[0] - 12) )
    {
      sub_1939D80((int)v69, v15 + v60 + 64, 0);
      v60 = *(v67 - 3);
    }
    if ( v60 == 0 )
      goto LABEL_32;
    v25 = 0;
    v56 = v15;
    do
    {
      v26 = v69[0];
      v27 = v25 + v56;
      if ( *(int *)(v69[0] - 4) >= 0 )
      {
        sub_19397C0(v69);
        v26 = v69[0];
      }
      v28 = *((uint8_t *)v67 + v25++);
      *(uint8_t *)(v26 + v27) = v28;
    }
    while ( v25 != v60 );
    v15 = v25 + v56;
    v16 = *v63;
    if ( *v63 == 0 )
      goto LABEL_51;
  }
  sub_1939D80((int)v69, v15, 0);
LABEL_51:
  sub_1939D80((int)v69, v15, 0);
  std::string::__construct_copy(v68, v69);
  v29 = (void *)(v69[0] - 12);
  if ( (uint32_t *)(v69[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v69[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy(v29);
  }
  std::string::__construct_from_cstr((int)&v70, "ChatLib", (int)&v66);
  chatv2::Utils::Log(
    3,
    0,
    &v70,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPClient.cpp",
    200,
    v68);
  v30 = (void *)(v70 - 12);
  if ( (uint32_t *)(v70 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v70 - 4), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy(v30);
  }
  v31 = (void *)(v68[0] - 12);
  if ( (uint32_t *)(v68[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v68[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy(v31);
  }
  v32 = *(chatv2::Connectivity::HTTPResponse **)a2;
  if ( *(uint32_t *)a2 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPResponse*]",
      "px != 0");
    v32 = *(chatv2::Connectivity::HTTPResponse **)a2;
  }
  chatv2::Connectivity::HTTPResponse::SetContent(v32, &v67);
  v72 = *(chatv2::Connectivity::HTTPResponse **)a2;
  v73[0] = *(uint32_t *)(a2 + 4);
  if ( v73[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v73[0] + 4), 1);
  chatv2::Connectivity::HTTPClient::OnReadEnded(a1, &v72);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v73);
  result = (int)v67;
  v34 = (char *)(v67 - 3);
  if ( v67 - 3 != dword_213B808 && __sync_fetch_and_add(v67 - 1, 0xFFFFFFFF) <= 0 )
    return std::string::_Rep::_M_destroy(v34);
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x1280850 .. 0x12811c6 (2422 bytes)
// Symbol:               _ZN5boost4asio6detail26read_until_delim_string_opINS0_19basic_stream_socketINS0_2ip3tcpENS0_21stream_socket_serviceIS5_EEEESaIcENS_8functionIFvRKNS_6system10error_codeEjEEEEclESE_ji
// Demangled:            boost::asio::detail::read_until_delim_string_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::function<void ()(boost::system::error_code const&,unsigned int)>>::operator()(boost::system::error_code const&,unsigned int,int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x128af40 .. 0x128b9db (2715 bytes)
// Symbol:               _ZN5boost4asio6detail26read_until_delim_string_opINS0_3ssl6streamINS0_19basic_stream_socketINS0_2ip3tcpENS0_21stream_socket_serviceIS7_EEEEEESaIcENS_8functionIFvRKNS_6system10error_codeEjEEEEclESH_ji
// Demangled:            boost::asio::detail::read_until_delim_string_op<boost::asio::ssl::stream<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>>,std::allocator<char>,boost::function<void ()(boost::system::error_code const&,unsigned int)>>::operator()(boost::system::error_code const&,unsigned int,int)
// ============================================================================
