#pragma once
// ============================================================================
// D:/RD_PROJECTS/GLLegacy_HDIDFV/jni/boost/random/detail/seed_impl.hpp
// Reconstructed from embedded __FILE__ string at 0x66fa0 in libgenerator.so
// ============================================================================

#include "../../uuid/sha1.hpp"
#include <cstdio>

// ----------------------------------------------------------------------------
// Function: boost::uuids::detail::seed_rng::sha1_random_digest  (binary VA: 0x9fb4)
// Original: boost::uuids::detail::seed_rng::sha1_random_digest_
// ----------------------------------------------------------------------------
int boost::uuids::detail::seed_rng::sha1_random_digest(int a1)
{
  FILE *v2;
  int i;
  int result;
  char *v5;
  void *v6;
  uint32_t v7[3];
  uint8_t v8[20];
  uint32_t v9[5];
  uint8_t ptr[20];
  uint32_t v11[24];

  memset(&v11[21], 0, 12);
  v11[0] = 1732584193;
  v11[1] = -271733879;
  v11[2] = -1732584194;
  v11[3] = 271733878;
  v11[4] = -1009589776;
  v5 = byte_6E094;
  std::memcpy(v8, byte_6E094, sizeof(v8));
  boost::uuids::detail::sha1::process_bytes((int)v11, v8, 20);
  boost::uuids::detail::sha1::process_bytes((int)v11, (uint8_t *)&v5, 4);
  v6 = (void *)time(nullptr);
  boost::uuids::detail::sha1::process_bytes((int)v11, (uint8_t *)&v6, 4);
  v6 = (void *)clock();
  boost::uuids::detail::sha1::process_bytes((int)v11, (uint8_t *)&v6, 4);
  v7[0] = lrand48();
  v7[1] = lrand48();
  v7[2] = lrand48();
  boost::uuids::detail::sha1::process_bytes((int)v11, (uint8_t *)v7, 12);
  v2 = *(FILE **)(a1 + 24);
  if ( v2 != nullptr )
    fread(ptr, 1u, 0x14u, v2);
  boost::uuids::detail::sha1::process_bytes((int)v11, ptr, 20);
  v6 = (void *)operator new(4u);
  boost::uuids::detail::sha1::process_bytes((int)v11, (uint8_t *)v6, 4);
  boost::uuids::detail::sha1::process_bytes((int)v11, (uint8_t *)&v6, 4);
  opDelete(v6);
  boost::uuids::detail::sha1::process_bytes((int)v11, (uint8_t *)a1, 20);
  boost::uuids::detail::sha1::get_digest((int)v11, v9);
  for ( i = 0; i != 5; ++i )
  {
    result = *(uint32_t *)&v5[i * 4];
    *(uint32_t *)&v5[i * 4] = v9[i] ^ result;
    *(uint32_t *)(a1 + i * 4) ^= v9[i];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::detail::shared_count::Destroy  (binary VA: 0xa0dc)
// Original: boost::detail::shared_count::~shared_count
// ----------------------------------------------------------------------------
uint32_t ** boost::detail::shared_count::Destroy(uint32_t **a1)
{
  uint32_t *v2;
  int v3;
  int v4;

  v2 = *a1;
  if ( *a1 != nullptr )
  {
    v3 = v2[1] - 1;
    v2[1] = v3;
    if ( v3 == 0 )
    {
      G4_VCALL<void>(v2, 8);
      v4 = v2[2] - 1;
      v2[2] = v4;
      if ( v4 == 0 )
        G4_VCALL<void>(v2, 12);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_A144  (binary VA: 0xa144)
// Original: sub_A144
// ----------------------------------------------------------------------------
uint32_t ** sub_A144(int a1, int a2, uint32_t *a3)
{
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v8[2];

  v8[1] = a3;
  v8[0] = nullptr;
  v5 = (uint32_t *)operator new(0x10u);
  v5[1] = 1;
  v5[2] = 1;
  v5[3] = a2;
  *v5 = &off_6B610;
  v6 = (uint32_t *)*a3;
  *a3 = v5;
  v8[0] = v6;
  return boost::detail::shared_count::Destroy(v8);
}

// ----------------------------------------------------------------------------
// Function: sub_A178  (binary VA: 0xa178)
// Original: sub_A178
// ----------------------------------------------------------------------------
void sub_A178(int a1, int a2, int a3, int a4)
{
  void **v7;
  uint32_t v8[6];

  sub_39394(v8, a1 + 4);
  v8[2] = 0;
  v8[3] = a2;
  v8[4] = a3;
  v8[5] = a4;
  v7 = &off_6B668;
  v8[1] = &off_6B67C;
  boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector((boost::exception_detail::error_info_injector<std::invalid_argument> *)&v7);
}

// ----------------------------------------------------------------------------
// Function: sub_A1C8  (binary VA: 0xa1c8)
// Original: sub_A1C8
// ----------------------------------------------------------------------------
int sub_A1C8(int result, int a2, int a3, double *a4)
{
  double v4;
  int *v5;
  int v9;
  uint8_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  uint8_t v18[4];
  uint8_t v19[4];
  uint8_t v20[4];
  uint8_t v21[4];
  uint8_t v22[8];
  uint8_t v23[8];

  v5 = (int *)result;
  v9 = 44497;
  do
  {
    v14 = *v5;
    if ( *v5 == a2 && v5[1] == a3 )
    {
      g4_std::string::construct_from_cstr(v20, "Not enough elements in call to seed.", v18);
      sub_D87C(v22, v20);
      v10 = v22;
      v11 = 376;
LABEL_5:
      sub_A178(
        (int)v10,
        (int)"void boost::random::detail::fill_array_real(Iter&, Iter, RealType (&)[n]) [with int w = 48, unsigned int n "
             "= 44497u, Iter = boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>, RealType = double]",
        (int)"D:/RD_PROJECTS/GLLegacy_HDIDFV/jni/boost/random/detail/seed_impl.hpp",
        v11);
LABEL_6:
      result = boost::uuids::detail::seed_rng::sha1_random_digest(v14);
      *(uint32_t *)(v14 + 20) = 0;
      goto LABEL_7;
    }
    v15 = v5[1];
    if ( *(int *)(v14 + 20) > 4 )
    {
      result = boost::uuids::detail::seed_rng::sha1_random_digest(*v5);
      *(uint32_t *)(v14 + 20) = 0;
    }
    v16 = *(uint32_t *)(v14 + 20);
    v17 = *(uint32_t *)(v14 + 4 * v16);
    *(uint32_t *)(v14 + 20) = v16 + 1;
    v14 = *v5;
    v5[1] = v17;
    if ( v14 == a2 && v17 == a3 )
    {
      g4_std::string::construct_from_cstr(v21, "Not enough elements in call to seed.", v19);
      sub_D87C(v23, v21);
      v10 = v23;
      v11 = 381;
      goto LABEL_5;
    }
    v4 = (double)v15 * 3.552713678800501e-15 + 0.0 + (double)(uint16_t)v17 * 0.0000152587890625;
    if ( *(int *)(v14 + 20) > 4 )
      goto LABEL_6;
LABEL_7:
    v12 = *(uint32_t *)(v14 + 20);
    v13 = *(uint32_t *)(v14 + 4 * v12);
    --v9;
    *(uint32_t *)(v14 + 20) = v12 + 1;
    v5[1] = v13;
    *a4++ = v4;
  }
  while ( v9 != 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::random::lagged_fibonacci607::seed  (binary VA: 0xa2f8)
// Original: boost::random::lagged_fibonacci607::seed
// ----------------------------------------------------------------------------
FILE * boost::random::lagged_fibonacci607::seed(int a1)
{
  int v2;
  FILE *result;
  uint32_t v4[4];
  uint32_t v5[5];
  int v6;
  FILE *stream;

  v6 = 5;
  stream = fopen("/dev/urandom", "rb");
  v4[0] = v5;
  boost::uuids::detail::seed_rng::sha1_random_digest((int)v5);
  v6 = 0;
  v2 = v5[v6++];
  v4[2] = 0;
  v4[1] = v2;
  v4[3] = 0;
  sub_A1C8((int)v4, 0, 0, (double *)(a1 + 8));
  result = stream;
  *(uint32_t *)a1 = 44497;
  if ( result != nullptr )
    return (FILE *)fclose(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_A528  (binary VA: 0xa528)
// Original: sub_A528
// ----------------------------------------------------------------------------
unsigned int sub_A528(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v3;
  int v4;

  v3 = a2;
  v4 = a3;
  if ( a1 != 0 )
  {
    if ( ~a3 / a1 <= 0x7FFFFFFE )
    {
      if ( a1 != 1 )
      {
        if ( 0xFFFFFFFF / a1 <= 0x7FFFFFFE )
          v3 = a2 * (uint64_t)a1 % 0x7FFFFFFF;
        else
          v3 = a1 * a2 % 0x7FFFFFFF;
      }
      if ( a3 != 0 )
      {
        if ( v3 >= 0x7FFFFFFF - a3 )
          v4 = a3 - 0x7FFFFFFF;
        v4 += v3;
      }
      else
      {
        return v3;
      }
    }
    else
    {
      return (a3 + a1 * a2) % 0x7FFFFFFF;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_A5A8  (binary VA: 0xa5a8)
// Original: sub_A5A8
// ----------------------------------------------------------------------------
uint8_t * sub_A5A8(unsigned int **a1, double *a2)
{
  int i;
  unsigned int *v5;
  unsigned int v6;
  int j;
  double v8;
  uint8_t *result;
  uint8_t *v10;
  uint8_t v11[355976];

  for ( i = 0; i != 355976; i += 4 )
  {
    v5 = *a1;
    v6 = sub_A528(0x41A7u, **a1, 0);
    *(uint32_t *)&v11[i] = v6;
    *v5 = v6;
  }
  for ( j = 0; j != 355976; j += 8 )
  {
    v8 = (double)*(unsigned int *)&v11[j];
    result = v11;
    v10 = &v11[j];
    *a2++ = v8 * 3.552713678800501e-15 + 0.0 + (double)*((uint16_t *)v10 + 2) * 0.0000152587890625;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::uuids::random_generator::Construct  (binary VA: 0xa650)
// Original: boost::uuids::random_generator::random_generator
// ----------------------------------------------------------------------------
int * boost::uuids::random_generator::Construct(int *a1)
{
  int v2;
  int v3;
  int v5;
  unsigned int *v6[2];

  v5 = 331;
  v6[0] = (unsigned int *)&v5;
  v2 = operator new(0x56E90u);
  sub_A5A8(v6, (double *)(v2 + 8));
  *(uint32_t *)v2 = 44497;
  *a1 = v2;
  a1[1] = 0;
  sub_A144((int)a1, v2, a1 + 1);
  v3 = *a1;
  v6[0] = nullptr;
  v6[1] = (unsigned int *)-1;
  a1[2] = v3;
  a1[3] = 0;
  a1[4] = -1;
  boost::random::lagged_fibonacci607::seed(v3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: boost::random::lagged_fibonacci607::fill  (binary VA: 0xa6b8)
// Original: boost::random::lagged_fibonacci607::fill
// ----------------------------------------------------------------------------
double * boost::random::lagged_fibonacci607::fill(double *result)
{
  int v1;
  double *v2;
  double v3;
  double *v4;
  double v5;
  double v6;

  v1 = 0;
  v2 = result;
  do
  {
    ++v2;
    v3 = *v2 + v2[23463];
    if ( v3 >= 1.0 )
      v3 = v3 - 1.0;
    ++v1;
    *v2 = v3;
  }
  while ( v1 != 21034 );
  v4 = result + 21035;
  do
  {
    v5 = *v4++;
    v6 = v5 + *(v4 - 21035);
    if ( v6 >= 1.0 )
      v6 = v6 - 1.0;
    ++v1;
    *(v4 - 1) = v6;
  }
  while ( v1 != 44497 );
  *(uint32_t *)result = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: boost::random::lagged_fibonacci607::op_call  (binary VA: 0xa740)
// Original: boost::random::lagged_fibonacci607::operator_call
// ----------------------------------------------------------------------------
uint64_t boost::random::lagged_fibonacci607::op_call(double **a1)
{
  double *v1;
  int v2;
  double v3;

  v1 = *a1;
  if ( *(uint32_t *)*a1 > 0xADD0u )
    boost::random::lagged_fibonacci607::fill(*a1);
  v2 = *(uint32_t *)v1 + 1;
  v3 = v1[v2] * 281474976710656.0;
  *(uint32_t *)v1 = v2;
  return (uint64_t)v3;
}

// ----------------------------------------------------------------------------
// Function: boost::random::uniform_int_distribution::op_call  (binary VA: 0xa780)
// Original: boost::random::uniform_int_distribution::operator_call
// ----------------------------------------------------------------------------
int boost::random::uniform_int_distribution::op_call(double **a1, int a2, int a3)
{
  unsigned int v3;
  int v5;
  uint64_t v6;
  uint64_t v7;
  uint64_t v8;

  v3 = a3 - a2;
  v5 = a2;
  if ( v3 != 0 )
  {
    v6 = v3;
    v7 = 0x1000000000000LL / ((uint64_t)v3 + 1);
    do
      v8 = boost::random::lagged_fibonacci607::op_call(a1) / v7;
    while ( v6 < v8 );
    v5 += v8;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: boost::uuids::random_generator::op_call  (binary VA: 0xa7ce)
// Original: boost::uuids::random_generator::operator_call
// ----------------------------------------------------------------------------
uint8_t * boost::uuids::random_generator::op_call(uint8_t *a1, int a2)
{
  double *v3;
  int v5;
  int v6;
  uint8_t *v7;
  uint8_t *v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  char v13;
  double *v15;

  v15 = (double *)a2;
  v3 = *(double **)(a2 + 8);
  v5 = *(uint32_t *)(a2 + 12);
  v6 = *(uint32_t *)(a2 + 16);
  v7 = a1;
  v15 = v3;
  v8 = a1 + 16;
  v9 = boost::random::uniform_int_distribution::op_call(&v15, v5, v6);
  v10 = 0;
  while ( 1 )
  {
    v13 = 8 * v10++;
    *v7++ = v9 >> v13;
    if ( v7 == v8 )
      break;
    if ( v10 == 4 )
    {
      v11 = *(uint32_t *)(a2 + 12);
      v12 = *(uint32_t *)(a2 + 16);
      v15 = *(double **)(a2 + 8);
      v9 = boost::random::uniform_int_distribution::op_call(&v15, v11, v12);
      v10 = 0;
    }
  }
  a1[8] = a1[8] & 0x3F | 0x80;
  a1[6] = a1[6] & 0xF | 0x40;
  return a1;
}


