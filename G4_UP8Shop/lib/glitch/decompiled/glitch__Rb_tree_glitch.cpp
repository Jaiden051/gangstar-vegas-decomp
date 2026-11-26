#include "Core/Utils/DecompTypes.h"
#include "glitch__Rb_tree_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_erase  (binary VA: 0xd39270)
// Original: std::_Rb_tree<glitch::video::CMaterial *,std::pair<glitch::video::CMaterial * const,boost::intrusive_ptr<glitch::scene::CMeshBuffer>>,std::_Select1st<std::pair<glitch::video::CMaterial * const,boost::intrusive_ptr<glitch::scene::CMeshBuffer>>>,std::less<glitch::video::CMaterial *>,std::allocator<std::pair<glitch::video::CMaterial * const,boost::intrusive_ptr<glitch::scene::CMeshBuffer>>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_erase(int a1, void *a2)
{
  int v2;
  int v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  void *v18;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v14 = *((void **)a2 + 3);
      if ( v14 != nullptr )
      {
        while ( 1 )
        {
          v15 = *((void **)v14 + 3);
          if ( v15 != nullptr )
          {
            while ( 1 )
            {
              v16 = *((void **)v15 + 3);
              if ( v16 != nullptr )
              {
                while ( 1 )
                {
                  v17 = *((void **)v16 + 3);
                  if ( v17 != nullptr )
                  {
                    while ( 1 )
                    {
                      v18 = *((void **)v17 + 3);
                      if ( v18 != nullptr )
                      {
                        while ( 1 )
                        {
                          v13 = *((void **)v18 + 3);
                          if ( v13 != nullptr )
                          {
                            while ( 1 )
                            {
                              v12 = *((void **)v13 + 3);
                              if ( v12 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v2 = *((uint32_t *)v12 + 3);
                                  if ( v2 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_erase(
                                        a1,
                                        *(void **)(v2 + 12));
                                      v3 = *(uint32_t *)(v2 + 8);
                                      if ( *(uint32_t *)(v2 + 20) != 0 )
                                        sub_5459C0(*(volatile int32_t **)(v2 + 20));
                                      opDelete((void *)v2);
                                      if ( v3 == 0 )
                                        break;
                                      v2 = v3;
                                    }
                                  }
                                  v4 = *((void **)v12 + 2);
                                  if ( *((uint32_t *)v12 + 5) != 0 )
                                    sub_5459C0(*((volatile int32_t **)v12 + 5));
                                  opDelete(v12);
                                  if ( v4 == nullptr )
                                    break;
                                  v12 = v4;
                                }
                              }
                              v5 = *((void **)v13 + 2);
                              if ( *((uint32_t *)v13 + 5) != 0 )
                                sub_5459C0(*((volatile int32_t **)v13 + 5));
                              opDelete(v13);
                              if ( v5 == nullptr )
                                break;
                              v13 = v5;
                            }
                          }
                          v6 = *((void **)v18 + 2);
                          if ( *((uint32_t *)v18 + 5) != 0 )
                            sub_5459C0(*((volatile int32_t **)v18 + 5));
                          opDelete(v18);
                          if ( v6 == nullptr )
                            break;
                          v18 = v6;
                        }
                      }
                      v7 = *((void **)v17 + 2);
                      if ( *((uint32_t *)v17 + 5) != 0 )
                        sub_5459C0(*((volatile int32_t **)v17 + 5));
                      opDelete(v17);
                      if ( v7 == nullptr )
                        break;
                      v17 = v7;
                    }
                  }
                  v8 = *((void **)v16 + 2);
                  if ( *((uint32_t *)v16 + 5) != 0 )
                    sub_5459C0(*((volatile int32_t **)v16 + 5));
                  opDelete(v16);
                  if ( v8 == nullptr )
                    break;
                  v16 = v8;
                }
              }
              v9 = *((void **)v15 + 2);
              if ( *((uint32_t *)v15 + 5) != 0 )
                sub_5459C0(*((volatile int32_t **)v15 + 5));
              opDelete(v15);
              if ( v9 == nullptr )
                break;
              v15 = v9;
            }
          }
          v10 = *((void **)v14 + 2);
          if ( *((uint32_t *)v14 + 5) != 0 )
            sub_5459C0(*((volatile int32_t **)v14 + 5));
          opDelete(v14);
          if ( v10 == nullptr )
            break;
          v14 = v10;
        }
      }
      v11 = *((void **)a2 + 2);
      if ( *((uint32_t *)a2 + 5) != 0 )
        sub_5459C0(*((volatile int32_t **)a2 + 5));
      opDelete(a2);
      if ( v11 == nullptr )
        break;
      a2 = v11;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_copy  (binary VA: 0xd3a980)
// Original: std::_Rb_tree<glitch::video::CMaterial *,std::pair<glitch::video::CMaterial * const,boost::intrusive_ptr<glitch::scene::CMeshBuffer>>,std::_Select1st<std::pair<glitch::video::CMaterial * const,boost::intrusive_ptr<glitch::scene::CMeshBuffer>>>,std::less<glitch::video::CMaterial *>,std::allocator<std::pair<glitch::video::CMaterial * const,boost::intrusive_ptr<glitch::scene::CMeshBuffer>>>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_copy(int a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int *v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int *v27;
  uint32_t *v28;
  int v29;
  uint32_t *v30;
  int v31;
  int v32;
  int v33;
  uint32_t *v34;
  int v35;
  int v36;
  int v37;
  uint32_t *v38;
  uint32_t *v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int *v44;
  uint32_t *v45;
  int v46;
  uint32_t *v47;
  int v48;
  int v49;
  int v50;
  uint32_t *v51;
  int v52;
  int v53;
  uint32_t *v54;
  uint32_t *v55;
  int v56;
  int v57;
  int v58;
  int v59;
  uint32_t *i;
  int v61;
  int v62;
  uint32_t *v63;
  uint32_t *v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int *v69;
  uint32_t *v70;
  int v71;
  uint32_t *v72;
  int v73;
  int v74;
  int v75;
  uint32_t *v77;
  uint32_t *v78;
  uint32_t *v79;
  uint32_t *v80;
  uint32_t *v81;
  uint32_t *v82;
  uint32_t *v83;
  uint32_t *v84;
  uint32_t *v85;
  uint32_t *v86;
  uint32_t *v87;
  uint32_t *v88;
  uint32_t *v89;
  uint32_t *v90;
  uint32_t *v91;
  int *v92;
  uint32_t *v93;
  uint32_t *v94;

  v93 = (uint32_t *)opNew(0x18u);
  if ( v93 != (uint32_t *)-16 )
  {
    v93[4] = a2[4];
    v3 = a2[5];
    v93[5] = v3;
    if ( v3 != 0 )
      sub_8B1B00((volatile int32_t *)(v3 + 4));
  }
  *v93 = *a2;
  v93[3] = 0;
  v93[2] = 0;
  v93[1] = a3;
  v80 = (uint32_t *)a2[3];
  if ( v80 != nullptr )
  {
    v77 = (uint32_t *)opNew(0x18u);
    if ( v77 != (uint32_t *)-16 )
    {
      v77[4] = v80[4];
      v4 = v80[5];
      v77[5] = v4;
      if ( v4 != 0 )
        sub_8B1B00((volatile int32_t *)(v4 + 4));
    }
    *v77 = *v80;
    v77[3] = 0;
    v77[2] = 0;
    v77[1] = (uint32_t)(uintptr_t)(v93);
    v5 = v80;
    v6 = (int *)v80[3];
    if ( v6 != nullptr )
    {
      v7 = opNew(0x18u);
      v8 = (uint32_t *)v7;
      if ( v7 != -16 )
      {
        *(uint32_t *)(v7 + 16) = v6[4];
        v9 = v6[5];
        v8[5] = v9;
        if ( v9 != 0 )
          sub_8B1B00((volatile int32_t *)(v9 + 4));
      }
      v10 = *v6;
      v8[2] = 0;
      *v8 = v10;
      v8[3] = 0;
      v8[1] = (uint32_t)(uintptr_t)(v77);
      v11 = v6[3];
      if ( v11 != 0 )
        v8[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_copy(
                  a1,
                  (uint32_t *)(uintptr_t)(v11),
                  (int)(uintptr_t)(v8)));
      v12 = (int *)v6[2];
      if ( v12 != nullptr )
      {
        v84 = v8;
        while ( 1 )
        {
          v13 = opNew(0x18u);
          v14 = (uint32_t *)v13;
          if ( v13 != -16 )
          {
            *(uint32_t *)(v13 + 16) = v12[4];
            v15 = v12[5];
            v14[5] = v15;
            if ( v15 != 0 )
              sub_8B1B00((volatile int32_t *)(v15 + 4));
          }
          v16 = *v12;
          v14[2] = 0;
          *v14 = v16;
          v14[3] = 0;
          v8[2] = (uint32_t)(uintptr_t)(v14);
          v14[1] = (uint32_t)(uintptr_t)(v8);
          v17 = v12[3];
          if ( v17 != 0 )
            v14[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v17),
                       (int)(uintptr_t)(v14)));
          v12 = (int *)v12[2];
          if ( v12 == nullptr )
            break;
          v8 = v14;
        }
        v8 = v84;
      }
      v5 = v80;
      v77[3] = (uint32_t)(uintptr_t)(v8);
    }
    v18 = v77;
    v87 = (uint32_t *)v5[2];
    if ( v87 != nullptr )
    {
      while ( 1 )
      {
        v81 = (uint32_t *)opNew(0x18u);
        if ( v81 != (uint32_t *)-16 )
        {
          v81[4] = v87[4];
          v19 = v87[5];
          v81[5] = v19;
          if ( v19 != 0 )
            sub_8B1B00((volatile int32_t *)(v19 + 4));
        }
        v20 = *v87;
        v81[3] = 0;
        *v81 = v20;
        v81[2] = 0;
        v18[2] = (uint32_t)(uintptr_t)(v81);
        v81[1] = (uint32_t)(uintptr_t)(v18);
        v21 = v87;
        v22 = (uint32_t *)v87[3];
        if ( v22 != nullptr )
        {
          v23 = opNew(0x18u);
          v85 = (uint32_t *)v23;
          if ( v23 != -16 )
          {
            v24 = v23;
            *(uint32_t *)(v23 + 16) = v22[4];
            v25 = v22[5];
            *(uint32_t *)(v24 + 20) = v25;
            if ( v25 != 0 )
              sub_8B1B00((volatile int32_t *)(v25 + 4));
          }
          *v85 = *v22;
          v85[2] = 0;
          v85[3] = 0;
          v85[1] = (uint32_t)(uintptr_t)(v81);
          v26 = v22[3];
          if ( v26 != 0 )
            v85[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v26),
                       (int)(uintptr_t)(v85)));
          v27 = (int *)v22[2];
          v28 = v85;
          if ( v27 != nullptr )
          {
            while ( 1 )
            {
              v29 = opNew(0x18u);
              v30 = (uint32_t *)v29;
              if ( v29 != -16 )
              {
                *(uint32_t *)(v29 + 16) = v27[4];
                v31 = v27[5];
                v30[5] = v31;
                if ( v31 != 0 )
                  sub_8B1B00((volatile int32_t *)(v31 + 4));
              }
              v32 = *v27;
              v30[2] = 0;
              *v30 = v32;
              v30[3] = 0;
              v28[2] = (uint32_t)(uintptr_t)(v30);
              v30[1] = (uint32_t)(uintptr_t)(v28);
              v33 = v27[3];
              if ( v33 != 0 )
                v30[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v33),
                           (int)(uintptr_t)(v30)));
              v27 = (int *)v27[2];
              if ( v27 == nullptr )
                break;
              v28 = v30;
            }
          }
          v81[3] = (uint32_t)(uintptr_t)(v85);
          v21 = v87;
        }
        v87 = (uint32_t *)v21[2];
        if ( v87 == nullptr )
          break;
        v18 = v81;
      }
    }
    v93[3] = (uint32_t)(uintptr_t)(v77);
  }
  v34 = v93;
  v92 = (int *)a2[2];
  if ( v92 != nullptr )
  {
    while ( 1 )
    {
      v91 = (uint32_t *)opNew(0x18u);
      if ( v91 != (uint32_t *)-16 )
      {
        v91[4] = v92[4];
        v35 = v92[5];
        v91[5] = v35;
        if ( v35 != 0 )
          sub_8B1B00((volatile int32_t *)(v35 + 4));
      }
      v36 = *v92;
      v91[3] = 0;
      *v91 = v36;
      v91[2] = 0;
      v34[2] = (uint32_t)(uintptr_t)(v91);
      v91[1] = (uint32_t)(uintptr_t)(v34);
      v82 = (uint32_t *)v92[3];
      if ( v82 != nullptr )
      {
        v94 = (uint32_t *)opNew(0x18u);
        if ( v94 != (uint32_t *)-16 )
        {
          v94[4] = v82[4];
          v37 = v82[5];
          v94[5] = v37;
          if ( v37 != 0 )
            sub_8B1B00((volatile int32_t *)(v37 + 4));
        }
        *v94 = *v82;
        v94[3] = 0;
        v94[2] = 0;
        v94[1] = (uint32_t)(uintptr_t)(v91);
        v38 = v82;
        v39 = (uint32_t *)v82[3];
        if ( v39 != nullptr )
        {
          v40 = opNew(0x18u);
          v78 = (uint32_t *)v40;
          if ( v40 != -16 )
          {
            v41 = v40;
            *(uint32_t *)(v40 + 16) = v39[4];
            v42 = v39[5];
            *(uint32_t *)(v41 + 20) = v42;
            if ( v42 != 0 )
              sub_8B1B00((volatile int32_t *)(v42 + 4));
          }
          *v78 = *v39;
          v78[2] = 0;
          v78[3] = 0;
          v78[1] = (uint32_t)(uintptr_t)(v94);
          v43 = v39[3];
          if ( v43 != 0 )
            v78[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v43),
                       (int)(uintptr_t)(v78)));
          v44 = (int *)v39[2];
          v45 = v78;
          if ( v44 != nullptr )
          {
            while ( 1 )
            {
              v46 = opNew(0x18u);
              v47 = (uint32_t *)v46;
              if ( v46 != -16 )
              {
                *(uint32_t *)(v46 + 16) = v44[4];
                v48 = v44[5];
                v47[5] = v48;
                if ( v48 != 0 )
                  sub_8B1B00((volatile int32_t *)(v48 + 4));
              }
              v49 = *v44;
              v47[2] = 0;
              *v47 = v49;
              v47[3] = 0;
              v45[2] = (uint32_t)(uintptr_t)(v47);
              v47[1] = (uint32_t)(uintptr_t)(v45);
              v50 = v44[3];
              if ( v50 != 0 )
                v47[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v50),
                           (int)(uintptr_t)(v47)));
              v44 = (int *)v44[2];
              if ( v44 == nullptr )
                break;
              v45 = v47;
            }
          }
          v94[3] = (uint32_t)(uintptr_t)(v78);
          v38 = v82;
        }
        v51 = v94;
        v90 = (uint32_t *)v38[2];
        if ( v90 != nullptr )
        {
          while ( 1 )
          {
            v88 = (uint32_t *)opNew(0x18u);
            if ( v88 != (uint32_t *)-16 )
            {
              v88[4] = v90[4];
              v52 = v90[5];
              v88[5] = v52;
              if ( v52 != 0 )
                sub_8B1B00((volatile int32_t *)(v52 + 4));
            }
            v53 = *v90;
            v88[3] = 0;
            *v88 = v53;
            v88[2] = 0;
            v51[2] = (uint32_t)(uintptr_t)(v88);
            v88[1] = (uint32_t)(uintptr_t)(v51);
            v54 = v90;
            v55 = (uint32_t *)v90[3];
            if ( v55 != nullptr )
            {
              v56 = opNew(0x18u);
              v89 = (uint32_t *)v56;
              if ( v56 != -16 )
              {
                v57 = v56;
                *(uint32_t *)(v56 + 16) = v55[4];
                v58 = v55[5];
                *(uint32_t *)(v57 + 20) = v58;
                if ( v58 != 0 )
                  sub_8B1B00((volatile int32_t *)(v58 + 4));
              }
              *v89 = *v55;
              v89[2] = 0;
              v89[3] = 0;
              v89[1] = (uint32_t)(uintptr_t)(v88);
              v59 = v55[3];
              if ( v59 != 0 )
                v89[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v59),
                           (int)(uintptr_t)(v89)));
              v86 = (uint32_t *)v55[2];
              if ( v86 != nullptr )
              {
                for ( i = v89; ; i = v79 )
                {
                  v79 = (uint32_t *)opNew(0x18u);
                  if ( v79 != (uint32_t *)-16 )
                  {
                    v79[4] = v86[4];
                    v61 = v86[5];
                    v79[5] = v61;
                    if ( v61 != 0 )
                      sub_8B1B00((volatile int32_t *)(v61 + 4));
                  }
                  v62 = *v86;
                  v79[3] = 0;
                  *v79 = v62;
                  v79[2] = 0;
                  i[2] = (uint32_t)(uintptr_t)(v79);
                  v79[1] = (uint32_t)(uintptr_t)(i);
                  v63 = v86;
                  v64 = (uint32_t *)v86[3];
                  if ( v64 != nullptr )
                  {
                    v65 = opNew(0x18u);
                    v83 = (uint32_t *)v65;
                    if ( v65 != -16 )
                    {
                      v66 = v65;
                      *(uint32_t *)(v65 + 16) = v64[4];
                      v67 = v64[5];
                      *(uint32_t *)(v66 + 20) = v67;
                      if ( v67 != 0 )
                        sub_8B1B00((volatile int32_t *)(v67 + 4));
                    }
                    *v83 = *v64;
                    v83[2] = 0;
                    v83[3] = 0;
                    v83[1] = (uint32_t)(uintptr_t)(v79);
                    v68 = v64[3];
                    if ( v68 != 0 )
                      v83[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_copy(
                                 a1,
                                 (uint32_t *)(uintptr_t)(v68),
                                 (int)(uintptr_t)(v83)));
                    v69 = (int *)v64[2];
                    v70 = v83;
                    if ( v69 != nullptr )
                    {
                      while ( 1 )
                      {
                        v71 = opNew(0x18u);
                        v72 = (uint32_t *)v71;
                        if ( v71 != -16 )
                        {
                          *(uint32_t *)(v71 + 16) = v69[4];
                          v73 = v69[5];
                          v72[5] = v73;
                          if ( v73 != 0 )
                            sub_8B1B00((volatile int32_t *)(v73 + 4));
                        }
                        v74 = *v69;
                        v72[2] = 0;
                        *v72 = v74;
                        v72[3] = 0;
                        v70[2] = (uint32_t)(uintptr_t)(v72);
                        v72[1] = (uint32_t)(uintptr_t)(v70);
                        v75 = v69[3];
                        if ( v75 != 0 )
                          v72[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_video_CMaterial_pair_vid_63f8de::M_copy(
                                     a1,
                                     (uint32_t *)(uintptr_t)(v75),
                                     (int)(uintptr_t)(v72)));
                        v69 = (int *)v69[2];
                        if ( v69 == nullptr )
                          break;
                        v70 = v72;
                      }
                    }
                    v79[3] = (uint32_t)(uintptr_t)(v83);
                    v63 = v86;
                  }
                  v86 = (uint32_t *)v63[2];
                  if ( v86 == nullptr )
                    break;
                }
              }
              v88[3] = (uint32_t)(uintptr_t)(v89);
              v54 = v90;
            }
            v90 = (uint32_t *)v54[2];
            if ( v90 == nullptr )
              break;
            v51 = v88;
          }
        }
        v91[3] = (uint32_t)(uintptr_t)(v94);
      }
      v92 = (int *)v92[2];
      if ( v92 == nullptr )
        break;
      v34 = v91;
    }
  }
  return v93;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_SSharedString_pair_SShar_cb434e::M_erase  (binary VA: 0xe6f1a0)
// Original: std::_Rb_tree<glitch::core::SSharedString,std::pair<glitch::core::SSharedString const,glitch::video::CMaterialRendererManager::SCreationState::SParameterDef>,std::_Select1st<std::pair<glitch::core::SSharedString const,glitch::video::CMaterialRendererManager::SCreationState::SParameterDef>>,std::less<glitch::core::SSharedString>,glitch::core::SProcessBufferAllocator<std::pair<glitch::core::SSharedString const,glitch::video::CMaterialRendererManager::SCreationState::SParameterDef>,false>>::_M_erase
// ----------------------------------------------------------------------------
glitch::core::Self * g4_std::Rb_tree_SSharedString_pair_SShar_cb434e::M_erase(int a1, glitch::core::Self **a2)
{
  glitch::core::Self *result;
  int v3;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v4;
  int v5;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v6;
  glitch::core::Self *v7;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v8;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v9;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v10;
  glitch::core::Self *v11;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v12;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v13;
  glitch::core::Self *v14;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v15;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v16;
  glitch::core::Self *v17;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v18;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v19;
  glitch::core::Self *v20;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v21;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v22;
  glitch::core::Self *v23;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v24;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v25;
  glitch::core::Self *v26;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v27;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v28;
  glitch::core::Self *v29;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v30;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v31;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v32;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v33;
  glitch::core::Self *v34;
  glitch::core::Self *v35;
  glitch::core::Self *v36;
  glitch::core::Self *v37;
  glitch::core::Self *v38;
  glitch::core::Self *v39;
  glitch::core::Self *v40;

  result = (glitch::core::Self *)a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v36 = a2[3];
      if ( v36 != nullptr )
      {
        while ( 1 )
        {
          v37 = *((glitch::core::Self **)v36 + 3);
          if ( v37 != nullptr )
          {
            while ( 1 )
            {
              v38 = *((glitch::core::Self **)v37 + 3);
              if ( v38 != nullptr )
              {
                while ( 1 )
                {
                  v39 = *((glitch::core::Self **)v38 + 3);
                  if ( v39 != nullptr )
                  {
                    while ( 1 )
                    {
                      v40 = *((glitch::core::Self **)v39 + 3);
                      if ( v40 != nullptr )
                      {
                        while ( 1 )
                        {
                          v35 = *((glitch::core::Self **)v40 + 3);
                          if ( v35 != nullptr )
                          {
                            while ( 1 )
                            {
                              v34 = *((glitch::core::Self **)v35 + 3);
                              if ( v34 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v3 = *((uint32_t *)v34 + 3);
                                  if ( v3 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_SSharedString_pair_SShar_cb434e::M_erase(
                                        a1,
                                        (glitch::core::Self **)(*(glitch::core::Self **)(v3 + 12)));
                                      v4 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v3 + 20);
                                      v5 = *(uint32_t *)(v3 + 8);
                                      if ( v4 != nullptr
                                        && __sync_fetch_and_add((volatile int32_t *)v4, 0xFFFFFFFF) == 1 )
                                      {
                                        glitch::core::detail::SSharedStringHeapEntry::SData::release(v4, v32);
                                      }
                                      v6 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)(v3 + 16);
                                      if ( v6 != nullptr
                                        && __sync_fetch_and_add((volatile int32_t *)v6, 0xFFFFFFFF) == 1 )
                                      {
                                        glitch::core::detail::SSharedStringHeapEntry::SData::release(v6, v32);
                                      }
                                      glitch::core::releaseProcessBuffer((glitch::core::Self *)v3, v32);
                                      if ( v5 == 0 )
                                        break;
                                      v3 = v5;
                                    }
                                  }
                                  v7 = *((glitch::core::Self **)v34 + 2);
                                  v8 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v34 + 5);
                                  if ( v8 != nullptr
                                    && __sync_fetch_and_add((volatile int32_t *)v8, 0xFFFFFFFF) == 1 )
                                  {
                                    glitch::core::detail::SSharedStringHeapEntry::SData::release(v8, v31);
                                  }
                                  v9 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v34 + 4);
                                  if ( v9 != nullptr
                                    && __sync_fetch_and_add((volatile int32_t *)v9, 0xFFFFFFFF) == 1 )
                                  {
                                    glitch::core::detail::SSharedStringHeapEntry::SData::release(v9, v31);
                                  }
                                  glitch::core::releaseProcessBuffer(v34, v31);
                                  if ( v7 == nullptr )
                                    break;
                                  v34 = v7;
                                }
                              }
                              v10 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v35 + 5);
                              v11 = *((glitch::core::Self **)v35 + 2);
                              if ( v10 != nullptr
                                && __sync_fetch_and_add((volatile int32_t *)v10, 0xFFFFFFFF) == 1 )
                              {
                                glitch::core::detail::SSharedStringHeapEntry::SData::release(v10, v31);
                              }
                              v12 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v35 + 4);
                              if ( v12 != nullptr
                                && __sync_fetch_and_add((volatile int32_t *)v12, 0xFFFFFFFF) == 1 )
                              {
                                glitch::core::detail::SSharedStringHeapEntry::SData::release(v12, v31);
                              }
                              glitch::core::releaseProcessBuffer(v35, v31);
                              if ( v11 == nullptr )
                                break;
                              v35 = v11;
                            }
                          }
                          v13 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v40 + 5);
                          v14 = *((glitch::core::Self **)v40 + 2);
                          if ( v13 != nullptr && __sync_fetch_and_add((volatile int32_t *)v13, 0xFFFFFFFF) == 1 )
                            glitch::core::detail::SSharedStringHeapEntry::SData::release(v13, v31);
                          v15 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v40 + 4);
                          if ( v15 != nullptr && __sync_fetch_and_add((volatile int32_t *)v15, 0xFFFFFFFF) == 1 )
                            glitch::core::detail::SSharedStringHeapEntry::SData::release(v15, v31);
                          glitch::core::releaseProcessBuffer(v40, v31);
                          if ( v14 == nullptr )
                            break;
                          v40 = v14;
                        }
                      }
                      v16 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v39 + 5);
                      v17 = *((glitch::core::Self **)v39 + 2);
                      if ( v16 != nullptr && __sync_fetch_and_add((volatile int32_t *)v16, 0xFFFFFFFF) == 1 )
                        glitch::core::detail::SSharedStringHeapEntry::SData::release(v16, v31);
                      v18 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v39 + 4);
                      if ( v18 != nullptr && __sync_fetch_and_add((volatile int32_t *)v18, 0xFFFFFFFF) == 1 )
                      {
                        glitch::core::detail::SSharedStringHeapEntry::SData::release(v18, v31);
                        glitch::core::releaseProcessBuffer(v39, v33);
                        if ( v17 == nullptr )
                          break;
                      }
                      else
                      {
                        glitch::core::releaseProcessBuffer(v39, v31);
                        if ( v17 == nullptr )
                          break;
                      }
                      v39 = v17;
                    }
                  }
                  v19 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v38 + 5);
                  v20 = *((glitch::core::Self **)v38 + 2);
                  if ( v19 != nullptr && __sync_fetch_and_add((volatile int32_t *)v19, 0xFFFFFFFF) == 1 )
                    glitch::core::detail::SSharedStringHeapEntry::SData::release(v19, v31);
                  v21 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v38 + 4);
                  if ( v21 != nullptr && __sync_fetch_and_add((volatile int32_t *)v21, 0xFFFFFFFF) == 1 )
                    glitch::core::detail::SSharedStringHeapEntry::SData::release(v21, v31);
                  glitch::core::releaseProcessBuffer(v38, v31);
                  if ( v20 == nullptr )
                    break;
                  v38 = v20;
                }
              }
              v22 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v37 + 5);
              v23 = *((glitch::core::Self **)v37 + 2);
              if ( v22 != nullptr && __sync_fetch_and_add((volatile int32_t *)v22, 0xFFFFFFFF) == 1 )
                glitch::core::detail::SSharedStringHeapEntry::SData::release(v22, v31);
              v24 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v37 + 4);
              if ( v24 != nullptr && __sync_fetch_and_add((volatile int32_t *)v24, 0xFFFFFFFF) == 1 )
                glitch::core::detail::SSharedStringHeapEntry::SData::release(v24, v31);
              glitch::core::releaseProcessBuffer(v37, v31);
              if ( v23 == nullptr )
                break;
              v37 = v23;
            }
          }
          v25 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v36 + 5);
          v26 = *((glitch::core::Self **)v36 + 2);
          if ( v25 != nullptr && __sync_fetch_and_add((volatile int32_t *)v25, 0xFFFFFFFF) == 1 )
            glitch::core::detail::SSharedStringHeapEntry::SData::release(v25, v31);
          v27 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v36 + 4);
          if ( v27 != nullptr && __sync_fetch_and_add((volatile int32_t *)v27, 0xFFFFFFFF) == 1 )
            glitch::core::detail::SSharedStringHeapEntry::SData::release(v27, v31);
          glitch::core::releaseProcessBuffer(v36, v31);
          if ( v26 == nullptr )
            break;
          v36 = v26;
        }
      }
      v28 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)(a2[5]);
      v29 = a2[2];
      if ( v28 != nullptr && __sync_fetch_and_add((volatile int32_t *)v28, 0xFFFFFFFF) == 1 )
        glitch::core::detail::SSharedStringHeapEntry::SData::release(v28, v31);
      v30 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)(a2[4]);
      if ( v30 != nullptr && __sync_fetch_and_add((volatile int32_t *)v30, 0xFFFFFFFF) == 1 )
        glitch::core::detail::SSharedStringHeapEntry::SData::release(v30, v31);
      result = (glitch::core::releaseProcessBuffer((glitch::core::Self *)a2, v31), (glitch::core::Self *)0);
      if ( v29 == nullptr )
        break;
      a2 = (glitch::core::Self **)v29;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_video_ICodeShaderManager_406dbb::M_erase  (binary VA: 0xe70410)
// Original: std::_Rb_tree<glitch::video::ICodeShaderManager::SShaderInfo,glitch::video::ICodeShaderManager::SShaderInfo,std::_Identity<glitch::video::ICodeShaderManager::SShaderInfo>,std::less<glitch::video::ICodeShaderManager::SShaderInfo>,glitch::core::SAllocator<glitch::video::ICodeShaderManager::SShaderInfo,(glitch::memory::E_MEMORY_HINT)0>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_video_ICodeShaderManager_406dbb::M_erase(int a1, int a2)
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
  int v22;
  int v23;
  int v24;
  int v25;

  if ( a2 != 0 )
  {
    while ( 1 )
    {
      v2 = *(uint32_t *)(a2 + 12);
      v21 = v2;
      if ( v2 != 0 )
      {
        while ( 1 )
        {
          v3 = *(uint32_t *)(v2 + 12);
          v22 = v3;
          if ( v3 != 0 )
          {
            while ( 1 )
            {
              v4 = *(uint32_t *)(v3 + 12);
              v23 = v4;
              if ( v4 != 0 )
              {
                while ( 1 )
                {
                  v5 = *(uint32_t *)(v4 + 12);
                  v24 = v5;
                  if ( v5 != 0 )
                  {
                    while ( 1 )
                    {
                      v6 = *(uint32_t *)(v5 + 12);
                      v25 = v6;
                      if ( v6 != 0 )
                      {
                        while ( 1 )
                        {
                          v7 = *(uint32_t *)(v6 + 12);
                          v20 = v7;
                          if ( v7 != 0 )
                          {
                            while ( 1 )
                            {
                              v8 = *(uint32_t *)(v7 + 12);
                              v19 = v8;
                              if ( v8 != 0 )
                              {
                                while ( 1 )
                                {
                                  v9 = *(uint32_t *)(v8 + 12);
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_video_ICodeShaderManager_406dbb::M_erase(
                                        a1,
                                        *(uint32_t *)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      gll_operator_delete_arr(v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = *(uint32_t *)(v19 + 8);
                                  gll_operator_delete_arr(v19);
                                  if ( v11 == 0 )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = *(uint32_t *)(v20 + 8);
                              gll_operator_delete_arr(v20);
                              if ( v12 == 0 )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = *(uint32_t *)(v25 + 8);
                          gll_operator_delete_arr(v25);
                          if ( v13 == 0 )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = *(uint32_t *)(v24 + 8);
                      gll_operator_delete_arr(v24);
                      if ( v14 == 0 )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = *(uint32_t *)(v23 + 8);
                  gll_operator_delete_arr(v23);
                  if ( v15 == 0 )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = *(uint32_t *)(v22 + 8);
              gll_operator_delete_arr(v22);
              if ( v16 == 0 )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = *(uint32_t *)(v21 + 8);
          gll_operator_delete_arr(v21);
          if ( v17 == 0 )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = *(uint32_t *)(a2 + 8);
      gll_operator_delete_arr(a2);
      if ( v18 == 0 )
        break;
      a2 = v18;
    }
  }
}


