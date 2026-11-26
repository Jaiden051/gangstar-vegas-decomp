// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1b977ac):
//   ../../../../../lib/glf/include/glf/input/inputDevice.h
// Referenced by 19 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x7eaac0 .. 0x7eab4f (143 bytes)
// Symbol:               sub_7EAAC0
// Demangled:            sub_7EAAC0
// ============================================================================
/*
int sub_7EAAC0(unsigned int *a1, unsigned int a2)
{
  unsigned int v2;

  v2 = *a1;
  if ( *a1 <= a2 && byte_20D6580 == 0 )
  {
    glf::Console::Println(
      (glf::Console *)"%s(%d): %s - %s",
      "../../../../../lib/glf/include/glf/input/inputDevice.h",
      233,
      "operator[]",
      "idx >= mNum");
    byte_20D6580 = 1;
    v2 = *a1;
  }
  if ( v2 > a2 )
    v2 = a2;
  return a1[1] + 4 * v2;
}

*/

// ============================================================================
// Referencing Function: 0xa757f0 .. 0xa76cfc (5388 bytes)
// Symbol:               sub_A757F0
// Demangled:            sub_A757F0
// ============================================================================
/*
unsigned int sub_A757F0(glf *a1, glf::InputManager *a2)
{
  uint32_t *Mouse;
  int *v3;
  int v4;
  glf::SimpleButton *v5;
  int16_t v6; // di
  int v7;
  int i;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  char v13;
  char v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  char v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  uint32_t *v27;
  char v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  int v32;
  uint8_t *v33;
  int v34;
  int v35;
  int EventMgr;
  __m128i *v37;
  unsigned int result;
  int v39;
  int v40;
  int v41;
  uint32_t *v42;
  glf::SimpleButton *v43;
  int v44; // kr08_4
  unsigned int v45;
  int v46;
  unsigned int v47;
  int v48;
  uint8_t *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  unsigned int v55;
  int v56;
  uint8_t *v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  unsigned int v63;
  int v64;
  uint8_t *v65;
  int v66;
  int v67;
  int v68;
  unsigned int v69;
  int v70;
  int v71;
  uint8_t *v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int *v84;
  bool v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int *v90;
  int v91;
  int v92;
  int v93;
  glf *v94;
  glf *v95;
  glf *v96;
  glf *v97;
  glf *v98;
  glf *v99;
  glf *v100;
  glf *v101;
  glf *v102;
  glf *v103;
  glf *v104;
  char IsDown;
  char v106;
  char v107;
  char v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  char v114;
  int16_t v115;
  int *v116;
  int Keyboard;
  uint32_t v118[3];
  uint32_t v119[3];
  uint32_t v120[4];
  uint32_t v121[5];
  uint32_t v122[5];
  uint16_t v123[2];
  int v124;
  int Milliseconds;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  __m128i v131[3];
  uint8_t v132[12];

  if ( byte_20D32F8 == 0 && _cxa_guard_acquire((__guard *)&byte_20D32F8) != 0 )
    sub_A72A90();
  sub_A74000((int)&unk_20D3300);
  Keyboard = glf::InputManager::GetKeyboard(a2, 0);
  Mouse = (uint32_t *)glf::InputManager::GetMouse(a2, 0);
  if ( byte_20D7750 == 0 && _cxa_guard_acquire((__guard *)&byte_20D7750) != 0 )
  {
    byte_20D775C = 0;
    dword_20D7758 = (int)&off_2068C90;
    dword_20D7760 = 0;
    dword_20D7764 = 0;
    dword_20D7768 = 0;
    dword_20D776C = 0;
    v81 = sub_4EBBF0(0xCu, 1);
    *(uint8_t *)(v81 + 4) = 0;
    *(uint32_t *)(v81 + 8) = "Default";
    *(uint32_t *)v81 = off_2068EE8;
    if ( dword_20D7764 == dword_20D7768 )
    {
      sub_A37B40();
    }
    else
    {
      v82 = 0;
      if ( dword_20D7764 != 0 )
      {
        *(uint32_t *)dword_20D7764 = v81;
        v82 = dword_20D7764;
      }
      dword_20D7764 = v82 + 4;
    }
    v83 = sub_4EBBF0(0x18u, 1);
    *(uint8_t *)(v83 + 4) = 0;
    *(uint32_t *)(v83 + 12) = 0;
    *(uint32_t *)(v83 + 8) = "Targeting";
    *(uint32_t *)(v83 + 16) = 0;
    *(uint32_t *)v83 = off_2068F08;
    v84 = (int *)dword_20D7764;
    v85 = dword_20D7764 == dword_20D7768;
    *(uint8_t *)(v83 + 20) = 0;
    if ( v85 )
    {
      sub_A37B40();
    }
    else
    {
      v86 = 0;
      if ( v84 != nullptr )
      {
        *v84 = v83;
        v86 = dword_20D7764;
      }
      dword_20D7764 = v86 + 4;
    }
    v87 = sub_4EBBF0(0x10u, 1);
    *(uint8_t *)(v87 + 4) = 0;
    *(uint32_t *)(v87 + 12) = -1;
    *(uint32_t *)(v87 + 8) = "Bike";
    *(uint32_t *)v87 = off_2068F28;
    if ( dword_20D7764 == dword_20D7768 )
    {
      sub_A37B40();
    }
    else
    {
      v88 = 0;
      if ( dword_20D7764 != 0 )
      {
        *(uint32_t *)dword_20D7764 = v87;
        v88 = dword_20D7764;
      }
      dword_20D7764 = v88 + 4;
    }
    v89 = sub_4EBBF0(0x18u, 1);
    *(uint8_t *)(v89 + 4) = 0;
    *(uint32_t *)(v89 + 12) = 0;
    *(uint32_t *)(v89 + 8) = "Driving";
    *(uint32_t *)(v89 + 16) = 0;
    *(uint32_t *)v89 = off_2068F48;
    v90 = (int *)dword_20D7764;
    v85 = dword_20D7764 == dword_20D7768;
    *(uint32_t *)(v89 + 20) = 0;
    if ( v85 )
    {
      sub_A37B40();
    }
    else
    {
      v91 = 0;
      if ( v90 != nullptr )
      {
        *v90 = v89;
        v91 = dword_20D7764;
      }
      dword_20D7764 = v91 + 4;
    }
    v92 = sub_4EBBF0(0x10u, 1);
    *(uint8_t *)(v92 + 4) = 0;
    *(uint32_t *)(v92 + 12) = 0;
    *(uint32_t *)(v92 + 8) = "Melee";
    *(uint32_t *)v92 = off_2068F68;
    if ( dword_20D7764 == dword_20D7768 )
    {
      sub_A37B40();
    }
    else
    {
      v93 = 0;
      if ( dword_20D7764 != 0 )
      {
        *(uint32_t *)dword_20D7764 = v92;
        v93 = dword_20D7764;
      }
      dword_20D7764 = v93 + 4;
    }
    _cxa_guard_release((__guard *)&byte_20D7750);
    __cxa_atexit((void (*)(void *))sub_A23BD0, &dword_20D7758, &unk_20D1280);
  }
  v3 = &dword_20D7758;
  if ( byte_20D775C != 0 )
    v3 = nullptr;
  v116 = v3;
  if ( (uint8_t)glf::SimpleButton::WasPressed((glf::SimpleButton *)(Mouse + 24)) != 0 )
  {
    v118[1] = 3;
    v118[0] = &off_2068F98;
    v118[2] = 1;
    sub_A736A0(a1, v118);
    v118[0] = &off_204B178;
  }
  else if ( (uint8_t)glf::SimpleButton::WasPressed((glf::SimpleButton *)(Mouse + 23)) != 0 )
  {
    v119[1] = 3;
    v119[0] = &off_2068F98;
    v119[2] = -1;
    sub_A736A0(a1, v119);
    v119[0] = &off_204B178;
  }
  if ( Mouse[5] != 0 )
  {
    v4 = Mouse[6];
    v115 = *(uint16_t *)(v4 + 6);
  }
  else
  {
    if ( byte_20DCBF8 == 0 )
    {
      glf::Console::Println(
        (glf::Console *)"%s(%d): %s - %s",
        "../../../../../lib/glf/include/glf/input/inputDevice.h",
        242,
        "operator[]",
        "idx >= mNum");
      byte_20DCBF8 = 1;
    }
    v4 = Mouse[6];
    v115 = *(uint16_t *)(v4 + 6);
  }
  v5 = (glf::SimpleButton *)(Mouse + 22);
  v6 = *(uint16_t *)(v4 + 8);
  if ( (uint8_t)glf::SimpleButton::WasPressed(v5) != 0 )
  {
    v121[1] = 2;
    v121[0] = &off_2068FB0;
    v121[2] = 1;
    LOBYTE(v121[3]) = 1;
    HIWORD(v121[3]) = v115;
    LOWORD(v121[4]) = v6;
    sub_A736A0(a1, v121);
    v121[0] = &off_204B178;
  }
  else if ( (uint8_t)glf::SimpleButton::WasPressed(v5) != 0 )
  {
    v122[1] = 2;
    v122[0] = &off_2068FB0;
    v122[2] = 1;
    LOBYTE(v122[3]) = 0;
    HIWORD(v122[3]) = v115;
    LOWORD(v122[4]) = v6;
    sub_A736A0(a1, v122);
    v122[0] = &off_204B178;
  }
  v123[0] = 204;
  v123[1] = 0;
  v124 = 0;
  Milliseconds = glf::GetMilliseconds(v94);
  v126 = v7;
  v127 = 0;
  v128 = -1;
  v129 = 0;
  v130 = 0;
  for ( i = 40; i != 52; ++i )
  {
LABEL_24:
    IsDown = glf::SimpleButton::IsDown((glf::SimpleButton *)(Keyboard + 4 * i + 80));
    v13 = glf::SimpleButton::WasReleased((glf::SimpleButton *)(Keyboard + 4 * i + 80));
    if ( IsDown == 0 )
    {
      if ( v13 == 0 )
        continue;
LABEL_15:
      v123[0] = 205;
      v127 = 0;
      v128 = i;
      v129 = 0;
      v9 = i;
      goto LABEL_16;
    }
    if ( v13 != 0 )
      goto LABEL_15;
    v123[0] = 204;
    v127 = 0;
    v128 = i;
    v129 = 0;
    if ( byte_20D32F8 == 0 && _cxa_guard_acquire((__guard *)&byte_20D32F8) != 0 )
      sub_A72A90();
    if ( (uint8_t)sub_A6C4D0(&unk_20D3300, i, 1) != 0 )
      continue;
    v9 = v128;
    if ( v123[0] != 205 )
    {
      v10 = v128 - 41;
      if ( (unsigned int)(v128 - 41) <= 0x1C )
      {
LABEL_30:
        switch ( v10 )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
            if ( v123[0] == 205 )
            {
              v120[0] = 207;
              v120[1] = 0;
              v34 = glf::GetMilliseconds(v95);
              v120[3] = v35;
              v120[2] = v34;
              EventMgr = glf::GetEventMgr(v99);
              glf::EventManager::PostEvent(EventMgr, v120);
            }
            continue;
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
            if ( v123[0] == 205 )
            {
              v29 = v9 - 40;
              v30 = v116[2];
              v31 = (v116[3] - v30) >> 2;
              if ( v29 < v31 )
              {
                v32 = v116[5];
                if ( v29 != v32 )
                {
                  if ( v32 >= 0 && v31 > v32 )
                  {
                    v33 = *(uint8_t **)(v30 + 4 * v32);
                    if ( v33[4] != 0 )
                    {
                      (*(void (**)(uint8_t *))(*(uint32_t *)v33 + 4))(v33);
                      v30 = v116[2];
                    }
                  }
                  (***(void (****)(uint32_t))(v30 + 4 * v29))(*(uint32_t *)(v30 + 4 * v29));
                  v116[5] = v29;
                }
              }
            }
            continue;
          case 11:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
          case 22:
          case 23:
          case 24:
          case 25:
          case 26:
            goto LABEL_19;
          case 12:
            if ( v123[0] != 205 )
              continue;
            ++i;
            sub_A3BB70();
            if ( i == 52 )
              goto LABEL_34;
            goto LABEL_24;
          case 27:
          case 28:
            continue;
          default:
            abort();
        }
      }
      goto LABEL_19;
    }
LABEL_16:
    if ( *((uint8_t *)&stru_19304.st_name + (uint32_t)&dword_20B9FF4) == 0
      && _cxa_guard_acquire((__guard *)&byte_20D32F8) != 0 )
    {
      sub_A72A90();
    }
    if ( (uint8_t)sub_A6C4D0(&unk_20D3300, v9, 0) == 0 )
    {
      v9 = v128;
      v10 = v128 - 41;
      if ( (unsigned int)(v128 - 41) <= 0x1C )
        goto LABEL_30;
LABEL_19:
      v11 = v116[5];
      v12 = (uint32_t *)v116[2];
      if ( v11 > 0 && v11 < (unsigned int)((v116[3] - (int)v12) >> 2) )
      {
        (*(void (**)(uint32_t, uint16_t *))(*(uint32_t *)v12[v11] + 12))(v12[v11], v123);
        v12 = (uint32_t *)v116[2];
      }
      (*(void (**)(uint32_t, uint16_t *))(*(uint32_t *)*v12 + 12))(*v12, v123);
      continue;
    }
  }
LABEL_34:
  LOWORD(i) = 48;
  do
  {
    v106 = glf::SimpleButton::IsDown((glf::SimpleButton *)(Keyboard + 4 * i + 112));
    v14 = glf::SimpleButton::WasReleased((glf::SimpleButton *)(Keyboard + 4 * i + 112));
    if ( v106 == 0 )
    {
      if ( v14 == 0 )
        goto LABEL_45;
LABEL_37:
      v15 = i + 8;
      v123[0] = 205;
      v127 = i;
      v128 = i + 8;
      v129 = 0;
      goto LABEL_38;
    }
    if ( v14 != 0 )
      goto LABEL_37;
    v128 = i + 8;
    v123[0] = 204;
    v127 = i;
    v129 = 0;
    if ( byte_20D32F8 == 0 && _cxa_guard_acquire((__guard *)&byte_20D32F8) != 0 )
      sub_A72A90();
    if ( (uint8_t)sub_A6C4D0(&unk_20D3300, i + 8, 1) != 0 )
      goto LABEL_45;
    v15 = v128;
    if ( v123[0] != 205 )
    {
      v16 = v128 - 41;
      if ( (unsigned int)(v128 - 41) <= 0x1C )
      {
LABEL_123:
        switch ( v16 )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
            if ( v123[0] == 205 )
            {
              v120[0] = 207;
              v120[1] = 0;
              v58 = glf::GetMilliseconds(v96);
              v120[3] = v59;
              v120[2] = v58;
              v60 = glf::GetEventMgr(v102);
              glf::EventManager::PostEvent(v60, v120);
            }
            goto LABEL_45;
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
            if ( v123[0] == 205 )
            {
              v53 = v15 - 40;
              v54 = v116[2];
              v55 = (v116[3] - v54) >> 2;
              if ( v15 - 40 < v55 )
              {
                v56 = v116[5];
                if ( v53 != v56 )
                {
                  if ( v56 >= 0 && v55 > v56 )
                  {
                    v57 = *(uint8_t **)(v54 + 4 * v56);
                    if ( v57[4] != 0 )
                    {
                      (*(void (**)(uint8_t *))(*(uint32_t *)v57 + 4))(v57);
                      v54 = v116[2];
                    }
                  }
                  (***(void (****)(uint32_t))(v54 + 4 * v53))(*(uint32_t *)(v54 + 4 * v53));
                  v116[5] = v53;
                }
              }
            }
            goto LABEL_45;
          case 11:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
          case 22:
          case 23:
          case 24:
          case 25:
          case 26:
            goto LABEL_41;
          case 12:
            if ( v123[0] == 205 )
              sub_A3BB70();
            goto LABEL_45;
          case 27:
          case 28:
            goto LABEL_45;
          default:
            abort();
        }
      }
      goto LABEL_41;
    }
LABEL_38:
    if ( *((uint8_t *)&stru_19304.st_name + (uint32_t)&dword_20B9FF4) == 0 )
    {
      v112 = v15;
      v79 = _cxa_guard_acquire((__guard *)&byte_20D32F8);
      v15 = v112;
      if ( v79 != 0 )
      {
        sub_A72A90();
        v15 = v112;
      }
    }
    if ( (uint8_t)sub_A6C4D0(&unk_20D3300, v15, 0) == 0 )
    {
      v15 = v128;
      v16 = v128 - 41;
      if ( (unsigned int)(v128 - 41) <= 0x1C )
        goto LABEL_123;
LABEL_41:
      v17 = v116[5];
      v18 = (uint32_t *)v116[2];
      if ( v17 > 0 && v17 < (unsigned int)((v116[3] - (int)v18) >> 2) )
      {
        (*(void (**)(uint32_t, uint16_t *))(*(uint32_t *)v18[v17] + 12))(v18[v17], v123);
        v18 = (uint32_t *)v116[2];
      }
      (*(void (**)(uint32_t, uint16_t *))(*(uint32_t *)*v18 + 12))(*v18, v123);
    }
LABEL_45:
    ++i;
  }
  while ( i != 58 );
  LOWORD(i) = 48;
  do
  {
    v107 = glf::SimpleButton::IsDown((glf::SimpleButton *)(Keyboard + 4 * i - 112));
    v19 = glf::SimpleButton::WasReleased((glf::SimpleButton *)(Keyboard + 4 * i - 112));
    if ( v107 == 0 )
    {
      if ( v19 == 0 )
        goto LABEL_57;
LABEL_49:
      v20 = i - 48;
      v123[0] = 205;
      v127 = i;
      v128 = i - 48;
      v129 = 0;
      goto LABEL_50;
    }
    if ( v19 != 0 )
      goto LABEL_49;
    v123[0] = 204;
    v127 = i;
    v128 = i - 48;
    v129 = 0;
    if ( byte_20D32F8 == 0 && _cxa_guard_acquire((__guard *)&byte_20D32F8) != 0 )
      sub_A72A90();
    if ( (uint8_t)sub_A6C4D0(&unk_20D3300, i - 48, 1) != 0 )
      goto LABEL_57;
    v20 = v128;
    if ( v123[0] != 205 )
    {
      v21 = v128 - 41;
      if ( (unsigned int)(v128 - 41) <= 0x1C )
      {
LABEL_130:
        switch ( v21 )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
            if ( v123[0] == 205 )
            {
              v120[0] = 207;
              v120[1] = 0;
              v66 = glf::GetMilliseconds(v97);
              v120[3] = v67;
              v120[2] = v66;
              v68 = glf::GetEventMgr(v103);
              glf::EventManager::PostEvent(v68, v120);
            }
            goto LABEL_57;
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
            if ( v123[0] == 205 )
            {
              v61 = v20 - 40;
              v62 = v116[2];
              v63 = (v116[3] - v62) >> 2;
              if ( v20 - 40 < v63 )
              {
                v64 = v116[5];
                if ( v61 != v64 )
                {
                  if ( v64 >= 0 && v63 > v64 )
                  {
                    v65 = *(uint8_t **)(v62 + 4 * v64);
                    if ( v65[4] != 0 )
                    {
                      (*(void (**)(uint8_t *))(*(uint32_t *)v65 + 4))(v65);
                      v62 = v116[2];
                    }
                  }
                  (***(void (****)(uint32_t))(v62 + 4 * v61))(*(uint32_t *)(v62 + 4 * v61));
                  v116[5] = v61;
                }
              }
            }
            goto LABEL_57;
          case 11:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
          case 22:
          case 23:
          case 24:
          case 25:
          case 26:
            goto LABEL_53;
          case 12:
            if ( v123[0] == 205 )
              sub_A3BB70();
            goto LABEL_57;
          case 27:
          case 28:
            goto LABEL_57;
          default:
            abort();
        }
      }
      goto LABEL_53;
    }
LABEL_50:
    if ( *((uint8_t *)&stru_19304.st_name + (uint32_t)&dword_20B9FF4) == 0 )
    {
      v113 = v20;
      v80 = _cxa_guard_acquire((__guard *)&byte_20D32F8);
      v20 = v113;
      if ( v80 != 0 )
      {
        sub_A72A90();
        v20 = v113;
      }
    }
    if ( (uint8_t)sub_A6C4D0(&unk_20D3300, v20, 0) == 0 )
    {
      v20 = v128;
      v21 = v128 - 41;
      if ( (unsigned int)(v128 - 41) <= 0x1C )
        goto LABEL_130;
LABEL_53:
      v22 = v116[5];
      v23 = (uint32_t *)v116[2];
      if ( v22 > 0 && v22 < (unsigned int)((v116[3] - (int)v23) >> 2) )
      {
        (*(void (**)(uint32_t, uint16_t *))(*(uint32_t *)v23[v22] + 12))(v23[v22], v123);
        v23 = (uint32_t *)v116[2];
      }
      (*(void (**)(uint32_t, uint16_t *))(*(uint32_t *)*v23 + 12))(*v23, v123);
    }
LABEL_57:
    ++i;
  }
  while ( i != 58 );
  LOWORD(i) = 97;
  do
  {
    while ( 2 )
    {
      v108 = glf::SimpleButton::IsDown((glf::SimpleButton *)(Keyboard + 4 * i - 268));
      v28 = glf::SimpleButton::WasReleased((glf::SimpleButton *)(Keyboard + 4 * i - 268));
      if ( v108 == 0 )
      {
        if ( v28 == 0 )
          goto LABEL_68;
LABEL_60:
        v24 = i - 87;
        v123[0] = 205;
        v127 = i;
        v128 = i - 87;
        v129 = 0;
        break;
      }
      if ( v28 != 0 )
        goto LABEL_60;
      v123[0] = 204;
      v127 = i;
      v128 = i - 87;
      v129 = 0;
      if ( byte_20D32F8 == 0 && _cxa_guard_acquire((__guard *)&byte_20D32F8) != 0 )
        sub_A72A90();
      if ( (uint8_t)sub_A6C4D0(&unk_20D3300, i - 87, 1) != 0 )
        goto LABEL_68;
      v24 = v128;
      if ( v123[0] != 205 )
      {
        v25 = v128 - 41;
        if ( (unsigned int)(v128 - 41) <= 0x1C )
        {
LABEL_75:
          switch ( v25 )
          {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
              if ( v123[0] == 205 )
              {
                v120[0] = 207;
                v120[1] = 0;
                v50 = glf::GetMilliseconds(v98);
                v120[3] = v51;
                v120[2] = v50;
                v52 = glf::GetEventMgr(v101);
                glf::EventManager::PostEvent(v52, v120);
              }
              goto LABEL_68;
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
              if ( v123[0] == 205 )
              {
                v45 = v24 - 40;
                v46 = v116[2];
                v47 = (v116[3] - v46) >> 2;
                if ( v45 < v47 )
                {
                  v48 = v116[5];
                  if ( v45 != v48 )
                  {
                    if ( v48 >= 0 && v47 > v48 )
                    {
                      v49 = *(uint8_t **)(v46 + 4 * v48);
                      if ( v49[4] != 0 )
                      {
                        (*(void (**)(uint8_t *))(*(uint32_t *)v49 + 4))(v49);
                        v46 = v116[2];
                      }
                    }
                    (***(void (****)(uint32_t))(v46 + 4 * v45))(*(uint32_t *)(v46 + 4 * v45));
                    v116[5] = v45;
                  }
                }
              }
              goto LABEL_68;
            case 11:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
              goto LABEL_64;
            case 12:
              if ( v123[0] != 205 )
                goto LABEL_68;
              ++i;
              sub_A3BB70();
              if ( i == 123 )
                goto LABEL_89;
              continue;
            case 27:
            case 28:
              goto LABEL_68;
            default:
              abort();
          }
        }
        goto LABEL_64;
      }
      break;
    }
    if ( *((uint8_t *)&stru_19304.st_name + (uint32_t)&dword_20B9FF4) == 0 )
    {
      v110 = v24;
      v76 = _cxa_guard_acquire((__guard *)&byte_20D32F8);
      v24 = v110;
      if ( v76 != 0 )
      {
        sub_A72A90();
        v24 = v110;
      }
    }
    if ( (uint8_t)sub_A6C4D0(&unk_20D3300, v24, 0) == 0 )
    {
      v24 = v128;
      v25 = v128 - 41;
      if ( (unsigned int)(v128 - 41) <= 0x1C )
        goto LABEL_75;
LABEL_64:
      v26 = v116[5];
      v27 = (uint32_t *)v116[2];
      if ( v26 > 0 && v26 < (unsigned int)((v116[3] - (int)v27) >> 2) )
      {
        (*(void (**)(uint32_t, uint16_t *))(*(uint32_t *)v27[v26] + 12))(v27[v26], v123);
        v27 = (uint32_t *)v116[2];
      }
      (*(void (**)(uint32_t, uint16_t *))(*(uint32_t *)*v27 + 12))(*v27, v123);
    }
LABEL_68:
    ++i;
  }
  while ( i != 123 );
LABEL_89:
  v131[0] = (__m128i)xmmword_1C7C390;
  v37 = v131;
  v131[1] = (__m128i)xmmword_1C7C3A0;
  v131[2] = (__m128i)xmmword_1C7C3B0;
  do
  {
    while ( 2 )
    {
      v109 =g4_m128_lane<int32_t>(*(v37), 0);
      v43 = (glf::SimpleButton *)(Keyboard + 4 *g4_m128_lane<int32_t>(*(v37), 0) + 80);
      v114 = glf::SimpleButton::IsDown(v43);
      result = glf::SimpleButton::WasReleased(v43);
      v39 = v109;
      if ( v114 == 0 )
      {
        if ( (uint8_t)result == 0 )
          goto LABEL_99;
LABEL_91:
        v123[0] = 205;
        v127 = 0;
        v128 = v109;
        v129 = 0;
        break;
      }
      if ( (uint8_t)result != 0 )
        goto LABEL_91;
      v123[0] = 204;
      v127 = 0;
      v128 = v109;
      v129 = 0;
      if ( byte_20D32F8 == 0 )
      {
        v77 = _cxa_guard_acquire((__guard *)&byte_20D32F8);
        v39 = v109;
        if ( v77 != 0 )
        {
          sub_A72A90();
          v39 = v109;
        }
      }
      result = sub_A6C4D0(&unk_20D3300, v39, 1);
      if ( (uint8_t)result != 0 )
        goto LABEL_99;
      v39 = v128;
      if ( v123[0] != 205 )
      {
        v40 = v128 - 41;
        if ( (unsigned int)(v128 - 41) <= 0x1C )
        {
LABEL_106:
          v44 = v40;
          result = (unsigned int)&dword_20B9FF4 + (uint32_t)jpt_A761F6[v40];
          switch ( v44 )
          {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
              if ( v123[0] == 205 )
              {
                v120[0] = 207;
                v120[1] = 0;
                v73 = glf::GetMilliseconds(v100);
                v120[3] = v74;
                v120[2] = v73;
                v75 = glf::GetEventMgr(v104);
                result = glf::EventManager::PostEvent(v75, v120);
              }
              goto LABEL_99;
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
              if ( v123[0] == 205 )
              {
                v69 = v39 - 40;
                v70 = v116[2];
                result = (v116[3] - v70) >> 2;
                if ( v69 < result )
                {
                  v71 = v116[5];
                  if ( v69 != v71 )
                  {
                    if ( v71 >= 0 && result > v71 )
                    {
                      v72 = *(uint8_t **)(v70 + 4 * v71);
                      if ( v72[4] != 0 )
                      {
                        (*(void (**)(uint8_t *))(*(uint32_t *)v72 + 4))(v72);
                        v70 = v116[2];
                      }
                    }
                    result = (***(int (****)(uint32_t))(v70 + 4 * v69))(*(uint32_t *)(v70 + 4 * v69));
                    v116[5] = v69;
                  }
                }
              }
              goto LABEL_99;
            case 11:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
              goto LABEL_95;
            case 12:
              if ( v123[0] != 205 )
                goto LABEL_99;
              result = sub_A3BB70();
              v37 = (__m128i *)((char *)v37 + 4);
              if ( v37 == (__m128i *)v132 )
                return result;
              continue;
            case 27:
            case 28:
              goto LABEL_99;
            default:
              abort();
          }
        }
        goto LABEL_95;
      }
      break;
    }
    if ( *((uint8_t *)&stru_19304.st_name + (uint32_t)&dword_20B9FF4) == 0 )
    {
      v111 = v39;
      v78 = _cxa_guard_acquire((__guard *)&byte_20D32F8);
      v39 = v111;
      if ( v78 != 0 )
      {
        sub_A72A90();
        v39 = v111;
      }
    }
    result = sub_A6C4D0(&unk_20D3300, v39, 0);
    if ( (uint8_t)result == 0 )
    {
      v39 = v128;
      v40 = v128 - 41;
      if ( (unsigned int)(v128 - 41) <= 0x1C )
        goto LABEL_106;
LABEL_95:
      v41 = v116[5];
      v42 = (uint32_t *)v116[2];
      if ( v41 > 0 && v41 < (unsigned int)((v116[3] - (int)v42) >> 2) )
      {
        (*(void (**)(uint32_t, uint16_t *))(*(uint32_t *)v42[v41] + 12))(v42[v41], v123);
        v42 = (uint32_t *)v116[2];
      }
      result = (*(int (**)(uint32_t, uint16_t *))(*(uint32_t *)*v42 + 12))(*v42, v123);
    }
LABEL_99:
    v37 = (__m128i *)((char *)v37 + 4);
  }
  while ( v37 != (__m128i *)v132 );
  return result;
}

*/

// ============================================================================
// Referencing Function: 0xba5ed0 .. 0xba66d1 (2049 bytes)
// Symbol:               sub_BA5ED0
// Demangled:            sub_BA5ED0
// ============================================================================

// ============================================================================
// Referencing Function: 0xc234b0 .. 0xc23607 (343 bytes)
// Symbol:               sub_C234B0
// Demangled:            sub_C234B0
// ============================================================================

// ============================================================================
// Referencing Function: 0xc23700 .. 0xc2384f (335 bytes)
// Symbol:               sub_C23700
// Demangled:            sub_C23700
// ============================================================================

// ============================================================================
// Referencing Function: 0xc23940 .. 0xc23ca4 (868 bytes)
// Symbol:               sub_C23940
// Demangled:            sub_C23940
// ============================================================================

// ============================================================================
// Referencing Function: 0xc242e0 .. 0xc248a7 (1479 bytes)
// Symbol:               sub_C242E0
// Demangled:            sub_C242E0
// ============================================================================

// ============================================================================
// Referencing Function: 0xc24970 .. 0xc24dfa (1162 bytes)
// Symbol:               sub_C24970
// Demangled:            sub_C24970
// ============================================================================

// ============================================================================
// Referencing Function: 0xc24e00 .. 0xc2504f (591 bytes)
// Symbol:               sub_C24E00
// Demangled:            sub_C24E00
// ============================================================================

// ============================================================================
// Referencing Function: 0xc25190 .. 0xc25a35 (2213 bytes)
// Symbol:               sub_C25190
// Demangled:            sub_C25190
// ============================================================================

// ============================================================================
// Referencing Function: 0xc285a0 .. 0xc28d25 (1925 bytes)
// Symbol:               sub_C285A0
// Demangled:            sub_C285A0
// ============================================================================

// ============================================================================
// Referencing Function: 0xc28d30 .. 0xc294b2 (1922 bytes)
// Symbol:               sub_C28D30
// Demangled:            sub_C28D30
// ============================================================================

// ============================================================================
// Referencing Function: 0xc294c0 .. 0xc29c34 (1908 bytes)
// Symbol:               sub_C294C0
// Demangled:            sub_C294C0
// ============================================================================

// ============================================================================
// Referencing Function: 0xc29c40 .. 0xc2a169 (1321 bytes)
// Symbol:               sub_C29C40
// Demangled:            sub_C29C40
// ============================================================================

// ============================================================================
// Referencing Function: 0xc2ab10 .. 0xc2ab9f (143 bytes)
// Symbol:               sub_C2AB10
// Demangled:            sub_C2AB10
// ============================================================================

// ============================================================================
// Referencing Function: 0xcb3790 .. 0xcb3875 (229 bytes)
// Symbol:               _ZN3glf11InputDevice12UpdateCursorEjbii
// Demangled:            glf::InputDevice::UpdateCursor(unsigned int,bool,int,int)
// ============================================================================

// ============================================================================
// Referencing Function: 0xcb3880 .. 0xcb3c0a (906 bytes)
// Symbol:               _ZN3glf7Gamepad12PreSendEventERNS_9CoreEventE
// Demangled:            glf::Gamepad::PreSendEvent(glf::CoreEvent &)
// ============================================================================

// ============================================================================
// Referencing Function: 0xcb4140 .. 0xcb4209 (201 bytes)
// Symbol:               _ZN3glf7Gamepad23RaiseAnalogicStickEventEiff
// Demangled:            glf::Gamepad::RaiseAnalogicStickEvent(int,float,float)
// ============================================================================

// ============================================================================
// Referencing Function: 0xcb4420 .. 0xcb4503 (227 bytes)
// Symbol:               _ZN3glf7Gamepad15RaiseTouchEventEiNS_14InputEventTypeEjffj
// Demangled:            glf::Gamepad::RaiseTouchEvent(int,glf::InputEventType,unsigned int,float,float,unsigned int)
// ============================================================================
