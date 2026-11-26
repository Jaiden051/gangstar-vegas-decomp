#include "Core/Utils/DecompTypes.h"
#include "glitch_scoped_ptr_glitch.h"

// ----------------------------------------------------------------------------
// Function: boost::scoped_ptr_scene_SPVSEvaluationStat_7a331e::Destroy  (binary VA: 0xf07490)
// Original: boost::scoped_ptr<glitch::scene::detail::SPVSEvaluationState>::~scoped_ptr
// ----------------------------------------------------------------------------
void boost::scoped_ptr_scene_SPVSEvaluationStat_7a331e::Destroy(boost::scoped_ptr<glitch::scene::detail::SPVSEvaluationState::Self> *self)
{
  int v1;
  int v2;
  int i;

  v1 = *(uint32_t *)self;
  if ( *(uint32_t *)self != 0 )
  {
    v2 = *(uint32_t *)(v1 + 28);
    if ( v2 != 0 )
    {
      for ( i = v2 + 28 * *(uint32_t *)(v2 - 4); v2 != i; i -= 28 )
      {
        if ( *(uint32_t *)(i - 12) != 0 )
          gll_operator_delete_arr(*(uint32_t *)(i - 12));
      }
      opDeleteArray((void *)(v2 - 4));
    }
    if ( *(uint32_t *)(v1 + 8) != 0 )
      opDeleteArray(*(void **)(v1 + 8));
    if ( *(uint32_t *)(v1 + 4) != 0 )
      opDeleteArray(*(void **)(v1 + 4));
    opDelete((void *)v1);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::scoped_ptr_scene_SPVSData_b31ed8::Destroy  (binary VA: 0xf07510)
// Original: boost::scoped_ptr<glitch::scene::detail::SPVSData>::~scoped_ptr
// ----------------------------------------------------------------------------
void boost::scoped_ptr_scene_SPVSData_b31ed8::Destroy(boost::scoped_ptr<glitch::scene::detail::SPVSData> *self)
{
  int v1;
  int v2;
  int v3;
  int i;
  void **v5;
  void **v6;

  v1 = *(uint32_t *)self;
  if ( *(uint32_t *)self != 0 )
  {
    glf::Mutex::Destroy((pthread_mutex_t **)(v1 + 104));
    v2 = *(uint32_t *)(v1 + 100);
    v6 = (void **)v2;
    if ( v2 != 0 )
    {
      v3 = *(uint32_t *)(v2 + 28);
      if ( v3 != 0 )
      {
        for ( i = v3 + 28 * *(uint32_t *)(v3 - 4); v3 != i; i -= 28 )
        {
          if ( *(uint32_t *)(i - 12) != 0 )
            gll_operator_delete_arr(*(uint32_t *)(i - 12));
        }
        opDeleteArray((void *)(v3 - 4));
      }
      v5 = v6;
      if ( v6[2] != nullptr )
      {
        opDeleteArray(v6[2]);
        v5 = v6;
      }
      if ( v5[1] != nullptr )
        opDeleteArray(v5[1]);
      opDelete(v6);
    }
    if ( *(uint32_t *)(v1 + 4) != 0 )
      opDeleteArray(*(void **)(v1 + 4));
    opDelete((void *)v1);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::scoped_ptr_quickhull2d_detail_SBuil_0adb7a::Destroy  (binary VA: 0xf7c7a0)
// Original: boost::scoped_ptr<glitch::core::quickhull2d_detail::SBuildState>::~scoped_ptr
// ----------------------------------------------------------------------------
void boost::scoped_ptr_quickhull2d_detail_SBuil_0adb7a::Destroy(int **self)
{
  int *v1;
  int v2;
  int *v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int *v11;
  int *v12;
  int *v13;
  int *v14;
  int *v15;
  int *v16;
  int *v17;
  int v18;
  int *v19;
  unsigned int v20;
  int v21;
  int *v22;
  int *v23;
  int v24;
  int *v25;
  int v26;

  v25 = *self;
  if ( *self != nullptr )
  {
    v1 = *self;
    v2 = (*self)[55];
    if ( v2 != 0 )
    {
      v3 = (int *)v1[60];
      v4 = v1[64] + 4;
      if ( v4 > (unsigned int)(uintptr_t)(v3) )
      {
        do
        {
          v5 = *v3++;
          gll_operator_delete_arr(v5);
        }
        while ( v4 > (unsigned int)(uintptr_t)(v3) );
        v2 = v25[55];
      }
      gll_operator_delete_arr(v2);
    }
    v22 = (int *)v25[48];
    if ( v22 != nullptr )
    {
      v6 = v25[50];
      v26 = v6;
      if ( v6 > 3 )
      {
        if ( (v6 & 3) != 0 )
          v26 = v25[50] + 4 - (v25[50] & 3);
      }
      else
      {
        v26 = 4;
      }
      v7 = (int *)v25[47];
      v24 = v25[49];
      v8 = v25[48];
      while ( 1 )
      {
        v9 = (int *)(v8 + v24 - 4);
        v10 = *v9;
        v11 = *(int **)(v8 + v24 - 8);
        v12 = v9 - 1;
        v24 = v10;
        v23 = v11;
        if ( v22 != v12 )
        {
          v13 = v22;
          do
          {
            while ( v13 == v7 )
            {
              v7 = (int *)*v13;
              v13 = (int *)((char *)v13 + v26);
              if ( v13 == v12 )
                goto LABEL_18;
            }
            if ( v13[7] != 0 )
              gll_operator_delete_arr(v13[7]);
            v13 = (int *)((char *)v13 + v26);
          }
          while ( v13 != v12 );
        }
LABEL_18:
        if ( v22 != nullptr )
          opDeleteArray(v22);
        if ( v23 == nullptr )
          break;
        v8 = (int)(uintptr_t)(v23);
        v22 = v23;
      }
      v14 = v25;
      v25[48] = 0;
    }
    else
    {
      sub_6025A0(v25 + 47);
      v14 = v25;
    }
    if ( v14[44] != 0 )
      gll_operator_delete_arr(v14[44]);
    v15 = v25 + 34;
    do
    {
      v16 = v15 - 6;
      g4_std::Rb_tree_int_pair_int_const_quick_a43f1c::M_erase(
        (int)(uintptr_t)(v15 - 6),
        (uint32_t *)*(v15 - 4));
      v15 = v16;
    }
    while ( v25 + 22 != v16 );
    v17 = v25;
    if ( v25[10] != 0 )
    {
      gll_operator_delete_arr(v25[10]);
      v17 = v25;
    }
    v18 = *v17;
    if ( *v17 != 0 )
    {
      v19 = (int *)v17[5];
      v20 = v17[9] + 4;
      if ( v20 > (unsigned int)(uintptr_t)(v19) )
      {
        do
        {
          v21 = *v19++;
          gll_operator_delete_arr(v21);
        }
        while ( v20 > (unsigned int)(uintptr_t)(v19) );
        v18 = *v25;
      }
      gll_operator_delete_arr(v18);
    }
    opDelete(v25);
  }
}


