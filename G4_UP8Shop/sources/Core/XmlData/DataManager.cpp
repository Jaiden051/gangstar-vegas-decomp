#include "Core/XmlData/DataManager.h"
#include <cstdarg>
#include <cstdio>

// ----------------------------------------------------------------------------
// Function: xmldata::base_array::GenerateCpp  (binary VA: 0xa9fdc0)
// Original: xmldata::base_array::GenerateCpp
// ----------------------------------------------------------------------------
int xmldata::base_array::GenerateCpp(int a1, int a2)
{
  char s[156];

  G4_VCALL<void>(a2, 44, "\n\n", 2);
  sprintf(s, "// Array : %s\n", *(uint32_t *)(a1 + 8));
  G4_VCALL<void>(a2, 44, s, strlen(s));
  sprintf(s, "size_t %s::size = 0;\n", *(uint32_t *)(a1 + 8));
  G4_VCALL<void>(a2, 44, s, strlen(s));
  sprintf(s, "%s::struct_type* %s::entries = 0;\n", *(uint32_t *)(a1 + 8), *(uint32_t *)(a1 + 8));
  G4_VCALL<void>(a2, 44, s, strlen(s));
  G4_VCALL<void>(a2, 44, &a0[1], 1);
  sprintf(s, "void %s::Load(StreamBase* stream)\n", *(uint32_t *)(a1 + 8));
  G4_VCALL<void>(a2, 44, s, strlen(s));
  G4_VCALL<void>(a2, 44, "{\n", 2);
  G4_VCALL<void>(a2, 44, "\tif(entries != 0)\n", 18);
  G4_VCALL<void>(a2, 44, "\t\tUnload();\n", 12);
  G4_VCALL<void>(a2, 44, &a0[1], 1);
  G4_VCALL<void>(a2, 44, "\tuint32 sz;\n", 12);
  G4_VCALL<void>(a2, 44, "\tstream->ReadAs(sz);\n", 21);
  G4_VCALL<void>(a2, 44, &a0[1], 1);
  G4_VCALL<void>(a2, 44, "\tif(sz > 0)\n", 12);
  G4_VCALL<void>(a2, 44, "\t{\n", 3);
  G4_VCALL<void>(a2, 44, "\t\tentries = gll_new struct_type[sz];\n", 37);
  G4_VCALL<void>(a2, 44, "\t\tsize = sz;\n", 13);
  G4_VCALL<void>(a2, 44, &a0[1], 1);
  G4_VCALL<void>(a2, 44, "\t\tfor(size_t i = 0; i < size; ++i)\n", 35);
  G4_VCALL<void>(a2, 44, "\t\t{\n", 4);
  G4_VCALL<void>(a2, 44, "\t\t\tentries[i].Init();\n", 22);
  G4_VCALL<void>(a2, 44, "\t\t\tentries[i].Load(stream);\n", 28);
  G4_VCALL<void>(a2, 44, "\t\t}\n", 4);
  G4_VCALL<void>(a2, 44, "\t}\n", 3);
  G4_VCALL<void>(a2, 44, "}\n", 2);
  G4_VCALL<void>(a2, 44, &a0[1], 1);
  sprintf(s, "void %s::Unload()\n", *(uint32_t *)(a1 + 8));
  G4_VCALL<void>(a2, 44, s, strlen(s));
  G4_VCALL<void>(a2, 44, "{\n", 2);
  G4_VCALL<void>(a2, 44, "\tif(entries)\n", 13);
  G4_VCALL<void>(a2, 44, "\t{\n", 3);
  G4_VCALL<void>(a2, 44, "\t\tfor(size_t i = 0; i < size; ++i)\n", 35);
  G4_VCALL<void>(a2, 44, "\t\t{\n", 4);
  G4_VCALL<void>(a2, 44, "\t\t\tentries[i].Unload();\n", 24);
  G4_VCALL<void>(a2, 44, "\t\t}\n", 4);
  G4_VCALL<void>(a2, 44, &a0[1], 1);
  G4_VCALL<void>(a2, 44, "\t\tgll_delete[] entries;\n", 24);
  G4_VCALL<void>(a2, 44, "\t\tentries = 0;\n", 15);
  G4_VCALL<void>(a2, 44, "\t\tsize = 0;\n", 12);
  G4_VCALL<void>(a2, 44, "\t}\n", 3);
  return G4_VCALL<int>(a2, 44, "}\n", 2);
}

// ----------------------------------------------------------------------------
// Function: xmldata::base_struct::GenerateCpp  (binary VA: 0xaa0360)
// Original: xmldata::base_struct::GenerateCpp
// ----------------------------------------------------------------------------
void xmldata::base_struct::GenerateCpp(uint32_t *a1, int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef char _g4_t_s[156];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v12)) > _g4_s4 ? (20u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v13)) > _g4_s5 ? (20u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_s)) > _g4_s6 ? (32u + sizeof(_g4_t_s)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 32u);

  if ( a1[13] == 0 )
  {
    G4_VCALL<void>(a2, 44, "\n\n", 2);
    sprintf(s, "// Structure : %s\n", a1[2]);
    G4_VCALL<void>(a2, 44, s, strlen(s));
    sprintf(s, "void %s::Init()\n{\n", a1[2]);
    G4_VCALL<void>(a2, 44, s, strlen(s));
    G4_VCALL<void>(a2, 44, "\tbase_struct::Init();\n", 22);
    v2 = a1[10];
    v11 = (a1[11] - v2) >> 2;
    if ( v11 != 0 )
    {
      v8 = 0;
      while ( 1 )
      {
        v3 = *(uint32_t **)(v2 + 4 * v8);
        sprintf(s, "\n\t// Field : %s\n", v3[10]);
        G4_VCALL<void>(a2, 44, s, strlen(s));
        G4_VCALL<void>(v3, 36, a2);
        if ( v11 == ++v8 )
          break;
        v2 = a1[10];
      }
    }
    G4_VCALL<void>(a2, 44, "}\n", 2);
    G4_VCALL<void>(a2, 44, &a0[1], 1);
    sprintf(s, "void %s::Load(StreamBase* stream)\n{\n", a1[2]);
    G4_VCALL<void>(a2, 44, s, strlen(s));
    G4_VCALL<void>(a2, 44, "\tbase_struct::Load(stream);\n", 28);
    v4 = a1[10];
    v12 = (a1[11] - v4) >> 2;
    if ( v12 != 0 )
    {
      v9 = 0;
      while ( 1 )
      {
        v5 = *(uint32_t **)(v4 + 4 * v9);
        sprintf(s, "\n\t// Field : %s\n", v5[10]);
        G4_VCALL<void>(a2, 44, s, strlen(s));
        G4_VCALL<void>(v5, 40, a2);
        if ( v12 == ++v9 )
          break;
        v4 = a1[10];
      }
    }
    G4_VCALL<void>(a2, 44, "}\n", 2);
    G4_VCALL<void>(a2, 44, &a0[1], 1);
    sprintf(s, "void %s::Unload()\n{\n", a1[2]);
    G4_VCALL<void>(a2, 44, s, strlen(s));
    G4_VCALL<void>(a2, 44, "\tif(!IsLoaded())\n\t\treturn;\n\n", 28);
    G4_VCALL<void>(a2, 44, "\tbase_struct::Unload();\n", 24);
    v6 = a1[10];
    v13 = (a1[11] - v6) >> 2;
    if ( v13 != 0 )
    {
      v10 = 0;
      while ( 1 )
      {
        v7 = *(uint32_t **)(v6 + 4 * v10);
        sprintf(s, "\n\t// Field : %s\n", v7[10]);
        G4_VCALL<void>(a2, 44, s, strlen(s));
        G4_VCALL<void>(v7, 44, a2);
        if ( v13 == ++v10 )
          break;
        v6 = a1[10];
      }
    }
    G4_VCALL<void>(a2, 44, &a0[1], 1);
    G4_VCALL<void>(a2, 44, "\t// ALL\n", 8);
    G4_VCALL<void>(a2, 44, "\tInit();\n", 9);
    G4_VCALL<void>(a2, 44, "}\n", 2);
  }
}

// ----------------------------------------------------------------------------
// Function: xmldata::base_array::GenerateHeader  (binary VA: 0xaa0af0)
// Original: xmldata::base_array::GenerateHeader
// ----------------------------------------------------------------------------
int xmldata::base_array::GenerateHeader(uint32_t *a1, int *a2)
{
  const char *s;
  const char *v3;
  unsigned int v4;
  int v5;
  char *v6;
  int v7;
  unsigned int v8;
  bool v9;
  char *v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char _g4_t_v29[1052];
  enum : size_t {
    _g4_s0 = 1152u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v25)) > _g4_s2 ? (4u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v26)) > _g4_s3 ? (4u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v27)) > _g4_s4 ? (12u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v28)) > _g4_s5 ? (12u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v29)) > _g4_s6 ? (32u + sizeof(_g4_t_v29)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);

  s = (const char *)a1[2];
  v3 = &s[strlen(s)];
  v27 = 0;
  if ( s != v3 )
  {
    v4 = 0;
    do
    {
      v5 = *s++;
      v4 ^= (v4 << 6) + (v4 >> 2) - 1640531527 + v5;
    }
    while ( s != v3 );
    v27 = v4;
  }
  G4_VCALL<void>(a2, 44, "\n\n", 2);
  sprintf(v29, "// Array : %s\n", a1[2]);
  G4_VCALL<void>(a2, 44, v29, strlen(v29));
  sprintf(v29, "struct %s\n", a1[2]);
  v6 = v29;
  do
  {
    v7 = *(uint32_t *)v6;
    v6 += 4;
    v8 = ~v7 & (v7 - 16843009) & 0x80808080;
  }
  while ( v8 == 0 );
  if ( (~v7 & (v7 - 16843009) & 0x8080) == 0 )
  {
    v8 >>= 16;
    v6 += 2;
  }
  v9 = __CFADD__((uint8_t)v8, (uint8_t)v8);
  LOBYTE(v8) = 2 * v8;
  (*(void (**)(unsigned int, int *, char *, int))(*a2 + 44))(v8, a2, v29, &v6[-v9 - 3] - v29);
  G4_VCALL<void>(a2, 44, "\t: public base_array\n", 21);
  G4_VCALL<void>(a2, 44, "{\n", 2);
  sprintf(v29, "\ttypedef structures::%s struct_type;\n", *(uint32_t *)(a1[13] + 8));
  v10 = v29;
  do
  {
    v11 = *(uint32_t *)v10;
    v10 += 4;
    v12 = ~v11 & (v11 - 16843009) & 0x80808080;
  }
  while ( v12 == 0 );
  if ( (~v11 & (v11 - 16843009) & 0x8080) == 0 )
  {
    v12 >>= 16;
    v10 += 2;
  }
  v9 = __CFADD__((uint8_t)v12, (uint8_t)v12);
  LOBYTE(v12) = 2 * v12;
  (*(void (**)(unsigned int, int *, char *, int))(*a2 + 44))(v12, a2, v29, &v10[-v9 - 3] - v29);
  G4_VCALL<void>(a2, 44, &a0[1], 1);
  G4_VCALL<void>(a2, 44, "\tstruct names { enum names_e\n", 29);
  G4_VCALL<void>(a2, 44, "\t{\n", 3);
  v13 = a1[10];
  v24 = (a1[11] - v13) >> 2;
  if ( v24 != 0 )
  {
    v14 = 0;
    sprintf(v29, "\t\t%s = %u,\n", *(uint32_t *)(*(uint32_t *)v13 + 8), 0);
    while ( 1 )
    {
      ++v14;
      G4_VCALL<void>(a2, 44, v29, strlen(v29));
      if ( v14 == v24 )
        break;
      sprintf(v29, "\t\t%s = %u,\n", *(uint32_t *)(*(uint32_t *)(a1[10] + 4 * v14) + 8), v14);
    }
  }
  G4_VCALL<void>(a2, 44, "\t}; };\n", 7);
  G4_VCALL<void>(a2, 44, "\n\n", 2);
  G4_VCALL<void>(a2, 44, "\tstatic size_t size;\n", 21);
  G4_VCALL<void>(a2, 44, "\tstatic struct_type* entries;\n", 30);
  G4_VCALL<void>(a2, 44, "\n\n", 2);
  G4_VCALL<void>(a2, 44, "\tstatic void Load(StreamBase*);\n", 32);
  G4_VCALL<void>(a2, 44, "\tstatic void Unload();\n\n", 24);
  G4_VCALL<void>(a2, 44, "\tstatic void FillArrays(Std< Std<int>::Vector >::Vector & vl)\n", 62);
  G4_VCALL<void>(a2, 44, "\t{\n", 3);
  G4_VCALL<void>(a2, 44, "\t\tfor(int i = 0; i < size; ++i)\n", 32);
  G4_VCALL<void>(a2, 44, "\t\t{\n", 4);
  G4_VCALL<void>(a2, 44, "\t\t\tentries[i].FillArrayInt(vl[i]);\n", 35);
  G4_VCALL<void>(a2, 44, "\t\t}\n", 4);
  G4_VCALL<void>(a2, 44, "\t}\n\n", 4);
  G4_VCALL<void>(a2, 44, "\tstatic void GetEntryNames(std::vector< std::string> & v)\n", 58);
  G4_VCALL<void>(a2, 44, "\t{\n", 3);
  v15 = a1[10];
  v25 = (a1[11] - v15) >> 2;
  if ( v25 != 0 )
  {
    v16 = 0;
    sprintf(v29, "\t\tv.push_back(\"%s\");\n", *(uint32_t *)(*(uint32_t *)v15 + 8));
    while ( 1 )
    {
      ++v16;
      G4_VCALL<void>(a2, 44, v29, strlen(v29));
      if ( v16 == v25 )
        break;
      sprintf(v29, "\t\tv.push_back(\"%s\");\n", *(uint32_t *)(*(uint32_t *)(a1[10] + 4 * v16) + 8));
    }
  }
  G4_VCALL<void>(a2, 44, "\t}\n", 3);
  G4_VCALL<void>(a2, 44, "\n\n", 2);
  sprintf(v29, "\tstatic void RegisterEntries(size_t hname = 0x%08x)\n", v27);
  G4_VCALL<void>(a2, 44, v29, strlen(v29));
  G4_VCALL<void>(a2, 44, "\t{\n", 3);
  G4_VCALL<void>(a2, 44, "\t\t__SymbolicNames& sn = __GetSymbolicNames(hname);\n\n", 52);
  v17 = a1[10];
  v26 = (a1[11] - v17) >> 2;
  if ( v26 != 0 )
  {
    v18 = 0;
    sprintf(v29, "\t\tsn.RegisterName(\"%s\");\n", *(uint32_t *)(*(uint32_t *)v17 + 8));
    while ( 1 )
    {
      ++v18;
      G4_VCALL<void>(a2, 44, v29, strlen(v29));
      if ( v18 == v26 )
        break;
      sprintf(v29, "\t\tsn.RegisterName(\"%s\");\n", *(uint32_t *)(*(uint32_t *)(a1[10] + 4 * v18) + 8));
    }
  }
  G4_VCALL<void>(a2, 44, "\t}\n\n", 4);
  sprintf(v29, "0x%08x", v27);
  G4_VCALL<void>(a2, 44, "\tstatic size_t GetIndex(const char* name) {return __GetIndex(name, ", 67);
  G4_VCALL<void>(a2, 44, v29, strlen(v29));
  G4_VCALL<void>(a2, 44, ");}\n", 4);
  G4_VCALL<void>(a2, 44, "\tstatic const char* GetName(size_t idx) {\n", 42);
  v19 = *a2;
  if ( (unsigned int)(a1[11] - a1[10]) >> 2 != 0 )
  {
    (*(void (**)(int *, const char *, int))(v19 + 44))(a2, "\t\tswitch(idx){\n", 15);
    v20 = a1[10];
    v28 = (a1[11] - v20) >> 2;
    if ( v28 != 0 )
    {
      v21 = 0;
      while ( 1 )
      {
        v23 = *(uint32_t *)(v20 + 4 * v21);
        sprintf(v29, "\t\tcase %d:\n", v21);
        G4_VCALL<void>(a2, 44, v29, strlen(v29));
        sprintf(v29, "\t\t\treturn \"%s\";\n", *(uint32_t *)(v23 + 8));
        ++v21;
        G4_VCALL<void>(a2, 44, v29, strlen(v29));
        G4_VCALL<void>(a2, 44, "\t\t\tbreak;\n", 10);
        if ( v21 == v28 )
          break;
        v20 = a1[10];
      }
    }
    G4_VCALL<void>(a2, 44, "\t\t\tdefault:\n", 12);
    G4_VCALL<void>(a2, 44, "\t\t\t\treturn 0;\n", 14);
    G4_VCALL<void>(a2, 44, "\t\t\t\tbreak;\n", 11);
    G4_VCALL<void>(a2, 44, "\t\t}\n", 4);
  }
  else
  {
    (*(void (**)(int *, const char *, int))(v19 + 44))(a2, "\t\treturn 0;\n", 12);
  }
  G4_VCALL<void>(a2, 44, "\t}\n", 3);
  return G4_VCALL<int>(a2, 44, "};\n", 3);
}

// ----------------------------------------------------------------------------
// Function: xmldata::base_struct::GenerateHeader  (binary VA: 0xaa1450)
// Original: xmldata::base_struct::GenerateHeader
// ----------------------------------------------------------------------------
int xmldata::base_struct::GenerateHeader(uint32_t *a1, char *a2)
{
  char *v2;
  const char *s;
  const char *v4;
  unsigned int v5;
  int v6;
  int v7;
  char *v8;
  int v9;
  unsigned int v10;
  bool v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  const char *v25;
  const char *v26;
  unsigned int i;
  int v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  const char *v37;
  const char *v38;
  unsigned int j;
  int v40;
  int v41;
  int v42;
  size_t v44;
  char *v45;
  char *v46;
  unsigned int v47;
  int v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef char *_g4_t_v55;
  typedef char *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef char *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef bool _g4_t_v61;
  typedef char *_g4_t_v62;
  typedef char *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef char _g4_t_v65[156];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v49)) > _g4_s0 ? (0u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v50)) > _g4_s1 ? (0u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v51)) > _g4_s2 ? (0u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v52)) > _g4_s3 ? (4u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v53)) > _g4_s4 ? (4u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v54)) > _g4_s5 ? (4u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v55)) > _g4_s6 ? (8u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v56)) > _g4_s7 ? (8u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v57)) > _g4_s8 ? (8u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v58)) > _g4_s9 ? (8u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v59)) > _g4_s10 ? (8u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v60)) > _g4_s11 ? (12u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v61)) > _g4_s12 ? (16u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v62)) > _g4_s13 ? (16u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v63)) > _g4_s14 ? (16u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v64)) > _g4_s15 ? (24u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v65)) > _g4_s16 ? (32u + sizeof(_g4_t_v65)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 0u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 16u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);

  v2 = a2;
  s = (const char *)a1[2];
  v4 = &s[strlen(s)];
  v64 = 0;
  if ( s != v4 )
  {
    v5 = 0;
    do
    {
      v6 = *s++;
      v5 ^= (v5 << 6) + (v5 >> 2) - 1640531527 + v6;
    }
    while ( s != v4 );
    v64 = v5;
  }
  v55 = "base_struct";
  v7 = a1[13];
  v61 = v7 != 0;
  if ( v7 != 0 )
    v55 = *(char **)(v7 + 8);
  G4_VCALL<void>(a2, 44, "\n\n", 2);
  sprintf(v65, "// Structure : %s\n", a1[2]);
  G4_VCALL<void>(a2, 44, v65, strlen(v65));
  sprintf(v65, "struct %s\n\t: public %s\n{\n", a1[2], v55);
  v8 = v65;
  do
  {
    v9 = *(uint32_t *)v8;
    v8 += 4;
    v10 = ~v9 & (v9 - 16843009) & 0x80808080;
  }
  while ( v10 == 0 );
  if ( (~v9 & (v9 - 16843009) & 0x8080) == 0 )
  {
    v10 >>= 16;
    v8 += 2;
  }
  v11 = __CFADD__((uint8_t)v10, (uint8_t)v10);
  LOBYTE(v10) = 2 * v10;
  (*(void (**)(unsigned int, char *, char *, int))(*(uint32_t *)a2 + 44))(v10, a2, v65, &v8[-v11 - 3] - v65);
  if ( !v61 )
  {
    v29 = a1[10];
    v60 = (a1[11] - v29) >> 2;
    if ( v60 != 0 )
    {
      v30 = 0;
      while ( 1 )
      {
        v31 = *(uint32_t **)(v29 + 4 * v30);
        sprintf(v65, "\t// Field : %s\n", v31[10]);
        ++v30;
        G4_VCALL<void>(a2, 44, v65, strlen(v65));
        G4_VCALL<void>(v31, 48, a2);
        G4_VCALL<void>(a2, 44, &a0[1], 1);
        if ( v30 == v60 )
          break;
        v29 = a1[10];
      }
    }
    G4_VCALL<void>(a2, 44, &a0[1], 1);
    G4_VCALL<void>(a2, 44, "\tvirtual void Init();\n", 22);
    G4_VCALL<void>(a2, 44, "\tvirtual void Load(StreamBase* stream);\n", 40);
    G4_VCALL<void>(a2, 44, "\tvirtual void Unload();\n", 24);
    G4_VCALL<void>(a2, 44, "\n\n", 2);
  }
  sprintf(v65, "\tenum FieldIdxEnum_%s {\n", a1[2]);
  G4_VCALL<void>(a2, 44, v65, strlen(v65));
  v12 = a1[10];
  v49 = (a1[11] - v12) >> 2;
  if ( v49 != 0 )
  {
    v13 = 0;
    while ( 1 )
    {
      sprintf(v65, "\t\t%s_fieldIdx,\n", *(uint32_t *)(*(uint32_t *)(v12 + 4 * v13++) + 40));
      G4_VCALL<void>(a2, 44, v65, strlen(v65));
      if ( v13 == v49 )
        break;
      v12 = a1[10];
    }
  }
  G4_VCALL<void>(a2, 44, "\t};\n\n", 5);
  sprintf(v65, "\tstatic void RegisterFields(size_t hname = 0x%08x)\n", v64);
  G4_VCALL<void>(a2, 44, v65, strlen(v65));
  G4_VCALL<void>(a2, 44, "\t{\n", 3);
  v14 = *(uint32_t *)a2;
  if ( v61 )
  {
    (*(void (**)(char *, const char *, int))(v14 + 44))(
      a2,
      "// No registering, use base symbolic names instead\n",
      51);
    G4_VCALL<void>(a2, 44, "\t}\n\n", 4);
    G4_VCALL<void>(a2, 44, "\tvoid FillArrayInt(Std<int>::Vector & v)\n", 41);
    G4_VCALL<void>(a2, 44, "\t{\n", 3);
    sprintf(v65, "\t\t%s::FillArrayInt(v);\n", v55);
    G4_VCALL<void>(a2, 44, v65, strlen(v65));
    G4_VCALL<void>(a2, 44, "\t}\n\n", 4);
    G4_VCALL<void>(a2, 44, "\tint GetIntValue(const char * name)\n", 36);
    G4_VCALL<void>(a2, 44, "\t{\n", 3);
    sprintf(v65, "\t\treturn %s::GetIntValue(name);\n", v55);
    G4_VCALL<void>(a2, 44, v65, strlen(v65));
    G4_VCALL<void>(a2, 44, "\t}\n\n", 4);
    G4_VCALL<void>(a2, 44, "\tconst char * GetStringValue(const char * name)\n", 48);
    G4_VCALL<void>(a2, 44, "\t{\n", 3);
    sprintf(v65, "\t\treturn %s::GetStringValue(name);\n", v55);
    G4_VCALL<void>(a2, 44, v65, strlen(v65));
    G4_VCALL<void>(a2, 44, "\t}\n\n", 4);
    G4_VCALL<void>(a2, 44, "\tstatic void GetFieldNames(std::vector<std::string> & v)\n", 57);
    G4_VCALL<void>(a2, 44, "\t{\n", 3);
    sprintf(v65, "\t\t%s::GetFieldNames(v);\n", v55);
    G4_VCALL<void>(a2, 44, v65, strlen(v65));
    G4_VCALL<void>(a2, 44, "\t}\n\n", 4);
    v44 = strlen(v55);
    v45 = v55;
    v46 = &v55[v44];
    v47 = 0;
    if ( v55 != v46 )
    {
      do
      {
        v48 = *v45++;
        v47 ^= (v47 << 6) + (v47 >> 2) - 1640531527 + v48;
      }
      while ( v45 != v46 );
    }
    sprintf(v65, "0x%08x", v47);
  }
  else
  {
    (*(void (**)(char *, const char *, int))(v14 + 44))(
      a2,
      "\t\t__SymbolicNames& sn = __GetSymbolicNames(hname);\n\n",
      52);
    v15 = a1[10];
    v50 = (a1[11] - v15) >> 2;
    if ( v50 != 0 )
    {
      v16 = 0;
      while ( 1 )
      {
        sprintf(v65, "\t\tsn.RegisterName(\"%s\");\n", *(uint32_t *)(*(uint32_t *)(v15 + 4 * v16++) + 40));
        G4_VCALL<void>(a2, 44, v65, strlen(v65));
        if ( v16 == v50 )
          break;
        v15 = a1[10];
      }
    }
    G4_VCALL<void>(a2, 44, "\t}\n\n", 4);
    G4_VCALL<void>(a2, 44, "\tvoid FillArrayInt(Std<int>::Vector & v)\n", 41);
    G4_VCALL<void>(a2, 44, "\t{\n", 3);
    v17 = a1[10];
    v52 = (a1[11] - v17) >> 2;
    if ( v52 != 0 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( strcmp(
               (const char *)(*(int (**)(uint32_t))(**(uint32_t **)(v17 + 4 * v18) + 96))(*(uint32_t *)(v17 + 4 * v18)),
               "int32") == 0 )
        {
          v19 = *(uint32_t *)(a1[10] + 4 * v18);
          if ( *(uint8_t *)(v19 + 44) == 0 )
          {
            sprintf(v65, "\t\tv[%d] = %s;\n", v18, *(uint32_t *)(v19 + 40));
            G4_VCALL<void>(a2, 44, v65, strlen(v65));
          }
        }
        if ( ++v18 == v52 )
          break;
        v17 = a1[10];
      }
      v2 = a2;
    }
    G4_VCALL<void>(v2, 44, "\t}\n\n", 4);
    G4_VCALL<void>(v2, 44, "\tint GetIntValue(const char * name)\n", 36);
    G4_VCALL<void>(v2, 44, "\t{\n", 3);
    v20 = a1[10];
    v53 = (a1[11] - v20) >> 2;
    if ( v53 != 0 )
    {
      v56 = v2;
      v21 = 0;
      while ( strcmp(
                (const char *)(*(int (**)(uint32_t))(**(uint32_t **)(v20 + 4 * v21) + 96))(*(uint32_t *)(v20 + 4 * v21)),
                "int32") != 0
           || *(uint8_t *)(*(uint32_t *)(a1[10] + 4 * v21) + 44) != 0 )
      {
        if ( ++v21 == v53 )
        {
          v2 = v56;
          goto LABEL_50;
        }
        v20 = a1[10];
      }
      v2 = v56;
      G4_VCALL<void>(v56, 44, "\t\tsize_t hashedName = glitch::core::hashString(name);\n", 54);
      G4_VCALL<void>(v2, 44, "\t\tswitch(hashedName)\n", 21);
      G4_VCALL<void>(v2, 44, "\t\t{\n", 4);
      v22 = a1[10];
      v57 = (a1[11] - v22) >> 2;
      if ( v57 != 0 )
      {
        v62 = v2;
        v23 = 0;
        while ( 1 )
        {
          if ( strcmp(
                 (const char *)(*(int (**)(uint32_t))(**(uint32_t **)(v22 + 4 * v23) + 96))(*(uint32_t *)(v22 + 4 * v23)),
                 "int32") == 0 )
          {
            v24 = *(uint32_t *)(a1[10] + 4 * v23);
            if ( *(uint8_t *)(v24 + 44) == 0 )
            {
              v25 = *(const char **)(v24 + 40);
              v26 = &v25[strlen(v25)];
              for ( i = 0; v25 != v26; i ^= (i << 6) + (i >> 2) - 1640531527 + v28 )
                v28 = *v25++;
              sprintf(v65, "\t\t\tcase 0x%x:\n", i);
              G4_VCALL<void>(v62, 44, v65, strlen(v65));
              sprintf(v65, "\t\t\t\treturn %s;\n", *(uint32_t *)(*(uint32_t *)(a1[10] + 4 * v23) + 40));
              G4_VCALL<void>(v62, 44, v65, strlen(v65));
              G4_VCALL<void>(v62, 44, "\t\t\t\tbreak;\n\n", 12);
            }
          }
          if ( ++v23 == v57 )
            break;
          v22 = a1[10];
        }
        v2 = v62;
      }
      G4_VCALL<void>(v2, 44, "\t\t\tdefault:\n", 12);
      G4_VCALL<void>(v2, 44, "\t\t\t\treturn -1;\n", 15);
      G4_VCALL<void>(v2, 44, "\t\t\t\tbreak;\n", 11);
      G4_VCALL<void>(v2, 44, "\t\t}\n", 4);
    }
LABEL_50:
    G4_VCALL<void>(v2, 44, "\t\treturn -1;", 12);
    G4_VCALL<void>(v2, 44, "\t}\n\n", 4);
    G4_VCALL<void>(v2, 44, "\tconst char * GetStringValue(const char * name)\n", 48);
    G4_VCALL<void>(v2, 44, "\t{\n", 3);
    v32 = a1[10];
    v54 = (a1[11] - v32) >> 2;
    if ( v54 != 0 )
    {
      v58 = v2;
      v33 = 0;
      while ( strcmp(
                (const char *)(*(int (**)(uint32_t))(**(uint32_t **)(v32 + 4 * v33) + 96))(*(uint32_t *)(v32 + 4 * v33)),
                "const char*") != 0
           || *(uint8_t *)(*(uint32_t *)(a1[10] + 4 * v33) + 44) != 0 )
      {
        if ( ++v33 == v54 )
        {
          v2 = v58;
          goto LABEL_66;
        }
        v32 = a1[10];
      }
      v2 = v58;
      G4_VCALL<void>(v58, 44, "\t\tsize_t hashedName = glitch::core::hashString(name);\n", 54);
      G4_VCALL<void>(v2, 44, "\t\tswitch(hashedName)\n", 21);
      G4_VCALL<void>(v2, 44, "\t\t{\n", 4);
      v34 = a1[10];
      v59 = (a1[11] - v34) >> 2;
      if ( v59 != 0 )
      {
        v63 = v2;
        v35 = 0;
        while ( 1 )
        {
          if ( strcmp(
                 (const char *)(*(int (**)(uint32_t))(**(uint32_t **)(v34 + 4 * v35) + 96))(*(uint32_t *)(v34 + 4 * v35)),
                 "const char*") == 0 )
          {
            v36 = *(uint32_t *)(a1[10] + 4 * v35);
            if ( *(uint8_t *)(v36 + 44) == 0 )
            {
              v37 = *(const char **)(v36 + 40);
              v38 = &v37[strlen(v37)];
              for ( j = 0; v37 != v38; j ^= (j << 6) + (j >> 2) - 1640531527 + v40 )
                v40 = *v37++;
              sprintf(v65, "\t\t\tcase 0x%x:\n", j);
              G4_VCALL<void>(v63, 44, v65, strlen(v65));
              sprintf(v65, "\t\t\t\treturn %s;\n", *(uint32_t *)(*(uint32_t *)(a1[10] + 4 * v35) + 40));
              G4_VCALL<void>(v63, 44, v65, strlen(v65));
              G4_VCALL<void>(v63, 44, "\t\t\t\tbreak;\n\n", 12);
            }
          }
          if ( ++v35 == v59 )
            break;
          v34 = a1[10];
        }
        v2 = v63;
      }
      G4_VCALL<void>(v2, 44, "\t\t\tdefault:\n", 12);
      G4_VCALL<void>(v2, 44, "\t\t\t\treturn \"\";\n", 15);
      G4_VCALL<void>(v2, 44, "\t\t\t\tbreak;\n", 11);
      G4_VCALL<void>(v2, 44, "\t\t}\n", 4);
    }
LABEL_66:
    G4_VCALL<void>(v2, 44, "\t\treturn \"\";", 12);
    G4_VCALL<void>(v2, 44, "\t}\n\n", 4);
    G4_VCALL<void>(v2, 44, "\tstatic void GetFieldNames(std::vector<std::string> & v)\n", 57);
    G4_VCALL<void>(v2, 44, "\t{\n", 3);
    v41 = a1[10];
    v51 = (a1[11] - v41) >> 2;
    if ( v51 != 0 )
    {
      v42 = 0;
      while ( 1 )
      {
        sprintf(v65, "\t\tv.push_back(\"%s\");\n", *(uint32_t *)(*(uint32_t *)(v41 + 4 * v42++) + 40));
        G4_VCALL<void>(v2, 44, v65, strlen(v65));
        if ( v42 == v51 )
          break;
        v41 = a1[10];
      }
    }
    G4_VCALL<void>(v2, 44, "\t}\n\n", 4);
    sprintf(v65, "0x%08x", v64);
  }
  G4_VCALL<void>(v2, 44, "\tstatic size_t GetIndex(const char* name) {return __GetIndex(name, ", 67);
  G4_VCALL<void>(v2, 44, v65, strlen(v65));
  G4_VCALL<void>(v2, 44, ");}\n", 4);
  G4_VCALL<void>(v2, 44, "\tstatic const char* GetName(size_t idx) {return __GetName(idx, ", 63);
  G4_VCALL<void>(v2, 44, v65, strlen(v65));
  G4_VCALL<void>(v2, 44, ");}\n", 4);
  G4_VCALL<void>(v2, 44, "\tstatic size_t GetNumFields() {return ", 38);
  sprintf(v65, "%d", (a1[11] - a1[10]) >> 2);
  G4_VCALL<void>(v2, 44, v65, strlen(v65));
  G4_VCALL<void>(v2, 44, ";}\n", 3);
  return G4_VCALL<int>(v2, 44, "};\n", 3);
}

// ----------------------------------------------------------------------------
// Function: sub_AA3FB0  (binary VA: 0xaa3fb0)
// Original: sub_AA3FB0
// ----------------------------------------------------------------------------
bool sub_AA3FB0(int a1, bool a2, int a3)
{
  bool result;

  if ( (uint8_t)gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)(a1 + 1180)) != 0 )
    gameswf::CharacterHandle::setVisible((gameswf::CharacterHandle::Self *)(a1 + 1180), a2);
  result = a2;
  if ( a2 && *(uint32_t *)(a1 + 1216) < a3 )
    *(uint32_t *)(a1 + 1216) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA4040  (binary VA: 0xaa4040)
// Original: sub_AA4040
// ----------------------------------------------------------------------------
int sub_AA4040(int a1, char *s, char a3)
{
  gameswf::CharacterHandle::Self *v3;
  int result;
  gameswf::Self *v5;
  gameswf::Self *v6;
  typedef unsigned int _g4_t_v7;
  typedef unsigned int _g4_t_v8;
  typedef const char *_g4_t_v9;
  typedef size_t _g4_t_v10;
  typedef size_t _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  typedef void *_g4_t_v14;
  typedef gameswf::Self *_g4_t_v15;
  typedef int16_t _g4_t_v16;
  typedef int16_t _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef void *_g4_t_v20;
  typedef gameswf::Self *_g4_t_v21;
  typedef int16_t _g4_t_v22;
  typedef int16_t _g4_t_v23;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v11)) > _g4_s4 ? (24u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v12)) > _g4_s5 ? (32u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (33u + sizeof(_g4_t_v13)) > _g4_s6 ? (33u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v14)) > _g4_s7 ? (40u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v15)) > _g4_s8 ? (44u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v16)) > _g4_s9 ? (48u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (50u + sizeof(_g4_t_v17)) > _g4_s10 ? (50u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v18)) > _g4_s11 ? (64u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (65u + sizeof(_g4_t_v19)) > _g4_s12 ? (65u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v20)) > _g4_s13 ? (72u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v21)) > _g4_s14 ? (76u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v22)) > _g4_s15 ? (80u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (82u + sizeof(_g4_t_v23)) > _g4_s16 ? (82u + sizeof(_g4_t_v23)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 33u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 50u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 65u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 82u);

  v3 = (gameswf::CharacterHandle::Self *)(a1 + 1036);
  result = gameswf::CharacterHandle::isValid((gameswf::CharacterHandle::Self *)(a1 + 1036));
  if ( (uint8_t)result != 0 )
  {
    if ( s != nullptr )
    {
      if ( a3 != 0 )
      {
        v12 = 1;
        v13 = 0;
        v11 = strlen(s);
        gameswf::String::resize((gameswf::String::Self *)&v12, v11);
        v6 = (gameswf::Self *)&v13;
        if ( v12 == -1 )
          v6 = v15;
        gameswf::Strcpy_s(v6, (char *)(v11 + 1), (gameswf::Self *)s, v9);
        v16 = -1;
        HIBYTE(v17) = ((uint16_t)(v17 | 0x7F) >> 8) | 1;
        LOBYTE(v17) = 127;
        gameswf::CharacterHandle::setHtml((gameswf::CharacterHandle::Self *)(a1 + 1072), (const gameswf::String::Self *)&v12);
        if ( v12 == -1 && (v17 & 0x100) != 0 )
          gameswf::free_internal(v15, v14, v8);
      }
      else
      {
        v18 = 1;
        v19 = 0;
        v10 = strlen(s);
        gameswf::String::resize((gameswf::String::Self *)&v18, v10);
        v5 = (gameswf::Self *)&v19;
        if ( v18 == -1 )
          v5 = v21;
        gameswf::Strcpy_s(v5, (char *)(v10 + 1), (gameswf::Self *)s, v9);
        v22 = -1;
        HIBYTE(v23) = ((uint16_t)(v23 | 0x7F) >> 8) | 1;
        LOBYTE(v23) = 127;
        gameswf::CharacterHandle::setText((gameswf::CharacterHandle::Self *)(a1 + 1072), (const gameswf::String::Self *)&v18);
        if ( v18 == -1 && (v23 & 0x100) != 0 )
          gameswf::free_internal(v21, v20, v7);
      }
      return gameswf::CharacterHandle::setVisible(v3, true);
    }
    else
    {
      return gameswf::CharacterHandle::setVisible(v3, false);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA4250  (binary VA: 0xaa4250)
// Original: sub_AA4250
// ----------------------------------------------------------------------------
char * sub_AA4250(int a1, char *needle)
{
  int v2;
  const char *haystack;
  char *result;

  v2 = 0;
  while ( 1 )
  {
    haystack = (const char *)(**(int (***)(int))(a1 + 24 * v2 + 12))(a1 + 24 * v2 + 12);
    result = (char *)(strstr(haystack, needle));
    if ( result != nullptr )
      break;
    if ( ++v2 == 42 )
      return result;
  }
  return (char *)(a1 + 24 * v2 + 12);
}

// ----------------------------------------------------------------------------
// Function: sub_AA42B0  (binary VA: 0xaa42b0)
// Original: sub_AA42B0
// ----------------------------------------------------------------------------
char * sub_AA42B0(int a1, char *a2)
{
  const char *v2;
  int v3;
  int v4;
  const char *haystack;
  char *result;
  typedef char *_g4_t_needle;
  typedef const char *_g4_t_v8;
  typedef const char *_g4_t_v9;
  typedef const char *_g4_t_v10;
  typedef uint8_t _g4_t_v11[4];
  typedef uint8_t _g4_t_v12[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_needle)) > _g4_s0 ? (4u + sizeof(_g4_t_needle)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v11)) > _g4_s4 ? (40u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v12)) > _g4_s5 ? (44u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_needle &needle = *reinterpret_cast<_g4_t_needle *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  needle = a2;
  v8 = "name";
  pugi::xml_node::attribute(v12);
  if ( pugi::xml_attribute::as_int(v12) != -1 )
  {
    v2 = (const char *)pugi::xml_attribute::value(v12);
    if ( v2 != nullptr )
      goto LABEL_3;
  }
  v10 = "name";
  v9 = "name";
  sub_B7E810(v11);
  result = (char *)pugi::xml_node::child(v11);
  if ( result != (char *)-1 )
  {
    needle = (char *)(v11);
    v8 = "value";
    pugi::xml_node::attribute(v12);
    result = (char *)pugi::xml_attribute::as_int(v12);
    if ( result != (char *)-1 )
    {
      result = (char *)pugi::xml_attribute::value(v12);
      v2 = result;
      if ( result != nullptr )
      {
LABEL_3:
        v3 = 0;
        while ( 1 )
        {
          v4 = a1 + 24 * v3;
          haystack = (const char *)(**(int (***)(int, char *, const char *, const char *, const char *))(v4 + 12))(
                                     v4 + 12,
                                     needle,
                                     v8,
                                     v9,
                                     v10);
          result = (char *)(strstr(haystack, v2));
          if ( result != nullptr )
            break;
          if ( ++v3 == 42 )
            return result;
        }
        return (char *)sub_A7E430(v4 + 24, a2);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA43D0  (binary VA: 0xaa43d0)
// Original: sub_AA43D0
// ----------------------------------------------------------------------------
void sub_AA43D0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_AA43E0  (binary VA: 0xaa43e0)
// Original: sub_AA43E0
// ----------------------------------------------------------------------------
void sub_AA43E0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_AA43F0  (binary VA: 0xaa43f0)
// Original: sub_AA43F0
// ----------------------------------------------------------------------------
int sub_AA43F0(int a1)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 1264) != 0 )
    return StringManager::GetCount(*(uint32_t *)(a1 + 1264));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA4420  (binary VA: 0xaa4420)
// Original: sub_AA4420
// ----------------------------------------------------------------------------
const char * sub_AA4420(int a1, int a2)
{
  const char *result;

  result = "Invalid String";
  if ( *(uint32_t *)(a1 + 1264) != 0 )
    return (const char *)StringManager::GetString(*(uint32_t *)(a1 + 1264), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA4460  (binary VA: 0xaa4460)
// Original: sub_AA4460
// ----------------------------------------------------------------------------
int sub_AA4460(int a1, int a2)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 1264) != 0 )
    return StringManager::GetStringId(*(uint32_t *)(a1 + 1264), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA44A0  (binary VA: 0xaa44a0)
// Original: sub_AA44A0
// ----------------------------------------------------------------------------
const char * sub_AA44A0(int a1, int a2, int a3)
{
  int v3;
  const char *result;

  v3 = *(uint32_t *)(a1 + 1264);
  result = "Invalid String";
  if ( a2 >= 0 && v3 != 0 && a3 >= 0 )
    return (const char *)StringManager::GetSectionString(v3, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA4500  (binary VA: 0xaa4500)
// Original: sub_AA4500
// ----------------------------------------------------------------------------
int sub_AA4500(int a1, int a2, int a3, int a4)
{
  int v4;
  int result;

  v4 = *(uint32_t *)(a1 + 1264);
  result = -1;
  if ( a2 >= 0 && v4 != 0 && a3 >= 0 )
    return sub_BA2F50(v4, a2, a3, a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA4560  (binary VA: 0xaa4560)
// Original: sub_AA4560
// ----------------------------------------------------------------------------
int sub_AA4560(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;

  result = a2;
  v5 = *(uint32_t *)(a1 + 1264);
  if ( a2 >= 0 && v5 != 0 && a3 >= 0 )
    return (int)(uintptr_t)(sub_BA3000(v5, a2, a3, a4));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA45C0  (binary VA: 0xaa45c0)
// Original: sub_AA45C0
// ----------------------------------------------------------------------------
int sub_AA45C0(int a1, uint32_t *a2, char *s, int a4)
{
  int v4;
  size_t v5;
  int v6;
  const char *v7;
  size_t v8;
  int v9;
  int v10;
  uint8_t *v11;
  char v12;
  int v13;
  int v15;
  int v16;
  int i;
  int v18;

  v4 = a4 + 8;
  if ( s != nullptr )
  {
    v5 = strlen(s);
    g4_std_compat::ostream_write(v4, s, v5);
  }
  else
  {
    sub_1911530(
      *(uint32_t *)(*(uint32_t *)(a4 + 8) - 12) + v4,
      *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a4 + 8) - 12) + v4 + 20) | 1);
  }
  g4_std_compat::ostream_write(v4, &unk_1B152C0, 2);
  if ( a2 != nullptr )
  {
    v6 = a2[2];
    v16 = a2[4];
    v18 = a2[5];
    for ( i = a2[6]; i != v6; v18 += 4 )
    {
      while ( 1 )
      {
        v7 = *(const char **)v6;
        v15 = *(uint32_t *)(v6 + 4);
        if ( *(uint32_t *)v6 != 0 )
        {
          v8 = strlen(v7);
          g4_std_compat::ostream_write(v4, v7, v8);
        }
        else
        {
          sub_1911530(
            v4 + *(uint32_t *)(*(uint32_t *)(a4 + 8) - 12),
            *(uint32_t *)(v4 + *(uint32_t *)(*(uint32_t *)(a4 + 8) - 12) + 20) | 1);
        }
        g4_std_compat::ostream_write(v4, " x ", 3);
        v6 += 12;
        v9 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(v4, v15));
        g4_std_compat::ostream_write(v9, ", ", 2);
        if ( v6 == v16 )
          break;
        if ( i == v6 )
          goto LABEL_11;
      }
      v6 = *(uint32_t *)(v18 + 4);
      v16 = v6 + 504;
    }
  }
  else
  {
    g4_std_compat::ostream_write(v4, "N/A", 3);
  }
LABEL_11:
  v10 = *(uint32_t *)(*(uint32_t *)(a4 + 8) - 12);
  v11 = *(uint8_t **)(v4 + v10 + 124);
  if ( v11 == nullptr )
    sub_18FFF30();
  if ( v11[28] != 0 )
  {
    v12 = v11[39];
  }
  else
  {
    sub_18FFC70(*(uint32_t *)(v4 + v10 + 124));
    v12 = G4_VCALL<int>(v11, 24, 10);
  }
  v13 = (int)(uintptr_t)(g4_std::ostream::put(v4, v12));
  return (int)(uintptr_t)(g4_std_compat::ostream_flush(v13));
}

// ----------------------------------------------------------------------------
// Function: sub_AA47E0  (binary VA: 0xaa47e0)
// Original: sub_AA47E0
// ----------------------------------------------------------------------------
int sub_AA47E0(int a1, Json::Value::Self *a2, int a3)
{
  Json::Value::Self *v3;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  unsigned int kk;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  const char *s;
  const char *v12;
  size_t v13;
  Json::Value::Self *v14;
  const char *v15;
  const char *v16;
  size_t v17;
  Json::Value::Self *v18;
  const char *v19;
  const char *v20;
  size_t v21;
  Json::Value::Self *v22;
  const char *v23;
  const char *v24;
  size_t v25;
  Json::Value::Self *v26;
  const char *v27;
  const char *v28;
  size_t v29;
  Json::Value::Self *v30;
  const char *v31;
  const char *v32;
  size_t v33;
  Json::Value::Self *v34;
  const char *v35;
  const char *v36;
  size_t v37;
  Json::Value::Self *v38;
  const char *v39;
  const char *v40;
  size_t v41;
  Json::Value::Self *v42;
  const char *v43;
  const char *v44;
  size_t v45;
  unsigned int jj;
  Json::Value::Self *v48;
  int v49;
  Json::Value::Self *v50;
  unsigned int ii;
  Json::Value::Self *v52;
  Json::Value::Self *v53;
  unsigned int v54;
  unsigned int i;
  unsigned int j;
  unsigned int k;
  unsigned int m;
  unsigned int n;
  Json::Value::Self *v60;
  Json::Value::Self *v61;
  Json::Value::Self *v62;
  Json::Value::Self *v63;
  Json::Value::Self *v64;
  Json::Value::Self *v65;
  Json::Value::Self *v66;
  Json::Value::Self *v67;
  Json::Value::Self *v68;
  Json::Value::Self *v69;
  Json::Value::Self *v70;
  Json::Value::Self *v71;

  v3 = (Json::Value::Self *)Json::Value::opIndex(a2, "children");
  v60 = v3;
  v54 = 0;
  v49 = a3 + 8;
  while ( v54 < Json::Value::size(v3) )
  {
    v61 = (Json::Value::Self *)Json::Value::opIndex(v60, v54);
    v4 = (Json::Value::Self *)Json::Value::opIndex(v61, "children");
    v62 = v4;
    for ( i = 0; i < Json::Value::size(v4); ++i )
    {
      v63 = (Json::Value::Self *)Json::Value::opIndex(v62, i);
      v5 = (Json::Value::Self *)Json::Value::opIndex(v63, "children");
      v64 = v5;
      for ( j = 0; j < Json::Value::size(v5); ++j )
      {
        v65 = (Json::Value::Self *)Json::Value::opIndex(v64, j);
        v6 = (Json::Value::Self *)Json::Value::opIndex(v65, "children");
        v66 = v6;
        for ( k = 0; k < Json::Value::size(v6); ++k )
        {
          v67 = (Json::Value::Self *)Json::Value::opIndex(v66, k);
          v68 = (Json::Value::Self *)Json::Value::opIndex(v67, "children");
          for ( m = 0; m < Json::Value::size(v68); ++m )
          {
            v69 = (Json::Value::Self *)Json::Value::opIndex(v68, m);
            v70 = (Json::Value::Self *)Json::Value::opIndex(v69, "children");
            for ( n = 0; n < Json::Value::size(v70); ++n )
            {
              v71 = (Json::Value::Self *)Json::Value::opIndex(v70, n);
              v53 = (Json::Value::Self *)Json::Value::opIndex(v71, "children");
              for ( ii = 0; ii < Json::Value::size(v53); ++ii )
              {
                v52 = (Json::Value::Self *)Json::Value::opIndex(v53, ii);
                v50 = (Json::Value::Self *)Json::Value::opIndex(v52, "children");
                for ( jj = 0; jj < Json::Value::size(v50); ++jj )
                {
                  v48 = (Json::Value::Self *)Json::Value::opIndex(v50, jj);
                  v7 = (Json::Value::Self *)Json::Value::opIndex(v48, "children");
                  for ( kk = 0; kk < Json::Value::size(v7); ++kk )
                  {
                    v9 = (Json::Value::Self *)Json::Value::opIndex(v7, kk);
                    sub_AA47E0(a1, v9, a3);
                  }
                  v10 = (Json::Value::Self *)Json::Value::opIndex(v48, "name");
                  s = (const char *)Json::Value::asCString(v10);
                  v12 = s;
                  if ( s != nullptr )
                  {
                    v13 = strlen(s);
                  }
                  else
                  {
                    v13 = 7;
                    v12 = "unnamed";
                  }
                  g4_std_compat::ostream_write(v49, v12, v13);
                  g4_std_compat::ostream_write(v49, ", ", 2);
                }
                v14 = (Json::Value::Self *)Json::Value::opIndex(v52, "name");
                v15 = (const char *)Json::Value::asCString(v14);
                v16 = v15;
                if ( v15 != nullptr )
                {
                  v17 = strlen(v15);
                }
                else
                {
                  v17 = 7;
                  v16 = "unnamed";
                }
                g4_std_compat::ostream_write(v49, v16, v17);
                g4_std_compat::ostream_write(v49, ", ", 2);
              }
              v18 = (Json::Value::Self *)Json::Value::opIndex(v71, "name");
              v19 = (const char *)Json::Value::asCString(v18);
              v20 = v19;
              if ( v19 != nullptr )
              {
                v21 = strlen(v19);
              }
              else
              {
                v21 = 7;
                v20 = "unnamed";
              }
              g4_std_compat::ostream_write(v49, v20, v21);
              g4_std_compat::ostream_write(v49, ", ", 2);
            }
            v22 = (Json::Value::Self *)Json::Value::opIndex(v69, "name");
            v23 = (const char *)Json::Value::asCString(v22);
            v24 = v23;
            if ( v23 != nullptr )
            {
              v25 = strlen(v23);
            }
            else
            {
              v25 = 7;
              v24 = "unnamed";
            }
            g4_std_compat::ostream_write(v49, v24, v25);
            g4_std_compat::ostream_write(v49, ", ", 2);
          }
          v26 = (Json::Value::Self *)Json::Value::opIndex(v67, "name");
          v27 = (const char *)Json::Value::asCString(v26);
          v28 = v27;
          if ( v27 != nullptr )
          {
            v29 = strlen(v27);
          }
          else
          {
            v29 = 7;
            v28 = "unnamed";
          }
          g4_std_compat::ostream_write(v49, v28, v29);
          g4_std_compat::ostream_write(v49, ", ", 2);
          v6 = v66;
        }
        v30 = (Json::Value::Self *)Json::Value::opIndex(v65, "name");
        v31 = (const char *)Json::Value::asCString(v30);
        v32 = v31;
        if ( v31 != nullptr )
        {
          v33 = strlen(v31);
        }
        else
        {
          v33 = 7;
          v32 = "unnamed";
        }
        g4_std_compat::ostream_write(v49, v32, v33);
        g4_std_compat::ostream_write(v49, ", ", 2);
        v5 = v64;
      }
      v34 = (Json::Value::Self *)Json::Value::opIndex(v63, "name");
      v35 = (const char *)Json::Value::asCString(v34);
      v36 = v35;
      if ( v35 != nullptr )
      {
        v37 = strlen(v35);
      }
      else
      {
        v37 = 7;
        v36 = "unnamed";
      }
      g4_std_compat::ostream_write(v49, v36, v37);
      g4_std_compat::ostream_write(v49, ", ", 2);
      v4 = v62;
    }
    v38 = (Json::Value::Self *)Json::Value::opIndex(v61, "name");
    v39 = (const char *)Json::Value::asCString(v38);
    v40 = v39;
    if ( v39 != nullptr )
    {
      v41 = strlen(v39);
    }
    else
    {
      v41 = 7;
      v40 = "unnamed";
    }
    g4_std_compat::ostream_write(v49, v40, v41);
    g4_std_compat::ostream_write(v49, ", ", 2);
    ++v54;
    v3 = v60;
  }
  v42 = (Json::Value::Self *)Json::Value::opIndex(a2, "name");
  v43 = (const char *)Json::Value::asCString(v42);
  v44 = v43;
  if ( v43 != nullptr )
  {
    v45 = strlen(v43);
  }
  else
  {
    v45 = 7;
    v44 = "unnamed";
  }
  g4_std_compat::ostream_write(v49, v44, v45);
  return (int)(uintptr_t)(g4_std_compat::ostream_write(v49, ", ", 2));
}

// ----------------------------------------------------------------------------
// Function: sub_AA4F60  (binary VA: 0xaa4f60)
// Original: sub_AA4F60
// ----------------------------------------------------------------------------
int sub_AA4F60(int a1, char *s, int a3, int a4, int a5, int a6)
{
  int v6;
  size_t v7;
  int v8;
  uint8_t *v9;
  char v10;
  int v11;
  int v13;
  long double v14; // fst7
  size_t v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  uint8_t *v20;
  char v21;
  int v22;
  int v23;
  int v24;

  if ( a4 == 0 )
  {
    v6 = a6 + 8;
    if ( s != nullptr )
    {
      v7 = strlen(s);
      g4_std_compat::ostream_write(a6 + 8, s, v7);
    }
    else
    {
      sub_1911530(
        *(uint32_t *)(*(uint32_t *)(a6 + 8) - 12) + v6,
        *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a6 + 8) - 12) + v6 + 20) | 1);
    }
    g4_std_compat::ostream_write(a6 + 8, "ERROR -- TOTAL VALUE IS 0.", 26);
    v8 = *(uint32_t *)(*(uint32_t *)(a6 + 8) - 12);
    v9 = *(uint8_t **)(v6 + v8 + 124);
    if ( v9 != nullptr )
    {
      if ( v9[28] != 0 )
      {
        v10 = v9[39];
      }
      else
      {
        sub_18FFC70(*(uint32_t *)(v6 + v8 + 124));
        v10 = G4_VCALL<int>(v9, 24, 10);
      }
      v11 = (int)(uintptr_t)(g4_std::ostream::put(a6 + 8, v10));
      return (int)(uintptr_t)(g4_std_compat::ostream_flush(v11));
    }
LABEL_19:
    sub_18FFF30();
  }
  v13 = sub_8F0680();
  v14 = sub_8F3D80(v13, a3, a4, a5);
  v24 = a6 + 8;
  if ( s != nullptr )
  {
    v15 = strlen(s);
    g4_std_compat::ostream_write(v24, s, v15);
  }
  else
  {
    v23 = *(uint32_t *)(*(uint32_t *)(a6 + 8) - 12) + a6 + 8;
    sub_1911530(v23, *(uint32_t *)(v23 + 20) | 1);
  }
  v16 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(v24, a3));
  g4_std_compat::ostream_write(v16, "/", 1);
  v17 = (uint32_t *)g4_std::ostream::op_shl_int(v16, a4);
  g4_std_compat::ostream_write(v17, " (", 2);
  *(uint32_t *)((char *)v17 + *(uint32_t *)(*v17 - 12) + 4) = 3;
  v18 = (uint32_t *)g4_std::ostream::op_shl_double(v17, COERCE__INT64((double)v14 * 100.0));
  g4_std_compat::ostream_write(v18, "%)", 2);
  v19 = *(uint32_t *)(*v18 - 12);
  v20 = *(uint8_t **)((char *)v18 + v19 + 124);
  if ( v20 == nullptr )
    goto LABEL_19;
  if ( v20[28] != 0 )
  {
    v21 = v20[39];
  }
  else
  {
    sub_18FFC70(*(uint32_t *)((char *)v18 + v19 + 124));
    v21 = G4_VCALL<int>(v20, 24, 10);
  }
  v22 = (int)(uintptr_t)(g4_std::ostream::put(v18, v21));
  return (int)(uintptr_t)(g4_std_compat::ostream_flush(v22));
}



// ============================================================================
// Function Address: 0xaa51d0
// ============================================================================
int (**sub_AA51D0(glf::debugger::Tweakable::Self *a1))(int)
{
  glf::debugger::Tweakable::Construct(a1);
  *((uint8_t *)a1 + 85) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20693E8);
  *((uint32_t *)a1 + 23) = 0;
  *((uint32_t *)a1 + 24) = 0;
  *((uint32_t *)a1 + 25) = 0;
  *((uint32_t *)a1 + 22) = (uint32_t)(uintptr_t)(&off_2069408);
  g4_std_compat::string_assign((int)(uintptr_t)(a1) + 64, "Missions", 8u);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20692E8);
  *((uint8_t *)a1 + 108) = 0;
  *((uint32_t *)a1 + 26) = ((uint32_t)(uintptr_t)&off_2069308);
  *((uint32_t *)a1 + 28) = 0;
  *((uint32_t *)a1 + 29) = 0;
  *((uint32_t *)a1 + 30) = 0;
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_2069308));
}
// ----------------------------------------------------------------------------
// Function: sub_AA5270  (binary VA: 0xaa5270)
// Original: sub_AA5270
// ----------------------------------------------------------------------------
int sub_AA5270(uint32_t *a1, int *a2)
{
  int v2;
  char *s;
  size_t v4;
  char *v5;
  int v6;
  int result;
  uint32_t *v8;
  char *v9;
  int v10;
  char *v11;
  char *v12;
  int v13;
  int v14;
  uint8_t *v15;
  char *v16;
  unsigned int v17;
  size_t v18;
  unsigned int v19;
  char *v20;
  char *v21;
  int v22;
  uint8_t *src;
  int v24;
  char *v25;
  int v26;
  int v27;
  char *v28;
  uint32_t *v29;
  void *v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37[4];
  typedef uint16_t _g4_t_v38[3];
  typedef int _g4_t_v39;
  typedef char _g4_t_v40[4];
  typedef char _g4_t_v41[4];
  typedef char _g4_t_v42[4];
  typedef char _g4_t_v43[4];
  typedef char _g4_t_v44[4];
  typedef int _g4_t_v45[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v31)) > _g4_s0 ? (12u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v32)) > _g4_s1 ? (12u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v33)) > _g4_s2 ? (12u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v34)) > _g4_s3 ? (16u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v35)) > _g4_s4 ? (16u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v36)) > _g4_s5 ? (16u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v37)) > _g4_s6 ? (28u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (46u + sizeof(_g4_t_v38)) > _g4_s7 ? (46u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v39)) > _g4_s8 ? (52u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v40)) > _g4_s9 ? (56u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v41)) > _g4_s10 ? (60u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v42)) > _g4_s11 ? (64u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v43)) > _g4_s12 ? (68u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v44)) > _g4_s13 ? (72u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v45)) > _g4_s14 ? (76u + sizeof(_g4_t_v45)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 46u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);

  v2 = *a2;
  a1[1] = 0;
  *a1 = v2;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  pugi::xml_node::first_child(&v38[1]);
  while ( 1 )
  {
    result = pugi::xml_node::child(&v38[1]);
    if ( result == -1 )
      return result;
    v8 = (uint32_t *)opNew(0x10u);
    *v8 = *(uint32_t *)&v38[1];
    v8[3] = 0;
    v8[1] = (uint32_t)(uintptr_t)(&unk_213B814);
    v8[2] = (uint32_t)(uintptr_t)(&unk_213B814);
    pugi::xml_node::attribute(v44);
    v9 = (char *)pugi::xml_attribute::value(v44);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v45), v9, (int)(uintptr_t)(v38) + 1);
    v10 = g4_std::string::compare((int)(uintptr_t)(v45), "bool");
    g4_std::string::Destroy(v45);
    if ( v10 != 0 )
      goto LABEL_2;
    pugi::xml_node::attribute(v43);
    v11 = (char *)pugi::xml_attribute::value(v43);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), v11, (int)(uintptr_t)(v38));
    v12 = (char *)v39;
    if ( *(int *)(v39 - 4) < 0 )
    {
      v13 = v39;
    }
    else
    {
      sub_19397C0(&v39);
      v13 = v39;
      if ( *(int *)(v39 - 4) >= 0 )
      {
        sub_19397C0(&v39);
        v12 = (char *)v39;
        v14 = v39 + *(uint32_t *)(v39 - 12);
        if ( *(int *)(v39 - 4) >= 0 )
        {
          v34 = v39 + *(uint32_t *)(v39 - 12);
          sub_19397C0(&v39);
          v12 = (char *)v39;
          v14 = v34;
        }
        goto LABEL_13;
      }
      v12 = (char *)v39;
    }
    v14 = (int)(uintptr_t)(&v12[*((uint32_t *)v12 - 3)]);
LABEL_13:
    if ( (char *)v14 != v12 )
    {
      v15 = (uint8_t *)v13;
      v16 = (char *)v14;
      do
      {
        v17 = *v12;
        if ( v17 <= 0xFF )
          LOWORD(v17) = *(uint16_t *)(tolower_tab_ + 2 * v17 + 2);
        ++v12;
        *v15++ = v17;
      }
      while ( v12 != v16 );
    }
    if ( g4_std::string::compare((int)(uintptr_t)(&v39), "1") != 0 && g4_std::string::compare((int)(uintptr_t)(&v39), "true") != 0 )
    {
      pugi::xml_node::attribute(v41);
      pugi::xml_attribute::set_value(v41);
    }
    else
    {
      pugi::xml_node::attribute(v42);
      pugi::xml_attribute::set_value(v42);
    }
    g4_std::string::Destroy(&v39);
LABEL_2:
    pugi::xml_node::attribute(v40);
    s = (char *)pugi::xml_attribute::value(v40);
    v4 = strlen(s);
    g4_std_compat::string_assign((int)(uintptr_t)(v8 + 1), s, v4);
    v5 = (char *)a1[3];
    if ( v5 == (char *)a1[4] )
    {
      v18 = 4;
      v19 = (int)(uintptr_t)(&v5[-a1[2]]) >> 2;
      if ( v19 != 0 )
      {
        if ( v19 > 2 * v19 || 2 * v19 > 0x3FFFFFFF )
          v18 = 0xFFFFFFFC;
        else
          v18 = 8 * v19;
      }
      v35 = (int)(uintptr_t)(&v5[-a1[2]]) >> 2;
      v20 = (char *)opNew(v18);
      v21 = &v20[4 * v35];
      if ( v21 != nullptr )
        *(uint32_t *)v21 = (uint32_t)(uintptr_t)(v8);
      v22 = 0;
      src = (uint8_t *)a1[2];
      v24 = (v5 - (char *)(src)) >> 2;
      if ( v24 != 0 )
      {
        v22 = 4 * v24;
        v32 = v20;
        memmove(v20, src, 4 * v24);
        v20 = v32;
      }
      v25 = &v20[v22 + 4];
      v26 = 0;
      v27 = (a1[3] - (int)(uintptr_t)(v5)) >> 2;
      if ( v27 != 0 )
      {
        v26 = 4 * v27;
        v36 = v25;
        v33 = v20;
        memmove(v25, v5, 4 * v27);
        v20 = v33;
        v25 = v36;
      }
      v28 = &v25[v26];
      v29 = a1;
      v30 = (void *)a1[2];
      if ( v30 != nullptr )
      {
        v31 = v20;
        opDelete(v30);
        v20 = v31;
        v29 = a1;
      }
      v29[2] = (uint32_t)(uintptr_t)(v20);
      v29[3] = (uint32_t)(uintptr_t)(v28);
      v29[4] = (uint32_t)(uintptr_t)(&v20[v18]);
    }
    else
    {
      v6 = 0;
      if ( v5 != nullptr )
      {
        *(uint32_t *)v5 = (uint32_t)(uintptr_t)(v8);
        v6 = a1[3];
      }
      a1[3] = v6 + 4;
    }
    pugi::xml_node::next_sibling(v37);
    *(uint32_t *)&v38[1] = v37[0];
  }
}

// ----------------------------------------------------------------------------
// Function: sub_AA56B0  (binary VA: 0xaa56b0)
// Original: sub_AA56B0
// ----------------------------------------------------------------------------
int sub_AA56B0(int a1)
{
  char *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);

  pugi::xml_node::attribute((char *)&v3 + 1);
  v1 = (char *)pugi::xml_attribute::value((char *)&v3 + 1);
  g4_std::string::construct_from_cstr(a1, v1, (int)(uintptr_t)(&v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_AA5730  (binary VA: 0xaa5730)
// Original: sub_AA5730
// ----------------------------------------------------------------------------
int sub_AA5730(int a1)
{
  char *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);

  pugi::xml_node::attribute((char *)&v3 + 1);
  v1 = (char *)pugi::xml_attribute::value((char *)&v3 + 1);
  g4_std::string::construct_from_cstr(a1, v1, (int)(uintptr_t)(&v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_AA57B0  (binary VA: 0xaa57b0)
// Original: sub_AA57B0
// ----------------------------------------------------------------------------
int sub_AA57B0(int a1)
{
  int *v1;
  int result;
  int v3;
  char *v4;
  uint32_t *s1;
  typedef int *_g4_t_v6;
  typedef int *_g4_t_v7;
  typedef uint8_t _g4_t_s2[5];
  typedef uint8_t _g4_t_v9[32];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (23u + sizeof(_g4_t_s2)) > _g4_s2 ? (23u + sizeof(_g4_t_s2)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v9)) > _g4_s3 ? (28u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 23u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  v1 = *(int **)(a1 + 8);
  v7 = *(int **)(a1 + 12);
  result = 0;
  if ( v1 != v7 )
  {
    v6 = *(int **)(a1 + 8);
    do
    {
      v3 = *v1;
      pugi::xml_node::attribute(v9);
      v4 = (char *)pugi::xml_attribute::value(v9);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&s2[1]), v4, (int)(uintptr_t)(s2));
      s1 = *(uint32_t **)(v3 + 4);
      if ( *(s1 - 3) != *(uint32_t *)(*(uint32_t *)&s2[1] - 12) || memcmp(s1, *(const void **)&s2[1], *(s1 - 3)) != 0 )
      {
        g4_std::string::Destroy(&s2[1]);
        return 1;
      }
      g4_std::string::Destroy(&s2[1]);
      v1 = ++v6;
    }
    while ( v7 != v6 );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA5890  (binary VA: 0xaa5890)
// Original: sub_AA5890
// ----------------------------------------------------------------------------
uint32_t * sub_AA5890(int a1)
{
  uint32_t *v1;
  uint32_t *result;
  char *v3;
  int v4;
  typedef uint32_t *_g4_t_i;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[32];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_i)) > _g4_s0 ? (8u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v6)) > _g4_s1 ? (23u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 23u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v1 = *(uint32_t **)(a1 + 8);
  result = *(uint32_t **)(a1 + 12);
  for ( i = result; i != v1; result = (g4_std::string::Destroy((char *)&v6 + 1), (uint32_t *)0) )
  {
    pugi::xml_node::attribute(v7);
    v3 = (char *)pugi::xml_attribute::value(v7);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6) + 1, v3, (int)(uintptr_t)(&v6));
    v4 = *v1++ + 4;
    g4_std::string::assign_str(v4, (char *)&v6 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA5BA0  (binary VA: 0xaa5ba0)
// Original: sub_AA5BA0
// ----------------------------------------------------------------------------
int sub_AA5BA0(int a1)
{
  char *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);

  pugi::xml_node::attribute((char *)&v3 + 1);
  v1 = (char *)pugi::xml_attribute::value((char *)&v3 + 1);
  g4_std::string::construct_from_cstr(a1, v1, (int)(uintptr_t)(&v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_AA5C20  (binary VA: 0xaa5c20)
// Original: sub_AA5C20
// ----------------------------------------------------------------------------
int sub_AA5C20(int a1)
{
  char *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);

  pugi::xml_node::attribute((char *)&v3 + 1);
  v1 = (char *)pugi::xml_attribute::value((char *)&v3 + 1);
  g4_std::string::construct_from_cstr(a1, v1, (int)(uintptr_t)(&v3));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_AA5CA0  (binary VA: 0xaa5ca0)
// Original: sub_AA5CA0
// ----------------------------------------------------------------------------
int sub_AA5CA0(int a1)
{
  char *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);

  pugi::xml_node::attribute((char *)&v3 + 1);
  v1 = (char *)pugi::xml_attribute::value((char *)&v3 + 1);
  g4_std::string::construct_from_cstr(a1, v1, (int)(uintptr_t)(&v3));
  return a1;
}



// ============================================================================
// Function Address: 0xaa5f80
// ============================================================================
int (**sub_AA5F80(glf::debugger::Tweakable::Self *a1))(int)
{
  glf::debugger::Tweakable::Construct(a1);
  *((uint8_t *)a1 + 85) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20693E8);
  *((uint32_t *)a1 + 23) = 0;
  *((uint32_t *)a1 + 24) = 0;
  *((uint32_t *)a1 + 25) = 0;
  *((uint32_t *)a1 + 22) = (uint32_t)(uintptr_t)(&off_2069408);
  g4_std_compat::string_assign((int)(uintptr_t)(a1) + 64, "TemplateTweaker", 0xFu);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2069328);
  *((uint8_t *)a1 + 108) = 0;
  *((uint32_t *)a1 + 26) = ((uint32_t)(uintptr_t)&off_2069348);
  *((uint32_t *)a1 + 28) = 0;
  *((uint32_t *)a1 + 29) = 0;
  *((uint32_t *)a1 + 30) = 0;
  *((uint32_t *)a1 + 31) = 0;
  *((uint32_t *)a1 + 32) = 0;
  *((uint32_t *)a1 + 33) = 0;
  *((uint32_t *)a1 + 34) = 0;
  *((uint32_t *)a1 + 35) = 0;
  *((uint32_t *)a1 + 36) = 0;
  *((uint32_t *)a1 + 37) = 0;
  *((uint32_t *)a1 + 38) = 0;
  *((uint32_t *)a1 + 39) = 0;
  *((uint32_t *)a1 + 40) = 0;
  *((uint8_t *)a1 + 164) = 1;
  *((uint8_t *)a1 + 165) = 1;
  *((uint8_t *)a1 + 166) = 0;
  *((uint8_t *)a1 + 167) = 0;
  *((uint8_t *)a1 + 168) = 0;
  return (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_2069348));
}
// ----------------------------------------------------------------------------
// Function: sub_AA60A0  (binary VA: 0xaa60a0)
// Original: sub_AA60A0
// ----------------------------------------------------------------------------
void sub_AA60A0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_AA60B0  (binary VA: 0xaa60b0)
// Original: sub_AA60B0
// ----------------------------------------------------------------------------
void sub_AA60B0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_AA60C0  (binary VA: 0xaa60c0)
// Original: sub_AA60C0
// ----------------------------------------------------------------------------
void sub_AA60C0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_AA60D0  (binary VA: 0xaa60d0)
// Original: sub_AA60D0
// ----------------------------------------------------------------------------
void sub_AA60D0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: nullsub_449  (binary VA: 0xaa60e8)
// Original: nullsub_449
// ----------------------------------------------------------------------------
void nullsub_449()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_AA6100  (binary VA: 0xaa6100)
// Original: sub_AA6100
// ----------------------------------------------------------------------------
int sub_AA6100(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 36);
  if ( result != 0 )
  {
    if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)result + 48))(*(uint32_t *)(a1 + 36)) != 0 )
      (*(void (**)(uint32_t))(**(uint32_t **)(a1 + 36) + 8))(*(uint32_t *)(a1 + 36));
    result = *(uint32_t *)(a1 + 36);
    if ( result != 0 )
      result = (*(int (**)(uint32_t))(*(uint32_t *)result + 4))(*(uint32_t *)(a1 + 36));
    *(uint32_t *)(a1 + 36) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA6150  (binary VA: 0xaa6150)
// Original: sub_AA6150
// ----------------------------------------------------------------------------
int sub_AA6150()
{
  int result;

  result = dword_20DCC30;
  if ( dword_20DCC30 != 0 )
  {
    if ( G4_VCALL<uint8_t>(dword_20DCC30, 48) != 0 )
      G4_VCALL<void>(dword_20DCC30, 8);
    result = dword_20DCC30;
    if ( dword_20DCC30 != 0 )
      result = G4_VCALL<int>(dword_20DCC30, 4);
    dword_20DCC30 = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA61B0  (binary VA: 0xaa61b0)
// Original: sub_AA61B0
// ----------------------------------------------------------------------------
int sub_AA61B0(int a1, int a2)
{
  int result;
  glf::IOStream::Self *v3;
  char v4;
  int v5;
  int v6;

  result = 0;
  if ( *(uint32_t *)(a1 + 36) == 0 )
  {
    v3 = (glf::IOStream::Self *)sub_4EBBF0(0x34u, 1);
    glf::FileStreamImpl::Construct(v3, a2, 26);
    *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_2048D28);
    *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v3);
    v4 = G4_VCALL<int>(v3, 48);
    result = 1;
    if ( v4 == 0 )
    {
      v5 = *(uint32_t *)(a1 + 36);
      result = 0;
      if ( v5 != 0 )
      {
        if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v5 + 48))(*(uint32_t *)(a1 + 36)) != 0 )
          (*(void (**)(uint32_t))(**(uint32_t **)(a1 + 36) + 8))(*(uint32_t *)(a1 + 36));
        v6 = *(uint32_t *)(a1 + 36);
        if ( v6 != 0 )
          (*(void (**)(uint32_t))(*(uint32_t *)v6 + 4))(*(uint32_t *)(a1 + 36));
        *(uint32_t *)(a1 + 36) = 0;
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA6280  (binary VA: 0xaa6280)
// Original: sub_AA6280
// ----------------------------------------------------------------------------
int sub_AA6280(int a1, int a2)
{
  int result;
  glf::IOStream::Self *v3;
  char v4;

  result = 0;
  if ( dword_20DCC30 == 0 )
  {
    v3 = (glf::IOStream::Self *)sub_4EBBF0(0x34u, 1);
    glf::FileStreamImpl::Construct(v3, a2, 26);
    *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_2048D28);
    dword_20DCC30 = (int)(uintptr_t)(v3);
    v4 = G4_VCALL<int>(v3, 48);
    result = 1;
    if ( v4 == 0 )
    {
      sub_AA6150();
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA6310  (binary VA: 0xaa6310)
// Original: sub_AA6310
// ----------------------------------------------------------------------------
int sub_AA6310(int a1, char *s)
{
  int result;
  int v3;
  size_t v4;
  int v5;
  size_t v6;

  result = a1;
  v3 = *(uint32_t *)(a1 + 36);
  if ( v3 != 0 )
  {
    v4 = strlen(s);
    result = G4_VCALL<int>(v3, 20, s, v4);
  }
  v5 = dword_20DCC30;
  if ( dword_20DCC30 != 0 )
  {
    v6 = strlen(s);
    return G4_VCALL<int>(v5, 20, s, v6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA6390  (binary VA: 0xaa6390)
// Original: sub_AA6390
// ----------------------------------------------------------------------------
int sub_AA6390(int a1)
{
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206A338);
  sub_A6A8F0(a1 + 8, "Trace");
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20693A8);
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20693C0);
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint8_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 32) = a1 + 24;
  *(uint32_t *)(a1 + 36) = a1 + 24;
  return sub_A6A9B0(a1 + 8, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_AA6430  (binary VA: 0xaa6430)
// Original: sub_AA6430
// ----------------------------------------------------------------------------
int sub_AA6430(int a1, int a2, uint8_t *a3)
{
  int result;

  result = a2;
  if ( *(uint8_t *)(a2 + 24) != 0 && a3 != nullptr && *a3 != 0 )
    return ((G4_PlatformLog(4, *(uint32_t *)(a2 + 20), a3)), (int)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA64A0  (binary VA: 0xaa64a0)
// Original: sub_AA64A0
// ----------------------------------------------------------------------------
int sub_AA64A0(int a1, int a2, char *s)
{
  int result;
  int v4;
  size_t v5;
  int v6;
  size_t v7;
  glf::IOStream::Self *v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef glf::IOStream::Self *_g4_t_v14;
  typedef uint32_t _g4_t_v15[3];
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v15)) > _g4_s4 ? (32u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  result = *(uint32_t *)(*(uint32_t *)(a2 + 32) - 12);
  if ( result == 0 || s == nullptr || *s == 0 )
    return result;
  v15[0] = (uint32_t)(uintptr_t)(&unk_213B814);
  g4_std::string::construct_copy(&v16, a2 + 32);
  g4_std::string::assign_str(v15, &v16);
  g4_std::string::Destroy(&v16);
  v4 = *(uint32_t *)(a2 + 36);
  if ( v4 != 0 )
    goto LABEL_5;
  v13 = v15[0];
  v8 = (glf::IOStream::Self *)sub_4EBBF0(0x34u, 1);
  v11 = v13;
  v14 = v8;
  glf::FileStreamImpl::Construct(v8, v11, 26);
  *(uint32_t *)v14 = ((uint32_t)(uintptr_t)&off_2048D28);
  *(uint32_t *)(a2 + 36) = (uint32_t)(uintptr_t)(v14);
  if ( G4_VCALL<uint8_t>(v14, 48) == 0 )
  {
    v9 = *(uint32_t *)(a2 + 36);
    if ( v9 != 0 )
    {
      if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v9 + 48))(*(uint32_t *)(a2 + 36)) != 0 )
        (*(void (**)(uint32_t))(**(uint32_t **)(a2 + 36) + 8))(*(uint32_t *)(a2 + 36));
      v10 = *(uint32_t *)(a2 + 36);
      if ( v10 != 0 )
        (*(void (**)(uint32_t))(*(uint32_t *)v10 + 4))(*(uint32_t *)(a2 + 36));
      *(uint32_t *)(a2 + 36) = 0;
    }
    goto LABEL_6;
  }
  v4 = *(uint32_t *)(a2 + 36);
  if ( v4 != 0 )
  {
LABEL_5:
    v12 = v4;
    v5 = strlen(s);
    G4_VCALL<void>(v12, 20, s, v5);
  }
LABEL_6:
  v6 = dword_20DCC30;
  if ( dword_20DCC30 != 0 )
  {
    v7 = strlen(s);
    G4_VCALL<void>(v6, 20, s, v7);
  }
  return ((g4_std::string::Destroy(v15)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: nullsub_450  (binary VA: 0xaa6648)
// Original: nullsub_450
// ----------------------------------------------------------------------------
void nullsub_450()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_AA6650  (binary VA: 0xaa6650)
// Original: sub_AA6650
// ----------------------------------------------------------------------------
int sub_AA6650(int a1)
{
  int *v1;

  if ( byte_20DCB30 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DCB30) != 0 )
  {
    byte_20DCB44 = 0;
    dword_20DCB40 = (int)(uintptr_t)(&off_206A338);
    sub_A6A8F0(dword_20DCB48, "Trace");
    dword_20DCB40 = (int)(uintptr_t)(&off_20693A8);
    dword_20DCB58 = 0;
    dword_20DCB48[0] = (int)((uint32_t)(uintptr_t)&off_20693C0);
    dword_20DCB5C = 0;
    dword_20DCB68 = 0;
    dword_20DCB60 = (int)(uintptr_t)(&dword_20DCB58);
    dword_20DCB64 = (int)(uintptr_t)(&dword_20DCB58);
    byte_20DCB6C = 0;
    sub_A6A9B0(dword_20DCB48, 1);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DCB30);
    __cxa_atexit((void (*)(void *))sub_AD4410, &dword_20DCB48[-2], &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20DCB44 == 0 )
    v1 = (int *)(&dword_20DCB40);
  return sub_A7E430(v1 + 2, a1);
}

// ----------------------------------------------------------------------------
// Function: sub_AA6780  (binary VA: 0xaa6780)
// Original: sub_AA6780
// ----------------------------------------------------------------------------
void sub_AA6780()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_AA6790  (binary VA: 0xaa6790)
// Original: sub_AA6790
// ----------------------------------------------------------------------------
void sub_AA6790()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_AA67A0  (binary VA: 0xaa67a0)
// Original: sub_AA67A0
// ----------------------------------------------------------------------------
int sub_AA67A0(glf::debugger::Tweakable::Self *a1, char *s)
{
  size_t v2;

  glf::debugger::Tweakable::Construct(a1);
  *((uint8_t *)a1 + 85) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20693E8);
  *((uint32_t *)a1 + 23) = 0;
  *((uint32_t *)a1 + 24) = 0;
  *((uint32_t *)a1 + 22) = (uint32_t)(uintptr_t)(&off_2069408);
  *((uint32_t *)a1 + 25) = 0;
  v2 = strlen(s);
  return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a1) + 64, s, v2));
}

// ----------------------------------------------------------------------------
// Function: sub_AA6830  (binary VA: 0xaa6830)
// Original: sub_AA6830
// ----------------------------------------------------------------------------
int sub_AA6830(glf::debugger::Tweakable::Self *a1)
{
  char *s;
  size_t v2;
  const char *v3;
  char DoesFileExist;
  char v5;
  typedef char *_g4_t_v7;
  typedef uint8_t _g4_t_v8;
  typedef glf::fs::Self *_g4_t_v9;
  typedef glf::fs::Self *_g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (43u + sizeof(_g4_t_v9)) > _g4_s2 ? (43u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v10)) > _g4_s3 ? (44u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 43u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), off_20C17BC[0], (int)(uintptr_t)(&v9));
  s = *((char **)a1 + 16);
  v2 = strlen(s);
  g4_std::string::append((int)(uintptr_t)(v10), s, v2);
  g4_std::string::append((int)(uintptr_t)(v10), ".xml", 4u);
  v3 = (const char *)v10[0];
  DoesFileExist = glf::fs::DoesFileExist(v10[0], v7);
  v5 = 0;
  if ( DoesFileExist != 0 )
  {
    *((uint8_t *)a1 + 85) = 1;
    glf::debugger::Tweakable::LoadXML(a1, v3, true);
    *((uint8_t *)a1 + 85) = 0;
    v5 = 1;
  }
  v8 = v5;
  g4_std::string::Destroy(v10);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: sub_AA6910  (binary VA: 0xaa6910)
// Original: sub_AA6910
// ----------------------------------------------------------------------------
int sub_AA6910(glf::debugger::Tweakable::Self *a1)
{
  char *s;
  size_t v2;
  typedef char *_g4_t_v4;
  typedef const char *_g4_t_v5[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (11u + sizeof(_g4_t_v4)) > _g4_s0 ? (11u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 11u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5), off_20C17BC[0], (int)(uintptr_t)(&v4));
  s = *((char **)a1 + 16);
  v2 = strlen(s);
  g4_std::string::append((int)(uintptr_t)(v5), s, v2);
  g4_std::string::append((int)(uintptr_t)(v5), ".xml", 4u);
  glf::debugger::Tweakable::SaveXML(a1, v5[0]);
  return ((g4_std::string::Destroy(v5)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_AA69C0  (binary VA: 0xaa69c0)
// Original: sub_AA69C0
// ----------------------------------------------------------------------------
int sub_AA69C0(int a1, int a2)
{
  char *s;
  size_t v3;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr(a1, off_20C17BC[0], (int)(uintptr_t)(&v5));
  s = *(char **)(a2 + 64);
  v3 = strlen(s);
  g4_std::string::append(a1, s, v3);
  g4_std::string::append(a1, ".xml", 4u);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_AA6A50  (binary VA: 0xaa6a50)
// Original: sub_AA6A50
// ----------------------------------------------------------------------------
int sub_AA6A50(int a1)
{
  int result;
  int *v2;
  int *i;

  result = a1;
  v2 = *(int **)(a1 + 92);
  for ( i = *(int **)(a1 + 96); i != v2; ++v2 )
  {
    result = *v2;
    if ( *v2 != 0 )
      result = (*(int (**)(int))(*(uint32_t *)result + 8))(*v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA6A90  (binary VA: 0xaa6a90)
// Original: sub_AA6A90
// ----------------------------------------------------------------------------
uint32_t * sub_AA6A90(uint32_t *a1)
{
  a1[1] = 0;
  *a1 = (uint32_t)(uintptr_t)(&off_2069408);
  a1[2] = 0;
  a1[3] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_AA6AC0  (binary VA: 0xaa6ac0)
// Original: sub_AA6AC0
// ----------------------------------------------------------------------------
void sub_AA6AC0(int a1)
{
  uint32_t *v1;
  uint32_t *v2;

  v1 = *(uint32_t **)(a1 + 4);
  v2 = *(uint32_t **)(a1 + 8);
  if ( v1 != v2 )
  {
    do
    {
      if ( *v1 != 0 )
        G4_VCALL<void>(*v1, 4);
      ++v1;
    }
    while ( v2 != v1 );
    v1 = *(uint32_t **)(a1 + 4);
  }
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v1);
}

// ----------------------------------------------------------------------------
// Function: sub_AA6B00  (binary VA: 0xaa6b00)
// Original: sub_AA6B00
// ----------------------------------------------------------------------------
uint32_t * sub_AA6B00(uint32_t *a1)
{
  *a1 = 0;
  a1[1] = (uint32_t)(uintptr_t)(&unk_213B814);
  a1[2] = (uint32_t)(uintptr_t)(&unk_213B814);
  a1[3] = (uint32_t)(uintptr_t)(&unk_213B814);
  a1[4] = (uint32_t)(uintptr_t)(&unk_213B814);
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_AA6B40  (binary VA: 0xaa6b40)
// Original: sub_AA6B40
// ----------------------------------------------------------------------------
int sub_AA6B40(int a1)
{
  int *v1;
  int *v2;
  int v3;
  int *v5;

  v1 = *(int **)(a1 + 24);
  v2 = *(int **)(a1 + 20);
  if ( v1 != v2 )
  {
    do
    {
      v3 = *v2;
      v5 = v2;
      v2 += 6;
      (*(void (**)(int *))(v3 + 8))(v5);
    }
    while ( v1 != v2 );
    v2 = *(int **)(a1 + 20);
  }
  if ( v2 != nullptr )
    opDelete(v2);
  g4_std::string::Destroy(a1 + 16);
  g4_std::string::Destroy(a1 + 12);
  g4_std::string::Destroy(a1 + 8);
  return ((g4_std::string::Destroy(a1 + 4)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_AA6BC0  (binary VA: 0xaa6bc0)
// Original: sub_AA6BC0
// ----------------------------------------------------------------------------
uint8_t * sub_AA6BC0(uint32_t *a1, int a2, int a3)
{
  int v3;
  uint8_t *result;
  int v5;
  int v6;
  size_t n;
  size_t v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  char *v13;
  char v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  size_t v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  size_t v24;
  uint8_t *src;
  uint8_t *v26;
  uint8_t *v27;
  size_t v28;
  size_t v29;
  size_t v30;
  size_t v31;
  size_t v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  int v36;
  void *dest;
  uint8_t *v38;
  uint8_t *v39;
  void *v40;
  unsigned int v41;
  void *v42;
  unsigned int v43;
  void *v44;
  void *v45;
  void *v46;

  v3 = a2;
  result = (uint8_t *)*a1;
  v5 = *(uint32_t *)(*a1 - 12);
  if ( a3 == -1 || v5 <= a3 )
    a3 = v5 - 1;
  if ( a2 <= a3 )
  {
    while ( 1 )
    {
      v6 = *((uint32_t *)result - 1);
      if ( v6 >= 0 && result - 12 != (uint8_t *)&unk_20D3E6C )
      {
        if ( v6 != 0 )
        {
          n = *((uint32_t *)result - 3);
          v8 = *((uint32_t *)result - 2);
          if ( n > 0x3FFFFFFC )
            goto LABEL_70;
          v9 = n;
          if ( n > v8 )
          {
            v9 = 2 * v8;
            if ( 2 * v8 < n )
              v9 = n;
          }
          if ( v9 + 29 > 0x1000 && v8 < v9 )
          {
            v10 = v9 + 4096 - (((uint16_t)v9 + 29) & 0xFFF);
            v9 = 1073741820;
            if ( v10 <= 0x3FFFFFFC )
              v9 = v10;
          }
          v28 = v9;
          v11 = sub_4EBDC0(v9 + 13);
          *(uint32_t *)(v11 + 4) = v28;
          v12 = v11;
          *(uint32_t *)(v11 + 8) = 0;
          dest = (void *)(v11 + 12);
          if ( n != 0 )
          {
            src = (uint8_t *)*a1;
            if ( n == 1 )
            {
              *(uint8_t *)(v12 + 12) = *src;
            }
            else
            {
              v35 = v12;
              memcpy(dest, src, n);
              v12 = v35;
            }
          }
          v40 = (void *)(*a1 - 12);
          if ( v40 != &unk_20D3E6C && __sync_fetch_and_add((volatile int32_t *)(*a1 - 4), 0xFFFFFFFF) <= 0 )
          {
            v36 = v12;
            gll_operator_delete_arr((int)(uintptr_t)(v40));
            v12 = v36;
          }
          result = (uint8_t *)(dest);
          *a1 = (uint32_t)(uintptr_t)(dest);
          if ( (void *)v12 != &unk_20D3E6C )
          {
            *(uint32_t *)(v12 + 8) = 0;
            *(uint32_t *)v12 = n;
            *(uint8_t *)(v12 + n + 12) = 0;
            result = (uint8_t *)*a1;
          }
        }
        *((uint32_t *)result - 1) = -1;
        result = (uint8_t *)*a1;
      }
      v13 = (char *)(&result[v3]);
      v14 = result[v3];
      if ( v14 <= 64 )
        goto LABEL_21;
      if ( *((int *)result - 1) >= 0 && result - 12 != (uint8_t *)&unk_20D3E6C )
      {
        if ( *((uint32_t *)result - 1) != 0 )
        {
          v15 = *((uint32_t *)result - 3);
          v41 = *((uint32_t *)result - 2);
          if ( v15 > 0x3FFFFFFC )
            goto LABEL_70;
          v16 = *((uint32_t *)result - 3);
          if ( v15 > v41 )
          {
            v16 = 2 * v41;
            if ( 2 * v41 < v15 )
              v16 = *((uint32_t *)result - 3);
          }
          if ( v16 + 29 > 0x1000 && v41 < v16 )
          {
            v17 = v16 + 4096 - (((uint16_t)v16 + 29) & 0xFFF);
            v16 = 1073741820;
            if ( v17 <= 0x3FFFFFFC )
              v16 = v17;
          }
          v29 = v15;
          v33 = v16;
          v18 = sub_4EBDC0(v16 + 13);
          *(uint32_t *)(v18 + 8) = 0;
          *(uint32_t *)(v18 + 4) = v33;
          v19 = v29;
          v38 = (uint8_t *)v18;
          v42 = (void *)(v18 + 12);
          if ( v29 != 0 )
          {
            v26 = (uint8_t *)*a1;
            if ( v29 == 1 )
            {
              v38[12] = *v26;
            }
            else
            {
              memcpy(v42, v26, v29);
              v19 = v29;
            }
          }
          v45 = (void *)(*a1 - 12);
          if ( v45 != &unk_20D3E6C && __sync_fetch_and_add((volatile int32_t *)(*a1 - 4), 0xFFFFFFFF) <= 0 )
          {
            v32 = v19;
            gll_operator_delete_arr((int)(uintptr_t)(v45));
            v19 = v32;
          }
          result = (uint8_t *)(v42);
          *a1 = (uint32_t)(uintptr_t)(v42);
          if ( v38 != (uint8_t *)&unk_20D3E6C )
          {
            *((uint32_t *)v38 + 2) = 0;
            *(uint32_t *)v38 = v19;
            v38[v19 + 12] = 0;
            result = (uint8_t *)*a1;
          }
        }
        *((uint32_t *)result - 1) = -1;
        result = (uint8_t *)*a1;
        v13 = (char *)(*a1 + v3);
        v14 = *v13;
      }
      if ( v14 > 90 )
      {
LABEL_21:
        if ( ++v3 > a3 )
          return result;
      }
      else
      {
        if ( *((int *)result - 1) >= 0 && result - 12 != (uint8_t *)&unk_20D3E6C )
        {
          if ( *((uint32_t *)result - 1) != 0 )
          {
            v20 = *((uint32_t *)result - 3);
            v43 = *((uint32_t *)result - 2);
            if ( v20 > 0x3FFFFFFC )
LABEL_70:
              sub_1900180("basic_string::_S_create");
            v21 = *((uint32_t *)result - 3);
            if ( v20 > v43 )
            {
              v21 = 2 * v43;
              if ( 2 * v43 < v20 )
                v21 = *((uint32_t *)result - 3);
            }
            if ( v21 + 29 > 0x1000 && v43 < v21 )
            {
              v22 = v21 + 4096 - (((uint16_t)v21 + 29) & 0xFFF);
              v21 = 1073741820;
              if ( v22 <= 0x3FFFFFFC )
                v21 = v22;
            }
            v30 = v20;
            v34 = v21;
            v23 = sub_4EBDC0(v21 + 13);
            *(uint32_t *)(v23 + 8) = 0;
            *(uint32_t *)(v23 + 4) = v34;
            v24 = v30;
            v39 = (uint8_t *)v23;
            v44 = (void *)(v23 + 12);
            if ( v30 != 0 )
            {
              v27 = (uint8_t *)*a1;
              if ( v30 == 1 )
              {
                v39[12] = *v27;
              }
              else
              {
                memcpy(v44, v27, v30);
                v24 = v30;
              }
            }
            v46 = (void *)(*a1 - 12);
            if ( v46 != &unk_20D3E6C && __sync_fetch_and_add((volatile int32_t *)(*a1 - 4), 0xFFFFFFFF) <= 0 )
            {
              v31 = v24;
              gll_operator_delete_arr((int)(uintptr_t)(v46));
              v24 = v31;
            }
            result = (uint8_t *)(v44);
            *a1 = (uint32_t)(uintptr_t)(v44);
            if ( v39 != (uint8_t *)&unk_20D3E6C )
            {
              *((uint32_t *)v39 + 2) = 0;
              *(uint32_t *)v39 = v24;
              v39[v24 + 12] = 0;
              result = (uint8_t *)*a1;
            }
          }
          *((uint32_t *)result - 1) = -1;
          v13 = (char *)(*a1 + v3);
          v14 = *v13;
        }
        ++v3;
        *v13 = v14 + 32;
        if ( v3 > a3 )
          return result;
      }
      result = (uint8_t *)*a1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7130  (binary VA: 0xaa7130)
// Original: sub_AA7130
// ----------------------------------------------------------------------------
int sub_AA7130(int a1, int a2)
{
  int result;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;

  result = a1;
  if ( *(uint8_t *)a1 == 0 )
    return result;
  if ( *(uint8_t *)(a2 + 84) != 0 )
  {
    v3 = *(uint32_t **)(a1 + 48);
    if ( v3 != *(uint32_t **)(a1 + 52) )
    {
      v4 = 0;
      if ( v3 != nullptr )
      {
        *v3 = a2;
        v4 = *(uint32_t *)(a1 + 48);
      }
      *(uint32_t *)(a1 + 48) = v4 + 4;
      return result;
    }
    return ((sub_A97E50()), (int)0);
  }
  v5 = *(uint32_t **)(a1 + 36);
  if ( v5 == *(uint32_t **)(a1 + 40) )
    return ((sub_A97E50()), (int)0);
  v6 = 0;
  if ( v5 != nullptr )
  {
    *v5 = a2;
    v6 = *(uint32_t *)(a1 + 36);
  }
  *(uint32_t *)(a1 + 36) = v6 + 4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA71B0  (binary VA: 0xaa71b0)
// Original: sub_AA71B0
// ----------------------------------------------------------------------------
void sub_AA71B0(int a1)
{
  int v1;
  unsigned int v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;

  if ( *(uint8_t *)(a1 + 8) != 0 )
  {
    v1 = *(uint32_t *)(a1 + 32);
    if ( (unsigned int)(*(uint32_t *)(a1 + 36) - v1) >> 2 != 0 )
    {
      v2 = 0;
      v3 = 0;
      do
      {
        ++v3;
        (*(void (**)(uint32_t))(**(uint32_t **)(v1 + 4 * v2) + 88))(*(uint32_t *)(v1 + 4 * v2));
        v1 = *(uint32_t *)(a1 + 32);
        v2 = v3;
      }
      while ( v3 < (*(uint32_t *)(a1 + 36) - v1) >> 2 );
    }
    v4 = *(uint32_t *)(a1 + 44);
    if ( (unsigned int)(*(uint32_t *)(a1 + 48) - v4) >> 2 != 0 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        ++v6;
        (*(void (**)(uint32_t))(**(uint32_t **)(v4 + 4 * v5) + 88))(*(uint32_t *)(v4 + 4 * v5));
        v4 = *(uint32_t *)(a1 + 44);
        v5 = v6;
      }
      while ( v6 < (*(uint32_t *)(a1 + 48) - v4) >> 2 );
    }
    v7 = *(uint32_t *)(a1 + 80);
    if ( (unsigned int)(*(uint32_t *)(a1 + 84) - v7) >> 2 != 0 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        ++v9;
        (*(void (**)(uint32_t))(**(uint32_t **)(v7 + 4 * v8) + 28))(*(uint32_t *)(v7 + 4 * v8));
        v7 = *(uint32_t *)(a1 + 80);
        v8 = v9;
      }
      while ( v9 < (*(uint32_t *)(a1 + 84) - v7) >> 2 );
    }
    *(uint8_t *)(a1 + 8) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_AA7270  (binary VA: 0xaa7270)
// Original: sub_AA7270
// ----------------------------------------------------------------------------
unsigned int sub_AA7270(int a1)
{
  int v1;
  unsigned int v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned int result;
  unsigned int v9;
  unsigned int v10;
  int v11;

  v1 = *(uint32_t *)(a1 + 32);
  if ( (unsigned int)(*(uint32_t *)(a1 + 36) - v1) >> 2 != 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      (*(void (**)(uint32_t))(**(uint32_t **)(v1 + 4 * v2) + 92))(*(uint32_t *)(v1 + 4 * v2));
      v1 = *(uint32_t *)(a1 + 32);
      v2 = v3;
    }
    while ( v3 < (*(uint32_t *)(a1 + 36) - v1) >> 2 );
  }
  v4 = *(uint32_t *)(a1 + 44);
  if ( (unsigned int)(*(uint32_t *)(a1 + 48) - v4) >> 2 != 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      ++v6;
      (*(void (**)(uint32_t))(**(uint32_t **)(v4 + 4 * v5) + 92))(*(uint32_t *)(v4 + 4 * v5));
      v4 = *(uint32_t *)(a1 + 44);
      v5 = v6;
    }
    while ( v6 < (*(uint32_t *)(a1 + 48) - v4) >> 2 );
  }
  v7 = *(uint32_t *)(a1 + 80);
  result = (unsigned int)(*(uint32_t *)(a1 + 84) - v7) >> 2;
  if ( result != 0 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      ++v10;
      v11 = *(uint32_t *)(**(uint32_t **)(v7 + 4 * v9) - 12) + *(uint32_t *)(v7 + 4 * v9);
      G4_VCALL<void>(v11, 92);
      v7 = *(uint32_t *)(a1 + 80);
      v9 = v10;
      result = (*(uint32_t *)(a1 + 84) - v7) >> 2;
    }
    while ( v10 < result );
  }
  *(uint8_t *)(a1 + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: nullsub_451  (binary VA: 0xaa7328)
// Original: nullsub_451
// ----------------------------------------------------------------------------
void nullsub_451()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7330  (binary VA: 0xaa7330)
// Original: sub_AA7330
// ----------------------------------------------------------------------------
void sub_AA7330(uint32_t *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;

  v1 = (uint32_t *)a1[8];
  v2 = (uint32_t *)a1[9];
  if ( v1 != v2 )
  {
    do
    {
      if ( *v1 != 0 )
        G4_VCALL<void>(*v1, 12);
      ++v1;
    }
    while ( v2 != v1 );
    v1 = (uint32_t *)a1[8];
  }
  a1[9] = (uint32_t)(uintptr_t)(v1);
  v3 = (uint32_t *)a1[12];
  v4 = (uint32_t *)a1[11];
  if ( v4 != v3 )
  {
    do
    {
      if ( *v4 != 0 )
        G4_VCALL<void>(*v4, 12);
      ++v4;
    }
    while ( v3 != v4 );
    v4 = (uint32_t *)a1[11];
  }
  a1[12] = (uint32_t)(uintptr_t)(v4);
}

// ----------------------------------------------------------------------------
// Function: sub_AA73A0  (binary VA: 0xaa73a0)
// Original: sub_AA73A0
// ----------------------------------------------------------------------------
uint32_t * sub_AA73A0(int a1, const char **a2)
{
  const char *v2;
  char *v3;
  unsigned int v4;
  const char *v5;
  int v6;
  uint32_t *v7;
  uint32_t *result;
  uint32_t *v9;
  int v10;
  vox::Ambience::Self *v11;
  void (***v12)(int);
  int v13;
  void (**v14)(int);
  unsigned int v15;
  size_t v16;
  const char *v17;
  const char *v18;
  char *v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  typedef vox::Ambience::Self *_g4_t_v25;
  typedef const char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t _g4_t_v30[2];
  typedef uint32_t _g4_t_v31[2];
  typedef const char *_g4_t_v32;
  typedef char _g4_t_v33;
  typedef int (*_g4_t_v34)();
  typedef const char *_g4_t_v35;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v26)) > _g4_s1 ? (0u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v27)) > _g4_s2 ? (4u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v28)) > _g4_s3 ? (8u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v29)) > _g4_s4 ? (12u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v30)) > _g4_s5 ? (16u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v31)) > _g4_s6 ? (24u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v32)) > _g4_s7 ? (32u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v33)) > _g4_s8 ? (36u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v34)) > _g4_s9 ? (40u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v35)) > _g4_s10 ? (44u + sizeof(_g4_t_v35)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);

  v2 = *a2;
  v3 = (char *)&v2[strlen(*a2)];
  v4 = 0;
  if ( v2 != v3 )
  {
    v5 = v2;
    do
    {
      v6 = *v5++;
      v4 ^= (v4 << 6) + (v4 >> 2) - 1640531527 + v6;
    }
    while ( v5 != v3 );
  }
  v7 = (uint32_t *)(a1 + 60);
  result = *(uint32_t **)(a1 + 64);
  if ( result == nullptr )
    goto LABEL_11;
  v9 = (uint32_t *)(a1 + 60);
  do
  {
    while ( result[4] >= v4 )
    {
      v9 = result;
      result = (uint32_t *)result[2];
      if ( result == nullptr )
        goto LABEL_9;
    }
    result = (uint32_t *)result[3];
  }
  while ( result != nullptr );
LABEL_9:
  if ( v9 == v7 || v9[4] > v4 )
  {
LABEL_11:
    v32 = v2;
    v35 = v2;
    v33 = 1;
    v34 = (int (*)())(uintptr_t)(sub_AC51E0);
    v10 = sub_4EBBF0(0xCu, 1);
    *(uint32_t *)v10 = 0;
    *(uint32_t *)(v10 + 4) = v10 + 4;
    *(uint32_t *)(v10 + 8) = v10 + 4;
    v25 = (vox::Ambience::Self *)sub_4EBBF0(4u, 1);
    vox::Ambience::Construct(v25, &v32);
    *(uint32_t *)v10 = (uint32_t)(uintptr_t)(v25);
    if ( (uint8_t)vox::Ambience::IsValid(v25) != 0 )
    {
      v15 = 0;
      v26 = *a2;
      v16 = strlen(*a2);
      v17 = v26;
      v18 = &v26[v16];
      if ( v26 != v18 )
      {
        v28 = v10;
        v19 = (char *)v18;
        do
        {
          v20 = *v17++;
          v15 ^= (v15 << 6) + (v15 >> 2) - 1640531527 + v20;
        }
        while ( v17 != v19 );
        v10 = v28;
      }
      v21 = (uint32_t *)(a1 + 60);
      v22 = *(uint32_t **)(a1 + 64);
      if ( v22 == nullptr )
        goto LABEL_42;
      do
      {
        if ( v22[4] >= v15 )
        {
          v21 = v22;
          v22 = (uint32_t *)v22[2];
        }
        else
        {
          v22 = (uint32_t *)v22[3];
        }
      }
      while ( v22 != nullptr );
      if ( v21 == v7 || v21[4] > v15 )
      {
LABEL_42:
        v30[0] = v15;
        v30[1] = 0;
        sub_A9E130(v21, v30);
        v21 = v29;
      }
      v21[5] = v10;
      v23 = *(uint32_t **)(a1 + 64);
      v24 = (uint32_t *)(a1 + 60);
      if ( v23 == nullptr )
        goto LABEL_40;
      do
      {
        if ( v23[4] >= v15 )
        {
          v24 = v23;
          v23 = (uint32_t *)v23[2];
        }
        else
        {
          v23 = (uint32_t *)v23[3];
        }
      }
      while ( v23 != nullptr );
      if ( v7 == v24 || v15 < v24[4] )
      {
LABEL_40:
        v31[0] = v15;
        v31[1] = 0;
        sub_A9E130(v24, v31);
        v24 = v29;
      }
      vox::Ambience::Play(*(vox::Ambience::Self **)v24[5]);
      return &dword_0 + 1;
    }
    else
    {
      v11 = *(vox::Ambience::Self **)v10;
      if ( *(uint32_t *)v10 != 0 )
      {
        vox::Ambience::Destroy(*(vox::Ambience::Self **)v10);
        opDelete(v11);
      }
      v12 = *(void (****)(int))(v10 + 4);
      if ( (void (***)(int))(v10 + 4) != v12 )
      {
        v27 = v10;
        v13 = v10 + 4;
        while ( 1 )
        {
          v14 = *v12;
          (*v12[2])((int)(uintptr_t)(v12 + 2));
          opDelete(v12);
          if ( (void (**)(int))v13 == v14 )
            break;
          v12 = (void (***)(int))v14;
        }
        v10 = v27;
      }
      opDelete((void *)v10);
      return nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7620  (binary VA: 0xaa7620)
// Original: sub_AA7620
// ----------------------------------------------------------------------------
bool sub_AA7620(int a1, char *s)
{
  char *v2;
  char *v3;
  unsigned int v4;
  int v5;
  uint32_t *v6;
  bool result;
  uint32_t *v8;

  v2 = s;
  v3 = &s[strlen(s)];
  v4 = 0;
  if ( s != v3 )
  {
    do
    {
      v5 = *v2++;
      v4 ^= (v4 << 6) + (v4 >> 2) - 1640531527 + v5;
    }
    while ( v2 != v3 );
  }
  v6 = *(uint32_t **)(a1 + 64);
  result = false;
  if ( v6 != nullptr )
  {
    v8 = (uint32_t *)(a1 + 60);
    do
    {
      while ( v4 <= v6[4] )
      {
        v8 = v6;
        v6 = (uint32_t *)v6[2];
        if ( v6 == nullptr )
          return v8 != (uint32_t *)(a1 + 60) && v4 >= v8[4];
      }
      v6 = (uint32_t *)v6[3];
    }
    while ( v6 != nullptr );
    return v8 != (uint32_t *)(a1 + 60) && v4 >= v8[4];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA76B0  (binary VA: 0xaa76b0)
// Original: sub_AA76B0
// ----------------------------------------------------------------------------
uint32_t * sub_AA76B0(int a1, vox::EmitterHandle::Self *a2, char *s)
{
  char *v3;
  char *v4;
  unsigned int v5;
  int v6;
  uint32_t *result;
  uint32_t *v8;
  int v9;
  int v10;

  v3 = s;
  v4 = &s[strlen(s)];
  v5 = 0;
  if ( s != v4 )
  {
    do
    {
      v6 = *v3++;
      v5 ^= (v5 << 6) + (v5 >> 2) - 1640531527 + v6;
    }
    while ( v3 != v4 );
  }
  result = *(uint32_t **)(a1 + 64);
  if ( result != nullptr )
  {
    v8 = (uint32_t *)(a1 + 60);
    do
    {
      while ( v5 <= result[4] )
      {
        v8 = result;
        result = (uint32_t *)result[2];
        if ( result == nullptr )
          goto LABEL_8;
      }
      result = (uint32_t *)result[3];
    }
    while ( result != nullptr );
LABEL_8:
    if ( v8 != (uint32_t *)(a1 + 60) && v5 >= v8[4] )
    {
      v9 = v8[5] + 4;
      v10 = opNew(0x28u);
      if ( v10 != -8 )
        vox::EmitterHandle::Construct((vox::EmitterHandle::Self *)(v10 + 8), a2);
      return (uint32_t *)sub_1901920(v10, v9);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7770  (binary VA: 0xaa7770)
// Original: sub_AA7770
// ----------------------------------------------------------------------------
void sub_AA7770(int a1, char *s, vox::Handle::Self *a3)
{
  char *v3;
  size_t v4;
  unsigned int v5;
  char *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;

  v3 = s;
  v4 = strlen(s);
  v5 = 0;
  v6 = &s[v4];
  if ( v3 != &v3[v4] )
  {
    do
    {
      v7 = *v3++;
      v5 ^= (v5 << 6) + (v5 >> 2) - 1640531527 + v7;
    }
    while ( v3 != v6 );
  }
  v8 = *(uint32_t **)(a1 + 64);
  if ( v8 != nullptr )
  {
    v9 = (uint32_t *)(a1 + 60);
    do
    {
      while ( v5 <= v8[4] )
      {
        v9 = v8;
        v8 = (uint32_t *)v8[2];
        if ( v8 == nullptr )
          goto LABEL_8;
      }
      v8 = (uint32_t *)v8[3];
    }
    while ( v8 != nullptr );
LABEL_8:
    if ( v9 != (uint32_t *)(a1 + 60) && v5 >= v9[4] )
    {
      v10 = v9[5];
      v11 = *(uint32_t **)(v10 + 4);
      v12 = (uint32_t *)(v10 + 4);
      if ( v11 != (uint32_t *)(v10 + 4) )
      {
        while ( (uint8_t)vox::Handle::opEq((vox::Handle::Self *)(v11 + 2), a3) == 0 )
        {
          v11 = (uint32_t *)*v11;
          if ( v12 == v11 )
            return;
        }
        if ( v12 != v11 )
        {
          sub_1901940(v11);
          (*(void (**)(uint32_t *))v11[2])(v11 + 2);
          opDelete(v11);
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_AA7860  (binary VA: 0xaa7860)
// Original: sub_AA7860
// ----------------------------------------------------------------------------
long double sub_AA7860(int a1, uint32_t *a2)
{
  float v2; // xmm1_4
  unsigned int v3;
  float v5;
  float v7;

  v2 = 0.0;
  v3 = *(uint32_t *)(a1 + 4);
  if ( v3 <= 1 )
    v2 = dword_1CA3418[v3];
  if ( v3 != 0 )
  {
    if ( v3 == 1 )
    {
      v7 = ((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)*a2 + 64))(*a2);
      return (float)(v7 + v2);
    }
    else
    {
      return (float)((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)*a2 + 64))(*a2);
    }
  }
  else
  {
    v5 = ((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)*a2 + 64))(*a2);
    return (float)(v5 * v2);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_AA7960  (binary VA: 0xaa7960)
// Original: sub_AA7960
// ----------------------------------------------------------------------------
const char * sub_AA7960(int a1)
{
  int v1;
  const char *result;

  v1 = *(uint32_t *)(a1 + 24);
  result = "N/A";
  if ( v1 != 0 )
    return (const char *)(*(int (**)(uint32_t))(*(uint32_t *)v1 + 104))(*(uint32_t *)(a1 + 24));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7990  (binary VA: 0xaa7990)
// Original: sub_AA7990
// ----------------------------------------------------------------------------
const char * sub_AA7990(int a1)
{
  int v1;
  const char *result;

  v1 = *(uint32_t *)(a1 + 24);
  result = "N/A";
  if ( v1 != 0 )
    return (const char *)(*(int (**)(uint32_t))(*(uint32_t *)v1 + 108))(*(uint32_t *)(a1 + 24));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA79C0  (binary VA: 0xaa79c0)
// Original: sub_AA79C0
// ----------------------------------------------------------------------------
int sub_AA79C0(int a1)
{
  int v1;
  int result;

  v1 = *(uint32_t *)(a1 + 24);
  result = 0;
  if ( v1 != 0 )
    return (int)(float)((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)v1 + 76))(*(uint32_t *)(a1 + 24));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA79F0  (binary VA: 0xaa79f0)
// Original: sub_AA79F0
// ----------------------------------------------------------------------------
int sub_AA79F0(int a1)
{
  int v1;
  int result;

  v1 = *(uint32_t *)(a1 + 24);
  result = 0;
  if ( v1 != 0 )
    return (int)(float)((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)v1 + 64))(*(uint32_t *)(a1 + 24));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7A20  (binary VA: 0xaa7a20)
// Original: sub_AA7A20
// ----------------------------------------------------------------------------
int sub_AA7A20(int a1)
{
  int v1;
  int result;

  v1 = *(uint32_t *)(a1 + 24);
  result = 0;
  if ( v1 != 0 )
    return (int)(float)((long double (*)(uint32_t))*(uint32_t *)(*(uint32_t *)v1 + 68))(*(uint32_t *)(a1 + 24));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7A50  (binary VA: 0xaa7a50)
// Original: sub_AA7A50
// ----------------------------------------------------------------------------
int sub_AA7A50(int a1)
{
  bool v1;
  int *v2;
  int v3;
  int *v4;
  int result;

  *(uint8_t *)a1 = 0;
  v1 = byte_20D12E0 == 0;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint8_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
  {
    sub_A3F880(&dword_20D1300);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
    __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D1304 == 0 )
    v2 = (int *)(&dword_20D1300);
  v3 = sub_A41440(v2);
  v1 = byte_20D12E0 == 0;
  *(uint32_t *)(a1 + 32) = v3;
  if ( v1 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
  {
    sub_A3F880(&dword_20D1300);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
    __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D1304 == 0 )
    v4 = (int *)(&dword_20D1300);
  result = sub_A41350(v4);
  *(uint32_t *)(a1 + 36) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7BB0  (binary VA: 0xaa7bb0)
// Original: sub_AA7BB0
// ----------------------------------------------------------------------------
int sub_AA7BB0(int a1, int a2)
{
  *(uint32_t *)(a1 + 28) += a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7BC0  (binary VA: 0xaa7bc0)
// Original: sub_AA7BC0
// ----------------------------------------------------------------------------
bool sub_AA7BC0(int a1)
{
  return *(uint32_t *)(a1 + 28) == 0;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7BD0  (binary VA: 0xaa7bd0)
// Original: sub_AA7BD0
// ----------------------------------------------------------------------------
int sub_AA7BD0(int a1)
{
  return *(uint32_t *)(a1 + 28);
}

// ----------------------------------------------------------------------------
// Function: sub_AA7BE0  (binary VA: 0xaa7be0)
// Original: sub_AA7BE0
// ----------------------------------------------------------------------------
int sub_AA7BE0(int a1)
{
  *(uint32_t *)(a1 + 28) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7BF0  (binary VA: 0xaa7bf0)
// Original: sub_AA7BF0
// ----------------------------------------------------------------------------
int sub_AA7BF0(int a1)
{
  int *v1;
  int *v2;
  int v3;
  bool v4;
  int v5;
  int *v6;
  int result;
  int v8;
  int v9;
  int v10;

  if ( byte_20D12E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
  {
    sub_A3F880(&dword_20D1300);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
    __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D1304 == 0 )
    v1 = (int *)(&dword_20D1300);
  if ( (uint8_t)sub_A41690(v1) != 0 )
    *(uint8_t *)(a1 + 16) = 1;
  if ( byte_20D12E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
  {
    sub_A3F880(&dword_20D1300);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
    __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D1304 == 0 )
    v2 = (int *)(&dword_20D1300);
  v3 = sub_A41440(v2);
  v4 = byte_20D12E0 == 0;
  *(uint32_t *)(a1 + 20) = v3;
  if ( v4 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
  {
    sub_A3F880(&dword_20D1300);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
    __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
  }
  v5 = 0;
  v6 = (int *)(&dword_20D1300);
  if ( byte_20D1304 != 0 )
    v6 = nullptr;
  result = sub_A41350(v6);
  v8 = *(uint32_t *)(a1 + 20);
  *(uint32_t *)(a1 + 24) = result;
  if ( v8 - *(uint32_t *)(a1 + 32) > 0 )
  {
    v9 = *(uint32_t *)(a1 + 28);
    if ( v9 > 0 )
    {
      v10 = v9 - (v8 - *(uint32_t *)(a1 + 32));
      if ( v10 >= 0 )
        v5 = v10;
      *(uint32_t *)(a1 + 28) = v5;
    }
    *(uint32_t *)(a1 + 32) = v8;
    *(uint32_t *)(a1 + 36) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7DC0  (binary VA: 0xaa7dc0)
// Original: sub_AA7DC0
// ----------------------------------------------------------------------------
int sub_AA7DC0(int a1, uint32_t *a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  result = a1;
  *(uint32_t *)a1 = *a2;
  *(uint32_t *)(a1 + 4) = a2[1];
  *(uint32_t *)(a1 + 8) = a2[2];
  v3 = a2[3];
  *(uint32_t *)(a1 + 12) = v3;
  if ( v3 == 0 || *(uint32_t *)(a1 + 28) != 0 )
    return result;
  if ( *(uint8_t *)(a1 + 16) != 0 && *(uint8_t *)a1 != 0 )
  {
    v4 = v3 + *(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 24);
LABEL_6:
    v5 = 0;
    if ( v4 > 0 )
      v5 = v4;
    *(uint32_t *)(a1 + 28) = v5;
    return result;
  }
  v6 = *(uint32_t *)(a1 + 20);
  v7 = *(uint32_t *)(a1 + 4);
  v4 = v3 - v6;
  if ( v7 >= v6 )
    goto LABEL_6;
  v8 = v3 + v7 - v6;
  v9 = 0;
  if ( v8 > 0 )
    v9 = v8;
  *(uint32_t *)(a1 + 28) = v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7E40  (binary VA: 0xaa7e40)
// Original: sub_AA7E40
// ----------------------------------------------------------------------------
uint32_t * sub_AA7E40(uint32_t *a1, uint32_t *a2)
{
  *a2 = a1[4];
  a2[1] = a1[5];
  a2[2] = a1[6];
  a2[3] = a1[7];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7E60  (binary VA: 0xaa7e60)
// Original: sub_AA7E60
// ----------------------------------------------------------------------------
int sub_AA7E60(int a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  result = a1;
  v2 = *(uint32_t *)(a1 + 12);
  if ( v2 == 0 || *(uint32_t *)(a1 + 28) != 0 )
    return result;
  if ( *(uint8_t *)(a1 + 16) != 0 && *(uint8_t *)a1 != 0 )
  {
    v3 = v2 + *(uint32_t *)(a1 + 8) - *(uint32_t *)(a1 + 24);
LABEL_6:
    v4 = 0;
    if ( v3 > 0 )
      v4 = v3;
    *(uint32_t *)(a1 + 28) = v4;
    return result;
  }
  v5 = *(uint32_t *)(a1 + 20);
  v6 = *(uint32_t *)(a1 + 4);
  v3 = v2 - v5;
  if ( v6 >= v5 )
    goto LABEL_6;
  v7 = v2 + v6 - v5;
  v8 = 0;
  if ( v7 > 0 )
    v8 = v7;
  *(uint32_t *)(a1 + 28) = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7ED0  (binary VA: 0xaa7ed0)
// Original: sub_AA7ED0
// ----------------------------------------------------------------------------
int sub_AA7ED0(int a1)
{
  *(uint8_t *)(a1 + 4) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_2069438);
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 20) = a1 + 12;
  *(uint32_t *)(a1 + 24) = a1 + 12;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_AA7F10  (binary VA: 0xaa7f10)
// Original: sub_AA7F10
// ----------------------------------------------------------------------------
int sub_AA7F10(int a1)
{
  int v1;
  int result;
  int *v3;
  int *v4;
  int v5;
  bool v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  g4_cxa_guard_t *v13;
  g4_cxa_guard_t *v14;

  v1 = *(uint32_t *)(a1 + 20);
  result = a1 + 12;
  if ( v1 != a1 + 12 )
  {
    do
    {
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_172E4)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0
        && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
      {
        sub_A3F880(&dword_20D1300);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
        __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
      }
      v3 = nullptr;
      if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_17304)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        v3 = (int *)(&dword_20D1300);
      if ( (uint8_t)sub_A41690(v3) != 0 )
        *(uint8_t *)(v1 + 36) = 1;
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_172E4)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0
        && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
      {
        sub_A3F880(&dword_20D1300);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
        __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
      }
      v4 = nullptr;
      if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_17304)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        v4 = (int *)(&dword_20D1300);
      v5 = sub_A41440(v4);
      v6 = *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_172E4)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0;
      *(uint32_t *)(v1 + 40) = v5;
      if ( v6 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12E0) != 0 )
      {
        sub_A3F880(&dword_20D1300);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12E0);
        __cxa_atexit((void (*)(void *))sub_A731A0, &dword_20D1300, &unk_20D1280);
      }
      v7 = (int *)(&dword_20D1300);
      if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_17304)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) != 0 )
        v7 = nullptr;
      v8 = sub_A41350(v7);
      v9 = *(uint32_t *)(v1 + 40);
      *(uint32_t *)(v1 + 44) = v8;
      if ( v9 - *(uint32_t *)(v1 + 52) > 0 )
      {
        v10 = *(uint32_t *)(v1 + 48);
        if ( v10 > 0 )
        {
          v12 = v10 - (v9 - *(uint32_t *)(v1 + 52));
          v11 = v12 < 0;
          v14 = (g4_cxa_guard_t *)v12;
          v13 = nullptr;
          if ( !v11 )
            v13 = v14;
          *(uint32_t *)(v1 + 48) = (uint32_t)(uintptr_t)(v13);
        }
        *(uint32_t *)(v1 + 52) = v9;
        *(uint32_t *)(v1 + 56) = v8;
      }
      result = sub_1904890(v1);
      v1 = result;
    }
    while ( result != a1 + 12 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: xmldata::DataManager::GenerateHeaderFile  (binary VA: 0xaa9620)
// Original: xmldata::DataManager::GenerateHeaderFile
// ----------------------------------------------------------------------------
int xmldata::DataManager::GenerateHeaderFile(int a1, int a2, char *a3)
{
  char *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  typedef char *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_s[156];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_s)) > _g4_s3 ? (16u + sizeof(_g4_t_s)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);

  v4 = a3;
  G4_VCALL<void>(a2, 44, "#pragma once\n", 13);
  G4_VCALL<void>(a2, 44, &a0[1], 1);
  G4_VCALL<void>(a2, 44, "#include \"", 10);
  G4_VCALL<void>(a2, 44, "Core/XmlData/", 13);
  G4_VCALL<void>(a2, 44, "_base_constant.h\"\n", 18);
  G4_VCALL<void>(a2, 44, "#include \"", 10);
  G4_VCALL<void>(a2, 44, "Core/XmlData/", 13);
  G4_VCALL<void>(a2, 44, "_base_struct.h\"\n", 16);
  G4_VCALL<void>(a2, 44, "#include \"", 10);
  G4_VCALL<void>(a2, 44, "Core/XmlData/", 13);
  G4_VCALL<void>(a2, 44, "_base_array.h\"\n", 15);
  G4_VCALL<void>(a2, 44, &a0[1], 1);
  v5 = *((uint32_t **)a3 + 14);
  v22 = (*((uint32_t *)a3 + 15) - (int)(uintptr_t)(v5)) >> 2;
  if ( v22 != 0 )
  {
    v6 = 0;
    sprintf(s, "#include \"%s.hpp\"\n", *v5);
    while ( 1 )
    {
      ++v6;
      G4_VCALL<void>(a2, 44, s, strlen(s));
      if ( v6 == v22 )
        break;
      sprintf(s, "#include \"%s.hpp\"\n", *(uint32_t *)(*((uint32_t *)a3 + 14) + 4 * v6));
    }
  }
  G4_VCALL<void>(a2, 44, &a0[1], 1);
  G4_VCALL<void>(a2, 44, "namespace xmldata {\n", 20);
  G4_VCALL<void>(a2, 44, "namespace constants {\n", 22);
  v7 = *((uint32_t *)a3 + 17);
  if ( (*((uint32_t *)a3 + 18) - v7) >> 2 != 0 )
  {
    v8 = 0;
    v9 = (*((uint32_t *)a3 + 18) - v7) >> 2;
    while ( 1 )
    {
      v10 = *(uint32_t *)(v7 + 4 * v8++);
      G4_VCALL<void>(v10, 28, a2);
      if ( v8 == v9 )
        break;
      v7 = *((uint32_t *)a3 + 17);
    }
    v4 = a3;
  }
  G4_VCALL<void>(a2, 44, "\n\n}; // namespace constants\n", 28);
  G4_VCALL<void>(a2, 44, "namespace structures {\n", 23);
  v11 = *((uint32_t *)v4 + 20);
  if ( (*((uint32_t *)v4 + 21) - v11) >> 2 != 0 )
  {
    v20 = v4;
    v12 = 0;
    v13 = (*((uint32_t *)v4 + 21) - v11) >> 2;
    while ( 1 )
    {
      v14 = *(uint32_t *)(v11 + 4 * v12++);
      G4_VCALL<void>(v14, 28, a2);
      if ( v12 == v13 )
        break;
      v11 = *((uint32_t *)v20 + 20);
    }
    v4 = v20;
  }
  G4_VCALL<void>(a2, 44, "\n\n}; // namespace structures\n", 29);
  G4_VCALL<void>(a2, 44, "namespace arrays {\n", 19);
  v15 = *((uint32_t *)v4 + 23);
  if ( (*((uint32_t *)v4 + 24) - v15) >> 2 != 0 )
  {
    v21 = v4;
    v16 = 0;
    v17 = (*((uint32_t *)v4 + 24) - v15) >> 2;
    while ( 1 )
    {
      v18 = *(uint32_t *)(v15 + 4 * v16++);
      G4_VCALL<void>(v18, 28, a2);
      if ( v16 == v17 )
        break;
      v15 = *((uint32_t *)v21 + 23);
    }
  }
  G4_VCALL<void>(a2, 44, "\n\n}; // namespace arrays\n", 25);
  return G4_VCALL<int>(a2, 44, "}; // namespace xmldata\n", 24);
}

// ----------------------------------------------------------------------------
// Function: sub_AAA860  (binary VA: 0xaaa860)
// Original: sub_AAA860
// ----------------------------------------------------------------------------
void sub_AAA860(int a1, char *a2, char *needle, int a4)
{
  int i;
  const char *haystack;
  char *v6;
  size_t v7;
  typedef uint32_t _g4_t_v8[3];
  typedef uint32_t _g4_t_v9[13];
  typedef char _g4_t_s[156];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_s)) > _g4_s2 ? (64u + sizeof(_g4_t_s)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 64u);

  glf::FileStreamImpl::Construct((glf::IOStream::Self *)v9, (int)(uintptr_t)(a2), 19);
  v9[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v9) != 0 )
  {
    sub_A46990(v8, v9, 0, 1);
    for ( i = *(uint32_t *)(a4 + 12); a4 + 4 != i; i = sub_19048E0(i) )
    {
      haystack = *(const char **)(i + 20);
      if ( strstr(haystack, needle) != nullptr )
      {
        v6 = (char *)(strrchr(haystack, 47));
        if ( v6 != nullptr )
          haystack = v6 + 1;
        sprintf(s, "#include \"%s\"\n", haystack);
        (*(void (**)(uint32_t *, char *, unsigned int))(v8[0] + 44))(v8, s, strlen(s));
      }
    }
    glf::FileStreamImpl::Close((glf::FileStreamImpl::Self *)v9);
    sub_A188C0(v8);
  }
  else
  {
    v7 = strlen(a2);
    g4_std_compat::string_assign((int)(uintptr_t)(&dword_20DCC24), a2, v7);
    xmldata::DataManager::LogError("Can't open '%s' for writing.\n", (char)(uintptr_t)(a2));
  }
  v9[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v9);
}

// ----------------------------------------------------------------------------
// Function: sub_AAB190  (binary VA: 0xaab190)
// Original: sub_AAB190
// ----------------------------------------------------------------------------
int sub_AAB190(uint32_t *a1, int a2)
{
  int v2;

  v2 = G4_VCALL<int>(a1, 48, a2);
  if ( v2 != 0 )
    return *(uint8_t *)(v2 + 44);
  xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", a1[2], a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_AAB200  (binary VA: 0xaab200)
// Original: sub_AAB200
// ----------------------------------------------------------------------------
int sub_AAB200(uint32_t *a1, int a2)
{
  int v2;

  v2 = G4_VCALL<int>(a1, 48, a2);
  if ( v2 != 0 )
    return G4_VCALL<int>(v2, 60);
  xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", a1[2], a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_AAB270  (binary VA: 0xaab270)
// Original: sub_AAB270
// ----------------------------------------------------------------------------
int sub_AAB270(uint32_t *a1, int a2, int a3)
{
  int v3;

  v3 = G4_VCALL<int>(a1, 48, a2);
  if ( v3 != 0 )
    return G4_VCALL<int>(v3, 64, a3);
  xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", a1[2], a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_AAB2F0  (binary VA: 0xaab2f0)
// Original: sub_AAB2F0
// ----------------------------------------------------------------------------
int sub_AAB2F0(uint32_t *a1, int a2, int a3)
{
  int v3;

  v3 = G4_VCALL<int>(a1, 48, a2);
  if ( v3 != 0 )
    return G4_VCALL<int>(v3, 68, a3);
  xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", a1[2], a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_AAB370  (binary VA: 0xaab370)
// Original: sub_AAB370
// ----------------------------------------------------------------------------
long double sub_AAB370(uint32_t *a1, int a2, int a3)
{
  int v3;
  long double result; // fst7

  v3 = G4_VCALL<int>(a1, 48, a2);
  if ( v3 != 0 )
  {
    G4_VCALL<void>(v3, 72, a3);
  }
  else
  {
    xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", a1[2], a2);
    return 0.0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AAB3F0  (binary VA: 0xaab3f0)
// Original: sub_AAB3F0
// ----------------------------------------------------------------------------
int sub_AAB3F0(char *a1, int a2, int a3, int a4)
{
  int v4;

  v4 = G4_VCALL<int>(a1, 48, a2);
  if ( v4 != 0 )
    return G4_VCALL<int>(v4, 76, a3, a4);
  else
    return xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", *((uint32_t *)a1 + 2), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_AAB490  (binary VA: 0xaab490)
// Original: sub_AAB490
// ----------------------------------------------------------------------------
int sub_AAB490(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;

  v3 = G4_VCALL<int>(a1, 48, a2);
  v4 = v3;
  if ( v3 != 0 )
  {
    G4_VCALL<void>(v3, 76, v3 + 48, a3);
    return *(uint32_t *)(v4 + 48);
  }
  else
  {
    xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", a1[2], a2);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_AAB520  (binary VA: 0xaab520)
// Original: sub_AAB520
// ----------------------------------------------------------------------------
char * sub_AAB520(char *a1, int a2, int a3)
{
  int v3;
  char *result;
  int v5;
  int v6;
  int *src;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  char *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  char *v18;
  int v19;
  bool v20; // cc
  int v21;
  int v22;
  int v23;
  char *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  size_t v30;
  char *dest;

  v3 = G4_VCALL<int>(a1, 48, a2);
  if ( v3 == 0 )
    return (char *)xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", *((uint32_t *)a1 + 2), a2);
  v23 = v3;
  result = (char *)G4_VCALL<int>(v3, 60);
  v28 = (int)(uintptr_t)(result);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    v5 = 0;
    v22 = v23;
    do
    {
      v6 = G4_VCALL<int>(v22, 68, v5);
      src = *(int **)(a3 + 4);
      v8 = v6;
      if ( src == *(int **)(a3 + 8) )
      {
        v10 = ((int)(uintptr_t)(src) - *(uint32_t *)a3) >> 2;
        v30 = 4;
        v29 = v10;
        if ( v10 != 0 )
        {
          v11 = 2 * v10;
          if ( v10 <= 2 * v10 )
          {
            v19 = 8 * v10;
            v20 = v11 <= 0x3FFFFFFF;
            v21 = -4;
            if ( v20 )
              v21 = v19;
            v30 = v21;
          }
          else
          {
            v30 = 0xFFFFFFFC;
          }
        }
        v25 = v8;
        dest = (char *)opNew(v30);
        v12 = &dest[4 * v29];
        if ( v12 != nullptr )
          *(uint32_t *)v12 = v25;
        v13 = 0;
        v14 = ((int)(uintptr_t)(src) - *(uint32_t *)a3) >> 2;
        if ( v14 != 0 )
        {
          v27 = 4 * v14;
          memmove(dest, *(const void **)a3, 4 * v14);
          v13 = v27;
        }
        v15 = &dest[v13 + 4];
        v16 = 0;
        v17 = (*(uint32_t *)(a3 + 4) - (int)(uintptr_t)(src)) >> 2;
        if ( v17 != 0 )
        {
          v26 = 4 * v17;
          v24 = v15;
          memmove(v15, src, 4 * v17);
          v15 = v24;
          v16 = v26;
        }
        v18 = &v15[v16];
        if ( *(uint32_t *)a3 != 0 )
          opDelete(*(void **)a3);
        *(uint32_t *)(a3 + 4) = (uint32_t)(uintptr_t)(v18);
        *(uint32_t *)a3 = (uint32_t)(uintptr_t)(dest);
        result = &dest[v30];
        *(uint32_t *)(a3 + 8) = (uint32_t)(uintptr_t)(&dest[v30]);
      }
      else
      {
        v9 = 0;
        if ( src != nullptr )
        {
          *src = v8;
          v9 = *(uint32_t *)(a3 + 4);
        }
        result = (char *)(v9 + 4);
        *(uint32_t *)(a3 + 4) = (uint32_t)(uintptr_t)(result);
      }
      ++v5;
    }
    while ( v28 != v5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AAB700  (binary VA: 0xaab700)
// Original: sub_AAB700
// ----------------------------------------------------------------------------
int sub_AAB700(char *a1, int a2, uint8_t a3, int a4)
{
  int v4;

  v4 = G4_VCALL<int>(a1, 48, a2);
  if ( v4 != 0 )
    return G4_VCALL<int>(v4, 80, a3, a4);
  else
    return xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", *((uint32_t *)a1 + 2), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_AAB7B0  (binary VA: 0xaab7b0)
// Original: sub_AAB7B0
// ----------------------------------------------------------------------------
int sub_AAB7B0(char *a1, int a2, int a3, int a4)
{
  int v4;

  v4 = G4_VCALL<int>(a1, 48, a2);
  if ( v4 != 0 )
    return G4_VCALL<int>(v4, 84, a3, a4);
  else
    return xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", *((uint32_t *)a1 + 2), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_AAB850  (binary VA: 0xaab850)
// Original: sub_AAB850
// ----------------------------------------------------------------------------
int sub_AAB850(char *a1, int a2, int a3, int a4)
{
  int v4;

  v4 = G4_VCALL<int>(a1, 48, a2);
  if ( v4 != 0 )
    return G4_VCALL<int>(v4, 88, a3, a4);
  else
    return xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", *((uint32_t *)a1 + 2), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_AAB8F0  (binary VA: 0xaab8f0)
// Original: sub_AAB8F0
// ----------------------------------------------------------------------------
int sub_AAB8F0(char *a1, int a2, int a3, int a4)
{
  int v4;

  v4 = G4_VCALL<int>(a1, 48, a2);
  if ( v4 != 0 )
    return G4_VCALL<int>(v4, 92, a3, a4);
  else
    return xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", *((uint32_t *)a1 + 2), a2);
}

// ----------------------------------------------------------------------------
// Function: sub_AB0E30  (binary VA: 0xab0e30)
// Original: sub_AB0E30
// ----------------------------------------------------------------------------
int sub_AB0E30(int a1, int a2, int a3, int a4)
{
  int result;

  result = 0;
  if ( *(uint8_t *)(a1 + 72) != 0 && a4 != 0 )
  {
    vox::VoxEngine::RegisterForEmitterStateChangeNotification(*(uint32_t *)(a1 + 8), a2, a4, a3);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AB1570  (binary VA: 0xab1570)
// Original: sub_AB1570
// ----------------------------------------------------------------------------
int sub_AB1570(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 8);
  if ( result != 0 )
    return vox::VoxEngine::RegisterExternalDataGenerator(result, a2, "AUX1");
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AB1630  (binary VA: 0xab1630)
// Original: sub_AB1630
// ----------------------------------------------------------------------------
int sub_AB1630(uint32_t *a1, uint8_t a2)
{
  int result;

  result = a2;
  if ( a1[2] != 0 && a2 != 0 )
  {
    result = vox::ReverbHQ::LoadParameterBank((vox::ReverbHQ::Self *)(a1 + 10), "gangstar_reverb_presets.fxb");
    if ( (uint8_t)result != 0 )
      return vox::ReverbHQ::LoadParameterBank((vox::ReverbHQ::Self *)(a1 + 14), "gangstar_reverb_presets.fxb");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AB6D20  (binary VA: 0xab6d20)
// Original: sub_AB6D20
// ----------------------------------------------------------------------------
time_t sub_AB6D20(int a1, char *s)
{
  int v2;
  typedef struct tm _g4_t_tp;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_tp)) > _g4_s0 ? (4u + sizeof(_g4_t_tp)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 4u);

  if ( byte_20DD510 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DD510) != 0 )
  {
    dword_20DD520 = 19;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DD510);
  }
  v2 = 0;
  if ( strlen(s) == dword_20DD520
    && sscanf(s, "%4d-%2d-%2d %2d:%2d:%2d", &tp.tm_year, &tp.tm_mon, &tp.tm_mday, &tp.tm_hour, &tp.tm_min, &tp) == 6 )
  {
    tp.tm_year -= 1900;
    --tp.tm_mon;
    return mktime(&tp);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_AB6E10  (binary VA: 0xab6e10)
// Original: sub_AB6E10
// ----------------------------------------------------------------------------
int sub_AB6E10(int a1, char *s)
{
  int result;
  struct tm *v3;
  typedef time_t _g4_t_timer;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_timer)) > _g4_s0 ? (0u + sizeof(_g4_t_timer)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v7)) > _g4_s3 ? (16u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v8)) > _g4_s4 ? (20u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v9)) > _g4_s5 ? (24u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v10)) > _g4_s6 ? (28u + sizeof(_g4_t_v10)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  time(&timer);
  result = timer;
  if ( s != nullptr )
  {
    sscanf(s, "%d-%d-%d %d:%d:%d", &v5, &v6, &v7, &v8, &v9, &v10);
    v3 = localtime(&timer);
    v3->tm_year = v5 - 1900;
    v3->tm_mon = v6 - 1;
    v3->tm_mday = v7;
    v3->tm_hour = v8;
    v3->tm_min = v9;
    v3->tm_sec = v10;
    return mktime(v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AB6EE0  (binary VA: 0xab6ee0)
// Original: sub_AB6EE0
// ----------------------------------------------------------------------------
int sub_AB6EE0(int a1, time_t timer, uint32_t *a3)
{
  struct tm *v3;
  int v4;
  int tm_mon;
  size_t v6;
  typedef signed int _g4_t_tm_mday;
  typedef signed int _g4_t_tm_hour;
  typedef signed int _g4_t_tm_min;
  typedef size_t _g4_t_tm_sec;
  typedef char _g4_t_s[20];
  typedef char _g4_t_dest[49];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_tm_mday)) > _g4_s0 ? (8u + sizeof(_g4_t_tm_mday)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_tm_hour)) > _g4_s1 ? (8u + sizeof(_g4_t_tm_hour)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_tm_min)) > _g4_s2 ? (8u + sizeof(_g4_t_tm_min)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_tm_sec)) > _g4_s3 ? (8u + sizeof(_g4_t_tm_sec)) : _g4_s3,
    _g4_s5 = (39u + sizeof(_g4_t_s)) > _g4_s4 ? (39u + sizeof(_g4_t_s)) : _g4_s4,
    _g4_s6 = (59u + sizeof(_g4_t_dest)) > _g4_s5 ? (59u + sizeof(_g4_t_dest)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_tm_mday &tm_mday = *reinterpret_cast<_g4_t_tm_mday *>(_g4_sf + 8u);
  _g4_t_tm_hour &tm_hour = *reinterpret_cast<_g4_t_tm_hour *>(_g4_sf + 8u);
  _g4_t_tm_min &tm_min = *reinterpret_cast<_g4_t_tm_min *>(_g4_sf + 8u);
  _g4_t_tm_sec &tm_sec = *reinterpret_cast<_g4_t_tm_sec *>(_g4_sf + 8u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 39u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 59u);

  g4_std::string::clear(a3, 0, *(uint32_t *)(*a3 - 12), 0);
  v3 = localtime(&timer);
  v3->tm_yday = -1;
  v3->tm_isdst = -1;
  v4 = v3->tm_year + 1900;
  dest[0] = 0;
  sprintf(s, "%d-", v4);
  strcat(dest, s);
  tm_mon = v3->tm_mon;
  if ( tm_mon <= 8 )
    sprintf(s, "0%d-", tm_mon + 1);
  else
    sprintf(s, "%d-", tm_mon + 1);
  strcat(dest, s);
  tm_mday = v3->tm_mday;
  if ( tm_mday <= 9 )
    sprintf(s, "0%d ", tm_mday);
  else
    sprintf(s, "%d ", tm_mday);
  strcat(dest, s);
  tm_hour = v3->tm_hour;
  if ( tm_hour <= 9 )
    sprintf(s, "0%d:", tm_hour);
  else
    sprintf(s, "%d:", tm_hour);
  strcat(dest, s);
  tm_min = v3->tm_min;
  if ( tm_min <= 9 )
    sprintf(s, "0%d:", tm_min);
  else
    sprintf(s, "%d:", tm_min);
  strcat(dest, s);
  tm_sec = v3->tm_sec;
  if ( v3->tm_sec > 9 )
    sprintf(s, "%dZ", tm_sec);
  else
    sprintf(s, "0%dZ", tm_sec);
  strcat(dest, s);
  sub_1939D80((int)(uintptr_t)(a3), 0x14u, 0);
  v6 = strlen(dest);
  return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a3), dest, v6));
}

// ----------------------------------------------------------------------------
// Function: sub_AB7120  (binary VA: 0xab7120)
// Original: sub_AB7120
// ----------------------------------------------------------------------------
int sub_AB7120(int a1, int a2, uint32_t *a3)
{
  struct tm *v3;
  time_t v4;
  struct tm *v5;
  time_t v6;
  typedef time_t _g4_t_timer;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_timer)) > _g4_s0 ? (12u + sizeof(_g4_t_timer)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 12u);

  time(&timer);
  v3 = localtime(&timer);
  v4 = mktime(v3);
  v5 = gmtime(&timer);
  v6 = mktime(v5);
  return sub_AB6EE0(a1, a2 - (v4 - v6), a3);
}

// ----------------------------------------------------------------------------
// Function: sub_AB85D0  (binary VA: 0xab85d0)
// Original: sub_AB85D0
// ----------------------------------------------------------------------------
int sub_AB85D0(int a1, char *a2, float a3)
{
  int v3;
  int v4;
  char *v5;
  int result;
  char *v7;
  typedef char *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (43u + sizeof(_g4_t_v11)) > _g4_s3 ? (43u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 43u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11) + 1, a2, (int)(uintptr_t)(v11));
  v9 = a1 + 20;
  v3 = a1 + 20;
  v4 = *(uint32_t *)(a1 + 24);
  if ( v4 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v4 + 16, (char *)v11 + 1) == 0 )
      {
        v3 = v4;
        v4 = *(uint32_t *)(v4 + 8);
        if ( v4 == 0 )
          goto LABEL_6;
      }
      v4 = *(uint32_t *)(v4 + 12);
    }
    while ( v4 != 0 );
LABEL_6:
    if ( v3 != v9 && (uint8_t)std::op_char((char *)v11 + 1, v3 + 16) != 0 )
      v3 = a1 + 20;
  }
  g4_std::string::Destroy((char *)v11 + 1);
  if ( v9 == v3 )
    return xmldata::DataManager::LogError("Can't find constant value '%s.%s'\n", *(uint32_t *)(a1 + 8), a2);
  v5 = *(char **)(v3 + 64);
  *(uint32_t *)(v3 + 48) = (int)a3;
  result = *(uint32_t *)(v3 + 60);
  *(uint8_t *)(v3 + 56) = 0;
  *(float *)(v3 + 52) = a3;
  v10 = result;
  if ( (char *)result != v5 )
  {
    v7 = (char *)result;
    do
    {
      g4_std::string::Destroy(v7 + 4);
      v8 = v7;
      v7 += 8;
      g4_std::string::Destroy(v8);
    }
    while ( v5 != v7 );
  }
  *(uint32_t *)(v3 + 64) = v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AB9360  (binary VA: 0xab9360)
// Original: sub_AB9360
// ----------------------------------------------------------------------------
int sub_AB9360(int a1, char *a2, int a3)
{
  int v3;
  int v4;
  int result;
  char *v6;
  char *v7;
  typedef char *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (43u + sizeof(_g4_t_v11)) > _g4_s3 ? (43u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 43u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11) + 1, a2, (int)(uintptr_t)(v11));
  v9 = a1 + 20;
  v3 = a1 + 20;
  v4 = *(uint32_t *)(a1 + 24);
  if ( v4 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v4 + 16, (char *)v11 + 1) == 0 )
      {
        v3 = v4;
        v4 = *(uint32_t *)(v4 + 8);
        if ( v4 == 0 )
          goto LABEL_6;
      }
      v4 = *(uint32_t *)(v4 + 12);
    }
    while ( v4 != 0 );
LABEL_6:
    if ( v3 != v9 && (uint8_t)std::op_char((char *)v11 + 1, v3 + 16) != 0 )
      v3 = a1 + 20;
  }
  g4_std::string::Destroy((char *)v11 + 1);
  if ( v9 == v3 )
    return xmldata::DataManager::LogError("Can't find constant value '%s.%s'\n", *(uint32_t *)(a1 + 8), a2);
  result = *(uint32_t *)(v3 + 60);
  v6 = *(char **)(v3 + 64);
  *(uint32_t *)(v3 + 48) = a3;
  *(uint8_t *)(v3 + 56) = 0;
  *(float *)(v3 + 52) = (float)a3;
  v10 = result;
  if ( (char *)result != v6 )
  {
    v7 = (char *)result;
    do
    {
      g4_std::string::Destroy(v7 + 4);
      v8 = v7;
      v7 += 8;
      g4_std::string::Destroy(v8);
    }
    while ( v6 != v7 );
  }
  *(uint32_t *)(v3 + 64) = v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AB9480  (binary VA: 0xab9480)
// Original: sub_AB9480
// ----------------------------------------------------------------------------
int sub_AB9480(int a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v6)) > _g4_s1 ? (27u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 27u);

  ++*(uint32_t *)(a1 + 124);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6) + 1, a2, (int)(uintptr_t)(v6));
  v2 = *(uint32_t *)(a1 + 88);
  v5 = a1 + 84;
  v3 = a1 + 84;
  if ( v2 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v2 + 16, (char *)v6 + 1) == 0 )
      {
        v3 = v2;
        v2 = *(uint32_t *)(v2 + 8);
        if ( v2 == 0 )
          goto LABEL_6;
      }
      v2 = *(uint32_t *)(v2 + 12);
    }
    while ( v2 != 0 );
LABEL_6:
    if ( v5 == v3 )
    {
      v3 = a1 + 84;
    }
    else if ( (uint8_t)std::op_char((char *)v6 + 1, v3 + 16) != 0 )
    {
      v3 = a1 + 84;
    }
  }
  g4_std::string::Destroy((char *)v6 + 1);
  if ( v5 != v3 )
    return *(uint32_t *)(v3 + 20);
  xmldata::DataManager::LogError("Can't find array '%s'\n", a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_AB9550  (binary VA: 0xab9550)
// Original: sub_AB9550
// ----------------------------------------------------------------------------
int sub_AB9550(uint32_t *a1, char *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int v6;
  int result;
  typedef uint32_t *_g4_t_v8;
  typedef int _g4_t_v9[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v9)) > _g4_s1 ? (27u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 27u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v9) + 1, a2, (int)(uintptr_t)(v9));
  v8 = a1 + 5;
  v2 = a1 + 5;
  v3 = (uint32_t *)a1[6];
  if ( v3 != nullptr )
  {
    do
    {
      while ( (uint8_t)std::op_char(v3 + 4, (char *)v9 + 1) == 0 )
      {
        v2 = v3;
        v3 = (uint32_t *)v3[2];
        if ( v3 == nullptr )
          goto LABEL_6;
      }
      v3 = (uint32_t *)v3[3];
    }
    while ( v3 != nullptr );
LABEL_6:
    if ( v2 != v8 && (uint8_t)std::op_char((char *)v9 + 1, v2 + 4) != 0 )
      v2 = a1 + 5;
  }
  g4_std::string::Destroy((char *)v9 + 1);
  if ( v8 == v2 )
    goto LABEL_15;
  v4 = (uint32_t *)a1[10];
  v5 = (a1[11] - (int)(uintptr_t)(v4)) >> 2;
  if ( v5 == 0 )
    goto LABEL_15;
  v6 = v2[5];
  result = 0;
  if ( *v4 != v6 )
  {
    while ( ++result != v5 )
    {
      if ( v4[result] == v6 )
        return result;
    }
LABEL_15:
    xmldata::DataManager::LogError("Can't find array entry '%s.%s'\n", a1[2], a2);
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AB9650  (binary VA: 0xab9650)
// Original: sub_AB9650
// ----------------------------------------------------------------------------
int sub_AB9650(int a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v6)) > _g4_s1 ? (27u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 27u);

  ++*(uint32_t *)(a1 + 116);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6) + 1, a2, (int)(uintptr_t)(v6));
  v2 = *(uint32_t *)(a1 + 64);
  v5 = a1 + 60;
  v3 = a1 + 60;
  if ( v2 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v2 + 16, (char *)v6 + 1) == 0 )
      {
        v3 = v2;
        v2 = *(uint32_t *)(v2 + 8);
        if ( v2 == 0 )
          goto LABEL_6;
      }
      v2 = *(uint32_t *)(v2 + 12);
    }
    while ( v2 != 0 );
LABEL_6:
    if ( v5 == v3 )
    {
      v3 = a1 + 60;
    }
    else if ( (uint8_t)std::op_char((char *)v6 + 1, v3 + 16) != 0 )
    {
      v3 = a1 + 60;
    }
  }
  g4_std::string::Destroy((char *)v6 + 1);
  if ( v5 != v3 )
    return *(uint32_t *)(v3 + 20);
  xmldata::DataManager::LogError("Can't find structure '%s'\n", a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_AB9870  (binary VA: 0xab9870)
// Original: sub_AB9870
// ----------------------------------------------------------------------------
int sub_AB9870(int a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v6)) > _g4_s1 ? (27u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 27u);

  ++*(uint32_t *)(a1 + 108);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6) + 1, a2, (int)(uintptr_t)(v6));
  v2 = *(uint32_t *)(a1 + 40);
  v5 = a1 + 36;
  v3 = a1 + 36;
  if ( v2 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v2 + 16, (char *)v6 + 1) == 0 )
      {
        v3 = v2;
        v2 = *(uint32_t *)(v2 + 8);
        if ( v2 == 0 )
          goto LABEL_6;
      }
      v2 = *(uint32_t *)(v2 + 12);
    }
    while ( v2 != 0 );
LABEL_6:
    if ( v5 == v3 )
    {
      v3 = a1 + 36;
    }
    else if ( (uint8_t)std::op_char((char *)v6 + 1, v3 + 16) != 0 )
    {
      v3 = a1 + 36;
    }
  }
  g4_std::string::Destroy((char *)v6 + 1);
  if ( v5 != v3 )
    return *(uint32_t *)(v3 + 20);
  xmldata::DataManager::LogError("Can't find constant '%s'\n", a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_AB9940  (binary VA: 0xab9940)
// Original: sub_AB9940
// ----------------------------------------------------------------------------
int sub_AB9940(int a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v6)) > _g4_s1 ? (27u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 27u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6) + 1, a2, (int)(uintptr_t)(v6));
  v5 = a1 + 20;
  v2 = a1 + 20;
  v3 = *(uint32_t *)(a1 + 24);
  if ( v3 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v3 + 16, (char *)v6 + 1) == 0 )
      {
        v2 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_6;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_6:
    if ( v5 == v2 )
    {
      v2 = a1 + 20;
    }
    else if ( (uint8_t)std::op_char((char *)v6 + 1, v2 + 16) != 0 )
    {
      v2 = a1 + 20;
    }
  }
  g4_std::string::Destroy((char *)v6 + 1);
  if ( v5 != v2 )
    return *(uint32_t *)(v2 + 20);
  xmldata::DataManager::LogError("Can't find array entry '%s.%s'\n", *(uint32_t *)(a1 + 8), a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_ABCBF0  (binary VA: 0xabcbf0)
// Original: sub_ABCBF0
// ----------------------------------------------------------------------------
int sub_ABCBF0(int a1, int a2)
{
  char *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  unsigned int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  bool v19;
  char v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v24)) > _g4_s3 ? (8u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v25)) > _g4_s4 ? (12u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v26)) > _g4_s5 ? (12u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (22u + sizeof(_g4_t_v27)) > _g4_s6 ? (22u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v28)) > _g4_s7 ? (24u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v29)) > _g4_s8 ? (28u + sizeof(_g4_t_v29)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 22u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);

  v25 = *(char **)a1;
  v2 = *(char **)a1;
  v3 = *(uint32_t *)(a1 + 16);
  ++*(uint32_t *)(v3 + 124);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), v2, (int)(uintptr_t)(&v27));
  v4 = v3 + 84;
  v5 = *(uint32_t *)(v3 + 88);
  v23 = v4;
  v6 = v4;
  if ( v5 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v5 + 16, &v28) == 0 )
      {
        v6 = v5;
        v5 = *(uint32_t *)(v5 + 8);
        if ( v5 == 0 )
          goto LABEL_6;
      }
      v5 = *(uint32_t *)(v5 + 12);
    }
    while ( v5 != 0 );
LABEL_6:
    if ( v6 != v23 && (uint8_t)std::op_char(&v28, v6 + 16) != 0 )
      v6 = v23;
  }
  g4_std::string::Destroy(&v28);
  if ( v23 == v6 )
  {
    xmldata::DataManager::LogError("Can't find array '%s'\n", v25);
    return a1;
  }
  v7 = *(char **)(v6 + 20);
  if ( v7 != nullptr )
  {
    if ( *(uint32_t *)(*(uint32_t *)(a1 + 4) - 12) == 0 )
    {
      v8 = *(uint32_t *)(a1 + 8);
      v9 = *((uint32_t *)v7 + 10);
      if ( v8 < (*((uint32_t *)v7 + 11) - v9) >> 2 )
      {
        v10 = *(uint32_t **)(v9 + 4 * v8);
LABEL_14:
        if ( v10 != nullptr && (uint8_t)sub_ABC8F0((int)(uintptr_t)(v10), *(char **)(a1 + 12)) != 0 )
        {
          v11 = *(uint32_t *)(a1 + 20);
          v12 = *(uint32_t *)(a1 + 12);
          v13 = G4_VCALL<int>(v10, 48, v12);
          if ( v13 != 0 )
            G4_VCALL<void>(v13, 92, a2, v11);
          else
            xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", v10[2], v12);
        }
        return a1;
      }
    }
    v24 = (uint32_t *)(v7 + 20);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), *(char **)(a1 + 4), (int)(uintptr_t)(&v27) + 1);
    v15 = *((uint32_t **)v7 + 6);
    v16 = (uint32_t *)(v7 + 20);
    if ( v15 != nullptr )
    {
      v26 = v7;
      v17 = (uint32_t *)(v7 + 20);
      do
      {
        while ( (uint8_t)std::op_char(v15 + 4, v29) == 0 )
        {
          v17 = v15;
          v15 = (uint32_t *)v15[2];
          if ( v15 == nullptr )
            goto LABEL_24;
        }
        v15 = (uint32_t *)v15[3];
      }
      while ( v15 != nullptr );
LABEL_24:
      v18 = v17;
      v19 = v24 == v17;
      v7 = v26;
      if ( v19 )
      {
        v16 = v24;
      }
      else
      {
        v21 = v18;
        v20 = std::op_char(v29, v18 + 4);
        v16 = v21;
        if ( v20 != 0 )
          v16 = v24;
      }
    }
    v22 = v16;
    g4_std::string::Destroy(v29);
    if ( v24 != v22 )
    {
      v10 = (uint32_t *)sub_AB9940((int)(uintptr_t)(v7), *(char **)(a1 + 4));
      goto LABEL_14;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_ABCE20  (binary VA: 0xabce20)
// Original: sub_ABCE20
// ----------------------------------------------------------------------------
int sub_ABCE20(int a1, int *a2)
{
  char *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  unsigned int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  bool v19;
  char v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v24)) > _g4_s3 ? (8u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v25)) > _g4_s4 ? (8u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v26)) > _g4_s5 ? (12u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v27)) > _g4_s6 ? (12u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (22u + sizeof(_g4_t_v28)) > _g4_s7 ? (22u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v29)) > _g4_s8 ? (24u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v30)) > _g4_s9 ? (28u + sizeof(_g4_t_v30)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 22u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);

  v26 = *(char **)a1;
  v2 = *(char **)a1;
  v3 = *(uint32_t *)(a1 + 16);
  ++*(uint32_t *)(v3 + 124);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), v2, (int)(uintptr_t)(&v28));
  v4 = v3 + 84;
  v5 = *(uint32_t *)(v3 + 88);
  v23 = v4;
  v6 = v4;
  if ( v5 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v5 + 16, &v29) == 0 )
      {
        v6 = v5;
        v5 = *(uint32_t *)(v5 + 8);
        if ( v5 == 0 )
          goto LABEL_6;
      }
      v5 = *(uint32_t *)(v5 + 12);
    }
    while ( v5 != 0 );
LABEL_6:
    if ( v6 != v23 && (uint8_t)std::op_char(&v29, v6 + 16) != 0 )
      v6 = v23;
  }
  g4_std::string::Destroy(&v29);
  if ( v23 == v6 )
  {
    xmldata::DataManager::LogError("Can't find array '%s'\n", v26);
    return a1;
  }
  v7 = *(char **)(v6 + 20);
  if ( v7 != nullptr )
  {
    if ( *(uint32_t *)(*(uint32_t *)(a1 + 4) - 12) == 0 )
    {
      v8 = *(uint32_t *)(a1 + 8);
      v9 = *((uint32_t *)v7 + 10);
      if ( v8 < (*((uint32_t *)v7 + 11) - v9) >> 2 )
      {
        v10 = *(uint32_t **)(v9 + 4 * v8);
LABEL_14:
        if ( v10 != nullptr && (uint8_t)sub_ABC8F0((int)(uintptr_t)(v10), *(char **)(a1 + 12)) != 0 )
        {
          v11 = *(uint32_t *)(a1 + 20);
          v24 = *a2;
          v12 = *(uint32_t *)(a1 + 12);
          v13 = G4_VCALL<int>(v10, 48, v12);
          if ( v13 != 0 )
            G4_VCALL<void>(v13, 88, v24, v11);
          else
            xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", v10[2], v12);
        }
        return a1;
      }
    }
    v25 = (uint32_t *)(v7 + 20);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), *(char **)(a1 + 4), (int)(uintptr_t)(&v28) + 1);
    v15 = *((uint32_t **)v7 + 6);
    v16 = (uint32_t *)(v7 + 20);
    if ( v15 != nullptr )
    {
      v27 = v7;
      v17 = (uint32_t *)(v7 + 20);
      do
      {
        while ( (uint8_t)std::op_char(v15 + 4, v30) == 0 )
        {
          v17 = v15;
          v15 = (uint32_t *)v15[2];
          if ( v15 == nullptr )
            goto LABEL_24;
        }
        v15 = (uint32_t *)v15[3];
      }
      while ( v15 != nullptr );
LABEL_24:
      v18 = v17;
      v19 = v25 == v17;
      v7 = v27;
      if ( v19 )
      {
        v16 = v25;
      }
      else
      {
        v21 = v18;
        v20 = std::op_char(v30, v18 + 4);
        v16 = v21;
        if ( v20 != 0 )
          v16 = v25;
      }
    }
    v22 = v16;
    g4_std::string::Destroy(v30);
    if ( v25 != v22 )
    {
      v10 = (uint32_t *)sub_AB9940((int)(uintptr_t)(v7), *(char **)(a1 + 4));
      goto LABEL_14;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_ABD070  (binary VA: 0xabd070)
// Original: sub_ABD070
// ----------------------------------------------------------------------------
int sub_ABD070(int a1, int *a2)
{
  char *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  unsigned int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  bool v19;
  char v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v24)) > _g4_s3 ? (8u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v25)) > _g4_s4 ? (8u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v26)) > _g4_s5 ? (12u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v27)) > _g4_s6 ? (12u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (22u + sizeof(_g4_t_v28)) > _g4_s7 ? (22u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v29)) > _g4_s8 ? (24u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v30)) > _g4_s9 ? (28u + sizeof(_g4_t_v30)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 22u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);

  v26 = *(char **)a1;
  v2 = *(char **)a1;
  v3 = *(uint32_t *)(a1 + 16);
  ++*(uint32_t *)(v3 + 124);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), v2, (int)(uintptr_t)(&v28));
  v4 = v3 + 84;
  v5 = *(uint32_t *)(v3 + 88);
  v23 = v4;
  v6 = v4;
  if ( v5 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v5 + 16, &v29) == 0 )
      {
        v6 = v5;
        v5 = *(uint32_t *)(v5 + 8);
        if ( v5 == 0 )
          goto LABEL_6;
      }
      v5 = *(uint32_t *)(v5 + 12);
    }
    while ( v5 != 0 );
LABEL_6:
    if ( v6 != v23 && (uint8_t)std::op_char(&v29, v6 + 16) != 0 )
      v6 = v23;
  }
  g4_std::string::Destroy(&v29);
  if ( v23 == v6 )
  {
    xmldata::DataManager::LogError("Can't find array '%s'\n", v26);
    return a1;
  }
  v7 = *(char **)(v6 + 20);
  if ( v7 != nullptr )
  {
    if ( *(uint32_t *)(*(uint32_t *)(a1 + 4) - 12) == 0 )
    {
      v8 = *(uint32_t *)(a1 + 8);
      v9 = *((uint32_t *)v7 + 10);
      if ( v8 < (*((uint32_t *)v7 + 11) - v9) >> 2 )
      {
        v10 = *(uint32_t **)(v9 + 4 * v8);
LABEL_14:
        if ( v10 != nullptr && (uint8_t)sub_ABC8F0((int)(uintptr_t)(v10), *(char **)(a1 + 12)) != 0 )
        {
          v11 = *(uint32_t *)(a1 + 20);
          v24 = *a2;
          v12 = *(uint32_t *)(a1 + 12);
          v13 = G4_VCALL<int>(v10, 48, v12);
          if ( v13 != 0 )
            G4_VCALL<void>(v13, 84, v24, v11);
          else
            xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", v10[2], v12);
        }
        return a1;
      }
    }
    v25 = (uint32_t *)(v7 + 20);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), *(char **)(a1 + 4), (int)(uintptr_t)(&v28) + 1);
    v15 = *((uint32_t **)v7 + 6);
    v16 = (uint32_t *)(v7 + 20);
    if ( v15 != nullptr )
    {
      v27 = v7;
      v17 = (uint32_t *)(v7 + 20);
      do
      {
        while ( (uint8_t)std::op_char(v15 + 4, v30) == 0 )
        {
          v17 = v15;
          v15 = (uint32_t *)v15[2];
          if ( v15 == nullptr )
            goto LABEL_24;
        }
        v15 = (uint32_t *)v15[3];
      }
      while ( v15 != nullptr );
LABEL_24:
      v18 = v17;
      v19 = v25 == v17;
      v7 = v27;
      if ( v19 )
      {
        v16 = v25;
      }
      else
      {
        v21 = v18;
        v20 = std::op_char(v30, v18 + 4);
        v16 = v21;
        if ( v20 != 0 )
          v16 = v25;
      }
    }
    v22 = v16;
    g4_std::string::Destroy(v30);
    if ( v25 != v22 )
    {
      v10 = (uint32_t *)sub_AB9940((int)(uintptr_t)(v7), *(char **)(a1 + 4));
      goto LABEL_14;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_ABD2C0  (binary VA: 0xabd2c0)
// Original: sub_ABD2C0
// ----------------------------------------------------------------------------
int sub_ABD2C0(int a1, uint8_t *a2)
{
  char *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  char *v7;
  unsigned int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  bool v19;
  char v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v24)) > _g4_s3 ? (8u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v25)) > _g4_s4 ? (8u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v26)) > _g4_s5 ? (12u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v27)) > _g4_s6 ? (12u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (22u + sizeof(_g4_t_v28)) > _g4_s7 ? (22u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v29)) > _g4_s8 ? (24u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v30)) > _g4_s9 ? (28u + sizeof(_g4_t_v30)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 22u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);

  v26 = *(char **)a1;
  v2 = *(char **)a1;
  v3 = *(uint32_t *)(a1 + 16);
  ++*(uint32_t *)(v3 + 124);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), v2, (int)(uintptr_t)(&v28));
  v4 = v3 + 84;
  v5 = *(uint32_t *)(v3 + 88);
  v23 = v4;
  v6 = v4;
  if ( v5 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v5 + 16, &v29) == 0 )
      {
        v6 = v5;
        v5 = *(uint32_t *)(v5 + 8);
        if ( v5 == 0 )
          goto LABEL_6;
      }
      v5 = *(uint32_t *)(v5 + 12);
    }
    while ( v5 != 0 );
LABEL_6:
    if ( v6 != v23 && (uint8_t)std::op_char(&v29, v6 + 16) != 0 )
      v6 = v23;
  }
  g4_std::string::Destroy(&v29);
  if ( v23 == v6 )
  {
    xmldata::DataManager::LogError("Can't find array '%s'\n", v26);
    return a1;
  }
  v7 = *(char **)(v6 + 20);
  if ( v7 != nullptr )
  {
    if ( *(uint32_t *)(*(uint32_t *)(a1 + 4) - 12) == 0 )
    {
      v8 = *(uint32_t *)(a1 + 8);
      v9 = *((uint32_t *)v7 + 10);
      if ( v8 < (*((uint32_t *)v7 + 11) - v9) >> 2 )
      {
        v10 = *(uint32_t **)(v9 + 4 * v8);
LABEL_14:
        if ( v10 != nullptr && (uint8_t)sub_ABC8F0((int)(uintptr_t)(v10), *(char **)(a1 + 12)) != 0 )
        {
          v11 = *(uint32_t *)(a1 + 20);
          v24 = *a2;
          v12 = *(uint32_t *)(a1 + 12);
          v13 = G4_VCALL<int>(v10, 48, v12);
          if ( v13 != 0 )
            G4_VCALL<void>(v13, 80, v24, v11);
          else
            xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", v10[2], v12);
        }
        return a1;
      }
    }
    v25 = (uint32_t *)(v7 + 20);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), *(char **)(a1 + 4), (int)(uintptr_t)(&v28) + 1);
    v15 = *((uint32_t **)v7 + 6);
    v16 = (uint32_t *)(v7 + 20);
    if ( v15 != nullptr )
    {
      v27 = v7;
      v17 = (uint32_t *)(v7 + 20);
      do
      {
        while ( (uint8_t)std::op_char(v15 + 4, v30) == 0 )
        {
          v17 = v15;
          v15 = (uint32_t *)v15[2];
          if ( v15 == nullptr )
            goto LABEL_24;
        }
        v15 = (uint32_t *)v15[3];
      }
      while ( v15 != nullptr );
LABEL_24:
      v18 = v17;
      v19 = v25 == v17;
      v7 = v27;
      if ( v19 )
      {
        v16 = v25;
      }
      else
      {
        v21 = v18;
        v20 = std::op_char(v30, v18 + 4);
        v16 = v21;
        if ( v20 != 0 )
          v16 = v25;
      }
    }
    v22 = v16;
    g4_std::string::Destroy(v30);
    if ( v25 != v22 )
    {
      v10 = (uint32_t *)sub_AB9940((int)(uintptr_t)(v7), *(char **)(a1 + 4));
      goto LABEL_14;
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_ABD510  (binary VA: 0xabd510)
// Original: sub_ABD510
// ----------------------------------------------------------------------------
void * sub_ABD510(char **a1)
{
  char *v1;
  char *v2;
  char *v3;
  char *v4;
  char *v5;
  char *v6;
  unsigned int v7;
  int v8;
  uint32_t *v9;
  char *v10;
  char *v11;
  int v12;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  bool v18;
  char v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef char *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v22)) > _g4_s2 ? (4u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v23)) > _g4_s3 ? (8u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v24)) > _g4_s4 ? (8u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v25)) > _g4_s5 ? (12u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v26)) > _g4_s6 ? (12u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (22u + sizeof(_g4_t_v27)) > _g4_s7 ? (22u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v28)) > _g4_s8 ? (24u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v29)) > _g4_s9 ? (28u + sizeof(_g4_t_v29)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 22u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);

  v25 = *a1;
  v1 = a1[4];
  v2 = *a1;
  ++*((uint32_t *)v1 + 31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), v2, (int)(uintptr_t)(&v27));
  v3 = v1 + 84;
  v4 = *((char **)v1 + 22);
  v23 = v3;
  v5 = v3;
  if ( v4 != nullptr )
  {
    do
    {
      while ( (uint8_t)std::op_char(v4 + 16, &v28) == 0 )
      {
        v5 = v4;
        v4 = *((char **)v4 + 2);
        if ( v4 == nullptr )
          goto LABEL_6;
      }
      v4 = *((char **)v4 + 3);
    }
    while ( v4 != nullptr );
LABEL_6:
    if ( v5 != v23 && (uint8_t)std::op_char(&v28, v5 + 16) != 0 )
      v5 = v23;
  }
  g4_std::string::Destroy(&v28);
  if ( v23 == v5 )
  {
    xmldata::DataManager::LogError("Can't find array '%s'\n", v25);
    goto LABEL_27;
  }
  v6 = *((char **)v5 + 5);
  if ( v6 == nullptr )
    goto LABEL_27;
  if ( *((uint32_t *)a1[1] - 3) != 0
    || (v7 = (unsigned int)(uintptr_t)(a1[2]), v8 = *((uint32_t *)v6 + 10), v7 >= (*((uint32_t *)v6 + 11) - v8) >> 2) )
  {
    v24 = (uint32_t *)(v6 + 20);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), a1[1], (int)(uintptr_t)(&v27) + 1);
    v14 = *((uint32_t **)v6 + 6);
    v15 = (uint32_t *)(v6 + 20);
    if ( v14 != nullptr )
    {
      v26 = v6;
      v16 = (uint32_t *)(v6 + 20);
      do
      {
        while ( (uint8_t)std::op_char(v14 + 4, v29) == 0 )
        {
          v16 = v14;
          v14 = (uint32_t *)v14[2];
          if ( v14 == nullptr )
            goto LABEL_23;
        }
        v14 = (uint32_t *)v14[3];
      }
      while ( v14 != nullptr );
LABEL_23:
      v17 = v16;
      v18 = v24 == v16;
      v6 = v26;
      if ( v18 )
      {
        v15 = v24;
      }
      else
      {
        v21 = v17;
        v19 = std::op_char(v29, v17 + 4);
        v15 = v21;
        if ( v19 != 0 )
          v15 = v24;
      }
    }
    v22 = v15;
    g4_std::string::Destroy(v29);
    if ( v24 == v22 )
      goto LABEL_27;
    v9 = (uint32_t *)sub_AB9940((int)(uintptr_t)(v6), a1[1]);
  }
  else
  {
    v9 = *(uint32_t **)(v8 + 4 * v7);
  }
  if ( v9 == nullptr || (uint8_t)sub_ABC8F0((int)(uintptr_t)(v9), a1[3]) == 0 )
  {
LABEL_27:
    xmldata::DataManager::LogError("Can't find '%s::%s|%u::%s'\n", *a1, a1[1], a1[2], a1[3]);
    return &unk_1B15112;
  }
  v10 = a1[3];
  v11 = a1[5];
  v12 = G4_VCALL<int>(v9, 48, v10);
  if ( v12 != 0 )
  {
    v20 = v12;
    G4_VCALL<void>(v12, 76, v12 + 48, v11);
    return *(void **)(v20 + 48);
  }
  else
  {
    xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", v9[2], v10);
    return nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_ABD790  (binary VA: 0xabd790)
// Original: sub_ABD790
// ----------------------------------------------------------------------------
long double sub_ABD790(char **a1)
{
  char *v1;
  char *v2;
  char *v3;
  char *v4;
  char *v5;
  char *v6;
  unsigned int v7;
  int v8;
  uint32_t *v9;
  char *v10;
  char *v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  bool v17;
  char v18;
  long double result; // fst7
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v23)) > _g4_s3 ? (8u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v24)) > _g4_s4 ? (12u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v25)) > _g4_s5 ? (12u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (22u + sizeof(_g4_t_v26)) > _g4_s6 ? (22u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v27)) > _g4_s7 ? (24u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v28)) > _g4_s8 ? (28u + sizeof(_g4_t_v28)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 22u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);

  v24 = *a1;
  v1 = a1[4];
  v2 = *a1;
  ++*((uint32_t *)v1 + 31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), v2, (int)(uintptr_t)(&v26));
  v3 = v1 + 84;
  v4 = *((char **)v1 + 22);
  v22 = v3;
  v5 = v3;
  if ( v4 != nullptr )
  {
    do
    {
      while ( (uint8_t)std::op_char(v4 + 16, &v27) == 0 )
      {
        v5 = v4;
        v4 = *((char **)v4 + 2);
        if ( v4 == nullptr )
          goto LABEL_6;
      }
      v4 = *((char **)v4 + 3);
    }
    while ( v4 != nullptr );
LABEL_6:
    if ( v5 != v22 && (uint8_t)std::op_char(&v27, v5 + 16) != 0 )
      v5 = v22;
  }
  g4_std::string::Destroy(&v27);
  if ( v22 == v5 )
  {
    xmldata::DataManager::LogError("Can't find array '%s'\n", v24);
    goto LABEL_27;
  }
  v6 = *((char **)v5 + 5);
  if ( v6 == nullptr )
    goto LABEL_27;
  if ( *((uint32_t *)a1[1] - 3) != 0
    || (v7 = (unsigned int)(uintptr_t)(a1[2]), v8 = *((uint32_t *)v6 + 10), v7 >= (*((uint32_t *)v6 + 11) - v8) >> 2) )
  {
    v23 = (uint32_t *)(v6 + 20);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), a1[1], (int)(uintptr_t)(&v26) + 1);
    v13 = *((uint32_t **)v6 + 6);
    v14 = (uint32_t *)(v6 + 20);
    if ( v13 != nullptr )
    {
      v25 = v6;
      v15 = (uint32_t *)(v6 + 20);
      do
      {
        while ( (uint8_t)std::op_char(v13 + 4, v28) == 0 )
        {
          v15 = v13;
          v13 = (uint32_t *)v13[2];
          if ( v13 == nullptr )
            goto LABEL_23;
        }
        v13 = (uint32_t *)v13[3];
      }
      while ( v13 != nullptr );
LABEL_23:
      v16 = v15;
      v17 = v23 == v15;
      v6 = v25;
      if ( v17 )
      {
        v14 = v23;
      }
      else
      {
        v20 = v16;
        v18 = std::op_char(v28, v16 + 4);
        v14 = v20;
        if ( v18 != 0 )
          v14 = v23;
      }
    }
    v21 = v14;
    g4_std::string::Destroy(v28);
    if ( v23 == v21 )
      goto LABEL_27;
    v9 = (uint32_t *)sub_AB9940((int)(uintptr_t)(v6), a1[1]);
  }
  else
  {
    v9 = *(uint32_t **)(v8 + 4 * v7);
  }
  if ( v9 == nullptr || (uint8_t)sub_ABC8F0((int)(uintptr_t)(v9), a1[3]) == 0 )
  {
LABEL_27:
    xmldata::DataManager::LogError("Can't find '%s::%s|%u::%s'\n", *a1, a1[1], a1[2], a1[3]);
    return 0.0;
  }
  v10 = a1[3];
  v11 = a1[5];
  v12 = G4_VCALL<int>(v9, 48, v10);
  if ( v12 != 0 )
  {
    G4_VCALL<void>(v12, 72, v11);
  }
  else
  {
    xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", v9[2], v10);
    return 0.0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_ABDA00  (binary VA: 0xabda00)
// Original: sub_ABDA00
// ----------------------------------------------------------------------------
int sub_ABDA00(char **a1)
{
  char *v1;
  char *v2;
  char *v3;
  char *v4;
  char *v5;
  char *v6;
  unsigned int v7;
  int v8;
  uint32_t *v9;
  char *v10;
  char *v11;
  int v12;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  bool v18;
  char v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v23)) > _g4_s3 ? (8u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v24)) > _g4_s4 ? (12u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v25)) > _g4_s5 ? (12u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (22u + sizeof(_g4_t_v26)) > _g4_s6 ? (22u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v27)) > _g4_s7 ? (24u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v28)) > _g4_s8 ? (28u + sizeof(_g4_t_v28)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 22u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);

  v24 = *a1;
  v1 = a1[4];
  v2 = *a1;
  ++*((uint32_t *)v1 + 31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), v2, (int)(uintptr_t)(&v26));
  v3 = v1 + 84;
  v4 = *((char **)v1 + 22);
  v22 = v3;
  v5 = v3;
  if ( v4 != nullptr )
  {
    do
    {
      while ( (uint8_t)std::op_char(v4 + 16, &v27) == 0 )
      {
        v5 = v4;
        v4 = *((char **)v4 + 2);
        if ( v4 == nullptr )
          goto LABEL_6;
      }
      v4 = *((char **)v4 + 3);
    }
    while ( v4 != nullptr );
LABEL_6:
    if ( v5 != v22 && (uint8_t)std::op_char(&v27, v5 + 16) != 0 )
      v5 = v22;
  }
  g4_std::string::Destroy(&v27);
  if ( v22 == v5 )
  {
    xmldata::DataManager::LogError("Can't find array '%s'\n", v24);
    goto LABEL_27;
  }
  v6 = *((char **)v5 + 5);
  if ( v6 == nullptr )
    goto LABEL_27;
  if ( *((uint32_t *)a1[1] - 3) != 0
    || (v7 = (unsigned int)(uintptr_t)(a1[2]), v8 = *((uint32_t *)v6 + 10), v7 >= (*((uint32_t *)v6 + 11) - v8) >> 2) )
  {
    v23 = (uint32_t *)(v6 + 20);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), a1[1], (int)(uintptr_t)(&v26) + 1);
    v14 = *((uint32_t **)v6 + 6);
    v15 = (uint32_t *)(v6 + 20);
    if ( v14 != nullptr )
    {
      v25 = v6;
      v16 = (uint32_t *)(v6 + 20);
      do
      {
        while ( (uint8_t)std::op_char(v14 + 4, v28) == 0 )
        {
          v16 = v14;
          v14 = (uint32_t *)v14[2];
          if ( v14 == nullptr )
            goto LABEL_23;
        }
        v14 = (uint32_t *)v14[3];
      }
      while ( v14 != nullptr );
LABEL_23:
      v17 = v16;
      v18 = v23 == v16;
      v6 = v25;
      if ( v18 )
      {
        v15 = v23;
      }
      else
      {
        v20 = v17;
        v19 = std::op_char(v28, v17 + 4);
        v15 = v20;
        if ( v19 != 0 )
          v15 = v23;
      }
    }
    v21 = v15;
    g4_std::string::Destroy(v28);
    if ( v23 == v21 )
      goto LABEL_27;
    v9 = (uint32_t *)sub_AB9940((int)(uintptr_t)(v6), a1[1]);
  }
  else
  {
    v9 = *(uint32_t **)(v8 + 4 * v7);
  }
  if ( v9 == nullptr || (uint8_t)sub_ABC8F0((int)(uintptr_t)(v9), a1[3]) == 0 )
  {
LABEL_27:
    xmldata::DataManager::LogError("Can't find '%s::%s|%u::%s'\n", *a1, a1[1], a1[2], a1[3]);
    return 0;
  }
  v10 = a1[3];
  v11 = a1[5];
  v12 = G4_VCALL<int>(v9, 48, v10);
  if ( v12 != 0 )
    return G4_VCALL<int>(v12, 68, v11);
  xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", v9[2], v10);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_ABDC70  (binary VA: 0xabdc70)
// Original: sub_ABDC70
// ----------------------------------------------------------------------------
int sub_ABDC70(char **a1)
{
  char *v1;
  char *v2;
  char *v3;
  char *v4;
  char *v5;
  char *v6;
  unsigned int v7;
  int v8;
  uint32_t *v9;
  char *v10;
  char *v11;
  int v12;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  bool v18;
  char v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v23)) > _g4_s3 ? (8u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v24)) > _g4_s4 ? (12u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v25)) > _g4_s5 ? (12u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (22u + sizeof(_g4_t_v26)) > _g4_s6 ? (22u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v27)) > _g4_s7 ? (24u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v28)) > _g4_s8 ? (28u + sizeof(_g4_t_v28)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 22u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);

  v24 = *a1;
  v1 = a1[4];
  v2 = *a1;
  ++*((uint32_t *)v1 + 31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), v2, (int)(uintptr_t)(&v26));
  v3 = v1 + 84;
  v4 = *((char **)v1 + 22);
  v22 = v3;
  v5 = v3;
  if ( v4 != nullptr )
  {
    do
    {
      while ( (uint8_t)std::op_char(v4 + 16, &v27) == 0 )
      {
        v5 = v4;
        v4 = *((char **)v4 + 2);
        if ( v4 == nullptr )
          goto LABEL_6;
      }
      v4 = *((char **)v4 + 3);
    }
    while ( v4 != nullptr );
LABEL_6:
    if ( v5 != v22 && (uint8_t)std::op_char(&v27, v5 + 16) != 0 )
      v5 = v22;
  }
  g4_std::string::Destroy(&v27);
  if ( v22 == v5 )
  {
    xmldata::DataManager::LogError("Can't find array '%s'\n", v24);
    goto LABEL_27;
  }
  v6 = *((char **)v5 + 5);
  if ( v6 == nullptr )
    goto LABEL_27;
  if ( *((uint32_t *)a1[1] - 3) != 0
    || (v7 = (unsigned int)(uintptr_t)(a1[2]), v8 = *((uint32_t *)v6 + 10), v7 >= (*((uint32_t *)v6 + 11) - v8) >> 2) )
  {
    v23 = (uint32_t *)(v6 + 20);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), a1[1], (int)(uintptr_t)(&v26) + 1);
    v14 = *((uint32_t **)v6 + 6);
    v15 = (uint32_t *)(v6 + 20);
    if ( v14 != nullptr )
    {
      v25 = v6;
      v16 = (uint32_t *)(v6 + 20);
      do
      {
        while ( (uint8_t)std::op_char(v14 + 4, v28) == 0 )
        {
          v16 = v14;
          v14 = (uint32_t *)v14[2];
          if ( v14 == nullptr )
            goto LABEL_23;
        }
        v14 = (uint32_t *)v14[3];
      }
      while ( v14 != nullptr );
LABEL_23:
      v17 = v16;
      v18 = v23 == v16;
      v6 = v25;
      if ( v18 )
      {
        v15 = v23;
      }
      else
      {
        v20 = v17;
        v19 = std::op_char(v28, v17 + 4);
        v15 = v20;
        if ( v19 != 0 )
          v15 = v23;
      }
    }
    v21 = v15;
    g4_std::string::Destroy(v28);
    if ( v23 == v21 )
      goto LABEL_27;
    v9 = (uint32_t *)sub_AB9940((int)(uintptr_t)(v6), a1[1]);
  }
  else
  {
    v9 = *(uint32_t **)(v8 + 4 * v7);
  }
  if ( v9 == nullptr || (uint8_t)sub_ABC8F0((int)(uintptr_t)(v9), a1[3]) == 0 )
  {
LABEL_27:
    xmldata::DataManager::LogError("Can't find '%s::%s|%u::%s'\n", *a1, a1[1], a1[2], a1[3]);
    return 0;
  }
  v10 = a1[3];
  v11 = a1[5];
  v12 = G4_VCALL<int>(v9, 48, v10);
  if ( v12 != 0 )
    return G4_VCALL<int>(v12, 64, v11);
  xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", v9[2], v10);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_ABE2A0  (binary VA: 0xabe2a0)
// Original: sub_ABE2A0
// ----------------------------------------------------------------------------
int sub_ABE2A0(uint32_t *a1)
{
  uint32_t *v1;
  char *s;
  size_t v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;
  typedef const char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int (*_g4_t_v20)(uint32_t *, int, int, int);
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char _g4_t_v25[4];
  typedef int _g4_t_v26;
  typedef char _g4_t_v27[4];
  typedef char _g4_t_v28[4];
  typedef char _g4_t_v29[4];
  typedef int _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v17)) > _g4_s1 ? (28u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v19)) > _g4_s3 ? (28u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v20)) > _g4_s4 ? (36u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v21)) > _g4_s5 ? (48u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v22)) > _g4_s6 ? (52u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v23)) > _g4_s7 ? (60u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (67u + sizeof(_g4_t_v24)) > _g4_s8 ? (67u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v25)) > _g4_s9 ? (72u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v26)) > _g4_s10 ? (76u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v27)) > _g4_s11 ? (80u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v28)) > _g4_s12 ? (84u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v29)) > _g4_s13 ? (88u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v30)) > _g4_s14 ? (92u + sizeof(_g4_t_v30)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 67u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);

  v1 = a1;
  pugi::xml_node::attribute((char *)&v24 + 1);
  s = (char *)pugi::xml_attribute::value((char *)&v24 + 1);
  v3 = strlen(s);
  g4_std_compat::string_assign((int)(uintptr_t)(a1 + 2), s, v3);
  v16 = "basedOn";
  pugi::xml_node::attribute(v25);
  if ( (uint8_t)pugi::xml_attribute::empty(v25) != 0 )
    goto LABEL_2;
  v22 = (char *)pugi::xml_attribute::value(v25);
  v5 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
  ++*(uint32_t *)(v5 + 116);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), v22, (int)(uintptr_t)(&v24));
  v6 = v5 + 60;
  v7 = *(uint32_t *)(v5 + 64);
  v21 = v6;
  if ( v7 != 0 )
  {
    v8 = v6;
    do
    {
      while ( (uint8_t)std::op_char(v7 + 16, v30) == 0 )
      {
        v8 = v7;
        v7 = *(uint32_t *)(v7 + 8);
        if ( v7 == 0 )
          goto LABEL_8;
      }
      v7 = *(uint32_t *)(v7 + 12);
    }
    while ( v7 != 0 );
LABEL_8:
    v9 = v8;
    v10 = v21 == v8;
    v1 = a1;
    if ( v10 )
    {
      v6 = v21;
    }
    else
    {
      v17 = v9;
      v11 = std::op_char(v30, v9 + 16);
      v6 = v17;
      if ( v11 != 0 )
        v6 = v21;
    }
  }
  v18 = v6;
  g4_std::string::Destroy(v30);
  if ( v21 == v18 )
  {
    xmldata::DataManager::LogError("Can't find structure '%s'\n", v22);
    v1[13] = 0;
    goto LABEL_2;
  }
  v12 = *(uint32_t *)(v18 + 20);
  v1[13] = v12;
  if ( v12 == 0 )
  {
LABEL_2:
    xmldata::DataManager::LogError("Array '%s' has an invalid 'basedOn' attribute.\n", v1[2], v16);
    return 0;
  }
  pugi::xml_node::first_child(&v26);
  while ( (uint8_t)pugi::xml_node::empty(&v26) == 0 )
  {
    if ( pugi::xml_node::type(&v26) == 2 )
    {
      pugi::xml_node::attribute(v27);
      pugi::xml_node::attribute(v28);
      v20 = *(int (**)(uint32_t *, int, int, int))(*v1 + 56);
      v19 = (int)(uintptr_t)(pugi::xml_attribute::value(v27));
      v13 = (int)(uintptr_t)(pugi::xml_attribute::value(v28));
      pugi::xml_node::attribute(v29);
      v14 = (int)(uintptr_t)(pugi::xml_attribute::value(v29));
      v15 = v20(v1, v14, v13, v19);
      if ( v15 != 0 )
        G4_VCALL<void>(v15, 52, &v26);
    }
    pugi::xml_node::next_sibling(&v23);
    v26 = v23;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_ABE590  (binary VA: 0xabe590)
// Original: sub_ABE590
// ----------------------------------------------------------------------------
int sub_ABE590(int a1, char *s, char **a3, char **a4)
{
  char *v4;
  int v5;
  int v6;
  int v7;
  int result;
  char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  size_t v14;
  size_t v15;
  int v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  int v23;
  int v24;
  int v25;
  char *v26;
  int v27;
  int v28;
  size_t v29;
  char *v30;
  int v31;
  uint32_t *v32;
  char *v33;
  int v34;
  char *v35;
  char *v36;
  int v37;
  int v38;
  char *v39;
  char *v40;
  int v41;
  uint32_t *v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v43)) > _g4_s0 ? (0u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v44)) > _g4_s1 ? (0u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v45)) > _g4_s2 ? (0u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v46)) > _g4_s3 ? (0u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v47)) > _g4_s4 ? (4u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v48)) > _g4_s5 ? (8u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v49)) > _g4_s6 ? (12u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v50)) > _g4_s7 ? (28u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v51)) > _g4_s8 ? (32u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v52)) > _g4_s9 ? (36u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v53)) > _g4_s10 ? (40u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v54)) > _g4_s11 ? (44u + sizeof(_g4_t_v54)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);

  ++*(uint32_t *)(a1 + 128);
  if ( s != nullptr )
  {
    v4 = strchr(s, 46);
    v48 = v4;
    if ( v4 != nullptr )
    {
      *v4 = 0;
      v5 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
      ++*(uint32_t *)(v5 + 120);
      v43 = v5 + 84;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), s, (int)(uintptr_t)(&v50));
      v6 = *(uint32_t *)(v5 + 88);
      v7 = v43;
      if ( v6 != 0 )
      {
        do
        {
          while ( (uint8_t)std::op_char(v6 + 16, &v51) == 0 )
          {
            v7 = v6;
            v6 = *(uint32_t *)(v6 + 8);
            if ( v6 == 0 )
              goto LABEL_8;
          }
          v6 = *(uint32_t *)(v6 + 12);
        }
        while ( v6 != 0 );
LABEL_8:
        if ( v43 == v7 )
        {
          v7 = v43;
        }
        else if ( (uint8_t)std::op_char(&v51, v7 + 16) != 0 )
        {
          v7 = v43;
        }
      }
      g4_std::string::Destroy(&v51);
      v49 = v48 + 1;
      if ( v43 == v7 )
        goto LABEL_12;
      v10 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
      v11 = sub_AB9480(v10, s);
      v44 = v11 + 20;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), v49, (int)(uintptr_t)(&v50) + 1);
      v12 = *(uint32_t *)(v11 + 24);
      v13 = v44;
      if ( v12 != 0 )
      {
        do
        {
          while ( (uint8_t)std::op_char(v12 + 16, &v52) == 0 )
          {
            v13 = v12;
            v12 = *(uint32_t *)(v12 + 8);
            if ( v12 == 0 )
              goto LABEL_27;
          }
          v12 = *(uint32_t *)(v12 + 12);
        }
        while ( v12 != 0 );
LABEL_27:
        if ( v44 == v13 )
        {
          v13 = v44;
        }
        else if ( (uint8_t)std::op_char(&v52, v13 + 16) != 0 )
        {
          v13 = v44;
        }
      }
      g4_std::string::Destroy(&v52);
      if ( v44 == v13 )
      {
LABEL_12:
        xmldata::DataManager::LogError("Can't find OID Array of '%s.%s'\n", s, v49);
        result = -1;
      }
      else
      {
        if ( a3 != nullptr )
        {
          v14 = strlen(s);
          g4_std_compat::string_assign((int)(uintptr_t)(a3), s, v14);
        }
        if ( a4 != nullptr )
        {
          v15 = strlen(v49);
          g4_std_compat::string_assign((int)(uintptr_t)(a4), v49, v15);
        }
        v16 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
        ++*(uint32_t *)(v16 + 124);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), s, (int)(uintptr_t)(&v50) + 2);
        v17 = v16 + 84;
        v18 = *(uint32_t *)(v16 + 88);
        v45 = v17;
        v19 = v17;
        if ( v18 != 0 )
        {
          do
          {
            while ( (uint8_t)std::op_char(v18 + 16, &v53) == 0 )
            {
              v19 = v18;
              v18 = *(uint32_t *)(v18 + 8);
              if ( v18 == 0 )
                goto LABEL_40;
            }
            v18 = *(uint32_t *)(v18 + 12);
          }
          while ( v18 != 0 );
LABEL_40:
          if ( v19 != v45 && (uint8_t)std::op_char(&v53, v19 + 16) != 0 )
            v19 = v45;
        }
        g4_std::string::Destroy(&v53);
        if ( v45 == v19 )
        {
          xmldata::DataManager::LogError("Can't find array '%s'\n", s);
          v46 = nullptr;
        }
        else
        {
          v46 = *(uint32_t **)(v19 + 20);
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v54), v49, (int)(uintptr_t)(&v50) + 3);
        v47 = v46 + 5;
        v20 = v46 + 5;
        v21 = (uint32_t *)v46[6];
        if ( v21 != nullptr )
        {
          do
          {
            while ( (uint8_t)std::op_char(v21 + 4, v54) == 0 )
            {
              v20 = v21;
              v21 = (uint32_t *)v21[2];
              if ( v21 == nullptr )
                goto LABEL_50;
            }
            v21 = (uint32_t *)v21[3];
          }
          while ( v21 != nullptr );
LABEL_50:
          if ( v47 == v20 )
          {
            v20 = v46 + 5;
          }
          else if ( (uint8_t)std::op_char(v54, v20 + 4) != 0 )
          {
            v20 = v46 + 5;
          }
        }
        g4_std::string::Destroy(v54);
        if ( v47 != v20 )
        {
          v22 = (uint32_t *)v46[10];
          v23 = (v46[11] - (int)(uintptr_t)(v22)) >> 2;
          if ( v23 != 0 )
          {
            v24 = v20[5];
            result = 0;
            if ( *v22 == v24 )
              goto LABEL_13;
            while ( v23 != ++result )
            {
              if ( v24 == v22[result] )
                goto LABEL_13;
            }
          }
        }
        xmldata::DataManager::LogError("Can't find array entry '%s.%s'\n", v46[2], v49);
        result = -1;
      }
LABEL_13:
      *v48 = 46;
      return result;
    }
    if ( a3 != nullptr
      && (v9 = *a3, *((uint32_t *)*a3 - 3) != 0)
      && (v25 = (int)(uintptr_t)(xmldata::DataManager::GetInstance()), (uint8_t)sub_AB92B0(v25, v9) != 0)
      && (v26 = *a3, v27 = (int)(uintptr_t)(xmldata::DataManager::GetInstance()), v28 = sub_AB9480(v27, v26), (uint8_t)sub_AB9A20(v28, s) != 0) )
    {
      if ( a4 != nullptr )
      {
        v29 = strlen(s);
        g4_std_compat::string_assign((int)(uintptr_t)(a4), s, v29);
      }
      v30 = *a3;
      v31 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
      v32 = (uint32_t *)sub_AB9480(v31, v30);
      return sub_AB9550(v32, s);
    }
    else if ( *s == 0 || strcmp(s, "-1") == 0 )
    {
      if ( a3 != nullptr )
        g4_std::string::clear(a3, 0, *((uint32_t *)*a3 - 3), 0);
      result = -1;
      if ( a4 != nullptr )
      {
        g4_std::string::clear(a4, 0, *((uint32_t *)*a4 - 3), 0);
        return -1;
      }
    }
    else
    {
      xmldata::DataManager::LogError("Invalid OID '%s'\n", s);
      return -1;
    }
  }
  else
  {
    result = -1;
    if ( a3 != nullptr )
    {
      v33 = *a3;
      if ( *((uint32_t *)*a3 - 3) != 0 && a4 != nullptr && *((uint32_t *)*a4 - 3) != 0 )
      {
        v34 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
        if ( (uint8_t)sub_AB92B0(v34, v33) != 0
          && (v35 = *a4,
              v36 = *a3,
              v37 = (int)(uintptr_t)(xmldata::DataManager::GetInstance()),
              v38 = sub_AB9480(v37, v36),
              (uint8_t)sub_AB9A20(v38, v35) != 0) )
        {
          v39 = *a4;
          v40 = *a3;
          v41 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
          v42 = (uint32_t *)sub_AB9480(v41, v40);
          return sub_AB9550(v42, v39);
        }
        else
        {
          xmldata::DataManager::LogError("Can't Resolve OID of '%s.%s'\n", *a3, *a4);
          return -1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_ABEBC0  (binary VA: 0xabebc0)
// Original: sub_ABEBC0
// ----------------------------------------------------------------------------
int sub_ABEBC0(uint32_t *a1)
{
  int v1;
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char v10;
  int v11;
  int v12;
  char v13;
  char *v14;
  int v15;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char *_g4_t_v19;
  typedef char **_g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v18)) > _g4_s1 ? (0u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v19)) > _g4_s2 ? (0u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v20)) > _g4_s3 ? (4u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v21)) > _g4_s4 ? (4u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v22)) > _g4_s5 ? (4u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v23)) > _g4_s6 ? (8u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v24)) > _g4_s7 ? (12u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v25)) > _g4_s8 ? (12u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v26)) > _g4_s9 ? (16u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v27)) > _g4_s10 ? (20u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v28)) > _g4_s11 ? (24u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (33u + sizeof(_g4_t_v29)) > _g4_s12 ? (33u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v30)) > _g4_s13 ? (36u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v31)) > _g4_s14 ? (40u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v32)) > _g4_s15 ? (44u + sizeof(_g4_t_v32)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 33u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);

  v1 = a1[11];
  v2 = a1[10];
  if ( v1 == v2 )
    return a1[7];
  v27 = 0;
  v26 = (v1 - v2) >> 3;
  if ( v26 != 0 )
  {
    v23 = 0;
    while ( 1 )
    {
      v20 = (char **)(v2 + 8 * v23);
      v3 = *v20;
      v4 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
      ++*(uint32_t *)(v4 + 104);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), v3, (int)(uintptr_t)(&v29));
      v5 = *(uint32_t *)(v4 + 40);
      v17 = v4 + 36;
      v6 = v4 + 36;
      if ( v5 != 0 )
      {
        do
        {
          while ( (uint8_t)std::op_char(v5 + 16, &v30) == 0 )
          {
            v6 = v5;
            v5 = *(uint32_t *)(v5 + 8);
            if ( v5 == 0 )
              goto LABEL_9;
          }
          v5 = *(uint32_t *)(v5 + 12);
        }
        while ( v5 != 0 );
LABEL_9:
        if ( v17 == v6 )
        {
          v6 = v17;
        }
        else if ( (uint8_t)std::op_char(&v30, v6 + 16) != 0 )
        {
          v6 = v17;
        }
      }
      g4_std::string::Destroy(&v30);
      if ( v17 == v6 )
      {
        if ( ++v23 == v26 )
          return v27;
      }
      else
      {
        v24 = *v20;
        v28 = v20[1];
        v7 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
        ++*(uint32_t *)(v7 + 108);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), v24, (int)(uintptr_t)(&v29) + 1);
        v8 = v7 + 36;
        v9 = *(uint32_t *)(v7 + 40);
        v21 = v8;
        v18 = v8;
        if ( v9 != 0 )
        {
          do
          {
            while ( (uint8_t)std::op_char(v9 + 16, &v31) == 0 )
            {
              v18 = v9;
              v9 = *(uint32_t *)(v9 + 8);
              if ( v9 == 0 )
                goto LABEL_20;
            }
            v9 = *(uint32_t *)(v9 + 12);
          }
          while ( v9 != 0 );
LABEL_20:
          if ( v18 != v21 )
          {
            v10 = std::op_char(&v31, v18 + 16);
            v11 = v21;
            if ( v10 == 0 )
              v11 = v18;
            v18 = v11;
          }
        }
        g4_std::string::Destroy(&v31);
        if ( v21 == v18 )
        {
          xmldata::DataManager::LogError("Can't find constant '%s'\n", v24);
          v25 = nullptr;
        }
        else
        {
          v25 = *(char **)(v18 + 20);
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v32), v28, (int)(uintptr_t)(&v29) + 2);
        v22 = v25 + 20;
        v19 = v25 + 20;
        v12 = *((uint32_t *)v25 + 6);
        if ( v12 != 0 )
        {
          do
          {
            while ( (uint8_t)std::op_char(v12 + 16, v32) == 0 )
            {
              v19 = (char *)v12;
              v12 = *(uint32_t *)(v12 + 8);
              if ( v12 == 0 )
                goto LABEL_31;
            }
            v12 = *(uint32_t *)(v12 + 12);
          }
          while ( v12 != 0 );
LABEL_31:
          if ( v19 != v22 )
          {
            v13 = std::op_char(v32, v19 + 16);
            v14 = v25 + 20;
            if ( v13 == 0 )
              v14 = v19;
            v19 = v14;
          }
        }
        g4_std::string::Destroy(v32);
        if ( v22 == v19 )
        {
          xmldata::DataManager::LogError("Can't find constant value '%s.%s'\n", *((uint32_t *)v25 + 2), v28);
          v15 = 0;
        }
        else
        {
          v15 = sub_ABEBC0(v19 + 20);
        }
        v27 += v15;
        if ( ++v23 == v26 )
          return v27;
      }
      v2 = a1[10];
    }
  }
  return v27;
}

// ----------------------------------------------------------------------------
// Function: sub_ABEEC0  (binary VA: 0xabeec0)
// Original: sub_ABEEC0
// ----------------------------------------------------------------------------
int sub_ABEEC0(int a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v6)) > _g4_s1 ? (27u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 27u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6) + 1, a2, (int)(uintptr_t)(v6));
  v5 = a1 + 20;
  v2 = a1 + 20;
  v3 = *(uint32_t *)(a1 + 24);
  if ( v3 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v3 + 16, (char *)v6 + 1) == 0 )
      {
        v2 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_6;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_6:
    if ( v5 == v2 )
    {
      v2 = a1 + 20;
    }
    else if ( (uint8_t)std::op_char((char *)v6 + 1, v2 + 16) != 0 )
    {
      v2 = a1 + 20;
    }
  }
  g4_std::string::Destroy((char *)v6 + 1);
  if ( v5 != v2 )
    return sub_ABEBC0((uint32_t *)(v2 + 20));
  xmldata::DataManager::LogError("Can't find constant value '%s.%s'\n", *(uint32_t *)(a1 + 8), a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: xmldata::base_constant::GenerateHeader  (binary VA: 0xabf070)
// Original: xmldata::base_constant::GenerateHeader
// ----------------------------------------------------------------------------
int xmldata::base_constant::GenerateHeader(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef char _g4_t_s[1052];
  enum : size_t {
    _g4_s0 = 1136u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_s)) > _g4_s2 ? (16u + sizeof(_g4_t_s)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);

  G4_VCALL<void>(a2, 44, "\n\n", 2);
  sprintf(s, "// Constant : %s\n", a1[2]);
  G4_VCALL<void>(a2, 44, s, strlen(s));
  sprintf(s, "struct %s\n\t: public base_constant\n{\n", a1[2]);
  G4_VCALL<void>(a2, 44, s, strlen(s));
  v2 = a1[10];
  v7 = (a1[11] - v2) >> 2;
  if ( v7 != 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      v3 = *(uint32_t *)(v2 + 4 * v6);
      v4 = sub_ABEBC0(v3);
      sprintf(s, "\tstatic const int   %s = %d;\n", *(uint32_t *)(v3 + 24), v4);
      G4_VCALL<void>(a2, 44, s, strlen(s));
      sprintf(s, "\tstatic const float %s_f;\n", *(uint32_t *)(v3 + 24));
      G4_VCALL<void>(a2, 44, s, strlen(s));
      if ( ++v6 == v7 )
        break;
      v2 = a1[10];
    }
  }
  return G4_VCALL<int>(a2, 44, "};\n", 3);
}

// ----------------------------------------------------------------------------
// Function: xmldata::base_constant::GenerateCpp  (binary VA: 0xabf2c0)
// Original: xmldata::base_constant::GenerateCpp
// ----------------------------------------------------------------------------
int xmldata::base_constant::GenerateCpp(uint32_t *a1, int a2)
{
  int result;
  int v3;
  char *v4;
  int v5;
  unsigned int v6;
  bool v7;
  float v8; // xmm0_4
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_s[1052];
  enum : size_t {
    _g4_s0 = 1136u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_s)) > _g4_s2 ? (16u + sizeof(_g4_t_s)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);

  G4_VCALL<void>(a2, 44, "\n\n", 2);
  sprintf(s, "// Constant : %s\n", a1[2]);
  G4_VCALL<void>(a2, 44, s, strlen(s));
  result = a1[10];
  v10 = (a1[11] - result) >> 2;
  if ( v10 != 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      v3 = *(uint32_t *)(result + 4 * v9);
      strcpy(s, "#if !defined(_MSC_VER)\n");
      G4_VCALL<void>(a2, 44, s, strlen(s));
      sprintf(s, "const int   %s::%s;\n", a1[2], *(uint32_t *)(v3 + 24));
      G4_VCALL<void>(a2, 44, s, strlen(s));
      strcpy(s, "#endif //_MSC_VER\n");
      v4 = s;
      do
      {
        v5 = *(uint32_t *)v4;
        v4 += 4;
        v6 = ~v5 & (v5 - 16843009) & 0x80808080;
      }
      while ( v6 == 0 );
      if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
      {
        v6 >>= 16;
        v4 += 2;
      }
      v7 = __CFADD__((uint8_t)v6, (uint8_t)v6);
      LOBYTE(v6) = 2 * v6;
      (*(void (**)(unsigned int, int, char *, int))(*(uint32_t *)a2 + 44))(v6, a2, s, &v4[-v7 - 3] - s);
      v8 = *(uint32_t *)(v3 + 44) == *(uint32_t *)(v3 + 40) ? *(float *)(v3 + 32) : (float)(int)sub_ABEBC0(v3);
      sprintf(s, "const float %s::%s_f = %ff;\n", a1[2], *(uint32_t *)(v3 + 24), v8);
      result = G4_VCALL<int>(a2, 44, s, strlen(s));
      if ( ++v9 == v10 )
        break;
      result = a1[10];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_ABF600  (binary VA: 0xabf600)
// Original: sub_ABF600
// ----------------------------------------------------------------------------
int sub_ABF600(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6;

  v2 = *(uint32_t *)(a1 + 44);
  v3 = *(uint32_t *)(a1 + 40);
  if ( v2 == v3 )
  {
    sprintf(((char *)(&byte_20DD480)), "%f", *(float *)(a1 + 32));
    return g4_std_compat::string_assign(a2, ((char *)(&byte_20DD480)), strlen(((char *)(&byte_20DD480))));
  }
  else
  {
    v4 = 0;
    result = (v2 - v3) >> 3;
    v6 = result;
    if ( result != 0 )
    {
      while ( 1 )
      {
        ++v4;
        g4_std::string::append_str(a2, v3);
        g4_std::string::append(a2, ".", 1u);
        result = (int)(uintptr_t)(g4_std::string::append_str(a2, v3 + 4));
        if ( v4 == v6 )
          break;
        v3 = *(uint32_t *)(a1 + 40) + 8 * v4;
        if ( v4 != 0 )
          g4_std::string::append(a2, "|", 1u);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_ABF730  (binary VA: 0xabf730)
// Original: sub_ABF730
// ----------------------------------------------------------------------------
long double sub_ABF730(int a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v7)) > _g4_s1 ? (27u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7) + 1, a2, (int)(uintptr_t)(v7));
  v6 = a1 + 20;
  v2 = a1 + 20;
  v3 = *(uint32_t *)(a1 + 24);
  if ( v3 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v3 + 16, (char *)v7 + 1) == 0 )
      {
        v2 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_6;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_6:
    if ( v6 == v2 )
    {
      v2 = a1 + 20;
    }
    else if ( (uint8_t)std::op_char((char *)v7 + 1, v2 + 16) != 0 )
    {
      v2 = a1 + 20;
    }
  }
  g4_std::string::Destroy((char *)v7 + 1);
  if ( v6 == v2 )
  {
    xmldata::DataManager::LogError("Can't find constant value '%s.%s'\n", *(uint32_t *)(a1 + 8), a2);
    return 0.0;
  }
  else if ( *(uint32_t *)(v2 + 64) == *(uint32_t *)(v2 + 60) )
  {
    return *(float *)(v2 + 52);
  }
  else
  {
    return (float)sub_ABEBC0((uint32_t *)(v2 + 20));
  }
}

// ----------------------------------------------------------------------------
// Function: sub_ABFAE0  (binary VA: 0xabfae0)
// Original: sub_ABFAE0
// ----------------------------------------------------------------------------
char * sub_ABFAE0(uint32_t *a1, char *s)
{
  char *v2;
  int v3;
  char *v4;
  int v5;
  char *v6;
  char *result;
  int v8;
  char *v9;
  int v10;
  char *v11;
  int v12;
  char *v13;
  int v14;
  char *v15;
  size_t v16;
  size_t v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char *v22;
  int v23;
  int v24;
  char *v25;
  int v26;
  int v27;
  char *v28;
  char *v29;
  int v30;
  int v31;
  size_t v32;
  int v33;
  int v34;
  int v35;
  int v36;
  char *v37;
  int v38;
  typedef int _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef char *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef char *_g4_t_v44;
  typedef char *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef char *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef char *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v39)) > _g4_s0 ? (0u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v40)) > _g4_s1 ? (0u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v41)) > _g4_s2 ? (0u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v42)) > _g4_s3 ? (0u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v43)) > _g4_s4 ? (4u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v44)) > _g4_s5 ? (4u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v45)) > _g4_s6 ? (4u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v46)) > _g4_s7 ? (4u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v47)) > _g4_s8 ? (4u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v48)) > _g4_s9 ? (4u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v49)) > _g4_s10 ? (8u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v50)) > _g4_s11 ? (8u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v51)) > _g4_s12 ? (8u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v52)) > _g4_s13 ? (8u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v53)) > _g4_s14 ? (12u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v54)) > _g4_s15 ? (12u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v55)) > _g4_s16 ? (24u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v56)) > _g4_s17 ? (28u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v57)) > _g4_s18 ? (32u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v58)) > _g4_s19 ? (36u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v59)) > _g4_s20 ? (40u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v60)) > _g4_s21 ? (44u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v61)) > _g4_s22 ? (48u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v62)) > _g4_s23 ? (52u + sizeof(_g4_t_v62)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v63)) > _g4_s24 ? (56u + sizeof(_g4_t_v63)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v64)) > _g4_s25 ? (60u + sizeof(_g4_t_v64)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 4u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 4u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 8u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 52u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);

  v2 = strchr(s, 46);
  v49 = v2;
  if ( v2 != nullptr )
  {
    *v2 = 0;
    v3 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
    ++*(uint32_t *)(v3 + 104);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), s, (int)(uintptr_t)(&v55));
    v4 = (char *)(v3 + 36);
    v5 = *(uint32_t *)(v3 + 40);
    v43 = v4;
    v6 = v4;
    if ( v5 != 0 )
    {
      do
      {
        while ( (uint8_t)std::op_char(v5 + 16, &v57) == 0 )
        {
          v6 = (char *)v5;
          v5 = *(uint32_t *)(v5 + 8);
          if ( v5 == 0 )
            goto LABEL_7;
        }
        v5 = *(uint32_t *)(v5 + 12);
      }
      while ( v5 != 0 );
LABEL_7:
      if ( v43 == v6 )
      {
        v6 = v43;
      }
      else if ( (uint8_t)std::op_char(&v57, v6 + 16) != 0 )
      {
        v6 = v43;
      }
    }
    g4_std::string::Destroy(&v57);
    v53 = v49 + 1;
    if ( v43 == v6 )
      goto LABEL_11;
    v8 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
    ++*(uint32_t *)(v8 + 108);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), s, (int)(uintptr_t)(&v55) + 1);
    v9 = (char *)(v8 + 36);
    v10 = *(uint32_t *)(v8 + 40);
    v44 = v9;
    v11 = v9;
    if ( v10 != 0 )
    {
      do
      {
        while ( (uint8_t)std::op_char(v10 + 16, &v58) == 0 )
        {
          v11 = (char *)v10;
          v10 = *(uint32_t *)(v10 + 8);
          if ( v10 == 0 )
            goto LABEL_42;
        }
        v10 = *(uint32_t *)(v10 + 12);
      }
      while ( v10 != 0 );
LABEL_42:
      if ( v44 == v11 )
      {
        v11 = v44;
      }
      else if ( (uint8_t)std::op_char(&v58, v11 + 16) != 0 )
      {
        v11 = v44;
      }
    }
    g4_std::string::Destroy(&v58);
    if ( v44 == v11 )
    {
      v12 = 0;
      xmldata::DataManager::LogError("Can't find constant '%s'\n", s);
    }
    else
    {
      v12 = *((uint32_t *)v11 + 5);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), v53, (int)(uintptr_t)(&v55) + 2);
    v13 = (char *)(v12 + 20);
    v14 = *(uint32_t *)(v12 + 24);
    v45 = v13;
    v15 = v13;
    if ( v14 == 0 )
      goto LABEL_17;
    do
    {
      while ( (uint8_t)std::op_char(v14 + 16, &v59) == 0 )
      {
        v15 = (char *)v14;
        v14 = *(uint32_t *)(v14 + 8);
        if ( v14 == 0 )
          goto LABEL_49;
      }
      v14 = *(uint32_t *)(v14 + 12);
    }
    while ( v14 != 0 );
LABEL_49:
    if ( v15 == v45 )
    {
LABEL_17:
      g4_std::string::Destroy(&v59);
      if ( v45 != v15 )
      {
LABEL_18:
        v16 = strlen(s);
        g4_std_compat::string_assign((int)(uintptr_t)(a1 + 15), s, v16);
        v17 = strlen(v53);
        g4_std_compat::string_assign((int)(uintptr_t)(a1 + 16), v53, v17);
        v54 = (char *)a1[16];
        v46 = (char *)a1[15];
        v18 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
        ++*(uint32_t *)(v18 + 108);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), v46, (int)(uintptr_t)(&v55) + 3);
        v19 = v18 + 36;
        v20 = *(uint32_t *)(v18 + 40);
        v39 = v19;
        v21 = v19;
        if ( v20 != 0 )
        {
          do
          {
            while ( (uint8_t)std::op_char(v20 + 16, &v60) == 0 )
            {
              v21 = v20;
              v20 = *(uint32_t *)(v20 + 8);
              if ( v20 == 0 )
                goto LABEL_23;
            }
            v20 = *(uint32_t *)(v20 + 12);
          }
          while ( v20 != 0 );
LABEL_23:
          if ( v39 == v21 )
          {
            v21 = v39;
          }
          else if ( (uint8_t)std::op_char(&v60, v21 + 16) != 0 )
          {
            v21 = v39;
          }
        }
        g4_std::string::Destroy(&v60);
        if ( v39 == v21 )
        {
          xmldata::DataManager::LogError("Can't find constant '%s'\n", v46);
          v47 = nullptr;
        }
        else
        {
          v47 = *(char **)(v21 + 20);
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), v54, (int)(uintptr_t)(&v56));
        v40 = v47 + 20;
        v22 = v47 + 20;
        v23 = *((uint32_t *)v47 + 6);
        if ( v23 != 0 )
        {
          do
          {
            while ( (uint8_t)std::op_char(v23 + 16, &v61) == 0 )
            {
              v22 = (char *)v23;
              v23 = *(uint32_t *)(v23 + 8);
              if ( v23 == 0 )
                goto LABEL_33;
            }
            v23 = *(uint32_t *)(v23 + 12);
          }
          while ( v23 != 0 );
LABEL_33:
          if ( v40 == v22 )
          {
            v22 = v47 + 20;
          }
          else if ( (uint8_t)std::op_char(&v61, v22 + 16) != 0 )
          {
            v22 = v47 + 20;
          }
        }
        g4_std::string::Destroy(&v61);
        if ( v40 == v22 )
        {
          xmldata::DataManager::LogError("Can't find constant value '%s.%s'\n", *((uint32_t *)v47 + 2), v54);
          v24 = 0;
        }
        else
        {
          v24 = sub_ABEBC0((uint32_t *)v22 + 5);
        }
        a1[14] = v24;
        goto LABEL_12;
      }
    }
    else
    {
      if ( (uint8_t)std::op_char(&v59, v15 + 16) != 0 )
        v15 = v45;
      g4_std::string::Destroy(&v59);
      if ( v45 != v15 )
        goto LABEL_18;
    }
LABEL_11:
    xmldata::DataManager::LogError("Can't find constant '%s.%s'\n", s, v53);
LABEL_12:
    *v49 = 46;
    return v49;
  }
  v25 = (char *)a1[15];
  if ( *((uint32_t *)v25 - 3) == 0 )
    goto LABEL_56;
  v26 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
  ++*(uint32_t *)(v26 + 104);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), v25, (int)(uintptr_t)(&v56) + 1);
  v27 = *(uint32_t *)(v26 + 40);
  v50 = (char *)(v26 + 36);
  v28 = (char *)(v26 + 36);
  if ( v27 != 0 )
  {
    do
    {
      if ( (uint8_t)std::op_char(v27 + 16, &v62) != 0 )
      {
        v27 = *(uint32_t *)(v27 + 12);
      }
      else
      {
        v28 = (char *)v27;
        v27 = *(uint32_t *)(v27 + 8);
      }
    }
    while ( v27 != 0 );
    if ( v50 == v28 )
    {
      v28 = v50;
    }
    else if ( (uint8_t)std::op_char(&v62, v28 + 16) != 0 )
    {
      v28 = v50;
    }
  }
  g4_std::string::Destroy(&v62);
  if ( v50 != v28
    && (v29 = (char *)a1[15], v30 = (int)(uintptr_t)(xmldata::DataManager::GetInstance()), v31 = sub_AB9870(v30, v29), (uint8_t)sub_AB9720(v31, s) != 0) )
  {
    v32 = strlen(s);
    g4_std_compat::string_assign((int)(uintptr_t)(a1 + 16), s, v32);
    v48 = (char *)a1[16];
    v51 = (char *)a1[15];
    v33 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
    ++*(uint32_t *)(v33 + 108);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), v51, (int)(uintptr_t)(&v56) + 2);
    v34 = v33 + 36;
    v35 = *(uint32_t *)(v33 + 40);
    v41 = v34;
    v36 = v34;
    if ( v35 != 0 )
    {
      do
      {
        if ( (uint8_t)std::op_char(v35 + 16, &v63) != 0 )
        {
          v35 = *(uint32_t *)(v35 + 12);
        }
        else
        {
          v36 = v35;
          v35 = *(uint32_t *)(v35 + 8);
        }
      }
      while ( v35 != 0 );
      if ( v36 != v41 && (uint8_t)std::op_char(&v63, v36 + 16) != 0 )
        v36 = v41;
    }
    g4_std::string::Destroy(&v63);
    if ( v41 == v36 )
    {
      xmldata::DataManager::LogError("Can't find constant '%s'\n", v51);
      v52 = nullptr;
    }
    else
    {
      v52 = *(char **)(v36 + 20);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v64), v48, (int)(uintptr_t)(&v56) + 3);
    v42 = v52 + 20;
    v37 = v52 + 20;
    v38 = *((uint32_t *)v52 + 6);
    if ( v38 != 0 )
    {
      do
      {
        if ( (uint8_t)std::op_char(v38 + 16, v64) != 0 )
        {
          v38 = *(uint32_t *)(v38 + 12);
        }
        else
        {
          v37 = (char *)v38;
          v38 = *(uint32_t *)(v38 + 8);
        }
      }
      while ( v38 != 0 );
      if ( v42 == v37 )
      {
        v37 = v52 + 20;
      }
      else if ( (uint8_t)std::op_char(v64, v37 + 16) != 0 )
      {
        v37 = v52 + 20;
      }
    }
    g4_std::string::Destroy(v64);
    if ( v42 == v37 )
    {
      xmldata::DataManager::LogError("Can't find constant value '%s.%s'\n", *((uint32_t *)v52 + 2), v48);
      result = nullptr;
    }
    else
    {
      result = (char *)sub_ABEBC0((uint32_t *)v37 + 5);
    }
    a1[14] = (uint32_t)(uintptr_t)(result);
  }
  else
  {
LABEL_56:
    if ( s != nullptr && *s != 0 )
    {
      return (char *)xmldata::DataManager::LogError("Invalid constant '%s'\n", s);
    }
    else
    {
      g4_std::string::clear(a1 + 15, 0, *(uint32_t *)(a1[15] - 12), 0);
      result = (char *)g4_std::string::clear(a1 + 16, 0, *(uint32_t *)(a1[16] - 12), 0);
      a1[14] = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AC18F0  (binary VA: 0xac18f0)
// Original: sub_AC18F0
// ----------------------------------------------------------------------------
int sub_AC18F0(int a1, float a2)
{
  int v2;
  int v3;
  int v4;
  const void *v5;
  const void *v6;
  bool v7; // si
  int v8;
  char v9;
  int *v11;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  v14[0] = (int)(uintptr_t)(&unk_213B814);
  v2 = *(uint32_t *)(a1 + 40);
  v3 = *(uint32_t *)(a1 + 44);
  *(float *)(a1 + 32) = a2;
  if ( v3 == v2 )
  {
    sprintf(((char *)(&byte_20DD480)), "%f", a2);
    g4_std_compat::string_assign((int)(uintptr_t)(v14), ((char *)(&byte_20DD480)), strlen(((char *)(&byte_20DD480))));
  }
  else
  {
    v13 = (v3 - v2) >> 3;
    if ( v13 != 0 )
    {
      v4 = 0;
      while ( 1 )
      {
        g4_std::string::append_str(v14, v2);
        ++v4;
        g4_std::string::append((int)(uintptr_t)(v14), ".", 1u);
        g4_std::string::append_str(v14, v2 + 4);
        if ( v13 == v4 )
          break;
        v2 = *(uint32_t *)(a1 + 40) + 8 * v4;
        if ( v4 != 0 )
          g4_std::string::append((int)(uintptr_t)(v14), "|", 1u);
      }
    }
  }
  g4_std::string::assign_str(a1 + 20, v14);
  v5 = *(const void **)(a1 + 16);
  v6 = *(const void **)(a1 + 20);
  v7 = true;
  if ( *((uint32_t *)v5 - 3) == *((uint32_t *)v6 - 3) )
    v7 = memcmp(v5, v6, *((uint32_t *)v5 - 3)) != 0;
  *(uint8_t *)(a1 + 12) = v7;
  v8 = *(uint32_t *)(a1 + 8);
  if ( v8 != 0 )
  {
    v9 = *(uint8_t *)(v8 + 104);
    *(uint8_t *)(v8 + 104) = 1;
    if ( v9 == 0 )
    {
      xmldata::DataManager::GetInstance();
      if ( byte_20DD688 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DD688) != 0 )
      {
        glf::debugger::Tweakable::Construct((glf::debugger::Tweakable::Self *)dword_20DD6A0);
        byte_20DD6F5 = 0;
        dword_20DD6A0[0] = (int)((uint32_t)(uintptr_t)&off_20693E8);
        dword_20DD6FC = 0;
        dword_20DD700 = 0;
        dword_20DD6F8 = (int)(uintptr_t)(&off_2069408);
        dword_20DD704 = 0;
        g4_std_compat::string_assign((int)(uintptr_t)(&unk_20DD6E0), "XMLData", 7u);
        dword_20DD6A0[0] = (int)((uint32_t)(uintptr_t)&off_206A428);
        byte_20DD70C = 0;
        dword_20DD708 = (int)((uint32_t)(uintptr_t)&off_206A448);
        dword_20DD710 = 0;
        dword_20DD714 = 0;
        dword_20DD718 = 0;
        dword_20DD71C = 0;
        dword_20DD720 = 0;
        dword_20DD724 = 0;
        dword_20DD728 = 0;
        dword_20DD72C = 0;
        dword_20DD730 = 0;
        dword_20DD734 = 0;
        dword_20DD738 = 0;
        dword_20DD73C = 0;
        dword_20DD744 = 0;
        dword_20DD748 = 0;
        dword_20DD74C = 0;
        dword_20DD750 = 0;
        dword_20DD754 = 0;
        dword_20DD758 = 0;
        dword_20DD75C = 0;
        byte_20DD760 = 1;
        dword_20DD764 = 50;
        dword_20DD768 = 0;
        dword_20DD76C = 0;
        dword_20DD770 = 0;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20DD688);
        __cxa_atexit((void (*)(void *))sub_AFC040, dword_20DD6A0, &unk_20D1280);
      }
      v11 = nullptr;
      if ( byte_20DD70C == 0 )
        v11 = (int *)(dword_20DD6A0);
      v12 = v11[47];
      if ( v12 != 0 )
        G4_VCALL<void>(v12, 8);
    }
  }
  return ((g4_std::string::Destroy(v14)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_AC3310  (binary VA: 0xac3310)
// Original: sub_AC3310
// ----------------------------------------------------------------------------
int sub_AC3310(int a1, int a2)
{
  int result;
  uint32_t *v3;
  uint32_t *v4;
  char IsValid;
  vox::DataHandle::Self *v6;
  typedef uint8_t _g4_t_v7;
  typedef uint8_t _g4_t_v8[32];
  typedef uint8_t _g4_t_v9[48];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v9)) > _g4_s2 ? (60u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 60u);

  result = 0;
  if ( *(uint8_t *)(a1 + 72) != 0 && a2 != -1 )
  {
    v3 = *(uint32_t **)(a1 + 24);
    if ( v3 == nullptr )
      goto LABEL_11;
    v4 = (uint32_t *)(a1 + 20);
    do
    {
      while ( a2 <= v3[4] )
      {
        v4 = v3;
        v3 = (uint32_t *)v3[2];
        if ( v3 == nullptr )
          goto LABEL_9;
      }
      v3 = (uint32_t *)v3[3];
    }
    while ( v3 != nullptr );
LABEL_9:
    if ( (uint32_t *)(a1 + 20) == v4 || (result = 1, a2 < v4[4]) )
    {
LABEL_11:
      vox::data_source::CreationSettings::Construct((vox::data_source::CreationSettings::Self *)v9);
      vox::VoxSoundPackXML::GetDataSourceInfo(
        (vox::VoxSoundPackXML::Self *)(a1 + 12),
        a2,
        (vox::data_source::CreationSettings::Self *)v9);
      vox::VoxEngine::LoadDataSource((vox::VoxEngine::Self *)v8, *(const vox::data_source::CreationSettings::Self **)(a1 + 8));
      IsValid = vox::VoxEngine::IsValid(*(vox::VoxEngine::Self **)(a1 + 8), (vox::DataHandle::Self *)v8);
      if ( IsValid != 0 )
      {
        v6 = (vox::DataHandle::Self *)g4_std::map_int_vox_DataHandle_694eff::opIndex(
                                  (std::map<int,vox::DataHandle::Self> *)(a1 + 16),
                                  &a2);
        vox::DataHandle::opAssign(v6, (const vox::DataHandle::Self *)v8);
        IsValid = 1;
      }
      v7 = IsValid;
      vox::DataHandle::Destroy((vox::DataHandle::Self *)v8);
      return v7;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AC3450  (binary VA: 0xac3450)
// Original: sub_AC3450
// ----------------------------------------------------------------------------
vox::EmitterHandle::Self * sub_AC3450(vox::EmitterHandle::Self *a1, int a2, int a3, glf::Self *a4, int *a5)
{
  int v5;
  vox::EmitterHandle::Self *v6;
  bool v8;
  int v9;
  int *v10;
  char v11;
  int *v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19; // xmm0_4
  int v20;
  vox::DataHandle::Self *v21;
  typedef const char *_g4_t_v22;
  typedef int *_g4_t_v23;
  typedef int *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef char _g4_t_v27;
  typedef char _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef vox::VoxSoundPackXML::Self *_g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef void *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint8_t _g4_t_v39[17];
  typedef int _g4_t_v40[4];
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[32];
  typedef char *_g4_t_v43[9];
  typedef uint32_t _g4_t_v44[8];
  typedef char _g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t _g4_t_v47[6];
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef int _g4_t_v50;
  typedef char _g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t _g4_t_v53[6];
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef int _g4_t_v56;
  typedef char _g4_t_v57;
  typedef int _g4_t_v58;
  typedef vox::EmitterHandle::Self **_g4_t_v59;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v23)) > _g4_s1 ? (28u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v24)) > _g4_s2 ? (28u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v25)) > _g4_s3 ? (32u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v26)) > _g4_s4 ? (36u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (42u + sizeof(_g4_t_v27)) > _g4_s5 ? (42u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (43u + sizeof(_g4_t_v28)) > _g4_s6 ? (43u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v29)) > _g4_s7 ? (44u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v30)) > _g4_s8 ? (48u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v31)) > _g4_s9 ? (48u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v32)) > _g4_s10 ? (52u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v33)) > _g4_s11 ? (52u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v34)) > _g4_s12 ? (56u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v35)) > _g4_s13 ? (56u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v36)) > _g4_s14 ? (60u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v37)) > _g4_s15 ? (60u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v38)) > _g4_s16 ? (60u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (79u + sizeof(_g4_t_v39)) > _g4_s17 ? (79u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v40)) > _g4_s18 ? (96u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v41)) > _g4_s19 ? (112u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v42)) > _g4_s20 ? (116u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (148u + sizeof(_g4_t_v43)) > _g4_s21 ? (148u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (184u + sizeof(_g4_t_v44)) > _g4_s22 ? (184u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (216u + sizeof(_g4_t_v45)) > _g4_s23 ? (216u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (220u + sizeof(_g4_t_v46)) > _g4_s24 ? (220u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (224u + sizeof(_g4_t_v47)) > _g4_s25 ? (224u + sizeof(_g4_t_v47)) : _g4_s25,
    _g4_s27 = (248u + sizeof(_g4_t_v48)) > _g4_s26 ? (248u + sizeof(_g4_t_v48)) : _g4_s26,
    _g4_s28 = (249u + sizeof(_g4_t_v49)) > _g4_s27 ? (249u + sizeof(_g4_t_v49)) : _g4_s27,
    _g4_s29 = (252u + sizeof(_g4_t_v50)) > _g4_s28 ? (252u + sizeof(_g4_t_v50)) : _g4_s28,
    _g4_s30 = (256u + sizeof(_g4_t_v51)) > _g4_s29 ? (256u + sizeof(_g4_t_v51)) : _g4_s29,
    _g4_s31 = (260u + sizeof(_g4_t_v52)) > _g4_s30 ? (260u + sizeof(_g4_t_v52)) : _g4_s30,
    _g4_s32 = (264u + sizeof(_g4_t_v53)) > _g4_s31 ? (264u + sizeof(_g4_t_v53)) : _g4_s31,
    _g4_s33 = (288u + sizeof(_g4_t_v54)) > _g4_s32 ? (288u + sizeof(_g4_t_v54)) : _g4_s32,
    _g4_s34 = (289u + sizeof(_g4_t_v55)) > _g4_s33 ? (289u + sizeof(_g4_t_v55)) : _g4_s33,
    _g4_s35 = (292u + sizeof(_g4_t_v56)) > _g4_s34 ? (292u + sizeof(_g4_t_v56)) : _g4_s34,
    _g4_s36 = (296u + sizeof(_g4_t_v57)) > _g4_s35 ? (296u + sizeof(_g4_t_v57)) : _g4_s35,
    _g4_s37 = (300u + sizeof(_g4_t_v58)) > _g4_s36 ? (300u + sizeof(_g4_t_v58)) : _g4_s36,
    _g4_s38 = (312u + sizeof(_g4_t_v59)) > _g4_s37 ? (312u + sizeof(_g4_t_v59)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 42u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 43u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 79u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 112u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 116u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 148u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 184u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 216u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 220u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 224u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 248u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 249u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 252u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 256u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 260u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 264u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 288u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 289u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 292u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 296u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 300u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 312u);

  v59 = &a1;
  v5 = a2;
  v6 = a1;
  v36 = a3;
  if ( *(uint8_t *)(a2 + 72) == 0 )
    goto LABEL_2;
  if ( a4 == nullptr )
    goto LABEL_2;
  v23 = a5;
  v25 = (char *)a4;
  if ( glf::Strlen(a4, v22) == 0 )
    goto LABEL_2;
  v8 = *(uint8_t *)(v5 + 72) == 0;
  *(uint32_t *)&v39[1] = -1;
  if ( v8 )
    goto LABEL_2;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v43), v25, (int)(uintptr_t)(v39));
  GLFUtils::ToLowerCase(v43, 0, -1);
  v9 = g4_std_compat::string_find(v43, "ev_", 0, 3);
  v10 = v23;
  if ( v9 == -1 )
  {
    v40[0] = (int)(uintptr_t)(&unk_213B814);
    sub_1939B80(v40, *((uint32_t *)v43[0] - 3) + 3);
    g4_std::string::append((int)(uintptr_t)(v40), "ev_", 3u);
    g4_std::string::append_str(v40, v43);
    g4_std::string::assign_str(v43, v40);
    g4_std::string::Destroy(v40);
    v10 = v23;
  }
  v24 = v10;
  vox::VoxSoundPackXML::GetEventSoundUid((vox::VoxSoundPackXML::Self *)(v5 + 12), v43[0], (int *)&v39[1]);
  g4_std::string::Destroy(v43);
  v11 = *(uint8_t *)(v5 + 72);
  v41 = *(uint32_t *)&v39[1];
  v12 = v24;
  if ( v11 == 0 || *(uint32_t *)&v39[1] == -1 )
    goto LABEL_2;
  if ( *(uint32_t *)(v5 + 24) == 0 )
    goto LABEL_28;
  v34 = (uint32_t *)(v5 + 20);
  v13 = *(uint32_t **)(v5 + 24);
  do
  {
    if ( *(int *)&v39[1] <= v13[4] )
    {
      v34 = v13;
      v13 = (uint32_t *)v13[2];
    }
    else
    {
      v13 = (uint32_t *)v13[3];
    }
  }
  while ( v13 != nullptr );
  if ( v34 == (uint32_t *)(v5 + 20) || *(int *)&v39[1] < v34[4] )
  {
LABEL_28:
    vox::data_source::CreationSettings::Construct((vox::data_source::CreationSettings::Self *)v43);
    vox::VoxSoundPackXML::GetDataSourceInfo(
      (vox::VoxSoundPackXML::Self *)(v5 + 12),
      v41,
      (vox::data_source::CreationSettings::Self *)v43);
    vox::VoxEngine::LoadDataSource((vox::VoxEngine::Self *)v42, *(const vox::data_source::CreationSettings::Self **)(v5 + 8));
    if ( (uint8_t)vox::VoxEngine::IsValid(*(vox::VoxEngine::Self **)(v5 + 8), (vox::DataHandle::Self *)v42) == 0 )
    {
      vox::DataHandle::Destroy((vox::DataHandle::Self *)v42);
      goto LABEL_2;
    }
    v21 = (vox::DataHandle::Self *)g4_std::map_int_vox_DataHandle_694eff::opIndex((std::map<int,vox::DataHandle::Self> *)(v5 + 16), &v41);
    vox::DataHandle::opAssign(v21, (const vox::DataHandle::Self *)v42);
    vox::DataHandle::Destroy((vox::DataHandle::Self *)v42);
    v12 = v24;
  }
  switch ( v36 )
  {
    case 1:
      std::memcpy(v44, v12, 26);
      v44[7] = v12[7];
      v45 = *((uint8_t *)v12 + 32);
      v46 = v12[9];
      sub_AB2AC0(v6, v5, *(int *)&v39[1], (int)(uintptr_t)(v44));
      return v6;
    case 2:
      v18 = v12[3];
      v38 = v12[4];
      v33 = *((uint8_t *)v12 + 24);
      v19 = v12[5];
      v31 = v12[7];
      v20 = v12[9];
      v15 = *(uint32_t *)&v39[1];
      if ( *(uint8_t *)(v5 + 72) != 0 )
      {
        v53[3] = v18;
        v58 = v20;
        v53[4] = v38;
        v54 = v33;
        memset(v53, 0, 12);
        v55 = 1;
        v53[5] = v19;
        v56 = v31;
        v57 = 1;
        v17 = v53;
        goto LABEL_27;
      }
      break;
    case 0:
      v37 = v12[1];
      v14 = *v12;
      v35 = (void *)v12[2];
      v28 = *((uint8_t *)v12 + 24);
      v32 = (vox::VoxSoundPackXML::Self *)v12[3];
      v26 = v12[7];
      v30 = v12[4];
      v27 = *((uint8_t *)v12 + 32);
      v15 = *(uint32_t *)&v39[1];
      v29 = v12[5];
      v16 = v12[9];
      if ( *(uint8_t *)(v5 + 72) != 0 )
      {
        v47[0] = v14;
        v47[1] = v37;
        v52 = v16;
        v49 = 1;
        v17 = v47;
        v47[2] = (uint32_t)(uintptr_t)(v35);
        v48 = v28;
        v47[3] = (uint32_t)(uintptr_t)(v32);
        v50 = v26;
        v47[4] = v30;
        v51 = v27;
        v47[5] = v29;
LABEL_27:
        sub_AB2AC0(v6, v5, v15, (int)(uintptr_t)(v17));
        return v6;
      }
      break;
    default:
      break;
  }
LABEL_2:
  *((uint32_t *)v6 + 1) = -1;
  *((uint32_t *)v6 + 2) = -1;
  *((uint32_t *)v6 + 3) = 0;
  *((uint32_t *)v6 + 4) = 0;
  *((uint32_t *)v6 + 5) = 0;
  *((uint32_t *)v6 + 6) = 0;
  *((uint32_t *)v6 + 7) = 0;
  *(uint32_t *)v6 = ((uint32_t)(uintptr_t)&off_208D8A8);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_AC51E0  (binary VA: 0xac51e0)
// Original: sub_AC51E0
// ----------------------------------------------------------------------------
void sub_AC51E0(glf::Self *a1, vox::EmitterHandle::Self *a2, float a3, float a4, int a5, char *a6)
{
  glf::Self *v6;
  int *v7;
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  vox::VoxEngine::Self *v11;
  int *v12;
  int *v13;
  size_t v14;
  unsigned int v15;
  char *v16;
  char *v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  int v21;
  int v22;
  int *v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef int _g4_t_v26;
  typedef char *_g4_t_s;
  typedef vox::EmitterHandle::Self *_g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef uint32_t _g4_t_v32[10];
  typedef uint8_t _g4_t_v33[32];
  typedef uint8_t _g4_t_v34[32];
  typedef int _g4_t_v35[6];
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef int _g4_t_v38;
  typedef char _g4_t_v39;
  typedef int _g4_t_v40;
  typedef glf::Self **_g4_t_v41;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v25)) > _g4_s1 ? (4u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v26)) > _g4_s2 ? (4u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_s)) > _g4_s3 ? (8u + sizeof(_g4_t_s)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v28)) > _g4_s4 ? (12u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v29)) > _g4_s5 ? (20u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v30)) > _g4_s6 ? (24u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v31)) > _g4_s7 ? (28u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v32)) > _g4_s8 ? (32u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v33)) > _g4_s9 ? (72u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v34)) > _g4_s10 ? (104u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (136u + sizeof(_g4_t_v35)) > _g4_s11 ? (136u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v36)) > _g4_s12 ? (160u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (161u + sizeof(_g4_t_v37)) > _g4_s13 ? (161u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (164u + sizeof(_g4_t_v38)) > _g4_s14 ? (164u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (168u + sizeof(_g4_t_v39)) > _g4_s15 ? (168u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (172u + sizeof(_g4_t_v40)) > _g4_s16 ? (172u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (184u + sizeof(_g4_t_v41)) > _g4_s17 ? (184u + sizeof(_g4_t_v41)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 104u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 136u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 160u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 161u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 164u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 168u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 172u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 184u);

  v41 = &a1;
  v6 = a1;
  v28 = a2;
  v25 = a3;
  v24 = a4;
  s = a6;
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_A9ED00();
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v7 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v7 = (int *)(&dword_20D4AC0);
  v8 = 0.0;
  v9 = 0.0;
  v10 = 0.0;
  if ( *((uint8_t *)v7 + 72) != 0 )
  {
    v11 = (vox::VoxEngine::Self *)v7[2];
    v29 = 0.0;
    v30 = 0.0;
    v31 = 0.0;
    vox::VoxEngine::Get3DListenerPosition(v11, &v29, &v30, &v31);
    v8 = v31;
    v9 = v30;
    v10 = v29;
  }
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_A9ED00();
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v12 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v12 = (int *)(&dword_20D4AC0);
  if ( *((uint8_t *)v12 + 72) != 0 )
  {
    v35[3] = 1028443341;
    *(float *)v35 = v10 + *(float *)&v28;
    v35[4] = 1065353216;
    *(float *)&v35[1] = v9 + v25;
    v35[5] = 1065353216;
    *(float *)&v35[2] = v8 + v24;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    sub_AC3450((vox::EmitterHandle::Self *)v32, (int)(uintptr_t)(v12), 0, v6, v35);
  }
  else
  {
    v32[1] = -1;
    v32[2] = -1;
    memset(&v32[3], 0, 20);
    v32[0] = ((uint32_t)(uintptr_t)&off_208D8A8);
  }
  vox::EmitterHandle::Construct((vox::EmitterHandle::Self *)v33, (const vox::EmitterHandle::Self *)v32);
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_A9ED00();
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v13 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v13 = (int *)(&dword_20D4AC0);
  v26 = v13[19];
  v14 = strlen(s);
  v15 = 0;
  v16 = &s[v14];
  if ( s != &s[v14] )
  {
    v17 = s;
    do
    {
      v18 = *v17++;
      v15 ^= (v15 << 6) + (v15 >> 2) - 1640531527 + v18;
    }
    while ( v17 != v16 );
  }
  v19 = *(uint32_t **)(v26 + 64);
  if ( v19 != nullptr )
  {
    v20 = (uint32_t *)(v26 + 60);
    do
    {
      while ( v19[4] >= v15 )
      {
        v20 = v19;
        v19 = (uint32_t *)v19[2];
        if ( v19 == nullptr )
          goto LABEL_22;
      }
      v19 = (uint32_t *)v19[3];
    }
    while ( v19 != nullptr );
LABEL_22:
    if ( (uint32_t *)(v26 + 60) != v20 && v20[4] <= v15 )
    {
      v21 = v20[5] + 4;
      v22 = opNew(0x28u);
      if ( v22 != -8 )
        vox::EmitterHandle::Construct((vox::EmitterHandle::Self *)(v22 + 8), (const vox::EmitterHandle::Self *)v33);
      sub_1901920(v22, v21);
    }
  }
  vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v33);
  vox::EmitterHandle::Construct((vox::EmitterHandle::Self *)v34, (const vox::EmitterHandle::Self *)v32);
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_A9ED00();
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v23 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v23 = (int *)(&dword_20D4AC0);
  if ( *((uint8_t *)v23 + 72) != 0 )
    vox::VoxEngine::RegisterForEmitterStateChangeNotification(v23[2], v34, sub_A9EEB0, s);
  vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v34);
  vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v32);
}

// ----------------------------------------------------------------------------
// Function: sub_AC7370  (binary VA: 0xac7370)
// Original: sub_AC7370
// ----------------------------------------------------------------------------
int sub_AC7370(uint32_t *a1, char *a2)
{
  char *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;
  int v10;
  char v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  char v23;
  int v24;
  int v25;
  char v26;
  char *v27;
  int v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef char *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef char *_g4_t_v37;
  typedef char *_g4_t_v38;
  typedef char *_g4_t_s;
  typedef char *_g4_t_v40;
  typedef char *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v29)) > _g4_s0 ? (4u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v30)) > _g4_s1 ? (4u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v31)) > _g4_s2 ? (4u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v32)) > _g4_s3 ? (4u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v33)) > _g4_s4 ? (4u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v34)) > _g4_s5 ? (8u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v35)) > _g4_s6 ? (8u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v36)) > _g4_s7 ? (8u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v37)) > _g4_s8 ? (8u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v38)) > _g4_s9 ? (12u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_s)) > _g4_s10 ? (16u + sizeof(_g4_t_s)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v40)) > _g4_s11 ? (20u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v41)) > _g4_s12 ? (20u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v42)) > _g4_s13 ? (20u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v43)) > _g4_s14 ? (24u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (34u + sizeof(_g4_t_v44)) > _g4_s15 ? (34u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v45)) > _g4_s16 ? (36u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v46)) > _g4_s17 ? (40u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v47)) > _g4_s18 ? (44u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v48)) > _g4_s19 ? (48u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v49)) > _g4_s20 ? (52u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v50)) > _g4_s21 ? (56u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v51)) > _g4_s22 ? (60u + sizeof(_g4_t_v51)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 34u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);

  v43 = 0;
  if ( *a2 != 0 )
  {
    s = a2;
    do
    {
      v2 = strchr(s, 124);
      v38 = v2;
      if ( v2 != nullptr )
        *v2 = 0;
      v3 = (char *)a1[15];
      v4 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
      ++*(uint32_t *)(v4 + 104);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), v3, (int)(uintptr_t)(&v44) + 1);
      v5 = *(uint32_t *)(v4 + 40);
      v29 = v4 + 36;
      v6 = v4 + 36;
      if ( v5 != 0 )
      {
        do
        {
          while ( (uint8_t)std::op_char(v5 + 16, &v47) == 0 )
          {
            v6 = v5;
            v5 = *(uint32_t *)(v5 + 8);
            if ( v5 == 0 )
              goto LABEL_10;
          }
          v5 = *(uint32_t *)(v5 + 12);
        }
        while ( v5 != 0 );
LABEL_10:
        if ( v29 == v6 )
        {
          v6 = v29;
        }
        else if ( (uint8_t)std::op_char(&v47, v6 + 16) != 0 )
        {
          v6 = v29;
        }
      }
      g4_std::string::Destroy(&v47);
      if ( v29 == v6 )
        goto LABEL_14;
      v40 = (char *)a1[15];
      v8 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
      ++*(uint32_t *)(v8 + 108);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), v40, (int)(uintptr_t)(&v45));
      v9 = v8 + 36;
      v10 = *(uint32_t *)(v8 + 40);
      v34 = v9;
      v30 = v9;
      if ( v10 != 0 )
      {
        do
        {
          while ( (uint8_t)std::op_char(v10 + 16, &v48) == 0 )
          {
            v30 = v10;
            v10 = *(uint32_t *)(v10 + 8);
            if ( v10 == 0 )
              goto LABEL_23;
          }
          v10 = *(uint32_t *)(v10 + 12);
        }
        while ( v10 != 0 );
LABEL_23:
        if ( v34 == v30 )
        {
          v30 = v34;
        }
        else
        {
          v11 = std::op_char(&v48, v30 + 16);
          v12 = v34;
          if ( v11 == 0 )
            v12 = v30;
          v30 = v12;
        }
      }
      g4_std::string::Destroy(&v48);
      if ( v34 == v30 )
      {
        v13 = 0;
        xmldata::DataManager::LogError("Can't find constant '%s'\n", v40);
      }
      else
      {
        v13 = *(uint32_t *)(v30 + 20);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), s, (int)(uintptr_t)(&v45) + 1);
      v14 = v13 + 20;
      v15 = *(uint32_t *)(v13 + 24);
      v35 = v14;
      v31 = v14;
      if ( v15 != 0 )
      {
        do
        {
          while ( (uint8_t)std::op_char(v15 + 16, &v49) == 0 )
          {
            v31 = v15;
            v15 = *(uint32_t *)(v15 + 8);
            if ( v15 == 0 )
              goto LABEL_34;
          }
          v15 = *(uint32_t *)(v15 + 12);
        }
        while ( v15 != 0 );
LABEL_34:
        if ( v35 == v31 )
        {
          v31 = v35;
        }
        else
        {
          v16 = std::op_char(&v49, v31 + 16);
          v17 = v35;
          if ( v16 == 0 )
            v17 = v31;
          v31 = v17;
        }
      }
      g4_std::string::Destroy(&v49);
      if ( v35 == v31 )
      {
LABEL_14:
        xmldata::DataManager::LogError("Can't find constant '%s.%s'\n", a1[15], s);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), s, (int)(uintptr_t)(&v44));
        v18 = a1[17];
        if ( v18 == a1[18] )
        {
          g4_std::vector_string_86c307::M_insert_aux(a1 + 16, v18, &v46);
        }
        else
        {
          v19 = 0;
          if ( v18 != 0 )
          {
            g4_std::string::construct_copy(a1[17], &v46);
            v19 = a1[17];
          }
          a1[17] = v19 + 4;
        }
        g4_std::string::Destroy(&v46);
        v41 = (char *)a1[15];
        v20 = (int)(uintptr_t)(xmldata::DataManager::GetInstance());
        ++*(uint32_t *)(v20 + 108);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), v41, (int)(uintptr_t)(&v45) + 2);
        v21 = v20 + 36;
        v22 = *(uint32_t *)(v20 + 40);
        v36 = v21;
        v32 = v21;
        if ( v22 != 0 )
        {
          do
          {
            while ( (uint8_t)std::op_char(v22 + 16, &v50) == 0 )
            {
              v32 = v22;
              v22 = *(uint32_t *)(v22 + 8);
              if ( v22 == 0 )
                goto LABEL_48;
            }
            v22 = *(uint32_t *)(v22 + 12);
          }
          while ( v22 != 0 );
LABEL_48:
          if ( v32 != v36 )
          {
            v23 = std::op_char(&v50, v32 + 16);
            v24 = v36;
            if ( v23 == 0 )
              v24 = v32;
            v32 = v24;
          }
        }
        g4_std::string::Destroy(&v50);
        if ( v36 == v32 )
        {
          xmldata::DataManager::LogError("Can't find constant '%s'\n", v41);
          v42 = nullptr;
        }
        else
        {
          v42 = *(char **)(v32 + 20);
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v51), s, (int)(uintptr_t)(&v45) + 3);
        v37 = v42 + 20;
        v25 = *((uint32_t *)v42 + 6);
        v33 = v42 + 20;
        if ( v25 != 0 )
        {
          do
          {
            while ( (uint8_t)std::op_char(v25 + 16, v51) == 0 )
            {
              v33 = (char *)v25;
              v25 = *(uint32_t *)(v25 + 8);
              if ( v25 == 0 )
                goto LABEL_59;
            }
            v25 = *(uint32_t *)(v25 + 12);
          }
          while ( v25 != 0 );
LABEL_59:
          if ( v37 == v33 )
          {
            v33 = v42 + 20;
          }
          else
          {
            v26 = std::op_char(v51, v33 + 16);
            v27 = v42 + 20;
            if ( v26 == 0 )
              v27 = v33;
            v33 = v27;
          }
        }
        g4_std::string::Destroy(v51);
        if ( v37 == v33 )
        {
          xmldata::DataManager::LogError("Can't find constant value '%s.%s'\n", *((uint32_t *)v42 + 2), s);
          v28 = 0;
        }
        else
        {
          v28 = sub_ABEBC0((uint32_t *)v33 + 5);
        }
        v43 |= v28;
      }
      if ( v38 == nullptr )
        break;
      *v38 = 124;
      s = v38 + 1;
    }
    while ( v38[1] != 0 );
  }
  a1[14] = v43;
  return v43;
}

// ----------------------------------------------------------------------------
// Function: sub_AC7A60  (binary VA: 0xac7a60)
// Original: sub_AC7A60
// ----------------------------------------------------------------------------
int sub_AC7A60(uint32_t *a1, int a2, int a3, void *a4)
{
  int v5;
  int v6;
  int i;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v5 = G4_VCALL<int>(a1, 48, a2, v11, v12, v13, a1, v14, v15, v16, v17, v18, v19);
  if ( v5 == 0 )
    return xmldata::DataManager::LogError("Can't find structure field '%s.%s'\n", a1[2], a2);
  a4 = &unk_213B814;
  v20 = G4_VCALL<int>(v5, 60);
  if ( v20 > 0 )
  {
    v21 = v5;
    v6 = a3;
    for ( i = 0; i != v20; ++i )
    {
      G4_VCALL<void>(v21, 76, &a4, i);
      v8 = *(uint32_t *)(v6 + 4);
      if ( v8 == *(uint32_t *)(v6 + 8) )
      {
        g4_std::vector_string_86c307::M_insert_aux(v6, *(uint32_t *)(v6 + 4), &a4);
      }
      else
      {
        v9 = 0;
        if ( v8 != 0 )
        {
          g4_std::string::construct_copy(*(uint32_t *)(v6 + 4), &a4);
          v9 = *(uint32_t *)(v6 + 4);
        }
        *(uint32_t *)(v6 + 4) = v9 + 4;
      }
    }
  }
  return ((g4_std::string::Destroy(&a4)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_AC8EB0  (binary VA: 0xac8eb0)
// Original: sub_AC8EB0
// ----------------------------------------------------------------------------
int sub_AC8EB0(uint32_t *a1, int a2)
{
  char *v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  char v11;
  int v12;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v17)) > _g4_s3 ? (28u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (43u + sizeof(_g4_t_v18)) > _g4_s4 ? (43u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 43u);

  v2 = (char *)a1[10];
  v3 = opNew(0x20u);
  sub_AC8990((uint32_t *)v3, a2, v2);
  v4 = (uint32_t *)opNew(0x44u);
  v4[1] = (uint32_t)(uintptr_t)(a1);
  *v4 = (uint32_t)(uintptr_t)(&off_206A518);
  v4[3] = 0;
  v4[4] = 0;
  v4[2] = (uint32_t)(uintptr_t)(sub_A95790);
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v4[9] = 0;
  v4[10] = 0;
  v4[11] = 0;
  v4[12] = 0;
  v4[13] = 0;
  v4[14] = 0;
  v4[15] = 0;
  v4[16] = 0;
  v4[8] = (uint32_t)(uintptr_t)(sub_AC0B50);
  if ( *(uint32_t *)(v3 + 8) != 0 )
  {
    opDelete(*(void **)(v3 + 8));
    *(uint32_t *)(v3 + 8) = 0;
  }
  v5 = *(uint32_t *)v3;
  *(uint32_t *)(v3 + 8) = (uint32_t)(uintptr_t)(v4);
  (*(void (**)(int))(v5 + 8))(v3);
  sprintf(((char *)(&byte_20DD780)), "[%f,%f]", (float)(int)a1[15], (float)(int)a1[16]);
  v16 = *(uint32_t *)(v3 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18) + 1, *(char **)(v3 + 12), (int)(uintptr_t)(v18));
  v6 = *(uint32_t *)(v16 + 60);
  v7 = *(uint32_t *)(v6 + 12);
  v15 = v6 + 8;
  v14 = v6 + 8;
  if ( v7 != 0 )
  {
    v17 = v3;
    v8 = v6 + 8;
    do
    {
      while ( (uint8_t)std::op_char(v7 + 16, (char *)v18 + 1) == 0 )
      {
        v8 = v7;
        v7 = *(uint32_t *)(v7 + 8);
        if ( v7 == 0 )
          goto LABEL_8;
      }
      v7 = *(uint32_t *)(v7 + 12);
    }
    while ( v7 != 0 );
LABEL_8:
    v14 = v8;
    v9 = v8;
    v10 = v15 == v8;
    v3 = v17;
    if ( !v10 )
    {
      v11 = std::op_char((char *)v18 + 1, v9 + 16);
      v12 = v15;
      if ( v11 == 0 )
        v12 = v14;
      v14 = v12;
    }
  }
  g4_std::string::Destroy((char *)v18 + 1);
  if ( v14 != *(uint32_t *)(v16 + 60) + 8 )
    g4_std_compat::string_assign(v14 + 28, ((char *)(&byte_20DD780)), strlen(((char *)(&byte_20DD780))));
  a1[2] = v3;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_AC9600  (binary VA: 0xac9600)
// Original: sub_AC9600
// ----------------------------------------------------------------------------
int sub_AC9600(int a1, int a2)
{
  char *v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  char v11;
  int v12;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v17)) > _g4_s3 ? (28u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (43u + sizeof(_g4_t_v18)) > _g4_s4 ? (43u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 43u);

  v2 = *(char **)(a1 + 40);
  v3 = opNew(0x20u);
  sub_AC90E0((uint32_t *)v3, a2, v2);
  v4 = (uint32_t *)opNew(0x44u);
  v4[1] = a1;
  *v4 = (uint32_t)(uintptr_t)(&off_206A530);
  v4[3] = 0;
  v4[4] = 0;
  v4[2] = (uint32_t)(uintptr_t)(sub_A957B0);
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v4[9] = 0;
  v4[10] = 0;
  v4[11] = 0;
  v4[12] = 0;
  v4[13] = 0;
  v4[14] = 0;
  v4[15] = 0;
  v4[16] = 0;
  v4[8] = (uint32_t)(uintptr_t)(sub_AC0600);
  if ( *(uint32_t *)(v3 + 8) != 0 )
  {
    opDelete(*(void **)(v3 + 8));
    *(uint32_t *)(v3 + 8) = 0;
  }
  v5 = *(uint32_t *)v3;
  *(uint32_t *)(v3 + 8) = (uint32_t)(uintptr_t)(v4);
  (*(void (**)(int))(v5 + 8))(v3);
  sprintf(((char *)(&byte_20DD800)), "[%f,%f]", *(float *)(a1 + 60), *(float *)(a1 + 64));
  v16 = *(uint32_t *)(v3 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18) + 1, *(char **)(v3 + 12), (int)(uintptr_t)(v18));
  v6 = *(uint32_t *)(v16 + 60);
  v7 = *(uint32_t *)(v6 + 12);
  v15 = v6 + 8;
  v14 = v6 + 8;
  if ( v7 != 0 )
  {
    v17 = v3;
    v8 = v6 + 8;
    do
    {
      while ( (uint8_t)std::op_char(v7 + 16, (char *)v18 + 1) == 0 )
      {
        v8 = v7;
        v7 = *(uint32_t *)(v7 + 8);
        if ( v7 == 0 )
          goto LABEL_8;
      }
      v7 = *(uint32_t *)(v7 + 12);
    }
    while ( v7 != 0 );
LABEL_8:
    v14 = v8;
    v9 = v8;
    v10 = v15 == v8;
    v3 = v17;
    if ( !v10 )
    {
      v11 = std::op_char((char *)v18 + 1, v9 + 16);
      v12 = v15;
      if ( v11 == 0 )
        v12 = v14;
      v14 = v12;
    }
  }
  g4_std::string::Destroy((char *)v18 + 1);
  if ( v14 != *(uint32_t *)(v16 + 60) + 8 )
    g4_std_compat::string_assign(v14 + 28, ((char *)(&byte_20DD800)), strlen(((char *)(&byte_20DD800))));
  *(uint32_t *)(a1 + 8) = v3;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_AD25E0  (binary VA: 0xad25e0)
// Original: sub_AD25E0
// ----------------------------------------------------------------------------
int sub_AD25E0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, char *a25, char *a26)
{
  int v26;
  int (****v27)(uint32_t);
  char *v28;
  char *v29;
  char *v30;
  unsigned int v31;
  int (***v32)(uint32_t);
  char *v33;
  char *v34;
  char *v35;
  char *v36;
  unsigned int v37;
  uint32_t *v38;
  int v39;
  int i;
  int v41;
  int v42;
  int v43;
  char v44;
  int v45;
  size_t v46;
  int v47;
  char *v48;
  char *v49;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v83;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef char *_g4_t_v62;
  typedef int (****_g4_t_v63)(uint32_t);
  typedef int _g4_t_v64;
  typedef int (****_g4_t_v66)(uint32_t);
  typedef int _g4_t_v67;
  typedef char *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint32_t _g4_t_v76[4];
  typedef int _g4_t_v77[4];
  typedef uint32_t _g4_t_v78[2];
  typedef char *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef uint32_t _g4_t_v81[4];
  typedef char *_g4_t_v82;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v56)) > _g4_s0 ? (8u + sizeof(_g4_t_v56)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v57)) > _g4_s1 ? (12u + sizeof(_g4_t_v57)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v58)) > _g4_s2 ? (16u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v59)) > _g4_s3 ? (20u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v60)) > _g4_s4 ? (24u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v61)) > _g4_s5 ? (28u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v62)) > _g4_s6 ? (28u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v63)) > _g4_s7 ? (32u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v64)) > _g4_s8 ? (32u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v66)) > _g4_s9 ? (40u + sizeof(_g4_t_v66)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v67)) > _g4_s10 ? (40u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v68)) > _g4_s11 ? (44u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v69)) > _g4_s12 ? (44u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v70)) > _g4_s13 ? (44u + sizeof(_g4_t_v70)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v71)) > _g4_s14 ? (44u + sizeof(_g4_t_v71)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v72)) > _g4_s15 ? (48u + sizeof(_g4_t_v72)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v73)) > _g4_s16 ? (52u + sizeof(_g4_t_v73)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v74)) > _g4_s17 ? (56u + sizeof(_g4_t_v74)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v75)) > _g4_s18 ? (60u + sizeof(_g4_t_v75)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v76)) > _g4_s19 ? (64u + sizeof(_g4_t_v76)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v77)) > _g4_s20 ? (80u + sizeof(_g4_t_v77)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v78)) > _g4_s21 ? (96u + sizeof(_g4_t_v78)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v79)) > _g4_s22 ? (104u + sizeof(_g4_t_v79)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v80)) > _g4_s23 ? (108u + sizeof(_g4_t_v80)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v81)) > _g4_s24 ? (112u + sizeof(_g4_t_v81)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v82)) > _g4_s25 ? (128u + sizeof(_g4_t_v82)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 40u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 44u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 44u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 52u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 56u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 60u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 64u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 80u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 96u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 104u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 108u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 112u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 128u);

  HIBYTE(v60) = *(uint8_t *)(a1 + 72);
  sub_AC71C0(v81, *(uint32_t *)(*(uint32_t *)(a1 + 4) + 60));
  sub_7E5D80(*(uint32_t *)(a1 + 4), a1 + 84);
  v26 = *(uint32_t *)(a1 + 8);
  if ( v26 != 0 )
    (*(void (**)(uint32_t, int))(*(uint32_t *)v26 + 12))(*(uint32_t *)(a1 + 8), a1 + 60);
  v27 = *(int (*****)(uint32_t))(a1 + 60);
  *(uint32_t *)(a1 + 52) = *(uint32_t *)(a1 + 48);
  v66 = v27;
  v63 = *(int (*****)(uint32_t))(a1 + 64);
  g4_std::string::construct_copy(&v79, a1 + 80);
  v28 = v79;
  if ( *((int *)v79 - 1) < 0 )
  {
    v29 = v79;
LABEL_66:
    v68 = &v28[*((uint32_t *)v28 - 3)];
    goto LABEL_7;
  }
  sub_19397C0(&v79);
  v29 = v79;
  if ( *((int *)v79 - 1) < 0 )
  {
    v28 = v79;
    goto LABEL_66;
  }
  sub_19397C0(&v79);
  v28 = v79;
  v68 = &v79[*((uint32_t *)v79 - 3)];
  if ( *((int *)v79 - 1) >= 0 )
  {
    sub_19397C0(&v79);
    v28 = v79;
  }
LABEL_7:
  if ( v28 != v68 )
  {
    v30 = v29;
    do
    {
      v31 = *v28;
      if ( v31 <= 0xFF )
        LOWORD(v31) = *(uint16_t *)(tolower_tab_ + 2 * v31 + 2);
      *v30 = v31;
      ++v28;
      ++v30;
    }
    while ( v28 != v68 );
  }
  if ( v66 != v63 )
  {
    while ( 1 )
    {
      v32 = *v66;
      v33 = (char *)&unk_1B15112;
      v77[0] = (int)(uintptr_t)(*v66);
      if ( v77[0] != 0 )
        v33 = (char *)(**v32)((uint32_t)(uintptr_t)(v32));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v78), v33, (int)(uintptr_t)(&v75) + 2);
      v34 = (char *)v78[0];
      if ( *(int *)(v78[0] - 4) < 0 || (sub_19397C0(v78), v34 = (char *)v78[0], *(int *)(v78[0] - 4) < 0) )
      {
        v35 = v34;
        v69 = (int)(uintptr_t)(&v34[*((uint32_t *)v34 - 3)]);
      }
      else
      {
        sub_19397C0(v78);
        v35 = (char *)v78[0];
        v69 = v78[0] + *(uint32_t *)(v78[0] - 12);
        if ( *(int *)(v78[0] - 4) >= 0 )
        {
          sub_19397C0(v78);
          v35 = (char *)v78[0];
        }
      }
      if ( (char *)v69 != v35 )
      {
        v36 = v34;
        do
        {
          v37 = *v35;
          if ( v37 <= 0xFF )
            LOWORD(v37) = *(uint16_t *)(tolower_tab_ + 2 * v37 + 2);
          *v36 = v37;
          ++v35;
          ++v36;
        }
        while ( v35 != (char *)v69 );
        v35 = (char *)v78[0];
      }
      if ( *((uint32_t *)v35 - 3) != 0 )
      {
        if ( *(uint32_t *)(*(uint32_t *)(a1 + 80) - 12) == 0 || *(uint8_t *)(a1 + 72) == 0 )
          break;
        if ( g4_std_compat::string_find(v78, v79, 0, *((uint32_t *)v79 - 3)) != -1 )
        {
          v38 = *(uint32_t **)(a1 + 52);
          if ( v38 != *(uint32_t **)(a1 + 56) )
          {
LABEL_29:
            v39 = 0;
            if ( v38 != nullptr )
            {
              *v38 = v77[0];
              v39 = *(uint32_t *)(a1 + 52);
            }
            *(uint32_t *)(a1 + 52) = v39 + 4;
            goto LABEL_32;
          }
          goto LABEL_61;
        }
      }
LABEL_32:
      g4_std::string::Destroy(v78);
      if ( v63 == ++v66 )
        goto LABEL_33;
    }
    v38 = *(uint32_t **)(a1 + 52);
    if ( v38 != *(uint32_t **)(a1 + 56) )
      goto LABEL_29;
LABEL_61:
    g4_std::vector_TweakerRangeType_46e8a4::M_insert_aux(a1 + 48, v38, (int)(uintptr_t)(v77));
    goto LABEL_32;
  }
LABEL_33:
  v76[0] = (uint32_t)(uintptr_t)(&unk_213B814);
  v70 = *(uint32_t **)(a1 + 48);
  v61 = *(uint32_t **)(a1 + 52);
  g4_std_compat::string_assign((int)(uintptr_t)(v76), "-1=none", 7u);
  if ( v70 != v61 )
  {
    for ( i = 0; ; ++i )
    {
      v41 = 0;
      if ( *v70 != 0 )
        v41 = (**(int (***)(uint32_t))*v70)(*v70);
      sprintf(((char *)(&byte_20D6D80)), ";%d=%s", i, v41);
      g4_std::string::append((int)(uintptr_t)(v76), ((char *)(&byte_20D6D80)), strlen(((char *)(&byte_20D6D80))));
      if ( v61 == ++v70 )
        break;
    }
  }
  v62 = (char *)v76[0];
  v64 = *(uint32_t *)(a1 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), *(char **)(a1 + 12), (int)(uintptr_t)(&v75) + 3);
  v42 = *(uint32_t *)(v64 + 60);
  v43 = *(uint32_t *)(v42 + 12);
  v67 = v42 + 8;
  v71 = v42 + 8;
  if ( v43 != 0 )
  {
    do
    {
      while ( (uint8_t)std::op_char(v43 + 16, &v80) == 0 )
      {
        v71 = v43;
        v43 = *(uint32_t *)(v43 + 8);
        if ( v43 == 0 )
          goto LABEL_44;
      }
      v43 = *(uint32_t *)(v43 + 12);
    }
    while ( v43 != 0 );
LABEL_44:
    if ( v67 != v71 )
    {
      v44 = std::op_char(&v80, v71 + 16);
      v45 = v67;
      if ( v44 == 0 )
        v45 = v71;
      v71 = v45;
    }
  }
  g4_std::string::Destroy(&v80);
  if ( v71 != *(uint32_t *)(v64 + 60) + 8 )
  {
    v46 = strlen(v62);
    g4_std_compat::string_assign(v71 + 28, v62, v46);
    g4_std_compat::string_assign(v71 + 32, &unk_1B15112, 0);
  }
  if ( HIBYTE(v60) != 0 )
  {
    *(uint32_t *)(a1 + 16) = (*(uint32_t *)(a1 + 52) != *(uint32_t *)(a1 + 48)) - 1;
  }
  else
  {
    v51 = *(uint32_t *)(a1 + 52);
    v52 = *(uint32_t *)(a1 + 16);
    v53 = *(uint32_t *)(a1 + 48);
    if ( v51 == v53 )
    {
      v55 = (*(uint32_t *)(a1 + 64) - *(uint32_t *)(a1 + 60)) >> 2;
      if ( v52 >= v55 )
        *(uint32_t *)(a1 + 16) = v55 - 1;
    }
    else
    {
      v54 = (v51 - v53) >> 2;
      if ( v52 >= v54 )
        *(uint32_t *)(a1 + 16) = v54 - 1;
    }
  }
  v47 = a1;
  G4_VCALL<void>(a1, 20, a1 + 12, v56, v57, v58, v59, v60, v62, v64, a1, v67, v71, v72, v73, v74, v75, v76[0], v76[1], v76[2], v76[3], v77[0], v77[1], v77[2], v77[3], v78[0], v78[1], v79, v80, v81[0], v81[1], v81[2], v81[3]);
  sub_7E5D80(*(uint32_t *)(v47 + 4), &a25);
  v83 = *(uint32_t *)(v47 + 16);
  g4_std::string::Destroy(&a13);
  g4_std::string::Destroy(&a23);
  v48 = a26;
  v49 = a25;
  if ( a26 != a25 )
  {
    do
    {
      v82 = v49;
      v49 += 4;
      g4_std::string::Destroy(v82);
    }
    while ( v48 != v49 );
    v49 = a25;
  }
  if ( v49 != nullptr )
    opDelete(v49);
  return v83;
}

// ----------------------------------------------------------------------------
// Function: sub_AD3410  (binary VA: 0xad3410)
// Original: sub_AD3410
// ----------------------------------------------------------------------------
unsigned int sub_AD3410(int a1, unsigned int *a2, unsigned int a3)
{
  unsigned int *v3;
  unsigned int result;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  char v11;
  int v12;
  uint32_t *v13;
  unsigned int v14;
  uint32_t *v15;
  int v16;
  int v17;
  unsigned int v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v23)) > _g4_s4 ? (20u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v24)) > _g4_s5 ? (20u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v25)) > _g4_s6 ? (24u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (39u + sizeof(_g4_t_v26)) > _g4_s7 ? (39u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v27)) > _g4_s8 ? (44u + sizeof(_g4_t_v27)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 39u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);

  v3 = a2;
  result = a3;
  a2[1] = *a2;
  if ( a3 != 0 )
  {
    v5 = *(char **)(a3 + 80);
    ++*(uint32_t *)(a1 + 108);
    v25 = v5;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26) + 1, v5, (int)(uintptr_t)(&v26));
    v6 = *(uint32_t *)(a1 + 40);
    v23 = a1 + 36;
    v7 = a1 + 36;
    if ( v6 != 0 )
    {
      v8 = a1 + 36;
      do
      {
        while ( (uint8_t)std::op_char(v6 + 16, (char *)&v26 + 1) == 0 )
        {
          v8 = v6;
          v6 = *(uint32_t *)(v6 + 8);
          if ( v6 == 0 )
            goto LABEL_7;
        }
        v6 = *(uint32_t *)(v6 + 12);
      }
      while ( v6 != 0 );
LABEL_7:
      v9 = v8;
      v10 = v23 == v8;
      v3 = a2;
      if ( v10 )
      {
        v7 = a1 + 36;
      }
      else
      {
        v20 = v9;
        v11 = std::op_char((char *)&v26 + 1, v9 + 16);
        v7 = v20;
        if ( v11 != 0 )
          v7 = a1 + 36;
      }
    }
    v21 = v7;
    g4_std::string::Destroy((char *)&v26 + 1);
    if ( v23 == v21 )
    {
      return xmldata::DataManager::LogError("Can't find constant '%s'\n", v25);
    }
    else
    {
      v12 = *(uint32_t *)(v21 + 20);
      if ( v12 != 0 )
      {
        v13 = (uint32_t *)*v3;
        v3[1] = *v3;
        v14 = (*(uint32_t *)(v12 + 44) - *(uint32_t *)(v12 + 40)) >> 2;
        if ( v14 > 0x3FFFFFFF )
          sub_1900180("vector::reserve");
        v15 = (uint32_t *)v3[2];
        result = v15 - v13;
        if ( v14 > result )
        {
          v16 = 0;
          result = 0;
          if ( v14 != 0 )
          {
            result = opNew(4 * v14);
            v13 = (uint32_t *)*v3;
            v16 = 4 * v14;
          }
          if ( v13 != nullptr )
          {
            v22 = result;
            v19 = v16;
            opDelete(v13);
            v16 = v19;
            result = v22;
          }
          v15 = (uint32_t *)(result + v16);
          *v3 = result;
          v3[1] = result;
          v3[2] = (unsigned int)(uintptr_t)(v15);
          v13 = (uint32_t *)result;
        }
        if ( v14 != 0 )
        {
          v24 = 4 * v14;
          v17 = 0;
          while ( 1 )
          {
            result = *(uint32_t *)(*(uint32_t *)(v12 + 40) + v17);
            v27[0] = result;
            if ( v13 == v15 )
            {
              g4_std::vector_TweakerRangeType_46e8a4::M_insert_aux((int)(uintptr_t)(v3), v13, (int)(uintptr_t)(v27));
            }
            else
            {
              v18 = 0;
              if ( v13 != nullptr )
              {
                *v13 = result;
                v18 = v3[1];
              }
              v3[1] = v18 + 4;
            }
            v17 += 4;
            if ( v17 == v24 )
              break;
            v13 = (uint32_t *)v3[1];
            v15 = (uint32_t *)v3[2];
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_AD3610  (binary VA: 0xad3610)
// Original: sub_AD3610
// ----------------------------------------------------------------------------
unsigned int sub_AD3610(int a1, unsigned int *a2, unsigned int a3)
{
  unsigned int *v3;
  unsigned int result;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  char v11;
  int v12;
  uint32_t *v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef uint8_t _g4_t_v28[13];
  typedef int _g4_t_v29[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v24)) > _g4_s5 ? (20u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v25)) > _g4_s6 ? (24u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v26)) > _g4_s7 ? (28u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v27)) > _g4_s8 ? (28u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (47u + sizeof(_g4_t_v28)) > _g4_s9 ? (47u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v29)) > _g4_s10 ? (60u + sizeof(_g4_t_v29)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 47u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);

  v3 = a2;
  result = a3;
  a2[1] = *a2;
  if ( a3 != 0 )
  {
    v5 = *(char **)(a3 + 80);
    ++*(uint32_t *)(a1 + 124);
    v25 = v5;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), v5, (int)(uintptr_t)(v28));
    v6 = a1 + 84;
    v7 = *(uint32_t *)(a1 + 88);
    v26 = a1 + 84;
    if ( v7 != 0 )
    {
      v8 = a1 + 84;
      do
      {
        while ( (uint8_t)std::op_char(v7 + 16, v29) == 0 )
        {
          v8 = v7;
          v7 = *(uint32_t *)(v7 + 8);
          if ( v7 == 0 )
            goto LABEL_7;
        }
        v7 = *(uint32_t *)(v7 + 12);
      }
      while ( v7 != 0 );
LABEL_7:
      v9 = v8;
      v10 = v26 == v8;
      v3 = a2;
      if ( v10 )
      {
        v6 = a1 + 84;
      }
      else
      {
        v20 = v9;
        v11 = std::op_char(v29, v9 + 16);
        v6 = v20;
        if ( v11 != 0 )
          v6 = a1 + 84;
      }
    }
    v21 = v6;
    g4_std::string::Destroy(v29);
    if ( v26 == v21 )
    {
      return xmldata::DataManager::LogError("Can't find array '%s'\n", v25);
    }
    else
    {
      v24 = *(uint32_t *)(v21 + 20);
      if ( v24 != 0 )
      {
        v12 = *(uint32_t *)(v21 + 20);
        v13 = (uint32_t *)*v3;
        v3[1] = *v3;
        v14 = (*(uint32_t *)(v12 + 44) - *(uint32_t *)(v12 + 40)) >> 2;
        if ( v14 > 0x3FFFFFFF )
          sub_1900180("vector::reserve");
        v27 = (uint32_t *)v3[2];
        result = v27 - v13;
        if ( v14 > result )
        {
          v15 = 0;
          result = 0;
          if ( v14 != 0 )
          {
            result = opNew(4 * v14);
            v13 = (uint32_t *)*v3;
            v15 = 4 * v14;
          }
          if ( v13 != nullptr )
          {
            v22 = result;
            v19 = v15;
            opDelete(v13);
            v15 = v19;
            result = v22;
          }
          *v3 = result;
          v3[1] = result;
          v27 = (uint32_t *)(result + v15);
          v3[2] = result + v15;
          v13 = (uint32_t *)result;
        }
        if ( v14 != 0 )
        {
          v23 = 4 * v14;
          v16 = 0;
          while ( 1 )
          {
            v17 = *(uint32_t *)(*(uint32_t *)(v24 + 40) + v16);
            result = 0;
            if ( v17 != 0 )
              result = v17 + 12;
            *(uint32_t *)&v28[1] = result;
            if ( v13 == v27 )
            {
              g4_std::vector_TweakerRangeType_46e8a4::M_insert_aux((int)(uintptr_t)(v3), v13, (int)(uintptr_t)(&v28[1]));
            }
            else
            {
              v18 = 0;
              if ( v13 != nullptr )
              {
                *v13 = result;
                v18 = v3[1];
              }
              v3[1] = v18 + 4;
            }
            v16 += 4;
            if ( v16 == v23 )
              break;
            v13 = (uint32_t *)v3[1];
            v27 = (uint32_t *)v3[2];
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_ADB680  (binary VA: 0xadb680)
// Original: sub_ADB680
// ----------------------------------------------------------------------------
int sub_ADB680(int a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  void (***v4)(uint32_t);
  void (****v5)(uint32_t);
  void (***v6)(uint32_t);
  void (**v7)(uint32_t);
  void (***v8)(uint32_t);
  void (**v9)(uint32_t);
  void *v10;
  void **v11;
  unsigned int v12;
  void *v13;
  void (***v15)(uint32_t);
  unsigned int v16;
  char *v17;
  char *v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int i;
  int v26;
  int j;
  int v28;
  int v29;
  int v30;
  bool v31;
  unsigned int v32;
  int *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  void (**v38)(uint32_t);
  typedef void (***_g4_t_v39)(uint32_t);
  typedef void (***_g4_t_v40)(uint32_t);
  typedef void (***_g4_t_v41)(uint32_t);
  typedef const char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef void (***_g4_t_v45)(uint32_t);
  typedef uint8_t _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef void (***_g4_t_v48)(uint32_t);
  typedef uint32_t *_g4_t_v49;
  typedef void (***_g4_t_v50)(uint32_t);
  typedef int _g4_t_v51;
  typedef void (***_g4_t_v52)(uint32_t);
  typedef unsigned int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint8_t _g4_t_v58[5];
  typedef int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef uint32_t _g4_t_v61[2];
  typedef uint32_t _g4_t_v62[2];
  typedef uint32_t *_g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef void (***_g4_t_v68)(uint32_t);
  typedef uint32_t *_g4_t_v69;
  typedef unsigned int _g4_t_v70;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v39)) > _g4_s0 ? (4u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v40)) > _g4_s1 ? (4u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v41)) > _g4_s2 ? (4u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v42)) > _g4_s3 ? (12u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v43)) > _g4_s4 ? (32u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v44)) > _g4_s5 ? (32u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v45)) > _g4_s6 ? (36u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v46)) > _g4_s7 ? (40u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v47)) > _g4_s8 ? (40u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v48)) > _g4_s9 ? (44u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v49)) > _g4_s10 ? (44u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v50)) > _g4_s11 ? (48u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v51)) > _g4_s12 ? (48u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v52)) > _g4_s13 ? (52u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v53)) > _g4_s14 ? (56u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v54)) > _g4_s15 ? (56u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v55)) > _g4_s16 ? (60u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v56)) > _g4_s17 ? (60u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v57)) > _g4_s18 ? (64u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (79u + sizeof(_g4_t_v58)) > _g4_s19 ? (79u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v59)) > _g4_s20 ? (84u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v60)) > _g4_s21 ? (88u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v61)) > _g4_s22 ? (92u + sizeof(_g4_t_v61)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v62)) > _g4_s23 ? (100u + sizeof(_g4_t_v62)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v63)) > _g4_s24 ? (108u + sizeof(_g4_t_v63)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v64)) > _g4_s25 ? (112u + sizeof(_g4_t_v64)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v65)) > _g4_s26 ? (116u + sizeof(_g4_t_v65)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v66)) > _g4_s27 ? (120u + sizeof(_g4_t_v66)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v67)) > _g4_s28 ? (124u + sizeof(_g4_t_v67)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v68)) > _g4_s29 ? (128u + sizeof(_g4_t_v68)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v69)) > _g4_s30 ? (132u + sizeof(_g4_t_v69)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v70)) > _g4_s31 ? (136u + sizeof(_g4_t_v70)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 60u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 79u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 92u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 100u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 108u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 112u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 116u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 120u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 124u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 128u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 132u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 136u);

  v63 = nullptr;
  v64 = nullptr;
  v65 = nullptr;
  v67 = nullptr;
  v68 = nullptr;
  v69 = nullptr;
  v70 = 0;
  v62[1] = 8;
  v62[0] = opNew(0x20u);
  v1 = (uint32_t *)(v62[0] + 12);
  *(uint32_t *)(v62[0] + 12) = opNew(0x1D4u);
  v66 = (unsigned int)(uintptr_t)(v1);
  v2 = (uint32_t *)*v1;
  v70 = (unsigned int)(uintptr_t)(v1);
  v64 = v2;
  v65 = v2 + 117;
  v3 = (uint32_t *)*v1;
  v63 = v2;
  v68 = (void (***)(uint32_t))v3;
  v67 = v3;
  v69 = v3 + 117;
  if ( (uint8_t)sub_A7A270(v62, "gamedata/leveldesign/bin/_primitives/compiled.bin") == 0 )
  {
    v46 = 0;
    v52 = (void (***)(uint32_t))v67;
    goto LABEL_3;
  }
  v56 = v63;
  v49 = v65;
  v47 = v66;
LABEL_20:
  v15 = (void (***)(uint32_t))v67;
  if ( v67 == v56 )
  {
LABEL_54:
    v52 = v15;
    v46 = 1;
    goto LABEL_3;
  }
  while ( 1 )
  {
    v16 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), off_20C1778[0], (int)(uintptr_t)(v58));
    GLFUtils::ToLowerCase(&v59, 0, -1);
    v17 = (char *)v59;
    v18 = &v17[strlen((const char *)v59)];
    if ( v17 != v18 )
    {
      v19 = 0;
      do
      {
        v20 = *v17++;
        v19 ^= (v19 << 6) + (v19 >> 2) - 1640531527 + v20;
      }
      while ( v17 != v18 );
      v16 = v19;
    }
    g4_std::string::Destroy(&v59);
    v60 = v16;
    v21 = (int)(uintptr_t)(sub_A69470(v56 + 7, &v60));
    g4_std::string::construct_copy(&v58[1], v21);
    if ( *(uint32_t *)(*(uint32_t *)&v58[1] - 12) == 0 )
      break;
    v22 = sub_4EBBF0(0xB0u, 1);
    sub_A3E3D0(v22);
    if ( (uint32_t *)(v22 + 120) != v56 + 1 )
    {
      g4_std::Rb_tree_int_pair_int_const_Value_ad49a0::M_erase(
        v22 + 120,
        *(void **)(v22 + 128));
      *(uint32_t *)(v22 + 128) = 0;
      *(uint32_t *)(v22 + 132) = v22 + 124;
      *(uint32_t *)(v22 + 136) = v22 + 124;
      *(uint32_t *)(v22 + 140) = 0;
      v23 = v56[3];
      if ( v23 != 0 )
      {
        v24 = (int)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_Value_ad49a0::M_copy(
                v22 + 120,
                v23,
                v22 + 124));
        *(uint32_t *)(v22 + 128) = v24;
        for ( i = v24; *(uint32_t *)(i + 8) != 0; i = *(uint32_t *)(i + 8) )
          ;
        *(uint32_t *)(v22 + 132) = i;
        while ( *(uint32_t *)(v24 + 12) != 0 )
          v24 = *(uint32_t *)(v24 + 12);
        *(uint32_t *)(v22 + 136) = v24;
        *(uint32_t *)(v22 + 140) = v56[6];
      }
    }
    if ( (uint32_t *)(v22 + 144) != v56 + 7 )
    {
      g4_std::Rb_tree_int_pair_int_const_Value_ad49a0::M_erase(
        v22 + 144,
        *(void **)(v22 + 152));
      *(uint32_t *)(v22 + 152) = 0;
      *(uint32_t *)(v22 + 156) = v22 + 148;
      *(uint32_t *)(v22 + 160) = v22 + 148;
      *(uint32_t *)(v22 + 164) = 0;
      if ( v56[9] != 0 )
      {
        v26 = (int)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_Value_ad49a0::M_copy(
                v22 + 144,
                v56[9],
                v22 + 148));
        *(uint32_t *)(v22 + 152) = v26;
        for ( j = v26; *(uint32_t *)(j + 8) != 0; j = *(uint32_t *)(j + 8) )
          ;
        *(uint32_t *)(v22 + 156) = j;
        while ( *(uint32_t *)(v26 + 12) != 0 )
          v26 = *(uint32_t *)(v26 + 12);
        *(uint32_t *)(v22 + 160) = v26;
        *(uint32_t *)(v22 + 164) = v56[12];
      }
    }
    v54 = a1 + 32;
    v28 = *(uint32_t *)(a1 + 36);
    if ( v28 == 0 )
      goto LABEL_74;
    v51 = v22;
    v29 = a1 + 32;
    do
    {
      while ( (int)glf::Stricmp(*(glf::Self **)(v28 + 16), *(const char **)&v58[1], v42) >= 0 )
      {
        v29 = v28;
        v28 = *(uint32_t *)(v28 + 8);
        if ( v28 == 0 )
          goto LABEL_49;
      }
      v28 = *(uint32_t *)(v28 + 12);
    }
    while ( v28 != 0 );
LABEL_49:
    v30 = v29;
    v31 = v54 == v29;
    v22 = v51;
    if ( !v31 && (int)glf::Stricmp(*(glf::Self **)&v58[1], *(const char **)(v30 + 16), v42) >= 0 )
    {
      if ( (*(uint32_t *)unk_20DA2A8) == 0 )
        goto LABEL_52;
      if ( byte_20D50F0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D50F0) != 0 )
      {
        sub_A3E840(&dword_20D50F8);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D50F0);
        __cxa_atexit((void (*)(void *))sub_A3A260, &dword_20D50F8, &unk_20D1280);
      }
      v33 = nullptr;
      if ( byte_20D50FC == 0 )
        v33 = (int *)(&dword_20D50F8);
      if ( *((uint8_t *)v33 + 20) == 0 )
        goto LABEL_52;
    }
    v34 = *(uint32_t *)(a1 + 36);
    if ( v34 != 0 )
    {
      v35 = a1 + 32;
      do
      {
        while ( (int)glf::Stricmp(*(glf::Self **)(v34 + 16), *(const char **)&v58[1], v42) >= 0 )
        {
          v35 = v34;
          v34 = *(uint32_t *)(v34 + 8);
          if ( v34 == 0 )
            goto LABEL_64;
        }
        v34 = *(uint32_t *)(v34 + 12);
      }
      while ( v34 != 0 );
LABEL_64:
      v36 = v35;
      v31 = v35 == v54;
      v22 = v51;
      if ( !v31 )
      {
        v43 = v36;
        v37 = glf::Stricmp(*(glf::Self **)&v58[1], *(const char **)(v36 + 16), v42);
        v36 = v43;
        if ( v37 >= 0 )
          goto LABEL_67;
      }
    }
    else
    {
LABEL_74:
      v36 = a1 + 32;
    }
    v44 = v36;
    g4_std::string::construct_copy(v61, &v58[1]);
    v61[1] = 0;
    sub_AA29F0(v44, v61);
    g4_std::string::Destroy(v61);
    v36 = v57;
LABEL_67:
    *(uint32_t *)(v36 + 20) = v22;
LABEL_52:
    g4_std::string::Destroy(&v58[1]);
    v56 += 13;
    if ( v56 != v49 )
      goto LABEL_20;
    v32 = v47;
    v15 = (void (***)(uint32_t))v67;
    v47 += 4;
    v56 = *(uint32_t **)(v32 + 4);
    v49 = v56 + 117;
    if ( v67 == v56 )
      goto LABEL_54;
  }
  g4_std::string::Destroy(&v58[1]);
  v46 = 0;
  v52 = (void (***)(uint32_t))v67;
LABEL_3:
  v53 = v66;
  v50 = v68;
  v55 = v70;
  v4 = (void (***)(uint32_t))v63;
  v48 = (void (***)(uint32_t))v65;
  if ( v70 > v66 + 4 )
  {
    v45 = (void (***)(uint32_t))v63;
    v5 = (void (****)(uint32_t))(v66 + 4);
    do
    {
      v6 = *v5++;
      (**v6)((uint32_t)(uintptr_t)(v6));
      (*v6[13])((uint32_t)(uintptr_t)(v6 + 13));
      (*v6[26])((uint32_t)(uintptr_t)(v6 + 26));
      (*v6[39])((uint32_t)(uintptr_t)(v6 + 39));
      (*v6[52])((uint32_t)(uintptr_t)(v6 + 52));
      (*v6[65])((uint32_t)(uintptr_t)(v6 + 65));
      (*v6[78])((uint32_t)(uintptr_t)(v6 + 78));
      (*v6[91])((uint32_t)(uintptr_t)(v6 + 91));
      (*v6[104])((uint32_t)(uintptr_t)(v6 + 104));
    }
    while ( v55 > (unsigned int)(uintptr_t)(v5) );
    v4 = v45;
  }
  if ( v55 == v53 )
  {
    while ( v4 != v52 )
    {
      v38 = *v4;
      v41 = v4;
      v4 += 13;
      (*v38)((uint32_t)(uintptr_t)(v41));
    }
  }
  else
  {
    while ( v48 != v4 )
    {
      v7 = *v4;
      v39 = v4;
      v4 += 13;
      (*v7)((uint32_t)(uintptr_t)(v39));
    }
    if ( v50 != v52 )
    {
      v8 = v50;
      do
      {
        v9 = *v8;
        v40 = v8;
        v8 += 13;
        (*v9)((uint32_t)(uintptr_t)(v40));
      }
      while ( v8 != v52 );
    }
  }
  v10 = (void *)v62[0];
  if ( v62[0] != 0 )
  {
    v11 = (void **)v66;
    v12 = v70 + 4;
    if ( v70 + 4 > v66 )
    {
      do
      {
        v13 = *v11++;
        opDelete(v13);
      }
      while ( v12 > (unsigned int)(uintptr_t)(v11) );
      v10 = (void *)v62[0];
    }
    opDelete(v10);
  }
  return v46;
}

// ----------------------------------------------------------------------------
// Function: sub_ADC530  (binary VA: 0xadc530)
// Original: sub_ADC530
// ----------------------------------------------------------------------------
int sub_ADC530(int a1)
{
  char *v1;
  size_t v2;
  int v3;
  char v4;
  char *v5;
  int v7;
  size_t v8;
  int v9;
  uint32_t *v10;
  int v11;
  long double v12; // fst7
  int v13;
  int v14;
  const char *v15;
  char *v16;
  int v17;
  int v18;
  char *v19;
  char *v20;
  char *v21;
  int v22;
  int v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef char *_g4_t_s;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t _g4_t_v36[3];
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t _g4_t_v39[4];
  typedef int _g4_t_v40[3];
  typedef char _g4_t_v41[4];
  typedef int _g4_t_v42;
  typedef char _g4_t_v43[4];
  typedef char _g4_t_v44[4];
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char _g4_t_v50[4];
  typedef char _g4_t_v51[4];
  typedef char _g4_t_v52[4];
  typedef char _g4_t_v53[4];
  typedef uint32_t _g4_t_v54[3];
  typedef char _g4_t_v55;
  typedef void *_g4_t_v56;
  typedef void *_g4_t_v57;
  typedef void *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef char _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef char _g4_t_v65[4];
  typedef uint32_t _g4_t_v66[19];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v25)) > _g4_s1 ? (0u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v26)) > _g4_s2 ? (0u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v27)) > _g4_s3 ? (4u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v28)) > _g4_s4 ? (8u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v29)) > _g4_s5 ? (12u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_s)) > _g4_s6 ? (24u + sizeof(_g4_t_s)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v31)) > _g4_s7 ? (28u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v32)) > _g4_s8 ? (32u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v33)) > _g4_s9 ? (32u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v34)) > _g4_s10 ? (36u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v35)) > _g4_s11 ? (36u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v36)) > _g4_s12 ? (40u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (55u + sizeof(_g4_t_v37)) > _g4_s13 ? (55u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v38)) > _g4_s14 ? (56u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v39)) > _g4_s15 ? (60u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v40)) > _g4_s16 ? (76u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v41)) > _g4_s17 ? (88u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v42)) > _g4_s18 ? (92u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v43)) > _g4_s19 ? (96u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v44)) > _g4_s20 ? (100u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v45)) > _g4_s21 ? (104u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v46)) > _g4_s22 ? (108u + sizeof(_g4_t_v46)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v47)) > _g4_s23 ? (112u + sizeof(_g4_t_v47)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v48)) > _g4_s24 ? (116u + sizeof(_g4_t_v48)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v49)) > _g4_s25 ? (120u + sizeof(_g4_t_v49)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v50)) > _g4_s26 ? (124u + sizeof(_g4_t_v50)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v51)) > _g4_s27 ? (128u + sizeof(_g4_t_v51)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v52)) > _g4_s28 ? (132u + sizeof(_g4_t_v52)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v53)) > _g4_s29 ? (136u + sizeof(_g4_t_v53)) : _g4_s29,
    _g4_s31 = (140u + sizeof(_g4_t_v54)) > _g4_s30 ? (140u + sizeof(_g4_t_v54)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v55)) > _g4_s31 ? (152u + sizeof(_g4_t_v55)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v56)) > _g4_s32 ? (156u + sizeof(_g4_t_v56)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v57)) > _g4_s33 ? (160u + sizeof(_g4_t_v57)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v58)) > _g4_s34 ? (164u + sizeof(_g4_t_v58)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v59)) > _g4_s35 ? (168u + sizeof(_g4_t_v59)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v60)) > _g4_s36 ? (172u + sizeof(_g4_t_v60)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v61)) > _g4_s37 ? (176u + sizeof(_g4_t_v61)) : _g4_s37,
    _g4_s39 = (180u + sizeof(_g4_t_v62)) > _g4_s38 ? (180u + sizeof(_g4_t_v62)) : _g4_s38,
    _g4_s40 = (184u + sizeof(_g4_t_v63)) > _g4_s39 ? (184u + sizeof(_g4_t_v63)) : _g4_s39,
    _g4_s41 = (188u + sizeof(_g4_t_v64)) > _g4_s40 ? (188u + sizeof(_g4_t_v64)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v65)) > _g4_s41 ? (196u + sizeof(_g4_t_v65)) : _g4_s41,
    _g4_s43 = (200u + sizeof(_g4_t_v66)) > _g4_s42 ? (200u + sizeof(_g4_t_v66)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 55u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 88u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 108u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 112u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 116u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 120u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 124u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 128u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 132u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 136u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 140u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 152u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 156u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 160u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 164u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 168u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 172u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 176u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 180u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 184u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 188u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 196u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 200u);

  v66[15] = (uint32_t)(uintptr_t)(&a1);
  v31 = a1;
  pugi::xml_node::attribute(v41);
  v1 = (char *)pugi::xml_attribute::value(v41);
  v2 = strlen(v1);
  g4_std_compat::string_assign(v31 + 8, v1, v2);
  pugi::xml_node::first_child(&v42);
  v29 = 0;
  while ( (uint8_t)pugi::xml_node::empty(&v42) == 0 )
  {
    if ( pugi::xml_node::type(&v42) == 2 )
    {
      pugi::xml_node::attribute(v43);
      s = (char *)pugi::xml_attribute::value(v43);
      pugi::xml_node::attribute(v44);
      v32 = (char *)(v31 + 20);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), s, (int)(uintptr_t)(&v37));
      v34 = (char *)(v31 + 20);
      v3 = *(uint32_t *)(v31 + 24);
      if ( v3 != 0 )
      {
        do
        {
          while ( (uint8_t)std::op_char(v3 + 16, &v45) == 0 )
          {
            v34 = (char *)v3;
            v3 = *(uint32_t *)(v3 + 8);
            if ( v3 == 0 )
              goto LABEL_10;
          }
          v3 = *(uint32_t *)(v3 + 12);
        }
        while ( v3 != 0 );
LABEL_10:
        if ( v32 == v34 )
        {
          v34 = (char *)(v31 + 20);
        }
        else
        {
          v4 = std::op_char(&v45, v34 + 16);
          v5 = (char *)(v31 + 20);
          if ( v4 == 0 )
            v5 = v34;
          v34 = v5;
        }
      }
      g4_std::string::Destroy(&v45);
      if ( v32 == v34 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), s, (int)(uintptr_t)(&v38));
        v35 = v31 + 20;
        v7 = *(uint32_t *)(v31 + 24);
        if ( v7 == 0 )
          goto LABEL_24;
        do
        {
          while ( (uint8_t)std::op_char(v7 + 16, &v46) == 0 )
          {
            v35 = v7;
            v7 = *(uint32_t *)(v7 + 8);
            if ( v7 == 0 )
              goto LABEL_22;
          }
          v7 = *(uint32_t *)(v7 + 12);
        }
        while ( v7 != 0 );
LABEL_22:
        if ( (char *)v35 == v32 || (uint8_t)std::op_char(&v46, v35 + 16) != 0 )
        {
LABEL_24:
          v55 = 0;
          v59 = 0;
          v60 = 0;
          v61 = 0;
          v62 = 0;
          v54[0] = (uint32_t)(uintptr_t)(&off_2069F48);
          v56 = &unk_213B814;
          v57 = &unk_213B814;
          v54[1] = (uint32_t)(uintptr_t)(&off_2069F6C);
          v58 = &unk_213B814;
          v63 = 0;
          v64 = 0;
          g4_std::string::construct_copy(v65, &v46);
          sub_B06190(v66, v54);
          g4_std::Rb_tree_string_pair_string_const_71e137::M_insert_unique(v36);
          v35 = v36[0];
          sub_AFA270(v66);
          g4_std::string::Destroy(v65);
          sub_AFA270(v54);
        }
        v28 = v35 + 20;
        g4_std::string::Destroy(&v46);
        v8 = strlen(s);
        g4_std_compat::string_assign(v35 + 44, s, v8);
        if ( (uint8_t)sub_B7C7E0(v44) != 0 )
        {
          v9 = G4_VCALL<int>(v31, 48, v29);
          *(float *)(v35 + 52) = (float)v9;
          ++v29;
          *(uint32_t *)(v35 + 48) = v9;
          *(uint8_t *)(v35 + 56) = 1;
        }
        else
        {
          *(uint32_t *)(v35 + 48) = sub_B7C650(v44);
          v12 = sub_B7C750(v44);
          v13 = *(uint32_t *)(v35 + 48);
          *(float *)(v35 + 52) = v12;
          *(uint8_t *)(v35 + 56) = 0;
          if ( v13 == 0 )
          {
            v14 = *(char *)pugi::xml_attribute::value(v44);
            if ( v14 == -1 || (*(uint8_t *)(ctype_ + (uint8_t)v14 + 1) & 4) == 0 )
            {
              v15 = (const char *)pugi::xml_attribute::value(v44);
              v33 = (char *)v15;
              while ( 1 )
              {
                v19 = (char *)(strchr(v15, 124));
                v20 = v19;
                if ( v19 != nullptr )
                  *v19 = 0;
                v21 = strchr(v33, 46);
                if ( v21 != nullptr )
                {
                  *v21 = 0;
                  v24 = v21;
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), v21 + 1, (int)(uintptr_t)(&v38) + 2);
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), v33, (int)(uintptr_t)(&v38) + 1);
                  g4_std::string::construct_copy(v50, &v47);
                  g4_std::string::construct_copy(v51, &v48);
                  v16 = v24;
                  v17 = *(uint32_t *)(v35 + 64);
                  if ( v17 == *(uint32_t *)(v35 + 68) )
                  {
                    g4_std_compat::vector_insert_aux(v35 + 60, *(uint32_t *)(v35 + 64), v50);
                    v16 = v24;
                  }
                  else
                  {
                    v18 = 0;
                    if ( v17 != 0 )
                    {
                      v27 = *(uint32_t *)(v35 + 64);
                      g4_std::string::construct_copy(v27, v50);
                      g4_std::string::construct_copy(v27 + 4, v51);
                      v16 = v24;
                      v18 = *(uint32_t *)(v35 + 64);
                    }
                    *(uint32_t *)(v35 + 64) = v18 + 8;
                  }
                  v25 = v16;
                  g4_std::string::Destroy(v51);
                  g4_std::string::Destroy(v50);
                  g4_std::string::Destroy(&v47);
                  g4_std::string::Destroy(&v48);
                  *v25 = 46;
                }
                else
                {
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), v33, (int)(uintptr_t)(&v38) + 3);
                  g4_std::string::construct_copy(v52, v31 + 8);
                  g4_std::string::construct_copy(v53, &v49);
                  v22 = *(uint32_t *)(v35 + 64);
                  if ( v22 == *(uint32_t *)(v35 + 68) )
                  {
                    g4_std_compat::vector_insert_aux(v35 + 60, *(uint32_t *)(v35 + 64), v52);
                  }
                  else
                  {
                    v23 = 0;
                    if ( v22 != 0 )
                    {
                      v26 = *(uint32_t *)(v35 + 64);
                      g4_std::string::construct_copy(v26, v52);
                      g4_std::string::construct_copy(v26 + 4, v53);
                      v23 = *(uint32_t *)(v35 + 64);
                    }
                    *(uint32_t *)(v35 + 64) = v23 + 8;
                  }
                  g4_std::string::Destroy(v53);
                  g4_std::string::Destroy(v52);
                  g4_std::string::Destroy(&v49);
                }
                if ( v20 == nullptr )
                  break;
                *v20 = 124;
                v33 = v20 + 1;
                v15 = v20 + 1;
              }
            }
          }
          v39[0] = (uint32_t)(uintptr_t)(&unk_213B814);
          sub_ABF600(v28, v39);
          g4_std::string::assign_str(v35 + 36, v39);
          g4_std::string::Destroy(v39);
        }
        v40[0] = v35 + 20;
        v10 = *(uint32_t **)(v31 + 44);
        if ( v10 == *(uint32_t **)(v31 + 48) )
        {
          g4_std::vector_DataManager_Constant_Val_9c4058::M_insert_aux(v31 + 40, *(void **)(v31 + 44), (int)(uintptr_t)(v40));
        }
        else
        {
          v11 = 0;
          if ( v10 != nullptr )
          {
            *v10 = v28;
            v11 = *(uint32_t *)(v31 + 44);
          }
          *(uint32_t *)(v31 + 44) = v11 + 4;
        }
      }
      else
      {
        xmldata::DataManager::LogError("Constant '%s.%s' already exists; ignoring duplicate\n", *(uint32_t *)(v31 + 8));
      }
    }
    pugi::xml_node::next_sibling(v36);
    v42 = v36[0];
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_ADCDD0  (binary VA: 0xadcdd0)
// Original: sub_ADCDD0
// ----------------------------------------------------------------------------
int sub_ADCDD0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int16_t *v9;
  int v10;
  size_t v11;
  int *v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  int v17;
  size_t v19;
  typedef const char *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef uint8_t *_g4_t_v22;
  typedef char *_g4_t_s;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int (*_g4_t_v27)(void);
  typedef int _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef uint32_t _g4_t_v35[3];
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38[4];
  typedef uint32_t _g4_t_v39[4];
  typedef uint32_t _g4_t_v40[4];
  typedef uint32_t _g4_t_v41[4];
  typedef uint32_t _g4_t_v42[4];
  typedef uint32_t _g4_t_v43[4];
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint8_t _g4_t_v52[4];
  typedef int _g4_t_v53;
  typedef uint8_t _g4_t_v54[4];
  typedef uint8_t _g4_t_v55[4];
  typedef uint8_t _g4_t_v56[4];
  typedef uint8_t _g4_t_v57[4];
  typedef uint8_t _g4_t_v58[4];
  typedef uint8_t _g4_t_v59[4];
  typedef uint8_t _g4_t_v60[4];
  typedef uint8_t _g4_t_v61[4];
  typedef uint8_t _g4_t_v62[4];
  typedef uint32_t _g4_t_v63[7];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_s)) > _g4_s3 ? (16u + sizeof(_g4_t_s)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v24)) > _g4_s4 ? (20u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v25)) > _g4_s5 ? (24u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v26)) > _g4_s6 ? (28u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v27)) > _g4_s7 ? (28u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v28)) > _g4_s8 ? (28u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v29)) > _g4_s9 ? (32u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v30)) > _g4_s10 ? (32u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v31)) > _g4_s11 ? (32u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v32)) > _g4_s12 ? (32u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v33)) > _g4_s13 ? (32u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v34)) > _g4_s14 ? (32u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v35)) > _g4_s15 ? (36u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v36)) > _g4_s16 ? (48u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v37)) > _g4_s17 ? (52u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v38)) > _g4_s18 ? (56u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v39)) > _g4_s19 ? (72u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v40)) > _g4_s20 ? (88u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v41)) > _g4_s21 ? (104u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v42)) > _g4_s22 ? (120u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v43)) > _g4_s23 ? (136u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (152u + sizeof(_g4_t_v44)) > _g4_s24 ? (152u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v45)) > _g4_s25 ? (156u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (160u + sizeof(_g4_t_v46)) > _g4_s26 ? (160u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (164u + sizeof(_g4_t_v47)) > _g4_s27 ? (164u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (168u + sizeof(_g4_t_v48)) > _g4_s28 ? (168u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (172u + sizeof(_g4_t_v49)) > _g4_s29 ? (172u + sizeof(_g4_t_v49)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v50)) > _g4_s30 ? (176u + sizeof(_g4_t_v50)) : _g4_s30,
    _g4_s32 = (180u + sizeof(_g4_t_v51)) > _g4_s31 ? (180u + sizeof(_g4_t_v51)) : _g4_s31,
    _g4_s33 = (184u + sizeof(_g4_t_v52)) > _g4_s32 ? (184u + sizeof(_g4_t_v52)) : _g4_s32,
    _g4_s34 = (188u + sizeof(_g4_t_v53)) > _g4_s33 ? (188u + sizeof(_g4_t_v53)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v54)) > _g4_s34 ? (192u + sizeof(_g4_t_v54)) : _g4_s34,
    _g4_s36 = (196u + sizeof(_g4_t_v55)) > _g4_s35 ? (196u + sizeof(_g4_t_v55)) : _g4_s35,
    _g4_s37 = (200u + sizeof(_g4_t_v56)) > _g4_s36 ? (200u + sizeof(_g4_t_v56)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v57)) > _g4_s37 ? (204u + sizeof(_g4_t_v57)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v58)) > _g4_s38 ? (208u + sizeof(_g4_t_v58)) : _g4_s38,
    _g4_s40 = (212u + sizeof(_g4_t_v59)) > _g4_s39 ? (212u + sizeof(_g4_t_v59)) : _g4_s39,
    _g4_s41 = (216u + sizeof(_g4_t_v60)) > _g4_s40 ? (216u + sizeof(_g4_t_v60)) : _g4_s40,
    _g4_s42 = (220u + sizeof(_g4_t_v61)) > _g4_s41 ? (220u + sizeof(_g4_t_v61)) : _g4_s41,
    _g4_s43 = (224u + sizeof(_g4_t_v62)) > _g4_s42 ? (224u + sizeof(_g4_t_v62)) : _g4_s42,
    _g4_s44 = (228u + sizeof(_g4_t_v63)) > _g4_s43 ? (228u + sizeof(_g4_t_v63)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 120u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 136u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 152u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 156u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 160u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 164u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 168u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 172u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 176u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 180u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 184u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 188u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 192u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 196u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 200u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 204u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 208u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 212u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 216u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 220u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 224u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 228u);

  v63[3] = (uint32_t)(uintptr_t)(&a1);
  v25 = a1;
  v24 = a2;
  v38[0] = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "name", (int)(uintptr_t)(&v36));
  v26 = (char *)(v24 + 4);
  v2 = *(uint32_t *)(v24 + 8);
  if ( v2 == 0 )
  {
    v29 = (char *)(v24 + 4);
LABEL_78:
    v39[0] = (uint32_t)(uintptr_t)(&unk_213B814);
    g4_std::string::construct_copy(v54, &v44);
    g4_std::string::construct_copy(v55, v39);
    sub_ABB1F0(v29, v54);
    v29 = (char *)v35[0];
    g4_std::string::Destroy(v55);
    g4_std::string::Destroy(v54);
    g4_std::string::Destroy(v39);
    goto LABEL_8;
  }
  v29 = (char *)(v24 + 4);
  do
  {
    while ( (uint8_t)std::op_char(v2 + 16, &v44) == 0 )
    {
      v29 = (char *)v2;
      v2 = *(uint32_t *)(v2 + 8);
      if ( v2 == 0 )
        goto LABEL_6;
    }
    v2 = *(uint32_t *)(v2 + 12);
  }
  while ( v2 != 0 );
LABEL_6:
  if ( v26 == v29 || (uint8_t)std::op_char(&v44, v29 + 16) != 0 )
    goto LABEL_78;
LABEL_8:
  s = *((char **)v29 + 5);
  g4_std::string::Destroy(&v44);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "type", (int)(uintptr_t)(&v36) + 1);
  v3 = *(uint32_t *)(v24 + 8);
  v30 = (char *)(v24 + 4);
  if ( v3 == 0 )
    goto LABEL_79;
  do
  {
    while ( (uint8_t)std::op_char(v3 + 16, &v45) == 0 )
    {
      v30 = (char *)v3;
      v3 = *(uint32_t *)(v3 + 8);
      if ( v3 == 0 )
        goto LABEL_13;
    }
    v3 = *(uint32_t *)(v3 + 12);
  }
  while ( v3 != 0 );
LABEL_13:
  if ( v26 == v30 || (uint8_t)std::op_char(&v45, v30 + 16) != 0 )
  {
LABEL_79:
    v40[0] = (uint32_t)(uintptr_t)(&unk_213B814);
    g4_std::string::construct_copy(v56, &v45);
    g4_std::string::construct_copy(v57, v40);
    sub_ABB1F0(v30, v56);
    v30 = (char *)v35[0];
    g4_std::string::Destroy(v57);
    g4_std::string::Destroy(v56);
    g4_std::string::Destroy(v40);
  }
  v20 = *((const char **)v30 + 5);
  g4_std::string::Destroy(&v45);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "multi", (int)(uintptr_t)(&v36) + 2);
  v4 = *(uint32_t *)(v24 + 8);
  v31 = (char *)(v24 + 4);
  if ( v4 == 0 )
    goto LABEL_81;
  do
  {
    while ( (uint8_t)std::op_char(v4 + 16, &v46) == 0 )
    {
      v31 = (char *)v4;
      v4 = *(uint32_t *)(v4 + 8);
      if ( v4 == 0 )
        goto LABEL_20;
    }
    v4 = *(uint32_t *)(v4 + 12);
  }
  while ( v4 != 0 );
LABEL_20:
  if ( v26 == v31 || (uint8_t)std::op_char(&v46, v31 + 16) != 0 )
  {
LABEL_81:
    v41[0] = (uint32_t)(uintptr_t)(&unk_213B814);
    g4_std::string::construct_copy(v58, &v46);
    g4_std::string::construct_copy(v59, v41);
    sub_ABB1F0(v31, v58);
    v31 = (char *)v35[0];
    g4_std::string::Destroy(v59);
    g4_std::string::Destroy(v58);
    g4_std::string::Destroy(v41);
  }
  v22 = *((uint8_t **)v31 + 5);
  g4_std::string::Destroy(&v46);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "stype", (int)(uintptr_t)(&v36) + 3);
  v5 = *(uint32_t *)(v24 + 8);
  v32 = (char *)(v24 + 4);
  if ( v5 == 0 )
    goto LABEL_82;
  do
  {
    while ( (uint8_t)std::op_char(v5 + 16, &v47) == 0 )
    {
      v32 = (char *)v5;
      v5 = *(uint32_t *)(v5 + 8);
      if ( v5 == 0 )
        goto LABEL_27;
    }
    v5 = *(uint32_t *)(v5 + 12);
  }
  while ( v5 != 0 );
LABEL_27:
  if ( v26 == v32 || (uint8_t)std::op_char(&v47, v32 + 16) != 0 )
  {
LABEL_82:
    v42[0] = (uint32_t)(uintptr_t)(&unk_213B814);
    g4_std::string::construct_copy(v60, &v47);
    g4_std::string::construct_copy(v61, v42);
    sub_ABB1F0(v32, v60);
    v32 = (char *)v35[0];
    g4_std::string::Destroy(v61);
    g4_std::string::Destroy(v60);
    g4_std::string::Destroy(v42);
  }
  v21 = *((char **)v32 + 5);
  g4_std::string::Destroy(&v47);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "value", (int)(uintptr_t)(&v37));
  v6 = *(uint32_t *)(v24 + 8);
  v33 = (char *)(v24 + 4);
  if ( v6 == 0 )
    goto LABEL_80;
  do
  {
    while ( (uint8_t)std::op_char(v6 + 16, &v48) == 0 )
    {
      v33 = (char *)v6;
      v6 = *(uint32_t *)(v6 + 8);
      if ( v6 == 0 )
        goto LABEL_34;
    }
    v6 = *(uint32_t *)(v6 + 12);
  }
  while ( v6 != 0 );
LABEL_34:
  if ( v26 == v33 || (uint8_t)std::op_char(&v48, v33 + 16) != 0 )
  {
LABEL_80:
    v43[0] = (uint32_t)(uintptr_t)(&unk_213B814);
    g4_std::string::construct_copy(v62, &v48);
    g4_std::string::construct_copy(v63, v43);
    sub_ABB1F0(v33, v62);
    v33 = (char *)v35[0];
    g4_std::string::Destroy(v63);
    g4_std::string::Destroy(v62);
    g4_std::string::Destroy(v43);
  }
  v34 = *((char **)v33 + 5);
  g4_std::string::Destroy(&v48);
  v7 = *(uint32_t *)(v25 + 52);
  if ( v7 != 0 )
  {
    if ( *(uint32_t *)(v7 + 52) == 0 || (v8 = sub_AB8770(*(uint32_t *)(v7 + 52), s)) == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), s, (int)(uintptr_t)(&v37) + 3);
      sub_AB86F0(&v51);
      g4_std::string::Destroy(&v51);
      if ( v35[0] == v7 + 20 || (v8 = *(uint32_t *)(v35[0] + 20)) == 0 )
      {
        xmldata::DataManager::LogError("Field '%s' has not been found in the base structure '%s'\n", (char)(uintptr_t)(s));
        return 0;
      }
    }
    v9 = (int16_t *)(&a0[2]);
    if ( *(uint8_t *)(v8 + 44) != 0 )
      v9 = (int16_t *)"1";
    v27 = *(int (**)(void))(v8 + 52);
    if ( *v21 == 0 )
      v21 = *(char **)(v8 + 12);
    if ( *(uint8_t *)v9 != 49 )
    {
LABEL_44:
      v10 = v27();
      v38[0] = v10;
      goto LABEL_45;
    }
  }
  else
  {
    v27 = sub_AF7130;
    if ( strcmp(v20, "bool") != 0 )
    {
      v27 = sub_AF6D10;
      if ( strcmp(v20, "int") != 0 )
      {
        v27 = sub_AF7030;
        if ( strcmp(v20, "hex") != 0 )
        {
          v27 = sub_AF6F30;
          if ( strcmp(v20, "float") != 0 )
          {
            v27 = sub_AF6BD0;
            if ( strcmp(v20, "irange") != 0 )
            {
              v27 = sub_AF6E10;
              if ( strcmp(v20, "frange") != 0 )
              {
                v27 = sub_AF75B0;
                if ( strcmp(v20, "string") != 0 )
                {
                  v27 = sub_AF7490;
                  if ( strcmp(v20, "enum") != 0 )
                  {
                    v27 = sub_AF7350;
                    if ( strcmp(v20, "flag") != 0 )
                    {
                      if ( strcmp(v20, (const char *)&off_1B3B308) != 0 )
                      {
                        xmldata::DataManager::LogError("Error determining '%s.%s' type: '%s'\n", *(uint32_t *)(v25 + 8));
                        return 0;
                      }
                      v27 = sub_AF7230;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v8 = 0;
    if ( *v22 != 49 )
      goto LABEL_44;
  }
  v10 = sub_4EBBF0(0x48u, 1);
  *(uint32_t *)(v10 + 4) = 0;
  *(uint32_t *)(v10 + 8) = 0;
  *(uint32_t *)(v10 + 12) = (uint32_t)(uintptr_t)(&unk_213B814);
  *(uint32_t *)(v10 + 28) = (uint32_t)(uintptr_t)(&unk_213B814);
  *(uint32_t *)(v10 + 32) = (uint32_t)(uintptr_t)(&unk_213B814);
  *(uint32_t *)(v10 + 40) = (uint32_t)(uintptr_t)(&unk_213B814);
  *(uint32_t *)(v10 + 48) = (uint32_t)(uintptr_t)(&unk_213B814);
  *(uint32_t *)v10 = (uint32_t)(uintptr_t)(&off_2069E68);
  *(uint8_t *)(v10 + 24) = 0;
  *(uint32_t *)(v10 + 36) = (uint32_t)(uintptr_t)("list");
  *(uint8_t *)(v10 + 44) = 1;
  *(uint32_t *)(v10 + 52) = 0;
  *(uint32_t *)(v10 + 16) = (uint32_t)(uintptr_t)(&off_2069EFC);
  *(uint32_t *)(v10 + 56) = 0;
  *(uint32_t *)(v10 + 60) = 0;
  *(uint32_t *)(v10 + 64) = 0;
  *(uint32_t *)(v10 + 68) = 0;
  *(uint32_t *)(v10 + 68) = v27();
  v38[0] = v10;
LABEL_45:
  v11 = strlen(s);
  g4_std_compat::string_assign(v10 + 40, s, v11);
  v12 = (int *)v38[0];
  *(uint32_t *)(v38[0] + 52) = (uint32_t)(uintptr_t)(v27);
  v13 = *v12;
  if ( v8 != 0 )
    (*(void (**)(int *, int))(v13 + 12))(v12, v8);
  else
    (*(void (**)(int *, int))(v13 + 20))(v12, v24);
  if ( *v34 != 0 )
  {
    G4_VCALL<void>(v38[0], 24, v34);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), v34, (int)(uintptr_t)(&v37) + 1);
    g4_std::string::assign_str(v38[0] + 28, &v49);
    g4_std::string::Destroy(&v49);
  }
  if ( *v21 != 0 )
  {
    v19 = strlen(v21);
    g4_std_compat::string_assign(v38[0] + 12, v21, v19);
  }
  v14 = v38[0];
  *(uint32_t *)(v38[0] + 4) = v25;
  v15 = *(int **)(v25 + 44);
  if ( v15 == *(int **)(v25 + 48) )
  {
    g4_std::vector_DataManager_Structure_Fi_88ea59::M_insert_aux(v25 + 40, *(void **)(v25 + 44), (int)(uintptr_t)(v38));
  }
  else
  {
    v16 = 0;
    if ( v15 != nullptr )
    {
      *v15 = v14;
      v16 = *(uint32_t *)(v25 + 44);
    }
    *(uint32_t *)(v25 + 44) = v16 + 4;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), s, (int)(uintptr_t)(&v37) + 2);
  v17 = *(uint32_t *)(v25 + 24);
  if ( v17 == 0 )
    goto LABEL_62;
  v28 = v25 + 20;
  do
  {
    while ( (uint8_t)std::op_char(v17 + 16, &v50) == 0 )
    {
      v28 = v17;
      v17 = *(uint32_t *)(v17 + 8);
      if ( v17 == 0 )
        goto LABEL_60;
    }
    v17 = *(uint32_t *)(v17 + 12);
  }
  while ( v17 != 0 );
LABEL_60:
  if ( v25 + 20 == v28 || (uint8_t)std::op_char(&v50, v28 + 16) != 0 )
  {
LABEL_62:
    g4_std::string::construct_copy(v52, &v50);
    v53 = 0;
    g4_std::Rb_tree_string_pair_string_const_f5e670::M_insert_unique(v35);
    v28 = v35[0];
    g4_std::string::Destroy(v52);
  }
  *(uint32_t *)(v28 + 20) = v38[0];
  g4_std::string::Destroy(&v50);
  return v38[0];
}

// ----------------------------------------------------------------------------
// Function: xmldata::DataManager::Unload  (binary VA: 0xaf0fc0)
// Original: xmldata::DataManager::Unload
// ----------------------------------------------------------------------------
int xmldata::DataManager::Unload(uint32_t *a1)
{
  int v1;
  int v2;
  unsigned int v3;
  int v4;
  char **v5;
  int v6;
  void (*v7)(uint32_t *, char *, int);
  char *v8;
  char *v9;
  char *v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  void (*v18)(uint32_t *, int, int);
  int v19;
  char *v20;
  char *v21;
  char *v22;
  unsigned int v23;
  int v24;
  int v25;
  unsigned int v26;
  bool v27;
  volatile int32_t *v28;
  int v29;
  int v30;
  int v31;
  char *v32;
  int v33;
  char **v34;
  int v35;
  void (*v36)(uint32_t *, char *, int);
  char *v37;
  char *v38;
  char *v39;
  unsigned int v40;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  unsigned int i;
  int v56;
  int j;
  uint32_t *v58;
  int v59;
  unsigned int v60;
  int v61;
  int v62;
  unsigned int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  int v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef char *_g4_t_v82;
  typedef char *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef char *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef unsigned int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef void (*_g4_t_v90)(uint32_t *, char *, int);
  typedef int _g4_t_v91;
  typedef void (*_g4_t_v92)(uint32_t *, char *, int);
  typedef int _g4_t_v93;
  typedef unsigned int _g4_t_v94;
  typedef unsigned int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef unsigned int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef unsigned int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef unsigned int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef unsigned int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef unsigned int _g4_t_v124;
  typedef char _g4_t_v125;
  typedef uint16_t _g4_t_v126[3];
  typedef uint16_t _g4_t_v127;
  typedef void *_g4_t_v128;
  typedef int _g4_t_v129;
  typedef void *_g4_t_v130;
  typedef volatile int32_t *_g4_t_v131;
  typedef char _g4_t_v132[4];
  typedef void *_g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef uint32_t _g4_t_v137[16];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v74)) > _g4_s0 ? (0u + sizeof(_g4_t_v74)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v75)) > _g4_s1 ? (0u + sizeof(_g4_t_v75)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v76)) > _g4_s2 ? (0u + sizeof(_g4_t_v76)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v77)) > _g4_s3 ? (0u + sizeof(_g4_t_v77)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v78)) > _g4_s4 ? (0u + sizeof(_g4_t_v78)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v79)) > _g4_s5 ? (0u + sizeof(_g4_t_v79)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v80)) > _g4_s6 ? (0u + sizeof(_g4_t_v80)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v81)) > _g4_s7 ? (32u + sizeof(_g4_t_v81)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v82)) > _g4_s8 ? (32u + sizeof(_g4_t_v82)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v83)) > _g4_s9 ? (32u + sizeof(_g4_t_v83)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v84)) > _g4_s10 ? (32u + sizeof(_g4_t_v84)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v85)) > _g4_s11 ? (32u + sizeof(_g4_t_v85)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v86)) > _g4_s12 ? (32u + sizeof(_g4_t_v86)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v87)) > _g4_s13 ? (32u + sizeof(_g4_t_v87)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v88)) > _g4_s14 ? (32u + sizeof(_g4_t_v88)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v89)) > _g4_s15 ? (32u + sizeof(_g4_t_v89)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v90)) > _g4_s16 ? (36u + sizeof(_g4_t_v90)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v91)) > _g4_s17 ? (36u + sizeof(_g4_t_v91)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v92)) > _g4_s18 ? (36u + sizeof(_g4_t_v92)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v93)) > _g4_s19 ? (36u + sizeof(_g4_t_v93)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v94)) > _g4_s20 ? (36u + sizeof(_g4_t_v94)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v95)) > _g4_s21 ? (40u + sizeof(_g4_t_v95)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v96)) > _g4_s22 ? (40u + sizeof(_g4_t_v96)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v97)) > _g4_s23 ? (40u + sizeof(_g4_t_v97)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v98)) > _g4_s24 ? (40u + sizeof(_g4_t_v98)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v99)) > _g4_s25 ? (40u + sizeof(_g4_t_v99)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v100)) > _g4_s26 ? (40u + sizeof(_g4_t_v100)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v101)) > _g4_s27 ? (40u + sizeof(_g4_t_v101)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_v102)) > _g4_s28 ? (48u + sizeof(_g4_t_v102)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v103)) > _g4_s29 ? (52u + sizeof(_g4_t_v103)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v104)) > _g4_s30 ? (56u + sizeof(_g4_t_v104)) : _g4_s30,
    _g4_s32 = (60u + sizeof(_g4_t_v105)) > _g4_s31 ? (60u + sizeof(_g4_t_v105)) : _g4_s31,
    _g4_s33 = (64u + sizeof(_g4_t_v106)) > _g4_s32 ? (64u + sizeof(_g4_t_v106)) : _g4_s32,
    _g4_s34 = (64u + sizeof(_g4_t_v107)) > _g4_s33 ? (64u + sizeof(_g4_t_v107)) : _g4_s33,
    _g4_s35 = (68u + sizeof(_g4_t_v108)) > _g4_s34 ? (68u + sizeof(_g4_t_v108)) : _g4_s34,
    _g4_s36 = (68u + sizeof(_g4_t_v109)) > _g4_s35 ? (68u + sizeof(_g4_t_v109)) : _g4_s35,
    _g4_s37 = (68u + sizeof(_g4_t_v110)) > _g4_s36 ? (68u + sizeof(_g4_t_v110)) : _g4_s36,
    _g4_s38 = (68u + sizeof(_g4_t_v111)) > _g4_s37 ? (68u + sizeof(_g4_t_v111)) : _g4_s37,
    _g4_s39 = (68u + sizeof(_g4_t_v112)) > _g4_s38 ? (68u + sizeof(_g4_t_v112)) : _g4_s38,
    _g4_s40 = (72u + sizeof(_g4_t_v113)) > _g4_s39 ? (72u + sizeof(_g4_t_v113)) : _g4_s39,
    _g4_s41 = (72u + sizeof(_g4_t_v114)) > _g4_s40 ? (72u + sizeof(_g4_t_v114)) : _g4_s40,
    _g4_s42 = (72u + sizeof(_g4_t_v115)) > _g4_s41 ? (72u + sizeof(_g4_t_v115)) : _g4_s41,
    _g4_s43 = (76u + sizeof(_g4_t_v116)) > _g4_s42 ? (76u + sizeof(_g4_t_v116)) : _g4_s42,
    _g4_s44 = (76u + sizeof(_g4_t_v117)) > _g4_s43 ? (76u + sizeof(_g4_t_v117)) : _g4_s43,
    _g4_s45 = (76u + sizeof(_g4_t_v118)) > _g4_s44 ? (76u + sizeof(_g4_t_v118)) : _g4_s44,
    _g4_s46 = (76u + sizeof(_g4_t_v119)) > _g4_s45 ? (76u + sizeof(_g4_t_v119)) : _g4_s45,
    _g4_s47 = (76u + sizeof(_g4_t_v120)) > _g4_s46 ? (76u + sizeof(_g4_t_v120)) : _g4_s46,
    _g4_s48 = (76u + sizeof(_g4_t_v121)) > _g4_s47 ? (76u + sizeof(_g4_t_v121)) : _g4_s47,
    _g4_s49 = (76u + sizeof(_g4_t_v122)) > _g4_s48 ? (76u + sizeof(_g4_t_v122)) : _g4_s48,
    _g4_s50 = (76u + sizeof(_g4_t_v123)) > _g4_s49 ? (76u + sizeof(_g4_t_v123)) : _g4_s49,
    _g4_s51 = (76u + sizeof(_g4_t_v124)) > _g4_s50 ? (76u + sizeof(_g4_t_v124)) : _g4_s50,
    _g4_s52 = (95u + sizeof(_g4_t_v125)) > _g4_s51 ? (95u + sizeof(_g4_t_v125)) : _g4_s51,
    _g4_s53 = (96u + sizeof(_g4_t_v126)) > _g4_s52 ? (96u + sizeof(_g4_t_v126)) : _g4_s52,
    _g4_s54 = (102u + sizeof(_g4_t_v127)) > _g4_s53 ? (102u + sizeof(_g4_t_v127)) : _g4_s53,
    _g4_s55 = (104u + sizeof(_g4_t_v128)) > _g4_s54 ? (104u + sizeof(_g4_t_v128)) : _g4_s54,
    _g4_s56 = (108u + sizeof(_g4_t_v129)) > _g4_s55 ? (108u + sizeof(_g4_t_v129)) : _g4_s55,
    _g4_s57 = (112u + sizeof(_g4_t_v130)) > _g4_s56 ? (112u + sizeof(_g4_t_v130)) : _g4_s56,
    _g4_s58 = (116u + sizeof(_g4_t_v131)) > _g4_s57 ? (116u + sizeof(_g4_t_v131)) : _g4_s57,
    _g4_s59 = (128u + sizeof(_g4_t_v132)) > _g4_s58 ? (128u + sizeof(_g4_t_v132)) : _g4_s58,
    _g4_s60 = (132u + sizeof(_g4_t_v133)) > _g4_s59 ? (132u + sizeof(_g4_t_v133)) : _g4_s59,
    _g4_s61 = (136u + sizeof(_g4_t_v134)) > _g4_s60 ? (136u + sizeof(_g4_t_v134)) : _g4_s60,
    _g4_s62 = (140u + sizeof(_g4_t_v135)) > _g4_s61 ? (140u + sizeof(_g4_t_v135)) : _g4_s61,
    _g4_s63 = (144u + sizeof(_g4_t_v136)) > _g4_s62 ? (144u + sizeof(_g4_t_v136)) : _g4_s62,
    _g4_s64 = (156u + sizeof(_g4_t_v137)) > _g4_s63 ? (156u + sizeof(_g4_t_v137)) : _g4_s63
  };
  alignas(16) uint8_t _g4_sf[_g4_s64];
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 0u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 0u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 0u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 0u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 0u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 0u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 0u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 32u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 32u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 32u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 32u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 32u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 32u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 32u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 32u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 32u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 36u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 36u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 36u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 36u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 36u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 40u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 40u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 40u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 40u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 40u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 40u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 40u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 48u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 52u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 56u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 60u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 64u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 64u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 68u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 68u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 68u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 68u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 68u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 72u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 72u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 72u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 76u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 76u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 76u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 76u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 76u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 76u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 76u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 76u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 76u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 95u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 96u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 102u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 104u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 108u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 112u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 116u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 128u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 132u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 136u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 140u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 144u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 156u);

  glf::FileStreamImpl::Construct((glf::FileStreamImpl::Self *)v137);
  v137[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Open(v137, "texts/str_info.bin", 1);
  glf::FileStreamImpl::Read((glf::FileStreamImpl::Self *)v137, v126, 2u);
  v1 = a1[2];
  v2 = a1[1];
  v128 = &unk_213B814;
  v3 = (v1 - v2) >> 2;
  if ( v126[0] <= v3 )
  {
    if ( v126[0] < v3 )
    {
      v49 = v2 + 4 * v126[0];
      v121 = v49;
      if ( v1 != v49 )
      {
        v50 = v49;
        do
        {
          v77 = v50;
          v50 += 4;
          g4_std::string::Destroy(v77);
        }
        while ( v1 != v50 );
      }
      a1[2] = v121;
    }
    goto LABEL_3;
  }
  v122 = v126[0] - v3;
  if ( v122 == 0 )
    goto LABEL_3;
  if ( v122 > (a1[3] - v1) >> 2 )
  {
    if ( v122 > 0x3FFFFFFF - v3 )
      sub_1900180("vector::_M_fill_insert");
    v51 = v126[0] - v3;
    if ( v122 < v3 )
      v51 = (v1 - v2) >> 2;
    v107 = -4;
    v27 = __CFADD__(v3, v51);
    v52 = v3 + v51;
    if ( v27 || v52 > 0x3FFFFFFF )
    {
      v53 = sub_4EB830(0xFFFFFFFC);
    }
    else
    {
      if ( v52 == 0 )
      {
        v110 = 0;
        v107 = 0;
        v53 = 0;
LABEL_92:
        v54 = v53 + 4 * v3;
        for ( i = v122; i != 0; --i )
        {
          if ( v54 != 0 )
          {
            v95 = i;
            g4_std::string::construct_copy(v54, &v128);
            i = v95;
          }
          v54 += 4;
        }
        v56 = v110;
        for ( j = a1[1]; v1 != j; v56 += 4 )
        {
          if ( v56 != 0 )
          {
            v96 = j;
            g4_std::string::construct_copy(v56, j);
            j = v96;
          }
          j += 4;
        }
        v58 = a1;
        v59 = a1[2];
        v60 = v56 + 4 * v122;
        if ( v1 != v59 )
        {
          do
          {
            if ( v60 != 0 )
            {
              v97 = v59;
              g4_std::string::construct_copy(v60, v1);
              v59 = v97;
            }
            v1 += 4;
            v60 += 4;
          }
          while ( v59 != v1 );
          v58 = a1;
          v59 = a1[2];
        }
        v61 = v58[1];
        if ( v61 != v59 )
        {
          do
          {
            v78 = v61;
            v98 = v59;
            v61 += 4;
            g4_std::string::Destroy(v78);
            v59 = v98;
          }
          while ( v61 != v98 );
          v61 = a1[1];
        }
        if ( v61 != 0 )
          sub_4EB870(v61);
        a1[1] = v110;
        a1[2] = v60;
        a1[3] = v107 + v110;
        goto LABEL_3;
      }
      v107 = 4 * v52;
      v53 = sub_4EB830(4 * v52);
    }
    v110 = v53;
    goto LABEL_92;
  }
  g4_std::string::construct_copy(&v129, &v128);
  v62 = a1[2];
  v63 = (v62 - v1) >> 2;
  if ( v122 >= v63 )
  {
    v70 = a1[2];
    v71 = v122 - v63;
    v124 = v122 - v63;
    if ( v124 != 0 )
    {
      v112 = (a1[2] - v1) >> 2;
      do
      {
        if ( v70 != 0 )
        {
          v100 = v70;
          v88 = v71;
          g4_std::string::construct_copy(v70, &v129);
          v71 = v88;
          v70 = v100;
        }
        v70 += 4;
        --v71;
      }
      while ( v71 != 0 );
      v63 = v112;
      v70 = a1[2];
      v71 = v124;
    }
    v72 = v70 + 4 * v71;
    a1[2] = v72;
    if ( v1 == v62 )
    {
      a1[2] = v72 + 4 * v63;
    }
    else
    {
      v73 = v1;
      do
      {
        if ( v72 != 0 )
        {
          v101 = v72;
          v94 = v63;
          v89 = v73;
          g4_std::string::construct_copy(v72, v73);
          v73 = v89;
          v63 = v94;
          v72 = v101;
        }
        v73 += 4;
        v72 += 4;
      }
      while ( v62 != v73 );
      a1[2] += 4 * v63;
      do
      {
        v80 = v1;
        v1 += 4;
        g4_std::string::assign_str(v80, &v129);
      }
      while ( v62 != v1 );
    }
  }
  else
  {
    v64 = a1[2];
    v65 = v62 - 4 * v122;
    v123 = 4 * v122;
    if ( v62 != v65 )
    {
      v66 = v65;
      do
      {
        if ( v64 != 0 )
        {
          v99 = v64;
          v93 = v65;
          v86 = v66;
          g4_std::string::construct_copy(v64, v66);
          v66 = v86;
          v65 = v93;
          v64 = v99;
        }
        v66 += 4;
        v64 += 4;
      }
      while ( v62 != v66 );
      v64 = a1[2];
    }
    a1[2] = v123 + v64;
    v67 = (v65 - v1) >> 2;
    if ( v67 > 0 )
    {
      v111 = v1;
      v68 = v65;
      do
      {
        v68 -= 4;
        v62 -= 4;
        v87 = v67;
        g4_std::string::assign_str(v62, v68);
        v67 = v87 - 1;
      }
      while ( v87 != 1 );
      v1 = v111;
    }
    v69 = v1 + v123;
    while ( v69 != v1 )
    {
      v79 = v1;
      v1 += 4;
      g4_std::string::assign_str(v79, &v129);
    }
  }
  g4_std::string::Destroy(&v129);
LABEL_3:
  g4_std::string::Destroy(&v128);
  v4 = a1[1];
  if ( (unsigned int)(a1[2] - v4) >> 2 != 0 )
  {
    v113 = 0;
    do
    {
      v5 = (char **)(v4 + 4 * v113);
      (*(void (**)(uint32_t *, uint16_t *, int))(v137[0] + 12))(v137, &v127, 2);
      sub_1939D80((int)(uintptr_t)(v5), v127, 0);
      v6 = v127;
      v7 = *(void (**)(uint32_t *, char *, int))(v137[0] + 12);
      v8 = *v5;
      if ( *((int *)*v5 - 1) >= 0 )
      {
        v90 = *(void (**)(uint32_t *, char *, int))(v137[0] + 12);
        v81 = v127;
        sub_19397C0(v5);
        v8 = *v5;
        v6 = v81;
        v7 = v90;
      }
      v7(v137, v8, v6);
      (*(void (**)(uint32_t *, char *, int))(v137[0] + 12))(v137, &v125, 1);
      v9 = *v5;
      if ( *((int *)*v5 - 1) < 0 || (sub_19397C0(v5), v9 = *v5, *((int *)*v5 - 1) < 0) )
      {
        v10 = v9;
        v116 = (int)(uintptr_t)(&v9[*((uint32_t *)v9 - 3)]);
      }
      else
      {
        v82 = *v5;
        sub_19397C0(v5);
        v10 = *v5;
        v9 = v82;
        v116 = (int)(uintptr_t)(&(*v5)[*((uint32_t *)*v5 - 3)]);
        if ( *((int *)*v5 - 1) >= 0 )
        {
          sub_19397C0(v5);
          v10 = *v5;
          v9 = v82;
        }
      }
      if ( (char *)v116 != v10 )
      {
        do
        {
          v11 = *v10;
          if ( v11 <= 0xFF )
            LOWORD(v11) = *(uint16_t *)(tolower_tab_ + 2 * v11 + 2);
          *v9 = v11;
          ++v10;
          ++v9;
        }
        while ( v10 != (char *)v116 );
      }
      ++v113;
      v4 = a1[1];
    }
    while ( v113 < (a1[2] - v4) >> 2 );
  }
  glf::FileStreamImpl::Read((glf::FileStreamImpl::Self *)v137, v126, 2u);
  v132[0] = 0;
  v134 = 0;
  v135 = 0;
  v136 = 0;
  v12 = a1[4];
  v13 = a1[5];
  v133 = &unk_213B814;
  v105 = v13;
  v14 = -858993459 * ((v13 - v12) >> 2);
  if ( v126[0] > v14 )
  {
    g4_std::vector_StringManager_Sheet_Game_1ca119::M_fill_insert(
      a1 + 4,
      v105,
      v126[0] - v14,
      v132);
    v42 = v134;
    v119 = v135;
  }
  else
  {
    if ( v126[0] >= v14 )
      goto LABEL_18;
    v42 = 0;
    v43 = v12 + 20 * v126[0];
    v104 = v43;
    v119 = 0;
    if ( v105 != v43 )
    {
      v106 = (int *)(v43 + 12);
      v109 = v12 + 20 * v126[0];
      do
      {
        v44 = *(v106 - 1);
        v120 = *v106;
        if ( *v106 != v44 )
        {
          v45 = *(v106 - 1);
          do
          {
            v46 = *(uint32_t *)(v45 + 4);
            if ( (void *)(v46 - 12) != (void *)g4_empty_string_rep
              && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
            {
              opDelete((void *)(v46 - 12));
            }
            v75 = v45;
            v45 += 8;
            g4_std::string::Destroy(v75);
          }
          while ( v120 != v45 );
          v44 = *(uint32_t *)(v109 + 8);
        }
        if ( v44 != 0 )
          sub_4EB870(v44);
        g4_std::string::Destroy(v109 + 4);
        v109 += 20;
        v106 += 5;
      }
      while ( v105 != v109 );
      v42 = v134;
      v119 = v135;
    }
    a1[5] = v104;
  }
  if ( v119 != v42 )
  {
    v47 = v42;
    do
    {
      v48 = *(uint32_t *)(v47 + 4);
      if ( (void *)(v48 - 12) != (void *)g4_empty_string_rep
        && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
      {
        opDelete((void *)(v48 - 12));
      }
      v76 = v47;
      v47 += 8;
      g4_std::string::Destroy(v76);
    }
    while ( v47 != v119 );
    v42 = v134;
  }
  if ( v42 != 0 )
    sub_4EB870(v42);
LABEL_18:
  g4_std::string::Destroy(&v133);
  v15 = a1[4];
  if ( -858993459 * ((a1[5] - v15) >> 2) != 0 )
  {
    v102 = 0;
    v103 = 0;
    while ( 1 )
    {
      v108 = v102 + v15;
      v16 = v102 + v15 + 4;
      *(uint8_t *)v108 = 0;
      (*(void (**)(uint32_t *, uint16_t *, int))(v137[0] + 12))(v137, &v127, 2);
      sub_1939D80(v16, v127, 0);
      v17 = v127;
      v18 = *(void (**)(uint32_t *, int, int))(v137[0] + 12);
      v19 = *(uint32_t *)(v108 + 4);
      if ( *(int *)(v19 - 4) >= 0 )
      {
        v91 = v127;
        sub_19397C0(v16);
        v17 = v91;
        v19 = *(uint32_t *)(v108 + 4);
      }
      v18(v137, v19, v17);
      (*(void (**)(uint32_t *, char *, int))(v137[0] + 12))(v137, &v125, 1);
      v20 = *(char **)(v108 + 4);
      if ( *((int *)v20 - 1) < 0 || (sub_19397C0(v16), *((int *)(v20 = *(char **)(v108 + 4)) - 1) < 0) )
      {
        v21 = v20;
        v22 = &v20[*((uint32_t *)v20 - 3)];
      }
      else
      {
        v83 = *(char **)(v108 + 4);
        sub_19397C0(v16);
        v20 = v83;
        v21 = *(char **)(v108 + 4);
        v22 = &v21[*((uint32_t *)v21 - 3)];
        if ( *((int *)v21 - 1) >= 0 )
        {
          sub_19397C0(v16);
          v20 = v83;
          v21 = *(char **)(v108 + 4);
        }
      }
      for ( ; v21 != v22; ++v20 )
      {
        v23 = *v21;
        if ( v23 <= 0xFF )
          LOWORD(v23) = *(uint16_t *)(tolower_tab_ + 2 * v23 + 2);
        ++v21;
        *v20 = v23;
      }
      glf::FileStreamImpl::Read((glf::FileStreamImpl::Self *)v137, v126, 2u);
      v130 = &unk_213B814;
      v131 = (volatile int32_t *)&unk_20DDA8C;
      v24 = *(uint32_t *)(v108 + 12);
      v25 = *(uint32_t *)(v108 + 8);
      v26 = (v24 - v25) >> 3;
      v27 = v126[0] < v26;
      if ( v126[0] <= v26 )
        break;
      g4_std::vector_StringManager_String_Gam_e0c0cc::M_fill_insert(
        v108 + 8,
        v24,
        v126[0] - v26,
        &v130);
      v28 = v131;
      v32 = (char *)(v131 - 3);
      if ( v131 - 3 != (volatile int32_t *)(void *)g4_empty_string_rep )
        goto LABEL_58;
LABEL_39:
      g4_std::string::Destroy(&v130);
      v33 = *(uint32_t *)(v108 + 8);
      if ( (unsigned int)(*(uint32_t *)(v108 + 12) - v33) >> 3 != 0 )
      {
        v115 = 0;
        do
        {
          v34 = (char **)(v33 + 8 * v115);
          (*(void (**)(uint32_t *, uint16_t *, int))(v137[0] + 12))(v137, &v127, 2);
          sub_1939D80((int)(uintptr_t)(v34), v127, 0);
          v35 = v127;
          v36 = *(void (**)(uint32_t *, char *, int))(v137[0] + 12);
          v37 = *v34;
          if ( *((int *)*v34 - 1) >= 0 )
          {
            v92 = *(void (**)(uint32_t *, char *, int))(v137[0] + 12);
            v84 = v127;
            sub_19397C0(v34);
            v37 = *v34;
            v35 = v84;
            v36 = v92;
          }
          v36(v137, v37, v35);
          (*(void (**)(uint32_t *, char *, int))(v137[0] + 12))(v137, &v125, 1);
          v38 = *v34;
          if ( *((int *)*v34 - 1) < 0 || (sub_19397C0(v34), v38 = *v34, *((int *)*v34 - 1) < 0) )
          {
            v39 = v38;
            v118 = (int)(uintptr_t)(&v38[*((uint32_t *)v38 - 3)]);
          }
          else
          {
            v85 = *v34;
            sub_19397C0(v34);
            v39 = *v34;
            v38 = v85;
            v118 = (int)(uintptr_t)(&(*v34)[*((uint32_t *)*v34 - 3)]);
            if ( *((int *)*v34 - 1) >= 0 )
            {
              sub_19397C0(v34);
              v39 = *v34;
              v38 = v85;
            }
          }
          if ( (char *)v118 != v39 )
          {
            do
            {
              v40 = *v39;
              if ( v40 <= 0xFF )
                LOWORD(v40) = *(uint16_t *)(tolower_tab_ + 2 * v40 + 2);
              *v38 = v40;
              ++v39;
              ++v38;
            }
            while ( v39 != (char *)v118 );
          }
          ++v115;
          v33 = *(uint32_t *)(v108 + 8);
        }
        while ( v115 < (*(uint32_t *)(v108 + 12) - v33) >> 3 );
      }
      ++v103;
      v102 += 20;
      v15 = a1[4];
      if ( v103 >= -858993459 * ((a1[5] - v15) >> 2) )
        goto LABEL_53;
    }
    v28 = (volatile int32_t *)&unk_20DDA8C;
    if ( v27 )
    {
      v29 = v25 + 8 * v126[0];
      v117 = v29;
      if ( v24 != v29 )
      {
        v30 = v29;
        v114 = v29 + 4;
        do
        {
          v31 = *(uint32_t *)(v114 + v30 - v117);
          if ( (void *)(v31 - 12) != (void *)g4_empty_string_rep
            && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
          {
            opDelete((void *)(v31 - 12));
          }
          v74 = v30;
          v30 += 8;
          g4_std::string::Destroy(v74);
        }
        while ( v24 != v30 );
        v28 = v131;
      }
      *(uint32_t *)(v108 + 12) = v117;
    }
    v32 = (char *)(v28 - 3);
    if ( v28 - 3 == (volatile int32_t *)(void *)g4_empty_string_rep )
      goto LABEL_39;
LABEL_58:
    if ( __sync_fetch_and_add(v28 - 1, 0xFFFFFFFF) <= 0 )
      opDelete(v32);
    goto LABEL_39;
  }
LABEL_53:
  glf::FileStreamImpl::Close((glf::FileStreamImpl::Self *)v137);
  sub_AC6170(a1);
  v137[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v137);
  return 1;
}

// ============================================================================
// Schema Descriptor Registration Helper (0xafc3f0) in libGangstar4.so
// ============================================================================
int sub_AFC3F0(uint32_t *a1, char *s)
{
  char *v2;
  size_t v3;
  char *v4;
  unsigned int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v10;
  uint32_t *v11 = nullptr;
  uint32_t v12[9];

  v2 = s;
  v10 = a1[5];
  v3 = strlen(s);
  v4 = &s[v3];
  v5 = 0;
  if ( v2 != &v2[v3] )
  {
    do
    {
      v6 = *v2++;
      v5 ^= (v5 << 6) + (v5 >> 2) - 1640531527 + v6;
    }
    while ( v2 != v4 );
  }
  v7 = (uint32_t *)a1[2];
  v8 = a1 + 1;
  if ( v7 == nullptr )
    goto LABEL_10;
  do
  {
    while ( v7[4] >= v5 )
    {
      v8 = v7;
      v7 = (uint32_t *)v7[2];
      if ( v7 == nullptr )
        goto LABEL_8;
    }
    v7 = (uint32_t *)v7[3];
  }
  while ( v7 != nullptr );
LABEL_8:
  if ( a1 + 1 == v8 || v8[4] > v5 )
  {
LABEL_10:
    v12[0] = v5;
    v12[1] = 0;
    sub_A9E5A0((int *)&v11, a1, (int)(uintptr_t)(v8), (int *)v12);
    v8 = v11;
  }
  v8[5] = v10;
  return v10;
}

// ============================================================================
// Function: xmldata::DataManager::Load  (binary VA: 0xade030)
// ============================================================================
static uint8_t g4_xmldata_loaded = 0;
int xmldata::DataManager::Load(int *a1, const char *, int)
{
  int v2 = 0, v3 = 0, v5 = 0, v6 = 0, v7 = 0, v8 = 0, v10 = 0, v11 = 0, v13 = 0, v14 = 0, v15 = 0, v16 = 0;
  int v19 = 0, v20 = 0, v22 = 0, v23 = 0, v25 = 0, v26 = 0, v28 = 0, v29 = 0, v31 = 0, v32 = 0, v36 = 0, v37 = 0;
  int v39 = 0, v40 = 0, v44 = 0, v45 = 0, v49 = 0, v50 = 0, v52 = 0, v53 = 0, v55 = 0, v56 = 0, v58 = 0, v59 = 0;
  int v61 = 0, v62 = 0, v64 = 0, v65 = 0, v67 = 0, v68 = 0, v70 = 0, v71 = 0, v73 = 0, v74 = 0, v76 = 0, v77 = 0;
  int v89 = 0, v90 = 0, v92 = 0, v93 = 0, v97 = 0, v98 = 0, v101 = 0, v102 = 0, v104 = 0, v105 = 0, v108 = 0, v109 = 0;
  int v111 = 0, v112 = 0, v116 = 0, v117 = 0, v120 = 0, v121 = 0, v127 = 0, v128 = 0, v132 = 0, v133 = 0, v135 = 0, v136 = 0;
  int v143 = 0, v144 = 0, v146 = 0, v147 = 0, v150 = 0, v151 = 0, v153 = 0, v154 = 0, v157 = 0, v158 = 0, v160 = 0, v161 = 0;
  int v164 = 0, v165 = 0, v169 = 0, v170 = 0, v175 = 0, v176 = 0, v180 = 0, v181 = 0, v183 = 0, v184 = 0, v187 = 0, v188 = 0;
  int v189 = 0, v190 = 0, v191 = 0, v192 = 0, v194 = 0, v195 = 0, v197 = 0, v198 = 0, v201 = 0, v202 = 0, v204 = 0, v205 = 0;
  int v208 = 0, v209 = 0, v211 = 0, v212 = 0, v214 = 0, v215 = 0, v217 = 0, v218 = 0, v220 = 0, v221 = 0, v223 = 0, v224 = 0;
  int v226 = 0, v227 = 0, v229 = 0, v230 = 0, v233 = 0, v234 = 0, v237 = 0, v238 = 0, v243 = 0, v244 = 0, v247 = 0, v248 = 0;
  int v250 = 0, v251 = 0, v255 = 0, v256 = 0, v259 = 0, v260 = 0, v263 = 0, v264 = 0, v267 = 0, v268 = 0, v271 = 0, v272 = 0;
  int v275 = 0, v276 = 0, v278 = 0, v279 = 0, v281 = 0, v282 = 0, v284 = 0, v285 = 0, v287 = 0, v288 = 0, v292 = 0, v293 = 0;
  int v295 = 0, v296 = 0, v299 = 0, v300 = 0, v301 = 0, v302 = 0, v305 = 0, v306 = 0, v309 = 0, v310 = 0, v311 = 0, v312 = 0;
  int v314 = 0, v315 = 0, v320 = 0, v321 = 0, v323 = 0, v324 = 0, v326 = 0, v327 = 0, v329 = 0, v330 = 0;
  uint32_t *v4 = nullptr, *v9 = nullptr, *v12 = nullptr, *v17 = nullptr, *v18 = nullptr, *v21 = nullptr, *v24 = nullptr, *v27 = nullptr;
  uint32_t *v30 = nullptr, *v33 = nullptr, *v34 = nullptr, *v35 = nullptr, *v38 = nullptr, *v41 = nullptr, *v42 = nullptr, *v43 = nullptr;
  uint32_t *v46 = nullptr, *v47 = nullptr, *v48 = nullptr, *v51 = nullptr, *v54 = nullptr, *v57 = nullptr, *v60 = nullptr, *v63 = nullptr;
  uint32_t *v66 = nullptr, *v69 = nullptr, *v72 = nullptr, *v75 = nullptr, *v78 = nullptr, *v79 = nullptr, *v80 = nullptr, *v81 = nullptr;
  uint32_t *v82 = nullptr, *v83 = nullptr, *v84 = nullptr, *v85 = nullptr, *v86 = nullptr, *v87 = nullptr, *v88 = nullptr, *v91 = nullptr;
  uint32_t *v94 = nullptr, *v95 = nullptr, *v96 = nullptr, *v99 = nullptr, *v100 = nullptr, *v103 = nullptr, *v106 = nullptr, *v107 = nullptr;
  uint32_t *v110 = nullptr, *v113 = nullptr, *v114 = nullptr, *v115 = nullptr, *v118 = nullptr, *v119 = nullptr, *v122 = nullptr, *v123 = nullptr;
  uint32_t *v124 = nullptr, *v125 = nullptr, *v126 = nullptr, *v129 = nullptr, *v130 = nullptr, *v131 = nullptr, *v134 = nullptr, *v137 = nullptr;
  uint32_t *v138 = nullptr, *v139 = nullptr, *v140 = nullptr, *v141 = nullptr, *v142 = nullptr, *v145 = nullptr, *v148 = nullptr, *v149 = nullptr;
  uint32_t *v152 = nullptr, *v155 = nullptr, *v156 = nullptr, *v159 = nullptr, *v162 = nullptr, *v163 = nullptr, *v166 = nullptr, *v167 = nullptr;
  uint32_t *v168 = nullptr, *v171 = nullptr, *v172 = nullptr, *v173 = nullptr, *v174 = nullptr, *v177 = nullptr, *v178 = nullptr, *v179 = nullptr;
  uint32_t *v182 = nullptr, *v185 = nullptr, *v186 = nullptr, *v193 = nullptr, *v196 = nullptr, *v199 = nullptr, *v200 = nullptr, *v203 = nullptr;
  uint32_t *v206 = nullptr, *v207 = nullptr, *v210 = nullptr, *v213 = nullptr, *v216 = nullptr, *v219 = nullptr, *v222 = nullptr, *v225 = nullptr;
  uint32_t *v228 = nullptr, *v231 = nullptr, *v232 = nullptr, *v235 = nullptr, *v236 = nullptr, *v239 = nullptr, *v240 = nullptr, *v241 = nullptr;
  uint32_t *v242 = nullptr, *v245 = nullptr, *v246 = nullptr, *v249 = nullptr, *v252 = nullptr, *v253 = nullptr, *v254 = nullptr, *v257 = nullptr;
  uint32_t *v258 = nullptr, *v261 = nullptr, *v262 = nullptr, *v265 = nullptr, *v266 = nullptr, *v269 = nullptr, *v270 = nullptr, *v273 = nullptr;
  uint32_t *v274 = nullptr, *v277 = nullptr, *v280 = nullptr, *v283 = nullptr, *v286 = nullptr, *v289 = nullptr, *v290 = nullptr, *v291 = nullptr;
  uint32_t *v294 = nullptr, *v297 = nullptr, *v298 = nullptr, *v303 = nullptr, *v304 = nullptr, *v307 = nullptr, *v308 = nullptr, *v313 = nullptr;
  uint32_t *v316 = nullptr, *v317 = nullptr, *v318 = nullptr, *v319 = nullptr, *v322 = nullptr, *v325 = nullptr, *v328 = nullptr, *v331 = nullptr;
  uint32_t *v332 = nullptr, *v333 = nullptr, *v334 = nullptr, *v335 = nullptr, *v336 = nullptr, *v337 = nullptr, *v338 = nullptr, *v339 = nullptr;
  uint32_t *v340 = nullptr, *v341 = nullptr, *v342 = nullptr, *v343 = nullptr, *v344 = nullptr, *v345 = nullptr, *v346 = nullptr, *v347 = nullptr;
  uint32_t *v348 = nullptr, *v349 = nullptr, *v350 = nullptr, *v351 = nullptr, *v352 = nullptr, *v353 = nullptr, *v354 = nullptr, *v355 = nullptr;
  uint32_t *v356 = nullptr, *v357 = nullptr, *v358 = nullptr, *v359 = nullptr, *v360 = nullptr, *v361 = nullptr, *v362 = nullptr, *v363 = nullptr;
  uint32_t *v364 = nullptr, *v365 = nullptr, *v366 = nullptr, *v367 = nullptr, *v368 = nullptr, *v369 = nullptr, *v370 = nullptr, *v371 = nullptr;
  uint32_t *v372 = nullptr, *v373 = nullptr, *v374 = nullptr, *v375 = nullptr, *v376 = nullptr, *v377 = nullptr, *v378 = nullptr, *v379 = nullptr;
  uint32_t *v380 = nullptr, *v381 = nullptr, *v382 = nullptr, *v383 = nullptr, *v384 = nullptr, *v385 = nullptr, *v386 = nullptr, *v387 = nullptr;
  uint32_t *v388 = nullptr, *v389 = nullptr, *v390 = nullptr, *v391 = nullptr, *v392 = nullptr, *v393 = nullptr, *v394 = nullptr, *v395 = nullptr;
  uint32_t *v396 = nullptr, *v397 = nullptr, *v398 = nullptr, *v399 = nullptr, *v400 = nullptr, *v401 = nullptr, *v402 = nullptr, *v403 = nullptr;
  uint32_t *v404 = nullptr, *v405 = nullptr, *v406 = nullptr, *v407 = nullptr, *v408 = nullptr, *v409 = nullptr, *v410 = nullptr, *v411 = nullptr;
  uint32_t *v412 = nullptr, *v413 = nullptr, *v414 = nullptr, *v415 = nullptr, *v416 = nullptr, *v417 = nullptr, *v418 = nullptr, *v419 = nullptr;
  uint32_t *v420 = nullptr, *v421 = nullptr, *v422 = nullptr, *v423 = nullptr, *v424 = nullptr, *v425 = nullptr, *v426 = nullptr, *v427 = nullptr;
  uint32_t *v428 = nullptr, *v429 = nullptr, *v430 = nullptr, *v431 = nullptr, *v432 = nullptr, *v433 = nullptr, *v434 = nullptr, *v435 = nullptr;
  uint32_t *v436 = nullptr, *v437 = nullptr, *v438 = nullptr, *v439 = nullptr, *v440 = nullptr, *v441 = nullptr, *v442 = nullptr, *v443 = nullptr;
  uint32_t *v444 = nullptr, *v445 = nullptr, *v446 = nullptr, *v1168 = nullptr, *v1169 = nullptr, *v1170 = nullptr, *v1171 = nullptr, *v1172 = nullptr;
  uint32_t *v1173 = nullptr, *v1174 = nullptr, *v1175 = nullptr, *v1176 = nullptr, *v1177 = nullptr, *v1178 = nullptr, *v1179 = nullptr, *v1180 = nullptr;
  uint32_t *v1181 = nullptr, *v1182 = nullptr, *v1183 = nullptr, *v1184 = nullptr, *v1185 = nullptr, *v1186 = nullptr, *v1187 = nullptr, *v1188 = nullptr;
  uint32_t *v1189 = nullptr, *v1190 = nullptr, *v1191 = nullptr, *v1192 = nullptr, *v1193 = nullptr, *v1194 = nullptr, *v1195 = nullptr, *v1196 = nullptr;
  uint32_t *v1197 = nullptr, *v1198 = nullptr, *v1199 = nullptr, *v1200 = nullptr, *v1201 = nullptr, *v1202 = nullptr, *v1203 = nullptr, *v1204 = nullptr;
  uint32_t *v1205 = nullptr, *v1206 = nullptr, *v1207 = nullptr, *v1208 = nullptr, *v1209 = nullptr, *v1210 = nullptr, *v1211 = nullptr, *v1212 = nullptr;
  uint32_t *v1213 = nullptr, *v1214 = nullptr, *v1215 = nullptr, *v1216 = nullptr, *v1217 = nullptr, *v1218 = nullptr, *v1219 = nullptr, *v1220 = nullptr;
  uint32_t *v1221 = nullptr, *v1222 = nullptr, *v1223 = nullptr, *v1224 = nullptr, *v1225 = nullptr, *v1226 = nullptr, *v1227 = nullptr, *v1228 = nullptr;
  uint32_t *v1229 = nullptr, *v1230 = nullptr, *v1231 = nullptr, *v1232 = nullptr, *v1233 = nullptr, *v1234 = nullptr, *v1235 = nullptr, *v1236 = nullptr;
  uint32_t *v1237 = nullptr, *v1238 = nullptr, *v1239 = nullptr, *v1240 = nullptr, *v1241 = nullptr, *v1242 = nullptr, *v1243 = nullptr, *v1244 = nullptr;
  uint32_t *v1245 = nullptr, *v1246 = nullptr, *v1247 = nullptr, *v1248 = nullptr, *v1249 = nullptr, *v1250 = nullptr, *v1251 = nullptr, *v1252 = nullptr;
  uint32_t *v1253 = nullptr, *v1254 = nullptr, *v1255 = nullptr, *v1256 = nullptr, *v1257 = nullptr, *v1258 = nullptr, *v1259 = nullptr, *v1260 = nullptr;
  uint32_t *v1261 = nullptr, *v1262 = nullptr, *v1263 = nullptr, *v1264 = nullptr, *v1265 = nullptr, *v1266 = nullptr, *v1267 = nullptr, *v1268 = nullptr;
  uint32_t *v1269 = nullptr, *v1270 = nullptr, *v1271 = nullptr, *v1272 = nullptr, *v1273 = nullptr, *v1274 = nullptr, *v1275 = nullptr, *v1276 = nullptr;
  uint32_t *v1277 = nullptr, *v1278 = nullptr, *v1279 = nullptr, *v1280 = nullptr, *v1281 = nullptr, *v1282 = nullptr, *v1283 = nullptr, *v1284 = nullptr;
  uint32_t *v1285 = nullptr, *v1286 = nullptr, *v1287 = nullptr, *v1288 = nullptr, *v1289 = nullptr, *v1290 = nullptr, *v1291 = nullptr, *v1292 = nullptr;
  uint32_t *v1293 = nullptr, *v1294 = nullptr, *v1295 = nullptr, *v1296 = nullptr, *v1297 = nullptr, *v1298 = nullptr, *v1299 = nullptr, *v1300 = nullptr;
  uint32_t *v1301 = nullptr, *v1302 = nullptr, *v1303 = nullptr, *v1304 = nullptr, *v1305 = nullptr, *v1306 = nullptr, *v1307 = nullptr, *v1308 = nullptr;
  uint32_t *v1309 = nullptr, *v1310 = nullptr, *v1311 = nullptr, *v1312 = nullptr, *v1313 = nullptr, *v1314 = nullptr, *v1315 = nullptr, *v1316 = nullptr;
  uint32_t *v1317 = nullptr, *v1318 = nullptr, *v1319 = nullptr, *v1320 = nullptr, *v1321 = nullptr, *v1322 = nullptr, *v1323 = nullptr, *v1324 = nullptr;
  uint32_t *v1325 = nullptr;

  uint32_t g4_scope_guard = 0;
  sub_4ECA90(&g4_scope_guard);
  if ( g4_xmldata_loaded == 0 )
  {
    g4_xmldata_loaded = 1;
    xmldata::RegisterSchema_animation_sets(-1555574575);
    v2 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("animation_sets.xml.bin"));
    v3 = v2;
    if ( v2 != 0 && G4_VCALL<int>(v2, 20) != 0 )
    {
      sub_A48D90(v3, 0, 0, 0);
      sub_B11300(0xA078B2C1);
      G4_VCALL<void>(v3, 4);
    }
    v4 = reinterpret_cast<uint32_t *>(sub_B0E610(0x55CE8237u));
    sub_AFC3F0(v4, const_cast<char *>("ID"));
    sub_AFC3F0(v4, const_cast<char *>("type"));
    sub_AFC3F0(v4, const_cast<char *>("loop"));
    sub_AFC3F0(v4, const_cast<char *>("interpolation"));
    v5 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("animationdescriptors.xml.bin"));
    v6 = v5;
    if ( v5 != 0 && G4_VCALL<int>(v5, 20) != 0 )
    {
      sub_A48F60(v6, 0, 0, 0);
      sub_B11EF0(0x72852A4Eu);
      G4_VCALL<void>(v6, 4);
    }
    v1216 = reinterpret_cast<uint32_t *>(sub_B0E610(0xDE1520AF));
    sub_AFC3F0(v1216, const_cast<char *>("inputFolder"));
    sub_AFC3F0(v1216, const_cast<char *>("outputFolder"));
    sub_AFC3F0(v1216, const_cast<char *>("textureFolder"));
    sub_AFC3F0(v1216, const_cast<char *>("cityTextureFolder"));
    sub_AFC3F0(v1216, const_cast<char *>("shaderPak"));
    sub_AFC3F0(v1216, const_cast<char *>("havokFolder"));
    sub_AFC3F0(v1216, const_cast<char *>("tmpFolder"));
    sub_AFC3F0(v1216, const_cast<char *>("reportVertexFile"));
    sub_AFC3F0(v1216, const_cast<char *>("reportVertexHighWatermark"));
    v1217 = reinterpret_cast<uint32_t *>(sub_B0E610(0xF03F1ED8));
    sub_AFC3F0(v1217, const_cast<char *>("inputFile"));
    sub_AFC3F0(v1217, const_cast<char *>("outputFile"));
    sub_AFC3F0(v1217, const_cast<char *>("cityTextureFolder"));
    sub_AFC3F0(v1217, const_cast<char *>("shaderPak"));
    sub_AFC3F0(v1217, const_cast<char *>("defaultEffects"));
    sub_AFC3F0(v1217, const_cast<char *>("customEffects"));
    sub_AFC3F0(v1217, const_cast<char *>("reportVertexFile"));
    sub_AFC3F0(v1217, const_cast<char *>("reportVertexHighWatermark"));
    v7 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("batch_generator.xml.bin"));
    v8 = v7;
    if ( v7 != 0 && G4_VCALL<int>(v7, 20) != 0 )
    {
      sub_A49130(v8, 0, 0, 0);
      v1214 = reinterpret_cast<uint32_t *>(sub_B110B0(0xF96701FB));
      sub_AFC4B0(v1214, const_cast<char *>("bydefault"));
      sub_AFC4B0(v1214, const_cast<char *>("other"));
      sub_A492E0(v8, 0, 0, 0);
      v1215 = reinterpret_cast<uint32_t *>(sub_B110B0(0x47EBCCF9u));
      sub_AFC4B0(v1215, const_cast<char *>("bydefault"));
      sub_AFC4B0(v1215, const_cast<char *>("other"));
      G4_VCALL<void>(v8, 4);
    }
    v9 = reinterpret_cast<uint32_t *>(sub_B0E610(0xB7897CFF));
    sub_AFC3F0(v9, const_cast<char *>("lookAtX"));
    sub_AFC3F0(v9, const_cast<char *>("lookAtY"));
    sub_AFC3F0(v9, const_cast<char *>("lookAtZ"));
    sub_AFC3F0(v9, const_cast<char *>("projOffX"));
    sub_AFC3F0(v9, const_cast<char *>("projOffY"));
    sub_AFC3F0(v9, const_cast<char *>("projOffZ"));
    sub_AFC3F0(v9, const_cast<char *>("minVerticalAngle"));
    sub_AFC3F0(v9, const_cast<char *>("maxVerticalAngle"));
    sub_AFC3F0(v9, const_cast<char *>("elevation"));
    sub_AFC3F0(v9, const_cast<char *>("walkingDistance"));
    sub_AFC3F0(v9, const_cast<char *>("runningDistance"));
    sub_AFC3F0(v9, const_cast<char *>("sprintingDistance"));
    sub_AFC3F0(v9, const_cast<char *>("distanceChangeSpeed"));
    sub_AFC3F0(v9, const_cast<char *>("swipeTargetTransitionSpeed"));
    sub_AFC3F0(v9, const_cast<char *>("transitionSpeed"));
    sub_AFC3F0(v9, const_cast<char *>("fov"));
    sub_AFC3F0(v9, const_cast<char *>("brawlCamTimer"));
    sub_AFC3F0(v9, const_cast<char *>("backwardAngleFactor"));
    sub_AFC3F0(v9, const_cast<char *>("forwardAngleFactor"));
    sub_AFC3F0(v9, const_cast<char *>("elevationOffsetDown"));
    sub_AFC3F0(v9, const_cast<char *>("elevationOffsetUp"));
    sub_AFC3F0(v9, const_cast<char *>("elevationOffsetMaxVel"));
    sub_AFC3F0(v9, const_cast<char *>("minDistance"));
    sub_AFC3F0(v9, const_cast<char *>("maxDistance"));
    sub_AFC3F0(v9, const_cast<char *>("distanceLowerSpeedThreshold"));
    sub_AFC3F0(v9, const_cast<char *>("distanceUpperSpeedThreshold"));
    sub_AFC3F0(v9, const_cast<char *>("distanceMaxChange"));
    sub_AFC3F0(v9, const_cast<char *>("CameraFastCorrectionMinSpeedPercent"));
    sub_AFC3F0(v9, const_cast<char *>("CameraFastCorrectionMaxSpeedPercent"));
    sub_AFC3F0(v9, const_cast<char *>("CameraFastCorrectionTime"));
    sub_AFC3F0(v9, const_cast<char *>("CameraFastCorrectionStartDriftTimer"));
    sub_AFC3F0(v9, const_cast<char *>("CameraFastCorrectionStopDriftTimer"));
    sub_AFC3F0(v9, const_cast<char *>("CameraFastCorrectionDriftingFactor"));
    sub_AFC3F0(v9, const_cast<char *>("CameraFastCorrectionMaxSpeedPercent_Drifting"));
    sub_AFC3F0(v9, const_cast<char *>("blurCenterX"));
    sub_AFC3F0(v9, const_cast<char *>("blurCenterY"));
    sub_AFC3F0(v9, const_cast<char *>("deadZone"));
    sub_AFC3F0(v9, const_cast<char *>("blurMaxScale"));
    sub_AFC3F0(v9, const_cast<char *>("blurMinSpeed"));
    sub_AFC3F0(v9, const_cast<char *>("blurMaxSpeed"));
    sub_AFC3F0(v9, const_cast<char *>("blurFadeStart"));
    sub_AFC3F0(v9, const_cast<char *>("blurFadeEnd"));
    sub_AFC3F0(v9, const_cast<char *>("flyingResetCoef"));
    sub_AFC3F0(v9, const_cast<char *>("NPCMovingFactor"));
    sub_AFC3F0(v9, const_cast<char *>("doubleTapSpeed"));
    sub_AFC3F0(v9, const_cast<char *>("targetTapDistance"));
    sub_AFC3F0(v9, const_cast<char *>("touchHorizontalDirection"));
    sub_AFC3F0(v9, const_cast<char *>("touchHorizontalSpeed"));
    sub_AFC3F0(v9, const_cast<char *>("touchVerticalDirection"));
    sub_AFC3F0(v9, const_cast<char *>("touchVerticalSpeed"));
    sub_AFC3F0(v9, const_cast<char *>("focusDistance"));
    sub_AFC3F0(v9, const_cast<char *>("maxZoomIn"));
    sub_AFC3F0(v9, const_cast<char *>("maxZoomOut"));
    sub_AFC3F0(v9, const_cast<char *>("highAngle"));
    sub_AFC3F0(v9, const_cast<char *>("lowAngle"));
    sub_AFC3F0(v9, const_cast<char *>("swipeFactor"));
    sub_AFC3F0(v9, const_cast<char *>("recoilDuration"));
    sub_AFC3F0(v9, const_cast<char *>("recoilReturnCutoffPercent"));
    sub_AFC3F0(v9, const_cast<char *>("recoilZ"));
    sub_AFC3F0(v9, const_cast<char *>("wobbleFactor"));
    sub_AFC3F0(v9, const_cast<char *>("zoomSpeed"));
    sub_AFC3F0(v9, const_cast<char *>("inverseX"));
    sub_AFC3F0(v9, const_cast<char *>("inverseY"));
    sub_AFC3F0(v9, const_cast<char *>("camera_center_reset"));
    v10 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("camera_presets.xml.bin"));
    v11 = v10;
    if ( v10 != 0 && G4_VCALL<int>(v10, 20) != 0 )
    {
      sub_A494B0(v11, 0, 0, 0);
      sub_B1D0F0(0xEE949914);
      G4_VCALL<void>(v11, 4);
    }
    v12 = reinterpret_cast<uint32_t *>(sub_B0E610(0x9F16F354));
    sub_AFC3F0(v12, const_cast<char *>("FollowCamera"));
    sub_AFC3F0(v12, const_cast<char *>("CoverStanding"));
    sub_AFC3F0(v12, const_cast<char *>("CoverStandingLeft"));
    sub_AFC3F0(v12, const_cast<char *>("CoverStandingRight"));
    sub_AFC3F0(v12, const_cast<char *>("CoverCrouch"));
    sub_AFC3F0(v12, const_cast<char *>("CoverCrouchLeft"));
    sub_AFC3F0(v12, const_cast<char *>("CoverCrouchRight"));
    sub_AFC3F0(v12, const_cast<char *>("BrawlingCamera"));
    sub_AFC3F0(v12, const_cast<char *>("ParachuteCamera"));
    sub_AFC3F0(v12, const_cast<char *>("SkydivingCamera"));
    sub_AFC3F0(v12, const_cast<char *>("SwimCamera"));
    sub_AFC3F0(v12, const_cast<char *>("EjectCamera"));
    v13 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("camera_presets_groups.xml.bin"));
    v14 = v13;
    if ( v13 != 0 && G4_VCALL<int>(v13, 20) != 0 )
    {
      sub_A49680(v14, 0, 0, 0);
      v446 = reinterpret_cast<uint32_t *>(sub_B110B0(0x14ACFF55u));
      sub_AFC4B0(v446, const_cast<char *>("Default"));
      sub_AFC4B0(v446, const_cast<char *>("Interior"));
      G4_VCALL<void>(v14, 4);
    }
    v15 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("character_sfx.xml.bin"));
    v16 = v15;
    if ( v15 != 0 && G4_VCALL<int>(v15, 20) != 0 )
    {
      sub_A49850(v16, 0, 0, 0);
      sub_B1D560(0xBD54C008);
      G4_VCALL<void>(v16, 4);
    }
    v17 = reinterpret_cast<uint32_t *>(sub_B0E610(0xDA494F05));
    sub_AFC3F0(v17, const_cast<char *>("aimedAt"));
    sub_AFC3F0(v17, const_cast<char *>("arresting"));
    sub_AFC3F0(v17, const_cast<char *>("attacked"));
    sub_AFC3F0(v17, const_cast<char *>("bikeHorn"));
    sub_AFC3F0(v17, const_cast<char *>("bikeRunningOver"));
    sub_AFC3F0(v17, const_cast<char *>("bikeStolen"));
    sub_AFC3F0(v17, const_cast<char *>("boardBoat"));
    sub_AFC3F0(v17, const_cast<char *>("chasing"));
    sub_AFC3F0(v17, const_cast<char *>("drown"));
    sub_AFC3F0(v17, const_cast<char *>("drowning"));
    sub_AFC3F0(v17, const_cast<char *>("hit"));
    sub_AFC3F0(v17, const_cast<char *>("impact_bullet"));
    sub_AFC3F0(v17, const_cast<char *>("impact_car"));
    sub_AFC3F0(v17, const_cast<char *>("impact_punch"));
    sub_AFC3F0(v17, const_cast<char *>("name"));
    sub_AFC3F0(v17, const_cast<char *>("roll"));
    sub_AFC3F0(v17, const_cast<char *>("splash"));
    sub_AFC3F0(v17, const_cast<char *>("steps_run"));
    sub_AFC3F0(v17, const_cast<char *>("steps_sprint"));
    sub_AFC3F0(v17, const_cast<char *>("steps_walk"));
    sub_AFC3F0(v17, const_cast<char *>("vehicleBumped"));
    sub_AFC3F0(v17, const_cast<char *>("vehicleHorn"));
    sub_AFC3F0(v17, const_cast<char *>("woosh_punch"));
    sub_AFC3F0(v17, const_cast<char *>("aggro"));
    sub_AFC3F0(v17, const_cast<char *>("blocked"));
    sub_AFC3F0(v17, const_cast<char *>("boardBike"));
    sub_AFC3F0(v17, const_cast<char *>("boardChopper"));
    sub_AFC3F0(v17, const_cast<char *>("boardPlane"));
    sub_AFC3F0(v17, const_cast<char *>("boardTank"));
    sub_AFC3F0(v17, const_cast<char *>("boardVehicle"));
    sub_AFC3F0(v17, const_cast<char *>("bumped"));
    sub_AFC3F0(v17, const_cast<char *>("attacking"));
    sub_AFC3F0(v17, const_cast<char *>("attackingCop"));
    sub_AFC3F0(v17, const_cast<char *>("attackStrong"));
    sub_AFC3F0(v17, const_cast<char *>("attackWeak"));
    sub_AFC3F0(v17, const_cast<char *>("carStolen"));
    sub_AFC3F0(v17, const_cast<char *>("climb"));
    sub_AFC3F0(v17, const_cast<char *>("copMegaphone"));
    sub_AFC3F0(v17, const_cast<char *>("getUp"));
    sub_AFC3F0(v17, const_cast<char *>("hijacking"));
    sub_AFC3F0(v17, const_cast<char *>("hijackingBike"));
    sub_AFC3F0(v17, const_cast<char *>("hijackingCar"));
    sub_AFC3F0(v17, const_cast<char *>("hurtStrong"));
    sub_AFC3F0(v17, const_cast<char *>("hurtWeak"));
    sub_AFC3F0(v17, const_cast<char *>("idle"));
    sub_AFC3F0(v17, const_cast<char *>("inCombat"));
    sub_AFC3F0(v17, const_cast<char *>("jBreathing"));
    sub_AFC3F0(v17, const_cast<char *>("jLand"));
    sub_AFC3F0(v17, const_cast<char *>("killed"));
    sub_AFC3F0(v17, const_cast<char *>("knockdown"));
    sub_AFC3F0(v17, const_cast<char *>("onFire"));
    sub_AFC3F0(v17, const_cast<char *>("panic"));
    sub_AFC3F0(v17, const_cast<char *>("vehicleRunningOver"));
    sub_AFC3F0(v17, const_cast<char *>("vehicleStolen"));
    sub_AFC3F0(v17, const_cast<char *>("waterSplash"));
    sub_AFC3F0(v17, const_cast<char *>("carHitFast"));
    sub_AFC3F0(v17, const_cast<char *>("carHitSlow"));
    sub_AFC3F0(v17, const_cast<char *>("fallDown"));
    sub_AFC3F0(v17, const_cast<char *>("breathCooldown"));
    sub_AFC3F0(v17, const_cast<char *>("freefall"));
    sub_AFC3F0(v17, const_cast<char *>("parachutefall"));
    sub_AFC3F0(v17, const_cast<char *>("parachuteRelease"));
    sub_AFC3F0(v17, const_cast<char *>("parachuteBreak"));
    v18 = reinterpret_cast<uint32_t *>(sub_B0E610(0x26D0780Fu));
    sub_AFC3F0(v18, const_cast<char *>("Grapher"));
    sub_AFC3F0(v18, const_cast<char *>("Apex"));
    sub_AFC3F0(v18, const_cast<char *>("Mission"));
    sub_AFC3F0(v18, const_cast<char *>("DebugColor"));
    v19 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("cheat_scripts.xml.bin"));
    v20 = v19;
    if ( v19 != 0 && G4_VCALL<int>(v19, 20) != 0 )
    {
      sub_A49A20(v20, 0, 0, 0);
      sub_B1D990(0x7AD9E3E0u);
      G4_VCALL<void>(v20, 4);
    }
    v21 = reinterpret_cast<uint32_t *>(sub_B0E610(0xF9F69843));
    sub_AFC3F0(v21, const_cast<char *>("Ids"));
    v22 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("cheat_settings.xml.bin"));
    v23 = v22;
    if ( v22 != 0 && G4_VCALL<int>(v22, 20) != 0 )
    {
      sub_A49BF0(v23, 0, 0, 0);
      v445 = reinterpret_cast<uint32_t *>(sub_B110B0(0xFE42CE1u));
      sub_AFC4B0(v445, const_cast<char *>("Counters"));
      G4_VCALL<void>(v23, 4);
    }
    v24 = reinterpret_cast<uint32_t *>(sub_B0E610(0x5D36D863u));
    sub_AFC3F0(v24, const_cast<char *>("ID"));
    v25 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("classesanim_id.xml.bin"));
    v26 = v25;
    if ( v25 != 0 && G4_VCALL<int>(v25, 20) != 0 )
    {
      sub_A49DA0(v26, 0, 0, 0);
      sub_B1E660(0x5EA96B2u);
      sub_A49F70(v26, 0, 0, 0);
      sub_B29870(0xCB40A34C);
      sub_A4A140(v26, 0, 0, 0);
      sub_B34A80(0xCB0F3088);
      G4_VCALL<void>(v26, 4);
    }
    v27 = reinterpret_cast<uint32_t *>(sub_B0E610(0x40DCD21Fu));
    sub_AFC3F0(v27, const_cast<char *>("ids"));
    v28 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("dialog_sounds.xml.bin"));
    v29 = v28;
    if ( v28 != 0 && G4_VCALL<int>(v28, 20) != 0 )
    {
      sub_A4A310(v29, 0, 0, 0);
      v444 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA57FE46C));
      sub_AFC4B0(v444, const_cast<char *>("Dialog_01"));
      G4_VCALL<void>(v29, 4);
    }
    v30 = reinterpret_cast<uint32_t *>(sub_B0E610(0x2BD93E55u));
    sub_AFC3F0(v30, const_cast<char *>("TitleID"));
    sub_AFC3F0(v30, const_cast<char *>("SubTitleID"));
    sub_AFC3F0(v30, const_cast<char *>("ContentID"));
    sub_AFC3F0(v30, const_cast<char *>("IsSkippable"));
    sub_AFC3F0(v30, const_cast<char *>("DurationMS"));
    sub_AFC3F0(v30, const_cast<char *>("Type"));
    sub_AFC3F0(v30, const_cast<char *>("IsUpdatable"));
    sub_AFC3F0(v30, const_cast<char *>("GamepadCancelBtn"));
    sub_AFC3F0(v30, const_cast<char *>("GamepadOkBtn"));
    sub_AFC3F0(v30, const_cast<char *>("GamepadCancelFlashName"));
    sub_AFC3F0(v30, const_cast<char *>("GamepadOkFlashName"));
    v31 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("dialogs_.xml.bin"));
    v32 = v31;
    if ( v31 != 0 && G4_VCALL<int>(v31, 20) != 0 )
    {
      sub_A4A4C0(v32, 0, 0, 0);
      v443 = reinterpret_cast<uint32_t *>(sub_B110B0(0xB4A46154));
      sub_AFC4B0(v443, const_cast<char *>("DefaultDialog"));
      sub_AFC4B0(v443, const_cast<char *>("GameActionDialog"));
      sub_AFC4B0(v443, const_cast<char *>("ObjectiveDialog"));
      sub_AFC4B0(v443, const_cast<char *>("ObjectiveDialogTutorial"));
      sub_AFC4B0(v443, const_cast<char *>("SubObjectiveDialog_0"));
      sub_AFC4B0(v443, const_cast<char *>("SubObjectiveDialog_1"));
      sub_AFC4B0(v443, const_cast<char *>("SubObjectiveDialog_Stars"));
      sub_AFC4B0(v443, const_cast<char *>("SubObjectiveDialog_Progress"));
      sub_AFC4B0(v443, const_cast<char *>("TimerDialog"));
      sub_AFC4B0(v443, const_cast<char *>("TalkDialog"));
      sub_AFC4B0(v443, const_cast<char *>("CenteredDialog"));
      sub_AFC4B0(v443, const_cast<char *>("AchievementDialog"));
      sub_AFC4B0(v443, const_cast<char *>("TutorialDialog"));
      sub_AFC4B0(v443, const_cast<char *>("MissionStartDialog"));
      sub_AFC4B0(v443, const_cast<char *>("MissionZoneEnterDialog"));
      sub_AFC4B0(v443, const_cast<char *>("SubtitleDialog"));
      sub_AFC4B0(v443, const_cast<char *>("MissionIntroDialog"));
      sub_AFC4B0(v443, const_cast<char *>("EndScreenDialog"));
      sub_AFC4B0(v443, const_cast<char *>("MoneyDialog"));
      sub_AFC4B0(v443, const_cast<char *>("MissionEndDialog"));
      sub_AFC4B0(v443, const_cast<char *>("WarningDialog"));
      sub_AFC4B0(v443, const_cast<char *>("WaveCompleteDialog"));
      sub_AFC4B0(v443, const_cast<char *>("WastedUnskippableDialog"));
      sub_AFC4B0(v443, const_cast<char *>("WastedSkippableDialog"));
      sub_AFC4B0(v443, const_cast<char *>("MissionFailedDialog"));
      sub_AFC4B0(v443, const_cast<char *>("RewardDialog"));
      sub_AFC4B0(v443, const_cast<char *>("RacestartCountdownDialog"));
      sub_AFC4B0(v443, const_cast<char *>("RealEstateDialog"));
      sub_AFC4B0(v443, const_cast<char *>("CreditsDialog"));
      sub_AFC4B0(v443, const_cast<char *>("VehicleDialog"));
      G4_VCALL<void>(v32, 4);
    }
    v33 = reinterpret_cast<uint32_t *>(sub_B0E610(0x9F5A815A));
    sub_AFC3F0(v33, const_cast<char *>("Name"));
    sub_AFC3F0(v33, const_cast<char *>("RA_Kill"));
    sub_AFC3F0(v33, const_cast<char *>("StatCounter_Kill"));
    v34 = reinterpret_cast<uint32_t *>(sub_B0E610(0x541EF90Eu));
    sub_AFC3F0(v34, const_cast<char *>("Who"));
    sub_AFC3F0(v34, const_cast<char *>("Toward"));
    sub_AFC3F0(v34, const_cast<char *>("Value"));
    v35 = reinterpret_cast<uint32_t *>(sub_B0E610(0xE4691D20));
    sub_AFC3F0(v35, const_cast<char *>("RequiredReputation"));
    sub_AFC3F0(v35, const_cast<char *>("FollowerLevels"));
    sub_AFC3F0(v35, const_cast<char *>("UnlockedClothes"));
    sub_AFC3F0(v35, const_cast<char *>("UnlockedWeapons"));
    sub_AFC3F0(v35, const_cast<char *>("UnlockedVehicles"));
    sub_AFC3F0(v35, const_cast<char *>("UnlockedSafehouses"));
    v36 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("factions_.xml.bin"));
    v37 = v36;
    if ( v36 != 0 && G4_VCALL<int>(v36, 20) != 0 )
    {
      sub_A4A670(v37, 0, 0, 0);
      v441 = reinterpret_cast<uint32_t *>(sub_B110B0(0x3F4F058u));
      sub_AFC4B0(v441, const_cast<char *>("Player"));
      sub_AFC4B0(v441, const_cast<char *>("Civilian"));
      sub_AFC4B0(v441, const_cast<char *>("Police"));
      sub_AFC4B0(v441, const_cast<char *>("Bikers"));
      sub_AFC4B0(v441, const_cast<char *>("Latinos"));
      sub_AFC4B0(v441, const_cast<char *>("Mafia"));
      sub_AFC4B0(v441, const_cast<char *>("Thugs"));
      sub_AFC4B0(v441, const_cast<char *>("Neutral"));
      sub_AFC4B0(v441, const_cast<char *>("Aliens"));
      sub_AFC4B0(v441, const_cast<char *>("MIBs"));
      sub_A4A840(v37, 0, 0, 0);
      sub_B3FC90(0xEEE382E1);
      sub_A4AA10(v37, 0, 0, 0);
      v442 = reinterpret_cast<uint32_t *>(sub_B110B0(0x15F01454u));
      sub_AFC4B0(v442, const_cast<char *>("Level_01"));
      sub_AFC4B0(v442, const_cast<char *>("Level_02"));
      sub_AFC4B0(v442, const_cast<char *>("Level_03"));
      sub_AFC4B0(v442, const_cast<char *>("Level_04"));
      sub_AFC4B0(v442, const_cast<char *>("Level_05"));
      sub_AFC4B0(v442, const_cast<char *>("Level_06"));
      sub_AFC4B0(v442, const_cast<char *>("Level_07"));
      sub_AFC4B0(v442, const_cast<char *>("Level_08"));
      sub_AFC4B0(v442, const_cast<char *>("Level_09"));
      sub_AFC4B0(v442, const_cast<char *>("Level_10"));
      sub_AFC4B0(v442, const_cast<char *>("Level_11"));
      sub_AFC4B0(v442, const_cast<char *>("Level_12"));
      sub_AFC4B0(v442, const_cast<char *>("Level_13"));
      sub_AFC4B0(v442, const_cast<char *>("Level_14"));
      sub_AFC4B0(v442, const_cast<char *>("Level_15"));
      sub_AFC4B0(v442, const_cast<char *>("Level_16"));
      sub_AFC4B0(v442, const_cast<char *>("Level_17"));
      sub_AFC4B0(v442, const_cast<char *>("Level_18"));
      sub_AFC4B0(v442, const_cast<char *>("Level_19"));
      sub_AFC4B0(v442, const_cast<char *>("Level_20"));
      sub_AFC4B0(v442, const_cast<char *>("Level_21"));
      sub_AFC4B0(v442, const_cast<char *>("Level_22"));
      sub_AFC4B0(v442, const_cast<char *>("Level_23"));
      sub_AFC4B0(v442, const_cast<char *>("Level_24"));
      sub_AFC4B0(v442, const_cast<char *>("Level_25"));
      G4_VCALL<void>(v37, 4);
    }
    v38 = reinterpret_cast<uint32_t *>(sub_B0E610(0xAC0CDBB0));
    sub_AFC3F0(v38, const_cast<char *>("Name"));
    sub_AFC3F0(v38, const_cast<char *>("Head"));
    sub_AFC3F0(v38, const_cast<char *>("Torso"));
    sub_AFC3F0(v38, const_cast<char *>("Legs"));
    sub_AFC3F0(v38, const_cast<char *>("Weapon"));
    v39 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("gang_battles.xml.bin"));
    v40 = v39;
    if ( v39 != 0 && G4_VCALL<int>(v39, 20) != 0 )
    {
      sub_A4ABC0(v40, 0, 0, 0);
      v440 = reinterpret_cast<uint32_t *>(sub_B110B0(0xEC0CB820));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary1"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary2"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary3"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary4"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary5"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary6"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary7"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary8"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary9"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary10"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary11"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary12"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary13"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary14"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary15"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary16"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary17"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary18"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary19"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary20"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary21"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary22"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary23"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary24"));
      sub_AFC4B0(v440, const_cast<char *>("Mercenary25"));
      G4_VCALL<void>(v40, 4);
    }
    v41 = reinterpret_cast<uint32_t *>(sub_B0E610(0x7876B027u));
    sub_AFC3F0(v41, const_cast<char *>("HEAD"));
    sub_AFC3F0(v41, const_cast<char *>("TORSO"));
    sub_AFC3F0(v41, const_cast<char *>("LEGS"));
    v42 = reinterpret_cast<uint32_t *>(sub_B0E610(0x9CA491ED));
    sub_AFC3F0(v42, const_cast<char *>("CAR"));
    sub_AFC3F0(v42, const_cast<char *>("BOAT"));
    sub_AFC3F0(v42, const_cast<char *>("AIR"));
    v43 = reinterpret_cast<uint32_t *>(sub_B0E610(0x4AD7C4FDu));
    sub_AFC3F0(v43, const_cast<char *>("HeadModuleName"));
    sub_AFC3F0(v43, const_cast<char *>("TorsoModuleName"));
    sub_AFC3F0(v43, const_cast<char *>("LegsModuleName"));
    v44 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("gear_.xml.bin"));
    v45 = v44;
    if ( v44 != 0 && G4_VCALL<int>(v44, 20) != 0 )
    {
      sub_A4AD90(v45, 0, 0, 0);
      v437 = reinterpret_cast<uint32_t *>(sub_B110B0(0xF8BF069C));
      sub_AFC4B0(v437, const_cast<char *>("Custom_Category_01"));
      sub_A4AF60(v45, 0, 0, 0);
      v438 = reinterpret_cast<uint32_t *>(sub_B110B0(0xE4806C70));
      sub_AFC4B0(v438, const_cast<char *>("Vehicle_Category_01"));
      sub_A4B130(v45, 0, 0, 0);
      v439 = reinterpret_cast<uint32_t *>(sub_B110B0(0x2C096E56u));
      sub_AFC4B0(v439, const_cast<char *>("DefaultGear"));
      sub_AFC4B0(v439, const_cast<char *>("Gear_SuitVest"));
      sub_AFC4B0(v439, const_cast<char *>("Gear_Bare"));
      sub_AFC4B0(v439, const_cast<char *>("Gear_Jeans"));
      sub_AFC4B0(v439, const_cast<char *>("Gear_MMA"));
      sub_AFC4B0(v439, const_cast<char *>("Gear_Robbery"));
      sub_AFC4B0(v439, const_cast<char *>("Gear_Agent"));
      sub_AFC4B0(v439, const_cast<char *>("Gear_Santa"));
      G4_VCALL<void>(v45, 4);
    }
    v46 = reinterpret_cast<uint32_t *>(sub_B0E610(0xBE913A05));
    sub_AFC3F0(v46, const_cast<char *>("Upgrade1"));
    sub_AFC3F0(v46, const_cast<char *>("Upgrade2"));
    sub_AFC3F0(v46, const_cast<char *>("Upgrade3"));
    sub_AFC3F0(v46, const_cast<char *>("Upgrade4"));
    sub_AFC3F0(v46, const_cast<char *>("Upgrade5"));
    v47 = reinterpret_cast<uint32_t *>(sub_B0E610(0x5C113B52u));
    sub_AFC3F0(v47, const_cast<char *>("Icon"));
    sub_AFC3F0(v47, const_cast<char *>("SettingsID"));
    sub_AFC3F0(v47, const_cast<char *>("TrackingEventId"));
    v48 = reinterpret_cast<uint32_t *>(sub_B0E610(0x960D99F1));
    sub_AFC3F0(v48, const_cast<char *>("Name"));
    sub_AFC3F0(v48, const_cast<char *>("Description"));
    sub_AFC3F0(v48, const_cast<char *>("SPLevel"));
    sub_AFC3F0(v48, const_cast<char *>("Section"));
    sub_AFC3F0(v48, const_cast<char *>("Definitions"));
    sub_AFC3F0(v48, const_cast<char *>("Icon"));
    sub_AFC3F0(v48, const_cast<char *>("Model"));
    sub_AFC3F0(v48, const_cast<char *>("WeaponOid"));
    sub_AFC3F0(v48, const_cast<char *>("CameraDistance"));
    sub_AFC3F0(v48, const_cast<char *>("ModelRotationAngle"));
    sub_AFC3F0(v48, const_cast<char *>("AnimationNames"));
    sub_AFC3F0(v48, const_cast<char *>("VFXID"));
    sub_AFC3F0(v48, const_cast<char *>("TrackingEventId"));
    v49 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_abilities.xml.bin"));
    v50 = v49;
    if ( v49 != 0 && G4_VCALL<int>(v49, 20) != 0 )
    {
      sub_A4B300(v50, 0, 0, 0);
      v435 = reinterpret_cast<uint32_t *>(sub_B110B0(0x713AB4CDu));
      sub_AFC4B0(v435, const_cast<char *>("Level1"));
      sub_AFC4B0(v435, const_cast<char *>("Level2"));
      sub_AFC4B0(v435, const_cast<char *>("Level3"));
      sub_A4B4D0(v50, 0, 0, 0);
      v436 = reinterpret_cast<uint32_t *>(sub_B110B0(0xCA4E52E9));
      sub_AFC4B0(v436, const_cast<char *>("LAND_VEHICLES"));
      sub_AFC4B0(v436, const_cast<char *>("AIR_VEHICLES"));
      sub_AFC4B0(v436, const_cast<char *>("SEA_VEHICLES"));
      sub_AFC4B0(v436, const_cast<char *>("MELEE"));
      sub_AFC4B0(v436, const_cast<char *>("HANDGUNS"));
      sub_AFC4B0(v436, const_cast<char *>("SMG"));
      sub_AFC4B0(v436, const_cast<char *>("SHOTGUNS"));
      sub_AFC4B0(v436, const_cast<char *>("RIFLES"));
      sub_AFC4B0(v436, const_cast<char *>("SNIPER"));
      sub_AFC4B0(v436, const_cast<char *>("HEAVY"));
      sub_AFC4B0(v436, const_cast<char *>("THROWN"));
      sub_AFC4B0(v436, const_cast<char *>("HEALTH_ARMOR"));
      sub_AFC4B0(v436, const_cast<char *>("MOVEMENT"));
      sub_AFC4B0(v436, const_cast<char *>("POLICE"));
      sub_AFC4B0(v436, const_cast<char *>("LOOTING"));
      sub_AFC4B0(v436, const_cast<char *>("RESISTANCES"));
      sub_A4B6A0(v50, 0, 0, 0);
      sub_B40030(0xDA2498A3);
      G4_VCALL<void>(v50, 4);
    }
    v51 = reinterpret_cast<uint32_t *>(sub_B0E610(0x319C33C1u));
    sub_AFC3F0(v51, const_cast<char *>("StartFactor"));
    sub_AFC3F0(v51, const_cast<char *>("UpgradeFactor1"));
    sub_AFC3F0(v51, const_cast<char *>("UpgradeFactor2"));
    sub_AFC3F0(v51, const_cast<char *>("UpgradeFactor3"));
    sub_AFC3F0(v51, const_cast<char *>("UpgradeFactor4"));
    sub_AFC3F0(v51, const_cast<char *>("UpgradeFactor5"));
    sub_AFC3F0(v51, const_cast<char *>("NextBenefitString"));
    v52 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_abilities_definitions.xml.bin"));
    v53 = v52;
    if ( v52 != 0 && G4_VCALL<int>(v52, 20) != 0 )
    {
      sub_A4B870(v53, 0, 0, 0);
      sub_B40570(0x5D65262Eu);
      G4_VCALL<void>(v53, 4);
    }
    v54 = reinterpret_cast<uint32_t *>(sub_B0E610(0x339470ADu));
    sub_AFC3F0(v54, const_cast<char *>("Primitive"));
    sub_AFC3F0(v54, const_cast<char *>("ModelVerticalOffset"));
    v55 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_abilities_models.xml.bin"));
    v56 = v55;
    if ( v55 != 0 && G4_VCALL<int>(v55, 20) != 0 )
    {
      sub_A4BA40(v56, 0, 0, 0);
      v434 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA3ACB13A));
      sub_AFC4B0(v434, const_cast<char *>("MC"));
      sub_AFC4B0(v434, const_cast<char *>("NPC"));
      sub_AFC4B0(v434, const_cast<char *>("Boat"));
      sub_AFC4B0(v434, const_cast<char *>("GermanSuper"));
      sub_AFC4B0(v434, const_cast<char *>("Italiansuper"));
      sub_AFC4B0(v434, const_cast<char *>("Tank"));
      sub_AFC4B0(v434, const_cast<char *>("Seadoo"));
      sub_AFC4B0(v434, const_cast<char *>("Helico"));
      sub_AFC4B0(v434, const_cast<char *>("Airplane"));
      sub_AFC4B0(v434, const_cast<char *>("Hovercraft"));
      sub_AFC4B0(v434, const_cast<char *>("AirplaneArmy"));
      G4_VCALL<void>(v56, 4);
    }
    v57 = reinterpret_cast<uint32_t *>(sub_B0E610(0x3000A479u));
    sub_AFC3F0(v57, const_cast<char *>("knockDownLostHealthPercent"));
    sub_AFC3F0(v57, const_cast<char *>("knockDownDamageTimer"));
    sub_AFC3F0(v57, const_cast<char *>("knockOutLostHealthPercent"));
    sub_AFC3F0(v57, const_cast<char *>("knockOutDamageTimer"));
    sub_AFC3F0(v57, const_cast<char *>("meleeBlockPercent"));
    sub_AFC3F0(v57, const_cast<char *>("meleeFierceStrikePercent"));
    sub_AFC3F0(v57, const_cast<char *>("meleeMinTimeBetweenHits"));
    sub_AFC3F0(v57, const_cast<char *>("meleeMaxTimeBetweenHits"));
    sub_AFC3F0(v57, const_cast<char *>("meleeMinTimeBeforeReposition"));
    sub_AFC3F0(v57, const_cast<char *>("meleeMaxTimeBeforeReposition"));
    sub_AFC3F0(v57, const_cast<char *>("meleeMinTimeBeforeWaitReposition"));
    sub_AFC3F0(v57, const_cast<char *>("meleeMaxTimeBeforeWaitReposition"));
    sub_AFC3F0(v57, const_cast<char *>("fleePercent"));
    sub_AFC3F0(v57, const_cast<char *>("canUseOwnedVehiclesInCombat"));
    sub_AFC3F0(v57, const_cast<char *>("canStealVehiclesInCombat"));
    sub_AFC3F0(v57, const_cast<char *>("canThrowOutOfVehicleVehiclesInCombat"));
    sub_AFC3F0(v57, const_cast<char *>("distanceForThrowOutOfVehicleInCombat"));
    sub_AFC3F0(v57, const_cast<char *>("maxDetectionRadius"));
    sub_AFC3F0(v57, const_cast<char *>("detectionRadiusFactorWhenInVehicle"));
    sub_AFC3F0(v57, const_cast<char *>("vehicleChaseRadius"));
    sub_AFC3F0(v57, const_cast<char *>("socialInteractionPercent"));
    sub_AFC3F0(v57, const_cast<char *>("runMaxAnimScaling"));
    sub_AFC3F0(v57, const_cast<char *>("runMinAnimScaling"));
    sub_AFC3F0(v57, const_cast<char *>("walkMaxAnimScaling"));
    sub_AFC3F0(v57, const_cast<char *>("walkMinAnimScaling"));
    sub_AFC3F0(v57, const_cast<char *>("walkToRunThreshold"));
    v58 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_ai_properties.xml.bin"));
    v59 = v58;
    if ( v58 != 0 && G4_VCALL<int>(v58, 20) != 0 )
    {
      sub_A4BBF0(v59, 0, 0, 0);
      v433 = reinterpret_cast<uint32_t *>(sub_B110B0(0x3F5F2FCBu));
      sub_AFC4B0(v433, const_cast<char *>("Default"));
      sub_AFC4B0(v433, const_cast<char *>("Player"));
      sub_AFC4B0(v433, const_cast<char *>("NPC"));
      sub_AFC4B0(v433, const_cast<char *>("Brave"));
      sub_AFC4B0(v433, const_cast<char *>("HighValuableTarget"));
      sub_AFC4B0(v433, const_cast<char *>("Cop"));
      sub_AFC4B0(v433, const_cast<char *>("Bouncer"));
      sub_AFC4B0(v433, const_cast<char *>("Enemy"));
      sub_AFC4B0(v433, const_cast<char *>("C1M01_Opponent"));
      sub_AFC4B0(v433, const_cast<char *>("Frank"));
      sub_AFC4B0(v433, const_cast<char *>("ApachePilot"));
      sub_AFC4B0(v433, const_cast<char *>("AmericanPsycho"));
      sub_AFC4B0(v433, const_cast<char *>("MartialArts"));
      sub_AFC4B0(v433, const_cast<char *>("Tank"));
      sub_AFC4B0(v433, const_cast<char *>("Fleeing"));
      sub_AFC4B0(v433, const_cast<char *>("Weak"));
      G4_VCALL<void>(v59, 4);
    }
    v60 = reinterpret_cast<uint32_t *>(sub_B0E610(0x2DF35D69u));
    sub_AFC3F0(v60, const_cast<char *>("bdae"));
    sub_AFC3F0(v60, const_cast<char *>("bdaeLowRes"));
    sub_AFC3F0(v60, const_cast<char *>("bdae_collected"));
    sub_AFC3F0(v60, const_cast<char *>("icon_name"));
    sub_AFC3F0(v60, const_cast<char *>("pickup_vfxOID"));
    sub_AFC3F0(v60, const_cast<char *>("pickup_soundLabel"));
    sub_AFC3F0(v60, const_cast<char *>("TextColor"));
    sub_AFC3F0(v60, const_cast<char *>("ProgressionName"));
    sub_AFC3F0(v60, const_cast<char *>("TrackingEventId"));
    sub_AFC3F0(v60, const_cast<char *>("StatCounter_FoundAll"));
    sub_AFC3F0(v60, const_cast<char *>("stockOIDReward"));
    sub_AFC3F0(v60, const_cast<char *>("menuIcon"));
    sub_AFC3F0(v60, const_cast<char *>("cashReward"));
    sub_AFC3F0(v60, const_cast<char *>("mapIcon"));
    sub_AFC3F0(v60, const_cast<char *>("mapIconCategory"));
    v61 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_collectible.xml.bin"));
    v62 = v61;
    if ( v61 != 0 && G4_VCALL<int>(v61, 20) != 0 )
    {
      sub_A4BDA0(v62, 0, 0, 0);
      v432 = reinterpret_cast<uint32_t *>(sub_B110B0(0xB78F6AFu));
      sub_AFC4B0(v432, const_cast<char *>("VehicleParts"));
      sub_AFC4B0(v432, const_cast<char *>("WeaponParts"));
      sub_AFC4B0(v432, const_cast<char *>("ClothingBasket"));
      G4_VCALL<void>(v62, 4);
    }
    v63 = reinterpret_cast<uint32_t *>(sub_B0E610(0x1189C003u));
    sub_AFC3F0(v63, const_cast<char *>("CollectKeyPeriodTime"));
    sub_AFC3F0(v63, const_cast<char *>("CollectKeyNum"));
    v64 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_daily_gifts.xml.bin"));
    v65 = v64;
    if ( v64 != 0 && G4_VCALL<int>(v64, 20) != 0 )
    {
      sub_A4BF70(v65, 0, 0, 0);
      v431 = reinterpret_cast<uint32_t *>(sub_B110B0(0xAFAB7D7F));
      sub_AFC4B0(v431, const_cast<char *>("Default"));
      G4_VCALL<void>(v65, 4);
    }
    v66 = reinterpret_cast<uint32_t *>(sub_B0E610(0x32EBA4C3u));
    sub_AFC3F0(v66, const_cast<char *>("Type"));
    sub_AFC3F0(v66, const_cast<char *>("OnCharacterHitVFX"));
    sub_AFC3F0(v66, const_cast<char *>("OnVehicleHitVFX"));
    sub_AFC3F0(v66, const_cast<char *>("OnSceneHitVFX"));
    v67 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_damageinfo.xml.bin"));
    v68 = v67;
    if ( v67 != 0 && G4_VCALL<int>(v67, 20) != 0 )
    {
      sub_A4C120(v68, 0, 0, 0);
      v430 = reinterpret_cast<uint32_t *>(sub_B110B0(0xD13F524F));
      sub_AFC4B0(v430, const_cast<char *>("Bullet"));
      sub_AFC4B0(v430, const_cast<char *>("BulletMediumBlood"));
      sub_AFC4B0(v430, const_cast<char *>("BulletBigBlood"));
      sub_AFC4B0(v430, const_cast<char *>("Projectile"));
      sub_AFC4B0(v430, const_cast<char *>("Melee"));
      sub_AFC4B0(v430, const_cast<char *>("Slashing"));
      sub_AFC4B0(v430, const_cast<char *>("Physical"));
      sub_AFC4B0(v430, const_cast<char *>("Explosion"));
      sub_AFC4B0(v430, const_cast<char *>("Fire"));
      sub_AFC4B0(v430, const_cast<char *>("Toxic"));
      sub_AFC4B0(v430, const_cast<char *>("Drowning"));
      sub_AFC4B0(v430, const_cast<char *>("Fall"));
      sub_AFC4B0(v430, const_cast<char *>("Crushing"));
      sub_AFC4B0(v430, const_cast<char *>("VehicleImpact"));
      sub_AFC4B0(v430, const_cast<char *>("Rotor"));
      sub_AFC4B0(v430, const_cast<char *>("Mortal"));
      sub_AFC4B0(v430, const_cast<char *>("Percent"));
      sub_AFC4B0(v430, const_cast<char *>("Tesla"));
      G4_VCALL<void>(v68, 4);
    }
    v69 = reinterpret_cast<uint32_t *>(sub_B0E610(0x79316FBBu));
    sub_AFC3F0(v69, const_cast<char *>("x"));
    sub_AFC3F0(v69, const_cast<char *>("y"));
    sub_AFC3F0(v69, const_cast<char *>("z"));
    v70 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_daytime.xml.bin"));
    v71 = v70;
    if ( v70 != 0 && G4_VCALL<int>(v70, 20) != 0 )
    {
      sub_A4C2F0(v71, 0, 0, 0);
      v429 = reinterpret_cast<uint32_t *>(sub_B110B0(0x71EEAB61u));
      sub_AFC4B0(v429, const_cast<char *>("Set0"));
      sub_AFC4B0(v429, const_cast<char *>("Set1"));
      sub_AFC4B0(v429, const_cast<char *>("Set2"));
      G4_VCALL<void>(v71, 4);
    }
    v72 = reinterpret_cast<uint32_t *>(sub_B0E610(0x74964551u));
    sub_AFC3F0(v72, const_cast<char *>("Type"));
    sub_AFC3F0(v72, const_cast<char *>("FadeInDuration"));
    sub_AFC3F0(v72, const_cast<char *>("FadeOutDuration"));
    sub_AFC3F0(v72, const_cast<char *>("MuteSound"));
    v73 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_fadeinfos.xml.bin"));
    v74 = v73;
    if ( v73 != 0 && G4_VCALL<int>(v73, 20) != 0 )
    {
      sub_A4C4C0(v74, 0, 0, 0);
      v428 = reinterpret_cast<uint32_t *>(sub_B110B0(0x94781A91));
      sub_AFC4B0(v428, const_cast<char *>("Menus"));
      sub_AFC4B0(v428, const_cast<char *>("MenusFadeIn"));
      sub_AFC4B0(v428, const_cast<char *>("Script"));
      sub_AFC4B0(v428, const_cast<char *>("ScriptNoSound"));
      sub_AFC4B0(v428, const_cast<char *>("HardcodedIn_GrapherChangeLocation"));
      sub_AFC4B0(v428, const_cast<char *>("HardcodedIn_MissionAbort"));
      sub_AFC4B0(v428, const_cast<char *>("CinematicAnimEvent"));
      sub_AFC4B0(v428, const_cast<char *>("CinematicAnimEventMute"));
      sub_AFC4B0(v428, const_cast<char *>("HardcodedIn_CinematicPlay"));
      sub_AFC4B0(v428, const_cast<char *>("HardcodedIn_GrapherMissionUnload"));
      sub_AFC4B0(v428, const_cast<char *>("HardcodedIn_GameStartModuleRespawnPin"));
      sub_AFC4B0(v428, const_cast<char *>("HardcodedIn_GameStartCinematicSkipPin"));
      sub_AFC4B0(v428, const_cast<char *>("HardcodedIn_GameStartMission"));
      G4_VCALL<void>(v74, 4);
    }
    v75 = reinterpret_cast<uint32_t *>(sub_B0E610(0xAE7E5u));
    sub_AFC3F0(v75, const_cast<char *>("toggleToFalse"));
    sub_AFC3F0(v75, const_cast<char *>("toggleToTrue"));
    v76 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_interaction_properties.xml.bin"));
    v77 = v76;
    if ( v76 != 0 && G4_VCALL<int>(v76, 20) != 0 )
    {
      sub_A4C690(v77, 0, 0, 0);
      sub_B40AB0(0xA0FECA80);
      G4_VCALL<void>(v77, 4);
    }
    v78 = reinterpret_cast<uint32_t *>(sub_B0E610(0x550E4D60u));
    sub_AFC3F0(v78, const_cast<char *>("Chances"));
    v79 = reinterpret_cast<uint32_t *>(sub_B0E610(0x67E29516u));
    sub_AFC3F0(v79, const_cast<char *>("Order"));
    v80 = reinterpret_cast<uint32_t *>(sub_B0E610(0x3A859367u));
    sub_AFC3F0(v80, const_cast<char *>("Chances"));
    v81 = reinterpret_cast<uint32_t *>(sub_B0E610(0x1D47A15Du));
    sub_AFC3F0(v81, const_cast<char *>("Chances"));
    v82 = reinterpret_cast<uint32_t *>(sub_B0E610(0x3AF50C63u));
    sub_AFC3F0(v82, const_cast<char *>("Chances"));
    v83 = reinterpret_cast<uint32_t *>(sub_B0E610(0x2F6253A9u));
    sub_AFC3F0(v83, const_cast<char *>("Chances"));
    v84 = reinterpret_cast<uint32_t *>(sub_B0E610(0xED4FEC10));
    sub_AFC3F0(v84, const_cast<char *>("Chances"));
    v85 = reinterpret_cast<uint32_t *>(sub_B0E610(0x62609C4u));
    sub_AFC3F0(v85, const_cast<char *>("Chances"));
    v1169 = reinterpret_cast<uint32_t *>(sub_B0E610(0x9AC69F31));
    sub_AFC3F0(v1169, const_cast<char *>("Chances"));
    sub_AFC3F0(v1169, const_cast<char *>("Amount"));
    v1170 = reinterpret_cast<uint32_t *>(sub_B0E610(0xB9D2CCD8));
    sub_AFC3F0(v1170, const_cast<char *>("Chances"));
    sub_AFC3F0(v1170, const_cast<char *>("Amount"));
    v86 = reinterpret_cast<uint32_t *>(sub_B0E610(0xE19638CF));
    sub_AFC3F0(v86, const_cast<char *>("TypeChoices"));
    sub_AFC3F0(v86, const_cast<char *>("LevelChoices"));
    sub_AFC3F0(v86, const_cast<char *>("WeaponChoices"));
    sub_AFC3F0(v86, const_cast<char *>("ClothChoices"));
    sub_AFC3F0(v86, const_cast<char *>("VehicleChoices"));
    sub_AFC3F0(v86, const_cast<char *>("RarityChoices"));
    sub_AFC3F0(v86, const_cast<char *>("MiscChoices"));
    sub_AFC3F0(v86, const_cast<char *>("CashChoices"));
    sub_AFC3F0(v86, const_cast<char *>("KeyChoices"));
    sub_AFC3F0(v86, const_cast<char *>("AmmoChoices"));
    sub_AFC3F0(v86, const_cast<char *>("NumberOfDrops"));
    v87 = reinterpret_cast<uint32_t *>(sub_B0E610(0xB9C284E0));
    sub_AFC3F0(v87, const_cast<char *>("ItemCount"));
    v88 = reinterpret_cast<uint32_t *>(sub_B0E610(0xE62AB362));
    sub_AFC3F0(v88, const_cast<char *>("PaletteArray"));
    sub_AFC3F0(v88, const_cast<char *>("ColorId"));
    sub_AFC3F0(v88, const_cast<char *>("Chances"));
    v89 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_loot.xml.bin"));
    v90 = v89;
    if ( v89 != 0 && G4_VCALL<int>(v89, 20) != 0 )
    {
      sub_A4C860(v90, 0, 0, 0);
      v1320 = reinterpret_cast<uint32_t *>(sub_B110B0(0x62380F6Eu));
      sub_AFC4B0(v1320, const_cast<char *>("None"));
      sub_AFC4B0(v1320, const_cast<char *>("Normal"));
      sub_AFC4B0(v1320, const_cast<char *>("Pedestrian"));
      sub_AFC4B0(v1320, const_cast<char *>("Crate"));
      sub_AFC4B0(v1320, const_cast<char *>("TutorialCrate"));
      sub_AFC4B0(v1320, const_cast<char *>("PawnShop"));
      sub_AFC4B0(v1320, const_cast<char *>("HighValuableTarget_Suitcase"));
      sub_AFC4B0(v1320, const_cast<char *>("HighValuableTarget_Clothing"));
      sub_AFC4B0(v1320, const_cast<char *>("HighValuableTarget_Weapon"));
      sub_AFC4B0(v1320, const_cast<char *>("HighValuableTarget_Vehicle"));
      sub_A4CA10(v90, 0, 0, 0);
      v1168 = reinterpret_cast<uint32_t *>(sub_B110B0(0xD737F1E7));
      sub_AFC4B0(v1168, const_cast<char *>("All"));
      sub_AFC4B0(v1168, const_cast<char *>("Melee"));
      sub_A4CBC0(v90, 0, 0, 0);
      v1209 = reinterpret_cast<uint32_t *>(sub_B110B0(0x65DE9F5Bu));
      sub_AFC4B0(v1209, const_cast<char *>("None"));
      sub_AFC4B0(v1209, const_cast<char *>("Normal"));
      sub_AFC4B0(v1209, const_cast<char *>("Pedestrian"));
      sub_A4CD70(v90, 0, 0, 0);
      v1210 = reinterpret_cast<uint32_t *>(sub_B110B0(0xEAAEB33C));
      sub_AFC4B0(v1210, const_cast<char *>("None"));
      sub_AFC4B0(v1210, const_cast<char *>("Normal"));
      sub_A4CF20(v90, 0, 0, 0);
      v1321 = reinterpret_cast<uint32_t *>(sub_B110B0(0x5D512A6Fu));
      sub_AFC4B0(v1321, const_cast<char *>("None"));
      sub_AFC4B0(v1321, const_cast<char *>("Normal"));
      sub_AFC4B0(v1321, const_cast<char *>("Pedestrian"));
      sub_AFC4B0(v1321, const_cast<char *>("TutorialCrate"));
      sub_A4D0D0(v90, 0, 0, 0);
      v1322 = reinterpret_cast<uint32_t *>(sub_B110B0(0x45146A1Cu));
      sub_AFC4B0(v1322, const_cast<char *>("None"));
      sub_AFC4B0(v1322, const_cast<char *>("Normal"));
      sub_AFC4B0(v1322, const_cast<char *>("Pedestrian"));
      sub_AFC4B0(v1322, const_cast<char *>("HighValuableTarget_Suitcase"));
      sub_A4D280(v90, 0, 0, 0);
      v1323 = reinterpret_cast<uint32_t *>(sub_B110B0(0x9FEF4E14));
      sub_AFC4B0(v1323, const_cast<char *>("None"));
      sub_AFC4B0(v1323, const_cast<char *>("Normal"));
      sub_AFC4B0(v1323, const_cast<char *>("Pedestrian"));
      sub_AFC4B0(v1323, const_cast<char *>("PawnShop"));
      sub_AFC4B0(v1323, const_cast<char *>("Crate"));
      sub_AFC4B0(v1323, const_cast<char *>("TutorialCrate"));
      sub_A4D430(v90, 0, 0, 0);
      v1324 = reinterpret_cast<uint32_t *>(sub_B110B0(0x823745B0));
      sub_AFC4B0(v1324, const_cast<char *>("None"));
      sub_AFC4B0(v1324, const_cast<char *>("Normal"));
      sub_AFC4B0(v1324, const_cast<char *>("PawnShop"));
      sub_AFC4B0(v1324, const_cast<char *>("Pedestrian"));
      sub_AFC4B0(v1324, const_cast<char *>("TutorialCrate"));
      sub_A4D5E0(v90, 0, 0, 0);
      v1211 = reinterpret_cast<uint32_t *>(sub_B110B0(0x4304B6A6u));
      sub_AFC4B0(v1211, const_cast<char *>("None"));
      sub_AFC4B0(v1211, const_cast<char *>("Normal"));
      sub_A4D7B0(v90, 0, 0, 0);
      v1212 = reinterpret_cast<uint32_t *>(sub_B110B0(0x54AFD93Eu));
      sub_AFC4B0(v1212, const_cast<char *>("None"));
      sub_AFC4B0(v1212, const_cast<char *>("Normal"));
      sub_A4D980(v90, 0, 0, 0);
      v1213 = reinterpret_cast<uint32_t *>(sub_B110B0(0xFBC1D55u));
      sub_AFC4B0(v1213, const_cast<char *>("None"));
      sub_AFC4B0(v1213, const_cast<char *>("Normal"));
      sub_A4DB50(v90, 0, 0, 0);
      v1325 = reinterpret_cast<uint32_t *>(sub_B110B0(0x43E79170u));
      sub_AFC4B0(v1325, const_cast<char *>("None"));
      sub_AFC4B0(v1325, const_cast<char *>("Normal"));
      sub_AFC4B0(v1325, const_cast<char *>("Pedestrian"));
      sub_AFC4B0(v1325, const_cast<char *>("Crate"));
      sub_AFC4B0(v1325, const_cast<char *>("TutorialCrate"));
      sub_AFC4B0(v1325, const_cast<char *>("PawnShop_1"));
      sub_AFC4B0(v1325, const_cast<char *>("PawnShop_2"));
      sub_AFC4B0(v1325, const_cast<char *>("PawnShop_3"));
      sub_AFC4B0(v1325, const_cast<char *>("HighValuableTarget_Suitcase"));
      sub_AFC4B0(v1325, const_cast<char *>("HighValuableTarget_Clothing"));
      sub_AFC4B0(v1325, const_cast<char *>("HighValuableTarget_Weapon"));
      sub_AFC4B0(v1325, const_cast<char *>("HighValuableTarget_Vehicle"));
      sub_A4DD00(v90, 0, 0, 0);
      v427 = reinterpret_cast<uint32_t *>(sub_B110B0(0x71AA8EDEu));
      sub_AFC4B0(v427, const_cast<char *>("NoTier"));
      sub_AFC4B0(v427, const_cast<char *>("Tier1"));
      sub_AFC4B0(v427, const_cast<char *>("Tier2"));
      sub_AFC4B0(v427, const_cast<char *>("Tier3"));
      sub_A4DED0(v90, 0, 0, 0);
      sub_B40F40(-1588305374);
      G4_VCALL<void>(v90, 4);
    }
    v91 = reinterpret_cast<uint32_t *>(sub_B0E610(0x76A2B606u));
    sub_AFC3F0(v91, const_cast<char *>("PreferredItems"));
    sub_AFC3F0(v91, const_cast<char *>("Probabilities"));
    sub_AFC3F0(v91, const_cast<char *>("LootTable"));
    sub_AFC3F0(v91, const_cast<char *>("TrackingEventId"));
    sub_AFC3F0(v91, const_cast<char *>("Description"));
    v92 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_loot_crate.xml.bin"));
    v93 = v92;
    if ( v92 != 0 && G4_VCALL<int>(v92, 20) != 0 )
    {
      sub_A4E0A0(v93, 0, 0, 0);
      sub_B43CC0(0xD40010F9);
      G4_VCALL<void>(v93, 4);
    }
    v94 = reinterpret_cast<uint32_t *>(sub_B0E610(0xB288742E));
    sub_AFC3F0(v94, const_cast<char *>("Prize"));
    v95 = reinterpret_cast<uint32_t *>(sub_B0E610(0x1F09C2FDu));
    sub_AFC3F0(v95, const_cast<char *>("Prizes"));
    v96 = reinterpret_cast<uint32_t *>(sub_B0E610(0x30F80B6Eu));
    sub_AFC3F0(v96, const_cast<char *>("StockItemID"));
    sub_AFC3F0(v96, const_cast<char *>("TableIDForRandomGeneration"));
    sub_AFC3F0(v96, const_cast<char *>("Count"));
    v97 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_loyalty_prizes.xml.bin"));
    v98 = v97;
    if ( v97 != 0 && G4_VCALL<int>(v97, 20) != 0 )
    {
      sub_A4E270(v98, 0, 0, 0);
      v425 = reinterpret_cast<uint32_t *>(sub_B110B0(0xDE7ED699));
      sub_AFC4B0(v425, const_cast<char *>("Less90Cards"));
      sub_AFC4B0(v425, const_cast<char *>("More90Cards"));
      sub_A4E440(v98, 0, 0, 0);
      v426 = reinterpret_cast<uint32_t *>(sub_B110B0(0xDF46815D));
      sub_AFC4B0(v426, const_cast<char *>("Crate1Tier"));
      sub_AFC4B0(v426, const_cast<char *>("Crate2Tier"));
      sub_AFC4B0(v426, const_cast<char *>("Crate3Tier"));
      sub_AFC4B0(v426, const_cast<char *>("Consumables1"));
      sub_AFC4B0(v426, const_cast<char *>("Consumables2"));
      sub_AFC4B0(v426, const_cast<char *>("Item1"));
      sub_AFC4B0(v426, const_cast<char *>("Item2"));
      sub_AFC4B0(v426, const_cast<char *>("ExtraItem1"));
      sub_AFC4B0(v426, const_cast<char *>("Item3"));
      sub_AFC4B0(v426, const_cast<char *>("Item4"));
      sub_AFC4B0(v426, const_cast<char *>("Item5"));
      sub_AFC4B0(v426, const_cast<char *>("Item6"));
      sub_AFC4B0(v426, const_cast<char *>("Item7"));
      sub_AFC4B0(v426, const_cast<char *>("Item8"));
      sub_A4E5F0(v98, 0, 0, 0);
      sub_B44460(0xD88053E9);
      G4_VCALL<void>(v98, 4);
    }
    v99 = reinterpret_cast<uint32_t *>(sub_B0E610(0x1407D3A9u));
    sub_AFC3F0(v99, const_cast<char *>("MaterialId"));
    sub_AFC3F0(v99, const_cast<char *>("MaterialFriction"));
    sub_AFC3F0(v99, const_cast<char *>("Footstep_Start"));
    sub_AFC3F0(v99, const_cast<char *>("Footstep_Walk"));
    sub_AFC3F0(v99, const_cast<char *>("Footstep_Run"));
    sub_AFC3F0(v99, const_cast<char *>("Footstep_Sprint"));
    sub_AFC3F0(v99, const_cast<char *>("Footstep_End"));
    sub_AFC3F0(v99, const_cast<char *>("Footstep_Jump"));
    sub_AFC3F0(v99, const_cast<char *>("Footstep_Land"));
    sub_AFC3F0(v99, const_cast<char *>("VFX_CarSkid"));
    sub_AFC3F0(v99, const_cast<char *>("VFX_CarBurnout"));
    sub_AFC3F0(v99, const_cast<char *>("VFX_CarBraking"));
    sub_AFC3F0(v99, const_cast<char *>("VFX_CarHitFront"));
    sub_AFC3F0(v99, const_cast<char *>("VFX_CarHitBack"));
    sub_AFC3F0(v99, const_cast<char *>("VFX_CarScratchSide"));
    sub_AFC3F0(v99, const_cast<char *>("VFX_CarScratchTop"));
    sub_AFC3F0(v99, const_cast<char *>("VFX_CarHitOther"));
    v100 = reinterpret_cast<uint32_t *>(sub_B0E610(0xE05B9DF1));
    sub_AFC3F0(v100, const_cast<char *>("Concrete"));
    sub_AFC3F0(v100, const_cast<char *>("Asphalt"));
    sub_AFC3F0(v100, const_cast<char *>("Sand"));
    sub_AFC3F0(v100, const_cast<char *>("Carpet"));
    sub_AFC3F0(v100, const_cast<char *>("Grass"));
    sub_AFC3F0(v100, const_cast<char *>("Glass"));
    sub_AFC3F0(v100, const_cast<char *>("Rock"));
    sub_AFC3F0(v100, const_cast<char *>("Wood"));
    sub_AFC3F0(v100, const_cast<char *>("floor_ring"));
    v101 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_material.xml.bin"));
    v102 = v101;
    if ( v101 != 0 && G4_VCALL<int>(v101, 20) != 0 )
    {
      sub_A4E7C0(v102, 0, 0, 0);
      v1319 = reinterpret_cast<uint32_t *>(sub_B110B0(0xB1298AFF));
      sub_AFC4B0(v1319, const_cast<char *>("Concrete"));
      sub_AFC4B0(v1319, const_cast<char *>("floor_ring"));
      sub_AFC4B0(v1319, const_cast<char *>("tile"));
      sub_AFC4B0(v1319, const_cast<char *>("Asphalt"));
      sub_AFC4B0(v1319, const_cast<char *>("Road"));
      sub_AFC4B0(v1319, const_cast<char *>("Sand"));
      sub_AFC4B0(v1319, const_cast<char *>("dirt"));
      sub_AFC4B0(v1319, const_cast<char *>("gravel"));
      sub_AFC4B0(v1319, const_cast<char *>("Carpet"));
      sub_AFC4B0(v1319, const_cast<char *>("Grass"));
      sub_AFC4B0(v1319, const_cast<char *>("Glass"));
      sub_AFC4B0(v1319, const_cast<char *>("Rock"));
      sub_AFC4B0(v1319, const_cast<char *>("Cliff"));
      sub_AFC4B0(v1319, const_cast<char *>("Wood"));
      sub_A4E970(v102, 0, 0, 0);
      v424 = reinterpret_cast<uint32_t *>(sub_B110B0(0xC73A983A));
      sub_AFC4B0(v424, const_cast<char *>("Player"));
      sub_AFC4B0(v424, const_cast<char *>("Vehicle"));
      G4_VCALL<void>(v102, 4);
    }
    v103 = reinterpret_cast<uint32_t *>(sub_B0E610(0xABDF2CB0));
    sub_AFC3F0(v103, const_cast<char *>("GroundFierceStrikes"));
    sub_AFC3F0(v103, const_cast<char *>("LeftFierceStrikes"));
    sub_AFC3F0(v103, const_cast<char *>("RightFierceStrikes"));
    sub_AFC3F0(v103, const_cast<char *>("GroundQuickStrikes"));
    sub_AFC3F0(v103, const_cast<char *>("LeftQuickStrikes"));
    sub_AFC3F0(v103, const_cast<char *>("RightQuickStrikes"));
    sub_AFC3F0(v103, const_cast<char *>("WeaponGroundStrike"));
    sub_AFC3F0(v103, const_cast<char *>("WeaponStrike"));
    sub_AFC3F0(v103, const_cast<char *>("WeaponComboStrike"));
    sub_AFC3F0(v103, const_cast<char *>("WeaponFierceStrike"));
    v104 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_melee_strikes.xml.bin"));
    v105 = v104;
    if ( v104 != 0 && G4_VCALL<int>(v104, 20) != 0 )
    {
      sub_A4EB20(v105, 0, 0, 0);
      v423 = reinterpret_cast<uint32_t *>(sub_B110B0(0x97425D2A));
      sub_AFC4B0(v423, const_cast<char *>("Player"));
      sub_AFC4B0(v423, const_cast<char *>("NPC"));
      sub_AFC4B0(v423, const_cast<char *>("Cop"));
      sub_AFC4B0(v423, const_cast<char *>("Kickboxer"));
      sub_AFC4B0(v423, const_cast<char *>("Brawler"));
      G4_VCALL<void>(v105, 4);
    }
    v106 = reinterpret_cast<uint32_t *>(sub_B0E610(0x7832D0A6u));
    sub_AFC3F0(v106, const_cast<char *>("EnableBrakeAndGas"));
    sub_AFC3F0(v106, const_cast<char *>("EnableLinearBraking"));
    sub_AFC3F0(v106, const_cast<char *>("EnableObjectiveIcon"));
    sub_AFC3F0(v106, const_cast<char *>("EnableAnalogStickVisible"));
    v107 = reinterpret_cast<uint32_t *>(sub_B0E610(0x3C6CF637u));
    sub_AFC3F0(v107, const_cast<char *>("EnableDistrictUpgrade"));
    v108 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_menu_features_enability.xml.bin"));
    v109 = v108;
    if ( v108 != 0 && G4_VCALL<int>(v108, 20) != 0 )
    {
      sub_A4ECF0(v109, 0, 0, 0);
      v421 = reinterpret_cast<uint32_t *>(sub_B110B0(0xFE4C0399));
      sub_AFC4B0(v421, const_cast<char *>("HudFeatures_01"));
      sub_A4EEC0(v109, 0, 0, 0);
      v422 = reinterpret_cast<uint32_t *>(sub_B110B0(0xF1944C80));
      sub_AFC4B0(v422, const_cast<char *>("MenuFeatures_01"));
      G4_VCALL<void>(v109, 4);
    }
    v110 = reinterpret_cast<uint32_t *>(sub_B0E610(0xE873727E));
    sub_AFC3F0(v110, const_cast<char *>("Context"));
    sub_AFC3F0(v110, const_cast<char *>("SpawnPrimitive"));
    sub_AFC3F0(v110, const_cast<char *>("AnimationName"));
    sub_AFC3F0(v110, const_cast<char *>("CameraDistance"));
    sub_AFC3F0(v110, const_cast<char *>("RotationAngle"));
    v111 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_menu_models.xml.bin"));
    v112 = v111;
    if ( v111 != 0 && G4_VCALL<int>(v111, 20) != 0 )
    {
      sub_A4F070(v112, 0, 0, 0);
      v1208 = reinterpret_cast<uint32_t *>(sub_B110B0(0xB0E0573E));
      sub_AFC4B0(v1208, const_cast<char *>("Player"));
      sub_AFC4B0(v1208, const_cast<char *>("Mission"));
      sub_AFC4B0(v1208, const_cast<char *>("GachaBoy"));
      G4_VCALL<void>(v112, 4);
    }
    v113 = reinterpret_cast<uint32_t *>(sub_B0E610(0xF4067B3E));
    sub_AFC3F0(v113, const_cast<char *>("ISOCode"));
    sub_AFC3F0(v113, const_cast<char *>("Typeface"));
    v114 = reinterpret_cast<uint32_t *>(sub_B0E610(0x4E864931u));
    sub_AFC3F0(v114, const_cast<char *>("Language"));
    sub_AFC3F0(v114, const_cast<char *>("SymbolsUtfHtmlCode"));
    v115 = reinterpret_cast<uint32_t *>(sub_B0E610(0x503630B4u));
    sub_AFC3F0(v115, const_cast<char *>("styleNone"));
    sub_AFC3F0(v115, const_cast<char *>("styleBold"));
    sub_AFC3F0(v115, const_cast<char *>("styleItalic"));
    sub_AFC3F0(v115, const_cast<char *>("styleBoldItalic"));
    sub_AFC3F0(v115, const_cast<char *>("faceIndex"));
    sub_AFC3F0(v115, const_cast<char *>("script"));
    v116 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_menu_options.xml.bin"));
    v117 = v116;
    if ( v116 != 0 && G4_VCALL<int>(v116, 20) != 0 )
    {
      sub_A4F240(v117, 0, 0, 0);
      v1317 = reinterpret_cast<uint32_t *>(sub_B110B0(0xEFE703ED));
      sub_AFC4B0(v1317, const_cast<char *>("font_latin"));
      sub_AFC4B0(v1317, const_cast<char *>("font_russian"));
      sub_AFC4B0(v1317, const_cast<char *>("font_japanese"));
      sub_AFC4B0(v1317, const_cast<char *>("font_korean"));
      sub_AFC4B0(v1317, const_cast<char *>("font_SChinese"));
      sub_AFC4B0(v1317, const_cast<char *>("font_TChinese"));
      sub_AFC4B0(v1317, const_cast<char *>("NotoSansThaiRegular"));
      sub_A4F3F0(v117, 0, 0, 0);
      v1318 = reinterpret_cast<uint32_t *>(sub_B110B0(0x258194BBu));
      sub_AFC4B0(v1318, const_cast<char *>("English"));
      sub_AFC4B0(v1318, const_cast<char *>("French"));
      sub_AFC4B0(v1318, const_cast<char *>("German"));
      sub_AFC4B0(v1318, const_cast<char *>("Spanish"));
      sub_AFC4B0(v1318, const_cast<char *>("Italian"));
      sub_AFC4B0(v1318, const_cast<char *>("Japanese"));
      sub_AFC4B0(v1318, const_cast<char *>("Korean"));
      sub_AFC4B0(v1318, const_cast<char *>("Chinese"));
      sub_AFC4B0(v1318, const_cast<char *>("Portugese"));
      sub_AFC4B0(v1318, const_cast<char *>("Russian"));
      sub_AFC4B0(v1318, const_cast<char *>("Turkish"));
      sub_AFC4B0(v1318, const_cast<char *>("TradChinese"));
      sub_AFC4B0(v1318, const_cast<char *>("Arabic"));
      sub_AFC4B0(v1318, const_cast<char *>("Thai"));
      sub_A4F5A0(v117, 0, 0, 0);
      v1207 = reinterpret_cast<uint32_t *>(sub_B110B0(0x118431E0u));
      sub_AFC4B0(v1207, const_cast<char *>("Chinese"));
      sub_AFC4B0(v1207, const_cast<char *>("TradChinese"));
      G4_VCALL<void>(v117, 4);
    }
    v118 = reinterpret_cast<uint32_t *>(sub_B0E610(0xA6D47AED));
    sub_AFC3F0(v118, const_cast<char *>("BetCost0"));
    sub_AFC3F0(v118, const_cast<char *>("BetCost1"));
    sub_AFC3F0(v118, const_cast<char *>("BetCost2"));
    sub_AFC3F0(v118, const_cast<char *>("WinValue_Jackpot"));
    sub_AFC3F0(v118, const_cast<char *>("ReelConfig"));
    v119 = reinterpret_cast<uint32_t *>(sub_B0E610(0x6DF90EDBu));
    sub_AFC3F0(v119, const_cast<char *>("Mode"));
    sub_AFC3F0(v119, const_cast<char *>("TypeName"));
    sub_AFC3F0(v119, const_cast<char *>("Multiplier"));
    sub_AFC3F0(v119, const_cast<char *>("RepeatNum"));
    v120 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_minigames_settings.xml.bin"));
    v121 = v120;
    if ( v120 != 0 && G4_VCALL<int>(v120, 20) != 0 )
    {
      sub_A4F770(v121, 0, 0, 0);
      v420 = reinterpret_cast<uint32_t *>(sub_B110B0(0xDBDF2ECA));
      sub_AFC4B0(v420, const_cast<char *>("Setting_01"));
      sub_A4F920(v121, 0, 0, 0);
      v1316 = reinterpret_cast<uint32_t *>(sub_B110B0(0x5A007A79u));
      sub_AFC4B0(v1316, const_cast<char *>("Seven"));
      sub_AFC4B0(v1316, const_cast<char *>("Bell"));
      sub_AFC4B0(v1316, const_cast<char *>("Crystal"));
      sub_AFC4B0(v1316, const_cast<char *>("Bar"));
      sub_AFC4B0(v1316, const_cast<char *>("Orange"));
      sub_AFC4B0(v1316, const_cast<char *>("Cherry"));
      sub_AFC4B0(v1316, const_cast<char *>("RepeatOrange"));
      sub_AFC4B0(v1316, const_cast<char *>("RepeatCherry"));
      G4_VCALL<void>(v121, 4);
    }
    v122 = reinterpret_cast<uint32_t *>(sub_B0E610(0x9CF93B7E));
    sub_AFC3F0(v122, const_cast<char *>("Sections"));
    sub_AFC3F0(v122, const_cast<char *>("PromptMsg"));
    v123 = reinterpret_cast<uint32_t *>(sub_B0E610(0x917371D2));
    sub_AFC3F0(v123, const_cast<char *>("GroupName"));
    sub_AFC3F0(v123, const_cast<char *>("TextColor"));
    sub_AFC3F0(v123, const_cast<char *>("StatCounter_GroupComplete"));
    sub_B0E610(0x5C1DB4BDu);
    v124 = reinterpret_cast<uint32_t *>(sub_B0E610(0xA6E30921));
    sub_AFC3F0(v124, const_cast<char *>("TypeName"));
    sub_AFC3F0(v124, const_cast<char *>("MissionGroup"));
    sub_AFC3F0(v124, const_cast<char *>("MapIcon"));
    sub_AFC3F0(v124, const_cast<char *>("Section"));
    sub_AFC3F0(v124, const_cast<char *>("StatCounter_TypeComplete"));
    sub_AFC3F0(v124, const_cast<char *>("TrackingEventId"));
    v125 = reinterpret_cast<uint32_t *>(sub_B0E610(0x69B51B47u));
    sub_AFC3F0(v125, const_cast<char *>("Diamonds"));
    sub_AFC3F0(v125, const_cast<char *>("Cash"));
    sub_AFC3F0(v125, const_cast<char *>("Respect"));
    sub_AFC3F0(v125, const_cast<char *>("ReplayCash"));
    sub_AFC3F0(v125, const_cast<char *>("ReplayRespect"));
    v126 = reinterpret_cast<uint32_t *>(sub_B0E610(0xD9395BDA));
    sub_AFC3F0(v126, const_cast<char *>("CashPerStar"));
    sub_AFC3F0(v126, const_cast<char *>("CashPerComplete"));
    sub_AFC3F0(v126, const_cast<char *>("RespectPerStar"));
    sub_AFC3F0(v126, const_cast<char *>("RespectPerComplete"));
    v127 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_mission_constants.xml.bin"));
    v128 = v127;
    if ( v127 != 0 && G4_VCALL<int>(v127, 20) != 0 )
    {
      sub_A4FAF0(v128, 0, 0, 0);
      v1312 = reinterpret_cast<uint32_t *>(sub_B110B0(0xBC09EAB9));
      sub_AFC4B0(v1312, const_cast<char *>("AllVehicles"));
      sub_AFC4B0(v1312, const_cast<char *>("OnlySeaVehicles"));
      sub_AFC4B0(v1312, const_cast<char *>("OnlyPlaneVehicles"));
      sub_AFC4B0(v1312, const_cast<char *>("OnlyHeliVehicles"));
      sub_AFC4B0(v1312, const_cast<char *>("OnlyLandVehicles"));
      sub_AFC4B0(v1312, const_cast<char *>("OnlyTwoSeatLandVehicles"));
      sub_AFC4B0(v1312, const_cast<char *>("OnlyMotoVehicles"));
      sub_AFC4B0(v1312, const_cast<char *>("AirAndLandVehicles"));
      sub_AFC4B0(v1312, const_cast<char *>("OnlyCars_TwoSeat"));
      sub_AFC4B0(v1312, const_cast<char *>("OnlyCars_All"));
      sub_AFC4B0(v1312, const_cast<char *>("AllWeapons"));
      sub_AFC4B0(v1312, const_cast<char *>("OnlyMeleeWeapons"));
      sub_AFC4B0(v1312, const_cast<char *>("OnlyConsumables"));
      sub_AFC4B0(v1312, const_cast<char *>("All"));
      sub_AFC4B0(v1312, const_cast<char *>("OnlySniperWeapons"));
      sub_A4FCC0(v128, 0, 0, 0);
      v1313 = reinterpret_cast<uint32_t *>(sub_B110B0(0x5B80D9F3u));
      sub_AFC4B0(v1313, const_cast<char *>("TRADITIONAL"));
      sub_AFC4B0(v1313, const_cast<char *>("ACTION"));
      sub_AFC4B0(v1313, const_cast<char *>("VEHICLE"));
      sub_AFC4B0(v1313, const_cast<char *>("ARENA"));
      sub_A4FE90(v128, 0, 0, 0);
      v1314 = reinterpret_cast<uint32_t *>(sub_B110B0(0xB5D3405u));
      sub_AFC4B0(v1314, const_cast<char *>("CasinoGames"));
      sub_AFC4B0(v1314, const_cast<char *>("Traditional"));
      sub_AFC4B0(v1314, const_cast<char *>("UFO"));
      sub_AFC4B0(v1314, const_cast<char *>("UFOHeist"));
      sub_AFC4B0(v1314, const_cast<char *>("Ram"));
      sub_AFC4B0(v1314, const_cast<char *>("Survival"));
      sub_AFC4B0(v1314, const_cast<char *>("Robbery"));
      sub_AFC4B0(v1314, const_cast<char *>("Carnage"));
      sub_AFC4B0(v1314, const_cast<char *>("FightClub"));
      sub_AFC4B0(v1314, const_cast<char *>("Assault"));
      sub_AFC4B0(v1314, const_cast<char *>("Sniper"));
      sub_AFC4B0(v1314, const_cast<char *>("Delivery"));
      sub_AFC4B0(v1314, const_cast<char *>("TimeAttack"));
      sub_AFC4B0(v1314, const_cast<char *>("RingChallenge"));
      sub_AFC4B0(v1314, const_cast<char *>("Freefall"));
      sub_AFC4B0(v1314, const_cast<char *>("Racing"));
      sub_A50040(v128, 0, 0, 0);
      v1315 = reinterpret_cast<uint32_t *>(sub_B110B0(0xEA5F69B5));
      sub_AFC4B0(v1315, const_cast<char *>("TRADITIONAL_QUICKTITLE"));
      sub_AFC4B0(v1315, const_cast<char *>("TRADITIONAL_KAREN"));
      sub_AFC4B0(v1315, const_cast<char *>("TRADITIONAL_VERA"));
      sub_AFC4B0(v1315, const_cast<char *>("TRADITIONAL_EMAN"));
      sub_AFC4B0(v1315, const_cast<char *>("TRADITIONAL_FRANK"));
      sub_AFC4B0(v1315, const_cast<char *>("TRADITIONAL_BENNY"));
      sub_AFC4B0(v1315, const_cast<char *>("TRADITIONAL_WARREN"));
      sub_AFC4B0(v1315, const_cast<char *>("TRADITIONAL_LUCKY"));
      sub_AFC4B0(v1315, const_cast<char *>("UFO"));
      sub_AFC4B0(v1315, const_cast<char *>("RAM"));
      sub_AFC4B0(v1315, const_cast<char *>("UFO_HEIST"));
      sub_AFC4B0(v1315, const_cast<char *>("SURVIVAL"));
      sub_AFC4B0(v1315, const_cast<char *>("ROBBERY"));
      sub_AFC4B0(v1315, const_cast<char *>("CARNAGE"));
      sub_AFC4B0(v1315, const_cast<char *>("FIGHTCLUB"));
      sub_AFC4B0(v1315, const_cast<char *>("ASSAULT"));
      sub_AFC4B0(v1315, const_cast<char *>("SNIPER"));
      sub_AFC4B0(v1315, const_cast<char *>("TIMEATTACK"));
      sub_AFC4B0(v1315, const_cast<char *>("RINGCHALLENGE"));
      sub_AFC4B0(v1315, const_cast<char *>("RACING"));
      sub_AFC4B0(v1315, const_cast<char *>("DELIVERY"));
      sub_AFC4B0(v1315, const_cast<char *>("FREEFALL"));
      sub_AFC4B0(v1315, const_cast<char *>("NONE"));
      sub_AFC4B0(v1315, const_cast<char *>("CASINOGAME"));
      sub_A501F0(v128, 0, 0, 0);
      sub_B44AE0(0xD7C1DC63);
      sub_A503C0(v128, 0, 0, 0);
      sub_B44E60(0x25680CB0u);
      G4_VCALL<void>(v128, 4);
    }
    v129 = reinterpret_cast<uint32_t *>(sub_B0E610(0x69B04219u));
    sub_AFC3F0(v129, const_cast<char *>("GiverName"));
    sub_AFC3F0(v129, const_cast<char *>("SpawnPrimitive"));
    sub_AFC3F0(v129, const_cast<char *>("AnimationName"));
    sub_AFC3F0(v129, const_cast<char *>("FlashLabel"));
    v130 = reinterpret_cast<uint32_t *>(sub_B0E610(0x395CD015u));
    sub_AFC3F0(v130, const_cast<char *>("ChapterName"));
    sub_AFC3F0(v130, const_cast<char *>("ChapterDescription"));
    sub_AFC3F0(v130, const_cast<char *>("TrackingEventId"));
    v131 = reinterpret_cast<uint32_t *>(sub_B0E610(0xFB0E2BB7));
    sub_AFC3F0(v131, const_cast<char *>("MissionType"));
    sub_AFC3F0(v131, const_cast<char *>("MissionName"));
    sub_AFC3F0(v131, const_cast<char *>("MissionDescription"));
    sub_AFC3F0(v131, const_cast<char *>("MissionEndDescription"));
    sub_AFC3F0(v131, const_cast<char *>("Giver"));
    sub_AFC3F0(v131, const_cast<char *>("RewardLevel"));
    sub_AFC3F0(v131, const_cast<char *>("Chapter"));
    sub_AFC3F0(v131, const_cast<char *>("MissionUnlock"));
    sub_AFC3F0(v131, const_cast<char *>("MissionUnlockLevelReq"));
    sub_AFC3F0(v131, const_cast<char *>("State"));
    sub_AFC3F0(v131, const_cast<char *>("SkipCost"));
    sub_AFC3F0(v131, const_cast<char *>("SkipFriendGift"));
    sub_AFC3F0(v131, const_cast<char *>("PhotoName"));
    sub_AFC3F0(v131, const_cast<char *>("IsAbortRestricted"));
    sub_AFC3F0(v131, const_cast<char *>("IsSkipRestricted"));
    sub_AFC3F0(v131, const_cast<char *>("IsInQuickPlay"));
    sub_AFC3F0(v131, const_cast<char *>("IsSubMap"));
    sub_AFC3F0(v131, const_cast<char *>("LoadoutID"));
    sub_AFC3F0(v131, const_cast<char *>("TrackingEventId"));
    sub_AFC3F0(v131, const_cast<char *>("StatCounter_MissionComplete"));
    sub_AFC3F0(v131, const_cast<char *>("ObjectiveType"));
    sub_AFC3F0(v131, const_cast<char *>("Objective0"));
    sub_AFC3F0(v131, const_cast<char *>("Objective1"));
    sub_AFC3F0(v131, const_cast<char *>("Objective2"));
    sub_AFC3F0(v131, const_cast<char *>("Objective3"));
    sub_AFC3F0(v131, const_cast<char *>("StartMode"));
    sub_AFC3F0(v131, const_cast<char *>("ApexFiles"));
    sub_AFC3F0(v131, const_cast<char *>("GrapherFiles"));
    sub_AFC3F0(v131, const_cast<char *>("GrapherStart"));
    sub_AFC3F0(v131, const_cast<char *>("NavMesh"));
    sub_AFC3F0(v131, const_cast<char *>("TeleportToEstateOnRestart"));
    sub_AFC3F0(v131, const_cast<char *>("TeleportToEstateOnAbort"));
    sub_AFC3F0(v131, const_cast<char *>("TeleportToEstateOnCompletion"));
    sub_AFC3F0(v131, const_cast<char *>("TeleportToEstateOnSkip"));
    sub_AFC3F0(v131, const_cast<char *>("DespawnLastVehicleOrderedOnStart"));
    sub_AFC3F0(v131, const_cast<char *>("AutoRunScriptOnMissionUnload"));
    sub_AFC3F0(v131, const_cast<char *>("IsPhoneCall"));
    sub_AFC3F0(v131, const_cast<char *>("RecommendedItems"));
    sub_AFC3F0(v131, const_cast<char *>("District"));
    sub_AFC3F0(v131, const_cast<char *>("DistrictZoneName"));
    v132 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_missions.xml.bin"));
    v133 = v132;
    if ( v132 != 0 && G4_VCALL<int>(v132, 20) != 0 )
    {
      sub_A50590(v133, 0, 0, 0);
      v1310 = reinterpret_cast<uint32_t *>(sub_B110B0(0x4D0452EBu));
      sub_AFC4B0(v1310, const_cast<char *>("None"));
      sub_AFC4B0(v1310, const_cast<char *>("Jason"));
      sub_AFC4B0(v1310, const_cast<char *>("Vera"));
      sub_AFC4B0(v1310, const_cast<char *>("Karen"));
      sub_AFC4B0(v1310, const_cast<char *>("Eman"));
      sub_AFC4B0(v1310, const_cast<char *>("Frank"));
      sub_AFC4B0(v1310, const_cast<char *>("Warren"));
      sub_AFC4B0(v1310, const_cast<char *>("Benny"));
      sub_AFC4B0(v1310, const_cast<char *>("AviatorGirl"));
      sub_AFC4B0(v1310, const_cast<char *>("AsianRacer"));
      sub_AFC4B0(v1310, const_cast<char *>("CasinoGirl"));
      sub_AFC4B0(v1310, const_cast<char *>("DJGirl"));
      sub_AFC4B0(v1310, const_cast<char *>("Eman_UFO"));
      sub_AFC4B0(v1310, const_cast<char *>("Devil_Stranger"));
      sub_AFC4B0(v1310, const_cast<char *>("Devil"));
      sub_A50760(v133, 0, 0, 0);
      v1311 = reinterpret_cast<uint32_t *>(sub_B110B0(0x2F6B96DCu));
      sub_AFC4B0(v1311, const_cast<char *>("CH1"));
      sub_AFC4B0(v1311, const_cast<char *>("CH2"));
      sub_AFC4B0(v1311, const_cast<char *>("CH3"));
      sub_AFC4B0(v1311, const_cast<char *>("CH4"));
      sub_AFC4B0(v1311, const_cast<char *>("CH5"));
      sub_AFC4B0(v1311, const_cast<char *>("UPDATE3"));
      sub_A50930(v133, 0, 0, 0);
      sub_B453E0(0x1A6EB70Au);
      G4_VCALL<void>(v133, 4);
    }
    v134 = reinterpret_cast<uint32_t *>(sub_B0E610(0x6C57E319u));
    sub_AFC3F0(v134, const_cast<char *>("MinTotalSpent"));
    sub_AFC3F0(v134, const_cast<char *>("DiamondsAmount"));
    v135 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_old_user_gifts.xml.bin"));
    v136 = v135;
    if ( v135 != 0 && G4_VCALL<int>(v135, 20) != 0 )
    {
      sub_A50B00(v136, 0, 0, 0);
      v1309 = reinterpret_cast<uint32_t *>(sub_B110B0(0x9F74B003));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_0"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_1"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_2"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_3"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_4"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_5"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_6"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_7"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_8"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_9"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_10"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_11"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_12"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_13"));
      sub_AFC4B0(v1309, const_cast<char *>("Reward_14"));
      G4_VCALL<void>(v136, 4);
    }
    v137 = reinterpret_cast<uint32_t *>(sub_B0E610(0x1860B01Du));
    sub_AFC3F0(v137, const_cast<char *>("ShortenedName"));
    sub_AFC3F0(v137, const_cast<char *>("UnknownName"));
    sub_AFC3F0(v137, const_cast<char *>("UnknownAvatarIcon"));
    sub_AFC3F0(v137, const_cast<char *>("MaximumNameLength"));
    v138 = reinterpret_cast<uint32_t *>(sub_B0E610(0xCDF8A601));
    sub_AFC3F0(v138, const_cast<char *>("Name"));
    sub_AFC3F0(v138, const_cast<char *>("UID"));
    sub_AFC3F0(v138, const_cast<char *>("Image"));
    v139 = reinterpret_cast<uint32_t *>(sub_B0E610(0xD74EB2DA));
    sub_AFC3F0(v139, const_cast<char *>("MaxEntries"));
    sub_AFC3F0(v139, const_cast<char *>("EntryExpirationTime"));
    sub_AFC3F0(v139, const_cast<char *>("LeaderboardSuffixName"));
    v140 = reinterpret_cast<uint32_t *>(sub_B0E610(0x94E2D002));
    sub_AFC3F0(v140, const_cast<char *>("PublicAvatar"));
    sub_AFC3F0(v140, const_cast<char *>("PublicName"));
    sub_AFC3F0(v140, const_cast<char *>("PublicSaveName"));
    v141 = reinterpret_cast<uint32_t *>(sub_B0E610(0x98738DF3));
    sub_AFC3F0(v141, const_cast<char *>("StockItemOid"));
    v142 = reinterpret_cast<uint32_t *>(sub_B0E610(0x88492903));
    sub_AFC3F0(v142, const_cast<char *>("FromScore"));
    sub_AFC3F0(v142, const_cast<char *>("ToScore"));
    sub_AFC3F0(v142, const_cast<char *>("Level"));
    v143 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_online_federation.xml.bin"));
    v144 = v143;
    if ( v143 != 0 && G4_VCALL<int>(v143, 20) != 0 )
    {
      sub_A50CB0(v144, 0, 0, 0);
      v415 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA41B1D6E));
      sub_AFC4B0(v415, const_cast<char *>("Cst_01"));
      sub_A50E80(v144, 0, 0, 0);
      v416 = reinterpret_cast<uint32_t *>(sub_B110B0(0x58CF9B78u));
      sub_AFC4B0(v416, const_cast<char *>("KarenFriend"));
      sub_A51050(v144, 0, 0, 0);
      v417 = reinterpret_cast<uint32_t *>(sub_B110B0(0x70F96FB8u));
      sub_AFC4B0(v417, const_cast<char *>("BoardsInfo"));
      sub_A51220(v144, 0, 0, 0);
      v418 = reinterpret_cast<uint32_t *>(sub_B110B0(0x68C6FEAEu));
      sub_AFC4B0(v418, const_cast<char *>("Key_01"));
      sub_A513F0(v144, 0, 0, 0);
      v419 = reinterpret_cast<uint32_t *>(sub_B110B0(0xF5782915));
      sub_AFC4B0(v419, const_cast<char *>("FacebookReward"));
      sub_A515A0(v144, 0, 0, 0);
      v1308 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA23C56B6));
      sub_AFC4B0(v1308, const_cast<char *>("Level_1"));
      sub_AFC4B0(v1308, const_cast<char *>("Level_2"));
      sub_AFC4B0(v1308, const_cast<char *>("Level_3"));
      sub_AFC4B0(v1308, const_cast<char *>("Level_4"));
      sub_AFC4B0(v1308, const_cast<char *>("Level_5"));
      sub_AFC4B0(v1308, const_cast<char *>("Level_6"));
      sub_AFC4B0(v1308, const_cast<char *>("Level_7"));
      sub_AFC4B0(v1308, const_cast<char *>("Level_8"));
      sub_AFC4B0(v1308, const_cast<char *>("Level_9"));
      sub_AFC4B0(v1308, const_cast<char *>("Level_10"));
      G4_VCALL<void>(v144, 4);
    }
    v145 = reinterpret_cast<uint32_t *>(sub_B0E610(0xC5B4E81B));
    sub_AFC3F0(v145, const_cast<char *>("ImgIndexDefault"));
    sub_AFC3F0(v145, const_cast<char *>("MoneyImgPrefix"));
    sub_AFC3F0(v145, const_cast<char *>("SkillPointImgPrefix"));
    sub_AFC3F0(v145, const_cast<char *>("KeyImgPrefix"));
    sub_AFC3F0(v145, const_cast<char *>("MaxItemsBySection"));
    sub_AFC3F0(v145, const_cast<char *>("DiamondImgPrefix"));
    v146 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_online_iap.xml.bin"));
    v147 = v146;
    if ( v146 != 0 && G4_VCALL<int>(v146, 20) != 0 )
    {
      sub_A51770(v147, 0, 0, 0);
      v414 = reinterpret_cast<uint32_t *>(sub_B110B0(0xF96A52E9));
      sub_AFC4B0(v414, const_cast<char *>("Constant_01"));
      G4_VCALL<void>(v147, 4);
    }
    v148 = reinterpret_cast<uint32_t *>(sub_B0E610(0xA3FB5F74));
    sub_AFC3F0(v148, const_cast<char *>("CategoryTitle"));
    v149 = reinterpret_cast<uint32_t *>(sub_B0E610(0xFE6BC68A));
    sub_AFC3F0(v149, const_cast<char *>("Category"));
    sub_AFC3F0(v149, const_cast<char *>("LookUpStringTitle"));
    sub_AFC3F0(v149, const_cast<char *>("LookUpStringContent"));
    v150 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_options_help.xml.bin"));
    v151 = v150;
    if ( v150 != 0 && G4_VCALL<int>(v150, 20) != 0 )
    {
      sub_A51920(v151, 0, 0, 0);
      v1306 = reinterpret_cast<uint32_t *>(sub_B110B0(0xDCACF28C));
      sub_AFC4B0(v1306, const_cast<char *>("Controls"));
      sub_AFC4B0(v1306, const_cast<char *>("Missions"));
      sub_AFC4B0(v1306, const_cast<char *>("CasinoGames"));
      sub_AFC4B0(v1306, const_cast<char *>("Map"));
      sub_AFC4B0(v1306, const_cast<char *>("Shop"));
      sub_AFC4B0(v1306, const_cast<char *>("Other"));
      sub_AFC4B0(v1306, const_cast<char *>("ParentsInfo"));
      sub_A51AF0(v151, 0, 0, 0);
      v1307 = reinterpret_cast<uint32_t *>(sub_B110B0(0x189F0008u));
      sub_AFC4B0(v1307, const_cast<char *>("ControlsHelp00"));
      sub_AFC4B0(v1307, const_cast<char *>("MissionsHelp00"));
      sub_AFC4B0(v1307, const_cast<char *>("CasinoGamesHelp00"));
      sub_AFC4B0(v1307, const_cast<char *>("MapHelp00"));
      sub_AFC4B0(v1307, const_cast<char *>("ShopHelp00"));
      sub_AFC4B0(v1307, const_cast<char *>("OtherHelp00"));
      sub_AFC4B0(v1307, const_cast<char *>("ParentInfoHelp00"));
      G4_VCALL<void>(v151, 4);
    }
    v152 = reinterpret_cast<uint32_t *>(sub_B0E610(0x812EBD5C));
    sub_AFC3F0(v152, const_cast<char *>("spawnPrimitive"));
    sub_AFC3F0(v152, const_cast<char *>("openingTime"));
    sub_AFC3F0(v152, const_cast<char *>("gliding_acceleration"));
    sub_AFC3F0(v152, const_cast<char *>("gliding_topSpeed"));
    sub_AFC3F0(v152, const_cast<char *>("falling_topSpeed"));
    sub_AFC3F0(v152, const_cast<char *>("diving_glideMultiplier"));
    sub_AFC3F0(v152, const_cast<char *>("diving_dragMultiplier"));
    sub_AFC3F0(v152, const_cast<char *>("braking_glideMultiplier"));
    sub_AFC3F0(v152, const_cast<char *>("braking_dragMultiplier"));
    sub_AFC3F0(v152, const_cast<char *>("drag_airResistCoef"));
    sub_AFC3F0(v152, const_cast<char *>("drag_inverseCoef"));
    sub_AFC3F0(v152, const_cast<char *>("drag_sideCoef"));
    sub_AFC3F0(v152, const_cast<char *>("drag_upCoef"));
    sub_AFC3F0(v152, const_cast<char *>("drag_frontCoef"));
    v153 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_parachute.xml.bin"));
    v154 = v153;
    if ( v153 != 0 && G4_VCALL<int>(v153, 20) != 0 )
    {
      sub_A51CC0(v154, 0, 0, 0);
      v413 = reinterpret_cast<uint32_t *>(sub_B110B0(0x8B1C3DDF));
      sub_AFC4B0(v413, const_cast<char *>("DefaultParachute"));
      G4_VCALL<void>(v154, 4);
    }
    v155 = reinterpret_cast<uint32_t *>(sub_B0E610(0xBD2714B9));
    sub_AFC3F0(v155, const_cast<char *>("timerLength"));
    sub_AFC3F0(v155, const_cast<char *>("resetTimerCost"));
    sub_AFC3F0(v155, const_cast<char *>("lootTables"));
    sub_AFC3F0(v155, const_cast<char *>("numItems"));
    v156 = reinterpret_cast<uint32_t *>(sub_B0E610(0x129D3EAu));
    sub_AFC3F0(v156, const_cast<char *>("itemList"));
    v157 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_pawn_shop.xml.bin"));
    v158 = v157;
    if ( v157 != 0 && G4_VCALL<int>(v157, 20) != 0 )
    {
      sub_A51E70(v158, 0, 0, 0);
      v412 = reinterpret_cast<uint32_t *>(sub_B110B0(0xD7D25962));
      sub_AFC4B0(v412, const_cast<char *>("MainPawnShop"));
      sub_A52040(v158, 0, 0, 0);
      v1206 = reinterpret_cast<uint32_t *>(sub_B110B0(0x7B74D568u));
      sub_AFC4B0(v1206, const_cast<char *>("StartingList"));
      sub_AFC4B0(v1206, const_cast<char *>("UpdateList"));
      G4_VCALL<void>(v158, 4);
    }
    v159 = reinterpret_cast<uint32_t *>(sub_B0E610(0xD4C1BB11));
    sub_AFC3F0(v159, const_cast<char *>("Image"));
    sub_AFC3F0(v159, const_cast<char *>("StatCounter_MoneySpent"));
    v160 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_player_status.xml.bin"));
    v161 = v160;
    if ( v160 != 0 && G4_VCALL<int>(v160, 20) != 0 )
    {
      sub_A521F0(v161, 0, 0, 0);
      v1305 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA5FFD62B));
      sub_AFC4B0(v1305, const_cast<char *>("Clothing"));
      sub_AFC4B0(v1305, const_cast<char *>("Vehicles"));
      sub_AFC4B0(v1305, const_cast<char *>("Weapons"));
      sub_AFC4B0(v1305, const_cast<char *>("Crates"));
      sub_AFC4B0(v1305, const_cast<char *>("Ammo"));
      sub_AFC4B0(v1305, const_cast<char *>("Consumables"));
      sub_AFC4B0(v1305, const_cast<char *>("Special"));
      G4_VCALL<void>(v161, 4);
    }
    v162 = reinterpret_cast<uint32_t *>(sub_B0E610(0xFBEFB280));
    sub_AFC3F0(v162, const_cast<char *>("label"));
    v163 = reinterpret_cast<uint32_t *>(sub_B0E610(0x5AD86A25u));
    sub_AFC3F0(v163, const_cast<char *>("jingles"));
    sub_AFC3F0(v163, const_cast<char *>("songs"));
    sub_AFC3F0(v163, const_cast<char *>("host"));
    sub_AFC3F0(v163, const_cast<char *>("stationIcon"));
    sub_AFC3F0(v163, const_cast<char *>("stationId"));
    sub_AFC3F0(v163, const_cast<char *>("stationName"));
    sub_AFC3F0(v163, const_cast<char *>("playAdvert"));
    v164 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_radio_blaster_station.xml.bin"));
    v165 = v164;
    if ( v164 != 0 && G4_VCALL<int>(v164, 20) != 0 )
    {
      sub_A523A0(v165, 0, 0, 0);
      v411 = reinterpret_cast<uint32_t *>(sub_B110B0(0x22CFB44Cu));
      sub_AFC4B0(v411, const_cast<char *>("advert_01"));
      sub_A52550(v165, 0, 0, 0);
      v1304 = reinterpret_cast<uint32_t *>(sub_B110B0(0x31D077D0u));
      sub_AFC4B0(v1304, const_cast<char *>("radio_blaster_off"));
      sub_AFC4B0(v1304, const_cast<char *>("radio_blaster_oldies"));
      sub_AFC4B0(v1304, const_cast<char *>("radio_blaster_Rock"));
      sub_AFC4B0(v1304, const_cast<char *>("radio_blaster_80s"));
      sub_AFC4B0(v1304, const_cast<char *>("radio_blaster_electro"));
      sub_AFC4B0(v1304, const_cast<char *>("radio_blaster_hiphop"));
      G4_VCALL<void>(v165, 4);
    }
    v166 = reinterpret_cast<uint32_t *>(sub_B0E610(0xDA8D8B06));
    sub_AFC3F0(v166, const_cast<char *>("DistrictName"));
    sub_AFC3F0(v166, const_cast<char *>("Description"));
    sub_AFC3F0(v166, const_cast<char *>("Upgrades"));
    sub_AFC3F0(v166, const_cast<char *>("Icon"));
    sub_AFC3F0(v166, const_cast<char *>("OwnedStashBonus"));
    sub_AFC3F0(v166, const_cast<char *>("TrackingEventId"));
    sub_AFC3F0(v166, const_cast<char *>("RA_Purchase"));
    sub_AFC3F0(v166, const_cast<char *>("DistrictDominationPrize"));
    v167 = reinterpret_cast<uint32_t *>(sub_B0E610(0xD9A86B32));
    sub_AFC3F0(v167, const_cast<char *>("CityDominationPrizeID"));
    v168 = reinterpret_cast<uint32_t *>(sub_B0E610(0x5165D6E1u));
    sub_AFC3F0(v168, const_cast<char *>("Name"));
    sub_AFC3F0(v168, const_cast<char *>("Description"));
    sub_AFC3F0(v168, const_cast<char *>("LongDescription"));
    sub_AFC3F0(v168, const_cast<char *>("District"));
    sub_AFC3F0(v168, const_cast<char *>("Size"));
    sub_AFC3F0(v168, const_cast<char *>("Icon"));
    sub_AFC3F0(v168, const_cast<char *>("RA_Purchase"));
    sub_AFC3F0(v168, const_cast<char *>("ResetPoint"));
    sub_AFC3F0(v168, const_cast<char *>("TrackingEventId"));
    v169 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_real_estate.xml.bin"));
    v170 = v169;
    if ( v169 != 0 && G4_VCALL<int>(v169, 20) != 0 )
    {
      sub_A52720(v170, 0, 0, 0);
      v408 = reinterpret_cast<uint32_t *>(sub_B110B0(0x648AD2Bu));
      sub_AFC4B0(v408, const_cast<char *>("OldTown"));
      sub_AFC4B0(v408, const_cast<char *>("Leasure"));
      sub_AFC4B0(v408, const_cast<char *>("Business"));
      sub_AFC4B0(v408, const_cast<char *>("WestDesert"));
      sub_AFC4B0(v408, const_cast<char *>("EastDesert"));
      sub_A528F0(v170, 0, 0, 0);
      v409 = reinterpret_cast<uint32_t *>(sub_B110B0(0xE362A987));
      sub_AFC4B0(v409, const_cast<char *>("Prize_1"));
      sub_A52AC0(v170, 0, 0, 0);
      v410 = reinterpret_cast<uint32_t *>(sub_B110B0(0x8DF2F4EC));
      sub_AFC4B0(v410, const_cast<char *>("OldTown_diner"));
      sub_AFC4B0(v410, const_cast<char *>("OldTown_store"));
      sub_AFC4B0(v410, const_cast<char *>("OldTown_mall"));
      sub_AFC4B0(v410, const_cast<char *>("OldTown_warehouse"));
      sub_AFC4B0(v410, const_cast<char *>("Leasure_stadium"));
      sub_AFC4B0(v410, const_cast<char *>("Leasure_airport"));
      sub_AFC4B0(v410, const_cast<char *>("Leasure_northCasino"));
      sub_AFC4B0(v410, const_cast<char *>("Leasure_southCasino"));
      sub_AFC4B0(v410, const_cast<char *>("Business_hospital"));
      sub_AFC4B0(v410, const_cast<char *>("Business_shop"));
      sub_AFC4B0(v410, const_cast<char *>("Business_villa"));
      sub_AFC4B0(v410, const_cast<char *>("Business_gasStation"));
      sub_AFC4B0(v410, const_cast<char *>("WestDesert_diner"));
      sub_AFC4B0(v410, const_cast<char *>("WestDesert_armyBase"));
      sub_AFC4B0(v410, const_cast<char *>("WestDesert_farm"));
      sub_AFC4B0(v410, const_cast<char *>("WestDesert_motel"));
      sub_AFC4B0(v410, const_cast<char *>("EastDesert_uberDam"));
      sub_AFC4B0(v410, const_cast<char *>("EastDesert_motel"));
      sub_AFC4B0(v410, const_cast<char *>("EastDesert_warehouse"));
      sub_AFC4B0(v410, const_cast<char *>("EastDesert_diner"));
      G4_VCALL<void>(v170, 4);
    }
    v171 = reinterpret_cast<uint32_t *>(sub_B0E610(0x9C0A4126));
    sub_AFC3F0(v171, const_cast<char *>("RespawnPoint"));
    v172 = reinterpret_cast<uint32_t *>(sub_B0E610(0x4E8C42CFu));
    sub_AFC3F0(v172, const_cast<char *>("TypeOrder"));
    v173 = reinterpret_cast<uint32_t *>(sub_B0E610(0x25E0CC51u));
    sub_AFC3F0(v173, const_cast<char *>("Stash_Start"));
    sub_AFC3F0(v173, const_cast<char *>("Timer_Start"));
    sub_AFC3F0(v173, const_cast<char *>("Stash_Upgrades"));
    sub_AFC3F0(v173, const_cast<char *>("Timer_Upgrades"));
    sub_AFC3F0(v173, const_cast<char *>("Price_Upgrades"));
    sub_AFC3F0(v173, const_cast<char *>("Order"));
    v174 = reinterpret_cast<uint32_t *>(sub_B0E610(0x13D486BBu));
    sub_AFC3F0(v174, const_cast<char *>("Cost"));
    sub_AFC3F0(v174, const_cast<char *>("Payout"));
    v175 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_real_estate_definitions.xml.bin"));
    v176 = v175;
    if ( v175 != 0 && G4_VCALL<int>(v175, 20) != 0 )
    {
      sub_A52C70(v176, 0, 0, 0);
      v404 = reinterpret_cast<uint32_t *>(sub_B110B0(0xC443CE0D));
      sub_AFC4B0(v404, const_cast<char *>("DefaultRespawnPoint"));
      sub_A52E40(v176, 0, 0, 0);
      v405 = reinterpret_cast<uint32_t *>(sub_B110B0(0x9B2CBB2B));
      sub_AFC4B0(v405, const_cast<char *>("Regular"));
      sub_A52FF0(v176, 0, 0, 0);
      v406 = reinterpret_cast<uint32_t *>(sub_B110B0(0xAB82C01C));
      sub_AFC4B0(v406, const_cast<char *>("Leasure"));
      sub_AFC4B0(v406, const_cast<char *>("Business"));
      sub_AFC4B0(v406, const_cast<char *>("OldTown"));
      sub_AFC4B0(v406, const_cast<char *>("WestDesert"));
      sub_AFC4B0(v406, const_cast<char *>("EastDesert"));
      sub_A531A0(v176, 0, 0, 0);
      v407 = reinterpret_cast<uint32_t *>(sub_B110B0(0x1074872Cu));
      sub_AFC4B0(v407, const_cast<char *>("Leisure_Sports"));
      sub_AFC4B0(v407, const_cast<char *>("Leisure_TaxFree"));
      sub_AFC4B0(v407, const_cast<char *>("Leisure_Slots"));
      sub_AFC4B0(v407, const_cast<char *>("Leisure_Escorts"));
      sub_AFC4B0(v407, const_cast<char *>("Business_Drugs"));
      sub_AFC4B0(v407, const_cast<char *>("Business_ChopShop"));
      sub_AFC4B0(v407, const_cast<char *>("Business_AdultFilms"));
      sub_AFC4B0(v407, const_cast<char *>("Business_Alcohol"));
      sub_AFC4B0(v407, const_cast<char *>("OldTown_Counterfeits"));
      sub_AFC4B0(v407, const_cast<char *>("OldTown_Candylab"));
      sub_AFC4B0(v407, const_cast<char *>("OldTown_Weapons"));
      sub_AFC4B0(v407, const_cast<char *>("OldTown_Storage"));
      sub_AFC4B0(v407, const_cast<char *>("WestDesert_Candylab"));
      sub_AFC4B0(v407, const_cast<char *>("WestDesert_Weapons"));
      sub_AFC4B0(v407, const_cast<char *>("WestDesert_DrugPlant"));
      sub_AFC4B0(v407, const_cast<char *>("WestDesert_AdultFilms"));
      sub_AFC4B0(v407, const_cast<char *>("EastDesert_ElectricPlants"));
      sub_AFC4B0(v407, const_cast<char *>("EastDesert_AdultFilms"));
      sub_AFC4B0(v407, const_cast<char *>("EastDesert_Alcohol"));
      sub_AFC4B0(v407, const_cast<char *>("EastDesert_Candylab"));
      G4_VCALL<void>(v176, 4);
    }
    v177 = reinterpret_cast<uint32_t *>(sub_B0E610(0xAEA1A710));
    sub_AFC3F0(v177, const_cast<char *>("AbilityPoints"));
    v178 = reinterpret_cast<uint32_t *>(sub_B0E610(0xF69378F3));
    sub_AFC3F0(v178, const_cast<char *>("Percentage"));
    sub_AFC3F0(v178, const_cast<char *>("APLevel"));
    sub_AFC3F0(v178, const_cast<char *>("LevelName"));
    v179 = reinterpret_cast<uint32_t *>(sub_B0E610(0x47BA1105u));
    sub_AFC3F0(v179, const_cast<char *>("Reward"));
    sub_AFC3F0(v179, const_cast<char *>("MaxRespect"));
    v180 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_respect.xml.bin"));
    v181 = v180;
    if ( v180 != 0 && G4_VCALL<int>(v180, 20) != 0 )
    {
      sub_A53350(v181, 0, 0, 0);
      v402 = reinterpret_cast<uint32_t *>(sub_B110B0(0x220DC90Du));
      sub_AFC4B0(v402, const_cast<char *>("APLevel1"));
      sub_AFC4B0(v402, const_cast<char *>("APLevel2"));
      sub_AFC4B0(v402, const_cast<char *>("APLevel3"));
      sub_AFC4B0(v402, const_cast<char *>("APLevel4"));
      sub_AFC4B0(v402, const_cast<char *>("APLevel5"));
      sub_AFC4B0(v402, const_cast<char *>("APLevel6"));
      sub_A53520(v181, 0, 0, 0);
      sub_B46010(0x31545CBu);
      sub_A536F0(v181, 0, 0, 0);
      v403 = reinterpret_cast<uint32_t *>(sub_B110B0(0x29A96561u));
      sub_AFC4B0(v403, const_cast<char *>("KillAlly"));
      sub_AFC4B0(v403, const_cast<char *>("KillCivilian"));
      sub_AFC4B0(v403, const_cast<char *>("KillPolice"));
      sub_AFC4B0(v403, const_cast<char *>("KillGangMember"));
      sub_AFC4B0(v403, const_cast<char *>("KillAlien"));
      sub_AFC4B0(v403, const_cast<char *>("KillMIB"));
      sub_AFC4B0(v403, const_cast<char *>("DestroyCar"));
      sub_AFC4B0(v403, const_cast<char *>("DestroyMoto"));
      sub_AFC4B0(v403, const_cast<char *>("DestroyBoat"));
      sub_AFC4B0(v403, const_cast<char *>("DestroyHelicopter"));
      sub_AFC4B0(v403, const_cast<char *>("DestroyAirplane"));
      sub_AFC4B0(v403, const_cast<char *>("PurchaseClothing"));
      sub_AFC4B0(v403, const_cast<char *>("PurchaseWeapon"));
      sub_AFC4B0(v403, const_cast<char *>("PurchaseVehicle"));
      sub_AFC4B0(v403, const_cast<char *>("OrderVehicle"));
      sub_AFC4B0(v403, const_cast<char *>("PurchaseConsumable"));
      sub_AFC4B0(v403, const_cast<char *>("PurchaseSuitcase"));
      sub_AFC4B0(v403, const_cast<char *>("OpenSuitcase"));
      sub_AFC4B0(v403, const_cast<char *>("HijackCar"));
      sub_AFC4B0(v403, const_cast<char *>("HijackMoto"));
      sub_AFC4B0(v403, const_cast<char *>("HijackBoat"));
      sub_AFC4B0(v403, const_cast<char *>("HijackHelicopter"));
      sub_AFC4B0(v403, const_cast<char *>("HijackAirplane"));
      sub_AFC4B0(v403, const_cast<char *>("CarPowerslide"));
      sub_AFC4B0(v403, const_cast<char *>("CarAirJump"));
      sub_AFC4B0(v403, const_cast<char *>("MotoWheelie"));
      sub_AFC4B0(v403, const_cast<char *>("MotoStoppie"));
      sub_AFC4B0(v403, const_cast<char *>("ParachuteOpen"));
      sub_AFC4B0(v403, const_cast<char *>("PropertyPurchased"));
      sub_AFC4B0(v403, const_cast<char *>("DistrictPurchased"));
      sub_AFC4B0(v403, const_cast<char *>("Trophy1Completed"));
      sub_AFC4B0(v403, const_cast<char *>("Trophy2Completed"));
      sub_AFC4B0(v403, const_cast<char *>("Trophy3Completed"));
      sub_AFC4B0(v403, const_cast<char *>("Tattoo1Completed"));
      sub_AFC4B0(v403, const_cast<char *>("Tattoo2Completed"));
      sub_AFC4B0(v403, const_cast<char *>("Tattoo3Completed"));
      G4_VCALL<void>(v181, 4);
    }
    v182 = reinterpret_cast<uint32_t *>(sub_B0E610(0xE2439B69));
    sub_AFC3F0(v182, const_cast<char *>("strength"));
    sub_AFC3F0(v182, const_cast<char *>("branch"));
    sub_AFC3F0(v182, const_cast<char *>("detail"));
    sub_AFC3F0(v182, const_cast<char *>("freq"));
    sub_AFC3F0(v182, const_cast<char *>("direction"));
    sub_AFC3F0(v182, const_cast<char *>("factor"));
    v183 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_shaders.xml.bin"));
    v184 = v183;
    if ( v183 != 0 && G4_VCALL<int>(v183, 20) != 0 )
    {
      sub_A538A0(v184, 0, 0, 0);
      v401 = reinterpret_cast<uint32_t *>(sub_B110B0(0x85ECA02F));
      sub_AFC4B0(v401, const_cast<char *>("Normal"));
      G4_VCALL<void>(v184, 4);
    }
    v185 = reinterpret_cast<uint32_t *>(sub_B0E610(0xDFBFE233));
    sub_AFC3F0(v185, const_cast<char *>("innerRadius"));
    sub_AFC3F0(v185, const_cast<char *>("outerRadius"));
    sub_AFC3F0(v185, const_cast<char *>("despawnRadius"));
    sub_AFC3F0(v185, const_cast<char *>("offScreenDespawnRadius"));
    sub_AFC3F0(v185, const_cast<char *>("minDistanceToObjects"));
    sub_AFC3F0(v185, const_cast<char *>("spawnPosConeValues"));
    sub_AFC3F0(v185, const_cast<char *>("spawnPosConeProbs"));
    sub_AFC3F0(v185, const_cast<char *>("spawnOrientAngleValues"));
    sub_AFC3F0(v185, const_cast<char *>("spawnOrientAngleProbs"));
    sub_AFC3F0(v185, const_cast<char *>("spawnTypeProbabilities"));
    v186 = reinterpret_cast<uint32_t *>(sub_B0E610(0xE5BADD87));
    sub_AFC3F0(v186, const_cast<char *>("maxSimultaneousSpawns"));
    sub_AFC3F0(v186, const_cast<char *>("maxSimultaneousSpawnsInWater"));
    sub_AFC3F0(v186, const_cast<char *>("maxSimultaneousSpawnsInAir"));
    v187 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_spawn_manager.xml.bin"));
    v188 = v187;
    if ( v187 != 0 && G4_VCALL<int>(v187, 20) != 0 )
    {
      sub_A53A70(v188, 0, 0, 0);
      v399 = reinterpret_cast<uint32_t *>(sub_B110B0(0x19A01D4Bu));
      sub_AFC4B0(v399, const_cast<char *>("Default"));
      sub_AFC4B0(v399, const_cast<char *>("NPC"));
      sub_AFC4B0(v399, const_cast<char *>("Vehicle"));
      sub_AFC4B0(v399, const_cast<char *>("ParkedVehicle"));
      sub_AFC4B0(v399, const_cast<char *>("Interior"));
      sub_AFC4B0(v399, const_cast<char *>("OnFootNPC"));
      sub_AFC4B0(v399, const_cast<char *>("OnFootVehicle"));
      sub_AFC4B0(v399, const_cast<char *>("OnFootParkedVehicle"));
      sub_AFC4B0(v399, const_cast<char *>("CopNPC"));
      sub_AFC4B0(v399, const_cast<char *>("CopCar"));
      sub_AFC4B0(v399, const_cast<char *>("OnFootCopNPC"));
      sub_AFC4B0(v399, const_cast<char *>("OnFootCopCar"));
      sub_AFC4B0(v399, const_cast<char *>("RoadBlock"));
      sub_AFC4B0(v399, const_cast<char *>("OnFootInterior"));
      sub_AFC4B0(v399, const_cast<char *>("OnFootCopInterior"));
      sub_AFC4B0(v399, const_cast<char *>("OnFootNightclub"));
      sub_AFC4B0(v399, const_cast<char *>("OnFootInteriorSmall"));
      sub_AFC4B0(v399, const_cast<char *>("OnFootCopInteriorSmall"));
      sub_AFC4B0(v399, const_cast<char *>("OnFootRoadBlock"));
      sub_A53C40(v188, 0, 0, 0);
      v400 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA3E74ECA));
      sub_AFC4B0(v400, const_cast<char *>("HighValueTarget"));
      sub_AFC4B0(v400, const_cast<char *>("Tank"));
      sub_AFC4B0(v400, const_cast<char *>("HelicopterPolice"));
      sub_AFC4B0(v400, const_cast<char *>("HelicopterApache"));
      sub_AFC4B0(v400, const_cast<char *>("BearCat"));
      sub_AFC4B0(v400, const_cast<char *>("JetArmy"));
      sub_AFC4B0(v400, const_cast<char *>("CarngGuy"));
      sub_AFC4B0(v400, const_cast<char *>("CarngGirl"));
      G4_VCALL<void>(v188, 4);
    }
    sub_B0E610(0x86BCC679);
    v189 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_stat_counters.xml.bin"));
    v190 = v189;
    if ( v189 != 0 && G4_VCALL<int>(v189, 20) != 0 )
    {
      sub_A53E10(v190, 0, 0, 0);
      sub_B46630(0x7B41F348u);
      G4_VCALL<void>(v190, 4);
    }
    v1218 = reinterpret_cast<uint32_t *>(sub_B0E610(0xDF40874D));
    sub_AFC3F0(v1218, const_cast<char *>("StuckThresholdSpeed"));
    sub_AFC3F0(v1218, const_cast<char *>("PathWalkSpeedMin"));
    sub_AFC3F0(v1218, const_cast<char *>("PathRunSpeedMin"));
    sub_AFC3F0(v1218, const_cast<char *>("StuckTimeMax"));
    sub_AFC3F0(v1218, const_cast<char *>("StuckTimeScaredMax"));
    sub_AFC3F0(v1218, const_cast<char *>("MaxTimeToCollision"));
    sub_AFC3F0(v1218, const_cast<char *>("DistToVehicleCollision"));
    sub_AFC3F0(v1218, const_cast<char *>("PathFollowPredictTime"));
    sub_AFC3F0(v1218, const_cast<char *>("PathFollowPredictDistMin"));
    sub_AFC3F0(v1218, const_cast<char *>("PathFollowPredictDistMax"));
    sub_AFC3F0(v1218, const_cast<char *>("PathFollowRadius"));
    sub_AFC3F0(v1218, const_cast<char *>("PathFollowReachedWaypointDist"));
    sub_AFC3F0(v1218, const_cast<char *>("WalkTurningFactor"));
    sub_AFC3F0(v1218, const_cast<char *>("RunTurningFactor"));
    sub_AFC3F0(v1218, const_cast<char *>("SprintTurningFactor"));
    sub_AFC3F0(v1218, const_cast<char *>("AvoidSteerFactor"));
    v1219 = reinterpret_cast<uint32_t *>(sub_B0E610(0xF054BEE8));
    sub_AFC3F0(v1219, const_cast<char *>("StuckThresholdSpeedRatio"));
    sub_AFC3F0(v1219, const_cast<char *>("StuckOnWallTime"));
    sub_AFC3F0(v1219, const_cast<char *>("StuckTimeMax"));
    sub_AFC3F0(v1219, const_cast<char *>("PathFollowPredictTime"));
    sub_AFC3F0(v1219, const_cast<char *>("PathFollowPredictDistMin"));
    sub_AFC3F0(v1219, const_cast<char *>("PathFollowPredictDistMax"));
    sub_AFC3F0(v1219, const_cast<char *>("PathFollowRadius"));
    sub_AFC3F0(v1219, const_cast<char *>("PathFollowReachedWaypointDist"));
    sub_AFC3F0(v1219, const_cast<char *>("PathFollowOffsetZ"));
    sub_AFC3F0(v1219, const_cast<char *>("TurningFactor"));
    sub_AFC3F0(v1219, const_cast<char *>("TiltingFactor"));
    sub_AFC3F0(v1219, const_cast<char *>("LiftingFactor"));
    sub_AFC3F0(v1219, const_cast<char *>("CruisingAccelFactor"));
    sub_AFC3F0(v1219, const_cast<char *>("CruisingAccelMin"));
    sub_AFC3F0(v1219, const_cast<char *>("CruisingAccelMax"));
    sub_AFC3F0(v1219, const_cast<char *>("CruisingAccelGravityAdjustMin"));
    sub_AFC3F0(v1219, const_cast<char *>("CruisingAccelGravityAdjustMax"));
    sub_AFC3F0(v1219, const_cast<char *>("CruisingAccelSinFrontUphillAngle"));
    sub_AFC3F0(v1219, const_cast<char *>("IntersectAccelFactor"));
    sub_AFC3F0(v1219, const_cast<char *>("IntersectPropFactor"));
    sub_AFC3F0(v1219, const_cast<char *>("FollowingPropFactor"));
    sub_AFC3F0(v1219, const_cast<char *>("FollowingDerivFactor"));
    sub_AFC3F0(v1219, const_cast<char *>("FollowingAccelFactor"));
    sub_AFC3F0(v1219, const_cast<char *>("FollowingDesiredTime"));
    sub_AFC3F0(v1219, const_cast<char *>("FollowingDesiredDistMin"));
    sub_AFC3F0(v1219, const_cast<char *>("FollowingDiffOrientAngleMax"));
    sub_AFC3F0(v1219, const_cast<char *>("FollowingDiffPosAngleMax"));
    sub_AFC3F0(v1219, const_cast<char *>("ImminentCollisionDiffOrientAngleMin"));
    sub_AFC3F0(v1219, const_cast<char *>("ImminentCollisionDiffOrientAngleMax"));
    sub_AFC3F0(v1219, const_cast<char *>("ImminentCollisionDiffPosAngleMin"));
    sub_AFC3F0(v1219, const_cast<char *>("ImminentCollisionDiffPosAngleMax"));
    sub_AFC3F0(v1219, const_cast<char *>("ImminentCollisionTime"));
    sub_AFC3F0(v1219, const_cast<char *>("ImminentCollisionDistMin"));
    sub_AFC3F0(v1219, const_cast<char *>("TurningAccelAmplitudeMin"));
    sub_AFC3F0(v1219, const_cast<char *>("TurningAccelAmplitudeMax"));
    sub_AFC3F0(v1219, const_cast<char *>("TurningSpeedForMaxAmplitude"));
    sub_AFC3F0(v1219, const_cast<char *>("ChasingTargetWaypointInterval"));
    sub_AFC3F0(v1219, const_cast<char *>("ChasingTargetOffsetMax"));
    sub_AFC3F0(v1219, const_cast<char *>("ChasingTargetOffsetZ"));
    sub_AFC3F0(v1219, const_cast<char *>("ChasingWaypointsMax"));
    sub_AFC3F0(v1219, const_cast<char *>("ChasingTargetFarDistMin"));
    sub_AFC3F0(v1219, const_cast<char *>("ChasingTargetCloseDistMin"));
    sub_AFC3F0(v1219, const_cast<char *>("ChasingTargetFarOffsetZ"));
    sub_AFC3F0(v1219, const_cast<char *>("ChasingUseRoadSplinesDistanceThreshold"));
    v191 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_steering_behaviors.xml.bin"));
    v192 = v191;
    if ( v191 != 0 && G4_VCALL<int>(v191, 20) != 0 )
    {
      sub_A53FC0(v192, 0, 0, 0);
      v1205 = reinterpret_cast<uint32_t *>(sub_B110B0(0xB2339F4C));
      sub_AFC4B0(v1205, const_cast<char *>("Default"));
      sub_AFC4B0(v1205, const_cast<char *>("Eman"));
      sub_A54190(v192, 0, 0, 0);
      v1303 = reinterpret_cast<uint32_t *>(sub_B110B0(0xEDDCC95u));
      sub_AFC4B0(v1303, const_cast<char *>("Default"));
      sub_AFC4B0(v1303, const_cast<char *>("Boat"));
      sub_AFC4B0(v1303, const_cast<char *>("Moto"));
      sub_AFC4B0(v1303, const_cast<char *>("BikeSport"));
      sub_AFC4B0(v1303, const_cast<char *>("Race"));
      sub_AFC4B0(v1303, const_cast<char *>("BikeSportRace"));
      sub_AFC4B0(v1303, const_cast<char *>("Airplane"));
      sub_AFC4B0(v1303, const_cast<char *>("Helicopter"));
      sub_AFC4B0(v1303, const_cast<char *>("HelicopterApache"));
      sub_AFC4B0(v1303, const_cast<char *>("HelicopterScriptedApache"));
      sub_AFC4B0(v1303, const_cast<char *>("Jetpack"));
      G4_VCALL<void>(v192, 4);
    }
    v193 = reinterpret_cast<uint32_t *>(sub_B0E610(0x3D4C9814u));
    sub_AFC3F0(v193, const_cast<char *>("Name"));
    sub_AFC3F0(v193, const_cast<char *>("Description"));
    sub_AFC3F0(v193, const_cast<char *>("Icon"));
    sub_AFC3F0(v193, const_cast<char *>("RA_Completed"));
    sub_AFC3F0(v193, const_cast<char *>("TrackingEventId"));
    sub_AFC3F0(v193, const_cast<char *>("GameCenterTrophy"));
    sub_AFC3F0(v193, const_cast<char *>("TrophyStatCounters"));
    sub_AFC3F0(v193, const_cast<char *>("TrophyQty"));
    sub_AFC3F0(v193, const_cast<char *>("TattooStatCounter"));
    sub_AFC3F0(v193, const_cast<char *>("TattooQty"));
    sub_AFC3F0(v193, const_cast<char *>("OnlinePoints"));
    sub_AFC3F0(v193, const_cast<char *>("CanBeEarnedLowRes"));
    sub_AFC3F0(v193, const_cast<char *>("RelatedMissionSections"));
    v194 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_tattoos_trophies.xml.bin"));
    v195 = v194;
    if ( v194 != 0 && G4_VCALL<int>(v194, 20) != 0 )
    {
      sub_A54360(v195, 0, 0, 0);
      sub_B470D0(0x6A7CD882u);
      sub_A54530(v195, 0, 0, 0);
      sub_B47510(0xF082661D);
      G4_VCALL<void>(v195, 4);
    }
    v196 = reinterpret_cast<uint32_t *>(sub_B0E610(0xBA472B26));
    sub_AFC3F0(v196, const_cast<char *>("Name"));
    sub_AFC3F0(v196, const_cast<char *>("Description"));
    sub_AFC3F0(v196, const_cast<char *>("Photo"));
    v197 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_teleportzones.xml.bin"));
    v198 = v197;
    if ( v197 != 0 && G4_VCALL<int>(v197, 20) != 0 )
    {
      sub_A54700(v198, 0, 0, 0);
      v398 = reinterpret_cast<uint32_t *>(sub_B110B0(0x1F36FCFBu));
      sub_AFC4B0(v398, const_cast<char *>("TempName_StripClub"));
      G4_VCALL<void>(v198, 4);
    }
    v199 = reinterpret_cast<uint32_t *>(sub_B0E610(0xFAE38A46));
    sub_AFC3F0(v199, const_cast<char *>("nodeName"));
    sub_AFC3F0(v199, const_cast<char *>("coverType"));
    v200 = reinterpret_cast<uint32_t *>(sub_B0E610(0xA6F33706));
    sub_AFC3F0(v200, const_cast<char *>("coverList"));
    v201 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_vehicle_cover.xml.bin"));
    v202 = v201;
    if ( v201 != 0 && G4_VCALL<int>(v201, 20) != 0 )
    {
      sub_A548D0(v202, 0, 0, 0);
      v1302 = reinterpret_cast<uint32_t *>(sub_B110B0(0x6F31647Bu));
      sub_AFC4B0(v1302, const_cast<char *>("FrontLeftCrouch"));
      sub_AFC4B0(v1302, const_cast<char *>("FrontRightCrouch"));
      sub_AFC4B0(v1302, const_cast<char *>("BackLeftCrouch"));
      sub_AFC4B0(v1302, const_cast<char *>("BackRightCrouch"));
      sub_AFC4B0(v1302, const_cast<char *>("FrontCrouch"));
      sub_AFC4B0(v1302, const_cast<char *>("BackCrouch"));
      sub_A54A80(v202, 0, 0, 0);
      v1204 = reinterpret_cast<uint32_t *>(sub_B110B0(0x22313E6Bu));
      sub_AFC4B0(v1204, const_cast<char *>("Default"));
      sub_AFC4B0(v1204, const_cast<char *>("CopCar"));
      G4_VCALL<void>(v202, 4);
    }
    v203 = reinterpret_cast<uint32_t *>(sub_B0E610(0xCAD78049));
    sub_AFC3F0(v203, const_cast<char *>("isAttached"));
    sub_AFC3F0(v203, const_cast<char *>("targetDummy"));
    sub_AFC3F0(v203, const_cast<char *>("syncTransform"));
    sub_AFC3F0(v203, const_cast<char *>("syncVisibility"));
    sub_AFC3F0(v203, const_cast<char *>("offset"));
    sub_AFC3F0(v203, const_cast<char *>("offsetIsInWorldSpace"));
    sub_AFC3F0(v203, const_cast<char *>("scale"));
    sub_AFC3F0(v203, const_cast<char *>("loopCount"));
    sub_AFC3F0(v203, const_cast<char *>("pauseAtEnd"));
    sub_AFC3F0(v203, const_cast<char *>("bdae"));
    sub_AFC3F0(v203, const_cast<char *>("bdaeLowRes"));
    sub_AFC3F0(v203, const_cast<char *>("bdaeForPlayer"));
    sub_AFC3F0(v203, const_cast<char *>("DespawnTimer"));
    sub_AFC3F0(v203, const_cast<char *>("DespawnAlphaFade"));
    sub_AFC3F0(v203, const_cast<char *>("DespawnWithParent"));
    sub_AFC3F0(v203, const_cast<char *>("DespawnWithParentVisibility"));
    sub_AFC3F0(v203, const_cast<char *>("minInstance"));
    sub_AFC3F0(v203, const_cast<char *>("maxInstance"));
    sub_AFC3F0(v203, const_cast<char *>("SoundFX"));
    sub_AFC3F0(v203, const_cast<char *>("StopSoundWhenFXEnd"));
    sub_AFC3F0(v203, const_cast<char *>("LowResPoolInstances"));
    sub_AFC3F0(v203, const_cast<char *>("hack_applyStartIdleEndFix"));
    v204 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_vfx.xml.bin"));
    v205 = v204;
    if ( v204 != 0 && G4_VCALL<int>(v204, 20) != 0 )
    {
      sub_A54C30(v205, 0, 0, 0);
      sub_B478F0(1276832823);
      G4_VCALL<void>(v205, 4);
    }
    v206 = reinterpret_cast<uint32_t *>(sub_B0E610(0x7A6A30F9u));
    sub_AFC3F0(v206, const_cast<char *>("MayhemPoints"));
    sub_AFC3F0(v206, const_cast<char *>("Radius"));
    sub_AFC3F0(v206, const_cast<char *>("StuckDespawnRadius"));
    sub_AFC3F0(v206, const_cast<char *>("AutoIncreaseTimer"));
    sub_AFC3F0(v206, const_cast<char *>("EscapeTimeout"));
    sub_AFC3F0(v206, const_cast<char *>("FrozenEscapedTime"));
    sub_AFC3F0(v206, const_cast<char *>("NumCops"));
    sub_AFC3F0(v206, const_cast<char *>("RatioInVehicleIfOnFoot"));
    sub_AFC3F0(v206, const_cast<char *>("RatioInVehicleIfInVehicle"));
    sub_AFC3F0(v206, const_cast<char *>("OnFootSpawns"));
    sub_AFC3F0(v206, const_cast<char *>("VehicleSpawns"));
    sub_AFC3F0(v206, const_cast<char *>("WantsToRamTarget"));
    sub_AFC3F0(v206, const_cast<char *>("SpawnRoadBlocks"));
    sub_AFC3F0(v206, const_cast<char *>("StatCounter_Escape"));
    v207 = reinterpret_cast<uint32_t *>(sub_B0E610(0x23897FC5u));
    sub_AFC3F0(v207, const_cast<char *>("Values"));
    v208 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_wanted_level.xml.bin"));
    v209 = v208;
    if ( v208 != 0 && G4_VCALL<int>(v208, 20) != 0 )
    {
      sub_A54DE0(v209, 0, 0, 0);
      v1300 = reinterpret_cast<uint32_t *>(sub_B110B0(0x2D347453u));
      sub_AFC4B0(v1300, const_cast<char *>("WantedLevelZero"));
      sub_AFC4B0(v1300, const_cast<char *>("WantedLevelOne"));
      sub_AFC4B0(v1300, const_cast<char *>("WantedLevelTwo"));
      sub_AFC4B0(v1300, const_cast<char *>("WantedLevelThree"));
      sub_AFC4B0(v1300, const_cast<char *>("WantedLevelFour"));
      sub_AFC4B0(v1300, const_cast<char *>("WantedLevelFive"));
      sub_A54FB0(v209, 0, 0, 0);
      v1301 = reinterpret_cast<uint32_t *>(sub_B110B0(0xAAF0B498));
      sub_AFC4B0(v1301, const_cast<char *>("JackedCivCar"));
      sub_AFC4B0(v1301, const_cast<char *>("JackedCopCar"));
      sub_AFC4B0(v1301, const_cast<char *>("HitCiv"));
      sub_AFC4B0(v1301, const_cast<char *>("HitCop"));
      sub_AFC4B0(v1301, const_cast<char *>("HitCivCar"));
      sub_AFC4B0(v1301, const_cast<char *>("HitCopCar"));
      sub_AFC4B0(v1301, const_cast<char *>("DestroyedCivCar"));
      sub_AFC4B0(v1301, const_cast<char *>("DestroyedCopCar"));
      sub_AFC4B0(v1301, const_cast<char *>("AimedAtCiv"));
      sub_AFC4B0(v1301, const_cast<char *>("AimedAtCop"));
      sub_AFC4B0(v1301, const_cast<char *>("KilledCiv"));
      sub_AFC4B0(v1301, const_cast<char *>("KilledCop"));
      sub_AFC4B0(v1301, const_cast<char *>("FiredGun"));
      sub_AFC4B0(v1301, const_cast<char *>("StartedFire"));
      sub_AFC4B0(v1301, const_cast<char *>("ObstructedCop"));
      sub_AFC4B0(v1301, const_cast<char *>("Tresspassing"));
      G4_VCALL<void>(v209, 4);
    }
    v210 = reinterpret_cast<uint32_t *>(sub_B0E610(0xDCB67F3A));
    sub_AFC3F0(v210, const_cast<char *>("Alias"));
    sub_AFC3F0(v210, const_cast<char *>("Reference"));
    v211 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_weapon_constants.xml.bin"));
    v212 = v211;
    if ( v211 != 0 && G4_VCALL<int>(v211, 20) != 0 )
    {
      sub_A55160(v212, 0, 0, 0);
      v1203 = reinterpret_cast<uint32_t *>(sub_B110B0(0x1D7B62D7u));
      sub_AFC4B0(v1203, const_cast<char *>("ArrowWeapon"));
      sub_AFC4B0(v1203, const_cast<char *>("BFG"));
      G4_VCALL<void>(v212, 4);
    }
    v213 = reinterpret_cast<uint32_t *>(sub_B0E610(0x1E358623u));
    sub_AFC3F0(v213, const_cast<char *>("vehicleAttachNode"));
    sub_AFC3F0(v213, const_cast<char *>("gunBarrelNode"));
    sub_AFC3F0(v213, const_cast<char *>("turretYawAcceleration"));
    sub_AFC3F0(v213, const_cast<char *>("turretYawMaxVelocity"));
    sub_AFC3F0(v213, const_cast<char *>("turretPitchAcceleration"));
    sub_AFC3F0(v213, const_cast<char *>("turretPitchMaxVelocity"));
    sub_AFC3F0(v213, const_cast<char *>("turretPitchMinAngle"));
    sub_AFC3F0(v213, const_cast<char *>("turretPitchMaxAngle"));
    sub_AFC3F0(v213, const_cast<char *>("turretPitchOffsetAngle"));
    sub_AFC3F0(v213, const_cast<char *>("turretAimResetTimer"));
    sub_AFC3F0(v213, const_cast<char *>("turretAimResetMinVelocity"));
    sub_AFC3F0(v213, const_cast<char *>("turretShootImpulse"));
    v214 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_weapon_mounted.xml.bin"));
    v215 = v214;
    if ( v214 != 0 && G4_VCALL<int>(v214, 20) != 0 )
    {
      sub_A55310(v215, 0, 0, 0);
      v1299 = reinterpret_cast<uint32_t *>(sub_B110B0(0x2D13E257u));
      sub_AFC4B0(v1299, const_cast<char *>("TankTurret"));
      sub_AFC4B0(v1299, const_cast<char *>("HeliApacheTurret"));
      sub_AFC4B0(v1299, const_cast<char *>("JetTurret"));
      sub_AFC4B0(v1299, const_cast<char *>("HeliPoliceTurret"));
      sub_AFC4B0(v1299, const_cast<char *>("BoatPoliceTurret"));
      sub_AFC4B0(v1299, const_cast<char *>("HeliMissiles"));
      sub_AFC4B0(v1299, const_cast<char *>("VTOLMissiles"));
      sub_AFC4B0(v1299, const_cast<char *>("BuggyTurret"));
      sub_AFC4B0(v1299, const_cast<char *>("RatRodTurret"));
      sub_AFC4B0(v1299, const_cast<char *>("TruckFlame"));
      sub_AFC4B0(v1299, const_cast<char *>("LazerTurret"));
      sub_AFC4B0(v1299, const_cast<char *>("HoverTankTurret"));
      sub_AFC4B0(v1299, const_cast<char *>("DropShipTurret"));
      sub_AFC4B0(v1299, const_cast<char *>("ZombieBoatTurret"));
      sub_AFC4B0(v1299, const_cast<char *>("ArmageddonPoliceTurret"));
      sub_AFC4B0(v1299, const_cast<char *>("MC4_car_Turret"));
      G4_VCALL<void>(v215, 4);
    }
    v216 = reinterpret_cast<uint32_t *>(sub_B0E610(0x3D5EE792u));
    sub_AFC3F0(v216, const_cast<char *>("Weapons"));
    sub_AFC3F0(v216, const_cast<char *>("AmmoNum"));
    v217 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_weapon_presets.xml.bin"));
    v218 = v217;
    if ( v217 != 0 && G4_VCALL<int>(v217, 20) != 0 )
    {
      sub_A554E0(v218, 0, 0, 0);
      v397 = reinterpret_cast<uint32_t *>(sub_B110B0(0x3817FF02u));
      sub_AFC4B0(v397, const_cast<char *>("Default"));
      G4_VCALL<void>(v218, 4);
    }
    v219 = reinterpret_cast<uint32_t *>(sub_B0E610(0xB16CDA64));
    sub_AFC3F0(v219, const_cast<char *>("maxDistance"));
    sub_AFC3F0(v219, const_cast<char *>("maxCarried"));
    sub_AFC3F0(v219, const_cast<char *>("throwAngle"));
    sub_AFC3F0(v219, const_cast<char *>("throwAngleCover"));
    sub_AFC3F0(v219, const_cast<char *>("throwInterval"));
    sub_AFC3F0(v219, const_cast<char *>("rotationImpulse"));
    sub_AFC3F0(v219, const_cast<char *>("impulseFactor"));
    sub_AFC3F0(v219, const_cast<char *>("impulseFactorCover"));
    sub_AFC3F0(v219, const_cast<char *>("impulseFactorNoTarget"));
    sub_AFC3F0(v219, const_cast<char *>("propulsionSpeed"));
    sub_AFC3F0(v219, const_cast<char *>("trailVFX"));
    sub_AFC3F0(v219, const_cast<char *>("seekingEnabled"));
    sub_AFC3F0(v219, const_cast<char *>("seekingTimeDelay"));
    sub_AFC3F0(v219, const_cast<char *>("seekingDisableDistance"));
    sub_AFC3F0(v219, const_cast<char *>("seekingAngularVelocity"));
    sub_AFC3F0(v219, const_cast<char *>("seekingImprecisionRadius"));
    sub_AFC3F0(v219, const_cast<char *>("explosionTimer"));
    sub_AFC3F0(v219, const_cast<char *>("explosionDamage"));
    sub_AFC3F0(v219, const_cast<char *>("explosionSecurityDistance"));
    sub_AFC3F0(v219, const_cast<char *>("explosionApplyDmgOnImpact"));
    sub_AFC3F0(v219, const_cast<char *>("explosionInnerRadius"));
    sub_AFC3F0(v219, const_cast<char *>("explosionOuterRadius"));
    sub_AFC3F0(v219, const_cast<char *>("explosionVFX"));
    sub_AFC3F0(v219, const_cast<char *>("explosionSFX"));
    sub_AFC3F0(v219, const_cast<char *>("impactSFX"));
    sub_AFC3F0(v219, const_cast<char *>("throwSFX"));
    sub_AFC3F0(v219, const_cast<char *>("physicsForce"));
    sub_AFC3F0(v219, const_cast<char *>("physicsInnerRadius"));
    sub_AFC3F0(v219, const_cast<char *>("physicsOuterRadius"));
    sub_AFC3F0(v219, const_cast<char *>("StatCounter_Kill"));
    sub_AFC3F0(v219, const_cast<char *>("IsForGrenadeLauncher"));
    v220 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("giv_weapon_projectile.xml.bin"));
    v221 = v220;
    if ( v220 != 0 && G4_VCALL<int>(v220, 20) != 0 )
    {
      sub_A556B0(v221, 0, 0, 0);
      sub_B497D0(0x94A593A1);
      G4_VCALL<void>(v221, 4);
    }
    v222 = reinterpret_cast<uint32_t *>(sub_B0E610(0x278A4231u));
    sub_AFC3F0(v222, const_cast<char *>("ingameVFX"));
    sub_AFC3F0(v222, const_cast<char *>("mapIcon"));
    sub_AFC3F0(v222, const_cast<char *>("mapIconCategory"));
    sub_AFC3F0(v222, const_cast<char *>("mapFlags"));
    sub_AFC3F0(v222, const_cast<char *>("hudDirectionMode"));
    v223 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("highlights_array.xml.bin"));
    v224 = v223;
    if ( v223 != 0 && G4_VCALL<int>(v223, 20) != 0 )
    {
      sub_A55880(v224, 0, 0, 0);
      v1298 = reinterpret_cast<uint32_t *>(sub_B110B0(0x74D88FA3u));
      sub_AFC4B0(v1298, const_cast<char *>("Off"));
      sub_AFC4B0(v1298, const_cast<char *>("KillNPCMain"));
      sub_AFC4B0(v1298, const_cast<char *>("KillNPCSub"));
      sub_AFC4B0(v1298, const_cast<char *>("ProtectMain"));
      sub_AFC4B0(v1298, const_cast<char *>("ProtectSub"));
      sub_AFC4B0(v1298, const_cast<char *>("MoveMain"));
      sub_AFC4B0(v1298, const_cast<char *>("HighValuableTarget_Suitcase"));
      sub_AFC4B0(v1298, const_cast<char *>("HighValuableTarget_Clothing"));
      sub_AFC4B0(v1298, const_cast<char *>("HighValuableTarget_Weapon"));
      sub_AFC4B0(v1298, const_cast<char *>("HighValuableTarget_Vehicle"));
      sub_AFC4B0(v1298, const_cast<char *>("MoveSub"));
      sub_AFC4B0(v1298, const_cast<char *>("StealCar"));
      sub_AFC4B0(v1298, const_cast<char *>("Waypoint"));
      sub_AFC4B0(v1298, const_cast<char *>("GetMain"));
      sub_AFC4B0(v1298, const_cast<char *>("CopOnFoot"));
      sub_AFC4B0(v1298, const_cast<char *>("NPCFightMain"));
      sub_AFC4B0(v1298, const_cast<char *>("ParkingLot"));
      sub_AFC4B0(v1298, const_cast<char *>("TargetName"));
      G4_VCALL<void>(v224, 4);
    }
    v225 = reinterpret_cast<uint32_t *>(sub_B0E610(0x79859D27u));
    sub_AFC3F0(v225, const_cast<char *>("itemUnlock"));
    sub_AFC3F0(v225, const_cast<char *>("money"));
    sub_AFC3F0(v225, const_cast<char *>("safeHouseEnter"));
    sub_AFC3F0(v225, const_cast<char *>("safeHouseExit"));
    sub_AFC3F0(v225, const_cast<char *>("stats"));
    v226 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("levels_.xml.bin"));
    v227 = v226;
    if ( v226 != 0 && G4_VCALL<int>(v226, 20) != 0 )
    {
      sub_A55A50(v227, 0, 0, 0);
      v396 = reinterpret_cast<uint32_t *>(sub_B110B0(0x6785B612u));
      sub_AFC4B0(v396, const_cast<char *>("SpecialLevel"));
      G4_VCALL<void>(v227, 4);
    }
    v228 = reinterpret_cast<uint32_t *>(sub_B0E610(0x857665B2));
    sub_AFC3F0(v228, const_cast<char *>("allowFollowers"));
    sub_AFC3F0(v228, const_cast<char *>("entryPoint"));
    sub_AFC3F0(v228, const_cast<char *>("isInterior"));
    sub_AFC3F0(v228, const_cast<char *>("apex"));
    sub_AFC3F0(v228, const_cast<char *>("grapher"));
    sub_AFC3F0(v228, const_cast<char *>("navMesh"));
    sub_AFC3F0(v228, const_cast<char *>("keepNavMeshLoaded"));
    sub_AFC3F0(v228, const_cast<char *>("isCity"));
    sub_AFC3F0(v228, const_cast<char *>("spawnInputsPresetInterior"));
    sub_AFC3F0(v228, const_cast<char *>("spawnInputsPresetCopInterior"));
    sub_AFC3F0(v228, const_cast<char *>("MapInfo"));
    sub_AFC3F0(v228, const_cast<char *>("lightZone"));
    sub_AFC3F0(v228, const_cast<char *>("irradianceFile"));
    sub_AFC3F0(v228, const_cast<char *>("backdropFile"));
    sub_AFC3F0(v228, const_cast<char *>("backdropPosX"));
    sub_AFC3F0(v228, const_cast<char *>("backdropPosY"));
    sub_AFC3F0(v228, const_cast<char *>("backdropPosZ"));
    sub_AFC3F0(v228, const_cast<char *>("Name"));
    sub_AFC3F0(v228, const_cast<char *>("Type"));
    sub_AFC3F0(v228, const_cast<char *>("Description"));
    sub_AFC3F0(v228, const_cast<char *>("LongDescription"));
    sub_AFC3F0(v228, const_cast<char *>("Photo"));
    sub_AFC3F0(v228, const_cast<char *>("StopSounds"));
    v229 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("locations_.xml.bin"));
    v230 = v229;
    if ( v229 != 0 && G4_VCALL<int>(v229, 20) != 0 )
    {
      sub_A55C00(v230, 0, 0, 0);
      sub_B49CC0(0x9858E5AA);
      G4_VCALL<void>(v230, 4);
    }
    v231 = reinterpret_cast<uint32_t *>(sub_B0E610(0xC6997C69));
    sub_AFC3F0(v231, const_cast<char *>("hysteresis"));
    sub_AFC3F0(v231, const_cast<char *>("range"));
    v232 = reinterpret_cast<uint32_t *>(sub_B0E610(0xB05220E4));
    sub_AFC3F0(v232, const_cast<char *>("displayLastLevel"));
    sub_AFC3F0(v232, const_cast<char *>("generateLastLevel"));
    sub_AFC3F0(v232, const_cast<char *>("hysteresis"));
    sub_AFC3F0(v232, const_cast<char *>("name"));
    sub_AFC3F0(v232, const_cast<char *>("ranges"));
    sub_AFC3F0(v232, const_cast<char *>("ranges2"));
    v233 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("lods_.xml.bin"));
    v234 = v233;
    if ( v233 != 0 && G4_VCALL<int>(v233, 20) != 0 )
    {
      sub_A55DD0(v234, 0, 0, 0);
      v395 = reinterpret_cast<uint32_t *>(sub_B110B0(0x626B7FFBu));
      sub_AFC4B0(v395, const_cast<char *>("LodBuildings0"));
      sub_AFC4B0(v395, const_cast<char *>("LodWeapons0"));
      sub_AFC4B0(v395, const_cast<char *>("LodBuildings1"));
      sub_AFC4B0(v395, const_cast<char *>("LodCar0"));
      sub_AFC4B0(v395, const_cast<char *>("LodDefault0"));
      sub_AFC4B0(v395, const_cast<char *>("LodFavela0"));
      sub_AFC4B0(v395, const_cast<char *>("LodNone"));
      sub_AFC4B0(v395, const_cast<char *>("LodProps0"));
      sub_AFC4B0(v395, const_cast<char *>("LodProps1"));
      sub_AFC4B0(v395, const_cast<char *>("LodProps2"));
      sub_AFC4B0(v395, const_cast<char *>("LodProps3"));
      sub_AFC4B0(v395, const_cast<char *>("LodGameObjects0"));
      sub_AFC4B0(v395, const_cast<char *>("LodAdditive0"));
      sub_AFC4B0(v395, const_cast<char *>("LodTrees0"));
      sub_AFC4B0(v395, const_cast<char *>("LodTrees1"));
      sub_AFC4B0(v395, const_cast<char *>("Lodchar0"));
      sub_AFC4B0(v395, const_cast<char *>("Lodvehicle0"));
      sub_AFC4B0(v395, const_cast<char *>("Lodvehicle1"));
      sub_AFC4B0(v395, const_cast<char *>("LodVFX0"));
      sub_AFC4B0(v395, const_cast<char *>("LodVFXAir"));
      sub_AFC4B0(v395, const_cast<char *>("LodVFXVisualMarker"));
      G4_VCALL<void>(v234, 4);
    }
    v235 = reinterpret_cast<uint32_t *>(sub_B0E610(0x8F8C88EB));
    sub_AFC3F0(v235, const_cast<char *>("Name"));
    sub_AFC3F0(v235, const_cast<char *>("BdaeFile"));
    v236 = reinterpret_cast<uint32_t *>(sub_B0E610(0xD4D115BC));
    sub_AFC3F0(v236, const_cast<char *>("GlobalParameterName"));
    sub_AFC3F0(v236, const_cast<char *>("imageFile"));
    sub_AFC3F0(v236, const_cast<char *>("wrap"));
    v237 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("materials_preload_effects.xml.bin"));
    v238 = v237;
    if ( v237 != 0 && G4_VCALL<int>(v237, 20) != 0 )
    {
      sub_A55FA0(v238, 0, 0, 0);
      v393 = reinterpret_cast<uint32_t *>(sub_B110B0(0x5C3D9B7Cu));
      sub_AFC4B0(v393, const_cast<char *>("CarShader"));
      sub_AFC4B0(v393, const_cast<char *>("PostEffects"));
      sub_AFC4B0(v393, const_cast<char *>("WaterEffects"));
      sub_AFC4B0(v393, const_cast<char *>("RoadEffects"));
      sub_AFC4B0(v393, const_cast<char *>("GlowEffects"));
      sub_AFC4B0(v393, const_cast<char *>("ShadowEffects"));
      sub_AFC4B0(v393, const_cast<char *>("MultilightWithScaleOffset"));
      sub_AFC4B0(v393, const_cast<char *>("CustomEffects"));
      sub_AFC4B0(v393, const_cast<char *>("Character"));
      sub_AFC4B0(v393, const_cast<char *>("SkyMaterial"));
      sub_A56150(v238, 0, 0, 0);
      v394 = reinterpret_cast<uint32_t *>(sub_B110B0(0xBB717509));
      sub_AFC4B0(v394, const_cast<char *>("FresnelAndPHBeckmann"));
      sub_AFC4B0(v394, const_cast<char *>("SkinSpecularParameters"));
      sub_AFC4B0(v394, const_cast<char *>("ReflectionFalloffTexture"));
      sub_AFC4B0(v394, const_cast<char *>("GlassReflectionFalloffTexture"));
      sub_AFC4B0(v394, const_cast<char *>("FlakesTexture"));
      sub_AFC4B0(v394, const_cast<char *>("WaterNormal"));
      sub_AFC4B0(v394, const_cast<char *>("WaterNormal1"));
      sub_AFC4B0(v394, const_cast<char *>("WaterNormal2"));
      sub_AFC4B0(v394, const_cast<char *>("DetailMap"));
      G4_VCALL<void>(v238, 4);
    }
    v239 = reinterpret_cast<uint32_t *>(sub_B0E610(0xEF271DFD));
    sub_AFC3F0(v239, const_cast<char *>("LabelOnFoot"));
    sub_AFC3F0(v239, const_cast<char *>("LabelInVehicle"));
    sub_AFC3F0(v239, const_cast<char *>("IsVisible"));
    v240 = reinterpret_cast<uint32_t *>(sub_B0E610(0x1331BE2Au));
    sub_AFC3F0(v240, const_cast<char *>("MenuName"));
    sub_AFC3F0(v240, const_cast<char *>("Name"));
    sub_AFC3F0(v240, const_cast<char *>("Description"));
    sub_AFC3F0(v240, const_cast<char *>("TrackingEventId"));
    v241 = reinterpret_cast<uint32_t *>(sub_B0E610(0xFB50096D));
    sub_AFC3F0(v241, const_cast<char *>("TextureName"));
    sub_AFC3F0(v241, const_cast<char *>("IsInterior"));
    sub_AFC3F0(v241, const_cast<char *>("minX"));
    sub_AFC3F0(v241, const_cast<char *>("maxX"));
    sub_AFC3F0(v241, const_cast<char *>("minY"));
    sub_AFC3F0(v241, const_cast<char *>("maxY"));
    v242 = reinterpret_cast<uint32_t *>(sub_B0E610(0x7DA9248Eu));
    sub_AFC3F0(v242, const_cast<char *>("Name"));
    v243 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("menu_constants.xml.bin"));
    v244 = v243;
    if ( v243 != 0 && G4_VCALL<int>(v243, 20) != 0 )
    {
      sub_A56320(v244, 0, 0, 0);
      sub_B4A3C0(0x419241F7u);
      sub_A564F0(v244, 0, 0, 0);
      v1295 = reinterpret_cast<uint32_t *>(sub_B110B0(0x7C42CA1Cu));
      sub_AFC4B0(v1295, const_cast<char *>("InGameMenu"));
      sub_AFC4B0(v1295, const_cast<char *>("Stock"));
      sub_AFC4B0(v1295, const_cast<char *>("FriendProfileMenu"));
      sub_AFC4B0(v1295, const_cast<char *>("Leaderboards"));
      sub_AFC4B0(v1295, const_cast<char *>("Social"));
      sub_AFC4B0(v1295, const_cast<char *>("CallHelp"));
      sub_AFC4B0(v1295, const_cast<char *>("Abilities"));
      sub_AFC4B0(v1295, const_cast<char *>("Map"));
      sub_AFC4B0(v1295, const_cast<char *>("MapMission"));
      sub_AFC4B0(v1295, const_cast<char *>("MapDistrict"));
      sub_AFC4B0(v1295, const_cast<char *>("MapProperty"));
      sub_AFC4B0(v1295, const_cast<char *>("PawnShop"));
      sub_AFC4B0(v1295, const_cast<char *>("BlackJack"));
      sub_AFC4B0(v1295, const_cast<char *>("SlotMachine"));
      sub_AFC4B0(v1295, const_cast<char *>("VideoPoker"));
      sub_AFC4B0(v1295, const_cast<char *>("TutorialShop"));
      sub_AFC4B0(v1295, const_cast<char *>("TutorialSlotmachine"));
      sub_AFC4B0(v1295, const_cast<char *>("TutorialBlackjack"));
      sub_AFC4B0(v1295, const_cast<char *>("TutorialVideopoker"));
      sub_AFC4B0(v1295, const_cast<char *>("TutorialSkills"));
      sub_AFC4B0(v1295, const_cast<char *>("TutorialGacha"));
      sub_AFC4B0(v1295, const_cast<char *>("TutorialRealEstate"));
      sub_AFC4B0(v1295, const_cast<char *>("TutorialPawnShop"));
      sub_AFC4B0(v1295, const_cast<char *>("SocialEvents"));
      sub_AFC4B0(v1295, const_cast<char *>("VIPStatus"));
      sub_AFC4B0(v1295, const_cast<char *>("GiftPreview"));
      sub_A566C0(v244, 0, 0, 0);
      v1296 = reinterpret_cast<uint32_t *>(sub_B110B0(0x3101D9A9u));
      sub_AFC4B0(v1296, const_cast<char *>("City"));
      sub_AFC4B0(v1296, const_cast<char *>("Casino"));
      sub_AFC4B0(v1296, const_cast<char *>("Spartan"));
      sub_AFC4B0(v1296, const_cast<char *>("Bank"));
      sub_AFC4B0(v1296, const_cast<char *>("NightClub"));
      sub_AFC4B0(v1296, const_cast<char *>("StripClub"));
      sub_AFC4B0(v1296, const_cast<char *>("CornerStore"));
      sub_AFC4B0(v1296, const_cast<char *>("Diner"));
      sub_AFC4B0(v1296, const_cast<char *>("FightPit"));
      sub_AFC4B0(v1296, const_cast<char *>("MMA"));
      sub_AFC4B0(v1296, const_cast<char *>("MotoCross1"));
      sub_AFC4B0(v1296, const_cast<char *>("MotoCross2"));
      sub_AFC4B0(v1296, const_cast<char *>("MotoCross3"));
      sub_AFC4B0(v1296, const_cast<char *>("MotoCross4"));
      sub_AFC4B0(v1296, const_cast<char *>("Vault"));
      sub_AFC4B0(v1296, const_cast<char *>("SecretBase00"));
      sub_AFC4B0(v1296, const_cast<char *>("SecretBase01"));
      sub_AFC4B0(v1296, const_cast<char *>("SecretBase02"));
      sub_A56870(v244, 0, 0, 0);
      v1297 = reinterpret_cast<uint32_t *>(sub_B110B0(0x2DC4AE6u));
      sub_AFC4B0(v1297, const_cast<char *>("VehicleThief"));
      sub_AFC4B0(v1297, const_cast<char *>("Hospital"));
      sub_AFC4B0(v1297, const_cast<char *>("Parking"));
      sub_AFC4B0(v1297, const_cast<char *>("SocialEvent"));
      G4_VCALL<void>(v244, 4);
    }
    v245 = reinterpret_cast<uint32_t *>(sub_B0E610(0xEC784A1A));
    sub_AFC3F0(v245, const_cast<char *>("Elems"));
    v246 = reinterpret_cast<uint32_t *>(sub_B0E610(0x5A2479A4u));
    sub_AFC3F0(v246, const_cast<char *>("ModeFlags"));
    sub_AFC3F0(v246, const_cast<char *>("SteeringHUDFlags"));
    sub_AFC3F0(v246, const_cast<char *>("ThrottleHUDFlags"));
    sub_AFC3F0(v246, const_cast<char *>("Name"));
    sub_AFC3F0(v246, const_cast<char *>("Type"));
    sub_AFC3F0(v246, const_cast<char *>("TextureName"));
    sub_AFC3F0(v246, const_cast<char *>("IsMotion"));
    sub_AFC3F0(v246, const_cast<char *>("IsActiveForGamepad"));
    sub_AFC3F0(v246, const_cast<char *>("TrackingEventId"));
    v247 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("menu_hudelementgroup.xml.bin"));
    v248 = v247;
    if ( v247 != 0 && G4_VCALL<int>(v247, 20) != 0 )
    {
      sub_A56A40(v248, 0, 0, 0);
      sub_B4A730(0x4651FFB5u);
      sub_A56BF0(v248, 0, 0, 0);
      v1294 = reinterpret_cast<uint32_t *>(sub_B110B0(0x89E263u));
      sub_AFC4B0(v1294, const_cast<char *>("AccelerometerPedals"));
      sub_AFC4B0(v1294, const_cast<char *>("AccelerometerStepSlider"));
      sub_AFC4B0(v1294, const_cast<char *>("ArrowsPedals"));
      sub_AFC4B0(v1294, const_cast<char *>("ArrowsSteps"));
      sub_AFC4B0(v1294, const_cast<char *>("SliderSteps"));
      sub_AFC4B0(v1294, const_cast<char *>("SliderPedals"));
      sub_AFC4B0(v1294, const_cast<char *>("MotoAccelerometerPedals"));
      sub_AFC4B0(v1294, const_cast<char *>("MotoAccelerometerStepSlider"));
      sub_AFC4B0(v1294, const_cast<char *>("MotoAnalogPedals"));
      sub_AFC4B0(v1294, const_cast<char *>("MotoAnalogStepSlider"));
      sub_AFC4B0(v1294, const_cast<char *>("HelicopterJetpackVStickArrows"));
      sub_AFC4B0(v1294, const_cast<char *>("AirplaneVStickSlider"));
      sub_AFC4B0(v1294, const_cast<char *>("OnFoot"));
      sub_AFC4B0(v1294, const_cast<char *>("VTOLJetInHelicopterMode"));
      sub_AFC4B0(v1294, const_cast<char *>("VTOLJetInPlaneMode"));
      G4_VCALL<void>(v248, 4);
    }
    v249 = reinterpret_cast<uint32_t *>(sub_B0E610(0x14924Eu));
    sub_AFC3F0(v249, const_cast<char *>("ModelRotationAngle"));
    sub_AFC3F0(v249, const_cast<char *>("LightZone"));
    v250 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("menu_settings.xml.bin"));
    v251 = v250;
    if ( v250 != 0 && G4_VCALL<int>(v250, 20) != 0 )
    {
      sub_A56DC0(v251, 0, 0, 0);
      v1293 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA375A071));
      sub_AFC4B0(v1293, const_cast<char *>("Default_Settings"));
      sub_AFC4B0(v1293, const_cast<char *>("Clothing_Settings"));
      sub_AFC4B0(v1293, const_cast<char *>("Weapon_Settings"));
      sub_AFC4B0(v1293, const_cast<char *>("Vehicle_Settings"));
      sub_AFC4B0(v1293, const_cast<char *>("Ability_Settings"));
      sub_AFC4B0(v1293, const_cast<char *>("Crate_Settings"));
      sub_AFC4B0(v1293, const_cast<char *>("Consumable_Settings"));
      sub_AFC4B0(v1293, const_cast<char *>("Special_Settings"));
      sub_AFC4B0(v1293, const_cast<char *>("Pawnshop_Settings"));
      G4_VCALL<void>(v251, 4);
    }
    v252 = reinterpret_cast<uint32_t *>(sub_B0E610(0x4CF82755u));
    sub_AFC3F0(v252, const_cast<char *>("ZoomMin"));
    sub_AFC3F0(v252, const_cast<char *>("ZoomMax"));
    sub_AFC3F0(v252, const_cast<char *>("ZoomDefault"));
    sub_AFC3F0(v252, const_cast<char *>("ZoomAnimSpeed"));
    sub_AFC3F0(v252, const_cast<char *>("ZoomOutScaleValue"));
    sub_AFC3F0(v252, const_cast<char *>("ZoomInScaleValue"));
    sub_AFC3F0(v252, const_cast<char *>("ZoomInteriorScaleValue"));
    sub_AFC3F0(v252, const_cast<char *>("ZoomTimeTransition"));
    sub_AFC3F0(v252, const_cast<char *>("GPSLineThicknessWaypoint"));
    sub_AFC3F0(v252, const_cast<char *>("GPSLineColorWaypoint"));
    sub_AFC3F0(v252, const_cast<char *>("GPSLineThicknessMoveTo"));
    sub_AFC3F0(v252, const_cast<char *>("GPSLineColorMoveTo"));
    v253 = reinterpret_cast<uint32_t *>(sub_B0E610(0x5CCF9585u));
    sub_AFC3F0(v253, const_cast<char *>("BrakeTime"));
    sub_AFC3F0(v253, const_cast<char *>("BrakeIntensityInitValue"));
    sub_AFC3F0(v253, const_cast<char *>("WheelieMotoIntensity"));
    v254 = reinterpret_cast<uint32_t *>(sub_B0E610(0x36440AB4u));
    sub_AFC3F0(v254, const_cast<char *>("DeltaThresholdY"));
    sub_AFC3F0(v254, const_cast<char *>("DeltaThresholdZ"));
    sub_AFC3F0(v254, const_cast<char *>("ResetValueDecremental"));
    v255 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("menu_tweakers.xml.bin"));
    v256 = v255;
    if ( v255 != 0 && G4_VCALL<int>(v255, 20) != 0 )
    {
      sub_A56F70(v256, 0, 0, 0);
      v1202 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA3877E14));
      sub_AFC4B0(v1202, const_cast<char *>("MenuMapTweaker"));
      sub_AFC4B0(v1202, const_cast<char *>("MinimapTweaker"));
      sub_A57140(v256, 0, 0, 0);
      v391 = reinterpret_cast<uint32_t *>(sub_B110B0(0xB59F5548));
      sub_AFC4B0(v391, const_cast<char *>("HudTweaker_01"));
      sub_A57310(v256, 0, 0, 0);
      v392 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA8F236Du));
      sub_AFC4B0(v392, const_cast<char *>("Tweaker01"));
      G4_VCALL<void>(v256, 4);
    }
    v257 = reinterpret_cast<uint32_t *>(sub_B0E610(0xBA8B51D4));
    sub_AFC3F0(v257, const_cast<char *>("VehicleToReplace"));
    sub_AFC3F0(v257, const_cast<char *>("WithVehicle"));
    v258 = reinterpret_cast<uint32_t *>(sub_B0E610(0x9227A926));
    sub_AFC3F0(v258, const_cast<char *>("BdaeFilename"));
    sub_AFC3F0(v258, const_cast<char *>("NodeToAttach"));
    sub_AFC3F0(v258, const_cast<char *>("Probability"));
    sub_AFC3F0(v258, const_cast<char *>("IgnoredCharacters"));
    v259 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("new_year_decorations.xml.bin"));
    v260 = v259;
    if ( v259 != 0 && G4_VCALL<int>(v259, 20) != 0 )
    {
      sub_A574E0(v260, 0, 0, 0);
      v1201 = reinterpret_cast<uint32_t *>(sub_B110B0(0x1CEE8237u));
      sub_AFC4B0(v1201, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1201, const_cast<char *>("JapanPoor"));
      sub_A57690(v260, 0, 0, 0);
      v390 = reinterpret_cast<uint32_t *>(sub_B110B0(0xDE8C04D3));
      sub_AFC4B0(v390, const_cast<char *>("NewYearHat"));
      G4_VCALL<void>(v260, 4);
    }
    v261 = reinterpret_cast<uint32_t *>(sub_B0E610(0xA76950E5));
    sub_AFC3F0(v261, const_cast<char *>("TargetColor1"));
    sub_AFC3F0(v261, const_cast<char *>("TargetColor2"));
    sub_AFC3F0(v261, const_cast<char *>("TargetColor3"));
    sub_AFC3F0(v261, const_cast<char *>("TargetColor4"));
    v262 = reinterpret_cast<uint32_t *>(sub_B0E610(0x3481CF6Fu));
    sub_AFC3F0(v262, const_cast<char *>("FirstPaletteID"));
    sub_AFC3F0(v262, const_cast<char *>("LastPaletteID"));
    v263 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("palettes.xml.bin"));
    v264 = v263;
    if ( v263 != 0 && G4_VCALL<int>(v263, 20) != 0 )
    {
      sub_A57860(v264, 0, 0, 0);
      sub_B4AB90(0xA8DC4E14);
      sub_A57A10(v264, 0, 0, 0);
      sub_B4BEA0(0x50F5740u);
      G4_VCALL<void>(v264, 4);
    }
    v265 = reinterpret_cast<uint32_t *>(sub_B0E610(0x80A5EA39));
    sub_AFC3F0(v265, const_cast<char *>("AnimSpeed"));
    v266 = reinterpret_cast<uint32_t *>(sub_B0E610(0xFA74D7F3));
    sub_AFC3F0(v266, const_cast<char *>("TurnIdleToIdle"));
    sub_AFC3F0(v266, const_cast<char *>("TurnIdleToWalk"));
    sub_AFC3F0(v266, const_cast<char *>("TurnIdleToRun"));
    sub_AFC3F0(v266, const_cast<char *>("TurnWalkToWalk"));
    sub_AFC3F0(v266, const_cast<char *>("TurnRunToRun"));
    sub_AFC3F0(v266, const_cast<char *>("StrafeIdleToIdle"));
    sub_AFC3F0(v266, const_cast<char *>("StrafeIdleToWalk"));
    sub_AFC3F0(v266, const_cast<char *>("StrafeIdleToRun"));
    sub_AFC3F0(v266, const_cast<char *>("StrafeWalkToWalk"));
    sub_AFC3F0(v266, const_cast<char *>("StrafeRunToRun"));
    sub_AFC3F0(v266, const_cast<char *>("AimIdleToIdle"));
    sub_AFC3F0(v266, const_cast<char *>("AimIdleToWalk"));
    sub_AFC3F0(v266, const_cast<char *>("AimIdleToRun"));
    sub_AFC3F0(v266, const_cast<char *>("AimWalkToWalk"));
    sub_AFC3F0(v266, const_cast<char *>("AimRunToRun"));
    sub_AFC3F0(v266, const_cast<char *>("AimCoverCrouchLeft"));
    sub_AFC3F0(v266, const_cast<char *>("AimCoverCrouchRight"));
    sub_AFC3F0(v266, const_cast<char *>("AimCoverOverLeft"));
    sub_AFC3F0(v266, const_cast<char *>("AimCoverOverRight"));
    sub_AFC3F0(v266, const_cast<char *>("AimCoverStandUpLeft"));
    sub_AFC3F0(v266, const_cast<char *>("AimCoverStandUpRight"));
    sub_AFC3F0(v266, const_cast<char *>("ThrowIdleToIdle"));
    sub_AFC3F0(v266, const_cast<char *>("ThrowIdleToWalk"));
    sub_AFC3F0(v266, const_cast<char *>("ThrowIdleToRun"));
    sub_AFC3F0(v266, const_cast<char *>("ThrowWalkToWalk"));
    sub_AFC3F0(v266, const_cast<char *>("ThrowRunToRun"));
    sub_AFC3F0(v266, const_cast<char *>("ThrowAimIdleToIdle"));
    sub_AFC3F0(v266, const_cast<char *>("ThrowAimIdleToWalk"));
    sub_AFC3F0(v266, const_cast<char *>("ThrowAimIdleToRun"));
    sub_AFC3F0(v266, const_cast<char *>("ThrowAimWalkToWalk"));
    sub_AFC3F0(v266, const_cast<char *>("ThrowAimRunToRun"));
    sub_AFC3F0(v266, const_cast<char *>("LeanSkydive"));
    sub_AFC3F0(v266, const_cast<char *>("LeanDriver"));
    sub_AFC3F0(v266, const_cast<char *>("LeanDriverStopped"));
    sub_AFC3F0(v266, const_cast<char *>("AimDriverOneHanded"));
    sub_AFC3F0(v266, const_cast<char *>("AimDriverDual"));
    sub_AFC3F0(v266, const_cast<char *>("LeanPassenger"));
    sub_AFC3F0(v266, const_cast<char *>("AimPassengerOneHanded"));
    sub_AFC3F0(v266, const_cast<char *>("AimPassengerDual"));
    sub_AFC3F0(v266, const_cast<char *>("AimPassengerTwoHanded"));
    v267 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("parametric_controllers.xml.bin"));
    v268 = v267;
    if ( v267 != 0 && G4_VCALL<int>(v267, 20) != 0 )
    {
      sub_A57BE0(v268, 0, 0, 0);
      v1291 = reinterpret_cast<uint32_t *>(sub_B110B0(0x677E68C3u));
      sub_AFC4B0(v1291, const_cast<char *>("TurnIdleToIdle"));
      sub_AFC4B0(v1291, const_cast<char *>("TurnIdleToWalk"));
      sub_AFC4B0(v1291, const_cast<char *>("TurnIdleToRun"));
      sub_AFC4B0(v1291, const_cast<char *>("TurnWalkToWalk"));
      sub_AFC4B0(v1291, const_cast<char *>("TurnRunToRun"));
      sub_AFC4B0(v1291, const_cast<char *>("StrafeIdleToIdle"));
      sub_AFC4B0(v1291, const_cast<char *>("StrafeIdleToWalk"));
      sub_AFC4B0(v1291, const_cast<char *>("StrafeIdleToRun"));
      sub_AFC4B0(v1291, const_cast<char *>("StrafeWalkToWalk"));
      sub_AFC4B0(v1291, const_cast<char *>("StrafeRunToRun"));
      sub_AFC4B0(v1291, const_cast<char *>("AimIdleToIdle"));
      sub_AFC4B0(v1291, const_cast<char *>("AimIdleToWalk"));
      sub_AFC4B0(v1291, const_cast<char *>("AimIdleToRun"));
      sub_AFC4B0(v1291, const_cast<char *>("AimWalkToWalk"));
      sub_AFC4B0(v1291, const_cast<char *>("AimRunToRun"));
      sub_AFC4B0(v1291, const_cast<char *>("AimCoverCrouchLeft"));
      sub_AFC4B0(v1291, const_cast<char *>("AimCoverCrouchRight"));
      sub_AFC4B0(v1291, const_cast<char *>("AimCoverOverLeft"));
      sub_AFC4B0(v1291, const_cast<char *>("AimCoverOverRight"));
      sub_AFC4B0(v1291, const_cast<char *>("AimCoverStandUpLeft"));
      sub_AFC4B0(v1291, const_cast<char *>("AimCoverStandUpRight"));
      sub_AFC4B0(v1291, const_cast<char *>("ThrowIdleToIdle"));
      sub_AFC4B0(v1291, const_cast<char *>("ThrowIdleToWalk"));
      sub_AFC4B0(v1291, const_cast<char *>("ThrowIdleToRun"));
      sub_AFC4B0(v1291, const_cast<char *>("ThrowWalkToWalk"));
      sub_AFC4B0(v1291, const_cast<char *>("ThrowRunToRun"));
      sub_AFC4B0(v1291, const_cast<char *>("ThrowAimIdleToIdle"));
      sub_AFC4B0(v1291, const_cast<char *>("ThrowAimIdleToWalk"));
      sub_AFC4B0(v1291, const_cast<char *>("ThrowAimIdleToRun"));
      sub_AFC4B0(v1291, const_cast<char *>("ThrowAimWalkToWalk"));
      sub_AFC4B0(v1291, const_cast<char *>("ThrowAimRunToRun"));
      sub_AFC4B0(v1291, const_cast<char *>("LeanSkydive"));
      sub_AFC4B0(v1291, const_cast<char *>("LeanDriver"));
      sub_AFC4B0(v1291, const_cast<char *>("LeanDriverStopped"));
      sub_AFC4B0(v1291, const_cast<char *>("AimDriverOneHanded"));
      sub_AFC4B0(v1291, const_cast<char *>("AimDriverDual"));
      sub_AFC4B0(v1291, const_cast<char *>("LeanPassenger"));
      sub_AFC4B0(v1291, const_cast<char *>("AimPassengerOneHanded"));
      sub_AFC4B0(v1291, const_cast<char *>("AimPassengerDual"));
      sub_AFC4B0(v1291, const_cast<char *>("AimPassengerTwoHanded"));
      sub_A57DB0(v268, 0, 0, 0);
      v1292 = reinterpret_cast<uint32_t *>(sub_B110B0(0x5D8B975Du));
      sub_AFC4B0(v1292, const_cast<char *>("BareHandsParam"));
      sub_AFC4B0(v1292, const_cast<char *>("ParachuteParam"));
      sub_AFC4B0(v1292, const_cast<char *>("SkydivingParam"));
      sub_AFC4B0(v1292, const_cast<char *>("FistsParam"));
      sub_AFC4B0(v1292, const_cast<char *>("OneHandedParam"));
      sub_AFC4B0(v1292, const_cast<char *>("DualParam"));
      sub_AFC4B0(v1292, const_cast<char *>("TwoHandedParam"));
      sub_AFC4B0(v1292, const_cast<char *>("MotoParam"));
      sub_AFC4B0(v1292, const_cast<char *>("MotoRacerParam"));
      sub_AFC4B0(v1292, const_cast<char *>("MotoChopperParam"));
      sub_AFC4B0(v1292, const_cast<char *>("MotoScooterParam"));
      sub_AFC4B0(v1292, const_cast<char *>("MotoATVParam"));
      sub_AFC4B0(v1292, const_cast<char *>("MotoSeadooParam"));
      sub_AFC4B0(v1292, const_cast<char *>("MotoDirtParam"));
      sub_AFC4B0(v1292, const_cast<char *>("JetpackParam"));
      sub_AFC4B0(v1292, const_cast<char *>("CarParam"));
      sub_AFC4B0(v1292, const_cast<char *>("CarIndyParam"));
      sub_AFC4B0(v1292, const_cast<char *>("MeleeWeaponParam"));
      sub_AFC4B0(v1292, const_cast<char *>("MotoJetParam"));
      G4_VCALL<void>(v268, 4);
    }
    v269 = reinterpret_cast<uint32_t *>(sub_B0E610(0x6EAA500u));
    sub_AFC3F0(v269, const_cast<char *>("bankNames"));
    sub_AFC3F0(v269, const_cast<char *>("maxPlayback"));
    v270 = reinterpret_cast<uint32_t *>(sub_B0E610(0xD97057A9));
    sub_AFC3F0(v270, const_cast<char *>("deviceFamily"));
    sub_AFC3F0(v270, const_cast<char *>("scriptMaxLOD"));
    sub_AFC3F0(v270, const_cast<char *>("windowWidth"));
    sub_AFC3F0(v270, const_cast<char *>("windowHeight"));
    sub_AFC3F0(v270, const_cast<char *>("names"));
    sub_AFC3F0(v270, const_cast<char *>("streamingUseVbo"));
    sub_AFC3F0(v270, const_cast<char *>("streamingIndexBlockCount"));
    sub_AFC3F0(v270, const_cast<char *>("streamingIndexBlockSize"));
    sub_AFC3F0(v270, const_cast<char *>("streamingVertexBufferSize"));
    sub_AFC3F0(v270, const_cast<char *>("streamingVertexBufferHighWatermark"));
    sub_AFC3F0(v270, const_cast<char *>("frustumPlanes_TransitionBlending"));
    sub_AFC3F0(v270, const_cast<char *>("frustumPlanes_TransitionWidth"));
    sub_AFC3F0(v270, const_cast<char *>("frustumPlanes_MainFrustum_NearPlane"));
    sub_AFC3F0(v270, const_cast<char *>("frustumPlanes_MainFrustum_FarPlane"));
    sub_AFC3F0(v270, const_cast<char *>("frustumPlanes_LowResFrustum_FarPlaneInitial"));
    sub_AFC3F0(v270, const_cast<char *>("frustumPlanes_LowResFrustum_FarPlaneMax"));
    sub_AFC3F0(v270, const_cast<char *>("frustumPlanes_biasInFragment"));
    sub_AFC3F0(v270, const_cast<char *>("frustumPlanes_biasInVertex"));
    sub_AFC3F0(v270, const_cast<char *>("frameBufferScale"));
    sub_AFC3F0(v270, const_cast<char *>("mergedAtlasMipMapToSkip"));
    sub_AFC3F0(v270, const_cast<char *>("cityLowResMipMapToSkip"));
    sub_AFC3F0(v270, const_cast<char *>("envMipMapToSkip"));
    sub_AFC3F0(v270, const_cast<char *>("cubeMipMapToSkip"));
    sub_AFC3F0(v270, const_cast<char *>("envAlphaMipMapToSkip"));
    sub_AFC3F0(v270, const_cast<char *>("mainCharMipMapToSkip"));
    sub_AFC3F0(v270, const_cast<char *>("cutsceneCharMipMapToSkip"));
    sub_AFC3F0(v270, const_cast<char *>("characterMipMapToSkip"));
    sub_AFC3F0(v270, const_cast<char *>("vehicleMipMapToSkip"));
    sub_AFC3F0(v270, const_cast<char *>("weaponMipMapToSkip"));
    sub_AFC3F0(v270, const_cast<char *>("gameObjectMipMapToSkip"));
    sub_AFC3F0(v270, const_cast<char *>("generalMipMapToSkip"));
    sub_AFC3F0(v270, const_cast<char *>("glitchTextureMemoryPool"));
    sub_AFC3F0(v270, const_cast<char *>("lockUpdateTime"));
    sub_AFC3F0(v270, const_cast<char *>("enableAnamorphicLensFlare"));
    sub_AFC3F0(v270, const_cast<char *>("UseLowResCityTransparent"));
    sub_AFC3F0(v270, const_cast<char *>("UseVehicleMorphingMesh"));
    sub_AFC3F0(v270, const_cast<char *>("UseLowResWater"));
    sub_AFC3F0(v270, const_cast<char *>("UseLowResCinematics"));
    sub_AFC3F0(v270, const_cast<char *>("ReplaceTexturesInIGM"));
    sub_AFC3F0(v270, const_cast<char *>("CinematicStreamingLookAhead"));
    sub_AFC3F0(v270, const_cast<char *>("DisableFacebook"));
    sub_AFC3F0(v270, const_cast<char *>("DisableAds"));
    sub_AFC3F0(v270, const_cast<char *>("removeTreeShaders"));
    sub_AFC3F0(v270, const_cast<char *>("removeCarLights"));
    sub_AFC3F0(v270, const_cast<char *>("UseLowResParticles"));
    sub_AFC3F0(v270, const_cast<char *>("UseLowResGameObjects"));
    sub_AFC3F0(v270, const_cast<char *>("UseLowResCollectibles"));
    sub_AFC3F0(v270, const_cast<char *>("UseLowResItemDrops"));
    sub_AFC3F0(v270, const_cast<char *>("enableSkyboxSunAndMoon"));
    sub_AFC3F0(v270, const_cast<char *>("enableSkyboxAnimation"));
    sub_AFC3F0(v270, const_cast<char *>("enableSkyboxStars"));
    sub_AFC3F0(v270, const_cast<char *>("enableSkyboxClouds"));
    sub_AFC3F0(v270, const_cast<char *>("minFemalePedestrianPreloadedInstances"));
    sub_AFC3F0(v270, const_cast<char *>("maxFemalePedestrianPreloadedInstances"));
    sub_AFC3F0(v270, const_cast<char *>("minMalePedestrianPreloadedInstances"));
    sub_AFC3F0(v270, const_cast<char *>("maxMalePedestrianPreloadedInstances"));
    sub_AFC3F0(v270, const_cast<char *>("maxSpawnCivilians"));
    sub_AFC3F0(v270, const_cast<char *>("maxSpawnParkedVehicles"));
    sub_AFC3F0(v270, const_cast<char *>("maxSpawnVehicles"));
    sub_AFC3F0(v270, const_cast<char *>("maxSpawn"));
    sub_AFC3F0(v270, const_cast<char *>("disableVehicleVfxDistance"));
    sub_AFC3F0(v270, const_cast<char *>("useMenuTextureHighRes"));
    sub_AFC3F0(v270, const_cast<char *>("useMenuAtlasTextureVeryLowRes"));
    sub_AFC3F0(v270, const_cast<char *>("sdk"));
    sub_AFC3F0(v270, const_cast<char *>("shaderPak"));
    sub_AFC3F0(v270, const_cast<char *>("GraphicsSpecific_level"));
    sub_AFC3F0(v270, const_cast<char *>("snipingViewRangeMod"));
    sub_AFC3F0(v270, const_cast<char *>("streamingUseDoubleBuffering"));
    sub_AFC3F0(v270, const_cast<char *>("streamingLookAheadFactor"));
    sub_AFC3F0(v270, const_cast<char *>("EnableGPSLine"));
    sub_AFC3F0(v270, const_cast<char *>("streamingReduxMinRadiusFactor"));
    sub_AFC3F0(v270, const_cast<char *>("streamingReduxSpeed1"));
    sub_AFC3F0(v270, const_cast<char *>("streamingReduxSpeed2"));
    sub_AFC3F0(v270, const_cast<char *>("UseTransparentNodeScreenGrouper"));
    sub_AFC3F0(v270, const_cast<char *>("TNSGShapeRadiusMinDistance"));
    sub_AFC3F0(v270, const_cast<char *>("TNSGCullScreenShapeRadius"));
    sub_AFC3F0(v270, const_cast<char *>("useExtendedStreaming"));
    sub_AFC3F0(v270, const_cast<char *>("transparentFadeDist1"));
    sub_AFC3F0(v270, const_cast<char *>("transparentFadeDist2"));
    sub_AFC3F0(v270, const_cast<char *>("additiveFadeDist1"));
    sub_AFC3F0(v270, const_cast<char *>("additiveFadeDist2"));
    sub_AFC3F0(v270, const_cast<char *>("useBillboardOptim"));
    sub_AFC3F0(v270, const_cast<char *>("updateBillboards"));
    sub_AFC3F0(v270, const_cast<char *>("updateBillboardsFrames"));
    sub_AFC3F0(v270, const_cast<char *>("useLowMem"));
    sub_AFC3F0(v270, const_cast<char *>("useMemoryMapWorkaround"));
    sub_AFC3F0(v270, const_cast<char *>("useRenderTarget"));
    sub_AFC3F0(v270, const_cast<char *>("renderTargetWidth"));
    sub_AFC3F0(v270, const_cast<char *>("renderTargetHeight"));
    sub_AFC3F0(v270, const_cast<char *>("useHDWaterShaders"));
    sub_AFC3F0(v270, const_cast<char *>("usePostEffects"));
    sub_AFC3F0(v270, const_cast<char *>("swfPostProcessTextureWidth"));
    sub_AFC3F0(v270, const_cast<char *>("swfPostProcessTextureHeight"));
    sub_AFC3F0(v270, const_cast<char *>("swfPostProcessTextureSize"));
    sub_AFC3F0(v270, const_cast<char *>("useScreenEffects"));
    sub_AFC3F0(v270, const_cast<char *>("useBloomEffects"));
    sub_AFC3F0(v270, const_cast<char *>("useDepthOfField"));
    sub_AFC3F0(v270, const_cast<char *>("useWaterFade"));
    sub_AFC3F0(v270, const_cast<char *>("waterFadeRange"));
    sub_AFC3F0(v270, const_cast<char *>("useSkyReflection"));
    sub_AFC3F0(v270, const_cast<char *>("useCharacterBackLight"));
    sub_AFC3F0(v270, const_cast<char *>("UseLowResParticlePools"));
    sub_AFC3F0(v270, const_cast<char *>("useInteriorIrradiance"));
    sub_AFC3F0(v270, const_cast<char *>("useSunOcclusion"));
    sub_AFC3F0(v270, const_cast<char *>("tonemapWhiteMultiplier"));
    sub_AFC3F0(v270, const_cast<char *>("snd_enhanced3d"));
    sub_AFC3F0(v270, const_cast<char *>("snd_reverb"));
    sub_AFC3F0(v270, const_cast<char *>("snd_doppler"));
    sub_AFC3F0(v270, const_cast<char *>("snd_ambienceInCars"));
    sub_AFC3F0(v270, const_cast<char *>("snd_ambienceInCarsFade"));
    sub_AFC3F0(v270, const_cast<char *>("snd_enableRandomPitch"));
    sub_AFC3F0(v270, const_cast<char *>("snd_useSimpleEngineSound"));
    sub_AFC3F0(v270, const_cast<char *>("snd_maxPlaybackOverride"));
    sub_AFC3F0(v270, const_cast<char *>("useAntiAliasing"));
    sub_AFC3F0(v270, const_cast<char *>("useParametricsForNPC"));
    sub_AFC3F0(v270, const_cast<char *>("flareRayCastMax"));
    sub_AFC3F0(v270, const_cast<char *>("flareRayCastPerFrame"));
    sub_AFC3F0(v270, const_cast<char *>("physicsToLoadBBoxOffset"));
    sub_AFC3F0(v270, const_cast<char *>("physicsToUnloadBBoxOffset"));
    sub_AFC3F0(v270, const_cast<char *>("havokUpdateThreaded"));
    sub_AFC3F0(v270, const_cast<char *>("AnalogHudBoxRatioWidth"));
    sub_AFC3F0(v270, const_cast<char *>("AnalogHudBoxRatioHeight"));
    sub_AFC3F0(v270, const_cast<char *>("AnalogHudBoxRatioTopLeftPosX"));
    sub_AFC3F0(v270, const_cast<char *>("AnalogHudBoxRatioTopLeftPosY"));
    sub_AFC3F0(v270, const_cast<char *>("AnalogMotoMaxRangeMultiplier"));
    sub_AFC3F0(v270, const_cast<char *>("OptionalMenu3DModel"));
    sub_AFC3F0(v270, const_cast<char *>("LoadingTexture"));
    sub_AFC3F0(v270, const_cast<char *>("shaderRoadSpecularLighting"));
    sub_AFC3F0(v270, const_cast<char *>("shaderFog"));
    sub_AFC3F0(v270, const_cast<char *>("FullMotionControl"));
    sub_AFC3F0(v270, const_cast<char *>("BulletTraceManager_MaxNumberBullets"));
    sub_AFC3F0(v270, const_cast<char *>("UseAttachedToPlayer_EnvironementVFX"));
    sub_AFC3F0(v270, const_cast<char *>("disableAsserts"));
    sub_AFC3F0(v270, const_cast<char *>("enableGyroOption"));
    sub_AFC3F0(v270, const_cast<char *>("frameRateLimiter"));
    sub_AFC3F0(v270, const_cast<char *>("useMachThreadPolicy"));
    sub_AFC3F0(v270, const_cast<char *>("useMachThreadPolicyOnlyMainThread"));
    sub_AFC3F0(v270, const_cast<char *>("MainThreadPolicyInitValue"));
    sub_AFC3F0(v270, const_cast<char *>("CPUTaskThreadPolicyInitValue"));
    sub_AFC3F0(v270, const_cast<char *>("RemoteIOThreadPolicyInitValue"));
    sub_AFC3F0(v270, const_cast<char *>("voxVSUpdateThreadPolicyInitValue"));
    sub_AFC3F0(v270, const_cast<char *>("VoxUpdEmtrsThreadPolicyInitValue"));
    sub_AFC3F0(v270, const_cast<char *>("VoxUpdSrcsThreadPolicyInitValue"));
    sub_AFC3F0(v270, const_cast<char *>("RemoveVehicleBurnSound"));
    sub_AFC3F0(v270, const_cast<char *>("lockSensitivity"));
    sub_AFC3F0(v270, const_cast<char *>("unloadCityOnInterrupt"));
    sub_AFC3F0(v270, const_cast<char *>("VBOUsage"));
    sub_AFC3F0(v270, const_cast<char *>("forceHighp"));
    sub_AFC3F0(v270, const_cast<char *>("Regular_MinFilter"));
    sub_AFC3F0(v270, const_cast<char *>("Regular_MagFilter"));
    sub_AFC3F0(v270, const_cast<char *>("Regular_MipmapFilter"));
    sub_AFC3F0(v270, const_cast<char *>("Regular_Anisotropy"));
    sub_AFC3F0(v270, const_cast<char *>("LightMap_MinFilter"));
    sub_AFC3F0(v270, const_cast<char *>("LightMap_MagFilter"));
    sub_AFC3F0(v270, const_cast<char *>("LightMap_MipmapFilter"));
    sub_AFC3F0(v270, const_cast<char *>("LightMap_Anisotropy"));
    sub_AFC3F0(v270, const_cast<char *>("CityAtlas_MinFilter"));
    sub_AFC3F0(v270, const_cast<char *>("CityAtlas_MagFilter"));
    sub_AFC3F0(v270, const_cast<char *>("CityAtlas_MipmapFilter"));
    sub_AFC3F0(v270, const_cast<char *>("CityAtlas_Anisotropy"));
    v271 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("phone_performance_profiles.xml.bin"));
    v272 = v271;
    if ( v271 != 0 && G4_VCALL<int>(v271, 20) != 0 )
    {
      sub_A57F80(v272, 0, 0, 0);
      v1200 = reinterpret_cast<uint32_t *>(sub_B110B0(0x2477234Cu));
      sub_AFC4B0(v1200, const_cast<char *>("High"));
      sub_AFC4B0(v1200, const_cast<char *>("Medium"));
      sub_AFC4B0(v1200, const_cast<char *>("Low"));
      sub_A58150(v272, 0, 0, 0);
      sub_B595E0(0xAF22CC9D);
      G4_VCALL<void>(v272, 4);
    }
    v273 = reinterpret_cast<uint32_t *>(sub_B0E610(0x5A6284C2u));
    sub_AFC3F0(v273, const_cast<char *>("mass"));
    sub_AFC3F0(v273, const_cast<char *>("materialid"));
    sub_AFC3F0(v273, const_cast<char *>("collisionFilter"));
    sub_AFC3F0(v273, const_cast<char *>("collisionFilterFlags"));
    sub_AFC3F0(v273, const_cast<char *>("forceConvex"));
    sub_AFC3F0(v273, const_cast<char *>("canBeGrouped"));
    sub_AFC3F0(v273, const_cast<char *>("maxVolume"));
    sub_AFC3F0(v273, const_cast<char *>("disableDelay"));
    sub_AFC3F0(v273, const_cast<char *>("vfxDelay"));
    sub_AFC3F0(v273, const_cast<char *>("vfxName"));
    sub_AFC3F0(v273, const_cast<char *>("sfxDelay"));
    sub_AFC3F0(v273, const_cast<char *>("sfxName"));
    sub_AFC3F0(v273, const_cast<char *>("breakPointImpulse"));
    sub_AFC3F0(v273, const_cast<char *>("breakPointFactor"));
    sub_AFC3F0(v273, const_cast<char *>("initialVelocityFactor"));
    sub_AFC3F0(v273, const_cast<char *>("statIncCounterIdx"));
    v274 = reinterpret_cast<uint32_t *>(sub_B0E610(0xA2FF9791));
    sub_AFC3F0(v274, const_cast<char *>("preset"));
    v275 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("physics.xml.bin"));
    v276 = v275;
    if ( v275 != 0 && G4_VCALL<int>(v275, 20) != 0 )
    {
      sub_A58320(v276, 0, 0, 0);
      sub_B59A50(0x609841A7u);
      sub_A584F0(v276, 0, 0, 0);
      sub_B5A310(0xB62A188C);
      G4_VCALL<void>(v276, 4);
    }
    v1220 = reinterpret_cast<uint32_t *>(sub_B0E610(0x348F8BD7u));
    sub_AFC3F0(v1220, const_cast<char *>("input"));
    sub_AFC3F0(v1220, const_cast<char *>("output"));
    sub_AFC3F0(v1220, const_cast<char *>("prefix"));
    sub_AFC3F0(v1220, const_cast<char *>("maximumSectionSize"));
    sub_AFC3F0(v1220, const_cast<char *>("usePostProcess"));
    sub_AFC3F0(v1220, const_cast<char *>("postProcessDontSplitFiles"));
    sub_AFC3F0(v1220, const_cast<char *>("forceConvex"));
    v277 = reinterpret_cast<uint32_t *>(sub_B0E610(0x79AC2285u));
    sub_AFC3F0(v277, const_cast<char *>("input"));
    v278 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("physics_export.xml.bin"));
    v279 = v278;
    if ( v278 != 0 && G4_VCALL<int>(v278, 20) != 0 )
    {
      sub_A586C0(v279, 0, 0, 0);
      v1289 = reinterpret_cast<uint32_t *>(sub_B110B0(0x78D76F6u));
      sub_AFC4B0(v1289, const_cast<char *>("i"));
      sub_AFC4B0(v1289, const_cast<char *>("b"));
      sub_AFC4B0(v1289, const_cast<char *>("g"));
      sub_AFC4B0(v1289, const_cast<char *>("v"));
      sub_A58890(v279, 0, 0, 0);
      v1290 = reinterpret_cast<uint32_t *>(sub_B110B0(0x1F034A37u));
      sub_AFC4B0(v1290, const_cast<char *>("airport_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("downtown_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("ocean_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("interior_dlc_secretbase_00_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("poor_residential_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("rich_residential_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("strip00_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("strip01_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("strip02_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("strip03_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("interior_bank_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("interior_casino_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("interior_stripclub_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("interior_diner_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("interior_underground_fightpit_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("interior_cornerstore_phys"));
      sub_AFC4B0(v1290, const_cast<char *>("interior_vault01_phys"));
      G4_VCALL<void>(v279, 4);
    }
    v280 = reinterpret_cast<uint32_t *>(sub_B0E610(0xCBD5BDB8));
    sub_AFC3F0(v280, const_cast<char *>("energyRestitution"));
    sub_AFC3F0(v280, const_cast<char *>("friction"));
    sub_AFC3F0(v280, const_cast<char *>("restitution"));
    v281 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("physics_settings.xml.bin"));
    v282 = v281;
    if ( v281 != 0 && G4_VCALL<int>(v281, 20) != 0 )
    {
      sub_A58A60(v282, 0, 0, 0);
      v389 = reinterpret_cast<uint32_t *>(sub_B110B0(0x80CA587B));
      sub_AFC4B0(v389, const_cast<char *>("PhysicsWorldSetting_01"));
      G4_VCALL<void>(v282, 4);
    }
    v283 = reinterpret_cast<uint32_t *>(sub_B0E610(0x4A71B091u));
    sub_AFC3F0(v283, const_cast<char *>("Current"));
    sub_AFC3F0(v283, const_cast<char *>("Next"));
    sub_AFC3F0(v283, const_cast<char *>("End"));
    v284 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("races.xml.bin"));
    v285 = v284;
    if ( v284 != 0 && G4_VCALL<int>(v284, 20) != 0 )
    {
      sub_A58C30(v285, 0, 0, 0);
      v1288 = reinterpret_cast<uint32_t *>(sub_B110B0(0x731BA01u));
      sub_AFC4B0(v1288, const_cast<char *>("Race_TimeTrial_Land"));
      sub_AFC4B0(v1288, const_cast<char *>("Race_TimeAttack_Land"));
      sub_AFC4B0(v1288, const_cast<char *>("Race_TimeAttack_Arena"));
      sub_AFC4B0(v1288, const_cast<char *>("Race_TimeAttack_Air"));
      sub_AFC4B0(v1288, const_cast<char *>("Race_TimeAttack_C2M13"));
      G4_VCALL<void>(v285, 4);
    }
    v286 = reinterpret_cast<uint32_t *>(sub_B0E610(0x125CADA3u));
    sub_AFC3F0(v286, const_cast<char *>("Name"));
    sub_AFC3F0(v286, const_cast<char *>("filename"));
    sub_AFC3F0(v286, const_cast<char *>("type"));
    v287 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("render_lightzones.xml.bin"));
    v288 = v287;
    if ( v287 != 0 && G4_VCALL<int>(v287, 20) != 0 )
    {
      sub_A58E00(v288, 0, 0, 0);
      v1287 = reinterpret_cast<uint32_t *>(sub_B110B0(0x2BA6A3F7u));
      sub_AFC4B0(v1287, const_cast<char *>("OutsideDefault"));
      sub_AFC4B0(v1287, const_cast<char *>("InteriorDefault"));
      sub_AFC4B0(v1287, const_cast<char *>("InteriorCasino"));
      sub_AFC4B0(v1287, const_cast<char *>("InteriorBank"));
      sub_AFC4B0(v1287, const_cast<char *>("InteriorNightClub"));
      sub_AFC4B0(v1287, const_cast<char *>("InteriorCornerStore"));
      sub_AFC4B0(v1287, const_cast<char *>("InteriorDiner"));
      sub_AFC4B0(v1287, const_cast<char *>("InteriorVault"));
      sub_AFC4B0(v1287, const_cast<char *>("InteriorSecret"));
      sub_AFC4B0(v1287, const_cast<char *>("InteriorMMA"));
      sub_AFC4B0(v1287, const_cast<char *>("InteriorFightPit"));
      sub_AFC4B0(v1287, const_cast<char *>("MenuDefault"));
      sub_AFC4B0(v1287, const_cast<char *>("MenuVehicle"));
      sub_AFC4B0(v1287, const_cast<char *>("Menu_pawnshop"));
      G4_VCALL<void>(v288, 4);
    }
    v289 = reinterpret_cast<uint32_t *>(sub_B0E610(0x375CA359u));
    sub_AFC3F0(v289, const_cast<char *>("PixelFormat"));
    sub_AFC3F0(v289, const_cast<char *>("width_divider"));
    sub_AFC3F0(v289, const_cast<char *>("height_divider"));
    sub_AFC3F0(v289, const_cast<char *>("width"));
    sub_AFC3F0(v289, const_cast<char *>("height"));
    sub_AFC3F0(v289, const_cast<char *>("HasTextureAttachment"));
    sub_AFC3F0(v289, const_cast<char *>("TextureName"));
    sub_AFC3F0(v289, const_cast<char *>("MinFilter"));
    sub_AFC3F0(v289, const_cast<char *>("MagFilter"));
    sub_AFC3F0(v289, const_cast<char *>("Wrap"));
    sub_AFC3F0(v289, const_cast<char *>("AttachmentType"));
    sub_AFC3F0(v289, const_cast<char *>("DiscardedAfterRender"));
    v290 = reinterpret_cast<uint32_t *>(sub_B0E610(0xC069C67F));
    sub_AFC3F0(v290, const_cast<char *>("Attachments"));
    sub_AFC3F0(v290, const_cast<char *>("type"));
    v291 = reinterpret_cast<uint32_t *>(sub_B0E610(0x5F4CC327u));
    sub_AFC3F0(v291, const_cast<char *>("buffers"));
    v292 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("render_rt_settings.xml.bin"));
    v293 = v292;
    if ( v292 != 0 && G4_VCALL<int>(v292, 20) != 0 )
    {
      sub_A58FD0(v293, 0, 0, 0);
      v1285 = reinterpret_cast<uint32_t *>(sub_B110B0(0xB46BDA1B));
      sub_AFC4B0(v1285, const_cast<char *>("ColorTargetA"));
      sub_AFC4B0(v1285, const_cast<char *>("ColorTargetB"));
      sub_AFC4B0(v1285, const_cast<char *>("DepthTarget_l1"));
      sub_AFC4B0(v1285, const_cast<char *>("DepthTargetA_l234"));
      sub_AFC4B0(v1285, const_cast<char *>("DepthTargetB_l234"));
      sub_AFC4B0(v1285, const_cast<char *>("bloorX_l12"));
      sub_AFC4B0(v1285, const_cast<char *>("bloorY_l12"));
      sub_AFC4B0(v1285, const_cast<char *>("bloorX_l34"));
      sub_AFC4B0(v1285, const_cast<char *>("bloorY_l34"));
      sub_AFC4B0(v1285, const_cast<char *>("ShadowMap"));
      sub_AFC4B0(v1285, const_cast<char *>("WaterBuffer"));
      sub_A591A0(v293, 0, 0, 0);
      v1286 = reinterpret_cast<uint32_t *>(sub_B110B0(0x28AA4DF4u));
      sub_AFC4B0(v1286, const_cast<char *>("FramebufferA"));
      sub_AFC4B0(v1286, const_cast<char *>("FramebufferB"));
      sub_AFC4B0(v1286, const_cast<char *>("BloorX_l12"));
      sub_AFC4B0(v1286, const_cast<char *>("BloorY_l12"));
      sub_AFC4B0(v1286, const_cast<char *>("BloorX_l34"));
      sub_AFC4B0(v1286, const_cast<char *>("BloorY_l34"));
      sub_AFC4B0(v1286, const_cast<char *>("ShadowBuffer"));
      sub_AFC4B0(v1286, const_cast<char *>("WaterBuffer"));
      sub_A59370(v293, 0, 0, 0);
      v388 = reinterpret_cast<uint32_t *>(sub_B110B0(0xD677B792));
      sub_AFC4B0(v388, const_cast<char *>("level1"));
      sub_AFC4B0(v388, const_cast<char *>("level2"));
      sub_AFC4B0(v388, const_cast<char *>("level3"));
      G4_VCALL<void>(v293, 4);
    }
    v294 = reinterpret_cast<uint32_t *>(sub_B0E610(0x7048969Au));
    sub_AFC3F0(v294, const_cast<char *>("Level"));
    sub_AFC3F0(v294, const_cast<char *>("SkillBonus"));
    sub_AFC3F0(v294, const_cast<char *>("SkillDescription"));
    sub_AFC3F0(v294, const_cast<char *>("Type"));
    v295 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("skills_.xml.bin"));
    v296 = v295;
    if ( v295 != 0 && G4_VCALL<int>(v295, 20) != 0 )
    {
      sub_A59520(v296, 0, 0, 0);
      v387 = reinterpret_cast<uint32_t *>(sub_B110B0(0xBC27D0C8));
      sub_AFC4B0(v387, const_cast<char *>("SkillHealth"));
      sub_AFC4B0(v387, const_cast<char *>("SkillStrength"));
      sub_AFC4B0(v387, const_cast<char *>("SkillDriving"));
      sub_AFC4B0(v387, const_cast<char *>("SkillShooting"));
      G4_VCALL<void>(v296, 4);
    }
    v297 = reinterpret_cast<uint32_t *>(sub_B0E610(0x883246AE));
    sub_AFC3F0(v297, const_cast<char *>("Probability"));
    sub_AFC3F0(v297, const_cast<char *>("Type"));
    sub_AFC3F0(v297, const_cast<char *>("Palettes"));
    sub_AFC3F0(v297, const_cast<char *>("PaletteProbability"));
    v298 = reinterpret_cast<uint32_t *>(sub_B0E610(0xD21CC124));
    sub_AFC3F0(v298, const_cast<char *>("Name"));
    v299 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("spawn_groups.xml.bin"));
    v300 = v299;
    if ( v299 != 0 && G4_VCALL<int>(v299, 20) != 0 )
    {
      sub_A596D0(v300, 0, 0, 0);
      sub_B5B180(0x63C3DA75u);
      sub_A598A0(v300, 0, 0, 0);
      v338 = reinterpret_cast<uint32_t *>(sub_B110B0(0x95BA229C));
      sub_AFC4B0(v338, const_cast<char *>("CopBeige1"));
      sub_AFC4B0(v338, const_cast<char *>("CopBeige2"));
      sub_A59A50(v300, 0, 0, 0);
      v339 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA6AABD36));
      sub_AFC4B0(v339, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v339, const_cast<char *>("CopBlue2"));
      sub_A59C00(v300, 0, 0, 0);
      v340 = reinterpret_cast<uint32_t *>(sub_B110B0(0xEFA8C656));
      sub_AFC4B0(v340, const_cast<char *>("Military"));
      sub_A59DB0(v300, 0, 0, 0);
      v341 = reinterpret_cast<uint32_t *>(sub_B110B0(0x166D2F1Fu));
      sub_AFC4B0(v341, const_cast<char *>("CopPilot"));
      sub_A59F60(v300, 0, 0, 0);
      v342 = reinterpret_cast<uint32_t *>(sub_B110B0(0x5987D1C3u));
      sub_AFC4B0(v342, const_cast<char *>("MilitaryPilot"));
      sub_A5A110(v300, 0, 0, 0);
      v343 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA3686D58));
      sub_AFC4B0(v343, const_cast<char *>("Generic_Man2"));
      sub_AFC4B0(v343, const_cast<char *>("Swimmer_Female"));
      sub_A5A2C0(v300, 0, 0, 0);
      v344 = reinterpret_cast<uint32_t *>(sub_B110B0(0x6DF5322Bu));
      sub_AFC4B0(v344, const_cast<char *>("Biker_Female"));
      sub_AFC4B0(v344, const_cast<char *>("Biker_Fat"));
      sub_AFC4B0(v344, const_cast<char *>("Biker"));
      sub_A5A470(v300, 0, 0, 0);
      v345 = reinterpret_cast<uint32_t *>(sub_B110B0(0x235365E2u));
      sub_AFC4B0(v345, const_cast<char *>("ThugLow_Spawngroup"));
      sub_AFC4B0(v345, const_cast<char *>("ThugHeavy_Spawngroup"));
      sub_A5A620(v300, 0, 0, 0);
      v346 = reinterpret_cast<uint32_t *>(sub_B110B0(0x540365C6u));
      sub_AFC4B0(v346, const_cast<char *>("SecurityMid"));
      sub_AFC4B0(v346, const_cast<char *>("SecurityHeavy"));
      sub_A5A7D0(v300, 0, 0, 0);
      v347 = reinterpret_cast<uint32_t *>(sub_B110B0(0x9820B2B3));
      sub_AFC4B0(v347, const_cast<char *>("MafiaLow_Spawngroup"));
      sub_AFC4B0(v347, const_cast<char *>("MafiaMid_Spawngroup"));
      sub_AFC4B0(v347, const_cast<char *>("MafiaHeavy_Spawngroup"));
      sub_AFC4B0(v347, const_cast<char *>("MafiaLeader_Spawngroup"));
      sub_A5A980(v300, 0, 0, 0);
      v348 = reinterpret_cast<uint32_t *>(sub_B110B0(0x13C7F7B9u));
      sub_AFC4B0(v348, const_cast<char *>("LatinoLow_Spawngroup"));
      sub_AFC4B0(v348, const_cast<char *>("LatinoMid_Spawngroup"));
      sub_AFC4B0(v348, const_cast<char *>("LatinoHeavy_Spawngroup"));
      sub_A5AB30(v300, 0, 0, 0);
      v1227 = reinterpret_cast<uint32_t *>(sub_B110B0(0x23CFBF27u));
      sub_AFC4B0(v1227, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1227, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1227, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1227, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1227, const_cast<char *>("BusinessWoman2"));
      sub_AFC4B0(v1227, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1227, const_cast<char *>("Generic_Man2"));
      sub_AFC4B0(v1227, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1227, const_cast<char *>("TouristWoman"));
      sub_A5ACE0(v300, 0, 0, 0);
      v1228 = reinterpret_cast<uint32_t *>(sub_B110B0(0x1B07CE68u));
      sub_AFC4B0(v1228, const_cast<char *>("HighValuableTarget_Suitcase"));
      sub_AFC4B0(v1228, const_cast<char *>("HighValuableTarget_Clothing"));
      sub_AFC4B0(v1228, const_cast<char *>("HighValuableTarget_Weapon"));
      sub_AFC4B0(v1228, const_cast<char *>("HighValuableTarget_Vehicle"));
      sub_A5AE90(v300, 0, 0, 0);
      v349 = reinterpret_cast<uint32_t *>(sub_B110B0(0x40119EEBu));
      sub_AFC4B0(v349, const_cast<char *>("HighValuableTarget_Suitcase"));
      sub_A5B040(v300, 0, 0, 0);
      v350 = reinterpret_cast<uint32_t *>(sub_B110B0(0x66B30FCDu));
      sub_AFC4B0(v350, const_cast<char *>("HighValuableTarget_Clothing"));
      sub_A5B1F0(v300, 0, 0, 0);
      v351 = reinterpret_cast<uint32_t *>(sub_B110B0(0x6544BC25u));
      sub_AFC4B0(v351, const_cast<char *>("HighValuableTarget_Weapon"));
      sub_A5B3A0(v300, 0, 0, 0);
      v352 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA0AF878B));
      sub_AFC4B0(v352, const_cast<char *>("HighValuableTarget_Vehicle"));
      sub_A5B550(v300, 0, 0, 0);
      v1229 = reinterpret_cast<uint32_t *>(sub_B110B0(0xD4F09F38));
      sub_AFC4B0(v1229, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1229, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1229, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1229, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1229, const_cast<char *>("Bouncer"));
      sub_AFC4B0(v1229, const_cast<char *>("Biker_Female"));
      sub_AFC4B0(v1229, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1229, const_cast<char *>("HighValuableTarget_Suitcase"));
      sub_AFC4B0(v1229, const_cast<char *>("HighValuableTarget_Clothing"));
      sub_AFC4B0(v1229, const_cast<char *>("HighValuableTarget_Weapon"));
      sub_AFC4B0(v1229, const_cast<char *>("HighValuableTarget_Vehicle"));
      sub_A5B700(v300, 0, 0, 0);
      v1230 = reinterpret_cast<uint32_t *>(sub_B110B0(0x6557774Bu));
      sub_AFC4B0(v1230, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1230, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1230, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1230, const_cast<char *>("BusinessWoman2"));
      sub_AFC4B0(v1230, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1230, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1230, const_cast<char *>("Generic_Man2"));
      sub_AFC4B0(v1230, const_cast<char *>("CopBeige1"));
      sub_AFC4B0(v1230, const_cast<char *>("CopBeige2"));
      sub_A5B8B0(v300, 0, 0, 0);
      v1231 = reinterpret_cast<uint32_t *>(sub_B110B0(0x85E38739));
      sub_AFC4B0(v1231, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1231, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1231, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1231, const_cast<char *>("BusinessWoman2"));
      sub_AFC4B0(v1231, const_cast<char *>("CopBeige1"));
      sub_AFC4B0(v1231, const_cast<char *>("CopBeige2"));
      sub_A5BA60(v300, 0, 0, 0);
      v1232 = reinterpret_cast<uint32_t *>(sub_B110B0(0xECEE22BD));
      sub_AFC4B0(v1232, const_cast<char *>("Bouncer"));
      sub_AFC4B0(v1232, const_cast<char *>("Casino_Woman_idle"));
      sub_AFC4B0(v1232, const_cast<char *>("GenericFemale_idle"));
      sub_AFC4B0(v1232, const_cast<char *>("Generic_Man1_idle"));
      sub_AFC4B0(v1232, const_cast<char *>("Generic_Man2_idle"));
      sub_AFC4B0(v1232, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1232, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v1232, const_cast<char *>("HighClass_Man1"));
      sub_AFC4B0(v1232, const_cast<char *>("HighClass_Man2"));
      sub_AFC4B0(v1232, const_cast<char *>("HighClass_Pedestrian1"));
      sub_AFC4B0(v1232, const_cast<char *>("HighClass_Pedestrian2"));
      sub_A5BC10(v300, 0, 0, 0);
      v1233 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA3EB096B));
      sub_AFC4B0(v1233, const_cast<char *>("Dealer"));
      sub_AFC4B0(v1233, const_cast<char *>("Casino_Woman"));
      sub_AFC4B0(v1233, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1233, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1233, const_cast<char *>("Generic_Man2"));
      sub_AFC4B0(v1233, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1233, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v1233, const_cast<char *>("Bouncer"));
      sub_AFC4B0(v1233, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1233, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1233, const_cast<char *>("CopBeige1"));
      sub_AFC4B0(v1233, const_cast<char *>("CopBeige2"));
      sub_A5BDC0(v300, 0, 0, 0);
      v1234 = reinterpret_cast<uint32_t *>(sub_B110B0(0x762A4D99u));
      sub_AFC4B0(v1234, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1234, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1234, const_cast<char *>("Generic_Man2"));
      sub_AFC4B0(v1234, const_cast<char *>("ConstructionWorker"));
      sub_A5BF70(v300, 0, 0, 0);
      v1235 = reinterpret_cast<uint32_t *>(sub_B110B0(0x74B9A61Cu));
      sub_AFC4B0(v1235, const_cast<char *>("HighClass_Man1Nightclub"));
      sub_AFC4B0(v1235, const_cast<char *>("HighClass_Man2Nightclub"));
      sub_AFC4B0(v1235, const_cast<char *>("HighClass_Pedestrian1Nightclub"));
      sub_AFC4B0(v1235, const_cast<char *>("HighClass_Pedestrian2Nightclub"));
      sub_AFC4B0(v1235, const_cast<char *>("Casino_WomanNightclub"));
      sub_AFC4B0(v1235, const_cast<char *>("GenericFemaleNightclub"));
      sub_AFC4B0(v1235, const_cast<char *>("Generic_Man1Nightclub"));
      sub_AFC4B0(v1235, const_cast<char *>("Generic_Man2Nightclub"));
      sub_AFC4B0(v1235, const_cast<char *>("Bouncer"));
      sub_A5C120(v300, 0, 0, 0);
      v1236 = reinterpret_cast<uint32_t *>(sub_B110B0(0x420C8175u));
      sub_AFC4B0(v1236, const_cast<char *>("HookerDancer"));
      sub_AFC4B0(v1236, const_cast<char *>("Generic_Man2Dancer"));
      sub_AFC4B0(v1236, const_cast<char *>("GenericFemaleDancer"));
      sub_AFC4B0(v1236, const_cast<char *>("HighClass_Man1Dancer"));
      sub_AFC4B0(v1236, const_cast<char *>("HighClass_Man2Dancer"));
      sub_A5C2D0(v300, 0, 0, 0);
      v1237 = reinterpret_cast<uint32_t *>(sub_B110B0(0x75E74A51u));
      sub_AFC4B0(v1237, const_cast<char *>("GenericFemale_idle"));
      sub_AFC4B0(v1237, const_cast<char *>("Generic_Man1_idle"));
      sub_AFC4B0(v1237, const_cast<char *>("Generic_Man2_idle"));
      sub_AFC4B0(v1237, const_cast<char *>("Hooker_idle"));
      sub_AFC4B0(v1237, const_cast<char *>("StriperStanding_01"));
      sub_AFC4B0(v1237, const_cast<char *>("StriperStanding_02"));
      sub_AFC4B0(v1237, const_cast<char *>("StriperStanding_03"));
      sub_AFC4B0(v1237, const_cast<char *>("Bouncer"));
      sub_A5C480(v300, 0, 0, 0);
      v353 = reinterpret_cast<uint32_t *>(sub_B110B0(0xE6CD7Du));
      sub_AFC4B0(v353, const_cast<char *>("Hooker_idle"));
      sub_A5C630(v300, 0, 0, 0);
      v1238 = reinterpret_cast<uint32_t *>(sub_B110B0(0xD61E2A0C));
      sub_AFC4B0(v1238, const_cast<char *>("HighClass_Man1_idle"));
      sub_AFC4B0(v1238, const_cast<char *>("HighClass_Pedestrian1_idle"));
      sub_AFC4B0(v1238, const_cast<char *>("HighClass_Pedestrian2_idle"));
      sub_AFC4B0(v1238, const_cast<char *>("BusinessMan1_idle"));
      sub_AFC4B0(v1238, const_cast<char *>("BusinessMan2_idle"));
      sub_AFC4B0(v1238, const_cast<char *>("GenericFemale_idle"));
      sub_AFC4B0(v1238, const_cast<char *>("StriperStanding_01"));
      sub_AFC4B0(v1238, const_cast<char *>("StriperStanding_02"));
      sub_AFC4B0(v1238, const_cast<char *>("StriperStanding_03"));
      sub_A5C7E0(v300, 0, 0, 0);
      v1239 = reinterpret_cast<uint32_t *>(sub_B110B0(0x2846A010u));
      sub_AFC4B0(v1239, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1239, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1239, const_cast<char *>("MafiaLow_Spawngroup"));
      sub_AFC4B0(v1239, const_cast<char *>("MafiaMid_Spawngroup"));
      sub_AFC4B0(v1239, const_cast<char *>("MafiaHeavy_Spawngroup"));
      sub_AFC4B0(v1239, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1239, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v1239, const_cast<char *>("HighClass_Man1"));
      sub_AFC4B0(v1239, const_cast<char *>("HighClass_Man2"));
      sub_AFC4B0(v1239, const_cast<char *>("HighClass_Pedestrian1"));
      sub_AFC4B0(v1239, const_cast<char *>("HighClass_Pedestrian2"));
      sub_AFC4B0(v1239, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1239, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1239, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1239, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1239, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1239, const_cast<char *>("Generic_Man2"));
      sub_AFC4B0(v1239, const_cast<char *>("HighValuableTarget_Suitcase"));
      sub_AFC4B0(v1239, const_cast<char *>("HighValuableTarget_Clothing"));
      sub_AFC4B0(v1239, const_cast<char *>("HighValuableTarget_Weapon"));
      sub_AFC4B0(v1239, const_cast<char *>("HighValuableTarget_Vehicle"));
      sub_A5C990(v300, 0, 0, 0);
      v354 = reinterpret_cast<uint32_t *>(sub_B110B0(0xB6425A2A));
      sub_AFC4B0(v354, const_cast<char *>("Bouncer"));
      sub_A5CB40(v300, 0, 0, 0);
      v1240 = reinterpret_cast<uint32_t *>(sub_B110B0(0xC851D4A9));
      sub_AFC4B0(v1240, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1240, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1240, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1240, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v1240, const_cast<char *>("HighClass_Man1"));
      sub_AFC4B0(v1240, const_cast<char *>("HighClass_Man2"));
      sub_AFC4B0(v1240, const_cast<char *>("HighClass_Pedestrian1"));
      sub_AFC4B0(v1240, const_cast<char *>("HighClass_Pedestrian2"));
      sub_AFC4B0(v1240, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1240, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1240, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1240, const_cast<char *>("BusinessWoman2"));
      sub_AFC4B0(v1240, const_cast<char *>("ConstructionWorker"));
      sub_AFC4B0(v1240, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1240, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1240, const_cast<char *>("Generic_Man2"));
      sub_A5CCF0(v300, 0, 0, 0);
      v1241 = reinterpret_cast<uint32_t *>(sub_B110B0(0x395FE1EBu));
      sub_AFC4B0(v1241, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1241, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1241, const_cast<char *>("MafiaLow_Spawngroup"));
      sub_AFC4B0(v1241, const_cast<char *>("MafiaMid_Spawngroup"));
      sub_AFC4B0(v1241, const_cast<char *>("MafiaHeavy_Spawngroup"));
      sub_AFC4B0(v1241, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1241, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v1241, const_cast<char *>("HighClass_Man1"));
      sub_AFC4B0(v1241, const_cast<char *>("HighClass_Man2"));
      sub_AFC4B0(v1241, const_cast<char *>("HighClass_Pedestrian1"));
      sub_AFC4B0(v1241, const_cast<char *>("HighClass_Pedestrian2"));
      sub_AFC4B0(v1241, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1241, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1241, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1241, const_cast<char *>("BusinessWoman2"));
      sub_A5CEA0(v300, 0, 0, 0);
      v1242 = reinterpret_cast<uint32_t *>(sub_B110B0(0xCC3C59C6));
      sub_AFC4B0(v1242, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1242, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1242, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1242, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v1242, const_cast<char *>("HighClass_Man1"));
      sub_AFC4B0(v1242, const_cast<char *>("HighClass_Man2"));
      sub_AFC4B0(v1242, const_cast<char *>("HighClass_Pedestrian1"));
      sub_AFC4B0(v1242, const_cast<char *>("HighClass_Pedestrian2"));
      sub_AFC4B0(v1242, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1242, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1242, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1242, const_cast<char *>("BusinessWoman2"));
      sub_AFC4B0(v1242, const_cast<char *>("ConstructionWorker"));
      sub_AFC4B0(v1242, const_cast<char *>("Biker"));
      sub_AFC4B0(v1242, const_cast<char *>("Biker_Female"));
      sub_AFC4B0(v1242, const_cast<char *>("Biker_Fat"));
      sub_AFC4B0(v1242, const_cast<char *>("MafiaLow_Spawngroup"));
      sub_AFC4B0(v1242, const_cast<char *>("MafiaMid_Spawngroup"));
      sub_AFC4B0(v1242, const_cast<char *>("MafiaHeavy_Spawngroup"));
      sub_AFC4B0(v1242, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1242, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1242, const_cast<char *>("Generic_Man2"));
      sub_A5D050(v300, 0, 0, 0);
      v1243 = reinterpret_cast<uint32_t *>(sub_B110B0(0xFC7F3A85));
      sub_AFC4B0(v1243, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1243, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1243, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1243, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v1243, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1243, const_cast<char *>("BusinessWoman2"));
      sub_AFC4B0(v1243, const_cast<char *>("Hooker"));
      sub_AFC4B0(v1243, const_cast<char *>("ThugLow_Spawngroup"));
      sub_AFC4B0(v1243, const_cast<char *>("ThugHeavy_Spawngroup"));
      sub_AFC4B0(v1243, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1243, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1243, const_cast<char *>("Generic_Man2"));
      sub_A5D200(v300, 0, 0, 0);
      v1244 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA8ADA7CC));
      sub_AFC4B0(v1244, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1244, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1244, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1244, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v1244, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1244, const_cast<char *>("BusinessWoman2"));
      sub_AFC4B0(v1244, const_cast<char *>("Hooker"));
      sub_AFC4B0(v1244, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1244, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1244, const_cast<char *>("Generic_Man2"));
      sub_A5D3B0(v300, 0, 0, 0);
      v1245 = reinterpret_cast<uint32_t *>(sub_B110B0(0x5958A52Au));
      sub_AFC4B0(v1245, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1245, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1245, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1245, const_cast<char *>("BusinessWoman2"));
      sub_AFC4B0(v1245, const_cast<char *>("Hooker"));
      sub_AFC4B0(v1245, const_cast<char *>("ThugLow_Spawngroup"));
      sub_AFC4B0(v1245, const_cast<char *>("ThugHeavy_Spawngroup"));
      sub_AFC4B0(v1245, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1245, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1245, const_cast<char *>("Generic_Man2"));
      sub_A5D560(v300, 0, 0, 0);
      v1246 = reinterpret_cast<uint32_t *>(sub_B110B0(0xF22DF2E0));
      sub_AFC4B0(v1246, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1246, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1246, const_cast<char *>("Hooker"));
      sub_AFC4B0(v1246, const_cast<char *>("ThugLow_Spawngroup"));
      sub_AFC4B0(v1246, const_cast<char *>("ThugHeavy_Spawngroup"));
      sub_AFC4B0(v1246, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1246, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1246, const_cast<char *>("Generic_Man2"));
      sub_A5D710(v300, 0, 0, 0);
      v1247 = reinterpret_cast<uint32_t *>(sub_B110B0(0x18F8A6Bu));
      sub_AFC4B0(v1247, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1247, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1247, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1247, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1247, const_cast<char *>("Generic_Man2"));
      sub_AFC4B0(v1247, const_cast<char *>("ConstructionWorker"));
      sub_AFC4B0(v1247, const_cast<char *>("Hooker"));
      sub_AFC4B0(v1247, const_cast<char *>("ThugLow_Spawngroup"));
      sub_AFC4B0(v1247, const_cast<char *>("ThugHeavy_Spawngroup"));
      sub_AFC4B0(v1247, const_cast<char *>("MafiaLow_Spawngroup"));
      sub_AFC4B0(v1247, const_cast<char *>("MafiaMid_Spawngroup"));
      sub_AFC4B0(v1247, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1247, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1247, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1247, const_cast<char *>("BusinessWoman2"));
      sub_A5D8C0(v300, 0, 0, 0);
      v355 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA4BDF00D));
      sub_AFC4B0(v355, const_cast<char *>("Military"));
      sub_A5DA70(v300, 0, 0, 0);
      v1248 = reinterpret_cast<uint32_t *>(sub_B110B0(0x8B934EAB));
      sub_AFC4B0(v1248, const_cast<char *>("CopBeige1"));
      sub_AFC4B0(v1248, const_cast<char *>("CopBeige2"));
      sub_AFC4B0(v1248, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1248, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1248, const_cast<char *>("Generic_Man2"));
      sub_AFC4B0(v1248, const_cast<char *>("LatinoLow_Spawngroup"));
      sub_AFC4B0(v1248, const_cast<char *>("LatinoMid_Spawngroup"));
      sub_AFC4B0(v1248, const_cast<char *>("LatinoHeavy_Spawngroup"));
      sub_AFC4B0(v1248, const_cast<char *>("Biker_Female"));
      sub_AFC4B0(v1248, const_cast<char *>("Biker_Fat"));
      sub_AFC4B0(v1248, const_cast<char *>("Biker"));
      sub_AFC4B0(v1248, const_cast<char *>("ConstructionWorker"));
      sub_AFC4B0(v1248, const_cast<char *>("Hooker"));
      sub_A5DC20(v300, 0, 0, 0);
      v1249 = reinterpret_cast<uint32_t *>(sub_B110B0(0x13DB1751u));
      sub_AFC4B0(v1249, const_cast<char *>("CopBeige1"));
      sub_AFC4B0(v1249, const_cast<char *>("CopBeige2"));
      sub_AFC4B0(v1249, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1249, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1249, const_cast<char *>("Generic_Man2"));
      sub_AFC4B0(v1249, const_cast<char *>("LatinoLow_Spawngroup"));
      sub_AFC4B0(v1249, const_cast<char *>("LatinoMid_Spawngroup"));
      sub_AFC4B0(v1249, const_cast<char *>("LatinoHeavy_Spawngroup"));
      sub_AFC4B0(v1249, const_cast<char *>("Biker_Female"));
      sub_AFC4B0(v1249, const_cast<char *>("Biker_Fat"));
      sub_AFC4B0(v1249, const_cast<char *>("Biker"));
      sub_AFC4B0(v1249, const_cast<char *>("ConstructionWorker"));
      sub_AFC4B0(v1249, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1249, const_cast<char *>("TouristWoman"));
      sub_A5DDD0(v300, 0, 0, 0);
      v1250 = reinterpret_cast<uint32_t *>(sub_B110B0(0xC410F995));
      sub_AFC4B0(v1250, const_cast<char *>("CopBeige1"));
      sub_AFC4B0(v1250, const_cast<char *>("CopBeige2"));
      sub_AFC4B0(v1250, const_cast<char *>("ConstructionWorker"));
      sub_AFC4B0(v1250, const_cast<char *>("MafiaLow_Spawngroup"));
      sub_AFC4B0(v1250, const_cast<char *>("MafiaMid_Spawngroup"));
      sub_AFC4B0(v1250, const_cast<char *>("MafiaHeavy_Spawngroup"));
      sub_A5DF80(v300, 0, 0, 0);
      v1174 = reinterpret_cast<uint32_t *>(sub_B110B0(0xEDE61108));
      sub_AFC4B0(v1174, const_cast<char *>("Swimmer_Male"));
      sub_AFC4B0(v1174, const_cast<char *>("Swimmer_Female"));
      sub_A5E130(v300, 0, 0, 0);
      v1175 = reinterpret_cast<uint32_t *>(sub_B110B0(0xCA6C04FC));
      sub_AFC4B0(v1175, const_cast<char *>("MafiaLow"));
      sub_AFC4B0(v1175, const_cast<char *>("MafiaMid"));
      sub_A5E2E0(v300, 0, 0, 0);
      v1176 = reinterpret_cast<uint32_t *>(sub_B110B0(0x24AA155u));
      sub_AFC4B0(v1176, const_cast<char *>("MafiaLow_NoLoot"));
      sub_AFC4B0(v1176, const_cast<char *>("MafiaMid_NoLoot"));
      sub_A5E490(v300, 0, 0, 0);
      v1177 = reinterpret_cast<uint32_t *>(sub_B110B0(0xEA1DC807));
      sub_AFC4B0(v1177, const_cast<char *>("ConstructionLow"));
      sub_AFC4B0(v1177, const_cast<char *>("ConstructionMid"));
      sub_A5E640(v300, 0, 0, 0);
      v1178 = reinterpret_cast<uint32_t *>(sub_B110B0(0xC048C351));
      sub_AFC4B0(v1178, const_cast<char *>("ThugLowWithGun"));
      sub_AFC4B0(v1178, const_cast<char *>("ThugMid"));
      sub_A5E7F0(v300, 0, 0, 0);
      v1179 = reinterpret_cast<uint32_t *>(sub_B110B0(0x9CA1AFE7));
      sub_AFC4B0(v1179, const_cast<char *>("ThugLowWithGun"));
      sub_AFC4B0(v1179, const_cast<char *>("ThugHeavyWithGun"));
      sub_A5E9A0(v300, 0, 0, 0);
      v1180 = reinterpret_cast<uint32_t *>(sub_B110B0(0xC0017AEC));
      sub_AFC4B0(v1180, const_cast<char *>("LatinoLow"));
      sub_AFC4B0(v1180, const_cast<char *>("LatinoMid"));
      sub_AFC4B0(v1180, const_cast<char *>("LatinoHeavy"));
      sub_A5EB50(v300, 0, 0, 0);
      v356 = reinterpret_cast<uint32_t *>(sub_B110B0(0x262A3DB6u));
      sub_AFC4B0(v356, const_cast<char *>("CopRiot"));
      sub_A5ED00(v300, 0, 0, 0);
      v1251 = reinterpret_cast<uint32_t *>(sub_B110B0(0xD4F07626));
      sub_AFC4B0(v1251, const_cast<char *>("CopBeige1"));
      sub_AFC4B0(v1251, const_cast<char *>("CopBeige2"));
      sub_AFC4B0(v1251, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1251, const_cast<char *>("CopBlue2"));
      sub_A5EEB0(v300, 0, 0, 0);
      v357 = reinterpret_cast<uint32_t *>(sub_B110B0(0xC94F653A));
      sub_AFC4B0(v357, const_cast<char *>("Military"));
      sub_A5F060(v300, 0, 0, 0);
      v1252 = reinterpret_cast<uint32_t *>(sub_B110B0(0x357A4901u));
      sub_AFC4B0(v1252, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1252, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1252, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1252, const_cast<char *>("Dealer"));
      sub_A5F210(v300, 0, 0, 0);
      v358 = reinterpret_cast<uint32_t *>(sub_B110B0(0xC417000u));
      sub_AFC4B0(v358, const_cast<char *>("copSuv"));
      sub_A5F3C0(v300, 0, 0, 0);
      v1181 = reinterpret_cast<uint32_t *>(sub_B110B0(0x29F4FAB2u));
      sub_AFC4B0(v1181, const_cast<char *>("Survi_MafiaLow"));
      sub_AFC4B0(v1181, const_cast<char *>("Survi_MafiaMid"));
      sub_A5F570(v300, 0, 0, 0);
      v1182 = reinterpret_cast<uint32_t *>(sub_B110B0(0x29F52B66u));
      sub_AFC4B0(v1182, const_cast<char *>("Survi_MafiaLow"));
      sub_AFC4B0(v1182, const_cast<char *>("Survi_MafiaMid"));
      sub_A5F720(v300, 0, 0, 0);
      v1183 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA83B7626));
      sub_AFC4B0(v1183, const_cast<char *>("Survi_MafiaMid"));
      sub_AFC4B0(v1183, const_cast<char *>("Survi_MafiaHeavy"));
      sub_A5F8D0(v300, 0, 0, 0);
      v1184 = reinterpret_cast<uint32_t *>(sub_B110B0(0xD4750C9u));
      sub_AFC4B0(v1184, const_cast<char *>("Survi_MafiaMid"));
      sub_AFC4B0(v1184, const_cast<char *>("Survi_MafiaHeavy"));
      sub_A5FA80(v300, 0, 0, 0);
      v1185 = reinterpret_cast<uint32_t *>(sub_B110B0(0xD467328u));
      sub_AFC4B0(v1185, const_cast<char *>("Survi_MafiaMid"));
      sub_AFC4B0(v1185, const_cast<char *>("Survi_MafiaHeavy"));
      sub_A5FC30(v300, 0, 0, 0);
      v359 = reinterpret_cast<uint32_t *>(sub_B110B0(0x425E6A54u));
      sub_AFC4B0(v359, const_cast<char *>("carng_target_Dealer"));
      sub_A5FDE0(v300, 0, 0, 0);
      v360 = reinterpret_cast<uint32_t *>(sub_B110B0(0x333F6A02u));
      sub_AFC4B0(v360, const_cast<char *>("ThugLowWithGun_Crng"));
      sub_AFC4B0(v360, const_cast<char *>("ThugHeavyWithGun_Crng"));
      sub_A5FF90(v300, 0, 0, 0);
      v361 = reinterpret_cast<uint32_t *>(sub_B110B0(0x6147217Eu));
      sub_AFC4B0(v361, const_cast<char *>("JapanModern_Carnage_thugs"));
      sub_AFC4B0(v361, const_cast<char *>("JapanPoor_Carnage_thugs"));
      sub_A60140(v300, 0, 0, 0);
      v362 = reinterpret_cast<uint32_t *>(sub_B110B0(0x333F6A0Du));
      sub_AFC4B0(v362, const_cast<char *>("MafiaHeavy"));
      sub_AFC4B0(v362, const_cast<char *>("MafiaMid"));
      sub_AFC4B0(v362, const_cast<char *>("MafiaLow"));
      sub_AFC4B0(v362, const_cast<char *>("MafiaLowFists"));
      sub_A602F0(v300, 0, 0, 0);
      v363 = reinterpret_cast<uint32_t *>(sub_B110B0(0x61472179u));
      sub_AFC4B0(v363, const_cast<char *>("UsaSedan_Goon_Carnage"));
      sub_AFC4B0(v363, const_cast<char *>("suv_goon_Carnage"));
      sub_A604A0(v300, 0, 0, 0);
      v364 = reinterpret_cast<uint32_t *>(sub_B110B0(0x333F6A0Cu));
      sub_AFC4B0(v364, const_cast<char *>("LatinoLow"));
      sub_AFC4B0(v364, const_cast<char *>("LatinoMid"));
      sub_AFC4B0(v364, const_cast<char *>("LatinoHeavy"));
      sub_A60650(v300, 0, 0, 0);
      v365 = reinterpret_cast<uint32_t *>(sub_B110B0(0x61472178u));
      sub_AFC4B0(v365, const_cast<char *>("UsaPoor_latinos_Carnage"));
      sub_AFC4B0(v365, const_cast<char *>("PickupTruck_latino_Carnage"));
      sub_A60800(v300, 0, 0, 0);
      v366 = reinterpret_cast<uint32_t *>(sub_B110B0(0x333F6A0Fu));
      sub_AFC4B0(v366, const_cast<char *>("BikerLow"));
      sub_AFC4B0(v366, const_cast<char *>("BikerMid"));
      sub_A609B0(v300, 0, 0, 0);
      v367 = reinterpret_cast<uint32_t *>(sub_B110B0(0x6147217Bu));
      sub_AFC4B0(v367, const_cast<char *>("bikeCustom_bikers_Carnage"));
      sub_A60B60(v300, 0, 0, 0);
      v1253 = reinterpret_cast<uint32_t *>(sub_B110B0(0x3EEC0CA2u));
      sub_AFC4B0(v1253, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1253, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1253, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1253, const_cast<char *>("UsaPoor"));
      sub_AFC4B0(v1253, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1253, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1253, const_cast<char *>("MuscleRio"));
      sub_AFC4B0(v1253, const_cast<char *>("theBeast"));
      sub_AFC4B0(v1253, const_cast<char *>("GermanSuper"));
      sub_AFC4B0(v1253, const_cast<char *>("Italiansuper"));
      sub_AFC4B0(v1253, const_cast<char *>("Usasuper"));
      sub_AFC4B0(v1253, const_cast<char *>("JapanSuper"));
      sub_AFC4B0(v1253, const_cast<char *>("PickupTruck"));
      sub_AFC4B0(v1253, const_cast<char *>("UsaPoor_latinos"));
      sub_AFC4B0(v1253, const_cast<char *>("hummer"));
      sub_AFC4B0(v1253, const_cast<char *>("suv"));
      sub_AFC4B0(v1253, const_cast<char *>("suv_goon"));
      sub_AFC4B0(v1253, const_cast<char *>("monster_truck"));
      sub_AFC4B0(v1253, const_cast<char *>("Taxi"));
      sub_AFC4B0(v1253, const_cast<char *>("CopCar"));
      sub_AFC4B0(v1253, const_cast<char *>("CopPoor"));
      sub_AFC4B0(v1253, const_cast<char *>("copSuv"));
      sub_AFC4B0(v1253, const_cast<char *>("militarySuv"));
      sub_AFC4B0(v1253, const_cast<char *>("bearcat"));
      sub_AFC4B0(v1253, const_cast<char *>("tank"));
      sub_AFC4B0(v1253, const_cast<char *>("Van"));
      sub_AFC4B0(v1253, const_cast<char *>("Ambulance"));
      sub_AFC4B0(v1253, const_cast<char *>("Delivery"));
      sub_AFC4B0(v1253, const_cast<char *>("Advertising"));
      sub_AFC4B0(v1253, const_cast<char *>("bikeDirt"));
      sub_AFC4B0(v1253, const_cast<char *>("bikeScooter"));
      sub_AFC4B0(v1253, const_cast<char *>("bikeCustom"));
      sub_AFC4B0(v1253, const_cast<char *>("bikeCustom_bikers"));
      sub_AFC4B0(v1253, const_cast<char *>("bikeSport"));
      sub_AFC4B0(v1253, const_cast<char *>("Bike_monster"));
      sub_AFC4B0(v1253, const_cast<char *>("Limousine"));
      sub_AFC4B0(v1253, const_cast<char *>("Limousine_HighValue"));
      sub_A60D10(v300, 0, 0, 0);
      v1254 = reinterpret_cast<uint32_t *>(sub_B110B0(0x4B148490u));
      sub_AFC4B0(v1254, const_cast<char *>("CopCar"));
      sub_AFC4B0(v1254, const_cast<char *>("Van"));
      sub_AFC4B0(v1254, const_cast<char *>("Delivery"));
      sub_AFC4B0(v1254, const_cast<char *>("Taxi"));
      sub_AFC4B0(v1254, const_cast<char *>("Ambulance"));
      sub_AFC4B0(v1254, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1254, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1254, const_cast<char *>("suv"));
      sub_AFC4B0(v1254, const_cast<char *>("suv_goon"));
      sub_AFC4B0(v1254, const_cast<char *>("Limousine"));
      sub_AFC4B0(v1254, const_cast<char *>("bikeSport"));
      sub_AFC4B0(v1254, const_cast<char *>("bikeCustom_bikers"));
      sub_A60EC0(v300, 0, 0, 0);
      v368 = reinterpret_cast<uint32_t *>(sub_B110B0(0xBF4F8CEE));
      sub_AFC4B0(v368, const_cast<char *>("Tank"));
      sub_A61070(v300, 0, 0, 0);
      v1255 = reinterpret_cast<uint32_t *>(sub_B110B0(0x7A748380u));
      sub_AFC4B0(v1255, const_cast<char *>("UsaPoor"));
      sub_AFC4B0(v1255, const_cast<char *>("JapanPoor_thugs"));
      sub_AFC4B0(v1255, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1255, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1255, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1255, const_cast<char *>("CopCar"));
      sub_AFC4B0(v1255, const_cast<char *>("Van"));
      sub_AFC4B0(v1255, const_cast<char *>("Delivery"));
      sub_AFC4B0(v1255, const_cast<char *>("Taxi"));
      sub_AFC4B0(v1255, const_cast<char *>("Ambulance"));
      sub_AFC4B0(v1255, const_cast<char *>("MuscleRio"));
      sub_AFC4B0(v1255, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1255, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1255, const_cast<char *>("theBeast"));
      sub_AFC4B0(v1255, const_cast<char *>("bikeScooter"));
      sub_AFC4B0(v1255, const_cast<char *>("bikeCustom"));
      sub_AFC4B0(v1255, const_cast<char *>("bikeCustom_bikers"));
      sub_A61220(v300, 0, 0, 0);
      v1256 = reinterpret_cast<uint32_t *>(sub_B110B0(0x9BB94995));
      sub_AFC4B0(v1256, const_cast<char *>("Bike_monster"));
      sub_AFC4B0(v1256, const_cast<char *>("bikeDirt"));
      sub_AFC4B0(v1256, const_cast<char *>("CopPoor"));
      sub_AFC4B0(v1256, const_cast<char *>("PickupTruck"));
      sub_AFC4B0(v1256, const_cast<char *>("Delivery"));
      sub_AFC4B0(v1256, const_cast<char *>("Van"));
      sub_AFC4B0(v1256, const_cast<char *>("UsaPoor"));
      sub_AFC4B0(v1256, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1256, const_cast<char *>("JapanModern"));
      sub_A613D0(v300, 0, 0, 0);
      v1257 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA7EF2B45));
      sub_AFC4B0(v1257, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1257, const_cast<char *>("UsaPoor"));
      sub_AFC4B0(v1257, const_cast<char *>("JapanPoor_thugs"));
      sub_AFC4B0(v1257, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1257, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1257, const_cast<char *>("CopCar"));
      sub_AFC4B0(v1257, const_cast<char *>("Van"));
      sub_AFC4B0(v1257, const_cast<char *>("Delivery"));
      sub_AFC4B0(v1257, const_cast<char *>("Advertising"));
      sub_AFC4B0(v1257, const_cast<char *>("Taxi"));
      sub_AFC4B0(v1257, const_cast<char *>("Ambulance"));
      sub_AFC4B0(v1257, const_cast<char *>("MuscleRio"));
      sub_AFC4B0(v1257, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1257, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1257, const_cast<char *>("theBeast"));
      sub_AFC4B0(v1257, const_cast<char *>("bikeScooter"));
      sub_AFC4B0(v1257, const_cast<char *>("bikeCustom"));
      sub_AFC4B0(v1257, const_cast<char *>("bikeCustom_bikers"));
      sub_A61580(v300, 0, 0, 0);
      v1258 = reinterpret_cast<uint32_t *>(sub_B110B0(0x7A1D0D73u));
      sub_AFC4B0(v1258, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1258, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1258, const_cast<char *>("suv"));
      sub_AFC4B0(v1258, const_cast<char *>("suv_goon"));
      sub_AFC4B0(v1258, const_cast<char *>("hummer"));
      sub_AFC4B0(v1258, const_cast<char *>("Taxi"));
      sub_AFC4B0(v1258, const_cast<char *>("CopCar"));
      sub_AFC4B0(v1258, const_cast<char *>("Van"));
      sub_AFC4B0(v1258, const_cast<char *>("Ambulance"));
      sub_AFC4B0(v1258, const_cast<char *>("Limousine"));
      sub_AFC4B0(v1258, const_cast<char *>("Limousine_HighValue"));
      sub_A61730(v300, 0, 0, 0);
      v1259 = reinterpret_cast<uint32_t *>(sub_B110B0(0x3E461F9Fu));
      sub_AFC4B0(v1259, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1259, const_cast<char *>("UsaPoor"));
      sub_AFC4B0(v1259, const_cast<char *>("JapanPoor_thugs"));
      sub_AFC4B0(v1259, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1259, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1259, const_cast<char *>("CopCar"));
      sub_AFC4B0(v1259, const_cast<char *>("Van"));
      sub_AFC4B0(v1259, const_cast<char *>("Delivery"));
      sub_AFC4B0(v1259, const_cast<char *>("Taxi"));
      sub_AFC4B0(v1259, const_cast<char *>("Ambulance"));
      sub_AFC4B0(v1259, const_cast<char *>("MuscleRio"));
      sub_AFC4B0(v1259, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1259, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1259, const_cast<char *>("theBeast"));
      sub_AFC4B0(v1259, const_cast<char *>("bikeScooter"));
      sub_AFC4B0(v1259, const_cast<char *>("bikeCustom"));
      sub_AFC4B0(v1259, const_cast<char *>("bikeCustom_bikers"));
      sub_AFC4B0(v1259, const_cast<char *>("suv"));
      sub_AFC4B0(v1259, const_cast<char *>("suv_goon"));
      sub_A618E0(v300, 0, 0, 0);
      v1260 = reinterpret_cast<uint32_t *>(sub_B110B0(0x567CE5AEu));
      sub_AFC4B0(v1260, const_cast<char *>("Van"));
      sub_AFC4B0(v1260, const_cast<char *>("Delivery"));
      sub_AFC4B0(v1260, const_cast<char *>("suv"));
      sub_AFC4B0(v1260, const_cast<char *>("suv_goon"));
      sub_A61A90(v300, 0, 0, 0);
      v1261 = reinterpret_cast<uint32_t *>(sub_B110B0(0xEE3F2CBA));
      sub_AFC4B0(v1261, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1261, const_cast<char *>("UsaPoor"));
      sub_AFC4B0(v1261, const_cast<char *>("JapanPoor_thugs"));
      sub_AFC4B0(v1261, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1261, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1261, const_cast<char *>("JapanModern_tiers2"));
      sub_AFC4B0(v1261, const_cast<char *>("CopCar"));
      sub_AFC4B0(v1261, const_cast<char *>("Van"));
      sub_AFC4B0(v1261, const_cast<char *>("Delivery"));
      sub_AFC4B0(v1261, const_cast<char *>("Taxi"));
      sub_AFC4B0(v1261, const_cast<char *>("Ambulance"));
      sub_AFC4B0(v1261, const_cast<char *>("MuscleRio"));
      sub_AFC4B0(v1261, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1261, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1261, const_cast<char *>("theBeast"));
      sub_AFC4B0(v1261, const_cast<char *>("bikeScooter"));
      sub_AFC4B0(v1261, const_cast<char *>("bikeCustom"));
      sub_AFC4B0(v1261, const_cast<char *>("bikeCustom_bikers"));
      sub_A61C40(v300, 0, 0, 0);
      v1262 = reinterpret_cast<uint32_t *>(sub_B110B0(0x64C78FADu));
      sub_AFC4B0(v1262, const_cast<char *>("GermanSuper"));
      sub_AFC4B0(v1262, const_cast<char *>("GermanSuper_tiers2"));
      sub_AFC4B0(v1262, const_cast<char *>("Italiansuper"));
      sub_AFC4B0(v1262, const_cast<char *>("Usasuper"));
      sub_AFC4B0(v1262, const_cast<char *>("suv"));
      sub_AFC4B0(v1262, const_cast<char *>("suv_goon"));
      sub_AFC4B0(v1262, const_cast<char *>("hummer"));
      sub_AFC4B0(v1262, const_cast<char *>("Taxi"));
      sub_AFC4B0(v1262, const_cast<char *>("CopCar"));
      sub_AFC4B0(v1262, const_cast<char *>("Limousine"));
      sub_AFC4B0(v1262, const_cast<char *>("Limousine_HighValue"));
      sub_AFC4B0(v1262, const_cast<char *>("Ambulance"));
      sub_AFC4B0(v1262, const_cast<char *>("bikeScooter"));
      sub_A61DF0(v300, 0, 0, 0);
      v1263 = reinterpret_cast<uint32_t *>(sub_B110B0(0xCB7A1C04));
      sub_AFC4B0(v1263, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1263, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1263, const_cast<char *>("GermanSuper"));
      sub_AFC4B0(v1263, const_cast<char *>("Italiansuper"));
      sub_AFC4B0(v1263, const_cast<char *>("Usasuper"));
      sub_AFC4B0(v1263, const_cast<char *>("Usasuper_tiers2"));
      sub_AFC4B0(v1263, const_cast<char *>("suv"));
      sub_AFC4B0(v1263, const_cast<char *>("suv_goon"));
      sub_AFC4B0(v1263, const_cast<char *>("hummer"));
      sub_AFC4B0(v1263, const_cast<char *>("Taxi"));
      sub_AFC4B0(v1263, const_cast<char *>("CopCar"));
      sub_AFC4B0(v1263, const_cast<char *>("Van"));
      sub_AFC4B0(v1263, const_cast<char *>("Ambulance"));
      sub_AFC4B0(v1263, const_cast<char *>("Delivery"));
      sub_AFC4B0(v1263, const_cast<char *>("Advertising"));
      sub_AFC4B0(v1263, const_cast<char *>("bikeSport"));
      sub_AFC4B0(v1263, const_cast<char *>("Limousine"));
      sub_AFC4B0(v1263, const_cast<char *>("Limousine_HighValue"));
      sub_A61FA0(v300, 0, 0, 0);
      v1264 = reinterpret_cast<uint32_t *>(sub_B110B0(0xBB83FEED));
      sub_AFC4B0(v1264, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1264, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1264, const_cast<char *>("suv"));
      sub_AFC4B0(v1264, const_cast<char *>("suv_goon"));
      sub_AFC4B0(v1264, const_cast<char *>("hummer"));
      sub_AFC4B0(v1264, const_cast<char *>("Taxi"));
      sub_AFC4B0(v1264, const_cast<char *>("CopCar"));
      sub_AFC4B0(v1264, const_cast<char *>("Van"));
      sub_AFC4B0(v1264, const_cast<char *>("Ambulance"));
      sub_AFC4B0(v1264, const_cast<char *>("Delivery"));
      sub_AFC4B0(v1264, const_cast<char *>("Advertising"));
      sub_AFC4B0(v1264, const_cast<char *>("bikeSport"));
      sub_AFC4B0(v1264, const_cast<char *>("Limousine"));
      sub_AFC4B0(v1264, const_cast<char *>("Limousine_HighValue"));
      sub_A62150(v300, 0, 0, 0);
      v1265 = reinterpret_cast<uint32_t *>(sub_B110B0(0x4538A135u));
      sub_AFC4B0(v1265, const_cast<char *>("CopPoor"));
      sub_AFC4B0(v1265, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1265, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1265, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1265, const_cast<char *>("Van"));
      sub_AFC4B0(v1265, const_cast<char *>("Ambulance"));
      sub_AFC4B0(v1265, const_cast<char *>("MuscleRio"));
      sub_AFC4B0(v1265, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1265, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1265, const_cast<char *>("theBeast"));
      sub_AFC4B0(v1265, const_cast<char *>("theBeast_tiers2"));
      sub_AFC4B0(v1265, const_cast<char *>("bikeCustom"));
      sub_AFC4B0(v1265, const_cast<char *>("bikeCustom_bikers"));
      sub_AFC4B0(v1265, const_cast<char *>("PickupTruck"));
      sub_AFC4B0(v1265, const_cast<char *>("UsaPoor_latinos"));
      sub_A62300(v300, 0, 0, 0);
      v1266 = reinterpret_cast<uint32_t *>(sub_B110B0(0x1978A29Du));
      sub_AFC4B0(v1266, const_cast<char *>("CopPoor"));
      sub_AFC4B0(v1266, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1266, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1266, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1266, const_cast<char *>("Van"));
      sub_AFC4B0(v1266, const_cast<char *>("Ambulance"));
      sub_AFC4B0(v1266, const_cast<char *>("MuscleRio"));
      sub_AFC4B0(v1266, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1266, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1266, const_cast<char *>("theBeast"));
      sub_AFC4B0(v1266, const_cast<char *>("bikeCustom"));
      sub_AFC4B0(v1266, const_cast<char *>("bikeCustom_bikers"));
      sub_AFC4B0(v1266, const_cast<char *>("PickupTruck"));
      sub_AFC4B0(v1266, const_cast<char *>("UsaPoor_latinos"));
      sub_AFC4B0(v1266, const_cast<char *>("Taxi"));
      sub_A624B0(v300, 0, 0, 0);
      v1267 = reinterpret_cast<uint32_t *>(sub_B110B0(0xCCC44DB8));
      sub_AFC4B0(v1267, const_cast<char *>("Seadoo"));
      sub_AFC4B0(v1267, const_cast<char *>("Speedboat_mini"));
      sub_AFC4B0(v1267, const_cast<char *>("Speedboat_yacht"));
      sub_AFC4B0(v1267, const_cast<char *>("Speedboat_police"));
      sub_A62660(v300, 0, 0, 0);
      v369 = reinterpret_cast<uint32_t *>(sub_B110B0(0xF02399E6));
      sub_AFC4B0(v369, const_cast<char *>("Speedboat_police"));
      sub_A62810(v300, 0, 0, 0);
      v1268 = reinterpret_cast<uint32_t *>(sub_B110B0(0xCB625B01));
      sub_AFC4B0(v1268, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1268, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1268, const_cast<char *>("suv"));
      sub_AFC4B0(v1268, const_cast<char *>("bikeSport"));
      sub_A629C0(v300, 0, 0, 0);
      v370 = reinterpret_cast<uint32_t *>(sub_B110B0(0x212C6B9u));
      sub_AFC4B0(v370, const_cast<char *>("Tank"));
      sub_A62B70(v300, 0, 0, 0);
      v1269 = reinterpret_cast<uint32_t *>(sub_B110B0(0x8B35352B));
      sub_AFC4B0(v1269, const_cast<char *>("UsaPoor"));
      sub_AFC4B0(v1269, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1269, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1269, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1269, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1269, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1269, const_cast<char *>("bikeScooter"));
      sub_AFC4B0(v1269, const_cast<char *>("bikeCustom"));
      sub_A62D20(v300, 0, 0, 0);
      v1186 = reinterpret_cast<uint32_t *>(sub_B110B0(0x65DBFD51u));
      sub_AFC4B0(v1186, const_cast<char *>("bikeDirt"));
      sub_AFC4B0(v1186, const_cast<char *>("PickupTruck"));
      sub_AFC4B0(v1186, const_cast<char *>("MuscleRio"));
      sub_A62ED0(v300, 0, 0, 0);
      v1270 = reinterpret_cast<uint32_t *>(sub_B110B0(0xD5EFB846));
      sub_AFC4B0(v1270, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1270, const_cast<char *>("UsaPoor"));
      sub_AFC4B0(v1270, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1270, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1270, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1270, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1270, const_cast<char *>("bikeScooter"));
      sub_AFC4B0(v1270, const_cast<char *>("bikeCustom"));
      sub_A63080(v300, 0, 0, 0);
      v1271 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA0DF0330));
      sub_AFC4B0(v1271, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1271, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1271, const_cast<char *>("suv"));
      sub_AFC4B0(v1271, const_cast<char *>("hummer"));
      sub_A63230(v300, 0, 0, 0);
      v1272 = reinterpret_cast<uint32_t *>(sub_B110B0(0xE21491DB));
      sub_AFC4B0(v1272, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1272, const_cast<char *>("UsaPoor"));
      sub_AFC4B0(v1272, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1272, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1272, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1272, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1272, const_cast<char *>("bikeScooter"));
      sub_AFC4B0(v1272, const_cast<char *>("bikeCustom"));
      sub_AFC4B0(v1272, const_cast<char *>("suv_goon"));
      sub_A633E0(v300, 0, 0, 0);
      v1187 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA70D79C6));
      sub_AFC4B0(v1187, const_cast<char *>("Van"));
      sub_AFC4B0(v1187, const_cast<char *>("Delivery"));
      sub_A63590(v300, 0, 0, 0);
      v1273 = reinterpret_cast<uint32_t *>(sub_B110B0(0x8ECDC2BB));
      sub_AFC4B0(v1273, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1273, const_cast<char *>("UsaPoor"));
      sub_AFC4B0(v1273, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1273, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1273, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1273, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1273, const_cast<char *>("bikeScooter"));
      sub_AFC4B0(v1273, const_cast<char *>("bikeCustom"));
      sub_A63740(v300, 0, 0, 0);
      v371 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA2257F42));
      sub_AFC4B0(v371, const_cast<char *>("GermanSuper"));
      sub_AFC4B0(v371, const_cast<char *>("Italiansuper"));
      sub_AFC4B0(v371, const_cast<char *>("Usasuper"));
      sub_AFC4B0(v371, const_cast<char *>("suv"));
      sub_AFC4B0(v371, const_cast<char *>("suv_goon"));
      sub_AFC4B0(v371, const_cast<char *>("hummer"));
      sub_AFC4B0(v371, const_cast<char *>("bikeScooter"));
      sub_A638F0(v300, 0, 0, 0);
      v1274 = reinterpret_cast<uint32_t *>(sub_B110B0(0x2E25270Cu));
      sub_AFC4B0(v1274, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1274, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1274, const_cast<char *>("GermanSuper"));
      sub_AFC4B0(v1274, const_cast<char *>("Italiansuper"));
      sub_AFC4B0(v1274, const_cast<char *>("Usasuper"));
      sub_AFC4B0(v1274, const_cast<char *>("suv"));
      sub_AFC4B0(v1274, const_cast<char *>("hummer"));
      sub_AFC4B0(v1274, const_cast<char *>("bikeSport"));
      sub_A63AA0(v300, 0, 0, 0);
      v1275 = reinterpret_cast<uint32_t *>(sub_B110B0(0x32B14B5Eu));
      sub_AFC4B0(v1275, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1275, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1275, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1275, const_cast<char *>("MuscleRio"));
      sub_AFC4B0(v1275, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1275, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1275, const_cast<char *>("bikeCustom"));
      sub_AFC4B0(v1275, const_cast<char *>("PickupTruck"));
      sub_AFC4B0(v1275, const_cast<char *>("UsaPoor_latinos"));
      sub_A63C50(v300, 0, 0, 0);
      v1276 = reinterpret_cast<uint32_t *>(sub_B110B0(0x1BD0D1EAu));
      sub_AFC4B0(v1276, const_cast<char *>("JapanCompact"));
      sub_AFC4B0(v1276, const_cast<char *>("JapanPoor"));
      sub_AFC4B0(v1276, const_cast<char *>("JapanModern"));
      sub_AFC4B0(v1276, const_cast<char *>("UsaSedan"));
      sub_AFC4B0(v1276, const_cast<char *>("GermanSedan"));
      sub_AFC4B0(v1276, const_cast<char *>("bikeCustom"));
      sub_AFC4B0(v1276, const_cast<char *>("PickupTruck"));
      sub_AFC4B0(v1276, const_cast<char *>("UsaPoor_latinos"));
      sub_A63E00(v300, 0, 0, 0);
      v1188 = reinterpret_cast<uint32_t *>(sub_B110B0(0x652FE734u));
      sub_AFC4B0(v1188, const_cast<char *>("Seadoo"));
      sub_AFC4B0(v1188, const_cast<char *>("Speedboat_mini"));
      sub_AFC4B0(v1188, const_cast<char *>("Speedboat_yacht"));
      sub_A63FB0(v300, 0, 0, 0);
      v1189 = reinterpret_cast<uint32_t *>(sub_B110B0(0xFF975025));
      sub_AFC4B0(v1189, const_cast<char *>("HelicopterNews"));
      sub_AFC4B0(v1189, const_cast<char *>("Seaplane"));
      sub_AFC4B0(v1189, const_cast<char *>("jetPrivate"));
      sub_A64160(v300, 0, 0, 0);
      v372 = reinterpret_cast<uint32_t *>(sub_B110B0(0xF94FBB35));
      sub_AFC4B0(v372, const_cast<char *>("HelicopterApache"));
      sub_A64310(v300, 0, 0, 0);
      v373 = reinterpret_cast<uint32_t *>(sub_B110B0(0xEA04113A));
      sub_AFC4B0(v373, const_cast<char *>("UsaSedan"));
      sub_A644C0(v300, 0, 0, 0);
      v374 = reinterpret_cast<uint32_t *>(sub_B110B0(0xEA04113B));
      sub_AFC4B0(v374, const_cast<char *>("Italiansuper"));
      sub_A64670(v300, 0, 0, 0);
      v375 = reinterpret_cast<uint32_t *>(sub_B110B0(0xEA04113C));
      sub_AFC4B0(v375, const_cast<char *>("theBeast"));
      sub_A64820(v300, 0, 0, 0);
      v376 = reinterpret_cast<uint32_t *>(sub_B110B0(0x84087C58));
      sub_AFC4B0(v376, const_cast<char *>("CopBeige1"));
      sub_AFC4B0(v376, const_cast<char *>("CopBeige2"));
      sub_A649D0(v300, 0, 0, 0);
      v377 = reinterpret_cast<uint32_t *>(sub_B110B0(0x84087C59));
      sub_AFC4B0(v377, const_cast<char *>("CopBeige1"));
      sub_AFC4B0(v377, const_cast<char *>("CopBeige2"));
      sub_A64B80(v300, 0, 0, 0);
      v1190 = reinterpret_cast<uint32_t *>(sub_B110B0(0x84087C5E));
      sub_AFC4B0(v1190, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1190, const_cast<char *>("CopBlue2"));
      sub_A64D30(v300, 0, 0, 0);
      v1191 = reinterpret_cast<uint32_t *>(sub_B110B0(0x84087C5F));
      sub_AFC4B0(v1191, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1191, const_cast<char *>("CopBlue2"));
      sub_A64EE0(v300, 0, 0, 0);
      v378 = reinterpret_cast<uint32_t *>(sub_B110B0(0x84087C5C));
      sub_AFC4B0(v378, const_cast<char *>("Military"));
      sub_A65090(v300, 0, 0, 0);
      v1192 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA3B7C6F2));
      sub_AFC4B0(v1192, const_cast<char *>("CopPoor_aggro"));
      sub_AFC4B0(v1192, const_cast<char *>("CopCar_aggro"));
      sub_A65240(v300, 0, 0, 0);
      v1193 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA3B7C6F1));
      sub_AFC4B0(v1193, const_cast<char *>("CopCar_aggro"));
      sub_AFC4B0(v1193, const_cast<char *>("copSuv_aggro"));
      sub_A653F0(v300, 0, 0, 0);
      v1277 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA3B7C6F0));
      sub_AFC4B0(v1277, const_cast<char *>("CopCar_aggro"));
      sub_AFC4B0(v1277, const_cast<char *>("copSuv_aggro"));
      sub_AFC4B0(v1277, const_cast<char *>("bearcat"));
      sub_AFC4B0(v1277, const_cast<char *>("HelicopterPolice"));
      sub_A655A0(v300, 0, 0, 0);
      v1194 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA3B7C68F));
      sub_AFC4B0(v1194, const_cast<char *>("militarySuv"));
      sub_AFC4B0(v1194, const_cast<char *>("bearcat"));
      sub_AFC4B0(v1194, const_cast<char *>("HelicopterPolice"));
      sub_A65750(v300, 0, 0, 0);
      v1195 = reinterpret_cast<uint32_t *>(sub_B110B0(0xA3B7C68E));
      sub_AFC4B0(v1195, const_cast<char *>("HelicopterApache"));
      sub_AFC4B0(v1195, const_cast<char *>("militarySuv"));
      sub_AFC4B0(v1195, const_cast<char *>("tank"));
      sub_A65900(v300, 0, 0, 0);
      v1196 = reinterpret_cast<uint32_t *>(sub_B110B0(0x245CE27Au));
      sub_AFC4B0(v1196, const_cast<char *>("BikerLow"));
      sub_AFC4B0(v1196, const_cast<char *>("BikerMid"));
      sub_AFC4B0(v1196, const_cast<char *>("BikerHeavy"));
      sub_A65AB0(v300, 0, 0, 0);
      v1197 = reinterpret_cast<uint32_t *>(sub_B110B0(0x27DFBEB8u));
      sub_AFC4B0(v1197, const_cast<char *>("MafiaLow_Spawngroup"));
      sub_AFC4B0(v1197, const_cast<char *>("MafiaMid_Spawngroup"));
      sub_AFC4B0(v1197, const_cast<char *>("MafiaHeavy_Spawngroup"));
      sub_A65C60(v300, 0, 0, 0);
      v1198 = reinterpret_cast<uint32_t *>(sub_B110B0(0xDE2657C0));
      sub_AFC4B0(v1198, const_cast<char *>("C3M05_MafiaLow_Spawngroup"));
      sub_AFC4B0(v1198, const_cast<char *>("C3M05_MafiaMid_Spawngroup"));
      sub_AFC4B0(v1198, const_cast<char *>("C3M05_MafiaHeavy_Spawngroup"));
      sub_A65E10(v300, 0, 0, 0);
      v1199 = reinterpret_cast<uint32_t *>(sub_B110B0(0x408DAD4Au));
      sub_AFC4B0(v1199, const_cast<char *>("MafiaMid_Spawngroup"));
      sub_AFC4B0(v1199, const_cast<char *>("MafiaHeavy_Spawngroup"));
      sub_A65FC0(v300, 0, 0, 0);
      v379 = reinterpret_cast<uint32_t *>(sub_B110B0(0xBA5BE28E));
      sub_AFC4B0(v379, const_cast<char *>("c3m05_Cop"));
      sub_A66170(v300, 0, 0, 0);
      v380 = reinterpret_cast<uint32_t *>(sub_B110B0(0xB95AF5A6));
      sub_AFC4B0(v380, const_cast<char *>("U3M07_Alien_Spawngroup"));
      sub_A66320(v300, 0, 0, 0);
      v1278 = reinterpret_cast<uint32_t *>(sub_B110B0(0x869902D7));
      sub_AFC4B0(v1278, const_cast<char *>("World_Alien_Spawngroup"));
      sub_AFC4B0(v1278, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1278, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1278, const_cast<char *>("MafiaLow_Spawngroup"));
      sub_AFC4B0(v1278, const_cast<char *>("MafiaMid_Spawngroup"));
      sub_AFC4B0(v1278, const_cast<char *>("MafiaHeavy_Spawngroup"));
      sub_AFC4B0(v1278, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1278, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v1278, const_cast<char *>("HighClass_Man1"));
      sub_AFC4B0(v1278, const_cast<char *>("HighClass_Man2"));
      sub_AFC4B0(v1278, const_cast<char *>("HighClass_Pedestrian1"));
      sub_AFC4B0(v1278, const_cast<char *>("HighClass_Pedestrian2"));
      sub_AFC4B0(v1278, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1278, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1278, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1278, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1278, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1278, const_cast<char *>("Generic_Man2"));
      sub_AFC4B0(v1278, const_cast<char *>("HighValuableTarget_Suitcase"));
      sub_AFC4B0(v1278, const_cast<char *>("HighValuableTarget_Clothing"));
      sub_AFC4B0(v1278, const_cast<char *>("HighValuableTarget_Weapon"));
      sub_AFC4B0(v1278, const_cast<char *>("HighValuableTarget_Vehicle"));
      sub_A664D0(v300, 0, 0, 0);
      v1279 = reinterpret_cast<uint32_t *>(sub_B110B0(0xC7A35370));
      sub_AFC4B0(v1279, const_cast<char *>("World_Alien_Spawngroup"));
      sub_AFC4B0(v1279, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1279, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1279, const_cast<char *>("Hooker"));
      sub_AFC4B0(v1279, const_cast<char *>("ThugLow_Spawngroup"));
      sub_AFC4B0(v1279, const_cast<char *>("ThugHeavy_Spawngroup"));
      sub_AFC4B0(v1279, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1279, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1279, const_cast<char *>("Generic_Man2"));
      sub_A66680(v300, 0, 0, 0);
      v1280 = reinterpret_cast<uint32_t *>(sub_B110B0(0x64AA4BB3u));
      sub_AFC4B0(v1280, const_cast<char *>("World_Alien_Spawngroup"));
      sub_AFC4B0(v1280, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1280, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1280, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1280, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v1280, const_cast<char *>("HighClass_Man1"));
      sub_AFC4B0(v1280, const_cast<char *>("HighClass_Man2"));
      sub_AFC4B0(v1280, const_cast<char *>("HighClass_Pedestrian1"));
      sub_AFC4B0(v1280, const_cast<char *>("HighClass_Pedestrian2"));
      sub_AFC4B0(v1280, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1280, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1280, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1280, const_cast<char *>("BusinessWoman2"));
      sub_AFC4B0(v1280, const_cast<char *>("ConstructionWorker"));
      sub_AFC4B0(v1280, const_cast<char *>("Biker"));
      sub_AFC4B0(v1280, const_cast<char *>("Biker_Female"));
      sub_AFC4B0(v1280, const_cast<char *>("Biker_Fat"));
      sub_AFC4B0(v1280, const_cast<char *>("MafiaLow_Spawngroup"));
      sub_AFC4B0(v1280, const_cast<char *>("MafiaMid_Spawngroup"));
      sub_AFC4B0(v1280, const_cast<char *>("MafiaHeavy_Spawngroup"));
      sub_AFC4B0(v1280, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1280, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1280, const_cast<char *>("Generic_Man2"));
      sub_A66830(v300, 0, 0, 0);
      v1281 = reinterpret_cast<uint32_t *>(sub_B110B0(0x729503C7u));
      sub_AFC4B0(v1281, const_cast<char *>("World_Alien_Spawngroup"));
      sub_AFC4B0(v1281, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1281, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1281, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1281, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v1281, const_cast<char *>("HighClass_Man1"));
      sub_AFC4B0(v1281, const_cast<char *>("HighClass_Man2"));
      sub_AFC4B0(v1281, const_cast<char *>("HighClass_Pedestrian1"));
      sub_AFC4B0(v1281, const_cast<char *>("HighClass_Pedestrian2"));
      sub_AFC4B0(v1281, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1281, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1281, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1281, const_cast<char *>("BusinessWoman2"));
      sub_AFC4B0(v1281, const_cast<char *>("ConstructionWorker"));
      sub_AFC4B0(v1281, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1281, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1281, const_cast<char *>("Generic_Man2"));
      sub_A669E0(v300, 0, 0, 0);
      v1282 = reinterpret_cast<uint32_t *>(sub_B110B0(0xF4F10E63));
      sub_AFC4B0(v1282, const_cast<char *>("World_Alien_Spawngroup"));
      sub_AFC4B0(v1282, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1282, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1282, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1282, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1282, const_cast<char *>("Generic_Man2"));
      sub_AFC4B0(v1282, const_cast<char *>("ConstructionWorker"));
      sub_AFC4B0(v1282, const_cast<char *>("Hooker"));
      sub_AFC4B0(v1282, const_cast<char *>("ThugLow_Spawngroup"));
      sub_AFC4B0(v1282, const_cast<char *>("ThugHeavy_Spawngroup"));
      sub_AFC4B0(v1282, const_cast<char *>("MafiaLow_Spawngroup"));
      sub_AFC4B0(v1282, const_cast<char *>("MafiaMid_Spawngroup"));
      sub_AFC4B0(v1282, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1282, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1282, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1282, const_cast<char *>("BusinessWoman2"));
      sub_A66B90(v300, 0, 0, 0);
      v1283 = reinterpret_cast<uint32_t *>(sub_B110B0(0x7DD79847u));
      sub_AFC4B0(v1283, const_cast<char *>("World_Alien_Spawngroup"));
      sub_AFC4B0(v1283, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1283, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1283, const_cast<char *>("MafiaLow_Spawngroup"));
      sub_AFC4B0(v1283, const_cast<char *>("MafiaMid_Spawngroup"));
      sub_AFC4B0(v1283, const_cast<char *>("MafiaHeavy_Spawngroup"));
      sub_AFC4B0(v1283, const_cast<char *>("Tourist"));
      sub_AFC4B0(v1283, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v1283, const_cast<char *>("HighClass_Man1"));
      sub_AFC4B0(v1283, const_cast<char *>("HighClass_Man2"));
      sub_AFC4B0(v1283, const_cast<char *>("HighClass_Pedestrian1"));
      sub_AFC4B0(v1283, const_cast<char *>("HighClass_Pedestrian2"));
      sub_AFC4B0(v1283, const_cast<char *>("BusinessMan1"));
      sub_AFC4B0(v1283, const_cast<char *>("BusinessMan2"));
      sub_AFC4B0(v1283, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1283, const_cast<char *>("BusinessWoman2"));
      sub_A66D40(v300, 0, 0, 0);
      v1284 = reinterpret_cast<uint32_t *>(sub_B110B0(0x604A72BBu));
      sub_AFC4B0(v1284, const_cast<char *>("World_Alien_Spawngroup"));
      sub_AFC4B0(v1284, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v1284, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v1284, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v1284, const_cast<char *>("BusinessWoman2"));
      sub_AFC4B0(v1284, const_cast<char *>("Hooker"));
      sub_AFC4B0(v1284, const_cast<char *>("ThugLow_Spawngroup"));
      sub_AFC4B0(v1284, const_cast<char *>("ThugHeavy_Spawngroup"));
      sub_AFC4B0(v1284, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v1284, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v1284, const_cast<char *>("Generic_Man2"));
      sub_A66EF0(v300, 0, 0, 0);
      v381 = reinterpret_cast<uint32_t *>(sub_B110B0(0xCEDAE9C3));
      sub_AFC4B0(v381, const_cast<char *>("World_Alien_Spawngroup_Carnage"));
      sub_AFC4B0(v381, const_cast<char *>("CopBlue1_Aggressive"));
      sub_AFC4B0(v381, const_cast<char *>("CopBlue2_Aggressive"));
      sub_AFC4B0(v381, const_cast<char *>("Tourist_Fleeing"));
      sub_AFC4B0(v381, const_cast<char *>("TouristWoman_Fleeing"));
      sub_AFC4B0(v381, const_cast<char *>("BusinessWoman1_Fleeing"));
      sub_AFC4B0(v381, const_cast<char *>("BusinessWoman2_Fleeing"));
      sub_AFC4B0(v381, const_cast<char *>("Hooker_Fleeing"));
      sub_AFC4B0(v381, const_cast<char *>("ThugLow_Spawngroup"));
      sub_AFC4B0(v381, const_cast<char *>("ThugHeavy_Spawngroup"));
      sub_AFC4B0(v381, const_cast<char *>("GenericFemale_Fleeing"));
      sub_AFC4B0(v381, const_cast<char *>("Generic_Man1_Fleeing"));
      sub_AFC4B0(v381, const_cast<char *>("Generic_Man2_Fleeing"));
      sub_A670A0(v300, 0, 0, 0);
      v382 = reinterpret_cast<uint32_t *>(sub_B110B0(0xBC7517E9));
      sub_AFC4B0(v382, const_cast<char *>("World_Alien_Spawngroup"));
      sub_AFC4B0(v382, const_cast<char *>("CopBeige1"));
      sub_AFC4B0(v382, const_cast<char *>("CopBeige2"));
      sub_AFC4B0(v382, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v382, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v382, const_cast<char *>("Generic_Man2"));
      sub_AFC4B0(v382, const_cast<char *>("LatinoLow_Spawngroup"));
      sub_AFC4B0(v382, const_cast<char *>("LatinoMid_Spawngroup"));
      sub_AFC4B0(v382, const_cast<char *>("LatinoHeavy_Spawngroup"));
      sub_AFC4B0(v382, const_cast<char *>("Biker_Female"));
      sub_AFC4B0(v382, const_cast<char *>("Biker_Fat"));
      sub_AFC4B0(v382, const_cast<char *>("Biker"));
      sub_AFC4B0(v382, const_cast<char *>("ConstructionWorker"));
      sub_AFC4B0(v382, const_cast<char *>("Hooker"));
      sub_A67250(v300, 0, 0, 0);
      v383 = reinterpret_cast<uint32_t *>(sub_B110B0(0x91113CEB));
      sub_AFC4B0(v383, const_cast<char *>("World_Alien_Spawngroup"));
      sub_AFC4B0(v383, const_cast<char *>("CopBlue1"));
      sub_AFC4B0(v383, const_cast<char *>("CopBlue2"));
      sub_AFC4B0(v383, const_cast<char *>("Tourist"));
      sub_AFC4B0(v383, const_cast<char *>("TouristWoman"));
      sub_AFC4B0(v383, const_cast<char *>("BusinessWoman1"));
      sub_AFC4B0(v383, const_cast<char *>("BusinessWoman2"));
      sub_AFC4B0(v383, const_cast<char *>("Hooker"));
      sub_AFC4B0(v383, const_cast<char *>("GenericFemale"));
      sub_AFC4B0(v383, const_cast<char *>("Generic_Man1"));
      sub_AFC4B0(v383, const_cast<char *>("Generic_Man2"));
      sub_A67400(v300, 0, 0, 0);
      v384 = reinterpret_cast<uint32_t *>(sub_B110B0(0x13D401AFu));
      sub_AFC4B0(v384, const_cast<char *>("HighClass_Man1"));
      sub_A675B0(v300, 0, 0, 0);
      v385 = reinterpret_cast<uint32_t *>(sub_B110B0(0xE566E7Eu));
      sub_AFC4B0(v385, const_cast<char *>("Devil_Henchman"));
      sub_A67760(v300, 0, 0, 0);
      v386 = reinterpret_cast<uint32_t *>(sub_B110B0(0xF6D2C478));
      sub_AFC4B0(v386, const_cast<char *>("GangWarPlayer"));
      G4_VCALL<void>(v300, 4);
    }
    v301 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("stock_items.xml.bin"));
    v302 = v301;
    if ( v301 != 0 && G4_VCALL<int>(v301, 20) != 0 )
    {
      sub_A67910(v302, 0, 0, 0);
      v336 = reinterpret_cast<uint32_t *>(sub_B110B0(0x89093F0B));
      sub_AFC4B0(v336, const_cast<char *>("Bonus_01"));
      sub_A67AE0(v302, 0, 0, 0);
      sub_B5BAC0(0x45909814u);
      sub_A67CB0(v302, 0, 0, 0);
      v337 = reinterpret_cast<uint32_t *>(sub_B110B0(0x7BF408B9u));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_Starter"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_Apocalypse"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_VipBronze"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_VipSilver"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_VipGold"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_Sniper"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_StuntMuffin"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_TightCuffed"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_SecretIdentity"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_FireBreather"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_Commando"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_FutureWar"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_SummerTime"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_KarateKiddo"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_Tennis"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_Football"));
      sub_AFC4B0(v337, const_cast<char *>("BundleItem_Hockey"));
      G4_VCALL<void>(v302, 4);
    }
    v303 = reinterpret_cast<uint32_t *>(sub_B0E610(0xAEB3C935));
    sub_AFC3F0(v303, const_cast<char *>("Ammo"));
    sub_AFC3F0(v303, const_cast<char *>("AmmoDescription"));
    sub_AFC3F0(v303, const_cast<char *>("Armor"));
    sub_AFC3F0(v303, const_cast<char *>("ArmorDescription"));
    sub_AFC3F0(v303, const_cast<char *>("Look"));
    sub_AFC3F0(v303, const_cast<char *>("LookDescription"));
    sub_AFC3F0(v303, const_cast<char *>("Luck"));
    sub_AFC3F0(v303, const_cast<char *>("LuckDescription"));
    v1221 = reinterpret_cast<uint32_t *>(sub_B0E610(0xEE11C753));
    sub_AFC3F0(v1221, const_cast<char *>("StockSectionID"));
    sub_AFC3F0(v1221, const_cast<char *>("Name"));
    sub_AFC3F0(v1221, const_cast<char *>("Description"));
    sub_AFC3F0(v1221, const_cast<char *>("IconName"));
    sub_AFC3F0(v1221, const_cast<char *>("Price"));
    sub_AFC3F0(v1221, const_cast<char *>("isForDiamonds"));
    sub_AFC3F0(v1221, const_cast<char *>("State"));
    sub_AFC3F0(v1221, const_cast<char *>("AmmoPrice"));
    sub_AFC3F0(v1221, const_cast<char *>("ClipNum"));
    sub_AFC3F0(v1221, const_cast<char *>("ClipNumOnPurchase"));
    sub_AFC3F0(v1221, const_cast<char *>("ProjectileType"));
    sub_AFC3F0(v1221, const_cast<char *>("AmmoName"));
    sub_AFC3F0(v1221, const_cast<char *>("TrackingAmmoEventId"));
    sub_AFC3F0(v1221, const_cast<char *>("TrackingEventId"));
    sub_AFC3F0(v1221, const_cast<char *>("TrackingEventCategoryId"));
    sub_AFC3F0(v1221, const_cast<char *>("OrderPrice"));
    sub_AFC3F0(v1221, const_cast<char *>("GearSet"));
    sub_AFC3F0(v1221, const_cast<char *>("Module"));
    sub_AFC3F0(v1221, const_cast<char *>("CameraDistanceTweaker"));
    sub_AFC3F0(v1221, const_cast<char *>("CameraDistanceTweakerPawnShop"));
    sub_AFC3F0(v1221, const_cast<char *>("ModelRotationAngle"));
    sub_AFC3F0(v1221, const_cast<char *>("ModelVerticalOffset"));
    sub_AFC3F0(v1221, const_cast<char *>("AnimationNames"));
    sub_AFC3F0(v1221, const_cast<char *>("SpawnPrimitive"));
    sub_AFC3F0(v1221, const_cast<char *>("Primitive"));
    sub_AFC3F0(v1221, const_cast<char *>("ShopSpawnPointType"));
    sub_AFC3F0(v1221, const_cast<char *>("Type"));
    sub_AFC3F0(v1221, const_cast<char *>("Subtype"));
    sub_AFC3F0(v1221, const_cast<char *>("Rarity"));
    sub_AFC3F0(v1221, const_cast<char *>("Level"));
    sub_AFC3F0(v1221, const_cast<char *>("LootPrimitive"));
    sub_AFC3F0(v1221, const_cast<char *>("CraftQuantity"));
    sub_AFC3F0(v1221, const_cast<char *>("CraftItem"));
    sub_AFC3F0(v1221, const_cast<char *>("CraftFine"));
    sub_AFC3F0(v1221, const_cast<char *>("CrateLoot"));
    sub_AFC3F0(v1221, const_cast<char *>("PaletteLoot"));
    sub_AFC3F0(v1221, const_cast<char *>("TextColorLoot"));
    sub_AFC3F0(v1221, const_cast<char *>("IsInTutorial"));
    sub_AFC3F0(v1221, const_cast<char *>("IsEquippable"));
    sub_AFC3F0(v1221, const_cast<char *>("NumOwnedOnNewGame"));
    sub_AFC3F0(v1221, const_cast<char *>("MinVipValue"));
    sub_AFC3F0(v1221, const_cast<char *>("IsFromBundleOnly"));
    sub_AFC3F0(v1221, const_cast<char *>("IsAlwaysAvailable"));
    sub_AFC3F0(v1221, const_cast<char *>("HasMultipleLevel"));
    sub_AFC3F0(v1221, const_cast<char *>("TheftValue"));
    sub_AFC3F0(v1221, const_cast<char *>("MaxQuantity"));
    sub_AFC3F0(v1221, const_cast<char *>("RA_Purchase"));
    sub_AFC3F0(v1221, const_cast<char *>("RA_Order"));
    sub_AFC3F0(v1221, const_cast<char *>("StatCounter_OwnNew"));
    sub_AFC3F0(v1221, const_cast<char *>("StatCounter_OwnAll"));
    sub_AFC3F0(v1221, const_cast<char *>("WeaponOption"));
    sub_AFC3F0(v1221, const_cast<char *>("IsLoot"));
    sub_AFC3F0(v1221, const_cast<char *>("IsAvailableOffline"));
    sub_AFC3F0(v1221, const_cast<char *>("OnlyAvailableOnPromo"));
    sub_AFC3F0(v1221, const_cast<char *>("BundleId"));
    sub_AFC3F0(v1221, const_cast<char *>("HealthLeavePercentage"));
    sub_AFC3F0(v1221, const_cast<char *>("OutsideVehicleZOffsetEnabled"));
    sub_AFC3F0(v1221, const_cast<char *>("InsideVehicleZOffsetEnabled"));
    sub_AFC3F0(v1221, const_cast<char *>("VehicleEnableRoofCulling"));
    sub_AFC3F0(v1221, const_cast<char *>("OutsideVehicleZOffset"));
    sub_AFC3F0(v1221, const_cast<char *>("InsideVehicleZOffset"));
    sub_AFC3F0(v1221, const_cast<char *>("IsInStartOfSection"));
    sub_AFC3F0(v1221, const_cast<char *>("MinRequiredClanLevel"));
    sub_AFC3F0(v1221, const_cast<char *>("MinRequiredPlayerClanScore"));
    sub_AFC3F0(v1221, const_cast<char *>("CertificateType"));
    sub_AFC3F0(v1221, const_cast<char *>("SoftCurrencyAmount"));
    sub_AFC3F0(v1221, const_cast<char *>("IsDeluxeItem"));
    sub_AFC3F0(v1221, const_cast<char *>("OrderInSection"));
    sub_AFC3F0(v1221, const_cast<char *>("ItemTier"));
    sub_AFC3F0(v1221, const_cast<char *>("CrateOpenCostKeys"));
    sub_AFC3F0(v1221, const_cast<char *>("ClanMemberLimitBoost"));
    v1222 = reinterpret_cast<uint32_t *>(sub_B0E610(0x94AFE1DB));
    sub_AFC3F0(v1222, const_cast<char *>("BundleId"));
    sub_AFC3F0(v1222, const_cast<char *>("Comment"));
    sub_AFC3F0(v1222, const_cast<char *>("Title"));
    sub_AFC3F0(v1222, const_cast<char *>("Description"));
    sub_AFC3F0(v1222, const_cast<char *>("Picture"));
    sub_AFC3F0(v1222, const_cast<char *>("VipType"));
    sub_AFC3F0(v1222, const_cast<char *>("OrderInSection"));
    v1223 = reinterpret_cast<uint32_t *>(sub_B0E610(0x3D9CC4B2u));
    sub_AFC3F0(v1223, const_cast<char *>("Type"));
    sub_AFC3F0(v1223, const_cast<char *>("Subtype"));
    sub_AFC3F0(v1223, const_cast<char *>("SubSectionIDs"));
    sub_AFC3F0(v1223, const_cast<char *>("IconName"));
    sub_AFC3F0(v1223, const_cast<char *>("MaxMeleeDamage"));
    sub_AFC3F0(v1223, const_cast<char *>("MaxMeleeFierceDamage"));
    sub_AFC3F0(v1223, const_cast<char *>("MaxExplosionDamage"));
    sub_AFC3F0(v1223, const_cast<char *>("MaxExplosionRadius"));
    sub_AFC3F0(v1223, const_cast<char *>("MaxDamage"));
    sub_AFC3F0(v1223, const_cast<char *>("MaxClipSize"));
    sub_AFC3F0(v1223, const_cast<char *>("MaxRateFire"));
    sub_AFC3F0(v1223, const_cast<char *>("StatCounter_KillWeapon"));
    sub_AFC3F0(v1223, const_cast<char *>("MaxTopSpeed"));
    sub_AFC3F0(v1223, const_cast<char *>("MaxAcceleration"));
    sub_AFC3F0(v1223, const_cast<char *>("MaxHealth"));
    sub_AFC3F0(v1223, const_cast<char *>("StockSettingsID"));
    sub_AFC3F0(v1223, const_cast<char *>("Hidden"));
    sub_AFC3F0(v1223, const_cast<char *>("IsInTutorial"));
    sub_AFC3F0(v1223, const_cast<char *>("TutorialStep"));
    sub_AFC3F0(v1223, const_cast<char *>("IsAlwaysAvailable"));
    sub_AFC3F0(v1223, const_cast<char *>("MoneyStats"));
    sub_AFC3F0(v1223, const_cast<char *>("TrackingEventId"));
    sub_AFC3F0(v1223, const_cast<char *>("ParrentSectionID"));
    sub_AFC3F0(v1223, const_cast<char *>("Title"));
    v304 = reinterpret_cast<uint32_t *>(sub_B0E610(0x76FA0B5u));
    sub_AFC3F0(v304, const_cast<char *>("StockSectionId"));
    v305 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("stocks.xml.bin"));
    v306 = v305;
    if ( v305 != 0 && G4_VCALL<int>(v305, 20) != 0 )
    {
      sub_A67E80(v306, 0, 0, 0);
      v1226 = reinterpret_cast<uint32_t *>(sub_B110B0(0x2953136Au));
      sub_AFC4B0(v1226, const_cast<char *>("SpecialSection"));
      sub_AFC4B0(v1226, const_cast<char *>("RecommendedSection"));
      sub_AFC4B0(v1226, const_cast<char *>("ClanLockSection"));
      sub_AFC4B0(v1226, const_cast<char *>("BundleSection"));
      sub_AFC4B0(v1226, const_cast<char *>("CrateSection"));
      sub_AFC4B0(v1226, const_cast<char *>("ConsumableSection"));
      sub_AFC4B0(v1226, const_cast<char *>("PoorCarSection"));
      sub_AFC4B0(v1226, const_cast<char *>("LuxuryCarSection"));
      sub_AFC4B0(v1226, const_cast<char *>("HeavyCarSection"));
      sub_AFC4B0(v1226, const_cast<char *>("ShootingCarSection"));
      sub_AFC4B0(v1226, const_cast<char *>("PoorMotoSection"));
      sub_AFC4B0(v1226, const_cast<char *>("BoatSection"));
      sub_AFC4B0(v1226, const_cast<char *>("AirplaneSection"));
      sub_AFC4B0(v1226, const_cast<char *>("LuxuryMotoSection"));
      sub_AFC4B0(v1226, const_cast<char *>("PoorCarOneSeatSection"));
      sub_AFC4B0(v1226, const_cast<char *>("LuxuryCarOneSeatSection"));
      sub_AFC4B0(v1226, const_cast<char *>("HeavyCarOneSeatSection"));
      sub_AFC4B0(v1226, const_cast<char *>("ShootingCarOneSeatSection"));
      sub_AFC4B0(v1226, const_cast<char *>("HelicopterSection"));
      sub_AFC4B0(v1226, const_cast<char *>("UnarmedSection"));
      sub_AFC4B0(v1226, const_cast<char *>("MeleeSection"));
      sub_AFC4B0(v1226, const_cast<char *>("PistolSection"));
      sub_AFC4B0(v1226, const_cast<char *>("SMGSection"));
      sub_AFC4B0(v1226, const_cast<char *>("ShotgunSection"));
      sub_AFC4B0(v1226, const_cast<char *>("AssaultSection"));
      sub_AFC4B0(v1226, const_cast<char *>("SniperSection"));
      sub_AFC4B0(v1226, const_cast<char *>("HeavySection"));
      sub_AFC4B0(v1226, const_cast<char *>("ThrowableSection"));
      sub_AFC4B0(v1226, const_cast<char *>("HeadSection"));
      sub_AFC4B0(v1226, const_cast<char *>("TorsoSection"));
      sub_AFC4B0(v1226, const_cast<char *>("LegsSection"));
      sub_AFC4B0(v1226, const_cast<char *>("ExoskeletonSection"));
      sub_AFC4B0(v1226, const_cast<char *>("Miscellaneous"));
      sub_AFC4B0(v1226, const_cast<char *>("CashPacksSection"));
      sub_AFC4B0(v1226, const_cast<char *>("KeyPacksSection"));
      sub_AFC4B0(v1226, const_cast<char *>("SkillPointPacksSection"));
      sub_AFC4B0(v1226, const_cast<char *>("VipSection"));
      sub_AFC4B0(v1226, const_cast<char *>("ClanLogoSection"));
      sub_AFC4B0(v1226, const_cast<char *>("CertificateSection"));
      sub_A68030(v306, 0, 0, 0);
      v1173 = reinterpret_cast<uint32_t *>(sub_B110B0(0x7C942F2Cu));
      sub_AFC4B0(v1173, const_cast<char *>("ClanLogoSection"));
      sub_AFC4B0(v1173, const_cast<char *>("CertificateSection"));
      G4_VCALL<void>(v306, 4);
    }
    v307 = reinterpret_cast<uint32_t *>(sub_B0E610(0x3D0BFF23u));
    sub_AFC3F0(v307, const_cast<char *>("AngleFactor"));
    sub_AFC3F0(v307, const_cast<char *>("RangeFactor"));
    sub_AFC3F0(v307, const_cast<char *>("ThreatFactor"));
    sub_AFC3F0(v307, const_cast<char *>("CameraFactor"));
    sub_AFC3F0(v307, const_cast<char *>("AttackedFactor"));
    v308 = reinterpret_cast<uint32_t *>(sub_B0E610(0xBD971A0B));
    sub_AFC3F0(v308, const_cast<char *>("Aggressive"));
    sub_AFC3F0(v308, const_cast<char *>("Angle"));
    sub_AFC3F0(v308, const_cast<char *>("Attacker"));
    sub_AFC3F0(v308, const_cast<char *>("Down"));
    sub_AFC3F0(v308, const_cast<char *>("Driving"));
    sub_AFC3F0(v308, const_cast<char *>("Knockout"));
    sub_AFC3F0(v308, const_cast<char *>("LowHealth"));
    sub_AFC3F0(v308, const_cast<char *>("MeleeToken"));
    sub_AFC3F0(v308, const_cast<char *>("NPCCurrentTarget"));
    sub_AFC3F0(v308, const_cast<char *>("Passive"));
    sub_AFC3F0(v308, const_cast<char *>("Player"));
    sub_AFC3F0(v308, const_cast<char *>("PlayerCurrentTarget"));
    sub_AFC3F0(v308, const_cast<char *>("Police"));
    sub_AFC3F0(v308, const_cast<char *>("MissionKillTarget"));
    sub_AFC3F0(v308, const_cast<char *>("IsVehicle"));
    v309 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("targeting_.xml.bin"));
    v310 = v309;
    if ( v309 != 0 && G4_VCALL<int>(v309, 20) != 0 )
    {
      sub_A68200(v310, 0, 0, 0);
      v1171 = reinterpret_cast<uint32_t *>(sub_B110B0(0xCD71BD97));
      sub_AFC4B0(v1171, const_cast<char *>("PlayerShooting"));
      sub_AFC4B0(v1171, const_cast<char *>("PlayerBrawling"));
      sub_AFC4B0(v1171, const_cast<char *>("NPC"));
      sub_A683D0(v310, 0, 0, 0);
      v1172 = reinterpret_cast<uint32_t *>(sub_B110B0(0x8EF4D965));
      sub_AFC4B0(v1172, const_cast<char *>("PlayerShooting"));
      sub_AFC4B0(v1172, const_cast<char *>("PlayerBrawling"));
      sub_AFC4B0(v1172, const_cast<char *>("NPC"));
      G4_VCALL<void>(v310, 4);
    }
    v311 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("texture_bias.xml.bin"));
    v312 = v311;
    if ( v311 != 0 && G4_VCALL<int>(v311, 20) != 0 )
    {
      sub_A685A0(v312, 0, 0, 0);
      v335 = reinterpret_cast<uint32_t *>(sub_B110B0(0x3F2B100Cu));
      sub_AFC4B0(v335, const_cast<char *>("Ground00"));
      sub_AFC4B0(v335, const_cast<char *>("Ground01"));
      G4_VCALL<void>(v312, 4);
    }
    v313 = reinterpret_cast<uint32_t *>(sub_B0E610(0xA91476Bu));
    sub_AFC3F0(v313, const_cast<char *>("bias"));
    sub_AFC3F0(v313, const_cast<char *>("name"));
    v314 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("types_info.xml.bin"));
    v315 = v314;
    if ( v314 != 0 && G4_VCALL<int>(v314, 20) != 0 )
    {
      sub_A68750(v315, 0, 0, 0);
      v334 = reinterpret_cast<uint32_t *>(sub_B110B0(0x9BAB2F74));
      sub_AFC4B0(v334, const_cast<char *>("Default"));
      sub_AFC4B0(v334, const_cast<char *>("LightAnim"));
      sub_AFC4B0(v334, const_cast<char *>("HeavyAnim"));
      sub_AFC4B0(v334, const_cast<char *>("ExplosiveAnim"));
      sub_AFC4B0(v334, const_cast<char *>("SniperAnim"));
      sub_AFC4B0(v334, const_cast<char *>("ShotgunAnim"));
      sub_A68920(v315, 0, 0, 0);
      sub_B61560(0x6FB55FF7u);
      G4_VCALL<void>(v315, 4);
    }
    v316 = reinterpret_cast<uint32_t *>(sub_B0E610(0xA1A191A4));
    sub_AFC3F0(v316, const_cast<char *>("Type"));
    sub_AFC3F0(v316, const_cast<char *>("Flags"));
    sub_AFC3F0(v316, const_cast<char *>("Class"));
    sub_AFC3F0(v316, const_cast<char *>("WeaponSelIcon"));
    sub_AFC3F0(v316, const_cast<char *>("ParamSet"));
    sub_AFC3F0(v316, const_cast<char *>("IsGun"));
    sub_AFC3F0(v316, const_cast<char *>("IsCannon"));
    sub_AFC3F0(v316, const_cast<char *>("DoubleBaseType"));
    sub_AFC3F0(v316, const_cast<char *>("HasProjectile"));
    sub_AFC3F0(v316, const_cast<char *>("HasAOE"));
    sub_AFC3F0(v316, const_cast<char *>("DeathAnimID"));
    sub_AFC3F0(v316, const_cast<char *>("FlinchSoundEvents"));
    sub_AFC3F0(v316, const_cast<char *>("SwingSoundEvents"));
    sub_AFC3F0(v316, const_cast<char *>("ReloadTime"));
    v317 = reinterpret_cast<uint32_t *>(sub_B0E610(0xD2B837AC));
    sub_AFC3F0(v317, const_cast<char *>("DeathAnimation"));
    sub_AFC3F0(v317, const_cast<char *>("DeathAnimationNum"));
    sub_AFC3F0(v317, const_cast<char *>("DeathBackAnimation"));
    sub_AFC3F0(v317, const_cast<char *>("DeathBackAnimationNum"));
    v318 = reinterpret_cast<uint32_t *>(sub_B0E610(0xAC15B69u));
    sub_AFC3F0(v318, const_cast<char *>("doorAnimations"));
    sub_AFC3F0(v318, const_cast<char *>("doorCloseSound"));
    sub_AFC3F0(v318, const_cast<char *>("doorDummies"));
    sub_AFC3F0(v318, const_cast<char *>("doorOpenSound"));
    sub_AFC3F0(v318, const_cast<char *>("doorSeatsAndSeatDoors"));
    sub_AFC3F0(v318, const_cast<char *>("name"));
    sub_AFC3F0(v318, const_cast<char *>("seatDummies"));
    v319 = reinterpret_cast<uint32_t *>(sub_B0E610(0x8F574EDA));
    sub_AFC3F0(v319, const_cast<char *>("seat"));
    sub_AFC3F0(v319, const_cast<char *>("seatAlt"));
    sub_AFC3F0(v319, const_cast<char *>("door"));
    sub_AFC3F0(v319, const_cast<char *>("doorAlt"));
    v320 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("vehicle_doors_and_seats.xml.bin"));
    v321 = v320;
    if ( v320 != 0 && G4_VCALL<int>(v320, 20) != 0 )
    {
      sub_A68AD0(v321, 0, 0, 0);
      v1224 = reinterpret_cast<uint32_t *>(sub_B110B0(0xFE95AC69));
      sub_AFC4B0(v1224, const_cast<char *>("OneSeat"));
      sub_AFC4B0(v1224, const_cast<char *>("OneSeatOneDoor"));
      sub_AFC4B0(v1224, const_cast<char *>("TwoSeats"));
      sub_AFC4B0(v1224, const_cast<char *>("OneSeatTwoDoorsLow"));
      sub_AFC4B0(v1224, const_cast<char *>("OneSeatTwoDoorsHigh"));
      sub_AFC4B0(v1224, const_cast<char *>("TwoSeatsTwoDoorsLow"));
      sub_AFC4B0(v1224, const_cast<char *>("TwoSeatsTwoDoorsHigh"));
      sub_AFC4B0(v1224, const_cast<char *>("FourSeatsFourDoorsLow"));
      sub_AFC4B0(v1224, const_cast<char *>("FourSeatsFourDoorsHigh"));
      sub_AFC4B0(v1224, const_cast<char *>("TwoSeatsTwoDoorsTank"));
      sub_AFC4B0(v1224, const_cast<char *>("TwoSeatsTwoDoorsSeaplane"));
      sub_AFC4B0(v1224, const_cast<char *>("TwoSeatsTwoDoorsHelicopter"));
      sub_AFC4B0(v1224, const_cast<char *>("OneSeatOneDoorsBus"));
      sub_AFC4B0(v1224, const_cast<char *>("ThreeSeatsOneTurret"));
      sub_AFC4B0(v1224, const_cast<char *>("OneSeatOneDoorsJetplane"));
      sub_AFC4B0(v1224, const_cast<char *>("OneSeatTwoDoorsJetplane"));
      sub_AFC4B0(v1224, const_cast<char *>("TwoSeatNoDoorsBuggy"));
      sub_A68CA0(v321, 0, 0, 0);
      v1225 = reinterpret_cast<uint32_t *>(sub_B110B0(0xB9FEADC1));
      sub_AFC4B0(v1225, const_cast<char *>("FourSeatsFourDoorsHigh"));
      sub_AFC4B0(v1225, const_cast<char *>("FourSeatsFourDoorsLow"));
      sub_AFC4B0(v1225, const_cast<char *>("OneSeat"));
      sub_AFC4B0(v1225, const_cast<char *>("OneSeatOneDoor"));
      sub_AFC4B0(v1225, const_cast<char *>("OneSeatOneDoorsBus"));
      sub_AFC4B0(v1225, const_cast<char *>("OneSeatOneDoorsJetplane"));
      sub_AFC4B0(v1225, const_cast<char *>("OneSeatTwoDoorsJetplane"));
      sub_AFC4B0(v1225, const_cast<char *>("OneSeatTwoDoorsHigh"));
      sub_AFC4B0(v1225, const_cast<char *>("OneSeatTwoDoorsLow"));
      sub_AFC4B0(v1225, const_cast<char *>("ThreeSeatsOneTurret"));
      sub_AFC4B0(v1225, const_cast<char *>("TwoSeats"));
      sub_AFC4B0(v1225, const_cast<char *>("TwoSeatsTwoDoorsHelicopter"));
      sub_AFC4B0(v1225, const_cast<char *>("TwoSeatsTwoDoorsHigh"));
      sub_AFC4B0(v1225, const_cast<char *>("TwoSeatsTwoDoorsLow"));
      sub_AFC4B0(v1225, const_cast<char *>("TwoSeatsTwoDoorsSeaplane"));
      sub_AFC4B0(v1225, const_cast<char *>("TwoSeatsTwoDoorsTank"));
      sub_AFC4B0(v1225, const_cast<char *>("TwoSeatNoDoorsBuggy"));
      sub_AFC4B0(v1225, const_cast<char *>("OneSeatNoDoors"));
      G4_VCALL<void>(v321, 4);
    }
    v322 = reinterpret_cast<uint32_t *>(sub_B0E610(0xFF89CAC7));
    sub_AFC3F0(v322, const_cast<char *>("Collision_Impact_Small"));
    sub_AFC3F0(v322, const_cast<char *>("Collision_Impact_Medium"));
    sub_AFC3F0(v322, const_cast<char *>("Collision_Impact_Hard"));
    sub_AFC3F0(v322, const_cast<char *>("Collision_Body_Impact_Small"));
    sub_AFC3F0(v322, const_cast<char *>("Collision_Body_Impact_Medium"));
    sub_AFC3F0(v322, const_cast<char *>("Collision_Body_Impact_Hard"));
    sub_AFC3F0(v322, const_cast<char *>("Collision_Grinding"));
    sub_AFC3F0(v322, const_cast<char *>("Crushed"));
    sub_AFC3F0(v322, const_cast<char *>("Explosion"));
    sub_AFC3F0(v322, const_cast<char *>("Failing"));
    sub_AFC3F0(v322, const_cast<char *>("Fire"));
    sub_AFC3F0(v322, const_cast<char *>("Siren"));
    sub_AFC3F0(v322, const_cast<char *>("Skid_Marks"));
    sub_AFC3F0(v322, const_cast<char *>("Water_Splash"));
    v323 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("vehicle_soundsets.xml.bin"));
    v324 = v323;
    if ( v323 != 0 && G4_VCALL<int>(v323, 20) != 0 )
    {
      sub_A68E70(v324, 0, 0, 0);
      v333 = reinterpret_cast<uint32_t *>(sub_B110B0(0x3F05545Au));
      sub_AFC4B0(v333, const_cast<char *>("StandardCar"));
      sub_AFC4B0(v333, const_cast<char *>("StandardBoat"));
      sub_AFC4B0(v333, const_cast<char *>("Tank"));
      sub_AFC4B0(v333, const_cast<char *>("ArmyHummer"));
      sub_AFC4B0(v333, const_cast<char *>("PoliceCar"));
      sub_AFC4B0(v333, const_cast<char *>("PoliceCar2"));
      sub_AFC4B0(v333, const_cast<char *>("PoliceCar3"));
      sub_AFC4B0(v333, const_cast<char *>("PoliceCar4"));
      sub_AFC4B0(v333, const_cast<char *>("Bike"));
      G4_VCALL<void>(v324, 4);
    }
    v325 = reinterpret_cast<uint32_t *>(sub_B0E610(0x23384B01u));
    sub_AFC3F0(v325, const_cast<char *>("OptionMinSensitivityFactor"));
    sub_AFC3F0(v325, const_cast<char *>("OptionMaxSensitivityFactor"));
    sub_AFC3F0(v325, const_cast<char *>("MaxAngleLowSensitivity"));
    sub_AFC3F0(v325, const_cast<char *>("MaxAngleHighSensitivity"));
    sub_AFC3F0(v325, const_cast<char *>("DeadZoneLowSensitivity"));
    sub_AFC3F0(v325, const_cast<char *>("DeadZoneHighSensitivity"));
    sub_AFC3F0(v325, const_cast<char *>("CurveExpLowSensitivity"));
    sub_AFC3F0(v325, const_cast<char *>("CurveExpHighSensitivity"));
    sub_AFC3F0(v325, const_cast<char *>("accelerometerAngleFactor"));
    sub_AFC3F0(v325, const_cast<char *>("accelerometerFilterFactor"));
    sub_AFC3F0(v325, const_cast<char *>("accelerometerDeadZone"));
    sub_AFC3F0(v325, const_cast<char *>("accelerometerRollToPitch"));
    sub_AFC3F0(v325, const_cast<char *>("startSmoothingHorizonAngle"));
    sub_AFC3F0(v325, const_cast<char *>("endSmoothingHorizonAngle"));
    sub_AFC3F0(v325, const_cast<char *>("CurvePhaseLowSensitivity"));
    sub_AFC3F0(v325, const_cast<char *>("CurvePhaseHighSensitivity"));
    sub_AFC3F0(v325, const_cast<char *>("MotoInAirRampingPoint1_X"));
    sub_AFC3F0(v325, const_cast<char *>("MotoInAirRampingPoint1_Y"));
    sub_AFC3F0(v325, const_cast<char *>("MotoInAirRampingPoint2_X"));
    sub_AFC3F0(v325, const_cast<char *>("MotoInAirRampingPoint2_Y"));
    sub_AFC3F0(v325, const_cast<char *>("MotoInAirRampingTimer"));
    sub_AFC3F0(v325, const_cast<char *>("MotoInAirRampingThreshold"));
    sub_AFC3F0(v325, const_cast<char *>("MotoInAirRampingInitialFactor"));
    sub_AFC3F0(v325, const_cast<char *>("MotoWheelieThresholdInput"));
    v326 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("vehicle_steering_settings.xml.bin"));
    v327 = v326;
    if ( v326 != 0 && G4_VCALL<int>(v326, 20) != 0 )
    {
      sub_A69020(v327, 0, 0, 0);
      v332 = reinterpret_cast<uint32_t *>(sub_B110B0(0x5620062Du));
      sub_AFC4B0(v332, const_cast<char *>("Default"));
      sub_AFC4B0(v332, const_cast<char *>("MotoGyro"));
      sub_AFC4B0(v332, const_cast<char *>("Moto"));
      G4_VCALL<void>(v327, 4);
    }
    v328 = reinterpret_cast<uint32_t *>(sub_B0E610(0x15B5B4CAu));
    sub_AFC3F0(v328, const_cast<char *>("IntValue"));
    sub_AFC3F0(v328, const_cast<char *>("FloatValue"));
    sub_AFC3F0(v328, const_cast<char *>("BoolValue"));
    sub_AFC3F0(v328, const_cast<char *>("HexValue"));
    sub_AFC3F0(v328, const_cast<char *>("ConstantSymbol"));
    sub_AFC3F0(v328, const_cast<char *>("EnumSymbol"));
    sub_AFC3F0(v328, const_cast<char *>("FlagSymbol"));
    sub_AFC3F0(v328, const_cast<char *>("IntRangeValue"));
    sub_AFC3F0(v328, const_cast<char *>("FloatRangeValue"));
    sub_AFC3F0(v328, const_cast<char *>("StringValue"));
    sub_AFC3F0(v328, const_cast<char *>("StrIDValue"));
    sub_AFC3F0(v328, const_cast<char *>("OIDValue"));
    sub_AFC3F0(v328, const_cast<char *>("OIDValueNoSType"));
    sub_AFC3F0(v328, const_cast<char *>("IntList"));
    sub_AFC3F0(v328, const_cast<char *>("FloatList"));
    sub_AFC3F0(v328, const_cast<char *>("EnumList"));
    sub_AFC3F0(v328, const_cast<char *>("OIDList"));
    sub_AFC3F0(v328, const_cast<char *>("Vector3df"));
    v329 = xmldata::RegisterSchema_texture_bias((int)(uintptr_t)a1, const_cast<char *>("xmldata_example.xml.bin"));
    v330 = v329;
    if ( v329 != 0 && G4_VCALL<int>(v329, 20) != 0 )
    {
      sub_A691D0(v330, 0, 0, 0);
      v331 = reinterpret_cast<uint32_t *>(sub_B110B0(0xD291BE05));
      sub_AFC4B0(v331, const_cast<char *>("AllDefaults"));
      sub_AFC4B0(v331, const_cast<char *>("ChangeSomeValue"));
      sub_AFC4B0(v331, const_cast<char *>("OIDExample"));
      sub_AFC4B0(v331, const_cast<char *>("OIDExampleCopyOf"));
      sub_AFC4B0(v331, const_cast<char *>("UsingLists"));
      G4_VCALL<void>(v330, 4);
    }
  }
  return sub_4ECAB0((int)(uintptr_t)&g4_scope_guard);
}
