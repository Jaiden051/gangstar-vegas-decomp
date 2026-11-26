#include "Core/Utils/DecompTypes.h"
#include "TU25_MenuControllerPart5.h"

// ----------------------------------------------------------------------------
// Function: sub_BFA560  (binary VA: 0xbfa560)
// Original: sub_BFA560
// ----------------------------------------------------------------------------
int sub_BFA560()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DE6A0);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DE6A0, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE6A4), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE6A4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE6A8), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE6A8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DE6AC), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DE6AC, &unk_20D1280);
  dword_20DE6B0 = 1056964608;
  dword_20DE6B4 = 1056964608;
  dword_20DE6B8 = 1056964608;
  return 1056964608;
}

// ----------------------------------------------------------------------------
// Function: sub_BFA660  (binary VA: 0xbfa660)
// Original: sub_BFA660
// ----------------------------------------------------------------------------
uint32_t * sub_BFA660(uint32_t *a1, uint32_t *a2)
{
  *a1 = a2[39];
  a1[1] = a2[40];
  a1[2] = a2[41];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BFA690  (binary VA: 0xbfa690)
// Original: sub_BFA690
// ----------------------------------------------------------------------------
uint32_t * sub_BFA690(uint32_t *a1, int *a2)
{
  int v3;
  int v4;
  int v5;

  v3 = *a2;
  a1[25] = *a2;
  v4 = a2[1];
  a1[26] = v4;
  v5 = a2[2];
  a1[27] = v5;
  a1[28] = v3;
  a1[29] = v4;
  a1[30] = v5;
  a1[31] = *a2;
  a1[32] = a2[1];
  a1[33] = a2[2];
  a1[37] = 0;
  a1[38] = 0;
  a1[34] = 0;
  a1[35] = 0;
  a1[36] = 0;
  a1[4] = *a2;
  a1[5] = a2[1];
  a1[6] = a2[2];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BFA720  (binary VA: 0xbfa720)
// Original: sub_BFA720
// ----------------------------------------------------------------------------
int sub_BFA720(int a1, int *a2, int a3)
{
  float v3; // xmm0_4
  int result;
  int v5;
  int v6;
  int v7;

  v3 = (float)a3;
  result = a1;
  if ( (float)a3 == 0.0 )
  {
    v5 = *a2;
    *(uint32_t *)(a1 + 100) = *a2;
    v6 = a2[1];
    *(uint32_t *)(a1 + 104) = v6;
    v7 = a2[2];
    *(uint32_t *)(a1 + 108) = v7;
  }
  else
  {
    v5 = *(uint32_t *)(a1 + 100);
    v6 = *(uint32_t *)(a1 + 104);
    v7 = *(uint32_t *)(a1 + 108);
  }
  *(uint32_t *)(a1 + 112) = v5;
  *(uint32_t *)(a1 + 116) = v6;
  *(uint32_t *)(a1 + 120) = v7;
  *(uint32_t *)(a1 + 124) = *a2;
  *(uint32_t *)(a1 + 128) = a2[1];
  *(uint32_t *)(a1 + 132) = a2[2];
  *(uint32_t *)(a1 + 136) = 0;
  *(float *)(a1 + 148) = v3;
  *(uint32_t *)(a1 + 140) = 0;
  *(float *)(a1 + 152) = v3;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 16) = v5;
  *(uint32_t *)(a1 + 20) = v6;
  *(uint32_t *)(a1 + 24) = v7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFA7F0  (binary VA: 0xbfa7f0)
// Original: sub_BFA7F0
// ----------------------------------------------------------------------------
const char * sub_BFA7F0(int a1)
{
  const char *result;

  result = *(const char **)(a1 + 96);
  if ( *((uint32_t *)result - 3) == 0 )
  {
    result = "FollowCameraExterior";
    if ( *(uint32_t *)(a1 + 392) != 0 )
      return "FollowCameraInterior";
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFA820  (binary VA: 0xbfa820)
// Original: sub_BFA820
// ----------------------------------------------------------------------------
int sub_BFA820(int a1)
{
  int result;

  result = sub_973DD0(a1);
  if ( result != 0 )
  {
    result = sub_973DD0(a1);
    *(uint8_t *)(result + 1971) = 1;
  }
  *(uint8_t *)(a1 + 52) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFA870  (binary VA: 0xbfa870)
// Original: sub_BFA870
// ----------------------------------------------------------------------------
void sub_BFA870(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206B388);
  sub_9A67D0(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_BFA8A0  (binary VA: 0xbfa8a0)
// Original: sub_BFA8A0
// ----------------------------------------------------------------------------
float * sub_BFA8A0(float *a1, char a2)
{
  float *result;

  result = a1;
  if ( a2 != 0 && a1[87] > 0.0 )
  {
    a1[84] = 0.275f;
    a1[83] = 0.275f;
    a1[82] = 0.275f;
    a1[85] = 0.0;
    a1[86] = 0.0;
  }
  else
  {
    a1[89] = 0.0;
    a1[88] = 0.0;
    a1[87] = 0.0;
    a1[90] = 0.0;
    a1[91] = 0.0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFA920  (binary VA: 0xbfa920)
// Original: sub_BFA920
// ----------------------------------------------------------------------------
float * sub_BFA920(float *result, float *a2)
{
  float v2; // xmm1_4
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm3_4
  float v6; // xmm3_4
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm4_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  float v28; // xmm4_4
  float v29; // xmm0_4
  float v30; // xmm4_4

  v2 = a2[5];
  v3 = *a2;
  v4 = a2[10];
  v5 = (float)(v2 + *a2) + v4;
  if ( v5 <= 0.0 )
  {
    if ( v3 <= v2 || v3 <= v4 )
    {
      if ( v2 <= v4 )
      {
        v29 = fsqrt((float)((float)(v4 - v3) - v2) + 1.0);
        v30 = 0.5 / v29;
        v12 = v29 * 0.5;
        v8 = (float)(a2[4] - a2[1]) * v30;
        v13 = (float)(a2[9] + a2[6]) * v30;
        v14 = (float)(a2[8] + a2[2]) * v30;
      }
      else
      {
        v27 = fsqrt((float)((float)(v2 - v3) - v4) + 1.0);
        v28 = 0.5 / v27;
        v13 = v27 * 0.5;
        v8 = (float)(a2[2] - a2[8]) * v28;
        v12 = (float)(a2[9] + a2[6]) * v28;
        v14 = (float)(a2[4] + a2[1]) * v28;
      }
      result[3] = v8;
    }
    else
    {
      v25 = fsqrt((float)((float)(v3 - v2) - v4) + 1.0);
      v26 = 0.5 / v25;
      v14 = v25 * 0.5;
      v8 = (float)(a2[9] - a2[6]) * v26;
      v12 = (float)(a2[2] + a2[8]) * v26;
      v13 = (float)(a2[4] + a2[1]) * v26;
      result[3] = v8;
    }
  }
  else
  {
    v6 = fsqrt(v5 + 1.0);
    v7 = 0.5 / v6;
    v8 = v6 * 0.5;
    v9 = a2[4] - a2[1];
    v10 = a2[2] - a2[8];
    v11 = a2[9] - a2[6];
    result[3] = v8;
    v12 = v9 * v7;
    v13 = v10 * v7;
    v14 = v11 * v7;
  }
  v15 = -v14;
  v16 = -v13;
  v17 = -v12;
  *result = v15;
  result[1] = v16;
  result[2] = -v12;
  v18 = (float)((float)((float)(v15 * v15) + (float)(v16 * v16)) + (float)(v8 * v8)) + (float)(v17 * v17);
  if ( v18 != 0.0 )
  {
    v19 = 1.0 / fsqrt(v18);
    v20 = (float)((float)((float)(v18 * v19) * v19) + -3.0) * (float)(v19 * -0.5);
    v21 = v15 * v20;
    v22 = v16 * v20;
    v23 = v17 * v20;
    v24 = v20 * result[3];
    *result = v21;
    result[1] = v22;
    result[2] = v23;
    result[3] = v24;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFAB60  (binary VA: 0xbfab60)
// Original: sub_BFAB60
// ----------------------------------------------------------------------------
int sub_BFAB60(float *a1, float *a2)
{
  float v3; // xmm6_4
  float v4; // xmm3_4
  float v5; // xmm7_4
  float v6; // xmm4_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm5_4
  float v10; // xmm1_4
  float v11; // xmm7_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  int result;
  float v25; // xmm4_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  double v28; // xmm0_8
  int v29;
  float v30; // xmm3_4
  double v31; // xmm1_8
  float v32; // xmm0_4
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;

  v3 = a1[15];
  v4 = a1[10];
  v5 = a1[14];
  v6 = a1[11];
  v7 = a1[7];
  v8 = a1[6];
  v42 = (float)(v3 * v4) - (float)(v5 * v6);
  v41 = (float)(v8 * v3) - (float)(v7 * v5);
  v9 = (float)(v8 * v6) - (float)(v7 * v4);
  v10 = a1[3];
  v11 = v5 * v10;
  v12 = v8 * v10;
  v13 = v4 * v10;
  v14 = a1[12];
  v40 = v9;
  v15 = a1[2];
  v16 = (float)(v3 * v15) - v11;
  v17 = a1[8];
  v18 = (float)(v6 * v15) - v13;
  v33 = a1[5];
  v19 = (float)(v15 * v7) - v12;
  v34 = a1[9];
  v39 = v16;
  v35 = a1[13];
  v38 = v18;
  v20 = a1[4];
  v37 = (float)(v35 * v17) - (float)(v34 * v14);
  v21 = a1[1];
  v36 = (float)(v35 * v20) - (float)(v33 * v14);
  v22 = (float)(v34 * v20) - (float)(v33 * v17);
  v23 = *a1;
  result = 0;
  v25 = (float)(v35 * v23) - (float)(v14 * v21);
  v26 = (float)(v34 * v23) - (float)(v17 * v21);
  v27 = (float)(v23 * v33) - (float)(v20 * v21);
  v28 = (double)v25 * v40
      + (double)v27 * v42
      + (double)v22 * v39
      + (double)v37 * v19
      - (double)v26 * v41
      - (double)v36 * v38;
  if ( fabs(v28) > 0.00000001 )
  {
    v29 = 0;
    *a2 = (float)((float)(v40 * v35) + (float)(v42 * v33)) - (float)(v41 * v34);
    a2[1] = (float)((float)(v39 * a1[9]) - (float)(v42 * a1[1])) - (float)(v38 * a1[13]);
    a2[2] = (float)((float)(a1[13] * v19) + (float)(v41 * a1[1])) - (float)(v39 * a1[5]);
    a2[3] = (float)((float)(v38 * a1[5]) - (float)(v40 * a1[1])) - (float)(a1[9] * v19);
    a2[4] = (float)((float)(v41 * a1[8]) - (float)(v42 * a1[4])) - (float)(v40 * a1[12]);
    a2[5] = (float)((float)(v38 * a1[12]) + (float)(v42 * *a1)) - (float)(v39 * a1[8]);
    a2[6] = (float)((float)(v39 * a1[4]) - (float)(v41 * *a1)) - (float)(a1[12] * v19);
    a2[7] = (float)((float)(v19 * a1[8]) + (float)(v40 * *a1)) - (float)(v38 * a1[4]);
    a2[8] = (float)((float)(a1[15] * v22) + (float)(v37 * a1[7])) - (float)(v36 * a1[11]);
    a2[9] = (float)((float)(a1[11] * v25) - (float)(v37 * a1[3])) - (float)(a1[15] * v26);
    a2[10] = (float)((float)(a1[15] * v27) + (float)(v36 * a1[3])) - (float)(a1[7] * v25);
    a2[11] = (float)((float)(a1[7] * v26) - (float)(a1[3] * v22)) - (float)(a1[11] * v27);
    a2[12] = (float)((float)(v36 * a1[10]) - (float)(v37 * a1[6])) - (float)(a1[14] * v22);
    a2[13] = (float)((float)(a1[14] * v26) + (float)(v37 * a1[2])) - (float)(a1[10] * v25);
    a2[14] = (float)((float)(v25 * a1[6]) - (float)(v36 * a1[2])) - (float)(a1[14] * v27);
    v30 = (float)((float)(v27 * a1[10]) + (float)(v22 * a1[2])) - (float)(v26 * a1[6]);
    v31 = 1.0 / v28;
    a2[15] = v30;
    do
    {
      v32 = a2[v29] * v31;
      a2[v29++] = v32;
    }
    while ( v29 != 16 );
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFB040  (binary VA: 0xbfb040)
// Original: sub_BFB040
// ----------------------------------------------------------------------------
void sub_BFB040(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_206B388);
  sub_9A67D0(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_BFB080  (binary VA: 0xbfb080)
// Original: sub_BFB080
// ----------------------------------------------------------------------------
void sub_BFB080(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
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

  v25 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)v25[3];
      v20 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v21 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v22 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v23 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v24 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v19 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = (uint32_t *)v8[3];
                                  if ( v9 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      sub_BFB080(a1, v9[3]);
                                      v18 = (uint32_t *)v9[2];
                                      opDelete(v9);
                                      if ( v18 == nullptr )
                                        break;
                                      v9 = v18;
                                    }
                                  }
                                  v10 = (uint32_t *)v8[2];
                                  opDelete(v8);
                                  if ( v10 == nullptr )
                                    break;
                                  v8 = v10;
                                }
                              }
                              v11 = (uint32_t *)v19[2];
                              opDelete(v19);
                              if ( v11 == nullptr )
                                break;
                              v19 = v11;
                              v7 = v11;
                            }
                          }
                          v12 = (uint32_t *)v24[2];
                          opDelete(v24);
                          if ( v12 == nullptr )
                            break;
                          v24 = v12;
                          v6 = v12;
                        }
                      }
                      v13 = (uint32_t *)v23[2];
                      opDelete(v23);
                      if ( v13 == nullptr )
                        break;
                      v23 = v13;
                      v5 = v13;
                    }
                  }
                  v14 = (uint32_t *)v22[2];
                  opDelete(v22);
                  if ( v14 == nullptr )
                    break;
                  v22 = v14;
                  v4 = v14;
                }
              }
              v15 = (uint32_t *)v21[2];
              opDelete(v21);
              if ( v15 == nullptr )
                break;
              v21 = v15;
              v3 = v15;
            }
          }
          v16 = (uint32_t *)v20[2];
          opDelete(v20);
          if ( v16 == nullptr )
            break;
          v20 = v16;
          v2 = v16;
        }
      }
      v17 = (uint32_t *)v25[2];
      opDelete(v25);
      if ( v17 == nullptr )
        break;
      v25 = v17;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_BFB230  (binary VA: 0xbfb230)
// Original: sub_BFB230
// ----------------------------------------------------------------------------
uint32_t * sub_BFB230(uint32_t *result)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6; // xmm0_4
  int v7; // xmm0_4
  int v8;

  v1 = result[3];
  v8 = result[11];
  v2 = result[1];
  result[1] = result[4];
  v3 = result[2];
  result[2] = result[8];
  v4 = result[6];
  v5 = result[7];
  result[3] = result[12];
  result[4] = v2;
  v6 = result[9];
  result[8] = v3;
  result[6] = v6;
  result[9] = v4;
  v7 = result[13];
  result[12] = v1;
  result[7] = v7;
  result[13] = v5;
  result[11] = result[14];
  result[14] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFB2C0  (binary VA: 0xbfb2c0)
// Original: sub_BFB2C0
// ----------------------------------------------------------------------------
uint32_t * sub_BFB2C0(uint32_t *result, uint32_t *a2)
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
// Function: sub_BFB320  (binary VA: 0xbfb320)
// Original: sub_BFB320
// ----------------------------------------------------------------------------
int sub_BFB320(int a1)
{
  int v1;
  int v2;
  int v4;
  int v5;

  v1 = 1;
  v2 = sub_973DD0(a1);
  if ( v2 != 0 && *(uint32_t *)(*(uint32_t *)(v2 + 408) - 12) != 0 )
  {
    v4 = *(uint32_t *)(v2 + 404);
    if ( v4 != 0 && (G4_VCALL<int>(v4, 32) & 2) != 0 )
    {
      v5 = sub_973DD0(a1);
      LOBYTE(v5) = *(uint32_t *)(v5 + 2180) != 2;
      return v5;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sub_BFB3A0  (binary VA: 0xbfb3a0)
// Original: sub_BFB3A0
// ----------------------------------------------------------------------------
int sub_BFB3A0(int a1)
{
  return sub_973DD0(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_BFB3D0  (binary VA: 0xbfb3d0)
// Original: sub_BFB3D0
// ----------------------------------------------------------------------------
void sub_BFB3D0(float *a1, int a2)
{
  float *v2;
  int *v3;
  int v4;
  int v5;
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  float *v14;
  int *v15;
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  int v22;
  float *v23;
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27;
  float *v28;
  float *v29;
  typedef int *_g4_t_v30;
  typedef int *_g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34[3];
  typedef float _g4_t_v35[6];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v30)) > _g4_s0 ? (4u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v31)) > _g4_s1 ? (4u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (76u + sizeof(_g4_t_v32)) > _g4_s2 ? (76u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v33)) > _g4_s3 ? (80u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (92u + sizeof(_g4_t_v34)) > _g4_s4 ? (92u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (104u + sizeof(_g4_t_v35)) > _g4_s5 ? (104u + sizeof(_g4_t_v35)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 92u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);

  if ( a2 != 0 )
  {
    v2 = *((float **)a1 + 23);
    v3 = *(int **)v2;
    if ( *(uint32_t *)v2 != 0 )
    {
      v4 = *v3;
      v30 = *(int **)v2;
      if ( (*((uint8_t *)v3 + 245) & 8) != 0 )
      {
        v28 = (float *)(*(int (**)(int *))(v4 + 64))(v30);
        v7 = (float)(v28[3] + *v28) * 0.5;
        v6 = (float)(v28[4] + v28[1]) * 0.5;
      }
      else
      {
        v5 = (*(int (**)(int *))(v4 + 72))(v30);
        v6 = *(float *)(v5 + 52);
        v7 = *(float *)(v5 + 48);
      }
      v33 = v6 + v2[2];
      v32 = v7 + v2[1];
    }
    else
    {
      v33 = 0.0;
      v32 = 0.0;
    }
    (*(void (**)(float *))(*(uint32_t *)a2 + 52))(v34);
    v8 = v34[0] - v32;
    v9 = v34[1] - v33;
    v10 = (float)(v9 * v9) + (float)(v8 * v8);
    if ( v10 != 0.0 )
    {
      v11 = 1.0 / fsqrt(v10);
      v12 = (float)((float)((float)(v10 * v11) * v11) + -3.0) * (float)(v11 * -0.5);
      v8 = v8 * v12;
      v9 = v9 * v12;
    }
    v13 = a1[17];
    v14 = *((float **)a1 + 23);
    v15 = *(int **)v14;
    v16 = 0.0;
    v17 = sqrt((double)a1[16] * a1[16] - (double)v13 * v13);
    v18 = v17 * v8;
    v19 = 0.0;
    v20 = v17 * v9;
    v21 = 0.0;
    if ( *(uint32_t *)v14 != 0 )
    {
      v22 = *v15;
      v31 = *(int **)v14;
      if ( (*((uint8_t *)v15 + 245) & 8) != 0 )
      {
        v29 = (float *)(*(int (**)(int *))(v22 + 64))(v31);
        v26 = (float)(v29[3] + *v29) * 0.5;
        v25 = (float)(v29[4] + v29[1]) * 0.5;
        v24 = (float)(v29[5] + v29[2]) * 0.5;
      }
      else
      {
        v23 = (float *)(*(int (**)(int *))(v22 + 72))(v31);
        v24 = v23[14];
        v25 = v23[13];
        v26 = v23[12];
      }
      v19 = v26 + v14[1];
      v21 = v25 + v14[2];
      v16 = v24 + v14[3];
    }
    v27 = *a1;
    v35[0] = v19 - v18;
    v35[1] = v21 - v20;
    v35[2] = v13 + v16;
    (*(void (**)(float *, float *))(LODWORD(v27) + 8))(a1, v35);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_BFB650  (binary VA: 0xbfb650)
// Original: sub_BFB650
// ----------------------------------------------------------------------------
int sub_BFB650(int a1, char a2)
{
  int result;

  result = a1;
  if ( *(uint8_t *)(a1 + 400) != a2 )
    *(uint8_t *)(a1 + 400) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFB670  (binary VA: 0xbfb670)
// Original: sub_BFB670
// ----------------------------------------------------------------------------
uint32_t * sub_BFB670(uint32_t *a1, int a2, int *a3, int *a4)
{
  uint32_t *v4;
  int v5;
  int *v6;
  uint32_t *v7;
  uint32_t *i;
  char v11;

  if ( a2 != 0 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 1;
    if ( a3 != (int *)(&dword_20D7CDC) )
      v11 = *a4 < (unsigned int)a3[4];
  }
  v4 = (uint32_t *)opNew(0x2Cu);
  if ( v4 != (uint32_t *)-16 )
  {
    v5 = *a4;
    v4[6] = 0;
    v4[4] = v5;
    v4[7] = 0;
    v4[10] = 0;
    v4[8] = (uint32_t)(uintptr_t)(v4 + 6);
    v4[9] = (uint32_t)(uintptr_t)(v4 + 6);
    v6 = (int *)a4[3];
    if ( v6 != nullptr )
    {
      v7 = g4_std::Rb_tree_unsigned_int_pair_unsign_cdf969::M_copy(
             (int)(uintptr_t)(v4 + 5),
             v6,
             (int)(uintptr_t)(v4 + 6));
      v4[7] = (uint32_t)(uintptr_t)(v7);
      for ( i = v7; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      v4[8] = (uint32_t)(uintptr_t)(i);
      while ( v7[3] != 0 )
        v7 = (uint32_t *)v7[3];
      v4[9] = (uint32_t)(uintptr_t)(v7);
      v4[10] = a4[6];
    }
  }
  sub_1904970(v11, v4, a3, &dword_20D7CDC);
  ++dword_20D7CEC;
  *a1 = (uint32_t)(uintptr_t)(v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BFB790  (binary VA: 0xbfb790)
// Original: sub_BFB790
// ----------------------------------------------------------------------------
int sub_BFB790(int a1, int *a2)
{
  int *v3;
  unsigned int v4;
  int *v5;
  char v6; // bp
  unsigned int v7;
  int v9;
  typedef int *_g4_t_v11;
  typedef uint32_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v3 = (int *)dword_20D7CE0;
  if ( dword_20D7CE0 == 0 )
  {
    v3 = (int *)(&dword_20D7CDC);
    goto LABEL_10;
  }
  v4 = *a2;
  while ( 1 )
  {
    v7 = v3[4];
    if ( v7 <= v4 )
      break;
    v5 = (int *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (int *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v11 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v7 )
      goto LABEL_9;
LABEL_12:
    sub_BFB670(v12, 0, v11, a2);
LABEL_13:
    v9 = v12[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_10:
  if ( (int *)dword_20D7CE4 == v3 )
  {
    sub_BFB670(v12, 0, v3, a2);
    goto LABEL_13;
  }
  v11 = v3;
  v3 = (int *)sub_19048F0(v3);
  if ( *a2 > (unsigned int)v3[4] )
    goto LABEL_12;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v3);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BFB870  (binary VA: 0xbfb870)
// Original: sub_BFB870
// ----------------------------------------------------------------------------
int sub_BFB870(const char *a1, int *a2)
{
  int *v3;
  unsigned int v4;
  int v5;
  uint32_t *v6;
  int v7;
  size_t v8;
  const char *v9;
  unsigned int i;
  int v11;
  int *v12;
  int result;
  int *v14;
  typedef int *_g4_t_v15;
  typedef int *_g4_t_v16;
  typedef int *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[2];
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v17)) > _g4_s2 ? (28u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v18)) > _g4_s3 ? (36u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v19)) > _g4_s4 ? (40u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v21)) > _g4_s6 ? (48u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v22)) > _g4_s7 ? (52u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v23)) > _g4_s8 ? (64u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v24)) > _g4_s9 ? (72u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v25)) > _g4_s10 ? (76u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v26)) > _g4_s11 ? (80u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v27)) > _g4_s12 ? (84u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v28)) > _g4_s13 ? (88u + sizeof(_g4_t_v28)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 88u);

  v3 = (int *)dword_20D7CE0;
  if ( dword_20D7CE0 != 0 )
  {
    a2 = (int *)(&dword_20D7CDC);
    v15 = (int *)(&dword_20D7CDC);
    do
    {
      while ( (unsigned int)v3[4] > 0xEE949913 )
      {
        v15 = v3;
        v3 = (int *)v3[2];
        if ( v3 == nullptr )
          goto LABEL_6;
      }
      v3 = (int *)v3[3];
    }
    while ( v3 != nullptr );
LABEL_6:
    if ( v15 != (int *)(&dword_20D7CDC) )
    {
      if ( (unsigned int)v15[4] <= 0xEE949914 )
        goto LABEL_15;
      v21 = &v18;
      v20 = &v18;
      v26 = &v24;
      v27 = &v24;
      v22 = 0;
      v28 = 0;
      v18 = 0;
      v19 = nullptr;
      v23[0] = -292251372;
      v24 = 0;
      v25 = nullptr;
      v4 = v15[4];
      if ( v4 <= 0xEE949914 )
      {
        v6 = nullptr;
        if ( v4 > 0xEE949913 )
          goto LABEL_14;
        if ( v15 == (int *)dword_20D7CE8 )
          goto LABEL_12;
        v5 = sub_19048E0(v15);
        if ( *(uint32_t *)(v5 + 16) > 0xEE949914 )
        {
          if ( v15[3] == 0 )
            goto LABEL_12;
LABEL_34:
          sub_BFB670(v5, v23);
          goto LABEL_13;
        }
LABEL_29:
        sub_BFB790(a2, v23);
        v15 = v16;
        v6 = v25;
        goto LABEL_14;
      }
      if ( v15 != (int *)dword_20D7CE4 )
      {
        v5 = sub_1904940(v15);
        if ( *(uint32_t *)(v5 + 16) > 0xEE949913 )
          goto LABEL_29;
        if ( *(uint32_t *)(v5 + 12) == 0 )
          goto LABEL_34;
      }
LABEL_12:
      sub_BFB670(v15, v23);
LABEL_13:
      v15 = v17;
      v6 = v25;
LABEL_14:
      sub_BFB080(v4, v6);
      sub_BFB080(v7, v19);
LABEL_15:
      v8 = strlen(a1);
      v9 = &a1[v8];
      for ( i = 0; a1 != v9; i ^= (i << 6) + (i >> 2) - 1640531527 + v11 )
        v11 = *a1++;
      v12 = (int *)v15[7];
      result = -1;
      if ( v12 != nullptr )
      {
        v14 = v15 + 6;
        do
        {
          while ( v12[4] >= i )
          {
            v14 = v12;
            v12 = (int *)v12[2];
            if ( v12 == nullptr )
              goto LABEL_22;
          }
          v12 = (int *)v12[3];
        }
        while ( v12 != nullptr );
LABEL_22:
        result = -1;
        if ( v15 + 6 != v14 && i >= v14[4] )
          return v14[5];
      }
      return result;
    }
  }
  v20 = &v18;
  v21 = &v18;
  v18 = 0;
  v19 = nullptr;
  v22 = 0;
  v23[0] = -292251372;
  v24 = 0;
  v25 = nullptr;
  v28 = 0;
  v26 = &v24;
  v27 = &v24;
  if ( dword_20D7CEC != 0 && *(uint32_t *)(dword_20D7CE8 + 16) <= 0xEE949913 )
  {
    sub_BFB670(dword_20D7CE8, v23);
    v15 = v17;
    v6 = v25;
    goto LABEL_14;
  }
  goto LABEL_29;
}

// ----------------------------------------------------------------------------
// Function: sub_BFBB80  (binary VA: 0xbfbb80)
// Original: sub_BFBB80
// ----------------------------------------------------------------------------
int sub_BFBB80(int *a1, int a2)
{
  int v3;
  const char *v4;
  int *v5;
  int v6;
  int v7;
  const char *v8;
  int *v9;
  int v10;
  float v11; // xmm1_4
  int v12;
  int v13;
  const char *v14;
  int *v15;
  int v16;
  const char *v17;
  int *v18;
  int v19; // xmm3_4
  int v20;
  const char *v21;
  int *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  float v27; // xmm0_4
  float v28;
  int v29;
  const char *v30;
  int *v31;
  int v32;
  const char *v33;
  int *v34;
  int v35;
  int v36;
  const char *v37;
  int *v38;
  int v39;
  int v40;
  int v41;
  int v42; // xmm2_4
  int result;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  unsigned int v49;

  v3 = dword_20DA1B0;
  a1[98] = a2;
  v4 = (const char *)G4_VCALL<int>(a1, 72);
  v6 = *(uint32_t *)(v3 + 264 * sub_BFB870(v4, v5) + 44);
  v7 = dword_20DA1B0;
  a1[16] = v6;
  v8 = (const char *)G4_VCALL<int>(a1, 72);
  v10 = sub_BFB870(v8, v9);
  v11 = *((float *)a1 + 82) * 1000.0;
  v12 = *(uint32_t *)(v7 + 264 * v10 + 40);
  v13 = dword_20DA1B0;
  a1[17] = v12;
  v14 = (const char *)G4_VCALL<int>(a1, 72);
  v49 = *(uint32_t *)(v13 + 264 * sub_BFB870(v14, v15) + 28);
  v16 = dword_20DA1B0;
  v17 = (const char *)G4_VCALL<int>(a1, 72);
  v19 = *(uint32_t *)(v16 + 264 * sub_BFB870(v17, v18) + 24);
  v20 = dword_20DA1B0;
  v21 = (const char *)G4_VCALL<int>(a1, 72);
  v23 = *(uint32_t *)(v20 + 264 * sub_BFB870(v21, v22) + 20);
  if ( v11 == 0.0 )
  {
    v25 = v19;
    a1[54] = v19;
    a1[53] = v23;
    v24 = v23;
    a1[55] = v49;
    v26 = _mm_cvtsi128_si32(G4_BITCAST<__m128i>(v49));
  }
  else
  {
    v24 = a1[53];
    v25 = a1[54];
    v26 = a1[55];
  }
  v27 = 1000.0 * *((float *)a1 + 82);
  a1[58] = v26;
  a1[60] = v19;
  a1[12] = v26;
  v28 = *(float *)a1;
  a1[61] = v49;
  a1[56] = v24;
  *((float *)a1 + 65) = v11;
  a1[10] = v24;
  *((float *)a1 + 66) = v11;
  a1[57] = v25;
  a1[11] = v25;
  a1[59] = v23;
  a1[62] = 0;
  v29 = dword_20DA1B0;
  a1[63] = 0;
  a1[64] = 0;
  v30 = (const char *)(*(int (**)(int *))(LODWORD(v28) + 72))(a1);
  v32 = *(uint32_t *)(v29 + 264 * sub_BFB870(v30, v31) + 16);
  v47 = dword_20DA1B0;
  v33 = (const char *)G4_VCALL<int>(a1, 72);
  v35 = sub_BFB870(v33, v34);
  v36 = dword_20DA1B0;
  v48 = *(uint32_t *)(v47 + 264 * v35 + 12);
  v37 = (const char *)G4_VCALL<int>(a1, 72);
  v39 = *(uint32_t *)(v36 + 264 * sub_BFB870(v37, v38) + 8);
  if ( v27 == 0.0 )
  {
    a1[67] = v39;
    a1[68] = v48;
    a1[69] = v32;
    v41 = v48;
    v40 = v39;
    v42 = v32;
  }
  else
  {
    v40 = a1[67];
    v41 = a1[68];
    v42 = a1[69];
  }
  a1[70] = v40;
  a1[71] = v41;
  a1[72] = v42;
  a1[73] = v39;
  a1[74] = v48;
  a1[75] = v32;
  *((float *)a1 + 79) = v27;
  a1[76] = 0;
  *((float *)a1 + 80) = v27;
  a1[77] = 0;
  a1[78] = 0;
  a1[19] = v41;
  a1[18] = v40;
  result = sub_973DD0(a1);
  if ( result != 0 )
  {
    v45 = sub_8F0680(v44);
    result = sub_973DD0(a1);
    if ( v45 == result )
    {
      result = sub_8F0680(v46);
      if ( *(uint8_t *)(result + 3202) == 0 )
      {
        result = a1[69];
        a1[21] = 0;
        a1[20] = result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFBEB0  (binary VA: 0xbfbeb0)
// Original: sub_BFBEB0
// ----------------------------------------------------------------------------
int sub_BFBEB0(int a1, int a2, int a3, char a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  float v8;
  float v9; // xmm0_4
  int v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  glitch::scene::ISceneNode::Self *v17;
  float *v18;
  float v19; // xmm0_4
  int *v20;
  int v21;
  float v22; // xmm0_4
  int v23;
  int v24;
  int **v25;
  float *v26;
  float v27; // xmm1_4
  float v28; // xmm2_4
  int *v29;
  int v30;
  int v31;
  float v32; // xmm1_4
  int v33;
  float v34; // xmm2_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm0_4
  float v40; // xmm4_4
  float *v41;
  int *v42;
  float v43; // xmm5_4
  float v44; // xmm0_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  float v47; // xmm1_4
  float v48; // xmm0_4
  int v49;
  float *v50;
  float v51; // xmm5_4
  float v52; // xmm0_4
  float v53; // xmm2_4
  int v54;
  float v55; // xmm0_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  float v58;
  float v59; // xmm0_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  float v62; // xmm3_4
  float v63; // xmm3_4
  float v64; // xmm2_4
  float v65; // xmm2_4
  float v66; // xmm1_4
  float v67; // xmm0_4
  float v68; // xmm4_4
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  float v74; // xmm0_4
  int v75;
  int v76;
  float *v77;
  float *v78;
  typedef int *_g4_t_v79;
  typedef int *_g4_t_v80;
  typedef int *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef char _g4_t_v89;
  typedef float _g4_t_v90[3];
  typedef uint32_t _g4_t_v91[3];
  typedef float _g4_t_v92[3];
  typedef float _g4_t_v93[16];
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef int *_g4_t_v96;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v79)) > _g4_s0 ? (0u + sizeof(_g4_t_v79)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v80)) > _g4_s1 ? (0u + sizeof(_g4_t_v80)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v81)) > _g4_s2 ? (0u + sizeof(_g4_t_v81)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v82)) > _g4_s3 ? (0u + sizeof(_g4_t_v82)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v83)) > _g4_s4 ? (4u + sizeof(_g4_t_v83)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v84)) > _g4_s5 ? (16u + sizeof(_g4_t_v84)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v85)) > _g4_s6 ? (48u + sizeof(_g4_t_v85)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v86)) > _g4_s7 ? (72u + sizeof(_g4_t_v86)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v87)) > _g4_s8 ? (80u + sizeof(_g4_t_v87)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v88)) > _g4_s9 ? (84u + sizeof(_g4_t_v88)) : _g4_s9,
    _g4_s11 = (91u + sizeof(_g4_t_v89)) > _g4_s10 ? (91u + sizeof(_g4_t_v89)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v90)) > _g4_s11 ? (108u + sizeof(_g4_t_v90)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v91)) > _g4_s12 ? (120u + sizeof(_g4_t_v91)) : _g4_s12,
    _g4_s14 = (132u + sizeof(_g4_t_v92)) > _g4_s13 ? (132u + sizeof(_g4_t_v92)) : _g4_s13,
    _g4_s15 = (144u + sizeof(_g4_t_v93)) > _g4_s14 ? (144u + sizeof(_g4_t_v93)) : _g4_s14,
    _g4_s16 = (208u + sizeof(_g4_t_v94)) > _g4_s15 ? (208u + sizeof(_g4_t_v94)) : _g4_s15,
    _g4_s17 = (212u + sizeof(_g4_t_v95)) > _g4_s16 ? (212u + sizeof(_g4_t_v95)) : _g4_s16,
    _g4_s18 = (280u + sizeof(_g4_t_v96)) > _g4_s17 ? (280u + sizeof(_g4_t_v96)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 0u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 0u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 0u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 0u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 4u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 16u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 48u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 72u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 80u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 84u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 91u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 108u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 120u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 132u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 144u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 208u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 212u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 280u);

  v96 = &a1;
  v4 = a1;
  v88 = a3;
  v89 = a4;
  sub_9A58F0(a1, a2);
  *(uint32_t *)(v4 + 336) = 0;
  *(uint32_t *)(v4 + 332) = 0;
  *(uint32_t *)(v4 + 328) = 0;
  *(uint32_t *)(v4 + 340) = 0;
  *(uint32_t *)(v4 + 344) = 0;
  *(uint32_t *)(v4 + 356) = 0;
  *(uint32_t *)(v4 + 352) = 0;
  *(uint32_t *)(v4 + 348) = 0;
  *(uint32_t *)(v4 + 360) = 0;
  *(uint32_t *)(v4 + 364) = 0;
  *(uint8_t *)(v4 + 401) = 0;
  result = sub_973DD0(v4);
  if ( result == 0 )
    goto LABEL_5;
  *(uint8_t *)(v4 + 324) = 1;
  v6 = sub_973DD0(v4);
  result = G4_VCALL<int>(v6, 168);
  if ( result == 0 || (result = *(uint32_t *)(G4_VCALL<int>(v6, 168) + 244) & 0x18) != 24 )
  {
    *(uint8_t *)(v4 + 372) = 1;
LABEL_5:
    v7 = *(uint32_t *)(v4 + 92);
    goto LABEL_6;
  }
  sub_BFBB80((int *)v4, *(uint32_t *)(v4 + 392));
  memset(v93, 0, sizeof(v93));
  v8 = *(float *)(v4 + 72);
  v93[0] = 1.0;
  v9 = *(float *)(v4 + 76);
  v93[12] = v8;
  v10 = *(uint32_t *)v4;
  v93[13] = -v9;
  v93[5] = 1.0;
  v93[10] = 1.0;
  v93[15] = 1.0;
  v93[14] = ((long double (*)(int))*(uint32_t *)(v10 + 88))(v4);
  v87 = sub_973DD0(v4);
  if ( byte_20D4920 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4920) != 0 )
  {
    memset(&dword_20D4940, 0, 0x40u);
    dword_20D4940 = 1065353216;
    dword_20D4954 = 1065353216;
    dword_20D4968 = 1065353216;
    dword_20D497C = 1065353216;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4920);
  }
  v11 = G4_VCALL<int>(v87, 168);
  v12 = (int *)(&dword_20D4940);
  if ( v11 != 0 )
  {
    v13 = G4_VCALL<int>(v87, 168);
    v12 = (int *)G4_VCALL<int>(v13, 72);
  }
  if ( *((float *)v12 + 10) < 0.0 )
    v93[14] = -v93[14];
  glitch::scene::ISceneNode::setRelativeTransformation(
    **(glitch::scene::ISceneNode::Self ***)(v4 + 92),
    (const glitch::core::CMatrix4<float> *)v93);
  (*(void (**)(uint32_t, int, uint32_t, int))(***(uint32_t ***)(v4 + 92) + 76))(**(uint32_t **)(v4 + 92), 1, 0, 1);
  v14 = sub_973DD0(v4);
  v15 = G4_VCALL<int>(v14, 168);
  G4_VCALL<void>(v15, 104, *(uint32_t *)(v4 + 92));
  v16 = sub_973DD0(v4);
  v17 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(v16, 168);
  glitch::scene::ISceneNode::updateAbsolutePosition(v17, true);
  v18 = *(float **)(v4 + 92);
  v19 = 0.0;
  v20 = *(int **)v18;
  if ( *(uint32_t *)v18 != 0 )
  {
    v21 = *v20;
    v79 = *(int **)v18;
    if ( (*((uint8_t *)v20 + 245) & 8) != 0 )
    {
      v76 = (*(int (**)(int *))(v21 + 64))(v79);
      v22 = (float)(*(float *)(v76 + 20) + *(float *)(v76 + 8)) * 0.5;
    }
    else
    {
      v22 = *(float *)((*(int (**)(int *))(v21 + 72))(v79) + 56);
    }
    v19 = v22 + v18[3];
  }
  v23 = *(uint32_t *)v4;
  *(float *)(v4 + 368) = v19;
  v24 = (*(int (**)(int))(v23 + 12))(v4);
  v25 = *(int ***)(v4 + 92);
  v26 = (float *)v24;
  v27 = 0.0;
  v28 = 0.0;
  v29 = *v25;
  if ( *v25 != nullptr )
  {
    v30 = *v29;
    v80 = *v25;
    v86 = *(uint32_t *)(v4 + 92);
    if ( (*((uint8_t *)v29 + 245) & 8) != 0 )
    {
      v77 = (float *)(*(int (**)(int *))(v30 + 64))(v80);
      v33 = v86;
      v34 = (float)(v77[3] + *v77) * 0.5;
      v32 = (float)(v77[4] + v77[1]) * 0.5;
    }
    else
    {
      v31 = (*(int (**)(int *))(v30 + 72))(v80);
      v32 = *(float *)(v31 + 52);
      v33 = v86;
      v34 = *(float *)(v31 + 48);
    }
    v28 = v34 + *(float *)(v33 + 4);
    v27 = v32 + *(float *)(v33 + 8);
  }
  v35 = v28 - *v26;
  v36 = v27 - v26[1];
  if ( v89 != 0 )
  {
    if ( sub_973DD0(v4) != 0
      && (v69 = sub_973DD0(v4)) != 0
      && *(uint32_t *)(*(uint32_t *)(v69 + 408) - 12) != 0
      && (v70 = *(uint32_t *)(v69 + 404)) != 0
      && (G4_VCALL<int>(v70, 32) & 2) != 0
      && (v71 = sub_973DD0(v4), (uint8_t)sub_9882C0(v71 + 460, 40) != 0) )
    {
      if ( sub_973DD0(v4) != 0
        && (v72 = sub_973DD0(v4), (uint8_t)sub_5ECA00(v72) != 0)
        && (*(uint8_t *)(sub_973DD0(v4) + 1875) & 0x40) != 0 )
      {
LABEL_51:
        v83 = *(uint32_t *)(v4 + 92);
        sub_A04F10(v90);
        v36 = -v90[1];
        v35 = -v90[0];
      }
      else
      {
LABEL_43:
        (*(void (**)(uint32_t))(***(uint32_t ***)(v4 + 92) + 72))(**(uint32_t **)(v4 + 92));
        sub_BFB2C0();
        v36 = v95;
        v35 = v94;
      }
    }
    else
    {
      switch ( v88 )
      {
        case 0:
          goto LABEL_51;
        case 1:
          v83 = *(uint32_t *)(v4 + 92);
          sub_A04F10(v91);
          v35 = *(float *)v91;
          v36 = *(float *)&v91[1];
          break;
        case 2:
          (*(void (**)(uint32_t))(***(uint32_t ***)(v4 + 92) + 72))(**(uint32_t **)(v4 + 92));
          sub_BFB2C0();
          v36 = -v95;
          v35 = -v94;
          break;
        case 3:
          goto LABEL_43;
        case 4:
          v73 = sub_973DD0(v4);
          v36 = -*(float *)(v73 + 1992);
          v35 = -*(float *)(v73 + 1988);
          break;
        case 5:
          v85 = *(float *)(sub_973DD0(v4) + 1992);
          v84 = -*(float *)(sub_973DD0(v4) + 1988);
          v74 = 1.0;
          if ( *(uint8_t *)(sub_973DD0(v4) + 1970) != 0 )
            v74 = -1.0;
          v75 = sub_973DD0(v4);
          v35 = (float)(v85 * v74) - *(float *)(v75 + 1988);
          v36 = (float)(v84 * v74) - *(float *)(v75 + 1992);
          break;
        default:
          break;
      }
    }
  }
  v37 = (float)(v36 * v36) + (float)(v35 * v35);
  if ( v37 != 0.0 )
  {
    v38 = 1.0 / fsqrt(v37);
    v39 = (float)((float)((float)(v37 * v38) * v38) + -3.0) * (float)(v38 * -0.5);
    v35 = v35 * v39;
    v36 = v36 * v39;
  }
  v40 = *(float *)(v4 + 68);
  v41 = *(float **)(v4 + 92);
  v42 = *(int **)v41;
  v43 = 0.0;
  v44 = sqrt((double)*(float *)(v4 + 64) * *(float *)(v4 + 64) - (double)v40 * v40);
  v45 = v44 * v35;
  v46 = 0.0;
  v47 = v36 * v44;
  v48 = 0.0;
  if ( *(uint32_t *)v41 != 0 )
  {
    v49 = *v42;
    v81 = *(int **)v41;
    if ( (*((uint8_t *)v42 + 245) & 8) != 0 )
    {
      v78 = (float *)(*(int (**)(int *, int))(v49 + 64))(v81, v83);
      v53 = (float)(v78[3] + *v78) * 0.5;
      v52 = (float)(v78[4] + v78[1]) * 0.5;
      v51 = (float)(v78[5] + v78[2]) * 0.5;
    }
    else
    {
      v50 = (float *)(*(int (**)(int *, int))(v49 + 72))(v81, v83);
      v51 = v50[14];
      v52 = v50[13];
      v53 = v50[12];
    }
    v46 = v53 + v41[1];
    v48 = v52 + v41[2];
    v43 = v51 + v41[3];
  }
  v54 = *(uint32_t *)v4;
  v92[1] = v48 - v47;
  v92[0] = v46 - v45;
  v92[2] = v40 + v43;
  (*(void (**)(int, float *))(v54 + 8))(v4, v92);
  v7 = *(uint32_t *)(v4 + 92);
  v55 = 0.0;
  v56 = 0.0;
  v57 = 0.0;
  result = *(uint32_t *)v7;
  if ( *(uint32_t *)v7 != 0 )
  {
    v58 = *(float *)result;
    v82 = *(uint32_t *)v7;
    if ( (*(uint8_t *)(result + 245) & 8) != 0 )
    {
      result = (*(int (**)(int))(LODWORD(v58) + 64))(v82);
      v61 = (float)(*(float *)(result + 12) + *(float *)result) * 0.5;
      v60 = (float)(*(float *)(result + 16) + *(float *)(result + 4)) * 0.5;
      v59 = (float)(*(float *)(result + 20) + *(float *)(result + 8)) * 0.5;
    }
    else
    {
      result = (*(int (**)(int))(LODWORD(v58) + 72))(v82);
      v59 = *(float *)(result + 56);
      v60 = *(float *)(result + 52);
      v61 = *(float *)(result + 48);
    }
    v57 = v61 + *(float *)(v7 + 4);
    v56 = v60 + *(float *)(v7 + 8);
    v55 = v59 + *(float *)(v7 + 12);
    v7 = *(uint32_t *)(v4 + 92);
  }
  v62 = *(float *)(v4 + 16);
  *(uint32_t *)(v4 + 204) = 0;
  v63 = v62 - v57;
  *(float *)(v4 + 156) = v57;
  *(float *)(v4 + 168) = v57;
  *(uint32_t *)(v4 + 208) = 0;
  *(float *)(v4 + 180) = v57;
  *(uint32_t *)(v4 + 192) = 0;
  v64 = *(float *)(v4 + 20);
  *(uint32_t *)(v4 + 196) = 0;
  v65 = v64 - v56;
  *(float *)(v4 + 160) = v56;
  *(float *)(v4 + 172) = v56;
  *(float *)(v4 + 184) = v56;
  *(uint32_t *)(v4 + 200) = 0;
  v66 = *(float *)(v4 + 24) - v55;
  *(float *)(v4 + 164) = v55;
  *(float *)(v4 + 176) = v55;
  *(float *)(v4 + 188) = v55;
  *(float *)(v4 + 376) = v63;
  *(float *)(v4 + 380) = v65;
  *(float *)(v4 + 384) = v66;
  v67 = (float)((float)(v65 * v65) + (float)(v63 * v63)) + (float)(v66 * v66);
  v68 = fsqrt(v67);
  *(float *)(v4 + 388) = v68;
  if ( v67 != 0.0 )
  {
    *(float *)(v4 + 376) = v63 * (float)(1.0 / v68);
    *(float *)(v4 + 380) = v65 * (float)(1.0 / v68);
    *(float *)(v4 + 384) = v66 * (float)(1.0 / v68);
  }
LABEL_6:
  if ( v7 != 0 )
  {
    *(uint32_t *)(v7 + 4) = 0;
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)(v7 + 12) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFC860  (binary VA: 0xbfc860)
// Original: sub_BFC860
// ----------------------------------------------------------------------------
int sub_BFC860(int a1, int a2)
{
  int v2;

  *(uint32_t *)(a1 + 392) = a2;
  v2 = sub_973DD0(a1);
  return sub_BFBEB0(a1, v2, 0, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_BFC8C0  (binary VA: 0xbfc8c0)
// Original: sub_BFC8C0
// ----------------------------------------------------------------------------
int sub_BFC8C0(int a1, int a2, int a3, char a4)
{
  int result;

  result = sub_BFBEB0(a1, a2, a3, a4);
  *(uint8_t *)(a1 + 52) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFC900  (binary VA: 0xbfc900)
// Original: sub_BFC900
// ----------------------------------------------------------------------------
int sub_BFC900(int a1, int a2, int a3)
{
  int result;

  sub_9A59E0(a1, a3);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206B388);
  *(uint32_t *)(a1 + 100) = 0;
  *(uint32_t *)(a1 + 104) = 0;
  *(uint32_t *)(a1 + 108) = 0;
  *(uint32_t *)(a1 + 112) = 0;
  *(uint32_t *)(a1 + 116) = 0;
  *(uint32_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 124) = 0;
  *(uint32_t *)(a1 + 128) = 0;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 0;
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 180) = 0;
  *(uint32_t *)(a1 + 184) = 0;
  *(uint32_t *)(a1 + 188) = 0;
  *(uint32_t *)(a1 + 192) = 0;
  *(uint32_t *)(a1 + 196) = 0;
  *(uint32_t *)(a1 + 200) = 0;
  *(uint32_t *)(a1 + 204) = 0;
  *(uint32_t *)(a1 + 208) = 0;
  *(uint32_t *)(a1 + 212) = 0;
  *(uint32_t *)(a1 + 216) = 0;
  *(uint32_t *)(a1 + 220) = 0;
  *(uint32_t *)(a1 + 224) = 0;
  *(uint32_t *)(a1 + 228) = 0;
  *(uint32_t *)(a1 + 232) = 0;
  *(uint32_t *)(a1 + 236) = 0;
  *(uint32_t *)(a1 + 240) = 0;
  *(uint32_t *)(a1 + 244) = 0;
  *(uint32_t *)(a1 + 248) = 0;
  *(uint32_t *)(a1 + 252) = 0;
  *(uint32_t *)(a1 + 256) = 0;
  *(uint32_t *)(a1 + 260) = 0;
  *(uint32_t *)(a1 + 264) = 0;
  *(uint32_t *)(a1 + 268) = 0;
  *(uint32_t *)(a1 + 272) = 0;
  *(uint32_t *)(a1 + 276) = 0;
  *(uint32_t *)(a1 + 280) = 0;
  *(uint32_t *)(a1 + 284) = 0;
  *(uint32_t *)(a1 + 288) = 0;
  *(uint32_t *)(a1 + 292) = 0;
  *(uint32_t *)(a1 + 296) = 0;
  *(uint32_t *)(a1 + 300) = 0;
  *(uint32_t *)(a1 + 304) = 0;
  *(uint32_t *)(a1 + 308) = 0;
  *(uint32_t *)(a1 + 312) = 0;
  *(uint32_t *)(a1 + 316) = 0;
  *(uint32_t *)(a1 + 320) = 0;
  *(uint32_t *)(a1 + 336) = 0;
  *(uint32_t *)(a1 + 332) = 0;
  *(uint32_t *)(a1 + 328) = 0;
  *(uint32_t *)(a1 + 340) = 0;
  *(uint32_t *)(a1 + 344) = 0;
  *(uint32_t *)(a1 + 356) = 0;
  *(uint32_t *)(a1 + 352) = 0;
  *(uint32_t *)(a1 + 348) = 0;
  *(uint32_t *)(a1 + 360) = 0;
  *(uint8_t *)(a1 + 324) = 1;
  *(uint32_t *)(a1 + 364) = 0;
  *(uint32_t *)(a1 + 376) = 0;
  *(uint32_t *)(a1 + 380) = 0;
  *(uint32_t *)(a1 + 384) = 0;
  *(uint8_t *)(a1 + 372) = 0;
  *(uint32_t *)(a1 + 392) = 0;
  *(uint8_t *)(a1 + 400) = 0;
  result = sub_BFBEB0(a1, a2, 0, 1);
  *(uint8_t *)(a1 + 52) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFEDE0  (binary VA: 0xbfede0)
// Original: sub_BFEDE0
// ----------------------------------------------------------------------------
int sub_BFEDE0(float a1, int a2, int a3, float a4)
{
  int v4;
  int v5;
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  float *v20;
  int v21;
  int v22;
  int v23;
  void *v24;
  void *v25;
  int v26;
  float v27;
  float v28; // xmm0_4
  int v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  glitch::scene::ISceneNode::Self *v34;
  int *v35;
  int v36;
  int v37;
  unsigned int v38;
  float *v39;
  float v40; // xmm0_4
  int *v41;
  int v42;
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm3_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm2_4
  float v52; // xmm0_4
  float v53; // xmm0_4
  const char *v54;
  int *v55;
  int v56;
  const char *v57;
  int *v58;
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm3_4
  float v62; // xmm1_4
  float v63; // xmm0_4
  float v64; // xmm1_4
  float v65; // xmm0_4
  float v66; // xmm2_4
  float v67; // xmm4_4
  float v68; // xmm2_4
  float v69; // xmm2_4
  int v70;
  float *v71;
  float v72; // xmm3_4
  float v73; // xmm0_4
  void (*v74)(uint32_t, uint32_t, uint32_t);
  int *v75;
  float v76; // xmm1_4
  float v77; // xmm2_4
  float v78; // xmm4_4
  float v79; // xmm5_4
  int v80;
  float *v81;
  float v82; // xmm2_4
  float v83; // xmm4_4
  float v84; // xmm5_4
  int v85;
  float v86; // xmm0_4
  float v87; // xmm1_4
  float v88; // xmm2_4
  int v89;
  float v90; // xmm0_4
  float v91; // xmm1_4
  float v92; // xmm2_4
  float *v93;
  int v94;
  float v95;
  float v96;
  char v97;
  float v98; // xmm1_4
  float *v99;
  float v100; // xmm3_4
  float v101; // xmm4_4
  float v102; // xmm2_4
  float v103; // xmm5_4
  int *v104;
  int v105;
  float *v106;
  float v107; // xmm3_4
  float v108; // xmm4_4
  float v109; // xmm5_4
  float v110; // xmm1_4
  float v111; // xmm7_4
  float v112; // xmm0_4
  float v113; // xmm3_4
  int v114; // xmm4_4
  float v115; // xmm6_4
  float v116; // xmm5_4
  float v117; // xmm2_4
  float v118; // xmm5_4
  float v119; // xmm2_4
  float v120; // xmm2_4
  float v121; // xmm6_4
  float v122; // xmm2_4
  float v123; // xmm7_4
  float v124; // xmm5_4
  float v125; // xmm3_4
  int v126;
  float v127; // xmm2_4
  float v128; // xmm4_4
  float v129; // xmm3_4
  float v130; // xmm2_4
  float v131; // xmm4_4
  float v132; // xmm5_4
  float v133; // xmm6_4
  float v134; // xmm7_4
  float v135; // xmm6_4
  float v136; // xmm3_4
  float v137; // xmm2_4
  float v138; // xmm6_4
  float v139; // xmm0_4
  float v140; // xmm1_4
  float v141; // xmm0_4
  long double v142; // fst7
  float v143; // xmm0_4
  float v144; // xmm0_4
  float v145; // xmm3_4
  float v146; // xmm2_4
  float v147; // xmm4_4
  float v148; // xmm1_4
  float v149; // xmm0_4
  float v150; // xmm5_4
  int v151;
  const char *v152;
  int *v153;
  int v154;
  const char *v155;
  int *v156;
  int v157;
  float v158; // xmm0_4
  float v159; // xmm1_4
  int v160;
  float *v161;
  int v162;
  float v163; // xmm2_4
  float v164; // xmm6_4
  float v165; // xmm5_4
  float v166; // xmm3_4
  int v167;
  int v168;
  float v169; // xmm1_4
  float v170; // xmm6_4
  float v171; // xmm0_4
  float v172; // xmm0_4
  float v173; // xmm3_4
  float v174; // xmm2_4
  float v175; // xmm4_4
  float v176; // xmm1_4
  float v177; // xmm0_4
  float v178; // xmm5_4
  int v179;
  const char *v180;
  int *v181;
  float *v182;
  float v183; // xmm0_4
  float v184; // xmm1_4
  float v185; // xmm0_4
  float v186; // xmm1_4
  float v187; // xmm2_4
  float v188; // xmm3_4
  float v189; // xmm2_4
  float v190; // xmm0_4
  float v191; // xmm1_4
  float v192; // xmm2_4
  float v193; // xmm3_4
  float v194; // xmm2_4
  int v195;
  const char *v196;
  int *v197;
  int v198;
  int v199;
  float *v200;
  int *v201;
  int v202;
  float *v203;
  float v204; // xmm0_4
  float v205; // xmm1_4
  float v206; // xmm2_4
  float v207; // xmm4_4
  float v208; // xmm3_4
  float v209; // xmm2_4
  const char *v210;
  int *v211;
  int v212;
  const char *v213;
  int *v214;
  int v215;
  const char *v216;
  int *v217;
  int v218;
  int v219;
  int v220;
  float *v221;
  float *v222;
  int v223;
  float *v224;
  float v225; // xmm0_4
  float *v226;
  float v227; // xmm2_4
  int v228;
  int result;
  float v230; // xmm0_4
  int v231;
  float v232;
  float v233;
  float retaddr;
  typedef int *_g4_t_v234;
  typedef int *_g4_t_x;
  typedef int *_g4_t_xa;
  typedef int _g4_t_xb;
  typedef int *_g4_t_xc;
  typedef int _g4_t_x_4;
  typedef void *_g4_t_lpdso_handle;
  typedef int _g4_t_v241;
  typedef float *_g4_t_v242;
  typedef int _g4_t_v243;
  typedef float *_g4_t_v244;
  typedef int _g4_t_v245;
  typedef float *_g4_t_v246;
  typedef float *_g4_t_v247;
  typedef float *_g4_t_v248;
  typedef int _g4_t_v249;
  typedef int _g4_t_v250;
  typedef int _g4_t_v251;
  typedef float _g4_t_v252;
  typedef int _g4_t_v253;
  typedef int _g4_t_v254;
  typedef int _g4_t_v255;
  typedef double _g4_t_v256;
  typedef int _g4_t_v257;
  typedef int _g4_t_v258;
  typedef int _g4_t_v259;
  typedef int _g4_t_v260;
  typedef int _g4_t_v261;
  typedef int _g4_t_v262;
  typedef int _g4_t_v263;
  typedef float _g4_t_v264;
  typedef float _g4_t_v265;
  typedef float _g4_t_v266;
  typedef int _g4_t_v267;
  typedef float _g4_t_v268;
  typedef float _g4_t_v269;
  typedef float _g4_t_v270;
  typedef int _g4_t_v271;
  typedef float _g4_t_v272;
  typedef float _g4_t_v273;
  typedef int _g4_t_v274;
  typedef void (*_g4_t_v275)(uint32_t, uint32_t, uint32_t);
  typedef int _g4_t_v276;
  typedef float _g4_t_v277;
  typedef unsigned int _g4_t_v278;
  typedef float _g4_t_v279;
  typedef float _g4_t_v280;
  typedef double _g4_t_v281;
  typedef char _g4_t_v282;
  typedef int _g4_t_v283;
  typedef int _g4_t_v284;
  typedef char _g4_t_v285;
  typedef float _g4_t_v286;
  typedef unsigned int _g4_t_v287;
  typedef float _g4_t_v288;
  typedef float _g4_t_v289;
  typedef float _g4_t_v290;
  typedef int _g4_t_v291;
  typedef float _g4_t_v292;
  typedef float _g4_t_v293;
  typedef float _g4_t_v294;
  typedef float _g4_t_v295;
  typedef float _g4_t_v296;
  typedef float _g4_t_v297;
  typedef float _g4_t_v298;
  typedef int _g4_t_v299;
  typedef float _g4_t_v300;
  typedef float _g4_t_v301;
  typedef float _g4_t_v302;
  typedef float _g4_t_v303;
  typedef float _g4_t_v304;
  typedef float _g4_t_v305;
  typedef float *_g4_t_v306;
  typedef float _g4_t_v307;
  typedef float _g4_t_v308;
  typedef float _g4_t_v309;
  typedef unsigned int _g4_t_v310;
  typedef uint8_t *_g4_t_v311;
  typedef float _g4_t_v312;
  typedef float _g4_t_v313;
  typedef int _g4_t_v314;
  typedef float _g4_t_v315;
  typedef float _g4_t_v316;
  typedef float _g4_t_v317;
  typedef float _g4_t_v318;
  typedef unsigned int _g4_t_v319;
  typedef float _g4_t_v320;
  typedef float _g4_t_v321;
  typedef float _g4_t_v322;
  typedef float _g4_t_v323;
  typedef float _g4_t_v324;
  typedef float _g4_t_v325[4];
  typedef float _g4_t_v326;
  typedef float _g4_t_v327;
  typedef float _g4_t_v328;
  typedef float _g4_t_v329;
  typedef float _g4_t_v330;
  typedef float _g4_t_v331;
  typedef float _g4_t_v332;
  typedef float _g4_t_v333[3];
  typedef uint32_t _g4_t_v334[3];
  typedef uint32_t _g4_t_v335[3];
  typedef float _g4_t_v336[3];
  typedef uint32_t _g4_t_v337[3];
  typedef float _g4_t_v338[3];
  typedef uint32_t _g4_t_v339[3];
  typedef float _g4_t_v340[3];
  typedef uint32_t _g4_t_v341[3];
  typedef float _g4_t_v342[3];
  typedef uint32_t _g4_t_v343[3];
  typedef uint8_t _g4_t_v344[12];
  typedef float _g4_t_v345[3];
  typedef float _g4_t_v346[3];
  typedef float _g4_t_v347;
  typedef float _g4_t_v348;
  typedef float _g4_t_v349;
  typedef float _g4_t_v350;
  typedef float _g4_t_v351[20];
  typedef float _g4_t_v352;
  typedef int _g4_t_v353;
  typedef float _g4_t_v354;
  typedef float _g4_t_v355;
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (4u + sizeof(_g4_t_v234)) > _g4_s0 ? (4u + sizeof(_g4_t_v234)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_x)) > _g4_s1 ? (8u + sizeof(_g4_t_x)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_xa)) > _g4_s2 ? (8u + sizeof(_g4_t_xa)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_xb)) > _g4_s3 ? (8u + sizeof(_g4_t_xb)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_xc)) > _g4_s4 ? (8u + sizeof(_g4_t_xc)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_x_4)) > _g4_s5 ? (12u + sizeof(_g4_t_x_4)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_lpdso_handle)) > _g4_s6 ? (16u + sizeof(_g4_t_lpdso_handle)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v241)) > _g4_s7 ? (20u + sizeof(_g4_t_v241)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v242)) > _g4_s8 ? (20u + sizeof(_g4_t_v242)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v243)) > _g4_s9 ? (24u + sizeof(_g4_t_v243)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v244)) > _g4_s10 ? (24u + sizeof(_g4_t_v244)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v245)) > _g4_s11 ? (28u + sizeof(_g4_t_v245)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v246)) > _g4_s12 ? (28u + sizeof(_g4_t_v246)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v247)) > _g4_s13 ? (32u + sizeof(_g4_t_v247)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v248)) > _g4_s14 ? (36u + sizeof(_g4_t_v248)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v249)) > _g4_s15 ? (40u + sizeof(_g4_t_v249)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v250)) > _g4_s16 ? (44u + sizeof(_g4_t_v250)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v251)) > _g4_s17 ? (48u + sizeof(_g4_t_v251)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v252)) > _g4_s18 ? (52u + sizeof(_g4_t_v252)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v253)) > _g4_s19 ? (52u + sizeof(_g4_t_v253)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v254)) > _g4_s20 ? (56u + sizeof(_g4_t_v254)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v255)) > _g4_s21 ? (60u + sizeof(_g4_t_v255)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v256)) > _g4_s22 ? (64u + sizeof(_g4_t_v256)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v257)) > _g4_s23 ? (64u + sizeof(_g4_t_v257)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v258)) > _g4_s24 ? (68u + sizeof(_g4_t_v258)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v259)) > _g4_s25 ? (72u + sizeof(_g4_t_v259)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v260)) > _g4_s26 ? (76u + sizeof(_g4_t_v260)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v261)) > _g4_s27 ? (80u + sizeof(_g4_t_v261)) : _g4_s27,
    _g4_s29 = (84u + sizeof(_g4_t_v262)) > _g4_s28 ? (84u + sizeof(_g4_t_v262)) : _g4_s28,
    _g4_s30 = (88u + sizeof(_g4_t_v263)) > _g4_s29 ? (88u + sizeof(_g4_t_v263)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v264)) > _g4_s30 ? (92u + sizeof(_g4_t_v264)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v265)) > _g4_s31 ? (96u + sizeof(_g4_t_v265)) : _g4_s31,
    _g4_s33 = (96u + sizeof(_g4_t_v266)) > _g4_s32 ? (96u + sizeof(_g4_t_v266)) : _g4_s32,
    _g4_s34 = (100u + sizeof(_g4_t_v267)) > _g4_s33 ? (100u + sizeof(_g4_t_v267)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v268)) > _g4_s34 ? (104u + sizeof(_g4_t_v268)) : _g4_s34,
    _g4_s36 = (108u + sizeof(_g4_t_v269)) > _g4_s35 ? (108u + sizeof(_g4_t_v269)) : _g4_s35,
    _g4_s37 = (112u + sizeof(_g4_t_v270)) > _g4_s36 ? (112u + sizeof(_g4_t_v270)) : _g4_s36,
    _g4_s38 = (116u + sizeof(_g4_t_v271)) > _g4_s37 ? (116u + sizeof(_g4_t_v271)) : _g4_s37,
    _g4_s39 = (120u + sizeof(_g4_t_v272)) > _g4_s38 ? (120u + sizeof(_g4_t_v272)) : _g4_s38,
    _g4_s40 = (124u + sizeof(_g4_t_v273)) > _g4_s39 ? (124u + sizeof(_g4_t_v273)) : _g4_s39,
    _g4_s41 = (128u + sizeof(_g4_t_v274)) > _g4_s40 ? (128u + sizeof(_g4_t_v274)) : _g4_s40,
    _g4_s42 = (128u + sizeof(_g4_t_v275)) > _g4_s41 ? (128u + sizeof(_g4_t_v275)) : _g4_s41,
    _g4_s43 = (128u + sizeof(_g4_t_v276)) > _g4_s42 ? (128u + sizeof(_g4_t_v276)) : _g4_s42,
    _g4_s44 = (128u + sizeof(_g4_t_v277)) > _g4_s43 ? (128u + sizeof(_g4_t_v277)) : _g4_s43,
    _g4_s45 = (132u + sizeof(_g4_t_v278)) > _g4_s44 ? (132u + sizeof(_g4_t_v278)) : _g4_s44,
    _g4_s46 = (136u + sizeof(_g4_t_v279)) > _g4_s45 ? (136u + sizeof(_g4_t_v279)) : _g4_s45,
    _g4_s47 = (140u + sizeof(_g4_t_v280)) > _g4_s46 ? (140u + sizeof(_g4_t_v280)) : _g4_s46,
    _g4_s48 = (144u + sizeof(_g4_t_v281)) > _g4_s47 ? (144u + sizeof(_g4_t_v281)) : _g4_s47,
    _g4_s49 = (144u + sizeof(_g4_t_v282)) > _g4_s48 ? (144u + sizeof(_g4_t_v282)) : _g4_s48,
    _g4_s50 = (144u + sizeof(_g4_t_v283)) > _g4_s49 ? (144u + sizeof(_g4_t_v283)) : _g4_s49,
    _g4_s51 = (144u + sizeof(_g4_t_v284)) > _g4_s50 ? (144u + sizeof(_g4_t_v284)) : _g4_s50,
    _g4_s52 = (144u + sizeof(_g4_t_v285)) > _g4_s51 ? (144u + sizeof(_g4_t_v285)) : _g4_s51,
    _g4_s53 = (144u + sizeof(_g4_t_v286)) > _g4_s52 ? (144u + sizeof(_g4_t_v286)) : _g4_s52,
    _g4_s54 = (148u + sizeof(_g4_t_v287)) > _g4_s53 ? (148u + sizeof(_g4_t_v287)) : _g4_s53,
    _g4_s55 = (152u + sizeof(_g4_t_v288)) > _g4_s54 ? (152u + sizeof(_g4_t_v288)) : _g4_s54,
    _g4_s56 = (156u + sizeof(_g4_t_v289)) > _g4_s55 ? (156u + sizeof(_g4_t_v289)) : _g4_s55,
    _g4_s57 = (160u + sizeof(_g4_t_v290)) > _g4_s56 ? (160u + sizeof(_g4_t_v290)) : _g4_s56,
    _g4_s58 = (164u + sizeof(_g4_t_v291)) > _g4_s57 ? (164u + sizeof(_g4_t_v291)) : _g4_s57,
    _g4_s59 = (168u + sizeof(_g4_t_v292)) > _g4_s58 ? (168u + sizeof(_g4_t_v292)) : _g4_s58,
    _g4_s60 = (168u + sizeof(_g4_t_v293)) > _g4_s59 ? (168u + sizeof(_g4_t_v293)) : _g4_s59,
    _g4_s61 = (172u + sizeof(_g4_t_v294)) > _g4_s60 ? (172u + sizeof(_g4_t_v294)) : _g4_s60,
    _g4_s62 = (176u + sizeof(_g4_t_v295)) > _g4_s61 ? (176u + sizeof(_g4_t_v295)) : _g4_s61,
    _g4_s63 = (176u + sizeof(_g4_t_v296)) > _g4_s62 ? (176u + sizeof(_g4_t_v296)) : _g4_s62,
    _g4_s64 = (176u + sizeof(_g4_t_v297)) > _g4_s63 ? (176u + sizeof(_g4_t_v297)) : _g4_s63,
    _g4_s65 = (180u + sizeof(_g4_t_v298)) > _g4_s64 ? (180u + sizeof(_g4_t_v298)) : _g4_s64,
    _g4_s66 = (180u + sizeof(_g4_t_v299)) > _g4_s65 ? (180u + sizeof(_g4_t_v299)) : _g4_s65,
    _g4_s67 = (180u + sizeof(_g4_t_v300)) > _g4_s66 ? (180u + sizeof(_g4_t_v300)) : _g4_s66,
    _g4_s68 = (180u + sizeof(_g4_t_v301)) > _g4_s67 ? (180u + sizeof(_g4_t_v301)) : _g4_s67,
    _g4_s69 = (184u + sizeof(_g4_t_v302)) > _g4_s68 ? (184u + sizeof(_g4_t_v302)) : _g4_s68,
    _g4_s70 = (184u + sizeof(_g4_t_v303)) > _g4_s69 ? (184u + sizeof(_g4_t_v303)) : _g4_s69,
    _g4_s71 = (184u + sizeof(_g4_t_v304)) > _g4_s70 ? (184u + sizeof(_g4_t_v304)) : _g4_s70,
    _g4_s72 = (184u + sizeof(_g4_t_v305)) > _g4_s71 ? (184u + sizeof(_g4_t_v305)) : _g4_s71,
    _g4_s73 = (188u + sizeof(_g4_t_v306)) > _g4_s72 ? (188u + sizeof(_g4_t_v306)) : _g4_s72,
    _g4_s74 = (192u + sizeof(_g4_t_v307)) > _g4_s73 ? (192u + sizeof(_g4_t_v307)) : _g4_s73,
    _g4_s75 = (192u + sizeof(_g4_t_v308)) > _g4_s74 ? (192u + sizeof(_g4_t_v308)) : _g4_s74,
    _g4_s76 = (192u + sizeof(_g4_t_v309)) > _g4_s75 ? (192u + sizeof(_g4_t_v309)) : _g4_s75,
    _g4_s77 = (196u + sizeof(_g4_t_v310)) > _g4_s76 ? (196u + sizeof(_g4_t_v310)) : _g4_s76,
    _g4_s78 = (200u + sizeof(_g4_t_v311)) > _g4_s77 ? (200u + sizeof(_g4_t_v311)) : _g4_s77,
    _g4_s79 = (200u + sizeof(_g4_t_v312)) > _g4_s78 ? (200u + sizeof(_g4_t_v312)) : _g4_s78,
    _g4_s80 = (204u + sizeof(_g4_t_v313)) > _g4_s79 ? (204u + sizeof(_g4_t_v313)) : _g4_s79,
    _g4_s81 = (208u + sizeof(_g4_t_v314)) > _g4_s80 ? (208u + sizeof(_g4_t_v314)) : _g4_s80,
    _g4_s82 = (208u + sizeof(_g4_t_v315)) > _g4_s81 ? (208u + sizeof(_g4_t_v315)) : _g4_s81,
    _g4_s83 = (208u + sizeof(_g4_t_v316)) > _g4_s82 ? (208u + sizeof(_g4_t_v316)) : _g4_s82,
    _g4_s84 = (208u + sizeof(_g4_t_v317)) > _g4_s83 ? (208u + sizeof(_g4_t_v317)) : _g4_s83,
    _g4_s85 = (208u + sizeof(_g4_t_v318)) > _g4_s84 ? (208u + sizeof(_g4_t_v318)) : _g4_s84,
    _g4_s86 = (212u + sizeof(_g4_t_v319)) > _g4_s85 ? (212u + sizeof(_g4_t_v319)) : _g4_s85,
    _g4_s87 = (216u + sizeof(_g4_t_v320)) > _g4_s86 ? (216u + sizeof(_g4_t_v320)) : _g4_s86,
    _g4_s88 = (216u + sizeof(_g4_t_v321)) > _g4_s87 ? (216u + sizeof(_g4_t_v321)) : _g4_s87,
    _g4_s89 = (216u + sizeof(_g4_t_v322)) > _g4_s88 ? (216u + sizeof(_g4_t_v322)) : _g4_s88,
    _g4_s90 = (216u + sizeof(_g4_t_v323)) > _g4_s89 ? (216u + sizeof(_g4_t_v323)) : _g4_s89,
    _g4_s91 = (216u + sizeof(_g4_t_v324)) > _g4_s90 ? (216u + sizeof(_g4_t_v324)) : _g4_s90,
    _g4_s92 = (224u + sizeof(_g4_t_v325)) > _g4_s91 ? (224u + sizeof(_g4_t_v325)) : _g4_s91,
    _g4_s93 = (240u + sizeof(_g4_t_v326)) > _g4_s92 ? (240u + sizeof(_g4_t_v326)) : _g4_s92,
    _g4_s94 = (244u + sizeof(_g4_t_v327)) > _g4_s93 ? (244u + sizeof(_g4_t_v327)) : _g4_s93,
    _g4_s95 = (248u + sizeof(_g4_t_v328)) > _g4_s94 ? (248u + sizeof(_g4_t_v328)) : _g4_s94,
    _g4_s96 = (252u + sizeof(_g4_t_v329)) > _g4_s95 ? (252u + sizeof(_g4_t_v329)) : _g4_s95,
    _g4_s97 = (256u + sizeof(_g4_t_v330)) > _g4_s96 ? (256u + sizeof(_g4_t_v330)) : _g4_s96,
    _g4_s98 = (260u + sizeof(_g4_t_v331)) > _g4_s97 ? (260u + sizeof(_g4_t_v331)) : _g4_s97,
    _g4_s99 = (264u + sizeof(_g4_t_v332)) > _g4_s98 ? (264u + sizeof(_g4_t_v332)) : _g4_s98,
    _g4_s100 = (280u + sizeof(_g4_t_v333)) > _g4_s99 ? (280u + sizeof(_g4_t_v333)) : _g4_s99,
    _g4_s101 = (292u + sizeof(_g4_t_v334)) > _g4_s100 ? (292u + sizeof(_g4_t_v334)) : _g4_s100,
    _g4_s102 = (304u + sizeof(_g4_t_v335)) > _g4_s101 ? (304u + sizeof(_g4_t_v335)) : _g4_s101,
    _g4_s103 = (316u + sizeof(_g4_t_v336)) > _g4_s102 ? (316u + sizeof(_g4_t_v336)) : _g4_s102,
    _g4_s104 = (328u + sizeof(_g4_t_v337)) > _g4_s103 ? (328u + sizeof(_g4_t_v337)) : _g4_s103,
    _g4_s105 = (340u + sizeof(_g4_t_v338)) > _g4_s104 ? (340u + sizeof(_g4_t_v338)) : _g4_s104,
    _g4_s106 = (352u + sizeof(_g4_t_v339)) > _g4_s105 ? (352u + sizeof(_g4_t_v339)) : _g4_s105,
    _g4_s107 = (364u + sizeof(_g4_t_v340)) > _g4_s106 ? (364u + sizeof(_g4_t_v340)) : _g4_s106,
    _g4_s108 = (376u + sizeof(_g4_t_v341)) > _g4_s107 ? (376u + sizeof(_g4_t_v341)) : _g4_s107,
    _g4_s109 = (388u + sizeof(_g4_t_v342)) > _g4_s108 ? (388u + sizeof(_g4_t_v342)) : _g4_s108,
    _g4_s110 = (400u + sizeof(_g4_t_v343)) > _g4_s109 ? (400u + sizeof(_g4_t_v343)) : _g4_s109,
    _g4_s111 = (412u + sizeof(_g4_t_v344)) > _g4_s110 ? (412u + sizeof(_g4_t_v344)) : _g4_s110,
    _g4_s112 = (424u + sizeof(_g4_t_v345)) > _g4_s111 ? (424u + sizeof(_g4_t_v345)) : _g4_s111,
    _g4_s113 = (436u + sizeof(_g4_t_v346)) > _g4_s112 ? (436u + sizeof(_g4_t_v346)) : _g4_s112,
    _g4_s114 = (448u + sizeof(_g4_t_v347)) > _g4_s113 ? (448u + sizeof(_g4_t_v347)) : _g4_s113,
    _g4_s115 = (452u + sizeof(_g4_t_v348)) > _g4_s114 ? (452u + sizeof(_g4_t_v348)) : _g4_s114,
    _g4_s116 = (456u + sizeof(_g4_t_v349)) > _g4_s115 ? (456u + sizeof(_g4_t_v349)) : _g4_s115,
    _g4_s117 = (460u + sizeof(_g4_t_v350)) > _g4_s116 ? (460u + sizeof(_g4_t_v350)) : _g4_s116,
    _g4_s118 = (464u + sizeof(_g4_t_v351)) > _g4_s117 ? (464u + sizeof(_g4_t_v351)) : _g4_s117,
    _g4_s119 = (544u + sizeof(_g4_t_v352)) > _g4_s118 ? (544u + sizeof(_g4_t_v352)) : _g4_s118,
    _g4_s120 = (548u + sizeof(_g4_t_v353)) > _g4_s119 ? (548u + sizeof(_g4_t_v353)) : _g4_s119,
    _g4_s121 = (552u + sizeof(_g4_t_v354)) > _g4_s120 ? (552u + sizeof(_g4_t_v354)) : _g4_s120,
    _g4_s122 = (556u + sizeof(_g4_t_v355)) > _g4_s121 ? (556u + sizeof(_g4_t_v355)) : _g4_s121
  };
  alignas(16) uint8_t _g4_sf[_g4_s122];
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 4u);
  _g4_t_x &x = *reinterpret_cast<_g4_t_x *>(_g4_sf + 8u);
  _g4_t_xa &xa = *reinterpret_cast<_g4_t_xa *>(_g4_sf + 8u);
  _g4_t_xb &xb = *reinterpret_cast<_g4_t_xb *>(_g4_sf + 8u);
  _g4_t_xc &xc = *reinterpret_cast<_g4_t_xc *>(_g4_sf + 8u);
  _g4_t_x_4 &x_4 = *reinterpret_cast<_g4_t_x_4 *>(_g4_sf + 12u);
  _g4_t_lpdso_handle &lpdso_handle = *reinterpret_cast<_g4_t_lpdso_handle *>(_g4_sf + 16u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 20u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 20u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 24u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 24u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 28u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 28u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 32u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 36u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 40u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 44u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 48u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 52u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 52u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 56u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 60u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 64u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 64u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 68u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 72u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 76u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 80u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 84u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 88u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 92u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 96u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 96u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 100u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 104u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 108u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 112u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 116u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 120u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 124u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 128u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 128u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 128u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 128u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 132u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 136u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 140u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 144u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 144u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 144u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 144u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 144u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 144u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 148u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 152u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 156u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 160u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 164u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 168u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 168u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 172u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 176u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 176u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 176u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 180u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 180u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 180u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 180u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 184u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 184u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 184u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 184u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 188u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 192u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 192u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 192u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 196u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 200u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 200u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 204u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 208u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 208u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 208u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 208u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 208u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 212u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 216u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 216u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 216u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 216u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 216u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 224u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 240u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 244u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 248u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 252u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 256u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 260u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 264u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 280u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 292u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 304u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 316u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 328u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 340u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 352u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 364u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 376u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 388u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 400u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 412u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 424u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 436u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 448u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 452u);
  _g4_t_v349 &v349 = *reinterpret_cast<_g4_t_v349 *>(_g4_sf + 456u);
  _g4_t_v350 &v350 = *reinterpret_cast<_g4_t_v350 *>(_g4_sf + 460u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 464u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 544u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 548u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 552u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 556u);

  v228 = a3;
  v352 = a4;
  result = sub_973DD0(a3);
  if ( result != 0 && *(uint32_t *)(*(uint32_t *)(result + 408) - 12) != 0 )
  {
    result = *(uint32_t *)(result + 404);
    if ( result != 0 )
    {
      result = G4_VCALL<int>(result, 32);
      if ( (result & 2) != 0 )
      {
        v230 = v352;
        v231 = v228;
        v232 = v354;
        v233 = v355;
        v355 = retaddr;
        v354 = a1;
        v353 = a2;
        v352 = v233;
        v4 = v231;
        v351[19] = v232;
        LODWORD(v351[18]) = (uint32_t)(uintptr_t)(&a3);
        v307 = v230;
        v5 = sub_973DD0(v231);
        v6 = *(float *)(v4 + 328);
        v311 = (uint8_t *)v5;
        *(float *)(v4 + 332) = v6;
        v7 = v6 - v307;
        *(float *)(v4 + 328) = v7;
        if ( v7 < 0.0 )
        {
          *(uint32_t *)(v4 + 328) = 0;
          v7 = 0.0;
        }
        v8 = *(float *)(v4 + 340);
        if ( v8 != 0.0 )
        {
          *(float *)(v4 + 328) = v7 + v8;
          v9 = *(float *)(v4 + 344);
          if ( v9 >= 0.0 == v8 >= 0.0 )
          {
            *(float *)(v4 + 344) = v9 - v8;
          }
          else
          {
            *(uint32_t *)(v4 + 340) = 0;
            *(uint32_t *)(v4 + 344) = 0;
          }
        }
        v10 = *(float *)(v4 + 348);
        *(float *)(v4 + 352) = v10;
        v11 = v10 - v307;
        *(float *)(v4 + 348) = v11;
        if ( v11 < 0.0 )
        {
          *(uint32_t *)(v4 + 348) = 0;
          v11 = 0.0;
        }
        v12 = *(float *)(v4 + 360);
        if ( v12 != 0.0 )
        {
          *(float *)(v4 + 348) = v11 + v12;
          v13 = *(float *)(v4 + 364);
          if ( v13 >= 0.0 == v12 >= 0.0 )
          {
            *(float *)(v4 + 364) = v13 - v12;
          }
          else
          {
            *(uint32_t *)(v4 + 360) = 0;
            *(uint32_t *)(v4 + 364) = 0;
          }
        }
        sub_522F70(v4 + 156, 1000.0 * v307, 0, 0, 0);
        sub_522F70(v4 + 212, 1000.0 * v307, 0, 0, 0);
        v14 = *(uint32_t *)(v4 + 220);
        v15 = *(uint32_t *)(v4 + 212);
        *(uint32_t *)(v4 + 44) = *(uint32_t *)(v4 + 216);
        *(uint32_t *)(v4 + 40) = v15;
        *(uint32_t *)(v4 + 48) = v14;
        sub_522F70(v4 + 268, 1000.0 * v307, 0, 0, 0);
        *(uint32_t *)(v4 + 76) = *(uint32_t *)(v4 + 272);
        *(uint32_t *)(v4 + 72) = *(uint32_t *)(v4 + 268);
        if ( sub_973DD0(v4) != 0 )
        {
          v16 = sub_8F0680();
          if ( v16 == sub_973DD0(v4) && *(uint8_t *)(sub_8F0680() + 3202) == 0 )
          {
            v219 = *(uint32_t *)(v4 + 276);
            *(uint32_t *)(v4 + 84) = 0;
            *(uint32_t *)(v4 + 80) = v219;
          }
        }
        v17 = sub_973DD0(v4);
        if ( v17 != 0 && *(uint32_t *)(*(uint32_t *)(v17 + 408) - 12) != 0 )
        {
          v24 = *(void **)(v17 + 404);
          if ( v24 != nullptr )
          {
            lpdso_handle = v24;
            if ( ((*(int (**)(void))(*(uint32_t *)v24 + 32))() & 2) != 0 )
            {
              v25 = *(void **)(sub_973DD0(v4) + 4880);
              if ( v25 != nullptr )
              {
                lpdso_handle = v25;
                if ( (*(uint8_t (**)(void))(*(uint32_t *)v25 + 24))() != 0 )
                {
                  v241 = -1027080192;
                  lpdso_handle = (void *)v4;
                  (*(void (**)(void))(*(uint32_t *)v4 + 80))();
                }
              }
            }
          }
        }
        if ( *(float *)(v4 + 148) != 0.0 )
        {
          v332 = 1.0;
          v330 = 0.0;
          v331 = 0.0;
          if ( v311 == nullptr || (uint8_t)sub_9878E0((int)(uintptr_t)(v311)) != 0 )
          {
            sub_8E9360((int)(uintptr_t)(v342), (int)(uintptr_t)(v311), 0);
            v341[0] = *(uint32_t *)(v4 + 156);
            v341[1] = *(uint32_t *)(v4 + 160);
            v341[2] = *(uint32_t *)(v4 + 164);
            v347 = -v342[0];
            v348 = -v342[1];
            v248 = v351;
            v349 = -v342[2];
            v246 = &v330;
            v249 = 0;
            v247 = &v347;
            v20 = (float *)v341;
            v351[0] = (float)((float)-v342[2] * v331) - (float)((float)-v342[1] * v332);
            v351[1] = (float)(v332 * (float)-v342[0]) - (float)((float)-v342[2] * v330);
            v351[2] = (float)((float)-v342[1] * v330) - (float)((float)-v342[0] * v331);
          }
          else
          {
            v18 = sub_973DD0(v4);
            (*(void (**)(float *, int))(*(uint32_t *)v18 + 292))(v345, v18);
            v346[0] = -v345[0];
            v346[1] = -v345[1];
            v346[2] = -v345[2];
            v19 = sub_973DD0(v4);
            (*(void (**)(uint8_t *, int))(*(uint32_t *)v19 + 296))(v344, v19);
            v343[0] = *(uint32_t *)(v4 + 156);
            v343[1] = *(uint32_t *)(v4 + 160);
            v343[2] = *(uint32_t *)(v4 + 164);
            v247 = nullptr;
            v246 = v346;
            v244 = (float *)v344;
            v242 = &v330;
            v20 = (float *)v343;
          }
          sub_522460(v4 + 100, 1000.0 * v307, v20, v242, v244, v246);
        }
        v21 = *(uint32_t *)(v4 + 108);
        v22 = *(uint32_t *)(v4 + 100);
        *(uint32_t *)(v4 + 20) = *(uint32_t *)(v4 + 104);
        *(uint32_t *)(v4 + 16) = v22;
        *(uint32_t *)(v4 + 24) = v21;
        if ( sub_973DD0(v4) != 0 )
        {
          v23 = sub_973DD0(v4);
          result = G4_VCALL<int>(v23, 168);
          if ( result == 0
            || (result = *(uint32_t *)(G4_VCALL<int>(v23, 168) + 244) & 0x18) != 24 )
          {
            *(uint8_t *)(v4 + 372) = 1;
            return result;
          }
        }
        if ( *(uint8_t *)(v4 + 372) != 0 )
        {
          v26 = sub_973DD0(v4);
          sub_BFBEB0(v4, v26, 0, 1);
          *(uint8_t *)(v4 + 372) = 0;
        }
        result = sub_973DD0(v4);
        if ( result != 0 )
        {
          if ( *(uint8_t *)(v4 + 52) == 0 )
          {
            v160 = sub_973DD0(v4);
            if ( G4_VCALL<int>(v160, 168) == 0
              || (*(uint32_t *)((*(int (**)(int))(*(uint32_t *)v160 + 168))(v160) + 244) & 0x18) != 0x18 )
            {
              if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
              {
                v286 = COERCE_FLOAT(&unk_20D4E60);
                sub_9C9CC0((int)(uintptr_t)(&unk_20D4E60));
                _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
                __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
              }
              v161 = nullptr;
              if ( byte_20D4E64 == 0 )
                v161 = (float *)&unk_20D4E60;
              if ( v161[35] >= 0.25 )
              {
                v162 = sub_973DD0(v4);
                G4_VCALL<void>(v162, 112, 0);
              }
            }
          }
          memset(v351, 0, 0x40u);
          v27 = *(float *)(v4 + 72);
          v351[0] = 1.0;
          v28 = *(float *)(v4 + 76);
          v351[12] = v27;
          v29 = *(uint32_t *)v4;
          v351[13] = -v28;
          v351[5] = 1.0;
          v351[10] = 1.0;
          v351[15] = 1.0;
          v351[14] = ((long double (*)(int))*(uint32_t *)(v29 + 88))(v4);
          v314 = sub_973DD0(v4);
          if ( byte_20D4920 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4920) != 0 )
          {
            memset(&dword_20D4940, 0, 0x40u);
            dword_20D4940 = 1065353216;
            dword_20D4954 = 1065353216;
            dword_20D4968 = 1065353216;
            dword_20D497C = 1065353216;
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4920);
          }
          v30 = G4_VCALL<int>(v314, 168);
          v31 = (int *)(&dword_20D4940);
          if ( v30 != 0 )
          {
            v32 = G4_VCALL<int>(v314, 168);
            v31 = (int *)G4_VCALL<int>(v32, 72);
          }
          if ( *((float *)v31 + 10) < 0.0 )
            v351[14] = -v351[14];
          glitch::scene::ISceneNode::setRelativeTransformation(
            **(glitch::scene::ISceneNode::Self ***)(v4 + 92),
            (const glitch::core::CMatrix4<float> *)v351);
          v33 = sub_973DD0(v4);
          v34 = (glitch::scene::ISceneNode::Self *)G4_VCALL<int>(v33, 168);
          glitch::scene::ISceneNode::updateAbsolutePosition(v34, true);
          if ( v311 == nullptr
            || ((uint8_t)sub_987EE0(v311) == 0
             || *(float *)(v4 + 348) > 0.0
             || *(float *)(v4 + 328) > 0.0
             || v311[3904] != 0
             || v311[1064] != 0
             || v311[4879] == 0)
            && ((uint8_t)sub_9878E0((int)(uintptr_t)(v311)) == 0 || v311[3904] != 0 || *(float *)(v4 + 348) > 0.0) )
          {
            if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
            {
              v286 = COERCE_FLOAT(&dword_20D49A0);
              sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
              __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
            }
            v35 = nullptr;
            if ( byte_20D49A8 == 0 )
              v35 = (int *)(&dword_20D49A0);
            v36 = v35[10];
            v37 = *(uint32_t *)(v36 + 140);
            v38 = *(uint32_t *)(v36 + 144);
            if ( v38 > 3 || *(uint8_t *)(v37 + 32 * v38 + 1) == 0 )
            {
              if ( byte_20D32F8 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D32F8) != 0 )
              {
                v286 = COERCE_FLOAT(byte_20D3300);
                sub_A728F0((int)byte_20D3300);
                _cxa_guard_release((g4_cxa_guard_t *)&byte_20D32F8);
                __cxa_atexit((void (*)(void *))sub_545B10, byte_20D3300, &unk_20D1280);
              }
              if ( byte_20D3390 == 0 )
              {
                v294 = *(float *)(v4 + 348);
                v93 = (float *)(*(int (**)(uint32_t))(***(uint32_t ***)(v4 + 92) + 72))(**(uint32_t **)(v4 + 92));
                v94 = *((int *)v93 + 5);
                v95 = v93[6];
                v96 = v93[4];
                v327 = *(float *)&v94;
                v326 = v96;
                v328 = v95;
                if ( v311 != nullptr )
                {
                  if ( (uint8_t)sub_9878E0((int)(uintptr_t)(v311)) != 0 )
                  {
                    sub_8E9360((int)(uintptr_t)(v339), (int)(uintptr_t)(v311), 0);
                    v326 = *(float *)v339;
                    v327 = *(float *)&v339[1];
                    v328 = *(float *)&v339[2];
                  }
                  if ( *((uint32_t *)v311 + 574) != 0 && v311[2408] != 0 && !sub_988110(v311) )
                  {
                    v330 = 0.0;
                    v331 = 0.0;
                    v332 = 0.0;
                    v199 = *((uint32_t *)v311 + 574);
                    if ( v199 != 0 )
                    {
                      x_4 = *((uint32_t *)v311 + 574);
                      (*(void (**)(float *))(*(uint32_t *)v199 + 52))(v338);
                      v200 = *(float **)(v4 + 92);
                      v330 = v338[0];
                      v331 = v338[1];
                      v332 = v338[2] + 120.0;
                      v201 = *(int **)v200;
                      if ( *(uint32_t *)v200 != 0 )
                      {
                        v202 = *v201;
                        v234 = *(int **)v200;
                        if ( (*((uint8_t *)v201 + 245) & 8) != 0 )
                        {
                          v226 = (float *)(*(int (**)(int *))(v202 + 64))(v234);
                          v206 = (float)(v226[3] + *v226) * 0.5;
                          v205 = (float)(v226[4] + v226[1]) * 0.5;
                          v204 = (float)(v226[5] + v226[2]) * 0.5;
                        }
                        else
                        {
                          v203 = (float *)(*(int (**)(int *))(v202 + 72))(v234);
                          v204 = v203[14];
                          v205 = v203[13];
                          v206 = v203[12];
                        }
                        v295 = v206 + v200[1];
                        v292 = v205 + v200[2];
                        v322 = v204 + v200[3];
                      }
                      else
                      {
                        v322 = 0.0;
                        v292 = 0.0;
                        v295 = 0.0;
                      }
                      (*(void (**)(uint32_t *, uint32_t))(**((uint32_t **)v311 + 574) + 52))(
                        v337,
                        *((uint32_t *)v311 + 574));
                      v303 = *(float *)v337;
                      v299 = v337[1];
                      v207 = *(float *)&v337[2];
                    }
                    else
                    {
                      v223 = G4_VCALL<int>(v311, 168);
                      v224 = (float *)G4_VCALL<int>(v223, 72);
                      sub_BFA920(&v347, v224);
                      v305 = v348;
                      v301 = *((float *)v311 + 900);
                      v225 = *((float *)v311 + 901);
                      v297 = *((float *)v311 + 902);
                      x_4 = (int)(uintptr_t)(v311);
                      v324 = v349;
                      v257 = LODWORD(v225);
                      v270 = v347;
                      v266 = (float)(v301 * v349) - (float)(v297 * v347);
                      v286 = (float)(v347 * v225) - (float)(v348 * v301);
                      *(float *)&v261 = v350 + v350;
                      v277 = (float)(v348 * v297) - (float)(v349 * v225);
                      (*(void (**)(float *))(*(uint32_t *)v311 + 52))(v336);
                      v331 = (float)((float)((float)((float)((float)(v324 * v277) - (float)(v286 * v270))
                                                   + (float)((float)(v324 * v277) - (float)(v286 * v270)))
                                           + (float)((float)(v266 * *(float *)&v261) + v225))
                                   * 100.0)
                           + v336[1];
                      v332 = (float)((float)((float)((float)(v286 * *(float *)&v261) + v297)
                                           + (float)((float)((float)(v270 * v266) - (float)(v305 * v277))
                                                   + (float)((float)(v270 * v266) - (float)(v305 * v277))))
                                   * 100.0)
                           + v336[2];
                      v330 = (float)((float)((float)((float)((float)(v286 * v305) - (float)(v266 * v324))
                                                   + (float)((float)(v286 * v305) - (float)(v266 * v324)))
                                           + (float)((float)(*(float *)&v261 * v277) + v301))
                                   * 100.0)
                           + v336[0];
                      sub_BFEE60(v335);
                      v303 = v330;
                      v295 = *(float *)v335;
                      v292 = *(float *)&v335[1];
                      v322 = *(float *)&v335[2];
                      v299 = LODWORD(v331);
                      v207 = v332;
                    }
                    LOBYTE(v286) = v294 <= 0.0;
                    sub_808700(
                      v325,
                      &v330,
                      1,
                      x_4,
                      (int)(uintptr_t)(lpdso_handle),
                      v241,
                      v243,
                      v245,
                      (int)(uintptr_t)(v247),
                      (int)(uintptr_t)(v248),
                      v249,
                      v250,
                      v251,
                      v253,
                      v254,
                      v255,
                      v257,
                      v258,
                      v259,
                      v260,
                      v261,
                      v262,
                      v263,
                      v264,
                      v207,
                      v267,
                      v268,
                      v269,
                      v270,
                      v271,
                      v272,
                      v273,
                      LODWORD(v277),
                      v278,
                      v279,
                      v280,
                      LODWORD(v286),
                      v287,
                      v288,
                      v289,
                      v290,
                      v291,
                      v292,
                      v294,
                      v295,
                      v299,
                      v303,
                      COERCE_FLOAT(&v347),
                      LODWORD(v307),
                      v310,
                      *(float *)&v311,
                      v313,
                      0x42C80000u,
                      v319,
                      v322,
                      COERCE_FLOAT(v351),
                      v325[0],
                      SLODWORD(v325[1]),
                      v325[2],
                      v325[3],
                      v326,
                      SLODWORD(v327),
                      v328,
                      v329);
                    v97 = v285;
                    if ( v311[3904] != 0 || v311[1064] != 0 )
                    {
                      if ( *((uint32_t *)v311 + 574) != 0
                        && (v325[0] > 0.85f || v325[0] < -0.85f || v325[1] > 0.85f || v325[1] < -0.85f) )
                      {
                        *(uint32_t *)(v4 + 336) = 1049414861;
                        *(uint32_t *)(v4 + 332) = 1049414861;
                        *(uint32_t *)(v4 + 328) = 1049414861;
                        *(uint32_t *)(v4 + 340) = 0;
                        *(uint32_t *)(v4 + 344) = 0;
                        v98 = 0.275f;
                      }
                      else
                      {
                        v98 = *(float *)(v4 + 328);
                        if ( v98 <= 0.0 && *(float *)(v4 + 348) <= 0.0 )
                          goto LABEL_163;
                      }
                      *(uint32_t *)(v4 + 356) = 1086324736;
                      *(uint32_t *)(v4 + 352) = 1086324736;
                      *(uint32_t *)(v4 + 348) = 1086324736;
                      *(uint32_t *)(v4 + 360) = 0;
                      *(uint32_t *)(v4 + 364) = 0;
                      v97 = 0;
                    }
                    else
                    {
                      v98 = *(float *)(v4 + 328);
                    }
LABEL_163:
                    v208 = 0.0;
                    v209 = 0.0;
                    if ( fabs(v265 - v323) >= 200.0 )
                    {
                      v209 = v323 - v265;
                      v208 = v209 * v209;
                    }
                    if ( (float)((float)((float)((float)(v293 - v300) * (float)(v293 - v300))
                                       + (float)((float)(v296 - v304) * (float)(v296 - v304)))
                               + v208) <= v318 )
                    {
                      *(uint32_t *)(v4 + 356) = 0;
                      *(uint32_t *)(v4 + 352) = 0;
                      *(uint32_t *)(v4 + 348) = 0;
                      *(uint32_t *)(v4 + 360) = 0;
                      *(uint32_t *)(v4 + 364) = 0;
                      v97 = 1;
                    }
                    else
                    {
                      v326 = v296 - v304;
                      v327 = v293 - v300;
                      v328 = v209;
                    }
LABEL_86:
                    v99 = *(float **)(v4 + 92);
                    v100 = 0.0;
                    v101 = 0.0;
                    v102 = 1000.0 * v98;
                    v103 = 0.0;
                    v104 = *(int **)v99;
                    if ( *(uint32_t *)v99 != 0 )
                    {
                      v105 = *v104;
                      xc = *(int **)v99;
                      v282 = v97;
                      if ( (*((uint8_t *)v104 + 245) & 8) != 0 )
                      {
                        v221 = (float *)(*(int (**)(int *))(v105 + 64))(xc);
                        v97 = v282;
                        v109 = (float)(v221[3] + *v221) * 0.5;
                        v108 = (float)(v221[4] + v221[1]) * 0.5;
                        v107 = (float)(v221[5] + v221[2]) * 0.5;
                      }
                      else
                      {
                        v106 = (float *)(*(int (**)(int *))(v105 + 72))(xc);
                        v107 = v106[14];
                        v108 = v106[13];
                        v109 = v106[12];
                        v97 = v282;
                      }
                      v103 = v109 + v99[1];
                      v101 = v108 + v99[2];
                      v100 = v107 + v99[3];
                    }
                    if ( v102 == 0.0 )
                    {
                      *(float *)(v4 + 156) = v103;
                      v112 = v100;
                      *(float *)(v4 + 160) = v101;
                      v110 = v103;
                      *(float *)(v4 + 164) = v100;
                      v111 = v101;
                      v316 = v101;
                    }
                    else
                    {
                      v110 = *(float *)(v4 + 156);
                      v111 = *(float *)(v4 + 160);
                      v316 = v111;
                      v112 = *(float *)(v4 + 164);
                    }
                    *(uint32_t *)(v4 + 192) = 0;
                    *(uint32_t *)(v4 + 196) = 0;
                    *(float *)(v4 + 168) = v110;
                    *(uint32_t *)(v4 + 200) = 0;
                    *(float *)(v4 + 172) = v111;
                    *(float *)(v4 + 176) = v112;
                    *(float *)(v4 + 180) = v103;
                    *(float *)(v4 + 184) = v101;
                    *(float *)(v4 + 188) = v100;
                    *(float *)(v4 + 204) = v102;
                    *(float *)(v4 + 208) = v102;
                    if ( v311 != nullptr && v97 != 0 )
                    {
                      if ( (uint8_t)sub_9878E0((int)(uintptr_t)(v311)) == 0 || *(uint8_t *)(v4 + 401) != 0 )
                      {
                        v317 = *(float *)(v4 + 156);
                        v321 = *(float *)(v4 + 160);
                        v182 = (float *)G4_VCALL<int>(v4, 12);
                        v183 = *v182;
                        v184 = v182[1];
                        v328 = 0.0;
                        v185 = v183 - v317;
                        v186 = v184 - v321;
                        v326 = v185;
                        v327 = v186;
                        v187 = (float)(v186 * v186) + (float)(v185 * v185);
                        if ( v187 != 0.0 )
                        {
                          v188 = 1.0 / fsqrt(v187);
                          v189 = (float)((float)((float)(v187 * v188) * v188) + -3.0) * (float)(v188 * -0.5);
                          v326 = v185 * v189;
                          v327 = v189 * v186;
                        }
                        (*(void (**)(float *, uint8_t *))(*(uint32_t *)v311 + 296))(v333, v311);
                        v190 = -v333[1];
                        v191 = -v333[0];
                        v192 = (float)(v190 * v190) + (float)(v191 * v191);
                        if ( v192 != 0.0 )
                        {
                          v193 = 1.0 / fsqrt(v192);
                          v194 = (float)((float)((float)(v192 * v193) * v193) + -3.0) * (float)(v193 * -0.5);
                          v191 = v191 * v194;
                          v190 = v190 * v194;
                        }
                        v252 = ((long double (*)(uint8_t *))*(uint32_t *)(*(uint32_t *)v311 + 216))(v311);
                        if ( v252 <= 15.0 || sub_9873F0((int)(uintptr_t)(v311), 13) || sub_9873F0((int)(uintptr_t)(v311), 12) )
                        {
                          v163 = v326;
                          v164 = v327;
                          v165 = v328;
                        }
                        else
                        {
                          v227 = fminf(fmaxf(v307 * 0.099999994f, 0.0), 1.0);
                          v326 = (float)((float)(v191 - v326) * v227) + v326;
                          v327 = (float)((float)(v190 - v327) * v227) + v327;
                          v328 = v328 - (float)(v227 * v328);
                          sub_5ED3D0(&v326);
                          v163 = v326;
                          v164 = v327;
                          v165 = v328;
                        }
                      }
                      else
                      {
                        sub_8E9360((int)(uintptr_t)(v334), (int)(uintptr_t)(v311), 0);
                        v163 = *(float *)v334;
                        v164 = *(float *)&v334[1];
                        v165 = *(float *)&v334[2];
                        v326 = *(float *)v334;
                        v327 = *(float *)&v334[1];
                        v328 = *(float *)&v334[2];
                      }
                      v166 = *(float *)(v4 + 68);
                      v167 = *(uint32_t *)v4;
                      v168 = (int)*(float *)(v4 + 148);
                      v169 = sqrt((double)*(float *)(v4 + 64) * *(float *)(v4 + 64) - (double)v166 * v166);
                      v170 = (float)(v164 * v169) + *(float *)(v4 + 160);
                      v171 = (float)(*(float *)(v4 + 164) + v166) + (float)(v169 * v165);
                      v347 = (float)(v163 * v169) + *(float *)(v4 + 156);
                      v348 = v170;
                      v349 = v171;
                      v172 = 1000.0 * *(float *)(v4 + 328);
                      if ( (int)v172 >= v168 )
                        v168 = (int)v172;
                      (*(void (**)(int, float *, int))(v167 + 92))(v4, v306, v168);
                      v173 = *(float *)(v4 + 16) - *(float *)(v4 + 156);
                      v174 = *(float *)(v4 + 20) - *(float *)(v4 + 160);
                      v175 = *(float *)(v4 + 164);
                      v176 = *(float *)(v4 + 24) - v175;
                      *(float *)(v4 + 376) = v173;
                      *(float *)(v4 + 380) = v174;
                      *(float *)(v4 + 384) = v176;
                      v177 = (float)((float)(v174 * v174) + (float)(v173 * v173)) + (float)(v176 * v176);
                      v178 = fsqrt(v177);
                      *(float *)(v4 + 388) = v178;
                      if ( v177 != 0.0 )
                      {
                        *(float *)(v4 + 376) = v173 * (float)(1.0 / v178);
                        *(float *)(v4 + 380) = v174 * (float)(1.0 / v178);
                        *(float *)(v4 + 384) = v176 * (float)(1.0 / v178);
                      }
                      v179 = *(uint32_t *)v4;
                      *(float *)(v4 + 368) = v175;
                      *(uint8_t *)(v4 + 324) = 0;
                      v284 = dword_20DA1B0;
                      v180 = (const char *)(*(int (**)(int))(v179 + 72))(v4);
                      v309 = v307 * *(float *)(v284 + 264 * sub_BFB870(v180, v181) + 56);
                    }
                    else
                    {
                      v113 = v326;
                      *(float *)&v114 = v327;
                      v115 = v328;
                      v116 = (float)(*(float *)&v114 * *(float *)&v114) + (float)(v113 * v113);
                      v117 = v116 + (float)(v115 * v115);
                      if ( v117 != 0.0 )
                      {
                        v118 = fsqrt(v117);
                        v119 = (float)((float)((float)(v117 * (float)(1.0 / v118)) * (float)(1.0 / v118)) + -3.0)
                             * (float)((float)(1.0 / v118) * -0.5);
                        v113 = v326 * v119;
                        *(float *)&v114 = v327 * v119;
                        v115 = v328 * v119;
                        v326 = v113;
                        v327 = *(float *)&v114;
                        v116 = (float)(v113 * v113) + (float)(*(float *)&v114 * *(float *)&v114);
                      }
                      v120 = *(float *)(v4 + 64);
                      v328 = 0.0;
                      v121 = (float)((float)(v115 * v120) + v112) - v112;
                      *(float *)(v4 + 68) = v121;
                      v122 = sqrt((double)v120 * v120 - (double)v121 * v121);
                      if ( v116 != 0.0 )
                      {
                        v123 = 1.0 / fsqrt(v116);
                        v124 = (float)((float)((float)(v116 * v123) * v123) + -3.0) * (float)(v123 * -0.5);
                        v113 = v113 * v124;
                        *(float *)&v114 = *(float *)&v114 * v124;
                        v326 = v113;
                        v327 = *(float *)&v114;
                      }
                      v125 = v113 * v122;
                      v126 = 0;
                      v127 = v122 * *(float *)&v114;
                      v128 = *(float *)(v4 + 328);
                      v129 = v125 + v110;
                      v302 = v121 + v112;
                      v130 = v127 + v316;
                      v349 = v121 + v112;
                      v298 = v128;
                      v347 = v129;
                      v348 = v130;
                      if ( v128 > 0.0 )
                      {
                        v131 = *(float *)(v4 + 100) - v110;
                        v132 = *(float *)(v4 + 104) - v316;
                        v320 = *(float *)(v4 + 108) - v112;
                        v133 = (float)((float)(v132 * v132) + (float)(v131 * v131)) + (float)(v320 * v320);
                        if ( v133 != 0.0 )
                        {
                          v134 = 1.0 / fsqrt(v133);
                          v135 = (float)((float)((float)(v133 * v134) * v134) + -3.0) * (float)(v134 * -0.5);
                          v131 = v131 * v135;
                          v132 = v132 * v135;
                          v320 = v135 * v320;
                        }
                        v136 = v129 - v110;
                        v137 = v130 - v316;
                        v138 = v302 - v112;
                        v139 = (float)((float)(v136 * v136) + (float)(v137 * v137)) + (float)(v138 * v138);
                        if ( v139 != 0.0 )
                        {
                          v140 = 1.0 / fsqrt(v139);
                          v141 = (float)((float)((float)(v139 * v140) * v140) + -3.0) * (float)(v140 * -0.5);
                          v136 = v136 * v141;
                          v137 = v137 * v141;
                          v138 = v138 * v141;
                        }
                        v142 = acos(
                                 fminf(
                                   fmaxf(
                                     (float)((float)(v137 * v132) + (float)(v136 * v131)) + (float)(v138 * v320),
                                     -1.0),
                                   1.0));
                        *(uint32_t *)(v4 + 340) = 0;
                        v143 = v142;
                        *(uint32_t *)(v4 + 344) = 0;
                        v144 = fmaxf(v143 * 175.07043f, 1000.0 * v298);
                        v126 = (int)v144;
                        *(float *)(v4 + 336) = 0.001f * v144;
                        *(float *)(v4 + 332) = 0.001f * v144;
                        *(float *)(v4 + 328) = 0.001f * v144;
                      }
                      G4_VCALL<void>(v4, 92, v306, v126);
                      v145 = *(float *)(v4 + 16) - *(float *)(v4 + 156);
                      v146 = *(float *)(v4 + 20) - *(float *)(v4 + 160);
                      v147 = *(float *)(v4 + 164);
                      v148 = *(float *)(v4 + 24) - v147;
                      *(float *)(v4 + 376) = v145;
                      *(float *)(v4 + 380) = v146;
                      *(float *)(v4 + 384) = v148;
                      v149 = (float)((float)(v146 * v146) + (float)(v145 * v145)) + (float)(v148 * v148);
                      v150 = fsqrt(v149);
                      *(float *)(v4 + 388) = v150;
                      if ( v149 != 0.0 )
                      {
                        *(float *)(v4 + 376) = v145 * (float)(1.0 / v150);
                        *(float *)(v4 + 380) = v146 * (float)(1.0 / v150);
                        *(float *)(v4 + 384) = v148 * (float)(1.0 / v150);
                      }
                      v151 = *(uint32_t *)v4;
                      *(float *)(v4 + 368) = v147;
                      *(uint8_t *)(v4 + 324) = 0;
                      v283 = dword_20DA1B0;
                      v152 = (const char *)(*(int (**)(int))(v151 + 72))(v4);
                      v309 = v307 * *(float *)(v283 + 264 * sub_BFB870(v152, v153) + 56);
                      if ( v311 == nullptr )
                        goto LABEL_110;
                    }
                    if ( v311[2336] != 0 && (v311[1872] & 1) != 0 )
                    {
                      v215 = dword_20DA1B0;
                      v216 = (const char *)G4_VCALL<int>(v4, 72);
                      v218 = sub_BFB870(v216, v217);
                      v158 = *(float *)(v4 + 64);
                      result = 264 * v218;
                      v159 = *(float *)(v215 + result + 52);
                      if ( v159 <= v158 )
                        return result;
                      goto LABEL_177;
                    }
                    if ( sub_9874C0((int)(uintptr_t)(v311)) && (v311[1872] & 1) != 0 )
                    {
                      v195 = dword_20DA1B0;
                      v196 = (const char *)G4_VCALL<int>(v4, 72);
                      v198 = sub_BFB870(v196, v197);
                      v158 = *(float *)(v4 + 64);
                      result = 264 * v198;
                      v159 = *(float *)(v195 + result + 48);
                      if ( v159 <= v158 )
                      {
                        if ( v158 <= v159 )
                          return result;
LABEL_111:
                        *(float *)(v4 + 64) = fmaxf(v158 - v309, v159);
                        return result;
                      }
LABEL_177:
                      *(float *)(v4 + 64) = fminf(v158 + v309, v159);
                      return result;
                    }
LABEL_110:
                    v154 = dword_20DA1B0;
                    v155 = (const char *)G4_VCALL<int>(v4, 72);
                    v157 = sub_BFB870(v155, v156);
                    v158 = *(float *)(v4 + 64);
                    result = 264 * v157;
                    v159 = *(float *)(v154 + result + 44);
                    if ( v158 <= v159 )
                      return result;
                    goto LABEL_111;
                  }
                }
                *(uint32_t *)(v4 + 356) = 0;
                *(uint32_t *)(v4 + 352) = 0;
                *(uint32_t *)(v4 + 348) = 0;
                *(uint32_t *)(v4 + 360) = 0;
                *(uint32_t *)(v4 + 364) = 0;
                v97 = 1;
                v306 = &v347;
                v98 = *(float *)(v4 + 328);
                goto LABEL_86;
              }
            }
          }
          v39 = *(float **)(v4 + 92);
          v40 = 0.0;
          v41 = *(int **)v39;
          if ( *(uint32_t *)v39 != 0 )
          {
            v42 = *v41;
            x = *(int **)v39;
            if ( (*((uint8_t *)v41 + 245) & 8) != 0 )
            {
              v220 = (*(int (**)(int *))(v42 + 64))(x);
              v43 = (float)(*(float *)(v220 + 20) + *(float *)(v220 + 8)) * 0.5;
            }
            else
            {
              v43 = *(float *)((*(int (**)(int *))(v42 + 72))(x) + 56);
            }
            v40 = v43 + v39[3];
          }
          v44 = *(float *)(v4 + 380);
          v45 = *(float *)(v4 + 376);
          *(float *)(v4 + 368) = v40;
          v312 = v44;
          v308 = v45;
          v46 = (float)(v44 * v44) + (float)(v45 * v45);
          if ( v46 != 0.0 )
          {
            v47 = fsqrt(v46);
            v48 = v45;
            v49 = (float)((float)((float)(v46 * (float)(1.0 / v47)) * (float)(1.0 / v47)) + -3.0)
                * (float)((float)(1.0 / v47) * -0.5);
            v50 = v45 * v49;
            v51 = v312 * v49;
            v52 = v312;
            v312 = v51;
            v308 = v50;
            v46 = (float)(v52 * v51) + (float)(v48 * v50);
          }
          v53 = acos(fminf(fmaxf(v46, -1.0), 1.0)) * 57.2957763671875;
          if ( *(float *)(v4 + 384) < 0.0 )
            v53 = -v53;
          v315 = v53 - *(float *)(v4 + 8);
          v274 = dword_20DA1B0;
          v54 = (const char *)G4_VCALL<int>(v4, 72);
          if ( v315 <= *(float *)(v274 + 264 * sub_BFB870(v54, v55) + 36) )
          {
            v276 = dword_20DA1B0;
            v210 = (const char *)G4_VCALL<int>(v4, 72);
            if ( v315 < *(float *)(v276 + 264 * sub_BFB870(v210, v211) + 32) )
            {
              v212 = dword_20DA1B0;
              v213 = (const char *)G4_VCALL<int>(v4, 72);
              v315 = *(float *)(v212 + 264 * sub_BFB870(v213, v214) + 32);
            }
          }
          else
          {
            v56 = dword_20DA1B0;
            v57 = (const char *)G4_VCALL<int>(v4, 72);
            v315 = *(float *)(v56 + 264 * sub_BFB870(v57, v58) + 36);
          }
          v59 = acos(fminf(fmaxf(-1.0, v312), 1.0)) * 57.2957763671875;
          if ( v308 > 0.0 )
            v59 = -v59;
          v281 = v315 * 0.017453292519943295;
          v60 = cos(v281);
          v61 = sin(v281);
          v256 = (float)(v59 - *(float *)(v4 + 4)) * 0.017453292519943295;
          v62 = cos(v256);
          v63 = sin(v256);
          v64 = v62 * v60;
          v65 = -(float)(v63 * v60);
          v66 = (float)((float)(v64 * v64) + (float)(v61 * v61)) + (float)(v65 * v65);
          if ( v66 != 0.0 )
          {
            v67 = fsqrt(v66);
            v68 = (float)((float)((float)(v66 * (float)(1.0 / v67)) * (float)(1.0 / v67)) + -3.0)
                * (float)((float)(1.0 / v67) * -0.5);
            v65 = v65 * v68;
            v64 = v64 * v68;
            v61 = v61 * v68;
          }
          v69 = *(float *)(v4 + 388);
          v70 = *(uint32_t *)v4;
          *(float *)(v4 + 384) = v61;
          v71 = *(float **)(v4 + 92);
          v72 = v61 * v69;
          *(uint32_t *)(v4 + 4) = 0;
          *(float *)(v4 + 376) = v65;
          *(uint32_t *)(v4 + 8) = 0;
          *(float *)(v4 + 380) = v64;
          v73 = v65 * v69;
          *(float *)(v4 + 68) = v72;
          v74 = *(void (**)(uint32_t, uint32_t, uint32_t))(v70 + 92);
          v75 = *(int **)v71;
          v76 = v64 * v69;
          v77 = 0.0;
          v78 = 0.0;
          v79 = 0.0;
          if ( *(uint32_t *)v71 != 0 )
          {
            v80 = *v75;
            xa = *(int **)v71;
            v275 = v74;
            if ( (*((uint8_t *)v75 + 245) & 8) != 0 )
            {
              v222 = (float *)(*(int (**)(int *))(v80 + 64))(xa);
              v74 = v275;
              v84 = (float)(v222[3] + *v222) * 0.5;
              v83 = (float)(v222[4] + v222[1]) * 0.5;
              v82 = (float)(v222[5] + v222[2]) * 0.5;
            }
            else
            {
              v81 = (float *)(*(int (**)(int *))(v80 + 72))(xa);
              v82 = v81[14];
              v74 = v275;
              v83 = v81[13];
              v84 = v81[12];
            }
            v79 = v84 + v71[1];
            v78 = v83 + v71[2];
            v77 = v82 + v71[3];
          }
          v340[0] = v73 + v79;
          v340[1] = v76 + v78;
          v340[2] = v72 + v77;
          v74(v4, (uint32_t)(uintptr_t)(v340), 0);
          v85 = *(uint32_t *)(v4 + 92);
          v86 = 0.0;
          v87 = 0.0;
          v88 = 0.0;
          result = *(uint32_t *)v85;
          if ( *(uint32_t *)v85 != 0 )
          {
            v89 = *(uint32_t *)result;
            xb = *(uint32_t *)v85;
            if ( (*(uint8_t *)(result + 245) & 8) != 0 )
            {
              result = (*(int (**)(int))(v89 + 64))(xb);
              v92 = (float)(*(float *)(result + 12) + *(float *)result) * 0.5;
              v91 = (float)(*(float *)(result + 16) + *(float *)(result + 4)) * 0.5;
              v90 = (float)(*(float *)(result + 20) + *(float *)(result + 8)) * 0.5;
            }
            else
            {
              result = (*(int (**)(int))(v89 + 72))(xb);
              v90 = *(float *)(result + 56);
              v91 = *(float *)(result + 52);
              v92 = *(float *)(result + 48);
            }
            v88 = v92 + *(float *)(v85 + 4);
            v87 = v91 + *(float *)(v85 + 8);
            v86 = v90 + *(float *)(v85 + 12);
          }
          *(float *)(v4 + 156) = v88;
          *(uint32_t *)(v4 + 204) = 0;
          *(float *)(v4 + 160) = v87;
          *(uint32_t *)(v4 + 208) = 0;
          *(float *)(v4 + 164) = v86;
          *(uint32_t *)(v4 + 192) = 0;
          *(float *)(v4 + 168) = v88;
          *(uint32_t *)(v4 + 196) = 0;
          *(float *)(v4 + 172) = v87;
          *(uint32_t *)(v4 + 200) = 0;
          *(float *)(v4 + 176) = v86;
          *(uint32_t *)(v4 + 356) = 0;
          *(float *)(v4 + 180) = v88;
          *(uint32_t *)(v4 + 352) = 0;
          *(float *)(v4 + 184) = v87;
          *(uint32_t *)(v4 + 348) = 0;
          *(float *)(v4 + 188) = v86;
          *(uint32_t *)(v4 + 360) = 0;
          *(uint32_t *)(v4 + 364) = 0;
          *(uint8_t *)(v4 + 401) = 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_BFEE60  (binary VA: 0xbfee60)
// Original: sub_BFEE60
// ----------------------------------------------------------------------------
float * sub_BFEE60(float *a1, float *a2)
{
  int *v2;
  int v3;
  float *v4;
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float *v9;
  int *v10;

  v2 = *(int **)a2;
  if ( *(uint32_t *)a2 != 0 )
  {
    v3 = *v2;
    v10 = *(int **)a2;
    if ( (*((uint8_t *)v2 + 245) & 8) != 0 )
    {
      v9 = (float *)(*(int (**)(int *))(v3 + 64))(v10);
      v7 = (float)(v9[3] + *v9) * 0.5;
      v6 = (float)(v9[4] + v9[1]) * 0.5;
      v5 = (float)(v9[5] + v9[2]) * 0.5;
    }
    else
    {
      v4 = (float *)(*(int (**)(int *))(v3 + 72))(v10);
      v5 = v4[14];
      v6 = v4[13];
      v7 = v4[12];
    }
    *a1 = v7;
    a1[1] = v6;
    a1[2] = v5;
    *a1 = v7 + a2[1];
    a1[1] = v6 + a2[2];
    a1[2] = v5 + a2[3];
  }
  else
  {
    *a1 = 0.0;
    a1[1] = 0.0;
    a1[2] = 0.0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_BFEF40  (binary VA: 0xbfef40)
// Original: sub_BFEF40
// ----------------------------------------------------------------------------
int sub_BFEF40(int *a1, int a2)
{
  g4_std::string::assign_str(a1 + 24, a2);
  return sub_BFBB80(a1, a1[98]);
}


