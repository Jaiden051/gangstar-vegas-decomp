#include "Core/Utils/DecompTypes.h"
#include "popuplib_internal.h"

// ----------------------------------------------------------------------------
// Function: g4_std::vector_iap_Rule_Action_glwebtoo_4daa0c::opAssign  (binary VA: 0x15365e0)
// Original: std::vector<iap::Rule::Action,glwebtools::SAllocator<iap::Rule::Action,(glwebtools::MemHint)4>>::operator=
// ----------------------------------------------------------------------------
std::vector<iap::Rule::Action::Self, glwebtools::SAllocator<iap::Rule::Action::Self, (glwebtools::MemHint)4>> * g4_std::vector_iap_Rule_Action_glwebtoo_4daa0c::opAssign(std::vector<iap::Rule::Action::Self, glwebtools::SAllocator<iap::Rule::Action::Self, (glwebtools::MemHint)4>> *self, const std::vector<iap::Rule::Action::Self, glwebtools::SAllocator<iap::Rule::Action::Self, (glwebtools::MemHint)4>> *a2)
{
  std::vector<iap::Rule::Action::Self, glwebtools::SAllocator<iap::Rule::Action::Self, (glwebtools::MemHint)4>> *result;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  std::vector<iap::Rule::Action::Self, glwebtools::SAllocator<iap::Rule::Action::Self, (glwebtools::MemHint)4>> *v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  char *v19;
  int v20;
  uint32_t *v21;
  unsigned int v22;
  int v23;
  int v24;
  uint32_t *v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  char *v31;
  char *v32;
  int v33;
  int v34;
  uint32_t *v35;
  int v36;
  int v37;
  char *v38;

  result = self;
  if ( a2 != self )
  {
    v3 = *(char **)self;
    v4 = *((uint32_t *)a2 + 1);
    v5 = *(uint32_t *)a2;
    v34 = (v4 - *(uint32_t *)a2) >> 3;
    if ( v34 <= (unsigned int)((*((uint32_t *)self + 2) - *(uint32_t *)self) >> 3) )
    {
      v14 = *((char **)self + 1);
      v15 = (v14 - v3) >> 3;
      if ( v34 > (unsigned int)v15 )
      {
        v22 = v5 + 8 * v15;
        if ( v15 > 0 )
        {
          v23 = (*((uint32_t *)self + 1) - (int)(uintptr_t)(v3)) >> 3;
          do
          {
            g4_std::string::assign_str(v3, v5);
            v24 = v5 + 4;
            v5 += 8;
            v29 = v24;
            v25 = (uint32_t *)(v3 + 4);
            v3 += 8;
            g4_std::string::assign_str(v25, v29);
            --v23;
          }
          while ( v23 != 0 );
          v14 = *((char **)self + 1);
          v3 = *(char **)self;
          v4 = *((uint32_t *)a2 + 1);
          v22 = *(uint32_t *)a2 + ((unsigned int)(uintptr_t)(&v14[-*(uint32_t *)self]) & 0xFFFFFFF8);
        }
        if ( v4 == v22 )
        {
          v13 = (int)(uintptr_t)(&v3[8 * v34]);
          v12 = self;
        }
        else
        {
          v26 = v22;
          v27 = v4;
          do
          {
            if ( v14 != nullptr )
            {
              g4_std::string::construct_copy(v14, v26);
              g4_std::string::construct_copy(v14 + 4, v26 + 4);
            }
            v26 += 8;
            v14 += 8;
          }
          while ( v26 != v27 );
          v12 = self;
          v13 = *(uint32_t *)self + 8 * v34;
        }
      }
      else
      {
        if ( v34 > 0 )
        {
          v38 = *((char **)self + 1);
          v33 = *(uint32_t *)self;
          v16 = (*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 3;
          do
          {
            g4_std::string::assign_str(v3, v5);
            v17 = v5 + 4;
            v5 += 8;
            v28 = v17;
            v18 = (uint32_t *)(v3 + 4);
            v3 += 8;
            g4_std::string::assign_str(v18, v28);
            --v16;
          }
          while ( v16 != 0 );
          v14 = v38;
          v3 = (char *)(v33 + 8 * v34);
        }
        if ( v14 != v3 )
        {
          v19 = v3;
          do
          {
            v20 = *((uint32_t *)v19 + 1);
            if ( (uint32_t *)(v20 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
            {
              v31 = v19;
              g4_std::string::Rep::M_destroy((void *)(v20 - 12));
              v19 = v31;
            }
            v21 = (uint32_t *)(*(uint32_t *)v19 - 12);
            if ( v21 != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v19 - 4), 0xFFFFFFFF) <= 0 )
            {
              v32 = v19;
              g4_std::string::Rep::M_destroy(v21);
              v19 = v32;
            }
            v19 += 8;
          }
          while ( v14 != v19 );
        }
        v12 = self;
        v13 = *(uint32_t *)self + 8 * v34;
      }
    }
    else
    {
      v37 = 0;
      v36 = 0;
      if ( v34 != 0 )
      {
        v30 = *((uint32_t *)a2 + 1);
        v37 = 8 * v34;
        v36 = sub_4EBE70(8 * v34, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        v4 = v30;
      }
      if ( v5 != v4 )
      {
        v6 = v36;
        v7 = v4;
        do
        {
          if ( v6 != 0 )
          {
            g4_std::string::construct_copy(v6, v5);
            g4_std::string::construct_copy(v6 + 4, v5 + 4);
          }
          v5 += 8;
          v6 += 8;
        }
        while ( v7 != v5 );
      }
      v35 = *((uint32_t **)self + 1);
      v8 = *(uint32_t *)self;
      if ( v35 != *(uint32_t **)self )
      {
        v9 = *(uint32_t **)self;
        do
        {
          v10 = v9[1];
          if ( (uint32_t *)(v10 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v10 - 12));
          }
          v11 = (uint32_t *)(*v9 - 12);
          if ( v11 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v9 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v11);
          v9 += 2;
        }
        while ( v35 != v9 );
        v8 = *(uint32_t *)self;
      }
      if ( v8 != 0 )
        sub_4EBEE0(v8);
      v12 = self;
      *(uint32_t *)self = v36;
      v13 = v36 + v37;
      *((uint32_t *)self + 2) = v36 + v37;
    }
    *((uint32_t *)v12 + 1) = v13;
    return v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1536980  (binary VA: 0x1536980)
// Original: sub_1536980
// ----------------------------------------------------------------------------
int sub_1536980()
{
  sub_1900D70(&unk_211A3F0);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3F0, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_1537CA0  (binary VA: 0x1537ca0)
// Original: sub_1537CA0
// ----------------------------------------------------------------------------
int sub_1537CA0()
{
  sub_1900D70(&unk_211A3F4);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A3F4, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_1539B40  (binary VA: 0x1539b40)
// Original: sub_1539B40
// ----------------------------------------------------------------------------
int sub_1539B40()
{
  sub_1900D70(&unk_211A404);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A404, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_153A710  (binary VA: 0x153a710)
// Original: sub_153A710
// ----------------------------------------------------------------------------
int sub_153A710()
{
  sub_1900D70(&unk_211A408);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A408, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_153B6B0  (binary VA: 0x153b6b0)
// Original: sub_153B6B0
// ----------------------------------------------------------------------------
int sub_153B6B0()
{
  sub_1900D70(&unk_211A40C);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A40C, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_153BFA0  (binary VA: 0x153bfa0)
// Original: sub_153BFA0
// ----------------------------------------------------------------------------
int sub_153BFA0()
{
  sub_1900D70(&unk_211A414);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A414, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_oi_ItemPrice_glwebtools_d78ead::M_insert_aux  (binary VA: 0x153d5d0)
// Original: std::vector<oi::ItemPrice,glwebtools::SAllocator<oi::ItemPrice,(glwebtools::MemHint)4>>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_oi_ItemPrice_glwebtools_d78ead::M_insert_aux(int *a1, int a2, int a3)
{
  int v3;
  int64_t v4; // xmm0_8
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  bool v12;
  char v13;
  uint32_t *v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  uint32_t *v26;
  int v27;
  unsigned int v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t (**_g4_t_v40)(oi::ItemPrice::Self *, const glwebtools::JsonReader::Self *);
  typedef uint32_t *_g4_t_v41;
  typedef char _g4_t_v42;
  typedef int64_t _g4_t_v43 __attribute__((aligned(1)));
  typedef char _g4_t_v44;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v29)) > _g4_s0 ? (0u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v30)) > _g4_s1 ? (44u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v31)) > _g4_s2 ? (48u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v32)) > _g4_s3 ? (56u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v33)) > _g4_s4 ? (60u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v34)) > _g4_s5 ? (64u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v35)) > _g4_s6 ? (64u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v36)) > _g4_s7 ? (72u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v37)) > _g4_s8 ? (72u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v38)) > _g4_s9 ? (76u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v39)) > _g4_s10 ? (76u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v40)) > _g4_s11 ? (80u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v41)) > _g4_s12 ? (84u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (90u + sizeof(_g4_t_v42)) > _g4_s13 ? (90u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v43)) > _g4_s14 ? (92u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (102u + sizeof(_g4_t_v44)) > _g4_s15 ? (102u + sizeof(_g4_t_v44)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 84u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 90u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 92u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 102u);

  v3 = a1[1];
  if ( v3 != a1[2] )
  {
    if ( v3 != 0 )
    {
      *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_2096708);
      *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
      g4_std::string::assign_str(v3 + 4, v3 - 20);
      *(uint8_t *)(v3 + 10) = *(uint8_t *)(v3 - 14);
      v4 = *(uint64_t *)(v3 - 12);
      *(uint8_t *)(v3 + 22) = *(uint8_t *)(v3 - 2);
      *(uint64_t *)(v3 + 12) = v4;
      v5 = a1;
      v6 = a1[1];
    }
    else
    {
      v6 = 0;
      v5 = a1;
    }
    v5[1] = v6 + 24;
    v40 = (uint32_t (**)(oi::ItemPrice::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2096708));
    v41 = &dword_213B814;
    g4_std::string::assign_str(&v41, a3 + 4);
    v7 = v5[1];
    v42 = *(uint8_t *)(a3 + 10);
    v36 = v7;
    v44 = *(uint8_t *)(a3 + 22);
    v43 = *(uint64_t *)(a3 + 12);
    v38 = -1431655765 * ((v7 - 48 - a2) >> 3);
    if ( v38 > 0 )
    {
      v34 = v7 - 44;
      v8 = v7 - 24;
      v9 = v7 - 68;
      while ( 1 )
      {
        v10 = v8 - 24;
        g4_std::string::assign_str(v8 - 20, v8 - 44);
        v11 = v10 - v36;
        v12 = v38-- == 1;
        *(uint8_t *)(v11 + v34 + 54) = *(uint8_t *)(v10 - v36 + v9 + 54);
        *(uint64_t *)(v10 + 12) = *(uint64_t *)(v10 - 12);
        *(uint8_t *)(v11 + v36 - 36 + 58) = *(uint8_t *)(v10 - 60 + 58);
        if ( v12 )
          break;
        v8 = v10;
      }
    }
    g4_std::string::assign_str(a2 + 4, &v41);
    v13 = v42;
    *(uint64_t *)(a2 + 12) = v43;
    *(uint8_t *)(a2 + 10) = v13;
    *(uint8_t *)(a2 + 22) = v44;
    oi::ItemPrice::Destroy((oi::ItemPrice::Self *)&v40);
    return;
  }
  v14 = (uint32_t *)*a1;
  v15 = -1431655765 * ((v3 - *a1) >> 3);
  if ( v15 != 0 )
  {
    v28 = 2 * v15;
    if ( v15 > 2 * v15 || v28 > 0xAAAAAAA )
    {
      v32 = 0xFFFFFFF0;
      v16 = -1431655765 * ((a2 - (int)(uintptr_t)(v14)) >> 3);
      v17 = sub_4EBE70(0xFFFFFFF0, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      goto LABEL_12;
    }
    v32 = 48 * v15;
    v16 = -1431655765 * ((a2 - (int)(uintptr_t)(v14)) >> 3);
    if ( v28 == 0 )
    {
      v39 = 0;
      v18 = 24;
      v19 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v32 = 24;
    v16 = -1431655765 * ((a2 - (int)(uintptr_t)(v14)) >> 3);
  }
  v17 = sub_4EBE70(v32, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
LABEL_12:
  v39 = v17;
  v18 = v17 + 24;
  v19 = v17;
LABEL_13:
  v20 = v19 + 24 * v16;
  if ( v20 != 0 )
  {
    *(uint32_t *)v20 = ((uint32_t)(uintptr_t)&off_2096708);
    *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
    v31 = v18;
    g4_std::string::assign_str(v20 + 4, a3 + 4);
    *(uint8_t *)(v20 + 10) = *(uint8_t *)(a3 + 10);
    *(uint64_t *)(v20 + 12) = *(uint64_t *)(a3 + 12);
    *(uint8_t *)(v20 + 22) = *(uint8_t *)(a3 + 22);
    v18 = v31;
  }
  v21 = a1;
  if ( *a1 != a2 )
  {
    v22 = *a1;
    v23 = v39;
    do
    {
      if ( v23 != 0 )
      {
        v35 = v23 - v39;
        *(uint32_t *)v23 = ((uint32_t)(uintptr_t)&off_2096708);
        *(uint32_t *)(v23 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v23 + 4, v22 + 4);
        *(uint8_t *)(v35 + v39 + 4 + 6) = *(uint8_t *)(v22 + 10);
        *(uint64_t *)(v23 + 12) = *(uint64_t *)(v22 + 12);
        *(uint8_t *)(v39 + v35 + 22) = *(uint8_t *)(v22 + 22);
      }
      v22 += 24;
      v23 += 24;
    }
    while ( v22 != a2 );
    v18 = v23 + 24;
    v21 = a1;
  }
  v33 = (uint32_t *)v21[1];
  v24 = v18;
  if ( v33 != (uint32_t *)a2 )
  {
    v25 = a2;
    v30 = v18;
    do
    {
      if ( v24 != 0 )
      {
        *(uint32_t *)(v24 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
        *(uint32_t *)v24 = ((uint32_t)(uintptr_t)&off_2096708);
        v37 = v24 - v30;
        g4_std::string::assign_str(v24 + 4, v25 + 4);
        *(uint8_t *)(v37 + v30 + 4 + 6) = *(uint8_t *)(v25 + 10);
        *(uint64_t *)(v24 + 12) = *(uint64_t *)(v25 + 12);
        *(uint8_t *)(v30 + v37 + 22) = *(uint8_t *)(v25 + 22);
      }
      v24 += 24;
      v25 += 24;
    }
    while ( v33 != (uint32_t *)v25 );
    v33 = (uint32_t *)a1[1];
  }
  v26 = (uint32_t *)*a1;
  if ( (uint32_t *)*a1 != v33 )
  {
    do
    {
      v27 = *v26;
      v29 = v26;
      v26 += 6;
      (*(void (**)(uint32_t *))(v27 + 16))(v29);
    }
    while ( v33 != v26 );
    v26 = (uint32_t *)*a1;
  }
  if ( v26 != nullptr )
    sub_4EBEE0((int)(uintptr_t)(v26));
  *a1 = v39;
  a1[1] = v24;
  a1[2] = v32 + v39;
}

// ----------------------------------------------------------------------------
// Function: sub_153DA80  (binary VA: 0x153da80)
// Original: sub_153DA80
// ----------------------------------------------------------------------------
int sub_153DA80()
{
  sub_1900D70(&unk_211A418);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A418, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_153E1D0  (binary VA: 0x153e1d0)
// Original: sub_153E1D0
// ----------------------------------------------------------------------------
int sub_153E1D0()
{
  sub_1900D70(&unk_211A41C);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A41C, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_string_glwebtools_SAlloc_a09d9d::M_insert_aux  (binary VA: 0x1540280)
// Original: std::vector<std::string,glwebtools::SAllocator<std::string,(glwebtools::MemHint)4>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_string_glwebtools_SAlloc_a09d9d::M_insert_aux(int *a1, uint32_t *a2, int a3)
{
  int *v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int i;
  int v11;
  int result;
  void *v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  int v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  typedef int _g4_t_v28;
  typedef int *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t _g4_t_v33[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v29)) > _g4_s1 ? (4u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v30)) > _g4_s2 ? (4u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v31)) > _g4_s3 ? (8u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v32)) > _g4_s4 ? (12u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v33)) > _g4_s5 ? (28u + sizeof(_g4_t_v33)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);

  v3 = a1;
  v4 = a2;
  v5 = a1[1];
  if ( v5 != a1[2] )
  {
    v6 = 0;
    if ( v5 != 0 )
    {
      g4_std::string::construct_copy(a1[1], v5 - 4);
      v6 = a1[1];
    }
    a1[1] = v6 + 4;
    g4_std::string::construct_copy(v33, a3);
    v7 = a1[1];
    v8 = (v7 - 8 - (int)(uintptr_t)(a2)) >> 2;
    if ( v8 > 0 )
    {
      v9 = v7 - 4;
      for ( i = v8; i != 0; --i )
      {
        v11 = v9 - 8;
        v9 -= 4;
        g4_std::string::assign_str(v9, v11);
      }
      v4 = a2;
    }
    g4_std::string::assign_str(v4, v33);
    result = v33[0];
    v13 = (void *)(v33[0] - 12);
    if ( (uint32_t *)(v33[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v13); return 0; }
    }
    return result;
  }
  v14 = *a1;
  v15 = (v5 - *a1) >> 2;
  if ( v15 != 0 )
  {
    v16 = 2 * v15;
    if ( v15 > 2 * v15 || v16 > 0x3FFFFFFF )
    {
      v32 = -4;
      v17 = ((int)(uintptr_t)(a2) - v14) >> 2;
    }
    else
    {
      v32 = 8 * v15;
      v17 = ((int)(uintptr_t)(a2) - v14) >> 2;
      if ( v16 == 0 )
      {
        v31 = 0;
        v18 = 4;
        v19 = 0;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v32 = 4;
    v17 = ((int)(uintptr_t)(a2) - v14) >> 2;
  }
  v28 = v17;
  v31 = sub_4EBE70(v32, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  v18 = v31 + 4;
  v17 = v28;
  v19 = v31;
LABEL_14:
  v20 = v19 + 4 * v17;
  if ( v20 != 0 )
    g4_std::string::construct_copy(v20, a3);
  if ( (uint32_t *)*a1 != a2 )
  {
    v21 = v31;
    v22 = (uint32_t *)*a1;
    do
    {
      if ( v21 != 0 )
        g4_std::string::construct_copy(v21, v22);
      ++v22;
      v21 += 4;
    }
    while ( v22 != a2 );
    v3 = a1;
    v18 = v21 + 4;
  }
  v23 = (uint32_t *)v3[1];
  if ( v23 != a2 )
  {
    v29 = v3;
    v24 = v3[1];
    do
    {
      if ( v18 != 0 )
        g4_std::string::construct_copy(v18, v4);
      ++v4;
      v18 += 4;
    }
    while ( (uint32_t *)v24 != v4 );
    v3 = v29;
    v23 = (uint32_t *)v29[1];
  }
  v25 = (uint32_t *)*v3;
  if ( (uint32_t *)*v3 != v23 )
  {
    v30 = v18;
    v26 = v23;
    do
    {
      v27 = (uint32_t *)(*v25 - 12);
      if ( v27 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v25 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v27);
      ++v25;
    }
    while ( v26 != v25 );
    v18 = v30;
    v25 = (uint32_t *)*v3;
  }
  if ( v25 != nullptr )
    sub_4EBEE0((int)(uintptr_t)(v25));
  v3[1] = v18;
  *v3 = v31;
  v3[2] = v32 + v31;
  return v32 + v31;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_oi_ItemPrice_glwebtools_d78ead::opAssign  (binary VA: 0x1540a60)
// Original: std::vector<oi::ItemPrice,glwebtools::SAllocator<oi::ItemPrice,(glwebtools::MemHint)4>>::operator=
// ----------------------------------------------------------------------------
std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> * g4_std::vector_oi_ItemPrice_glwebtools_d78ead::opAssign(std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *self, const std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *a2)
{
  std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *result;
  int v3;
  int v4;
  size_t v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int v10;
  int v11;
  std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *v12;
  int v13;
  int v14;
  int v15;
  size_t v16;
  int64_t v17; // xmm0_8
  bool v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  size_t v23;
  int64_t v24; // xmm0_8
  unsigned int v25;
  int v26;
  size_t v27;
  size_t v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  size_t v34;
  size_t v35;
  int v36;
  int v37;
  int v38;
  size_t v39;
  size_t v40;
  size_t v41;
  int v42;
  int v43;
  int v44;

  result = self;
  if ( a2 != self )
  {
    v3 = *(uint32_t *)a2;
    v33 = *((uint32_t *)a2 + 1);
    v4 = (v33 - *(uint32_t *)a2) >> 3;
    v5 = *(uint32_t *)self;
    v36 = -1431655765 * v4;
    v29 = -1431655765 * v4;
    if ( -1431655765 * v4 > (unsigned int)(-1431655765 * ((*((uint32_t *)self + 2) - *(uint32_t *)self) >> 3)) )
    {
      v39 = 0;
      v37 = 0;
      if ( v36 != 0 )
      {
        v39 = 8 * v4;
        v37 = sub_4EBE70(8 * v4, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      }
      if ( v3 != v33 )
      {
        v6 = v3;
        v7 = v37;
        do
        {
          if ( v7 != 0 )
          {
            v30 = v7 - v37;
            *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_2096708);
            *(uint32_t *)(v7 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v7 + 4, v6 + 4);
            *(uint8_t *)(v30 + v37 + 4 + 6) = *(uint8_t *)(v6 + 10);
            *(uint64_t *)(v7 + 12) = *(uint64_t *)(v6 + 12);
            *(uint8_t *)(v30 + v37 + 22) = *(uint8_t *)(v6 + 22);
          }
          v6 += 24;
          v7 += 24;
        }
        while ( v33 != v6 );
      }
      v8 = *((int **)self + 1);
      v9 = *(int **)self;
      if ( v8 != *(int **)self )
      {
        do
        {
          v10 = *v9;
          v27 = (size_t)v9;
          v9 += 6;
          (*(void (**)(size_t))(v10 + 16))(v27);
        }
        while ( v8 != v9 );
        v9 = *(int **)self;
      }
      if ( v9 != nullptr )
        sub_4EBEE0((int)(uintptr_t)(v9));
      *(uint32_t *)self = v37;
      v11 = v37 + v39;
      v12 = self;
      *((uint32_t *)self + 2) = v37 + v39;
      goto LABEL_16;
    }
    v43 = *((uint32_t *)self + 1);
    v13 = (int)(v43 - v5) >> 3;
    if ( v36 > (unsigned int)(-1431655765 * v13) )
    {
      v20 = v3 + 8 * v13;
      v31 = -1431655765 * v13;
      if ( -1431655765 * v13 > 0 )
      {
        v21 = *(uint32_t *)a2;
        v41 = v5 + 4;
        v44 = *(uint32_t *)self;
        v35 = v5 + 12;
        do
        {
          g4_std::string::assign_str(v5 + 4, v21 + 4);
          v22 = v21 - v3;
          v23 = v5 - v44;
          *(uint8_t *)(v23 + v41 + 6) = *(uint8_t *)(v21 + 10);
          v24 = *(uint64_t *)(v21 + 12);
          v21 += 24;
          *(uint64_t *)(v5 + 12) = v24;
          v5 += 24;
          v18 = v31-- == 1;
          *(uint8_t *)(v23 + v35 + 10) = *(uint8_t *)(v22 + v3 + 12 + 10);
        }
        while ( !v18 );
        v43 = *((uint32_t *)self + 1);
        v33 = *((uint32_t *)a2 + 1);
        v5 = *(uint32_t *)self;
        v20 = *(uint32_t *)a2 + ((v43 - *(uint32_t *)self) & 0xFFFFFFF8);
      }
      v25 = v20;
      v26 = v43;
      if ( v33 == v20 )
      {
        v12 = self;
        v11 = v5 + 24 * v36;
        goto LABEL_16;
      }
      do
      {
        if ( v26 != 0 )
        {
          v32 = v26 - v43;
          *(uint32_t *)v26 = ((uint32_t)(uintptr_t)&off_2096708);
          *(uint32_t *)(v26 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v26 + 4, v25 + 4);
          *(uint8_t *)(v32 + v43 + 4 + 6) = *(uint8_t *)(v25 + 10);
          *(uint64_t *)(v26 + 12) = *(uint64_t *)(v25 + 12);
          *(uint8_t *)(v43 + v32 + 22) = *(uint8_t *)(v25 + 22);
        }
        v25 += 24;
        v26 += 24;
      }
      while ( v25 != v33 );
    }
    else
    {
      if ( v36 > 0 )
      {
        v14 = *(uint32_t *)a2;
        v42 = *(uint32_t *)a2;
        v40 = v5 + 4;
        v38 = *(uint32_t *)self;
        v34 = v5 + 12;
        do
        {
          g4_std::string::assign_str(v5 + 4, v14 + 4);
          v15 = v14 - v42;
          v16 = v5 - v38;
          *(uint8_t *)(v16 + v40 + 6) = *(uint8_t *)(v14 - v42 + v3 + 4 + 6);
          v17 = *(uint64_t *)(v14 + 12);
          v14 += 24;
          *(uint64_t *)(v5 + 12) = v17;
          v5 += 24;
          v18 = v29-- == 1;
          *(uint8_t *)(v16 + v34 + 10) = *(uint8_t *)(v15 + v3 + 12 + 10);
        }
        while ( !v18 );
        v5 = v38 + 24 * v36;
      }
      if ( v43 != v5 )
      {
        do
        {
          v19 = *(uint32_t *)v5;
          v28 = v5;
          v5 += 24;
          (*(void (**)(size_t))(v19 + 16))(v28);
        }
        while ( v43 != v5 );
        v12 = self;
        v11 = *(uint32_t *)self + 24 * v36;
        goto LABEL_16;
      }
    }
    v12 = self;
    v11 = *(uint32_t *)self + 24 * v36;
LABEL_16:
    *((uint32_t *)v12 + 1) = v11;
    return v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_1541C50  (binary VA: 0x1541c50)
// Original: sub_1541C50
// ----------------------------------------------------------------------------
int sub_1541C50()
{
  sub_1900D70(&unk_211A420);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211A420, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_oi_BillingMethod_glwebto_98e51d::M_insert_aux  (binary VA: 0x1544330)
// Original: std::vector<oi::BillingMethod,glwebtools::SAllocator<oi::BillingMethod,(glwebtools::MemHint)4>>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_oi_BillingMethod_glwebto_98e51d::M_insert_aux(uint32_t *a1, uint8_t *a2, int a3)
{
  uint32_t *v3;
  int v4;
  char v5;
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
  uint32_t *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int i;
  uint32_t *v33;
  unsigned int v34;
  int v35;
  int v36;
  int v37;
  bool v38;
  uint32_t *v39;
  char v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  uint32_t *v72;
  int v73;
  typedef uint32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef size_t _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint8_t *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef uint32_t *_g4_t_v87;
  typedef uint32_t *_g4_t_v88;
  typedef char *_g4_t_v89;
  typedef uint32_t *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef uint8_t *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef char *_g4_t_v107;
  typedef char *_g4_t_v108;
  typedef uint32_t *_g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef uint32_t *_g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef uint32_t (**_g4_t_v124)(oi::BillingMethod::Self *, const glwebtools::JsonReader::Self *);
  typedef uint32_t *_g4_t_v125;
  typedef char _g4_t_v126;
  typedef uint32_t *_g4_t_v127;
  typedef char _g4_t_v128;
  typedef uint32_t (**_g4_t_v129)(oi::ItemPriceArray::Self *, const glwebtools::JsonReader::Self *);
  typedef uint32_t _g4_t_v130[4];
  typedef uint32_t _g4_t_v131[9];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v74)) > _g4_s0 ? (0u + sizeof(_g4_t_v74)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v75)) > _g4_s1 ? (60u + sizeof(_g4_t_v75)) : _g4_s1,
    _g4_s3 = (72u + sizeof(_g4_t_v76)) > _g4_s2 ? (72u + sizeof(_g4_t_v76)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v77)) > _g4_s3 ? (76u + sizeof(_g4_t_v77)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v78)) > _g4_s4 ? (76u + sizeof(_g4_t_v78)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v79)) > _g4_s5 ? (80u + sizeof(_g4_t_v79)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v80)) > _g4_s6 ? (80u + sizeof(_g4_t_v80)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v81)) > _g4_s7 ? (84u + sizeof(_g4_t_v81)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v82)) > _g4_s8 ? (88u + sizeof(_g4_t_v82)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v83)) > _g4_s9 ? (88u + sizeof(_g4_t_v83)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v84)) > _g4_s10 ? (92u + sizeof(_g4_t_v84)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v85)) > _g4_s11 ? (92u + sizeof(_g4_t_v85)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v86)) > _g4_s12 ? (92u + sizeof(_g4_t_v86)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v87)) > _g4_s13 ? (92u + sizeof(_g4_t_v87)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v88)) > _g4_s14 ? (92u + sizeof(_g4_t_v88)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v89)) > _g4_s15 ? (96u + sizeof(_g4_t_v89)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v90)) > _g4_s16 ? (96u + sizeof(_g4_t_v90)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v91)) > _g4_s17 ? (100u + sizeof(_g4_t_v91)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v92)) > _g4_s18 ? (100u + sizeof(_g4_t_v92)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v93)) > _g4_s19 ? (100u + sizeof(_g4_t_v93)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v94)) > _g4_s20 ? (100u + sizeof(_g4_t_v94)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v95)) > _g4_s21 ? (100u + sizeof(_g4_t_v95)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v96)) > _g4_s22 ? (100u + sizeof(_g4_t_v96)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v97)) > _g4_s23 ? (104u + sizeof(_g4_t_v97)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v98)) > _g4_s24 ? (104u + sizeof(_g4_t_v98)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v99)) > _g4_s25 ? (104u + sizeof(_g4_t_v99)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v100)) > _g4_s26 ? (104u + sizeof(_g4_t_v100)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v101)) > _g4_s27 ? (104u + sizeof(_g4_t_v101)) : _g4_s27,
    _g4_s29 = (104u + sizeof(_g4_t_v102)) > _g4_s28 ? (104u + sizeof(_g4_t_v102)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v103)) > _g4_s29 ? (104u + sizeof(_g4_t_v103)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v104)) > _g4_s30 ? (104u + sizeof(_g4_t_v104)) : _g4_s30,
    _g4_s32 = (108u + sizeof(_g4_t_v105)) > _g4_s31 ? (108u + sizeof(_g4_t_v105)) : _g4_s31,
    _g4_s33 = (108u + sizeof(_g4_t_v106)) > _g4_s32 ? (108u + sizeof(_g4_t_v106)) : _g4_s32,
    _g4_s34 = (108u + sizeof(_g4_t_v107)) > _g4_s33 ? (108u + sizeof(_g4_t_v107)) : _g4_s33,
    _g4_s35 = (108u + sizeof(_g4_t_v108)) > _g4_s34 ? (108u + sizeof(_g4_t_v108)) : _g4_s34,
    _g4_s36 = (112u + sizeof(_g4_t_v109)) > _g4_s35 ? (112u + sizeof(_g4_t_v109)) : _g4_s35,
    _g4_s37 = (112u + sizeof(_g4_t_v110)) > _g4_s36 ? (112u + sizeof(_g4_t_v110)) : _g4_s36,
    _g4_s38 = (112u + sizeof(_g4_t_v111)) > _g4_s37 ? (112u + sizeof(_g4_t_v111)) : _g4_s37,
    _g4_s39 = (112u + sizeof(_g4_t_v112)) > _g4_s38 ? (112u + sizeof(_g4_t_v112)) : _g4_s38,
    _g4_s40 = (112u + sizeof(_g4_t_v113)) > _g4_s39 ? (112u + sizeof(_g4_t_v113)) : _g4_s39,
    _g4_s41 = (112u + sizeof(_g4_t_v114)) > _g4_s40 ? (112u + sizeof(_g4_t_v114)) : _g4_s40,
    _g4_s42 = (120u + sizeof(_g4_t_v115)) > _g4_s41 ? (120u + sizeof(_g4_t_v115)) : _g4_s41,
    _g4_s43 = (120u + sizeof(_g4_t_v116)) > _g4_s42 ? (120u + sizeof(_g4_t_v116)) : _g4_s42,
    _g4_s44 = (120u + sizeof(_g4_t_v117)) > _g4_s43 ? (120u + sizeof(_g4_t_v117)) : _g4_s43,
    _g4_s45 = (120u + sizeof(_g4_t_v118)) > _g4_s44 ? (120u + sizeof(_g4_t_v118)) : _g4_s44,
    _g4_s46 = (124u + sizeof(_g4_t_v119)) > _g4_s45 ? (124u + sizeof(_g4_t_v119)) : _g4_s45,
    _g4_s47 = (124u + sizeof(_g4_t_v120)) > _g4_s46 ? (124u + sizeof(_g4_t_v120)) : _g4_s46,
    _g4_s48 = (124u + sizeof(_g4_t_v121)) > _g4_s47 ? (124u + sizeof(_g4_t_v121)) : _g4_s47,
    _g4_s49 = (124u + sizeof(_g4_t_v122)) > _g4_s48 ? (124u + sizeof(_g4_t_v122)) : _g4_s48,
    _g4_s50 = (124u + sizeof(_g4_t_v123)) > _g4_s49 ? (124u + sizeof(_g4_t_v123)) : _g4_s49,
    _g4_s51 = (128u + sizeof(_g4_t_v124)) > _g4_s50 ? (128u + sizeof(_g4_t_v124)) : _g4_s50,
    _g4_s52 = (132u + sizeof(_g4_t_v125)) > _g4_s51 ? (132u + sizeof(_g4_t_v125)) : _g4_s51,
    _g4_s53 = (138u + sizeof(_g4_t_v126)) > _g4_s52 ? (138u + sizeof(_g4_t_v126)) : _g4_s52,
    _g4_s54 = (140u + sizeof(_g4_t_v127)) > _g4_s53 ? (140u + sizeof(_g4_t_v127)) : _g4_s53,
    _g4_s55 = (146u + sizeof(_g4_t_v128)) > _g4_s54 ? (146u + sizeof(_g4_t_v128)) : _g4_s54,
    _g4_s56 = (148u + sizeof(_g4_t_v129)) > _g4_s55 ? (148u + sizeof(_g4_t_v129)) : _g4_s55,
    _g4_s57 = (152u + sizeof(_g4_t_v130)) > _g4_s56 ? (152u + sizeof(_g4_t_v130)) : _g4_s56,
    _g4_s58 = (168u + sizeof(_g4_t_v131)) > _g4_s57 ? (168u + sizeof(_g4_t_v131)) : _g4_s57
  };
  alignas(16) uint8_t _g4_sf[_g4_s58];
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 0u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 60u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 72u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 76u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 80u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 84u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 88u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 88u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 92u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 92u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 92u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 92u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 92u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 96u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 96u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 100u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 100u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 100u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 100u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 100u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 100u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 104u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 104u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 104u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 104u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 104u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 104u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 104u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 104u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 108u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 108u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 108u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 108u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 112u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 112u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 112u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 112u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 112u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 112u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 120u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 120u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 120u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 120u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 124u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 124u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 124u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 124u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 124u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 128u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 132u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 138u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 140u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 146u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 148u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 152u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 168u);

  v3 = (uint32_t *)a1[1];
  v109 = v3;
  if ( v3 != (uint32_t *)a1[2] )
  {
    if ( v3 != nullptr )
    {
      v4 = 0;
      *v3 = ((uint32_t)(uintptr_t)&off_2096808);
      v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      g4_std::string::assign_str(v3 + 1, v3 - 12);
      v5 = *((uint8_t *)v109 - 42);
      v109[3] = (uint32_t)(uintptr_t)(&dword_213B814);
      *((uint8_t *)v109 + 10) = v5;
      g4_std::string::assign_str(v109 + 3, v109 - 10);
      v6 = *(v109 - 7);
      *((uint8_t *)v109 + 18) = *((uint8_t *)v109 - 34);
      v109[5] = (uint32_t)(uintptr_t)(&off_2096728);
      v97 = *(v109 - 6);
      v7 = (v97 - v6) >> 3;
      v109[6] = 0;
      v109[7] = 0;
      v109[8] = 0;
      v8 = 0;
      if ( -1431655765 * v7 != 0 )
      {
        v4 = 8 * v7;
        v8 = sub_4EBE70(8 * v7, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        v97 = *(v109 - 6);
        v6 = *(v109 - 7);
      }
      v109[6] = v8;
      v109[7] = v8;
      v109[8] = v8 + v4;
      v9 = v8;
      if ( v97 != v6 )
      {
        v10 = v6;
        v84 = v8;
        do
        {
          if ( v9 != 0 )
          {
            *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_2096708);
            v115 = v9 - v84;
            *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v9 + 4, v10 + 4);
            *(uint8_t *)(v115 + v84 + 4 + 6) = *(uint8_t *)(v10 + 10);
            *(uint64_t *)(v9 + 12) = *(uint64_t *)(v10 + 12);
            *(uint8_t *)(v84 + v115 + 22) = *(uint8_t *)(v10 + 22);
          }
          v9 += 24;
          v10 += 24;
        }
        while ( v97 != v10 );
      }
      v11 = 0;
      v109[7] = v9;
      v109[9] = (uint32_t)(uintptr_t)(&off_2096728);
      v12 = *(v109 - 3);
      v98 = *(v109 - 2);
      v13 = (v98 - v12) >> 3;
      v109[10] = 0;
      v109[11] = 0;
      v109[12] = 0;
      v14 = 0;
      if ( -1431655765 * v13 != 0 )
      {
        v11 = 8 * v13;
        v14 = sub_4EBE70(8 * v13, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        v98 = *(v109 - 2);
        v12 = *(v109 - 3);
      }
      v109[10] = v14;
      v109[11] = v14;
      v109[12] = v14 + v11;
      v15 = v14;
      if ( v98 != v12 )
      {
        v16 = v12;
        v85 = v14;
        do
        {
          if ( v15 != 0 )
          {
            *(uint32_t *)v15 = ((uint32_t)(uintptr_t)&off_2096708);
            v116 = v15 - v85;
            *(uint32_t *)(v15 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
            g4_std::string::assign_str(v15 + 4, v16 + 4);
            *(uint8_t *)(v116 + v85 + 4 + 6) = *(uint8_t *)(v16 + 10);
            *(uint64_t *)(v15 + 12) = *(uint64_t *)(v16 + 12);
            *(uint8_t *)(v85 + v116 + 22) = *(uint8_t *)(v16 + 22);
          }
          v15 += 24;
          v16 += 24;
        }
        while ( v98 != v16 );
      }
      v109[11] = v15;
      v17 = a1;
      v18 = a1[1];
    }
    else
    {
      v18 = 0;
      v17 = a1;
    }
    v17[1] = v18 + 52;
    v125 = &dword_213B814;
    v19 = 0;
    v124 = (uint32_t (**)(oi::BillingMethod::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2096808));
    g4_std::string::assign_str(&v125, a3 + 4);
    v127 = &dword_213B814;
    v126 = *(uint8_t *)(a3 + 10);
    g4_std::string::assign_str(&v127, a3 + 12);
    memset(v130, 0, 12);
    v105 = *(uint32_t *)(a3 + 28);
    v128 = *(uint8_t *)(a3 + 18);
    v20 = *(uint32_t *)(a3 + 24);
    v129 = (uint32_t (**)(oi::ItemPriceArray::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096728);
    v21 = 0;
    v22 = (v105 - v20) >> 3;
    if ( -1431655765 * v22 != 0 )
    {
      v19 = 8 * v22;
      v21 = sub_4EBE70(8 * v22, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      v105 = *(uint32_t *)(a3 + 28);
      v20 = *(uint32_t *)(a3 + 24);
    }
    v130[0] = v21;
    v130[1] = v21;
    v130[2] = v21 + v19;
    v23 = v21;
    if ( v105 != v20 )
    {
      v24 = v20;
      v91 = v21;
      do
      {
        if ( v23 != 0 )
        {
          *(uint32_t *)v23 = ((uint32_t)(uintptr_t)&off_2096708);
          v110 = v23 - v91;
          *(uint32_t *)(v23 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v23 + 4, v24 + 4);
          *(uint8_t *)(v110 + v91 + 4 + 6) = *(uint8_t *)(v24 + 10);
          *(uint64_t *)(v23 + 12) = *(uint64_t *)(v24 + 12);
          *(uint8_t *)(v91 + v110 + 22) = *(uint8_t *)(v24 + 22);
        }
        v23 += 24;
        v24 += 24;
      }
      while ( v105 != v24 );
    }
    v130[1] = v23;
    v25 = 0;
    memset(v131, 0, 12);
    v26 = *(uint32_t *)(a3 + 40);
    v27 = *(uint32_t *)(a3 + 44);
    v130[3] = (uint32_t)(uintptr_t)(&off_2096728);
    v106 = v27;
    v28 = (v27 - v26) >> 3;
    v29 = 0;
    if ( -1431655765 * v28 != 0 )
    {
      v25 = 8 * v28;
      v29 = sub_4EBE70(8 * v28, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      v106 = *(uint32_t *)(a3 + 44);
      v26 = *(uint32_t *)(a3 + 40);
    }
    v131[0] = v29;
    v131[1] = v29;
    v131[2] = v29 + v25;
    v30 = v29;
    if ( v26 != v106 )
    {
      v31 = v26;
      v92 = v29;
      do
      {
        if ( v30 != 0 )
        {
          *(uint32_t *)v30 = ((uint32_t)(uintptr_t)&off_2096708);
          v111 = v30 - v92;
          *(uint32_t *)(v30 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v30 + 4, v31 + 4);
          *(uint8_t *)(v111 + v92 + 4 + 6) = *(uint8_t *)(v31 + 10);
          *(uint64_t *)(v30 + 12) = *(uint64_t *)(v31 + 12);
          *(uint8_t *)(v92 + v111 + 22) = *(uint8_t *)(v31 + 22);
        }
        v30 += 24;
        v31 += 24;
      }
      while ( v106 != v31 );
    }
    v131[1] = v30;
    v117 = a1[1];
    v119 = -991146299 * ((v117 - 104 - (int)(uintptr_t)(a2)) >> 2);
    if ( v119 > 0 )
    {
      for ( i = v117 - 52; ; i -= 52 )
      {
        v112 = i - 52;
        g4_std::string::assign_str(i - 48, i - 100);
        *(uint8_t *)(v112 - 100 + 110) = *(uint8_t *)(v112 - 152 + 110);
        g4_std::string::assign_str(i - 40, i - 92);
        *(uint8_t *)(v112 - 92 + 110) = *(uint8_t *)(v112 - 144 + 110);
        g4_std::vector_oi_ItemPrice_glwebtools_d78ead::opAssign(
          (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(i - 28),
          (const std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(i - 80));
        g4_std::vector_oi_ItemPrice_glwebtools_d78ead::opAssign(
          (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(i - 12),
          (const std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(i - 64));
        if ( --v119 == 0 )
          break;
      }
    }
    g4_std::string::assign_str(a2 + 4, &v125);
    a2[10] = v126;
    g4_std::string::assign_str(a2 + 12, &v127);
    a2[18] = v128;
    g4_std::vector_oi_ItemPrice_glwebtools_d78ead::opAssign(
      (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(a2 + 24),
      (const std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)v130);
    g4_std::vector_oi_ItemPrice_glwebtools_d78ead::opAssign(
      (std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)(a2 + 40),
      (const std::vector<oi::ItemPrice::Self, glwebtools::SAllocator<oi::ItemPrice::Self, (glwebtools::MemHint)4>> *)v131);
    oi::BillingMethod::Destroy((oi::BillingMethod::Self *)&v124);
    return;
  }
  v33 = (uint32_t *)*a1;
  if ( -991146299 * (((int)(uintptr_t)(v3) - *a1) >> 2) != 0 )
  {
    v34 = -1982292598 * (((int)(uintptr_t)(v3) - *a1) >> 2);
    if ( -991146299 * (((int)(uintptr_t)(v109) - *a1) >> 2) > v34 || v34 > 0x4EC4EC4 )
    {
      v76 = 0xFFFFFFF4;
      v35 = -991146299 * ((a2 - (uint8_t *)v33) >> 2);
    }
    else
    {
      v76 = 2 * (((int)(uintptr_t)(v109) - *a1) >> 2);
      v35 = -991146299 * ((a2 - (uint8_t *)v33) >> 2);
      if ( v34 == 0 )
      {
        v86 = 52;
        v81 = nullptr;
        goto LABEL_43;
      }
    }
    v36 = sub_4EBE70(v76 * 4, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  }
  else
  {
    v76 = 13;
    v35 = -991146299 * ((a2 - (uint8_t *)v33) >> 2);
    v36 = sub_4EBE70(0x34u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  }
  v81 = (uint32_t *)v36;
  v86 = v36 + 52;
LABEL_43:
  v37 = 13 * v35;
  v38 = &v81[v37] == nullptr;
  v39 = &v81[v37];
  v118 = v39;
  if ( !v38 )
  {
    *v39 = ((uint32_t)(uintptr_t)&off_2096808);
    v39[1] = (uint32_t)(uintptr_t)(&dword_213B814);
    g4_std::string::assign_str(v39 + 1, a3 + 4);
    v40 = *(uint8_t *)(a3 + 10);
    v39[3] = (uint32_t)(uintptr_t)(&dword_213B814);
    *((uint8_t *)v39 + 10) = v40;
    g4_std::string::assign_str(v39 + 3, a3 + 12);
    *((uint8_t *)v39 + 18) = *(uint8_t *)(a3 + 18);
    v39[5] = (uint32_t)(uintptr_t)(&off_2096728);
    v41 = *(uint32_t *)(a3 + 28) - *(uint32_t *)(a3 + 24);
    v39[6] = 0;
    v42 = v41 >> 3;
    v39[7] = 0;
    v39[8] = 0;
    v43 = 0;
    v44 = 0;
    if ( -1431655765 * v42 != 0 )
    {
      v44 = 8 * v42;
      v43 = sub_4EBE70(8 * v42, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    }
    v118[8] = v43 + v44;
    v118[6] = v43;
    v118[7] = v43;
    v99 = *(uint32_t *)(a3 + 28);
    v45 = v43;
    if ( v99 != *(uint32_t *)(a3 + 24) )
    {
      v46 = *(uint32_t *)(a3 + 24);
      v93 = v43;
      do
      {
        if ( v45 != 0 )
        {
          *(uint32_t *)v45 = ((uint32_t)(uintptr_t)&off_2096708);
          v113 = v45 - v93;
          *(uint32_t *)(v45 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v45 + 4, v46 + 4);
          *(uint8_t *)(v113 + v93 + 4 + 6) = *(uint8_t *)(v46 + 10);
          *(uint64_t *)(v45 + 12) = *(uint64_t *)(v46 + 12);
          *(uint8_t *)(v93 + v113 + 22) = *(uint8_t *)(v46 + 22);
        }
        v45 += 24;
        v46 += 24;
      }
      while ( v99 != v46 );
    }
    v118[7] = v45;
    v118[9] = (uint32_t)(uintptr_t)(&off_2096728);
    v47 = (*(uint32_t *)(a3 + 44) - *(uint32_t *)(a3 + 40)) >> 3;
    v48 = 0;
    v118[10] = 0;
    v118[11] = 0;
    v118[12] = 0;
    v49 = 0;
    if ( -1431655765 * v47 != 0 )
    {
      v48 = 8 * v47;
      v49 = sub_4EBE70(8 * v47, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    }
    v118[12] = v49 + v48;
    v118[10] = v49;
    v118[11] = v49;
    v100 = *(uint32_t *)(a3 + 44);
    v50 = v49;
    if ( v100 != *(uint32_t *)(a3 + 40) )
    {
      v51 = *(uint32_t *)(a3 + 40);
      v94 = v49;
      do
      {
        if ( v50 != 0 )
        {
          *(uint32_t *)v50 = ((uint32_t)(uintptr_t)&off_2096708);
          v114 = v50 - v94;
          *(uint32_t *)(v50 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v50 + 4, v51 + 4);
          *(uint8_t *)(v114 + v94 + 4 + 6) = *(uint8_t *)(v51 + 10);
          *(uint64_t *)(v50 + 12) = *(uint64_t *)(v51 + 12);
          *(uint8_t *)(v94 + v114 + 22) = *(uint8_t *)(v51 + 22);
        }
        v50 += 24;
        v51 += 24;
      }
      while ( v100 != v51 );
    }
    v118[11] = v50;
  }
  if ( (uint8_t *)*a1 != a2 )
  {
    v95 = *a1;
    v89 = (char *)v81;
    do
    {
      if ( v89 != nullptr )
      {
        *(uint32_t *)v89 = ((uint32_t)(uintptr_t)&off_2096808);
        v107 = (char *)(v89 - (char *)v81);
        *((uint32_t *)v89 + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v89 + 4, v95 + 4);
        *((uint8_t *)v81 + (uint32_t)(uintptr_t)(v107) + 10) = *(uint8_t *)(v95 + 10);
        *((uint32_t *)v89 + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v89 + 12, v95 + 12);
        *((uint8_t *)v81 + (uint32_t)(uintptr_t)(v107) + 18) = *(uint8_t *)(v95 + 18);
        *((uint32_t *)v89 + 5) = (uint32_t)(uintptr_t)(&off_2096728);
        v52 = (*(uint32_t *)(v95 + 28) - *(uint32_t *)(v95 + 24)) >> 3;
        *((uint32_t *)v89 + 6) = 0;
        v87 = v81 + 6;
        *(uint32_t *)((char *)v87 + (uint32_t)(uintptr_t)(v107) + 4) = 0;
        *(uint32_t *)((char *)v87 + (uint32_t)(uintptr_t)(v107) + 8) = 0;
        v53 = 0;
        v54 = 0;
        if ( -1431655765 * v52 != 0 )
        {
          v53 = 8 * v52;
          v54 = sub_4EBE70(8 * v52, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        }
        *(uint32_t *)((char *)v87 + (uint32_t)(uintptr_t)(v107)) = v54;
        *(uint32_t *)((char *)v87 + (uint32_t)(uintptr_t)(v107) + 4) = v54;
        *(uint32_t *)((char *)v87 + (uint32_t)(uintptr_t)(v107) + 8) = v54 + v53;
        v101 = *(uint32_t *)(v95 + 28);
        v55 = v54;
        if ( v101 != *(uint32_t *)(v95 + 24) )
        {
          v56 = *(uint32_t *)(v95 + 24);
          v77 = v54;
          do
          {
            if ( v55 != 0 )
            {
              *(uint32_t *)v55 = ((uint32_t)(uintptr_t)&off_2096708);
              v120 = v55 - v77;
              *(uint32_t *)(v55 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
              g4_std::string::assign_str(v55 + 4, v56 + 4);
              *(uint8_t *)(v120 + v77 + 4 + 6) = *(uint8_t *)(v56 + 10);
              *(uint64_t *)(v55 + 12) = *(uint64_t *)(v56 + 12);
              *(uint8_t *)(v77 + v120 + 22) = *(uint8_t *)(v56 + 22);
            }
            v55 += 24;
            v56 += 24;
          }
          while ( v101 != v56 );
        }
        *(uint32_t *)((char *)v87 + (uint32_t)(uintptr_t)(v107) + 4) = v55;
        *((uint32_t *)v89 + 9) = (uint32_t)(uintptr_t)(&off_2096728);
        v88 = v81 + 10;
        v57 = (*(uint32_t *)(v95 + 44) - *(uint32_t *)(v95 + 40)) >> 3;
        *((uint32_t *)v89 + 10) = 0;
        *(uint32_t *)((char *)v88 + (uint32_t)(uintptr_t)(v107) + 4) = 0;
        *(uint32_t *)((char *)v88 + (uint32_t)(uintptr_t)(v107) + 8) = 0;
        v58 = 0;
        v59 = 0;
        if ( -1431655765 * v57 != 0 )
        {
          v58 = 8 * v57;
          v59 = sub_4EBE70(8 * v57, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        }
        *(uint32_t *)((char *)v88 + (uint32_t)(uintptr_t)(v107)) = v59;
        *(uint32_t *)((char *)v88 + (uint32_t)(uintptr_t)(v107) + 4) = v59;
        *(uint32_t *)((char *)v88 + (uint32_t)(uintptr_t)(v107) + 8) = v59 + v58;
        v102 = *(uint32_t *)(v95 + 44);
        v60 = v59;
        if ( v102 != *(uint32_t *)(v95 + 40) )
        {
          v61 = *(uint32_t *)(v95 + 40);
          v79 = v59;
          do
          {
            if ( v60 != 0 )
            {
              *(uint32_t *)v60 = ((uint32_t)(uintptr_t)&off_2096708);
              v121 = v60 - v79;
              *(uint32_t *)(v60 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
              g4_std::string::assign_str(v60 + 4, v61 + 4);
              *(uint8_t *)(v121 + v79 + 4 + 6) = *(uint8_t *)(v61 + 10);
              *(uint64_t *)(v60 + 12) = *(uint64_t *)(v61 + 12);
              *(uint8_t *)(v79 + v121 + 22) = *(uint8_t *)(v61 + 22);
            }
            v60 += 24;
            v61 += 24;
          }
          while ( v102 != v61 );
        }
        *(uint32_t *)((char *)v88 + (uint32_t)(uintptr_t)(v107) + 4) = v60;
      }
      v95 += 52;
      v89 += 52;
    }
    while ( (uint8_t *)v95 != a2 );
    v86 = (int)(uintptr_t)(v89 + 52);
  }
  v90 = (uint32_t *)v86;
  v78 = (uint8_t *)a1[1];
  if ( v78 != a2 )
  {
    v96 = a2;
    do
    {
      if ( v90 != nullptr )
      {
        *v90 = ((uint32_t)(uintptr_t)&off_2096808);
        v108 = (char *)v90 - v86;
        v90[1] = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v90 + 1, v96 + 4);
        v108[v86 + 10] = v96[10];
        v90[3] = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(v90 + 3, v96 + 12);
        v108[v86 + 18] = v96[18];
        v90[5] = (uint32_t)(uintptr_t)(&off_2096728);
        v62 = (*((uint32_t *)v96 + 7) - *((uint32_t *)v96 + 6)) >> 3;
        v90[6] = 0;
        v82 = v86 + 24;
        *(uint32_t *)&v108[v82 + 4] = 0;
        *(uint32_t *)&v108[v82 + 8] = 0;
        v63 = 0;
        v64 = 0;
        if ( -1431655765 * v62 != 0 )
        {
          v63 = 8 * v62;
          v64 = sub_4EBE70(8 * v62, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        }
        *(uint32_t *)&v108[v82] = v64;
        *(uint32_t *)&v108[v82 + 4] = v64;
        *(uint32_t *)&v108[v82 + 8] = v64 + v63;
        v103 = *((uint32_t *)v96 + 7);
        v65 = v64;
        if ( v103 != *((uint32_t *)v96 + 6) )
        {
          v66 = *((uint32_t *)v96 + 6);
          v75 = v64;
          do
          {
            if ( v65 != 0 )
            {
              *(uint32_t *)v65 = ((uint32_t)(uintptr_t)&off_2096708);
              v122 = v65 - v75;
              *(uint32_t *)(v65 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
              g4_std::string::assign_str(v65 + 4, v66 + 4);
              *(uint8_t *)(v122 + v75 + 4 + 6) = *(uint8_t *)(v66 + 10);
              *(uint64_t *)(v65 + 12) = *(uint64_t *)(v66 + 12);
              *(uint8_t *)(v75 + v122 + 22) = *(uint8_t *)(v66 + 22);
            }
            v65 += 24;
            v66 += 24;
          }
          while ( v103 != v66 );
        }
        *(uint32_t *)&v108[v82 + 4] = v65;
        v90[9] = (uint32_t)(uintptr_t)(&off_2096728);
        v83 = v86 + 40;
        v67 = (*((uint32_t *)v96 + 11) - *((uint32_t *)v96 + 10)) >> 3;
        v90[10] = 0;
        *(uint32_t *)&v108[v83 + 4] = 0;
        *(uint32_t *)&v108[v83 + 8] = 0;
        v68 = 0;
        v69 = 0;
        if ( -1431655765 * v67 != 0 )
        {
          v68 = 8 * v67;
          v69 = sub_4EBE70(8 * v67, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        }
        *(uint32_t *)&v108[v83] = v69;
        *(uint32_t *)&v108[v83 + 4] = v69;
        *(uint32_t *)&v108[v83 + 8] = v69 + v68;
        v104 = *((uint32_t *)v96 + 11);
        v70 = v69;
        if ( v104 != *((uint32_t *)v96 + 10) )
        {
          v71 = *((uint32_t *)v96 + 10);
          v80 = v69;
          do
          {
            if ( v70 != 0 )
            {
              *(uint32_t *)v70 = ((uint32_t)(uintptr_t)&off_2096708);
              v123 = v70 - v80;
              *(uint32_t *)(v70 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
              g4_std::string::assign_str(v70 + 4, v71 + 4);
              *(uint8_t *)(v123 + v80 + 4 + 6) = *(uint8_t *)(v71 + 10);
              *(uint64_t *)(v70 + 12) = *(uint64_t *)(v71 + 12);
              *(uint8_t *)(v80 + v123 + 22) = *(uint8_t *)(v71 + 22);
            }
            v70 += 24;
            v71 += 24;
          }
          while ( v104 != v71 );
        }
        *(uint32_t *)&v108[v83 + 4] = v70;
      }
      v96 += 52;
      v90 += 13;
    }
    while ( v78 != v96 );
    v78 = (uint8_t *)a1[1];
  }
  v72 = (uint32_t *)*a1;
  if ( (uint8_t *)*a1 != v78 )
  {
    do
    {
      v73 = *v72;
      v74 = v72;
      v72 += 13;
      (*(void (**)(uint32_t *))(v73 + 16))(v74);
    }
    while ( v78 != (uint8_t *)v72 );
    v72 = (uint32_t *)*a1;
  }
  if ( v72 != nullptr )
    sub_4EBEE0((int)(uintptr_t)(v72));
  *a1 = (uint32_t)(uintptr_t)(v81);
  a1[1] = (uint32_t)(uintptr_t)(v90);
  a1[2] = (uint32_t)(uintptr_t)(&v81[v76]);
}


