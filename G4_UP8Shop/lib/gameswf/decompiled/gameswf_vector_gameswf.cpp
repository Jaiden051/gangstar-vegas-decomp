#include "Core/Utils/DecompTypes.h"
#include "gameswf_vector_gameswf.h"

// ----------------------------------------------------------------------------
// Function: g4_std::vector_gameswf_TextShaper_Shape_2b189a::M_insert_aux  (binary VA: 0x106bfa0)
// Original: std::vector<gameswf::TextShaper::ShapeData>::_M_insert_aux
// ----------------------------------------------------------------------------
size_t g4_std::vector_gameswf_TextShaper_Shape_2b189a::M_insert_aux(int *a1, int a2, int *a3)
{
  int *v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  __m128 v13;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  int *v25;
  int v26;
  int v27;
  int16_t v28;
  size_t v29;
  int16_t v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  uint32_t *v34;
  int v35;
  int v36;
  unsigned int v37;
  int v38;

  v3 = a1;
  v4 = (uint32_t *)a1[1];
  if ( v4 != (uint32_t *)a1[2] )
  {
    v5 = 0;
    if ( v4 != nullptr )
    {
      *v4 = *(v4 - 8);
      v4[1] = *(v4 - 7);
      v4[2] = *(v4 - 6);
      v4[3] = *(v4 - 5);
      v4[4] = *(v4 - 4);
      v4[5] = *(v4 - 3);
      v4[6] = *(v4 - 2);
      v4[7] = *(v4 - 1);
      v5 = a1[1];
    }
    a1[1] = v5 + 32;
    v6 = (uint32_t *)(v5 - 32);
    v30 = *((uint16_t *)a3 + 2);
    v27 = a3[2];
    v36 = *a3;
    v7 = ((int)(uintptr_t)(v6) - a2) >> 5;
    v28 = *((uint16_t *)a3 + 3);
    v32 = a3[3];
    v8 = v6;
g4_m128_raw(v9) = (unsigned int)a3[4];
g4_m128_raw(v10) = (unsigned int)a3[5];
g4_m128_raw(v11) = (unsigned int)a3[6];
g4_m128_raw(v12) = (unsigned int)a3[7];
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        v8 -= 8;
        --v7;
        *v6 = *v8;
        v6[1] = v8[1];
        v6[2] = v8[2];
        v6[3] = v8[3];
        v6[4] = v8[4];
        v6[5] = v8[5];
        v6[6] = v8[6];
        v6[7] = v8[7];
        if ( v7 == 0 )
          break;
        v6 -= 8;
      }
    }
g4_m128_lane<uint64_t>(v13, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v9, v10), 0);
    *(uint32_t *)a2 = v36;
    *(uint16_t *)(a2 + 4) = v30;
g4_m128_lane<uint64_t>(v13, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v11, v12), 0);
    *(uint16_t *)(a2 + 6) = v28;
    *(uint32_t *)(a2 + 8) = v27;
    *(uint32_t *)(a2 + 12) = v32;
    _mm_storel_ps((double *)(a2 + 16), v13);
    _mm_storeh_ps((double *)(a2 + 24), v13);
    return v32;
  }
  v15 = *a1;
  v16 = ((int)(uintptr_t)(v4) - *a1) >> 5;
  v33 = v16;
  if ( v16 != 0 )
  {
    v17 = 2 * v16;
    v37 = v17;
    if ( v33 > v17 || v17 > 0x7FFFFFF )
    {
      v29 = 0xFFFFFFE0;
      v18 = (a2 - v15) >> 5;
    }
    else
    {
      v29 = v33 << 6;
      v18 = (a2 - v15) >> 5;
      if ( v37 == 0 )
      {
        v31 = 32;
        v38 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v29 = 32;
    v18 = (a2 - v15) >> 5;
  }
  v26 = v18;
  v38 = opNew(v29);
  v31 = v38 + 32;
  v3 = a1;
  v18 = v26;
LABEL_13:
  v19 = (uint32_t *)(v38 + 32 * v18);
  if ( v19 != nullptr )
  {
    *v19 = *a3;
    v19[1] = a3[1];
    v19[2] = a3[2];
    v19[3] = a3[3];
    v19[4] = a3[4];
    v19[5] = a3[5];
    v19[6] = a3[6];
    v19[7] = a3[7];
  }
  v20 = (uint32_t *)*v3;
  v34 = (uint32_t *)*v3;
  if ( *v3 != a2 )
  {
    v21 = (uint32_t *)v38;
    do
    {
      if ( v21 != nullptr )
      {
        *v21 = *v20;
        v21[1] = v20[1];
        v21[2] = v20[2];
        v21[3] = v20[3];
        v21[4] = v20[4];
        v21[5] = v20[5];
        v21[6] = v20[6];
        v21[7] = v20[7];
      }
      v20 += 8;
      v21 += 8;
    }
    while ( v20 != (uint32_t *)a2 );
    v31 = v38 + ((a2 - (uint32_t)(uintptr_t)(v34 + 8)) & 0xFFFFFFE0) + 64;
  }
  v35 = v3[1];
  if ( v35 != a2 )
  {
    v22 = (uint32_t *)v3[1];
    v23 = (uint32_t *)a2;
    v24 = (uint32_t *)v31;
    do
    {
      if ( v24 != nullptr )
      {
        *v24 = *v23;
        v24[1] = v23[1];
        v24[2] = v23[2];
        v24[3] = v23[3];
        v24[4] = v23[4];
        v24[5] = v23[5];
        v24[6] = v23[6];
        v24[7] = v23[7];
      }
      v23 += 8;
      v24 += 8;
    }
    while ( v22 != v23 );
    v31 += ((v35 - (a2 + 32)) & 0xFFFFFFE0) + 32;
  }
  if ( *v3 != 0 )
  {
    v25 = v3;
    opDelete((void *)*v3);
    v3 = v25;
  }
  *v3 = v38;
  v3[1] = v31;
  v3[2] = v29 + v38;
  return v29 + v38;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_gameswf_FaceProvider_Fac_a1321a::M_insert_aux  (binary VA: 0x1170c00)
// Original: std::vector<gameswf::FaceProvider::FaceEntry>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_gameswf_FaceProvider_Fac_a1321a::M_insert_aux(int *a1, char *a2, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  char *v6;
  int v7;
  char *v8;
  char *v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int *v13;
  int v14;
  char *v15;
  uint32_t *v16;
  char *v17;
  char *v18;
  uint32_t *v19;
  unsigned int v20;
  char *v21;
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
  int v32;
  int v33;
  int v34;

  v3 = (uint32_t *)a1[1];
  if ( v3 != (uint32_t *)a1[2] )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 9);
      v3[1] = *(v3 - 8);
      v3[2] = *(v3 - 7);
      v3[3] = *(v3 - 6);
      v3[4] = *(v3 - 5);
      v3[5] = *(v3 - 4);
      v3[6] = *(v3 - 3);
      v3[7] = *(v3 - 2);
      v3[8] = *(v3 - 1);
      v4 = a1[1];
    }
    v5 = v4 + 36;
    v6 = (char *)(v4 - 36);
    a1[1] = v5;
    v26 = *a3;
    v27 = a3[1];
    v28 = a3[2];
    v7 = 954437177 * ((v6 - a2) >> 2);
    v29 = a3[3];
    v30 = a3[4];
    v31 = a3[5];
    v32 = a3[6];
    v33 = a3[7];
    v34 = a3[8];
    v8 = v6;
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        v8 -= 36;
        --v7;
        *(uint32_t *)v6 = *(uint32_t *)v8;
        *((uint32_t *)v6 + 1) = *((uint32_t *)v8 + 1);
        *((uint32_t *)v6 + 2) = *((uint32_t *)v8 + 2);
        *((uint32_t *)v6 + 3) = *((uint32_t *)v8 + 3);
        *((uint32_t *)v6 + 4) = *((uint32_t *)v8 + 4);
        *((uint32_t *)v6 + 5) = *((uint32_t *)v8 + 5);
        *((uint32_t *)v6 + 6) = *((uint32_t *)v8 + 6);
        *((uint32_t *)v6 + 7) = *((uint32_t *)v8 + 7);
        *((uint32_t *)v6 + 8) = *((uint32_t *)v8 + 8);
        if ( v7 == 0 )
          break;
        v6 -= 36;
      }
    }
    *(uint32_t *)a2 = v26;
    *((uint32_t *)a2 + 1) = v27;
    *((uint32_t *)a2 + 2) = v28;
    *((uint32_t *)a2 + 3) = v29;
    *((uint32_t *)a2 + 4) = v30;
    *((uint32_t *)a2 + 5) = v31;
    *((uint32_t *)a2 + 6) = v32;
    *((uint32_t *)a2 + 7) = v33;
    *((uint32_t *)a2 + 8) = v34;
    gameswf::FaceProvider::FaceEntry::Destroy();
    return;
  }
  v9 = (char *)*a1;
  v10 = 954437177 * (((int)(uintptr_t)(v3) - *a1) >> 2);
  if ( v10 != 0 )
  {
    v11 = 2 * v10;
    if ( v10 > 2 * v10 || v11 > 0x71C71C7 )
    {
      v25 = -4;
      v12 = 954437177 * ((a2 - v9) >> 2);
    }
    else
    {
      v25 = 72 * v10;
      v12 = 954437177 * ((a2 - v9) >> 2);
      if ( v11 == 0 )
      {
        v24 = 36;
        v23 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v25 = 36;
    v12 = 954437177 * ((a2 - v9) >> 2);
  }
  v22 = v12;
  v23 = opNew(v25);
  v24 = v23 + 36;
  v12 = v22;
LABEL_13:
  v13 = (int *)(v23 + 36 * v12);
  if ( v13 != nullptr )
  {
    *v13 = *a3;
    v13[1] = a3[1];
    v13[2] = a3[2];
    v13[3] = a3[3];
    v13[4] = a3[4];
    v13[5] = a3[5];
    v13[6] = a3[6];
    v13[7] = a3[7];
    v13[8] = a3[8];
  }
  v14 = *a1;
  if ( (char *)*a1 != a2 )
  {
    v15 = (char *)*a1;
    v16 = (uint32_t *)v23;
    do
    {
      if ( v16 != nullptr )
      {
        *v16 = *(uint32_t *)v15;
        v16[1] = *((uint32_t *)v15 + 1);
        v16[2] = *((uint32_t *)v15 + 2);
        v16[3] = *((uint32_t *)v15 + 3);
        v16[4] = *((uint32_t *)v15 + 4);
        v16[5] = *((uint32_t *)v15 + 5);
        v16[6] = *((uint32_t *)v15 + 6);
        v16[7] = *((uint32_t *)v15 + 7);
        v16[8] = *((uint32_t *)v15 + 8);
      }
      v15 += 36;
      v16 += 9;
    }
    while ( v15 != a2 );
    v24 = v23 + 4 * ((unsigned int)(uintptr_t)(&a2[-v14 - 36]) >> 2) + 72;
  }
  v17 = (char *)a1[1];
  if ( v17 != a2 )
  {
    v18 = a2;
    v19 = (uint32_t *)v24;
    do
    {
      if ( v19 != nullptr )
      {
        *v19 = *(uint32_t *)v18;
        v19[1] = *((uint32_t *)v18 + 1);
        v19[2] = *((uint32_t *)v18 + 2);
        v19[3] = *((uint32_t *)v18 + 3);
        v19[4] = *((uint32_t *)v18 + 4);
        v19[5] = *((uint32_t *)v18 + 5);
        v19[6] = *((uint32_t *)v18 + 6);
        v19[7] = *((uint32_t *)v18 + 7);
        v19[8] = *((uint32_t *)v18 + 8);
      }
      v18 += 36;
      v19 += 9;
    }
    while ( v17 != v18 );
    v20 = (unsigned int)(v17 - (a2 + 36)) >> 2;
    v17 = (char *)a1[1];
    v24 += 4 * v20 + 36;
  }
  v21 = (char *)*a1;
  if ( (char *)*a1 != v17 )
  {
    do
    {
      v21 += 36;
      gameswf::FaceProvider::FaceEntry::Destroy();
    }
    while ( v17 != v21 );
    v21 = (char *)*a1;
  }
  if ( v21 != nullptr )
    opDelete(v21);
  *a1 = v23;
  a1[1] = v24;
  a1[2] = v25 + v23;
}


