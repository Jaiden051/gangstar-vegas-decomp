// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd5024):
//   F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.h
// Referenced by 1 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x1063f20 .. 0x10642fd (989 bytes)
// Symbol:               _ZN9TiXmlBase8ReadTextEPKcP11TiXmlStringbS1_b13TiXmlEncoding
// Demangled:            TiXmlBase::ReadText(char const*,TiXmlString *,bool,char const*,bool,TiXmlEncoding)
// ============================================================================
/*
char *TiXmlBase::ReadText(char *a1, TiXmlString *a2, char a3, char *s, char a5, int a6)
{
  char *Entity;
  char j;
  signed int v9;
  char v10;
  int v11;
  int v12;
  char *v13;
  char v14; // di
  char i;
  int v16;
  char *v17;
  uint8_t v18;
  char v19;
  int v20;
  int v21;
  size_t v22;
  char v23;
  char v24[16];
  char v25[28];

  Entity = a1;
  TiXmlString::assign(a2, (const char *)&unk_1B15112, 0);
  if ( a3 != 0 && TiXmlBase::condenseWhiteSpace != 0 )
  {
    v13 = (char *)TiXmlBase::SkipWhiteSpace(a1, a6);
    Entity = v13;
    if ( v13 == nullptr )
      return Entity;
    if ( *v13 == 0 )
    {
LABEL_5:
      if ( Entity != nullptr )
        Entity += strlen(s);
      return Entity;
    }
    v14 = 0;
    for ( i = TiXmlBase::StringEqual(v13, s, a5, a6); ; i = TiXmlBase::StringEqual(Entity, s, a5, a6) )
    {
      if ( i != 0 )
        goto LABEL_5;
      v18 = *Entity;
      if ( *Entity != 10 && v18 != 13 && isspace(v18) == 0 )
        break;
      ++Entity;
      v14 = 1;
LABEL_42:
      if ( Entity == nullptr )
        return Entity;
      if ( *Entity == 0 )
        goto LABEL_5;
    }
    if ( v14 != 0 )
    {
      v23 = 32;
      TiXmlString::append(a2, &v23, 1u);
    }
    v25[0] = 0;
    v25[1] = 0;
    v25[2] = 0;
    v25[3] = 0;
    if ( a6 == 1 )
    {
      *(uint32_t *)v24 = TiXmlBase::utf8ByteTable[(uint8_t)*Entity];
      v16 = *(uint32_t *)v24;
      if ( *(uint32_t *)v24 > 4u )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.h",
          334,
          "static char const* TiXmlBase::GetChar(char const*, char*, int*, TiXmlEncoding)",
          "*length >= 0 && *length < 5");
        v16 = *(uint32_t *)v24;
      }
      if ( v16 != 1 )
      {
        if ( v16 != 0 )
        {
          v19 = *Entity;
          if ( *Entity != 0 )
          {
            v20 = 0;
            v21 = 0;
            if ( v16 > 0 )
            {
              do
              {
                ++v21;
                v25[v20] = v19;
                v19 = Entity[v21];
                v20 = v21;
              }
              while ( v19 != 0 && v21 != v16 );
            }
          }
          Entity += v16;
          v22 = v16;
          v17 = v25;
          goto LABEL_41;
        }
        Entity = nullptr;
        goto LABEL_51;
      }
    }
    else
    {
      *(uint32_t *)v24 = 1;
    }
    if ( *Entity == 38 )
      Entity = (char *)TiXmlBase::GetEntity(Entity, (unsigned int)v25, v24, a6);
    else
      v25[0] = *Entity++;
    v16 = *(uint32_t *)v24;
    if ( *(uint32_t *)v24 == 1 )
    {
      v22 = 1;
      v23 = v25[0];
      v17 = &v23;
LABEL_41:
      v14 = 0;
      TiXmlString::append(a2, v17, v22);
      goto LABEL_42;
    }
LABEL_51:
    v22 = v16;
    v17 = v25;
    goto LABEL_41;
  }
  if ( a1 != nullptr )
  {
    if ( *a1 == 0 )
      goto LABEL_5;
    for ( j = TiXmlBase::StringEqual(a1, s, a5, a6); ; j = TiXmlBase::StringEqual(Entity, s, a5, a6) )
    {
      if ( j != 0 )
        goto LABEL_5;
      v25[0] = 0;
      v25[1] = 0;
      v25[2] = 0;
      v25[3] = 0;
      if ( a6 != 1 )
        break;
      *(uint32_t *)v24 = TiXmlBase::utf8ByteTable[(uint8_t)*Entity];
      v9 = *(uint32_t *)v24;
      if ( *(uint32_t *)v24 > 4u )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.h",
          334,
          "static char const* TiXmlBase::GetChar(char const*, char*, int*, TiXmlEncoding)",
          "*length >= 0 && *length < 5");
        v9 = *(uint32_t *)v24;
      }
      if ( v9 == 1 )
        goto LABEL_14;
      if ( v9 == 0 )
      {
        TiXmlString::append(a2, v25, 0);
        return nullptr;
      }
      v10 = *Entity;
      if ( *Entity != 0 )
      {
        v11 = 0;
        v12 = 0;
        if ( v9 > 0 )
        {
          do
          {
            ++v12;
            v25[v11] = v10;
            v10 = Entity[v12];
            v11 = v12;
          }
          while ( v10 != 0 && v12 != v9 );
        }
      }
      Entity += v9;
LABEL_17:
      TiXmlString::append(a2, v25, v9);
      if ( Entity == nullptr )
        return nullptr;
      if ( *Entity == 0 )
        goto LABEL_5;
    }
    *(uint32_t *)v24 = 1;
LABEL_14:
    if ( *Entity == 38 )
      Entity = (char *)TiXmlBase::GetEntity(Entity, (unsigned int)v25, v24, a6);
    else
      v25[0] = *Entity++;
    v9 = *(uint32_t *)v24;
    goto LABEL_17;
  }
  return Entity;
}

*/
