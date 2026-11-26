#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMoppFin.h"

// ----------------------------------------------------------------------------
// Function: hkpMoppFindAllVirtualMachine::queryOnTree  (binary VA: 0x180bad0)
// Original: hkpMoppFindAllVirtualMachine::queryOnTree
// ----------------------------------------------------------------------------
uint8_t * hkpMoppFindAllVirtualMachine::queryOnTree(hkMemoryAllocator::Self **a1, int *a2, uint8_t *a3)
{
  uint8_t *result;
  uint8_t v4;
  int v5;
  int v6;
  int v7;
  int v8;
  hkMemoryAllocator::Self *v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  uint8_t v14;
  int v15;
  uint8_t v16;
  uint8_t v17;
  uint8_t v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int *v24;
  int v25;
  int v26;
  uint8_t v27;
  uint8_t v28;
  uint8_t *v29;
  uint8_t *v30;
  uint8_t *v31;
  uint8_t v32;
  uint8_t v33;
  typedef int _g4_t_v34[5];
  typedef int *_g4_t_v35;
  typedef uint8_t _g4_t_v36;
  typedef uint8_t _g4_t_v37;
  typedef uint8_t _g4_t_v38;
  typedef uint8_t _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v34)) > _g4_s0 ? (0u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v35)) > _g4_s1 ? (20u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v36)) > _g4_s2 ? (24u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (25u + sizeof(_g4_t_v37)) > _g4_s3 ? (25u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (26u + sizeof(_g4_t_v38)) > _g4_s4 ? (26u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (27u + sizeof(_g4_t_v39)) > _g4_s5 ? (27u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v40)) > _g4_s6 ? (28u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v41)) > _g4_s7 ? (32u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v42)) > _g4_s8 ? (36u + sizeof(_g4_t_v42)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 25u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 26u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 27u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);

  result = a3;
  v4 = a3[2];
  v39 = *a3;
  v38 = v4;
  v5 = a3[3];
  v40 = v39;
  v6 = a3[1];
  v35 = &v41;
  while ( 1 )
  {
    if ( v39 > 0x6Bu )
    {
LABEL_40:
      __builtin_debugtrap();
      v15 = v5;
      v37 = v6;
      v16 = v38;
    }
    else
    {
      switch ( v40 )
      {
        case 0:
          return result;
        case 1:
        case 2:
        case 3:
        case 4:
          v17 = result[4];
          result += 4;
          v18 = result[1];
          v39 = v17;
          v37 = v18;
          v15 = result[3];
          v40 = v17;
          v16 = result[2];
          v6 = v37;
          goto LABEL_13;
        case 5:
          result += (uint8_t)v6 + 2;
          goto LABEL_16;
        case 6:
          result += 256 * (uint8_t)v6 + v38 + 3;
          goto LABEL_16;
        case 7:
          result += 0x10000 * (uint8_t)v6 + 256 * v38 + (uint8_t)v5 + 4;
          goto LABEL_16;
        case 8:
          result += 0x1000000 * v6 + 0x10000 * v38 + 256 * (uint8_t)v5 + result[4] + 5;
          goto LABEL_16;
        case 9:
          v19 = (uint8_t)v6;
          if ( a2 != v35 )
          {
            v20 = *a2;
            v42 = a2[1];
            v41 = v20;
          }
          v6 = v5;
          v36 = result[4];
          a2 = v35;
          v41 += v19;
          v39 = v38;
          v37 = v5;
          v15 = result[5];
          v40 = v38;
          v16 = v36;
          result += 2;
          goto LABEL_13;
        case 10:
          v21 = v38 + ((uint8_t)v6 << 8);
          if ( a2 != v35 )
          {
            v22 = *a2;
            v42 = a2[1];
            v41 = v22;
          }
          LOBYTE(v6) = result[4];
          v41 += v21;
          v37 = v6;
          v39 = v5;
          a2 = v35;
          result += 3;
          v16 = result[2];
          v40 = (uint8_t)v5;
          v15 = result[3];
          v6 = (uint8_t)v6;
          goto LABEL_13;
        case 11:
          v23 = ((uint8_t)v5 << 8) + (v38 << 16) + (v6 << 24);
          v24 = v35;
          v25 = result[4] + v23;
          if ( a2 != v35 )
          {
            v26 = *a2;
            v42 = a2[1];
            v41 = v26;
            v24 = v35;
          }
          v27 = result[5];
          v41 = v25;
          a2 = v24;
          v39 = v27;
          v28 = result[6];
          result += 5;
          v37 = v28;
          v15 = result[3];
          v40 = v27;
          v16 = result[2];
          v6 = v37;
          goto LABEL_13;
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
          goto LABEL_40;
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
        case 27:
        case 28:
          v29 = result + 4;
          hkpMoppFindAllVirtualMachine::queryOnTree(a1, a2, result + 4);
          result = &v29[(uint8_t)v5];
          goto LABEL_16;
        case 32:
        case 33:
        case 34:
          v30 = result + 3;
          hkpMoppFindAllVirtualMachine::queryOnTree(a1, a2, result + 3);
          result = &v30[v38];
          goto LABEL_16;
        case 35:
        case 36:
        case 37:
          v31 = result + 7;
          v40 = result[6] + (result[5] << 8);
          hkpMoppFindAllVirtualMachine::queryOnTree(a1, a2, &result[256 * (uint8_t)v5 + 7 + result[4]]);
          result = &v31[v40];
LABEL_16:
          v39 = *result;
          v37 = result[1];
          v16 = result[2];
          v15 = result[3];
          v40 = v39;
          v6 = v37;
          goto LABEL_13;
        case 38:
        case 39:
        case 40:
          LOBYTE(v6) = result[4];
          result += 3;
          v16 = result[2];
          v37 = v6;
          v15 = result[3];
          v39 = v5;
          v6 = (uint8_t)v6;
          v40 = (uint8_t)v5;
          goto LABEL_13;
        case 41:
        case 42:
        case 43:
          v32 = result[7];
          result += 7;
          v33 = result[1];
          v39 = v32;
          v37 = v33;
          v15 = result[3];
          v40 = v32;
          v16 = result[2];
          v6 = v37;
          goto LABEL_13;
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
          v7 = v40 - 48;
          goto LABEL_6;
        case 80:
          v7 = (uint8_t)v6;
          goto LABEL_6;
        case 81:
          v7 = ((uint8_t)v6 << 8) + v38;
          goto LABEL_6;
        case 82:
          v7 = ((uint8_t)v6 << 16) + (v38 << 8) + (uint8_t)v5;
          goto LABEL_6;
        case 83:
          v7 = ((uint8_t)v5 << 8) + (v38 << 16) + (v6 << 24) + result[4];
LABEL_6:
          v8 = *a2 + v7;
          v9 = *a1;
          result = *((uint8_t **)*a1 + 1);
          if ( result == (uint8_t *)(*((uint32_t *)*a1 + 2) & 0x3FFFFFFF) )
          {
            v40 = v8;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v9, 4, v34[3]);
            result = *((uint8_t **)v9 + 1);
            v8 = v40;
          }
          v10 = *(uint32_t *)v9;
          *((uint32_t *)v9 + 1) = (uint32_t)(uintptr_t)(result + 1);
          *(uint32_t *)(v10 + 4 * (uint32_t)(uintptr_t)(result)) = v8;
          return result;
        case 96:
        case 97:
        case 98:
        case 99:
          result += 2;
          v34[v40 - 87] = (uint8_t)v6;
          break;
        case 100:
        case 101:
        case 102:
        case 103:
          result += 3;
          v34[v40 - 91] = v38 + ((uint8_t)v6 << 8);
          break;
        case 104:
        case 105:
        case 106:
        case 107:
          result += 5;
          v34[v40 - 95] = *(result - 1) + ((uint8_t)v5 << 8) + (v38 << 16) + (v6 << 24);
          break;
        default:
          abort();
      }
      v11 = v35;
      v12 = v42;
      if ( a2 != v35 )
      {
        v13 = *a2;
        v42 = a2[1];
        v41 = v13;
        v11 = v35;
      }
      v14 = *result;
      v42 = v12;
      a2 = v11;
      v39 = v14;
      v37 = result[1];
      v15 = result[3];
      v40 = v14;
      v16 = result[2];
      v6 = v37;
    }
LABEL_13:
    v38 = v16;
    v5 = v15;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMoppFindAllVirtualMachine::queryOnTreeRight  (binary VA: 0x180bfd0)
// Original: hkpMoppFindAllVirtualMachine::queryOnTreeRight
// ----------------------------------------------------------------------------
uint8_t * hkpMoppFindAllVirtualMachine::queryOnTreeRight(hkMemoryAllocator::Self **a1, int *a2, uint8_t *a3)
{
  uint8_t *result;
  uint8_t v4;
  int v5;
  int v6;
  int v7;
  int v8;
  hkMemoryAllocator::Self *v9;
  int v10;
  int *v11;
  int v12;
  int v13;
  uint8_t v14;
  int *v15;
  int v16;
  uint8_t v17;
  uint8_t v18;
  int *v19;
  int v20;
  int v21;
  uint8_t v22;
  uint8_t v23;
  int *v24;
  int v25;
  int v26;
  uint8_t v27;
  uint8_t v28;
  uint8_t v29;
  uint8_t v30;
  typedef int _g4_t_v31[5];
  typedef int *_g4_t_v32;
  typedef uint8_t _g4_t_v33;
  typedef int16_t _g4_t_v34;
  typedef uint8_t _g4_t_v35[5];
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v32)) > _g4_s1 ? (20u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v33)) > _g4_s2 ? (24u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (25u + sizeof(_g4_t_v34)) > _g4_s3 ? (25u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (27u + sizeof(_g4_t_v35)) > _g4_s4 ? (27u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v36)) > _g4_s5 ? (32u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v37)) > _g4_s6 ? (36u + sizeof(_g4_t_v37)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 25u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 27u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);

  result = a3;
  v32 = &v36;
  v4 = *a3;
  v35[0] = a3[3];
  v5 = v4;
  v35[1] = a3[2];
  v6 = a3[1];
  while ( 1 )
  {
    if ( v4 > 0x6Bu )
    {
LABEL_40:
      __builtin_debugtrap();
      v34 = *(uint16_t *)v35;
      v33 = v6;
    }
    else
    {
      switch ( v5 )
      {
        case 0:
          return result;
        case 1:
        case 2:
        case 3:
        case 4:
          v14 = result[5];
          result += 4;
          v4 = *result;
          v33 = v14;
          v5 = v4;
          HIBYTE(v34) = result[2];
          v6 = v14;
          LOBYTE(v34) = result[3];
          goto LABEL_13;
        case 5:
          result += (uint8_t)v6 + 2;
          goto LABEL_16;
        case 6:
          result += 256 * (uint8_t)v6 + v35[1] + 3;
          goto LABEL_16;
        case 7:
          result += 0x10000 * (uint8_t)v6 + 256 * v35[1] + v35[0] + 4;
          goto LABEL_16;
        case 8:
          result += 0x1000000 * v6 + 0x10000 * v35[1] + 256 * v35[0] + result[4] + 5;
          goto LABEL_16;
        case 9:
          v15 = v32;
          if ( a2 != v32 )
          {
            v16 = *a2;
            v37 = a2[1];
            v36 = v16;
            v15 = v32;
          }
          v17 = result[4];
          v36 += (uint8_t)v6;
          HIBYTE(v34) = v17;
          a2 = v15;
          v18 = result[5];
          result += 2;
          LOBYTE(v34) = v18;
          v33 = v35[0];
          v4 = v35[1];
          v5 = v35[1];
          v6 = v35[0];
          goto LABEL_13;
        case 10:
          v19 = v32;
          v20 = v35[1] + ((uint8_t)v6 << 8);
          if ( a2 != v32 )
          {
            v21 = *a2;
            v37 = a2[1];
            v36 = v21;
            v19 = v32;
          }
          v22 = result[4];
          v36 += v20;
          v33 = v22;
          a2 = v19;
          v23 = result[5];
          result += 3;
          v6 = v33;
          HIBYTE(v34) = v23;
          LOBYTE(v34) = result[3];
          v4 = v35[0];
          v5 = v35[0];
          goto LABEL_13;
        case 11:
          v24 = v32;
          v25 = result[4] + (v35[1] << 16) + (v6 << 24) + (v35[0] << 8);
          if ( a2 != v32 )
          {
            v26 = a2[1];
            v36 = *a2;
            v37 = v26;
            v24 = v32;
          }
          v36 = v25;
          a2 = v24;
          v27 = result[6];
          result += 5;
          v4 = *result;
          v33 = v27;
          v5 = v4;
          HIBYTE(v34) = result[2];
          v6 = v27;
          LOBYTE(v34) = result[3];
          goto LABEL_13;
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
          goto LABEL_40;
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
        case 27:
        case 28:
          result += v35[0] + 4;
          goto LABEL_16;
        case 32:
        case 33:
        case 34:
          result += v35[1] + 3;
          goto LABEL_16;
        case 35:
        case 36:
        case 37:
          result += 256 * result[5] + result[6] + 7;
LABEL_16:
          v4 = *result;
          v33 = result[1];
          v5 = v4;
          HIBYTE(v34) = result[2];
          v6 = v33;
          LOBYTE(v34) = result[3];
          goto LABEL_13;
        case 38:
        case 39:
        case 40:
          v28 = result[4];
          result += 3;
          v33 = v28;
          v6 = v28;
          HIBYTE(v34) = result[2];
          LOBYTE(v34) = result[3];
          v4 = v35[0];
          v5 = v35[0];
          goto LABEL_13;
        case 41:
        case 42:
        case 43:
          v29 = result[8];
          result += 7;
          v4 = *result;
          v33 = v29;
          v5 = v4;
          HIBYTE(v34) = result[2];
          v6 = v29;
          LOBYTE(v34) = result[3];
          goto LABEL_13;
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
          v7 = v5 - 48;
          goto LABEL_6;
        case 80:
          v7 = (uint8_t)v6;
          goto LABEL_6;
        case 81:
          v7 = v35[1] + ((uint8_t)v6 << 8);
          goto LABEL_6;
        case 82:
          v7 = v35[0] + (v35[1] << 8) + ((uint8_t)v6 << 16);
          goto LABEL_6;
        case 83:
          v7 = (v35[0] << 8) + result[4] + (v35[1] << 16) + (v6 << 24);
LABEL_6:
          v8 = *a2 + v7;
          v9 = *a1;
          result = *((uint8_t **)*a1 + 1);
          if ( result == (uint8_t *)(*((uint32_t *)*a1 + 2) & 0x3FFFFFFF) )
          {
            *(uint32_t *)&v35[1] = v8;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v9, 4, v31[3]);
            result = *((uint8_t **)v9 + 1);
            v8 = *(uint32_t *)&v35[1];
          }
          v10 = *(uint32_t *)v9;
          *((uint32_t *)v9 + 1) = (uint32_t)(uintptr_t)(result + 1);
          *(uint32_t *)(v10 + 4 * (uint32_t)(uintptr_t)(result)) = v8;
          return result;
        case 96:
        case 97:
        case 98:
        case 99:
          result += 2;
          v30 = v35[0];
          v31[v5 - 87] = (uint8_t)v6;
          v33 = v30;
          v4 = v35[1];
          break;
        case 100:
        case 101:
        case 102:
        case 103:
          result += 3;
          v33 = result[1];
          v31[v5 - 91] = v35[1] + ((uint8_t)v6 << 8);
          v4 = v35[0];
          break;
        case 104:
        case 105:
        case 106:
        case 107:
          result += 5;
          v4 = *result;
          v31[v5 - 95] = *(result - 1) + (v35[1] << 16) + (v6 << 24) + (v35[0] << 8);
          v33 = result[1];
          break;
        default:
          abort();
      }
      v11 = v32;
      v12 = v37;
      if ( a2 != v32 )
      {
        v13 = *a2;
        v37 = a2[1];
        v36 = v13;
        v11 = v32;
      }
      v37 = v12;
      a2 = v11;
      v5 = v4;
      HIBYTE(v34) = result[2];
      v6 = v33;
      LOBYTE(v34) = result[3];
    }
LABEL_13:
    *(uint16_t *)v35 = v34;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMoppFindAllVirtualMachine::queryOnTreeLeft  (binary VA: 0x180c490)
// Original: hkpMoppFindAllVirtualMachine::queryOnTreeLeft
// ----------------------------------------------------------------------------
uint8_t * hkpMoppFindAllVirtualMachine::queryOnTreeLeft(hkMemoryAllocator::Self **a1, int *a2, uint8_t *a3)
{
  uint8_t *result;
  uint8_t v4;
  int v5;
  int v6;
  int v7;
  int v8;
  hkMemoryAllocator::Self *v9;
  int v10;
  uint8_t v11;
  uint8_t v12;
  int *v13;
  int v14;
  int v15;
  uint8_t v16;
  uint8_t v17;
  int *v18;
  int v19;
  uint8_t v20;
  uint8_t v21;
  int *v22;
  int v23;
  int v24;
  uint8_t v25;
  uint8_t v26;
  int *v27;
  int v28;
  int v29;
  uint8_t v30;
  typedef int _g4_t_v31[5];
  typedef int *_g4_t_v32;
  typedef uint8_t _g4_t_v33;
  typedef uint8_t _g4_t_v34;
  typedef uint8_t _g4_t_v35;
  typedef uint8_t _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v32)) > _g4_s1 ? (20u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v33)) > _g4_s2 ? (24u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (25u + sizeof(_g4_t_v34)) > _g4_s3 ? (25u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (26u + sizeof(_g4_t_v35)) > _g4_s4 ? (26u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (27u + sizeof(_g4_t_v36)) > _g4_s5 ? (27u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v37)) > _g4_s6 ? (28u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v38)) > _g4_s7 ? (32u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v39)) > _g4_s8 ? (36u + sizeof(_g4_t_v39)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 25u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 26u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 27u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);

  result = a3;
  v32 = &v38;
  v4 = *a3;
  LOBYTE(v37) = a3[3];
  v5 = v4;
  v36 = a3[2];
  v6 = a3[1];
  while ( 1 )
  {
    if ( v4 > 0x6Bu )
    {
LABEL_38:
      __builtin_debugtrap();
      v34 = v37;
      v35 = v36;
      v33 = v6;
    }
    else
    {
      switch ( v5 )
      {
        case 0:
          return result;
        case 1:
        case 2:
        case 3:
        case 4:
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
        case 27:
        case 28:
          v12 = result[5];
          result += 4;
          v4 = *result;
          v33 = v12;
          v5 = v4;
          v35 = result[2];
          v6 = v12;
          v34 = result[3];
          goto LABEL_10;
        case 5:
          result += (uint8_t)v6 + 2;
          goto LABEL_23;
        case 6:
          result += 256 * (uint8_t)v6 + v36 + 3;
          goto LABEL_23;
        case 7:
          result += 0x10000 * (uint8_t)v6 + 256 * v36 + (uint8_t)v37 + 4;
          goto LABEL_23;
        case 8:
          result += 0x1000000 * v6 + 0x10000 * v36 + 256 * (uint8_t)v37 + result[4] + 5;
          goto LABEL_23;
        case 9:
          v18 = v32;
          if ( a2 != v32 )
          {
            v19 = *a2;
            v39 = a2[1];
            v38 = v19;
            v18 = v32;
          }
          v20 = result[4];
          v38 += (uint8_t)v6;
          v35 = v20;
          a2 = v18;
          v21 = result[5];
          result += 2;
          v34 = v21;
          v33 = v37;
          v4 = v36;
          v5 = v36;
          v6 = (uint8_t)v37;
          goto LABEL_10;
        case 10:
          v22 = v32;
          v23 = v36 + ((uint8_t)v6 << 8);
          if ( a2 != v32 )
          {
            v24 = *a2;
            v39 = a2[1];
            v38 = v24;
            v22 = v32;
          }
          v25 = result[4];
          v38 += v23;
          v33 = v25;
          a2 = v22;
          v26 = result[5];
          result += 3;
          v6 = v33;
          v35 = v26;
          v34 = result[3];
          v4 = v37;
          v5 = (uint8_t)v37;
          goto LABEL_10;
        case 11:
          v27 = v32;
          v28 = result[4] + (v36 << 16) + (v6 << 24) + ((uint8_t)v37 << 8);
          if ( a2 != v32 )
          {
            v29 = a2[1];
            v38 = *a2;
            v39 = v29;
            v27 = v32;
          }
          v38 = v28;
          a2 = v27;
          v30 = result[6];
          result += 5;
          v4 = *result;
          v33 = v30;
          v5 = v4;
          v35 = result[2];
          v6 = v30;
          v34 = result[3];
          goto LABEL_10;
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
          goto LABEL_38;
        case 32:
        case 33:
        case 34:
        case 38:
        case 39:
        case 40:
          v11 = result[4];
          result += 3;
          v33 = v11;
          v6 = v11;
          v35 = result[2];
          v34 = result[3];
          v4 = v37;
          v5 = (uint8_t)v37;
          goto LABEL_10;
        case 35:
        case 36:
        case 37:
          result += 256 * (uint8_t)v37 + result[4] + 7;
LABEL_23:
          v4 = *result;
          v33 = result[1];
          v5 = v4;
          v35 = result[2];
          v6 = v33;
          v34 = result[3];
          goto LABEL_10;
        case 41:
        case 42:
        case 43:
          v16 = result[8];
          result += 7;
          v4 = *result;
          v33 = v16;
          v5 = v4;
          v35 = result[2];
          v6 = v16;
          v34 = result[3];
          goto LABEL_10;
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
          v7 = v5 - 48;
          goto LABEL_6;
        case 80:
          v7 = (uint8_t)v6;
          goto LABEL_6;
        case 81:
          v7 = v36 + ((uint8_t)v6 << 8);
          goto LABEL_6;
        case 82:
          v7 = (uint8_t)v37 + (v36 << 8) + ((uint8_t)v6 << 16);
          goto LABEL_6;
        case 83:
          v7 = ((uint8_t)v37 << 8) + result[4] + (v36 << 16) + (v6 << 24);
LABEL_6:
          v8 = *a2 + v7;
          v9 = *a1;
          result = *((uint8_t **)*a1 + 1);
          if ( result == (uint8_t *)(*((uint32_t *)*a1 + 2) & 0x3FFFFFFF) )
          {
            v37 = v8;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v9, 4, v31[3]);
            result = *((uint8_t **)v9 + 1);
            v8 = v37;
          }
          v10 = *(uint32_t *)v9;
          *((uint32_t *)v9 + 1) = (uint32_t)(uintptr_t)(result + 1);
          *(uint32_t *)(v10 + 4 * (uint32_t)(uintptr_t)(result)) = v8;
          return result;
        case 96:
        case 97:
        case 98:
        case 99:
          result += 2;
          v17 = v37;
          v31[v5 - 87] = (uint8_t)v6;
          v33 = v17;
          v4 = v36;
          break;
        case 100:
        case 101:
        case 102:
        case 103:
          result += 3;
          v33 = result[1];
          v31[v5 - 91] = v36 + ((uint8_t)v6 << 8);
          v4 = v37;
          break;
        case 104:
        case 105:
        case 106:
        case 107:
          result += 5;
          v4 = *result;
          v31[v5 - 95] = *(result - 1) + (v36 << 16) + (v6 << 24) + ((uint8_t)v37 << 8);
          v33 = result[1];
          break;
        default:
          abort();
      }
      v13 = v32;
      v14 = v39;
      if ( a2 != v32 )
      {
        v15 = *a2;
        v39 = a2[1];
        v38 = v15;
        v13 = v32;
      }
      v39 = v14;
      a2 = v13;
      v5 = v4;
      v35 = result[2];
      v6 = v33;
      v34 = result[3];
    }
LABEL_10:
    v36 = v35;
    LOBYTE(v37) = v34;
  }
}


