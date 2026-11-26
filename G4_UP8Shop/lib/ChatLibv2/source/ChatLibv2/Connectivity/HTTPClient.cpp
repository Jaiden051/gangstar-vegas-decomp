// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd80e4):
//   F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPClient.cpp
// Referenced by 7 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"
// Referencing Function: 0x1274100 .. 0x127487c (1916 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient6DoReadEv
// Demangled:            chatv2::Connectivity::HTTPClient::DoRead(void)
// ============================================================================
int (*chatv2::Connectivity::HTTPClient::DoRead(
        chatv2::Connectivity::HTTPClient::Self *self,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        unsigned int a32,
        int a33))(int *, int *, int)
{
  size_t v33;
  char v34;
  int v35;
  size_t v36;
  uint8_t *v37;
  char v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  uint32_t *v44;
  int v45;
  size_t v46;
  char v47;
  void *v48;
  void *v49;
  void *v50;
  chatv2::Connectivity::HTTPClient::Self *v51;
  int v52;
  int v53;
  int (*result)(int *, int *, int);
  int v55;
  uint32_t *v56;
  int v57;
  size_t v58;
  char v59;
  int v60;
  uint32_t *v61;
  int v62;
  size_t v63;
  char v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  size_t v74;
  uint32_t *v75;
  int v76;
  uint32_t *v77;
  uint32_t *v78;
  char v79;
  char v80;
  int v81;
  uint32_t *v82;
  uint32_t *v83;
  uint32_t *v84;
  int v85;
  size_t v86;
  size_t v87;
  const char *v88;
  size_t v89;
  void (*v90)(int, char *, void *, uint32_t *, int, int, int, int, int, int, int, int, int, uint32_t *, uint32_t *, uint32_t *, int, size_t, size_t, uint32_t, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int);
  int v91;
  int v92;
  int v93;
  int v94;
  uint32_t v95[4];
  uint32_t v96[4];
  int v97;
  int v98;
  int v99;
  int v100;
  uint32_t v101[7];

  v33 = 0;
  v84 = (uint32_t *)((char *)self + 120);
  v83 = (uint32_t *)((char *)self + 116);
  v82 = (uint32_t *)((char *)self + 8);
  v97 = (int)(uintptr_t)(&unk_213B814);
  sub_1939D80((int)(uintptr_t)(&v97), 0x80u, 0);
  v85 = 0;
  v34 = aHttpReadIdenti[0];
  v88 = " HTTP Read, identifeir: {0}, host: {1}, m_port: {2}\n";
  while ( 1 )
  {
    v37 = (uint8_t *)(v88 + 1);
    if ( v34 != 123 )
    {
      v35 = v97;
      v36 = v33 + 1;
      if ( v33 + 1 > *(uint32_t *)(v97 - 12) )
      {
        v79 = v34;
        sub_1939D80((int)(uintptr_t)(&v97), v33 + 65, 0);
        v35 = v97;
        v36 = v33 + 1;
        v34 = v79;
      }
      if ( *(int *)(v35 - 4) >= 0 )
      {
        v80 = v34;
        v74 = v36;
        sub_19397C0(&v97);
        v35 = v97;
        v36 = v74;
        v34 = v80;
      }
      *(uint8_t *)(v35 + v33) = v34;
      ++v88;
      v33 = v36;
      goto LABEL_7;
    }
    v38 = v88[1];
    if ( v38 == 123 )
    {
      v65 = v97;
      if ( v33 + 2 > *(uint32_t *)(v97 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v97), v33 + 66, 0);
        v65 = v97;
        v87 = v33 + 1;
        if ( *(int *)(v97 - 4) < 0 )
          goto LABEL_67;
      }
      else
      {
        v87 = v33 + 1;
        if ( *(int *)(v97 - 4) < 0 )
        {
LABEL_67:
          *(uint8_t *)(v65 + v33) = 123;
          v66 = v97;
          if ( *(int *)(v97 - 4) >= 0 )
          {
            sub_19397C0(&v97);
            v66 = v97;
          }
          v88 += 2;
          v33 += 2;
          *(uint8_t *)(v66 + v87) = 123;
          goto LABEL_7;
        }
      }
      sub_19397C0(&v97);
      v65 = v97;
      goto LABEL_67;
    }
    if ( v38 == 0 )
      goto LABEL_41;
    v89 = v33;
    v39 = 1;
    v40 = 0;
    while ( 1 )
    {
      v38 = *v37;
      if ( (uint8_t)(*v37 - 48) > 9u )
        break;
      v41 = v39 * v40;
      ++v37;
      v39 *= 10;
      v40 = v41 + v38 - 48;
      if ( *v37 == 0 )
      {
        v42 = v40;
        v38 = 0;
        v33 = v89;
        goto LABEL_15;
      }
    }
    v42 = v40;
    v33 = v89;
    if ( v39 == 1 )
LABEL_41:
      v42 = v85++;
    if ( v38 == 58 )
    {
      v38 = v37[1];
      if ( v38 == 120 || v38 == 88 )
      {
        v38 = v37[2];
        v88 = (const char *)(v37 + 3);
      }
      else
      {
        v88 = (const char *)(v37 + 2);
      }
    }
    else
    {
LABEL_15:
      v88 = (const char *)(v37 + 1);
    }
    if ( v38 != 125 )
      break;
    if ( v42 == 1 )
    {
      v87 = *(uint32_t *)(*v83 - 12);
      if ( v33 + v87 > *(uint32_t *)(v97 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v97), v33 + v87 + 64, 0);
        v87 = *(uint32_t *)(*((uint32_t *)self + 29) - 12);
      }
      if ( v87 != 0 )
      {
        v60 = 0;
        v61 = (uint32_t *)((char *)self + 116);
        v86 = v33;
        do
        {
          v62 = v97;
          v63 = v60 + v86;
          if ( *(int *)(v97 - 4) >= 0 )
          {
            v78 = v61;
            sub_19397C0(&v97);
            v62 = v97;
            v61 = v78;
          }
          v64 = *(uint8_t *)(*v61 + v60++);
          *(uint8_t *)(v62 + v63) = v64;
        }
        while ( v60 != v87 );
        v33 = v60 + v86;
        goto LABEL_27;
      }
      goto LABEL_7;
    }
    if ( v42 != 0 )
    {
      if ( v42 == 2 )
      {
        v87 = *(uint32_t *)(*v84 - 12);
        if ( v33 + v87 > *(uint32_t *)(v97 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v97), v33 + v87 + 64, 0);
          v87 = *(uint32_t *)(*((uint32_t *)self + 30) - 12);
        }
        if ( v87 != 0 )
        {
          v55 = 0;
          v56 = (uint32_t *)((char *)self + 120);
          v86 = v33;
          do
          {
            v57 = v97;
            v58 = v55 + v86;
            if ( *(int *)(v97 - 4) >= 0 )
            {
              v77 = v56;
              sub_19397C0(&v97);
              v57 = v97;
              v56 = v77;
            }
            v59 = *(uint8_t *)(*v56 + v55++);
            *(uint8_t *)(v57 + v58) = v59;
          }
          while ( v55 != v87 );
          v33 = v55 + v86;
          goto LABEL_27;
        }
      }
      else
      {
        sub_1939D80((int)(uintptr_t)(&v97), v33, 0);
      }
LABEL_7:
      v34 = *v88;
      if ( *v88 == 0 )
        goto LABEL_28;
    }
    else
    {
      v87 = *(uint32_t *)(*v82 - 12);
      if ( v33 + v87 > *(uint32_t *)(v97 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v97), v33 + v87 + 64, 0);
        v87 = *(uint32_t *)(*((uint32_t *)self + 2) - 12);
      }
      if ( v87 == 0 )
        goto LABEL_7;
      v43 = 0;
      v44 = (uint32_t *)((char *)self + 8);
      v86 = v33;
      do
      {
        v45 = v97;
        v46 = v43 + v86;
        if ( *(int *)(v97 - 4) >= 0 )
        {
          v75 = v44;
          sub_19397C0(&v97);
          v45 = v97;
          v44 = v75;
        }
        v47 = *(uint8_t *)(*v44 + v43++);
        *(uint8_t *)(v45 + v46) = v47;
      }
      while ( v43 != v87 );
      v33 = v43 + v86;
LABEL_27:
      v34 = *v88;
      if ( *v88 == 0 )
        goto LABEL_28;
    }
  }
  sub_1939D80((int)(uintptr_t)(&v97), v33, 0);
LABEL_28:
  sub_1939D80((int)(uintptr_t)(&v97), v33, 0);
  g4_std::string::construct_copy(v95, &v97);
  v48 = (void *)(v97 - 12);
  if ( (uint32_t *)(v97 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v97 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v48);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v96), "ChatLib", (int)(uintptr_t)(&v94));
  chatv2::Utils::Log(3, 0, v96, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Connectivity/HTTPClient.cpp", 71, v95);
  v49 = (void *)(v96[0] - 12);
  if ( (uint32_t *)(v96[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v96[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v49);
  }
  v50 = (void *)(v95[0] - 12);
  if ( (uint32_t *)(v95[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v95[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v50);
  }
  v51 = self;
  v52 = *((uint32_t *)self + 31);
  if ( v52 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::ISocketBase, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::ISocketBase*]",
      "px != 0");
    v51 = self;
    v52 = *((uint32_t *)self + 31);
  }
  v90 = *(void (**)(int, char *, void *, uint32_t *, int, int, int, int, int, int, int, int, int, uint32_t *, uint32_t *, uint32_t *, int, size_t, size_t, uint32_t, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int))(*(uint32_t *)v52 + 8);
  sub_1273500(chatv2::Connectivity::HTTPClient::ReadStatusLine, 0, v51);
  v53 = v96[2];
  v97 = v96[1];
  v99 = v96[3];
  v81 = v96[1];
  v76 = v96[3];
  v101[0] = 0;
  v98 = v96[2];
  if ( (uint8_t)sub_59D630(&v97) == 0 )
  {
    v101[1] = v81;
    v101[2] = v53;
    v101[3] = v76;
    v101[0] = (uint32_t)(uintptr_t)((char *)g4_fnstatic_febe39a7d7
            + 1);
  }
  v90(
    v52,
    (char *)self + 144,
    &chatv2::System::NIX_EOL,
    v101,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v76,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    (uint32_t)(uintptr_t)(v90),
    v91,
    v92,
    v93,
    v94,
    v95[0],
    v95[1],
    v95[2],
    v95[3],
    v96[0],
    v96[1],
    v96[2],
    v96[3],
    v97,
    v98,
    v99,
    v100);
  result = (int (*)(int *, int *, int))a32;
  if ( a32 != 0 && (a32 & 1) == 0 )
  {
    result = *(int (**)(int *, int *, int))(a32 & 0xFFFFFFFE);
    if ( result != nullptr )
      return (int (*)(int *, int *, int))result(&a33, &a33, 2);
  }
  return result;
}
// [Deduplicated EA block removed; canonical definition kept in dedicated module]



// ============================================================================
// Referencing Function: 0x1275b70 .. 0x1275d30 (448 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient11ReadContentERKN5boost6system10error_codeEjNS2_10shared_ptrINS0_12HTTPResponseEEE
// Demangled:            chatv2::Connectivity::HTTPClient::ReadContent(boost::system::error_code const&,unsigned int,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1275d30 .. 0x1276522 (2034 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient11ReadHeadersERKN5boost6system10error_codeEjNS2_10shared_ptrINS0_12HTTPResponseEEE
// Demangled:            chatv2::Connectivity::HTTPClient::ReadHeaders(boost::system::error_code const&,unsigned int,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12771d0 .. 0x1277228 (88 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient14ReadStatusLineERKN5boost6system10error_codeEj
// Demangled:            chatv2::Connectivity::HTTPClient::ReadStatusLine(boost::system::error_code const&,unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1277670 .. 0x127783a (458 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient18OnStartupCompletedEv
// Demangled:            chatv2::Connectivity::HTTPClient::OnStartupCompleted(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1277840 .. 0x1277bd4 (916 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient7DoWriteEN5boost10shared_ptrINS0_11HTTPRequestEEE
// Demangled:            chatv2::Connectivity::HTTPClient::DoWrite(boost::shared_ptr<chatv2::Connectivity::HTTPRequest>)
// ============================================================================
