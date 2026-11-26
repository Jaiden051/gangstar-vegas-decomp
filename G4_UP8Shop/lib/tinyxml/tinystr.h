// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd4f28):
//   F:/G4/G4_UP8Shop/lib/tinyxml/tinystr.h
// Referenced by 1 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x105f5f0 .. 0x105f987 (919 bytes)
// Symbol:               _ZN9TiXmlBase12EncodeStringERK11TiXmlStringPS0_b
// Demangled:            TiXmlBase::EncodeString(TiXmlString const&,TiXmlString*,bool)
// ============================================================================
/*
unsigned int *TiXmlBase::EncodeString(unsigned int **this, const TiXmlString *a2, TiXmlString *a3)
{
  int v3;
  unsigned int *result;
  unsigned int v5;
  bool v6;
  uint8_t v7;
  int v8;
  int v9;
  char v10;
  char s[60];

  v3 = 0;
  result = *this;
  v5 = **this;
LABEL_2:
  while ( 1 )
  {
    v6 = v3 < v5;
    if ( v3 >= (int)v5 )
      return result;
    while ( 1 )
    {
      if ( !v6 )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/tinyxml/tinystr.h",
          170,
          "char& TiXmlString::operator[](TiXmlString::size_type) const",
          "index < length()");
        result = *this;
      }
      v7 = *((uint8_t *)result + v3 + 8);
      if ( v7 == 38 )
        break;
      switch ( v7 )
      {
        case '<':
          TiXmlString::append(a2, off_20C3D4C, unk_20C3D50);
          goto LABEL_32;
        case '>':
          TiXmlString::append(a2, off_20C3D58, unk_20C3D5C);
          goto LABEL_32;
        case '"':
          TiXmlString::append(a2, off_20C3D64, unk_20C3D68);
LABEL_36:
          result = *this;
          ++v3;
          v5 = **this;
          goto LABEL_2;
        case '\'':
          TiXmlString::append(a2, off_20C3D70, unk_20C3D74);
          goto LABEL_36;
        default:
          break;
      }
      if ( v7 > 0x1Fu )
      {
        v10 = *((uint8_t *)result + v3 + 8);
        TiXmlString::append(a2, &v10, 1u);
LABEL_32:
        result = *this;
        ++v3;
        v5 = **this;
        goto LABEL_2;
      }
      if ( (uint8_t)a3 == 0 )
        goto LABEL_14;
      if ( v7 != 13 )
      {
        if ( v7 == 10 )
        {
          v10 = 10;
          TiXmlString::append(a2, &v10, 1u);
          goto LABEL_32;
        }
LABEL_14:
        ++v3;
        goto LABEL_15;
      }
      if ( v3 >= (int)(*result - 1) )
        goto LABEL_14;
      if ( ++v3 >= *result )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/tinyxml/tinystr.h",
          170,
          "char& TiXmlString::operator[](TiXmlString::size_type) const",
          "index < length()");
        result = *this;
        v7 = 13;
      }
      if ( *((uint8_t *)result + v3 + 8) == 10 )
      {
        v5 = *result;
        goto LABEL_2;
      }
LABEL_15:
      snprintf(s, 0x20u, "&#x%02X;", v7);
      TiXmlString::append(a2, s, strlen(s));
      result = *this;
      v8 = **this;
      v6 = v3 < (unsigned int)v8;
      if ( v3 >= v8 )
        return result;
    }
    if ( v3 >= (int)(*result - 2) )
      goto LABEL_18;
    if ( v3 + 1 >= *result )
    {
      __assert2(
        "F:/G4/G4_UP8Shop/lib/tinyxml/tinystr.h",
        170,
        "char& TiXmlString::operator[](TiXmlString::size_type) const",
        "index < length()");
      result = *this;
    }
    if ( *((uint8_t *)result + v3 + 9) != 35 )
      goto LABEL_18;
    v9 = v3 + 2;
    if ( v3 + 2 >= *result )
    {
      __assert2(
        "F:/G4/G4_UP8Shop/lib/tinyxml/tinystr.h",
        170,
        "char& TiXmlString::operator[](TiXmlString::size_type) const",
        "index < length()");
      result = *this;
      v9 = v3 + 2;
    }
    if ( *((uint8_t *)result + v9 + 8) == 120 )
    {
      v5 = *result;
      do
      {
        if ( v3 >= (int)(v5 - 1) )
          break;
        TiXmlString::append(a2, (const char *)result + v3 + 8, 1u);
        result = *this;
        ++v3;
        v5 = **this;
        if ( v3 >= v5 )
        {
          __assert2(
            "F:/G4/G4_UP8Shop/lib/tinyxml/tinystr.h",
            170,
            "char& TiXmlString::operator[](TiXmlString::size_type) const",
            "index < length()");
          result = *this;
          v5 = **this;
        }
      }
      while ( *((uint8_t *)result + v3 + 8) != 59 );
    }
    else
    {
LABEL_18:
      TiXmlString::append(a2, TiXmlBase::entity, unk_20C3D44);
      result = *this;
      ++v3;
      v5 = **this;
    }
  }
}

*/
