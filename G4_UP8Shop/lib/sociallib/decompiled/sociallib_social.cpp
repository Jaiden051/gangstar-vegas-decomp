#include "Core/Utils/DecompTypes.h"
#include "sociallib_social.h"

// ----------------------------------------------------------------------------
// Function: sociallib::AddSNSName  (binary VA: 0x1415be0)
// Original: sociallib::AddSNSName
// ----------------------------------------------------------------------------
int sociallib::AddSNSName(int a1, int a2)
{
  size_t v2;
  int result;
  char s[10];

  switch ( a2 )
  {
    case 4:
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\"Social Network\" : \"Facebook\",", 0x1Eu));
      break;
    case 5:
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\"Social Network\" : \"Game Center\",", 0x21u));
      break;
    case 6:
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\"Social Network\" : \"GLLive\",", 0x1Cu));
      break;
    case 7:
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\"Social Network\" : \"Twitter\",", 0x1Du));
      break;
    case 8:
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\"Social Network\" : \"Email Phonebook\",", 0x25u));
      break;
    case 9:
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\"Social Network\" : \"Number Phonebook\",", 0x26u));
      break;
    case 10:
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\"Social Network\" : \"Sina Weibo\",", 0x20u));
      break;
    case 11:
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\"Social Network\" : \"RenRen\",", 0x1Cu));
      break;
    case 12:
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\"Social Network\" : \"VKontakte\",", 0x1Fu));
      break;
    case 13:
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\"Social Network\" : \"Game API(aka Google Services)\",", 0x33u));
      break;
    case 14:
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\"Social Network\" : \"XboxLIVE\",", 0x1Eu));
      break;
    case 16:
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\"Social Network\" : \"Kakao\",", 0x1Bu));
      break;
    default:
      XP_API_ITOA(a2, s, 10);
      g4_std::string::append(a1, "\"Social Network\" : \"Other: ID= ", 0x1Fu);
      v2 = strlen(s);
      g4_std::string::append(a1, s, v2);
      result = (int)(uintptr_t)(g4_std::string::append(a1, "\",", 2u));
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::AddSnsType  (binary VA: 0x1415e20)
// Original: sociallib::AddSnsType
// ----------------------------------------------------------------------------
int sociallib::AddSnsType(int a1, int a2)
{
  size_t v3;
  char s[22];

  g4_std::string::append(a1, "\"Request Type\": \"", 0x11u);
  if ( a2 > ((int)(uintptr_t)(unk_2119898) - (int)(uintptr_t)(sociallib::SNSRequestState::s_snsRequestTypeNames)) >> 2 )
  {
    XP_API_ITOA(a2, s, 10);
    g4_std::string::append(a1, "Unknown: ", 9u);
    v3 = strlen(s);
    g4_std::string::append(a1, s, v3);
  }
  else
  {
    g4_std::string::append_str(a1, sociallib::SNSRequestState::s_snsRequestTypeNames + 4 * a2);
  }
  return (int)(uintptr_t)(g4_std::string::append(a1, "\",", 2u));
}

// ----------------------------------------------------------------------------
// Function: sociallib::AddActionType  (binary VA: 0x1415f10)
// Original: sociallib::AddActionType
// ----------------------------------------------------------------------------
int sociallib::AddActionType(int a1, int a2)
{
  g4_std::string::append(a1, "\"Action Type\": \"", 0x10u);
  switch ( a2 )
  {
    case 0:
      g4_std::string::append(a1, "Inactive", 8u);
      break;
    case 1:
      g4_std::string::append(a1, "Processing", 0xAu);
      break;
    case 2:
      g4_std::string::append(a1, "Finished", 8u);
      break;
    case 3:
      g4_std::string::append(a1, "Unsupported", 0xBu);
      break;
    case 4:
      g4_std::string::append(a1, "Error", 5u);
      break;
    default:
      return (int)(uintptr_t)(g4_std::string::append(a1, "\",", 2u));
  }
  return (int)(uintptr_t)(g4_std::string::append(a1, "\",", 2u));
}

// ----------------------------------------------------------------------------
// Function: sociallib::Unescape  (binary VA: 0x1416030)
// Original: sociallib::Unescape
// ----------------------------------------------------------------------------
int * sociallib::Unescape(int *a1, char **a2)
{
  char *v2;
  char *i;
  char v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v10;

  *a1 = (int)(uintptr_t)(&dword_213B814);
  v2 = *a2;
  for ( i = *a2; i != &v2[*((uint32_t *)v2 - 3)]; ++i )
  {
    v4 = *i;
    if ( *i == 10 )
    {
      g4_std::string::append((int)(uintptr_t)(a1), "\\", 1u);
      v4 = 110;
    }
    else if ( v4 == 13 )
    {
      g4_std::string::append((int)(uintptr_t)(a1), "\\", 1u);
      v4 = 116;
    }
    else if ( v4 == 9 )
    {
      g4_std::string::append((int)(uintptr_t)(a1), "\\", 1u);
      v4 = 114;
    }
    v5 = *a1;
    v6 = *(uint32_t *)(*a1 - 12);
    v7 = v6 + 1;
    if ( (unsigned int)(v6 + 1) > *(uint32_t *)(*a1 - 8) || *(int *)(v5 - 4) > 0 )
    {
      v10 = v4;
      sub_1939B80(a1, v6 + 1);
      v5 = *a1;
      v4 = v10;
      v6 = *(uint32_t *)(*a1 - 12);
    }
    *(uint8_t *)(v5 + v6) = v4;
    v8 = *a1;
    if ( (uint32_t *)(*a1 - 12) != dword_213B808 )
    {
      *(uint32_t *)(v8 - 4) = 0;
      *(uint32_t *)(v8 - 12) = v7;
      *(uint8_t *)(v8 + v7) = 0;
    }
    v2 = *a2;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SocialLibLogRequest  (binary VA: 0x1416150)
// Original: sociallib::SocialLibLogRequest
// ----------------------------------------------------------------------------
int sociallib::SocialLibLogRequest()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SocialLibLog  (binary VA: 0x1416160)
// Original: sociallib::SocialLibLog
// ----------------------------------------------------------------------------
int sociallib::SocialLibLog()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sociallib::AddRequestData  (binary VA: 0x1416170)
// Original: sociallib::AddRequestData
// ----------------------------------------------------------------------------
int sociallib::AddRequestData(uint32_t *a1, sociallib::SNSRequestState::Self *a2)
{
  uint32_t *v2;
  int Size;
  int v4;
  int v5;
  sociallib::SNSRequestState::Self *v6;
  int v7;
  char *i;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  void *v15;
  size_t v16;
  char *v17;
  void *v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  void *v24;
  char BoolParam;
  void *v26;
  void *v27;
  void *v28;
  void *v29;
  char *v30;
  void *v31;
  void *v32;
  int Int64Param;
  int v34;
  void *v35;
  void *v36;
  void *v37;
  void *v38;
  char *v39;
  char *v40;
  int UnsignedIntParam;
  void *v42;
  void *v43;
  void *v44;
  void *v45;
  char *v46;
  char *v47;
  int IntParam;
  void *v49;
  void *v50;
  void *v51;
  void *v52;
  char *v53;
  void *v54;
  void *v55;
  void *v56;
  char *v57;
  char *v58;
  void *v59;
  void *v60;
  char *v61;
  char *v62;
  uint32_t *v63;
  int v64;
  int v65;
  typedef char *_g4_t_v66;
  typedef char *_g4_t_v67;
  typedef char *_g4_t_v68;
  typedef char *_g4_t_v69;
  typedef char *_g4_t_ParamListSize;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint8_t _g4_t_v73[11];
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef void *_g4_t_v76;
  typedef char *_g4_t_s;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef void *_g4_t_v83;
  typedef char *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef void *_g4_t_v88;
  typedef char *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef char *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef char *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef void *_g4_t_v113;
  typedef char *_g4_t_v114;
  typedef int (**_g4_t_v115)(int);
  typedef int (**_g4_t_v116)(int);
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef uint8_t *_g4_t_v119;
  typedef uint8_t *_g4_t_v120;
  typedef uint8_t *_g4_t_v121;
  typedef int _g4_t_v122;
  typedef char _g4_t_v123[4];
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef uint32_t _g4_t_v126[28];
  typedef int _g4_t_v127;
  typedef char _g4_t_v128;
  typedef char _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef char _g4_t_v134[228];
  enum : size_t {
    _g4_s0 = 848u,
    _g4_s1 = (4u + sizeof(_g4_t_v66)) > _g4_s0 ? (4u + sizeof(_g4_t_v66)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v67)) > _g4_s1 ? (28u + sizeof(_g4_t_v67)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v68)) > _g4_s2 ? (44u + sizeof(_g4_t_v68)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v69)) > _g4_s3 ? (48u + sizeof(_g4_t_v69)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_ParamListSize)) > _g4_s4 ? (56u + sizeof(_g4_t_ParamListSize)) : _g4_s4,
    _g4_s6 = (151u + sizeof(_g4_t_v71)) > _g4_s5 ? (151u + sizeof(_g4_t_v71)) : _g4_s5,
    _g4_s7 = (152u + sizeof(_g4_t_v72)) > _g4_s6 ? (152u + sizeof(_g4_t_v72)) : _g4_s6,
    _g4_s8 = (156u + sizeof(_g4_t_v73)) > _g4_s7 ? (156u + sizeof(_g4_t_v73)) : _g4_s7,
    _g4_s9 = (174u + sizeof(_g4_t_v74)) > _g4_s8 ? (174u + sizeof(_g4_t_v74)) : _g4_s8,
    _g4_s10 = (185u + sizeof(_g4_t_v75)) > _g4_s9 ? (185u + sizeof(_g4_t_v75)) : _g4_s9,
    _g4_s11 = (216u + sizeof(_g4_t_v76)) > _g4_s10 ? (216u + sizeof(_g4_t_v76)) : _g4_s10,
    _g4_s12 = (220u + sizeof(_g4_t_s)) > _g4_s11 ? (220u + sizeof(_g4_t_s)) : _g4_s11,
    _g4_s13 = (224u + sizeof(_g4_t_v78)) > _g4_s12 ? (224u + sizeof(_g4_t_v78)) : _g4_s12,
    _g4_s14 = (228u + sizeof(_g4_t_v79)) > _g4_s13 ? (228u + sizeof(_g4_t_v79)) : _g4_s13,
    _g4_s15 = (232u + sizeof(_g4_t_v80)) > _g4_s14 ? (232u + sizeof(_g4_t_v80)) : _g4_s14,
    _g4_s16 = (236u + sizeof(_g4_t_v81)) > _g4_s15 ? (236u + sizeof(_g4_t_v81)) : _g4_s15,
    _g4_s17 = (240u + sizeof(_g4_t_v82)) > _g4_s16 ? (240u + sizeof(_g4_t_v82)) : _g4_s16,
    _g4_s18 = (244u + sizeof(_g4_t_v83)) > _g4_s17 ? (244u + sizeof(_g4_t_v83)) : _g4_s17,
    _g4_s19 = (248u + sizeof(_g4_t_v84)) > _g4_s18 ? (248u + sizeof(_g4_t_v84)) : _g4_s18,
    _g4_s20 = (252u + sizeof(_g4_t_v85)) > _g4_s19 ? (252u + sizeof(_g4_t_v85)) : _g4_s19,
    _g4_s21 = (256u + sizeof(_g4_t_v86)) > _g4_s20 ? (256u + sizeof(_g4_t_v86)) : _g4_s20,
    _g4_s22 = (260u + sizeof(_g4_t_v87)) > _g4_s21 ? (260u + sizeof(_g4_t_v87)) : _g4_s21,
    _g4_s23 = (264u + sizeof(_g4_t_v88)) > _g4_s22 ? (264u + sizeof(_g4_t_v88)) : _g4_s22,
    _g4_s24 = (268u + sizeof(_g4_t_v89)) > _g4_s23 ? (268u + sizeof(_g4_t_v89)) : _g4_s23,
    _g4_s25 = (272u + sizeof(_g4_t_v90)) > _g4_s24 ? (272u + sizeof(_g4_t_v90)) : _g4_s24,
    _g4_s26 = (276u + sizeof(_g4_t_v91)) > _g4_s25 ? (276u + sizeof(_g4_t_v91)) : _g4_s25,
    _g4_s27 = (280u + sizeof(_g4_t_v92)) > _g4_s26 ? (280u + sizeof(_g4_t_v92)) : _g4_s26,
    _g4_s28 = (284u + sizeof(_g4_t_v93)) > _g4_s27 ? (284u + sizeof(_g4_t_v93)) : _g4_s27,
    _g4_s29 = (288u + sizeof(_g4_t_v94)) > _g4_s28 ? (288u + sizeof(_g4_t_v94)) : _g4_s28,
    _g4_s30 = (292u + sizeof(_g4_t_v95)) > _g4_s29 ? (292u + sizeof(_g4_t_v95)) : _g4_s29,
    _g4_s31 = (296u + sizeof(_g4_t_v96)) > _g4_s30 ? (296u + sizeof(_g4_t_v96)) : _g4_s30,
    _g4_s32 = (300u + sizeof(_g4_t_v97)) > _g4_s31 ? (300u + sizeof(_g4_t_v97)) : _g4_s31,
    _g4_s33 = (304u + sizeof(_g4_t_v98)) > _g4_s32 ? (304u + sizeof(_g4_t_v98)) : _g4_s32,
    _g4_s34 = (308u + sizeof(_g4_t_v99)) > _g4_s33 ? (308u + sizeof(_g4_t_v99)) : _g4_s33,
    _g4_s35 = (312u + sizeof(_g4_t_v100)) > _g4_s34 ? (312u + sizeof(_g4_t_v100)) : _g4_s34,
    _g4_s36 = (316u + sizeof(_g4_t_v101)) > _g4_s35 ? (316u + sizeof(_g4_t_v101)) : _g4_s35,
    _g4_s37 = (320u + sizeof(_g4_t_v102)) > _g4_s36 ? (320u + sizeof(_g4_t_v102)) : _g4_s36,
    _g4_s38 = (324u + sizeof(_g4_t_v103)) > _g4_s37 ? (324u + sizeof(_g4_t_v103)) : _g4_s37,
    _g4_s39 = (328u + sizeof(_g4_t_v104)) > _g4_s38 ? (328u + sizeof(_g4_t_v104)) : _g4_s38,
    _g4_s40 = (332u + sizeof(_g4_t_v105)) > _g4_s39 ? (332u + sizeof(_g4_t_v105)) : _g4_s39,
    _g4_s41 = (336u + sizeof(_g4_t_v106)) > _g4_s40 ? (336u + sizeof(_g4_t_v106)) : _g4_s40,
    _g4_s42 = (340u + sizeof(_g4_t_v107)) > _g4_s41 ? (340u + sizeof(_g4_t_v107)) : _g4_s41,
    _g4_s43 = (344u + sizeof(_g4_t_v108)) > _g4_s42 ? (344u + sizeof(_g4_t_v108)) : _g4_s42,
    _g4_s44 = (348u + sizeof(_g4_t_v109)) > _g4_s43 ? (348u + sizeof(_g4_t_v109)) : _g4_s43,
    _g4_s45 = (352u + sizeof(_g4_t_v110)) > _g4_s44 ? (352u + sizeof(_g4_t_v110)) : _g4_s44,
    _g4_s46 = (356u + sizeof(_g4_t_v111)) > _g4_s45 ? (356u + sizeof(_g4_t_v111)) : _g4_s45,
    _g4_s47 = (360u + sizeof(_g4_t_v112)) > _g4_s46 ? (360u + sizeof(_g4_t_v112)) : _g4_s46,
    _g4_s48 = (364u + sizeof(_g4_t_v113)) > _g4_s47 ? (364u + sizeof(_g4_t_v113)) : _g4_s47,
    _g4_s49 = (368u + sizeof(_g4_t_v114)) > _g4_s48 ? (368u + sizeof(_g4_t_v114)) : _g4_s48,
    _g4_s50 = (372u + sizeof(_g4_t_v115)) > _g4_s49 ? (372u + sizeof(_g4_t_v115)) : _g4_s49,
    _g4_s51 = (376u + sizeof(_g4_t_v116)) > _g4_s50 ? (376u + sizeof(_g4_t_v116)) : _g4_s50,
    _g4_s52 = (380u + sizeof(_g4_t_v117)) > _g4_s51 ? (380u + sizeof(_g4_t_v117)) : _g4_s51,
    _g4_s53 = (384u + sizeof(_g4_t_v118)) > _g4_s52 ? (384u + sizeof(_g4_t_v118)) : _g4_s52,
    _g4_s54 = (388u + sizeof(_g4_t_v119)) > _g4_s53 ? (388u + sizeof(_g4_t_v119)) : _g4_s53,
    _g4_s55 = (392u + sizeof(_g4_t_v120)) > _g4_s54 ? (392u + sizeof(_g4_t_v120)) : _g4_s54,
    _g4_s56 = (396u + sizeof(_g4_t_v121)) > _g4_s55 ? (396u + sizeof(_g4_t_v121)) : _g4_s55,
    _g4_s57 = (400u + sizeof(_g4_t_v122)) > _g4_s56 ? (400u + sizeof(_g4_t_v122)) : _g4_s56,
    _g4_s58 = (404u + sizeof(_g4_t_v123)) > _g4_s57 ? (404u + sizeof(_g4_t_v123)) : _g4_s57,
    _g4_s59 = (408u + sizeof(_g4_t_v124)) > _g4_s58 ? (408u + sizeof(_g4_t_v124)) : _g4_s58,
    _g4_s60 = (412u + sizeof(_g4_t_v125)) > _g4_s59 ? (412u + sizeof(_g4_t_v125)) : _g4_s59,
    _g4_s61 = (416u + sizeof(_g4_t_v126)) > _g4_s60 ? (416u + sizeof(_g4_t_v126)) : _g4_s60,
    _g4_s62 = (528u + sizeof(_g4_t_v127)) > _g4_s61 ? (528u + sizeof(_g4_t_v127)) : _g4_s61,
    _g4_s63 = (532u + sizeof(_g4_t_v128)) > _g4_s62 ? (532u + sizeof(_g4_t_v128)) : _g4_s62,
    _g4_s64 = (533u + sizeof(_g4_t_v129)) > _g4_s63 ? (533u + sizeof(_g4_t_v129)) : _g4_s63,
    _g4_s65 = (536u + sizeof(_g4_t_v130)) > _g4_s64 ? (536u + sizeof(_g4_t_v130)) : _g4_s64,
    _g4_s66 = (540u + sizeof(_g4_t_v131)) > _g4_s65 ? (540u + sizeof(_g4_t_v131)) : _g4_s65,
    _g4_s67 = (544u + sizeof(_g4_t_v132)) > _g4_s66 ? (544u + sizeof(_g4_t_v132)) : _g4_s66,
    _g4_s68 = (548u + sizeof(_g4_t_v133)) > _g4_s67 ? (548u + sizeof(_g4_t_v133)) : _g4_s67,
    _g4_s69 = (552u + sizeof(_g4_t_v134)) > _g4_s68 ? (552u + sizeof(_g4_t_v134)) : _g4_s68
  };
  alignas(16) uint8_t _g4_sf[_g4_s69];
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 4u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 44u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 48u);
  _g4_t_ParamListSize &ParamListSize = *reinterpret_cast<_g4_t_ParamListSize *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 151u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 152u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 156u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 174u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 185u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 216u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 220u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 224u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 228u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 232u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 236u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 240u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 244u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 248u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 252u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 256u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 260u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 264u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 268u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 272u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 276u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 280u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 284u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 288u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 292u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 296u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 300u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 304u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 308u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 312u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 316u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 320u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 324u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 328u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 332u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 336u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 340u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 344u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 348u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 352u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 356u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 360u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 364u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 368u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 372u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 376u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 380u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 384u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 388u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 392u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 396u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 400u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 404u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 408u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 412u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 416u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 528u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 532u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 533u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 536u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 540u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 544u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 548u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 552u);

  v2 = a1;
  g4_std::string::append((int)(uintptr_t)(a1), "\"Data\":{", 8u);
  g4_std::string::append((int)(uintptr_t)(a1), "\"m_strData\":\"", 0xDu);
  g4_std::string::append_str(a1, (char *)a2 + 60);
  g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
  XP_API_ITOA(*((uint32_t *)a2 + 50), v134, 10);
  g4_std::string::append((int)(uintptr_t)(a1), "\"m_intData\":\"", 0xDu);
  g4_std::string::append((int)(uintptr_t)(a1), v134, strlen(v134));
  g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
  g4_std::string::append((int)(uintptr_t)(a1), "\"m_byteBufferDataSize\":\"", 0x18u);
  Size = sociallib::CMemoryStream::getSize((sociallib::SNSRequestState::Self *)((char *)a2 + 180));
  XP_API_ITOA(Size, v134, 10);
  g4_std::string::append((int)(uintptr_t)(a1), v134, strlen(v134));
  g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
  g4_std::string::append((int)(uintptr_t)(a1), "\"m_strArrayData\": [", 0x13u);
  if ( *((uint32_t *)a2 + 17) - *((uint32_t *)a2 + 16) > 3 )
  {
    v4 = 0;
    do
    {
      g4_std::string::append((int)(uintptr_t)(a1), "\"", 1u);
      g4_std::string::append_str(a1, *((uint32_t *)a2 + 16) + 4 * v4);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      ++v4;
    }
    while ( v4 < (*((uint32_t *)a2 + 17) - *((uint32_t *)a2 + 16)) >> 2 );
    v5 = *(uint32_t *)(*a1 - 12);
    if ( v5 == 0 )
      goto LABEL_181;
    g4_std::string::clear(a1, v5 - 1, 1, 0);
  }
  g4_std::string::append((int)(uintptr_t)(a1), "],", 2u);
  g4_std::string::append((int)(uintptr_t)(a1), "\"m_strMapData\":{", 0x10u);
  v6 = *((sociallib::SNSRequestState::Self **)a2 + 22);
  if ( v6 != (sociallib::SNSRequestState::Self *)((char *)a2 + 80) )
  {
    do
    {
      g4_std::string::append((int)(uintptr_t)(a1), "\"", 1u);
      g4_std::string::append_str(a1, (char *)v6 + 16);
      g4_std::string::append((int)(uintptr_t)(a1), "\":\"", 3u);
      g4_std::string::append_str(a1, (char *)v6 + 20);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      v6 = (sociallib::SNSRequestState::Self *)sub_1904890(v6);
    }
    while ( v6 != (sociallib::SNSRequestState::Self *)((char *)a2 + 80) );
    v7 = *(uint32_t *)(*a1 - 12);
    if ( v7 == 0 )
      goto LABEL_181;
    g4_std::string::clear(a1, v7 - 1, 1, 0);
  }
  g4_std::string::append((int)(uintptr_t)(a1), "},", 2u);
  g4_std::string::append((int)(uintptr_t)(a1), "\"m_userDataMap\":[", 0x11u);
  v69 = *((char **)a2 + 28);
  if ( v69 != (char *)a2 + 104 )
  {
    do
    {
      g4_std::string::append((int)(uintptr_t)(a1), "{", 1u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"userID\":\"", 0xAu);
      g4_std::string::append_str(a1, v69 + 16);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_bHasImageData\":\"", 0x13u);
      XP_API_ITOA((uint8_t)v69[44], v134, 10);
      g4_std::string::append((int)(uintptr_t)(a1), v134, strlen(v134));
      g4_std::string::append((int)(uintptr_t)(a1), "\"", 1u);
      g4_std::string::append((int)(uintptr_t)(a1), ",\"m_textMapData\":{", 0x12u);
      for ( i = *((char **)v69 + 8); i != v69 + 24; i = (char *)sub_1904890(i) )
      {
        g4_std::string::append((int)(uintptr_t)(a1), "\"", 1u);
        g4_std::string::append_str(a1, i + 16);
        g4_std::string::append((int)(uintptr_t)(a1), "\":\"", 3u);
        g4_std::string::append_str(a1, i + 20);
        g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      }
      v9 = *(uint32_t *)(*a1 - 12);
      if ( v9 == 0 )
        goto LABEL_181;
      g4_std::string::clear(a1, v9 - 1, 1, 0);
      g4_std::string::append((int)(uintptr_t)(a1), "},", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_imageDataSize\":\"", 0x13u);
      v10 = sociallib::CMemoryStream::getSize((sociallib::CMemoryStream::Self *)(v69 + 48));
      XP_API_ITOA(v10, v134, 10);
      g4_std::string::append((int)(uintptr_t)(a1), v134, strlen(v134));
      g4_std::string::append((int)(uintptr_t)(a1), "\"", 1u);
      g4_std::string::append((int)(uintptr_t)(a1), "},", 2u);
      v69 = (char *)sub_1904890(v69);
    }
    while ( v69 != (char *)a2 + 104 );
    v11 = *(uint32_t *)(*a1 - 12);
    if ( v11 == 0 )
      goto LABEL_181;
    g4_std::string::clear(a1, v11 - 1, 1, 0);
  }
  g4_std::string::append((int)(uintptr_t)(a1), "],", 2u);
  g4_std::string::append((int)(uintptr_t)(a1), "\"m_achievementData\":[", 0x15u);
  v12 = *((uint32_t *)a2 + 33);
  if ( v12 != *((uint32_t *)a2 + 34) )
  {
    do
    {
      g4_std::string::append((int)(uintptr_t)(a1), "{\"m_unlockedDescription\":\"", 0x1Au);
      g4_std::string::append_str(a1, v12);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_lockedDescription\":\"", 0x17u);
      g4_std::string::append_str(a1, v12 + 4);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_id\":\"", 8u);
      XP_API_ITOA(*(uint32_t *)(v12 + 12), v134, 10);
      g4_std::string::append((int)(uintptr_t)(a1), v134, strlen(v134));
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_isEarned\":\"", 0xEu);
      XP_API_ITOA(*(uint8_t *)(v12 + 16), v134, 10);
      g4_std::string::append((int)(uintptr_t)(a1), v134, strlen(v134));
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_isSecret\":\"", 0xEu);
      XP_API_ITOA(*(uint8_t *)(v12 + 17), v134, 10);
      g4_std::string::append((int)(uintptr_t)(a1), v134, strlen(v134));
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_name\":\"", 0xAu);
      g4_std::string::append_str(a1, v12 + 20);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_objectId\":\"", 0xEu);
      g4_std::string::append_str(a1, v12 + 24);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_userId\":\"", 0xCu);
      g4_std::string::append_str(a1, v12 + 28);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_userName\":\"", 0xEu);
      g4_std::string::append_str(a1, v12 + 32);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_createdTime\":\"", 0x11u);
      g4_std::string::append_str(a1, v12 + 36);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_appId\":\"", 0xBu);
      g4_std::string::append_str(a1, v12 + 40);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_appName\":\"", 0xDu);
      g4_std::string::append_str(a1, v12 + 44);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_achievementId\":\"", 0x13u);
      g4_std::string::append_str(a1, v12 + 48);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_achievementUrl\":\"", 0x14u);
      g4_std::string::append_str(a1, v12 + 52);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_achievementType\":\"", 0x15u);
      g4_std::string::append_str(a1, v12 + 56);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_likesCount\":\"", 0x10u);
      XP_API_ITOA(*(uint32_t *)(v12 + 60), v134, 10);
      g4_std::string::append((int)(uintptr_t)(a1), v134, strlen(v134));
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_commentsCount\":\"", 0x13u);
      XP_API_ITOA(*(uint32_t *)(v12 + 64), v134, 10);
      v12 += 68;
      g4_std::string::append((int)(uintptr_t)(a1), v134, strlen(v134));
      g4_std::string::append((int)(uintptr_t)(a1), "\"},", 3u);
    }
    while ( v12 != *((uint32_t *)a2 + 34) );
    v13 = *(uint32_t *)(*a1 - 12);
    if ( v13 == 0 )
      goto LABEL_181;
    g4_std::string::clear(a1, v13 - 1, 1, 0);
  }
  g4_std::string::append((int)(uintptr_t)(a1), "],", 2u);
  g4_std::string::append((int)(uintptr_t)(a1), "\"m_leaderboardRowData\":[", 0x18u);
  if ( *((uint32_t *)a2 + 36) == *((uint32_t *)a2 + 37) )
    goto LABEL_35;
  v14 = *((uint32_t **)a2 + 36);
  do
  {
    g4_std::string::append((int)(uintptr_t)(a1), "{\"m_uid\":\"", 0xAu);
    g4_std::string::append_str(a1, v14);
    g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
    g4_std::string::append((int)(uintptr_t)(a1), "\"m_name\":\"", 0xAu);
    g4_std::string::append_str(a1, v14 + 1);
    g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
    g4_std::string::append((int)(uintptr_t)(a1), "\"m_score\":\"", 0xBu);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v76), (char *)&unk_1B15112, (int)(uintptr_t)(&v71));
    sub_1900810(v126);
    v113 = &off_20AAF2C;
    v126[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v127 = 0;
    v128 = 0;
    v129 = 0;
    v130 = 0;
    v131 = 0;
    v132 = 0;
    v133 = 0;
    *(void **)((char *)&v113 + (uint32_t)*(&off_20AAF2C - 3)) = &off_20AAF40;
    v114 = nullptr;
    sub_19119D0((char *)&v113 + *((uint32_t *)v113 - 3), 0);
    v115 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(int (***)(int))((char *)&v115 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v115 + (uint32_t)(uintptr_t)(*(v115 - 3)), 0);
    v113 = &off_20AAF6C;
    *(void **)((char *)&v113 + (uint32_t)*(&off_20AAF6C - 3)) = &off_20AAF94;
    v113 = &off_20AAFEC;
    v126[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v115 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v117 = 0;
    v116 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    v118 = 0;
    v119 = nullptr;
    v120 = nullptr;
    v121 = nullptr;
    v122 = 0;
    sub_1903A70(v123);
    v124 = 0;
    v116 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    sub_193A970((int)(uintptr_t)(&v125), v76, *((uint32_t *)v76 - 3), (int)(uintptr_t)(&v73[4]));
    v124 = 24;
    sub_1931CD0(&v116, v125, 0, 0);
    sub_19119D0(v126, &v116);
    v19 = (char *)v76 - 12;
    if ( (char *)v76 - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v76 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    sub_192DD40(&v115, v14[2], v14[3]);
    s = (char *)&dword_213B814;
    if ( v121 == nullptr )
    {
      g4_std::string::assign_str(&s, &v125);
      goto LABEL_24;
    }
    if ( v121 > v119 )
    {
      sub_11A9950(&v104, v120, v121);
      g4_std::string::assign_str(&s, &v104);
      v15 = (void *)(v104 - 12);
      if ( (uint32_t *)(v104 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v104 - 4), 0xFFFFFFFF) <= 0 )
      {
LABEL_32:
        g4_std::string::Rep::M_destroy(v15);
      }
    }
    else
    {
      sub_11A9950(&v103, v120, v119);
      g4_std::string::assign_str(&s, &v103);
      v15 = (void *)(v103 - 12);
      if ( (uint32_t *)(v103 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v103 - 4), 0xFFFFFFFF) <= 0 )
      {
        goto LABEL_32;
      }
    }
LABEL_24:
    v67 = s;
    v16 = strlen(s);
    g4_std::string::append((int)(uintptr_t)(a1), v67, v16);
    v17 = s - 12;
    if ( s - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)s - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v17);
    g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
    g4_std::string::append((int)(uintptr_t)(a1), "\"m_ranking\":\"", 0xDu);
    XP_API_ITOA(v14[4], v134, 10);
    g4_std::string::append((int)(uintptr_t)(a1), v134, strlen(v134));
    g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
    g4_std::string::append((int)(uintptr_t)(a1), "\"m_country\":\"", 0xDu);
    g4_std::string::append_str(a1, v14 + 5);
    g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
    g4_std::string::append((int)(uintptr_t)(a1), "\"m_appID\":\"", 0xBu);
    g4_std::string::append_str(a1, v14 + 6);
    g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
    g4_std::string::append((int)(uintptr_t)(a1), "\"m_appName\":\"", 0xDu);
    g4_std::string::append_str(a1, v14 + 7);
    g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
    g4_std::string::append((int)(uintptr_t)(a1), "\"m_rating\":\"", 0xCu);
    g4_std::string::append_str(a1, v14 + 8);
    g4_std::string::append((int)(uintptr_t)(a1), "\"},", 3u);
    v113 = &off_20AAFEC;
    v126[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v115 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v116 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    v18 = (void *)(v125 - 12);
    if ( (uint32_t *)(v125 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v125 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    v14 += 9;
    v116 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    sub_1902180(v123);
    v113 = &off_20AAF6C;
    *(void **)((char *)&v113 + (uint32_t)*(&off_20AAF6C - 3)) = &off_20AAF94;
    v115 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(int (***)(int))((char *)&v115 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
    v113 = &off_20AAF2C;
    *(void **)((char *)&v113 + (uint32_t)*(&off_20AAF2C - 3)) = &off_20AAF40;
    v126[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v114 = nullptr;
    sub_1900B90(v126);
  }
  while ( v14 != *((uint32_t **)a2 + 37) );
  v20 = *(uint32_t *)(*a1 - 12);
  if ( v20 == 0 )
    goto LABEL_181;
  g4_std::string::clear(a1, v20 - 1, 1, 0);
LABEL_35:
  g4_std::string::append((int)(uintptr_t)(a1), "],", 2u);
  g4_std::string::append((int)(uintptr_t)(a1), "\"m_LeaderboardsType\":[", 0x16u);
  v21 = *((uint32_t *)a2 + 39);
  if ( v21 != *((uint32_t *)a2 + 40) )
  {
    do
    {
      g4_std::string::append((int)(uintptr_t)(a1), "{\"m_category\":\"", 0xFu);
      g4_std::string::append_str(a1, v21);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_title\":\"", 0xBu);
      g4_std::string::append_str(a1, v21 + 4);
      g4_std::string::append((int)(uintptr_t)(a1), "\",", 2u);
      g4_std::string::append((int)(uintptr_t)(a1), "\"m_groupID\":\"", 0xDu);
      v66 = (char *)(v21 + 8);
      v21 += 12;
      g4_std::string::append_str(a1, v66);
      g4_std::string::append((int)(uintptr_t)(a1), "\"},", 3u);
    }
    while ( v21 != *((uint32_t *)a2 + 40) );
    v22 = *(uint32_t *)(*a1 - 12);
    if ( v22 != 0 )
    {
      g4_std::string::clear(a1, v22 - 1, 1, 0);
      goto LABEL_39;
    }
LABEL_181:
    sub_1900210("basic_string::erase");
  }
LABEL_39:
  g4_std::string::append((int)(uintptr_t)(a1), "],", 2u);
  g4_std::string::append((int)(uintptr_t)(a1), "\"Parameters\":[", 0xEu);
  if ( sociallib::CMemoryStream::getSize((sociallib::SNSRequestState::Self *)((char *)a2 + 36)) != 0 )
  {
    ParamListSize = (char *)sociallib::SNSRequestState::getParamListSize(a2);
    if ( (int)(uintptr_t)(ParamListSize) > 0 )
    {
      v68 = nullptr;
      while ( 2 )
      {
        switch ( sociallib::SNSRequestState::getParamType(a2) )
        {
          case 1:
            sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v78);
            sub_59E340(&v79, "\"", &v78);
            g4_std::string::construct_copy(&v80, &v79);
            g4_std::string::append((int)(uintptr_t)(&v80), "\"", 1u);
            g4_std::string::append_str(a1, &v80);
            v54 = (void *)(v80 - 12);
            if ( (uint32_t *)(v80 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v80 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v54);
            }
            v55 = (void *)(v79 - 12);
            if ( (uint32_t *)(v79 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v79 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v55);
            }
            v56 = (void *)(v78 - 12);
            if ( (uint32_t *)(v78 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v78 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v56);
            }
            goto LABEL_45;
          case 2:
            sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v113);
            g4_std::string::append((int)(uintptr_t)(a1), "[", 1u);
            v57 = (char *)v113;
            v58 = v114;
            if ( v113 != v114 )
            {
              do
              {
                sub_59E340(&v81, "\"", v57);
                g4_std::string::construct_copy(&v82, &v81);
                g4_std::string::append((int)(uintptr_t)(&v82), "\",", 2u);
                g4_std::string::append_str(a1, &v82);
                v59 = (void *)(v82 - 12);
                if ( (uint32_t *)(v82 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v82 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v59);
                }
                v60 = (void *)(v81 - 12);
                if ( (uint32_t *)(v81 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v81 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v60);
                }
                v57 += 4;
                v58 = v114;
              }
              while ( v57 != v114 );
              v57 = (char *)v113;
            }
            if ( (unsigned int)(v58 - v57) >> 2 != 0 )
            {
              v65 = *(uint32_t *)(*a1 - 12);
              if ( v65 == 0 )
                goto LABEL_181;
              g4_std::string::clear(a1, v65 - 1, 1, 0);
            }
            g4_std::string::append((int)(uintptr_t)(a1), "]", 1u);
            v61 = (char *)v113;
            if ( v114 != v113 )
            {
              v62 = v114;
              do
              {
                v63 = (uint32_t *)(*(uint32_t *)v61 - 12);
                if ( v63 != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v61 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v63);
                }
                v61 += 4;
              }
              while ( v62 != v61 );
              v61 = (char *)v113;
            }
            if ( v61 != nullptr )
              opDelete(v61);
            goto LABEL_45;
          case 3:
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v83), (char *)&unk_1B15112, (int)(uintptr_t)(&v72));
            sub_1900810(v126);
            v127 = 0;
            v128 = 0;
            v129 = 0;
            v130 = 0;
            v131 = 0;
            v132 = 0;
            v126[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
            v133 = 0;
            v113 = &off_20AAF2C;
            *(void **)((char *)&v113 + (uint32_t)*(&off_20AAF2C - 3)) = &off_20AAF40;
            v114 = nullptr;
            sub_19119D0((char *)&v113 + *((uint32_t *)v113 - 3), 0);
            v115 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
            *(int (***)(int))((char *)&v115 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
            sub_19119D0((char *)&v115 + (uint32_t)(uintptr_t)(*(v115 - 3)), 0);
            v113 = &off_20AAF6C;
            *(void **)((char *)&v113 + (uint32_t)*(&off_20AAF6C - 3)) = &off_20AAF94;
            v113 = &off_20AAFEC;
            v117 = 0;
            v118 = 0;
            v126[0] = (uint32_t)(uintptr_t)(&off_20AB014);
            v119 = nullptr;
            v120 = nullptr;
            v115 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
            v116 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
            v121 = nullptr;
            v122 = 0;
            sub_1903A70(v123);
            v124 = 0;
            v116 = (int (**)(int))(uintptr_t)(&off_20AADA8);
            sub_193A970((int)(uintptr_t)(&v125), v83, *((uint32_t *)v83 - 3), (int)(uintptr_t)(&v74));
            v124 = 24;
            sub_1931CD0(&v116, v125, 0, 0);
            sub_19119D0(v126, &v116);
            v47 = (char *)v83 - 12;
            if ( (char *)v83 - 12 != (char *)dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)v83 - 1, 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v47);
            }
            IntParam = sociallib::SNSRequestState::getIntParam(a2);
            g4_std::ostream::op_shl_int(&v115, IntParam);
            v84 = (char *)&dword_213B814;
            if ( v121 != nullptr )
            {
              if ( v121 <= v119 )
              {
                sub_11A9950(&v105, v120, v119);
                g4_std::string::assign_str(&v84, &v105);
                v49 = (void *)(v105 - 12);
                if ( (uint32_t *)(v105 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v105 - 4), 0xFFFFFFFF) <= 0 )
                {
LABEL_114:
                  g4_std::string::Rep::M_destroy(v49);
                }
              }
              else
              {
                sub_11A9950(&v106, v120, v121);
                g4_std::string::assign_str(&v84, &v106);
                v49 = (void *)(v106 - 12);
                if ( (uint32_t *)(v106 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v106 - 4), 0xFFFFFFFF) <= 0 )
                {
                  goto LABEL_114;
                }
              }
            }
            else
            {
              g4_std::string::assign_str(&v84, &v125);
            }
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v85), v84, (int)(uintptr_t)(&v72) + 1);
            sub_59E340(&v86, "\"", &v85);
            g4_std::string::construct_copy(&v87, &v86);
            g4_std::string::append((int)(uintptr_t)(&v87), "\"", 1u);
            g4_std::string::append_str(a1, &v87);
            v50 = (void *)(v87 - 12);
            if ( (uint32_t *)(v87 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v87 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v50);
            }
            v51 = (void *)(v86 - 12);
            if ( (uint32_t *)(v86 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v86 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v51);
            }
            v52 = (void *)(v85 - 12);
            if ( (uint32_t *)(v85 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v85 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v52);
            }
            v53 = v84 - 12;
            if ( v84 - 12 != (char *)dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)v84 - 1, 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v53);
            }
            v113 = &off_20AAFEC;
            v126[0] = (uint32_t)(uintptr_t)(&off_20AB014);
            v115 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
            v116 = (int (**)(int))(uintptr_t)(&off_20AADA8);
            v31 = (void *)(v125 - 12);
            if ( (uint32_t *)(v125 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v125 - 4), 0xFFFFFFFF) <= 0 )
            {
              goto LABEL_67;
            }
            goto LABEL_56;
          case 4:
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v88), (char *)&unk_1B15112, (int)(uintptr_t)(&v72) + 2);
            sub_1900810(v126);
            v127 = 0;
            v128 = 0;
            v129 = 0;
            v130 = 0;
            v131 = 0;
            v132 = 0;
            v126[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
            v133 = 0;
            v113 = &off_20AAF2C;
            *(void **)((char *)&v113 + (uint32_t)*(&off_20AAF2C - 3)) = &off_20AAF40;
            v114 = nullptr;
            sub_19119D0((char *)&v113 + *((uint32_t *)v113 - 3), 0);
            v115 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
            *(int (***)(int))((char *)&v115 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
            sub_19119D0((char *)&v115 + (uint32_t)(uintptr_t)(*(v115 - 3)), 0);
            v113 = &off_20AAF6C;
            *(void **)((char *)&v113 + (uint32_t)*(&off_20AAF6C - 3)) = &off_20AAF94;
            v113 = &off_20AAFEC;
            v117 = 0;
            v118 = 0;
            v126[0] = (uint32_t)(uintptr_t)(&off_20AB014);
            v119 = nullptr;
            v120 = nullptr;
            v115 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
            v116 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
            v121 = nullptr;
            v122 = 0;
            sub_1903A70(v123);
            v124 = 0;
            v116 = (int (**)(int))(uintptr_t)(&off_20AADA8);
            sub_193A970((int)(uintptr_t)(&v125), v88, *((uint32_t *)v88 - 3), (int)(uintptr_t)(&v75));
            v124 = 24;
            sub_1931CD0(&v116, v125, 0, 0);
            sub_19119D0(v126, &v116);
            v40 = (char *)v88 - 12;
            if ( (char *)v88 - 12 != (char *)dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)v88 - 1, 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v40);
            }
            UnsignedIntParam = sociallib::SNSRequestState::getUnsignedIntParam(a2);
            sub_192D8B0(&v115, UnsignedIntParam);
            v89 = (char *)&dword_213B814;
            if ( v121 != nullptr )
            {
              if ( v121 <= v119 )
              {
                sub_11A9950(&v107, v120, v119);
                g4_std::string::assign_str(&v89, &v107);
                v42 = (void *)(v107 - 12);
                if ( (uint32_t *)(v107 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v107 - 4), 0xFFFFFFFF) <= 0 )
                {
LABEL_111:
                  g4_std::string::Rep::M_destroy(v42);
                }
              }
              else
              {
                sub_11A9950(&v108, v120, v121);
                g4_std::string::assign_str(&v89, &v108);
                v42 = (void *)(v108 - 12);
                if ( (uint32_t *)(v108 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v108 - 4), 0xFFFFFFFF) <= 0 )
                {
                  goto LABEL_111;
                }
              }
            }
            else
            {
              g4_std::string::assign_str(&v89, &v125);
            }
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v90), v89, (int)(uintptr_t)(&v72) + 3);
            sub_59E340(&v91, "\"", &v90);
            g4_std::string::construct_copy(&v92, &v91);
            g4_std::string::append((int)(uintptr_t)(&v92), "\"", 1u);
            g4_std::string::append_str(a1, &v92);
            v43 = (void *)(v92 - 12);
            if ( (uint32_t *)(v92 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v92 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v43);
            }
            v44 = (void *)(v91 - 12);
            if ( (uint32_t *)(v91 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v91 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v44);
            }
            v45 = (void *)(v90 - 12);
            if ( (uint32_t *)(v90 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v90 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v45);
            }
            v46 = v89 - 12;
            if ( v89 - 12 != (char *)dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)v89 - 1, 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v46);
            }
            v113 = &off_20AAFEC;
            v126[0] = (uint32_t)(uintptr_t)(&off_20AB014);
            v115 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
            v116 = (int (**)(int))(uintptr_t)(&off_20AADA8);
            v31 = (void *)(v125 - 12);
            if ( (uint32_t *)(v125 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v125 - 4), 0xFFFFFFFF) <= 0 )
            {
              goto LABEL_67;
            }
            goto LABEL_56;
          case 5:
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v93), (char *)&unk_1B15112, (int)(uintptr_t)(v73));
            sub_1933B30(&v113, &v93, 24);
            v32 = (void *)(v93 - 12);
            if ( (uint32_t *)(v93 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v93 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v32);
            }
            Int64Param = sociallib::SNSRequestState::getInt64Param(a2);
            sub_192DD40(&v115, Int64Param, v34);
            v94 = (char *)&dword_213B814;
            if ( v121 != nullptr )
            {
              if ( v121 <= v119 )
              {
                sub_11A9950(&v109, v120, v119);
                g4_std::string::assign_str(&v94, &v109);
                v35 = (void *)(v109 - 12);
                if ( (uint32_t *)(v109 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v109 - 4), 0xFFFFFFFF) <= 0 )
                {
LABEL_120:
                  g4_std::string::Rep::M_destroy(v35);
                }
              }
              else
              {
                sub_11A9950(&v110, v120, v121);
                g4_std::string::assign_str(&v94, &v110);
                v35 = (void *)(v110 - 12);
                if ( (uint32_t *)(v110 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v110 - 4), 0xFFFFFFFF) <= 0 )
                {
                  goto LABEL_120;
                }
              }
            }
            else
            {
              g4_std::string::assign_str(&v94, &v125);
            }
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v95), v94, (int)(uintptr_t)(&v73[1]));
            sub_59E340(&v96, "\"", &v95);
            g4_std::string::construct_copy(&v97, &v96);
            g4_std::string::append((int)(uintptr_t)(&v97), "\"", 1u);
            g4_std::string::append_str(a1, &v97);
            v36 = (void *)(v97 - 12);
            if ( (uint32_t *)(v97 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v97 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v36);
            }
            v37 = (void *)(v96 - 12);
            if ( (uint32_t *)(v96 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v96 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v37);
            }
            v38 = (void *)(v95 - 12);
            if ( (uint32_t *)(v95 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v95 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v38);
            }
            v39 = v94 - 12;
            if ( v94 - 12 != (char *)dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)v94 - 1, 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v39);
            }
            v113 = &off_20AAFEC;
            v115 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
            v126[0] = (uint32_t)(uintptr_t)(&off_20AB014);
            v116 = (int (**)(int))(uintptr_t)(&off_20AADA8);
            v31 = (void *)(v125 - 12);
            if ( (uint32_t *)(v125 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v125 - 4), 0xFFFFFFFF) <= 0 )
            {
              goto LABEL_67;
            }
            goto LABEL_56;
          case 6:
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v98), (char *)&unk_1B15112, (int)(uintptr_t)(&v73[2]));
            sub_1933B30(&v113, &v98, 24);
            v24 = (void *)(v98 - 12);
            if ( (uint32_t *)(v98 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v98 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v24);
            }
            BoolParam = sociallib::SNSRequestState::getBoolParam(a2);
            sub_192DB00(&v115, BoolParam);
            v99 = (char *)&dword_213B814;
            if ( v121 != nullptr )
            {
              if ( v121 <= v119 )
              {
                sub_11A9950(&v111, v120, v119);
                g4_std::string::assign_str(&v99, &v111);
                v26 = (void *)(v111 - 12);
                if ( (uint32_t *)(v111 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v111 - 4), 0xFFFFFFFF) <= 0 )
                {
LABEL_117:
                  g4_std::string::Rep::M_destroy(v26);
                }
              }
              else
              {
                sub_11A9950(&v112, v120, v121);
                g4_std::string::assign_str(&v99, &v112);
                v26 = (void *)(v112 - 12);
                if ( (uint32_t *)(v112 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v112 - 4), 0xFFFFFFFF) <= 0 )
                {
                  goto LABEL_117;
                }
              }
            }
            else
            {
              g4_std::string::assign_str(&v99, &v125);
            }
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v100), v99, (int)(uintptr_t)(&v73[3]));
            sub_59E340(&v101, "\"", &v100);
            g4_std::string::construct_copy(&v102, &v101);
            g4_std::string::append((int)(uintptr_t)(&v102), "\"", 1u);
            g4_std::string::append_str(a1, &v102);
            v27 = (void *)(v102 - 12);
            if ( (uint32_t *)(v102 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v102 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v27);
            }
            v28 = (void *)(v101 - 12);
            if ( (uint32_t *)(v101 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v101 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v28);
            }
            v29 = (void *)(v100 - 12);
            if ( (uint32_t *)(v100 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v100 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v29);
            }
            v30 = v99 - 12;
            if ( v99 - 12 != (char *)dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)v99 - 1, 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v30);
            }
            v113 = &off_20AAFEC;
            v115 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
            v126[0] = (uint32_t)(uintptr_t)(&off_20AB014);
            v116 = (int (**)(int))(uintptr_t)(&off_20AADA8);
            v31 = (void *)(v125 - 12);
            if ( (uint32_t *)(v125 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v125 - 4), 0xFFFFFFFF) <= 0 )
            {
LABEL_67:
              g4_std::string::Rep::M_destroy(v31);
            }
LABEL_56:
            v116 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
            sub_1902180(v123);
            v113 = &off_20AAF6C;
            *(void **)((char *)&v113 + (uint32_t)*(&off_20AAF6C - 3)) = &off_20AAF94;
            v115 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
            *(int (***)(int))((char *)&v115 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
            v113 = &off_20AAF2C;
            *(void **)((char *)&v113 + (uint32_t)*(&off_20AAF2C - 3)) = &off_20AAF40;
            v114 = nullptr;
            v126[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
            sub_1900B90(v126);
LABEL_45:
            g4_std::string::append((int)(uintptr_t)(a1), ",", 1u);
            if ( ++v68 != ParamListSize )
              continue;
            v2 = a1;
            v64 = *(uint32_t *)(*a1 - 12);
            if ( v64 == 0 )
              goto LABEL_181;
            g4_std::string::clear(a1, v64 - 1, 1, 0);
            break;
          default:
            g4_std::string::append((int)(uintptr_t)(a1), "\"\"", 2u);
            goto LABEL_45;
        }
        break;
      }
    }
  }
  g4_std::string::append((int)(uintptr_t)(v2), "]", 1u);
  return (int)(uintptr_t)(g4_std::string::append((int)(uintptr_t)(v2), "}", 1u));
}

// ----------------------------------------------------------------------------
// Function: sociallib::SocialLibGetGeneralInfo  (binary VA: 0x14193d0)
// Original: sociallib::SocialLibGetGeneralInfo
// ----------------------------------------------------------------------------
int sociallib::SocialLibGetGeneralInfo(char **a1, sociallib::SNSRequestState::Self *a2)
{
  size_t v2;
  int result;
  void *v4;
  typedef int _g4_t_v5;
  typedef char _g4_t_s[22];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (6u + sizeof(_g4_t_s)) > _g4_s1 ? (6u + sizeof(_g4_t_s)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 6u);

  g4_std::string::append((int)(uintptr_t)(a1), "\"requestId\":", 0xCu);
  XP_API_ITOA(*(uint32_t *)a2, s, 10);
  v2 = strlen(s);
  g4_std::string::append((int)(uintptr_t)(a1), s, v2);
  g4_std::string::append((int)(uintptr_t)(a1), ",", 1u);
  sociallib::AddSNSName((int)(uintptr_t)(a1), *((uint32_t *)a2 + 4));
  sociallib::AddSnsType((int)(uintptr_t)(a1), *((uint32_t *)a2 + 2));
  sociallib::AddActionType((int)(uintptr_t)(a1), *((uint32_t *)a2 + 1));
  sociallib::AddRequestData((uint32_t *)(a1), a2);
  sociallib::Unescape(&v5, a1);
  g4_std::string::assign_str(a1, &v5);
  result = v5;
  v4 = (void *)(v5 - 12);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v4)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GetSaveFilePath  (binary VA: 0x141ec00)
// Original: sociallib::GetSaveFilePath
// ----------------------------------------------------------------------------
int sociallib::GetSaveFilePath(sociallib::Self *self, char *a2)
{
  char *SaveFolder;

  SaveFolder = AndroidOS_GetSaveFolder();
  return sprintf((char *)self, "%s/%s", SaveFolder, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GetConfigFilePath  (binary VA: 0x141ec40)
// Original: sociallib::GetConfigFilePath
// ----------------------------------------------------------------------------
int sociallib::GetConfigFilePath(sociallib::Self *self, char *a2)
{
  char *SaveFolder;

  SaveFolder = AndroidOS_GetSaveFolder();
  return sprintf((char *)self, "%s/%s", SaveFolder, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GetNextResponseToken  (binary VA: 0x1425310)
// Original: sociallib::GetNextResponseToken
// ----------------------------------------------------------------------------
char * sociallib::GetNextResponseToken(const char **a1, char *dest)
{
  size_t v2;
  size_t v3;
  size_t v4;
  void *v5;
  void *v7;
  typedef uint16_t _g4_t_v8[3];
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (6u + sizeof(_g4_t_v8)) > _g4_s0 ? (6u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 6u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v2 = (size_t)(uintptr_t)(sub_1937EB0(a1, 124, 0));
  v3 = v2;
  if ( v2 == -1 )
  {
    strcpy(dest, *a1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v9), (char *)&unk_1B15112, (int)(uintptr_t)(v8));
    g4_std::string::assign_str(a1, v9);
    v7 = (void *)(v9[0] - 12);
    if ( (uint32_t *)(v9[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
  }
  else
  {
    XP_API_STRNCPY(dest, (char *)*a1, v2);
    dest[v3] = 0;
    v4 = v3 + 1;
    if ( v4 > *((uint32_t *)*a1 - 3) )
      sub_1900210("basic_string::substr");
    sub_193A6F0(&v8[1], a1, v4, -1);
    g4_std::string::assign_str(a1, &v8[1]);
    v5 = (void *)(*(uint32_t *)&v8[1] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v8[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v8[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
  }
  return dest;
}

// ----------------------------------------------------------------------------
// Function: sociallib::IsNextResponseStringToken  (binary VA: 0x1425470)
// Original: sociallib::IsNextResponseStringToken
// ----------------------------------------------------------------------------
bool sociallib::IsNextResponseStringToken(const char **a1, char *a2)
{
  char v3[256];

  memset(v3, 0, sizeof(v3));
  sociallib::GetNextResponseToken(a1, v3);
  return XP_API_STRCMP(a2, v3) == 0;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GetNextResponseIntToken  (binary VA: 0x14254f0)
// Original: sociallib::GetNextResponseIntToken
// ----------------------------------------------------------------------------
int sociallib::GetNextResponseIntToken(const char **a1)
{
  char v2[256];

  memset(v2, 0, sizeof(v2));
  sociallib::GetNextResponseToken(a1, v2);
  return XP_API_ATOI(v2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::urlToImageByteBuffer  (binary VA: 0x143b560)
// Original: sociallib::urlToImageByteBuffer
// ----------------------------------------------------------------------------
sociallib::CDynamicMemoryStream::Self * sociallib::urlToImageByteBuffer(sociallib::CDynamicMemoryStream::Self *a1, uint32_t *a2)
{
  int v2;
  signed int size;
  typedef size_t _g4_t_v5;
  typedef size_t _g4_t_v6;
  typedef int _g4_t_v7;
  typedef char _g4_t_v8;
  typedef char *_g4_t_ptr;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[20];
  typedef uint8_t _g4_t_v12[48];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v6)) > _g4_s1 ? (0u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v7)) > _g4_s2 ? (4u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (11u + sizeof(_g4_t_v8)) > _g4_s3 ? (11u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_ptr)) > _g4_s4 ? (12u + sizeof(_g4_t_ptr)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v10)) > _g4_s5 ? (20u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v11)) > _g4_s6 ? (24u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v12)) > _g4_s7 ? (44u + sizeof(_g4_t_v12)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 11u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  sub_143B440();
  v10 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v10, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v10, 0);
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  sociallib::CDynamicMemoryStream::CDynamicMemoryStream((sociallib::CDynamicMemoryStream::Self *)v11, nullptr, 0);
  if ( v10 != 0 )
  {
    v5 = G4_VCALL<int>(v10, 668, *a2);
    v7 = JNIEnv::CallStaticObjectMethod(v10, dword_2119A88, dword_2119A8C, v5);
    v2 = G4_VCALL<int>(v10, 84, v7);
    G4_VCALL<void>(v10, 92, v5);
    if ( v2 != 0 )
    {
      size = G4_VCALL<int>(v10, 684, v2);
      if ( size > 0 )
      {
        v6 = size;
        ptr = (char *)malloc(size);
        if ( ptr != nullptr )
        {
          G4_VCALL<void>(v10, 800, v2, 0, v6, ptr);
          G4_VCALL<void>(v10, 88, v2);
          G4_VCALL<void>(v10, 92, v7);
          sociallib::CMemoryStream::writeBytes((sociallib::CMemoryStream::Self *)v11, ptr, v6);
          free(ptr);
          sociallib::CDynamicMemoryStream::CDynamicMemoryStream(a1, (const sociallib::CDynamicMemoryStream::Self *)v11);
          goto LABEL_8;
        }
        G4_VCALL<void>(v10, 88, v2);
        G4_VCALL<void>(v10, 92, v7);
        goto LABEL_16;
      }
      G4_VCALL<void>(v10, 88, v2);
    }
    else if ( v7 == 0 )
    {
LABEL_14:
      sociallib::CDynamicMemoryStream::CDynamicMemoryStream(a1, nullptr, 0);
      goto LABEL_8;
    }
    G4_VCALL<void>(v10, 92, v7);
    goto LABEL_14;
  }
LABEL_16:
  sociallib::CDynamicMemoryStream::CDynamicMemoryStream((sociallib::CDynamicMemoryStream::Self *)v12, nullptr, 0);
  sociallib::CMemoryStream::opAssign((sociallib::CMemoryStream::Self *)v11, (const sociallib::CMemoryStream::Self *)v12);
  sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v12);
  sociallib::CDynamicMemoryStream::CDynamicMemoryStream(a1, (const sociallib::CDynamicMemoryStream::Self *)v11);
LABEL_8:
  sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v11);
  if ( v8 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sociallib::urlToImageString  (binary VA: 0x143b830)
// Original: sociallib::urlToImageString
// ----------------------------------------------------------------------------
int sociallib::urlToImageString(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  int *v4;
  int size;
  void *v6;
  void *v7;
  typedef char *_g4_t_v9;
  typedef void *_g4_t_ptr;
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_ptr)) > _g4_s1 ? (36u + sizeof(_g4_t_ptr)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v11)) > _g4_s2 ? (40u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (47u + sizeof(_g4_t_v12)) > _g4_s3 ? (47u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (51u + sizeof(_g4_t_v13)) > _g4_s4 ? (51u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v14)) > _g4_s5 ? (52u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v15)) > _g4_s6 ? (56u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v16)) > _g4_s7 ? (60u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 47u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 51u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);

  sub_143B440();
  v15 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v15, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v15, 0);
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  if ( v15 == 0 )
    goto LABEL_11;
  v2 = G4_VCALL<int>(v15, 668, *a2);
  v11 = JNIEnv::CallStaticObjectMethod(v15, dword_2119A88, dword_2119A8C, v2);
  v3 = G4_VCALL<int>(v15, 84, v11);
  G4_VCALL<void>(v15, 92, v2);
  v4 = &v13;
  if ( v3 == 0 )
    goto LABEL_12;
  size = G4_VCALL<int>(v15, 684, v3);
  v4 = &v14;
  if ( size <= 0 )
    goto LABEL_12;
  v6 = malloc(size);
  if ( v6 == nullptr )
  {
    G4_VCALL<void>(v15, 88, v3);
    G4_VCALL<void>(v15, 92, v11);
LABEL_11:
    v4 = (int *)((char *)&v14 + 2);
LABEL_12:
    g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(v4));
    goto LABEL_13;
  }
  ptr = v6;
  G4_VCALL<void>(v15, 800, v3, 0, size, v6);
  G4_VCALL<void>(v15, 88, v3);
  G4_VCALL<void>(v15, 92, v11);
  sub_193A970((int)(uintptr_t)(v16), ptr, size, (int)(uintptr_t)(&v14) + 1);
  free(ptr);
  g4_std::string::construct_copy(a1, v16);
  v7 = (void *)(v16[0] - 12);
  if ( (uint32_t *)(v16[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v9 = (char *)&v14 + 3;
    g4_std::string::Rep::M_destroy(v7);
  }
LABEL_13:
  if ( v12 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20, v9);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sociallib::urlToJByteArray  (binary VA: 0x143ba80)
// Original: sociallib::urlToJByteArray
// ----------------------------------------------------------------------------
int sociallib::urlToJByteArray(uint32_t *a1)
{
  int v1;
  int v2;
  typedef char _g4_t_v4;
  typedef int _g4_t_v5[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v4)) > _g4_s0 ? (15u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v5)) > _g4_s1 ? (28u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 15u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  sub_143B440();
  v5[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v5, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v5, 0);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v5[0] != 0 )
  {
    v1 = G4_VCALL<int>(v5[0], 668, *a1);
    v2 = JNIEnv::CallStaticObjectMethod(v5[0], dword_2119A88, dword_2119A8C, v1);
    G4_VCALL<void>(v5[0], 84, v2);
    G4_VCALL<void>(v5[0], 92, v1);
    if ( v2 != 0 )
      G4_VCALL<void>(v5[0], 92, v2);
  }
  if ( v4 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return 0;
}


