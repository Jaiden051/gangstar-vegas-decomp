// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1b9be3c):
//   ../../../../../lib/grapher/inc/grapher/../config.h
// Referenced by 36 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x96e100 .. 0x96ea97 (2455 bytes)
// Symbol:               sub_96E100
// Demangled:            sub_96E100
// ============================================================================
/*
int sub_96E100(
        int a1,
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
        int16_t a20,
        int a21,
        unsigned int a22,
        size_t a23,
        int (**a24)(int),
        int a25,
        int a26)
{
  int *v27;
  uint32_t *v28;
  int v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  uint32_t *v33;
  uint32_t *v34;
  size_t v35;
  const void *v36;
  uint32_t *v37;
  grapher::ActorBase *Actor;
  int *v39;
  char *v40;
  int v41;
  unsigned int v42;
  int v44;
  unsigned int v45;
  uint32_t *v46;
  char *v47;
  uint32_t *v48;
  char *v49;
  uint32_t *v50;
  unsigned int v51;
  char *v52;
  void (**v53)(char *);
  int v54;
  unsigned int v55;
  int v56;
  char *v57;
  int v58;
  int v59;
  char *v60;
  int v61;
  int v62;
  char *v63;
  size_t v64;
  void (*v65)(int, int, size_t);
  int v66;
  size_t v67;
  void (*v68)(int, int, size_t);
  int v69;
  int v70;
  int v71;
  unsigned int v72;
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
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  char *v97;
  int v98;
  size_t v99;
  void (*v100)(int, int, size_t);
  char *v101;
  int v102;
  unsigned int v103;
  size_t v104;
  const void *v105;
  int v106;
  char *v107;
  char *v108;
  unsigned int v109;
  void (*v110)(int, const void *, size_t);
  int v111;
  size_t v112;
  int v113;
  int j;
  int i;
  int v116;

  (*(void (**)(int, int *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*(uint32_t *)a2 + 40))(
    a2,
    &v96,
    4,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    a1 + 32,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  v98 = 0;
  if ( a23 != 0 )
  {
    sub_1939D80(a9, a23, v98);
    v67 = a23;
    v68 = *(void (**)(int, int, size_t))(*(uint32_t *)a2 + 40);
    v69 = *(uint32_t *)(a1 + 32);
    if ( *(int *)(v69 - 4) >= 0 )
    {
      a1 = *(uint32_t *)(*(uint32_t *)a2 + 40);
      sub_19397C0(a9);
      v68 = (void (*)(int, int, size_t))a1;
      v69 = *(uint32_t *)(a1 + 32);
    }
    v68(a2, v69, v67);
  }
  else
  {
    sub_1939D80(a9, 0, v98);
  }
  v27 = (int *)sub_4EBBF0(4u, 1);
  *v27 = (int)&unk_213B814;
  *(uint32_t *)(a1 + 28) = v27;
  (*(void (**)(int, size_t *, int))(*(uint32_t *)a2 + 40))(a2, &a23, 4);
  v98 = 0;
  if ( a23 != 0 )
  {
    sub_1939D80((int)v27, a23, v98);
    v64 = a23;
    v65 = *(void (**)(int, int, size_t))(*(uint32_t *)a2 + 40);
    v66 = *v27;
    if ( *(int *)(*v27 - 4) >= 0 )
    {
      a1 = a23;
      v100 = *(void (**)(int, int, size_t))(*(uint32_t *)a2 + 40);
      sub_19397C0(v27);
      v66 = *v27;
      v65 = v100;
      v64 = a1;
    }
    v65(a2, v66, v64);
  }
  else
  {
    sub_1939D80((int)v27, 0, v98);
  }
  (*(void (**)(int, char *, int))(*(uint32_t *)a2 + 40))(a2, (char *)&a19 + 3, 1);
  if ( HIBYTE(a19) != 0 )
  {
    v71 = sub_4EBC30(0x100u, 1);
    *(uint32_t *)a1 = v71;
    (*(void (**)(int, int, int))(*(uint32_t *)a2 + 40))(a2, v71, 256);
  }
  (*(void (**)(int, char *, int))(*(uint32_t *)a2 + 40))(a2, (char *)&a19 + 3, 1);
  if ( HIBYTE(a19) != 0 )
  {
    v70 = sub_4EBC30(0x100u, 1);
    *(uint32_t *)(a1 + 4) = v70;
    (*(void (**)(int, int, int))(*(uint32_t *)a2 + 40))(a2, v70, 256);
  }
  v28 = (uint32_t *)sub_4EBC30(0x1Cu, 1);
  *v28 = 2;
  v28[1] = 0;
  v28[2] = 0;
  v28[3] = 0;
  v28[4] = 0;
  v28[5] = 0;
  v28[6] = 0;
  v113 = 0;
  *(uint32_t *)(a1 + 12) = v28 + 1;
  do
  {
    (*(void (**)(int, int16_t *, int))(*(uint32_t *)a2 + 40))(a2, &a20, 2);
    if ( a20 > 0 )
    {
      for ( i = 0; i < a20; ++i )
      {
        v33 = (uint32_t *)sub_4EBBF0(0x10u, 1);
        *v33 = 0;
        v33[1] = 0;
        v33[2] = 0;
        v33[3] = 0;
        v34 = (uint32_t *)sub_4EBBF0(4u, 1);
        *v34 = &unk_213B814;
        *v33 = v34;
        a1 = (int)v34;
        (*(void (**)(int, size_t *, int))(*(uint32_t *)a2 + 40))(a2, &a23, 4);
        v98 = 0;
        if ( a23 != 0 )
        {
          sub_1939D80(a1, a23, v98);
          v35 = a23;
          v110 = *(void (**)(int, const void *, size_t))(*(uint32_t *)a2 + 40);
          v36 = *(const void **)a1;
          if ( *(int *)(*(uint32_t *)a1 - 4) >= 0 )
          {
            v99 = a23;
            sub_19397C0(a1);
            v35 = v99;
            v36 = *(const void **)a1;
          }
          v110(a2, v36, v35);
        }
        else
        {
          sub_1939D80(a1, 0, v98);
        }
        (*(void (**)(int, unsigned int *, int))(*(uint32_t *)a2 + 40))(a2, &a22, 1);
        if ( (uint8_t)a22 != 0 )
        {
          v29 = sub_4EBC30(0x100u, 1);
          v33[3] = v29;
          (*(void (**)(int, int, int))(*(uint32_t *)a2 + 40))(a2, v29, 256);
        }
        v30 = (uint32_t *)(*(uint32_t *)(a1 + 12) + v113);
        v31 = (uint32_t *)v30[1];
        v105 = v31;
        if ( v31 == (uint32_t *)v30[2] )
        {
          v54 = ((int)v31 - *v30) >> 2;
          v112 = 4;
          v109 = v54;
          if ( v54 != 0 )
          {
            v55 = 2 * v54;
            if ( v109 > v55 || v55 > 0x3FFFFFFF )
              v112 = 0xFFFFFFFC;
            else
              v112 = 8 * v109;
          }
          a1 = *(uint32_t *)(a1 + 12) + v113;
          v108 = (char *)operator new(v112);
          v56 = a1;
          v57 = &v108[4 * v109];
          if ( v57 != nullptr )
            *(uint32_t *)v57 = v33;
          v58 = 0;
          v59 = ((int)v105 - *(uint32_t *)a1) >> 2;
          if ( v59 != 0 )
          {
            v58 = 4 * v59;
            memmove(v108, *(const void **)a1, 4 * v59);
            v56 = a1;
          }
          v60 = &v108[v58 + 4];
          v61 = 0;
          v62 = (*(uint32_t *)(v56 + 4) - (int)v105) >> 2;
          if ( v62 != 0 )
          {
            v61 = 4 * v62;
            a1 = v56;
            v101 = v60;
            memmove(v60, v105, 4 * v62);
            v60 = v101;
            v56 = a1;
          }
          v63 = &v60[v61];
          if ( *(uint32_t *)v56 != 0 )
          {
            a1 = v56;
            operator delete(*(void **)v56);
            v56 = a1;
          }
          *(uint32_t *)(v56 + 4) = v63;
          *(uint32_t *)v56 = v108;
          *(uint32_t *)(v56 + 8) = &v108[v112];
        }
        else
        {
          v32 = 0;
          if ( v31 != nullptr )
          {
            *v31 = v33;
            v32 = v30[1];
          }
          v30[1] = v32 + 4;
        }
      }
    }
    v113 += 12;
  }
  while ( v113 != 24 );
  v111 = 0;
  v116 = a2;
  do
  {
    v37 = (uint32_t *)sub_4EBBF0(0xCu, 1);
    *v37 = 0;
    v37[1] = 0;
    v37[2] = 0;
    *(uint32_t *)(a1 + 4 * v111 + 16) = v37;
    (*(void (**)(int, int16_t *, int))(*(uint32_t *)v116 + 40))(v116, &a20, 2);
    if ( a20 > 0 )
    {
      for ( j = 0; j < a20; ++j )
      {
        (*(void (**)(int, unsigned int *, int))(*(uint32_t *)v116 + 40))(v116, &a22, 4);
        (*(void (**)(int, size_t *, int))(*(uint32_t *)v116 + 40))(v116, &a23, 4);
        v42 = a22;
        if ( *((uint8_t *)&stru_1BB54.st_size + (uint32_t)&dword_20B9FF4) == 0
          && _cxa_guard_acquire((__guard *)&byte_20D5B50) != 0 )
        {
          grapher::ActorManager::ActorManager((grapher::ActorManager::Self *)&unk_20D5B60);
          _cxa_guard_release((__guard *)&byte_20D5B50);
          __cxa_atexit((void (*)(void *))grapher::ActorManager::~ActorManager, &unk_20D5B60, &unk_20D1280);
        }
        Actor = (grapher::ActorBase *)grapher::ActorManager::GetActor((grapher::ActorManager::Self *)&unk_20D5B60, v42);
        grapher::ActorInputEvent::ActorInputEvent((grapher::ActorInputEvent *)&a24, Actor, a23);
        v39 = *(int **)(a1 + 4 * v111 + 16);
        v40 = (char *)v39[1];
        if ( v40 == (char *)v39[2] )
        {
          v44 = (int)&v40[-*v39] >> 2;
          v104 = 12;
          v45 = -1431655765 * v44;
          if ( -1431655765 * v44 != 0 )
          {
            v72 = 1431655766 * v44;
            if ( v45 > 2 * v45 || v72 > 0x15555555 )
              v104 = 0xFFFFFFFC;
            else
              v104 = 24 * v45;
          }
          a1 = v45;
          v102 = gll_operator_new(v104, (int)"../../../../../lib/grapher/inc/grapher/../config.h", 146);
          v103 = v102 + 12;
          v46 = (uint32_t *)(v102 + 12 * a1);
          if ( v46 != nullptr )
          {
            *v46 = &off_20678D0;
            v46[1] = a25;
            v46[2] = a26;
          }
          v47 = (char *)*v39;
          v106 = *v39;
          if ( v40 != (char *)*v39 )
          {
            v48 = (uint32_t *)v102;
            do
            {
              if ( v48 != nullptr )
              {
                *v48 = &off_20678D0;
                v48[1] = *((uint32_t *)v47 + 1);
                v48[2] = *((uint32_t *)v47 + 2);
              }
              v47 += 12;
              v48 += 3;
            }
            while ( v40 != v47 );
            v103 = v102 + 4 * ((unsigned int)&v40[-v106 - 12] >> 2) + 24;
          }
          v107 = (char *)v39[1];
          if ( v40 != v107 )
          {
            v49 = v40;
            v50 = (uint32_t *)v103;
            do
            {
              if ( v50 != nullptr )
              {
                *v50 = &off_20678D0;
                v50[1] = *((uint32_t *)v49 + 1);
                v50[2] = *((uint32_t *)v49 + 2);
              }
              v49 += 12;
              v50 += 3;
            }
            while ( v107 != v49 );
            v51 = 715827883 * ((unsigned int)(v107 - (v40 + 12)) >> 2);
            v107 = (char *)v39[1];
            v103 += 12 * v51 + 12;
          }
          v52 = (char *)*v39;
          if ( v107 != (char *)*v39 )
          {
            do
            {
              v53 = *(void (***)(char *))v52;
              v97 = v52;
              v52 += 12;
              (*v53)(v97);
            }
            while ( v107 != v52 );
            v52 = (char *)*v39;
          }
          if ( v52 != nullptr )
            sub_4EB800((int)v52);
          *v39 = v102;
          v39[1] = v103;
          v39[2] = v104 + v102;
        }
        else
        {
          v41 = 0;
          if ( v40 != nullptr )
          {
            *(uint32_t *)v40 = &off_20678D0;
            *((uint32_t *)v40 + 1) = a25;
            *((uint32_t *)v40 + 2) = a26;
            v41 = v39[1];
          }
          v39[1] = v41 + 12;
        }
        a24 = &off_20678D0;
      }
    }
    ++v111;
  }
  while ( v111 != 3 );
  if ( std::string::compare(a9, "Player") == 0 )
  {
    dword_20D76E0 = a1;
    return 1;
  }
  if ( std::string::compare(a9, "Die") != 0 )
  {
    if ( std::string::compare(a9, "Shutdown") != 0 )
    {
      if ( std::string::compare(a9, "Character") == 0 )
        dword_20D76B0 = a1;
    }
    else
    {
      dword_20D76C0 = a1;
    }
    return 1;
  }
  dword_20D76D0 = a1;
  return 1;
}

*/

// ============================================================================
// Referencing Function: 0x96f440 .. 0x97085e (5150 bytes)
// Symbol:               sub_96F440
// Demangled:            sub_96F440
// ============================================================================
/*
void sub_96F440(int a1, int *a2)
{
  int *v2;
  uint32_t *v3;
  int v4;
  int v5;
  int ***v6;
  int v7;
  int **v8;
  int *v9;
  size_t v10;
  void (*v11)(uint32_t *, int, size_t);
  int v12;
  uint32_t *v13;
  grapher::ActorBase *Actor;
  int *v15;
  char *v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  size_t v21;
  size_t v22;
  size_t v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  void *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  bool v36; // cc
  int v37;
  unsigned int v38;
  uint32_t *v39;
  char *v40;
  uint32_t *v41;
  char *v42;
  uint32_t *v43;
  unsigned int v44;
  char *v45;
  void (**v46)(char *);
  int v47;
  unsigned int v48;
  const void *v49;
  char *v50;
  int v51;
  int v52;
  char *v53;
  int v54;
  int v55;
  char *v56;
  int v57;
  int v58;
  size_t v59;
  void (*v60)(uint32_t *, int, size_t);
  int v61;
  size_t v62;
  void (*v63)(uint32_t *, int, size_t);
  int v64;
  int v65;
  int v66;
  int v67;
  unsigned int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  char v73;
  int v74;
  char v75;
  char *v76;
  size_t v77;
  size_t v78;
  unsigned int v79;
  const void *v80;
  void (*v81)(uint32_t *, int, size_t);
  char v82;
  char v83;
  void (*v84)(uint32_t *, int, size_t);
  char *v85;
  int v86;
  unsigned int v87;
  size_t v88;
  int v89;
  int v90;
  char *v91;
  size_t v92;
  int v93;
  int v94;
  char *v95;
  unsigned int v96;
  int i;
  int v98;
  int v99;
  int *v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  uint32_t *v106;
  int v107;
  int v108;
  int v109;
  int v110;
  char v111;
  uint16_t v112[3];
  int16_t v113;
  unsigned int v114;
  size_t v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int (**v120)(int);
  int v121;
  int v122;
  uint32_t v123[3];
  uint32_t v124[16];

  glf::FileStreamImpl::FileStreamImpl((glf::IOStream::Self *)v124, *a2, 1);
  v124[0] = off_2048D28;
  sub_A46990(v123, v124, 0, 0);
  if ( (uint8_t)glf::Stream::IsOpened((glf::Stream *)v124) != 0 )
  {
    (*(void (**)(uint32_t *, int16_t *, int))(v123[0] + 40))(v123, &v113, 2);
    if ( v113 > 0 )
    {
      v89 = 0;
      v93 = a1 + 12;
      while ( 1 )
      {
        v100 = (int *)sub_4EBBF0(0x24u, 1);
        *v100 = 0;
        v100[1] = 0;
        v100[2] = 0;
        v100[7] = 0;
        v100[8] = (int)&unk_213B814;
        v100[4] = 0;
        v100[5] = 0;
        v100[6] = 0;
        v94 = (int)(v100 + 8);
        (*(void (**)(uint32_t *, size_t *, int))(v123[0] + 40))(v123, &v115, 4);
        if ( v115 != 0 )
        {
          sub_1939D80(v94, v115, 0);
          v62 = v115;
          v63 = *(void (**)(uint32_t *, int, size_t))(v123[0] + 40);
          v64 = v100[8];
          if ( *(int *)(v64 - 4) >= 0 )
          {
            sub_19397C0(v94);
            v64 = v100[8];
          }
          v63(v123, v64, v62);
        }
        else
        {
          sub_1939D80(v94, 0, 0);
        }
        v2 = (int *)sub_4EBBF0(4u, 1);
        *v2 = (int)&unk_213B814;
        v100[7] = (int)v2;
        (*(void (**)(uint32_t *, size_t *, int))(v123[0] + 40))(v123, &v115, 4);
        if ( v115 != 0 )
        {
          sub_1939D80((int)v2, v115, 0);
          v59 = v115;
          v60 = *(void (**)(uint32_t *, int, size_t))(v123[0] + 40);
          v61 = *v2;
          if ( *(int *)(*v2 - 4) >= 0 )
          {
            v81 = *(void (**)(uint32_t, uint32_t, uint32_t))(v123[0] + 40);
            sub_19397C0(v2);
            v61 = *v2;
            v60 = (void (*)(uint32_t *, int, size_t))v81;
          }
          v60(v123, v61, v59);
        }
        else
        {
          sub_1939D80((int)v2, 0, 0);
        }
        (*(void (**)(uint32_t *, char *, int))(v123[0] + 40))(v123, &v111, 1);
        if ( v111 != 0 )
        {
          v65 = sub_4EBC30(0x100u, 1);
          *v100 = v65;
          (*(void (**)(uint32_t *, int, int))(v123[0] + 40))(v123, v65, 256);
        }
        (*(void (**)(uint32_t *, char *, int))(v123[0] + 40))(v123, &v111, 1);
        if ( v111 != 0 )
        {
          v66 = sub_4EBC30(0x100u, 1);
          v100[1] = v66;
          (*(void (**)(uint32_t *, int, int))(v123[0] + 40))(v123, v66, 256);
        }
        v3 = (uint32_t *)sub_4EBC30(0x1Cu, 1);
        *v3 = 2;
        v3[1] = 0;
        v3[2] = 0;
        v3[3] = 0;
        v3[4] = 0;
        v3[5] = 0;
        v3[6] = 0;
        v101 = 0;
        v100[3] = (int)(v3 + 1);
        do
        {
          (*(void (**)(uint32_t *, uint16_t *, int))(v123[0] + 40))(v123, v112, 2);
          if ( v112[0] > 0 )
          {
            v104 = 0;
            do
            {
              v8 = (int **)sub_4EBBF0(0x10u, 1);
              *v8 = nullptr;
              v8[1] = nullptr;
              v8[2] = nullptr;
              v8[3] = nullptr;
              v9 = (int *)sub_4EBBF0(4u, 1);
              *v9 = (int)&unk_213B814;
              *v8 = v9;
              (*(void (**)(uint32_t *, size_t *, int))(v123[0] + 40))(v123, &v115, 4);
              if ( v115 != 0 )
              {
                sub_1939D80((int)v9, v115, 0);
                v10 = v115;
                v11 = *(void (**)(uint32_t *, int, size_t))(v123[0] + 40);
                v12 = *v9;
                if ( *(int *)(*v9 - 4) >= 0 )
                {
                  v77 = v115;
                  v84 = *(void (**)(uint32_t, uint32_t, uint32_t))(v123[0] + 40);
                  sub_19397C0(v9);
                  v12 = *v9;
                  v11 = (void (*)(uint32_t *, int, size_t))v84;
                  v10 = v77;
                }
                v11(v123, v12, v10);
              }
              else
              {
                sub_1939D80((int)v9, 0, 0);
              }
              (*(void (**)(uint32_t *, unsigned int *, int))(v123[0] + 40))(v123, &v114, 1);
              if ( (uint8_t)v114 != 0 )
              {
                v4 = sub_4EBC30(0x100u, 1);
                v8[3] = (int *)v4;
                (*(void (**)(uint32_t *, int, int))(v123[0] + 40))(v123, v4, 256);
              }
              v5 = v100[3] + v101;
              v6 = *(int ****)(v5 + 4);
              if ( v6 == *(int ****)(v5 + 8) )
              {
                v47 = ((int)v6 - *(uint32_t *)v5) >> 2;
                v92 = 4;
                v96 = v47;
                if ( v47 != 0 )
                {
                  v48 = 2 * v47;
                  if ( v96 > v48 || v48 > 0x3FFFFFFF )
                    v92 = 0xFFFFFFFC;
                  else
                    v92 = 8 * v96;
                }
                v80 = *(const void **)(v5 + 4);
                v95 = (char *)operator new(v92);
                v49 = v80;
                v50 = &v95[4 * v96];
                if ( v50 != nullptr )
                  *(uint32_t *)v50 = v8;
                v51 = 0;
                v52 = ((int)v80 - *(uint32_t *)v5) >> 2;
                if ( v52 != 0 )
                {
                  v51 = 4 * v52;
                  memmove(v95, *(const void **)v5, 4 * v52);
                  v49 = v80;
                }
                v53 = &v95[v51 + 4];
                v54 = 0;
                v55 = (*(uint32_t *)(v5 + 4) - (int)v49) >> 2;
                if ( v55 != 0 )
                {
                  v54 = 4 * v55;
                  v85 = v53;
                  memmove(v53, v49, 4 * v55);
                  v53 = v85;
                }
                v56 = &v53[v54];
                if ( *(uint32_t *)v5 != 0 )
                  operator delete(*(void **)v5);
                *(uint32_t *)v5 = v95;
                *(uint32_t *)(v5 + 4) = v56;
                *(uint32_t *)(v5 + 8) = &v95[v92];
              }
              else
              {
                v7 = 0;
                if ( v6 != nullptr )
                {
                  *v6 = v8;
                  v7 = *(uint32_t *)(v5 + 4);
                }
                *(uint32_t *)(v5 + 4) = v7 + 4;
              }
              ++v104;
            }
            while ( v104 < v112[0] );
          }
          v101 += 12;
        }
        while ( v101 != 24 );
        for ( i = 0; i != 3; ++i )
        {
          v13 = (uint32_t *)sub_4EBBF0(0xCu, 1);
          *v13 = 0;
          v13[1] = 0;
          v13[2] = 0;
          v100[i + 4] = (int)v13;
          (*(void (**)(uint32_t *, uint16_t *, int))(v123[0] + 40))(v123, v112, 2);
          if ( v112[0] > 0 )
          {
            v105 = 0;
            do
            {
              (*(void (**)(uint32_t *, unsigned int *, int))(v123[0] + 40))(v123, &v114, 4);
              (*(void (**)(uint32_t *, size_t *, int))(v123[0] + 40))(v123, &v115, 4);
              v18 = v114;
              if ( *((uint8_t *)&stru_1BB54.st_size + (uint32_t)&dword_20B9FF4) == 0
                && _cxa_guard_acquire((__guard *)&byte_20D5B50) != 0 )
              {
                grapher::ActorManager::ActorManager((grapher::ActorManager::Self *)&unk_20D5B60);
                _cxa_guard_release((__guard *)&byte_20D5B50);
                __cxa_atexit((void (*)(void *))grapher::ActorManager::~ActorManager, &unk_20D5B60, &unk_20D1280);
              }
              Actor = (grapher::ActorBase *)grapher::ActorManager::GetActor((grapher::ActorManager::Self *)&unk_20D5B60, v18);
              grapher::ActorInputEvent::ActorInputEvent((grapher::ActorInputEvent *)&v120, Actor, v115);
              v15 = (int *)v100[i + 4];
              v16 = (char *)v15[1];
              if ( v16 == (char *)v15[2] )
              {
                v37 = (int)&v16[-*v15] >> 2;
                v88 = 12;
                v38 = -1431655765 * v37;
                if ( -1431655765 * v37 != 0 )
                {
                  v68 = 1431655766 * v37;
                  if ( v38 > 2 * v38 || v68 > 0x15555555 )
                    v88 = 0xFFFFFFFC;
                  else
                    v88 = 24 * v38;
                }
                v79 = v38;
                v86 = gll_operator_new(v88, (int)"../../../../../lib/grapher/inc/grapher/../config.h", 146);
                v87 = v86 + 12;
                v39 = (uint32_t *)(v86 + 12 * v79);
                if ( v39 != nullptr )
                {
                  *v39 = &off_20678D0;
                  v39[1] = v121;
                  v39[2] = v122;
                }
                v40 = (char *)*v15;
                v90 = *v15;
                if ( v16 != (char *)*v15 )
                {
                  v41 = (uint32_t *)v86;
                  do
                  {
                    if ( v41 != nullptr )
                    {
                      *v41 = &off_20678D0;
                      v41[1] = *((uint32_t *)v40 + 1);
                      v41[2] = *((uint32_t *)v40 + 2);
                    }
                    v40 += 12;
                    v41 += 3;
                  }
                  while ( v16 != v40 );
                  v87 = v86 + 4 * ((unsigned int)&v16[-v90 - 12] >> 2) + 24;
                }
                v91 = (char *)v15[1];
                if ( v16 != v91 )
                {
                  v42 = v16;
                  v43 = (uint32_t *)v87;
                  do
                  {
                    if ( v43 != nullptr )
                    {
                      *v43 = &off_20678D0;
                      v43[1] = *((uint32_t *)v42 + 1);
                      v43[2] = *((uint32_t *)v42 + 2);
                    }
                    v42 += 12;
                    v43 += 3;
                  }
                  while ( v91 != v42 );
                  v44 = 715827883 * ((unsigned int)(v91 - (v16 + 12)) >> 2);
                  v91 = (char *)v15[1];
                  v87 += 12 * v44 + 12;
                }
                v45 = (char *)*v15;
                if ( (char *)*v15 != v91 )
                {
                  do
                  {
                    v46 = *(void (***)(char *))v45;
                    v76 = v45;
                    v45 += 12;
                    (*v46)(v76);
                  }
                  while ( v45 != v91 );
                  v45 = (char *)*v15;
                }
                if ( v45 != nullptr )
                  sub_4EB800((int)v45);
                *v15 = v86;
                v15[1] = v87;
                v15[2] = v88 + v86;
              }
              else
              {
                v17 = 0;
                if ( v16 != nullptr )
                {
                  *(uint32_t *)v16 = &off_20678D0;
                  *((uint32_t *)v16 + 1) = v121;
                  *((uint32_t *)v16 + 2) = v122;
                  v17 = v15[1];
                }
                v15[1] = v17 + 12;
              }
              ++v105;
              v120 = &off_20678D0;
            }
            while ( v105 < v112[0] );
          }
        }
        if ( std::string::compare(v94, "Player") == 0 )
          break;
        if ( std::string::compare(v94, "Die") != 0 )
        {
          if ( std::string::compare(v94, "Shutdown") != 0 )
          {
            if ( std::string::compare(v94, "Character") == 0 )
              dword_20D76B0 = (int)v100;
          }
          else
          {
            dword_20D76C0 = (int)v100;
          }
LABEL_42:
          v19 = *(uint32_t *)(a1 + 16);
          if ( v19 == 0 )
            goto LABEL_124;
          goto LABEL_43;
        }
        dword_20D76D0 = (int)v100;
        v19 = *(uint32_t *)(a1 + 16);
        if ( v19 == 0 )
          goto LABEL_124;
LABEL_43:
        v102 = a1 + 12;
        v20 = v19;
        v98 = v19;
        v106 = (uint32_t *)v100[8];
        v21 = *(v106 - 3);
        do
        {
          while ( 1 )
          {
            v22 = *(uint32_t *)(*(uint32_t *)(v20 + 16) - 12);
            v23 = v22;
            v78 = v21;
            if ( v21 <= v22 )
              v23 = v21;
            v24 = memcmp(*(const void **)(v20 + 16), v106, v23);
            v21 = v78;
            v25 = v22 - v78;
            if ( v24 == 0 )
              v24 = v25;
            if ( v24 < 0 )
              break;
            v102 = v20;
            v20 = *(uint32_t *)(v20 + 8);
            if ( v20 == 0 )
              goto LABEL_51;
          }
          v20 = *(uint32_t *)(v20 + 12);
        }
        while ( v20 != 0 );
LABEL_51:
        v26 = v98;
        if ( v93 == v102 || (int)std::string::compare_str(v94, v102 + 16) < 0 )
          goto LABEL_71;
        v107 = a1 + 12;
        do
        {
          while ( (int)std::string::compare_str(v26 + 16, v94) >= 0 )
          {
            v107 = v26;
            v26 = *(uint32_t *)(v26 + 8);
            if ( v26 == 0 )
              goto LABEL_57;
          }
          v26 = *(uint32_t *)(v26 + 12);
        }
        while ( v26 != 0 );
LABEL_57:
        v27 = v107;
        if ( v107 == v93 )
        {
          std::string::__construct_copy(&v116, v94);
          v117 = 0;
          if ( *(uint32_t *)(a1 + 28) != 0 )
          {
            v70 = *(uint32_t *)(a1 + 24) + 16;
            v99 = *(uint32_t *)(a1 + 24);
            if ( (int)std::string::compare_str(v70, &v116) < 0 )
            {
              LOBYTE(v71) = 1;
              if ( v93 != v99 )
                v71 = std::string::compare_str(&v116, v70) >> 31;
              v27 = operator new(0x18u);
              if ( v27 != -16 )
              {
                std::string::__construct_copy(v27 + 16, &v116);
                *(uint32_t *)(v27 + 20) = v117;
              }
              sub_1904970(v71, v27, v99, v107);
              ++*(uint32_t *)(a1 + 28);
              goto LABEL_67;
            }
          }
LABEL_166:
          sub_969DD0(&v116);
          v27 = v109;
          goto LABEL_67;
        }
        if ( (int)std::string::compare_str(v94, v107 + 16) >= 0 )
          goto LABEL_68;
        std::string::__construct_copy(&v116, v94);
        v117 = 0;
        if ( (int)std::string::compare_str(&v116, v107 + 16) >= 0 )
        {
          if ( (int)std::string::compare_str(v107 + 16, &v116) >= 0 )
            goto LABEL_67;
          if ( v107 == *(uint32_t *)(a1 + 24) )
            goto LABEL_179;
          v69 = sub_19048E0(v107);
          if ( (int)std::string::compare_str(&v116, v69 + 16) >= 0 )
            goto LABEL_166;
          if ( *(uint32_t *)(v107 + 12) == 0 )
          {
LABEL_179:
            sub_9672D0(0, v107, &v116);
            v27 = v110;
            goto LABEL_67;
          }
          v27 = operator new(0x18u);
          if ( v27 != -16 )
          {
            std::string::__construct_copy(v27 + 16, &v116);
            *(uint32_t *)(v27 + 20) = v117;
          }
          sub_1904970(1, v27, v69, v93);
        }
        else
        {
          if ( v107 == *(uint32_t *)(a1 + 20) )
          {
            sub_9672D0(v107, v107, &v116);
            v27 = v110;
            goto LABEL_67;
          }
          v28 = sub_1904940(v107);
          v29 = v28 + 16;
          v30 = v28;
          if ( (int)std::string::compare_str(v28 + 16, &v116) >= 0 )
            goto LABEL_166;
          if ( *(uint32_t *)(v30 + 12) == 0 )
          {
            LOBYTE(v74) = 1;
            if ( v93 != v30 )
              v74 = std::string::compare_str(&v116, v29) >> 31;
            v83 = v74;
            v27 = operator new(0x18u);
            v75 = v83;
            if ( v27 != -16 )
            {
              std::string::__construct_copy(v27 + 16, &v116);
              *(uint32_t *)(v27 + 20) = v117;
              v75 = v83;
            }
            sub_1904970(v75, v27, v30, v93);
            ++*(uint32_t *)(a1 + 28);
            goto LABEL_67;
          }
          v27 = operator new(0x18u);
          if ( v27 != -16 )
          {
            std::string::__construct_copy(v27 + 16, &v116);
            *(uint32_t *)(v27 + 20) = v117;
          }
          sub_1904970(1, v27, v107, v93);
        }
        ++*(uint32_t *)(a1 + 28);
LABEL_67:
        std::string::~string(&v116);
LABEL_68:
        v31 = *(void **)(v27 + 20);
        if ( v31 != nullptr )
        {
          sub_96DF10(*(uint32_t *)(v27 + 20));
          operator delete(v31);
        }
        v26 = *(uint32_t *)(a1 + 16);
        if ( v26 == 0 )
          goto LABEL_124;
LABEL_71:
        v108 = a1 + 12;
        do
        {
          while ( (int)std::string::compare_str(v26 + 16, v94) >= 0 )
          {
            v108 = v26;
            v26 = *(uint32_t *)(v26 + 8);
            if ( v26 == 0 )
              goto LABEL_75;
          }
          v26 = *(uint32_t *)(v26 + 12);
        }
        while ( v26 != 0 );
LABEL_75:
        v32 = v108;
        if ( v108 == v93 )
        {
LABEL_124:
          std::string::__construct_copy(&v118, v94);
          v119 = 0;
          if ( *(uint32_t *)(a1 + 28) != 0 )
          {
            v57 = *(uint32_t *)(a1 + 24) + 16;
            v103 = *(uint32_t *)(a1 + 24);
            if ( (int)std::string::compare_str(v57, &v118) < 0 )
            {
              LOBYTE(v58) = 1;
              if ( v93 != v103 )
                v58 = std::string::compare_str(&v118, v57) >> 31;
              v32 = operator new(0x18u);
              if ( v32 != -16 )
              {
                std::string::__construct_copy(v32 + 16, &v118);
                *(uint32_t *)(v32 + 20) = v119;
              }
              sub_1904970(v58, v32, v103, v93);
              ++*(uint32_t *)(a1 + 28);
              goto LABEL_85;
            }
          }
LABEL_155:
          sub_969DD0(&v118);
          v32 = v109;
          goto LABEL_85;
        }
        if ( (int)std::string::compare_str(v94, v108 + 16) < 0 )
        {
          std::string::__construct_copy(&v118, v94);
          v119 = 0;
          if ( (int)std::string::compare_str(&v118, v108 + 16) >= 0 )
          {
            if ( (int)std::string::compare_str(v108 + 16, &v118) >= 0 )
              goto LABEL_85;
            if ( v108 == *(uint32_t *)(a1 + 24) )
              goto LABEL_178;
            v67 = sub_19048E0(v108);
            if ( (int)std::string::compare_str(&v118, v67 + 16) >= 0 )
              goto LABEL_155;
            if ( *(uint32_t *)(v108 + 12) == 0 )
            {
LABEL_178:
              sub_9672D0(0, v108, &v118);
              v32 = v110;
              goto LABEL_85;
            }
            v32 = operator new(0x18u);
            if ( v32 != -16 )
            {
              std::string::__construct_copy(v32 + 16, &v118);
              *(uint32_t *)(v32 + 20) = v119;
            }
            sub_1904970(1, v32, v67, v93);
          }
          else
          {
            if ( v108 == *(uint32_t *)(a1 + 20) )
            {
              sub_9672D0(v108, v108, &v118);
              v32 = v110;
              goto LABEL_85;
            }
            v33 = sub_1904940(v108);
            v34 = v33 + 16;
            v35 = v33;
            if ( (int)std::string::compare_str(v33 + 16, &v118) >= 0 )
              goto LABEL_155;
            if ( *(uint32_t *)(v35 + 12) == 0 )
            {
              LOBYTE(v72) = 1;
              if ( v93 != v35 )
                v72 = std::string::compare_str(&v118, v34) >> 31;
              v82 = v72;
              v32 = operator new(0x18u);
              v73 = v82;
              if ( v32 != -16 )
              {
                std::string::__construct_copy(v32 + 16, &v118);
                *(uint32_t *)(v32 + 20) = v119;
                v73 = v82;
              }
              sub_1904970(v73, v32, v35, v93);
              ++*(uint32_t *)(a1 + 28);
              goto LABEL_85;
            }
            v32 = operator new(0x18u);
            if ( v32 != -16 )
            {
              std::string::__construct_copy(v32 + 16, &v118);
              *(uint32_t *)(v32 + 20) = v119;
            }
            sub_1904970(1, v32, v108, v93);
          }
          ++*(uint32_t *)(a1 + 28);
LABEL_85:
          std::string::~string(&v118);
        }
        *(uint32_t *)(v32 + 20) = v100;
        v36 = v113 <= ++v89;
        *(uint8_t *)(a1 + 32) = 1;
        if ( v36 )
          goto LABEL_87;
      }
      dword_20D76E0 = (int)v100;
      goto LABEL_42;
    }
LABEL_87:
    glf::FileStreamImpl::Close((glf::FileStreamImpl *)v124);
  }
  sub_A188C0(v123);
  v124[0] = off_2048D28;
  glf::FileStreamImpl::~FileStreamImpl((glf::FileStreamImpl *)v124);
}

*/

// ============================================================================
// Referencing Function: 0xb69960 .. 0xb69a51 (241 bytes)
// Symbol:               sub_B69960
// Demangled:            sub_B69960
// ============================================================================

// ============================================================================
// Referencing Function: 0xb73150 .. 0xb732e5 (405 bytes)
// Symbol:               sub_B73150
// Demangled:            sub_B73150
// ============================================================================

// ============================================================================
// Referencing Function: 0xbdcb50 .. 0xbdce5d (781 bytes)
// Symbol:               _ZNSt3mapISsPFPN7grapher9ActorBaseEjSsN4pugi8xml_nodeEESt4lessISsENS0_9allocatorISt4pairIKSsS6_EEEEixERSB_
// Demangled:            std::map<std::string,grapher::ActorBase * (*)(unsigned int,std::string,pugi::xml_node),std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::ActorBase * (*)(unsigned int,std::string,pugi::xml_node)>>>::operator[](std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13b44d0 .. 0x13b466b (411 bytes)
// Symbol:               sub_13B44D0
// Demangled:            sub_13B44D0
// ============================================================================

// ============================================================================
// Referencing Function: 0x13b4670 .. 0x13b480c (412 bytes)
// Symbol:               sub_13B4670
// Demangled:            sub_13B4670
// ============================================================================

// ============================================================================
// Referencing Function: 0x13b4810 .. 0x13b49ca (442 bytes)
// Symbol:               sub_13B4810
// Demangled:            sub_13B4810
// ============================================================================

// ============================================================================
// Referencing Function: 0x13b49d0 .. 0x13b4c12 (578 bytes)
// Symbol:               sub_13B49D0
// Demangled:            sub_13B49D0
// ============================================================================

// ============================================================================
// Referencing Function: 0x13b4c20 .. 0x13b509f (1151 bytes)
// Symbol:               sub_13B4C20
// Demangled:            sub_13B4C20
// ============================================================================

// ============================================================================
// Referencing Function: 0x13b7810 .. 0x13b81f6 (2534 bytes)
// Symbol:               _ZN7grapher9ActorBase20SerializeConnectionsERSo
// Demangled:            grapher::ActorBase::SerializeConnections(std::ostream &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13b9ac0 .. 0x13b9ea7 (999 bytes)
// Symbol:               _ZN7grapher9ActorBase22AddOutputPinConnectionEiPS0_i
// Demangled:            grapher::ActorBase::AddOutputPinConnection(int,grapher::ActorBase*,int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13ba7b0 .. 0x13bac8a (1242 bytes)
// Symbol:               _ZNSt3mapIiSsSt4lessIiEN7grapher9allocatorISt4pairIKiSsEEEEixERS5_
// Demangled:            std::map<int,std::string,std::less<int>,grapher::allocator<std::pair<int const,std::string>>>::operator[](int const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13bbfd0 .. 0x13bc253 (643 bytes)
// Symbol:               _ZNSt6vectorIN7grapher15ActorInputEventENS0_9allocatorIS1_EEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS1_S4_EERKS1_
// Demangled:            std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>::_M_insert_aux(__gnu_cxx::__normal_iterator<grapher::ActorInputEvent*,std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>>,grapher::ActorInputEvent const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13bc260 .. 0x13bc9e8 (1928 bytes)
// Symbol:               _ZNSt8_Rb_treeISsSt4pairIKSsN7grapher7PinInfoEESt10_Select1stIS4_ESt4lessISsENS2_9allocatorIS4_EEE7_M_copyEPKSt13_Rb_tree_nodeIS4_EPSD_
// Demangled:            std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,grapher::PinInfo>> const*,std::_Rb_tree_node<std::pair<std::string const,grapher::PinInfo>>*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13bc9f0 .. 0x13bd30b (2331 bytes)
// Symbol:               _ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsEN7grapher9allocatorIS2_EEE7_M_copyEPKSt13_Rb_tree_nodeIS2_EPSC_
// Demangled:            std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,int>> const*,std::_Rb_tree_node<std::pair<std::string const,int>>*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13bd310 .. 0x13bdb3b (2091 bytes)
// Symbol:               _ZNSt8_Rb_treeIiSt4pairIKibESt10_Select1stIS2_ESt4lessIiEN7grapher9allocatorIS2_EEE7_M_copyEPKSt13_Rb_tree_nodeIS2_EPSC_
// Demangled:            std::_Rb_tree<int,std::pair<int const,bool>,std::_Select1st<std::pair<int const,bool>>,std::less<int>,grapher::allocator<std::pair<int const,bool>>>::_M_copy(std::_Rb_tree_node<std::pair<int const,bool>> const*,std::_Rb_tree_node<std::pair<int const,bool>>*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13bdb40 .. 0x13be473 (2355 bytes)
// Symbol:               _ZNSt8_Rb_treeIiSt4pairIKiSsESt10_Select1stIS2_ESt4lessIiEN7grapher9allocatorIS2_EEE7_M_copyEPKSt13_Rb_tree_nodeIS2_EPSC_
// Demangled:            std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,grapher::allocator<std::pair<int const,std::string>>>::_M_copy(std::_Rb_tree_node<std::pair<int const,std::string>> const*,std::_Rb_tree_node<std::pair<int const,std::string>>*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13be7a0 .. 0x13bec25 (1157 bytes)
// Symbol:               _ZNSt6vectorIPN7grapher13ActorPropertyENS0_9allocatorIS2_EEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPS2_S5_EEjRKS2_
// Demangled:            std::vector<grapher::ActorProperty *,grapher::allocator<grapher::ActorProperty *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<grapher::ActorProperty **,std::vector<grapher::ActorProperty *,grapher::allocator<grapher::ActorProperty *>>>,unsigned int,grapher::ActorProperty * const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13bec30 .. 0x13bed4b (283 bytes)
// Symbol:               _ZNSt8_Rb_treeISsSt4pairIKSsN7grapher7PinInfoEESt10_Select1stIS4_ESt4lessISsENS2_9allocatorIS4_EEE10_M_insert_EPKSt18_Rb_tree_node_baseSE_RKS4_
// Demangled:            std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,grapher::PinInfo> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13bed50 .. 0x13bef71 (545 bytes)
// Symbol:               _ZNSt8_Rb_treeISsSt4pairIKSsN7grapher7PinInfoEESt10_Select1stIS4_ESt4lessISsENS2_9allocatorIS4_EEE16_M_insert_uniqueERKS4_
// Demangled:            std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_insert_unique(std::pair<std::string const,grapher::PinInfo> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13bef80 .. 0x13bf429 (1193 bytes)
// Symbol:               _ZNSt8_Rb_treeISsSt4pairIKSsN7grapher7PinInfoEESt10_Select1stIS4_ESt4lessISsENS2_9allocatorIS4_EEE17_M_insert_unique_ESt23_Rb_tree_const_iteratorIS4_ERKS4_
// Demangled:            std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,grapher::PinInfo>>,std::pair<std::string const,grapher::PinInfo> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13bf620 .. 0x13bf72b (267 bytes)
// Symbol:               _ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsEN7grapher9allocatorIS2_EEE10_M_insert_EPKSt18_Rb_tree_node_baseSD_RKS2_
// Demangled:            std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,int> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13bf730 .. 0x13bf945 (533 bytes)
// Symbol:               _ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsEN7grapher9allocatorIS2_EEE16_M_insert_uniqueERKS2_
// Demangled:            std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_insert_unique(std::pair<std::string const,int> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13bf950 .. 0x13bfdd9 (1161 bytes)
// Symbol:               _ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsEN7grapher9allocatorIS2_EEE17_M_insert_unique_ESt23_Rb_tree_const_iteratorIS2_ERKS2_
// Demangled:            std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,int>>,std::pair<std::string const,int> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13c2020 .. 0x13c2d3e (3358 bytes)
// Symbol:               _ZN7grapher9ActorFile4SaveERKSs
// Demangled:            grapher::ActorFile::Save(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13c2d40 .. 0x13c33d9 (1689 bytes)
// Symbol:               _ZN7grapher9ActorFile13LoadingFinishEv
// Demangled:            grapher::ActorFile::LoadingFinish(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13c33e0 .. 0x13c5586 (8614 bytes)
// Symbol:               _ZN7grapher9ActorFile4LoadEb
// Demangled:            grapher::ActorFile::Load(bool)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13c61a0 .. 0x13c6378 (472 bytes)
// Symbol:               _ZN7grapher12ActorManager17AddIntoUpdateListEPNS_9ActorBaseEPNS_12ActorContextE
// Demangled:            grapher::ActorManager::AddIntoUpdateList(grapher::ActorBase *,grapher::ActorContext *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13c6380 .. 0x13c6558 (472 bytes)
// Symbol:               _ZN7grapher12ActorManager20RemoveFromUpdateListEPNS_9ActorBaseEPNS_12ActorContextE
// Demangled:            grapher::ActorManager::RemoveFromUpdateList(grapher::ActorBase *,grapher::ActorContext *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13c6560 .. 0x13c671c (444 bytes)
// Symbol:               _ZN7grapher12ActorManager20RemoveFromUpdateListEPNS_12ActorContextE
// Demangled:            grapher::ActorManager::RemoveFromUpdateList(grapher::ActorContext *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13c68e0 .. 0x13c6a89 (425 bytes)
// Symbol:               _ZN7grapher12ActorManager16AddActorVariableEPNS_13ActorVariableE
// Demangled:            grapher::ActorManager::AddActorVariable(grapher::ActorVariable *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13c82f0 .. 0x13c83f1 (257 bytes)
// Symbol:               _ZN7grapher12ActorManager10QueueEventEPNS_9ActorBaseEiPNS_12ActorContextE
// Demangled:            grapher::ActorManager::QueueEvent(grapher::ActorBase *,int,grapher::ActorContext *)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13c8400 .. 0x13c90d7 (3287 bytes)
// Symbol:               _ZN7grapher12ActorManager6UpdateEi
// Demangled:            grapher::ActorManager::Update(int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13c94f0 .. 0x13c9791 (673 bytes)
// Symbol:               _ZN7grapher12ActorManager7AddFileEPKc
// Demangled:            grapher::ActorManager::AddFile(char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0x13cb080 .. 0x13cb230 (432 bytes)
// Symbol:               _ZNK7grapher12ActorManager9DBG_PrintERSo
// Demangled:            grapher::ActorManager::DBG_Print(std::ostream &)const
// ============================================================================
