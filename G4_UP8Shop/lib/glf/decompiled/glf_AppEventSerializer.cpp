#include "Core/Utils/DecompTypes.h"
#include "glf_AppEventSerializer.h"

// ----------------------------------------------------------------------------
// Function: glf::AppEventSerializer::StaticTextSerialize  (binary VA: 0xc740e0)
// Original: glf::AppEventSerializer::StaticTextSerialize
// ----------------------------------------------------------------------------
int glf::AppEventSerializer::StaticTextSerialize(int a1, uint16_t *a2, uint16_t a3)
{
  int v3;
  const char *EventName;
  const char *v5;
  size_t v6;
  uint32_t *v7;
  size_t v8;
  uint16_t v9;
  int v10;
  glf::InputManager::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  const glf::InputDevice::Self *v17;
  glf::InputManager::Self *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  glf::InputManager::Self *InputMgr;
  glf::InputDevice::Self *GamepadIndex;
  int v29;
  int v30;
  char v31; // bp
  uint16_t *v32;
  int v33;
  int v34;
  int v35;
  glf::InputManager::Self *v36;
  typedef char *_g4_t_s;
  typedef glf::Self *_g4_t_sa;
  typedef glf::Self *_g4_t_sb;
  typedef uint16_t _g4_t_v40;
  typedef int _g4_t_v41;
  typedef glf::InputDevice::Self *_g4_t_v42;
  typedef glf::InputDevice::Self *_g4_t_KeyboardIndex;
  typedef glf::InputDevice::Self *_g4_t_v44;
  typedef glf::InputDevice::Self *_g4_t_v45;
  typedef glf::InputDevice::Self *_g4_t_v46;
  typedef glf::InputDevice::Self *_g4_t_v47;
  typedef glf::InputDevice::Self *_g4_t_v48;
  typedef glf::InputDevice::Self *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef char _g4_t_v51;
  typedef char *_g4_t_FlagName;
  typedef char *_g4_t_v53;
  typedef float _g4_t_v54;
  typedef char _g4_t_v55;
  typedef char *_g4_t_v56;
  typedef glf::Self *_g4_t_v57;
  typedef float _g4_t_v58;
  typedef int _g4_t_v59;
  typedef float _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef uint8_t _g4_t_v65[29];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_sa)) > _g4_s1 ? (0u + sizeof(_g4_t_sa)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_sb)) > _g4_s2 ? (0u + sizeof(_g4_t_sb)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v40)) > _g4_s3 ? (4u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v41)) > _g4_s4 ? (4u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v42)) > _g4_s5 ? (16u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_KeyboardIndex)) > _g4_s6 ? (16u + sizeof(_g4_t_KeyboardIndex)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v44)) > _g4_s7 ? (16u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v45)) > _g4_s8 ? (16u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v46)) > _g4_s9 ? (16u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v47)) > _g4_s10 ? (16u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v48)) > _g4_s11 ? (16u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v49)) > _g4_s12 ? (16u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v50)) > _g4_s13 ? (20u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v51)) > _g4_s14 ? (20u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_FlagName)) > _g4_s15 ? (24u + sizeof(_g4_t_FlagName)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v53)) > _g4_s16 ? (24u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v54)) > _g4_s17 ? (24u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v55)) > _g4_s18 ? (24u + sizeof(_g4_t_v55)) : _g4_s18,
    _g4_s20 = (24u + sizeof(_g4_t_v56)) > _g4_s19 ? (24u + sizeof(_g4_t_v56)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v57)) > _g4_s20 ? (28u + sizeof(_g4_t_v57)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v58)) > _g4_s21 ? (28u + sizeof(_g4_t_v58)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v59)) > _g4_s22 ? (32u + sizeof(_g4_t_v59)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v60)) > _g4_s23 ? (32u + sizeof(_g4_t_v60)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v61)) > _g4_s24 ? (32u + sizeof(_g4_t_v61)) : _g4_s24,
    _g4_s26 = (36u + sizeof(_g4_t_v62)) > _g4_s25 ? (36u + sizeof(_g4_t_v62)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v63)) > _g4_s26 ? (40u + sizeof(_g4_t_v63)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v64)) > _g4_s27 ? (44u + sizeof(_g4_t_v64)) : _g4_s27,
    _g4_s29 = (63u + sizeof(_g4_t_v65)) > _g4_s28 ? (63u + sizeof(_g4_t_v65)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 0u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_KeyboardIndex &KeyboardIndex = *reinterpret_cast<_g4_t_KeyboardIndex *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_FlagName &FlagName = *reinterpret_cast<_g4_t_FlagName *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 32u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 36u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 63u);

  FlagName = (char *)glf::GetFlagName((glf::Self *)a3, v40);
  v3 = a1 + 8;
  v57 = (glf::Self *)*a2;
  EventName = (const char *)glf::GetEventName(v57, v41);
  v5 = EventName;
  if ( EventName != nullptr )
  {
    v6 = strlen(EventName);
    g4_std_compat::ostream_write(a1 + 8, v5, v6);
  }
  else
  {
    sub_1911530(
      v3 + *(uint32_t *)(*(uint32_t *)(a1 + 8) - 12),
      *(uint32_t *)(v3 + *(uint32_t *)(*(uint32_t *)(a1 + 8) - 12) + 20) | 1);
  }
  g4_std_compat::ostream_write(a1 + 8, " ", 1);
  v7 = (uint32_t *)sub_192D8B0(a1 + 8, v57);
  g4_std_compat::ostream_write(v7, " ", 1);
  if ( FlagName != nullptr )
  {
    v8 = strlen(FlagName);
    g4_std_compat::ostream_write(v7, FlagName, v8);
  }
  else
  {
    sub_1911530((char *)v7 + *(uint32_t *)(*v7 - 12), *(uint32_t *)((char *)v7 + *(uint32_t *)(*v7 - 12) + 20) | 1);
  }
  g4_std_compat::ostream_write(v7, " ", 1);
  sub_192D8B0(v7, a3);
  v9 = *a2;
  if ( *a2 > 0xCDu )
  {
    if ( v9 >= 0xD5u )
    {
      if ( v9 <= 0xD7u )
      {
        v54 = *((float *)a2 + 7);
        v26 = *((uint32_t *)a2 + 4);
        v58 = *((float *)a2 + 6);
        v45 = *((glf::InputDevice::Self **)a2 + 1);
        v60 = *((float *)a2 + 5);
        InputMgr = (glf::InputManager::Self *)glf::GetInputMgr((glf::Self *)s);
        GamepadIndex = (glf::InputDevice::Self *)glf::InputManager::GetGamepadIndex(InputMgr, v45);
LABEL_21:
        v46 = GamepadIndex;
        g4_std_compat::ostream_write(v3, " ", 1);
        v29 = (int)(uintptr_t)(sub_192D8B0(v3, v46));
        g4_std_compat::ostream_write(v29, " ", 1);
        v30 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(v29, v26));
        g4_std_compat::ostream_write(v30, " ", 1);
        v22 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v30, COERCE__INT64(v60)));
        goto LABEL_14;
      }
      if ( v9 <= 0xDAu )
      {
        glf::App::GetInstance((glf::App::Self *)s);
        glf::App::ConvertPosScreenToNormalizedScreen(&v63);
        v54 = v64;
        v59 = *((uint32_t *)a2 + 5);
        v62 = *((uint32_t *)a2 + 6);
        v58 = v63;
        v17 = *((const glf::InputDevice::Self **)a2 + 1);
        v44 = *((glf::InputDevice::Self **)a2 + 4);
        v18 = (glf::InputManager::Self *)glf::GetInputMgr(sa);
        v19 = glf::InputManager::GetGamepadIndex(v18, v17);
        g4_std_compat::ostream_write(v3, " ", 1);
        v20 = (int)(uintptr_t)(sub_192D8B0(v3, v19));
        g4_std_compat::ostream_write(v20, " ", 1);
        v21 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(v20, v44));
        g4_std_compat::ostream_write(v21, " ", 1);
        v22 = (int)(uintptr_t)(sub_192DF90(v21, v59, v62));
LABEL_14:
        v23 = v22;
        g4_std_compat::ostream_write(v22, " ", 1);
        v24 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v23, COERCE__INT64(v58)));
        g4_std_compat::ostream_write(v24, " ", 1);
        v15 = (int)(uintptr_t)(g4_std::ostream::op_shl_double(v24, COERCE__INT64(v54)));
        goto LABEL_8;
      }
    }
    return 0;
  }
  if ( v9 >= 0xCCu )
  {
    v53 = *((char **)a2 + 6);
    v10 = *((uint32_t *)a2 + 4);
    v50 = *((uint32_t *)a2 + 5);
    v42 = *((glf::InputDevice::Self **)a2 + 1);
    v11 = (glf::InputManager::Self *)glf::GetInputMgr((glf::Self *)s);
    KeyboardIndex = (glf::InputDevice::Self *)glf::InputManager::GetKeyboardIndex(v11, v42);
    g4_std_compat::ostream_write(v3, " ", 1);
    v12 = (int)(uintptr_t)(sub_192D8B0(v3, KeyboardIndex));
    g4_std_compat::ostream_write(v12, " ", 1);
    v13 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(v12, v10));
    g4_std_compat::ostream_write(v13, " ", 1);
    v14 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(v13, v50));
    g4_std_compat::ostream_write(v14, " ", 1);
    v15 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(v14, v53));
LABEL_8:
    g4_std_compat::ostream_write(v15, &a0[1], 1);
    return 1;
  }
  if ( v9 != 102 )
  {
    if ( v9 <= 0x66u )
    {
      if ( v9 == 100 || v9 == 101 )
      {
        v25 = *((uint32_t *)a2 + 1);
        g4_std_compat::ostream_write(v3, " ", 1);
        v15 = (int)(uintptr_t)(g4_std::ostream::op_shl_int(v3, v25));
        goto LABEL_8;
      }
      return 0;
    }
    if ( v9 >= 0xC8u )
    {
      glf::App::GetInstance((glf::App::Self *)s);
      glf::App::ConvertPosScreenToNormalizedScreen(&v63);
      v54 = *((float *)a2 + 6);
      v26 = *((uint32_t *)a2 + 4);
      v58 = v64;
      v49 = *((glf::InputDevice::Self **)a2 + 1);
      v60 = v63;
      v36 = (glf::InputManager::Self *)glf::GetInputMgr(sb);
      GamepadIndex = (glf::InputDevice::Self *)glf::InputManager::GetMouseIndex(v36, v49);
      goto LABEL_21;
    }
    return 0;
  }
  v55 = *((uint8_t *)a2 + 69);
  v31 = *((uint8_t *)a2 + 71);
  v51 = *((uint8_t *)a2 + 68);
  g4_std_compat::ostream_write(v3, " ", 1);
  v65[0] = v31;
  v47 = (glf::InputDevice::Self *)g4_std_compat::ostream_write(v3, v65, 1);
  g4_std_compat::ostream_write(v47, " ", 1);
  v65[0] = v51;
  v48 = (glf::InputDevice::Self *)g4_std_compat::ostream_write(v47, v65, 1);
  g4_std_compat::ostream_write(v48, " ", 1);
  v65[0] = v55;
  g4_std_compat::ostream_write(v48, v65, 1);
  if ( *((uint8_t *)a2 + 70) != 0 )
  {
    v32 = a2;
    v56 = (char *)(a1 + 8);
    v33 = 0;
    do
    {
      ++v33;
      v61 = v32[3];
      v34 = v32[2];
      v32 += 2;
      g4_std_compat::ostream_write(v56, " ", 1);
      v35 = (int)(uintptr_t)(sub_192D8B0(v56, v34));
      g4_std_compat::ostream_write(v35, " ", 1);
      sub_192D8B0(v35, v61);
    }
    while ( *((uint8_t *)a2 + 70) > v33 );
    v3 = a1 + 8;
  }
  g4_std_compat::ostream_write(v3, &a0[1], 1);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventSerializer::StaticTextUnserialize  (binary VA: 0xc747b0)
// Original: glf::AppEventSerializer::StaticTextUnserialize
// ----------------------------------------------------------------------------
unsigned int glf::AppEventSerializer::StaticTextUnserialize(uint16_t *a1, uint16_t a2, int a3, unsigned int a4)
{
  uint16_t *v4;
  unsigned int v5;
  int v6;
  int v7;
  uint16_t v8;
  glf::InputManager::Self *v9;
  int v10;
  int v11;
  unsigned int result;
  glf::InputManager::Self *InputMgr;
  int v14;
  int v15;
  int v16;
  glf::App::Self *Instance;
  uint32_t *v18;
  glf::InputManager::Self *v19;
  int v20;
  int v21;
  int v22;
  glf::InputManager::Self *v23;
  int v24;
  int v25;
  int v26;
  glf::App::Self *v27;
  typedef unsigned int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef uint32_t _g4_t_v34[4];
  typedef uint32_t *_g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef float _g4_t_v37;
  typedef uint8_t _g4_t_v38[12];
  typedef uint16_t **_g4_t_v39;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v28)) > _g4_s0 ? (8u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v30)) > _g4_s2 ? (8u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v31)) > _g4_s3 ? (8u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v32)) > _g4_s4 ? (8u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v33)) > _g4_s5 ? (8u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v34)) > _g4_s6 ? (12u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v35)) > _g4_s7 ? (32u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v36)) > _g4_s8 ? (36u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v37)) > _g4_s9 ? (40u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v38)) > _g4_s10 ? (44u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v39)) > _g4_s11 ? (56u + sizeof(_g4_t_v39)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);

  v39 = &a1;
  v4 = a1;
  v5 = a4;
  v6 = a3;
  *a1 = a2;
  v28 = v5;
  v35 = &dword_213B814;
  v7 = sub_19056D0(v6, &v35);
  sub_19150E0(v7, v28);
  v8 = *v4;
  if ( *v4 > 0xCDu )
  {
    if ( v8 < 0xD5u )
      goto LABEL_5;
    if ( v8 > 0xD7u )
    {
      if ( v8 <= 0xDAu )
      {
        sub_1914710(v6, &v36);
        v30 = v36;
        InputMgr = (glf::InputManager::Self *)glf::GetInputMgr();
        *((uint32_t *)v4 + 1) = glf::InputManager::GetGamepad(InputMgr, v30);
        v14 = (int)(uintptr_t)(sub_1914710(v6, v4 + 8));
        v15 = (int)(uintptr_t)(sub_1915980(v14, v4 + 10));
        v16 = (int)(uintptr_t)(sub_1915AF0(v15, &v37));
        sub_1915AF0(v16, v38);
        Instance = (glf::App::Self *)glf::App::GetInstance();
        glf::App::ConvertPosNormalizedScreenToScreen(v34, Instance, &v37);
        *((uint32_t *)v4 + 7) = v34[0];
        result = (unsigned int)(uintptr_t)(v4);
        goto LABEL_13;
      }
      goto LABEL_5;
    }
    sub_1914710(v6, &v36);
    v31 = v36;
    v19 = (glf::InputManager::Self *)glf::GetInputMgr();
    *((uint32_t *)v4 + 1) = glf::InputManager::GetGamepad(v19, v31);
    v20 = (int)(uintptr_t)(sub_1914710(v6, v4 + 8));
    v21 = (int)(uintptr_t)(sub_1915AF0(v20, v4 + 10));
    v22 = (int)(uintptr_t)(sub_1915AF0(v21, v4 + 12));
    sub_1915AF0(v22, v4 + 14);
    result = (unsigned int)(uintptr_t)(v4);
  }
  else
  {
    if ( v8 >= 0xCCu )
    {
      sub_1914710(v6, &v36);
      v29 = v36;
      v9 = (glf::InputManager::Self *)glf::GetInputMgr();
      *((uint32_t *)v4 + 1) = glf::InputManager::GetKeyboard(v9, v29);
      v10 = (int)(uintptr_t)(sub_19150E0(v6, v4 + 8));
      v11 = (int)(uintptr_t)(sub_1914710(v10, v4 + 10));
      sub_1914710(v11, v4 + 12);
      result = (unsigned int)(uintptr_t)(v4);
      goto LABEL_13;
    }
    if ( v8 == 101 )
      goto LABEL_12;
    if ( v8 <= 0x65u )
    {
      if ( v8 == 100 )
      {
LABEL_12:
        sub_1914710(v6, v4 + 2);
        result = (unsigned int)(uintptr_t)(v4);
        goto LABEL_13;
      }
LABEL_5:
      result = 0;
      goto LABEL_13;
    }
    if ( v8 < 0xC8u )
      goto LABEL_5;
    sub_1914710(v6, &v36);
    v32 = v36;
    v23 = (glf::InputManager::Self *)glf::GetInputMgr();
    *((uint32_t *)v4 + 1) = glf::InputManager::GetMouse(v23, v32);
    v24 = (int)(uintptr_t)(sub_1914710(v6, v4 + 8));
    v25 = (int)(uintptr_t)(sub_1915AF0(v24, &v37));
    v26 = (int)(uintptr_t)(sub_1915AF0(v25, v38));
    sub_1915AF0(v26, v4 + 12);
    v27 = (glf::App::Self *)glf::App::GetInstance();
    glf::App::ConvertPosNormalizedScreenToScreen(v34, v27, &v37);
    *((uint32_t *)v4 + 5) = v34[0];
    result = (unsigned int)(uintptr_t)(v4);
  }
LABEL_13:
  v18 = v35 - 3;
  if ( v35 - 3 != dword_213B808 && __sync_fetch_and_add(v35 - 1, 0xFFFFFFFF) <= 0 )
  {
    v33 = result;
    g4_std::string::Rep::M_destroy(v18);
    return v33;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventSerializer::StaticTextUnserialize  (binary VA: 0xc74ac0)
// Original: glf::AppEventSerializer::StaticTextUnserialize
// ----------------------------------------------------------------------------
unsigned int glf::AppEventSerializer::StaticTextUnserialize(uint16_t *a1, int a2, unsigned int a3)
{
  int v3;
  unsigned int result;
  uint32_t *v5;
  typedef unsigned int _g4_t_v6;
  typedef uint16_t _g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v7)) > _g4_s1 ? (30u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 30u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  v8 = &dword_213B814;
  v3 = sub_19056D0(a2, &v8);
  sub_19150E0(v3, &v7);
  result = glf::AppEventSerializer::StaticTextUnserialize(a1, v7, a2, a3);
  v5 = v8 - 3;
  if ( v8 - 3 != dword_213B808 && __sync_fetch_and_add(v8 - 1, 0xFFFFFFFF) <= 0 )
  {
    v6 = result;
    g4_std::string::Rep::M_destroy(v5);
    return v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventSerializer::StaticUnserialize  (binary VA: 0xc74b70)
// Original: glf::AppEventSerializer::StaticUnserialize
// ----------------------------------------------------------------------------
uint16_t * glf::AppEventSerializer::StaticUnserialize(uint16_t *a1, int a2, uint16_t *a3)
{
  uint8_t *v3;
  int16_t v4;
  int16_t v5;
  uint8_t *v6;
  int16_t v7;
  int16_t v8;
  uint16_t v9;
  uint8_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  glf::InputManager::Self *v16;
  char *v17;
  char v18;
  uint8_t *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint8_t *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  uint8_t *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  unsigned int v35;
  glf::InputManager::Self *InputMgr;
  uint8_t *v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  uint8_t *v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  uint8_t *v54;
  int v55;
  int v56;
  int v57;
  int v58;
  uint8_t *v59;
  int v60;
  int v61;
  int v62;
  int v63;
  unsigned int v64;
  glf::InputManager::Self *v65;
  uint8_t *v66;
  int v67;
  int v68;
  int v69;
  int v70;
  uint8_t *v71;
  int v72;
  int v73;
  int v74;
  int v75;
  uint8_t *v76;
  int v77;
  int v78;
  int v79;
  int v80;
  uint8_t *v81;
  int v82;
  int v83;
  int v84;
  int v85;
  uint8_t *v86;
  int v87;
  int v88;
  int v89;
  int v90;
  unsigned int v91;
  glf::InputManager::Self *v92;
  uint8_t *v93;
  int v94;
  int v95;
  int v96;
  int v97;
  uint8_t *v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  uint8_t *v106;
  int v107;
  int v108;
  int v109;
  int v110;
  typedef glf::Self *_g4_t_v111;
  typedef glf::App::Self *_g4_t_v112;
  typedef glf::App::Self *_g4_t_v113;
  typedef uint8_t *_g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef uint32_t _g4_t_v120[3];
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v111)) > _g4_s0 ? (0u + sizeof(_g4_t_v111)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v112)) > _g4_s1 ? (0u + sizeof(_g4_t_v112)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v113)) > _g4_s2 ? (0u + sizeof(_g4_t_v113)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v114)) > _g4_s3 ? (16u + sizeof(_g4_t_v114)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v115)) > _g4_s4 ? (32u + sizeof(_g4_t_v115)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v116)) > _g4_s5 ? (40u + sizeof(_g4_t_v116)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v117)) > _g4_s6 ? (48u + sizeof(_g4_t_v117)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v118)) > _g4_s7 ? (52u + sizeof(_g4_t_v118)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v119)) > _g4_s8 ? (56u + sizeof(_g4_t_v119)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v120)) > _g4_s9 ? (60u + sizeof(_g4_t_v120)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v121)) > _g4_s10 ? (72u + sizeof(_g4_t_v121)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v122)) > _g4_s11 ? (76u + sizeof(_g4_t_v122)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 0u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 0u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 0u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 16u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 32u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 40u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 48u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 52u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 56u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 60u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 72u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 76u);

  v3 = *(uint8_t **)(a2 + 8);
  v4 = *v3;
  *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v3 + 1);
  v5 = v3[1];
  *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v3 + 2);
  *a1 = (v5 << 8) | v4;
  v6 = *(uint8_t **)(a2 + 8);
  v7 = *v6;
  *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v6 + 1);
  v8 = v6[1];
  *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v6 + 2);
  *a3 = (v8 << 8) | v7;
  v9 = *a1;
  if ( *a1 > 0xCDu )
  {
    if ( v9 < 0xD5u )
      return nullptr;
    if ( v9 > 0xD7u )
    {
      if ( v9 <= 0xDAu )
      {
        v30 = *(uint8_t **)(a2 + 8);
        v31 = *v30;
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v30 + 1);
        v32 = v30[1];
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v30 + 2);
        v33 = (v30[2] << 16) | (v32 << 8);
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v30 + 3);
        v34 = v30[3];
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v30 + 4);
        v35 = (v34 << 24) | v31 | v33;
        InputMgr = (glf::InputManager::Self *)glf::GetInputMgr(v111);
        *((uint32_t *)a1 + 1) = glf::InputManager::GetGamepad(InputMgr, v35);
        v37 = *(uint8_t **)(a2 + 8);
        v38 = *v37;
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v37 + 1);
        v39 = v37[1];
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v37 + 2);
        v40 = (v37[2] << 16) | (v39 << 8);
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v37 + 3);
        v41 = v37[3];
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v37 + 4);
        *((uint32_t *)a1 + 4) = (v41 << 24) | v38 | v40;
        v114 = *(uint8_t **)(a2 + 8);
        v42 = *v114;
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v114 + 1);
        v115 = v114[1] << 8;
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v114 + 2);
        v116 = v114[2] << 16;
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v114 + 3);
        v117 = v114[3] << 24;
        v118 = (char)v114[3] >> 7;
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v114 + 4);
        v43 = v114[4];
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v114 + 5);
        v119 = v114[5] << 8;
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v114 + 6);
        v44 = v114[6];
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v114 + 7);
        v45 = v118 | (v114[7] << 24) | (v44 << 16) | v119 | v43;
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v114 + 8);
        *((uint32_t *)a1 + 6) = v45;
        *((uint32_t *)a1 + 5) = v117 | v116 | v115 | v42;
        v46 = *(uint8_t **)(a2 + 8);
        v47 = *v46;
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v46 + 1);
        v48 = v46[1];
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v46 + 2);
        v49 = (v46[2] << 16) | (v48 << 8);
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v46 + 3);
        v121 = (v46[3] << 24) | v47 | v49;
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v46 + 4);
        v50 = v46[4];
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v46 + 5);
        v51 = v46[5];
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v46 + 6);
        v52 = (v46[6] << 16) | (v51 << 8);
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v46 + 7);
        v53 = v46[7];
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v46 + 8);
        v122 = (v53 << 24) | v50 | v52;
        glf::App::GetInstance(v112);
        glf::App::ConvertPosNormalizedScreenToScreen(v120);
        *((uint32_t *)a1 + 7) = v120[0];
        return a1;
      }
      return nullptr;
    }
    v59 = *(uint8_t **)(a2 + 8);
    v60 = *v59;
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v59 + 1);
    v61 = v59[1];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v59 + 2);
    v62 = (v59[2] << 16) | (v61 << 8);
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v59 + 3);
    v63 = v59[3];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v59 + 4);
    v64 = (v63 << 24) | v60 | v62;
    v65 = (glf::InputManager::Self *)glf::GetInputMgr(v111);
    *((uint32_t *)a1 + 1) = glf::InputManager::GetGamepad(v65, v64);
    v66 = *(uint8_t **)(a2 + 8);
    v67 = *v66;
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v66 + 1);
    v68 = v66[1];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v66 + 2);
    v69 = (v66[2] << 16) | (v68 << 8);
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v66 + 3);
    v70 = v66[3];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v66 + 4);
    *((uint32_t *)a1 + 4) = (v70 << 24) | v67 | v69;
    v71 = *(uint8_t **)(a2 + 8);
    v72 = *v71;
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v71 + 1);
    v73 = v71[1];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v71 + 2);
    v74 = (v71[2] << 16) | (v73 << 8);
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v71 + 3);
    v75 = v71[3];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v71 + 4);
    *((uint32_t *)a1 + 5) = (v75 << 24) | v72 | v74;
    v76 = *(uint8_t **)(a2 + 8);
    v77 = *v76;
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v76 + 1);
    v78 = v76[1];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v76 + 2);
    v79 = (v76[2] << 16) | (v78 << 8);
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v76 + 3);
    v80 = v76[3];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v76 + 4);
    *((uint32_t *)a1 + 6) = (v80 << 24) | v77 | v79;
    v81 = *(uint8_t **)(a2 + 8);
    v82 = *v81;
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v81 + 1);
    v83 = v81[1];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v81 + 2);
    v84 = (v81[2] << 16) | (v83 << 8);
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v81 + 3);
    v85 = v81[3];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v81 + 4);
    *((uint32_t *)a1 + 7) = (v85 << 24) | v82 | v84;
    return a1;
  }
  else
  {
    if ( v9 >= 0xCCu )
    {
      v10 = *(uint8_t **)(a2 + 8);
      v11 = *v10;
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v10 + 1);
      v12 = v10[1];
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v10 + 2);
      v13 = (v10[2] << 16) | (v12 << 8);
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v10 + 3);
      v14 = v10[3];
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v10 + 4);
      v15 = (v14 << 24) | v11 | v13;
      v16 = (glf::InputManager::Self *)glf::GetInputMgr(v111);
      *((uint32_t *)a1 + 1) = glf::InputManager::GetKeyboard(v16, v15);
      v17 = *(char **)(a2 + 8);
      v18 = *v17;
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v17 + 1);
      *((uint8_t *)a1 + 16) = v18;
      v19 = *(uint8_t **)(a2 + 8);
      v20 = *v19;
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v19 + 1);
      v21 = v19[1];
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v19 + 2);
      v22 = (v19[2] << 16) | (v21 << 8);
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v19 + 3);
      v23 = v19[3];
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v19 + 4);
      *((uint32_t *)a1 + 5) = (v23 << 24) | v20 | v22;
      v24 = *(uint8_t **)(a2 + 8);
      v25 = *v24;
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v24 + 1);
      v26 = v24[1];
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v24 + 2);
      v27 = (v24[2] << 16) | (v26 << 8);
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v24 + 3);
      v28 = v24[3];
      *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v24 + 4);
      *((uint32_t *)a1 + 6) = (v28 << 24) | v25 | v27;
      return a1;
    }
    if ( v9 == 101 )
      goto LABEL_12;
    if ( v9 <= 0x65u )
    {
      if ( v9 == 100 )
      {
LABEL_12:
        v54 = *(uint8_t **)(a2 + 8);
        v55 = *v54;
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v54 + 1);
        v56 = v54[1];
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v54 + 2);
        v57 = (v54[2] << 16) | (v56 << 8);
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v54 + 3);
        v58 = v54[3];
        *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v54 + 4);
        *((uint32_t *)a1 + 1) = (v58 << 24) | v55 | v57;
        return a1;
      }
      return nullptr;
    }
    if ( v9 < 0xC8u )
      return nullptr;
    v86 = *(uint8_t **)(a2 + 8);
    v87 = *v86;
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v86 + 1);
    v88 = v86[1];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v86 + 2);
    v89 = (v86[2] << 16) | (v88 << 8);
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v86 + 3);
    v90 = v86[3];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v86 + 4);
    v91 = (v90 << 24) | v87 | v89;
    v92 = (glf::InputManager::Self *)glf::GetInputMgr(v111);
    *((uint32_t *)a1 + 1) = glf::InputManager::GetMouse(v92, v91);
    v93 = *(uint8_t **)(a2 + 8);
    v94 = *v93;
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v93 + 1);
    v95 = v93[1];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v93 + 2);
    v96 = (v93[2] << 16) | (v95 << 8);
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v93 + 3);
    v97 = v93[3];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v93 + 4);
    *((uint32_t *)a1 + 4) = (v97 << 24) | v94 | v96;
    v98 = *(uint8_t **)(a2 + 8);
    v99 = *v98;
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v98 + 1);
    v100 = v98[1];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v98 + 2);
    v101 = (v98[2] << 16) | (v100 << 8);
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v98 + 3);
    v121 = (v98[3] << 24) | v99 | v101;
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v98 + 4);
    v102 = v98[4];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v98 + 5);
    v103 = v98[5];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v98 + 6);
    v104 = (v98[6] << 16) | (v103 << 8);
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v98 + 7);
    v105 = v98[7];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v98 + 8);
    v122 = (v105 << 24) | v102 | v104;
    glf::App::GetInstance(v113);
    glf::App::ConvertPosNormalizedScreenToScreen(v120);
    *((uint32_t *)a1 + 5) = v120[0];
    v106 = *(uint8_t **)(a2 + 8);
    v107 = *v106;
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v106 + 1);
    v108 = v106[1];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v106 + 2);
    v109 = (v106[2] << 16) | (v108 << 8);
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v106 + 3);
    v110 = v106[3];
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v106 + 4);
    *((uint32_t *)a1 + 6) = (v110 << 24) | v107 | v109;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventSerializer::StaticSerialize  (binary VA: 0xc7a7c0)
// Original: glf::AppEventSerializer::StaticSerialize
// ----------------------------------------------------------------------------
int glf::AppEventSerializer::StaticSerialize(glf::App::Self *a1, int16_t *a2, int16_t a3)
{
  uint16_t v3; // di
  char *v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  char *v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  uint16_t v15;
  const glf::InputDevice::Self *v16;
  glf::InputManager::Self *v17;
  int KeyboardIndex;
  int v19;
  int v20;
  int v21;
  char v22;
  unsigned int v23;
  const glf::InputDevice::Self *v25;
  glf::InputManager::Self *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  char v31;
  const glf::InputDevice::Self *v32;
  glf::InputManager::Self *InputMgr;
  int GamepadIndex;
  int v35;
  int v36;
  int v37;
  int v38;
  const glf::InputDevice::Self *v39;
  glf::InputManager::Self *v40;
  int MouseIndex;
  int v42;
  int v43;
  int v44;
  typedef glf::Self *_g4_t_v45;
  typedef glf::App::Self *_g4_t_v46;
  typedef glf::App::Self *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint8_t _g4_t_v50[29];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v45)) > _g4_s0 ? (0u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v46)) > _g4_s1 ? (0u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v47)) > _g4_s2 ? (0u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v48)) > _g4_s3 ? (40u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v49)) > _g4_s4 ? (44u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (63u + sizeof(_g4_t_v50)) > _g4_s5 ? (63u + sizeof(_g4_t_v50)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 63u);

  v3 = *a2;
  glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, *a2);
  glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v3));
  v4 = *((char **)a1 + 2);
  v5 = *((uint32_t *)a1 + 4);
  v6 = *((uint32_t *)a1 + 1);
  if ( v5 + 1 > (unsigned int)(uintptr_t)(&v4[-v6]) )
  {
    v50[0] = 0;
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(a1) + 4, v4, v5 + 1 - (uint32_t)(uintptr_t)(&v4[-v6]), (int)(uintptr_t)(v50));
    v6 = *((uint32_t *)a1 + 1);
    v5 = *((uint32_t *)a1 + 4);
  }
  *(uint8_t *)(v6 + v5) = a3;
  v7 = *((uint32_t *)a1 + 4);
  v8 = *((uint32_t *)a1 + 5);
  v9 = *((char **)a1 + 2);
  v10 = v7 + 1;
  *((uint32_t *)a1 + 4) = v7 + 1;
  if ( v7 + 1 >= v8 )
    v8 = v7 + 1;
  v11 = v7 + 2;
  *((uint32_t *)a1 + 5) = v8;
  v12 = *((uint32_t *)a1 + 1);
  if ( v11 > (unsigned int)(uintptr_t)(&v9[-v12]) )
  {
    v50[0] = 0;
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(a1) + 4, v9, v11 - (uint32_t)(uintptr_t)(&v9[-v12]), (int)(uintptr_t)(v50));
    v12 = *((uint32_t *)a1 + 1);
    v10 = *((uint32_t *)a1 + 4);
  }
  *(uint8_t *)(v12 + v10) = HIBYTE(a3);
  v13 = *((uint32_t *)a1 + 5);
  v14 = *((uint32_t *)a1 + 4) + 1;
  *((uint32_t *)a1 + 4) = v14;
  if ( v14 < v13 )
    v14 = v13;
  *((uint32_t *)a1 + 5) = v14;
  v15 = *a2;
  if ( (uint16_t)*a2 > 0xCDu )
  {
    if ( v15 < 0xD5u )
      return 0;
    if ( v15 > 0xD7u )
    {
      if ( v15 > 0xDAu )
        return 0;
      v32 = *((const glf::InputDevice::Self **)a2 + 1);
      InputMgr = (glf::InputManager::Self *)glf::GetInputMgr(v45);
      GamepadIndex = glf::InputManager::GetGamepadIndex(InputMgr, v32);
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, GamepadIndex);
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(GamepadIndex));
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(GamepadIndex));
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(GamepadIndex));
      v35 = *((uint32_t *)a2 + 4);
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v35);
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v35));
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(v35));
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v35));
      v36 = *((uint32_t *)a2 + 5);
      v37 = *((uint32_t *)a2 + 6);
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v36);
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v36));
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(v36));
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v36));
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v37);
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v37));
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(v37));
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v37));
      glf::App::GetInstance(v46);
      glf::App::ConvertPosScreenToNormalizedScreen(&v48);
      v38 = v48;
      v21 = v49;
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v48);
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v38));
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(v38));
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v38));
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v21);
      v31 = BYTE1(v21);
LABEL_20:
      glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v31);
      v23 = HIWORD(v21);
      goto LABEL_14;
    }
    v25 = *((const glf::InputDevice::Self **)a2 + 1);
    v26 = (glf::InputManager::Self *)glf::GetInputMgr(v45);
    v27 = glf::InputManager::GetGamepadIndex(v26, v25);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v27);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v27));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(v27));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v27));
    v28 = *((uint32_t *)a2 + 4);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v28);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v28));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(v28));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v28));
    v29 = *((uint32_t *)a2 + 5);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v29);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v29));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(v29));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v29));
    v30 = *((uint32_t *)a2 + 6);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v30);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v30));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(v30));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v30));
    v21 = *((uint32_t *)a2 + 7);
LABEL_19:
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v21);
    v31 = BYTE1(v21);
    goto LABEL_20;
  }
  if ( v15 >= 0xCCu )
  {
    v16 = *((const glf::InputDevice::Self **)a2 + 1);
    v17 = (glf::InputManager::Self *)glf::GetInputMgr(v45);
    KeyboardIndex = glf::InputManager::GetKeyboardIndex(v17, v16);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, KeyboardIndex);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(KeyboardIndex));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(KeyboardIndex));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(KeyboardIndex));
    v19 = *((uint32_t *)a2 + 4);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v19);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v19));
    v20 = *((uint32_t *)a2 + 5);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v20);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v20));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(v20));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v20));
    v21 = *((uint32_t *)a2 + 6);
LABEL_12:
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v21);
    v22 = BYTE1(v21);
LABEL_13:
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v22);
    v23 = v21 >> 16;
LABEL_14:
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v23);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v21));
    return 1;
  }
  if ( v15 == 101 )
  {
    v21 = *((uint32_t *)a2 + 1);
    goto LABEL_12;
  }
  if ( v15 > 0x65u )
  {
    if ( v15 < 0xC8u )
      return 0;
    v39 = *((const glf::InputDevice::Self **)a2 + 1);
    v40 = (glf::InputManager::Self *)glf::GetInputMgr(v45);
    MouseIndex = glf::InputManager::GetMouseIndex(v40, v39);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, MouseIndex);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(MouseIndex));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(MouseIndex));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(MouseIndex));
    v42 = *((uint32_t *)a2 + 4);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v42);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v42));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(v42));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v42));
    glf::App::GetInstance(v47);
    glf::App::ConvertPosScreenToNormalizedScreen(&v48);
    v43 = v48;
    v44 = v49;
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v48);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v43));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(v43));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v43));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v44);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE1(v44));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SBYTE2(v44));
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, SHIBYTE(v44));
    v21 = *((uint32_t *)a2 + 6);
    goto LABEL_19;
  }
  if ( v15 == 100 )
  {
    v21 = *((uint32_t *)a2 + 1);
    glf::ByteArrayWriter_vector_unsigned_char_aa9b8e::Write(a1, v21);
    v22 = BYTE1(v21);
    goto LABEL_13;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventSerializer::Destroy  (binary VA: 0xc7afe0)
// Original: glf::AppEventSerializer::~AppEventSerializer
// ----------------------------------------------------------------------------
void glf::AppEventSerializer::Destroy(glf::AppEventSerializer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D830);
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventSerializer::Destroy_eac7b230  (binary VA: 0xc7b230)
// Original: glf::AppEventSerializer::~AppEventSerializer
// ----------------------------------------------------------------------------
void glf::AppEventSerializer::Destroy_eac7b230(glf::AppEventSerializer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D830);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventSerializer::Unserialize  (binary VA: 0xc7bad0)
// Original: glf::AppEventSerializer::Unserialize
// ----------------------------------------------------------------------------
uint16_t * glf::AppEventSerializer::Unserialize(int a1, uint16_t *a2, int a3)
{
  uint16_t *EventFlags;

  EventFlags = (uint16_t *)glf::EventSerializer::GetEventFlags(a1, (int)(uintptr_t)(a2));
  return glf::AppEventSerializer::StaticUnserialize(a2, a3, EventFlags);
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventSerializer::Serialize  (binary VA: 0xc7ce00)
// Original: glf::AppEventSerializer::Serialize
// ----------------------------------------------------------------------------
int glf::AppEventSerializer::Serialize(int a1, glf::App::Self *a2, int16_t *a3)
{
  int16_t *EventFlags;

  EventFlags = (int16_t *)glf::EventSerializer::GetEventFlags(a1, (int)(uintptr_t)(a3));
  return glf::AppEventSerializer::StaticSerialize(a2, a3, *EventFlags);
}


