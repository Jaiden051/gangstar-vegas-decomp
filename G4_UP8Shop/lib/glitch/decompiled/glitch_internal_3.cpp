#include "Core/Utils/DecompTypes.h"
#include "glitch_internal_3.h"
#include <algorithm>

// ----------------------------------------------------------------------------
// Function: sub_E85F70  (binary VA: 0xe85f70)
// Original: sub_E85F70
// ----------------------------------------------------------------------------
uint8_t * sub_E85F70()
{
  uint8_t *result;

  sub_1900D70(&unk_20E0EE8);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20E0EE8, &unk_20D1280);
  dword_20E0EEC = 1056964608;
  dword_20E0EF0 = 1056964608;
  dword_20E0EF4 = 1056964608;
  glitch::video::IBuffer::CDirtyRangeSet::CNode::Pool = nullptr;
  *(uintptr_t *)(unk_20E0EB4) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20E0EB8) = (uintptr_t)(0);
  dword_20E0EBC[0] = 12;
  dword_20E0EBC[1] = 32;
  dword_20E0EBC[2] = 32;
  dword_20E0EBC[3] = 0;
  __cxa_atexit((void (*)(void *))((char * (*)(uint32_t *))sub_6025A0), &glitch::video::IBuffer::CDirtyRangeSet::CNode::Pool, &unk_20D1280);
  glf::SpinLock::Construct((glf::SpinLock::Self *)&glitch::video::IBuffer::CDirtyRangeSet::CNode::PoolLock);
  __cxa_atexit(
    (void (*)(void *))glf::SpinLock::Destroy,
    &glitch::video::IBuffer::CDirtyRangeSet::CNode::PoolLock,
    &unk_20D1280);
  if ( g4_guard_c8dd31fc0a[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_c8dd31fc0a) = (uintptr_t)(1);
    glitch::video::SShaderParameterDef::Construct((glitch::video::SShaderParameterDef::Self *)&glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef::Self,unsigned short,false,glitch::video::detail::globalmaterialparametermanager::SPropeties::Self,glitch::video::detail::globalmaterialparametermanager::SValueTraits,1>::Invalid);
    __cxa_atexit(
      (void (*)(void *))glitch::video::SShaderParameterDef::Destroy,
      &glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef::Self,unsigned short,false,glitch::video::detail::globalmaterialparametermanager::SPropeties::Self,glitch::video::detail::globalmaterialparametermanager::SValueTraits,1>::Invalid,
      &unk_20D1280);
  }

  if ( g4_guard_53891f91ef[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_53891f91ef) = (uintptr_t)(1);
    glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::SLookupTableProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid = 0;
    __cxa_atexit(
      (void (*)(void *))((int (*)(int *))sub_5ED480),
      &glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::SLookupTableProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid,
      &unk_20D1280);
  }
  if ( g4_guard_ce4de3d33d[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_ce4de3d33d) = (uintptr_t)(1);
    glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::CMaterialRenderer::Self>,unsigned short,false,glitch::video::detail::materialrenderermanager::SProperties::Self,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid = 0;
    __cxa_atexit(
      (void (*)(void *))sub_655A30,
      &glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::CMaterialRenderer::Self>,unsigned short,false,glitch::video::detail::materialrenderermanager::SProperties::Self,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid,
      &unk_20D1280);
  }
  if ( g4_guard_17e25f28cc[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_17e25f28cc) = (uintptr_t)(1);
    glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid = 0;
    __cxa_atexit(
      (void (*)(void *))((int (*)(int *))sub_5ED480),
      &glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid,
      &unk_20D1280);
  }
  dword_20E0EE0[0] = -8388353;
  byte_20E0EE4 = 55;
  byte_20E0EE5 = -41;
  byte_20E0EE6 = 55;
  byte_20E0EE7 = -1;
  if ( g4_guard_9708045841[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_9708045841) = (uintptr_t)(1);
    glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::IShaderCode::Self>,unsigned short,false,glitch::core::detail::sidedcollection::SEmptyProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid = 0;
    __cxa_atexit(
      (void (*)(void *))boost::intrusive_ptr_video_IShaderCode_91f04c::Destroy,
      &glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::IShaderCode::Self>,unsigned short,false,glitch::core::detail::sidedcollection::SEmptyProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid,
      &unk_20D1280);
  }
  if ( g4_guard_a9fc145225[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_a9fc145225) = (uintptr_t)(1);
    glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::IShader::Self>,unsigned short,false,glitch::video::detail::shadermanager::SShaderProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid = 0;
    __cxa_atexit(
      (void (*)(void *))boost::intrusive_ptr_video_IShader_d75d29::Destroy,
      &glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::IShader::Self>,unsigned short,false,glitch::video::detail::shadermanager::SShaderProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid,
      &unk_20D1280);
  }
  result = (uint8_t *)(g4_guard_0fd48228b4);
  if ( g4_guard_0fd48228b4[0] == 0 )
  {
    g4_guard_0fd48228b4[0] = 1;
    glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,2>::Invalid = 0;
    return (uint8_t *)__cxa_atexit(
                      (void (*)(void *))((int (*)(int *))sub_5ED480),
                      &glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,2>::Invalid,
                      &unk_20D1280);
  }
  return result;
}


// ============================================================================
// Address:   0xe86480 (size: 141 bytes)
// Symbol:    sub_E86480
// Demangled: sub_E86480
// ============================================================================
int sub_E86480(int a1, int a2, int a3)
{
  bool v4;
  int result;
  int v6;
  int v7;

  v4 = a2 == a1;
  result = a3;
  if ( !v4 )
  {
    v6 = a1;
    v7 = a3;
    do
    {
      if ( v7 != 0 )
      {
        *(uint32_t *)v7 = *(uint32_t *)v6;
        *(uint32_t *)(v7 + 4) = *(uint32_t *)(v6 + 4);
        *(uint32_t *)(v7 + 8) = *(uint32_t *)(v6 + 8);
        *(uint32_t *)(v7 + 12) = *(uint32_t *)(v6 + 12);
        *(uint32_t *)(v7 + 16) = *(uint32_t *)(v6 + 16);
        *(uint32_t *)(v7 + 20) = *(uint32_t *)(v6 + 20);
        *(uint32_t *)(v7 + 24) = *(uint32_t *)(v6 + 24);
        *(uint32_t *)(v7 + 28) = *(uint32_t *)(v6 + 28);
        *(uint32_t *)(v7 + 32) = *(uint32_t *)(v6 + 32);
        *(uint32_t *)(v7 + 36) = *(uint32_t *)(v6 + 36);
        *(uint32_t *)(v7 + 40) = *(uint32_t *)(v6 + 40);
        *(uint16_t *)(v7 + 44) = *(uint16_t *)(v6 + 44);
      }
      v6 += 46;
      v7 += 46;
    }
    while ( v6 != a2 );
    return 46 * (((1774008231 * ((unsigned int)(v6 - (a1 + 46)) >> 1)) & 0x7FFFFFFF) + 1) + a3;
  }
  return result;
}


// ============================================================================
// Address:   0xe86510 (size: 81 bytes)
// Symbol:    sub_E86510
// Demangled: sub_E86510
// ============================================================================
int sub_E86510(int *a1, unsigned int *a2, char a3)
{
  int v3;
  uint32_t v5[4];

  v3 = *a1;
  if ( a3 == 0 )
    return (*(int (**)(int, unsigned int *, int))(*(uint32_t *)v3 + 12))(v3, a2, 4);
  v5[0] = __builtin_bswap32(*a2);
  return (*(int (**)(int, uint32_t *, int))(*(uint32_t *)v3 + 12))(v3, v5, 4);
}


// ============================================================================
// Address:   0xe86570 (size: 103 bytes)
// Symbol:    sub_E86570
// Demangled: sub_E86570
// ============================================================================
int *sub_E86570(int *result)
{
  int v1;
  int32_t v2;

  v1 = *result;
  if ( *result != 0 )
  {
    while ( 1 )
    {
      v2 = *(uint32_t *)(v1 + 4);
      _mm_mfence();
      if ( v2 == 2 )
      {
        if ( *(uint16_t *)(v1 + 32) == 0xFFFF )
          goto LABEL_4;
        glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v1);
      }
      else
      {
        if ( v2 == 1 )
          return (int *)(*(int (**)(int))(*(uint32_t *)v1 + 4))(v1);
LABEL_4:
        result = (int *)__sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v2, v2 - 1);
        if ( (int *)v2 == result )
          return result;
      }
    }
  }
  return result;
}


// ============================================================================
// Address:   0xe865e0 (size: 336 bytes)
// Symbol:    sub_E865E0
// Demangled: sub_E865E0
// ============================================================================
void *sub_E865E0(wchar_t **a1, unsigned int a2)
{
  wchar_t *v2;
  unsigned int v4;
  unsigned int v5;
  size_t v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  size_t n;
  void *result;
  wchar_t *v14;
  wchar_t *s2;

  v2 = *a1;
  v4 = *(*a1 - 3);
  if ( a2 >= v4 )
    v4 = a2;
  v5 = *(v2 - 2);
  if ( v4 > 0xFFFFFFE )
    sub_1900180("basic_string::_S_create");
  v6 = 4 * v4 + 16;
  if ( v5 < v4 )
  {
    if ( v4 < 2 * v5 )
      v4 = 2 * v5;
    v6 = 4 * v4 + 16;
    v7 = 4 * v4 + 32;
    if ( v7 > 0x1000 && v4 > v5 )
    {
      v8 = v4 + ((4096 - (v7 & 0xFFF)) >> 2);
      v4 = 268435454;
      if ( v8 <= 0xFFFFFFE )
        v4 = v8;
      v6 = 4 * v4 + 16;
    }
  }
  s2 = v2;
  v9 = sub_4EBDC0(v6);
  *(uint32_t *)(v9 + 4) = v4;
  *(uint32_t *)(v9 + 8) = 0;
  v10 = v9;
  v11 = 0;
  n = *(s2 - 3);
  if ( n != 0 )
  {
    if ( n == 1 )
      *(uint32_t *)(v10 + 12) = *s2;
    else
      wmemcpy((wchar_t *)(v10 + 12), s2, n);
    v11 = *(s2 - 3);
  }
  result = (void *)g4_empty_string_rep;
  if ( (void *)v10 != (void *)g4_empty_string_rep )
  {
    *(uint32_t *)(v10 + 8) = 0;
    *(uint32_t *)v10 = v11;
    *(uint32_t *)(v10 + 4 * v11 + 12) = 0;
  }
  v14 = *a1 - 3;
  if ( v14 != (wchar_t *)(void *)g4_empty_string_rep )
  {
    result = (void *)__sync_fetch_and_add(*a1 - 1, 0xFFFFFFFF);
    if ( (int)(uintptr_t)(result) <= 0 )
      result = (void *)gll_operator_delete_arr((int)(uintptr_t)(v14));
  }
  *a1 = (wchar_t *)(v10 + 12);
  return result;
}


// ============================================================================
// Address:   0xe86a20 (size: 300 bytes)
// Symbol:    sub_E86A20
// Demangled: sub_E86A20
// ============================================================================
int sub_E86A20(unsigned int *a1)
{
  unsigned int v1;
  unsigned int v3;
  size_t v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;

  v1 = *a1;
  v3 = a1[1];
  if ( *a1 > 0xFFFFFFE )
    sub_1900180("basic_string::_S_create");
  if ( v1 > v3 && v1 < 2 * v3 )
    v1 = 2 * v3;
  v4 = 4 * v1 + 16;
  v5 = 4 * v1 + 32;
  if ( v5 > 0x1000 && v3 < v1 )
  {
    v6 = v1 + ((4096 - (v5 & 0xFFF)) >> 2);
    v1 = 268435454;
    if ( v6 <= 0xFFFFFFE )
      v1 = v6;
    v4 = 4 * v1 + 16;
  }
  v7 = sub_4EBDC0(v4);
  *(uint32_t *)(v7 + 4) = v1;
  *(uint32_t *)(v7 + 8) = 0;
  v8 = *a1;
  if ( *a1 != 0 )
  {
    if ( v8 == 1 )
    {
      *(uint32_t *)(v7 + 12) = a1[3];
      v8 = *a1;
    }
    else if ( (int)(4 * v8) >> 2 != 0 )
    {
      memmove((void *)(v7 + 12), a1 + 3, 4 * ((int)(4 * v8) >> 2));
      v8 = *a1;
    }
  }
  if ( (void *)v7 != (void *)g4_empty_string_rep )
  {
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)v7 = v8;
    *(uint32_t *)(v7 + 4 * v8 + 12) = 0;
  }
  return v7 + 12;
}


// ============================================================================
// Address:   0xe86b50 (size: 359 bytes)
// Symbol:    sub_E86B50
// Demangled: sub_E86B50
// ============================================================================
void *sub_E86B50(uint32_t *a1, void **a2)
{
  void **v4;
  void **v5;
  unsigned int v6;
  size_t v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  void *dest;
  uint32_t *v15;
  void *result;
  uint32_t *v17;
  int v18;
  void *v19;

  if ( a2 == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  if ( *a2 == nullptr )
    goto LABEL_19;
  v4 = a2 + 1;
  do
    v5 = v4++;
  while ( *(v4 - 1) != nullptr );
  if ( a2 == v5 )
  {
LABEL_19:
    *a1 = (uint32_t)(uintptr_t)(&unk_20E13BC);
    return (void *)g4_empty_string_rep;
  }
  else
  {
    v6 = v5 - a2;
    if ( v6 > 0xFFFFFFE )
      sub_1900180("basic_string::_S_create");
    v7 = 4 * v6 + 16;
    v8 = 4 * v6 + 32;
    if ( v8 > 0x1000 && v6 != 0 )
    {
      v9 = 4096 - (v8 & 0xFFF);
      v10 = 268435454;
      v11 = v6 + (v9 >> 2);
      if ( v11 <= 0xFFFFFFE )
        v10 = v11;
      v7 = 4 * v10 + 16;
    }
    else
    {
      v10 = v6;
    }
    v18 = v10;
    v17 = a1;
    v12 = sub_4EBDC0(v7);
    *(uint32_t *)(v12 + 4) = v18;
    *(uint32_t *)(v12 + 8) = 0;
    v13 = v12;
    dest = (void *)(v12 + 12);
    v15 = v17;
    if ( v6 == 1 )
    {
      result = *a2;
      *(uint32_t *)(v13 + 12) = (uint32_t)(uintptr_t)(*a2);
    }
    else
    {
      result = (void *)v6;
      if ( v6 != 0 )
      {
        v19 = dest;
        result = memmove(dest, a2, 4 * v6);
        v15 = v17;
        dest = v19;
      }
    }
    if ( (void *)v13 != (void *)g4_empty_string_rep )
    {
      *(uint32_t *)(v13 + 8) = 0;
      *(uint32_t *)v13 = v6;
      *((uint32_t *)dest + v6) = 0;
    }
    *v15 = (uint32_t)(uintptr_t)(dest);
  }
  return result;
}


// ============================================================================
// Address:   0xe86cc0 (size: 460 bytes)
// Symbol:    sub_E86CC0
// Demangled: sub_E86CC0
// ============================================================================
int sub_E86CC0(uint32_t *a1, void **a2, int a3)
{
  uint32_t *v3;
  void **v4;
  unsigned int v6;
  size_t v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  void *dest;
  int result;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v20;
  void *v21;
  unsigned int v22;
  void **v23;

  v3 = a1;
  v4 = &a2[a3];
  if ( a2 == v4 )
  {
    result = (int)(uintptr_t)(void *)g4_empty_string_rep;
    dest = &unk_20E13BC;
    goto LABEL_14;
  }
  if ( a2 == nullptr )
  {
    if ( v4 != nullptr )
      sub_18FFFD0("basic_string::_S_construct null not valid");
    v16 = sub_4EBDC0(0x10u);
    *(uint32_t *)(v16 + 4) = 0;
    *(uint32_t *)(v16 + 8) = 0;
    v13 = v16;
    dest = (void *)(v16 + 12);
    v22 = 0;
    v23 = nullptr;
    v3 = a1;
    goto LABEL_10;
  }
  v23 = a2;
  v6 = (4 * a3) >> 2;
  v22 = v6;
  if ( v6 > 0xFFFFFFE )
    sub_1900180("basic_string::_S_create");
  v7 = 4 * v6 + 16;
  v8 = 4 * v6 + 32;
  if ( v8 > 0x1000 && v6 != 0 )
  {
    v9 = 4096 - (v8 & 0xFFF);
    v10 = 268435454;
    v11 = v6 + (v9 >> 2);
    if ( v11 <= 0xFFFFFFE )
      v10 = v11;
    v7 = 4 * v10 + 16;
  }
  else
  {
    v10 = (4 * a3) >> 2;
  }
  v20 = v10;
  v17 = v3;
  v12 = sub_4EBDC0(v7);
  *(uint32_t *)(v12 + 4) = v20;
  *(uint32_t *)(v12 + 8) = 0;
  v13 = v12;
  dest = (void *)(v12 + 12);
  v3 = v17;
  if ( v6 != 1 )
  {
LABEL_10:
    result = &a2[v22] - v23;
    if ( result != 0 )
    {
      v21 = dest;
      v18 = v3;
      result = (int)(uintptr_t)(memmove(dest, a2, 4 * result));
      v3 = v18;
      dest = v21;
    }
    goto LABEL_12;
  }
  result = (int)(uintptr_t)(*a2);
  *(uint32_t *)(v13 + 12) = (uint32_t)(uintptr_t)(*a2);
LABEL_12:
  if ( (void *)v13 != (void *)g4_empty_string_rep )
  {
    *(uint32_t *)(v13 + 8) = 0;
    *(uint32_t *)v13 = v22;
    *((uint32_t *)dest + v22) = 0;
  }
LABEL_14:
  *v3 = (uint32_t)(uintptr_t)(dest);
  return result;
}


// ============================================================================
// Address:   0xe86e90 (size: 277 bytes)
// Symbol:    sub_E86E90
// Demangled: sub_E86E90
// ============================================================================
int sub_E86E90(int a1)
{
  unsigned int v1;
  unsigned int v3;
  size_t v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned int v8;

  v1 = *(uint32_t *)a1;
  v3 = *(uint32_t *)(a1 + 4);
  if ( *(uint32_t *)a1 > 0x1FFFFFFEu )
    sub_1900180("basic_string::_S_create");
  if ( v1 > v3 && v1 < 2 * v3 )
    v1 = 2 * v3;
  v4 = 2 * v1 + 14;
  v5 = 2 * v1 + 30;
  if ( v5 > 0x1000 && v3 < v1 )
  {
    v6 = v1 + ((4096 - (v5 & 0xFFF)) >> 1);
    v1 = 536870910;
    if ( v6 <= 0x1FFFFFFE )
      v1 = v6;
    v4 = 2 * v1 + 14;
  }
  v7 = sub_4EBDC0(v4);
  *(uint32_t *)(v7 + 4) = v1;
  *(uint32_t *)(v7 + 8) = 0;
  v8 = *(uint32_t *)a1;
  if ( *(uint32_t *)a1 != 0 )
  {
    if ( v8 == 1 )
    {
      *(uint16_t *)(v7 + 12) = *(uint16_t *)(a1 + 12);
      v8 = *(uint32_t *)a1;
    }
    else if ( (int)(2 * v8) >> 1 != 0 )
    {
      memmove((void *)(v7 + 12), (const void *)(a1 + 12), 2 * ((int)(2 * v8) >> 1));
      v8 = *(uint32_t *)a1;
    }
  }
  if ( (void *)v7 != (void *)g4_empty_string_rep )
  {
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)v7 = v8;
    *(uint16_t *)(v7 + 2 * v8 + 12) = 0;
  }
  return v7 + 12;
}


// ============================================================================
// Address:   0xe86fb0 (size: 350 bytes)
// Symbol:    sub_E86FB0
// Demangled: sub_E86FB0
// ============================================================================
unsigned int sub_E86FB0(uint32_t *a1, uint16_t *a2)
{
  uint16_t *v4;
  uint16_t *v5;
  unsigned int v6;
  size_t v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  void *dest;
  uint32_t *v15;
  unsigned int result;
  uint32_t *v17;
  int v18;
  void *v19;

  if ( a2 == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  if ( *a2 == 0 )
    goto LABEL_19;
  v4 = a2 + 1;
  do
    v5 = v4++;
  while ( *(v4 - 1) != 0 );
  if ( a2 == v5 )
  {
LABEL_19:
    *a1 = (uint32_t)(uintptr_t)(&unk_20E13AC);
    return (unsigned int)(uintptr_t)(void *)g4_empty_string_rep;
  }
  else
  {
    v6 = v5 - a2;
    if ( v6 > 0x1FFFFFFE )
      sub_1900180("basic_string::_S_create");
    v7 = 2 * v6 + 14;
    v8 = 2 * v6 + 30;
    if ( v8 > 0x1000 && v6 != 0 )
    {
      v9 = 4096 - (v8 & 0xFFF);
      v10 = 536870910;
      v11 = v6 + (v9 >> 1);
      if ( v11 <= 0x1FFFFFFE )
        v10 = v11;
      v7 = 2 * v10 + 14;
    }
    else
    {
      v10 = v6;
    }
    v18 = v10;
    v17 = a1;
    v12 = sub_4EBDC0(v7);
    *(uint32_t *)(v12 + 4) = v18;
    *(uint32_t *)(v12 + 8) = 0;
    v13 = v12;
    dest = (void *)(v12 + 12);
    v15 = v17;
    if ( v6 == 1 )
    {
      result = (uint16_t)*a2;
      *(uint16_t *)(v13 + 12) = result;
    }
    else
    {
      result = v6;
      if ( v6 != 0 )
      {
        v19 = dest;
        result = (unsigned int)(uintptr_t)(memmove(dest, a2, 2 * v6));
        v15 = v17;
        dest = v19;
      }
    }
    if ( (void *)v13 != (void *)g4_empty_string_rep )
    {
      *(uint32_t *)(v13 + 8) = 0;
      *(uint32_t *)v13 = v6;
      *((uint16_t *)dest + v6) = 0;
    }
    *v15 = (uint32_t)(uintptr_t)(dest);
  }
  return result;
}


// ============================================================================
// Address:   0xe87110 (size: 451 bytes)
// Symbol:    sub_E87110
// Demangled: sub_E87110
// ============================================================================
int sub_E87110(uint32_t *a1, uint16_t *a2, int a3)
{
  uint32_t *v3;
  uint16_t *v4;
  unsigned int v6;
  size_t v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  void *dest;
  int result;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v20;
  void *v21;
  unsigned int v22;
  uint16_t *v23;

  v3 = a1;
  v4 = &a2[a3];
  if ( a2 == v4 )
  {
    result = (int)(uintptr_t)(void *)g4_empty_string_rep;
    dest = &unk_20E13AC;
    goto LABEL_14;
  }
  if ( a2 == nullptr )
  {
    if ( v4 != nullptr )
      sub_18FFFD0("basic_string::_S_construct null not valid");
    v16 = sub_4EBDC0(0xEu);
    *(uint32_t *)(v16 + 4) = 0;
    *(uint32_t *)(v16 + 8) = 0;
    v13 = v16;
    dest = (void *)(v16 + 12);
    v22 = 0;
    v23 = nullptr;
    v3 = a1;
    goto LABEL_10;
  }
  v23 = a2;
  v6 = (2 * a3) >> 1;
  v22 = v6;
  if ( v6 > 0x1FFFFFFE )
    sub_1900180("basic_string::_S_create");
  v7 = 2 * v6 + 14;
  v8 = 2 * v6 + 30;
  if ( v8 > 0x1000 && v6 != 0 )
  {
    v9 = 4096 - (v8 & 0xFFF);
    v10 = 536870910;
    v11 = v6 + (v9 >> 1);
    if ( v11 <= 0x1FFFFFFE )
      v10 = v11;
    v7 = 2 * v10 + 14;
  }
  else
  {
    v10 = (2 * a3) >> 1;
  }
  v20 = v10;
  v17 = v3;
  v12 = sub_4EBDC0(v7);
  *(uint32_t *)(v12 + 4) = v20;
  *(uint32_t *)(v12 + 8) = 0;
  v13 = v12;
  dest = (void *)(v12 + 12);
  v3 = v17;
  if ( v6 != 1 )
  {
LABEL_10:
    result = &a2[v22] - v23;
    if ( result != 0 )
    {
      v21 = dest;
      v18 = v3;
      result = (int)(uintptr_t)(memmove(dest, a2, 2 * result));
      v3 = v18;
      dest = v21;
    }
    goto LABEL_12;
  }
  result = *a2;
  *(uint16_t *)(v13 + 12) = result;
LABEL_12:
  if ( (void *)v13 != (void *)g4_empty_string_rep )
  {
    *(uint32_t *)(v13 + 8) = 0;
    *(uint32_t *)v13 = v22;
    *((uint16_t *)dest + v22) = 0;
  }
LABEL_14:
  *v3 = (uint32_t)(uintptr_t)(dest);
  return result;
}


// ============================================================================
// Address:   0xe872e0 (size: 341 bytes)
// Symbol:    sub_E872E0
// Demangled: sub_E872E0
// ============================================================================
int *sub_E872E0(uint32_t *a1, unsigned int a2)
{
  uint8_t *v2;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  size_t n;
  int *result;
  int *v11;
  unsigned int v12;
  uint8_t *src;

  v2 = (uint8_t *)*a1;
  v4 = *(uint32_t *)(*a1 - 12);
  v5 = *(uint32_t *)(*a1 - 8);
  if ( a2 >= *((uint32_t *)v2 - 3) )
    v4 = a2;
  if ( v4 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v5 < v4 )
  {
    if ( v4 < 2 * v5 )
      v4 = 2 * v5;
    if ( v4 + 29 > 0x1000 && v4 > v5 )
    {
      v12 = v4 + 4096 - (((uint16_t)v4 + 29) & 0xFFF);
      v4 = 1073741820;
      if ( v12 <= 0x3FFFFFFC )
        v4 = v12;
    }
  }
  src = v2;
  v6 = sub_4EBDC0(v4 + 13);
  *(uint32_t *)(v6 + 4) = v4;
  *(uint32_t *)(v6 + 8) = 0;
  v7 = (int *)v6;
  v8 = 0;
  n = *((uint32_t *)src - 3);
  if ( n != 0 )
  {
    if ( n == 1 )
      *((uint8_t *)v7 + 12) = *src;
    else
      memcpy(v7 + 3, src, n);
    v8 = *((uint32_t *)src - 3);
  }
  result = (int *)(&dword_20D3E6C);
  if ( v7 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    v7[2] = 0;
    *v7 = v8;
    *((uint8_t *)v7 + v8 + 12) = 0;
  }
  v11 = (int *)(*a1 - 12);
  if ( v11 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    result = (int *)__sync_fetch_and_add((volatile int32_t *)(*a1 - 4), 0xFFFFFFFF);
    if ( (int)(uintptr_t)(result) <= 0 )
      result = (int *)gll_operator_delete_arr((int)(uintptr_t)(v11));
  }
  *a1 = (uint32_t)(uintptr_t)(v7 + 3);
  return result;
}


// ============================================================================
// Address:   0xe87440 (size: 340 bytes)
// Symbol:    sub_E87440
// Demangled: sub_E87440
// ============================================================================
char **sub_E87440(char **a1, const char *s)
{
  size_t v3;
  size_t n;
  unsigned int v5;
  int v6;
  int v7;
  char *v8;
  int v10;
  char *v11;

  if ( s == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v3 = strlen(s);
  if ( s == &s[v3] )
  {
    v8 = (char *)(uintptr_t)(byte_20D3E78);
    goto LABEL_12;
  }
  n = v3;
  if ( v3 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v3 + 29 > 0x1000 && v3 != 0 )
  {
    v5 = v3 + 4096 - (((uint16_t)v3 + 29) & 0xFFF);
    v6 = 1073741820;
    if ( v5 <= 0x3FFFFFFC )
      v6 = v5;
    v10 = v6;
    v7 = sub_4EBDC0(v6 + 13);
    *(uint32_t *)(v7 + 4) = v10;
    *(uint32_t *)(v7 + 8) = 0;
    v8 = (char *)(v7 + 12);
    goto LABEL_9;
  }
  v7 = sub_4EBDC0(v3 + 13);
  *(uint32_t *)(v7 + 4) = n;
  *(uint32_t *)(v7 + 8) = 0;
  v8 = (char *)(v7 + 12);
  if ( n != 1 )
  {
LABEL_9:
    v11 = v8;
    memcpy(v8, s, n);
    v8 = v11;
    goto LABEL_10;
  }
  *(uint8_t *)(v7 + 12) = *s;
LABEL_10:
  if ( (int *)v7 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)v7 = n;
    v8[n] = 0;
  }
LABEL_12:
  *a1 = v8;
  return a1;
}


// ============================================================================
// Address:   0xe875a0 (size: 423 bytes)
// Symbol:    sub_E875A0
// Demangled: sub_E875A0
// ============================================================================
int *sub_E875A0(char **a1, uint8_t *a2, unsigned int a3)
{
  char **v3;
  size_t n;
  int v6;
  int v7;
  char *dest;
  int *result;
  int v10;
  int v11;
  char **v13;
  int v16;
  char *v17;

  v3 = a1;
  if ( a2 == &a2[a3] )
  {
    result = (int *)(&dword_20D3E6C);
    dest = (char *)(uintptr_t)(byte_20D3E78);
    goto LABEL_12;
  }
  if ( a2 == nullptr )
  {
    if ( a3 != 0 )
      sub_18FFFD0("basic_string::_S_construct null not valid");
    n = 0;
    v11 = sub_4EBDC0(0xDu);
    *(uint32_t *)(v11 + 4) = 0;
    *(uint32_t *)(v11 + 8) = 0;
    v7 = v11;
    dest = (char *)(v11 + 12);
    v3 = a1;
    goto LABEL_9;
  }
  n = a3;
  if ( a3 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( a3 + 29 > 0x1000 && a3 != 0 )
  {
    v6 = 1073741820;
    if ( a3 + 4096 - (((uint16_t)a3 + 29) & 0xFFF) <= 0x3FFFFFFC )
      v6 = a3 + 4096 - (((uint16_t)a3 + 29) & 0xFFF);
    v16 = v6;
    v7 = sub_4EBDC0(v6 + 13);
    *(uint32_t *)(v7 + 4) = v16;
    *(uint32_t *)(v7 + 8) = 0;
    dest = (char *)(v7 + 12);
    v3 = a1;
    goto LABEL_9;
  }
  v10 = sub_4EBDC0(a3 + 13);
  *(uint32_t *)(v10 + 4) = a3;
  *(uint32_t *)(v10 + 8) = 0;
  v7 = v10;
  dest = (char *)(v10 + 12);
  v3 = a1;
  if ( a3 != 1 )
  {
LABEL_9:
    v17 = dest;
    v13 = v3;
    result = (int *)memcpy(dest, a2, n);
    v3 = v13;
    dest = v17;
    goto LABEL_10;
  }
  result = (int *)*a2;
  *(uint8_t *)(v7 + 12) = (uint8_t)(uintptr_t)(result);
LABEL_10:
  if ( (int *)v7 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)v7 = n;
    dest[n] = 0;
  }
LABEL_12:
  *v3 = dest;
  return result;
}


// ============================================================================
// Address:   0xe87750 (size: 462 bytes)
// Symbol:    sub_E87750
// Demangled: sub_E87750
// ============================================================================
int sub_E87750(int *a1, int a2, int a3)
{
  int v3;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  int result;
  uint8_t *src;
  uint8_t *dest;
  size_t n;

  v3 = *a1;
  v5 = *(uint32_t *)(*a1 - 12);
  v6 = *(uint32_t *)(*a1 - 8);
  v7 = v5 + a3 - a2;
  n = v5 - a2;
  if ( v7 <= v6 && *(int *)(v3 - 4) <= 0 )
  {
    if ( a3 != a2 && n != 0 )
    {
      src = (uint8_t *)(v3 + a2);
      dest = (uint8_t *)(a3 + v3);
      if ( n == 1 )
        *dest = *src;
      else
        memmove(dest, src, n);
      v3 = *a1;
    }
  }
  else
  {
    if ( v7 > 0x3FFFFFFC )
      sub_1900180("basic_string::_S_create");
    v8 = v5 + a3 - a2;
    if ( v7 > v6 )
    {
      v8 = 2 * v6;
      if ( v7 >= 2 * v6 )
        v8 = v5 + a3 - a2;
    }
    if ( v8 + 29 > 0x1000 && v6 < v8 )
    {
      v9 = v8 + 4096 - (((uint16_t)v8 + 29) & 0xFFF);
      v8 = 1073741820;
      if ( v9 <= 0x3FFFFFFC )
        v8 = v9;
    }
    v10 = sub_4EBDC0(v8 + 13);
    *(uint32_t *)(v10 + 4) = v8;
    *(uint32_t *)(v10 + 8) = 0;
    v3 = v10 + 12;
    if ( n != 0 )
    {
      if ( n == 1 )
        *(uint8_t *)(v3 + a3) = *(uint8_t *)(*a1 + a2);
      else
        memcpy((void *)(v3 + a3), (const void *)(*a1 + a2), n);
    }
    v11 = *a1;
    if ( (int *)(*a1 - 12) != (int *)(uintptr_t)(&dword_20D3E6C
)      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr(v11 - 12);
    }
    *a1 = v3;
  }
  result = v3 - 12;
  if ( (int *)(v3 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v3 - 4) = 0;
    *(uint32_t *)(v3 - 12) = v7;
    *(uint8_t *)(v3 + v7) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0xe8bc20 (size: 66 bytes)
// Symbol:    sub_E8BC20
// Demangled: sub_E8BC20
// ============================================================================
void sub_E8BC20(int a1, int a2)
{
  int i;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v4;

  for ( i = a1; i != a2; i += 8 )
  {
    g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(i + 4));
    v4 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)i;
    g4_noop_dtor(v4);
  }
}


// ============================================================================
// Address:   0xe8bf90 (size: 2271 bytes)
// Symbol:    sub_E8BF90
// Demangled: sub_E8BF90
// ============================================================================
std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *sub_E8BF90(
        std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a1,
        int a2,
        const void **a3)
{
  uint8_t *v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  char v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  char *v17;
  char *v18;
  unsigned int v19;
  int v20;
  int v21;
  int *v22;
  char *v23;
  size_t v24;
  char *v25;
  size_t v26;
  int v27;
  void *v28;
  char *v29;
  int v30;
  uint8_t **v31;
  uint8_t *v32;
  int v33;
  uint8_t *v34;
  size_t v35;
  uint8_t *v36;
  int v37;
  uint8_t *v38;
  char *v39;
  uint8_t *v40;
  size_t v41;
  uint8_t *v42;
  int v43;
  char v44;
  unsigned int v45;
  unsigned int v46;
  char *v47;
  char *v48;
  unsigned int v49;
  int v50;
  int v51;
  int v52;
  int *v53;
  char *v54;
  size_t v55;
  char *v56;
  size_t v57;
  int v58;
  uint8_t *v59;
  char *v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  typedef void *_g4_t_src;
  typedef void *_g4_t_srca;
  typedef uint8_t *_g4_t_srcb;
  typedef uint8_t *_g4_t_srcc;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nc;
  typedef size_t _g4_t_nd;
  typedef size_t _g4_t_ne;
  typedef int _g4_t_v77;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef uint8_t *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef unsigned int _g4_t_v86;
  typedef uint8_t *_g4_t_v87;
  typedef unsigned int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int16_t _g4_t_v90;
  typedef uint32_t _g4_t_v91[4];
  typedef void *_g4_t_v92;
  typedef void *_g4_t_v93;
  typedef void *_g4_t_v94;
  typedef void *_g4_t_v95[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_src)) > _g4_s0 ? (0u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_srca)) > _g4_s1 ? (0u + sizeof(_g4_t_srca)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_srcb)) > _g4_s2 ? (0u + sizeof(_g4_t_srcb)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_srcc)) > _g4_s3 ? (0u + sizeof(_g4_t_srcc)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_n)) > _g4_s4 ? (4u + sizeof(_g4_t_n)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_nb)) > _g4_s5 ? (4u + sizeof(_g4_t_nb)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_na)) > _g4_s6 ? (4u + sizeof(_g4_t_na)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_nc)) > _g4_s7 ? (4u + sizeof(_g4_t_nc)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_nd)) > _g4_s8 ? (4u + sizeof(_g4_t_nd)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_ne)) > _g4_s9 ? (4u + sizeof(_g4_t_ne)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v77)) > _g4_s10 ? (12u + sizeof(_g4_t_v77)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v78)) > _g4_s11 ? (16u + sizeof(_g4_t_v78)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v79)) > _g4_s12 ? (20u + sizeof(_g4_t_v79)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v80)) > _g4_s13 ? (28u + sizeof(_g4_t_v80)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v82)) > _g4_s14 ? (36u + sizeof(_g4_t_v82)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v83)) > _g4_s15 ? (40u + sizeof(_g4_t_v83)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v84)) > _g4_s16 ? (44u + sizeof(_g4_t_v84)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v85)) > _g4_s17 ? (44u + sizeof(_g4_t_v85)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v86)) > _g4_s18 ? (44u + sizeof(_g4_t_v86)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v87)) > _g4_s19 ? (48u + sizeof(_g4_t_v87)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v88)) > _g4_s20 ? (48u + sizeof(_g4_t_v88)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v89)) > _g4_s21 ? (48u + sizeof(_g4_t_v89)) : _g4_s21,
    _g4_s23 = (66u + sizeof(_g4_t_v90)) > _g4_s22 ? (66u + sizeof(_g4_t_v90)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v91)) > _g4_s23 ? (68u + sizeof(_g4_t_v91)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v92)) > _g4_s24 ? (84u + sizeof(_g4_t_v92)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v93)) > _g4_s25 ? (88u + sizeof(_g4_t_v93)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v94)) > _g4_s26 ? (92u + sizeof(_g4_t_v94)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v95)) > _g4_s27 ? (96u + sizeof(_g4_t_v95)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 0u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 0u);
  _g4_t_srcb &srcb = *reinterpret_cast<_g4_t_srcb *>(_g4_sf + 0u);
  _g4_t_srcc &srcc = *reinterpret_cast<_g4_t_srcc *>(_g4_sf + 0u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 4u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 4u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 4u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 4u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 4u);
  _g4_t_ne &ne = *reinterpret_cast<_g4_t_ne *>(_g4_sf + 4u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 12u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 16u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 20u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 28u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 36u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 40u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 44u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 44u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 44u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 48u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 48u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 48u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 66u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 68u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 84u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 88u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 92u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 96u);

  v95[3] = &a3;
  v78 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)a3;
  v82 = (uint8_t *)(*a3);
  if ( *((uint32_t *)*a3 - 3) == 0
    || (v4 = (uint8_t *)(memchr(*a3, 38, *((uint32_t *)*a3 - 3)))) == nullptr
    || (v77 = v4 - v82, v4 - v82 == -1) )
  {
    g4_std_compat::basic_string_ctor(
      a1,
      v78);
    return a1;
  }
  v79 = 0;
  v91[0] = (uint32_t)(uintptr_t)(byte_20D3E78);
  v5 = *((uint32_t *)v82 - 3);
LABEL_6:
  if ( (int)(v5 - 2) > v77 )
  {
    v6 = *(uint32_t *)(a2 + 44);
    if ( *(uint32_t *)(a2 + 48) - v6 <= 3 )
      goto LABEL_65;
    v83 = 0;
    while ( 1 )
    {
      v87 = &v82[v77 + 1];
      v80 = 4 * v83;
      v7 = (int *)(v6 + 4 * v83);
      v8 = *v7;
      v84 = *(uint32_t *)(*v7 - 12) - 1;
      v9 = *(uint32_t *)(*v7 - 4);
      if ( v9 >= 0 && (int *)(v8 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        if ( v9 != 0 )
        {
          sub_E87750(v7, 0, 0);
          v8 = *v7;
        }
        *(uint32_t *)(v8 - 4) = -1;
        v8 = *v7;
        v82 = *(uint8_t **)v78;
      }
      v10 = *(uint8_t *)(v8 + 1);
      v11 = v8 + 1;
      v12 = 0;
      v13 = 0;
      if ( v10 != 0 )
      {
        if ( *v87 != 0 && v84 > 0 )
        {
          if ( v10 != *v87 )
            goto LABEL_63;
          while ( 1 )
          {
            v12 = ++v13;
            v10 = *(uint8_t *)(v11 + v13);
            if ( v10 == 0 )
              break;
            v44 = v87[v13];
            if ( v44 == 0 || v84 <= v13 )
              break;
            if ( v10 != v44 )
              goto LABEL_63;
          }
        }
        else
        {
          v12 = 0;
          v13 = 0;
        }
      }
      if ( v84 == v13 || v10 == 0 && v87[v12] == 0 )
      {
        v14 = *((uint32_t *)v82 - 3);
        if ( v79 > v14 )
          goto LABEL_111;
        v15 = v14 - v79;
        v16 = v77 - v79;
        if ( v15 <= v77 - v79 )
          v16 = v15;
        v17 = (char *)(&v82[v79]);
        v18 = (char *)(&v82[v79 + v16]);
        if ( v18 == (char *)(uintptr_t)(&v82[v79]) )
        {
          v23 = (char *)(uintptr_t)(byte_20D3E78);
          goto LABEL_35;
        }
        if ( v17 == nullptr )
        {
          if ( v18 == nullptr )
          {
            v65 = sub_4EBDC0(0xDu);
            *(uint32_t *)(v65 + 4) = 0;
            *(uint32_t *)(v65 + 8) = 0;
            v22 = (int *)v65;
            v23 = (char *)(v65 + 12);
            v24 = 0;
            v25 = nullptr;
            goto LABEL_34;
          }
LABEL_102:
          sub_18FFFD0("basic_string::_S_construct null not valid");
        }
        v19 = v18 - v17;
        if ( v19 > 0x3FFFFFFC )
          goto LABEL_112;
        if ( v19 + 29 <= 0x1000 || v19 == 0 )
        {
          nd = v19;
          v62 = sub_4EBDC0(v19 + 13);
          v24 = nd;
          v22 = (int *)v62;
          *(uint32_t *)(v62 + 4) = nd;
          *(uint32_t *)(v62 + 8) = 0;
          v23 = (char *)(v62 + 12);
          v25 = (char *)(&v82[v79]);
          if ( nd != 1 )
            goto LABEL_34;
          *(uint8_t *)(v62 + 12) = v82[v79];
          if ( (int *)v62 == (int *)(uintptr_t)(&dword_20D3E6C) )
            goto LABEL_35;
LABEL_92:
          v22[2] = 0;
          *v22 = v24;
          v23[v24] = 0;
          goto LABEL_35;
        }
        v20 = 1073741820;
        n = v19;
        if ( v19 + 4096 - (((uint16_t)v19 + 29) & 0xFFF) <= 0x3FFFFFFC )
          v20 = v19 + 4096 - (((uint16_t)v19 + 29) & 0xFFF);
        v21 = sub_4EBDC0(v20 + 13);
        *(uint32_t *)(v21 + 4) = v20;
        *(uint32_t *)(v21 + 8) = 0;
        v22 = (int *)v21;
        v23 = (char *)(v21 + 12);
        v24 = n;
        v25 = (char *)(&v82[v79]);
LABEL_34:
        nb = v24;
        memcpy(v23, v25, v24);
        v24 = nb;
        if ( v22 != (int *)(uintptr_t)(&dword_20D3E6C) )
          goto LABEL_92;
LABEL_35:
        v95[0] = v23;
        v26 = *((uint32_t *)v23 - 3);
        if ( v26 == 0 )
          goto LABEL_39;
        v27 = *(uint32_t *)(v91[0] - 12);
        v28 = (void *)(v27 + v26);
        if ( v27 + v26 > *(uint32_t *)(v91[0] - 8) || *(int *)(v91[0] - 4) > 0 )
        {
          src = (void *)(v27 + v26);
          sub_E872E0(v91, v27 + v26);
          v23 = (char *)v95[0];
          v28 = src;
          v29 = (char *)(*(uint32_t *)(v91[0] - 12) + v91[0]);
          if ( v26 == 1 )
            goto LABEL_84;
LABEL_38:
          srca = v28;
          memcpy(v29, v23, v26);
          v30 = v91[0];
          v28 = srca;
          if ( (int *)(v91[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
            goto LABEL_85;
          goto LABEL_39;
        }
        v29 = (char *)(v27 + v91[0]);
        if ( v26 != 1 )
          goto LABEL_38;
LABEL_84:
        *v29 = *v23;
        v30 = v91[0];
        if ( (int *)(v91[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
        {
LABEL_85:
          *(uint32_t *)(v30 - 4) = 0;
          *(uint32_t *)(v30 - 12) = (uint32_t)(uintptr_t)(v28);
          *((uint8_t *)v28 + v30) = 0;
        }
LABEL_39:
        g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v95);
        v90 = 0;
        v31 = (uint8_t **)(*(uint32_t *)(a2 + 44) + v80);
        v32 = *v31;
        v33 = *((uint32_t *)*v31 - 1);
        if ( v33 >= 0 && v32 - 12 != (uint8_t *)&dword_20D3E6C )
        {
          if ( v33 != 0 )
          {
            sub_E87750((int *)(*(uint32_t *)(a2 + 44) + v80), 0, 0);
            v32 = *v31;
          }
          *((uint32_t *)v32 - 1) = -1;
          v32 = *v31;
        }
        LOBYTE(v90) = *v32;
        sub_E87440((char **)&v92, (const char *)&v90);
        v34 = (uint8_t *)(v92);
        v35 = *((uint32_t *)v92 - 3);
        if ( v35 == 0 )
          goto LABEL_48;
        v85 = *(uint32_t *)(v91[0] - 12);
        v88 = v35 + v85;
        if ( v35 + v85 > *(uint32_t *)(v91[0] - 8) || *(int *)(v91[0] - 4) > 0 )
        {
          sub_E872E0(v91, v88);
          v34 = (uint8_t *)(v92);
          v36 = (uint8_t *)(*(uint32_t *)(v91[0] - 12) + v91[0]);
          if ( v35 == 1 )
            goto LABEL_88;
LABEL_47:
          memcpy(v36, v34, v35);
          v37 = v91[0];
          if ( (int *)(v91[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
            goto LABEL_89;
          goto LABEL_48;
        }
        v36 = (uint8_t *)(v85 + v91[0]);
        if ( v35 != 1 )
          goto LABEL_47;
LABEL_88:
        *v36 = *v34;
        v37 = v91[0];
        if ( (int *)(v91[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
        {
LABEL_89:
          *(uint32_t *)(v37 - 4) = 0;
          *(uint32_t *)(v37 - 12) = v88;
          *(uint8_t *)(v37 + v88) = 0;
        }
LABEL_48:
        v79 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 44) + 4 * v83) - 12) + v77;
        g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v92);
LABEL_49:
        v38 = *(uint8_t **)v78;
        v82 = *(uint8_t **)v78;
        v5 = *(uint32_t *)(*(uint32_t *)v78 - 12);
        if ( v79 >= v5 )
          break;
        v39 = (char *)memchr(&v38[v79], 38, v5 - v79);
        if ( v39 == nullptr )
          break;
        v77 = v39 - (char *)(v38);
        if ( v39 - (char *)v38 == -1 )
        {
          if ( (int)(v5 - 1) <= (int)v79 )
            goto LABEL_8;
LABEL_53:
          g4_std_compat::basic_string_substr(
            (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v93,
            (unsigned int)(uintptr_t)(v78),
            v79);
          v40 = (uint8_t *)(v93);
          v41 = *((uint32_t *)v93 - 3);
          if ( v41 == 0 )
            goto LABEL_57;
          v89 = *(uint32_t *)(v91[0] - 12);
          v86 = v41 + v89;
          if ( v41 + v89 > *(uint32_t *)(v91[0] - 8) || *(int *)(v91[0] - 4) > 0 )
          {
            sub_E872E0(v91, v86);
            v40 = (uint8_t *)(v93);
            v42 = (uint8_t *)(*(uint32_t *)(v91[0] - 12) + v91[0]);
            if ( v41 == 1 )
              goto LABEL_109;
          }
          else
          {
            v42 = (uint8_t *)(v89 + v91[0]);
            if ( v41 == 1 )
            {
LABEL_109:
              *v42 = *v40;
              v43 = v91[0];
              if ( (int *)(v91[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
              {
LABEL_110:
                *(uint32_t *)(v43 - 4) = 0;
                *(uint32_t *)(v43 - 12) = v86;
                *(uint8_t *)(v43 + v86) = 0;
                g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v93);
                goto LABEL_8;
              }
LABEL_57:
              g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v93);
              goto LABEL_8;
            }
          }
          memcpy(v42, v40, v41);
          v43 = v91[0];
          if ( (int *)(v91[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
            goto LABEL_110;
          goto LABEL_57;
        }
        goto LABEL_6;
      }
LABEL_63:
      ++v83;
      v6 = *(uint32_t *)(a2 + 44);
      if ( v83 >= (*(uint32_t *)(a2 + 48) - v6) >> 2 )
      {
        v5 = *((uint32_t *)v82 - 3);
LABEL_65:
        if ( v79 > v5 )
LABEL_111:
          sub_1900210("basic_string::substr");
        v45 = v77 - v79 + 1;
        v46 = v5 - v79;
        if ( v46 <= v45 )
          v45 = v46;
        v47 = (char *)(&v82[v79 + v45]);
        v48 = (char *)(&v82[v79]);
        if ( v47 == (char *)(uintptr_t)(&v82[v79]) )
        {
          v54 = (char *)(uintptr_t)(byte_20D3E78);
        }
        else if ( v48 != nullptr )
        {
          v49 = v47 - v48;
          if ( v49 > 0x3FFFFFFC )
LABEL_112:
            sub_1900180("basic_string::_S_create");
          if ( v49 + 29 > 0x1000 && v49 != 0 )
          {
            v50 = ((uint16_t)v49 + 29) & 0xFFF;
            v51 = 1073741820;
            na = v49;
            if ( v49 + 4096 - v50 <= 0x3FFFFFFC )
              v51 = v49 + 4096 - v50;
            v52 = sub_4EBDC0(v51 + 13);
            *(uint32_t *)(v52 + 4) = v51;
            *(uint32_t *)(v52 + 8) = 0;
            v53 = (int *)v52;
            v54 = (char *)(v52 + 12);
            v55 = na;
            v56 = (char *)(&v82[v79]);
            goto LABEL_76;
          }
          ne = v49;
          v63 = sub_4EBDC0(v49 + 13);
          v55 = ne;
          v53 = (int *)v63;
          *(uint32_t *)(v63 + 4) = ne;
          *(uint32_t *)(v63 + 8) = 0;
          v54 = (char *)(v63 + 12);
          v56 = (char *)(&v82[v79]);
          if ( ne != 1 )
            goto LABEL_76;
          *(uint8_t *)(v63 + 12) = v82[v79];
          if ( (int *)v63 != (int *)(uintptr_t)(&dword_20D3E6C) )
          {
LABEL_100:
            v53[2] = 0;
            *v53 = v55;
            v54[v55] = 0;
          }
        }
        else
        {
          if ( v47 != nullptr )
            goto LABEL_102;
          v64 = sub_4EBDC0(0xDu);
          *(uint32_t *)(v64 + 4) = 0;
          *(uint32_t *)(v64 + 8) = 0;
          v53 = (int *)v64;
          v54 = (char *)(v64 + 12);
          v55 = 0;
          v56 = nullptr;
LABEL_76:
          nc = v55;
          memcpy(v54, v56, v55);
          v55 = nc;
          if ( v53 != (int *)(uintptr_t)(&dword_20D3E6C) )
            goto LABEL_100;
        }
        v94 = v54;
        v57 = *((uint32_t *)v54 - 3);
        if ( v57 == 0 )
          goto LABEL_81;
        v58 = *(uint32_t *)(v91[0] - 12);
        v59 = (uint8_t *)(v58 + v57);
        if ( v58 + v57 > *(uint32_t *)(v91[0] - 8) || *(int *)(v91[0] - 4) > 0 )
        {
          srcb = (uint8_t *)(v58 + v57);
          sub_E872E0(v91, v58 + v57);
          v54 = (char *)v94;
          v59 = srcb;
          v60 = (char *)(*(uint32_t *)(v91[0] - 12) + v91[0]);
          if ( v57 == 1 )
            goto LABEL_96;
        }
        else
        {
          v60 = (char *)(v58 + v91[0]);
          if ( v57 == 1 )
          {
LABEL_96:
            *v60 = *v54;
            v61 = v91[0];
            if ( (int *)(v91[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
            {
LABEL_97:
              *(uint32_t *)(v61 - 4) = 0;
              *(uint32_t *)(v61 - 12) = (uint32_t)(uintptr_t)(v59);
              v59[v61] = 0;
            }
LABEL_81:
            g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v94);
            v79 = v77 + 1;
            goto LABEL_49;
          }
        }
        srcc = v59;
        memcpy(v60, v54, v57);
        v61 = v91[0];
        v59 = srcc;
        if ( (int *)(v91[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
          goto LABEL_97;
        goto LABEL_81;
      }
    }
  }
  if ( (int)(v5 - 1) > (int)v79 )
    goto LABEL_53;
LABEL_8:
  g4_std_compat::basic_string_ctor(
    a1,
    (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v91);
  g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v91);
  return a1;
}


// ============================================================================
// Address:   0xe8ca10 (size: 1468 bytes)
// Symbol:    sub_E8CA10
// Demangled: sub_E8CA10
// ============================================================================
void sub_E8CA10(
        std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a1,
        int a2,
        std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a3)
{
  int v3;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v4;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v5;
  int v6;
  size_t v7;
  size_t v8;
  size_t v9;
  size_t v10;
  size_t v11;
  bool v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  int v17;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v18;
  int v19;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v26;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v33;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v35;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef int _g4_t_v38;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v39;
  typedef char _g4_t_v40[4];
  typedef char _g4_t_v41[4];
  typedef char _g4_t_v42[4];
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int16_t _g4_t_v51;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v27)) > _g4_s1 ? (20u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v28)) > _g4_s2 ? (20u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v29)) > _g4_s3 ? (20u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v30)) > _g4_s4 ? (24u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v31)) > _g4_s5 ? (24u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v32)) > _g4_s6 ? (28u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v33)) > _g4_s7 ? (28u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v35)) > _g4_s8 ? (32u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v36)) > _g4_s9 ? (32u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v37)) > _g4_s10 ? (36u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v38)) > _g4_s11 ? (36u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v39)) > _g4_s12 ? (44u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v40)) > _g4_s13 ? (48u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v41)) > _g4_s14 ? (52u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v42)) > _g4_s15 ? (56u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v43)) > _g4_s16 ? (60u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v44)) > _g4_s17 ? (64u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v45)) > _g4_s18 ? (68u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v46)) > _g4_s19 ? (72u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v47)) > _g4_s20 ? (76u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v48)) > _g4_s21 ? (80u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v49)) > _g4_s22 ? (84u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v50)) > _g4_s23 ? (88u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v51)) > _g4_s24 ? (92u + sizeof(_g4_t_v51)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 68u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 72u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 76u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 80u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 84u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 88u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 92u);

  v3 = a2;
  v4 = a1;
  v5 = *((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)a1
       + 1);
  if ( v5 != *((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)a1
             + 2) )
  {
    v6 = 0;
    if ( v5 != nullptr )
    {
      v27 = v5;
      g4_std_compat::basic_string_ctor(
        v5,
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v5 - 48));
      g4_std_compat::basic_string_ctor(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v27 + 4),
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v27 - 44));
      g4_std_compat::basic_string_ctor(
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v27 + 8),
        (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v27 - 40));
      *((uint32_t *)v27 + 3) = *((uint32_t *)v27 - 9);
      *((uint32_t *)v27 + 4) = *((uint32_t *)v27 - 8);
      *((uint32_t *)v27 + 5) = *((uint32_t *)v27 - 7);
      *((uint32_t *)v27 + 6) = *((uint32_t *)v27 - 6);
      *((uint32_t *)v27 + 7) = *((uint32_t *)v27 - 5);
      *((uint32_t *)v27 + 8) = *((uint32_t *)v27 - 4);
      *((uint32_t *)v27 + 9) = *((uint32_t *)v27 - 3);
      *((uint32_t *)v27 + 10) = *((uint32_t *)v27 - 2);
      *((uint16_t *)v27 + 22) = *((uint16_t *)v27 - 2);
      v6 = *((uint32_t *)v4 + 1);
    }
    *((uint32_t *)v4 + 1) = v6 + 48;
    g4_std_compat::basic_string_ctor(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v40,
      a3);
    g4_std_compat::basic_string_ctor(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v41,
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)a3 + 4));
    g4_std_compat::basic_string_ctor(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v42,
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)a3 + 8));
    v7 = *((uint32_t *)v4 + 1);
    v43 = *((uint32_t *)a3 + 3);
    v44 = *((uint32_t *)a3 + 4);
    v45 = *((uint32_t *)a3 + 5);
    v46 = *((uint32_t *)a3 + 6);
    v47 = *((uint32_t *)a3 + 7);
    v48 = *((uint32_t *)a3 + 8);
    v49 = *((uint32_t *)a3 + 9);
    v50 = *((uint32_t *)a3 + 10);
    v37 = v7;
    v8 = v7 - 96;
    v51 = *((uint16_t *)a3 + 22);
    v32 = -1431655765 * ((int)(v8 - a2) >> 4);
    if ( v32 > 0 )
    {
      v9 = v37 - 48;
      v10 = v37 - 144;
      while ( 1 )
      {
        g4_std_compat::basic_string_assign(
          (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v9 - 48),
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v9 - 96));
        g4_std_compat::basic_string_assign(
          (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v9 - 44),
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v9 - 92));
        g4_std_compat::basic_string_assign(
          (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v9 - 40),
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v9 - 88));
        v11 = v9 - 48 - v37;
        v12 = v32-- == 1;
        *(uint32_t *)(v11 + v8 + 108) = *(uint32_t *)(v9 - 192 + 108);
        *(uint32_t *)(v11 + v8 + 112) = *(uint32_t *)(v11 + v10 + 112);
        *(uint32_t *)(v11 + v8 + 116) = *(uint32_t *)(v11 + v10 + 116);
        *(uint32_t *)(v11 + v8 + 120) = *(uint32_t *)(v11 + v10 + 120);
        *(uint32_t *)(v11 + v8 + 124) = *(uint32_t *)(v11 + v10 + 124);
        *(uint32_t *)(v11 + v8 + 128) = *(uint32_t *)(v11 + v10 + 128);
        *(uint32_t *)(v11 + v8 + 132) = *(uint32_t *)(v11 + v10 + 132);
        *(uint32_t *)(v11 + v8 + 136) = *(uint32_t *)(v11 + v10 + 136);
        *(uint16_t *)(v11 + v8 + 140) = *(uint16_t *)(v9 - 192 + 140);
        if ( v12 )
          break;
        v9 -= 48;
      }
    }
    g4_std_compat::basic_string_assign(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)a2,
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v40);
    g4_std_compat::basic_string_assign(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(a2 + 4),
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v41);
    g4_std_compat::basic_string_assign(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(a2 + 8),
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v42);
    *(uint32_t *)(a2 + 12) = v43;
    *(uint32_t *)(a2 + 16) = v44;
    *(uint32_t *)(a2 + 20) = v45;
    *(uint32_t *)(a2 + 24) = v46;
    *(uint32_t *)(a2 + 28) = v47;
    *(uint32_t *)(a2 + 32) = v48;
    *(uint32_t *)(a2 + 36) = v49;
    *(uint32_t *)(a2 + 40) = v50;
    *(uint16_t *)(a2 + 44) = v51;
    g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v42);
    g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v41);
    g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v40);
    return;
  }
  v13 = *(uint32_t *)a1;
  v14 = -1431655765 * (((int)(uintptr_t)(v5) - v13) >> 4);
  if ( v14 != 0 )
  {
    v15 = 2 * v14;
    if ( v14 > 2 * v14 || v15 > 0x5555555 )
    {
      v38 = -16;
      v16 = -1431655765 * ((a2 - v13) >> 4);
    }
    else
    {
      v38 = 96 * v14;
      v16 = -1431655765 * ((a2 - v13) >> 4);
      if ( v15 == 0 )
      {
        v17 = 48;
        v33 = nullptr;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v38 = 48;
    v16 = -1431655765 * ((a2 - v13) >> 4);
  }
  v28 = v16;
  v33 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)sub_4EBDC0(v38);
  v16 = v28;
  v17 = (int)(uintptr_t)(v33) + 48;
LABEL_13:
  v18 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v33 + 48 * v16);
  if ( v18 != nullptr )
  {
    v30 = v17;
    v29 = v18;
    g4_std_compat::basic_string_ctor(
      v18,
      a3);
    g4_std_compat::basic_string_ctor(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v29 + 4),
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)a3 + 4));
    g4_std_compat::basic_string_ctor(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v29 + 8),
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)a3 + 8));
    *((uint32_t *)v29 + 3) = *((uint32_t *)a3 + 3);
    *((uint32_t *)v29 + 4) = *((uint32_t *)a3 + 4);
    *((uint32_t *)v29 + 5) = *((uint32_t *)a3 + 5);
    *((uint32_t *)v29 + 6) = *((uint32_t *)a3 + 6);
    *((uint32_t *)v29 + 7) = *((uint32_t *)a3 + 7);
    *((uint32_t *)v29 + 8) = *((uint32_t *)a3 + 8);
    *((uint32_t *)v29 + 9) = *((uint32_t *)a3 + 9);
    *((uint32_t *)v29 + 10) = *((uint32_t *)a3 + 10);
    *((uint16_t *)v29 + 22) = *((uint16_t *)a3 + 22);
    v17 = v30;
  }
  if ( a2 != *(uint32_t *)v4 )
  {
    v39 = v4;
    v19 = *(uint32_t *)v4;
    v20 = v33;
    do
    {
      if ( v20 != nullptr )
      {
        g4_std_compat::basic_string_ctor(
          v20,
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v19);
        g4_std_compat::basic_string_ctor(
          (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v20 + 4),
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v19 + 4));
        g4_std_compat::basic_string_ctor(
          (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v20 + 8),
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v19 + 8));
        *((uint32_t *)v20 + 3) = *(uint32_t *)(v19 + 12);
        *((uint32_t *)v20 + 4) = *(uint32_t *)(v19 + 16);
        *((uint32_t *)v20 + 5) = *(uint32_t *)(v19 + 20);
        *((uint32_t *)v20 + 6) = *(uint32_t *)(v19 + 24);
        *((uint32_t *)v20 + 7) = *(uint32_t *)(v19 + 28);
        *((uint32_t *)v20 + 8) = *(uint32_t *)(v19 + 32);
        *((uint32_t *)v20 + 9) = *(uint32_t *)(v19 + 36);
        *((uint32_t *)v20 + 10) = *(uint32_t *)(v19 + 40);
        *((uint16_t *)v20 + 22) = *(uint16_t *)(v19 + 44);
      }
      v19 += 48;
      v20 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v20 + 48);
    }
    while ( a2 != v19 );
    v4 = v39;
    v17 = (int)(uintptr_t)(v20) + 48;
  }
  v21 = *((uint32_t *)v4 + 1);
  if ( a2 != v21 )
  {
    v35 = v4;
    v22 = *((uint32_t *)v4 + 1);
    v23 = v17;
    do
    {
      if ( v23 != 0 )
      {
        g4_std_compat::basic_string_ctor(
          (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v23,
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v3);
        g4_std_compat::basic_string_ctor(
          (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v23 + 4),
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v3 + 4));
        g4_std_compat::basic_string_ctor(
          (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v23 + 8),
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v3 + 8));
        *(uint32_t *)(v23 + 12) = *(uint32_t *)(v3 + 12);
        *(uint32_t *)(v23 + 16) = *(uint32_t *)(v3 + 16);
        *(uint32_t *)(v23 + 20) = *(uint32_t *)(v3 + 20);
        *(uint32_t *)(v23 + 24) = *(uint32_t *)(v3 + 24);
        *(uint32_t *)(v23 + 28) = *(uint32_t *)(v3 + 28);
        *(uint32_t *)(v23 + 32) = *(uint32_t *)(v3 + 32);
        *(uint32_t *)(v23 + 36) = *(uint32_t *)(v3 + 36);
        *(uint32_t *)(v23 + 40) = *(uint32_t *)(v3 + 40);
        *(uint16_t *)(v23 + 44) = *(uint16_t *)(v3 + 44);
      }
      v3 += 48;
      v23 += 48;
    }
    while ( v22 != v3 );
    v4 = v35;
    v17 = v23;
    v21 = *((uint32_t *)v35 + 1);
  }
  v24 = *(uint32_t *)v4;
  if ( v21 != *(uint32_t *)v4 )
  {
    v36 = v4;
    v25 = v17;
    do
    {
      g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v24 + 8));
      g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v24 + 4));
      v26 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v24;
      v24 += 48;
      g4_noop_dtor(v26);
    }
    while ( v21 != v24 );
    v17 = v25;
    v4 = v36;
    v24 = *(uint32_t *)v36;
  }
  if ( v24 != 0 )
  {
    v31 = v17;
    gll_operator_delete_arr(v24);
    v17 = v31;
  }
  *((uint32_t *)v4 + 1) = v17;
  *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v33);
  *((uint32_t *)v4 + 2) = (uint32_t)(uintptr_t)((char *)v33 + v38);
}


// ============================================================================
// Address:   0xe8e780 (size: 66 bytes)
// Symbol:    sub_E8E780
// Demangled: sub_E8E780
// ============================================================================
void sub_E8E780(int a1, int a2)
{
  int i;
  std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *v4;

  for ( i = a1; i != a2; i += 8 )
  {
    g4_noop_dtor((std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)(i + 4));
    v4 = (std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)i;
    g4_noop_dtor(v4);
  }
}


// ============================================================================
// Address:   0xe8e7d0 (size: 5051 bytes)
// Symbol:    sub_E8E7D0
// Demangled: sub_E8E7D0
// ============================================================================
int *sub_E8E7D0(int *a1, int a2, volatile int32_t **a3)
{
  volatile int32_t *v3;
  int v4;
  volatile int32_t *v5;
  volatile int32_t *v7;
  int v8;
  volatile int32_t *v9;
  volatile int32_t *v10;
  int v11;
  volatile int32_t *v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  int *v17;
  uint16_t *v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  size_t v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  uint16_t *v26;
  uint16_t *v27;
  volatile int32_t *v28;
  int16_t v29;
  uint16_t *v30;
  uint16_t *v31;
  int v32;
  int v33;
  int16_t v34;
  unsigned int v35;
  unsigned int v36;
  uint16_t *v37;
  uint16_t *v38;
  unsigned int v39;
  size_t v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  int v45;
  int v46;
  uint16_t *v47;
  int v48;
  int v49;
  uint16_t *v50;
  unsigned int v51;
  unsigned int v52;
  size_t v53;
  unsigned int v54;
  unsigned int v55;
  int v56;
  uint16_t **v57;
  uint16_t *v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  int v66;
  uint16_t *v67;
  uint16_t *v68;
  int v69;
  uint16_t *v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  int v75;
  int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  uint16_t *v80;
  int v81;
  uint16_t *v82;
  int16_t v83;
  int v84;
  uint16_t *v85;
  uint16_t *v86;
  unsigned int v87;
  size_t v88;
  unsigned int v89;
  unsigned int v90;
  int v91;
  unsigned int v92;
  int v93;
  int v94;
  uint16_t *v95;
  uint8_t *v96;
  int v97;
  uint16_t *v98;
  unsigned int v99;
  unsigned int v100;
  unsigned int v101;
  size_t v102;
  unsigned int v103;
  unsigned int v104;
  int v105;
  int v106;
  uint16_t *v107;
  uint16_t *v108;
  uint16_t *v109;
  uint16_t *v110;
  unsigned int v111;
  size_t v112;
  unsigned int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  uint16_t *v118;
  uint8_t *v119;
  int v120;
  int v121;
  uint16_t *v122;
  unsigned int v123;
  unsigned int v124;
  unsigned int v125;
  size_t v126;
  int v127;
  int v128;
  uint16_t *v129;
  uint16_t *v130;
  int v131;
  unsigned int v132;
  unsigned int v133;
  int v134;
  typedef volatile int32_t *_g4_t_i;
  typedef unsigned int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef uint16_t *_g4_t_v138;
  typedef int _g4_t_v139;
  typedef unsigned int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef unsigned int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef unsigned int _g4_t_v145;
  typedef unsigned int _g4_t_v146;
  typedef uint16_t *_g4_t_v147;
  typedef uint16_t *_g4_t_v148;
  typedef void *_g4_t_v149;
  typedef int _g4_t_v150;
  typedef int _g4_t_v151;
  typedef int _g4_t_v152;
  typedef int _g4_t_v154;
  typedef unsigned int _g4_t_v155;
  typedef volatile int32_t *_g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef size_t _g4_t_v161;
  typedef unsigned int _g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef char *_g4_t_v165;
  typedef unsigned int _g4_t_v166;
  typedef size_t _g4_t_v167;
  typedef int _g4_t_v168;
  typedef uint16_t *_g4_t_v169;
  typedef unsigned int _g4_t_v170;
  typedef uint16_t *_g4_t_v171;
  typedef int _g4_t_v172;
  typedef unsigned int _g4_t_v173;
  typedef unsigned int _g4_t_v174;
  typedef int _g4_t_v175;
  typedef uint16_t *_g4_t_v176;
  typedef unsigned int _g4_t_v177;
  typedef int _g4_t_v178;
  typedef void *_g4_t_v179;
  typedef unsigned int _g4_t_v180;
  typedef unsigned int _g4_t_v181;
  typedef int _g4_t_v182;
  typedef unsigned int _g4_t_v183;
  typedef unsigned int _g4_t_v184;
  typedef uint16_t *_g4_t_v185;
  typedef uint16_t *_g4_t_v186;
  typedef uint16_t *_g4_t_v187;
  typedef uint16_t *_g4_t_v188;
  typedef uint16_t *_g4_t_v189;
  typedef int _g4_t_v190[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v136)) > _g4_s1 ? (16u + sizeof(_g4_t_v136)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v137)) > _g4_s2 ? (16u + sizeof(_g4_t_v137)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v138)) > _g4_s3 ? (16u + sizeof(_g4_t_v138)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v139)) > _g4_s4 ? (16u + sizeof(_g4_t_v139)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v140)) > _g4_s5 ? (16u + sizeof(_g4_t_v140)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v141)) > _g4_s6 ? (16u + sizeof(_g4_t_v141)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v142)) > _g4_s7 ? (16u + sizeof(_g4_t_v142)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v143)) > _g4_s8 ? (16u + sizeof(_g4_t_v143)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v144)) > _g4_s9 ? (16u + sizeof(_g4_t_v144)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v145)) > _g4_s10 ? (20u + sizeof(_g4_t_v145)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v146)) > _g4_s11 ? (20u + sizeof(_g4_t_v146)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v147)) > _g4_s12 ? (20u + sizeof(_g4_t_v147)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v148)) > _g4_s13 ? (20u + sizeof(_g4_t_v148)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v149)) > _g4_s14 ? (20u + sizeof(_g4_t_v149)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v150)) > _g4_s15 ? (20u + sizeof(_g4_t_v150)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v151)) > _g4_s16 ? (20u + sizeof(_g4_t_v151)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v152)) > _g4_s17 ? (20u + sizeof(_g4_t_v152)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v154)) > _g4_s18 ? (28u + sizeof(_g4_t_v154)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v155)) > _g4_s19 ? (32u + sizeof(_g4_t_v155)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v156)) > _g4_s20 ? (40u + sizeof(_g4_t_v156)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v157)) > _g4_s21 ? (44u + sizeof(_g4_t_v157)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v159)) > _g4_s22 ? (52u + sizeof(_g4_t_v159)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v160)) > _g4_s23 ? (52u + sizeof(_g4_t_v160)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v161)) > _g4_s24 ? (52u + sizeof(_g4_t_v161)) : _g4_s24,
    _g4_s26 = (56u + sizeof(_g4_t_v162)) > _g4_s25 ? (56u + sizeof(_g4_t_v162)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v163)) > _g4_s26 ? (56u + sizeof(_g4_t_v163)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v164)) > _g4_s27 ? (56u + sizeof(_g4_t_v164)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v165)) > _g4_s28 ? (56u + sizeof(_g4_t_v165)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v166)) > _g4_s29 ? (56u + sizeof(_g4_t_v166)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v167)) > _g4_s30 ? (56u + sizeof(_g4_t_v167)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v168)) > _g4_s31 ? (56u + sizeof(_g4_t_v168)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v169)) > _g4_s32 ? (56u + sizeof(_g4_t_v169)) : _g4_s32,
    _g4_s34 = (56u + sizeof(_g4_t_v170)) > _g4_s33 ? (56u + sizeof(_g4_t_v170)) : _g4_s33,
    _g4_s35 = (56u + sizeof(_g4_t_v171)) > _g4_s34 ? (56u + sizeof(_g4_t_v171)) : _g4_s34,
    _g4_s36 = (56u + sizeof(_g4_t_v172)) > _g4_s35 ? (56u + sizeof(_g4_t_v172)) : _g4_s35,
    _g4_s37 = (60u + sizeof(_g4_t_v173)) > _g4_s36 ? (60u + sizeof(_g4_t_v173)) : _g4_s36,
    _g4_s38 = (60u + sizeof(_g4_t_v174)) > _g4_s37 ? (60u + sizeof(_g4_t_v174)) : _g4_s37,
    _g4_s39 = (60u + sizeof(_g4_t_v175)) > _g4_s38 ? (60u + sizeof(_g4_t_v175)) : _g4_s38,
    _g4_s40 = (60u + sizeof(_g4_t_v176)) > _g4_s39 ? (60u + sizeof(_g4_t_v176)) : _g4_s39,
    _g4_s41 = (60u + sizeof(_g4_t_v177)) > _g4_s40 ? (60u + sizeof(_g4_t_v177)) : _g4_s40,
    _g4_s42 = (60u + sizeof(_g4_t_v178)) > _g4_s41 ? (60u + sizeof(_g4_t_v178)) : _g4_s41,
    _g4_s43 = (60u + sizeof(_g4_t_v179)) > _g4_s42 ? (60u + sizeof(_g4_t_v179)) : _g4_s42,
    _g4_s44 = (60u + sizeof(_g4_t_v180)) > _g4_s43 ? (60u + sizeof(_g4_t_v180)) : _g4_s43,
    _g4_s45 = (60u + sizeof(_g4_t_v181)) > _g4_s44 ? (60u + sizeof(_g4_t_v181)) : _g4_s44,
    _g4_s46 = (60u + sizeof(_g4_t_v182)) > _g4_s45 ? (60u + sizeof(_g4_t_v182)) : _g4_s45,
    _g4_s47 = (60u + sizeof(_g4_t_v183)) > _g4_s46 ? (60u + sizeof(_g4_t_v183)) : _g4_s46,
    _g4_s48 = (60u + sizeof(_g4_t_v184)) > _g4_s47 ? (60u + sizeof(_g4_t_v184)) : _g4_s47,
    _g4_s49 = (64u + sizeof(_g4_t_v185)) > _g4_s48 ? (64u + sizeof(_g4_t_v185)) : _g4_s48,
    _g4_s50 = (76u + sizeof(_g4_t_v186)) > _g4_s49 ? (76u + sizeof(_g4_t_v186)) : _g4_s49,
    _g4_s51 = (80u + sizeof(_g4_t_v187)) > _g4_s50 ? (80u + sizeof(_g4_t_v187)) : _g4_s50,
    _g4_s52 = (84u + sizeof(_g4_t_v188)) > _g4_s51 ? (84u + sizeof(_g4_t_v188)) : _g4_s51,
    _g4_s53 = (88u + sizeof(_g4_t_v189)) > _g4_s52 ? (88u + sizeof(_g4_t_v189)) : _g4_s52,
    _g4_s54 = (92u + sizeof(_g4_t_v190)) > _g4_s53 ? (92u + sizeof(_g4_t_v190)) : _g4_s53
  };
  alignas(16) uint8_t _g4_sf[_g4_s54];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 16u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 16u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 16u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 16u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 16u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 16u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 16u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 16u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 16u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 20u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 20u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 20u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 20u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 20u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 20u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 20u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 20u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 28u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 32u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 40u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 44u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 52u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 52u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 52u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 56u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 56u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 56u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 56u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 56u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 56u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 56u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 56u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 56u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 56u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 56u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 60u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 60u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 60u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 60u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 60u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 60u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 60u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 60u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 60u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 60u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 60u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 60u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 64u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 76u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 80u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 84u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 88u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 92u);

  v3 = *a3;
  v4 = *((uint32_t *)*a3 - 3);
  if ( v4 == 0 )
    goto LABEL_2;
  if ( *(uint16_t *)v3 != 38 )
  {
    v7 = (volatile int32_t *)((char *)v3 + 2);
    v8 = 0;
    while ( ++v8 != v4 )
    {
      v9 = v7;
      v7 = (volatile int32_t *)((char *)v7 + 2);
      if ( *((uint16_t *)v7 - 1) == 38 )
        goto LABEL_18;
    }
    v10 = (volatile int32_t *)((char *)v3 + 2);
    goto LABEL_11;
  }
  v9 = *a3;
LABEL_18:
  if ( v9 == nullptr || (v154 = ((char *)v9 - (char *)v3) >> 1) == -1 )
  {
    if ( *(uint16_t *)v3 != 38 )
    {
      v10 = (volatile int32_t *)((char *)v3 + 2);
LABEL_11:
      v11 = 0;
      while ( ++v11 != v4 )
      {
        v12 = v10;
        v10 = (volatile int32_t *)((char *)v10 + 2);
        if ( *((uint16_t *)v10 - 1) == 38 )
          goto LABEL_14;
      }
      goto LABEL_2;
    }
    v12 = *a3;
LABEL_14:
    if ( v12 == nullptr || (v154 = ((char *)v12 - (char *)v3) >> 1) == -1 )
    {
LABEL_2:
      v5 = v3 - 3;
      if ( *((int *)v3 - 1) < 0 )
      {
        v3 = (volatile int32_t *)sub_E86E90((int)(uintptr_t)(v5));
      }
      else if ( v5 != (volatile int32_t *)(void *)g4_empty_string_rep )
      {
        __sync_add_and_fetch(v3 - 1, 1u);
      }
      *a1 = (int)(uintptr_t)(v3);
      return a1;
    }
  }
  v155 = 0;
  v185 = (uint16_t *)(&unk_20E13AC);
  v173 = *((uint32_t *)v3 - 3);
  if ( v154 >= (int)(v173 - 2) )
  {
    v162 = 0;
    goto LABEL_22;
  }
  while ( 2 )
  {
    v16 = *(uint32_t *)(a2 + 44);
    if ( *(uint32_t *)(a2 + 48) - v16 <= 3 )
      goto LABEL_149;
    v159 = 0;
    for ( i = v3; ; i = v156 )
    {
      v157 = 4 * v159;
      v17 = (int *)(v16 + 4 * v159);
      v18 = (uint16_t *)*v17;
      v19 = *(uint32_t *)(*v17 - 4);
      v20 = *(uint32_t *)(*v17 - 12);
      if ( v19 < 0 )
      {
        v156 = i;
        v28 = i;
      }
      else
      {
        if ( v18 - 6 != (uint16_t *)(void *)g4_empty_string_rep )
        {
          if ( v19 == 0 )
          {
LABEL_49:
            *((uint32_t *)v18 - 1) = -1;
            v18 = (uint16_t *)*v17;
            v156 = *a3;
            v28 = i;
            goto LABEL_50;
          }
          v174 = *((uint32_t *)v18 - 2);
          if ( v20 > 0x1FFFFFFE )
            goto LABEL_299;
          v21 = *(uint32_t *)(*v17 - 12);
          if ( v20 > v174 )
          {
            v21 = 2 * v174;
            if ( 2 * v174 < v20 )
              v21 = *(uint32_t *)(*v17 - 12);
          }
          v22 = 2 * v21 + 14;
          v23 = 2 * v21 + 30;
          if ( v23 > 0x1000 && v174 < v21 )
          {
            v24 = v21 + ((4096 - (v23 & 0xFFF)) >> 1);
            v21 = 536870910;
            if ( v24 <= 0x1FFFFFFE )
              v21 = v24;
            v22 = 2 * v21 + 14;
          }
          v136 = v21;
          v25 = sub_4EBDC0(v22);
          *(uint32_t *)(v25 + 4) = v136;
          *(uint32_t *)(v25 + 8) = 0;
          v175 = v25;
          v26 = (uint16_t *)*v17;
          if ( v20 != 0 )
          {
            if ( v20 == 1 )
            {
              *(uint16_t *)(v25 + 12) = *v26;
              v26 = (uint16_t *)*v17;
              v163 = v25 + 12;
            }
            else
            {
              v163 = v25 + 12;
              if ( (int)(2 * v20) >> 1 != 0 )
              {
                memmove((void *)(v25 + 12), v26, 2 * ((int)(2 * v20) >> 1));
                v26 = (uint16_t *)*v17;
                v27 = (uint16_t *)(*v17 - 12);
                if ( v27 == (uint16_t *)(void *)g4_empty_string_rep )
                {
LABEL_47:
                  v18 = (uint16_t *)v163;
                  *v17 = v163;
                  if ( (void *)v175 != (void *)g4_empty_string_rep )
                  {
                    *(uint32_t *)(v175 + 8) = 0;
                    *(uint32_t *)v175 = v20;
                    *(uint16_t *)(v163 + 2 * v20) = 0;
                    v18 = (uint16_t *)*v17;
                  }
                  goto LABEL_49;
                }
LABEL_189:
                if ( __sync_fetch_and_add((volatile int32_t *)v26 - 1, 0xFFFFFFFF) <= 0 )
                  gll_operator_delete_arr((int)(uintptr_t)(v27));
                goto LABEL_47;
              }
            }
          }
          else
          {
            v163 = v25 + 12;
          }
          v27 = v26 - 6;
          if ( v26 - 6 == (uint16_t *)(void *)g4_empty_string_rep )
            goto LABEL_47;
          goto LABEL_189;
        }
        v156 = i;
        v28 = i;
      }
LABEL_50:
      v29 = v18[1];
      v30 = (uint16_t *)v28 + v154 + 1;
      v164 = v20 - 1;
      v31 = v18 + 1;
      v32 = 0;
      v33 = 0;
      v176 = v30;
      if ( v29 != 0 )
      {
        v34 = *v30;
        if ( v34 != 0 && v164 > 0 )
        {
          if ( v34 != v29 )
            goto LABEL_143;
          while ( 1 )
          {
            v32 = ++v33;
            v29 = v31[v33];
            if ( v29 == 0 )
              break;
            v83 = v176[v33];
            if ( v83 == 0 || v164 <= v33 )
              break;
            if ( v29 != v83 )
              goto LABEL_143;
          }
        }
        else
        {
          v32 = 0;
          v33 = 0;
        }
      }
      if ( v164 == v33 || v29 == 0 && v176[v32] == 0 )
        break;
LABEL_143:
      ++v159;
      v16 = *(uint32_t *)(a2 + 44);
      if ( v159 >= (*(uint32_t *)(a2 + 48) - v16) >> 2 )
      {
        v3 = v156;
        v173 = *((uint32_t *)v156 - 3);
LABEL_149:
        if ( v155 > v173 )
          goto LABEL_298;
        v84 = v173 - v155;
        if ( v173 - v155 > v154 - v155 + 1 )
          v84 = v154 - v155 + 1;
        v85 = (uint16_t *)v3 + v155 + v84;
        v86 = (uint16_t *)v3 + v155;
        if ( v85 == v86 )
        {
          v95 = (uint16_t *)(&unk_20E13AC);
          goto LABEL_164;
        }
        if ( v86 != nullptr )
        {
          v169 = v86;
          v87 = v85 - v86;
          v181 = v87;
          if ( v87 > 0x1FFFFFFE )
            goto LABEL_299;
          v88 = 2 * v87 + 14;
          v89 = 2 * v87 + 30;
          if ( v89 > 0x1000 && v87 != 0 )
          {
            v90 = 4096 - (v89 & 0xFFF);
            v91 = 536870910;
            v92 = v87 + (v90 >> 1);
            if ( v92 <= 0x1FFFFFFE )
              v91 = v92;
            v88 = 2 * v91 + 14;
          }
          else
          {
            v91 = v87;
          }
          v147 = v86;
          v140 = v87;
          v93 = sub_4EBDC0(v88);
          *(uint32_t *)(v93 + 4) = v91;
          *(uint32_t *)(v93 + 8) = 0;
          v94 = v93;
          v95 = (uint16_t *)(v93 + 12);
          v96 = (uint8_t *)(v147);
          if ( v140 == 1 )
          {
            *(uint16_t *)(v93 + 12) = *v147;
            if ( (void *)v93 == (void *)g4_empty_string_rep )
              goto LABEL_164;
            goto LABEL_224;
          }
        }
        else
        {
          if ( v85 != nullptr )
            goto LABEL_207;
          v131 = sub_4EBDC0(0xEu);
          *(uint32_t *)(v131 + 4) = 0;
          *(uint32_t *)(v131 + 8) = 0;
          v94 = v131;
          v95 = (uint16_t *)(v131 + 12);
          v169 = nullptr;
          v181 = 0;
          v96 = nullptr;
        }
        v97 = (&v96[2 * v181] - (uint8_t *)v169) >> 1;
        if ( v97 != 0 )
          memmove(v95, v96, 2 * v97);
        if ( (void *)v94 == (void *)g4_empty_string_rep )
        {
LABEL_164:
          v188 = v95;
          v182 = *((uint32_t *)v95 - 3);
          if ( v182 == 0 )
            goto LABEL_185;
          v98 = v185;
          v99 = *((uint32_t *)v185 - 3);
          v170 = v99 + *((uint32_t *)v95 - 3);
          v100 = *((uint32_t *)v185 - 2);
          if ( v170 <= v100 && *((int *)v185 - 1) <= 0 )
          {
LABEL_181:
            v108 = &v98[v99];
            if ( v182 != 1 )
            {
              if ( (2 * v182) >> 1 != 0 )
              {
                memmove(v108, v95, 2 * ((2 * v182) >> 1));
                v98 = v185;
              }
              if ( v98 - 6 == (uint16_t *)(void *)g4_empty_string_rep )
                goto LABEL_185;
              goto LABEL_219;
            }
            *v108 = *v95;
            v98 = v185;
            if ( v185 - 6 != (uint16_t *)(void *)g4_empty_string_rep )
            {
LABEL_219:
              *((uint32_t *)v98 - 1) = 0;
              *((uint32_t *)v98 - 3) = v170;
              v98[v170] = 0;
            }
LABEL_185:
            g4_noop_dtor((std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)&v188);
            v155 = v154 + 1;
            v77 = v154 + 1;
            goto LABEL_134;
          }
          v101 = v99 + *((uint32_t *)v95 - 3);
          if ( v170 < v99 )
            v101 = *((uint32_t *)v185 - 3);
          if ( v101 > 0x1FFFFFFE )
            goto LABEL_299;
          v102 = 2 * v101 + 14;
          if ( v100 < v101 )
          {
            if ( v101 < 2 * v100 )
              v101 = 2 * v100;
            v102 = 2 * v101 + 14;
            v103 = 2 * v101 + 30;
            if ( v103 > 0x1000 && v100 < v101 )
            {
              v104 = v101 + ((4096 - (v103 & 0xFFF)) >> 1);
              v101 = 536870910;
              if ( v104 <= 0x1FFFFFFE )
                v101 = v104;
              v102 = 2 * v101 + 14;
            }
          }
          v105 = sub_4EBDC0(v102);
          *(uint32_t *)(v105 + 4) = v101;
          *(uint32_t *)(v105 + 8) = 0;
          v106 = *((uint32_t *)v98 - 3);
          v107 = (uint16_t *)(v105 + 12);
          if ( v106 != 0 )
          {
            if ( v106 == 1 )
            {
              *(uint16_t *)(v105 + 12) = *v98;
              v106 = *((uint32_t *)v98 - 3);
            }
            else if ( (2 * v106) >> 1 != 0 )
            {
              v149 = (void *)v105;
              memmove((void *)(v105 + 12), v98, 2 * ((2 * v106) >> 1));
              v105 = (int)(uintptr_t)(v149);
              v106 = *((uint32_t *)v98 - 3);
              if ( v149 == (void *)g4_empty_string_rep )
                goto LABEL_179;
              goto LABEL_267;
            }
          }
          if ( (void *)v105 != (void *)g4_empty_string_rep )
          {
LABEL_267:
            *(uint32_t *)(v105 + 8) = 0;
            *(uint32_t *)v105 = v106;
            *(uint16_t *)(v105 + 2 * v106 + 12) = 0;
          }
LABEL_179:
          v98 = v107;
          if ( v185 - 6 != (uint16_t *)(void *)g4_empty_string_rep
            && __sync_fetch_and_add((volatile int32_t *)v185 - 1, 0xFFFFFFFF) <= 0 )
          {
            v152 = v105;
            gll_operator_delete_arr((int)(uintptr_t)(v185 - 6));
            v105 = v152;
          }
          v185 = v107;
          v95 = v188;
          v99 = *(uint32_t *)v105;
          goto LABEL_181;
        }
LABEL_224:
        *(uint32_t *)(v94 + 8) = 0;
        *(uint32_t *)v94 = v181;
        v95[v181] = 0;
        goto LABEL_164;
      }
    }
    v35 = *((uint32_t *)v156 - 3);
    if ( v155 > v35 )
      goto LABEL_298;
    v36 = v35 - v155;
    if ( v36 > v154 - v155 )
      v36 = v154 - v155;
    v37 = (uint16_t *)v156 + v155 + v36;
    v38 = (uint16_t *)v156 + v155;
    if ( v37 == v38 )
    {
      v47 = (uint16_t *)(&unk_20E13AC);
      goto LABEL_73;
    }
    if ( v38 == nullptr )
    {
      if ( v37 == nullptr )
      {
        v46 = sub_4EBDC0(0xEu);
        *(uint32_t *)(v46 + 4) = 0;
        *(uint32_t *)(v46 + 8) = 0;
        v47 = (uint16_t *)(v46 + 12);
        v177 = 0;
        v165 = nullptr;
        goto LABEL_70;
      }
      goto LABEL_207;
    }
    v165 = (char *)v156 + 2 * v155;
    v39 = v37 - v38;
    v177 = v39;
    if ( v39 > 0x1FFFFFFE )
      goto LABEL_299;
    v40 = 2 * v39 + 14;
    v41 = 2 * v39 + 30;
    if ( v41 > 0x1000 && v39 != 0 )
    {
      v42 = 4096 - (v41 & 0xFFF);
      v43 = 536870910;
      v44 = v39 + (v42 >> 1);
      if ( v44 <= 0x1FFFFFFE )
        v43 = v44;
      v40 = 2 * v43 + 14;
    }
    else
    {
      v43 = v39;
    }
    v145 = v39;
    v137 = v43;
    v45 = sub_4EBDC0(v40);
    *(uint32_t *)(v45 + 8) = 0;
    *(uint32_t *)(v45 + 4) = v137;
    v46 = v45;
    v47 = (uint16_t *)(v45 + 12);
    if ( v145 == 1 )
    {
      *(uint16_t *)(v45 + 12) = *v38;
      if ( (void *)v45 == (void *)g4_empty_string_rep )
        goto LABEL_73;
LABEL_201:
      *(uint32_t *)(v46 + 8) = 0;
      *(uint32_t *)v46 = v177;
      v47[v177] = 0;
      goto LABEL_73;
    }
LABEL_70:
    v48 = ((char *)&v38[v177] - v165) >> 1;
    if ( v48 != 0 )
    {
      v138 = v47;
      memmove(v47, v38, 2 * v48);
      v47 = v138;
    }
    if ( (void *)v46 != (void *)g4_empty_string_rep )
      goto LABEL_201;
LABEL_73:
    v189 = v47;
    v49 = *((uint32_t *)v47 - 3);
    v178 = v49;
    if ( v49 == 0 )
      goto LABEL_94;
    v50 = v185;
    v51 = *((uint32_t *)v185 - 3);
    v166 = v51 + v49;
    v52 = *((uint32_t *)v185 - 2);
    if ( v166 <= v52 && *((int *)v185 - 1) <= 0 )
      goto LABEL_90;
    if ( v166 >= v51 )
      v51 = v166;
    if ( v51 > 0x1FFFFFFE )
      goto LABEL_299;
    v53 = 2 * v51 + 14;
    if ( v52 < v51 )
    {
      if ( v51 < 2 * v52 )
        v51 = 2 * v52;
      v53 = 2 * v51 + 14;
      v54 = 2 * v51 + 30;
      if ( v54 > 0x1000 && v52 < v51 )
      {
        v55 = v51 + ((4096 - (v54 & 0xFFF)) >> 1);
        v51 = 536870910;
        if ( v55 <= 0x1FFFFFFE )
          v51 = v55;
        v53 = 2 * v51 + 14;
      }
    }
    v160 = sub_4EBDC0(v53);
    *(uint32_t *)(v160 + 4) = v51;
    *(uint32_t *)(v160 + 8) = 0;
    v56 = *((uint32_t *)v50 - 3);
    if ( v56 != 0 )
    {
      if ( v56 == 1 )
      {
        *(uint16_t *)(v160 + 12) = *v50;
        v56 = *((uint32_t *)v50 - 3);
        goto LABEL_87;
      }
      if ( (2 * v56) >> 1 == 0 )
        goto LABEL_87;
      memmove((void *)(v160 + 12), v50, 2 * ((2 * v56) >> 1));
      v56 = *((uint32_t *)v50 - 3);
      if ( (void *)v160 != (void *)g4_empty_string_rep )
        goto LABEL_212;
    }
    else
    {
LABEL_87:
      if ( (void *)v160 == (void *)g4_empty_string_rep )
        goto LABEL_88;
LABEL_212:
      *(uint32_t *)(v160 + 8) = 0;
      *(uint32_t *)v160 = v56;
      *(uint16_t *)(v160 + 2 * v56 + 12) = 0;
    }
LABEL_88:
    v50 = (uint16_t *)(v160 + 12);
    if ( v185 - 6 != (uint16_t *)(void *)g4_empty_string_rep
      && __sync_fetch_and_add((volatile int32_t *)v185 - 1, 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr((int)(uintptr_t)(v185 - 6));
    }
    v185 = (uint16_t *)(v160 + 12);
    v47 = v189;
    v51 = *(uint32_t *)v160;
LABEL_90:
    if ( v178 == 1 )
    {
      v50[v51] = *v47;
      v50 = v185;
      if ( v185 - 6 == (uint16_t *)(void *)g4_empty_string_rep )
        goto LABEL_94;
LABEL_199:
      *((uint32_t *)v50 - 1) = 0;
      *((uint32_t *)v50 - 3) = v166;
      v50[v166] = 0;
      goto LABEL_94;
    }
    if ( (2 * v178) >> 1 != 0 )
    {
      memmove(&v50[v51], v47, 2 * ((2 * v178) >> 1));
      v50 = v185;
    }
    if ( v50 - 6 != (uint16_t *)(void *)g4_empty_string_rep )
      goto LABEL_199;
LABEL_94:
    g4_noop_dtor((std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)&v189);
    v190[0] = 0;
    v57 = (uint16_t **)(*(uint32_t *)(a2 + 44) + v157);
    v58 = *v57;
    v59 = *((uint32_t *)*v57 - 1);
    if ( v59 < 0
      || v58 - 6 == (uint16_t *)(void *)g4_empty_string_rep )
    {
      goto LABEL_112;
    }
    if ( v59 == 0 )
      goto LABEL_111;
    v60 = *((uint32_t *)v58 - 3);
    v61 = *((uint32_t *)v58 - 2);
    if ( v60 > 0x1FFFFFFE )
      goto LABEL_299;
    v62 = *((uint32_t *)v58 - 3);
    if ( v60 > v61 )
    {
      v62 = 2 * v61;
      if ( 2 * v61 < v60 )
        v62 = *((uint32_t *)v58 - 3);
    }
    v167 = 2 * v62 + 14;
    v63 = 2 * v62 + 30;
    if ( v63 > 0x1000 && v61 < v62 )
    {
      v64 = v62 + ((4096 - (v63 & 0xFFF)) >> 1);
      v62 = 536870910;
      if ( v64 <= 0x1FFFFFFE )
        v62 = v64;
      v167 = 2 * v62 + 14;
    }
    v146 = v62;
    v65 = sub_4EBDC0(v167);
    *(uint32_t *)(v65 + 4) = v146;
    *(uint32_t *)(v65 + 8) = 0;
    v66 = v65;
    v67 = *v57;
    if ( v60 != 0 )
    {
      if ( v60 == 1 )
      {
        *(uint16_t *)(v65 + 12) = *v67;
        v67 = *v57;
        goto LABEL_107;
      }
      v179 = (void *)(v65 + 12);
      if ( (int)(2 * v60) >> 1 != 0 )
      {
        v141 = v65;
        memmove(v179, v67, 2 * ((int)(2 * v60) >> 1));
        v67 = *v57;
        v66 = v141;
      }
    }
    else
    {
LABEL_107:
      v179 = (void *)(v65 + 12);
    }
    if ( v67 - 6 != (uint16_t *)(void *)g4_empty_string_rep
      && __sync_fetch_and_add((volatile int32_t *)v67 - 1, 0xFFFFFFFF) <= 0 )
    {
      v144 = v66;
      gll_operator_delete_arr((int)(uintptr_t)(v67 - 6));
      v66 = v144;
    }
    v58 = (uint16_t *)(v179);
    *v57 = (uint16_t *)(v179);
    if ( (void *)v66 != (void *)g4_empty_string_rep )
    {
      *(uint32_t *)(v66 + 8) = 0;
      *(uint32_t *)v66 = v60;
      *((uint16_t *)v179 + v60) = 0;
      v58 = *v57;
    }
LABEL_111:
    *((uint32_t *)v58 - 1) = -1;
    v58 = *v57;
LABEL_112:
    LOWORD(v190[0]) = *v58;
    sub_E86FB0(&v186, v190);
    v68 = v186;
    v69 = *((uint32_t *)v186 - 3);
    if ( v69 != 0 )
    {
      v70 = v185;
      v71 = *((uint32_t *)v185 - 3);
      v180 = v71 + v69;
      v72 = *((uint32_t *)v185 - 2);
      if ( v71 + v69 <= v72 && *((int *)v185 - 1) <= 0 )
        goto LABEL_129;
      if ( v180 >= v71 )
        v71 += v69;
      if ( v71 <= 0x1FFFFFFE )
      {
        v161 = 2 * v71 + 14;
        if ( v72 < v71 )
        {
          if ( v71 < 2 * v72 )
            v71 = 2 * v72;
          v161 = 2 * v71 + 14;
          v73 = 2 * v71 + 30;
          if ( v73 > 0x1000 && v72 < v71 )
          {
            v74 = v71 + ((4096 - (v73 & 0xFFF)) >> 1);
            v71 = 536870910;
            if ( v74 <= 0x1FFFFFFE )
              v71 = v74;
            v161 = 2 * v71 + 14;
          }
        }
        v139 = *((uint32_t *)v186 - 3);
        v168 = sub_4EBDC0(v161);
        *(uint32_t *)(v168 + 4) = v71;
        *(uint32_t *)(v168 + 8) = 0;
        v75 = *((uint32_t *)v70 - 3);
        v69 = v139;
        if ( v75 != 0 )
        {
          if ( v75 == 1 )
          {
            *(uint16_t *)(v168 + 12) = *v70;
            v75 = *((uint32_t *)v70 - 3);
            goto LABEL_126;
          }
          if ( (2 * v75) >> 1 == 0 )
            goto LABEL_126;
          memmove((void *)(v168 + 12), v70, 2 * ((2 * v75) >> 1));
          v75 = *((uint32_t *)v70 - 3);
          v69 = v139;
          if ( (void *)v168 != (void *)g4_empty_string_rep )
            goto LABEL_216;
        }
        else
        {
LABEL_126:
          if ( (void *)v168 == (void *)g4_empty_string_rep )
            goto LABEL_127;
LABEL_216:
          *(uint32_t *)(v168 + 8) = 0;
          *(uint32_t *)v168 = v75;
          *(uint16_t *)(v168 + 2 * v75 + 12) = 0;
        }
LABEL_127:
        v70 = (uint16_t *)(v168 + 12);
        if ( v185 - 6 != (uint16_t *)(void *)g4_empty_string_rep
          && __sync_fetch_and_add((volatile int32_t *)v185 - 1, 0xFFFFFFFF) <= 0 )
        {
          v143 = v69;
          gll_operator_delete_arr((int)(uintptr_t)(v185 - 6));
          v69 = v143;
        }
        v185 = (uint16_t *)(v168 + 12);
        v68 = v186;
        v71 = *(uint32_t *)v168;
LABEL_129:
        if ( v69 == 1 )
        {
          v70[v71] = *v68;
          v70 = v185;
          if ( v185 - 6 == (uint16_t *)(void *)g4_empty_string_rep )
            goto LABEL_133;
        }
        else
        {
          v76 = (2 * v69) >> 1;
          if ( v76 != 0 )
          {
            memmove(&v70[v71], v68, 2 * v76);
            v70 = v185;
          }
          if ( v70 - 6 == (uint16_t *)(void *)g4_empty_string_rep )
            goto LABEL_133;
        }
        *((uint32_t *)v70 - 1) = 0;
        *((uint32_t *)v70 - 3) = v180;
        v70[v180] = 0;
        goto LABEL_133;
      }
LABEL_299:
      sub_1900180("basic_string::_S_create");
    }
LABEL_133:
    v155 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 44) + v157) - 12) + v154;
    g4_noop_dtor((std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)&v186);
    v77 = v155;
LABEL_134:
    v162 = v77;
    v3 = *a3;
    v78 = *((uint32_t *)*a3 - 3);
    v173 = v78;
    if ( v77 < v78 )
    {
      v79 = v78 - v77;
      if ( v78 != v77 )
      {
        v80 = (uint16_t *)v3 + v77;
        v81 = 0;
        v82 = v80 + 1;
        if ( *v80 != 38 )
        {
          while ( ++v81 != v79 )
          {
            v80 = v82++;
            if ( *(v82 - 1) == 38 )
              goto LABEL_27;
          }
          break;
        }
LABEL_27:
        if ( v80 == nullptr )
          break;
        v15 = ((char *)v80 - (char *)v3) >> 1;
        v154 = v15;
        if ( v15 == -1 || (int)(v173 - 2) <= v15 )
          break;
        continue;
      }
    }
    break;
  }
LABEL_22:
  if ( (int)(v173 - 1) <= (int)v155 )
  {
    v13 = (int)(uintptr_t)(v185);
    v14 = (char *)(v185 - 6);
    if ( *((int *)v185 - 1) >= 0 )
      goto LABEL_24;
LABEL_257:
    v13 = sub_E86E90((int)(uintptr_t)(v14));
    goto LABEL_26;
  }
  if ( v173 < v162 )
LABEL_298:
    sub_1900210("basic_string::substr");
  v109 = (uint16_t *)v3 + v173;
  v110 = (uint16_t *)v3 + v162;
  if ( v109 == v110 )
  {
    v118 = (uint16_t *)(&unk_20E13AC);
    goto LABEL_239;
  }
  if ( v110 == nullptr )
  {
    if ( v109 == nullptr )
    {
      v134 = sub_4EBDC0(0xEu);
      *(uint32_t *)(v134 + 4) = 0;
      *(uint32_t *)(v134 + 8) = 0;
      v117 = v134;
      v118 = (uint16_t *)(v134 + 12);
      v171 = nullptr;
      v183 = 0;
      v119 = nullptr;
      goto LABEL_235;
    }
LABEL_207:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  }
  v171 = v110;
  v111 = v109 - v110;
  v183 = v111;
  if ( v111 > 0x1FFFFFFE )
    goto LABEL_299;
  v112 = 2 * v111 + 14;
  v113 = 2 * v111 + 30;
  if ( v113 > 0x1000 && v111 != 0 )
  {
    v114 = v113 & 0xFFF;
    v115 = 536870910;
    if ( v111 + ((unsigned int)(4096 - v114) >> 1) <= 0x1FFFFFFE )
      v115 = v111 + ((unsigned int)(4096 - v114) >> 1);
    v112 = 2 * v115 + 14;
  }
  else
  {
    v115 = v111;
  }
  v148 = v110;
  v142 = v111;
  v116 = sub_4EBDC0(v112);
  *(uint32_t *)(v116 + 4) = v115;
  *(uint32_t *)(v116 + 8) = 0;
  v117 = v116;
  v118 = (uint16_t *)(v116 + 12);
  v119 = (uint8_t *)(v148);
  if ( v142 == 1 )
  {
    *(uint16_t *)(v116 + 12) = *v148;
  }
  else
  {
LABEL_235:
    v120 = (&v119[2 * v183] - (uint8_t *)v171) >> 1;
    if ( v120 != 0 )
      memmove(v118, v119, 2 * v120);
  }
  if ( (void *)v117 != (void *)g4_empty_string_rep )
  {
    *(uint32_t *)(v117 + 8) = 0;
    *(uint32_t *)v117 = v183;
    v118[v183] = 0;
  }
LABEL_239:
  v187 = v118;
  v172 = *((uint32_t *)v118 - 3);
  if ( v172 == 0 )
    goto LABEL_255;
  v121 = *((uint32_t *)v118 - 3);
  v122 = v185;
  v123 = *((uint32_t *)v185 - 3);
  v124 = *((uint32_t *)v185 - 2);
  v184 = v123 + v121;
  if ( v123 + v121 > v124 || *((int *)v185 - 1) > 0 )
  {
    v125 = v123 + v121;
    if ( v184 < v123 )
      v125 = *((uint32_t *)v185 - 3);
    if ( v125 > 0x1FFFFFFE )
      goto LABEL_299;
    v126 = 2 * v125 + 14;
    if ( v124 < v125 )
    {
      if ( v125 < 2 * v124 )
        v125 = 2 * v124;
      v126 = 2 * v125 + 14;
      v132 = 2 * v125 + 30;
      if ( v132 > 0x1000 && v124 < v125 )
      {
        v133 = v125 + ((4096 - (v132 & 0xFFF)) >> 1);
        v125 = 536870910;
        if ( v133 <= 0x1FFFFFFE )
          v125 = v133;
        v126 = 2 * v125 + 14;
      }
    }
    v127 = sub_4EBDC0(v126);
    *(uint32_t *)(v127 + 4) = v125;
    *(uint32_t *)(v127 + 8) = 0;
    v128 = *((uint32_t *)v122 - 3);
    v129 = (uint16_t *)(v127 + 12);
    if ( v128 != 0 )
    {
      if ( v128 == 1 )
      {
        *(uint16_t *)(v127 + 12) = *v122;
        v128 = *((uint32_t *)v122 - 3);
      }
      else if ( (2 * v128) >> 1 != 0 )
      {
        v150 = v127;
        memmove((void *)(v127 + 12), v122, 2 * ((2 * v128) >> 1));
        v128 = *((uint32_t *)v122 - 3);
        v127 = v150;
      }
    }
    if ( (void *)v127 != (void *)g4_empty_string_rep )
    {
      *(uint32_t *)(v127 + 8) = 0;
      *(uint32_t *)v127 = v128;
      *(uint16_t *)(v127 + 2 * v128 + 12) = 0;
    }
    v122 = v129;
    if ( v185 - 6 != (uint16_t *)(void *)g4_empty_string_rep
      && __sync_fetch_and_add((volatile int32_t *)v185 - 1, 0xFFFFFFFF) <= 0 )
    {
      v151 = v127;
      gll_operator_delete_arr((int)(uintptr_t)(v185 - 6));
      v127 = v151;
    }
    v185 = v129;
    v118 = v187;
    v123 = *(uint32_t *)v127;
  }
  v130 = &v122[v123];
  if ( v172 == 1 )
  {
    *v130 = *v118;
    v122 = v185;
  }
  else if ( (2 * v172) >> 1 != 0 )
  {
    memmove(v130, v118, 2 * ((2 * v172) >> 1));
    v122 = v185;
  }
  if ( v122 - 6 != (uint16_t *)(void *)g4_empty_string_rep )
  {
    *((uint32_t *)v122 - 1) = 0;
    *((uint32_t *)v122 - 3) = v184;
    v122[v184] = 0;
    g4_noop_dtor((std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)&v187);
  }
  else
  {
LABEL_255:
    g4_noop_dtor((std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)&v187);
  }
  v13 = (int)(uintptr_t)(v185);
  v14 = (char *)(v185 - 6);
  if ( *((int *)v185 - 1) < 0 )
    goto LABEL_257;
LABEL_24:
  if ( v14 != (char *)(void *)g4_empty_string_rep )
    __sync_add_and_fetch((volatile int32_t *)(v13 - 4), 1u);
LABEL_26:
  *a1 = v13;
  g4_noop_dtor((std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)&v185);
  return a1;
}


// ============================================================================
// Address:   0xe8fb90 (size: 66 bytes)
// Symbol:    sub_E8FB90
// Demangled: sub_E8FB90
// ============================================================================
void sub_E8FB90(int a1, int a2)
{
  int i;
  std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *v4;

  for ( i = a1; i != a2; i += 8 )
  {
    g4_noop_dtor((std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)(i + 4));
    v4 = (std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)i;
    g4_noop_dtor(v4);
  }
}


// ============================================================================
// Address:   0xe8fbe0 (size: 5262 bytes)
// Symbol:    sub_E8FBE0
// Demangled: sub_E8FBE0
// ============================================================================
int *sub_E8FBE0(int *a1, int a2, uint32_t **a3)
{
  uint32_t *v3;
  int v4;
  unsigned int *v5;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  unsigned int *v14;
  int v15;
  int v16;
  unsigned int **v17;
  unsigned int *v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  size_t v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int *v25;
  unsigned int *v26;
  unsigned int *v27;
  uint32_t *v28;
  unsigned int v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  uint32_t *v37;
  uint32_t *v38;
  unsigned int v39;
  size_t v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  int v45;
  int v46;
  uint32_t *v47;
  int v48;
  int v49;
  uint32_t *v50;
  unsigned int v51;
  unsigned int v52;
  size_t v53;
  unsigned int v54;
  unsigned int v55;
  int v56;
  void ***v57;
  void **v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int *v65;
  unsigned int *v66;
  void **v67;
  uint32_t *v68;
  int v69;
  uint32_t *v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  int v75;
  int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  uint32_t *v80;
  int v81;
  uint32_t *v82;
  int v83;
  int v84;
  uint32_t *v85;
  uint32_t *v86;
  unsigned int v87;
  size_t v88;
  unsigned int v89;
  unsigned int v90;
  int v91;
  unsigned int v92;
  int v93;
  int v94;
  int v95;
  uint32_t *v96;
  unsigned int v97;
  unsigned int v98;
  size_t v99;
  unsigned int v100;
  unsigned int v101;
  int v102;
  int v103;
  uint32_t *v104;
  uint32_t *v105;
  int v106;
  uint32_t *v107;
  uint32_t *v108;
  unsigned int v109;
  size_t v110;
  unsigned int v111;
  int v112;
  int v113;
  unsigned int *v114;
  unsigned int *v115;
  uint32_t *v116;
  uint8_t *v117;
  int v118;
  int v119;
  uint32_t *v120;
  unsigned int v121;
  unsigned int v122;
  unsigned int v123;
  size_t v124;
  int v125;
  int v126;
  uint32_t *v127;
  uint32_t *v128;
  unsigned int v129;
  unsigned int v130;
  int v131;
  typedef uint32_t *_g4_t_i;
  typedef unsigned int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef uint32_t *_g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef unsigned int *_g4_t_v138;
  typedef unsigned int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef unsigned int *_g4_t_v141;
  typedef unsigned int _g4_t_v142;
  typedef unsigned int _g4_t_v143;
  typedef unsigned int _g4_t_v144;
  typedef uint32_t *_g4_t_v145;
  typedef void *_g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v151;
  typedef unsigned int _g4_t_v152;
  typedef uint32_t *_g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef size_t _g4_t_v158;
  typedef uint32_t *_g4_t_v159;
  typedef unsigned int _g4_t_v160;
  typedef unsigned int _g4_t_v161;
  typedef unsigned int *_g4_t_v162;
  typedef int _g4_t_v163;
  typedef uint32_t *_g4_t_v164;
  typedef unsigned int _g4_t_v165;
  typedef size_t _g4_t_v166;
  typedef int _g4_t_v167;
  typedef unsigned int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef uint32_t *_g4_t_v170;
  typedef int _g4_t_v171;
  typedef unsigned int _g4_t_v172;
  typedef unsigned int _g4_t_v173;
  typedef unsigned int *_g4_t_v174;
  typedef uint32_t *_g4_t_v175;
  typedef unsigned int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef void *_g4_t_v178;
  typedef unsigned int _g4_t_v179;
  typedef uint32_t *_g4_t_v180;
  typedef unsigned int _g4_t_v181;
  typedef unsigned int _g4_t_v182;
  typedef uint32_t *_g4_t_v183;
  typedef uint32_t *_g4_t_v184;
  typedef uint32_t *_g4_t_v185;
  typedef uint32_t *_g4_t_v186;
  typedef void *_g4_t_v187[5];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v133)) > _g4_s1 ? (16u + sizeof(_g4_t_v133)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v134)) > _g4_s2 ? (16u + sizeof(_g4_t_v134)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v135)) > _g4_s3 ? (16u + sizeof(_g4_t_v135)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v136)) > _g4_s4 ? (16u + sizeof(_g4_t_v136)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v137)) > _g4_s5 ? (16u + sizeof(_g4_t_v137)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v138)) > _g4_s6 ? (16u + sizeof(_g4_t_v138)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v139)) > _g4_s7 ? (16u + sizeof(_g4_t_v139)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v140)) > _g4_s8 ? (16u + sizeof(_g4_t_v140)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v141)) > _g4_s9 ? (16u + sizeof(_g4_t_v141)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v142)) > _g4_s10 ? (20u + sizeof(_g4_t_v142)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v143)) > _g4_s11 ? (20u + sizeof(_g4_t_v143)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v144)) > _g4_s12 ? (20u + sizeof(_g4_t_v144)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v145)) > _g4_s13 ? (20u + sizeof(_g4_t_v145)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v146)) > _g4_s14 ? (20u + sizeof(_g4_t_v146)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v147)) > _g4_s15 ? (20u + sizeof(_g4_t_v147)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v148)) > _g4_s16 ? (20u + sizeof(_g4_t_v148)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v149)) > _g4_s17 ? (20u + sizeof(_g4_t_v149)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v151)) > _g4_s18 ? (28u + sizeof(_g4_t_v151)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v152)) > _g4_s19 ? (32u + sizeof(_g4_t_v152)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v153)) > _g4_s20 ? (40u + sizeof(_g4_t_v153)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v154)) > _g4_s21 ? (44u + sizeof(_g4_t_v154)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v156)) > _g4_s22 ? (52u + sizeof(_g4_t_v156)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v157)) > _g4_s23 ? (52u + sizeof(_g4_t_v157)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v158)) > _g4_s24 ? (52u + sizeof(_g4_t_v158)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v159)) > _g4_s25 ? (52u + sizeof(_g4_t_v159)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v160)) > _g4_s26 ? (52u + sizeof(_g4_t_v160)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v161)) > _g4_s27 ? (56u + sizeof(_g4_t_v161)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v162)) > _g4_s28 ? (56u + sizeof(_g4_t_v162)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v163)) > _g4_s29 ? (56u + sizeof(_g4_t_v163)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v164)) > _g4_s30 ? (56u + sizeof(_g4_t_v164)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v165)) > _g4_s31 ? (56u + sizeof(_g4_t_v165)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v166)) > _g4_s32 ? (56u + sizeof(_g4_t_v166)) : _g4_s32,
    _g4_s34 = (56u + sizeof(_g4_t_v167)) > _g4_s33 ? (56u + sizeof(_g4_t_v167)) : _g4_s33,
    _g4_s35 = (56u + sizeof(_g4_t_v168)) > _g4_s34 ? (56u + sizeof(_g4_t_v168)) : _g4_s34,
    _g4_s36 = (56u + sizeof(_g4_t_v169)) > _g4_s35 ? (56u + sizeof(_g4_t_v169)) : _g4_s35,
    _g4_s37 = (56u + sizeof(_g4_t_v170)) > _g4_s36 ? (56u + sizeof(_g4_t_v170)) : _g4_s36,
    _g4_s38 = (56u + sizeof(_g4_t_v171)) > _g4_s37 ? (56u + sizeof(_g4_t_v171)) : _g4_s37,
    _g4_s39 = (60u + sizeof(_g4_t_v172)) > _g4_s38 ? (60u + sizeof(_g4_t_v172)) : _g4_s38,
    _g4_s40 = (60u + sizeof(_g4_t_v173)) > _g4_s39 ? (60u + sizeof(_g4_t_v173)) : _g4_s39,
    _g4_s41 = (60u + sizeof(_g4_t_v174)) > _g4_s40 ? (60u + sizeof(_g4_t_v174)) : _g4_s40,
    _g4_s42 = (60u + sizeof(_g4_t_v175)) > _g4_s41 ? (60u + sizeof(_g4_t_v175)) : _g4_s41,
    _g4_s43 = (60u + sizeof(_g4_t_v176)) > _g4_s42 ? (60u + sizeof(_g4_t_v176)) : _g4_s42,
    _g4_s44 = (60u + sizeof(_g4_t_v177)) > _g4_s43 ? (60u + sizeof(_g4_t_v177)) : _g4_s43,
    _g4_s45 = (60u + sizeof(_g4_t_v178)) > _g4_s44 ? (60u + sizeof(_g4_t_v178)) : _g4_s44,
    _g4_s46 = (60u + sizeof(_g4_t_v179)) > _g4_s45 ? (60u + sizeof(_g4_t_v179)) : _g4_s45,
    _g4_s47 = (60u + sizeof(_g4_t_v180)) > _g4_s46 ? (60u + sizeof(_g4_t_v180)) : _g4_s46,
    _g4_s48 = (60u + sizeof(_g4_t_v181)) > _g4_s47 ? (60u + sizeof(_g4_t_v181)) : _g4_s47,
    _g4_s49 = (60u + sizeof(_g4_t_v182)) > _g4_s48 ? (60u + sizeof(_g4_t_v182)) : _g4_s48,
    _g4_s50 = (64u + sizeof(_g4_t_v183)) > _g4_s49 ? (64u + sizeof(_g4_t_v183)) : _g4_s49,
    _g4_s51 = (76u + sizeof(_g4_t_v184)) > _g4_s50 ? (76u + sizeof(_g4_t_v184)) : _g4_s50,
    _g4_s52 = (80u + sizeof(_g4_t_v185)) > _g4_s51 ? (80u + sizeof(_g4_t_v185)) : _g4_s51,
    _g4_s53 = (84u + sizeof(_g4_t_v186)) > _g4_s52 ? (84u + sizeof(_g4_t_v186)) : _g4_s52,
    _g4_s54 = (88u + sizeof(_g4_t_v187)) > _g4_s53 ? (88u + sizeof(_g4_t_v187)) : _g4_s53
  };
  alignas(16) uint8_t _g4_sf[_g4_s54];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 16u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 16u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 16u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 16u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 16u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 16u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 16u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 16u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 16u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 20u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 20u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 20u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 20u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 20u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 20u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 20u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 20u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 28u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 32u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 40u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 44u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 52u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 52u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 52u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 52u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 52u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 56u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 56u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 56u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 56u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 56u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 56u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 56u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 56u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 56u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 56u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 56u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 60u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 60u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 60u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 60u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 60u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 60u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 60u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 60u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 60u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 60u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 60u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 64u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 76u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 80u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 84u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 88u);

  v3 = *a3;
  v4 = *(*a3 - 3);
  if ( v4 == 0 )
    goto LABEL_2;
  if ( *v3 != 38 )
  {
    v7 = v3 + 1;
    v8 = 0;
    while ( ++v8 != v4 )
    {
      v9 = v7++;
      if ( *(v7 - 1) == 38 )
        goto LABEL_18;
    }
    v10 = v3 + 1;
    goto LABEL_11;
  }
  v9 = *a3;
LABEL_18:
  if ( v9 == nullptr || (v151 = v9 - v3) == -1 )
  {
    if ( *v3 != 38 )
    {
      v10 = v3 + 1;
LABEL_11:
      v11 = 0;
      while ( ++v11 != v4 )
      {
        v12 = v10++;
        if ( *(v10 - 1) == 38 )
          goto LABEL_14;
      }
      goto LABEL_2;
    }
    v12 = *a3;
LABEL_14:
    if ( v12 == nullptr || (v151 = v12 - v3) == -1 )
    {
LABEL_2:
      v5 = v3 - 3;
      if ( (int)*(v3 - 1) < 0 )
      {
        v3 = (uint32_t *)sub_E86A20(v5);
      }
      else if ( v5 != (unsigned int *)(void *)g4_empty_string_rep )
      {
        __sync_add_and_fetch(v3 - 1, 1u);
      }
      *a1 = (int)(uintptr_t)(v3);
      return a1;
    }
  }
  v152 = 0;
  v183 = (uint32_t *)(&unk_20E13BC);
  v172 = *(v3 - 3);
  if ( v151 >= (int)(v172 - 2) )
  {
    v161 = 0;
    goto LABEL_22;
  }
  while ( 2 )
  {
    v16 = *(uint32_t *)(a2 + 44);
    if ( *(uint32_t *)(a2 + 48) - v16 <= 3 )
      goto LABEL_149;
    v156 = 0;
    for ( i = v3; ; i = v153 )
    {
      v154 = 4 * v156;
      v17 = (unsigned int **)(v16 + 4 * v156);
      v18 = *v17;
      v19 = *(*v17 - 1);
      v20 = *(*v17 - 3);
      if ( v19 < 0 )
      {
        v153 = i;
        v28 = i;
      }
      else
      {
        if ( v18 - 3 != (unsigned int *)(void *)g4_empty_string_rep )
        {
          if ( v19 == 0 )
          {
LABEL_49:
            *(v18 - 1) = 0xFFFFFFFF;
            v18 = *v17;
            v153 = *a3;
            v28 = i;
            goto LABEL_50;
          }
          v173 = *(v18 - 2);
          if ( v20 > 0xFFFFFFE )
            goto LABEL_302;
          v21 = *(*v17 - 3);
          if ( v20 > v173 )
          {
            v21 = 2 * v173;
            if ( 2 * v173 < v20 )
              v21 = *(*v17 - 3);
          }
          v22 = 4 * v21 + 16;
          v23 = 4 * v21 + 32;
          if ( v23 > 0x1000 && v173 < v21 )
          {
            v24 = v21 + ((4096 - (v23 & 0xFFF)) >> 2);
            v21 = 268435454;
            if ( v24 <= 0xFFFFFFE )
              v21 = v24;
            v22 = 4 * v21 + 16;
          }
          v133 = v21;
          v25 = (unsigned int *)sub_4EBDC0(v22);
          v25[1] = v133;
          v25[2] = 0;
          v174 = v25;
          v26 = *v17;
          if ( v20 != 0 )
          {
            if ( v20 == 1 )
            {
              v25[3] = *v26;
              v26 = *v17;
              v162 = v25 + 3;
            }
            else
            {
              v162 = v25 + 3;
              if ( (int)(4 * v20) >> 2 != 0 )
              {
                memmove(v25 + 3, v26, 4 * ((int)(4 * v20) >> 2));
                v26 = *v17;
                v27 = *v17 - 3;
                if ( v27 == (unsigned int *)(void *)g4_empty_string_rep )
                {
LABEL_47:
                  v18 = v162;
                  *v17 = v162;
                  if ( v174 != (unsigned int *)(void *)g4_empty_string_rep )
                  {
                    v174[2] = 0;
                    *v174 = v20;
                    v162[v20] = 0;
                    v18 = *v17;
                  }
                  goto LABEL_49;
                }
LABEL_190:
                if ( __sync_fetch_and_add((volatile int32_t *)v26 - 1, 0xFFFFFFFF) <= 0 )
                  gll_operator_delete_arr((int)(uintptr_t)(v27));
                goto LABEL_47;
              }
            }
          }
          else
          {
            v162 = v25 + 3;
          }
          v27 = v26 - 3;
          if ( v26 - 3 == (unsigned int *)(void *)g4_empty_string_rep )
            goto LABEL_47;
          goto LABEL_190;
        }
        v153 = i;
        v28 = i;
      }
LABEL_50:
      v29 = v18[1];
      v30 = &v28[v151 + 1];
      v163 = v20 - 1;
      v31 = v18 + 1;
      v32 = 0;
      v33 = 0;
      v175 = v30;
      if ( v29 != 0 )
      {
        v34 = *v30;
        if ( v34 != 0 && v163 > 0 )
        {
          if ( v34 != v29 )
            goto LABEL_143;
          while ( 1 )
          {
            v32 = ++v33;
            v29 = v31[v33];
            if ( v29 == 0 )
              break;
            v83 = v175[v33];
            if ( v83 == 0 || v163 <= v33 )
              break;
            if ( v29 != v83 )
              goto LABEL_143;
          }
        }
        else
        {
          v32 = 0;
          v33 = 0;
        }
      }
      if ( v163 == v33 || v29 == 0 && v175[v32] == 0 )
        break;
LABEL_143:
      ++v156;
      v16 = *(uint32_t *)(a2 + 44);
      if ( v156 >= (*(uint32_t *)(a2 + 48) - v16) >> 2 )
      {
        v3 = v153;
        v172 = *(v153 - 3);
LABEL_149:
        if ( v152 > v172 )
          goto LABEL_301;
        v84 = v172 - v152;
        if ( v172 - v152 > v151 - v152 + 1 )
          v84 = v151 - v152 + 1;
        v85 = &v3[v152];
        v86 = &v3[v152 + v84];
        if ( v86 == v85 )
        {
          v180 = (uint32_t *)(&unk_20E13BC);
          goto LABEL_164;
        }
        if ( v85 != nullptr )
        {
          v159 = &v3[v152];
          v87 = v86 - v85;
          v168 = v87;
          if ( v87 > 0xFFFFFFE )
            goto LABEL_302;
          v88 = 4 * v87 + 16;
          v89 = 4 * v87 + 32;
          if ( v89 > 0x1000 && v87 != 0 )
          {
            v90 = 4096 - (v89 & 0xFFF);
            v91 = 268435454;
            v92 = v87 + (v90 >> 2);
            if ( v92 <= 0xFFFFFFE )
              v91 = v92;
            v88 = 4 * v91 + 16;
          }
          else
          {
            v91 = v87;
          }
          v144 = v87;
          v137 = v91;
          v93 = sub_4EBDC0(v88);
          *(uint32_t *)(v93 + 8) = 0;
          *(uint32_t *)(v93 + 4) = v137;
          v94 = v93;
          v180 = (uint32_t *)(v93 + 12);
          if ( v144 == 1 )
          {
            *(uint32_t *)(v93 + 12) = *v85;
            if ( (void *)v93 == (void *)g4_empty_string_rep )
              goto LABEL_164;
            goto LABEL_227;
          }
        }
        else
        {
          if ( v86 != nullptr )
            goto LABEL_208;
          v94 = sub_4EBDC0(0x10u);
          *(uint32_t *)(v94 + 4) = 0;
          *(uint32_t *)(v94 + 8) = 0;
          v180 = (uint32_t *)(v94 + 12);
          v159 = nullptr;
          v168 = 0;
        }
        v95 = &v85[v168] - v159;
        if ( v95 != 0 )
          memmove(v180, v85, 4 * v95);
        if ( (void *)v94 == (void *)g4_empty_string_rep )
        {
LABEL_164:
          v169 = *(v180 - 3);
          if ( v169 == 0 )
            goto LABEL_185;
          v96 = v183;
          v97 = *(v183 - 3);
          v160 = v97 + *(v180 - 3);
          v98 = *(v183 - 2);
          if ( v160 <= v98 && (int)*(v183 - 1) <= 0 )
          {
LABEL_181:
            v105 = &v96[v97];
            if ( v169 == 1 )
            {
              *v105 = *v180;
              v96 = v183;
              if ( v183 - 3 == (uint32_t *)(void *)g4_empty_string_rep )
                goto LABEL_185;
            }
            else
            {
              if ( (4 * v169) >> 2 != 0 )
              {
                memmove(v105, v180, 4 * ((4 * v169) >> 2));
                v96 = v183;
              }
              if ( v96 - 3 == (uint32_t *)(void *)g4_empty_string_rep )
              {
LABEL_185:
                v106 = (int)(uintptr_t)(v180 - 3);
                if ( v180 - 3 == (uint32_t *)(void *)g4_empty_string_rep )
                {
LABEL_186:
                  v152 = v151 + 1;
                  v77 = v151 + 1;
                  goto LABEL_134;
                }
LABEL_221:
                if ( __sync_fetch_and_add(v180 - 1, 0xFFFFFFFF) <= 0 )
                  gll_operator_delete_arr(v106);
                goto LABEL_186;
              }
            }
            v106 = (int)(uintptr_t)(v180 - 3);
            *(v96 - 1) = 0;
            *(v96 - 3) = v160;
            v96[v160] = 0;
            if ( v180 - 3 == (uint32_t *)(void *)g4_empty_string_rep )
              goto LABEL_186;
            goto LABEL_221;
          }
          if ( v160 >= v97 )
            v97 += *(v180 - 3);
          if ( v97 > 0xFFFFFFE )
            goto LABEL_302;
          v99 = 4 * v97 + 16;
          if ( v98 < v97 )
          {
            if ( v97 < 2 * v98 )
              v97 = 2 * v98;
            v99 = 4 * v97 + 16;
            v100 = 4 * v97 + 32;
            if ( v100 > 0x1000 && v98 < v97 )
            {
              v101 = v97 + ((4096 - (v100 & 0xFFF)) >> 2);
              v97 = 268435454;
              if ( v101 <= 0xFFFFFFE )
                v97 = v101;
              v99 = 4 * v97 + 16;
            }
          }
          v102 = sub_4EBDC0(v99);
          *(uint32_t *)(v102 + 4) = v97;
          *(uint32_t *)(v102 + 8) = 0;
          v103 = *(v96 - 3);
          v104 = (uint32_t *)(v102 + 12);
          if ( v103 != 0 )
          {
            if ( v103 == 1 )
            {
              *(uint32_t *)(v102 + 12) = *v96;
              v103 = *(v96 - 3);
            }
            else if ( (4 * v103) >> 2 != 0 )
            {
              v146 = (void *)v102;
              memmove((void *)(v102 + 12), v96, 4 * ((4 * v103) >> 2));
              v102 = (int)(uintptr_t)(v146);
              v103 = *(v96 - 3);
              if ( v146 == (void *)g4_empty_string_rep )
                goto LABEL_179;
              goto LABEL_270;
            }
          }
          if ( (void *)v102 != (void *)g4_empty_string_rep )
          {
LABEL_270:
            *(uint32_t *)(v102 + 8) = 0;
            *(uint32_t *)v102 = v103;
            *(uint32_t *)(v102 + 4 * v103 + 12) = 0;
          }
LABEL_179:
          v96 = v104;
          if ( v183 - 3 != (uint32_t *)(void *)g4_empty_string_rep
            && __sync_fetch_and_add(v183 - 1, 0xFFFFFFFF) <= 0 )
          {
            v149 = v102;
            gll_operator_delete_arr((int)(uintptr_t)(v183 - 3));
            v102 = v149;
          }
          v183 = v104;
          v97 = *(uint32_t *)v102;
          goto LABEL_181;
        }
LABEL_227:
        *(uint32_t *)(v94 + 8) = 0;
        *(uint32_t *)v94 = v168;
        v180[v168] = 0;
        goto LABEL_164;
      }
    }
    v35 = *(v153 - 3);
    if ( v152 > v35 )
      goto LABEL_301;
    v36 = v35 - v152;
    if ( v36 > v151 - v152 )
      v36 = v151 - v152;
    v37 = &v153[v152 + v36];
    v38 = &v153[v152];
    if ( v37 == v38 )
    {
      v47 = (uint32_t *)(&unk_20E13BC);
      goto LABEL_73;
    }
    if ( v38 == nullptr )
    {
      if ( v37 == nullptr )
      {
        v46 = sub_4EBDC0(0x10u);
        *(uint32_t *)(v46 + 4) = 0;
        *(uint32_t *)(v46 + 8) = 0;
        v47 = (uint32_t *)(v46 + 12);
        v176 = 0;
        v164 = nullptr;
        goto LABEL_70;
      }
      goto LABEL_208;
    }
    v164 = &v153[v152];
    v39 = v37 - v38;
    v176 = v39;
    if ( v39 > 0xFFFFFFE )
      goto LABEL_302;
    v40 = 4 * v39 + 16;
    v41 = 4 * v39 + 32;
    if ( v41 > 0x1000 && v39 != 0 )
    {
      v42 = 4096 - (v41 & 0xFFF);
      v43 = 268435454;
      v44 = v39 + (v42 >> 2);
      if ( v44 <= 0xFFFFFFE )
        v43 = v44;
      v40 = 4 * v43 + 16;
    }
    else
    {
      v43 = v39;
    }
    v142 = v39;
    v134 = v43;
    v45 = sub_4EBDC0(v40);
    *(uint32_t *)(v45 + 8) = 0;
    *(uint32_t *)(v45 + 4) = v134;
    v46 = v45;
    v47 = (uint32_t *)(v45 + 12);
    if ( v142 == 1 )
    {
      *(uint32_t *)(v45 + 12) = *v38;
      if ( (void *)v45 == (void *)g4_empty_string_rep )
        goto LABEL_73;
LABEL_202:
      *(uint32_t *)(v46 + 8) = 0;
      *(uint32_t *)v46 = v176;
      v47[v176] = 0;
      goto LABEL_73;
    }
LABEL_70:
    v48 = &v38[v176] - v164;
    if ( v48 != 0 )
    {
      v135 = v47;
      memmove(v47, v38, 4 * v48);
      v47 = v135;
    }
    if ( (void *)v46 != (void *)g4_empty_string_rep )
      goto LABEL_202;
LABEL_73:
    v186 = v47;
    v49 = *(v47 - 3);
    v177 = v49;
    if ( v49 == 0 )
      goto LABEL_94;
    v50 = v183;
    v51 = *(v183 - 3);
    v165 = v51 + v49;
    v52 = *(v183 - 2);
    if ( v165 <= v52 && (int)*(v183 - 1) <= 0 )
      goto LABEL_90;
    if ( v165 >= v51 )
      v51 = v165;
    if ( v51 > 0xFFFFFFE )
      goto LABEL_302;
    v53 = 4 * v51 + 16;
    if ( v52 < v51 )
    {
      if ( v51 < 2 * v52 )
        v51 = 2 * v52;
      v53 = 4 * v51 + 16;
      v54 = 4 * v51 + 32;
      if ( v54 > 0x1000 && v52 < v51 )
      {
        v55 = v51 + ((4096 - (v54 & 0xFFF)) >> 2);
        v51 = 268435454;
        if ( v55 <= 0xFFFFFFE )
          v51 = v55;
        v53 = 4 * v51 + 16;
      }
    }
    v157 = sub_4EBDC0(v53);
    *(uint32_t *)(v157 + 4) = v51;
    *(uint32_t *)(v157 + 8) = 0;
    v56 = *(v50 - 3);
    if ( v56 != 0 )
    {
      if ( v56 == 1 )
      {
        *(uint32_t *)(v157 + 12) = *v50;
        v56 = *(v50 - 3);
        goto LABEL_87;
      }
      if ( (4 * v56) >> 2 == 0 )
        goto LABEL_87;
      memmove((void *)(v157 + 12), v50, 4 * ((4 * v56) >> 2));
      v56 = *(v50 - 3);
      if ( (void *)v157 != (void *)g4_empty_string_rep )
        goto LABEL_213;
    }
    else
    {
LABEL_87:
      if ( (void *)v157 == (void *)g4_empty_string_rep )
        goto LABEL_88;
LABEL_213:
      *(uint32_t *)(v157 + 8) = 0;
      *(uint32_t *)v157 = v56;
      *(uint32_t *)(v157 + 4 * v56 + 12) = 0;
    }
LABEL_88:
    v50 = (uint32_t *)(v157 + 12);
    if ( v183 - 3 != (uint32_t *)(void *)g4_empty_string_rep
      && __sync_fetch_and_add(v183 - 1, 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr((int)(uintptr_t)(v183 - 3));
    }
    v183 = (uint32_t *)(v157 + 12);
    v47 = v186;
    v51 = *(uint32_t *)v157;
LABEL_90:
    if ( v177 == 1 )
    {
      v50[v51] = *v47;
      v50 = v183;
      if ( v183 - 3 == (uint32_t *)(void *)g4_empty_string_rep )
        goto LABEL_94;
LABEL_200:
      *(v50 - 1) = 0;
      *(v50 - 3) = v165;
      v50[v165] = 0;
      goto LABEL_94;
    }
    if ( (4 * v177) >> 2 != 0 )
    {
      memmove(&v50[v51], v47, 4 * ((4 * v177) >> 2));
      v50 = v183;
    }
    if ( v50 - 3 != (uint32_t *)(void *)g4_empty_string_rep )
      goto LABEL_200;
LABEL_94:
    g4_noop_dtor((std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)&v186);
    v187[0] = nullptr;
    v187[1] = nullptr;
    v57 = (void ***)(*(uint32_t *)(a2 + 44) + v154);
    v58 = *v57;
    v59 = (int)(uintptr_t)(*(*v57 - 1));
    if ( v59 < 0
      || v58 - 3 == (void **)(void *)g4_empty_string_rep )
    {
      goto LABEL_112;
    }
    if ( v59 == 0 )
      goto LABEL_111;
    v60 = (unsigned int)(uintptr_t)(*(v58 - 3));
    v61 = (unsigned int)(uintptr_t)(*(v58 - 2));
    if ( v60 > 0xFFFFFFE )
      goto LABEL_302;
    v62 = (unsigned int)(uintptr_t)(*(v58 - 3));
    if ( v60 > v61 )
    {
      v62 = 2 * v61;
      if ( 2 * v61 < v60 )
        v62 = (unsigned int)(uintptr_t)(*(v58 - 3));
    }
    v166 = 4 * v62 + 16;
    v63 = 4 * v62 + 32;
    if ( v63 > 0x1000 && v61 < v62 )
    {
      v64 = v62 + ((4096 - (v63 & 0xFFF)) >> 2);
      v62 = 268435454;
      if ( v64 <= 0xFFFFFFE )
        v62 = v64;
      v166 = 4 * v62 + 16;
    }
    v143 = v62;
    v65 = (unsigned int *)sub_4EBDC0(v166);
    v65[1] = v143;
    v65[2] = 0;
    v66 = v65;
    v67 = *v57;
    if ( v60 != 0 )
    {
      if ( v60 == 1 )
      {
        v65[3] = (unsigned int)(uintptr_t)(*v67);
        v67 = *v57;
        goto LABEL_107;
      }
      v178 = v65 + 3;
      if ( (int)(4 * v60) >> 2 != 0 )
      {
        v138 = v65;
        memmove(v178, v67, 4 * ((int)(4 * v60) >> 2));
        v67 = *v57;
        v66 = v138;
      }
    }
    else
    {
LABEL_107:
      v178 = v65 + 3;
    }
    if ( v67 - 3 != (void **)(void *)g4_empty_string_rep
      && __sync_fetch_and_add((volatile int32_t *)v67 - 1, 0xFFFFFFFF) <= 0 )
    {
      v141 = v66;
      gll_operator_delete_arr((int)(uintptr_t)(v67 - 3));
      v66 = v141;
    }
    v58 = (void **)v178;
    *v57 = (void **)v178;
    if ( v66 != (unsigned int *)(void *)g4_empty_string_rep )
    {
      v66[2] = 0;
      *v66 = v60;
      *((uint32_t *)v178 + v60) = 0;
      v58 = *v57;
    }
LABEL_111:
    *(v58 - 1) = (void *)-1;
    v58 = *v57;
LABEL_112:
    v187[0] = *v58;
    sub_E86B50(&v184, v187);
    v68 = v184;
    v69 = *(v184 - 3);
    if ( v69 != 0 )
    {
      v70 = v183;
      v71 = *(v183 - 3);
      v179 = v71 + v69;
      v72 = *(v183 - 2);
      if ( v71 + v69 <= v72 && (int)*(v183 - 1) <= 0 )
        goto LABEL_129;
      if ( v179 >= v71 )
        v71 += v69;
      if ( v71 <= 0xFFFFFFE )
      {
        v158 = 4 * v71 + 16;
        if ( v72 < v71 )
        {
          if ( v71 < 2 * v72 )
            v71 = 2 * v72;
          v158 = 4 * v71 + 16;
          v73 = 4 * v71 + 32;
          if ( v73 > 0x1000 && v72 < v71 )
          {
            v74 = v71 + ((4096 - (v73 & 0xFFF)) >> 2);
            v71 = 268435454;
            if ( v74 <= 0xFFFFFFE )
              v71 = v74;
            v158 = 4 * v71 + 16;
          }
        }
        v136 = *(v184 - 3);
        v167 = sub_4EBDC0(v158);
        *(uint32_t *)(v167 + 4) = v71;
        *(uint32_t *)(v167 + 8) = 0;
        v75 = *(v70 - 3);
        v69 = v136;
        if ( v75 != 0 )
        {
          if ( v75 == 1 )
          {
            *(uint32_t *)(v167 + 12) = *v70;
            v75 = *(v70 - 3);
            goto LABEL_126;
          }
          if ( (4 * v75) >> 2 == 0 )
            goto LABEL_126;
          memmove((void *)(v167 + 12), v70, 4 * ((4 * v75) >> 2));
          v75 = *(v70 - 3);
          v69 = v136;
          if ( (void *)v167 != (void *)g4_empty_string_rep )
            goto LABEL_217;
        }
        else
        {
LABEL_126:
          if ( (void *)v167 == (void *)g4_empty_string_rep )
            goto LABEL_127;
LABEL_217:
          *(uint32_t *)(v167 + 8) = 0;
          *(uint32_t *)v167 = v75;
          *(uint32_t *)(v167 + 4 * v75 + 12) = 0;
        }
LABEL_127:
        v70 = (uint32_t *)(v167 + 12);
        if ( v183 - 3 != (uint32_t *)(void *)g4_empty_string_rep
          && __sync_fetch_and_add(v183 - 1, 0xFFFFFFFF) <= 0 )
        {
          v140 = v69;
          gll_operator_delete_arr((int)(uintptr_t)(v183 - 3));
          v69 = v140;
        }
        v183 = (uint32_t *)(v167 + 12);
        v68 = v184;
        v71 = *(uint32_t *)v167;
LABEL_129:
        if ( v69 == 1 )
        {
          v70[v71] = *v68;
          v70 = v183;
          if ( v183 - 3 == (uint32_t *)(void *)g4_empty_string_rep )
            goto LABEL_133;
        }
        else
        {
          v76 = (4 * v69) >> 2;
          if ( v76 != 0 )
          {
            memmove(&v70[v71], v68, 4 * v76);
            v70 = v183;
          }
          if ( v70 - 3 == (uint32_t *)(void *)g4_empty_string_rep )
            goto LABEL_133;
        }
        *(v70 - 1) = 0;
        *(v70 - 3) = v179;
        v70[v179] = 0;
        goto LABEL_133;
      }
LABEL_302:
      sub_1900180("basic_string::_S_create");
    }
LABEL_133:
    v152 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 44) + v154) - 12) + v151;
    g4_noop_dtor((std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)&v184);
    v77 = v152;
LABEL_134:
    v161 = v77;
    v3 = *a3;
    v78 = *(*a3 - 3);
    v172 = v78;
    if ( v77 < v78 )
    {
      v79 = v78 - v152;
      if ( v78 != v152 )
      {
        v80 = &v3[v152];
        v81 = 0;
        v82 = v80 + 1;
        if ( *v80 != 38 )
        {
          while ( ++v81 != v79 )
          {
            v80 = v82++;
            if ( *(v82 - 1) == 38 )
              goto LABEL_27;
          }
          break;
        }
LABEL_27:
        if ( v80 == nullptr )
          break;
        v15 = v80 - v3;
        v151 = v15;
        if ( v15 == -1 || (int)(v172 - 2) <= v15 )
          break;
        continue;
      }
    }
    break;
  }
LABEL_22:
  if ( (int)(v172 - 1) <= (int)v152 )
  {
    v13 = (int)(uintptr_t)(v183);
    v14 = v183 - 3;
    if ( (int)*(v183 - 1) >= 0 )
      goto LABEL_24;
LABEL_260:
    v13 = sub_E86A20(v14);
    goto LABEL_26;
  }
  if ( v172 < v161 )
LABEL_301:
    sub_1900210("basic_string::substr");
  v107 = &v3[v172];
  v108 = &v3[v161];
  if ( v107 == v108 )
  {
    v116 = (uint32_t *)(&unk_20E13BC);
    goto LABEL_242;
  }
  if ( v108 == nullptr )
  {
    if ( v107 == nullptr )
    {
      v131 = sub_4EBDC0(0x10u);
      *(uint32_t *)(v131 + 4) = 0;
      *(uint32_t *)(v131 + 8) = 0;
      v115 = (unsigned int *)v131;
      v116 = (uint32_t *)(v131 + 12);
      v170 = nullptr;
      v181 = 0;
      v117 = nullptr;
      goto LABEL_238;
    }
LABEL_208:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  }
  v170 = v108;
  v109 = v107 - v108;
  v181 = v109;
  if ( v109 > 0xFFFFFFE )
    goto LABEL_302;
  v110 = 4 * v109 + 16;
  v111 = 4 * v109 + 32;
  if ( v111 > 0x1000 && v109 != 0 )
  {
    v112 = v111 & 0xFFF;
    v113 = 268435454;
    if ( v109 + ((unsigned int)(4096 - v112) >> 2) <= 0xFFFFFFE )
      v113 = v109 + ((unsigned int)(4096 - v112) >> 2);
    v110 = 4 * v113 + 16;
  }
  else
  {
    v113 = v109;
  }
  v145 = v108;
  v139 = v109;
  v114 = (unsigned int *)sub_4EBDC0(v110);
  v114[1] = v113;
  v114[2] = 0;
  v115 = v114;
  v116 = v114 + 3;
  v117 = (uint8_t *)(v145);
  if ( v139 == 1 )
  {
    v114[3] = *v145;
  }
  else
  {
LABEL_238:
    v118 = (&v117[4 * v181] - (uint8_t *)v170) >> 2;
    if ( v118 != 0 )
      memmove(v116, v117, 4 * v118);
  }
  if ( v115 != (unsigned int *)(void *)g4_empty_string_rep )
  {
    v115[2] = 0;
    *v115 = v181;
    v116[v181] = 0;
  }
LABEL_242:
  v185 = v116;
  v171 = *(v116 - 3);
  if ( v171 == 0 )
    goto LABEL_258;
  v119 = *(v116 - 3);
  v120 = v183;
  v121 = *(v183 - 3);
  v122 = *(v183 - 2);
  v182 = v121 + v119;
  if ( v121 + v119 > v122 || (int)*(v183 - 1) > 0 )
  {
    v123 = v121 + v119;
    if ( v182 < v121 )
      v123 = *(v183 - 3);
    if ( v123 > 0xFFFFFFE )
      goto LABEL_302;
    v124 = 4 * v123 + 16;
    if ( v122 < v123 )
    {
      if ( v123 < 2 * v122 )
        v123 = 2 * v122;
      v124 = 4 * v123 + 16;
      v129 = 4 * v123 + 32;
      if ( v129 > 0x1000 && v122 < v123 )
      {
        v130 = v123 + ((4096 - (v129 & 0xFFF)) >> 2);
        v123 = 268435454;
        if ( v130 <= 0xFFFFFFE )
          v123 = v130;
        v124 = 4 * v123 + 16;
      }
    }
    v125 = sub_4EBDC0(v124);
    *(uint32_t *)(v125 + 4) = v123;
    *(uint32_t *)(v125 + 8) = 0;
    v126 = *(v120 - 3);
    v127 = (uint32_t *)(v125 + 12);
    if ( v126 != 0 )
    {
      if ( v126 == 1 )
      {
        *(uint32_t *)(v125 + 12) = *v120;
        v126 = *(v120 - 3);
      }
      else if ( (4 * v126) >> 2 != 0 )
      {
        v147 = v125;
        memmove((void *)(v125 + 12), v120, 4 * ((4 * v126) >> 2));
        v126 = *(v120 - 3);
        v125 = v147;
      }
    }
    if ( (void *)v125 != (void *)g4_empty_string_rep )
    {
      *(uint32_t *)(v125 + 8) = 0;
      *(uint32_t *)v125 = v126;
      *(uint32_t *)(v125 + 4 * v126 + 12) = 0;
    }
    v120 = v127;
    if ( v183 - 3 != (uint32_t *)(void *)g4_empty_string_rep
      && __sync_fetch_and_add(v183 - 1, 0xFFFFFFFF) <= 0 )
    {
      v148 = v125;
      gll_operator_delete_arr((int)(uintptr_t)(v183 - 3));
      v125 = v148;
    }
    v183 = v127;
    v116 = v185;
    v121 = *(uint32_t *)v125;
  }
  v128 = &v120[v121];
  if ( v171 == 1 )
  {
    *v128 = *v116;
    v120 = v183;
  }
  else if ( (4 * v171) >> 2 != 0 )
  {
    memmove(v128, v116, 4 * ((4 * v171) >> 2));
    v120 = v183;
  }
  if ( v120 - 3 != (uint32_t *)(void *)g4_empty_string_rep )
  {
    *(v120 - 1) = 0;
    *(v120 - 3) = v182;
    v120[v182] = 0;
    g4_noop_dtor((std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)&v185);
  }
  else
  {
LABEL_258:
    g4_noop_dtor((std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)&v185);
  }
  v13 = (int)(uintptr_t)(v183);
  v14 = v183 - 3;
  if ( (int)*(v183 - 1) < 0 )
    goto LABEL_260;
LABEL_24:
  if ( v14 != (unsigned int *)(void *)g4_empty_string_rep )
    __sync_add_and_fetch((volatile int32_t *)(v13 - 4), 1u);
LABEL_26:
  *a1 = v13;
  g4_noop_dtor((std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)&v183);
  return a1;
}


// ============================================================================
// Address:   0xe924f0 (size: 2389 bytes)
// Symbol:    sub_E924F0
// ============================================================================
// Address:   0xe924f0
// Symbol:    sub_E924F0
// Demangled: sub_E924F0
// ============================================================================
namespace {
#pragma pack(push, 1)
struct G4ZipLocalHdr3 {
  uint32_t sig;
  uint16_t versionNeeded;
  uint16_t bitFlag;
  uint16_t compressionMethod;
  uint16_t modTime;
  uint16_t modDate;
  uint32_t crc32;
  uint32_t compressedSize;
  uint32_t uncompressedSize;
  int16_t filenameLen;
  int16_t extraLen;
};
struct G4ZipEntry3 {
  char *zipFileName;
  char *simpleFileName;
  char *path;
  int32_t fileDataPos;
  G4ZipLocalHdr3 header;
  uint16_t pad;
};
#pragma pack(pop)
static_assert(sizeof(G4ZipEntry3) == 48, "G4ZipEntry3 must be 48 bytes");
using G4GlitchStr3 = std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>;
} // namespace

void sub_E924F0(glitch::io::CZipReader::Self *self, unsigned int poolSize)
{
  uint32_t file = *((uint32_t *)self + 2);
  if (file == 0)
    return;

  bool loadedFromCache = false;
  const char *fname = (const char *)(uintptr_t)(*(int (**)(uint32_t))(*(uint32_t *)(uintptr_t)file + 40))(file);
  bool canCache = (fname != nullptr) && (strstr(fname, ".zip") != nullptr || strstr(fname, ".obb") != nullptr);
  if (canCache)
  {
    const char *saveFolder = AndroidOS_GetSaveFolder();
    if (saveFolder != nullptr && fname != nullptr)
    {
      char indexPath[1024];
      snprintf(indexPath, sizeof(indexPath), "%s/%s.indexfile", saveFolder, fname);
      FILE *fp = fopen(indexPath, "rb");
      if (fp != nullptr)
      {
        uint32_t magic = 0;
        int32_t cachedSize = 0;
        int actualSize = (*(int (**)(uint32_t))(*(uint32_t *)(uintptr_t)file + 32))(file);
        if (fread(&magic, 1, 4, fp) == 4 && fread(&cachedSize, 1, 4, fp) == 4 &&
            magic == 0xDEADBABEu && cachedSize == actualSize)
        {
          loadedFromCache = true;
          while (true)
          {
            G4ZipEntry3 entry;
            memset(&entry, 0, sizeof(entry));
            entry.zipFileName = (char *)(uintptr_t)byte_20D3E78;
            entry.simpleFileName = (char *)(uintptr_t)byte_20D3E78;
            entry.path = (char *)(uintptr_t)byte_20D3E78;

            if (fread(&entry.header, 1, 30, fp) != 30)
            {
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.path);
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.simpleFileName);
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.zipFileName);
              break;
            }
            int nameLen = entry.header.filenameLen;
            if (nameLen < 0 || nameLen > 4096)
            {
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.path);
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.simpleFileName);
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.zipFileName);
              break;
            }
            char nameBuf[4097];
            if (nameLen > 0 && (int)fread(nameBuf, 1, (size_t)nameLen, fp) != nameLen)
            {
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.path);
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.simpleFileName);
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.zipFileName);
              break;
            }
            nameBuf[nameLen] = '\0';
            if (fread(&entry.fileDataPos, 1, 4, fp) != 4)
            {
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.path);
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.simpleFileName);
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.zipFileName);
              break;
            }

            g4_std::basic_string_char_char_traits_char_SA_77cf59::assign((G4GlitchStr3 *)&entry.zipFileName, nameBuf, strlen(nameBuf));
            glitch::io::CZipReader::extractFilename((int)(uintptr_t)self, (G4GlitchStr3 *)&entry.zipFileName);

            uint32_t endPtr = *((uint32_t *)self + 5);
            if (endPtr == *((uint32_t *)self + 6))
            {
              sub_E8CA10((G4GlitchStr3 *)((char *)self + 16), endPtr, (G4GlitchStr3 *)&entry);
            }
            else
            {
              if (endPtr != 0)
              {
                g4_std_compat::basic_string_ctor((G4GlitchStr3 *)(uintptr_t)endPtr, (const G4GlitchStr3 *)&entry.zipFileName);
                g4_std_compat::basic_string_ctor((G4GlitchStr3 *)(uintptr_t)(endPtr + 4), (const G4GlitchStr3 *)&entry.simpleFileName);
                g4_std_compat::basic_string_ctor((G4GlitchStr3 *)(uintptr_t)(endPtr + 8), (const G4GlitchStr3 *)&entry.path);
                memcpy((void *)(uintptr_t)(endPtr + 12), &entry.fileDataPos, 34);
                *(uint16_t *)(uintptr_t)(endPtr + 46) = 0;
              }
              *((uint32_t *)self + 5) = endPtr + 48;
            }

            g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.path);
            g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.simpleFileName);
            g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((G4GlitchStr3 *)&entry.zipFileName);
          }
        }
        fclose(fp);
      }
    }
  }

  if (!loadedFromCache)
    glitch::io::CZipReader::scanHeaders(self);

  G4ZipEntry3 *begin = (G4ZipEntry3 *)(uintptr_t)*((uint32_t *)self + 4);
  G4ZipEntry3 *end = (G4ZipEntry3 *)(uintptr_t)*((uint32_t *)self + 5);
  if (end - begin > 1)
  {
    std::sort(begin, end, [](const G4ZipEntry3 &lhs, const G4ZipEntry3 &rhs) {
      const char *sa = lhs.simpleFileName;
      const char *sb = rhs.simpleFileName;
      uint32_t la = *((const uint32_t *)sa - 3);
      uint32_t lb = *((const uint32_t *)sb - 3);
      uint32_t minLen = la < lb ? la : lb;
      int cmp = minLen ? memcmp(sa, sb, minLen) : 0;
      if (cmp == 0)
        cmp = (int)la - (int)lb;
      return cmp < 0;
    });
  }

  if (poolSize > 1)
  {
    unsigned int wantCap = poolSize - 1;
    int *poolBegin = *(int **)((char *)self + 28);
    int *poolEnd = *(int **)((char *)self + 32);
    int *poolCap = *(int **)((char *)self + 36);
    if (wantCap > (unsigned int)(poolCap - poolBegin))
    {
      intptr_t curLen = poolEnd - poolBegin;
      uint32_t newMem = sub_4EBDC0(4 * wantCap);
      int *dst = (int *)(uintptr_t)newMem;
      for (int *p = poolBegin; p != poolEnd; ++p, ++dst)
      {
        *dst = *p;
        if (*p != 0)
          __sync_add_and_fetch((volatile int32_t *)(uintptr_t)(*p + 4), 1);
      }
      for (int *p = poolBegin; p != poolEnd; ++p)
      {
        if (*p != 0)
          sub_5459C0((volatile int32_t *)(uintptr_t)*p);
      }
      if (poolBegin != nullptr)
        gll_operator_delete_arr((int)(uintptr_t)poolBegin);
      *(uint32_t *)((char *)self + 28) = newMem;
      *(uint32_t *)((char *)self + 32) = newMem + (uint32_t)(4 * curLen);
      *(uint32_t *)((char *)self + 36) = newMem + 4 * wantCap;
    }
  }
}


// ============================================================================
// Address:   0xe95490 (size: 307 bytes)
// Symbol:    _ZNSbIcSt11char_traitsIcEN6glitch4core10SAllocatorIcLNS1_6memory13E_MEMORY_HINTE0EEEEC2ERKS7_
// Demangled: std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::basic_string(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)
// ============================================================================
// Alternative name is '_ZNSbIcSt11char_traitsIcEN6glitch4core10SAllocatorIcLNS1_6memory13E_MEMORY_HINTE0EEEEC1ERKS7_'
std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *g4_std_compat::basic_string_ctor(
        std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *self,
        const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  uint8_t *src;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  size_t n;
  int v9;

  src = *(uint8_t **)a2;
  if ( *(int *)(*(uint32_t *)a2 - 4) < 0 )
  {
    v4 = *((uint32_t *)src - 3);
    v5 = *((uint32_t *)src - 2);
    if ( v4 > 0x3FFFFFFC )
      sub_1900180("basic_string::_S_create");
    if ( v4 > v5 && v4 < 2 * v5 )
      v4 = 2 * v5;
    if ( v4 + 29 > 0x1000 && v5 < v4 )
    {
      v6 = v4 + 4096 - (((uint16_t)v4 + 29) & 0xFFF);
      v4 = 1073741820;
      if ( v6 <= 0x3FFFFFFC )
        v4 = v6;
    }
    v7 = sub_4EBDC0(v4 + 13);
    *(uint32_t *)(v7 + 4) = v4;
    *(uint32_t *)(v7 + 8) = 0;
    n = *((uint32_t *)src - 3);
    v9 = 0;
    if ( n != 0 )
    {
      if ( n == 1 )
        *(uint8_t *)(v7 + 12) = *src;
      else
        memcpy((void *)(v7 + 12), src, n);
      v9 = *((uint32_t *)src - 3);
    }
    if ( (int *)v7 == (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      src = (uint8_t *)(v7 + 12);
    }
    else
    {
      *(uint32_t *)(v7 + 8) = 0;
      *(uint32_t *)v7 = v9;
      src = (uint8_t *)(v7 + 12);
      *(uint8_t *)(v7 + v9 + 12) = 0;
    }
  }
  else if ( src - 12 != (uint8_t *)&dword_20D3E6C )
  {
    __sync_add_and_fetch((volatile int32_t *)src - 1, 1u);
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(src);
  return self;
}


// ============================================================================
// Address:   0xe955d0 (size: 437 bytes)
// Symbol:    _ZNKSbIcSt11char_traitsIcEN6glitch4core10SAllocatorIcLNS1_6memory13E_MEMORY_HINTE0EEEE6substrEjj
// Demangled: std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::substr(unsigned int,unsigned int)const
// ============================================================================
std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *g4_std_compat::glitch_string_substr(
        std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *self,
        int *a2,
        unsigned int a3,
        unsigned int a4)
{
  int v4;
  unsigned int v5;
  unsigned int v6;
  uint8_t *v7;
  uint8_t *src;
  size_t n;
  int v10;
  int v11;
  char *dest;
  int v14;
  char *v15;

  v4 = *a2;
  v5 = *(uint32_t *)(*a2 - 12);
  if ( a3 > v5 )
    sub_1900210("basic_string::substr");
  v6 = v5 - a3;
  if ( v6 > a4 )
    v6 = a4;
  v7 = (uint8_t *)(v4 + a3 + v6);
  src = (uint8_t *)(a3 + v4);
  if ( v7 == src )
  {
    dest = (char *)(uintptr_t)(byte_20D3E78);
    goto LABEL_15;
  }
  if ( src == nullptr )
  {
    if ( v7 != nullptr )
      sub_18FFFD0("basic_string::_S_construct null not valid");
    v11 = sub_4EBDC0(0xDu);
    *(uint32_t *)(v11 + 4) = 0;
    *(uint32_t *)(v11 + 8) = 0;
    dest = (char *)(v11 + 12);
    n = 0;
    goto LABEL_12;
  }
  n = v7 - src;
  if ( n > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( n + 29 > 0x1000 && n != 0 )
  {
    v10 = 1073741820;
    if ( n + 4096 - (((uint16_t)n + 29) & 0xFFF) <= 0x3FFFFFFC )
      v10 = n + 4096 - (((uint16_t)n + 29) & 0xFFF);
    v14 = v10;
    v11 = sub_4EBDC0(v10 + 13);
    *(uint32_t *)(v11 + 4) = v14;
    *(uint32_t *)(v11 + 8) = 0;
    dest = (char *)(v11 + 12);
    goto LABEL_12;
  }
  v11 = sub_4EBDC0(n + 13);
  *(uint32_t *)(v11 + 4) = n;
  *(uint32_t *)(v11 + 8) = 0;
  dest = (char *)(v11 + 12);
  if ( n != 1 )
  {
LABEL_12:
    v15 = dest;
    memcpy(dest, src, n);
    dest = v15;
    goto LABEL_13;
  }
  *(uint8_t *)(v11 + 12) = *src;
LABEL_13:
  if ( (int *)v11 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v11 + 8) = 0;
    *(uint32_t *)v11 = n;
    dest[n] = 0;
  }
LABEL_15:
  *(uint32_t *)self = (uint32_t)(uintptr_t)(dest);
  return self;
}


// ============================================================================
// Address:   0xe95790 (size: 379 bytes)
// Symbol:    _ZNSbIcSt11char_traitsIcEN6glitch4core10SAllocatorIcLNS1_6memory13E_MEMORY_HINTE0EEEEaSERKS7_
// Demangled: std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::operator=(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)
// ============================================================================
std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *g4_std_compat::glitch_string_op_assign(
        std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *self,
        const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  uint8_t *src;
  int v3;
  int *v4;
  int *v5;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  size_t n;
  int v12;
  uint8_t *v13;
  int v14;

  src = *(uint8_t **)a2;
  v3 = *(uint32_t *)self;
  v4 = (int *)(*(uint32_t *)a2 - 12);
  v5 = (int *)(*(uint32_t *)self - 12);
  if ( v4 != v5 )
  {
    if ( *((int *)src - 1) < 0 )
    {
      v7 = *((uint32_t *)src - 3);
      v8 = *((uint32_t *)src - 2);
      if ( v7 > 0x3FFFFFFC )
        sub_1900180("basic_string::_S_create");
      if ( v7 > v8 && v7 < 2 * v8 )
        v7 = 2 * v8;
      if ( v7 + 29 > 0x1000 && v8 < v7 )
      {
        v9 = v7 + 4096 - (((uint16_t)v7 + 29) & 0xFFF);
        v7 = 1073741820;
        if ( v9 <= 0x3FFFFFFC )
          v7 = v9;
      }
      v10 = sub_4EBDC0(v7 + 13);
      *(uint32_t *)(v10 + 4) = v7;
      *(uint32_t *)(v10 + 8) = 0;
      n = *((uint32_t *)src - 3);
      v12 = 0;
      v13 = (uint8_t *)(v10 + 12);
      if ( n != 0 )
      {
        if ( n == 1 )
        {
          *(uint8_t *)(v10 + 12) = *src;
          v12 = *((uint32_t *)src - 3);
        }
        else
        {
          v14 = v10;
          memcpy((void *)(v10 + 12), src, n);
          v12 = *((uint32_t *)src - 3);
          v10 = v14;
        }
      }
      if ( (int *)v10 != (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        *(uint32_t *)(v10 + 8) = 0;
        *(uint32_t *)v10 = v12;
        *(uint8_t *)(v10 + v12 + 12) = 0;
      }
      src = v13;
      v3 = *(uint32_t *)self;
      v5 = (int *)(*(uint32_t *)self - 12);
    }
    else if ( v4 != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      __sync_add_and_fetch((volatile int32_t *)src - 1, 1u);
      v3 = *(uint32_t *)self;
      v5 = (int *)(*(uint32_t *)self - 12);
    }
    if ( v5 != (int *)(uintptr_t)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      gll_operator_delete_arr((int)(uintptr_t)(v5));
    *(uint32_t *)self = (uint32_t)(uintptr_t)(src);
  }
  return self;
}


// ============================================================================
// Address:   0xe95910 (size: 329 bytes)
// Symbol:    _ZNSbIcSt11char_traitsIcEN6glitch4core10SAllocatorIcLNS1_6memory13E_MEMORY_HINTE0EEEEpLEPKc
// Demangled: std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::operator+=(char const*)
// ============================================================================
std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *g4_std_compat::glitch_string_op_plus_eq(
        std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *self,
        char *s)
{
  const char *src;
  unsigned int n;
  unsigned int v4;
  int v5;
  char *v6;
  unsigned int v7;
  const char *v9;
  unsigned int v10;
  unsigned int v11;

  src = s;
  n = strlen(s);
  if ( n == 0 )
    return self;
  v4 = *(uint32_t *)self;
  v5 = *(uint32_t *)(*(uint32_t *)self - 12);
  if ( n > 1073741820 - v5 )
    sub_1900180("basic_string::append");
  v10 = n + v5;
  v11 = *(uint32_t *)(v4 - 8);
  if ( n + v5 <= v11 && *(int *)(v4 - 4) <= 0 )
    goto LABEL_19;
  if ( (unsigned int)(uintptr_t)(s) >= v4 )
  {
    v6 = (char *)(v4 + v5);
    if ( (unsigned int)(uintptr_t)(s) <= v4 + v5 )
    {
      v9 = &s[-v4];
      if ( v10 == v11 && *(int *)(v4 - 4) <= 0 )
      {
        src = s;
      }
      else
      {
        sub_E872E0(self, v10);
        src = &v9[*(uint32_t *)self];
        v6 = (char *)(*(uint32_t *)self + *(uint32_t *)(*(uint32_t *)self - 12));
      }
      if ( n == 1 )
        goto LABEL_17;
LABEL_9:
      memcpy(v6, src, n);
      goto LABEL_10;
    }
  }
  if ( v10 == v11 && *(int *)(v4 - 4) <= 0 )
  {
LABEL_19:
    v6 = (char *)(v4 + v5);
  }
  else
  {
    sub_E872E0(self, v10);
    v6 = (char *)(*(uint32_t *)(*(uint32_t *)self - 12) + *(uint32_t *)self);
  }
  if ( n != 1 )
    goto LABEL_9;
LABEL_17:
  *v6 = *src;
LABEL_10:
  v7 = *(uint32_t *)self;
  if ( (int *)(*(uint32_t *)self - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v7 - 4) = 0;
    *(uint32_t *)(v7 - 12) = v10;
    *(uint8_t *)(v7 + v10) = 0;
  }
  return self;
}


// ============================================================================
// Address:   0xe97af0 (size: 544 bytes)
// Symbol:    _ZNSt6vectorISbIcSt11char_traitsIcEN6glitch4core10SAllocatorIcLNS2_6memory13E_MEMORY_HINTE0EEEENS4_IS8_LS6_0EEEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS8_SA_EERKS8_
// Demangled: std::vector<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>*,std::vector<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>>,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)
// ============================================================================
static void g4_compat_def_13(
        int a1,
        std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2,
        std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a3)
{
  int *v3;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v9;
  int i;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v11;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v16;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v17;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v18;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v19;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v20;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v21;
  int v22;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int *_g4_t_v28;
  typedef uint8_t _g4_t_v29[32];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v24)) > _g4_s1 ? (28u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v26)) > _g4_s3 ? (36u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v27)) > _g4_s4 ? (40u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v28)) > _g4_s5 ? (44u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v29)) > _g4_s6 ? (60u + sizeof(_g4_t_v29)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);

  v3 = (int *)a1;
  v4 = a2;
  v5 = *(uint32_t *)(a1 + 4);
  if ( v5 != *(uint32_t *)(a1 + 8) )
  {
    v6 = 0;
    if ( v5 != 0 )
    {
      g4_std_compat::basic_string_ctor(
        *(std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)(a1 + 4),
        (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v5 - 4));
      v6 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v6 + 4;
    g4_std_compat::basic_string_ctor(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v29,
      a3);
    v7 = *(uint32_t *)(a1 + 4);
    v8 = (v7 - 8 - (int)(uintptr_t)(a2)) >> 2;
    if ( v8 > 0 )
    {
      v9 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v7 - 4);
      for ( i = v8; i != 0; --i )
      {
        v11 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v9 - 8);
        v9 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v9 - 4);
        g4_std_compat::basic_string_assign(
          v9,
          v11);
      }
      v4 = a2;
    }
    g4_std_compat::basic_string_assign(
      v4,
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v29);
    g4_noop_dtor((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v29);
    return;
  }
  v12 = *(std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)a1;
  v13 = (v5 - *(uint32_t *)a1) >> 2;
  if ( v13 != 0 )
  {
    v14 = 2 * v13;
    if ( v13 > 2 * v13 || v14 > 0x3FFFFFFF )
    {
      v27 = -4;
      v15 = (a2 - v12) >> 2;
    }
    else
    {
      v27 = 8 * v13;
      v15 = (a2 - v12) >> 2;
      if ( v14 == 0 )
      {
        v26 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&loc_4;
        v25 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v27 = 4;
    v15 = (a2 - v12) >> 2;
  }
  v24 = v15;
  v25 = sub_4EBDC0(v27);
  v26 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v25 + 4);
  v15 = v24;
LABEL_13:
  if ( v25 + 4 * v15 != 0 )
    g4_std_compat::basic_string_ctor(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v25 + 4 * v15),
      a3);
  v16 = *(const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)a1;
  if ( *(std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)a1 != a2 )
  {
    v17 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v25;
    do
    {
      if ( v17 != nullptr )
        g4_std_compat::basic_string_ctor(
          v17,
          v16);
      v16 = (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v16 + 4);
      v17 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v17 + 4);
    }
    while ( v16 != a2 );
    v18 = v17;
    v3 = (int *)a1;
    v26 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v18 + 4);
  }
  v19 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v3[1];
  if ( v19 != a2 )
  {
    v28 = v3;
    v20 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v3[1];
    v21 = v26;
    do
    {
      if ( v21 != nullptr )
        g4_std_compat::basic_string_ctor(
          v21,
          v4);
      v4 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v4 + 4);
      v21 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v21 + 4);
    }
    while ( v20 != v4 );
    v3 = v28;
    v26 = v21;
    v19 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v28[1];
  }
  v22 = *v3;
  if ( (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)*v3 != v19 )
  {
    do
    {
      v23 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v22;
      v22 += 4;
      g4_noop_dtor(v23);
    }
    while ( v19 != (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v22 );
    v22 = *v3;
  }
  if ( v22 != 0 )
    gll_operator_delete_arr(v22);
  *v3 = v25;
  v3[1] = (int)(uintptr_t)(v26);
  v3[2] = v27 + v25;
}


// ============================================================================
// Address:   0xe97d10 (size: 61 bytes)
// Symbol:    _ZNSbItSt11char_traitsItEN6glitch4core10SAllocatorItLNS1_6memory13E_MEMORY_HINTE0EEEED2Ev
// Demangled: std::basic_string<unsigned short,std::char_traits<unsigned short>,glitch::core::SAllocator<unsigned short,(glitch::memory::E_MEMORY_HINT)0>>::~basic_string()
// ============================================================================
// Alternative name is '_ZNSbItSt11char_traitsItEN6glitch4core10SAllocatorItLNS1_6memory13E_MEMORY_HINTE0EEEED1Ev'
static void g4_basic_string_u16_destroy(
        std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *self)
{
  void *v1;

  v1 = (void *)(*(uint32_t *)self - 12);
  if ( v1 != (void *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr((int)(uintptr_t)(v1));
  }
}


// ============================================================================
// Address:   0xe97e60 (size: 61 bytes)
// Symbol:    _ZNSbImSt11char_traitsImEN6glitch4core10SAllocatorImLNS1_6memory13E_MEMORY_HINTE0EEEED2Ev
// Demangled: std::basic_string<unsigned long,std::char_traits<unsigned long>,glitch::core::SAllocator<unsigned long,(glitch::memory::E_MEMORY_HINT)0>>::~basic_string()
// ============================================================================
// Alternative name is '_ZNSbImSt11char_traitsImEN6glitch4core10SAllocatorImLNS1_6memory13E_MEMORY_HINTE0EEEED1Ev'
static void g4_basic_string_u32_destroy(
        std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *self)
{
  void *v1;

  v1 = (void *)(*(uint32_t *)self - 12);
  if ( v1 != (void *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr((int)(uintptr_t)(v1));
  }
}


// ============================================================================
// Address:   0xe99070 (size: 158 bytes)
// Symbol:    _ZNSbItSt11char_traitsItEN6glitch4core10SAllocatorItLNS1_6memory13E_MEMORY_HINTE0EEEEaSERKS7_
// Demangled: std::basic_string<unsigned short,std::char_traits<unsigned short>,glitch::core::SAllocator<unsigned short,(glitch::memory::E_MEMORY_HINT)0>>::operator=(std::basic_string<unsigned short,std::char_traits<unsigned short>,glitch::core::SAllocator<unsigned short,(glitch::memory::E_MEMORY_HINT)0>> const&)
// ============================================================================
static std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *g4_basic_string_u16_assign(
        std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *self,
        const std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  int v2;
  int v3;
  void *v4;
  void *v5;
  int v7;

  v2 = *(uint32_t *)self;
  v3 = *(uint32_t *)a2;
  v4 = (void *)(*(uint32_t *)self - 12);
  v5 = (void *)(*(uint32_t *)a2 - 12);
  if ( v5 != v4 )
  {
    if ( *(int *)(v3 - 4) < 0 )
    {
      v7 = sub_E86E90((int)(uintptr_t)(v5));
      v2 = *(uint32_t *)self;
      v3 = v7;
      v4 = (void *)(*(uint32_t *)self - 12);
    }
    else if ( v5 != (void *)g4_empty_string_rep )
    {
      __sync_add_and_fetch((volatile int32_t *)(v3 - 4), 1u);
      v2 = *(uint32_t *)self;
      v4 = (void *)(*(uint32_t *)self - 12);
    }
    if ( v4 != (void *)g4_empty_string_rep
      && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr((int)(uintptr_t)(v4));
    }
    *(uint32_t *)self = v3;
  }
  return self;
}


// ============================================================================
// Address:   0xe99110 (size: 833 bytes)
// Symbol:    _ZNSt6vectorISbItSt11char_traitsItEN6glitch4core10SAllocatorItLNS2_6memory13E_MEMORY_HINTE0EEEENS4_IS8_LS6_0EEEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS8_SA_EERKS8_
// Demangled: std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,glitch::core::SAllocator<unsigned short,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,glitch::core::SAllocator<unsigned short,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::basic_string<unsigned short,std::char_traits<unsigned short>,glitch::core::SAllocator<unsigned short,(glitch::memory::E_MEMORY_HINT)0>>*,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,glitch::core::SAllocator<unsigned short,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,glitch::core::SAllocator<unsigned short,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>>,std::basic_string<unsigned short,std::char_traits<unsigned short>,glitch::core::SAllocator<unsigned short,(glitch::memory::E_MEMORY_HINT)0>> const&)
// ============================================================================
static void g4_compat_def_14(
        int *a1,
        std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *a2,
        int *a3)
{
  int v3;
  std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *v4;
  int *v5;
  int v6;
  int v7;
  void *v8;
  int v9;
  int v10;
  void *v11;
  int v12;
  std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *v13;
  const std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  void *v21;
  int *v22;
  std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *v23;
  std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *v24;
  int v25;
  void *v26;
  std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *v27;
  int v28;
  void *v29;
  int v30;
  std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *v31;
  typedef std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v34;
  typedef std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef size_t _g4_t_v40;
  typedef int *_g4_t_v41;
  typedef int *_g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int *_g4_t_v45;
  typedef uint32_t _g4_t_v46[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v32)) > _g4_s0 ? (0u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v33)) > _g4_s1 ? (20u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v34)) > _g4_s2 ? (20u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v35)) > _g4_s3 ? (20u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v36)) > _g4_s4 ? (24u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v37)) > _g4_s5 ? (24u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v38)) > _g4_s6 ? (24u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v39)) > _g4_s7 ? (28u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v40)) > _g4_s8 ? (32u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v41)) > _g4_s9 ? (36u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v42)) > _g4_s10 ? (40u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v43)) > _g4_s11 ? (44u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v44)) > _g4_s12 ? (44u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v45)) > _g4_s13 ? (44u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v46)) > _g4_s14 ? (48u + sizeof(_g4_t_v46)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);

  v3 = (int)(uintptr_t)(a1);
  v4 = a2;
  v5 = (int *)a1[1];
  if ( v5 != (int *)a1[2] )
  {
    v6 = 0;
    if ( v5 != nullptr )
    {
      v7 = *(v5 - 1);
      v8 = (void *)(v7 - 12);
      if ( *(int *)(v7 - 4) < 0 )
      {
        v7 = sub_E86E90((int)(uintptr_t)(v8));
        v3 = (int)(uintptr_t)(a1);
      }
      else if ( v8 != (void *)g4_empty_string_rep )
      {
        __sync_add_and_fetch((volatile int32_t *)(v7 - 4), 1u);
      }
      *v5 = v7;
      v6 = *(uint32_t *)(v3 + 4);
    }
    v9 = v6 + 4;
    *(uint32_t *)(v3 + 4) = v9;
    v10 = *a3;
    v11 = (void *)(*a3 - 12);
    if ( *(int *)(*a3 - 4) < 0 )
    {
      v37 = v3;
      v10 = sub_E86E90((int)(uintptr_t)(v11));
      v9 = *(uint32_t *)(v37 + 4);
    }
    else if ( v11 != (void *)g4_empty_string_rep )
    {
      __sync_add_and_fetch((volatile int32_t *)(v10 - 4), 1u);
      v9 = *(uint32_t *)(v3 + 4);
    }
    v12 = (v9 - 8 - (int)(uintptr_t)(a2)) >> 2;
    v46[0] = v10;
    if ( v12 > 0 )
    {
      v13 = (std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)(v9 - 4);
      do
      {
        v14 = (std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v13 - 8);
        v13 = (std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v13 - 4);
        g4_std_compat::basic_string_assign(
          v13,
          v14);
        --v12;
      }
      while ( v12 != 0 );
    }
    g4_std_compat::basic_string_assign(
      a2,
      (const std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)v46);
    g4_noop_dtor((std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)v46);
    return;
  }
  v15 = *a1;
  v16 = ((int)(uintptr_t)(v5) - *a1) >> 2;
  if ( v16 != 0 )
  {
    if ( v16 > 2 * v16 || 2 * v16 > 0x3FFFFFFF )
    {
      v40 = 0xFFFFFFFF;
      v17 = ((int)(uintptr_t)(a2) - v15) >> 2;
    }
    else
    {
      v17 = ((int)(uintptr_t)(a2) - v15) >> 2;
      v40 = 2 * v16;
      if ( 2 * v16 == 0 )
      {
        v41 = nullptr;
        v19 = (int *)((uint32_t *)&loc_4);
        v18 = 0;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v40 = 1;
    v17 = ((int)(uintptr_t)(a2) - v15) >> 2;
  }
  v33 = v17;
  v18 = sub_4EBDC0(v40 * 4);
  v41 = (int *)v18;
  v19 = (int *)(v18 + 4);
  v17 = v33;
  v3 = (int)(uintptr_t)(a1);
LABEL_18:
  v43 = (int *)(v18 + 4 * v17);
  if ( v43 != nullptr )
  {
    v20 = *a3;
    v21 = (void *)(*a3 - 12);
    if ( *(int *)(*a3 - 4) < 0 )
    {
      v38 = v3;
      v20 = sub_E86E90((int)(uintptr_t)(v21));
      v3 = v38;
    }
    else if ( v21 != (void *)g4_empty_string_rep )
    {
      __sync_add_and_fetch((volatile int32_t *)(v20 - 4), 1u);
    }
    *v43 = v20;
  }
  if ( *(std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> **)v3 != a2 )
  {
    v22 = v41;
    v23 = *(std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> **)v3;
    v39 = v3;
    v24 = a2;
    do
    {
      if ( v22 != nullptr )
      {
        v25 = *(uint32_t *)v23;
        v26 = (void *)(*(uint32_t *)v23 - 12);
        if ( *(int *)(*(uint32_t *)v23 - 4) < 0 )
        {
          v35 = v24;
          v25 = sub_E86E90((int)(uintptr_t)(v26));
          v24 = v35;
        }
        else if ( v26 != (void *)g4_empty_string_rep )
        {
          __sync_add_and_fetch((volatile int32_t *)(v25 - 4), 1u);
        }
        *v22 = v25;
      }
      v23 = (std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v23 + 4);
      ++v22;
    }
    while ( v23 != v24 );
    v4 = a2;
    v3 = v39;
    v19 = v22 + 1;
  }
  v27 = *(std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> **)(v3 + 4);
  if ( v27 != a2 )
  {
    v44 = v3;
    do
    {
      if ( v19 != nullptr )
      {
        v28 = *(uint32_t *)v4;
        v29 = (void *)(*(uint32_t *)v4 - 12);
        if ( *(int *)(*(uint32_t *)v4 - 4) < 0 )
        {
          v34 = v27;
          v28 = sub_E86E90((int)(uintptr_t)(v29));
          v27 = v34;
        }
        else if ( v29 != (void *)g4_empty_string_rep )
        {
          __sync_add_and_fetch((volatile int32_t *)(v28 - 4), 1u);
        }
        *v19 = v28;
      }
      v4 = (std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v4 + 4);
      ++v19;
    }
    while ( v27 != v4 );
    v3 = v44;
    v27 = *(std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> **)(v44 + 4);
  }
  v30 = *(uint32_t *)v3;
  if ( v27 != *(std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> **)v3 )
  {
    v45 = v19;
    v42 = (int *)v3;
    v31 = v27;
    do
    {
      v32 = (std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)v30;
      v30 += 4;
      g4_noop_dtor(v32);
    }
    while ( v31 != (std::basic_string<unsigned short, std::char_traits<unsigned short>, glitch::core::SAllocator<unsigned short, (glitch::memory::E_MEMORY_HINT)0>> *)v30 );
    v3 = (int)(uintptr_t)(v42);
    v19 = v45;
    v30 = *v42;
  }
  if ( v30 != 0 )
  {
    v36 = v3;
    gll_operator_delete_arr(v30);
    v3 = v36;
  }
  *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v19);
  *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v41);
  *(uint32_t *)(v3 + 8) = (uint32_t)(uintptr_t)(&v41[v40]);
}


// ============================================================================
// Address:   0xe99460 (size: 158 bytes)
// Symbol:    _ZNSbImSt11char_traitsImEN6glitch4core10SAllocatorImLNS1_6memory13E_MEMORY_HINTE0EEEEaSERKS7_
// Demangled: std::basic_string<unsigned long,std::char_traits<unsigned long>,glitch::core::SAllocator<unsigned long,(glitch::memory::E_MEMORY_HINT)0>>::operator=(std::basic_string<unsigned long,std::char_traits<unsigned long>,glitch::core::SAllocator<unsigned long,(glitch::memory::E_MEMORY_HINT)0>> const&)
// ============================================================================
static std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *g4_basic_string_u32_assign(
        std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *self,
        const std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  int v2;
  int v3;
  unsigned int *v4;
  unsigned int *v5;
  int v7;

  v2 = *(uint32_t *)self;
  v3 = *(uint32_t *)a2;
  v4 = (unsigned int *)(*(uint32_t *)self - 12);
  v5 = (unsigned int *)(*(uint32_t *)a2 - 12);
  if ( v5 != v4 )
  {
    if ( *(int *)(v3 - 4) < 0 )
    {
      v7 = sub_E86A20(v5);
      v2 = *(uint32_t *)self;
      v3 = v7;
      v4 = (unsigned int *)(*(uint32_t *)self - 12);
    }
    else if ( v5 != (unsigned int *)(void *)g4_empty_string_rep )
    {
      __sync_add_and_fetch((volatile int32_t *)(v3 - 4), 1u);
      v2 = *(uint32_t *)self;
      v4 = (unsigned int *)(*(uint32_t *)self - 12);
    }
    if ( v4 != (unsigned int *)(void *)g4_empty_string_rep
      && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr((int)(uintptr_t)(v4));
    }
    *(uint32_t *)self = v3;
  }
  return self;
}


// ============================================================================
// Address:   0xe99500 (size: 833 bytes)
// Symbol:    _ZNSt6vectorISbImSt11char_traitsImEN6glitch4core10SAllocatorImLNS2_6memory13E_MEMORY_HINTE0EEEENS4_IS8_LS6_0EEEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS8_SA_EERKS8_
// Demangled: std::vector<std::basic_string<unsigned long,std::char_traits<unsigned long>,glitch::core::SAllocator<unsigned long,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<unsigned long,std::char_traits<unsigned long>,glitch::core::SAllocator<unsigned long,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::basic_string<unsigned long,std::char_traits<unsigned long>,glitch::core::SAllocator<unsigned long,(glitch::memory::E_MEMORY_HINT)0>>*,std::vector<std::basic_string<unsigned long,std::char_traits<unsigned long>,glitch::core::SAllocator<unsigned long,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<unsigned long,std::char_traits<unsigned long>,glitch::core::SAllocator<unsigned long,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>>,std::basic_string<unsigned long,std::char_traits<unsigned long>,glitch::core::SAllocator<unsigned long,(glitch::memory::E_MEMORY_HINT)0>> const&)
// ============================================================================
static void g4_compat_def_15(
        int *a1,
        std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *a2,
        int *a3)
{
  int v3;
  std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *v4;
  int *v5;
  int v6;
  int v7;
  unsigned int *v8;
  int v9;
  int v10;
  unsigned int *v11;
  int v12;
  std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *v13;
  const std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  unsigned int *v21;
  int *v22;
  std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *v23;
  std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *v24;
  int v25;
  unsigned int *v26;
  std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *v27;
  int v28;
  unsigned int *v29;
  int v30;
  std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *v31;
  typedef std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v34;
  typedef std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef size_t _g4_t_v40;
  typedef int *_g4_t_v41;
  typedef int *_g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int *_g4_t_v45;
  typedef uint32_t _g4_t_v46[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v32)) > _g4_s0 ? (0u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v33)) > _g4_s1 ? (20u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v34)) > _g4_s2 ? (20u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v35)) > _g4_s3 ? (20u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v36)) > _g4_s4 ? (24u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v37)) > _g4_s5 ? (24u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v38)) > _g4_s6 ? (24u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v39)) > _g4_s7 ? (28u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v40)) > _g4_s8 ? (32u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v41)) > _g4_s9 ? (36u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v42)) > _g4_s10 ? (40u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v43)) > _g4_s11 ? (44u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v44)) > _g4_s12 ? (44u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v45)) > _g4_s13 ? (44u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v46)) > _g4_s14 ? (48u + sizeof(_g4_t_v46)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);

  v3 = (int)(uintptr_t)(a1);
  v4 = a2;
  v5 = (int *)a1[1];
  if ( v5 != (int *)a1[2] )
  {
    v6 = 0;
    if ( v5 != nullptr )
    {
      v7 = *(v5 - 1);
      v8 = (unsigned int *)(v7 - 12);
      if ( *(int *)(v7 - 4) < 0 )
      {
        v7 = sub_E86A20(v8);
        v3 = (int)(uintptr_t)(a1);
      }
      else if ( v8 != (unsigned int *)(void *)g4_empty_string_rep )
      {
        __sync_add_and_fetch((volatile int32_t *)(v7 - 4), 1u);
      }
      *v5 = v7;
      v6 = *(uint32_t *)(v3 + 4);
    }
    v9 = v6 + 4;
    *(uint32_t *)(v3 + 4) = v9;
    v10 = *a3;
    v11 = (unsigned int *)(*a3 - 12);
    if ( *(int *)(*a3 - 4) < 0 )
    {
      v37 = v3;
      v10 = sub_E86A20(v11);
      v9 = *(uint32_t *)(v37 + 4);
    }
    else if ( v11 != (unsigned int *)(void *)g4_empty_string_rep )
    {
      __sync_add_and_fetch((volatile int32_t *)(v10 - 4), 1u);
      v9 = *(uint32_t *)(v3 + 4);
    }
    v12 = (v9 - 8 - (int)(uintptr_t)(a2)) >> 2;
    v46[0] = v10;
    if ( v12 > 0 )
    {
      v13 = (std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)(v9 - 4);
      do
      {
        v14 = (std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v13 - 8);
        v13 = (std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v13 - 4);
        g4_std_compat::basic_string_assign(
          v13,
          v14);
        --v12;
      }
      while ( v12 != 0 );
    }
    g4_std_compat::basic_string_assign(
      a2,
      (const std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)v46);
    g4_noop_dtor((std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)v46);
    return;
  }
  v15 = *a1;
  v16 = ((int)(uintptr_t)(v5) - *a1) >> 2;
  if ( v16 != 0 )
  {
    if ( v16 > 2 * v16 || 2 * v16 > 0x3FFFFFFF )
    {
      v40 = 0xFFFFFFFF;
      v17 = ((int)(uintptr_t)(a2) - v15) >> 2;
    }
    else
    {
      v17 = ((int)(uintptr_t)(a2) - v15) >> 2;
      v40 = 2 * v16;
      if ( 2 * v16 == 0 )
      {
        v41 = nullptr;
        v19 = (int *)((uint32_t *)&loc_4);
        v18 = 0;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v40 = 1;
    v17 = ((int)(uintptr_t)(a2) - v15) >> 2;
  }
  v33 = v17;
  v18 = sub_4EBDC0(v40 * 4);
  v41 = (int *)v18;
  v19 = (int *)(v18 + 4);
  v17 = v33;
  v3 = (int)(uintptr_t)(a1);
LABEL_18:
  v43 = (int *)(v18 + 4 * v17);
  if ( v43 != nullptr )
  {
    v20 = *a3;
    v21 = (unsigned int *)(*a3 - 12);
    if ( *(int *)(*a3 - 4) < 0 )
    {
      v38 = v3;
      v20 = sub_E86A20(v21);
      v3 = v38;
    }
    else if ( v21 != (unsigned int *)(void *)g4_empty_string_rep )
    {
      __sync_add_and_fetch((volatile int32_t *)(v20 - 4), 1u);
    }
    *v43 = v20;
  }
  if ( *(std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> **)v3 != a2 )
  {
    v22 = v41;
    v23 = *(std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> **)v3;
    v39 = v3;
    v24 = a2;
    do
    {
      if ( v22 != nullptr )
      {
        v25 = *(uint32_t *)v23;
        v26 = (unsigned int *)(*(uint32_t *)v23 - 12);
        if ( *(int *)(*(uint32_t *)v23 - 4) < 0 )
        {
          v35 = v24;
          v25 = sub_E86A20(v26);
          v24 = v35;
        }
        else if ( v26 != (unsigned int *)(void *)g4_empty_string_rep )
        {
          __sync_add_and_fetch((volatile int32_t *)(v25 - 4), 1u);
        }
        *v22 = v25;
      }
      v23 = (std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v23 + 4);
      ++v22;
    }
    while ( v23 != v24 );
    v4 = a2;
    v3 = v39;
    v19 = v22 + 1;
  }
  v27 = *(std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> **)(v3 + 4);
  if ( v27 != a2 )
  {
    v44 = v3;
    do
    {
      if ( v19 != nullptr )
      {
        v28 = *(uint32_t *)v4;
        v29 = (unsigned int *)(*(uint32_t *)v4 - 12);
        if ( *(int *)(*(uint32_t *)v4 - 4) < 0 )
        {
          v34 = v27;
          v28 = sub_E86A20(v29);
          v27 = v34;
        }
        else if ( v29 != (unsigned int *)(void *)g4_empty_string_rep )
        {
          __sync_add_and_fetch((volatile int32_t *)(v28 - 4), 1u);
        }
        *v19 = v28;
      }
      v4 = (std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v4 + 4);
      ++v19;
    }
    while ( v27 != v4 );
    v3 = v44;
    v27 = *(std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> **)(v44 + 4);
  }
  v30 = *(uint32_t *)v3;
  if ( v27 != *(std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> **)v3 )
  {
    v45 = v19;
    v42 = (int *)v3;
    v31 = v27;
    do
    {
      v32 = (std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)v30;
      v30 += 4;
      g4_noop_dtor(v32);
    }
    while ( v31 != (std::basic_string<unsigned long, std::char_traits<unsigned long>, glitch::core::SAllocator<unsigned long, (glitch::memory::E_MEMORY_HINT)0>> *)v30 );
    v3 = (int)(uintptr_t)(v42);
    v19 = v45;
    v30 = *v42;
  }
  if ( v30 != 0 )
  {
    v36 = v3;
    gll_operator_delete_arr(v30);
    v3 = v36;
  }
  *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v19);
  *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v41);
  *(uint32_t *)(v3 + 8) = (uint32_t)(uintptr_t)(&v41[v40]);
}


// ============================================================================
// Address:   0xe9d160 (size: 89 bytes)
// Symbol:    sub_E9D160
// Demangled: sub_E9D160
// ============================================================================
int sub_E9D160()
{
  sub_1900D70(&unk_20E0F88);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20E0F88, &unk_20D1280);
  dword_20E0F8C = 1056964608;
  dword_20E0F90 = 1056964608;
  dword_20E0F94 = 1056964608;
  return 1056964608;
}


// ============================================================================
// Address:   0xe9d9a0 (size: 27 bytes)
// Symbol:    sub_E9D9A0
// Demangled: sub_E9D9A0
// ============================================================================
uint32_t *sub_E9D9A0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20829E0);
  return a1;
}


// ============================================================================
// Address:   0xe9ecf0 (size: 45 bytes)
// Symbol:    sub_E9ECF0
// Demangled: sub_E9ECF0
// ============================================================================
void sub_E9ECF0(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_20829E0);
  opDelete(a1);
}


// ============================================================================
// Address:   0xe9f030 (size: 554 bytes)
// Symbol:    sub_E9F030
// Demangled: sub_E9F030
// ============================================================================
float *sub_E9F030(float *a1, float *a2, float *a3, float *a4)
{
  float v5; // xmm1_4
  float v6; // xmm7_4
  float v7; // xmm5_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm1_4
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;

  v5 = a4[1];
  v20 = a3[2];
  v14 = a4[2];
  v6 = *a2;
  v18 = a3[1];
  v7 = a2[1];
  v8 = (float)((float)((float)(v18 - v5) * (float)(v18 - v5)) + (float)((float)(*a3 - *a4) * (float)(*a3 - *a4)))
     + (float)((float)(v20 - v14) * (float)(v20 - v14));
  v9 = a2[2];
  v21 = fsqrt(v8);
  v10 = v7 - v5;
  v11 = (float)((float)((float)(v7 - v18) * (float)(v7 - v18)) + (float)((float)(v6 - *a3) * (float)(v6 - *a3)))
      + (float)((float)(v9 - v20) * (float)(v9 - v20));
  v12 = (float)((float)(v10 * v10) + (float)((float)(v6 - *a4) * (float)(v6 - *a4)))
      + (float)((float)(v9 - v14) * (float)(v9 - v14));
  v19 = fsqrt(v11);
  v16 = fsqrt(v12);
  v15 = acosf(fminf(fmaxf((float)((float)(v12 + v8) - v11) / (float)((float)(v21 * v16) + (float)(v21 * v16)), -1.0), 1.0));
  v17 = acosf(fminf(fmaxf((float)((float)(v11 + v8) - v12) / (float)((float)(v21 * v19) + (float)(v21 * v19)), -1.0), 1.0));
  *a1 = acosf(fminf(fmaxf((float)((float)(v11 + v12) - v8) / (float)((float)(v16 * v19) + (float)(v16 * v19)), -1.0), 1.0));
  a1[1] = v17;
  a1[2] = v15;
  return a1;
}


// ============================================================================
// Address:   0xea0200 (size: 174 bytes)
// Symbol:    sub_EA0200
// Demangled: sub_EA0200
// ============================================================================
int sub_EA0200(float *a1, float a2, __m128i a3, float a4, float a5)
{
  int v5;
  __m128i v6; // xmm3
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  int v11;

  v6 = a3;
  v5 = 0;
  *(float *)g4_m128_ptr<int32_t>(v6) = (float)(*(float *)g4_m128_ptr<int32_t>(a3) * *(float *)g4_m128_ptr<int32_t>(a3)) - (float)((float)(4.0 * a2) * a4);
  if ( *(float *)g4_m128_ptr<int32_t>(v6) < 0.0 )
    return v5;
  v7 = fsqrt(*(float *)g4_m128_ptr<int32_t>(v6));
  v8 = a2 + a2;
  v9 = (float)-(float)(v7 + *(float *)g4_m128_ptr<int32_t>(a3)) / v8;
  *(float *)g4_m128_ptr<int32_t>(v6) = (float)(v7 - *(float *)g4_m128_ptr<int32_t>(a3)) / v8;
  if ( v9 <= *(float *)g4_m128_ptr<int32_t>(v6) )
  {
    v11 = _mm_cvtsi128_si32(v6);
    *(float *)g4_m128_ptr<int32_t>(v6) = v9;
    v9 = *(float *)&v11;
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v6) > 0.0 && a5 > *(float *)g4_m128_ptr<int32_t>(v6) )
  {
    *a1 = *(float *)g4_m128_ptr<int32_t>(v6);
    return 1;
  }
  else
  {
    if ( v9 > 0.0 && a5 > v9 )
    {
      *a1 = v9;
      return 1;
    }
    return 0;
  }
}


// ============================================================================
// Address:   0xea07f0 (size: 213 bytes)
// Symbol:    sub_EA07F0
// Demangled: sub_EA07F0
// ============================================================================
uint32_t *sub_EA07F0(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v10;

  v10 = a1;
  if ( a2 != a1 )
  {
    v3 = a1 + 4;
    v4 = a3 + 4;
    v5 = a1 + 6;
    v6 = a3 + 6;
    v7 = a3;
    do
    {
      if ( v7 != nullptr )
      {
        *v7 = *a1;
        v7[1] = a1[1];
        v7[2] = a1[2];
        *(v4 - 1) = *(v3 - 1);
        *v4 = *v3;
        v4[1] = v3[1];
        *v6 = *v5;
        v6[1] = v5[1];
        v6[2] = v5[2];
      }
      a1 += 9;
      v7 += 9;
      v3 += 9;
      v4 += 9;
      v5 += 9;
      v6 += 9;
    }
    while ( a1 != a2 );
    a3 += ((unsigned int)((char *)a1 - (char *)(v10 + 9)) >> 2) + 9;
  }
  return a3;
}


// ============================================================================
// Address:   0xea08d0 (size: 146 bytes)
// Symbol:    sub_EA08D0
// Demangled: sub_EA08D0
// ============================================================================
size_t sub_EA08D0(int *a1, size_t a2)
{
  uint8_t *v3;
  uint8_t *v4;
  int v5;
  uint8_t *v6;
  int v7;
  size_t result;
  int v9;
  uint8_t *v11;

  v3 = (uint8_t *)a1[1];
  v4 = (uint8_t *)*a1;
  v11 = &v3[-*a1];
  v5 = 0;
  if ( a2 != 0 )
    v5 = sub_4EBDC0(a2);
  if ( v4 != v3 )
  {
    v6 = (uint8_t *)v5;
    do
    {
      if ( v6 != nullptr )
        *v6 = *v4;
      ++v4;
      ++v6;
    }
    while ( v4 != v3 );
  }
  if ( *a1 != 0 )
  {
    v9 = v5;
    gll_operator_delete_arr(*a1);
    v5 = v9;
  }
  *a1 = v5;
  v7 = (int)(uintptr_t)(&v11[v5]);
  result = a2 + v5;
  a1[1] = v7;
  a1[2] = result;
  return result;
}


// ============================================================================
// Address:   0xea0970 (size: 136 bytes)
// Symbol:    sub_EA0970
// Demangled: sub_EA0970
// ============================================================================
int sub_EA0970(unsigned int a1, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  int result;

  v2 = a1;
  if ( a1 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( a1 > a2 && a1 < 2 * a2 )
    v2 = 2 * a2;
  if ( v2 + 29 > 0x1000 && a2 < v2 )
  {
    v3 = v2 + 4096 - (((uint16_t)v2 + 29) & 0xFFF);
    v2 = 1073741820;
    if ( v3 <= 0x3FFFFFFC )
      v2 = v3;
  }
  result = sub_4EBDC0(v2 + 13);
  *(uint32_t *)(result + 4) = v2;
  *(uint32_t *)(result + 8) = 0;
  return result;
}


// ============================================================================
// Address:   0xea0a00 (size: 510 bytes)
// Symbol:    sub_EA0A00
// Demangled: sub_EA0A00
// ============================================================================
uint32_t *sub_EA0A00(int *a1, uint32_t *a2)
{
  char *v3;
  uint32_t *result;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  char *v10;
  char *v11;
  uint32_t *v12;
  char *v13;
  char *v14;
  uint32_t *v15;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;

  v3 = (char *)a1[1];
  if ( v3 == (char *)a1[2] )
  {
    v21 = 12;
    v8 = -1431655765 * ((int)(uintptr_t)(&v3[-*a1]) >> 2);
    if ( v8 != 0 )
    {
      if ( -1431655765 * ((int)(uintptr_t)(&v3[-*a1]) >> 2) > (unsigned int)(1431655766 * ((int)(uintptr_t)(&v3[-*a1]) >> 2))
        || (unsigned int)(1431655766 * ((int)(uintptr_t)(&v3[-*a1]) >> 2)) > 0x15555555 )
      {
        v21 = -4;
      }
      else
      {
        v21 = 8 * ((int)(uintptr_t)(&v3[-*a1]) >> 2);
      }
    }
    v18 = opNew(v21);
    v20 = v18 + 12;
    v9 = (uint32_t *)(v18 + 12 * v8);
    if ( v9 != nullptr )
    {
      *v9 = *a2;
      v9[1] = a2[1];
      v9[2] = a2[2];
    }
    v10 = (char *)*a1;
    if ( v3 != (char *)*a1 )
    {
      v11 = (char *)*a1;
      v12 = (uint32_t *)v18;
      do
      {
        if ( v12 != nullptr )
        {
          *v12 = *(uint32_t *)v11;
          v12[1] = *((uint32_t *)v11 + 1);
          v12[2] = *((uint32_t *)v11 + 2);
        }
        v11 += 12;
        v12 += 3;
      }
      while ( v3 != v11 );
      v20 = v18 + 4 * ((unsigned int)(v3 - (v10 + 12)) >> 2) + 24;
    }
    v13 = (char *)a1[1];
    if ( v3 != v13 )
    {
      v14 = v3;
      v15 = (uint32_t *)v20;
      do
      {
        if ( v15 != nullptr )
        {
          *v15 = *(uint32_t *)v14;
          v15[1] = *((uint32_t *)v14 + 1);
          v15[2] = *((uint32_t *)v14 + 2);
        }
        v14 += 12;
        v15 += 3;
      }
      while ( v13 != v14 );
      v20 += 4 * ((unsigned int)(v13 - (v3 + 12)) >> 2) + 12;
    }
    if ( *a1 != 0 )
      opDelete((void *)*a1);
    *a1 = v18;
    a1[1] = v20;
    a1[2] = v21 + v18;
    return (uint32_t *)(v21 + v18);
  }
  else
  {
    result = nullptr;
    if ( v3 != nullptr )
    {
      *(uint32_t *)v3 = *((uint32_t *)v3 - 3);
      *((uint32_t *)v3 + 1) = *((uint32_t *)v3 - 2);
      *((uint32_t *)v3 + 2) = *((uint32_t *)v3 - 1);
      result = (uint32_t *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(result + 3);
    v5 = a2[2];
    v6 = -1431655765 * (((char *)(result - 3) - v3) >> 2);
    v17 = *a2;
    v19 = a2[1];
    if ( v6 > 0 )
    {
      v7 = result - 6;
      result -= 3;
      do
      {
        --v6;
        *result = *v7;
        result[1] = v7[1];
        result[2] = v7[2];
        v7 -= 3;
        result -= 3;
      }
      while ( v6 != 0 );
    }
    *((uint32_t *)v3 + 2) = v5;
    *(uint32_t *)v3 = v17;
    *((uint32_t *)v3 + 1) = v19;
  }
  return result;
}


// ============================================================================
// Address:   0xea0c00 (size: 375 bytes)
// Symbol:    sub_EA0C00
// Demangled: sub_EA0C00
// ============================================================================
int sub_EA0C00(int *a1, uint32_t *a2)
{
  char *v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  unsigned int v10;
  uint32_t *v11;
  int v12;
  char *v13;
  uint32_t *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  int v18;
  unsigned int v20;
  int v21;
  size_t v22;

  v3 = (char *)a1[1];
  if ( v3 == (char *)a1[2] )
  {
    v10 = (int)(uintptr_t)(&v3[-*a1]) >> 2;
    v22 = 4;
    if ( v10 != 0 )
    {
      v22 = 0xFFFFFFFC;
      if ( v10 <= 2 * v10 )
      {
        v18 = 8 * v10;
        if ( 2 * v10 > 0x3FFFFFFF )
          v18 = -4;
        v22 = v18;
      }
    }
    v21 = sub_4EBDC0(v22);
    v20 = v21 + 4;
    v11 = (uint32_t *)(v21 + 4 * v10);
    if ( v11 != nullptr )
      *v11 = *a2;
    v12 = *a1;
    if ( v3 != (char *)*a1 )
    {
      v13 = (char *)*a1;
      v14 = (uint32_t *)v21;
      do
      {
        if ( v14 != nullptr )
          *v14 = *(uint32_t *)v13;
        v13 += 4;
        ++v14;
      }
      while ( v3 != v13 );
      v20 = v21 + 4 * ((unsigned int)(uintptr_t)(&v3[-v12 - 4]) >> 2) + 8;
    }
    v15 = (char *)a1[1];
    if ( v3 != v15 )
    {
      v16 = v3;
      v17 = (uint32_t *)v20;
      do
      {
        if ( v17 != nullptr )
          *v17 = *(uint32_t *)v16;
        v16 += 4;
        ++v17;
      }
      while ( v15 != v16 );
      v20 += 4 * ((unsigned int)(v15 - (v3 + 4)) >> 2) + 4;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v21;
    a1[1] = v20;
    a1[2] = v22 + v21;
    return v22 + v21;
  }
  else
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *(uint32_t *)v3 = *((uint32_t *)v3 - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    v5 = *a2;
    v6 = v4 - 4;
    result = (v4 - 4 - (int)(uintptr_t)(v3)) >> 2;
    if ( result > 0 )
    {
      v8 = -4 * result + v4;
      v9 = -4 * result + v6;
      do
      {
        *(uint32_t *)(v8 + 4 * result - 4) = *(uint32_t *)(v9 + 4 * result - 4);
        --result;
      }
      while ( result != 0 );
    }
    *(uint32_t *)v3 = v5;
  }
  return result;
}


// ============================================================================
// Address:   0xea0df0 (size: 114 bytes)
// Symbol:    sub_EA0DF0
// Demangled: sub_EA0DF0
// ============================================================================
bool sub_EA0DF0(const wchar_t **a1, const wchar_t *s)
{
  size_t v3;
  size_t v4;
  bool v5; // cc
  size_t v6;
  size_t n;
  int v8;
  int v9;

  v3 = *(*a1 - 3);
  v4 = wcslen(s);
  v5 = v4 <= v3;
  v6 = v4;
  n = v3;
  if ( v5 )
    n = v6;
  v8 = v3 - v6;
  v9 = wmemcmp(*a1, s, n);
  if ( v9 == 0 )
    v9 = v8;
  return v9 == 0;
}


// ============================================================================
// Address:   0xea0e70 (size: 90 bytes)
// Symbol:    sub_EA0E70
// Demangled: sub_EA0E70
// ============================================================================
uint32_t *sub_EA0E70(uint32_t *result, uint32_t *a2)
{
  uint32_t *v3;
  uint32_t *i;
  int v5;

  v3 = result;
  *result = (uint32_t)(uintptr_t)(result);
  result[1] = (uint32_t)(uintptr_t)(result);
  for ( i = (uint32_t *)*a2; a2 != i; i = (uint32_t *)*i )
  {
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = i[2];
    result = (uint32_t *)sub_1901920(v5, v3);
  }
  return result;
}


// ============================================================================
// Address:   0xea0ed0 (size: 65 bytes)
// Symbol:    sub_EA0ED0
// Demangled: sub_EA0ED0
// ============================================================================
int sub_EA0ED0(int *a1, int a2, int a3)
{
  int v3;

  v3 = *a1;
  if ( a2 != 0 )
    return G4_VCALL<int>(v3, 12, a2, 4 * a3);
  else
    return G4_VCALL<int>(v3, 24, 4 * a3, 1);
}


// ============================================================================
// Address:   0xea0f20 (size: 276 bytes)
// Symbol:    sub_EA0F20
// Demangled: sub_EA0F20
// ============================================================================
int sub_EA0F20(int **a1, int a2)
{
  int *v2;
  int *v3;
  int *v4;
  int v5;
  int v6;
  int *v7;
  int *v8;
  int *v9;
  int **i;
  int *v11;
  int v12;
  typedef int _g4_t_v15;
  typedef int *_g4_t_v16;
  typedef uint32_t _g4_t_v17[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);

  v2 = *a1;
  v3 = nullptr;
  v15 = 1;
  v4 = v2 - 1;
  if ( v2 == nullptr )
    v4 = nullptr;
  v5 = v4[52];
  if ( v5 != 0 )
    v3 = (int *)(v5 + 4);
  v16 = v3;
  v6 = *v2;
  while ( 1 )
  {
    v7 = nullptr;
    if ( v2 != nullptr )
      v7 = v2 - 1;
    if ( (v7[61] & 0x18) == 0x18 )
    {
      v17[0] = ((uint32_t)(uintptr_t)&off_2085798);
      v8 = nullptr;
      if ( v2 != nullptr )
        v8 = v2 - 1;
      v17[1] = a2;
      G4_VCALL<void>(v8, 84, v17);
      v9 = nullptr;
      v6 = 212;
      if ( v2 != nullptr )
      {
        v6 = (int)(uintptr_t)(v2 + 52);
        v9 = v2 - 1;
      }
      v3 = v2;
      v2 = (int *)v9[53];
      if ( v2 != (int *)v6 )
        goto LABEL_10;
    }
    else
    {
      v2 = (int *)*v2;
      if ( v2 != (int *)v6 )
        goto LABEL_10;
    }
    if ( v16 == v3 )
      return v15;
    for ( i = (int **)v3; ; i = (int **)v3 )
    {
      v11 = v3 - 1;
      v2 = *i;
      if ( v3 == nullptr )
        v11 = nullptr;
      v12 = v11[52];
      v3 = (int *)(v12 + 4);
      if ( v12 == 0 )
        v3 = nullptr;
      v6 = v12 + 212;
      if ( (int *)v6 != v2 )
        break;
      if ( v3 == v16 )
        return v15;
    }
LABEL_10:
    if ( v3 == v16 )
      return v15;
    ++v15;
  }
}


// ============================================================================
// Address:   0xea1040 (size: 53 bytes)
// Symbol:    sub_EA1040
// Demangled: sub_EA1040
// ============================================================================
uint32_t *sub_EA1040(uint32_t *result, unsigned int *a2)
{
  unsigned int v2;
  uint32_t v3;
  uint32_t v4;
  unsigned int v5;

  v2 = a2[3];
  v3 = __builtin_bswap32(a2[2]);
  v4 = __builtin_bswap32(a2[1]);
  v5 = *a2;
  result[1] = v4;
  result[2] = v3;
  result[3] = __builtin_bswap32(v2);
  *result = __builtin_bswap32(v5);
  return result;
}


// ============================================================================
// Address:   0xea1080 (size: 859 bytes)
// Symbol:    sub_EA1080
// Demangled: sub_EA1080
// ============================================================================
int *sub_EA1080(int *result, int *a2, unsigned int a3, int *a4)
{
  int *v4;
  unsigned int v5;
  int *v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  bool v10;
  unsigned int v11;
  int v12;
  int v13;
  uint32_t *v14;
  unsigned int v15;
  int v16;
  int *v17;
  int *v18;
  int v19;
  int *v20;
  int *v21;
  int *v22;
  int *v23;
  int v24;
  int v25;
  int v26;
  int *v27;
  int *v28;
  int v29;
  size_t v30;
  unsigned int v31;
  int *v32;
  int *v33;
  int *v34;
  int v35;
  int *v36;
  int v37;
  unsigned int v38;
  int v39;
  int *v41;
  int *v42;
  int v43;
  int *v44;
  size_t v45;
  size_t v46;

  v4 = a2;
  v5 = a3;
  v42 = result;
  if ( a3 == 0 )
    return result;
  v6 = result;
  result = (int *)result[1];
  if ( a3 > (v6[2] - (int)(uintptr_t)(result)) >> 3 )
  {
    v7 = *v42;
    v8 = ((int)(uintptr_t)(result) - *v42) >> 3;
    if ( a3 > 0x1FFFFFFF - v8 )
      sub_1900180("vector::_M_fill_insert");
    v9 = a3;
    if ( v8 >= a3 )
      v9 = v8;
    v10 = __CFADD__(v9, v8);
    v11 = v9 + v8;
    if ( v10 || v11 > 0x1FFFFFFF )
    {
      v45 = 0xFFFFFFF8;
      v30 = 0xFFFFFFF8;
      v12 = ((int)(uintptr_t)(a2) - v7) >> 3;
    }
    else
    {
      v12 = ((int)(uintptr_t)(a2) - v7) >> 3;
      if ( v11 == 0 )
      {
        v43 = 0;
        v45 = 0;
        v13 = 0;
        goto LABEL_10;
      }
      v45 = 8 * v11;
      v30 = 8 * v11;
    }
    v43 = sub_4EBDC0(v30);
    v5 = a3;
    v13 = v43;
LABEL_10:
    v14 = (uint32_t *)(v13 + 8 * v12);
    v15 = v5;
    do
    {
      if ( v14 != nullptr )
      {
        v16 = *a4;
        v14[1] = a4[1];
        *v14 = v16;
      }
      v14 += 2;
      --v15;
    }
    while ( v15 != 0 );
    v17 = (int *)v43;
    if ( a2 != (int *)*v42 )
    {
      v18 = (int *)*v42;
      v37 = *v42;
      do
      {
        if ( v17 != nullptr )
        {
          v19 = *v18;
          v17[1] = v18[1];
          *v17 = v19;
        }
        v18 += 2;
        v17 += 2;
      }
      while ( a2 != v18 );
      v17 = (int *)(v43 + 8 * (((unsigned int)(uintptr_t)(a2) - v37 - 8) >> 3) + 8);
    }
    v20 = &v17[2 * v5];
    v21 = (int *)v42[1];
    if ( a2 != v21 )
    {
      v22 = a2;
      v23 = v20;
      do
      {
        if ( v23 != nullptr )
        {
          v24 = *v22;
          v23[1] = v22[1];
          *v23 = v24;
        }
        v22 += 2;
        v23 += 2;
      }
      while ( v21 != v22 );
      v20 += 2 * ((unsigned int)((char *)v21 - (char *)(a2 + 2)) >> 3) + 2;
    }
    if ( *v42 != 0 )
      gll_operator_delete_arr(*v42);
    *v42 = v43;
    v42[1] = (int)(uintptr_t)(v20);
    result = (int *)(v43 + v45);
    v42[2] = v43 + v45;
    return result;
  }
  v25 = *a4;
  v26 = a4[1];
  v38 = ((char *)result - (char *)v4) >> 3;
  if ( a3 >= v38 )
  {
    v31 = a3 - v38;
    v32 = result;
    if ( a3 != v38 )
    {
      do
      {
        if ( v32 != nullptr )
        {
          *v32 = v25;
          v32[1] = v26;
        }
        v32 += 2;
        --v31;
      }
      while ( v31 != 0 );
      v32 = (int *)v42[1];
      v31 = a3 - v38;
    }
    v33 = &v32[2 * v31];
    v42[1] = (int)(uintptr_t)(v33);
    if ( a2 == result )
    {
      result = &v33[2 * v38];
      v42[1] = (int)(uintptr_t)(result);
    }
    else
    {
      v34 = a2;
      v41 = v4;
      do
      {
        if ( v33 != nullptr )
        {
          v35 = *v34;
          v33[1] = v34[1];
          *v33 = v35;
        }
        v34 += 2;
        v33 += 2;
      }
      while ( result != v34 );
      v36 = v41;
      v42[1] += 8 * v38;
      do
      {
        *v36 = v25;
        v36[1] = v26;
        v36 += 2;
      }
      while ( result != v36 );
    }
  }
  else
  {
    v39 = 2 * a3;
    v44 = &result[-2 * a3];
    v27 = result;
    if ( result != v44 )
    {
      v28 = &result[-2 * a3];
      v46 = (size_t)v4;
      do
      {
        if ( v27 != nullptr )
        {
          v29 = *v28;
          v27[1] = v28[1];
          *v27 = v29;
        }
        v28 += 2;
        v27 += 2;
      }
      while ( result != v28 );
      v4 = (int *)v46;
      v27 = (int *)v42[1];
    }
    v42[1] = (int)(uintptr_t)(&v27[v39]);
    if ( ((char *)v44 - (char *)a2) >> 3 != 0 )
      result = (int *)memmove(
                        &result[-2 * (((char *)v44 - (char *)a2) >> 3)],
                        a2,
                        8 * (((char *)v44 - (char *)a2) >> 3));
    if ( a2 != &a2[v39] )
    {
      do
      {
        *v4 = v25;
        v4[1] = v26;
        v4 += 2;
      }
      while ( &a2[v39] != v4 );
    }
  }
  return result;
}


// ============================================================================
// Address:   0xea13e0 (size: 415 bytes)
// Symbol:    sub_EA13E0
// Demangled: sub_EA13E0
// ============================================================================
int sub_EA13E0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  uint32_t *v8;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;

  v6 = a2;
  if ( a2 < (a3 - 1) / 2 )
  {
    while ( 1 )
    {
      v7 = 2 * (v6 + 1);
      v15 = (uint32_t *)(a1 + 12 * (v7 - 1));
      if ( *(uint32_t *)(a1 + 24 * (v6 + 1) + 4) * *(uint32_t *)(a1 + 24 * (v6 + 1)) > v15[1] * *v15 )
        --v7;
      else
        v15 = (uint32_t *)(a1 + 24 * (v6 + 1));
      v14 = v7;
      v8 = (uint32_t *)(a1 + 12 * v6);
      *v8 = *v15;
      v8[1] = v15[1];
      v8[2] = v15[2];
      if ( v7 >= (a3 - 1) / 2 )
        break;
      v6 = v7;
    }
  }
  else
  {
    v14 = a2;
    v15 = (uint32_t *)(a1 + 12 * a2);
  }
  if ( (a3 & 1) == 0 && v14 == (a3 - 2) / 2 )
  {
    v14 = 2 * v14 + 1;
    v13 = (uint32_t *)(a1 + 12 * v14);
    *v15 = *v13;
    v15[1] = v13[1];
    v15[2] = v13[2];
    v15 = v13;
  }
  if ( v14 > a2 )
  {
    v10 = (v14 - 1) / 2;
    if ( *(uint32_t *)(a1 + 12 * v10 + 4) * *(uint32_t *)(a1 + 12 * v10) > a4 * a5 )
    {
      v11 = v14;
      while ( 1 )
      {
        v15 = (uint32_t *)(a1 + 12 * v10);
        v12 = (uint32_t *)(a1 + 12 * v11);
        *v12 = *v15;
        v12[1] = v15[1];
        v12[2] = v15[2];
        if ( a2 >= v10 || a4 * a5 >= *(uint32_t *)(a1 + 12 * ((v10 - 1) / 2) + 4) * *(uint32_t *)(a1 + 12 * ((v10 - 1) / 2)) )
          break;
        v11 = v10;
        v10 = (v10 - 1) / 2;
      }
    }
  }
  *v15 = a4;
  v15[1] = a5;
  v15[2] = a6;
  return a6;
}


// ============================================================================
// Address:   0xea1580 (size: 383 bytes)
// Symbol:    sub_EA1580
// Demangled: sub_EA1580
// ============================================================================
size_t sub_EA1580(int *a1, uint32_t *a2)
{
  char *src;
  int v4;
  size_t result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  int v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  int v15;
  unsigned int v17;
  int v18;
  size_t v19;

  src = (char *)a1[1];
  if ( src == (char *)a1[2] )
  {
    v7 = (int)(uintptr_t)(&src[-*a1]) >> 2;
    v19 = 4;
    if ( v7 != 0 )
    {
      v19 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v15 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v15 = -4;
        v19 = v15;
      }
    }
    v18 = sub_4EBDC0(v19);
    v17 = v18 + 4;
    v8 = (uint32_t *)(v18 + 4 * v7);
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = *a1;
    if ( src != (char *)*a1 )
    {
      v10 = (char *)*a1;
      v11 = (uint32_t *)v18;
      do
      {
        if ( v11 != nullptr )
          *v11 = *(uint32_t *)v10;
        v10 += 4;
        ++v11;
      }
      while ( src != v10 );
      v17 = v18 + 4 * ((unsigned int)(uintptr_t)(&src[-v9 - 4]) >> 2) + 8;
    }
    v12 = (char *)a1[1];
    if ( src != v12 )
    {
      v13 = src;
      v14 = (uint32_t *)v17;
      do
      {
        if ( v14 != nullptr )
          *v14 = *(uint32_t *)v13;
        v13 += 4;
        ++v14;
      }
      while ( v12 != v13 );
      v17 += 4 * ((unsigned int)(v12 - (src + 4)) >> 2) + 4;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v18;
    a1[1] = v17;
    a1[2] = v19 + v18;
    return v19 + v18;
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *(uint32_t *)src = *((uint32_t *)src - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( result != 0 )
      result = (size_t)memmove((void *)(v4 - 4 * result), src, 4 * result);
    *(uint32_t *)src = v6;
  }
  return result;
}


// ============================================================================
// Address:   0xea1840 (size: 420 bytes)
// Symbol:    sub_EA1840
// Demangled: sub_EA1840
// ============================================================================
void sub_EA1840(int a1, uint32_t *a2)
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
                                      sub_EA1840(a1, v9[3]);
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


// ============================================================================
// Address:   0xea19f0 (size: 203 bytes)
// Symbol:    sub_EA19F0
// Demangled: sub_EA19F0
// ============================================================================
int *sub_EA19F0(char **a1, const char *s)
{
  const char *v4;
  int v5;
  char *v6;
  int *result;
  size_t n;

  if ( s == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v4 = &s[strlen(s)];
  if ( s == v4 )
  {
    result = (int *)(&dword_20D3E6C);
    v6 = (char *)(uintptr_t)(byte_20D3E78);
  }
  else
  {
    n = v4 - s;
    v5 = sub_EA0970(v4 - s, 0);
    v6 = (char *)(v5 + 12);
    if ( n == 1 )
    {
      result = (int *)*(uint8_t *)s;
      *(uint8_t *)(v5 + 12) = (uint8_t)(uintptr_t)(result);
    }
    else
    {
      result = (int *)memcpy(v6, s, n);
      v6 = (char *)(v5 + 12);
    }
    if ( (int *)v5 != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      result = (int *)n;
      *(uint32_t *)(v5 + 8) = 0;
      *(uint32_t *)v5 = n;
      *(uint8_t *)(v5 + n + 12) = 0;
    }
  }
  *a1 = v6;
  return result;
}


// ============================================================================
// Address:   0xea1ac0 (size: 231 bytes)
// Symbol:    sub_EA1AC0
// Demangled: sub_EA1AC0
// ============================================================================
int *sub_EA1AC0(char **a1, uint8_t *a2, unsigned int a3)
{
  int v5;
  char *dest;
  int *result;
  int v8;
  size_t n;

  if ( a2 == &a2[a3] )
  {
    result = (int *)(&dword_20D3E6C);
    dest = (char *)(uintptr_t)(byte_20D3E78);
    goto LABEL_7;
  }
  if ( a2 == nullptr )
  {
    if ( a3 != 0 )
      sub_18FFFD0("basic_string::_S_construct null not valid");
    v5 = sub_EA0970(0, 0);
    dest = (char *)(v5 + 12);
    n = 0;
    goto LABEL_4;
  }
  n = a3;
  v5 = sub_EA0970(a3, 0);
  dest = (char *)(v5 + 12);
  if ( a3 != 1 )
  {
LABEL_4:
    v8 = v5;
    result = (int *)memcpy(dest, a2, n);
    v5 = v8;
    goto LABEL_5;
  }
  result = (int *)*a2;
  *(uint8_t *)(v5 + 12) = (uint8_t)(uintptr_t)(result);
LABEL_5:
  if ( (int *)v5 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    result = (int *)n;
    *(uint32_t *)(v5 + 8) = 0;
    *(uint32_t *)v5 = n;
    dest[n] = 0;
  }
LABEL_7:
  *a1 = dest;
  return result;
}


// ============================================================================
// Address:   0xea1bb0 (size: 210 bytes)
// Symbol:    sub_EA1BB0
// Demangled: sub_EA1BB0
// ============================================================================
int *sub_EA1BB0(volatile int32_t **a1, unsigned int a2)
{
  volatile int32_t *src;
  unsigned int v4;
  int *v5;
  size_t n;
  int v7;
  int *v8;
  int *result;
  int *v10;
  int *v11;

  src = *a1;
  v4 = *((uint32_t *)*a1 - 3);
  if ( a2 >= v4 )
    v4 = a2;
  v5 = (int *)sub_EA0970(v4, *((uint32_t *)src - 2));
  n = *((uint32_t *)src - 3);
  v7 = 0;
  v8 = v5 + 3;
  if ( n != 0 )
  {
    if ( n == 1 )
    {
      *((uint8_t *)v5 + 12) = *(uint8_t *)src;
      v7 = *((uint32_t *)src - 3);
    }
    else
    {
      memcpy(v5 + 3, (const void *)src, n);
      v7 = *((uint32_t *)src - 3);
      v8 = v5 + 3;
    }
  }
  result = (int *)(&dword_20D3E6C);
  if ( v5 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    v5[2] = 0;
    *v5 = v7;
    *((uint8_t *)v5 + v7 + 12) = 0;
  }
  v10 = (int *)(*a1 - 3);
  if ( v10 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    result = (int *)__sync_fetch_and_add(*a1 - 1, 0xFFFFFFFF);
    if ( (int)(uintptr_t)(result) <= 0 )
    {
      v11 = v8;
      result = (int *)gll_operator_delete_arr((int)(uintptr_t)(v10));
      v8 = v11;
    }
  }
  *a1 = v8;
  return result;
}


// ============================================================================
// Address:   0xea1c90 (size: 265 bytes)
// Symbol:    sub_EA1C90
// Demangled: sub_EA1C90
// ============================================================================
uint32_t *sub_EA1C90(
        uint32_t *a1,
        uint32_t *a2,
        const char **a3,
        int a4,
        int *a5,
        unsigned int *a6,
        uint32_t *a7)
{
  unsigned int v7;
  uint32_t *v8;
  const char *v9;
  const char *i;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  uint32_t *v19;
  uint32_t *v20;

  v7 = 0;
  v8 = a7;
  v9 = *a3;
  for ( i = &v9[strlen(*a3)]; v9 != i; v7 ^= (v7 << 6) + (v7 >> 2) - 1640531527 + v11 )
    v11 = *v9++;
  *a6 = v7;
  v12 = v7 & (a2[3] - 1);
  *a5 = v12;
  v13 = (uint32_t *)(a2[2] + 4 * v12);
  *a7 = (uint32_t)(uintptr_t)(v13);
  if ( *a2 != 0 )
  {
    v14 = (uint32_t *)*v13;
    if ( v13 != (uint32_t *)*v13 )
    {
      v15 = v13;
      v16 = a7;
      do
      {
        if ( v14[1] == v7 )
        {
          v20 = v16;
          v17 = strcmp(*a3, (const char *)v14[3]);
          v16 = v20;
          if ( v17 == 0 )
          {
            *a1 = (uint32_t)(uintptr_t)(v14);
            return a1;
          }
        }
        *v16 = (uint32_t)(uintptr_t)(v14);
        v14 = (uint32_t *)*v14;
      }
      while ( v15 != v14 );
      v19 = v16;
      v13 = v15;
      v8 = v19;
    }
    *v8 = (uint32_t)(uintptr_t)(v13);
    *a1 = a2[2];
    return a1;
  }
  else
  {
    *a1 = a2[2];
    return a1;
  }
}


// ============================================================================
// Address:   0xea1da0 (size: 471 bytes)
// Symbol:    sub_EA1DA0
// Demangled: sub_EA1DA0
// ============================================================================
bool sub_EA1DA0(int a1, int a2)
{
  __m128 v3; // xmm1
  __m128 v4; // xmm3
  bool result;
  __m128 v6; // xmm7
  __m128 v7; // xmm0
  __m128 v8; // xmm5
  float v9; // xmm6_4
  __m128 v10; // xmm5
  float v11; // xmm6_4
  float v12; // xmm4_4
  __m128 v13; // xmm0
  __m128 v14; // xmm5
  __m128 v15; // xmm6
  __m128 v16; // xmm0
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __m128 v19; // xmm3
  __m128 v20; // xmm6
  float v21;
  float v22;
  float v23;

g4_m128_raw(v3) = *(unsigned int *)(a2 + 12);
  if (g4_m128_lane<float>(v3, 0) < *(float *)(a1 + 108) )
    return false;
g4_m128_raw(v4) = *(unsigned int *)(a2 + 16);
  if (g4_m128_lane<float>(v4, 0) < *(float *)(a1 + 112) )
    return false;
g4_m128_raw(v6) = *(unsigned int *)(a2 + 20);
  if (g4_m128_lane<float>(v6, 0) < *(float *)(a1 + 116) )
    return false;
  v22 = *(float *)a2;
  if ( *(float *)a2 > *(float *)(a1 + 120) )
    return false;
  v21 = *(float *)(a2 + 4);
  if ( v21 > *(float *)(a1 + 124) )
    return false;
  v23 = *(float *)(a2 + 8);
  if ( v23 > *(float *)(a1 + 128) )
    return false;
  v7 = _mm_cmple_ss(g4_m128_from<__m128>(0LL), *(__m128 *)(a1 + 52));
  v8 = _mm_cmple_ss(g4_m128_from<__m128>(0LL), *(__m128 *)(a1 + 48));
  LODWORD(v9) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v8, v4), 0) | LODWORD(v21) &g4_m128_lane<int32_t>(v8, 0);
  v10 = _mm_cmple_ss(g4_m128_from<__m128>(0LL), *(__m128 *)(a1 + 44));
g4_m128_lane<float>(v7, 0) = (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v7, v6), 0) | *(uint32_t *)(a2 + 8) &g4_m128_lane<int32_t>(v7, 0))
                         * *(float *)(a1 + 52))
                 + *(float *)(a1 + 56);
  v11 = v9 * *(float *)(a1 + 48);
  v12 = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v10, v3), 0) | LODWORD(v22) &g4_m128_lane<int32_t>(v10, 0)) * *(float *)(a1 + 44);
  result = false;
  if ( (float)((float)(g4_m128_lane<float>(v7, 0) + v11) + v12) <= 0.0 )
  {
    v13 = _mm_cmple_ss(g4_m128_from<__m128>(0LL), *(__m128 *)(a1 + 68));
    v14 = _mm_cmple_ss(g4_m128_from<__m128>(0LL), *(__m128 *)(a1 + 64));
    v15 = _mm_cmple_ss(g4_m128_from<__m128>(0LL), *(__m128 *)(a1 + 60));
    if ( (float)((float)((float)((float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v13, v6), 0) | LODWORD(v23)
                                                                                         &g4_m128_lane<int32_t>(v13, 0))
                                       * *(float *)(a1 + 68))
                               + *(float *)(a1 + 72))
                       + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v14, v4), 0) | LODWORD(v21) &g4_m128_lane<int32_t>(v14, 0))
                               * *(float *)(a1 + 64)))
               + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v15, v3), 0) | LODWORD(v22) &g4_m128_lane<int32_t>(v15, 0))
                       * *(float *)(a1 + 60))) <= 0.0 )
    {
      v16 = _mm_cmple_ss(g4_m128_from<__m128>(0LL), *(__m128 *)(a1 + 20));
g4_m128_lane<int32_t>(v17, 0) = *(uint32_t *)(a1 + 16);
      v18 = _mm_cmple_ss(g4_m128_from<__m128>(0LL), v17);
g4_m128_lane<float>(v18, 0) = COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v18, v4), 0) | LODWORD(v21) &g4_m128_lane<int32_t>(v18, 0))
                      *g4_m128_lane<float>(v17, 0);
g4_m128_lane<int32_t>(v19, 0) = *(uint32_t *)(a1 + 12);
      v20 = _mm_cmple_ss(g4_m128_from<__m128>(0LL), v19);
      return (float)((float)((float)((float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v16, v6), 0) | LODWORD(v23)
                                                                                             &g4_m128_lane<int32_t>(v16, 0))
                                           * *(float *)(a1 + 20))
                                   + *(float *)(a1 + 24))
                           +g4_m128_lane<float>(v18, 0))
                   + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v20, v3), 0) | LODWORD(v22) &g4_m128_lane<int32_t>(v20, 0))
                           *g4_m128_lane<float>(v19, 0))) <= 0.0;
    }
  }
  return result;
}


// ============================================================================
// Address:   0xea1f80 (size: 274 bytes)
// Symbol:    sub_EA1F80
// Demangled: sub_EA1F80
// ============================================================================
volatile int32_t *sub_EA1F80(volatile int32_t **a1, uint8_t *a2, size_t n)
{
  volatile int32_t *v4;
  uint8_t *src;
  int v6;
  unsigned int v7;
  uint8_t *dest;
  volatile int32_t *result;
  int v10;
  unsigned int v11;

  v4 = *a1;
  src = a2;
  v6 = *((uint32_t *)v4 - 3);
  v7 = *((uint32_t *)v4 - 2);
  v11 = v6 + n;
  if ( v6 + n <= v7 && *((int *)v4 - 1) <= 0 )
    goto LABEL_17;
  if ( v4 <= (volatile int32_t *)a2 )
  {
    dest = (uint8_t *)((char *)v4 + v6);
    if ( src <= (uint8_t *)v4 + v6 )
    {
      v10 = src - (uint8_t *)v4;
      if ( v11 == v7 && *((int *)v4 - 1) <= 0 )
      {
        src = (uint8_t *)((char *)v4 + v10);
      }
      else
      {
        sub_EA1BB0(a1, v11);
        src = (uint8_t *)((char *)*a1 + v10);
        dest = (uint8_t *)((char *)*a1 + *((uint32_t *)*a1 - 3));
      }
      if ( n == 1 )
        goto LABEL_15;
LABEL_7:
      memcpy(dest, src, n);
      goto LABEL_8;
    }
  }
  if ( v11 == v7 && *((int *)v4 - 1) <= 0 )
  {
LABEL_17:
    dest = (uint8_t *)((char *)v4 + v6);
  }
  else
  {
    sub_EA1BB0(a1, v11);
    dest = (uint8_t *)((char *)*a1 + *((uint32_t *)*a1 - 3));
  }
  if ( n != 1 )
    goto LABEL_7;
LABEL_15:
  *dest = *src;
LABEL_8:
  result = *a1;
  if ( *a1 - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
  {
    *((uint32_t *)result - 1) = 0;
    *((uint32_t *)result - 3) = v11;
    *((uint8_t *)result + v11) = 0;
  }
  return result;
}


// ============================================================================
// Address:   0xea20a0 (size: 571 bytes)
// Symbol:    sub_EA20A0
// Demangled: sub_EA20A0
// ============================================================================
float *sub_EA20A0(float *result, float *a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm3_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm5_4
  float v27; // xmm2_4
  float v28; // xmm5_4
  float v29; // xmm0_4
  float v30; // xmm5_4

  v2 = a2[5];
  v3 = *a2;
  v4 = a2[10];
  v5 = (float)(v2 + *a2) + v4;
  if ( v5 <= 0.0 )
  {
    if ( v3 <= v2 || v3 <= v4 )
    {
      if ( v2 > v4 )
      {
        v29 = fsqrt((float)((float)(v2 - v3) - v4) + 1.0);
        v30 = 0.5 / v29;
        v13 = v29 * 0.5;
        v8 = (float)(a2[2] - a2[8]) * v30;
        v12 = (float)(a2[9] + a2[6]) * v30;
        v14 = (float)(a2[4] + a2[1]) * v30;
      }
      else
      {
        v27 = fsqrt((float)((float)(v4 - v3) - v2) + 1.0);
        v28 = 0.5 / v27;
        v12 = v27 * 0.5;
        v8 = (float)(a2[4] - a2[1]) * v28;
        v13 = (float)(a2[9] + a2[6]) * v28;
        v14 = (float)(a2[8] + a2[2]) * v28;
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
  result[1] = -v13;
  result[2] = v17;
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


// ============================================================================
// Address:   0xea22e0 (size: 908 bytes)
// Symbol:    sub_EA22E0
// Demangled: sub_EA22E0
// ============================================================================
void sub_EA22E0(int a1, uint32_t *a2, uint32_t *a3)
{
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
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  int v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  int v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  int v42;
  uint32_t *v43;
  uint32_t *v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  uint32_t *v51;
  uint32_t *v52;
  uint32_t *v53;
  int v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;
  uint32_t *v62;

  v62 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v56 = (uint32_t *)a2[3];
      if ( v56 != nullptr )
      {
        while ( 1 )
        {
          v57 = (uint32_t *)v56[3];
          if ( v57 != nullptr )
          {
            while ( 1 )
            {
              v58 = (uint32_t *)v57[3];
              if ( v58 != nullptr )
              {
                while ( 1 )
                {
                  v60 = (uint32_t *)v58[3];
                  if ( v60 != nullptr )
                  {
                    while ( 1 )
                    {
                      v61 = (uint32_t *)v60[3];
                      if ( v61 != nullptr )
                      {
                        while ( 1 )
                        {
                          v4 = (uint32_t *)v61[3];
                          v59 = v4;
                          if ( v4 != nullptr )
                          {
                            while ( 1 )
                            {
                              v5 = (uint32_t *)v4[3];
                              v55 = v5;
                              if ( v5 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v6 = (uint32_t *)v5[3];
                                  if ( v6 != nullptr )
                                  {
                                    v54 = a1;
                                    while ( 1 )
                                    {
                                      sub_EA22E0(a3, v6[3]);
                                      v7 = (uint32_t *)v6[5];
                                      v51 = (uint32_t *)v6[2];
                                      if ( v7 != v6 + 5 )
                                      {
                                        v8 = v6;
                                        v9 = v6 + 5;
                                        while ( 1 )
                                        {
                                          v10 = (uint32_t *)*v7;
                                          opDelete(v7);
                                          if ( v10 == v9 )
                                            break;
                                          v7 = v10;
                                        }
                                        v6 = v8;
                                      }
                                      opDelete(v6);
                                      if ( v51 == nullptr )
                                        break;
                                      v6 = v51;
                                    }
                                    a1 = v54;
                                  }
                                  v52 = (uint32_t *)v55[2];
                                  v11 = (uint32_t *)v55[5];
                                  if ( v11 != v55 + 5 )
                                  {
                                    while ( 1 )
                                    {
                                      v12 = (uint32_t *)*v11;
                                      opDelete(v11);
                                      if ( v12 == v55 + 5 )
                                        break;
                                      v11 = v12;
                                    }
                                  }
                                  opDelete(v55);
                                  if ( v52 == nullptr )
                                    break;
                                  v55 = v52;
                                  v5 = v52;
                                }
                              }
                              v53 = (uint32_t *)v59[2];
                              v13 = (uint32_t *)v59[5];
                              if ( v13 != v59 + 5 )
                              {
                                while ( 1 )
                                {
                                  v14 = (uint32_t *)*v13;
                                  opDelete(v13);
                                  if ( v14 == v59 + 5 )
                                    break;
                                  v13 = v14;
                                }
                              }
                              opDelete(v59);
                              a3 = v53;
                              if ( v53 == nullptr )
                                break;
                              v59 = v53;
                              v4 = v53;
                            }
                          }
                          v15 = (uint32_t *)v61[5];
                          v16 = (uint32_t *)v61[2];
                          if ( v15 != v61 + 5 )
                          {
                            v17 = a1;
                            v18 = (uint32_t *)v61[2];
                            while ( 1 )
                            {
                              v19 = (uint32_t *)*v15;
                              v45 = v17;
                              opDelete(v15);
                              v17 = v45;
                              if ( v19 == v61 + 5 )
                                break;
                              v15 = v19;
                            }
                            v16 = v18;
                            a1 = v45;
                          }
                          opDelete(v61);
                          if ( v16 == nullptr )
                            break;
                          v61 = v16;
                        }
                      }
                      v20 = (uint32_t *)v60[5];
                      v21 = (uint32_t *)v60[2];
                      if ( v20 != v60 + 5 )
                      {
                        v22 = a1;
                        v23 = (uint32_t *)v60[2];
                        while ( 1 )
                        {
                          v24 = (uint32_t *)*v20;
                          v46 = v22;
                          opDelete(v20);
                          v22 = v46;
                          if ( v24 == v60 + 5 )
                            break;
                          v20 = v24;
                        }
                        v21 = v23;
                        a1 = v46;
                      }
                      opDelete(v60);
                      if ( v21 == nullptr )
                        break;
                      v60 = v21;
                    }
                  }
                  v25 = (uint32_t *)v58[5];
                  v26 = (uint32_t *)v58[2];
                  if ( v25 != v58 + 5 )
                  {
                    v27 = a1;
                    v28 = (uint32_t *)v58[2];
                    while ( 1 )
                    {
                      v29 = (uint32_t *)*v25;
                      v47 = v27;
                      opDelete(v25);
                      v27 = v47;
                      if ( v29 == v58 + 5 )
                        break;
                      v25 = v29;
                    }
                    v26 = v28;
                    a1 = v47;
                  }
                  opDelete(v58);
                  if ( v26 == nullptr )
                    break;
                  v58 = v26;
                }
              }
              v30 = (uint32_t *)v57[5];
              v31 = (uint32_t *)v57[2];
              if ( v30 != v57 + 5 )
              {
                v32 = a1;
                v33 = (uint32_t *)v57[2];
                while ( 1 )
                {
                  v34 = (uint32_t *)*v30;
                  v48 = v32;
                  opDelete(v30);
                  v32 = v48;
                  if ( v34 == v57 + 5 )
                    break;
                  v30 = v34;
                }
                v31 = v33;
                a1 = v48;
              }
              opDelete(v57);
              if ( v31 == nullptr )
                break;
              v57 = v31;
            }
          }
          v35 = (uint32_t *)v56[5];
          v36 = (uint32_t *)v56[2];
          if ( v35 != v56 + 5 )
          {
            v37 = a1;
            v38 = (uint32_t *)v56[2];
            while ( 1 )
            {
              v39 = (uint32_t *)*v35;
              v49 = v37;
              opDelete(v35);
              v37 = v49;
              if ( v39 == v56 + 5 )
                break;
              v35 = v39;
            }
            v36 = v38;
            a1 = v49;
          }
          opDelete(v56);
          if ( v36 == nullptr )
            break;
          v56 = v36;
        }
      }
      v40 = (uint32_t *)v62[5];
      v41 = (uint32_t *)v62[2];
      if ( v40 != v62 + 5 )
      {
        v42 = a1;
        v43 = (uint32_t *)v62[2];
        while ( 1 )
        {
          v44 = (uint32_t *)*v40;
          v50 = v42;
          opDelete(v40);
          v42 = v50;
          if ( v44 == v62 + 5 )
            break;
          v40 = v44;
        }
        v41 = v43;
        a1 = v50;
      }
      opDelete(v62);
      if ( v41 == nullptr )
        break;
      v62 = v41;
      a2 = v41;
    }
  }
}


// ============================================================================
// Address:   0xea2670 (size: 908 bytes)
// Symbol:    sub_EA2670
// Demangled: sub_EA2670
// ============================================================================
void sub_EA2670(int a1, uint32_t *a2, int a3)
{
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
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  int v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  int v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  int v42;
  uint32_t *v43;
  uint32_t *v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  uint32_t *v51;
  uint32_t *v52;
  uint32_t *v53;
  int v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;
  uint32_t *v62;

  v62 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v56 = (uint32_t *)a2[3];
      if ( v56 != nullptr )
      {
        while ( 1 )
        {
          v57 = (uint32_t *)v56[3];
          if ( v57 != nullptr )
          {
            while ( 1 )
            {
              v58 = (uint32_t *)v57[3];
              if ( v58 != nullptr )
              {
                while ( 1 )
                {
                  v60 = (uint32_t *)v58[3];
                  if ( v60 != nullptr )
                  {
                    while ( 1 )
                    {
                      v61 = (uint32_t *)v60[3];
                      if ( v61 != nullptr )
                      {
                        while ( 1 )
                        {
                          v4 = (uint32_t *)v61[3];
                          v59 = v4;
                          if ( v4 != nullptr )
                          {
                            while ( 1 )
                            {
                              v5 = (uint32_t *)v4[3];
                              v55 = v5;
                              if ( v5 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v6 = (uint32_t *)v5[3];
                                  if ( v6 != nullptr )
                                  {
                                    v54 = a1;
                                    while ( 1 )
                                    {
                                      sub_EA2670(a3, v6[3]);
                                      v7 = (uint32_t *)v6[5];
                                      v51 = (uint32_t *)v6[2];
                                      if ( v7 != v6 + 5 )
                                      {
                                        v8 = v6;
                                        v9 = v6 + 5;
                                        while ( 1 )
                                        {
                                          v10 = (uint32_t *)*v7;
                                          opDelete(v7);
                                          if ( v10 == v9 )
                                            break;
                                          v7 = v10;
                                        }
                                        v6 = v8;
                                      }
                                      opDelete(v6);
                                      if ( v51 == nullptr )
                                        break;
                                      v6 = v51;
                                    }
                                    a1 = v54;
                                  }
                                  v52 = (uint32_t *)v55[2];
                                  v11 = (uint32_t *)v55[5];
                                  if ( v11 != v55 + 5 )
                                  {
                                    while ( 1 )
                                    {
                                      v12 = (uint32_t *)*v11;
                                      opDelete(v11);
                                      if ( v12 == v55 + 5 )
                                        break;
                                      v11 = v12;
                                    }
                                  }
                                  opDelete(v55);
                                  if ( v52 == nullptr )
                                    break;
                                  v55 = v52;
                                  v5 = v52;
                                }
                              }
                              v53 = (uint32_t *)v59[2];
                              v13 = (uint32_t *)v59[5];
                              if ( v13 != v59 + 5 )
                              {
                                while ( 1 )
                                {
                                  v14 = (uint32_t *)*v13;
                                  opDelete(v13);
                                  if ( v14 == v59 + 5 )
                                    break;
                                  v13 = v14;
                                }
                              }
                              opDelete(v59);
                              if ( v53 == nullptr )
                                break;
                              v59 = v53;
                              v4 = v53;
                            }
                          }
                          v15 = (uint32_t *)v61[5];
                          v16 = (uint32_t *)v61[2];
                          if ( v15 != v61 + 5 )
                          {
                            v17 = a1;
                            v18 = (uint32_t *)v61[2];
                            while ( 1 )
                            {
                              v19 = (uint32_t *)*v15;
                              v45 = v17;
                              opDelete(v15);
                              v17 = v45;
                              if ( v19 == v61 + 5 )
                                break;
                              v15 = v19;
                            }
                            v16 = v18;
                            a1 = v45;
                          }
                          opDelete(v61);
                          if ( v16 == nullptr )
                            break;
                          v61 = v16;
                        }
                      }
                      v20 = (uint32_t *)v60[5];
                      v21 = (uint32_t *)v60[2];
                      if ( v20 != v60 + 5 )
                      {
                        v22 = a1;
                        v23 = (uint32_t *)v60[2];
                        while ( 1 )
                        {
                          v24 = (uint32_t *)*v20;
                          v46 = v22;
                          opDelete(v20);
                          v22 = v46;
                          if ( v24 == v60 + 5 )
                            break;
                          v20 = v24;
                        }
                        v21 = v23;
                        a1 = v46;
                      }
                      opDelete(v60);
                      if ( v21 == nullptr )
                        break;
                      v60 = v21;
                    }
                  }
                  v25 = (uint32_t *)v58[5];
                  v26 = (uint32_t *)v58[2];
                  if ( v25 != v58 + 5 )
                  {
                    v27 = a1;
                    v28 = (uint32_t *)v58[2];
                    while ( 1 )
                    {
                      v29 = (uint32_t *)*v25;
                      v47 = v27;
                      opDelete(v25);
                      v27 = v47;
                      if ( v29 == v58 + 5 )
                        break;
                      v25 = v29;
                    }
                    v26 = v28;
                    a1 = v47;
                  }
                  opDelete(v58);
                  if ( v26 == nullptr )
                    break;
                  v58 = v26;
                }
              }
              v30 = (uint32_t *)v57[5];
              v31 = (uint32_t *)v57[2];
              if ( v30 != v57 + 5 )
              {
                v32 = a1;
                v33 = (uint32_t *)v57[2];
                while ( 1 )
                {
                  v34 = (uint32_t *)*v30;
                  v48 = v32;
                  opDelete(v30);
                  v32 = v48;
                  if ( v34 == v57 + 5 )
                    break;
                  v30 = v34;
                }
                v31 = v33;
                a1 = v48;
              }
              opDelete(v57);
              if ( v31 == nullptr )
                break;
              v57 = v31;
            }
          }
          v35 = (uint32_t *)v56[5];
          v36 = (uint32_t *)v56[2];
          if ( v35 != v56 + 5 )
          {
            v37 = a1;
            v38 = (uint32_t *)v56[2];
            while ( 1 )
            {
              v39 = (uint32_t *)*v35;
              v49 = v37;
              opDelete(v35);
              v37 = v49;
              if ( v39 == v56 + 5 )
                break;
              v35 = v39;
            }
            v36 = v38;
            a1 = v49;
          }
          opDelete(v56);
          if ( v36 == nullptr )
            break;
          v56 = v36;
        }
      }
      v40 = (uint32_t *)v62[5];
      v41 = (uint32_t *)v62[2];
      if ( v40 != v62 + 5 )
      {
        v42 = a1;
        v43 = (uint32_t *)v62[2];
        while ( 1 )
        {
          v44 = (uint32_t *)*v40;
          v50 = v42;
          opDelete(v40);
          v42 = v50;
          if ( v44 == v62 + 5 )
            break;
          v40 = v44;
        }
        v41 = v43;
        a1 = v50;
      }
      opDelete(v62);
      if ( v41 == nullptr )
        break;
      v62 = v41;
      a2 = v41;
    }
  }
}


// ============================================================================
// Address:   0xea2bb0 (size: 250 bytes)
// Symbol:    sub_EA2BB0
// Demangled: sub_EA2BB0
// ============================================================================
uint32_t *sub_EA2BB0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *i;
  int v9;
  uint32_t *v11;
  int v14;
  char v15;

  v5 = a2 + 4;
  v15 = 1;
  v14 = v5;
  if ( a3 == 0 && a4 != v5 )
    v15 = *a5 < *(uint32_t *)(a4 + 16);
  v6 = (uint32_t *)opNew(0x1Cu);
  v11 = v6;
  if ( v6 != (uint32_t *)-16 )
  {
    v7 = v6 + 5;
    v6[4] = *a5;
    v6[5] = (uint32_t)(uintptr_t)(v6 + 5);
    v6[6] = (uint32_t)(uintptr_t)(v6 + 5);
    for ( i = (uint32_t *)a5[1]; a5 + 1 != i; i = (uint32_t *)*i )
    {
      v9 = opNew(0xCu);
      if ( v9 != -8 )
        *(uint32_t *)(v9 + 8) = i[2];
      sub_1901920(v9, v7);
    }
  }
  sub_1904970(v15, v11, a4, v14);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v11);
  return a1;
}


// ============================================================================
// Address:   0xea2cb0 (size: 316 bytes)
// Symbol:    sub_EA2CB0
// Demangled: sub_EA2CB0
// ============================================================================
int sub_EA2CB0(int a1, uint32_t *a2, int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  char v8; // bp
  int v9;
  char v11; // bp
  int v12;
  int v13;
  int v14;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v17 = v5;
  if ( v4 == nullptr )
  {
    v4 = v5;
    goto LABEL_12;
  }
  v6 = *a3;
  while ( 1 )
  {
    v9 = v4[4];
    if ( v9 <= v6 )
      break;
    v7 = (uint32_t *)v4[2];
    v8 = 1;
    if ( v7 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v7;
  }
  v7 = (uint32_t *)v4[3];
  v8 = 0;
  if ( v7 != nullptr )
    goto LABEL_4;
LABEL_7:
  v16 = v4;
  if ( v8 == 0 )
  {
    if ( v6 <= v9 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v17 != v16 )
      v11 = v16[4] > v6;
    v12 = opNew(0x1Cu);
    v13 = v12;
    if ( v12 != -16 )
    {
      *(uint32_t *)(v12 + 16) = *a3;
      sub_EA0E70((uint32_t *)(v12 + 20), a3 + 1);
    }
    sub_1904970(v11, v13, v16, v17);
    *(uint32_t *)a1 = v13;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_EA2BB0(v18, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v14 = v18[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v14;
  }
  else
  {
    v16 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( *a3 > v4[4] )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}


// ============================================================================
// Address:   0xea2df0 (size: 250 bytes)
// Symbol:    sub_EA2DF0
// Demangled: sub_EA2DF0
// ============================================================================
uint32_t *sub_EA2DF0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *i;
  int v9;
  uint32_t *v11;
  int v14;
  char v15;

  v5 = a2 + 4;
  v15 = 1;
  v14 = v5;
  if ( a3 == 0 && a4 != v5 )
    v15 = *a5 < *(uint32_t *)(a4 + 16);
  v6 = (uint32_t *)opNew(0x1Cu);
  v11 = v6;
  if ( v6 != (uint32_t *)-16 )
  {
    v7 = v6 + 5;
    v6[4] = *a5;
    v6[5] = (uint32_t)(uintptr_t)(v6 + 5);
    v6[6] = (uint32_t)(uintptr_t)(v6 + 5);
    for ( i = (uint32_t *)a5[1]; a5 + 1 != i; i = (uint32_t *)*i )
    {
      v9 = opNew(0xCu);
      if ( v9 != -8 )
        *(uint32_t *)(v9 + 8) = i[2];
      sub_1901920(v9, v7);
    }
  }
  sub_1904970(v15, v11, a4, v14);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v11);
  return a1;
}


// ============================================================================
// Address:   0xea2ef0 (size: 316 bytes)
// Symbol:    sub_EA2EF0
// Demangled: sub_EA2EF0
// ============================================================================
int sub_EA2EF0(int a1, uint32_t *a2, unsigned int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  unsigned int v6;
  uint32_t *v7;
  char v8; // bp
  unsigned int v9;
  char v11; // bp
  int v12;
  int v13;
  int v14;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v17 = v5;
  if ( v4 == nullptr )
  {
    v4 = v5;
    goto LABEL_12;
  }
  v6 = *a3;
  while ( 1 )
  {
    v9 = v4[4];
    if ( v9 <= v6 )
      break;
    v7 = (uint32_t *)v4[2];
    v8 = 1;
    if ( v7 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v7;
  }
  v7 = (uint32_t *)v4[3];
  v8 = 0;
  if ( v7 != nullptr )
    goto LABEL_4;
LABEL_7:
  v16 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v17 != v16 )
      v11 = v16[4] > v6;
    v12 = opNew(0x1Cu);
    v13 = v12;
    if ( v12 != -16 )
    {
      *(uint32_t *)(v12 + 16) = *a3;
      sub_EA0E70((uint32_t *)(v12 + 20), a3 + 1);
    }
    sub_1904970(v11, v13, v16, v17);
    *(uint32_t *)a1 = v13;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_EA2DF0(v18, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v14 = v18[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v14;
  }
  else
  {
    v16 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( v4[4] < *a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}


// ============================================================================
// Address:   0xea3030 (size: 383 bytes)
// Symbol:    sub_EA3030
// Demangled: sub_EA3030
// ============================================================================
wchar_t *sub_EA3030(wchar_t **a1, unsigned int a2)
{
  wchar_t *v2;
  unsigned int v4;
  unsigned int v5;
  size_t v6;
  int v7;
  wchar_t *v8;
  wchar_t v9;
  size_t n;
  wchar_t *result;
  wchar_t *v12;
  unsigned int v13;
  unsigned int v14;
  wchar_t *s2;

  v2 = *a1;
  v4 = *(*a1 - 3);
  if ( a2 >= v4 )
    v4 = a2;
  v5 = *(v2 - 2);
  if ( v4 > 0xFFFFFFE )
    sub_1900180("basic_string::_S_create");
  v6 = 4 * v4 + 16;
  if ( v5 < v4 )
  {
    if ( v4 < 2 * v5 )
      v4 = 2 * v5;
    v6 = 4 * v4 + 16;
    v13 = 4 * v4 + 32;
    if ( v13 > 0x1000 && v4 > v5 )
    {
      v14 = v4 + ((4096 - (v13 & 0xFFF)) >> 2);
      v4 = 268435454;
      if ( v14 <= 0xFFFFFFE )
        v4 = v14;
      v6 = 4 * v4 + 16;
    }
  }
  s2 = v2;
  v7 = sub_4EBDC0(v6);
  *(uint32_t *)(v7 + 4) = v4;
  *(uint32_t *)(v7 + 8) = 0;
  v8 = (wchar_t *)v7;
  v9 = 0;
  n = *(s2 - 3);
  if ( n != 0 )
  {
    if ( n == 1 )
      v8[3] = *s2;
    else
      wmemcpy(v8 + 3, s2, n);
    v9 = *(s2 - 3);
  }
  result = (wchar_t *)(g4_empty_string_rep);
  if ( v8 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
  {
    v8[2] = 0;
    *v8 = v9;
    v8[v9 + 3] = 0;
  }
  v12 = *a1 - 3;
  if ( v12 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
  {
    result = (wchar_t *)__sync_fetch_and_add(*a1 - 1, 0xFFFFFFFF);
    if ( (int)(uintptr_t)(result) <= 0 )
      result = (wchar_t *)gll_operator_delete_arr((int)(uintptr_t)(v12));
  }
  *a1 = v8 + 3;
  return result;
}


// ============================================================================
// Address:   0xea31b0 (size: 335 bytes)
// Symbol:    sub_EA31B0
// Demangled: sub_EA31B0
// ============================================================================
uint32_t *sub_EA31B0(uint32_t *a1, const wchar_t *s)
{
  size_t v3;
  size_t n;
  size_t v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  wchar_t *v10;
  wchar_t *v11;
  uint32_t *v12;
  int v14;
  uint32_t *v15;

  if ( s == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v3 = wcslen(s);
  if ( s == &s[v3] )
  {
    v12 = (uint32_t *)(&unk_20DF960);
  }
  else
  {
    n = (int)(4 * v3) >> 2;
    if ( n > 0xFFFFFFE )
      sub_1900180("basic_string::_S_create");
    v5 = 4 * n + 16;
    v6 = 4 * n + 32;
    if ( v6 > 0x1000 && n != 0 )
    {
      v7 = 4096 - (v6 & 0xFFF);
      v8 = 268435454;
      v9 = n + (v7 >> 2);
      if ( v9 <= 0xFFFFFFE )
        v8 = v9;
      v5 = 4 * v8 + 16;
    }
    else
    {
      v8 = n;
    }
    v14 = v8;
    v10 = (wchar_t *)sub_4EBDC0(v5);
    v10[1] = v14;
    v11 = v10;
    v10[2] = 0;
    v12 = (uint32_t *)(v10 + 3);
    if ( n == 1 )
    {
      v10[3] = *s;
    }
    else
    {
      v15 = (uint32_t *)(v10 + 3);
      wmemcpy(v10 + 3, s, n);
      v12 = v15;
    }
    if ( v11 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
    {
      v11[2] = 0;
      *v11 = n;
      v12[n] = 0;
    }
  }
  *a1 = (uint32_t)(uintptr_t)(v12);
  return a1;
}


// ============================================================================
// Address:   0xea3300 (size: 428 bytes)
// Symbol:    sub_EA3300
// Demangled: sub_EA3300
// ============================================================================
wchar_t *sub_EA3300(wchar_t **a1, const wchar_t *a2, int a3)
{
  wchar_t **v3;
  const wchar_t *v4;
  unsigned int v6;
  size_t v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  wchar_t *v13;
  wchar_t *s1;
  wchar_t *result;
  int v16;
  wchar_t **v17;
  wchar_t **v18;
  int v20;
  wchar_t *v21;
  size_t n;

  v3 = a1;
  v4 = &a2[a3];
  if ( a2 == v4 )
  {
    result = (wchar_t *)(g4_empty_string_rep);
    s1 = (wchar_t *)&unk_20DF960;
    goto LABEL_13;
  }
  if ( a2 == nullptr )
  {
    if ( v4 != nullptr )
      sub_18FFFD0("basic_string::_S_construct null not valid");
    v16 = sub_4EBDC0(0x10u);
    *(uint32_t *)(v16 + 4) = 0;
    *(uint32_t *)(v16 + 8) = 0;
    v13 = (wchar_t *)v16;
    s1 = (wchar_t *)(v16 + 12);
    n = 0;
    v3 = a1;
    goto LABEL_10;
  }
  v6 = (4 * a3) >> 2;
  n = v6;
  if ( v6 > 0xFFFFFFE )
    sub_1900180("basic_string::_S_create");
  v7 = 4 * v6 + 16;
  v8 = 4 * v6 + 32;
  if ( v8 > 0x1000 && v6 != 0 )
  {
    v9 = 4096 - (v8 & 0xFFF);
    v10 = 268435454;
    v11 = v6 + (v9 >> 2);
    if ( v11 <= 0xFFFFFFE )
      v10 = v11;
    v7 = 4 * v10 + 16;
  }
  else
  {
    v10 = (4 * a3) >> 2;
  }
  v20 = v10;
  v17 = v3;
  v12 = sub_4EBDC0(v7);
  *(uint32_t *)(v12 + 4) = v20;
  *(uint32_t *)(v12 + 8) = 0;
  v13 = (wchar_t *)v12;
  s1 = (wchar_t *)(v12 + 12);
  v3 = v17;
  if ( v6 != 1 )
  {
LABEL_10:
    v21 = s1;
    v18 = v3;
    result = wmemcpy(s1, a2, n);
    v3 = v18;
    s1 = v21;
    goto LABEL_11;
  }
  result = (wchar_t *)*a2;
  v13[3] = *a2;
LABEL_11:
  if ( v13 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
  {
    result = (wchar_t *)n;
    v13[2] = 0;
    *v13 = n;
    s1[n] = 0;
  }
LABEL_13:
  *v3 = s1;
  return result;
}


// ============================================================================
// Address:   0xea34b0 (size: 1120 bytes)
// Symbol:    sub_EA34B0
// Demangled: sub_EA34B0
// ============================================================================
char sub_EA34B0(
        int a1,
        uint32_t **a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13)
{
  int v13;
  char result;
  int v15;
  __m128 v16; // xmm5
  __m128 v17; // xmm2
  __m128 v18; // xmm6
  __m128 v19; // xmm7
  __m128 v20; // xmm7
  __m128 v21; // xmm2
  __m128 v22; // xmm2
  __m128 v23; // xmm7
  __m128 v24; // xmm2
  __m128 v25; // xmm2
  __m128 v26; // xmm7
  __m128 v27; // xmm2
  __m128 v28; // xmm2
  __m128 v29; // xmm7
  __m128 v30; // xmm2
  __m128 v31; // xmm2
  __m128 v32; // xmm2
  __m128 v33; // xmm4
  __m128 v34; // xmm1
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
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
  float v54;
  float v55;
  float v56;
  float v57;

  v13 = ((int (*)(uint32_t **, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*a2)[48])(
          a2,
          a3,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
  if ( v13 == 0 )
    goto LABEL_5;
  ++*(uint32_t *)(a1 + 12);
  v53 = v13;
  ((void (*)(void))(*a2)[17])();
  result = v53;
  v15 = *(uint32_t *)(a1 + 4);
  if ( v53 == 2 )
  {
    if ( a11 >= *(float *)(v15 + 108)
      && a12 >= *(float *)(v15 + 112)
      && a13 >= *(float *)(v15 + 116)
      && a8 <= *(float *)(v15 + 120)
      && a9 <= *(float *)(v15 + 124)
      && a10 <= *(float *)(v15 + 128) )
    {
g4_m128_lane<int32_t>(v16, 0) = 0;
      v17 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 20)), g4_m128_from<__m128>(0LL));
      v18 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 16)), g4_m128_from<__m128>(0LL));
      v19 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 12)), g4_m128_from<__m128>(0LL));
      if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v17, g4_m128_from<__m128>(LODWORD(a13))), 0)
                                           | LODWORD(a10) &g4_m128_lane<int32_t>(v17, 0))
                                         * *(float *)(v15 + 20))
                                 + *(float *)(v15 + 24))
                         + (float)(COERCE_FLOAT(
                                     COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v18, g4_m128_from<__m128>(LODWORD(a12))), 0))
                                   | LODWORD(a9) &g4_m128_lane<int32_t>(v18, 0))
                                 * *(float *)(v15 + 16)))
                 + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v19, g4_m128_from<__m128>(LODWORD(a11))), 0) | LODWORD(a8)
                                                                                             &g4_m128_lane<int32_t>(v19, 0))
                         * *(float *)(v15 + 12))) <= 0.0 )
      {
        v20 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 36)), v16);
        v21 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 32)), v16);
        LODWORD(v54) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v21, g4_m128_from<__m128>(LODWORD(a12))), 0))
                     | LODWORD(a9) &g4_m128_lane<int32_t>(v21, 0);
        v22 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 28)), v16);
        if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v20, g4_m128_from<__m128>(LODWORD(a13))), 0)
                                             | LODWORD(a10) &g4_m128_lane<int32_t>(v20, 0))
                                           * *(float *)(v15 + 36))
                                   + *(float *)(v15 + 40))
                           + (float)(v54 * *(float *)(v15 + 32)))
                   + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v22, g4_m128_from<__m128>(LODWORD(a11))), 0) | LODWORD(a8)
                                                                                               &g4_m128_lane<int32_t>(v22, 0))
                           * *(float *)(v15 + 28))) <= 0.0 )
        {
          v23 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 52)), v16);
          v24 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 48)), v16);
          LODWORD(v55) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v24, g4_m128_from<__m128>(LODWORD(a12))), 0))
                       | LODWORD(a9) &g4_m128_lane<int32_t>(v24, 0);
          v25 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 44)), v16);
          if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v23, g4_m128_from<__m128>(LODWORD(a13))), 0)
                                               | LODWORD(a10) &g4_m128_lane<int32_t>(v23, 0))
                                             * *(float *)(v15 + 52))
                                     + *(float *)(v15 + 56))
                             + (float)(v55 * *(float *)(v15 + 48)))
                     + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v25, g4_m128_from<__m128>(LODWORD(a11))), 0) | LODWORD(a8)
                                                                                                 &g4_m128_lane<int32_t>(v25, 0))
                             * *(float *)(v15 + 44))) <= 0.0 )
          {
            v26 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 68)), v16);
            v27 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 64)), v16);
            LODWORD(v56) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v27, g4_m128_from<__m128>(LODWORD(a12))), 0))
                         | LODWORD(a9) &g4_m128_lane<int32_t>(v27, 0);
            v28 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 60)), v16);
            if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v26, g4_m128_from<__m128>(LODWORD(a13))), 0)
                                                 | LODWORD(a10) &g4_m128_lane<int32_t>(v26, 0))
                                               * *(float *)(v15 + 68))
                                       + *(float *)(v15 + 72))
                               + (float)(v56 * *(float *)(v15 + 64)))
                       + (float)(COERCE_FLOAT(g4_m128_lane<uint32_t>(_mm_andnot_ps(v28, g4_m128_from<__m128>(LODWORD(a11))), 0) | LODWORD(a8) &g4_m128_lane<int32_t>(v28, 0))
                               * *(float *)(v15 + 60))) <= 0.0 )
            {
              v29 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 84)), v16);
              v30 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 80)), v16);
              LODWORD(v57) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v30, g4_m128_from<__m128>(LODWORD(a12))), 0))
                           | LODWORD(a9) &g4_m128_lane<int32_t>(v30, 0);
              v31 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 76)), v16);
              if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v29, g4_m128_from<__m128>(LODWORD(a13))), 0)
                                                   | LODWORD(a10) &g4_m128_lane<int32_t>(v29, 0))
                                                 * *(float *)(v15 + 84))
                                         + *(float *)(v15 + 88))
                                 + (float)(v57 * *(float *)(v15 + 80)))
                         + (float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v31, g4_m128_from<__m128>(LODWORD(a11))), 0)
                                   | LODWORD(a8) &g4_m128_lane<int32_t>(v31, 0))
                                 * *(float *)(v15 + 76))) <= 0.0 )
              {
                v32 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 100)), v16);
                v33 = _mm_cmpge_ss(g4_m128_u32(*(unsigned int *)(v15 + 96)), v16);
                v34 = _mm_cmplt_ss(g4_m128_u32(*(unsigned int *)(v15 + 92)), v16);
                if ( (float)((float)((float)((float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v32, g4_m128_from<__m128>(LODWORD(a13))), 0)
                                                     | LODWORD(a10) &g4_m128_lane<int32_t>(v32, 0))
                                                   * *(float *)(v15 + 100))
                                           + *(float *)(v15 + 104))
                                   + (float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v33, g4_m128_from<__m128>(LODWORD(a12))), 0)
                                             | LODWORD(a9) &g4_m128_lane<int32_t>(v33, 0))
                                           * *(float *)(v15 + 96)))
                           + (float)(COERCE_FLOAT(
g4_m128_lane<uint32_t>(_mm_andnot_ps(v34, g4_m128_from<__m128>(LODWORD(a8))), 0)
                                     | LODWORD(a11) &g4_m128_lane<int32_t>(v34, 0))
                                   * *(float *)(v15 + 92))) <= 0.0 )
                  goto LABEL_5;
              }
            }
          }
        }
      }
    }
    goto LABEL_8;
  }
  if ( v53 > 2 )
  {
    if ( v53 == 4 )
    {
      result = sub_EA1DA0(*(uint32_t *)(a1 + 4), (int)(uintptr_t)(&a8));
LABEL_29:
      if ( result != 0 )
        goto LABEL_5;
      goto LABEL_8;
    }
    if ( v53 != 5 )
      goto LABEL_5;
  }
  else
  {
    if ( v53 != 1 )
    {
LABEL_5:
      result = (*(int (**)(void))(*a2[59] + 16))();
      *(uint8_t *)(a1 + 8) = result;
      return result;
    }
    if ( *(float *)(v15 + 120) >= a8
      && *(float *)(v15 + 124) >= a9
      && *(float *)(v15 + 128) >= a10
      && a11 >= *(float *)(v15 + 108)
      && a12 >= *(float *)(v15 + 112) )
    {
      result = a13 >= *(float *)(v15 + 116);
      goto LABEL_29;
    }
  }
LABEL_8:
  ++*(uint32_t *)(a1 + 16);
  return result;
}


// ============================================================================
// Address:   0xea3a50 (size: 383 bytes)
// Symbol:    sub_EA3A50
// Demangled: sub_EA3A50
// ============================================================================
size_t sub_EA3A50(int *a1, uint32_t *a2)
{
  char *src;
  int v4;
  size_t result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  int v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  int v15;
  unsigned int v17;
  int v18;
  size_t v19;

  src = (char *)a1[1];
  if ( src == (char *)a1[2] )
  {
    v7 = (int)(uintptr_t)(&src[-*a1]) >> 2;
    v19 = 4;
    if ( v7 != 0 )
    {
      v19 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v15 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v15 = -4;
        v19 = v15;
      }
    }
    v18 = sub_4EBDC0(v19);
    v17 = v18 + 4;
    v8 = (uint32_t *)(v18 + 4 * v7);
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = *a1;
    if ( src != (char *)*a1 )
    {
      v10 = (char *)*a1;
      v11 = (uint32_t *)v18;
      do
      {
        if ( v11 != nullptr )
          *v11 = *(uint32_t *)v10;
        v10 += 4;
        ++v11;
      }
      while ( src != v10 );
      v17 = v18 + 4 * ((unsigned int)(uintptr_t)(&src[-v9 - 4]) >> 2) + 8;
    }
    v12 = (char *)a1[1];
    if ( src != v12 )
    {
      v13 = src;
      v14 = (uint32_t *)v17;
      do
      {
        if ( v14 != nullptr )
          *v14 = *(uint32_t *)v13;
        v13 += 4;
        ++v14;
      }
      while ( v12 != v13 );
      v17 += 4 * ((unsigned int)(v12 - (src + 4)) >> 2) + 4;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v18;
    a1[1] = v17;
    a1[2] = v19 + v18;
    return v19 + v18;
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *(uint32_t *)src = *((uint32_t *)src - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( result != 0 )
      result = (size_t)memmove((void *)(v4 - 4 * result), src, 4 * result);
    *(uint32_t *)src = v6;
  }
  return result;
}


// ============================================================================
// Address:   0xea3bd0 (size: 1138 bytes)
// Symbol:    sub_EA3BD0
// Demangled: sub_EA3BD0
// ============================================================================
int sub_EA3BD0(char *a1, char *a2, int a3)
{
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  char *v12;
  char *v13;
  char *v14;
  char *v15;
  int v16;
  int v17;
  int v18;
  bool v19; // cc
  int v20;
  int *v21;
  char *v22;
  int v23;
  int v24;
  int v25;
  char *i;
  int v27;
  char *v28;
  char *v29;
  char *v30;
  int v31;
  char *v32;
  int v33;
  int v34;
  int v35;
  char *v36;
  int v37;
  int v38;
  char *v39;
  char *v40;
  int v41;
  int v42;
  char *v43;
  int v44;
  char *v45;
  int v47;
  int v48;
  int v49;
  char *v50;
  int v51;
  int v52;
  int v53;
  char *v54;

  result = a2 - a1;
  v50 = a2;
  if ( result > 203 )
  {
    if ( a3 != 0 )
    {
      while ( 1 )
      {
        v4 = *((uint32_t *)a1 + 1);
        --a3;
        v36 = &a1[12 * ((-1431655765 * (result >> 2)) >> 1)];
        v5 = *(uint32_t *)a1;
        v6 = v4 * *(uint32_t *)a1;
        v7 = *((uint32_t *)v36 + 1) * *(uint32_t *)v36;
        v8 = *((uint32_t *)v50 - 3);
        v44 = *((uint32_t *)v50 - 2);
        v9 = v8 * v44;
        if ( v6 <= v7 )
        {
          if ( v6 > v9 )
            goto LABEL_7;
          v10 = a1;
          v19 = v7 <= v9;
          v11 = *((uint32_t *)a1 + 2);
          if ( !v19 )
            goto LABEL_21;
        }
        else
        {
          if ( v7 <= v9 )
          {
            if ( v6 <= v9 )
              goto LABEL_7;
            v10 = a1;
            v11 = *((uint32_t *)a1 + 2);
LABEL_21:
            *(uint32_t *)v10 = v8;
            v44 = v4;
            *((uint32_t *)a1 + 1) = *((uint32_t *)v50 - 2);
            *((uint32_t *)a1 + 2) = *((uint32_t *)v50 - 1);
            *((uint32_t *)v50 - 3) = v5;
            *((uint32_t *)v50 - 2) = v4;
            *((uint32_t *)v50 - 1) = v11;
            v8 = v5;
            v4 = *((uint32_t *)a1 + 1);
            v5 = *(uint32_t *)a1;
            goto LABEL_7;
          }
          v10 = a1;
          v11 = *((uint32_t *)a1 + 2);
        }
        *(uint32_t *)v10 = *(uint32_t *)v36;
        *((uint32_t *)a1 + 1) = *((uint32_t *)v36 + 1);
        *((uint32_t *)a1 + 2) = *((uint32_t *)v36 + 2);
        *((uint32_t *)v36 + 2) = v11;
        *(uint32_t *)v36 = v5;
        *((uint32_t *)v36 + 1) = v4;
        v44 = *((uint32_t *)v50 - 2);
        v4 = *((uint32_t *)a1 + 1);
        v5 = *(uint32_t *)a1;
        v8 = *((uint32_t *)v50 - 3);
LABEL_7:
        v48 = v8;
        v39 = v50;
        v12 = a1 + 12;
        while ( 1 )
        {
          v41 = *(uint32_t *)v12;
          v42 = *((uint32_t *)v12 + 1);
          v37 = v5 * v4;
          v13 = v12;
          if ( v5 * v4 < v42 * *(uint32_t *)v12 )
          {
            do
              v13 += 12;
            while ( v37 < *((uint32_t *)v13 + 1) * *(uint32_t *)v13 );
            v41 = *(uint32_t *)v13;
            v42 = *((uint32_t *)v13 + 1);
          }
          v14 = v39 - 12;
          if ( v48 * v44 < v37 )
          {
            v15 = v39 - 24;
            do
            {
              v14 = v15;
              v16 = v15 - v39;
              v15 -= 12;
            }
            while ( v37 > *(uint32_t *)&v39[v16 + 4] * *(uint32_t *)&v39[v16] );
          }
          if ( v14 <= v13 )
            break;
          v17 = *((uint32_t *)v13 + 2);
          *(uint32_t *)v13 = *(uint32_t *)v14;
          *((uint32_t *)v13 + 1) = *((uint32_t *)v14 + 1);
          *((uint32_t *)v13 + 2) = *((uint32_t *)v14 + 2);
          *((uint32_t *)v14 + 2) = v17;
          v44 = *((uint32_t *)v14 - 2);
          *(uint32_t *)v14 = v41;
          v12 = v13 + 12;
          v18 = *((uint32_t *)v14 - 3);
          *((uint32_t *)v14 + 1) = v42;
          v48 = v18;
          v4 = *((uint32_t *)a1 + 1);
          v39 = v14;
          v5 = *(uint32_t *)a1;
        }
        sub_EA3BD0(a3);
        result = v13 - a1;
        if ( v13 - a1 <= 203 )
          return result;
        if ( a3 == 0 )
          goto LABEL_25;
        v50 = v13;
      }
    }
    v13 = a2;
LABEL_25:
    v38 = -1431655765 * (result >> 2);
    v20 = (v38 - 2) >> 1;
    v21 = (int *)&a1[12 * v20];
    while ( 1 )
    {
      v35 = v21[2];
      v34 = v21[1];
      v33 = *v21;
      v21 -= 3;
      sub_EA13E0((int)(uintptr_t)(a1), v20, v38, v33, v34, v35);
      if ( v20 == 0 )
        break;
      --v20;
    }
    v43 = v13;
    v45 = v13 - 12;
    v54 = v13;
    v22 = a1;
    while ( 1 )
    {
      v43 -= 12;
      v23 = *(uint32_t *)&v45[v43 - v54 + 12];
      v52 = *(uint32_t *)&v45[v43 - v54 + 16];
      v53 = *(uint32_t *)&v45[v43 - v54 + 20];
      *(uint32_t *)v43 = *(uint32_t *)v22;
      *((uint32_t *)v43 + 1) = *((uint32_t *)v22 + 1);
      *((uint32_t *)v43 + 2) = *((uint32_t *)v22 + 2);
      v49 = v43 - v22;
      v24 = 0;
      v51 = v23;
      v47 = -1431655765 * ((v43 - v22) >> 2);
      result = (int)(uintptr_t)(v22);
      if ( (v47 - 1) / 2 > 0 )
      {
        v25 = 0;
        v40 = v22;
        for ( i = v22; ; i = v40 )
        {
          v27 = 2 * (v25 + 1);
          v28 = &i[12 * v27 - 12];
          if ( *(uint32_t *)&i[24 * v25 + 28] * *(uint32_t *)&i[24 * v25 + 24] > *((uint32_t *)v28 + 1) * *(uint32_t *)v28 )
            --v27;
          else
            v28 = &i[24 * v25 + 24];
          v24 = v27;
          v29 = &v40[12 * v25];
          *(uint32_t *)v29 = *(uint32_t *)v28;
          *((uint32_t *)v29 + 1) = *((uint32_t *)v28 + 1);
          *((uint32_t *)v29 + 2) = *((uint32_t *)v28 + 2);
          if ( (v47 - 1) / 2 <= v27 )
            break;
          v25 = v27;
        }
        result = (int)(uintptr_t)(v28);
        v22 = v40;
      }
      if ( (v47 & 1) == 0 && v24 == (v47 - 2) / 2 )
        break;
      if ( v24 > 0 )
        goto LABEL_43;
LABEL_40:
      *(uint32_t *)result = v51;
      *(uint32_t *)(result + 4) = v52;
      *(uint32_t *)(result + 8) = v53;
      if ( v49 <= 23 )
        return result;
    }
    v24 = 2 * v24 + 1;
    v30 = &v22[12 * v24];
    *(uint32_t *)result = *(uint32_t *)v30;
    *(uint32_t *)(result + 4) = *((uint32_t *)v30 + 1);
    *(uint32_t *)(result + 8) = *((uint32_t *)v30 + 2);
    result = (int)(uintptr_t)(v30);
LABEL_43:
    v31 = (v24 - 1) >> 1;
    if ( *(uint32_t *)&v22[12 * v31 + 4] * *(uint32_t *)&v22[12 * v31] > v52 * v51 )
    {
      while ( 1 )
      {
        result = (int)(uintptr_t)(&v22[12 * v31]);
        v32 = &v22[12 * v24];
        *(uint32_t *)v32 = *(uint32_t *)result;
        *((uint32_t *)v32 + 1) = *(uint32_t *)(result + 4);
        *((uint32_t *)v32 + 2) = *(uint32_t *)(result + 8);
        if ( v31 == 0
          || *(uint32_t *)&v22[12 * ((v31 - 1) >> 1) + 4] * *(uint32_t *)&v22[12 * ((v31 - 1) >> 1)] <= v52 * v51 )
        {
          break;
        }
        v24 = v31;
        v31 = (v31 - 1) >> 1;
      }
    }
    goto LABEL_40;
  }
  return result;
}


// ============================================================================
// Address:   0xea4f20 (size: 88 bytes)
// Symbol:    sub_EA4F20
// Demangled: sub_EA4F20
// ============================================================================
int *sub_EA4F20(int *a1, int *a2, int *a3)
{
  int *i;
  int v6;
  bool v7;
  int v8;

  for ( i = a1; i != a2; a3 += 3 )
  {
    if ( a3 != nullptr )
    {
      v6 = *i;
      v7 = *i == 0;
      *a3 = *i;
      if ( !v7 )
        sub_8B1B00((volatile int32_t *)(v6 + 4));
      v8 = i[1];
      a3[2] = i[2];
      a3[1] = v8;
    }
    i += 3;
  }
  return a3;
}


// ============================================================================
// Address:   0xea4f80 (size: 163 bytes)
// Symbol:    sub_EA4F80
// Demangled: sub_EA4F80
// ============================================================================
uint32_t *sub_EA4F80(uint32_t *result, int a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *j;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int i;

  v3 = result;
  for ( i = a2; i != 0; --i )
  {
    if ( v3 != nullptr )
    {
      *v3 = (uint32_t)(uintptr_t)(v3);
      v3[1] = (uint32_t)(uintptr_t)(v3);
      for ( j = (uint32_t *)*a3; a3 != j; j = (uint32_t *)*j )
      {
        v5 = (uint32_t *)opNew(0x1Cu);
        if ( v5 != (uint32_t *)-8 )
        {
          v6 = j[2];
          v5[2] = v6;
          if ( v6 != 0 )
          {
            v7 = v5;
            sub_8B1B00((volatile int32_t *)(v6 + 4));
            v5 = v7;
          }
          v5[3] = j[3];
          v5[4] = j[4];
          v5[5] = j[5];
          v5[6] = j[6];
        }
        result = (uint32_t *)sub_1901920(v5, v3);
      }
    }
    v3 += 2;
  }
  return result;
}


// ============================================================================
// Address:   0xea5030 (size: 167 bytes)
// Symbol:    sub_EA5030
// Demangled: sub_EA5030
// ============================================================================
uint32_t *sub_EA5030(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *i;
  uint32_t *j;
  uint32_t *v6;
  int v7;
  uint32_t *v9;

  for ( i = a1; i != a2; a3 += 2 )
  {
    if ( a3 != nullptr )
    {
      *a3 = (uint32_t)(uintptr_t)(a3);
      a3[1] = (uint32_t)(uintptr_t)(a3);
      for ( j = (uint32_t *)*i; i != j; j = (uint32_t *)*j )
      {
        v6 = (uint32_t *)opNew(0x1Cu);
        if ( v6 != (uint32_t *)-8 )
        {
          v7 = j[2];
          v6[2] = v7;
          if ( v7 != 0 )
          {
            v9 = v6;
            sub_8B1B00((volatile int32_t *)(v7 + 4));
            v6 = v9;
          }
          v6[3] = j[3];
          v6[4] = j[4];
          v6[5] = j[5];
          v6[6] = j[6];
        }
        sub_1901920(v6, a3);
      }
    }
    i += 2;
  }
  return a3;
}


// ============================================================================
// Address:   0xea50e0 (size: 728 bytes)
// Symbol:    sub_EA50E0
// Demangled: sub_EA50E0
// ============================================================================
int sub_EA50E0(int a1, int a2, int a3, int a4)
{
  bool v4;
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int *v10;
  int v11;
  int v12;
  int i;
  int v14;
  unsigned int v15;
  unsigned int v16;
  bool v17;
  int v18;
  int v19;
  int v21;
  int v22;
  int *v23;
  int v24;
  int v25;
  int v26;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef char _g4_t_v42;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v30)) > _g4_s2 ? (12u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v31)) > _g4_s3 ? (20u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v32)) > _g4_s4 ? (20u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v34)) > _g4_s5 ? (28u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v35)) > _g4_s6 ? (28u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v36)) > _g4_s7 ? (28u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v37)) > _g4_s8 ? (32u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v38)) > _g4_s9 ? (48u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v39)) > _g4_s10 ? (64u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v40)) > _g4_s11 ? (80u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v41)) > _g4_s12 ? (96u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v42)) > _g4_s13 ? (100u + sizeof(_g4_t_v42)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 100u);

  v29 = (a3 - 1) / 2;
  v31 = a2;
  if ( v29 > a2 )
  {
    while ( 1 )
    {
      v9 = 2 * (v31 + 1) - 1;
      v30 = (int *)(16 * (v31 + 1) + a1);
      v10 = (int *)(a1 + 8 * v9);
      v35 = *v30;
      v7 = *(uint32_t *)(v35 + 24) * *(uint32_t *)(v35 + 20);
      v5 = *v10;
      v8 = *(uint32_t *)(*v10 + 24) * *(uint32_t *)(*v10 + 20);
      if ( v7 == v8 )
        v4 = *(uint16_t *)(v35 + 32) < *(uint16_t *)(v5 + 32);
      else
        v4 = v7 > v8;
      if ( !v4 )
      {
        v5 = *v30;
        v10 = (int *)(16 * (v31 + 1) + a1);
        v9 = 2 * (v31 + 1);
      }
      v37 = v5;
      v34 = a1 + 8 * v31;
      sub_8B1B00((volatile int32_t *)(v5 + 4));
      v6 = *(uint32_t *)v34;
      *(uint32_t *)v34 = v37;
      v37 = v6;
      sub_5ED480(&v37);
      *(uint8_t *)(v34 + 4) = *((uint8_t *)v10 + 4);
      if ( v9 >= v29 )
        break;
      v31 = v9;
    }
  }
  else
  {
    v9 = a2;
    v10 = (int *)(a1 + 8 * a2);
  }
  if ( (a3 & 1) == 0 && v9 == (a3 - 2) / 2 )
  {
    v9 = 2 * v9 + 1;
    v23 = (int *)(a1 + 8 * v9);
    v24 = 0;
    v25 = *v23;
    v38 = *v23;
    if ( v38 != 0 )
    {
      sub_8B1B00((volatile int32_t *)(v25 + 4));
      v24 = v38;
      v23 = (int *)(a1 + 8 * v9);
    }
    v26 = *v10;
    *v10 = v24;
    v38 = v26;
    v27 = v23;
    sub_5ED480(&v38);
    *((uint8_t *)v10 + 4) = *((uint8_t *)v27 + 4);
    v10 = v27;
  }
  v11 = *(uint32_t *)a4;
  v12 = 0;
  v41 = *(uint32_t *)a4;
  if ( v41 != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v11 + 4));
    v12 = v41;
  }
  v42 = *(uint8_t *)(a4 + 4);
  if ( v9 > a2 )
  {
    v32 = v9;
    v36 = (v9 - 1) / 2;
    for ( i = v36; ; v36 = i )
    {
      v10 = (int *)(a1 + 8 * i);
      v14 = *v10;
      v15 = *(uint32_t *)(v12 + 24) * *(uint32_t *)(v12 + 20);
      v16 = *(uint32_t *)(*v10 + 24) * *(uint32_t *)(*v10 + 20);
      if ( v16 == v15 )
        v17 = *(uint16_t *)(v14 + 32) < *(uint16_t *)(v12 + 32);
      else
        v17 = v16 > v15;
      if ( !v17 )
      {
        v10 = (int *)(a1 + 8 * v32);
        goto LABEL_20;
      }
      v39 = *v10;
      v21 = a1 + 8 * v32;
      sub_8B1B00((volatile int32_t *)(v14 + 4));
      v22 = *(uint32_t *)v21;
      *(uint32_t *)v21 = v39;
      v39 = v22;
      sub_5ED480(&v39);
      *(uint8_t *)(v21 + 4) = *((uint8_t *)v10 + 4);
      if ( a2 >= v36 )
        break;
      v32 = v36;
      v12 = v41;
      i = (v36 - 1) / 2;
    }
    v12 = v41;
  }
LABEL_20:
  v18 = 0;
  v40 = v12;
  if ( v12 != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v12 + 4));
    v18 = v40;
  }
  v19 = *v10;
  *v10 = v18;
  v40 = v19;
  sub_5ED480(&v40);
  *((uint8_t *)v10 + 4) = v42;
  return sub_5ED480(&v41);
}


// ============================================================================
// Address:   0xea53c0 (size: 746 bytes)
// Symbol:    sub_EA53C0
// Demangled: sub_EA53C0
// ============================================================================
int sub_EA53C0(int a1, int a2, int a3, int *a4)
{
  int v4;
  int v5;
  bool v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int i;
  int v13;
  int v14;
  int v15;
  int v16;
  int v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  int *v24;
  typedef int *_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef char _g4_t_v42;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v26)) > _g4_s1 ? (0u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v27)) > _g4_s2 ? (0u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v28)) > _g4_s3 ? (4u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v29)) > _g4_s4 ? (4u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v30)) > _g4_s5 ? (4u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v32)) > _g4_s6 ? (24u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v33)) > _g4_s7 ? (24u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v34)) > _g4_s8 ? (24u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v35)) > _g4_s9 ? (24u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v37)) > _g4_s10 ? (32u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v38)) > _g4_s11 ? (48u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v39)) > _g4_s12 ? (64u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v40)) > _g4_s13 ? (80u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v41)) > _g4_s14 ? (96u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v42)) > _g4_s15 ? (100u + sizeof(_g4_t_v42)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 100u);

  v32 = a2;
  if ( a2 < (a3 - 1) / 2 )
  {
    while ( 1 )
    {
      v4 = 2 * (v32 + 1) - 1;
      v5 = *(uint32_t *)(a1 + 8 * v4);
      v25 = (int *)(a1 + 8 * v4);
      v28 = *(uint32_t *)(16 * (v32 + 1) + a1);
      v6 = strcmp(*(const char **)(v28 + 12), *(const char **)(v5 + 12)) < 0;
      if ( !v6 )
      {
        v4 = 2 * (v32 + 1);
        v5 = v28;
      }
      v7 = v25;
      v37 = v5;
      if ( !v6 )
        v7 = (int *)(16 * (v32 + 1) + a1);
      v26 = v7;
      v33 = a1 + 8 * v32;
      sub_8B1B00((volatile int32_t *)(v5 + 4));
      v8 = *(uint32_t *)v33;
      *(uint32_t *)v33 = v37;
      v37 = v8;
      sub_5ED480(&v37);
      *(uint8_t *)(v33 + 4) = *((uint8_t *)v26 + 4);
      if ( v4 >= (a3 - 1) / 2 )
        break;
      v32 = v4;
    }
    v23 = v4;
    v24 = v26;
  }
  else
  {
    v23 = a2;
    v24 = (int *)(a1 + 8 * a2);
  }
  if ( (a3 & 1) == 0 && v23 == (a3 - 2) / 2 )
  {
    v23 = 2 * v23 + 1;
    v19 = 0;
    v20 = (int *)(a1 + 8 * v23);
    v21 = *v20;
    v38 = *v20;
    if ( v38 != 0 )
    {
      sub_8B1B00((volatile int32_t *)(v21 + 4));
      v19 = v38;
      v20 = (int *)(a1 + 8 * v23);
    }
    v22 = *v24;
    *v24 = v19;
    v38 = v22;
    v30 = v20;
    sub_5ED480(&v38);
    *((uint8_t *)v24 + 4) = *((uint8_t *)v30 + 4);
    v24 = v30;
  }
  v9 = a4;
  v10 = 0;
  v11 = *a4;
  v41 = *a4;
  if ( v41 != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v11 + 4));
    v10 = v41;
    v9 = a4;
  }
  v42 = *((uint8_t *)v9 + 4);
  if ( v23 > a2 )
  {
    v34 = v23;
    for ( i = (v23 - 1) / 2; ; i = (v29 - 1) / 2 )
    {
      v24 = (int *)(a1 + 8 * i);
      v13 = *v24;
      v27 = v10;
      v29 = i;
      v14 = strcmp(*(const char **)(*v24 + 12), *(const char **)(v10 + 12));
      v10 = v27;
      if ( v14 >= 0 )
      {
        v24 = (int *)(a1 + 8 * v34);
        goto LABEL_18;
      }
      v39 = v13;
      v35 = a1 + 8 * v34;
      sub_8B1B00((volatile int32_t *)(v13 + 4));
      v18 = *(uint32_t *)v35;
      *(uint32_t *)v35 = v39;
      v39 = v18;
      sub_5ED480(&v39);
      *(uint8_t *)(v35 + 4) = *((uint8_t *)v24 + 4);
      if ( a2 >= v29 )
        break;
      v34 = v29;
      v10 = v41;
    }
    v10 = v41;
  }
LABEL_18:
  v15 = 0;
  v40 = v10;
  if ( v10 != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v10 + 4));
    v15 = v40;
  }
  v16 = *v24;
  *v24 = v15;
  v40 = v16;
  sub_5ED480(&v40);
  *((uint8_t *)v24 + 4) = v42;
  return sub_5ED480(&v41);
}


// ============================================================================
// Address:   0xea6990 (size: 774 bytes)
// Symbol:    sub_EA6990
// Demangled: sub_EA6990
// ============================================================================
uint32_t *sub_EA6990(uint32_t *a1, uint32_t **a2, uint32_t **a3)
{
  uint32_t **v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *result;
  int v14;
  unsigned int v15;
  size_t v16;
  int v17;
  int v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  bool v23;
  uint32_t **v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t **v28;
  uint32_t **v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t **v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  uint32_t *v39;
  size_t v40;
  size_t v41;
  uint32_t *v42;
  uint32_t **v43;
  uint32_t *v44;
  uint32_t ***v45;

  v3 = a2;
  v4 = a1;
  v5 = (uint32_t *)a1[1];
  if ( v5 != (uint32_t *)a1[2] )
  {
    v6 = 0;
    if ( v5 != nullptr )
    {
      v7 = (uint32_t *)*(v5 - 1);
      *v5 = (uint32_t)(uintptr_t)(v7);
      if ( v7 != nullptr )
        sub_8B1B00((uint32_t *)((char *)v7 + *(uint32_t *)(*v7 - 16) + 4));
      v6 = v4[1];
    }
    v8 = v6 + 4;
    v4[1] = v8;
    v42 = *a3;
    if ( *a3 != nullptr )
    {
      sub_8B1B00((uint32_t *)((char *)*a3 + *(uint32_t *)(**a3 - 16) + 4));
      v8 = v4[1];
    }
    v9 = (v8 - 8 - (int)(uintptr_t)(a2)) >> 2;
    if ( v9 > 0 )
    {
      v40 = v8 - 12;
      v37 = v8 - 8;
      v10 = -4 * v9;
      do
      {
        v11 = *(uint32_t **)(v40 + v10 + 4 * v9);
        if ( v11 != nullptr )
          sub_8B1B00((uint32_t *)((char *)v11 + *(uint32_t *)(*v11 - 16) + 4));
        v12 = *(uint32_t **)(v37 + v10 + 4 * v9);
        *(uint32_t *)(v37 + v10 + 4 * v9) = (uint32_t)(uintptr_t)(v11);
        if ( v12 != nullptr )
          sub_5459C0((uint32_t *)((char *)v12 + *(uint32_t *)(*v12 - 16)));
        --v9;
      }
      while ( v9 != 0 );
    }
    if ( v42 != nullptr )
      sub_8B1B00((uint32_t *)((char *)v42 + *(uint32_t *)(*v42 - 16) + 4));
    result = *a2;
    *a2 = v42;
    if ( result != nullptr )
      result = (uint32_t *)sub_5459C0((uint32_t *)((char *)result + *(uint32_t *)(*result - 16)));
    if ( v42 != nullptr )
      return (uint32_t *)sub_5459C0((uint32_t *)((char *)v42 + *(uint32_t *)(*v42 - 16)));
    return result;
  }
  v14 = *a1;
  v15 = ((int)(uintptr_t)(v5) - v14) >> 2;
  if ( v15 == 0 )
  {
    v41 = 4;
    v16 = 4;
    v17 = ((int)(uintptr_t)(a2) - v14) >> 2;
    goto LABEL_25;
  }
  v38 = 2 * v15;
  if ( v15 > 2 * v15 || 2 * v15 > 0x3FFFFFFF )
  {
    v41 = 0xFFFFFFFC;
    v16 = 0xFFFFFFFC;
    v17 = ((int)(uintptr_t)(a2) - v14) >> 2;
LABEL_25:
    v34 = v17;
    v18 = sub_4EBDC0(v16);
    v39 = (uint32_t *)v18;
    v19 = v18 + 4;
    v17 = v34;
    goto LABEL_26;
  }
  v16 = 8 * v15;
  v17 = ((int)(uintptr_t)(a2) - v14) >> 2;
  v41 = v16;
  if ( v38 != 0 )
    goto LABEL_25;
  v39 = nullptr;
  v19 = 4;
  v18 = 0;
LABEL_26:
  v20 = (uint32_t *)(v18 + 4 * v17);
  if ( v20 != nullptr )
  {
    v21 = v20;
    v22 = *a3;
    v23 = *a3 == nullptr;
    *v21 = (uint32_t)(uintptr_t)(*a3);
    if ( !v23 )
    {
      v35 = v19;
      sub_8B1B00((uint32_t *)((char *)v22 + *(uint32_t *)(*v22 - 16) + 4));
      v19 = v35;
    }
  }
  v24 = (uint32_t **)*v4;
  if ( a2 != (uint32_t **)*v4 )
  {
    v43 = v3;
    v25 = v39;
    do
    {
      if ( v25 != nullptr )
      {
        v26 = *v24;
        v23 = *v24 == nullptr;
        *v25 = (uint32_t)(uintptr_t)(*v24);
        if ( !v23 )
          sub_8B1B00((uint32_t *)((char *)v26 + *(uint32_t *)(*v26 - 16) + 4));
      }
      ++v24;
      ++v25;
    }
    while ( a2 != v24 );
    v27 = v25;
    v3 = v43;
    v19 = (int)(uintptr_t)(v27 + 1);
  }
  v28 = (uint32_t **)v4[1];
  if ( a2 != v28 )
  {
    v44 = v4;
    v29 = (uint32_t **)v4[1];
    v30 = (uint32_t *)v19;
    do
    {
      if ( v30 != nullptr )
      {
        v31 = *v3;
        v23 = *v3 == nullptr;
        *v30 = (uint32_t)(uintptr_t)(*v3);
        if ( !v23 )
          sub_8B1B00((uint32_t *)((char *)v31 + *(uint32_t *)(*v31 - 16) + 4));
      }
      ++v3;
      ++v30;
    }
    while ( v29 != v3 );
    v4 = v44;
    v19 = (int)(uintptr_t)(v30);
    v28 = (uint32_t **)v44[1];
  }
  v32 = (uint32_t **)*v4;
  if ( v28 != (uint32_t **)*v4 )
  {
    v45 = (uint32_t ***)v4;
    v33 = v19;
    do
    {
      if ( *v32 != nullptr )
        sub_5459C0((uint32_t *)((char *)*v32 + *(uint32_t *)(**v32 - 16)));
      ++v32;
    }
    while ( v28 != v32 );
    v19 = v33;
    v4 = (uint32_t *)(v45);
    v32 = *v45;
  }
  if ( v32 != nullptr )
  {
    v36 = v19;
    gll_operator_delete_arr((int)(uintptr_t)(v32));
    v19 = v36;
  }
  v4[1] = v19;
  *v4 = (uint32_t)(uintptr_t)(v39);
  v4[2] = (uint32_t)(uintptr_t)((char *)v39 + v41);
  return (uint32_t *)((char *)v39 + v41);
}


// ============================================================================
// Address:   0xeb6270 (size: 305 bytes)
// Symbol:    sub_EB6270
// Demangled: sub_EB6270
// ============================================================================
int *sub_EB6270(int *a1, int a2, int a3, const void **a4)
{
  int v5;
  size_t n;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int v11;
  size_t v12;
  size_t v13;

  if ( a2 != 0 )
  {
    LOBYTE(v11) = 1;
  }
  else
  {
    LOBYTE(v11) = 1;
    if ( (void *)a3 != &unk_20E1454 )
    {
      v12 = *((uint32_t *)*a4 - 3);
      v13 = *(uint32_t *)(*(uint32_t *)(a3 + 16) - 12);
      n = v12;
      if ( v13 <= v12 )
        n = *(uint32_t *)(*(uint32_t *)(a3 + 16) - 12);
      v8 = memcmp(*a4, *(const void **)(a3 + 16), n);
      if ( v8 == 0 )
        v8 = v12 - v13;
      v11 = v8 >> 31;
    }
  }
  v5 = sub_4EBDC0(0x18u);
  if ( v5 != -16 )
  {
    v9 = v5;
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v5 + 16),
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)a4);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v9 + 20),
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(a4 + 1));
    v5 = v9;
  }
  v10 = v5;
  sub_1904970(v11, v5, a3, &unk_20E1454);
  ++unk_20E1464;
  *a1 = v10;
  return a1;
}


// ============================================================================
// Address:   0xeb63b0 (size: 260 bytes)
// Symbol:    sub_EB63B0
// Demangled: sub_EB63B0
// ============================================================================
int *sub_EB63B0(int *a1, int a2, int a3, int a4, const void **a5)
{
  int v7;
  int v8;
  size_t n;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  size_t v15;
  int v16;
  size_t v17;

  v7 = a2 + 4;
  LOBYTE(v14) = 1;
  v16 = v7;
  if ( a3 == 0 && a4 != v7 )
  {
    v15 = *((uint32_t *)*a5 - 3);
    v17 = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    n = v15;
    if ( v17 <= v15 )
      n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v11 = memcmp(*a5, *(const void **)(a4 + 16), n);
    if ( v11 == 0 )
      v11 = v15 - v17;
    v14 = v11 >> 31;
  }
  v8 = opNew(0x18u);
  if ( v8 != -16 )
  {
    v12 = v8;
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v8 + 16),
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)a5);
    v8 = v12;
    *(uint32_t *)(v12 + 20) = (uint32_t)(uintptr_t)(a5[1]);
  }
  v13 = v8;
  sub_1904970(v14, v8, a4, v16);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}


// ============================================================================
// Address:   0xeb64c0 (size: 347 bytes)
// Symbol:    sub_EB64C0
// Demangled: sub_EB64C0
// ============================================================================
uint32_t *sub_EB64C0(uint32_t *a1, int a2, int a3, int a4, const void **a5)
{
  uint32_t *v5;
  size_t v6;
  int v7;
  bool v8;
  uint8_t *v9;
  uint8_t *v10;
  uint8_t *v11;
  uint8_t *v12;
  size_t v14;
  size_t n;
  size_t v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v21;
  int v22;

  LOBYTE(v21) = 1;
  v22 = a2 + 4;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v14 = *((uint32_t *)*a5 - 3);
    n = v14;
    v16 = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    if ( v16 <= v14 )
      n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v17 = v14 - v16;
    v18 = memcmp(*a5, *(const void **)(a4 + 16), n);
    if ( v18 == 0 )
      v18 = v17;
    v21 = v18 >> 31;
  }
  v5 = (uint32_t *)sub_4EBDC0(0x20u);
  if ( v5 != (uint32_t *)-16 )
  {
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v5 + 4),
      (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)a5);
    v6 = (uint8_t *)a5[2] - (uint8_t *)a5[1];
    v7 = 0;
    v8 = a5[2] == a5[1];
    v5[5] = 0;
    v5[6] = 0;
    v5[7] = 0;
    if ( !v8 )
      v7 = sub_4EBDC0(v6);
    v5[5] = v7;
    v5[6] = v7;
    v5[7] = v7 + v6;
    v9 = (uint8_t *)(a5[2]);
    v10 = (uint8_t *)(a5[1]);
    if ( v9 != v10 )
    {
      v11 = (uint8_t *)(a5[1]);
      v12 = (uint8_t *)v7;
      do
      {
        if ( v12 != nullptr )
          *v12 = *v11;
        ++v11;
        ++v12;
      }
      while ( v11 != v9 );
      v7 += v11 - v10;
    }
    v5[6] = v7;
  }
  sub_1904970(v21, v5, a4, v22);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v5);
  return a1;
}


// ============================================================================
// Address:   0xeb6620 (size: 354 bytes)
// Symbol:    sub_EB6620
// Demangled: sub_EB6620
// ============================================================================
int sub_EB6620(int a1, int a2, const void **a3)
{
  size_t v3;
  size_t i;
  size_t v5;
  uint32_t *v6;
  size_t v7;
  size_t n;
  int v9;
  uint32_t *v10;
  int v11;
  size_t v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v17;
  typedef size_t _g4_t_v18;
  typedef char _g4_t_v19;
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef uint32_t _g4_t_v25[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_s1)) > _g4_s2 ? (12u + sizeof(_g4_t_s1)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v23)) > _g4_s3 ? (24u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v25)) > _g4_s5 ? (28u + sizeof(_g4_t_v25)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);

  if ( *(uint32_t *)(a2 + 8) == 0 )
  {
    v11 = a2 + 4;
    goto LABEL_17;
  }
  s1 = (void *)*a3;
  v3 = *((uint32_t *)*a3 - 3);
  for ( i = *(uint32_t *)(a2 + 8); ; i = v5 )
  {
    v6 = *(uint32_t **)(i + 16);
    v7 = *(v6 - 3);
    n = v7;
    v18 = i;
    if ( v3 <= v7 )
      n = v3;
    v23 = n;
    v9 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v9 == 0 )
      v9 = v3 - v7;
    if ( v9 >= 0 )
      break;
    v5 = *(uint32_t *)(v18 + 8);
    v19 = 1;
    if ( v5 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v5 = *(uint32_t *)(v18 + 12);
  v19 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = v18;
  v12 = v23;
  v13 = v10;
  v24 = v18;
  if ( v19 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( *(uint32_t *)(a2 + 12) == v11 )
  {
    sub_EB64C0(v25, a2, 0, v11, a3);
  }
  else
  {
    v17 = sub_19048F0(v11);
    v13 = *(uint32_t **)(v17 + 16);
    v24 = v11;
    v11 = v17;
    v7 = *(v13 - 3);
    s1 = (void *)*a3;
    v3 = *((uint32_t *)*a3 - 3);
    v12 = v3;
    if ( v7 <= v3 )
      v12 = *(v13 - 3);
LABEL_12:
    v14 = memcmp(v13, s1, v12);
    v15 = v7 - v3;
    if ( v14 != 0 )
      v15 = v14;
    if ( v15 >= 0 )
    {
      *(uint32_t *)a1 = v11;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    sub_EB64C0(v25, a2, 0, v24, a3);
  }
  *(uint32_t *)a1 = v25[0];
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}


// ============================================================================
// Address:   0xebaa10 (size: 550 bytes)
// Symbol:    sub_EBAA10
// Demangled: sub_EBAA10
// ============================================================================
void sub_EBAA10(int a1, void *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  int v18;
  void *v19;
  void *v20;
  void *v21;
  void *v22;
  void *v23;
  void *v24;
  void *v25;

  v25 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = *((uint32_t **)v25 + 3);
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
                              v8 = v7[3];
                              if ( v8 != 0 )
                              {
                                while ( 1 )
                                {
                                  v9 = *(uint32_t *)(v8 + 12);
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      sub_EBAA10(a1, *(uint32_t *)(v9 + 12));
                                      v18 = *(uint32_t *)(v9 + 8);
                                      sub_5ED4F0((glitch::video::CMaterial::Self **)(v9 + 20));
                                      opDelete((void *)v9);
                                      if ( v18 == 0 )
                                        break;
                                      v9 = v18;
                                    }
                                  }
                                  v10 = *(uint32_t *)(v8 + 8);
                                  sub_5ED4F0((glitch::video::CMaterial::Self **)(v8 + 20));
                                  opDelete((void *)v8);
                                  if ( v10 == 0 )
                                    break;
                                  v8 = v10;
                                }
                              }
                              v11 = *((void **)v19 + 2);
                              sub_5ED4F0((glitch::video::CMaterial::Self **)v19 + 5);
                              opDelete(v19);
                              if ( v11 == nullptr )
                                break;
                              v19 = v11;
                              v7 = (uint32_t *)(v11);
                            }
                          }
                          v12 = *((void **)v24 + 2);
                          sub_5ED4F0((glitch::video::CMaterial::Self **)v24 + 5);
                          opDelete(v24);
                          if ( v12 == nullptr )
                            break;
                          v24 = v12;
                          v6 = (uint32_t *)(v12);
                        }
                      }
                      v13 = *((void **)v23 + 2);
                      sub_5ED4F0((glitch::video::CMaterial::Self **)v23 + 5);
                      opDelete(v23);
                      if ( v13 == nullptr )
                        break;
                      v23 = v13;
                      v5 = (uint32_t *)(v13);
                    }
                  }
                  v14 = *((void **)v22 + 2);
                  sub_5ED4F0((glitch::video::CMaterial::Self **)v22 + 5);
                  opDelete(v22);
                  if ( v14 == nullptr )
                    break;
                  v22 = v14;
                  v4 = (uint32_t *)(v14);
                }
              }
              v15 = *((void **)v21 + 2);
              sub_5ED4F0((glitch::video::CMaterial::Self **)v21 + 5);
              opDelete(v21);
              if ( v15 == nullptr )
                break;
              v21 = v15;
              v3 = (uint32_t *)(v15);
            }
          }
          v16 = *((void **)v20 + 2);
          sub_5ED4F0((glitch::video::CMaterial::Self **)v20 + 5);
          opDelete(v20);
          if ( v16 == nullptr )
            break;
          v20 = v16;
          v2 = (uint32_t *)(v16);
        }
      }
      v17 = *((void **)v25 + 2);
      sub_5ED4F0((glitch::video::CMaterial::Self **)v25 + 5);
      opDelete(v25);
      if ( v17 == nullptr )
        break;
      v25 = v17;
    }
  }
}


// ============================================================================
// Address:   0xebf630 (size: 958 bytes)
// Symbol:    sub_EBF630
// Demangled: sub_EBF630
// ============================================================================
float *sub_EBF630(int a1, float *a2, uint32_t *a3)
{
  int v5;
  float *result;
  int Stream;
  int v8;
  int v9;
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  int i;
  float *v14;
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  uint32_t *v18;
  int v19;
  int v20;
  float *v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;

  v5 = *(uint32_t *)(*(uint32_t *)a1 + 8);
  if ( v5 != 0 )
  {
    v19 = v5;
    sub_8B1B00((volatile int32_t *)v5);
    v5 = v19;
  }
  v23 = *(uint32_t *)(v5 + 8);
  if ( __sync_fetch_and_add((volatile int32_t *)v5, 0xFFFFFFFF) == 1 )
  {
    v20 = v5;
    glitch::video::CVertexStreams::Destroy((glitch::video::CVertexStreams::Self *)v5);
    gll_operator_delete_arr(v20);
  }
  result = (float *)v23;
  if ( v23 != 0 )
  {
    v25 = *(uint32_t *)(*(uint32_t *)a1 + 8);
    Stream = glitch::video::CVertexStreams::getStream(
               v25,
               16,
               v25 + 20 + 16 * (*(uint8_t *)(v25 + 12) + 1),
               *(uint32_t *)(v25 + 16));
    v24 = Stream;
    if ( *(uint16_t *)(v25 + 30) == 6
      && *(uint16_t *)(v25 + 32) == 3
      && *(uint16_t *)(Stream + 10) == 6
      && *(uint16_t *)(Stream + 12) == 3 )
    {
      v8 = glitch::video::IBuffer::mapInternal(
             *(glitch::video::IBuffer::Self **)(v25 + 20),
             2u,
             0,
             *(uint32_t *)(*(uint32_t *)(v25 + 20) + 20),
             0);
      if ( v8 != 0 )
        v22 = *(uint32_t *)(v25 + 24) + v8;
      else
        v22 = 0;
      v9 = glitch::video::IBuffer::mapInternal(
             *(glitch::video::IBuffer::Self **)v24,
             2u,
             0,
             *(uint32_t *)(*(uint32_t *)v24 + 20),
             0);
      if ( v9 != 0 )
      {
        v21 = (float *)(*(uint32_t *)(v24 + 4) + v9);
        sub_8B74B0(a2, (float *)v22);
        result = v21;
        if ( v21 != nullptr )
        {
          v10 = *v21;
          v11 = v21[1];
          v12 = v21[2];
          *v21 = (float)((float)(a2[4] * v11) + (float)(*a2 * *v21)) + (float)(a2[8] * v12);
          v21[1] = (float)((float)(a2[5] * v11) + (float)(a2[1] * v10)) + (float)(a2[9] * v12);
          v21[2] = (float)((float)(v11 * a2[6]) + (float)(v10 * a2[2])) + (float)(v12 * a2[10]);
          result = sub_5ED3D0(v21);
        }
      }
      else
      {
        result = sub_8B74B0(a2, (float *)v22);
        v21 = nullptr;
      }
      if ( a3 != nullptr )
      {
        a3[3] = *(uint32_t *)v22;
        a3[4] = *(uint32_t *)(v22 + 4);
        a3[5] = *(uint32_t *)(v22 + 8);
        *a3 = *(uint32_t *)v22;
        a3[1] = *(uint32_t *)(v22 + 4);
        result = *(float **)(v22 + 8);
        a3[2] = (uint32_t)(uintptr_t)(result);
      }
      if ( v23 > 1 )
      {
        for ( i = 1; i != v23; ++i )
        {
          sub_8B74B0(a2, (float *)(v22 + i * *(uint16_t *)(v25 + 34)));
          result = v21;
          if ( v21 != nullptr )
          {
            v14 = (float *)((char *)v21 + i * *(uint16_t *)(v24 + 14));
            v15 = *v14;
            v16 = v14[1];
            v17 = v14[2];
            *v14 = (float)((float)(a2[4] * v16) + (float)(*a2 * *v14)) + (float)(a2[8] * v17);
            v14[1] = (float)((float)(a2[5] * v16) + (float)(a2[1] * v15)) + (float)(a2[9] * v17);
            v14[2] = (float)((float)(v16 * a2[6]) + (float)(v15 * a2[2])) + (float)(v17 * a2[10]);
            result = sub_5ED3D0((float *)((char *)v21 + i * *(uint16_t *)(v24 + 14)));
          }
          if ( a3 != nullptr )
          {
            v18 = (uint32_t *)(v22 + i * *(uint16_t *)(v25 + 34));
            a3[3] = *v18;
            a3[4] = v18[1];
            a3[5] = v18[2];
            *a3 = *v18;
            a3[1] = v18[1];
            result = (float *)v18[2];
            a3[2] = (uint32_t)(uintptr_t)(result);
          }
        }
      }
      if ( v21 != nullptr )
        result = (float *)glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)v24);
      if ( v22 != 0 )
        return (float *)glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)(v25 + 20));
    }
    else
    {
      return (float *)glitch::os::Printer::log(
                        (int)(uintptr_t)("transform"),
                        (int)(uintptr_t)("supports only floating-point streams of array size 3"),
                        1);
    }
  }
  return result;
}


// ============================================================================
// Address:   0xec1a70 (size: 95 bytes)
// Symbol:    sub_EC1A70
// Demangled: sub_EC1A70
// ============================================================================
uint32_t *sub_EC1A70(uint32_t *result, uint32_t *a2)
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


// ============================================================================
// Address:   0xec6fd0 (size: 477 bytes)
// Symbol:    sub_EC6FD0
// Demangled: sub_EC6FD0
// ============================================================================
int sub_EC6FD0(int a1, uint32_t *a2, const void **a3)
{
  int v3;
  uint32_t *v4;
  size_t v5;
  int i;
  int v7;
  uint32_t *v8;
  size_t v9;
  size_t n;
  int v11;
  uint32_t *v12;
  int v13;
  size_t v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v19;
  int v20;
  int v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23;
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_s1)) > _g4_s2 ? (8u + sizeof(_g4_t_s1)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v27)) > _g4_s3 ? (20u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v28)) > _g4_s4 ? (20u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v29)) > _g4_s5 ? (24u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v30)) > _g4_s6 ? (28u + sizeof(_g4_t_v30)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);

  v3 = a2[2];
  v4 = a2 + 1;
  v29 = v4;
  if ( v3 == 0 )
  {
    v13 = (int)(uintptr_t)(v4);
    goto LABEL_17;
  }
  s1 = (void *)*a3;
  v5 = *((uint32_t *)*a3 - 3);
  for ( i = v3; ; i = v7 )
  {
    v8 = *(uint32_t **)(i + 16);
    v9 = *(v8 - 3);
    n = v9;
    v22 = i;
    if ( v5 <= v9 )
      n = v5;
    v27 = n;
    v11 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v11 == 0 )
      v11 = v5 - v9;
    if ( v11 >= 0 )
      break;
    v7 = *(uint32_t *)(v22 + 8);
    v23 = 1;
    if ( v7 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v7 = *(uint32_t *)(v22 + 12);
  v23 = 0;
  if ( v7 != 0 )
    goto LABEL_4;
LABEL_11:
  v12 = v8;
  v13 = v22;
  v14 = v27;
  v15 = v12;
  v28 = v22;
  if ( v23 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( a2[3] == v13 )
  {
    sub_EB63B0(v30, (int)(uintptr_t)(a2), 0, v13, a3);
    *(uint32_t *)a1 = v30[0];
    *(uint8_t *)(a1 + 4) = 1;
    return a1;
  }
  else
  {
    v19 = sub_19048F0(v13);
    v15 = *(uint32_t **)(v19 + 16);
    v28 = v13;
    v13 = v19;
    v9 = *(v15 - 3);
    s1 = (void *)*a3;
    v5 = *((uint32_t *)*a3 - 3);
    v14 = v5;
    if ( v9 <= v5 )
      v14 = *(v15 - 3);
LABEL_12:
    v16 = memcmp(v15, s1, v14);
    v17 = v9 - v5;
    if ( v16 != 0 )
      v17 = v16;
    if ( v17 < 0 )
    {
      LOBYTE(v20) = 1;
      if ( v29 != (uint32_t *)v28 )
        v20 = g4_std::basic_string_char_char_traits_char_SA_77cf59::compare(
                (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)a3,
                (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v28 + 16)) >> 31;
      v21 = opNew(0x18u);
      if ( v21 != -16 )
      {
        g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
          (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v21 + 16),
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)a3);
        *(uint32_t *)(v21 + 20) = (uint32_t)(uintptr_t)(a3[1]);
      }
      sub_1904970(v20, v21, v28, v29);
      ++a2[5];
      *(uint32_t *)a1 = v21;
      *(uint8_t *)(a1 + 4) = 1;
      return a1;
    }
    else
    {
      *(uint32_t *)a1 = v13;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
  }
}


// ============================================================================
// Address:   0xec71b0 (size: 506 bytes)
// Symbol:    sub_EC71B0
// Demangled: sub_EC71B0
// ============================================================================
int sub_EC71B0(int a1, const void **a2)
{
  size_t v2;
  int i;
  int v4;
  uint32_t *v5;
  size_t v6;
  size_t n;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  size_t v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v16;
  int v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef int _g4_t_v25[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_s1)) > _g4_s2 ? (12u + sizeof(_g4_t_s1)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v23)) > _g4_s3 ? (24u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v25)) > _g4_s5 ? (28u + sizeof(_g4_t_v25)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);

  if ( (*(uint8_t **)unk_20E1458) == 0 )
  {
    v10 = (uint32_t *)(&unk_20E1454);
    goto LABEL_16;
  }
  s1 = (void *)*a2;
  v2 = *((uint32_t *)*a2 - 3);
  for ( i = (int)(uintptr_t)((*(uint8_t **)unk_20E1458)); ; i = v4 )
  {
    v5 = *(uint32_t **)(i + 16);
    v6 = *(v5 - 3);
    n = v6;
    v18 = i;
    if ( v2 <= v6 )
      n = v2;
    v23 = n;
    v8 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v8 == 0 )
      v8 = v2 - v6;
    if ( v8 >= 0 )
      break;
    v4 = *(uint32_t *)(v18 + 8);
    v19 = 1;
    if ( v4 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v4 = *(uint32_t *)(v18 + 12);
  v19 = 0;
  if ( v4 != 0 )
    goto LABEL_4;
LABEL_11:
  v9 = v5;
  v10 = (uint32_t *)v18;
  v11 = v23;
  v12 = v9;
  v24 = v18;
  if ( v19 == 0 )
    goto LABEL_12;
LABEL_16:
  if ( (uint32_t *)(*(uint8_t **)unk_20E145C) == v10 )
  {
    sub_EB6270(v25, 0, (int)(uintptr_t)(v10), a2);
    *(uint32_t *)a1 = v25[0];
    *(uint8_t *)(a1 + 4) = 1;
    return a1;
  }
  else
  {
    v24 = (size_t)v10;
    v10 = (uint32_t *)sub_19048F0(v10);
    s1 = (void *)*a2;
    v2 = *((uint32_t *)*a2 - 3);
    v12 = (uint32_t *)v10[4];
    v6 = *(v12 - 3);
    v11 = v6;
    if ( v2 <= v6 )
      v11 = *((uint32_t *)s1 - 3);
LABEL_12:
    v13 = memcmp(v12, s1, v11);
    v14 = v6 - v2;
    if ( v13 == 0 )
      v13 = v14;
    if ( v13 < 0 )
    {
      LOBYTE(v16) = 1;
      if ( (void *)v24 != &unk_20E1454 )
        v16 = g4_std::basic_string_char_char_traits_char_SA_77cf59::compare(
                (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)a2,
                (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v24 + 16)) >> 31;
      v17 = sub_4EBDC0(0x18u);
      if ( v17 != -16 )
      {
        g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
          (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v17 + 16),
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)a2);
        g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
          (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v17 + 20),
          (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(a2 + 1));
      }
      sub_1904970(v16, v17, v24, &unk_20E1454);
      ++unk_20E1464;
      *(uint32_t *)a1 = v17;
      *(uint8_t *)(a1 + 4) = 1;
      return a1;
    }
    else
    {
      *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v10);
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
  }
}


// ============================================================================
// Address:   0xeccb60 (size: 215 bytes)
// Symbol:    sub_ECCB60
// Demangled: sub_ECCB60
// ============================================================================
int *sub_ECCB60(int *a1, int a2, int a3, int a4, uint8_t *a5)
{
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  char v13;

  v7 = a2 + 4;
  v13 = 1;
  v12 = v7;
  if ( a3 == 0 && a4 != v7 )
    v13 = *a5 < *(uint8_t *)(a4 + 16);
  v8 = opNew(0x28u);
  if ( v8 != -16 )
  {
    *(uint8_t *)(v8 + 16) = *a5;
    v10 = v8;
    glitch::scene::SParameterAtlasInfo::Construct(
      (glitch::scene::SParameterAtlasInfo *)(v8 + 20),
      (const glitch::scene::SParameterAtlasInfo *)(a5 + 4));
    v8 = v10;
  }
  v11 = v8;
  sub_1904970(v13, v8, a4, v12);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v11;
  return a1;
}


// ============================================================================
// Address:   0xeccc40 (size: 417 bytes)
// Symbol:    sub_ECCC40
// Demangled: sub_ECCC40
// ============================================================================
int sub_ECCC40(int a1, int a2, int a3, glitch::scene::SParameterAtlasInfo *a4)
{
  int v4;
  int v5;
  int i;
  int v8;
  const glitch::scene::SParameterAtlasInfo *v9;
  glitch::video::CMaterial::Self *v12[11];

  v4 = a2;
  if ( a2 < (a3 - 1) / 2 )
  {
    while ( 1 )
    {
      v8 = 2 * (v4 + 1) - 1;
      v9 = (const glitch::scene::SParameterAtlasInfo *)(a1 + 20 * v8);
      if ( *(uint32_t *)(a1 + 40 * (v4 + 1) + 4) >= *((uint32_t *)v9 + 1) )
      {
        v9 = (const glitch::scene::SParameterAtlasInfo *)(a1 + 40 * (v4 + 1));
        v8 = 2 * (v4 + 1);
      }
      glitch::scene::SParameterAtlasInfo::opAssign((glitch::scene::SParameterAtlasInfo *)(a1 + 20 * v4), v9);
      if ( v8 >= (a3 - 1) / 2 )
        break;
      v4 = v8;
    }
  }
  else
  {
    v8 = a2;
    v9 = (const glitch::scene::SParameterAtlasInfo *)(a1 + 20 * a2);
  }
  if ( (a3 & 1) == 0 && v8 == (a3 - 2) / 2 )
  {
    v8 = 2 * v8 + 1;
    glitch::scene::SParameterAtlasInfo::opAssign(v9, (const glitch::scene::SParameterAtlasInfo *)(a1 + 20 * v8));
    v9 = (const glitch::scene::SParameterAtlasInfo *)(a1 + 20 * v8);
  }
  glitch::scene::SParameterAtlasInfo::Construct((glitch::scene::SParameterAtlasInfo *)v12, a4);
  if ( v8 > a2 && (int)(uintptr_t)(v12[1]) > *(uint32_t *)(a1 + 20 * ((v8 - 1) / 2) + 4) )
  {
    v5 = v8;
    for ( i = (v8 - 1) / 2; ; i = (i - 1) / 2 )
    {
      glitch::scene::SParameterAtlasInfo::opAssign(
        (glitch::scene::SParameterAtlasInfo *)(a1 + 20 * v5),
        (const glitch::scene::SParameterAtlasInfo *)(a1 + 20 * i));
      if ( a2 >= i || *(uint32_t *)(a1 + 20 * ((i - 1) / 2) + 4) >= (int)(uintptr_t)(v12[1]) )
        break;
      v5 = i;
    }
    v9 = (const glitch::scene::SParameterAtlasInfo *)(a1 + 20 * i);
  }
  glitch::scene::SParameterAtlasInfo::opAssign(v9, (const glitch::scene::SParameterAtlasInfo *)v12);
  return sub_5ED4F0(v12);
}


// ============================================================================
// Address:   0xeccdf0 (size: 527 bytes)
// Symbol:    sub_ECCDF0
// Demangled: sub_ECCDF0
// ============================================================================
int sub_ECCDF0(int a1, int a2, int a3, glitch::scene::SParameterAtlasInfo *a4)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint8_t v10;
  uint8_t v11;
  int v12;
  int v13;
  int v14;
  int j;
  int v16;
  uint8_t v18;
  uint8_t v19;
  typedef int _g4_t_i;
  typedef int _g4_t_v21;
  typedef bool _g4_t_v22;
  typedef bool _g4_t_v23;
  typedef glitch::video::CMaterial::Self *_g4_t_v25[3];
  typedef uint8_t _g4_t_v26;
  typedef uint8_t _g4_t_v27;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_i)) > _g4_s0 ? (8u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (23u + sizeof(_g4_t_v22)) > _g4_s2 ? (23u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (23u + sizeof(_g4_t_v23)) > _g4_s3 ? (23u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v25)) > _g4_s4 ? (44u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (59u + sizeof(_g4_t_v26)) > _g4_s5 ? (59u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v27)) > _g4_s6 ? (60u + sizeof(_g4_t_v27)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 23u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 23u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 59u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);

  v5 = a2;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v8 = a2;
    v6 = a1 + 20 * a2;
  }
  else
  {
    for ( i = a1; ; a1 = i )
    {
      v8 = 2 * (v5 + 1) - 1;
      v9 = a1 + 40 * (v5 + 1);
      v21 = 2 * (v5 + 1);
      v6 = a1 + 20 * v8;
      v22 = *(uint32_t *)v9 < *(uint32_t *)v6;
      if ( *(uint32_t *)v9 == *(uint32_t *)v6 )
      {
        v10 = *(uint8_t *)(v6 + 15);
        v22 = *(uint8_t *)(v9 + 15) < v10;
        if ( *(uint8_t *)(v9 + 15) == v10 )
        {
          v11 = *(uint8_t *)(v6 + 16);
          v22 = *(uint8_t *)(v9 + 16) < v11;
          if ( *(uint8_t *)(v9 + 16) == v11 )
            v22 = *(uint32_t *)(v9 + 4) < *(uint32_t *)(v6 + 4);
        }
      }
      if ( !v22 )
        v6 = a1 + 40 * (v5 + 1);
      v7 = 5 * v5;
      if ( !v22 )
        v8 = v21;
      glitch::scene::SParameterAtlasInfo::opAssign(
        (glitch::scene::SParameterAtlasInfo *)(i + 4 * v7),
        (const glitch::scene::SParameterAtlasInfo *)v6);
      if ( v8 >= (a3 - 1) / 2 )
        break;
      v5 = v8;
    }
    a1 = i;
  }
  if ( (a3 & 1) == 0 && v8 == (a3 - 2) / 2 )
  {
    v8 = 2 * v8 + 1;
    glitch::scene::SParameterAtlasInfo::opAssign(
      (glitch::scene::SParameterAtlasInfo *)v6,
      (const glitch::scene::SParameterAtlasInfo *)(a1 + 20 * v8));
    v6 = a1 + 20 * v8;
  }
  glitch::scene::SParameterAtlasInfo::Construct((glitch::scene::SParameterAtlasInfo *)v25, a4);
  if ( v8 > a2 )
  {
    v12 = v8 - 1;
    v13 = v8;
    v14 = a1;
    for ( j = v12 / 2; ; j = (j - 1) / 2 )
    {
      v16 = v14 + 20 * j;
      v23 = (glitch::video::CMaterial::Self *)*(uint32_t *)v16 < v25[0];
      if ( *(glitch::video::CMaterial::Self **)v16 == v25[0] )
      {
        v18 = *(uint8_t *)(v16 + 15);
        v23 = v18 < v26;
        if ( v18 == v26 )
        {
          v19 = *(uint8_t *)(v16 + 16);
          v23 = v19 < v27;
          if ( v19 == v27 )
            v23 = *(uint32_t *)(v16 + 4) < (int)(uintptr_t)(v25[1]);
        }
      }
      if ( !v23 )
      {
        v6 = v14 + 20 * v13;
        goto LABEL_22;
      }
      glitch::scene::SParameterAtlasInfo::opAssign(
        (glitch::scene::SParameterAtlasInfo *)(v14 + 20 * v13),
        (const glitch::scene::SParameterAtlasInfo *)(v14 + 20 * j));
      if ( j <= a2 )
        break;
      v13 = j;
    }
    v6 = v14 + 20 * j;
  }
LABEL_22:
  glitch::scene::SParameterAtlasInfo::opAssign(
    (glitch::scene::SParameterAtlasInfo *)v6,
    (const glitch::scene::SParameterAtlasInfo *)v25);
  return sub_5ED4F0(v25);
}


// ============================================================================
// Address:   0xecd000 (size: 1258 bytes)
// Symbol:    sub_ECD000
// Demangled: sub_ECD000
// ============================================================================
int sub_ECD000(
        const glitch::scene::SParameterAtlasInfo *a1,
        glitch::scene::SParameterAtlasInfo *a2,
        int a3)
{
  const glitch::scene::SParameterAtlasInfo *v3;
  int result;
  const glitch::scene::SParameterAtlasInfo *v5;
  const glitch::scene::SParameterAtlasInfo *v6;
  const glitch::scene::SParameterAtlasInfo *v7;
  int v8;
  int v9;
  int v10;
  glitch::scene::SParameterAtlasInfo *v11;
  const glitch::scene::SParameterAtlasInfo *v12;
  const glitch::scene::SParameterAtlasInfo *v13;
  glitch::scene::SParameterAtlasInfo *v14;
  int v15;
  glitch::scene::SParameterAtlasInfo *v16;
  int v17;
  const glitch::scene::SParameterAtlasInfo *v18;
  int v19;
  int j;
  int v21;
  typedef glitch::scene::SParameterAtlasInfo *_g4_t_v22;
  typedef const glitch::scene::SParameterAtlasInfo *_g4_t_i;
  typedef glitch::scene::SParameterAtlasInfo *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef glitch::scene::SParameterAtlasInfo *_g4_t_v26;
  typedef glitch::scene::SParameterAtlasInfo *_g4_t_v27;
  typedef glitch::scene::SParameterAtlasInfo *_g4_t_v28;
  typedef glitch::scene::SParameterAtlasInfo *_g4_t_v29;
  typedef const glitch::scene::SParameterAtlasInfo *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef glitch::video::CMaterial::Self *_g4_t_v32[5];
  typedef glitch::video::CMaterial::Self *_g4_t_v33[5];
  typedef glitch::video::CMaterial::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef glitch::video::CMaterial::Self *_g4_t_v36[12];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_i)) > _g4_s1 ? (20u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v24)) > _g4_s2 ? (32u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v25)) > _g4_s3 ? (32u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v26)) > _g4_s4 ? (36u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v27)) > _g4_s5 ? (36u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v28)) > _g4_s6 ? (40u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v29)) > _g4_s7 ? (40u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v30)) > _g4_s8 ? (44u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v31)) > _g4_s9 ? (44u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v32)) > _g4_s10 ? (48u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v33)) > _g4_s11 ? (68u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v34)) > _g4_s12 ? (88u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v35)) > _g4_s13 ? (92u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v36)) > _g4_s14 ? (108u + sizeof(_g4_t_v36)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 92u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);

  v3 = a1;
  result = a2 - a1;
  v26 = a2;
  if ( result <= 339 )
    return result;
  if ( a3 == 0 )
  {
    v12 = a2;
    goto LABEL_26;
  }
  v30 = (const glitch::scene::SParameterAtlasInfo *)((char *)v3 + 20);
  v24 = (glitch::scene::SParameterAtlasInfo *)(v3);
  v5 = v3;
  v6 = v3;
  while ( 2 )
  {
    --a3;
    v7 = (const glitch::scene::SParameterAtlasInfo *)((char *)v5 + 20 * ((-858993459 * (result >> 2)) >> 1));
    v8 = *((uint32_t *)v6 + 1);
    v9 = *((uint32_t *)v7 + 1);
    v28 = (glitch::scene::SParameterAtlasInfo *)((char *)v26 - 20);
    v10 = *((uint32_t *)v26 - 4);
    if ( v8 < v9 )
    {
      if ( v9 >= v10 )
      {
        if ( v8 < v10 )
        {
          glitch::scene::SParameterAtlasInfo::Construct((glitch::scene::SParameterAtlasInfo *)v36, v24);
          glitch::scene::SParameterAtlasInfo::opAssign(v24, v28);
          glitch::scene::SParameterAtlasInfo::opAssign(v28, (const glitch::scene::SParameterAtlasInfo *)v36);
          sub_5ED4F0(v36);
          v8 = *((uint32_t *)v24 + 1);
          v10 = *((uint32_t *)v26 - 4);
        }
        goto LABEL_8;
      }
      goto LABEL_23;
    }
    if ( v8 >= v10 )
    {
      if ( v9 >= v10 )
      {
LABEL_23:
        glitch::scene::SParameterAtlasInfo::Construct((glitch::scene::SParameterAtlasInfo *)v36, v24);
        glitch::scene::SParameterAtlasInfo::opAssign(v24, v7);
        glitch::scene::SParameterAtlasInfo::opAssign(v7, (const glitch::scene::SParameterAtlasInfo *)v36);
        sub_5ED4F0(v36);
        v8 = *((uint32_t *)v24 + 1);
        v10 = *((uint32_t *)v26 - 4);
        goto LABEL_8;
      }
      glitch::scene::SParameterAtlasInfo::Construct((glitch::scene::SParameterAtlasInfo *)v36, v24);
      glitch::scene::SParameterAtlasInfo::opAssign(v24, v28);
      glitch::scene::SParameterAtlasInfo::opAssign(v28, (const glitch::scene::SParameterAtlasInfo *)v36);
      sub_5ED4F0(v36);
      v10 = *((uint32_t *)v26 - 4);
      v8 = *((uint32_t *)v24 + 1);
    }
LABEL_8:
    v11 = v26;
    v12 = v30;
    while ( 1 )
    {
      while ( v8 > *((uint32_t *)v12 + 1) )
        v12 = (const glitch::scene::SParameterAtlasInfo *)((char *)v12 + 20);
      v13 = (glitch::scene::SParameterAtlasInfo *)((char *)v11 - 20);
      if ( v8 < v10 )
        break;
      v11 = (glitch::scene::SParameterAtlasInfo *)((char *)v11 - 20);
      if ( v13 <= v12 )
        goto LABEL_17;
LABEL_15:
      glitch::scene::SParameterAtlasInfo::Construct((glitch::scene::SParameterAtlasInfo *)v36, v12);
      glitch::scene::SParameterAtlasInfo::opAssign(v12, v11);
      glitch::scene::SParameterAtlasInfo::opAssign(v11, (const glitch::scene::SParameterAtlasInfo *)v36);
      v12 = (const glitch::scene::SParameterAtlasInfo *)((char *)v12 + 20);
      sub_5ED4F0(v36);
      v8 = *((uint32_t *)v24 + 1);
      v10 = *((uint32_t *)v11 - 4);
    }
    v14 = (glitch::scene::SParameterAtlasInfo *)((char *)v11 - 40);
    do
    {
      v11 = v14;
      v14 = (glitch::scene::SParameterAtlasInfo *)((char *)v14 - 20);
    }
    while ( v8 < *((uint32_t *)v11 + 1) );
    if ( v11 > v12 )
      goto LABEL_15;
LABEL_17:
    sub_ECD000(a3);
    result = v12 - v24;
    if ( v12 - v24 > 339 )
    {
      if ( a3 != 0 )
      {
        v26 = (glitch::scene::SParameterAtlasInfo *)(v12);
        v5 = v24;
        v6 = v24;
        continue;
      }
      v3 = v24;
LABEL_26:
      v27 = (glitch::scene::SParameterAtlasInfo *)(v12);
      v25 = -858993459 * (result >> 2);
      v15 = (v25 - 2) >> 1;
      v16 = (glitch::scene::SParameterAtlasInfo *)((const glitch::scene::SParameterAtlasInfo *)((char *)v3 + 20 * v15));
      while ( 1 )
      {
        v22 = v16;
        v16 = (glitch::scene::SParameterAtlasInfo *)((char *)v16 - 20);
        glitch::scene::SParameterAtlasInfo::Construct((glitch::scene::SParameterAtlasInfo *)v36, v22);
        glitch::scene::SParameterAtlasInfo::Construct(
          (glitch::scene::SParameterAtlasInfo *)v32,
          (const glitch::scene::SParameterAtlasInfo *)v36);
        sub_ECCC40((int)(uintptr_t)(v3), v15, v25, (glitch::scene::SParameterAtlasInfo *)v32);
        sub_5ED4F0(v32);
        if ( v15 == 0 )
          break;
        --v15;
        sub_5ED4F0(v36);
      }
      sub_5ED4F0(v36);
      while ( 2 )
      {
        v27 = (glitch::scene::SParameterAtlasInfo *)((char *)v27 - 20);
        v17 = 0;
        glitch::scene::SParameterAtlasInfo::Construct((glitch::scene::SParameterAtlasInfo *)v36, v27);
        v18 = v3;
        glitch::scene::SParameterAtlasInfo::opAssign(v27, v3);
        glitch::scene::SParameterAtlasInfo::Construct(
          (glitch::scene::SParameterAtlasInfo *)v33,
          (const glitch::scene::SParameterAtlasInfo *)v36);
        v31 = v27 - v3;
        v29 = (glitch::scene::SParameterAtlasInfo *)(-858993459 * ((v27 - v3) >> 2));
        if ( ((int)(uintptr_t)(v29) - 1) / 2 > 0 )
        {
          v19 = 0;
          for ( i = v3; ; v3 = i )
          {
            v17 = 2 * (v19 + 1) - 1;
            v18 = (const glitch::scene::SParameterAtlasInfo *)((char *)v3 + 20 * v17);
            if ( *((uint32_t *)v3 + 10 * v19 + 11) >= *((uint32_t *)v18 + 1) )
            {
              v18 = (const glitch::scene::SParameterAtlasInfo *)((char *)v3 + 40 * v19 + 40);
              v17 = 2 * (v19 + 1);
            }
            glitch::scene::SParameterAtlasInfo::opAssign(
              (const glitch::scene::SParameterAtlasInfo *)((char *)i + 20 * v19),
              v18);
            if ( ((int)(uintptr_t)(v29) - 1) / 2 <= v17 )
              break;
            v19 = v17;
          }
          v3 = i;
        }
        if ( ((uint8_t)(uintptr_t)(v29) & 1) == 0 && v17 == ((int)(uintptr_t)(v29) - 2) / 2 )
        {
          v17 = 2 * v17 + 1;
          glitch::scene::SParameterAtlasInfo::opAssign(
            v18,
            (const glitch::scene::SParameterAtlasInfo *)((char *)v3 + 20 * v17));
          glitch::scene::SParameterAtlasInfo::Construct(
            (glitch::scene::SParameterAtlasInfo *)&v34,
            (const glitch::scene::SParameterAtlasInfo *)v33);
          v18 = (const glitch::scene::SParameterAtlasInfo *)((char *)v3 + 20 * v17);
        }
        else
        {
          glitch::scene::SParameterAtlasInfo::Construct(
            (glitch::scene::SParameterAtlasInfo *)&v34,
            (const glitch::scene::SParameterAtlasInfo *)v33);
          if ( v17 <= 0 )
            goto LABEL_40;
        }
        for ( j = (v17 - 1) >> 1; *((uint32_t *)v3 + 5 * j + 1) < v35; j = (v17 - 1) >> 1 )
        {
          v21 = v17;
          v17 = j;
          v18 = (const glitch::scene::SParameterAtlasInfo *)((char *)v3 + 20 * j);
          glitch::scene::SParameterAtlasInfo::opAssign(
            (const glitch::scene::SParameterAtlasInfo *)((char *)v3 + 20 * v21),
            v18);
          if ( v17 == 0 )
            break;
        }
LABEL_40:
        glitch::scene::SParameterAtlasInfo::opAssign(v18, (const glitch::scene::SParameterAtlasInfo *)&v34);
        sub_5ED4F0(&v34);
        sub_5ED4F0(v33);
        result = sub_5ED4F0(v36);
        if ( v31 <= 39 )
          return result;
        continue;
      }
    }
    return result;
  }
}

