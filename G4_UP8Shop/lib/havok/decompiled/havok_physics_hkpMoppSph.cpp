#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppSph.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppSphereVirtualMachine::querySphereOnTree  (binary VA: 0x17e1170)
// Original: hkpMoppSphereVirtualMachine::querySphereOnTree
// ----------------------------------------------------------------------------
int hkpMoppSphereVirtualMachine::querySphereOnTree(hkMemoryAllocator::Self **a1, g4_int128_t *a2, uint8_t *a3)
{
  uint8_t v3;
  uint8_t *v5;
  uint8_t v6;
  int result;
  g4_int128_t *v8;
  int v9;
  hkMemoryAllocator::Self *v10;
  int v11;
  int v12;
  uint8_t v13;
  int v14;
  int v15;
  int v16;
  uint8_t *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint8_t *v22;
  uint8_t v23;
  int v24;
  int v25;
  uint8_t v26;
  int v27;
  int v28;
  uint8_t v29;
  int v30;
  uint8_t *v46;
  typedef int _g4_t_v31[5];
  typedef uint8_t *_g4_t_v32;
  typedef g4_int128_t *_g4_t_v33;
  typedef uint8_t _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef g4_int128_t _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v32)) > _g4_s1 ? (20u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v33)) > _g4_s2 ? (24u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v34)) > _g4_s3 ? (31u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v35)) > _g4_s4 ? (32u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v36)) > _g4_s5 ? (36u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v37)) > _g4_s6 ? (40u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v38)) > _g4_s7 ? (44u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v39)) > _g4_s8 ? (48u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v40)) > _g4_s9 ? (64u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v41)) > _g4_s10 ? (68u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v42)) > _g4_s11 ? (72u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v43)) > _g4_s12 ? (76u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v44)) > _g4_s13 ? (80u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v45)) > _g4_s14 ? (84u + sizeof(_g4_t_v45)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 31u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 84u);

  if ( byte_2136320 != 0 || (hkpCheckKeycode(), result = hkpProcessFlyingColors(&byte_2136320), byte_2136320 != 0) )
  {
    v34 = a3[3];
    v3 = a3[2];
    v33 = &v39;
    LOBYTE(result) = *a3;
    LOBYTE(v37) = v3;
    LOBYTE(v38) = a3[1];
    v5 = a3;
    v6 = result;
    result = (uint8_t)result;
    while ( 1 )
    {
      if ( v6 > 0x6Bu )
      {
LABEL_67:
        __builtin_debugtrap();
        LOBYTE(v35) = v34;
        LOBYTE(v36) = v37;
        v13 = v38;
      }
      else
      {
        switch ( result )
        {
          case 0:
            return result;
          case 1:
          case 2:
          case 3:
          case 4:
            v5 += 4;
            v36 = *((uint32_t *)a2 + 8);
            v36 -= result;
            v44 = v36;
            v40 = (*((uint32_t *)a2 + 4) + (uint8_t)v38) << v6;
            v38 = (int)(uintptr_t)(a1[4]);
            v38 >>= v36;
            v38 -= v40;
            LODWORD(v39) = v38;
            v41 = (*((uint32_t *)a2 + 5) + (uint8_t)v37) << v6;
            v38 = (int)(uintptr_t)(a1[5]);
            v38 >>= v36;
            v38 -= v41;
            DWORD1(v39) = v38;
            v42 = (*((uint32_t *)a2 + 6) + v34) << v6;
            DWORD2(v39) = ((int)(uintptr_t)(a1[6]) >> v36) - v42;
            v6 = *v5;
            v13 = v5[1];
            HIDWORD(v39) = ((int)(uintptr_t)(a1[7]) >> v36) + 1;
            v43 = *((uint32_t *)a2 + 7);
            v45 = *((uint32_t *)a2 + 9);
            a2 = v33;
            LOBYTE(v36) = v5[2];
            LOBYTE(v35) = v5[3];
            result = v6;
            break;
          case 5:
            v5 += (uint8_t)v38 + 2;
            goto LABEL_20;
          case 6:
            v5 += 256 * (uint8_t)v38 + (uint8_t)v37 + 3;
            goto LABEL_20;
          case 7:
            v5 += 0x10000 * (uint8_t)v38 + 256 * (uint8_t)v37 + v34 + 4;
            goto LABEL_20;
          case 8:
            v5 += 0x1000000 * v38 + 0x10000 * (uint8_t)v37 + 256 * v34 + v5[4] + 5;
            goto LABEL_20;
          case 9:
            if ( a2 != v33 )
            {
              v39 = *a2;
              v40 = *((uint32_t *)a2 + 4);
              v41 = *((uint32_t *)a2 + 5);
              v42 = *((uint32_t *)a2 + 6);
              v43 = *((uint32_t *)a2 + 7);
              v44 = *((uint32_t *)a2 + 8);
              v45 = *((uint32_t *)a2 + 9);
            }
            v43 += (uint8_t)v38;
            v5 += 2;
            a2 = v33;
            v6 = v37;
            LOBYTE(v36) = v5[2];
            v13 = v34;
            LOBYTE(v35) = v5[3];
            result = (uint8_t)v37;
            break;
          case 10:
            if ( a2 != v33 )
            {
              v39 = *a2;
              v40 = *((uint32_t *)a2 + 4);
              v41 = *((uint32_t *)a2 + 5);
              v42 = *((uint32_t *)a2 + 6);
              v43 = *((uint32_t *)a2 + 7);
              v44 = *((uint32_t *)a2 + 8);
              v45 = *((uint32_t *)a2 + 9);
            }
            v43 += (uint8_t)v37 + ((uint8_t)v38 << 8);
            v5 += 3;
            a2 = v33;
            v6 = v34;
            LOBYTE(v36) = v5[2];
            v13 = v5[1];
            LOBYTE(v35) = v5[3];
            result = v34;
            break;
          case 11:
            v14 = v5[4] + (v34 << 8) + ((uint8_t)v37 << 16) + (v38 << 24);
            if ( a2 != v33 )
            {
              v39 = *a2;
              v40 = *((uint32_t *)a2 + 4);
              v41 = *((uint32_t *)a2 + 5);
              v42 = *((uint32_t *)a2 + 6);
              v43 = *((uint32_t *)a2 + 7);
              v44 = *((uint32_t *)a2 + 8);
              v45 = *((uint32_t *)a2 + 9);
            }
            v43 = v14;
            v5 += 5;
            a2 = v33;
            v6 = *v5;
            LOBYTE(v36) = v5[2];
            v13 = v5[1];
            LOBYTE(v35) = v5[3];
            result = v6;
            break;
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
            goto LABEL_67;
          case 16:
          case 17:
          case 18:
            v15 = *((uint32_t *)a2 + result - 16);
            v36 = (uint8_t)v38;
            v37 = (uint8_t)v37;
            v16 = *((uint32_t *)a2 + 3);
            goto LABEL_34;
          case 19:
            v36 = 2 * (uint8_t)v38;
            v37 = 2 * (uint8_t)v37;
            v15 = *((uint32_t *)a2 + 2) + *((uint32_t *)a2 + 1);
            goto LABEL_39;
          case 20:
            v36 = 2 * (uint8_t)v38;
            v37 = 2 * (uint8_t)v37;
            v18 = 255 - *((uint32_t *)a2 + 2);
            goto LABEL_42;
          case 21:
            v36 = 2 * (uint8_t)v38;
            v37 = 2 * (uint8_t)v37;
            v15 = *((uint32_t *)a2 + 2) + *(uint32_t *)a2;
            goto LABEL_39;
          case 22:
            v36 = 2 * (uint8_t)v38;
            v37 = 2 * (uint8_t)v37;
            v15 = *(uint32_t *)a2 + 255 - *((uint32_t *)a2 + 2);
            goto LABEL_39;
          case 23:
            v36 = 2 * (uint8_t)v38;
            v37 = 2 * (uint8_t)v37;
            v18 = *(uint32_t *)a2;
LABEL_42:
            v15 = *((uint32_t *)a2 + 1) + v18;
            goto LABEL_39;
          case 24:
            v36 = 2 * (uint8_t)v38;
            v37 = 2 * (uint8_t)v37;
            v15 = *(uint32_t *)a2 + 255 - *((uint32_t *)a2 + 1);
LABEL_39:
            v16 = *((uint32_t *)a2 + 3) + (*((int *)a2 + 3) >> 1) + 1;
            v38 = (int)(uintptr_t)(v5 + 4);
            if ( v37 > v16 + v15 )
              goto LABEL_40;
            goto LABEL_35;
          case 25:
            v16 = 4 * *((uint32_t *)a2 + 3);
            v36 = 3 * (uint8_t)v38;
            v37 = 3 * (uint8_t)v37;
            v15 = *((uint32_t *)a2 + 2) + *((uint32_t *)a2 + 1) + *(uint32_t *)a2;
            goto LABEL_34;
          case 26:
            v16 = 4 * *((uint32_t *)a2 + 3);
            v36 = 3 * (uint8_t)v38;
            v37 = 3 * (uint8_t)v37;
            v15 = *((uint32_t *)a2 + 1) + *(uint32_t *)a2 - *((uint32_t *)a2 + 2) + 255;
            goto LABEL_34;
          case 27:
            v16 = 4 * *((uint32_t *)a2 + 3);
            v36 = 3 * (uint8_t)v38;
            v37 = 3 * (uint8_t)v37;
            v15 = *((uint32_t *)a2 + 2) + *(uint32_t *)a2 + 255 - *((uint32_t *)a2 + 1);
            goto LABEL_34;
          case 28:
            v36 = 3 * (uint8_t)v38;
            v37 = 3 * (uint8_t)v37;
            v15 = 255 - *((uint32_t *)a2 + 2) + *(uint32_t *)a2 + 255 - *((uint32_t *)a2 + 1);
            v16 = 4 * *((uint32_t *)a2 + 3);
LABEL_34:
            v38 = (int)(uintptr_t)(v5 + 4);
            if ( v37 <= v15 + v16 )
            {
LABEL_35:
              v5 = (uint8_t *)(v34 + v38);
              if ( v15 <= v36 + v16 )
              {
                v17 = (uint8_t *)v38;
                goto LABEL_37;
              }
              goto LABEL_20;
            }
LABEL_40:
            v6 = v5[4];
            LOBYTE(v36) = v5[6];
            v13 = v5[5];
            LOBYTE(v35) = v5[7];
            result = v6;
            v5 = (uint8_t *)v38;
            break;
          case 32:
          case 33:
          case 34:
            v19 = *((uint32_t *)a2 + result - 32);
            v38 = (uint8_t)v38;
            v20 = *((uint32_t *)a2 + 3);
            v32 = v5 + 3;
            if ( (uint8_t)v38 <= v20 + v19 )
            {
              v37 = (uint8_t)v37;
              v5 = &v32[(uint8_t)v37];
              if ( v19 <= v38 + v20 + 1 )
              {
                v17 = &v5[-v37];
LABEL_37:
                hkpMoppSphereVirtualMachine::querySphereOnTree(a1, a2, v17);
              }
LABEL_20:
              v6 = *v5;
              v13 = v5[1];
              LOBYTE(v36) = v5[2];
              LOBYTE(v35) = v5[3];
              result = v6;
              break;
            }
            v6 = v34;
            LOBYTE(v36) = v5[5];
            v13 = v5[4];
            LOBYTE(v35) = v5[6];
            result = v34;
            v5 = v32;
            break;
          case 35:
          case 36:
          case 37:
            v21 = *((uint32_t *)a2 + result - 35);
            v36 = *((uint32_t *)a2 + 3);
            v22 = v5 + 7;
            v23 = *(v22 - 2);
            v35 = (uint8_t)*(v22 - 3) + (v34 << 8);
            v34 = v23;
            LOBYTE(v32) = *(v22 - 1);
            if ( (uint8_t)v37 > v21 + v36 )
            {
              v5 = &v22[v35];
              goto LABEL_20;
            }
            v30 = (uint8_t)(uintptr_t)v32 + (v34 << 8);
            v5 = &v22[v30];
            if ( v21 > v36 + (uint8_t)v38 )
              goto LABEL_20;
            v17 = &v5[v35 - v30];
            goto LABEL_37;
          case 38:
          case 39:
          case 40:
            v24 = *((uint32_t *)a2 + result - 38);
            v25 = *((uint32_t *)a2 + 3);
            v37 = (uint8_t)v37;
            v38 = (uint8_t)v38;
            result = v24 + v25;
            if ( (uint8_t)v38 > v24 + v25 || v24 > v37 + v25 )
              return result;
            v26 = v5[5];
            v5 += 3;
            v6 = v34;
            LOBYTE(v36) = v26;
            v13 = v5[1];
            LOBYTE(v35) = v5[3];
            result = v34;
            break;
          case 41:
          case 42:
          case 43:
            v27 = v5[6];
            v28 = (int)(uintptr_t)(a1[7]);
            v35 = (int)(uintptr_t)(a1[result - 37]);
            v36 = v28;
            v32 = (uint8_t *)(v27 + (v5[4] << 16) + (v5[5] << 8));
            result = v34 + ((uint8_t)v37 << 8) + ((uint8_t)v38 << 16);
            if ( result > v35 + v28 )
              return result;
            result = (int)(uintptr_t)(&v32[v36]);
            if ( v35 > (int)(uintptr_t)(&v32[v36]) )
              return result;
            v29 = v5[9];
            v5 += 7;
            v6 = *v5;
            LOBYTE(v36) = v29;
            v13 = v5[1];
            LOBYTE(v35) = v5[3];
            result = v6;
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
            v8 = a2;
            v9 = result - 48;
            goto LABEL_7;
          case 80:
            v9 = (uint8_t)v38;
            v8 = a2;
            goto LABEL_7;
          case 81:
            v8 = a2;
            v9 = ((uint8_t)v38 << 8) + (uint8_t)v37;
            goto LABEL_7;
          case 82:
            v8 = a2;
            v9 = ((uint8_t)v38 << 16) + ((uint8_t)v37 << 8) + v34;
            goto LABEL_7;
          case 83:
            v46 = v5;
            v8 = a2;
            v9 = (v34 << 8) + ((uint8_t)v37 << 16) + (v38 << 24) + v46[4];
LABEL_7:
            result = *((uint32_t *)v8 + 7) + v9;
            v10 = *a1;
            v11 = *((uint32_t *)*a1 + 1);
            if ( v11 == (*((uint32_t *)*a1 + 2) & 0x3FFFFFFF) )
            {
              v38 = result;
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v10, 4, v31[3]);
              v11 = *((uint32_t *)v10 + 1);
              result = v38;
            }
            v12 = *(uint32_t *)v10;
            *((uint32_t *)v10 + 1) = v11 + 1;
            *(uint32_t *)(v12 + 4 * v11) = result;
            return result;
          case 96:
          case 97:
          case 98:
          case 99:
            v5 += 2;
            v31[result - 75] = (uint8_t)v38;
            goto LABEL_14;
          case 100:
          case 101:
          case 102:
          case 103:
            v5 += 3;
            v31[result - 79] = (uint8_t)v37 + ((uint8_t)v38 << 8);
            goto LABEL_14;
          case 104:
          case 105:
          case 106:
          case 107:
            v5 += 5;
            v31[result - 83] = *(v5 - 1) + (v34 << 8) + ((uint8_t)v37 << 16) + (v38 << 24);
LABEL_14:
            if ( a2 != v33 )
            {
              v39 = *a2;
              v40 = *((uint32_t *)a2 + 4);
              v41 = *((uint32_t *)a2 + 5);
              v42 = *((uint32_t *)a2 + 6);
              v43 = *((uint32_t *)a2 + 7);
              v44 = *((uint32_t *)a2 + 8);
            }
            a2 = v33;
            v6 = *v5;
            LOBYTE(v36) = v5[2];
            v13 = v5[1];
            LOBYTE(v35) = v5[3];
            result = v6;
            break;
          default:
            abort();
        }
      }
      LOBYTE(v38) = v13;
      LOBYTE(v37) = v36;
      v34 = v35;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMoppSphereVirtualMachine::querySphere  (binary VA: 0x17e1b60)
// Original: hkpMoppSphereVirtualMachine::querySphere
// ----------------------------------------------------------------------------
int hkpMoppSphereVirtualMachine::querySphere(int a1, int a2, unsigned int *a3, int a4)
{
  __m128i v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  signed int v10;
  __m128i v11;
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  signed int v17;
  __m128i v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  signed int v24;
  __m128i v25;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  signed int v32;
  int v33;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef g4_int128_t _g4_t_v42[3];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v36)) > _g4_s1 ? (4u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v37)) > _g4_s2 ? (8u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v38)) > _g4_s3 ? (12u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v39)) > _g4_s4 ? (12u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v40)) > _g4_s5 ? (12u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v41)) > _g4_s6 ? (12u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v42)) > _g4_s7 ? (16u + sizeof(_g4_t_v42)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);

  v37 = *(uint8_t **)(a2 + 32);
  *(uint32_t *)a1 = a4;
g4_m128_raw(v4) = *a3;
  *(float *)g4_m128_ptr<int32_t>(v4) = (float)(*(float *)g4_m128_ptr<int32_t>(v4) - *(float *)(a2 + 16)) * *(float *)(a2 + 28);
  v5 = _mm_cvtsi128_si32(v4);
  v6 = (v5 & 0x7F800000u) >> 23;
  v38 = v6 - 127;
  if ( v6 < 0x7F )
  {
    v10 = -1;
    v36 = -1;
  }
  else
  {
    v7 = _mm_cvtsi128_si32(v4) & 0x7FFFFF | 0x800000;
    v8 = (_mm_cvtsi128_si32(v4) >> 31) | 1;
    if ( v38 > 23 )
      v9 = v7 << (v6 + 106);
    else
      v9 = v7 >> (23 - v38);
    v10 = (v5 & 0x80000000 | (v9 * v8) & 0x7FFFFFFF) - 1;
    v36 = v10 >> 16;
  }
  *(uint32_t *)(a1 + 16) = v10;
g4_m128_raw(v11) = a3[1];
  *(float *)g4_m128_ptr<int32_t>(v11) = (float)(*(float *)g4_m128_ptr<int32_t>(v11) - *(float *)(a2 + 20)) * *(float *)(a2 + 28);
  v12 = _mm_cvtsi128_si32(v11);
  v13 = (v12 & 0x7F800000u) >> 23;
  v39 = v13 - 127;
  if ( v13 < 0x7F )
  {
    v17 = -1;
    v35 = -1;
  }
  else
  {
    v14 = _mm_cvtsi128_si32(v11) & 0x7FFFFF | 0x800000;
    v15 = (_mm_cvtsi128_si32(v11) >> 31) | 1;
    if ( v39 <= 23 )
      v16 = v14 >> (23 - v39);
    else
      v16 = v14 << (v13 + 106);
    v17 = (v12 & 0x80000000 | (v16 * v15) & 0x7FFFFFFF) - 1;
    v35 = v17 >> 16;
  }
  *(uint32_t *)(a1 + 20) = v17;
g4_m128_raw(v18) = a3[2];
  *(float *)g4_m128_ptr<int32_t>(v18) = (float)(*(float *)g4_m128_ptr<int32_t>(v18) - *(float *)(a2 + 24)) * *(float *)(a2 + 28);
  v19 = _mm_cvtsi128_si32(v18);
  v20 = (v19 & 0x7F800000u) >> 23;
  v40 = v20 - 127;
  if ( v20 < 0x7F )
  {
    v24 = -1;
    v41 = -1;
  }
  else
  {
    v21 = _mm_cvtsi128_si32(v18) & 0x7FFFFF | 0x800000;
    v22 = (_mm_cvtsi128_si32(v18) >> 31) | 1;
    if ( v40 <= 23 )
      v23 = v21 >> (23 - v40);
    else
      v23 = v21 << (v20 + 106);
    v24 = (v19 & 0x80000000 | (v23 * v22) & 0x7FFFFFFF) - 1;
    v41 = v24 >> 16;
  }
  *(uint32_t *)(a1 + 24) = v24;
g4_m128_raw(v25) = a3[3];
  *(float *)g4_m128_ptr<int32_t>(v25) = *(float *)g4_m128_ptr<int32_t>(v25) * *(float *)(a2 + 28);
  v26 = _mm_cvtsi128_si32(v25);
  v27 = (v26 & 0x7F800000u) >> 23;
  v28 = v27 - 127;
  if ( v27 < 0x7F )
  {
    v33 = 1;
    v32 = 2;
  }
  else
  {
    v29 = _mm_cvtsi128_si32(v25) & 0x7FFFFF | 0x800000;
    v30 = (_mm_cvtsi128_si32(v25) >> 31) | 1;
    if ( v28 <= 23 )
      v31 = v29 >> (23 - v28);
    else
      v31 = v29 << (v27 + 106);
    v32 = (v26 & 0x80000000 | (v31 * v30) & 0x7FFFFFFF) + 2;
    v33 = (v32 >> 16) + 1;
  }
  HIDWORD(v42[0]) = v33;
  memset(&v42[1], 0, sizeof(g4_int128_t));
  LODWORD(v42[2]) = 16;
  *(uint32_t *)(a1 + 28) = v32;
  *(uint64_t *)&v42[0] = __PAIR64__(v35, v36);
  DWORD1(v42[2]) = 0;
  DWORD2(v42[0]) = v41;
  return hkpMoppSphereVirtualMachine::querySphereOnTree((hkMemoryAllocator::Self **)a1, v42, v37);
}


