// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1be94d0):
//   ../../../../../lib/boost/optional/optional.hpp
// Referenced by 1 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x1980390 .. 0x19815a0 (4624 bytes)
// Symbol:               sub_1980390
// Demangled:            sub_1980390
// ============================================================================
/*
uint8_t *sub_1980390(uint8_t *a1, int a2)
{
  int v2;
  void *v3;
  void *v4;
  char v5; // di
  bool v6;
  char v7;
  volatile int32_t *v8;
  uint8_t *v9;
  uint8_t *v10;
  char v11;
  uint8_t *v12;
  char v13;
  Json::Value::Self *v14;
  const Json::Value::Self *v15;
  char v16; // di
  void *v18;
  void *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  void *v27;
  void **v28;
  unsigned int v29;
  void *v30;
  void *v31;
  void **v32;
  unsigned int v33;
  void *v34;
  void *v35;
  char v36;
  int v37;
  int v38;
  Json::Value::Self *v39;
  void *v40;
  int i;
  int v42;
  void *v43;
  int v44;
  int v45;
  void *v46;
  int v47;
  int k;
  int v49;
  void *v50;
  int v51;
  int v52;
  int v53;
  void *v54;
  int v55;
  int j;
  uint8_t *v57;
  char *v58;
  unsigned int v59;
  int v60;
  int v61;
  int v62;
  unsigned int v63;
  int v64;
  uint8_t *v65;
  uint32_t *v66;
  int v67[4];
  uint32_t v68[3];
  int v69;
  uint8_t v70[16];
  uint8_t v71[16];
  uint8_t v72[16];
  uint8_t v73[16];
  char v74[4];
  int v75[2];
  void *v76;
  int v77;
  char v78[4];
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
  char v89;
  char v90;
  char v91;
  volatile int32_t *v92;
  char v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  char v104;
  int v105[2];
  void *v106;
  int v107;
  void *v108[5];
  unsigned int v109;
  int v110;
  void *v111;
  int v112;
  int v113;
  unsigned int v114;
  int v115;
  int v116;
  unsigned int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122[7];
  char v123[8];
  char v124[68];
  uint32_t v125[5];
  char v126;
  int v127;
  char v128;
  char v129;
  int v130;
  int v131;
  int v132;
  int v133;
  uint8_t **v134;

  v134 = &a1;
  v65 = a1;
  v2 = a2;
  *a1 = 0;
  std::string::__construct_copy(v67, v2);
  std::string::reserve((int)v67, 1u, 47);
  std::string::__construct_copy(v68, v67);
  std::string::append_str(v68, &unk_214050C);
  v58 = (char *)v68[0];
  sub_1900810(v125);
  v127 = 0;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v125[0] = &off_20AA2C0;
  v120 = (int)&off_20A9DEC;
  *(int *)((char *)&v120 + (uint32_t)*(&off_20A9DEC - 3)) = (int)&off_20A9E00;
  v121 = 0;
  sub_19119D0((char *)&v120 + *(uint32_t *)(v120 - 12), 0);
  v120 = (int)&off_20A9E2C;
  v125[0] = &off_20A9E40;
  sub_190A6D0(v122);
  sub_19119D0(v125, v122);
  if ( sub_190AE40((int)v122, v58, 8) != 0 )
    sub_1911530((char *)&v120 + *(uint32_t *)(v120 - 12), 0);
  else
    sub_1911530((char *)&v120 + *(uint32_t *)(v120 - 12), *(int *)((char *)&v120 + *(uint32_t *)(v120 - 12) + 20) | 4);
  if ( (v126 & 5) != 0 )
  {
    Json::Value::Value(v70, 0);
  }
  else
  {
    Json::Value::Value(v73, 0);
    Json::Reader::Reader((Json::Reader *)v108);
    Json::Reader::parse((Json::Reader *)v108, (int)&v120, (Json::Value::Self *)v73, 1);
    if ( sub_190AC60(v122) == 0 )
      sub_1911530((char *)&v120 + *(uint32_t *)(v120 - 12), *(int *)((char *)&v120 + *(uint32_t *)(v120 - 12) + 20) | 4);
    Json::Value::Value((Json::Value::Self *)v70, (const Json::Value::Self *)v73);
    v18 = (void *)(v119 - 12);
    if ( (uint32_t *)(v119 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v119 - 4), 0xFFFFFFFF) <= 0 )
    {
      std::string::_Rep::_M_destroy(v18);
    }
    v19 = (void *)(v118 - 12);
    if ( (uint32_t *)(v118 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v118 - 4), 0xFFFFFFFF) <= 0 )
    {
      std::string::_Rep::_M_destroy(v19);
    }
    v63 = v117;
    v62 = v115;
    v61 = v116;
    v59 = v114;
    v64 = v112;
    v60 = v113;
    v66 = (uint32_t *)(v114 + 4);
    if ( v117 > v114 + 4 )
    {
      do
      {
        v20 = 0;
        v21 = *v66 + 12;
        do
        {
          v22 = *(uint32_t *)(v21 + v20);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            std::string::_Rep::_M_destroy((void *)(v22 - 12));
          }
          v20 += 20;
        }
        while ( v20 != 500 );
        ++v66;
      }
      while ( v63 > (unsigned int)v66 );
    }
    if ( v63 == v59 )
    {
      for ( i = v64; v62 != i; i += 20 )
      {
        v42 = *(uint32_t *)(i + 12);
        if ( (uint32_t *)(v42 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy((void *)(v42 - 12));
        }
      }
    }
    else
    {
      if ( v64 != v60 )
      {
        v23 = v64;
        do
        {
          v24 = *(uint32_t *)(v23 + 12);
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            std::string::_Rep::_M_destroy((void *)(v24 - 12));
          }
          v23 += 20;
        }
        while ( v60 != v23 );
      }
      if ( v62 != v61 )
      {
        v25 = v61;
        do
        {
          v26 = *(uint32_t *)(v25 + 12);
          if ( (uint32_t *)(v26 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
          {
            std::string::_Rep::_M_destroy((void *)(v26 - 12));
          }
          v25 += 20;
        }
        while ( v62 != v25 );
      }
    }
    v27 = v111;
    if ( v111 != nullptr )
    {
      v28 = (void **)v114;
      v29 = v117 + 4;
      if ( v117 + 4 > v114 )
      {
        do
        {
          v30 = *v28++;
          operator delete(v30);
        }
        while ( v29 > (unsigned int)v28 );
        v27 = v111;
      }
      operator delete(v27);
    }
    v31 = v108[0];
    if ( v108[0] != nullptr )
    {
      v32 = (void **)v109;
      v33 = v110 + 4;
      if ( v110 + 4 > v109 )
      {
        do
        {
          v34 = *v32++;
          operator delete(v34);
        }
        while ( v33 > (unsigned int)v32 );
        v31 = v108[0];
      }
      operator delete(v31);
    }
    Json::Value::~Value((Json::Value::Self *)v73);
  }
  v120 = (int)&off_20A9E2C;
  v125[0] = &off_20A9E40;
  v122[0] = (int)&off_20A9DA8;
  sub_190AC60(v122);
  sub_1908070(v124);
  v122[0] = (int)&off_20AB2C8;
  sub_1902180(v123);
  v120 = (int)&off_20A9DEC;
  *(int *)((char *)&v120 + (uint32_t)*(&off_20A9DEC - 3)) = (int)&off_20A9E00;
  v121 = 0;
  v125[0] = &off_20AA2C0;
  sub_1900B90(v125);
  v3 = (void *)(v68[0] - 12);
  if ( (uint32_t *)(v68[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v68[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy(v3);
  }
  v4 = (void *)(v67[0] - 12);
  if ( (uint32_t *)(v67[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v67[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy(v4);
  }
  Json::Value::Value(v71, 0);
  v5 = Json::Value::operator!=((Json::Value::Self *)v70, (const Json::Value::Self *)v71);
  Json::Value::~Value((Json::Value::Self *)v71);
  if ( v5 != 0 )
  {
    v89 = 0;
    v90 = 0;
    v91 = 0;
    v93 = 0;
    v104 = 0;
    v92 = (volatile int32_t *)&unk_213B814;
    v6 = *v65 == 0;
    v65[4] = 0;
    v65[5] = 0;
    v65[6] = 0;
    v57 = v65 + 8;
    if ( v6 )
    {
      std::string::__construct_copy(v57, &v92);
      v6 = v93 == 0;
      v65[12] = 0;
      if ( !v6 )
      {
        *((uint32_t *)v65 + 4) = v94;
        *((uint32_t *)v65 + 5) = v95;
        *((uint32_t *)v65 + 6) = v96;
        *((uint32_t *)v65 + 7) = v97;
        *((uint32_t *)v65 + 8) = v98;
        *((uint32_t *)v65 + 9) = v99;
        *((uint32_t *)v65 + 10) = v100;
        *((uint32_t *)v65 + 11) = v101;
        *((uint32_t *)v65 + 12) = v102;
        *((uint32_t *)v65 + 13) = v103;
        v65[12] = 1;
      }
      v65[56] = 0;
      v7 = 0;
      if ( v104 != 0 )
      {
        v43 = v106;
        v6 = v106 == nullptr;
        *((uint32_t *)v65 + 16) = 0;
        *((uint32_t *)v65 + 17) = 0;
        *((uint32_t *)v65 + 20) = 0;
        *((uint32_t *)v65 + 18) = v65 + 64;
        *((uint32_t *)v65 + 19) = v65 + 64;
        v7 = 1;
        if ( !v6 )
        {
          v44 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
                  v65 + 60,
                  v43,
                  v65 + 64);
          v45 = v44;
          *((uint32_t *)v65 + 17) = v44;
          while ( *(uint32_t *)(v45 + 8) != 0 )
            v45 = *(uint32_t *)(v45 + 8);
          *((uint32_t *)v65 + 18) = v45;
          while ( *(uint32_t *)(v44 + 12) != 0 )
            v44 = *(uint32_t *)(v44 + 12);
          *((uint32_t *)v65 + 19) = v44;
          *((uint32_t *)v65 + 20) = v107;
          v7 = v104;
        }
        v65[56] = 1;
      }
      *v65 = 1;
    }
    else
    {
      std::string::assign_str(v57, &v92);
      if ( v65[12] != 0 )
      {
        if ( v93 != 0 )
        {
          *((uint32_t *)v65 + 4) = v94;
          *((uint32_t *)v65 + 5) = v95;
          *((uint32_t *)v65 + 6) = v96;
          *((uint32_t *)v65 + 7) = v97;
          *((uint32_t *)v65 + 8) = v98;
          *((uint32_t *)v65 + 9) = v99;
          *((uint32_t *)v65 + 10) = v100;
          *((uint32_t *)v65 + 11) = v101;
          *((uint32_t *)v65 + 12) = v102;
          *((uint16_t *)v65 + 26) = v103;
        }
        else
        {
          v65[12] = 0;
        }
      }
      else if ( v93 != 0 )
      {
        *((uint32_t *)v65 + 4) = v94;
        *((uint32_t *)v65 + 5) = v95;
        *((uint32_t *)v65 + 6) = v96;
        *((uint32_t *)v65 + 7) = v97;
        *((uint32_t *)v65 + 8) = v98;
        *((uint32_t *)v65 + 9) = v99;
        *((uint32_t *)v65 + 10) = v100;
        *((uint32_t *)v65 + 11) = v101;
        *((uint32_t *)v65 + 12) = v102;
        *((uint32_t *)v65 + 13) = v103;
        v65[12] = 1;
      }
      if ( v65[56] != 0 )
      {
        if ( v104 != 0 )
        {
          v53 = (int)(v65 + 60);
          if ( v65 + 60 == (uint8_t *)v105 )
          {
LABEL_88:
            std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
              (int)v105,
              v106);
            v104 = 0;
            goto LABEL_14;
          }
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
            v53,
            *((void **)v65 + 17));
          v54 = v106;
          v6 = v106 == nullptr;
          *((uint32_t *)v65 + 18) = v65 + 64;
          *((uint32_t *)v65 + 17) = 0;
          *((uint32_t *)v65 + 19) = v65 + 64;
          *((uint32_t *)v65 + 20) = 0;
          if ( !v6 )
          {
            v55 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
                    v53,
                    v54,
                    v65 + 64);
            *((uint32_t *)v65 + 17) = v55;
            for ( j = v55; *(uint32_t *)(j + 8) != 0; j = *(uint32_t *)(j + 8) )
              ;
            *((uint32_t *)v65 + 18) = j;
            while ( *(uint32_t *)(v55 + 12) != 0 )
              v55 = *(uint32_t *)(v55 + 12);
            *((uint32_t *)v65 + 19) = v55;
            *((uint32_t *)v65 + 20) = v107;
          }
          v7 = v104;
        }
        else
        {
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
            (int)(v65 + 60),
            *((void **)v65 + 17));
          v65[56] = 0;
          v7 = v104;
        }
      }
      else
      {
        if ( v104 == 0 )
        {
LABEL_14:
          if ( v93 != 0 )
            v93 = 0;
          v8 = v92 - 3;
          if ( v92 - 3 != dword_213B808 && __sync_fetch_and_add(v92 - 1, 0xFFFFFFFF) <= 0 )
            std::string::_Rep::_M_destroy((void *)v8);
          Json::Value::operator[]((Json::Value::Self *)v70, "layout");
          sub_197EBA0(v78);
          v9 = v65;
          if ( *v65 == 0 )
          {
            __assert2(
              "../../../../../lib/boost/optional/optional.hpp",
              631,
              "boost::optional<T>::reference_type boost::optional<T>::get() [with T = PopUpsLib::PopUpConfig, boost::opti"
              "onal<T>::reference_type = PopUpsLib::PopUpConfig&]",
              "this->is_initialized()");
            v9 = v65;
          }
          if ( v9[12] != 0 )
          {
            if ( v78[0] == 0 )
            {
              v65[12] = 0;
              goto LABEL_22;
            }
            *((uint32_t *)v9 + 4) = v79;
            *((uint32_t *)v9 + 5) = v80;
            *((uint32_t *)v9 + 6) = v81;
            *((uint32_t *)v9 + 7) = v82;
            *((uint32_t *)v9 + 8) = v83;
            *((uint32_t *)v9 + 9) = v84;
            *((uint32_t *)v9 + 10) = v85;
            *((uint32_t *)v9 + 11) = v86;
            *((uint32_t *)v9 + 12) = v87;
            *((uint16_t *)v9 + 26) = v88;
          }
          else
          {
            if ( v78[0] == 0 )
              goto LABEL_22;
            *((uint32_t *)v65 + 4) = v79;
            *((uint32_t *)v65 + 5) = v80;
            *((uint32_t *)v65 + 6) = v81;
            *((uint32_t *)v65 + 7) = v82;
            *((uint32_t *)v65 + 8) = v83;
            *((uint32_t *)v65 + 9) = v84;
            *((uint32_t *)v65 + 10) = v85;
            *((uint32_t *)v65 + 11) = v86;
            *((uint32_t *)v65 + 12) = v87;
            *((uint32_t *)v65 + 13) = v88;
            v65[12] = 1;
          }
          v78[0] = 0;
LABEL_22:
          Json::Value::operator[]((Json::Value::Self *)v70, "promoted_game");
          sub_197F230(v74);
          v10 = v65;
          if ( *v65 == 0 )
          {
            __assert2(
              "../../../../../lib/boost/optional/optional.hpp",
              631,
              "boost::optional<T>::reference_type boost::optional<T>::get() [with T = PopUpsLib::PopUpConfig, boost::opti"
              "onal<T>::reference_type = PopUpsLib::PopUpConfig&]",
              "this->is_initialized()");
            v10 = v65;
          }
          if ( v10[56] == 0 )
          {
            if ( v74[0] == 0 )
              goto LABEL_28;
            v35 = v76;
            v6 = v76 == nullptr;
            *((uint32_t *)v65 + 16) = 0;
            *((uint32_t *)v65 + 17) = 0;
            *((uint32_t *)v65 + 20) = 0;
            *((uint32_t *)v65 + 18) = v65 + 64;
            *((uint32_t *)v65 + 19) = v65 + 64;
            v36 = 1;
            if ( !v6 )
            {
              v37 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
                      v65 + 60,
                      v35,
                      v65 + 64);
              v38 = v37;
              *((uint32_t *)v65 + 17) = v37;
              while ( *(uint32_t *)(v38 + 8) != 0 )
                v38 = *(uint32_t *)(v38 + 8);
              *((uint32_t *)v65 + 18) = v38;
              while ( *(uint32_t *)(v37 + 12) != 0 )
                v37 = *(uint32_t *)(v37 + 12);
              *((uint32_t *)v65 + 19) = v37;
              *((uint32_t *)v65 + 20) = v77;
              v36 = v74[0];
            }
            v65[56] = 1;
            if ( v36 == 0 )
              goto LABEL_28;
            goto LABEL_78;
          }
          if ( v74[0] != 0 )
          {
            v49 = (int)(v10 + 60);
            if ( v10 + 60 == (uint8_t *)v75 )
              goto LABEL_78;
            std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
              v49,
              *((void **)v65 + 17));
            v50 = v76;
            v6 = v76 == nullptr;
            *((uint32_t *)v65 + 18) = v65 + 64;
            *((uint32_t *)v65 + 17) = 0;
            *((uint32_t *)v65 + 19) = v65 + 64;
            *((uint32_t *)v65 + 20) = 0;
            if ( !v6 )
            {
              v51 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
                      v49,
                      v50,
                      v65 + 64);
              v52 = v51;
              *((uint32_t *)v65 + 17) = v51;
              while ( *(uint32_t *)(v52 + 8) != 0 )
                v52 = *(uint32_t *)(v52 + 8);
              *((uint32_t *)v65 + 18) = v52;
              while ( *(uint32_t *)(v51 + 12) != 0 )
                v51 = *(uint32_t *)(v51 + 12);
              *((uint32_t *)v65 + 19) = v51;
              *((uint32_t *)v65 + 20) = v77;
            }
            v11 = v74[0];
          }
          else
          {
            std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
              (int)(v65 + 60),
              *((void **)v65 + 17));
            v65[56] = 0;
            v11 = v74[0];
          }
          if ( v11 == 0 )
          {
LABEL_28:
            v12 = v65;
            v13 = *v65;
            if ( *v65 == 0 )
            {
              __assert2(
                "../../../../../lib/boost/optional/optional.hpp",
                631,
                "boost::optional<T>::reference_type boost::optional<T>::get() [with T = PopUpsLib::PopUpConfig, boost::op"
                "tional<T>::reference_type = PopUpsLib::PopUpConfig&]",
                "this->is_initialized()");
              v12 = v65;
              v13 = *v65;
            }
            if ( v12[56] != 0 )
            {
              if ( v13 == 0 )
              {
                __assert2(
                  "../../../../../lib/boost/optional/optional.hpp",
                  631,
                  "boost::optional<T>::reference_type boost::optional<T>::get() [with T = PopUpsLib::PopUpConfig, boost::"
                  "optional<T>::reference_type = PopUpsLib::PopUpConfig&]",
                  "this->is_initialized()");
                v13 = *v65;
              }
              v65[4] = 1;
            }
            if ( v13 == 0 )
              __assert2(
                "../../../../../lib/boost/optional/optional.hpp",
                631,
                "boost::optional<T>::reference_type boost::optional<T>::get() [with T = PopUpsLib::PopUpConfig, boost::op"
                "tional<T>::reference_type = PopUpsLib::PopUpConfig&]",
                "this->is_initialized()");
            v14 = (Json::Value::Self *)Json::Value::operator[]((Json::Value::Self *)v70, "animated");
            v65[5] = Json::Value::asBool(v14);
            v15 = (const Json::Value::Self *)Json::Value::operator[]((Json::Value::Self *)v70, "dynamic_pricing");
            Json::Value::Value((Json::Value::Self *)&v120, v15);
            Json::Value::Value(v72, 0);
            v16 = Json::Value::operator!=((Json::Value::Self *)&v120, (const Json::Value::Self *)v72);
            Json::Value::~Value((Json::Value::Self *)v72);
            if ( v16 != 0 )
            {
              if ( *v65 == 0 )
                __assert2(
                  "../../../../../lib/boost/optional/optional.hpp",
                  631,
                  "boost::optional<T>::reference_type boost::optional<T>::get() [with T = PopUpsLib::PopUpConfig, boost::"
                  "optional<T>::reference_type = PopUpsLib::PopUpConfig&]",
                  "this->is_initialized()");
              v39 = (Json::Value::Self *)Json::Value::operator[]((Json::Value::Self *)&v120, "is_dynamic");
              v65[6] = Json::Value::asBool(v39);
              Json::Value::operator[]((Json::Value::Self *)&v120, "entry_id");
              Json::Value::asString((Json::Value::Self *)&v69);
              if ( *v65 == 0 )
                __assert2(
                  "../../../../../lib/boost/optional/optional.hpp",
                  631,
                  "boost::optional<T>::reference_type boost::optional<T>::get() [with T = PopUpsLib::PopUpConfig, boost::"
                  "optional<T>::reference_type = PopUpsLib::PopUpConfig&]",
                  "this->is_initialized()");
              std::string::assign_str(v65 + 8, &v69);
              v40 = (void *)(v69 - 12);
              if ( (uint32_t *)(v69 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
              {
                std::string::_Rep::_M_destroy(v40);
              }
            }
            Json::Value::~Value((Json::Value::Self *)&v120);
            goto LABEL_38;
          }
LABEL_78:
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
            (int)v75,
            v76);
          v74[0] = 0;
          goto LABEL_28;
        }
        v46 = v106;
        v6 = v106 == nullptr;
        *((uint32_t *)v65 + 16) = 0;
        *((uint32_t *)v65 + 17) = 0;
        *((uint32_t *)v65 + 20) = 0;
        *((uint32_t *)v65 + 18) = v65 + 64;
        *((uint32_t *)v65 + 19) = v65 + 64;
        v7 = 1;
        if ( !v6 )
        {
          v47 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
                  v65 + 60,
                  v46,
                  v65 + 64);
          *((uint32_t *)v65 + 17) = v47;
          for ( k = v47; *(uint32_t *)(k + 8) != 0; k = *(uint32_t *)(k + 8) )
            ;
          *((uint32_t *)v65 + 18) = k;
          while ( *(uint32_t *)(v47 + 12) != 0 )
            v47 = *(uint32_t *)(v47 + 12);
          *((uint32_t *)v65 + 19) = v47;
          *((uint32_t *)v65 + 20) = v107;
          v7 = v104;
        }
        v65[56] = 1;
      }
    }
    if ( v7 == 0 )
      goto LABEL_14;
    goto LABEL_88;
  }
LABEL_38:
  Json::Value::~Value((Json::Value::Self *)v70);
  return v65;
}

*/
