#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppObb.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppObbVirtualMachine::queryAabbOnTree  (binary VA: 0x17f93b0)
// Original: hkpMoppObbVirtualMachine::queryAabbOnTree
// ----------------------------------------------------------------------------
int hkpMoppObbVirtualMachine::queryAabbOnTree(int *a1, uint32_t *a2, uint8_t *a3, int a4)
{
  uint8_t v5;
  uint8_t v6;
  uint8_t *v7;
  int result;
  int v9;
  int v10;
  hkMemoryAllocator::Self *v11;
  int v12;
  int v13;
  uint8_t v14; // di
  int v15;
  int v16;
  uint8_t v17;
  int v18;
  int v19;
  int v20;
  bool v21; // cc
  uint8_t *v22;
  uint8_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint8_t v28;
  int v29;
  uint8_t v30;
  int v31;
  int v32;
  int v33;
  uint8_t *v34;
  typedef uint8_t _g4_t_v35[12];
  typedef int _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint8_t _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t _g4_t_v43[19];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v36)) > _g4_s1 ? (12u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v37)) > _g4_s2 ? (24u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v38)) > _g4_s3 ? (31u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v39)) > _g4_s4 ? (32u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v40)) > _g4_s5 ? (36u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v41)) > _g4_s6 ? (40u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v42)) > _g4_s7 ? (44u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v43)) > _g4_s8 ? (48u + sizeof(_g4_t_v43)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 31u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);

  if ( byte_2136340 != 0 || (hkpCheckKeycode(), result = hkpProcessFlyingColors(&byte_2136340), byte_2136340 != 0) )
  {
    v5 = *a3;
    v38 = a3[3];
    LOBYTE(v40) = a3[2];
    v6 = a3[1];
    v42 = v5;
    LOBYTE(v41) = v6;
    v37 = v43;
    v7 = a3;
    while ( 1 )
    {
      if ( v5 > 0x70u )
      {
LABEL_72:
        __builtin_debugtrap();
        v14 = v41;
        LOBYTE(v39) = v38;
      }
      else
      {
        result = (int)(uintptr_t)(dword_20B9FF4) + (uint32_t)jpt_17F9426[v42];
        switch ( v42 )
        {
          case 0:
            return result;
          case 1:
          case 2:
          case 3:
          case 4:
            v7 += 4;
            v39 = (uint8_t)v41;
            v39 = a2[8] + (uint8_t)v41;
            v39 <<= v5;
            v43[8] = v39;
            v41 = (uint8_t)v40;
            v15 = a2[9];
            v40 = v38;
            v40 = a2[10] + v38;
            v41 += v15;
            v40 <<= v5;
            v41 <<= v5;
            v43[10] = v40;
            v43[12] = a2[12] + v42;
            v43[9] = v41;
            v43[4] = (a1[8] >> (16 - LOBYTE(v43[12]))) - v39;
            v43[5] = (a1[9] >> (16 - LOBYTE(v43[12]))) - v41;
            v43[6] = (a1[10] >> (16 - LOBYTE(v43[12]))) - v40;
            v43[0] = 1 - v39 + (a1[4] >> (16 - LOBYTE(v43[12])));
            v43[1] = 1 - v41 + (a1[5] >> (16 - LOBYTE(v43[12])));
            v43[2] = 1 - v40 + (a1[6] >> (16 - LOBYTE(v43[12])));
            v43[13] = a2[13];
            v43[11] = a2[11];
            a2 = v37;
            v5 = *v7;
            LOBYTE(v40) = v7[2];
            v14 = v7[1];
            LOBYTE(v39) = v7[3];
            v42 = v5;
            break;
          case 5:
            v7 += (uint8_t)v41 + 2;
            goto LABEL_15;
          case 6:
            v7 += 256 * (uint8_t)v41 + (uint8_t)v40 + 3;
            goto LABEL_15;
          case 7:
            v7 += 0x10000 * (uint8_t)v41 + 256 * (uint8_t)v40 + v38 + 4;
            goto LABEL_15;
          case 8:
            v7 += 0x1000000 * v41 + 0x10000 * (uint8_t)v40 + 256 * v38 + v7[4] + 5;
            goto LABEL_15;
          case 9:
            if ( a2 != v37 )
              std::memcpy(v43, a2, 64);
            v43[11] += (uint8_t)v41;
            v7 += 2;
            a2 = v37;
            v5 = *v7;
            LOBYTE(v40) = v7[2];
            v14 = v7[1];
            LOBYTE(v39) = v7[3];
            v42 = v5;
            break;
          case 10:
            if ( a2 != v37 )
              std::memcpy(v43, a2, 64);
            v43[11] += (uint8_t)v40 + ((uint8_t)v41 << 8);
            v7 += 3;
            a2 = v37;
            v5 = *v7;
            LOBYTE(v40) = v7[2];
            v14 = v7[1];
            LOBYTE(v39) = v7[3];
            v42 = v5;
            break;
          case 11:
            v16 = v7[4] + ((uint8_t)v40 << 16) + (v41 << 24) + (v38 << 8);
            if ( a2 != v37 )
              std::memcpy(v43, a2, 64);
            v43[11] = v16;
            v7 += 5;
            a2 = v37;
            v5 = *v7;
            LOBYTE(v40) = v7[2];
            v14 = v7[1];
            LOBYTE(v39) = v7[3];
            v42 = v5;
            break;
          case 12:
            a4 = ((uint8_t)v40 | ((uint8_t)v41 << 8)) << 9;
            goto LABEL_14;
          case 13:
            v17 = v7[7];
            v7 += 5;
            v5 = *v7;
            LOBYTE(v40) = v17;
            v14 = v7[1];
            LOBYTE(v39) = v7[3];
            v42 = v5;
            break;
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
          case 108:
          case 109:
          case 110:
          case 111:
            goto LABEL_72;
          case 16:
          case 17:
          case 18:
            v18 = (uint8_t)v41;
            result = v42 + 1073741808;
            v42 = a2[v42 - 12];
            v41 = (int)(uintptr_t)(v7 + 4);
            if ( (uint8_t)v40 >= (int)a2[result] )
            {
              if ( v18 <= v42 )
                return result;
              v5 = v7[4];
              LOBYTE(v40) = v7[6];
              v14 = v7[5];
              LOBYTE(v39) = v7[7];
              v7 = (uint8_t *)v41;
              v42 = v5;
              break;
            }
            v7 = (uint8_t *)(v38 + v41);
            if ( v18 <= v42 )
              goto LABEL_15;
            v42 = v38 + v41;
            v36 = a4;
            v34 = (uint8_t *)v41;
            goto LABEL_80;
          case 19:
            v19 = a2[6] + a2[5];
            v41 = 2 * (uint8_t)v41;
            v40 = 2 * (uint8_t)v40;
            result = a2[2] + a2[1];
            goto LABEL_37;
          case 20:
            v19 = a2[5] - a2[2];
            v41 = 2 * (uint8_t)v41 - 255;
            v42 = (int)(uintptr_t)(v7 + 4);
            v40 = 2 * (uint8_t)v40 - 255;
            result = a2[1] - a2[6];
            if ( result > v40 )
              goto LABEL_41;
            goto LABEL_38;
          case 21:
            v19 = a2[6] + a2[4];
            v41 = 2 * (uint8_t)v41;
            v40 = 2 * (uint8_t)v40;
            result = a2[2] + *a2;
            goto LABEL_37;
          case 22:
            v19 = a2[4] - a2[2];
            v41 = 2 * (uint8_t)v41 - 255;
            v40 = 2 * (uint8_t)v40 - 255;
            result = *a2 - a2[6];
            goto LABEL_37;
          case 23:
            v19 = a2[5] + a2[4];
            v41 = 2 * (uint8_t)v41;
            v40 = 2 * (uint8_t)v40;
            result = a2[1] + *a2;
            goto LABEL_37;
          case 24:
            v19 = a2[4] - a2[1];
            v41 = 2 * (uint8_t)v41 - 255;
            v40 = 2 * (uint8_t)v40 - 255;
            result = *a2 - a2[5];
            goto LABEL_37;
          case 25:
            v19 = a2[6] + a2[5] + a2[4];
            v41 = 3 * (uint8_t)v41;
            v40 = 3 * (uint8_t)v40;
            result = a2[2] + a2[1] + *a2;
            goto LABEL_37;
          case 26:
            v19 = a2[5] + a2[4] - a2[2];
            v41 = 3 * (uint8_t)v41 - 255;
            v40 = 3 * (uint8_t)v40 - 255;
            result = a2[1] + *a2 - a2[6];
            goto LABEL_37;
          case 27:
            v19 = a2[6] + a2[4] - a2[1];
            v41 = 3 * (uint8_t)v41 - 255;
            v40 = 3 * (uint8_t)v40 - 255;
            result = a2[2] + *a2 - a2[5];
            goto LABEL_37;
          case 28:
            v19 = a2[4] - a2[1] - a2[2];
            v41 = 3 * (uint8_t)v41 - 510;
            v40 = 3 * (uint8_t)v40 - 510;
            result = *a2 - a2[5] - a2[6];
LABEL_37:
            v42 = (int)(uintptr_t)(v7 + 4);
            if ( result > v40 )
            {
LABEL_41:
              if ( v19 < v41 )
              {
                v41 = v38;
                v32 = v42;
                hkpMoppObbVirtualMachine::queryAabbOnTree(a1, a2, (uint8_t *)(uintptr_t)(v42), a4);
                v7 = (uint8_t *)(v32 + v41);
              }
              else
              {
                v7 = (uint8_t *)(v42 + v38);
              }
              goto LABEL_15;
            }
LABEL_38:
            if ( v19 >= v41 )
              return result;
            v5 = v7[4];
            LOBYTE(v40) = v7[6];
            v14 = v7[5];
            LOBYTE(v39) = v7[7];
            v7 = (uint8_t *)v42;
            v42 = v5;
            break;
          case 32:
          case 33:
          case 34:
            v20 = (uint8_t)v41;
            v21 = (int)(uint8_t)v41 < a2[v42 - 32];
            v41 = a2[v42 - 28];
            v42 = (int)(uintptr_t)(v7 + 3);
            if ( !v21 )
            {
              v5 = v38;
              LOBYTE(v40) = v7[5];
              v14 = v7[4];
              LOBYTE(v39) = v7[6];
              v7 = (uint8_t *)v42;
              v42 = v38;
              break;
            }
            v22 = v7 + 3;
            v7 += (uint8_t)v40 + 3;
            if ( v20 < v41 )
              goto LABEL_15;
            v42 = (int)(uintptr_t)(&v22[(uint8_t)v40]);
            v36 = a4;
            v34 = &v7[-(uint8_t)v40];
            goto LABEL_80;
          case 35:
          case 36:
          case 37:
            v23 = v7 + 7;
            v24 = (uint8_t)*(v23 - 3);
            v41 = (uint8_t)v41;
            v25 = v42 + 1073741789;
            v42 = a2[v42 - 31];
            v26 = v24 + (v38 << 8);
            v27 = (uint8_t)*(v23 - 1);
            v39 = v26;
            v38 = *(v23 - 2);
            if ( (uint8_t)v40 < (int)a2[v25] )
            {
              v33 = v27 + (v38 << 8);
              v7 = &v23[v33];
              if ( v41 > v42 )
              {
                v42 = (int)(uintptr_t)(v7);
                v36 = a4;
                v34 = &v7[v39 - v33];
LABEL_80:
                hkpMoppObbVirtualMachine::queryAabbOnTree(a1, a2, v34, v36);
                v7 = (uint8_t *)v42;
              }
            }
            else
            {
              result = v42;
              if ( v41 <= v42 )
                return result;
              v7 = &v23[v39];
            }
LABEL_15:
            v5 = *v7;
            v14 = v7[1];
            LOBYTE(v40) = v7[2];
            LOBYTE(v39) = v7[3];
            v42 = v5;
            break;
          case 38:
          case 39:
          case 40:
            result = (uint8_t)v40;
            if ( a2[v42 - 34] >= (int)(uint8_t)v40 )
              return result;
            result = (uint8_t)v41;
            if ( a2[v42 - 38] < (int)(uint8_t)v41 )
              return result;
            v28 = v7[5];
            v7 += 3;
            v5 = v38;
            LOBYTE(v40) = v28;
            v14 = v7[1];
            LOBYTE(v39) = v7[3];
            v42 = v38;
            break;
          case 41:
          case 42:
          case 43:
            v29 = v7[4];
            v42 = 4 * v42 - 164;
            result = (v7[5] << 8) + (v29 << 16) + v7[6];
            if ( *(int *)((char *)a1 + v42 + 32) > result )
              return result;
            result = ((uint8_t)v40 << 8) + ((uint8_t)v41 << 16) + v38;
            if ( *(int *)((char *)a1 + v42 + 16) < result )
              return result;
            v30 = v7[9];
            v7 += 7;
            v5 = *v7;
            LOBYTE(v40) = v30;
            v14 = v7[1];
            LOBYTE(v39) = v7[3];
            v42 = v5;
            break;
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
            v9 = v42 - 48;
            goto LABEL_7;
          case 80:
            v9 = (uint8_t)v41;
            goto LABEL_7;
          case 81:
            v9 = (uint8_t)v40 + ((uint8_t)v41 << 8);
            goto LABEL_7;
          case 82:
            v9 = v38 + ((uint8_t)v40 << 8) + ((uint8_t)v41 << 16);
            goto LABEL_7;
          case 83:
            v9 = v7[4] + ((uint8_t)v41 << 24) + ((uint8_t)v40 << 16) + (v38 << 8);
LABEL_7:
            v10 = a2[11] + v9;
            v42 = a4 >> 9 << 8;
            v42 &= a1[13];
            v42 |= v10;
            v11 = (hkMemoryAllocator::Self *)*a1;
            result = *(uint32_t *)(*a1 + 4);
            if ( result == (*(uint32_t *)(*a1 + 8) & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v11, 4, v36);
              result = *((uint32_t *)v11 + 1);
            }
            v12 = *(uint32_t *)v11;
            v13 = v42;
            *((uint32_t *)v11 + 1) = result + 1;
            *(uint32_t *)(v12 + 4 * result) = v13;
            return result;
          case 96:
          case 97:
          case 98:
          case 99:
            v7 += 2;
            *(uint32_t *)&v35[4 * v42 - 284] = (uint8_t)v41;
            goto LABEL_65;
          case 100:
          case 101:
          case 102:
          case 103:
            v7 += 3;
            *(uint32_t *)&v35[4 * v42 - 300] = (uint8_t)v40 + ((uint8_t)v41 << 8);
            goto LABEL_65;
          case 104:
          case 105:
          case 106:
          case 107:
            v7 += 5;
            *(uint32_t *)&v35[4 * v42 - 316] = *(v7 - 1) + ((uint8_t)v40 << 16) + (v41 << 24) + (v38 << 8);
LABEL_65:
            v31 = v43[13];
            if ( a2 != v37 )
              std::memcpy(v43, a2, 64);
            v43[13] = v31;
            a2 = v37;
            v5 = *v7;
            LOBYTE(v40) = v7[2];
            v14 = v7[1];
            LOBYTE(v39) = v7[3];
            v42 = v5;
            break;
          case 112:
            a4 = v7[4] + ((uint8_t)v40 << 16) + (v41 << 24) + (v38 << 8);
LABEL_14:
            v7 = (uint8_t *)(a4 + *(uint32_t *)(a1[12] + 32));
            goto LABEL_15;
          default:
            abort();
        }
      }
      LOBYTE(v41) = v14;
      v38 = v39;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppObbVirtualMachine::queryObb  (binary VA: 0x17fa090)
// Original: hkpMoppObbVirtualMachine::queryObb
// ----------------------------------------------------------------------------
int hkpMoppObbVirtualMachine::queryObb(int *a1, int a2, int a3, int a4, float a5, int a6)
{
  __m128 v7;
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  __m128 v11;
  __m128 v12;
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm7_4
  __m128i v16;
  float v17; // xmm7_4
  unsigned int v18;
  int v19;
  int v20;
  __m128i v21;
  __m128i m128_i128;
  __m128i v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  signed int v39;
  int v40;
  int v41;
  signed int v42;
  int v43;
  int v44;
  signed int v45;
  int v46;
  unsigned int v47;
  int v48;
  int v49;
  int v50;
  signed int v51;
  int v52;
  uint8_t *v53;
  typedef int _g4_t_v55;
  typedef signed int _g4_t_v56;
  typedef signed int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef signed int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef signed int _g4_t_v62;
  typedef float _g4_t_v63;
  typedef int _g4_t_v64;
  typedef float _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint32_t _g4_t_v67[19];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v55)) > _g4_s0 ? (8u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v56)) > _g4_s1 ? (12u + sizeof(_g4_t_v56)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v57)) > _g4_s2 ? (16u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v58)) > _g4_s3 ? (20u + sizeof(_g4_t_v58)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v59)) > _g4_s4 ? (24u + sizeof(_g4_t_v59)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v60)) > _g4_s5 ? (28u + sizeof(_g4_t_v60)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v61)) > _g4_s6 ? (32u + sizeof(_g4_t_v61)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v62)) > _g4_s7 ? (36u + sizeof(_g4_t_v62)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v63)) > _g4_s8 ? (40u + sizeof(_g4_t_v63)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v64)) > _g4_s9 ? (40u + sizeof(_g4_t_v64)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v65)) > _g4_s10 ? (44u + sizeof(_g4_t_v65)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v66)) > _g4_s11 ? (44u + sizeof(_g4_t_v66)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v67)) > _g4_s12 ? (48u + sizeof(_g4_t_v67)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 32u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 36u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 40u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 44u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 44u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);

  a1[12] = a2;
  *a1 = a6;
g4_m128_raw(v7) = *(unsigned int *)(a4 + 8);
  v8 = *(float *)(a3 + 32) *g4_m128_lane<float>(v7, 0);
  v9 = *(float *)(a3 + 36) *g4_m128_lane<float>(v7, 0);
g4_m128_lane<float>(v7, 0) =g4_m128_lane<float>(v7, 0) * *(float *)(a3 + 40);
  v10 = (float)((float)(fabs(*(float *)a3 * *(float *)a4) + fabs(*(float *)(a3 + 16) * *(float *)(a4 + 4))) + fabs(v8))
      + a5;
  v11 = v7;
g4_m128_raw(v21) = *(unsigned int *)(a3 + 52);
  v12 = _mm_and_ps(v11, g4_m128_u32(0x7FFFFFFFu));
  *(float *)g4_m128_ptr<int32_t>(v21) = *(float *)g4_m128_ptr<int32_t>(v21) - *(float *)(a2 + 20);
  v13 = *(float *)(a2 + 28);
  v14 = (float)((float)(fabs(*(float *)(a3 + 4) * *(float *)a4) + fabs(*(float *)(a3 + 20) * *(float *)(a4 + 4)))
              + fabs(v9))
      + a5;
g4_m128_raw(v23) = *(unsigned int *)(a3 + 56);
  *(float *)g4_m128_ptr<int32_t>(v23) = *(float *)g4_m128_ptr<int32_t>(v23) - *(float *)(a2 + 24);
g4_m128_raw(v16) = *(unsigned int *)(a3 + 48);
  *(float *)g4_m128_ptr<int32_t>(v16) = *(float *)g4_m128_ptr<int32_t>(v16) - *(float *)(a2 + 16);
g4_m128_lane<float>(v12, 0) = (float)((float)(fabs(*(float *)a4 * *(float *)(a3 + 8))
                                  + fabs(*(float *)(a3 + 24) * *(float *)(a4 + 4)))
                          +g4_m128_lane<float>(v12, 0))
                  + a5;
  v15 = v10 + *(float *)g4_m128_ptr<int32_t>(v16);
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)(*(float *)g4_m128_ptr<int32_t>(v16) - v10) * v13;
  v65 = v15 * v13;
  v17 = v14 + *(float *)g4_m128_ptr<int32_t>(v21);
  v18 = (_mm_cvtsi128_si32(v16) & 0x7F800000u) >> 23;
  v19 = _mm_cvtsi128_si32(v16);
  v20 = v18 - 127;
  *(float *)g4_m128_ptr<int32_t>(v21) = (float)(*(float *)g4_m128_ptr<int32_t>(v21) - v14) * v13;
  v63 = v17 * v13;
  m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v12));
  *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)(g4_m128_lane<float>(v12, 0) + *(float *)g4_m128_ptr<int32_t>(v23)) * v13;
  *(float *)g4_m128_ptr<int32_t>(v23) = (float)(*(float *)g4_m128_ptr<int32_t>(v23) -g4_m128_lane<float>(v12, 0)) * v13;
  if ( v18 < 0x7F )
  {
    v58 = -1;
    v57 = -1;
  }
  else
  {
    v24 = _mm_cvtsi128_si32(v16) & 0x7FFFFF | 0x800000;
    v25 = (_mm_cvtsi128_si32(v16) >> 31) | 1;
    if ( v20 > 23 )
      v26 = v24 << (v18 + 106);
    else
      v26 = v24 >> (23 - v20);
    v57 = (v19 & 0x80000000 | (v25 * v26) & 0x7FFFFFFF) - 1;
    v58 = v57 >> 16;
  }
  v27 = _mm_cvtsi128_si32(v21);
  v28 = (v27 & 0x7F800000u) >> 23;
  v29 = v28 - 127;
  if ( v28 < 0x7F )
  {
    v59 = -1;
    v62 = -1;
  }
  else
  {
    v30 = _mm_cvtsi128_si32(v21) & 0x7FFFFF | 0x800000;
    v31 = (_mm_cvtsi128_si32(v21) >> 31) | 1;
    if ( v29 <= 23 )
      v32 = v30 >> (23 - v29);
    else
      v32 = v30 << (v28 + 106);
    v62 = (v27 & 0x80000000 | (v31 * v32) & 0x7FFFFFFF) - 1;
    v59 = v62 >> 16;
  }
  v33 = _mm_cvtsi128_si32(v23);
  v34 = (v33 & 0x7F800000u) >> 23;
  v35 = v34 - 127;
  if ( v34 < 0x7F )
  {
    v61 = -1;
    v60 = -1;
  }
  else
  {
    v36 = _mm_cvtsi128_si32(v23) & 0x7FFFFF | 0x800000;
    v37 = (_mm_cvtsi128_si32(v23) >> 31) | 1;
    if ( v35 <= 23 )
      v38 = v36 >> (23 - v35);
    else
      v38 = v36 << (v34 + 106);
    v60 = (v33 & 0x80000000 | (v37 * v38) & 0x7FFFFFFF) - 1;
    v61 = v60 >> 16;
  }
  v39 = ((LODWORD(v65) & 0x7F800000u) >> 23) - 127;
  if ( v39 < 0 )
  {
    v55 = 1;
    v56 = 1;
  }
  else
  {
    v40 = LODWORD(v65) & 0x7FFFFF | 0x800000;
    if ( v39 <= 23 )
      v41 = v40 >> (23 - v39);
    else
      v41 = v40 << (((LODWORD(v65) & 0x7F800000u) >> 23) + 106);
    v56 = (LODWORD(v65) & 0x80000000 | (((SLODWORD(v65) >> 31) | 1) * v41) & 0x7FFFFFFF) + 1;
    v55 = (v56 >> 16) + 1;
  }
  v42 = ((LODWORD(v63) & 0x7F800000u) >> 23) - 127;
  if ( v42 < 0 )
  {
    v64 = 1;
    v45 = 1;
  }
  else
  {
    v43 = LODWORD(v63) & 0x7FFFFF | 0x800000;
    if ( v42 <= 23 )
      v44 = v43 >> (23 - v42);
    else
      v44 = v43 << (((LODWORD(v63) & 0x7F800000u) >> 23) + 106);
    v45 = (LODWORD(v63) & 0x80000000 | (v44 * ((SLODWORD(v63) >> 31) | 1)) & 0x7FFFFFFF) + 1;
    v64 = (v45 >> 16) + 1;
  }
  v46 = _mm_cvtsi128_si32(m128_i128);
  v47 = (v46 & 0x7F800000u) >> 23;
  v66 = v47 - 127;
  if ( v47 < 0x7F )
  {
    v52 = 1;
    v51 = 1;
  }
  else
  {
    v48 = _mm_cvtsi128_si32(m128_i128) & 0x7FFFFF | 0x800000;
    v49 = (_mm_cvtsi128_si32(m128_i128) >> 31) | 1;
    if ( v66 <= 23 )
      v50 = v48 >> (23 - v66);
    else
      v50 = v48 << (v47 + 106);
    v51 = (v46 & 0x80000000 | (v50 * v49) & 0x7FFFFFFF) + 1;
    v52 = (v51 >> 16) + 1;
  }
  v67[2] = v52;
  memset(&v67[8], 0, 16);
  a1[5] = v45;
  a1[8] = v57;
  a1[4] = v56;
  a1[9] = v62;
  a1[6] = v51;
  a1[10] = v60;
  v67[5] = v59;
  v53 = *(uint8_t **)(a2 + 32);
  v67[4] = v58;
  v67[0] = v55;
  v67[1] = v64;
  v67[6] = v61;
  v67[12] = 0;
  v67[13] = 0;
  a1[13] = -(*v53 == 13);
  return hkpMoppObbVirtualMachine::queryAabbOnTree(a1, v67, v53, 0);
}

// ----------------------------------------------------------------------------
// Function: hkpMoppObbVirtualMachine::queryAabb  (binary VA: 0x17fa5e0)
// Original: hkpMoppObbVirtualMachine::queryAabb
// ----------------------------------------------------------------------------
int hkpMoppObbVirtualMachine::queryAabb(int *a1, int a2, unsigned int *a3, int a4)
{
  float v4; // xmm0_4
  float v5; // xmm2_4
  __m128i v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  signed int v13;
  __m128i v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  signed int v21;
  float v22; // xmm2_4
  __m128i v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  signed int v30;
  __m128i v31;
  int v32;
  unsigned int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  signed int v38;
  float v39; // xmm2_4
  __m128i v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  signed int v47;
  int v48;
  __m128i v49;
  int v50;
  unsigned int v51;
  int v52;
  int v53;
  int v54;
  signed int v55;
  int v56;
  uint8_t *v57;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint32_t _g4_t_v64[19];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v59)) > _g4_s0 ? (12u + sizeof(_g4_t_v59)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v60)) > _g4_s1 ? (16u + sizeof(_g4_t_v60)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v61)) > _g4_s2 ? (20u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v62)) > _g4_s3 ? (24u + sizeof(_g4_t_v62)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v63)) > _g4_s4 ? (28u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v64)) > _g4_s5 ? (32u + sizeof(_g4_t_v64)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);

  a1[12] = a2;
  *a1 = a4;
  v4 = *(float *)(a2 + 28);
  v5 = *(float *)(a2 + 16);
g4_m128_raw(v6) = *a3;
  *(float *)g4_m128_ptr<int32_t>(v6) = (float)(*(float *)g4_m128_ptr<int32_t>(v6) - v5) * v4;
  v7 = _mm_cvtsi128_si32(v6);
  v8 = (v7 & 0x7F800000u) >> 23;
  v9 = v8 - 127;
  if ( v8 < 0x7F )
  {
    v62 = -1;
    v13 = -1;
  }
  else
  {
    v10 = _mm_cvtsi128_si32(v6) & 0x7FFFFF | 0x800000;
    v11 = (_mm_cvtsi128_si32(v6) >> 31) | 1;
    if ( v9 > 23 )
      v12 = v10 << (v8 + 106);
    else
      v12 = v10 >> (23 - v9);
    v13 = (v7 & 0x80000000 | (v12 * v11) & 0x7FFFFFFF) - 1;
    v62 = v13 >> 16;
  }
  a1[8] = v13;
g4_m128_raw(v14) = a3[4];
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)(*(float *)g4_m128_ptr<int32_t>(v14) - v5) * v4;
  v15 = _mm_cvtsi128_si32(v14);
  v16 = (v15 & 0x7F800000u) >> 23;
  v17 = v16 - 127;
  if ( v16 < 0x7F )
  {
    v61 = 1;
    v21 = 1;
  }
  else
  {
    v18 = _mm_cvtsi128_si32(v14) & 0x7FFFFF | 0x800000;
    v19 = (_mm_cvtsi128_si32(v14) >> 31) | 1;
    if ( v17 <= 23 )
      v20 = v18 >> (23 - v17);
    else
      v20 = v18 << (v16 + 106);
    v21 = (v15 & 0x80000000 | (v20 * v19) & 0x7FFFFFFF) + 1;
    v61 = (v21 >> 16) + 1;
  }
  a1[4] = v21;
  v22 = *(float *)(a2 + 20);
g4_m128_raw(v23) = a3[1];
  *(float *)g4_m128_ptr<int32_t>(v23) = (float)(*(float *)g4_m128_ptr<int32_t>(v23) - v22) * v4;
  v24 = _mm_cvtsi128_si32(v23);
  v25 = (v24 & 0x7F800000u) >> 23;
  v26 = v25 - 127;
  if ( v25 < 0x7F )
  {
    v60 = -1;
    v30 = -1;
  }
  else
  {
    v27 = _mm_cvtsi128_si32(v23) & 0x7FFFFF | 0x800000;
    v28 = (_mm_cvtsi128_si32(v23) >> 31) | 1;
    if ( v26 <= 23 )
      v29 = v27 >> (23 - v26);
    else
      v29 = v27 << (v25 + 106);
    v30 = (v24 & 0x80000000 | (v29 * v28) & 0x7FFFFFFF) - 1;
    v60 = v30 >> 16;
  }
  a1[9] = v30;
g4_m128_raw(v31) = a3[5];
  *(float *)g4_m128_ptr<int32_t>(v31) = (float)(*(float *)g4_m128_ptr<int32_t>(v31) - v22) * v4;
  v32 = _mm_cvtsi128_si32(v31);
  v33 = (v32 & 0x7F800000u) >> 23;
  v34 = v33 - 127;
  if ( v33 < 0x7F )
  {
    v59 = 1;
    v38 = 1;
  }
  else
  {
    v35 = _mm_cvtsi128_si32(v31) & 0x7FFFFF | 0x800000;
    v36 = (_mm_cvtsi128_si32(v31) >> 31) | 1;
    if ( v34 <= 23 )
      v37 = v35 >> (23 - v34);
    else
      v37 = v35 << (v33 + 106);
    v38 = (v32 & 0x80000000 | (v37 * v36) & 0x7FFFFFFF) + 1;
    v59 = (v38 >> 16) + 1;
  }
  a1[5] = v38;
  v39 = *(float *)(a2 + 24);
g4_m128_raw(v40) = a3[2];
  *(float *)g4_m128_ptr<int32_t>(v40) = (float)(*(float *)g4_m128_ptr<int32_t>(v40) - v39) * v4;
  v41 = _mm_cvtsi128_si32(v40);
  v42 = (v41 & 0x7F800000u) >> 23;
  v43 = v42 - 127;
  if ( v42 < 0x7F )
  {
    v48 = -1;
    v47 = -1;
  }
  else
  {
    v44 = _mm_cvtsi128_si32(v40) & 0x7FFFFF | 0x800000;
    v45 = (_mm_cvtsi128_si32(v40) >> 31) | 1;
    if ( v43 <= 23 )
      v46 = v44 >> (23 - v43);
    else
      v46 = v44 << (v42 + 106);
    v47 = (v41 & 0x80000000 | (v46 * v45) & 0x7FFFFFFF) - 1;
    v48 = v47 >> 16;
  }
  a1[10] = v47;
g4_m128_raw(v49) = a3[6];
  *(float *)g4_m128_ptr<int32_t>(v49) = (float)(*(float *)g4_m128_ptr<int32_t>(v49) - v39) * v4;
  v50 = _mm_cvtsi128_si32(v49);
  v51 = (v50 & 0x7F800000u) >> 23;
  v63 = v51 - 127;
  if ( v51 < 0x7F )
  {
    v56 = 1;
    v55 = 1;
  }
  else
  {
    v52 = _mm_cvtsi128_si32(v49) & 0x7FFFFF | 0x800000;
    v53 = (_mm_cvtsi128_si32(v49) >> 31) | 1;
    if ( v63 <= 23 )
      v54 = v52 >> (23 - v63);
    else
      v54 = v52 << (v51 + 106);
    v55 = (v50 & 0x80000000 | (v54 * v53) & 0x7FFFFFFF) + 1;
    v56 = (v55 >> 16) + 1;
  }
  v64[2] = v56;
  v64[6] = v48;
  memset(&v64[8], 0, 12);
  a1[6] = v55;
  v57 = *(uint8_t **)(a2 + 32);
  v64[4] = v62;
  memset(&v64[11], 0, 12);
  v64[0] = v61;
  v64[5] = v60;
  v64[1] = v59;
  a1[13] = -(*v57 == 13);
  return hkpMoppObbVirtualMachine::queryAabbOnTree(a1, v64, v57, 0);
}


