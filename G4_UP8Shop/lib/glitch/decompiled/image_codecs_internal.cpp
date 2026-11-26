#include "Core/Utils/DecompTypes.h"
#include "image_codecs_internal.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_F58660  (binary VA: 0xf58660)
// Original: sub_F58660
// ----------------------------------------------------------------------------
int sub_F58660(glitch::video::CNullDriver::Self *a1)
{
  return sub_F586A0((glitch::video::CNullDriver::Self *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12)));
}

// ----------------------------------------------------------------------------
// Function: sub_F58670  (binary VA: 0xf58670)
// Original: sub_F58670
// ----------------------------------------------------------------------------
int sub_F58670(int a1)
{
  return sub_F586A0((glitch::video::CNullDriver::Self *)(a1 - 888));
}

// ----------------------------------------------------------------------------
// Function: sub_F58680  (binary VA: 0xf58680)
// Original: sub_F58680
// ----------------------------------------------------------------------------
int sub_F58680(int a1)
{
  return sub_F586A0((glitch::video::CNullDriver::Self *)(a1 - 884));
}

// ----------------------------------------------------------------------------
// Function: sub_F58690  (binary VA: 0xf58690)
// Original: sub_F58690
// ----------------------------------------------------------------------------
int sub_F58690(int a1)
{
  return sub_F586A0((glitch::video::CNullDriver::Self *)(a1 - 880));
}



// ============================================================================
// Address:   0xf586a0 (size: 402 bytes)
// Symbol:    sub_F586A0
// Demangled: sub_F586A0
// ============================================================================
int (**sub_F586A0(glitch::video::CNullDriver::Self *a1))(int)
{
  glitch::video::CNullDriver::Self **v1;
  glitch::video::CNullDriver::Self *v2;
  char *v3;
  int v4;
  int *i;
  uint32_t *v6;
  char *v8;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_208BDEC);
  *((uint32_t *)a1 + 238) = ((uint32_t)(uintptr_t)&off_208BF0C);
  *((uint32_t *)a1 + 220) = ((uint32_t)(uintptr_t)&off_2081DE4);
  *((uint32_t *)a1 + 222) = ((uint32_t)(uintptr_t)&off_2081E14);
  v1 = *((glitch::video::CNullDriver::Self ***)a1 + 235);
  *((uint32_t *)a1 + 221) = ((uint32_t)(uintptr_t)&off_2081E00);
  if ( v1 != (glitch::video::CNullDriver::Self **)((char *)a1 + 940) )
  {
    while ( 1 )
    {
      v2 = *v1;
      opDelete(v1);
      if ( v2 == (glitch::video::CNullDriver::Self *)((char *)a1 + 940) )
        break;
      v1 = (glitch::video::CNullDriver::Self **)v2;
    }
  }
  v3 = *((char **)a1 + 233);
  if ( v3 != nullptr )
  {
    if ( *((uint32_t *)a1 + 230) != 0 )
    {
      v8 = &v3[4 * *((uint32_t *)a1 + 229)];
      v4 = *(uint32_t *)v8;
      if ( *(uint32_t *)v8 != 0 )
        goto LABEL_9;
      for ( i = nullptr; ; i = (int *)(v4 - 16) )
      {
        *(uint32_t *)v8 = i[4];
        if ( i[1] != 0 )
          gll_operator_delete_arr(i[1]);
        opDelete(i);
        --*((uint32_t *)a1 + 230);
        v4 = *(uint32_t *)v8;
        if ( *(uint32_t *)v8 == 0 )
          break;
LABEL_9:
        ;
      }
      v3 = *((char **)a1 + 233);
    }
    opDelete(v3);
    *((uint32_t *)a1 + 233) = 0;
    *((uint32_t *)a1 + 232) = 0;
  }
  g4_std::vector_scene_SDrawInfo_SAllocat_ddd42a::Destroy((glitch::video::CNullDriver::Self *)((char *)a1 + 900));
  *((uint32_t *)a1 + 222) = ((uint32_t)(uintptr_t)&off_20828B0);
  *((uint32_t *)a1 + 221) = ((uint32_t)(uintptr_t)&off_20828C8);
  *((uint32_t *)a1 + 220) = ((uint32_t)(uintptr_t)&off_20828E0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_208BF2C);
  *((uint32_t *)a1 + 238) = (uint32_t)(uintptr_t)(&off_208C038);
  v6 = *((uint32_t **)a1 + 219);
  if ( v6 != nullptr )
    sub_5459C0((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12)));
  glitch::video::CNullDriver::Destroy(a1, (int *)((uint32_t)(uintptr_t)&off_2033BEC));
  *((uint32_t *)a1 + 238) = (uint32_t)(uintptr_t)(&off_20483C0);
  return (int (**)(int))(uintptr_t)(&off_20483C0);
}
// ----------------------------------------------------------------------------
// Function: sub_F58840  (binary VA: 0xf58840)
// Original: sub_F58840
// ----------------------------------------------------------------------------
int sub_F58840(glitch::video::CNullDriver::Self *a1)
{
  { sub_F58880((glitch::video::CNullDriver::Self *)((char *)a1 + *(uint32_t *)(*(uint32_t *)a1 - 12))); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_F58850  (binary VA: 0xf58850)
// Original: sub_F58850
// ----------------------------------------------------------------------------
int sub_F58850(int a1)
{
  { sub_F58880((glitch::video::CNullDriver::Self *)(a1 - 888)); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_F58860  (binary VA: 0xf58860)
// Original: sub_F58860
// ----------------------------------------------------------------------------
int sub_F58860(int a1)
{
  { sub_F58880((glitch::video::CNullDriver::Self *)(a1 - 884)); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_F58870  (binary VA: 0xf58870)
// Original: sub_F58870
// ----------------------------------------------------------------------------
int sub_F58870(int a1)
{
  { sub_F58880((glitch::video::CNullDriver::Self *)(a1 - 880)); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_F58880  (binary VA: 0xf58880)
// Original: sub_F58880
// ----------------------------------------------------------------------------
void sub_F58880(glitch::video::CNullDriver::Self *a1)
{
  glitch::video::CNullDriver::Self **v1;
  glitch::video::CNullDriver::Self *v2;
  char *v3;
  int v4;
  int *i;
  uint32_t *v6;
  char *v7;

  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_208BDEC);
  *((uint32_t *)a1 + 238) = ((uint32_t)(uintptr_t)&off_208BF0C);
  *((uint32_t *)a1 + 220) = ((uint32_t)(uintptr_t)&off_2081DE4);
  *((uint32_t *)a1 + 222) = ((uint32_t)(uintptr_t)&off_2081E14);
  v1 = *((glitch::video::CNullDriver::Self ***)a1 + 235);
  *((uint32_t *)a1 + 221) = ((uint32_t)(uintptr_t)&off_2081E00);
  if ( v1 != (glitch::video::CNullDriver::Self **)((char *)a1 + 940) )
  {
    while ( 1 )
    {
      v2 = *v1;
      opDelete(v1);
      if ( v2 == (glitch::video::CNullDriver::Self *)((char *)a1 + 940) )
        break;
      v1 = (glitch::video::CNullDriver::Self **)v2;
    }
  }
  v3 = *((char **)a1 + 233);
  if ( v3 != nullptr )
  {
    if ( *((uint32_t *)a1 + 230) != 0 )
    {
      v7 = &v3[4 * *((uint32_t *)a1 + 229)];
      v4 = *(uint32_t *)v7;
      if ( *(uint32_t *)v7 != 0 )
        goto LABEL_9;
      for ( i = nullptr; ; i = (int *)(v4 - 16) )
      {
        *(uint32_t *)v7 = i[4];
        if ( i[1] != 0 )
          gll_operator_delete_arr(i[1]);
        opDelete(i);
        --*((uint32_t *)a1 + 230);
        v4 = *(uint32_t *)v7;
        if ( *(uint32_t *)v7 == 0 )
          break;
LABEL_9:
        ;
      }
      v3 = *((char **)a1 + 233);
    }
    opDelete(v3);
    *((uint32_t *)a1 + 233) = 0;
    *((uint32_t *)a1 + 232) = 0;
  }
  g4_std::vector_scene_SDrawInfo_SAllocat_ddd42a::Destroy((glitch::video::CNullDriver::Self *)((char *)a1 + 900));
  *((uint32_t *)a1 + 222) = ((uint32_t)(uintptr_t)&off_20828B0);
  *((uint32_t *)a1 + 221) = ((uint32_t)(uintptr_t)&off_20828C8);
  *((uint32_t *)a1 + 220) = ((uint32_t)(uintptr_t)&off_20828E0);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_208BF2C);
  *((uint32_t *)a1 + 238) = (uint32_t)(uintptr_t)(&off_208C038);
  v6 = *((uint32_t **)a1 + 219);
  if ( v6 != nullptr )
    sub_5459C0((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12)));
  glitch::video::CNullDriver::Destroy(a1, (int *)((uint32_t)(uintptr_t)&off_2033BEC));
  *((uint32_t *)a1 + 238) = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_F59BC0  (binary VA: 0xf59bc0)
// Original: sub_F59BC0
// ----------------------------------------------------------------------------
uint32_t * sub_F59BC0(uint32_t *result, uint32_t *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F63370  (binary VA: 0xf63370)
// Original: sub_F63370
// ----------------------------------------------------------------------------
void sub_F63370(uint32_t *a1)
{
  int v1;
  int *v2;
  uint32_t *v3;
  int *v4;
  int v5;
  int *v6;
  char v7;
  int v8;
  int *v9;
  int *v10;
  char v11;
  int v12;
  int v13;
  int *v14;
  char v15; // di
  int v16;
  int v17;
  char v18; // si
  int v19;
  int v20;
  char v21; // di
  int v22;
  int v23;
  char v24; // si
  int v25;
  int *i;
  int v27;
  uint32_t *v28;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int *_g4_t_v37;
  typedef int *_g4_t_v38;
  typedef int *_g4_t_v39;
  typedef int _g4_t_v40;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v30)) > _g4_s0 ? (12u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v31)) > _g4_s1 ? (16u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v32)) > _g4_s2 ? (20u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v33)) > _g4_s3 ? (24u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v34)) > _g4_s4 ? (24u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v35)) > _g4_s5 ? (32u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v36)) > _g4_s6 ? (36u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v37)) > _g4_s7 ? (40u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v38)) > _g4_s8 ? (44u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v39)) > _g4_s9 ? (48u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v40)) > _g4_s10 ? (52u + sizeof(_g4_t_v40)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);

  v1 = a1[10];
  v36 = 0;
  v37 = nullptr;
  v40 = 0;
  v38 = &v36;
  v39 = &v36;
  if ( v1 <= 0 )
    goto LABEL_53;
  v2 = nullptr;
  v31 = 0;
  while ( 2 )
  {
    v3 = *(uint32_t **)(a1[11] + 4 * v31);
    v32 = v3;
    if ( v2 == nullptr )
    {
      v4 = &v36;
      goto LABEL_46;
    }
    v4 = v2;
    v30 = v2;
    v33 = *v3;
    v5 = *v3;
    while ( 1 )
    {
      v8 = v4[4];
      if ( v8 <= v5 )
        break;
      v6 = (int *)v4[2];
      v7 = 1;
      if ( v6 == nullptr )
        goto LABEL_9;
LABEL_6:
      v4 = v6;
    }
    v6 = (int *)v4[3];
    v7 = 0;
    if ( v6 != nullptr )
      goto LABEL_6;
LABEL_9:
    v2 = v30;
    if ( v7 == 0 )
    {
      if ( v33 <= v8 )
        goto LABEL_11;
LABEL_48:
      v24 = 1;
      if ( v4 != &v36 )
        v24 = v4[4] > v33;
LABEL_50:
      v25 = opNew(0x14u);
      if ( v25 != -16 )
        *(uint32_t *)(v25 + 16) = *v32;
      sub_1904970(v24, v25, v4, &v36);
      ++v40;
      v2 = v37;
      goto LABEL_11;
    }
LABEL_46:
    if ( v38 == v4 )
    {
      v24 = 1;
      if ( v4 != &v36 )
        v24 = *v32 < v4[4];
      goto LABEL_50;
    }
    v23 = sub_19048F0(v4);
    v33 = *v32;
    if ( *v32 > *(uint32_t *)(v23 + 16) )
      goto LABEL_48;
LABEL_11:
    if ( v2 == nullptr )
    {
      v9 = &v36;
      goto LABEL_30;
    }
    v9 = v2;
    v34 = v32[1];
    while ( 2 )
    {
      v12 = v9[4];
      if ( v32[1] < v12 )
      {
        v10 = (int *)v9[2];
        v11 = 1;
        if ( v10 == nullptr )
          break;
        goto LABEL_14;
      }
      v10 = (int *)v9[3];
      v11 = 0;
      if ( v10 != nullptr )
      {
LABEL_14:
        v9 = v10;
        continue;
      }
      break;
    }
    if ( v11 == 0 )
    {
      if ( v12 >= v34 )
        goto LABEL_19;
LABEL_32:
      v18 = 1;
      if ( v9 != &v36 )
        v18 = v9[4] > v34;
LABEL_34:
      v19 = opNew(0x14u);
      if ( v19 != -16 )
        *(uint32_t *)(v19 + 16) = v32[1];
      sub_1904970(v18, v19, v9, &v36);
      v2 = v37;
      ++v40;
      if ( v37 == nullptr )
        goto LABEL_37;
      goto LABEL_20;
    }
LABEL_30:
    if ( v38 == v9 )
    {
      v18 = 1;
      if ( v9 != &v36 )
        v18 = v32[1] < v9[4];
      goto LABEL_34;
    }
    v17 = sub_19048F0(v9);
    v34 = v32[1];
    if ( *(uint32_t *)(v17 + 16) < v34 )
      goto LABEL_32;
LABEL_19:
    if ( v2 == nullptr )
    {
LABEL_37:
      v2 = &v36;
      goto LABEL_38;
    }
LABEL_20:
    v13 = v32[2];
    while ( 2 )
    {
      v16 = v2[4];
      if ( v16 > v13 )
      {
        v14 = (int *)v2[2];
        v15 = 1;
        if ( v14 == nullptr )
          break;
        goto LABEL_22;
      }
      v14 = (int *)v2[3];
      v15 = 0;
      if ( v14 != nullptr )
      {
LABEL_22:
        v2 = v14;
        continue;
      }
      break;
    }
    if ( v15 == 0 )
    {
      if ( v16 >= v13 )
        goto LABEL_27;
LABEL_40:
      v21 = 1;
      if ( v2 != &v36 )
        v21 = v2[4] > v13;
LABEL_42:
      v22 = opNew(0x14u);
      if ( v22 != -16 )
        *(uint32_t *)(v22 + 16) = v32[2];
      sub_1904970(v21, v22, v2, &v36);
      ++v40;
      goto LABEL_27;
    }
LABEL_38:
    if ( v38 == v2 )
    {
      v21 = 1;
      if ( v2 != &v36 )
        v21 = v32[2] < v2[4];
      goto LABEL_42;
    }
    v20 = *(uint32_t *)(sub_19048F0(v2) + 16);
    v13 = v32[2];
    if ( v20 < v13 )
      goto LABEL_40;
LABEL_27:
    if ( ++v31 < a1[10] )
    {
      v2 = v37;
      continue;
    }
    break;
  }
  for ( i = v38; i != &v36; i = (int *)sub_19048E0(i) )
  {
    v28 = (uint32_t *)a1[24];
    if ( v28 == (uint32_t *)a1[25] )
    {
      sub_F23480(a1 + 23, i + 4);
    }
    else
    {
      v27 = 0;
      if ( v28 != nullptr )
      {
        *v28 = i[4];
        v27 = a1[24];
      }
      a1[24] = v27 + 4;
    }
  }
LABEL_53:
  g4_std::Rb_tree_int_int_Identity_int_les_d8cc59::M_erase((int)(uintptr_t)(&v35), v37);
}

// ----------------------------------------------------------------------------
// Function: sub_F637F0  (binary VA: 0xf637f0)
// Original: sub_F637F0
// ----------------------------------------------------------------------------
void sub_F637F0(int *a1, int *a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int *v10;
  int v11;
  int *v12;
  uint32_t *v13;
  int *v14;
  uint16_t *v15;
  int v16;
  int v17;
  int v18;
  bool v19;
  int v20;
  int v21;
  int *v22;
  int *v23;
  int v24;
  int *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  uint16_t v31;
  int v32;
  int v33;
  int *v34;
  int *v35;
  void *v36;
  volatile int32_t *v37;
  float v38; // xmm0_4
  float v39; // xmm4_4
  float v40; // xmm3_4
  float v41; // xmm2_4
  int v42;
  float *v43;
  int v44;
  int v45;
  float *v46;
  float v47; // xmm0_4
  float v48; // xmm2_4
  float v49; // xmm4_4
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm4_4
  float v53; // xmm3_4
  int v54;
  int v55;
  float *v56;
  float v57; // xmm5_4
  int v58;
  uint32_t *v59;
  volatile int32_t *v60;
  int *v61;
  int v62;
  volatile int32_t ***v63;
  uint32_t *v64;
  volatile int32_t **v65;
  volatile int32_t **v66;
  volatile int32_t **v67;
  unsigned int v68;
  uint32_t *v69;
  int *v70;
  uint32_t *v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  char *v77;
  int v78;
  uint32_t *v79;
  int v80;
  uint32_t *v81;
  uint32_t *v82;
  unsigned int v83;
  int v84;
  int v85;
  uint16_t *v86;
  char *v87;
  uint32_t *v88;
  char *v89;
  uint32_t *v90;
  uint32_t *v91;
  int v92;
  uint32_t *v93;
  int *v94;
  int v95;
  uint32_t *v96;
  int *v97;
  uint32_t *v98;
  int v99;
  int *v100;
  uint32_t *v101;
  int v102;
  int v103;
  int *v104;
  uint32_t *v105;
  int v106;
  int *v107;
  uint32_t *v108;
  int v109;
  int v110;
  unsigned int v111;
  bool v112; // cc
  int v113;
  int v114;
  uint32_t *v115;
  char *v116;
  uint32_t *v117;
  char *v118;
  uint32_t *v119;
  int *v120;
  int *v121;
  int v122;
  uint32_t *v123;
  uint32_t *v124;
  uint32_t *v125;
  uint32_t *v126;
  uint32_t *v127;
  uint32_t *v128;
  uint32_t *v129;
  int *v130;
  unsigned int v131;
  int *v132;
  int v133;
  int *v134;
  int v135;
  uint32_t *v136;
  uint32_t *v137;
  uint32_t *v138;
  char *v139;
  int v140;
  int v141;
  char *v142;
  unsigned int v143;
  int v144;
  uint32_t *v145;
  int v146;
  int v147;
  int v148;
  volatile int32_t *v149;
  volatile int32_t *v150;
  unsigned int v151;
  volatile int32_t *v152;
  int v153;
  int v154;
  int v155;
  volatile int32_t **v156;
  int v157;
  int v158;
  int v159;
  int v160;
  void *v161;
  int v162;
  unsigned int v163;
  uint32_t *v164;
  char *v165;
  unsigned int v166;
  int v167;
  uint32_t *v168;
  int v169;
  char *v170;
  char *v171;
  uint16_t *v172;
  int v173;
  int v174;
  uint32_t *v175;
  int v176;
  int v177;
  int v178;
  uint32_t *v179;
  int v180;
  volatile int32_t *v181;
  int v182;
  int v183;
  int v184;
  int v185;
  volatile int32_t **v186;
  int v187;
  int v188;
  int v189;
  int v190;
  void *v191;
  int v192;
  uint32_t *v193;
  int v194;
  uint32_t *v195;
  int v196;
  int v197;
  int *v198;
  uint32_t *v199;
  typedef int _g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef volatile int32_t **_g4_t_v203;
  typedef volatile int32_t **_g4_t_v204;
  typedef unsigned int _g4_t_v205;
  typedef volatile int32_t **_g4_t_v206;
  typedef int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef int _g4_t_v209;
  typedef unsigned int _g4_t_v210;
  typedef int *_g4_t_v211;
  typedef uint32_t *_g4_t_v212;
  typedef int _g4_t_v213;
  typedef volatile int32_t **_g4_t_v214;
  typedef volatile int32_t **_g4_t_v215;
  typedef int _g4_t_v216;
  typedef char _g4_t_v217;
  typedef int *_g4_t_v218;
  typedef volatile int32_t ***_g4_t_v219;
  typedef int _g4_t_v220;
  typedef char *_g4_t_v221;
  typedef uint32_t *_g4_t_v222;
  typedef char *_g4_t_v223;
  typedef volatile int32_t *_g4_t_v224;
  typedef volatile int32_t **_g4_t_v225;
  typedef volatile int32_t **_g4_t_v226;
  typedef int _g4_t_v227;
  typedef volatile int32_t **_g4_t_v228;
  typedef volatile int32_t **_g4_t_v229;
  typedef volatile int32_t **_g4_t_v230;
  typedef int _g4_t_v231;
  typedef volatile int32_t **_g4_t_v232;
  typedef unsigned int _g4_t_v233;
  typedef uint32_t *_g4_t_v234;
  typedef int _g4_t_v235;
  typedef int _g4_t_v236;
  typedef uint32_t *_g4_t_v237;
  typedef uint32_t *_g4_t_v238;
  typedef int _g4_t_v239;
  typedef volatile int32_t **_g4_t_v240;
  typedef volatile int32_t **_g4_t_v241;
  typedef int _g4_t_v242;
  typedef float _g4_t_v243;
  typedef volatile int32_t **_g4_t_v244;
  typedef volatile int32_t **_g4_t_v245;
  typedef int _g4_t_v246;
  typedef uint32_t *_g4_t_v247;
  typedef int _g4_t_v248;
  typedef volatile int32_t **_g4_t_v249;
  typedef volatile int32_t **_g4_t_v250;
  typedef int _g4_t_v251;
  typedef int _g4_t_v252;
  typedef int _g4_t_v253;
  typedef volatile int32_t **_g4_t_v254;
  typedef unsigned int _g4_t_v255;
  typedef unsigned int _g4_t_v256;
  typedef volatile int32_t *_g4_t_v257;
  typedef uint32_t *_g4_t_v258;
  typedef volatile int32_t *_g4_t_v259;
  typedef int _g4_t_v260;
  typedef int _g4_t_v261;
  typedef float _g4_t_v262;
  typedef int _g4_t_v263;
  typedef uint32_t *_g4_t_v264;
  typedef float _g4_t_v265;
  typedef void **_g4_t_v266;
  typedef uint32_t *_g4_t_v267;
  typedef int _g4_t_v269;
  typedef char *_g4_t_v270;
  typedef int _g4_t_v271;
  typedef int _g4_t_v272;
  typedef int _g4_t_v273;
  typedef uint32_t *_g4_t_v274;
  typedef uint32_t *_g4_t_v275;
  typedef char *_g4_t_v276;
  typedef char *_g4_t_v277;
  typedef volatile int32_t **_g4_t_v278;
  typedef volatile int32_t **_g4_t_v279;
  typedef int _g4_t_v280;
  typedef int *_g4_t_v282;
  typedef int _g4_t_v283;
  typedef volatile int32_t **_g4_t_v284;
  typedef volatile int32_t **_g4_t_v285;
  typedef int _g4_t_v286;
  typedef char *_g4_t_v287;
  typedef volatile int32_t **_g4_t_v288;
  typedef uint32_t *_g4_t_v289;
  typedef unsigned int _g4_t_v290;
  typedef char *_g4_t_v291;
  typedef int _g4_t_v292;
  typedef char *_g4_t_v293;
  typedef uint32_t *_g4_t_v294;
  typedef char _g4_t_v295;
  typedef volatile int32_t **_g4_t_v296;
  typedef int _g4_t_v297;
  typedef int _g4_t_v298;
  typedef char *_g4_t_v299;
  typedef int _g4_t_v300;
  typedef unsigned int _g4_t_v301;
  typedef size_t _g4_t_v302;
  typedef size_t _g4_t_v303;
  typedef volatile int32_t **_g4_t_v304;
  typedef char _g4_t_v305;
  typedef char *_g4_t_v306;
  typedef uint8_t *_g4_t_v307;
  typedef int _g4_t_v308;
  typedef int _g4_t_v309;
  typedef int _g4_t_v310;
  typedef volatile int32_t *_g4_t_v311;
  typedef int _g4_t_v312;
  typedef int _g4_t_v313;
  typedef unsigned int _g4_t_v314;
  typedef size_t _g4_t_v315;
  typedef unsigned int _g4_t_v316;
  typedef volatile int32_t *_g4_t_v317;
  typedef int _g4_t_v318;
  typedef int _g4_t_v319;
  typedef int *_g4_t_v320;
  typedef int _g4_t_v321;
  typedef int _g4_t_v322;
  typedef float _g4_t_v323;
  typedef int _g4_t_v324;
  typedef uint16_t _g4_t_v325;
  typedef unsigned int _g4_t_v326;
  typedef uint32_t *_g4_t_v327;
  typedef int _g4_t_v328;
  typedef int _g4_t_v329;
  typedef int *_g4_t_v330;
  typedef unsigned int _g4_t_v331;
  typedef float _g4_t_v332;
  typedef volatile int32_t *_g4_t_v333;
  typedef uint16_t _g4_t_v334;
  typedef uint32_t *_g4_t_v335;
  typedef int _g4_t_v336;
  typedef uint16_t *_g4_t_v337;
  typedef int _g4_t_v338;
  typedef int _g4_t_v339[4];
  typedef int _g4_t_v340[4];
  typedef char *_g4_t_v341;
  typedef char *_g4_t_v342;
  typedef char *_g4_t_v343;
  typedef volatile int32_t **_g4_t_v344[4];
  typedef volatile int32_t **_g4_t_v345[4];
  typedef volatile int32_t **_g4_t_v346[4];
  typedef volatile int32_t **_g4_t_v347[4];
  typedef int _g4_t_v348;
  typedef int _g4_t_v349;
  typedef int *_g4_t_v350;
  typedef int *_g4_t_v351;
  typedef int *_g4_t_v352;
  typedef int _g4_t_v353;
  typedef int _g4_t_v354;
  typedef int _g4_t_v355;
  typedef uint32_t *_g4_t_v356;
  typedef int *_g4_t_v357;
  typedef int *_g4_t_v358;
  typedef int _g4_t_v359;
  typedef int _g4_t_v360;
  typedef int _g4_t_v361;
  typedef int _g4_t_v362;
  typedef int _g4_t_v363;
  typedef int _g4_t_v364;
  typedef unsigned int _g4_t_v365;
  typedef int *_g4_t_v366;
  typedef uint32_t *_g4_t_v367;
  typedef uint32_t *_g4_t_v368;
  typedef uint32_t *_g4_t_v369;
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (0u + sizeof(_g4_t_v200)) > _g4_s0 ? (0u + sizeof(_g4_t_v200)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v201)) > _g4_s1 ? (0u + sizeof(_g4_t_v201)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v202)) > _g4_s2 ? (0u + sizeof(_g4_t_v202)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v203)) > _g4_s3 ? (24u + sizeof(_g4_t_v203)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v204)) > _g4_s4 ? (24u + sizeof(_g4_t_v204)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v205)) > _g4_s5 ? (24u + sizeof(_g4_t_v205)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v206)) > _g4_s6 ? (24u + sizeof(_g4_t_v206)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v207)) > _g4_s7 ? (24u + sizeof(_g4_t_v207)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v208)) > _g4_s8 ? (24u + sizeof(_g4_t_v208)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v209)) > _g4_s9 ? (24u + sizeof(_g4_t_v209)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v210)) > _g4_s10 ? (24u + sizeof(_g4_t_v210)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v211)) > _g4_s11 ? (24u + sizeof(_g4_t_v211)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v212)) > _g4_s12 ? (24u + sizeof(_g4_t_v212)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v213)) > _g4_s13 ? (24u + sizeof(_g4_t_v213)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v214)) > _g4_s14 ? (24u + sizeof(_g4_t_v214)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v215)) > _g4_s15 ? (24u + sizeof(_g4_t_v215)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v216)) > _g4_s16 ? (28u + sizeof(_g4_t_v216)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v217)) > _g4_s17 ? (28u + sizeof(_g4_t_v217)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v218)) > _g4_s18 ? (28u + sizeof(_g4_t_v218)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v219)) > _g4_s19 ? (28u + sizeof(_g4_t_v219)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v220)) > _g4_s20 ? (28u + sizeof(_g4_t_v220)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v221)) > _g4_s21 ? (28u + sizeof(_g4_t_v221)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v222)) > _g4_s22 ? (28u + sizeof(_g4_t_v222)) : _g4_s22,
    _g4_s24 = (28u + sizeof(_g4_t_v223)) > _g4_s23 ? (28u + sizeof(_g4_t_v223)) : _g4_s23,
    _g4_s25 = (28u + sizeof(_g4_t_v224)) > _g4_s24 ? (28u + sizeof(_g4_t_v224)) : _g4_s24,
    _g4_s26 = (28u + sizeof(_g4_t_v225)) > _g4_s25 ? (28u + sizeof(_g4_t_v225)) : _g4_s25,
    _g4_s27 = (28u + sizeof(_g4_t_v226)) > _g4_s26 ? (28u + sizeof(_g4_t_v226)) : _g4_s26,
    _g4_s28 = (28u + sizeof(_g4_t_v227)) > _g4_s27 ? (28u + sizeof(_g4_t_v227)) : _g4_s27,
    _g4_s29 = (28u + sizeof(_g4_t_v228)) > _g4_s28 ? (28u + sizeof(_g4_t_v228)) : _g4_s28,
    _g4_s30 = (28u + sizeof(_g4_t_v229)) > _g4_s29 ? (28u + sizeof(_g4_t_v229)) : _g4_s29,
    _g4_s31 = (28u + sizeof(_g4_t_v230)) > _g4_s30 ? (28u + sizeof(_g4_t_v230)) : _g4_s30,
    _g4_s32 = (28u + sizeof(_g4_t_v231)) > _g4_s31 ? (28u + sizeof(_g4_t_v231)) : _g4_s31,
    _g4_s33 = (28u + sizeof(_g4_t_v232)) > _g4_s32 ? (28u + sizeof(_g4_t_v232)) : _g4_s32,
    _g4_s34 = (28u + sizeof(_g4_t_v233)) > _g4_s33 ? (28u + sizeof(_g4_t_v233)) : _g4_s33,
    _g4_s35 = (32u + sizeof(_g4_t_v234)) > _g4_s34 ? (32u + sizeof(_g4_t_v234)) : _g4_s34,
    _g4_s36 = (32u + sizeof(_g4_t_v235)) > _g4_s35 ? (32u + sizeof(_g4_t_v235)) : _g4_s35,
    _g4_s37 = (32u + sizeof(_g4_t_v236)) > _g4_s36 ? (32u + sizeof(_g4_t_v236)) : _g4_s36,
    _g4_s38 = (32u + sizeof(_g4_t_v237)) > _g4_s37 ? (32u + sizeof(_g4_t_v237)) : _g4_s37,
    _g4_s39 = (32u + sizeof(_g4_t_v238)) > _g4_s38 ? (32u + sizeof(_g4_t_v238)) : _g4_s38,
    _g4_s40 = (32u + sizeof(_g4_t_v239)) > _g4_s39 ? (32u + sizeof(_g4_t_v239)) : _g4_s39,
    _g4_s41 = (52u + sizeof(_g4_t_v240)) > _g4_s40 ? (52u + sizeof(_g4_t_v240)) : _g4_s40,
    _g4_s42 = (56u + sizeof(_g4_t_v241)) > _g4_s41 ? (56u + sizeof(_g4_t_v241)) : _g4_s41,
    _g4_s43 = (60u + sizeof(_g4_t_v242)) > _g4_s42 ? (60u + sizeof(_g4_t_v242)) : _g4_s42,
    _g4_s44 = (64u + sizeof(_g4_t_v243)) > _g4_s43 ? (64u + sizeof(_g4_t_v243)) : _g4_s43,
    _g4_s45 = (68u + sizeof(_g4_t_v244)) > _g4_s44 ? (68u + sizeof(_g4_t_v244)) : _g4_s44,
    _g4_s46 = (72u + sizeof(_g4_t_v245)) > _g4_s45 ? (72u + sizeof(_g4_t_v245)) : _g4_s45,
    _g4_s47 = (76u + sizeof(_g4_t_v246)) > _g4_s46 ? (76u + sizeof(_g4_t_v246)) : _g4_s46,
    _g4_s48 = (80u + sizeof(_g4_t_v247)) > _g4_s47 ? (80u + sizeof(_g4_t_v247)) : _g4_s47,
    _g4_s49 = (80u + sizeof(_g4_t_v248)) > _g4_s48 ? (80u + sizeof(_g4_t_v248)) : _g4_s48,
    _g4_s50 = (84u + sizeof(_g4_t_v249)) > _g4_s49 ? (84u + sizeof(_g4_t_v249)) : _g4_s49,
    _g4_s51 = (88u + sizeof(_g4_t_v250)) > _g4_s50 ? (88u + sizeof(_g4_t_v250)) : _g4_s50,
    _g4_s52 = (92u + sizeof(_g4_t_v251)) > _g4_s51 ? (92u + sizeof(_g4_t_v251)) : _g4_s51,
    _g4_s53 = (96u + sizeof(_g4_t_v252)) > _g4_s52 ? (96u + sizeof(_g4_t_v252)) : _g4_s52,
    _g4_s54 = (100u + sizeof(_g4_t_v253)) > _g4_s53 ? (100u + sizeof(_g4_t_v253)) : _g4_s53,
    _g4_s55 = (104u + sizeof(_g4_t_v254)) > _g4_s54 ? (104u + sizeof(_g4_t_v254)) : _g4_s54,
    _g4_s56 = (108u + sizeof(_g4_t_v255)) > _g4_s55 ? (108u + sizeof(_g4_t_v255)) : _g4_s55,
    _g4_s57 = (112u + sizeof(_g4_t_v256)) > _g4_s56 ? (112u + sizeof(_g4_t_v256)) : _g4_s56,
    _g4_s58 = (116u + sizeof(_g4_t_v257)) > _g4_s57 ? (116u + sizeof(_g4_t_v257)) : _g4_s57,
    _g4_s59 = (116u + sizeof(_g4_t_v258)) > _g4_s58 ? (116u + sizeof(_g4_t_v258)) : _g4_s58,
    _g4_s60 = (124u + sizeof(_g4_t_v259)) > _g4_s59 ? (124u + sizeof(_g4_t_v259)) : _g4_s59,
    _g4_s61 = (128u + sizeof(_g4_t_v260)) > _g4_s60 ? (128u + sizeof(_g4_t_v260)) : _g4_s60,
    _g4_s62 = (128u + sizeof(_g4_t_v261)) > _g4_s61 ? (128u + sizeof(_g4_t_v261)) : _g4_s61,
    _g4_s63 = (132u + sizeof(_g4_t_v262)) > _g4_s62 ? (132u + sizeof(_g4_t_v262)) : _g4_s62,
    _g4_s64 = (132u + sizeof(_g4_t_v263)) > _g4_s63 ? (132u + sizeof(_g4_t_v263)) : _g4_s63,
    _g4_s65 = (132u + sizeof(_g4_t_v264)) > _g4_s64 ? (132u + sizeof(_g4_t_v264)) : _g4_s64,
    _g4_s66 = (136u + sizeof(_g4_t_v265)) > _g4_s65 ? (136u + sizeof(_g4_t_v265)) : _g4_s65,
    _g4_s67 = (136u + sizeof(_g4_t_v266)) > _g4_s66 ? (136u + sizeof(_g4_t_v266)) : _g4_s66,
    _g4_s68 = (136u + sizeof(_g4_t_v267)) > _g4_s67 ? (136u + sizeof(_g4_t_v267)) : _g4_s67,
    _g4_s69 = (144u + sizeof(_g4_t_v269)) > _g4_s68 ? (144u + sizeof(_g4_t_v269)) : _g4_s68,
    _g4_s70 = (144u + sizeof(_g4_t_v270)) > _g4_s69 ? (144u + sizeof(_g4_t_v270)) : _g4_s69,
    _g4_s71 = (144u + sizeof(_g4_t_v271)) > _g4_s70 ? (144u + sizeof(_g4_t_v271)) : _g4_s70,
    _g4_s72 = (148u + sizeof(_g4_t_v272)) > _g4_s71 ? (148u + sizeof(_g4_t_v272)) : _g4_s71,
    _g4_s73 = (148u + sizeof(_g4_t_v273)) > _g4_s72 ? (148u + sizeof(_g4_t_v273)) : _g4_s72,
    _g4_s74 = (148u + sizeof(_g4_t_v274)) > _g4_s73 ? (148u + sizeof(_g4_t_v274)) : _g4_s73,
    _g4_s75 = (148u + sizeof(_g4_t_v275)) > _g4_s74 ? (148u + sizeof(_g4_t_v275)) : _g4_s74,
    _g4_s76 = (148u + sizeof(_g4_t_v276)) > _g4_s75 ? (148u + sizeof(_g4_t_v276)) : _g4_s75,
    _g4_s77 = (148u + sizeof(_g4_t_v277)) > _g4_s76 ? (148u + sizeof(_g4_t_v277)) : _g4_s76,
    _g4_s78 = (152u + sizeof(_g4_t_v278)) > _g4_s77 ? (152u + sizeof(_g4_t_v278)) : _g4_s77,
    _g4_s79 = (156u + sizeof(_g4_t_v279)) > _g4_s78 ? (156u + sizeof(_g4_t_v279)) : _g4_s78,
    _g4_s80 = (156u + sizeof(_g4_t_v280)) > _g4_s79 ? (156u + sizeof(_g4_t_v280)) : _g4_s79,
    _g4_s81 = (164u + sizeof(_g4_t_v282)) > _g4_s80 ? (164u + sizeof(_g4_t_v282)) : _g4_s80,
    _g4_s82 = (164u + sizeof(_g4_t_v283)) > _g4_s81 ? (164u + sizeof(_g4_t_v283)) : _g4_s81,
    _g4_s83 = (164u + sizeof(_g4_t_v284)) > _g4_s82 ? (164u + sizeof(_g4_t_v284)) : _g4_s82,
    _g4_s84 = (168u + sizeof(_g4_t_v285)) > _g4_s83 ? (168u + sizeof(_g4_t_v285)) : _g4_s83,
    _g4_s85 = (168u + sizeof(_g4_t_v286)) > _g4_s84 ? (168u + sizeof(_g4_t_v286)) : _g4_s84,
    _g4_s86 = (168u + sizeof(_g4_t_v287)) > _g4_s85 ? (168u + sizeof(_g4_t_v287)) : _g4_s85,
    _g4_s87 = (172u + sizeof(_g4_t_v288)) > _g4_s86 ? (172u + sizeof(_g4_t_v288)) : _g4_s86,
    _g4_s88 = (172u + sizeof(_g4_t_v289)) > _g4_s87 ? (172u + sizeof(_g4_t_v289)) : _g4_s87,
    _g4_s89 = (172u + sizeof(_g4_t_v290)) > _g4_s88 ? (172u + sizeof(_g4_t_v290)) : _g4_s88,
    _g4_s90 = (172u + sizeof(_g4_t_v291)) > _g4_s89 ? (172u + sizeof(_g4_t_v291)) : _g4_s89,
    _g4_s91 = (172u + sizeof(_g4_t_v292)) > _g4_s90 ? (172u + sizeof(_g4_t_v292)) : _g4_s90,
    _g4_s92 = (172u + sizeof(_g4_t_v293)) > _g4_s91 ? (172u + sizeof(_g4_t_v293)) : _g4_s91,
    _g4_s93 = (172u + sizeof(_g4_t_v294)) > _g4_s92 ? (172u + sizeof(_g4_t_v294)) : _g4_s92,
    _g4_s94 = (176u + sizeof(_g4_t_v295)) > _g4_s93 ? (176u + sizeof(_g4_t_v295)) : _g4_s93,
    _g4_s95 = (176u + sizeof(_g4_t_v296)) > _g4_s94 ? (176u + sizeof(_g4_t_v296)) : _g4_s94,
    _g4_s96 = (176u + sizeof(_g4_t_v297)) > _g4_s95 ? (176u + sizeof(_g4_t_v297)) : _g4_s95,
    _g4_s97 = (176u + sizeof(_g4_t_v298)) > _g4_s96 ? (176u + sizeof(_g4_t_v298)) : _g4_s96,
    _g4_s98 = (176u + sizeof(_g4_t_v299)) > _g4_s97 ? (176u + sizeof(_g4_t_v299)) : _g4_s97,
    _g4_s99 = (180u + sizeof(_g4_t_v300)) > _g4_s98 ? (180u + sizeof(_g4_t_v300)) : _g4_s98,
    _g4_s100 = (180u + sizeof(_g4_t_v301)) > _g4_s99 ? (180u + sizeof(_g4_t_v301)) : _g4_s99,
    _g4_s101 = (180u + sizeof(_g4_t_v302)) > _g4_s100 ? (180u + sizeof(_g4_t_v302)) : _g4_s100,
    _g4_s102 = (180u + sizeof(_g4_t_v303)) > _g4_s101 ? (180u + sizeof(_g4_t_v303)) : _g4_s101,
    _g4_s103 = (184u + sizeof(_g4_t_v304)) > _g4_s102 ? (184u + sizeof(_g4_t_v304)) : _g4_s102,
    _g4_s104 = (184u + sizeof(_g4_t_v305)) > _g4_s103 ? (184u + sizeof(_g4_t_v305)) : _g4_s103,
    _g4_s105 = (184u + sizeof(_g4_t_v306)) > _g4_s104 ? (184u + sizeof(_g4_t_v306)) : _g4_s104,
    _g4_s106 = (184u + sizeof(_g4_t_v307)) > _g4_s105 ? (184u + sizeof(_g4_t_v307)) : _g4_s105,
    _g4_s107 = (184u + sizeof(_g4_t_v308)) > _g4_s106 ? (184u + sizeof(_g4_t_v308)) : _g4_s106,
    _g4_s108 = (184u + sizeof(_g4_t_v309)) > _g4_s107 ? (184u + sizeof(_g4_t_v309)) : _g4_s107,
    _g4_s109 = (184u + sizeof(_g4_t_v310)) > _g4_s108 ? (184u + sizeof(_g4_t_v310)) : _g4_s108,
    _g4_s110 = (188u + sizeof(_g4_t_v311)) > _g4_s109 ? (188u + sizeof(_g4_t_v311)) : _g4_s109,
    _g4_s111 = (188u + sizeof(_g4_t_v312)) > _g4_s110 ? (188u + sizeof(_g4_t_v312)) : _g4_s110,
    _g4_s112 = (188u + sizeof(_g4_t_v313)) > _g4_s111 ? (188u + sizeof(_g4_t_v313)) : _g4_s111,
    _g4_s113 = (188u + sizeof(_g4_t_v314)) > _g4_s112 ? (188u + sizeof(_g4_t_v314)) : _g4_s112,
    _g4_s114 = (188u + sizeof(_g4_t_v315)) > _g4_s113 ? (188u + sizeof(_g4_t_v315)) : _g4_s113,
    _g4_s115 = (188u + sizeof(_g4_t_v316)) > _g4_s114 ? (188u + sizeof(_g4_t_v316)) : _g4_s114,
    _g4_s116 = (188u + sizeof(_g4_t_v317)) > _g4_s115 ? (188u + sizeof(_g4_t_v317)) : _g4_s115,
    _g4_s117 = (192u + sizeof(_g4_t_v318)) > _g4_s116 ? (192u + sizeof(_g4_t_v318)) : _g4_s116,
    _g4_s118 = (192u + sizeof(_g4_t_v319)) > _g4_s117 ? (192u + sizeof(_g4_t_v319)) : _g4_s117,
    _g4_s119 = (192u + sizeof(_g4_t_v320)) > _g4_s118 ? (192u + sizeof(_g4_t_v320)) : _g4_s118,
    _g4_s120 = (192u + sizeof(_g4_t_v321)) > _g4_s119 ? (192u + sizeof(_g4_t_v321)) : _g4_s119,
    _g4_s121 = (192u + sizeof(_g4_t_v322)) > _g4_s120 ? (192u + sizeof(_g4_t_v322)) : _g4_s120,
    _g4_s122 = (192u + sizeof(_g4_t_v323)) > _g4_s121 ? (192u + sizeof(_g4_t_v323)) : _g4_s121,
    _g4_s123 = (192u + sizeof(_g4_t_v324)) > _g4_s122 ? (192u + sizeof(_g4_t_v324)) : _g4_s122,
    _g4_s124 = (192u + sizeof(_g4_t_v325)) > _g4_s123 ? (192u + sizeof(_g4_t_v325)) : _g4_s123,
    _g4_s125 = (192u + sizeof(_g4_t_v326)) > _g4_s124 ? (192u + sizeof(_g4_t_v326)) : _g4_s124,
    _g4_s126 = (192u + sizeof(_g4_t_v327)) > _g4_s125 ? (192u + sizeof(_g4_t_v327)) : _g4_s125,
    _g4_s127 = (196u + sizeof(_g4_t_v328)) > _g4_s126 ? (196u + sizeof(_g4_t_v328)) : _g4_s126,
    _g4_s128 = (196u + sizeof(_g4_t_v329)) > _g4_s127 ? (196u + sizeof(_g4_t_v329)) : _g4_s127,
    _g4_s129 = (196u + sizeof(_g4_t_v330)) > _g4_s128 ? (196u + sizeof(_g4_t_v330)) : _g4_s128,
    _g4_s130 = (196u + sizeof(_g4_t_v331)) > _g4_s129 ? (196u + sizeof(_g4_t_v331)) : _g4_s129,
    _g4_s131 = (196u + sizeof(_g4_t_v332)) > _g4_s130 ? (196u + sizeof(_g4_t_v332)) : _g4_s130,
    _g4_s132 = (196u + sizeof(_g4_t_v333)) > _g4_s131 ? (196u + sizeof(_g4_t_v333)) : _g4_s131,
    _g4_s133 = (196u + sizeof(_g4_t_v334)) > _g4_s132 ? (196u + sizeof(_g4_t_v334)) : _g4_s132,
    _g4_s134 = (196u + sizeof(_g4_t_v335)) > _g4_s133 ? (196u + sizeof(_g4_t_v335)) : _g4_s133,
    _g4_s135 = (196u + sizeof(_g4_t_v336)) > _g4_s134 ? (196u + sizeof(_g4_t_v336)) : _g4_s134,
    _g4_s136 = (196u + sizeof(_g4_t_v337)) > _g4_s135 ? (196u + sizeof(_g4_t_v337)) : _g4_s135,
    _g4_s137 = (208u + sizeof(_g4_t_v338)) > _g4_s136 ? (208u + sizeof(_g4_t_v338)) : _g4_s136,
    _g4_s138 = (224u + sizeof(_g4_t_v339)) > _g4_s137 ? (224u + sizeof(_g4_t_v339)) : _g4_s137,
    _g4_s139 = (240u + sizeof(_g4_t_v340)) > _g4_s138 ? (240u + sizeof(_g4_t_v340)) : _g4_s138,
    _g4_s140 = (256u + sizeof(_g4_t_v341)) > _g4_s139 ? (256u + sizeof(_g4_t_v341)) : _g4_s139,
    _g4_s141 = (260u + sizeof(_g4_t_v342)) > _g4_s140 ? (260u + sizeof(_g4_t_v342)) : _g4_s140,
    _g4_s142 = (264u + sizeof(_g4_t_v343)) > _g4_s141 ? (264u + sizeof(_g4_t_v343)) : _g4_s141,
    _g4_s143 = (272u + sizeof(_g4_t_v344)) > _g4_s142 ? (272u + sizeof(_g4_t_v344)) : _g4_s142,
    _g4_s144 = (288u + sizeof(_g4_t_v345)) > _g4_s143 ? (288u + sizeof(_g4_t_v345)) : _g4_s143,
    _g4_s145 = (304u + sizeof(_g4_t_v346)) > _g4_s144 ? (304u + sizeof(_g4_t_v346)) : _g4_s144,
    _g4_s146 = (320u + sizeof(_g4_t_v347)) > _g4_s145 ? (320u + sizeof(_g4_t_v347)) : _g4_s145,
    _g4_s147 = (336u + sizeof(_g4_t_v348)) > _g4_s146 ? (336u + sizeof(_g4_t_v348)) : _g4_s146,
    _g4_s148 = (340u + sizeof(_g4_t_v349)) > _g4_s147 ? (340u + sizeof(_g4_t_v349)) : _g4_s147,
    _g4_s149 = (344u + sizeof(_g4_t_v350)) > _g4_s148 ? (344u + sizeof(_g4_t_v350)) : _g4_s148,
    _g4_s150 = (348u + sizeof(_g4_t_v351)) > _g4_s149 ? (348u + sizeof(_g4_t_v351)) : _g4_s149,
    _g4_s151 = (352u + sizeof(_g4_t_v352)) > _g4_s150 ? (352u + sizeof(_g4_t_v352)) : _g4_s150,
    _g4_s152 = (356u + sizeof(_g4_t_v353)) > _g4_s151 ? (356u + sizeof(_g4_t_v353)) : _g4_s151,
    _g4_s153 = (368u + sizeof(_g4_t_v354)) > _g4_s152 ? (368u + sizeof(_g4_t_v354)) : _g4_s152,
    _g4_s154 = (372u + sizeof(_g4_t_v355)) > _g4_s153 ? (372u + sizeof(_g4_t_v355)) : _g4_s153,
    _g4_s155 = (376u + sizeof(_g4_t_v356)) > _g4_s154 ? (376u + sizeof(_g4_t_v356)) : _g4_s154,
    _g4_s156 = (380u + sizeof(_g4_t_v357)) > _g4_s155 ? (380u + sizeof(_g4_t_v357)) : _g4_s155,
    _g4_s157 = (384u + sizeof(_g4_t_v358)) > _g4_s156 ? (384u + sizeof(_g4_t_v358)) : _g4_s156,
    _g4_s158 = (388u + sizeof(_g4_t_v359)) > _g4_s157 ? (388u + sizeof(_g4_t_v359)) : _g4_s157,
    _g4_s159 = (400u + sizeof(_g4_t_v360)) > _g4_s158 ? (400u + sizeof(_g4_t_v360)) : _g4_s158,
    _g4_s160 = (404u + sizeof(_g4_t_v361)) > _g4_s159 ? (404u + sizeof(_g4_t_v361)) : _g4_s159,
    _g4_s161 = (408u + sizeof(_g4_t_v362)) > _g4_s160 ? (408u + sizeof(_g4_t_v362)) : _g4_s160,
    _g4_s162 = (412u + sizeof(_g4_t_v363)) > _g4_s161 ? (412u + sizeof(_g4_t_v363)) : _g4_s161,
    _g4_s163 = (416u + sizeof(_g4_t_v364)) > _g4_s162 ? (416u + sizeof(_g4_t_v364)) : _g4_s162,
    _g4_s164 = (420u + sizeof(_g4_t_v365)) > _g4_s163 ? (420u + sizeof(_g4_t_v365)) : _g4_s163,
    _g4_s165 = (424u + sizeof(_g4_t_v366)) > _g4_s164 ? (424u + sizeof(_g4_t_v366)) : _g4_s164,
    _g4_s166 = (428u + sizeof(_g4_t_v367)) > _g4_s165 ? (428u + sizeof(_g4_t_v367)) : _g4_s165,
    _g4_s167 = (432u + sizeof(_g4_t_v368)) > _g4_s166 ? (432u + sizeof(_g4_t_v368)) : _g4_s166,
    _g4_s168 = (436u + sizeof(_g4_t_v369)) > _g4_s167 ? (436u + sizeof(_g4_t_v369)) : _g4_s167
  };
  alignas(16) uint8_t _g4_sf[_g4_s168];
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 0u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 0u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 0u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 24u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 24u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 24u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 24u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 24u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 24u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 24u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 24u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 24u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 24u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 24u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 24u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 24u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 28u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 28u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 28u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 28u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 28u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 28u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 28u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 28u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 28u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 28u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 28u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 28u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 28u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 28u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 28u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 28u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 28u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 28u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 32u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 32u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 32u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 32u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 32u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 32u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 52u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 56u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 60u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 64u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 68u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 72u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 76u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 80u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 80u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 84u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 88u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 92u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 96u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 100u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 104u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 108u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 112u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 116u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 116u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 124u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 128u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 128u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 132u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 132u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 132u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 136u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 136u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 136u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 144u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 144u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 144u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 148u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 148u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 148u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 148u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 148u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 148u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 152u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 156u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 156u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 164u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 164u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 164u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 168u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 168u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 168u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 172u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 172u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 172u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 172u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 172u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 172u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 172u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 176u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 176u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 176u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 176u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 176u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 180u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 180u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 180u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 180u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 184u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 184u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 184u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 184u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 184u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 184u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 184u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 188u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 188u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 188u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 188u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 188u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 188u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 188u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 192u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 192u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 192u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 192u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 192u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 192u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 192u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 192u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 192u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 192u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 196u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 196u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 196u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 196u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 196u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 196u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 196u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 196u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 196u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 196u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 208u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 224u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 240u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 256u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 260u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 264u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 272u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 288u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 304u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 320u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 336u);
  _g4_t_v349 &v349 = *reinterpret_cast<_g4_t_v349 *>(_g4_sf + 340u);
  _g4_t_v350 &v350 = *reinterpret_cast<_g4_t_v350 *>(_g4_sf + 344u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 348u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 352u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 356u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 368u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 372u);
  _g4_t_v356 &v356 = *reinterpret_cast<_g4_t_v356 *>(_g4_sf + 376u);
  _g4_t_v357 &v357 = *reinterpret_cast<_g4_t_v357 *>(_g4_sf + 380u);
  _g4_t_v358 &v358 = *reinterpret_cast<_g4_t_v358 *>(_g4_sf + 384u);
  _g4_t_v359 &v359 = *reinterpret_cast<_g4_t_v359 *>(_g4_sf + 388u);
  _g4_t_v360 &v360 = *reinterpret_cast<_g4_t_v360 *>(_g4_sf + 400u);
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 404u);
  _g4_t_v362 &v362 = *reinterpret_cast<_g4_t_v362 *>(_g4_sf + 408u);
  _g4_t_v363 &v363 = *reinterpret_cast<_g4_t_v363 *>(_g4_sf + 412u);
  _g4_t_v364 &v364 = *reinterpret_cast<_g4_t_v364 *>(_g4_sf + 416u);
  _g4_t_v365 &v365 = *reinterpret_cast<_g4_t_v365 *>(_g4_sf + 420u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 424u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 428u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 432u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 436u);

  v5 = a1[1];
  v6 = *a1;
  v351 = &v349;
  v352 = &v349;
  v7 = 0;
  v349 = 0;
  v350 = nullptr;
  v353 = 0;
  v318 = v5;
  if ( v5 - v6 > 3 )
  {
    v8 = nullptr;
    v328 = 0;
    while ( 1 )
    {
      v9 = *(uint32_t *)(v6 + 4 * v328);
      if ( v8 != nullptr )
      {
        while ( 1 )
        {
          v300 = v8[4];
          if ( v9 >= v300 )
          {
            v10 = (int *)v8[3];
            v295 = 0;
          }
          else
          {
            v10 = (int *)v8[2];
            v295 = 1;
          }
          if ( v10 == nullptr )
            break;
          v8 = v10;
        }
        if ( v295 == 0 )
          goto LABEL_26;
      }
      else
      {
        v8 = &v349;
      }
      if ( v351 != v8 )
      {
        v216 = v6;
        v235 = *(uint32_t *)(v6 + 4 * v328);
        v18 = sub_19048F0(v8);
        v9 = v235;
        v300 = *(uint32_t *)(v18 + 16);
        v6 = v216;
LABEL_26:
        if ( v9 <= v300 )
          goto LABEL_27;
      }
      v19 = true;
      if ( v8 != &v349 )
        v19 = v9 < v8[4];
      v217 = v19;
      v236 = v9;
      v20 = opNew(0x14u);
      if ( v20 != -16 )
        *(uint32_t *)(v20 + 16) = v236;
      sub_1904970(v217, v20, v8, &v349);
      ++v353;
      v6 = *a1;
      v318 = a1[1];
LABEL_27:
      if ( ++v328 >= (v318 - v6) >> 2 )
      {
        v7 = v353;
        break;
      }
      v8 = v350;
    }
  }
  v259 = nullptr;
  v243 = 0.0;
  a1[1] = v6;
  a2[1] = *a2;
LABEL_10:
  if ( v7 != 0 )
  {
    v251 = 0;
    v11 = 2 * v7;
    if ( 2 * v7 != 0 )
    {
      v73 = sub_4EBDC0(16 * v7);
      v251 = v73;
      do
      {
        if ( v73 != 0 )
        {
          *(uint16_t *)v73 = 0;
          *(uint16_t *)(v73 + 2) = 0;
          *(uint32_t *)(v73 + 4) = 0;
        }
        v73 += 8;
        --v11;
      }
      while ( v11 != 0 );
    }
    v355 = 0;
    v356 = nullptr;
    v359 = 0;
    v357 = &v355;
    v358 = &v355;
    if ( v351 == &v349 )
    {
      v338 = -1;
      v339[0] = -1;
    }
    else
    {
      v319 = 0;
      v12 = v351;
      do
      {
        v329 = v12[4];
        v340[0] = (uint16_t)v329;
        *(uint32_t *)(v319 + v251) = v329;
        *(uint32_t *)(v319 + v251 + 4) = *(uint32_t *)sub_F2D840(&v354, v340);
        *(uint32_t *)sub_F2D840(&v354, v340) = v319 + v251;
        v340[0] = HIWORD(v329);
        v13 = (uint32_t *)(v251 + v319 + 8);
        *v13 = v329;
        v234 = v13;
        v13[1] = *(uint32_t *)sub_F2D840(&v354, v340);
        *(uint32_t *)sub_F2D840(&v354, v340) = (uint32_t)(uintptr_t)(v234);
        v319 += 16;
        v12 = (int *)sub_19048E0(v12);
      }
      while ( v12 != &v349 );
      v338 = -1;
      v339[0] = -1;
      v14 = v357;
      if ( v357 != &v355 )
      {
        while ( 1 )
        {
          v15 = (uint16_t *)v14[5];
          if ( v15 == nullptr )
            break;
          v16 = v14[5];
          v17 = 0;
          do
          {
            ++v17;
            v16 = *(uint32_t *)(v16 + 4);
          }
          while ( v17 <= 2 && v16 != 0 );
          if ( v17 <= 2 )
            break;
          v14 = (int *)sub_19048E0(v14);
          if ( v14 == &v355 )
            goto LABEL_35;
        }
        v338 = v14[4];
        v135 = *v15;
        if ( v338 == v135 )
          v135 = v15[1];
        v339[0] = v135;
      }
    }
LABEL_35:
    v252 = sub_4EBDC0(0x20u);
    v285 = (volatile int32_t **)(v252 + 12);
    v254 = (volatile int32_t **)sub_4EBDC0(0x200u);
    *(uint32_t *)(v252 + 12) = (uint32_t)(uintptr_t)(v254);
    v241 = v254 + 128;
    v253 = sub_4EBDC0(0x20u);
    v279 = (volatile int32_t **)(v253 + 12);
    v278 = (volatile int32_t **)sub_4EBDC0(0x200u);
    v341 = nullptr;
    v342 = nullptr;
    v343 = nullptr;
    *(uint32_t *)(v253 + 12) = (uint32_t)(uintptr_t)(v278);
    v250 = v278 + 128;
    v21 = opNew(0x1Cu);
    *(uint32_t *)v21 = (uint32_t)(uintptr_t)(&off_208BC48);
    *(uint32_t *)(v21 + 4) = 0;
    *(uint32_t *)(v21 + 8) = 0;
    *(uint32_t *)(v21 + 12) = 0;
    *(uint32_t *)(v21 + 16) = 0;
    *(uint32_t *)(v21 + 20) = 0;
    __sync_add_and_fetch((volatile int32_t *)(v21 + 4), 1u);
    v22 = *(int **)(v21 + 16);
    v320 = (int *)(v21 + 8);
    v23 = *(int **)(v21 + 12);
    if ( v23 == v22 )
    {
      sub_F23480(v320, &v338);
      v25 = *(int **)(v21 + 12);
      v22 = *(int **)(v21 + 16);
    }
    else
    {
      v24 = 0;
      if ( v23 != nullptr )
      {
        *v23 = v338;
        v24 = *(uint32_t *)(v21 + 12);
        v22 = *(int **)(v21 + 16);
      }
      v25 = (int *)(v24 + 4);
      *(uint32_t *)(v21 + 12) = v24 + 4;
    }
    if ( v25 == v22 )
    {
      sub_F23480(v320, v339);
    }
    else
    {
      v26 = 0;
      if ( v25 != nullptr )
      {
        *v25 = v339[0];
        v26 = *(uint32_t *)(v21 + 12);
      }
      *(uint32_t *)(v21 + 12) = v26 + 4;
    }
    *(uint8_t *)(v21 + 24) = 0;
    if ( v254 != nullptr )
    {
      *v254 = (volatile int32_t *)v21;
      __sync_add_and_fetch((volatile int32_t *)(v21 + 4), 1u);
    }
    v288 = (volatile int32_t **)(v252 + 12);
    v304 = v254 + 1;
    v244 = v254 + 128;
    v260 = (int)(uintptr_t)(v254);
    v240 = v254;
    sub_5459C0((volatile int32_t *)v21);
    v301 = v253 + 12;
    v249 = v278 + 128;
    v269 = (int)(uintptr_t)(v278);
    v296 = v278;
    v245 = v278;
    v311 = nullptr;
    v256 = 8;
    v255 = 8;
    while ( 1 )
    {
      if ( v311 != nullptr )
      {
        v246 = 0;
        v27 = *((uint32_t *)v311 + 3);
        v28 = *((uint32_t *)v311 + 2);
        v29 = (v27 - v28) >> 2;
        v30 = *(uint32_t *)(v27 - 4);
        if ( v29 > 0 )
        {
          while ( 1 )
          {
            v31 = v30;
            v242 = *(uint32_t *)(v28 + 4 * v246);
            v32 = (uint16_t)v242;
            if ( (uint16_t)v30 > (uint16_t)v242 )
            {
              v31 = *(uint32_t *)(v28 + 4 * v246);
              v32 = v30;
            }
            v330 = &v349;
            v33 = v31 | (v32 << 16);
            v282 = v350;
            v34 = &v349;
            v321 = v33;
            if ( v350 != nullptr )
            {
              v34 = v350;
              while ( 1 )
              {
                if ( v33 <= v34[4] )
                {
                  if ( v33 >= v34[4] )
                  {
                    v120 = (int *)v34[3];
                    v121 = (int *)v34[2];
                    while ( v120 != nullptr )
                    {
                      if ( v321 >= v120[4] )
                      {
                        v120 = (int *)v120[3];
                      }
                      else
                      {
                        v330 = v120;
                        v120 = (int *)v120[2];
                      }
                    }
                    while ( v121 != nullptr )
                    {
                      if ( v321 > v121[4] )
                      {
                        v121 = (int *)v121[3];
                      }
                      else
                      {
                        v34 = v121;
                        v121 = (int *)v121[2];
                      }
                    }
                    break;
                  }
                  v330 = v34;
                  v34 = (int *)v34[2];
                }
                else
                {
                  v34 = (int *)v34[3];
                }
                if ( v34 == nullptr )
                {
                  v34 = v330;
                  break;
                }
              }
            }
            v35 = v351;
            if ( v351 != v34 )
              break;
            if ( v330 != &v349 )
              goto LABEL_58;
            if ( v350 != nullptr )
            {
              while ( 1 )
              {
                v267 = (uint32_t *)v282[3];
                if ( v267 != nullptr )
                {
                  while ( 1 )
                  {
                    v264 = (uint32_t *)v267[3];
                    if ( v264 != nullptr )
                    {
                      while ( 1 )
                      {
                        v274 = (uint32_t *)v264[3];
                        if ( v274 != nullptr )
                        {
                          while ( 1 )
                          {
                            v258 = (uint32_t *)v274[3];
                            if ( v258 != nullptr )
                            {
                              while ( 1 )
                              {
                                v247 = (uint32_t *)v258[3];
                                if ( v247 != nullptr )
                                {
                                  while ( 1 )
                                  {
                                    v327 = (uint32_t *)v247[3];
                                    if ( v327 != nullptr )
                                    {
                                      while ( 1 )
                                      {
                                        v335 = (uint32_t *)v327[3];
                                        if ( v335 != nullptr )
                                        {
                                          while ( 1 )
                                          {
                                            v122 = v335[3];
                                            if ( v122 != 0 )
                                            {
                                              while ( 1 )
                                              {
                                                g4_std::Rb_tree_int_int_Identity_int_les_d8cc59::M_erase(
                                                  (int)(uintptr_t)(&v348),
                                                  *(uint32_t **)(v122 + 12));
                                                v209 = *(uint32_t *)(v122 + 8);
                                                opDelete((void *)v122);
                                                if ( v209 == 0 )
                                                  break;
                                                v122 = v209;
                                              }
                                            }
                                            v123 = (uint32_t *)v335[2];
                                            opDelete(v335);
                                            if ( v123 == nullptr )
                                              break;
                                            v335 = v123;
                                          }
                                        }
                                        v124 = (uint32_t *)v327[2];
                                        opDelete(v327);
                                        if ( v124 == nullptr )
                                          break;
                                        v327 = v124;
                                      }
                                    }
                                    v125 = (uint32_t *)v247[2];
                                    opDelete(v247);
                                    if ( v125 == nullptr )
                                      break;
                                    v247 = v125;
                                  }
                                }
                                v126 = (uint32_t *)v258[2];
                                opDelete(v258);
                                if ( v126 == nullptr )
                                  break;
                                v258 = v126;
                              }
                            }
                            v127 = (uint32_t *)v274[2];
                            opDelete(v274);
                            if ( v127 == nullptr )
                              break;
                            v274 = v127;
                          }
                        }
                        v128 = (uint32_t *)v264[2];
                        opDelete(v264);
                        if ( v128 == nullptr )
                          break;
                        v264 = v128;
                      }
                    }
                    v129 = (uint32_t *)v267[2];
                    opDelete(v267);
                    if ( v129 == nullptr )
                      break;
                    v267 = v129;
                  }
                }
                v130 = (int *)v282[2];
                opDelete(v282);
                if ( v130 == nullptr )
                  break;
                v282 = v130;
              }
            }
            v350 = nullptr;
            v351 = &v349;
            v352 = &v349;
            v353 = 0;
            v37 = v311;
            v28 = *((uint32_t *)v311 + 2);
LABEL_232:
            v27 = *((uint32_t *)v37 + 3);
            ++v246;
            v29 = (v27 - v28) >> 2;
            v331 = v29;
            if ( v246 >= v29 )
              goto LABEL_62;
            v30 = v242;
          }
          v35 = v34;
LABEL_58:
          if ( v330 == v35 )
          {
            v37 = v311;
          }
          else
          {
            while ( 1 )
            {
              v218 = (int *)sub_19048E0(v35);
              v36 = (void *)sub_1904AE0(v35, &v349);
              opDelete(v36);
              --v353;
              if ( v330 == v218 )
                break;
              v35 = v218;
            }
            v37 = v311;
            v28 = *((uint32_t *)v311 + 2);
          }
          goto LABEL_232;
        }
        v331 = (*((uint32_t *)v311 + 3) - v28) >> 2;
        v37 = v311;
LABEL_62:
        if ( *((uint8_t *)v37 + 24) != 0 )
        {
          v38 = 0.0;
          if ( v29 > 0 )
          {
            v39 = 0.0;
            v40 = 0.0;
            v41 = 0.0;
            v322 = 0;
            v272 = v27;
            v283 = a5[26];
            do
            {
              v42 = v322++;
              v43 = (float *)(v283 + 12 * *(uint32_t *)(v28 + 4 * v42));
              v39 = v39 + *v43;
              v40 = v40 + v43[1];
              v41 = v41 + v43[2];
            }
            while ( v322 != v29 );
            v44 = v272;
            v273 = v29;
            v45 = a5[26];
            v46 = (float *)(v283 + 12 * *(uint32_t *)(v44 - 4));
            v47 = 1.0 / (float)((float)((float)HIWORD(v331) * 65536.0) + (float)(uint16_t)v331);
            v48 = v41 * v47;
            v49 = v39 * v47;
            v50 = v40 * v47;
            v38 = 0.0;
            v262 = v48;
            v323 = v49;
            v265 = v50;
            v51 = v49 - *v46;
            v52 = v50 - v46[1];
            v53 = v262 - v46[2];
            v54 = 0;
            while ( 1 )
            {
              v55 = *(uint32_t *)(v28 + 4 * v54++);
              v56 = (float *)(v45 + 12 * v55);
              v57 = v265 - v56[1];
              v332 = v262 - v56[2];
              v38 = (float)((float)((float)((float)((float)(v53 * v57) - (float)(v52 * v332))
                                          * (float)((float)(v53 * v57) - (float)(v52 * v332)))
                                  + (float)((float)((float)(v51 * v332) - (float)(v53 * (float)(v323 - *v56)))
                                          * (float)((float)(v51 * v332) - (float)(v53 * (float)(v323 - *v56)))))
                          + v38)
                  + (float)((float)((float)(v52 * (float)(v323 - *v56)) - (float)(v51 * v57))
                          * (float)((float)(v52 * (float)(v323 - *v56)) - (float)(v51 * v57)));
              if ( v54 == v273 )
                break;
              v51 = v323 - *v56;
              v52 = v265 - v56[1];
              v53 = v262 - v56[2];
              v45 = a5[26];
            }
          }
          if ( v38 > v243 )
          {
            __sync_add_and_fetch(v311 + 1, 1u);
            if ( v259 != nullptr )
              sub_5459C0(v259);
            v259 = v311;
            v243 = v38;
          }
        }
      }
      if ( v304 == v254 )
      {
        if ( v311 != nullptr )
          sub_5459C0(v311);
        if ( v341 != nullptr )
          gll_operator_delete_arr((int)(uintptr_t)(v341));
        v345[0] = v296;
        v345[1] = (volatile int32_t **)v269;
        v345[2] = v249;
        v345[3] = (volatile int32_t **)v301;
        v344[0] = v278;
        v344[1] = v245;
        v344[2] = v250;
        v344[3] = v279;
        sub_F2EC90(v344, v345);
        if ( v253 != 0 )
        {
          v131 = v301 + 4;
          if ( v301 + 4 > (unsigned int)(uintptr_t)(v279) )
          {
            v132 = (int *)v279;
            do
            {
              v210 = v131;
              v201 = *v132++;
              gll_operator_delete_arr(v201);
              v131 = v210;
            }
            while ( v210 > (unsigned int)(uintptr_t)(v132) );
          }
          gll_operator_delete_arr(v253);
        }
        v347[0] = v304;
        v347[1] = (volatile int32_t **)v260;
        v347[2] = v244;
        v347[3] = v288;
        v346[0] = v254;
        v346[1] = v240;
        v346[3] = v285;
        v346[2] = v241;
        sub_F2EC90(v346, v347);
        v133 = v252;
        if ( v252 != 0 )
        {
          if ( v288 + 1 > v285 )
          {
            v134 = (int *)v285;
            do
            {
              v211 = v134;
              gll_operator_delete_arr(*v134);
              v134 = v211 + 1;
            }
            while ( v288 + 1 > (volatile int32_t **)v211 + 1 );
          }
          gll_operator_delete_arr(v252);
        }
        sub_F23780(v133, v356);
        if ( v251 != 0 )
          gll_operator_delete_arr(v251);
        v7 = v353;
        goto LABEL_10;
      }
      v58 = (int)(uintptr_t)(v304);
      if ( (volatile int32_t **)v260 == v304 )
        v58 = (int)(uintptr_t)(*(v288 - 1) + 128);
      v59 = *(uint32_t **)(v58 - 4);
      if ( v59 != nullptr )
        __sync_add_and_fetch(v59 + 1, 1u);
      if ( v311 != nullptr )
        sub_5459C0(v311);
      if ( (volatile int32_t **)v260 == v304 )
        break;
      v284 = v304 - 1;
      v60 = *(v304 - 1);
      v324 = (int)(uintptr_t)(v288);
      if ( v60 != nullptr )
        goto LABEL_82;
LABEL_83:
      v61 = (int *)v59[2];
      v257 = (volatile int32_t *)(v59 + 1);
      v62 = *v61;
      v339[0] = v61[1];
      v338 = v62;
      v59[3] -= 4;
      v266 = (void **)(v59 + 2);
      while ( 1 )
      {
        if ( v301 > (unsigned int)(uintptr_t)(v279 + 1) )
        {
          v63 = (volatile int32_t ***)(v279 + 1);
          v64 = v59;
          do
          {
            v65 = *v63;
            v312 = (int)(uintptr_t)(*v63 + 128);
            do
            {
              if ( *v65 != nullptr )
              {
                v219 = v63;
                v237 = v64;
                sub_5459C0(*v65);
                v64 = v237;
                v63 = v219;
              }
              ++v65;
            }
            while ( v65 != (volatile int32_t **)v312 );
            ++v63;
          }
          while ( v301 > (unsigned int)(uintptr_t)(v63) );
          v59 = v64;
        }
        v66 = v278;
        if ( (volatile int32_t **)v301 == v279 )
        {
          while ( v296 != v66 )
          {
            if ( *v66 != nullptr )
            {
              v206 = v66;
              sub_5459C0(*v66);
              v66 = v206;
            }
            ++v66;
          }
        }
        else
        {
          while ( v250 != v66 )
          {
            if ( *v66 != nullptr )
            {
              v203 = v66;
              sub_5459C0(*v66);
              v66 = v203;
            }
            ++v66;
          }
          if ( (volatile int32_t **)v269 != v296 )
          {
            v67 = (volatile int32_t **)v269;
            do
            {
              if ( *v67 != nullptr )
              {
                v204 = v67;
                sub_5459C0(*v67);
                v67 = v204;
              }
              ++v67;
            }
            while ( v296 != v67 );
          }
        }
        v68 = v301 + 4;
        if ( v301 + 4 > (unsigned int)(uintptr_t)(v279 + 1) )
        {
          v69 = v59;
          v70 = (int *)(v279 + 1);
          do
          {
            v205 = v68;
            v238 = v69;
            v200 = *v70++;
            gll_operator_delete_arr(v200);
            v68 = v205;
            v69 = v238;
          }
          while ( v205 > (unsigned int)(uintptr_t)(v70) );
          v59 = v238;
        }
        __sync_add_and_fetch(v257, 1u);
        v301 = (unsigned int)(uintptr_t)(v279);
        v249 = v250;
        v333 = (volatile int32_t *)(v59);
        v269 = (int)(uintptr_t)(v245);
        v296 = v278;
        v305 = 0;
        while ( v333 != nullptr )
        {
          if ( v305 != 0 )
          {
            sub_5459C0(v333);
            break;
          }
          v71 = *((uint32_t **)v333 + 2);
          v289 = *((uint32_t **)v333 + 3);
          v313 = v289 - v71;
          if ( v313 > 0 )
          {
            v72 = 0;
            v263 = 0;
            if ( *v71 == v339[0] )
            {
LABEL_292:
              if ( v296 != v278 )
              {
                if ( &v341 == (char **)(v333 + 2) )
                {
                  v275 = v59;
                }
                else
                {
                  v306 = v341;
                  if ( (v343 - v341) >> 2 >= (unsigned int)v313 )
                  {
                    v276 = v342;
                    v163 = (v342 - v341) >> 2;
                    if ( v163 < v313 )
                    {
                      v164 = &v71[v163];
                      if ( v163 != 0 )
                      {
                        memmove(v341, v71, 4 * v163);
                        v276 = v342;
                        v306 = v341;
                        v289 = *((uint32_t **)v333 + 3);
                        v164 = (uint32_t *)(*((uint32_t *)v333 + 2) + ((v342 - v341) & 0xFFFFFFFC));
                      }
                      v165 = v276;
                      if ( v289 == v164 )
                      {
                        v139 = &v306[4 * v313];
                      }
                      else
                      {
                        do
                        {
                          if ( v165 != nullptr )
                            *(uint32_t *)v165 = *v164;
                          ++v164;
                          v165 += 4;
                        }
                        while ( v164 != v289 );
                        v139 = &v341[4 * v313];
                      }
                    }
                    else
                    {
                      memmove(v341, v71, 4 * v313);
                      v139 = &v341[4 * v313];
                    }
                  }
                  else
                  {
                    v222 = *((uint32_t **)v333 + 2);
                    v315 = v313;
                    v136 = (uint32_t *)sub_4EBDC0(v315 * 4);
                    v137 = v222;
                    if ( v222 != v289 )
                    {
                      v138 = v136;
                      do
                      {
                        if ( v138 != nullptr )
                          *v138 = *v137;
                        ++v137;
                        ++v138;
                      }
                      while ( v137 != v289 );
                    }
                    if ( v341 != nullptr )
                    {
                      v212 = v136;
                      gll_operator_delete_arr((int)(uintptr_t)(v341));
                      v136 = v212;
                    }
                    v341 = (char *)v136;
                    v139 = (char *)&v136[v315];
                    v343 = v139;
                  }
                  v342 = v139;
                  v275 = v59;
                }
                do
                {
                  if ( (volatile int32_t **)v269 == v296 )
                  {
                    v140 = *(uint32_t *)(*(uint32_t *)(v301 - 4) + 508);
                    gll_operator_delete_arr(v269);
                    v151 = v301 - 4;
                    v269 = *(uint32_t *)(v301 - 4);
                    v249 = (volatile int32_t **)(v269 + 512);
                    v296 = (volatile int32_t **)(v269 + 508);
                    v152 = *(volatile int32_t **)(v269 + 508);
                    if ( v152 != nullptr )
                    {
                      sub_5459C0(v152);
                      v151 = v301 - 4;
                    }
                    v301 = v151;
                  }
                  else
                  {
                    v140 = (int)(uintptr_t)(*--v296);
                    if ( v140 != 0 )
                      sub_5459C0((volatile int32_t *)v140);
                  }
                  v141 = *(uint32_t *)(v140 + 8);
                  if ( *(uint32_t *)(v140 + 12) - v141 > 3 )
                  {
                    v309 = *(uint32_t *)(v140 + 8);
                    v167 = 0;
                    v248 = *(uint32_t *)(v140 + 12);
                    while ( 1 )
                    {
                      v168 = (uint32_t *)(v141 + 4 * v167);
                      if ( v342 == v343 )
                      {
                        v239 = v167;
                        sub_F23480((int *)&v341, v168);
                        v169 = *(uint32_t *)(v140 + 12);
                        v141 = *(uint32_t *)(v140 + 8);
                        v248 = v169;
                        v167 = v239;
                      }
                      else
                      {
                        v293 = nullptr;
                        if ( v342 != nullptr )
                        {
                          *(uint32_t *)v342 = *v168;
                          v293 = v342;
                          v309 = *(uint32_t *)(v140 + 8);
                          v248 = *(uint32_t *)(v140 + 12);
                        }
                        v169 = v248;
                        v342 = v293 + 4;
                        v141 = v309;
                      }
                      if ( ++v167 >= (v169 - v141) >> 2 )
                        break;
                      v309 = v141;
                    }
                  }
                }
                while ( v296 != v278 );
                v59 = v275;
                if ( v266 != (void **)&v341 )
                {
                  v142 = v341;
                  v307 = (uint8_t *)v275[2];
                  v291 = v342;
                  v143 = (v342 - v341) >> 2;
                  v316 = v143;
                  if ( v143 <= (v275[4] - (int)(uintptr_t)(v307)) >> 2 )
                  {
                    v277 = (char *)v275[3];
                    v166 = (v277 - (char *)(v307)) >> 2;
                    if ( v316 > v166 )
                    {
                      v170 = &v341[4 * v166];
                      if ( v166 != 0 )
                      {
                        memmove(v307, v341, 4 * v166);
                        v277 = (char *)v59[3];
                        v291 = v342;
                        v307 = (uint8_t *)v59[2];
                        v170 = &v341[(v277 - (char *)(v307)) & 0xFFFFFFFC];
                      }
                      v171 = v277;
                      if ( v291 == v170 )
                      {
                        v147 = (int)(uintptr_t)(&v307[4 * v316]);
                      }
                      else
                      {
                        do
                        {
                          if ( v171 != nullptr )
                            *(uint32_t *)v171 = *(uint32_t *)v170;
                          v170 += 4;
                          v171 += 4;
                        }
                        while ( v170 != v291 );
                        v147 = v59[2] + 4 * v316;
                      }
                    }
                    else
                    {
                      v147 = (int)(uintptr_t)(v307);
                      if ( v316 != 0 )
                      {
                        memmove(v307, v341, 4 * v316);
                        v147 = 4 * v316 + v59[2];
                      }
                    }
                  }
                  else
                  {
                    v144 = 0;
                    v308 = 0;
                    if ( v143 != 0 )
                    {
                      v223 = v341;
                      v308 = 4 * v143;
                      v144 = sub_4EBDC0(4 * v143);
                      v142 = v223;
                    }
                    if ( v142 != v291 )
                    {
                      v145 = (uint32_t *)v144;
                      do
                      {
                        if ( v145 != nullptr )
                          *v145 = *(uint32_t *)v142;
                        v142 += 4;
                        ++v145;
                      }
                      while ( v291 != v142 );
                    }
                    v146 = v275[2];
                    if ( v146 != 0 )
                    {
                      v213 = v144;
                      gll_operator_delete_arr(v146);
                      v144 = v213;
                    }
                    v275[2] = v144;
                    v147 = v308 + v144;
                    v275[4] = v147;
                  }
                  v59[3] = v147;
                }
              }
              if ( v263 != 0 )
              {
                v195 = (uint32_t *)v59[3];
                if ( v195 == (uint32_t *)v59[4] )
                {
                  sub_F23480((int *)v266, v339);
                  v305 = 1;
                }
                else
                {
                  v196 = 0;
                  if ( v195 != nullptr )
                  {
                    *v195 = v339[0];
                    v196 = v59[3];
                  }
                  v305 = 1;
                  v59[3] = v196 + 4;
                }
              }
              else
              {
                *((uint8_t *)v59 + 24) = 1;
                v305 = 1;
              }
            }
            else
            {
              while ( ++v72 != v313 )
              {
                if ( v71[v72] == v339[0] )
                {
                  v263 = v72;
                  goto LABEL_292;
                }
              }
            }
          }
          v317 = v333 + 1;
          __sync_add_and_fetch(v333 + 1, 1u);
          if ( v296 == v249 - 1 )
          {
            if ( v256 - ((int)(v301 - v253) >> 2) <= 1 )
            {
              v153 = (int)(v301 - (uint32_t)(uintptr_t)(v279)) >> 2;
              v154 = v153 + 1;
              v155 = v153 + 2;
              v271 = v154;
              if ( 2 * v155 >= v256 )
              {
                v160 = 1;
                if ( v256 != 0 )
                  v160 = v256;
                v227 = v155;
                v256 += v160 + 2;
                v292 = sub_4EBDC0(4 * v256);
                v161 = (void *)(v292 + 4 * ((v256 - v227) >> 1));
                v162 = (int)(v301 + 4 - (uint32_t)(uintptr_t)(v279)) >> 2;
                if ( v162 != 0 )
                {
                  memmove(v161, v279, 4 * v162);
                  v161 = (void *)(v292 + 4 * ((v256 - v227) >> 1));
                }
                v228 = (volatile int32_t **)v161;
                gll_operator_delete_arr(v253);
                v156 = v228;
                v253 = v292;
              }
              else
              {
                v156 = (volatile int32_t **)(v253 + 4 * ((v256 - v155) >> 1));
                v157 = v301 + 4 - (uint32_t)(uintptr_t)(v279);
                if ( v156 >= v279 )
                {
                  v159 = v157 >> 2;
                  if ( v159 != 0 )
                  {
                    v226 = v156;
                    memmove(&(&v156[v154])[-v159], v279, 4 * v159);
                    v156 = v226;
                  }
                }
                else
                {
                  v158 = v157 >> 2;
                  if ( v158 != 0 )
                  {
                    v225 = v156;
                    memmove(v156, v279, 4 * v158);
                    v156 = v225;
                  }
                }
              }
              v279 = v156;
              v245 = (volatile int32_t **)*v156;
              v250 = (volatile int32_t **)(*v156 + 128);
              v301 = (unsigned int)(uintptr_t)(&v156[v271 - 1]);
            }
            v148 = sub_4EBDC0(0x200u);
            *(uint32_t *)(v301 + 4) = v148;
            if ( v296 != nullptr )
            {
              *v296 = v333;
              __sync_add_and_fetch(v317, 1u);
              v148 = *(uint32_t *)(v301 + 4);
            }
            v301 += 4;
            v249 = (volatile int32_t **)(v148 + 512);
            v269 = v148;
          }
          else
          {
            if ( v296 != nullptr )
            {
              *v296 = v333;
              __sync_add_and_fetch(v317, 1u);
            }
            v148 = (int)(uintptr_t)(v296 + 1);
          }
          v214 = (volatile int32_t **)v148;
          sub_5459C0(v333);
          v149 = v333;
          v150 = *((volatile int32_t **)v333 + 5);
          if ( v150 != nullptr )
          {
            __sync_add_and_fetch(v150 + 1, 1u);
            v149 = v333;
          }
          v224 = v150;
          sub_5459C0(v149);
          v333 = v224;
          v296 = v214;
        }
        if ( v305 != 0 )
          break;
        v172 = *(uint16_t **)sub_F2D840(&v354, v339);
        if ( v172 == nullptr )
        {
LABEL_432:
          v193 = (uint32_t *)v59[3];
          if ( v193 == (uint32_t *)v59[4] )
          {
            sub_F23480((int *)v266, v339);
          }
          else
          {
            v194 = 0;
            if ( v193 != nullptr )
            {
              *v193 = v339[0];
              v194 = v59[3];
            }
            v59[3] = v194 + 4;
          }
          break;
        }
        v336 = -1;
        v173 = v339[0];
        do
        {
          v174 = *v172;
          if ( v174 == v339[0] )
            v174 = v172[1];
          if ( v174 != v338 )
          {
            if ( v336 != -1 )
            {
              v337 = *(uint16_t **)sub_F2D840(&v354, v339);
              if ( v337 != nullptr )
              {
                v294 = v59;
                do
                {
                  v177 = *v337;
                  if ( v339[0] == v177 )
                    v177 = v337[1];
                  v340[0] = v177;
                  if ( v177 != v338 )
                  {
                    v178 = opNew(0x1Cu);
                    *(uint32_t *)v178 = (uint32_t)(uintptr_t)(&off_208BC48);
                    *(uint32_t *)(v178 + 4) = 0;
                    *(uint32_t *)(v178 + 8) = 0;
                    *(uint32_t *)(v178 + 12) = 0;
                    *(uint32_t *)(v178 + 16) = 0;
                    *(uint32_t *)(v178 + 20) = 0;
                    sub_F23480((int *)(v178 + 8), v339);
                    v179 = *(uint32_t **)(v178 + 12);
                    if ( v179 == *(uint32_t **)(v178 + 16) )
                    {
                      sub_F23480((int *)(v178 + 8), v340);
                    }
                    else
                    {
                      v180 = 0;
                      if ( v179 != nullptr )
                      {
                        *v179 = v340[0];
                        v180 = *(uint32_t *)(v178 + 12);
                      }
                      *(uint32_t *)(v178 + 12) = v180 + 4;
                    }
                    __sync_add_and_fetch(v257, 1u);
                    v181 = *(volatile int32_t **)(v178 + 20);
                    *(uint32_t *)(v178 + 20) = (uint32_t)(uintptr_t)(v294);
                    if ( v181 != nullptr )
                      sub_5459C0(v181);
                    *(uint8_t *)(v178 + 24) = 0;
                    __sync_add_and_fetch((volatile int32_t *)(v178 + 4), 1u);
                    if ( v284 == v244 - 1 )
                    {
                      if ( v255 - ((v324 - v252) >> 2) <= 1 )
                      {
                        v183 = (v324 - (int)(uintptr_t)(v285)) >> 2;
                        v184 = v183 + 1;
                        v185 = v183 + 2;
                        v261 = v184;
                        if ( 2 * v185 >= v255 )
                        {
                          v190 = 1;
                          if ( v255 != 0 )
                            v190 = v255;
                          v231 = v185;
                          v255 += v190 + 2;
                          v310 = sub_4EBDC0(4 * v255);
                          v191 = (void *)(v310 + 4 * ((v255 - v231) >> 1));
                          v192 = (v324 + 4 - (int)(uintptr_t)(v285)) >> 2;
                          if ( v192 != 0 )
                          {
                            memmove(v191, v285, 4 * v192);
                            v191 = (void *)(v310 + 4 * ((v255 - v231) >> 1));
                          }
                          v232 = (volatile int32_t **)v191;
                          gll_operator_delete_arr(v252);
                          v186 = v232;
                          v252 = v310;
                        }
                        else
                        {
                          v186 = (volatile int32_t **)(v252 + 4 * ((v255 - v185) >> 1));
                          v187 = v324 + 4 - (uint32_t)(uintptr_t)(v285);
                          if ( v285 <= v186 )
                          {
                            v189 = v187 >> 2;
                            if ( v189 != 0 )
                            {
                              v230 = v186;
                              memmove(&(&v186[v184])[-v189], v285, 4 * v189);
                              v186 = v230;
                            }
                          }
                          else
                          {
                            v188 = v187 >> 2;
                            if ( v188 != 0 )
                            {
                              v229 = v186;
                              memmove(v186, v285, 4 * v188);
                              v186 = v229;
                            }
                          }
                        }
                        v285 = v186;
                        v240 = (volatile int32_t **)*v186;
                        v241 = (volatile int32_t **)(*v186 + 128);
                        v324 = (int)(uintptr_t)(&v186[v261 - 1]);
                      }
                      v182 = sub_4EBDC0(0x200u);
                      *(uint32_t *)(v324 + 4) = v182;
                      if ( v284 != nullptr )
                      {
                        *v284 = (volatile int32_t *)v178;
                        __sync_add_and_fetch((volatile int32_t *)(v178 + 4), 1u);
                        v182 = *(uint32_t *)(v324 + 4);
                      }
                      v324 += 4;
                      v244 = (volatile int32_t **)(v182 + 512);
                      v260 = v182;
                    }
                    else
                    {
                      if ( v284 != nullptr )
                      {
                        *v284 = (volatile int32_t *)v178;
                        __sync_add_and_fetch((volatile int32_t *)(v178 + 4), 1u);
                      }
                      v182 = (int)(uintptr_t)(v284 + 1);
                    }
                    v215 = (volatile int32_t **)v182;
                    sub_5459C0((volatile int32_t *)v178);
                    v284 = v215;
                  }
                  v337 = *((uint16_t **)v337 + 1);
                }
                while ( v337 != nullptr );
                v59 = v294;
              }
              goto LABEL_414;
            }
            v336 = v174;
          }
          v172 = *((uint16_t **)v172 + 1);
        }
        while ( v172 != nullptr );
        if ( v336 == -1 )
          goto LABEL_432;
        v175 = (uint32_t *)v59[3];
        if ( v175 == (uint32_t *)v59[4] )
        {
          sub_F23480((int *)v266, v339);
          v173 = v339[0];
        }
        else
        {
          v176 = 0;
          if ( v175 != nullptr )
          {
            *v175 = v339[0];
            v176 = v59[3];
            v173 = v339[0];
          }
          v59[3] = v176 + 4;
        }
        v338 = v173;
        v339[0] = v336;
      }
LABEL_414:
      v311 = (volatile int32_t *)(v59);
      v304 = v284;
      v288 = (volatile int32_t **)v324;
    }
    gll_operator_delete_arr(v260);
    v324 = (int)(uintptr_t)(v288 - 1);
    v260 = (int)(uintptr_t)(*(v288 - 1));
    v244 = (volatile int32_t **)(v260 + 512);
    v284 = (volatile int32_t **)(v260 + 508);
    v60 = *(volatile int32_t **)(v260 + 508);
    if ( v60 == nullptr )
      goto LABEL_83;
LABEL_82:
    sub_5459C0(v60);
    goto LABEL_83;
  }
  v74 = *((uint32_t *)v259 + 3);
  v75 = *((uint32_t *)v259 + 2);
  v76 = *(uint32_t *)(v74 - 4);
  if ( v74 - v75 > 3 )
  {
    v297 = 0;
    while ( 1 )
    {
      v334 = v76;
      v280 = *(uint32_t *)(v75 + 4 * v297);
      v325 = v280;
      if ( (uint16_t)v76 > (uint16_t)v280 )
      {
        v325 = v76;
        v334 = *(uint32_t *)(v75 + 4 * v297);
      }
      v77 = (char *)a1[1];
      if ( v77 == (char *)a1[2] )
      {
        v83 = (int)(uintptr_t)(&v77[-*a1]) >> 2;
        v302 = 4;
        if ( v83 != 0 )
        {
          v302 = 0xFFFFFFFC;
          if ( v83 <= 2 * v83 )
          {
            v84 = 8 * v83;
            if ( 2 * v83 > 0x3FFFFFFF )
              v84 = -4;
            v302 = v84;
          }
        }
        v220 = (int)(uintptr_t)(&v77[-*a1]) >> 2;
        v85 = sub_4EBDC0(v302);
        v290 = v85 + 4;
        v86 = (uint16_t *)(v85 + 4 * v220);
        if ( v86 != nullptr )
        {
          *v86 = v334;
          v86[1] = v325;
        }
        v286 = *a1;
        if ( v77 != (char *)*a1 )
        {
          v87 = (char *)*a1;
          v88 = (uint32_t *)v85;
          do
          {
            if ( v88 != nullptr )
              *v88 = *(uint32_t *)v87;
            v87 += 4;
            ++v88;
          }
          while ( v77 != v87 );
          v290 = v85 + 4 * ((unsigned int)(uintptr_t)(&v77[-v286 - 4]) >> 2) + 8;
        }
        v287 = (char *)a1[1];
        if ( v77 != v287 )
        {
          v89 = v77;
          v270 = v77;
          v90 = (uint32_t *)v290;
          do
          {
            if ( v90 != nullptr )
              *v90 = *(uint32_t *)v89;
            v89 += 4;
            ++v90;
          }
          while ( v287 != v89 );
          v290 += 4 * ((unsigned int)(v287 - (v270 + 4)) >> 2) + 4;
        }
        if ( *a1 != 0 )
        {
          v207 = v85;
          gll_operator_delete_arr(*a1);
          v85 = v207;
        }
        *a1 = v85;
        a1[1] = v290;
        a1[2] = v302 + v85;
      }
      else
      {
        v78 = 0;
        if ( v77 != nullptr )
        {
          *(uint16_t *)v77 = v334;
          *((uint16_t *)v77 + 1) = v325;
          v78 = a1[1];
        }
        a1[1] = v78 + 4;
      }
      v79 = a5 + 15;
      v80 = v334 | (v325 << 16);
      v81 = (uint32_t *)a5[16];
      if ( v81 != nullptr )
      {
        v82 = a5 + 15;
        do
        {
          if ( v80 > v81[4] )
          {
            v81 = (uint32_t *)v81[3];
          }
          else
          {
            v82 = v81;
            v81 = (uint32_t *)v81[2];
          }
        }
        while ( v81 != nullptr );
        if ( a5 + 15 != v82 )
        {
          v79 = a5 + 15;
          if ( v80 >= v82[4] )
            v79 = v82;
        }
      }
      ++v297;
      *(uint32_t *)(v79[5] + 16) = a4;
      v75 = *((uint32_t *)v259 + 2);
      if ( v297 >= (*((uint32_t *)v259 + 3) - v75) >> 2 )
        break;
      LOWORD(v76) = v280;
    }
  }
  v360 = 0;
  v362 = 0;
  v363 = 0;
  v364 = 0;
  v365 = 0;
  v366 = nullptr;
  v367 = nullptr;
  v368 = nullptr;
  v369 = nullptr;
  v361 = 8;
  v360 = sub_4EBDC0(0x20u);
  v91 = (uint32_t *)(v360 + ((2 * v361 - 2) & 0xFFFFFFFC));
  *v91 = sub_4EBDC0(0x200u);
  v365 = (unsigned int)(uintptr_t)(v91);
  v92 = *v91;
  v369 = v91;
  v363 = v92;
  v364 = v92 + 512;
  v93 = (uint32_t *)*v91;
  v367 = v93;
  v362 = v92;
  v366 = (int *)(v93);
  v368 = v93 + 128;
  *(uint32_t *)(a3 + 68) = a4;
  v94 = nullptr;
  if ( v93 != nullptr )
  {
    *v93 = a3;
    v94 = v366;
    v92 = v362;
  }
  v95 = (int)(uintptr_t)(v94 + 1);
  v366 = v94 + 1;
  while ( v95 != v92 )
  {
    if ( v367 == (uint32_t *)v95 )
    {
      v96 = *(uint32_t **)(*(v369 - 1) + 508);
      gll_operator_delete_arr(v95);
      v367 = (uint32_t *)*--v369;
      v97 = (int *)(v367 + 127);
      v368 = v367 + 128;
      v366 = (int *)(v367 + 127);
    }
    else
    {
      v96 = *(uint32_t **)(v95 - 4);
      v97 = (int *)(v95 - 4);
      v366 = v97;
    }
    v98 = (uint32_t *)v96[10];
    if ( v98[4] != a4 )
    {
      v99 = v98[2];
      if ( v96 == (uint32_t *)v99 )
        v99 = v98[3];
      v340[0] = v99;
      if ( *(uint32_t *)(v99 + 68) != a4 )
      {
        *(uint32_t *)(v99 + 68) = a4;
        if ( v97 == (int *)(uintptr_t)(v368 - 1) )
        {
          sub_F221C0(&v360, v340);
        }
        else
        {
          if ( v97 != nullptr )
          {
            *v97 = v99;
            v100 = v366;
          }
          else
          {
            v100 = nullptr;
          }
          v366 = v100 + 1;
        }
      }
    }
    v101 = (uint32_t *)v96[11];
    v102 = a4;
    if ( v101[4] != a4 )
    {
      v103 = v101[2];
      if ( v96 == (uint32_t *)v103 )
        v103 = v101[3];
      v340[0] = v103;
      v102 = a4;
      if ( *(uint32_t *)(v103 + 68) != a4 )
      {
        *(uint32_t *)(v103 + 68) = a4;
        if ( v366 == (int *)(uintptr_t)(v368 - 1) )
        {
          sub_F221C0(&v360, v340);
          v102 = a4;
        }
        else
        {
          if ( v366 != nullptr )
          {
            *v366 = v103;
            v104 = v366;
          }
          else
          {
            v104 = nullptr;
          }
          v102 = a4;
          v366 = v104 + 1;
        }
      }
    }
    v105 = (uint32_t *)v96[12];
    if ( v105[4] != v102 )
    {
      v106 = v105[2];
      if ( v96 == (uint32_t *)v106 )
        v106 = v105[3];
      v340[0] = v106;
      if ( *(uint32_t *)(v106 + 68) != a4 )
      {
        *(uint32_t *)(v106 + 68) = a4;
        if ( v366 == (int *)(uintptr_t)(v368 - 1) )
        {
          sub_F221C0(&v360, v340);
        }
        else
        {
          if ( v366 != nullptr )
          {
            *v366 = v106;
            v107 = v366;
          }
          else
          {
            v107 = nullptr;
          }
          v366 = v107 + 1;
        }
      }
    }
    v108 = (uint32_t *)a2[1];
    if ( v108 == (uint32_t *)a2[2] )
    {
      v110 = ((int)(uintptr_t)(v108) - *a2) >> 2;
      v303 = 4;
      v314 = v110;
      if ( v110 != 0 )
      {
        v111 = 2 * v110;
        v303 = 0xFFFFFFFC;
        if ( v314 <= v111 )
        {
          v112 = v111 <= 0x3FFFFFFF;
          v113 = -4;
          if ( v112 )
            v113 = 8 * v314;
          v303 = v113;
        }
      }
      v221 = (char *)a2[1];
      v114 = sub_4EBDC0(v303);
      v326 = v114 + 4;
      v115 = (uint32_t *)(v114 + 4 * v314);
      if ( v115 != nullptr )
        *v115 = (uint32_t)(uintptr_t)(v96);
      v116 = (char *)*a2;
      v298 = *a2;
      if ( v221 != (char *)*a2 )
      {
        v117 = (uint32_t *)v114;
        do
        {
          if ( v117 != nullptr )
            *v117 = *(uint32_t *)v116;
          v116 += 4;
          ++v117;
        }
        while ( v221 != v116 );
        v326 = v114 + 4 * ((unsigned int)(uintptr_t)(&v221[-v298 - 4]) >> 2) + 8;
      }
      v299 = (char *)a2[1];
      if ( v221 != v299 )
      {
        v118 = v221;
        v119 = (uint32_t *)v326;
        do
        {
          if ( v119 != nullptr )
            *v119 = *(uint32_t *)v118;
          v118 += 4;
          ++v119;
        }
        while ( v299 != v118 );
        v326 += 4 * ((unsigned int)(v299 - (v221 + 4)) >> 2) + 4;
      }
      if ( *a2 != 0 )
      {
        v208 = v114;
        gll_operator_delete_arr(*a2);
        v114 = v208;
      }
      *a2 = v114;
      a2[1] = v326;
      a2[2] = v303 + v114;
    }
    else
    {
      v109 = 0;
      if ( v108 != nullptr )
      {
        *v108 = (uint32_t)(uintptr_t)(v96);
        v109 = a2[1];
      }
      a2[1] = v109 + 4;
    }
    v95 = (int)(uintptr_t)(v366);
    v92 = v362;
  }
  v197 = v360;
  if ( v360 != 0 )
  {
    v198 = (int *)v365;
    v199 = v369 + 1;
    if ( (unsigned int)(uintptr_t)(v369 + 1) > v365 )
    {
      do
      {
        v233 = (unsigned int)(uintptr_t)(v199);
        v202 = *v198++;
        gll_operator_delete_arr(v202);
        v199 = (uint32_t *)v233;
      }
      while ( v233 > (unsigned int)(uintptr_t)(v198) );
      v197 = v360;
    }
    gll_operator_delete_arr(v197);
  }
  if ( v259 != nullptr )
    sub_5459C0(v259);
  g4_std::Rb_tree_int_int_Identity_int_les_d8cc59::M_erase((int)(uintptr_t)(&v348), v350);
}

// ----------------------------------------------------------------------------
// Function: sub_F6B650  (binary VA: 0xf66c70)
// Original: sub_F6B650
// ----------------------------------------------------------------------------
double * sub_F6B650(int a1, int a2, uint32_t *a3)
{
  uint32_t **v4;
  uint32_t *v5;
  int v6;
  int v7;
  float *v8;
  float *v9;
  __m128 v10;
  float v11; // xmm5_4
  float v12; // xmm3_4
  __m128 v13;
  float v14; // xmm6_4
  double *v15;
  __m128 v16;
  __m128 v17;
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  __m128 v21;
  uint32_t *v22;
  uint32_t *v23;
  __m128 v24;
  __m128 v25;
  double *v26;
  uint32_t *v27;
  int v28;
  uint32_t *v29;
  int v30;
  uint32_t *v31;
  uint32_t *v33;
  uint32_t *v34;
  int *v35;
  int v36;
  uint32_t *v37;
  double *v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  int v45;
  double *v46;
  int v47[2];
  int v48[8];

  v48[4] = (int)(uintptr_t)(&a3);
  v45 = a2;
  v43 = a3;
  v4 = (uint32_t **)a3[57];
  if ( (uint32_t **)a3[61] != v4 )
  {
    v5 = *v4;
    if ( v4 == (uint32_t **)(a3[59] - 4) )
    {
      v37 = *v4;
      gll_operator_delete_arr(a3[58]);
      v35 = (int *)(v43[60] + 4);
      v43[60] = (uint32_t)(uintptr_t)(v35);
      v36 = *v35;
      v43[58] = *v35;
      v43[57] = v36;
      v43[59] = v36 + 512;
      v5 = v37;
    }
    else
    {
      a3[57] = (uint32_t)(uintptr_t)(v4 + 1);
    }
    goto LABEL_4;
  }
  v5 = (uint32_t *)a3[47];
  if ( v5 != nullptr )
  {
    a3[47] = *v5;
  }
  else
  {
    v5 = sub_609270((int)(uintptr_t)(a3 + 47));
    if ( v5 == nullptr )
      goto LABEL_4;
  }
  memset(v5, 0, 0x2Cu);
LABEL_4:
  v5[8] = v5[7];
  v5[6] = 0;
  v5[10] = 0;
  v46 = (double *)v5;
  g4_std::deque_quickhull2d_detail_SEdge_479217::push_back(
    v43,
    &v46);
  v6 = v43[14];
  v7 = v45;
  v40 = a1;
  v39 = v45;
  v8 = (float *)(v6 + 12 * a1);
  v9 = (float *)(v6 + 12 * v45);
g4_m128_raw(v10) = *(unsigned int *)v9;
g4_m128_raw(v17) = *((unsigned int *)v9 + 1);
g4_m128_lane<float>(v10, 0) =g4_m128_lane<float>(v10, 0) - *v8;
g4_m128_lane<float>(v17, 0) =g4_m128_lane<float>(v17, 0) - v8[1];
  v11 = *((float *)v43 + 20);
g4_m128_raw(v16) = (unsigned int)v43[19];
  v13 = v10;
  v12 = v9[2] - v8[2];
g4_m128_lane<float>(v13, 0) = (float)(g4_m128_lane<float>(v10, 0) * v11) - (float)(g4_m128_lane<float>(v17, 0) *g4_m128_lane<float>(v16, 0));
  v14 = *((float *)v43 + 21);
  v15 = v46;
g4_m128_lane<float>(v16, 0) = (float)(g4_m128_lane<float>(v16, 0) * v12) - (float)(g4_m128_lane<float>(v10, 0) * v14);
  *((uint32_t *)v46 + 5) =g4_m128_lane<int32_t>(v13, 0);
g4_m128_lane<float>(v17, 0) = (float)(g4_m128_lane<float>(v17, 0) * v14) - (float)(v12 * v11);
  *((uint32_t *)v15 + 3) =g4_m128_lane<int32_t>(v17, 0);
  *((uint32_t *)v15 + 4) =g4_m128_lane<int32_t>(v16, 0);
  v18 = (float)((float)(g4_m128_lane<float>(v16, 0) *g4_m128_lane<float>(v16, 0)) + (float)(g4_m128_lane<float>(v17, 0) *g4_m128_lane<float>(v17, 0)))
      + (float)(g4_m128_lane<float>(v13, 0) *g4_m128_lane<float>(v13, 0));
  if ( v18 != 0.0 )
  {
    v19 = 1.0 / fsqrt(v18);
    v20 = (float)((float)((float)(v18 * v19) * v19) + -3.0) * (float)(v19 * -0.5);
g4_m128_lane<float>(v17, 0) =g4_m128_lane<float>(v17, 0) * v20;
g4_m128_lane<float>(v16, 0) =g4_m128_lane<float>(v16, 0) * v20;
g4_m128_lane<float>(v13, 0) =g4_m128_lane<float>(v13, 0) * v20;
    *((uint32_t *)v15 + 3) =g4_m128_lane<int32_t>(v17, 0);
    *((uint32_t *)v15 + 4) =g4_m128_lane<int32_t>(v16, 0);
    *((uint32_t *)v15 + 5) =g4_m128_lane<int32_t>(v13, 0);
  }
g4_m128_raw(v21) = *((unsigned int *)v8 + 1);
  v42 = v43 + 23;
g4_m128_lane<float>(v21, 0) = (float)((float)(g4_m128_lane<float>(v21, 0) *g4_m128_lane<float>(v16, 0)) + (float)(*v8 *g4_m128_lane<float>(v17, 0)))
                  + (float)(v8[2] *g4_m128_lane<float>(v13, 0));
  *((uint32_t *)v15 + 2) =g4_m128_lane<int32_t>(v21, 0);
  v22 = (uint32_t *)v43[24];
  if ( v22 == nullptr )
    goto LABEL_31;
  v23 = v43 + 23;
  do
  {
    while ( v22[4] >= a1 )
    {
      v23 = v22;
      v22 = (uint32_t *)v22[2];
      if ( v22 == nullptr )
        goto LABEL_11;
    }
    v22 = (uint32_t *)v22[3];
  }
  while ( v22 != nullptr );
LABEL_11:
  if ( v42 == v23 || v23[4] > a1 )
  {
LABEL_31:
    v41 = (int)(uintptr_t)(v43 + 29);
    v33 = (uint32_t *)v43[30];
    v34 = v43 + 29;
    if ( v33 != nullptr )
    {
      do
      {
        if ( v33[4] >= a1 )
        {
          v34 = v33;
          v33 = (uint32_t *)v33[2];
        }
        else
        {
          v33 = (uint32_t *)v33[3];
        }
      }
      while ( v33 != nullptr );
      if ( (uint32_t *)v41 != v34 && v34[4] <= a1 )
        goto LABEL_44;
    }
    v38 = v15;
    g4_std::map_int_quickhull2d_detail_S_14526e::find(
      (std::map<int,glitch::core::quickhull2d_detail::SEdge *> *)&v44,
      v43 + 22);
    v15 = v38;
    if ( v42 != v44
      || (g4_std::map_int_quickhull2d_detail_S_14526e::find(
            (std::map<int,glitch::core::quickhull2d_detail::SEdge *> *)&v44,
            v43 + 28),
          v15 = v38,
g4_m128_raw(v16) =g4_m128_lane<uint32_t>(v16, 0),
g4_m128_raw(v17) =g4_m128_lane<uint32_t>(v17, 0),
g4_m128_raw(v13) =g4_m128_lane<uint32_t>(v13, 0),
g4_m128_raw(v21) =g4_m128_lane<uint32_t>(v21, 0),
          (uint32_t *)v41 == v44)
      && (float)((float)((float)(g4_m128_lane<float>(v16, 0) * *((float *)v43 + 17))
                       + (float)(*((float *)v43 + 16) *g4_m128_lane<float>(v17, 0)))
               + (float)(*((float *)v43 + 18) *g4_m128_lane<float>(v13, 0))) <=g4_m128_lane<float>(v21, 0) )
    {
LABEL_44:
      v40 = v7;
      v39 = a1;
      v7 = a1;
      a1 = v40;
      goto LABEL_15;
    }
  }
  else
  {
    v41 = (int)(uintptr_t)(v43 + 29);
  }
  v45 = a1;
g4_m128_lane<uint64_t>(v24, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v21, v17), 0);
g4_m128_lane<uint64_t>(v24, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v16, v13), 0);
  v25 = _mm_xor_ps(v24, G4_BITCAST<__m128>(xmmword_1C7C2A0));
  _mm_storel_ps(v15 + 1, v25);
  _mm_storeh_ps(v15 + 2, v25);
LABEL_15:
  *(uint32_t *)v15 = v7;
  v26 = v46;
  *((uint32_t *)v46 + 1) = a1;
  v27 = (uint32_t *)v43[24];
  v28 = (int)(uintptr_t)(v43 + 23);
  if ( v27 == nullptr )
    goto LABEL_37;
  do
  {
    while ( v7 <= v27[4] )
    {
      v28 = (int)(uintptr_t)(v27);
      v27 = (uint32_t *)v27[2];
      if ( v27 == nullptr )
        goto LABEL_20;
    }
    v27 = (uint32_t *)v27[3];
  }
  while ( v27 != nullptr );
LABEL_20:
  if ( v42 == (uint32_t *)v28 || v7 < *(uint32_t *)(v28 + 16) )
  {
LABEL_37:
    v47[0] = v7;
    v47[1] = 0;
    sub_F28D80((int *)&v44, v43 + 22, v28, v47);
    v28 = (int)(uintptr_t)(v44);
    v26 = v46;
  }
  *(uint32_t *)(v28 + 20) = (uint32_t)(uintptr_t)(v26);
  v29 = (uint32_t *)v43[30];
  v30 = v41;
  if ( v29 == nullptr )
    goto LABEL_29;
  do
  {
    while ( a1 <= v29[4] )
    {
      v30 = (int)(uintptr_t)(v29);
      v29 = (uint32_t *)v29[2];
      if ( v29 == nullptr )
        goto LABEL_27;
    }
    v29 = (uint32_t *)v29[3];
  }
  while ( v29 != nullptr );
LABEL_27:
  if ( v30 == v41 || a1 < *(uint32_t *)(v30 + 16) )
  {
LABEL_29:
    v48[0] = a1;
    v48[1] = 0;
    sub_F28D80((int *)&v44, v43 + 28, v30, v48);
    v30 = (int)(uintptr_t)(v44);
    v26 = v46;
  }
  *(uint32_t *)(v30 + 20) = (uint32_t)(uintptr_t)(v26);
  *(uint32_t *)(v43[42] + 4 * (v39 >> 5)) |= 1 << v39;
  v31 = (uint32_t *)(v43[42] + 4 * (v40 >> 5));
  *v31 |= 1 << v40;
  return v46;
}

// ----------------------------------------------------------------------------
// Function: sub_F6E2B0  (binary VA: 0xf6e2b0)
// Original: sub_F6E2B0
// ----------------------------------------------------------------------------
int sub_F6E2B0(unsigned int a1, unsigned int a2, int a3, int *a4)
{
  int *v4;
  double **v5;
  double *v6;
  int v7;
  double **v8;
  int v9;
  int v10;
  int v11;
  float *v12;
  float *v13;
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  __m128 v18;
  float v19; // xmm0_4
  __m128 v20;
  __m128 v21;
  __m128 v22;
  float v23; // xmm5_4
  float v24; // xmm7_4
  float v25; // xmm5_4
  __m128 v26;
  __m128 v27;
  int v28;
  uint32_t *v29;
  uint32_t *v30;
  int16_t v31;
  uint32_t *v32;
  int16_t v33; // di
  int16_t v34;
  int16_t v35;
  int16_t v36;
  int16_t v37; // di
  int v38;
  uint16_t *v39;
  int v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  int result;
  uint32_t **v45;
  int v46;
  uint32_t *v47;
  uint32_t *v48;
  int *v49;
  int v50;
  typedef int _g4_t_v51;
  typedef float _g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef double *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef float _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef float _g4_t_v65;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef int *_g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef uint32_t _g4_t_v74[3];
  typedef uint16_t _g4_t_v75[12];
  typedef int *_g4_t_v76;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v51)) > _g4_s0 ? (0u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v52)) > _g4_s1 ? (16u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v53)) > _g4_s2 ? (20u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v54)) > _g4_s3 ? (20u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v55)) > _g4_s4 ? (20u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v56)) > _g4_s5 ? (24u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v57)) > _g4_s6 ? (28u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v58)) > _g4_s7 ? (32u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v59)) > _g4_s8 ? (36u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v60)) > _g4_s9 ? (40u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v61)) > _g4_s10 ? (40u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v62)) > _g4_s11 ? (44u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v63)) > _g4_s12 ? (48u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v64)) > _g4_s13 ? (52u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v65)) > _g4_s14 ? (56u + sizeof(_g4_t_v65)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v67)) > _g4_s15 ? (60u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v68)) > _g4_s16 ? (60u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v69)) > _g4_s17 ? (64u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v70)) > _g4_s18 ? (64u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v72)) > _g4_s19 ? (68u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v73)) > _g4_s20 ? (72u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v74)) > _g4_s21 ? (80u + sizeof(_g4_t_v74)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v75)) > _g4_s22 ? (92u + sizeof(_g4_t_v75)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v76)) > _g4_s23 ? (116u + sizeof(_g4_t_v76)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 52u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 64u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 64u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 68u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 72u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 80u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 92u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 116u);

  v76 = &a3;
  v69 = a3;
  v4 = a4;
  v5 = (double **)a4[80];
  if ( (double **)a4[84] != v5 )
  {
    v6 = *v5;
    if ( v5 == (double **)(a4[82] - 4) )
    {
      v54 = *v5;
      gll_operator_delete_arr(a4[81]);
      v49 = (int *)(v4[83] + 4);
      v4[83] = (int)(uintptr_t)(v49);
      v50 = *v49;
      v4[81] = *v49;
      v4[80] = v50;
      v4[82] = v50 + 512;
      v6 = v54;
      v7 = *((uint32_t *)v54 + 14);
    }
    else
    {
      a4[80] = (int)(uintptr_t)(v5 + 1);
      v7 = *((uint32_t *)v6 + 14);
    }
    goto LABEL_4;
  }
  v6 = (double *)a4[60];
  if ( v6 != nullptr )
  {
    a4[60] = *(uint32_t *)v6;
  }
  else
  {
    v6 = (double *)sub_609270((int)(uintptr_t)(a4 + 60));
    if ( v6 == nullptr )
    {
      v7 = 52;
      goto LABEL_4;
    }
  }
  v7 = 0;
  memset(v6, 0, 0x48u);
LABEL_4:
  *((uint32_t *)v6 + 13) = 0;
  *((uint32_t *)v6 + 15) = v7;
  *((uint32_t *)v6 + 17) = 0;
  v8 = (double **)v4[6];
  v9 = v4[8] - 4;
  v74[0] = (uint32_t)(uintptr_t)(v6);
  if ( v8 == (double **)v9 )
  {
    sub_F221C0(v4, v74);
    v6 = (double *)v74[0];
  }
  else
  {
    v10 = 0;
    if ( v8 != nullptr )
    {
      *v8 = v6;
      v10 = v4[6];
      v6 = (double *)v74[0];
    }
    v4[6] = v10 + 4;
  }
  v11 = v4[26];
  v60 = v11 + 12 * a1;
  v64 = a2;
  v12 = (float *)(v11 + 12 * a2);
  v63 = v69;
  v52 = v12[2];
  v13 = (float *)(v11 + 12 * v69);
  v14 = *(float *)v60;
g4_m128_raw(v18) = *(unsigned int *)(v60 + 4);
  v65 = *v12 - *(float *)v60;
  v62 = v12[1] -g4_m128_lane<float>(v18, 0);
  v15 = *(float *)(v60 + 8);
  v59 = v13[2];
  v61 = v52 - v15;
  v16 = v13[1];
  *(float *)&v58 = *v13 - v14;
  *(float *)&v57 = v16 -g4_m128_lane<float>(v18, 0);
  v17 = (float)((float)(v14 + *v12) + *v13) * 0.33333334f;
g4_m128_lane<float>(v18, 0) = (float)((float)(g4_m128_lane<float>(v18, 0) + v12[1]) + v16) * 0.33333334f;
  *(float *)&v56 = v59 - v15;
  *((float *)v6 + 3) = v17;
  *((uint32_t *)v6 + 4) =g4_m128_lane<int32_t>(v18, 0);
  v19 = (float)((float)(v15 + v52) + v59) * 0.33333334f;
  *((float *)v6 + 5) = v19;
g4_m128_raw(v20) = v57;
g4_m128_raw(v21) = v58;
g4_m128_lane<float>(v20, 0) = (float)(*(float *)&v57 * v65) - (float)(*(float *)&v58 * v62);
g4_m128_lane<float>(v21, 0) = (float)(*(float *)&v58 * v61) - (float)(*(float *)&v56 * v65);
g4_m128_raw(v22) = v56;
  *((uint32_t *)v6 + 9) =g4_m128_lane<int32_t>(v20, 0);
g4_m128_lane<float>(v22, 0) = (float)(*(float *)&v56 * v62) - (float)(*(float *)&v57 * v61);
  *((uint32_t *)v6 + 8) =g4_m128_lane<int32_t>(v21, 0);
  *((uint32_t *)v6 + 7) =g4_m128_lane<int32_t>(v22, 0);
  v23 = (float)((float)(g4_m128_lane<float>(v21, 0) *g4_m128_lane<float>(v21, 0)) + (float)(g4_m128_lane<float>(v22, 0) *g4_m128_lane<float>(v22, 0)))
      + (float)(g4_m128_lane<float>(v20, 0) *g4_m128_lane<float>(v20, 0));
  if ( v23 != 0.0 )
  {
    v24 = 1.0 / fsqrt(v23);
    v25 = (float)((float)((float)(v23 * v24) * v24) + -3.0) * (float)(v24 * -0.5);
g4_m128_lane<float>(v22, 0) =g4_m128_lane<float>(v22, 0) * v25;
g4_m128_lane<float>(v21, 0) =g4_m128_lane<float>(v21, 0) * v25;
g4_m128_lane<float>(v20, 0) =g4_m128_lane<float>(v20, 0) * v25;
    *((uint32_t *)v6 + 7) =g4_m128_lane<int32_t>(v22, 0);
    *((uint32_t *)v6 + 8) =g4_m128_lane<int32_t>(v21, 0);
    *((uint32_t *)v6 + 9) =g4_m128_lane<int32_t>(v20, 0);
  }
g4_m128_lane<float>(v18, 0) = (float)((float)(g4_m128_lane<float>(v18, 0) *g4_m128_lane<float>(v21, 0)) + (float)(v17 *g4_m128_lane<float>(v22, 0)))
                  + (float)(v19 *g4_m128_lane<float>(v20, 0));
  *((uint32_t *)v6 + 6) =g4_m128_lane<int32_t>(v18, 0);
  if ( (float)((float)((float)(*((float *)v4 + 32) *g4_m128_lane<float>(v21, 0)) + (float)(*((float *)v4 + 31) *g4_m128_lane<float>(v22, 0)))
             + (float)(*((float *)v4 + 33) *g4_m128_lane<float>(v20, 0))) >g4_m128_lane<float>(v18, 0) )
  {
g4_m128_lane<uint64_t>(v26, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v18, v22), 0);
g4_m128_lane<uint64_t>(v26, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v21, v20), 0);
    v27 = _mm_xor_ps(v26, G4_BITCAST<__m128>(xmmword_1C7C2A0));
    v64 = v69;
    _mm_storel_ps(v6 + 3, v27);
    v63 = a2;
    _mm_storeh_ps(v6 + 4, v27);
    a2 = v69;
    v69 = v63;
  }
  *(uint32_t *)v6 = a1;
  v28 = v74[0];
  *(uint32_t *)(v74[0] + 8) = v69;
  *(uint32_t *)(v28 + 4) = a2;
  v29 = (uint32_t *)(v4[35] + 4 * (a1 >> 5));
  *v29 |= 1 << a1;
  v30 = (uint32_t *)(v4[35] + 4 * (v64 >> 5));
  *v30 |= 1 << v64;
  v31 = a1;
  v32 = (uint32_t *)(v4[35] + 4 * (v63 >> 5));
  v33 = a2;
  *v32 |= 1 << v63;
  v34 = a2;
  v35 = a1;
  if ( (uint16_t)a1 <= (uint16_t)a2 )
  {
    v31 = a2;
    v33 = a1;
  }
  v75[1] = v31;
  v36 = v69;
  v75[0] = v33;
  v37 = v69;
  if ( (uint16_t)a2 > (uint16_t)v69 )
  {
    v37 = a2;
    v34 = v69;
  }
  v75[2] = v34;
  v75[3] = v37;
  if ( (uint16_t)a1 < (uint16_t)v69 )
  {
    v36 = a1;
    v35 = v69;
  }
  v75[4] = v36;
  v75[5] = v35;
  v38 = 0;
  v70 = (uint32_t *)(v4 + 15);
  v72 = v4;
  do
  {
    v39 = &v75[2 * v38];
    v40 = *(uint32_t *)v39;
    v41 = (uint32_t *)v72[16];
    if ( v41 == nullptr )
      goto LABEL_30;
    v42 = v70;
    do
    {
      while ( v40 <= v41[4] )
      {
        v42 = v41;
        v41 = (uint32_t *)v41[2];
        if ( v41 == nullptr )
          goto LABEL_24;
      }
      v41 = (uint32_t *)v41[3];
    }
    while ( v41 != nullptr );
LABEL_24:
    if ( v70 == v42 || v40 < v42[4] )
    {
LABEL_30:
      v45 = (uint32_t **)v72[70];
      if ( (uint32_t **)v72[74] == v45 )
      {
        v43 = (uint32_t *)v72[52];
        if ( v43 != nullptr )
          v72[52] = *v43;
        else
          v43 = sub_609270((int)(uintptr_t)(v72 + 52));
      }
      else
      {
        v43 = *v45;
        if ( v45 == (uint32_t **)(v72[72] - 4) )
        {
          v55 = *v45;
          gll_operator_delete_arr(v72[71]);
          v68 = v72[73];
          v72[73] = v68 + 4;
          v51 = *(uint32_t *)(v68 + 4);
          v72[71] = v51;
          v72[72] = v51 + 512;
          v72[70] = v51;
          v43 = v55;
        }
        else
        {
          v72[70] = (int)(uintptr_t)(v45 + 1);
        }
      }
      v43[4] = 0;
      *v43 = *v39;
      v46 = v39[1];
      v43[3] = 0;
      v43[1] = v46;
      result = v74[0];
      v43[2] = v74[0];
      v67 = *(uint32_t *)v39;
      v47 = (uint32_t *)v72[16];
      v48 = v70;
      if ( v47 == nullptr )
        goto LABEL_40;
      do
      {
        while ( v67 <= v47[4] )
        {
          v48 = v47;
          v47 = (uint32_t *)v47[2];
          if ( v47 == nullptr )
            goto LABEL_38;
        }
        v47 = (uint32_t *)v47[3];
      }
      while ( v47 != nullptr );
LABEL_38:
      if ( v70 == v48 || v67 < v48[4] )
      {
LABEL_40:
        v74[1] = v67;
        v53 = v43;
        v74[2] = 0;
        g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_insert_unique(&v73);
        v48 = v73;
        result = v74[0];
        v43 = v53;
      }
      v48[5] = (uint32_t)(uintptr_t)(v43);
    }
    else
    {
      v43 = (uint32_t *)v42[5];
      result = v74[0];
      if ( v43[2] != 0 )
        v43[3] = v74[0];
      else
        v43[2] = v74[0];
    }
    *(uint32_t *)(result + 4 * v38++ + 40) = (uint32_t)(uintptr_t)(v43);
  }
  while ( v38 != 3 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_quick_a43f1c::M_erase  (binary VA: 0xf7c5f0)
// Original: std::_Rb_tree<int,std::pair<int const,glitch::core::quickhull2d_detail::SEdge *>,std::_Select1st<std::pair<int const,glitch::core::quickhull2d_detail::SEdge *>>,std::less<int>,std::allocator<std::pair<int const,glitch::core::quickhull2d_detail::SEdge *>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_int_pair_int_const_quick_a43f1c::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)a2[3];
      v21 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v22 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v23 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v24 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v25 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = v8[3];
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_int_pair_int_const_quick_a43f1c::M_erase(
                                        a1,
                                        (uint32_t *)(*(void **)(v9 + 12)));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      opDelete((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  opDelete(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              opDelete(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          opDelete(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      opDelete(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  opDelete(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              opDelete(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          opDelete(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      opDelete(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_erase  (binary VA: 0xf7cad0)
// Original: std::_Rb_tree<int,std::pair<int const,glitch::core::quickhull3d_detail::SEdge *>,std::_Select1st<std::pair<int const,glitch::core::quickhull3d_detail::SEdge *>>,std::less<int>,std::allocator<std::pair<int const,glitch::core::quickhull3d_detail::SEdge *>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)a2[3];
      v21 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v22 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v23 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v24 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v25 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = v8[3];
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_erase(
                                        a1,
                                        (uint32_t *)(*(void **)(v9 + 12)));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      opDelete((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  opDelete(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              opDelete(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          opDelete(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      opDelete(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  opDelete(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              opDelete(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          opDelete(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      opDelete(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}



// ============================================================================
// Address:   0xf803d0 (size: 573 bytes)
// Symbol:    _ZSt27__unguarded_partition_pivotIN9__gnu_cxx17__normal_iteratorIPN6glitch9streaming23SPriorityFrameSwappableESt6vectorIS4_NS2_4core10SAllocatorIS4_LNS2_6memory13E_MEMORY_HINTE0EEEEEEET_SE_SE_
// Demangled: __gnu_cxx::__normal_iterator<glitch::streaming::SPriorityFrameSwappable *,std::vector<glitch::streaming::SPriorityFrameSwappable,glitch::core::SAllocator<glitch::streaming::SPriorityFrameSwappable,(glitch::memory::E_MEMORY_HINT)0>>> std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<glitch::streaming::SPriorityFrameSwappable *,std::vector<glitch::streaming::SPriorityFrameSwappable,glitch::core::SAllocator<glitch::streaming::SPriorityFrameSwappable,(glitch::memory::E_MEMORY_HINT)0>>>>(__gnu_cxx::__normal_iterator<glitch::streaming::SPriorityFrameSwappable *,std::vector<glitch::streaming::SPriorityFrameSwappable,glitch::core::SAllocator<glitch::streaming::SPriorityFrameSwappable,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SPriorityFrameSwappable *,std::vector<glitch::streaming::SPriorityFrameSwappable,glitch::core::SAllocator<glitch::streaming::SPriorityFrameSwappable,(glitch::memory::E_MEMORY_HINT)0>>>)
// ============================================================================
static uint32_t *g4_compat_def_17(
        uint32_t *a1,
        int *a2,
        char *a3)
{
  int *v3;
  int v4;
  int v5;
  bool v6; // di
  bool v7;
  int v8;
  bool v9;
  int *v10;
  bool v11;
  char *v12;
  uint32_t *v13;
  int v14;
  int v15;
  uint32_t *v16;
  bool v17;
  bool v18;
  char *v19;
  bool v20;
  bool v21;
  int v22;
  int v23;
  bool v24; // bp
  int v25;
  int v26;
  int v28;
  int v29;
  uint32_t *v30;

  v3 = &a2[2 * ((int)(((unsigned int)(a3 - (char *)a2) >> 31) + ((a3 - (char *)a2) >> 3)) >> 1)];
  v4 = *a2;
  v5 = *v3;
  v6 = *a2 > *v3;
  if ( *a2 == *v3 )
    v6 = a2[1] < (unsigned int)v3[1];
  v7 = !v6;
  v8 = *((uint32_t *)a3 - 2);
  if ( !v7 )
  {
    v9 = v5 > v8;
    if ( v5 == v8 )
    {
      v10 = a2;
      if ( (unsigned int)v3[1] >= *((uint32_t *)a3 - 1) )
      {
LABEL_6:
        v11 = v4 > v8;
        if ( v4 == v8 )
          v11 = (unsigned int)a2[1] < *((uint32_t *)a3 - 1);
        v10 = a2;
        if ( !v11 )
          goto LABEL_9;
LABEL_25:
        v25 = v10[1];
        v26 = *((uint32_t *)a3 - 1);
        *a2 = *((uint32_t *)a3 - 2);
        a2[1] = v26;
        *((uint32_t *)a3 - 2) = v4;
        *((uint32_t *)a3 - 1) = v25;
        v4 = *a2;
        v13 = (uint32_t *)(a2 + 2);
        v12 = a3;
        goto LABEL_10;
      }
    }
    else
    {
      v10 = a2;
      if ( !v9 )
        goto LABEL_6;
    }
LABEL_27:
    v28 = v10[1];
    v29 = v3[1];
    *a2 = *v3;
    a2[1] = v29;
    v3[1] = v28;
    *v3 = v4;
    v13 = (uint32_t *)(a2 + 2);
    v4 = *a2;
    v12 = a3;
    goto LABEL_10;
  }
  if ( v4 == v8 )
  {
    if ( (unsigned int)a2[1] >= *((uint32_t *)a3 - 1) )
    {
LABEL_22:
      v24 = v5 > v8;
      if ( v5 == v8 )
        v24 = (unsigned int)v3[1] < *((uint32_t *)a3 - 1);
      v10 = a2;
      if ( v24 )
        goto LABEL_25;
      goto LABEL_27;
    }
  }
  else if ( v4 <= v8 )
  {
    goto LABEL_22;
  }
LABEL_9:
  v12 = a3;
  v13 = (uint32_t *)(a2 + 2);
LABEL_10:
  while ( 1 )
  {
    v14 = v4;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        v16 = v13;
        v17 = *v13 > v14;
        if ( *v13 == v14 )
          break;
        v13 += 2;
        if ( !v17 )
          goto LABEL_14;
      }
      v18 = v13[1] < (unsigned int)a2[1];
      v13 += 2;
    }
    while ( v18 );
LABEL_14:
    v30 = v16;
    v19 = v12 - 8;
    do
    {
      while ( 1 )
      {
        v12 = v19;
        v20 = *(uint32_t *)v19 < v14;
        if ( *(uint32_t *)v19 == v14 )
          break;
        v19 -= 8;
        if ( !v20 )
          goto LABEL_18;
      }
      v21 = (unsigned int)a2[1] < *((uint32_t *)v19 + 1);
      v19 -= 8;
    }
    while ( v21 );
LABEL_18:
    if ( v12 <= (char *)v16 )
      break;
    v22 = *((uint32_t *)v12 + 1);
    v23 = v30[1];
    *v30 = *(uint32_t *)v12;
    v30[1] = v22;
    *(uint32_t *)v12 = v15;
    *((uint32_t *)v12 + 1) = v23;
    v13 = v30 + 2;
    v4 = *a2;
  }
  *a1 = (uint32_t)(uintptr_t)(v16);
  return a1;
}


// ============================================================================
// Address:   0xf80610 (size: 278 bytes)
// Symbol:    _ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPN6glitch9streaming23SPriorityFrameSwappableESt6vectorIS4_NS2_4core10SAllocatorIS4_LNS2_6memory13E_MEMORY_HINTE0EEEEEEEvT_SE_
// Demangled: void std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::streaming::SPriorityFrameSwappable *,std::vector<glitch::streaming::SPriorityFrameSwappable,glitch::core::SAllocator<glitch::streaming::SPriorityFrameSwappable,(glitch::memory::E_MEMORY_HINT)0>>>>(__gnu_cxx::__normal_iterator<glitch::streaming::SPriorityFrameSwappable *,std::vector<glitch::streaming::SPriorityFrameSwappable,glitch::core::SAllocator<glitch::streaming::SPriorityFrameSwappable,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<glitch::streaming::SPriorityFrameSwappable *,std::vector<glitch::streaming::SPriorityFrameSwappable,glitch::core::SAllocator<glitch::streaming::SPriorityFrameSwappable,(glitch::memory::E_MEMORY_HINT)0>>>)
// ============================================================================
void g4_std_compat::insertion_sort_fe00f1(
        uint32_t *i,
        uint32_t *src,
        uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  unsigned int v12;

  if ( a3 == src )
    return;
  v3 = src + 2;
  if ( src + 2 == a3 )
    return;
LABEL_7:
  while ( 2 )
  {
    v6 = *v3;
    v7 = v3;
    if ( *v3 == *src )
    {
      v10 = src;
      v12 = v3[1];
      LOBYTE(v10) = v12 < src[1];
      v8 = v10;
    }
    else
    {
      LOBYTE(i) = *v3 > *src;
      v8 = i;
      v12 = v3[1];
    }
    i = v8;
    if ( (uint8_t)(uintptr_t)(v8) == 0 )
    {
      v11 = v3;
      for ( i = v3 - 2; ; i -= 2 )
      {
        if ( v6 == *i )
        {
          if ( i[1] <= v12 )
          {
LABEL_15:
            v7[1] = v12;
            *v7 = v6;
            v3 += 2;
            if ( v11 + 2 == a3 )
              return;
            goto LABEL_7;
          }
        }
        else if ( v6 <= *i )
        {
          goto LABEL_15;
        }
        v9 = *i;
        v7[1] = i[1];
        *v7 = v9;
        v7 = i;
      }
    }
    v4 = v3 + 2;
    v5 = ((char *)v3 - (char *)src) >> 3;
    if ( v5 != 0 )
      i = (uint32_t *)(memmove(&v4[-2 * v5], src, 8 * v5));
    *src = v6;
    src[1] = v12;
    v3 = v4;
    if ( v4 != a3 )
      continue;
    break;
  }
}
// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_insert  (binary VA: 0xf80790)
// Original: std::_Rb_tree<int,std::pair<int const,glitch::core::quickhull3d_detail::SEdge *>,std::_Select1st<std::pair<int const,glitch::core::quickhull3d_detail::SEdge *>>,std::less<int>,std::allocator<std::pair<int const,glitch::core::quickhull3d_detail::SEdge *>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_insert(int *a1, int a2, int a3, int a4, int *a5)
{
  int v5;
  int v6;
  char v8;
  int v9;

  v8 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v8 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = opNew(0x18u);
  if ( v5 != -16 )
  {
    v6 = *a5;
    *(uint32_t *)(v5 + 20) = a5[1];
    *(uint32_t *)(v5 + 16) = v6;
  }
  v9 = v5;
  sub_1904970(v8, v5, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v9;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_insert_unique  (binary VA: 0xf80850)
// Original: std::_Rb_tree<int,std::pair<int const,glitch::core::quickhull3d_detail::SEdge *>,std::_Select1st<std::pair<int const,glitch::core::quickhull3d_detail::SEdge *>>,std::less<int>,std::allocator<std::pair<int const,glitch::core::quickhull3d_detail::SEdge *>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_insert_unique(int a1, uint32_t *a2, int *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  char v6; // bp
  uint32_t *v7;
  int v9;
  int v10;
  int v11;
  typedef uint32_t *_g4_t_v12;
  typedef char _g4_t_v13;
  typedef int _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);

  v3 = (uint32_t *)a2[2];
  v12 = a2 + 1;
  if ( v3 == nullptr )
  {
    v3 = a2 + 1;
    goto LABEL_12;
  }
  v4 = *a3;
  while ( v3[4] > v4 )
  {
    v5 = (uint32_t *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (uint32_t *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v7 = v3;
  if ( v6 == 0 )
  {
    if ( v3[4] >= v4 )
      goto LABEL_9;
LABEL_14:
    v13 = 1;
    if ( v3 != v12 )
      v13 = v3[4] > v4;
    v9 = opNew(0x18u);
    if ( v9 != -16 )
    {
      v10 = *a3;
      *(uint32_t *)(v9 + 20) = a3[1];
      *(uint32_t *)(v9 + 16) = v10;
    }
    sub_1904970(v13, v9, v3, v12);
    *(uint32_t *)a1 = v9;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( v3 == (uint32_t *)a2[3] )
  {
    g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_insert(
      v14,
      (int)(uintptr_t)(a2),
      0,
      (int)(uintptr_t)(v3),
      a3);
    v11 = v14[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v11;
  }
  else
  {
    v7 = (uint32_t *)sub_19048F0(v3);
    v4 = *a3;
    if ( v7[4] < *a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v7);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_insert_unique  (binary VA: 0xf809b0)
// Original: std::_Rb_tree<int,std::pair<int const,glitch::core::quickhull3d_detail::SEdge *>,std::_Select1st<std::pair<int const,glitch::core::quickhull3d_detail::SEdge *>>,std::less<int>,std::allocator<std::pair<int const,glitch::core::quickhull3d_detail::SEdge *>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_insert_unique(int *a1, uint32_t *a2, int a3, int *a4)
{
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef int _g4_t_v26[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v23)) > _g4_s5 ? (16u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v24)) > _g4_s6 ? (16u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v25)) > _g4_s7 ? (20u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v26)) > _g4_s8 ? (24u + sizeof(_g4_t_v26)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);

  v25 = a2 + 1;
  if ( a2 + 1 == (uint32_t *)a3 )
  {
    if ( a2[5] == 0 )
      goto LABEL_19;
    v13 = (uint32_t *)a2[4];
    v18 = v13;
    if ( v13[4] >= *a4 )
      goto LABEL_19;
    v23 = v25 == v13;
    v14 = opNew(0x18u);
    if ( v14 != -16 )
    {
      v15 = *a4;
      *(uint32_t *)(v14 + 20) = a4[1];
      *(uint32_t *)(v14 + 16) = v15;
    }
    sub_1904970(v23, v14, v18, v25);
    ++a2[5];
    *a1 = v14;
    return a1;
  }
  else
  {
    if ( *a4 < *(uint32_t *)(a3 + 16) )
    {
      v4 = a2[3];
      if ( v4 != a3 )
      {
        v19 = *a4;
        v5 = (uint32_t *)sub_1904940(a3);
        if ( v19 > v5[4] )
        {
          if ( v5[3] != 0 )
          {
            v6 = opNew(0x18u);
            if ( v6 != -16 )
            {
              v7 = *a4;
              *(uint32_t *)(v6 + 20) = a4[1];
              *(uint32_t *)(v6 + 16) = v7;
            }
            v20 = v6;
            sub_1904970(1, v6, a3, v25);
            ++a2[5];
            *a1 = v20;
            return a1;
          }
          else
          {
            v24 = v5;
            v16 = opNew(0x18u);
            if ( v16 != -16 )
            {
              v17 = *a4;
              *(uint32_t *)(v16 + 20) = a4[1];
              *(uint32_t *)(v16 + 16) = v17;
            }
            sub_1904970(v25 == v24, v16, v24, v25);
            ++a2[5];
            *a1 = v16;
            return a1;
          }
        }
LABEL_19:
        g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_insert_unique(
          (int)(uintptr_t)(v26),
          a2,
          a4);
        *a1 = v26[0];
        return a1;
      }
      g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        v4,
        v4,
        a4);
      return a1;
    }
    if ( *a4 <= *(uint32_t *)(a3 + 16) )
    {
      *a1 = a3;
      return a1;
    }
    v9 = a2[4];
    if ( v9 == a3 )
    {
      g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        v9,
        a4);
      return a1;
    }
    v21 = *a4;
    v10 = sub_19048E0(a3);
    if ( v21 >= *(uint32_t *)(v10 + 16) )
      goto LABEL_19;
    if ( *(uint32_t *)(a3 + 12) == 0 )
    {
      g4_std::Rb_tree_int_pair_int_const_quick_7c9ec9::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        a3,
        a4);
      return a1;
    }
    v22 = v10;
    v11 = opNew(0x18u);
    if ( v11 != -16 )
    {
      v12 = *a4;
      *(uint32_t *)(v11 + 20) = a4[1];
      *(uint32_t *)(v11 + 16) = v12;
    }
    sub_1904970(1, v11, v22, v25);
    ++a2[5];
    *a1 = v11;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2  (binary VA: 0xf81860)
// Original: std::__adjust_heap<__gnu_cxx::__normal_iterator<glitch::streaming::SPriorityFrameSwappable *,std::vector<glitch::streaming::SPriorityFrameSwappable,glitch::core::SAllocator<glitch::streaming::SPriorityFrameSwappable,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::streaming::SPriorityFrameSwappable>
// ----------------------------------------------------------------------------
unsigned int g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(int a1, int a2, int a3, int a4, unsigned int a5)
{
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  int *v10;
  int v11;
  int *v12;
  int i;
  bool v14; // bp
  int v16;
  int v17;
  bool v18;
  int v19;

  v5 = a2;
  v6 = a2;
  if ( a2 < (a3 - 1) / 2 )
  {
    while ( 1 )
    {
      v7 = 2 * (v6 + 1) - 1;
      v10 = (int *)(a1 + 16 * (v6 + 1));
      v8 = (int *)(a1 + 8 * v7);
      v18 = *v10 > *v8;
      if ( *v10 == *v8 )
        v18 = v10[1] < (unsigned int)v8[1];
      if ( !v18 )
      {
        v7 = 2 * (v6 + 1);
        v8 = (int *)(a1 + 16 * (v6 + 1));
      }
      v9 = *v8;
      *(uint32_t *)(a1 + 8 * v6 + 4) = v8[1];
      *(uint32_t *)(a1 + 8 * v6) = v9;
      if ( v7 >= (a3 - 1) / 2 )
        break;
      v6 = v7;
    }
    v5 = v7;
  }
  if ( (a3 & 1) == 0 && (v11 = (a3 - 2) / 2) == v5 )
  {
    v5 = 2 * v5 + 1;
    v12 = (int *)(a1 + 8 * v5);
    v17 = *v12;
    *(uint32_t *)(a1 + 8 * v11 + 4) = v12[1];
    *(uint32_t *)(a1 + 8 * v11) = v17;
  }
  else
  {
    v12 = (int *)(a1 + 8 * v5);
  }
  if ( a2 < v5 )
  {
    v19 = v5;
    for ( i = (v5 - 1) / 2; ; i = (i - 1) / 2 )
    {
      v12 = (int *)(a1 + 8 * i);
      v14 = *v12 > a4;
      if ( *v12 == a4 )
        v14 = v12[1] < a5;
      if ( !v14 )
        break;
      v16 = *v12;
      *(uint32_t *)(a1 + 8 * v19 + 4) = v12[1];
      *(uint32_t *)(a1 + 8 * v19) = v16;
      if ( i <= a2 )
        goto LABEL_19;
      v19 = i;
    }
    v12 = (int *)(a1 + 8 * v19);
  }
LABEL_19:
  *v12 = a4;
  v12[1] = a5;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_1243d9  (binary VA: 0xf819c0)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::streaming::SPriorityFrameSwappable *,std::vector<glitch::streaming::SPriorityFrameSwappable,glitch::core::SAllocator<glitch::streaming::SPriorityFrameSwappable,(glitch::memory::E_MEMORY_HINT)0>>>,int>
// ----------------------------------------------------------------------------
signed int g4_std::introsort_loop_gnu_cxx_normal_iterator_1243d9(int *a1, int *a2, int a3)
{
  int *v3;
  signed int result;
  int v5;
  int *j;
  int *v7;
  bool v8; // di
  bool v9;
  int v10;
  bool v11;
  int v12;
  int *v13;
  int *v14;
  int k;
  int v16;
  bool v17;
  int *v18;
  int *v19;
  bool v20;
  int v21;
  int v22;
  bool v23;
  int v24;
  int v25;
  bool v26;
  bool v27;
  int v28;
  int v29;
  int i;
  int v31;
  int nn;
  int v33;
  int *v34;
  int v35;
  int v36;
  char *v37;
  bool v38; // di
  bool v39;
  int v40;
  bool v41;
  int v42;
  int *v43;
  int *v44;
  int v45;
  bool v46;
  int *v47;
  int *v48;
  bool v49;
  unsigned int v50;
  int v51;
  int v52;
  bool v53;
  bool v54;
  int v55;
  int v56;
  int *v57;
  char *v58;
  int m;
  int *v60;
  bool v61; // di
  bool v62;
  int v63;
  bool v64;
  int v65;
  int *v66;
  int *v67;
  int n;
  int v69;
  bool v70;
  int *v71;
  bool v72;
  int v73;
  int v74;
  bool v75;
  int v76;
  int v77;
  bool v78;
  bool v79;
  int v80;
  char *v81;
  int *v82;
  bool v83; // si
  bool v84;
  int v85;
  bool v86; // di
  int v87;
  int *v88;
  int v89;
  int *v90;
  bool v91;
  bool v92;
  int *v93;
  int v94;
  int *v95;
  bool v96;
  unsigned int v97;
  bool v98; // cc
  int v99;
  int v100;
  int v101;
  int v102;
  char *v103;
  int *v104;
  int v105;
  bool v106;
  int v107;
  bool v108; // si
  int v109;
  int *v110;
  int v111;
  int *v112;
  bool v113;
  bool v114;
  char *v115;
  int *v116;
  bool v117;
  bool v118;
  int v119;
  int v120;
  int v121;
  int *v122;
  int *v123;
  bool v124; // si
  int v125;
  bool v126; // di
  int v127;
  char *v128;
  int v129;
  int v130;
  char *v131;
  bool v132;
  bool v133;
  char *v134;
  char *v135;
  bool v136;
  bool v137;
  int v138;
  int v139;
  int v140;
  bool v141; // di
  bool v142; // di
  int v143;
  int v144;
  bool v145;
  int v146;
  int *v147;
  int v148;
  bool v149; // si
  bool v150; // si
  int v151;
  int v152;
  bool v153;
  int v154;
  int ii;
  int *v156;
  int v157;
  int v158;
  int jj;
  int *v160;
  int v161;
  bool v162;
  int v163;
  int v164;
  bool v165; // di
  bool v166; // di
  int v167;
  int kk;
  int *v169;
  int v170;
  bool v171;
  int v172;
  int mm;
  int *v174;
  int v175;
  typedef int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef int _g4_t_v178;
  typedef int _g4_t_v179;
  typedef int _g4_t_v180;
  typedef int _g4_t_v181;
  typedef int _g4_t_v182;
  typedef unsigned int _g4_t_v183;
  typedef unsigned int _g4_t_v184;
  typedef unsigned int _g4_t_v185;
  typedef unsigned int _g4_t_v186;
  typedef unsigned int _g4_t_v187;
  typedef unsigned int _g4_t_v188;
  typedef unsigned int _g4_t_v189;
  typedef int _g4_t_v190;
  typedef int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef int _g4_t_v193;
  typedef int _g4_t_v194;
  typedef int _g4_t_v195;
  typedef int _g4_t_v196;
  typedef char *_g4_t_v197;
  typedef int _g4_t_v198;
  typedef int _g4_t_v199;
  typedef int _g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef int _g4_t_v203;
  typedef int *_g4_t_v204;
  typedef int *_g4_t_v205;
  typedef int _g4_t_v206;
  typedef int *_g4_t_v207;
  typedef int *_g4_t_v208;
  typedef int *_g4_t_v209;
  typedef char *_g4_t_v210;
  typedef int *_g4_t_v211;
  typedef int _g4_t_v212;
  typedef int *_g4_t_v213;
  typedef int _g4_t_v214;
  typedef int _g4_t_v215;
  typedef int *_g4_t_v216;
  typedef int *_g4_t_v217;
  typedef int _g4_t_v218;
  typedef int *_g4_t_v219;
  typedef int _g4_t_v220;
  typedef char *_g4_t_v221;
  typedef int _g4_t_v222;
  typedef int *_g4_t_v223;
  typedef int _g4_t_v224;
  typedef int _g4_t_v225;
  typedef int _g4_t_v226;
  typedef int *_g4_t_v227;
  typedef char *_g4_t_v228;
  typedef int _g4_t_v229;
  typedef int _g4_t_v230;
  typedef char *_g4_t_v231;
  typedef int _g4_t_v232;
  typedef int _g4_t_v233;
  typedef int _g4_t_v234;
  typedef int *_g4_t_v235;
  typedef int _g4_t_v236;
  typedef int _g4_t_v237;
  typedef int _g4_t_v238;
  typedef int _g4_t_v239;
  typedef int _g4_t_v240;
  typedef int _g4_t_v241;
  typedef int _g4_t_v242;
  typedef int *_g4_t_v243;
  typedef int _g4_t_v244;
  typedef uint32_t _g4_t_v245[10];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v176)) > _g4_s0 ? (0u + sizeof(_g4_t_v176)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v177)) > _g4_s1 ? (0u + sizeof(_g4_t_v177)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v178)) > _g4_s2 ? (0u + sizeof(_g4_t_v178)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v179)) > _g4_s3 ? (0u + sizeof(_g4_t_v179)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v180)) > _g4_s4 ? (0u + sizeof(_g4_t_v180)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v181)) > _g4_s5 ? (0u + sizeof(_g4_t_v181)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v182)) > _g4_s6 ? (0u + sizeof(_g4_t_v182)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v183)) > _g4_s7 ? (4u + sizeof(_g4_t_v183)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v184)) > _g4_s8 ? (4u + sizeof(_g4_t_v184)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v185)) > _g4_s9 ? (4u + sizeof(_g4_t_v185)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v186)) > _g4_s10 ? (4u + sizeof(_g4_t_v186)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v187)) > _g4_s11 ? (4u + sizeof(_g4_t_v187)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v188)) > _g4_s12 ? (4u + sizeof(_g4_t_v188)) : _g4_s12,
    _g4_s14 = (4u + sizeof(_g4_t_v189)) > _g4_s13 ? (4u + sizeof(_g4_t_v189)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v190)) > _g4_s14 ? (12u + sizeof(_g4_t_v190)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v191)) > _g4_s15 ? (12u + sizeof(_g4_t_v191)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v192)) > _g4_s16 ? (12u + sizeof(_g4_t_v192)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v193)) > _g4_s17 ? (12u + sizeof(_g4_t_v193)) : _g4_s17,
    _g4_s19 = (12u + sizeof(_g4_t_v194)) > _g4_s18 ? (12u + sizeof(_g4_t_v194)) : _g4_s18,
    _g4_s20 = (12u + sizeof(_g4_t_v195)) > _g4_s19 ? (12u + sizeof(_g4_t_v195)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v196)) > _g4_s20 ? (68u + sizeof(_g4_t_v196)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v197)) > _g4_s21 ? (88u + sizeof(_g4_t_v197)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v198)) > _g4_s22 ? (104u + sizeof(_g4_t_v198)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v199)) > _g4_s23 ? (108u + sizeof(_g4_t_v199)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v200)) > _g4_s24 ? (112u + sizeof(_g4_t_v200)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v201)) > _g4_s25 ? (116u + sizeof(_g4_t_v201)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v202)) > _g4_s26 ? (120u + sizeof(_g4_t_v202)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v203)) > _g4_s27 ? (124u + sizeof(_g4_t_v203)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v204)) > _g4_s28 ? (128u + sizeof(_g4_t_v204)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v205)) > _g4_s29 ? (136u + sizeof(_g4_t_v205)) : _g4_s29,
    _g4_s31 = (140u + sizeof(_g4_t_v206)) > _g4_s30 ? (140u + sizeof(_g4_t_v206)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v207)) > _g4_s31 ? (144u + sizeof(_g4_t_v207)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v208)) > _g4_s32 ? (148u + sizeof(_g4_t_v208)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v209)) > _g4_s33 ? (152u + sizeof(_g4_t_v209)) : _g4_s33,
    _g4_s35 = (156u + sizeof(_g4_t_v210)) > _g4_s34 ? (156u + sizeof(_g4_t_v210)) : _g4_s34,
    _g4_s36 = (160u + sizeof(_g4_t_v211)) > _g4_s35 ? (160u + sizeof(_g4_t_v211)) : _g4_s35,
    _g4_s37 = (164u + sizeof(_g4_t_v212)) > _g4_s36 ? (164u + sizeof(_g4_t_v212)) : _g4_s36,
    _g4_s38 = (164u + sizeof(_g4_t_v213)) > _g4_s37 ? (164u + sizeof(_g4_t_v213)) : _g4_s37,
    _g4_s39 = (164u + sizeof(_g4_t_v214)) > _g4_s38 ? (164u + sizeof(_g4_t_v214)) : _g4_s38,
    _g4_s40 = (164u + sizeof(_g4_t_v215)) > _g4_s39 ? (164u + sizeof(_g4_t_v215)) : _g4_s39,
    _g4_s41 = (164u + sizeof(_g4_t_v216)) > _g4_s40 ? (164u + sizeof(_g4_t_v216)) : _g4_s40,
    _g4_s42 = (164u + sizeof(_g4_t_v217)) > _g4_s41 ? (164u + sizeof(_g4_t_v217)) : _g4_s41,
    _g4_s43 = (164u + sizeof(_g4_t_v218)) > _g4_s42 ? (164u + sizeof(_g4_t_v218)) : _g4_s42,
    _g4_s44 = (164u + sizeof(_g4_t_v219)) > _g4_s43 ? (164u + sizeof(_g4_t_v219)) : _g4_s43,
    _g4_s45 = (164u + sizeof(_g4_t_v220)) > _g4_s44 ? (164u + sizeof(_g4_t_v220)) : _g4_s44,
    _g4_s46 = (164u + sizeof(_g4_t_v221)) > _g4_s45 ? (164u + sizeof(_g4_t_v221)) : _g4_s45,
    _g4_s47 = (168u + sizeof(_g4_t_v222)) > _g4_s46 ? (168u + sizeof(_g4_t_v222)) : _g4_s46,
    _g4_s48 = (168u + sizeof(_g4_t_v223)) > _g4_s47 ? (168u + sizeof(_g4_t_v223)) : _g4_s47,
    _g4_s49 = (168u + sizeof(_g4_t_v224)) > _g4_s48 ? (168u + sizeof(_g4_t_v224)) : _g4_s48,
    _g4_s50 = (168u + sizeof(_g4_t_v225)) > _g4_s49 ? (168u + sizeof(_g4_t_v225)) : _g4_s49,
    _g4_s51 = (168u + sizeof(_g4_t_v226)) > _g4_s50 ? (168u + sizeof(_g4_t_v226)) : _g4_s50,
    _g4_s52 = (168u + sizeof(_g4_t_v227)) > _g4_s51 ? (168u + sizeof(_g4_t_v227)) : _g4_s51,
    _g4_s53 = (168u + sizeof(_g4_t_v228)) > _g4_s52 ? (168u + sizeof(_g4_t_v228)) : _g4_s52,
    _g4_s54 = (168u + sizeof(_g4_t_v229)) > _g4_s53 ? (168u + sizeof(_g4_t_v229)) : _g4_s53,
    _g4_s55 = (168u + sizeof(_g4_t_v230)) > _g4_s54 ? (168u + sizeof(_g4_t_v230)) : _g4_s54,
    _g4_s56 = (168u + sizeof(_g4_t_v231)) > _g4_s55 ? (168u + sizeof(_g4_t_v231)) : _g4_s55,
    _g4_s57 = (168u + sizeof(_g4_t_v232)) > _g4_s56 ? (168u + sizeof(_g4_t_v232)) : _g4_s56,
    _g4_s58 = (172u + sizeof(_g4_t_v233)) > _g4_s57 ? (172u + sizeof(_g4_t_v233)) : _g4_s57,
    _g4_s59 = (172u + sizeof(_g4_t_v234)) > _g4_s58 ? (172u + sizeof(_g4_t_v234)) : _g4_s58,
    _g4_s60 = (172u + sizeof(_g4_t_v235)) > _g4_s59 ? (172u + sizeof(_g4_t_v235)) : _g4_s59,
    _g4_s61 = (172u + sizeof(_g4_t_v236)) > _g4_s60 ? (172u + sizeof(_g4_t_v236)) : _g4_s60,
    _g4_s62 = (172u + sizeof(_g4_t_v237)) > _g4_s61 ? (172u + sizeof(_g4_t_v237)) : _g4_s61,
    _g4_s63 = (172u + sizeof(_g4_t_v238)) > _g4_s62 ? (172u + sizeof(_g4_t_v238)) : _g4_s62,
    _g4_s64 = (172u + sizeof(_g4_t_v239)) > _g4_s63 ? (172u + sizeof(_g4_t_v239)) : _g4_s63,
    _g4_s65 = (172u + sizeof(_g4_t_v240)) > _g4_s64 ? (172u + sizeof(_g4_t_v240)) : _g4_s64,
    _g4_s66 = (172u + sizeof(_g4_t_v241)) > _g4_s65 ? (172u + sizeof(_g4_t_v241)) : _g4_s65,
    _g4_s67 = (172u + sizeof(_g4_t_v242)) > _g4_s66 ? (172u + sizeof(_g4_t_v242)) : _g4_s66,
    _g4_s68 = (172u + sizeof(_g4_t_v243)) > _g4_s67 ? (172u + sizeof(_g4_t_v243)) : _g4_s67,
    _g4_s69 = (172u + sizeof(_g4_t_v244)) > _g4_s68 ? (172u + sizeof(_g4_t_v244)) : _g4_s68,
    _g4_s70 = (176u + sizeof(_g4_t_v245)) > _g4_s69 ? (176u + sizeof(_g4_t_v245)) : _g4_s69
  };
  alignas(16) uint8_t _g4_sf[_g4_s70];
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 0u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 0u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 0u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 0u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 0u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 0u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 0u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 4u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 4u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 4u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 4u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 4u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 4u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 4u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 12u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 12u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 12u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 12u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 12u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 12u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 68u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 88u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 104u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 108u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 112u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 116u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 120u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 124u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 128u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 136u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 140u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 144u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 148u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 152u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 156u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 160u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 164u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 164u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 164u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 164u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 164u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 164u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 164u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 164u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 164u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 164u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 168u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 168u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 168u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 168u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 168u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 168u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 168u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 168u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 168u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 168u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 168u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 172u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 172u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 172u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 172u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 172u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 172u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 172u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 172u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 172u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 172u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 172u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 172u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 176u);

  v245[6] = (uint32_t)(uintptr_t)(&a1);
  v3 = a2;
  v204 = a1;
  result = (char *)a2 - (char *)a1;
  v203 = a3;
  if ( (char *)a2 - (char *)a1 > 135 )
  {
    if ( a3 != 0 )
    {
      while ( 1 )
      {
        --v203;
        g4_std_compat::unguarded_partition_pivot(
          v245,
          v204,
          (char *)v3);
        v205 = (int *)v245[0];
        v5 = (int)(uintptr_t)(v3) - v245[0];
        if ( (int)(uintptr_t)(v3) - v245[0] <= 135 )
        {
          v3 = (int *)v245[0];
          v28 = v245[0];
          goto LABEL_43;
        }
        if ( v203 != 0 )
          break;
        v28 = v245[0];
        v208 = v3;
        v235 = (int *)v245[0];
LABEL_39:
        v29 = v5 >> 3;
        for ( i = (v29 - 2) >> 1; ; --i )
        {
          v190 = v29;
          g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
            (int)(uintptr_t)(v205),
            i,
            v29,
            v205[2 * i],
            v205[2 * i + 1]);
          v29 = v190;
          if ( i == 0 )
            break;
        }
        v34 = v208;
        do
        {
          v34 -= 2;
          v184 = v34[1];
          v177 = *v34;
          v35 = v205[1];
          *v34 = *v205;
          v34[1] = v35;
          g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
            (int)(uintptr_t)(v205),
            0,
            ((char *)v34 - (char *)v205) >> 3,
            v177,
            v184);
        }
        while ( (char *)v34 - (char *)v205 > 15 );
        v3 = v235;
LABEL_43:
        result = v28 - (uint32_t)(uintptr_t)(v204);
        if ( v28 - (int)(uintptr_t)(v204) <= 135 )
          return result;
        if ( v203 == 0 )
          goto LABEL_45;
      }
      v202 = v203;
      v196 = v245[0] + 8;
      for ( j = v3; ; j = v208 )
      {
        --v202;
        v7 = &v205[2
                 * ((int)(((unsigned int)((char *)j - (char *)v205) >> 31) + (((char *)j - (char *)v205) >> 3)) >> 1)];
        v212 = *v205;
        v222 = *v7;
        v8 = *v205 > *v7;
        if ( *v205 == *v7 )
          v8 = v205[1] < (unsigned int)v7[1];
        v9 = v8;
        v10 = *(v3 - 2);
        if ( v9 )
        {
          v11 = v222 > v10;
          if ( v222 == v10 )
            v11 = v7[1] < (unsigned int)*(v3 - 1);
          if ( v11 )
          {
            v233 = v205[1];
LABEL_13:
            v12 = *v7;
            v205[1] = v7[1];
            *v205 = v12;
            *v7 = v212;
            v7[1] = v233;
            v212 = *v205;
            goto LABEL_14;
          }
          v23 = v212 > v10;
          if ( v212 == v10 )
            v23 = v205[1] < (unsigned int)*(v3 - 1);
          if ( v23 )
          {
            v24 = v205[1];
LABEL_29:
            v25 = *(v3 - 1);
            *v205 = *(v3 - 2);
            v205[1] = v25;
            *(v3 - 2) = v212;
            *(v3 - 1) = v24;
            v212 = *v205;
          }
        }
        else
        {
          v26 = v212 > v10;
          if ( v212 == v10 )
            v26 = v205[1] < (unsigned int)*(v3 - 1);
          if ( !v26 )
          {
            v27 = v222 > v10;
            if ( v222 == v10 )
              v27 = v7[1] < (unsigned int)*(v3 - 1);
            if ( v27 )
            {
              v24 = v205[1];
              goto LABEL_29;
            }
            v233 = v205[1];
            goto LABEL_13;
          }
        }
LABEL_14:
        v13 = v3;
        v14 = (int *)v196;
        for ( k = v212; ; k = *v205 )
        {
          v213 = v13;
          do
          {
            v16 = *v14;
            v208 = v14;
            v17 = *v14 > k;
            if ( *v14 == k )
              v17 = v14[1] < (unsigned int)v205[1];
            v14 += 2;
          }
          while ( v17 );
          v18 = v213;
          v214 = v16;
          v19 = v18 - 2;
          do
          {
            v13 = v19;
            v20 = *v19 < k;
            if ( *v19 == k )
              v20 = v205[1] < (unsigned int)v19[1];
            v19 -= 2;
          }
          while ( v20 );
          v21 = v214;
          if ( v13 <= v208 )
            break;
          v22 = v13[1];
          v234 = v208[1];
          *v208 = *v13;
          v208[1] = v22;
          *v13 = v214;
          v13[1] = v234;
          v14 = v208 + 2;
        }
        v36 = (char *)v3 - (char *)v208;
        if ( (char *)v3 - (char *)v208 > 135 )
        {
          if ( v202 != 0 )
          {
            v201 = v202;
            v37 = (char *)v3;
            while ( 1 )
            {
              --v201;
              v223 = &v208[2 * ((int)(((unsigned int)(v37 - (char *)v208) >> 31) + ((v37 - (char *)v208) >> 3)) >> 1)];
              v215 = *v223;
              v38 = *v223 < v21;
              if ( *v223 == v21 )
                v38 = v208[1] < (unsigned int)v223[1];
              v39 = v38;
              v40 = *(v3 - 2);
              if ( v39 )
              {
                v41 = v215 > v40;
                if ( v215 == v40 )
                  v41 = v223[1] < (unsigned int)*(v3 - 1);
                if ( !v41 )
                {
                  v171 = v40 < v21;
                  if ( v40 == v21 )
                    v171 = v208[1] < (unsigned int)*(v3 - 1);
                  if ( !v171 )
                    goto LABEL_64;
                  v239 = v208[1];
                  goto LABEL_82;
                }
                v236 = v208[1];
              }
              else
              {
                v53 = v40 < v21;
                if ( v40 == v21 )
                  v53 = v208[1] < (unsigned int)*(v3 - 1);
                if ( v53 )
                  goto LABEL_64;
                v54 = v215 > v40;
                if ( v215 == v40 )
                  v54 = v223[1] < (unsigned int)*(v3 - 1);
                if ( v54 )
                {
                  v239 = v208[1];
LABEL_82:
                  v55 = *(v3 - 1);
                  *v208 = *(v3 - 2);
                  v208[1] = v55;
                  *(v3 - 2) = v21;
                  *(v3 - 1) = v239;
                  v21 = *v208;
                  goto LABEL_64;
                }
                v236 = v208[1];
              }
              v42 = v223[1];
              *v208 = *v223;
              v208[1] = v42;
              *v223 = v21;
              v223[1] = v236;
              v21 = *v208;
LABEL_64:
              v43 = v3;
              v44 = v208 + 2;
              while ( 1 )
              {
                v216 = v43;
                do
                {
                  while ( 1 )
                  {
                    v45 = *v44;
                    v207 = v44;
                    if ( *v44 == v21 )
                      break;
                    v44 += 2;
                    if ( v45 <= v21 )
                      goto LABEL_69;
                  }
                  v46 = v44[1] < (unsigned int)v208[1];
                  v44 += 2;
                }
                while ( v46 );
LABEL_69:
                v47 = v216;
                v237 = v45;
                v217 = v3;
                v48 = v47 - 2;
                do
                {
                  while ( 1 )
                  {
                    v43 = v48;
                    v49 = *v48 < v21;
                    if ( *v48 == v21 )
                      break;
                    v48 -= 2;
                    if ( !v49 )
                      goto LABEL_73;
                  }
                  v50 = v48[1];
                  v48 -= 2;
                }
                while ( v208[1] < v50 );
LABEL_73:
                v51 = v237;
                if ( v43 <= v207 )
                  break;
                v52 = v43[1];
                v238 = v207[1];
                *v207 = *v43;
                v207[1] = v52;
                *v43 = v51;
                v43[1] = v238;
                v44 = v207 + 2;
                v3 = v217;
                v21 = *v208;
              }
              v197 = (char *)v217;
              v56 = (char *)v217 - (char *)v207;
              if ( (char *)v217 - (char *)v207 > 135 )
              {
                if ( v201 != 0 )
                {
                  v57 = v217;
                  v200 = v201;
                  v218 = v237;
                  v58 = v197;
                  for ( m = v237; ; m = *v207 )
                  {
                    --v200;
                    v60 = &v207[2
                              * ((int)(((unsigned int)(v58 - (char *)v207) >> 31) + ((v58 - (char *)v207) >> 3)) >> 1)];
                    v224 = *v60;
                    v61 = *v60 < m;
                    if ( *v60 == v218 )
                      v61 = v207[1] < (unsigned int)v60[1];
                    v62 = v61;
                    v63 = *(v57 - 2);
                    if ( v62 )
                    {
                      v64 = v224 > v63;
                      if ( v224 == v63 )
                        v64 = v60[1] < (unsigned int)*(v57 - 1);
                      if ( v64 )
                      {
                        v240 = v207[1];
LABEL_94:
                        v65 = *v60;
                        v207[1] = v60[1];
                        *v207 = v65;
                        *v60 = v218;
                        v60[1] = v240;
                        v218 = *v207;
                        goto LABEL_95;
                      }
                      v75 = v63 < v218;
                      if ( v63 == v218 )
                        v75 = v207[1] < (unsigned int)*(v57 - 1);
                      if ( v75 )
                      {
                        v76 = v207[1];
LABEL_110:
                        v77 = *(v57 - 1);
                        *v207 = *(v57 - 2);
                        v207[1] = v77;
                        *(v57 - 2) = v218;
                        *(v57 - 1) = v76;
                        v218 = *v207;
                      }
                    }
                    else
                    {
                      v78 = v63 < v218;
                      if ( v63 == v218 )
                        v78 = v207[1] < (unsigned int)*(v57 - 1);
                      if ( !v78 )
                      {
                        v79 = v224 > v63;
                        if ( v224 == v63 )
                          v79 = v60[1] < (unsigned int)*(v57 - 1);
                        if ( v79 )
                        {
                          v76 = v207[1];
                          goto LABEL_110;
                        }
                        v240 = v207[1];
                        goto LABEL_94;
                      }
                    }
LABEL_95:
                    v66 = v57;
                    v67 = v207 + 2;
                    for ( n = v218; ; n = *v207 )
                    {
                      v219 = v66;
                      do
                      {
                        v69 = *v67;
                        v209 = v67;
                        v70 = *v67 > n;
                        if ( *v67 == n )
                          v70 = v67[1] < (unsigned int)v207[1];
                        v67 += 2;
                      }
                      while ( v70 );
                      v241 = v69;
                      v71 = v219 - 2;
                      do
                      {
                        v66 = v71;
                        v72 = *v71 < n;
                        if ( *v71 == n )
                          v72 = v207[1] < (unsigned int)v71[1];
                        v71 -= 2;
                      }
                      while ( v72 );
                      v73 = v241;
                      if ( v66 <= v209 )
                        break;
                      v74 = v66[1];
                      v242 = v209[1];
                      *v209 = *v66;
                      v209[1] = v74;
                      *v66 = v73;
                      v66[1] = v242;
                      v67 = v209 + 2;
                    }
                    v80 = (char *)v57 - (char *)v209;
                    if ( (char *)v57 - (char *)v209 <= 135 )
                      goto LABEL_233;
                    if ( v200 == 0 )
                    {
                      v211 = v57;
                      goto LABEL_228;
                    }
                    v243 = v57;
                    v199 = v200;
                    v81 = (char *)v57;
                    while ( 2 )
                    {
                      --v199;
                      v82 = &v209[2
                                * ((int)(((unsigned int)(v81 - (char *)v209) >> 31) + ((v81 - (char *)v209) >> 3)) >> 1)];
                      v225 = *v82;
                      v83 = *v82 < v73;
                      if ( *v82 == v73 )
                        v83 = v209[1] < (unsigned int)v82[1];
                      v84 = !v83;
                      v85 = *(v243 - 2);
                      if ( v84 )
                      {
                        v165 = v85 < v73;
                        if ( v85 == v73 )
                          v165 = v209[1] < (unsigned int)*(v243 - 1);
                        if ( v165 )
                          goto LABEL_129;
                        v166 = v225 > v85;
                        if ( v225 == v85 )
                          v166 = v82[1] < (unsigned int)*(v243 - 1);
                        if ( v166 )
                        {
                          v163 = v209[1];
LABEL_240:
                          v164 = *(v243 - 1);
                          *v209 = *(v243 - 2);
                          v209[1] = v164;
                          *(v243 - 2) = v73;
                          *(v243 - 1) = v163;
                          v73 = *v209;
                          goto LABEL_129;
                        }
                        v226 = v209[1];
                      }
                      else
                      {
                        v86 = v225 > v85;
                        if ( v225 == v85 )
                          v86 = v82[1] < (unsigned int)*(v243 - 1);
                        if ( !v86 )
                        {
                          v162 = v85 < v73;
                          if ( v85 == v73 )
                            v162 = v209[1] < (unsigned int)*(v243 - 1);
                          if ( !v162 )
                            goto LABEL_129;
                          v163 = v209[1];
                          goto LABEL_240;
                        }
                        v226 = v209[1];
                      }
                      v87 = v82[1];
                      *v209 = *v82;
                      v209[1] = v87;
                      *v82 = v73;
                      v82[1] = v226;
                      v73 = *v209;
LABEL_129:
                      v88 = v209 + 2;
                      v227 = v243;
                      while ( 1 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v89 = *v88;
                            v90 = v88;
                            v91 = *v88 > v73;
                            if ( *v88 != v73 )
                              break;
                            v92 = v88[1] < (unsigned int)v209[1];
                            v88 += 2;
                            if ( !v92 )
                              goto LABEL_133;
                          }
                          v88 += 2;
                        }
                        while ( v91 );
LABEL_133:
                        v211 = v90;
                        v93 = v227 - 2;
                        v220 = v89;
                        v94 = v73;
                        do
                        {
                          while ( 1 )
                          {
                            v95 = v93;
                            v96 = *v93 < v94;
                            if ( *v93 == v94 )
                              break;
                            v93 -= 2;
                            if ( !v96 )
                              goto LABEL_137;
                          }
                          v97 = v93[1];
                          v93 -= 2;
                        }
                        while ( v209[1] < v97 );
LABEL_137:
                        v227 = v95;
                        v98 = v95 <= v211;
                        v99 = v220;
                        if ( v98 )
                          break;
                        v100 = v211[1];
                        v101 = v227[1];
                        *v211 = *v227;
                        v211[1] = v101;
                        *v227 = v220;
                        v227[1] = v100;
                        v73 = *v209;
                        v88 = v211 + 2;
                      }
                      v102 = (char *)v243 - (char *)v211;
                      if ( (char *)v243 - (char *)v211 > 135 )
                      {
                        if ( v199 == 0 )
                          goto LABEL_218;
                        v198 = v199;
                        v221 = (char *)v243;
                        v103 = (char *)v243;
                        while ( 2 )
                        {
                          --v198;
                          v104 = &v211[2
                                     * ((int)(((unsigned int)(v103 - (char *)v211) >> 31) + ((v103 - (char *)v211) >> 3)) >> 1)];
                          v105 = *v104;
                          v106 = v99 > *v104;
                          if ( v99 == *v104 )
                            v106 = v211[1] < (unsigned int)v104[1];
                          v84 = !v106;
                          v107 = *((uint32_t *)v221 - 2);
                          if ( v84 )
                          {
                            v149 = v99 > v107;
                            if ( v99 == v107 )
                              v149 = (unsigned int)v211[1] < *((uint32_t *)v221 - 1);
                            if ( !v149 )
                            {
                              v150 = v105 > v107;
                              if ( v105 == v107 )
                                v150 = (unsigned int)v104[1] < *((uint32_t *)v221 - 1);
                              if ( v150 )
                              {
                                v151 = v211[1];
                                goto LABEL_213;
                              }
                              v244 = v211[1];
LABEL_149:
                              v109 = *v104;
                              v211[1] = v104[1];
                              *v211 = v109;
                              *v104 = v99;
                              v104[1] = v244;
                              v99 = *v211;
                            }
                          }
                          else
                          {
                            v108 = v105 > v107;
                            if ( v105 == v107 )
                              v108 = (unsigned int)v104[1] < *((uint32_t *)v221 - 1);
                            if ( v108 )
                            {
                              v244 = v211[1];
                              goto LABEL_149;
                            }
                            v153 = v99 > v107;
                            if ( v99 == v107 )
                              v153 = (unsigned int)v211[1] < *((uint32_t *)v221 - 1);
                            if ( v153 )
                            {
                              v151 = v211[1];
LABEL_213:
                              v152 = *((uint32_t *)v221 - 1);
                              *v211 = *((uint32_t *)v221 - 2);
                              v211[1] = v152;
                              *((uint32_t *)v221 - 2) = v99;
                              *((uint32_t *)v221 - 1) = v151;
                              v99 = *v211;
                            }
                          }
                          v110 = v211 + 2;
                          v228 = v221;
                          while ( 1 )
                          {
                            v111 = *v110;
                            v112 = v110;
                            v113 = v99 < *v110;
                            if ( v99 == *v110 )
                            {
                              v114 = v110[1] < (unsigned int)v211[1];
                              v110 += 2;
                              if ( v114 )
                                continue;
                            }
                            else
                            {
                              v110 += 2;
                              if ( v113 )
                                continue;
                            }
                            v243 = v112;
                            v115 = v228 - 8;
                            do
                            {
                              while ( 1 )
                              {
                                v116 = (int *)v115;
                                v117 = v99 > *(uint32_t *)v115;
                                if ( v99 == *(uint32_t *)v115 )
                                  break;
                                v115 -= 8;
                                if ( !v117 )
                                  goto LABEL_158;
                              }
                              v118 = (unsigned int)v211[1] < *((uint32_t *)v115 + 1);
                              v115 -= 8;
                            }
                            while ( v118 );
LABEL_158:
                            v228 = (char *)v116;
                            if ( v243 >= v116 )
                              break;
                            v119 = v243[1];
                            v120 = v116[1];
                            *v243 = *v116;
                            v243[1] = v120;
                            *v116 = v111;
                            v116[1] = v119;
                            v110 = v243 + 2;
                            v99 = *v211;
                          }
                          v210 = v221;
                          v121 = v221 - (char *)v243;
                          if ( v221 - (char *)v243 > 135 )
                          {
                            if ( v198 != 0 )
                            {
                              v206 = v198;
                              v122 = v243;
                              while ( 1 )
                              {
                                --v206;
                                v123 = &v122[2
                                           * ((int)(((unsigned int)(v210 - (char *)v243) >> 31)
                                                  + ((v210 - (char *)v243) >> 3)) >> 1)];
                                v229 = *v123;
                                v124 = v111 > *v123;
                                if ( v111 == *v123 )
                                  v124 = v243[1] < (unsigned int)v123[1];
                                v84 = !v124;
                                v125 = *((uint32_t *)v210 - 2);
                                if ( v84 )
                                {
                                  v141 = v111 > v125;
                                  if ( v111 == v125 )
                                    v141 = (unsigned int)v243[1] < *((uint32_t *)v210 - 1);
                                  if ( v141 )
                                    goto LABEL_171;
                                  v142 = v229 > v125;
                                  if ( v229 == v125 )
                                    v142 = (unsigned int)v123[1] < *((uint32_t *)v210 - 1);
                                  if ( v142 )
                                  {
                                    v143 = v243[1];
LABEL_192:
                                    v144 = *((uint32_t *)v210 - 1);
                                    *v243 = *((uint32_t *)v210 - 2);
                                    v243[1] = v144;
                                    *((uint32_t *)v210 - 2) = v111;
                                    *((uint32_t *)v210 - 1) = v143;
                                    v111 = *v243;
                                    goto LABEL_171;
                                  }
                                  v230 = v243[1];
                                }
                                else
                                {
                                  v126 = v229 > v125;
                                  if ( v229 == v125 )
                                    v126 = (unsigned int)v123[1] < *((uint32_t *)v210 - 1);
                                  if ( !v126 )
                                  {
                                    v145 = v111 > v125;
                                    if ( v111 == v125 )
                                      v145 = (unsigned int)v243[1] < *((uint32_t *)v210 - 1);
                                    if ( !v145 )
                                      goto LABEL_171;
                                    v143 = v243[1];
                                    goto LABEL_192;
                                  }
                                  v230 = v243[1];
                                }
                                v127 = v123[1];
                                *v243 = *v123;
                                v243[1] = v127;
                                *v123 = v111;
                                v123[1] = v230;
                                v111 = *v243;
LABEL_171:
                                v128 = (char *)(v243 + 2);
                                v231 = v210;
                                while ( 1 )
                                {
                                  v129 = v111;
                                  do
                                  {
                                    while ( 1 )
                                    {
                                      v130 = *(uint32_t *)v128;
                                      v131 = v128;
                                      v132 = v129 < *(uint32_t *)v128;
                                      if ( v129 == *(uint32_t *)v128 )
                                        break;
                                      v128 += 8;
                                      if ( !v132 )
                                        goto LABEL_176;
                                    }
                                    v133 = *((uint32_t *)v128 + 1) < (unsigned int)v243[1];
                                    v128 += 8;
                                  }
                                  while ( v133 );
LABEL_176:
                                  v221 = v131;
                                  v134 = v231 - 8;
                                  do
                                  {
                                    while ( 1 )
                                    {
                                      v135 = v134;
                                      v136 = v129 > *(uint32_t *)v134;
                                      if ( v129 == *(uint32_t *)v134 )
                                        break;
                                      v134 -= 8;
                                      if ( !v136 )
                                        goto LABEL_180;
                                    }
                                    v137 = (unsigned int)v243[1] < *((uint32_t *)v134 + 1);
                                    v134 -= 8;
                                  }
                                  while ( v137 );
LABEL_180:
                                  v231 = v135;
                                  if ( v221 >= v135 )
                                    break;
                                  v138 = *(uint32_t *)v135;
                                  v139 = *((uint32_t *)v221 + 1);
                                  v140 = *((uint32_t *)v135 + 1);
                                  *(uint32_t *)v221 = v138;
                                  *((uint32_t *)v221 + 1) = v140;
                                  v128 = v221 + 8;
                                  *(uint32_t *)v231 = v130;
                                  *((uint32_t *)v231 + 1) = v139;
                                  v111 = *v243;
                                }
                                g4_std::introsort_loop_gnu_cxx_normal_iterator_1243d9(
                                  (int *)(v221),
                                  (int *)(v210),
                                  v206);
                                v121 = v221 - (char *)v243;
                                v210 = v221;
                                if ( v221 - (char *)v243 <= 135 )
                                  goto LABEL_203;
                                if ( v206 == 0 )
                                  break;
                                v122 = v243;
                                v111 = *v243;
                              }
                            }
                            v232 = v121 >> 3;
                            v146 = ((v121 >> 3) - 2) >> 1;
                            g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
                              (int)(uintptr_t)(v243),
                              v146,
                              v121 >> 3,
                              v243[2 * v146],
                              v243[2 * v146 + 1]);
                            while ( v146 != 0 )
                            {
                              --v146;
                              g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
                                (int)(uintptr_t)(v243),
                                v146,
                                v232,
                                v243[2 * v146],
                                v243[2 * v146 + 1]);
                            }
                            v147 = (int *)v221;
                            do
                            {
                              v147 -= 2;
                              v148 = v243[1];
                              v178 = *v147;
                              v185 = v147[1];
                              *v147 = *v243;
                              v147[1] = v148;
                              g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
                                (int)(uintptr_t)(v243),
                                0,
                                ((char *)v147 - (char *)v243) >> 3,
                                v178,
                                v185);
                            }
                            while ( (char *)v147 - (char *)v243 > 15 );
                          }
LABEL_203:
                          v102 = (char *)v243 - (char *)v211;
                          if ( (char *)v243 - (char *)v211 > 135 )
                          {
                            if ( v198 != 0 )
                            {
                              v221 = (char *)v243;
                              v103 = (char *)v243;
                              v99 = *v211;
                              continue;
                            }
LABEL_218:
                            v154 = v102 >> 3;
                            for ( ii = (v154 - 2) >> 1; ; --ii )
                            {
                              v192 = v154;
                              g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
                                (int)(uintptr_t)(v211),
                                ii,
                                v154,
                                v211[2 * ii],
                                v211[2 * ii + 1]);
                              v154 = v192;
                              if ( ii == 0 )
                                break;
                            }
                            v156 = v243;
                            do
                            {
                              v156 -= 2;
                              v179 = *v156;
                              v186 = v156[1];
                              v157 = v211[1];
                              *v156 = *v211;
                              v156[1] = v157;
                              g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
                                (int)(uintptr_t)(v211),
                                0,
                                ((char *)v156 - (char *)v211) >> 3,
                                v179,
                                v186);
                            }
                            while ( (char *)v156 - (char *)v211 > 15 );
                          }
                          break;
                        }
                      }
                      v80 = (char *)v211 - (char *)v209;
                      if ( (char *)v211 - (char *)v209 > 135 )
                      {
                        if ( v199 != 0 )
                        {
                          v243 = v211;
                          v73 = *v209;
                          v81 = (char *)v211;
                          continue;
                        }
LABEL_228:
                        v158 = v80 >> 3;
                        for ( jj = ((v80 >> 3) - 2) >> 1; ; --jj )
                        {
                          v193 = v158;
                          g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
                            (int)(uintptr_t)(v209),
                            jj,
                            v158,
                            v209[2 * jj],
                            v209[2 * jj + 1]);
                          v158 = v193;
                          if ( jj == 0 )
                            break;
                        }
                        v160 = v211;
                        do
                        {
                          v160 -= 2;
                          v187 = v160[1];
                          v180 = *v160;
                          v161 = v209[1];
                          *v160 = *v209;
                          v160[1] = v161;
                          g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
                            (int)(uintptr_t)(v209),
                            0,
                            ((char *)v160 - (char *)v209) >> 3,
                            v180,
                            v187);
                        }
                        while ( (char *)v160 - (char *)v209 > 15 );
                      }
                      break;
                    }
LABEL_233:
                    v56 = (char *)v209 - (char *)v207;
                    if ( (char *)v209 - (char *)v207 <= 135 )
                      goto LABEL_256;
                    if ( v200 == 0 )
                      goto LABEL_250;
                    v57 = v209;
                    v58 = (char *)v209;
                    v218 = *v207;
                  }
                }
                v209 = v217;
LABEL_250:
                v167 = v56 >> 3;
                for ( kk = ((v56 >> 3) - 2) >> 1; ; --kk )
                {
                  v194 = v167;
                  g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
                    (int)(uintptr_t)(v207),
                    kk,
                    v167,
                    v207[2 * kk],
                    v207[2 * kk + 1]);
                  v167 = v194;
                  if ( kk == 0 )
                    break;
                }
                v169 = v209;
                do
                {
                  v169 -= 2;
                  v188 = v169[1];
                  v181 = *v169;
                  v170 = v207[1];
                  *v169 = *v207;
                  v169[1] = v170;
                  g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
                    (int)(uintptr_t)(v207),
                    0,
                    ((char *)v169 - (char *)v207) >> 3,
                    v181,
                    v188);
                }
                while ( (char *)v169 - (char *)v207 > 15 );
              }
LABEL_256:
              v36 = (char *)v207 - (char *)v208;
              if ( (char *)v207 - (char *)v208 <= 135 )
                goto LABEL_269;
              if ( v201 == 0 )
                goto LABEL_264;
              v3 = v207;
              v37 = (char *)v207;
              v21 = *v208;
            }
          }
          v207 = v3;
LABEL_264:
          v172 = v36 >> 3;
          for ( mm = ((v36 >> 3) - 2) >> 1; ; --mm )
          {
            v195 = v172;
            g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
              (int)(uintptr_t)(v208),
              mm,
              v172,
              v208[2 * mm],
              v208[2 * mm + 1]);
            v172 = v195;
            if ( mm == 0 )
              break;
          }
          v174 = v207;
          do
          {
            v174 -= 2;
            v189 = v174[1];
            v182 = *v174;
            v175 = v208[1];
            *v174 = *v208;
            v174[1] = v175;
            g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
              (int)(uintptr_t)(v208),
              0,
              ((char *)v174 - (char *)v208) >> 3,
              v182,
              v189);
          }
          while ( (char *)v174 - (char *)v208 > 15 );
        }
LABEL_269:
        v5 = (char *)v208 - (char *)v205;
        if ( (char *)v208 - (char *)v205 <= 135 )
        {
          v3 = (int *)v245[0];
          v28 = v245[0];
          goto LABEL_43;
        }
        if ( v202 == 0 )
        {
          v235 = (int *)v245[0];
          v28 = v245[0];
          goto LABEL_39;
        }
        v3 = v208;
      }
    }
LABEL_45:
    v31 = result >> 3;
    for ( nn = (v31 - 2) >> 1; ; --nn )
    {
      v191 = v31;
      g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
        (int)(uintptr_t)(v204),
        nn,
        v31,
        v204[2 * nn],
        v204[2 * nn + 1]);
      v31 = v191;
      if ( nn == 0 )
        break;
    }
    do
    {
      v3 -= 2;
      v176 = *v3;
      v183 = v3[1];
      v33 = v204[1];
      *v3 = *v204;
      v3[1] = v33;
      result = g4_std::adjust_heap_gnu_cxx_normal_iterator_5522b2(
                 (int)(uintptr_t)(v204),
                 0,
                 ((char *)v3 - (char *)v204) >> 3,
                 v176,
                 v183);
    }
    while ( (char *)v3 - (char *)v204 > 15 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F82CC0  (binary VA: 0xf82cc0)
// Original: sub_F82CC0
// ----------------------------------------------------------------------------
char * sub_F82CC0()
{
  glitch::core::IStatic3DTree::CBuildOptions::Self *v0;
  char *result;

  sub_1900D70(&unk_20E1F20);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20E1F20, &unk_20D1280);
  dword_20E1F24 = 1056964608;
  dword_20E1F28 = 1056964608;
  dword_20E1F2C = 1056964608;
  dword_20E1AD4 = 1;
  dword_20E1AD8 = 0;
  dword_20E1F30 = glitch::core::detail::registerSharedStringHeapInit();
  v0 = (glitch::core::IStatic3DTree::CBuildOptions::Self *)opNew(0x14u);
  glitch::core::IStatic3DTree::CBuildOptions::Construct(v0);
  dword_20E1ADC = 0;
  dword_20E1AE0 = 0;
  dword_20E1AE4 = 0;
  glitch::core::IStatic3DTree::DefaultBuildOptions = (uintptr_t)(uintptr_t)(v0);
  glitch::core::processBufferHeapInitDummy = glitch::registerInitStep((glitch::Self *)glitch::core::processBufferHeapInit);
  glitch::scene::CLODSceneNode::LodNodePool[0] = 0;
  glitch::scene::CLODSceneNode::LodNodePool[1] = 0;
  glitch::scene::CLODSceneNode::LodNodePool[2] = 0;
  glitch::scene::CLODSceneNode::LodNodePool[3] = 32;
  glitch::scene::CLODSceneNode::LodNodePool[4] = 32;
  glitch::scene::CLODSceneNode::LodNodePool[5] = 32;
  glitch::scene::CLODSceneNode::LodNodePool[6] = 0;
  glitch::scene::CLODSceneNode::LodNodePool[7] = 0;
  __cxa_atexit(
    (void (*)(void *))boost::object_pool_scene_SLodNode_memory_SD_66c027::Destroy,
    glitch::scene::CLODSceneNode::LodNodePool,
    &unk_20D1280);
  (&glitch::scene::IShadowVolumeSceneNode::Material)[0] = 0;
  __cxa_atexit((void (*)(void *))((int (*)(glitch::video::CMaterial::Self **))sub_5ED4F0), glitch::scene::IShadowVolumeSceneNode::Material, &unk_20D1280);
  if ( byte_20D6E80 == 0 )
  {
    byte_20D6E80 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &dword_20D6D30, &unk_20D1280);
  }
  if ( byte_20D6E90 == 0 )
  {
    byte_20D6E90 = 1;
    if ( byte_20D6D20 == 0 )
    {
      byte_20D6D20 = 1;
      if ( &dword_20D6D30 != nullptr )
      {
        dword_20D6D30 = 0;
        dword_20D6D34 = 0;
        dword_20D6D38 = 0;
        dword_20D6D3C = 12;
        dword_20D6D40 = 32;
        dword_20D6D44 = 32;
        dword_20D6D48 = 0;
      }
    }
  }
  if ( byte_20D6EA0 == 0 )
  {
    byte_20D6EA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &dword_20D6D00, &unk_20D1280);
  }
  result = (char *)(&byte_20D6EB0);
  if ( byte_20D6EB0 == 0 )
  {
    byte_20D6EB0 = 1;
    result = (char *)(&byte_20D6CFC);
    if ( byte_20D6CFC == 0 )
    {
      byte_20D6CFC = 1;
      if ( &dword_20D6D00 != nullptr )
      {
        result = (char *)glf::SpinLock::Construct((glf::SpinLock::Self *)&dword_20D6D00);
        dword_20D6D04 = 0;
        dword_20D6D08 = 0;
        dword_20D6D0C = 0;
        dword_20D6D10 = 16;
        dword_20D6D14 = 32;
        dword_20D6D18 = 32;
        dword_20D6D1C = 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F83830  (binary VA: 0xf83830)
// Original: sub_F83830
// ----------------------------------------------------------------------------
unsigned int sub_F83830(uint32_t *a1, int a2, uint32_t *a3, int a4)
{
  int v4;
  unsigned int result;
  int v6;
  int v7;

  v4 = a1[79];
  result = a1[55];
  if ( *(uint32_t *)(v4 + 8) < result )
  {
    result = *(uint32_t *)(v4 + 12);
    if ( result <= 7 )
    {
      v6 = v4 + 24;
      goto LABEL_8;
    }
    if ( result == 8 )
    {
      while ( 1 )
      {
        v6 = v4 + 24;
        result = (*(int (**)(uint32_t *, int))(a1[81] + 4))(a1, v4 + 24);
        if ( (uint8_t)result == 0 )
          break;
        if ( *(uint8_t *)(v4 + 16) != 0 )
        {
          ++*a3;
          *(uint8_t *)(v4 + 16) = 0;
        }
        v7 = *(uint32_t *)(v4 + 8);
        *(uint32_t *)(v4 + 12) = 0;
        result = v7 + 1;
        *(uint32_t *)(v4 + 8) = result;
        if ( a1[55] <= result )
          return result;
LABEL_8:
        (*(void (**)(uint32_t *, int, uint32_t *, int, int, int, int))(a1[80] + 4))(a1, a2, a3, a4, v6, v4 + 12, 8);
        result = *(uint32_t *)(v4 + 12);
        if ( result != 8 )
          return result;
      }
      if ( *(uint8_t *)(v4 + 16) == 0 )
      {
        --*a3;
        *(uint8_t *)(v4 + 16) = 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F83910  (binary VA: 0xf83910)
// Original: sub_F83910
// ----------------------------------------------------------------------------
int sub_F83910(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 316);
  if ( *(uint8_t *)(a1 + 172) == 0 )
  {
    *(uint32_t *)(result + 8) = 0;
    *(uint32_t *)(result + 12) = 0;
    *(uint8_t *)(result + 16) = 0;
    *(uint32_t *)(result + 20) = a2;
    if ( a2 != 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 4;
      return (**(int (***)(int))a1)(a1);
    }
    else
    {
      *(uint32_t *)(result + 4) = (uint32_t)(uintptr_t)(sub_F83830);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F83A50  (binary VA: 0xf83a50)
// Original: sub_F83A50
// ----------------------------------------------------------------------------
int sub_F83A50(uint32_t *a1, char a2)
{
  int result;
  uint8_t *v3;

  result = a1[6];
  v3 = *(uint8_t **)result;
  *v3 = a2;
  *(uint32_t *)result = (uint32_t)(uintptr_t)(v3 + 1);
  if ( (*(uint32_t *)(result + 4))-- == 1 )
  {
    result = (*(int (**)(uint32_t *))(result + 12))(a1);
    if ( (uint8_t)result == 0 )
    {
      *(uint32_t *)(*a1 + 20) = 24;
      return G4_VCALL<int>(a1, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F83AA0  (binary VA: 0xf83aa0)
// Original: sub_F83AA0
// ----------------------------------------------------------------------------
int sub_F83AA0(uint32_t *a1)
{
  int v1;
  uint8_t *v2;
  bool v3;
  int result;
  uint8_t *v5;

  v1 = a1[6];
  v2 = *(uint8_t **)v1;
  *v2 = -1;
  *(uint32_t *)v1 = (uint32_t)(uintptr_t)(v2 + 1);
  v3 = (*(uint32_t *)(v1 + 4))-- == 1;
  if ( v3 && (*(uint8_t (**)(uint32_t *))(v1 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  result = a1[6];
  v5 = *(uint8_t **)result;
  *v5 = -39;
  *(uint32_t *)result = (uint32_t)(uintptr_t)(v5 + 1);
  v3 = (*(uint32_t *)(result + 4))-- == 1;
  if ( v3 )
  {
    result = (*(int (**)(uint32_t *))(result + 12))(a1);
    if ( (uint8_t)result == 0 )
    {
      *(uint32_t *)(*a1 + 20) = 24;
      return G4_VCALL<int>(a1, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F83B30  (binary VA: 0xf83b30)
// Original: sub_F83B30
// ----------------------------------------------------------------------------
int sub_F83B30(uint32_t *a1, char a2, unsigned int a3)
{
  int v3;
  uint8_t *v4;
  bool v5;
  int v6;
  uint8_t *v7;
  int v8;
  uint8_t *v9;
  int result;
  uint8_t *v11;

  if ( a3 > 0xFFFD )
  {
    *(uint32_t *)(*a1 + 20) = 11;
    G4_VCALL<void>(a1, 0);
  }
  v3 = a1[6];
  v4 = *(uint8_t **)v3;
  *v4 = -1;
  *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v4 + 1);
  v5 = (*(uint32_t *)(v3 + 4))-- == 1;
  if ( v5 && (*(uint8_t (**)(uint32_t *))(v3 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  v6 = a1[6];
  v7 = *(uint8_t **)v6;
  *v7 = a2;
  *(uint32_t *)v6 = (uint32_t)(uintptr_t)(v7 + 1);
  v5 = (*(uint32_t *)(v6 + 4))-- == 1;
  if ( v5 && (*(uint8_t (**)(uint32_t *))(v6 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  v8 = a1[6];
  v9 = *(uint8_t **)v8;
  *v9 = (uint16_t)(a3 + 2) >> 8;
  *(uint32_t *)v8 = (uint32_t)(uintptr_t)(v9 + 1);
  v5 = (*(uint32_t *)(v8 + 4))-- == 1;
  if ( v5 && (*(uint8_t (**)(uint32_t *))(v8 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  result = a1[6];
  v11 = *(uint8_t **)result;
  *v11 = a3 + 2;
  *(uint32_t *)result = (uint32_t)(uintptr_t)(v11 + 1);
  v5 = (*(uint32_t *)(result + 4))-- == 1;
  if ( v5 )
  {
    result = (*(int (**)(uint32_t *))(result + 12))(a1);
    if ( (uint8_t)result == 0 )
    {
      *(uint32_t *)(*a1 + 20) = 24;
      return G4_VCALL<int>(a1, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F83C70  (binary VA: 0xf83c70)
// Original: sub_F83C70
// ----------------------------------------------------------------------------
int sub_F83C70(uint32_t *a1, char a2)
{
  int v3;
  uint8_t *v4;
  bool v5;
  int v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  uint8_t *v11;
  int v12;
  uint8_t *v13;
  int v14;
  uint8_t *v15;
  int v16;
  int v17;
  uint8_t *v18;
  int v19;
  uint8_t *v20;
  int v21;
  int v22;
  uint8_t *v23;
  int v24;
  uint8_t *v25;
  int v26;
  uint8_t *v27;
  int result;
  int v29;
  int v30;
  int v31;
  uint8_t *v32;
  int v33;
  uint8_t *v34;
  int v35;
  uint8_t *v36;
  char v37;
  char v38;

  v3 = a1[6];
  v4 = *(uint8_t **)v3;
  *v4 = -1;
  *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v4 + 1);
  v5 = (*(uint32_t *)(v3 + 4))-- == 1;
  if ( v5 )
  {
    v38 = a2;
    v37 = (*(int (**)(uint32_t *))(v3 + 12))(a1);
    a2 = v38;
    if ( v37 == 0 )
    {
      *(uint32_t *)(*a1 + 20) = 24;
      G4_VCALL<void>(a1, 0);
      a2 = v38;
    }
  }
  v6 = a1[6];
  v7 = *(uint8_t **)v6;
  *v7 = a2;
  v8 = *(uint32_t *)(v6 + 4) - 1;
  v5 = *(uint32_t *)(v6 + 4) == 1;
  *(uint32_t *)v6 = (uint32_t)(uintptr_t)(v7 + 1);
  *(uint32_t *)(v6 + 4) = v8;
  if ( v5 && (*(uint8_t (**)(uint32_t *))(v6 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  v9 = 3 * a1[14] + 8;
  v10 = a1[6];
  v11 = *(uint8_t **)v10;
  *v11 = (uint16_t)(3 * *((uint16_t *)a1 + 28) + 8) >> 8;
  *(uint32_t *)v10 = (uint32_t)(uintptr_t)(v11 + 1);
  v5 = (*(uint32_t *)(v10 + 4))-- == 1;
  if ( v5 && (*(uint8_t (**)(uint32_t *))(v10 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  v12 = a1[6];
  v13 = *(uint8_t **)v12;
  *v13 = v9;
  *(uint32_t *)v12 = (uint32_t)(uintptr_t)(v13 + 1);
  v5 = (*(uint32_t *)(v12 + 4))-- == 1;
  if ( v5 && (*(uint8_t (**)(uint32_t *))(v12 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  if ( (int)a1[8] > 0xFFFF || (int)a1[7] > 0xFFFF )
  {
    *(uint32_t *)(*a1 + 20) = 41;
    *(uint32_t *)(*a1 + 24) = 0xFFFF;
    G4_VCALL<void>(a1, 0);
  }
  v14 = a1[6];
  v15 = *(uint8_t **)v14;
  *v15 = a1[13];
  *(uint32_t *)v14 = (uint32_t)(uintptr_t)(v15 + 1);
  v5 = (*(uint32_t *)(v14 + 4))-- == 1;
  if ( v5 && (*(uint8_t (**)(uint32_t *))(v14 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  v16 = a1[6];
  v17 = a1[8];
  v18 = *(uint8_t **)v16;
  *v18 = BYTE1(v17);
  *(uint32_t *)v16 = (uint32_t)(uintptr_t)(v18 + 1);
  v5 = (*(uint32_t *)(v16 + 4))-- == 1;
  if ( v5 && (*(uint8_t (**)(uint32_t *))(v16 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  v19 = a1[6];
  v20 = *(uint8_t **)v19;
  *v20 = v17;
  *(uint32_t *)v19 = (uint32_t)(uintptr_t)(v20 + 1);
  v5 = (*(uint32_t *)(v19 + 4))-- == 1;
  if ( v5 && (*(uint8_t (**)(uint32_t *))(v19 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  v21 = a1[6];
  v22 = a1[7];
  v23 = *(uint8_t **)v21;
  *v23 = BYTE1(v22);
  *(uint32_t *)v21 = (uint32_t)(uintptr_t)(v23 + 1);
  v5 = (*(uint32_t *)(v21 + 4))-- == 1;
  if ( v5 && (*(uint8_t (**)(uint32_t *))(v21 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  v24 = a1[6];
  v25 = *(uint8_t **)v24;
  *v25 = v22;
  *(uint32_t *)v24 = (uint32_t)(uintptr_t)(v25 + 1);
  v5 = (*(uint32_t *)(v24 + 4))-- == 1;
  if ( v5 && (*(uint8_t (**)(uint32_t *))(v24 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  v26 = a1[6];
  v27 = *(uint8_t **)v26;
  *v27 = a1[14];
  *(uint32_t *)v26 = (uint32_t)(uintptr_t)(v27 + 1);
  v5 = (*(uint32_t *)(v26 + 4))-- == 1;
  if ( v5 && (*(uint8_t (**)(uint32_t *))(v26 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  result = a1[14];
  v29 = a1[16];
  if ( result > 0 )
  {
    v30 = 0;
    do
    {
      while ( 1 )
      {
        v35 = a1[6];
        v36 = *(uint8_t **)v35;
        *v36 = *(uint32_t *)v29;
        *(uint32_t *)v35 = (uint32_t)(uintptr_t)(v36 + 1);
        v5 = (*(uint32_t *)(v35 + 4))-- == 1;
        if ( v5 && (*(uint8_t (**)(uint32_t *))(v35 + 12))(a1) == 0 )
        {
          *(uint32_t *)(*a1 + 20) = 24;
          G4_VCALL<void>(a1, 0);
        }
        v31 = a1[6];
        v32 = *(uint8_t **)v31;
        *v32 = *(uint8_t *)(v29 + 12) + 16 * *(uint8_t *)(v29 + 8);
        v33 = *(uint32_t *)(v31 + 4) - 1;
        v5 = *(uint32_t *)(v31 + 4) == 1;
        *(uint32_t *)v31 = (uint32_t)(uintptr_t)(v32 + 1);
        *(uint32_t *)(v31 + 4) = v33;
        if ( v5 && (*(uint8_t (**)(uint32_t *))(v31 + 12))(a1) == 0 )
        {
          *(uint32_t *)(*a1 + 20) = 24;
          G4_VCALL<void>(a1, 0);
        }
        result = a1[6];
        v34 = *(uint8_t **)result;
        *v34 = *(uint32_t *)(v29 + 16);
        *(uint32_t *)result = (uint32_t)(uintptr_t)(v34 + 1);
        v5 = (*(uint32_t *)(result + 4))-- == 1;
        if ( v5 )
        {
          result = (*(int (**)(uint32_t *))(result + 12))(a1);
          if ( (uint8_t)result == 0 )
            break;
        }
        ++v30;
        v29 += 84;
        if ( a1[14] <= v30 )
          return result;
      }
      ++v30;
      v29 += 84;
      *(uint32_t *)(*a1 + 20) = 24;
      result = G4_VCALL<int>(a1, 0);
    }
    while ( a1[14] > v30 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F840B0  (binary VA: 0xf840b0)
// Original: sub_F840B0
// ----------------------------------------------------------------------------
int sub_F840B0(uint32_t *a1)
{
  uint32_t *v1;
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int i;
  int v9;
  int v11;
  uint8_t *v12;
  bool v13;
  int v14;
  uint8_t *v15;
  int v16;
  uint8_t *v17;
  int v18;
  uint8_t *v19;
  int v20;
  uint8_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  int16_t v24;
  int v25;
  uint8_t *v26;
  int v27;
  int v28;
  uint8_t *v29;
  char v30;
  char v31;
  char v32;
  char v33;
  char v34;
  char v35;
  char v36;
  int v37;
  char v38;
  int j;
  int v40;
  char v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  char v48;
  int v49;
  int v50;
  int v51;
  int v52;

  v1 = a1;
  v52 = 0;
  v2 = a1[14];
  v51 = a1[16];
  if ( v2 > 0 )
  {
    v50 = 0;
    v3 = a1;
    do
    {
      v4 = *(uint32_t *)(v51 + 16);
      v48 = v4;
      v5 = v3[v4 + 17];
      if ( v5 == 0 )
      {
        *(uint32_t *)(*v3 + 20) = 52;
        *(uint32_t *)(*v3 + 24) = v4;
        v47 = v3;
        G4_VCALL<void>(v3, 0);
        v3 = v47;
      }
      v6 = 0;
      for ( i = 0; i != 64; ++i )
      {
        if ( *(uint16_t *)(v5 + 2 * i) > 0xFFu )
          v6 = 1;
        v9 = v6;
      }
      if ( *(uint8_t *)(v5 + 128) == 0 )
      {
        v11 = v3[6];
        v12 = *(uint8_t **)v11;
        *v12 = -1;
        *(uint32_t *)v11 = (uint32_t)(uintptr_t)(v12 + 1);
        v13 = (*(uint32_t *)(v11 + 4))-- == 1;
        if ( v13 )
        {
          v42 = v3;
          v31 = (*(int (**)(uint32_t *))(v11 + 12))(v3);
          v3 = v42;
          if ( v31 == 0 )
          {
            *(uint32_t *)(*v42 + 20) = 24;
            G4_VCALL<void>(v42, 0);
            v3 = v42;
          }
        }
        v14 = v3[6];
        v15 = *(uint8_t **)v14;
        *v15 = -37;
        *(uint32_t *)v14 = (uint32_t)(uintptr_t)(v15 + 1);
        v13 = (*(uint32_t *)(v14 + 4))-- == 1;
        if ( v13 )
        {
          v46 = v3;
          v35 = (*(int (**)(uint32_t *))(v14 + 12))(v3);
          v3 = v46;
          if ( v35 == 0 )
          {
            *(uint32_t *)(*v46 + 20) = 24;
            G4_VCALL<void>(v46, 0);
            v3 = v46;
          }
        }
        v16 = v3[6];
        v17 = *(uint8_t **)v16;
        *v17 = 0;
        *(uint32_t *)v16 = (uint32_t)(uintptr_t)(v17 + 1);
        v13 = (*(uint32_t *)(v16 + 4))-- == 1;
        if ( v13 )
        {
          v45 = v3;
          v34 = (*(int (**)(uint32_t *))(v16 + 12))(v3);
          v3 = v45;
          if ( v34 == 0 )
          {
            *(uint32_t *)(*v45 + 20) = 24;
            G4_VCALL<void>(v45, 0);
            v3 = v45;
          }
        }
        v18 = v3[6];
        v19 = *(uint8_t **)v18;
        *v19 = v9 == 0 ? 67 : -125;
        *(uint32_t *)v18 = (uint32_t)(uintptr_t)(v19 + 1);
        v13 = (*(uint32_t *)(v18 + 4))-- == 1;
        if ( v13 )
        {
          v44 = v3;
          v33 = (*(int (**)(uint32_t *))(v18 + 12))(v3);
          v3 = v44;
          if ( v33 == 0 )
          {
            *(uint32_t *)(*v44 + 20) = 24;
            G4_VCALL<void>(v44, 0);
            v3 = v44;
          }
        }
        v20 = v3[6];
        v21 = *(uint8_t **)v20;
        *v21 = 16 * v9 + v48;
        *(uint32_t *)v20 = (uint32_t)(uintptr_t)(v21 + 1);
        v13 = (*(uint32_t *)(v20 + 4))-- == 1;
        if ( v13 )
        {
          v43 = v3;
          v32 = (*(int (**)(uint32_t *))(v20 + 12))(v3);
          v3 = v43;
          if ( v32 == 0 )
          {
            *(uint32_t *)(*v43 + 20) = 24;
            G4_VCALL<void>(v43, 0);
            v3 = v43;
          }
        }
        v22 = &jpeg_natural_order;
        v49 = v5;
        v23 = v3;
        v40 = v9;
        do
        {
          while ( 1 )
          {
            v24 = *(uint16_t *)(v49 + 2 * *v22);
            if ( v40 != 0 )
            {
              v28 = v23[6];
              v29 = *(uint8_t **)v28;
              *v29 = HIBYTE(v24);
              *(uint32_t *)v28 = (uint32_t)(uintptr_t)(v29 + 1);
              v13 = (*(uint32_t *)(v28 + 4))-- == 1;
              if ( v13 )
              {
                v41 = v24;
                v30 = (*(int (**)(uint32_t *))(v28 + 12))(v23);
                LOBYTE(v24) = v41;
                if ( v30 == 0 )
                {
                  *(uint32_t *)(*v23 + 20) = 24;
                  G4_VCALL<void>(v23, 0);
                  LOBYTE(v24) = v41;
                }
              }
            }
            v25 = v23[6];
            v26 = *(uint8_t **)v25;
            *v26 = v24;
            v27 = *(uint32_t *)(v25 + 4) - 1;
            v13 = *(uint32_t *)(v25 + 4) == 1;
            *(uint32_t *)v25 = (uint32_t)(uintptr_t)(v26 + 1);
            *(uint32_t *)(v25 + 4) = v27;
            if ( v13 && (*(uint8_t (**)(uint32_t *))(v25 + 12))(v23) == 0 )
              break;
            if ( ++v22 == (uint32_t *)&unk_1CBD960 )
              goto LABEL_25;
          }
          ++v22;
          *(uint32_t *)(*v23 + 20) = 24;
          G4_VCALL<void>(v23, 0);
        }
        while ( v22 != (uint32_t *)&unk_1CBD960 );
LABEL_25:
        v3 = v23;
        v9 = v40;
        *(uint8_t *)(v49 + 128) = 1;
      }
      v52 += v9;
      ++v50;
      v51 += 84;
      v2 = v3[14];
    }
    while ( v2 > v50 );
    v1 = v3;
  }
  if ( *((uint8_t *)v1 + 173) != 0 )
    return sub_F83C70(v1, 201);
  v36 = *((uint8_t *)v1 + 208);
  if ( v36 == 0 )
  {
    if ( v1[13] != 8 )
      return sub_F83C70(v1, 193);
    v37 = v1[16];
    v38 = 1;
    if ( v2 > 0 )
    {
      for ( j = 0; j != v2; ++j )
      {
        while ( *(int *)(v37 + 20) > 1 )
        {
          ++j;
          v38 = 0;
          v37 += 84;
          if ( j == v2 )
            goto LABEL_50;
        }
        if ( *(int *)(v37 + 24) >= 2 )
          v38 = 0;
        v37 += 84;
      }
LABEL_50:
      if ( v38 == 0 )
        return sub_F83C70(v1, 193);
    }
    if ( v52 == 0 )
      return sub_F83C70(v1, 192);
    *(uint32_t *)(*v1 + 20) = 75;
    G4_VCALL<void>(v1, 4, 0);
    if ( *((uint8_t *)v1 + 173) != 0 )
      return sub_F83C70(v1, 201);
    v36 = *((uint8_t *)v1 + 208);
  }
  if ( v36 == 0 )
    return sub_F83C70(v1, 193);
  return sub_F83C70(v1, 194);
}

// ----------------------------------------------------------------------------
// Function: sub_F84510  (binary VA: 0xf84510)
// Original: sub_F84510
// ----------------------------------------------------------------------------
int sub_F84510(int result, int a2, char a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint8_t *v7;
  bool v8;
  int v9;
  uint8_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint8_t *v15;
  int v16;
  uint8_t *v17;
  int v18;
  uint8_t *v19;
  int i;
  int v21;
  uint8_t *v22;
  uint8_t *v23;
  char v24;
  int v25;
  char v26;

  v3 = a2;
  v4 = (uint32_t *)result;
  if ( a3 != 0 )
  {
    v5 = *(uint32_t *)(result + 4 * a2 + 100);
    v3 = a2 + 16;
  }
  else
  {
    v5 = *(uint32_t *)(result + 4 * a2 + 84);
  }
  if ( v5 == 0 )
  {
    *(uint32_t *)(*(uint32_t *)result + 20) = 50;
    *(uint32_t *)(*(uint32_t *)result + 24) = v3;
    result = (**(int (***)(int))result)(result);
  }
  if ( *(uint8_t *)(v5 + 273) == 0 )
  {
    v6 = v4[6];
    v7 = *(uint8_t **)v6;
    *v7 = -1;
    *(uint32_t *)v6 = (uint32_t)(uintptr_t)(v7 + 1);
    v8 = (*(uint32_t *)(v6 + 4))-- == 1;
    if ( v8 && (*(uint8_t (**)(uint32_t *))(v6 + 12))(v4) == 0 )
    {
      *(uint32_t *)(*v4 + 20) = 24;
      G4_VCALL<void>(v4, 0);
    }
    v9 = v4[6];
    v10 = *(uint8_t **)v9;
    *v10 = -60;
    *(uint32_t *)v9 = (uint32_t)(uintptr_t)(v10 + 1);
    v8 = (*(uint32_t *)(v9 + 4))-- == 1;
    if ( v8 && (*(uint8_t (**)(uint32_t *))(v9 + 12))(v4) == 0 )
    {
      *(uint32_t *)(*v4 + 20) = 24;
      G4_VCALL<void>(v4, 0);
    }
    v11 = 1;
    v12 = 0;
    do
    {
      v13 = *(uint8_t *)(v5 + v11++);
      v12 += v13;
    }
    while ( v11 != 17 );
    v14 = v4[6];
    v25 = v12;
    v26 = v12 + 19;
    v24 = (uint16_t)(v12 + 19) >> 8;
    v15 = *(uint8_t **)v14;
    *v15 = v24;
    *(uint32_t *)v14 = (uint32_t)(uintptr_t)(v15 + 1);
    v8 = (*(uint32_t *)(v14 + 4))-- == 1;
    if ( v8 && (*(uint8_t (**)(uint32_t *))(v14 + 12))(v4) == 0 )
    {
      *(uint32_t *)(*v4 + 20) = 24;
      G4_VCALL<void>(v4, 0);
    }
    v16 = v4[6];
    v17 = *(uint8_t **)v16;
    *v17 = v26;
    *(uint32_t *)v16 = (uint32_t)(uintptr_t)(v17 + 1);
    v8 = (*(uint32_t *)(v16 + 4))-- == 1;
    if ( v8 && (*(uint8_t (**)(uint32_t *))(v16 + 12))(v4) == 0 )
    {
      *(uint32_t *)(*v4 + 20) = 24;
      G4_VCALL<void>(v4, 0);
    }
    v18 = v4[6];
    v19 = *(uint8_t **)v18;
    *v19 = v3;
    *(uint32_t *)v18 = (uint32_t)(uintptr_t)(v19 + 1);
    v8 = (*(uint32_t *)(v18 + 4))-- == 1;
    if ( v8 && (*(uint8_t (**)(uint32_t *))(v18 + 12))(v4) == 0 )
    {
      *(uint32_t *)(*v4 + 20) = 24;
      G4_VCALL<void>(v4, 0);
    }
    for ( i = 1; i != 17; ++i )
    {
      while ( 1 )
      {
        v21 = v4[6];
        v22 = *(uint8_t **)v21;
        *v22 = *(uint8_t *)(v5 + i);
        *(uint32_t *)v21 = (uint32_t)(uintptr_t)(v22 + 1);
        v8 = (*(uint32_t *)(v21 + 4))-- == 1;
        if ( v8 && (*(uint8_t (**)(uint32_t *))(v21 + 12))(v4) == 0 )
          break;
        if ( ++i == 17 )
          goto LABEL_20;
      }
      *(uint32_t *)(*v4 + 20) = 24;
      G4_VCALL<void>(v4, 0);
    }
LABEL_20:
    result = v25;
    if ( v25 != 0 )
    {
      LOWORD(i) = 0;
      do
      {
        while ( 1 )
        {
          result = v4[6];
          v23 = *(uint8_t **)result;
          *v23 = *(uint8_t *)(v5 + i + 17);
          *(uint32_t *)result = (uint32_t)(uintptr_t)(v23 + 1);
          v8 = (*(uint32_t *)(result + 4))-- == 1;
          if ( v8 )
          {
            result = (*(int (**)(uint32_t *))(result + 12))(v4);
            if ( (uint8_t)result == 0 )
              break;
          }
          if ( ++i == v25 )
            goto LABEL_26;
        }
        ++i;
        *(uint32_t *)(*v4 + 20) = 24;
        result = G4_VCALL<int>(v4, 0);
      }
      while ( i != v25 );
    }
LABEL_26:
    *(uint8_t *)(v5 + 273) = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F847B0  (binary VA: 0xf847b0)
// Original: sub_F847B0
// ----------------------------------------------------------------------------
int sub_F847B0(int a1)
{
  int v1;
  int i;
  int v3;
  int v4;
  uint8_t *v5;
  bool v6;
  int v7;
  uint8_t *v8;
  int v9;
  uint8_t *v10;
  int v11;
  uint8_t *v12;
  int v13;
  int v14;
  uint8_t *v15;
  int v16;
  uint8_t *v17;
  int v18;
  uint8_t *v19;
  int v20;
  uint8_t *v21;
  int v22;
  int v23;
  uint8_t *v24;
  int v25;
  uint8_t *v26;
  int v27;
  uint8_t *v28;
  int v29;
  int v30;
  uint32_t *v31;
  uint8_t *v32;
  int v33;
  int v34;
  int v35;
  uint8_t *v36;
  int v37;
  uint8_t *v38;
  int v39;
  uint8_t *v40;
  int v41;
  uint8_t *v42;
  int result;
  char v44;
  int v45;

  v45 = *(uint32_t *)(a1 + 328);
  if ( *(uint8_t *)(a1 + 173) == 0 )
  {
    v1 = *(uint32_t *)(a1 + 224);
    if ( v1 > 0 )
    {
      for ( i = 0; i < v1; ++i )
      {
        v3 = *(uint32_t *)(a1 + 4 * i + 228);
        if ( *(uint8_t *)(a1 + 208) != 0 )
        {
          if ( *(uint32_t *)(a1 + 296) == 0 )
          {
            if ( *(uint32_t *)(a1 + 304) == 0 )
            {
              sub_F84510(a1, *(uint32_t *)(v3 + 20), 0);
              v1 = *(uint32_t *)(a1 + 224);
            }
            continue;
          }
        }
        else
        {
          sub_F84510(a1, *(uint32_t *)(v3 + 20), 0);
        }
        sub_F84510(a1, *(uint32_t *)(v3 + 24), 1);
        v1 = *(uint32_t *)(a1 + 224);
      }
    }
  }
  if ( *(uint32_t *)(a1 + 184) != *(uint32_t *)(v45 + 28) )
  {
    v4 = *(uint32_t *)(a1 + 24);
    v5 = *(uint8_t **)v4;
    *v5 = -1;
    *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v5 + 1);
    v6 = (*(uint32_t *)(v4 + 4))-- == 1;
    if ( v6 && (*(uint8_t (**)(int))(v4 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v7 = *(uint32_t *)(a1 + 24);
    v8 = *(uint8_t **)v7;
    *v8 = -35;
    *(uint32_t *)v7 = (uint32_t)(uintptr_t)(v8 + 1);
    v6 = (*(uint32_t *)(v7 + 4))-- == 1;
    if ( v6 && (*(uint8_t (**)(int))(v7 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v9 = *(uint32_t *)(a1 + 24);
    v10 = *(uint8_t **)v9;
    *v10 = 0;
    *(uint32_t *)v9 = (uint32_t)(uintptr_t)(v10 + 1);
    v6 = (*(uint32_t *)(v9 + 4))-- == 1;
    if ( v6 && (*(uint8_t (**)(int))(v9 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v11 = *(uint32_t *)(a1 + 24);
    v12 = *(uint8_t **)v11;
    *v12 = 4;
    *(uint32_t *)v11 = (uint32_t)(uintptr_t)(v12 + 1);
    v6 = (*(uint32_t *)(v11 + 4))-- == 1;
    if ( v6 && (*(uint8_t (**)(int))(v11 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v13 = *(uint32_t *)(a1 + 24);
    v14 = *(uint32_t *)(a1 + 184);
    v15 = *(uint8_t **)v13;
    *v15 = BYTE1(v14);
    *(uint32_t *)v13 = (uint32_t)(uintptr_t)(v15 + 1);
    v6 = (*(uint32_t *)(v13 + 4))-- == 1;
    if ( v6 && (*(uint8_t (**)(int))(v13 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v16 = *(uint32_t *)(a1 + 24);
    v17 = *(uint8_t **)v16;
    *v17 = v14;
    *(uint32_t *)v16 = (uint32_t)(uintptr_t)(v17 + 1);
    v6 = (*(uint32_t *)(v16 + 4))-- == 1;
    if ( v6 && (*(uint8_t (**)(int))(v16 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    *(uint32_t *)(v45 + 28) = *(uint32_t *)(a1 + 184);
  }
  v18 = *(uint32_t *)(a1 + 24);
  v19 = *(uint8_t **)v18;
  *v19 = -1;
  *(uint32_t *)v18 = (uint32_t)(uintptr_t)(v19 + 1);
  v6 = (*(uint32_t *)(v18 + 4))-- == 1;
  if ( v6 && (*(uint8_t (**)(int))(v18 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v20 = *(uint32_t *)(a1 + 24);
  v21 = *(uint8_t **)v20;
  *v21 = -38;
  *(uint32_t *)v20 = (uint32_t)(uintptr_t)(v21 + 1);
  v6 = (*(uint32_t *)(v20 + 4))-- == 1;
  if ( v6 && (*(uint8_t (**)(int))(v20 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v22 = 2 * *(uint32_t *)(a1 + 224) + 6;
  v23 = *(uint32_t *)(a1 + 24);
  v24 = *(uint8_t **)v23;
  *v24 = (uint16_t)(2 * *(uint16_t *)(a1 + 224) + 6) >> 8;
  *(uint32_t *)v23 = (uint32_t)(uintptr_t)(v24 + 1);
  v6 = (*(uint32_t *)(v23 + 4))-- == 1;
  if ( v6 && (*(uint8_t (**)(int))(v23 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v25 = *(uint32_t *)(a1 + 24);
  v26 = *(uint8_t **)v25;
  *v26 = v22;
  *(uint32_t *)v25 = (uint32_t)(uintptr_t)(v26 + 1);
  v6 = (*(uint32_t *)(v25 + 4))-- == 1;
  if ( v6 && (*(uint8_t (**)(int))(v25 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v27 = *(uint32_t *)(a1 + 24);
  v28 = *(uint8_t **)v27;
  *v28 = *(uint32_t *)(a1 + 224);
  *(uint32_t *)v27 = (uint32_t)(uintptr_t)(v28 + 1);
  v6 = (*(uint32_t *)(v27 + 4))-- == 1;
  if ( v6 && (*(uint8_t (**)(int))(v27 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  if ( *(int *)(a1 + 224) > 0 )
  {
    v29 = 0;
    do
    {
      v30 = *(uint32_t *)(a1 + 24);
      v31 = *(uint32_t **)(a1 + 4 * v29 + 228);
      v32 = *(uint8_t **)v30;
      *v32 = *v31;
      *(uint32_t *)v30 = (uint32_t)(uintptr_t)(v32 + 1);
      v6 = (*(uint32_t *)(v30 + 4))-- == 1;
      if ( v6 && (*(uint8_t (**)(int))(v30 + 12))(a1) == 0 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
        (**(void (***)(int))a1)(a1);
      }
      v33 = v31[5];
      v34 = v31[6];
      if ( *(uint8_t *)(a1 + 208) != 0 )
      {
        if ( *(uint32_t *)(a1 + 296) == 0 )
        {
          LOBYTE(v34) = 16 * v33;
          if ( *(uint32_t *)(a1 + 304) != 0 )
          {
            LOBYTE(v34) = 0;
            v44 = 16 * v33;
            if ( *(uint8_t *)(a1 + 173) != 0 )
              LOBYTE(v34) = v44;
          }
        }
      }
      else
      {
        LOBYTE(v34) = 16 * v33 + v34;
      }
      v35 = *(uint32_t *)(a1 + 24);
      v36 = *(uint8_t **)v35;
      *v36 = v34;
      *(uint32_t *)v35 = (uint32_t)(uintptr_t)(v36 + 1);
      v6 = (*(uint32_t *)(v35 + 4))-- == 1;
      if ( v6 && (*(uint8_t (**)(int))(v35 + 12))(a1) == 0 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
        (**(void (***)(int))a1)(a1);
      }
      ++v29;
    }
    while ( v29 < *(uint32_t *)(a1 + 224) );
  }
  v37 = *(uint32_t *)(a1 + 24);
  v38 = *(uint8_t **)v37;
  *v38 = *(uint32_t *)(a1 + 296);
  *(uint32_t *)v37 = (uint32_t)(uintptr_t)(v38 + 1);
  v6 = (*(uint32_t *)(v37 + 4))-- == 1;
  if ( v6 && (*(uint8_t (**)(int))(v37 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v39 = *(uint32_t *)(a1 + 24);
  v40 = *(uint8_t **)v39;
  *v40 = *(uint32_t *)(a1 + 300);
  *(uint32_t *)v39 = (uint32_t)(uintptr_t)(v40 + 1);
  v6 = (*(uint32_t *)(v39 + 4))-- == 1;
  if ( v6 && (*(uint8_t (**)(int))(v39 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v41 = *(uint32_t *)(a1 + 24);
  v42 = *(uint8_t **)v41;
  *v42 = *(uint8_t *)(a1 + 308) + 16 * *(uint8_t *)(a1 + 304);
  result = *(uint32_t *)(v41 + 4) - 1;
  v6 = *(uint32_t *)(v41 + 4) == 1;
  *(uint32_t *)v41 = (uint32_t)(uintptr_t)(v42 + 1);
  *(uint32_t *)(v41 + 4) = result;
  if ( v6 )
  {
    result = (*(int (**)(int))(v41 + 12))(a1);
    if ( (uint8_t)result == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      return (**(int (***)(int))a1)(a1);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F84DA0  (binary VA: 0xf84da0)
// Original: sub_F84DA0
// ----------------------------------------------------------------------------
int sub_F84DA0(int a1)
{
  int v1;
  int v2;
  uint8_t *v3;
  bool v4;
  int result;
  uint8_t *v6;
  int v7;
  uint8_t *v8;
  int v9;
  uint8_t *v10;
  int v11;
  uint8_t *v12;
  int v13;
  uint8_t *v14;
  int v15;
  uint8_t *v16;
  int v17;
  uint8_t *v18;
  int v19;
  uint8_t *v20;
  int v21;
  uint8_t *v22;
  int v23;
  uint8_t *v24;
  int v25;
  uint8_t *v26;
  int v27;
  uint8_t *v28;
  int v29;
  uint8_t *v30;
  int v31;
  uint8_t *v32;
  int v33;
  uint8_t *v34;
  int v35;
  uint8_t *v36;
  int v37;
  uint8_t *v38;
  int v39;
  uint8_t *v40;
  int v41;
  uint8_t *v42;
  int v43;
  uint8_t *v44;
  int v45;
  uint8_t *v46;
  int v47;
  uint8_t *v48;
  int v49;
  uint8_t *v50;
  int v51;
  uint8_t *v52;
  int v53;
  uint8_t *v54;
  int v55;
  uint8_t *v56;
  int v57;
  uint8_t *v58;
  int v59;
  uint8_t *v60;
  int v61;
  uint8_t *v62;
  int v63;
  int16_t v64; // di
  uint8_t *v65;
  int v66;
  uint8_t *v67;
  int v68;
  int16_t v69; // di
  uint8_t *v70;
  int v71;
  uint8_t *v72;
  int v73;
  uint8_t *v74;
  uint8_t *v75;

  v1 = *(uint32_t *)(a1 + 24);
  v2 = *(uint32_t *)(a1 + 328);
  v3 = *(uint8_t **)v1;
  *v3 = -1;
  *(uint32_t *)v1 = (uint32_t)(uintptr_t)(v3 + 1);
  v4 = (*(uint32_t *)(v1 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v1 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  result = *(uint32_t *)(a1 + 24);
  v6 = *(uint8_t **)result;
  *v6 = -40;
  *(uint32_t *)result = (uint32_t)(uintptr_t)(v6 + 1);
  v4 = (*(uint32_t *)(result + 4))-- == 1;
  if ( !v4 || (uint8_t)(result = (*(int (**)(int))(result + 12))(a1)) != 0 )
  {
    *(uint32_t *)(v2 + 28) = 0;
    if ( *(uint8_t *)(a1 + 192) == 0 )
      goto LABEL_4;
  }
  else
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    result = (**(int (***)(int))a1)(a1);
    *(uint32_t *)(v2 + 28) = 0;
    if ( *(uint8_t *)(a1 + 192) == 0 )
      goto LABEL_4;
  }
  v39 = *(uint32_t *)(a1 + 24);
  v40 = *(uint8_t **)v39;
  *v40 = -1;
  *(uint32_t *)v39 = (uint32_t)(uintptr_t)(v40 + 1);
  v4 = (*(uint32_t *)(v39 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v39 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v41 = *(uint32_t *)(a1 + 24);
  v42 = *(uint8_t **)v41;
  *v42 = -32;
  *(uint32_t *)v41 = (uint32_t)(uintptr_t)(v42 + 1);
  v4 = (*(uint32_t *)(v41 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v41 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v43 = *(uint32_t *)(a1 + 24);
  v44 = *(uint8_t **)v43;
  *v44 = 0;
  *(uint32_t *)v43 = (uint32_t)(uintptr_t)(v44 + 1);
  v4 = (*(uint32_t *)(v43 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v43 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v45 = *(uint32_t *)(a1 + 24);
  v46 = *(uint8_t **)v45;
  *v46 = 16;
  *(uint32_t *)v45 = (uint32_t)(uintptr_t)(v46 + 1);
  v4 = (*(uint32_t *)(v45 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v45 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v47 = *(uint32_t *)(a1 + 24);
  v48 = *(uint8_t **)v47;
  *v48 = 74;
  *(uint32_t *)v47 = (uint32_t)(uintptr_t)(v48 + 1);
  v4 = (*(uint32_t *)(v47 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v47 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v49 = *(uint32_t *)(a1 + 24);
  v50 = *(uint8_t **)v49;
  *v50 = 70;
  *(uint32_t *)v49 = (uint32_t)(uintptr_t)(v50 + 1);
  v4 = (*(uint32_t *)(v49 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v49 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v51 = *(uint32_t *)(a1 + 24);
  v52 = *(uint8_t **)v51;
  *v52 = 73;
  *(uint32_t *)v51 = (uint32_t)(uintptr_t)(v52 + 1);
  v4 = (*(uint32_t *)(v51 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v51 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v53 = *(uint32_t *)(a1 + 24);
  v54 = *(uint8_t **)v53;
  *v54 = 70;
  *(uint32_t *)v53 = (uint32_t)(uintptr_t)(v54 + 1);
  v4 = (*(uint32_t *)(v53 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v53 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v55 = *(uint32_t *)(a1 + 24);
  v56 = *(uint8_t **)v55;
  *v56 = 0;
  *(uint32_t *)v55 = (uint32_t)(uintptr_t)(v56 + 1);
  v4 = (*(uint32_t *)(v55 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v55 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v57 = *(uint32_t *)(a1 + 24);
  v58 = *(uint8_t **)v57;
  *v58 = *(uint8_t *)(a1 + 193);
  *(uint32_t *)v57 = (uint32_t)(uintptr_t)(v58 + 1);
  v4 = (*(uint32_t *)(v57 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v57 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v59 = *(uint32_t *)(a1 + 24);
  v60 = *(uint8_t **)v59;
  *v60 = *(uint8_t *)(a1 + 194);
  *(uint32_t *)v59 = (uint32_t)(uintptr_t)(v60 + 1);
  v4 = (*(uint32_t *)(v59 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v59 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v61 = *(uint32_t *)(a1 + 24);
  v62 = *(uint8_t **)v61;
  *v62 = *(uint8_t *)(a1 + 195);
  *(uint32_t *)v61 = (uint32_t)(uintptr_t)(v62 + 1);
  v4 = (*(uint32_t *)(v61 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v61 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v63 = *(uint32_t *)(a1 + 24);
  v64 = *(uint16_t *)(a1 + 196);
  v65 = *(uint8_t **)v63;
  *v65 = HIBYTE(v64);
  *(uint32_t *)v63 = (uint32_t)(uintptr_t)(v65 + 1);
  v4 = (*(uint32_t *)(v63 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v63 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v66 = *(uint32_t *)(a1 + 24);
  v67 = *(uint8_t **)v66;
  *v67 = v64;
  *(uint32_t *)v66 = (uint32_t)(uintptr_t)(v67 + 1);
  v4 = (*(uint32_t *)(v66 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v66 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v68 = *(uint32_t *)(a1 + 24);
  v69 = *(uint16_t *)(a1 + 198);
  v70 = *(uint8_t **)v68;
  *v70 = HIBYTE(v69);
  *(uint32_t *)v68 = (uint32_t)(uintptr_t)(v70 + 1);
  v4 = (*(uint32_t *)(v68 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v68 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v71 = *(uint32_t *)(a1 + 24);
  v72 = *(uint8_t **)v71;
  *v72 = v69;
  *(uint32_t *)v71 = (uint32_t)(uintptr_t)(v72 + 1);
  v4 = (*(uint32_t *)(v71 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v71 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  v73 = *(uint32_t *)(a1 + 24);
  v74 = *(uint8_t **)v73;
  *v74 = 0;
  *(uint32_t *)v73 = (uint32_t)(uintptr_t)(v74 + 1);
  v4 = (*(uint32_t *)(v73 + 4))-- == 1;
  if ( v4 && (*(uint8_t (**)(int))(v73 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
    (**(void (***)(int))a1)(a1);
  }
  result = *(uint32_t *)(a1 + 24);
  v75 = *(uint8_t **)result;
  *v75 = 0;
  *(uint32_t *)result = (uint32_t)(uintptr_t)(v75 + 1);
  v4 = (*(uint32_t *)(result + 4))-- == 1;
  if ( v4 )
  {
    result = (*(int (**)(int))(result + 12))(a1);
    if ( (uint8_t)result == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      result = (**(int (***)(int))a1)(a1);
    }
  }
LABEL_4:
  if ( *(uint8_t *)(a1 + 200) != 0 )
  {
    v7 = *(uint32_t *)(a1 + 24);
    v8 = *(uint8_t **)v7;
    *v8 = -1;
    *(uint32_t *)v7 = (uint32_t)(uintptr_t)(v8 + 1);
    v4 = (*(uint32_t *)(v7 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v7 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v9 = *(uint32_t *)(a1 + 24);
    v10 = *(uint8_t **)v9;
    *v10 = -18;
    *(uint32_t *)v9 = (uint32_t)(uintptr_t)(v10 + 1);
    v4 = (*(uint32_t *)(v9 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v9 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v11 = *(uint32_t *)(a1 + 24);
    v12 = *(uint8_t **)v11;
    *v12 = 0;
    *(uint32_t *)v11 = (uint32_t)(uintptr_t)(v12 + 1);
    v4 = (*(uint32_t *)(v11 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v11 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v13 = *(uint32_t *)(a1 + 24);
    v14 = *(uint8_t **)v13;
    *v14 = 14;
    *(uint32_t *)v13 = (uint32_t)(uintptr_t)(v14 + 1);
    v4 = (*(uint32_t *)(v13 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v13 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v15 = *(uint32_t *)(a1 + 24);
    v16 = *(uint8_t **)v15;
    *v16 = 65;
    *(uint32_t *)v15 = (uint32_t)(uintptr_t)(v16 + 1);
    v4 = (*(uint32_t *)(v15 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v15 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v17 = *(uint32_t *)(a1 + 24);
    v18 = *(uint8_t **)v17;
    *v18 = 100;
    *(uint32_t *)v17 = (uint32_t)(uintptr_t)(v18 + 1);
    v4 = (*(uint32_t *)(v17 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v17 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v19 = *(uint32_t *)(a1 + 24);
    v20 = *(uint8_t **)v19;
    *v20 = 111;
    *(uint32_t *)v19 = (uint32_t)(uintptr_t)(v20 + 1);
    v4 = (*(uint32_t *)(v19 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v19 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v21 = *(uint32_t *)(a1 + 24);
    v22 = *(uint8_t **)v21;
    *v22 = 98;
    *(uint32_t *)v21 = (uint32_t)(uintptr_t)(v22 + 1);
    v4 = (*(uint32_t *)(v21 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v21 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v23 = *(uint32_t *)(a1 + 24);
    v24 = *(uint8_t **)v23;
    *v24 = 101;
    *(uint32_t *)v23 = (uint32_t)(uintptr_t)(v24 + 1);
    v4 = (*(uint32_t *)(v23 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v23 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v25 = *(uint32_t *)(a1 + 24);
    v26 = *(uint8_t **)v25;
    *v26 = 0;
    *(uint32_t *)v25 = (uint32_t)(uintptr_t)(v26 + 1);
    v4 = (*(uint32_t *)(v25 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v25 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v27 = *(uint32_t *)(a1 + 24);
    v28 = *(uint8_t **)v27;
    *v28 = 100;
    *(uint32_t *)v27 = (uint32_t)(uintptr_t)(v28 + 1);
    v4 = (*(uint32_t *)(v27 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v27 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v29 = *(uint32_t *)(a1 + 24);
    v30 = *(uint8_t **)v29;
    *v30 = 0;
    *(uint32_t *)v29 = (uint32_t)(uintptr_t)(v30 + 1);
    v4 = (*(uint32_t *)(v29 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v29 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v31 = *(uint32_t *)(a1 + 24);
    v32 = *(uint8_t **)v31;
    *v32 = 0;
    *(uint32_t *)v31 = (uint32_t)(uintptr_t)(v32 + 1);
    v4 = (*(uint32_t *)(v31 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v31 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v33 = *(uint32_t *)(a1 + 24);
    v34 = *(uint8_t **)v33;
    *v34 = 0;
    *(uint32_t *)v33 = (uint32_t)(uintptr_t)(v34 + 1);
    v4 = (*(uint32_t *)(v33 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v33 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v35 = *(uint32_t *)(a1 + 24);
    v36 = *(uint8_t **)v35;
    *v36 = 0;
    *(uint32_t *)v35 = (uint32_t)(uintptr_t)(v36 + 1);
    v4 = (*(uint32_t *)(v35 + 4))-- == 1;
    if ( v4 && (*(uint8_t (**)(int))(v35 + 12))(a1) == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
      (**(void (***)(int))a1)(a1);
    }
    v37 = *(uint32_t *)(a1 + 60);
    if ( v37 == 3 )
    {
      result = *(uint32_t *)(a1 + 24);
      v38 = *(uint8_t **)result;
      **(uint8_t **)result = 1;
    }
    else if ( v37 == 5 )
    {
      result = *(uint32_t *)(a1 + 24);
      v38 = *(uint8_t **)result;
      **(uint8_t **)result = 2;
    }
    else
    {
      result = *(uint32_t *)(a1 + 24);
      v38 = *(uint8_t **)result;
      **(uint8_t **)result = 0;
    }
    *(uint32_t *)result = (uint32_t)(uintptr_t)(v38 + 1);
    v4 = (*(uint32_t *)(result + 4))-- == 1;
    if ( v4 )
    {
      result = (*(int (**)(int))(result + 12))(a1);
      if ( (uint8_t)result == 0 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 24;
        return (**(int (***)(int))a1)(a1);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F85810  (binary VA: 0xf85810)
// Original: sub_F85810
// ----------------------------------------------------------------------------
int sub_F85810(uint32_t *a1)
{
  int v1;
  uint8_t *v2;
  bool v3;
  int v4;
  uint8_t *v5;
  uint32_t *v6;
  int v7;
  int v8;
  int i;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  uint8_t *v16;
  int result;
  uint8_t *v18;
  int v19;
  uint8_t *v20;
  int v21;
  uint8_t *v22;
  int v23;
  uint8_t *v24;
  int v25;
  uint8_t *v26;
  int v27;
  uint8_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  int16_t v31;
  int v32;
  uint8_t *v33;
  int v34;
  int v35;
  uint8_t *v36;
  char v37;
  int v38;
  uint8_t *v39;
  int v40;
  uint8_t *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  char v46; // di
  char v47;
  uint8_t *v48;
  int v49;
  uint8_t *v50;
  int v51;
  uint8_t *v52;
  int m;
  int v54;
  uint8_t *v55;
  int v56;
  uint8_t *v57;
  int v58;
  uint8_t *v59;
  int v60;
  uint8_t *v61;
  int v62;
  int v63;
  int v64;
  int v65;
  char v66; // di
  char v67;
  uint8_t *v68;
  int v69;
  uint8_t *v70;
  int v71;
  uint8_t *v72;
  int k;
  int v74;
  uint8_t *v75;
  int v76;
  uint8_t *v77;
  char v78;
  char v79;
  char v80;
  char v81;
  char v82;
  int v83;
  char v84;
  uint32_t *v85;
  uint32_t *v86;
  uint32_t *v87;
  uint32_t *v88;
  uint32_t *v89;
  int v90;
  int v91;
  uint32_t *v92;
  int v93;
  int j;
  int v95;

  v1 = a1[6];
  v2 = *(uint8_t **)v1;
  *v2 = -1;
  *(uint32_t *)v1 = (uint32_t)(uintptr_t)(v2 + 1);
  v3 = (*(uint32_t *)(v1 + 4))-- == 1;
  if ( v3 && (*(uint8_t (**)(uint32_t *))(v1 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  v4 = a1[6];
  v5 = *(uint8_t **)v4;
  *v5 = -40;
  *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v5 + 1);
  v3 = (*(uint32_t *)(v4 + 4))-- == 1;
  if ( v3 && (*(uint8_t (**)(uint32_t *))(v4 + 12))(a1) == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 24;
    G4_VCALL<void>(a1, 0);
  }
  v95 = 0;
  v6 = a1;
  do
  {
    v7 = v6[v95 + 17];
    if ( v7 != 0 )
    {
      v8 = 0;
      for ( i = 0; i != 64; ++i )
      {
        if ( *(uint16_t *)(v7 + 2 * i) > 0xFFu )
          v8 = 1;
        v11 = v8;
      }
      if ( *(uint8_t *)(v7 + 128) == 0 )
      {
        v19 = v6[6];
        v20 = *(uint8_t **)v19;
        *v20 = -1;
        *(uint32_t *)v19 = (uint32_t)(uintptr_t)(v20 + 1);
        v3 = (*(uint32_t *)(v19 + 4))-- == 1;
        if ( v3 )
        {
          v89 = v6;
          v82 = (*(int (**)(uint32_t *))(v19 + 12))(v6);
          v6 = v89;
          if ( v82 == 0 )
          {
            *(uint32_t *)(*v89 + 20) = 24;
            G4_VCALL<void>(v89, 0);
            v6 = v89;
          }
        }
        v21 = v6[6];
        v22 = *(uint8_t **)v21;
        *v22 = -37;
        *(uint32_t *)v21 = (uint32_t)(uintptr_t)(v22 + 1);
        v3 = (*(uint32_t *)(v21 + 4))-- == 1;
        if ( v3 )
        {
          v88 = v6;
          v81 = (*(int (**)(uint32_t *))(v21 + 12))(v6);
          v6 = v88;
          if ( v81 == 0 )
          {
            *(uint32_t *)(*v88 + 20) = 24;
            G4_VCALL<void>(v88, 0);
            v6 = v88;
          }
        }
        v23 = v6[6];
        v24 = *(uint8_t **)v23;
        *v24 = 0;
        *(uint32_t *)v23 = (uint32_t)(uintptr_t)(v24 + 1);
        v3 = (*(uint32_t *)(v23 + 4))-- == 1;
        if ( v3 )
        {
          v87 = v6;
          v80 = (*(int (**)(uint32_t *))(v23 + 12))(v6);
          v6 = v87;
          if ( v80 == 0 )
          {
            *(uint32_t *)(*v87 + 20) = 24;
            G4_VCALL<void>(v87, 0);
            v6 = v87;
          }
        }
        v25 = v6[6];
        v26 = *(uint8_t **)v25;
        *v26 = v11 == 0 ? 67 : -125;
        *(uint32_t *)v25 = (uint32_t)(uintptr_t)(v26 + 1);
        v3 = (*(uint32_t *)(v25 + 4))-- == 1;
        if ( v3 )
        {
          v86 = v6;
          v79 = (*(int (**)(uint32_t *))(v25 + 12))(v6);
          v6 = v86;
          if ( v79 == 0 )
          {
            *(uint32_t *)(*v86 + 20) = 24;
            G4_VCALL<void>(v86, 0);
            v6 = v86;
          }
        }
        v27 = v6[6];
        v28 = *(uint8_t **)v27;
        *v28 = 16 * v11 + v95;
        *(uint32_t *)v27 = (uint32_t)(uintptr_t)(v28 + 1);
        v3 = (*(uint32_t *)(v27 + 4))-- == 1;
        if ( v3 )
        {
          v85 = v6;
          v78 = (*(int (**)(uint32_t *))(v27 + 12))(v6);
          v6 = v85;
          if ( v78 == 0 )
          {
            *(uint32_t *)(*v85 + 20) = 24;
            G4_VCALL<void>(v85, 0);
            v6 = v85;
          }
        }
        v29 = &jpeg_natural_order;
        v93 = v11;
        v83 = v7;
        v30 = v6;
        do
        {
          while ( 1 )
          {
            v31 = *(uint16_t *)(v83 + 2 * *v29);
            if ( v93 != 0 )
            {
              v35 = v30[6];
              v36 = *(uint8_t **)v35;
              *v36 = HIBYTE(v31);
              *(uint32_t *)v35 = (uint32_t)(uintptr_t)(v36 + 1);
              v3 = (*(uint32_t *)(v35 + 4))-- == 1;
              if ( v3 )
              {
                v84 = v31;
                v37 = (*(int (**)(uint32_t *))(v35 + 12))(v30);
                LOBYTE(v31) = v84;
                if ( v37 == 0 )
                {
                  *(uint32_t *)(*v30 + 20) = 24;
                  G4_VCALL<void>(v30, 0);
                  LOBYTE(v31) = v84;
                }
              }
            }
            v32 = v30[6];
            v33 = *(uint8_t **)v32;
            *v33 = v31;
            v34 = *(uint32_t *)(v32 + 4) - 1;
            v3 = *(uint32_t *)(v32 + 4) == 1;
            *(uint32_t *)v32 = (uint32_t)(uintptr_t)(v33 + 1);
            *(uint32_t *)(v32 + 4) = v34;
            if ( v3 && (*(uint8_t (**)(uint32_t *))(v32 + 12))(v30) == 0 )
              break;
            if ( ++v29 == (uint32_t *)&unk_1CBD960 )
              goto LABEL_32;
          }
          ++v29;
          *(uint32_t *)(*v30 + 20) = 24;
          G4_VCALL<void>(v30, 0);
        }
        while ( v29 != (uint32_t *)&unk_1CBD960 );
LABEL_32:
        v6 = v30;
        *(uint8_t *)(v83 + 128) = 1;
      }
    }
    ++v95;
  }
  while ( v95 != 4 );
  v12 = v6;
  if ( *((uint8_t *)v6 + 173) == 0 )
  {
    v92 = v6;
    for ( j = 0; j != 4; ++j )
    {
      v13 = v92[21];
      if ( v13 != 0 && *(uint8_t *)(v13 + 273) == 0 )
      {
        v58 = v12[6];
        v59 = *(uint8_t **)v58;
        *v59 = -1;
        *(uint32_t *)v58 = (uint32_t)(uintptr_t)(v59 + 1);
        v3 = (*(uint32_t *)(v58 + 4))-- == 1;
        if ( v3 && (*(uint8_t (**)(uint32_t *))(v58 + 12))(v12) == 0 )
        {
          *(uint32_t *)(*v12 + 20) = 24;
          G4_VCALL<void>(v12, 0);
        }
        v60 = v12[6];
        v61 = *(uint8_t **)v60;
        *v61 = -60;
        *(uint32_t *)v60 = (uint32_t)(uintptr_t)(v61 + 1);
        v3 = (*(uint32_t *)(v60 + 4))-- == 1;
        if ( v3 && (*(uint8_t (**)(uint32_t *))(v60 + 12))(v12) == 0 )
        {
          *(uint32_t *)(*v12 + 20) = 24;
          G4_VCALL<void>(v12, 0);
        }
        v62 = 1;
        v63 = 0;
        do
        {
          v64 = *(uint8_t *)(v13 + v62++);
          v63 += v64;
        }
        while ( v62 != 17 );
        v65 = v12[6];
        v91 = v63;
        v66 = v63 + 19;
        v67 = (uint16_t)(v63 + 19) >> 8;
        v68 = *(uint8_t **)v65;
        *v68 = v67;
        *(uint32_t *)v65 = (uint32_t)(uintptr_t)(v68 + 1);
        v3 = (*(uint32_t *)(v65 + 4))-- == 1;
        if ( v3 && (*(uint8_t (**)(uint32_t *))(v65 + 12))(v12) == 0 )
        {
          *(uint32_t *)(*v12 + 20) = 24;
          G4_VCALL<void>(v12, 0);
        }
        v69 = v12[6];
        v70 = *(uint8_t **)v69;
        *v70 = v66;
        *(uint32_t *)v69 = (uint32_t)(uintptr_t)(v70 + 1);
        v3 = (*(uint32_t *)(v69 + 4))-- == 1;
        if ( v3 && (*(uint8_t (**)(uint32_t *))(v69 + 12))(v12) == 0 )
        {
          *(uint32_t *)(*v12 + 20) = 24;
          G4_VCALL<void>(v12, 0);
        }
        v71 = v12[6];
        v72 = *(uint8_t **)v71;
        *v72 = j;
        *(uint32_t *)v71 = (uint32_t)(uintptr_t)(v72 + 1);
        v3 = (*(uint32_t *)(v71 + 4))-- == 1;
        if ( v3 && (*(uint8_t (**)(uint32_t *))(v71 + 12))(v12) == 0 )
        {
          *(uint32_t *)(*v12 + 20) = 24;
          G4_VCALL<void>(v12, 0);
        }
        for ( k = 1; k != 17; ++k )
        {
          while ( 1 )
          {
            v74 = v12[6];
            v75 = *(uint8_t **)v74;
            *v75 = *(uint8_t *)(v13 + k);
            *(uint32_t *)v74 = (uint32_t)(uintptr_t)(v75 + 1);
            v3 = (*(uint32_t *)(v74 + 4))-- == 1;
            if ( v3 && (*(uint8_t (**)(uint32_t *))(v74 + 12))(v12) == 0 )
              break;
            if ( ++k == 17 )
              goto LABEL_67;
          }
          *(uint32_t *)(*v12 + 20) = 24;
          G4_VCALL<void>(v12, 0);
        }
LABEL_67:
        if ( v91 != 0 )
        {
          LOWORD(k) = 0;
          do
          {
            while ( 1 )
            {
              v76 = v12[6];
              v77 = *(uint8_t **)v76;
              *v77 = *(uint8_t *)(v13 + k + 17);
              *(uint32_t *)v76 = (uint32_t)(uintptr_t)(v77 + 1);
              v3 = (*(uint32_t *)(v76 + 4))-- == 1;
              if ( v3 && (*(uint8_t (**)(uint32_t *))(v76 + 12))(v12) == 0 )
                break;
              if ( ++k == v91 )
                goto LABEL_73;
            }
            ++k;
            *(uint32_t *)(*v12 + 20) = 24;
            G4_VCALL<void>(v12, 0);
          }
          while ( k != v91 );
        }
LABEL_73:
        *(uint8_t *)(v13 + 273) = 1;
      }
      v14 = v92[25];
      if ( v14 != 0 && *(uint8_t *)(v14 + 273) == 0 )
      {
        v38 = v12[6];
        v39 = *(uint8_t **)v38;
        *v39 = -1;
        *(uint32_t *)v38 = (uint32_t)(uintptr_t)(v39 + 1);
        v3 = (*(uint32_t *)(v38 + 4))-- == 1;
        if ( v3 && (*(uint8_t (**)(uint32_t *))(v38 + 12))(v12) == 0 )
        {
          *(uint32_t *)(*v12 + 20) = 24;
          G4_VCALL<void>(v12, 0);
        }
        v40 = v12[6];
        v41 = *(uint8_t **)v40;
        *v41 = -60;
        *(uint32_t *)v40 = (uint32_t)(uintptr_t)(v41 + 1);
        v3 = (*(uint32_t *)(v40 + 4))-- == 1;
        if ( v3 && (*(uint8_t (**)(uint32_t *))(v40 + 12))(v12) == 0 )
        {
          *(uint32_t *)(*v12 + 20) = 24;
          G4_VCALL<void>(v12, 0);
        }
        v42 = 1;
        v43 = 0;
        do
        {
          v44 = *(uint8_t *)(v14 + v42++);
          v43 += v44;
        }
        while ( v42 != 17 );
        v45 = v12[6];
        v90 = v43;
        v46 = v43 + 19;
        v47 = (uint16_t)(v43 + 19) >> 8;
        v48 = *(uint8_t **)v45;
        *v48 = v47;
        *(uint32_t *)v45 = (uint32_t)(uintptr_t)(v48 + 1);
        v3 = (*(uint32_t *)(v45 + 4))-- == 1;
        if ( v3 && (*(uint8_t (**)(uint32_t *))(v45 + 12))(v12) == 0 )
        {
          *(uint32_t *)(*v12 + 20) = 24;
          G4_VCALL<void>(v12, 0);
        }
        v49 = v12[6];
        v50 = *(uint8_t **)v49;
        *v50 = v46;
        *(uint32_t *)v49 = (uint32_t)(uintptr_t)(v50 + 1);
        v3 = (*(uint32_t *)(v49 + 4))-- == 1;
        if ( v3 && (*(uint8_t (**)(uint32_t *))(v49 + 12))(v12) == 0 )
        {
          *(uint32_t *)(*v12 + 20) = 24;
          G4_VCALL<void>(v12, 0);
        }
        v51 = v12[6];
        v52 = *(uint8_t **)v51;
        *v52 = j + 16;
        *(uint32_t *)v51 = (uint32_t)(uintptr_t)(v52 + 1);
        v3 = (*(uint32_t *)(v51 + 4))-- == 1;
        if ( v3 && (*(uint8_t (**)(uint32_t *))(v51 + 12))(v12) == 0 )
        {
          *(uint32_t *)(*v12 + 20) = 24;
          G4_VCALL<void>(v12, 0);
        }
        for ( m = 1; m != 17; ++m )
        {
          while ( 1 )
          {
            v54 = v12[6];
            v55 = *(uint8_t **)v54;
            *v55 = *(uint8_t *)(v14 + m);
            *(uint32_t *)v54 = (uint32_t)(uintptr_t)(v55 + 1);
            v3 = (*(uint32_t *)(v54 + 4))-- == 1;
            if ( v3 && (*(uint8_t (**)(uint32_t *))(v54 + 12))(v12) == 0 )
              break;
            if ( ++m == 17 )
              goto LABEL_48;
          }
          *(uint32_t *)(*v12 + 20) = 24;
          G4_VCALL<void>(v12, 0);
        }
LABEL_48:
        if ( v90 != 0 )
        {
          LOWORD(m) = 0;
          do
          {
            while ( 1 )
            {
              v56 = v12[6];
              v57 = *(uint8_t **)v56;
              *v57 = *(uint8_t *)(v14 + m + 17);
              *(uint32_t *)v56 = (uint32_t)(uintptr_t)(v57 + 1);
              v3 = (*(uint32_t *)(v56 + 4))-- == 1;
              if ( v3 && (*(uint8_t (**)(uint32_t *))(v56 + 12))(v12) == 0 )
                break;
              if ( ++m == v90 )
                goto LABEL_54;
            }
            ++m;
            *(uint32_t *)(*v12 + 20) = 24;
            G4_VCALL<void>(v12, 0);
          }
          while ( m != v90 );
        }
LABEL_54:
        *(uint8_t *)(v14 + 273) = 1;
      }
      ++v92;
    }
  }
  v15 = v12[6];
  v16 = *(uint8_t **)v15;
  *v16 = -1;
  *(uint32_t *)v15 = (uint32_t)(uintptr_t)(v16 + 1);
  v3 = (*(uint32_t *)(v15 + 4))-- == 1;
  if ( v3 && (*(uint8_t (**)(uint32_t *))(v15 + 12))(v12) == 0 )
  {
    *(uint32_t *)(*v12 + 20) = 24;
    G4_VCALL<void>(v12, 0);
  }
  result = v12[6];
  v18 = *(uint8_t **)result;
  *v18 = -39;
  *(uint32_t *)result = (uint32_t)(uintptr_t)(v18 + 1);
  v3 = (*(uint32_t *)(result + 4))-- == 1;
  if ( v3 )
  {
    result = (*(int (**)(uint32_t *))(result + 12))(v12);
    if ( (uint8_t)result == 0 )
    {
      *(uint32_t *)(*v12 + 20) = 24;
      return G4_VCALL<int>(v12, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F86180  (binary VA: 0xf86180)
// Original: sub_F86180
// ----------------------------------------------------------------------------
int * sub_F86180(int *result)
{
  int *v1;
  int v2;
  uint32_t *v3;
  unsigned int v4;
  int i;
  int v6;
  unsigned int v7;
  unsigned int v8;
  __m128i *v9;
  char v10;
  int *v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  signed int v18;
  int *v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  int v24;
  int *v25;
  int v26;
  int v27;
  int v28;
  int *v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  typedef int _g4_t_v35;
  typedef int *_g4_t_v36;
  typedef int *_g4_t_v37;
  typedef int *_g4_t_v38;
  typedef int *_g4_t_v39;
  typedef int *_g4_t_v40;
  typedef int *_g4_t_v41;
  typedef int *_g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef __m128i *_g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef int *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  typedef int *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint8_t _g4_t_v61[16];
  typedef uint8_t _g4_t_v62[2568];
  enum : size_t {
    _g4_s0 = 2704u,
    _g4_s1 = (8u + sizeof(_g4_t_v35)) > _g4_s0 ? (8u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v36)) > _g4_s1 ? (8u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v37)) > _g4_s2 ? (8u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v38)) > _g4_s3 ? (8u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v39)) > _g4_s4 ? (8u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v40)) > _g4_s5 ? (8u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v41)) > _g4_s6 ? (8u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v42)) > _g4_s7 ? (8u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v43)) > _g4_s8 ? (8u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v44)) > _g4_s9 ? (12u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v45)) > _g4_s10 ? (16u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v46)) > _g4_s11 ? (16u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v47)) > _g4_s12 ? (20u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v48)) > _g4_s13 ? (20u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v49)) > _g4_s14 ? (24u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v50)) > _g4_s15 ? (24u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v51)) > _g4_s16 ? (28u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v52)) > _g4_s17 ? (32u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v53)) > _g4_s18 ? (32u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v54)) > _g4_s19 ? (36u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v55)) > _g4_s20 ? (36u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v56)) > _g4_s21 ? (40u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v57)) > _g4_s22 ? (40u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v58)) > _g4_s23 ? (44u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v59)) > _g4_s24 ? (44u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v60)) > _g4_s25 ? (44u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v61)) > _g4_s26 ? (48u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v62)) > _g4_s27 ? (64u + sizeof(_g4_t_v62)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 44u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);

  if ( result[41] <= 0 )
  {
    *(uint32_t *)(*result + 20) = 19;
    *(uint32_t *)(*result + 24) = 0;
    v43 = result;
    G4_VCALL<void>(result, 0);
    result = v43;
  }
  v1 = (int *)result[42];
  v51 = v1;
  if ( v1[5] == 0 && v1[6] == 63 )
  {
    v30 = result[14];
    v10 = 0;
    *((uint8_t *)result + 208) = 0;
    v49 = v30;
    if ( v30 <= 0 )
      goto LABEL_19;
    v31 = (unsigned int)v30 >> 4;
    if ( (unsigned int)v49 > 0xF && 16 * v31 != 0 )
    {
      v32 = 0;
      do
      {
        v33 = v32++;
        *(__m128i *)&v61[16 * v33] = g4_m128_from<__m128i>(0LL);
      }
      while ( v31 > v32 );
      v34 = 16 * v31;
      if ( v49 == 16 * v31 )
        goto LABEL_102;
    }
    else
    {
      v34 = 0;
    }
    do
      v61[v34++] = 0;
    while ( v49 > v34 );
LABEL_102:
    v10 = 0;
    goto LABEL_19;
  }
  v2 = result[14];
  *((uint8_t *)result + 208) = 1;
  v49 = v2;
  if ( v2 > 0 )
  {
    v52 = 0;
    v58 = (uint32_t *)(v62);
    v47 = result;
    do
    {
      v3 = v58;
      v4 = -((uint8_t)((uint8_t)(uintptr_t)(v58) & 0xF) >> 2) & 3;
      if ( v4 != 0 )
      {
        for ( i = 64; ; --i )
        {
          *v3++ = -1;
          v6 = i - 1;
          if ( v4 <= 65 - i )
            break;
        }
      }
      else
      {
        v6 = 64;
      }
      v56 = 64 - v4;
      v7 = (64 - v4) >> 2;
      v54 = 4 * v7;
      if ( 4 * v7 == 0 )
        goto LABEL_107;
      v45 = (__m128i *)&v58[v4];
      v8 = 0;
      v9 = v45;
      do
      {
        ++v8;
        *v9++ = g4_m128_from<__m128i>(-1LL);
      }
      while ( v8 < v7 );
      v6 -= v54;
      v3 += 4 * v7;
      if ( v56 != v54 )
      {
LABEL_107:
        do
        {
          --v6;
          *v3++ = -1;
        }
        while ( v6 != 0 );
      }
      v58 += 64;
      ++v52;
    }
    while ( v52 != v49 );
    result = v47;
  }
  v10 = 1;
LABEL_19:
  v57 = 1;
  v11 = result;
  if ( result[41] <= 0 )
    goto LABEL_53;
  do
  {
    v53 = *v51;
    v12 = *v51;
    if ( (unsigned int)(*v51 - 1) <= 3
      || (*(uint32_t *)(*v11 + 20) = 26,
          *(uint32_t *)(*v11 + 24) = v12,
          *(uint32_t *)(*v11 + 28) = 4,
          (*(void (**)(int *))*v11)(v11),
          v53 > 0) )
    {
      v13 = 0;
      v59 = v51;
      do
      {
        while ( 1 )
        {
          v14 = v59[1];
          if ( v14 < 0 || v14 >= v11[14] )
          {
            *(uint32_t *)(*v11 + 20) = 19;
            *(uint32_t *)(*v11 + 24) = v57;
            v35 = v14;
            G4_VCALL<void>(v11, 0);
            v14 = v35;
          }
          if ( v13 != 0 && v14 <= *v59 )
            break;
          ++v13;
          ++v59;
          if ( v13 == v53 )
            goto LABEL_29;
        }
        ++v13;
        *(uint32_t *)(*v11 + 20) = 19;
        *(uint32_t *)(*v11 + 24) = v57;
        G4_VCALL<void>(v11, 0);
        ++v59;
      }
      while ( v13 != v53 );
    }
LABEL_29:
    v15 = v51[5];
    v16 = v51[6];
    v46 = v15;
    v60 = v16;
    v44 = v51[7];
    v55 = v51[8];
    if ( *((uint8_t *)v11 + 208) == 0 )
    {
      if ( v16 != 63 || v15 != 0 || (v44 | v55) != 0 )
      {
        *(uint32_t *)(*v11 + 20) = 17;
        *(uint32_t *)(*v11 + 24) = v57;
        G4_VCALL<void>(v11, 0);
      }
      if ( v53 > 0 )
      {
        v24 = 0;
        v25 = v11;
        do
        {
          v26 = v51[v24 + 1];
          if ( v61[v26] != 0 )
          {
            *(uint32_t *)(*v25 + 20) = 19;
            *(uint32_t *)(*v25 + 24) = v57;
            v41 = v25;
            G4_VCALL<void>(v25, 0);
            v25 = v41;
          }
          ++v24;
          v61[v26] = 1;
        }
        while ( v24 != v53 );
        v11 = v25;
      }
      goto LABEL_51;
    }
    if ( v15 > 0x3F || v16 < (int)v15 || v51[7] < 0 || v16 > 63 || v51[8] < 0 || v44 > 10 || v55 > 10 )
    {
      *(uint32_t *)(*v11 + 20) = 17;
      *(uint32_t *)(*v11 + 24) = v57;
      G4_VCALL<void>(v11, 0);
      if ( v46 == 0 )
        goto LABEL_37;
    }
    else if ( v15 == 0 )
    {
LABEL_37:
      if ( v60 == 0 )
        goto LABEL_39;
      goto LABEL_38;
    }
    if ( v53 == 1 )
    {
LABEL_40:
      v50 = 0;
      v17 = 0;
      v48 = v44 - 1;
      while ( 1 )
      {
        v18 = 0;
        v19 = (int *)&v62[256 * v51[v17 + 1]];
        if ( v46 != 0 )
        {
          v18 = v46;
          if ( *v19 < 0 )
          {
            *(uint32_t *)(*v11 + 20) = 17;
            *(uint32_t *)(*v11 + 24) = v57;
            v42 = v19;
            G4_VCALL<void>(v11, 0);
            v18 = v46;
            v19 = v42;
          }
        }
        if ( v60 < v18 )
          goto LABEL_50;
        if ( v48 == v55 )
        {
          if ( v44 != 0 )
          {
            do
            {
              v23 = v19[v18];
              if ( v23 < 0 || v44 != v23 )
              {
                *(uint32_t *)(*v11 + 20) = 17;
                *(uint32_t *)(*v11 + 24) = v57;
                v40 = v19;
                G4_VCALL<void>(v11, 0);
                v19 = v40;
              }
              v19[v18++] = v55;
            }
            while ( v60 >= v18 );
            v17 = ++v50;
            if ( v53 <= v50 )
              goto LABEL_51;
          }
          else
          {
            do
            {
              if ( v19[v18] > 0 )
              {
                *(uint32_t *)(*v11 + 20) = 17;
                *(uint32_t *)(*v11 + 24) = v57;
                v39 = v19;
                G4_VCALL<void>(v11, 0);
                v19 = v39;
              }
              v19[v18++] = v48;
            }
            while ( v60 >= v18 );
            v17 = ++v50;
            if ( v53 <= v50 )
              goto LABEL_51;
          }
        }
        else
        {
          if ( v44 != 0 )
          {
            do
            {
              *(uint32_t *)(*v11 + 20) = 17;
              *(uint32_t *)(*v11 + 24) = v57;
              v38 = v19;
              G4_VCALL<void>(v11, 0);
              v19 = v38;
              v38[v18++] = v55;
            }
            while ( v60 >= v18 );
          }
          else
          {
            do
            {
              if ( v19[v18] >= 0 )
              {
                *(uint32_t *)(*v11 + 20) = 17;
                *(uint32_t *)(*v11 + 24) = v57;
                v36 = v19;
                G4_VCALL<void>(v11, 0);
                v19 = v36;
              }
              v19[v18++] = v55;
            }
            while ( v60 >= v18 );
          }
LABEL_50:
          v17 = ++v50;
          if ( v53 <= v50 )
            goto LABEL_51;
        }
      }
    }
LABEL_38:
    *(uint32_t *)(*v11 + 20) = 17;
    *(uint32_t *)(*v11 + 24) = v57;
    G4_VCALL<void>(v11, 0);
LABEL_39:
    if ( v53 > 0 )
      goto LABEL_40;
LABEL_51:
    ++v57;
    v51 += 9;
  }
  while ( v11[41] >= v57 );
  result = v11;
  v49 = v11[14];
  v10 = *((uint8_t *)v11 + 208);
LABEL_53:
  if ( v10 != 0 )
  {
    if ( v49 > 0 )
    {
      v27 = 0;
      v28 = v49;
      v29 = result;
      do
      {
        result = *(int **)&v62[256 * v27];
        if ( (int)(uintptr_t)(result) < 0 )
        {
          *(uint32_t *)(*v29 + 20) = 45;
          result = (int *)G4_VCALL<int>(v29, 0);
          v28 = v29[14];
        }
        ++v27;
      }
      while ( v27 < v28 );
    }
  }
  else
  {
    v20 = 0;
    if ( v49 > 0 )
    {
      v21 = v49;
      v22 = result;
      result = (int *)v61;
      do
      {
        while ( *((uint8_t *)result + v20) != 0 )
        {
          if ( ++v20 >= v21 )
            return result;
        }
        ++v20;
        *(uint32_t *)(*v22 + 20) = 45;
        v37 = result;
        G4_VCALL<void>(v22, 0);
        v21 = v22[14];
        result = v37;
      }
      while ( v20 < v21 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F86850  (binary VA: 0xf86850)
// Original: sub_F86850
// ----------------------------------------------------------------------------
int sub_F86850(int a1)
{
  *(uint8_t *)(*(uint32_t *)(a1 + 312) + 12) = 0;
  (*(void (**)(int))(*(uint32_t *)(a1 + 328) + 4))(a1);
  return (*(int (**)(int))(*(uint32_t *)(a1 + 328) + 8))(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_F86890  (binary VA: 0xf86890)
// Original: sub_F86890
// ----------------------------------------------------------------------------
int sub_F86890(int a1)
{
  uint32_t *v1;
  int result;

  v1 = *(uint32_t **)(a1 + 312);
  (*(void (**)(int))(*(uint32_t *)(a1 + 344) + 8))(a1);
  result = v1[4];
  switch ( result )
  {
    case 0:
      v1[4] = 2;
      if ( *(uint8_t *)(a1 + 174) != 0 )
        goto LABEL_4;
LABEL_6:
      ++v1[7];
      goto LABEL_4;
    case 1:
      v1[4] = 2;
      goto LABEL_4;
    case 2:
      if ( *(uint8_t *)(a1 + 174) != 0 )
      {
        v1[4] = 1;
        ++v1[7];
        goto LABEL_4;
      }
      goto LABEL_6;
    default:
LABEL_4:
      ++v1[5];
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_F86920  (binary VA: 0xf86920)
// Original: sub_F86920
// ----------------------------------------------------------------------------
int sub_F86920(uint32_t *a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  signed int v13;
  uint32_t *v14;
  unsigned int v15;
  int v16;
  int v17;
  signed int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  __m128i v22;
  __m128i *v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  signed int v36;
  uint32_t *v37;
  unsigned int v38;
  int v39;
  int v40;
  signed int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  __m128i v45;
  __m128i *v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  uint32_t *v53;
  unsigned int v54;
  unsigned int v55;
  int v56;
  uint32_t *v57;
  unsigned int v58;
  unsigned int v59;
  int v60;
  int v61;
  signed int *v62;
  int v63;
  signed int v64;
  int v65;
  signed int v66;
  uint32_t *v67;
  unsigned int v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  signed int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  __m128i v77;
  __m128i *v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  unsigned int v85;
  unsigned int v86;
  unsigned int v87;
  unsigned int j;
  __m128i *v89;
  __m128i v90;
  unsigned int v91;
  __m128i v92;
  __m128i v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  unsigned int i;
  __m128i *v99;
  __m128i v100;
  unsigned int v101;
  __m128i v102;
  __m128i v103;
  unsigned int v104;
  uint32_t *v105;
  unsigned int v106;
  unsigned int v107;
  int v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  __m128i *v113;
  __m128i v114;
  __m128i v115;
  __m128i v116;
  unsigned int v117;
  int v118;
  int v119;
  int v120;
  unsigned int v121;
  int v122;
  signed int v123;
  uint32_t *v124;
  uint32_t *v125;
  unsigned int v126;
  unsigned int v127;
  signed int v128;

  v3 = a1;
  v124 = (uint32_t *)a1[78];
  v4 = v124[4];
  if ( v4 == 1 )
  {
    v30 = a1[42];
    if ( v30 != 0 )
    {
      v31 = (int *)(v30 + 36 * v124[7]);
      v32 = *v31;
      a1[56] = *v31;
      if ( *v31 > 0 )
      {
        v128 = a1[16];
        v33 = 0;
        do
        {
          a1[v33 + 57] = v128 + 84 * v31[v33 + 1];
          ++v33;
        }
        while ( v33 < *v31 );
      }
      a1[74] = v31[5];
      a1[75] = v31[6];
      a1[76] = v31[7];
      a1[77] = v31[8];
      goto LABEL_52;
    }
    v32 = a1[14];
    if ( v32 > 4 )
    {
      *(uint32_t *)(*a1 + 20) = 26;
      *(uint32_t *)(*a1 + 24) = a1[14];
      *(uint32_t *)(*a1 + 28) = 4;
      G4_VCALL<void>(a1, 0);
      v32 = a1[14];
    }
    a1[56] = v32;
    if ( v32 > 0 )
    {
      v95 = a1[16];
      v126 = v95;
      v96 = -((uint8_t)(((uint8_t)(uintptr_t)(a1) - 28) & 0xF) >> 2) & 3;
      if ( v32 <= v96 )
        v96 = v32;
      v127 = v96;
      if ( v96 == 0 )
      {
        i = 0;
        goto LABEL_160;
      }
      v97 = v96;
      for ( i = 0; i < v97; ++i )
      {
        a1[i + 57] = v95;
        v95 += 84;
      }
      if ( v32 != v127 )
      {
LABEL_160:
        v125 = (uint32_t *)(v32 - v127);
        v128 = (v32 - v127) >> 2;
        v122 = 4 * v128;
        if ( 4 * v128 == 0 )
          goto LABEL_165;
        v121 = i + 2;
g4_m128_lane<int64_t>(v100, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(i), _mm_cvtsi32_si128(i + 1)), 0);
        v99 = (__m128i *)&a1[v127 + 57];
g4_m128_lane<int64_t>(v100, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(i + 2), _mm_cvtsi32_si128(i + 3)), 0);
        v101 = 0;
        v102 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v126), 0);
        while ( 1 )
        {
          ++v101;
          v103 = _mm_add_epi32(v100, G4_BITCAST<__m128i>(xmmword_1C7C400));
          *v99++ = _mm_add_epi32(
                     _mm_unpacklo_epi32(
                       _mm_shuffle_epi32(_mm_mul_epu32(v100, G4_BITCAST<__m128i>(xmmword_1C7C6F0)), 8),
                       _mm_shuffle_epi32(
                         _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C6F0), 4), _mm_srli_si128(v100, 4)),
                         8)),
                     v102);
          if ( v101 >= v128 )
            break;
          v100 = v103;
        }
        i += v122;
        if ( v125 != (uint32_t *)v122 )
        {
LABEL_165:
          v104 = v126 + 84 * i;
          do
          {
            a1[i++ + 57] = v104;
            v104 += 84;
          }
          while ( v32 > (int)i );
        }
      }
    }
    *(g4_int128_t *)(a1 + 74) = xmmword_1C7C700;
LABEL_52:
    if ( v32 == 1 )
    {
      v53 = (uint32_t *)a1[57];
      a1[61] = v53[7];
      a1[62] = v53[8];
      v54 = v53[3];
      v55 = v53[8];
      v53[13] = 1;
      v56 = v55 % v54;
      v53[14] = 1;
      v53[15] = 1;
      v53[16] = 8;
      v53[17] = 1;
      if ( v55 % v54 == 0 )
        v56 = v54;
      v53[18] = v56;
      a1[63] = 1;
      a1[64] = 0;
    }
    else
    {
      if ( (unsigned int)(v32 - 1) > 3 )
      {
        *(uint32_t *)(*a1 + 20) = 26;
        *(uint32_t *)(*a1 + 24) = a1[56];
        *(uint32_t *)(*a1 + 28) = 4;
        G4_VCALL<void>(a1, 0);
      }
      a1[61] = jdiv_round_up(a1[7], 8 * a1[53]);
      v34 = jdiv_round_up(a1[8], 8 * a1[54]);
      v35 = a1[56];
      a1[62] = v34;
      a1[63] = 0;
      if ( v35 > 0 )
      {
        v125 = a1;
        v36 = 0;
        do
        {
          v37 = (uint32_t *)a1[v36 + 57];
          v38 = v37[2];
          v39 = v37[3];
          v37[14] = v39;
          v37[13] = v38;
          v126 = v38 * v39;
          v37[15] = v38 * v39;
          v37[16] = 8 * v38;
          if ( v37[7] % v38 != 0 )
            v38 = v37[7] % v38;
          v40 = v37[8] % v37[3];
          v37[17] = v38;
          if ( v40 == 0 )
            v40 = v37[3];
          v37[18] = v40;
          if ( (int)(a1[63] + v126) > 10 )
          {
            *(uint32_t *)(*a1 + 20) = 13;
            G4_VCALL<void>(a1, 0);
          }
          if ( (int)v126 > 0 )
          {
            v121 = v126 - 1;
            v128 = a1[63];
            v123 = v128 + 64;
            v41 = v128;
            v42 = v126 - 1;
            v43 = -((uint8_t)(((uint8_t)(uintptr_t)(a1) + 4 * (v128 + 64)) & 0xF) >> 2) & 3;
            if ( v43 > v126 )
              v43 = v126;
            if ( v43 == 0 )
              goto LABEL_191;
            v127 = v43;
            do
            {
              a1[v41 + 64] = v36;
              --v42;
              ++v41;
            }
            while ( v43 > v41 - v128 );
            if ( v126 != v43 )
            {
LABEL_191:
              v126 -= v43;
              v127 = v126 >> 2;
              v122 = 4 * (v126 >> 2);
              if ( v122 == 0 )
                goto LABEL_74;
              v44 = v123 + v43;
              v123 = v36;
              v45 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v36), 0);
              v46 = (__m128i *)&a1[v44];
              v47 = 0;
              do
              {
                ++v47;
                *v46++ = v45;
              }
              while ( v47 < v127 );
              v42 -= v122;
              v41 += v122;
              if ( v126 != v122 )
              {
LABEL_74:
                v127 = 0;
                v48 = v42 + 1;
                v49 = 0;
                do
                  a1[v41 + 64 + v49++] = v36;
                while ( (int)(v48 - v49) > 0 );
              }
            }
            a1[63] = v121 + v128 + 1;
          }
          ++v36;
        }
        while ( v36 < a1[56] );
        v3 = a1;
      }
    }
    v50 = v3[47];
    if ( v50 > 0 )
    {
      v51 = v50 * v3[61];
      v52 = 0xFFFF;
      if ( v51 <= 0xFFFF )
        v52 = v51;
      v3[46] = v52;
    }
    if ( v3[74] != 0 || v3[76] == 0 || *((uint8_t *)v3 + 173) != 0 )
    {
      (*(void (**)(uint32_t *, int, int, int, unsigned int, int, signed int, uint32_t *, uint32_t *, unsigned int, unsigned int, signed int))v3[86])(
        v3,
        1,
        v119,
        v120,
        v121,
        v122,
        v123,
        v124,
        v125,
        v126,
        v127,
        v128);
      (*(void (**)(uint32_t *, int))v3[81])(v3, 2);
      v5 = a3;
      *(uint8_t *)(a3 + 12) = 0;
      goto LABEL_5;
    }
    v124[4] = 2;
    ++v124[5];
    goto LABEL_87;
  }
  if ( v4 != 0 )
  {
    if ( v4 != 2 )
    {
      *(uint32_t *)(*a1 + 20) = 48;
      G4_VCALL<void>(a1, 0, v118, v119, v120, v121, v122, v123, v124, v125, v126, v127, v128);
      v5 = a3;
      goto LABEL_5;
    }
LABEL_87:
    if ( *((uint8_t *)v3 + 174) == 0 )
    {
      v61 = v3[42];
      if ( v61 != 0 )
      {
        v62 = (signed int *)(v61 + 36 * *(uint32_t *)(v3[78] + 28));
        v128 = *v62;
        v3[56] = *v62;
        if ( *v62 > 0 )
        {
          v63 = v3[16];
          v64 = 0;
          do
          {
            v3[v64 + 57] = v63 + 84 * v62[v64 + 1];
            ++v64;
          }
          while ( v64 < *v62 );
        }
        v3[74] = v62[5];
        v3[75] = v62[6];
        v3[76] = v62[7];
        v3[77] = v62[8];
      }
      else
      {
        v128 = v3[14];
        if ( v128 > 4 )
        {
          *(uint32_t *)(*v3 + 20) = 26;
          *(uint32_t *)(*v3 + 24) = v3[14];
          *(uint32_t *)(*v3 + 28) = 4;
          G4_VCALL<void>(v3, 0);
          v128 = v3[14];
        }
        v3[56] = v128;
        if ( v128 > 0 )
        {
          v109 = v3[16];
          v127 = v109;
          v110 = -((uint8_t)(((uint8_t)(uintptr_t)(v3) - 28) & 0xF) >> 2) & 3;
          if ( v128 <= v110 )
            v110 = v128;
          v111 = 0;
          if ( v110 == 0 )
            goto LABEL_192;
          do
          {
            v3[v111++ + 57] = v109;
            v109 += 84;
          }
          while ( v110 > v111 );
          if ( v128 != v110 )
          {
LABEL_192:
            v125 = (uint32_t *)(v128 - v110);
            v126 = (v128 - v110) >> 2;
            v122 = 4 * v126;
            if ( 4 * v126 == 0 )
              goto LABEL_184;
            v121 = v111 + 2;
            v112 = 0;
g4_m128_lane<int64_t>(v114, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v111), _mm_cvtsi32_si128(v111 + 1)), 0);
            v113 = (__m128i *)&v3[v110 + 57];
g4_m128_lane<int64_t>(v114, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v111 + 2), _mm_cvtsi32_si128(v111 + 3)), 0);
            v115 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v127), 0);
            while ( 1 )
            {
              ++v112;
              v116 = _mm_add_epi32(v114, G4_BITCAST<__m128i>(xmmword_1C7C400));
              *v113++ = _mm_add_epi32(
                          _mm_unpacklo_epi32(
                            _mm_shuffle_epi32(_mm_mul_epu32(v114, G4_BITCAST<__m128i>(xmmword_1C7C6F0)), 8),
                            _mm_shuffle_epi32(
                              _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C6F0), 4), _mm_srli_si128(v114, 4)),
                              8)),
                          v115);
              if ( v112 >= v126 )
                break;
              v114 = v116;
            }
            v111 += v122;
            if ( v125 != (uint32_t *)v122 )
            {
LABEL_184:
              v117 = v127 + 84 * v111;
              do
              {
                v3[v111++ + 57] = v117;
                v117 += 84;
              }
              while ( v128 > (int)v111 );
            }
          }
        }
        *(g4_int128_t *)(v3 + 74) = xmmword_1C7C700;
      }
      if ( v128 == 1 )
      {
        v105 = (uint32_t *)v3[57];
        v3[61] = v105[7];
        v3[62] = v105[8];
        v106 = v105[3];
        v107 = v105[8];
        v105[13] = 1;
        v108 = v107 % v106;
        v105[14] = 1;
        v105[15] = 1;
        v105[16] = 8;
        v105[17] = 1;
        if ( v107 % v106 == 0 )
          v108 = v106;
        v105[18] = v108;
        v3[63] = 1;
        v3[64] = 0;
      }
      else
      {
        if ( (unsigned int)(v128 - 1) > 3 )
        {
          *(uint32_t *)(*v3 + 20) = 26;
          *(uint32_t *)(*v3 + 24) = v3[56];
          *(uint32_t *)(*v3 + 28) = 4;
          G4_VCALL<void>(v3, 0);
        }
        v3[61] = jdiv_round_up(v3[7], 8 * v3[53]);
        v3[62] = jdiv_round_up(v3[8], 8 * v3[54]);
        v65 = v3[56];
        v3[63] = 0;
        if ( v65 > 0 )
        {
          v125 = v3;
          v66 = 0;
          do
          {
            v67 = (uint32_t *)v125[v66 + 57];
            v68 = v67[2];
            v69 = v67[3];
            v67[14] = v69;
            v67[13] = v68;
            v126 = v68 * v69;
            v67[15] = v68 * v69;
            v67[16] = 8 * v68;
            v70 = v67[7] % v68;
            v71 = v67[8];
            if ( v70 == 0 )
              v70 = v68;
            v67[17] = v70;
            v72 = v71 % v67[3];
            if ( v72 == 0 )
              v72 = v67[3];
            v67[18] = v72;
            if ( (int)(v125[63] + v126) > 10 )
            {
              *(uint32_t *)(*v125 + 20) = 13;
              G4_VCALL<void>(v125, 0);
            }
            if ( (int)v126 > 0 )
            {
              v121 = v126 - 1;
              v128 = v125[63];
              v123 = v128 + 64;
              v73 = v128;
              v74 = v126 - 1;
              v75 = -((uint8_t)(((uint8_t)(uintptr_t)(v125) + 4 * (v128 + 64)) & 0xF) >> 2) & 3;
              if ( v75 > v126 )
                v75 = v126;
              if ( v75 == 0 )
                goto LABEL_193;
              v127 = v75;
              do
              {
                v125[v73 + 64] = v66;
                --v74;
                ++v73;
              }
              while ( v75 > v73 - v128 );
              if ( v126 != v75 )
              {
LABEL_193:
                v126 -= v75;
                v127 = v126 >> 2;
                v122 = 4 * (v126 >> 2);
                if ( v122 == 0 )
                  goto LABEL_125;
                v76 = v123 + v75;
                v123 = v66;
                v77 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v66), 0);
                v78 = (__m128i *)&v125[v76];
                v79 = 0;
                do
                {
                  ++v79;
                  *v78++ = v77;
                }
                while ( v79 < v127 );
                v74 -= v122;
                v73 += v122;
                if ( v126 != v122 )
                {
LABEL_125:
                  v127 = 0;
                  v80 = v74 + 1;
                  v81 = 0;
                  do
                    v125[v73 + 64 + v81++] = v66;
                  while ( (int)(v80 - v81) > 0 );
                }
              }
              v125[63] = v121 + v128 + 1;
            }
            ++v66;
          }
          while ( v66 < v125[56] );
          v3 = v125;
        }
      }
      v82 = v3[47];
      if ( v82 > 0 )
      {
        v83 = v82 * v3[61];
        v84 = 0xFFFF;
        if ( v83 <= 0xFFFF )
          v84 = v83;
        v3[46] = v84;
      }
    }
    (*(void (**)(uint32_t *, uint32_t, int, int, unsigned int, int, signed int, uint32_t *, uint32_t *, unsigned int, unsigned int, signed int))v3[86])(
      v3,
      0,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127,
      v128);
    (*(void (**)(uint32_t *, int))v3[81])(v3, 2);
    if ( *(uint32_t *)(a3 + 28) == 0 )
      (*(void (**)(uint32_t *))(v3[82] + 4))(v3);
    (*(void (**)(uint32_t *))(v3[82] + 8))(v3);
    v5 = a3;
    *(uint8_t *)(a3 + 12) = 0;
    goto LABEL_5;
  }
  v8 = a1[42];
  if ( v8 != 0 )
  {
    v9 = (int *)(v8 + 36 * v124[7]);
    v10 = *v9;
    a1[56] = *v9;
    if ( *v9 > 0 )
    {
      v128 = a1[16];
      v11 = 0;
      do
      {
        a1[v11 + 57] = v128 + 84 * v9[v11 + 1];
        ++v11;
      }
      while ( v11 < *v9 );
    }
    a1[74] = v9[5];
    a1[75] = v9[6];
    a1[76] = v9[7];
    a1[77] = v9[8];
    goto LABEL_13;
  }
  v10 = a1[14];
  if ( v10 > 4 )
  {
    *(uint32_t *)(*a1 + 20) = 26;
    *(uint32_t *)(*a1 + 24) = a1[14];
    *(uint32_t *)(*a1 + 28) = 4;
    G4_VCALL<void>(a1, 0);
    v10 = a1[14];
  }
  a1[56] = v10;
  if ( v10 > 0 )
  {
    v85 = a1[16];
    v126 = v85;
    v86 = -((uint8_t)(((uint8_t)(uintptr_t)(a1) - 28) & 0xF) >> 2) & 3;
    if ( v10 <= v86 )
      v86 = v10;
    v127 = v86;
    if ( v86 == 0 )
    {
      j = 0;
      goto LABEL_143;
    }
    v87 = v86;
    for ( j = 0; j < v87; ++j )
    {
      a1[j + 57] = v85;
      v85 += 84;
    }
    if ( v10 != v127 )
    {
LABEL_143:
      v125 = (uint32_t *)(v10 - v127);
      v128 = (v10 - v127) >> 2;
      v122 = 4 * v128;
      if ( 4 * v128 == 0 )
        goto LABEL_148;
      v121 = j + 2;
g4_m128_lane<int64_t>(v90, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(j), _mm_cvtsi32_si128(j + 1)), 0);
      v89 = (__m128i *)&a1[v127 + 57];
g4_m128_lane<int64_t>(v90, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(j + 2), _mm_cvtsi32_si128(j + 3)), 0);
      v91 = 0;
      v92 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v126), 0);
      while ( 1 )
      {
        ++v91;
        v93 = _mm_add_epi32(v90, G4_BITCAST<__m128i>(xmmword_1C7C400));
        *v89++ = _mm_add_epi32(
                   _mm_unpacklo_epi32(
                     _mm_shuffle_epi32(_mm_mul_epu32(v90, G4_BITCAST<__m128i>(xmmword_1C7C6F0)), 8),
                     _mm_shuffle_epi32(
                       _mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C6F0), 4), _mm_srli_si128(v90, 4)),
                       8)),
                   v92);
        if ( v91 >= v128 )
          break;
        v90 = v93;
      }
      j += v122;
      if ( v125 != (uint32_t *)v122 )
      {
LABEL_148:
        v94 = v126 + 84 * j;
        do
        {
          a1[j++ + 57] = v94;
          v94 += 84;
        }
        while ( v10 > (int)j );
      }
    }
  }
  *(g4_int128_t *)(a1 + 74) = xmmword_1C7C700;
LABEL_13:
  if ( v10 == 1 )
  {
    v57 = (uint32_t *)a1[57];
    a1[61] = v57[7];
    a1[62] = v57[8];
    v58 = v57[3];
    v59 = v57[8];
    v57[13] = 1;
    v60 = v59 % v58;
    v57[14] = 1;
    v57[15] = 1;
    v57[16] = 8;
    v57[17] = 1;
    if ( v59 % v58 == 0 )
      v60 = v58;
    v57[18] = v60;
    a1[63] = 1;
    a1[64] = 0;
  }
  else
  {
    if ( (unsigned int)(v10 - 1) > 3 )
    {
      *(uint32_t *)(*a1 + 20) = 26;
      *(uint32_t *)(*a1 + 24) = a1[56];
      *(uint32_t *)(*a1 + 28) = 4;
      G4_VCALL<void>(a1, 0);
    }
    a1[61] = jdiv_round_up(a1[7], 8 * a1[53]);
    a1[62] = jdiv_round_up(a1[8], 8 * a1[54]);
    v12 = a1[56];
    a1[63] = 0;
    if ( v12 > 0 )
    {
      v125 = a1;
      v13 = 0;
      do
      {
        v14 = (uint32_t *)a1[v13 + 57];
        v15 = v14[2];
        v16 = v14[3];
        v14[14] = v16;
        v14[13] = v15;
        v126 = v15 * v16;
        v14[15] = v15 * v16;
        v14[16] = 8 * v15;
        if ( v14[7] % v15 != 0 )
          v15 = v14[7] % v15;
        v17 = v14[8] % v14[3];
        v14[17] = v15;
        if ( v17 == 0 )
          v17 = v14[3];
        v14[18] = v17;
        if ( (int)(a1[63] + v126) > 10 )
        {
          *(uint32_t *)(*a1 + 20) = 13;
          G4_VCALL<void>(a1, 0);
        }
        if ( (int)v126 > 0 )
        {
          v121 = v126 - 1;
          v128 = a1[63];
          v123 = v128 + 64;
          v18 = v128;
          v19 = v126 - 1;
          v20 = -((uint8_t)(((uint8_t)(uintptr_t)(a1) + 4 * (v128 + 64)) & 0xF) >> 2) & 3;
          if ( v20 > v126 )
            v20 = v126;
          if ( v20 == 0 )
            goto LABEL_194;
          v127 = v20;
          do
          {
            a1[v18 + 64] = v13;
            --v19;
            ++v18;
          }
          while ( v20 > v18 - v128 );
          if ( v126 != v20 )
          {
LABEL_194:
            v126 -= v20;
            v127 = v126 >> 2;
            v122 = 4 * (v126 >> 2);
            if ( v122 == 0 )
              goto LABEL_35;
            v21 = v123 + v20;
            v123 = v13;
            v22 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v13), 0);
            v23 = (__m128i *)&a1[v21];
            v24 = 0;
            do
            {
              ++v24;
              *v23++ = v22;
            }
            while ( v24 < v127 );
            v19 -= v122;
            v18 += v122;
            if ( v126 != v122 )
            {
LABEL_35:
              v127 = 0;
              v25 = v19 + 1;
              v26 = 0;
              do
                a1[v18 + 64 + v26++] = v13;
              while ( (int)(v25 - v26) > 0 );
            }
          }
          a1[63] = v121 + v128 + 1;
        }
        ++v13;
      }
      while ( v13 < a1[56] );
      v3 = a1;
    }
  }
  v27 = v3[47];
  if ( v27 > 0 )
  {
    v28 = v27 * v3[61];
    v29 = 0xFFFF;
    if ( v28 <= 0xFFFF )
      v29 = v28;
    v3[46] = v29;
  }
  if ( *((uint8_t *)v3 + 172) == 0 )
  {
    (*(void (**)(uint32_t *))v3[83])(v3);
    (*(void (**)(uint32_t *))v3[84])(v3);
    (*(void (**)(uint32_t *, uint32_t))v3[80])(v3, 0);
  }
  (*(void (**)(uint32_t *, int, int, int, unsigned int, int, signed int, uint32_t *, uint32_t *, unsigned int, unsigned int, signed int))v3[85])(
    v3,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  (*(void (**)(uint32_t *, uint32_t))v3[86])(v3, *((uint8_t *)v3 + 174));
  (*(void (**)(uint32_t *, int))v3[81])(v3, 3 * (*(uint32_t *)(a3 + 24) >= 2));
  (*(void (**)(uint32_t *, uint32_t))v3[79])(v3, 0);
  v5 = a3;
  *(uint8_t *)(a3 + 12) = *((uint8_t *)v3 + 174) == 0;
LABEL_5:
  v6 = *(uint32_t *)(v5 + 20);
  *(uint8_t *)(v5 + 13) = v6 == *(uint32_t *)(v5 + 24) - 1;
  result = v3[2];
  if ( result != 0 )
  {
    *(uint32_t *)(result + 12) = v6;
    result = v3[2];
    *(uint32_t *)(result + 16) = *(uint32_t *)(v5 + 24);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F89080  (binary VA: 0xf89080)
// Original: sub_F89080
// ----------------------------------------------------------------------------
int sub_F89080(int a1, char a2)
{
  int v2;
  char v3;
  int v4;
  bool v5;
  int (*v6)(int, int);
  int (*v7)(int);
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  uint16_t *v14;
  uint16_t *v15;
  int result;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  uint16_t *v23;
  uint16_t *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;

  v2 = a1;
  v3 = a2;
  v4 = *(uint32_t *)(a1 + 344);
  *(uint32_t *)(v4 + 32) = a1;
  *(uint8_t *)(v4 + 12) = a2;
  v5 = *(uint32_t *)(a1 + 296) == 0;
  if ( *(uint32_t *)(a1 + 304) != 0 )
  {
    if ( *(uint32_t *)(a1 + 296) != 0 )
    {
      *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(sub_F8AFC0);
      if ( *(uint32_t *)(v4 + 64) == 0 )
      {
        *(uint32_t *)(v4 + 64) = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1000);
        v3 = a2;
        v5 = false;
      }
    }
    else
    {
      *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(sub_F8AD80);
    }
  }
  else
  {
    if ( *(uint32_t *)(a1 + 296) != 0 )
      v6 = (int (*)(int, int))(uintptr_t)(sub_F8C830);
    else
      v6 = sub_F8A8F0;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v6);
  }
  v7 = sub_F89AE0;
  if ( v3 != 0 )
    v7 = (int (*)(int))(uintptr_t)(sub_F89480);
  *(uint32_t *)(v4 + 8) = (uint32_t)(uintptr_t)(v7);
  if ( *(int *)(a1 + 224) > 0 )
  {
    if ( v5 )
    {
      if ( v3 != 0 )
      {
        v17 = v4;
        v18 = 0;
        do
        {
          v19 = *(uint32_t *)(a1 + 4 * v18 + 228);
          *(uint32_t *)(v17 + 4 * v18 + 36) = 0;
          if ( *(uint32_t *)(a1 + 304) == 0 )
          {
            v20 = *(uint32_t *)(v19 + 20);
            if ( v20 > 3 )
            {
              *(uint32_t *)(*(uint32_t *)a1 + 20) = 50;
              *(uint32_t *)(*(uint32_t *)a1 + 24) = v20;
              v30 = v17;
              (**(void (***)(int))a1)(a1);
              v17 = v30;
            }
            v21 = v20 + 20;
            v22 = *(uint32_t *)(v17 + 4 * v21 + 12);
            if ( v22 == 0 )
            {
              v33 = v17;
              v22 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1028);
              v17 = v33;
              *(uint32_t *)(v33 + 4 * v21 + 12) = v22;
            }
            v23 = (uint16_t *)v22;
            v35 = 1028;
            if ( (v22 & 1) != 0 )
            {
              *(uint8_t *)v22 = 0;
              v23 = (uint16_t *)(v22 + 1);
              v35 = 1027;
            }
            if ( ((uint8_t)(uintptr_t)(v23) & 2) != 0 )
            {
              *v23++ = 0;
              v35 -= 2;
            }
            memset(v23, 0, 4 * (v35 >> 2));
            v24 = &v23[2 * (v35 >> 2)];
            if ( (v35 & 2) != 0 )
              *v24++ = 0;
            if ( (v35 & 1) != 0 )
              *(uint8_t *)v24 = 0;
          }
          ++v18;
        }
        while ( *(uint32_t *)(a1 + 224) > v18 );
        v4 = v17;
      }
      else
      {
        v28 = 0;
        do
        {
          v29 = *(uint32_t *)(a1 + 4 * v28 + 228);
          *(uint32_t *)(v4 + 4 * v28 + 36) = 0;
          if ( *(uint32_t *)(a1 + 304) == 0 )
            jpeg_make_c_derived_tbl(a1, 1, *(uint32_t *)(v29 + 20), v4 + 4 * *(uint32_t *)(v29 + 20) + 76);
          ++v28;
        }
        while ( v28 < *(uint32_t *)(a1 + 224) );
      }
    }
    else if ( v3 != 0 )
    {
      v8 = 0;
      v9 = v4;
      do
      {
        v10 = *(uint32_t *)(a1 + 4 * v8 + 228);
        *(uint32_t *)(v9 + 4 * v8 + 36) = 0;
        v11 = *(uint32_t *)(v10 + 24);
        *(uint32_t *)(v9 + 52) = v11;
        if ( v11 > 3 )
        {
          *(uint32_t *)(*(uint32_t *)a1 + 20) = 50;
          *(uint32_t *)(*(uint32_t *)a1 + 24) = v11;
          v31 = v9;
          (**(void (***)(int))a1)(a1);
          v9 = v31;
        }
        v12 = v11 + 20;
        v13 = *(uint32_t *)(v9 + 4 * v12 + 12);
        if ( v13 == 0 )
        {
          v32 = v9;
          v13 = (**(int (***)(int, int, int))(a1 + 4))(a1, 1, 1028);
          v9 = v32;
          *(uint32_t *)(v32 + 4 * v12 + 12) = v13;
        }
        v14 = (uint16_t *)v13;
        v34 = 1028;
        if ( (v13 & 1) != 0 )
        {
          *(uint8_t *)v13 = 0;
          v14 = (uint16_t *)(v13 + 1);
          v34 = 1027;
        }
        if ( ((uint8_t)(uintptr_t)(v14) & 2) != 0 )
        {
          *v14++ = 0;
          v34 -= 2;
        }
        memset(v14, 0, 4 * (v34 >> 2));
        v15 = &v14[2 * (v34 >> 2)];
        if ( (v34 & 2) != 0 )
          *v15++ = 0;
        if ( (v34 & 1) != 0 )
          *(uint8_t *)v15 = 0;
        ++v8;
      }
      while ( v8 < *(uint32_t *)(a1 + 224) );
      v2 = a1;
      v4 = v9;
    }
    else
    {
      v25 = 0;
      do
      {
        v26 = *(uint32_t *)(a1 + 4 * v25 + 228);
        *(uint32_t *)(v4 + 4 * v25++ + 36) = 0;
        v27 = *(uint32_t *)(v26 + 24);
        *(uint32_t *)(v4 + 52) = v27;
        jpeg_make_c_derived_tbl(a1, 0, v27, v4 + 4 * v27 + 76);
      }
      while ( v25 < *(uint32_t *)(a1 + 224) );
    }
  }
  *(uint32_t *)(v4 + 56) = 0;
  *(uint32_t *)(v4 + 60) = 0;
  *(uint32_t *)(v4 + 24) = 0;
  *(uint32_t *)(v4 + 28) = 0;
  result = *(uint32_t *)(v2 + 184);
  *(uint32_t *)(v4 + 72) = 0;
  *(uint32_t *)(v4 + 68) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F89480  (binary VA: 0xf89480)
// Original: sub_F89480
// ----------------------------------------------------------------------------
int sub_F89480(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  char v8;
  uint8_t *v9;
  int v10;
  int v11;
  uint8_t *v12;
  int v13;
  bool v14;
  char v15;
  int v16;
  int v17;
  char v18;
  int v19;
  int v20;
  int result;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  uint8_t *v31;
  int v32;
  int v33;
  char v34;
  int v35;
  int v36;
  char v37;
  int v38;
  char v39;
  int v40;
  int v41;
  uint8_t *v42;
  int v43;
  char v44;
  int v45;
  int v46;
  char v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  uint8_t *v68;
  uint32_t v69[8];

  v1 = a1[86];
  v2 = *(uint32_t *)(v1 + 56);
  if ( v2 == 0 )
    goto LABEL_32;
  v3 = 0;
  v4 = 0;
  v5 = v2 >> 1;
  if ( v5 != 0 )
  {
    do
    {
      ++v4;
      v5 >>= 1;
    }
    while ( v5 != 0 );
    if ( v4 > 14 )
    {
      *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 40;
      (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
    }
    v3 = 16 * v4;
  }
  v6 = *(uint32_t *)(v1 + 52);
  if ( *(uint8_t *)(v1 + 12) != 0 )
  {
    v7 = (uint32_t *)(*(uint32_t *)(v1 + 4 * v6 + 92) + 4 * v3);
    ++*v7;
    v8 = *(uint8_t *)(v1 + 12);
    goto LABEL_9;
  }
  v28 = *(uint32_t *)(v1 + 4 * v6 + 76);
  v29 = *(char *)(v28 + v3 + 1024);
  v59 = *(uint32_t *)(v28 + 4 * v3);
  v63 = *(uint32_t *)(v1 + 28);
  if ( *(uint8_t *)(v28 + v3 + 1024) == 0 )
  {
    *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 40;
    (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
    v8 = *(uint8_t *)(v1 + 12);
    v29 = 0;
    if ( v8 != 0 )
    {
LABEL_9:
      if ( v4 == 0 )
        goto LABEL_10;
      goto LABEL_64;
    }
  }
  v8 = 0;
  v64 = v63 + v29;
  v30 = *(uint32_t *)(v1 + 24) | ((v59 & ((1 << v29) - 1)) << (24 - v64));
  if ( v64 > 7 )
  {
    v67 = v4;
    v31 = *(uint8_t **)(v1 + 16);
    v32 = v64;
    while ( 1 )
    {
      *v31 = BYTE2(v30);
      v33 = *(uint32_t *)(v1 + 20) - 1;
      ++v31;
      v14 = *(uint32_t *)(v1 + 20) == 1;
      *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v31);
      *(uint32_t *)(v1 + 20) = v33;
      if ( v14 )
      {
        v60 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
        v34 = (*(int (**)(uint32_t))(v60 + 12))(*(uint32_t *)(v1 + 32));
        v35 = BYTE2(v30);
        if ( v34 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
          v35 = BYTE2(v30);
        }
        v31 = *(uint8_t **)v60;
        *(uint32_t *)(v1 + 16) = *(uint32_t *)v60;
        *(uint32_t *)(v1 + 20) = *(uint32_t *)(v60 + 4);
        if ( v35 != 255 )
          goto LABEL_53;
LABEL_58:
        *v31 = 0;
        v36 = *(uint32_t *)(v1 + 20) - 1;
        ++v31;
        v14 = *(uint32_t *)(v1 + 20) == 1;
        *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v31);
        *(uint32_t *)(v1 + 20) = v36;
        if ( !v14 )
          goto LABEL_53;
        v51 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
        v37 = (*(int (**)(uint32_t))(v51 + 12))(*(uint32_t *)(v1 + 32));
        v38 = v51;
        if ( v37 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
          v38 = v51;
        }
        v31 = *(uint8_t **)v38;
        v32 -= 8;
        *(uint32_t *)(v1 + 16) = *(uint32_t *)v38;
        v30 <<= 8;
        *(uint32_t *)(v1 + 20) = *(uint32_t *)(v38 + 4);
        if ( v32 <= 7 )
        {
LABEL_62:
          v4 = v67;
          v64 &= 7u;
          v8 = *(uint8_t *)(v1 + 12);
          break;
        }
      }
      else
      {
        if ( BYTE2(v30) == 255 )
          goto LABEL_58;
LABEL_53:
        v32 -= 8;
        v30 <<= 8;
        if ( v32 <= 7 )
          goto LABEL_62;
      }
    }
  }
  *(uint32_t *)(v1 + 24) = v30;
  *(uint32_t *)(v1 + 28) = v64;
  if ( v4 == 0 )
    goto LABEL_10;
LABEL_64:
  if ( v8 != 0 )
  {
    *(uint32_t *)(v1 + 56) = 0;
    goto LABEL_31;
  }
  v39 = v4;
  v40 = *(uint32_t *)(v1 + 28) + v4;
  v65 = v40;
  v41 = *(uint32_t *)(v1 + 24) | ((*(uint32_t *)(v1 + 56) & ((1 << v39) - 1)) << (24 - v40));
  if ( v40 <= 7 )
    goto LABEL_81;
  v42 = *(uint8_t **)(v1 + 16);
  do
  {
    *v42 = BYTE2(v41);
    v43 = *(uint32_t *)(v1 + 20) - 1;
    ++v42;
    v14 = *(uint32_t *)(v1 + 20) == 1;
    *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v42);
    *(uint32_t *)(v1 + 20) = v43;
    if ( !v14 )
    {
      if ( BYTE2(v41) != 255 )
        goto LABEL_68;
LABEL_73:
      *v42 = 0;
      v46 = *(uint32_t *)(v1 + 20) - 1;
      ++v42;
      v14 = *(uint32_t *)(v1 + 20) == 1;
      *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v42);
      *(uint32_t *)(v1 + 20) = v46;
      if ( v14 )
      {
        v52 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
        v47 = (*(int (**)(uint32_t))(v52 + 12))(*(uint32_t *)(v1 + 32));
        v48 = v52;
        if ( v47 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
          v48 = v52;
        }
        v42 = *(uint8_t **)v48;
        *(uint32_t *)(v1 + 16) = *(uint32_t *)v48;
        *(uint32_t *)(v1 + 20) = *(uint32_t *)(v48 + 4);
      }
      goto LABEL_68;
    }
    v61 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
    v44 = (*(int (**)(uint32_t))(v61 + 12))(*(uint32_t *)(v1 + 32));
    v45 = BYTE2(v41);
    if ( v44 == 0 )
    {
      *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
      (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
      v45 = BYTE2(v41);
    }
    v42 = *(uint8_t **)v61;
    *(uint32_t *)(v1 + 16) = *(uint32_t *)v61;
    *(uint32_t *)(v1 + 20) = *(uint32_t *)(v61 + 4);
    if ( v45 == 255 )
      goto LABEL_73;
LABEL_68:
    v40 -= 8;
    v41 <<= 8;
  }
  while ( v40 > 7 );
  v65 &= 7u;
  v8 = *(uint8_t *)(v1 + 12);
LABEL_81:
  *(uint32_t *)(v1 + 24) = v41;
  *(uint32_t *)(v1 + 28) = v65;
LABEL_10:
  v66 = *(uint32_t *)(v1 + 60);
  v9 = *(uint8_t **)(v1 + 64);
  *(uint32_t *)(v1 + 56) = 0;
  v68 = v9;
  if ( v8 == 0 && v66 != 0 )
  {
    v62 = *(uint32_t *)(v1 + 28);
    while ( 1 )
    {
      if ( v8 == 0 )
      {
        v10 = v62 + 1;
        v11 = *(uint32_t *)(v1 + 24) | ((*v68 & 1) << (23 - v62));
        if ( v62 + 1 > 7 )
        {
          v12 = *(uint8_t **)(v1 + 16);
          while ( 1 )
          {
            *v12 = BYTE2(v11);
            v13 = *(uint32_t *)(v1 + 20) - 1;
            ++v12;
            v14 = *(uint32_t *)(v1 + 20) == 1;
            *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v12);
            *(uint32_t *)(v1 + 20) = v13;
            if ( v14 )
            {
              v58 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
              v15 = (*(int (**)(uint32_t))(v58 + 12))(*(uint32_t *)(v1 + 32));
              v16 = BYTE2(v11);
              if ( v15 == 0 )
              {
                *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
                (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
                v16 = BYTE2(v11);
              }
              v12 = *(uint8_t **)v58;
              *(uint32_t *)(v1 + 16) = *(uint32_t *)v58;
              *(uint32_t *)(v1 + 20) = *(uint32_t *)(v58 + 4);
              if ( v16 != 255 )
                goto LABEL_17;
LABEL_22:
              *v12 = 0;
              v17 = *(uint32_t *)(v1 + 20) - 1;
              ++v12;
              v14 = *(uint32_t *)(v1 + 20) == 1;
              *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v12);
              *(uint32_t *)(v1 + 20) = v17;
              if ( !v14 )
                goto LABEL_17;
              v50 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
              v18 = (*(int (**)(uint32_t))(v50 + 12))(*(uint32_t *)(v1 + 32));
              v19 = v50;
              if ( v18 == 0 )
              {
                *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
                (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
                v19 = v50;
              }
              v12 = *(uint8_t **)v19;
              v10 -= 8;
              *(uint32_t *)(v1 + 16) = *(uint32_t *)v19;
              v11 <<= 8;
              *(uint32_t *)(v1 + 20) = *(uint32_t *)(v19 + 4);
              if ( v10 <= 7 )
              {
LABEL_26:
                v62 = ((uint8_t)v62 - 7) & 7;
                v20 = v62;
                goto LABEL_27;
              }
            }
            else
            {
              if ( BYTE2(v11) == 255 )
                goto LABEL_22;
LABEL_17:
              v10 -= 8;
              v11 <<= 8;
              if ( v10 <= 7 )
                goto LABEL_26;
            }
          }
        }
        ++v62;
        v20 = v10;
LABEL_27:
        *(uint32_t *)(v1 + 24) = v11;
        *(uint32_t *)(v1 + 28) = v20;
      }
      if ( --v66 == 0 )
        break;
      ++v68;
      v8 = *(uint8_t *)(v1 + 12);
    }
  }
LABEL_31:
  *(uint32_t *)(v1 + 60) = 0;
LABEL_32:
  v69[0] = 0;
  result = a1[56];
  if ( result > 0 )
  {
    v22 = 0;
    if ( a1[74] != 0 )
    {
      v23 = v1;
      do
      {
        v24 = *(uint32_t *)(a1[v22 + 57] + 24);
        if ( *((uint8_t *)v69 + v24) == 0 )
        {
          v25 = a1[v24 + 25];
          if ( v25 == 0 )
          {
            v57 = v23;
            v25 = jpeg_alloc_huff_table((int)(uintptr_t)(a1));
            a1[v24 + 25] = v25;
            v23 = v57;
          }
          v54 = v23;
          jpeg_gen_optimal_table(a1, v25, *(uint32_t *)(v23 + 4 * v24 + 92));
          *((uint8_t *)v69 + v24) = 1;
          result = a1[56];
          v23 = v54;
        }
        ++v22;
      }
      while ( result > v22 );
      return result;
    }
    while ( 1 )
    {
LABEL_45:
      if ( a1[76] != 0 )
        goto LABEL_44;
      v49 = *(uint32_t *)(a1[v22 + 57] + 20);
      if ( *((uint8_t *)v69 + v49) == 0 )
        break;
      if ( ++v22 >= result )
        return result;
    }
    v26 = v49 + 20;
    v27 = a1[v49 + 21];
    if ( v27 == 0 )
    {
      v53 = v49 + 20;
      v56 = *(uint32_t *)(a1[v22 + 57] + 20);
      v27 = jpeg_alloc_huff_table((int)(uintptr_t)(a1));
      v26 = v53;
      a1[v53 + 1] = v27;
      v49 = v56;
    }
    v55 = v49;
    jpeg_gen_optimal_table(a1, v27, *(uint32_t *)(v1 + 4 * v26 + 12));
    result = a1[56];
    *((uint8_t *)v69 + v55) = 1;
LABEL_44:
    if ( ++v22 >= result )
      return result;
    goto LABEL_45;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F89AE0  (binary VA: 0xf89ae0)
// Original: sub_F89AE0
// ----------------------------------------------------------------------------
int sub_F89AE0(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  char v8;
  uint8_t *v9;
  int v10;
  int v11;
  uint8_t *v12;
  int v13;
  bool v14;
  char v15;
  int v16;
  int v17;
  char v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint8_t *v24;
  int v25;
  int v26;
  char v27;
  int v28;
  int v29;
  char v30;
  int v31;
  int v32;
  uint8_t *v33;
  int i;
  int v35;
  char v36;
  int v37;
  int v38;
  char v39;
  int v40;
  int v41;
  int v42;
  uint8_t *v43;
  int v44;
  char v45;
  int v46;
  int v47;
  char v48;
  int v49;
  int result;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  uint8_t *v64;

  v1 = *(uint32_t *)(a1 + 344);
  *(uint32_t *)(v1 + 16) = **(uint32_t **)(a1 + 24);
  *(uint32_t *)(v1 + 20) = *(uint32_t *)(*(uint32_t *)(a1 + 24) + 4);
  v2 = *(uint32_t *)(v1 + 56);
  if ( v2 == 0 )
  {
    v60 = *(uint32_t *)(v1 + 28);
    v8 = *(uint8_t *)(v1 + 12);
    goto LABEL_59;
  }
  v3 = 0;
  v4 = 0;
  v5 = v2 >> 1;
  if ( v5 != 0 )
  {
    do
    {
      ++v4;
      v5 >>= 1;
    }
    while ( v5 != 0 );
    if ( v4 > 14 )
    {
      *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 40;
      (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
    }
    v3 = 16 * v4;
  }
  v6 = *(uint32_t *)(v1 + 52);
  if ( *(uint8_t *)(v1 + 12) != 0 )
  {
    v7 = (uint32_t *)(*(uint32_t *)(v1 + 4 * v6 + 92) + 4 * v3);
    ++*v7;
    v60 = *(uint32_t *)(v1 + 28);
    v8 = *(uint8_t *)(v1 + 12);
    goto LABEL_9;
  }
  v21 = *(uint32_t *)(v1 + 4 * v6 + 76);
  v22 = *(char *)(v21 + v3 + 1024);
  v56 = *(uint32_t *)(v21 + 4 * v3);
  v61 = *(uint32_t *)(v1 + 28);
  if ( *(uint8_t *)(v21 + v3 + 1024) == 0 )
  {
    *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 40;
    (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
    v8 = *(uint8_t *)(v1 + 12);
    v22 = 0;
    if ( v8 != 0 )
    {
      v60 = *(uint32_t *)(v1 + 28);
LABEL_9:
      if ( v4 == 0 )
        goto LABEL_10;
      goto LABEL_44;
    }
  }
  v8 = 0;
  v60 = v61 + v22;
  v23 = *(uint32_t *)(v1 + 24) | ((v56 & ((1 << v22) - 1)) << (24 - v60));
  if ( v60 > 7 )
  {
    v63 = v4;
    v24 = *(uint8_t **)(v1 + 16);
    v25 = v60;
    while ( 1 )
    {
      *v24 = BYTE2(v23);
      v26 = *(uint32_t *)(v1 + 20) - 1;
      ++v24;
      v14 = *(uint32_t *)(v1 + 20) == 1;
      *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v24);
      *(uint32_t *)(v1 + 20) = v26;
      if ( v14 )
      {
        v57 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
        v27 = (*(int (**)(uint32_t))(v57 + 12))(*(uint32_t *)(v1 + 32));
        v28 = BYTE2(v23);
        if ( v27 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
          v28 = BYTE2(v23);
        }
        v24 = *(uint8_t **)v57;
        *(uint32_t *)(v1 + 16) = *(uint32_t *)v57;
        *(uint32_t *)(v1 + 20) = *(uint32_t *)(v57 + 4);
        if ( v28 != 255 )
          goto LABEL_33;
LABEL_38:
        *v24 = 0;
        v29 = *(uint32_t *)(v1 + 20) - 1;
        ++v24;
        v14 = *(uint32_t *)(v1 + 20) == 1;
        *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v24);
        *(uint32_t *)(v1 + 20) = v29;
        if ( !v14 )
          goto LABEL_33;
        v52 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
        v30 = (*(int (**)(uint32_t))(v52 + 12))(*(uint32_t *)(v1 + 32));
        v31 = v52;
        if ( v30 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
          v31 = v52;
        }
        v24 = *(uint8_t **)v31;
        v25 -= 8;
        *(uint32_t *)(v1 + 16) = *(uint32_t *)v31;
        v23 <<= 8;
        *(uint32_t *)(v1 + 20) = *(uint32_t *)(v31 + 4);
        if ( v25 <= 7 )
        {
LABEL_42:
          v4 = v63;
          v60 &= 7u;
          v8 = *(uint8_t *)(v1 + 12);
          break;
        }
      }
      else
      {
        if ( BYTE2(v23) == 255 )
          goto LABEL_38;
LABEL_33:
        v25 -= 8;
        v23 <<= 8;
        if ( v25 <= 7 )
          goto LABEL_42;
      }
    }
  }
  *(uint32_t *)(v1 + 24) = v23;
  *(uint32_t *)(v1 + 28) = v60;
  if ( v4 == 0 )
    goto LABEL_10;
LABEL_44:
  if ( v8 != 0 )
  {
    *(uint32_t *)(v1 + 56) = 0;
    goto LABEL_58;
  }
  v60 += v4;
  v32 = *(uint32_t *)(v1 + 24) | ((*(uint32_t *)(v1 + 56) & ((1 << v4) - 1)) << (24 - v60));
  if ( v60 <= 7 )
    goto LABEL_78;
  v33 = *(uint8_t **)(v1 + 16);
  for ( i = v60; i > 7; i -= 8 )
  {
    *v33 = BYTE2(v32);
    v35 = *(uint32_t *)(v1 + 20) - 1;
    ++v33;
    v14 = *(uint32_t *)(v1 + 20) == 1;
    *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v33);
    *(uint32_t *)(v1 + 20) = v35;
    if ( !v14 )
    {
      if ( BYTE2(v32) != 255 )
        goto LABEL_48;
LABEL_53:
      *v33 = 0;
      v38 = *(uint32_t *)(v1 + 20) - 1;
      ++v33;
      v14 = *(uint32_t *)(v1 + 20) == 1;
      *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v33);
      *(uint32_t *)(v1 + 20) = v38;
      if ( v14 )
      {
        v53 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
        v39 = (*(int (**)(uint32_t))(v53 + 12))(*(uint32_t *)(v1 + 32));
        v40 = v53;
        if ( v39 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
          v40 = v53;
        }
        v33 = *(uint8_t **)v40;
        *(uint32_t *)(v1 + 16) = *(uint32_t *)v40;
        *(uint32_t *)(v1 + 20) = *(uint32_t *)(v40 + 4);
      }
      goto LABEL_48;
    }
    v58 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
    v36 = (*(int (**)(uint32_t))(v58 + 12))(*(uint32_t *)(v1 + 32));
    v37 = BYTE2(v32);
    if ( v36 == 0 )
    {
      *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
      (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
      v37 = BYTE2(v32);
    }
    v33 = *(uint8_t **)v58;
    *(uint32_t *)(v1 + 16) = *(uint32_t *)v58;
    *(uint32_t *)(v1 + 20) = *(uint32_t *)(v58 + 4);
    if ( v37 == 255 )
      goto LABEL_53;
LABEL_48:
    v32 <<= 8;
  }
  v60 &= 7u;
  v8 = *(uint8_t *)(v1 + 12);
LABEL_78:
  *(uint32_t *)(v1 + 24) = v32;
  *(uint32_t *)(v1 + 28) = v60;
LABEL_10:
  v62 = *(uint32_t *)(v1 + 60);
  v9 = *(uint8_t **)(v1 + 64);
  *(uint32_t *)(v1 + 56) = 0;
  v64 = v9;
  if ( v8 == 0 && v62 != 0 )
  {
    while ( 2 )
    {
      if ( v8 == 0 )
      {
        v10 = v60 + 1;
        v11 = *(uint32_t *)(v1 + 24) | ((*v64 & 1) << (23 - v60));
        if ( v60 + 1 > 7 )
        {
          v12 = *(uint8_t **)(v1 + 16);
          while ( 1 )
          {
            *v12 = BYTE2(v11);
            v13 = *(uint32_t *)(v1 + 20) - 1;
            ++v12;
            v14 = *(uint32_t *)(v1 + 20) == 1;
            *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v12);
            *(uint32_t *)(v1 + 20) = v13;
            if ( v14 )
            {
              v55 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
              v15 = (*(int (**)(uint32_t))(v55 + 12))(*(uint32_t *)(v1 + 32));
              v16 = BYTE2(v11);
              if ( v15 == 0 )
              {
                *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
                (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
                v16 = BYTE2(v11);
              }
              v12 = *(uint8_t **)v55;
              *(uint32_t *)(v1 + 16) = *(uint32_t *)v55;
              *(uint32_t *)(v1 + 20) = *(uint32_t *)(v55 + 4);
              if ( v16 != 255 )
                goto LABEL_16;
LABEL_21:
              *v12 = 0;
              v17 = *(uint32_t *)(v1 + 20) - 1;
              ++v12;
              v14 = *(uint32_t *)(v1 + 20) == 1;
              *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v12);
              *(uint32_t *)(v1 + 20) = v17;
              if ( !v14 )
                goto LABEL_16;
              v51 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
              v18 = (*(int (**)(uint32_t))(v51 + 12))(*(uint32_t *)(v1 + 32));
              v19 = v51;
              if ( v18 == 0 )
              {
                *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
                (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
                v19 = v51;
              }
              v12 = *(uint8_t **)v19;
              v10 -= 8;
              *(uint32_t *)(v1 + 16) = *(uint32_t *)v19;
              v11 <<= 8;
              *(uint32_t *)(v1 + 20) = *(uint32_t *)(v19 + 4);
              if ( v10 <= 7 )
              {
LABEL_25:
                v60 = ((uint8_t)v60 - 7) & 7;
                v8 = *(uint8_t *)(v1 + 12);
                v20 = v60;
                goto LABEL_26;
              }
            }
            else
            {
              if ( BYTE2(v11) == 255 )
                goto LABEL_21;
LABEL_16:
              v10 -= 8;
              v11 <<= 8;
              if ( v10 <= 7 )
                goto LABEL_25;
            }
          }
        }
        ++v60;
        v20 = v10;
LABEL_26:
        *(uint32_t *)(v1 + 24) = v11;
        *(uint32_t *)(v1 + 28) = v20;
      }
      if ( --v62 == 0 )
        break;
      ++v64;
      continue;
    }
  }
LABEL_58:
  *(uint32_t *)(v1 + 60) = 0;
LABEL_59:
  if ( v8 == 0 )
  {
    v41 = v60 + 7;
    if ( v60 + 7 > 7 )
    {
      v42 = *(uint32_t *)(v1 + 24) | (127 << (17 - v60));
      v43 = *(uint8_t **)(v1 + 16);
      while ( 1 )
      {
        *v43 = BYTE2(v42);
        v44 = *(uint32_t *)(v1 + 20) - 1;
        ++v43;
        v14 = *(uint32_t *)(v1 + 20) == 1;
        *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v43);
        *(uint32_t *)(v1 + 20) = v44;
        if ( v14 )
        {
          v59 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
          v45 = (*(int (**)(uint32_t))(v59 + 12))(*(uint32_t *)(v1 + 32));
          v46 = BYTE2(v42);
          if ( v45 == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
            v46 = BYTE2(v42);
          }
          v43 = *(uint8_t **)v59;
          *(uint32_t *)(v1 + 16) = *(uint32_t *)v59;
          *(uint32_t *)(v1 + 20) = *(uint32_t *)(v59 + 4);
          if ( v46 != 255 )
            goto LABEL_63;
LABEL_68:
          *v43 = 0;
          v47 = *(uint32_t *)(v1 + 20) - 1;
          ++v43;
          v14 = *(uint32_t *)(v1 + 20) == 1;
          *(uint32_t *)(v1 + 16) = (uint32_t)(uintptr_t)(v43);
          *(uint32_t *)(v1 + 20) = v47;
          if ( !v14 )
            goto LABEL_63;
          v54 = *(uint32_t *)(*(uint32_t *)(v1 + 32) + 24);
          v48 = (*(int (**)(uint32_t))(v54 + 12))(*(uint32_t *)(v1 + 32));
          v49 = v54;
          if ( v48 == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v1 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v1 + 32))(*(uint32_t *)(v1 + 32));
            v49 = v54;
          }
          v43 = *(uint8_t **)v49;
          v41 -= 8;
          *(uint32_t *)(v1 + 16) = *(uint32_t *)v49;
          v42 <<= 8;
          *(uint32_t *)(v1 + 20) = *(uint32_t *)(v49 + 4);
          if ( v41 <= 7 )
            break;
        }
        else
        {
          if ( BYTE2(v42) == 255 )
            goto LABEL_68;
LABEL_63:
          v41 -= 8;
          v42 <<= 8;
          if ( v41 <= 7 )
            break;
        }
      }
    }
  }
  *(uint32_t *)(v1 + 24) = 0;
  *(uint32_t *)(v1 + 28) = 0;
  **(uint32_t **)(a1 + 24) = *(uint32_t *)(v1 + 16);
  result = *(uint32_t *)(a1 + 24);
  *(uint32_t *)(result + 4) = *(uint32_t *)(v1 + 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F8A190  (binary VA: 0xf8a190)
// Original: sub_F8A190
// ----------------------------------------------------------------------------
int sub_F8A190(int a1, char a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int result;
  uint8_t *v10;
  int v11;
  int v12;
  uint8_t *v13;
  int v14;
  bool v15;
  char v16;
  int v17;
  int v18;
  char v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint8_t *v26;
  int v27;
  int v28;
  char v29;
  int v30;
  int v31;
  char v32;
  int v33;
  char v34;
  int v35;
  int v36;
  uint8_t *v37;
  int v38;
  char v39;
  int v40;
  int v41;
  char v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  uint8_t *v48;
  int v49;
  char v50;
  int v51;
  int v52;
  char v53;
  int v54;
  uint8_t *v55;
  int v56;
  uint8_t *v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  uint8_t *v75;

  v3 = *(uint32_t *)(a1 + 56);
  if ( v3 == 0 )
  {
    result = *(uint8_t *)(a1 + 12);
    if ( (uint8_t)result != 0 )
      goto LABEL_60;
    goto LABEL_67;
  }
  v4 = 0;
  v5 = 0;
  v6 = v3 >> 1;
  if ( v6 != 0 )
  {
    do
    {
      ++v5;
      v6 >>= 1;
    }
    while ( v6 != 0 );
    if ( v5 > 14 )
    {
      *(uint32_t *)(**(uint32_t **)(a1 + 32) + 20) = 40;
      (***(void (****)(uint32_t))(a1 + 32))(*(uint32_t *)(a1 + 32));
    }
    v4 = 16 * v5;
  }
  v7 = *(uint32_t *)(a1 + 52);
  if ( *(uint8_t *)(a1 + 12) != 0 )
  {
    v8 = (uint32_t *)(*(uint32_t *)(a1 + 4 * v7 + 92) + 4 * v4);
    ++*v8;
    result = *(uint8_t *)(a1 + 12);
    goto LABEL_9;
  }
  v22 = *(uint32_t *)(a1 + 4 * v7 + 76);
  v23 = *(char *)(v22 + v4 + 1024);
  v24 = *(uint32_t *)(v22 + 4 * v4);
  v66 = *(uint32_t *)(a1 + 28);
  if ( v23 == 0 )
  {
    *(uint32_t *)(**(uint32_t **)(a1 + 32) + 20) = 40;
    v64 = v24;
    (***(void (****)(uint32_t))(a1 + 32))(*(uint32_t *)(a1 + 32));
    result = *(uint8_t *)(a1 + 12);
    v24 = v64;
    v23 = 0;
    if ( (uint8_t)result != 0 )
    {
LABEL_9:
      if ( v5 == 0 )
        goto LABEL_10;
      goto LABEL_45;
    }
  }
  result = 0;
  v71 = v66 + v23;
  v25 = *(uint32_t *)(a1 + 24) | ((v24 & ((1 << v23) - 1)) << (24 - (v66 + v23)));
  if ( v66 + v23 > 7 )
  {
    v74 = v5;
    v26 = *(uint8_t **)(a1 + 16);
    v27 = v66 + v23;
    while ( 1 )
    {
      *v26 = BYTE2(v25);
      v28 = *(uint32_t *)(a1 + 20) - 1;
      ++v26;
      v15 = *(uint32_t *)(a1 + 20) == 1;
      *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v26);
      *(uint32_t *)(a1 + 20) = v28;
      if ( v15 )
      {
        v67 = *(uint32_t *)(*(uint32_t *)(a1 + 32) + 24);
        v29 = (*(int (**)(uint32_t))(v67 + 12))(*(uint32_t *)(a1 + 32));
        v30 = BYTE2(v25);
        if ( v29 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(a1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(a1 + 32))(*(uint32_t *)(a1 + 32));
          v30 = BYTE2(v25);
        }
        v26 = *(uint8_t **)v67;
        *(uint32_t *)(a1 + 16) = *(uint32_t *)v67;
        *(uint32_t *)(a1 + 20) = *(uint32_t *)(v67 + 4);
        if ( v30 != 255 )
          goto LABEL_34;
LABEL_39:
        *v26 = 0;
        v31 = *(uint32_t *)(a1 + 20) - 1;
        ++v26;
        v15 = *(uint32_t *)(a1 + 20) == 1;
        *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v26);
        *(uint32_t *)(a1 + 20) = v31;
        if ( !v15 )
          goto LABEL_34;
        v61 = *(uint32_t *)(*(uint32_t *)(a1 + 32) + 24);
        v32 = (*(int (**)(uint32_t))(v61 + 12))(*(uint32_t *)(a1 + 32));
        v33 = v61;
        if ( v32 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(a1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(a1 + 32))(*(uint32_t *)(a1 + 32));
          v33 = v61;
        }
        v26 = *(uint8_t **)v33;
        v27 -= 8;
        *(uint32_t *)(a1 + 16) = *(uint32_t *)v33;
        v25 <<= 8;
        *(uint32_t *)(a1 + 20) = *(uint32_t *)(v33 + 4);
        if ( v27 <= 7 )
        {
LABEL_43:
          v5 = v74;
          v71 &= 7u;
          result = *(uint8_t *)(a1 + 12);
          break;
        }
      }
      else
      {
        if ( BYTE2(v25) == 255 )
          goto LABEL_39;
LABEL_34:
        v27 -= 8;
        v25 <<= 8;
        if ( v27 <= 7 )
          goto LABEL_43;
      }
    }
  }
  *(uint32_t *)(a1 + 24) = v25;
  *(uint32_t *)(a1 + 28) = v71;
  if ( v5 == 0 )
    goto LABEL_10;
LABEL_45:
  if ( (uint8_t)result != 0 )
  {
    *(uint32_t *)(a1 + 56) = 0;
    goto LABEL_59;
  }
  v34 = v5;
  v35 = *(uint32_t *)(a1 + 28) + v5;
  v72 = v35;
  v36 = *(uint32_t *)(a1 + 24) | ((*(uint32_t *)(a1 + 56) & ((1 << v34) - 1)) << (24 - v35));
  if ( v35 <= 7 )
    goto LABEL_88;
  v37 = *(uint8_t **)(a1 + 16);
  do
  {
    *v37 = BYTE2(v36);
    v38 = *(uint32_t *)(a1 + 20) - 1;
    ++v37;
    v15 = *(uint32_t *)(a1 + 20) == 1;
    *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v37);
    *(uint32_t *)(a1 + 20) = v38;
    if ( !v15 )
    {
      if ( BYTE2(v36) != 255 )
        goto LABEL_49;
LABEL_54:
      *v37 = 0;
      v41 = *(uint32_t *)(a1 + 20) - 1;
      ++v37;
      v15 = *(uint32_t *)(a1 + 20) == 1;
      *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v37);
      *(uint32_t *)(a1 + 20) = v41;
      if ( v15 )
      {
        v62 = *(uint32_t *)(*(uint32_t *)(a1 + 32) + 24);
        v42 = (*(int (**)(uint32_t))(v62 + 12))(*(uint32_t *)(a1 + 32));
        v43 = v62;
        if ( v42 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(a1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(a1 + 32))(*(uint32_t *)(a1 + 32));
          v43 = v62;
        }
        v37 = *(uint8_t **)v43;
        *(uint32_t *)(a1 + 16) = *(uint32_t *)v43;
        *(uint32_t *)(a1 + 20) = *(uint32_t *)(v43 + 4);
      }
      goto LABEL_49;
    }
    v68 = *(uint32_t *)(*(uint32_t *)(a1 + 32) + 24);
    v39 = (*(int (**)(uint32_t))(v68 + 12))(*(uint32_t *)(a1 + 32));
    v40 = BYTE2(v36);
    if ( v39 == 0 )
    {
      *(uint32_t *)(**(uint32_t **)(a1 + 32) + 20) = 24;
      (***(void (****)(uint32_t))(a1 + 32))(*(uint32_t *)(a1 + 32));
      v40 = BYTE2(v36);
    }
    v37 = *(uint8_t **)v68;
    *(uint32_t *)(a1 + 16) = *(uint32_t *)v68;
    *(uint32_t *)(a1 + 20) = *(uint32_t *)(v68 + 4);
    if ( v40 == 255 )
      goto LABEL_54;
LABEL_49:
    v35 -= 8;
    v36 <<= 8;
  }
  while ( v35 > 7 );
  v72 &= 7u;
  result = *(uint8_t *)(a1 + 12);
LABEL_88:
  *(uint32_t *)(a1 + 24) = v36;
  *(uint32_t *)(a1 + 28) = v72;
LABEL_10:
  v73 = *(uint32_t *)(a1 + 60);
  v10 = *(uint8_t **)(a1 + 64);
  *(uint32_t *)(a1 + 56) = 0;
  v75 = v10;
  if ( (uint8_t)result == 0 && v73 != 0 )
  {
    v70 = *(uint32_t *)(a1 + 28);
    while ( 1 )
    {
      if ( (uint8_t)result == 0 )
      {
        v11 = v70 + 1;
        v12 = *(uint32_t *)(a1 + 24) | ((*v75 & 1) << (23 - v70));
        if ( v70 + 1 > 7 )
        {
          v13 = *(uint8_t **)(a1 + 16);
          while ( 1 )
          {
            *v13 = BYTE2(v12);
            v14 = *(uint32_t *)(a1 + 20) - 1;
            ++v13;
            v15 = *(uint32_t *)(a1 + 20) == 1;
            *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v13);
            *(uint32_t *)(a1 + 20) = v14;
            if ( v15 )
            {
              v65 = *(uint32_t *)(*(uint32_t *)(a1 + 32) + 24);
              v16 = (*(int (**)(uint32_t))(v65 + 12))(*(uint32_t *)(a1 + 32));
              v17 = BYTE2(v12);
              if ( v16 == 0 )
              {
                *(uint32_t *)(**(uint32_t **)(a1 + 32) + 20) = 24;
                (***(void (****)(uint32_t))(a1 + 32))(*(uint32_t *)(a1 + 32));
                v17 = BYTE2(v12);
              }
              v13 = *(uint8_t **)v65;
              *(uint32_t *)(a1 + 16) = *(uint32_t *)v65;
              *(uint32_t *)(a1 + 20) = *(uint32_t *)(v65 + 4);
              if ( v17 != 255 )
                goto LABEL_17;
LABEL_22:
              *v13 = 0;
              v18 = *(uint32_t *)(a1 + 20) - 1;
              ++v13;
              v15 = *(uint32_t *)(a1 + 20) == 1;
              *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v13);
              *(uint32_t *)(a1 + 20) = v18;
              if ( !v15 )
                goto LABEL_17;
              v60 = *(uint32_t *)(*(uint32_t *)(a1 + 32) + 24);
              v19 = (*(int (**)(uint32_t))(v60 + 12))(*(uint32_t *)(a1 + 32));
              v20 = v60;
              if ( v19 == 0 )
              {
                *(uint32_t *)(**(uint32_t **)(a1 + 32) + 20) = 24;
                (***(void (****)(uint32_t))(a1 + 32))(*(uint32_t *)(a1 + 32));
                v20 = v60;
              }
              v13 = *(uint8_t **)v20;
              v11 -= 8;
              *(uint32_t *)(a1 + 16) = *(uint32_t *)v20;
              v12 <<= 8;
              *(uint32_t *)(a1 + 20) = *(uint32_t *)(v20 + 4);
              if ( v11 <= 7 )
              {
LABEL_26:
                v70 = ((uint8_t)v70 - 7) & 7;
                result = *(uint8_t *)(a1 + 12);
                v21 = v70;
                goto LABEL_27;
              }
            }
            else
            {
              if ( BYTE2(v12) == 255 )
                goto LABEL_22;
LABEL_17:
              v11 -= 8;
              v12 <<= 8;
              if ( v11 <= 7 )
                goto LABEL_26;
            }
          }
        }
        ++v70;
        v21 = v11;
LABEL_27:
        *(uint32_t *)(a1 + 24) = v12;
        *(uint32_t *)(a1 + 28) = v21;
      }
      if ( --v73 == 0 )
        break;
      ++v75;
    }
  }
LABEL_59:
  *(uint32_t *)(a1 + 60) = 0;
  if ( (uint8_t)result == 0 )
  {
LABEL_67:
    v45 = *(uint32_t *)(a1 + 28);
    v46 = v45 + 7;
    if ( v45 + 7 <= 7 )
    {
LABEL_79:
      v55 = *(uint8_t **)(a1 + 16);
      *(uint32_t *)(a1 + 24) = 0;
      *(uint32_t *)(a1 + 28) = 0;
      *v55 = -1;
      v56 = *(uint32_t *)(a1 + 20) - 1;
      v57 = v55 + 1;
      v15 = *(uint32_t *)(a1 + 20) == 1;
      *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v57);
      *(uint32_t *)(a1 + 20) = v56;
      if ( v15 )
      {
        v59 = *(uint32_t *)(*(uint32_t *)(a1 + 32) + 24);
        if ( (*(uint8_t (**)(uint32_t))(v59 + 12))(*(uint32_t *)(a1 + 32)) == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(a1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(a1 + 32))(*(uint32_t *)(a1 + 32));
        }
        v57 = *(uint8_t **)v59;
        *(uint32_t *)(a1 + 16) = *(uint32_t *)v59;
        *(uint32_t *)(a1 + 20) = *(uint32_t *)(v59 + 4);
      }
      *v57 = a2 - 48;
      *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v57 + 1);
      result = *(uint32_t *)(a1 + 20) - 1;
      v15 = *(uint32_t *)(a1 + 20) == 1;
      *(uint32_t *)(a1 + 20) = result;
      if ( v15 )
      {
        v58 = *(uint32_t *)(*(uint32_t *)(a1 + 32) + 24);
        if ( (*(uint8_t (**)(uint32_t))(v58 + 12))(*(uint32_t *)(a1 + 32)) == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(a1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(a1 + 32))(*(uint32_t *)(a1 + 32));
        }
        *(uint32_t *)(a1 + 16) = *(uint32_t *)v58;
        result = *(uint32_t *)(v58 + 4);
        *(uint32_t *)(a1 + 20) = result;
      }
      goto LABEL_60;
    }
    v47 = *(uint32_t *)(a1 + 24) | (127 << (17 - v45));
    v48 = *(uint8_t **)(a1 + 16);
    while ( 1 )
    {
      *v48 = BYTE2(v47);
      v49 = *(uint32_t *)(a1 + 20) - 1;
      ++v48;
      v15 = *(uint32_t *)(a1 + 20) == 1;
      *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v48);
      *(uint32_t *)(a1 + 20) = v49;
      if ( v15 )
      {
        v69 = *(uint32_t *)(*(uint32_t *)(a1 + 32) + 24);
        v50 = (*(int (**)(uint32_t))(v69 + 12))(*(uint32_t *)(a1 + 32));
        v51 = BYTE2(v47);
        if ( v50 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(a1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(a1 + 32))(*(uint32_t *)(a1 + 32));
          v51 = BYTE2(v47);
        }
        v48 = *(uint8_t **)v69;
        *(uint32_t *)(a1 + 16) = *(uint32_t *)v69;
        *(uint32_t *)(a1 + 20) = *(uint32_t *)(v69 + 4);
        if ( v51 != 255 )
          goto LABEL_70;
LABEL_75:
        *v48 = 0;
        v52 = *(uint32_t *)(a1 + 20) - 1;
        ++v48;
        v15 = *(uint32_t *)(a1 + 20) == 1;
        *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(v48);
        *(uint32_t *)(a1 + 20) = v52;
        if ( !v15 )
          goto LABEL_70;
        v63 = *(uint32_t *)(*(uint32_t *)(a1 + 32) + 24);
        v53 = (*(int (**)(uint32_t))(v63 + 12))(*(uint32_t *)(a1 + 32));
        v54 = v63;
        if ( v53 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(a1 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(a1 + 32))(*(uint32_t *)(a1 + 32));
          v54 = v63;
        }
        v48 = *(uint8_t **)v54;
        v46 -= 8;
        *(uint32_t *)(a1 + 16) = *(uint32_t *)v54;
        v47 <<= 8;
        *(uint32_t *)(a1 + 20) = *(uint32_t *)(v54 + 4);
        if ( v46 <= 7 )
          goto LABEL_79;
      }
      else
      {
        if ( BYTE2(v47) == 255 )
          goto LABEL_75;
LABEL_70:
        v46 -= 8;
        v47 <<= 8;
        if ( v46 <= 7 )
          goto LABEL_79;
      }
    }
  }
LABEL_60:
  v44 = *(uint32_t *)(a1 + 32);
  if ( *(uint32_t *)(v44 + 296) != 0 )
  {
    *(uint32_t *)(a1 + 56) = 0;
    *(uint32_t *)(a1 + 60) = 0;
  }
  else if ( *(int *)(v44 + 224) > 0 )
  {
    result = 0;
    do
      *(uint32_t *)(a1 + 4 * result++ + 36) = 0;
    while ( result < *(uint32_t *)(v44 + 224) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F8A8F0  (binary VA: 0xf8a8f0)
// Original: sub_F8A8F0
// ----------------------------------------------------------------------------
int sub_F8A8F0(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v14;
  int v15;
  int v16;
  uint8_t *v17;
  int v18;
  int v19;
  char v20;
  int v21;
  int v22;
  char v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint8_t *v29;
  int v30;
  char v31;
  int v32;
  int v33;
  char v34;
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

  v2 = *(uint32_t *)(a1 + 344);
  v47 = *(uint32_t *)(a1 + 308);
  *(uint32_t *)(v2 + 16) = **(uint32_t **)(a1 + 24);
  *(uint32_t *)(v2 + 20) = *(uint32_t *)(*(uint32_t *)(a1 + 24) + 4);
  if ( *(uint32_t *)(a1 + 184) != 0 && *(uint32_t *)(v2 + 68) == 0 )
    sub_F8A190(v2, *(uint32_t *)(v2 + 72));
  v3 = a1;
  if ( *(int *)(a1 + 252) <= 0 )
    goto LABEL_17;
  v42 = 0;
  do
  {
    v4 = *(uint32_t *)(a1 + 4 * v42 + 256);
    v5 = *(uint32_t *)(a1 + 4 * v4 + 228);
    v4 += 8;
    v6 = (**(int16_t **)(a2 + 4 * v42) >> v47) - *(uint32_t *)(v2 + 4 * v4 + 4);
    v7 = **(int16_t **)(a2 + 4 * v42) >> v47 == *(uint32_t *)(v2 + 4 * v4 + 4);
    *(uint32_t *)(v2 + 4 * v4 + 4) = **(int16_t **)(a2 + 4 * v42) >> v47;
    if ( v6 < 0 )
    {
      v36 = v6 - 1;
      v6 = -v6;
      v43 = v36;
    }
    else
    {
      v43 = 0;
      v8 = 0;
      if ( v7 )
        goto LABEL_13;
      v43 = v6;
    }
    v8 = 0;
    do
    {
      ++v8;
      v6 >>= 1;
    }
    while ( v6 != 0 );
    if ( v8 > 11 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 6;
      (**(void (***)(int))a1)(a1);
    }
LABEL_13:
    v9 = *(uint32_t *)(v5 + 20);
    if ( *(uint8_t *)(v2 + 12) != 0 )
    {
      v10 = (uint32_t *)(*(uint32_t *)(v2 + 4 * v9 + 92) + 4 * v8);
      ++*v10;
      goto LABEL_15;
    }
    v14 = *(uint32_t *)(v2 + 4 * v9 + 76);
    v15 = *(char *)(v14 + v8 + 1024);
    v39 = *(uint32_t *)(v14 + 4 * v8);
    v45 = *(uint32_t *)(v2 + 28);
    if ( *(uint8_t *)(v14 + v8 + 1024) != 0
      || (*(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40,
          (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32)),
          v15 = 0,
          *(uint8_t *)(v2 + 12) == 0) )
    {
      v46 = v45 + v15;
      v16 = *(uint32_t *)(v2 + 24) | ((v39 & ((1 << v15) - 1)) << (24 - v46));
      if ( v46 <= 7 )
      {
LABEL_36:
        *(uint32_t *)(v2 + 24) = v16;
        *(uint32_t *)(v2 + 28) = v46;
        if ( v8 == 0 )
          goto LABEL_16;
        goto LABEL_37;
      }
      v48 = v8;
      v17 = *(uint8_t **)(v2 + 16);
      v18 = v46;
      while ( 1 )
      {
        *v17 = BYTE2(v16);
        v19 = *(uint32_t *)(v2 + 20) - 1;
        ++v17;
        v7 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v17);
        *(uint32_t *)(v2 + 20) = v19;
        if ( v7 )
        {
          v40 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
          v20 = (*(int (**)(uint32_t))(v40 + 12))(*(uint32_t *)(v2 + 32));
          v21 = BYTE2(v16);
          if ( v20 == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
            v21 = BYTE2(v16);
          }
          v17 = *(uint8_t **)v40;
          *(uint32_t *)(v2 + 16) = *(uint32_t *)v40;
          *(uint32_t *)(v2 + 20) = *(uint32_t *)(v40 + 4);
          if ( v21 != 255 )
          {
LABEL_26:
            v18 -= 8;
            v16 <<= 8;
            if ( v18 <= 7 )
              goto LABEL_35;
            continue;
          }
        }
        else if ( BYTE2(v16) != 255 )
        {
          goto LABEL_26;
        }
        *v17 = 0;
        v22 = *(uint32_t *)(v2 + 20) - 1;
        ++v17;
        v7 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v17);
        *(uint32_t *)(v2 + 20) = v22;
        if ( !v7 )
          goto LABEL_26;
        v37 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
        v23 = (*(int (**)(uint32_t))(v37 + 12))(*(uint32_t *)(v2 + 32));
        v24 = v37;
        if ( v23 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
          v24 = v37;
        }
        v17 = *(uint8_t **)v24;
        v18 -= 8;
        *(uint32_t *)(v2 + 16) = *(uint32_t *)v24;
        v16 <<= 8;
        *(uint32_t *)(v2 + 20) = *(uint32_t *)(v24 + 4);
        if ( v18 <= 7 )
        {
LABEL_35:
          v8 = v48;
          v46 &= 7u;
          goto LABEL_36;
        }
      }
    }
LABEL_15:
    if ( v8 == 0 )
      goto LABEL_16;
LABEL_37:
    if ( *(uint8_t *)(v2 + 12) != 0 )
      goto LABEL_16;
    v25 = v8 + *(uint32_t *)(v2 + 28);
    v26 = v43 & ((1 << v8) - 1);
    v44 = v25;
    v27 = *(uint32_t *)(v2 + 24) | (v26 << (24 - v25));
    if ( v25 <= 7 )
      goto LABEL_51;
    v28 = v8 + *(uint32_t *)(v2 + 28);
    v29 = *(uint8_t **)(v2 + 16);
    do
    {
      while ( 1 )
      {
        *v29 = BYTE2(v27);
        v30 = *(uint32_t *)(v2 + 20) - 1;
        ++v29;
        v7 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v29);
        *(uint32_t *)(v2 + 20) = v30;
        if ( v7 )
          break;
        if ( BYTE2(v27) == 255 )
          goto LABEL_46;
LABEL_41:
        v28 -= 8;
        v27 <<= 8;
        if ( v28 <= 7 )
          goto LABEL_50;
      }
      v41 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      v31 = (*(int (**)(uint32_t))(v41 + 12))(*(uint32_t *)(v2 + 32));
      v32 = BYTE2(v27);
      if ( v31 == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v32 = BYTE2(v27);
      }
      v29 = *(uint8_t **)v41;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v41;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v41 + 4);
      if ( v32 != 255 )
        goto LABEL_41;
LABEL_46:
      *v29 = 0;
      v33 = *(uint32_t *)(v2 + 20) - 1;
      ++v29;
      v7 = *(uint32_t *)(v2 + 20) == 1;
      *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v29);
      *(uint32_t *)(v2 + 20) = v33;
      if ( !v7 )
        goto LABEL_41;
      v38 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      v34 = (*(int (**)(uint32_t))(v38 + 12))(*(uint32_t *)(v2 + 32));
      v35 = v38;
      if ( v34 == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v35 = v38;
      }
      v29 = *(uint8_t **)v35;
      v28 -= 8;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v35;
      v27 <<= 8;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v35 + 4);
    }
    while ( v28 > 7 );
LABEL_50:
    v44 &= 7u;
LABEL_51:
    *(uint32_t *)(v2 + 24) = v27;
    *(uint32_t *)(v2 + 28) = v44;
LABEL_16:
    v3 = a1;
    ++v42;
  }
  while ( *(uint32_t *)(a1 + 252) > v42 );
LABEL_17:
  **(uint32_t **)(v3 + 24) = *(uint32_t *)(v2 + 16);
  *(uint32_t *)(*(uint32_t *)(v3 + 24) + 4) = *(uint32_t *)(v2 + 20);
  v11 = *(uint32_t *)(v3 + 184);
  if ( v11 != 0 )
  {
    v12 = *(uint32_t *)(v2 + 68);
    if ( v12 == 0 )
    {
      *(uint32_t *)(v2 + 72) = ((uint8_t)*(uint32_t *)(v2 + 72) + 1) & 7;
      v12 = v11;
    }
    *(uint32_t *)(v2 + 68) = v12 - 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_F8AD80  (binary VA: 0xf8ad80)
// Original: sub_F8AD80
// ----------------------------------------------------------------------------
int sub_F8AD80(int a1, int a2)
{
  int v2;
  uint8_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  bool v8;
  char v9;
  int v10;
  int v11;
  char v12;
  int v13;
  int v14;
  int v15;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;

  v2 = *(uint32_t *)(a1 + 344);
  v21 = *(uint32_t *)(a1 + 308);
  v3 = **(uint8_t ***)(a1 + 24);
  *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v3);
  *(uint32_t *)(v2 + 20) = *(uint32_t *)(*(uint32_t *)(a1 + 24) + 4);
  if ( *(uint32_t *)(a1 + 184) != 0 && *(uint32_t *)(v2 + 68) == 0 )
  {
    sub_F8A190(v2, *(uint32_t *)(v2 + 72));
    v3 = *(uint8_t **)(v2 + 16);
  }
  v4 = *(uint32_t *)(a1 + 252);
  if ( v4 <= 0 )
    goto LABEL_22;
  v20 = 0;
  v19 = *(uint32_t *)(v2 + 28);
  do
  {
    if ( *(uint8_t *)(v2 + 12) != 0 )
      goto LABEL_21;
    v5 = v19 + 1;
    v6 = *(uint32_t *)(v2 + 24) | (((**(int16_t **)(a2 + 4 * v20) >> v21) & 1) << (23 - v19));
    if ( v19 + 1 <= 7 )
    {
      ++v19;
      goto LABEL_20;
    }
    do
    {
      while ( 1 )
      {
        *v3 = BYTE2(v6);
        v7 = *(uint32_t *)(v2 + 20) - 1;
        ++v3;
        v8 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v3);
        *(uint32_t *)(v2 + 20) = v7;
        if ( v8 )
          break;
        if ( BYTE2(v6) == 255 )
          goto LABEL_15;
LABEL_10:
        v5 -= 8;
        v6 <<= 8;
        if ( v5 <= 7 )
          goto LABEL_19;
      }
      v18 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      v9 = (*(int (**)(uint32_t))(v18 + 12))(*(uint32_t *)(v2 + 32));
      v10 = BYTE2(v6);
      if ( v9 == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v10 = BYTE2(v6);
      }
      v3 = *(uint8_t **)v18;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v18;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v18 + 4);
      if ( v10 != 255 )
        goto LABEL_10;
LABEL_15:
      *v3 = 0;
      v11 = *(uint32_t *)(v2 + 20) - 1;
      ++v3;
      v8 = *(uint32_t *)(v2 + 20) == 1;
      *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v3);
      *(uint32_t *)(v2 + 20) = v11;
      if ( !v8 )
        goto LABEL_10;
      v17 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      v12 = (*(int (**)(uint32_t))(v17 + 12))(*(uint32_t *)(v2 + 32));
      v13 = v17;
      if ( v12 == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v13 = v17;
      }
      v3 = *(uint8_t **)v13;
      v5 -= 8;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v13;
      v6 <<= 8;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v13 + 4);
    }
    while ( v5 > 7 );
LABEL_19:
    v19 = ((uint8_t)v19 - 7) & 7;
LABEL_20:
    *(uint32_t *)(v2 + 24) = v6;
    *(uint32_t *)(v2 + 28) = v19;
    v4 = *(uint32_t *)(a1 + 252);
LABEL_21:
    ++v20;
  }
  while ( v20 < v4 );
LABEL_22:
  **(uint32_t **)(a1 + 24) = (uint32_t)(uintptr_t)(v3);
  *(uint32_t *)(*(uint32_t *)(a1 + 24) + 4) = *(uint32_t *)(v2 + 20);
  v14 = *(uint32_t *)(a1 + 184);
  if ( v14 != 0 )
  {
    v15 = *(uint32_t *)(v2 + 68);
    if ( v15 == 0 )
    {
      *(uint32_t *)(v2 + 72) = ((uint8_t)*(uint32_t *)(v2 + 72) + 1) & 7;
      v15 = v14;
    }
    *(uint32_t *)(v2 + 68) = v15 - 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_F8AFC0  (binary VA: 0xf8afc0)
// Original: sub_F8AFC0
// ----------------------------------------------------------------------------
int sub_F8AFC0(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  char v12;
  int v13;
  uint8_t *v14;
  int v15;
  int v16;
  uint8_t *v17;
  int v18;
  bool v19;
  char v20;
  int v21;
  int v22;
  char v23;
  int v24;
  int v25;
  char v26;
  int v27;
  int v28;
  uint8_t *v29;
  int v30;
  char v31;
  int v32;
  int v33;
  char v34;
  int v35;
  int v36;
  unsigned int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  uint32_t *v42;
  uint8_t *v43;
  char v44;
  uint8_t *v45;
  char v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  char v56;
  int v57;
  int v58;
  uint8_t *v59;
  int v60;
  char v61;
  int v62;
  int v63;
  char v64;
  int v65;
  int v66;
  int v67;
  int v68;
  uint8_t *v69;
  int v70;
  int v71;
  char v72;
  int v73;
  int v74;
  char v75;
  int v76;
  char v77;
  int v78;
  int v79;
  uint8_t *v80;
  int v81;
  char v82;
  int v83;
  int v84;
  char v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  uint32_t *v91;
  char v92;
  int v93;
  uint8_t *v94;
  int v95;
  int v96;
  uint8_t *v97;
  int v98;
  char v99;
  int v100;
  int v101;
  char v102;
  int v103;
  int v104;
  int v105;
  uint32_t *v106;
  char v107;
  int v108;
  uint8_t *v109;
  int v110;
  char v111;
  int v112;
  int v113;
  int v114;
  char v115;
  char i;
  int v117;
  int v118;
  uint8_t *v119;
  int v120;
  char v121;
  int v122;
  int v123;
  char v124;
  int v125;
  int v126;
  int v127;
  int v129;
  int v130;
  int v131;
  uint8_t *v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  char v139;
  int v140;
  int v141;
  int v142;
  uint8_t *v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  char v150;
  int v151;
  int v152;
  uint8_t *v153;
  int v154;
  int v155;
  int v156;
  int v157;
  char v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  char v207;
  int v208;
  int v209;
  int v210;
  int v211;
  int v212;
  int v213;
  int v214;
  int j;
  int v216;
  int v217;
  int v218;
  int v219;
  uint8_t *v220;
  uint8_t *v221;
  int v222;
  int v223;
  int v224;
  int v225;
  uint8_t *v226;
  int v227;
  int v228;
  int v229;
  int v230;
  uint8_t *v231;
  int v232;
  int v233;
  int v234;
  int v235;
  int v236;
  uint32_t v237[71];

  v2 = *(uint32_t *)(a1 + 344);
  v234 = *(uint32_t *)(a1 + 300);
  v182 = *(uint32_t *)(a1 + 308);
  *(uint32_t *)(v2 + 16) = **(uint32_t **)(a1 + 24);
  *(uint32_t *)(v2 + 20) = *(uint32_t *)(*(uint32_t *)(a1 + 24) + 4);
  if ( *(uint32_t *)(a1 + 184) != 0 && *(uint32_t *)(v2 + 68) == 0 )
    sub_F8A190(v2, *(uint32_t *)(v2 + 72));
  v235 = *a2;
  v232 = *(uint32_t *)(a1 + 296);
  if ( v234 < v232 )
    goto LABEL_226;
  v3 = *(uint32_t *)(a1 + 296);
  v4 = 0;
  do
  {
    v5 = (int)abs16(*(uint16_t *)(v235 + 2 * (&jpeg_natural_order)[v3])) >> v182;
    v237[v3] = v5;
    if ( v5 == 1 )
      v4 = v3;
    ++v3;
  }
  while ( v3 != v234 + 1 );
  v236 = v4;
  v218 = 0;
  v223 = 0;
  v220 = (uint8_t *)(*(uint32_t *)(v2 + 60) + *(uint32_t *)(v2 + 64));
  do
  {
    v233 = v237[v232];
    if ( v233 == 0 )
    {
      ++v223;
      goto LABEL_71;
    }
    if ( v232 <= v236 )
    {
      v230 = v223 - 16;
      if ( v223 > 15 )
      {
        while ( 1 )
        {
          v6 = *(uint32_t *)(v2 + 56);
          if ( v6 == 0 )
          {
            v12 = *(uint8_t *)(v2 + 12);
            goto LABEL_44;
          }
          v7 = 0;
          v8 = 0;
          v9 = v6 >> 1;
          if ( v9 != 0 )
          {
            do
            {
              ++v8;
              v9 >>= 1;
            }
            while ( v9 != 0 );
            if ( v8 > 14 )
            {
              *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40;
              (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
            }
            v7 = 16 * v8;
          }
          v10 = *(uint32_t *)(v2 + 52);
          if ( *(uint8_t *)(v2 + 12) != 0 )
          {
            v11 = (uint32_t *)(*(uint32_t *)(v2 + 4 * v10 + 92) + 4 * v7);
            ++*v11;
            v12 = *(uint8_t *)(v2 + 12);
LABEL_21:
            if ( v8 == 0 )
              goto LABEL_22;
            goto LABEL_137;
          }
          v66 = *(uint32_t *)(v2 + 4 * v10 + 76);
          v67 = *(char *)(v66 + v7 + 1024);
          v188 = *(uint32_t *)(v66 + 4 * v7);
          v205 = *(uint32_t *)(v2 + 28);
          if ( *(uint8_t *)(v66 + v7 + 1024) == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
            v12 = *(uint8_t *)(v2 + 12);
            v67 = 0;
            if ( v12 != 0 )
              goto LABEL_21;
          }
          v12 = 0;
          v206 = v205 + v67;
          v68 = *(uint32_t *)(v2 + 24) | ((v188 & ((1 << v67) - 1)) << (24 - v206));
          if ( v206 > 7 )
            break;
LABEL_136:
          *(uint32_t *)(v2 + 24) = v68;
          *(uint32_t *)(v2 + 28) = v206;
          if ( v8 == 0 )
            goto LABEL_22;
LABEL_137:
          if ( v12 != 0 )
          {
            *(uint32_t *)(v2 + 56) = 0;
            goto LABEL_43;
          }
          v77 = v8;
          v78 = *(uint32_t *)(v2 + 28) + v8;
          v207 = v78;
          v79 = *(uint32_t *)(v2 + 24) | ((*(uint32_t *)(v2 + 56) & ((1 << v77) - 1)) << (24 - v78));
          if ( v78 <= 7 )
            goto LABEL_151;
          v80 = *(uint8_t **)(v2 + 16);
          do
          {
            while ( 1 )
            {
              *v80 = BYTE2(v79);
              v81 = *(uint32_t *)(v2 + 20) - 1;
              ++v80;
              v19 = *(uint32_t *)(v2 + 20) == 1;
              *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v80);
              *(uint32_t *)(v2 + 20) = v81;
              if ( v19 )
                break;
              if ( BYTE2(v79) == 255 )
                goto LABEL_146;
LABEL_141:
              v78 -= 8;
              v79 <<= 8;
              if ( v78 <= 7 )
                goto LABEL_150;
            }
            v190 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
            v82 = (*(int (**)(uint32_t))(v190 + 12))(*(uint32_t *)(v2 + 32));
            v83 = BYTE2(v79);
            if ( v82 == 0 )
            {
              *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
              (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
              v83 = BYTE2(v79);
            }
            v80 = *(uint8_t **)v190;
            *(uint32_t *)(v2 + 16) = *(uint32_t *)v190;
            *(uint32_t *)(v2 + 20) = *(uint32_t *)(v190 + 4);
            if ( v83 != 255 )
              goto LABEL_141;
LABEL_146:
            *v80 = 0;
            v84 = *(uint32_t *)(v2 + 20) - 1;
            ++v80;
            v19 = *(uint32_t *)(v2 + 20) == 1;
            *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v80);
            *(uint32_t *)(v2 + 20) = v84;
            if ( !v19 )
              goto LABEL_141;
            v178 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
            v85 = (*(int (**)(uint32_t))(v178 + 12))(*(uint32_t *)(v2 + 32));
            v86 = v178;
            if ( v85 == 0 )
            {
              *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
              (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
              v86 = v178;
            }
            v80 = *(uint8_t **)v86;
            v78 -= 8;
            *(uint32_t *)(v2 + 16) = *(uint32_t *)v86;
            v79 <<= 8;
            *(uint32_t *)(v2 + 20) = *(uint32_t *)(v86 + 4);
          }
          while ( v78 > 7 );
LABEL_150:
          v78 = v207 & 7;
          v12 = *(uint8_t *)(v2 + 12);
LABEL_151:
          *(uint32_t *)(v2 + 24) = v79;
          *(uint32_t *)(v2 + 28) = v78;
LABEL_22:
          v13 = *(uint32_t *)(v2 + 60);
          v14 = *(uint8_t **)(v2 + 64);
          *(uint32_t *)(v2 + 56) = 0;
          v224 = v13;
          v226 = v14;
          if ( v12 == 0 && v13 != 0 )
          {
            v200 = *(uint32_t *)(v2 + 28);
            while ( 1 )
            {
              if ( v12 == 0 )
              {
                v15 = v200 + 1;
                v16 = *(uint32_t *)(v2 + 24) | ((*v226 & 1) << (23 - v200));
                if ( v200 + 1 > 7 )
                {
                  v17 = *(uint8_t **)(v2 + 16);
                  while ( 1 )
                  {
                    *v17 = BYTE2(v16);
                    v18 = *(uint32_t *)(v2 + 20) - 1;
                    ++v17;
                    v19 = *(uint32_t *)(v2 + 20) == 1;
                    *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v17);
                    *(uint32_t *)(v2 + 20) = v18;
                    if ( v19 )
                    {
                      v183 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
                      v20 = (*(int (**)(uint32_t))(v183 + 12))(*(uint32_t *)(v2 + 32));
                      v21 = BYTE2(v16);
                      if ( v20 == 0 )
                      {
                        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
                        v21 = BYTE2(v16);
                      }
                      v17 = *(uint8_t **)v183;
                      *(uint32_t *)(v2 + 16) = *(uint32_t *)v183;
                      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v183 + 4);
                      if ( v21 != 255 )
                        goto LABEL_29;
LABEL_34:
                      *v17 = 0;
                      v22 = *(uint32_t *)(v2 + 20) - 1;
                      ++v17;
                      v19 = *(uint32_t *)(v2 + 20) == 1;
                      *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v17);
                      *(uint32_t *)(v2 + 20) = v22;
                      if ( !v19 )
                        goto LABEL_29;
                      v174 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
                      v23 = (*(int (**)(uint32_t))(v174 + 12))(*(uint32_t *)(v2 + 32));
                      v24 = v174;
                      if ( v23 == 0 )
                      {
                        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
                        v24 = v174;
                      }
                      v17 = *(uint8_t **)v24;
                      v15 -= 8;
                      *(uint32_t *)(v2 + 16) = *(uint32_t *)v24;
                      v16 <<= 8;
                      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v24 + 4);
                      if ( v15 <= 7 )
                      {
LABEL_38:
                        v200 = ((uint8_t)v200 - 7) & 7;
                        v12 = *(uint8_t *)(v2 + 12);
                        goto LABEL_39;
                      }
                    }
                    else
                    {
                      if ( BYTE2(v16) == 255 )
                        goto LABEL_34;
LABEL_29:
                      v15 -= 8;
                      v16 <<= 8;
                      if ( v15 <= 7 )
                        goto LABEL_38;
                    }
                  }
                }
                ++v200;
LABEL_39:
                *(uint32_t *)(v2 + 24) = v16;
                *(uint32_t *)(v2 + 28) = v200;
              }
              if ( --v224 == 0 )
                break;
              ++v226;
            }
          }
LABEL_43:
          *(uint32_t *)(v2 + 60) = 0;
LABEL_44:
          v25 = *(uint32_t *)(v2 + 52);
          if ( v12 != 0 )
          {
            ++*(uint32_t *)(*(uint32_t *)(v2 + 4 * v25 + 92) + 960);
            v26 = *(uint8_t *)(v2 + 12);
            goto LABEL_46;
          }
          v54 = *(uint32_t *)(v2 + 4 * v25 + 76);
          v55 = *(char *)(v54 + 1264);
          v186 = *(uint32_t *)(v54 + 960);
          v203 = *(uint32_t *)(v2 + 28);
          if ( *(uint8_t *)(v54 + 1264) != 0
            || (*(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40,
                (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32)),
                *(uint8_t *)(v2 + 12) == 0) )
          {
            v56 = v55;
            v57 = v203 + v55;
            v26 = 0;
            v204 = v57;
            v58 = *(uint32_t *)(v2 + 24) | ((v186 & ((1 << v56) - 1)) << (24 - v57));
            if ( v57 <= 7 )
              goto LABEL_119;
            v59 = *(uint8_t **)(v2 + 16);
            while ( 2 )
            {
              while ( 2 )
              {
                *v59 = BYTE2(v58);
                v60 = *(uint32_t *)(v2 + 20) - 1;
                ++v59;
                v19 = *(uint32_t *)(v2 + 20) == 1;
                *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v59);
                *(uint32_t *)(v2 + 20) = v60;
                if ( v19 )
                {
                  v187 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
                  v61 = (*(int (**)(uint32_t))(v187 + 12))(*(uint32_t *)(v2 + 32));
                  v62 = BYTE2(v58);
                  if ( v61 == 0 )
                  {
                    *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                    (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
                    v62 = BYTE2(v58);
                  }
                  v59 = *(uint8_t **)v187;
                  *(uint32_t *)(v2 + 16) = *(uint32_t *)v187;
                  *(uint32_t *)(v2 + 20) = *(uint32_t *)(v187 + 4);
                  if ( v62 == 255 )
                  {
LABEL_114:
                    *v59 = 0;
                    v63 = *(uint32_t *)(v2 + 20) - 1;
                    ++v59;
                    v19 = *(uint32_t *)(v2 + 20) == 1;
                    *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v59);
                    *(uint32_t *)(v2 + 20) = v63;
                    if ( v19 )
                    {
                      v176 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
                      v64 = (*(int (**)(uint32_t))(v176 + 12))(*(uint32_t *)(v2 + 32));
                      v65 = v176;
                      if ( v64 == 0 )
                      {
                        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
                        v65 = v176;
                      }
                      v59 = *(uint8_t **)v65;
                      v57 -= 8;
                      *(uint32_t *)(v2 + 16) = *(uint32_t *)v65;
                      v58 <<= 8;
                      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v65 + 4);
                      if ( v57 > 7 )
                        continue;
LABEL_118:
                      v204 &= 7u;
                      v26 = *(uint8_t *)(v2 + 12);
LABEL_119:
                      *(uint32_t *)(v2 + 24) = v58;
                      *(uint32_t *)(v2 + 28) = v204;
LABEL_46:
                      v223 = v230;
                      if ( v26 != 0 || v218 == 0 )
                        goto LABEL_68;
                      v201 = *(uint32_t *)(v2 + 28);
                      while ( 2 )
                      {
                        if ( v26 == 0 )
                        {
                          v27 = v201 + 1;
                          v28 = *(uint32_t *)(v2 + 24) | ((*v220 & 1) << (23 - v201));
                          if ( v201 + 1 > 7 )
                          {
                            v29 = *(uint8_t **)(v2 + 16);
                            while ( 1 )
                            {
                              *v29 = BYTE2(v28);
                              v30 = *(uint32_t *)(v2 + 20) - 1;
                              ++v29;
                              v19 = *(uint32_t *)(v2 + 20) == 1;
                              *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v29);
                              *(uint32_t *)(v2 + 20) = v30;
                              if ( v19 )
                              {
                                v184 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
                                v31 = (*(int (**)(uint32_t))(v184 + 12))(*(uint32_t *)(v2 + 32));
                                v32 = BYTE2(v28);
                                if ( v31 == 0 )
                                {
                                  *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                                  (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
                                  v32 = BYTE2(v28);
                                }
                                v29 = *(uint8_t **)v184;
                                *(uint32_t *)(v2 + 16) = *(uint32_t *)v184;
                                *(uint32_t *)(v2 + 20) = *(uint32_t *)(v184 + 4);
                                if ( v32 != 255 )
                                  goto LABEL_53;
LABEL_58:
                                *v29 = 0;
                                v33 = *(uint32_t *)(v2 + 20) - 1;
                                ++v29;
                                v19 = *(uint32_t *)(v2 + 20) == 1;
                                *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v29);
                                *(uint32_t *)(v2 + 20) = v33;
                                if ( !v19 )
                                  goto LABEL_53;
                                v175 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
                                v34 = (*(int (**)(uint32_t))(v175 + 12))(*(uint32_t *)(v2 + 32));
                                v35 = v175;
                                if ( v34 == 0 )
                                {
                                  *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                                  (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
                                  v35 = v175;
                                }
                                v29 = *(uint8_t **)v35;
                                v27 -= 8;
                                *(uint32_t *)(v2 + 16) = *(uint32_t *)v35;
                                v28 <<= 8;
                                *(uint32_t *)(v2 + 20) = *(uint32_t *)(v35 + 4);
                                if ( v27 <= 7 )
                                {
LABEL_62:
                                  v201 = ((uint8_t)v201 - 7) & 7;
                                  goto LABEL_63;
                                }
                              }
                              else
                              {
                                if ( BYTE2(v28) == 255 )
                                  goto LABEL_58;
LABEL_53:
                                v27 -= 8;
                                v28 <<= 8;
                                if ( v27 <= 7 )
                                  goto LABEL_62;
                              }
                            }
                          }
                          ++v201;
LABEL_63:
                          *(uint32_t *)(v2 + 24) = v28;
                          *(uint32_t *)(v2 + 28) = v201;
                        }
                        if ( --v218 == 0 )
                          goto LABEL_68;
                        ++v220;
                        v26 = *(uint8_t *)(v2 + 12);
                        continue;
                      }
                    }
                  }
                }
                else if ( BYTE2(v58) == 255 )
                {
                  goto LABEL_114;
                }
                break;
              }
              v57 -= 8;
              v58 <<= 8;
              if ( v57 <= 7 )
                goto LABEL_118;
              continue;
            }
          }
          v223 = v230;
LABEL_68:
          v230 -= 16;
          v220 = *(uint8_t **)(v2 + 64);
          v218 = 0;
          if ( v223 <= 15 )
            goto LABEL_69;
        }
        v225 = v8;
        v69 = *(uint8_t **)(v2 + 16);
        v70 = v206;
        while ( 1 )
        {
          *v69 = BYTE2(v68);
          v71 = *(uint32_t *)(v2 + 20) - 1;
          ++v69;
          v19 = *(uint32_t *)(v2 + 20) == 1;
          *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v69);
          *(uint32_t *)(v2 + 20) = v71;
          if ( v19 )
          {
            v189 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
            v72 = (*(int (**)(uint32_t))(v189 + 12))(*(uint32_t *)(v2 + 32));
            v73 = BYTE2(v68);
            if ( v72 == 0 )
            {
              *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
              (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
              v73 = BYTE2(v68);
            }
            v69 = *(uint8_t **)v189;
            *(uint32_t *)(v2 + 16) = *(uint32_t *)v189;
            *(uint32_t *)(v2 + 20) = *(uint32_t *)(v189 + 4);
            if ( v73 != 255 )
              goto LABEL_126;
LABEL_131:
            *v69 = 0;
            v74 = *(uint32_t *)(v2 + 20) - 1;
            ++v69;
            v19 = *(uint32_t *)(v2 + 20) == 1;
            *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v69);
            *(uint32_t *)(v2 + 20) = v74;
            if ( !v19 )
              goto LABEL_126;
            v177 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
            v75 = (*(int (**)(uint32_t))(v177 + 12))(*(uint32_t *)(v2 + 32));
            v76 = v177;
            if ( v75 == 0 )
            {
              *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
              (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
              v76 = v177;
            }
            v69 = *(uint8_t **)v76;
            v70 -= 8;
            *(uint32_t *)(v2 + 16) = *(uint32_t *)v76;
            v68 <<= 8;
            *(uint32_t *)(v2 + 20) = *(uint32_t *)(v76 + 4);
            if ( v70 <= 7 )
            {
LABEL_135:
              v8 = v225;
              v206 &= 7u;
              v12 = *(uint8_t *)(v2 + 12);
              goto LABEL_136;
            }
          }
          else
          {
            if ( BYTE2(v68) == 255 )
              goto LABEL_131;
LABEL_126:
            v70 -= 8;
            v68 <<= 8;
            if ( v70 <= 7 )
              goto LABEL_135;
          }
        }
      }
    }
LABEL_69:
    if ( v233 > 1 )
    {
      v220[v218++] = v233 & 1;
      goto LABEL_71;
    }
    v87 = *(uint32_t *)(v2 + 56);
    if ( v87 == 0 )
    {
      v92 = *(uint8_t *)(v2 + 12);
      goto LABEL_187;
    }
    v88 = 0;
    v191 = 0;
    v89 = v87 >> 1;
    if ( v89 != 0 )
    {
      do
      {
        ++v88;
        v89 >>= 1;
      }
      while ( v89 != 0 );
      v191 = v88;
      if ( v88 > 14 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v88 = v191;
      }
      v88 *= 16;
    }
    v90 = *(uint32_t *)(v2 + 52);
    if ( *(uint8_t *)(v2 + 12) != 0 )
    {
      v91 = (uint32_t *)(*(uint32_t *)(v2 + 4 * v90 + 92) + 4 * v88);
      ++*v91;
      v92 = *(uint8_t *)(v2 + 12);
      goto LABEL_164;
    }
    v137 = *(uint32_t *)(v2 + 4 * v90 + 76);
    v228 = *(uint32_t *)(v2 + 28);
    v138 = *(char *)(v137 + v88 + 1024);
    v212 = *(uint32_t *)(v137 + 4 * v88);
    if ( *(uint8_t *)(v137 + v88 + 1024) != 0
      || (*(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40,
          (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32)),
          (v92 = *(uint8_t *)(v2 + 12)) == 0) )
    {
      v139 = v138;
      v140 = v228 + v138;
      v92 = 0;
      v141 = v212 & ((1 << v139) - 1);
      v213 = v140;
      v142 = *(uint32_t *)(v2 + 24) | (v141 << (24 - v140));
      if ( v140 <= 7 )
        goto LABEL_261;
      v143 = *(uint8_t **)(v2 + 16);
      v229 = v140;
      while ( 1 )
      {
        *v143++ = BYTE2(v142);
        v144 = *(uint32_t *)(v2 + 20) - 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v143);
        *(uint32_t *)(v2 + 20) = v144;
        if ( v144 != 0 )
        {
          if ( BYTE2(v142) != 255 )
            goto LABEL_251;
        }
        else
        {
          v145 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
          if ( (*(uint8_t (**)(uint32_t))(v145 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
          }
          v143 = *(uint8_t **)v145;
          *(uint32_t *)(v2 + 16) = *(uint32_t *)v145;
          *(uint32_t *)(v2 + 20) = *(uint32_t *)(v145 + 4);
          if ( BYTE2(v142) != 255 )
          {
LABEL_251:
            v142 <<= 8;
            v229 -= 8;
            if ( v229 <= 7 )
              goto LABEL_260;
            continue;
          }
        }
        *v143 = 0;
        v146 = *(uint32_t *)(v2 + 20) - 1;
        ++v143;
        v19 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v143);
        *(uint32_t *)(v2 + 20) = v146;
        if ( !v19 )
          goto LABEL_251;
        v147 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
        if ( (*(uint8_t (**)(uint32_t))(v147 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        }
        v143 = *(uint8_t **)v147;
        v229 -= 8;
        *(uint32_t *)(v2 + 16) = *(uint32_t *)v147;
        v142 <<= 8;
        *(uint32_t *)(v2 + 20) = *(uint32_t *)(v147 + 4);
        if ( v229 <= 7 )
        {
LABEL_260:
          v213 &= 7u;
          v92 = *(uint8_t *)(v2 + 12);
LABEL_261:
          *(uint32_t *)(v2 + 24) = v142;
          *(uint32_t *)(v2 + 28) = v213;
          break;
        }
      }
    }
LABEL_164:
    if ( v191 == 0 )
      goto LABEL_165;
    if ( v92 != 0 )
    {
      *(uint32_t *)(v2 + 56) = 0;
      goto LABEL_186;
    }
    v129 = v191 + *(uint32_t *)(v2 + 28);
    v130 = *(uint32_t *)(v2 + 56) & ((1 << v191) - 1);
    v194 = v129;
    v131 = *(uint32_t *)(v2 + 24) | (v130 << (24 - v129));
    if ( v129 <= 7 )
      goto LABEL_246;
    v132 = *(uint8_t **)(v2 + 16);
    v211 = v129;
    do
    {
      while ( 1 )
      {
        *v132++ = BYTE2(v131);
        v133 = *(uint32_t *)(v2 + 20) - 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v132);
        *(uint32_t *)(v2 + 20) = v133;
        if ( v133 == 0 )
          break;
        if ( BYTE2(v131) == 255 )
          goto LABEL_241;
LABEL_236:
        v131 <<= 8;
        v211 -= 8;
        if ( v211 <= 7 )
          goto LABEL_245;
      }
      v134 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      if ( (*(uint8_t (**)(uint32_t))(v134 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
      }
      v132 = *(uint8_t **)v134;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v134;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v134 + 4);
      if ( BYTE2(v131) != 255 )
        goto LABEL_236;
LABEL_241:
      *v132 = 0;
      v135 = *(uint32_t *)(v2 + 20) - 1;
      ++v132;
      v19 = *(uint32_t *)(v2 + 20) == 1;
      *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v132);
      *(uint32_t *)(v2 + 20) = v135;
      if ( !v19 )
        goto LABEL_236;
      v136 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      if ( (*(uint8_t (**)(uint32_t))(v136 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
      }
      v132 = *(uint8_t **)v136;
      v211 -= 8;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v136;
      v131 <<= 8;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v136 + 4);
    }
    while ( v211 > 7 );
LABEL_245:
    v194 &= 7u;
    v92 = *(uint8_t *)(v2 + 12);
LABEL_246:
    *(uint32_t *)(v2 + 24) = v131;
    *(uint32_t *)(v2 + 28) = v194;
LABEL_165:
    v93 = *(uint32_t *)(v2 + 60);
    v94 = *(uint8_t **)(v2 + 64);
    *(uint32_t *)(v2 + 56) = 0;
    v227 = v93;
    v231 = v94;
    if ( v92 == 0 && v93 != 0 )
    {
      v192 = *(uint32_t *)(v2 + 28);
      while ( 1 )
      {
        if ( v92 == 0 )
        {
          v95 = v192 + 1;
          v96 = *(uint32_t *)(v2 + 24) | ((*v231 & 1) << (23 - v192));
          if ( v192 + 1 > 7 )
          {
            v97 = *(uint8_t **)(v2 + 16);
            while ( 1 )
            {
              *v97 = BYTE2(v96);
              v98 = *(uint32_t *)(v2 + 20) - 1;
              ++v97;
              v19 = *(uint32_t *)(v2 + 20) == 1;
              *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v97);
              *(uint32_t *)(v2 + 20) = v98;
              if ( v19 )
              {
                v208 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
                v99 = (*(int (**)(uint32_t))(v208 + 12))(*(uint32_t *)(v2 + 32));
                v100 = BYTE2(v96);
                if ( v99 == 0 )
                {
                  *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                  (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
                  v100 = BYTE2(v96);
                }
                v97 = *(uint8_t **)v208;
                *(uint32_t *)(v2 + 16) = *(uint32_t *)v208;
                *(uint32_t *)(v2 + 20) = *(uint32_t *)(v208 + 4);
                if ( v100 != 255 )
                  goto LABEL_172;
LABEL_177:
                *v97 = 0;
                v101 = *(uint32_t *)(v2 + 20) - 1;
                ++v97;
                v19 = *(uint32_t *)(v2 + 20) == 1;
                *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v97);
                *(uint32_t *)(v2 + 20) = v101;
                if ( !v19 )
                  goto LABEL_172;
                v179 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
                v102 = (*(int (**)(uint32_t))(v179 + 12))(*(uint32_t *)(v2 + 32));
                v103 = v179;
                if ( v102 == 0 )
                {
                  *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                  (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
                  v103 = v179;
                }
                v97 = *(uint8_t **)v103;
                v95 -= 8;
                *(uint32_t *)(v2 + 16) = *(uint32_t *)v103;
                v96 <<= 8;
                *(uint32_t *)(v2 + 20) = *(uint32_t *)(v103 + 4);
                if ( v95 <= 7 )
                {
LABEL_181:
                  v192 = ((uint8_t)v192 - 7) & 7;
                  v92 = *(uint8_t *)(v2 + 12);
                  goto LABEL_182;
                }
              }
              else
              {
                if ( BYTE2(v96) == 255 )
                  goto LABEL_177;
LABEL_172:
                v95 -= 8;
                v96 <<= 8;
                if ( v95 <= 7 )
                  goto LABEL_181;
              }
            }
          }
          ++v192;
LABEL_182:
          *(uint32_t *)(v2 + 24) = v96;
          *(uint32_t *)(v2 + 28) = v192;
        }
        if ( --v227 == 0 )
          break;
        ++v231;
      }
    }
LABEL_186:
    *(uint32_t *)(v2 + 60) = 0;
LABEL_187:
    v104 = *(uint32_t *)(v2 + 52);
    v105 = 16 * v223 + 1;
    if ( v92 != 0 )
    {
      v106 = (uint32_t *)(*(uint32_t *)(v2 + 4 * v104 + 92) + 4 * v105);
      ++*v106;
      v209 = *(uint32_t *)(v2 + 28);
      v107 = *(uint8_t *)(v2 + 12);
      goto LABEL_189;
    }
    v148 = *(uint32_t *)(v2 + 4 * v104 + 76);
    v214 = *(uint32_t *)(v2 + 28);
    v149 = *(char *)(v148 + v105 + 1024);
    v195 = *(uint32_t *)(v148 + 4 * v105);
    if ( *(uint8_t *)(v148 + v105 + 1024) == 0 )
    {
      *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40;
      (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
      if ( *(uint8_t *)(v2 + 12) != 0 )
        goto LABEL_223;
    }
    v150 = v149;
    v151 = v214 + v149;
    v107 = 0;
    v209 = v151;
    v152 = *(uint32_t *)(v2 + 24) | ((v195 & ((1 << v150) - 1)) << (24 - v151));
    if ( v151 > 7 )
    {
      v153 = *(uint8_t **)(v2 + 16);
      v196 = v151;
      while ( 1 )
      {
        *v153++ = BYTE2(v152);
        v154 = *(uint32_t *)(v2 + 20) - 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v153);
        *(uint32_t *)(v2 + 20) = v154;
        if ( v154 != 0 )
        {
          if ( BYTE2(v152) == 255 )
            goto LABEL_272;
LABEL_267:
          v152 <<= 8;
          v196 -= 8;
          if ( v196 <= 7 )
            goto LABEL_276;
        }
        else
        {
          v155 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
          if ( (*(uint8_t (**)(uint32_t))(v155 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
          }
          v153 = *(uint8_t **)v155;
          *(uint32_t *)(v2 + 16) = *(uint32_t *)v155;
          *(uint32_t *)(v2 + 20) = *(uint32_t *)(v155 + 4);
          if ( BYTE2(v152) != 255 )
            goto LABEL_267;
LABEL_272:
          *v153 = 0;
          v156 = *(uint32_t *)(v2 + 20) - 1;
          ++v153;
          v19 = *(uint32_t *)(v2 + 20) == 1;
          *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v153);
          *(uint32_t *)(v2 + 20) = v156;
          if ( !v19 )
            goto LABEL_267;
          v157 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
          if ( (*(uint8_t (**)(uint32_t))(v157 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
          }
          v153 = *(uint8_t **)v157;
          v196 -= 8;
          *(uint32_t *)(v2 + 16) = *(uint32_t *)v157;
          v152 <<= 8;
          *(uint32_t *)(v2 + 20) = *(uint32_t *)(v157 + 4);
          if ( v196 <= 7 )
          {
LABEL_276:
            v209 &= 7u;
            v107 = *(uint8_t *)(v2 + 12);
            break;
          }
        }
      }
    }
    *(uint32_t *)(v2 + 24) = v152;
    *(uint32_t *)(v2 + 28) = v209;
LABEL_189:
    if ( v107 != 0 )
      goto LABEL_223;
    v193 = v209 + 1;
    v108 = *(uint32_t *)(v2 + 24) | ((*(int16_t *)(v235 + 2 * (&jpeg_natural_order)[v232]) >= 0) << (23 - v209));
    if ( v209 + 1 > 7 )
    {
      v109 = *(uint8_t **)(v2 + 16);
      while ( 1 )
      {
        *v109 = BYTE2(v108);
        v110 = *(uint32_t *)(v2 + 20) - 1;
        ++v109;
        v19 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v109);
        *(uint32_t *)(v2 + 20) = v110;
        if ( v19 )
        {
          v180 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
          v111 = (*(int (**)(uint32_t))(v180 + 12))(*(uint32_t *)(v2 + 32));
          v112 = v180;
          if ( v111 == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
            v112 = v180;
          }
          v109 = *(uint8_t **)v112;
          *(uint32_t *)(v2 + 16) = *(uint32_t *)v112;
          *(uint32_t *)(v2 + 20) = *(uint32_t *)(v112 + 4);
          if ( BYTE2(v108) != 255 )
            goto LABEL_193;
LABEL_198:
          *v109 = 0;
          v113 = *(uint32_t *)(v2 + 20) - 1;
          ++v109;
          v19 = *(uint32_t *)(v2 + 20) == 1;
          *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v109);
          *(uint32_t *)(v2 + 20) = v113;
          if ( !v19 )
            goto LABEL_193;
          v114 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
          if ( (*(uint8_t (**)(uint32_t))(v114 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
          }
          v109 = *(uint8_t **)v114;
          v193 -= 8;
          *(uint32_t *)(v2 + 16) = *(uint32_t *)v114;
          v108 <<= 8;
          *(uint32_t *)(v2 + 20) = *(uint32_t *)(v114 + 4);
          if ( v193 <= 7 )
          {
LABEL_202:
            *(uint32_t *)(v2 + 24) = v108;
            v115 = *(uint8_t *)(v2 + 12);
            v193 = ((uint8_t)v209 - 7) & 7;
            *(uint32_t *)(v2 + 28) = v193;
            if ( v115 == 0 )
              goto LABEL_203;
            goto LABEL_223;
          }
        }
        else
        {
          if ( BYTE2(v108) == 255 )
            goto LABEL_198;
LABEL_193:
          v108 <<= 8;
          v193 -= 8;
          if ( v193 <= 7 )
            goto LABEL_202;
        }
      }
    }
    *(uint32_t *)(v2 + 24) = v108;
    *(uint32_t *)(v2 + 28) = v193;
LABEL_203:
    if ( v218 != 0 )
    {
      for ( i = 0; ; i = *(uint8_t *)(v2 + 12) )
      {
        if ( i == 0 )
        {
          v117 = v193 + 1;
          v118 = *(uint32_t *)(v2 + 24) | ((*v220 & 1) << (23 - v193));
          if ( v193 + 1 > 7 )
          {
            v119 = *(uint8_t **)(v2 + 16);
            while ( 1 )
            {
              *v119 = BYTE2(v118);
              v120 = *(uint32_t *)(v2 + 20) - 1;
              ++v119;
              v19 = *(uint32_t *)(v2 + 20) == 1;
              *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v119);
              *(uint32_t *)(v2 + 20) = v120;
              if ( v19 )
              {
                v210 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
                v121 = (*(int (**)(uint32_t))(v210 + 12))(*(uint32_t *)(v2 + 32));
                v122 = BYTE2(v118);
                if ( v121 == 0 )
                {
                  *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                  (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
                  v122 = BYTE2(v118);
                }
                v119 = *(uint8_t **)v210;
                *(uint32_t *)(v2 + 16) = *(uint32_t *)v210;
                *(uint32_t *)(v2 + 20) = *(uint32_t *)(v210 + 4);
                if ( v122 != 255 )
                  goto LABEL_209;
LABEL_214:
                *v119 = 0;
                v123 = *(uint32_t *)(v2 + 20) - 1;
                ++v119;
                v19 = *(uint32_t *)(v2 + 20) == 1;
                *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v119);
                *(uint32_t *)(v2 + 20) = v123;
                if ( !v19 )
                  goto LABEL_209;
                v181 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
                v124 = (*(int (**)(uint32_t))(v181 + 12))(*(uint32_t *)(v2 + 32));
                v125 = v181;
                if ( v124 == 0 )
                {
                  *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                  (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
                  v125 = v181;
                }
                v119 = *(uint8_t **)v125;
                v117 -= 8;
                *(uint32_t *)(v2 + 16) = *(uint32_t *)v125;
                v118 <<= 8;
                *(uint32_t *)(v2 + 20) = *(uint32_t *)(v125 + 4);
                if ( v117 <= 7 )
                {
LABEL_218:
                  v193 = ((uint8_t)v193 - 7) & 7;
                  goto LABEL_219;
                }
              }
              else
              {
                if ( BYTE2(v118) == 255 )
                  goto LABEL_214;
LABEL_209:
                v117 -= 8;
                v118 <<= 8;
                if ( v117 <= 7 )
                  goto LABEL_218;
              }
            }
          }
          ++v193;
LABEL_219:
          *(uint32_t *)(v2 + 24) = v118;
          *(uint32_t *)(v2 + 28) = v193;
        }
        if ( --v218 == 0 )
          break;
        ++v220;
      }
    }
LABEL_223:
    v218 = 0;
    v220 = *(uint8_t **)(v2 + 64);
    v223 = 0;
LABEL_71:
    ++v232;
  }
  while ( v234 >= v232 );
  if ( v218 == 0 && v223 <= 0 )
    goto LABEL_226;
  v36 = *(uint32_t *)(v2 + 56) + 1;
  v37 = *(uint32_t *)(v2 + 60) + v218;
  *(uint32_t *)(v2 + 56) = v36;
  *(uint32_t *)(v2 + 60) = v37;
  if ( v36 == 0x7FFF )
  {
    v38 = 0x3FFF;
  }
  else
  {
    if ( v37 <= 0x3A9 || v36 == 0 )
    {
LABEL_226:
      v43 = *(uint8_t **)(v2 + 16);
      goto LABEL_227;
    }
    v38 = v36 >> 1;
    if ( v38 == 0 )
    {
      v40 = 0;
      v39 = 0;
      goto LABEL_82;
    }
  }
  v39 = 0;
  do
  {
    ++v39;
    v38 >>= 1;
  }
  while ( v38 != 0 );
  if ( v39 > 14 )
  {
    *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40;
    (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
  }
  v40 = 16 * v39;
LABEL_82:
  v41 = *(uint32_t *)(v2 + 52);
  if ( *(uint8_t *)(v2 + 12) != 0 )
  {
    v42 = (uint32_t *)(*(uint32_t *)(v2 + 4 * v41 + 92) + 4 * v40);
    ++*v42;
    v43 = *(uint8_t **)(v2 + 16);
    v44 = *(uint8_t *)(v2 + 12);
  }
  else
  {
    v165 = *(uint32_t *)(v2 + 4 * v41 + 76);
    v166 = *(char *)(v165 + v40 + 1024);
    v198 = *(uint32_t *)(v165 + 4 * v40);
    v216 = *(uint32_t *)(v2 + 28);
    if ( *(uint8_t *)(v165 + v40 + 1024) != 0
      || (*(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40,
          (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32)),
          v44 = *(uint8_t *)(v2 + 12),
          v166 = 0,
          v44 == 0) )
    {
      v44 = 0;
      v167 = v198 & ((1 << v166) - 1);
      v199 = v216 + v166;
      v43 = *(uint8_t **)(v2 + 16);
      v168 = *(uint32_t *)(v2 + 24) | (v167 << (24 - (v216 + v166)));
      if ( v216 + v166 > 7 )
      {
        v222 = v39;
        v217 = v216 + v166;
        v169 = v168;
        do
        {
          *v43++ = BYTE2(v169);
          v170 = *(uint32_t *)(v2 + 20) - 1;
          *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v43);
          *(uint32_t *)(v2 + 20) = v170;
          if ( v170 == 0 )
          {
            v173 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
            if ( (*(uint8_t (**)(uint32_t))(v173 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
            {
              *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
              (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
            }
            v43 = *(uint8_t **)v173;
            *(uint32_t *)(v2 + 16) = *(uint32_t *)v173;
            *(uint32_t *)(v2 + 20) = *(uint32_t *)(v173 + 4);
          }
          if ( BYTE2(v169) == 255 )
          {
            *v43 = 0;
            v171 = *(uint32_t *)(v2 + 20) - 1;
            ++v43;
            v19 = *(uint32_t *)(v2 + 20) == 1;
            *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v43);
            *(uint32_t *)(v2 + 20) = v171;
            if ( v19 )
            {
              v172 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
              if ( (*(uint8_t (**)(uint32_t))(v172 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
              {
                *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
              }
              v43 = *(uint8_t **)v172;
              *(uint32_t *)(v2 + 16) = *(uint32_t *)v172;
              *(uint32_t *)(v2 + 20) = *(uint32_t *)(v172 + 4);
            }
          }
          v169 <<= 8;
          v217 -= 8;
        }
        while ( v217 > 7 );
        v168 = v169;
        v199 &= 7u;
        v39 = v222;
        v44 = *(uint8_t *)(v2 + 12);
      }
      *(uint32_t *)(v2 + 24) = v168;
      *(uint32_t *)(v2 + 28) = v199;
    }
    else
    {
      v43 = *(uint8_t **)(v2 + 16);
    }
  }
  if ( v39 != 0 )
  {
    if ( v44 != 0 )
    {
      *(uint32_t *)(v2 + 56) = 0;
      goto LABEL_284;
    }
    v158 = v39;
    v159 = *(uint32_t *)(v2 + 28) + v39;
    v197 = v159;
    v160 = *(uint32_t *)(v2 + 24) | ((*(uint32_t *)(v2 + 56) & ((1 << v158) - 1)) << (24 - v159));
    if ( v159 > 7 )
    {
      for ( j = v159; j > 7; j -= 8 )
      {
        *v43++ = BYTE2(v160);
        v161 = *(uint32_t *)(v2 + 20) - 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v43);
        *(uint32_t *)(v2 + 20) = v161;
        if ( v161 == 0 )
        {
          v164 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
          if ( (*(uint8_t (**)(uint32_t))(v164 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
          }
          v43 = *(uint8_t **)v164;
          *(uint32_t *)(v2 + 16) = *(uint32_t *)v164;
          *(uint32_t *)(v2 + 20) = *(uint32_t *)(v164 + 4);
        }
        if ( BYTE2(v160) == 255 )
        {
          *v43 = 0;
          v162 = *(uint32_t *)(v2 + 20) - 1;
          ++v43;
          v19 = *(uint32_t *)(v2 + 20) == 1;
          *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v43);
          *(uint32_t *)(v2 + 20) = v162;
          if ( v19 )
          {
            v163 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
            if ( (*(uint8_t (**)(uint32_t))(v163 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
            {
              *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
              (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
            }
            v43 = *(uint8_t **)v163;
            *(uint32_t *)(v2 + 16) = *(uint32_t *)v163;
            *(uint32_t *)(v2 + 20) = *(uint32_t *)(v163 + 4);
          }
        }
        v160 <<= 8;
      }
      v197 &= 7u;
      v44 = *(uint8_t *)(v2 + 12);
    }
    *(uint32_t *)(v2 + 24) = v160;
    *(uint32_t *)(v2 + 28) = v197;
  }
  v185 = *(uint32_t *)(v2 + 60);
  v45 = *(uint8_t **)(v2 + 64);
  *(uint32_t *)(v2 + 56) = 0;
  v221 = v45;
  if ( v44 == 0 && v185 != 0 )
  {
    v202 = *(uint32_t *)(v2 + 28);
    v46 = 0;
LABEL_88:
    if ( v46 != 0 )
      goto LABEL_103;
    v47 = v202 + 1;
    v48 = *(uint32_t *)(v2 + 24) | ((*v221 & 1) << (23 - v202));
    if ( v202 + 1 <= 7 )
      goto LABEL_102;
    v219 = *(uint32_t *)(v2 + 24) | ((*v221 & 1) << (23 - v202));
    v49 = v202 + 1;
    while ( 1 )
    {
      *v43++ = BYTE2(v219);
      v50 = *(uint32_t *)(v2 + 20) - 1;
      *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v43);
      *(uint32_t *)(v2 + 20) = v50;
      if ( v50 != 0 )
      {
        if ( BYTE2(v219) == 255 )
          goto LABEL_97;
LABEL_92:
        v49 -= 8;
        v219 <<= 8;
        if ( v49 <= 7 )
          goto LABEL_101;
      }
      else
      {
        v51 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
        if ( (*(uint8_t (**)(uint32_t))(v51 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        }
        v43 = *(uint8_t **)v51;
        *(uint32_t *)(v2 + 16) = *(uint32_t *)v51;
        *(uint32_t *)(v2 + 20) = *(uint32_t *)(v51 + 4);
        if ( BYTE2(v219) != 255 )
          goto LABEL_92;
LABEL_97:
        *v43 = 0;
        v52 = *(uint32_t *)(v2 + 20) - 1;
        ++v43;
        v19 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v43);
        *(uint32_t *)(v2 + 20) = v52;
        if ( !v19 )
          goto LABEL_92;
        v53 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
        if ( (*(uint8_t (**)(uint32_t))(v53 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        }
        v43 = *(uint8_t **)v53;
        v49 -= 8;
        *(uint32_t *)(v2 + 16) = *(uint32_t *)v53;
        v219 <<= 8;
        *(uint32_t *)(v2 + 20) = *(uint32_t *)(v53 + 4);
        if ( v49 <= 7 )
        {
LABEL_101:
          v48 = v219;
          v47 = ((uint8_t)v202 - 7) & 7;
LABEL_102:
          *(uint32_t *)(v2 + 24) = v48;
          *(uint32_t *)(v2 + 28) = v47;
          v202 = v47;
LABEL_103:
          if ( --v185 != 0 )
          {
            ++v221;
            v46 = *(uint8_t *)(v2 + 12);
            goto LABEL_88;
          }
          break;
        }
      }
    }
  }
LABEL_284:
  *(uint32_t *)(v2 + 60) = 0;
LABEL_227:
  **(uint32_t **)(a1 + 24) = (uint32_t)(uintptr_t)(v43);
  *(uint32_t *)(*(uint32_t *)(a1 + 24) + 4) = *(uint32_t *)(v2 + 20);
  v126 = *(uint32_t *)(a1 + 184);
  if ( v126 != 0 )
  {
    v127 = *(uint32_t *)(v2 + 68);
    if ( v127 == 0 )
    {
      *(uint32_t *)(v2 + 72) = ((uint8_t)*(uint32_t *)(v2 + 72) + 1) & 7;
      v127 = v126;
    }
    *(uint32_t *)(v2 + 68) = v127 - 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_F8C830  (binary VA: 0xf8c830)
// Original: sub_F8C830
// ----------------------------------------------------------------------------
int sub_F8C830(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint8_t *v11;
  int v12;
  int v13;
  bool v14;
  char v15;
  int v16;
  int v17;
  char v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint32_t *v24;
  char v25;
  char v26;
  int v27;
  int v28;
  uint8_t *v29;
  int v30;
  char v31;
  int v32;
  int v33;
  char v34;
  int v35;
  int v36;
  uint8_t *v37;
  int v38;
  int v39;
  int v41;
  int v42;
  int v43;
  uint8_t *v44;
  int v45;
  int v46;
  char v47;
  int v48;
  int v49;
  char v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  uint32_t *v56;
  char v57;
  int v58;
  uint8_t *v59;
  int v60;
  int v61;
  uint8_t *v62;
  int v63;
  char v64;
  int v65;
  int v66;
  char v67;
  int v68;
  int v69;
  int v70;
  int v71;
  uint8_t *v72;
  int v73;
  int v74;
  char v75;
  int v76;
  int v77;
  char v78;
  int v79;
  char v80;
  int v81;
  int v82;
  uint8_t *v83;
  int v84;
  char v85;
  int v86;
  int v87;
  char v88;
  int v89;
  int v90;
  char v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  char v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  uint8_t *v107;
  int v108;
  int v109;
  int v110;
  char v111;
  int v112;
  int v113;
  char v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  char v141;
  int v142;
  int v143;
  int v144;
  int v145;
  char v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  uint8_t *v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  uint8_t *v163;

  v2 = *(uint32_t *)(a1 + 344);
  v159 = *(uint32_t *)(a1 + 300);
  v162 = *(uint32_t *)(a1 + 308);
  *(uint32_t *)(v2 + 16) = **(uint32_t **)(a1 + 24);
  *(uint32_t *)(v2 + 20) = *(uint32_t *)(*(uint32_t *)(a1 + 24) + 4);
  if ( *(uint32_t *)(a1 + 184) != 0 && *(uint32_t *)(v2 + 68) == 0 )
    sub_F8A190(v2, *(uint32_t *)(v2 + 72));
  v160 = *a2;
  v154 = *(uint32_t *)(a1 + 296);
  if ( v159 < v154 )
    goto LABEL_55;
  v157 = 0;
  v3 = *(uint32_t *)(a1 + 296);
  do
  {
LABEL_6:
    v4 = *(int16_t *)(v160 + 2 * (&jpeg_natural_order)[v3]);
    if ( *(uint16_t *)(v160 + 2 * (&jpeg_natural_order)[v3]) == 0 )
      goto LABEL_61;
    v158 = v4 >> v162;
    v161 = v4 >> v162;
    if ( v4 < 0 )
    {
      v158 = -v4 >> v162;
      v161 = ~v158;
    }
    if ( v158 == 0 )
    {
LABEL_61:
      ++v157;
      goto LABEL_62;
    }
    v5 = *(uint32_t *)(v2 + 56);
    if ( v5 == 0 )
      goto LABEL_11;
    v52 = 0;
    v53 = 0;
    v54 = v5 >> 1;
    if ( v54 != 0 )
    {
      do
      {
        ++v53;
        v54 >>= 1;
      }
      while ( v54 != 0 );
      if ( v53 > 14 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
      }
      v52 = 16 * v53;
    }
    v55 = *(uint32_t *)(v2 + 52);
    if ( *(uint8_t *)(v2 + 12) != 0 )
    {
      v56 = (uint32_t *)(*(uint32_t *)(v2 + 4 * v55 + 92) + 4 * v52);
      ++*v56;
      v57 = *(uint8_t *)(v2 + 12);
      goto LABEL_88;
    }
    v69 = *(uint32_t *)(v2 + 4 * v55 + 76);
    v70 = *(char *)(v69 + v52 + 1024);
    v131 = *(uint32_t *)(v69 + 4 * v52);
    v144 = *(uint32_t *)(v2 + 28);
    if ( *(uint8_t *)(v69 + v52 + 1024) != 0
      || (*(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40,
          (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32)),
          v57 = *(uint8_t *)(v2 + 12),
          v70 = 0,
          v57 == 0) )
    {
      v57 = 0;
      v145 = v144 + v70;
      v71 = *(uint32_t *)(v2 + 24) | ((v131 & ((1 << v70) - 1)) << (24 - v145));
      if ( v145 <= 7 )
        goto LABEL_141;
      v152 = v53;
      v72 = *(uint8_t **)(v2 + 16);
      v73 = v145;
      while ( 1 )
      {
        *v72 = BYTE2(v71);
        v74 = *(uint32_t *)(v2 + 20) - 1;
        ++v72;
        v14 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v72);
        *(uint32_t *)(v2 + 20) = v74;
        if ( v14 )
          break;
        if ( BYTE2(v71) == 255 )
          goto LABEL_122;
LABEL_117:
        v73 -= 8;
        v71 <<= 8;
        if ( v73 <= 7 )
        {
          v53 = v152;
          v145 &= 7u;
          v57 = *(uint8_t *)(v2 + 12);
LABEL_141:
          *(uint32_t *)(v2 + 24) = v71;
          *(uint32_t *)(v2 + 28) = v145;
          goto LABEL_88;
        }
      }
      v132 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      v75 = (*(int (**)(uint32_t))(v132 + 12))(*(uint32_t *)(v2 + 32));
      v76 = BYTE2(v71);
      if ( v75 == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v76 = BYTE2(v71);
      }
      v72 = *(uint8_t **)v132;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v132;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v132 + 4);
      if ( v76 != 255 )
        goto LABEL_117;
LABEL_122:
      *v72 = 0;
      v77 = *(uint32_t *)(v2 + 20) - 1;
      ++v72;
      v14 = *(uint32_t *)(v2 + 20) == 1;
      *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v72);
      *(uint32_t *)(v2 + 20) = v77;
      if ( v14 )
      {
        v121 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
        v78 = (*(int (**)(uint32_t))(v121 + 12))(*(uint32_t *)(v2 + 32));
        v79 = v121;
        if ( v78 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
          v79 = v121;
        }
        v72 = *(uint8_t **)v79;
        *(uint32_t *)(v2 + 16) = *(uint32_t *)v79;
        *(uint32_t *)(v2 + 20) = *(uint32_t *)(v79 + 4);
      }
      goto LABEL_117;
    }
LABEL_88:
    if ( v53 == 0 )
      goto LABEL_89;
    if ( v57 != 0 )
    {
      *(uint32_t *)(v2 + 56) = 0;
      goto LABEL_110;
    }
    v80 = v53;
    v81 = *(uint32_t *)(v2 + 28) + v53;
    v146 = v81;
    v82 = *(uint32_t *)(v2 + 24) | ((*(uint32_t *)(v2 + 56) & ((1 << v80) - 1)) << (24 - v81));
    if ( v81 <= 7 )
      goto LABEL_143;
    v83 = *(uint8_t **)(v2 + 16);
    do
    {
      *v83 = BYTE2(v82);
      v84 = *(uint32_t *)(v2 + 20) - 1;
      ++v83;
      v14 = *(uint32_t *)(v2 + 20) == 1;
      *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v83);
      *(uint32_t *)(v2 + 20) = v84;
      if ( !v14 )
      {
        if ( BYTE2(v82) != 255 )
          goto LABEL_130;
LABEL_135:
        *v83 = 0;
        v87 = *(uint32_t *)(v2 + 20) - 1;
        ++v83;
        v14 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v83);
        *(uint32_t *)(v2 + 20) = v87;
        if ( v14 )
        {
          v122 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
          v88 = (*(int (**)(uint32_t))(v122 + 12))(*(uint32_t *)(v2 + 32));
          v89 = v122;
          if ( v88 == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
            v89 = v122;
          }
          v83 = *(uint8_t **)v89;
          *(uint32_t *)(v2 + 16) = *(uint32_t *)v89;
          *(uint32_t *)(v2 + 20) = *(uint32_t *)(v89 + 4);
        }
        goto LABEL_130;
      }
      v133 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      v85 = (*(int (**)(uint32_t))(v133 + 12))(*(uint32_t *)(v2 + 32));
      v86 = BYTE2(v82);
      if ( v85 == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v86 = BYTE2(v82);
      }
      v83 = *(uint8_t **)v133;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v133;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v133 + 4);
      if ( v86 == 255 )
        goto LABEL_135;
LABEL_130:
      v81 -= 8;
      v82 <<= 8;
    }
    while ( v81 > 7 );
    v81 = v146 & 7;
    v57 = *(uint8_t *)(v2 + 12);
LABEL_143:
    *(uint32_t *)(v2 + 24) = v82;
    *(uint32_t *)(v2 + 28) = v81;
LABEL_89:
    v58 = *(uint32_t *)(v2 + 60);
    v59 = *(uint8_t **)(v2 + 64);
    *(uint32_t *)(v2 + 56) = 0;
    v151 = v58;
    v163 = v59;
    if ( v57 == 0 && v58 != 0 )
    {
      v143 = *(uint32_t *)(v2 + 28);
      while ( 1 )
      {
        if ( v57 == 0 )
        {
          v60 = v143 + 1;
          v61 = *(uint32_t *)(v2 + 24) | ((*v163 & 1) << (23 - v143));
          if ( v143 + 1 > 7 )
          {
            v62 = *(uint8_t **)(v2 + 16);
            while ( 1 )
            {
              *v62 = BYTE2(v61);
              v63 = *(uint32_t *)(v2 + 20) - 1;
              ++v62;
              v14 = *(uint32_t *)(v2 + 20) == 1;
              *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v62);
              *(uint32_t *)(v2 + 20) = v63;
              if ( v14 )
              {
                v130 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
                v64 = (*(int (**)(uint32_t))(v130 + 12))(*(uint32_t *)(v2 + 32));
                v65 = BYTE2(v61);
                if ( v64 == 0 )
                {
                  *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                  (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
                  v65 = BYTE2(v61);
                }
                v62 = *(uint8_t **)v130;
                *(uint32_t *)(v2 + 16) = *(uint32_t *)v130;
                *(uint32_t *)(v2 + 20) = *(uint32_t *)(v130 + 4);
                if ( v65 != 255 )
                  goto LABEL_96;
LABEL_101:
                *v62 = 0;
                v66 = *(uint32_t *)(v2 + 20) - 1;
                ++v62;
                v14 = *(uint32_t *)(v2 + 20) == 1;
                *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v62);
                *(uint32_t *)(v2 + 20) = v66;
                if ( !v14 )
                  goto LABEL_96;
                v120 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
                v67 = (*(int (**)(uint32_t))(v120 + 12))(*(uint32_t *)(v2 + 32));
                v68 = v120;
                if ( v67 == 0 )
                {
                  *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
                  (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
                  v68 = v120;
                }
                v62 = *(uint8_t **)v68;
                v60 -= 8;
                *(uint32_t *)(v2 + 16) = *(uint32_t *)v68;
                v61 <<= 8;
                *(uint32_t *)(v2 + 20) = *(uint32_t *)(v68 + 4);
                if ( v60 <= 7 )
                {
LABEL_105:
                  v143 = ((uint8_t)v143 - 7) & 7;
                  goto LABEL_106;
                }
              }
              else
              {
                if ( BYTE2(v61) == 255 )
                  goto LABEL_101;
LABEL_96:
                v60 -= 8;
                v61 <<= 8;
                if ( v60 <= 7 )
                  goto LABEL_105;
              }
            }
          }
          ++v143;
LABEL_106:
          *(uint32_t *)(v2 + 24) = v61;
          *(uint32_t *)(v2 + 28) = v143;
        }
        if ( --v151 == 0 )
          break;
        ++v163;
        v57 = *(uint8_t *)(v2 + 12);
      }
    }
LABEL_110:
    *(uint32_t *)(v2 + 60) = 0;
LABEL_11:
    if ( v157 > 15 )
    {
      v126 = v157;
      while ( 1 )
      {
        while ( 1 )
        {
          v6 = *(uint32_t *)(v2 + 52);
          if ( *(uint8_t *)(v2 + 12) == 0 )
            break;
          ++*(uint32_t *)(*(uint32_t *)(v2 + 4 * v6 + 92) + 960);
LABEL_14:
          v126 -= 16;
          if ( v126 <= 15 )
            goto LABEL_31;
        }
        v7 = *(uint32_t *)(v2 + 4 * v6 + 76);
        v138 = *(uint32_t *)(v2 + 28);
        v8 = *(char *)(v7 + 1264);
        v9 = *(uint32_t *)(v7 + 960);
        if ( *(uint8_t *)(v7 + 1264) == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40;
          v118 = v8;
          (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
          v8 = v118;
          if ( *(uint8_t *)(v2 + 12) != 0 )
            goto LABEL_14;
        }
        v149 = v138 + v8;
        v10 = *(uint32_t *)(v2 + 24) | ((v9 & ((1 << v8) - 1)) << (24 - (v138 + v8)));
        if ( v138 + v8 <= 7 )
          goto LABEL_30;
        v11 = *(uint8_t **)(v2 + 16);
        v12 = v138 + v8;
        do
        {
          while ( 1 )
          {
            *v11 = BYTE2(v10);
            v13 = *(uint32_t *)(v2 + 20) - 1;
            ++v11;
            v14 = *(uint32_t *)(v2 + 20) == 1;
            *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v11);
            *(uint32_t *)(v2 + 20) = v13;
            if ( v14 )
              break;
            if ( BYTE2(v10) == 255 )
              goto LABEL_25;
LABEL_20:
            v12 -= 8;
            v10 <<= 8;
            if ( v12 <= 7 )
              goto LABEL_29;
          }
          v139 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
          v15 = (*(int (**)(uint32_t))(v139 + 12))(*(uint32_t *)(v2 + 32));
          v16 = BYTE2(v10);
          if ( v15 == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
            v16 = BYTE2(v10);
          }
          v11 = *(uint8_t **)v139;
          *(uint32_t *)(v2 + 16) = *(uint32_t *)v139;
          *(uint32_t *)(v2 + 20) = *(uint32_t *)(v139 + 4);
          if ( v16 != 255 )
            goto LABEL_20;
LABEL_25:
          *v11 = 0;
          v17 = *(uint32_t *)(v2 + 20) - 1;
          ++v11;
          v14 = *(uint32_t *)(v2 + 20) == 1;
          *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v11);
          *(uint32_t *)(v2 + 20) = v17;
          if ( !v14 )
            goto LABEL_20;
          v116 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
          v18 = (*(int (**)(uint32_t))(v116 + 12))(*(uint32_t *)(v2 + 32));
          v19 = v116;
          if ( v18 == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
            v19 = v116;
          }
          v11 = *(uint8_t **)v19;
          v12 -= 8;
          *(uint32_t *)(v2 + 16) = *(uint32_t *)v19;
          v10 <<= 8;
          *(uint32_t *)(v2 + 20) = *(uint32_t *)(v19 + 4);
        }
        while ( v12 > 7 );
LABEL_29:
        v149 &= 7u;
LABEL_30:
        *(uint32_t *)(v2 + 24) = v10;
        v126 -= 16;
        *(uint32_t *)(v2 + 28) = v149;
        if ( v126 <= 15 )
        {
LABEL_31:
          v157 &= 0xFu;
          break;
        }
      }
    }
    v20 = 1;
    v21 = v158 >> 1;
    if ( v158 >> 1 != 0 )
    {
      do
      {
        ++v20;
        v21 >>= 1;
      }
      while ( v21 != 0 );
      if ( v20 > 10 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 6;
        (**(void (***)(int))a1)(a1);
      }
    }
    v22 = *(uint32_t *)(v2 + 52);
    v23 = v20 + 16 * v157;
    if ( *(uint8_t *)(v2 + 12) != 0 )
    {
      v24 = (uint32_t *)(*(uint32_t *)(v2 + 4 * v22 + 92) + 4 * v23);
      ++*v24;
      v140 = *(uint32_t *)(v2 + 28);
      v25 = *(uint8_t *)(v2 + 12);
      goto LABEL_38;
    }
    v41 = *(uint32_t *)(v2 + 4 * v22 + 76);
    v42 = *(char *)(v41 + v23 + 1024);
    v128 = *(uint32_t *)(v41 + 4 * v23);
    v142 = *(uint32_t *)(v2 + 28);
    if ( *(uint8_t *)(v41 + v23 + 1024) == 0 )
    {
      *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40;
      (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
      v42 = 0;
      if ( *(uint8_t *)(v2 + 12) != 0 )
      {
        v157 = 0;
        goto LABEL_62;
      }
    }
    v25 = 0;
    v140 = v142 + v42;
    v43 = *(uint32_t *)(v2 + 24) | ((v128 & ((1 << v42) - 1)) << (24 - v140));
    if ( v140 <= 7 )
      goto LABEL_80;
    v150 = v20;
    v44 = *(uint8_t **)(v2 + 16);
    v45 = v140;
    do
    {
      while ( 1 )
      {
        *v44 = BYTE2(v43);
        v46 = *(uint32_t *)(v2 + 20) - 1;
        ++v44;
        v14 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v44);
        *(uint32_t *)(v2 + 20) = v46;
        if ( v14 )
          break;
        if ( BYTE2(v43) == 255 )
          goto LABEL_75;
LABEL_70:
        v45 -= 8;
        v43 <<= 8;
        if ( v45 <= 7 )
          goto LABEL_79;
      }
      v129 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      v47 = (*(int (**)(uint32_t))(v129 + 12))(*(uint32_t *)(v2 + 32));
      v48 = BYTE2(v43);
      if ( v47 == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v48 = BYTE2(v43);
      }
      v44 = *(uint8_t **)v129;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v129;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v129 + 4);
      if ( v48 != 255 )
        goto LABEL_70;
LABEL_75:
      *v44 = 0;
      v49 = *(uint32_t *)(v2 + 20) - 1;
      ++v44;
      v14 = *(uint32_t *)(v2 + 20) == 1;
      *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v44);
      *(uint32_t *)(v2 + 20) = v49;
      if ( !v14 )
        goto LABEL_70;
      v119 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      v50 = (*(int (**)(uint32_t))(v119 + 12))(*(uint32_t *)(v2 + 32));
      v51 = v119;
      if ( v50 == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v51 = v119;
      }
      v44 = *(uint8_t **)v51;
      v45 -= 8;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v51;
      v43 <<= 8;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v51 + 4);
    }
    while ( v45 > 7 );
LABEL_79:
    v20 = v150;
    v140 &= 7u;
    v25 = *(uint8_t *)(v2 + 12);
LABEL_80:
    *(uint32_t *)(v2 + 24) = v43;
    *(uint32_t *)(v2 + 28) = v140;
LABEL_38:
    v157 = 0;
    if ( v25 != 0 )
    {
LABEL_62:
      v3 = ++v154;
      if ( v159 < v154 )
        break;
      goto LABEL_6;
    }
    v26 = v20;
    v27 = v140 + v20;
    v141 = v27;
    v28 = *(uint32_t *)(v2 + 24) | ((v161 & ((1 << v26) - 1)) << (24 - v27));
    if ( v27 <= 7 )
      goto LABEL_52;
    v29 = *(uint8_t **)(v2 + 16);
    while ( 2 )
    {
      while ( 2 )
      {
        *v29 = BYTE2(v28);
        v30 = *(uint32_t *)(v2 + 20) - 1;
        ++v29;
        v14 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v29);
        *(uint32_t *)(v2 + 20) = v30;
        if ( !v14 )
        {
          if ( BYTE2(v28) == 255 )
            goto LABEL_47;
LABEL_42:
          v27 -= 8;
          v28 <<= 8;
          if ( v27 <= 7 )
            goto LABEL_51;
          continue;
        }
        break;
      }
      v127 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      v31 = (*(int (**)(uint32_t))(v127 + 12))(*(uint32_t *)(v2 + 32));
      v32 = BYTE2(v28);
      if ( v31 == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v32 = BYTE2(v28);
      }
      v29 = *(uint8_t **)v127;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v127;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v127 + 4);
      if ( v32 != 255 )
        goto LABEL_42;
LABEL_47:
      *v29 = 0;
      v33 = *(uint32_t *)(v2 + 20) - 1;
      ++v29;
      v14 = *(uint32_t *)(v2 + 20) == 1;
      *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v29);
      *(uint32_t *)(v2 + 20) = v33;
      if ( !v14 )
        goto LABEL_42;
      v117 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      v34 = (*(int (**)(uint32_t))(v117 + 12))(*(uint32_t *)(v2 + 32));
      v35 = v117;
      if ( v34 == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v35 = v117;
      }
      v29 = *(uint8_t **)v35;
      v27 -= 8;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v35;
      v28 <<= 8;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v35 + 4);
      if ( v27 > 7 )
        continue;
      break;
    }
LABEL_51:
    v27 = v141 & 7;
LABEL_52:
    v3 = ++v154;
    *(uint32_t *)(v2 + 24) = v28;
    *(uint32_t *)(v2 + 28) = v27;
    v157 = 0;
  }
  while ( v159 >= v154 );
  if ( v157 == 0 || (v36 = *(uint32_t *)(v2 + 56) + 1, *(uint32_t *)(v2 + 56) = v36, v36 != 0x7FFF) )
  {
LABEL_55:
    v37 = *(uint8_t **)(v2 + 16);
    goto LABEL_56;
  }
  v90 = *(uint32_t *)(v2 + 52);
  if ( *(uint8_t *)(v2 + 12) != 0 )
  {
    ++*(uint32_t *)(*(uint32_t *)(v2 + 4 * v90 + 92) + 896);
    v37 = *(uint8_t **)(v2 + 16);
    v91 = *(uint8_t *)(v2 + 12);
    v92 = *(uint32_t *)(v2 + 28);
    goto LABEL_146;
  }
  v96 = *(uint32_t *)(v2 + 4 * v90 + 76);
  v135 = *(uint32_t *)(v2 + 28);
  v97 = *(char *)(v96 + 1248);
  v98 = *(uint32_t *)(v96 + 896);
  if ( *(uint8_t *)(v96 + 1248) == 0 )
  {
    *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 40;
    v125 = v97;
    (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
    v97 = v125;
    if ( *(uint8_t *)(v2 + 12) != 0 )
    {
      v37 = *(uint8_t **)(v2 + 16);
      goto LABEL_198;
    }
  }
  v91 = 0;
  v148 = v135 + v97;
  v37 = *(uint8_t **)(v2 + 16);
  v99 = *(uint32_t *)(v2 + 24) | ((v98 & ((1 << v97) - 1)) << (24 - (v135 + v97)));
  if ( v135 + v97 > 7 )
  {
    v136 = v135 + v97;
    do
    {
      *v37 = BYTE2(v99);
      v100 = *(uint32_t *)(v2 + 20) - 1;
      ++v37;
      v14 = *(uint32_t *)(v2 + 20) == 1;
      *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v37);
      *(uint32_t *)(v2 + 20) = v100;
      if ( v14 )
      {
        v123 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
        v101 = (*(int (**)(uint32_t))(v123 + 12))(*(uint32_t *)(v2 + 32));
        v102 = v123;
        if ( v101 == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
          v102 = v123;
        }
        v37 = *(uint8_t **)v102;
        *(uint32_t *)(v2 + 16) = *(uint32_t *)v102;
        *(uint32_t *)(v2 + 20) = *(uint32_t *)(v102 + 4);
      }
      if ( BYTE2(v99) == 255 )
      {
        *v37 = 0;
        v103 = *(uint32_t *)(v2 + 20) - 1;
        ++v37;
        v14 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v37);
        *(uint32_t *)(v2 + 20) = v103;
        if ( v14 )
        {
          v104 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
          if ( (*(uint8_t (**)(uint32_t))(v104 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
          }
          v37 = *(uint8_t **)v104;
          *(uint32_t *)(v2 + 16) = *(uint32_t *)v104;
          *(uint32_t *)(v2 + 20) = *(uint32_t *)(v104 + 4);
        }
      }
      v99 <<= 8;
      v136 -= 8;
    }
    while ( v136 > 7 );
    v148 &= 7u;
    v91 = *(uint8_t *)(v2 + 12);
  }
  *(uint32_t *)(v2 + 24) = v99;
  *(uint32_t *)(v2 + 28) = v148;
  v92 = v148;
LABEL_146:
  v155 = v92;
  if ( v91 != 0 )
  {
LABEL_198:
    *(uint32_t *)(v2 + 56) = 0;
    goto LABEL_199;
  }
  v147 = v92 + 14;
  v93 = *(uint32_t *)(v2 + 24) | ((*(uint32_t *)(v2 + 56) & 0x3FFF) << (10 - v92));
  if ( v92 + 14 > 7 )
  {
    v134 = v92 + 14;
    do
    {
      *v37++ = BYTE2(v93);
      v94 = *(uint32_t *)(v2 + 20) - 1;
      *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v37);
      *(uint32_t *)(v2 + 20) = v94;
      if ( v94 == 0 )
      {
        v95 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
        if ( (*(uint8_t (**)(uint32_t))(v95 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
        {
          *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
          (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        }
        v37 = *(uint8_t **)v95;
        *(uint32_t *)(v2 + 16) = *(uint32_t *)v95;
        *(uint32_t *)(v2 + 20) = *(uint32_t *)(v95 + 4);
      }
      if ( BYTE2(v93) == 255 )
      {
        *v37 = 0;
        v105 = *(uint32_t *)(v2 + 20) - 1;
        ++v37;
        v14 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v37);
        *(uint32_t *)(v2 + 20) = v105;
        if ( v14 )
        {
          v106 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
          if ( (*(uint8_t (**)(uint32_t))(v106 + 12))(*(uint32_t *)(v2 + 32)) == 0 )
          {
            *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
            (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
          }
          v37 = *(uint8_t **)v106;
          *(uint32_t *)(v2 + 16) = *(uint32_t *)v106;
          *(uint32_t *)(v2 + 20) = *(uint32_t *)(v106 + 4);
        }
      }
      v93 <<= 8;
      v134 -= 8;
    }
    while ( v134 > 7 );
    v147 = v155 - ((v147 - 8) & 0xFFFFFFF8) + 6;
    v91 = *(uint8_t *)(v2 + 12);
  }
  *(uint32_t *)(v2 + 24) = v93;
  *(uint32_t *)(v2 + 28) = v147;
  v156 = *(uint32_t *)(v2 + 60);
  v107 = *(uint8_t **)(v2 + 64);
  *(uint32_t *)(v2 + 56) = 0;
  v153 = v107;
  if ( v91 != 0 || v156 == 0 )
    goto LABEL_199;
  while ( 2 )
  {
    if ( v91 != 0 )
      goto LABEL_194;
    v108 = v147 + 1;
    v109 = *(uint32_t *)(v2 + 24) | ((*v153 & 1) << (23 - v147));
    if ( v147 + 1 <= 7 )
    {
      ++v147;
      goto LABEL_193;
    }
    while ( 2 )
    {
      while ( 2 )
      {
        *v37 = BYTE2(v109);
        v110 = *(uint32_t *)(v2 + 20) - 1;
        ++v37;
        v14 = *(uint32_t *)(v2 + 20) == 1;
        *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v37);
        *(uint32_t *)(v2 + 20) = v110;
        if ( !v14 )
        {
          if ( BYTE2(v109) == 255 )
            goto LABEL_188;
LABEL_183:
          v108 -= 8;
          v109 <<= 8;
          if ( v108 <= 7 )
            goto LABEL_192;
          continue;
        }
        break;
      }
      v137 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      v111 = (*(int (**)(uint32_t))(v137 + 12))(*(uint32_t *)(v2 + 32));
      v112 = BYTE2(v109);
      if ( v111 == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v112 = BYTE2(v109);
      }
      v37 = *(uint8_t **)v137;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v137;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v137 + 4);
      if ( v112 != 255 )
        goto LABEL_183;
LABEL_188:
      *v37 = 0;
      v113 = *(uint32_t *)(v2 + 20) - 1;
      ++v37;
      v14 = *(uint32_t *)(v2 + 20) == 1;
      *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(v37);
      *(uint32_t *)(v2 + 20) = v113;
      if ( !v14 )
        goto LABEL_183;
      v124 = *(uint32_t *)(*(uint32_t *)(v2 + 32) + 24);
      v114 = (*(int (**)(uint32_t))(v124 + 12))(*(uint32_t *)(v2 + 32));
      v115 = v124;
      if ( v114 == 0 )
      {
        *(uint32_t *)(**(uint32_t **)(v2 + 32) + 20) = 24;
        (***(void (****)(uint32_t))(v2 + 32))(*(uint32_t *)(v2 + 32));
        v115 = v124;
      }
      v37 = *(uint8_t **)v115;
      v108 -= 8;
      *(uint32_t *)(v2 + 16) = *(uint32_t *)v115;
      v109 <<= 8;
      *(uint32_t *)(v2 + 20) = *(uint32_t *)(v115 + 4);
      if ( v108 > 7 )
        continue;
      break;
    }
LABEL_192:
    v147 = ((uint8_t)v147 - 7) & 7;
LABEL_193:
    *(uint32_t *)(v2 + 24) = v109;
    *(uint32_t *)(v2 + 28) = v147;
LABEL_194:
    if ( --v156 != 0 )
    {
      ++v153;
      v91 = *(uint8_t *)(v2 + 12);
      continue;
    }
    break;
  }
LABEL_199:
  *(uint32_t *)(v2 + 60) = 0;
LABEL_56:
  **(uint32_t **)(a1 + 24) = (uint32_t)(uintptr_t)(v37);
  *(uint32_t *)(*(uint32_t *)(a1 + 24) + 4) = *(uint32_t *)(v2 + 20);
  v38 = *(uint32_t *)(a1 + 184);
  if ( v38 != 0 )
  {
    v39 = *(uint32_t *)(v2 + 68);
    if ( v39 == 0 )
    {
      *(uint32_t *)(v2 + 72) = ((uint8_t)*(uint32_t *)(v2 + 72) + 1) & 7;
      v39 = v38;
    }
    *(uint32_t *)(v2 + 68) = v39 - 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_F8D920  (binary VA: 0xf8d920)
// Original: sub_F8D920
// ----------------------------------------------------------------------------
int sub_F8D920(uint32_t *a1, int a2)
{
  uint32_t *v2;
  int v3;
  int result;

  v2 = (uint32_t *)a1[80];
  if ( a2 != 0 )
  {
    *(uint32_t *)(*a1 + 20) = 4;
    G4_VCALL<void>(a1, 0);
  }
  v3 = a1[8];
  v2[13] = 0;
  v2[12] = v3;
  v2[14] = 0;
  result = 2 * a1[54];
  v2[15] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F8D980  (binary VA: 0xf8d980)
// Original: sub_F8D980
// ----------------------------------------------------------------------------
int sub_F8D980(size_t *a1, int a2, int *a3, unsigned int a4, int a5, unsigned int *a6, unsigned int a7)
{
  size_t *v7;
  uint32_t *v8;
  int result;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  size_t v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int i;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  uint32_t *v35;
  uint32_t *v36;
  int v37;

  v7 = a1;
  v35 = (uint32_t *)a1[80];
  v8 = v35;
  v36 = v35 + 2;
  v37 = 3 * a1[54];
  while ( 1 )
  {
    result = (int)(uintptr_t)(a6);
    v10 = *a6;
    if ( a7 <= *a6 )
      return result;
    while ( 1 )
    {
      result = *a3;
      if ( *a3 < a4 )
      {
        v15 = v8[13];
        v16 = v8[15] - v15;
        if ( a4 - result <= v16 )
          v16 = a4 - result;
        v32 = v16;
        (*(void (**)(size_t *, int, uint32_t *, int, unsigned int))(v7[83] + 4))(
          v7,
          a2 + 4 * result,
          v36,
          v15,
          v16);
        if ( v8[12] == v7[8] )
        {
          v19 = v7[14];
          if ( v19 > 0 )
          {
            v20 = v7[54];
            v21 = v8;
            for ( i = 0; i < v19; ++i )
            {
              v23 = 1;
              if ( v20 > 0 )
              {
                v24 = i;
                v25 = v21;
                v26 = v24;
                do
                {
                  v29 = v26;
                  v28 = -v23++;
                  jcopy_sample_rows(v25[v26 + 2], 0, v25[v26 + 2], v28, 1, v7[7]);
                  v20 = v7[54];
                  v26 = v29;
                }
                while ( v20 >= v23 );
                v21 = v25;
                i = v29;
                v19 = v7[14];
              }
            }
            v8 = v21;
          }
        }
        *a3 += v32;
        v11 = v32 + v8[13];
        v8[12] -= v32;
        v8[13] = v11;
        result = v8[15];
        v10 = *a6;
        goto LABEL_18;
      }
      if ( v8[12] != 0 )
        return result;
      v11 = v8[13];
      result = v8[15];
      if ( v11 < result )
        break;
LABEL_18:
      if ( v11 == result )
        goto LABEL_22;
      if ( a7 <= v10 )
        return result;
    }
    v12 = v8[15];
    if ( (int)a1[14] > 0 )
    {
      v34 = 0;
      v30 = a1[14];
      while ( 1 )
      {
        v13 = v35[v34 + 2];
        if ( v12 > v11 )
        {
          v33 = v12;
          v31 = v11 - 1;
          v14 = a1[7];
          do
          {
            v27 = v11++;
            jcopy_sample_rows(v13, v31, v13, v27, 1, v14);
          }
          while ( v11 != v33 );
          v12 = v35[15];
          v30 = a1[14];
        }
        if ( ++v34 >= v30 )
          break;
        v11 = v35[13];
      }
    }
    v35[13] = v12;
    v10 = *a6;
LABEL_22:
    (*(void (**)(size_t *, uint32_t *, uint32_t, int, unsigned int))(a1[84] + 4))(a1, v36, v35[14], a5, v10);
    v17 = 0;
    ++*a6;
    if ( v37 > (int)(a1[54] + v35[14]) )
      v17 = a1[54] + v35[14];
    v35[14] = v17;
    v18 = v35[13];
    if ( v37 <= v18 )
    {
      v35[13] = 0;
      v18 = 0;
    }
    v8 = v35;
    v7 = a1;
    v35[15] = a1[54] + v18;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_F8DC50  (binary VA: 0xf8dc50)
// Original: sub_F8DC50
// ----------------------------------------------------------------------------
int sub_F8DC50(uint32_t *a1, int a2, unsigned int *a3, unsigned int a4, int a5, unsigned int *a6, unsigned int a7)
{
  int result;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  bool v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  size_t v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;

  v27 = a1[80];
  v31 = v27 + 8;
  while ( 1 )
  {
    result = (int)(uintptr_t)(a3);
    v8 = *a3;
    if ( *a3 >= a4 || *a6 >= a7 )
      return result;
    v9 = a4 - v8;
    v10 = *(uint32_t *)(v27 + 52);
    if ( a4 - v8 > a1[54] - v10 )
      v9 = a1[54] - v10;
    (*(void (**)(uint32_t *, unsigned int, int, uint32_t, unsigned int))(a1[83] + 4))(
      a1,
      a2 + 4 * v8,
      v31,
      *(uint32_t *)(v27 + 52),
      v9);
    *a3 += v9;
    v11 = *(uint32_t *)(v27 + 52) + v9;
    *(uint32_t *)(v27 + 52) = v11;
    v12 = *(uint32_t *)(v27 + 48) == v9;
    *(uint32_t *)(v27 + 48) -= v9;
    if ( !v12 )
    {
      v13 = a1[54];
LABEL_8:
      if ( v11 != v13 )
        goto LABEL_9;
      goto LABEL_29;
    }
    v13 = a1[54];
    if ( v11 >= v13 )
      goto LABEL_8;
    v19 = a1[14];
    if ( v19 > 0 )
    {
      v30 = 0;
      while ( 1 )
      {
        v24 = a1[7];
        v20 = *(uint32_t *)(v27 + 4 * v30 + 8);
        if ( v13 > v11 )
        {
          v26 = v11 - 1;
          do
          {
            v22 = v11++;
            jcopy_sample_rows(v20, v26, v20, v22, 1, v24);
          }
          while ( v11 != v13 );
          v19 = a1[14];
          v13 = a1[54];
        }
        if ( ++v30 >= v19 )
          break;
        v11 = *(uint32_t *)(v27 + 52);
      }
    }
    *(uint32_t *)(v27 + 52) = v13;
    if ( v13 == a1[54] )
    {
LABEL_29:
      (*(void (**)(uint32_t *, int, uint32_t, int, unsigned int))(a1[84] + 4))(a1, v31, 0, a5, *a6);
      *(uint32_t *)(v27 + 52) = 0;
      ++*a6;
    }
LABEL_9:
    if ( *(uint32_t *)(v27 + 48) == 0 )
    {
      v14 = *a6;
      if ( a7 > *a6 )
      {
        v29 = a1[16];
        result = a1[14];
        if ( result > 0 )
        {
          v28 = 0;
          while ( 1 )
          {
            v15 = *(uint32_t *)(v29 + 12);
            v16 = v15 * a7;
            v17 = v15 * v14;
            v23 = 8 * *(uint32_t *)(v29 + 28);
            v18 = *(uint32_t *)(a5 + 4 * v28);
            if ( (int)(v15 * a7) > v17 )
            {
              v25 = v17 - 1;
              do
              {
                v21 = v17++;
                jcopy_sample_rows(v18, v25, v18, v21, 1, v23);
              }
              while ( v16 != v17 );
              result = a1[14];
            }
            if ( ++v28 >= result )
              break;
            v29 += 84;
            v14 = *a6;
          }
        }
        *a6 = a7;
        return result;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: nullsub_532  (binary VA: 0xf8e2c8)
// Original: nullsub_532
// ----------------------------------------------------------------------------
void nullsub_532()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_F8E2D0  (binary VA: 0xf8e2d0)
// Original: sub_F8E2D0
// ----------------------------------------------------------------------------
int sub_F8E2D0(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;

  v5 = a1[16];
  v10 = a1[84];
  result = a1[14];
  if ( result > 0 )
  {
    v7 = 0;
    do
    {
      v9 = *(uint32_t *)(a4 + 4 * v7) + *(uint32_t *)(v5 + 12) * 4 * a5;
      v8 = v5;
      v5 += 84;
      result = (*(int (**)(uint32_t *, int, int, int))(v10 + 4 * v7 + 12))(
                 a1,
                 v8,
                 *(uint32_t *)(a2 + 4 * v7) + 4 * a3,
                 v9);
      ++v7;
    }
    while ( a1[14] > v7 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F8E350  (binary VA: 0xf8e350)
// Original: sub_F8E350
// ----------------------------------------------------------------------------
int sub_F8E350(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  unsigned int v5;
  unsigned int v6;
  uint8_t *v7;
  unsigned int i;
  int v9;
  __m128i v10;
  __m128i v11;
  __m128i *v12;
  __m128i v13;
  unsigned int v14;
  int v15;
  int result;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  uint8_t *v32;
  int v33;
  uint8_t *v34;
  int v35;
  unsigned int v36;
  uint8_t *v37;
  int v38;
  int v39;
  int v40;
  uint8_t *v41;
  unsigned int v42;
  int v43;

  v23 = 8 * *(uint32_t *)(a2 + 28);
  v28 = a1[7];
  v4 = a1[54];
  v42 = v23 - v28;
  if ( v23 - v28 > 0 && v4 >= -1 )
  {
    v38 = 1;
    v26 = v4 + 3;
    while ( 1 )
    {
      v40 = *(uint32_t *)(a3 + 4 * v38 - 8) + v28;
      v5 = -v40 & 0xF;
      if ( v42 <= v5 )
        v5 = v23 - v28;
      v6 = *(uint8_t *)(v40 - 1);
      if ( v5 == 0 )
        break;
      v7 = (uint8_t *)(*(uint32_t *)(a3 + 4 * v38 - 8) + v28);
      v35 = v23 - v28;
      for ( i = 0; i < v5; ++i )
      {
        --v35;
        *v7++ = v6;
      }
      v9 = v35;
      if ( v42 != v5 )
        goto LABEL_10;
LABEL_15:
      if ( ++v38 == v26 )
        goto LABEL_16;
    }
    v7 = (uint8_t *)(*(uint32_t *)(a3 + 4 * v38 - 8) + v28);
    v9 = v23 - v28;
LABEL_10:
    v31 = v42 - v5;
    v36 = (v42 - v5) >> 4;
    v33 = 16 * v36;
    if ( 16 * v36 == 0 )
      goto LABEL_26;
    v10 = _mm_cvtsi32_si128(v6);
    v11 = _mm_unpacklo_epi8(v10, v10);
    v12 = (__m128i *)(v40 + v5);
    v13 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v11, v11), 0);
    v14 = 0;
    do
    {
      ++v14;
      *v12++ = v13;
    }
    while ( v14 < v36 );
    v9 -= v33;
    v7 += v33;
    if ( v31 != v33 )
    {
LABEL_26:
      do
      {
        --v9;
        *v7++ = v6;
      }
      while ( v9 != 0 );
    }
    goto LABEL_15;
  }
LABEL_16:
  v15 = a1[44];
  v29 = 128 - v15;
  result = v15 << 6;
  v30 = v29 << 9;
  v27 = result;
  if ( *(int *)(a2 + 12) > 0 )
  {
    v25 = 0;
    v17 = 0;
    v24 = v23 - 2;
    do
    {
      v37 = *(uint8_t **)(a3 + 4 * v25 - 4);
      v32 = *(uint8_t **)(a4 + 4 * v17);
      v34 = *(uint8_t **)(a3 + 4 * v25 + 4);
      v41 = *(uint8_t **)(a3 + 4 * v25);
      v18 = *v37 + *v34;
      v19 = *v41;
      v39 = v18 + v19;
      v20 = v37[1] + v34[1] + v41[1];
      v43 = v24;
      *v32 = (unsigned int)(v30 * v19 + v27 * (v20 + v18 + v18 + v19) + 0x8000) >> 16;
      v21 = 0;
      while ( 1 )
      {
        v22 = v34[v21 + 2] + v37[v21 + 2] + v41[v21 + 2];
        v32[v21 + 1] = (v41[v21 + 1] * v30 + v27 * (v22 + v39 + v20 - (unsigned int)v41[v21 + 1]) + 0x8000) >> 16;
        ++v21;
        if ( --v43 == 0 )
          break;
        v39 = v20;
        v20 = v22;
      }
      v17 = ++v25;
      result = (v41[v24 + 1] * v30 + v27 * (v22 + v22 - v41[v24 + 1] + v20) + 0x8000) >> 16;
      v32[v24 + 1] = result;
    }
    while ( *(uint32_t *)(a2 + 12) > v25 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F8E640  (binary VA: 0xf8e640)
// Original: sub_F8E640
// ----------------------------------------------------------------------------
int sub_F8E640(int a1, int a2, int a3, int a4)
{
  int result;
  uint8_t *v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __m128i v10;
  __m128i v11;
  __m128i *v12;
  __m128i v13;
  unsigned int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  int v23;

  jcopy_sample_rows(a3, 0, a4, 0, *(uint32_t *)(a1 + 216), *(uint32_t *)(a1 + 28));
  v16 = *(uint32_t *)(a1 + 28);
  v15 = *(uint32_t *)(a1 + 216);
  result = 8 * *(uint32_t *)(a2 + 28) - v16;
  v22 = result;
  if ( result > 0 && *(int *)(a1 + 216) > 0 )
  {
    v21 = 0;
    do
    {
      v23 = *(uint32_t *)(a4 + 4 * v21) + v16;
      v5 = (uint8_t *)v23;
      v6 = -v23 & 0xF;
      if ( v22 <= v6 )
        v6 = v22;
      v7 = *(uint8_t *)(v23 - 1);
      v8 = v22;
      if ( v6 == 0 )
        goto LABEL_10;
      v9 = 0;
      v19 = v22;
      do
      {
        ++v9;
        --v19;
        *v5++ = v7;
      }
      while ( v6 > v9 );
      v8 = v19;
      if ( v22 != v6 )
      {
LABEL_10:
        v17 = v22 - v6;
        v20 = (v22 - v6) >> 4;
        v18 = 16 * v20;
        if ( 16 * v20 == 0 )
          goto LABEL_18;
        v10 = _mm_cvtsi32_si128(v7);
        v11 = _mm_unpacklo_epi8(v10, v10);
        v12 = (__m128i *)(v23 + v6);
        v13 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v11, v11), 0);
        v14 = 0;
        do
        {
          ++v14;
          *v12++ = v13;
        }
        while ( v20 > v14 );
        v8 -= v18;
        v5 += v18;
        if ( v17 != v18 )
        {
LABEL_18:
          do
          {
            --v8;
            *v5++ = v7;
          }
          while ( v8 != 0 );
        }
      }
      ++v21;
      result = v15;
    }
    while ( v21 != v15 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F8E7B0  (binary VA: 0xf8e7b0)
// Original: sub_F8E7B0
// ----------------------------------------------------------------------------
int sub_F8E7B0(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int result;
  int v6;
  uint8_t *v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  __m128i v11;
  __m128i v12;
  __m128i *v13;
  __m128i v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  uint8_t *v20;
  __m128i *v21;
  unsigned int v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  uint8_t *v27;
  int v28;
  int i;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  unsigned int v45;
  unsigned int v46;
  int v47;
  int v48;
  unsigned int v49;
  uint8_t *v50;
  int v51;

  v30 = 8 * a2[7];
  v4 = a2[3];
  v51 = a1[53] / a2[2];
  v42 = a1[54];
  v34 = a1[7];
  v37 = v42 / v4;
  v33 = v42 / v4 * v51;
  result = v30 * v51 - v34;
  v46 = result;
  if ( result > 0 )
  {
    result = a1[54];
    v40 = 0;
    if ( v42 > 0 )
    {
      do
      {
        v6 = v30 * v51 - v34;
        v44 = *(uint32_t *)(a3 + 4 * v40) + v34;
        v7 = (uint8_t *)v44;
        v8 = *(uint8_t *)(v44 - 1);
        v9 = -v44 & 0xF;
        if ( v46 <= v9 )
          v9 = v30 * v51 - v34;
        if ( v9 == 0 )
          goto LABEL_38;
        v10 = 0;
        v48 = v30 * v51 - v34;
        do
        {
          ++v10;
          --v48;
          *v7++ = v8;
        }
        while ( v9 > v10 );
        v6 = v48;
        if ( v46 != v9 )
        {
LABEL_38:
          v31 = v46 - v9;
          v49 = (v46 - v9) >> 4;
          v38 = 16 * v49;
          if ( 16 * v49 == 0 )
            goto LABEL_39;
          v11 = _mm_cvtsi32_si128(v8);
          v12 = _mm_unpacklo_epi8(v11, v11);
          v13 = (__m128i *)(v44 + v9);
          v14 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v12, v12), 0);
          v15 = 0;
          do
          {
            ++v15;
            *v13++ = v14;
          }
          while ( v15 < v49 );
          v7 += v38;
          v6 -= v38;
          if ( v31 != v38 )
          {
LABEL_39:
            do
            {
              --v6;
              *v7++ = v8;
            }
            while ( v6 != 0 );
          }
        }
        ++v40;
        result = v42;
      }
      while ( v40 != v42 );
      v4 = a2[3];
    }
  }
  if ( v4 > 0 )
  {
    v36 = a3;
    for ( i = 0; i < v4; ++i )
    {
      result = a4;
      v39 = 0;
      v35 = 0;
      v32 = *(uint32_t *)(a4 + 4 * i);
      if ( v30 != 0 )
      {
        do
        {
          v16 = 0;
          v47 = 0;
          if ( v37 > 0 )
          {
            do
            {
              v17 = *(uint32_t *)(v36 + 4 * v47);
              if ( v51 > 0 )
              {
                v50 = (uint8_t *)(v39 + v17);
                v18 = -(v39 + v17) & 0xF;
                if ( v51 <= v18 )
                  v18 = v51;
                v19 = 0;
                v20 = v50;
                if ( v18 == 0 )
                  goto LABEL_26;
                do
                {
                  ++v19;
                  v16 += *v20++;
                }
                while ( v18 > v19 );
                if ( v51 != v18 )
                {
LABEL_26:
                  v41 = v51 - v18;
                  v45 = (v51 - v18) >> 4;
                  v43 = 16 * v45;
                  if ( 16 * v45 == 0 )
                    goto LABEL_30;
                  v21 = (__m128i *)&v50[v18];
                  v22 = 0;
g4_m128_raw(v23) = 0;
                  do
                  {
                    ++v22;
                    v24 = _mm_unpackhi_epi8(*v21, g4_m128_from<__m128i>(0LL));
                    v25 = _mm_unpacklo_epi8(*v21++, g4_m128_from<__m128i>(0LL));
                    v23 = _mm_add_epi32(
                            _mm_add_epi32(
                              _mm_add_epi32(
                                _mm_add_epi32(v23, _mm_unpacklo_epi16(v25, g4_m128_from<__m128i>(0LL))),
                                _mm_unpackhi_epi16(v25, g4_m128_from<__m128i>(0LL))),
                              _mm_unpacklo_epi16(v24, g4_m128_from<__m128i>(0LL))),
                            _mm_unpackhi_epi16(v24, g4_m128_from<__m128i>(0LL)));
                  }
                  while ( v22 < v45 );
                  v19 += v43;
                  v26 = _mm_add_epi32(v23, _mm_srli_si128(v23, 8));
                  v20 += v43;
                  v16 += _mm_cvtsi128_si32(_mm_add_epi32(v26, _mm_srli_si128(v26, 4)));
                  if ( v41 != v43 )
                  {
LABEL_30:
                    v27 = &v20[-v19];
                    do
                    {
                      v28 = v27[v19++];
                      v16 += v28;
                    }
                    while ( v51 > (int)v19 );
                  }
                }
              }
              ++v47;
            }
            while ( v47 != v37 );
          }
          *(uint8_t *)(v32 + v35) = (v33 / 2 + v16) / v33;
          result = v51;
          v39 += v51;
          ++v35;
        }
        while ( v35 != v30 );
        v4 = a2[3];
      }
      v36 += 4 * v37;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F8EB00  (binary VA: 0xf8eb00)
// Original: sub_F8EB00
// ----------------------------------------------------------------------------
int sub_F8EB00(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint8_t *v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __m128i v10;
  __m128i v11;
  __m128i *v12;
  __m128i v13;
  unsigned int v14;
  int result;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;

  v4 = *(uint32_t *)(a2 + 28);
  v20 = *(uint32_t *)(a1 + 28);
  v19 = *(uint32_t *)(a1 + 216);
  v29 = 8 * v4;
  v30 = 16 * v4 - v20;
  if ( v30 > 0 )
  {
    v25 = 0;
    if ( *(int *)(a1 + 216) > 0 )
    {
      do
      {
        v5 = v30;
        v27 = *(uint32_t *)(a3 + 4 * v25) + v20;
        v6 = (uint8_t *)v27;
        v7 = -v27 & 0xF;
        if ( v30 <= v7 )
          v7 = v30;
        v8 = *(uint8_t *)(*(uint32_t *)(a3 + 4 * v25) + v20 - 1);
        if ( v7 == 0 )
          goto LABEL_23;
        v9 = 0;
        v23 = v30;
        do
        {
          ++v9;
          --v23;
          *v6++ = v8;
        }
        while ( v7 > v9 );
        v5 = v23;
        if ( v30 != v7 )
        {
LABEL_23:
          v21 = v30 - v7;
          v24 = (v30 - v7) >> 4;
          v22 = 16 * v24;
          if ( 16 * v24 == 0 )
            goto LABEL_24;
          v10 = _mm_cvtsi32_si128(v8);
          v11 = _mm_unpacklo_epi8(v10, v10);
          v12 = (__m128i *)(v27 + v7);
          v13 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v11, v11), 0);
          v14 = 0;
          do
          {
            ++v14;
            *v12++ = v13;
          }
          while ( v14 < v24 );
          v5 -= v22;
          v6 += v22;
          if ( v21 != v22 )
          {
LABEL_24:
            do
            {
              --v5;
              *v6++ = v8;
            }
            while ( v5 != 0 );
          }
        }
        ++v25;
      }
      while ( v25 != v19 );
    }
  }
  v28 = 0;
  result = *(uint32_t *)(a2 + 12);
  if ( result > 0 )
  {
    do
    {
      v31 = *(uint32_t *)(a4 + 4 * v28);
      if ( v29 != 0 )
      {
        v16 = 0;
        v17 = 0;
        v26 = *(uint32_t *)(a3 + 4 * v28);
        do
        {
          v18 = v16 + *(uint8_t *)(v26 + 2 * v17) + *(uint8_t *)(v26 + 2 * v17 + 1);
          v16 ^= 1u;
          *(uint8_t *)(v31 + v17++) = v18 >> 1;
        }
        while ( v17 != v29 );
        result = *(uint32_t *)(a2 + 12);
      }
      ++v28;
    }
    while ( v28 < result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F8ECB0  (binary VA: 0xf8ecb0)
// Original: sub_F8ECB0
// ----------------------------------------------------------------------------
uint8_t * sub_F8ECB0(int a1, uint8_t *a2, int a3, int a4)
{
  int v4;
  int v5;
  uint8_t *v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __m128i v10;
  __m128i v11;
  __m128i *v12;
  __m128i v13;
  unsigned int v14;
  uint8_t *result;
  uint8_t *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  unsigned int v27;
  uint8_t *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;

  v4 = *((uint32_t *)a2 + 7);
  v23 = *(uint32_t *)(a1 + 28);
  v22 = *(uint32_t *)(a1 + 216);
  v31 = 8 * v4;
  v32 = 16 * v4 - v23;
  if ( v32 > 0 )
  {
    v29 = 0;
    if ( *(int *)(a1 + 216) > 0 )
    {
      do
      {
        v5 = v32;
        v34 = *(uint32_t *)(a3 + 4 * v29) + v23;
        v6 = (uint8_t *)v34;
        v7 = *(uint8_t *)(v34 - 1);
        v8 = -v34 & 0xF;
        if ( v32 <= v8 )
          v8 = v32;
        if ( v8 == 0 )
          goto LABEL_24;
        v9 = 0;
        v26 = v32;
        do
        {
          ++v9;
          --v26;
          *v6++ = v7;
        }
        while ( v8 > v9 );
        v5 = v26;
        if ( v32 != v8 )
        {
LABEL_24:
          v24 = v32 - v8;
          v27 = (v32 - v8) >> 4;
          v25 = 16 * v27;
          if ( 16 * v27 == 0 )
            goto LABEL_25;
          v10 = _mm_cvtsi32_si128(v7);
          v11 = _mm_unpacklo_epi8(v10, v10);
          v12 = (__m128i *)(v34 + v8);
          v13 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v11, v11), 0);
          v14 = 0;
          do
          {
            ++v14;
            *v12++ = v13;
          }
          while ( v14 < v27 );
          v5 -= v25;
          v6 += v25;
          if ( v24 != v25 )
          {
LABEL_25:
            do
            {
              --v5;
              *v6++ = v7;
            }
            while ( v5 != 0 );
          }
        }
        ++v29;
      }
      while ( v29 != v22 );
    }
  }
  result = a2;
  v30 = 0;
  if ( *((int *)a2 + 3) > 0 )
  {
    v35 = *((uint32_t *)a2 + 3);
    do
    {
      v16 = *(uint8_t **)(a3 + 8 * v30 + 4);
      result = *(uint8_t **)(a3 + 8 * v30);
      if ( v31 != 0 )
      {
        v33 = 1;
        v36 = 0;
        v28 = *(uint8_t **)(a4 + 4 * v30);
        do
        {
          v17 = result[1];
          ++v36;
          v18 = *result;
          result += 2;
          v19 = *v16 + v17 + v18;
          v20 = v16[1];
          v16 += 2;
          v21 = v33 + v19 + v20;
          v33 ^= 3u;
          *v28++ = v21 >> 2;
        }
        while ( v36 != v31 );
        v35 = *((uint32_t *)a2 + 3);
      }
      ++v30;
    }
    while ( v30 < v35 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F8EEA0  (binary VA: 0xf8eea0)
// Original: sub_F8EEA0
// ----------------------------------------------------------------------------
int sub_F8EEA0(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  uint8_t *v8;
  unsigned int i;
  int v10;
  __m128i v11;
  __m128i v12;
  __m128i *v13;
  __m128i v14;
  unsigned int v15;
  int v16;
  int v17;
  int result;
  int v19;
  uint8_t *v20;
  uint8_t *v21;
  uint8_t *v22;
  int v23;
  int v24;
  int v25;
  uint8_t *v26;
  uint8_t *v27;
  uint8_t *v28;
  uint8_t *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  bool v35;
  uint8_t *v36;
  int v37;
  uint8_t *v38;
  uint8_t *v39;
  uint8_t *v40;
  uint8_t *v41;
  uint8_t *v42;
  int v43;
  int v44;
  uint8_t *v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  unsigned int v56;
  uint8_t *v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  uint8_t *v66;
  int v67;

  v4 = *(uint32_t *)(a2 + 28);
  v5 = a1[54];
  v48 = a1[7];
  v43 = 8 * v4;
  v64 = 16 * v4 - v48;
  if ( v64 > 0 && v5 >= -1 )
  {
    v58 = 1;
    v46 = v5 + 3;
    while ( 1 )
    {
      v61 = *(uint32_t *)(a3 + 4 * v58 - 8) + v48;
      v6 = -v61 & 0xF;
      if ( v64 <= v6 )
        v6 = v64;
      v7 = *(uint8_t *)(v61 - 1);
      if ( v6 == 0 )
        break;
      v8 = (uint8_t *)(*(uint32_t *)(a3 + 4 * v58 - 8) + v48);
      v55 = v64;
      for ( i = 0; i < v6; ++i )
      {
        --v55;
        *v8++ = v7;
      }
      v10 = v55;
      if ( v64 != v6 )
        goto LABEL_10;
LABEL_15:
      if ( ++v58 == v46 )
        goto LABEL_16;
    }
    v8 = (uint8_t *)(*(uint32_t *)(a3 + 4 * v58 - 8) + v48);
    v10 = v64;
LABEL_10:
    v50 = v64 - v6;
    v56 = (v64 - v6) >> 4;
    v52 = 16 * v56;
    if ( 16 * v56 == 0 )
      goto LABEL_25;
    v11 = _mm_cvtsi32_si128(v7);
    v12 = _mm_unpacklo_epi8(v11, v11);
    v13 = (__m128i *)(v61 + v6);
    v14 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v12, v12), 0);
    v15 = 0;
    do
    {
      ++v15;
      *v13++ = v14;
    }
    while ( v15 < v56 );
    v10 -= v52;
    v8 += v52;
    if ( v50 != v52 )
    {
LABEL_25:
      do
      {
        --v10;
        *v8++ = v7;
      }
      while ( v10 != 0 );
    }
    goto LABEL_15;
  }
LABEL_16:
  v16 = a1[44];
  v17 = -80 * v16;
  result = 16 * v16;
  v51 = v17 + 0x4000;
  v49 = result;
  if ( *(int *)(a2 + 12) > 0 )
  {
    v47 = 0;
    v19 = 0;
    v37 = v43 - 2;
    v44 = 2 * (v43 - 2);
    do
    {
      v45 = *(uint8_t **)(a4 + 4 * v19);
      v20 = *(uint8_t **)(a3 + 8 * v47 + 4);
      v21 = *(uint8_t **)(a3 + 8 * v47);
      v22 = *(uint8_t **)(a3 + 8 * v47 - 4);
      v38 = *(uint8_t **)(a3 + 8 * v47 + 8);
      v62 = *v20;
      v65 = *v21;
      v23 = *v38;
      v59 = *v22;
      v53 = v23 + v59 + v22[1] + v38[1] + v65 + v21[2] + v62 + v20[2];
      v41 = v20 + 2;
      v24 = v23 + v59 + v22[2] + v38[2];
      v42 = v21 + 2;
      v40 = v22 + 2;
      v25 = v51 * (v65 + v21[1] + v62 + v20[1]);
      v66 = v21 + 2;
      v60 = v37;
      *v45 = (unsigned int)(v25 + v49 * (v24 + 2 * v53) + 0x8000) >> 16;
      v39 = v38 + 2;
      v26 = v39;
      v57 = v45 + 1;
      v36 = v41;
      v27 = v22 + 2;
      do
      {
        v54 = *(v36 - 1) + *(v66 - 1) + *v26 + v27[1] + *v27 + v26[1] + v66[2] + v36[2];
        v28 = v66;
        v66 += 2;
        v29 = v36;
        v36 += 2;
        v30 = *v29 + *v28 + v28[1] + v29[1];
        v31 = v27[2];
        v32 = *(v27 - 1);
        v27 += 2;
        v33 = *(v26 - 1) + v31 + v32;
        v34 = v26[2];
        v26 += 2;
        *v57 = (unsigned int)(v51 * v30 + v49 * (v33 + v34 + 2 * v54) + 0x8000) >> 16;
        v35 = v60-- == 1;
        ++v57;
      }
      while ( !v35 );
      v67 = v42[v44 + 1];
      v63 = v41[v44 + 1];
      result = (v51 * (v63 + v41[v44] + v67 + v42[v44])
              + v49
              * (v39[v44 + 1]
               + v39[v44 - 1]
               + v40[v44 + 1]
               + v40[v44 - 1]
               + 2 * (v63 + v67 + v39[v44 + 1] + v40[v44 + 1] + v40[v44] + v39[v44] + v42[v44 - 1] + v41[v44 - 1]))
              + 0x8000) >> 16;
      v45[v37 + 1] = result;
      v19 = ++v47;
    }
    while ( *(uint32_t *)(a2 + 12) > v47 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F90170  (binary VA: 0xf90170)
// Original: sub_F90170
// ----------------------------------------------------------------------------
uint32_t * sub_F90170(int a1)
{
  uint32_t *result;

  result = *(uint32_t **)(a1 + 400);
  *result = (uint32_t)(uintptr_t)(sub_F90630);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F90190  (binary VA: 0xf90190)
// Original: sub_F90190
// ----------------------------------------------------------------------------
int sub_F90190(int a1)
{
  int v1;
  int result;

  v1 = *(uint32_t *)(a1 + 400);
  *(uint32_t *)v1 = (uint32_t)(uintptr_t)(sub_F90630);
  *(uint8_t *)(v1 + 16) = 0;
  *(uint8_t *)(v1 + 17) = 0;
  *(uint8_t *)(v1 + 20) = 1;
  G4_VCALL<void>(a1, 16);
  result = (**(int (***)(int))(a1 + 404))(a1);
  *(uint32_t *)(a1 + 140) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F901F0  (binary VA: 0xf901f0)
// Original: sub_F901F0
// ----------------------------------------------------------------------------
uint32_t * sub_F901F0(int a1)
{
  int v1;
  int v2;
  signed int i;
  uint32_t *v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  __m128i v14;
  __m128i *v15;
  unsigned int v16;
  int v17;
  signed int v18;
  signed int j;
  int v20;
  uint32_t *result;
  unsigned int v22;
  unsigned int v23;
  int v24;
  int16_t *v25;
  uint16_t *v26;
  int16_t *v27;
  int v28;
  int16_t *v29;
  int16_t *v30;
  uint32_t *v31;
  unsigned int v32;
  int v33;
  int16_t v34;
  int v35;
  int v36;
  int v37;
  int v38;
  signed int v39;
  signed int v40;
  unsigned int v41;
  int v42;
  signed int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;

  v1 = *(uint32_t *)(a1 + 292);
  if ( v1 == 1 )
  {
    v31 = *(uint32_t **)(a1 + 296);
    *(uint32_t *)(a1 + 312) = v31[7];
    *(uint32_t *)(a1 + 316) = v31[8];
    v32 = v31[3];
    v31[16] = v31[9];
    v33 = v31[8] % v32;
    v31[13] = 1;
    v31[14] = 1;
    v31[15] = 1;
    v31[17] = 1;
    if ( v33 == 0 )
      v33 = v32;
    v31[18] = v33;
    *(uint32_t *)(a1 + 320) = 1;
    *(uint32_t *)(a1 + 324) = 0;
    v18 = *(uint32_t *)(a1 + 292);
    goto LABEL_27;
  }
  if ( (unsigned int)(v1 - 1) > 3 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 26;
    *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 292);
    *(uint32_t *)(*(uint32_t *)a1 + 28) = 4;
    (**(void (***)(int))a1)(a1);
  }
  *(uint32_t *)(a1 + 312) = jdiv_round_up(*(uint32_t *)(a1 + 28), 8 * *(uint32_t *)(a1 + 272));
  *(uint32_t *)(a1 + 316) = jdiv_round_up(*(uint32_t *)(a1 + 32), 8 * *(uint32_t *)(a1 + 276));
  v2 = *(uint32_t *)(a1 + 292);
  *(uint32_t *)(a1 + 320) = 0;
  if ( v2 > 0 )
  {
    for ( i = 0; i < v18; ++i )
    {
      v4 = *(uint32_t **)(a1 + 4 * i + 296);
      v5 = v4[2];
      v6 = v4[3];
      v7 = v4[9];
      v4[14] = v6;
      v4[16] = v5 * v7;
      v44 = v5 * v6;
      v4[15] = v5 * v6;
      v8 = v4[7] % v5;
      v4[13] = v5;
      if ( v8 != 0 )
        v5 = v8;
      v9 = v4[8] % v4[3];
      v4[17] = v5;
      if ( v9 == 0 )
        v9 = v4[3];
      v4[18] = v9;
      if ( (int)(*(uint32_t *)(a1 + 320) + v44) > 10 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 13;
        (**(void (***)(int))a1)(a1);
      }
      if ( (int)v44 > 0 )
      {
        v10 = v44 - 1;
        v41 = v44 - 1;
        v46 = *(uint32_t *)(a1 + 320);
        v43 = v46 + 81;
        v11 = v46;
        v12 = -((uint8_t)((a1 + 4 * (v46 + 81)) & 0xF) >> 2) & 3;
        if ( v12 > v44 )
          v12 = v44;
        if ( v12 == 0 )
          goto LABEL_48;
        v45 = v12;
        do
        {
          *(uint32_t *)(a1 + 4 * v11 + 324) = i;
          --v10;
          ++v11;
        }
        while ( v12 > v11 - v46 );
        if ( v44 != v12 )
        {
LABEL_48:
          v44 -= v12;
          v45 = v44 >> 2;
          v42 = 4 * (v44 >> 2);
          if ( v42 == 0 )
            goto LABEL_23;
          v13 = v12 + v43;
          v43 = i;
          v14 = _mm_shuffle_epi32(_mm_cvtsi32_si128(i), 0);
          v15 = (__m128i *)(a1 + 4 * v13);
          v16 = 0;
          do
          {
            ++v16;
            *v15++ = v14;
          }
          while ( v16 < v45 );
          v10 -= v42;
          v11 += v42;
          if ( v44 != v42 )
          {
LABEL_23:
            v45 = 0;
            v17 = 0;
            do
              *(uint32_t *)(a1 + 4 * v11 + 4 * v17++ + 324) = i;
            while ( (int)(v10 + 1 - v17) > 0 );
          }
        }
        *(uint32_t *)(a1 + 320) = v41 + v46 + 1;
      }
      v18 = *(uint32_t *)(a1 + 292);
    }
LABEL_27:
    for ( j = 0; j < v18; ++j )
    {
      v20 = *(uint32_t *)(a1 + 4 * j + 296);
      v46 = v20;
      if ( *(uint32_t *)(v20 + 76) == 0 )
      {
        v22 = *(uint32_t *)(v20 + 16);
        v23 = v22 + 36;
        if ( v22 > 3 || (v24 = a1, *(uint32_t *)(a1 + 4 * v23) == 0) )
        {
          *(uint32_t *)(*(uint32_t *)a1 + 20) = 52;
          *(uint32_t *)(*(uint32_t *)a1 + 24) = v22;
          v40 = j;
          (**(void (***)(int))a1)(a1);
          j = v40;
          v24 = a1;
        }
        v39 = j;
        v44 = (**(int (***)(int, int, int))(v24 + 4))(v24, 1, 130);
        v45 = 130;
        j = v39;
        v25 = *(int16_t **)(a1 + 4 * v23);
        v26 = (uint16_t *)v44;
        v27 = v25;
        if ( (v44 & 1) != 0 )
        {
          v27 = (int16_t *)((char *)v25 + 1);
          *(uint8_t *)v44 = *(uint8_t *)v25;
          v26 = (uint16_t *)(v44 + 1);
          v45 = 129;
        }
        if ( ((uint8_t)(uintptr_t)(v26) & 2) != 0 )
        {
          v34 = *v27++;
          *v26++ = v34;
          v45 -= 2;
        }
        v28 = 0;
        std::memcpy(v26, v27, 4 * (v45 >> 2));
        v30 = &v27[2 * (v45 >> 2)];
        v29 = (int16_t *)(&v26[2 * (v45 >> 2)]);
        if ( (v45 & 2) != 0 )
        {
          *v29 = *v30;
          v28 = 1;
        }
        if ( (v45 & 1) != 0 )
          LOBYTE(v29[v28]) = v30[v28];
        *(uint32_t *)(v46 + 76) = v44;
        v18 = *(uint32_t *)(a1 + 292);
      }
    }
  }
  (**(void (***)(int, int, int, int, int, signed int, unsigned int, int, signed int, unsigned int, unsigned int, int))(a1 + 408))(
    a1,
    v35,
    v36,
    v37,
    v38,
    v39,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  (**(void (***)(int))(a1 + 392))(a1);
  result = *(uint32_t **)(a1 + 400);
  *result = *(uint32_t *)(*(uint32_t *)(a1 + 392) + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F90630  (binary VA: 0xf90630)
// Original: sub_F90630
// ----------------------------------------------------------------------------
int sub_F90630(int a1)
{
  int v1;
  int v3;
  uint8_t *v4;
  bool v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int i;
  uint8_t *v16;
  uint8_t *v17;
  uint8_t *v18;
  uint8_t *v19;
  int v20;
  uint8_t *v21;

  v1 = 2;
  if ( *(uint8_t *)(*(uint32_t *)(a1 + 400) + 17) == 0 )
  {
    v16 = *(uint8_t **)(a1 + 400);
    v3 = (*(int (**)(int))(*(uint32_t *)(a1 + 404) + 4))(a1);
    v1 = v3;
    v4 = v16;
    if ( v3 == 1 )
    {
      if ( v16[20] != 0 )
      {
        if ( *(int *)(a1 + 32) > 65500 || *(int *)(a1 + 28) > 65500 )
        {
          *(uint32_t *)(*(uint32_t *)a1 + 20) = 41;
          *(uint32_t *)(*(uint32_t *)a1 + 24) = 65500;
          (**(void (***)(int))a1)(a1);
          v4 = v16;
        }
        if ( *(uint32_t *)(a1 + 192) != 8 )
        {
          *(uint32_t *)(*(uint32_t *)a1 + 20) = 15;
          *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 192);
          v17 = v4;
          (**(void (***)(int))a1)(a1);
          v4 = v17;
        }
        v20 = *(uint32_t *)(a1 + 36);
        if ( v20 > 10 )
        {
          *(uint32_t *)(*(uint32_t *)a1 + 20) = 26;
          *(uint32_t *)(*(uint32_t *)a1 + 24) = *(uint32_t *)(a1 + 36);
          *(uint32_t *)(*(uint32_t *)a1 + 28) = 10;
          v19 = v4;
          (**(void (***)(int))a1)(a1);
          v4 = v19;
          v20 = *(uint32_t *)(a1 + 36);
        }
        *(uint32_t *)(a1 + 272) = 1;
        *(uint32_t *)(a1 + 276) = 1;
        v6 = *(uint32_t *)(a1 + 196);
        if ( v20 <= 0 )
        {
          *(uint32_t *)(a1 + 280) = 8;
          v11 = 1;
        }
        else
        {
          v21 = v4;
          v7 = 1;
          v8 = 1;
          for ( i = 0; i < v20; ++i )
          {
            v9 = *(uint32_t *)(v6 + 8);
            if ( (unsigned int)(v9 - 1) > 3 || (v10 = *(uint32_t *)(v6 + 12)) <= 0 || v10 > 4 )
            {
              *(uint32_t *)(*(uint32_t *)a1 + 20) = 18;
              (**(void (***)(int))a1)(a1);
              v9 = *(uint32_t *)(v6 + 8);
              v8 = *(uint32_t *)(a1 + 272);
              v7 = *(uint32_t *)(a1 + 276);
              v20 = *(uint32_t *)(a1 + 36);
            }
            if ( v8 < v9 )
              v8 = v9;
            *(uint32_t *)(a1 + 272) = v8;
            if ( v7 < *(uint32_t *)(v6 + 12) )
              v7 = *(uint32_t *)(v6 + 12);
            v6 += 84;
            *(uint32_t *)(a1 + 276) = v7;
          }
          v11 = v7;
          v1 = 1;
          v4 = v21;
          v12 = *(uint32_t *)(a1 + 196);
          *(uint32_t *)(a1 + 280) = 8;
          if ( v20 > 0 )
          {
            v13 = 0;
            do
            {
              *(uint32_t *)(v12 + 36) = 8;
              ++v13;
              *(uint32_t *)(v12 + 28) = jdiv_round_up(
                                        *(uint32_t *)(v12 + 8) * *(uint32_t *)(a1 + 28),
                                        8 * *(uint32_t *)(a1 + 272));
              *(uint32_t *)(v12 + 32) = jdiv_round_up(
                                        *(uint32_t *)(v12 + 12) * *(uint32_t *)(a1 + 32),
                                        8 * *(uint32_t *)(a1 + 276));
              *(uint32_t *)(v12 + 40) = jdiv_round_up(*(uint32_t *)(v12 + 8) * *(uint32_t *)(a1 + 28), *(uint32_t *)(a1 + 272));
              *(uint32_t *)(v12 + 44) = jdiv_round_up(*(uint32_t *)(v12 + 12) * *(uint32_t *)(a1 + 32), *(uint32_t *)(a1 + 276));
              *(uint8_t *)(v12 + 48) = 1;
              *(uint32_t *)(v12 + 76) = 0;
              v12 += 84;
            }
            while ( v13 < *(uint32_t *)(a1 + 36) );
            v1 = 1;
            v4 = v21;
            v11 = *(uint32_t *)(a1 + 276);
          }
        }
        v18 = v4;
        *(uint32_t *)(a1 + 284) = jdiv_round_up(*(uint32_t *)(a1 + 32), 8 * v11);
        *(uint8_t *)(*(uint32_t *)(a1 + 400) + 16) = *(uint32_t *)(a1 + 292) < *(uint32_t *)(a1 + 36)
                                              || *(uint8_t *)(a1 + 200) != 0;
        v18[20] = 0;
      }
      else
      {
        if ( v16[16] == 0 )
        {
          *(uint32_t *)(*(uint32_t *)a1 + 20) = 35;
          (**(void (***)(int))a1)(a1);
        }
        sub_F901F0(a1);
      }
    }
    else if ( v3 == 2 )
    {
      v5 = v16[20] == 0;
      v16[17] = 1;
      if ( v5 )
      {
        v14 = *(uint32_t *)(a1 + 124);
        if ( *(uint32_t *)(a1 + 132) > v14 )
          *(uint32_t *)(a1 + 132) = v14;
      }
      else if ( *(uint8_t *)(*(uint32_t *)(a1 + 404) + 13) != 0 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 59;
        (**(void (***)(int))a1)(a1);
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_F90A50  (binary VA: 0xf90a50)
// Original: sub_F90A50
// ----------------------------------------------------------------------------
int sub_F90A50(int a1, char a2, char a3)
{
  int v4;
  int v5;
  uint8_t *v6;
  int v7;
  uint8_t v8; // di
  uint8_t *v9;
  int v10;
  uint8_t *v11;
  int v12;
  uint8_t *v13;
  int v14;
  int v15;
  uint8_t *v16;
  int v17;
  uint8_t *v18;
  int v19;
  uint8_t *v20;
  uint8_t *v21;
  uint8_t *v22;
  uint8_t *v23;
  uint8_t *v24;
  int v25;
  uint32_t *v26;
  uint8_t *v27;
  int v28;
  uint32_t *v29;
  uint8_t *v30;
  int v31;
  uint8_t *v32;
  uint32_t *v33;
  uint8_t *v34;
  int v35;
  uint8_t *v36;
  uint8_t *v38;
  uint8_t *v39;
  uint8_t *v40;
  uint8_t *v41;
  uint8_t *v42;
  uint8_t *v43;
  uint8_t v44;
  uint8_t *v45;
  uint8_t **v46;

  v4 = *(uint32_t *)(a1 + 24);
  v46 = (uint8_t **)v4;
  v5 = *(uint32_t *)(v4 + 4);
  v6 = *(uint8_t **)v4;
  *(uint8_t *)(a1 + 200) = a2;
  *(uint8_t *)(a1 + 201) = a3;
  if ( v5 != 0 )
  {
    v7 = v5 - 1;
    v8 = *v6;
    if ( v7 != 0 )
      goto LABEL_3;
LABEL_45:
    if ( ((uint8_t (*)(int))v46[3])(a1) == 0 )
      return 0;
    v9 = *v46;
    v10 = (int)(uintptr_t)(v46[1] - 1);
    v44 = **v46;
    if ( v46[1] != (uint8_t *)&dword_0 + 1 )
      goto LABEL_4;
    goto LABEL_47;
  }
  if ( (*(uint8_t (**)(int))(v4 + 12))(a1) == 0 )
    return 0;
  v6 = *v46;
  v7 = (int)(uintptr_t)(v46[1] - 1);
  v8 = **v46;
  if ( v46[1] == (uint8_t *)&dword_0 + 1 )
    goto LABEL_45;
LABEL_3:
  v9 = v6 + 1;
  v10 = v7 - 1;
  v44 = v6[1];
  if ( v10 != 0 )
  {
LABEL_4:
    v11 = v9 + 1;
    goto LABEL_5;
  }
LABEL_47:
  if ( ((uint8_t (*)(int))v46[3])(a1) == 0 )
    return 0;
  v11 = *v46;
  v10 = (int)(uintptr_t)(v46[1]);
LABEL_5:
  v12 = v10 - 1;
  *(uint32_t *)(a1 + 192) = *v11;
  if ( v12 != 0 )
  {
    v13 = v11 + 1;
    v14 = *v13 << 8;
    v15 = v12 - 1;
    *(uint32_t *)(a1 + 32) = v14;
    if ( v15 != 0 )
      goto LABEL_7;
LABEL_34:
    if ( ((uint8_t (*)(int))v46[3])(a1) == 0 )
      return 0;
    v16 = *v46;
    v17 = (int)(uintptr_t)(v46[1] - 1);
    *(uint32_t *)(a1 + 32) += **v46;
    if ( v17 != 0 )
      goto LABEL_8;
    goto LABEL_36;
  }
  if ( ((uint8_t (*)(int))v46[3])(a1) == 0 )
    return 0;
  v13 = *v46;
  v14 = **v46 << 8;
  v15 = (int)(uintptr_t)(v46[1] - 1);
  *(uint32_t *)(a1 + 32) = v14;
  if ( v15 == 0 )
    goto LABEL_34;
LABEL_7:
  v16 = v13 + 1;
  v17 = v15 - 1;
  *(uint32_t *)(a1 + 32) = *v16 + v14;
  if ( v17 != 0 )
  {
LABEL_8:
    v18 = v16 + 1;
    goto LABEL_9;
  }
LABEL_36:
  if ( ((uint8_t (*)(int))v46[3])(a1) == 0 )
    return 0;
  v18 = *v46;
  v17 = (int)(uintptr_t)(v46[1]);
LABEL_9:
  v19 = *v18 << 8;
  v20 = (uint8_t *)(v17 - 1);
  *(uint32_t *)(a1 + 28) = v19;
  if ( v20 != nullptr )
  {
    v21 = v18 + 1;
  }
  else
  {
    if ( ((uint8_t (*)(int))v46[3])(a1) == 0 )
      return 0;
    v19 = *(uint32_t *)(a1 + 28);
    v21 = *v46;
    v20 = v46[1];
  }
  v22 = v20 - 1;
  *(uint32_t *)(a1 + 28) = *v21 + v19;
  if ( v22 == nullptr )
  {
    if ( ((uint8_t (*)(int))v46[3])(a1) != 0 )
    {
      v23 = *v46;
      v22 = v46[1];
      goto LABEL_13;
    }
    return 0;
  }
  v23 = v21 + 1;
LABEL_13:
  *(uint32_t *)(a1 + 36) = *v23;
  v24 = v22 - 1;
  v25 = (v8 << 8) + v44 - 8;
  v26 = *(uint32_t **)a1;
  v26[6] = *(uint32_t *)(a1 + 380);
  v26[7] = *(uint32_t *)(a1 + 28);
  v26[8] = *(uint32_t *)(a1 + 32);
  v26[9] = *(uint32_t *)(a1 + 36);
  *(uint32_t *)(*(uint32_t *)a1 + 20) = 100;
  v39 = v23 + 1;
  G4_VCALL<void>(a1, 4, 1);
  v27 = v39;
  if ( *(uint8_t *)(*(uint32_t *)(a1 + 404) + 13) != 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 58;
    (**(void (***)(int))a1)(a1);
    v27 = v39;
  }
  if ( *(uint32_t *)(a1 + 32) == 0 || *(uint32_t *)(a1 + 28) == 0 || (v28 = *(uint32_t *)(a1 + 36)) <= 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 32;
    v40 = v27;
    (**(void (***)(int))a1)(a1);
    v28 = *(uint32_t *)(a1 + 36);
    v27 = v40;
  }
  if ( 3 * v28 != v25 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 11;
    v41 = v27;
    (**(void (***)(int))a1)(a1);
    v28 = *(uint32_t *)(a1 + 36);
    v27 = v41;
  }
  v29 = *(uint32_t **)(a1 + 196);
  if ( v29 == nullptr )
  {
    v43 = v27;
    v29 = (uint32_t *)(**(int (***)(int, int, int))(a1 + 4))(a1, 1, 84 * v28);
    *(uint32_t *)(a1 + 196) = (uint32_t)(uintptr_t)(v29);
    v27 = v43;
    v28 = *(uint32_t *)(a1 + 36);
  }
  if ( v28 > 0 )
  {
    v30 = v24;
    v38 = v27;
    v31 = 0;
    do
    {
      v29[1] = v31;
      if ( v30 == nullptr )
      {
        if ( ((uint8_t (*)(int))v46[3])(a1) == 0 )
          return 0;
        v30 = v46[1];
        v38 = *v46;
      }
      v45 = v30 - 1;
      *v29 = *v38;
      if ( v30 == (uint8_t *)&dword_0 + 1 )
      {
        if ( ((uint8_t (*)(int))v46[3])(a1) == 0 )
          return 0;
        v34 = *v46;
        v45 = v46[1];
      }
      else
      {
        v34 = v38 + 1;
      }
      v35 = *v34;
      v29[3] = v35 & 0xF;
      v29[2] = v35 >> 4;
      v36 = v45 - 1;
      if ( v45 == (uint8_t *)&dword_0 + 1 )
      {
        if ( ((uint8_t (*)(int))v46[3])(a1) == 0 )
          return 0;
        v32 = *v46;
        v36 = v46[1];
      }
      else
      {
        v32 = v34 + 1;
      }
      v29[4] = *v32;
      v33 = *(uint32_t **)a1;
      v38 = v32 + 1;
      ++v31;
      v33[6] = *v29;
      v33[7] = v29[2];
      v33[8] = v29[3];
      v33[9] = v29[4];
      v29 += 21;
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 101;
      v42 = v36 - 1;
      G4_VCALL<void>(a1, 4, 1);
      v30 = v42;
    }
    while ( *(uint32_t *)(a1 + 36) > v31 );
    v24 = v42;
    v27 = v38;
  }
  *(uint8_t *)(*(uint32_t *)(a1 + 404) + 13) = 1;
  *v46 = v27;
  v46[1] = v24;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_F90ED0  (binary VA: 0xf90ed0)
// Original: sub_F90ED0
// ----------------------------------------------------------------------------
int sub_F90ED0(int result, uint8_t *a2, unsigned int a3, int a4)
{
  int v4;
  char v5;
  char v6;
  uint32_t *v7;
  uint8_t v8;
  uint8_t *v9;
  uint8_t *v10;
  int v11;
  int v12;
  uint8_t v13;

  v4 = a3 + a4;
  if ( a3 <= 0xD )
  {
    if ( a3 > 5 && *a2 == 74 && a2[1] == 70 )
    {
LABEL_9:
      if ( a2[2] == 88 && a2[3] == 88 && a2[4] == 0 )
      {
        v5 = a2[5];
        switch ( v5 )
        {
          case 17:
            *(uint32_t *)(*(uint32_t *)result + 20) = 109;
            break;
          case 19:
            *(uint32_t *)(*(uint32_t *)result + 20) = 110;
            break;
          case 16:
            *(uint32_t *)(*(uint32_t *)result + 20) = 108;
            break;
          default:
            *(uint32_t *)(*(uint32_t *)result + 20) = 89;
            *(uint32_t *)(*(uint32_t *)result + 24) = (uint8_t)a2[5];
            *(uint32_t *)(*(uint32_t *)result + 28) = v4;
            return G4_VCALL<int>(result, 4, 1);
        }
        goto LABEL_4;
      }
    }
LABEL_3:
    *(uint32_t *)(*(uint32_t *)result + 20) = 77;
LABEL_4:
    *(uint32_t *)(*(uint32_t *)result + 24) = v4;
    return G4_VCALL<int>(result, 4, 1);
  }
  if ( *a2 != 74 || a2[1] != 70 )
    goto LABEL_3;
  if ( a2[2] != 73 || a2[3] != 70 || a2[4] != 0 )
    goto LABEL_9;
  *(uint8_t *)(result + 256) = 1;
  v6 = a2[5];
  *(uint8_t *)(result + 257) = v6;
  *(uint8_t *)(result + 258) = a2[6];
  *(uint8_t *)(result + 259) = a2[7];
  *(uint16_t *)(result + 260) = (uint8_t)a2[9] + ((uint8_t)a2[8] << 8);
  *(uint16_t *)(result + 262) = (uint8_t)a2[11] + ((uint8_t)a2[10] << 8);
  if ( v6 != 1 )
  {
    *(uint32_t *)(*(uint32_t *)result + 20) = 119;
    *(uint32_t *)(*(uint32_t *)result + 24) = *(uint8_t *)(result + 257);
    *(uint32_t *)(*(uint32_t *)result + 28) = *(uint8_t *)(result + 258);
    v11 = result;
    v9 = a2;
    G4_VCALL<void>(result, 4, -1);
    a2 = v9;
    result = v11;
  }
  v7 = *(uint32_t **)result;
  v7[6] = *(uint8_t *)(result + 257);
  v7[7] = *(uint8_t *)(result + 258);
  v7[8] = *(uint16_t *)(result + 260);
  v7[9] = *(uint16_t *)(result + 262);
  v7[10] = *(uint8_t *)(result + 259);
  *(uint32_t *)(*(uint32_t *)result + 20) = 87;
  v12 = result;
  v10 = a2;
  G4_VCALL<void>(result, 4, 1);
  v8 = 0;
  v13 = 0;
  result = v12;
  if ( *((uint16_t *)v10 + 6) != 0 )
  {
    *(uint32_t *)(*(uint32_t *)v12 + 20) = 90;
    *(uint32_t *)(*(uint32_t *)v12 + 24) = (uint8_t)v10[12];
    *(uint32_t *)(*(uint32_t *)v12 + 28) = (uint8_t)v10[13];
    G4_VCALL<void>(v12, 4, 1);
    result = v12;
    v13 = v10[12];
    v8 = v10[13];
  }
  v4 -= 14;
  if ( 3 * v8 * v13 != v4 )
  {
    *(uint32_t *)(*(uint32_t *)result + 20) = 88;
    goto LABEL_4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F91160  (binary VA: 0xf91160)
// Original: sub_F91160
// ----------------------------------------------------------------------------
int sub_F91160(uint32_t *a1)
{
  uint8_t **v1;
  uint8_t *v2;
  uint8_t *v3;
  uint8_t v4; // bp
  uint8_t *v5;
  int v6;
  int v7;
  char v9;
  char v10;
  uint8_t *v11;
  uint8_t *v12;

  v1 = (uint8_t **)a1[6];
  v2 = v1[1];
  v3 = *v1;
  if ( v2 == nullptr )
  {
    v10 = ((int (*)(uint32_t *))v1[3])(a1);
    v7 = 0;
    if ( v10 == 0 )
      return v7;
    v3 = *v1;
    v2 = v1[1];
  }
  v4 = *v3;
  v11 = v2 - 1;
  if ( v2 == (uint8_t *)&dword_0 + 1 )
  {
    v9 = ((int (*)(uint32_t *))v1[3])(a1);
    v7 = 0;
    if ( v9 == 0 )
      return v7;
    v5 = *v1;
    v11 = v1[1];
  }
  else
  {
    v5 = v3 + 1;
  }
  v6 = (v4 << 8) + *v5 - 2;
  *(uint32_t *)(*a1 + 20) = 91;
  *(uint32_t *)(*a1 + 24) = a1[95];
  *(uint32_t *)(*a1 + 28) = v6;
  v12 = v5;
  G4_VCALL<void>(a1, 4, 1);
  v1[1] = v11 - 1;
  *v1 = v12 + 1;
  v7 = 1;
  if ( v6 > 0 )
  {
    (*(void (**)(uint32_t *, int))(a1[6] + 16))(a1, v6);
    return 1;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_F91260  (binary VA: 0xf91260)
// Original: sub_F91260
// ----------------------------------------------------------------------------
int sub_F91260(uint32_t *a1)
{
  int result;

  result = a1[101];
  a1[49] = 0;
  a1[31] = 0;
  a1[95] = 0;
  *(uint8_t *)(result + 12) = 0;
  *(uint8_t *)(result + 13) = 0;
  *(uint32_t *)(result + 20) = 0;
  *(uint32_t *)(result + 160) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F912A0  (binary VA: 0xf912a0)
// Original: sub_F912A0
// ----------------------------------------------------------------------------
int sub_F912A0(uint32_t *a1)
{
  uint8_t *v1;
  uint8_t *v2;
  int v3;
  uint8_t v4;
  uint8_t *v5;
  int v6;
  int v7;
  int v8;
  uint8_t *v9;
  int v10;
  int v11;
  uint8_t *v12;
  uint8_t *v13;
  uint8_t v14;
  uint32_t *v15;
  uint32_t *v16;
  int i;
  int *v18;
  int v19;
  int v20;
  char *v21;
  uint16_t *v22;
  int v23;
  uint16_t *v24;
  char *v25;
  int result;
  char v27;
  char v28;
  int16_t v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint8_t _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t **_g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef uint8_t _g4_t_v46;
  typedef char _g4_t_v47;
  typedef char _g4_t_v48;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v30)) > _g4_s0 ? (12u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v31)) > _g4_s1 ? (12u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v32)) > _g4_s2 ? (12u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v33)) > _g4_s3 ? (12u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v34)) > _g4_s4 ? (12u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v35)) > _g4_s5 ? (12u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v37)) > _g4_s6 ? (20u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v38)) > _g4_s7 ? (24u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v39)) > _g4_s8 ? (24u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v40)) > _g4_s9 ? (28u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v41)) > _g4_s10 ? (28u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (47u + sizeof(_g4_t_v42)) > _g4_s11 ? (47u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (51u + sizeof(_g4_t_v43)) > _g4_s12 ? (51u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (55u + sizeof(_g4_t_v44)) > _g4_s13 ? (55u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (59u + sizeof(_g4_t_v45)) > _g4_s14 ? (59u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (63u + sizeof(_g4_t_v46)) > _g4_s15 ? (63u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v47)) > _g4_s16 ? (64u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (65u + sizeof(_g4_t_v48)) > _g4_s17 ? (65u + sizeof(_g4_t_v48)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 47u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 51u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 55u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 59u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 63u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 65u);

  v37 = (uint8_t **)a1[6];
  v1 = *v37;
  v2 = v37[1];
  if ( v2 != nullptr )
  {
    v3 = (int)(uintptr_t)(v2 - 1);
    v4 = *v1;
    if ( v3 != 0 )
    {
LABEL_3:
      v5 = v1 + 1;
      goto LABEL_4;
    }
  }
  else
  {
    v27 = ((int (*)(uint32_t *))v37[3])(a1);
    result = 0;
    if ( v27 == 0 )
      return result;
    v1 = *v37;
    v3 = (int)(uintptr_t)(v37[1] - 1);
    v4 = **v37;
    if ( v37[1] != (uint8_t *)&dword_0 + 1 )
      goto LABEL_3;
  }
  v33 = v4;
  v28 = ((int (*)(uint32_t *))v37[3])(a1);
  result = 0;
  v4 = v33;
  if ( v28 == 0 )
    return result;
  v5 = *v37;
  v3 = (int)(uintptr_t)(v37[1]);
LABEL_4:
  v6 = v3 - 1;
  v7 = v4 << 8;
  v8 = *v5;
  v9 = v5 + 1;
  v40 = v7 + v8 - 2;
  while ( v40 > 16 )
  {
    if ( v6 == 0 )
    {
      if ( ((uint8_t (*)(uint32_t *))v37[3])(a1) == 0 )
        return 0;
      v9 = *v37;
      v6 = (int)(uintptr_t)(v37[1]);
    }
    v38 = *v9;
    *(uint32_t *)(*a1 + 20) = 80;
    *(uint32_t *)(*a1 + 24) = v38;
    v10 = 1;
    v30 = v6 - 1;
    v11 = 0;
    G4_VCALL<void>(a1, 4, 1);
    v12 = v9 + 1;
    LOBYTE(v42) = 0;
    v13 = (uint8_t *)v30;
    do
    {
      if ( v13 == nullptr )
      {
        if ( ((uint8_t (*)(uint32_t *))v37[3])(a1) == 0 )
          return 0;
        v12 = *v37;
        v13 = v37[1];
      }
      v14 = *v12;
      --v13;
      *((uint8_t *)&v42 + v10++) = *v12++;
      v11 += v14;
    }
    while ( v10 != 17 );
    v9 = v12;
    v41 = v40 - 17;
    v15 = (uint32_t *)*a1;
    v15[6] = BYTE1(v42);
    v15[7] = BYTE2(v42);
    v15[8] = HIBYTE(v42);
    v15[9] = (uint8_t)v43;
    v15[10] = BYTE1(v43);
    v15[11] = BYTE2(v43);
    v15[12] = HIBYTE(v43);
    v15[13] = (uint8_t)v44;
    *(uint32_t *)(*a1 + 20) = 86;
    v31 = (int)(uintptr_t)(v13);
    G4_VCALL<void>(a1, 4, 2);
    v16 = (uint32_t *)*a1;
    v16[6] = BYTE1(v44);
    v16[7] = BYTE2(v44);
    v16[8] = HIBYTE(v44);
    v16[9] = (uint8_t)v45;
    v16[10] = BYTE1(v45);
    v16[11] = BYTE2(v45);
    v16[12] = HIBYTE(v45);
    v16[13] = v46;
    *(uint32_t *)(*a1 + 20) = 86;
    G4_VCALL<void>(a1, 4, 2);
    v6 = v31;
    if ( v41 < v11 || v11 > 256 )
    {
      *(uint32_t *)(*a1 + 20) = 8;
      G4_VCALL<void>(a1, 0);
      v6 = v31;
    }
    for ( i = 0; i != v11; ++v9 )
    {
      if ( v6 == 0 )
      {
        if ( ((uint8_t (*)(uint32_t *))v37[3])(a1) == 0 )
          return 0;
        v9 = *v37;
        v6 = (int)(uintptr_t)(v37[1]);
      }
      --v6;
      *(&v47 + i++) = *v9;
    }
    v40 = v41 - v11;
    v18 = (int *)(&a1[v38 + 40]);
    if ( (v38 & 0x10) != 0 )
    {
      v38 -= 16;
      v18 = (int *)(&a1[v38 + 44]);
    }
    if ( v38 > 3 )
    {
      *(uint32_t *)(*a1 + 20) = 30;
      *(uint32_t *)(*a1 + 24) = v38;
      v32 = v6;
      G4_VCALL<void>(a1, 0);
      v6 = v32;
    }
    v19 = *v18;
    if ( *v18 == 0 )
    {
      v34 = v6;
      v19 = jpeg_alloc_huff_table((int)(uintptr_t)(a1));
      *v18 = v19;
      v6 = v34;
    }
    v39 = 256;
    *(uint32_t *)v19 = v42;
    *(uint32_t *)(v19 + 4) = v43;
    *(uint32_t *)(v19 + 8) = v44;
    *(uint32_t *)(v19 + 12) = v45;
    *(uint8_t *)(v19 + 16) = v46;
    v20 = *v18;
    v21 = &v47;
    v22 = (uint16_t *)(v20 + 17);
    if ( ((v20 + 17) & 1) != 0 )
    {
      v22 = (uint16_t *)(v20 + 18);
      *(uint8_t *)(v20 + 17) = v47;
      v21 = &v48;
      v39 = 255;
    }
    if ( ((uint8_t)(uintptr_t)(v22) & 2) != 0 )
    {
      v29 = *(uint16_t *)v21;
      v21 += 2;
      *v22++ = v29;
      v39 -= 2;
    }
    v23 = 0;
    std::memcpy(v22, v21, 4 * (v39 >> 2));
    v25 = &v21[4 * (v39 >> 2)];
    v24 = &v22[2 * (v39 >> 2)];
    if ( (v39 & 2) != 0 )
    {
      *v24 = *(uint16_t *)v25;
      v23 = 1;
    }
    if ( (v39 & 1) != 0 )
      LOBYTE(v24[v23]) = v25[v23 * 2];
  }
  if ( v40 != 0 )
  {
    *(uint32_t *)(*a1 + 20) = 11;
    v35 = v6;
    G4_VCALL<void>(a1, 0);
    v6 = v35;
  }
  *v37 = v9;
  v37[1] = (uint8_t *)v6;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_F91710  (binary VA: 0xf91710)
// Original: sub_F91710
// ----------------------------------------------------------------------------
int sub_F91710(uint32_t *a1)
{
  uint8_t **v1;
  uint8_t *v2;
  uint8_t *v3;
  int v4;
  uint8_t v5;
  uint8_t *v6;
  int v7;
  int v8;
  int v9;
  uint8_t *v10;
  int v11;
  int v12;
  uint8_t **v13;
  uint8_t *v14;
  unsigned int v15;
  int v16;
  uint8_t **v17;
  int v18;
  char v20;
  char v21;
  typedef uint8_t **_g4_t_v22;
  typedef uint8_t **_g4_t_v23;
  typedef uint8_t **_g4_t_v24;
  typedef uint8_t **_g4_t_v25;
  typedef uint8_t **_g4_t_v26;
  typedef uint8_t **_g4_t_v27;
  typedef uint8_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef uint8_t _g4_t_v32[24];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v25)) > _g4_s3 ? (12u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v26)) > _g4_s4 ? (12u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v27)) > _g4_s5 ? (12u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v28)) > _g4_s6 ? (16u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v29)) > _g4_s7 ? (20u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v30)) > _g4_s8 ? (24u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v31)) > _g4_s9 ? (28u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v32)) > _g4_s10 ? (32u + sizeof(_g4_t_v32)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);

  v1 = (uint8_t **)a1[6];
  v2 = v1[1];
  v3 = *v1;
  if ( v2 != nullptr )
  {
    v4 = (int)(uintptr_t)(v2 - 1);
    v5 = *v3;
    if ( v4 != 0 )
    {
LABEL_3:
      v6 = v3 + 1;
      goto LABEL_4;
    }
  }
  else
  {
    v24 = (uint8_t **)a1[6];
    v20 = ((int (*)(uint32_t *))v1[3])(a1);
    v18 = 0;
    v1 = v24;
    if ( v20 == 0 )
      return v18;
    v3 = *v24;
    v4 = (int)(uintptr_t)(v24[1] - 1);
    v5 = **v24;
    if ( v24[1] != (uint8_t *)&dword_0 + 1 )
      goto LABEL_3;
  }
  v28 = v5;
  v25 = v1;
  v21 = ((int (*)(uint32_t *))v1[3])(a1);
  v18 = 0;
  v5 = v28;
  v1 = v25;
  if ( v21 != 0 )
  {
    v6 = *v25;
    v4 = (int)(uintptr_t)(v25[1]);
LABEL_4:
    v7 = v4 - 1;
    v8 = v5 << 8;
    v9 = *v6;
    v10 = v6 + 1;
    v11 = v8 + v9 - 2;
    v30 = v11;
    if ( v11 <= 13 )
    {
      v31 = v11;
      if ( v11 <= 0 )
      {
        v29 = v11;
        v31 = 0;
        v16 = a1[95];
        if ( v16 == 224 )
        {
LABEL_13:
          v22 = v1;
          sub_F90ED0((int)(uintptr_t)(a1), v32, v31, v29);
          v17 = v22;
LABEL_17:
          v17[1] = (uint8_t *)v7;
          *v17 = v10;
          v18 = 1;
          if ( v29 > 0 )
            (*(void (**)(uint32_t *, int))(a1[6] + 16))(a1, v29);
          return v18;
        }
LABEL_15:
        if ( v16 == 238 )
        {
          if ( v31 > 0xB && v32[0] == 65 && v32[1] == 100 && v32[2] == 111 && v32[3] == 98 && v32[4] == 101 )
          {
            v27 = v1;
            sub_F93570();
            v17 = v27;
          }
          else
          {
            *(uint32_t *)(*a1 + 20) = 78;
            *(uint32_t *)(*a1 + 24) = v30;
            v26 = v1;
            G4_VCALL<void>(a1, 4, 1);
            v17 = v26;
          }
        }
        else
        {
          *(uint32_t *)(*a1 + 20) = 68;
          *(uint32_t *)(*a1 + 24) = a1[95];
          v23 = v1;
          G4_VCALL<void>(a1, 0);
          v17 = v23;
        }
        goto LABEL_17;
      }
    }
    else
    {
      v31 = 14;
    }
    v12 = v7;
    v13 = v1;
    v14 = v10;
    v15 = 0;
    do
    {
      if ( v12 == 0 )
      {
        if ( ((uint8_t (*)(uint32_t *))v13[3])(a1) == 0 )
          return 0;
        v14 = *v13;
        v12 = (int)(uintptr_t)(v13[1]);
      }
      --v12;
      v32[v15++] = *v14++;
    }
    while ( v15 < v31 );
    v10 = v14;
    v1 = v13;
    v29 = v30 - v31;
    v7 = v12;
    v16 = a1[95];
    if ( v16 == 224 )
      goto LABEL_13;
    goto LABEL_15;
  }
  return v18;
}

// ----------------------------------------------------------------------------
// Function: sub_F91960  (binary VA: 0xf91960)
// Original: sub_F91960
// ----------------------------------------------------------------------------
int sub_F91960(uint32_t *a1)
{
  int v1;
  char v2;
  int v3;
  uint8_t **v5;
  uint8_t *v6;
  uint8_t *i;
  uint8_t v8;
  int v9;
  int v10;
  uint8_t *v11;

  v1 = a1[95];
  if ( v1 == 0 )
  {
    v5 = (uint8_t **)a1[6];
    v6 = *v5;
    for ( i = v5[1]; ; v5[1] = i )
    {
      while ( 1 )
      {
        if ( i == nullptr )
        {
          if ( ((uint8_t (*)(uint32_t *))v5[3])(a1) == 0 )
            return 0;
          v6 = *v5;
          i = v5[1];
        }
        v8 = *v6;
        --i;
        ++v6;
        if ( v8 == 0xFF )
          break;
        ++*(uint32_t *)(a1[101] + 20);
        *v5 = v6;
        v5[1] = i;
      }
      do
      {
        if ( i == nullptr )
        {
          if ( ((uint8_t (*)(uint32_t *))v5[3])(a1) == 0 )
            return 0;
          v6 = *v5;
          i = v5[1];
        }
        v9 = *v6;
        --i;
        ++v6;
      }
      while ( v9 == 255 );
      if ( v9 != 0 )
        break;
      *(uint32_t *)(a1[101] + 20) += 2;
      *v5 = v6;
    }
    v10 = v9;
    if ( *(uint32_t *)(a1[101] + 20) != 0 )
    {
      *(uint32_t *)(*a1 + 20) = 116;
      *(uint32_t *)(*a1 + 24) = *(uint32_t *)(a1[101] + 20);
      *(uint32_t *)(*a1 + 28) = v9;
      v11 = v6;
      G4_VCALL<void>(a1, 4, -1);
      *(uint32_t *)(a1[101] + 20) = 0;
      v6 = v11;
    }
    a1[95] = v10;
    *v5 = v6;
    v5[1] = i;
    v1 = a1[95];
  }
  if ( *(uint32_t *)(a1[101] + 16) + 208 == v1 )
  {
    *(uint32_t *)(*a1 + 20) = 98;
    *(uint32_t *)(*a1 + 24) = *(uint32_t *)(a1[101] + 16);
    G4_VCALL<void>(a1, 4, 3);
    a1[95] = 0;
    goto LABEL_4;
  }
  v2 = (*(int (**)(uint32_t *, uint32_t))(a1[6] + 20))(a1, *(uint32_t *)(a1[101] + 16));
  v3 = 0;
  if ( v2 != 0 )
  {
LABEL_4:
    *(uint32_t *)(a1[101] + 16) = ((uint8_t)*(uint32_t *)(a1[101] + 16) + 1) & 7;
    return 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_F91B00  (binary VA: 0xf91b00)
// Original: sub_F91B00
// ----------------------------------------------------------------------------
uint8_t * sub_F91B00(uint32_t *a1)
{
  uint32_t *v1;
  uint8_t **v2;
  uint8_t *v3;
  uint8_t *v4;
  uint8_t *v5;
  uint8_t *v6;
  unsigned int v7;
  char v8;
  uint8_t *v9;
  uint32_t *v10;
  int v11;
  uint8_t *v13;
  uint8_t v14;
  uint8_t *v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  uint32_t *v21;
  char v22;
  char v23;
  uint8_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint8_t v29;
  uint8_t *v30;
  uint32_t *v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  uint32_t *v35;

  v1 = (uint32_t *)a1[101];
  v2 = (uint8_t **)a1[6];
  v3 = *v2;
  v31 = (uint32_t *)v1[40];
  v4 = v2[1];
  if ( v31 != nullptr )
  {
    v32 = 0;
    v34 = v1[41];
    v33 = v31[3];
    v30 = (uint8_t *)(v31[4] + v34);
    goto LABEL_3;
  }
  if ( v4 == nullptr )
  {
    v27 = (uint32_t *)a1[101];
    v22 = ((int (*)(uint32_t *))v2[3])(a1);
    v1 = v27;
    if ( v22 == 0 )
      return v4;
    v3 = *v2;
    v4 = v2[1];
  }
  v13 = v4 - 1;
  v14 = *v3;
  if ( v13 == nullptr )
  {
    v29 = *v3;
    v28 = v1;
    v23 = ((int (*)(uint32_t *))v2[3])(a1);
    v4 = nullptr;
    v14 = v29;
    v1 = v28;
    if ( v23 != 0 )
    {
      v15 = *v2;
      v13 = v2[1];
      goto LABEL_39;
    }
    return v4;
  }
  v15 = v3 + 1;
LABEL_39:
  v4 = v13 - 1;
  v16 = v14 << 8;
  v17 = *v15;
  v3 = v15 + 1;
  v32 = v16 + v17 - 2;
  if ( v32 < 0 )
  {
    v33 = 0;
    v30 = nullptr;
LABEL_22:
    v1[40] = 0;
    v11 = a1[95];
    if ( v11 == 224 )
    {
      sub_F90ED0((int)(uintptr_t)(a1), v30, v33, v32);
    }
    else if ( v11 == 238 )
    {
      if ( v33 > 0xB && *v30 == 65 && v30[1] == 100 && v30[2] == 111 && v30[3] == 98 && v30[4] == 101 )
      {
        sub_F93570();
      }
      else
      {
        *(uint32_t *)(*a1 + 20) = 78;
        *(uint32_t *)(*a1 + 24) = v33 + v32;
        G4_VCALL<void>(a1, 4, 1);
      }
    }
    else
    {
      *(uint32_t *)(*a1 + 20) = 91;
      *(uint32_t *)(*a1 + 24) = a1[95];
      *(uint32_t *)(*a1 + 28) = v33 + v32;
      G4_VCALL<void>(a1, 4, 1);
    }
    v2[1] = v4;
    *v2 = v3;
    v4 = (uint8_t *)(&dword_0 + 1);
    if ( v32 > 0 )
      (*(void (**)(uint32_t *, int))(a1[6] + 16))(a1, v32);
    return v4;
  }
  v18 = a1[95];
  if ( v18 == 254 )
    v19 = v1[23];
  else
    v19 = v1[v18 - 200];
  if ( v19 > v32 )
    v19 = v32;
  v33 = v19;
  v26 = v1;
  v20 = (*(int (**)(uint32_t *, int, unsigned int))(a1[1] + 4))(a1, 1, v19 + 20);
  *(uint32_t *)v20 = 0;
  v31 = (uint32_t *)v20;
  v34 = 0;
  *(uint8_t *)(v20 + 4) = a1[95];
  *(uint32_t *)(v20 + 8) = v32;
  *(uint32_t *)(v20 + 12) = v33;
  v30 = (uint8_t *)(v20 + 20);
  *(uint32_t *)(v20 + 16) = v20 + 20;
  v1 = v26;
  v26[40] = v20;
  v26[41] = 0;
LABEL_3:
  if ( v33 <= v34 )
  {
LABEL_15:
    if ( v31 != nullptr )
    {
      v10 = (uint32_t *)a1[67];
      if ( v10 != nullptr )
      {
        while ( *v10 != 0 )
          v10 = (uint32_t *)*v10;
        v21 = v31;
        *v10 = (uint32_t)(uintptr_t)(v31);
      }
      else
      {
        a1[67] = (uint32_t)(uintptr_t)(v31);
        v21 = v31;
      }
      v30 = (uint8_t *)v21[4];
      v32 = v31[2] - v33;
    }
    goto LABEL_22;
  }
  v5 = v4;
  v6 = v3;
  v7 = v34;
  while ( 1 )
  {
    while ( 1 )
    {
      *v2 = v6;
      v2[1] = v5;
      v1[41] = v7;
      if ( v5 == nullptr )
        break;
LABEL_10:
      if ( v33 <= v7 )
        goto LABEL_6;
      v35 = v1;
      v24 = v5;
      v9 = v30;
      do
      {
        ++v7;
        *v9++ = *v6++;
        --v24;
      }
      while ( v24 != nullptr && v33 > v7 );
      v30 = v9;
      v5 = v24;
      v1 = v35;
      if ( v7 >= v33 )
      {
LABEL_14:
        v3 = v6;
        v4 = v5;
        goto LABEL_15;
      }
    }
    v25 = v1;
    v8 = ((int (*)(uint32_t *))v2[3])(a1);
    v1 = v25;
    if ( v8 == 0 )
      return nullptr;
    v5 = v2[1];
    v6 = *v2;
    if ( v5 != nullptr )
      goto LABEL_10;
LABEL_6:
    if ( v7 >= v33 )
      goto LABEL_14;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_F91EF0  (binary VA: 0xf91ef0)
// Original: sub_F91EF0
// ----------------------------------------------------------------------------
int sub_F91EF0(uint32_t *a1)
{
  uint32_t *v1;
  int v2;
  uint8_t **v3;
  uint8_t *v4;
  uint8_t *v5;
  int v6;
  uint8_t v7;
  uint8_t *v8;
  int v9;
  uint8_t *v10;
  uint8_t **v11;
  uint8_t *v12;
  uint8_t *v13;
  uint8_t *v14;
  uint8_t v15;
  uint8_t *v16;
  uint8_t *v17;
  uint8_t *v18;
  uint8_t *v19;
  uint8_t v20; // bp
  uint8_t *v21;
  uint8_t *i;
  uint8_t v23;
  int v24;
  char v25;
  char v27;
  uint8_t **v28;
  uint8_t *v29;
  uint8_t *v30;
  uint8_t v31; // bp
  uint8_t *v32;
  int v33;
  uint8_t *v34;
  uint8_t *v35;
  uint8_t v36; // bp
  uint8_t *v37;
  uint8_t *v38;
  uint8_t *v39;
  uint8_t v40; // bp
  uint8_t *v41;
  uint8_t *v42;
  uint8_t *v43;
  int v44;
  uint8_t *v45;
  uint8_t *v46;
  int v47;
  uint8_t *v48;
  int v49;
  uint32_t *v50;
  int v51;
  uint32_t *v52;
  uint8_t *v53;
  uint8_t *v54;
  uint8_t *v55;
  uint8_t *v56;
  int v57;
  uint32_t *v58;
  int j;
  int v60;
  uint8_t **v61;
  uint8_t *v62;
  uint8_t *v63;
  uint8_t *v64;
  uint8_t v65;
  uint8_t *v66;
  uint8_t *v67;
  int v68;
  int v69;
  uint8_t *v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  uint16_t *v78;
  int *v79;
  int v80;
  uint16_t v81;
  uint16_t *v82;
  uint32_t *v83;
  uint32_t *v84;
  uint32_t *v85;
  uint32_t *v86;
  uint32_t *v87;
  uint32_t *v88;
  uint32_t *v89;
  uint32_t *v90;
  int v91;
  char v92;
  int *v93;
  int v94;
  uint8_t v95;
  uint8_t *v96;
  int16_t v97;
  int v98;
  char v99;
  int v100;
  char v101;
  char v102;
  char v103;
  uint8_t v104;
  int v105;
  uint8_t v106;
  uint8_t *v107;
  char v108;
  uint8_t v109;
  uint8_t v110;
  int v111;
  uint8_t *v112;
  uint8_t *v113;
  uint8_t *v114;
  uint8_t *v115;
  uint8_t *v116;
  uint8_t *v117;
  int v118;
  uint8_t *v119;
  uint8_t *v120;
  int v121;
  uint8_t *v122;
  uint8_t *v123;
  int v124;
  uint8_t v125;
  int v126;
  uint8_t **v127;
  uint8_t **v128;
  uint8_t v129;
  int v130;
  int v131;
  int v132;
  int v133;

  v1 = a1;
  v2 = a1[95];
  if ( v2 != 0 )
    goto LABEL_9;
  while ( 1 )
  {
    v3 = (uint8_t **)v1[6];
    v4 = *v3;
    if ( *(uint8_t *)(v1[101] + 12) == 0 )
    {
      v5 = v3[1];
      if ( v5 != nullptr )
      {
        v6 = (int)(uintptr_t)(v5 - 1);
        v7 = *v4;
        if ( v6 != 0 )
        {
LABEL_5:
          v8 = v4 + 1;
LABEL_6:
          v9 = *v8;
          v10 = v8 + 1;
          v118 = v6 - 1;
          if ( v9 != 216 || v7 != 255 )
          {
            *(uint32_t *)(*v1 + 20) = 53;
            *(uint32_t *)(*v1 + 24) = v7;
            *(uint32_t *)(*v1 + 28) = v9;
            v113 = v10;
            G4_VCALL<void>(v1, 0);
            v10 = v113;
          }
          v1[95] = v9;
          *v3 = v10;
          v3[1] = (uint8_t *)v118;
          v2 = v1[95];
          goto LABEL_9;
        }
      }
      else
      {
        if ( ((uint8_t (*)(uint32_t *))v3[3])(v1) == 0 )
          return 0;
        v4 = *v3;
        v6 = (int)(uintptr_t)(v3[1] - 1);
        v7 = **v3;
        if ( v3[1] != (uint8_t *)&dword_0 + 1 )
          goto LABEL_5;
      }
      v104 = v7;
      v27 = ((int (*)(uint32_t *))v3[3])(v1);
      v7 = v104;
      if ( v27 == 0 )
        return 0;
      v8 = *v3;
      v6 = (int)(uintptr_t)(v3[1]);
      goto LABEL_6;
    }
    for ( i = v3[1]; ; v3[1] = i )
    {
      while ( 1 )
      {
        if ( i == nullptr )
        {
          if ( ((uint8_t (*)(uint32_t *))v3[3])(v1) == 0 )
            return 0;
          v4 = *v3;
          i = v3[1];
        }
        v23 = *v4;
        --i;
        ++v4;
        if ( v23 == 0xFF )
          break;
        ++*(uint32_t *)(v1[101] + 20);
        *v3 = v4;
        v3[1] = i;
      }
      do
      {
        if ( i == nullptr )
        {
          if ( ((uint8_t (*)(uint32_t *))v3[3])(v1) == 0 )
            return 0;
          v4 = *v3;
          i = v3[1];
        }
        v24 = *v4;
        --i;
        ++v4;
      }
      while ( v24 == 255 );
      if ( v24 != 0 )
        break;
      *(uint32_t *)(v1[101] + 20) += 2;
      *v3 = v4;
    }
    v124 = v24;
    if ( *(uint32_t *)(v1[101] + 20) != 0 )
    {
      *(uint32_t *)(*v1 + 20) = 116;
      *(uint32_t *)(*v1 + 24) = *(uint32_t *)(v1[101] + 20);
      *(uint32_t *)(*v1 + 28) = v24;
      v117 = v4;
      G4_VCALL<void>(v1, 4, -1);
      *(uint32_t *)(v1[101] + 20) = 0;
      v4 = v117;
    }
    v1[95] = v124;
    *v3 = v4;
    v3[1] = i;
    v2 = v1[95];
LABEL_9:
    if ( v2 > 207 )
      break;
    if ( v2 >= 205 )
      goto LABEL_11;
    if ( v2 == 196 )
    {
      if ( (uint8_t)sub_F912A0(v1) == 0 )
        return 0;
    }
    else
    {
      if ( v2 > 196 )
      {
        if ( v2 == 201 )
        {
          v25 = sub_F90A50((int)(uintptr_t)(v1), 0, 1);
LABEL_54:
          if ( v25 == 0 )
            return 0;
          goto LABEL_13;
        }
        if ( v2 < 201 || v2 == 203 )
        {
LABEL_11:
          *(uint32_t *)(*v1 + 20) = 60;
LABEL_12:
          *(uint32_t *)(*v1 + 24) = v1[95];
          G4_VCALL<void>(v1, 0);
          goto LABEL_13;
        }
        if ( v2 > 203 )
        {
          v28 = (uint8_t **)v1[6];
          v29 = v28[1];
          v30 = *v28;
          if ( v29 == nullptr )
          {
            if ( ((uint8_t (*)(uint32_t *))v28[3])(v1) == 0 )
              return 0;
            v30 = *v28;
            v29 = v28[1];
          }
          v31 = *v30;
          v119 = v29 - 1;
          if ( v29 == (uint8_t *)&dword_0 + 1 )
          {
            if ( ((uint8_t (*)(uint32_t *))v28[3])(v1) == 0 )
              return 0;
            v32 = *v28;
            v119 = v28[1];
          }
          else
          {
            v32 = v30 + 1;
          }
          v33 = (v31 << 8) + *v32 - 2;
          *(uint32_t *)(*v1 + 20) = 91;
          *(uint32_t *)(*v1 + 24) = v1[95];
          goto LABEL_81;
        }
        v92 = sub_F90A50((int)(uintptr_t)(v1), 1, 1);
      }
      else
      {
        if ( v2 <= 193 )
        {
          if ( v2 < 192 )
          {
            if ( v2 != 1 )
            {
LABEL_20:
              *(uint32_t *)(*v1 + 20) = 68;
              goto LABEL_12;
            }
            goto LABEL_73;
          }
          v25 = sub_F90A50((int)(uintptr_t)(v1), 0, 0);
          goto LABEL_54;
        }
        if ( v2 != 194 )
          goto LABEL_11;
        v92 = sub_F90A50((int)(uintptr_t)(v1), 1, 0);
      }
      if ( v92 == 0 )
        return 0;
    }
LABEL_13:
    v1[95] = 0;
  }
  if ( v2 == 219 )
  {
    v61 = (uint8_t **)v1[6];
    v127 = v61;
    v62 = v61[1];
    v63 = *v61;
    if ( v62 == nullptr )
    {
      if ( ((uint8_t (*)(uint32_t *))v61[3])(v1) == 0 )
        return 0;
      v63 = *v127;
      v62 = v127[1];
    }
    v64 = v62 - 1;
    v65 = *v63;
    if ( v64 != nullptr )
    {
      v66 = v63 + 1;
    }
    else
    {
      v109 = *v63;
      v102 = ((int (*)(uint32_t *))v127[3])(v1);
      v65 = v109;
      if ( v102 == 0 )
        return 0;
      v66 = *v127;
      v64 = v127[1];
    }
    v67 = v64 - 1;
    v68 = v65 << 8;
    v69 = *v66;
    v70 = v66 + 1;
    v133 = v68 + v69 - 2;
    if ( v133 > 0 )
    {
      v121 = (int)(uintptr_t)(v1);
      do
      {
        if ( v67 == nullptr )
        {
          if ( ((uint8_t (*)(int))v127[3])(v121) == 0 )
            return 0;
          v70 = *v127;
          v67 = v127[1];
        }
        v71 = (int)(uintptr_t)(v67 - 1);
        v72 = *v70++;
        v73 = v72;
        v74 = v72 & 0xF;
        v132 = v73 >> 4;
        *(uint32_t *)(*(uint32_t *)v121 + 20) = 81;
        *(uint32_t *)(*(uint32_t *)v121 + 24) = v74;
        *(uint32_t *)(*(uint32_t *)v121 + 28) = v73 >> 4;
        G4_VCALL<void>(v121, 4, 1);
        if ( v74 > 3 )
        {
          *(uint32_t *)(*(uint32_t *)v121 + 20) = 31;
          *(uint32_t *)(*(uint32_t *)v121 + 24) = v74;
          (**(void (***)(int))v121)(v121);
        }
        v75 = v74 + 36;
        v76 = *(uint32_t *)(v121 + 4 * (v74 + 36));
        if ( v76 == 0 )
        {
          v111 = v75;
          v76 = jpeg_alloc_quant_table(v121);
          *(uint32_t *)(v121 + 4 * v111) = v76;
        }
        if ( v132 == 0 )
        {
          v77 = v71;
          v78 = (uint16_t *)v76;
          v79 = (int *)(uintptr_t)(jpeg_natural_order);
          while ( 1 )
          {
            if ( v77 == 0 )
            {
              if ( ((uint8_t (*)(int))v127[3])(v121) == 0 )
                return 0;
              v70 = *v127;
              v77 = (int)(uintptr_t)(v127[1]);
            }
            v80 = *v79;
            --v77;
            v81 = *v70;
            ++v79;
            ++v70;
            v78[v80] = v81;
            if ( v79 == (int *)&unk_1CBD960 )
              goto LABEL_135;
          }
        }
        v77 = v71;
        v131 = v76;
        v93 = (int *)(uintptr_t)(jpeg_natural_order);
        if ( v71 != 0 )
        {
LABEL_150:
          v94 = v77 - 1;
          v95 = *v70;
          if ( v94 == 0 )
            goto LABEL_156;
LABEL_151:
          v96 = v70 + 1;
          goto LABEL_152;
        }
        while ( 1 )
        {
          if ( ((uint8_t (*)(int))v127[3])(v121) == 0 )
            return 0;
          v70 = *v127;
          v94 = (int)(uintptr_t)(v127[1] - 1);
          v95 = **v127;
          if ( v127[1] != (uint8_t *)&dword_0 + 1 )
            goto LABEL_151;
LABEL_156:
          v106 = v95;
          v99 = ((int (*)(int))v127[3])(v121);
          v95 = v106;
          if ( v99 == 0 )
            return 0;
          v96 = *v127;
          v94 = (int)(uintptr_t)(v127[1]);
LABEL_152:
          v70 = v96 + 1;
          v78 = (uint16_t *)v131;
          v77 = v94 - 1;
          v97 = *v96 + (v95 << 8);
          v98 = *v93++;
          *(uint16_t *)(v131 + 2 * v98) = v97;
          if ( v93 == (int *)&unk_1CBD960 )
            break;
          if ( v77 != 0 )
            goto LABEL_150;
        }
LABEL_135:
        v82 = v78;
        v67 = (uint8_t *)v77;
        v83 = *(uint32_t **)v121;
        if ( *(int *)(*(uint32_t *)v121 + 104) > 1 )
        {
          v83[6] = *v82;
          v83[7] = v82[1];
          v83[8] = v82[2];
          v83[9] = v82[3];
          v83[10] = v82[4];
          v83[11] = v82[5];
          v83[12] = v82[6];
          v83[13] = v82[7];
          *(uint32_t *)(*(uint32_t *)v121 + 20) = 93;
          G4_VCALL<void>(v121, 4, 2);
          v84 = *(uint32_t **)v121;
          v84[6] = v82[8];
          v84[7] = v82[9];
          v84[8] = v82[10];
          v84[9] = v82[11];
          v84[10] = v82[12];
          v84[11] = v82[13];
          v84[12] = v82[14];
          v84[13] = v82[15];
          *(uint32_t *)(*(uint32_t *)v121 + 20) = 93;
          G4_VCALL<void>(v121, 4, 2);
          v85 = *(uint32_t **)v121;
          v85[6] = v82[16];
          v85[7] = v82[17];
          v85[8] = v82[18];
          v85[9] = v82[19];
          v85[10] = v82[20];
          v85[11] = v82[21];
          v85[12] = v82[22];
          v85[13] = v82[23];
          *(uint32_t *)(*(uint32_t *)v121 + 20) = 93;
          G4_VCALL<void>(v121, 4, 2);
          v86 = *(uint32_t **)v121;
          v86[6] = v82[24];
          v86[7] = v82[25];
          v86[8] = v82[26];
          v86[9] = v82[27];
          v86[10] = v82[28];
          v86[11] = v82[29];
          v86[12] = v82[30];
          v86[13] = v82[31];
          *(uint32_t *)(*(uint32_t *)v121 + 20) = 93;
          G4_VCALL<void>(v121, 4, 2);
          v87 = *(uint32_t **)v121;
          v87[6] = v82[32];
          v87[7] = v82[33];
          v87[8] = v82[34];
          v87[9] = v82[35];
          v87[10] = v82[36];
          v87[11] = v82[37];
          v87[12] = v82[38];
          v87[13] = v82[39];
          *(uint32_t *)(*(uint32_t *)v121 + 20) = 93;
          G4_VCALL<void>(v121, 4, 2);
          v88 = *(uint32_t **)v121;
          v88[6] = v82[40];
          v88[7] = v82[41];
          v88[8] = v82[42];
          v88[9] = v82[43];
          v88[10] = v82[44];
          v88[11] = v82[45];
          v88[12] = v82[46];
          v88[13] = v82[47];
          *(uint32_t *)(*(uint32_t *)v121 + 20) = 93;
          G4_VCALL<void>(v121, 4, 2);
          v89 = *(uint32_t **)v121;
          v89[6] = v82[48];
          v89[7] = v82[49];
          v89[8] = v82[50];
          v89[9] = v82[51];
          v89[10] = v82[52];
          v89[11] = v82[53];
          v89[12] = v82[54];
          v89[13] = v82[55];
          *(uint32_t *)(*(uint32_t *)v121 + 20) = 93;
          G4_VCALL<void>(v121, 4, 2);
          v90 = *(uint32_t **)v121;
          v90[6] = v82[56];
          v90[7] = v82[57];
          v90[8] = v82[58];
          v90[9] = v82[59];
          v90[10] = v82[60];
          v90[11] = v82[61];
          v90[12] = v82[62];
          v90[13] = v82[63];
          *(uint32_t *)(*(uint32_t *)v121 + 20) = 93;
          G4_VCALL<void>(v121, 4, 2);
        }
        v91 = v133 - 65;
        if ( v132 != 0 )
          v91 = v133 - 129;
        v133 = v91;
      }
      while ( v91 > 0 );
      v1 = (uint32_t *)v121;
    }
    if ( v133 != 0 )
    {
      *(uint32_t *)(*v1 + 20) = 11;
      G4_VCALL<void>(v1, 0);
    }
    *v127 = v70;
    v127[1] = v67;
    goto LABEL_13;
  }
  if ( v2 > 219 )
  {
    if ( v2 > 239 )
    {
      if ( v2 != 254 )
        goto LABEL_20;
      if ( (*(uint8_t (**)(uint32_t *))(v1[101] + 24))(v1) == 0 )
        return 0;
    }
    else if ( v2 >= 224 )
    {
      if ( (*(uint8_t (**)(uint32_t *))(v1[101] + 4 * v2 - 868))(v1) == 0 )
        return 0;
    }
    else
    {
      if ( v2 == 220 )
      {
        v28 = (uint8_t **)v1[6];
        v34 = v28[1];
        v35 = *v28;
        if ( v34 == nullptr )
        {
          if ( ((uint8_t (*)(uint32_t *))v28[3])(v1) == 0 )
            return 0;
          v35 = *v28;
          v34 = v28[1];
        }
        v36 = *v35;
        v119 = v34 - 1;
        if ( v34 == (uint8_t *)&dword_0 + 1 )
        {
          if ( ((uint8_t (*)(uint32_t *))v28[3])(v1) == 0 )
            return 0;
          v32 = *v28;
          v119 = v28[1];
        }
        else
        {
          v32 = v35 + 1;
        }
        v33 = (v36 << 8) + *v32 - 2;
        *(uint32_t *)(*v1 + 20) = 91;
        *(uint32_t *)(*v1 + 24) = v1[95];
LABEL_81:
        *(uint32_t *)(*v1 + 28) = v33;
        v114 = v32;
        G4_VCALL<void>(v1, 4, 1);
        *v28 = v114 + 1;
        v28[1] = v119 - 1;
        if ( v33 > 0 )
          (*(void (**)(uint32_t *, int))(v1[6] + 16))(v1, v33);
        goto LABEL_13;
      }
      if ( v2 != 221 )
        goto LABEL_20;
      v11 = (uint8_t **)v1[6];
      v12 = v11[1];
      v13 = *v11;
      if ( v12 == nullptr )
      {
        if ( ((uint8_t (*)(uint8_t *, uint32_t *))v11[3])(v13, v1) == 0 )
          return 0;
        v13 = *v11;
        v12 = v11[1];
      }
      v14 = v12 - 1;
      v15 = *v13;
      if ( v14 != nullptr )
      {
        v16 = v13 + 1;
      }
      else
      {
        v110 = *v13;
        v103 = ((int (*)(uint32_t *))v11[3])(v1);
        v15 = v110;
        if ( v103 == 0 )
          return 0;
        v16 = *v11;
        v14 = v11[1];
      }
      v17 = v14 - 1;
      if ( *v16 + (v15 << 8) != 4 )
      {
        *(uint32_t *)(*v1 + 20) = 11;
        v112 = v17;
        G4_VCALL<void>(v1, 0);
        v17 = v112;
      }
      v18 = v16 + 1;
      if ( v17 == nullptr )
      {
        if ( ((uint8_t (*)(uint32_t *))v11[3])(v1) == 0 )
          return 0;
        v18 = *v11;
        v17 = v11[1];
      }
      v19 = v17 - 1;
      v20 = *v18;
      if ( v19 != nullptr )
      {
        v21 = v18 + 1;
      }
      else
      {
        if ( ((uint8_t (*)(uint32_t *))v11[3])(v1) == 0 )
          return 0;
        v21 = *v11;
        v19 = v11[1];
      }
      v100 = *v21 + (v20 << 8);
      *(uint32_t *)(*v1 + 20) = 82;
      *(uint32_t *)(*v1 + 24) = v100;
      v115 = v19;
      v107 = v21;
      G4_VCALL<void>(v1, 4, 1);
      v1[63] = v100;
      *v11 = v107 + 1;
      v11[1] = v115 - 1;
    }
    goto LABEL_13;
  }
  if ( v2 == 216 )
  {
    *(uint32_t *)(*v1 + 20) = 102;
    G4_VCALL<void>(v1, 4, 1);
    if ( *(uint8_t *)(v1[101] + 12) != 0 )
    {
      *(uint32_t *)(*v1 + 20) = 61;
      G4_VCALL<void>(v1, 0);
    }
    *(uint32_t *)((char *)v1 + 202) = 0;
    *(uint32_t *)((char *)v1 + 206) = 0;
    *(uint32_t *)((char *)v1 + 210) = 0;
    *(uint32_t *)((char *)v1 + 214) = 0;
    for ( j = 0; j != 16; ++j )
    {
      *((uint8_t *)v1 + j + 218) = 1;
      *((uint8_t *)v1 + j + 234) = 5;
    }
    v60 = v1[101];
    v1[63] = 0;
    v1[10] = 0;
    *((uint8_t *)v1 + 266) = 0;
    *((uint8_t *)v1 + 256) = 0;
    *((uint8_t *)v1 + 257) = 1;
    *((uint8_t *)v1 + 258) = 1;
    *((uint8_t *)v1 + 259) = 0;
    *((uint16_t *)v1 + 130) = 1;
    *((uint16_t *)v1 + 131) = 1;
    *((uint8_t *)v1 + 264) = 0;
    *((uint8_t *)v1 + 265) = 0;
    *(uint8_t *)(v60 + 12) = 1;
    goto LABEL_13;
  }
  if ( v2 < 216 )
  {
LABEL_73:
    *(uint32_t *)(*v1 + 20) = 92;
    *(uint32_t *)(*v1 + 24) = v1[95];
    G4_VCALL<void>(v1, 4, 1);
    goto LABEL_13;
  }
  if ( v2 == 217 )
  {
    *(uint32_t *)(*v1 + 20) = 85;
    G4_VCALL<void>(v1, 4, 1);
    v1[95] = 0;
    return 2;
  }
  v128 = (uint8_t **)v1[6];
  v37 = *v128;
  v38 = v128[1];
  if ( *(uint8_t *)(v1[101] + 13) == 0 )
  {
    *(uint32_t *)(*v1 + 20) = 62;
    v116 = v37;
    G4_VCALL<void>(v1, 0);
    v37 = v116;
  }
  if ( v38 == nullptr )
  {
    if ( ((uint8_t (*)(uint32_t *))v128[3])(v1) != 0 )
    {
      v37 = *v128;
      v38 = v128[1];
      goto LABEL_86;
    }
    return 0;
  }
LABEL_86:
  v39 = v38 - 1;
  v40 = *v37;
  if ( v39 != nullptr )
  {
    v41 = v37 + 1;
    goto LABEL_88;
  }
  if ( ((uint8_t (*)(uint32_t *))v128[3])(v1) == 0 )
    return 0;
  v41 = *v128;
  v39 = v128[1];
LABEL_88:
  v42 = v39 - 1;
  v129 = *v41;
  if ( v42 == nullptr )
  {
    if ( ((uint8_t (*)(uint32_t *))v128[3])(v1) != 0 )
    {
      v43 = *v128;
      v42 = v128[1];
      goto LABEL_90;
    }
    return 0;
  }
  v43 = v41 + 1;
LABEL_90:
  v123 = v43 + 1;
  v125 = *v43;
  v120 = v42 - 1;
  *(uint32_t *)(*v1 + 20) = 103;
  *(uint32_t *)(*v1 + 24) = v125;
  G4_VCALL<void>(v1, 4, 1);
  if ( v129 + (v40 << 8) == 2 * v125 + 6 && v125 != 0 && v125 <= 4u )
  {
    v1[73] = v125;
    goto LABEL_94;
  }
  *(uint32_t *)(*v1 + 20) = 11;
  G4_VCALL<void>(v1, 0);
  v1[73] = v125;
  if ( v125 != 0 )
  {
LABEL_94:
    v44 = 1;
    v130 = v125 + 1;
    do
    {
      if ( v120 != nullptr )
      {
        v45 = v123;
        v46 = v120 - 1;
        LOBYTE(v47) = *v123;
        if ( v120 != (uint8_t *)&dword_0 + 1 )
          goto LABEL_97;
      }
      else
      {
        if ( ((uint8_t (*)(uint32_t *))v128[3])(v1) == 0 )
          return 0;
        v45 = *v128;
        v122 = v128[1];
        v46 = v122 - 1;
        LOBYTE(v47) = **v128;
        if ( v122 != (uint8_t *)&dword_0 + 1 )
        {
LABEL_97:
          v48 = v45 + 1;
          goto LABEL_98;
        }
      }
      v108 = v47;
      v101 = ((int (*)(uint32_t *))v128[3])(v1);
      LOBYTE(v47) = v108;
      if ( v101 == 0 )
        return 0;
      v48 = *v128;
      v46 = v128[1];
LABEL_98:
      v120 = v46 - 1;
      v126 = *v48;
      v49 = v1[9];
      v123 = v48 + 1;
      v47 = (uint8_t)v47;
      v50 = (uint32_t *)v1[49];
      if ( v49 <= 0 )
        goto LABEL_103;
      if ( (uint8_t)v47 != *(uint32_t *)v1[49] )
      {
        v51 = 0;
        while ( 1 )
        {
          ++v51;
          v50 += 21;
          if ( v51 == v49 )
            break;
          if ( (uint8_t)v47 == *v50 )
            goto LABEL_104;
        }
LABEL_103:
        *(uint32_t *)(*v1 + 20) = 5;
        *(uint32_t *)(*v1 + 24) = (uint8_t)v47;
        v105 = (uint8_t)v47;
        G4_VCALL<void>(v1, 0);
        v47 = v105;
      }
LABEL_104:
      v1[v44++ + 73] = (uint32_t)(uintptr_t)(v50);
      v50[5] = v126 >> 4;
      v50[6] = v126 & 0xF;
      v52 = (uint32_t *)*v1;
      v52[6] = v47;
      v52[7] = v50[5];
      v52[8] = v50[6];
      *(uint32_t *)(*v1 + 20) = 104;
      G4_VCALL<void>(v1, 4, 1);
    }
    while ( v44 != v130 );
  }
  if ( v120 == nullptr )
  {
    if ( ((uint8_t (*)(uint32_t *))v128[3])(v1) == 0 )
      return 0;
    v123 = *v128;
    v120 = v128[1];
  }
  v1[91] = *v123;
  v53 = v120 - 1;
  if ( v120 != (uint8_t *)&dword_0 + 1 )
  {
    v54 = v123 + 1;
    goto LABEL_108;
  }
  if ( ((uint8_t (*)(uint32_t *))v128[3])(v1) == 0 )
    return 0;
  v54 = *v128;
  v53 = v128[1];
LABEL_108:
  v55 = v53 - 1;
  v1[92] = *v54;
  if ( v53 != (uint8_t *)&dword_0 + 1 )
  {
    v56 = v54 + 1;
    goto LABEL_110;
  }
  if ( ((uint8_t (*)(uint32_t *))v128[3])(v1) == 0 )
    return 0;
  v56 = *v128;
  v55 = v128[1];
LABEL_110:
  v57 = *v56;
  v1[94] = v57 & 0xF;
  v1[93] = v57 >> 4;
  v58 = (uint32_t *)*v1;
  v58[6] = v1[91];
  v58[7] = v1[92];
  v58[8] = v1[93];
  v58[9] = v1[94];
  *(uint32_t *)(*v1 + 20) = 105;
  G4_VCALL<void>(v1, 4, 1);
  *(uint32_t *)(v1[101] + 16) = 0;
  ++v1[31];
  *v128 = v56 + 1;
  v128[1] = v55 - 1;
  v1[95] = 0;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_F93570  (binary VA: 0xf93570)
// Original: sub_F93570
// ----------------------------------------------------------------------------
uint8_t sub_F93570(uint8_t *a1, uint8_t *a2)
{
  int v3;
  uint32_t *v4;
  int v5;
  uint8_t v7;

  v3 = (a2[9] << 8) + a2[10];
  v7 = a2[11];
  v4 = *(uint32_t **)a1;
  v5 = a2[6] + (a2[5] << 8);
  v4[7] = (a2[7] << 8) + a2[8];
  v4[8] = v3;
  v4[6] = v5;
  v4[9] = v7;
  *(uint32_t *)(*(uint32_t *)a1 + 20) = 76;
  G4_VCALL<void>(a1, 4, 1);
  a1[264] = 1;
  a1[265] = v7;
  return v7;
}

// ----------------------------------------------------------------------------
// Function: sub_F935F0  (binary VA: 0xf935f0)
// Original: sub_F935F0
// ----------------------------------------------------------------------------
int sub_F935F0(int a1)
{
  int result;
  int v2;

  result = a1;
  v2 = *(uint32_t *)(a1 + 384);
  if ( *(uint8_t *)(a1 + 74) != 0 )
    result = (*(int (**)(int))(*(uint32_t *)(a1 + 424) + 8))(a1);
  ++*(uint32_t *)(v2 + 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F93620  (binary VA: 0xf93620)
// Original: sub_F93620
// ----------------------------------------------------------------------------
int sub_F93620(int a1)
{
  int v1;
  int result;

  v1 = *(uint32_t *)(a1 + 384);
  if ( *(uint8_t *)(v1 + 8) != 0 )
  {
    *(uint8_t *)(v1 + 8) = 0;
    (**(void (***)(int, uint32_t))(a1 + 424))(a1, 0);
    (**(void (***)(int, int))(a1 + 396))(a1, 2);
    (**(void (***)(int, int))(a1 + 388))(a1, 2);
  }
  else
  {
    if ( *(uint8_t *)(a1 + 74) != 0 && *(uint32_t *)(a1 + 116) == 0 )
    {
      if ( *(uint8_t *)(a1 + 80) != 0 && *(uint8_t *)(a1 + 90) != 0 )
      {
        *(uint32_t *)(a1 + 424) = *(uint32_t *)(v1 + 24);
        *(uint8_t *)(v1 + 8) = 1;
      }
      else if ( *(uint8_t *)(a1 + 88) != 0 )
      {
        *(uint32_t *)(a1 + 424) = *(uint32_t *)(v1 + 20);
      }
      else
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 46;
        (**(void (***)(int))a1)(a1);
      }
    }
    (**(void (***)(int))(a1 + 412))(a1);
    (*(void (**)(int))(*(uint32_t *)(a1 + 392) + 8))(a1);
    if ( *(uint8_t *)(a1 + 65) == 0 )
    {
      if ( *(uint8_t *)(v1 + 16) == 0 )
        (**(void (***)(int))(a1 + 420))(a1);
      (**(void (***)(int))(a1 + 416))(a1);
      if ( *(uint8_t *)(a1 + 74) != 0 )
        (**(void (***)(int, uint32_t))(a1 + 424))(a1, *(uint8_t *)(v1 + 8));
      (**(void (***)(int, int))(a1 + 396))(a1, *(uint8_t *)(v1 + 8) != 0 ? 3 : 0);
      (**(void (***)(int, uint32_t))(a1 + 388))(a1, 0);
    }
  }
  result = *(uint32_t *)(a1 + 8);
  if ( result != 0 )
  {
    *(uint32_t *)(result + 12) = *(uint32_t *)(v1 + 12);
    result = *(uint32_t *)(v1 + 12) + 2 - (*(uint8_t *)(v1 + 8) == 0);
    *(uint32_t *)(*(uint32_t *)(a1 + 8) + 16) = result;
    if ( *(uint8_t *)(a1 + 64) != 0 )
    {
      result = *(uint32_t *)(a1 + 400);
      if ( *(uint8_t *)(result + 17) == 0 )
      {
        result = 2 - (*(uint8_t *)(a1 + 90) == 0);
        *(uint32_t *)(*(uint32_t *)(a1 + 8) + 16) += result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F94360  (binary VA: 0xf94360)
// Original: sub_F94360
// ----------------------------------------------------------------------------
int sub_F94360(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 416);
  *(uint8_t *)(result + 36) = 0;
  *(uint32_t *)(result + 44) = *(uint32_t *)(a1 + 96);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F94380  (binary VA: 0xf94380)
// Original: sub_F94380
// ----------------------------------------------------------------------------
int sub_F94380(int a1, int a2, uint32_t *a3, int a4, int a5, uint32_t *a6)
{
  int result;

  result = (*(int (**)(int, int, uint32_t, int))(*(uint32_t *)(a1 + 416) + 12))(a1, a2, *a3, a5 + 4 * *a6);
  ++*a6;
  ++*a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F943E0  (binary VA: 0xf943e0)
// Original: sub_F943E0
// ----------------------------------------------------------------------------
unsigned int sub_F943E0(uint32_t *a1, uint32_t *a2, int a3, uint8_t **a4)
{
  uint32_t *v4;
  unsigned int result;
  uint8_t *v6;
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
  uint8_t *v18;
  int v19;
  uint8_t *v20;
  uint8_t *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  uint8_t *v29;
  uint8_t *v30;
  uint8_t *v31;
  uint8_t *v32;

  v4 = (uint32_t *)a1[104];
  v19 = a1[72];
  v27 = v4[7];
  v24 = v4[4];
  v25 = v4[5];
  v26 = v4[6];
  v30 = *(uint8_t **)(*a2 + 4 * a3);
  v31 = *(uint8_t **)(a2[1] + 4 * a3);
  v32 = *(uint8_t **)(a2[2] + 4 * a3);
  v29 = *a4;
  result = a1[23];
  v28 = result >> 1;
  if ( result >> 1 != 0 )
  {
    v22 = a1[23] >> 1;
    v21 = *(uint8_t **)(a2[2] + 4 * a3);
    v20 = *(uint8_t **)(a2[1] + 4 * a3);
    v6 = *a4;
    v18 = *(uint8_t **)(*a2 + 4 * a3);
    do
    {
      v7 = *v20++;
      v8 = *v21++;
      v23 = *(uint32_t *)(v25 + 4 * v7);
      v9 = v19 + ((*(uint32_t *)(v26 + 4 * v8) + *(uint32_t *)(v27 + 4 * v7)) >> 16);
      v10 = *v18;
      v11 = *(uint32_t *)(v24 + 4 * v8) + v19;
      *v6 = *(uint8_t *)(v11 + v10);
      v6[1] = *(uint8_t *)(v9 + v10);
      v6[2] = *(uint8_t *)(v23 + v19 + v10);
      v12 = v18[1];
      v18 += 2;
      v6[3] = *(uint8_t *)(v11 + v12);
      v6[4] = *(uint8_t *)(v9 + v12);
      v6[5] = *(uint8_t *)(v23 + v19 + v12);
      v6 += 6;
      --v22;
    }
    while ( v22 != 0 );
    v30 += 2 * v28;
    v31 += v28;
    v32 += v28;
    result = a1[23];
    v29 += 6 * v28;
  }
  if ( (result & 1) != 0 )
  {
    v13 = *v31;
    v14 = *v32;
    v15 = v19 + *(uint32_t *)(v25 + 4 * v13);
    v16 = v19 + ((*(uint32_t *)(v26 + 4 * v14) + *(uint32_t *)(v27 + 4 * v13)) >> 16);
    v17 = *v30;
    *v29 = *(uint8_t *)(*(uint32_t *)(v24 + 4 * v14) + v17 + v19);
    v29[1] = *(uint8_t *)(v16 + v17);
    result = *(uint8_t *)(v15 + v17);
    v29[2] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F945C0  (binary VA: 0xf945c0)
// Original: sub_F945C0
// ----------------------------------------------------------------------------
unsigned int sub_F945C0(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  uint32_t *v4;
  unsigned int result;
  uint8_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint8_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint8_t *v22;
  int v23;
  int v24;
  int v25;
  uint8_t *v26;
  uint8_t *v27;
  int v28;
  uint8_t *v29;
  uint8_t *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  uint8_t *v37;
  uint8_t *v38;
  uint8_t *v39;
  uint8_t *v40;
  uint8_t *v41;
  uint8_t *v42;

  v4 = (uint32_t *)a1[104];
  v28 = a1[72];
  v32 = v4[4];
  v33 = v4[5];
  v35 = v4[7];
  v34 = v4[6];
  v42 = *(uint8_t **)(*a2 + 8 * a3 + 4);
  v41 = *(uint8_t **)(*a2 + 8 * a3);
  v39 = *(uint8_t **)(a2[1] + 4 * a3);
  v40 = *(uint8_t **)(a2[2] + 4 * a3);
  v37 = *(uint8_t **)a4;
  v38 = *(uint8_t **)(a4 + 4);
  result = a1[23];
  v36 = result >> 1;
  if ( result >> 1 != 0 )
  {
    v6 = *(uint8_t **)(a4 + 4);
    v27 = *(uint8_t **)(*a2 + 8 * a3);
    v31 = a1[23] >> 1;
    v30 = *(uint8_t **)(a2[2] + 4 * a3);
    v29 = *(uint8_t **)(a2[1] + 4 * a3);
    v26 = *(uint8_t **)(*a2 + 8 * a3 + 4);
    v22 = *(uint8_t **)a4;
    do
    {
      v7 = *v29;
      v8 = *v30;
      ++v29;
      ++v30;
      v9 = v28 + ((*(uint32_t *)(v34 + 4 * v8) + *(uint32_t *)(v35 + 4 * v7)) >> 16);
      v23 = *(uint32_t *)(v33 + 4 * v7);
      v10 = *v27;
      v11 = *(uint32_t *)(v32 + 4 * v8) + v28;
      *v22 = *(uint8_t *)(v11 + v10);
      v22[1] = *(uint8_t *)(v9 + v10);
      v12 = v23 + v28;
      v22[2] = *(uint8_t *)(v23 + v28 + v10);
      v13 = v27;
      v27 += 2;
      v24 = v13[1];
      v22[3] = *(uint8_t *)(v11 + v24);
      v22[4] = *(uint8_t *)(v9 + v24);
      v22[5] = *(uint8_t *)(v12 + v24);
      v22 += 6;
      v14 = *v26;
      *v6 = *(uint8_t *)(v11 + v14);
      v6[1] = *(uint8_t *)(v9 + v14);
      v6[2] = *(uint8_t *)(v12 + v14);
      v15 = v26[1];
      v26 += 2;
      v6[3] = *(uint8_t *)(v11 + v15);
      v6[4] = *(uint8_t *)(v9 + v15);
      v6[5] = *(uint8_t *)(v12 + v15);
      v6 += 6;
      --v31;
    }
    while ( v31 != 0 );
    v39 += v36;
    v40 += v36;
    v41 += 2 * v36;
    v42 += 2 * v36;
    v37 += 6 * v36;
    v38 += 6 * v36;
    result = a1[23];
  }
  if ( (result & 1) != 0 )
  {
    v16 = *v40;
    v17 = *v39;
    v18 = v28 + *(uint32_t *)(v33 + 4 * v17);
    v19 = v28 + ((*(uint32_t *)(v34 + 4 * v16) + *(uint32_t *)(v35 + 4 * v17)) >> 16);
    v20 = *v41;
    v25 = *(uint32_t *)(v32 + 4 * v16) + v28;
    *v37 = *(uint8_t *)(v25 + v20);
    v37[1] = *(uint8_t *)(v19 + v20);
    v37[2] = *(uint8_t *)(v18 + v20);
    v21 = *v42;
    *v38 = *(uint8_t *)(v25 + v21);
    v38[1] = *(uint8_t *)(v19 + v21);
    result = *(uint8_t *)(v18 + v21);
    v38[2] = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F94840  (binary VA: 0xf94840)
// Original: sub_F94840
// ----------------------------------------------------------------------------
uint32_t * sub_F94840(int a1, int a2, uint32_t *a3, int a4, int a5, uint32_t *a6, int a7)
{
  int v7;
  unsigned int v8;
  int v9;
  uint32_t *result;
  int v11;
  uint32_t v12[4];

  v7 = *(uint32_t *)(a1 + 416);
  if ( *(uint8_t *)(v7 + 36) == 0 )
  {
    v8 = *(uint32_t *)(v7 + 44);
    if ( v8 >= 2 )
      v8 = 2;
    v9 = *a6;
    if ( v8 > a7 - *a6 )
    {
      v8 = a7 - *a6;
      v12[0] = *(uint32_t *)(a5 + 4 * v9);
    }
    else
    {
      v12[0] = *(uint32_t *)(a5 + 4 * v9);
      if ( v8 == 2 )
      {
        v12[1] = *(uint32_t *)(a5 + 4 * v9 + 4);
LABEL_7:
        (*(void (**)(int, int, uint32_t, uint32_t *))(v7 + 12))(a1, a2, *a3, v12);
        result = a6;
        goto LABEL_8;
      }
    }
    v11 = *(uint32_t *)(v7 + 32);
    *(uint8_t *)(v7 + 36) = 1;
    v12[1] = v11;
    goto LABEL_7;
  }
  v8 = 1;
  jcopy_sample_rows(v7 + 32, 0, a5 + 4 * *a6, 0, 1, *(uint32_t *)(v7 + 40));
  *(uint8_t *)(v7 + 36) = 0;
  result = a6;
LABEL_8:
  *result += v8;
  *(uint32_t *)(v7 + 44) -= v8;
  if ( *(uint8_t *)(v7 + 36) == 0 )
    ++*a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F94B00  (binary VA: 0xf94b00)
// Original: sub_F94B00
// ----------------------------------------------------------------------------
int sub_F94B00(uint32_t *a1)
{
  int v1;
  bool v2;
  int v3;
  int v4;
  int *v5;
  int i;
  int v7;
  int result;
  int v9;
  int (*v10)(int, int);
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  bool v18;

  v1 = a1[91];
  v17 = a1[102];
  v18 = v1 == 0;
  if ( v1 != 0 )
  {
    v9 = a1[92];
    v2 = true;
    if ( v1 <= v9 )
    {
      v2 = v9 > 63;
      if ( a1[73] != 1 )
        v2 = true;
    }
    else if ( a1[73] != 1 )
    {
      v2 = true;
    }
  }
  else
  {
    v2 = a1[92] != 0;
  }
  v3 = a1[93];
  v4 = a1[94];
  if ( v3 != 0 && v4 != v3 - 1 )
    v2 = true;
  if ( v4 > 13 || v2 )
  {
    *(uint32_t *)(*a1 + 20) = 16;
    *(uint32_t *)(*a1 + 24) = a1[91];
    *(uint32_t *)(*a1 + 28) = a1[92];
    *(uint32_t *)(*a1 + 32) = a1[93];
    *(uint32_t *)(*a1 + 36) = a1[94];
    G4_VCALL<void>(a1, 0);
  }
  if ( (int)a1[73] > 0 )
  {
    v16 = 0;
    do
    {
      v15 = *(uint32_t *)(a1[v16 + 74] + 4);
      v5 = (int *)(a1[35] + (v15 << 8));
      if ( !v18 && *v5 < 0 )
      {
        *(uint32_t *)(*a1 + 20) = 115;
        *(uint32_t *)(*a1 + 24) = v15;
        *(uint32_t *)(*a1 + 28) = 0;
        G4_VCALL<void>(a1, 4, -1);
      }
      for ( i = a1[91]; a1[92] >= i; ++i )
      {
        v7 = 0;
        if ( v5[i] >= 0 )
          v7 = v5[i];
        if ( a1[93] != v7 )
        {
          *(uint32_t *)(*a1 + 20) = 115;
          *(uint32_t *)(*a1 + 24) = v15;
          *(uint32_t *)(*a1 + 28) = i;
          G4_VCALL<void>(a1, 4, -1);
        }
        v5[i] = a1[94];
      }
      ++v16;
    }
    while ( a1[73] > v16 );
  }
  if ( a1[93] != 0 )
  {
    if ( v18 )
      v10 = (int (*)(int, int))(uintptr_t)(sub_F95600);
    else
      v10 = (int (*)(int, int))(uintptr_t)(sub_F957B0);
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v10);
  }
  else
  {
    if ( v18 )
    {
      *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(sub_F95220);
      if ( (int)a1[73] <= 0 )
        goto LABEL_23;
      goto LABEL_32;
    }
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(sub_F94E50);
  }
  if ( (int)a1[73] <= 0 )
    goto LABEL_23;
LABEL_32:
  v11 = 0;
  if ( v18 )
  {
    do
    {
      if ( a1[93] == 0 )
      {
        v13 = *(uint32_t *)(a1[v11 + 74] + 20);
        jpeg_make_d_derived_tbl(a1, 1, v13, v17 + 4 * v13 + 44);
      }
      *(uint32_t *)(v17 + 4 * v11++ + 24) = 0;
    }
    while ( a1[73] > v11 );
  }
  else
  {
    do
    {
      v12 = *(uint32_t *)(a1[v11 + 74] + 24);
      v14 = v12 + 8;
      jpeg_make_d_derived_tbl(a1, 0, v12, v17 + 4 * (v12 + 8) + 12);
      *(uint32_t *)(v17 + 60) = *(uint32_t *)(v17 + 4 * v14 + 12);
      *(uint32_t *)(v17 + 4 * v11++ + 24) = 0;
    }
    while ( v11 < a1[73] );
  }
LABEL_23:
  *(uint32_t *)(v17 + 16) = 0;
  *(uint32_t *)(v17 + 12) = 0;
  *(uint8_t *)(v17 + 8) = 0;
  *(uint32_t *)(v17 + 20) = 0;
  result = a1[63];
  *(uint32_t *)(v17 + 40) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F94E50  (binary VA: 0xf94e50)
// Original: sub_F94E50
// ----------------------------------------------------------------------------
int sub_F94E50(uint32_t *a1, int *a2)
{
  int v2;
  char v3;
  int v4;
  int v5;
  int result;
  int *v7;
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
  char v18;
  int v19;
  int v20;
  int v21;
  char v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v25)) > _g4_s2 ? (20u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v26)) > _g4_s3 ? (24u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v27)) > _g4_s4 ? (28u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v28)) > _g4_s5 ? (32u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v29)) > _g4_s6 ? (36u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v30)) > _g4_s7 ? (40u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v31)) > _g4_s8 ? (40u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v32)) > _g4_s9 ? (44u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v33)) > _g4_s10 ? (44u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v34)) > _g4_s11 ? (48u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v35)) > _g4_s12 ? (52u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v36)) > _g4_s13 ? (56u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v37)) > _g4_s14 ? (60u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v38)) > _g4_s15 ? (64u + sizeof(_g4_t_v38)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);

  v2 = a1[102];
  v26 = a1[92];
  v27 = v2;
  v25 = a1[94];
  if ( a1[63] == 0 || *(uint32_t *)(v2 + 40) != 0 )
  {
    v3 = *(uint8_t *)(v2 + 8);
    goto LABEL_4;
  }
  *(uint32_t *)(a1[101] + 20) += *(uint32_t *)(v2 + 16) / 8;
  *(uint32_t *)(v2 + 16) = 0;
  v18 = (*(int (**)(uint32_t *))(a1[101] + 8))(a1);
  result = 0;
  if ( v18 == 0 )
    return result;
  if ( (int)a1[73] > 0 )
  {
    v19 = 0;
    do
      *(uint32_t *)(v27 + 4 * v19++ + 24) = 0;
    while ( v19 < a1[73] );
  }
  *(uint32_t *)(v27 + 20) = 0;
  *(uint32_t *)(v27 + 40) = a1[63];
  if ( a1[95] != 0 )
  {
    v3 = *(uint8_t *)(v27 + 8);
LABEL_4:
    if ( v3 != 0 )
    {
LABEL_8:
      result = 1;
      --*(uint32_t *)(v27 + 40);
      return result;
    }
    goto LABEL_5;
  }
  *(uint8_t *)(v27 + 8) = 0;
LABEL_5:
  v4 = *(uint32_t *)(v27 + 20);
  v23 = v4;
  if ( v4 != 0 )
  {
    v5 = v4 - 1;
LABEL_7:
    *(uint32_t *)(v27 + 20) = v5;
    goto LABEL_8;
  }
  v38 = a1;
  v7 = (int *)a1[6];
  v8 = *v7;
  v35 = v7[1];
  v9 = *(uint32_t *)(v27 + 12);
  v34 = v8;
  v10 = *(uint32_t *)(v27 + 16);
  v24 = *a2;
  v28 = *(uint32_t *)(v27 + 60);
  v30 = a1[91];
  if ( v26 < v30 )
  {
LABEL_39:
    *v7 = v8;
    *(uint32_t *)(a1[6] + 4) = v35;
    *(uint32_t *)(v27 + 12) = v9;
    *(uint32_t *)(v27 + 16) = v10;
    v5 = v23;
    goto LABEL_7;
  }
  while ( 1 )
  {
    if ( v10 <= 7 )
    {
      if ( (uint8_t)jpeg_fill_bit_buffer(&v34, v9, v10, 0) == 0 )
        return 0;
      v10 = v37;
      v9 = v36;
      v32 = 1;
      if ( v37 <= 7 )
        goto LABEL_25;
    }
    v32 = 9;
    v13 = (uint8_t)(v9 >> (v10 - 8));
    v14 = *(uint32_t *)(v28 + 4 * v13 + 144);
    if ( v14 != 0 )
    {
      v10 -= v14;
      v15 = *(uint8_t *)(v28 + v13 + 1168);
    }
    else
    {
LABEL_25:
      v15 = jpeg_huff_decode(&v34, v9, v10, v28, v32);
      if ( v15 < 0 )
        return 0;
      v9 = v36;
      v10 = v37;
    }
    v16 = v15 >> 4;
    v17 = v15 & 0xF;
    v29 = v16;
    v33 = v17;
    if ( v17 != 0 )
    {
      if ( v10 < v17 )
      {
        if ( (uint8_t)jpeg_fill_bit_buffer(&v34, v9, v10, v17) == 0 )
          return 0;
        v9 = v36;
        v10 = v37;
      }
      v10 -= v33;
      v11 = ((1 << v33) - 1) & (v9 >> v10);
      if ( v11 < dword_1CBD6A0[v33] )
        v11 += dword_1CBD6E0[v33];
      v31 = v29 + v30;
      *(uint16_t *)(v24 + 2 * (&jpeg_natural_order)[v31]) = v11 << v25;
      v12 = v31;
      goto LABEL_16;
    }
    if ( v16 != 15 )
      break;
    v12 = v30 + 15;
LABEL_16:
    v30 = v12 + 1;
    if ( v26 < v12 + 1 )
    {
      v7 = (int *)a1[6];
      v8 = v34;
      goto LABEL_39;
    }
  }
  v20 = 1 << v16;
  v21 = 1 << v16;
  if ( v16 == 0 )
    goto LABEL_38;
  if ( v10 >= v16 )
    goto LABEL_37;
  v22 = jpeg_fill_bit_buffer(&v34, v9, v10, v16);
  result = 0;
  if ( v22 != 0 )
  {
    v9 = v36;
    v10 = v37;
LABEL_37:
    v10 -= v29;
    v21 = v20 + ((v20 - 1) & (v9 >> v10));
LABEL_38:
    v23 = v21 - 1;
    v7 = (int *)a1[6];
    v8 = v34;
    goto LABEL_39;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F95220  (binary VA: 0xf95220)
// Original: sub_F95220
// ----------------------------------------------------------------------------
int sub_F95220(uint32_t *a1, int a2)
{
  uint32_t *v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int result;
  char v15;
  int v16;
  char v17;
  int v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint16_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v23)) > _g4_s4 ? (20u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v24)) > _g4_s5 ? (24u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v25)) > _g4_s6 ? (28u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v26)) > _g4_s7 ? (32u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v27)) > _g4_s8 ? (36u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v28)) > _g4_s9 ? (48u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v29)) > _g4_s10 ? (52u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v30)) > _g4_s11 ? (56u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v31)) > _g4_s12 ? (60u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v32)) > _g4_s13 ? (64u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v33)) > _g4_s14 ? (76u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v34)) > _g4_s15 ? (80u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v35)) > _g4_s16 ? (84u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v36)) > _g4_s17 ? (88u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v37)) > _g4_s18 ? (92u + sizeof(_g4_t_v37)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);

  v2 = a1;
  v3 = a1[102];
  v24 = (uint32_t *)v3;
  v22 = a1[94];
  if ( a1[63] == 0 )
    goto LABEL_16;
  if ( *(uint32_t *)(v3 + 40) != 0 )
  {
    if ( *(uint8_t *)(v3 + 8) == 0 )
    {
LABEL_4:
      v32 = v2;
      v4 = (int *)v2[6];
      v27 = *(uint32_t *)(v3 + 12);
      v5 = *v4;
      v29 = v4[1];
      v28 = v5;
      v6 = v24[4];
      v33 = v24[5];
      v34 = v24[6];
      v35 = v24[7];
      v36 = v24[8];
      v37 = v24[9];
      if ( (int)v2[80] > 0 )
      {
        v26 = v2;
        v19 = 0;
        while ( 1 )
        {
          v25 = *(uint16_t **)(a2 + 4 * v19);
          v11 = v26[v19 + 81];
          v12 = v24[*(uint32_t *)(v26[v11 + 74] + 20) + 11];
          if ( v6 <= 7 )
          {
            v21 = v24[*(uint32_t *)(v26[v11 + 74] + 20) + 11];
            v15 = jpeg_fill_bit_buffer(&v28, v27, v6, 0);
            v12 = v21;
            if ( v15 == 0 )
              return 0;
            v6 = v31;
            v27 = v30;
            v23 = 1;
            if ( v31 <= 7 )
              goto LABEL_14;
          }
          v23 = 9;
          v20 = (uint8_t)(v27 >> (v6 - 8));
          v13 = *(uint32_t *)(v12 + 4 * v20 + 144);
          if ( v13 != 0 )
          {
            v6 -= v13;
            v7 = *(uint8_t *)(v12 + v20 + 1168);
          }
          else
          {
LABEL_14:
            v7 = jpeg_huff_decode(&v28, v27, v6, v12, v23);
            if ( v7 < 0 )
              return 0;
            v27 = v30;
            v6 = v31;
          }
          if ( v7 != 0 )
          {
            if ( v7 > v6 )
            {
              if ( (uint8_t)jpeg_fill_bit_buffer(&v28, v27, v6, v7) == 0 )
                return 0;
              v27 = v30;
              v6 = v31;
            }
            v6 -= v7;
            v8 = (1 << v7) - 1;
            v9 = v8 & (v27 >> v6);
            if ( v9 >= dword_1CBD6A0[v7] )
              v7 = v8 & (v27 >> v6);
            else
              v7 = v9 + dword_1CBD6E0[v7];
          }
          v10 = *(&v34 + v11) + v7;
          v2 = v26;
          *(&v34 + v11) = v10;
          ++v19;
          *v25 = v10 << v22;
          if ( v26[80] <= v19 )
          {
            v4 = (int *)v26[6];
            v5 = v28;
            break;
          }
        }
      }
      *v4 = v5;
      *(uint32_t *)(v2[6] + 4) = v29;
      v24[4] = v6;
      v24[5] = v33;
      v24[6] = v34;
      v24[7] = v35;
      v24[8] = v36;
      v16 = v37;
      v24[3] = v27;
      v24[9] = v16;
    }
LABEL_17:
    result = 1;
    --v24[10];
    return result;
  }
  *(uint32_t *)(a1[101] + 20) += *(uint32_t *)(v3 + 16) / 8;
  *(uint32_t *)(v3 + 16) = 0;
  v17 = (*(int (**)(uint32_t *))(a1[101] + 8))(a1);
  result = 0;
  v2 = a1;
  if ( v17 != 0 )
  {
    if ( (int)a1[73] > 0 )
    {
      v18 = 0;
      do
        *(uint32_t *)(v3 + 4 * v18++ + 24) = 0;
      while ( v18 < a1[73] );
    }
    *(uint32_t *)(v3 + 20) = 0;
    *(uint32_t *)(v3 + 40) = a1[63];
    if ( a1[95] == 0 )
    {
      *(uint8_t *)(v3 + 8) = 0;
      goto LABEL_4;
    }
LABEL_16:
    if ( *(uint8_t *)(v3 + 8) == 0 )
      goto LABEL_4;
    goto LABEL_17;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F95600  (binary VA: 0xf95600)
// Original: sub_F95600
// ----------------------------------------------------------------------------
int sub_F95600(uint32_t *a1, int a2)
{
  uint32_t *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint16_t *v8;
  int result;
  char v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v19)) > _g4_s7 ? (32u + sizeof(_g4_t_v19)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);

  v2 = a1;
  v13 = a1[102];
  v14 = 1 << a1[94];
  if ( a1[63] != 0 && *(uint32_t *)(a1[102] + 40) == 0 )
  {
    *(uint32_t *)(a1[101] + 20) += *(uint32_t *)(v13 + 16) / 8;
    *(uint32_t *)(v13 + 16) = 0;
    v10 = (*(int (**)(uint32_t *))(a1[101] + 8))(a1);
    result = 0;
    if ( v10 == 0 )
      return result;
    if ( (int)a1[73] > 0 )
    {
      v11 = 0;
      do
        *(uint32_t *)(v13 + 4 * v11++ + 24) = 0;
      while ( v11 < a1[73] );
    }
    *(uint32_t *)(v13 + 20) = 0;
    *(uint32_t *)(v13 + 40) = a1[63];
    if ( a1[95] == 0 )
      *(uint8_t *)(v13 + 8) = 0;
  }
  v19 = a1;
  v3 = (int *)a1[6];
  v12 = *(uint32_t *)(v13 + 12);
  v4 = *v3;
  v16 = v3[1];
  v15 = v4;
  v5 = *(uint32_t *)(v13 + 16);
  if ( (int)a1[80] > 0 )
  {
    v6 = 0;
    v7 = v12;
    while ( 1 )
    {
      v8 = *(uint16_t **)(a2 + 4 * v6);
      if ( v5 <= 0 )
      {
        if ( (uint8_t)jpeg_fill_bit_buffer(&v15, v7, v5, 1) == 0 )
          return 0;
        v7 = v17;
        v5 = v18;
      }
      if ( _bittest(&v7, (uint8_t)--v5) )
        *v8 |= v14;
      if ( a1[80] <= ++v6 )
      {
        v2 = a1;
        v12 = v7;
        v3 = (int *)a1[6];
        v4 = v15;
        break;
      }
    }
  }
  *v3 = v4;
  *(uint32_t *)(v2[6] + 4) = v16;
  *(uint32_t *)(v13 + 16) = v5;
  *(uint32_t *)(v13 + 12) = v12;
  --*(uint32_t *)(v13 + 40);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_F957B0  (binary VA: 0xf957b0)
// Original: sub_F957B0
// ----------------------------------------------------------------------------
int sub_F957B0(uint32_t *a1, int *a2)
{
  int v2;
  int v3;
  int result;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  int16_t v17;
  int16_t *v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  int v23;
  int16_t v24;
  int16_t *v25;
  char v26;
  char v27;
  char v28;
  int v29;
  uint8_t *v30;
  int v31;
  char v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef char _g4_t_v35;
  typedef int16_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int16_t _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int16_t _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef uint8_t _g4_t_v56[272];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (8u + sizeof(_g4_t_v33)) > _g4_s0 ? (8u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v34)) > _g4_s1 ? (8u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v35)) > _g4_s2 ? (8u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v36)) > _g4_s3 ? (12u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v37)) > _g4_s4 ? (16u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v38)) > _g4_s5 ? (20u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v39)) > _g4_s6 ? (24u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v40)) > _g4_s7 ? (28u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v41)) > _g4_s8 ? (32u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v42)) > _g4_s9 ? (36u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v43)) > _g4_s10 ? (40u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (46u + sizeof(_g4_t_v44)) > _g4_s11 ? (46u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v45)) > _g4_s12 ? (48u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v46)) > _g4_s13 ? (52u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v47)) > _g4_s14 ? (56u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v48)) > _g4_s15 ? (60u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v49)) > _g4_s16 ? (60u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v50)) > _g4_s17 ? (60u + sizeof(_g4_t_v50)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v51)) > _g4_s18 ? (64u + sizeof(_g4_t_v51)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v52)) > _g4_s19 ? (68u + sizeof(_g4_t_v52)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v53)) > _g4_s20 ? (72u + sizeof(_g4_t_v53)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v54)) > _g4_s21 ? (76u + sizeof(_g4_t_v54)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v55)) > _g4_s22 ? (80u + sizeof(_g4_t_v55)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v56)) > _g4_s23 ? (92u + sizeof(_g4_t_v56)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 46u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 52u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 56u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 68u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 72u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 76u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 80u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 92u);

  v39 = a1[102];
  v47 = a1[92];
  v2 = a1[94];
  if ( a1[63] == 0 )
  {
    if ( *(uint8_t *)(v39 + 8) != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  v3 = a1[102];
  if ( *(uint32_t *)(v39 + 40) != 0 )
    goto LABEL_3;
  *(uint32_t *)(a1[101] + 20) += *(uint32_t *)(v39 + 16) / 8;
  *(uint32_t *)(v39 + 16) = 0;
  v35 = v2;
  v28 = (*(int (**)(uint32_t *))(a1[101] + 8))(a1);
  result = 0;
  LOBYTE(v2) = v35;
  if ( v28 == 0 )
    return result;
  if ( (int)a1[73] > 0 )
  {
    v29 = 0;
    do
      *(uint32_t *)(v39 + 4 * v29++ + 24) = 0;
    while ( v29 < a1[73] );
  }
  *(uint32_t *)(v39 + 20) = 0;
  *(uint32_t *)(v39 + 40) = a1[63];
  if ( a1[95] != 0 )
  {
    v3 = v39;
LABEL_3:
    if ( *(uint8_t *)(v3 + 8) != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  *(uint8_t *)(v39 + 8) = 0;
LABEL_7:
  v55 = a1;
  v42 = 1 << v2;
  v40 = 0;
  v38 = -1 << v2;
  v5 = (int *)a1[6];
  v46 = *(uint32_t *)(v39 + 12);
  v6 = *v5;
  v52 = v5[1];
  v51 = v6;
  v7 = *(uint32_t *)(v39 + 16);
  v37 = *(uint32_t *)(v39 + 20);
  v45 = *a2;
  v41 = *(uint32_t *)(v39 + 60);
  v8 = a1[91];
  if ( v37 != 0 )
    goto LABEL_37;
  if ( v47 < v8 )
    goto LABEL_32;
  v40 = 0;
  do
  {
    if ( v7 <= 7 )
    {
      if ( (uint8_t)jpeg_fill_bit_buffer(&v51, v46, v7, 0) == 0 )
        goto LABEL_69;
      v7 = v54;
      v46 = v53;
      v48 = 1;
      if ( v54 <= 7 )
        goto LABEL_51;
    }
    v48 = 9;
    v9 = (uint8_t)(v46 >> (v7 - 8));
    v10 = *(uint32_t *)(v41 + 4 * v9 + 144);
    if ( v10 != 0 )
    {
      v7 -= v10;
      v11 = *(uint8_t *)(v41 + v9 + 1168);
    }
    else
    {
LABEL_51:
      v11 = jpeg_huff_decode(&v51, v46, v7, v41, v48);
      if ( v11 < 0 )
        goto LABEL_69;
      v7 = v54;
      v46 = v53;
    }
    v12 = v11 >> 4;
    v13 = v11 & 0xF;
    v49 = v12;
    v43 = v13;
    if ( v13 != 0 )
    {
      if ( v13 != 1 )
      {
        *(uint32_t *)(*a1 + 20) = 118;
        G4_VCALL<void>(a1, 4, -1);
      }
      if ( v7 <= 0 )
      {
        if ( (uint8_t)jpeg_fill_bit_buffer(&v51, v46, v7, 1) == 0 )
          goto LABEL_69;
        v7 = v54;
        v46 = v53;
      }
      --v7;
      v14 = v46;
      if ( !_bittest(&v14, (uint8_t)v7) )
      {
        v15 = (uint32_t *)(uintptr_t)(jpeg_natural_order);
        v43 = v38;
        goto LABEL_26;
      }
      v43 = v42;
      goto LABEL_54;
    }
    if ( v12 != 15 )
    {
      v20 = 1 << v12;
      v37 = 1 << v12;
      if ( v12 != 0 )
      {
        if ( v7 < v12 )
        {
          v32 = jpeg_fill_bit_buffer(&v51, v46, v7, v12);
          v20 = 1 << v49;
          if ( v32 == 0 )
          {
LABEL_69:
            if ( v40 != 0 )
            {
              v30 = &v56[4 * v40];
              do
              {
                v31 = *(uint32_t *)v30;
                v30 -= 4;
                *(uint16_t *)(v45 + 2 * v31) = 0;
              }
              while ( v30 != v56 );
            }
            return 0;
          }
          v7 = v54;
          v46 = v53;
        }
        v7 -= v49;
        v37 = v20 + ((v20 - 1) & (v46 >> v7));
      }
      if ( v37 == 0 )
        break;
LABEL_37:
      if ( v47 >= v8 )
      {
        v21 = (uint32_t *)(uintptr_t)(jpeg_natural_order);
        v22 = v7;
        do
        {
          v25 = (int16_t *)(v45 + 2 * v21[v8]);
          if ( *v25 != 0 )
          {
            if ( v22 <= 0 )
            {
              v33 = v21;
              v26 = jpeg_fill_bit_buffer(&v51, v46, v22, 1);
              v21 = v33;
              if ( v26 == 0 )
                goto LABEL_69;
              v46 = v53;
              v22 = v54;
            }
            --v22;
            v23 = v46;
            if ( _bittest(&v23, (uint8_t)v22) )
            {
              v50 = *v25;
              if ( (*v25 & v42) == 0 )
              {
                if ( v50 < 0 )
                  v24 = v38 + v50;
                else
                  v24 = v42 + v50;
                *v25 = v24;
              }
            }
          }
          ++v8;
        }
        while ( v47 >= v8 );
        v7 = v22;
      }
      --v37;
      break;
    }
LABEL_54:
    v15 = (uint32_t *)(uintptr_t)(jpeg_natural_order);
    do
    {
LABEL_26:
      v18 = (int16_t *)(v45 + 2 * v15[v8]);
      if ( *v18 != 0 )
      {
        if ( v7 <= 0 )
        {
          v36 = (int16_t *)(v45 + 2 * v15[v8]);
          v34 = v15;
          v27 = jpeg_fill_bit_buffer(&v51, v46, v7, 1);
          v18 = v36;
          v15 = v34;
          if ( v27 == 0 )
            goto LABEL_69;
          v7 = v54;
          v46 = v53;
        }
        --v7;
        v16 = v46;
        if ( _bittest(&v16, (uint8_t)v7) )
        {
          v44 = *v18;
          if ( (*v18 & v42) == 0 )
          {
            if ( v44 < 0 )
              v17 = v38 + v44;
            else
              v17 = v42 + v44;
            *v18 = v17;
          }
        }
        goto LABEL_25;
      }
      if ( --v49 == -1 )
        break;
LABEL_25:
      ++v8;
    }
    while ( v47 >= v8 );
    if ( v43 != 0 )
    {
      v19 = v15[v8];
      *(uint16_t *)(v45 + 2 * v19) = v43;
      *(uint32_t *)&v56[4 * v40++ + 4] = v19;
    }
    ++v8;
  }
  while ( v47 >= v8 );
  v6 = v51;
  v5 = (int *)a1[6];
LABEL_32:
  *v5 = v6;
  *(uint32_t *)(a1[6] + 4) = v52;
  *(uint32_t *)(v39 + 12) = v46;
  *(uint32_t *)(v39 + 16) = v7;
  *(uint32_t *)(v39 + 20) = v37;
LABEL_4:
  result = 1;
  --*(uint32_t *)(v39 + 40);
  return result;
}



// ============================================================================
// Address:   0xf95f20 (size: 290 bytes)
// Symbol:    sub_F95F20
// Demangled: sub_F95F20
// ============================================================================
int (*sub_F95F20(int a1, int a2))(int, int, int, int, int, int)
{
  int (*result)(int, int, int, int, int, int);
  uint32_t *v3;

  result = (int (*)(int, int, int, int, int, int))a1;
  v3 = *(uint32_t **)(a1 + 396);
  if ( a2 == 2 )
  {
    if ( v3[2] == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 4;
      (**(void (***)(int))a1)(a1);
    }
    result = (int (*)(int, int, int, int, int, int))sub_F96200;
    v3[1] = (uint32_t)(uintptr_t)(sub_F96200);
  }
  else if ( a2 == 3 )
  {
    if ( v3[2] == 0 )
    {
      *(uint32_t *)(*(uint32_t *)a1 + 20) = 4;
      (**(void (***)(int))a1)(a1);
    }
    result = (int (*)(int, int, int, int, int, int))(uintptr_t)(sub_F96100);
    v3[1] = (uint32_t)(uintptr_t)(sub_F96100);
  }
  else if ( a2 != 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 4;
    result = (int (*)(int, int, int, int, int, int))(**(int (***)(int))a1)(a1);
  }
  else if ( *(uint8_t *)(a1 + 74) != 0 )
  {
    v3[1] = (uint32_t)(uintptr_t)(sub_F96050);
    if ( v3[3] == 0 )
    {
      result = (int (*)(int, int, int, int, int, int))(*(int (**)(int, uint32_t, uint32_t, uint32_t, int))(*(uint32_t *)(a1 + 4) + 28))(
                                                                a1,
                                                                v3[2],
                                                                0,
                                                                v3[4],
                                                                1);
      v3[3] = (uint32_t)(uintptr_t)(result);
    }
  }
  else
  {
    result = *(int (**)(int, int, int, int, int, int))(*(uint32_t *)(a1 + 416) + 4);
    v3[1] = (uint32_t)(uintptr_t)(result);
  }
  v3[6] = 0;
  v3[5] = 0;
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_F96050  (binary VA: 0xf96050)
// Original: sub_F96050
// ----------------------------------------------------------------------------
int sub_F96050(uint32_t *a1, int a2, int a3, int a4, int a5, uint32_t *a6, int a7)
{
  int v7;
  unsigned int v8;
  int result;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v10 = 0;
  v7 = a1[99];
  v8 = a7 - *a6;
  if ( v8 > *(uint32_t *)(v7 + 16) )
    v8 = *(uint32_t *)(v7 + 16);
  (*(void (**)(uint32_t *, int, int, int, uint32_t, int *, unsigned int))(a1[104] + 4))(
    a1,
    a2,
    a3,
    a4,
    *(uint32_t *)(v7 + 12),
    &v10,
    v8);
  (*(void (**)(uint32_t *, uint32_t, int, int))(a1[106] + 4))(a1, *(uint32_t *)(v7 + 12), a5 + 4 * *a6, v10);
  result = v10;
  *a6 += v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F96100  (binary VA: 0xf96100)
// Original: sub_F96100
// ----------------------------------------------------------------------------
unsigned int sub_F96100(uint32_t *a1, int a2, int a3, int a4, int a5, uint32_t *a6)
{
  uint32_t *v6;
  unsigned int v7;
  int v8;
  unsigned int result;
  unsigned int v10;
  unsigned int v11;

  v6 = (uint32_t *)a1[99];
  v7 = v6[6];
  if ( v7 != 0 )
  {
    v8 = v6[3];
  }
  else
  {
    v8 = (*(int (**)(uint32_t *, uint32_t, uint32_t, uint32_t, int))(a1[1] + 28))(a1, v6[2], v6[5], v6[4], 1);
    v6[3] = v8;
    v7 = v6[6];
  }
  (*(void (**)(uint32_t *, int, int, int, int, uint32_t *, uint32_t))(a1[104] + 4))(a1, a2, a3, a4, v8, v6 + 6, v6[4]);
  result = v6[6];
  if ( result > v7 )
  {
    v11 = result - v7;
    (*(void (**)(uint32_t *, unsigned int, uint32_t, unsigned int))(a1[106] + 4))(
      a1,
      v6[3] + 4 * v7,
      0,
      result - v7);
    *a6 += v11;
    result = v6[6];
  }
  v10 = v6[4];
  if ( v10 <= result )
  {
    v6[5] += v10;
    v6[6] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F96200  (binary VA: 0xf96200)
// Original: sub_F96200
// ----------------------------------------------------------------------------
unsigned int sub_F96200(uint32_t *a1, int a2, int a3, int a4, int a5, int *a6, int a7)
{
  uint32_t *v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int result;
  unsigned int v12;
  int v13;
  unsigned int v14;
  int v15;

  v7 = (uint32_t *)a1[99];
  v8 = v7[6];
  if ( v8 != 0 )
  {
    v15 = v7[3];
  }
  else
  {
    v15 = (*(int (**)(uint32_t *, uint32_t, uint32_t, uint32_t, uint32_t))(a1[1] + 28))(a1, v7[2], v7[5], v7[4], 0);
    v7[3] = v15;
    v8 = v7[6];
  }
  v9 = v7[4] - v8;
  v13 = *a6;
  v10 = a1[24] - v7[5];
  if ( a7 - *a6 <= v10 )
    v10 = a7 - v13;
  if ( v10 <= v9 )
    v9 = v10;
  v14 = v9;
  (*(void (**)(uint32_t *, int, int, unsigned int))(a1[106] + 4))(a1, v15 + 4 * v8, a5 + 4 * v13, v9);
  *a6 += v14;
  result = v7[6] + v14;
  v12 = v7[4];
  v7[6] = result;
  if ( result >= v12 )
  {
    v7[5] += v12;
    v7[6] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F96400  (binary VA: 0xf96400)
// Original: sub_F96400
// ----------------------------------------------------------------------------
int sub_F96400(uint32_t *a1)
{
  int v1;
  int result;

  v1 = a1[104];
  *(uint32_t *)(v1 + 92) = a1[69];
  result = a1[24];
  *(uint32_t *)(v1 + 96) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F96420  (binary VA: 0xf96420)
// Original: sub_F96420
// ----------------------------------------------------------------------------
uint32_t * sub_F96420(int *a1, int a2, uint32_t *a3, int a4, int a5, uint32_t *a6, int a7)
{
  int *v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  uint32_t *result;
  signed int v14;
  int v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int *v20;
  int v21;
  int v22;

  v7 = a1;
  v8 = a1[104];
  v9 = a1[69];
  v10 = *(uint32_t *)(v8 + 92);
  if ( v10 >= v9 )
  {
    if ( a1[9] > 0 )
    {
      v15 = a1[104];
      v16 = a1[49];
      v17 = 0;
      v22 = v15;
      v18 = a1;
      do
      {
        v20 = v18;
        (*(void (**)(int *, int, int, int))(v15 + 52))(
          v18,
          v16,
          *(uint32_t *)(a2 + 4 * v17) + *(uint32_t *)(v15 + 100) * 4 * *a3,
          v22 + 4 * v17 + 12);
        v18 = v20;
        ++v17;
        v16 += 84;
        v15 += 4;
      }
      while ( v20[9] > v17 );
      v8 = v22;
      v7 = v20;
    }
    *(uint32_t *)(v8 + 92) = 0;
    v21 = 0;
    v9 = v7[69];
    v10 = 0;
  }
  else
  {
    v21 = *(uint32_t *)(v8 + 92);
  }
  v11 = v9 - v10;
  v12 = *(uint32_t *)(v8 + 96);
  if ( a7 - *a6 <= v12 )
    v12 = a7 - *a6;
  if ( v12 > v11 )
    v12 = v11;
  v19 = v8;
  (*(void (**)(int *, int, int, int, unsigned int))(v7[105] + 4))(v7, v8 + 12, v21, a5 + 4 * *a6, v12);
  result = a6;
  *a6 += v12;
  *(uint32_t *)(v19 + 96) -= v12;
  v14 = *(uint32_t *)(v19 + 92) + v12;
  *(uint32_t *)(v19 + 92) = v14;
  if ( v14 >= v7[69] )
    ++*a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F96540  (binary VA: 0xf96540)
// Original: sub_F96540
// ----------------------------------------------------------------------------
uint32_t * sub_F96540(int a1, int a2, int a3, uint32_t *a4)
{
  *a4 = a3;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: sub_F96550  (binary VA: 0xf96550)
// Original: sub_F96550
// ----------------------------------------------------------------------------
uint32_t * sub_F96550(int a1, int a2, int a3, uint32_t *a4)
{
  *a4 = 0;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: sub_F96560  (binary VA: 0xf96560)
// Original: sub_F96560
// ----------------------------------------------------------------------------
unsigned int sub_F96560(unsigned int a1, int a2, int a3, int *a4)
{
  unsigned int result;
  int v5;
  uint8_t *v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  __m128i v10;
  uint8_t *v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  uint8_t *v18;

  v13 = *a4;
  result = a1;
  v5 = *(uint32_t *)(a1 + 276);
  if ( v5 > 0 )
  {
    v15 = 0;
    while ( 1 )
    {
      v6 = *(uint8_t **)(a3 + 4 * v15);
      result = *(uint32_t *)(v13 + 4 * v15);
      if ( result < *(uint32_t *)(a1 + 92) + result )
        break;
LABEL_13:
      if ( ++v15 >= v5 )
        return result;
    }
    v7 = result + 2;
    v17 = ((unsigned int)(*(uint32_t *)(a1 + 92) - 1) >> 1) + 1;
    v14 = 16 * (v17 >> 4);
    if ( v14 != 0 )
    {
      if ( ((unsigned int)(uintptr_t)(v6) > result + 2 * v17 || result > (unsigned int)(uintptr_t)(&v6[v17])) && v17 > 0xF )
      {
        v16 = *(uint32_t *)(a1 + 92) + *(uint32_t *)(v13 + 4 * v15);
        v8 = 0;
        v9 = 0;
        do
        {
          v10 = *(__m128i *)&v6[v8];
          ++v9;
          *(__m128i *)(result + 2 * v8) = _mm_unpacklo_epi8(v10, v10);
          *(__m128i *)(result + 2 * v8 + 16) = _mm_unpackhi_epi8(v10, v10);
          v8 += 16;
        }
        while ( v17 >> 4 > v9 );
        v6 += v14;
        result += 32 * (v17 >> 4);
        if ( v17 == v14 )
          goto LABEL_12;
        v7 = result + 2;
        v11 = (uint8_t *)result;
      }
      else
      {
        v16 = *(uint32_t *)(a1 + 92) + *(uint32_t *)(v13 + 4 * v15);
        v7 = result + 2;
        v11 = *(uint8_t **)(v13 + 4 * v15);
      }
    }
    else
    {
      v16 = *(uint32_t *)(a1 + 92) + *(uint32_t *)(v13 + 4 * v15);
      v11 = *(uint8_t **)(v13 + 4 * v15);
    }
    while ( 1 )
    {
      v12 = *v6++;
      result = v12;
      *v11 = v12;
      v11[1] = v12;
      v18 = (uint8_t *)v7;
      if ( v16 <= v7 )
        break;
      v7 += 2;
      v11 = v18;
    }
LABEL_12:
    v5 = *(uint32_t *)(a1 + 276);
    goto LABEL_13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F966C0  (binary VA: 0xf966c0)
// Original: sub_F966C0
// ----------------------------------------------------------------------------
int sub_F966C0(int a1, int a2, int a3, int *a4)
{
  int result;
  uint8_t *v5;
  uint8_t *v6;
  uint8_t v7;
  uint8_t *v8;
  int v9;
  unsigned int v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  __m128i v42;
  __m128i v43;
  __m128i v44;
  __m128i v45;
  __m128i v46;
  __m128i v47;
  __m128i v48;
  __m128i v49;
  __m128i v50;
  __m128i v51;
  __m128i v52;
  __m128i v53;
  __m128i v54;
  __m128i v55;
  int v56;
  uint8_t *v57;
  uint8_t *v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  uint8_t *v65;
  unsigned int v66;
  __m128i v67;
  __m128i v68;
  __m128i v69;
  uint8_t *v70;

  v62 = *a4;
  result = a1;
  if ( *(int *)(a1 + 276) > 0 )
  {
    v64 = 0;
    while ( 1 )
    {
      v5 = *(uint8_t **)(a3 + 4 * v64);
      v6 = *(uint8_t **)(v62 + 4 * v64);
      v7 = *v5;
      *v6 = *v5;
      v65 = v5 + 1;
      v6[1] = (3 * v7 + v5[1] + 2) >> 2;
      v8 = v6 + 2;
      v66 = *(uint32_t *)(a2 + 40) - 2;
      if ( *(uint32_t *)(a2 + 40) != 2 )
        break;
LABEL_13:
      ++v64;
      v60 = *(v65 - 1);
      v61 = *v65;
      v8[1] = *v65;
      result = a1;
      *v8 = (3 * v61 + v60 + 1) >> 2;
      if ( *(uint32_t *)(a1 + 276) <= v64 )
        return result;
    }
    v63 = 16 * (v66 >> 4);
    if ( v63 != 0
      && (v8 > &v5[v66 + 2] || v5 + 2 > &v8[2 * *(uint32_t *)(a2 + 40) - 4])
      && (v5 > &v8[2 * *(uint32_t *)(a2 + 40) - 4] || v8 > &v5[v66])
      && (v65 > &v8[2 * *(uint32_t *)(a2 + 40) - 4] || v8 > &v65[v66])
      && v66 > 0xF )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        v11 = _mm_unpackhi_epi8(*(__m128i *)&v5[v9 + 1], g4_m128_from<__m128i>(0LL));
        v12 = _mm_unpacklo_epi8(*(__m128i *)&v5[v9 + 1], g4_m128_from<__m128i>(0LL));
        v13 = _mm_unpacklo_epi16(v12, g4_m128_from<__m128i>(0LL));
        ++v10;
        v14 = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(v13, G4_BITCAST<__m128i>(xmmword_1C7C730)), 8),
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v13, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C730), 4)), 8));
        v15 = _mm_unpackhi_epi16(v12, g4_m128_from<__m128i>(0LL));
        v16 = _mm_unpacklo_epi16(v11, g4_m128_from<__m128i>(0LL));
        v69 = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(v15, G4_BITCAST<__m128i>(xmmword_1C7C730)), 8),
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v15, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C730), 4)), 8));
        v67 = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(v16, G4_BITCAST<__m128i>(xmmword_1C7C730)), 8),
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C730), 4), _mm_srli_si128(v16, 4)), 8));
        v17 = _mm_unpackhi_epi16(v11, g4_m128_from<__m128i>(0LL));
        v18 = *(__m128i *)&v5[v9];
        v68 = _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(v17, G4_BITCAST<__m128i>(xmmword_1C7C730)), 8),
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_si128(v17, 4), _mm_srli_si128(G4_BITCAST<__m128i>(xmmword_1C7C730), 4)), 8));
        v19 = _mm_unpacklo_epi8(v18, g4_m128_from<__m128i>(0LL));
        v20 = _mm_unpackhi_epi8(v18, g4_m128_from<__m128i>(0LL));
        v21 = v19;
        v22 = _mm_srai_epi32(
                _mm_add_epi32(_mm_add_epi32(_mm_unpackhi_epi16(v19, g4_m128_from<__m128i>(0LL)), v69), G4_BITCAST<__m128i>(xmmword_1C7C740)),
                2u);
        v23 = _mm_srai_epi32(
                _mm_add_epi32(_mm_add_epi32(_mm_unpacklo_epi16(v21, g4_m128_from<__m128i>(0LL)), v14), G4_BITCAST<__m128i>(xmmword_1C7C740)),
                2u);
        v24 = _mm_unpacklo_epi16(v23, v22);
        v25 = _mm_unpackhi_epi16(v23, v22);
        v26 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v24, v25), _mm_unpackhi_epi16(v24, v25));
        v27 = _mm_unpacklo_epi16(v20, g4_m128_from<__m128i>(0LL));
        v28 = _mm_srai_epi32(
                _mm_add_epi32(_mm_add_epi32(_mm_unpackhi_epi16(v20, g4_m128_from<__m128i>(0LL)), v68), G4_BITCAST<__m128i>(xmmword_1C7C740)),
                2u);
        v29 = _mm_srai_epi32(_mm_add_epi32(_mm_add_epi32(v27, v67), G4_BITCAST<__m128i>(xmmword_1C7C740)), 2u);
        v30 = _mm_unpacklo_epi16(v29, v28);
        v31 = _mm_unpackhi_epi16(v29, v28);
        v32 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v30, v31), _mm_unpackhi_epi16(v30, v31));
        v33 = _mm_unpackhi_epi8(v26, v32);
        v34 = _mm_unpacklo_epi8(v26, v32);
        v35 = _mm_unpacklo_epi8(v34, v33);
        v36 = _mm_unpackhi_epi8(v34, v33);
        v37 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v35, v36), _mm_unpackhi_epi8(v35, v36));
        v38 = _mm_unpacklo_epi8(*(__m128i *)&v5[v9 + 2], g4_m128_from<__m128i>(0LL));
        v39 = _mm_srai_epi32(
                _mm_add_epi32(_mm_add_epi32(_mm_unpackhi_epi16(v38, g4_m128_from<__m128i>(0LL)), v69), G4_BITCAST<__m128i>(xmmword_1C7C750)),
                2u);
        v40 = _mm_unpackhi_epi8(*(__m128i *)&v5[v9 + 2], g4_m128_from<__m128i>(0LL));
        v41 = _mm_srai_epi32(
                _mm_add_epi32(_mm_add_epi32(v14, _mm_unpacklo_epi16(v38, g4_m128_from<__m128i>(0LL))), G4_BITCAST<__m128i>(xmmword_1C7C750)),
                2u);
        v42 = _mm_unpacklo_epi16(v41, v39);
        v43 = _mm_unpackhi_epi16(v41, v39);
        v44 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v42, v43), _mm_unpackhi_epi16(v42, v43));
        v45 = _mm_unpacklo_epi16(v40, g4_m128_from<__m128i>(0LL));
        v46 = _mm_srai_epi32(
                _mm_add_epi32(_mm_add_epi32(_mm_unpackhi_epi16(v40, g4_m128_from<__m128i>(0LL)), v68), G4_BITCAST<__m128i>(xmmword_1C7C750)),
                2u);
        v47 = _mm_srai_epi32(_mm_add_epi32(_mm_add_epi32(v45, v67), G4_BITCAST<__m128i>(xmmword_1C7C750)), 2u);
        v48 = _mm_unpacklo_epi16(v47, v46);
        v49 = _mm_unpackhi_epi16(v47, v46);
        v50 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v48, v49), _mm_unpackhi_epi16(v48, v49));
        v51 = _mm_unpackhi_epi8(v44, v50);
        v52 = _mm_unpacklo_epi8(v44, v50);
        v53 = _mm_unpacklo_epi8(v52, v51);
        v54 = _mm_unpackhi_epi8(v52, v51);
        v55 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v53, v54), _mm_unpackhi_epi8(v53, v54));
        *(__m128i *)&v8[2 * v9] = _mm_unpacklo_epi8(v37, v55);
        *(__m128i *)&v8[2 * v9 + 16] = _mm_unpackhi_epi8(v37, v55);
        v9 += 16;
      }
      while ( v10 < v66 >> 4 );
      v56 = v66 - v63;
      v57 = &v65[v63];
      v58 = &v8[32 * (v66 >> 4)];
      if ( v66 == v63 )
      {
LABEL_12:
        v65 += v66;
        v8 += 2 * v66;
        goto LABEL_13;
      }
      v70 = v8;
    }
    else
    {
      v56 = *(uint32_t *)(a2 + 40) - 2;
      v58 = v8;
      v57 = v65;
      v70 = v8;
    }
    do
    {
      v59 = *v57++;
      *v58 = (3 * v59 + *(v57 - 2) + 1) >> 2;
      --v56;
      v58[1] = (3 * v59 + *v57 + 2) >> 2;
      v58 += 2;
    }
    while ( v56 != 0 );
    v8 = v70;
    goto LABEL_12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F96B30  (binary VA: 0xf96b30)
// Original: sub_F96B30
// ----------------------------------------------------------------------------
int sub_F96B30(int a1, int a2, int a3, int *a4)
{
  int result;
  uint8_t *v5;
  uint8_t *v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  uint8_t *v13;
  uint8_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint8_t *v19;
  int i;
  int v21;
  int v22;
  int v23;

  result = *a4;
  if ( *(int *)(a1 + 276) > 0 )
  {
    v23 = *a4;
    v22 = 0;
    do
    {
      for ( i = 0; i != 2; ++i )
      {
        v5 = *(uint8_t **)(a3 + 2 * v22);
        if ( i != 0 )
          v6 = *(uint8_t **)(a3 + 2 * v22 + 4);
        else
          v6 = *(uint8_t **)(a3 + 2 * v22 - 4);
        v7 = *(uint8_t **)(v23 + 4 * i);
        v8 = 3 * *v5 + *v6;
        v9 = v6[1] + 3 * v5[1];
        *v7 = (4 * v8 + 8) >> 4;
        v7[1] = (v9 + 3 * v8 + 7) >> 4;
        v19 = v7 + 2;
        v10 = v8;
        v21 = *(uint32_t *)(a2 + 40) - 2;
        v16 = v21;
        v11 = v9;
        if ( *(uint32_t *)(a2 + 40) != 2 )
        {
          v12 = v5 + 2;
          v18 = v8;
          v13 = v6 + 2;
          v10 = v9;
          v14 = v19;
          while ( 1 )
          {
            v15 = *v13++;
            v17 = 3 * *v12 + v15;
            *v14 = (v18 + 3 * v10 + 8) >> 4;
            v14[1] = (v17 + 3 * v10 + 7) >> 4;
            v14 += 2;
            if ( --v16 == 0 )
              break;
            v18 = v10;
            ++v12;
            v10 = v17;
          }
          v19 += 2 * v21;
          v11 = v17;
        }
        *v19 = (v10 + 3 * v11 + 8) >> 4;
        v19[1] = (4 * v11 + 7) >> 4;
      }
      v22 += 2;
      v23 += 8;
      result = v22;
    }
    while ( *(uint32_t *)(a1 + 276) > v22 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F96CC0  (binary VA: 0xf96cc0)
// Original: sub_F96CC0
// ----------------------------------------------------------------------------
int sub_F96CC0(size_t *a1, int a2, uint8_t **a3, int *a4)
{
  size_t v4;
  int v5;
  unsigned int v6;
  int result;
  int v8;
  uint8_t *v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  uint8_t *v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i *v17;
  uint8_t *v18;
  bool v19;
  uint8_t *v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned int v25;
  int v26;
  int v27;
  unsigned int v28;
  uint8_t *i;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;

  v4 = a1[104];
  v21 = *a4;
  v5 = *(uint32_t *)(a2 + 4);
  v6 = *(uint8_t *)(v4 + v5 + 140);
  result = *(uint8_t *)(v4 + v5 + 150);
  v22 = result;
  if ( (int)a1[69] > 0 )
  {
    v26 = 0;
    v28 = v6;
    v8 = 0;
    do
    {
      v9 = *a3;
      v10 = *(uint32_t *)(v21 + 4 * v8);
      for ( i = (uint8_t *)(v10 + a1[23]); v10 < (unsigned int)(uintptr_t)(i); v10 += v28 )
      {
        while ( 1 )
        {
          v11 = *v9++;
          if ( v6 != 0 )
            break;
          if ( v10 >= (unsigned int)(uintptr_t)(i) )
            goto LABEL_20;
        }
        v32 = v6;
        v20 = (uint8_t *)v10;
        v12 = -v10 & 0xF;
        if ( v12 > v28 )
          v12 = v28;
        v33 = v12;
        if ( v12 == 0 )
          goto LABEL_25;
        v30 = 0;
        v13 = (uint8_t *)v10;
        do
        {
          ++v30;
          --v32;
          *v13++ = v11;
        }
        while ( v33 > v30 );
        v20 = v13;
        if ( v28 != v33 )
        {
LABEL_25:
          v25 = v28 - v33;
          v31 = (v28 - v33) >> 4;
          v27 = 16 * v31;
          if ( 16 * v31 == 0 )
            goto LABEL_17;
          v14 = _mm_cvtsi32_si128(v11);
          v15 = _mm_unpacklo_epi8(v14, v14);
          v23 = v6;
          v16 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v15, v15), 0);
          v17 = (__m128i *)(v10 + v33);
          v34 = 0;
          do
          {
            ++v34;
            *v17++ = v16;
          }
          while ( v31 > v34 );
          v20 += v27;
          v32 -= v27;
          v6 = v23;
          if ( v25 != v27 )
          {
LABEL_17:
            v18 = v20;
            do
            {
              v19 = v32-- == 1;
              *v18++ = v11;
            }
            while ( !v19 );
          }
        }
      }
LABEL_20:
      if ( v22 > 1 )
        jcopy_sample_rows(v21, v26, v21, v26 + 1, v22 - 1, a1[23]);
      result = v22;
      ++a3;
      v26 += v22;
      v8 = v26;
    }
    while ( (int)a1[69] > v26 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F96ED0  (binary VA: 0xf96ed0)
// Original: sub_F96ED0
// ----------------------------------------------------------------------------
int sub_F96ED0(int a1, int a2, int a3, int *a4)
{
  int result;
  char *v5;
  unsigned int v6;
  size_t v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  __m128i v12;
  uint8_t *v13;
  uint8_t *v14;
  char v15; // di
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  uint8_t *v20;
  int v21;

  v16 = *a4;
  result = a1;
  if ( *(int *)(a1 + 276) > 0 )
  {
    v21 = 0;
    while ( 1 )
    {
      v5 = *(char **)(a3 + 2 * v21);
      v6 = *(uint32_t *)(v16 + 4 * v21);
      v7 = *(uint32_t *)(a1 + 92);
      v8 = v6 + v7;
      if ( v6 < v6 + v7 )
        break;
LABEL_13:
      result = (int)(uintptr_t)(jcopy_sample_rows(v16, v21, v16, v21 + 1, 1, v7));
      v21 += 2;
      if ( *(uint32_t *)(a1 + 276) <= v21 )
        return result;
    }
    v9 = v6 + 2;
    v19 = ((v8 + 1 - (v6 + 2)) >> 1) + 1;
    v17 = 16 * (v19 >> 4);
    if ( v17 != 0 )
    {
      if ( ((unsigned int)(uintptr_t)(v5) > v6 + 2 * v19 || v6 > (unsigned int)(uintptr_t)(&v5[v19])) && v19 > 0xF )
      {
        v18 = v8;
        v10 = 0;
        v11 = 0;
        do
        {
          v12 = *(__m128i *)&v5[v10];
          ++v11;
          *(__m128i *)(v6 + 2 * v10) = _mm_unpacklo_epi8(v12, v12);
          *(__m128i *)(v6 + 2 * v10 + 16) = _mm_unpackhi_epi8(v12, v12);
          v10 += 16;
        }
        while ( v19 >> 4 > v11 );
        v5 += v17;
        v13 = (uint8_t *)(v6 + 32 * (v19 >> 4));
        if ( v19 == v17 )
          goto LABEL_12;
        v9 = (unsigned int)(uintptr_t)(v13 + 2);
        v14 = v13;
      }
      else
      {
        v18 = v8;
        v9 = v6 + 2;
        v14 = *(uint8_t **)(v16 + 4 * v21);
      }
    }
    else
    {
      v18 = v8;
      v14 = *(uint8_t **)(v16 + 4 * v21);
    }
    while ( 1 )
    {
      v15 = *v5++;
      *v14 = v15;
      v14[1] = v15;
      v20 = (uint8_t *)v9;
      if ( v18 <= v9 )
        break;
      v9 += 2;
      v14 = v20;
    }
LABEL_12:
    v7 = *(uint32_t *)(a1 + 92);
    goto LABEL_13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F97320  (binary VA: 0xf97320)
// Original: sub_F97320
// ----------------------------------------------------------------------------
int sub_F97320(int *a1, int a2)
{
  int result;
  int v3;
  int v4;

  result = a2;
  v3 = *a1;
  if ( a2 < 0 )
  {
    v4 = *(uint32_t *)(v3 + 108);
    if ( v4 == 0 || *(int *)(v3 + 104) > 2 )
    {
      (*(void (**)(int *))(v3 + 8))(a1);
      v4 = *(uint32_t *)(v3 + 108);
    }
    result = v4 + 1;
    *(uint32_t *)(v3 + 108) = result;
  }
  else if ( a2 <= *(uint32_t *)(v3 + 104) )
  {
    return (*(int (**)(int *))(v3 + 8))(a1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F97380  (binary VA: 0xf97380)
// Original: sub_F97380
// ----------------------------------------------------------------------------
int sub_F97380(int *a1)
{
  int result;

  *(uint32_t *)(*a1 + 108) = 0;
  result = *a1;
  *(uint32_t *)(*a1 + 20) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F973A0  (binary VA: 0xf973a0)
// Original: sub_F973A0
// ----------------------------------------------------------------------------
int sub_F973A0(int a1, char *s)
{
  uint32_t *v2;
  int v3;
  const char *format;
  const char *i;
  int v7;
  int v8;

  v2 = *(uint32_t **)a1;
  v3 = *(uint32_t *)(*(uint32_t *)a1 + 20);
  if ( v3 <= 0 || v3 > v2[29] )
  {
    v7 = v2[30];
    if ( v7 == 0 )
      goto LABEL_16;
    v8 = v2[31];
    if ( v3 < v8 || v3 > v2[32] )
      goto LABEL_16;
    format = *(const char **)(v7 + 4 * (v3 - v8));
  }
  else
  {
    format = *(const char **)(v2[28] + 4 * v3);
  }
  if ( format == nullptr )
  {
LABEL_16:
    v2[6] = v3;
    format = *(const char **)v2[28];
  }
  for ( i = format; ; ++i )
  {
    if ( *i == 0 )
      return sprintf(s, format, v2[6], v2[7], v2[8], v2[9], v2[10], v2[11], v2[12], v2[13]);
    if ( *i == 37 )
      break;
  }
  if ( i[1] != 115 )
    return sprintf(s, format, v2[6], v2[7], v2[8], v2[9], v2[10], v2[11], v2[12], v2[13]);
  return sprintf(s, format, v2 + 6);
}

// ----------------------------------------------------------------------------
// Function: sub_F974A0  (binary VA: 0xf974a0)
// Original: sub_F974A0
// ----------------------------------------------------------------------------
int sub_F974A0(int a1)
{
  uint8_t v2[204];

  G4_VCALL<void>(a1, 12, v2);
  return fprintf(stderr, "%s\n", v2);
}

// ----------------------------------------------------------------------------
// Function: sub_F97510  (binary VA: 0xf97510)
// Original: sub_F97510
// ----------------------------------------------------------------------------
void sub_F97510(int a1)
{
  G4_VCALL<void>(a1, 8);
  jpeg_destroy(a1);
  exit(1);
}

// ----------------------------------------------------------------------------
// Function: sub_F975D0  (binary VA: 0xf975d0)
// Original: sub_F975D0
// ----------------------------------------------------------------------------
int sub_F975D0(uint32_t *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3;
  uint32_t *v4;
  unsigned int v5;
  uint32_t *small;
  unsigned int v7;
  unsigned int v8;
  int v9;
  unsigned int v11;
  int v12;
  uint32_t *v13;

  v3 = a3;
  v12 = a1[1];
  if ( a3 > 0x3B9AC9F4 )
  {
    *(uint32_t *)(*a1 + 20) = 54;
    *(uint32_t *)(*a1 + 24) = 1;
    G4_VCALL<void>(a1, 0);
  }
  if ( (a3 & 7) != 0 )
    v3 = a3 + 8 - (a3 & 7);
  if ( a2 > 1 )
  {
    *(uint32_t *)(*a1 + 20) = 14;
    *(uint32_t *)(*a1 + 24) = a2;
    G4_VCALL<void>(a1, 0);
  }
  v4 = *(uint32_t **)(v12 + 4 * (a2 + 12) + 4);
  if ( v4 == nullptr )
  {
    v13 = nullptr;
    v11 = v3 + 12;
LABEL_26:
    v7 = dword_1CBD720[a2];
    goto LABEL_15;
  }
  v5 = v4[2];
  small = *(uint32_t **)(v12 + 4 * (a2 + 12) + 4);
  if ( v3 <= v5 )
    goto LABEL_23;
  while ( 1 )
  {
    small = (uint32_t *)*v4;
    if ( *v4 == 0 )
      break;
    v5 = small[2];
    if ( v3 <= v5 )
      goto LABEL_23;
    v4 = (uint32_t *)*v4;
  }
  v13 = v4;
  v11 = v3 + 12;
  if ( v4 == nullptr )
    goto LABEL_26;
  v7 = dword_1CBD728[a2];
LABEL_15:
  v8 = 999999988 - v3;
  if ( v7 <= 999999988 - v3 )
    v8 = v7;
  while ( 1 )
  {
    small = (uint32_t *)jpeg_get_small((int)(uintptr_t)(a1), v8 + v11);
    if ( small != nullptr )
      break;
    v8 >>= 1;
    if ( v8 <= 0x31 )
    {
      *(uint32_t *)(*a1 + 20) = 54;
      *(uint32_t *)(*a1 + 24) = 2;
      G4_VCALL<void>(a1, 0);
    }
  }
  *(uint32_t *)(v12 + 76) += v8 + v11;
  *small = 0;
  small[1] = 0;
  small[2] = v3 + v8;
  if ( v13 != nullptr )
    *v13 = (uint32_t)(uintptr_t)(small);
  else
    *(uint32_t *)(v12 + 4 * (a2 + 12) + 4) = (uint32_t)(uintptr_t)(small);
  v5 = small[2];
LABEL_23:
  v9 = small[1];
  small[2] = v5 - v3;
  small[1] = v3 + v9;
  return (int)(uintptr_t)(small) + v9 + 12;
}

// ----------------------------------------------------------------------------
// Function: sub_F97770  (binary VA: 0xf97770)
// Original: sub_F97770
// ----------------------------------------------------------------------------
uint32_t * sub_F97770(uint32_t *a1, unsigned int a2)
{
  uint32_t *v2;
  unsigned int v3;
  uint32_t *v4;
  uint32_t *result;
  int v6;
  int i;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;

  v2 = (uint32_t *)a1[1];
  if ( a2 <= 1 )
  {
    if ( a2 == 1 )
    {
      for ( i = v2[17]; i != 0; i = *(uint32_t *)(i + 36) )
      {
        while ( *(uint8_t *)(i + 34) == 0 )
        {
          i = *(uint32_t *)(i + 36);
          if ( i == 0 )
            goto LABEL_18;
        }
        *(uint8_t *)(i + 34) = 0;
        (*(void (**)(uint32_t *, int))(i + 48))(a1, i + 40);
      }
LABEL_18:
      v8 = v2[18];
      for ( v2[17] = 0; v8 != 0; v8 = *(uint32_t *)(v8 + 36) )
      {
        while ( *(uint8_t *)(v8 + 34) == 0 )
        {
          v8 = *(uint32_t *)(v8 + 36);
          if ( v8 == 0 )
            goto LABEL_23;
        }
        *(uint8_t *)(v8 + 34) = 0;
        (*(void (**)(uint32_t *, int))(v8 + 48))(a1, v8 + 40);
      }
LABEL_23:
      v2[18] = 0;
    }
  }
  else
  {
    *(uint32_t *)(*a1 + 20) = 14;
    *(uint32_t *)(*a1 + 24) = a2;
    G4_VCALL<void>(a1, 0);
  }
  v3 = a2 + 12;
  v4 = (uint32_t *)v2[a2 + 15];
  v2[a2 + 15] = 0;
  if ( v4 != nullptr )
  {
    while ( 1 )
    {
      v11 = v4[2] + v4[1] + 12;
      v9 = (uint32_t *)*v4;
      jpeg_free_large(a1, v4);
      v2[19] -= v11;
      if ( v9 == nullptr )
        break;
      v4 = v9;
    }
  }
  result = (uint32_t *)v2[v3 + 1];
  v2[v3 + 1] = 0;
  if ( result != nullptr )
  {
    while ( 1 )
    {
      v10 = (uint32_t *)*result;
      v6 = result[2] + result[1] + 12;
      result = (uint32_t *)jpeg_free_small(a1, result);
      v2[19] -= v6;
      if ( v10 == nullptr )
        break;
      result = v10;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F978D0  (binary VA: 0xf978d0)
// Original: sub_F978D0
// ----------------------------------------------------------------------------
uint32_t * sub_F978D0(uint32_t *a1, unsigned int a2, unsigned int a3)
{
  int v3;
  int v4;
  uint32_t *large;
  int v6;

  v3 = a3;
  v4 = a1[1];
  if ( a3 > 0x3B9AC9F4 )
  {
    *(uint32_t *)(*a1 + 20) = 54;
    *(uint32_t *)(*a1 + 24) = 3;
    G4_VCALL<void>(a1, 0);
  }
  if ( (a3 & 7) != 0 )
    v3 = a3 + 8 - (a3 & 7);
  if ( a2 > 1 )
  {
    *(uint32_t *)(*a1 + 20) = 14;
    *(uint32_t *)(*a1 + 24) = a2;
    G4_VCALL<void>(a1, 0);
  }
  large = (uint32_t *)jpeg_get_large((int)(uintptr_t)(a1), v3 + 12);
  if ( large == nullptr )
  {
    *(uint32_t *)(*a1 + 20) = 54;
    *(uint32_t *)(*a1 + 24) = 4;
    G4_VCALL<void>(a1, 0);
    large = nullptr;
  }
  *(uint32_t *)(v4 + 76) += v3 + 12;
  v6 = *(uint32_t *)(v4 + 4 * (a2 + 12) + 12);
  large[1] = v3;
  *large = v6;
  large[2] = 0;
  *(uint32_t *)(v4 + 4 * (a2 + 12) + 12) = (uint32_t)(uintptr_t)(large);
  return large + 3;
}

// ----------------------------------------------------------------------------
// Function: sub_F979D0  (binary VA: 0xf979d0)
// Original: sub_F979D0
// ----------------------------------------------------------------------------
int sub_F979D0(int a1, int a2, unsigned int a3, unsigned int a4, char a5)
{
  uint32_t *v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  bool v18;
  uint32_t *v19;
  int v20;
  size_t v21;
  bool v23;
  int v24;
  int v25;
  int v26;
  int v27;
  void *v28;
  int v29;
  uint32_t *v30;
  unsigned int v31;
  int v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  int v37;

  v5 = (uint32_t *)a2;
  v34 = a4 + a3;
  if ( a4 + a3 > *(uint32_t *)(a2 + 4) || a4 > *(uint32_t *)(a2 + 12) || *(uint32_t *)a2 == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 22;
    (**(void (***)(int))a1)(a1);
  }
  v6 = *(uint32_t *)(a2 + 24);
  v31 = v6;
  if ( a3 >= v6 && v34 <= v6 + *(uint32_t *)(a2 + 16) )
  {
LABEL_31:
    v8 = *(uint32_t *)(a2 + 28);
    goto LABEL_32;
  }
  if ( *(uint8_t *)(a2 + 34) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 69;
    (**(void (***)(int))a1)(a1);
    v31 = *(uint32_t *)(a2 + 24);
  }
  if ( *(uint8_t *)(a2 + 33) != 0 )
  {
    v7 = *(uint32_t *)(a2 + 16);
    v33 = *(uint32_t *)(a2 + 8);
    v32 = v33;
    if ( v7 <= 0 )
    {
LABEL_71:
      v8 = *(uint32_t *)(a2 + 28);
    }
    else
    {
      v8 = *(uint32_t *)(a2 + 28);
      v24 = *(uint32_t *)(a2 + 16);
      if ( *(uint32_t *)(a2 + 20) <= v7 )
        v24 = *(uint32_t *)(a2 + 20);
      if ( v24 > (int)(*(uint32_t *)(a2 + 28) - v31) )
        v24 = *(uint32_t *)(a2 + 28) - v31;
      if ( v24 > (int)(*(uint32_t *)(a2 + 4) - v31) )
        v24 = *(uint32_t *)(a2 + 4) - v31;
      if ( v24 > 0 )
      {
        v25 = 0;
        v36 = v33 * v31;
        do
        {
          v26 = v24 * v33;
          (*(void (**)(int, int, uint32_t, int, int))(a2 + 44))(
            a1,
            a2 + 40,
            *(uint32_t *)(*(uint32_t *)a2 + 4 * v25),
            v36,
            v24 * v33);
          v27 = *(uint32_t *)(a2 + 20);
          v7 = *(uint32_t *)(a2 + 16);
          v25 += v27;
          v36 += v26;
          if ( v25 >= v7 )
          {
            v31 = *(uint32_t *)(a2 + 24);
            v33 = *(uint32_t *)(a2 + 8);
            v32 = v33;
            goto LABEL_71;
          }
          v24 = v7 - v25;
          if ( v7 - v25 > v27 )
            v24 = *(uint32_t *)(a2 + 20);
          v31 = *(uint32_t *)(a2 + 24);
          v37 = *(uint32_t *)(a2 + 28);
          if ( v24 > (int)(v37 - (v25 + v31)) )
            v24 = v37 - (v25 + v31);
          if ( v24 > (int)(*(uint32_t *)(a2 + 4) - (v25 + v31)) )
            v24 = *(uint32_t *)(a2 + 4) - (v25 + v31);
        }
        while ( v24 > 0 );
        v8 = *(uint32_t *)(a2 + 28);
        v33 = *(uint32_t *)(a2 + 8);
        v32 = v33;
      }
    }
    *(uint8_t *)(a2 + 33) = 0;
  }
  else
  {
    v7 = *(uint32_t *)(a2 + 16);
    v32 = *(uint32_t *)(a2 + 8);
    v33 = v32;
    v8 = *(uint32_t *)(a2 + 28);
  }
  if ( a3 > v31 )
  {
    *(uint32_t *)(a2 + 24) = a3;
    v9 = a3;
  }
  else
  {
    v9 = 0;
    if ( (int)(v34 - v7) >= 0 )
      v9 = v34 - v7;
    *(uint32_t *)(a2 + 24) = v9;
  }
  if ( v7 > 0 )
  {
    if ( v7 > *(uint32_t *)(a2 + 20) )
      v7 = *(uint32_t *)(a2 + 20);
    if ( v7 > (int)(*(uint32_t *)(a2 + 4) - v9) )
      v7 = *(uint32_t *)(a2 + 4) - v9;
    if ( v7 > (int)(v8 - v9) )
      v7 = v8 - v9;
    if ( v7 > 0 )
    {
      v10 = v32 * v9;
      v11 = 0;
      while ( 1 )
      {
        v29 = v33 * v7;
        (*(void (**)(int, int, uint32_t, int, int))(a2 + 40))(
          a1,
          a2 + 40,
          *(uint32_t *)(*(uint32_t *)a2 + 4 * v11),
          v10,
          v33 * v7);
        v14 = *(uint32_t *)(a2 + 20);
        v11 += v14;
        v15 = *(uint32_t *)(a2 + 16);
        v10 += v29;
        if ( v11 >= v15 )
          goto LABEL_31;
        v12 = v15 - v11;
        if ( v12 > v14 )
          v12 = *(uint32_t *)(a2 + 20);
        v13 = v11 + *(uint32_t *)(a2 + 24);
        if ( v12 > *(uint32_t *)(a2 + 28) - v13 )
          v12 = *(uint32_t *)(a2 + 28) - v13;
        v7 = *(uint32_t *)(a2 + 4) - v13;
        if ( v12 <= v7 )
          v7 = v12;
        if ( v7 <= 0 )
        {
          v8 = *(uint32_t *)(a2 + 28);
          break;
        }
      }
    }
  }
LABEL_32:
  if ( v34 <= v8 )
  {
    v16 = *(uint32_t *)(a2 + 24);
LABEL_43:
    if ( a5 == 0 )
      return *v5 + 4 * (a3 - v16);
    goto LABEL_40;
  }
  if ( a3 <= v8 )
  {
    if ( a5 == 0 )
    {
LABEL_35:
      if ( *(uint8_t *)(a2 + 32) != 0 )
        goto LABEL_36;
LABEL_50:
      if ( a5 == 0 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 22;
        (**(void (***)(int))a1)(a1);
        v16 = *(uint32_t *)(a2 + 24);
        return *v5 + 4 * (a3 - v16);
      }
      v16 = *(uint32_t *)(a2 + 24);
      goto LABEL_40;
    }
  }
  else
  {
    v8 = a3;
    if ( a5 == 0 )
      goto LABEL_35;
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 22;
    (**(void (***)(int))a1)(a1);
    v8 = a3;
  }
  v23 = *(uint8_t *)(a2 + 32) == 0;
  *(uint32_t *)(a2 + 28) = v34;
  if ( v23 )
    goto LABEL_50;
LABEL_36:
  v16 = *(uint32_t *)(a2 + 24);
  v17 = v8 - v16;
  v18 = v8 - v16 < v34 - v16;
  v35 = v34 - v16;
  if ( !v18 )
    goto LABEL_43;
  v19 = (uint32_t *)a2;
  v20 = 4 * v17;
  v21 = *(uint32_t *)(a2 + 8);
  do
  {
    ++v17;
    v30 = v19;
    v28 = *(void **)(*v19 + v20);
    v20 += 4;
    jzero_far(v28, v21);
    v19 = v30;
  }
  while ( v35 > v17 );
  v5 = v30;
  v16 = v30[6];
  if ( a5 != 0 )
LABEL_40:
    *((uint8_t *)v5 + 33) = 1;
  return *v5 + 4 * (a3 - v16);
}

// ----------------------------------------------------------------------------
// Function: sub_F97DA0  (binary VA: 0xf97da0)
// Original: sub_F97DA0
// ----------------------------------------------------------------------------
int sub_F97DA0(int a1, int a2, unsigned int a3, unsigned int a4, char a5)
{
  uint32_t *v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  bool v18;
  uint32_t *v19;
  int v20;
  size_t v21;
  bool v23;
  int v24;
  int v25;
  int v26;
  int v27;
  void *v28;
  int v29;
  uint32_t *v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  int v36;

  v5 = (uint32_t *)a2;
  v33 = a4 + a3;
  if ( a4 + a3 > *(uint32_t *)(a2 + 4) || a4 > *(uint32_t *)(a2 + 12) || *(uint32_t *)a2 == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 22;
    (**(void (***)(int))a1)(a1);
  }
  v6 = *(uint32_t *)(a2 + 24);
  v31 = v6;
  if ( a3 >= v6 && v33 <= v6 + *(uint32_t *)(a2 + 16) )
  {
LABEL_31:
    v8 = *(uint32_t *)(a2 + 28);
    goto LABEL_32;
  }
  if ( *(uint8_t *)(a2 + 34) == 0 )
  {
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 69;
    (**(void (***)(int))a1)(a1);
    v31 = *(uint32_t *)(a2 + 24);
  }
  if ( *(uint8_t *)(a2 + 33) != 0 )
  {
    v7 = *(uint32_t *)(a2 + 16);
    v32 = *(uint32_t *)(a2 + 8) << 7;
    if ( v7 <= 0 )
    {
LABEL_71:
      v8 = *(uint32_t *)(a2 + 28);
    }
    else
    {
      v8 = *(uint32_t *)(a2 + 28);
      v24 = *(uint32_t *)(a2 + 16);
      if ( *(uint32_t *)(a2 + 20) <= v7 )
        v24 = *(uint32_t *)(a2 + 20);
      if ( v24 > (int)(*(uint32_t *)(a2 + 28) - v31) )
        v24 = *(uint32_t *)(a2 + 28) - v31;
      if ( v24 > (int)(*(uint32_t *)(a2 + 4) - v31) )
        v24 = *(uint32_t *)(a2 + 4) - v31;
      if ( v24 > 0 )
      {
        v25 = 0;
        v35 = v32 * v31;
        do
        {
          v26 = v24 * v32;
          (*(void (**)(int, int, uint32_t, int, int))(a2 + 44))(
            a1,
            a2 + 40,
            *(uint32_t *)(*(uint32_t *)a2 + 4 * v25),
            v35,
            v24 * v32);
          v27 = *(uint32_t *)(a2 + 20);
          v7 = *(uint32_t *)(a2 + 16);
          v25 += v27;
          v35 += v26;
          if ( v25 >= v7 )
          {
            v31 = *(uint32_t *)(a2 + 24);
            v32 = *(uint32_t *)(a2 + 8) << 7;
            goto LABEL_71;
          }
          v24 = v7 - v25;
          if ( v7 - v25 > v27 )
            v24 = *(uint32_t *)(a2 + 20);
          v31 = *(uint32_t *)(a2 + 24);
          v36 = *(uint32_t *)(a2 + 28);
          if ( v24 > (int)(v36 - (v25 + v31)) )
            v24 = v36 - (v25 + v31);
          if ( v24 > (int)(*(uint32_t *)(a2 + 4) - (v25 + v31)) )
            v24 = *(uint32_t *)(a2 + 4) - (v25 + v31);
        }
        while ( v24 > 0 );
        v8 = *(uint32_t *)(a2 + 28);
        v32 = *(uint32_t *)(a2 + 8) << 7;
      }
    }
    *(uint8_t *)(a2 + 33) = 0;
  }
  else
  {
    v7 = *(uint32_t *)(a2 + 16);
    v32 = *(uint32_t *)(a2 + 8) << 7;
    v8 = *(uint32_t *)(a2 + 28);
  }
  if ( a3 > v31 )
  {
    *(uint32_t *)(a2 + 24) = a3;
    v9 = a3;
  }
  else
  {
    v9 = 0;
    if ( (int)(v33 - v7) >= 0 )
      v9 = v33 - v7;
    *(uint32_t *)(a2 + 24) = v9;
  }
  if ( v7 > 0 )
  {
    if ( v7 > *(uint32_t *)(a2 + 20) )
      v7 = *(uint32_t *)(a2 + 20);
    if ( v7 > (int)(*(uint32_t *)(a2 + 4) - v9) )
      v7 = *(uint32_t *)(a2 + 4) - v9;
    if ( v7 > (int)(v8 - v9) )
      v7 = v8 - v9;
    if ( v7 > 0 )
    {
      v10 = 0;
      v11 = v32 * v9;
      while ( 1 )
      {
        v29 = v32 * v7;
        (*(void (**)(int, int, uint32_t, int, int))(a2 + 40))(
          a1,
          a2 + 40,
          *(uint32_t *)(*(uint32_t *)a2 + 4 * v10),
          v11,
          v32 * v7);
        v14 = *(uint32_t *)(a2 + 20);
        v10 += v14;
        v15 = *(uint32_t *)(a2 + 16);
        v11 += v29;
        if ( v10 >= v15 )
          goto LABEL_31;
        v12 = v15 - v10;
        if ( v12 > v14 )
          v12 = *(uint32_t *)(a2 + 20);
        v13 = v10 + *(uint32_t *)(a2 + 24);
        if ( v12 > *(uint32_t *)(a2 + 28) - v13 )
          v12 = *(uint32_t *)(a2 + 28) - v13;
        v7 = *(uint32_t *)(a2 + 4) - v13;
        if ( v12 <= v7 )
          v7 = v12;
        if ( v7 <= 0 )
        {
          v8 = *(uint32_t *)(a2 + 28);
          break;
        }
      }
    }
  }
LABEL_32:
  if ( v33 <= v8 )
  {
    v16 = *(uint32_t *)(a2 + 24);
LABEL_43:
    if ( a5 == 0 )
      return *v5 + 4 * (a3 - v16);
    goto LABEL_40;
  }
  if ( a3 <= v8 )
  {
    if ( a5 == 0 )
    {
LABEL_35:
      if ( *(uint8_t *)(a2 + 32) != 0 )
        goto LABEL_36;
LABEL_50:
      if ( a5 == 0 )
      {
        *(uint32_t *)(*(uint32_t *)a1 + 20) = 22;
        (**(void (***)(int))a1)(a1);
        v16 = *(uint32_t *)(a2 + 24);
        return *v5 + 4 * (a3 - v16);
      }
      v16 = *(uint32_t *)(a2 + 24);
      goto LABEL_40;
    }
  }
  else
  {
    v8 = a3;
    if ( a5 == 0 )
      goto LABEL_35;
    *(uint32_t *)(*(uint32_t *)a1 + 20) = 22;
    (**(void (***)(int))a1)(a1);
    v8 = a3;
  }
  v23 = *(uint8_t *)(a2 + 32) == 0;
  *(uint32_t *)(a2 + 28) = v33;
  if ( v23 )
    goto LABEL_50;
LABEL_36:
  v16 = *(uint32_t *)(a2 + 24);
  v17 = v8 - v16;
  v18 = v8 - v16 < v33 - v16;
  v34 = v33 - v16;
  if ( !v18 )
    goto LABEL_43;
  v19 = (uint32_t *)a2;
  v20 = 4 * v17;
  v21 = *(uint32_t *)(a2 + 8) << 7;
  do
  {
    ++v17;
    v30 = v19;
    v28 = *(void **)(*v19 + v20);
    v20 += 4;
    jzero_far(v28, v21);
    v19 = v30;
  }
  while ( v34 > v17 );
  v5 = v30;
  v16 = v30[6];
  if ( a5 != 0 )
LABEL_40:
    *((uint8_t *)v5 + 33) = 1;
  return *v5 + 4 * (a3 - v16);
}

// ----------------------------------------------------------------------------
// Function: sub_F98160  (binary VA: 0xf98160)
// Original: sub_F98160
// ----------------------------------------------------------------------------
int sub_F98160(uint32_t *a1, unsigned int a2, char a3, int a4, int a5, int a6)
{
  uint32_t *v6;
  unsigned int v7;
  uint32_t *small;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v14;
  int v15;

  v14 = a1[1];
  v15 = v14;
  if ( a2 != 1 )
  {
    *(uint32_t *)(*a1 + 20) = 14;
    *(uint32_t *)(*a1 + 24) = a2;
    G4_VCALL<void>(a1, 0);
    v15 = a1[1];
    if ( a2 > 1 )
    {
      *(uint32_t *)(*a1 + 20) = 14;
      *(uint32_t *)(*a1 + 24) = a2;
      G4_VCALL<void>(a1, 0);
    }
  }
  v6 = *(uint32_t **)(v15 + 4 * (a2 + 12) + 4);
  if ( v6 == nullptr )
    goto LABEL_22;
  v7 = v6[2];
  small = *(uint32_t **)(v15 + 4 * (a2 + 12) + 4);
  if ( v7 > 0x77 )
    goto LABEL_20;
  while ( 1 )
  {
    small = (uint32_t *)*v6;
    if ( *v6 == 0 )
      break;
    v7 = small[2];
    if ( v7 > 0x77 )
      goto LABEL_20;
    v6 = (uint32_t *)*v6;
  }
  if ( v6 != nullptr )
    v9 = dword_1CBD728[a2];
  else
LABEL_22:
    v9 = dword_1CBD720[a2];
  v10 = 999999868;
  if ( v9 <= 0x3B9AC97C )
    v10 = v9;
  while ( 1 )
  {
    small = (uint32_t *)jpeg_get_small((int)(uintptr_t)(a1), v10 + 132);
    if ( small != nullptr )
      break;
    v10 >>= 1;
    if ( v10 <= 0x31 )
    {
      *(uint32_t *)(*a1 + 20) = 54;
      *(uint32_t *)(*a1 + 24) = 2;
      G4_VCALL<void>(a1, 0);
    }
  }
  *(uint32_t *)(v15 + 76) += v10 + 132;
  *small = 0;
  small[1] = 0;
  small[2] = v10 + 120;
  if ( v6 != nullptr )
    *v6 = (uint32_t)(uintptr_t)(small);
  else
    *(uint32_t *)(v15 + 4 * (a2 + 12) + 4) = (uint32_t)(uintptr_t)(small);
  v7 = small[2];
LABEL_20:
  v11 = small[1];
  small[2] = v7 - 120;
  v12 = (int)(uintptr_t)(small) + v11 + 12;
  small[1] = v11 + 120;
  *(uint8_t *)(v12 + 32) = a3;
  *(uint32_t *)(v12 + 4) = a5;
  *(uint32_t *)(v12 + 8) = a4;
  *(uint32_t *)v12 = 0;
  *(uint32_t *)(v12 + 12) = a6;
  *(uint8_t *)(v12 + 34) = 0;
  *(uint32_t *)(v12 + 36) = *(uint32_t *)(v14 + 68);
  *(uint32_t *)(v14 + 68) = v12;
  return v12;
}

// ----------------------------------------------------------------------------
// Function: sub_F98300  (binary VA: 0xf98300)
// Original: sub_F98300
// ----------------------------------------------------------------------------
int sub_F98300(uint32_t *a1, unsigned int a2, char a3, int a4, int a5, int a6)
{
  uint32_t *v6;
  unsigned int v7;
  uint32_t *small;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v14;
  int v15;

  v14 = a1[1];
  v15 = v14;
  if ( a2 != 1 )
  {
    *(uint32_t *)(*a1 + 20) = 14;
    *(uint32_t *)(*a1 + 24) = a2;
    G4_VCALL<void>(a1, 0);
    v15 = a1[1];
    if ( a2 > 1 )
    {
      *(uint32_t *)(*a1 + 20) = 14;
      *(uint32_t *)(*a1 + 24) = a2;
      G4_VCALL<void>(a1, 0);
    }
  }
  v6 = *(uint32_t **)(v15 + 4 * (a2 + 12) + 4);
  if ( v6 == nullptr )
    goto LABEL_22;
  v7 = v6[2];
  small = *(uint32_t **)(v15 + 4 * (a2 + 12) + 4);
  if ( v7 > 0x77 )
    goto LABEL_20;
  while ( 1 )
  {
    small = (uint32_t *)*v6;
    if ( *v6 == 0 )
      break;
    v7 = small[2];
    if ( v7 > 0x77 )
      goto LABEL_20;
    v6 = (uint32_t *)*v6;
  }
  if ( v6 != nullptr )
    v9 = dword_1CBD728[a2];
  else
LABEL_22:
    v9 = dword_1CBD720[a2];
  v10 = 999999868;
  if ( v9 <= 0x3B9AC97C )
    v10 = v9;
  while ( 1 )
  {
    small = (uint32_t *)jpeg_get_small((int)(uintptr_t)(a1), v10 + 132);
    if ( small != nullptr )
      break;
    v10 >>= 1;
    if ( v10 <= 0x31 )
    {
      *(uint32_t *)(*a1 + 20) = 54;
      *(uint32_t *)(*a1 + 24) = 2;
      G4_VCALL<void>(a1, 0);
    }
  }
  *(uint32_t *)(v15 + 76) += v10 + 132;
  *small = 0;
  small[1] = 0;
  small[2] = v10 + 120;
  if ( v6 != nullptr )
    *v6 = (uint32_t)(uintptr_t)(small);
  else
    *(uint32_t *)(v15 + 4 * (a2 + 12) + 4) = (uint32_t)(uintptr_t)(small);
  v7 = small[2];
LABEL_20:
  v11 = small[1];
  small[2] = v7 - 120;
  v12 = (int)(uintptr_t)(small) + v11 + 12;
  small[1] = v11 + 120;
  *(uint8_t *)(v12 + 32) = a3;
  *(uint32_t *)(v12 + 4) = a5;
  *(uint32_t *)(v12 + 8) = a4;
  *(uint32_t *)v12 = 0;
  *(uint32_t *)(v12 + 12) = a6;
  *(uint8_t *)(v12 + 34) = 0;
  *(uint32_t *)(v12 + 36) = *(uint32_t *)(v14 + 72);
  *(uint32_t *)(v14 + 72) = v12;
  return v12;
}

// ----------------------------------------------------------------------------
// Function: sub_F984A0  (binary VA: 0xf984a0)
// Original: sub_F984A0
// ----------------------------------------------------------------------------
int sub_F984A0(uint32_t *a1, unsigned int a2, int a3, unsigned int a4)
{
  uint32_t *v4;
  signed int v5;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  unsigned int v9;
  uint32_t *small;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  uint32_t *large;
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;
  unsigned int j;
  unsigned int v24;
  int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int i;
  unsigned int v30;
  unsigned int v31;
  int v32;
  int v33;
  unsigned int v34;

  v34 = a3 << 7;
  v4 = a1;
  v5 = 0x3B9AC9F4 / v34;
  v6 = a1[1];
  if ( 0x3B9AC9F4 / v34 == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 70;
    G4_VCALL<void>(a1, 0);
    v5 = 0;
  }
  v7 = a4;
  if ( v5 < (int)a4 )
    v7 = v5;
  *(uint32_t *)(v6 + 80) = v7;
  v28 = 4 * a4;
  v33 = a1[1];
  if ( 4 * a4 > 0x3B9AC9F4 )
  {
    *(uint32_t *)(*a1 + 20) = 54;
    *(uint32_t *)(*a1 + 24) = 1;
    G4_VCALL<void>(a1, 0);
  }
  if ( (v28 & 7) != 0 )
    v28 = v28 + 8 - (v28 & 7);
  if ( a2 > 1 )
  {
    *(uint32_t *)(*a1 + 20) = 14;
    *(uint32_t *)(*a1 + 24) = a2;
    G4_VCALL<void>(a1, 0);
  }
  v30 = a2 + 12;
  v8 = *(uint32_t **)(v33 + 4 * (a2 + 12) + 4);
  if ( v8 == nullptr )
  {
    v31 = v28 + 12;
LABEL_46:
    v11 = dword_1CBD720[a2];
    goto LABEL_19;
  }
  v9 = v8[2];
  small = *(uint32_t **)(v33 + 4 * (a2 + 12) + 4);
  if ( v28 <= v9 )
    goto LABEL_28;
  while ( 1 )
  {
    small = (uint32_t *)*v8;
    if ( *v8 == 0 )
      break;
    v9 = small[2];
    if ( v9 >= v28 )
      goto LABEL_28;
    v8 = (uint32_t *)*v8;
  }
  v31 = v28 + 12;
  if ( v8 == nullptr )
    goto LABEL_46;
  v11 = dword_1CBD728[a2];
LABEL_19:
  v12 = 999999988 - v28;
  if ( v11 <= 999999988 - v28 )
    v12 = v11;
  v13 = v12;
  while ( 1 )
  {
    v27 = v13 + v31;
    small = (uint32_t *)jpeg_get_small((int)(uintptr_t)(a1), v13 + v31);
    if ( small != nullptr )
      break;
    v13 >>= 1;
    if ( v13 <= 0x31 )
    {
      *(uint32_t *)(*a1 + 20) = 54;
      *(uint32_t *)(*a1 + 24) = 2;
      G4_VCALL<void>(a1, 0);
    }
  }
  v24 = v13;
  v4 = a1;
  *(uint32_t *)(v33 + 76) += v27;
  *small = 0;
  small[1] = 0;
  small[2] = v28 + v24;
  if ( v8 != nullptr )
    *v8 = (uint32_t)(uintptr_t)(small);
  else
    *(uint32_t *)(v33 + 4 * v30 + 4) = (uint32_t)(uintptr_t)(small);
  v9 = small[2];
LABEL_28:
  v14 = small[1];
  small[2] = v9 - v28;
  v32 = (int)(uintptr_t)(small) + v14 + 12;
  small[1] = v28 + v14;
  if ( a4 != 0 )
  {
    for ( i = 0; i < a4; i += v7 )
    {
      while ( 1 )
      {
        v19 = v4[1];
        if ( v7 > a4 - i )
          v7 = a4 - i;
        v15 = v7 * v34;
        if ( v7 * v34 > 0x3B9AC9F4 )
        {
          *(uint32_t *)(*v4 + 20) = 54;
          *(uint32_t *)(*v4 + 24) = 3;
          G4_VCALL<void>(v4, 0);
          v15 = v7 * v34;
        }
        if ( a2 > 1 )
        {
          *(uint32_t *)(*v4 + 20) = 14;
          *(uint32_t *)(*v4 + 24) = a2;
          v25 = v15;
          G4_VCALL<void>(v4, 0);
          v15 = v25;
        }
        v26 = v15;
        large = (uint32_t *)jpeg_get_large((int)(uintptr_t)(v4), v15 + 12);
        v17 = v26;
        if ( large == nullptr )
        {
          *(uint32_t *)(*v4 + 20) = 54;
          *(uint32_t *)(*v4 + 24) = 4;
          G4_VCALL<void>(v4, 0);
          v17 = v26;
          large = nullptr;
        }
        *(uint32_t *)(v19 + 76) += v17 + 12;
        v18 = *(uint32_t *)(v19 + 4 * v30 + 12);
        large[1] = v17;
        *large = v18;
        large[2] = 0;
        *(uint32_t *)(v19 + 4 * v30 + 12) = (uint32_t)(uintptr_t)(large);
        if ( v7 != 0 )
          break;
        if ( a4 <= i )
          return v32;
      }
      v20 = large + 3;
      v21 = (uint32_t *)(v32 + 4 * i);
      for ( j = v7; j != 0; --j )
      {
        *v21 = (uint32_t)(uintptr_t)(v20);
        v20 = (uint32_t *)((char *)v20 + v34);
        ++v21;
      }
    }
  }
  return v32;
}

// ----------------------------------------------------------------------------
// Function: sub_F98810  (binary VA: 0xf98810)
// Original: sub_F98810
// ----------------------------------------------------------------------------
int sub_F98810(uint32_t *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  signed int v4;
  uint32_t *v5;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  unsigned int v9;
  uint32_t *small;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *large;
  int v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;
  unsigned int j;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int i;
  unsigned int v31;
  unsigned int v32;
  int v33;
  int v34;

  v4 = 0x3B9AC9F4 / a3;
  v5 = a1;
  v6 = a1[1];
  if ( 0x3B9AC9F4 / a3 == 0 )
  {
    *(uint32_t *)(*a1 + 20) = 70;
    G4_VCALL<void>(a1, 0);
    v4 = 0;
  }
  v7 = a4;
  if ( v4 < (int)a4 )
    v7 = v4;
  *(uint32_t *)(v6 + 80) = v7;
  v29 = 4 * a4;
  v34 = a1[1];
  if ( 4 * a4 > 0x3B9AC9F4 )
  {
    *(uint32_t *)(*a1 + 20) = 54;
    *(uint32_t *)(*a1 + 24) = 1;
    G4_VCALL<void>(a1, 0);
  }
  if ( (v29 & 7) != 0 )
    v29 = v29 + 8 - (v29 & 7);
  if ( a2 > 1 )
  {
    *(uint32_t *)(*a1 + 20) = 14;
    *(uint32_t *)(*a1 + 24) = a2;
    G4_VCALL<void>(a1, 0);
  }
  v31 = a2 + 12;
  v8 = *(uint32_t **)(v34 + 4 * (a2 + 12) + 4);
  if ( v8 == nullptr )
  {
    v32 = v29 + 12;
LABEL_48:
    v11 = dword_1CBD720[a2];
    goto LABEL_19;
  }
  v9 = v8[2];
  small = *(uint32_t **)(v34 + 4 * (a2 + 12) + 4);
  if ( v29 <= v9 )
    goto LABEL_28;
  while ( 1 )
  {
    small = (uint32_t *)*v8;
    if ( *v8 == 0 )
      break;
    v9 = small[2];
    if ( v9 >= v29 )
      goto LABEL_28;
    v8 = (uint32_t *)*v8;
  }
  v32 = v29 + 12;
  if ( v8 == nullptr )
    goto LABEL_48;
  v11 = dword_1CBD728[a2];
LABEL_19:
  v12 = 999999988 - v29;
  if ( v11 <= 999999988 - v29 )
    v12 = v11;
  v13 = v12;
  while ( 1 )
  {
    v28 = v13 + v32;
    small = (uint32_t *)jpeg_get_small((int)(uintptr_t)(a1), v13 + v32);
    if ( small != nullptr )
      break;
    v13 >>= 1;
    if ( v13 <= 0x31 )
    {
      *(uint32_t *)(*a1 + 20) = 54;
      *(uint32_t *)(*a1 + 24) = 2;
      G4_VCALL<void>(a1, 0);
    }
  }
  v24 = v13;
  v5 = a1;
  *(uint32_t *)(v34 + 76) += v28;
  *small = 0;
  small[1] = 0;
  small[2] = v29 + v24;
  if ( v8 != nullptr )
    *v8 = (uint32_t)(uintptr_t)(small);
  else
    *(uint32_t *)(v34 + 4 * v31 + 4) = (uint32_t)(uintptr_t)(small);
  v9 = small[2];
LABEL_28:
  v14 = small[1];
  small[2] = v9 - v29;
  small[1] = v29 + v14;
  v33 = (int)(uintptr_t)(small) + v14 + 12;
  if ( a4 != 0 )
  {
    for ( i = 0; i < a4; i += v7 )
    {
      while ( 1 )
      {
        v16 = v5[1];
        if ( v7 > a4 - i )
          v7 = a4 - i;
        v15 = v7 * a3;
        if ( v7 * a3 > 0x3B9AC9F4 )
        {
          *(uint32_t *)(*v5 + 20) = 54;
          *(uint32_t *)(*v5 + 24) = 3;
          v27 = v16;
          G4_VCALL<void>(v5, 0);
          v16 = v27;
        }
        if ( (v15 & 7) != 0 )
          v15 = v15 + 8 - (v15 & 7);
        if ( a2 > 1 )
        {
          *(uint32_t *)(*v5 + 20) = 14;
          *(uint32_t *)(*v5 + 24) = a2;
          v25 = v16;
          G4_VCALL<void>(v5, 0);
          v16 = v25;
        }
        v26 = v16;
        large = (uint32_t *)jpeg_get_large((int)(uintptr_t)(v5), v15 + 12);
        v18 = v26;
        if ( large == nullptr )
        {
          *(uint32_t *)(*v5 + 20) = 54;
          *(uint32_t *)(*v5 + 24) = 4;
          G4_VCALL<void>(v5, 0);
          v18 = v26;
          large = nullptr;
        }
        *(uint32_t *)(v18 + 76) += v15 + 12;
        v19 = *(uint32_t *)(v18 + 4 * v31 + 12);
        large[1] = v15;
        *large = v19;
        large[2] = 0;
        *(uint32_t *)(v18 + 4 * v31 + 12) = (uint32_t)(uintptr_t)(large);
        if ( v7 != 0 )
          break;
        if ( a4 <= i )
          return v33;
      }
      v20 = large + 3;
      v21 = (uint32_t *)(v33 + 4 * i);
      for ( j = v7; j != 0; --j )
      {
        *v21 = (uint32_t)(uintptr_t)(v20);
        v20 = (uint32_t *)((char *)v20 + a3);
        ++v21;
      }
    }
  }
  return v33;
}

// ----------------------------------------------------------------------------
// Function: sub_F98B80  (binary VA: 0xf98b80)
// Original: sub_F98B80
// ----------------------------------------------------------------------------
int sub_F98B80(uint32_t *a1)
{
  int v1;
  int v2;
  uint32_t *v3;
  uint32_t *i;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  int v11;
  signed int v12;
  int j;
  unsigned int v14;
  int k;
  unsigned int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;

  v1 = 0;
  v2 = 0;
  v3 = (uint32_t *)a1[1];
  for ( i = (uint32_t *)v3[17]; i != nullptr; v1 += v7 )
  {
    while ( *i != 0 )
    {
      i = (uint32_t *)i[9];
      if ( i == nullptr )
        goto LABEL_6;
    }
    v5 = i[2];
    v6 = v5 * i[3];
    v7 = i[1] * v5;
    i = (uint32_t *)i[9];
    v2 += v6;
  }
LABEL_6:
  for ( result = v3[18]; result != 0; v1 += v11 << 7 )
  {
    while ( *(uint32_t *)result != 0 )
    {
      result = *(uint32_t *)(result + 36);
      if ( result == 0 )
        goto LABEL_11;
    }
    v9 = *(uint32_t *)(result + 8);
    v10 = v9 * *(uint32_t *)(result + 12);
    v11 = *(uint32_t *)(result + 4) * v9;
    result = *(uint32_t *)(result + 36);
    v2 += v10 << 7;
  }
LABEL_11:
  if ( v2 > 0 )
  {
    v17 = v1;
    v12 = 1000000000;
    result = jpeg_mem_available(a1, v2, v1);
    if ( result < v17 )
    {
      v12 = 1;
      result /= v2;
      if ( result > 0 )
        v12 = result;
    }
    for ( j = v3[17]; j != 0; j = *(uint32_t *)(j + 36) )
    {
      while ( 1 )
      {
        result = *(uint32_t *)j;
        if ( *(uint32_t *)j == 0 )
          break;
        j = *(uint32_t *)(j + 36);
        if ( j == 0 )
          goto LABEL_20;
      }
      v14 = *(uint32_t *)(j + 4);
      v18 = *(uint32_t *)(j + 12);
      if ( v12 < (int)((v14 - 1) / v18 + 1) )
      {
        *(uint32_t *)(j + 16) = v12 * v18;
        jpeg_open_backing_store(a1);
        *(uint8_t *)(j + 34) = 1;
        v14 = *(uint32_t *)(j + 16);
      }
      else
      {
        *(uint32_t *)(j + 16) = v14;
      }
      *(uint32_t *)j = sub_F98810(a1, 1u, *(uint32_t *)(j + 8), v14);
      result = v3[20];
      *(uint32_t *)(j + 20) = result;
      *(uint32_t *)(j + 24) = 0;
      *(uint32_t *)(j + 28) = 0;
      *(uint8_t *)(j + 33) = 0;
    }
LABEL_20:
    for ( k = v3[18]; k != 0; k = *(uint32_t *)(k + 36) )
    {
      while ( 1 )
      {
        result = *(uint32_t *)k;
        if ( *(uint32_t *)k == 0 )
          break;
        k = *(uint32_t *)(k + 36);
        if ( k == 0 )
          return result;
      }
      v16 = *(uint32_t *)(k + 4);
      v19 = *(uint32_t *)(k + 12);
      if ( v12 < (int)((v16 - 1) / v19 + 1) )
      {
        *(uint32_t *)(k + 16) = v12 * v19;
        jpeg_open_backing_store(a1);
        *(uint8_t *)(k + 34) = 1;
        v16 = *(uint32_t *)(k + 16);
      }
      else
      {
        *(uint32_t *)(k + 16) = v16;
      }
      *(uint32_t *)k = sub_F984A0(a1, 1u, *(uint32_t *)(k + 8), v16);
      result = v3[20];
      *(uint32_t *)(k + 20) = result;
      *(uint32_t *)(k + 24) = 0;
      *(uint32_t *)(k + 28) = 0;
      *(uint8_t *)(k + 33) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F98DE0  (binary VA: 0xf98de0)
// Original: sub_F98DE0
// ----------------------------------------------------------------------------
int sub_F98DE0(int a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int j;
  int v8;
  int v9;
  int i;
  int v11;

  for ( i = 1; i != -1; --i )
  {
    v1 = *(uint32_t **)(a1 + 4);
    if ( i == 1 )
    {
      for ( j = v1[17]; j != 0; j = *(uint32_t *)(j + 36) )
      {
        while ( *(uint8_t *)(j + 34) == 0 )
        {
          j = *(uint32_t *)(j + 36);
          if ( j == 0 )
            goto LABEL_18;
        }
        *(uint8_t *)(j + 34) = 0;
        (*(void (**)(int, int, int))(j + 48))(a1, j + 40, v9);
      }
LABEL_18:
      v8 = v1[18];
      for ( v1[17] = 0; v8 != 0; v8 = *(uint32_t *)(v8 + 36) )
      {
        while ( *(uint8_t *)(v8 + 34) == 0 )
        {
          v8 = *(uint32_t *)(v8 + 36);
          if ( v8 == 0 )
            goto LABEL_23;
        }
        *(uint8_t *)(v8 + 34) = 0;
        (*(void (**)(int, int))(v8 + 48))(a1, v8 + 40);
      }
LABEL_23:
      v1[18] = 0;
    }
    v11 = i + 12;
    v2 = (uint32_t *)v1[i + 15];
    v1[i + 15] = 0;
    if ( v2 != nullptr )
    {
      while ( 1 )
      {
        v3 = (uint32_t *)*v2;
        v9 = v2[2] + v2[1] + 12;
        jpeg_free_large(a1, v2);
        v1[19] -= v9;
        if ( v3 == nullptr )
          break;
        v2 = v3;
      }
    }
    v4 = (uint32_t *)v1[v11 + 1];
    v1[v11 + 1] = 0;
    if ( v4 != nullptr )
    {
      while ( 1 )
      {
        v5 = (uint32_t *)*v4;
        v9 = v4[2] + v4[1] + 12;
        jpeg_free_small(a1, v4);
        v1[19] -= v9;
        if ( v5 == nullptr )
          break;
        v4 = v5;
      }
    }
  }
  jpeg_free_small(a1, *(uint32_t *)(a1 + 4));
  *(uint32_t *)(a1 + 4) = 0;
  return ((jpeg_mem_term(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_F99100  (binary VA: 0xf99100)
// Original: sub_F99100
// ----------------------------------------------------------------------------
uint8_t * sub_F99100(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  uint8_t *result;
  int v6;
  int v7;
  char v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  uint8_t *v13;
  uint8_t *v14;
  int i;
  uint8_t *v16;

  v4 = *(uint32_t *)(a1[106] + 24);
  result = (uint8_t *)a1[25];
  v16 = (uint8_t *)a1[23];
  v12 = (int)(uintptr_t)(result);
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      v6 = *(uint32_t *)(a2 + 4 * i);
      result = v16;
      v13 = *(uint8_t **)(a3 + 4 * i);
      v14 = v16;
      if ( v16 != nullptr )
      {
        do
        {
          v7 = 0;
          v8 = 0;
          if ( v12 > 0 )
          {
            do
            {
              v9 = *(uint8_t *)(v6 + v7);
              v10 = *(uint32_t *)(v4 + 4 * v7++);
              v8 += *(uint8_t *)(v10 + v9);
            }
            while ( v7 != v12 );
            v6 += v12;
          }
          *v13 = v8;
          result = v13 + 1;
          v11 = v14-- == (uint8_t *)&dword_0 + 1;
          ++v13;
        }
        while ( !v11 );
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F991B0  (binary VA: 0xf991b0)
// Original: sub_F991B0
// ----------------------------------------------------------------------------
uint8_t * sub_F991B0(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  uint8_t *result;
  uint8_t *v9;
  char v10; // si
  int v11;
  int j;
  int v13;
  int i;
  int v15;

  v15 = *(uint32_t *)(a1 + 92);
  v4 = *(int **)(*(uint32_t *)(a1 + 424) + 24);
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  result = (uint8_t *)a4;
  v13 = v6;
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      result = *(uint8_t **)(a2 + 4 * i);
      v9 = *(uint8_t **)(a3 + 4 * i);
      if ( v15 != 0 )
      {
        for ( j = v15; j != 0; --j )
        {
          v10 = *(uint8_t *)(v13 + result[1]) + *(uint8_t *)(v5 + *result);
          v11 = result[2];
          result += 3;
          *v9++ = *(uint8_t *)(v7 + v11) + v10;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F99270  (binary VA: 0xf99270)
// Original: sub_F99270
// ----------------------------------------------------------------------------
int sub_F99270(int a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int result;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  int v10;
  char v11; // bp
  uint8_t *v12;
  int i;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  int v23;

  v22 = *(uint32_t **)(a1 + 424);
  v23 = *(uint32_t *)(a1 + 92);
  v4 = (int *)v22[6];
  v5 = v4[1];
  v17 = *v4;
  v19 = v4[2];
  result = a4;
  v18 = v5;
  if ( a4 > 0 )
  {
    result = v22[12];
    v21 = 0;
    LOBYTE(v20) = result;
    do
    {
      v7 = result << 6;
      v8 = *(uint8_t **)(a2 + 4 * v21);
      v9 = *(uint8_t **)(a3 + 4 * v21);
      v14 = v7 + v22[13];
      v16 = v22[15] + v7;
      v15 = v7 + v22[14];
      if ( v23 != 0 )
      {
        v10 = 0;
        for ( i = v23; i != 0; --i )
        {
          v11 = *(uint8_t *)(*(uint32_t *)(v15 + 4 * v10) + v18 + v8[1])
              + *(uint8_t *)(*(uint32_t *)(v14 + 4 * v10) + v17 + *v8);
          v12 = (uint8_t *)(*(uint32_t *)(v16 + 4 * v10) + v19 + v8[2]);
          v10 = ((uint8_t)v10 + 1) & 0xF;
          v8 += 3;
          *v9++ = v11 + *v12;
        }
      }
      ++v21;
      v20 = ((uint8_t)v20 + 1) & 0xF;
      result = v20;
      v22[12] = v20;
    }
    while ( v21 != a4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nullsub_533  (binary VA: 0xf99398)
// Original: nullsub_533
// ----------------------------------------------------------------------------
void nullsub_533()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_F993A0  (binary VA: 0xf993a0)
// Original: sub_F993A0
// ----------------------------------------------------------------------------
int sub_F993A0(int a1)
{
  *(uint32_t *)(*(uint32_t *)a1 + 20) = 46;
  return (**(int (***)(int))a1)(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_F993C0  (binary VA: 0xf993c0)
// Original: sub_F993C0
// ----------------------------------------------------------------------------
int sub_F993C0(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;
  size_t v5;
  int result;
  uint8_t *v7;
  uint8_t *v8;
  int v9;
  int16_t v10;
  int16_t *v11;
  int v12;
  int v13;
  uint8_t v14;
  int v15;
  bool v16;
  uint8_t *j;
  int16_t v18;
  size_t v19;
  int16_t v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int i;
  int16_t *v28;
  int v29;
  size_t v30;
  int v31;
  int v32;
  size_t v33;
  int v34;
  int v35;
  int v36;

  v4 = a1[25];
  v5 = a1[23];
  result = a1[72];
  v29 = a1[106];
  v32 = v4;
  v30 = v5;
  v26 = result;
  if ( a4 > 0 )
  {
    v33 = v5 - 1;
    v34 = (v5 - 1) * v4;
    v35 = 2 * v5 + 2;
    v31 = 0;
    v36 = -v4;
    do
    {
      jzero_far(*(void **)(a3 + 4 * v31), v30);
      if ( v32 > 0 )
      {
        for ( i = 0; i != v32; ++i )
        {
          v7 = (uint8_t *)(*(uint32_t *)(a2 + 4 * v31) + i);
          v8 = *(uint8_t **)(a3 + 4 * v31);
          if ( *(uint8_t *)(v29 + 84) != 0 )
          {
            v7 += v34;
            v8 += v33;
            v22 = v36;
            v21 = -2;
            v25 = -1;
            v9 = i;
            v28 = (int16_t *)(*(uint32_t *)(v29 + 4 * i + 68) + v35);
          }
          else
          {
            v21 = 2;
            v25 = 1;
            v28 = *(int16_t **)(v29 + 4 * i + 68);
            v22 = v32;
            v9 = i;
          }
          v23 = *(uint32_t *)(*(uint32_t *)(v29 + 24) + 4 * v9);
          v24 = *(uint32_t *)(*(uint32_t *)(v29 + 16) + 4 * v9);
          v10 = 0;
          if ( v30 != 0 )
          {
            v19 = v30;
            v11 = v28;
            v18 = 0;
            v20 = 0;
            v12 = 0;
            for ( j = v7; ; v7 = j )
            {
              v11 = (int16_t *)((char *)v11 + v21);
              v13 = *(uint8_t *)(v26 + ((v12 + *v11 + 8) >> 4) + *v7);
              v14 = *(uint8_t *)(v23 + v13);
              *v8 += v14;
              v8 += v25;
              v15 = v13 - *(uint8_t *)(v24 + v14);
              v11[v21 / 0xFFFFFFFE] = 3 * v15 + v18;
              v12 = 7 * v15;
              j += v22;
              v16 = v19-- == 1;
              v18 = 5 * v15 + v20;
              if ( v16 )
                break;
              v20 = v15;
            }
            v10 = 5 * v15 + v20;
            v28 = (int16_t *)((char *)v28 + v30 * v21);
          }
          *v28 = v10;
        }
      }
      result = a4;
      *(uint8_t *)(v29 + 84) = *(uint8_t *)(v29 + 84) == 0;
      ++v31;
    }
    while ( v31 != a4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F99620  (binary VA: 0xf99620)
// Original: sub_F99620
// ----------------------------------------------------------------------------
size_t sub_F99620(uint32_t *a1, int a2, int a3, int a4)
{
  size_t result;
  uint8_t *v5;
  int v6;
  uint8_t *v7;
  size_t v8;
  int v9;
  uint8_t *v10;
  int v11;
  int v12;
  int v13;
  int i;
  int v15;
  size_t v16;
  int v17;
  int v18;

  v11 = a1[25];
  result = a1[23];
  v15 = a1[106];
  v16 = result;
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      jzero_far(*(void **)(a3 + 4 * i), v16);
      v18 = *(uint32_t *)(v15 + 48);
      if ( v11 > 0 )
      {
        v13 = 0;
        v17 = *(uint32_t *)(v15 + 48) << 6;
        do
        {
          v5 = *(uint8_t **)(a3 + 4 * i);
          v12 = *(uint32_t *)(*(uint32_t *)(v15 + 24) + 4 * v13);
          v6 = *(uint32_t *)(v15 + 4 * v13 + 52) + v17;
          if ( v16 != 0 )
          {
            v7 = (uint8_t *)(v13 + *(uint32_t *)(a2 + 4 * i));
            v8 = v16;
            v9 = 0;
            do
            {
              v10 = (uint8_t *)(*(uint32_t *)(v6 + 4 * v9) + v12 + *v7);
              v7 += v11;
              v9 = ((uint8_t)v9 + 1) & 0xF;
              *v5 += *v10;
              --v8;
              ++v5;
            }
            while ( v8 != 0 );
          }
          ++v13;
        }
        while ( v13 != v11 );
      }
      *(uint32_t *)(v15 + 48) = ((uint8_t)v18 + 1) & 0xF;
      result = a4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F99750  (binary VA: 0xf99750)
// Original: sub_F99750
// ----------------------------------------------------------------------------
int sub_F99750(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  void *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int j;
  int v11;
  size_t v12;
  int v13;
  int v14;
  int v15;
  bool v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int64_t v26; // rax
  int v27;
  int i;
  int v29;
  int v30;
  int v31;
  void *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  uint8_t *v37;
  int v38;
  char v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;

  v1 = a1[106];
  v42 = v1;
  a1[29] = *(uint32_t *)(v1 + 16);
  a1[28] = *(uint32_t *)(v1 + 20);
  v2 = a1[19];
  if ( v2 == 1 )
  {
    v4 = (void *)(sub_F99270);
    if ( a1[25] != 3 )
      v4 = (void *)(sub_F99620);
    v16 = *(uint8_t *)(v1 + 28) == 0;
    *(uint32_t *)(v1 + 4) = (uint32_t)(uintptr_t)(v4);
    *(uint32_t *)(v1 + 48) = 0;
    if ( v16 )
    {
      v43 = a1[106];
      HIWORD(v14) = 0;
      v15 = 766;
      v16 = a1[19] == 1;
      if ( a1[19] != 1 )
        v15 = 256;
      *(uint8_t *)(v43 + 28) = a1[19] == 1;
      LOWORD(v14) = 0;
      if ( v16 )
        v14 = 510;
      v45 = v14;
      v17 = (*(int (**)(uint32_t *, int, int, uint32_t))(a1[1] + 8))(a1, 1, v15, a1[25]);
      *(uint32_t *)(v43 + 24) = v17;
      v46 = *(uint32_t *)(v43 + 20);
      if ( (int)a1[25] > 0 )
      {
        v44 = 0;
        v18 = v43;
        while ( 1 )
        {
          v19 = *(uint32_t *)(v18 + 4 * v44 + 32);
          v20 = v46 / v19;
          v46 /= v19;
          if ( v45 != 0 )
          {
            *(uint32_t *)(v17 + 4 * v44) += 255;
            v17 = *(uint32_t *)(v43 + 24);
          }
          v37 = *(uint8_t **)(v17 + 4 * v44);
          v41 = v19 - 1;
          v35 = 2 * (v19 - 1);
          v39 = v20;
          v21 = 0;
          v22 = 0;
          v23 = (v19 + 254) / v35;
          do
          {
            if ( v23 < v21 )
            {
              v24 = v22 + 1;
              v25 = v41 + 510 * (v22 + 1) + 255;
              while ( 1 )
              {
                v26 = v25;
                v25 += 510;
                v27 = v26 / v35;
                if ( v27 >= v21 )
                  break;
                ++v24;
              }
              v22 = v24;
              v23 = v27;
            }
            v37[v21++] = v22 * v39;
          }
          while ( v21 != 256 );
          if ( v45 != 0 )
          {
            for ( i = 1; i != 256; ++i )
            {
              v37[-i] = *v37;
              v37[i + 255] = v37[255];
            }
          }
          if ( ++v44 >= a1[25] )
            break;
          v18 = v43;
          v17 = *(uint32_t *)(v43 + 24);
        }
      }
    }
    result = *(uint32_t *)(v42 + 52);
    if ( result != 0 )
      return result;
    result = a1[25];
    v38 = a1[106];
    if ( result <= 0 )
      return result;
    v36 = a1[106];
    v34 = 0;
    while ( 1 )
    {
      v5 = *(uint32_t *)(v36 + 32);
      if ( v34 == 0 )
        goto LABEL_20;
      v6 = 0;
      if ( v5 != *(uint32_t *)(v38 + 32) )
        break;
LABEL_31:
      v40 = *(uint32_t *)(v38 + 4 * v6 + 52);
      if ( v40 == 0 )
        goto LABEL_20;
LABEL_32:
      result = v40;
      ++v34;
      *(uint32_t *)(v36 + 52) = v40;
      v36 += 4;
      if ( v34 >= a1[25] )
        return result;
    }
    while ( ++v6 != v34 )
    {
      if ( v5 == *(uint32_t *)(v38 + 4 * v6 + 32) )
        goto LABEL_31;
    }
LABEL_20:
    v7 = (v5 - 1) << 9;
    v8 = (uint32_t *)(&unk_1CBD760);
    v40 = (*(int (**)(uint32_t *, int, int))a1[1])(a1, 1, 1024);
    v9 = v40;
    do
    {
      for ( j = 0; j != 16; ++j )
        *(uint32_t *)(v9 + 4 * j) = (-510 * *((uint8_t *)v8 + j) + 65025) / v7;
      v8 += 4;
      v9 += 64;
    }
    while ( v8 != (uint32_t *)(intptr_t)(jpeg_natural_order) );
    goto LABEL_32;
  }
  if ( v2 != 0 )
  {
    if ( v2 != 2 )
    {
      *(uint32_t *)(*a1 + 20) = 48;
      return G4_VCALL<int>(a1, 0);
    }
    v11 = *(uint32_t *)(v1 + 68);
    *(uint32_t *)(v1 + 4) = (uint32_t)(uintptr_t)(sub_F993C0);
    *(uint8_t *)(v1 + 84) = 0;
    if ( v11 != 0 )
    {
      result = a1[25];
    }
    else
    {
      result = a1[23];
      v29 = a1[106];
      if ( (int)a1[25] <= 0 )
        return result;
      v30 = 2 * result + 4;
      v31 = 0;
      do
      {
        v33 = v30;
        *(uint32_t *)(v29 + 4 * v31++ + 68) = (*(int (**)(uint32_t *, int, int))(a1[1] + 4))(a1, 1, v30);
        result = a1[25];
        v30 = v33;
      }
      while ( v31 < result );
    }
    v12 = 2 * a1[23] + 4;
    if ( result > 0 )
    {
      v13 = 0;
      do
      {
        v32 = *(void **)(v42 + 4 * v13++ + 68);
        result = (int)(uintptr_t)(jzero_far(v32, v12));
      }
      while ( a1[25] > v13 );
    }
  }
  else
  {
    if ( a1[25] == 3 )
      result = (int)(uintptr_t)(sub_F991B0);
    else
      result = (int)(uintptr_t)(sub_F99100);
    *(uint32_t *)(v1 + 4) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F9A0C0  (binary VA: 0xf9a0c0)
// Original: sub_F9A0C0
// ----------------------------------------------------------------------------
int sub_F9A0C0(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  uint8_t *v6;
  int j;
  int v8;
  uint8_t v9;
  uint8_t v10;
  int16_t *v11;
  int16_t v12;
  int i;
  int v14;

  result = *(uint32_t *)(a1 + 92);
  v14 = result;
  v5 = *(uint32_t *)(*(uint32_t *)(a1 + 424) + 24);
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      v6 = *(uint8_t **)(a2 + 4 * i);
      if ( v14 != 0 )
      {
        for ( j = v14; j != 0; --j )
        {
          v8 = *v6 >> 3;
          v9 = v6[1] >> 2;
          v10 = v6[2];
          v6 += 3;
          v11 = (int16_t *)(*(uint32_t *)(v5 + 4 * v8) + 2 * (32 * v9 + (v10 >> 3)));
          v12 = *v11;
          if ( *v11 != -1 )
            v12 = *v11 + 1;
          *v11 = v12;
        }
      }
      result = a4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F9A160  (binary VA: 0xf9a160)
// Original: sub_F9A160
// ----------------------------------------------------------------------------
uint16_t * sub_F9A160(uint32_t *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
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
  int i;
  g4_int128_t *v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint8_t *v24;
  int *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
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
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  uint32_t *v59;
  uint16_t *v60;
  uint16_t *v61;
  uint16_t *v62;
  uint16_t *v63;
  uint16_t *v64;
  uint16_t *v65;
  uint16_t *v66;
  uint16_t *v67;
  uint32_t *v68;
  uint16_t *v69;
  uint16_t *v70;
  uint16_t *v71;
  uint16_t *v72;
  uint16_t *v73;
  uint16_t *v74;
  uint16_t *v75;
  uint16_t *v76;
  uint32_t *v77;
  uint16_t *v78;
  uint16_t *v79;
  uint16_t *v80;
  uint16_t *v81;
  uint16_t *v82;
  uint16_t *v83;
  uint16_t *v84;
  uint16_t *v85;
  uint32_t *v86;
  uint16_t *v87;
  uint16_t *v88;
  uint16_t *v89;
  uint16_t *v90;
  uint16_t *v91;
  uint16_t *v92;
  uint16_t *v93;
  uint16_t *result;
  int v137;
  int v138;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef uint8_t *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef uint8_t *_g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef char _g4_t_v131;
  typedef int _g4_t_v132;
  typedef uint8_t _g4_t_v133[128];
  typedef uint8_t _g4_t_v134[256];
  typedef uint32_t _g4_t_v135[128];
  typedef uint8_t _g4_t_v136[524];
  enum : size_t {
    _g4_s0 = 1600u,
    _g4_s1 = (12u + sizeof(_g4_t_v95)) > _g4_s0 ? (12u + sizeof(_g4_t_v95)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v96)) > _g4_s1 ? (16u + sizeof(_g4_t_v96)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v97)) > _g4_s2 ? (20u + sizeof(_g4_t_v97)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v98)) > _g4_s3 ? (24u + sizeof(_g4_t_v98)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v99)) > _g4_s4 ? (28u + sizeof(_g4_t_v99)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v100)) > _g4_s5 ? (32u + sizeof(_g4_t_v100)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v101)) > _g4_s6 ? (36u + sizeof(_g4_t_v101)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v102)) > _g4_s7 ? (44u + sizeof(_g4_t_v102)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v103)) > _g4_s8 ? (48u + sizeof(_g4_t_v103)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v104)) > _g4_s9 ? (52u + sizeof(_g4_t_v104)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v105)) > _g4_s10 ? (56u + sizeof(_g4_t_v105)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v106)) > _g4_s11 ? (60u + sizeof(_g4_t_v106)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v107)) > _g4_s12 ? (64u + sizeof(_g4_t_v107)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v108)) > _g4_s13 ? (68u + sizeof(_g4_t_v108)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v110)) > _g4_s14 ? (72u + sizeof(_g4_t_v110)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v111)) > _g4_s15 ? (76u + sizeof(_g4_t_v111)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v112)) > _g4_s16 ? (76u + sizeof(_g4_t_v112)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v113)) > _g4_s17 ? (80u + sizeof(_g4_t_v113)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v114)) > _g4_s18 ? (80u + sizeof(_g4_t_v114)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v115)) > _g4_s19 ? (84u + sizeof(_g4_t_v115)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v116)) > _g4_s20 ? (84u + sizeof(_g4_t_v116)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v117)) > _g4_s21 ? (84u + sizeof(_g4_t_v117)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v118)) > _g4_s22 ? (88u + sizeof(_g4_t_v118)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v119)) > _g4_s23 ? (88u + sizeof(_g4_t_v119)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v120)) > _g4_s24 ? (88u + sizeof(_g4_t_v120)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v121)) > _g4_s25 ? (92u + sizeof(_g4_t_v121)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v122)) > _g4_s26 ? (92u + sizeof(_g4_t_v122)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v123)) > _g4_s27 ? (92u + sizeof(_g4_t_v123)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v124)) > _g4_s28 ? (96u + sizeof(_g4_t_v124)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v125)) > _g4_s29 ? (96u + sizeof(_g4_t_v125)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v126)) > _g4_s30 ? (96u + sizeof(_g4_t_v126)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v127)) > _g4_s31 ? (100u + sizeof(_g4_t_v127)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v128)) > _g4_s32 ? (100u + sizeof(_g4_t_v128)) : _g4_s32,
    _g4_s34 = (100u + sizeof(_g4_t_v129)) > _g4_s33 ? (100u + sizeof(_g4_t_v129)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v130)) > _g4_s34 ? (104u + sizeof(_g4_t_v130)) : _g4_s34,
    _g4_s36 = (104u + sizeof(_g4_t_v131)) > _g4_s35 ? (104u + sizeof(_g4_t_v131)) : _g4_s35,
    _g4_s37 = (104u + sizeof(_g4_t_v132)) > _g4_s36 ? (104u + sizeof(_g4_t_v132)) : _g4_s36,
    _g4_s38 = (112u + sizeof(_g4_t_v133)) > _g4_s37 ? (112u + sizeof(_g4_t_v133)) : _g4_s37,
    _g4_s39 = (240u + sizeof(_g4_t_v134)) > _g4_s38 ? (240u + sizeof(_g4_t_v134)) : _g4_s38,
    _g4_s40 = (496u + sizeof(_g4_t_v135)) > _g4_s39 ? (496u + sizeof(_g4_t_v135)) : _g4_s39,
    _g4_s41 = (1008u + sizeof(_g4_t_v136)) > _g4_s40 ? (1008u + sizeof(_g4_t_v136)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 12u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 16u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 20u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 24u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 28u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 32u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 36u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 44u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 48u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 52u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 56u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 60u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 64u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 68u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 72u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 76u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 76u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 80u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 80u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 84u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 84u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 84u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 88u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 88u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 88u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 92u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 92u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 92u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 96u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 96u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 96u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 100u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 100u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 100u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 104u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 104u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 104u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 112u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 240u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 496u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 1008u);

  v97 = a2 >> 2;
  v137 = a3 >> 3;
  v96 = *(uint32_t *)(a1[106] + 24);
  v138 = a4 >> 2;
  v104 = 32 * (a2 >> 2) + 4;
  v103 = 32 * v137 + 2;
  v127 = 32 * (a2 >> 2) + 28;
  v124 = 32 * v137 + 30;
  v102 = 32 * v138 + 4;
  v118 = a1[28];
  v121 = 32 * v138 + 28;
  if ( v118 <= 0 )
  {
    v17 = (g4_int128_t *)v135;
    v15 = 0;
    goto LABEL_34;
  }
  v4 = (int *)a1[29];
  v115 = *v4;
  v111 = v4[2];
  v113 = v4[1];
  v5 = 0;
  v130 = 0x7FFFFFFF;
  do
  {
    v12 = *(uint8_t *)(v115 + v5);
    if ( v104 > v12 )
    {
      v6 = 2 * (v12 - v104) * 2 * (v12 - v104);
      v7 = 2 * (v12 - v127) * 2 * (v12 - v127);
      goto LABEL_4;
    }
    if ( v127 >= v12 )
    {
      v6 = 0;
      if ( (v127 + v104) >> 1 < v12 )
        v7 = 2 * (v12 - v104) * 2 * (v12 - v104);
      else
        v7 = 2 * (v12 - v127) * 2 * (v12 - v127);
LABEL_4:
      v8 = *(uint8_t *)(v113 + v5);
      if ( v103 > v8 )
        goto LABEL_5;
      goto LABEL_14;
    }
    v6 = 2 * (v12 - v127) * 2 * (v12 - v127);
    v7 = 2 * (v12 - v104) * 2 * (v12 - v104);
    v8 = *(uint8_t *)(v113 + v5);
    if ( v103 > v8 )
    {
LABEL_5:
      v6 += 3 * (v8 - v103) * 3 * (v8 - v103);
      v9 = v7 + 3 * (v8 - v124) * 3 * (v8 - v124);
      goto LABEL_6;
    }
LABEL_14:
    if ( v124 >= v8 )
    {
      if ( (v124 + 32 * v137 + 2) >> 1 < v8 )
        v14 = v8 - v103;
      else
        v14 = v8 - v124;
      v9 = v7 + 3 * v14 * 3 * v14;
LABEL_6:
      v10 = *(uint8_t *)(v111 + v5);
      if ( v102 > v10 )
        goto LABEL_7;
      goto LABEL_16;
    }
    v6 += 3 * (v8 - v124) * 3 * (v8 - v124);
    v9 = v7 + 3 * (v8 - v103) * 3 * (v8 - v103);
    v10 = *(uint8_t *)(v111 + v5);
    if ( v102 > v10 )
    {
LABEL_7:
      v6 += (v10 - v102) * (v10 - v102);
      v11 = v9 + (v10 - v121) * (v10 - v121);
      goto LABEL_8;
    }
LABEL_16:
    if ( v121 >= v10 )
    {
      if ( (32 * v138 + 28 + 32 * v138 + 4) >> 1 < v10 )
        v13 = (v10 - v102) * (v10 - v102);
      else
        v13 = (v10 - v121) * (v10 - v121);
      v11 = v9 + v13;
    }
    else
    {
      v6 += (v10 - v121) * (v10 - v121);
      v11 = v9 + (v10 - v102) * (v10 - v102);
    }
LABEL_8:
    if ( v130 <= v11 )
      v11 = v130;
    v130 = v11;
    v135[v5++] = v6;
  }
  while ( v5 != v118 );
  v15 = 0;
  for ( i = 0; i != v118; ++i )
  {
    if ( v135[i] <= v11 )
      v134[v15++] = i;
  }
  v17 = (g4_int128_t *)v135;
  do
LABEL_34:
    *v17++ = xmmword_1C7C250;
  while ( v17 != (g4_int128_t *)v136 );
  if ( v15 != 0 )
  {
    v18 = (int *)a1[29];
    v105 = v134;
    v98 = &v134[v15];
    v101 = *v18;
    v100 = v18[1];
    v99 = v18[2];
    do
    {
      v131 = *v105;
      v19 = 2 * (v104 - *(uint8_t *)(v101 + *v105));
      v20 = 3 * (v103 - *(uint8_t *)(v100 + *v105));
      v119 = 32 * (v19 + 8);
      v21 = v102 - *(uint8_t *)(v99 + *v105);
      v22 = v20 * v20 + v19 * v19;
      v23 = 72 * (v103 - *(uint8_t *)(v100 + *v105));
      v122 = v22 + v21 * v21;
      v95 = 16 * (v21 + 4);
      v114 = v23 + 144;
      v128 = v95 + 128;
      v125 = v95 + 256;
      v112 = v23 + 432;
      v116 = v23 + 720;
      v108 = v23 + 1584;
      v110 = v23 + 1872;
      v106 = v23 + 1008;
      v107 = v23 + 1296;
      v24 = v133;
      v25 = (int *)(v135);
      do
      {
        if ( v122 < *v25 )
        {
          *v25 = v122;
          *v24 = v131;
        }
        v26 = v122 + v95;
        if ( v122 + v95 < v25[1] )
        {
          v25[1] = v26;
          v24[1] = v131;
        }
        v27 = v128 + v26;
        if ( v27 < v25[2] )
        {
          v25[2] = v27;
          v24[2] = v131;
        }
        v28 = v125 + v27;
        if ( v28 < v25[3] )
        {
          v25[3] = v28;
          v24[3] = v131;
        }
        v29 = v122 + v114;
        if ( v122 + v114 < v25[4] )
        {
          v25[4] = v29;
          v24[4] = v131;
        }
        v30 = v29 + v95;
        if ( v29 + v95 < v25[5] )
        {
          v25[5] = v30;
          v24[5] = v131;
        }
        v31 = v128 + v30;
        if ( v31 < v25[6] )
        {
          v25[6] = v31;
          v24[6] = v131;
        }
        v32 = v125 + v31;
        if ( v32 < v25[7] )
        {
          v25[7] = v32;
          v24[7] = v131;
        }
        v33 = v112 + v29;
        if ( v33 < v25[8] )
        {
          v25[8] = v33;
          v24[8] = v131;
        }
        v34 = v33 + v95;
        if ( v33 + v95 < v25[9] )
        {
          v25[9] = v34;
          v24[9] = v131;
        }
        v35 = v128 + v34;
        if ( v35 < v25[10] )
        {
          v25[10] = v35;
          v24[10] = v131;
        }
        v36 = v125 + v35;
        if ( v36 < v25[11] )
        {
          v25[11] = v36;
          v24[11] = v131;
        }
        v37 = v116 + v33;
        if ( v37 < v25[12] )
        {
          v25[12] = v37;
          v24[12] = v131;
        }
        v38 = v37 + v95;
        if ( v37 + v95 < v25[13] )
        {
          v25[13] = v38;
          v24[13] = v131;
        }
        v39 = v128 + v38;
        if ( v39 < v25[14] )
        {
          v25[14] = v39;
          v24[14] = v131;
        }
        v40 = v125 + v39;
        if ( v40 < v25[15] )
        {
          v25[15] = v40;
          v24[15] = v131;
        }
        v41 = v106 + v37;
        if ( v41 < v25[16] )
        {
          v25[16] = v41;
          v24[16] = v131;
        }
        v42 = v41 + v95;
        if ( v41 + v95 < v25[17] )
        {
          v25[17] = v42;
          v24[17] = v131;
        }
        v43 = v128 + v42;
        if ( v43 < v25[18] )
        {
          v25[18] = v43;
          v24[18] = v131;
        }
        v44 = v125 + v43;
        if ( v44 < v25[19] )
        {
          v25[19] = v44;
          v24[19] = v131;
        }
        v45 = v107 + v41;
        if ( v45 < v25[20] )
        {
          v25[20] = v45;
          v24[20] = v131;
        }
        v46 = v45 + v95;
        if ( v45 + v95 < v25[21] )
        {
          v25[21] = v46;
          v24[21] = v131;
        }
        v47 = v128 + v46;
        if ( v47 < v25[22] )
        {
          v25[22] = v47;
          v24[22] = v131;
        }
        v48 = v125 + v47;
        if ( v48 < v25[23] )
        {
          v25[23] = v48;
          v24[23] = v131;
        }
        v49 = v108 + v45;
        if ( v49 < v25[24] )
        {
          v25[24] = v49;
          v24[24] = v131;
        }
        v50 = v49 + v95;
        if ( v49 + v95 < v25[25] )
        {
          v25[25] = v50;
          v24[25] = v131;
        }
        v51 = v128 + v50;
        if ( v51 < v25[26] )
        {
          v25[26] = v51;
          v24[26] = v131;
        }
        v52 = v125 + v51;
        if ( v52 < v25[27] )
        {
          v25[27] = v52;
          v24[27] = v131;
        }
        v53 = v110 + v49;
        if ( v53 < v25[28] )
        {
          v25[28] = v53;
          v24[28] = v131;
        }
        v54 = v95 + v53;
        if ( v54 < v25[29] )
        {
          v25[29] = v54;
          v24[29] = v131;
        }
        v55 = v128 + v54;
        if ( v55 < v25[30] )
        {
          v25[30] = v55;
          v24[30] = v131;
        }
        v56 = v125 + v55;
        if ( v56 < v25[31] )
        {
          v25[31] = v56;
          v24[31] = v131;
        }
        v25 += 32;
        v122 += v119;
        v24 += 32;
        v119 += 512;
      }
      while ( v25 != (int *)v136 );
      ++v105;
    }
    while ( v105 != v98 );
  }
  v132 = 2 * (4 * v138 + 32 * (8 * v137 + 2));
  v129 = 2 * (4 * v138 + 32 * (8 * v137 + 3));
  v57 = 2 * (4 * v138 + 32 * (8 * v137 + 1));
  v126 = 2 * (4 * v138 + 32 * (8 * v137 + 4));
  v58 = 2 * (4 * v138 + (v137 << 8));
  v123 = 2 * (4 * v138 + 32 * (8 * v137 + 5));
  v117 = 2 * (32 * (8 * v137 + 7) + 4 * v138);
  v59 = (uint32_t *)(v96 + 16 * v97);
  v120 = 2 * (4 * v138 + 32 * (8 * v137 + 6));
  v60 = (uint16_t *)(*v59 + v58);
  *v60 = v133[0] + 1;
  v60[1] = v133[1] + 1;
  v60[2] = v133[2] + 1;
  v60[3] = v133[3] + 1;
  v61 = (uint16_t *)(*v59 + v57);
  *v61 = v133[4] + 1;
  v61[1] = v133[5] + 1;
  v61[2] = v133[6] + 1;
  v61[3] = v133[7] + 1;
  v62 = (uint16_t *)(*v59 + v132);
  *v62 = v133[8] + 1;
  v62[1] = v133[9] + 1;
  v62[2] = v133[10] + 1;
  v62[3] = v133[11] + 1;
  v63 = (uint16_t *)(*v59 + v129);
  *v63 = v133[12] + 1;
  v63[1] = v133[13] + 1;
  v63[2] = v133[14] + 1;
  v63[3] = v133[15] + 1;
  v64 = (uint16_t *)(*v59 + v126);
  *v64 = v133[16] + 1;
  v64[1] = v133[17] + 1;
  v64[2] = v133[18] + 1;
  v64[3] = v133[19] + 1;
  v65 = (uint16_t *)(*v59 + v123);
  *v65 = v133[20] + 1;
  v65[1] = v133[21] + 1;
  v65[2] = v133[22] + 1;
  v65[3] = v133[23] + 1;
  v66 = (uint16_t *)(*v59 + v120);
  *v66 = v133[24] + 1;
  v66[1] = v133[25] + 1;
  v66[2] = v133[26] + 1;
  v66[3] = v133[27] + 1;
  v67 = (uint16_t *)(v117 + *v59);
  *v67 = v133[28] + 1;
  v67[1] = v133[29] + 1;
  v67[2] = v133[30] + 1;
  v67[3] = v133[31] + 1;
  v68 = (uint32_t *)(v96 + 16 * v97 + 4);
  v69 = (uint16_t *)(*v68 + v58);
  *v69 = v133[32] + 1;
  v69[1] = v133[33] + 1;
  v69[2] = v133[34] + 1;
  v69[3] = v133[35] + 1;
  v70 = (uint16_t *)(*v68 + v57);
  *v70 = v133[36] + 1;
  v70[1] = v133[37] + 1;
  v70[2] = v133[38] + 1;
  v70[3] = v133[39] + 1;
  v71 = (uint16_t *)(*v68 + v132);
  *v71 = v133[40] + 1;
  v71[1] = v133[41] + 1;
  v71[2] = v133[42] + 1;
  v71[3] = v133[43] + 1;
  v72 = (uint16_t *)(*v68 + v129);
  *v72 = v133[44] + 1;
  v72[1] = v133[45] + 1;
  v72[2] = v133[46] + 1;
  v72[3] = v133[47] + 1;
  v73 = (uint16_t *)(*v68 + v126);
  *v73 = v133[48] + 1;
  v73[1] = v133[49] + 1;
  v73[2] = v133[50] + 1;
  v73[3] = v133[51] + 1;
  v74 = (uint16_t *)(*v68 + v123);
  *v74 = v133[52] + 1;
  v74[1] = v133[53] + 1;
  v74[2] = v133[54] + 1;
  v74[3] = v133[55] + 1;
  v75 = (uint16_t *)(*v68 + v120);
  *v75 = v133[56] + 1;
  v75[1] = v133[57] + 1;
  v75[2] = v133[58] + 1;
  v75[3] = v133[59] + 1;
  v76 = (uint16_t *)(v117 + *v68);
  *v76 = v133[60] + 1;
  v76[1] = v133[61] + 1;
  v76[2] = v133[62] + 1;
  v76[3] = v133[63] + 1;
  v77 = (uint32_t *)(v96 + 16 * v97 + 8);
  v78 = (uint16_t *)(*v77 + v58);
  *v78 = v133[64] + 1;
  v78[1] = v133[65] + 1;
  v78[2] = v133[66] + 1;
  v78[3] = v133[67] + 1;
  v79 = (uint16_t *)(*v77 + v57);
  *v79 = v133[68] + 1;
  v79[1] = v133[69] + 1;
  v79[2] = v133[70] + 1;
  v79[3] = v133[71] + 1;
  v80 = (uint16_t *)(*v77 + v132);
  *v80 = v133[72] + 1;
  v80[1] = v133[73] + 1;
  v80[2] = v133[74] + 1;
  v80[3] = v133[75] + 1;
  v81 = (uint16_t *)(*v77 + v129);
  *v81 = v133[76] + 1;
  v81[1] = v133[77] + 1;
  v81[2] = v133[78] + 1;
  v81[3] = v133[79] + 1;
  v82 = (uint16_t *)(*v77 + v126);
  *v82 = v133[80] + 1;
  v82[1] = v133[81] + 1;
  v82[2] = v133[82] + 1;
  v82[3] = v133[83] + 1;
  v83 = (uint16_t *)(*v77 + v123);
  *v83 = v133[84] + 1;
  v83[1] = v133[85] + 1;
  v83[2] = v133[86] + 1;
  v83[3] = v133[87] + 1;
  v84 = (uint16_t *)(*v77 + v120);
  *v84 = v133[88] + 1;
  v84[1] = v133[89] + 1;
  v84[2] = v133[90] + 1;
  v84[3] = v133[91] + 1;
  v85 = (uint16_t *)(v117 + *v77);
  *v85 = v133[92] + 1;
  v85[1] = v133[93] + 1;
  v85[2] = v133[94] + 1;
  v85[3] = v133[95] + 1;
  v86 = (uint32_t *)(v96 + 16 * v97 + 12);
  v87 = (uint16_t *)(*v86 + v58);
  *v87 = v133[96] + 1;
  v87[1] = v133[97] + 1;
  v87[2] = v133[98] + 1;
  v87[3] = v133[99] + 1;
  v88 = (uint16_t *)(*v86 + v57);
  *v88 = v133[100] + 1;
  v88[1] = v133[101] + 1;
  v88[2] = v133[102] + 1;
  v88[3] = v133[103] + 1;
  v89 = (uint16_t *)(*v86 + v132);
  *v89 = v133[104] + 1;
  v89[1] = v133[105] + 1;
  v89[2] = v133[106] + 1;
  v89[3] = v133[107] + 1;
  v90 = (uint16_t *)(*v86 + v129);
  *v90 = v133[108] + 1;
  v90[1] = v133[109] + 1;
  v90[2] = v133[110] + 1;
  v90[3] = v133[111] + 1;
  v91 = (uint16_t *)(*v86 + v126);
  *v91 = v133[112] + 1;
  v91[1] = v133[113] + 1;
  v91[2] = v133[114] + 1;
  v91[3] = v133[115] + 1;
  v92 = (uint16_t *)(*v86 + v123);
  *v92 = v133[116] + 1;
  v92[1] = v133[117] + 1;
  v92[2] = v133[118] + 1;
  v92[3] = v133[119] + 1;
  v93 = (uint16_t *)(*v86 + v120);
  *v93 = v133[120] + 1;
  v93[1] = v133[121] + 1;
  v93[2] = v133[122] + 1;
  v93[3] = v133[123] + 1;
  result = (uint16_t *)(v117 + *v86);
  *result = v133[124] + 1;
  result[1] = v133[125] + 1;
  result[2] = v133[126] + 1;
  result[3] = v133[127] + 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F9B0B0  (binary VA: 0xf9b0b0)
// Original: sub_F9B0B0
// ----------------------------------------------------------------------------
int sub_F9B0B0(uint32_t *a1, int a2, int a3, int a4)
{
  int result;
  uint8_t *v5;
  bool v6;
  int v7;
  int v8;
  uint8_t v9;
  int16_t *v10;
  int16_t v11;
  uint8_t *v12;
  int v13;
  int v14;
  int i;
  int v16;

  v14 = *(uint32_t *)(a1[106] + 24);
  v16 = a1[23];
  result = a4;
  if ( a4 > 0 )
  {
    for ( i = 0; i != a4; ++i )
    {
      v5 = *(uint8_t **)(a2 + 4 * i);
      v12 = *(uint8_t **)(a3 + 4 * i);
      if ( v16 != 0 )
      {
        v13 = v16;
        do
        {
          v7 = v5[2] >> 3;
          v8 = v5[1] >> 2;
          v9 = *v5 >> 3;
          v5 += 3;
          v10 = (int16_t *)(*(uint32_t *)(v14 + 4 * v9) + 2 * (v7 + 32 * v8));
          v11 = *v10;
          if ( *v10 == 0 )
          {
            sub_F9A160(a1, v9, v8, v7);
            v11 = *v10;
          }
          *v12 = v11 - 1;
          v6 = v13-- == 1;
          ++v12;
        }
        while ( !v6 );
      }
      result = a4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F9B1A0  (binary VA: 0xf9b1a0)
// Original: sub_F9B1A0
// ----------------------------------------------------------------------------
int sub_F9B1A0(uint32_t *a1, int a2, int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int result;
  uint16_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint16_t *v14;
  uint16_t v15;
  int16_t v16;
  int16_t v17; // bp
  int v18;
  int v19;
  uint8_t *v20;
  int v21;
  int v22;
  int v23;
  uint8_t *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint16_t v29;
  int16_t v30;
  int16_t v31;
  int16_t v32;
  int16_t v33;
  int16_t v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  uint16_t *v43;
  int v44;
  int v45;
  int v46;

  v45 = a1[23];
  v46 = a1[106];
  v39 = *(uint32_t *)(v46 + 24);
  v4 = (int *)a1[29];
  v26 = a1[72];
  v27 = *(uint32_t *)(v46 + 40);
  v5 = *v4;
  v6 = v4[1];
  v42 = v4[2];
  result = a4;
  v40 = v5;
  v41 = v6;
  if ( a4 > 0 )
  {
    v44 = 0;
    do
    {
      v20 = *(uint8_t **)(a2 + 4 * v44);
      v24 = *(uint8_t **)(a3 + 4 * v44);
      if ( *(uint8_t *)(v46 + 36) != 0 )
      {
        v20 = (uint8_t *)(3 * v45 - 3 + *(uint32_t *)(a2 + 4 * v44));
        v24 += v45 - 1;
        v38 = -1;
        v37 = -1;
        v36 = -2;
        v28 = -6;
        v43 = (uint16_t *)(*(uint32_t *)(v46 + 32) + 2 * (3 * v45 + 3));
        *(uint8_t *)(v46 + 36) = 0;
        v35 = -3;
        if ( v45 != 0 )
          goto LABEL_5;
      }
      else
      {
        v43 = *(uint16_t **)(v46 + 32);
        v38 = 1;
        v37 = 5;
        v36 = 4;
        *(uint8_t *)(v46 + 36) = 1;
        v28 = 6;
        v35 = 3;
        if ( v45 != 0 )
        {
LABEL_5:
          v8 = v43;
          v25 = v45;
          v31 = 0;
          v30 = 0;
          v29 = 0;
          v34 = 0;
          v33 = 0;
          v32 = 0;
          v9 = 0;
          v23 = 0;
          v21 = 0;
          while ( 1 )
          {
            v12 = *(uint8_t *)(v26 + *(uint32_t *)(v27 + 4 * ((v21 + (int16_t)v8[v28 / 2u] + 8) >> 4)) + *v20);
            v13 = *(uint8_t *)(v26 + *(uint32_t *)(v27 + 4 * ((v23 + (int16_t)v8[v36] + 8) >> 4)) + v20[1]);
            v22 = *(uint8_t *)(v26 + *(uint32_t *)(v27 + 4 * ((v9 + (int16_t)v8[v37] + 8) >> 4)) + v20[2]);
            v14 = (uint16_t *)(*(uint32_t *)(v39 + 4 * (v12 >> 3)) + 2 * ((v22 >> 3) + 32 * (v13 >> 2)));
            v15 = *v14;
            if ( *v14 == 0 )
            {
              v18 = *(uint8_t *)(v26 + *(uint32_t *)(v27 + 4 * ((v23 + (int16_t)v8[v36] + 8) >> 4)) + v20[1]);
              sub_F9A160(a1, v12 >> 3, v13 >> 2, v22 >> 3);
              v15 = *v14;
              v13 = v18;
            }
            *v24 = v15 - 1;
            v19 = v12 - *(uint8_t *)(v40 + v15 - 1);
            v10 = v13 - *(uint8_t *)(v41 + v15 - 1);
            v11 = v22 - *(uint8_t *)(v42 + v15 - 1);
            *v8 = 3 * v19 + v29;
            v29 = 5 * v19 + v32;
            v21 = 7 * v19;
            v8[1] = 3 * v10 + v30;
            v30 = 5 * v10 + v33;
            v23 = 7 * v10;
            v8[2] = 3 * v11 + v31;
            v8 = (uint16_t *)((char *)v8 + v28);
            v9 = 7 * v11;
            v31 = 5 * v11 + v34;
            v20 += v35;
            v24 += v38;
            if ( --v25 == 0 )
              break;
            v34 = v11;
            v33 = v10;
            v32 = v19;
          }
          v16 = 5 * v10 + v33;
          v17 = v31;
          v43 = (uint16_t *)((char *)v43 + v45 * v28);
          result = v29;
          goto LABEL_11;
        }
      }
      v17 = 0;
      v16 = 0;
      result = 0;
LABEL_11:
      ++v44;
      *v43 = result;
      v43[1] = v16;
      v43[2] = v17;
    }
    while ( v44 != a4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nullsub_534  (binary VA: 0xf9b5a8)
// Original: nullsub_534
// ----------------------------------------------------------------------------
void nullsub_534()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_F9B5B0  (binary VA: 0xf9b5b0)
// Original: sub_F9B5B0
// ----------------------------------------------------------------------------
int sub_F9B5B0(int a1)
{
  int result;

  result = *(uint32_t *)(a1 + 424);
  *(uint8_t *)(result + 28) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F9B5D0  (binary VA: 0xf9b5d0)
// Original: sub_F9B5D0
// ----------------------------------------------------------------------------
int sub_F9B5D0(uint32_t *a1, char a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  int j;
  void *v7;
  int result;
  int (*v9)(uint32_t *, int, int, int);
  size_t v10;
  void *v11;
  int v12;
  int v13;
  int v14;
  int i;
  int v16;
  uint32_t *v17;
  int *v18;
  int *v19;
  uint32_t *v20;
  uint32_t *v21;
  int *v22;

  v2 = 0;
  v3 = a1;
  v4 = a1[106];
  v5 = *(uint32_t *)(v4 + 24);
  if ( a1[19] != 0 )
  {
    a1[19] = 2;
    LOBYTE(v2) = 2;
  }
  if ( a2 == 0 )
  {
    v9 = sub_F9B1A0;
    if ( v2 != 2 )
      v9 = sub_F9B0B0;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v9);
    *(uint32_t *)(v4 + 8) = ((uint32_t)(uintptr_t)(&g4_noop_ret0));
    result = a1[28];
    if ( result <= 0 )
    {
      *(uint32_t *)(*a1 + 20) = 56;
      *(uint32_t *)(*a1 + 24) = 1;
    }
    else
    {
      if ( result <= 256 )
      {
        if ( a1[19] != 2 )
          goto LABEL_13;
LABEL_17:
        v10 = 6 * v3[23] + 12;
        v11 = *(void **)(v4 + 32);
        if ( v11 == nullptr )
        {
          v21 = v3;
          v11 = (void *)(*(int (**)(uint32_t *, int, size_t))(v3[1] + 4))(v3, 1, v10);
          *(uint32_t *)(v4 + 32) = (uint32_t)(uintptr_t)(v11);
          v3 = v21;
        }
        v20 = v3;
        jzero_far(v11, v10);
        result = *(uint32_t *)(v4 + 40);
        if ( result == 0 )
        {
          v12 = v20[106];
          v13 = (*(int (**)(uint32_t *, int, int))v20[1])(v20, 1, 2044);
          v14 = 0;
          *(uint32_t *)(v12 + 40) = v13 + 1020;
          for ( i = 0; i != 16; ++i )
          {
            *(uint32_t *)(v13 + 4 * i + 1020) = i;
            *(uint32_t *)(v13 + 4 * v14 + 1020) = v14;
            --v14;
          }
          v16 = 16;
          v17 = (uint32_t *)(v13 + 956);
          do
          {
            *(uint32_t *)(v13 + 4 * i++ + 1020) = v16;
            *v17-- = -v16;
            v16 += !(i & 1);
          }
          while ( i != 48 );
          v18 = (int *)(v13 + 1212);
          v19 = (int *)(v13 + 828);
          v22 = (int *)(v13 + 2044);
          result = -v16;
          do
          {
            *v18++ = v16;
            *v19-- = result;
          }
          while ( v18 != v22 );
        }
        *(uint8_t *)(v4 + 36) = 0;
LABEL_13:
        if ( *(uint8_t *)(v4 + 28) == 0 )
          return result;
        goto LABEL_5;
      }
      *(uint32_t *)(*a1 + 20) = 57;
      *(uint32_t *)(*a1 + 24) = 256;
    }
    result = G4_VCALL<int>(a1, 0);
    v3 = a1;
    if ( a1[19] != 2 )
      goto LABEL_13;
    goto LABEL_17;
  }
  *(uint8_t *)(v4 + 28) = 1;
  *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(sub_F9A0C0);
  *(uint32_t *)(v4 + 8) = (uint32_t)(uintptr_t)(sub_F9BC00);
LABEL_5:
  for ( j = 0; j != 32; ++j )
  {
    v7 = *(void **)(v5 + 4 * j);
    result = (int)(uintptr_t)(jzero_far(v7, 0x1000u));
  }
  *(uint8_t *)(v4 + 28) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F9B7E0  (binary VA: 0xf9b7e0)
// Original: sub_F9B7E0
// ----------------------------------------------------------------------------
int * sub_F9B7E0(int a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint16_t *v10;
  int v11;
  uint16_t *v12;
  int v13;
  int v14;
  int j;
  int v16;
  uint16_t *v17;
  int m;
  int v19;
  int v20;
  int v21;
  int v24;
  int k;
  int v26;
  uint16_t *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int i;
  uint16_t *v34;
  int v35;
  uint16_t *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;

  v44 = *(uint32_t *)(a1 + 24);
  v43 = a2[1];
  v40 = *a2;
  v2 = *a2;
  v41 = a2[2];
  v39 = a2[3];
  v37 = a2[4];
  v3 = a2[5];
  if ( *a2 < v43 )
  {
    do
    {
      if ( v41 <= v39 )
      {
        v4 = v41;
        v5 = *(uint32_t *)(v44 + 4 * v2) + (v41 << 6);
        do
        {
          if ( v37 <= v3 )
          {
            v6 = v37;
            if ( *(uint16_t *)(v5 + 2 * v37) != 0 )
            {
LABEL_59:
              *a2 = v2;
              if ( v43 > v2 )
                goto LABEL_60;
              goto LABEL_70;
            }
            while ( v3 >= ++v6 )
            {
              if ( *(uint16_t *)(v5 + 2 * v6) != 0 )
                goto LABEL_59;
            }
          }
          ++v4;
          v5 += 64;
        }
        while ( v39 >= v4 );
      }
      ++v2;
    }
    while ( v43 >= v2 );
    v2 = v40;
LABEL_60:
    v28 = v43;
    do
    {
      if ( v41 <= v39 )
      {
        v29 = v41;
        v30 = *(uint32_t *)(v44 + 4 * v28) + (v41 << 6);
        do
        {
          if ( v37 <= v3 )
          {
            v31 = v37;
            if ( *(uint16_t *)(v30 + 2 * v37) != 0 )
            {
LABEL_12:
              v40 = v2;
              v43 = v28;
              a2[1] = v28;
              goto LABEL_13;
            }
            while ( v3 >= ++v31 )
            {
              if ( *(uint16_t *)(v30 + 2 * v31) != 0 )
                goto LABEL_12;
            }
          }
          ++v29;
          v30 += 64;
        }
        while ( v39 >= v29 );
      }
      --v28;
    }
    while ( v28 >= v2 );
LABEL_70:
    v40 = v2;
  }
LABEL_13:
  if ( v41 < v39 )
  {
    v7 = v41;
    v8 = 2 * (v37 + 32 * v41);
    while ( 1 )
    {
      v9 = v40;
      if ( v43 >= v40 )
        break;
LABEL_22:
      ++v7;
      v8 += 64;
      if ( v39 < v7 )
      {
        v7 = v41;
LABEL_72:
        v32 = v39;
        v42 = 2 * (v37 + 32 * v39);
        do
        {
          for ( i = v40; v43 >= i; ++i )
          {
            if ( v37 <= v3 )
            {
              v34 = (uint16_t *)(v42 + *(uint32_t *)(v44 + 4 * i));
              if ( *v34 != 0 )
              {
LABEL_24:
                v41 = v7;
                v39 = v32;
                a2[3] = v32;
                goto LABEL_25;
              }
              v35 = v37;
              v36 = &v34[-v37];
              while ( v3 >= ++v35 )
              {
                if ( v36[v35] != 0 )
                  goto LABEL_24;
              }
            }
          }
          --v32;
          v42 -= 64;
        }
        while ( v32 >= v7 );
LABEL_81:
        v41 = v7;
        goto LABEL_25;
      }
    }
    while ( 1 )
    {
      if ( v37 <= v3 )
      {
        v10 = (uint16_t *)(*(uint32_t *)(v44 + 4 * v9) + v8);
        if ( *v10 != 0 )
        {
LABEL_71:
          a2[2] = v7;
          if ( v39 > v7 )
            goto LABEL_72;
          goto LABEL_81;
        }
        v11 = v37;
        v12 = &v10[-v37];
        while ( v3 >= ++v11 )
        {
          if ( v12[v11] != 0 )
            goto LABEL_71;
        }
      }
      if ( ++v9 > v43 )
        goto LABEL_22;
    }
  }
LABEL_25:
  if ( v37 >= v3 )
    goto LABEL_37;
  v13 = 2 * (32 * v41 + v37);
  v14 = v37;
  do
  {
    for ( j = v40; v43 >= j; ++j )
    {
      v16 = v41;
      if ( v39 >= v41 )
      {
        v17 = (uint16_t *)(*(uint32_t *)(v44 + 4 * j) + v13);
        if ( *v17 != 0 )
        {
LABEL_48:
          a2[4] = v14;
          if ( v3 > v14 )
            goto LABEL_49;
          goto LABEL_58;
        }
        while ( 1 )
        {
          ++v16;
          v17 += 32;
          if ( v16 > v39 )
            break;
          if ( *v17 != 0 )
            goto LABEL_48;
        }
      }
    }
    ++v14;
    v13 += 2;
  }
  while ( v3 >= v14 );
  v14 = v37;
LABEL_49:
  v24 = v3;
  v38 = 2 * (v3 + 32 * v41);
  do
  {
    for ( k = v40; v43 >= k; ++k )
    {
      v26 = v41;
      if ( v39 >= v41 )
      {
        v27 = (uint16_t *)(v38 + *(uint32_t *)(v44 + 4 * k));
        if ( *v27 != 0 )
        {
LABEL_36:
          v37 = v14;
          v3 = v24;
          a2[5] = v24;
          goto LABEL_37;
        }
        while ( 1 )
        {
          ++v26;
          v27 += 32;
          if ( v39 < v26 )
            break;
          if ( *v27 != 0 )
            goto LABEL_36;
        }
      }
    }
    --v24;
    v38 -= 2;
  }
  while ( v24 >= v14 );
LABEL_58:
  v37 = v14;
LABEL_37:
  a2[6] = 16 * (v43 - v40) * 16 * (v43 - v40) + 12 * (v39 - v41) * 12 * (v39 - v41) + 8 * (v3 - v37) * 8 * (v3 - v37);
  for ( m = 0; v43 >= v40; ++v40 )
  {
    if ( v39 >= v41 )
    {
      v19 = v41;
      v20 = *(uint32_t *)(v44 + 4 * v40) + (v41 << 6);
      do
      {
        if ( v3 >= v37 )
        {
          v21 = v37;
          do
          {
            if ( *(uint16_t *)(v20 + 2 * v21++) != 0 )
              ++m;
          }
          while ( v3 >= v21 );
        }
        ++v19;
        v20 += 64;
      }
      while ( v39 >= v19 );
    }
  }
  a2[7] = m;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_F9BC00  (binary VA: 0xf9bc00)
// Original: sub_F9BC00
// ----------------------------------------------------------------------------
int sub_F9BC00(int *a1)
{
  int *v1;
  int *v2;
  int *v3;
  int v4;
  int v5;
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
  int result;
  int *v19;
  int v20;
  int i;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;

  v41 = a1[106];
  a1[29] = *(uint32_t *)(v41 + 16);
  v25 = *(uint32_t *)(v41 + 20);
  v36 = (int *)(*(int (**)(int *, int, int))a1[1])(a1, 1, 32 * v25);
  *v36 = 0;
  v36[1] = 31;
  v36[2] = 0;
  v36[3] = 63;
  v36[4] = 0;
  v36[5] = 31;
  sub_F9B7E0(a1[106], v36);
  v38 = 1;
  v1 = v36 + 8;
  if ( v25 > 1 )
  {
    do
    {
      if ( v25 < 2 * v38 )
      {
        v19 = v36;
        v3 = nullptr;
        v20 = 0;
        for ( i = 0; ; i = v22 )
        {
          v22 = i;
          if ( v19[6] > i )
          {
            v22 = v19[6];
            v3 = v19;
          }
          ++v20;
          v19 += 8;
          if ( v20 >= v38 )
            break;
        }
      }
      else
      {
        v2 = v36;
        v3 = nullptr;
        v4 = 0;
        v5 = 0;
        do
        {
          if ( v2[7] > v5 && v2[6] > 0 )
          {
            v3 = v2;
            v5 = v2[7];
          }
          ++v4;
          v2 += 8;
        }
        while ( v4 < v38 );
      }
      if ( v3 == nullptr )
        break;
      v1[1] = v3[1];
      v1[3] = v3[3];
      v1[5] = v3[5];
      *v1 = *v3;
      v1[2] = v3[2];
      v1[4] = v3[4];
      v27 = v3[3];
      v28 = v3[2];
      v6 = v3[1];
      v7 = 16 * (v6 - *v3);
      v30 = v3[5];
      v32 = v3[4];
      v8 = 0;
      if ( v7 <= 12 * (v27 - v28) )
      {
        v7 = 12 * (v27 - v28);
        LOBYTE(v8) = 1;
      }
      if ( 8 * (v30 - v32) <= v7 )
      {
        if ( v8 == 1 )
        {
          v24 = (v28 + v27) / 2;
          v3[3] = v24;
          v1[2] = v24 + 1;
        }
        else
        {
          v23 = *v3 + v6;
          v3[1] = v23 / 2;
          *v1 = v23 / 2 + 1;
        }
      }
      else
      {
        v9 = (v32 + v30) / 2;
        v3[5] = v9;
        v1[4] = v9 + 1;
      }
      sub_F9B7E0(a1[106], v3);
      sub_F9B7E0(a1[106], v1);
      v1 += 8;
      ++v38;
    }
    while ( v38 != v25 );
  }
  v40 = 0;
  do
  {
    v10 = 0;
    v11 = 0;
    v35 = *v36;
    v39 = v36[1];
    v37 = v36[2];
    v34 = v36[3];
    v31 = v36[5];
    if ( *v36 > v39 )
    {
      v16 = 0;
      v26 = 0;
    }
    else
    {
      v12 = 0;
      v26 = 0;
      do
      {
        if ( v37 <= v34 )
        {
          v29 = *(uint32_t *)(*(uint32_t *)(a1[106] + 24) + 4 * v35) + (v37 << 6);
          v33 = v36[2];
          do
          {
            if ( v36[4] <= v31 )
            {
              v13 = v36[4];
              do
              {
                v14 = *(uint16_t *)(v29 + 2 * v13);
                v15 = v14 * (8 * v13++ + 4);
                if ( v14 != 0 )
                {
                  v12 += v14 * (8 * v35 + 4);
                  v11 += v14 * (4 * v33 + 2);
                  v10 += v15;
                }
                v26 += v14;
              }
              while ( v31 >= v13 );
            }
            ++v33;
            v29 += 64;
          }
          while ( v34 >= v33 );
        }
        ++v35;
      }
      while ( v39 >= v35 );
      v11 += v26 >> 1;
      v10 += v26 >> 1;
      v16 = v12 + (v26 >> 1);
    }
    v36 += 8;
    *(uint8_t *)(*(uint32_t *)a1[29] + v40) = v16 / v26;
    *(uint8_t *)(*(uint32_t *)(a1[29] + 4) + v40) = v11 / v26;
    *(uint8_t *)(*(uint32_t *)(a1[29] + 8) + v40++) = v10 / v26;
  }
  while ( v40 < v38 );
  v17 = *a1;
  a1[28] = v38;
  *(uint32_t *)(v17 + 20) = 96;
  *(uint32_t *)(*a1 + 24) = v38;
  result = G4_VCALL<int>(a1, 4, 1);
  *(uint8_t *)(v41 + 28) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: jdiv_round_up  (binary VA: 0xf9c270)
// Original: jdiv_round_up
// ----------------------------------------------------------------------------
int jdiv_round_up(int a1, int a2)
{
  return (a2 + a1 - 1) / a2;
}

// ----------------------------------------------------------------------------
// Function: jround_up  (binary VA: 0xf9c290)
// Original: jround_up
// ----------------------------------------------------------------------------
int jround_up(int a1, int a2)
{
  return a1 + a2 - 1 - (a1 + a2 - 1) % a2;
}

// ----------------------------------------------------------------------------
// Function: jcopy_sample_rows  (binary VA: 0xf9c2b0)
// Original: jcopy_sample_rows
// ----------------------------------------------------------------------------
void * jcopy_sample_rows(int a1, int a2, int a3, int a4, int a5, size_t n)
{
  int v6;
  const void **v7;
  void **v8;
  void *result;

  v6 = a5;
  if ( a5 > 0 )
  {
    v7 = (const void **)(a1 + 4 * a2);
    v8 = (void **)(a3 + 4 * a4);
    do
    {
      result = memcpy(*v8, *v7, n);
      --v6;
      ++v7;
      ++v8;
    }
    while ( v6 != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: jcopy_block_row  (binary VA: 0xf9c320)
// Original: jcopy_block_row
// ----------------------------------------------------------------------------
void * jcopy_block_row(void *src, void *dest, int a3)
{
  return memcpy(dest, src, a3 << 7);
}

// ----------------------------------------------------------------------------
// Function: jzero_far  (binary VA: 0xf9c360)
// Original: jzero_far
// ----------------------------------------------------------------------------
void * jzero_far(void *s, size_t n)
{
  return memset(s, 0, n);
}

// ----------------------------------------------------------------------------
// Function: sub_FB4430  (binary VA: 0xfb4430)
// Original: sub_FB4430
// ----------------------------------------------------------------------------
int sub_FB4430(int a1, void *a2, int a3, int a4, uint32_t *a5)
{
  int v6;
  int i;
  uint32_t *v8;
  const char *v9;
  int v10;
  int v11;
  int v12;
  void *v13;
  void *dest;
  int v15;
  int v16;
  void *v17;
  uint32_t *v18;
  const char *v19;
  unsigned int v20;
  unsigned int v21;
  int result;
  int v23;
  void *v24;
  void *v25;
  typedef void *_g4_t_src;
  typedef void *_g4_t_srca;
  typedef void *_g4_t_v28;
  typedef void *_g4_t_v29;
  typedef void *_g4_t_v30;
  typedef void *_g4_t_v31;
  typedef char _g4_t_s[78];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_src)) > _g4_s0 ? (4u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_srca)) > _g4_s1 ? (4u + sizeof(_g4_t_srca)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v29)) > _g4_s3 ? (16u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v30)) > _g4_s4 ? (16u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (46u + sizeof(_g4_t_s)) > _g4_s6 ? (46u + sizeof(_g4_t_s)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 4u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 46u);

  a5[2] = 0;
  a5[3] = 0;
  a5[4] = 0;
  *a5 = 0;
  a5[1] = 0;
  if ( a4 == -1 )
  {
    *a5 = (uint32_t)(uintptr_t)(a2);
    a5[1] = a3;
    return a3;
  }
  else
  {
    if ( a4 > 2 )
    {
      v30 = a2;
      snprintf(s, 0x32u, "Unknown compression type %d", a4);
      png_warning(a1, s);
      a2 = v30;
    }
    v6 = *(uint32_t *)(a1 + 156);
    *(uint32_t *)(a1 + 100) = a3;
    *(uint32_t *)(a1 + 112) = v6;
    *(uint32_t *)(a1 + 108) = *(uint32_t *)(a1 + 152);
    *(uint32_t *)(a1 + 96) = (uint32_t)(uintptr_t)(a2);
    for ( i = deflate(a1 + 96, 0); ; i = deflate(a1 + 96, 0) )
    {
      if ( i != 0 )
      {
        v9 = *(const char **)(a1 + 120);
        if ( v9 == nullptr )
          v9 = "zlib error";
        png_error(a1, (int)(uintptr_t)(v9));
      }
      if ( *(uint32_t *)(a1 + 112) == 0 )
      {
        v10 = a5[2];
        v11 = a5[3];
        if ( v10 < v11 )
        {
          v8 = (uint32_t *)a5[4];
        }
        else
        {
          v12 = v10 + 4;
          v13 = (void *)a5[4];
          a5[3] = v12;
          src = (void *)(4 * v12);
          if ( v13 != nullptr )
          {
            v28 = v13;
            dest = png_malloc(a1, (size_t)src);
            a5[4] = (uint32_t)(uintptr_t)(dest);
            memcpy(dest, v28, 4 * v11);
            png_free(a1, v28);
            v8 = (uint32_t *)a5[4];
          }
          else
          {
            v8 = (uint32_t *)(png_malloc(a1, (size_t)src));
            a5[4] = (uint32_t)(uintptr_t)(v8);
          }
          v10 = a5[2];
        }
        v8[v10] = (uint32_t)(uintptr_t)(png_malloc(a1, *(uint32_t *)(a1 + 156)));
        memcpy(*(void **)(a5[4] + 4 * a5[2]++), *(const void **)(a1 + 152), *(uint32_t *)(a1 + 156));
        *(uint32_t *)(a1 + 112) = *(uint32_t *)(a1 + 156);
        *(uint32_t *)(a1 + 108) = *(uint32_t *)(a1 + 152);
      }
      if ( *(uint32_t *)(a1 + 100) == 0 )
        break;
    }
    while ( 1 )
    {
      v15 = deflate(a1 + 96, 4);
      if ( v15 != 0 )
        break;
      if ( *(uint32_t *)(a1 + 112) == 0 )
      {
        v16 = a5[2];
        v17 = (void *)a5[3];
        if ( v16 >= (int)(uintptr_t)(v17) )
        {
          v23 = v16 + 4;
          v24 = (void *)a5[4];
          a5[3] = v23;
          srca = (void *)(4 * v23);
          if ( v24 != nullptr )
          {
            v29 = v17;
            v31 = v24;
            v25 = png_malloc(a1, (size_t)srca);
            a5[4] = (uint32_t)(uintptr_t)(v25);
            memcpy(v25, v31, 4 * (uint32_t)(uintptr_t)(v29));
            png_free(a1, v31);
            v18 = (uint32_t *)a5[4];
          }
          else
          {
            v18 = (uint32_t *)(png_malloc(a1, (size_t)srca));
            a5[4] = (uint32_t)(uintptr_t)(v18);
          }
          v16 = a5[2];
        }
        else
        {
          v18 = (uint32_t *)a5[4];
        }
        v18[v16] = (uint32_t)(uintptr_t)(png_malloc(a1, *(uint32_t *)(a1 + 156)));
        memcpy(*(void **)(a5[4] + 4 * a5[2]++), *(const void **)(a1 + 152), *(uint32_t *)(a1 + 156));
        *(uint32_t *)(a1 + 112) = *(uint32_t *)(a1 + 156);
        *(uint32_t *)(a1 + 108) = *(uint32_t *)(a1 + 152);
      }
    }
    if ( v15 != 1 )
    {
      v19 = *(const char **)(a1 + 120);
      if ( v19 == nullptr )
        v19 = "zlib error";
      png_error(a1, (int)(uintptr_t)(v19));
    }
    v20 = *(uint32_t *)(a1 + 156);
    v21 = *(uint32_t *)(a1 + 112);
    result = v20 * a5[2];
    if ( v20 > v21 )
      result += v20 - v21;
  }
  return result;
}


