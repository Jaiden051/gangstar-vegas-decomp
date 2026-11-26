#include "Core/Utils/DecompTypes.h"
#include "gameswf_html_reader.h"

// ----------------------------------------------------------------------------
// Function: gameswf::html_reader::setAttributesFromStyle  (binary VA: 0x1107ae0)
// Original: gameswf::html_reader::setAttributesFromStyle
// ----------------------------------------------------------------------------
void gameswf::html_reader::setAttributesFromStyle(int a1, gameswf::Player::Self *a2, int a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  gameswf::String::Self *v13;
  gameswf::Self **v14;
  int v15;
  int v16;
  int v17;
  gameswf::String::Self *v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  gameswf::String::Self *v28;
  int v29;
  gameswf::String::Self *v30;
  int v31;
  const char *nptr;
  unsigned int v33;
  int v34;
  gameswf::String::Self *v35;
  gameswf::Font::Self *v36;
  int v37;
  const char *v38;
  gameswf::RefCounted::Self *v39;
  int v40;
  gameswf::String::Self *v41;
  int v42;
  const char *v43;
  int v44;
  int v45;
  int v46;
  int v47;
  gameswf::String::Self *v48;
  int v49;
  const char *v50;
  int v51;
  gameswf::String::Self *v52;
  int v53;
  char v54;
  const char *v55;
  const char *v56;
  int v57;
  gameswf::String::Self *v58;
  int v59;
  const char *v60;
  const char *v61;
  int v62;
  gameswf::String::Self *v63;
  int v64;
  const char *v65;
  int v66;
  const char *v67;
  int v68;
  const char *v69;
  int v70;
  int v71;
  char v72;

  v4 = *a4;
  if ( *a4 != 0 )
  {
    v5 = *(uint32_t *)(v4 + 4);
    v71 = 0;
    if ( v5 >= 0 && *(uint32_t *)(v4 + 8) == -2 )
    {
      v6 = 56;
      v7 = 1;
      do
      {
        v8 = v7;
        if ( v7 > v5 )
          break;
        v9 = *(uint32_t *)(v4 + v6);
        ++v7;
        v6 += 48;
      }
      while ( v9 == -2 );
      v71 = v8;
      if ( a4 != nullptr )
        goto LABEL_10;
    }
    else if ( a4 != nullptr )
    {
LABEL_10:
      v10 = *a4;
      while ( 1 )
      {
        if ( v10 == 0 || *(uint32_t *)(v10 + 4) < v71 )
          return;
        v11 = 48 * v71 + 8;
        v12 = v10 + v11;
        v13 = (gameswf::String::Self *)(v12 + 9);
        if ( *(uint8_t *)(v12 + 8) == 0xFF )
          v13 = *(gameswf::String::Self **)(v12 + 20);
        if ( gameswf::String::stricmp(v13, "font-family") == 0 )
        {
          v14 = (gameswf::Self **)opNew(0x84u);
          gameswf::Font::Construct((gameswf::Font::Self *)v14, a2);
          gameswf::Font::copyFrom((gameswf::Font::Self *)v14, *(gameswf::Font::Self **)a3);
          gameswf::String::opAssign(v14 + 11, (gameswf::Self **)(*a4 + v11 + 28));
          if ( v14 != *(gameswf::Self ***)a3 )
          {
            if ( *(uint32_t *)a3 != 0 )
              gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)a3);
            *(uint32_t *)a3 = (uint32_t)(uintptr_t)(v14);
            if ( v14 != nullptr )
            {
              gameswf::RefCounted::addRef((gameswf::RefCounted::Self *)v14);
              v10 = *a4;
              goto LABEL_21;
            }
          }
          goto LABEL_46;
        }
        v17 = *a4 + v11;
        if ( *(uint8_t *)(v17 + 8) == 0xFF )
          v18 = *(gameswf::String::Self **)(v17 + 20);
        else
          v18 = (gameswf::String::Self *)(v17 + 9);
        if ( gameswf::String::stricmp(v18, "color") == 0 )
        {
          v19 = *a4 + v11;
          v72 = *(uint8_t *)(v19 + 28);
          if ( v72 != -1 )
          {
            v20 = v72 - 2;
            if ( v20 > 0 )
              goto LABEL_30;
LABEL_54:
            LOBYTE(v24) = 0;
            LOBYTE(v26) = 0;
            LOBYTE(v25) = 0;
LABEL_40:
            *(uint8_t *)(a3 + 9) = v26;
            *(uint8_t *)(a3 + 8) = v25;
            *(uint8_t *)(a3 + 10) = v24;
            *(uint8_t *)(a3 + 11) = -1;
            v10 = *a4;
            goto LABEL_21;
          }
          v20 = *(uint32_t *)(v19 + 32) - 2;
          if ( v20 <= 0 )
            goto LABEL_54;
LABEL_30:
          v21 = 0;
          if ( v72 == -1 )
          {
            v70 = -16777216;
            do
            {
              v33 = *(char *)(*(uint32_t *)(v19 + 40) + v20);
              if ( v33 <= 0xFF )
                LOWORD(v33) = *(uint16_t *)(tolower_tab_ + 2 * v33 + 2);
              if ( (uint8_t)(v33 - 48) > 9u )
              {
                if ( (uint8_t)(v33 - 97) <= 5u )
                  v70 |= ((char)v33 - 87) << v21;
              }
              else
              {
                v70 |= ((char)v33 - 48) << v21;
              }
              LOBYTE(v21) = v21 + 4;
              --v20;
            }
            while ( v20 != 0 );
LABEL_39:
            v24 = (int)(double)v70;
            v25 = HIWORD(v24);
            v26 = v24 >> 8;
            goto LABEL_40;
          }
          v70 = -16777216;
          while ( 1 )
          {
LABEL_34:
            v22 = *(char *)(v19 + v20 + 29);
            if ( v22 <= 0xFF )
              LOWORD(v22) = *(uint16_t *)(tolower_tab_ + 2 * v22 + 2);
            if ( (uint8_t)(v22 - 48) <= 9u )
              break;
            if ( (uint8_t)(v22 - 97) > 5u )
              goto LABEL_33;
            v23 = ((char)v22 - 87) << v21;
            v21 += 4;
            v70 |= v23;
            if ( --v20 == 0 )
              goto LABEL_39;
          }
          v70 |= ((char)v22 - 48) << v21;
LABEL_33:
          v21 += 4;
          if ( --v20 == 0 )
            goto LABEL_39;
          goto LABEL_34;
        }
        v29 = *a4 + v11;
        if ( *(uint8_t *)(v29 + 8) == 0xFF )
          v30 = *(gameswf::String::Self **)(v29 + 20);
        else
          v30 = (gameswf::String::Self *)(v29 + 9);
        if ( gameswf::String::stricmp(v30, "font-size") == 0 )
        {
          v31 = *a4 + v11;
          if ( *(uint8_t *)(v31 + 28) == 0xFF )
            nptr = *(const char **)(v31 + 40);
          else
            nptr = (const char *)(v31 + 29);
          *(uint32_t *)(a3 + 4) = (int)(float)atoi(nptr);
          v10 = *a4;
          goto LABEL_21;
        }
        v34 = *a4 + v11;
        v35 = *(uint8_t *)(v34 + 8) == 0xFF ? *(gameswf::String::Self **)(v34 + 20) : (gameswf::String::Self *)(v34 + 9);
        if ( gameswf::String::stricmp(v35, "font-style") == 0 )
          break;
        v40 = *a4 + v11;
        if ( *(uint8_t *)(v40 + 8) == 0xFF )
          v41 = *(gameswf::String::Self **)(v40 + 20);
        else
          v41 = (gameswf::String::Self *)(v40 + 9);
        if ( gameswf::String::stricmp(v41, "font-weight") == 0 )
        {
          v36 = (gameswf::Font::Self *)opNew(0x84u);
          gameswf::Font::Construct(v36, a2);
          gameswf::Font::copyFrom(v36, *(gameswf::Font::Self **)a3);
          v42 = *a4 + v11;
          if ( *(uint8_t *)(v42 + 28) == 0xFF )
            v43 = *(const char **)(v42 + 40);
          else
            v43 = (const char *)(v42 + 29);
          *((uint8_t *)v36 + 73) = strcmp(v43, "bold") == 0;
          v39 = *(gameswf::RefCounted::Self **)a3;
          if ( v36 == *(gameswf::Font::Self **)a3 )
            goto LABEL_46;
          goto LABEL_70;
        }
        v47 = *a4 + v11;
        if ( *(uint8_t *)(v47 + 8) == 0xFF )
          v48 = *(gameswf::String::Self **)(v47 + 20);
        else
          v48 = (gameswf::String::Self *)(v47 + 9);
        if ( gameswf::String::stricmp(v48, "text-decoration") != 0 )
        {
          v51 = *a4 + v11;
          if ( *(uint8_t *)(v51 + 8) == 0xFF )
            v52 = *(gameswf::String::Self **)(v51 + 20);
          else
            v52 = (gameswf::String::Self *)(v51 + 9);
          if ( gameswf::String::stricmp(v52, "vertical-align") != 0 )
          {
            v57 = *a4 + v11;
            if ( *(uint8_t *)(v57 + 8) == 0xFF )
              v58 = *(gameswf::String::Self **)(v57 + 20);
            else
              v58 = (gameswf::String::Self *)(v57 + 9);
            if ( gameswf::String::stricmp(v58, "padding-left") != 0 )
            {
              v62 = *a4 + v11;
              if ( *(uint8_t *)(v62 + 8) == 0xFF )
                v63 = *(gameswf::String::Self **)(v62 + 20);
              else
                v63 = (gameswf::String::Self *)(v62 + 9);
              if ( gameswf::String::stricmp(v63, "padding-right") != 0 )
              {
                if ( gameswf::StringI::opEq((gameswf::StringI::Self *)(v11 + *a4 + 8), "padding-top") )
                {
                  v66 = *a4 + v11;
                  if ( *(uint8_t *)(v66 + 28) == 0xFF )
                    v67 = *(const char **)(v66 + 40);
                  else
                    v67 = (const char *)(v66 + 29);
                  *(float *)(a3 + 24) = (float)atoi(v67);
                  v10 = *a4;
                }
                else if ( gameswf::StringI::opEq((gameswf::StringI::Self *)(v11 + *a4 + 8), "padding-bottom") )
                {
                  v68 = *a4 + v11;
                  if ( *(uint8_t *)(v68 + 28) == 0xFF )
                    v69 = *(const char **)(v68 + 40);
                  else
                    v69 = (const char *)(v68 + 29);
                  *(float *)(a3 + 28) = (float)atoi(v69);
                  v10 = *a4;
                }
                else
                {
                  if ( !gameswf::StringI::opEq((gameswf::StringI::Self *)(v11 + *a4 + 8), "float") )
                  {
                    if ( gameswf::StringI::opEq((gameswf::StringI::Self *)(v11 + *a4 + 8), "direction") )
                    {
                      v27 = *a4 + v11;
                      if ( *(uint8_t *)(v27 + 28) == 0xFF )
                        v28 = *(gameswf::String::Self **)(v27 + 40);
                      else
                        v28 = (gameswf::String::Self *)(v27 + 29);
                      *(uint8_t *)(a3 + 13) = gameswf::String::stricmp(v28, "rtl") != 0;
                    }
LABEL_46:
                    v10 = *a4;
                    goto LABEL_21;
                  }
                  v10 = *a4;
                  if ( sub_7E5E50(*a4 + v11 + 28, "left") )
                  {
                    *(uint32_t *)(a3 + 32) = 1;
                    v10 = *a4;
                  }
                  else if ( sub_7E5E50(v10 + v11 + 28, "right") )
                  {
                    *(uint32_t *)(a3 + 32) = 2;
                    v10 = *a4;
                  }
                }
              }
              else
              {
                v64 = *a4 + v11;
                if ( *(uint8_t *)(v64 + 28) == 0xFF )
                  v65 = *(const char **)(v64 + 40);
                else
                  v65 = (const char *)(v64 + 29);
                *(float *)(a3 + 20) = (float)atoi(v65);
                v10 = *a4;
              }
            }
            else
            {
              v59 = *a4 + v11;
              if ( *(uint8_t *)(v59 + 28) == 0xFF )
                v60 = *(const char **)(v59 + 40);
              else
                v60 = (const char *)(v59 + 29);
              *(float *)(a3 + 16) = (float)atoi(v60);
              v10 = *a4;
            }
          }
          else
          {
            v10 = *a4;
            v53 = *a4 + v11;
            v54 = *(uint8_t *)(v53 + 28);
            v55 = (const char *)(v53 + 29);
            if ( v54 == -1 )
              v55 = *(const char **)(v53 + 40);
            if ( strcmp(v55, "middle") == 0 )
            {
              *(uint32_t *)(a3 + 40) = 3;
              v10 = *a4;
            }
            else
            {
              v56 = (const char *)(v53 + 29);
              if ( v54 == -1 )
                v56 = *(const char **)(v53 + 40);
              if ( strcmp(v56, "bottom") == 0 )
              {
                *(uint32_t *)(a3 + 40) = 2;
                v10 = *a4;
              }
              else
              {
                v61 = (const char *)(v53 + 29);
                if ( v54 == -1 )
                  v61 = *(const char **)(v53 + 40);
                if ( strcmp(v61, (const char *)&off_1B29E4F) == 0 )
                {
                  *(uint32_t *)(a3 + 40) = 1;
                  v10 = *a4;
                }
              }
            }
          }
        }
        else
        {
          v49 = *a4 + v11;
          if ( *(uint8_t *)(v49 + 28) == 0xFF )
            v50 = *(const char **)(v49 + 40);
          else
            v50 = (const char *)(v49 + 29);
          *(uint8_t *)(a3 + 12) = strcmp(v50, "underline") == 0;
          v10 = *a4;
        }
LABEL_21:
        v15 = *(uint32_t *)(v10 + 4);
        if ( v71 > v15 )
          return;
        v16 = v71 + 1;
        if ( v15 >= v71 + 1 && *(uint32_t *)(v10 + 48 * v16 + 8) == -2 )
        {
          v44 = v71 + 2;
          v45 = 48 * (v71 + 2) + 8;
          do
          {
            v16 = v44;
            if ( v15 < v44 )
              break;
            v46 = *(uint32_t *)(v10 + v45);
            ++v44;
            v45 += 48;
          }
          while ( v46 == -2 );
        }
        v71 = v16;
      }
      v36 = (gameswf::Font::Self *)opNew(0x84u);
      gameswf::Font::Construct(v36, a2);
      gameswf::Font::copyFrom(v36, *(gameswf::Font::Self **)a3);
      v37 = *a4 + v11;
      if ( *(uint8_t *)(v37 + 28) == 0xFF )
        v38 = *(const char **)(v37 + 40);
      else
        v38 = (const char *)(v37 + 29);
      *((uint8_t *)v36 + 72) = strcmp(v38, "italic") == 0;
      v39 = *(gameswf::RefCounted::Self **)a3;
      if ( v36 == *(gameswf::Font::Self **)a3 )
        goto LABEL_46;
LABEL_70:
      if ( v39 != nullptr )
        gameswf::RefCounted::dropRef(v39);
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(v36);
      gameswf::RefCounted::addRef(v36);
      v10 = *a4;
      goto LABEL_21;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::html_reader::bufferText  (binary VA: 0x1109030)
// Original: gameswf::html_reader::bufferText
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::html_reader::bufferText(int a1, uint32_t *a2, uint32_t *a3, int a4)
{
  int v4;
  int v5;
  gameswf::Self *v6;
  int v7;
  int v8;
  int16_t v9; // si
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char *v19;
  char *v20;
  gameswf::RefCounted::Self *v21;
  bool v22;
  int v23;
  int v24;
  int v25;
  int v26;
  char *v27;
  int v28;
  int v29;
  char v30;
  int v31;
  gameswf::Self *v32;
  char *v33;
  char *v34;
  gameswf::Self *result;
  int v36;
  gameswf::Self *v37;
  int v38;
  gameswf::Self *v39;
  int v40;
  gameswf::Self *v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef gameswf::Self *_g4_t_v60;
  typedef gameswf::Self *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v42)) > _g4_s0 ? (0u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v43)) > _g4_s1 ? (0u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v44)) > _g4_s2 ? (0u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v45)) > _g4_s3 ? (0u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v46)) > _g4_s4 ? (0u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v47)) > _g4_s5 ? (0u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v48)) > _g4_s6 ? (0u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v49)) > _g4_s7 ? (0u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v50)) > _g4_s8 ? (4u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v51)) > _g4_s9 ? (4u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v52)) > _g4_s10 ? (4u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v53)) > _g4_s11 ? (4u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v54)) > _g4_s12 ? (8u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v55)) > _g4_s13 ? (12u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v56)) > _g4_s14 ? (16u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v57)) > _g4_s15 ? (20u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v58)) > _g4_s16 ? (24u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v59)) > _g4_s17 ? (28u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v60)) > _g4_s18 ? (28u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v61)) > _g4_s19 ? (32u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v62)) > _g4_s20 ? (36u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v63)) > _g4_s21 ? (40u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v64)) > _g4_s22 ? (44u + sizeof(_g4_t_v64)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 4u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 20u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 32u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 36u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);

  v4 = a1;
  if ( *(uint8_t *)a3 == 0xFF )
    v5 = a3[1] - 1;
  else
    v5 = *(char *)a3 - 1;
  v61 = nullptr;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  sub_777050((int)(uintptr_t)(&v61), v5);
  gameswf::String::decodeUTF8ToWchar((gameswf::String::Self *)a3, (const gameswf::String::Self *)&v61);
  v57 = *(uint32_t *)(a1 + 20);
  v58 = v62 + v57;
  v6 = v61;
  v59 = v57;
  v7 = a4;
  if ( v62 > 0 )
  {
    v50 = v62;
    sub_777050(a1 + 16, v58);
    v8 = 0;
    do
    {
      v9 = *(uint16_t *)((char *)v6 + v8);
      v10 = *(uint32_t *)(a1 + 16) + v8;
      v8 += 2;
      *(uint16_t *)(v10 + 2 * v57) = v9;
    }
    while ( v8 != 2 * v50 );
    v4 = a1;
    v7 = a4;
    v59 = *(uint32_t *)(a1 + 20);
  }
  v11 = *(uint32_t *)(v4 + 52);
  if ( v59 != 0 )
  {
    v12 = *(uint32_t *)(v4 + 56);
    if ( v12 < v59 && *(uint32_t *)(v4 + 60) == 0 )
    {
      v38 = v59 + (v59 >> 1);
      v22 = v38 == 0;
      v54 = v38;
      *(uint32_t *)(v4 + 56) = v38;
      v39 = *(gameswf::Self **)(v4 + 48);
      if ( v22 )
      {
        if ( v39 != nullptr )
        {
          v45 = v7;
          gameswf::free_internal(v39);
          v7 = v45;
        }
        *(uint32_t *)(v4 + 48) = 0;
      }
      else
      {
        v48 = v7;
        if ( v39 != nullptr )
          *(uint32_t *)(v4 + 48) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)(v4 + 48), 4 * v54, 4 * v12));
        else
          *(uint32_t *)(v4 + 48) = gameswf::malloc_internal(4 * v54);
        v7 = v48;
      }
    }
  }
  v13 = 4 * v11;
  if ( v11 < v59 )
  {
    do
    {
      v14 = (uint32_t *)(*(uint32_t *)(v4 + 48) + v13);
      if ( v14 != nullptr )
        *v14 = 0;
      ++v11;
      v13 += 4;
    }
    while ( v11 != v59 );
  }
  *(uint32_t *)(v4 + 52) = v59;
  if ( v57 < v58 )
  {
    v15 = v57;
    v16 = 4 * v57;
    do
    {
      ++v15;
      *(uint32_t *)(*(uint32_t *)(v4 + 48) + v16) = *(uint32_t *)(v4 + 36);
      v16 += 4;
    }
    while ( v15 != v58 );
  }
  v17 = *(uint32_t *)(v4 + 36);
  v56 = *(uint32_t *)(v4 + 40);
  v18 = v17 + 1;
  if ( v17 + 1 <= v56 || *(uint32_t *)(v4 + 44) != 0 )
  {
    v19 = *(char **)(v4 + 32);
  }
  else
  {
    v36 = v18 + (v18 >> 1);
    *(uint32_t *)(v4 + 40) = v36;
    if ( v36 != 0 )
    {
      v47 = v7;
      v53 = v17 + 1;
      if ( *(uint32_t *)(v4 + 32) != 0 )
      {
        v19 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v4 + 32), 44 * v36, 44 * v56);
        *(uint32_t *)(v4 + 32) = (uint32_t)(uintptr_t)(v19);
        v17 = *(uint32_t *)(v4 + 36);
        v7 = v47;
        v18 = v53;
      }
      else
      {
        v19 = (char *)gameswf::malloc_internal(44 * v36);
        *(uint32_t *)(v4 + 32) = (uint32_t)(uintptr_t)(v19);
        v17 = *(uint32_t *)(v4 + 36);
        v18 = v53;
        v7 = v47;
      }
    }
    else
    {
      v37 = *(gameswf::Self **)(v4 + 32);
      if ( v37 != nullptr )
      {
        v43 = v7;
        v52 = v17 + 1;
        gameswf::free_internal(v37);
        v17 = *(uint32_t *)(v4 + 36);
        v18 = v52;
        v7 = v43;
      }
      *(uint32_t *)(v4 + 32) = 0;
      v19 = nullptr;
    }
  }
  v20 = &v19[44 * v17];
  if ( v20 != nullptr )
  {
    v21 = *(gameswf::RefCounted::Self **)v7;
    v22 = *(uint32_t *)v7 == 0;
    *(uint32_t *)v20 = *(uint32_t *)v7;
    if ( !v22 )
    {
      v42 = v7;
      v51 = v18;
      gameswf::RefCounted::addRef(v21);
      v18 = v51;
      v7 = v42;
    }
    *((uint32_t *)v20 + 1) = *(uint32_t *)(v7 + 4);
    *((uint32_t *)v20 + 2) = *(uint32_t *)(v7 + 8);
    v20[12] = *(uint8_t *)(v7 + 12);
    v20[13] = *(uint8_t *)(v7 + 13);
    *((uint32_t *)v20 + 4) = *(uint32_t *)(v7 + 16);
    *((uint32_t *)v20 + 5) = *(uint32_t *)(v7 + 20);
    *((uint32_t *)v20 + 6) = *(uint32_t *)(v7 + 24);
    *((uint32_t *)v20 + 7) = *(uint32_t *)(v7 + 28);
    *((uint32_t *)v20 + 8) = *(uint32_t *)(v7 + 32);
    *((uint32_t *)v20 + 9) = *(uint32_t *)(v7 + 36);
    *((uint32_t *)v20 + 10) = *(uint32_t *)(v7 + 40);
  }
  *(uint32_t *)(v4 + 36) = v18;
  v23 = *(uint32_t *)(v4 + 68);
  v55 = v23;
  if ( v23 != 0 )
  {
    v60 = *(gameswf::Self **)(v4 + 64);
    v24 = (int)(uintptr_t)(v60) + 12 * v23 - 12;
    if ( *(uint8_t *)(v24 + 8) != *(uint8_t *)(v7 + 13) )
    {
      v25 = v23 + 1;
      if ( v23 != -1 )
      {
        v26 = *(uint32_t *)(v4 + 72);
        if ( v25 > v26 && *(uint32_t *)(v4 + 76) == 0 )
        {
          v40 = v25 + (v25 >> 1);
          *(uint32_t *)(v4 + 72) = v40;
          if ( v40 != 0 )
          {
            v49 = v7;
            if ( v60 != nullptr )
              v41 = (gameswf::Self *)gameswf::realloc_internal(v60, 12 * v40, 12 * v26);
            else
              v41 = (gameswf::Self *)gameswf::malloc_internal(12 * v40);
            *(uint32_t *)(v4 + 64) = (uint32_t)(uintptr_t)(v41);
            v60 = v41;
            v7 = v49;
          }
          else
          {
            if ( v60 != nullptr )
            {
              v46 = v7;
              gameswf::free_internal(v60);
              v7 = v46;
            }
            *(uint32_t *)(v4 + 64) = 0;
            v60 = nullptr;
          }
        }
      }
      v27 = (char *)v60 + 12 * v55;
      if ( v27 != nullptr )
      {
        *(uint32_t *)v27 = 0;
        *((uint32_t *)v27 + 1) = 0;
        v27[8] = 1;
      }
      v28 = *(uint32_t *)(v4 + 64);
      *(uint32_t *)(v4 + 68) = v25;
      *(uint32_t *)(v28 + 12 * v55) = v57;
      v24 = *(uint32_t *)(v4 + 64) + 4 * (3 * *(uint32_t *)(v4 + 68) - 3);
    }
  }
  else
  {
    v44 = v7;
    gameswf::array_gameswf_html_reader_Left_491179::resize(
      (gameswf::array<gameswf::html_reader::LeftToRightInfo> *)(v4 + 64),
      1);
    v7 = v44;
    v24 = *(uint32_t *)(v4 + 64) + 4 * (3 * *(uint32_t *)(v4 + 68) - 3);
  }
  *(uint32_t *)(v24 + 4) = v58;
  *(uint8_t *)(*(uint32_t *)(v4 + 64) + 4 * (3 * *(uint32_t *)(v4 + 68) - 3) + 8) = *(uint8_t *)(v7 + 13);
  if ( *(uint8_t *)a3 == 0xFF )
    v29 = a3[1] - 1;
  else
    v29 = *(char *)a3 - 1;
  v30 = *((uint8_t *)a2 + 468);
  if ( v30 == -1 )
    v31 = a2[118] - 1;
  else
    v31 = v30 - 1;
  gameswf::String::resize((gameswf::String::Self *)(a2 + 117), v31 + v29);
  v32 = (gameswf::Self *)((char *)a3 + 1);
  if ( *(uint8_t *)a3 == 0xFF )
    v32 = (gameswf::Self *)a3[3];
  LOBYTE(v33) = *((uint8_t *)a2 + 468);
  if ( (uint8_t)(uintptr_t)v33 == 0xFF )
  {
    v33 = (char *)a2[118];
    v34 = (char *)a2[120];
  }
  else
  {
    v33 = (char *)(char)(uintptr_t)v33;
    v34 = (char *)a2 + 469;
  }
  gameswf::Strcpy_s((gameswf::Self *)&v34[v31], v33, v32);
  a2[121] |= 0x7FFFFFu;
  result = (gameswf::Self *)sub_777050((int)(uintptr_t)(&v61), 0);
  if ( v64 == 0 )
  {
    result = v61;
    v63 = 0;
    if ( v61 != nullptr )
      return (gameswf::Self *)gameswf::free_internal(v61);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::html_reader::parse  (binary VA: 0x110a0b0)
// Original: gameswf::html_reader::parse
// ----------------------------------------------------------------------------
int gameswf::html_reader::parse(long double a1, gameswf::html_reader::Self *self, gameswf::EditTextCharacter::Self *a3)
{
  char v3;
  int result;
  char *v5;
  gameswf::Self *v6;
  gameswf::RefCounted::Self *v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  char *v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  int v17;
  size_t v18;
  char *v19;
  char *v20;
  const char *v21;
  char *v22;
  char *v23;
  int v24;
  int v25;
  int *v26;
  size_t v27;
  size_t v28;
  int v29;
  char *v30;
  char *v31;
  const char *v32;
  size_t v33;
  int v34;
  char *v35;
  char *v36;
  int v37;
  char *v38;
  char *v39;
  int v40;
  int v41;
  int v42;
  char *v43;
  size_t v44;
  char *v45;
  char *v46;
  gameswf::Self *v47;
  int index;
  char *v49;
  char *v50;
  char *v51;
  char *v52;
  char *v53;
  char *v54;
  int v55;
  char *v56;
  char *v57;
  char *v58;
  char *v59;
  char *v60;
  int v61;
  int v62;
  char *v63;
  int v64;
  int v65;
  int v66;
  int v67;
  gameswf::String::Self *v68;
  char *v69;
  int v70;
  int v71;
  int v72;
  gameswf::RefCounted::Self *v73;
  int v74;
  gameswf::Self *v75;
  char v76; // di
  int v77;
  gameswf::Self *v78;
  int v79;
  int v80;
  uint32_t *v81;
  char *v82;
  int v83;
  int v84;
  int v85;
  int v86;
  gameswf::Self *v87;
  bool v88; // di
  int v89;
  char *v90;
  size_t v91;
  char *v92;
  gameswf::Self *v93;
  char *v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int *v100;
  int v101;
  const char *v102;
  gameswf::Self *v103;
  char v104; // di
  int v105;
  const char *v106;
  const char *v107;
  int v108;
  int v109;
  const char *v110;
  const char *v111;
  const char *v112;
  const char *v113;
  const char *v114;
  const char *v115;
  const char *v116;
  gameswf::Self *v117;
  char v118; // di
  int v119;
  gameswf::String::Self *v120;
  gameswf::Player::Self *v121;
  gameswf::Font::Self *v122;
  gameswf::RefCounted::Self *v123;
  gameswf::Player::Self *v124;
  char v125; // di
  int v126;
  int v127;
  int v128;
  char v129; // di
  const char *v130;
  char *v131;
  int v132;
  double v133; // xmm0_8
  int v134;
  char v135;
  char *v136;
  const char *v137;
  char *v138;
  int v139;
  char *v140;
  char *v141;
  gameswf::String::Self *v142;
  int v143;
  gameswf::Self *v144;
  int v145;
  int v146;
  int v147;
  char *v148;
  char *v149;
  char *v150;
  const char *v151;
  const char *v152;
  int v153;
  int v154;
  const char *v155;
  int v156;
  int v157;
  char *v158;
  int v159;
  unsigned int v160;
  gameswf::Player::Self *v161;
  gameswf::Self **v162;
  int v163;
  char v164; // di
  const char *v165;
  int v166;
  const char *v167;
  int v168;
  int v169;
  char *v170;
  int v171;
  char *v172;
  unsigned int v173;
  unsigned int v174;
  unsigned int v175;
  typedef gameswf::Self *_g4_t_v176;
  typedef char _g4_t_v177;
  typedef char _g4_t_v178;
  typedef const char *_g4_t_v179;
  typedef char *_g4_t_v180;
  typedef int _g4_t_v181;
  typedef char *_g4_t_v182;
  typedef char _g4_t_v183;
  typedef char *_g4_t_v184;
  typedef char *_g4_t_v185;
  typedef int _g4_t_v186;
  typedef int _g4_t_v187;
  typedef char _g4_t_v188;
  typedef int _g4_t_v189;
  typedef int _g4_t_v190;
  typedef gameswf::RefCounted::Self *_g4_t_v191;
  typedef char *_g4_t_v192;
  typedef char *_g4_t_v193;
  typedef bool _g4_t_v194;
  typedef char _g4_t_v195;
  typedef char *_g4_t_v196;
  typedef char _g4_t_v197;
  typedef char _g4_t_v198;
  typedef char _g4_t_v199;
  typedef int _g4_t_v200;
  typedef char *_g4_t_v201;
  typedef int _g4_t_v202;
  typedef int _g4_t_v203;
  typedef char *_g4_t_v204;
  typedef float _g4_t_v205;
  typedef char _g4_t_v206;
  typedef uint8_t _g4_t_v207;
  typedef char _g4_t_v208;
  typedef const void *_g4_t_v209;
  typedef int _g4_t_v210;
  typedef int _g4_t_v211;
  typedef int _g4_t_v212;
  typedef unsigned int _g4_t_v213[4];
  typedef gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *_g4_t_v214[4];
  typedef int _g4_t_v215;
  typedef uint8_t _g4_t_v216[12];
  typedef gameswf::Self *_g4_t_v217[3];
  typedef const char *_g4_t_v218;
  typedef int16_t _g4_t_v219;
  typedef char _g4_t_v220;
  typedef char _g4_t_v221;
  typedef char _g4_t_v222;
  typedef char _g4_t_v223;
  typedef gameswf::Self *_g4_t_v224;
  typedef int16_t _g4_t_v225;
  typedef char _g4_t_v226;
  typedef char _g4_t_v227;
  typedef gameswf::Self *_g4_t_v228[3];
  typedef char *_g4_t_v229;
  typedef int16_t _g4_t_v230;
  typedef int16_t _g4_t_v231;
  typedef gameswf::Self *_g4_t_v232[4];
  typedef int16_t _g4_t_v233;
  typedef char _g4_t_v234;
  typedef char _g4_t_v235;
  typedef char _g4_t_v236;
  typedef char _g4_t_v237;
  typedef gameswf::Self *_g4_t_v238;
  typedef int16_t _g4_t_v239;
  typedef char _g4_t_v240;
  typedef char _g4_t_v241;
  typedef char _g4_t_v242;
  typedef uint8_t _g4_t_v243[3];
  typedef int _g4_t_v244;
  typedef gameswf::Self *_g4_t_v245;
  typedef unsigned int _g4_t_v246;
  typedef char _g4_t_v247;
  typedef char _g4_t_v248;
  typedef gameswf::Self *_g4_t_v249;
  typedef int16_t _g4_t_v250;
  typedef char _g4_t_v251;
  typedef char _g4_t_v252;
  typedef char _g4_t_v253;
  typedef char _g4_t_v254;
  typedef gameswf::Self *_g4_t_v255;
  typedef int16_t _g4_t_v256;
  typedef char _g4_t_v257;
  typedef char _g4_t_v258;
  typedef gameswf::Self *_g4_t_v259[4];
  typedef int16_t _g4_t_v260;
  typedef int16_t _g4_t_v261;
  typedef gameswf::Self *_g4_t_v262[4];
  typedef int16_t _g4_t_v263;
  typedef int16_t _g4_t_v264;
  typedef char _g4_t_v265;
  typedef char _g4_t_v266;
  typedef gameswf::Self *_g4_t_v267;
  typedef int16_t _g4_t_v268;
  typedef char _g4_t_v269;
  typedef char _g4_t_v270;
  typedef uint32_t _g4_t_v271[5];
  typedef uint8_t _g4_t_v272[20];
  typedef uint8_t _g4_t_v273[20];
  typedef uint8_t _g4_t_v274[20];
  typedef gameswf::Self *_g4_t_v275[4];
  typedef int16_t _g4_t_v276;
  typedef int16_t _g4_t_v277;
  typedef gameswf::Self *_g4_t_v278[4];
  typedef int16_t _g4_t_v279;
  typedef int16_t _g4_t_v280;
  typedef gameswf::Self *_g4_t_v281;
  typedef int _g4_t_v282;
  typedef char *_g4_t_v283;
  typedef int16_t _g4_t_v284;
  typedef int16_t _g4_t_v285;
  typedef char _g4_t_v286[4];
  typedef char *_g4_t_v287;
  typedef char *_g4_t_v288;
  typedef unsigned int _g4_t_v289;
  typedef uint8_t _g4_t_v290[20];
  typedef uint8_t _g4_t_v291[20];
  typedef uint8_t _g4_t_v292[20];
  typedef uint8_t _g4_t_v293[20];
  typedef uint8_t _g4_t_v294[20];
  typedef gameswf::Self *_g4_t_v295[3];
  typedef const char *_g4_t_v296;
  typedef int16_t _g4_t_v297;
  typedef char _g4_t_v298;
  typedef char _g4_t_v299;
  typedef uint8_t _g4_t_v300[20];
  typedef uint32_t _g4_t_v301[5];
  typedef int _g4_t_v302;
  typedef int _g4_t_v303;
  typedef int _g4_t_v304;
  typedef const char *_g4_t_v305;
  typedef int _g4_t_v306;
  typedef int _g4_t_v307;
  typedef int _g4_t_v308;
  typedef int _g4_t_v309;
  typedef int _g4_t_v310;
  typedef int _g4_t_v311;
  typedef int _g4_t_v312;
  typedef uint32_t _g4_t_dest[131];
  enum : size_t {
    _g4_s0 = 1488u,
    _g4_s1 = (0u + sizeof(_g4_t_v176)) > _g4_s0 ? (0u + sizeof(_g4_t_v176)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v177)) > _g4_s1 ? (44u + sizeof(_g4_t_v177)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v178)) > _g4_s2 ? (44u + sizeof(_g4_t_v178)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v179)) > _g4_s3 ? (44u + sizeof(_g4_t_v179)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v180)) > _g4_s4 ? (44u + sizeof(_g4_t_v180)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v181)) > _g4_s5 ? (44u + sizeof(_g4_t_v181)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v182)) > _g4_s6 ? (44u + sizeof(_g4_t_v182)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v183)) > _g4_s7 ? (44u + sizeof(_g4_t_v183)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v184)) > _g4_s8 ? (44u + sizeof(_g4_t_v184)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v185)) > _g4_s9 ? (48u + sizeof(_g4_t_v185)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v186)) > _g4_s10 ? (48u + sizeof(_g4_t_v186)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v187)) > _g4_s11 ? (48u + sizeof(_g4_t_v187)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v188)) > _g4_s12 ? (48u + sizeof(_g4_t_v188)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v189)) > _g4_s13 ? (56u + sizeof(_g4_t_v189)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v190)) > _g4_s14 ? (60u + sizeof(_g4_t_v190)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v191)) > _g4_s15 ? (64u + sizeof(_g4_t_v191)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v192)) > _g4_s16 ? (68u + sizeof(_g4_t_v192)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v193)) > _g4_s17 ? (76u + sizeof(_g4_t_v193)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v194)) > _g4_s18 ? (80u + sizeof(_g4_t_v194)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v195)) > _g4_s19 ? (84u + sizeof(_g4_t_v195)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v196)) > _g4_s20 ? (84u + sizeof(_g4_t_v196)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v197)) > _g4_s21 ? (84u + sizeof(_g4_t_v197)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v198)) > _g4_s22 ? (88u + sizeof(_g4_t_v198)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v199)) > _g4_s23 ? (92u + sizeof(_g4_t_v199)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v200)) > _g4_s24 ? (92u + sizeof(_g4_t_v200)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v201)) > _g4_s25 ? (92u + sizeof(_g4_t_v201)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v202)) > _g4_s26 ? (92u + sizeof(_g4_t_v202)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v203)) > _g4_s27 ? (96u + sizeof(_g4_t_v203)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v204)) > _g4_s28 ? (96u + sizeof(_g4_t_v204)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v205)) > _g4_s29 ? (100u + sizeof(_g4_t_v205)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v206)) > _g4_s30 ? (100u + sizeof(_g4_t_v206)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v207)) > _g4_s31 ? (104u + sizeof(_g4_t_v207)) : _g4_s31,
    _g4_s33 = (104u + sizeof(_g4_t_v208)) > _g4_s32 ? (104u + sizeof(_g4_t_v208)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v209)) > _g4_s33 ? (104u + sizeof(_g4_t_v209)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v210)) > _g4_s34 ? (104u + sizeof(_g4_t_v210)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v211)) > _g4_s35 ? (104u + sizeof(_g4_t_v211)) : _g4_s35,
    _g4_s37 = (104u + sizeof(_g4_t_v212)) > _g4_s36 ? (104u + sizeof(_g4_t_v212)) : _g4_s36,
    _g4_s38 = (112u + sizeof(_g4_t_v213)) > _g4_s37 ? (112u + sizeof(_g4_t_v213)) : _g4_s37,
    _g4_s39 = (128u + sizeof(_g4_t_v214)) > _g4_s38 ? (128u + sizeof(_g4_t_v214)) : _g4_s38,
    _g4_s40 = (144u + sizeof(_g4_t_v215)) > _g4_s39 ? (144u + sizeof(_g4_t_v215)) : _g4_s39,
    _g4_s41 = (148u + sizeof(_g4_t_v216)) > _g4_s40 ? (148u + sizeof(_g4_t_v216)) : _g4_s40,
    _g4_s42 = (160u + sizeof(_g4_t_v217)) > _g4_s41 ? (160u + sizeof(_g4_t_v217)) : _g4_s41,
    _g4_s43 = (172u + sizeof(_g4_t_v218)) > _g4_s42 ? (172u + sizeof(_g4_t_v218)) : _g4_s42,
    _g4_s44 = (176u + sizeof(_g4_t_v219)) > _g4_s43 ? (176u + sizeof(_g4_t_v219)) : _g4_s43,
    _g4_s45 = (178u + sizeof(_g4_t_v220)) > _g4_s44 ? (178u + sizeof(_g4_t_v220)) : _g4_s44,
    _g4_s46 = (179u + sizeof(_g4_t_v221)) > _g4_s45 ? (179u + sizeof(_g4_t_v221)) : _g4_s45,
    _g4_s47 = (192u + sizeof(_g4_t_v222)) > _g4_s46 ? (192u + sizeof(_g4_t_v222)) : _g4_s46,
    _g4_s48 = (193u + sizeof(_g4_t_v223)) > _g4_s47 ? (193u + sizeof(_g4_t_v223)) : _g4_s47,
    _g4_s49 = (204u + sizeof(_g4_t_v224)) > _g4_s48 ? (204u + sizeof(_g4_t_v224)) : _g4_s48,
    _g4_s50 = (208u + sizeof(_g4_t_v225)) > _g4_s49 ? (208u + sizeof(_g4_t_v225)) : _g4_s49,
    _g4_s51 = (210u + sizeof(_g4_t_v226)) > _g4_s50 ? (210u + sizeof(_g4_t_v226)) : _g4_s50,
    _g4_s52 = (211u + sizeof(_g4_t_v227)) > _g4_s51 ? (211u + sizeof(_g4_t_v227)) : _g4_s51,
    _g4_s53 = (224u + sizeof(_g4_t_v228)) > _g4_s52 ? (224u + sizeof(_g4_t_v228)) : _g4_s52,
    _g4_s54 = (236u + sizeof(_g4_t_v229)) > _g4_s53 ? (236u + sizeof(_g4_t_v229)) : _g4_s53,
    _g4_s55 = (240u + sizeof(_g4_t_v230)) > _g4_s54 ? (240u + sizeof(_g4_t_v230)) : _g4_s54,
    _g4_s56 = (242u + sizeof(_g4_t_v231)) > _g4_s55 ? (242u + sizeof(_g4_t_v231)) : _g4_s55,
    _g4_s57 = (256u + sizeof(_g4_t_v232)) > _g4_s56 ? (256u + sizeof(_g4_t_v232)) : _g4_s56,
    _g4_s58 = (272u + sizeof(_g4_t_v233)) > _g4_s57 ? (272u + sizeof(_g4_t_v233)) : _g4_s57,
    _g4_s59 = (274u + sizeof(_g4_t_v234)) > _g4_s58 ? (274u + sizeof(_g4_t_v234)) : _g4_s58,
    _g4_s60 = (275u + sizeof(_g4_t_v235)) > _g4_s59 ? (275u + sizeof(_g4_t_v235)) : _g4_s59,
    _g4_s61 = (288u + sizeof(_g4_t_v236)) > _g4_s60 ? (288u + sizeof(_g4_t_v236)) : _g4_s60,
    _g4_s62 = (289u + sizeof(_g4_t_v237)) > _g4_s61 ? (289u + sizeof(_g4_t_v237)) : _g4_s61,
    _g4_s63 = (300u + sizeof(_g4_t_v238)) > _g4_s62 ? (300u + sizeof(_g4_t_v238)) : _g4_s62,
    _g4_s64 = (304u + sizeof(_g4_t_v239)) > _g4_s63 ? (304u + sizeof(_g4_t_v239)) : _g4_s63,
    _g4_s65 = (306u + sizeof(_g4_t_v240)) > _g4_s64 ? (306u + sizeof(_g4_t_v240)) : _g4_s64,
    _g4_s66 = (307u + sizeof(_g4_t_v241)) > _g4_s65 ? (307u + sizeof(_g4_t_v241)) : _g4_s65,
    _g4_s67 = (320u + sizeof(_g4_t_v242)) > _g4_s66 ? (320u + sizeof(_g4_t_v242)) : _g4_s66,
    _g4_s68 = (321u + sizeof(_g4_t_v243)) > _g4_s67 ? (321u + sizeof(_g4_t_v243)) : _g4_s67,
    _g4_s69 = (324u + sizeof(_g4_t_v244)) > _g4_s68 ? (324u + sizeof(_g4_t_v244)) : _g4_s68,
    _g4_s70 = (332u + sizeof(_g4_t_v245)) > _g4_s69 ? (332u + sizeof(_g4_t_v245)) : _g4_s69,
    _g4_s71 = (336u + sizeof(_g4_t_v246)) > _g4_s70 ? (336u + sizeof(_g4_t_v246)) : _g4_s70,
    _g4_s72 = (352u + sizeof(_g4_t_v247)) > _g4_s71 ? (352u + sizeof(_g4_t_v247)) : _g4_s71,
    _g4_s73 = (353u + sizeof(_g4_t_v248)) > _g4_s72 ? (353u + sizeof(_g4_t_v248)) : _g4_s72,
    _g4_s74 = (364u + sizeof(_g4_t_v249)) > _g4_s73 ? (364u + sizeof(_g4_t_v249)) : _g4_s73,
    _g4_s75 = (368u + sizeof(_g4_t_v250)) > _g4_s74 ? (368u + sizeof(_g4_t_v250)) : _g4_s74,
    _g4_s76 = (370u + sizeof(_g4_t_v251)) > _g4_s75 ? (370u + sizeof(_g4_t_v251)) : _g4_s75,
    _g4_s77 = (371u + sizeof(_g4_t_v252)) > _g4_s76 ? (371u + sizeof(_g4_t_v252)) : _g4_s76,
    _g4_s78 = (384u + sizeof(_g4_t_v253)) > _g4_s77 ? (384u + sizeof(_g4_t_v253)) : _g4_s77,
    _g4_s79 = (385u + sizeof(_g4_t_v254)) > _g4_s78 ? (385u + sizeof(_g4_t_v254)) : _g4_s78,
    _g4_s80 = (396u + sizeof(_g4_t_v255)) > _g4_s79 ? (396u + sizeof(_g4_t_v255)) : _g4_s79,
    _g4_s81 = (400u + sizeof(_g4_t_v256)) > _g4_s80 ? (400u + sizeof(_g4_t_v256)) : _g4_s80,
    _g4_s82 = (402u + sizeof(_g4_t_v257)) > _g4_s81 ? (402u + sizeof(_g4_t_v257)) : _g4_s81,
    _g4_s83 = (403u + sizeof(_g4_t_v258)) > _g4_s82 ? (403u + sizeof(_g4_t_v258)) : _g4_s82,
    _g4_s84 = (416u + sizeof(_g4_t_v259)) > _g4_s83 ? (416u + sizeof(_g4_t_v259)) : _g4_s83,
    _g4_s85 = (432u + sizeof(_g4_t_v260)) > _g4_s84 ? (432u + sizeof(_g4_t_v260)) : _g4_s84,
    _g4_s86 = (434u + sizeof(_g4_t_v261)) > _g4_s85 ? (434u + sizeof(_g4_t_v261)) : _g4_s85,
    _g4_s87 = (448u + sizeof(_g4_t_v262)) > _g4_s86 ? (448u + sizeof(_g4_t_v262)) : _g4_s86,
    _g4_s88 = (464u + sizeof(_g4_t_v263)) > _g4_s87 ? (464u + sizeof(_g4_t_v263)) : _g4_s87,
    _g4_s89 = (466u + sizeof(_g4_t_v264)) > _g4_s88 ? (466u + sizeof(_g4_t_v264)) : _g4_s88,
    _g4_s90 = (480u + sizeof(_g4_t_v265)) > _g4_s89 ? (480u + sizeof(_g4_t_v265)) : _g4_s89,
    _g4_s91 = (481u + sizeof(_g4_t_v266)) > _g4_s90 ? (481u + sizeof(_g4_t_v266)) : _g4_s90,
    _g4_s92 = (492u + sizeof(_g4_t_v267)) > _g4_s91 ? (492u + sizeof(_g4_t_v267)) : _g4_s91,
    _g4_s93 = (496u + sizeof(_g4_t_v268)) > _g4_s92 ? (496u + sizeof(_g4_t_v268)) : _g4_s92,
    _g4_s94 = (498u + sizeof(_g4_t_v269)) > _g4_s93 ? (498u + sizeof(_g4_t_v269)) : _g4_s93,
    _g4_s95 = (499u + sizeof(_g4_t_v270)) > _g4_s94 ? (499u + sizeof(_g4_t_v270)) : _g4_s94,
    _g4_s96 = (504u + sizeof(_g4_t_v271)) > _g4_s95 ? (504u + sizeof(_g4_t_v271)) : _g4_s95,
    _g4_s97 = (524u + sizeof(_g4_t_v272)) > _g4_s96 ? (524u + sizeof(_g4_t_v272)) : _g4_s96,
    _g4_s98 = (544u + sizeof(_g4_t_v273)) > _g4_s97 ? (544u + sizeof(_g4_t_v273)) : _g4_s97,
    _g4_s99 = (564u + sizeof(_g4_t_v274)) > _g4_s98 ? (564u + sizeof(_g4_t_v274)) : _g4_s98,
    _g4_s100 = (584u + sizeof(_g4_t_v275)) > _g4_s99 ? (584u + sizeof(_g4_t_v275)) : _g4_s99,
    _g4_s101 = (600u + sizeof(_g4_t_v276)) > _g4_s100 ? (600u + sizeof(_g4_t_v276)) : _g4_s100,
    _g4_s102 = (602u + sizeof(_g4_t_v277)) > _g4_s101 ? (602u + sizeof(_g4_t_v277)) : _g4_s101,
    _g4_s103 = (604u + sizeof(_g4_t_v278)) > _g4_s102 ? (604u + sizeof(_g4_t_v278)) : _g4_s102,
    _g4_s104 = (620u + sizeof(_g4_t_v279)) > _g4_s103 ? (620u + sizeof(_g4_t_v279)) : _g4_s103,
    _g4_s105 = (622u + sizeof(_g4_t_v280)) > _g4_s104 ? (622u + sizeof(_g4_t_v280)) : _g4_s104,
    _g4_s106 = (624u + sizeof(_g4_t_v281)) > _g4_s105 ? (624u + sizeof(_g4_t_v281)) : _g4_s105,
    _g4_s107 = (628u + sizeof(_g4_t_v282)) > _g4_s106 ? (628u + sizeof(_g4_t_v282)) : _g4_s106,
    _g4_s108 = (636u + sizeof(_g4_t_v283)) > _g4_s107 ? (636u + sizeof(_g4_t_v283)) : _g4_s107,
    _g4_s109 = (640u + sizeof(_g4_t_v284)) > _g4_s108 ? (640u + sizeof(_g4_t_v284)) : _g4_s108,
    _g4_s110 = (642u + sizeof(_g4_t_v285)) > _g4_s109 ? (642u + sizeof(_g4_t_v285)) : _g4_s109,
    _g4_s111 = (656u + sizeof(_g4_t_v286)) > _g4_s110 ? (656u + sizeof(_g4_t_v286)) : _g4_s110,
    _g4_s112 = (660u + sizeof(_g4_t_v287)) > _g4_s111 ? (660u + sizeof(_g4_t_v287)) : _g4_s111,
    _g4_s113 = (668u + sizeof(_g4_t_v288)) > _g4_s112 ? (668u + sizeof(_g4_t_v288)) : _g4_s112,
    _g4_s114 = (672u + sizeof(_g4_t_v289)) > _g4_s113 ? (672u + sizeof(_g4_t_v289)) : _g4_s113,
    _g4_s115 = (684u + sizeof(_g4_t_v290)) > _g4_s114 ? (684u + sizeof(_g4_t_v290)) : _g4_s114,
    _g4_s116 = (704u + sizeof(_g4_t_v291)) > _g4_s115 ? (704u + sizeof(_g4_t_v291)) : _g4_s115,
    _g4_s117 = (724u + sizeof(_g4_t_v292)) > _g4_s116 ? (724u + sizeof(_g4_t_v292)) : _g4_s116,
    _g4_s118 = (744u + sizeof(_g4_t_v293)) > _g4_s117 ? (744u + sizeof(_g4_t_v293)) : _g4_s117,
    _g4_s119 = (764u + sizeof(_g4_t_v294)) > _g4_s118 ? (764u + sizeof(_g4_t_v294)) : _g4_s118,
    _g4_s120 = (784u + sizeof(_g4_t_v295)) > _g4_s119 ? (784u + sizeof(_g4_t_v295)) : _g4_s119,
    _g4_s121 = (796u + sizeof(_g4_t_v296)) > _g4_s120 ? (796u + sizeof(_g4_t_v296)) : _g4_s120,
    _g4_s122 = (800u + sizeof(_g4_t_v297)) > _g4_s121 ? (800u + sizeof(_g4_t_v297)) : _g4_s121,
    _g4_s123 = (802u + sizeof(_g4_t_v298)) > _g4_s122 ? (802u + sizeof(_g4_t_v298)) : _g4_s122,
    _g4_s124 = (803u + sizeof(_g4_t_v299)) > _g4_s123 ? (803u + sizeof(_g4_t_v299)) : _g4_s123,
    _g4_s125 = (808u + sizeof(_g4_t_v300)) > _g4_s124 ? (808u + sizeof(_g4_t_v300)) : _g4_s124,
    _g4_s126 = (828u + sizeof(_g4_t_v301)) > _g4_s125 ? (828u + sizeof(_g4_t_v301)) : _g4_s125,
    _g4_s127 = (848u + sizeof(_g4_t_v302)) > _g4_s126 ? (848u + sizeof(_g4_t_v302)) : _g4_s126,
    _g4_s128 = (852u + sizeof(_g4_t_v303)) > _g4_s127 ? (852u + sizeof(_g4_t_v303)) : _g4_s127,
    _g4_s129 = (856u + sizeof(_g4_t_v304)) > _g4_s128 ? (856u + sizeof(_g4_t_v304)) : _g4_s128,
    _g4_s130 = (860u + sizeof(_g4_t_v305)) > _g4_s129 ? (860u + sizeof(_g4_t_v305)) : _g4_s129,
    _g4_s131 = (864u + sizeof(_g4_t_v306)) > _g4_s130 ? (864u + sizeof(_g4_t_v306)) : _g4_s130,
    _g4_s132 = (868u + sizeof(_g4_t_v307)) > _g4_s131 ? (868u + sizeof(_g4_t_v307)) : _g4_s131,
    _g4_s133 = (872u + sizeof(_g4_t_v308)) > _g4_s132 ? (872u + sizeof(_g4_t_v308)) : _g4_s132,
    _g4_s134 = (876u + sizeof(_g4_t_v309)) > _g4_s133 ? (876u + sizeof(_g4_t_v309)) : _g4_s133,
    _g4_s135 = (880u + sizeof(_g4_t_v310)) > _g4_s134 ? (880u + sizeof(_g4_t_v310)) : _g4_s134,
    _g4_s136 = (884u + sizeof(_g4_t_v311)) > _g4_s135 ? (884u + sizeof(_g4_t_v311)) : _g4_s135,
    _g4_s137 = (888u + sizeof(_g4_t_v312)) > _g4_s136 ? (888u + sizeof(_g4_t_v312)) : _g4_s136,
    _g4_s138 = (896u + sizeof(_g4_t_dest)) > _g4_s137 ? (896u + sizeof(_g4_t_dest)) : _g4_s137
  };
  alignas(16) uint8_t _g4_sf[_g4_s138];
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 0u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 44u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 44u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 44u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 44u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 44u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 44u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 44u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 44u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 48u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 48u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 48u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 48u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 56u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 60u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 64u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 68u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 76u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 80u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 84u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 84u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 84u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 88u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 92u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 92u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 92u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 92u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 96u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 96u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 100u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 100u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 104u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 104u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 104u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 104u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 104u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 104u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 112u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 128u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 144u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 148u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 160u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 172u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 176u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 178u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 179u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 192u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 193u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 204u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 208u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 210u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 211u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 224u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 236u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 240u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 242u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 256u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 272u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 274u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 275u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 288u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 289u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 300u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 304u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 306u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 307u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 320u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 321u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 324u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 332u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 336u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 352u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 353u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 364u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 368u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 370u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 371u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 384u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 385u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 396u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 400u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 402u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 403u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 416u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 432u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 434u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 448u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 464u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 466u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 480u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 481u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 492u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 496u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 498u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 499u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 504u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 524u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 544u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 564u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 584u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 600u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 602u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 604u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 620u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 622u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 624u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 628u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 636u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 640u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 642u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 656u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 660u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 668u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 672u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 684u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 704u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 724u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 744u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 764u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 784u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 796u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 800u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 802u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 803u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 808u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 828u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 848u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 852u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 856u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 860u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 864u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 868u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 872u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 876u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 880u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 884u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 888u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 896u);

  v3 = *((uint8_t *)a3 + 488);
  if ( v3 == -1 )
    result = *((uint32_t *)a3 + 123) - 1;
  else
    result = v3 - 1;
  if ( result == 0 )
    return result;
  gameswf::String::resize((gameswf::EditTextCharacter::Self *)((char *)a3 + 468), 0);
  LOBYTE(v5) = *((uint8_t *)a3 + 468);
  if ( (uint8_t)(uintptr_t)v5 == 0xFF )
  {
    v5 = *((char **)a3 + 118);
    v6 = *((gameswf::Self **)a3 + 120);
  }
  else
  {
    v5 = (char *)(char)(uintptr_t)v5;
    v6 = (gameswf::Self *)((gameswf::EditTextCharacter::Self *)((char *)a3 + 469));
  }
  gameswf::Strcpy_s(v6, v5, (gameswf::Self *)&unk_1B15112);
  *((uint32_t *)a3 + 121) |= 0x7FFFFFu;
  v190 = *((uint32_t *)a3 + 156);
  v195 = *((uint8_t *)a3 + 584);
  v216[0] = 0;
  v216[1] = 0;
  v199 = *((uint8_t *)a3 + 586);
  v198 = *((uint8_t *)a3 + 585);
  v7 = *((gameswf::RefCounted::Self **)a3 + 148);
  v207 = *((uint8_t *)a3 + 587);
  v191 = v7;
  if ( v7 != nullptr )
    gameswf::RefCounted::addRef(v7);
  v205 = *((float *)a3 + 147);
  v8 = *((uint32_t *)self + 2);
  v203 = *((uint32_t *)a3 + 149);
  v9 = *((uint32_t *)self + 1);
  v10 = v9 + 1;
  if ( v9 + 1 <= v8 || *((uint32_t *)self + 3) != 0 )
  {
    v11 = *(char **)self;
  }
  else
  {
    v109 = v10 + (v10 >> 1);
    *((uint32_t *)self + 2) = v109;
    if ( v109 != 0 )
    {
      if ( *(uint32_t *)self != 0 )
        v11 = (char *)gameswf::realloc_internal(*(gameswf::Self **)self, 44 * v109, 44 * v8);
      else
        v11 = (char *)gameswf::malloc_internal(44 * v109);
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v11);
      v9 = *((uint32_t *)self + 1);
    }
    else
    {
      if ( *(uint32_t *)self != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)self);
        v9 = *((uint32_t *)self + 1);
      }
      *(uint32_t *)self = 0;
      v11 = nullptr;
    }
  }
  v12 = &v11[44 * v9];
  if ( v12 != nullptr )
  {
    *(uint32_t *)v12 = (uint32_t)(uintptr_t)(v191);
    if ( v191 != nullptr )
      gameswf::RefCounted::addRef(v191);
    *((uint32_t *)v12 + 1) = (int)v205;
    v12[8] = v195;
    v12[9] = v198;
    v12[10] = v199;
    *(uint16_t *)(v12 + 11) = v207;
    v12[13] = 1;
    *((uint32_t *)v12 + 4) = 0;
    *((uint32_t *)v12 + 5) = 0;
    *((uint32_t *)v12 + 6) = 0;
    *((uint32_t *)v12 + 7) = 0;
    *((uint32_t *)v12 + 8) = 0;
    *((uint32_t *)v12 + 9) = v203;
    *((uint32_t *)v12 + 10) = 0;
  }
  *((uint32_t *)self + 1) = v10;
  LOBYTE(v13) = *((uint8_t *)a3 + 488);
  if ( (uint8_t)v13 == 0xFF )
    v193 = *((char **)a3 + 125);
  else
    v193 = (char *)a3 + 489;
  v14 = 0;
  v189 = 0;
LABEL_17:
  v15 = (char)v13 - 1;
  if ( (uint8_t)v13 == 0xFF )
    goto LABEL_52;
  while ( v14 < v15 )
  {
    v16 = &v193[v14];
    if ( v193[v14] == 60 )
    {
      v178 = v13;
      v192 = strchr(&v193[v14], 62);
      LOBYTE(v13) = v178;
      if ( v192 == nullptr )
        break;
      v40 = v14 + 1;
      v41 = v178 - 1;
      if ( v178 == -1 )
        v41 = *((uint32_t *)a3 + 123) - 1;
      if ( v40 >= v41 )
        break;
      if ( v193[v40] == 47 )
      {
        v42 = *((uint32_t *)self + 1);
        if ( v42 > 1 )
        {
          gameswf::array_gameswf_TextAttributes_8af716::resize(self, v42 - 1);
          LOBYTE(v13) = *((uint8_t *)a3 + 488);
        }
LABEL_77:
        v14 = v192 - v193 + 1;
        goto LABEL_17;
      }
      memset(dest, 0, 0x200u);
      memcpy(dest, &v193[v40], v192 - v16 - 1);
      v214[0] = nullptr;
      if ( LOBYTE(dest[0]) != 47 )
      {
        v43 = (char *)(strchr((const char *)dest, 32));
        if ( v43 == nullptr )
        {
          v43 = (char *)(strchr((const char *)dest, 47));
          if ( v43 == nullptr )
            v43 = (char *)dest + strlen((const char *)dest);
        }
        v44 = v43 - (char *)dest;
        v45 = (char *)&v281 + 1;
        LOWORD(v281) = 1;
        gameswf::String::resize((gameswf::String::Self *)&v281, v43 - (char *)dest);
        v46 = (char *)&v281 + 1;
        if ( (uint8_t)(uintptr_t)(v281) == 0xFF )
          v46 = v283;
        memcpy(v46, dest, v44);
        if ( (uint8_t)(uintptr_t)(v281) == 0xFF )
          v45 = v283;
        v45[v44] = 0;
        v284 = -1;
        v265 = 1;
        LOBYTE(v285) = 127;
        HIBYTE(v285) |= 1u;
        v266 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v265, 4);
        v47 = (gameswf::Self *)&v266;
        if ( v265 == -1 )
          v47 = v267;
        gameswf::Strcpy_s(v47, (char *)&loc_4 + 1, (gameswf::Self *)"name");
        v268 = -1;
        v269 = 127;
        v270 |= 1u;
        index = gameswf::hash_gameswf_StringI_gameswf_a0f678::find_index(
                  (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
                  (const gameswf::StringI::Self *)&v265);
        if ( index < 0 )
          gameswf::hash_gameswf_StringI_gameswf_a0f678::add(
            v214,
            (const gameswf::StringI::Self *)&v265,
            (const gameswf::String::Self *)&v281);
        else
          gameswf::String::opAssign((gameswf::Self **)v214[0] + 12 * index + 9, &v281);
        sub_59CE50((int)(uintptr_t)(&v265));
        v49 = (char *)(strchr((const char *)dest, 61));
        if ( v49 != nullptr )
        {
          do
          {
            v50 = v49;
            v51 = v49;
            if ( *v49 == 32 )
            {
              do
                --v50;
              while ( *v50 == 32 );
              v51 = v49;
            }
            else
            {
              do
                --v51;
              while ( *v51 != 32 );
              v50 = v49;
            }
            v179 = v49;
            v185 = strchr(v49, 34);
            v52 = (char *)(strchr(v179, 39));
            v53 = v52;
            if ( v52 == nullptr && v185 == nullptr )
              break;
            if ( v52 != nullptr )
            {
              if ( v185 != nullptr && v52 > v185 )
                v53 = v185;
            }
            else
            {
              v53 = v185;
            }
            v180 = v53;
            v209 = v53 + 1;
            v201 = strchr(v53 + 1, *v53);
            v54 = v180;
            if ( v201 == nullptr )
              break;
            v286[0] = 1;
            v286[1] = 0;
            if ( v51 != (char *)-1 )
            {
              v55 = v50 - v51;
              gameswf::String::resize((gameswf::String::Self *)v286, v55 - 1);
              v56 = &v286[1];
              if ( v286[0] == -1 )
                v56 = v288;
              memcpy(v56, v51 + 1, v55 - 1);
              v57 = &v286[1];
              if ( v286[0] == -1 )
                v57 = v288;
              v57[v55 - 1] = 0;
              v54 = v180;
            }
            LOWORD(v295[0]) = 1;
            LOWORD(v289) = -1;
            HIBYTE(v289) = ((uint16_t)(HIWORD(v289) | 0x7F) >> 8) | 1;
            BYTE2(v289) = 127;
            if ( v209 != nullptr )
            {
              v58 = (char *)(v201 - v54);
              v59 = (char *)v295 + 1;
              v186 = v201 - v54 - 1;
              gameswf::String::resize((gameswf::String::Self *)v295, v186);
              v60 = (char *)v295 + 1;
              if ( LOBYTE(v295[0]) == 0xFF )
                v60 = (char *)v296;
              memcpy(v60, v209, v186);
              if ( LOBYTE(v295[0]) == 0xFF )
                v59 = (char *)v296;
              v58[(uint32_t)(uintptr_t)(v59) - 1] = 0;
            }
            v297 = -1;
            v298 = 127;
            v299 |= 1u;
            if ( v214[0] == nullptr )
              goto LABEL_149;
            if ( (uint8_t *)(v289 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
            {
              if ( v286[0] == -1 )
              {
                v82 = v288;
                v83 = (int)(uintptr_t)(v287 - 1);
              }
              else
              {
                v82 = &v286[1];
                v83 = v286[0] - 1;
              }
              v61 = 5381;
              v84 = 5381;
              if ( v83 > 0 )
              {
                do
                {
                  --v83;
                  v85 = 33 * v84;
                  v86 = (uint8_t)v82[v83] + 32;
                  if ( (uint8_t)(v82[v83] - 65) > 0x19u )
                    v86 = (uint8_t)v82[v83];
                  v84 = v85 ^ v86;
                }
                while ( v83 != 0 );
                v84 = v84 << 9 >> 9;
                v61 = v84;
              }
              v289 = v84 & 0x7FFFFF | v289 & 0xFF800000;
            }
            else
            {
              v61 = (int)(v289 << 9) >> 9;
            }
            v210 = *((uint32_t *)v214[0] + 1);
            v62 = 48 * (v61 & v210);
            v63 = (char *)v214[0] + v62 + 8;
            if ( *(uint32_t *)v63 == -2 )
              goto LABEL_149;
            v64 = *(uint32_t *)((char *)v214[0] + v62 + 12);
            if ( (v61 & v210) != (v64 & v210) )
              goto LABEL_149;
            v65 = v61;
            v66 = v61 & v210;
            v67 = v65;
            while ( 1 )
            {
              if ( v64 == v67 )
              {
                if ( v286 == v63 + 8 )
                  break;
                v68 = (gameswf::String::Self *)(v63 + 9);
                v69 = &v286[1];
                if ( v286[0] == -1 )
                  v69 = v288;
                if ( v63[8] == -1 )
                  v68 = *((gameswf::String::Self **)v63 + 5);
                v181 = v67;
                v70 = gameswf::String::stricmp(v68, v69);
                v67 = v181;
                if ( v70 == 0 )
                  break;
              }
              v66 = *(uint32_t *)v63;
              if ( *(uint32_t *)v63 == -1 )
                goto LABEL_149;
              v63 = (char *)v214[0] + 48 * v66 + 8;
              v64 = *((uint32_t *)v63 + 1);
            }
            if ( v66 >= 0 )
              gameswf::String::opAssign((gameswf::Self **)v214[0] + 12 * v66 + 9, v295);
            else
LABEL_149:
              gameswf::hash_gameswf_StringI_gameswf_a0f678::add(
                v214,
                (const gameswf::StringI::Self *)v286,
                (const gameswf::String::Self *)v295);
            v182 = strchr(v201, 61);
            sub_59CE50((int)(uintptr_t)(v295));
            sub_59CE50((int)(uintptr_t)(v286));
            v49 = v182;
          }
          while ( v182 != nullptr );
        }
        sub_59CE50((int)(uintptr_t)(&v281));
      }
      v302 = 0;
      v303 = 12;
      v304 = 0x1000000;
      LOWORD(v305) = 256;
      v71 = *((uint32_t *)self + 1);
      v306 = 0;
      v72 = *(uint32_t *)self + 44 * (v71 - 1);
      v307 = 0;
      v308 = 0;
      v309 = 0;
      v310 = 0;
      v311 = 0;
      v312 = 0;
      v73 = *(gameswf::RefCounted::Self **)v72;
      if ( *(uint32_t *)v72 != 0 )
      {
        v302 = *(uint32_t *)v72;
        gameswf::RefCounted::addRef(v73);
      }
      v74 = *(uint32_t *)(v72 + 4);
      LOWORD(v217[0]) = 1;
      v303 = v74;
      v304 = *(uint32_t *)(v72 + 8);
      v222 = 1;
      LOWORD(v305) = *(uint16_t *)(v72 + 12);
      v306 = *(uint32_t *)(v72 + 16);
      v307 = *(uint32_t *)(v72 + 20);
      v308 = *(uint32_t *)(v72 + 24);
      v309 = *(uint32_t *)(v72 + 28);
      v310 = *(uint32_t *)(v72 + 32);
      v311 = *(uint32_t *)(v72 + 36);
      v312 = *(uint32_t *)(v72 + 40);
      v219 = -1;
      v223 = 0;
      v220 = 127;
      v221 |= 1u;
      gameswf::String::resize((gameswf::String::Self *)&v222, 4);
      v75 = (gameswf::Self *)&v223;
      if ( v222 == -1 )
        v75 = v224;
      v76 = 0;
      gameswf::Strcpy_s(v75, (char *)&loc_4 + 1, (gameswf::Self *)"name");
      v225 = -1;
      v226 = 127;
      v227 |= 1u;
      v77 = gameswf::hash_gameswf_StringI_gameswf_a0f678::find_index(
              (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
              (const gameswf::StringI::Self *)&v222);
      if ( v77 >= 0 )
      {
        v76 = 1;
        gameswf::String::opAssign(v217, (gameswf::Self **)v214[0] + 12 * v77 + 9);
      }
      sub_59CE50((int)(uintptr_t)(&v222));
      if ( v76 == 0 )
      {
LABEL_134:
        sub_59CE50((int)(uintptr_t)(v217));
        if ( v302 != 0 )
          gameswf::RefCounted::dropRef((gameswf::RefCounted::Self *)v302);
        v78 = (gameswf::Self *)(v214[0]);
        if ( v214[0] != nullptr )
        {
          if ( *((int *)v214[0] + 1) >= 0 )
          {
            v79 = 8;
            v80 = 0;
            v211 = *((uint32_t *)v214[0] + 1);
            do
            {
              v81 = (uint32_t *)((char *)v78 + v79);
              if ( *(uint32_t *)((char *)v78 + v79) != -2 )
              {
                v187 = v79;
                sub_59CE50((int)(uintptr_t)(v81 + 2));
                sub_59CE50((int)(uintptr_t)(v81 + 7));
                *v81 = -2;
                v81[1] = 0;
                v78 = (gameswf::Self *)(v214[0]);
                v79 = v187;
              }
              ++v80;
              v79 += 48;
            }
            while ( v211 >= v80 );
          }
          gameswf::free_internal(v78);
          v214[0] = nullptr;
          LOBYTE(v13) = *((uint8_t *)a3 + 488);
        }
        else
        {
          v13 = *((uint8_t *)a3 + 488);
        }
        goto LABEL_77;
      }
      LOWORD(v228[0]) = 1;
      v230 = -1;
      LOWORD(v232[0]) = 1;
      HIBYTE(v231) = ((uint16_t)(v231 | 0x7F) >> 8) | 1;
      LOBYTE(v231) = 127;
      v233 = -1;
      v234 = 127;
      v235 |= 1u;
      v236 = 1;
      v237 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v236, 5);
      v87 = (gameswf::Self *)&v237;
      if ( v236 == -1 )
        v87 = v238;
      v88 = false;
      gameswf::Strcpy_s(v87, (char *)&loc_6, (gameswf::Self *)"class");
      v239 = -1;
      v240 = 127;
      v241 |= 1u;
      v89 = gameswf::hash_gameswf_StringI_gameswf_a0f678::find_index(
              (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
              (const gameswf::StringI::Self *)&v236);
      if ( v89 >= 0 )
      {
        gameswf::String::opAssign(v228, (gameswf::Self **)v214[0] + 12 * v89 + 9);
        v88 = v190 != 0;
      }
      sub_59CE50((int)(uintptr_t)(&v236));
      if ( v88 )
      {
        if ( LOBYTE(v228[0]) != 0xFF )
        {
          v242 = 1;
          v243[0] = 0;
          v90 = (char *)v228 + 1;
          goto LABEL_169;
        }
        v90 = v229;
        v242 = 1;
        v243[0] = 0;
        v94 = &v242;
        if ( v229 != nullptr )
        {
LABEL_169:
          v91 = strlen(v90);
          v92 = (char *)(v91 + 1);
          gameswf::String::resize((gameswf::String::Self *)&v242, v91);
          v93 = (gameswf::Self *)v243;
          if ( v242 == -1 )
            v93 = v245;
          gameswf::Strcpy_s(v93, v92, (gameswf::Self *)v90);
          v94 = &v242;
        }
        LOWORD(v246) = -1;
        BYTE2(v246) = 127;
        HIBYTE(v246) |= 1u;
        v95 = *(uint32_t *)(v190 + 40);
        if ( v95 == 0 )
          goto LABEL_176;
        v212 = -1;
        if ( (uint8_t *)(v246 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( v242 == -1 )
          {
            v144 = v245;
            v145 = v244 - 1;
          }
          else
          {
            v144 = (gameswf::Self *)v243;
            v145 = v242 - 1;
          }
          v212 = 5381;
          v146 = 5381;
          if ( v145 > 0 )
          {
            do
            {
              --v145;
              v202 = 33 * v146;
              v147 = *((uint8_t *)v144 + v145) + 32;
              if ( (uint8_t)(*((uint8_t *)v144 + v145) - 65) > 0x19u )
                v147 = *((uint8_t *)v144 + v145);
              v146 = v202 ^ v147;
            }
            while ( v145 != 0 );
            v146 = v146 << 9 >> 9;
            v212 = v146;
          }
          v246 = v146 & 0x7FFFFF | v246 & 0xFF800000;
        }
        v96 = *(uint32_t *)(v95 + 4);
        v97 = v96 & v212;
        v98 = v95 + 32 * (v96 & v212) + 8;
        if ( *(uint32_t *)v98 == -2 )
          goto LABEL_176;
        v99 = *(uint32_t *)(v98 + 4);
        if ( v97 != (v99 & v96) )
          goto LABEL_176;
        while ( 1 )
        {
          if ( v212 == v99 )
          {
            if ( v94 == (char *)(v98 + 8) )
              break;
            v141 = (char *)(v243);
            if ( *v94 == -1 )
              v141 = (char *)v245;
            v142 = (gameswf::String::Self *)(v98 + 9);
            if ( *(uint8_t *)(v98 + 8) == 0xFF )
              v142 = *(gameswf::String::Self **)(v98 + 20);
            v184 = v94;
            v143 = gameswf::String::stricmp(v142, v141);
            v94 = v184;
            if ( v143 == 0 )
              break;
          }
          v97 = *(uint32_t *)v98;
          if ( *(uint32_t *)v98 == -1 )
            goto LABEL_176;
          v98 = *(uint32_t *)(v190 + 40) + 32 * v97 + 8;
          v99 = *(uint32_t *)(v98 + 4);
        }
        v100 = (int *)(v190 + 40);
        if ( v97 < 0 )
        {
LABEL_176:
          v97 = 0;
          v100 = nullptr;
        }
        sub_59CE50((int)(uintptr_t)(v94));
        if ( v100 != nullptr )
        {
          v101 = *v100;
          if ( *v100 != 0 && *(uint32_t *)(v101 + 4) >= v97 )
            gameswf::html_reader::setAttributesFromStyle(
              (int)(uintptr_t)(self),
              *((gameswf::Player::Self **)a3 + 4),
              (int)(uintptr_t)(&v302),
              (int *)(v101 + 32 * v97 + 36));
        }
      }
      else
      {
        v247 = 1;
        v248 = 0;
        gameswf::String::resize((gameswf::String::Self *)&v247, 3);
        v117 = (gameswf::Self *)&v248;
        if ( v247 == -1 )
          v117 = v249;
        v118 = 0;
        gameswf::Strcpy_s(v117, (char *)&loc_4, (gameswf::Self *)"dir");
        v250 = -1;
        v251 = 127;
        v252 |= 1u;
        v119 = gameswf::hash_gameswf_StringI_gameswf_a0f678::find_index(
                 (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
                 (const gameswf::StringI::Self *)&v247);
        if ( v119 >= 0 )
        {
          v118 = 1;
          gameswf::String::opAssign(v232, (gameswf::Self **)v214[0] + 12 * v119 + 9);
        }
        sub_59CE50((int)(uintptr_t)(&v247));
        if ( v118 != 0 )
        {
          v120 = (gameswf::String::Self *)((char *)v232 + 1);
          if ( LOBYTE(v232[0]) == 0xFF )
            v120 = (gameswf::String::Self *)(v232[3]);
          BYTE1(v305) = gameswf::String::stricmp(v120, "rtl") != 0;
        }
      }
      v102 = (char *)v217 + 1;
      if ( LOBYTE(v217[0]) == 0xFF )
        v102 = v218;
      if ( strcmp(v102, "p") != 0 )
      {
        v110 = (char *)v217 + 1;
        if ( LOBYTE(v217[0]) == 0xFF )
          v110 = v218;
        if ( strcmp(v110, "span") != 0 )
        {
          v111 = (char *)v217 + 1;
          if ( LOBYTE(v217[0]) == 0xFF )
            v111 = v218;
          if ( strcmp(v111, "font") == 0 )
          {
            LOWORD(v295[0]) = 1;
            v297 = -1;
            v298 = 127;
            v299 |= 1u;
            sub_776320((gameswf::String::Self *)v272, (gameswf::Self *)"face");
            v125 = 0;
            v126 = gameswf::hash_gameswf_StringI_gameswf_a0f678::find_index(
                     (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
                     (const gameswf::StringI::Self *)v272);
            if ( v126 >= 0 )
            {
              v125 = 1;
              gameswf::String::opAssign(v295, (gameswf::Self **)v214[0] + 12 * v126 + 9);
            }
            sub_59CE50((int)(uintptr_t)(v272));
            if ( v125 != 0 )
            {
              v161 = *((gameswf::Player::Self **)a3 + 4);
              v162 = (gameswf::Self **)opNew(0x84u);
              gameswf::Font::Construct((gameswf::Font::Self *)v162, v161);
              gameswf::Font::copyFrom((gameswf::Font::Self *)v162, (gameswf::Font::Self *)v302);
              gameswf::String::opAssign(v162 + 11, v295);
              gameswf::smart_ptr_gameswf_Font_623e9a::set_ref((gameswf::RefCounted::Self **)&v302, (gameswf::Font::Self *)v162);
            }
            LOWORD(v281) = 1;
            v284 = -1;
            LOBYTE(v285) = 127;
            HIBYTE(v285) |= 1u;
            sub_776320((gameswf::String::Self *)v273, (gameswf::Self *)"color");
            v127 = gameswf::hash_gameswf_StringI_gameswf_a0f678::find_index(
                     (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
                     (const gameswf::StringI::Self *)v273);
            if ( v127 < 0
              || ((gameswf::String::opAssign(&v281, (gameswf::Self **)v214[0] + 12 * v127 + 9), (uint8_t)(uintptr_t)(v281) == 0xFF)
                ? (v128 = v282 - 1)
                : (v128 = (char)(uintptr_t)(v281) - 1),
                  v129 = 1,
                  v128 <= 0) )
            {
              v129 = 0;
            }
            sub_59CE50((int)(uintptr_t)(v273));
            if ( v129 != 0 )
            {
              v130 = (char *)&v281 + 1;
              v131 = (char *)&v281 + 1;
              if ( (uint8_t)(uintptr_t)(v281) == 0xFF )
                v131 = v283;
              if ( *v131 == 35 )
              {
                v156 = (char)(uintptr_t)(v281) - 1;
                if ( (uint8_t)(uintptr_t)(v281) == 0xFF )
                  v156 = v282 - 1;
                v157 = v156 - 1;
                if ( v156 - 1 <= 0 )
                {
                  LOBYTE(v173) = 0;
                  LOBYTE(v174) = 0;
                  LOBYTE(v175) = 0;
                }
                else
                {
                  v158 = (char *)&v281 + 1;
                  if ( (uint8_t)(uintptr_t)(v281) == 0xFF )
                    v158 = v283;
                  v197 = 0;
                  v159 = -16777216;
                  do
                  {
                    v160 = v158[v157];
                    if ( v160 <= 0xFF )
                      LOWORD(v160) = *(uint16_t *)(tolower_tab_ + 2 * v160 + 2);
                    if ( (uint8_t)(v160 - 48) <= 9u )
                    {
                      v159 |= ((char)v160 - 48) << v197;
                    }
                    else if ( (uint8_t)(v160 - 97) <= 5u )
                    {
                      v159 |= ((char)v160 - 87) << v197;
                    }
                    v197 += 4;
                    --v157;
                  }
                  while ( v157 != 0 );
                  v173 = (int)(double)v159;
                  v175 = HIWORD(v173);
                  v174 = v173 >> 8;
                }
                LOBYTE(v304) = v175;
                BYTE1(v304) = v174;
                BYTE2(v304) = v173;
                HIBYTE(v304) = -1;
              }
              else
              {
                if ( (uint8_t)(uintptr_t)(v281) == 0xFF )
                  v130 = v283;
                v132 = atoi(v130);
                HIBYTE(v304) = -1;
                v133 = (double)(int)(v132 | 0xFF000000);
                BYTE2(v304) = (int)v133;
                LOBYTE(v304) = (unsigned int)(int)v133 >> 16;
                BYTE1(v304) = (uint16_t)(int)v133 >> 8;
              }
            }
            v286[0] = 1;
            LOWORD(v289) = -1;
            v286[1] = 0;
            BYTE2(v289) = 127;
            HIBYTE(v289) |= 1u;
            sub_776320((gameswf::String::Self *)v274, (gameswf::Self *)"size");
            v134 = gameswf::hash_gameswf_StringI_gameswf_a0f678::find_index(
                     (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
                     (const gameswf::StringI::Self *)v274);
            v135 = 0;
            if ( v134 >= 0 )
            {
              gameswf::String::opAssign((gameswf::Self **)v286, (gameswf::Self **)v214[0] + 12 * v134 + 9);
              v135 = 1;
            }
            v183 = v135;
            sub_59CE50((int)(uintptr_t)(v274));
            if ( v183 != 0 )
            {
              v136 = &v286[1];
              v137 = &v286[1];
              if ( v286[0] == -1 )
                v137 = v288;
              v206 = v286[0];
              if ( strchr(v137, 37) != nullptr )
              {
                if ( v206 == -1 )
                {
                  v138 = v287;
                  v136 = v288;
                  v139 = (int)(uintptr_t)(v287 - 2);
                  v140 = &v287[(uint32_t)(uintptr_t)(v288) - 1];
                }
                else
                {
                  v138 = (char *)v206;
                  v139 = v206 - 2;
                  v140 = &v286[v206];
                }
                gameswf::Strcpy_s((gameswf::Self *)&v136[v139], v138, (gameswf::Self *)v140);
                if ( v286[0] == -1 )
                  v153 = (int)(uintptr_t)(v287 - 1);
                else
                  v153 = v286[0] - 1;
                gameswf::String::resize((gameswf::String::Self *)v286, v153 - 1);
                v289 |= 0x7FFFFFu;
                v155 = &v286[1];
                if ( v286[0] == -1 )
                  v155 = v288;
                v154 = *(uint32_t *)(*(uint32_t *)self + 44 * (*((uint32_t *)self + 1) - 1) + 4);
                v303 = atoi(v155) * v154 / 100;
              }
              else
              {
                if ( v206 == -1 )
                {
                  v136 = v288;
                  v148 = strchr(v288, 43);
                }
                else
                {
                  v148 = strchr(&v286[1], 43);
                }
                if ( v148 == v136 )
                {
                  v172 = &v286[1];
                  if ( v206 == -1 )
                    v172 = v288;
                  v171 = *(uint32_t *)(*(uint32_t *)self + 44 * (*((uint32_t *)self + 1) - 1) + 4);
                  v303 = v171 + (int)(float)atoi(v172 + 1);
                }
                else
                {
                  if ( v206 == -1 )
                  {
                    v149 = v288;
                    v150 = strchr(v288, 45);
                  }
                  else
                  {
                    v149 = &v286[1];
                    v150 = strchr(&v286[1], 45);
                  }
                  if ( v150 == v149 )
                  {
                    v170 = &v286[1];
                    if ( v206 == -1 )
                      v170 = v288;
                    v169 = *(uint32_t *)(*(uint32_t *)self + 44 * (*((uint32_t *)self + 1) - 1) + 4);
                    v303 = v169 - (int)(float)atoi(v170 + 1);
                  }
                  else
                  {
                    v151 = &v286[1];
                    if ( v206 == -1 )
                      v151 = v288;
                    if ( atoi(v151) > 0 )
                    {
                      v152 = &v286[1];
                      if ( v286[0] == -1 )
                        v152 = v288;
                      v303 = (int)(float)atoi(v152);
                    }
                  }
                }
              }
            }
            gameswf::array_gameswf_TextAttributes_8af716::push_back_gameswf_TextAttributes_8f9e3b((int)(uintptr_t)(self), (int)(uintptr_t)(&v302));
            sub_59CE50((int)(uintptr_t)(v286));
            sub_59CE50((int)(uintptr_t)(&v281));
            sub_59CE50((int)(uintptr_t)(v295));
            goto LABEL_232;
          }
          v112 = (char *)v217 + 1;
          if ( LOBYTE(v217[0]) == 0xFF )
            v112 = v218;
          if ( strcmp(v112, "b") == 0 )
          {
            v124 = *((gameswf::Player::Self **)a3 + 4);
            v122 = (gameswf::Font::Self *)opNew(0x84u);
            gameswf::Font::Construct(v122, v124);
            gameswf::Font::copyFrom(v122, (gameswf::Font::Self *)v302);
            *((uint8_t *)v122 + 73) = 1;
            v123 = (gameswf::RefCounted::Self *)v302;
            if ( v122 == (gameswf::Font::Self *)v302 )
              goto LABEL_252;
          }
          else
          {
            v113 = (char *)v217 + 1;
            if ( LOBYTE(v217[0]) == 0xFF )
              v113 = v218;
            if ( strcmp(v113, "i") != 0 )
            {
              v114 = (char *)v217 + 1;
              if ( LOBYTE(v217[0]) == 0xFF )
                v114 = v218;
              if ( strcmp(v114, "u") != 0 )
              {
                v115 = (char *)v217 + 1;
                if ( LOBYTE(v217[0]) == 0xFF )
                  v115 = v218;
                if ( strcmp(v115, (const char *)&off_1B1FE25) == 0 )
                {
                  LOWORD(v275[0]) = 1;
                  v276 = -1;
                  LOWORD(v278[0]) = 1;
                  HIBYTE(v277) = ((uint16_t)(v277 | 0x7F) >> 8) | 1;
                  LOBYTE(v277) = 127;
                  v279 = -1;
                  LOWORD(v259[0]) = 1;
                  HIBYTE(v280) = ((uint16_t)(v280 | 0x7F) >> 8) | 1;
                  LOBYTE(v280) = 127;
                  v260 = -1;
                  LOWORD(v262[0]) = 1;
                  HIBYTE(v261) = ((uint16_t)(v261 | 0x7F) >> 8) | 1;
                  LOBYTE(v261) = 127;
                  v263 = -1;
                  LOWORD(v281) = 1;
                  HIBYTE(v264) = ((uint16_t)(v264 | 0x7F) >> 8) | 1;
                  LOBYTE(v264) = 127;
                  v284 = -1;
                  v286[0] = 1;
                  v286[1] = 0;
                  HIBYTE(v285) = ((uint16_t)(v285 | 0x7F) >> 8) | 1;
                  LOBYTE(v285) = 127;
                  LOWORD(v289) = -1;
                  BYTE2(v289) = 127;
                  HIBYTE(v289) |= 1u;
                  sub_776320((gameswf::String::Self *)v290, (gameswf::Self *)"id");
                  gameswf::hash_gameswf_StringI_gameswf_a0f678::get(
                    (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
                    (const gameswf::StringI::Self *)v290,
                    v275);
                  sub_59CE50((int)(uintptr_t)(v290));
                  sub_776320((gameswf::String::Self *)v291, (gameswf::Self *)"src");
                  gameswf::hash_gameswf_StringI_gameswf_a0f678::get(
                    (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
                    (const gameswf::StringI::Self *)v291,
                    v278);
                  sub_59CE50((int)(uintptr_t)(v291));
                  sub_776320((gameswf::String::Self *)v292, (gameswf::Self *)"width");
                  gameswf::hash_gameswf_StringI_gameswf_a0f678::get(
                    (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
                    (const gameswf::StringI::Self *)v292,
                    v259);
                  sub_59CE50((int)(uintptr_t)(v292));
                  sub_776320((gameswf::String::Self *)v293, (gameswf::Self *)"height");
                  gameswf::hash_gameswf_StringI_gameswf_a0f678::get(
                    (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
                    (const gameswf::StringI::Self *)v293,
                    v262);
                  sub_59CE50((int)(uintptr_t)(v293));
                  sub_776320((gameswf::String::Self *)v294, (gameswf::Self *)"style");
                  v164 = gameswf::hash_gameswf_StringI_gameswf_a0f678::get(
                           (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
                           (const gameswf::StringI::Self *)v294,
                           &v281);
                  sub_59CE50((int)(uintptr_t)(v294));
                  if ( v164 != 0 )
                  {
                    sub_776320((gameswf::String::Self *)v295, (gameswf::Self *)"{");
                    gameswf::String::opAddAssign((gameswf::String::Self *)v295, (const gameswf::String::Self *)&v281);
                    gameswf::String::opAddAssign((gameswf::String::Self *)v295, (gameswf::Self *)"}");
                    v215 = 0;
                    gameswf::parseStyleSheetStyle(&v215, v295);
                    gameswf::html_reader::setAttributesFromStyle(
                      (int)(uintptr_t)(self),
                      *((gameswf::Player::Self **)a3 + 4),
                      (int)(uintptr_t)(&v302),
                      &v215);
                    gameswf::hash_gameswf_StringI_gameswf_a0f678::clear((gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> **)&v215);
                    sub_59CE50((int)(uintptr_t)(v295));
                  }
                  sub_776320((gameswf::String::Self *)v300, (gameswf::Self *)"align");
                  v188 = gameswf::hash_gameswf_StringI_gameswf_a0f678::get(
                           (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
                           (const gameswf::StringI::Self *)v300,
                           (gameswf::Self **)v286);
                  sub_59CE50((int)(uintptr_t)(v300));
                  if ( v188 != 0 )
                  {
                    if ( sub_7E5E50((int)(uintptr_t)(v286), "left") )
                    {
                      v310 = 1;
                    }
                    else if ( sub_7E5E50((int)(uintptr_t)(v286), "right") )
                    {
                      v310 = 2;
                    }
                  }
                  if ( *((uint32_t *)self + 17) != 0 && *((uint32_t *)self + 9) != 0 && *((uint32_t *)self + 13) != 0 )
                    sub_1102850(self, a3, a1);
                  v165 = (char *)v262 + 1;
                  if ( LOBYTE(v262[0]) == 0xFF )
                    v165 = (const char *)v262[3];
                  v166 = atoi(v165);
                  v167 = (char *)v259 + 1;
                  if ( LOBYTE(v259[0]) == 0xFF )
                    v167 = (const char *)v259[3];
                  v168 = atoi(v167);
                  gameswf::EditTextCharacter::appendImage(
                    (int)(uintptr_t)(a3),
                    (gameswf::String::Self *)v275,
                    (gameswf::Self *)v278,
                    v168,
                    v166,
                    (int)(uintptr_t)(&v302));
                  sub_59CE50((int)(uintptr_t)(v286));
                  sub_59CE50((int)(uintptr_t)(&v281));
                  sub_59CE50((int)(uintptr_t)(v262));
                  sub_59CE50((int)(uintptr_t)(v259));
                  sub_59CE50((int)(uintptr_t)(v278));
                  sub_59CE50((int)(uintptr_t)(v275));
                }
                else
                {
                  v116 = (char *)v217 + 1;
                  if ( LOBYTE(v217[0]) == 0xFF )
                    v116 = v218;
                  if ( strcmp(v116, "br") == 0 )
                  {
                    v163 = *(uint32_t *)self + 44 * (*((uint32_t *)self + 1) - 1);
                    sub_776320((gameswf::String::Self *)v301, (gameswf::Self *)&a0[1]);
                    gameswf::html_reader::bufferText((int)(uintptr_t)(self), a3, v301, v163);
                    sub_59CE50((int)(uintptr_t)(v301));
                  }
                }
                goto LABEL_232;
              }
              LOBYTE(v305) = 1;
LABEL_252:
              gameswf::array_gameswf_TextAttributes_8af716::push_back_gameswf_TextAttributes_8f9e3b((int)(uintptr_t)(self), (int)(uintptr_t)(&v302));
LABEL_232:
              sub_59CE50((int)(uintptr_t)(v232));
              sub_59CE50((int)(uintptr_t)(v228));
              goto LABEL_134;
            }
            v121 = *((gameswf::Player::Self **)a3 + 4);
            v122 = (gameswf::Font::Self *)opNew(0x84u);
            gameswf::Font::Construct(v122, v121);
            gameswf::Font::copyFrom(v122, (gameswf::Font::Self *)v302);
            *((uint8_t *)v122 + 72) = 1;
            v123 = (gameswf::RefCounted::Self *)v302;
            if ( v122 == (gameswf::Font::Self *)v302 )
              goto LABEL_252;
          }
          if ( v123 != nullptr )
            gameswf::RefCounted::dropRef(v123);
          v302 = (int)(uintptr_t)(v122);
          gameswf::RefCounted::addRef(v122);
          goto LABEL_252;
        }
      }
      LOWORD(v295[0]) = 1;
      v297 = -1;
      v298 = 127;
      v299 |= 1u;
      v253 = 1;
      v254 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v253, 5);
      v103 = (gameswf::Self *)&v254;
      if ( v253 == -1 )
        v103 = v255;
      v104 = 0;
      gameswf::Strcpy_s(v103, (char *)&loc_6, (gameswf::Self *)"align");
      v256 = -1;
      v257 = 127;
      v258 |= 1u;
      v105 = gameswf::hash_gameswf_StringI_gameswf_a0f678::find_index(
               (gameswf::hash<gameswf::StringI::Self, gameswf::String::Self, gameswf::stringi_hash_functor<gameswf::StringI::Self>> *)v214,
               (const gameswf::StringI::Self *)&v253);
      if ( v105 >= 0 )
      {
        v104 = 1;
        gameswf::String::opAssign(v295, (gameswf::Self **)v214[0] + 12 * v105 + 9);
      }
      sub_59CE50((int)(uintptr_t)(&v253));
      if ( v104 != 0 )
      {
        v106 = (char *)v295 + 1;
        if ( LOBYTE(v295[0]) == 0xFF )
          v106 = v296;
        if ( strcmp(v106, "left") == 0 )
        {
          v311 = 0;
        }
        else if ( sub_7E5E50((int)(uintptr_t)(v295), "right") )
        {
          v311 = 1;
        }
        else if ( sub_7E5E50((int)(uintptr_t)(v295), "center") )
        {
          v311 = 2;
        }
        else if ( sub_7E5E50((int)(uintptr_t)(v295), "justify") )
        {
          v311 = 3;
        }
      }
      gameswf::array_gameswf_TextAttributes_8af716::push_back_gameswf_TextAttributes_8f9e3b((int)(uintptr_t)(self), (int)(uintptr_t)(&v302));
      v107 = (char *)v217 + 1;
      if ( LOBYTE(v217[0]) == 0xFF )
        v107 = v218;
      if ( strcmp(v107, "p") == 0 )
      {
        if ( v189 != 0 )
        {
          v108 = *(uint32_t *)self + 44 * (*((uint32_t *)self + 1) - 1);
          sub_776320((gameswf::String::Self *)v271, (gameswf::Self *)&a0[1]);
          gameswf::html_reader::bufferText((int)(uintptr_t)(self), a3, v271, v108);
          sub_59CE50((int)(uintptr_t)(v271));
        }
        ++v189;
      }
      sub_59CE50((int)(uintptr_t)(v295));
      goto LABEL_232;
    }
    v177 = v13;
    v196 = strchr(&v193[v14], 60);
    v194 = v196 == nullptr;
    if ( v196 == nullptr )
    {
      v17 = v177 - 1;
      if ( v177 == -1 )
        v17 = *((uint32_t *)a3 + 123) - 1;
      v196 = &v193[v17];
    }
    v18 = v196 - v16;
    LOWORD(v302) = 1;
    gameswf::String::resize((gameswf::String::Self *)&v302, v196 - v16);
    v19 = (char *)&v302 + 1;
    if ( (uint8_t)v302 == 0xFF )
      v19 = (char *)v305;
    memcpy(v19, v16, v18);
    v20 = (char *)&v302 + 1;
    if ( (uint8_t)v302 == 0xFF )
      v20 = (char *)v305;
    v20[v18] = 0;
    LOWORD(v306) = -1;
    BYTE2(v306) = 127;
    HIBYTE(v306) |= 1u;
    v21 = (char *)&v302 + 1;
    if ( (uint8_t)v302 == 0xFF )
      v21 = v305;
    v208 = v302;
    v22 = (char *)(strchr(v21, 38));
    v23 = (char *)&v302 + 1;
    if ( v22 != nullptr )
    {
      LOWORD(dest[0]) = 1;
      dest[4] |= 0x7FFFFFu;
      v24 = HIBYTE(dest[4]) | 1;
      if ( v208 == -1 )
        v23 = (char *)v305;
      BYTE2(dest[4]) &= ~0x80u;
      v204 = v23;
      HIBYTE(dest[4]) = v24;
      do
      {
        v25 = 0;
        v26 = (int *)(dword_21155E0);
        v27 = *(uint32_t *)(dword_21155E0[0] - 12);
        if ( v27 != 0 )
        {
          while ( sub_1938800((int)(uintptr_t)(v26), 0, v27, v22, v27) != 0 )
          {
            v26 = (int *)(&dword_21155E0[++v25]);
            v27 = *(uint32_t *)(*v26 - 12);
            if ( v27 == 0 )
              goto LABEL_53;
          }
          v200 = v25;
        }
        else
        {
LABEL_53:
          v200 = -1;
        }
        *v22 = 0;
        v28 = strlen(v204);
        if ( LOBYTE(dest[0]) == 0xFF )
          v29 = dest[1] - 1;
        else
          v29 = SLOBYTE(dest[0]) - 1;
        gameswf::String::resize((gameswf::String::Self *)dest, v29 + v28);
        if ( LOBYTE(dest[0]) == 0xFF )
        {
          v30 = (char *)dest[1];
          v31 = (char *)dest[3];
        }
        else
        {
          v30 = (char *)SLOBYTE(dest[0]);
          v31 = (char *)dest + 1;
        }
        gameswf::Strcpy_s((gameswf::Self *)&v31[v29], v30, (gameswf::Self *)v204);
        dest[4] |= 0x7FFFFFu;
        if ( v200 == -1 )
        {
          LOBYTE(v213[0]) = 38;
          if ( LOBYTE(dest[0]) == 0xFF )
            v37 = dest[1] - 1;
          else
            v37 = SLOBYTE(dest[0]) - 1;
          gameswf::String::resize((gameswf::String::Self *)dest, v37 + 1);
          if ( LOBYTE(dest[0]) == 0xFF )
          {
            v38 = (char *)dest[1];
            v39 = (char *)dest[3];
          }
          else
          {
            v38 = (char *)SLOBYTE(dest[0]);
            v39 = (char *)dest + 1;
          }
          v176 = (gameswf::Self *)&v39[v37];
          v32 = v22 + 1;
          gameswf::Strncpy_s(v176, v38, (unsigned int)(uintptr_t)(v213), (char *)&dword_0 + 1);
          dest[4] |= 0x7FFFFFu;
          v204 = v22 + 1;
        }
        else
        {
          gameswf::String::appendWideChar((gameswf::String::Self *)dest, word_1CC4C88[v200]);
          v204 = &v22[*(uint32_t *)(dword_21155E0[v200] - 12)];
          v32 = v204;
        }
        v22 = (char *)(strchr(v32, 38));
      }
      while ( v22 != nullptr );
      v33 = strlen(v32);
      if ( LOBYTE(dest[0]) == 0xFF )
        v34 = dest[1] - 1;
      else
        v34 = SLOBYTE(dest[0]) - 1;
      gameswf::String::resize((gameswf::String::Self *)dest, v34 + v33);
      if ( LOBYTE(dest[0]) == 0xFF )
      {
        v35 = (char *)dest[1];
        v36 = (char *)dest[3];
      }
      else
      {
        v35 = (char *)SLOBYTE(dest[0]);
        v36 = (char *)dest + 1;
      }
      gameswf::Strcpy_s((gameswf::Self *)&v36[v34], v35, (gameswf::Self *)v204);
      dest[4] |= 0x7FFFFFu;
      gameswf::html_reader::bufferText((int)(uintptr_t)(self), a3, dest, *(uint32_t *)self + 44 * (*((uint32_t *)self + 1) - 1));
      sub_59CE50((int)(uintptr_t)(dest));
      if ( v194 )
      {
LABEL_161:
        sub_59CE50((int)(uintptr_t)(&v302));
        break;
      }
    }
    else
    {
      gameswf::html_reader::bufferText((int)(uintptr_t)(self), a3, &v302, *(uint32_t *)self + 44 * (*((uint32_t *)self + 1) - 1));
      if ( v194 )
        goto LABEL_161;
    }
    v14 = v196 - v193;
    sub_59CE50((int)(uintptr_t)(&v302));
    LOBYTE(v13) = *((uint8_t *)a3 + 488);
    v15 = (char)v13 - 1;
    if ( (uint8_t)v13 == 0xFF )
LABEL_52:
      v15 = *((uint32_t *)a3 + 123) - 1;
  }
  if ( *((uint32_t *)self + 17) != 0 && *((uint32_t *)self + 9) != 0 && *((uint32_t *)self + 13) != 0 )
    sub_1102850(self, a3, a1);
  if ( v191 != nullptr )
    gameswf::RefCounted::dropRef(v191);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v216);
}


