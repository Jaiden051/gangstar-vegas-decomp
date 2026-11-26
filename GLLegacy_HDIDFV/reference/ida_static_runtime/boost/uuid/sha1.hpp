#pragma once
// ============================================================================
// D:/RD_PROJECTS/GLLegacy_HDIDFV/jni/boost/uuid/sha1.hpp
// Reconstructed from embedded __FILE__ string at 0x66f3d in libgenerator.so
// Functions: 0x9d3c (process_block), 0x9e44 (process_byte_impl),
//            0x9e5c (process_byte), 0x9ef0 (process_bytes), 0x9f0a (get_digest)
// ============================================================================

#include <cstdint>
#include <cstddef>
#include <cstring>

// ----------------------------------------------------------------------------
// Function: boost::uuids::detail::sha1::process_block  (binary VA: 0x9d3c)
// Original: boost::uuids::detail::sha1::process_block
// ----------------------------------------------------------------------------
uint32_t * boost::uuids::detail::sha1::process_block(uint8_t *a1)
{
  int v1;
  uint8_t *v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int i;
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
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint32_t *result;
  int v25;
  uint32_t v26[2];
  int v27;
  int v28;
  uint32_t v29[81];

  v1 = 0;
  v2 = a1;
  do
  {
    v3 = v1 + 16;
    v1 += 4;
    v4 = (v2[21] << 16) | (v2[20] << 24) | v2[23];
    v5 = v2[22];
    v2 += 4;
    *(uint32_t *)((char *)v26 + v3) = v4 | (v5 << 8);
  }
  while ( v1 != 64 );
  v6 = v29;
  for ( i = 0; i != 64; ++i )
  {
    v8 = v29[i];
    v6[16] = __builtin_rotateright32(v6[8] ^ v6[13] ^ v8 ^ v6[2], 31);
    ++v6;
  }
  v9 = *(uint32_t *)a1;
  v10 = *((uint32_t *)a1 + 1);
  v11 = *((uint32_t *)a1 + 4);
  v12 = *((uint32_t *)a1 + 2);
  v13 = v10;
  v27 = *((uint32_t *)a1 + 3);
  v14 = v27;
  v28 = v11;
  v15 = v11;
  v16 = v9;
  v17 = v12;
  v18 = 0;
  v26[0] = a1;
  while ( 1 )
  {
    if ( v18 > 0x13 )
    {
      if ( v18 > 0x27 )
      {
        if ( v18 > 0x3B )
        {
          v20 = -899497514;
          v19 = v17 ^ v13 ^ v14;
        }
        else
        {
          v19 = (v14 | v17) & v13 | v14 & v17;
          v20 = -1894007588;
        }
      }
      else
      {
        v20 = 1859775393;
        v19 = v17 ^ v13 ^ v14;
      }
    }
    else
    {
      v19 = v14 & ~v13 | v17 & v13;
      v20 = 1518500249;
    }
    v21 = __builtin_rotateright32(v13, 2);
    v22 = v29[v18++];
    v23 = v20 + v15 + __builtin_rotateright32(v16, 27) + v22 + v19;
    if ( v18 == 80 )
      break;
    v15 = v14;
    v14 = v17;
    v17 = v21;
    v13 = v16;
    v16 = v23;
  }
  result = (uint32_t *)v26[0];
  *(uint32_t *)(v26[0] + 12) = v17 + v27;
  v25 = v28;
  *result = v23 + v9;
  result[1] = v16 + v10;
  result[2] = v21 + v12;
  result[4] = v14 + v25;
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::uuids::detail::sha1::process_byte_impl  (binary VA: 0x9e44)
// Original: boost::uuids::detail::sha1::process_byte_impl
// ----------------------------------------------------------------------------
uint8_t * boost::uuids::detail::sha1::process_byte_impl(uint8_t *a1, uint8_t a2)
{
  int v2;
  uint8_t *v3;

  v2 = *((uint32_t *)a1 + 21);
  v3 = &a1[v2++];
  v3[20] = a2;
  *((uint32_t *)a1 + 21) = v2;
  if ( v2 == 64 )
  {
    *((uint32_t *)a1 + 21) = 0;
    return (uint8_t *)boost::uuids::detail::sha1::process_block(a1);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: boost::uuids::detail::sha1::process_byte  (binary VA: 0x9e5c)
// Original: boost::uuids::detail::sha1::process_byte
// ----------------------------------------------------------------------------
void boost::uuids::detail::sha1::process_byte(int a1, uint8_t a2)
{
  unsigned int v3;
  int v4;
  uint8_t v5[4];
  uint8_t v6[4];
  uint8_t v7[4];
  uint8_t v8[4];
  int (**v9)(std::exception *);
  uint32_t v10[6];

  boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, a2);
  v3 = *(uint32_t *)(a1 + 88);
  if ( v3 > 0xFFFFFFF7 )
  {
    v4 = *(uint32_t *)(a1 + 92);
    *(uint32_t *)(a1 + 88) = 0;
    if ( v4 == -1 )
    {
      g4_std::string::construct_from_cstr(v6, "sha1 too many bytes", v5);
      sub_D8F4(v7, v6);
      v9 = &off_6B7C0;
      sub_39394(v10, v8);
      v10[2] = 0;
      v10[1] = &off_6B654;
      v9 = (int (**)(std::exception *))&off_6B640;
      v10[3] = "void boost::uuids::detail::sha1::process_byte(unsigned char)";
      v10[4] = "D:/RD_PROJECTS/GLLegacy_HDIDFV/jni/boost/uuid/sha1.hpp";
      v10[5] = 104;
      boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector((boost::exception_detail::error_info_injector<std::runtime_error> *)&v9);
    }
    else
    {
      *(uint32_t *)(a1 + 92) = v4 + 1;
    }
  }
  else
  {
    *(uint32_t *)(a1 + 88) = v3 + 8;
  }
}

// ----------------------------------------------------------------------------
// Function: boost::uuids::detail::sha1::process_bytes  (binary VA: 0x9ef0)
// Original: boost::uuids::detail::sha1::process_bytes
// ----------------------------------------------------------------------------
void boost::uuids::detail::sha1::process_bytes(int a1, uint8_t *a2, int a3)
{
  uint8_t *v4;
  uint8_t *i;
  uint8_t v6;

  v4 = &a2[a3];
  for ( i = a2; i != v4; ++i )
  {
    v6 = *i;
    boost::uuids::detail::sha1::process_byte(a1, v6);
  }
}

// ----------------------------------------------------------------------------
// Function: boost::uuids::detail::sha1::get_digest  (binary VA: 0x9f0a)
// Original: boost::uuids::detail::sha1::get_digest
// ----------------------------------------------------------------------------
uint8_t * boost::uuids::detail::sha1::get_digest(int a1, uint32_t *a2)
{
  uint8_t *result;

  boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, 0x80u);
  if ( *(uint32_t *)(a1 + 84) > 0x38u )
  {
    while ( *(uint32_t *)(a1 + 84) != 0 )
      boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, 0);
    while ( *(uint32_t *)(a1 + 84) <= 0x37u )
      boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, 0);
  }
  else
  {
    while ( *(uint32_t *)(a1 + 84) <= 0x37u )
      boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, 0);
  }
  boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, *(uint8_t *)(a1 + 95));
  boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, *(uint8_t *)(a1 + 94));
  boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, *(uint8_t *)(a1 + 93));
  boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, *(uint8_t *)(a1 + 92));
  boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, *(uint8_t *)(a1 + 91));
  boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, *(uint8_t *)(a1 + 90));
  boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, *(uint8_t *)(a1 + 89));
  result = boost::uuids::detail::sha1::process_byte_impl((uint8_t *)a1, *(uint8_t *)(a1 + 88));
  *a2 = *(uint32_t *)a1;
  a2[1] = *(uint32_t *)(a1 + 4);
  a2[2] = *(uint32_t *)(a1 + 8);
  a2[3] = *(uint32_t *)(a1 + 12);
  a2[4] = *(uint32_t *)(a1 + 16);
  return result;
}


