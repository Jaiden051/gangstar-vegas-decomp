// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd6358):
//   ../../../../../lib/jsoncpp/include/json/writer.h
// Referenced by 4 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x11a68a0 .. 0x11a70b4 (2068 bytes)
// Symbol:               _ZN4Json18StyledStreamWriter10writeValueERKNS_5ValueE
// Demangled:            Json::StyledStreamWriter::writeValue(Json::Value const&)
// ============================================================================
/*
void Json::StyledStreamWriter::writeValue(
        long double a1,
        Json::StyledStreamWriter *this,
        const Json::Value::Self *a3)
{
  void **v3;
  char *v4;
  char v5;
  int *v6;
  void *v7;
  void *v8;
  const char **v9;
  const Json::Value::Self *v10;
  void *v11;
  void *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  void *v16;
  uint8_t *v17;
  int v18;
  unsigned int v19;
  char *v20;
  void *v21;
  char *v22;
  unsigned int v23;
  char *v24;
  void *v25;
  unsigned int v26;
  const char *v27;
  void *v28;
  char v29;
  char *v30;
  void *v31;
  char *v32;
  void *v33;
  char *v34;
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
  void *s;
  uint32_t *v51;
  uint8_t v52[29];

  switch ( Json::Value::type(a3) )
  {
    case 0:
      g4_std_compat::string_construct_from_cstr((int)&v40, "null", (int)&v35);
      Json::StyledStreamWriter::pushValue(this, &v40);
      v16 = (void *)(v40 - 12);
      if ( (uint32_t *)(v40 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy(v16);
      }
      return;
    case 1:
      v17 = v52;
      v18 = Json::Value::asInt(a3);
      v52[0] = 0;
      v19 = -v18;
      if ( v18 >= 0 )
        v19 = v18;
      while ( 1 )
      {
        *(v17 - 1) = v19 % 0xA + 48;
        v19 /= 0xAu;
        if ( v19 == 0 )
          break;
        --v17;
      }
      v20 = v17 - 1;
      if ( v18 < 0 )
      {
        v20 = v17 - 2;
        *(v17 - 2) = 45;
      }
      if ( v20 < (char *)&s )
      {
        v34 = v20;
        __assert2(
          "../../../../../lib/jsoncpp/include/json/writer.h",
          235,
          "std::string Json::valueToString(Json::Int)",
          "current >= buffer");
        v20 = v34;
      }
      g4_std_compat::string_construct_from_cstr((int)&v41, v20, (int)&v35 + 2);
      Json::StyledStreamWriter::pushValue(this, &v41);
      v21 = (void *)(v41 - 12);
      if ( (uint32_t *)(v41 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy(v21);
      }
      return;
    case 2:
      v22 = v52;
      v23 = Json::Value::asUInt(a3);
      v52[0] = 0;
      do
      {
        v24 = v22 - 1;
        v22 = v24;
        *v24 = v23 % 0xA + 48;
        v23 /= 0xAu;
      }
      while ( v23 != 0 );
      if ( v24 < (char *)&s )
        __assert2(
          "../../../../../lib/jsoncpp/include/json/writer.h",
          247,
          "std::string Json::valueToString(Json::UInt)",
          "current >= buffer");
      g4_std_compat::string_construct_from_cstr((int)&v42, v24, (int)&v36);
      Json::StyledStreamWriter::pushValue(this, &v42);
      v25 = (void *)(v42 - 12);
      if ( (uint32_t *)(v42 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy(v25);
      }
      return;
    case 3:
      Json::Value::asDouble(a3);
      sprintf((char *)&s, "%#.16g", (double)a1);
      v26 = strlen((const char *)&s) - 1;
      if ( *((uint8_t *)&s + v26) == 48 )
      {
        v3 = (void **)((char *)&s + v26);
        if ( v3 > &s )
        {
          do
            v3 = (void **)((char *)v3 - 1);
          while ( v3 != &s && *(uint8_t *)v3 == 48 );
        }
        else if ( v3 < &s )
        {
LABEL_9:
          v6 = &v37;
LABEL_10:
          g4_std_compat::string_construct_from_cstr((int)&v43, (char *)&s, (int)v6);
          goto LABEL_11;
        }
        v4 = (char *)v3;
        while ( 1 )
        {
          v5 = *v4;
          if ( *v4 == 46 )
            break;
          if ( v5 < 46 || (uint8_t)(v5 - 48) > 9u )
          {
            v32 = (char *)&v37 + 1;
            goto LABEL_64;
          }
          if ( --v4 < (char *)&s )
            goto LABEL_9;
        }
        *((uint8_t *)v3 + 2) = 0;
        v6 = (int *)((char *)&v37 + 2);
        goto LABEL_10;
      }
      v32 = (char *)&v37 + 3;
LABEL_64:
      g4_std_compat::string_construct_from_cstr((int)&v43, (char *)&s, (int)v32);
LABEL_11:
      Json::StyledStreamWriter::pushValue(this, &v43);
      v7 = (void *)(v43 - 12);
      if ( (uint32_t *)(v43 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy(v7);
      }
      return;
    case 4:
      v27 = (const char *)Json::Value::asCString(a3);
      Json::valueToQuotedString((Json *)&v44, v27);
      Json::StyledStreamWriter::pushValue(this, &v44);
      v28 = (void *)(v44 - 12);
      if ( (uint32_t *)(v44 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy(v28);
      }
      return;
    case 5:
      v29 = Json::Value::asBool(a3);
      v30 = "true";
      if ( v29 == 0 )
        v30 = "false";
      g4_std_compat::string_construct_from_cstr((int)&v45, v30, (int)&v38);
      Json::StyledStreamWriter::pushValue(this, &v45);
      v31 = (void *)(v45 - 12);
      if ( (uint32_t *)(v45 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy(v31);
      }
      return;
    case 6:
      Json::StyledStreamWriter::writeArrayValue(this, a3);
      return;
    case 7:
      Json::Value::getMemberNames((Json::Value::Self *)&s);
      if ( v51 == s )
      {
        g4_std_compat::string_construct_from_cstr((int)&v46, "{}", (int)&v39);
        Json::StyledStreamWriter::pushValue(this, &v46);
        v33 = (void *)(v46 - 12);
        if ( (uint32_t *)(v46 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy(v33);
        }
      }
      else
      {
        g4_std_compat::string_construct_from_cstr((int)&v47, "{", (int)&v39 + 1);
        Json::StyledStreamWriter::writeWithIndent(this, (int)&v47);
        v8 = (void *)(v47 - 12);
        if ( (uint32_t *)(v47 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy(v8);
        }
        Json::StyledStreamWriter::indent(this);
        v9 = (const char **)s;
        while ( 1 )
        {
          v10 = (const Json::Value::Self *)Json::Value::operator[](a3, (int)v9);
          Json::StyledStreamWriter::writeCommentBeforeValue(this, v10);
          Json::valueToQuotedString((Json *)&v48, *v9);
          Json::StyledStreamWriter::writeWithIndent(this, (int)&v48);
          v11 = (void *)(v48 - 12);
          if ( (uint32_t *)(v48 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
          {
            std::string::_Rep::_M_destroy(v11);
          }
          ++v9;
          std::ostream::write(*((uint32_t *)this + 3), " : ", 3);
          Json::StyledStreamWriter::writeValue(this, v10);
          if ( v51 == v9 )
            break;
          std::ostream::write(*((uint32_t *)this + 3), ",", 1);
          Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(this, v10);
        }
        Json::StyledStreamWriter::writeCommentAfterValueOnSameLine(this, v10);
        Json::StyledStreamWriter::unindent(this);
        g4_std_compat::string_construct_from_cstr((int)&v49, "}", (int)&v39 + 2);
        Json::StyledStreamWriter::writeWithIndent(this, (int)&v49);
        v12 = (void *)(v49 - 12);
        if ( (uint32_t *)(v49 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy(v12);
        }
      }
      v13 = v51;
      v14 = s;
      if ( v51 != s )
      {
        do
        {
          v15 = (uint32_t *)(*v14 - 12);
          if ( v15 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v14 - 4), 0xFFFFFFFF) <= 0 )
            std::string::_Rep::_M_destroy(v15);
          ++v14;
        }
        while ( v13 != v14 );
        v14 = s;
      }
      if ( v14 != nullptr )
        operator delete(v14);
      return;
    default:
      return;
  }
}

*/

// ============================================================================
// Referencing Function: 0x11a7750 .. 0x11a7f8a (2106 bytes)
// Symbol:               _ZN4Json12StyledWriter10writeValueERKNS_5ValueE
// Demangled:            Json::StyledWriter::writeValue(Json::Value const&)
// ============================================================================
/*
void Json::StyledWriter::writeValue(long double a1, Json::StyledWriter *this, const Json::Value::Self *a3)
{
  void **v3;
  char *v4;
  char v5;
  int *v6;
  void *v7;
  void *v8;
  const char **v9;
  const Json::Value::Self *v10;
  void *v11;
  void *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  void *v16;
  uint8_t *v17;
  int v18;
  unsigned int v19;
  char *v20;
  void *v21;
  char *v22;
  unsigned int v23;
  char *v24;
  void *v25;
  unsigned int v26;
  const char *v27;
  void *v28;
  char v29;
  char *v30;
  void *v31;
  char *v32;
  void *v33;
  char *v34;
  char *v35;
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
  void *s;
  uint32_t *v52;
  uint8_t v53[29];

  switch ( Json::Value::type(a3) )
  {
    case 0:
      g4_std_compat::string_construct_from_cstr((int)&v41, "null", (int)&v36);
      Json::StyledWriter::pushValue(this, &v41);
      v16 = (void *)(v41 - 12);
      if ( (uint32_t *)(v41 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy(v16);
      }
      return;
    case 1:
      v17 = v53;
      v18 = Json::Value::asInt(a3);
      v53[0] = 0;
      v19 = -v18;
      if ( v18 >= 0 )
        v19 = v18;
      while ( 1 )
      {
        *(v17 - 1) = v19 % 0xA + 48;
        v19 /= 0xAu;
        if ( v19 == 0 )
          break;
        --v17;
      }
      v20 = v17 - 1;
      if ( v18 < 0 )
      {
        v20 = v17 - 2;
        *(v17 - 2) = 45;
      }
      if ( v20 < (char *)&s )
      {
        v34 = v20;
        __assert2(
          "../../../../../lib/jsoncpp/include/json/writer.h",
          235,
          "std::string Json::valueToString(Json::Int)",
          "current >= buffer");
        v20 = v34;
      }
      g4_std_compat::string_construct_from_cstr((int)&v42, v20, (int)&v36 + 2);
      Json::StyledWriter::pushValue(this, &v42);
      v21 = (void *)(v42 - 12);
      if ( (uint32_t *)(v42 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy(v21);
      }
      return;
    case 2:
      v22 = v53;
      v23 = Json::Value::asUInt(a3);
      v53[0] = 0;
      do
      {
        v24 = v22 - 1;
        v22 = v24;
        *v24 = v23 % 0xA + 48;
        v23 /= 0xAu;
      }
      while ( v23 != 0 );
      if ( v24 < (char *)&s )
        __assert2(
          "../../../../../lib/jsoncpp/include/json/writer.h",
          247,
          "std::string Json::valueToString(Json::UInt)",
          "current >= buffer");
      g4_std_compat::string_construct_from_cstr((int)&v43, v24, (int)&v37);
      Json::StyledWriter::pushValue(this, &v43);
      v25 = (void *)(v43 - 12);
      if ( (uint32_t *)(v43 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy(v25);
      }
      return;
    case 3:
      Json::Value::asDouble(a3);
      sprintf((char *)&s, "%#.16g", (double)a1);
      v26 = strlen((const char *)&s) - 1;
      if ( *((uint8_t *)&s + v26) == 48 )
      {
        v3 = (void **)((char *)&s + v26);
        if ( v3 > &s )
        {
          do
            v3 = (void **)((char *)v3 - 1);
          while ( v3 != &s && *(uint8_t *)v3 == 48 );
        }
        else if ( v3 < &s )
        {
LABEL_9:
          v6 = &v38;
LABEL_10:
          g4_std_compat::string_construct_from_cstr((int)&v44, (char *)&s, (int)v6);
          goto LABEL_11;
        }
        v4 = (char *)v3;
        while ( 1 )
        {
          v5 = *v4;
          if ( *v4 == 46 )
            break;
          if ( v5 < 46 || (uint8_t)(v5 - 48) > 9u )
          {
            v32 = (char *)&v38 + 1;
            goto LABEL_64;
          }
          if ( --v4 < (char *)&s )
            goto LABEL_9;
        }
        *((uint8_t *)v3 + 2) = 0;
        v6 = (int *)((char *)&v38 + 2);
        goto LABEL_10;
      }
      v32 = (char *)&v38 + 3;
LABEL_64:
      g4_std_compat::string_construct_from_cstr((int)&v44, (char *)&s, (int)v32);
LABEL_11:
      Json::StyledWriter::pushValue(this, &v44);
      v7 = (void *)(v44 - 12);
      if ( (uint32_t *)(v44 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy(v7);
      }
      return;
    case 4:
      v27 = (const char *)Json::Value::asCString(a3);
      Json::valueToQuotedString((Json *)&v45, v27);
      Json::StyledWriter::pushValue(this, &v45);
      v28 = (void *)(v45 - 12);
      if ( (uint32_t *)(v45 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy(v28);
      }
      return;
    case 5:
      v29 = Json::Value::asBool(a3);
      v30 = "true";
      if ( v29 == 0 )
        v30 = "false";
      g4_std_compat::string_construct_from_cstr((int)&v46, v30, (int)&v39);
      Json::StyledWriter::pushValue(this, &v46);
      v31 = (void *)(v46 - 12);
      if ( (uint32_t *)(v46 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy(v31);
      }
      return;
    case 6:
      Json::StyledWriter::writeArrayValue(this, a3);
      return;
    case 7:
      Json::Value::getMemberNames((Json::Value::Self *)&s);
      if ( v52 == s )
      {
        g4_std_compat::string_construct_from_cstr((int)&v47, "{}", (int)&v40);
        Json::StyledWriter::pushValue(this, &v47);
        v33 = (void *)(v47 - 12);
        if ( (uint32_t *)(v47 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy(v33);
        }
      }
      else
      {
        g4_std_compat::string_construct_from_cstr((int)&v48, "{", (int)&v40 + 1);
        Json::StyledWriter::writeWithIndent(this, (int)&v48);
        v8 = (void *)(v48 - 12);
        if ( (uint32_t *)(v48 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy(v8);
        }
        Json::StyledWriter::indent(this);
        v35 = (char *)this + 16;
        v9 = (const char **)s;
        while ( 1 )
        {
          v10 = (const Json::Value::Self *)Json::Value::operator[](a3, (int)v9);
          Json::StyledWriter::writeCommentBeforeValue(this, v10);
          Json::valueToQuotedString((Json *)&v49, *v9);
          Json::StyledWriter::writeWithIndent(this, (int)&v49);
          v11 = (void *)(v49 - 12);
          if ( (uint32_t *)(v49 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
          {
            std::string::_Rep::_M_destroy(v11);
          }
          ++v9;
          std::string::append((int)v35, " : ", 3u);
          Json::StyledWriter::writeValue(this, v10);
          if ( v52 == v9 )
            break;
          std::string::append((int)v35, ",", 1u);
          Json::StyledWriter::writeCommentAfterValueOnSameLine(this, v10);
        }
        Json::StyledWriter::writeCommentAfterValueOnSameLine(this, v10);
        Json::StyledWriter::unindent(this);
        g4_std_compat::string_construct_from_cstr((int)&v50, "}", (int)&v40 + 2);
        Json::StyledWriter::writeWithIndent(this, (int)&v50);
        v12 = (void *)(v50 - 12);
        if ( (uint32_t *)(v50 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy(v12);
        }
      }
      v13 = v52;
      v14 = s;
      if ( v52 != s )
      {
        do
        {
          v15 = (uint32_t *)(*v14 - 12);
          if ( v15 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v14 - 4), 0xFFFFFFFF) <= 0 )
            std::string::_Rep::_M_destroy(v15);
          ++v14;
        }
        while ( v13 != v14 );
        v14 = s;
      }
      if ( v14 != nullptr )
        operator delete(v14);
      return;
    default:
      return;
  }
}

*/

// ============================================================================
// Referencing Function: 0x11a84f0 .. 0x11a8c07 (1815 bytes)
// Symbol:               _ZN4Json10FastWriter10writeValueERKNS_5ValueE
// Demangled:            Json::FastWriter::writeValue(Json::Value const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x11a8cb0 .. 0x11a9301 (1617 bytes)
// Symbol:               _ZN4Json10GLOTWriter10writeValueERKNS_5ValueEj
// Demangled:            Json::GLOTWriter::writeValue(Json::Value const&,unsigned int)
// ============================================================================
