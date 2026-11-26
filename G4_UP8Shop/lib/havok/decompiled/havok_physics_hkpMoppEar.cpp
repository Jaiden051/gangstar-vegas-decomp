#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppEar.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppEarlyExitObbVirtualMachine::queryOBBOnTree  (binary VA: 0x17f78a0)
// Original: hkpMoppEarlyExitObbVirtualMachine::queryOBBOnTree
// ----------------------------------------------------------------------------
int hkpMoppEarlyExitObbVirtualMachine::queryOBBOnTree(int a1, uint32_t *a2, uint8_t *a3)
{
  uint8_t v4;
  int v5;
  char v6;
  int result;
  int v8;
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
  int v19;
  int v20;
  bool v21; // cc
  int v22;
  int v23;
  int v24;
  uint8_t *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  uint8_t *v31;
  typedef uint8_t _g4_t_v32[27];
  typedef uint8_t _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t _g4_t_v39[15];
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v32)) > _g4_s0 ? (0u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v33)) > _g4_s1 ? (27u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v34)) > _g4_s2 ? (28u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v35)) > _g4_s3 ? (32u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v36)) > _g4_s4 ? (36u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v37)) > _g4_s5 ? (40u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v38)) > _g4_s6 ? (44u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v39)) > _g4_s7 ? (48u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v40)) > _g4_s8 ? (108u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v41)) > _g4_s9 ? (112u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (116u + sizeof(_g4_t_v42)) > _g4_s10 ? (116u + sizeof(_g4_t_v42)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 27u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 108u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 112u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 116u);

  v35 = v39;
  v4 = *a3;
  v5 = a3[1];
  LOBYTE(v38) = a3[2];
  LOBYTE(v37) = a3[3];
  v6 = *(uint8_t *)(a1 + 64);
  result = v4;
  while ( v6 == 0 )
  {
    while ( 2 )
    {
      while ( v4 > 0x6Bu )
LABEL_12:
        __builtin_debugtrap();
LABEL_4:
      switch ( result )
      {
        case 0:
          return result;
        case 1:
        case 2:
        case 3:
        case 4:
          v28 = a2[16] + result;
          v29 = (a2[12] + (uint8_t)v5) << v4;
          v38 = (uint8_t)v38;
          v38 = a2[13] + (uint8_t)v38;
          v38 <<= v4;
          v39[13] = v38;
          v39[12] = v29;
          v30 = (a2[14] + (uint8_t)(uintptr_t)v37) << v4;
          v41 = v28;
          v39[14] = v30;
          v39[4] = (*(int *)(a1 + 32) >> (16 - v28)) - v29;
          v39[5] = (*(int *)(a1 + 36) >> (16 - v28)) - v38;
          v39[6] = (*(int *)(a1 + 40) >> (16 - v28)) - v30;
          v39[0] = (*(int *)(a1 + 16) >> (16 - v28)) + 1 - v29;
          v39[1] = (*(int *)(a1 + 20) >> (16 - v28)) + 1 - v38;
          v39[2] = (*(int *)(a1 + 24) >> (16 - v28)) + 1 - v30;
          v39[8] = (*(int *)(a1 + 48) >> (16 - v28)) - v29;
          v39[9] = (*(int *)(a1 + 52) >> (16 - v28)) - v38;
          v39[10] = (*(int *)(a1 + 56) >> (16 - v28)) - v30;
          v39[11] = (*(int *)(a1 + 60) >> (16 - v28)) + 1;
          v42 = a2[17];
          v40 = a2[15];
          a2 = v35;
          v4 = a3[4];
          v5 = a3[5];
          LOBYTE(v38) = a3[6];
          LOBYTE(v37) = a3[7];
          a3 += 4;
          result = v4;
          continue;
        case 5:
          v15 = &a3[(uint8_t)v5 + 2];
          goto LABEL_55;
        case 6:
          v15 = &a3[256 * (uint8_t)v5 + 3 + (uint8_t)v38];
          goto LABEL_55;
        case 7:
          v15 = &a3[0x10000 * (uint8_t)v5 + 4 + 256 * (uint8_t)v38 + (uint8_t)(uintptr_t)v37];
          goto LABEL_55;
        case 8:
          v15 = &a3[0x1000000 * v5 + 5 + 0x10000 * (uint8_t)v38 + 256 * (uint8_t)(uintptr_t)v37 + a3[4]];
          goto LABEL_55;
        case 9:
          if ( a2 != v35 )
            std::memcpy(v35, a2, 72);
          v40 += (uint8_t)v5;
          v5 = (uint8_t)(uintptr_t)v37;
          a2 = v35;
          v4 = v38;
          LOBYTE(v37) = a3[5];
          LOBYTE(v38) = a3[4];
          a3 += 2;
          result = v4;
          continue;
        case 10:
          v27 = ((uint8_t)v5 << 8) + (uint8_t)v38;
          if ( a2 != v35 )
            std::memcpy(v35, a2, 72);
          v40 += v27;
          v4 = (uint8_t)(uintptr_t)v37;
          a2 = v35;
          v5 = a3[4];
          LOBYTE(v38) = a3[5];
          LOBYTE(v37) = a3[6];
          a3 += 3;
          result = v4;
          continue;
        case 11:
          v26 = a3[4] + ((uint8_t)v38 << 16) + (v5 << 24) + ((uint8_t)(uintptr_t)v37 << 8);
          if ( a2 != v35 )
            std::memcpy(v35, a2, 72);
          v40 = v26;
          a2 = v35;
          v4 = a3[5];
          v5 = a3[6];
          LOBYTE(v38) = a3[7];
          LOBYTE(v37) = a3[8];
          a3 += 5;
          result = v4;
          continue;
        case 12:
        case 13:
        case 14:
        case 15:
        case 29:
        case 30:
        case 31:
        case 44:
        case 45:
        case 46:
        case 47:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
          goto LABEL_12;
        case 16:
        case 17:
        case 18:
          v23 = result + 1073741808;
          v24 = a2[v23 + 4];
          v36 = (int)(uintptr_t)(a3 + 4);
          if ( (uint8_t)v38 >= (int)a2[v23] )
            goto LABEL_60;
          a3 = (uint8_t *)((uint8_t)(uintptr_t)v37 + v36);
          v15 = a3;
          if ( (uint8_t)v5 <= v24 )
            goto LABEL_30;
          v25 = (uint8_t *)v36;
          goto LABEL_62;
        case 19:
          v34 = 2 * (uint8_t)v5;
          v18 = 2 * (uint8_t)v38;
          v19 = a2[10] + a2[9];
          goto LABEL_35;
        case 20:
          v34 = 2 * (uint8_t)v5;
          v18 = 2 * (uint8_t)v38;
          v22 = 255 - a2[10];
          goto LABEL_37;
        case 21:
          v34 = 2 * (uint8_t)v5;
          v18 = 2 * (uint8_t)v38;
          v19 = a2[10] + a2[8];
          goto LABEL_35;
        case 22:
          v34 = 2 * (uint8_t)v5;
          v18 = 2 * (uint8_t)v38;
          v19 = a2[8] + 255 - a2[10];
          goto LABEL_35;
        case 23:
          v34 = 2 * (uint8_t)v5;
          v18 = 2 * (uint8_t)v38;
          v22 = a2[8];
LABEL_37:
          v19 = a2[9] + v22;
          goto LABEL_35;
        case 24:
          v34 = 2 * (uint8_t)v5;
          v18 = 2 * (uint8_t)v38;
          v19 = a2[8] + 255 - a2[9];
LABEL_35:
          v20 = ((int)a2[11] >> 1) + a2[11] + 1;
          goto LABEL_28;
        case 25:
          v20 = 4 * a2[11];
          v34 = 3 * (uint8_t)v5;
          v18 = 3 * (uint8_t)v38;
          v19 = a2[10] + a2[9] + a2[8];
          goto LABEL_28;
        case 26:
          v20 = 4 * a2[11];
          v34 = 3 * (uint8_t)v5;
          v18 = 3 * (uint8_t)v38;
          v19 = a2[9] + a2[8] - a2[10] + 255;
          goto LABEL_28;
        case 27:
          v20 = 4 * a2[11];
          v34 = 3 * (uint8_t)v5;
          v18 = 3 * (uint8_t)v38;
          v19 = a2[10] + a2[8] + 255 - a2[9];
          goto LABEL_28;
        case 28:
          v34 = 3 * (uint8_t)v5;
          v18 = 3 * (uint8_t)v38;
          v19 = a2[8] + 255 - a2[9] + 255 - a2[10];
          v20 = 4 * a2[11];
LABEL_28:
          v36 = (int)(uintptr_t)(a3 + 4);
          if ( v18 >= v19 + v20 )
          {
LABEL_60:
            v4 = a3[4];
            v5 = a3[5];
            LOBYTE(v38) = a3[6];
            LOBYTE(v37) = a3[7];
            a3 = (uint8_t *)v36;
            result = v4;
            continue;
          }
          v21 = v19 < v34 + v20;
          a3 = (uint8_t *)((uint8_t)(uintptr_t)v37 + v36);
          v15 = a3;
          if ( v21 )
          {
            v25 = (uint8_t *)v36;
            goto LABEL_62;
          }
          goto LABEL_30;
        case 32:
        case 33:
        case 34:
          v16 = result + 1073741792;
          if ( (uint8_t)v5 >= (int)a2[v16] )
          {
            v4 = (uint8_t)(uintptr_t)v37;
            v5 = a3[4];
            LOBYTE(v38) = a3[5];
            v31 = a3;
            a3 += 3;
            LOBYTE(v37) = v31[6];
            result = v4;
          }
          else
          {
            v17 = &a3[(uint8_t)v38 + 3];
            a3 = v17;
            if ( (uint8_t)v5 >= (int)a2[v16 + 4] )
            {
              v25 = &v17[-(uint8_t)v38];
              goto LABEL_62;
            }
            v4 = *v17;
            LOBYTE(v38) = v17[2];
            v5 = v17[1];
            LOBYTE(v37) = v17[3];
            result = v4;
          }
          continue;
        case 35:
        case 36:
        case 37:
          v12 = result + 1073741789;
          v34 = a2[v12 + 4];
          v36 = a3[4] + ((uint8_t)(uintptr_t)v37 << 8);
          v13 = a3[5];
          v33 = a3[6];
          v37 = a3 + 7;
          if ( (uint8_t)v38 >= (int)a2[v12] )
          {
            v15 = &v37[v36];
LABEL_55:
            a3 = v15;
LABEL_30:
            v4 = *v15;
            v5 = v15[1];
            LOBYTE(v38) = v15[2];
            LOBYTE(v37) = a3[3];
            result = v4;
            continue;
          }
          v14 = (v13 << 8) + v33;
          a3 = &v37[v14];
          if ( (uint8_t)v5 <= v34 )
          {
            v15 = &v37[v14];
            goto LABEL_30;
          }
          v25 = &v37[v36];
LABEL_62:
          hkpMoppEarlyExitObbVirtualMachine::queryOBBOnTree(a1, a2, v25);
          v4 = *a3;
          v5 = a3[1];
          LOBYTE(v38) = a3[2];
          LOBYTE(v37) = a3[3];
          v6 = *(uint8_t *)(a1 + 64);
          result = v4;
          break;
        case 38:
        case 39:
        case 40:
          result += 1073741786;
          if ( a2[result + 4] >= (int)(uint8_t)v38 || a2[result] < (int)(uint8_t)v5 )
            return result;
          v4 = (uint8_t)(uintptr_t)v37;
          v5 = a3[4];
          LOBYTE(v38) = a3[5];
          LOBYTE(v37) = a3[6];
          a3 += 3;
          result = v4;
          continue;
        case 41:
        case 42:
        case 43:
          v11 = 4 * result - 164;
          result = (a3[5] << 8) + (a3[4] << 16) + a3[6];
          if ( *(uint32_t *)(a1 + v11 + 32) > result )
            return result;
          result = (uint8_t)(uintptr_t)v37 + ((uint8_t)v5 << 16) + ((uint8_t)v38 << 8);
          if ( *(uint32_t *)(a1 + v11 + 16) < result )
            return result;
          v4 = a3[7];
          v5 = a3[8];
          LOBYTE(v38) = a3[9];
          LOBYTE(v37) = a3[10];
          a3 += 7;
          result = v4;
          continue;
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
          result = a1;
          *(uint8_t *)(a1 + 64) = 1;
          return result;
        case 96:
        case 97:
        case 98:
        case 99:
          a3 += 2;
          *(uint32_t *)&v32[4 * result - 268] = (uint8_t)v5;
          goto LABEL_9;
        case 100:
        case 101:
        case 102:
        case 103:
          a3 += 3;
          *(uint32_t *)&v32[4 * result - 284] = (uint8_t)v38 + ((uint8_t)v5 << 8);
          goto LABEL_9;
        case 104:
        case 105:
        case 106:
        case 107:
          v9 = ((uint8_t)v38 << 16) + (v5 << 24) + ((uint8_t)(uintptr_t)v37 << 8);
          v10 = a3;
          a3 += 5;
          *(uint32_t *)&v32[4 * result - 300] = v10[4] + v9;
LABEL_9:
          v8 = v42;
          if ( a2 != v35 )
            std::memcpy(v35, a2, 72);
          v42 = v8;
          a2 = v35;
          v4 = *a3;
          v5 = a3[1];
          LOBYTE(v38) = a3[2];
          LOBYTE(v37) = a3[3];
          result = v4;
          if ( v4 > 0x6Bu )
            goto LABEL_12;
          goto LABEL_4;
        default:
          abort();
      }
      break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppEarlyExitObbVirtualMachine::generateQueryFromNode  (binary VA: 0x17f8160)
// Original: hkpMoppEarlyExitObbVirtualMachine::generateQueryFromNode
// ----------------------------------------------------------------------------
int hkpMoppEarlyExitObbVirtualMachine::generateQueryFromNode(int a1, float *a2, int a3, float *a4, uint32_t *a5)
{
  float v5; // xmm4_4
  __m128 v6;
  float v7; // xmm7_4
  __m128 v8;
  __m128i v9;
  float *v10;
  float v11; // xmm0_4
  float v12; // xmm1_4
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  unsigned int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  __m128i v51;
  __m128i v52;
  int v53; // xmm3_4
  __m128i v54;
  float v55; // xmm3_4
  float v56; // xmm2_4
  int v57;
  unsigned int v58;
  int v59;
  int v60;
  int v61;
  unsigned int v62;
  int v63;
  int result;
  unsigned int v65;
  int v66;
  float v67;
  signed int v68;
  float v69;
  float v70;
  int v71;
  float v72;
  int v73;
  unsigned int v74;
  float v75;
  int v76;
  unsigned int v77;
  float v78;
  int v79;
  int v80;
  int v81;
  unsigned int v82;
  int v83;

  v5 = a2[1];
g4_m128_raw(v6) = *((unsigned int *)a2 + 2);
  v69 = *a4;
  v7 = (float)((float)(fabs(*(float *)a3 * *a2) + fabs(*(float *)(a3 + 16) * v5))
             + fabs(*(float *)(a3 + 32) *g4_m128_lane<float>(v6, 0)))
     + *a4;
g4_m128_raw(v8) = *(unsigned int *)(a3 + 36);
g4_m128_lane<float>(v8, 0) =g4_m128_lane<float>(v8, 0) *g4_m128_lane<float>(v6, 0);
g4_m128_lane<float>(v6, 0) =g4_m128_lane<float>(v6, 0) * *(float *)(a3 + 40);
  v78 = v7;
g4_m128_raw(v17) = (g4_int128_t)_mm_and_ps(v8, g4_m128_u32(0x7FFFFFFFu));
g4_m128_raw(v18) = (g4_int128_t)_mm_and_ps(v6, g4_m128_u32(0x7FFFFFFFu));
g4_m128_raw(v15) = *(unsigned int *)(a3 + 48);
g4_m128_raw(v9) = *(unsigned int *)(a3 + 56);
g4_m128_raw(v14) = *(unsigned int *)(a3 + 52);
  v10 = *(float **)(a1 + 68);
  v11 = v10[7];
  *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)(fabs(*(float *)(a3 + 4) * *a2) + fabs(*(float *)(a3 + 20) * v5))
                                  + *(float *)g4_m128_ptr<int32_t>(v17))
                          + *a4;
  v75 = v10[4];
  *(float *)g4_m128_ptr<int32_t>(v18) = (float)((float)(fabs(*a2 * *(float *)(a3 + 8)) + fabs(v5 * *(float *)(a3 + 24)))
                                  + *(float *)g4_m128_ptr<int32_t>(v18))
                          + *a4;
  v12 = v10[6];
  v67 = *(float *)g4_m128_ptr<int32_t>(v14);
  v72 = v10[5];
  v70 = *(float *)g4_m128_ptr<int32_t>(v15);
  v16 = v9;
  *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)g4_m128_ptr<int32_t>(v9) - *(float *)g4_m128_ptr<int32_t>(v18);
  *(float *)g4_m128_ptr<int32_t>(v18) = *(float *)g4_m128_ptr<int32_t>(v18) + *(float *)g4_m128_ptr<int32_t>(v9);
g4_m128_raw(v13) =g4_m128_lane<uint32_t>(v15, 0);
  *(float *)g4_m128_ptr<int32_t>(v13) = *(float *)g4_m128_ptr<int32_t>(v15) - v78;
  *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)g4_m128_ptr<int32_t>(v16) - v12;
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) - *(float *)g4_m128_ptr<int32_t>(v17)) - v72) * v11;
  *(float *)g4_m128_ptr<int32_t>(v18) = *(float *)g4_m128_ptr<int32_t>(v18) - v12;
  v19 = v13;
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v15) + v78) - v75) * v11;
  *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)g4_m128_ptr<int32_t>(v16) * v11;
  *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) + v67) - v72) * v11;
  *(float *)g4_m128_ptr<int32_t>(v18) = *(float *)g4_m128_ptr<int32_t>(v18) * v11;
  *(float *)g4_m128_ptr<int32_t>(v19) = (float)((float)(v70 - v78) - v75) * v11;
  v20 = _mm_cvtsi128_si32(v19);
  v21 = (v20 & 0x7F800000u) >> 23;
  v79 = v21 - 127;
  if ( v21 < 0x7F )
  {
    v66 = -1;
    v68 = -1;
  }
  else
  {
    v22 = _mm_cvtsi128_si32(v19) & 0x7FFFFF | 0x800000;
    v23 = (_mm_cvtsi128_si32(v19) >> 31) | 1;
    if ( v79 > 23 )
      v24 = v22 << (v21 + 106);
    else
      v24 = v22 >> (23 - v79);
    v68 = (v20 & 0x80000000 | (v23 * v24) & 0x7FFFFFFF) - 1;
    v66 = v68 >> 16;
  }
  v25 = _mm_cvtsi128_si32(v14);
  v26 = (v25 & 0x7F800000u) >> 23;
  v80 = v26 - 127;
  if ( v26 < 0x7F )
  {
    v65 = 0xFFFFFFFF;
  }
  else
  {
    v27 = _mm_cvtsi128_si32(v14) & 0x7FFFFF | 0x800000;
    v28 = (_mm_cvtsi128_si32(v14) >> 31) | 1;
    if ( v80 <= 23 )
      v29 = v27 >> (23 - v80);
    else
      v29 = v27 << (v26 + 106);
    v65 = (v25 & 0x80000000 | (v28 * v29) & 0x7FFFFFFF) - 1;
  }
  v30 = _mm_cvtsi128_si32(v16);
  v31 = (v30 & 0x7F800000u) >> 23;
  v81 = v31 - 127;
  if ( v31 < 0x7F )
  {
    v82 = 0xFFFFFFFF;
  }
  else
  {
    v32 = _mm_cvtsi128_si32(v16) & 0x7FFFFF | 0x800000;
    v33 = (_mm_cvtsi128_si32(v16) >> 31) | 1;
    if ( v81 <= 23 )
      v34 = v32 >> (23 - v81);
    else
      v34 = v32 << (v31 + 106);
    v82 = (v30 & 0x80000000 | (v33 * v34) & 0x7FFFFFFF) - 1;
  }
  v35 = _mm_cvtsi128_si32(v15);
  v36 = (v35 & 0x7F800000u) >> 23;
  v76 = v36 - 127;
  if ( v36 < 0x7F )
  {
    v77 = 1;
  }
  else
  {
    v37 = _mm_cvtsi128_si32(v15) & 0x7FFFFF | 0x800000;
    v38 = (_mm_cvtsi128_si32(v15) >> 31) | 1;
    if ( v76 <= 23 )
      v39 = v37 >> (23 - v76);
    else
      v39 = v37 << (v36 + 106);
    v77 = (v35 & 0x80000000 | (v38 * v39) & 0x7FFFFFFF) + 1;
  }
  v40 = _mm_cvtsi128_si32(v17);
  v41 = (v40 & 0x7F800000u) >> 23;
  v73 = v41 - 127;
  if ( v41 < 0x7F )
  {
    v74 = 1;
  }
  else
  {
    v42 = _mm_cvtsi128_si32(v17) & 0x7FFFFF | 0x800000;
    v43 = (_mm_cvtsi128_si32(v17) >> 31) | 1;
    if ( v73 <= 23 )
      v44 = v42 >> (23 - v73);
    else
      v44 = v42 << (v41 + 106);
    v74 = (v40 & 0x80000000 | (v43 * v44) & 0x7FFFFFFF) + 1;
  }
  v45 = _mm_cvtsi128_si32(v18);
  v46 = (v45 & 0x7F800000u) >> 23;
  v71 = v46 - 127;
  if ( v46 < 0x7F )
  {
    v50 = 1;
  }
  else
  {
    v47 = _mm_cvtsi128_si32(v18) & 0x7FFFFF | 0x800000;
    v48 = (_mm_cvtsi128_si32(v18) >> 31) | 1;
    if ( v71 <= 23 )
      v49 = v47 >> (23 - v71);
    else
      v49 = v47 << (v46 + 106);
    v50 = (v45 & 0x80000000 | (v49 * v48) & 0x7FFFFFFF) + 1;
  }
  *(uint32_t *)(a1 + 20) = v74;
  *(uint32_t *)(a1 + 16) = v77;
  *(uint32_t *)(a1 + 40) = v82;
  *(uint32_t *)(a1 + 36) = v65;
  *(uint32_t *)(a1 + 24) = v50;
  *(uint32_t *)(a1 + 32) = v68;
  *(uint32_t *)(a1 + 48) = (int)(v68 + v77) >> 1;
  *(uint32_t *)(a1 + 52) = (int)(v74 + v65) >> 1;
  *(uint32_t *)(a1 + 56) = (int)(v82 + v50) >> 1;
g4_m128_raw(v52) = *(unsigned int *)a2;
g4_m128_raw(v51) = 0;
  *(float *)g4_m128_ptr<int32_t>(v52) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v52) * *(float *)g4_m128_ptr<int32_t>(v52)) + (float)(a2[1] * a2[1]))
                          + (float)(a2[2] * a2[2]);
  if ( *(float *)g4_m128_ptr<int32_t>(v52) > 0.0 )
  {
    v53 = ((_mm_cvtsi128_si32(v52) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v52) >> 1));
g4_m128_raw(v54) = 0x3FC00000u;
    v55 = (float)(*(float *)&v53 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v52)) * *(float *)&v53)
                * (float)(*(float *)&v53 * *(float *)&v53));
    v56 = (float)(v55 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v52)) * v55) * (float)(v55 * v55));
    *(float *)g4_m128_ptr<int32_t>(v54) = 1.5 * v56;
    v51 = v54;
    *(float *)g4_m128_ptr<int32_t>(v51) = (float)((float)(1.5 * v56)
                                    - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v52)) * v56) * (float)(v56 * v56)))
                            * *(float *)g4_m128_ptr<int32_t>(v52);
  }
  *(float *)g4_m128_ptr<int32_t>(v51) = (float)(*(float *)g4_m128_ptr<int32_t>(v51) + v69) * v11;
  v57 = _mm_cvtsi128_si32(v51);
  v58 = (v57 & 0x7F800000u) >> 23;
  v83 = v58 - 127;
  if ( v58 < 0x7F )
  {
    v62 = 1;
  }
  else
  {
    v59 = _mm_cvtsi128_si32(v51) & 0x7FFFFF | 0x800000;
    v60 = (_mm_cvtsi128_si32(v51) >> 31) | 1;
    if ( v83 <= 23 )
      v61 = v59 >> (23 - v83);
    else
      v61 = v59 << (v58 + 106);
    v62 = (v57 & 0x80000000 | (v61 * v60) & 0x7FFFFFFF) + 1;
  }
  *(uint32_t *)(a1 + 60) = v62;
  a5[4] = v66;
  *a5 = *(int16_t *)(a1 + 18) + 1;
  a5[5] = *(int16_t *)(a1 + 38);
  a5[1] = *(int16_t *)(a1 + 22) + 1;
  a5[6] = *(int16_t *)(a1 + 42);
  a5[2] = *(int16_t *)(a1 + 26) + 1;
  a5[8] = *(int16_t *)(a1 + 50);
  a5[9] = *(int16_t *)(a1 + 54);
  a5[10] = *(int16_t *)(a1 + 58);
  v63 = *(int16_t *)(a1 + 62);
  a5[12] = 0;
  result = v63 + 1;
  a5[13] = 0;
  a5[11] = result;
  a5[14] = 0;
  a5[15] = 0;
  a5[16] = 0;
  a5[17] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppEarlyExitObbVirtualMachine::queryObb  (binary VA: 0x17f8820)
// Original: hkpMoppEarlyExitObbVirtualMachine::queryObb
// ----------------------------------------------------------------------------
hkpMoppEarlyExitObbVirtualMachine::Self * hkpMoppEarlyExitObbVirtualMachine::queryObb(hkpMoppEarlyExitObbVirtualMachine::Self *self, const hkpMoppCode::Self *a2, const hkTransformf::Self *a3, const hkVector4f::Self *a4, float *a5, float *a6)
{
  typedef uint8_t *_g4_t_v7;
  typedef uint32_t _g4_t_v8[23];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  if ( byte_2136330 != 0 || (hkpCheckKeycode(), hkpProcessFlyingColors(&byte_2136330), byte_2136330 != 0) )
  {
    *((uint32_t *)a2 + 17) = (uint32_t)(uintptr_t)(a3);
    v7 = *((uint8_t **)a3 + 8);
    hkpMoppEarlyExitObbVirtualMachine::generateQueryFromNode((int)(uintptr_t)(a2), a5, (int)(uintptr_t)(a4), a6, v8);
    *((uint8_t *)a2 + 64) = 0;
    v8[17] = 0;
    hkpMoppEarlyExitObbVirtualMachine::queryOBBOnTree((int)(uintptr_t)(a2), v8, v7);
    *(uint8_t *)self = *((uint8_t *)a2 + 64);
    return self;
  }
  else
  {
    *(uint8_t *)self = 0;
    return self;
  }
}


